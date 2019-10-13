"""
the program is designed to solve the quadratic equation
Labotary work №3
design by Starostin Pavel 
07.10.2019
"""
print ("\nQuadric Equation")
print ("(a)x^2+(b)x+(c)=0")
a = float(input("Enter a: "))
b = float(input("Enter b: "))
c = float(input("Enter c: "))
sqrtD = (b**2-4*a*c)**.5
if (sqrtD > 0):
    x1 = ((-b)+sqrtD)/2*a
    x2 = ((-b)-sqrtD)/2*a
    print ("x1= ",x1)
    print ("x2= ",x2)
    print ("as a result we have equation: (x1-(",(-x1),")(x2-(",(-x2),")=0")
if (sqrtD == 0):
    x1=x2=(-b)/2*a
    print ("x1=x2=",x1)
    print ("as a result we have equation: (x-(",(-x1),"))^2=0")
if (sqrtD < 0):
    print ("Error: discriminant < 0")
input ("press any key to close the program") 
