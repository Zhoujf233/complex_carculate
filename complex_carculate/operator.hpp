//
//  operator.hpp
//  complex_carculate
//
//  Created by fengsh on 2019/8/7.
//  Copyright © 2019 fengsh. All rights reserved.
//

#ifndef operator_hpp
#define operator_hpp

#include <iostream>
using namespace std;

class Complex
{
public:
    friend ostream& operator <<(ostream&,Complex&);
    friend istream& operator >>(istream&,Complex&);
    Complex(){real = 0;imag = 0;}
    Complex(double r,double i){real = r;imag = i;}
    friend Complex operator + (Complex c1,Complex c2);
    friend Complex operator - (Complex c1,Complex c2);
    friend Complex operator * (Complex c1,Complex c2);
    friend Complex operator / (Complex c1,Complex c2);
private:
    double real;
    double imag;
};


#endif /* operator_hpp */
