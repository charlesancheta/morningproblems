# read in the input
x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())



# solve the problem
xLen = abs(x1-x2)
yLen = abs(y1-y2)
area = xLen*yLen


# output the result
print(area)