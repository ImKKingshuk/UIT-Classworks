# Write a program to compute F(n, r) where F(n, r) can be recursively defined as F(n, r) = F(n-1, r) + F(n-1, r-1)

def F(n, r):
    if n == 0 or r == 0:
        return 1
    return F(n-1, r) + F(n-1, r-1)

n = int(input("Enter n: "))
r = int(input("Enter r: "))
print(f"F({n}, {r}) = {F(n, r)}")
