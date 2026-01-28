#include<iostream>
using namespace std;

int main() {
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,0,2,4};

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // logic here
    int row_index=0;
    for(int col_index=0; col_index<4; col_index++){
        if(row_index == 0) {
            for(row_index; row_index<3; row_index++){
                cout<<arr[row_index][col_index]<<' ';
            }
            row_index--;
        }
        else {
            for(row_index; row_index>=0; row_index--){
                cout<<arr[row_index][col_index]<<" ";
            }
            row_index++;
        }
    }

    return 0;
}