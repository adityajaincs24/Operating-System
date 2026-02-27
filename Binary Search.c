#include<stdio.h>
int main(){
  int a[10], ele, n, l, h, m, found = 0;
  printf("Enter no of elements : ");
  scanf("%d", &n);
  printf("Enter elements (sorted) : ");
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  printf("Enter the element to search : ");
  scanf("%d", &ele);
  l = 0;
  h = n - 1;
  while(l <= h){
    m = (l + h) / 2;
    if(a[m] == ele){
      printf("Found at index %d", m);
      found = 1;
      break;
    }
    else if(a[m] < ele){
      l = m + 1;
    }
    else{
      h = m - 1;
    }
  }
  if(found == 0){
    printf("Not Found");
  }
  return 0;
}
