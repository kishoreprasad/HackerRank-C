#include<stdio.h>
int t, n, k;
int angryProfessor(int a[])
{
  int y=0, c=1;
  for(int i=0;i<n;i++)
  {
    if(a[i]<=0)
    y++;
  }
  if(y>=k)
  c=0;
  return c;
}
int main()
{
  int r[t];
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
    scanf("%d %d",&n,&k);
    int a[n];
    for(int j=0;j<n;j++)
    {
      scanf("%d",&a[i]);
    }
    r[i]=angryProfessor(a);
  }
  for(int i=0;i<t;i++)
  {
    if(r[i]==0)
    printf("YES");
    else
    printf("NO");
  }
}
