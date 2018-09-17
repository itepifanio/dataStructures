#ifndef _NO_HPP_
#define _NO_HPP_

template <typename T>
class No{
    public:
        T valor;
        No<T> *proximo;
        No<T> *anterior;
        No(){}
        ~No(){}
};

#endif
