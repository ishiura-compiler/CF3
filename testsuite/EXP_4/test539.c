#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x16 = INT8_MIN;
int32_t t0 = 2311;
int64_t x17 = 7848537111949LL;
int32_t x20 = -11492;
uint8_t x25 = 2U;
volatile uint16_t x26 = 18U;
static volatile int32_t t2 = -11;
int8_t x36 = -3;
static volatile uint8_t x44 = UINT8_MAX;
static uint8_t x51 = UINT8_MAX;
uint64_t x55 = 63LLU;
static int32_t x56 = INT32_MAX;
uint32_t x61 = 724807428U;
static int32_t x62 = -1;
int16_t x80 = INT16_MAX;
static int8_t x94 = INT8_MIN;
int64_t x111 = -1LL;
static uint8_t x135 = 91U;
int16_t x136 = INT16_MIN;
int8_t x138 = INT8_MIN;
int64_t x166 = -2109137262113569974LL;
volatile uint32_t x189 = UINT32_MAX;
uint64_t x192 = UINT64_MAX;
int64_t x200 = INT64_MIN;
uint64_t x214 = 45LLU;
static volatile int32_t t19 = -116;
uint8_t x225 = UINT8_MAX;
volatile uint8_t x226 = 124U;
static int32_t x227 = INT32_MIN;
static int64_t x303 = 6750690LL;
static uint32_t x313 = 1039120U;
int8_t x315 = INT8_MIN;
int32_t x318 = INT32_MIN;
uint16_t x319 = 70U;
static int32_t x325 = INT32_MAX;
uint16_t x342 = 4U;
volatile int32_t t29 = -3;
volatile int8_t x351 = INT8_MAX;
volatile uint64_t x352 = 3226427LLU;
static volatile uint64_t t30 = 43LLU;
uint32_t t31 = UINT32_MAX;
volatile uint8_t x376 = 11U;
int32_t t35 = -1803;
volatile int32_t t37 = 94387590;
static volatile uint32_t t39 = 87756U;
int16_t x487 = INT16_MIN;
int32_t x488 = INT32_MAX;
uint16_t x498 = 21U;
uint8_t x529 = 0U;
int32_t x530 = INT32_MIN;
int64_t x545 = 15LL;
uint64_t x548 = UINT64_MAX;
volatile uint16_t x569 = UINT16_MAX;
int8_t x593 = 13;
int64_t x626 = INT64_MAX;
volatile int32_t t47 = 1902707;
int32_t x666 = -42791;
int16_t x732 = 351;
uint32_t x741 = 6934450U;
int32_t x753 = 21;
uint16_t x754 = 198U;
volatile int32_t t55 = 50668241;
int8_t x759 = -1;
static volatile int32_t t56 = 137;
volatile int32_t x772 = INT32_MIN;
int32_t t57 = -101365;
static uint8_t x777 = 3U;
int64_t x811 = 14696LL;
int32_t t60 = -79402368;
static volatile uint16_t x843 = 5804U;
volatile uint32_t t64 = 1880451U;
uint16_t x965 = 4U;
int32_t x969 = INT32_MAX;
int16_t x970 = -1;
int64_t x972 = 71038304889978730LL;
uint8_t x986 = 1U;
int32_t x988 = INT32_MIN;
uint16_t x998 = 43U;
volatile uint8_t x1035 = 0U;
static uint64_t x1131 = 5102LLU;
uint32_t x1139 = UINT32_MAX;
volatile uint32_t x1163 = UINT32_MAX;
static int32_t x1168 = -2212134;
volatile int32_t t82 = 1;
volatile int8_t x1240 = INT8_MIN;
volatile int64_t t85 = 14917LL;
int64_t x1318 = 11473206750LL;
int16_t x1319 = INT16_MIN;
static volatile int64_t x1320 = -1099189869059LL;
int16_t x1334 = INT16_MIN;
int16_t x1336 = -64;
int16_t x1359 = 7;
int8_t x1377 = 0;
int32_t t90 = -933970938;
uint8_t x1381 = UINT8_MAX;
uint8_t x1389 = UINT8_MAX;
int32_t x1391 = INT32_MAX;
int16_t x1428 = 36;
uint32_t t93 = 1161379U;
uint8_t x1454 = 9U;
uint16_t x1465 = UINT16_MAX;
static int64_t x1501 = INT64_MAX;
int64_t x1503 = -1LL;


