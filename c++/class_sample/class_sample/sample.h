//
//  sample.h
//  class_sample
//
//  Created by Takanori.H on 2017/03/10.
//  Copyright © 2017年 Takanori.H. All rights reserved.
//

//  header fileでは関数の名前のみ
//  ex) set, get


#ifndef sample_h
#define sample_h

// クラス宣言
class CSample
{
public:
    void set(int num);  // m_numに値を設定する
    int get();          // m_numの値を取得する
private:
    int m_num;
};



#endif /* sample_h */
