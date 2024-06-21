# Write a program that prompts the user to enter a string. The program calculates and displays the length of the string until the user enters "QUIT"

while True:
    s = input("Enter a string (type 'QUIT' to exit): ")
    if s == "QUIT":
        break
    print(f"Length of the string: {len(s)}")
