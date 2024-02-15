#include<stdio.h>
enum suits {clubs,diamonds,hearts,spades};
int main()
{
	enum suits card;
	card = hearts;

	switch (card)
	{
	case clubs:
		printf("card is a club");
		break;
	case diamonds:
		printf("card is a diamond");
		break;
	case hearts:
		printf("card is a heart");
		break;
	case spades:
		printf("card is spade");
		break;
	}
	return 0;
}