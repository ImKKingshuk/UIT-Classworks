# Write a program that counts how many of the square of the number 1-100 end in 1

count_ending_in_1 = sum(1 for i in range(1, 101) if (i**2) % 10 == 1)

print(count_ending_in_1)

