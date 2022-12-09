gatesNum = int(input())
planesNum = int(input())

gates = [0]*gatesNum

currentPlaneNum = 1
count = 0
continueParking = True


for i in range(planesNum):

	plane = int(input())

	if continueParking:
		for j in range(1, plane + 1):
			if gates[plane - j] == 0:
				gates[plane - j] = 1
				count+=1
	
				break
	
			# Plane not parked at any gates
	
			if plane - j == 0:
				continueParking = False

print(count)
