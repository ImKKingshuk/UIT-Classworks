# Write a function to convert a given string to all uppercase if it contains at least 2 uppercase characters in the first 4 characters.

def convert_to_uppercase(s):
    if sum(1 for c in s[:4] if c.isupper()) >= 2:
        return s.upper()
    return s

s = input("Enter a string: ")
print(f"Result: {convert_to_uppercase(s)}")
