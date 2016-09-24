//
//  maximumSubsequenceSum.h
//  Data Structures
//
//  Created by Jack on 9/24/16.
//  Copyright © 2016 mushank. All rights reserved.
//

#ifndef maximumSubsequenceSum_h
#define maximumSubsequenceSum_h

#include <stdio.h>

// 1. 循环遍历
int maxSubSeqSum_1(int A[], int N);
// 2. 分而治之
int maxSubSeqSum_2(int A[], int leftIndex, int rightIndex);
// 3. 在线处理
int maxSubSeqSum_3(int A[], int N);

#endif /* maximumSubsequenceSum_h */
