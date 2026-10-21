class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

           unordered_map<int,int> mp;
            vector<vector<int>> buckets(nums.size()+1);

           for (int i=0;i<nums.size();i++)
           {
            mp[nums[i]]++;
           }

            for(const auto& pair:mp)
            {
                int num=pair.first;
                int freq=pair.second;
                buckets[freq].push_back(num);

            }
           
           vector<int> result;
           result.reserve(k);
           for(int freq=(int)nums.size();freq>0;freq--)
           {
                for (int num:buckets[freq])
                {
                    result.push_back(num);
                    if((int)result.size()==k)
                    {
                        return result;
                    }
                }
           }
    }
};
