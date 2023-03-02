#include<stdio.h>
int main(){
    int t, r1, r2, B, boll_played;
    double current_run_rate, required_run_rate;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &r1, &r2, &B);
        boll_played=300-B;
        current_run_rate=((r2*1.0)/boll_played)*6;
        required_run_rate=(((r1-r2+1)*1.0)/B)*6;
        printf("%.2lf %.2lf\n", current_run_rate, required_run_rate);
    }
    return 0;
}
