#include <stdio.h>
int main() {
    int max;
    int x[5] = {10,80,30,100,50};
    for(int i=0;i<=4;i++){
        if(x[i]>x[i+1]){
        max=x[i];
            
        }
    }
    printf("%d",max);

    return 0;
}
