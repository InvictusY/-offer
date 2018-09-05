class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int rows = array.size();
        int cols = array[0].size();
        int i = 0;
        int j = cols -1;
        while(i<rows && j>=0){
            if(array[i][j] == target)
                return true;
            else if(array[i][j]> target)
                j--;
            else
                i++;
            }
        return false;
        
        
    }
};