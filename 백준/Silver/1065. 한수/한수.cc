#include <stdio.h>
int check(int fx)
{
	int nNum_a , nNum_b , nNum_c,nCnt=1;
	int nSame_Plus_1=0 , nSame_Plus_2=0;
	int nNum_100_under;
	if(fx<100)
	{
		nNum_100_under=fx;
		return nNum_100_under;
	}
	if(fx>=100)
	{
		for(int i=100;i<=fx;i++)
		{
			nNum_a=i/100;
	         	nNum_b=(i%100)/10;
	        	nNum_c=i%10;
	        	nSame_Plus_1=nNum_a-nNum_b;
	        	nSame_Plus_2=nNum_b-nNum_c;

	        	if(nSame_Plus_1==nSame_Plus_2)
	        	{
		        	nCnt++;
	        	}
		}
		return nCnt+98;
	}
	return 0;
}
int main()
{
	int nInput , nRes =0;
	scanf("%d",&nInput);
	for(int i=1;i<=nInput;i++)
	{
		nRes = check(i);
	}
	printf("%d",nRes);
	return 0;
}