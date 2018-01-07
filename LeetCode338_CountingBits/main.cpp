//
//  main.cpp
//  LeetCode338_CountingBits
//
//  Created by Rui on 1/6/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> numBits{0};
        
        for(int i = 1; i <= num; i++)
        {
            if( i % 2 == 0)
                numBits.push_back(numBits[i / 2]);
            else
                numBits.push_back(numBits[i / 2] + 1);
        }
        return numBits;
    }
};
