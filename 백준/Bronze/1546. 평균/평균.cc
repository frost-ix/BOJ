#include <stdio.h>
int main()
{
    double lfNum[1000];
    int i, nReplay;
    double fSum = 0 , fMax = 0 , fMin = 0;
    scanf("%d",&nReplay);
    for(i=0;i<nReplay;i++)
    {
        scanf("%lf",&lfNum[i]);
        if(fMax<lfNum[i])
        fMax=lfNum[i];
    }
    for(i=0;i<nReplay;i++)
    {
        lfNum[i]=lfNum[i]/fMax*100.0;
        fSum += lfNum[i];
    }
    printf("%f",fSum/(double)nReplay);
    return 0;
}