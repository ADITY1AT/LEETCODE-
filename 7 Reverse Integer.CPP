class Solution {
public:
    int reverse(int x) {
        int reverse=0;
        
        
        while(x!=0){
            int remainder=x%10;
            //     INT_MIN is -2147483648
            //   INT_MAX is 2147483647

            // Check if the reverse will overflow after adding the remainder
            if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && remainder > 7)) {
                return 0; // Overflow condition for positive numbers
            }
            if (reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && remainder < -8)) {
                return 0; // Overflow condition for negative numbers
            }
    
            reverse=reverse*10+remainder;
          
            x/=10;
        }
        
        return reverse;
       
    }
};
