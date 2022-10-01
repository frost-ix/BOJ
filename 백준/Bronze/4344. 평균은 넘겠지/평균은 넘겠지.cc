#include <stdio.h>
int main()
{
    double fResult=0 , fAvg=0;
    int nNum[1000] , i , j , nReplay_1 , nReplay_2;
    scanf("%d",&nReplay_1);
    for(i=0;i<nReplay_1;i++)
    {
        int fSum=0, fCount=0;
        scanf("%d",&nReplay_2);
        for(j=0;j<nReplay_2;j++)
        {
            scanf("%d",&nNum[j]);
            fSum+=nNum[j];
        }
        fAvg=(double)fSum/nReplay_2;
        for(j=0;j<nReplay_2;j++)
        {
            if(fAvg<nNum[j])
            fCount++;
        }
        fResult=(double)fCount/nReplay_2*100;
        printf("%.3f%%\n",fResult);
    }
    return 0;
}