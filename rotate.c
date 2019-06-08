//Jake Mayer cs135
#include <stdio.h>
void rotate_left(int* a, int* b, int* c);
int main (void) {
        int first = 0, second = 0, third = 0;
        printf("Enter three integers (first second third): ");
        scanf("%d %d %d", &first, &second, &third);
        rotate_left(&first, &second, &third);
        printf("\n");
        printf("After the rotation (first second third): %d %d %d\n", first, second, third);
        return 0;
}
void rotate_left(int* a, int* b, int* c){
        int temp;
        temp = *a;
        *a = *b;
        *b = *c;
        *c = temp;
}
