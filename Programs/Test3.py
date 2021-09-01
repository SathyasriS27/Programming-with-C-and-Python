
class Solution:
    # @param intervals, a list of Intervals
    # @return a list of Interval
    def merge(self, intervals):
        self.temp = ()
        self.mod_int = intervals
        '''for i in range(len(self.mod_int)):
            for j in range(i, len(self.mod_int)):
                if (self.mod_int[j][0] < self.mod_int[i][0]):
                    self.temp = self.mod_int[j]
                    self.mod_int[j] = self.mod_int[i]
                    self.mod_int[i] = self.temp'''
        
        #intervals = self.mod_int
        self.end = 1
        self.start = 0
        for i in range(len(intervals) - 1, 0, -1):
            if (intervals[i][self.start] <= intervals[i-1][self.end]):
                if (intervals[i-1][self.end] < intervals[i][self.end]):
                    list(intervals[i-1][self.end]) = list(intervals[i][self.end])
                    intervals.insert(i-1,tuple(list(intervals[i-1])))
                del intervals[i]
                
        return intervals

#main
l1 = [ (1, 10), (2, 9), (3, 8), (4, 7), (5, 6), (6, 6) ]
l2 =  [ (47, 76), (51, 99), (28, 78), (54, 94), (12, 72), (31, 72), (12, 55), (24, 40), (59, 79), (41, 100), (46, 99), (5, 27), (13, 23), (9, 69), (39, 75), (51, 53), (81, 98), (14, 14), (27, 89), (73, 78), (28, 35), (19, 30), (39, 87), (60, 94), (71, 90), (9, 44), (56, 79), (58, 70), (25, 76), (18, 46), (14, 96), (43, 95), (70, 77), (13, 59), (52, 91), (47, 56), (63, 67), (28, 39), (51, 92), (30, 66), (4, 4), (29, 92), (58, 90), (6, 20), (31, 93), (52, 75), (41, 41), (64, 89), (64, 66), (24, 90), (25, 46), (39, 49), (15, 99), (50, 99), (9, 34), (58, 96), (85, 86), (13, 68), (45, 57), (55, 56), (60, 74), (89, 98), (23, 79), (16, 59), (56, 57), (54, 85), (16, 29), (72, 86), (10, 45), (6, 25), (19, 55), (21, 21), (17, 83), (49, 86), (67, 84), (8, 48), (63, 85), (5, 31), (43, 48), (57, 62), (22, 68), (48, 92), (36, 77), (27, 63), (39, 83), (38, 54), (31, 69), (36, 65), (52, 68) ]

obj = Solution()
print obj.merge(l2)
