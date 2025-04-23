#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        sort(candies, candies + N); // Sort the array to find min and max costs
        int minCost = 0, maxCost = 0;

        // Calculate minimum cost
        int i = 0, j = N - 1;
        while (i <= j) {
            minCost += candies[i]; // Buy the cheapest candy
            j -= K; // Get K candies for free
            i++; 
        }

        // Calculate maximum cost
        i = 0, j = N - 1;
        while (i <= j) {
            maxCost += candies[j]; // Buy the most expensive candy
            i += K; // Get K candies for free
            j--; 
        }

        return {minCost, maxCost};
    }
};

// Example Usage
int main() {
    Solution obj;
    int candies[] = {3, 2, 1, 4};
    int N = 4, K = 2;
    
    vector<int> result = obj.candyStore(candies, N, K);
    cout << "Minimum cost: " << result[0] << ", Maximum cost: " << result[1] << endl;

    return 0;
}
