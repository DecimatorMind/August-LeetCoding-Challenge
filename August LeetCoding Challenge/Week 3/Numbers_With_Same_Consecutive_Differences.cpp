//
//  Numbers_With_Same_Consecutive_Differences.cpp
//  August LeetCoding Challenge
//
//  Created by Pranjal Bhardwaj on 18/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
void rcheck(int num,int k,int n){
    if(n==1){
        ans.push_back(num);
        return;
    }
    if(num%10-k>=0){
        rcheck(num*10+(num%10-k),k,n-1);
    }
    if(k){
        if(num%10+k<10){
            rcheck(num*10+(num%10+k),k,n-1);
        }
    }
}
int numbers_with_some_consecutive_differences() {
    int n {3},k {7};
    for(int i=1;i<10;i++){
        rcheck(i,k,n);
    }
    for (auto i : ans){
        cout << i << endl;
    }
    return 0;
}
