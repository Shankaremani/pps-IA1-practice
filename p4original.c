#include<stdio.h>
int input_array_size()
{ 
  int n;
  printf("enter the number of inputs");
  scanf("%d", &n);
 return n;

}
void input_array(int n,int a[n])
{
 for(int i=0;i<n; i++){
   printf("enter a number:");
   scanf("%d", &a[i]);
 }

}

int sum_n_arrays(int n,int a[n]){
  int sum=0;
  for(int i=0;i<n; i++){
    sum +=a[i];
  }
  return sum;
}

void output(int n,int a[n],int sum){
  for(int i=0;i<n-1; i++){
    printf("%d+", a[i]);
   }
  printf("%d is %d\n",a[n-1], sum);

}

int main()
{
  int n;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  int sum = sum_n_arrays(n,a);
  output(n,a,sum);
  return 0;
}

