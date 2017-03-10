//
//  sample.cpp
//  class_sample
//
//  Created by Takanori.H on 2017/03/10.
//  Copyright © 2017年 Takanori.H. All rights reserved.
//

//  .cppでは, CSample classの関数の詳細が記述されている
//  private変数に代入されている

#include <stdio.h>
#include "sample.h"

void CSample::set(int num)
{
    m_num = num;
}

int CSample::get()
{
    return m_num;
}


