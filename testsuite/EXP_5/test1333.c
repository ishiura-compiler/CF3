#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x96 = 1;
volatile uint16_t x110 = UINT16_MAX;
int32_t t2 = -36657;
volatile int64_t x155 = INT64_MIN;
uint32_t t3 = 215737U;
uint64_t x174 = 1093068106053LLU;
uint32_t x176 = 0U;
volatile int32_t t4 = -1319188;
uint32_t x182 = 51U;
volatile int32_t t5 = 15;
volatile int64_t x395 = -1LL;
uint16_t x396 = 13U;
uint32_t x429 = UINT32_MAX;
uint16_t x492 = 4U;
uint16_t x586 = 184U;
int64_t x774 = -4877986119LL;
int64_t x811 = -1LL;
static volatile int32_t t16 = 156037103;
static int32_t t17 = 6970869;
uint32_t x997 = UINT32_MAX;
uint32_t x1047 = UINT32_MAX;
static int8_t x1048 = 0;
uint8_t x1088 = 0U;
volatile uint32_t x1124 = 3U;
uint8_t x1217 = 123U;
uint64_t x1250 = 2735754838LLU;
uint16_t x1251 = 2U;
int32_t x1269 = 540;
static volatile int32_t x1271 = 7360538;
int32_t x1418 = INT32_MAX;
static int32_t t30 = -9977430;
int64_t x1447 = INT64_MIN;
static uint8_t x1448 = 0U;
int32_t x1462 = 12153701;
int32_t t33 = -8;
uint16_t x1652 = 4U;
volatile int32_t t36 = -1;
uint8_t x1796 = 3U;
static int16_t x1815 = -9;
uint16_t x1836 = 1U;
uint8_t x1837 = 1U;
int32_t x1866 = -1;
uint8_t x1924 = 11U;
int8_t x2002 = -1;
int32_t x2003 = -1;
static int8_t x2029 = INT8_MAX;
int8_t x2030 = -1;
uint8_t x2031 = 113U;
int64_t x2169 = INT64_MAX;
int64_t x2170 = -76445035605962109LL;
volatile int64_t t48 = 7984735173097LL;
static int16_t x2287 = INT16_MIN;
volatile int32_t t52 = -45268903;
volatile int8_t x2424 = 0;
uint32_t t53 = 16U;
int64_t x2462 = -1258660664016891LL;
uint8_t x2492 = 10U;
volatile uint64_t x2521 = 568532049918LLU;
volatile uint64_t t56 = 3908715536308650824LLU;
volatile uint64_t t57 = 283771496233122239LLU;
volatile uint64_t x2545 = UINT64_MAX;
static uint64_t x2657 = UINT64_MAX;
int16_t x2857 = 1;
static int8_t x2858 = INT8_MIN;
static volatile int16_t x2860 = 1;
static volatile int32_t t64 = -31271043;
uint64_t x3025 = UINT64_MAX;
int32_t t67 = 40;
int32_t t69 = INT32_MAX;
volatile int32_t t73 = -1;
volatile uint16_t x3341 = UINT16_MAX;
int16_t x3428 = 0;
int64_t x3622 = INT64_MIN;
int8_t x3665 = INT8_MAX;
uint64_t x3666 = 251284971376021LLU;
uint32_t x3722 = UINT32_MAX;
uint16_t x3723 = UINT16_MAX;
int8_t x3780 = 6;
int8_t x3805 = 6;
volatile int8_t x3807 = INT8_MIN;
volatile uint16_t x3808 = 19U;
uint64_t x3918 = 4359677107505345854LLU;
static uint32_t x3969 = 470644U;
static volatile uint32_t x3970 = UINT32_MAX;
uint16_t x3973 = 1777U;
volatile int64_t x3975 = INT64_MIN;
volatile int32_t t83 = -89759790;
int32_t x4133 = 3508689;
uint16_t x4136 = 1U;
int8_t x4139 = -1;
static volatile uint64_t t86 = 545509271213LLU;
volatile int16_t x4170 = -1;
uint8_t x4176 = 15U;
uint8_t x4227 = UINT8_MAX;
uint64_t x4228 = 2LLU;
static uint64_t x4257 = UINT64_MAX;
uint8_t x4260 = 0U;
uint64_t x4287 = 434602965870742763LLU;
int8_t x4445 = 15;
uint16_t x4446 = 6452U;
int16_t x4486 = INT16_MIN;
volatile int64_t x4503 = INT64_MIN;
int32_t x4595 = 9934;
int16_t x4596 = 1;
static int8_t x4779 = INT8_MIN;
uint64_t x4862 = 0LLU;
volatile int16_t x4863 = 46;


