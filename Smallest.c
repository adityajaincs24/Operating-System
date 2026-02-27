#include<stdio.h>
int main(){
  int a[10], ele, n, min = 0;
  printf("Enter no of elements : ");
  scanf("%d", &n);
  printf("Enter elements : ");
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  min = a[0];
  int index = 0;
  for(int i = 1; i < n; i++){
    if(a[i] < min){
      min = a[i];
      index = i;
    }
  }
  printf("Minimum element is %d at  %d", min, index);
  return 0;
}
