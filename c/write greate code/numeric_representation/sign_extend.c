int main()
{
	signed char sbyte;	// chars in c are byte values
	short int sword; 	// short integers in C are usually 16-bit values
	long int sdword; 	// long integers in C are usually 32-bit values

	sword = sbyte;		// automatically sign extend the 8bit value to 16 bits
	sdword = sbyte;		// automatically sign extend the 8bit value to 32 bits
	sdword = sword;		// automatically sign extend the 16bit value to 32 bits
}
