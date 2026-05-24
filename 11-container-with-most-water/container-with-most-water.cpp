class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int width,hght,area;
        int mazz=INT_MIN;
        int i=0,j=n-1;
        while(i<=j){
            width=j-i;
            hght=height[i]<height[j]?height[i]:height[j];
            area=hght*width;
            mazz=max(mazz,area);
            height[i]<height[j]?i++:j--;
        }
    return mazz;
    }
};