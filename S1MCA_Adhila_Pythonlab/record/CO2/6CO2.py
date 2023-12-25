
test_str =input("Enter any sting : ")
test_str=test_str.upper()
all_freq = {}
for i in test_str:
	if i in all_freq:
		all_freq[i] += 1
	else:
		all_freq[i] = 1
print("Count of all characters in the string is :\n "
	+ str(all_freq))
