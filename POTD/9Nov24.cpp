class Solution {
  public:
    string minSum(vector<int> &arr) {
        string siva1, siva2;
        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); i++) {
            if (i % 2 == 0)
                siva1 += to_string(arr[i]);
            else
                siva2 += to_string(arr[i]);
        }

        
        reverse(siva1.begin(),siva1.end());
        reverse(siva2.begin(),siva2.end());
        string result;
        int carry = 0, i = 0, j = 0;

        while (i < siva1.size() || j < siva2.size() || carry != 0) {
            int sum = carry;

            if (i < siva1.size()) 
                sum += siva1[i++] - '0';
            if (j < siva2.size()) 
                sum += siva2[j++] - '0';

            carry = sum / 10;
            result += (sum % 10) + '0';
        }

        while (result.size() > 1 && result.back() == '0') {
            result.pop_back();
        }

        reverse(result.begin(), result.end());
        return result;
    }

};
