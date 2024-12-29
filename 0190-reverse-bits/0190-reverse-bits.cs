public class Solution
{
    public uint reverseBits(uint n)
    {
        uint result = 0;
        uint mask = 1u << 31;
        for (int i = 0; i < 32; i++)
        {
            result = (result >> 1) | (n & mask);
            n <<= 1;
        }
        return result;
    }
}