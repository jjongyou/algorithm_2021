import math
n = int(input("N : "))
print("O(n) : ", n)
print("O(nlogn) : ", n * math.log10(n))
print("O(n^2) : ", n * n)
print("O(2^n) : ", pow(2, n))
#print("O(n^n) : ", pow(n, n))
