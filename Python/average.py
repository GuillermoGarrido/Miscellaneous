'''
This program calculates the average grade of a student assuming each of
the individual grades are weighted equally. The number of grades is typed
as an input by the user.
'''

print "CALCULATING THE STUDENT'S AVERAGE GRADE USING PYTHON"

# Gets the student's name
print "Enter the student's name:"
name = raw_input()

# Get a number of grades
print "Enter number of grades:"
numgrades = int(raw_input())

# Does something an X amount of times
sum = 0.0
for i in range(1, numgrades+1):
    print "Enter a grade ", i, ":"
    grade = int(raw_input())
    sum = sum + grade

average = sum / numgrades

print name,"'s average:", average

if (average >= 90):
    print "Letter grade is A"

elif (average >= 80):
    print "Letter grade is B"

elif (average >= 70):
    print "Letter grade is C"

elif (average >= 60):
    print "Letter grade is D"

else:
    print "Letter grade is F"
