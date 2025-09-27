class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        //ATTEMPT 1 -> DOESN'T WORK
        // int total = 0;
        // for(int i=0; i<piles.size(); i++){
        //     total += piles[i];
        // }
        // k = total/h;

        // return k;
        int k;
        int low = 1, high = *max_element(piles.begin(), piles.end());
        while(low < high){
            int mid = low + (high-low)/2;
            long hrs = 0;
            for(int bananas : piles){
                hrs += (bananas + mid - 1)/mid;
            }

            if(hrs <= h){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};