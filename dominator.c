#include <stdio.h>
struct object 
{
int digit;
int count;

};
int solution(int A[] , int N)
{
 int count=0;
 struct object iteration[N];
 for(int i=0;i<N-1;i++)
 {
  for(int j=0; j<N; j++ )
  {
   if(A[i] == A[j])
   count++;
  }
  
  iteration[i].digit=A[i];
  iteration[i].count=count;
  count=0;
 }
 
 int size=N/2; 
 for(int i=0;i<N;i++) 
 {
   if(iteration[i].count>size )
   return i;
 }
  return -1;
 

}
int main()
{
int arr[8]={3,4,3,2,3,-1,3,3};
int result=solution(arr,8);
printf("%d",result);
return 0;
}
