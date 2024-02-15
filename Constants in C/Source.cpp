#include<stdio.h>
int main() {
    //const does not allow the variable value to e changed along the program
    const int a = 10;
    printf("%d", a);
    
    //here the program will throo an error because we have declared constant(const) to the variable
    a = 6;
    printf("%d", a);


}
