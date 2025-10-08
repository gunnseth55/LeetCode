class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>altitude;
        int n=gain.size();
        altitude.push_back(0);
        for(int i=0;i<n;i++){
            int x=altitude.back();
            altitude.push_back(x+gain[i]);
        }
        sort(altitude.begin(),altitude.end());
        return altitude[n];
    }
};