#include<stdio.h>
int main(){
  int a[10],ele,n;
  printf("Enter no of elements : ");
  scanf("%d",&n);
  printf("Enter elements : ");
  for(int i = 0; i < n; i++){
    scanf("%d",&a[i]);
  }
  printf("Enter the element to search : ");
  scanf("%d",&ele);
  for(int i = 0; i < n; i++){
    if(a[i]==ele){
     printf("Found");
     }
  }
}


