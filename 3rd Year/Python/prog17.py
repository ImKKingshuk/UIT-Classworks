# Write a program to find how many numbers between 1-100 contain digit 3

count_contain_3 = sum(1 for i in range(1, 101) if '3' in str(i))

print(count_contain_3)
