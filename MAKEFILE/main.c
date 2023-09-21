
#include <stdio.h>

int main(void)
{
	int	palabra;

	palabra	= 'abc123Ç';

	ft_isalpha(palabra);
	printf("es %d\n alfanumerico ",ft_isalpha(palabra));
	printf("es %d\n ascii",ft_ascii(palabra));
	printf("es %d\n numero",ft_isnum(palabra));
	printf("es %d\n printable",ft_isprint(palabra));
}