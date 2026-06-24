1class Solution {
2public:
3    double angleClock(int hour, int minutes) {
4        double hour_angle=hour!=12?hour*30+minutes*0.5:minutes*0.5;
5        double min_angle=minutes*6;
6        cout<<hour_angle<<" "<<min_angle<<endl;
7        double ans=hour_angle-min_angle>=0?hour_angle-min_angle:min_angle-hour_angle;
8
9
10        return min(ans, 360-ans);
11
12    }
13};