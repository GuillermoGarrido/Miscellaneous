using System;

class SwitchTest
{
    static void Main(string[] args)
    {
        char grade;
        int aTotal = 0;
        int bTotal = 0;
        int cTotal = 0;
        int dTotal = 0;
        int fTotal = 0;

        for (int x = 1; x <= 10; x++)
        {
            Console.Write("Enter a letter grade: ");
            grade = Char.Parse(Console.ReadLine());

            switch (grade)
            {
                case 'A':
                case 'a':
                    aTotal++;
                    break;
                case 'B':
                case 'b':
                    bTotal++;
                    break;
                case 'C':
                case 'c':
                    cTotal++;
                    break;
                case 'D':
                case 'd':
                    dTotal++;
                    break;
                case 'F':
                case 'f':
                    fTotal++;
                    break;
                default:
                    Console.WriteLine("Invalid letter grade entered.\n" + "Grade not added to totals");
                    break;
            }

            Console.WriteLine("\nThe totals for each letter grade are:\nA: {0}" + "\nB: {1}" + "\nC: {2}" +
                              "\nD: {3}" + "\nF: {4}", aTotal, bTotal, cTotal, dTotal, fTotal);
        }
    }
}
/*
A: 1
B: 0
C: 0
D: 0
F: 0
Enter a letter grade: s
Invalid letter grade entered.
Grade not added to totals

The totals for each letter grade are:
A: 1
B: 0
C: 0
D: 0
F: 0
Enter a letter grade: #
Invalid letter grade entered.
Grade not added to totals

The totals for each letter grade are:
A: 1
B: 0
C: 0
D: 0
F: 0
Enter a letter grade: F

The totals for each letter grade are:
A: 1
B: 0
C: 0
D: 0
F: 1
Enter a letter grade: D

The totals for each letter grade are:
A: 1
B: 0
C: 0
D: 1
F: 1
Enter a letter grade: C

The totals for each letter grade are:
A: 1
B: 0
C: 1
D: 1
F: 1
Enter a letter grade: A

The totals for each letter grade are:
A: 2
B: 0
C: 1
D: 1
F: 1
Enter a letter grade: B

The totals for each letter grade are:
A: 2
B: 1
C: 1
D: 1
F: 1
Enter a letter grade: D

The totals for each letter grade are:
A: 2
B: 1
C: 1
D: 2
F: 1
Enter a letter grade: A

The totals for each letter grade are:
A: 3
B: 1
C: 1
D: 2
F: 1
    */
