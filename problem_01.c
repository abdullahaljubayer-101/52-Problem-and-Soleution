#include<stdio.h>
int main(){
    int t, n, i;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &n);
        if(n%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
    return 0;
}
