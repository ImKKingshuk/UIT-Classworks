# Write a program that accepts any number and prints the number of digits in that number.

def count_digits(n):
    return len(str(n))

n = int(input("Enter a number: "))
print(f"Number of digits: {count_digits(n)}")
