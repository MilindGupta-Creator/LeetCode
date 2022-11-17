class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        /*
        Intuition
See basically the question wants us to find the total area covered by both the rectangles, given the bottom left and top right indices of both the rectangle.

Approach
The logic is simple, first individually calculate the area of each rectangle, add them and then from it subtract the commom area added twice.
        
        
        */
        
        
         int areaA = (ax2 - ax1)*(ay2-ay1);
        int areaB = (bx2-bx1)*(by2-by1);
        int areaOverlap = max( min(ax2,bx2)-max(ax1, bx1), 0) *  max( min(ay2,by2)-max(ay1, by1), 0);
        
        return areaA + areaB - areaOverlap;
        
        
    }
};