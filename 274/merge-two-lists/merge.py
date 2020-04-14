# Get the input
leftlane = input().split()
rightlane = input().split()
# now do something similar to get the list of vehicles in the right lane


# Solve the problem
mergedlane = []
for i in range(len(leftlane)+len(rightlane)):
	if i < len(leftlane):
		mergedlane += leftlane[i]
	if i < len(rightlane):
		mergedlane += rightlane[i] 
	
# Print the result
print(*mergedlane)