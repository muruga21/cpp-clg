#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> input = {1,2,3,4,5};
    int n = input.size();
    vector<int> boomArr(n,0);
    for(auto x : input){
        int i = (x%n);
        int j = (2*x+3)%n;
        boomArr[i] = 1;
        boomArr[j] = 1;
    }
    int val = 7;
    int i = (val%7), j = (2*val+3)%n;
    if(boomArr[i] && boomArr[j]){
        cout<<"False positive";
    }
    else{
        cout<<"Not availabe";
    }
    return 0;
}
