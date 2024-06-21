# Write a program that counts the number of digits, uppercase characters and lowercase characters was entered

def count_characters(s):
    digits = sum(c.isdigit() for c in s)
    uppercase = sum(c.isupper() for c in s)
    lowercase = sum(c.islower() for c in s)
    return digits, uppercase, lowercase

input_string = input("Enter a string: ")
digits, uppercase, lowercase = count_characters(input_string)
print(f"Digits: {digits}, Uppercase: {uppercase}, Lowercase: {lowercase}")
