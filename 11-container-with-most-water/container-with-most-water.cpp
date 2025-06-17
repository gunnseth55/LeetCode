class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int max=INT_MIN;
        while(i<j){
            int width=j-i;
            int h=height[i]<height[j]?height[i]:height[j];
            int area=h*width;
            if(area>max){
                max=area;
            }
            height[i]<height[j]?i++:j--;
        }
        return max;
    }
};