# 99 has the property (9x9)+(9+9), how many numbers have the same property below 1000

def has_special_property(number):
    sum_digits = sum(int(digit) for digit in str(number))
    sum_digits_squared = sum(int(digit)**2 for digit in str(number))
    return sum_digits_squared + sum_digits == number

special_property_count = sum(1 for i in range(10, 1000) if has_special_property(i))

print(special_property_count)
