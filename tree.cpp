#include <bits/stdc++.h>
using namespace std;
template <typename Type>
class Node{
    private:
        Type data;
        Node<Type>* left;
        Node<Type>* right;
    public:
        Node<Type>(Type t_data){
            data = t_data;
            left = nullptr;
            right = nullptr;
        }
        ~Node(){
            cout << "Node deleted successfully" << endl;
        }
        void setData(Type t_data){
            data = t_data;
        }

        Type getData(){
            return data;
        }

        void setLeft(Node<Type>* t_left){
            left = t_left;
        }

        Node<Type>* getLeft(){
            return left;
        }

        void setRight(Node<Type>* t_right){
            right = t_right;
        }

        Node<Type>* getRight(){
            return right;
        }
};
template <typename Type>
class BinarySearchTree{
    private:
        // Implementation
        Node<Type>* root;
        Node<Type>* _insert(Type t_data, Node<Type>* node);
        Node<Type>* _delete(Type t_data, Node<Type>* node);
        void _inorder(Node<Type>* node);
        void _postorder(Node<Type>* node);
        void _preorder(Node<Type>* node);
    public:
        // Interface
        BinarySearchTree();
        ~BinarySearchTree();
        void insert(Type t_data);
        void delete_(Type t_data);
        void inorder();
        void postorder();
        void preorder();
};
template<typename Type>
BinarySearchTree::BinarySearchTree(){
    this.root = nullptr;
}
template<typename Type>
BinarySearchTree::~BinarySearchTree(){
    cout << "Tree destroyed" << endl;
}
template<typename Type>
void BinarySearchTree::insert(Type t_data){
    this.root = this._insert(t_data, this.root);
}
template<typename Type>
void BinarySearchTree::delete_(Type t_data){
    this.root = this._delete(t_data, this.root);
}
template<typename Type>
void BinarySearchTree::inorder(){
    this._inorder(this.root);
}
template<typename Type>
void BinarySearchTree::preorder(){
    this._preorder(this.root);
}
template<typename Type>
void BinarySearchTree::postorder(){
    this._postorder(this.root);
}
template<typename Type>
Node<Type>* BinarySearchTree::_insert(Type t_data, Node<Type>* node){
    if(node == nullptr){
        node = new Node<Type>(t_data);
        return node;
    }
    else if(node->getData() < t_data){
        node->setRight(_insert(t_data, node->getRight()));
    }
    else if(node->getData() > t_data){
        node->setLeft(_insert(t_data, node->getLeft()));
    }
    return root;
}
template<typename Type>
Node<Type>* BinarySearchTree::_delete(Type t_data, Node<Type>* node){
    
}
int main(){
    return 0;
}