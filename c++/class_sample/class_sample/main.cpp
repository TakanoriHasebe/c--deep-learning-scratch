//
//  main.cpp
//  class_sample
//
//  Created by Takanori.H on 2017/03/10.
//  Copyright © 2017年 Takanori.H. All rights reserved.
//

#include <iostream>
#include "sample.h"

using namespace std;

int main()
{
    CSample obj;  // CSampleをインスタンス化
    int num;
    
    cout << "整数を入力して下さい:" << endl;
    cin >> num;
    
    obj.set( num );  // CSampleのメンバ変数をセット
    cout << obj.get() << endl;  // メンバ変数の値を出力
    
    return 0;
}
