//upper_bound 返回第一个 大于 给定值的元素的位置。
int upper_bound(int arr[], int n, int target) {
    int left = 0;
    int right = n;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;
}
