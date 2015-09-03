#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x69 = 36U;
uint16_t x145 = UINT16_MAX;
volatile int32_t t1 = -250153818;
int8_t x318 = INT8_MAX;
int64_t t6 = 32833761007LL;
uint16_t x741 = UINT16_MAX;
int64_t x742 = INT64_MIN;
int32_t x798 = -1;
uint16_t x799 = 87U;
int32_t t13 = 13;
volatile int64_t x914 = INT64_MAX;
static int8_t x916 = 2;
volatile int64_t t15 = 111035952045354LL;
static volatile int8_t x931 = INT8_MIN;
static uint32_t x955 = 214230747U;
volatile uint32_t x992 = 16U;
uint32_t x1006 = 149619U;
int32_t x1007 = -436743;
int8_t x1112 = 8;
uint8_t x1123 = 1U;
volatile uint64_t t23 = 0LLU;
volatile int8_t x1187 = INT8_MIN;
uint8_t x1188 = 0U;
uint8_t x1369 = 0U;
uint8_t x1371 = 2U;
volatile int64_t x1437 = 156188934LL;
uint64_t x1718 = 1LLU;
volatile int8_t x1719 = -5;
volatile uint16_t x1720 = 56U;
volatile uint64_t t33 = 866771646LLU;
uint8_t x1916 = 22U;
uint8_t x1928 = 8U;
int32_t x1950 = INT32_MIN;
int32_t x1985 = INT32_MAX;
uint16_t x1987 = 5U;
volatile int64_t t38 = 453059399150LL;
int32_t t39 = 166079080;
volatile int32_t x2109 = -7155;
uint16_t x2148 = 42U;
int8_t x2165 = INT8_MAX;
volatile int32_t x2167 = -228;
int16_t x2175 = 1;
static int64_t x2199 = INT64_MIN;
uint8_t x2236 = 6U;
int32_t x2262 = 62386;
static int16_t x2288 = 0;
uint16_t x2293 = 13U;
volatile uint8_t x2295 = 19U;
int8_t x2310 = 0;
int8_t x2461 = 1;
volatile int8_t x2542 = 5;
uint16_t x2599 = 3558U;
static uint16_t x2804 = 0U;
static uint64_t x2810 = UINT64_MAX;
uint64_t t59 = 18576916LLU;
static volatile int64_t t61 = -2LL;
int8_t x3016 = 47;
uint8_t x3044 = 9U;
uint64_t t64 = 79125661LLU;
static uint8_t x3048 = 28U;
static int64_t t68 = 16246251457847LL;
static volatile int16_t x3269 = 0;
uint8_t x3312 = 1U;
static volatile uint64_t t72 = 39370LLU;
uint64_t t73 = 13764992126366LLU;
volatile uint64_t x3433 = UINT64_MAX;
volatile int8_t x3434 = 29;
uint16_t x3497 = UINT16_MAX;
static volatile uint64_t x3498 = UINT64_MAX;
int64_t x3510 = INT64_MIN;
volatile int64_t t79 = 15694974359756LL;
volatile uint64_t x3702 = UINT64_MAX;
static uint8_t x3740 = 1U;
int32_t t83 = -243754;
int32_t x3907 = INT32_MIN;
volatile int8_t x3932 = 39;
static int8_t x4078 = INT8_MAX;
int64_t t89 = -60223114695854LL;
int8_t x4202 = -1;
uint8_t x4224 = 0U;
uint8_t x4253 = UINT8_MAX;
int32_t x4254 = -15619;
uint32_t x4255 = 0U;
int8_t x4256 = 9;
int32_t x4337 = INT32_MIN;
static int8_t x4340 = 1;
static volatile uint32_t t96 = 1254450087U;
uint16_t x4361 = 3396U;
int32_t x4382 = INT32_MIN;
uint16_t x4384 = 5U;
volatile int64_t t98 = 141594222412317596LL;


