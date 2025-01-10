n=int(input("Enter the no. :"))
s=" "
while(n>0):
    r=n%2
    s=str(r)+s
    n=n//2
print(int(s))

'''
Enter the no. :12
1100
'''
