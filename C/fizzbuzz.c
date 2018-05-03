/*A program that prints the numbers 1 to 100, replaces the numbers
divisible by 3 with "Fizz", replaces the numbers divisible by 5 with
"Buzz", and replaces the numbers divisible by both with "Fizzbuzz" */

#include <stdio.h>

int main(void) {
    for(int i = 1; i <= 100; i++) {
        if((i % 3 == 0) && (i % 5 == 0)) {
            printf("Fizzbuzz");
        }
        else if(i % 5 == 0) {
            printf("Buzz");
        }
        else if(i % 3 == 0) {
            printf("Fizz");
        }
        else {
            printf("Number = %d",i);
        }
        printf("\n");
    }
    return 0;
}
