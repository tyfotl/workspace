'''
TODO:
    1)Maximum out of 3 number
    2)Leap year
    3)Check that a number is positive or negative
    4)Check that the given no. Is even or odd
    5)Check given no. Is multiple of x or not
    6)Print Basic calculator ( menu driven)
    7)Create menu and dot the conversion between temprature units
    8)PrintTable of a no.
    9)Print Fabonacci series
    10)Find factorial
    11)Find sum of digit
    12)Print sum of even n odd no.s
    13)Print Sum of even and odd out of n no.s given by user
    14)Print Maximum out of n no.of digits given by user
    15)Print reverse of string
    16)Print count of word in a string
    17)Print no.of vowel and consonants in a given string
    18)Print pattern and series questions

    19)Print string characters seperated by any special character
    20)Print Each word in reverse order
    21)Print decimal to binary , binary to decimal
'''

def maxf():
    x = int(input("How many numbers? "))
    k=[]
    for i in range(x):
        j = ['first', 'second', 'third', 'fourth', 'fifth', 'sixth', 'seventh', 'eighth', 'ninth', 'tenth', 'eleventh', 'twelfth', 'thirteenth', 'fourteenth', 'fifteenth', 'sixteenth', 'seventeenth', 'eighteenth', 'nineteenth', 'twentieth', 'twenty-first', 'twenty-second', 'twenty-third', 'twenty-fourth', 'twenty-fifth', 'twenty-sixth', 'twenty-seventh', 'twenty-eighth', 'twenty-ninth', 'thirtieth']
        k.append(float(input("Enter "+ j[i] + " number: ")))
    return max(k)

def lycheck(y):
    if y%4==0 and ( y%100!=0 or y%400==0):
        print(y, "is a leap year")
    else:
        print(y, "is not a leap year")

def positive_or_negative(x):
    if x > 0:
        print(x, "is positive")
    elif x < 0:
        print(x, "is negative")
    else: print(x, "is neither positive nor negative")

def oddeve(x):
    if x%2==0: print(x, "is even")
    elif x%2==1: print(x, "is odd")

def multipleornot(x,y):
    if x%y==0: print(x,"is a multiple of",y)
    else: print(x, "is not a multiple of", y)


def menucalc():
    import operator
    operations = {
        '+': operator.add,
        '-': operator.sub,
        '*': operator.mul,
        '/': operator.truediv,
        '//': operator.floordiv,
        '%': operator.mod,
        '**': operator.pow,
    }
    op=input("Which operation to perform? ")
    if op not in operations:
        return 'err'
    n1= float(input("Enter first number: "))
    n2= float(input("Enter second number: "))
    if n2==0 and ( op=='/' or op =='%' or op =='//' ):
        return "Division by zero"
    return operations[op](n1, n2)

def tempconv():
    units = {
            "c": "Celsius",
            "k": "Kelvin",
            "f": "Fahrenheit",
    }

    fromUnit = input("From which unit? i) C , ii) K, iii) F  ").strip().lower()
    if fromUnit not in units: return f"{fromUnit} is not a valid unit"

    toUnit = input("To which unit? i) C , ii) K, iii) F  ").strip().lower()
    if toUnit not in units: return f"{toUnit} is not a valid unit"

    temp = float(input(f"What is the temperature in {units[fromUnit]}? "))

    fromK = {
        "c" : lambda x : x - 273.15,
        "k" : lambda x : x,
        "f" : lambda x : 9*(x-273.15)/5 +32
    }
    toK = {
        "c" : lambda x : x + 273.15,
        "k" : lambda x : x,
        "f" : lambda x : 5*(x-32)/9 + 273.15
    }

    kelvin = toK[fromUnit](temp)
    result = fromK[toUnit](kelvin)
    if result%1==0:
        result = int(result)
    return f"{temp}\u00b0 {fromUnit.title()} is {result}\u00b0 in {units[toUnit].title()}"

print(tempconv())
