#include <stdio.h>
#include <stdlib.h>

struct CPU {
	using Byte = unsigned char;
	using Word = unsigned short;

	Word PC; // Program Counter
	Word SP; // Stack Pointer

	// Registers
	Byte A, // Accumulator
		 X, // Index Register
		 Y; // 

	// Status Flags:
	Byte C : 1;
	Byte Z : 1;
	Byte I : 1;
	Byte D : 1;
	Byte B : 1;
	Byte V : 1;
	Byte N : 1;

	void Reset()
	{
		// Faking the boot up sequence:
		PC = 0xFFFC;		// 
		SP = 0x0100;		// Setting the stack pointer
		C = Z = I = D = B = V = N = 0; // Clearing the flags
		A = X = Y = 0;		// 
	}
};

int main()
{
	CPU cpu;
	cpu.Reset();
	return 0;
}