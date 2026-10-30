#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>getResult(vector<int>&numbers,int start, int end){
    if(numbers.size() == 0) return {};
    while(start<=end){
        swap(numbers[start],numbers[end]);
        start++;
        end--;
    }

    return numbers;
}

int main(){
    vector<int>nums = {1,2,3,4,5};
    int start = 0;
    int end = 2;
    vector<int>result = getResult(nums,start,end);
    for(int i:result){
        cout<<i<<" ";
    }

    cout<< endl;

    return 0;
}