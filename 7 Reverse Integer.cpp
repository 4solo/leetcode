class Solution {
public:
    int reverse(int x) {  
    // Start typing your C/C++ solution below  
     // DO NOT write int main() function  
     int lastDigit = 0;  
     long long int result = 0;        
     bool isNeg = x>0? false:true;  
     x = abs(x);  
     while(x>0)  
     {  
        lastDigit = x%10;  
        result = result*10 + lastDigit;  
       x = x/10;  
     }  
     if(result>= 2147483647) return 0;  
     if(isNeg)  
        result *=-1;  
      return result;      
    }  
};