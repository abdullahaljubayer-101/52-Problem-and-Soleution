#include<stdio.h>
#include<string.h>
int count_num(){
    int j, len, count;
    char num[1000];
    gets(num);
    count=1;
    len=strlen(num);
    for(j=0; j<len; j++){
        if(num[j]==' '){
            count++;
        }
    }
    return count;
}

int main(){
    int t, i, count;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        count_num();
        printf("%d", count);
    }
    return 0;
}
