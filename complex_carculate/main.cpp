//
//  main.cpp
//  complex_carculate
//
//  Created by fengsh on 2019/8/7.
//  Copyright © 2019 fengsh. All rights reserved.
//

#include <iostream>
#include "operator.hpp"
using namespace std;


int main(int argc, const char * argv[])
{
    Complex c1,c2,c3,c4,c5,c6;
    cin>>c1>>c2;
    cout<<"c1 = "<<c1<<endl;
    cout<<"c2 = "<<c2<<endl;
    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;
    c6 = c1 / c2;
    cout<<"c3 = "<<c3<<endl;
    cout<<"c4 = "<<c4<<endl;
    cout<<"c5 = "<<c5<<endl;
    cout<<"c6 = "<<c6<<endl;
    return 0;
}
