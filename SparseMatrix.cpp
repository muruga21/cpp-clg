#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> originalMatrix = {
        {1, 0, 0, 4, 0},
        {0, 2, 0, 5, 0},
        {0, 0, 3, 0, 0}
    };
    int n = originalMatrix.size();
    int m = originalMatrix[0].size();
    vector<vector<int>> sparseMatrix;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            if(originalMatrix[i][j]){
                vector<int> temp = {i, j, originalMatrix[i][j]};
                sparseMatrix.push_back(temp);
            }
        }
    }
    for(auto x : sparseMatrix){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
