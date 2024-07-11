#include<bits/stdc++.h>
using namespace std;

int convertFive(int n) {
    
    int total = 0;
    int num = n;
    while(num!=0){
        int rem = num%10;
        if(rem == 0){
            rem = 5;
        }
        total = total * 10 + rem;
        
        num /= 10;
    }
    
    int tot = 0;
    
    while(total != 0){
        int rem = total % 10;
        tot = tot * 10 + rem;
        total /= 10;
    }
    
    return tot;
}