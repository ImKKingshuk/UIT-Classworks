# Asymmetric Travelling Salesman Problem with Time Windows (ATSP-TW)


# Problem Statement:
# In the ATSP-TW, the task is to find the shortest route that visits a set of cities, starting and ending at the same city, while respecting the given time windows for each city. Each city must be visited exactly once, and the objective is to minimize the total travel time.

# Additional Constraints:
# The time windows specify a range during which the salesman must arrive at each city.
# The travel time between cities is asymmetric (i.e., the time to travel from city A to city B may be different from the time to travel from city B to city A).
# The salesman cannot leave a city before its time window opens, and they must arrive before its time window closes.

# Solution Approach:
# Solving the ATSP-TW is significantly more complex than the classic TSP. It often requires the application of advanced optimization techniques, such as Mixed-Integer Linear Programming (MILP), Branch and Bound, or sophisticated heuristic algorithms.

# Here's an outline of an approach using a heuristic algorithm like Ant Colony Optimization (ACO) or Genetic Algorithms (GA):
# Initialization: Generate an initial population of candidate solutions (tours). Evaluate the fitness of each solution based on total travel time and adherence to time windows.
# Iteration: Apply operators like crossover and mutation to create new candidate solutions. Evaluate the fitness of the new solutions.
# Selection: Select a subset of solutions for the next iteration, favoring those with better fitness.
# Termination: Repeat the iteration process until a termination condition is met (e.g., a maximum number of iterations or convergence criteria).


from ortools.linear_solver import pywraplp

def solve_atsp_tw(distance_matrix, time_windows):
    num_nodes = len(distance_matrix)

    # Create a solver
    solver = pywraplp.Solver.CreateSolver('SCIP')

    # Create decision variables
    x = {}
    for i in range(num_nodes):
        for j in range(num_nodes):
            if i != j:
                x[i, j] = solver.BoolVar('x[%i,%i]' % (i, j))

    # Create time variables
    t = {}
    for i in range(num_nodes):
        t[i] = solver.NumVar(0, solver.infinity(), 't[%i]' % i)

    # Objective function: minimize total travel time
    objective = solver.Objective()
    for i in range(num_nodes):
        for j in range(num_nodes):
            if i != j:
                objective.SetCoefficient(x[i, j], distance_matrix[i][j])

    objective.SetMinimization()

    # Constraints: each node must be visited exactly once
    for i in range(num_nodes):
        # Outgoing edges
        solver.Add(solver.Sum(x[i, j] for j in range(num_nodes) if i != j) == 1)
        # Incoming edges
        solver.Add(solver.Sum(x[j, i] for j in range(num_nodes) if i != j) == 1)

    # Constraints: time windows
    for i in range(1, num_nodes):
        solver.Add(t[i] >= time_windows[i][0])
        solver.Add(t[i] <= time_windows[i][1])

    # Constraints: subtour elimination
    for i in range(1, num_nodes):
        for j in range(1, num_nodes):
            if i != j:
                solver.Add(t[j] >= t[i] + x[i, j] * (time_windows[j][0] - time_windows[i][1] - distance_matrix[i][j]))

    # Solve the problem
    status = solver.Solve()

    if status == pywraplp.Solver.OPTIMAL:
        print('Objective value =', objective.Value())
        solution = [0]  # Start from node 0
        while True:
            for j in range(num_nodes):
                if i != j and x[i, j].solution_value() > 0.5:
                    solution.append(j)
                    i = j
                    break
            if i == 0:
                break

        print('Solution:', solution)
    else:
        print('The problem does not have an optimal solution.')

# Example usage
distance_matrix = [
    [0, 10, 15, 20],
    [10, 0, 35, 25],
    [15, 35, 0, 30],
    [20, 25, 30, 0]
]

time_windows = [
    (0, 5),
    (10, 20),
    (5, 15),
    (30, 40)
]

solve_atsp_tw(distance_matrix, time_windows)

