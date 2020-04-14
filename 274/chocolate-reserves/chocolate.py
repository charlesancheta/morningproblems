[chocs, jars] = list(map(int,input().split()))
 
freejars = 0
for i in range(jars):
    freeSpace = 0
    [pieces, cap] = list(map(int,input().split()))
    freeSpace += cap - pieces
    if freeSpace >= chocs:
        freejars += 1
 
print(freejars)

