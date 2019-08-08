//
//  operator.cpp
//  complex_carculate
//
//  Created by fengsh on 2019/8/7.
//  Copyright © 2019 fengsh. All rights reserved.
//

#include "operator.hpp"


Complex operator + (Complex c1,Complex c2)
{
    return Complex(c1.real + c2.real,c1.imag + c2.imag);
}

Complex operator - (Complex c1,Complex c2)
{
    return Complex(c1.real - c2.real,c1.imag - c2.imag);
}

Complex operator * (Complex c1,Complex c2)
{
    return Complex(c1.real*c2.real-c1.imag*c2.imag,c1.real*c2.imag+c2.real*c1.imag);
}

Complex operator / (Complex c1,Complex c2)
{
    return Complex((c1.real*c2.real+c1.imag*c2.imag)/(c2.real*c2.real+c2.imag*c2.imag),(c1.imag*c2.real-c1.real*c2.imag)/(c2.real*c2.real+c2.imag*c2.imag));
}
