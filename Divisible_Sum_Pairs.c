#include<stdio.h>
int n,k;
int divisibleSumPairs(int ar[])
{
  int count=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
    if(ar[i]<ar[j] && (ar[i]+ar[j])%k==0)
      count++;
    }
  }
  return count;
}
main()
{
  scanf("%d %d",&n,&k);
  int ar[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }
  printf("%d",divisibleSumPairs(ar));
}
