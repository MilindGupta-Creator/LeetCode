class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        
        // https://www.youtube.com/watch?v=9zRXNLbl0FI
        
        
        /*
            we can see that we need to process the answer on the basis 
            of processing time :-
            
            Input: tasks = [[1,2],[2,4],[3,2],[4,1]]
            Output: [0,2,3,1]
            
            so whosever processing time is less it gets processes first , 
            this gives the hint to use priority queue and moreover
            if processing time is same then we need to check the value whose
            index comes first,
            so we will store pair in priority queue as in pair it will first check
            first value and then will check the 2nd value.
        
        */
        
        int n = tasks.size();
        
        vector<array<int,3>>sortedTask; // creates an vector having every element an array of size 3
        
        // Store task enqueue time, processing time, index.
        
       for (int i = 0; i < tasks.size(); ++i) {
            sortedTask.push_back({tasks[i][0], tasks[i][1], i});
        }
        
        // sort the vector on the basis of start time
        
        sort(sortedTask.begin(),sortedTask.end());
        
        vector<int>result;
        
        // Sort based on min task processing time or min task index.
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        
        long long curr_time = 0;
        int idx=0;
        
        while(idx<n || !pq.empty())
        {
            // When the heap is empty, try updating currTime to next
            // task's enqueue time.
            if(pq.empty() and curr_time<sortedTask[idx][0]){
                curr_time = sortedTask[idx][0];
            }
            
            // Push all the tasks whose enqueueTime <= currtTime into the heap.
            
            while(idx<n && sortedTask[idx][0]<=curr_time)
            {
                pq.push({sortedTask[idx][1],sortedTask[idx][2]});
                idx++;
            }
            
            pair<int,int>curr_task = pq.top();
            pq.pop();
            
            
            curr_time += curr_task.first;
            
            result.push_back(curr_task.second);
            
        }
        
        return result;
        
        
        
    }
};