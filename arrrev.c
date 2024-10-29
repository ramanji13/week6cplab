#include <stdio.h>
int main() {
    int max,n,firstNum,secondNum,i;
    printf("enter the value of n for number of digits do you want\n");
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
    printf("enter the index %d value\n",i);
    scanf("%d",&x[i]);
} int k=0;
    for(i=n-1;i>=0;i--){
printf("index %d value is %d\n",k,x[i]);

    k++;
}
  

    return 0;
}
