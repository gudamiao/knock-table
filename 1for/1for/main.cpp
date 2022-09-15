//
//  main.cpp
//  1for
//
//  Created by 顾淼 on 2022/9/15.
//

#include <iostream>
using namespace std;
int main()
{
   
    for (int i=1; i<=100; i++) {
        int a = i%7;//倍数
        int b = i%10;//个位有7
        int c = i/10;//十位有7
        if(a == 0 || b == 7 || c == 7)
        {
            cout<< "敲桌子" <<endl;
        }
        else{
            cout<< i <<endl;
        }
    }
    return 0;
}
