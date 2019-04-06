#include "RemoveDuplicate.h"

int RemoveDuplicate::RemoveOld(std::vector<int> &nums)
{
    int length = nums.size();
    for(int i = 0; i < length; ++i)
    {
        int delta = 0;
        for(int j = i + 1; j < length; ++j)
        {
            if(nums[i] == nums[j])
            {
                delta++;
            }
            else
            {
                break;
            }
        }

        if(delta > 0)
        {
            length -= delta;
            for(int j = i + delta + 1; j < nums.size(); ++j)
            {
                nums[j - delta] = nums[j];
            }
        }
    }
    return length;
}

int RemoveDuplicate::Remove(std::vector<int> &nums)
{
    if(nums.size() == 0) return 0;
    int i = 0;
    for (int j = 1; j < nums.size(); ++j)
    {
        if(nums[j] != nums[i])
        {
            nums[i + 1] = nums[j];
            i++;
        }
    }

    return i + 1;
}
