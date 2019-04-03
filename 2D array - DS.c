#include<stdio.h>
int hourglassSum(int arr[6][6]);
int main()
{
    int arr[6][6];
    int i,j,k;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("%d",hourglassSum(arr));
}
int hourglassSum(int arr[6][6])
{
    int i,j,max=-36985247,s;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            s=(arr[i][j]+arr[i][j+1]+arr[i][j+2])+(arr[i+1][j+1])+(arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]);
            if(s>max)
            {
                max=s;
            }
        }
    }
    return max;
}
