# Write a program that asks the user to input his name and prints it in following funny way, M Me Meo Meow

name = input("Enter your name: ")
funny_name = " ".join([name[:i+1] for i in range(len(name))])

print(funny_name)
