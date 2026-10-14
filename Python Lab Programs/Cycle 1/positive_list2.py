num = []
n = int(input("Number of elements in the list:"))
print("Enter the elements:")
for i in range(n):
    x = int(input(" "))
    num.append(x)
print("List:",num)
print("Positive Numbers:")
for x in num:
    if(x>0):
        print(x)
