#include <reg51.h>

void main() {
    unsigned char a = 45, b = 12, diff, quo, rem;

    diff = a - b;
    quo = a / b;
    rem = a % b;

    P1 = diff;
    P2 = quo;
    P3 = rem;
}
