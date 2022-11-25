import math

def foursFives(n):
	end = math.floor(n/4)
	count = 0

	for i in range(end + 1):
		if (n - 4 * i) % 5 == 0:
			count += 1

	return count

print(foursFives(6))
