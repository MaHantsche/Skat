//
//  main.cpp
//  Skat
//
//  Created by Marcel Hantsche on 14.12.18.
//  Copyright © 2018 Marcel Hantsche. All rights reserved.
//

#include <iostream>
#include <array>
#include <random>
#include <algorithm>

typedef unsigned char uc;

struct state{
    std::array<std::array<uc,11>,3> trump;
    std::array<std::array<std::array<uc,7>,3>,3> color;
};

struct start{
    std::array<std::array<uc,10>,3> cards;
    std::array<uc,2> skat;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    state x;
    std::cout<<sizeof(x)<<std::endl;
    
    std::srand(int(std::time(NULL)));
    std::array<uc,32> deck={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(std::begin(deck), std::end(deck),g);
    
    
    for (short i=0;i<32;i++){
        std::cout<<short(deck[i])<<std::endl;
    }
    
    start s;
    for (short i=0;i<30;i++){
        s.cards[i/10][i%10]=deck[i];
    }
    s.skat={deck[30],deck[31]};
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}


