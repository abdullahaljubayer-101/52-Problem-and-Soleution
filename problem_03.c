#include<stdio.h>
int main(){
    int i, j;
    for(i=1000; i>=1; i=i-5){
        for(j=i; j>=i-4; j--){
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
