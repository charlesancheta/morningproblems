# Read the input
a,b,c = map(int, input().split())


# Solve the problem

pay = int((a+b+c)/3)
print(abs(a-pay),abs(b-pay),abs(c-pay))

# Output the result
