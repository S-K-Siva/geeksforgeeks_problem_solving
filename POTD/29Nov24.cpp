class Solution {
public:
    string addBinary(string& s1, string& s2) {
        string result = "";
        int i = s1.size() - 1, j = s2.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int bit1 = (i >= 0) ? s1[i] - '0' : 0; 
            int bit2 = (j >= 0) ? s2[j] - '0' : 0; 

            int sum = bit1 + bit2 + carry; 
            result += (sum % 2) + '0';     
            carry = sum / 2;            

            i--; j--;
        }

        reverse(result.begin(), result.end());

        int pos = result.find_first_not_of('0');
        return (pos == npos) ? "0" : result.substr(pos);
    }
};
