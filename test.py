import string

s = input("Enter string1 ")

print(s[::-1])
for i in range(-1,-len(s)-1,-1):
    print(s[i],end="")

vowels = consonants = digits = spaces = 0
for i in s:
    j=i.lower()
    if j in "aeiou":
        vowels +=1
    elif j in " ":
        spaces += 1
    elif j in "123456789":
        digits += 1
    elif j in "abcdefghijklmnopqrstuvwxyz":
        consonants += 1
print(f"vowels: {vowels}, consonants: {consonants}, digits: {digits}, spaces: {spaces}")

