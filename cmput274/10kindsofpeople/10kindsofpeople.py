# read the input

# solve the problem

# output the answer
bit_l, span = input().split()
bit_l = int(bit_l)
span = int(span)
bits = list(str(input()))
rests = []
for i in range(span):
    [s,e] = list(map(int,input().split()))
    test = []
    for j in range(s-1,e):
        test += bits[j]
    zeros = ['0'] * len(test)
    ones = ['1'] * len(test)
    if test == zeros:
        result = 'zero'
    elif test == ones:
        result = 'one'
    else:
        result = 'both'
    rests += [result]
for x in range(len(rests)):
    print(rests[x])
 

