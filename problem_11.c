#include<stdio.h>
int main(){
    int t, i, n;
    long long int factorial;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        factorial=1;
        for(i=2; i<=n; i++){
            factorial=factorial*i;
        }
        printf("%lld\n", factorial);
    }
    return 0;
}
