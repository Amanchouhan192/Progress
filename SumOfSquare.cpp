class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0)
        {
            return true;
        }
        int a,b;
        b = sqrt(c);
        for(a=0;a<=sqrt(c);a++)
        {
            b = sqrt(c-a*a);
            if(b*b==c-a*a)
                    return true;
        }
        return false;
    }
};
