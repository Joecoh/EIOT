#include <reg51.h>

void main() {
    unsigned char a = 5, b = 3, sum, mul;

    sum = a + b;   
    mul = a * b;   

    P1 = sum;      
    P2 = mul;      

    while(1);
}
