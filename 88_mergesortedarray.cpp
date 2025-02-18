class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};

Input = ([1,2,3,0,0,0] , m = 3 ) , ([2,5,6] , n = 3 )
Output = [1,2,2,3,5,6] , [1,2,2,3,5,6]
