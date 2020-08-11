//
//  H-Index.cpp
//  August LeetCoding Challenge
//
//  Created by Pranjal Bhardwaj on 11/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int h_index(){
    vector<int> citations {};
    sort(citations.begin(), citations.end(), greater<int>());
    for(int i = 0; i < citations.size(); i++)
        if(i >= citations[i]) {
            return i;
        }
    cout << citations.size() << endl;
    return 0;
}
