//=======================================================================================
//   Copyright (C) 2019 Junki Chu. All rights reserved.
//   
//   文件名称: general.h
//   创 建 者: Junki Chu <jk.chu@foxmail.com>
//   创建日期: 2019年10月18日
//   描    述: 公共的模板工具宏
//=======================================================================================

// 拼接模板名和数据类型名
#define CONCAT_2_EXPAND(A, B) A ## B
#define CONCAT_2(A, B) CONCAT_2_EXPAND(A, B)

// 拼接模板名、函数名和数据类型名
#define CONCAT_3_EXPAND(A, B, C) A ## B ## C
#define CONCAT_3(A, B, C) CONCAT_3_EXPAND(A, B, C)

