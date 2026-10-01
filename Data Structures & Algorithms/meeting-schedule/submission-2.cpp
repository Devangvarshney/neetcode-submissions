/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),[](Interval a,Interval b){
          return a.start<b.start;
        });
        for(int i=0;i<intervals.size();i++){
            cout<<intervals[i].start<<" "<<intervals[i].end;
            cout<<endl;
        }
        int prev_start=intervals[0].start;
        int prev_end=intervals[0].end;
        for(int i=1;i<intervals.size();i++){
           int curr_start=intervals[i].start;
           if(prev_end>curr_start){
            return false;
            break;
           }
           prev_end=intervals[i].end;
        }
        return true;
    }
};
