//
// Created by Addison on 24-7-15.
//

#ifndef STRINGLEARN_CHENSTRING_H
#define STRINGLEARN_CHENSTRING_H

#include <iostream>

namespace feng {

    class ChenString {
    private:
        char *data;
    public:
        int length;
        int cap;

        ChenString();

        explicit ChenString(int cap);

        virtual ~ChenString();

        ChenString& operator=(const char* str);

        ChenString& operator+=(const char* str);

        friend std::ostream& operator<<(std::ostream& os, const ChenString& str){
            char tmp[str.length+1];
            for (int i = 0; i < str.length; ++i) {
                tmp[i] = str.data[i];
            }
            tmp[str.length] = '\0';
            os << tmp;
            return os;
        }

    };

} // feng

#endif //STRINGLEARN_CHENSTRING_H
