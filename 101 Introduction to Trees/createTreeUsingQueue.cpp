#include<iostream>
#include<queue>

using namespace std;

class node {
    public:
    int data;
    node *left, *right;
    node(int val) {
        data = val;
        left = right = NULL;
    }
};

int main()
{
    int x; 
    cin>>x;
    queue<node *>q;
    node *root = new node(x);
    q.push(root);

    while(!q.empty()) {
        node *temp = q.front();
        q.pop();

        cin>>x; //for left side
        if(x!=-1) {
            temp->left = new node(x);
            q.push(temp->left);
        }

        cin>>x; //for the right
        if(x!=-1) {
            temp->right = new node(x);
            q.push(temp->right);
        }
    }

    return 0;
}