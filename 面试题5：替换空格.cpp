class Solution {
public:
	void replaceSpace(char *str,int length) {
        if (str==nullptr || length<=0)
            return ;
        int oldlength = 0;
        int blanklength = 0;
        int i = 0;
        while(str[i]!='\0')
        {
            ++oldlength;
            if(str[i]==' ')
                ++blanklength;
            ++i;
        }
        int newlength = oldlength + 2*blanklength;
        if(newlength>length)
            return;
        int p1 = oldlength;
        int p2 = newlength;
        while(p1>=0 && p2>p1)
        {
            if(str[p1]==' ')
            {
                str[p2--] = '0';
                str[p2--] = '2';
                str[p2--] = '%';
            }
            else
            {
                str[p2--] = str[p1];
            }
            --p1;
        }

	}
};