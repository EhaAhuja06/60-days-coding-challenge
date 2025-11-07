//Leetcode problem 349 Intersection of two arrays
class Solution {
public:
    bool myBinarySearch(vector<int>& arr, int target) {
        int left = 0;
        int right = arr.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2; 

            if (arr[mid] == target) {
                return true;
            } 
            else if (arr[mid] < target) {
                left = mid + 1; 
            } 
            else {
                right = mid - 1; 
            }
        }
        return false; 
    }

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(), nums2.end());
        unordered_set<int> result;
        for (int num : nums1) {
            if (myBinarySearch(nums2, num)) {
                result.insert(num);
            }
        }
        return vector<int>(result.begin(), result.end());
    }
};
