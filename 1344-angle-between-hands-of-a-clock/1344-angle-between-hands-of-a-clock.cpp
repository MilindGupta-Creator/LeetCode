class Solution {
public:
    double angleClock(int hour, int minutes) {
        
        double hourdeg = (hour%12)*30 + minutes*0.5;
        
        double mindeg = minutes*6;
        
        double angle = abs(hourdeg-mindeg);
        
        if(angle>180)
        {
            angle = 360-angle;
        }
        
        return angle;
        
        
    }
};