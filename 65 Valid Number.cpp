class Solution {
public:
    bool isNumber(string s) {
        //6 input number . e letter space sign 
       int arr[10][6]={
           { 1, 4,-1,-1, 0, 2}, // 0 space  state
           { 1, 8, 3,-1, 7,-1}, //1 number state
           { 1, 4,-1,-1,-1,-1},//2 sign state  
           { 5,-1,-1,-1,-1,9},//3 e state  
           { 6,-1,-1,-1,-1,-1},//4 has . state
           { 5,-1,-1,-1,7,-1}, //5  e number state
           { 6,-1,3,-1,7,-1}, //6 . number state
           { -1,-1,-1,-1,7,-1},//7 space state;
           { 6,-1,3,-1,7,-1}, //8 has . state
           { 5, -1,-1,-1,-1,-1}//9 e sign state  
       };
       int size=s.size();
       int state=0;
       for(int i=0;i<size;i++)
       {
           if(s[i]>='0'&&s[i]<='9')
           {
               state = arr[state][0]; 
           }
           else if(s[i]==' ')
           {
               state = arr[state][4]; 
           }
           else if(s[i]=='e')
           {
               state = arr[state][2]; 
           }
           else if(s[i]=='.')
           {
              state = arr[state][1]; 
           }
           else if(s[i]=='+'||s[i]=='-')
           {
               state = arr[state][5]; 
           }
           else
           {
               state=arr[state][3];
           }
           if(state==-1)
           {
               return false;
           }
       }
       return state==1||state==5||state==6||state==7||state==8;
       
    }
};