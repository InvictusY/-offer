class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int length = rotateArray.size();
        if(length<=0)
            return 0;
        int index1 = 0;
        int index2 = length-1;
        int midIndex = index1;
        while(rotateArray[index1]>=rotateArray[index2])
        {
            if(index2-index1==1)
            {
                return rotateArray[index2];
            }
            midIndex = (index1+index2)/2;
            if(rotateArray[index1]==rotateArray[index2])
            {
                midIndex = search(rotateArray, index1, index2);
            }
            if(rotateArray[index1]<=rotateArray[midIndex])
            {
                index1 = midIndex;
            }
            else if(rotateArray[index2]>=rotateArray[midIndex])
            {
                index2 = midIndex;
            }
        }
        return rotateArray[index2];
    }
    int search(vector<int> rotateArray, int index1, int index2)
    {
        int result = rotateArray[index1];
        for(int i=index1+1; i<=index2; i++)
        {    if(result>rotateArray[i])
            {
                result = rotateArray[i];
            }
        }
        return result;
    }
};