class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int width,hght,area;
        int maxx=INT_MIN;
        while(i<=j){
            width=j-i;
            hght=height[i]<height[j]?height[i]:height[j];
            area=width*hght;
            maxx=max(maxx,area);
            height[i]<height[j]?i++:j--;
        }
        return maxx;
    }
};