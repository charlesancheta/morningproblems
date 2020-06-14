dim = int(input())
x = [int(i) for i in input().split()]
y = [int(j) for j in input().split()]
x = sorted(x)
y = sorted(y)
x.reverse()
y.reverse()
prod = sum([x[i]*y[i] for i in range(dim)])
print(prod)
