class Solution {
public:
    string minWindow(string s, string t) {
        int size=t.size();
        queue<int> myqueue;
        string a;
        int arr[256];
        int count=0;
        for(int i=0;i<256;i++)
        {
            arr[i]=-100;
        }
        for(int i=0;i<size;i++) //build dictionary.
        {
            if(arr[t[i]]==-100)
            {
                arr[t[i]]=0;
            }
            arr[t[i]]++;
            count++;
        }
        int start=0,end=0,length=s.size()+1;
        int results=0,resulte=0;
        int size1=s.size();
        if(size>size1)
            return a;
        int index;
        while(start<=size1-size&&end<size1)
        {
            index=s[end];
            if(arr[index]!=-100)
            {
                myqueue.push(end);
                if(arr[index]>0)
                {
                    count--;
                }
                arr[index]--;
            }
            while(count==0)
            {
                start=myqueue.front();
                if(length>end-start+1)
                {
                    length=end-start+1;
                    results=start;
                    resulte=end;
                }
                myqueue.pop();
                index=s[start];
                arr[index]++;
                if(arr[index]>0)
                {
                    count++;
                }
            }
            end++;
        }
        if(length==s.size()+1)
            return a;
        else
            return s.substr(results,length);
    }
};