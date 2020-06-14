x, y = [int(i) for i in input().split()] 
mat1 = [[int(j) for j in input().split()] for _ in range(x)]
mat2 = [[int(j) for j in input().split()] for _ in range(x)]
result = 'Possible'
for i in range(x):
    for j in range(y):
        for k in range(2):
            if k == 0:
                [k,l,m] = [i-1,j,i-1]
            else:
                [k,l,m] = [i,j-1,j-1]
            if (m >= 0):
                if mat1[i][j] <= mat1[k][l] or mat2[i][j] <= mat2[k][l]:
                    sw = mat1[i][j]
                    mat1[i][j] = mat2[i][j]
                    mat2[i][j] = sw
                    if mat1[i][j] <= mat1[k][l] or mat2[i][j] <= mat2[k][l]:
                        result = 'Impossible'
print(result)
 
 

