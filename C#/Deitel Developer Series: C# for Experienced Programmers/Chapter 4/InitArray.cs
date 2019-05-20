using System;
using System.Windows.Forms;

class InitArray
{
    static void Main (string[] args)
    {
        string output = "";
        int[] x = new int[10];
        int[] y = { 20, 45, 23, 56, 38, 91, 42, 87, 39, 11 };

        const int ARRAY_SIZE = 10;
        int[] z = new int[ARRAY_SIZE];

        for (int j = 0; j < z.Length; j++)
        {
            z[j] = 5 + 4 * j;
        }

        output += "Subscript\tArray X\tArray Y\tArray Z\n";

        for(int k = 0; k < ARRAY_SIZE; k++)
        {
            output += k + "\t" + x[k] + "\t" + y[k] + "\t" + z[k] + "\n";
        }
        MessageBox.Show(output, "Initializing Arrays of int Values",MessageBoxButtons.RetryCancel, MessageBoxIcon.Question);
    }
}
