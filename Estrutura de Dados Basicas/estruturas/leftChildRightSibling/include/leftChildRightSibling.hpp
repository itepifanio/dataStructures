#ifndef _LEFT_CHILD_RIGHT_SIBLING_HPP_
#define _LEFT_CHILD_RIGHT_SIBLING_HPP_
#include <iostream>
#include "node.hpp"

template <typename T>
class LeftChildRightSibling{
    public:
        T value;
        Node<T> *root;

        LeftChildRightSibling(T value){
            this->root = new Node<T>(value);
            this->root->sibling = this->root->child = NULL;
            this->root->value = value;
        }

        Node<T> *pushSibling(Node<T> *n, T value){
            if(n == NULL) return NULL;
            
			while(n->sibling)
                n = n->sibling;

            return (n->sibling = new Node<T>(value));
        }

        Node<T> *pushChild(T value, Node<T> *n = NULL){
            if(n == NULL){
                if(this->root == NULL) return NULL;

                n = root;
            }

            // Se o nó já tiver um filho então adicionamos um irmão
            if(n->child)
                return pushSibling(n->child, value);

            return (n->child = new Node<T>(value));
        }

        void print(Node<T> *n = NULL){
            if(n == NULL){
                if(this->root == NULL) return;

                n = root;
            }

            while(n){
                std::cout << " " << n->value;
                
                if(n->child)
                    print(n->child);

                n = n->sibling;
            }

        }

        int height(Node<T> *n = NULL) { 
			if(n == NULL){
                if(this->root == NULL){ return 0; }

                n = root;
            }
 
            int h, t;

            if (n == NULL) return -1; 

            h = 0; //height
            n = n->child; 

            while (n!= NULL) {
                t = height(n); 
                if (t > h)  
                    h = t; 
                n = n->sibling; 
            } 

            return h+1; 
        }

        bool searchChild(Node<T> *child, T value) {
            if(child == NULL) {
                return false;
            } else if(child->value == value || searchSibling(child->sibling, value)) {
                return true;
            }

            return searchChild(child->child, value);
        }

        bool searchSibling(Node<T> *sibling, T value) {
            if(sibling == NULL) {
                return false;
            } else if(sibling->value == value || searchChild(sibling->child, value)) {
                return true;
            }
            
            return searchSibling(sibling->sibling, value);
        }

        bool search(T value) {
            return this->searchChild(this->root, value);
        }

				Node<T> * searchChild_node(Node<T> *child, T value) {

			if (child->value == value)
			{
				return child;
			}
			else if (child->child != NULL and child->sibling == NULL) //child:1 sibling:0
			{
				return searchChild_node(child->child, value);
			}
			else if (child->child == NULL and child->sibling != NULL) //child:0 sibling:1
			{
				return searchSibling_node(child->sibling, value);
			}
			else if (child->child != NULL and child->sibling != NULL) //child:1 sibling:1
			{
				//1 procure pelo child
				auto childs = searchChild_node(child->child, value);

				if (childs != NULL)
				{
					return childs;
				}

				// nao encontrou child, procure sibling
				return searchSibling_node(child->sibling, value);
			}


        	return NULL;   // não encontrou

        }

		Node<T> * searchSibling_node(Node<T> *sibling, T value) {

			if (sibling->value == value)
			{
				return sibling;
			}
			else if (sibling->child != NULL and sibling->sibling == NULL) //child:1 sibling:0
			{
				return searchChild_node(sibling->child, value);
			}
			else if (sibling->child == NULL and sibling->sibling != NULL) //child:0 sibling:1
			{
				return searchSibling_node(sibling->sibling, value);
			}
			else if (sibling->child != NULL and sibling->sibling != NULL) //child:1 sibling:1
			{
				// 1 procure pelo siblings
				auto siblings = searchSibling_node(sibling->sibling, value);

				if (siblings != NULL)
				{
					return siblings;
				}

				// nao encontrou siblind, procure child
				return searchChild_node(sibling->child, value);
			}


        	return NULL;   // não encontrou

		}

		Node<T> * search_node(T value) {
		    return this->searchChild_node(this->root, value);
		}

		void remove(T value){
			auto *node = this->search_node(value);

			if(node == NULL){
				std::cout << "\nValor nao esta na Arvore\n";
			} else if(node == this->root) {
				this->root = NULL;
			} else {
				if(node->sibling == NULL) {
					//node = NULL; // Supostamente deveria funcionar mas ainda é impresso
					*node = NULL; // Funciona, porém atribui "0" a node->value
				} else {
					*node = *node->sibling;
				}
			}
		}
};

#endif
