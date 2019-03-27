#include<stdio.h>
int n, type[5];
int migratoryBirds(int arr[])
{
  int temp;
  static int i;
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
  int max=type[0];
  for(i=1;i<5;i++)
  {
    if(type[i]>max)
    max=type[i];
  }
  return i;
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
