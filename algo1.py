import math
h = int(input())
count = 0
for i in range(h + 1):
	for j in range(60):
		for k in range(60):
			# 매 시각 안에 '3'이 포함되어 있다면 카운트 증가
			if '3' in str(i) + str(j) + str(k):
				count += 1
print(count)
print("O(n) : ", h)
print("O(nlogn) : ", h * math.log10(h))
print("O(n^2) : ", h * h)
print("O(2^n) : ", pow(2, h))