void f0(void) {
	uint8_t x70 = 0U;
	int8_t x71 = -4;
	uint8_t x72 = 3U;
	static volatile int32_t t0 = -36;

	t0 = ((x69+(x70&x71))<<x72);

	if (t0 != 288) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x146 = INT8_MAX;
	int8_t x147 = 0;
	static uint8_t x148 = 2U;

	t1 = ((x145+(x146&x147))<<x148);

	if (t1 != 262140) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x169 = INT8_MAX;
	uint64_t x170 = 7081588574341LLU;
	uint16_t x171 = UINT16_MAX;
	volatile uint8_t x172 = 14U;
	volatile uint64_t t2 = 15LLU;

	t2 = ((x169+(x170&x171))<<x172);

	if (t2 != 306249728LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x237 = -11;
	int64_t x238 = -107730000445008LL;
	int8_t x239 = INT8_MAX;
	uint8_t x240 = 31U;
	int64_t t3 = 132378942104LL;

	t3 = ((x237+(x238&x239))<<x240);

	if (t3 != 79456894976LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x317 = 40LL;
	int16_t x319 = INT16_MIN;
	uint16_t x320 = 0U;
	int64_t t4 = 288LL;

	t4 = ((x317+(x318&x319))<<x320);

	if (t4 != 40LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x449 = INT16_MAX;
	int16_t x450 = INT16_MIN;
	uint16_t x451 = UINT16_MAX;
	uint8_t x452 = 1U;
	int32_t t5 = -56;

	t5 = ((x449+(x450&x451))<<x452);

	if (t5 != 131070) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x481 = 6;
	volatile int64_t x482 = INT64_MAX;
	int32_t x483 = INT32_MIN;
	int16_t x484 = 0;

	t6 = ((x481+(x482&x483))<<x484);

	if (t6 != 9223372034707292166LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x485 = 33369570164194574LLU;
	uint64_t x486 = 1888102631LLU;
	uint64_t x487 = 656633777156390LLU;
	volatile int8_t x488 = 1;
	volatile uint64_t t7 = 838083983LLU;

	t7 = ((x485+(x486&x487))<<x488);

	if (t7 != 66739144087550568LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x509 = 7U;
	int32_t x510 = INT32_MAX;
	volatile uint32_t x511 = 872309231U;
	uint8_t x512 = 1U;
	static volatile uint32_t t8 = 261U;

	t8 = ((x509+(x510&x511))<<x512);

	if (t8 != 1744618476U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x549 = INT64_MIN;
	static uint64_t x550 = 105378LLU;
	int16_t x551 = -6;
	volatile int32_t x552 = 0;
	uint64_t t9 = 7042821900497576931LLU;

	t9 = ((x549+(x550&x551))<<x552);

	if (t9 != 9223372036854881186LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x669 = 32;
	uint64_t x670 = UINT64_MAX;
	static uint32_t x671 = 30U;
	int8_t x672 = 0;
	static volatile uint64_t t10 = 62745590433LLU;

	t10 = ((x669+(x670&x671))<<x672);

	if (t10 != 62LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x733 = INT8_MIN;
	static volatile int64_t x734 = -1LL;
	int64_t x735 = 4749406387LL;
	static uint16_t x736 = 8U;
	volatile int64_t t11 = -38261LL;

	t11 = ((x733+(x734&x735))<<x736);

	if (t11 != 1215848002304LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x743 = 3110U;
	static volatile int16_t x744 = 1;
	volatile int64_t t12 = 939230LL;

	t12 = ((x741+(x742&x743))<<x744);

	if (t12 != 131070LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x797 = 4U;
	volatile uint8_t x800 = 1U;

	t13 = ((x797+(x798&x799))<<x800);

	if (t13 != 182) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x869 = 100U;
	static volatile uint16_t x870 = 22300U;
	volatile uint16_t x871 = 15226U;
	uint32_t x872 = 0U;
	static uint32_t t14 = 1281807U;

	t14 = ((x869+(x870&x871))<<x872);

	if (t14 != 4988U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x913 = -1LL;
	uint8_t x915 = 7U;

	t15 = ((x913+(x914&x915))<<x916);

	if (t15 != 24LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x929 = 1069U;
	uint32_t x930 = 687U;
	volatile int16_t x932 = 14;
	uint32_t t16 = 1U;

	t16 = ((x929+(x930&x931))<<x932);

	if (t16 != 28000256U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x953 = INT16_MIN;
	int64_t x954 = 29665290504LL;
	int8_t x956 = 1;
	int64_t t17 = -7669880000390LL;

	t17 = ((x953+(x954&x955))<<x956);

	if (t17 != 268419088LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x989 = INT32_MAX;
	uint32_t x990 = 707133083U;
	int8_t x991 = INT8_MIN;
	static uint32_t t18 = 103201U;

	t18 = ((x989+(x990&x991))<<x992);

	if (t18 != 4269735936U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1005 = 1U;
	static volatile int8_t x1008 = 7;
	uint32_t t19 = 29U;

	t19 = ((x1005+(x1006&x1007))<<x1008);

	if (t19 != 2111744U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1077 = -3631914324LL;
	uint64_t x1078 = 510393116618718549LLU;
	volatile int64_t x1079 = 363474056LL;
	int8_t x1080 = 7;
	volatile uint64_t t20 = 8128633048306245LLU;

	t20 = ((x1077+(x1078&x1079))<<x1080);

	if (t20 != 18446743646474032640LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x1085 = 395641257;
	int32_t x1086 = INT32_MIN;
	uint64_t x1087 = 0LLU;
	uint8_t x1088 = 4U;
	volatile uint64_t t21 = 53999618555795LLU;

	t21 = ((x1085+(x1086&x1087))<<x1088);

	if (t21 != 6330260112LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1109 = UINT64_MAX;
	uint32_t x1110 = UINT32_MAX;
	int32_t x1111 = 7;
	volatile uint64_t t22 = 12658298045357LLU;

	t22 = ((x1109+(x1110&x1111))<<x1112);

	if (t22 != 1536LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1121 = 5784740700204LLU;
	static uint16_t x1122 = UINT16_MAX;
	int16_t x1124 = 0;

	t23 = ((x1121+(x1122&x1123))<<x1124);

	if (t23 != 5784740700205LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x1185 = 0U;
	uint8_t x1186 = 102U;
	volatile int32_t t24 = -186399902;

	t24 = ((x1185+(x1186&x1187))<<x1188);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1281 = INT16_MIN;
	static volatile int32_t x1282 = -1;
	uint64_t x1283 = 61499303103321LLU;
	int8_t x1284 = 22;
	volatile uint64_t t25 = 13808101LLU;

	t25 = ((x1281+(x1282&x1283))<<x1284);

	if (t25 != 18139099907808559104LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1353 = 35240U;
	uint8_t x1354 = UINT8_MAX;
	int8_t x1355 = -1;
	int16_t x1356 = 1;
	uint32_t t26 = 4638219U;

	t26 = ((x1353+(x1354&x1355))<<x1356);

	if (t26 != 70990U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1370 = 914450393362LLU;
	int32_t x1372 = 1;
	uint64_t t27 = 10377405576702028LLU;

	t27 = ((x1369+(x1370&x1371))<<x1372);

	if (t27 != 4LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x1438 = 12U;
	int16_t x1439 = INT16_MAX;
	static uint8_t x1440 = 0U;
	int64_t t28 = -1635723567242999582LL;

	t28 = ((x1437+(x1438&x1439))<<x1440);

	if (t28 != 156188946LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1481 = 950;
	static volatile int64_t x1482 = INT64_MIN;
	static uint64_t x1483 = 159129205995176LLU;
	uint8_t x1484 = 25U;
	static volatile uint64_t t29 = 7228LLU;

	t29 = ((x1481+(x1482&x1483))<<x1484);

	if (t29 != 31876710400LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1493 = UINT8_MAX;
	int32_t x1494 = INT32_MIN;
	volatile uint64_t x1495 = 55LLU;
	uint8_t x1496 = 3U;
	uint64_t t30 = 64369626043159LLU;

	t30 = ((x1493+(x1494&x1495))<<x1496);

	if (t30 != 2040LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1629 = 0;
	int64_t x1630 = 2LL;
	static uint8_t x1631 = 70U;
	static uint8_t x1632 = 0U;
	int64_t t31 = -1991138129157LL;

	t31 = ((x1629+(x1630&x1631))<<x1632);

	if (t31 != 2LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1689 = -20;
	static volatile uint16_t x1690 = UINT16_MAX;
	uint8_t x1691 = UINT8_MAX;
	int16_t x1692 = 1;
	int32_t t32 = 3;

	t32 = ((x1689+(x1690&x1691))<<x1692);

	if (t32 != 470) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1717 = -4;

	t33 = ((x1717+(x1718&x1719))<<x1720);

	if (t33 != 18230571291595767808LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1757 = 12823;
	uint64_t x1758 = 3LLU;
	volatile uint32_t x1759 = 8250461U;
	uint8_t x1760 = 41U;
	static uint64_t t34 = 31104256927LLU;

	t34 = ((x1757+(x1758&x1759))<<x1760);

	if (t34 != 28200274229198848LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1913 = UINT32_MAX;
	int8_t x1914 = -1;
	volatile uint32_t x1915 = 407155246U;
	uint32_t t35 = 31257297U;

	t35 = ((x1913+(x1914&x1915))<<x1916);

	if (t35 != 2336227328U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x1925 = -1;
	static int32_t x1926 = -7;
	uint32_t x1927 = UINT32_MAX;
	uint32_t t36 = 3125U;

	t36 = ((x1925+(x1926&x1927))<<x1928);

	if (t36 != 4294965248U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1949 = 1U;
	uint32_t x1951 = 494U;
	uint32_t x1952 = 3U;
	static uint32_t t37 = 855U;

	t37 = ((x1949+(x1950&x1951))<<x1952);

	if (t37 != 8U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1986 = INT64_MAX;
	uint16_t x1988 = 5U;

	t38 = ((x1985+(x1986&x1987))<<x1988);

	if (t38 != 68719476864LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x2105 = 0U;
	volatile uint8_t x2106 = 44U;
	uint8_t x2107 = UINT8_MAX;
	uint64_t x2108 = 5LLU;

	t39 = ((x2105+(x2106&x2107))<<x2108);

	if (t39 != 1408) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2110 = 45464158004986LLU;
	int16_t x2111 = INT16_MAX;
	int8_t x2112 = 16;
	uint64_t t40 = 3001LLU;

	t40 = ((x2109+(x2110&x2111))<<x2112);

	if (t40 != 1258749952LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2145 = UINT64_MAX;
	int64_t x2146 = 3746773LL;
	uint32_t x2147 = UINT32_MAX;
	volatile uint64_t t41 = 5482540741900268544LLU;

	t41 = ((x2145+(x2146&x2147))<<x2148);

	if (t41 != 16478477522502156288LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2166 = 3870226LLU;
	static uint64_t x2168 = 3LLU;
	static uint64_t t42 = 56089840LLU;

	t42 = ((x2165+(x2166&x2167))<<x2168);

	if (t42 != 30962808LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x2173 = 167037294;
	int64_t x2174 = -1LL;
	uint32_t x2176 = 30U;
	static volatile int64_t t43 = -34LL;

	t43 = ((x2173+(x2174&x2175))<<x2176);

	if (t43 != 179354929809326080LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2197 = 28351692LLU;
	uint32_t x2198 = 56U;
	uint32_t x2200 = 35U;
	volatile uint64_t t44 = 14LLU;

	t44 = ((x2197+(x2198&x2199))<<x2200);

	if (t44 != 974156719410118656LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2233 = -38826452;
	uint32_t x2234 = 7568U;
	int16_t x2235 = INT16_MIN;
	uint32_t t45 = 0U;

	t45 = ((x2233+(x2234&x2235))<<x2236);

	if (t45 != 1810074368U) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x2261 = INT64_MIN;
	uint64_t x2263 = 407789LLU;
	static uint32_t x2264 = 1U;
	uint64_t t46 = 28398693831848LLU;

	t46 = ((x2261+(x2262&x2263))<<x2264);

	if (t46 != 24896LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x2285 = 94871;
	uint8_t x2286 = 55U;
	uint64_t x2287 = 915897631820LLU;
	volatile uint64_t t47 = 0LLU;

	t47 = ((x2285+(x2286&x2287))<<x2288);

	if (t47 != 94875LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2294 = 5259921178LLU;
	int64_t x2296 = 7LL;
	uint64_t t48 = 14644212LLU;

	t48 = ((x2293+(x2294&x2295))<<x2296);

	if (t48 != 3968LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2301 = -1LL;
	volatile uint32_t x2302 = UINT32_MAX;
	int64_t x2303 = -3442471527428726054LL;
	volatile uint8_t x2304 = 2U;
	volatile int64_t t49 = -3841LL;

	t49 = ((x2301+(x2302&x2303))<<x2304);

	if (t49 != 8738540388LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x2309 = 4;
	int64_t x2311 = -1LL;
	volatile int8_t x2312 = 0;
	static int64_t t50 = 12764004066106LL;

	t50 = ((x2309+(x2310&x2311))<<x2312);

	if (t50 != 4LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2313 = UINT8_MAX;
	static uint64_t x2314 = 1238214844LLU;
	static uint8_t x2315 = 1U;
	int16_t x2316 = 1;
	uint64_t t51 = 53386503676708991LLU;

	t51 = ((x2313+(x2314&x2315))<<x2316);

	if (t51 != 510LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2329 = 585511U;
	volatile int16_t x2330 = INT16_MIN;
	volatile uint32_t x2331 = 37446682U;
	static uint8_t x2332 = 2U;
	volatile uint32_t t52 = 6304U;

	t52 = ((x2329+(x2330&x2331))<<x2332);

	if (t52 != 152026268U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x2462 = UINT8_MAX;
	int64_t x2463 = INT64_MAX;
	volatile int8_t x2464 = 1;
	int64_t t53 = -381LL;

	t53 = ((x2461+(x2462&x2463))<<x2464);

	if (t53 != 512LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2541 = 291LL;
	static uint32_t x2543 = UINT32_MAX;
	uint8_t x2544 = 31U;
	int64_t t54 = -46LL;

	t54 = ((x2541+(x2542&x2543))<<x2544);

	if (t54 != 635655159808LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x2597 = INT16_MAX;
	int64_t x2598 = INT64_MAX;
	uint8_t x2600 = 1U;
	static volatile int64_t t55 = 2715923LL;

	t55 = ((x2597+(x2598&x2599))<<x2600);

	if (t55 != 72650LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2613 = 5;
	volatile uint64_t x2614 = 1517LLU;
	uint8_t x2615 = UINT8_MAX;
	int16_t x2616 = 12;
	volatile uint64_t t56 = 131LLU;

	t56 = ((x2613+(x2614&x2615))<<x2616);

	if (t56 != 991232LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2633 = INT16_MIN;
	volatile int32_t x2634 = 0;
	uint32_t x2635 = 178564U;
	uint8_t x2636 = 3U;
	volatile uint32_t t57 = 44761U;

	t57 = ((x2633+(x2634&x2635))<<x2636);

	if (t57 != 4294705152U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2801 = INT8_MAX;
	int16_t x2802 = -1;
	uint8_t x2803 = UINT8_MAX;
	volatile int32_t t58 = 126170;

	t58 = ((x2801+(x2802&x2803))<<x2804);

	if (t58 != 382) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x2809 = -7977;
	int32_t x2811 = -1;
	int16_t x2812 = 23;

	t59 = ((x2809+(x2810&x2811))<<x2812);

	if (t59 != 18446744006785236992LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x2901 = 1;
	uint16_t x2902 = UINT16_MAX;
	int32_t x2903 = -156588;
	uint16_t x2904 = 5U;
	static int32_t t60 = 34408;

	t60 = ((x2901+(x2902&x2903))<<x2904);

	if (t60 != 1280672) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2905 = 1U;
	static volatile uint32_t x2906 = 30U;
	int64_t x2907 = -1LL;
	uint16_t x2908 = 7U;

	t61 = ((x2905+(x2906&x2907))<<x2908);

	if (t61 != 3968LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3005 = INT8_MIN;
	uint32_t x3006 = UINT32_MAX;
	static volatile int16_t x3007 = 3;
	uint32_t x3008 = 3U;
	uint32_t t62 = 185233697U;

	t62 = ((x3005+(x3006&x3007))<<x3008);

	if (t62 != 4294966296U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3013 = UINT32_MAX;
	uint64_t x3014 = 393068LLU;
	volatile uint32_t x3015 = UINT32_MAX;
	uint64_t t63 = 260302681417LLU;

	t63 = ((x3013+(x3014&x3015))<<x3016);

	if (t63 != 18425774187944607744LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3041 = 79LL;
	static volatile int8_t x3042 = INT8_MIN;
	uint64_t x3043 = UINT64_MAX;

	t64 = ((x3041+(x3042&x3043))<<x3044);

	if (t64 != 18446744073709526528LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x3045 = INT32_MIN;
	static int32_t x3046 = INT32_MIN;
	uint32_t x3047 = UINT32_MAX;
	uint32_t t65 = 66034U;

	t65 = ((x3045+(x3046&x3047))<<x3048);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x3053 = -2372LL;
	volatile uint64_t x3054 = 589LLU;
	uint32_t x3055 = UINT32_MAX;
	uint16_t x3056 = 1U;
	uint64_t t66 = 9LLU;

	t66 = ((x3053+(x3054&x3055))<<x3056);

	if (t66 != 18446744073709548050LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3161 = UINT32_MAX;
	int32_t x3162 = INT32_MAX;
	int16_t x3163 = INT16_MAX;
	int8_t x3164 = 25;
	uint32_t t67 = 112446596U;

	t67 = ((x3161+(x3162&x3163))<<x3164);

	if (t67 != 4227858432U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3173 = 14U;
	uint8_t x3174 = UINT8_MAX;
	volatile int64_t x3175 = INT64_MIN;
	int8_t x3176 = 0;

	t68 = ((x3173+(x3174&x3175))<<x3176);

	if (t68 != 14LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3265 = -1;
	int16_t x3266 = INT16_MAX;
	static int64_t x3267 = -1LL;
	static uint16_t x3268 = 15U;
	volatile int64_t t69 = 105LL;

	t69 = ((x3265+(x3266&x3267))<<x3268);

	if (t69 != 1073676288LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3270 = 5U;
	static volatile int16_t x3271 = -1;
	int8_t x3272 = 11;
	int32_t t70 = 2022;

	t70 = ((x3269+(x3270&x3271))<<x3272);

	if (t70 != 10240) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x3309 = INT16_MIN;
	static volatile int32_t x3310 = INT32_MIN;
	uint32_t x3311 = 7U;
	static volatile uint32_t t71 = 13179135U;

	t71 = ((x3309+(x3310&x3311))<<x3312);

	if (t71 != 4294901760U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x3313 = 3U;
	static uint64_t x3314 = 6LLU;
	int32_t x3315 = 25;
	int8_t x3316 = 7;

	t72 = ((x3313+(x3314&x3315))<<x3316);

	if (t72 != 384LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x3333 = UINT64_MAX;
	uint8_t x3334 = UINT8_MAX;
	int16_t x3335 = INT16_MAX;
	uint8_t x3336 = 5U;

	t73 = ((x3333+(x3334&x3335))<<x3336);

	if (t73 != 8128LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x3381 = 1702473;
	int32_t x3382 = INT32_MAX;
	static uint8_t x3383 = 15U;
	static uint32_t x3384 = 9U;
	volatile int32_t t74 = 1;

	t74 = ((x3381+(x3382&x3383))<<x3384);

	if (t74 != 871673856) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x3435 = -1;
	int16_t x3436 = 1;
	static volatile uint64_t t75 = 386969LLU;

	t75 = ((x3433+(x3434&x3435))<<x3436);

	if (t75 != 56LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3473 = INT16_MAX;
	uint64_t x3474 = UINT64_MAX;
	int8_t x3475 = 1;
	uint8_t x3476 = 2U;
	volatile uint64_t t76 = 245255013338LLU;

	t76 = ((x3473+(x3474&x3475))<<x3476);

	if (t76 != 131072LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3499 = INT16_MAX;
	uint8_t x3500 = 21U;
	uint64_t t77 = 38863366LLU;

	t77 = ((x3497+(x3498&x3499))<<x3500);

	if (t77 != 206154235904LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x3509 = UINT16_MAX;
	uint8_t x3511 = 5U;
	uint8_t x3512 = 1U;
	static volatile int64_t t78 = -17051790815865821LL;

	t78 = ((x3509+(x3510&x3511))<<x3512);

	if (t78 != 131070LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3561 = 7775LL;
	uint16_t x3562 = 2U;
	int64_t x3563 = INT64_MIN;
	int16_t x3564 = 13;

	t79 = ((x3561+(x3562&x3563))<<x3564);

	if (t79 != 63692800LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x3701 = 2937U;
	volatile uint16_t x3703 = 2U;
	uint8_t x3704 = 12U;
	volatile uint64_t t80 = 11776258029812835LLU;

	t80 = ((x3701+(x3702&x3703))<<x3704);

	if (t80 != 12038144LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3737 = UINT8_MAX;
	int64_t x3738 = -1LL;
	volatile uint16_t x3739 = 718U;
	int64_t t81 = 180785932LL;

	t81 = ((x3737+(x3738&x3739))<<x3740);

	if (t81 != 1946LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3745 = INT64_MIN;
	volatile int64_t x3746 = 217956LL;
	uint64_t x3747 = 131833713LLU;
	static uint8_t x3748 = 1U;
	static volatile uint64_t t82 = 75588045383019LLU;

	t82 = ((x3745+(x3746&x3747))<<x3748);

	if (t82 != 403136LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x3761 = -1;
	uint16_t x3762 = 14U;
	uint16_t x3763 = 3443U;
	uint16_t x3764 = 11U;

	t83 = ((x3761+(x3762&x3763))<<x3764);

	if (t83 != 2048) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3905 = UINT16_MAX;
	static volatile int8_t x3906 = 6;
	int8_t x3908 = 8;
	static int32_t t84 = 63;

	t84 = ((x3905+(x3906&x3907))<<x3908);

	if (t84 != 16776960) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x3929 = -1LL;
	volatile int16_t x3930 = 695;
	int64_t x3931 = 114622497645892LL;
	static volatile int64_t t85 = -551LL;

	t85 = ((x3929+(x3930&x3931))<<x3932);

	if (t85 != 1649267441664LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4077 = 456618U;
	uint16_t x4079 = UINT16_MAX;
	int8_t x4080 = 11;
	static uint32_t t86 = 1390695814U;

	t86 = ((x4077+(x4078&x4079))<<x4080);

	if (t86 != 935413760U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x4093 = UINT32_MAX;
	uint64_t x4094 = 3631810768242749167LLU;
	int16_t x4095 = 2112;
	int8_t x4096 = 1;
	uint64_t t87 = 23594386648735531LLU;

	t87 = ((x4093+(x4094&x4095))<<x4096);

	if (t87 != 8589938814LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4101 = -2;
	static uint64_t x4102 = 515471753888415LLU;
	int64_t x4103 = INT64_MAX;
	uint16_t x4104 = 2U;
	static uint64_t t88 = 11585029136572173LLU;

	t88 = ((x4101+(x4102&x4103))<<x4104);

	if (t88 != 2061887015553652LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4149 = INT8_MAX;
	int32_t x4150 = 774312;
	int64_t x4151 = INT64_MIN;
	int8_t x4152 = 1;

	t89 = ((x4149+(x4150&x4151))<<x4152);

	if (t89 != 254LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4201 = 1106U;
	int8_t x4203 = -1;
	int8_t x4204 = 1;
	uint32_t t90 = 1016613998U;

	t90 = ((x4201+(x4202&x4203))<<x4204);

	if (t90 != 2210U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4221 = 1306880;
	static volatile uint64_t x4222 = 6030568LLU;
	int64_t x4223 = 119LL;
	volatile uint64_t t91 = 3924353LLU;

	t91 = ((x4221+(x4222&x4223))<<x4224);

	if (t91 != 1306976LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x4237 = INT32_MAX;
	uint16_t x4238 = 1U;
	uint32_t x4239 = 2U;
	static uint32_t x4240 = 11U;
	static uint32_t t92 = 17U;

	t92 = ((x4237+(x4238&x4239))<<x4240);

	if (t92 != 4294965248U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t t93 = 0U;

	t93 = ((x4253+(x4254&x4255))<<x4256);

	if (t93 != 130560U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4257 = UINT8_MAX;
	int64_t x4258 = -1LL;
	volatile uint16_t x4259 = 31460U;
	volatile int8_t x4260 = 1;
	volatile int64_t t94 = 29990125LL;

	t94 = ((x4257+(x4258&x4259))<<x4260);

	if (t94 != 63430LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4329 = INT16_MIN;
	static int64_t x4330 = -1LL;
	uint64_t x4331 = 214LLU;
	uint8_t x4332 = 1U;
	static uint64_t t95 = 4587756958728259368LLU;

	t95 = ((x4329+(x4330&x4331))<<x4332);

	if (t95 != 18446744073709486508LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4338 = 7654U;
	int16_t x4339 = INT16_MIN;

	t96 = ((x4337+(x4338&x4339))<<x4340);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x4362 = UINT64_MAX;
	int64_t x4363 = INT64_MAX;
	uint32_t x4364 = 55U;
	static volatile uint64_t t97 = 98347319778LLU;

	t97 = ((x4361+(x4362&x4363))<<x4364);

	if (t97 != 11637301437125361664LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4381 = INT8_MIN;
	int64_t x4383 = 52074575944565LL;

	t98 = ((x4381+(x4382&x4383))<<x4384);

	if (t98 != 1666378591367168LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x4421 = -3;
	int32_t x4422 = -1;
	uint64_t x4423 = 456101LLU;
	uint8_t x4424 = 5U;
	static uint64_t t99 = 16666303886887486LLU;

	t99 = ((x4421+(x4422&x4423))<<x4424);

	if (t99 != 14595136LLU) { NG(); } else { ; }
	
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

