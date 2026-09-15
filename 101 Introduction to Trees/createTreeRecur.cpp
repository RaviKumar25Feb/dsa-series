#include<iostream>
using namespace std;

//create class
class node{
    public:
    int data;
    node *left, *right;
    node (int value){
        data = value;
        left = right = NULL;
    }
};

//create binary tree
node* BinaryTree() {
    int x;
    cin>>x;
    if(x == -1) return NULL;

    node *temp = new node(x);

    //Left side create
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left = BinaryTree();

    //Right side create
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right = BinaryTree();

    return temp;
}

//pre order traversal
void preorder(node *root) {
    if(root == NULL) return;

    //print node
    cout<<root->data<<" ";
    //left
    preorder(root->left);
    //right
    preorder(root->right);
}

//in order traversal
void inorder(node *root) {
    if(root == NULL) return;

    //left
    inorder(root->left);
    //print node
    cout<<root->data<<" ";
    //right
    inorder(root->right);
}

//post order traversal
void postorder(node *root) {
    if(root == NULL) return;

    //left
    postorder(root->left);
    //right node
    postorder(root->right);
    //print
    cout<<root->data<<" ";
}

int main()
{
    cout<<"Enter the root node: ";
    node *root;
    root = BinaryTree();

    //pre order print
    cout<<"Pre order: ";
    preorder(root);

    cout<<endl;

    //in order print
    cout<<"In order : ";
    inorder(root);

    cout<<endl;

    //post order print
    cout<<"Post order: ";
    postorder(root);
}