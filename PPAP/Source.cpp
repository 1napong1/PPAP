#include<stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	if (a > 0 && a <= 31)
	{
		if (a % 7 == 0)
		{
			printf("%d/10/2020 is Thursday", a);
		}
		else
			if (a % 7 == 1)
			{
				printf("%d/10/2020 is Friday", a);
			}
			else
				if (a % 7 == 2)
				{
					printf("%d/10/2020 is Saturday", a);
				}
				else
					if (a % 7 == 3)
					{
						printf("%d/10/2020 is Sunday", a);
					}
					else
						if (a % 7 == 4)
						{
							printf("%d/10/2020 is Monday", a);
						}
						else
							if (a % 7 == 5)
							{
								printf("%d/10/2020 is Tuesday", a);
							}
							else
								if (a % 7 == 6)
								{
									printf("%d/10/2020 is Wednesday", a);
								}
		
	}
	else
	{
		printf("ERROR");
	}
}