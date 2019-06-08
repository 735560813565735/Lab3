//lab4
#include <stdio.h>

int main (void) {

		// declare variables
		int vowels = 0, newlines = 0, tabs = 0, spaces = 0, other = 0;
		int total;
		char sentence;
		printf("Enter a sentence (ended by a '.' or '!' or '?'): ");
		// being loop, end if sentence has . ! or ?
		do {
							scanf("%c", &sentence);
							switch(sentence) {
							case 'a':
							case 'e':
							case 'i':
							case 'o':
							case 'u':
							case 'A':
							case 'E':
							case 'I':
							case 'O':
							case 'U': ++vowels;																break;
							case ' ': ++spaces;
							case '\t': ++tabs;																	break;
							case '\n': ++newlines;																break;
							default: ++other;
																								break;
																}
		}while(sentence != '.' && sentence != '!' && sentence != '?');

		total = vowels + newlines + tabs + spaces + other;

		printf("Total number of characters: %d\n", total);
		printf("Number of vowels: %d\n", vowels);
		printf("Number of newlines: %d\n", newlines);
		printf("Number of tabs: %d\n", tabs);
		printf("Number of spaces: %d\n", spaces);
		printf("Number of other characters: %d\n", other);

	return 0;
}
