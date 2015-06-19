class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int bottemX=max(A,E);
        int bottemY=max(B,F);
        int topX=min(C,G);
        int topY=min(D,H);
        if((A>=G||B>=H)||(E>=C||F>=D)) //no cover
        {
            return (G-E)*(H-F)+(C-A)*(D-B);
        }
        else
        return (G-E)*(H-F)+(C-A)*(D-B)-(topX-bottemX)*(topY-bottemY);
    }
};