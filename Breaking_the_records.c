#include<stdio.h>
int n;
breakingRecords(int scores[])
{
  int highest_score=scores(0),lowest_score=scores(0),high=0,low=0;
  for(int i=0;i<n;i++)
  {
    if(scores[i]>highest_score)
    {
      scores[i]=highest_score;
      high++;
    }
  }
  for(int i=0;i<n;i++)
  {
    if(scores[i]<lowest_score)
    {
      scores[i]=lowest_score;
      low++;
    }
  }
  printf("%d %d",high,low);
  return 0;
}
int main()
{
  scanf("%d",&n);
  int scores[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&scores[i]);
  }
  breakingRecords(scores);
  return 0;
}
