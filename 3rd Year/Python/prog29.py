# Write a python program to get a single string from two given strings, separated by a space and swap the first two characters of each string.

def swap_and_concatenate(s1, s2):
    if len(s1) < 2 or len(s2) < 2:
        return s1 + " " + s2
    return s2[:2] + s1[2:] + " " + s1[:2] + s2[2:]

s1 = input("Enter first string: ")
s2 = input("Enter second string: ")
print(f"Result: {swap_and_concatenate(s1, s2)}")
