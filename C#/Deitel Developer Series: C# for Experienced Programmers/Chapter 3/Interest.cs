using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

    static class Interest
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
 
        static void Main( string[] args)
        {
        decimal amount;
        decimal principal = (decimal) 1000.00;
        double rate = .05;
        string output = "Year\tAmount on deposit\n";

        for (int year = 1; year <= 10; year++)
        {
            amount = principal * (decimal)Math.Pow(1.0 + rate, year);
            output += year + "\t" + String.Format("{0:C}", amount) + "\n";
        }

        MessageBox.Show(output, "Compound Interest", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Information);
        }
    }

