//
//  Find_All_Duplicates_in_an_Array.cpp
//  August LeetCoding Challenge
//
//  Created by Pranjal Bhardwaj on 06/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int find_all_duplicates_in_an_array(){
    vector<int> nums {};
    int temp[10000] {0};
    vector<int> result {};
    for(auto i : nums){
        temp[i]++;
    }
    for(int i = 0;i < 10000;i++){
        if(temp[i] == 2){
            result.push_back(i);
        }
    }
    for(int i : result){
        cout << i << endl;
    }
    return 0;
}
