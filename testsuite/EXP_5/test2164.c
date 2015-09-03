#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x18 = INT32_MIN;
int32_t t1 = 233998;
uint32_t x29 = 7U;
uint64_t x33 = 359345972490LLU;
int8_t x59 = INT8_MIN;
int32_t x93 = 27;
int32_t x97 = INT32_MAX;
static volatile int32_t t8 = INT32_MAX;
uint16_t x125 = 75U;
uint8_t x126 = 20U;
uint64_t x153 = UINT64_MAX;
int32_t t11 = -6591;
int8_t x196 = 1;
static uint32_t t13 = 444U;
uint16_t x225 = UINT16_MAX;
uint32_t x311 = 64320193U;
uint8_t x324 = 25U;
volatile int32_t t17 = 110779265;
volatile int64_t x325 = 103LL;
int32_t t19 = -459;
uint32_t x389 = 1517U;
uint8_t x392 = 41U;
int16_t x405 = 1;
int8_t x408 = INT8_MIN;
volatile int64_t x429 = 951LL;
int32_t x430 = INT32_MIN;
int8_t x434 = 5;
uint32_t x496 = 2U;
volatile uint8_t x537 = UINT8_MAX;
int32_t x562 = 159;
uint64_t x566 = 434644945837LLU;
volatile int8_t x567 = INT8_MIN;
volatile int8_t x568 = 2;
int64_t x640 = 1LL;
int8_t x669 = 21;
volatile uint64_t x702 = UINT64_MAX;
uint64_t x704 = 0LLU;
static int64_t x777 = INT64_MAX;
static int8_t x778 = INT8_MAX;
volatile int64_t t37 = INT64_MAX;
int32_t x818 = INT32_MIN;
static uint8_t x819 = 0U;
volatile int64_t t38 = 177536175747166LL;
volatile uint64_t t39 = 18118370860353739LLU;
volatile int8_t x852 = 0;
int32_t t40 = -25;
uint8_t x873 = 2U;
volatile int32_t x874 = -23;
static int64_t x887 = -1LL;
int64_t x898 = -1LL;
uint32_t x903 = UINT32_MAX;
int16_t x904 = 7390;
volatile uint64_t t44 = 50639159091795017LLU;
static uint8_t x964 = 21U;
volatile int32_t t48 = -191254143;
int8_t x1074 = INT8_MIN;
volatile int64_t x1076 = -1LL;
volatile uint32_t t50 = UINT32_MAX;
uint32_t x1157 = UINT32_MAX;
uint32_t x1164 = 16U;
uint32_t x1178 = UINT32_MAX;
int16_t x1193 = 28;
uint16_t x1194 = 265U;
int32_t x1216 = INT32_MIN;
uint8_t x1225 = UINT8_MAX;
uint8_t x1321 = 25U;
int64_t x1323 = 220980763LL;
volatile int32_t t62 = -7857717;
volatile int64_t x1328 = INT64_MIN;
uint16_t x1425 = 5U;
int16_t x1434 = 120;
static volatile int64_t x1490 = 13091298873325LL;
uint64_t x1529 = 820817LLU;
int8_t x1530 = -1;
volatile uint64_t t70 = 542LLU;
int16_t x1550 = -941;
int8_t x1552 = 19;
volatile int16_t x1666 = INT16_MAX;
int32_t x1706 = -1;
uint16_t x1753 = 0U;
static uint16_t x1756 = 75U;
static int8_t x1793 = INT8_MAX;
volatile int16_t x1805 = 4;
int8_t x1808 = INT8_MIN;
int32_t t79 = 42214196;
int16_t x1818 = -1;
uint64_t x1881 = 8426980366919LLU;
static int64_t x1882 = INT64_MIN;
static int16_t x1894 = 27;
static int32_t x1905 = 0;
int16_t x1906 = 8;
static volatile int16_t x1924 = INT16_MIN;
uint32_t x1942 = 60017U;
volatile uint32_t x1961 = 967293496U;
static int16_t x1963 = INT16_MIN;
uint16_t x1969 = UINT16_MAX;
volatile int32_t t91 = 901733862;
uint64_t x2010 = UINT64_MAX;
int16_t x2012 = 1038;
static volatile uint64_t t92 = 10857914986204LLU;
int32_t x2058 = INT32_MIN;
uint8_t x2105 = UINT8_MAX;
int16_t x2106 = -1;
uint8_t x2117 = 0U;
static int64_t x2144 = INT64_MIN;
uint64_t x2185 = UINT64_MAX;


