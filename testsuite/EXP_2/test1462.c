#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x34 = -1LL;
static int8_t x36 = 1;
int16_t x53 = 103;
volatile int32_t t2 = 6;
int32_t x69 = INT32_MAX;
static int64_t x70 = -1823235752036122LL;
int16_t x71 = INT16_MIN;
uint16_t x111 = 1133U;
uint8_t x128 = 7U;
uint8_t x160 = 26U;
int8_t x205 = INT8_MAX;
static int32_t t9 = -15321525;
int16_t x231 = INT16_MIN;
static volatile int32_t x271 = INT32_MAX;
static int64_t x282 = 1026431129LL;
static uint16_t x283 = 913U;
int16_t x353 = 12;
int16_t x363 = -1;
static uint8_t x364 = 10U;
int64_t x375 = 265910732LL;
int16_t x378 = -1;
volatile int32_t t19 = -240635;
int32_t t20 = 27953;
static volatile int8_t x430 = INT8_MAX;
int16_t x486 = -1;
uint8_t x488 = 30U;
int32_t x509 = INT32_MAX;
uint32_t x526 = 417473U;
volatile int8_t x589 = INT8_MAX;
int16_t x592 = 29;
int32_t t26 = 1680776;
int16_t x611 = INT16_MAX;
uint8_t x634 = 12U;
uint8_t x700 = 2U;
uint64_t x704 = 3LLU;
int16_t x711 = INT16_MAX;
uint8_t x936 = 0U;
volatile int16_t x945 = INT16_MIN;
uint8_t x946 = 0U;
int32_t x947 = INT32_MIN;
uint8_t x948 = 6U;
uint16_t x1053 = UINT16_MAX;
int16_t x1054 = 1;
uint8_t x1195 = UINT8_MAX;
int64_t x1253 = INT64_MIN;
static int32_t x1360 = 0;
int32_t t44 = -4493324;
uint8_t x1468 = 16U;
static int32_t x1551 = -355383949;
static int32_t t46 = -5;
int64_t x1743 = -845025706342816LL;
int32_t t48 = 25494;
uint32_t x1759 = 856U;
int32_t t50 = -177;
uint16_t x1896 = 14U;
uint8_t x1948 = 7U;
int32_t x1950 = INT32_MIN;
volatile int64_t x1971 = INT64_MAX;
static uint64_t x2035 = 106714758LLU;
uint32_t x2144 = 4U;
int8_t x2172 = 1;
int32_t t62 = 29;
volatile uint16_t x2212 = 6U;
static volatile uint32_t x2223 = 15U;
static int32_t t64 = -3939115;
int8_t x2232 = 0;
volatile int32_t x2337 = INT32_MIN;
int32_t x2398 = 8192313;
int16_t x2403 = -7433;
uint32_t x2404 = 8U;
volatile int32_t t69 = -1722720;
volatile int32_t t70 = -537409;
static int16_t x2525 = -12825;
static volatile int32_t t72 = 1;
int8_t x2550 = INT8_MIN;
volatile int16_t x2551 = INT16_MAX;
volatile int32_t t73 = 2113644;
volatile int8_t x2556 = 0;
static uint16_t x2705 = 12U;
uint8_t x2726 = UINT8_MAX;
uint64_t x2727 = UINT64_MAX;
int8_t x2741 = 0;
static int16_t x2752 = 0;
static uint64_t x2779 = 7288421659629156LLU;
int8_t x2818 = 0;
uint16_t x2820 = 1U;
static volatile int32_t t82 = -39184242;
int16_t x2910 = -1;
int32_t t84 = -10829936;
int32_t t86 = -19684;
int64_t x2954 = INT64_MIN;
int16_t x2955 = INT16_MAX;
int16_t x2956 = 10;
static int8_t x2999 = -3;
int32_t x3061 = 1;
static int64_t x3130 = INT64_MIN;
static int8_t x3131 = INT8_MAX;
static volatile int32_t t95 = -98482;
int64_t x3183 = 21355555LL;
int64_t x3184 = 1LL;
int8_t x3233 = INT8_MIN;
int16_t x3234 = -1;
int8_t x3235 = INT8_MAX;
static uint32_t x3236 = 6U;
static volatile int32_t t97 = -27;
volatile int32_t t98 = 0;
uint16_t x3261 = 2U;
uint32_t x3262 = 64441U;


