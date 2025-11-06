#include <reg51.h>


void main() {
unsigned char a = 40, b = 8, q, r, s;


q = a / b;
r = a % b;
s = a * b;  


P1 = q;
P2 = r;
P3 = s;  

}
