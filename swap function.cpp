#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void swap(int  &a, int &b);

int main()
{
    int a = 5;
    int b = 16;

    swap(a,b);
	printf("a = %d \n",a);
	printf("b = %d \n",b);
	
    _getch();
    return 0;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}