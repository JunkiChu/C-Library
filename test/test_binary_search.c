//=======================================================================================
//   Copyright (C) 2019 Junki Chu. All rights reserved.
//   
//   文件名称: test_binary_search.c
//   创 建 者: Junki Chu <jk.chu@foxmail.com>
//   创建日期: 2019年10月23日
//   描    述: 测试用例(二分查找法)
//=======================================================================================

#include <stdio.h>
#include <stdlib.h>
#include "../algorithm.h"

typedef struct
{
    int a;
    int b;
}Case;

#define _type_ Case
#define _Type_ Case
#include "../template/algorithm/binary_search.h"
#undef _type_
#undef _Type_

// 优先级比较
int Compare(const Case lhs, const Case rhs)
{
    if(lhs.a == rhs.a && lhs.b == rhs.b)
    {
        return 0;
    }
    else if(lhs.b != rhs.b)
    {
        return lhs.b - rhs.b;
    }
    else
    {
        return lhs.a - rhs.a;
    }
}

void SpecialTest()
{
    Case arr[10] = {
        { 1, 1 }, { 2, 2 },
        { 1, 3 }, { 2, 4 },
        { 1, 5 }, { 2, 6 },
        { 1, 7 }, { 2, 8 },
        { 1, 9 }, { 2, 10 }
    };

    Case target = { 1, 9 };
    printf("target = { %d, %d }\n", target.a, target.b);
    printf("arr_index = %d\n", CLBinarySearchCase(arr, 10, target, Compare, 0, 9));
    
    target.a = 0;
    target.b = 9;
    printf("target = { %d, %d }\n", target.a, target.b);
    printf("arr_index = %d\n", CLBinarySearchCase(arr, 10, target, Compare, 0, 9));
    printf("\n");
}

