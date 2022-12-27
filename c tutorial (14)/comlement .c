#include <stdio.h>

int main()
{
   int n,a,t=0,r=0;
   printf("enter the number of universal set:-\n");
   scanf("%d",&n);
   printf("enter the elements of universal set:--\n");
   int arr[n];
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   printf("enter the number of set:-\n");
   scanf("%d",&a);
   printf("enter the element of set:--\n");
  int brr[a];
   for(int i=0;i<a;i++){
       scanf("%d",&brr[i]);
   }
   int crr[n-a];
   for(int i=0;i<n;i++){
       t=0;
       for(int j=0;j<a;j++){
           if(arr[i]==brr[j]){
              t++;
              break;
           }
       }
       if(t==0){
           crr[r]=arr[i];
           r++;
       }
   }
   printf("compliment of set:--\n");
   for(int i=0;i<r;i++){
       printf("%d\t",crr[i]);
   }
}
