//
//  maximumSubsequenceSum.c
//  Data Structures
//
//  Created by Jack on 9/24/16.
//  Copyright © 2016 mushank. All rights reserved.
//

#include "maximumSubsequenceSum.h"

// 1. 循环遍历
int maxSubSeqSum_1(int A[], int N){
    int thisSum = 0;
    int maxSum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            thisSum += A[j];
            if (thisSum > maxSum) {
                maxSum = thisSum;
            }
        }
        thisSum = 0;
    }
    
    return maxSum;
}

// 2. 分而治之
int maxSubSeqSum_2(int A[], int leftIndex, int rightIndex){
    if (leftIndex == rightIndex) {
        return A[0];
    }
    int center = (leftIndex + rightIndex) / 2;
    int maxLeftSum = maxSubSeqSum_2(A, leftIndex, center);
    int maxRightSum = maxSubSeqSum_2(A, center + 1, rightIndex);
    
    
    int leftBorderSum = 0;
    int leftBorderMaxSum = 0;
    for (int i = center; i >= leftIndex; i--) {
        leftBorderSum += A[i];
        if (leftBorderSum > leftBorderMaxSum) {
            leftBorderMaxSum = leftBorderSum;
        }
    }
    int rightBorderSum = 0;
    int rightBorderMaxSum = 0;
    for (int i = center + 1; i <= rightIndex; i ++) {
        rightBorderSum += A[i];
        if (rightBorderSum > rightBorderMaxSum) {
            rightBorderMaxSum = rightBorderSum;
        }
    }
    int maxBorderSum = leftBorderMaxSum + rightBorderMaxSum;
    
    int maxSum = maxLeftSum > maxRightSum ? maxLeftSum : maxRightSum;
    maxSum = maxSum > maxBorderSum ? maxSum : maxBorderSum;
    
    return maxSum;
}

// 3. 在线处理
int maxSubSeqSum_3(int A[], int N){
    int thisSum = 0;
    int maxSum = 0;
    for (int i = 0; i < N; i++) {
        thisSum += A[i];
        if (thisSum > maxSum) {
            maxSum = thisSum;
        }else if(thisSum < 0){
            thisSum = 0;
        }
    }

    return maxSum;
}
