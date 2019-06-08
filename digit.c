//Jake Mayer cs135
#include <stdio.h>
#include <math.h>
int find_digit(int number, int digit);
int main (void) {
        int x,y;
        do {
                printf("Enter a number a desired digit location (number, digit): ");
                scanf("%d, %d", &x,&y);
        } while(x < 0 && y < 0);
        printf("The digit=%d digit of %d is:%d", x, y, find_digit(x,y));
        return 0;
}

int find_digit(int number,int digit){

        int r, t1, t2;

        t1 = pow(10, digit+1);
        r = number % t1;

        if (digit > 0)
        {
                t2 = pow(10, digit);
                r = r / t2;
        }
        return r;
}
