class Solution {
public:
    // Merge function
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;

        // Compare and push smaller elements
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);
            }
        }

        // Add remaining from left half
        while (left <= mid) {
            temp.push_back(nums[left++]);
        }

        // Add remaining from right half
        while (right <= high) {
            temp.push_back(nums[right++]);
        }

        // Copy back to original array
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    // Recursive merge sort
    void mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high) return;

        int mid = (low + high) / 2;

        mergeSort(nums, low, mid);        // Sort left
        mergeSort(nums, mid + 1, high);   // Sort right
        merge(nums, low, mid, high);      // Merge them
    }

    // Public function to call mergeSort
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
