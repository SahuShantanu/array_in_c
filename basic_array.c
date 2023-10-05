#include<stdio.h>

int main(){
  int arr[5]={2,3,4,5,6};     // we can declare the value by typing this.
  printf("%d %d\n",arr[3],arr[1]);  // we can print 2 value of array by this method.
  printf("%d\n",arr[4]);    // we can print 1 value of array by this method.
  printf("%d\n",arr[2]);
  printf("%d\n",arr[1]);
  printf("%d\n",arr[0]);
  arr[4] = 100;              // also , we can change the value of array.
  printf("%d\n",arr[4]);

  // new code:

  float a[3] = {1.2,3.2,4.2};
  printf("%.2f\n",a[0]);
  printf("%.2f\n",a[1]);
  return 0;
}
