# Write a program to check whether a number is odd or even or prime 

num = int(input("Enter a number: "))

if num % 2 == 0:
    print(f"{num} is even.")
else:
    print(f"{num} is odd.")

is_prime = num > 1 and all(num % i != 0 for i in range(2, int(num**0.5) + 1))
if is_prime:
    print(f"{num} is prime.")
else:
    print(f"{num} is not prime.")
