fruits = input().split()
counted = {}
for char in fruits:
    if char in counted:
        counted[char] += 1
    else:
        counted[char] = 1        
mode =[]
maxnum = max(counted.values()) 
for word, count in counted.items():
    if count == maxnum:
        mode += [word]
mode = sorted(mode)
for word in mode:
	print(word)
 
 
