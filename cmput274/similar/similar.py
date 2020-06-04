# Read in the input
a,b,c = map(int, input().split())

# Solve the problem and output the result
if (a == b) and (b == c):
	print('same')
elif ((a != b) and (b != c)) and (a != c):
	print('distinct')
else:
	print('similar')