class Solution {
  public:
    void mergeArrays(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();
        int gap = (n + m + 1) / 2;
        while (gap > 0) {
            int i = 0;
            int j = gap;

            
            while (j < n + m) {
                if (j < n && arr1[i] > arr1[j]) {
                    swap(arr1[i], arr1[j]);
                } else if (j >= n && i < n && arr1[i] > arr2[j - n]) {
                    swap(arr1[i], arr2[j - n]);
                } else if (j >= n && i >= n && arr2[i - n] > arr2[j - n]) {
                    swap(arr2[i - n], arr2[j - n]);
                }

                i++;
                j++;
            }

            if (gap == 1)
                break;
            gap = (gap + 1) / 2;
        }

    }
};
