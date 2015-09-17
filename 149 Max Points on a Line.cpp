/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
    int maxPoints(vector<Point>& points) {
        int size=points.size();
        if(size<=2) return size;
        unordered_map<float,int>mymap;
        unordered_map<float,int>::iterator it;
        int finalresult=0;
        int result=0;
        for(int i=0;i<size;i++)
        {
            mymap.clear();
            int same=0;
            int slopezero=1;
            result=2;
            for(int j=0;j<size;j++)
            {
                if(i==j) continue;
                if(points[i].x==points[j].x&&points[i].y==points[j].y)
                {
                    same++;
                    continue;
                }
                float xx=float(points[i].x-points[j].x);
                float yy=float(points[i].y-points[j].y);
                if(xx==0)
                {
                    slopezero++;
                }
                else
                {
                    it=mymap.find(yy/xx);
                    if(it==mymap.end())
                    {
                        mymap.insert(pair<float,int>(yy/xx,2));
                    }
                    else
                    {
                        it->second++;
                        result=max(result,it->second);
                    }
                }
            }
            result=max(result,slopezero);
            result+=same;
            result=min(result,size);
            finalresult=max(finalresult,result);
        }
        return finalresult;
    }
};