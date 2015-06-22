class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size=digits.size();
        int carry=1;
        for(int i=size-1;i>=0;i--)
        {
            if(digits[i]+carry>=10)
            {
                digits[i]=(digits[i]+carry)%10;
                carry=1;
            }
            else
            {
                digits[i]=digits[i]+carry;
                carry=0;
            }
        }
        if(carry!=0)
        {
            digits.insert(digits.begin(),carry);
        }
        return digits;
    }
};