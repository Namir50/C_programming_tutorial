#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	int alphabets;
	int ALPHABETS;

	printf("enter an alphabet: ");
	scanf("%c", &c);

	alphabets = (c == 'a' || c == 'e'|| c == 'i' ||c == 'o'|| c == 'u');
	ALPHABETS = (c == 'A'|| c == 'E'|| c == 'I'||c == 'O'|| c == 'U');

	
	if (!isalpha(c)) {
		printf("ERROR! non alphabetic character!");
	}
	else if (alphabets || ALPHABETS) {
		printf("alphabet is a vowel",c);
	}
	else
	{
		printf("alphabet is a consonant", c);
	}
	return 0;
}