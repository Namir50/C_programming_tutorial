#include<stdio.h>
void main()
{
	int a;           /* simple integer value */
	long int b;      /* long integer type */
	short int c;     /* short integer type */
	unsigned int d;  /* unsigned integer type */
	char e;          /* character type */
	float f;         /* floating point type */
	double g;        /* double precision floating point type*/
	    
	 a = 1023;
	 b = 2222;
	 c = 123;
	 d = 1234;
     e = 'X';
	 f = 3.14158;
	 g = 3.14156854379;
	    
	printf("a = %d\n", a);       /* decimal output */
	printf("a = %o\n", a);       /* octal output */
	printf("a = %x\n", a);       /* hexadecimal output */
	printf("b = %ld\n", b);      /* long decimal output */
	printf("c = %d\n", c);      /* short decimal output */
	printf("d = %u\n", d);       /* unassigned output */
	printf("e = %c\n", e);       /* character output */
	printf("f = %f\n", f);       /* floating output */
	printf("g = %lf\n", g);      /* double float output */
	printf("\n\n");
	printf("a = %d\n", a);       /* simple int output */
	printf("a = %7d\n", a);       /* use a field width of 7 */
	printf("a = %-7d\n", a);       /* left justify field width of 7 */
	printf("\n\n");
	printf("f = %f\n", f);        /* simple float value */
	printf("f = %12f\n", f);      /* use field width of 12 */
	printf("f = %12.3f\n", f);    /* use 3 decimal placed and field width of 12 */
	printf("f = %12.5f\n", f);    /* use 5 decimal placed and field wodth of 12 */
	printf("f = %-12.5f\n", f);   /* left justify in field */
							 
}

