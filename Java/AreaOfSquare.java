/*
 * A Java program for calculating the areas of sqaures with a range of side lengths from 1 to
 * an input entered by the user.
 */

package chapter.pkg7.section.pkg1;
import javax.swing.JOptionPane;

/**
 *
 * @author Guillermo Garrido
 */
public class AreaOfSquare {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        String number = JOptionPane.showInputDialog("Enter the highest length of the side of the square:");
        int input = Integer.parseInt(number);
        
        for (int i = 1; i <= input; i++) {
           int areaOfSquare = i * i;
           System.out.println("When the length of the side is " + i + ", the area of the sqaure is " + areaOfSquare);
        }
       
    }
    
}

/* Sample output where input is 10:

When the length of the side is 1, the area of the sqaure is 1
When the length of the side is 2, the area of the sqaure is 4
When the length of the side is 3, the area of the sqaure is 9
When the length of the side is 4, the area of the sqaure is 16
When the length of the side is 5, the area of the sqaure is 25
When the length of the side is 6, the area of the sqaure is 36
When the length of the side is 7, the area of the sqaure is 49
When the length of the side is 8, the area of the sqaure is 64
When the length of the side is 9, the area of the sqaure is 81
When the length of the side is 10, the area of the sqaure is 100

*/


