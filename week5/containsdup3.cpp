class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
            
        if (t < 0) return 0;
        
        if (k + 1 >= nums.size()) {

            set<int> a;
            
            for (int i = 0; i < nums.size(); ++i) {
                
                a.insert(nums[i]);
            }
            
            if (a.size() < nums.size()) return 1;
                        
            int tt;
            int c = 0;
            
            for (auto i : a) {
                
                if (!c) {
                    
                    c++;
                    tt = i;
                } else {
                    
                    if (abs( (long long) i - tt) <= t) return 1;
                    else tt = i;
                    
                }
                
            }
            
            
        } else {
            
            if (t == 0) {
                
                set<int> a;
                
                for (int i = 0; i < nums.size(); ++i) {
                    a.insert(nums[i]);
                }
                
                if (a.size() == nums.size()) return 0;
            }
            
            for (int q = 0, qq = k; qq < nums.size(); ++q, qq++) {

                set <int> a;

                for (int i = q; i <= qq; ++i) {

                    a.insert(nums[i]);
                }

                if (a.size() <= k) return 1;
                
                int tt;
                int c = 0;

                for (auto i : a) {

                    if (!c) {

                        c++;
                        tt = i;
                    } else {

                        if (abs( (long long) i - tt) <= t) return 1;
                        else tt = i;

                    }   
                }
            }   
        }
        
        return 0;
    }
};