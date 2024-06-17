# Multiplication of Matrix using function 

def multiply_matrices(matrix1, matrix2):
    result = [[sum(a*b for a, b in zip(row, col)) for col in zip(*matrix2)] for row in matrix1]
    return result

matrix1 = [[1, 2], [3, 4]]
matrix2 = [[5, 6], [7, 8]]
result_matrix = multiply_matrices(matrix1, matrix2)

for row in result_matrix:
    print(row)
