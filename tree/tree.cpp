#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

class Node{
    private:
        int value;
        bool inited = false;
        
    public:
        Node* left;
        Node* rigth;
        Node(){}
        Node(int value){
            this->value = value;
            this->inited = true;
        }
        bool isInited(){
            return this->inited;
        }
        int getValue(){
            return this->value;
        }
        
        int checkNode(int value){
            if(value < this->value){
                return 0;
            }else if(value > this->value){
                return 1;
            }else{
                return -1;
            } 
        }
        void addValue(int value){
            this->value = value;
            this->inited = true;
            this->left = new Node();
            this->rigth = new Node();
        }
        ~Node(){
            delete this->left;
            delete this->rigth;
        }
};
class Tree{
    private:
        Node root;
    public:
        Tree(){
            
        }
       void addValue(int value){
            if(!this->root.isInited()){
                root.addValue(value);
            }else{
                if(value < root.getValue()){
                    this->addValue(root.left, value);
                }else if(value > root.getValue()){
                    this->addValue(root.right,value);
                }

            }
       }

       void addValue(Node node, int value){
            if(!node.isInited()){
                node.addValue(value);
            }
            if(value < node.getValue()){
                this->addValue(node.left, value);
            }else if(value > node.getValue()){
                this->addValue(node.right,value);
            }
       } 

};
int main(int argc, char * argv[]){
    Tree t;	
}
