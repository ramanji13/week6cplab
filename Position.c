#include<stdio.h>
int main() {
    int n,key,position,flag,i;
    printf("enter the value of n for number of values\n");
    scanf("%d",&n);
    int x[n];
      for(i=0; i<n; i++) {
        printf("index %d value\t",i);
        scanf("%d",&x[i]);
    }
    printf("any key value you want to search\n");
    scanf("%d",&key);
    flag=0;
    for(int j=0; j<n; j++) {
        if(x[j]==key) {
            flag++;
            position=j+1;

        }
    }
    if(flag>0) {
        printf("value %d found at %d position",key,position);
    }
    else {
        printf("value %d not found",key);
    }
}
