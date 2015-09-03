#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = 571;
static uint32_t t3 = 40U;
static uint64_t x191 = 17LLU;
static uint64_t x193 = 530241958LLU;
int32_t x194 = -668;
volatile uint64_t t6 = 10370117246LLU;
static volatile uint32_t x261 = 21U;
static volatile int8_t x302 = 3;
int32_t t14 = 118711;
int16_t x363 = -1;
volatile int32_t t15 = -3;
int32_t x370 = INT32_MIN;
int64_t x393 = INT64_MAX;
volatile uint64_t x395 = UINT64_MAX;
int32_t t19 = 476514028;
int16_t x434 = 1522;
int16_t x462 = INT16_MAX;
int32_t t21 = 854742;
int8_t x508 = INT8_MIN;
volatile uint32_t t22 = 31895608U;
static uint32_t x514 = UINT32_MAX;
uint8_t x515 = UINT8_MAX;
uint16_t x519 = UINT16_MAX;
int8_t x520 = -25;
static int32_t t25 = -12741;
static volatile int16_t x573 = 1;
uint8_t x576 = 39U;
volatile int32_t t26 = 6718464;
volatile uint64_t x653 = 44625114232948LLU;
int32_t x721 = 253;
int32_t t32 = -3;
volatile int32_t t33 = 3380;
int32_t x857 = 44;
int32_t t36 = -3718;
volatile int32_t x887 = INT32_MAX;
uint32_t x897 = UINT32_MAX;
static uint8_t x917 = 25U;
uint32_t x920 = 15U;
int8_t x950 = INT8_MIN;
uint16_t x993 = 1U;
int16_t x1010 = INT16_MAX;
int8_t x1029 = 1;
uint32_t x1047 = 291948U;
static volatile int32_t x1048 = INT32_MIN;
uint32_t x1051 = 76U;
int64_t x1060 = INT64_MIN;
uint8_t x1097 = 3U;
int16_t x1098 = 63;
uint8_t x1114 = UINT8_MAX;
volatile uint32_t t53 = 1554078U;
static int32_t x1118 = INT32_MIN;
volatile int16_t x1138 = INT16_MIN;
int16_t x1204 = INT16_MIN;
int8_t x1207 = -1;
static volatile int64_t x1208 = INT64_MAX;
volatile int64_t t58 = 18369LL;
static uint64_t t61 = 105545856LLU;
uint32_t x1293 = UINT32_MAX;
int8_t x1295 = -1;
int8_t x1297 = 23;
volatile int32_t t63 = 157;
int8_t x1378 = INT8_MAX;
int64_t x1380 = INT64_MAX;
int32_t t64 = 3462;
int16_t x1426 = INT16_MIN;
volatile uint32_t t66 = 2461879U;
static int32_t x1511 = -1;
static volatile int32_t x1530 = 0;
volatile int64_t x1532 = INT64_MIN;
int32_t x1585 = 14185741;
static int64_t x1594 = -4102LL;
int16_t x1630 = INT16_MAX;
uint16_t x1637 = 2U;
uint8_t x1657 = 49U;
uint8_t x1699 = 1U;
int32_t x1700 = INT32_MAX;
int32_t x1730 = INT32_MIN;
static volatile int8_t x1732 = INT8_MAX;
uint16_t x1741 = 967U;
int8_t x1745 = 2;
uint64_t x1748 = 690947621865LLU;
volatile int32_t x1790 = INT32_MAX;
int8_t x1792 = 5;
uint32_t x1837 = 44170487U;
static uint64_t x1841 = 15441464000516LLU;
volatile uint64_t x1843 = 1178LLU;
int16_t x1898 = -1;
volatile int64_t x1947 = -1LL;
volatile int64_t t92 = INT64_MAX;
uint32_t t95 = 112U;
int16_t x2035 = INT16_MIN;
uint64_t t98 = 29791397507LLU;
static int32_t x2087 = -1;


