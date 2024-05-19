# https://leetcode.com/problems/shuffle-string


class Solution:

    def restoreString(self, s: str, indices: List[int]) -> str:
        pairing = []
        for i in range(len(indices)):
            pairing.append([indices[i], s[i]])

        # print("Pairing",pairing)

        #Sorting
        sortedArray = sorted(pairing)  # key = lambda x : x[1], reverse = True
        # print("sorted",sortedArray)

        #Extract
        resultString = ""
        for i in sortedArray:
            resultString += i[1]
        return resultString
