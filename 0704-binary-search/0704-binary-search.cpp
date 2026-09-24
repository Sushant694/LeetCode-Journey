class Solution {
public:

    // helper function
    int BinarySearch(vector<int>& nums, int target, int first, int last) {
        
        if (first <= last) {

            int mid = (first + last) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] < target) {
                return BinarySearch(nums, target, mid + 1, last);
            }
            if (nums[mid] > target) {
                return BinarySearch(nums, target, first, mid - 1);
            }
        }
        return -1;
    }


    int search(vector<int>& nums, int target) {
     
        return BinarySearch(nums, target, 0, nums.size() - 1);
    }
};