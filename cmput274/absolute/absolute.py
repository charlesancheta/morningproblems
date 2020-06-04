# Read in the input
nums = input("").split()
a = int(nums[0])
b = int(nums[1])
# Solve the problem
if a > b:
	abs = a - b
else:
	abs = b - a

# Output the result
print(abs)