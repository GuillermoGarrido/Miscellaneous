using System;
using System.Windows.Forms;

class ContinueTest
{
    static void Main(string[] args)
    {
        string output = "";
        int count;

        for (count = 1; count <= 15; count++)
        {
            if (count == 10)
            {
                continue;
            }
            output += count + " ";
        }

        output += "\nUsed continue keyword to skip 10";
        MessageBox.Show(output, "Continue Statement Demo", MessageBoxButtons.OKCancel, MessageBoxIcon.Warning);
    }
}
