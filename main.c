#include "ft_printf.h"
#include <stdio.h>

int main(void){
	int num = 1;

	// int count = ft_printf("Merhaba dünya %d", num);
	// int count_real = printf("Merhaba dünya %d", num);

	// printf("%d %d",count,count_real);

	// ____________________________

	int count = ft_printf("Merhaba dünya %d", num);
	int count_real = printf("Merhaba dünya %d", num);
}