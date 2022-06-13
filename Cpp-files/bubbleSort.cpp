void BubbleSort(vector<int> &temp, int n){
    int curr = 0;
    bool flag = false;
    while (curr < n && flag == false){
        int step = n - 1;
        flag = true;
        while (step > curr){
            if (temp[step] < temp[step - 1]) {
                flag = false;
                swap(temp[step], temp[step - 1]);
            }
            step = step - 1;
        }
        curr = curr + 1;
    }
}
