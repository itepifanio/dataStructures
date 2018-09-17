#ifndef _HASH_TABLE_HPP
#define _HASH_TABLE_HPP

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

template <typename T>
class HashTable {
    private:
        int tamanho;
        std::vector<std::list<T>> buckets;
    public:
        HashTable(int tamanho = 5){
            this->buckets.resize(tamanho);
            this->tamanho = 0;
        }

        bool vazio(){
            return ! this->tamanho;
        }

        int hash(T valor){
            return valor >> 1;
        }

        void print(){
            for(auto& bucket : buckets){
                std::cout << "[";
                for(auto valor : bucket){
                    std::cout << " " << valor << " ";
                }
                std::cout << "]";
                std::cout << std::endl;
            }
        }

        bool find(T valor){
            int idx = hash(valor) % getCapacidade();

            auto posicao = std::find(
                buckets[idx].begin(),
                buckets[idx].end(),
                valor
            );

            return posicao != buckets[idx].end();
        }

        void adicionar(T valor) {
            int idx = hash(valor) % getCapacidade();
            buckets[idx].push_back(valor);
        }

        // Gets e sets
        int getTamanho(){
            return tamanho;
        }

        int getCapacidade(){
            return buckets.size();
        }
};

#endif
