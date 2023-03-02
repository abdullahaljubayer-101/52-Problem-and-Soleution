#include<stdio.h>
int main(){
    int n, i, a, t, num_1, num_2, sum;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &n);
        num_1=n%10;
        a=n%10000;
        n=n-a;
        num_2=n/10000;
        sum=num_1+num_2;
        printf("Sum = %d\n", sum);
    }
    return 0;
}
