//
//  Detect_Capital.cpp
//  August LeetCoding Challenge
//
//  Created by Pranjal Bhardwaj on 01/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int detect_capital(){
    string word {};
    int flag {};
    if(isupper(word[0])){
        for(auto i : word){
            if(isupper(i)){
                flag += 1;
            }
        }
        cout << (flag == word.length() || flag == 1 ? "True" : "False") << endl;
    } else {
        for(auto i : word){
            if(isupper(i)){
                break;
            } else {
                flag++;
            }
        }
        cout << (flag == word.length() ? "True" : "False") << endl;
    }
    return 0;
}
