
class Solution {
public:
    vector<int> arr(int num) {
        vector<int> temp;
        if(num == 0) return {0};
        while(num > 0) {
            temp.push_back(num % 10);
            num = num / 10;
        }
        reverse(temp.begin(), temp.end()); 
        return temp;
    }

    int back(vector<int>& store) {
        int result = 0;
        for(int i = 0; i < store.size(); i++) {
            result = result * 10 + store[i];
        }
        return result;
    }

    int maximum69Number (int num) { 
        vector<int> store = arr(num);

        for(int i = 0; i < store.size(); i++) {
            if(store[i] == 6) {
                store[i] = 9;
                break;
            }
        }

        return back(store);
    }
};
