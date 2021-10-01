#include <stdio.h>
#include <XC161.h>
#include <math.h>

void main(void)
{
  __asm
  {
  	xor R0, R0
	xor R1, R1
	xor R2, R2
	xor R3, R3
	xor R4, R4
	xor R5, R5
	xor R6, R6
	xor R7, R7
	xor R8, R8
	xor R9, R9
	xor R10,R10
	xor R11,R11
	xor R12,R12
	xor R13,R13
	xor R14,R14
	xor R15,R15
	; Insert values in registers
	; mov R0, #0x0001
	; mov R1, #0x0002
	; mov R2, #0x0003
	; mov R3, #0x0004
	; mov R5, #0x0005
	
	; add R0, R1
	
	; mul R0, R2
	
	; mul R3, R5
	
	; mov MDL, R0

	; div R3

	; mov R4, MDL
  }
}