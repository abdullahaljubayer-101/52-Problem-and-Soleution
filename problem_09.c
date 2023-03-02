#include<stdio.h>
#include<math.h>
int main(){
    int t, n, i;
    double root, difference;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &n);
        root=sqrt(n);
        difference=ceil(root)-floor(root);
        if(difference<0.000001){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
