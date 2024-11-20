#include<stdio.h>
#include<math.h>
int main() {
    int n,i,r;
    float k,fac=1,x=1;
    printf("enter how many digits you want");
    scanf("%d",&n);
    printf("enter r value");
    scanf("%d",&r);
    for(i=1; i<=2*n-2; i++) {
        fac*=i;
        k=pow(r,i);
        if(i%2==0&&i!=4) {
            x=(x-(k/fac));
            printf("\nfac=%f\n",fac);
            printf("k=%f\n",k);
            printf("x=%f\n",x);
        }
        if(i%4==0) {
            x=(x+(k/fac));
            printf("\nfac=%f\n",fac);
            printf("k=%f\n",k);
            printf("x=%f\n",x);
        }

    }
    printf("%f\n",x);

}*//* sinx
#include<stdio.h>
#include<math.h>
int main() {
    int n,i,r;
    float k,fac=1,a=1,b=1;
    printf("enter how many digits you want");
    scanf("%d",&n);
    printf("enter r value");
    scanf("%d",&r);
    float x=r;
    for(i=1; i<=2*n-1; i++) {
        fac*=i;
        k=pow(r,i);
          if(i==1) {
            printf("x=%f\n",x);
        }
        if(i==a+4) {
            x=(x+(k/fac));
            printf("\nfac=%f\n",fac);
            printf("k=%f\n",k);
            printf("x=%f\n",x);
        }
        if(i==b+2) {
            x=(x-(k/fac));
            printf("\nfac=%f\n",fac);
            printf("k=%f\n",k);
            printf("x=%f\n",x);
        }

    }
    printf("%f\n",x);

}
