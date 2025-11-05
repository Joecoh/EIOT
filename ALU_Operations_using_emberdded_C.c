#include <reg51.h>

void main() {
    unsigned char a = 10, b = 5;
    unsigned char sum, diff, mul, quo, rem;

    sum = a + b;
    diff = a - b;
    mul = a * b;
    quo = a / b;
    rem = a % b;

    P0 = sum;   
    P1 = diff;  
    P2 = mul;  
    P3 = quo;  
    
}