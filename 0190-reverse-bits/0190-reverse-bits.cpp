class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned long ans=0;
        for(int i=0;i<=31;i++)
        {
            ans=(ans<<1)|((n>>i)& 1);
        }
        return ans;


        
    }
};