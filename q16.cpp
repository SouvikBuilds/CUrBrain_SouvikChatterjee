#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int>removeMaxElement(vector<int>&arr){
    if(arr.size() == 0) return {};

    int maxElement = INT_MIN;
    for(int i:arr){
        if(i>maxElement){
            maxElement = i;
        }
    }

    arr.erase(remove(arr.begin(),arr.end(),maxElement),arr.end());

    return arr;
}

int findSecondMax(vector<int>&arr){
    if(arr.size() == 0) return -1;
    removeMaxElement(arr);
    int secondMax = INT_MIN;
    for(int i:arr){
        if(i>secondMax){
            secondMax = i;
        }
    }

    return secondMax;
}

int main(){
    int n;
    cout<<"Enter Total no of elements: ";
    cin>>n;
    vector<int>arr;
    for(int i = 0; i<n; i++){
        int num;
        cout<<"Enter Value "<<i+1<<": ";
        cin>>num;
        arr.push_back(num);
    }

    int secondMaxElement = findSecondMax(arr);
    if(secondMaxElement == INT_MIN){
        cout<<"Second Max Element: "<<-1<<endl;
    }else{
        cout<<"Second Max Element: "<<secondMaxElement<<endl;
    }
    return 0;
}