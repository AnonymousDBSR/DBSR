

// 请选择分块方案，只保留一个
#define BMC_AUTO
// #define BMC_FIX
// #define BMC_DYNAMIC

// 如果选择了自主分块，请设置分块数量，否则可忽略
 #define BMC_CX 2 //默认
 #define BMC_CY 2 //默认
 #define BMC_CZ 2 //默认

 #define BMC_MX 4
 #define BMC_MY 4
 #define BMC_MZ 4

// 请选择块边长/矢量长度
#define VEC_LEN 8


// 如果 VEC_LEN = 8，请选择相应的 SIMD，否则全部关闭
// #define _AVX512
// #define _NEON
