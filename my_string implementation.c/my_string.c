#include <stdio.h>
int my_strcmp(char s1[],char s2[]);
int my_strncmp(char s1[],char s2 [] , int);
int my_strchr(char s1[] , int c);
char st1 [80]; /* the max arry size given should be only 80 which is max size*/
char st2 [80];
int number;
char charcter;
int postion;
int number;
int i = 0;
int answer;

	int my_strcmp(char st1[],char st2[])	{
	while(st1[i] != '\0' && st1[i] == st2[i])
	{
	if(st1[i] == st2[i])
	i++;
	}
	if(st1[i]-st2[i] == 0 )
	{return 0;}
	if (st1[i]-st2[i] > 0 )
	{return +1;}
	else
	return -1;
}		
	int my_strncmp( char st1[] , char st2[], int n )	{
	while(st1[i] != '\0' && st1[i] == st2[i] && i<n)
	{
	if(st1[i] == st2[i])
	i++;
	}
	if(st1[i]-st2[i] == 0 )
	{return 0;}
	if (st1[i]-st2[i] > 0 )
	{return +1;}
	else
	return -1;
}		

	int my_strchr( char st1[]  , int c)	{
	while(st1[i] != '\0') /* Runs until it reaches EOF */
	{
	if (st1[i] == c) return 1;
	else i++;
	}
	return -1;
}	int main()
{
	printf("Hey my name is Victor 324133982 and this is my answer to the first maman 11 questions \n I will use switch case here in order to select the right question you need");
	printf("\nPlease enter a number which program you want to use");
	printf("\nPlease enter 1 to use my_strcmp");
	printf("\nPlease enter 2 to use my_strncmp");
	printf("\nPlease enter 3 to use my_strchr");
	printf("\nPlease enter any other number to exit the program :");    
	scanf("%d",&number);
	if(number > 3 || number < 1)
		return printf("Program terminated");
									    
switch(number){
case(1):
{
printf("Hey this program compares strings , 0 if equal , and 1 or -1 if the (ascii) number is bigger or smaller then the first string. \n ");
scanf("%s",st1);
printf("Enter the string you want to comapre it to");
scanf("%s",st2);
printf("The answer is : \n");
printf(" %d" , my_strcmp(st1,st2)); /* takes input and places is it inside of the function */

break;
return 0;
}
case(2):
{
printf("Hey this program compares strings untill certin point, You wil need to enter both strings and then a int representing the postion starts from 0 ");
printf("\nEnter the first string: ");
scanf("%s", st1);
printf("\nEnter the second string: ");
scanf("%s", st2);
printf("\nEnter the postion till when you want to search in the strings: ");
scanf(" %i",&postion);
printf("\nThe answer is : ");
printf("%d" , my_strncmp(st1 , st2 , postion)); /* takes input and places is it inside of the function */
break;
return 0;
}
case(3):
{
printf("Hey this program searches for the char inside an string arry \n please enter the string and afterwards enter an char to search: ");
printf("\nPlease enter the string:\n");
scanf("%s", st1);
printf("\nPlease enter the char you want to search:\n");
scanf(" %c",&charcter);
printf("\nThe answer is : \n");
printf("%d" , my_strchr(st1 , charcter)); /* takes input and places is it inside of the function */
break; 
return 0;
}
default: /*IF the user inserts a number which is not 1,2,3 its terminating the program*/
{
printf("You terminated the program");
break;
return 0;
}
return 0;
}
return 0;	






}






