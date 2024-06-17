# Write a program to enter a string and prints whether the string starts with a letter or not

input_string = input("Enter a string: ")

if input_string and input_string[0].isalpha():
    print("The string starts with a letter.")
else:
    print("The string does not start with a letter.")