void f0(void) {
	int16_t x17 = INT16_MIN;
	volatile int8_t x18 = INT8_MIN;
	volatile int64_t x19 = 1068476473163LL;
	uint32_t x20 = 16U;
	static volatile int32_t t0 = 252975126;

	t0 = ((x17<(x18<x19))<<x20);

	if (t0 != 65536) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x33 = 295U;
	volatile uint32_t x35 = UINT32_MAX;
	static int32_t t1 = -487127;

	t1 = ((x33<(x34<x35))<<x36);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x54 = 1585;
	int8_t x55 = INT8_MIN;
	int8_t x56 = 3;

	t2 = ((x53<(x54<x55))<<x56);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x72 = 5U;
	static volatile int32_t t3 = 57230;

	t3 = ((x69<(x70<x71))<<x72);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x109 = -1;
	uint64_t x110 = UINT64_MAX;
	uint32_t x112 = 0U;
	static int32_t t4 = -332074;

	t4 = ((x109<(x110<x111))<<x112);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x125 = 1935987U;
	static volatile uint16_t x126 = 6U;
	int8_t x127 = INT8_MAX;
	volatile int32_t t5 = -2977367;

	t5 = ((x125<(x126<x127))<<x128);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x157 = 1;
	int32_t x158 = INT32_MAX;
	int64_t x159 = 14480832547030LL;
	int32_t t6 = -20;

	t6 = ((x157<(x158<x159))<<x160);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x161 = UINT8_MAX;
	uint16_t x162 = UINT16_MAX;
	int64_t x163 = -1LL;
	uint16_t x164 = 5U;
	volatile int32_t t7 = 222;

	t7 = ((x161<(x162<x163))<<x164);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x169 = -196LL;
	int32_t x170 = -1;
	int32_t x171 = 1;
	static uint8_t x172 = 12U;
	volatile int32_t t8 = -10211;

	t8 = ((x169<(x170<x171))<<x172);

	if (t8 != 4096) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x206 = INT64_MIN;
	int8_t x207 = INT8_MAX;
	uint8_t x208 = 0U;

	t9 = ((x205<(x206<x207))<<x208);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x229 = INT32_MIN;
	int16_t x230 = INT16_MAX;
	uint16_t x232 = 1U;
	volatile int32_t t10 = 23;

	t10 = ((x229<(x230<x231))<<x232);

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x257 = INT8_MIN;
	int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MAX;
	static int16_t x260 = 0;
	int32_t t11 = 0;

	t11 = ((x257<(x258<x259))<<x260);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x261 = 0U;
	volatile uint64_t x262 = UINT64_MAX;
	uint64_t x263 = UINT64_MAX;
	volatile int32_t x264 = 1;
	volatile int32_t t12 = 358441385;

	t12 = ((x261<(x262<x263))<<x264);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x269 = 0U;
	static uint64_t x270 = UINT64_MAX;
	uint32_t x272 = 0U;
	volatile int32_t t13 = -505;

	t13 = ((x269<(x270<x271))<<x272);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x281 = -1;
	static int8_t x284 = 0;
	int32_t t14 = 8781;

	t14 = ((x281<(x282<x283))<<x284);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x293 = 3U;
	volatile int8_t x294 = 15;
	int8_t x295 = INT8_MIN;
	uint32_t x296 = 5U;
	volatile int32_t t15 = 1;

	t15 = ((x293<(x294<x295))<<x296);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x354 = -30619LL;
	uint64_t x355 = 519319334713331LLU;
	uint16_t x356 = 0U;
	static volatile int32_t t16 = 253829583;

	t16 = ((x353<(x354<x355))<<x356);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x361 = INT16_MAX;
	int64_t x362 = 5363914LL;
	volatile int32_t t17 = -209;

	t17 = ((x361<(x362<x363))<<x364);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x373 = 3;
	int16_t x374 = INT16_MIN;
	int8_t x376 = 2;
	static volatile int32_t t18 = -2777;

	t18 = ((x373<(x374<x375))<<x376);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x377 = INT8_MIN;
	uint64_t x379 = UINT64_MAX;
	int64_t x380 = 0LL;

	t19 = ((x377<(x378<x379))<<x380);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x389 = INT8_MIN;
	int32_t x390 = -1;
	volatile int16_t x391 = INT16_MAX;
	uint8_t x392 = 11U;

	t20 = ((x389<(x390<x391))<<x392);

	if (t20 != 2048) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x429 = 534346552U;
	int64_t x431 = INT64_MAX;
	static uint8_t x432 = 6U;
	int32_t t21 = -9884051;

	t21 = ((x429<(x430<x431))<<x432);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x485 = INT8_MIN;
	int8_t x487 = INT8_MAX;
	volatile int32_t t22 = 221772;

	t22 = ((x485<(x486<x487))<<x488);

	if (t22 != 1073741824) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x510 = UINT64_MAX;
	uint8_t x511 = UINT8_MAX;
	uint32_t x512 = 13U;
	int32_t t23 = -1;

	t23 = ((x509<(x510<x511))<<x512);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x525 = 990714043614071661LLU;
	uint32_t x527 = 55962361U;
	uint16_t x528 = 28U;
	static int32_t t24 = 5;

	t24 = ((x525<(x526<x527))<<x528);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x590 = 3U;
	static int32_t x591 = INT32_MIN;
	int32_t t25 = -1;

	t25 = ((x589<(x590<x591))<<x592);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x593 = 13359LLU;
	uint64_t x594 = 38282035LLU;
	int8_t x595 = INT8_MIN;
	int8_t x596 = 13;

	t26 = ((x593<(x594<x595))<<x596);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x609 = 2U;
	volatile int64_t x610 = 84272LL;
	uint16_t x612 = 1U;
	volatile int32_t t27 = 38933335;

	t27 = ((x609<(x610<x611))<<x612);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x633 = 13493031;
	uint64_t x635 = 41639928073587LLU;
	uint8_t x636 = 4U;
	int32_t t28 = -23;

	t28 = ((x633<(x634<x635))<<x636);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x697 = 168135446564771557LLU;
	static volatile int32_t x698 = -1;
	static volatile uint64_t x699 = 604616903173761242LLU;
	int32_t t29 = 58108807;

	t29 = ((x697<(x698<x699))<<x700);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x701 = -1LL;
	uint32_t x702 = UINT32_MAX;
	uint8_t x703 = UINT8_MAX;
	volatile int32_t t30 = -826516950;

	t30 = ((x701<(x702<x703))<<x704);

	if (t30 != 8) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x709 = INT16_MIN;
	int32_t x710 = -2602126;
	volatile uint16_t x712 = 11U;
	int32_t t31 = 4997358;

	t31 = ((x709<(x710<x711))<<x712);

	if (t31 != 2048) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x725 = INT64_MIN;
	int8_t x726 = 23;
	int8_t x727 = INT8_MAX;
	uint8_t x728 = 1U;
	int32_t t32 = 9036411;

	t32 = ((x725<(x726<x727))<<x728);

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x753 = UINT16_MAX;
	static int64_t x754 = -9558918057694LL;
	uint16_t x755 = 2U;
	static uint16_t x756 = 10U;
	int32_t t33 = -108;

	t33 = ((x753<(x754<x755))<<x756);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x797 = -1;
	static int8_t x798 = INT8_MIN;
	uint16_t x799 = 148U;
	uint8_t x800 = 5U;
	static volatile int32_t t34 = 496;

	t34 = ((x797<(x798<x799))<<x800);

	if (t34 != 32) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x861 = INT8_MIN;
	volatile int64_t x862 = INT64_MIN;
	static volatile int64_t x863 = INT64_MIN;
	int8_t x864 = 2;
	volatile int32_t t35 = -70;

	t35 = ((x861<(x862<x863))<<x864);

	if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x933 = -22270;
	int16_t x934 = -75;
	int8_t x935 = -1;
	volatile int32_t t36 = 123;

	t36 = ((x933<(x934<x935))<<x936);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t t37 = -700193061;

	t37 = ((x945<(x946<x947))<<x948);

	if (t37 != 64) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1055 = INT16_MAX;
	uint8_t x1056 = 13U;
	static volatile int32_t t38 = -15316139;

	t38 = ((x1053<(x1054<x1055))<<x1056);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1193 = -78050;
	static int64_t x1194 = 6362101942799304LL;
	int8_t x1196 = 0;
	static int32_t t39 = -49;

	t39 = ((x1193<(x1194<x1195))<<x1196);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1201 = UINT64_MAX;
	int32_t x1202 = INT32_MIN;
	volatile uint32_t x1203 = 1003841275U;
	volatile uint8_t x1204 = 7U;
	int32_t t40 = 1;

	t40 = ((x1201<(x1202<x1203))<<x1204);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1254 = 29838457U;
	int8_t x1255 = -1;
	uint8_t x1256 = 0U;
	volatile int32_t t41 = 31964;

	t41 = ((x1253<(x1254<x1255))<<x1256);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x1269 = INT8_MAX;
	int8_t x1270 = INT8_MIN;
	int32_t x1271 = INT32_MAX;
	uint8_t x1272 = 3U;
	int32_t t42 = -1760942;

	t42 = ((x1269<(x1270<x1271))<<x1272);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1305 = -1;
	static volatile uint64_t x1306 = 44632256LLU;
	int16_t x1307 = INT16_MAX;
	uint16_t x1308 = 21U;
	int32_t t43 = 261879;

	t43 = ((x1305<(x1306<x1307))<<x1308);

	if (t43 != 2097152) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1357 = 120;
	static volatile int8_t x1358 = INT8_MIN;
	int8_t x1359 = -1;

	t44 = ((x1357<(x1358<x1359))<<x1360);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1465 = 0;
	uint64_t x1466 = UINT64_MAX;
	uint8_t x1467 = 104U;
	int32_t t45 = 6;

	t45 = ((x1465<(x1466<x1467))<<x1468);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1549 = UINT8_MAX;
	uint64_t x1550 = UINT64_MAX;
	int16_t x1552 = 2;

	t46 = ((x1549<(x1550<x1551))<<x1552);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x1705 = UINT32_MAX;
	uint8_t x1706 = UINT8_MAX;
	volatile uint32_t x1707 = UINT32_MAX;
	int32_t x1708 = 0;
	int32_t t47 = 2;

	t47 = ((x1705<(x1706<x1707))<<x1708);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1741 = INT64_MIN;
	volatile int64_t x1742 = INT64_MAX;
	int8_t x1744 = 27;

	t48 = ((x1741<(x1742<x1743))<<x1744);

	if (t48 != 134217728) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x1757 = 20925U;
	int64_t x1758 = INT64_MIN;
	volatile int32_t x1760 = 13;
	int32_t t49 = 194;

	t49 = ((x1757<(x1758<x1759))<<x1760);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1833 = INT64_MIN;
	int64_t x1834 = INT64_MAX;
	volatile int16_t x1835 = 1;
	int64_t x1836 = 14LL;

	t50 = ((x1833<(x1834<x1835))<<x1836);

	if (t50 != 16384) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1873 = 28315U;
	int32_t x1874 = INT32_MIN;
	int32_t x1875 = INT32_MAX;
	uint16_t x1876 = 6U;
	volatile int32_t t51 = 239942;

	t51 = ((x1873<(x1874<x1875))<<x1876);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1885 = 16U;
	int8_t x1886 = -2;
	volatile uint64_t x1887 = 2881130636186LLU;
	volatile int8_t x1888 = 0;
	int32_t t52 = -3900;

	t52 = ((x1885<(x1886<x1887))<<x1888);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1893 = UINT32_MAX;
	int32_t x1894 = INT32_MIN;
	int32_t x1895 = -1;
	volatile int32_t t53 = -96112;

	t53 = ((x1893<(x1894<x1895))<<x1896);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x1945 = 15U;
	uint64_t x1946 = 181701952386525760LLU;
	volatile uint16_t x1947 = 6305U;
	volatile int32_t t54 = -739442834;

	t54 = ((x1945<(x1946<x1947))<<x1948);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1949 = INT32_MIN;
	int32_t x1951 = INT32_MIN;
	uint8_t x1952 = 29U;
	volatile int32_t t55 = -44307372;

	t55 = ((x1949<(x1950<x1951))<<x1952);

	if (t55 != 536870912) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x1953 = 607U;
	volatile int32_t x1954 = -1;
	int16_t x1955 = INT16_MIN;
	uint8_t x1956 = 0U;
	int32_t t56 = -732493872;

	t56 = ((x1953<(x1954<x1955))<<x1956);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1969 = INT32_MAX;
	uint64_t x1970 = 522406020318LLU;
	uint8_t x1972 = 3U;
	int32_t t57 = 34626;

	t57 = ((x1969<(x1970<x1971))<<x1972);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x2033 = INT32_MIN;
	uint8_t x2034 = 28U;
	int16_t x2036 = 1;
	volatile int32_t t58 = -67661743;

	t58 = ((x2033<(x2034<x2035))<<x2036);

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x2069 = -1LL;
	uint16_t x2070 = UINT16_MAX;
	int16_t x2071 = -1;
	volatile int32_t x2072 = 3;
	volatile int32_t t59 = -43;

	t59 = ((x2069<(x2070<x2071))<<x2072);

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2141 = -420823;
	static volatile int8_t x2142 = INT8_MIN;
	int32_t x2143 = INT32_MIN;
	volatile int32_t t60 = -88293;

	t60 = ((x2141<(x2142<x2143))<<x2144);

	if (t60 != 16) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2161 = INT16_MIN;
	uint32_t x2162 = UINT32_MAX;
	int8_t x2163 = 26;
	volatile int8_t x2164 = 7;
	int32_t t61 = 156104511;

	t61 = ((x2161<(x2162<x2163))<<x2164);

	if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2169 = 6U;
	static int16_t x2170 = INT16_MAX;
	uint16_t x2171 = 26U;

	t62 = ((x2169<(x2170<x2171))<<x2172);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2209 = 0;
	uint64_t x2210 = UINT64_MAX;
	int64_t x2211 = 122264453471LL;
	int32_t t63 = -114678857;

	t63 = ((x2209<(x2210<x2211))<<x2212);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2221 = INT8_MIN;
	int8_t x2222 = INT8_MIN;
	static uint16_t x2224 = 15U;

	t64 = ((x2221<(x2222<x2223))<<x2224);

	if (t64 != 32768) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x2229 = 39U;
	int32_t x2230 = INT32_MAX;
	uint32_t x2231 = UINT32_MAX;
	int32_t t65 = 9817883;

	t65 = ((x2229<(x2230<x2231))<<x2232);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x2321 = INT32_MAX;
	int8_t x2322 = 6;
	uint32_t x2323 = 7845U;
	uint16_t x2324 = 17U;
	volatile int32_t t66 = 148652;

	t66 = ((x2321<(x2322<x2323))<<x2324);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x2338 = INT64_MIN;
	volatile uint32_t x2339 = UINT32_MAX;
	uint8_t x2340 = 0U;
	volatile int32_t t67 = 102543887;

	t67 = ((x2337<(x2338<x2339))<<x2340);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x2397 = 3097U;
	int16_t x2399 = INT16_MIN;
	static int32_t x2400 = 0;
	volatile int32_t t68 = -53626;

	t68 = ((x2397<(x2398<x2399))<<x2400);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2401 = -16083;
	int16_t x2402 = -1;

	t69 = ((x2401<(x2402<x2403))<<x2404);

	if (t69 != 256) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2421 = -1;
	int8_t x2422 = INT8_MAX;
	volatile int16_t x2423 = 92;
	uint16_t x2424 = 4U;

	t70 = ((x2421<(x2422<x2423))<<x2424);

	if (t70 != 16) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2477 = 25;
	static int32_t x2478 = INT32_MIN;
	int32_t x2479 = INT32_MIN;
	int16_t x2480 = 17;
	volatile int32_t t71 = 35498861;

	t71 = ((x2477<(x2478<x2479))<<x2480);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2526 = INT16_MIN;
	uint16_t x2527 = UINT16_MAX;
	uint16_t x2528 = 1U;

	t72 = ((x2525<(x2526<x2527))<<x2528);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2549 = 1U;
	volatile int16_t x2552 = 1;

	t73 = ((x2549<(x2550<x2551))<<x2552);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2553 = 3LLU;
	volatile int32_t x2554 = -660233236;
	int64_t x2555 = INT64_MAX;
	int32_t t74 = 404934;

	t74 = ((x2553<(x2554<x2555))<<x2556);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x2613 = INT16_MIN;
	uint16_t x2614 = UINT16_MAX;
	uint64_t x2615 = 576197731368121746LLU;
	static volatile uint32_t x2616 = 14U;
	volatile int32_t t75 = -282965;

	t75 = ((x2613<(x2614<x2615))<<x2616);

	if (t75 != 16384) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x2706 = 2;
	uint16_t x2707 = UINT16_MAX;
	int16_t x2708 = 20;
	volatile int32_t t76 = -321;

	t76 = ((x2705<(x2706<x2707))<<x2708);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x2725 = -1;
	int8_t x2728 = 2;
	static int32_t t77 = -126;

	t77 = ((x2725<(x2726<x2727))<<x2728);

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2742 = 7616;
	static uint32_t x2743 = UINT32_MAX;
	uint8_t x2744 = 9U;
	volatile int32_t t78 = -185689;

	t78 = ((x2741<(x2742<x2743))<<x2744);

	if (t78 != 512) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2749 = INT8_MIN;
	uint8_t x2750 = 5U;
	volatile int8_t x2751 = 0;
	volatile int32_t t79 = -29008054;

	t79 = ((x2749<(x2750<x2751))<<x2752);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2777 = 3472184864603817LLU;
	int16_t x2778 = 1;
	uint8_t x2780 = 26U;
	volatile int32_t t80 = 114;

	t80 = ((x2777<(x2778<x2779))<<x2780);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2817 = 37U;
	uint8_t x2819 = UINT8_MAX;
	int32_t t81 = 1;

	t81 = ((x2817<(x2818<x2819))<<x2820);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x2857 = UINT8_MAX;
	uint16_t x2858 = 8U;
	static uint16_t x2859 = 28U;
	static volatile uint8_t x2860 = 2U;

	t82 = ((x2857<(x2858<x2859))<<x2860);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x2889 = INT32_MIN;
	static volatile int32_t x2890 = INT32_MIN;
	volatile uint64_t x2891 = 1073625561430243LLU;
	static uint8_t x2892 = 8U;
	int32_t t83 = -27819596;

	t83 = ((x2889<(x2890<x2891))<<x2892);

	if (t83 != 256) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x2909 = UINT64_MAX;
	volatile uint16_t x2911 = 26887U;
	uint32_t x2912 = 10U;

	t84 = ((x2909<(x2910<x2911))<<x2912);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2925 = 6U;
	static int16_t x2926 = INT16_MIN;
	int16_t x2927 = INT16_MIN;
	uint16_t x2928 = 2U;
	volatile int32_t t85 = 241782;

	t85 = ((x2925<(x2926<x2927))<<x2928);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2945 = INT64_MIN;
	uint32_t x2946 = 726632U;
	static uint64_t x2947 = UINT64_MAX;
	uint8_t x2948 = 21U;

	t86 = ((x2945<(x2946<x2947))<<x2948);

	if (t86 != 2097152) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x2953 = INT64_MAX;
	static volatile int32_t t87 = -4970798;

	t87 = ((x2953<(x2954<x2955))<<x2956);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x2997 = 144U;
	int16_t x2998 = 1;
	uint64_t x3000 = 5LLU;
	int32_t t88 = 0;

	t88 = ((x2997<(x2998<x2999))<<x3000);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x3037 = 113949U;
	int32_t x3038 = 0;
	uint8_t x3039 = UINT8_MAX;
	int8_t x3040 = 7;
	int32_t t89 = -9126390;

	t89 = ((x3037<(x3038<x3039))<<x3040);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x3062 = 494U;
	volatile int32_t x3063 = -1;
	volatile uint16_t x3064 = 3U;
	static volatile int32_t t90 = -15850013;

	t90 = ((x3061<(x3062<x3063))<<x3064);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3069 = INT32_MIN;
	static uint32_t x3070 = 713U;
	int64_t x3071 = -1LL;
	volatile int8_t x3072 = 1;
	static volatile int32_t t91 = -1168;

	t91 = ((x3069<(x3070<x3071))<<x3072);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3105 = INT32_MIN;
	int16_t x3106 = 11;
	static int32_t x3107 = -35738941;
	uint8_t x3108 = 20U;
	int32_t t92 = -1;

	t92 = ((x3105<(x3106<x3107))<<x3108);

	if (t92 != 1048576) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x3129 = UINT8_MAX;
	static int8_t x3132 = 0;
	int32_t t93 = 506369;

	t93 = ((x3129<(x3130<x3131))<<x3132);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3161 = 6;
	uint8_t x3162 = UINT8_MAX;
	static volatile int16_t x3163 = -4;
	int32_t x3164 = 0;
	int32_t t94 = 44714;

	t94 = ((x3161<(x3162<x3163))<<x3164);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x3169 = -7;
	static uint16_t x3170 = 1U;
	int64_t x3171 = INT64_MIN;
	int8_t x3172 = 4;

	t95 = ((x3169<(x3170<x3171))<<x3172);

	if (t95 != 16) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x3181 = 2250668LLU;
	static uint16_t x3182 = UINT16_MAX;
	volatile int32_t t96 = -19;

	t96 = ((x3181<(x3182<x3183))<<x3184);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {


	t97 = ((x3233<(x3234<x3235))<<x3236);

	if (t97 != 64) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3257 = 51;
	uint16_t x3258 = UINT16_MAX;
	static volatile uint16_t x3259 = 16232U;
	static volatile uint64_t x3260 = 3LLU;

	t98 = ((x3257<(x3258<x3259))<<x3260);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x3263 = -1LL;
	uint16_t x3264 = 3U;
	int32_t t99 = -9;

	t99 = ((x3261<(x3262<x3263))<<x3264);

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

