ORG 0000H
MOV A, #0x22
MOV R0, #0x55
XCH A, R0 ; Swap A and R0
MOV P1, A ; Output swapped A
MOV P2, R0 ; Output swapped R0
END