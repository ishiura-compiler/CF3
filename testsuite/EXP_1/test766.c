#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x14 = 408458024036LLU;
volatile int32_t x33 = INT32_MIN;
int64_t x34 = -1LL;
static volatile uint64_t t4 = 175737934346LLU;
volatile int64_t t5 = -2LL;
int64_t x303 = 33LL;
int32_t x317 = INT32_MIN;
static int64_t x330 = -1LL;
uint32_t x337 = 1383U;
static volatile uint8_t x387 = 18U;
static volatile int32_t t12 = 998321;
volatile int32_t t13 = INT32_MIN;
int8_t x438 = 8;
volatile int32_t t14 = 7;
int8_t x443 = 6;
volatile int32_t x444 = INT32_MIN;
int64_t x478 = 108LL;
volatile int64_t t16 = 3601LL;
volatile uint16_t x515 = 25U;
static uint16_t x516 = 3U;
uint64_t t18 = 1887383LLU;
static int8_t x552 = 30;
volatile int32_t t21 = 353216;
int16_t x900 = INT16_MAX;
volatile uint64_t t24 = 83752782955710LLU;
uint16_t x959 = 21U;
static int32_t x960 = INT32_MIN;
static int32_t t26 = INT32_MIN;
volatile int16_t x999 = 0;
int8_t x1102 = INT8_MIN;
int16_t x1103 = 0;
volatile int32_t t34 = -20129;
static int16_t x1446 = -1;
int8_t x1547 = 15;
int64_t x1661 = -1LL;
static uint32_t x1663 = 7U;
int8_t x1668 = 58;
int16_t x1809 = INT16_MAX;
volatile uint32_t t39 = UINT32_MAX;
uint64_t t42 = 624LLU;
int16_t x2070 = -1;
static uint8_t x2079 = 14U;
uint64_t t46 = 5794127063543093038LLU;
int16_t x2146 = INT16_MIN;
volatile uint32_t t48 = 1545U;
uint8_t x2207 = 3U;
uint8_t x2260 = 14U;
int32_t x2323 = 1;
int16_t x2341 = INT16_MAX;
volatile int64_t t57 = -870024224288114LL;
static uint32_t t58 = 333571642U;
int64_t x2546 = -1LL;
volatile int16_t x2631 = 33;
uint32_t t62 = 10502U;
static volatile int16_t x2769 = -1;
volatile int32_t t64 = -54431;
int16_t x2838 = INT16_MIN;
static uint64_t x2950 = 10006691408840LLU;
volatile uint64_t t66 = 3LLU;
int32_t t67 = -25952;
static uint16_t x3154 = UINT16_MAX;
static uint8_t x3155 = 2U;
volatile int8_t x3225 = 1;
int64_t x3226 = INT64_MAX;
uint64_t x3233 = UINT64_MAX;
static uint8_t x3235 = 27U;
uint64_t t72 = 954387LLU;
uint8_t x3291 = 1U;
volatile uint64_t t73 = UINT64_MAX;
int8_t x3438 = -1;
uint16_t x3440 = UINT16_MAX;
volatile uint64_t x3461 = 471640882006LLU;
uint64_t t77 = 842160502227695LLU;
uint32_t x3653 = 494U;
uint64_t x3656 = UINT64_MAX;
static volatile uint64_t t81 = 2066584220409LLU;
int64_t x3902 = INT64_MAX;
uint64_t x3903 = 8LLU;
static uint64_t x3904 = 127512960LLU;
int16_t x4037 = 4889;
volatile int32_t x4077 = INT32_MIN;
int32_t x4085 = INT32_MIN;
uint8_t x4086 = 1U;
volatile int32_t x4088 = -1;
static int64_t x4113 = -1LL;
int16_t x4115 = 6;
static uint16_t x4145 = UINT16_MAX;
static volatile uint8_t x4147 = 25U;
int8_t x4151 = 10;
uint8_t x4152 = 11U;
uint32_t x4187 = 3U;
int8_t x4198 = -1;
volatile int32_t x4199 = 6;
static int32_t x4222 = -1;
volatile int16_t x4224 = -1;
uint8_t x4412 = UINT8_MAX;


