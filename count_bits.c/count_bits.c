#include <stdio.h>
int counter = 0;
unsigned long input;
int output;
int countSetBits(unsigned long num) 
{

	while(num)	{ /*Running num*times*/
	
	if(num &1UL)
	{
	counter++;
	}
	num = num >> 2;  } /* moves twice  */
	return counter;
}

int main(){

printf("Hey this is the second program its counts what bits are on , please enter an Unsigned long num :  ");
scanf("%lu" , &input);
output = countSetBits(input);
return printf("The following bits in %lu is %d\n",input,output); /* input inside countsetbits and output is the answer from the method */
	   }	

