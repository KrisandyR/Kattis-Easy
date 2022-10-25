#include<stdio.h>

int main(){
    
    int N;
    scanf("%d", &N); getchar();
    
    for(int i =0; i<N; i++){
        int M;
        int total = 0;
        scanf("%d", &M); getchar();
        
        for(int i = 0; i<M; i++){
            int O;
            scanf("%d", &O); getchar();
            total+=(O-1);
        }
        
        total++;
        
        printf("%d\n", total);
    }
    
    return 0;
}
