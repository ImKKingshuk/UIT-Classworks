# Find the square root value of a quadratic equation, find out for both real and imaginary part

import cmath

a = float(input("Enter coefficient a: "))
b = float(input("Enter coefficient b: "))
c = float(input("Enter coefficient c: "))

discriminant = cmath.sqrt(b**2 - 4*a*c)
root1 = (-b + discriminant) / (2*a)
root2 = (-b - discriminant) / (2*a)

print(f"Root 1: {root1}")
print(f"Root 2: {root2}")
