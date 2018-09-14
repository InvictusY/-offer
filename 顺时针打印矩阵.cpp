class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> res;
        int rows = matrix.size();
        int columns = matrix[0].size();
        int left = 0;
        int top = 0;
        int right = columns - 1;
        int bottom = rows - 1;
        while(left <= right && top <= bottom)
        {
            for(int i=left; i<=right; ++i)
            {
                res.push_back(matrix[top][i]);
            }
            for(int i=top+1; i<=bottom; ++i)
            {
                res.push_back(matrix[i][right]);
            }
            for(int i=right-1; i>=left&&top<bottom; --i)
            {
                res.push_back(matrix[bottom][i]);
            }
            for(int i=bottom-1; i>top&&left<right; --i)
            {
                res.push_back(matrix[i][left]);
            }
            ++left;
            ++top;
            --bottom;
            --right;
        }
        return res;
    }
};