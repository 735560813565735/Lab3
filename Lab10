#include <stdio.h>

int main() {
        //Declare the arrays to hold the strings
        char str[21], vowels[21], consonants[21];

        int i = 0,j =0 ,k = 0;

        //Declare the pointers
        char *strPointer, *vowelPointer, *consonantPointer;

        //Print out the prompt to the user
        printf("Enter a string (20 characters maximum): ");

        //Scan the user input into str
        //Only allow 20 characters
        fgets(str, 21, stdin);

        //Set strPointer to the beginning of the user's string
        strPointer = str;

        //Set vowelPointer to the beginning of the vowels string
        vowelPointer = vowels;

        //Set consonantPointer to the beginning of tht consonant string
        consonantPointer = consonants;

        //Loop through the user's string until the end of the string
        while(strPointer[i] != '\0')
        {

                //Check if what strPointer is pointing to is a vowel
                if(strPointer[i] == 'a' || strPointer[i] == 'e'|| strPointer[i] == 'i' || strPointer[i] == 'o' || strPointer[i] == 'u' || strPointer[i]=='y'||strPointer[i]=='Y' || strPointer[i] == 'A' || strPointer[i] == 'E' || strPointer[i] == 'I' || strPointer[i] == 'O' || strPointer[i] == 'U')
                {

                        //Move the letter from strPointer to vowelPointer
                        vowels[j]= strPointer[i];

                        //Move the vowelPointer
                                j++;
                }
                else
                {

                        //Move the letter from strPointer to consonantPointer
                        consonants[k]=strPointer[i];


                        //Move the consonantPointer
                                k++;

                }

                //Move the strPointer
                i++;
        }

        //Add null terminators where appropriate
        vowels[20] = '\0';
        consonants[20] = '\0';

        //Set the vowel and consonant pointers back to the beginning of their strings
        vowelPointer = &vowels[0];
        consonantPointer = &consonants[0];

        //Print the original string and the resulting vowel and consonant strings
        printf("Original string: %s\n", str);
        printf("All of the vowels: %s\n", vowelPointer);
        printf("All of the consonants: %s\n", consonantPointer);

        //Return from the program
        return 0;
}
