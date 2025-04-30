int maxContainers(int n, int w, int maxWeight) {
int s = n * n; int m = maxWeight / w; return (s < m) ? s : m;
}