class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            int carry=(a&b)<<1;
            a=a^b;
            b=carry;
        }
        return a;
    }
};
// 101->5=b
// 110 ->6=a
// 011->carry=3=b
// 111->sum=7=a
// 100 carry=b
