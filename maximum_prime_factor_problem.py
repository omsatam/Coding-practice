def prime(n):
    if (n == 1):
        return 0
    if n == 2 :
        return 1
    for i in range(2,n//2+1):
        if (n % i == 0):
            return 0
    return 1

def maxPrimeFactor(n):
    fact = None
    for i in range (2,n//2+1):
        if (n % i == 0) and prime(i):
            fact = i
    return fact


c = 0    
a = int(input("Please enter a number\n"))
while(a):
    if prime(a):
        # print(a," is a prime number")
        a = a - 1
        c+=1
    else:
        a = maxPrimeFactor(a)
        # print("The maximum prime factor of ",a," is ",b)
        c+=1
        
print("The no. of steps are ",c)
