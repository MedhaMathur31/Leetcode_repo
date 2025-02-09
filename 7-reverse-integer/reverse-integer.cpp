class Solution {
public:
    int reverse(int x) {
        long sum = 0;
       while(x!=0){
            int y = x %10;
            sum = (sum*10) +y;
            x = x/10;
            if(sum<pow(-2,31) || sum>pow(2,31)){
                return 0;
            }
        }
       
       return sum;
    }
};