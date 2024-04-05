#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
    int i=mat.size()-1;
    int j=1,z=0,x=0,y=0;
    while(z<mat[0].size()){
        x=i;y=j;
        while(x>0 && y>0){
            if(mat[x][y]<mat[x-1][y-1])
            {
                int temp=mat[x][y];
                mat[x][y]=mat[x-1][y-1];
                mat[x-1][y-1]=temp;
            }
            x--;
            y--;
        }
        if(j==mat.size()-1 && z==(mat.size()/2)){
          i--;
        }
        if(j<mat[0].size()){j++;}
        z++;
    }
        return mat;
    }
};
int main(){
    vector<vector<int>> v1;
    vector<int> v2;
    v2.push_back(3);
    v2.push_back(3);
    v2.push_back(1);
    v2.push_back(1);
    v1.push_back(v2);
    v2.clear();

    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(1);
    v2.push_back(2);
    v1.push_back(v2);
    v2.clear();

    v2.push_back(1);
    v2.push_back(1);
    v2.push_back(1);
    v2.push_back(2);
    v1.push_back(v2);
    Solution s;
    v1=s.diagonalSort(v1);

    return 0;
}