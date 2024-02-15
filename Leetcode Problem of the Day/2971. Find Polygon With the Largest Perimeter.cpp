// 2971. Find Polygon With the Largest Perimeter
class Solution
{
public:
    long long largestPerimeter(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        int n = nums.size();

        long long LargestPerimeter = 0;
        long long sum = nums[0] + nums[1];

        // if it's possible to make polygon with condtions
        // 1- length of longest side must be smaller than sum of all others sides
        for (int i = 2; i < n; i++)
        {
            if (sum > nums[i])
            {
                LargestPerimeter = sum + nums[i];
            }
            sum = sum + nums[i];
        }

        if (LargestPerimeter == 0)
        {
            return -1;
        }
        else
        {
            return LargestPerimeter;
        }
    }
};
