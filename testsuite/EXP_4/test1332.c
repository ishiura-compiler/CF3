#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x24 = UINT8_MAX;
volatile int16_t x92 = INT16_MIN;
static uint64_t x97 = 1677769740449124LLU;
static volatile uint16_t x98 = 0U;
volatile int16_t x99 = -3251;
int32_t x243 = INT32_MIN;
int8_t x244 = -2;
volatile uint64_t t4 = 13LLU;
static uint64_t x709 = 10041522238215LLU;
static int16_t x712 = INT16_MIN;
static volatile int32_t t7 = 388;
static uint8_t x730 = 13U;
static uint32_t t8 = 7U;
int8_t x833 = 26;
static volatile int32_t x835 = -3;
int8_t x914 = 3;
int32_t t11 = 67;
volatile int64_t t12 = -1969185333267LL;
volatile uint16_t x1111 = UINT16_MAX;
uint16_t x1127 = 435U;
volatile int16_t x1255 = INT16_MAX;
static int16_t x1425 = INT16_MAX;
uint8_t x1427 = 91U;
volatile int32_t t17 = 280592;
int32_t t19 = 9546814;
int8_t x1670 = 0;
static volatile int32_t t20 = 221;
int64_t x1831 = -24718LL;
int64_t x2073 = 1002694LL;
static uint8_t x2074 = 2U;
volatile int64_t x2075 = INT64_MAX;
int8_t x2164 = -13;
static volatile int32_t t28 = 0;
static volatile uint64_t x2167 = UINT64_MAX;
uint16_t x2195 = 2U;
uint32_t x2196 = 8U;
static uint64_t t30 = 632LLU;
int8_t x2300 = INT8_MIN;
int8_t x2354 = 7;
volatile int32_t t34 = -37;
int32_t x2512 = -1;
volatile int16_t x2579 = INT16_MIN;
volatile uint64_t t38 = 47754LLU;
int16_t x2603 = -362;
volatile int64_t x2667 = INT64_MIN;
uint32_t t43 = 59U;
uint16_t x2772 = UINT16_MAX;
int32_t t44 = 9444;
volatile int16_t x2780 = 28;
static int32_t t46 = -408747;
volatile int32_t t47 = 3708;
int16_t x2989 = INT16_MAX;
int32_t x3001 = 978763245;
uint8_t x3022 = 2U;
uint64_t x3185 = 55427373LLU;
volatile uint8_t x3406 = 16U;
uint8_t x3561 = UINT8_MAX;
uint8_t x3562 = 1U;
int64_t x3572 = -15163875222LL;
uint8_t x3607 = UINT8_MAX;
int32_t x3731 = INT32_MAX;
uint32_t x3810 = 8U;
int16_t x3812 = INT16_MAX;
volatile int32_t t60 = 66;
int8_t x3890 = 0;
volatile uint32_t t62 = 0U;
static int32_t x4040 = INT32_MIN;
uint16_t x4046 = 4U;
volatile int32_t t64 = -9;
volatile uint64_t x4065 = 6LLU;
int8_t x4066 = 37;
volatile uint16_t x4067 = 38U;
int32_t t67 = 227841280;
static int16_t x4103 = -1;
uint64_t x4197 = 150LLU;
uint16_t x4198 = 0U;
volatile uint64_t t70 = 3437LLU;
volatile uint32_t x4316 = UINT32_MAX;
static int8_t x4478 = 1;
volatile int32_t t73 = 407906;
int32_t x4807 = INT32_MIN;
uint64_t x4833 = UINT64_MAX;
uint32_t x4957 = 940851U;
int16_t x4959 = 12;
int16_t x4973 = 1;
int16_t x5070 = 1;
uint16_t x5103 = 25917U;
int8_t x5104 = 6;
int16_t x5165 = 19;
volatile int16_t x5166 = 0;
int64_t x5181 = 7023190542631LL;
static volatile int64_t t85 = -1LL;
uint16_t x5359 = UINT16_MAX;
uint8_t x5370 = 2U;
volatile uint32_t t91 = 75934249U;
uint8_t x5882 = 30U;
uint64_t x5911 = 26338633950890LLU;
static int8_t x5912 = INT8_MIN;
uint32_t t94 = 2188U;
static volatile int8_t x6059 = INT8_MIN;
volatile int8_t x6060 = INT8_MIN;
int16_t x6144 = INT16_MIN;
volatile uint32_t t97 = UINT32_MAX;
uint32_t x6297 = UINT32_MAX;


