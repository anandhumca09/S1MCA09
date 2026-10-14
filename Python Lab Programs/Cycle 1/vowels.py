word=input("Enter the words:")
vowels=['a','e','i','o','u','A','E','I','O','U']
wordvowels=[]
for x in word:
    if(x in vowels and x not in wordvowels):
        wordvowels.append(x)
print("Vowels in",word,"are:",wordvowels)
