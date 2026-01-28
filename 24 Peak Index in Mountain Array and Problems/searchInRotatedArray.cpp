#include<iostream>
using namespace std;

int main() {
    int nums[5]={3,4,6,0,1};
    int target = 0;


    int start=0, end=4, mid, ans=-1;
    while(start<=end){
        mid=start + (end-start)/2;
        if(nums[mid]==target){
            cout<<mid<<endl;
            return 0;
        }
        //left half sorted
        if(nums[mid]>=nums[start]){
            if(target>=nums[start] && target<nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        //right half sorted
        else{
            if(target>nums[mid] && target<=nums[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    cout<<"Not found"<<endl;
    return 0;
}