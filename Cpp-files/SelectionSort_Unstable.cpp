#include <bits/stdc++.h>
using namespace std;
 
void SelectionSort(vector<int> &temp, int n){
    int current = 0;
    int ridx = 0;
    while(current < n - 1){
        int walk = current + 1;
        int min_idx = current;
        while(walk < n){    
            if(temp[current] > temp[walk]){
                current = walk;
            }

            walk++;
        }
        
        swap(temp[min_idx], temp[current]);
        current = min_idx;
        current++;
    }
}
