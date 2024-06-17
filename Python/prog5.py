# Write a program that asks the user to input a string and creates a new string that doubles each character

input_string = input("Enter a string: ")
doubled_string = ''.join([char*2 for char in input_string])

print(doubled_string)
