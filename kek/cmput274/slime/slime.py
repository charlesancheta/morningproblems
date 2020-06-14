n = int(input())
row = []
while n != 0:
    row += [1]
    n -= 1
    cond = True
    while cond and len(row) > 1:
        if row[-1] == row[-2]:
            row[-2] += 1
            row = row[0:len(row)-1]
        else:
            cond = False
 
print(*row)
 
 
