int maxArea(int* height, int heightSize) {
    int max=0;
    int start=0;
    int end=heightSize-1;
    while(start<end){
        int h=height[start]<height[end]?height[start]:height[end];
        int area=(end-start)*h;
        if(area>max){
            max=area;
        }
        if(height[start]<height[end]){
            start++;
        }else{
            end--;
        }
    }
    
    return max;
}