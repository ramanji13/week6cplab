#include<stdio.h>
int main() {
    int n;
    printf("enter the value of n for number of values\n");
    scanf("%d",&n);
    int x[n];
    int i,j;
    for(i=0; i<n; i++) {
        printf("index %d value\t",i);
        scanf("%d",&x[i]);
    }
    int max=x[0];
    for(j=0; j<n; j++) {
        if(max<x[j]) {
            max=x[j];
        }
    }
    int min=x[0];
    for(j=0; j<n; j++) {
        if(min>x[j]) {
            min=x[j];
        }
    }
    printf("min value is %d\n",min);
    printf("max value is %d\n",max);
}
