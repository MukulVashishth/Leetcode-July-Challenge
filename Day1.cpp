class Solution {
public:
    int arrangeCoins(int n) {
        int i=1,res=0;
        while(n>=i){
                res++;
                n-=i;
                i++;
        }
        return res;
    }
};