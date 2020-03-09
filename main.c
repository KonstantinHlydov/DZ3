#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define for_i for(int i = 0; i < n; i++)

void swap(int* a, int* b)
{
	int z = *a;
	*a = *b;
	*b = z;
	
}

void sort(int *n, int *v)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{

			if (v[j] < v[j - 1])
			{
					swap(&v[j],&v[j-1]);
			}
		}

	}
}



int main()
{
	int n;
	printf("Vvedite razmer massiva:");
	scanf("%d", &n);
	int *v = (int*)calloc(n, sizeof(int));
	printf("Sozdal i zapolnil massiv:");
	for_i
	{
	v[i] = n-i;
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
