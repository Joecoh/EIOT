#include <reg51.h>


void main() {
unsigned char a = 40, b = 8, q, r;


q = a / b;
r = a % b;


P1 = q;
P2 = r;
}