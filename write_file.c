//Jake Mayer cs135
#include <stdio.h>
#include <stdlib.h>
int main (void) {
        char firstName[51];
        char lastName[51];
        char output[101];
        int age = 0, i;

        FILE *fPtr;
        printf("Enter in a name for the output file: ");
        scanf("%s", output);
        fPtr = fopen(output, "w");

        for (i = 1; i < 6; i++) {
                printf("\nEnter person %d (age, first last): ", i);
                scanf("%d, %s %s",&age, firstName, lastName);
                fprintf(fPtr, "%d, %s %s\n", age, firstName, lastName);
        }
        fclose(fPtr);

        return 0;
}
