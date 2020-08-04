//
//  Design_HashSet.cpp
//  August LeetCoding Challenge
//
//  Created by Pranjal Bhardwaj on 02/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

class MyHashSet {
public:
    bool arr[1000] {false};
    MyHashSet() {
    }
    
    void add(int key) {
        arr[key] = true;
    }
    
    void remove(int key) {
        arr[key] = false;
    }
    bool contains(int key) {
        return arr[key];
    }
};

int design_hashset(){
    int key = {};
    MyHashSet* obj = new MyHashSet();
    obj->add(key);
    obj->remove(key);
    bool param_3 = obj->contains(10);
    cout << param_3 << endl;
    return 0;
}
