class Solution
{
public:
    int consecutiveAnswersF(string answerKey, int k, char replacer, char replacee)
    {
        int p1 = 0, p2 = 0;
        int maxSize = 0;
        while (p1 < answerKey.length() && p2 < answerKey.length())
        {
            if (answerKey[p2] == replacer)
            {
                maxSize = max(maxSize, p2 - p1 + 1);
                p2++;
            }
            else
            {
                if (k)
                {
                    k--;
                    maxSize = max(maxSize, p2 - p1 + 1);
                    p2++;
                }
                else
                {
                    while (k == 0 && p1 < answerKey.length())
                    {
                        if (answerKey[p1] == replacee)
                        {
                            k++;
                        }
                        p1++;
                    }
                }
            }
        }
        return maxSize;
    }

    int maxConsecutiveAnswers(string answerKey, int k)
    {
        return max(consecutiveAnswersF(answerKey, k, 'T', 'F'), consecutiveAnswersF(answerKey, k, 'F', 'T'));
    }
};