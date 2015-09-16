class Solution {
public:
    int minDistance(string word1, string word2) {
        int size1=word1.size();
        int size2=word2.size();
        int arr[size1+1][size2+1];
        for(int i=0;i<size1+1;i++)
            arr[i][0]=i;
        for(int i=0;i<size2+1;i++)
            arr[0][i]=i;
        for(int i=1;i<size1+1;i++)
        {
            for(int j=1;j<size2+1;j++)
            {
                if(word1[i-1]==word2[j-1])
                {
                    arr[i][j]=arr[i-1][j-1];
                }
                else
                {
                    arr[i][j]=min(arr[i][j-1]+1,arr[i-1][j]+1);
                    arr[i][j]=min(arr[i][j],arr[i-1][j-1]+1);
                }
            }
        }
        return arr[size1][size2];
    }
};