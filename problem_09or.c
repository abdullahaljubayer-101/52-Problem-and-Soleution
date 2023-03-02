#include<stdio.h>
#include<math.h>
int main(){
    int t, n, i, root;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &n);
        root=sqrt(n);
        if(root*root==n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
