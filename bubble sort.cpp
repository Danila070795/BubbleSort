#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void sort_mass(int*, int);
void print_mass(int*, int);

void main()
{
	int num;						/// number of elements
	int *mass;
	srand(time(NULL));

	printf("Input number of elements: ");
	scanf("%d", &num);

	mass = new int [num];
	printf("\nRandom array whith %d elements:\n", num);
	for (int i = 0; i < num; i++)	/// creating values of array elements by random
	{
		mass[i] = + rand() % 50;
		printf( "| %d\t" , mass[i] );
	}
	printf("\n\nSteps of sorting array:");
	sort_mass(mass,num);
	printf("\n\nResult:");
	print_mass(mass, num);			/// print result of sorting
	delete mass;
	getch();
}



void sort_mass(int *mass, int num)
{
	int tmp,t = 0;
	do
	{
		for( int i = num-1; i > t; i-- )
		{
			if( mass[i-1] > mass[i] )
			{
				tmp = mass[i];
				mass[i] = mass[i-1];
				mass[i-1] = tmp;
				print_mass(mass, num);	/// print result of iteration
			}
		}

		t++;
	}
	while ( t < num );
}


void print_mass(int *mass, int num)
{
	printf("\n");
	for( int i = 0; i < num; i++ )
	{
		printf( "| %d\t" , mass[i] );
	}
}