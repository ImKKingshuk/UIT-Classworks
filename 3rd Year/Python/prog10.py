# Find out how many numbers are square numbers, cube numbers, and how many are the 5th power number below 1000

square_numbers = len([i for i in range(1, 1000) if int(i**0.5)**2 == i])
cube_numbers = len([i for i in range(1, 1000) if int(i**(1/3))**3 == i])
fifth_power_numbers = len([i for i in range(1, 1000) if int(i**(1/5))**5 == i])

print(f"Square numbers: {square_numbers}")
print(f"Cube numbers: {cube_numbers}")
print(f"5th power numbers: {fifth_power_numbers}")
