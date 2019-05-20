using System;
using System.Windows.Forms;

class BreakTest
{
    static void Main(string[] args)
    {
        string output = "";
        int count;

        for (count = 1; count <= 100; count++)
        {
            if (count == 10)
            {
                break; //skips rest of loop once 10 is reached
            }
            output += count + " ";
        }

        output += "\nBroke out of loop at count = " + count;
        MessageBox.Show(output, "Break Statement Demo", MessageBoxButtons.OKCancel, MessageBoxIcon.Exclamation);
    }
}
