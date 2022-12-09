"""
Basic idea: The planes will first try to dock at the heighest possible gate.
		If it's already taken, it will keep searching from heighest to lowest possible gates, and dock at the first available gate.
		If none of the gates are available for that plane, then the search is over and no more planes are able to continue docking.
"""

gatesNum = int(input())
planesNum = int(input())

gates = [0]*gatesNum	# An array of all the gates. 0 = available for docking, 1 = taken

currentPlaneNum = 1
count = 0
continueDocking = True


for i in range(planesNum):

	plane = int(input())

	if continueDocking:
		for j in range(1, plane + 1):		# Loop through all possible gates for docking, check from highest to lowest possible gate
			if gates[plane - j] == 0:	# Check if gate is empty, if so, dock there, and increase count
				gates[plane - j] = 1
				count+=1
	
				break
	
			# Plane not parked at any gates, the search is over
			if plane - j == 0:
				continueDocking = False

print(count)
