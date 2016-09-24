//
//  main.c
//  Data Structures
//
//  Created by Jack on 9/25/16.
//  Copyright © 2016 mushank. All rights reserved.
//

#include <stdio.h>
#include "Maximum Subsequence Sum/maximumSubsequenceSum.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    /*
     *Maximum Subsequence Sum
     */
    int A[16] = {1,-2,3,-4,5,-6,7,1,12,13,-23,2,3,4,5,-21};
    printf("%d\n",maxSubSeqSum_1(A, 16));
    printf("%d\n",maxSubSeqSum_2(A, 0, 15));
    printf("%d\n",maxSubSeqSum_3(A, 16));
    /* end */
    
    return 0;
}
