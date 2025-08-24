#include <iostream>
#include<vector>
#include<bits/stdc++.h>

#include <iostream>
using namespace std;

#define MAX 500000
#define SENTINEL 2000000000

int L[MAX / 2 + 2], R[MAX / 2 + 2];  // 用于存储左右子数组
int cnt = 0; // 计数比较次数

// 合并操作
void merge(int A[], int left, int mid, int right) {
    int n1 = mid - left;  // 左子数组大小
    int n2 = right - mid; // 右子数组大小

    // 将左右子数组复制到 L 和 R 中
    for (int i = 0; i < n1; i++) L[i] = A[left + i];
    for (int i = 0; i < n2; i++) R[i] = A[mid + i];

    // 在 L 和 R 的末尾加入 SENTINEL（哨兵）
    L[n1] = R[n2] = SENTINEL;

    int i = 0, j = 0;
    // 合并两个有序子数组
    for (int k = left; k < right; k++) {
        
        if (L[i] <= R[j]) {
            A[k] = L[i++];
        } else {
        	
        	cnt += n1 - i;//这里是这么理解的如果，左边又一个数大于右边，那么左边剩下的所有数字都大于右边，即算左边的长度，这样就可以算出左边有多长大于右边的**第N个**数字，
            A[k] = R[j++];
            
        }
    }
}

// 归并排序函数
void mergeSort(int A[], int left, int right) {
    if (left + 1 < right) {  // 当子数组有多个元素时继续递归
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);  // 递归排序左半部分
        mergeSort(A, mid, right); // 递归排序右半部分
        merge(A, left, mid, right);  // 合并
    }
}

int main() {
    int A[MAX], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];  // 输入数组
    }

    mergeSort(A, 0, n);  // 排序整个数组

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";  // 输出排序后的数组
    }
    cout << endl;
    cout << cnt << endl;  // 输出比较次数
    return 0;
}