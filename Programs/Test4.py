class Solution:
    # @param arrive : list of integers
    # @param depart : list of integers
    # @param K : integer
    # @return a boolean
    def hotel(self, arrive, depart, K):
        self.count = 0
        self.temp = 0
        for i in range(len(arrive)):
            for j in range(i, len(depart)):
                if arrive[j] < arrive[i]:
                    self.temp = arrive[j]
                    arrive[j] = arrive[i]
                    arrive[i] = self.temp
                if depart[j] < depart[i]:
                    self.temp = depart[j]
                    depart[j] = depart[i]
                    depart[i] = self.temp
        for i in range(len(arrive)):
            self.x = i 
            while (arrive[self.x + 1] < depart[self.x]):
                self.count = self.count + 1
                self.x = self.x + 1
        print ("Count: ",self.count)
        print ("K: ", K)
        print ("Arrive: ", arrive)
        print ("Depart: ", depart)
        if self.count < K:
            return True
        else:
            return False
        beg = 0
        end = len(arrive)
        mid = (beg + mid) / 2
        
        for i in range(len(arrive)):
            

obj = Solution()
l1 = [1,2,3,4]
l2 = [10, 2, 6, 14]
k = 1
print obj.hotel(l1,l2,k)
