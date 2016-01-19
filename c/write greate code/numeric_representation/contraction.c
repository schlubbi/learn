int main()
{
	signed char sbyte; 	// chars in C are byte values
	short int sword; `	// short integers in C are usually 16 bit values
	long int sdword;	// long integers in C are ususally 32 bit values

	sbyte = (signed char) sword;
	sbyte = (signed char) sdword;
	sword = (short int) sdword;
}
