def decimalToBinary(n):
    binary = ''
    while(n):
        number = n % 16
        n = n//16
        if number == 10:
            number = 'A'
        elif number == 11:
            number = 'B'
        elif number == 12:
            number = 'C'
        elif number == 13:
            number = 'D'
        elif number == 14:
            number = 'E'
        elif number == 15:
            number = 'F'
        binary= binary + str(number)
    return (binary[::-1])
    
a = int(input("Please enter a number\n"))
binary = decimalToBinary(a)
print(binary)
