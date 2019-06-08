// Jake Mayer cs135 4/22/19
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int usrInput;

    if(argc < 2){ // check number of command line arguments
            printf("You must run this program with an argument\n");
        }

    if(argc >= 2){
    printf("Enter an integer: ");
    scanf("%d", &usrInput);

    for(int j=1; j<argc; j++){
            if(strlen(argv[j]) >= usrInput){
            printf("%s has at least %d characters\n", argv[j], usrInput);
            }
        }
    }
    return 0;
}
