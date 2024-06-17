# Write a program to generate 10000 random numbers between 1 and 100 and count how many of them are multiplies of 12
import random

random_numbers = [random.randint(1, 100) for _ in range(10000)]
count_multiples_of_12 = sum(1 for number in random_numbers if number % 12 == 0)

print(count_multiples_of_12)

