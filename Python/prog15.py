# Factorial of a number

def factorial(n):
    return 1 if n == 0 else n * factorial(n - 1)

num = int(input("Enter a number: "))
fact = factorial(num)

print(fact)