void f0(void) {
	volatile uint16_t x61 = 478U;
	int32_t x62 = 4;
	int16_t x63 = -1;
	int8_t x64 = 30;
	static int32_t t0 = 468;

	t0 = (x61<<(x62%(x63%x64)));

	if (t0 != 478) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x109 = 1625129U;
	uint64_t x110 = 178667632230835179LLU;
	volatile int32_t x111 = INT32_MAX;
	uint8_t x112 = 2U;
	uint32_t t1 = 57552206U;

	t1 = (x109<<(x110%(x111%x112)));

	if (t1 != 1625129U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x125 = 20U;
	uint8_t x126 = 22U;
	static volatile int32_t x127 = -1;
	uint64_t x128 = 71620536LLU;

	t2 = (x125<<(x126%(x127%x128)));

	if (t2 != 83886080) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x153 = 74153743U;
	volatile uint64_t x154 = UINT64_MAX;
	uint8_t x155 = UINT8_MAX;
	volatile int8_t x156 = INT8_MAX;

	t3 = (x153<<(x154%(x155%x156)));

	if (t3 != 74153743U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x169 = INT16_MAX;
	int64_t x170 = INT64_MAX;
	int8_t x171 = 13;
	static volatile int16_t x172 = -17;
	static int32_t t4 = -107462;

	t4 = (x169<<(x170%(x171%x172)));

	if (t4 != 4194176) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x189 = 111U;
	volatile int8_t x190 = INT8_MIN;
	int64_t x192 = INT64_MAX;
	int32_t t5 = 787244;

	t5 = (x189<<(x190%(x191%x192)));

	if (t5 != 56832) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x195 = 53U;
	static uint16_t x196 = 842U;

	t6 = (x193<<(x194%(x195%x196)));

	if (t6 != 542967764992LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x209 = 23928623U;
	static volatile int8_t x210 = INT8_MAX;
	int64_t x211 = -1LL;
	static int16_t x212 = -1385;
	static volatile uint32_t t7 = 171U;

	t7 = (x209<<(x210%(x211%x212)));

	if (t7 != 23928623U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x237 = UINT64_MAX;
	volatile int32_t x238 = 16;
	int32_t x239 = INT32_MIN;
	volatile uint32_t x240 = UINT32_MAX;
	volatile uint64_t t8 = 20LLU;

	t8 = (x237<<(x238%(x239%x240)));

	if (t8 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x262 = INT32_MIN;
	int32_t x263 = INT32_MIN;
	static int16_t x264 = INT16_MAX;
	volatile uint32_t t9 = 3906U;

	t9 = (x261<<(x262%(x263%x264)));

	if (t9 != 21U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x285 = 1543494U;
	static int8_t x286 = INT8_MIN;
	int8_t x287 = -1;
	int32_t x288 = INT32_MIN;
	static uint32_t t10 = 49162105U;

	t10 = (x285<<(x286%(x287%x288)));

	if (t10 != 1543494U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x293 = 36;
	int64_t x294 = 219727LL;
	volatile int16_t x295 = INT16_MAX;
	volatile uint32_t x296 = 693U;
	volatile int32_t t11 = 302734;

	t11 = (x293<<(x294%(x295%x296)));

	if (t11 != 73728) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x301 = UINT16_MAX;
	int32_t x303 = -6368663;
	static volatile int8_t x304 = 5;
	volatile int32_t t12 = -10731887;

	t12 = (x301<<(x302%(x303%x304)));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x305 = 47U;
	static int32_t x306 = INT32_MIN;
	volatile uint8_t x307 = 1U;
	static int8_t x308 = INT8_MAX;
	volatile int32_t t13 = -69;

	t13 = (x305<<(x306%(x307%x308)));

	if (t13 != 47) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x341 = 4083;
	static volatile uint16_t x342 = 11U;
	uint32_t x343 = 2078623U;
	volatile uint8_t x344 = 2U;

	t14 = (x341<<(x342%(x343%x344)));

	if (t14 != 4083) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x361 = UINT8_MAX;
	static volatile int64_t x362 = INT64_MIN;
	int64_t x364 = INT64_MIN;

	t15 = (x361<<(x362%(x363%x364)));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x369 = INT32_MAX;
	int64_t x371 = -1LL;
	static int8_t x372 = INT8_MIN;
	int32_t t16 = INT32_MAX;

	t16 = (x369<<(x370%(x371%x372)));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x394 = 0U;
	int64_t x396 = 2LL;
	volatile int64_t t17 = INT64_MAX;

	t17 = (x393<<(x394%(x395%x396)));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x405 = INT32_MAX;
	int16_t x406 = INT16_MIN;
	static int16_t x407 = INT16_MAX;
	int16_t x408 = -41;
	volatile int32_t t18 = INT32_MAX;

	t18 = (x405<<(x406%(x407%x408)));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x425 = INT8_MAX;
	int8_t x426 = 5;
	volatile int64_t x427 = INT64_MAX;
	static int64_t x428 = INT64_MIN;

	t19 = (x425<<(x426%(x427%x428)));

	if (t19 != 4064) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x433 = 0;
	static uint32_t x435 = UINT32_MAX;
	static int32_t x436 = INT32_MAX;
	volatile int32_t t20 = 8277461;

	t20 = (x433<<(x434%(x435%x436)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x461 = INT16_MAX;
	int16_t x463 = INT16_MAX;
	static volatile int64_t x464 = INT64_MAX;

	t21 = (x461<<(x462%(x463%x464)));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x505 = 88523596U;
	volatile int8_t x506 = -1;
	int8_t x507 = -1;

	t22 = (x505<<(x506%(x507%x508)));

	if (t22 != 88523596U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x513 = UINT8_MAX;
	uint32_t x516 = UINT32_MAX;
	volatile int32_t t23 = -10;

	t23 = (x513<<(x514%(x515%x516)));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x517 = 18266560LLU;
	volatile uint8_t x518 = 1U;
	uint64_t t24 = 1146846048297647025LLU;

	t24 = (x517<<(x518%(x519%x520)));

	if (t24 != 36533120LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x537 = 2U;
	static volatile uint16_t x538 = 9U;
	uint8_t x539 = 43U;
	uint32_t x540 = 25U;

	t25 = (x537<<(x538%(x539%x540)));

	if (t25 != 1024) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x574 = INT32_MIN;
	uint32_t x575 = UINT32_MAX;

	t26 = (x573<<(x574%(x575%x576)));

	if (t26 != 4) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x601 = 30514U;
	int64_t x602 = 3137691787642LL;
	volatile int64_t x603 = -1LL;
	int64_t x604 = INT64_MIN;
	static int32_t t27 = -12;

	t27 = (x601<<(x602%(x603%x604)));

	if (t27 != 30514) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x613 = UINT8_MAX;
	static int16_t x614 = 0;
	int64_t x615 = INT64_MIN;
	static uint32_t x616 = 1015010U;
	static int32_t t28 = 14961;

	t28 = (x613<<(x614%(x615%x616)));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x645 = 246565LLU;
	uint8_t x646 = 15U;
	int16_t x647 = INT16_MIN;
	int8_t x648 = 36;
	volatile uint64_t t29 = 93736898712LLU;

	t29 = (x645<<(x646%(x647%x648)));

	if (t29 != 31560320LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x654 = UINT8_MAX;
	static int8_t x655 = -39;
	int32_t x656 = INT32_MIN;
	uint64_t t30 = 2300380093261LLU;

	t30 = (x653<<(x654%(x655%x656)));

	if (t30 != 1351927195307606016LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x701 = 10408889902784201LLU;
	volatile uint32_t x702 = 7U;
	volatile int16_t x703 = -1;
	int64_t x704 = INT64_MIN;
	uint64_t t31 = 5408670655254542140LLU;

	t31 = (x701<<(x702%(x703%x704)));

	if (t31 != 10408889902784201LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x722 = 9742U;
	int8_t x723 = -1;
	int64_t x724 = 58LL;

	t32 = (x721<<(x722%(x723%x724)));

	if (t32 != 253) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x801 = UINT8_MAX;
	int8_t x802 = -1;
	int64_t x803 = -1LL;
	static volatile int32_t x804 = 12665;

	t33 = (x801<<(x802%(x803%x804)));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x805 = 22U;
	uint64_t x806 = UINT64_MAX;
	static uint64_t x807 = 5LLU;
	int16_t x808 = -1;
	volatile int32_t t34 = 3202114;

	t34 = (x805<<(x806%(x807%x808)));

	if (t34 != 22) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x809 = 36398727LL;
	int8_t x810 = INT8_MIN;
	int8_t x811 = -1;
	uint16_t x812 = UINT16_MAX;
	int64_t t35 = 1622426LL;

	t35 = (x809<<(x810%(x811%x812)));

	if (t35 != 36398727LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x858 = INT64_MAX;
	int64_t x859 = INT64_MAX;
	int8_t x860 = INT8_MIN;

	t36 = (x857<<(x858%(x859%x860)));

	if (t36 != 44) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x885 = UINT8_MAX;
	uint16_t x886 = 102U;
	uint16_t x888 = 5U;
	int32_t t37 = -4564;

	t37 = (x885<<(x886%(x887%x888)));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x898 = INT64_MAX;
	int16_t x899 = -8116;
	static uint32_t x900 = 7053U;
	uint32_t t38 = 57034232U;

	t38 = (x897<<(x898%(x899%x900)));

	if (t38 != 2147483648U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x918 = 85LLU;
	uint64_t x919 = 746165073972LLU;
	volatile int32_t t39 = 872306;

	t39 = (x917<<(x918%(x919%x920)));

	if (t39 != 50) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x933 = UINT64_MAX;
	volatile int16_t x934 = INT16_MIN;
	int8_t x935 = INT8_MIN;
	static int64_t x936 = INT64_MIN;
	static volatile uint64_t t40 = UINT64_MAX;

	t40 = (x933<<(x934%(x935%x936)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x949 = 3U;
	int16_t x951 = 7934;
	int32_t x952 = 13;
	int32_t t41 = -1;

	t41 = (x949<<(x950%(x951%x952)));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x953 = 2U;
	int32_t x954 = -1;
	static volatile int16_t x955 = INT16_MAX;
	uint32_t x956 = UINT32_MAX;
	int32_t t42 = -996;

	t42 = (x953<<(x954%(x955%x956)));

	if (t42 != 16) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x977 = INT8_MAX;
	uint32_t x978 = 6470823U;
	int64_t x979 = -1LL;
	int16_t x980 = INT16_MIN;
	int32_t t43 = 2920;

	t43 = (x977<<(x978%(x979%x980)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x994 = 29U;
	volatile int16_t x995 = INT16_MAX;
	int64_t x996 = INT64_MAX;
	volatile int32_t t44 = 47268;

	t44 = (x993<<(x994%(x995%x996)));

	if (t44 != 536870912) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1009 = INT16_MAX;
	static int64_t x1011 = -1LL;
	int32_t x1012 = INT32_MIN;
	int32_t t45 = -65125;

	t45 = (x1009<<(x1010%(x1011%x1012)));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x1013 = 399963729LL;
	int16_t x1014 = -2033;
	uint32_t x1015 = 5U;
	int32_t x1016 = INT32_MIN;
	int64_t t46 = -102864917573355585LL;

	t46 = (x1013<<(x1014%(x1015%x1016)));

	if (t46 != 3199709832LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x1030 = UINT8_MAX;
	uint8_t x1031 = 4U;
	int64_t x1032 = 8856476136068LL;
	int32_t t47 = 0;

	t47 = (x1029<<(x1030%(x1031%x1032)));

	if (t47 != 8) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x1045 = 20500508U;
	int16_t x1046 = 3;
	volatile uint32_t t48 = 30092U;

	t48 = (x1045<<(x1046%(x1047%x1048)));

	if (t48 != 164004064U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1049 = UINT8_MAX;
	int32_t x1050 = -1;
	static int8_t x1052 = 14;
	int32_t t49 = -24816257;

	t49 = (x1049<<(x1050%(x1051%x1052)));

	if (t49 != 2040) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1057 = 0;
	int16_t x1058 = INT16_MIN;
	uint64_t x1059 = 2LLU;
	int32_t t50 = -3;

	t50 = (x1057<<(x1058%(x1059%x1060)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x1089 = UINT64_MAX;
	int32_t x1090 = INT32_MIN;
	int8_t x1091 = INT8_MIN;
	int16_t x1092 = INT16_MIN;
	static uint64_t t51 = UINT64_MAX;

	t51 = (x1089<<(x1090%(x1091%x1092)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1099 = INT32_MIN;
	uint64_t x1100 = 47LLU;
	static int32_t t52 = 1;

	t52 = (x1097<<(x1098%(x1099%x1100)));

	if (t52 != 24) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1113 = UINT32_MAX;
	static int16_t x1115 = INT16_MAX;
	int8_t x1116 = INT8_MIN;

	t53 = (x1113<<(x1114%(x1115%x1116)));

	if (t53 != 4294967294U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x1117 = UINT32_MAX;
	volatile int8_t x1119 = INT8_MIN;
	uint16_t x1120 = 193U;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (x1117<<(x1118%(x1119%x1120)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x1137 = 0U;
	uint16_t x1139 = 1U;
	volatile uint16_t x1140 = 13973U;
	volatile int32_t t55 = 2;

	t55 = (x1137<<(x1138%(x1139%x1140)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x1157 = UINT16_MAX;
	static int32_t x1158 = 0;
	int64_t x1159 = -1LL;
	static uint16_t x1160 = 14153U;
	volatile int32_t t56 = -1;

	t56 = (x1157<<(x1158%(x1159%x1160)));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1201 = UINT64_MAX;
	int8_t x1202 = INT8_MAX;
	volatile int32_t x1203 = 7;
	uint64_t t57 = 89976234163688974LLU;

	t57 = (x1201<<(x1202%(x1203%x1204)));

	if (t57 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x1205 = 236306943276971230LL;
	int8_t x1206 = INT8_MIN;

	t58 = (x1205<<(x1206%(x1207%x1208)));

	if (t58 != 236306943276971230LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1213 = 4201276814021635723LLU;
	static int32_t x1214 = INT32_MAX;
	uint64_t x1215 = 12LLU;
	int32_t x1216 = INT32_MIN;
	uint64_t t59 = 33488958217722513LLU;

	t59 = (x1213<<(x1214%(x1215%x1216)));

	if (t59 != 2807854057192375680LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x1241 = 1312162404U;
	int16_t x1242 = INT16_MAX;
	int16_t x1243 = -1;
	int32_t x1244 = INT32_MAX;
	volatile uint32_t t60 = 1282U;

	t60 = (x1241<<(x1242%(x1243%x1244)));

	if (t60 != 1312162404U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1257 = 2276085466424128LLU;
	uint32_t x1258 = 0U;
	volatile uint16_t x1259 = UINT16_MAX;
	static volatile int64_t x1260 = INT64_MIN;

	t61 = (x1257<<(x1258%(x1259%x1260)));

	if (t61 != 2276085466424128LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1294 = INT8_MIN;
	static int32_t x1296 = INT32_MIN;
	volatile uint32_t t62 = UINT32_MAX;

	t62 = (x1293<<(x1294%(x1295%x1296)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1298 = 2116;
	volatile int64_t x1299 = -63348729537449965LL;
	int8_t x1300 = INT8_MAX;

	t63 = (x1297<<(x1298%(x1299%x1300)));

	if (t63 != 23) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x1377 = 0U;
	static int64_t x1379 = INT64_MIN;

	t64 = (x1377<<(x1378%(x1379%x1380)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1425 = 29684585861451486LLU;
	uint64_t x1427 = UINT64_MAX;
	int64_t x1428 = INT64_MAX;
	uint64_t t65 = 4908438737225901LLU;

	t65 = (x1425<<(x1426%(x1427%x1428)));

	if (t65 != 29684585861451486LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1485 = UINT32_MAX;
	int8_t x1486 = 18;
	uint16_t x1487 = UINT16_MAX;
	volatile int16_t x1488 = INT16_MIN;

	t66 = (x1485<<(x1486%(x1487%x1488)));

	if (t66 != 4294705152U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x1509 = UINT8_MAX;
	uint64_t x1510 = 0LLU;
	uint16_t x1512 = UINT16_MAX;
	int32_t t67 = -5927;

	t67 = (x1509<<(x1510%(x1511%x1512)));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x1529 = 213367LL;
	static int64_t x1531 = INT64_MAX;
	int64_t t68 = -18477276828LL;

	t68 = (x1529<<(x1530%(x1531%x1532)));

	if (t68 != 213367LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x1586 = INT64_MAX;
	int16_t x1587 = INT16_MAX;
	volatile uint16_t x1588 = UINT16_MAX;
	static int32_t t69 = 84568147;

	t69 = (x1585<<(x1586%(x1587%x1588)));

	if (t69 != 1815774848) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x1593 = INT8_MAX;
	int8_t x1595 = 1;
	int8_t x1596 = INT8_MIN;
	int32_t t70 = -38917483;

	t70 = (x1593<<(x1594%(x1595%x1596)));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x1597 = 7LLU;
	static int32_t x1598 = -1;
	int32_t x1599 = INT32_MIN;
	static int32_t x1600 = INT32_MAX;
	volatile uint64_t t71 = 8075923733877LLU;

	t71 = (x1597<<(x1598%(x1599%x1600)));

	if (t71 != 7LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x1617 = 86U;
	uint16_t x1618 = 247U;
	static int16_t x1619 = -28;
	static uint16_t x1620 = 11434U;
	uint32_t t72 = 3U;

	t72 = (x1617<<(x1618%(x1619%x1620)));

	if (t72 != 721420288U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x1629 = 394;
	int8_t x1631 = -2;
	int64_t x1632 = INT64_MIN;
	volatile int32_t t73 = -44;

	t73 = (x1629<<(x1630%(x1631%x1632)));

	if (t73 != 788) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x1638 = INT32_MAX;
	uint8_t x1639 = 16U;
	int16_t x1640 = 3;
	int32_t t74 = -508907;

	t74 = (x1637<<(x1638%(x1639%x1640)));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x1645 = 17;
	uint16_t x1646 = 12U;
	int32_t x1647 = -1;
	volatile uint32_t x1648 = 345U;
	int32_t t75 = 421;

	t75 = (x1645<<(x1646%(x1647%x1648)));

	if (t75 != 69632) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1658 = 1U;
	static volatile uint64_t x1659 = 554615666055360509LLU;
	int16_t x1660 = INT16_MAX;
	static int32_t t76 = 4436;

	t76 = (x1657<<(x1658%(x1659%x1660)));

	if (t76 != 98) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x1693 = UINT64_MAX;
	int8_t x1694 = 5;
	int32_t x1695 = 3455;
	static uint32_t x1696 = 11938468U;
	static uint64_t t77 = 24LLU;

	t77 = (x1693<<(x1694%(x1695%x1696)));

	if (t77 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x1697 = 3U;
	volatile uint16_t x1698 = UINT16_MAX;
	static int32_t t78 = -297714458;

	t78 = (x1697<<(x1698%(x1699%x1700)));

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1705 = UINT16_MAX;
	int8_t x1706 = 15;
	int64_t x1707 = INT64_MAX;
	uint16_t x1708 = 21U;
	volatile int32_t t79 = 40;

	t79 = (x1705<<(x1706%(x1707%x1708)));

	if (t79 != 131070) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x1729 = 2U;
	int64_t x1731 = INT64_MIN;
	volatile uint32_t t80 = 21259U;

	t80 = (x1729<<(x1730%(x1731%x1732)));

	if (t80 != 2U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x1737 = UINT32_MAX;
	int64_t x1738 = INT64_MAX;
	uint16_t x1739 = 30077U;
	uint8_t x1740 = 49U;
	volatile uint32_t t81 = 5373U;

	t81 = (x1737<<(x1738%(x1739%x1740)));

	if (t81 != 4294967168U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x1742 = INT64_MIN;
	uint8_t x1743 = 4U;
	static int16_t x1744 = 3;
	int32_t t82 = -7;

	t82 = (x1741<<(x1742%(x1743%x1744)));

	if (t82 != 967) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1746 = 7;
	uint64_t x1747 = 869LLU;
	volatile int32_t t83 = 100551;

	t83 = (x1745<<(x1746%(x1747%x1748)));

	if (t83 != 256) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1761 = 1;
	int64_t x1762 = 405225LL;
	int8_t x1763 = 36;
	uint8_t x1764 = UINT8_MAX;
	int32_t t84 = 0;

	t84 = (x1761<<(x1762%(x1763%x1764)));

	if (t84 != 512) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x1765 = 1U;
	static volatile uint32_t x1766 = 993U;
	uint8_t x1767 = 7U;
	uint64_t x1768 = 267622613831LLU;
	volatile int32_t t85 = -994;

	t85 = (x1765<<(x1766%(x1767%x1768)));

	if (t85 != 64) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x1789 = 884;
	int8_t x1791 = INT8_MIN;
	int32_t t86 = -362;

	t86 = (x1789<<(x1790%(x1791%x1792)));

	if (t86 != 1768) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x1797 = INT16_MAX;
	int64_t x1798 = 0LL;
	int16_t x1799 = INT16_MIN;
	int8_t x1800 = INT8_MAX;
	int32_t t87 = 1823;

	t87 = (x1797<<(x1798%(x1799%x1800)));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1838 = UINT64_MAX;
	uint32_t x1839 = UINT32_MAX;
	uint16_t x1840 = 14U;
	uint32_t t88 = 87120U;

	t88 = (x1837<<(x1838%(x1839%x1840)));

	if (t88 != 44170487U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x1842 = INT32_MIN;
	int64_t x1844 = INT64_MIN;
	uint64_t t89 = 490568LLU;

	t89 = (x1841<<(x1842%(x1843%x1844)));

	if (t89 != 252992946184454144LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x1897 = 29U;
	static int32_t x1899 = -1;
	uint64_t x1900 = 223LLU;
	volatile int32_t t90 = 2449133;

	t90 = (x1897<<(x1898%(x1899%x1900)));

	if (t90 != 950272) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x1945 = 3U;
	uint8_t x1946 = 3U;
	volatile uint16_t x1948 = 687U;
	int32_t t91 = -3283;

	t91 = (x1945<<(x1946%(x1947%x1948)));

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x1949 = INT64_MAX;
	uint16_t x1950 = UINT16_MAX;
	volatile uint32_t x1951 = UINT32_MAX;
	int64_t x1952 = -84LL;

	t92 = (x1949<<(x1950%(x1951%x1952)));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1969 = 1;
	uint16_t x1970 = 27U;
	volatile int8_t x1971 = INT8_MIN;
	int32_t x1972 = INT32_MIN;
	int32_t t93 = -1026259;

	t93 = (x1969<<(x1970%(x1971%x1972)));

	if (t93 != 134217728) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x1993 = 211U;
	int16_t x1994 = INT16_MAX;
	int16_t x1995 = 22;
	uint8_t x1996 = 15U;
	int32_t t94 = -20507;

	t94 = (x1993<<(x1994%(x1995%x1996)));

	if (t94 != 211) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x2021 = 378861U;
	uint8_t x2022 = UINT8_MAX;
	int8_t x2023 = -4;
	volatile int64_t x2024 = INT64_MIN;

	t95 = (x2021<<(x2022%(x2023%x2024)));

	if (t95 != 3030888U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2033 = UINT64_MAX;
	uint16_t x2034 = UINT16_MAX;
	volatile uint8_t x2036 = 124U;
	static uint64_t t96 = 9724697560657LLU;

	t96 = (x2033<<(x2034%(x2035%x2036)));

	if (t96 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x2037 = 9;
	int16_t x2038 = -1;
	int8_t x2039 = -1;
	static uint8_t x2040 = UINT8_MAX;
	int32_t t97 = 97146722;

	t97 = (x2037<<(x2038%(x2039%x2040)));

	if (t97 != 9) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x2053 = 572LLU;
	int64_t x2054 = 32777181399LL;
	int8_t x2055 = 3;
	uint16_t x2056 = 6U;

	t98 = (x2053<<(x2054%(x2055%x2056)));

	if (t98 != 572LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x2085 = UINT32_MAX;
	int16_t x2086 = 1928;
	volatile int32_t x2088 = INT32_MIN;
	uint32_t t99 = UINT32_MAX;

	t99 = (x2085<<(x2086%(x2087%x2088)));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

