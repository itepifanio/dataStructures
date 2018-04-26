#ifndef _HELPERS_HPP_
#define _HELPERS_HPP_

template <typename T>
void swap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}

#endif
