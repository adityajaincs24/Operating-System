#include<stdio.h>
int main(){
  int a[10], ele, n;
  int Duplicate = 0;
  printf("Enter no of elements : ");
  scanf("%d", &n);
  printf("Enter elements : ");
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      if(a[j] == a[i]){
        Duplicate = 1;
        break;
      }
    }
    if(Duplicate) break;
  }
  if(Duplicate){
    printf("Duplicates present");
  }
  else{
    printf("No Duplicate");
  }
  return 0;
}
