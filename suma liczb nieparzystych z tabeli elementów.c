#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m, int tab[n][m])
{
	int suma = 0;
	int jest = 0;
	for(int x = 0; x < n; x++){
		for(int y = 0; y < m; y++){
			if(tab[x][y] % 2 == 1){
				suma += tab[x][y];
				jest = 1;
			}
		}
	}
	if(jest){
		return suma;
	}
	return -1;
}

int main()
{
	int tab[3][2] = {
	{1,2},
	{3,4},
	{5,6},
	};

    printf("%d\n",foo(3,2,tab));
    return 0;
}
