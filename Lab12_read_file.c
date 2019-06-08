
#include <stdio.h>
int main (int argc, char *argv[]) {
        char output[101];
        char firstName[51];
        char lastName[51];
        int age = 0, i;

        FILE *fPtr;
        fPtr = fopen("teaching_fellows.txt", "r");
        for (i = 1; i < 6; i++) {
                fscanf(fPtr, "%d, %s %s\n", &age, firstName, lastName);
                printf("Name, Age: %s %s, %d\n", firstName, lastName, age);
        }
        fclose(fPtr);
        return 0;
}
