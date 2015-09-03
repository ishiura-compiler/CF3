#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -2073880;
int8_t x56 = INT8_MIN;
int32_t x130 = INT32_MIN;
int16_t x148 = -4;
static int32_t t4 = -26;
int64_t x158 = INT64_MIN;
uint32_t x184 = UINT32_MAX;
static uint32_t t6 = 947U;
static volatile uint16_t x232 = 1U;
uint64_t x269 = 31606539530LLU;
int16_t x323 = 0;
int32_t t13 = 1;
volatile uint64_t x337 = 1487422699873013LLU;
int16_t x377 = INT16_MAX;
int8_t x378 = INT8_MAX;
volatile int32_t t15 = -1;
uint16_t x433 = 20626U;
static uint8_t x435 = 0U;
volatile int64_t x471 = INT64_MAX;
volatile int32_t t19 = 89180;
uint16_t x494 = 9460U;
static int8_t x496 = -1;
volatile int8_t x524 = INT8_MAX;
uint32_t x529 = UINT32_MAX;
int16_t x535 = -1;
uint32_t x553 = 80930U;
static uint16_t x625 = 4851U;
int64_t x646 = INT64_MIN;
volatile uint16_t x678 = 6U;
int32_t t34 = 108249391;
uint64_t x768 = 57LLU;
uint16_t x812 = UINT16_MAX;
int8_t x855 = 22;
static uint32_t t40 = 158480U;
int64_t x994 = INT64_MIN;
static int32_t t44 = -3933146;
int32_t t46 = 0;
uint64_t x1096 = 160732LLU;
int64_t x1127 = INT64_MIN;
uint64_t x1141 = 21765545406LLU;
uint64_t t49 = 4179227293536732LLU;
int64_t x1200 = INT64_MAX;
uint8_t x1294 = 0U;
int32_t x1323 = INT32_MAX;
int64_t x1352 = INT64_MIN;
uint64_t x1382 = 0LLU;
int16_t x1438 = 12559;
uint64_t x1441 = UINT64_MAX;
static volatile uint64_t t63 = 171144397855284070LLU;
int8_t x1482 = 2;
uint16_t x1485 = 14U;
volatile int32_t t65 = 811118122;
uint32_t x1558 = 3U;
int32_t t67 = 14849030;
int32_t t69 = 0;
int32_t x1630 = 1;
uint32_t t70 = 1404749U;
int8_t x1651 = INT8_MAX;
uint32_t x1656 = 22U;
uint32_t x1660 = 1U;
static int32_t x1685 = INT32_MAX;
int64_t x1686 = 0LL;
static uint32_t x1688 = UINT32_MAX;
static int16_t x1734 = 2;
uint32_t t75 = 861U;
uint16_t x1798 = 7488U;
volatile int32_t t76 = 200982;
uint32_t x1805 = 3695731U;
volatile uint8_t x1808 = 65U;
int32_t x1842 = INT32_MIN;
static int8_t x1863 = INT8_MIN;
int32_t t81 = -326705;
volatile uint32_t x1887 = UINT32_MAX;
int64_t x1976 = -1LL;
uint64_t x1985 = UINT64_MAX;
int32_t x2120 = INT32_MIN;
uint64_t x2148 = 2610004130287557226LLU;
uint32_t x2161 = UINT32_MAX;
volatile uint32_t t90 = 95852898U;
static uint16_t x2171 = 1U;
uint8_t x2174 = 1U;
int8_t x2175 = INT8_MIN;
uint32_t x2228 = 19281892U;
int16_t x2231 = INT16_MIN;
int16_t x2324 = INT16_MIN;
volatile int8_t x2356 = -1;
int8_t x2387 = -1;


void f0(void) {
	uint8_t x49 = UINT8_MAX;
	volatile uint8_t x50 = 11U;
	volatile uint64_t x51 = UINT64_MAX;
	int8_t x52 = -1;

	t0 = (x49<<(x50&(x51^x52)));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x53 = 0LL;
	int32_t x54 = -1;
	int8_t x55 = INT8_MIN;
	int64_t t1 = -426673419596995327LL;

	t1 = (x53<<(x54&(x55^x56)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x121 = 554677302U;
	volatile uint64_t x122 = 418LLU;
	static int32_t x123 = INT32_MAX;
	int64_t x124 = -1LL;
	static uint32_t t2 = 2177U;

	t2 = (x121<<(x122&(x123^x124)));

	if (t2 != 554677302U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x129 = UINT32_MAX;
	uint32_t x131 = 3893U;
	volatile int32_t x132 = 7;
	uint32_t t3 = UINT32_MAX;

	t3 = (x129<<(x130&(x131^x132)));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x145 = UINT16_MAX;
	volatile int64_t x146 = -210230LL;
	volatile int32_t x147 = -1;

	t4 = (x145<<(x146&(x147^x148)));

	if (t4 != 262140) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x157 = INT8_MAX;
	static volatile int32_t x159 = INT32_MIN;
	int64_t x160 = -125044993LL;
	volatile int32_t t5 = 2162;

	t5 = (x157<<(x158&(x159^x160)));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x181 = UINT32_MAX;
	volatile int16_t x182 = 1;
	static int64_t x183 = -190948452LL;

	t6 = (x181<<(x182&(x183^x184)));

	if (t6 != 4294967294U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x205 = INT16_MAX;
	static uint32_t x206 = 466U;
	static volatile int16_t x207 = -1;
	static uint32_t x208 = UINT32_MAX;
	volatile int32_t t7 = -15517235;

	t7 = (x205<<(x206&(x207^x208)));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x217 = 732;
	volatile uint8_t x218 = 15U;
	int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MIN;
	int32_t t8 = 12877051;

	t8 = (x217<<(x218&(x219^x220)));

	if (t8 != 732) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x229 = UINT64_MAX;
	static int64_t x230 = -1094855LL;
	int8_t x231 = 1;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = (x229<<(x230&(x231^x232)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x233 = 44U;
	int64_t x234 = INT64_MIN;
	int8_t x235 = 2;
	int8_t x236 = 19;
	int32_t t10 = 495;

	t10 = (x233<<(x234&(x235^x236)));

	if (t10 != 44) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x245 = 1994661406680875025LLU;
	uint16_t x246 = UINT16_MAX;
	int16_t x247 = 114;
	uint8_t x248 = 124U;
	static uint64_t t11 = 17LLU;

	t11 = (x245<<(x246&(x247^x248)));

	if (t11 != 11348732519840497664LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x270 = 1U;
	static volatile uint32_t x271 = 6087583U;
	volatile int64_t x272 = 0LL;
	static volatile uint64_t t12 = 1LLU;

	t12 = (x269<<(x270&(x271^x272)));

	if (t12 != 63213079060LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x321 = 15061U;
	static uint16_t x322 = 20014U;
	volatile uint8_t x324 = 1U;

	t13 = (x321<<(x322&(x323^x324)));

	if (t13 != 15061) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x338 = 2U;
	static uint32_t x339 = UINT32_MAX;
	int8_t x340 = INT8_MAX;
	uint64_t t14 = 69532LLU;

	t14 = (x337<<(x338&(x339^x340)));

	if (t14 != 1487422699873013LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x379 = 213769LLU;
	static volatile int8_t x380 = INT8_MIN;

	t15 = (x377<<(x378&(x379^x380)));

	if (t15 != 16776704) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x409 = UINT32_MAX;
	int64_t x410 = INT64_MIN;
	volatile int64_t x411 = INT64_MAX;
	uint16_t x412 = 744U;
	uint32_t t16 = UINT32_MAX;

	t16 = (x409<<(x410&(x411^x412)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x434 = 1;
	int32_t x436 = 8;
	static volatile int32_t t17 = -1054;

	t17 = (x433<<(x434&(x435^x436)));

	if (t17 != 20626) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x437 = 3287884695505256846LLU;
	uint8_t x438 = 50U;
	volatile int16_t x439 = 0;
	static uint32_t x440 = 26U;
	uint64_t t18 = 12311119137650188LLU;

	t18 = (x437<<(x438&(x439^x440)));

	if (t18 != 12022262598670483456LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x469 = 331;
	int32_t x470 = 25657;
	int64_t x472 = INT64_MAX;

	t19 = (x469<<(x470&(x471^x472)));

	if (t19 != 331) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x493 = 2439141792423LLU;
	static int64_t x495 = -1LL;
	uint64_t t20 = 604205846113217494LLU;

	t20 = (x493<<(x494&(x495^x496)));

	if (t20 != 2439141792423LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x517 = 17U;
	uint8_t x518 = 3U;
	uint64_t x519 = 245828131210071LLU;
	uint16_t x520 = 43U;
	int32_t t21 = 6253015;

	t21 = (x517<<(x518&(x519^x520)));

	if (t21 != 17) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x521 = UINT32_MAX;
	static int32_t x522 = INT32_MIN;
	uint16_t x523 = UINT16_MAX;
	uint32_t t22 = UINT32_MAX;

	t22 = (x521<<(x522&(x523^x524)));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x530 = 13U;
	uint8_t x531 = UINT8_MAX;
	uint32_t x532 = 34U;
	volatile uint32_t t23 = 9U;

	t23 = (x529<<(x530&(x531^x532)));

	if (t23 != 4294959104U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x533 = 21105928;
	int32_t x534 = INT32_MIN;
	static int16_t x536 = INT16_MIN;
	int32_t t24 = 234415920;

	t24 = (x533<<(x534&(x535^x536)));

	if (t24 != 21105928) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x554 = 1;
	int16_t x555 = -1;
	uint8_t x556 = 13U;
	uint32_t t25 = 477U;

	t25 = (x553<<(x554&(x555^x556)));

	if (t25 != 80930U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x626 = UINT8_MAX;
	static int32_t x627 = INT32_MIN;
	int64_t x628 = INT64_MIN;
	int32_t t26 = 7348989;

	t26 = (x625<<(x626&(x627^x628)));

	if (t26 != 4851) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x641 = 11U;
	uint64_t x642 = 59LLU;
	int64_t x643 = INT64_MIN;
	int16_t x644 = 1;
	int32_t t27 = 576895;

	t27 = (x641<<(x642&(x643^x644)));

	if (t27 != 22) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x645 = INT32_MAX;
	uint8_t x647 = UINT8_MAX;
	int16_t x648 = INT16_MAX;
	int32_t t28 = INT32_MAX;

	t28 = (x645<<(x646&(x647^x648)));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x657 = 24883367820635482LL;
	int16_t x658 = INT16_MIN;
	uint64_t x659 = UINT64_MAX;
	int8_t x660 = -15;
	volatile int64_t t29 = 21588960LL;

	t29 = (x657<<(x658&(x659^x660)));

	if (t29 != 24883367820635482LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x677 = 12U;
	uint64_t x679 = UINT64_MAX;
	uint16_t x680 = 861U;
	volatile int32_t t30 = 1;

	t30 = (x677<<(x678&(x679^x680)));

	if (t30 != 48) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x709 = INT16_MAX;
	uint8_t x710 = 22U;
	static uint32_t x711 = 1U;
	uint64_t x712 = 2783093288LLU;
	volatile int32_t t31 = 21124214;

	t31 = (x709<<(x710&(x711^x712)));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x721 = 14;
	uint64_t x722 = 1LLU;
	int64_t x723 = INT64_MIN;
	int64_t x724 = INT64_MAX;
	volatile int32_t t32 = -12521;

	t32 = (x721<<(x722&(x723^x724)));

	if (t32 != 28) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x733 = 59;
	volatile int64_t x734 = 695838LL;
	int32_t x735 = -1;
	uint64_t x736 = UINT64_MAX;
	int32_t t33 = -233396;

	t33 = (x733<<(x734&(x735^x736)));

	if (t33 != 59) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x753 = UINT8_MAX;
	int32_t x754 = INT32_MIN;
	static int8_t x755 = INT8_MIN;
	static int8_t x756 = INT8_MIN;

	t34 = (x753<<(x754&(x755^x756)));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x765 = 11067270LLU;
	int16_t x766 = INT16_MAX;
	uint16_t x767 = 0U;
	static volatile uint64_t t35 = 105404275885051136LLU;

	t35 = (x765<<(x766&(x767^x768)));

	if (t35 != 864691128455135232LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x809 = UINT64_MAX;
	static uint8_t x810 = 102U;
	int32_t x811 = INT32_MAX;
	static volatile uint64_t t36 = UINT64_MAX;

	t36 = (x809<<(x810&(x811^x812)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x813 = 73LLU;
	static uint8_t x814 = 0U;
	int8_t x815 = 1;
	int64_t x816 = -5LL;
	uint64_t t37 = 19LLU;

	t37 = (x813<<(x814&(x815^x816)));

	if (t37 != 73LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x853 = UINT32_MAX;
	int16_t x854 = INT16_MIN;
	uint64_t x856 = 0LLU;
	static volatile uint32_t t38 = UINT32_MAX;

	t38 = (x853<<(x854&(x855^x856)));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x913 = 3;
	volatile int8_t x914 = 29;
	uint32_t x915 = 5U;
	int8_t x916 = INT8_MIN;
	volatile int32_t t39 = -30;

	t39 = (x913<<(x914&(x915^x916)));

	if (t39 != 96) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x921 = 225850U;
	int16_t x922 = -1;
	int16_t x923 = -1;
	uint64_t x924 = UINT64_MAX;

	t40 = (x921<<(x922&(x923^x924)));

	if (t40 != 225850U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x933 = INT32_MAX;
	static int32_t x934 = INT32_MIN;
	int64_t x935 = 95LL;
	uint8_t x936 = 6U;
	volatile int32_t t41 = INT32_MAX;

	t41 = (x933<<(x934&(x935^x936)));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x985 = 4088660596505LL;
	uint16_t x986 = 488U;
	volatile uint8_t x987 = 1U;
	int64_t x988 = INT64_MIN;
	volatile int64_t t42 = -1307061LL;

	t42 = (x985<<(x986&(x987^x988)));

	if (t42 != 4088660596505LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x993 = 3706024;
	volatile int16_t x995 = INT16_MIN;
	static volatile int64_t x996 = INT64_MIN;
	volatile int32_t t43 = 53339010;

	t43 = (x993<<(x994&(x995^x996)));

	if (t43 != 3706024) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x997 = UINT16_MAX;
	int8_t x998 = 5;
	int32_t x999 = -236;
	int8_t x1000 = 38;

	t44 = (x997<<(x998&(x999^x1000)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1013 = 3U;
	uint32_t x1014 = 1U;
	static uint64_t x1015 = 9LLU;
	int8_t x1016 = -27;
	int32_t t45 = -367;

	t45 = (x1013<<(x1014&(x1015^x1016)));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1053 = 0U;
	uint8_t x1054 = 0U;
	int32_t x1055 = -178568;
	int64_t x1056 = -10LL;

	t46 = (x1053<<(x1054&(x1055^x1056)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x1093 = 292U;
	uint8_t x1094 = 1U;
	volatile int8_t x1095 = INT8_MIN;
	uint32_t t47 = 89312U;

	t47 = (x1093<<(x1094&(x1095^x1096)));

	if (t47 != 292U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1125 = UINT8_MAX;
	uint16_t x1126 = 7U;
	int32_t x1128 = INT32_MIN;
	static int32_t t48 = 704;

	t48 = (x1125<<(x1126&(x1127^x1128)));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1142 = 3;
	static uint32_t x1143 = 7945U;
	int16_t x1144 = INT16_MIN;

	t49 = (x1141<<(x1142&(x1143^x1144)));

	if (t49 != 43531090812LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x1157 = 860U;
	static int32_t x1158 = -1;
	volatile int8_t x1159 = 4;
	volatile uint8_t x1160 = 4U;
	static volatile uint32_t t50 = 718U;

	t50 = (x1157<<(x1158&(x1159^x1160)));

	if (t50 != 860U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1197 = UINT32_MAX;
	static volatile int32_t x1198 = INT32_MAX;
	static int16_t x1199 = -1;
	volatile uint32_t t51 = UINT32_MAX;

	t51 = (x1197<<(x1198&(x1199^x1200)));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1209 = 0;
	volatile int16_t x1210 = INT16_MIN;
	static int8_t x1211 = 1;
	uint16_t x1212 = 704U;
	int32_t t52 = 1;

	t52 = (x1209<<(x1210&(x1211^x1212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x1241 = 33U;
	int16_t x1242 = INT16_MIN;
	static int16_t x1243 = INT16_MIN;
	volatile uint32_t x1244 = UINT32_MAX;
	volatile int32_t t53 = 93919;

	t53 = (x1241<<(x1242&(x1243^x1244)));

	if (t53 != 33) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x1273 = UINT32_MAX;
	int8_t x1274 = 1;
	static uint32_t x1275 = 468U;
	int8_t x1276 = 1;
	uint32_t t54 = 29485U;

	t54 = (x1273<<(x1274&(x1275^x1276)));

	if (t54 != 4294967294U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1293 = UINT64_MAX;
	uint8_t x1295 = 33U;
	int64_t x1296 = 129767LL;
	uint64_t t55 = UINT64_MAX;

	t55 = (x1293<<(x1294&(x1295^x1296)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1321 = 195164098483971LLU;
	static volatile uint32_t x1322 = 7U;
	int64_t x1324 = INT64_MIN;
	volatile uint64_t t56 = 98061796LLU;

	t56 = (x1321<<(x1322&(x1323^x1324)));

	if (t56 != 24981004605948288LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1349 = 2977U;
	uint8_t x1350 = 6U;
	static volatile int16_t x1351 = INT16_MIN;
	volatile int32_t t57 = 226;

	t57 = (x1349<<(x1350&(x1351^x1352)));

	if (t57 != 2977) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1381 = 1U;
	uint64_t x1383 = 3412094LLU;
	int8_t x1384 = -1;
	static volatile int32_t t58 = -5263066;

	t58 = (x1381<<(x1382&(x1383^x1384)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1385 = UINT8_MAX;
	uint64_t x1386 = 1262734044176LLU;
	int8_t x1387 = 0;
	int8_t x1388 = 6;
	int32_t t59 = -36;

	t59 = (x1385<<(x1386&(x1387^x1388)));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1389 = 1U;
	int8_t x1390 = 28;
	int64_t x1391 = INT64_MIN;
	int8_t x1392 = 0;
	volatile int32_t t60 = 7683;

	t60 = (x1389<<(x1390&(x1391^x1392)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1437 = 188741382LL;
	volatile uint16_t x1439 = UINT16_MAX;
	int64_t x1440 = INT64_MAX;
	volatile int64_t t61 = 2537LL;

	t61 = (x1437<<(x1438&(x1439^x1440)));

	if (t61 != 188741382LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x1442 = 40U;
	int8_t x1443 = INT8_MIN;
	static int32_t x1444 = 2670;
	uint64_t t62 = 191104440LLU;

	t62 = (x1441<<(x1442&(x1443^x1444)));

	if (t62 != 18446742974197923840LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x1465 = 168232700992702243LLU;
	static uint64_t x1466 = 869LLU;
	static int8_t x1467 = 2;
	static int32_t x1468 = INT32_MIN;

	t63 = (x1465<<(x1466&(x1467^x1468)));

	if (t63 != 168232700992702243LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1481 = 7U;
	int32_t x1483 = INT32_MAX;
	volatile uint64_t x1484 = 1604LLU;
	volatile int32_t t64 = 1;

	t64 = (x1481<<(x1482&(x1483^x1484)));

	if (t64 != 28) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1486 = 7U;
	static int64_t x1487 = INT64_MAX;
	static volatile int32_t x1488 = -11;

	t65 = (x1485<<(x1486&(x1487^x1488)));

	if (t65 != 56) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1557 = 40200016U;
	volatile int64_t x1559 = INT64_MIN;
	static volatile int16_t x1560 = -1;
	uint32_t t66 = 15203U;

	t66 = (x1557<<(x1558&(x1559^x1560)));

	if (t66 != 321600128U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x1601 = INT8_MAX;
	int64_t x1602 = INT64_MIN;
	uint16_t x1603 = 60U;
	uint32_t x1604 = 1U;

	t67 = (x1601<<(x1602&(x1603^x1604)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1605 = 0;
	static int8_t x1606 = 1;
	volatile uint16_t x1607 = 18618U;
	static uint32_t x1608 = 268026U;
	int32_t t68 = -44;

	t68 = (x1605<<(x1606&(x1607^x1608)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1625 = 39U;
	static int16_t x1626 = INT16_MAX;
	static int8_t x1627 = -1;
	static int16_t x1628 = -3;

	t69 = (x1625<<(x1626&(x1627^x1628)));

	if (t69 != 156) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x1629 = 6920U;
	static int8_t x1631 = INT8_MIN;
	int8_t x1632 = 2;

	t70 = (x1629<<(x1630&(x1631^x1632)));

	if (t70 != 6920U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x1649 = 5U;
	uint16_t x1650 = 66U;
	uint32_t x1652 = UINT32_MAX;
	int32_t t71 = -60045345;

	t71 = (x1649<<(x1650&(x1651^x1652)));

	if (t71 != 5) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x1653 = UINT64_MAX;
	int8_t x1654 = INT8_MIN;
	uint8_t x1655 = 67U;
	uint64_t t72 = UINT64_MAX;

	t72 = (x1653<<(x1654&(x1655^x1656)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x1657 = 0;
	int32_t x1658 = INT32_MIN;
	volatile uint16_t x1659 = 2U;
	int32_t t73 = -16;

	t73 = (x1657<<(x1658&(x1659^x1660)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1687 = -1;
	int32_t t74 = INT32_MAX;

	t74 = (x1685<<(x1686&(x1687^x1688)));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1733 = 1U;
	static uint64_t x1735 = 212349LLU;
	int16_t x1736 = INT16_MAX;

	t75 = (x1733<<(x1734&(x1735^x1736)));

	if (t75 != 4U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1797 = 0U;
	int8_t x1799 = 4;
	volatile int16_t x1800 = INT16_MIN;

	t76 = (x1797<<(x1798&(x1799^x1800)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x1806 = INT64_MIN;
	static volatile uint16_t x1807 = 1138U;
	uint32_t t77 = 1022219U;

	t77 = (x1805<<(x1806&(x1807^x1808)));

	if (t77 != 3695731U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x1817 = 2U;
	int64_t x1818 = -810724LL;
	uint8_t x1819 = 0U;
	uint8_t x1820 = 1U;
	int32_t t78 = -1414;

	t78 = (x1817<<(x1818&(x1819^x1820)));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1841 = UINT8_MAX;
	int16_t x1843 = 1489;
	int32_t x1844 = 53547;
	static volatile int32_t t79 = -20;

	t79 = (x1841<<(x1842&(x1843^x1844)));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x1849 = 1564881876696731313LLU;
	uint8_t x1850 = 3U;
	uint32_t x1851 = UINT32_MAX;
	volatile uint16_t x1852 = 5U;
	uint64_t t80 = 12LLU;

	t80 = (x1849<<(x1850&(x1851^x1852)));

	if (t80 != 6259527506786925252LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x1861 = UINT16_MAX;
	volatile int32_t x1862 = INT32_MIN;
	static int8_t x1864 = -1;

	t81 = (x1861<<(x1862&(x1863^x1864)));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x1885 = 4U;
	uint8_t x1886 = 35U;
	int16_t x1888 = -4;
	int32_t t82 = 303556;

	t82 = (x1885<<(x1886&(x1887^x1888)));

	if (t82 != 32) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1949 = 3;
	uint64_t x1950 = 40LLU;
	static int16_t x1951 = INT16_MIN;
	static volatile int64_t x1952 = -24956047316602LL;
	volatile int32_t t83 = -402;

	t83 = (x1949<<(x1950&(x1951^x1952)));

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x1973 = 437417615625449796LL;
	volatile int16_t x1974 = 11;
	uint8_t x1975 = 89U;
	static int64_t t84 = -323264LL;

	t84 = (x1973<<(x1974&(x1975^x1976)));

	if (t84 != 1749670462501799184LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x1986 = 2288U;
	int32_t x1987 = INT32_MAX;
	int8_t x1988 = -1;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x1985<<(x1986&(x1987^x1988)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x2001 = UINT8_MAX;
	int32_t x2002 = INT32_MAX;
	int64_t x2003 = INT64_MIN;
	int32_t x2004 = INT32_MIN;
	int32_t t86 = 6;

	t86 = (x2001<<(x2002&(x2003^x2004)));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x2073 = UINT8_MAX;
	uint8_t x2074 = 73U;
	int64_t x2075 = -443276912935LL;
	volatile int8_t x2076 = -1;
	static int32_t t87 = -861209;

	t87 = (x2073<<(x2074&(x2075^x2076)));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x2117 = 46U;
	static int8_t x2118 = 7;
	volatile uint64_t x2119 = 145069LLU;
	static int32_t t88 = -154324333;

	t88 = (x2117<<(x2118&(x2119^x2120)));

	if (t88 != 1472) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2145 = 13U;
	static int8_t x2146 = 0;
	int16_t x2147 = 2;
	int32_t t89 = 45423639;

	t89 = (x2145<<(x2146&(x2147^x2148)));

	if (t89 != 13) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x2162 = 7U;
	int32_t x2163 = -80;
	int32_t x2164 = INT32_MAX;

	t90 = (x2161<<(x2162&(x2163^x2164)));

	if (t90 != 4294967168U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2169 = 59185718LL;
	int64_t x2170 = INT64_MIN;
	static uint16_t x2172 = UINT16_MAX;
	static int64_t t91 = -3563847262LL;

	t91 = (x2169<<(x2170&(x2171^x2172)));

	if (t91 != 59185718LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x2173 = 6LL;
	int32_t x2176 = INT32_MIN;
	volatile int64_t t92 = 0LL;

	t92 = (x2173<<(x2174&(x2175^x2176)));

	if (t92 != 6LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2225 = INT64_MAX;
	static int8_t x2226 = 0;
	static int32_t x2227 = -10642776;
	int64_t t93 = INT64_MAX;

	t93 = (x2225<<(x2226&(x2227^x2228)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x2229 = 31233U;
	volatile uint16_t x2230 = UINT16_MAX;
	int16_t x2232 = INT16_MIN;
	int32_t t94 = -86;

	t94 = (x2229<<(x2230&(x2231^x2232)));

	if (t94 != 31233) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x2301 = 45U;
	uint8_t x2302 = UINT8_MAX;
	int32_t x2303 = -1;
	volatile int16_t x2304 = -26;
	int32_t t95 = -3;

	t95 = (x2301<<(x2302&(x2303^x2304)));

	if (t95 != 1509949440) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x2321 = UINT32_MAX;
	uint16_t x2322 = 192U;
	static int8_t x2323 = 3;
	uint32_t t96 = UINT32_MAX;

	t96 = (x2321<<(x2322&(x2323^x2324)));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x2353 = UINT64_MAX;
	int8_t x2354 = -1;
	int8_t x2355 = -1;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x2353<<(x2354&(x2355^x2356)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x2377 = INT64_MAX;
	int16_t x2378 = INT16_MIN;
	int16_t x2379 = INT16_MIN;
	int8_t x2380 = INT8_MIN;
	volatile int64_t t98 = INT64_MAX;

	t98 = (x2377<<(x2378&(x2379^x2380)));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x2385 = 1U;
	volatile uint32_t x2386 = 31979382U;
	static int16_t x2388 = -1;
	int32_t t99 = 227;

	t99 = (x2385<<(x2386&(x2387^x2388)));

	if (t99 != 1) { NG(); } else { ; }
	
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

