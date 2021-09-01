def merge(intervals):
        temp = 0
        for i in range(len(intervals)):
            for j in range(i, len(intervals)):
                if (intervals[j][0] < intervals[i][0]):
                    temp = intervals[j]
                    intervals[j] = intervals[i]
                    intervals[i] = temp
        return intervals

#main

l = [(1,3),(3,5),(2,7)]
l1 = merge(l)
print l1
