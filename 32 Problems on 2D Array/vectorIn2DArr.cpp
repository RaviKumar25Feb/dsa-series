#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    // // create 2d vector
    // vector<vector<int>>matrix(3, vector<int>(4,1));
    

    // take input from user
    int rows, cols;
    cout<<"Enter rows and col: ";
    cin>>rows>>cols;
    vector<vector<int>>matrix(rows, vector<int>(cols));
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>matrix[i][j];
        }
    }


    // printing the values
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    // printing rows and columns
    cout<<"Rows: "<<matrix.size()<<endl;
    cout<<"Col: "<<matrix[0].size()<<endl;

}