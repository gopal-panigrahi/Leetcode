# https://leetcode.com/problems/maximum-points-inside-the-square


class Solution:

    def maxPointsInsideSquare(self, points: List[List[int]], s: str) -> int:
        relation_map = {}

        for i, point in enumerate(points):
            min_sq = max(abs(point[0]), abs(point[1]))
            tag = s[i]
            if min_sq in relation_map:
                relation_map[min_sq].append(tag)
            else:
                relation_map[min_sq] = [tag]

        possible_sq = sorted(relation_map.keys())

        tag_seen = set()
        for sq in possible_sq:
            set_rmap = set(relation_map[sq])
            if len(relation_map[sq]) == len(set_rmap):
                if len((tag_seen & set_rmap)) == 0:
                    tag_seen |= set_rmap
                else:
                    break
            else:
                break
        return len(tag_seen)
