#include<stdio.h>

int main(){
    
    int N, M;
    scanf("%d", &N); getchar();
    scanf("%d", &M); getchar();
    
    int min = M/N;
    int max = min+1;
    
    int totalMax = M - (N*min);
    int totalMin = N - totalMax;
    
    for(int i = 0; i<N; i++){
        if(totalMax != 0){
            for(int j = 0; j<max; j++){
                printf("*");
            }
            puts("");
            totalMax--;
        } else {
            for(int j = 0; j<min; j++){
                printf("*");
            }
            puts("");
        }
    }
    
    return 0;
}
