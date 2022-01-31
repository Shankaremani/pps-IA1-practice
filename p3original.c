#include<stdio.h>
int input_n()
{
  int l;
  printf("enter a limit\n");
  scanf("%d",&l);
  return l;
}
int sum_n(int n)
{
  int ans=0;
  for (int i=1; i<=n;i++){

   ans+=i;
  } 
  return ans;
}
void output(int n,int sum)
{
    for(int i=1; i<n; i++)
    {
      printf("%d+", i);
    }
    printf("%d is %d\n", n, sum);
}
int main()
{
    int n = input_n();
    int sum = sum_n(n);
    output(n, sum);
    return 0;
  
}


