num_matches = int(input())
alice = 0
bob = 0
for i in range(num_matches):
    rounds = input().split(' ')
    a = 0
    b = 0
    for char in rounds:
    	
    	if char == 'PR' or char == 'RS' or char == 'SP':
    		a += 1
    	elif char == 'RP' or char == 'SR' or char == 'PS':
    		b += 1
    if b > a:
    	bob += 1
    elif a > b:
    	alice += 1


 
    # now you do the rest!
    # read in the rounds in this match
    # example: if the line of input was "RR RP SR" then
    # rounds == ["RR", "RP", "SR"]
    

# print here whoever is the overall winner of all the matches and
# how many matches the winner won
if bob > alice:
	print('Bob', bob)
else:
	print('Alice', alice)

