//length and copy string functions 
#include<stdio.h>
#include<string.h>
// to calculate string length 
int strlen_ur(char *ptr) //string len function 
{
int len =0;
while(*ptr!='\0')
{
len++;
ptr++;
}
return len;
}
//copy string function
void strcpy_ur(char *destination,char *source)
{
while(* source !='\0')
{
*destination= *source;
 source++;
 destination++;

}*destination++='\0';

}
int main ()
{ 
	int length;
	char A[30];    //sourse
	char B[30];    //copy distination
	gets(A);
	length=strlen_ur(A); //len function calling
	printf("length of string A: %d \n",length);
	//copy function calling
    strcpy_ur(B,A);
	printf("copied string : %s \n",B);
}