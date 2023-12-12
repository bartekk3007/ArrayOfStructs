#include <stdio.h>
#include <stdlib.h>

struct gracz 
{
	char *imie;
	int skill;
};

int main(void)
{
	//struct gracz g1 = { 22, 90 };
	//struct gracz g2 = { 25, 100 };
	//struct gracz g3 = { 18, 110 };
	//struct gracz g4 = { 30, 85 };

	//struct gracz arr[] = { g1, g2, g3, g4 };

	struct gracz arr[] = { { "Daniel", 90}, {"Edward", 100}, {"Filip", 110}, {"Grzegorz", 85} };

	for (int i = 0; i < 4; i++)
	{
		printf("%-12s", arr[i].imie);
		printf("%d\n", arr[i].skill);
	}

	struct gracz *p;
	p = malloc(sizeof(struct gracz) * 3);

	p[0].imie = malloc(sizeof(char) * 7);
	strcpy_s(p[0].imie, 7, "Henryk");
	p[0].skill = 70;

	for (int i = 0; i < 1; i++)
	{
		printf("%-12s", p[i].imie);
		printf("%d\n", p[i].skill);
	}

	for (int i = 0; i < 1; i++)
	{
		free(p[i].imie);
	}

	free(p);

	return 0;
}