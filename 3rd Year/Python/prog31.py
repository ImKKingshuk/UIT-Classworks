# Write a function to get a string made of its first three characters of a specified string. If the length of the string is less than 3, then return the original string.

def first_three_chars(s):
    return s if len(s) < 3 else s[:3]

s = input("Enter a string: ")
print(f"Result: {first_three_chars(s)}")
