#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a="waabwswfd";
    int size=a.size();
    string b;
    for(int i=0;i<size;i++)
    {
        b.push_back('#');
        b.push_back(a[i]);
    }
    b.push_back('#');
    cout<<a<<endl;
    cout<<b<<endl;
    int sizeb=b.size();
    int p[sizeb];
    int j;
    int mx = 0;
    int id=0;
    p[0]=1;
    for(j=1; j<sizeb; j++)
    {
        if( mx > j )
            p[j] = min( p[2*id-j], mx-j );
        else
            p[j] = 1;
        for(; b[j+p[j]] == b[j-p[j]]; p[j]++)
        if( p[j] + j > mx )
        {
            mx = p[j] + j;
            id = j;
        }
    }
    for(int i=0;i<sizeb;i++)
    {
        cout<<p[i];
    }
}