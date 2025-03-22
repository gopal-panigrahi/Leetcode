public class Solution {
    private string Reverse(string num) {
        var temp = num.ToCharArray();
        Array.Reverse(temp);
        return new string(temp);
    }

    private (int, int) Add(char a, char b, int carry) {
        int sum = (int)(a-'0') + (int)(b-'0') + carry;
        carry = sum / 10;
        sum = sum % 10;
        return (sum, carry);
    }

    public string AddStrings(string num1, string num2) {
        int len = Math.Max(num1.Length, num2.Length);
        num1 = Reverse(num1.PadLeft(len, '0'));
        num2 = Reverse(num2.PadLeft(len, '0'));

        int sum = 0, carry = 0;
        var result = new StringBuilder();
        for(int i = 0; i < len; i++) {
            (sum, carry) = Add(num1[i], num2[i], carry);
            result.Append(sum);
        }

        if(carry > 0) {
            result.Append(carry);
        }

        return Reverse(result.ToString());
    }
}