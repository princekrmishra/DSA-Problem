#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int>& nums){
    int temp = nums[0];
    int count = 0;

    for(int i = 0; i < nums.size(); i++){
        if(temp == nums[i]){
            count++;
        }
        else{
            count--;
            if(count == 0){
                temp = nums[i];
                count = 1;
            }
        }
    }
    return temp;
}

int main(){
    vector<int> nums;

    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);

    cout<<majority<<" ";
    
    return 0;
}

