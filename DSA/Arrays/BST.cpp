#include<iostream>
using namespace std;
class Solution {
public:
    void dfs(int r,int c,vector<vector<int>>& image,int originalColor,int newColor)
    {
        int n = image.size();
        int m = image[0].size();

        if(r < 0 || r >= n - 1 || c < 0 || c >= m - 1) return;
        image[r][c] = newColor
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor = image[sr][sc];

        if(originalColor == color) return image;

        //dfs
    }
};
int main(){
        
    return 0;
}