short saturate(int value)
{
	short result = 0;
	if(value > 32767){
		result = 32767;	
	} else if(value < -32767) {
		result = -32767;
	} else {
		result = value;
	}
	return result;
}
int main()
{
	printf("2342423432 saturated to short: %hi\n", saturate(2342423432));
	printf("2342423432 saturated to short: %hi\n", saturate(234));
	printf("2342423432 saturated to short: %hi\n", saturate(32766));
}
