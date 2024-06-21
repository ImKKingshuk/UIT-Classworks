# Write a program to concatenate two strings using recursion.

def concatenate(s1, s2):
    if s1 == "":
        return s2
    if s2 == "":
        return s1
    return s1[0] + concatenate(s1[1:], s2)

s1 = input("Enter first string: ")
s2 = input("Enter second string: ")
print(f"Concatenated string: {concatenate(s1, s2)}")
