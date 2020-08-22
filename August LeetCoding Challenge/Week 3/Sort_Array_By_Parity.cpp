//
//  Sort_Array_By_Parity.cpp
//  August LeetCoding Challenge
//
//  Created by Pranjal Bhardwaj on 21/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int sort_array_by_parity(){
    vector<int> A {3,2,4,5};
    vector<int> result {};
    for(int i = 0; i<A.size();i++){
        if(A[i]%2 == 0){
            result.push_back(A[i]);
        }
    }
    for(int i = 0;i<A.size();i++){
        if(A[i]%2 != 0){
            result.push_back(A[i]);
        }
    }
    for(auto i : result){
        cout << i << endl;
    }
    return 0;
}
