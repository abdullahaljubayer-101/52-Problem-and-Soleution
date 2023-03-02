#include<stdio.h>
#include<string.h>
int main(){
    int t, i, len;
    char num[101];
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%s", &num);
        len=strlen(num);
        if(num[len-1]%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
    return 0;
}