void GeneralTest()
{
    int arr1[9]  = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int arr2[9]  = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int arr3[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int arr4[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

    int target = -1;
    printf("target = %d, arr1_index = %d\n", target, CLBinarySearchInt(arr1, 9 , target, CLCompareGreaterInt, 0, 8));
    printf("target = %d, arr2_index = %d\n", target, CLBinarySearchInt(arr2, 9 , target, CLCompareLessInt   , 0, 8));
    printf("target = %d, arr3_index = %d\n", target, CLBinarySearchInt(arr3, 10, target, CLCompareGreaterInt, 0, 9));
    printf("target = %d, arr4_index = %d\n", target, CLBinarySearchInt(arr4, 10, target, CLCompareLessInt   , 0, 9));
    printf("\n");

    target = 0;
    printf("target = %d, arr1_index = %d\n", target, CLBinarySearchInt(arr1, 9 , target, CLCompareGreaterInt, 0, 8));
    printf("target = %d, arr2_index = %d\n", target, CLBinarySearchInt(arr2, 9 , target, CLCompareLessInt   , 0, 8));
    printf("target = %d, arr3_index = %d\n", target, CLBinarySearchInt(arr3, 10, target, CLCompareGreaterInt, 0, 9));
    printf("target = %d, arr4_index = %d\n", target, CLBinarySearchInt(arr4, 10, target, CLCompareLessInt   , 0, 9));
    printf("\n");

    target = 1;
    printf("target = %d, arr1_index = %d\n", target, CLBinarySearchInt(arr1, 9 , target, CLCompareGreaterInt, 0, 8));
    printf("target = %d, arr2_index = %d\n", target, CLBinarySearchInt(arr2, 9 , target, CLCompareLessInt   , 0, 8));
    printf("target = %d, arr3_index = %d\n", target, CLBinarySearchInt(arr3, 10, target, CLCompareGreaterInt, 0, 9));
    printf("target = %d, arr4_index = %d\n", target, CLBinarySearchInt(arr4, 10, target, CLCompareLessInt   , 0, 9));
    printf("\n");

    target = 2;
    printf("target = %d, arr1_index = %d\n", target, CLBinarySearchInt(arr1, 9 , target, CLCompareGreaterInt, 0, 8));
    printf("target = %d, arr2_index = %d\n", target, CLBinarySearchInt(arr2, 9 , target, CLCompareLessInt   , 0, 8));
    printf("target = %d, arr3_index = %d\n", target, CLBinarySearchInt(arr3, 10, target, CLCompareGreaterInt, 0, 9));
    printf("target = %d, arr4_index = %d\n", target, CLBinarySearchInt(arr4, 10, target, CLCompareLessInt   , 0, 9));
    printf("\n");

    target = 3;
    printf("target = %d, arr1_index = %d\n", target, CLBinarySearchInt(arr1, 9 , target, CLCompareGreaterInt, 0, 8));
    printf("target = %d, arr2_index = %d\n", target, CLBinarySearchInt(arr2, 9 , target, CLCompareLessInt   , 0, 8));
    printf("target = %d, arr3_index = %d\n", target, CLBinarySearchInt(arr3, 10, target, CLCompareGreaterInt, 0, 9));
    printf("target = %d, arr4_index = %d\n", target, CLBinarySearchInt(arr4, 10, target, CLCompareLessInt   , 0, 9));
    printf("\n");

    target = 4;
    printf("target = %d, arr1_index = %d\n", target, CLBinarySearchInt(arr1, 9 , target, CLCompareGreaterInt, 0, 8));
    printf("target = %d, arr2_index = %d\n", target, CLBinarySearchInt(arr2, 9 , target, CLCompareLessInt   , 0, 8));
    printf("target = %d, arr3_index = %d\n", target, CLBinarySearchInt(arr3, 10, target, CLCompareGreaterInt, 0, 9));
    printf("target = %d, arr4_index = %d\n", target, CLBinarySearchInt(arr4, 10, target, CLCompareLessInt   , 0, 9));
    printf("\n");

    target = 5;
    printf("target = %d, arr1_index = %d\n", target, CLBinarySearchInt(arr1, 9 , target, CLCompareGreaterInt, 0, 8));
    printf("target = %d, arr2_index = %d\n", target, CLBinarySearchInt(arr2, 9 , target, CLCompareLessInt   , 0, 8));
    printf("target = %d, arr3_index = %d\n", target, CLBinarySearchInt(arr3, 10, target, CLCompareGreaterInt, 0, 9));
    printf("target = %d, arr4_index = %d\n", target, CLBinarySearchInt(arr4, 10, target, CLCompareLessInt   , 0, 9));
    printf("\n");

    target = 6;
    printf("target = %d, arr1_index = %d\n", target, CLBinarySearchInt(arr1, 9 , target, CLCompareGreaterInt, 0, 8));
    printf("target = %d, arr2_index = %d\n", target, CLBinarySearchInt(arr2, 9 , target, CLCompareLessInt   , 0, 8));
    printf("target = %d, arr3_index = %d\n", target, CLBinarySearchInt(arr3, 10, target, CLCompareGreaterInt, 0, 9));
    printf("target = %d, arr4_index = %d\n", target, CLBinarySearchInt(arr4, 10, target, CLCompareLessInt   , 0, 9));
    printf("\n");

    target = 7;
    printf("target = %d, arr1_index = %d\n", target, CLBinarySearchInt(arr1, 9 , target, CLCompareGreaterInt, 0, 8));
    printf("target = %d, arr2_index = %d\n", target, CLBinarySearchInt(arr2, 9 , target, CLCompareLessInt   , 0, 8));
    printf("target = %d, arr3_index = %d\n", target, CLBinarySearchInt(arr3, 10, target, CLCompareGreaterInt, 0, 9));
    printf("target = %d, arr4_index = %d\n", target, CLBinarySearchInt(arr4, 10, target, CLCompareLessInt   , 0, 9));
    printf("\n");

    target = 8;
    printf("target = %d, arr1_index = %d\n", target, CLBinarySearchInt(arr1, 9 , target, CLCompareGreaterInt, 0, 8));
    printf("target = %d, arr2_index = %d\n", target, CLBinarySearchInt(arr2, 9 , target, CLCompareLessInt   , 0, 8));
    printf("target = %d, arr3_index = %d\n", target, CLBinarySearchInt(arr3, 10, target, CLCompareGreaterInt, 0, 9));
    printf("target = %d, arr4_index = %d\n", target, CLBinarySearchInt(arr4, 10, target, CLCompareLessInt   , 0, 9));
    printf("\n");

    target = 9;
    printf("target = %d, arr1_index = %d\n", target, CLBinarySearchInt(arr1, 9 , target, CLCompareGreaterInt, 0, 8));
    printf("target = %d, arr2_index = %d\n", target, CLBinarySearchInt(arr2, 9 , target, CLCompareLessInt   , 0, 8));
    printf("target = %d, arr3_index = %d\n", target, CLBinarySearchInt(arr3, 10, target, CLCompareGreaterInt, 0, 9));
    printf("target = %d, arr4_index = %d\n", target, CLBinarySearchInt(arr4, 10, target, CLCompareLessInt   , 0, 9));
    printf("\n");

    target = 10;
    printf("target = %d, arr1_index = %d\n", target, CLBinarySearchInt(arr1, 9 , target, CLCompareGreaterInt, 0, 8));
    printf("target = %d, arr2_index = %d\n", target, CLBinarySearchInt(arr2, 9 , target, CLCompareLessInt   , 0, 8));
    printf("target = %d, arr3_index = %d\n", target, CLBinarySearchInt(arr3, 10, target, CLCompareGreaterInt, 0, 9));
    printf("target = %d, arr4_index = %d\n", target, CLBinarySearchInt(arr4, 10, target, CLCompareLessInt   , 0, 9));
    printf("\n");
}

int main()
{
    SpecialTest();
    GeneralTest();

    return 0;
}