void f0(void) {
	int8_t x93 = INT8_MAX;
	int16_t x94 = -9;
	int64_t x95 = 548084567473LL;
	int32_t t0 = -72347;

	t0 = (x93>>((x94==x95)|x96));

	if (t0 != 63) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x109 = 7U;
	int8_t x111 = INT8_MIN;
	volatile uint64_t x112 = 0LLU;
	int32_t t1 = -1;

	t1 = (x109>>((x110==x111)|x112));

	if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x133 = 1U;
	static uint32_t x134 = 529235U;
	int16_t x135 = -1;
	uint16_t x136 = 0U;

	t2 = (x133>>((x134==x135)|x136));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x153 = UINT32_MAX;
	uint64_t x154 = UINT64_MAX;
	int8_t x156 = 3;

	t3 = (x153>>((x154==x155)|x156));

	if (t3 != 536870911U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x173 = INT16_MAX;
	static int32_t x175 = INT32_MIN;

	t4 = (x173>>((x174==x175)|x176));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x181 = 62U;
	volatile int64_t x183 = 1792035036114LL;
	static int8_t x184 = 10;

	t5 = (x181>>((x182==x183)|x184));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x201 = INT16_MAX;
	int64_t x202 = INT64_MIN;
	int32_t x203 = INT32_MIN;
	uint16_t x204 = 1U;
	int32_t t6 = 24;

	t6 = (x201>>((x202==x203)|x204));

	if (t6 != 16383) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x345 = 61U;
	int8_t x346 = -1;
	uint64_t x347 = 20272316LLU;
	static volatile uint16_t x348 = 18U;
	volatile int32_t t7 = 2210;

	t7 = (x345>>((x346==x347)|x348));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x377 = UINT8_MAX;
	int64_t x378 = INT64_MIN;
	int8_t x379 = INT8_MIN;
	static volatile uint8_t x380 = 2U;
	int32_t t8 = 3037782;

	t8 = (x377>>((x378==x379)|x380));

	if (t8 != 63) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x389 = 2592739U;
	int8_t x390 = INT8_MIN;
	int32_t x391 = -62072;
	static int32_t x392 = 0;
	volatile uint32_t t9 = 463317U;

	t9 = (x389>>((x390==x391)|x392));

	if (t9 != 2592739U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x393 = INT16_MAX;
	int8_t x394 = INT8_MIN;
	int32_t t10 = 12;

	t10 = (x393>>((x394==x395)|x396));

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x430 = 9;
	int64_t x431 = INT64_MIN;
	uint8_t x432 = 1U;
	uint32_t t11 = 939524U;

	t11 = (x429>>((x430==x431)|x432));

	if (t11 != 2147483647U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x489 = INT64_MAX;
	int32_t x490 = INT32_MAX;
	static volatile int32_t x491 = INT32_MAX;
	int64_t t12 = 7269138592LL;

	t12 = (x489>>((x490==x491)|x492));

	if (t12 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x569 = 3369LLU;
	int32_t x570 = INT32_MIN;
	volatile int32_t x571 = 0;
	uint16_t x572 = 25U;
	uint64_t t13 = 11439637LLU;

	t13 = (x569>>((x570==x571)|x572));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x585 = INT32_MAX;
	uint16_t x587 = UINT16_MAX;
	int8_t x588 = 1;
	volatile int32_t t14 = -5275;

	t14 = (x585>>((x586==x587)|x588));

	if (t14 != 1073741823) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x773 = 1;
	uint16_t x775 = 127U;
	volatile int16_t x776 = 1;
	volatile int32_t t15 = 6;

	t15 = (x773>>((x774==x775)|x776));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x809 = 5436U;
	static int64_t x810 = -1LL;
	uint8_t x812 = 2U;

	t16 = (x809>>((x810==x811)|x812));

	if (t16 != 679) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x937 = 1308U;
	int16_t x938 = INT16_MAX;
	int16_t x939 = -78;
	volatile uint32_t x940 = 1U;

	t17 = (x937>>((x938==x939)|x940));

	if (t17 != 654) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x989 = 7438LLU;
	static volatile int32_t x990 = INT32_MAX;
	int8_t x991 = INT8_MAX;
	uint8_t x992 = 3U;
	volatile uint64_t t18 = 177LLU;

	t18 = (x989>>((x990==x991)|x992));

	if (t18 != 929LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x998 = 1;
	static int16_t x999 = INT16_MIN;
	int64_t x1000 = 0LL;
	uint32_t t19 = UINT32_MAX;

	t19 = (x997>>((x998==x999)|x1000));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1021 = UINT16_MAX;
	int8_t x1022 = 12;
	int16_t x1023 = -42;
	static uint32_t x1024 = 14U;
	static int32_t t20 = 12980164;

	t20 = (x1021>>((x1022==x1023)|x1024));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1045 = 55;
	volatile int32_t x1046 = -1;
	volatile int32_t t21 = -67485;

	t21 = (x1045>>((x1046==x1047)|x1048));

	if (t21 != 27) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x1085 = UINT8_MAX;
	volatile uint64_t x1086 = 68349LLU;
	int16_t x1087 = INT16_MIN;
	volatile int32_t t22 = 3944765;

	t22 = (x1085>>((x1086==x1087)|x1088));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x1121 = INT8_MAX;
	uint16_t x1122 = 10506U;
	int64_t x1123 = 9623965238955LL;
	int32_t t23 = -12;

	t23 = (x1121>>((x1122==x1123)|x1124));

	if (t23 != 15) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x1177 = INT16_MAX;
	int8_t x1178 = INT8_MIN;
	static uint8_t x1179 = UINT8_MAX;
	int64_t x1180 = 29LL;
	int32_t t24 = -459;

	t24 = (x1177>>((x1178==x1179)|x1180));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1218 = INT16_MIN;
	static int16_t x1219 = INT16_MIN;
	int32_t x1220 = 21;
	volatile int32_t t25 = 0;

	t25 = (x1217>>((x1218==x1219)|x1220));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x1225 = UINT16_MAX;
	int32_t x1226 = INT32_MAX;
	int16_t x1227 = INT16_MIN;
	int32_t x1228 = 0;
	static volatile int32_t t26 = -29541;

	t26 = (x1225>>((x1226==x1227)|x1228));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1249 = UINT32_MAX;
	int8_t x1252 = 0;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = (x1249>>((x1250==x1251)|x1252));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1270 = 18U;
	uint8_t x1272 = 23U;
	int32_t t28 = 1440173;

	t28 = (x1269>>((x1270==x1271)|x1272));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1357 = INT64_MAX;
	int32_t x1358 = INT32_MIN;
	int64_t x1359 = -2093426307LL;
	uint8_t x1360 = 0U;
	static int64_t t29 = INT64_MAX;

	t29 = (x1357>>((x1358==x1359)|x1360));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1417 = INT8_MAX;
	uint64_t x1419 = 263927670624LLU;
	int8_t x1420 = 1;

	t30 = (x1417>>((x1418==x1419)|x1420));

	if (t30 != 63) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1437 = 11060;
	int8_t x1438 = INT8_MIN;
	int8_t x1439 = INT8_MIN;
	uint8_t x1440 = 3U;
	int32_t t31 = -1810;

	t31 = (x1437>>((x1438==x1439)|x1440));

	if (t31 != 1382) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1445 = 7U;
	uint16_t x1446 = UINT16_MAX;
	volatile int32_t t32 = -256;

	t32 = (x1445>>((x1446==x1447)|x1448));

	if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1461 = 1;
	int64_t x1463 = INT64_MIN;
	uint16_t x1464 = 0U;

	t33 = (x1461>>((x1462==x1463)|x1464));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1565 = 10749528291LLU;
	volatile int32_t x1566 = INT32_MIN;
	int8_t x1567 = INT8_MIN;
	uint8_t x1568 = 1U;
	volatile uint64_t t34 = 514139347LLU;

	t34 = (x1565>>((x1566==x1567)|x1568));

	if (t34 != 5374764145LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x1613 = 2U;
	int8_t x1614 = 1;
	int32_t x1615 = INT32_MIN;
	uint32_t x1616 = 5U;
	int32_t t35 = -114;

	t35 = (x1613>>((x1614==x1615)|x1616));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x1649 = 5;
	int64_t x1650 = 52946992392669LL;
	int16_t x1651 = INT16_MIN;

	t36 = (x1649>>((x1650==x1651)|x1652));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x1721 = 57120949;
	int32_t x1722 = -1;
	static int32_t x1723 = 1272435;
	uint8_t x1724 = 1U;
	static int32_t t37 = -141;

	t37 = (x1721>>((x1722==x1723)|x1724));

	if (t37 != 28560474) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1793 = 49921300LLU;
	volatile int64_t x1794 = -1LL;
	volatile int8_t x1795 = INT8_MAX;
	static volatile uint64_t t38 = 4206147450790263469LLU;

	t38 = (x1793>>((x1794==x1795)|x1796));

	if (t38 != 6240162LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1813 = 653081;
	int16_t x1814 = INT16_MIN;
	uint16_t x1816 = 1U;
	int32_t t39 = -4319;

	t39 = (x1813>>((x1814==x1815)|x1816));

	if (t39 != 326540) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1833 = INT8_MAX;
	static uint32_t x1834 = UINT32_MAX;
	volatile int64_t x1835 = INT64_MIN;
	int32_t t40 = 949674;

	t40 = (x1833>>((x1834==x1835)|x1836));

	if (t40 != 63) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1838 = 20786LL;
	int16_t x1839 = 1604;
	volatile uint32_t x1840 = 8U;
	volatile int32_t t41 = -518637552;

	t41 = (x1837>>((x1838==x1839)|x1840));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1865 = INT64_MAX;
	int8_t x1867 = INT8_MIN;
	uint16_t x1868 = 43U;
	int64_t t42 = 12236560397108921LL;

	t42 = (x1865>>((x1866==x1867)|x1868));

	if (t42 != 1048575LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1921 = UINT16_MAX;
	static int32_t x1922 = -433061;
	static uint16_t x1923 = 28U;
	int32_t t43 = 3921;

	t43 = (x1921>>((x1922==x1923)|x1924));

	if (t43 != 31) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x2001 = 1U;
	volatile uint8_t x2004 = 7U;
	volatile int32_t t44 = -400459;

	t44 = (x2001>>((x2002==x2003)|x2004));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x2032 = 31U;
	int32_t t45 = 2;

	t45 = (x2029>>((x2030==x2031)|x2032));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x2077 = 44;
	static uint64_t x2078 = 72685484478522LLU;
	int16_t x2079 = INT16_MIN;
	uint8_t x2080 = 23U;
	volatile int32_t t46 = -436309;

	t46 = (x2077>>((x2078==x2079)|x2080));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2089 = 4;
	static uint32_t x2090 = 75U;
	static volatile uint32_t x2091 = 20U;
	volatile int32_t x2092 = 3;
	volatile int32_t t47 = -3;

	t47 = (x2089>>((x2090==x2091)|x2092));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2171 = -33;
	uint32_t x2172 = 1U;

	t48 = (x2169>>((x2170==x2171)|x2172));

	if (t48 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2237 = 1;
	volatile int16_t x2238 = -7516;
	int8_t x2239 = -1;
	uint32_t x2240 = 8U;
	static volatile int32_t t49 = -175393976;

	t49 = (x2237>>((x2238==x2239)|x2240));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2285 = 0;
	int32_t x2286 = INT32_MAX;
	volatile uint8_t x2288 = 1U;
	volatile int32_t t50 = 3840;

	t50 = (x2285>>((x2286==x2287)|x2288));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2305 = 26739U;
	volatile int64_t x2306 = -1883LL;
	volatile uint16_t x2307 = 121U;
	uint16_t x2308 = 23U;
	int32_t t51 = -685672404;

	t51 = (x2305>>((x2306==x2307)|x2308));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x2345 = UINT16_MAX;
	uint16_t x2346 = UINT16_MAX;
	static int32_t x2347 = INT32_MAX;
	uint16_t x2348 = 22U;

	t52 = (x2345>>((x2346==x2347)|x2348));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2421 = 0U;
	volatile uint64_t x2422 = 49570291815LLU;
	int32_t x2423 = INT32_MAX;

	t53 = (x2421>>((x2422==x2423)|x2424));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x2461 = 277U;
	int64_t x2463 = 33525965LL;
	static int64_t x2464 = 17LL;
	volatile int32_t t54 = -2;

	t54 = (x2461>>((x2462==x2463)|x2464));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2489 = INT8_MAX;
	int64_t x2490 = INT64_MIN;
	volatile int32_t x2491 = -116231278;
	volatile int32_t t55 = -684721;

	t55 = (x2489>>((x2490==x2491)|x2492));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2522 = 3729793615732064LLU;
	volatile int8_t x2523 = INT8_MIN;
	static int8_t x2524 = 1;

	t56 = (x2521>>((x2522==x2523)|x2524));

	if (t56 != 284266024959LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2525 = 822702542759233655LLU;
	uint32_t x2526 = UINT32_MAX;
	uint16_t x2527 = 6U;
	static uint16_t x2528 = 14U;

	t57 = (x2525>>((x2526==x2527)|x2528));

	if (t57 != 50213778244582LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2546 = 1U;
	uint16_t x2547 = UINT16_MAX;
	static uint8_t x2548 = 10U;
	uint64_t t58 = 3043846977535759358LLU;

	t58 = (x2545>>((x2546==x2547)|x2548));

	if (t58 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2569 = 175376860014752139LLU;
	int64_t x2570 = INT64_MIN;
	int16_t x2571 = INT16_MIN;
	uint8_t x2572 = 1U;
	uint64_t t59 = 49883LLU;

	t59 = (x2569>>((x2570==x2571)|x2572));

	if (t59 != 87688430007376069LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x2585 = UINT16_MAX;
	int16_t x2586 = 34;
	volatile int64_t x2587 = INT64_MIN;
	static uint16_t x2588 = 1U;
	int32_t t60 = -810581;

	t60 = (x2585>>((x2586==x2587)|x2588));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2658 = 436U;
	int64_t x2659 = -1LL;
	int8_t x2660 = 1;
	uint64_t t61 = 7479426204487781923LLU;

	t61 = (x2657>>((x2658==x2659)|x2660));

	if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x2661 = 3734U;
	volatile uint8_t x2662 = UINT8_MAX;
	int32_t x2663 = 603345;
	uint8_t x2664 = 0U;
	int32_t t62 = -5945;

	t62 = (x2661>>((x2662==x2663)|x2664));

	if (t62 != 3734) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2721 = 2LLU;
	static int64_t x2722 = 208LL;
	volatile uint64_t x2723 = 12202248370995025LLU;
	uint16_t x2724 = 2U;
	volatile uint64_t t63 = 2590436279LLU;

	t63 = (x2721>>((x2722==x2723)|x2724));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x2859 = 5198460325810158431LLU;

	t64 = (x2857>>((x2858==x2859)|x2860));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2885 = 46U;
	int64_t x2886 = INT64_MAX;
	int64_t x2887 = 51383651723994966LL;
	uint32_t x2888 = 1U;
	int32_t t65 = 1;

	t65 = (x2885>>((x2886==x2887)|x2888));

	if (t65 != 23) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3026 = 3U;
	volatile uint16_t x3027 = 10336U;
	int8_t x3028 = 21;
	uint64_t t66 = 3LLU;

	t66 = (x3025>>((x3026==x3027)|x3028));

	if (t66 != 8796093022207LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x3065 = INT16_MAX;
	volatile int8_t x3066 = INT8_MIN;
	uint64_t x3067 = UINT64_MAX;
	uint8_t x3068 = 4U;

	t67 = (x3065>>((x3066==x3067)|x3068));

	if (t67 != 2047) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3129 = 4864LLU;
	int8_t x3130 = -36;
	volatile uint8_t x3131 = 46U;
	static uint8_t x3132 = 7U;
	static volatile uint64_t t68 = 10753736159051599LLU;

	t68 = (x3129>>((x3130==x3131)|x3132));

	if (t68 != 38LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3133 = INT32_MAX;
	volatile uint8_t x3134 = 8U;
	int16_t x3135 = INT16_MIN;
	static volatile uint8_t x3136 = 0U;

	t69 = (x3133>>((x3134==x3135)|x3136));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x3137 = 6U;
	int16_t x3138 = INT16_MIN;
	volatile int8_t x3139 = INT8_MIN;
	int8_t x3140 = 1;
	int32_t t70 = 16233;

	t70 = (x3137>>((x3138==x3139)|x3140));

	if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x3149 = 32U;
	uint64_t x3150 = UINT64_MAX;
	uint64_t x3151 = UINT64_MAX;
	int8_t x3152 = 7;
	int32_t t71 = 11;

	t71 = (x3149>>((x3150==x3151)|x3152));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x3161 = 0;
	int32_t x3162 = -1;
	int16_t x3163 = INT16_MAX;
	uint16_t x3164 = 9U;
	volatile int32_t t72 = 29494818;

	t72 = (x3161>>((x3162==x3163)|x3164));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3281 = INT32_MAX;
	uint32_t x3282 = UINT32_MAX;
	uint16_t x3283 = 142U;
	int16_t x3284 = 29;

	t73 = (x3281>>((x3282==x3283)|x3284));

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x3342 = -1;
	uint16_t x3343 = 319U;
	volatile int8_t x3344 = 2;
	static volatile int32_t t74 = 596;

	t74 = (x3341>>((x3342==x3343)|x3344));

	if (t74 != 16383) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3425 = INT64_MAX;
	int32_t x3426 = INT32_MIN;
	uint64_t x3427 = 15119132665576009LLU;
	int64_t t75 = INT64_MAX;

	t75 = (x3425>>((x3426==x3427)|x3428));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3621 = INT64_MAX;
	static volatile uint8_t x3623 = 44U;
	int16_t x3624 = 11;
	volatile int64_t t76 = 96463877546LL;

	t76 = (x3621>>((x3622==x3623)|x3624));

	if (t76 != 4503599627370495LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x3667 = 15U;
	static volatile int8_t x3668 = 0;
	int32_t t77 = 43869;

	t77 = (x3665>>((x3666==x3667)|x3668));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3721 = INT64_MAX;
	volatile int8_t x3724 = 2;
	int64_t t78 = 633375411318314LL;

	t78 = (x3721>>((x3722==x3723)|x3724));

	if (t78 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x3777 = 2949U;
	volatile int32_t x3778 = INT32_MAX;
	int8_t x3779 = 20;
	volatile int32_t t79 = 1;

	t79 = (x3777>>((x3778==x3779)|x3780));

	if (t79 != 46) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x3806 = 5894584U;
	int32_t t80 = -798;

	t80 = (x3805>>((x3806==x3807)|x3808));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x3917 = 23;
	int8_t x3919 = 0;
	volatile int8_t x3920 = 30;
	int32_t t81 = -205824513;

	t81 = (x3917>>((x3918==x3919)|x3920));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x3971 = -54;
	uint16_t x3972 = 2U;
	volatile uint32_t t82 = 27738761U;

	t82 = (x3969>>((x3970==x3971)|x3972));

	if (t82 != 117661U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3974 = 13336;
	uint32_t x3976 = 20U;

	t83 = (x3973>>((x3974==x3975)|x3976));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x4093 = INT16_MAX;
	int16_t x4094 = 5;
	uint8_t x4095 = UINT8_MAX;
	volatile uint64_t x4096 = 0LLU;
	int32_t t84 = 242543;

	t84 = (x4093>>((x4094==x4095)|x4096));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x4134 = INT64_MAX;
	volatile int64_t x4135 = -1LL;
	volatile int32_t t85 = -337169;

	t85 = (x4133>>((x4134==x4135)|x4136));

	if (t85 != 1754344) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4137 = 6108LLU;
	static int64_t x4138 = 6016470546423LL;
	int8_t x4140 = 3;

	t86 = (x4137>>((x4138==x4139)|x4140));

	if (t86 != 763LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4157 = INT16_MAX;
	uint8_t x4158 = 7U;
	uint16_t x4159 = 22U;
	static int16_t x4160 = 4;
	static volatile int32_t t87 = 613;

	t87 = (x4157>>((x4158==x4159)|x4160));

	if (t87 != 2047) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4169 = 7;
	int64_t x4171 = INT64_MIN;
	int8_t x4172 = 0;
	volatile int32_t t88 = 7252074;

	t88 = (x4169>>((x4170==x4171)|x4172));

	if (t88 != 7) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x4173 = INT16_MAX;
	volatile int32_t x4174 = INT32_MAX;
	int32_t x4175 = 270;
	static volatile int32_t t89 = -88;

	t89 = (x4173>>((x4174==x4175)|x4176));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x4209 = 18U;
	static volatile int8_t x4210 = INT8_MIN;
	uint64_t x4211 = 369616936LLU;
	static uint8_t x4212 = 0U;
	static volatile int32_t t90 = 789180252;

	t90 = (x4209>>((x4210==x4211)|x4212));

	if (t90 != 18) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x4225 = 0U;
	uint16_t x4226 = 22415U;
	volatile int32_t t91 = -2331638;

	t91 = (x4225>>((x4226==x4227)|x4228));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4258 = 21672719U;
	static int8_t x4259 = -1;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = (x4257>>((x4258==x4259)|x4260));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4285 = INT64_MAX;
	int64_t x4286 = INT64_MIN;
	static int8_t x4288 = 0;
	volatile int64_t t93 = INT64_MAX;

	t93 = (x4285>>((x4286==x4287)|x4288));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4447 = 47U;
	volatile uint8_t x4448 = 2U;
	int32_t t94 = -50126;

	t94 = (x4445>>((x4446==x4447)|x4448));

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x4485 = 86;
	int8_t x4487 = 2;
	uint8_t x4488 = 5U;
	volatile int32_t t95 = -487298;

	t95 = (x4485>>((x4486==x4487)|x4488));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x4501 = 0U;
	static uint64_t x4502 = UINT64_MAX;
	volatile int8_t x4504 = 0;
	int32_t t96 = 21815;

	t96 = (x4501>>((x4502==x4503)|x4504));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x4593 = UINT32_MAX;
	uint16_t x4594 = 484U;
	uint32_t t97 = 646U;

	t97 = (x4593>>((x4594==x4595)|x4596));

	if (t97 != 2147483647U) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x4777 = 496LL;
	int64_t x4778 = INT64_MAX;
	volatile uint8_t x4780 = 52U;
	int64_t t98 = -1323LL;

	t98 = (x4777>>((x4778==x4779)|x4780));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x4861 = 32U;
	static uint8_t x4864 = 25U;
	int32_t t99 = -930;

	t99 = (x4861>>((x4862==x4863)|x4864));

	if (t99 != 0) { NG(); } else { ; }
	
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

