#ifndef _MIN_STACK_HPP_
#define _MIN_STACK_HPP_
#include "../../../listaLigada/listaDuplamenteLigada.hpp"

template <typename T>
class MinStack{
    public:
        ListaDuplamenteLigada <T> minList;
        ListaDuplamenteLigada <T> stack;

        void push(T valor){
            stack.push_front(valor);

            if(minList.isEmpty()){
                minList.push_front(valor);
            }else if(valor < minList.getTop()){
                minList.push_front(valor);
            }
        }

        void printStack(){
            stack.print();
        }

        T getMin(){
            return minList.getTop();
        }

        void remove(){
            stack.remove_front();
            minList.remove_front();
        }
};

#endif
