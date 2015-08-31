class Solution {
public:
    int nthUglyNumber(int n) {
        int arr[n];
        arr[0]=1;
        int index2=0,index3=0,index5=0;
        int result2,result3,result5;
        int minnum;
        for(int i=1;i<n;i++)
        {
            result2=arr[index2]*2;
            result3=arr[index3]*3;
            result5=arr[index5]*5;
            minnum=min(result2,result3);
            minnum=min(minnum,result5);
            arr[i]=minnum;
            if(result2==minnum) index2++;
            if(result3==minnum) index3++;
            if(result5==minnum) index5++;
        }
        return arr[n-1];
    }
    
};