#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2) {    // argc should be 2 for execution
		// argc[0] is the program name
		printf("ERROR: You need one argument.\n");
		// this is how you abort a program
		return 1;
	}

	int i;
	char letter;
	for(i = 0; argv[1][i] != '\0'; i++) {	
		letter = argv[1][i];

		switch(letter) {
			case 'a':
			case 'A':
				printf("%d: 'A'\n", i);
				break;

			case 'e':
			case 'E':
				printf("%d: 'E'\n", i);
				break;

			case 'i':
			case 'I':
				printf("%d: 'I'\n", i);
				break;

			case 'o':
			case 'O':
				printf("%d: 'O'\n", i);
				break;

			case 'u':
			case 'U':
				printf("%d: 'U'\n", i);
				break;

			case 'y':
			case 'Y':
				if(i > 2) {
					// it's only sometimes Y
					printf("%d: 'Y'\n", i);
				} else {
					printf("%d: %c is not a vowel\n", i, letter);
				}
				break;

			default:
				printf("%d: %c is not a vowel\n", i, letter);
		}
	}
	
	return 0;
}