#include <reg51.h>


void main() {
unsigned char a = 25, b = 30, result;


if (a == b)
result = 0; // Equal
else if (a > b)
result = 1; // A greater
else
result = 2; // B greater


P1 = result;
}