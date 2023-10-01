class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int i = 0;
        int j = 0;
        vector<int> res;
        while (i < nums1.size() & j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                res.push_back(nums1[i]);
                i++;
            }
            else
            {
                res.push_back(nums2[j]);
                j++;
            }
        }
        res.insert(res.end(), nums1.begin() + i, nums1.end());
        res.insert(res.end(), nums2.begin() + j, nums2.end());
        int n = res.size();
        if (n % 2 == 1)
        {
            return res[n / 2];
        }
        else
        {
            return (res[n / 2 - 1] + res[n / 2]) / 2.0;
        }
    }
};