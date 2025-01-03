public class Solution
{
    public bool StrongPasswordCheckerII(string password)
    {
        bool has8characters = false, hasOneLowercase = false, hasOneUppercase = false, hasOneDigit = false, hasOneSpecialCharacter = false, hasNoDoubleAdjacent = true;

        has8characters = password.Length >= 8;

        char prev = (char)((int)password[0] - 1);

        foreach (var c in password)
        {
            if ('a' <= c && c <= 'z')
            {
                hasOneLowercase |= true;
            }

            if ('A' <= c && c <= 'Z')
            {
                hasOneUppercase |= true;
            }

            if ('0' <= c && c <= '9')
            {
                hasOneDigit |= true;
            }

            if ("!@#$%^&*()-+".Contains(c))
            {
                hasOneSpecialCharacter |= true;
            }

            hasNoDoubleAdjacent &= prev != c;
            prev = c;
        }
        return has8characters && hasNoDoubleAdjacent && hasOneDigit && hasOneLowercase && hasOneSpecialCharacter && hasOneUppercase;
    }
}