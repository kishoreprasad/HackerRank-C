#include<stdio.h>
int n, type[5];
int migratoryBirds(int arr[])
{
  int temp;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==1)
    type[0]++;
    if(arr[i]==2)
    type[1]++;
    if(arr[i]==3)
    type[2]++;
    if(arr[i]==4)
    type[3]++;
    if(arr[i]==5)
    type[4]++;
  }
  for(int i=0;i<5;i++)
  {
    for(int j=i+1;i<5;i++)
    {
      if(type[i]>type[j])
      {
        type[i]=temp;
        type[i]=type[j];
        temp=type[j];
      }
    }
  }
  return type[4];
}
main()
{
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",arr[i]);
  }
  printf("%d",migratoryBirds(arr));
}