void f0(void) {
	volatile int8_t x13 = 3;
	int8_t x14 = -52;
	volatile uint32_t x15 = 24715U;

	t0 = (x13<<(x14*(x15/x16)));

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x18 = INT8_MIN;
	static uint16_t x19 = 0U;
	volatile int64_t t1 = 463LL;

	t1 = (x17<<(x18*(x19/x20)));

	if (t1 != 7848537111949LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x27 = -166;
	int16_t x28 = INT16_MIN;

	t2 = (x25<<(x26*(x27/x28)));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x29 = 7774608411521772976LLU;
	uint64_t x30 = 49529578628202LLU;
	int8_t x31 = INT8_MIN;
	static int32_t x32 = INT32_MIN;
	volatile uint64_t t3 = 63843LLU;

	t3 = (x29<<(x30*(x31/x32)));

	if (t3 != 7774608411521772976LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x33 = UINT8_MAX;
	static int64_t x34 = 3764LL;
	static uint64_t x35 = 244164623483354866LLU;
	volatile int32_t t4 = -10268;

	t4 = (x33<<(x34*(x35/x36)));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x41 = 0U;
	static volatile uint16_t x42 = 1U;
	volatile int32_t x43 = -1;
	int32_t t5 = 206543;

	t5 = (x41<<(x42*(x43/x44)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x49 = INT32_MAX;
	int16_t x50 = -3;
	int64_t x52 = INT64_MIN;
	static volatile int32_t t6 = INT32_MAX;

	t6 = (x49<<(x50*(x51/x52)));

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x53 = UINT32_MAX;
	int16_t x54 = -1;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = (x53<<(x54*(x55/x56)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x63 = 31356U;
	uint64_t x64 = 195347909389263578LLU;
	volatile uint32_t t8 = 487U;

	t8 = (x61<<(x62*(x63/x64)));

	if (t8 != 724807428U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x65 = 19451026455465LLU;
	static volatile int8_t x66 = 14;
	static uint64_t x67 = 2087785990322481LLU;
	int8_t x68 = INT8_MIN;
	volatile uint64_t t9 = 23438926164LLU;

	t9 = (x65<<(x66*(x67/x68)));

	if (t9 != 19451026455465LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x77 = 13233724;
	static int16_t x78 = INT16_MAX;
	int8_t x79 = -22;
	int32_t t10 = -57292063;

	t10 = (x77<<(x78*(x79/x80)));

	if (t10 != 13233724) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x93 = UINT8_MAX;
	int16_t x95 = INT16_MIN;
	int64_t x96 = INT64_MAX;
	static volatile int32_t t11 = 31125;

	t11 = (x93<<(x94*(x95/x96)));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x109 = 13118;
	uint64_t x110 = UINT64_MAX;
	static uint8_t x112 = 65U;
	volatile int32_t t12 = 11;

	t12 = (x109<<(x110*(x111/x112)));

	if (t12 != 13118) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x133 = 22869623119649LLU;
	static uint64_t x134 = 5743LLU;
	static volatile uint64_t t13 = 408973679038451LLU;

	t13 = (x133<<(x134*(x135/x136)));

	if (t13 != 22869623119649LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x137 = 654625;
	volatile int16_t x139 = -3;
	int8_t x140 = INT8_MIN;
	static int32_t t14 = 1842989;

	t14 = (x137<<(x138*(x139/x140)));

	if (t14 != 654625) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x149 = INT32_MAX;
	static int64_t x150 = -21LL;
	int32_t x151 = 381;
	static int32_t x152 = -442;
	int32_t t15 = INT32_MAX;

	t15 = (x149<<(x150*(x151/x152)));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x165 = INT16_MAX;
	volatile int8_t x167 = -1;
	static uint8_t x168 = UINT8_MAX;
	static volatile int32_t t16 = 2;

	t16 = (x165<<(x166*(x167/x168)));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x190 = INT64_MAX;
	volatile uint8_t x191 = 21U;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = (x189<<(x190*(x191/x192)));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x197 = 1075294U;
	int64_t x198 = INT64_MIN;
	uint64_t x199 = 139224443081390614LLU;
	volatile uint32_t t18 = 446055U;

	t18 = (x197<<(x198*(x199/x200)));

	if (t18 != 1075294U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x213 = 1;
	volatile int16_t x215 = INT16_MIN;
	uint16_t x216 = UINT16_MAX;

	t19 = (x213<<(x214*(x215/x216)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x228 = INT64_MIN;
	volatile int32_t t20 = 1;

	t20 = (x225<<(x226*(x227/x228)));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x257 = 321698897691159LLU;
	int64_t x258 = INT64_MIN;
	static volatile uint32_t x259 = 123U;
	int8_t x260 = -1;
	uint64_t t21 = 14734620188LLU;

	t21 = (x257<<(x258*(x259/x260)));

	if (t21 != 321698897691159LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x261 = 1;
	uint8_t x262 = 77U;
	int8_t x263 = -3;
	volatile int8_t x264 = 20;
	static int32_t t22 = -1;

	t22 = (x261<<(x262*(x263/x264)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x265 = INT16_MAX;
	int16_t x266 = INT16_MIN;
	static int64_t x267 = -1LL;
	static int16_t x268 = INT16_MIN;
	int32_t t23 = -4844697;

	t23 = (x265<<(x266*(x267/x268)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x301 = 1U;
	static uint32_t x302 = 25096890U;
	volatile uint64_t x304 = UINT64_MAX;
	int32_t t24 = 107697648;

	t24 = (x301<<(x302*(x303/x304)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x314 = INT8_MIN;
	int64_t x316 = INT64_MIN;
	uint32_t t25 = 1673370U;

	t25 = (x313<<(x314*(x315/x316)));

	if (t25 != 1039120U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x317 = 3453;
	int16_t x320 = 1968;
	volatile int32_t t26 = -1413;

	t26 = (x317<<(x318*(x319/x320)));

	if (t26 != 3453) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x326 = INT16_MAX;
	uint64_t x327 = 955412676804LLU;
	volatile int64_t x328 = -1LL;
	int32_t t27 = INT32_MAX;

	t27 = (x325<<(x326*(x327/x328)));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x341 = 21260;
	int8_t x343 = 0;
	static int64_t x344 = -1LL;
	static int32_t t28 = 21630892;

	t28 = (x341<<(x342*(x343/x344)));

	if (t28 != 21260) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x345 = 61;
	int32_t x346 = INT32_MAX;
	volatile uint16_t x347 = 1U;
	static int16_t x348 = INT16_MIN;

	t29 = (x345<<(x346*(x347/x348)));

	if (t29 != 61) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x349 = 10910LLU;
	int16_t x350 = 1067;

	t30 = (x349<<(x350*(x351/x352)));

	if (t30 != 10910LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x369 = UINT32_MAX;
	int64_t x370 = -1LL;
	uint8_t x371 = 1U;
	int8_t x372 = INT8_MIN;

	t31 = (x369<<(x370*(x371/x372)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x373 = 56217LLU;
	static uint16_t x374 = 3U;
	uint32_t x375 = 99U;
	static uint64_t t32 = 6634LLU;

	t32 = (x373<<(x374*(x375/x376)));

	if (t32 != 7545318014976LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x381 = 34U;
	int8_t x382 = 1;
	static uint64_t x383 = UINT64_MAX;
	static int16_t x384 = INT16_MIN;
	static volatile int32_t t33 = -6583372;

	t33 = (x381<<(x382*(x383/x384)));

	if (t33 != 68) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x425 = INT32_MAX;
	static int32_t x426 = -1;
	uint32_t x427 = 10U;
	int32_t x428 = -380;
	int32_t t34 = INT32_MAX;

	t34 = (x425<<(x426*(x427/x428)));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x441 = 11403U;
	int16_t x442 = INT16_MIN;
	uint8_t x443 = UINT8_MAX;
	volatile int32_t x444 = INT32_MIN;

	t35 = (x441<<(x442*(x443/x444)));

	if (t35 != 11403) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x445 = INT8_MAX;
	uint64_t x446 = 686589LLU;
	int16_t x447 = -1;
	int8_t x448 = INT8_MIN;
	volatile int32_t t36 = 1817755;

	t36 = (x445<<(x446*(x447/x448)));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x453 = INT16_MAX;
	static uint8_t x454 = 61U;
	uint64_t x455 = 17715757LLU;
	int64_t x456 = -1LL;

	t37 = (x453<<(x454*(x455/x456)));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x469 = 395102878468790210LLU;
	static uint32_t x470 = 1145095703U;
	uint8_t x471 = 7U;
	int64_t x472 = -20438023LL;
	volatile uint64_t t38 = 375LLU;

	t38 = (x469<<(x470*(x471/x472)));

	if (t38 != 395102878468790210LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x481 = 1184U;
	int16_t x482 = INT16_MIN;
	uint32_t x483 = 9U;
	int32_t x484 = 2110;

	t39 = (x481<<(x482*(x483/x484)));

	if (t39 != 1184U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x485 = UINT16_MAX;
	uint64_t x486 = UINT64_MAX;
	volatile int32_t t40 = -9;

	t40 = (x485<<(x486*(x487/x488)));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x493 = 3827991319LLU;
	volatile uint16_t x494 = 7U;
	volatile int32_t x495 = -1;
	static int64_t x496 = INT64_MIN;
	uint64_t t41 = 43LLU;

	t41 = (x493<<(x494*(x495/x496)));

	if (t41 != 3827991319LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x497 = 2263U;
	int8_t x499 = INT8_MIN;
	uint16_t x500 = UINT16_MAX;
	int32_t t42 = 3015;

	t42 = (x497<<(x498*(x499/x500)));

	if (t42 != 2263) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x531 = -1;
	volatile int8_t x532 = -3;
	volatile int32_t t43 = -336716133;

	t43 = (x529<<(x530*(x531/x532)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x546 = 1276U;
	uint32_t x547 = 6168326U;
	int64_t t44 = -482LL;

	t44 = (x545<<(x546*(x547/x548)));

	if (t44 != 15LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x570 = UINT32_MAX;
	static int8_t x571 = 0;
	int32_t x572 = INT32_MIN;
	volatile int32_t t45 = 70376;

	t45 = (x569<<(x570*(x571/x572)));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x594 = -1;
	int32_t x595 = -1675821;
	int32_t x596 = 7894823;
	static int32_t t46 = 30614;

	t46 = (x593<<(x594*(x595/x596)));

	if (t46 != 13) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x625 = INT8_MAX;
	int8_t x627 = INT8_MIN;
	volatile int16_t x628 = -2538;

	t47 = (x625<<(x626*(x627/x628)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x665 = 69584164685128362LL;
	static int64_t x667 = -1LL;
	static uint8_t x668 = 2U;
	int64_t t48 = -30718715057251LL;

	t48 = (x665<<(x666*(x667/x668)));

	if (t48 != 69584164685128362LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x681 = 239171U;
	int16_t x682 = -1;
	uint64_t x683 = 1658067592060763LLU;
	int32_t x684 = INT32_MIN;
	static uint32_t t49 = 53U;

	t49 = (x681<<(x682*(x683/x684)));

	if (t49 != 239171U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x725 = 3;
	int64_t x726 = -1LL;
	static uint16_t x727 = 42U;
	volatile int64_t x728 = INT64_MIN;
	static int32_t t50 = 0;

	t50 = (x725<<(x726*(x727/x728)));

	if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x729 = INT16_MAX;
	uint8_t x730 = 42U;
	int8_t x731 = -37;
	int32_t t51 = -1654856;

	t51 = (x729<<(x730*(x731/x732)));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x742 = -1;
	volatile int32_t x743 = 6;
	uint8_t x744 = UINT8_MAX;
	uint32_t t52 = 150274U;

	t52 = (x741<<(x742*(x743/x744)));

	if (t52 != 6934450U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x745 = INT64_MAX;
	uint8_t x746 = 1U;
	int16_t x747 = -76;
	int8_t x748 = INT8_MIN;
	static volatile int64_t t53 = INT64_MAX;

	t53 = (x745<<(x746*(x747/x748)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x749 = 8U;
	int64_t x750 = -27LL;
	static int32_t x751 = -1;
	int16_t x752 = -2;
	static int32_t t54 = 106200960;

	t54 = (x749<<(x750*(x751/x752)));

	if (t54 != 8) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x755 = -1;
	int8_t x756 = INT8_MIN;

	t55 = (x753<<(x754*(x755/x756)));

	if (t55 != 21) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x757 = UINT8_MAX;
	int32_t x758 = INT32_MIN;
	int16_t x760 = INT16_MAX;

	t56 = (x757<<(x758*(x759/x760)));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x769 = 1;
	int32_t x770 = 44040;
	int8_t x771 = 10;

	t57 = (x769<<(x770*(x771/x772)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x778 = -28773847;
	int16_t x779 = INT16_MAX;
	volatile uint16_t x780 = UINT16_MAX;
	int32_t t58 = 184;

	t58 = (x777<<(x778*(x779/x780)));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x781 = 4;
	volatile int16_t x782 = -1;
	int64_t x783 = -25LL;
	static int64_t x784 = INT64_MAX;
	int32_t t59 = 1;

	t59 = (x781<<(x782*(x783/x784)));

	if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x809 = 3U;
	static int8_t x810 = -1;
	uint32_t x812 = UINT32_MAX;

	t60 = (x809<<(x810*(x811/x812)));

	if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x841 = 13;
	int64_t x842 = -32360728LL;
	volatile int64_t x844 = INT64_MIN;
	int32_t t61 = -276;

	t61 = (x841<<(x842*(x843/x844)));

	if (t61 != 13) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x845 = UINT16_MAX;
	int16_t x846 = 1;
	static volatile uint32_t x847 = 0U;
	int64_t x848 = -1LL;
	volatile int32_t t62 = -5364427;

	t62 = (x845<<(x846*(x847/x848)));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x853 = 44826374U;
	volatile uint64_t x854 = 4131284LLU;
	int64_t x855 = 1440557458613821741LL;
	int64_t x856 = INT64_MIN;
	volatile uint32_t t63 = 31421653U;

	t63 = (x853<<(x854*(x855/x856)));

	if (t63 != 44826374U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x865 = 46U;
	static int16_t x866 = 7083;
	uint8_t x867 = 24U;
	volatile int32_t x868 = INT32_MIN;

	t64 = (x865<<(x866*(x867/x868)));

	if (t64 != 46U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x929 = 1601016718139465633LLU;
	static uint64_t x930 = 9028138499LLU;
	uint32_t x931 = 13298U;
	uint64_t x932 = 218526LLU;
	volatile uint64_t t65 = 30LLU;

	t65 = (x929<<(x930*(x931/x932)));

	if (t65 != 1601016718139465633LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x966 = -39;
	uint16_t x967 = 318U;
	uint32_t x968 = 3180228U;
	static volatile int32_t t66 = -6;

	t66 = (x965<<(x966*(x967/x968)));

	if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x971 = -7716071850LL;
	static int32_t t67 = INT32_MAX;

	t67 = (x969<<(x970*(x971/x972)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x985 = INT8_MAX;
	uint8_t x987 = 44U;
	volatile int32_t t68 = -181;

	t68 = (x985<<(x986*(x987/x988)));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x997 = 10U;
	static int8_t x999 = -36;
	uint16_t x1000 = 15122U;
	uint32_t t69 = 1661250U;

	t69 = (x997<<(x998*(x999/x1000)));

	if (t69 != 10U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x1009 = UINT16_MAX;
	int64_t x1010 = -3102402124504526090LL;
	volatile uint64_t x1011 = 92884LLU;
	int8_t x1012 = -6;
	volatile int32_t t70 = 636261;

	t70 = (x1009<<(x1010*(x1011/x1012)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x1017 = 11U;
	int64_t x1018 = 15766605472288188LL;
	int16_t x1019 = INT16_MIN;
	volatile int64_t x1020 = -198011LL;
	int32_t t71 = 518;

	t71 = (x1017<<(x1018*(x1019/x1020)));

	if (t71 != 11) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x1033 = 3090U;
	int8_t x1034 = -26;
	static volatile uint8_t x1036 = 5U;
	volatile int32_t t72 = 506576250;

	t72 = (x1033<<(x1034*(x1035/x1036)));

	if (t72 != 3090) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1081 = 253U;
	uint8_t x1082 = 0U;
	int64_t x1083 = INT64_MIN;
	int8_t x1084 = 59;
	static volatile int32_t t73 = 118;

	t73 = (x1081<<(x1082*(x1083/x1084)));

	if (t73 != 253) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x1097 = 3758U;
	int64_t x1098 = -1LL;
	uint8_t x1099 = 8U;
	int64_t x1100 = INT64_MIN;
	int32_t t74 = -17;

	t74 = (x1097<<(x1098*(x1099/x1100)));

	if (t74 != 3758) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x1105 = INT64_MAX;
	int32_t x1106 = -1;
	volatile int64_t x1107 = -1LL;
	static uint32_t x1108 = 1652159U;
	int64_t t75 = INT64_MAX;

	t75 = (x1105<<(x1106*(x1107/x1108)));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x1129 = 2619LLU;
	int8_t x1130 = -11;
	static int32_t x1132 = -71383;
	volatile uint64_t t76 = 11940LLU;

	t76 = (x1129<<(x1130*(x1131/x1132)));

	if (t76 != 2619LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1137 = UINT8_MAX;
	int32_t x1138 = INT32_MIN;
	int64_t x1140 = INT64_MAX;
	volatile int32_t t77 = -3;

	t77 = (x1137<<(x1138*(x1139/x1140)));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1145 = 1972916128LLU;
	uint64_t x1146 = UINT64_MAX;
	uint32_t x1147 = 0U;
	int16_t x1148 = INT16_MIN;
	volatile uint64_t t78 = 2892570833656166943LLU;

	t78 = (x1145<<(x1146*(x1147/x1148)));

	if (t78 != 1972916128LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x1153 = 30;
	volatile int16_t x1154 = 2;
	static int8_t x1155 = -1;
	volatile int16_t x1156 = 16272;
	int32_t t79 = 1;

	t79 = (x1153<<(x1154*(x1155/x1156)));

	if (t79 != 30) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x1161 = 3U;
	uint16_t x1162 = UINT16_MAX;
	int64_t x1164 = 27414033520047186LL;
	uint32_t t80 = 59807695U;

	t80 = (x1161<<(x1162*(x1163/x1164)));

	if (t80 != 3U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x1165 = 4531U;
	static volatile int8_t x1166 = -25;
	int8_t x1167 = 1;
	volatile uint32_t t81 = 15272U;

	t81 = (x1165<<(x1166*(x1167/x1168)));

	if (t81 != 4531U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x1197 = 5334;
	volatile int32_t x1198 = -35769889;
	uint64_t x1199 = 32904781795855LLU;
	int64_t x1200 = -10428842LL;

	t82 = (x1197<<(x1198*(x1199/x1200)));

	if (t82 != 5334) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x1205 = 5753LLU;
	uint8_t x1206 = 5U;
	static uint8_t x1207 = 1U;
	uint64_t x1208 = 6LLU;
	uint64_t t83 = 2248924356123531LLU;

	t83 = (x1205<<(x1206*(x1207/x1208)));

	if (t83 != 5753LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1237 = INT32_MAX;
	int16_t x1238 = -8;
	static uint64_t x1239 = 911LLU;
	volatile int32_t t84 = INT32_MAX;

	t84 = (x1237<<(x1238*(x1239/x1240)));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x1249 = 3295447LL;
	uint64_t x1250 = 196573150388388LLU;
	int16_t x1251 = INT16_MIN;
	uint64_t x1252 = UINT64_MAX;

	t85 = (x1249<<(x1250*(x1251/x1252)));

	if (t85 != 3295447LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x1273 = UINT32_MAX;
	int8_t x1274 = INT8_MAX;
	volatile int8_t x1275 = 2;
	volatile int16_t x1276 = INT16_MIN;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = (x1273<<(x1274*(x1275/x1276)));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x1317 = 45U;
	int32_t t87 = -85242744;

	t87 = (x1317<<(x1318*(x1319/x1320)));

	if (t87 != 45) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x1333 = 29U;
	uint64_t x1335 = 7LLU;
	int32_t t88 = 1566385;

	t88 = (x1333<<(x1334*(x1335/x1336)));

	if (t88 != 29) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x1357 = UINT32_MAX;
	uint32_t x1358 = UINT32_MAX;
	volatile int16_t x1360 = INT16_MIN;
	uint32_t t89 = UINT32_MAX;

	t89 = (x1357<<(x1358*(x1359/x1360)));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x1378 = -1LL;
	static int32_t x1379 = -1;
	static volatile int32_t x1380 = INT32_MIN;

	t90 = (x1377<<(x1378*(x1379/x1380)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x1382 = INT16_MIN;
	static int8_t x1383 = INT8_MIN;
	int32_t x1384 = -439181439;
	int32_t t91 = 1404038;

	t91 = (x1381<<(x1382*(x1383/x1384)));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1390 = -3483324LL;
	uint64_t x1392 = UINT64_MAX;
	static volatile int32_t t92 = -2;

	t92 = (x1389<<(x1390*(x1391/x1392)));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x1425 = 5589754U;
	static volatile int16_t x1426 = INT16_MAX;
	uint16_t x1427 = 10U;

	t93 = (x1425<<(x1426*(x1427/x1428)));

	if (t93 != 5589754U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1453 = 18;
	int32_t x1455 = INT32_MIN;
	int64_t x1456 = INT64_MIN;
	volatile int32_t t94 = 199748;

	t94 = (x1453<<(x1454*(x1455/x1456)));

	if (t94 != 18) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1457 = INT32_MAX;
	int16_t x1458 = INT16_MAX;
	volatile uint8_t x1459 = 14U;
	uint64_t x1460 = 665LLU;
	static volatile int32_t t95 = INT32_MAX;

	t95 = (x1457<<(x1458*(x1459/x1460)));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1466 = 45930571;
	volatile uint8_t x1467 = 73U;
	uint8_t x1468 = 81U;
	static volatile int32_t t96 = -218739718;

	t96 = (x1465<<(x1466*(x1467/x1468)));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1473 = 911547U;
	uint64_t x1474 = 43455244251278LLU;
	int8_t x1475 = -1;
	int8_t x1476 = -31;
	uint32_t t97 = 33299690U;

	t97 = (x1473<<(x1474*(x1475/x1476)));

	if (t97 != 911547U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x1497 = 0U;
	int64_t x1498 = INT64_MIN;
	uint32_t x1499 = UINT32_MAX;
	static uint64_t x1500 = UINT64_MAX;
	volatile int32_t t98 = -8;

	t98 = (x1497<<(x1498*(x1499/x1500)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x1502 = INT32_MAX;
	uint16_t x1504 = 3U;
	volatile int64_t t99 = INT64_MAX;

	t99 = (x1501<<(x1502*(x1503/x1504)));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

