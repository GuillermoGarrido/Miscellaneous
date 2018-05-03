import math

def lawOfCosines(B, C, a):
    rhs = B**2 + C**2 - 2*B*C*math.cos(a*math.pi/180) #rhs stands for "Right-angle-Hypotenuse-Side"
    return math.sqrt(rhs)

def lawOfSines(A, a, B):
    rhs = B*math.sin(a*math.pi/180)/A
    return math.asin(rhs)*180/math.pi

print "Enter side B:"
B = float(raw_input())

print "Enter side C:"
C = float(raw_input())

print "Enter angle a:"
a = float(raw_input())

A = lawOfCosines(B, C, a)

b = lawOfSines(A, a, B)

c = lawOfSines(A, a, C)

print 'The side A is equal to', A
print 'The angle b is equal to', b
print 'The angle c is equal to', c

'''
Example Input/Output Below:

Enter side B:
10
Enter side C:
8
Enter angle a:
30
The side A is equal to 5.04340513884
The angle b is equal to 82.4775684881
The angle c is equal to 52.4775684881

'''
