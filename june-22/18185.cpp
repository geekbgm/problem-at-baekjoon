//
//  Problem 18185
//
//  Using gridy algorithm
//  Created by 배경민 on 2021/06/22.
//

#include <stdio.h>

int factory[10010] = {0};
int totalcost=0;

int min(int a, int b){return a>b?b:a;}

// 한곳에서만 구매하는 경우
void onetime(int k){
    
    totalcost+=3*factory[k]; //한곳에서 구매하는 경우에서 (라면가격 * 라면개수)
}

// 두곳에서 연속으로 구매하는 경우
void twotime(int k){
    while(factory[k]&&factory[k+1]){
        factory[k]-=1;
        factory[k+1]-=1;
        totalcost+=5;
    }
}

// 세곳에서 연속으로 구매하는 경우
void threetime(int k){
    while(factory[k]&&factory[k+1]&&factory[k+2]){
        factory[k]-=1;
        factory[k+1]-=1;
        factory[k+2]-=1;
        totalcost+=7;
    }
}



int main(){
    
    int N; // 공장의 개수
    scanf("%d", &N);
    
    for(int i=0; i<N; i++) scanf("%d", &factory[i]); //공장당 구매할 라면의 개수
    
    for(int i=0; i<N; i++){
        if(factory[i+1] > factory[i+2]){
            int k = min(factory[i],factory[i+1]-factory[i+2]);
            factory[i]-=k;
            factory[i+1]-=k;
            totalcost+=5*k;
            
            threetime(i);
            onetime(i);
        }
        else { threetime(i); twotime(i); onetime(i); }
    }
    
    printf("%d\n", totalcost);
    return 0;
}