void f0(void) {
	int8_t x13 = 42;
	uint16_t x15 = 31U;
	volatile int32_t x16 = INT32_MIN;
	uint64_t t0 = 42398679626237LLU;

	t0 = (((x13%x14)>>x15)|x16);

	if (t0 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x35 = 51U;
	int32_t x36 = INT32_MIN;
	int64_t t1 = 4057LL;

	t1 = (((x33%x34)>>x35)|x36);

	if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MIN;
	uint16_t x83 = 7U;
	uint8_t x84 = 7U;
	int64_t t2 = 110031359307LL;

	t2 = (((x81%x82)>>x83)|x84);

	if (t2 != 7LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x125 = INT16_MAX;
	uint64_t x126 = 41588073799773LLU;
	uint64_t x127 = 19LLU;
	uint16_t x128 = 479U;
	volatile uint64_t t3 = 181320LLU;

	t3 = (((x125%x126)>>x127)|x128);

	if (t3 != 479LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x209 = 247968728986133LLU;
	int8_t x210 = 1;
	volatile uint32_t x211 = 22U;
	uint8_t x212 = UINT8_MAX;

	t4 = (((x209%x210)>>x211)|x212);

	if (t4 != 255LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x245 = INT64_MAX;
	uint8_t x246 = 1U;
	volatile uint16_t x247 = 5U;
	int8_t x248 = 58;

	t5 = (((x245%x246)>>x247)|x248);

	if (t5 != 58LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x277 = 13U;
	static int32_t x278 = INT32_MIN;
	uint8_t x279 = 21U;
	uint8_t x280 = 46U;
	volatile int32_t t6 = 49;

	t6 = (((x277%x278)>>x279)|x280);

	if (t6 != 46) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x301 = -1;
	uint64_t x302 = 4LLU;
	uint64_t x304 = 6839810108LLU;
	volatile uint64_t t7 = 615676478703LLU;

	t7 = (((x301%x302)>>x303)|x304);

	if (t7 != 6839810108LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x318 = 545458255517051585LLU;
	int8_t x319 = 0;
	static int32_t x320 = -3695973;
	volatile uint64_t t8 = 15285000LLU;

	t8 = (((x317%x318)>>x319)|x320);

	if (t8 != 18446744073707437983LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x329 = 6695U;
	int8_t x331 = 20;
	int8_t x332 = INT8_MIN;
	int64_t t9 = -7218220LL;

	t9 = (((x329%x330)>>x331)|x332);

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x338 = UINT64_MAX;
	int64_t x339 = 1LL;
	volatile int32_t x340 = -280825;
	uint64_t t10 = 770LLU;

	t10 = (((x337%x338)>>x339)|x340);

	if (t10 != 18446744073709270967LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x361 = 1U;
	int16_t x362 = INT16_MIN;
	uint8_t x363 = 7U;
	int64_t x364 = 3326932536441286016LL;
	volatile int64_t t11 = 6519LL;

	t11 = (((x361%x362)>>x363)|x364);

	if (t11 != 3326932536441286016LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x385 = 18U;
	volatile int8_t x386 = INT8_MIN;
	int16_t x388 = INT16_MIN;

	t12 = (((x385%x386)>>x387)|x388);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x417 = 0U;
	int32_t x418 = -68;
	int32_t x419 = 1;
	int32_t x420 = INT32_MIN;

	t13 = (((x417%x418)>>x419)|x420);

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x437 = 8;
	volatile uint8_t x439 = 7U;
	static int16_t x440 = -2352;

	t14 = (((x437%x438)>>x439)|x440);

	if (t14 != -2352) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x441 = INT16_MAX;
	int32_t x442 = INT32_MAX;
	static int32_t t15 = 278113855;

	t15 = (((x441%x442)>>x443)|x444);

	if (t15 != -2147483137) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x477 = 82;
	uint64_t x479 = 22LLU;
	int16_t x480 = -1;

	t16 = (((x477%x478)>>x479)|x480);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x513 = INT64_MAX;
	int8_t x514 = INT8_MIN;
	static int64_t t17 = 3616892LL;

	t17 = (((x513%x514)>>x515)|x516);

	if (t17 != 3LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x529 = UINT64_MAX;
	static volatile uint32_t x530 = 99495U;
	int16_t x531 = 2;
	static uint8_t x532 = 2U;

	t18 = (((x529%x530)>>x531)|x532);

	if (t18 != 6067LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x549 = INT16_MAX;
	static int8_t x550 = INT8_MAX;
	volatile uint8_t x551 = 6U;
	int32_t t19 = 50;

	t19 = (((x549%x550)>>x551)|x552);

	if (t19 != 30) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x689 = 965;
	int32_t x690 = INT32_MAX;
	int64_t x691 = 0LL;
	int8_t x692 = 8;
	int32_t t20 = -7;

	t20 = (((x689%x690)>>x691)|x692);

	if (t20 != 973) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x721 = INT8_MIN;
	int16_t x722 = -1;
	volatile int8_t x723 = 0;
	uint16_t x724 = 0U;

	t21 = (((x721%x722)>>x723)|x724);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x749 = 3U;
	uint32_t x750 = UINT32_MAX;
	int8_t x751 = 1;
	int8_t x752 = -6;
	static volatile uint32_t t22 = 1314231442U;

	t22 = (((x749%x750)>>x751)|x752);

	if (t22 != 4294967291U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x781 = 17U;
	int64_t x782 = INT64_MAX;
	uint8_t x783 = 3U;
	int32_t x784 = 91987;
	volatile int64_t t23 = 4112094366497247LL;

	t23 = (((x781%x782)>>x783)|x784);

	if (t23 != 91987LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x897 = 219659LLU;
	static int8_t x898 = -1;
	uint8_t x899 = 1U;

	t24 = (((x897%x898)>>x899)|x900);

	if (t24 != 131071LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x949 = -1;
	volatile uint64_t x950 = 35108562883LLU;
	volatile uint8_t x951 = 1U;
	int32_t x952 = -1;
	static uint64_t t25 = UINT64_MAX;

	t25 = (((x949%x950)>>x951)|x952);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x957 = 24U;
	uint8_t x958 = 98U;

	t26 = (((x957%x958)>>x959)|x960);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x997 = INT8_MIN;
	uint32_t x998 = 1224U;
	volatile int64_t x1000 = 980543344330312LL;
	int64_t t27 = -210755489578435LL;

	t27 = (((x997%x998)>>x999)|x1000);

	if (t27 != 980543344330440LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x1101 = UINT16_MAX;
	volatile int16_t x1104 = INT16_MIN;
	volatile int32_t t28 = -25289720;

	t28 = (((x1101%x1102)>>x1103)|x1104);

	if (t28 != -32641) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1109 = INT8_MAX;
	volatile int64_t x1110 = 548590551691472LL;
	int32_t x1111 = 14;
	int64_t x1112 = INT64_MIN;
	volatile int64_t t29 = INT64_MIN;

	t29 = (((x1109%x1110)>>x1111)|x1112);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1161 = 1U;
	int32_t x1162 = INT32_MAX;
	uint16_t x1163 = 0U;
	volatile uint16_t x1164 = 6149U;
	volatile int32_t t30 = -67851;

	t30 = (((x1161%x1162)>>x1163)|x1164);

	if (t30 != 6149) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1249 = -13;
	int64_t x1250 = -1LL;
	int16_t x1251 = 1;
	int8_t x1252 = INT8_MIN;
	volatile int64_t t31 = -900618685362179LL;

	t31 = (((x1249%x1250)>>x1251)|x1252);

	if (t31 != -128LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1285 = -2;
	static uint64_t x1286 = 493792459454582LLU;
	uint16_t x1287 = 0U;
	volatile int8_t x1288 = INT8_MIN;
	static volatile uint64_t t32 = 28LLU;

	t32 = (((x1285%x1286)>>x1287)|x1288);

	if (t32 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1337 = INT16_MAX;
	uint64_t x1338 = UINT64_MAX;
	static uint8_t x1339 = 14U;
	volatile int16_t x1340 = -1;
	static uint64_t t33 = UINT64_MAX;

	t33 = (((x1337%x1338)>>x1339)|x1340);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1417 = INT32_MAX;
	uint8_t x1418 = 3U;
	uint8_t x1419 = 3U;
	volatile int16_t x1420 = -1;

	t34 = (((x1417%x1418)>>x1419)|x1420);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1445 = INT32_MIN;
	int8_t x1447 = 0;
	int32_t x1448 = INT32_MIN;
	int32_t t35 = INT32_MIN;

	t35 = (((x1445%x1446)>>x1447)|x1448);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1545 = 87662074;
	uint64_t x1546 = 13897445803LLU;
	int8_t x1548 = INT8_MIN;
	static uint64_t t36 = 15936666LLU;

	t36 = (((x1545%x1546)>>x1547)|x1548);

	if (t36 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1662 = -1;
	static int64_t x1664 = INT64_MAX;
	int64_t t37 = INT64_MAX;

	t37 = (((x1661%x1662)>>x1663)|x1664);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1665 = 0U;
	int64_t x1666 = -1LL;
	uint8_t x1667 = 0U;
	int64_t t38 = -241585901600LL;

	t38 = (((x1665%x1666)>>x1667)|x1668);

	if (t38 != 58LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1810 = UINT32_MAX;
	uint8_t x1811 = 4U;
	static uint32_t x1812 = UINT32_MAX;

	t39 = (((x1809%x1810)>>x1811)|x1812);

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1869 = UINT8_MAX;
	uint32_t x1870 = 1008U;
	volatile uint16_t x1871 = 15U;
	int8_t x1872 = INT8_MAX;
	uint32_t t40 = 839U;

	t40 = (((x1869%x1870)>>x1871)|x1872);

	if (t40 != 127U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1953 = 21;
	int64_t x1954 = INT64_MIN;
	int8_t x1955 = 3;
	uint16_t x1956 = UINT16_MAX;
	int64_t t41 = -31008051402906375LL;

	t41 = (((x1953%x1954)>>x1955)|x1956);

	if (t41 != 65535LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1977 = UINT64_MAX;
	int32_t x1978 = 218;
	uint8_t x1979 = 0U;
	int32_t x1980 = INT32_MIN;

	t42 = (((x1977%x1978)>>x1979)|x1980);

	if (t42 != 18446744071562068033LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x2057 = 1100876;
	volatile int8_t x2058 = INT8_MIN;
	int8_t x2059 = 1;
	uint32_t x2060 = UINT32_MAX;
	volatile uint32_t t43 = UINT32_MAX;

	t43 = (((x2057%x2058)>>x2059)|x2060);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2069 = 38U;
	int64_t x2071 = 1LL;
	int32_t x2072 = -112;
	int32_t t44 = 1752580;

	t44 = (((x2069%x2070)>>x2071)|x2072);

	if (t44 != -112) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x2077 = -1;
	int16_t x2078 = 1;
	uint32_t x2080 = UINT32_MAX;
	static uint32_t t45 = UINT32_MAX;

	t45 = (((x2077%x2078)>>x2079)|x2080);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2129 = 486534002515LLU;
	volatile uint8_t x2130 = 80U;
	uint8_t x2131 = 0U;
	uint16_t x2132 = 1449U;

	t46 = (((x2129%x2130)>>x2131)|x2132);

	if (t46 != 1451LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2145 = 171883750;
	int16_t x2147 = 4;
	uint32_t x2148 = 146720U;
	static volatile uint32_t t47 = 361873U;

	t47 = (((x2145%x2146)>>x2147)|x2148);

	if (t47 != 147438U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2193 = UINT32_MAX;
	uint16_t x2194 = 12U;
	uint8_t x2195 = 0U;
	int32_t x2196 = INT32_MAX;

	t48 = (((x2193%x2194)>>x2195)|x2196);

	if (t48 != 2147483647U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2205 = 6U;
	int32_t x2206 = -3422;
	volatile int32_t x2208 = INT32_MAX;
	int32_t t49 = INT32_MAX;

	t49 = (((x2205%x2206)>>x2207)|x2208);

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2257 = -6;
	uint32_t x2258 = 1933236U;
	uint16_t x2259 = 5U;
	static uint32_t t50 = 325760U;

	t50 = (((x2257%x2258)>>x2259)|x2260);

	if (t50 != 39070U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2309 = INT8_MIN;
	uint64_t x2310 = 784LLU;
	uint16_t x2311 = 4U;
	int16_t x2312 = 0;
	uint64_t t51 = 49017LLU;

	t51 = (((x2309%x2310)>>x2311)|x2312);

	if (t51 != 35LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2321 = INT16_MAX;
	int16_t x2322 = INT16_MIN;
	uint8_t x2324 = 1U;
	volatile int32_t t52 = -133759474;

	t52 = (((x2321%x2322)>>x2323)|x2324);

	if (t52 != 16383) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2342 = -1;
	volatile uint8_t x2343 = 3U;
	uint8_t x2344 = 0U;
	volatile int32_t t53 = 231352;

	t53 = (((x2341%x2342)>>x2343)|x2344);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x2397 = -6836117;
	uint32_t x2398 = 42U;
	uint8_t x2399 = 1U;
	static volatile int16_t x2400 = INT16_MIN;
	static volatile uint32_t t54 = 5U;

	t54 = (((x2397%x2398)>>x2399)|x2400);

	if (t54 != 4294934536U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x2401 = INT16_MAX;
	static int16_t x2402 = INT16_MAX;
	static uint8_t x2403 = 9U;
	static int16_t x2404 = INT16_MAX;
	static int32_t t55 = 0;

	t55 = (((x2401%x2402)>>x2403)|x2404);

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x2433 = INT64_MIN;
	int8_t x2434 = -1;
	int8_t x2435 = 18;
	int16_t x2436 = INT16_MAX;
	volatile int64_t t56 = -5786621LL;

	t56 = (((x2433%x2434)>>x2435)|x2436);

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2501 = INT64_MAX;
	int16_t x2502 = -1;
	uint32_t x2503 = 18U;
	int32_t x2504 = -7;

	t57 = (((x2501%x2502)>>x2503)|x2504);

	if (t57 != -7LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x2529 = 40548506U;
	uint8_t x2530 = UINT8_MAX;
	uint16_t x2531 = 1U;
	uint32_t x2532 = 1856923U;

	t58 = (((x2529%x2530)>>x2531)|x2532);

	if (t58 != 1856991U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2545 = 15U;
	uint8_t x2547 = 1U;
	int64_t x2548 = -1LL;
	static int64_t t59 = -6562385866472233LL;

	t59 = (((x2545%x2546)>>x2547)|x2548);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2593 = -1028319945;
	uint32_t x2594 = UINT32_MAX;
	uint8_t x2595 = 3U;
	int8_t x2596 = INT8_MIN;
	volatile uint32_t t60 = 2453U;

	t60 = (((x2593%x2594)>>x2595)|x2596);

	if (t60 != 4294967206U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x2629 = 2LL;
	static int16_t x2630 = -1;
	int32_t x2632 = -74825957;
	volatile int64_t t61 = -13453597845698278LL;

	t61 = (((x2629%x2630)>>x2631)|x2632);

	if (t61 != -74825957LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2653 = 19614U;
	int16_t x2654 = INT16_MIN;
	int16_t x2655 = 1;
	int8_t x2656 = INT8_MAX;

	t62 = (((x2653%x2654)>>x2655)|x2656);

	if (t62 != 9855U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x2669 = 104U;
	volatile int16_t x2670 = INT16_MIN;
	int8_t x2671 = 15;
	uint64_t x2672 = UINT64_MAX;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (((x2669%x2670)>>x2671)|x2672);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2770 = -1;
	volatile uint8_t x2771 = 8U;
	volatile uint16_t x2772 = 25256U;

	t64 = (((x2769%x2770)>>x2771)|x2772);

	if (t64 != 25256) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2837 = 13071319LLU;
	int8_t x2839 = 3;
	int16_t x2840 = -1;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (((x2837%x2838)>>x2839)|x2840);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2949 = -1;
	uint64_t x2951 = 1LLU;
	uint64_t x2952 = 494LLU;

	t66 = (((x2949%x2950)>>x2951)|x2952);

	if (t66 != 4431498771455LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3069 = INT32_MIN;
	static int16_t x3070 = INT16_MIN;
	int8_t x3071 = 0;
	uint8_t x3072 = UINT8_MAX;

	t67 = (((x3069%x3070)>>x3071)|x3072);

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3153 = UINT16_MAX;
	uint32_t x3156 = 7235U;
	uint32_t t68 = 11340U;

	t68 = (((x3153%x3154)>>x3155)|x3156);

	if (t68 != 7235U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x3157 = INT16_MAX;
	static uint8_t x3158 = 7U;
	uint16_t x3159 = 2U;
	uint32_t x3160 = 233U;
	volatile uint32_t t69 = 29U;

	t69 = (((x3157%x3158)>>x3159)|x3160);

	if (t69 != 233U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3181 = INT64_MAX;
	uint64_t x3182 = UINT64_MAX;
	int32_t x3183 = 5;
	volatile int8_t x3184 = -1;
	uint64_t t70 = UINT64_MAX;

	t70 = (((x3181%x3182)>>x3183)|x3184);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x3227 = 0U;
	int64_t x3228 = -959398474950145LL;
	volatile int64_t t71 = -205790670066997LL;

	t71 = (((x3225%x3226)>>x3227)|x3228);

	if (t71 != -959398474950145LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3234 = -1;
	volatile uint32_t x3236 = UINT32_MAX;

	t72 = (((x3233%x3234)>>x3235)|x3236);

	if (t72 != 4294967295LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3289 = UINT8_MAX;
	int16_t x3290 = INT16_MIN;
	static volatile uint64_t x3292 = UINT64_MAX;

	t73 = (((x3289%x3290)>>x3291)|x3292);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x3329 = INT32_MAX;
	int32_t x3330 = -1;
	uint32_t x3331 = 19U;
	uint32_t x3332 = 491U;
	static volatile uint32_t t74 = 1679993U;

	t74 = (((x3329%x3330)>>x3331)|x3332);

	if (t74 != 491U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x3365 = INT64_MAX;
	int16_t x3366 = -1;
	uint16_t x3367 = 1U;
	int8_t x3368 = INT8_MIN;
	volatile int64_t t75 = -13253057134LL;

	t75 = (((x3365%x3366)>>x3367)|x3368);

	if (t75 != -128LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3437 = 145843137LLU;
	static uint8_t x3439 = 51U;
	uint64_t t76 = 174100054275977LLU;

	t76 = (((x3437%x3438)>>x3439)|x3440);

	if (t76 != 65535LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x3462 = UINT32_MAX;
	int16_t x3463 = 12;
	volatile uint64_t x3464 = 6LLU;

	t77 = (((x3461%x3462)>>x3463)|x3464);

	if (t77 != 851919LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x3617 = 4434947U;
	int32_t x3618 = -1;
	static int32_t x3619 = 31;
	int16_t x3620 = 3;
	static volatile uint32_t t78 = 12U;

	t78 = (((x3617%x3618)>>x3619)|x3620);

	if (t78 != 3U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3654 = INT64_MAX;
	uint16_t x3655 = 0U;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (((x3653%x3654)>>x3655)|x3656);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x3661 = 247668394861056LLU;
	uint8_t x3662 = UINT8_MAX;
	int8_t x3663 = 1;
	int8_t x3664 = -14;
	volatile uint64_t t80 = 574579914LLU;

	t80 = (((x3661%x3662)>>x3663)|x3664);

	if (t80 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x3729 = 16191455808LLU;
	static uint8_t x3730 = 2U;
	static volatile int16_t x3731 = 1;
	static int64_t x3732 = -633LL;

	t81 = (((x3729%x3730)>>x3731)|x3732);

	if (t81 != 18446744073709550983LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x3901 = UINT64_MAX;
	uint64_t t82 = 2588996349866LLU;

	t82 = (((x3901%x3902)>>x3903)|x3904);

	if (t82 != 127512960LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x3941 = UINT8_MAX;
	uint8_t x3942 = 28U;
	volatile uint8_t x3943 = 18U;
	volatile uint32_t x3944 = 702686280U;
	uint32_t t83 = 637U;

	t83 = (((x3941%x3942)>>x3943)|x3944);

	if (t83 != 702686280U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4038 = 5U;
	volatile int32_t x4039 = 1;
	volatile int8_t x4040 = INT8_MIN;
	volatile int32_t t84 = -4016707;

	t84 = (((x4037%x4038)>>x4039)|x4040);

	if (t84 != -126) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4078 = UINT64_MAX;
	static volatile uint8_t x4079 = 1U;
	uint16_t x4080 = UINT16_MAX;
	volatile uint64_t t85 = 2060425LLU;

	t85 = (((x4077%x4078)>>x4079)|x4080);

	if (t85 != 9223372035781099519LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4087 = 1;
	static volatile int32_t t86 = 2649173;

	t86 = (((x4085%x4086)>>x4087)|x4088);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4114 = 31959246LLU;
	int8_t x4116 = INT8_MIN;
	uint64_t t87 = 18023516227650LLU;

	t87 = (((x4113%x4114)>>x4115)|x4116);

	if (t87 != 18446744073709551562LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4133 = 25LL;
	static uint8_t x4134 = UINT8_MAX;
	static volatile int8_t x4135 = 13;
	static int16_t x4136 = -9;
	volatile int64_t t88 = -11LL;

	t88 = (((x4133%x4134)>>x4135)|x4136);

	if (t88 != -9LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4146 = INT64_MIN;
	static int32_t x4148 = -1;
	volatile int64_t t89 = 312LL;

	t89 = (((x4145%x4146)>>x4147)|x4148);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4149 = UINT32_MAX;
	volatile int32_t x4150 = INT32_MAX;
	uint32_t t90 = 91771U;

	t90 = (((x4149%x4150)>>x4151)|x4152);

	if (t90 != 11U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x4185 = 8139396561517LLU;
	volatile int32_t x4186 = 23375;
	static uint64_t x4188 = UINT64_MAX;
	uint64_t t91 = UINT64_MAX;

	t91 = (((x4185%x4186)>>x4187)|x4188);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x4197 = 29U;
	volatile int8_t x4200 = INT8_MIN;
	volatile int32_t t92 = -12200;

	t92 = (((x4197%x4198)>>x4199)|x4200);

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4205 = 1;
	int64_t x4206 = 440816561708LL;
	uint8_t x4207 = 0U;
	volatile int16_t x4208 = INT16_MIN;
	static int64_t t93 = 46014969LL;

	t93 = (((x4205%x4206)>>x4207)|x4208);

	if (t93 != -32767LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x4221 = INT8_MIN;
	uint32_t x4223 = 1U;
	int32_t t94 = 795560;

	t94 = (((x4221%x4222)>>x4223)|x4224);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4241 = INT16_MAX;
	int8_t x4242 = 5;
	uint16_t x4243 = 3U;
	int8_t x4244 = 0;
	volatile int32_t t95 = 129598;

	t95 = (((x4241%x4242)>>x4243)|x4244);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x4281 = 9555U;
	volatile int8_t x4282 = INT8_MAX;
	static uint8_t x4283 = 15U;
	uint16_t x4284 = 32625U;
	int32_t t96 = 89;

	t96 = (((x4281%x4282)>>x4283)|x4284);

	if (t96 != 32625) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x4385 = 334148021U;
	int16_t x4386 = -1;
	uint8_t x4387 = 0U;
	static int8_t x4388 = INT8_MIN;
	static uint32_t t97 = 7036341U;

	t97 = (((x4385%x4386)>>x4387)|x4388);

	if (t97 != 4294967221U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x4409 = INT32_MAX;
	uint8_t x4410 = UINT8_MAX;
	volatile uint8_t x4411 = 4U;
	volatile int32_t t98 = 7;

	t98 = (((x4409%x4410)>>x4411)|x4412);

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4465 = 59577939U;
	volatile int64_t x4466 = INT64_MIN;
	static uint16_t x4467 = 46U;
	static volatile int32_t x4468 = INT32_MAX;
	int64_t t99 = 30253LL;

	t99 = (((x4465%x4466)>>x4467)|x4468);

	if (t99 != 2147483647LL) { NG(); } else { ; }
	
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

