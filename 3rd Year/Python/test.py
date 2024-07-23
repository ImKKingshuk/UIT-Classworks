print ("ImKKingshuk")

sum= 5+3
print(f"result of sum: {sum}")

difference=5-3
print(f"result of difference : {difference}")

product=5*3
print(f"product of meow : {product}")

division=6/3
print (f"division result : {division}")

power=2**3
print(f"power result : {power}")

phone_brands = ["Apple", "Huawei", "Samsung", "Xiaomi"]

print(f"Printing brand 4: {phone_brands[3]} ")

phone_brands.append("Meizu")

print(f"Printing brands: {phone_brands} ")

phone_brands.remove("Samsung")

print(f"Printing brands: {phone_brands} ")


phone_brand = ["Apple", "Huawei", "Samsung", "Xiaomi"]

print(f"Printing brand 4: {phone_brands[3]} ")

phone_brand.append("Meizu")

print(f"Printing brands after appending 'Meizu': {phone_brand} ")

# Remove multiple items using list comprehension
phone_brand = [brand for brand in phone_brands if brand not in {"Samsung", "Apple"}]

print(f"Printing brands after removing 'Samsung' and 'Apple': {phone_brand}")

print( "test test test")

# For loop
for phone_brand in phone_brands:
    print(phone_brand)

# While loop
count = 0
while count < 3:
    print(count)
    count += 2


age = 18

if age >= 18:
    print("You are an adult.")
else:
    print("You are a minor.")




# Creating a dictionary
student = {
    "name": "Alice",
    "age": 25,
    "is_student": True
}

# Accessing elements
print(f"Here is student data: {student['name']}")  # Output: Alice


# Adding elements
student["grade"] = "A"

print(f"Here is student data: {student}") 

# Removing elements
del student["age"]

print(f"Here is student data: {student}") 



# Creating a tuple
coordinates = (10, 20, 30, 100)

# Accessing elements
print(coordinates[0])  # Output: 10
print(f" here the 3rd tuple: {coordinates[2]}") 

# Tuples are immutable
# coordinates[0] = 15  # This will raise an error
