class Solution {
public:
  
    long long hourly(vector<int>& piles, int k) {
        long long totalhrs = 0;
        for (int bananas : piles) {
            totalhrs += (bananas + k - 1) / k; 
        }
        return totalhrs;
    }

    int maxi(vector<int>& piles) {
        int maxx = INT_MIN;
        for (int bananas : piles) {
            maxx = max(maxx, bananas);
        }
        return maxx;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = maxi(piles);
        int ans = high; 

        while (low <= high) {
            int mid = low + (high - low) / 2;

            

            if (hourly(piles, mid) <= h) {
                ans = mid;     
                high = mid - 1; 
            } else {
                low = mid + 1;  
            }
        }
        return ans;
    }
};


// class Solution {
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int l = 1, r = *max_element(piles.begin(), piles.end());
//         int ans = r;

//         while (l <= r) {
//             int mid = l + (r - l) / 2;
//             long long  hours = 0;
//             for (int p : piles)
//                 hours += (p + mid - 1) / mid;

//             if (hours <= h) {
//                 ans = mid;
//                 r = mid - 1;
//             } else {
//                 l = mid + 1;
//             }
//         }

//         return ans;
//     }
// };