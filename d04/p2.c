#include <stdio.h>
#include "numbers.h"
int main(int argc, char *argv[])

{
int n;
int c;
int p;
int sum;
int freq[45];
int corrent_number[45];
n = 0;
c = 0;
p = 0;
sum = 0;
/*
for(n = 0; n<45; n++)
	freq[n] = 0;
for(n=0;numbers[n]!=-1;n++)
{
	corrent_number = numbers[n];
	sum += numbers[n];
	freq[corrent_number-1]++;

}

	while(1)
	{
	if(numbers[n]== -1)
	{
		printf("====%d====\n",c);
		break;
	}
	else
	{
		printf("%d\n",numbers[n]);
		n++;
		c++;
	}
	}


	for(n=0,c=0;numbers[n]!=-1;n++,c++);
	{
	printf("count:%d\n",c);
	}


	while(1)
	{
	if(numbers[n]==-1)
		{
		p = sum/c;
		printf("%d\n",p);
		break;
		}
	else
		{
		sum += numbers[n];
		printf("total = %d\n",sum);
		n++;
		}

	for(n=0; n<45; n++)
		printf("%d- %d\n", n+1,freq[n]);
*/
return 0;
}

