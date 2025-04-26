int findClosest(int x, int y, int z) {
    int a=abs(z-x);
    int b=abs(z-y);
    if (a<b)
    return 1;
    else if(b<a)
    return 2;
    else
    return 0;
}