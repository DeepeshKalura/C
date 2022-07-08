'''
    Write a Program in Python to sum the numbers in a list containing numbers and strings.

    Made By Deepesh Kalura
'''

l = []
n = int(input("Enter The Number of Element for interger:     "))
for i in range(n):
    l.append(int(input("Enter the int elements: ")))
m = int(input("Enter The Number of Element for string:     "))
for i in range(m):
    l.append(input("Enter The String Elemets:   "))
sum = 0  
for i in l:
    if isinstance(i, int):
        sum+=i
print(sum)