/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    static bool myfunction(Interval a, Interval b)
    {
        return a.start<b.start;
    }
    vector<Interval> merge(vector<Interval>& intervals) {
        int size=intervals.size();
        vector<Interval> result;
        if(size==0)
        {
            return result;
        }
        sort(intervals.begin(),intervals.end(),myfunction);
        Interval a(intervals[0].start,intervals[0].end);
        for(int i=1;i<size;i++)
        {
            if(a.end>=intervals[i].start)
            {
                a.end=max(intervals[i].end,a.end);
                a.start=min(intervals[i].start,a.start);
            }
            else
            {
                result.push_back(a);
                a.end=intervals[i].end;
                a.start=intervals[i].start;
            }
        }
        result.push_back(a);
        return result;

    }
};