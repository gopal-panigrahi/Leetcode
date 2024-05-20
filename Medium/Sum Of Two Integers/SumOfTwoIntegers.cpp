class Solution {
public:
    int getSum(int a, int b) {
        int sum = 0, carry = 0, result;
        for(int i = 0; i < 32; i++) {
            sum = ((a>>i)&1) ^ ((b>>i)&1) ^ carry;
            carry = (((a>>i)&1) & ((b>>i)&1)) | (carry&(((a>>i)&1) ^ ((b>>i)&1)));
            result = result | sum<<i;
        }
        return result;
    }
};