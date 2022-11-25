sizes = {"S": 1, "M": 2, "L": 3}


totalJerseys = int(input())
totalPlayers = int(input())


jerseys = []

for jersey in range(totalJerseys):
	jerseys.append(sizes[input()])


satisfyCount = 0

for player in range(totalPlayers):
	desiredSize, desiredNum = input().split()

	desiredSize = sizes[desiredSize]
	desiredNum = int(desiredNum)

	if jerseys[desiredNum - 1] >= desiredSize:
		satisfyCount += 1
		jerseys[desiredNum - 1] = 0


print(satisfyCount)
