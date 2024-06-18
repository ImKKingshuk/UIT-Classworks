# Write a program that asks the user to input the value n and calculate (1+1/2+1/3+...+1/n)- ln(n)

import math

n = int(input("Enter the value of n: "))
harmonic_sum = sum(1/i for i in range(1, n+1))
result = harmonic_sum - math.log(n)

print(result)
