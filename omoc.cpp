#include<stdio.h>

// 1black 2 white 0 null

int main()

{

	char omo[20];

	int i,k,j,n,arr[19][19];

	int down, right, se, ne;

	for(i=0; i<19; i++)

	{

		scanf("%s",omo);

		for(j=0; j<19; j++)

		{

			if(omo[j] == '0')

			{

				arr[i][j] = 0;

			}

			else if(omo[j] == '1')

			{

				arr[i][j] = 1;

			}

			else if(omo[j] == '2')

			{

				arr[i][j] = -1;

			}

		}

	}

	n = 0;

	for(i=0; i<19; i++)

	{

		for(j=0; j<19; j++)

		{

			if((arr[i+1][j] == 1 || arr[i+1][j] == -1) && i+1 < 15)

			{

				for(down=1; down <=5; down++)

				{

					n+=arr[i+down][j];

				}

				if(n == 5)

				{

					printf(" 1 \n");

					printf("%d %d",i+2,j+1);

					return 0;

				}

				else if(n == -5)

				{

					printf(" 2 \n");

					printf("%d %d",i+2,j+1);

					return 0;

				}

				n = 0;

			}

			if((arr[i][j+1] == 1 || arr[i][j+1] == -1) &&j+1 < 15)

			{

				for(right=1; right <=5; right++)

				{

					n+=arr[i][j+right];

				}

				if(n == 5)

				{

					printf(" 1 \n");

					printf("%d %d",i+1,j+2);

					return 0;

				}

				else if(n == -5)

				{

					printf(" 2 \n");

					printf("%d %d",i+1,j+2);

					return 0;

				}

				n = 0;

			}

			if((arr[i+1][j+1] == 1 || arr[i+1][j+1] == -1) && j+1 < 15 && i+1 < 19)

			{

				for(se=1; se<=5; se++)

				{

					n+=arr[i+se][j+se];

				}

				if(n == 5)

				{

					printf(" 1 \n");

					printf("%d %d",i+2,j+2);

					return 0;

				}

				else if(n == -5)

				{

					printf(" 2 \n");

					printf("%d %d",i+2,j+2);

					return 0;

				}

				n = 0;

			}

			if((arr[i-1][j+1] == 1 || arr[i-1][j+1] == -1) && j+1 < 15 && i-1 >= 0)

			{

				for(ne=1; ne<=5; ne++)

				{

					n+=arr[i-ne][j+ne];

				}

				if(n == 5)

				{

					printf(" 1 \n");

					printf("%d %d",i,j+2);

					return 0;

				}

				else if(n == -5)

				{

					printf(" 2 \n");

					printf("%d %d",i,j+2);

					return 0;

				}

				n = 0;

			}

		}

	}

	return 0;

}
