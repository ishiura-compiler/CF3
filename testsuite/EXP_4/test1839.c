#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x38 = 15;
static volatile int32_t t0 = -683308708;
static uint8_t x81 = 94U;
volatile int16_t x82 = 1;
static uint8_t x184 = 5U;
int16_t x259 = 0;
static uint32_t x493 = 110943U;
volatile int64_t x496 = INT64_MIN;
static uint32_t t5 = 453U;
uint32_t x856 = 49U;
uint8_t x1044 = 2U;
uint32_t x1250 = 0U;
int32_t x1252 = 5;
volatile int32_t t12 = 60407;
uint32_t x1370 = 14U;
int8_t x1748 = INT8_MIN;
uint64_t t15 = UINT64_MAX;
volatile uint32_t x1798 = 0U;
static int32_t x2095 = INT32_MIN;
int16_t x2137 = 1;
int32_t t18 = 43;
uint8_t x2335 = 4U;
int8_t x2650 = 1;
uint32_t x2653 = 843250306U;
volatile int8_t x2654 = 2;
volatile int8_t x2655 = 30;
uint32_t x2714 = 5U;
int32_t t22 = -98;
int16_t x2788 = INT16_MAX;
int16_t x3104 = 1;
uint8_t x3296 = 4U;
uint8_t x3559 = 26U;
volatile int32_t t27 = 139;
volatile uint64_t x3802 = 30LLU;
static int16_t x3803 = INT16_MIN;
int32_t t29 = -1;
static uint8_t x3950 = 0U;
volatile int32_t t30 = INT32_MAX;
uint32_t x4001 = UINT32_MAX;
uint32_t t33 = UINT32_MAX;
volatile int16_t x4865 = INT16_MAX;
static uint16_t x4944 = 815U;
uint8_t x5073 = 1U;
static uint64_t x5076 = UINT64_MAX;
static uint8_t x5117 = 2U;
int32_t t39 = -94637;
static int32_t t40 = -6015677;
volatile int32_t x5653 = 7677529;
int16_t x5867 = -1;
uint8_t x5868 = 16U;
volatile int32_t t43 = 33;
int64_t x6039 = -48395378658614LL;
volatile uint64_t t45 = 45LLU;
volatile uint32_t x6397 = UINT32_MAX;
static volatile int8_t x6479 = 29;
int8_t x6571 = 0;
int32_t x7015 = INT32_MAX;
uint8_t x7130 = 2U;
volatile int32_t t52 = 3087;
int8_t x7194 = 1;
int8_t x7195 = 40;
int8_t x7369 = INT8_MAX;
volatile int16_t x7371 = 6;
volatile int64_t x7372 = INT64_MIN;
uint16_t x7545 = 356U;
int32_t x7552 = INT32_MAX;
int64_t x7568 = INT64_MIN;
static volatile int32_t t59 = -140257383;
volatile uint64_t t61 = 5478935LLU;
int32_t x8639 = INT32_MIN;


