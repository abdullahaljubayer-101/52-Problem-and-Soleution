#include<stdio.h>
int main(){
    int n1, n2, n3, i, t;
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        scanf("%d %d %d", &n1, &n2, &n3);
        if(n1<n2 && n1<n3){
            if(n2<n3){
                printf("Case %d: %d %d %d\n", i, n1, n2, n3);
            }
            else{
                printf("Case %d: %d %d %d\n", i, n1, n3, n2);
            }
        }
        else if(n2<n1 && n2<n3){
            if(n1<n3){
                printf("Case %d: %d %d %d\n", i, n2, n1, n3);
            }
            else{
                printf("Case %d: %d %d %d\n", i, n2, n3, n1);
            }
        }
        else{
            if(n1<n2){
                printf("Case %d: %d %d %d\n", i, n3, n1, n2);
            }
            else{
                printf("Case %d: %d %d %d\n", i, n3, n2, n1);
            }
        }
    }
    return 0;
}

//We did it.
