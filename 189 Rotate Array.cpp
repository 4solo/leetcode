class Solution {
public:
    void rotate(int nums[], int n, int k) {
        int *num;
        num=new int [n];
        if(n-k<0)
        {
            k=k%n;
        }
        for(int i=0;i<n;i++)
        {
            num[i]=nums[(i+n-k)%n];
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=num[i];
        }
        
    }
};