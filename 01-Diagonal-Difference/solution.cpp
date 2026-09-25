
int diagonalDifference(vector<vector<int>> arr) {
    int leftSum = 0;
    int rightSum = 0;

    int n = arr.size();

    for (int i = 0; i < n; i++) {
        leftSum += arr[i][i];
        rightSum += arr[i][n - 1 - i];
    }

    return abs(leftSum - rightSum);
}
