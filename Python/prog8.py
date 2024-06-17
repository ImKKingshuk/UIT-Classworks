# Write a program that asks the user for a string and prints the location of each a in the string 

input_string = input("Enter a string: ")
locations = [index for index, char in enumerate(input_string) if char == 'a']

print(locations)
