modelo = input('digite se e F ou C ')
temperatura = int(input('digite temperatura '))
if (modelo == 'F'):
    print ((temperatura * 1,8) + 32)
    breakpoint
elif (modelo == 'C'):
    print((temperatura - 32) / 1,8 )
    

