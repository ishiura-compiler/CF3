#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x149 = UINT16_MAX;
volatile uint32_t t3 = 6511U;
uint8_t x155 = 4U;
static volatile int32_t x156 = -37457355;
uint32_t t5 = 5065054U;
volatile uint64_t x276 = UINT64_MAX;
static int16_t x304 = 1;
static uint8_t x329 = 59U;
volatile uint8_t x331 = 1U;
int32_t x332 = INT32_MAX;
int32_t t11 = -239;
int32_t x427 = INT32_MIN;
int8_t x435 = -1;
volatile uint64_t t13 = 8409153987530LLU;
uint64_t x437 = UINT64_MAX;
uint8_t x439 = 0U;
static int8_t x448 = -1;
volatile uint8_t x449 = UINT8_MAX;
int64_t x451 = 11LL;
int8_t x498 = 5;
uint32_t t18 = 10463076U;
volatile int16_t x507 = -1570;
uint8_t x508 = 12U;
static int8_t x553 = INT8_MAX;
int64_t x554 = -1LL;
int16_t x570 = 9;
int64_t x582 = INT64_MIN;
static uint8_t x583 = 44U;
volatile int32_t t23 = -9;
int16_t x665 = INT16_MAX;
int32_t x690 = INT32_MAX;
volatile int64_t x691 = INT64_MIN;
int32_t x729 = 806938811;
volatile uint32_t x780 = UINT32_MAX;
volatile int8_t x925 = 18;
int16_t x927 = INT16_MAX;
uint16_t x949 = 964U;
volatile uint16_t x982 = 4U;
int32_t x987 = 4;
static volatile int64_t t40 = -722297LL;
int32_t x1042 = INT32_MAX;
static volatile int64_t t43 = 324074300473LL;
volatile uint32_t x1105 = 310U;
static uint64_t x1113 = UINT64_MAX;
uint32_t x1115 = 3U;
int8_t x1117 = INT8_MAX;
volatile int32_t x1119 = INT32_MIN;
int8_t x1120 = 36;
static uint16_t x1271 = 6U;
int16_t x1293 = 15;
int8_t x1294 = 3;
uint8_t x1320 = UINT8_MAX;
static uint32_t t54 = 122082U;
volatile int32_t x1355 = INT32_MIN;
uint8_t x1361 = 19U;
uint32_t x1363 = 0U;
int32_t t59 = -1;
static int8_t x1404 = -1;
volatile int32_t t60 = -6261;
uint8_t x1429 = UINT8_MAX;
uint8_t x1433 = 7U;
volatile uint32_t x1512 = UINT32_MAX;
int8_t x1570 = 1;
int64_t x1572 = -1LL;
int64_t t68 = -4407788LL;
int32_t x1579 = INT32_MAX;
static uint8_t x1588 = 4U;
int8_t x1590 = INT8_MIN;
volatile int16_t x1614 = INT16_MAX;
uint32_t x1636 = UINT32_MAX;
volatile int64_t x1647 = -1LL;
static volatile int16_t x1658 = INT16_MIN;
uint64_t t76 = 119420801LLU;
uint16_t x1669 = 40U;
int64_t x1671 = INT64_MIN;
int8_t x1672 = -1;
static uint8_t x1681 = UINT8_MAX;
int64_t x1682 = 13747027235LL;
volatile int64_t x1683 = INT64_MIN;
volatile int32_t t78 = 227759477;
uint8_t x1685 = UINT8_MAX;
uint8_t x1687 = 7U;
int8_t x1703 = 10;
volatile uint64_t t80 = 5367391LLU;
int8_t x1708 = -6;
uint64_t t82 = 13571LLU;
int8_t x1786 = INT8_MAX;
int32_t x1790 = 475;
volatile int64_t x1791 = 426437008912LL;
uint64_t x1813 = 87726113632363163LLU;
uint64_t x1841 = 480LLU;
uint16_t x1844 = UINT16_MAX;
volatile uint64_t t87 = 32790393452265LLU;
volatile int32_t x1887 = INT32_MIN;
volatile int8_t x1893 = INT8_MAX;
volatile int64_t x1895 = INT64_MIN;
volatile uint32_t t92 = 361U;
static int64_t x1922 = INT64_MAX;
int16_t x1942 = 535;
int64_t x1944 = INT64_MAX;
static int64_t x1952 = 13302463428LL;
int8_t x2009 = INT8_MAX;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint32_t x2 = 438U;
	uint16_t x3 = 2U;
	uint8_t x4 = UINT8_MAX;
	volatile uint64_t t0 = 6085543286978LLU;

	t0 = ((x1<<(x2&x3))&x4);

	if (t0 != 252LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x21 = 194079621796LLU;
	volatile uint64_t x22 = 26LLU;
	volatile int64_t x23 = INT64_MIN;
	uint8_t x24 = 0U;
	static volatile uint64_t t1 = 736863105LLU;

	t1 = ((x21<<(x22&x23))&x24);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x125 = 0LL;
	int64_t x126 = INT64_MIN;
	static uint8_t x127 = UINT8_MAX;
	static int8_t x128 = 1;
	int64_t t2 = 1117594328398277708LL;

	t2 = ((x125<<(x126&x127))&x128);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x150 = 0U;
	uint64_t x151 = 2043LLU;
	uint32_t x152 = 85208113U;

	t3 = ((x149<<(x150&x151))&x152);

	if (t3 != 11313U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x153 = 21921469792LLU;
	int8_t x154 = INT8_MIN;
	volatile uint64_t t4 = 3251629706LLU;

	t4 = ((x153<<(x154&x155))&x156);

	if (t4 != 21886144544LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x169 = 7139U;
	static uint32_t x170 = 1U;
	uint64_t x171 = 58315318572608293LLU;
	int8_t x172 = INT8_MAX;

	t5 = ((x169<<(x170&x171))&x172);

	if (t5 != 70U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x189 = 186LLU;
	static uint8_t x190 = 118U;
	uint32_t x191 = 43U;
	static uint8_t x192 = UINT8_MAX;
	static uint64_t t6 = 935513639LLU;

	t6 = ((x189<<(x190&x191))&x192);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x237 = UINT16_MAX;
	uint16_t x238 = 9U;
	uint64_t x239 = 405496846LLU;
	int16_t x240 = -9627;
	int32_t t7 = -1;

	t7 = ((x237<<(x238&x239))&x240);

	if (t7 != 16767488) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x249 = 3U;
	uint16_t x250 = 7178U;
	int16_t x251 = INT16_MIN;
	volatile uint16_t x252 = 6084U;
	int32_t t8 = -502;

	t8 = ((x249<<(x250&x251))&x252);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x273 = 18447;
	int16_t x274 = -1;
	uint16_t x275 = 0U;
	static volatile uint64_t t9 = 2246804828LLU;

	t9 = ((x273<<(x274&x275))&x276);

	if (t9 != 18447LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x301 = INT8_MAX;
	int64_t x302 = INT64_MIN;
	static uint32_t x303 = 119501289U;
	volatile int32_t t10 = -32459104;

	t10 = ((x301<<(x302&x303))&x304);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x330 = INT8_MIN;

	t11 = ((x329<<(x330&x331))&x332);

	if (t11 != 59) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x425 = 496;
	uint16_t x426 = 26426U;
	volatile uint32_t x428 = UINT32_MAX;
	uint32_t t12 = 11U;

	t12 = ((x425<<(x426&x427))&x428);

	if (t12 != 496U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x433 = 109990933LLU;
	int8_t x434 = 0;
	int64_t x436 = 1285291511446468752LL;

	t13 = ((x433<<(x434&x435))&x436);

	if (t13 != 75911184LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x438 = -1LL;
	int32_t x440 = INT32_MIN;
	uint64_t t14 = 1640798LLU;

	t14 = ((x437<<(x438&x439))&x440);

	if (t14 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x445 = UINT64_MAX;
	uint16_t x446 = 6U;
	int8_t x447 = 3;
	volatile uint64_t t15 = 7940LLU;

	t15 = ((x445<<(x446&x447))&x448);

	if (t15 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x450 = INT64_MIN;
	int32_t x452 = INT32_MIN;
	volatile int32_t t16 = 573551;

	t16 = ((x449<<(x450&x451))&x452);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x481 = UINT8_MAX;
	volatile int8_t x482 = 1;
	int64_t x483 = 1LL;
	volatile int16_t x484 = INT16_MIN;
	int32_t t17 = 2069012;

	t17 = ((x481<<(x482&x483))&x484);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x497 = 361201104U;
	int64_t x499 = INT64_MIN;
	static uint16_t x500 = UINT16_MAX;

	t18 = ((x497<<(x498&x499))&x500);

	if (t18 != 32208U) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x505 = 1774649538279533LL;
	static uint8_t x506 = 5U;
	volatile int64_t t19 = -776182436LL;

	t19 = ((x505<<(x506&x507))&x508);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x555 = 14U;
	uint16_t x556 = UINT16_MAX;
	int32_t t20 = 2;

	t20 = ((x553<<(x554&x555))&x556);

	if (t20 != 49152) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x569 = 3274685U;
	volatile int16_t x571 = INT16_MIN;
	static int8_t x572 = -1;
	uint32_t t21 = 24U;

	t21 = ((x569<<(x570&x571))&x572);

	if (t21 != 3274685U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x581 = 2249U;
	int8_t x584 = 5;
	int32_t t22 = 115298818;

	t22 = ((x581<<(x582&x583))&x584);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x653 = 7U;
	uint64_t x654 = 116024809542LLU;
	static int8_t x655 = 7;
	int16_t x656 = -9;

	t23 = ((x653<<(x654&x655))&x656);

	if (t23 != 448) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x657 = 871LLU;
	volatile int16_t x658 = 88;
	int8_t x659 = INT8_MIN;
	volatile uint64_t x660 = 1429681243341540LLU;
	volatile uint64_t t24 = 243614LLU;

	t24 = ((x657<<(x658&x659))&x660);

	if (t24 != 612LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x666 = INT16_MAX;
	int64_t x667 = INT64_MIN;
	volatile int32_t x668 = INT32_MIN;
	int32_t t25 = -936422;

	t25 = ((x665<<(x666&x667))&x668);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x669 = 1176;
	static uint8_t x670 = 0U;
	uint32_t x671 = 41U;
	int8_t x672 = -36;
	volatile int32_t t26 = -23389223;

	t26 = ((x669<<(x670&x671))&x672);

	if (t26 != 1176) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x689 = UINT32_MAX;
	volatile uint16_t x692 = UINT16_MAX;
	uint32_t t27 = 223U;

	t27 = ((x689<<(x690&x691))&x692);

	if (t27 != 65535U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x730 = 1U;
	int32_t x731 = 225287;
	int32_t x732 = INT32_MIN;
	volatile int32_t t28 = -36;

	t28 = ((x729<<(x730&x731))&x732);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x773 = 13895695366005504LLU;
	int16_t x774 = INT16_MIN;
	int8_t x775 = 37;
	int32_t x776 = INT32_MAX;
	uint64_t t29 = 172607577433LLU;

	t29 = ((x773<<(x774&x775))&x776);

	if (t29 != 842179328LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x777 = 3522U;
	uint8_t x778 = 2U;
	static int32_t x779 = INT32_MAX;
	uint32_t t30 = 1965333U;

	t30 = ((x777<<(x778&x779))&x780);

	if (t30 != 14088U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x793 = INT32_MAX;
	int8_t x794 = 6;
	int8_t x795 = 0;
	volatile int64_t x796 = INT64_MIN;
	int64_t t31 = 433380LL;

	t31 = ((x793<<(x794&x795))&x796);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x869 = 5200U;
	uint8_t x870 = UINT8_MAX;
	int16_t x871 = INT16_MIN;
	int32_t x872 = INT32_MIN;
	volatile int32_t t32 = -1;

	t32 = ((x869<<(x870&x871))&x872);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x893 = 357;
	int32_t x894 = INT32_MIN;
	static uint32_t x895 = 192767647U;
	int8_t x896 = -1;
	int32_t t33 = 2974150;

	t33 = ((x893<<(x894&x895))&x896);

	if (t33 != 357) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x897 = UINT8_MAX;
	static int8_t x898 = -2;
	static uint16_t x899 = 3U;
	uint32_t x900 = 3830U;
	static uint32_t t34 = 268319682U;

	t34 = ((x897<<(x898&x899))&x900);

	if (t34 != 756U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x926 = INT16_MIN;
	int32_t x928 = 20;
	int32_t t35 = -2307424;

	t35 = ((x925<<(x926&x927))&x928);

	if (t35 != 16) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x941 = INT32_MAX;
	static int64_t x942 = INT64_MIN;
	uint16_t x943 = 38U;
	int64_t x944 = -26893996LL;
	int64_t t36 = -1897068687990249LL;

	t36 = ((x941<<(x942&x943))&x944);

	if (t36 != 2120589652LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x950 = UINT32_MAX;
	int32_t x951 = 1;
	uint64_t x952 = UINT64_MAX;
	uint64_t t37 = 2512671895231321526LLU;

	t37 = ((x949<<(x950&x951))&x952);

	if (t37 != 1928LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x961 = 14;
	int32_t x962 = 54;
	int64_t x963 = INT64_MIN;
	int32_t x964 = INT32_MAX;
	static int32_t t38 = 1913026;

	t38 = ((x961<<(x962&x963))&x964);

	if (t38 != 14) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x981 = 390435491U;
	int64_t x983 = -79390203845LL;
	uint16_t x984 = UINT16_MAX;
	uint32_t t39 = 59232961U;

	t39 = ((x981<<(x982&x983))&x984);

	if (t39 != 37539U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x985 = 2717LL;
	uint8_t x986 = UINT8_MAX;
	uint16_t x988 = 382U;

	t40 = ((x985<<(x986&x987))&x988);

	if (t40 != 336LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x1009 = 152638585333238698LLU;
	int32_t x1010 = -1;
	uint8_t x1011 = 24U;
	int8_t x1012 = 5;
	uint64_t t41 = 10545759289138LLU;

	t41 = ((x1009<<(x1010&x1011))&x1012);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1017 = 2173U;
	int64_t x1018 = INT64_MIN;
	uint32_t x1019 = UINT32_MAX;
	static uint8_t x1020 = 0U;
	volatile uint32_t t42 = 832589U;

	t42 = ((x1017<<(x1018&x1019))&x1020);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x1041 = 381LL;
	int32_t x1043 = INT32_MIN;
	int8_t x1044 = -1;

	t43 = ((x1041<<(x1042&x1043))&x1044);

	if (t43 != 381LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1085 = 3099836543697LLU;
	int16_t x1086 = INT16_MIN;
	static int16_t x1087 = INT16_MAX;
	int64_t x1088 = INT64_MIN;
	volatile uint64_t t44 = 255027LLU;

	t44 = ((x1085<<(x1086&x1087))&x1088);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x1106 = 4302243871647729951LLU;
	static uint8_t x1107 = 0U;
	uint16_t x1108 = UINT16_MAX;
	volatile uint32_t t45 = 1881U;

	t45 = ((x1105<<(x1106&x1107))&x1108);

	if (t45 != 310U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x1114 = -294;
	int8_t x1116 = INT8_MAX;
	volatile uint64_t t46 = 82530271921197201LLU;

	t46 = ((x1113<<(x1114&x1115))&x1116);

	if (t46 != 124LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x1118 = 970981892;
	int32_t t47 = 1064903575;

	t47 = ((x1117<<(x1118&x1119))&x1120);

	if (t47 != 36) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1133 = INT64_MAX;
	static int16_t x1134 = 1018;
	int32_t x1135 = INT32_MIN;
	int16_t x1136 = INT16_MIN;
	volatile int64_t t48 = 70486400LL;

	t48 = ((x1133<<(x1134&x1135))&x1136);

	if (t48 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x1189 = UINT64_MAX;
	int32_t x1190 = INT32_MAX;
	int32_t x1191 = INT32_MIN;
	volatile int64_t x1192 = INT64_MAX;
	volatile uint64_t t49 = 4579157502338865LLU;

	t49 = ((x1189<<(x1190&x1191))&x1192);

	if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1269 = 9612;
	uint16_t x1270 = 1U;
	volatile uint8_t x1272 = UINT8_MAX;
	volatile int32_t t50 = -38669;

	t50 = ((x1269<<(x1270&x1271))&x1272);

	if (t50 != 140) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x1295 = INT64_MAX;
	int64_t x1296 = -1LL;
	volatile int64_t t51 = -39776738LL;

	t51 = ((x1293<<(x1294&x1295))&x1296);

	if (t51 != 120LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1301 = 2U;
	int32_t x1302 = INT32_MIN;
	volatile uint16_t x1303 = 3U;
	int32_t x1304 = -2507143;
	int32_t t52 = 0;

	t52 = ((x1301<<(x1302&x1303))&x1304);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1317 = 0U;
	int32_t x1318 = INT32_MIN;
	static volatile uint8_t x1319 = 7U;
	static volatile uint32_t t53 = 15U;

	t53 = ((x1317<<(x1318&x1319))&x1320);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1349 = 81852930U;
	int64_t x1350 = -1LL;
	int16_t x1351 = 1;
	static int32_t x1352 = -1;

	t54 = ((x1349<<(x1350&x1351))&x1352);

	if (t54 != 163705860U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x1353 = 17U;
	uint8_t x1354 = 4U;
	uint32_t x1356 = 10059523U;
	uint32_t t55 = 790454U;

	t55 = ((x1353<<(x1354&x1355))&x1356);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1362 = INT16_MAX;
	int8_t x1364 = INT8_MIN;
	int32_t t56 = -7;

	t56 = ((x1361<<(x1362&x1363))&x1364);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x1365 = UINT8_MAX;
	uint8_t x1366 = 0U;
	int16_t x1367 = INT16_MIN;
	int8_t x1368 = INT8_MIN;
	volatile int32_t t57 = 253065588;

	t57 = ((x1365<<(x1366&x1367))&x1368);

	if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1377 = 427461LLU;
	volatile int8_t x1378 = INT8_MIN;
	volatile uint32_t x1379 = 7U;
	uint8_t x1380 = UINT8_MAX;
	static volatile uint64_t t58 = 1205637877245LLU;

	t58 = ((x1377<<(x1378&x1379))&x1380);

	if (t58 != 197LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x1389 = 76U;
	volatile int8_t x1390 = 4;
	int32_t x1391 = INT32_MAX;
	uint8_t x1392 = UINT8_MAX;

	t59 = ((x1389<<(x1390&x1391))&x1392);

	if (t59 != 192) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1401 = 76U;
	int16_t x1402 = 15952;
	int8_t x1403 = 1;

	t60 = ((x1401<<(x1402&x1403))&x1404);

	if (t60 != 76) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1430 = INT8_MIN;
	int8_t x1431 = INT8_MAX;
	int32_t x1432 = -1;
	int32_t t61 = -10220468;

	t61 = ((x1429<<(x1430&x1431))&x1432);

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x1434 = 9943;
	static int16_t x1435 = INT16_MIN;
	uint8_t x1436 = 0U;
	static int32_t t62 = -785;

	t62 = ((x1433<<(x1434&x1435))&x1436);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1465 = 8252330840LLU;
	uint32_t x1466 = 38U;
	int16_t x1467 = INT16_MIN;
	int16_t x1468 = -1;
	volatile uint64_t t63 = 122373867LLU;

	t63 = ((x1465<<(x1466&x1467))&x1468);

	if (t63 != 8252330840LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1493 = 550901103119443965LLU;
	uint8_t x1494 = 1U;
	int32_t x1495 = INT32_MIN;
	volatile int64_t x1496 = INT64_MIN;
	uint64_t t64 = 4LLU;

	t64 = ((x1493<<(x1494&x1495))&x1496);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1501 = 20;
	volatile int8_t x1502 = 19;
	volatile int64_t x1503 = -1LL;
	uint8_t x1504 = 0U;
	static int32_t t65 = 9363;

	t65 = ((x1501<<(x1502&x1503))&x1504);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x1509 = INT16_MAX;
	volatile int64_t x1510 = INT64_MAX;
	int8_t x1511 = 16;
	uint32_t t66 = 162173U;

	t66 = ((x1509<<(x1510&x1511))&x1512);

	if (t66 != 2147418112U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1561 = 2961LL;
	uint16_t x1562 = 0U;
	int8_t x1563 = -41;
	int32_t x1564 = 3;
	int64_t t67 = -10588222LL;

	t67 = ((x1561<<(x1562&x1563))&x1564);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x1569 = INT8_MAX;
	static volatile int32_t x1571 = INT32_MIN;

	t68 = ((x1569<<(x1570&x1571))&x1572);

	if (t68 != 127LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x1577 = UINT64_MAX;
	int64_t x1578 = INT64_MIN;
	uint64_t x1580 = 104LLU;
	volatile uint64_t t69 = 2305978LLU;

	t69 = ((x1577<<(x1578&x1579))&x1580);

	if (t69 != 104LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1585 = INT32_MAX;
	int8_t x1586 = INT8_MIN;
	volatile int8_t x1587 = 55;
	volatile int32_t t70 = 7376;

	t70 = ((x1585<<(x1586&x1587))&x1588);

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x1589 = 495;
	static int32_t x1591 = 5;
	uint64_t x1592 = 6773384648112234965LLU;
	volatile uint64_t t71 = 438LLU;

	t71 = ((x1589<<(x1590&x1591))&x1592);

	if (t71 != 453LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1613 = 60086447U;
	uint8_t x1615 = 5U;
	static volatile uint32_t x1616 = 394U;
	uint32_t t72 = 1872202U;

	t72 = ((x1613<<(x1614&x1615))&x1616);

	if (t72 != 384U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x1621 = 38;
	int16_t x1622 = 118;
	int64_t x1623 = INT64_MIN;
	uint8_t x1624 = UINT8_MAX;
	volatile int32_t t73 = 120581;

	t73 = ((x1621<<(x1622&x1623))&x1624);

	if (t73 != 38) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x1633 = 809772U;
	static uint8_t x1634 = 14U;
	int16_t x1635 = -1;
	static volatile uint32_t t74 = 75260303U;

	t74 = ((x1633<<(x1634&x1635))&x1636);

	if (t74 != 382402560U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1645 = UINT32_MAX;
	uint8_t x1646 = 24U;
	static int32_t x1648 = INT32_MIN;
	static volatile uint32_t t75 = 6733256U;

	t75 = ((x1645<<(x1646&x1647))&x1648);

	if (t75 != 2147483648U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x1657 = 1448921LLU;
	uint8_t x1659 = UINT8_MAX;
	static volatile int8_t x1660 = -1;

	t76 = ((x1657<<(x1658&x1659))&x1660);

	if (t76 != 1448921LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x1670 = INT16_MAX;
	volatile int32_t t77 = 2046640;

	t77 = ((x1669<<(x1670&x1671))&x1672);

	if (t77 != 40) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1684 = INT8_MAX;

	t78 = ((x1681<<(x1682&x1683))&x1684);

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x1686 = -1618606552371773LL;
	uint16_t x1688 = UINT16_MAX;
	static volatile int32_t t79 = 42604253;

	t79 = ((x1685<<(x1686&x1687))&x1688);

	if (t79 != 2040) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x1701 = INT8_MAX;
	volatile int64_t x1702 = 31235290791LL;
	static uint64_t x1704 = UINT64_MAX;

	t80 = ((x1701<<(x1702&x1703))&x1704);

	if (t80 != 508LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1705 = INT8_MAX;
	static uint16_t x1706 = 2U;
	uint16_t x1707 = 1724U;
	volatile int32_t t81 = 992836501;

	t81 = ((x1705<<(x1706&x1707))&x1708);

	if (t81 != 122) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1777 = UINT64_MAX;
	uint8_t x1778 = 0U;
	uint8_t x1779 = UINT8_MAX;
	uint32_t x1780 = UINT32_MAX;

	t82 = ((x1777<<(x1778&x1779))&x1780);

	if (t82 != 4294967295LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x1785 = 10U;
	static volatile int32_t x1787 = INT32_MIN;
	int32_t x1788 = 38151;
	static int32_t t83 = 2081;

	t83 = ((x1785<<(x1786&x1787))&x1788);

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x1789 = UINT64_MAX;
	int16_t x1792 = 0;
	volatile uint64_t t84 = 913LLU;

	t84 = ((x1789<<(x1790&x1791))&x1792);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x1809 = 1057056180;
	int32_t x1810 = INT32_MIN;
	volatile uint16_t x1811 = 1165U;
	static int16_t x1812 = 8111;
	volatile int32_t t85 = 33841229;

	t85 = ((x1809<<(x1810&x1811))&x1812);

	if (t85 != 1444) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1814 = 55LLU;
	volatile int32_t x1815 = 7675;
	static int32_t x1816 = -1;
	volatile uint64_t t86 = 75533215758937353LLU;

	t86 = ((x1813<<(x1814&x1815))&x1816);

	if (t86 != 1501950475728060416LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x1842 = 7U;
	int8_t x1843 = INT8_MIN;

	t87 = ((x1841<<(x1842&x1843))&x1844);

	if (t87 != 480LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1849 = 1;
	static uint64_t x1850 = 70LLU;
	int16_t x1851 = INT16_MIN;
	static int16_t x1852 = 1;
	volatile int32_t t88 = 9805459;

	t88 = ((x1849<<(x1850&x1851))&x1852);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1861 = 3050;
	int32_t x1862 = INT32_MIN;
	static volatile int16_t x1863 = 16;
	int64_t x1864 = 6094LL;
	int64_t t89 = -3184426853094LL;

	t89 = ((x1861<<(x1862&x1863))&x1864);

	if (t89 != 970LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x1869 = UINT16_MAX;
	int32_t x1870 = INT32_MIN;
	uint16_t x1871 = 20487U;
	static int64_t x1872 = -1LL;
	volatile int64_t t90 = 164700535037886637LL;

	t90 = ((x1869<<(x1870&x1871))&x1872);

	if (t90 != 65535LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1885 = INT8_MAX;
	int8_t x1886 = INT8_MAX;
	int64_t x1888 = INT64_MIN;
	static int64_t t91 = 5LL;

	t91 = ((x1885<<(x1886&x1887))&x1888);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x1894 = INT64_MAX;
	uint32_t x1896 = 30426U;

	t92 = ((x1893<<(x1894&x1895))&x1896);

	if (t92 != 90U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x1921 = 1U;
	uint32_t x1923 = 26U;
	uint32_t x1924 = 264728U;
	volatile uint32_t t93 = 177U;

	t93 = ((x1921<<(x1922&x1923))&x1924);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x1941 = 27;
	volatile uint8_t x1943 = 0U;
	int64_t t94 = -753229770017855LL;

	t94 = ((x1941<<(x1942&x1943))&x1944);

	if (t94 != 27LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x1949 = 53U;
	static int64_t x1950 = INT64_MIN;
	volatile int8_t x1951 = 0;
	int64_t t95 = 6748921LL;

	t95 = ((x1949<<(x1950&x1951))&x1952);

	if (t95 != 4LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x2001 = INT8_MAX;
	uint8_t x2002 = 26U;
	int32_t x2003 = INT32_MIN;
	int64_t x2004 = INT64_MIN;
	volatile int64_t t96 = 18375135LL;

	t96 = ((x2001<<(x2002&x2003))&x2004);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x2005 = INT16_MAX;
	static volatile uint64_t x2006 = 7LLU;
	static int8_t x2007 = INT8_MIN;
	static int32_t x2008 = 2;
	volatile int32_t t97 = -36412;

	t97 = ((x2005<<(x2006&x2007))&x2008);

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x2010 = UINT32_MAX;
	int64_t x2011 = INT64_MIN;
	volatile int16_t x2012 = -1;
	int32_t t98 = -10;

	t98 = ((x2009<<(x2010&x2011))&x2012);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x2037 = 1U;
	static uint8_t x2038 = 1U;
	int16_t x2039 = 5;
	uint8_t x2040 = UINT8_MAX;
	volatile int32_t t99 = 62944560;

	t99 = ((x2037<<(x2038&x2039))&x2040);

	if (t99 != 2) { NG(); } else { ; }
	
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

