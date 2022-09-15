#include <stdio.h>
#include <stdlib.h>

int foo(char * n)
{
	int s = 0;
	for (int i = 0; n[i] != '\0'; i++)
    {
        if(n[i] > 64 && n[i] < 91){
        	s++;
		}
    }
	return s;
}

int main()
{
	char * n = "AbEcAdLo";

    printf("%d\n",foo(n));
    return 0;
}
