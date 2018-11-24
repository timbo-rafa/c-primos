#include <stdio.h>

int primo(int j);//protótipo da função primo

int main()
{
	int j;

    for(j = 2; j <= 20000; j++){
		if(primo(j) == 1)
			printf("%d ", j);
	}

	printf("\n");

	return 0;
}

int primo(int j)
{
	int i;

	for(i = j-1; i > 1; i--){
		if(j % i == 0)
			return 0;
	}
	return 1;
}
