#include <bits/stdc++.h>
using namespace std;

void printMaxActivities(vector<pair<int,int>> helper, int n)
{
    vector<int> f;
    vector<int> s;
    for(auto x : helper){
        cout<<x.first<< " ";
    }
    cout<<endl;
    for(auto x : helper){
        cout<<x.second<< " ";
    }
    cout<<endl;
    for(auto x : helper){
        f.push_back(x.first);
        s.push_back(x.second);
    }
    int i = 0;
    cout<<i<<" ";
    for(int j = 1 ; j < n ; j ++){
        if(s[j]>=f[i]){
            cout<<j<<" ";
            i = j;
        }
    }
}

int main()
{
    vector<int> s = { 1, 3, 0, 5, 9, 8 };
    vector<int> f = { 2, 4, 6, 7, 10, 10 };
    int n = s.size();
    vector<pair<int,int>> helper;
    for(int i = 0 ; i < n ; i ++){
        pair<int,int> p;
        p.first = f[i];
        p.second = s[i];
        helper.push_back(p);
    }
    sort(helper.begin(),helper.end());
	printMaxActivities(helper, n);
	return 0;
}
