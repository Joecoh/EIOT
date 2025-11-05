#include <reg51.h>

void main() {
unsigned char a = 0xA5, b = 0x3C;
unsigned char aand, aor, axor, anot;

aand = a & b;
aor = a | b;
axor = a ^ b;
anot = ~a;

P1 = aand;
P2 = aor;
P3 = axor;
P0 = anot;
}
