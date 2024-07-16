//
// Created by Addison on 24-7-15.
//

#include "ChenString.h"
#include <iostream>

namespace feng {
    ChenString::ChenString(int cap) : length(0), cap(cap), data(new char[cap]){
    }

    ChenString::ChenString():ChenString(100)  {
    }

    ChenString::~ChenString() {
        delete[] this->data;
    }

    ChenString &ChenString::operator=(const char *str) {
        this->length = (int)std::strlen(str);
        std::strcpy(data, str); // 复制字符串
        return *this; // 返回当前对象的引用
    }

    ChenString &ChenString::operator+=(const char *str) {
        int stringLength = (int)std::strlen(str);
        int newLength = this->length+stringLength;
        if (newLength > this->cap){
            std::cout <<"FROM ChenString:容量不足。扩容"<<std::endl;
            // 容量不足，扩容
            int rate = newLength/this->cap;
            int newCap = this->cap*(rate+1);
            char* newData = new char[newCap];
            std::strcpy(newData, this->data);
            delete[] this->data;
            this->data = newData;
            this->cap = newCap;
        }
        // 将新字符串写入
        for (int i = 0; i < stringLength; ++i){
            this->data[length+i] = str[i];
        }
        this->length = newLength;

        return *this;
    }

} // feng