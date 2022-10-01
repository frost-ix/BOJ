#include <stdio.h>
int nScale[10001] = { 0 };
int sum(int i)
{
	int sum = i;
	while(i>0)
	{
		sum+=i%10;
		i/=10;
	}
	return sum;
}
int main()
{
	for(int i=1;i<10001;i++)
	{
		nScale[sum(i)] = 1;
		if(!nScale[i]) printf("%d\n",i);
	}
}