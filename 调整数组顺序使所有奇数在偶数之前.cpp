class Solution {
public:
    void reOrderArray(vector<int> &array) {
        vector<int> newArray;
        for(int i=0; i<array.size(); i++)
        {
            if(array[i]%2==1)
                newArray.push_back(array[i]);
        }
        for(int i=0; i<array.size(); i++)
        {
            if(array[i]%2==0)
                newArray.push_back(array[i]);
        }
        array = newArray;
        
    }
};