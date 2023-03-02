#include<stdio.h>
int main(){
    int i, t, n, num_1, num_2, sum;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &n);
        num_1=n%10;
        while(n/10!=0){
            num_2=n/10;
            n=num_2;
        }
        sum=num_1+num_2;
        printf("Sum = %d\n", sum);
    }
    return 0;
}
