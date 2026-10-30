#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int getAnswer(vector<int>sales){
    if(sales.size() == 0) return -1;

    int ans = INT_MAX;
    int maxFreq = 0;
    unordered_map<int,int>freq;
    for(int i:sales){
        freq[i]++;
    }

    for(auto it:freq){
        if(it.second>maxFreq){
            maxFreq = it.second;
            ans = it.first;
        }else if(it.second == maxFreq){
            ans = min(ans , it.first);
        }
    }

    return ans;
}

int main(){
    vector<int>sales = {4,1,4,1,7};
    int result = getAnswer(sales);
    cout<<"Result: "<<result<<endl;
    return 0;
}