void f0(void) {
	int16_t x21 = INT16_MAX;
	int8_t x22 = 1;
	volatile int8_t x23 = -1;
	static int32_t t0 = -2998;

	t0 = (x21<<(x22|(x23==x24)));

	if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x89 = 1613209858799404LLU;
	int8_t x90 = 6;
	int8_t x91 = -22;
	volatile uint64_t t1 = 3291407LLU;

	t1 = (x89<<(x90|(x91==x92)));

	if (t1 != 103245430963161856LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x100 = -124244237;
	volatile uint64_t t2 = 1054067131LLU;

	t2 = (x97<<(x98|(x99==x100)));

	if (t2 != 1677769740449124LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x233 = UINT32_MAX;
	uint16_t x234 = 24U;
	int8_t x235 = -1;
	volatile int8_t x236 = INT8_MIN;
	volatile uint32_t t3 = 32U;

	t3 = (x233<<(x234|(x235==x236)));

	if (t3 != 4278190080U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x241 = UINT64_MAX;
	uint32_t x242 = 12U;

	t4 = (x241<<(x242|(x243==x244)));

	if (t4 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x401 = 2113570024153863LLU;
	static uint8_t x402 = 1U;
	int8_t x403 = 13;
	static uint16_t x404 = UINT16_MAX;
	uint64_t t5 = 10242690906LLU;

	t5 = (x401<<(x402|(x403==x404)));

	if (t5 != 4227140048307726LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x710 = 42U;
	static int16_t x711 = INT16_MIN;
	uint64_t t6 = 208509278286LLU;

	t6 = (x709<<(x710|(x711==x712)));

	if (t6 != 17120495556100096000LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x713 = UINT8_MAX;
	int8_t x714 = 1;
	volatile int32_t x715 = -6629;
	static int64_t x716 = 3443LL;

	t7 = (x713<<(x714|(x715==x716)));

	if (t7 != 510) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x729 = 505642U;
	int16_t x731 = 112;
	uint32_t x732 = UINT32_MAX;

	t8 = (x729<<(x730|(x731==x732)));

	if (t8 != 4142219264U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x834 = 3U;
	volatile int16_t x836 = 8;
	volatile int32_t t9 = -272521361;

	t9 = (x833<<(x834|(x835==x836)));

	if (t9 != 208) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x913 = 1775516U;
	int8_t x915 = 0;
	static int32_t x916 = -1;
	uint32_t t10 = 246U;

	t10 = (x913<<(x914|(x915==x916)));

	if (t10 != 14204128U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x917 = UINT8_MAX;
	int8_t x918 = 21;
	static int64_t x919 = -1LL;
	uint8_t x920 = 21U;

	t11 = (x917<<(x918|(x919==x920)));

	if (t11 != 534773760) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x1033 = 403833698LL;
	int8_t x1034 = 0;
	volatile int32_t x1035 = INT32_MAX;
	int8_t x1036 = INT8_MIN;

	t12 = (x1033<<(x1034|(x1035==x1036)));

	if (t12 != 403833698LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x1109 = UINT32_MAX;
	int16_t x1110 = 25;
	int8_t x1112 = -39;
	volatile uint32_t t13 = 25140250U;

	t13 = (x1109<<(x1110|(x1111==x1112)));

	if (t13 != 4261412864U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x1125 = INT32_MAX;
	uint8_t x1126 = 0U;
	int64_t x1128 = 0LL;
	static int32_t t14 = INT32_MAX;

	t14 = (x1125<<(x1126|(x1127==x1128)));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1145 = UINT8_MAX;
	static uint8_t x1146 = 20U;
	volatile int64_t x1147 = INT64_MAX;
	static int8_t x1148 = -1;
	int32_t t15 = -7290;

	t15 = (x1145<<(x1146|(x1147==x1148)));

	if (t15 != 267386880) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1253 = 131;
	volatile uint16_t x1254 = 1U;
	uint16_t x1256 = 0U;
	int32_t t16 = 1016118;

	t16 = (x1253<<(x1254|(x1255==x1256)));

	if (t16 != 262) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x1426 = 1U;
	int32_t x1428 = INT32_MIN;

	t17 = (x1425<<(x1426|(x1427==x1428)));

	if (t17 != 65534) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1625 = 9340U;
	uint16_t x1626 = 1U;
	uint16_t x1627 = 1U;
	static int64_t x1628 = INT64_MIN;
	volatile int32_t t18 = 508953;

	t18 = (x1625<<(x1626|(x1627==x1628)));

	if (t18 != 18680) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1653 = INT16_MAX;
	int32_t x1654 = 1;
	int16_t x1655 = INT16_MIN;
	int8_t x1656 = INT8_MIN;

	t19 = (x1653<<(x1654|(x1655==x1656)));

	if (t19 != 65534) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1669 = INT16_MAX;
	int32_t x1671 = 733;
	static uint16_t x1672 = 371U;

	t20 = (x1669<<(x1670|(x1671==x1672)));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1709 = 4;
	volatile int16_t x1710 = 2;
	uint32_t x1711 = 591U;
	static int32_t x1712 = -1;
	int32_t t21 = -210597;

	t21 = (x1709<<(x1710|(x1711==x1712)));

	if (t21 != 16) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x1829 = UINT64_MAX;
	uint16_t x1830 = 4U;
	uint8_t x1832 = UINT8_MAX;
	uint64_t t22 = 1LLU;

	t22 = (x1829<<(x1830|(x1831==x1832)));

	if (t22 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1885 = 263LL;
	int8_t x1886 = 4;
	static volatile int16_t x1887 = INT16_MIN;
	int64_t x1888 = -1LL;
	int64_t t23 = 9077879LL;

	t23 = (x1885<<(x1886|(x1887==x1888)));

	if (t23 != 4208LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1905 = UINT64_MAX;
	int16_t x1906 = 2;
	uint64_t x1907 = 268LLU;
	int8_t x1908 = INT8_MIN;
	volatile uint64_t t24 = 360275715287283093LLU;

	t24 = (x1905<<(x1906|(x1907==x1908)));

	if (t24 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1993 = UINT8_MAX;
	uint16_t x1994 = 0U;
	int16_t x1995 = 11;
	uint64_t x1996 = 866247070LLU;
	volatile int32_t t25 = 30896;

	t25 = (x1993<<(x1994|(x1995==x1996)));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x2076 = 490U;
	int64_t t26 = -355LL;

	t26 = (x2073<<(x2074|(x2075==x2076)));

	if (t26 != 4010776LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x2125 = UINT8_MAX;
	uint16_t x2126 = 3U;
	static int64_t x2127 = 2862163462069131592LL;
	int8_t x2128 = 0;
	static int32_t t27 = -12835;

	t27 = (x2125<<(x2126|(x2127==x2128)));

	if (t27 != 2040) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x2161 = UINT8_MAX;
	static volatile uint32_t x2162 = 0U;
	static int64_t x2163 = INT64_MIN;

	t28 = (x2161<<(x2162|(x2163==x2164)));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x2165 = INT16_MAX;
	int8_t x2166 = 7;
	int16_t x2168 = -1;
	volatile int32_t t29 = 1;

	t29 = (x2165<<(x2166|(x2167==x2168)));

	if (t29 != 4194176) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2193 = UINT64_MAX;
	uint32_t x2194 = 13U;

	t30 = (x2193<<(x2194|(x2195==x2196)));

	if (t30 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x2213 = 1U;
	uint64_t x2214 = 9LLU;
	static int8_t x2215 = INT8_MIN;
	volatile int32_t x2216 = 425;
	int32_t t31 = 41184;

	t31 = (x2213<<(x2214|(x2215==x2216)));

	if (t31 != 512) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2297 = 6U;
	uint16_t x2298 = 0U;
	uint8_t x2299 = 2U;
	int32_t t32 = 146643;

	t32 = (x2297<<(x2298|(x2299==x2300)));

	if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2353 = UINT8_MAX;
	uint16_t x2355 = UINT16_MAX;
	volatile uint64_t x2356 = 69LLU;
	static int32_t t33 = 3636015;

	t33 = (x2353<<(x2354|(x2355==x2356)));

	if (t33 != 32640) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x2449 = 45;
	volatile int8_t x2450 = 0;
	static int8_t x2451 = INT8_MIN;
	volatile int16_t x2452 = 0;

	t34 = (x2449<<(x2450|(x2451==x2452)));

	if (t34 != 45) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2465 = 63U;
	uint32_t x2466 = 14U;
	static volatile int32_t x2467 = -1;
	static int8_t x2468 = INT8_MIN;
	volatile int32_t t35 = -23296084;

	t35 = (x2465<<(x2466|(x2467==x2468)));

	if (t35 != 1032192) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x2485 = INT16_MAX;
	uint64_t x2486 = 4LLU;
	int16_t x2487 = INT16_MAX;
	int64_t x2488 = INT64_MIN;
	static volatile int32_t t36 = 8;

	t36 = (x2485<<(x2486|(x2487==x2488)));

	if (t36 != 524272) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2509 = INT8_MAX;
	static uint16_t x2510 = 4U;
	int16_t x2511 = INT16_MIN;
	static int32_t t37 = -108;

	t37 = (x2509<<(x2510|(x2511==x2512)));

	if (t37 != 2032) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2577 = 577382LLU;
	static uint8_t x2578 = 1U;
	uint16_t x2580 = 1623U;

	t38 = (x2577<<(x2578|(x2579==x2580)));

	if (t38 != 1154764LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2601 = UINT8_MAX;
	uint32_t x2602 = 0U;
	int64_t x2604 = -1LL;
	int32_t t39 = 92;

	t39 = (x2601<<(x2602|(x2603==x2604)));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2657 = 24U;
	uint8_t x2658 = 0U;
	int16_t x2659 = -1;
	uint8_t x2660 = UINT8_MAX;
	static int32_t t40 = -231147111;

	t40 = (x2657<<(x2658|(x2659==x2660)));

	if (t40 != 24) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x2665 = 7U;
	volatile uint32_t x2666 = 0U;
	int8_t x2668 = INT8_MIN;
	volatile int32_t t41 = 78;

	t41 = (x2665<<(x2666|(x2667==x2668)));

	if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2669 = UINT64_MAX;
	int32_t x2670 = 17;
	static int16_t x2671 = -421;
	volatile int64_t x2672 = -1LL;
	uint64_t t42 = 809163412LLU;

	t42 = (x2669<<(x2670|(x2671==x2672)));

	if (t42 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2693 = 143352131U;
	int8_t x2694 = 27;
	uint32_t x2695 = 30188U;
	static int64_t x2696 = INT64_MIN;

	t43 = (x2693<<(x2694|(x2695==x2696)));

	if (t43 != 402653184U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x2769 = UINT16_MAX;
	int8_t x2770 = 15;
	int8_t x2771 = INT8_MIN;

	t44 = (x2769<<(x2770|(x2771==x2772)));

	if (t44 != 2147450880) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2777 = 319LLU;
	uint32_t x2778 = 1U;
	int8_t x2779 = INT8_MIN;
	uint64_t t45 = 15LLU;

	t45 = (x2777<<(x2778|(x2779==x2780)));

	if (t45 != 638LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2949 = INT8_MAX;
	static uint16_t x2950 = 0U;
	int64_t x2951 = -1LL;
	static int32_t x2952 = INT32_MIN;

	t46 = (x2949<<(x2950|(x2951==x2952)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2977 = 2835U;
	int8_t x2978 = 1;
	int32_t x2979 = -3828163;
	int16_t x2980 = INT16_MIN;

	t47 = (x2977<<(x2978|(x2979==x2980)));

	if (t47 != 5670) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2990 = 6U;
	int8_t x2991 = INT8_MAX;
	int16_t x2992 = INT16_MIN;
	static volatile int32_t t48 = 329336676;

	t48 = (x2989<<(x2990|(x2991==x2992)));

	if (t48 != 2097088) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3002 = 1U;
	int64_t x3003 = INT64_MIN;
	int64_t x3004 = 234932719LL;
	int32_t t49 = -3441;

	t49 = (x3001<<(x3002|(x3003==x3004)));

	if (t49 != 1957526490) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3021 = UINT32_MAX;
	uint16_t x3023 = 2U;
	int16_t x3024 = -2911;
	volatile uint32_t t50 = 4935091U;

	t50 = (x3021<<(x3022|(x3023==x3024)));

	if (t50 != 4294967292U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x3085 = UINT8_MAX;
	static volatile uint16_t x3086 = 21U;
	int32_t x3087 = INT32_MIN;
	volatile uint64_t x3088 = UINT64_MAX;
	static volatile int32_t t51 = 147091;

	t51 = (x3085<<(x3086|(x3087==x3088)));

	if (t51 != 534773760) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3097 = UINT8_MAX;
	volatile int8_t x3098 = 0;
	int32_t x3099 = -7193430;
	uint64_t x3100 = 3LLU;
	volatile int32_t t52 = -9895656;

	t52 = (x3097<<(x3098|(x3099==x3100)));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3186 = 3U;
	uint8_t x3187 = 5U;
	int32_t x3188 = 248622;
	uint64_t t53 = 16826676442452LLU;

	t53 = (x3185<<(x3186|(x3187==x3188)));

	if (t53 != 443418984LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3405 = 135LLU;
	int64_t x3407 = INT64_MIN;
	int8_t x3408 = -1;
	uint64_t t54 = 16373359LLU;

	t54 = (x3405<<(x3406|(x3407==x3408)));

	if (t54 != 8847360LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3563 = UINT64_MAX;
	int64_t x3564 = INT64_MIN;
	int32_t t55 = -615;

	t55 = (x3561<<(x3562|(x3563==x3564)));

	if (t55 != 510) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x3569 = 15U;
	int8_t x3570 = 0;
	int8_t x3571 = INT8_MIN;
	int32_t t56 = 91155;

	t56 = (x3569<<(x3570|(x3571==x3572)));

	if (t56 != 15) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3605 = 0U;
	uint8_t x3606 = 0U;
	int16_t x3608 = 0;
	volatile int32_t t57 = -16;

	t57 = (x3605<<(x3606|(x3607==x3608)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3729 = 1865U;
	volatile uint16_t x3730 = 3U;
	uint8_t x3732 = 11U;
	volatile int32_t t58 = 17300;

	t58 = (x3729<<(x3730|(x3731==x3732)));

	if (t58 != 14920) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3809 = 1490U;
	int16_t x3811 = -1;
	int32_t t59 = 88396694;

	t59 = (x3809<<(x3810|(x3811==x3812)));

	if (t59 != 381440) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x3861 = 803U;
	int8_t x3862 = 2;
	static int64_t x3863 = INT64_MIN;
	uint32_t x3864 = 10U;

	t60 = (x3861<<(x3862|(x3863==x3864)));

	if (t60 != 3212) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x3889 = UINT32_MAX;
	int32_t x3891 = INT32_MIN;
	uint32_t x3892 = 107401219U;
	uint32_t t61 = UINT32_MAX;

	t61 = (x3889<<(x3890|(x3891==x3892)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3893 = 1U;
	int8_t x3894 = 0;
	int64_t x3895 = INT64_MIN;
	int8_t x3896 = INT8_MAX;

	t62 = (x3893<<(x3894|(x3895==x3896)));

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4037 = INT8_MAX;
	uint8_t x4038 = 3U;
	int64_t x4039 = INT64_MIN;
	static int32_t t63 = -7230262;

	t63 = (x4037<<(x4038|(x4039==x4040)));

	if (t63 != 1016) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4045 = INT8_MAX;
	static int16_t x4047 = INT16_MIN;
	int8_t x4048 = 6;

	t64 = (x4045<<(x4046|(x4047==x4048)));

	if (t64 != 2032) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x4068 = 3420U;
	uint64_t t65 = 383LLU;

	t65 = (x4065<<(x4066|(x4067==x4068)));

	if (t65 != 824633720832LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x4069 = 1U;
	int16_t x4070 = 8;
	int32_t x4071 = -1;
	uint32_t x4072 = 3U;
	int32_t t66 = 104931591;

	t66 = (x4069<<(x4070|(x4071==x4072)));

	if (t66 != 256) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x4085 = 40U;
	static int8_t x4086 = 1;
	uint64_t x4087 = UINT64_MAX;
	int32_t x4088 = INT32_MIN;

	t67 = (x4085<<(x4086|(x4087==x4088)));

	if (t67 != 80) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x4101 = 47U;
	int8_t x4102 = 0;
	uint64_t x4104 = 8238042640099LLU;
	int32_t t68 = 6923;

	t68 = (x4101<<(x4102|(x4103==x4104)));

	if (t68 != 47) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x4177 = UINT32_MAX;
	volatile uint16_t x4178 = 1U;
	int32_t x4179 = -1028658;
	int16_t x4180 = INT16_MIN;
	static uint32_t t69 = 225U;

	t69 = (x4177<<(x4178|(x4179==x4180)));

	if (t69 != 4294967294U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4199 = 3459941949550860LLU;
	static uint32_t x4200 = UINT32_MAX;

	t70 = (x4197<<(x4198|(x4199==x4200)));

	if (t70 != 150LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4289 = UINT8_MAX;
	static uint16_t x4290 = 0U;
	volatile uint64_t x4291 = UINT64_MAX;
	static volatile int32_t x4292 = -479274;
	volatile int32_t t71 = 228295356;

	t71 = (x4289<<(x4290|(x4291==x4292)));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4313 = INT32_MAX;
	volatile int8_t x4314 = 0;
	int64_t x4315 = 46LL;
	int32_t t72 = INT32_MAX;

	t72 = (x4313<<(x4314|(x4315==x4316)));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4477 = INT8_MAX;
	volatile int8_t x4479 = INT8_MAX;
	int16_t x4480 = INT16_MIN;

	t73 = (x4477<<(x4478|(x4479==x4480)));

	if (t73 != 254) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4521 = UINT64_MAX;
	volatile int8_t x4522 = 3;
	int8_t x4523 = -1;
	volatile int8_t x4524 = INT8_MAX;
	uint64_t t74 = 1302654994537524713LLU;

	t74 = (x4521<<(x4522|(x4523==x4524)));

	if (t74 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4805 = 6U;
	int64_t x4806 = 0LL;
	uint8_t x4808 = 1U;
	volatile int32_t t75 = 189415;

	t75 = (x4805<<(x4806|(x4807==x4808)));

	if (t75 != 6) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4834 = 37;
	static uint8_t x4835 = UINT8_MAX;
	int16_t x4836 = -27;
	uint64_t t76 = 40765LLU;

	t76 = (x4833<<(x4834|(x4835==x4836)));

	if (t76 != 18446743936270598144LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4958 = 3;
	static volatile uint8_t x4960 = 13U;
	static volatile uint32_t t77 = 1U;

	t77 = (x4957<<(x4958|(x4959==x4960)));

	if (t77 != 7526808U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4974 = 14U;
	int32_t x4975 = -1;
	int8_t x4976 = INT8_MIN;
	int32_t t78 = -76471;

	t78 = (x4973<<(x4974|(x4975==x4976)));

	if (t78 != 16384) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x5069 = 12U;
	uint8_t x5071 = UINT8_MAX;
	volatile int8_t x5072 = 7;
	volatile int32_t t79 = 8847;

	t79 = (x5069<<(x5070|(x5071==x5072)));

	if (t79 != 24) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5073 = 0;
	volatile int32_t x5074 = 24;
	int8_t x5075 = INT8_MAX;
	int32_t x5076 = -1;
	static int32_t t80 = -5761547;

	t80 = (x5073<<(x5074|(x5075==x5076)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x5101 = 27U;
	int8_t x5102 = 0;
	int32_t t81 = -4322;

	t81 = (x5101<<(x5102|(x5103==x5104)));

	if (t81 != 27) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x5133 = 4U;
	int8_t x5134 = 5;
	volatile uint32_t x5135 = 406U;
	volatile int8_t x5136 = INT8_MIN;
	volatile int32_t t82 = -371793;

	t82 = (x5133<<(x5134|(x5135==x5136)));

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5167 = INT32_MIN;
	uint32_t x5168 = 13006U;
	volatile int32_t t83 = -45;

	t83 = (x5165<<(x5166|(x5167==x5168)));

	if (t83 != 19) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x5182 = 0;
	int8_t x5183 = INT8_MIN;
	static uint8_t x5184 = 22U;
	static volatile int64_t t84 = 465011756594428LL;

	t84 = (x5181<<(x5182|(x5183==x5184)));

	if (t84 != 7023190542631LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5229 = 53LL;
	uint32_t x5230 = 51U;
	int8_t x5231 = INT8_MAX;
	static volatile int64_t x5232 = INT64_MAX;

	t85 = (x5229<<(x5230|(x5231==x5232)));

	if (t85 != 119345390125318144LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5341 = 4665222U;
	int32_t x5342 = 1;
	static int64_t x5343 = -2571734185LL;
	int32_t x5344 = INT32_MIN;
	uint32_t t86 = 9494U;

	t86 = (x5341<<(x5342|(x5343==x5344)));

	if (t86 != 9330444U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5357 = INT16_MAX;
	int16_t x5358 = 0;
	volatile int32_t x5360 = INT32_MIN;
	static int32_t t87 = -455;

	t87 = (x5357<<(x5358|(x5359==x5360)));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x5369 = UINT32_MAX;
	int16_t x5371 = -54;
	static uint16_t x5372 = 280U;
	volatile uint32_t t88 = 2U;

	t88 = (x5369<<(x5370|(x5371==x5372)));

	if (t88 != 4294967292U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5465 = UINT64_MAX;
	int32_t x5466 = 10;
	volatile uint32_t x5467 = UINT32_MAX;
	int16_t x5468 = INT16_MIN;
	uint64_t t89 = 105130LLU;

	t89 = (x5465<<(x5466|(x5467==x5468)));

	if (t89 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5581 = UINT16_MAX;
	int16_t x5582 = 1;
	static uint16_t x5583 = 1951U;
	uint16_t x5584 = UINT16_MAX;
	int32_t t90 = 0;

	t90 = (x5581<<(x5582|(x5583==x5584)));

	if (t90 != 131070) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x5789 = UINT32_MAX;
	uint16_t x5790 = 4U;
	int8_t x5791 = INT8_MIN;
	uint32_t x5792 = UINT32_MAX;

	t91 = (x5789<<(x5790|(x5791==x5792)));

	if (t91 != 4294967280U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5881 = 63647LL;
	static volatile int32_t x5883 = INT32_MIN;
	volatile uint8_t x5884 = 82U;
	volatile int64_t t92 = -3115LL;

	t92 = (x5881<<(x5882|(x5883==x5884)));

	if (t92 != 68340445872128LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5909 = 17585U;
	uint8_t x5910 = 7U;
	int32_t t93 = -71488152;

	t93 = (x5909<<(x5910|(x5911==x5912)));

	if (t93 != 2250880) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x5945 = 246938708U;
	uint8_t x5946 = 3U;
	uint64_t x5947 = 2068459LLU;
	uint16_t x5948 = 10443U;

	t94 = (x5945<<(x5946|(x5947==x5948)));

	if (t94 != 1975509664U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6017 = INT16_MAX;
	int8_t x6018 = 15;
	int16_t x6019 = INT16_MAX;
	int32_t x6020 = INT32_MIN;
	static volatile int32_t t95 = 305866899;

	t95 = (x6017<<(x6018|(x6019==x6020)));

	if (t95 != 1073709056) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x6057 = 2;
	int16_t x6058 = 1;
	int32_t t96 = 141780;

	t96 = (x6057<<(x6058|(x6059==x6060)));

	if (t96 != 4) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x6141 = UINT32_MAX;
	uint32_t x6142 = 0U;
	static int32_t x6143 = -1;

	t97 = (x6141<<(x6142|(x6143==x6144)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x6298 = 31;
	int8_t x6299 = 0;
	int16_t x6300 = INT16_MAX;
	volatile uint32_t t98 = 4038U;

	t98 = (x6297<<(x6298|(x6299==x6300)));

	if (t98 != 2147483648U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x6321 = UINT16_MAX;
	static uint32_t x6322 = 6U;
	int32_t x6323 = INT32_MAX;
	uint16_t x6324 = 6067U;
	static int32_t t99 = -78;

	t99 = (x6321<<(x6322|(x6323==x6324)));

	if (t99 != 4194240) { NG(); } else { ; }
	
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

