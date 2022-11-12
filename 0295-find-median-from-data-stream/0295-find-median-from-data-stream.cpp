class MedianFinder {
public:
    
    priority_queue<int>maxheap; // 1st half (left half)
    priority_queue<int,vector<int>,greater<int>>minheap; // 2nd half (right half)
    
    MedianFinder() {}
    
    void addNum(int num) {
        if(maxheap.empty() || maxheap.top()>num)
        {
            maxheap.push(num);
        }
        else
        {
            minheap.push(num);
        }
        
        // balancing the heaps
        // max heap size should be greater than one size only
        if(minheap.size()>maxheap.size())
        {
            maxheap.push(minheap.top());
            minheap.pop();
        }
        else if(maxheap.size()>minheap.size()+1)
        {
            minheap.push(maxheap.top());
            maxheap.pop();
        }
        
    }
    
    double findMedian() {
        if(maxheap.size()==minheap.size())
        {
            return (maxheap.top() + minheap.top())/2.0;
        }
        else
        {
            return (maxheap.top());
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */