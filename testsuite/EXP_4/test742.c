#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x21 = -447109;
int64_t x129 = -1LL;
static int32_t x131 = 3;
int16_t x132 = INT16_MAX;
volatile int32_t t5 = 15;
static uint8_t x201 = 3U;
int32_t x212 = INT32_MIN;
uint32_t t7 = 612U;
static volatile uint8_t x247 = 21U;
int8_t x285 = INT8_MAX;
static volatile uint32_t x287 = 57U;
int32_t t9 = -854210;
int16_t x293 = INT16_MIN;
uint8_t x322 = 10U;
uint8_t x361 = 32U;
static int8_t x365 = -1;
int64_t x367 = 12LL;
volatile int64_t x386 = 90163116447LL;
static volatile int64_t x387 = INT64_MIN;
int32_t x461 = -1;
int32_t x463 = INT32_MAX;
int64_t t16 = 15210034880504656LL;
volatile uint32_t t19 = 6404U;
volatile int64_t t20 = -814566LL;
int16_t x579 = INT16_MIN;
static int32_t t21 = -1007078;
static uint8_t x599 = UINT8_MAX;
int8_t x600 = -1;
volatile uint16_t x607 = 64U;
int32_t t24 = -3;
static volatile int64_t t25 = 441068185LL;
static uint8_t x646 = 73U;
int32_t x651 = 1;
int32_t x685 = 1;
volatile uint16_t x686 = 294U;
static int8_t x687 = INT8_MIN;
int16_t x688 = -1;
int32_t x704 = INT32_MIN;
static volatile uint32_t x734 = UINT32_MAX;
int32_t x735 = 9;
int16_t x736 = 12;
int64_t t31 = -103393804051946LL;
static volatile int32_t x737 = -2013;
int16_t x763 = INT16_MAX;
int64_t x764 = 7LL;
volatile int32_t t34 = 1;
uint32_t x814 = 55U;
volatile uint32_t t37 = 13809788U;
static int8_t x848 = -1;
int64_t x865 = 654171804LL;
volatile uint16_t x868 = 13520U;
int16_t x884 = INT16_MIN;
int16_t x886 = 51;
int64_t x887 = INT64_MAX;
static int32_t x901 = INT32_MAX;
volatile int32_t x904 = -1;
volatile int64_t t44 = 1586151370166721864LL;
volatile int16_t x926 = 1;
volatile int64_t x1027 = INT64_MAX;
volatile uint16_t x1066 = UINT16_MAX;
int8_t x1068 = -1;
int16_t x1117 = INT16_MIN;
int16_t x1123 = INT16_MIN;
int32_t t56 = -7062810;
int64_t t57 = -685714338LL;
uint64_t x1277 = 8125588148LLU;
int32_t x1278 = INT32_MAX;
static volatile uint64_t t59 = 3053807083564LLU;
int32_t x1283 = INT32_MIN;
volatile int32_t t60 = 7281752;
volatile int32_t t61 = 15;
int16_t x1317 = INT16_MIN;
volatile int32_t x1357 = 44252;
volatile int8_t x1366 = 0;
uint8_t x1367 = 0U;
static int64_t x1410 = 3LL;
int32_t x1445 = INT32_MIN;
int8_t x1458 = INT8_MAX;
static int32_t x1493 = 13125364;
uint64_t x1494 = 105988189419539LLU;
int8_t x1495 = -1;
uint8_t x1508 = 8U;
uint32_t t70 = 178459U;
int8_t x1541 = 4;
uint64_t t72 = 11974471LLU;
int8_t x1569 = INT8_MIN;
int8_t x1662 = INT8_MAX;
volatile uint64_t x1716 = UINT64_MAX;
volatile int16_t x1729 = INT16_MIN;
int32_t x1733 = INT32_MIN;
volatile uint8_t x1734 = UINT8_MAX;
int16_t x1855 = 8735;
int64_t x1856 = -1LL;
uint32_t x1901 = UINT32_MAX;
int16_t x1957 = 27;
int8_t x1969 = 0;
uint16_t x1970 = 3U;
static int16_t x1974 = 4;
volatile uint32_t t92 = 592005992U;
static uint64_t x2114 = 503947003216LLU;
int8_t x2116 = -1;
uint64_t t97 = 1577412694995663LLU;
static int32_t x2133 = -50909;


void f0(void) {
	uint32_t x22 = 6196605U;
	uint32_t x23 = 4U;
	uint8_t x24 = 1U;
	static uint32_t t0 = 7030457U;

	t0 = (x21+(x22<<(x23%x24)));

	if (t0 != 5749496U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x29 = -877;
	uint32_t x30 = 1336U;
	int32_t x31 = INT32_MIN;
	static int8_t x32 = INT8_MIN;
	volatile uint32_t t1 = 25219844U;

	t1 = (x29+(x30<<(x31%x32)));

	if (t1 != 459U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x69 = 41U;
	volatile uint8_t x70 = 30U;
	uint8_t x71 = 11U;
	static volatile int16_t x72 = INT16_MIN;
	volatile int32_t t2 = -483940832;

	t2 = (x69+(x70<<(x71%x72)));

	if (t2 != 61481) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x89 = INT8_MIN;
	volatile int16_t x90 = INT16_MAX;
	volatile int64_t x91 = INT64_MAX;
	static int16_t x92 = -1;
	static volatile int32_t t3 = -395460847;

	t3 = (x89+(x90<<(x91%x92)));

	if (t3 != 32639) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x130 = 718U;
	volatile int64_t t4 = -715057LL;

	t4 = (x129+(x130<<(x131%x132)));

	if (t4 != 5743LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x133 = -1;
	uint8_t x134 = 13U;
	int32_t x135 = INT32_MAX;
	int8_t x136 = -1;

	t5 = (x133+(x134<<(x135%x136)));

	if (t5 != 12) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x202 = 109544LLU;
	static int32_t x203 = INT32_MAX;
	int32_t x204 = -36;
	uint64_t t6 = 8LLU;

	t6 = (x201+(x202<<(x203%x204)));

	if (t6 != 57432604675LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x209 = INT8_MAX;
	uint32_t x210 = 187U;
	int32_t x211 = INT32_MIN;

	t7 = (x209+(x210<<(x211%x212)));

	if (t7 != 314U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x245 = 17U;
	uint8_t x246 = UINT8_MAX;
	int32_t x248 = INT32_MIN;
	volatile uint32_t t8 = 75405207U;

	t8 = (x245+(x246<<(x247%x248)));

	if (t8 != 534773777U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x286 = INT8_MAX;
	uint8_t x288 = 14U;

	t9 = (x285+(x286<<(x287%x288)));

	if (t9 != 381) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x294 = UINT16_MAX;
	int16_t x295 = 1;
	uint64_t x296 = 8449361295LLU;
	static int32_t t10 = -1954475;

	t10 = (x293+(x294<<(x295%x296)));

	if (t10 != 98302) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x321 = INT64_MIN;
	int16_t x323 = 0;
	static uint8_t x324 = 58U;
	volatile int64_t t11 = -55089481LL;

	t11 = (x321+(x322<<(x323%x324)));

	if (t11 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x362 = 963U;
	static int64_t x363 = 12834726393LL;
	static uint16_t x364 = 4U;
	volatile int32_t t12 = -3;

	t12 = (x361+(x362<<(x363%x364)));

	if (t12 != 1958) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x366 = 9U;
	int8_t x368 = -1;
	volatile int32_t t13 = 21484;

	t13 = (x365+(x366<<(x367%x368)));

	if (t13 != 8) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x385 = -1;
	volatile uint8_t x388 = 1U;
	volatile int64_t t14 = -300041502669780123LL;

	t14 = (x385+(x386<<(x387%x388)));

	if (t14 != 90163116446LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x393 = -1317;
	int64_t x394 = INT64_MAX;
	int32_t x395 = INT32_MAX;
	static int16_t x396 = 1;
	static int64_t t15 = 9088532394902722LL;

	t15 = (x393+(x394<<(x395%x396)));

	if (t15 != 9223372036854774490LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x462 = 0LL;
	volatile uint8_t x464 = 2U;

	t16 = (x461+(x462<<(x463%x464)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x465 = 923537051524LL;
	static int16_t x466 = 1;
	int8_t x467 = INT8_MIN;
	int32_t x468 = -1;
	static int64_t t17 = 786561LL;

	t17 = (x465+(x466<<(x467%x468)));

	if (t17 != 923537051525LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x509 = 25;
	int8_t x510 = 1;
	int64_t x511 = INT64_MAX;
	int8_t x512 = INT8_MAX;
	int32_t t18 = -2577;

	t18 = (x509+(x510<<(x511%x512)));

	if (t18 != 26) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x521 = 1341262U;
	volatile uint16_t x522 = UINT16_MAX;
	static uint32_t x523 = 11577954U;
	uint8_t x524 = 28U;

	t19 = (x521+(x522<<(x523%x524)));

	if (t19 != 68449102U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x573 = INT64_MIN;
	uint16_t x574 = UINT16_MAX;
	int64_t x575 = INT64_MIN;
	int32_t x576 = -1;

	t20 = (x573+(x574<<(x575%x576)));

	if (t20 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x577 = UINT8_MAX;
	int32_t x578 = 129217957;
	int16_t x580 = INT16_MIN;

	t21 = (x577+(x578<<(x579%x580)));

	if (t21 != 129218212) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x597 = -1;
	uint32_t x598 = UINT32_MAX;
	static uint32_t t22 = 27917U;

	t22 = (x597+(x598<<(x599%x600)));

	if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x605 = INT32_MIN;
	static int64_t x606 = 866LL;
	int32_t x608 = 1;
	int64_t t23 = -57759LL;

	t23 = (x605+(x606<<(x607%x608)));

	if (t23 != -2147482782LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x625 = INT8_MIN;
	static volatile int16_t x626 = 2160;
	int16_t x627 = INT16_MIN;
	static int16_t x628 = -1;

	t24 = (x625+(x626<<(x627%x628)));

	if (t24 != 2032) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x637 = INT64_MIN;
	int8_t x638 = 1;
	int32_t x639 = 943165152;
	int32_t x640 = 1;

	t25 = (x637+(x638<<(x639%x640)));

	if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x645 = -1;
	int16_t x647 = INT16_MIN;
	int8_t x648 = -1;
	volatile int32_t t26 = 8925;

	t26 = (x645+(x646<<(x647%x648)));

	if (t26 != 72) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x649 = UINT8_MAX;
	int16_t x650 = INT16_MAX;
	volatile int64_t x652 = 146240LL;
	int32_t t27 = -10043099;

	t27 = (x649+(x650<<(x651%x652)));

	if (t27 != 65789) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t t28 = 1;

	t28 = (x685+(x686<<(x687%x688)));

	if (t28 != 295) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x693 = -1;
	uint32_t x694 = 93395727U;
	static int16_t x695 = INT16_MIN;
	int32_t x696 = -1;
	volatile uint32_t t29 = 602U;

	t29 = (x693+(x694<<(x695%x696)));

	if (t29 != 93395726U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x701 = INT8_MAX;
	uint16_t x702 = UINT16_MAX;
	volatile int64_t x703 = INT64_MIN;
	volatile int32_t t30 = 6948;

	t30 = (x701+(x702<<(x703%x704)));

	if (t30 != 65662) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x733 = INT64_MIN;

	t31 = (x733+(x734<<(x735%x736)));

	if (t31 != -9223372032559809024LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x738 = 45U;
	int16_t x739 = -1;
	int8_t x740 = -1;
	int32_t t32 = 3804;

	t32 = (x737+(x738<<(x739%x740)));

	if (t32 != -1968) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x745 = 4395U;
	uint16_t x746 = 95U;
	int64_t x747 = 24986104LL;
	volatile int8_t x748 = 1;
	int32_t t33 = -24480;

	t33 = (x745+(x746<<(x747%x748)));

	if (t33 != 4490) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x761 = INT32_MIN;
	static uint8_t x762 = UINT8_MAX;

	t34 = (x761+(x762<<(x763%x764)));

	if (t34 != -2147483393) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x773 = INT32_MIN;
	volatile uint16_t x774 = 1U;
	int32_t x775 = INT32_MIN;
	int16_t x776 = INT16_MIN;
	int32_t t35 = -672226;

	t35 = (x773+(x774<<(x775%x776)));

	if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x785 = -1;
	int8_t x786 = INT8_MAX;
	uint16_t x787 = 2094U;
	volatile int64_t x788 = -1LL;
	volatile int32_t t36 = 200158;

	t36 = (x785+(x786<<(x787%x788)));

	if (t36 != 126) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x813 = 7U;
	int64_t x815 = INT64_MIN;
	static int64_t x816 = INT64_MIN;

	t37 = (x813+(x814<<(x815%x816)));

	if (t37 != 62U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x845 = -204337LL;
	int32_t x846 = INT32_MAX;
	int32_t x847 = -33;
	int64_t t38 = 6781500425LL;

	t38 = (x845+(x846<<(x847%x848)));

	if (t38 != 2147279310LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x861 = 29714U;
	int8_t x862 = 7;
	static uint32_t x863 = UINT32_MAX;
	int16_t x864 = 62;
	static int32_t t39 = -2490;

	t39 = (x861+(x862<<(x863%x864)));

	if (t39 != 29770) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x866 = 16;
	uint8_t x867 = 1U;
	int64_t t40 = -24834721429707LL;

	t40 = (x865+(x866<<(x867%x868)));

	if (t40 != 654171836LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x877 = INT16_MIN;
	static int64_t x878 = 1003140669918LL;
	int32_t x879 = 0;
	int64_t x880 = INT64_MIN;
	static volatile int64_t t41 = -688521LL;

	t41 = (x877+(x878<<(x879%x880)));

	if (t41 != 1003140637150LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x881 = UINT64_MAX;
	uint8_t x882 = 78U;
	int16_t x883 = INT16_MIN;
	volatile uint64_t t42 = 34774538416540LLU;

	t42 = (x881+(x882<<(x883%x884)));

	if (t42 != 77LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x885 = 515720LLU;
	int64_t x888 = 7LL;
	volatile uint64_t t43 = 1805213382LLU;

	t43 = (x885+(x886<<(x887%x888)));

	if (t43 != 515771LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x902 = 12LL;
	volatile int32_t x903 = INT32_MAX;

	t44 = (x901+(x902<<(x903%x904)));

	if (t44 != 2147483659LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x925 = UINT8_MAX;
	int32_t x927 = 1;
	uint32_t x928 = 149927U;
	int32_t t45 = -127662;

	t45 = (x925+(x926<<(x927%x928)));

	if (t45 != 257) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x937 = INT64_MIN;
	volatile int16_t x938 = INT16_MAX;
	volatile uint32_t x939 = 83178U;
	int64_t x940 = -1LL;
	int64_t t46 = 0LL;

	t46 = (x937+(x938<<(x939%x940)));

	if (t46 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x969 = UINT16_MAX;
	uint64_t x970 = 8127LLU;
	int16_t x971 = 0;
	int8_t x972 = INT8_MIN;
	uint64_t t47 = 810046453668LLU;

	t47 = (x969+(x970<<(x971%x972)));

	if (t47 != 73662LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x977 = INT16_MAX;
	volatile uint32_t x978 = 773602U;
	int8_t x979 = INT8_MIN;
	volatile int8_t x980 = INT8_MIN;
	volatile uint32_t t48 = 2U;

	t48 = (x977+(x978<<(x979%x980)));

	if (t48 != 806369U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x981 = 8U;
	static uint16_t x982 = UINT16_MAX;
	volatile int64_t x983 = INT64_MIN;
	int8_t x984 = 16;
	static int32_t t49 = -14505;

	t49 = (x981+(x982<<(x983%x984)));

	if (t49 != 65543) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1025 = UINT64_MAX;
	static uint16_t x1026 = 4U;
	int16_t x1028 = INT16_MAX;
	static volatile uint64_t t50 = 1331189306069LLU;

	t50 = (x1025+(x1026<<(x1027%x1028)));

	if (t50 != 511LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1057 = 7298U;
	int64_t x1058 = 10801262189LL;
	int64_t x1059 = -16LL;
	volatile int64_t x1060 = -1LL;
	static volatile int64_t t51 = 821998085785308733LL;

	t51 = (x1057+(x1058<<(x1059%x1060)));

	if (t51 != 10801269487LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x1065 = -16;
	int32_t x1067 = INT32_MIN;
	int32_t t52 = -695938;

	t52 = (x1065+(x1066<<(x1067%x1068)));

	if (t52 != 65519) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x1109 = INT64_MIN;
	uint16_t x1110 = 37U;
	static int8_t x1111 = INT8_MAX;
	volatile int64_t x1112 = -1LL;
	volatile int64_t t53 = -23827LL;

	t53 = (x1109+(x1110<<(x1111%x1112)));

	if (t53 != -9223372036854775771LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1118 = INT8_MAX;
	uint16_t x1119 = UINT16_MAX;
	uint8_t x1120 = UINT8_MAX;
	volatile int32_t t54 = -18404955;

	t54 = (x1117+(x1118<<(x1119%x1120)));

	if (t54 != -32641) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1121 = INT64_MIN;
	int8_t x1122 = 2;
	static volatile int16_t x1124 = INT16_MIN;
	static volatile int64_t t55 = 58511908856LL;

	t55 = (x1121+(x1122<<(x1123%x1124)));

	if (t55 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1193 = INT32_MIN;
	static int8_t x1194 = INT8_MAX;
	int8_t x1195 = 0;
	uint16_t x1196 = 2U;

	t56 = (x1193+(x1194<<(x1195%x1196)));

	if (t56 != -2147483521) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1213 = -2;
	int64_t x1214 = INT64_MAX;
	int32_t x1215 = INT32_MIN;
	int16_t x1216 = -1;

	t57 = (x1213+(x1214<<(x1215%x1216)));

	if (t57 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x1237 = INT32_MIN;
	volatile uint64_t x1238 = 2053991921811598LLU;
	int32_t x1239 = INT32_MIN;
	static int16_t x1240 = INT16_MIN;
	uint64_t t58 = 1528058LLU;

	t58 = (x1237+(x1238<<(x1239%x1240)));

	if (t58 != 2053989774327950LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1279 = UINT8_MAX;
	int32_t x1280 = -1;

	t59 = (x1277+(x1278<<(x1279%x1280)));

	if (t59 != 10273071795LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1281 = 1175U;
	static uint16_t x1282 = UINT16_MAX;
	static int8_t x1284 = INT8_MIN;

	t60 = (x1281+(x1282<<(x1283%x1284)));

	if (t60 != 66710) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x1301 = -1;
	static int32_t x1302 = 67077074;
	static int16_t x1303 = INT16_MAX;
	static int8_t x1304 = -1;

	t61 = (x1301+(x1302<<(x1303%x1304)));

	if (t61 != 67077073) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x1318 = 2578539168475085LLU;
	uint8_t x1319 = 1U;
	int32_t x1320 = INT32_MIN;
	volatile uint64_t t62 = 108795071919222LLU;

	t62 = (x1317+(x1318<<(x1319%x1320)));

	if (t62 != 5157078336917402LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x1358 = 1466U;
	volatile uint16_t x1359 = UINT16_MAX;
	int32_t x1360 = -1;
	int32_t t63 = 2;

	t63 = (x1357+(x1358<<(x1359%x1360)));

	if (t63 != 45718) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1365 = INT64_MAX;
	int8_t x1368 = -1;
	volatile int64_t t64 = INT64_MAX;

	t64 = (x1365+(x1366<<(x1367%x1368)));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x1373 = 335046U;
	uint64_t x1374 = UINT64_MAX;
	volatile uint16_t x1375 = 26280U;
	int8_t x1376 = INT8_MIN;
	uint64_t t65 = 128837LLU;

	t65 = (x1373+(x1374<<(x1375%x1376)));

	if (t65 != 18446742974198258886LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1409 = -40;
	volatile uint64_t x1411 = 41LLU;
	static int64_t x1412 = INT64_MAX;
	volatile int64_t t66 = 1411325012LL;

	t66 = (x1409+(x1410<<(x1411%x1412)));

	if (t66 != 6597069766616LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x1446 = INT32_MAX;
	volatile uint16_t x1447 = UINT16_MAX;
	uint64_t x1448 = 5LLU;
	int32_t t67 = -1682;

	t67 = (x1445+(x1446<<(x1447%x1448)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x1457 = INT32_MIN;
	static int16_t x1459 = INT16_MIN;
	int8_t x1460 = -1;
	int32_t t68 = 468832615;

	t68 = (x1457+(x1458<<(x1459%x1460)));

	if (t68 != -2147483521) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1496 = -1;
	uint64_t t69 = 50191462702345497LLU;

	t69 = (x1493+(x1494<<(x1495%x1496)));

	if (t69 != 105988202544903LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1505 = -42569;
	static uint32_t x1506 = UINT32_MAX;
	uint32_t x1507 = UINT32_MAX;

	t70 = (x1505+(x1506<<(x1507%x1508)));

	if (t70 != 4294924599U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x1533 = 362U;
	uint32_t x1534 = UINT32_MAX;
	static int16_t x1535 = 10;
	int8_t x1536 = INT8_MIN;
	uint32_t t71 = 148199708U;

	t71 = (x1533+(x1534<<(x1535%x1536)));

	if (t71 != 4294966634U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x1542 = UINT64_MAX;
	static uint16_t x1543 = 16U;
	int32_t x1544 = INT32_MAX;

	t72 = (x1541+(x1542<<(x1543%x1544)));

	if (t72 != 18446744073709486084LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x1570 = UINT8_MAX;
	int8_t x1571 = 31;
	int32_t x1572 = 2;
	volatile int32_t t73 = 4129;

	t73 = (x1569+(x1570<<(x1571%x1572)));

	if (t73 != 382) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x1581 = 1U;
	uint64_t x1582 = 2677264176992874033LLU;
	int64_t x1583 = -12LL;
	int64_t x1584 = -1LL;
	uint64_t t74 = 1970770293879402LLU;

	t74 = (x1581+(x1582<<(x1583%x1584)));

	if (t74 != 2677264176992874034LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x1601 = 1;
	uint16_t x1602 = 25593U;
	static volatile uint8_t x1603 = 16U;
	static uint16_t x1604 = UINT16_MAX;
	volatile int32_t t75 = -130654551;

	t75 = (x1601+(x1602<<(x1603%x1604)));

	if (t75 != 1677262849) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1621 = 677U;
	uint8_t x1622 = UINT8_MAX;
	static int64_t x1623 = INT64_MIN;
	static int8_t x1624 = -2;
	int32_t t76 = -2605;

	t76 = (x1621+(x1622<<(x1623%x1624)));

	if (t76 != 932) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x1637 = -1;
	static uint16_t x1638 = UINT16_MAX;
	static int64_t x1639 = 1LL;
	int16_t x1640 = -1;
	static int32_t t77 = -4;

	t77 = (x1637+(x1638<<(x1639%x1640)));

	if (t77 != 65534) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x1661 = UINT8_MAX;
	int16_t x1663 = -1;
	volatile int16_t x1664 = -1;
	int32_t t78 = -770338;

	t78 = (x1661+(x1662<<(x1663%x1664)));

	if (t78 != 382) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x1713 = -1941482LL;
	uint64_t x1714 = 3757919832922248639LLU;
	uint32_t x1715 = 53U;
	uint64_t t79 = 2104640LLU;

	t79 = (x1713+(x1714<<(x1715%x1716)));

	if (t79 != 13249590103722057750LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x1717 = INT8_MAX;
	uint32_t x1718 = 200U;
	static int16_t x1719 = INT16_MIN;
	int8_t x1720 = -2;
	uint32_t t80 = 336213U;

	t80 = (x1717+(x1718<<(x1719%x1720)));

	if (t80 != 327U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x1730 = 6914;
	int8_t x1731 = -1;
	volatile int16_t x1732 = -1;
	volatile int32_t t81 = -728;

	t81 = (x1729+(x1730<<(x1731%x1732)));

	if (t81 != -25854) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x1735 = 3U;
	volatile uint16_t x1736 = UINT16_MAX;
	int32_t t82 = -2;

	t82 = (x1733+(x1734<<(x1735%x1736)));

	if (t82 != -2147481608) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x1773 = INT64_MIN;
	int8_t x1774 = 0;
	uint64_t x1775 = UINT64_MAX;
	uint8_t x1776 = 16U;
	static volatile int64_t t83 = INT64_MIN;

	t83 = (x1773+(x1774<<(x1775%x1776)));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x1837 = INT16_MAX;
	uint32_t x1838 = 28497053U;
	uint16_t x1839 = 28U;
	volatile uint32_t x1840 = 345800994U;
	volatile uint32_t t84 = 680U;

	t84 = (x1837+(x1838<<(x1839%x1840)));

	if (t84 != 3489693695U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x1853 = 9U;
	uint16_t x1854 = 277U;
	static int32_t t85 = -144108;

	t85 = (x1853+(x1854<<(x1855%x1856)));

	if (t85 != 286) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1857 = -1;
	volatile uint64_t x1858 = 2141154708288443LLU;
	uint64_t x1859 = UINT64_MAX;
	int8_t x1860 = -17;
	volatile uint64_t t86 = 629094LLU;

	t86 = (x1857+(x1858<<(x1859%x1860)));

	if (t86 != 11195506446424539135LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x1865 = 63417321175031LLU;
	volatile int16_t x1866 = 2;
	int64_t x1867 = 88LL;
	uint8_t x1868 = 7U;
	volatile uint64_t t87 = 248769590LLU;

	t87 = (x1865+(x1866<<(x1867%x1868)));

	if (t87 != 63417321175063LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1902 = 0U;
	uint8_t x1903 = 2U;
	volatile int32_t x1904 = INT32_MIN;
	uint32_t t88 = UINT32_MAX;

	t88 = (x1901+(x1902<<(x1903%x1904)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1958 = 421424322LLU;
	uint32_t x1959 = 719570692U;
	static int64_t x1960 = -1LL;
	static uint64_t t89 = 95679524LLU;

	t89 = (x1957+(x1958<<(x1959%x1960)));

	if (t89 != 421424349LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1965 = -423586LL;
	static uint8_t x1966 = 2U;
	static int16_t x1967 = 1;
	uint32_t x1968 = 117043933U;
	volatile int64_t t90 = -3972510037238892696LL;

	t90 = (x1965+(x1966<<(x1967%x1968)));

	if (t90 != -423582LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x1971 = 10U;
	int8_t x1972 = 7;
	int32_t t91 = -481611597;

	t91 = (x1969+(x1970<<(x1971%x1972)));

	if (t91 != 24) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x1973 = 7635473U;
	int8_t x1975 = 13;
	static int32_t x1976 = INT32_MIN;

	t92 = (x1973+(x1974<<(x1975%x1976)));

	if (t92 != 7668241U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x1989 = -1;
	uint8_t x1990 = UINT8_MAX;
	uint32_t x1991 = UINT32_MAX;
	int8_t x1992 = -1;
	volatile int32_t t93 = -1;

	t93 = (x1989+(x1990<<(x1991%x1992)));

	if (t93 != 254) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x2001 = 40806449826260LL;
	uint8_t x2002 = 14U;
	uint64_t x2003 = 10LLU;
	volatile uint8_t x2004 = 11U;
	volatile int64_t t94 = -482691831579917LL;

	t94 = (x2001+(x2002<<(x2003%x2004)));

	if (t94 != 40806449840596LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x2081 = -242;
	int32_t x2082 = 33406;
	int64_t x2083 = 0LL;
	uint32_t x2084 = UINT32_MAX;
	volatile int32_t t95 = -852207184;

	t95 = (x2081+(x2082<<(x2083%x2084)));

	if (t95 != 33164) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x2101 = -1;
	uint8_t x2102 = 6U;
	volatile int32_t x2103 = 1;
	int32_t x2104 = INT32_MIN;
	int32_t t96 = 8166630;

	t96 = (x2101+(x2102<<(x2103%x2104)));

	if (t96 != 11) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x2113 = 12737U;
	static volatile int8_t x2115 = INT8_MIN;

	t97 = (x2113+(x2114<<(x2115%x2116)));

	if (t97 != 503947015953LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x2134 = INT8_MAX;
	uint16_t x2135 = 2U;
	int32_t x2136 = INT32_MIN;
	int32_t t98 = 43513;

	t98 = (x2133+(x2134<<(x2135%x2136)));

	if (t98 != -50401) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x2149 = 110;
	static uint32_t x2150 = 0U;
	int32_t x2151 = INT32_MIN;
	volatile int16_t x2152 = INT16_MIN;
	static volatile uint32_t t99 = 3U;

	t99 = (x2149+(x2150<<(x2151%x2152)));

	if (t99 != 110U) { NG(); } else { ; }
	
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

