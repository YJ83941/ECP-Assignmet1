#include<stdio.h>
#include<limits.h>
int main(){
	printf("______________________________________________________________________________________\n");
	printf("Data Type    \t    Size \t\t Format Specifier \t\t Range\n");
	printf("______________________________________________________________________________________\n");
	printf("int \t\t\t %d \t\t %%d \t\t %d to %d\n",sizeof(int), INT_MIN, INT_MAX);
	printf("unsigned int \t\t %d \t\t %%u \t\t 0 to %d\n",sizeof(int),UINT_MAX);
	printf("short int \t\t %hd \t\t %%hd \t\t %hd to %hd\n",sizeof(short int), SHRT_MIN, SHRT_MAX);
	printf("signed char \t\t %d\t\t %%c \t\t %d to %d\n",sizeof(char), SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char \t\t %d \t\t %%c \t\t 0  to %d\n",sizeof(unsigned char), UCHAR_MAX);
	printf("unsigned short int\t %hd \t\t %%hu \t\t 0 to %hu\n",sizeof(short int), USHRT_MAX);
	printf("long int \t\t %d \t\t %%ld \t\t %d to %d\n",sizeof(int), LONG_MIN, LONG_MAX);
	printf("unsigned long int  \t %d \t\t %%lu \t\t 0 to %d\n",sizeof(int),ULONG_MAX);
	printf("______________________________________________________________________________________\n");
	return 0;

}
