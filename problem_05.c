#include<stdio.h>
int main(){
    int i, j, k, t, n;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &n);
        for(j=0; j<n; j++){
            for(k=0; k<n; k++){
                printf("*");
            }
            printf("\n");
        }
        if(i<t-1){
            printf("\n");
        }
    }
    return 0;
}