void f0(void) {
	int8_t x5 = INT8_MAX;
	int64_t x6 = INT64_MAX;
	static volatile int16_t x7 = -1;
	static uint32_t x8 = 0U;
	int32_t t0 = -507276987;

	t0 = (x5<<((x6^x7)&x8));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x17 = UINT8_MAX;
	static volatile int64_t x19 = INT64_MIN;
	int16_t x20 = 4;

	t1 = (x17<<((x18^x19)&x20));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x25 = UINT64_MAX;
	static volatile uint8_t x26 = UINT8_MAX;
	static volatile int16_t x27 = INT16_MAX;
	static volatile uint8_t x28 = 4U;
	uint64_t t2 = UINT64_MAX;

	t2 = (x25<<((x26^x27)&x28));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x30 = UINT32_MAX;
	uint16_t x31 = UINT16_MAX;
	int8_t x32 = 57;
	uint32_t t3 = 12613U;

	t3 = (x29<<((x30^x31)&x32));

	if (t3 != 7U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x34 = -1;
	int32_t x35 = 2;
	uint16_t x36 = 0U;
	uint64_t t4 = 95283499497LLU;

	t4 = (x33<<((x34^x35)&x36));

	if (t4 != 359345972490LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x57 = 8;
	int64_t x58 = INT64_MIN;
	static uint64_t x60 = 32LLU;
	volatile int32_t t5 = -1;

	t5 = (x57<<((x58^x59)&x60));

	if (t5 != 8) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x73 = 10U;
	uint64_t x74 = 69218930201825376LLU;
	uint32_t x75 = 411449953U;
	volatile uint16_t x76 = 46U;
	int32_t t6 = -704741;

	t6 = (x73<<((x74^x75)&x76));

	if (t6 != 10) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x94 = -1;
	int64_t x95 = -1LL;
	int8_t x96 = INT8_MIN;
	int32_t t7 = -45473;

	t7 = (x93<<((x94^x95)&x96));

	if (t7 != 27) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x98 = -1;
	uint32_t x99 = 80014003U;
	int16_t x100 = 0;

	t8 = (x97<<((x98^x99)&x100));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x127 = UINT8_MAX;
	volatile int8_t x128 = 0;
	static int32_t t9 = 2;

	t9 = (x125<<((x126^x127)&x128));

	if (t9 != 75) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x154 = INT32_MAX;
	int64_t x155 = -15779947813164015LL;
	volatile uint8_t x156 = 47U;
	uint64_t t10 = 4426691661753572770LLU;

	t10 = (x153<<((x154^x155)&x156));

	if (t10 != 18446673704965373952LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x177 = 31U;
	uint16_t x178 = UINT16_MAX;
	int8_t x179 = INT8_MAX;
	int64_t x180 = INT64_MIN;

	t11 = (x177<<((x178^x179)&x180));

	if (t11 != 31) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x193 = 8U;
	int64_t x194 = -1LL;
	static int16_t x195 = INT16_MAX;
	int32_t t12 = 15262490;

	t12 = (x193<<((x194^x195)&x196));

	if (t12 != 8) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x221 = 35U;
	int32_t x222 = INT32_MIN;
	volatile int64_t x223 = -1LL;
	int8_t x224 = 3;

	t13 = (x221<<((x222^x223)&x224));

	if (t13 != 280U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x226 = INT16_MAX;
	uint8_t x227 = UINT8_MAX;
	volatile int8_t x228 = INT8_MAX;
	int32_t t14 = 120937801;

	t14 = (x225<<((x226^x227)&x228));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x249 = 291578413672LLU;
	int32_t x250 = -1;
	volatile uint32_t x251 = UINT32_MAX;
	uint64_t x252 = 2028060426382737LLU;
	uint64_t t15 = 254223LLU;

	t15 = (x249<<((x250^x251)&x252));

	if (t15 != 291578413672LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x309 = 0U;
	static uint16_t x310 = UINT16_MAX;
	int64_t x312 = INT64_MIN;
	volatile int32_t t16 = -2710386;

	t16 = (x309<<((x310^x311)&x312));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x321 = 51U;
	volatile uint8_t x322 = 40U;
	int64_t x323 = INT64_MAX;

	t17 = (x321<<((x322^x323)&x324));

	if (t17 != 6684672) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x326 = INT8_MIN;
	int8_t x327 = INT8_MIN;
	static int32_t x328 = INT32_MIN;
	volatile int64_t t18 = -9LL;

	t18 = (x325<<((x326^x327)&x328));

	if (t18 != 103LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x333 = UINT16_MAX;
	int16_t x334 = -1015;
	uint8_t x335 = UINT8_MAX;
	volatile uint8_t x336 = 1U;

	t19 = (x333<<((x334^x335)&x336));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x381 = 7;
	int64_t x382 = -1LL;
	int16_t x383 = -1;
	int64_t x384 = -10756405LL;
	volatile int32_t t20 = -15984245;

	t20 = (x381<<((x382^x383)&x384));

	if (t20 != 7) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x385 = 14U;
	volatile uint8_t x386 = UINT8_MAX;
	static int8_t x387 = INT8_MAX;
	uint16_t x388 = 3U;
	static int32_t t21 = 24425634;

	t21 = (x385<<((x386^x387)&x388));

	if (t21 != 14) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x390 = 44994618;
	int8_t x391 = -1;
	uint32_t t22 = 11276109U;

	t22 = (x389<<((x390^x391)&x392));

	if (t22 != 3034U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x406 = 1;
	uint8_t x407 = 59U;
	volatile int32_t t23 = -5568;

	t23 = (x405<<((x406^x407)&x408));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x431 = -1;
	uint32_t x432 = 12U;
	int64_t t24 = 3034191790673405349LL;

	t24 = (x429<<((x430^x431)&x432));

	if (t24 != 3895296LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x433 = 24;
	volatile int64_t x435 = -460669652LL;
	volatile uint8_t x436 = 0U;
	static volatile int32_t t25 = 30789;

	t25 = (x433<<((x434^x435)&x436));

	if (t25 != 24) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x449 = INT16_MAX;
	int8_t x450 = -1;
	int64_t x451 = -1LL;
	volatile uint32_t x452 = 1906336U;
	volatile int32_t t26 = -844;

	t26 = (x449<<((x450^x451)&x452));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x493 = 2710352U;
	static int32_t x494 = -5632;
	static int64_t x495 = 3627150389LL;
	volatile uint32_t t27 = 26U;

	t27 = (x493<<((x494^x495)&x496));

	if (t27 != 2710352U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x538 = INT32_MIN;
	static int16_t x539 = INT16_MIN;
	static uint8_t x540 = 0U;
	volatile int32_t t28 = 15736;

	t28 = (x537<<((x538^x539)&x540));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x561 = 1727256725U;
	volatile int16_t x563 = 2812;
	uint16_t x564 = 0U;
	uint32_t t29 = 0U;

	t29 = (x561<<((x562^x563)&x564));

	if (t29 != 1727256725U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x565 = 563;
	volatile int32_t t30 = -714903493;

	t30 = (x565<<((x566^x567)&x568));

	if (t30 != 563) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x637 = UINT64_MAX;
	static int64_t x638 = 13800006267828LL;
	int8_t x639 = 0;
	uint64_t t31 = UINT64_MAX;

	t31 = (x637<<((x638^x639)&x640));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x645 = 21U;
	static int8_t x646 = -1;
	int8_t x647 = INT8_MAX;
	uint8_t x648 = 20U;
	volatile int32_t t32 = -46583;

	t32 = (x645<<((x646^x647)&x648));

	if (t32 != 21) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x670 = INT8_MIN;
	volatile uint64_t x671 = UINT64_MAX;
	int16_t x672 = INT16_MIN;
	int32_t t33 = 872184632;

	t33 = (x669<<((x670^x671)&x672));

	if (t33 != 21) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x701 = UINT32_MAX;
	int32_t x703 = INT32_MIN;
	uint32_t t34 = UINT32_MAX;

	t34 = (x701<<((x702^x703)&x704));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x717 = INT32_MAX;
	int16_t x718 = -1;
	uint64_t x719 = UINT64_MAX;
	int32_t x720 = -40980954;
	volatile int32_t t35 = INT32_MAX;

	t35 = (x717<<((x718^x719)&x720));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x765 = 1864008853U;
	static int32_t x766 = -1;
	static int8_t x767 = INT8_MAX;
	static int8_t x768 = INT8_MAX;
	static volatile uint32_t t36 = 1742U;

	t36 = (x765<<((x766^x767)&x768));

	if (t36 != 1864008853U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x779 = 3;
	int32_t x780 = INT32_MIN;

	t37 = (x777<<((x778^x779)&x780));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x817 = 8430473950LL;
	volatile uint32_t x820 = 1146171U;

	t38 = (x817<<((x818^x819)&x820));

	if (t38 != 8430473950LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x833 = 166904492335333LLU;
	static int8_t x834 = -1;
	static uint64_t x835 = 23662456286715LLU;
	volatile int8_t x836 = 22;

	t39 = (x833<<((x834^x835)&x836));

	if (t39 != 2670471877365328LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x849 = 3U;
	static uint64_t x850 = 134086LLU;
	static int32_t x851 = INT32_MAX;

	t40 = (x849<<((x850^x851)&x852));

	if (t40 != 3) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x875 = -1;
	static volatile uint16_t x876 = 120U;
	volatile int32_t t41 = -3;

	t41 = (x873<<((x874^x875)&x876));

	if (t41 != 131072) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x885 = INT16_MAX;
	volatile uint64_t x886 = UINT64_MAX;
	uint64_t x888 = 517873347976438496LLU;
	int32_t t42 = 700470;

	t42 = (x885<<((x886^x887)&x888));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x897 = 4632167LLU;
	int64_t x899 = INT64_MAX;
	static int8_t x900 = 5;
	static volatile uint64_t t43 = 10598655942631718LLU;

	t43 = (x897<<((x898^x899)&x900));

	if (t43 != 4632167LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x901 = 101339094LLU;
	volatile int8_t x902 = -40;

	t44 = (x901<<((x902^x903)&x904));

	if (t44 != 6485702016LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x961 = 22U;
	int64_t x962 = INT64_MAX;
	volatile uint32_t x963 = UINT32_MAX;
	volatile int32_t t45 = 53;

	t45 = (x961<<((x962^x963)&x964));

	if (t45 != 22) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x1009 = 6996527U;
	volatile int16_t x1010 = INT16_MIN;
	int16_t x1011 = -1651;
	static int64_t x1012 = 1LL;
	static volatile uint32_t t46 = 1586026032U;

	t46 = (x1009<<((x1010^x1011)&x1012));

	if (t46 != 13993054U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1037 = INT8_MAX;
	uint16_t x1038 = UINT16_MAX;
	static int64_t x1039 = -30007LL;
	int8_t x1040 = 30;
	static int32_t t47 = -2283898;

	t47 = (x1037<<((x1038^x1039)&x1040));

	if (t47 != 532676608) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x1041 = 0U;
	int64_t x1042 = INT64_MAX;
	uint32_t x1043 = UINT32_MAX;
	uint32_t x1044 = 0U;

	t48 = (x1041<<((x1042^x1043)&x1044));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1057 = INT64_MAX;
	uint16_t x1058 = 11U;
	static int32_t x1059 = 17;
	volatile uint8_t x1060 = 4U;
	volatile int64_t t49 = INT64_MAX;

	t49 = (x1057<<((x1058^x1059)&x1060));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x1073 = UINT32_MAX;
	static int8_t x1075 = INT8_MIN;

	t50 = (x1073<<((x1074^x1075)&x1076));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1101 = INT64_MAX;
	int16_t x1102 = INT16_MIN;
	uint32_t x1103 = 369524352U;
	uint32_t x1104 = 124U;
	int64_t t51 = INT64_MAX;

	t51 = (x1101<<((x1102^x1103)&x1104));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x1105 = 638135819725604LL;
	int32_t x1106 = INT32_MIN;
	volatile int32_t x1107 = INT32_MAX;
	uint16_t x1108 = 8U;
	static int64_t t52 = 292321550010112325LL;

	t52 = (x1105<<((x1106^x1107)&x1108));

	if (t52 != 163362769849754624LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1158 = 2144U;
	int64_t x1159 = INT64_MIN;
	uint64_t x1160 = 1LLU;
	volatile uint32_t t53 = UINT32_MAX;

	t53 = (x1157<<((x1158^x1159)&x1160));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x1161 = UINT32_MAX;
	int64_t x1162 = INT64_MAX;
	volatile int16_t x1163 = 2;
	volatile uint32_t t54 = 5U;

	t54 = (x1161<<((x1162^x1163)&x1164));

	if (t54 != 4294901760U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1177 = 48U;
	int64_t x1179 = -214446688283431LL;
	static int8_t x1180 = 5;
	uint32_t t55 = 42U;

	t55 = (x1177<<((x1178^x1179)&x1180));

	if (t55 != 768U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1195 = INT64_MIN;
	volatile uint16_t x1196 = 764U;
	volatile int32_t t56 = 1340926;

	t56 = (x1193<<((x1194^x1195)&x1196));

	if (t56 != 7168) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1213 = 31U;
	int8_t x1214 = -1;
	volatile int8_t x1215 = -6;
	volatile int32_t t57 = -197;

	t57 = (x1213<<((x1214^x1215)&x1216));

	if (t57 != 31) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x1226 = UINT64_MAX;
	int64_t x1227 = -3LL;
	static uint32_t x1228 = 355233U;
	volatile int32_t t58 = 14;

	t58 = (x1225<<((x1226^x1227)&x1228));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1277 = 1U;
	static volatile int32_t x1278 = INT32_MAX;
	int16_t x1279 = -1;
	int16_t x1280 = 0;
	int32_t t59 = -134;

	t59 = (x1277<<((x1278^x1279)&x1280));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x1301 = INT64_MAX;
	uint16_t x1302 = 276U;
	uint8_t x1303 = 5U;
	int32_t x1304 = INT32_MIN;
	int64_t t60 = INT64_MAX;

	t60 = (x1301<<((x1302^x1303)&x1304));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x1317 = 815;
	static int64_t x1318 = INT64_MIN;
	volatile int32_t x1319 = -27502744;
	volatile int64_t x1320 = INT64_MIN;
	int32_t t61 = 918696;

	t61 = (x1317<<((x1318^x1319)&x1320));

	if (t61 != 815) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1322 = INT32_MIN;
	uint8_t x1324 = 1U;

	t62 = (x1321<<((x1322^x1323)&x1324));

	if (t62 != 50) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x1325 = 8;
	int32_t x1326 = 1;
	int16_t x1327 = 11942;
	int32_t t63 = -494;

	t63 = (x1325<<((x1326^x1327)&x1328));

	if (t63 != 8) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1377 = 160;
	int64_t x1378 = INT64_MIN;
	volatile uint8_t x1379 = UINT8_MAX;
	uint8_t x1380 = 3U;
	int32_t t64 = 470291;

	t64 = (x1377<<((x1378^x1379)&x1380));

	if (t64 != 1280) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x1385 = 6959014486650LL;
	int8_t x1386 = -1;
	uint16_t x1387 = 26U;
	volatile uint8_t x1388 = 0U;
	static volatile int64_t t65 = 597703400673307747LL;

	t65 = (x1385<<((x1386^x1387)&x1388));

	if (t65 != 6959014486650LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1426 = -1;
	int64_t x1427 = -30030306424LL;
	volatile int8_t x1428 = 3;
	volatile int32_t t66 = 24;

	t66 = (x1425<<((x1426^x1427)&x1428));

	if (t66 != 40) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1433 = 12U;
	int64_t x1435 = INT64_MIN;
	uint64_t x1436 = 2LLU;
	static int32_t t67 = 11;

	t67 = (x1433<<((x1434^x1435)&x1436));

	if (t67 != 12) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1473 = INT64_MAX;
	static int16_t x1474 = -1;
	volatile int8_t x1475 = -1;
	uint8_t x1476 = 7U;
	static volatile int64_t t68 = INT64_MAX;

	t68 = (x1473<<((x1474^x1475)&x1476));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x1489 = 38529836U;
	int16_t x1491 = -1;
	uint8_t x1492 = UINT8_MAX;
	volatile uint32_t t69 = 2144045U;

	t69 = (x1489<<((x1490^x1491)&x1492));

	if (t69 != 2897215488U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x1531 = INT8_MIN;
	static int32_t x1532 = 2;

	t70 = (x1529<<((x1530^x1531)&x1532));

	if (t70 != 3283268LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x1549 = 5601LLU;
	uint8_t x1551 = 26U;
	volatile uint64_t t71 = 52577615LLU;

	t71 = (x1549<<((x1550^x1551)&x1552));

	if (t71 != 11202LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x1577 = 198369;
	static int16_t x1578 = -1;
	uint64_t x1579 = UINT64_MAX;
	static volatile int64_t x1580 = -45912LL;
	volatile int32_t t72 = -6532;

	t72 = (x1577<<((x1578^x1579)&x1580));

	if (t72 != 198369) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1593 = 496;
	int16_t x1594 = -1;
	int64_t x1595 = INT64_MIN;
	int64_t x1596 = INT64_MIN;
	volatile int32_t t73 = -436910471;

	t73 = (x1593<<((x1594^x1595)&x1596));

	if (t73 != 496) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1613 = 92LLU;
	uint16_t x1614 = 1354U;
	uint64_t x1615 = 2309253365LLU;
	uint16_t x1616 = 0U;
	uint64_t t74 = 964913LLU;

	t74 = (x1613<<((x1614^x1615)&x1616));

	if (t74 != 92LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x1665 = INT32_MAX;
	volatile uint32_t x1667 = 330U;
	volatile int32_t x1668 = INT32_MIN;
	static int32_t t75 = INT32_MAX;

	t75 = (x1665<<((x1666^x1667)&x1668));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x1705 = INT8_MAX;
	int32_t x1707 = -1;
	static volatile int16_t x1708 = INT16_MAX;
	volatile int32_t t76 = -533169006;

	t76 = (x1705<<((x1706^x1707)&x1708));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x1754 = UINT16_MAX;
	uint16_t x1755 = UINT16_MAX;
	int32_t t77 = 516144;

	t77 = (x1753<<((x1754^x1755)&x1756));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1794 = UINT64_MAX;
	int64_t x1795 = -1LL;
	int32_t x1796 = INT32_MAX;
	int32_t t78 = 1337938;

	t78 = (x1793<<((x1794^x1795)&x1796));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x1806 = UINT64_MAX;
	int16_t x1807 = -1;

	t79 = (x1805<<((x1806^x1807)&x1808));

	if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x1817 = 31U;
	int8_t x1819 = -1;
	int32_t x1820 = -1;
	static int32_t t80 = -1;

	t80 = (x1817<<((x1818^x1819)&x1820));

	if (t80 != 31) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x1865 = 6788526572084LL;
	static int16_t x1866 = INT16_MIN;
	int16_t x1867 = INT16_MIN;
	uint16_t x1868 = 164U;
	int64_t t81 = 4916956756LL;

	t81 = (x1865<<((x1866^x1867)&x1868));

	if (t81 != 6788526572084LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1869 = 7228905834464505199LLU;
	uint8_t x1870 = 0U;
	uint8_t x1871 = UINT8_MAX;
	int16_t x1872 = INT16_MIN;
	volatile uint64_t t82 = 46LLU;

	t82 = (x1869<<((x1870^x1871)&x1872));

	if (t82 != 7228905834464505199LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x1883 = 2U;
	int64_t x1884 = 213LL;
	static uint64_t t83 = 0LLU;

	t83 = (x1881<<((x1882^x1883)&x1884));

	if (t83 != 8426980366919LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x1893 = 4U;
	volatile uint8_t x1895 = 14U;
	volatile int8_t x1896 = INT8_MIN;
	static volatile uint32_t t84 = 185379U;

	t84 = (x1893<<((x1894^x1895)&x1896));

	if (t84 != 4U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x1907 = INT32_MAX;
	static int64_t x1908 = INT64_MIN;
	volatile int32_t t85 = 589732565;

	t85 = (x1905<<((x1906^x1907)&x1908));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x1921 = INT64_MAX;
	int16_t x1922 = INT16_MIN;
	int8_t x1923 = -5;
	int64_t t86 = INT64_MAX;

	t86 = (x1921<<((x1922^x1923)&x1924));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x1925 = 0U;
	volatile uint16_t x1926 = 25U;
	uint16_t x1927 = UINT16_MAX;
	int32_t x1928 = INT32_MIN;
	int32_t t87 = -4;

	t87 = (x1925<<((x1926^x1927)&x1928));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1929 = UINT32_MAX;
	int64_t x1930 = -1LL;
	int32_t x1931 = INT32_MIN;
	volatile int32_t x1932 = INT32_MIN;
	volatile uint32_t t88 = UINT32_MAX;

	t88 = (x1929<<((x1930^x1931)&x1932));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x1941 = 1063;
	int32_t x1943 = INT32_MAX;
	static int64_t x1944 = INT64_MIN;
	int32_t t89 = -212597;

	t89 = (x1941<<((x1942^x1943)&x1944));

	if (t89 != 1063) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1962 = INT16_MIN;
	int16_t x1964 = INT16_MIN;
	static volatile uint32_t t90 = 30488926U;

	t90 = (x1961<<((x1962^x1963)&x1964));

	if (t90 != 967293496U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x1970 = INT8_MIN;
	int8_t x1971 = INT8_MIN;
	volatile uint32_t x1972 = 440482U;

	t91 = (x1969<<((x1970^x1971)&x1972));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2009 = 5605887LLU;
	uint32_t x2011 = UINT32_MAX;

	t92 = (x2009<<((x2010^x2011)&x2012));

	if (t92 != 5605887LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x2021 = 2U;
	static uint8_t x2022 = 12U;
	int8_t x2023 = INT8_MAX;
	int32_t x2024 = INT32_MIN;
	static int32_t t93 = 1;

	t93 = (x2021<<((x2022^x2023)&x2024));

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x2057 = 179U;
	int32_t x2059 = 0;
	volatile int8_t x2060 = INT8_MAX;
	int32_t t94 = 8270532;

	t94 = (x2057<<((x2058^x2059)&x2060));

	if (t94 != 179) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x2107 = -1;
	volatile int32_t x2108 = INT32_MAX;
	int32_t t95 = -366291637;

	t95 = (x2105<<((x2106^x2107)&x2108));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2118 = 2342408214598LLU;
	int64_t x2119 = -29180226LL;
	int8_t x2120 = 1;
	int32_t t96 = 20588;

	t96 = (x2117<<((x2118^x2119)&x2120));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x2141 = 8512;
	uint16_t x2142 = UINT16_MAX;
	int64_t x2143 = INT64_MAX;
	volatile int32_t t97 = -694165404;

	t97 = (x2141<<((x2142^x2143)&x2144));

	if (t97 != 8512) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x2173 = INT8_MAX;
	int64_t x2174 = -1LL;
	int64_t x2175 = INT64_MIN;
	int16_t x2176 = 3;
	int32_t t98 = 76488828;

	t98 = (x2173<<((x2174^x2175)&x2176));

	if (t98 != 1016) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x2186 = UINT16_MAX;
	uint8_t x2187 = UINT8_MAX;
	int32_t x2188 = 255;
	uint64_t t99 = UINT64_MAX;

	t99 = (x2185<<((x2186^x2187)&x2188));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

