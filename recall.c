//Jake Mayer cs135
#include <stdio.h>
#include <stdlib.h>
int strcomp(char *s1, char *s2);
int main (int argc, char *argv[]) {
        FILE *fRecall;

        fRecall = fopen("CarData.txt", "r");

        char firstName[12], lastName[15];
        char phone[13], email[41], CarMake[21], CarModel[21], CarYearThrowAway[8];
        int CarYear;

//while it's not the end of the file recall
        FILE *output;
        output = fopen(argv[2], "w");
        fprintf(output, "People eligible for recall:\n");
        fscanf(fRecall, "%s %s %s %s %s %s %s", firstName, lastName, phone, email, CarMake, CarModel, CarYearThrowAway);

        while (!feof(fRecall)) {
                //﻿firstName lastName Phone email CarMake CarModel CarYear
                fscanf(fRecall, "%s %s %s %s %s %s %d", firstName, lastName, phone, email, CarMake, CarModel, &CarYear);

                if (CarYear >= 1990 && CarYear <= 2010) {
                        if(strcomp(CarMake, "Ford") == 0) {
                                fprintf(output, "%s %s %s %s\n", firstName, lastName, phone, email);
                        }

                }
        }


        fclose(output);
        fclose(fRecall);
        return 0;
}
int strcomp(char *s1, char *s2){
        char i1, i2;
        while(*s1 != '\0' && *s2 != '\0') {
                i1 = *s1;
                i2 = *s2;

                if(i1 >= 'a' && i1 <= 'z') {
                        i1 -= 'a' + 'A';
                }

                if(i2 >= 'a' && i2 <= 'z') {
                        i2 -= 'a' + 'A';
                }

                if(i1 > i2) {
                        return 1;
                }

                else if(i1 < i2) {
                        return -1;
                }

                s1++;
                s2++;

        }

        if(*s1 == '\0' && *s2 == '\0') {
                return 0;
        }
        else if(*s1 > *s2) {
                return 1;
        }
        else{
                return -1;
        }
}
