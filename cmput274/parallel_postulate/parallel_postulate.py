[i1, j1, i2, j2] = [int(i) for i in input().split()]
[k1, l1, k2, l2] = [int(i) for i in input().split()]
 
try:
    slope1 = (j2 - j1) / (i2 - i1)    
except ZeroDivisionError:
    slope1 = 'vert'
try:
    slope2 = (l2 - l1) / (k2 - k1)
except ZeroDivisionError:
    slope2 = 'vert'
if slope1 == 'vert' or slope2 == 'vert':
    if slope1 == slope2:
        print('parallel')
    else:
        print('not parallel')
elif abs(slope2 - slope1) <= 0.000001:
    print('parallel')
else:
    print('not parallel')
 
 
