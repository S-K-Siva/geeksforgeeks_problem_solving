#User function Template for python3

class Solution:
    
    #Function to find the maximum number of meetings that can
    #be performed in a meeting room.
    def maximumMeetings(self,n,start,end):
        lst = []
        
        for i in range(n):
            lst.append([start[i],end[i]])
            
        # now we going to sort the array by it's ending time
        
        
        #takes O(n^2) TC
        # for i in range(n):
        #     for j in range(n):
        #         if i == j:
        #             continue
        #         # if ending time of the current meeting is lesser than the start time of the upcoming meeting..
        #         if lst[i][1] < lst[j][1]:
        #             lst[i],lst[j] = lst[j],lst[i]
        
        
        lst = [[x[1],x[0]] for x in lst]
        lst = sorted(lst) # O(n log n)
        
        lst = [[x[1],x[0]] for x in lst]
        
        
        ending_time = lst[0][1]
        meetings_can_be_done = 1
        # for loop takes O(n) Tc
        for i in range(1,n):
            
            if lst[i][0] > ending_time:
                meetings_can_be_done += 1
                ending_time = lst[i][1]
        
        # Over all TC is O(n log n)
        return meetings_can_be_done
