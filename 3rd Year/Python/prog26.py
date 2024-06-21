# Write a program to generate the following patterns

#pattern1
for i in range(1, 6):
    print('$' * i + '*' * (5 - i))

#pattern2
for i in range(1, 6):
    print('*' * (5 - i) + '$' + '*' * (i - 1))
