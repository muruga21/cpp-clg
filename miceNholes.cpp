#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> mice = {-4,0,3};
    vector<int> holes = {5,3,1};
    sort(mice.begin(),mice.end());
    sort(holes.begin(),holes.end());
    int n = mice.size();
    vector<int> result;
    for(int i = 0 ; i < n ; i++){
        result.push_back(abs(mice[i]-holes[i]));
    }
    for(auto x : result){
        cout<<x<<" ";
    }
    return 0;
}
