#include<stdio.h>
#include<string.h>
int main(){
    int t, i, count;
    char snts[10000];
    char ch[2];
    scanf("%d", &t);
    while(t--){
        scanf(" %[^\n]", snts);
        scanf("%s", ch);
        count=0;
        for(i=0; i<strlen(snts); i++){
            if(snts[i]==ch[0]){
                count++;
            }
        }
        if(count>0){
            printf("Occurrence of '%c' in '%s' = %d\n", ch[0], snts, count);
        }
        else{
            printf("'%c' is not present\n", ch[0]);
        }
    }
    return 0;
}