void f0(void) {
	uint8_t x37 = 26U;
	static int32_t x39 = 167;
	uint64_t x40 = 450413896732LLU;

	t0 = (x37<<(x38|(x39&x40)));

	if (t0 != 851968) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x83 = 7;
	static volatile int32_t x84 = -1;
	volatile int32_t t1 = 32770679;

	t1 = (x81<<(x82|(x83&x84)));

	if (t1 != 12032) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x181 = UINT64_MAX;
	static uint8_t x182 = 26U;
	static volatile uint64_t x183 = 378LLU;
	uint64_t t2 = 81610955LLU;

	t2 = (x181<<(x182|(x183&x184)));

	if (t2 != 18446744073642442752LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x257 = 136495663LLU;
	static uint8_t x258 = 26U;
	static uint8_t x260 = 1U;
	volatile uint64_t t3 = 260361232273LLU;

	t3 = (x257<<(x258|(x259&x260)));

	if (t3 != 9160068884856832LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x361 = 2U;
	int64_t x362 = 0LL;
	uint8_t x363 = 55U;
	int32_t x364 = INT32_MIN;
	int32_t t4 = 322;

	t4 = (x361<<(x362|(x363&x364)));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x494 = 1U;
	static int64_t x495 = 89768032654130LL;

	t5 = (x493<<(x494|(x495&x496)));

	if (t5 != 221886U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x853 = INT64_MAX;
	volatile uint8_t x854 = 0U;
	static int16_t x855 = INT16_MIN;
	volatile int64_t t6 = INT64_MAX;

	t6 = (x853<<(x854|(x855&x856)));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x1041 = UINT16_MAX;
	volatile uint8_t x1042 = 0U;
	int16_t x1043 = INT16_MIN;
	int32_t t7 = -120968;

	t7 = (x1041<<(x1042|(x1043&x1044)));

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x1173 = 1;
	uint16_t x1174 = 0U;
	static int8_t x1175 = INT8_MIN;
	uint8_t x1176 = 6U;
	volatile int32_t t8 = 1;

	t8 = (x1173<<(x1174|(x1175&x1176)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x1229 = UINT32_MAX;
	uint8_t x1230 = 1U;
	volatile int64_t x1231 = INT64_MIN;
	volatile uint8_t x1232 = 1U;
	volatile uint32_t t9 = 14242241U;

	t9 = (x1229<<(x1230|(x1231&x1232)));

	if (t9 != 4294967294U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x1249 = 12U;
	uint8_t x1251 = 0U;
	volatile uint32_t t10 = 0U;

	t10 = (x1249<<(x1250|(x1251&x1252)));

	if (t10 != 12U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x1309 = 0U;
	static volatile int16_t x1310 = 7;
	int64_t x1311 = -1LL;
	uint32_t x1312 = 5U;
	uint32_t t11 = 20798U;

	t11 = (x1309<<(x1310|(x1311&x1312)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x1349 = 240;
	volatile uint16_t x1350 = 3U;
	uint32_t x1351 = 0U;
	int32_t x1352 = INT32_MAX;

	t12 = (x1349<<(x1350|(x1351&x1352)));

	if (t12 != 1920) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x1369 = 69U;
	volatile int8_t x1371 = 0;
	int16_t x1372 = 1;
	volatile int32_t t13 = 379893;

	t13 = (x1369<<(x1370|(x1371&x1372)));

	if (t13 != 1130496) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1741 = 3425;
	uint8_t x1742 = 1U;
	volatile int8_t x1743 = INT8_MAX;
	static volatile int32_t x1744 = INT32_MIN;
	volatile int32_t t14 = 207737598;

	t14 = (x1741<<(x1742|(x1743&x1744)));

	if (t14 != 6850) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x1745 = UINT64_MAX;
	uint16_t x1746 = 0U;
	volatile uint8_t x1747 = 61U;

	t15 = (x1745<<(x1746|(x1747&x1748)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x1797 = 767429LL;
	int64_t x1799 = 650LL;
	int8_t x1800 = 61;
	volatile int64_t t16 = -251LL;

	t16 = (x1797<<(x1798|(x1799&x1800)));

	if (t16 != 196461824LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x2093 = 3U;
	uint8_t x2094 = 0U;
	uint32_t x2096 = 474941U;
	int32_t t17 = 219822730;

	t17 = (x2093<<(x2094|(x2095&x2096)));

	if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x2138 = 16U;
	static int32_t x2139 = INT32_MIN;
	int16_t x2140 = 114;

	t18 = (x2137<<(x2138|(x2139&x2140)));

	if (t18 != 65536) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x2333 = UINT32_MAX;
	volatile uint8_t x2334 = 0U;
	int64_t x2336 = 12441LL;
	static volatile uint32_t t19 = UINT32_MAX;

	t19 = (x2333<<(x2334|(x2335&x2336)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x2649 = UINT32_MAX;
	int64_t x2651 = 38926LL;
	int8_t x2652 = 1;
	volatile uint32_t t20 = 128161211U;

	t20 = (x2649<<(x2650|(x2651&x2652)));

	if (t20 != 4294967294U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x2656 = UINT16_MAX;
	static volatile uint32_t t21 = 195483U;

	t21 = (x2653<<(x2654|(x2655&x2656)));

	if (t21 != 2147483648U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x2713 = 0U;
	int8_t x2715 = INT8_MIN;
	uint16_t x2716 = 1U;

	t22 = (x2713<<(x2714|(x2715&x2716)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x2785 = 1331163008958520359LLU;
	int16_t x2786 = 1;
	static int32_t x2787 = INT32_MIN;
	uint64_t t23 = 8530175083760839LLU;

	t23 = (x2785<<(x2786|(x2787&x2788)));

	if (t23 != 2662326017917040718LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x3101 = 0;
	uint8_t x3102 = 0U;
	volatile int8_t x3103 = 0;
	int32_t t24 = 68307474;

	t24 = (x3101<<(x3102|(x3103&x3104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x3293 = 1017147630769580LLU;
	volatile int8_t x3294 = 31;
	static int16_t x3295 = INT16_MIN;
	volatile uint64_t t25 = 1486553511983964LLU;

	t25 = (x3293<<(x3294|(x3295&x3296)));

	if (t25 != 10492167592989425664LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x3557 = UINT16_MAX;
	int16_t x3558 = 0;
	volatile int32_t x3560 = INT32_MIN;
	int32_t t26 = 0;

	t26 = (x3557<<(x3558|(x3559&x3560)));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x3713 = 3;
	volatile uint8_t x3714 = 1U;
	static volatile int8_t x3715 = 1;
	int32_t x3716 = 1836666;

	t27 = (x3713<<(x3714|(x3715&x3716)));

	if (t27 != 6) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x3737 = 1798U;
	int64_t x3738 = 0LL;
	volatile int16_t x3739 = -3633;
	uint8_t x3740 = 1U;
	volatile int32_t t28 = -14888194;

	t28 = (x3737<<(x3738|(x3739&x3740)));

	if (t28 != 3596) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x3801 = 1U;
	volatile uint8_t x3804 = 53U;

	t29 = (x3801<<(x3802|(x3803&x3804)));

	if (t29 != 1073741824) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x3949 = INT32_MAX;
	uint32_t x3951 = 229126U;
	int32_t x3952 = INT32_MIN;

	t30 = (x3949<<(x3950|(x3951&x3952)));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x3973 = 7606057867033845591LLU;
	volatile uint16_t x3974 = 2U;
	uint8_t x3975 = 26U;
	int64_t x3976 = INT64_MIN;
	uint64_t t31 = 1276LLU;

	t31 = (x3973<<(x3974|(x3975&x3976)));

	if (t31 != 11977487394425830748LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x4002 = 0;
	static int32_t x4003 = -163066;
	static volatile int8_t x4004 = INT8_MAX;
	uint32_t t32 = 0U;

	t32 = (x4001<<(x4002|(x4003&x4004)));

	if (t32 != 4294967232U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x4141 = UINT32_MAX;
	int8_t x4142 = 0;
	uint8_t x4143 = UINT8_MAX;
	int64_t x4144 = INT64_MIN;

	t33 = (x4141<<(x4142|(x4143&x4144)));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x4545 = 0U;
	uint16_t x4546 = 29U;
	static int16_t x4547 = INT16_MIN;
	volatile int16_t x4548 = 24;
	volatile int32_t t34 = 93222764;

	t34 = (x4545<<(x4546|(x4547&x4548)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x4857 = 1U;
	uint32_t x4858 = 8U;
	volatile int16_t x4859 = INT16_MIN;
	uint16_t x4860 = 5U;
	volatile uint32_t t35 = 5U;

	t35 = (x4857<<(x4858|(x4859&x4860)));

	if (t35 != 256U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x4866 = 14U;
	volatile int32_t x4867 = INT32_MAX;
	static int32_t x4868 = INT32_MIN;
	volatile int32_t t36 = -2001297;

	t36 = (x4865<<(x4866|(x4867&x4868)));

	if (t36 != 536854528) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x4941 = UINT32_MAX;
	int32_t x4942 = 0;
	static int16_t x4943 = 1;
	volatile uint32_t t37 = 297472458U;

	t37 = (x4941<<(x4942|(x4943&x4944)));

	if (t37 != 4294967294U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x5074 = 1;
	uint8_t x5075 = 2U;
	int32_t t38 = 49;

	t38 = (x5073<<(x5074|(x5075&x5076)));

	if (t38 != 8) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x5118 = 20U;
	static uint64_t x5119 = 21978213960214LLU;
	static uint8_t x5120 = UINT8_MAX;

	t39 = (x5117<<(x5118|(x5119&x5120)));

	if (t39 != 8388608) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x5469 = 34U;
	uint16_t x5470 = 17U;
	static uint8_t x5471 = 6U;
	int64_t x5472 = INT64_MIN;

	t40 = (x5469<<(x5470|(x5471&x5472)));

	if (t40 != 4456448) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x5593 = UINT32_MAX;
	int32_t x5594 = 7;
	volatile uint8_t x5595 = UINT8_MAX;
	uint8_t x5596 = 5U;
	uint32_t t41 = 15U;

	t41 = (x5593<<(x5594|(x5595&x5596)));

	if (t41 != 4294967168U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x5654 = 0U;
	static uint64_t x5655 = 735LLU;
	int16_t x5656 = INT16_MIN;
	volatile int32_t t42 = 16408630;

	t42 = (x5653<<(x5654|(x5655&x5656)));

	if (t42 != 7677529) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x5865 = 0;
	uint16_t x5866 = 0U;

	t43 = (x5865<<(x5866|(x5867&x5868)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x5989 = UINT64_MAX;
	volatile uint8_t x5990 = 23U;
	uint64_t x5991 = 54LLU;
	volatile int16_t x5992 = -72;
	volatile uint64_t t44 = 7142LLU;

	t44 = (x5989<<(x5990|(x5991&x5992)));

	if (t44 != 18410715276690587648LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x6037 = 14348124242657LLU;
	uint32_t x6038 = 17U;
	int16_t x6040 = 0;

	t45 = (x6037<<(x6038|(x6039&x6040)));

	if (t45 != 1880637340733538304LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x6398 = 1;
	uint8_t x6399 = 9U;
	int64_t x6400 = -1LL;
	static uint32_t t46 = 880U;

	t46 = (x6397<<(x6398|(x6399&x6400)));

	if (t46 != 4294966784U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x6477 = 132748943917LLU;
	int8_t x6478 = 1;
	int64_t x6480 = -1LL;
	static volatile uint64_t t47 = 6654997381079445192LLU;

	t47 = (x6477<<(x6478|(x6479&x6480)));

	if (t47 != 15928814366627987456LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x6569 = UINT16_MAX;
	uint64_t x6570 = 3LLU;
	int16_t x6572 = INT16_MIN;
	volatile int32_t t48 = -6;

	t48 = (x6569<<(x6570|(x6571&x6572)));

	if (t48 != 524280) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x6785 = 31;
	volatile int16_t x6786 = 1;
	int16_t x6787 = 16;
	int32_t x6788 = INT32_MAX;
	volatile int32_t t49 = 1;

	t49 = (x6785<<(x6786|(x6787&x6788)));

	if (t49 != 4063232) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x7013 = 198043758098323358LL;
	static uint8_t x7014 = 5U;
	static int32_t x7016 = INT32_MIN;
	volatile int64_t t50 = 470LL;

	t50 = (x7013<<(x7014|(x7015&x7016)));

	if (t50 != 6337400259146347456LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x7109 = 53U;
	static uint64_t x7110 = 14LLU;
	static uint16_t x7111 = 100U;
	static volatile uint32_t x7112 = 15U;
	static uint32_t t51 = 31U;

	t51 = (x7109<<(x7110|(x7111&x7112)));

	if (t51 != 868352U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x7129 = 333;
	volatile int16_t x7131 = -1;
	static int16_t x7132 = 1;

	t52 = (x7129<<(x7130|(x7131&x7132)));

	if (t52 != 2664) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x7193 = UINT64_MAX;
	volatile int32_t x7196 = INT32_MIN;
	volatile uint64_t t53 = 1892278163496074828LLU;

	t53 = (x7193<<(x7194|(x7195&x7196)));

	if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x7370 = 13;
	volatile int32_t t54 = -11101;

	t54 = (x7369<<(x7370|(x7371&x7372)));

	if (t54 != 1040384) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x7417 = 5U;
	uint8_t x7418 = 7U;
	int8_t x7419 = INT8_MIN;
	uint64_t x7420 = 5LLU;
	static volatile int32_t t55 = 5058;

	t55 = (x7417<<(x7418|(x7419&x7420)));

	if (t55 != 640) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x7546 = 0;
	uint32_t x7547 = 588U;
	int32_t x7548 = INT32_MIN;
	int32_t t56 = -441411;

	t56 = (x7545<<(x7546|(x7547&x7548)));

	if (t56 != 356) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x7549 = 1U;
	int8_t x7550 = 2;
	volatile int64_t x7551 = INT64_MIN;
	volatile int32_t t57 = -14;

	t57 = (x7549<<(x7550|(x7551&x7552)));

	if (t57 != 4) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x7565 = 42834U;
	static volatile int8_t x7566 = 3;
	int32_t x7567 = INT32_MAX;
	volatile uint32_t t58 = 1U;

	t58 = (x7565<<(x7566|(x7567&x7568)));

	if (t58 != 342672U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x7721 = 5U;
	uint8_t x7722 = 1U;
	static int64_t x7723 = INT64_MIN;
	static int8_t x7724 = 1;

	t59 = (x7721<<(x7722|(x7723&x7724)));

	if (t59 != 10) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x8117 = 33;
	static int32_t x8118 = 1;
	int64_t x8119 = INT64_MIN;
	uint8_t x8120 = 22U;
	static volatile int32_t t60 = 750760;

	t60 = (x8117<<(x8118|(x8119&x8120)));

	if (t60 != 66) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x8157 = 4373588563392520345LLU;
	uint8_t x8158 = 1U;
	int32_t x8159 = -1;
	static int8_t x8160 = 2;

	t61 = (x8157<<(x8158|(x8159&x8160)));

	if (t61 != 16541964433430611144LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x8501 = 55719500137026LLU;
	uint16_t x8502 = 5U;
	static int32_t x8503 = INT32_MIN;
	uint64_t x8504 = 28736670LLU;
	uint64_t t62 = 15451005LLU;

	t62 = (x8501<<(x8502|(x8503&x8504)));

	if (t62 != 1783024004384832LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x8637 = 36;
	uint8_t x8638 = 3U;
	static uint64_t x8640 = 35027LLU;
	int32_t t63 = 29;

	t63 = (x8637<<(x8638|(x8639&x8640)));

	if (t63 != 288) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x8649 = UINT8_MAX;
	static int16_t x8650 = 3;
	int64_t x8651 = INT64_MIN;
	int64_t x8652 = INT64_MAX;
	volatile int32_t t64 = 1710731;

	t64 = (x8649<<(x8650|(x8651&x8652)));

	if (t64 != 2040) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();


    return 0;
}

