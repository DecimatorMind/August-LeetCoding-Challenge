//
//  Power_of_Four.cpp
//  August LeetCoding Challenge
//
//  Created by Pranjal Bhardwaj on 04/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int power_of_four(){
    int num {16};
    if(num == 1){
        cout << true << endl;
    }
    while(num > 4){
        num = num%4 == 0 ? num/4 : 0 ;
    }
    cout << boolalpha;
    if(num == 4){
        cout << true << endl;
    } else {
        cout << false << endl;
    }
    return 0;
}
