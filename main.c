#include <stdlib.h>
#include <stdio.h>
#define for_i for(int i = 0; i < n; i++)

void sort(int n, int *v)
{
	int q;
	for (int i = 1; i < (n - 1); i++)
	{
		for (int j = (n - 1); j > 0; j--)
		{

			if (v[j] < v[j - 1])
			{
				q = v[j];
				v[j] = v[j - 1];
				v[j - 1] = q;
			}
		}

	}
}

int main()
{
	int n;
	printf("Vvedite razmer massiva:");
	scanf("%d", &n);
	int* v = (int*)calloc(n, sizeof(int));
	printf("Sozdal i zapolnil massiv:");
	for_i
	{
		v[i] = rand() % 20;
	    printf("%d ", v[i]);
	}
	printf("\n");
	sort(n, v);
	printf("Rezyltat sortirovki:");
	for_i
	{
		printf("%d ", v[i]);
	}
}
