# Write a program to enter a string and remove vowels from the string

input_string = input("Enter a string: ")
vowels = "aeiouAEIOU"
no_vowels_string = ''.join([char for char in input_string if char not in vowels])

print(no_vowels_string)
