# Write a program to print the prime factors of a number.

def prime_factors(n):
    i = 2
    factors = []
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return factors

n = int(input("Enter a number: "))
print(f"Prime factors: {prime_factors(n)}")
