
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = -10077;
int64_t x16 = -1LL;
volatile int32_t t1 = 61;
static int64_t t2 = -67606192603038841LL;
static uint64_t x30 = UINT64_MAX;
uint64_t x32 = 3965455977369601LLU;
uint32_t x38 = 399187747U;
volatile uint32_t x39 = 0U;
int8_t x42 = INT8_MIN;
static int32_t t6 = 275590;
int32_t x52 = -543131644;
uint8_t x53 = 21U;
int64_t x82 = 5LL;
static volatile uint64_t x83 = 2105995724379828LLU;
static uint64_t x90 = 4019981LLU;
int64_t x91 = -633739951217549LL;
uint64_t x92 = 2524763LLU;
uint64_t x94 = UINT64_MAX;
static int64_t x101 = 1616097LL;
int8_t x102 = INT8_MIN;
int32_t x103 = INT32_MIN;
int8_t x104 = INT8_MIN;
int16_t x114 = INT16_MIN;
int8_t x116 = -1;
static uint64_t x128 = 507794785251LLU;
volatile uint32_t x129 = 1U;
int8_t x132 = INT8_MIN;
static int8_t x150 = -17;
int32_t x158 = INT32_MAX;
uint64_t x159 = 3226LLU;
int64_t x166 = -1422767606939217LL;
int64_t t25 = 3388109LL;
int64_t x182 = 810394LL;
static int8_t x197 = -1;
uint8_t x199 = 9U;
volatile int32_t t29 = 265619365;
uint8_t x221 = 124U;
uint16_t x235 = 0U;
uint32_t x244 = UINT32_MAX;
volatile uint64_t t33 = 11716LLU;
int8_t x253 = -1;
int8_t x257 = INT8_MIN;
int16_t x259 = -5;
uint64_t x264 = 10780347875LLU;
volatile int64_t x268 = -1LL;
static volatile int32_t t37 = 5021;
volatile int8_t x280 = -32;
int32_t t39 = -3088;
uint64_t x285 = UINT64_MAX;
int8_t x286 = 13;
uint64_t x293 = UINT64_MAX;
uint64_t t42 = 143620015LLU;
static volatile int8_t x303 = INT8_MAX;
static volatile int64_t x318 = -695146238451LL;
int64_t x319 = INT64_MIN;
int32_t x322 = -1;
int32_t t47 = -117759;
int16_t x327 = -1;
static int32_t t50 = -54874;
int8_t x360 = INT8_MIN;
int16_t x377 = -108;
int64_t x380 = 22496597LL;
uint32_t x390 = 32242834U;
uint32_t x394 = UINT32_MAX;
uint32_t t57 = 30844U;
uint8_t x425 = UINT8_MAX;
volatile int64_t x428 = INT64_MIN;
static uint32_t x434 = 318536824U;
volatile int64_t t62 = -1034154604LL;
uint64_t x450 = 67LLU;
volatile uint32_t x461 = 3U;
int16_t x464 = 3;
volatile uint64_t t65 = 17348212LLU;
uint16_t x468 = 7U;
volatile uint64_t x470 = 137583LLU;
int8_t x476 = 0;
volatile int32_t t69 = 16994614;
int8_t x498 = -2;
volatile int16_t x500 = INT16_MIN;
static uint64_t x509 = UINT64_MAX;
volatile uint32_t x513 = 6U;
int16_t x517 = 422;
uint32_t x520 = 25984792U;
static volatile int64_t x522 = -747451LL;
uint32_t x523 = 2U;
int64_t t76 = 52028LL;
volatile uint16_t x529 = UINT16_MAX;
uint64_t x530 = UINT64_MAX;
int16_t x532 = INT16_MAX;
volatile uint8_t x545 = UINT8_MAX;
int32_t x548 = -1;
int64_t t81 = INT64_MAX;
int8_t x562 = INT8_MIN;
static int32_t t82 = -214001;
volatile int32_t t84 = -221233;
static volatile uint32_t x576 = 71176796U;
uint32_t x578 = 11U;
volatile int64_t t87 = 50843205816574162LL;
int16_t x587 = INT16_MIN;
int64_t x591 = 28384384421549352LL;
static int32_t x592 = INT32_MIN;
uint32_t t89 = 0U;
uint32_t x601 = 2U;
uint32_t x604 = UINT32_MAX;
static int64_t x609 = 8150LL;
int16_t x610 = -1;
static int16_t x611 = INT16_MAX;
int32_t x623 = INT32_MAX;
static uint64_t x625 = UINT64_MAX;
static uint16_t x630 = 103U;
int64_t x631 = INT64_MIN;
static int64_t x651 = 39558165699LL;
volatile uint16_t x663 = 3U;
static int8_t x668 = INT8_MIN;
int32_t t99 = 2509399;
uint32_t x697 = 4087281U;
int8_t x698 = -1;
static int32_t x708 = INT32_MIN;
uint64_t x710 = 1468743532060475060LLU;
uint8_t x715 = 96U;
static uint32_t x727 = UINT32_MAX;
volatile int8_t x728 = INT8_MAX;
volatile uint32_t t105 = 191602U;
uint16_t x751 = 6542U;
uint8_t x765 = UINT8_MAX;
int16_t x770 = -1;
static uint8_t x771 = 16U;
int8_t x774 = INT8_MIN;
volatile int8_t x776 = INT8_MAX;
volatile uint16_t x777 = 115U;
static int8_t x778 = -1;
int32_t x790 = -4;
static uint32_t x792 = 4084U;
int32_t x813 = -1;
int16_t x816 = -2;
volatile int32_t t116 = -275759;
int32_t t119 = 24588422;
int8_t x834 = -29;
int64_t t120 = -2017456386LL;
uint64_t x859 = UINT64_MAX;
uint64_t x861 = 3LLU;
uint64_t x877 = UINT64_MAX;
int64_t x881 = INT64_MIN;
int32_t x884 = INT32_MIN;
uint16_t x892 = 8858U;
int16_t x897 = INT16_MAX;
int32_t x908 = -851;
static int64_t x916 = -1707871529603714LL;
int64_t x917 = -13181133704029LL;
int64_t x918 = INT64_MIN;
uint32_t x920 = 64408U;
volatile int16_t x950 = INT16_MIN;
int8_t x951 = 7;
static uint64_t t136 = 99906231739LLU;
uint8_t x1014 = 20U;
int64_t x1017 = 25468644845716887LL;
int64_t t140 = 1836LL;
volatile int64_t x1034 = INT64_MIN;
int32_t x1038 = -5228247;
uint64_t x1042 = 1976685904729003LLU;
uint64_t t143 = 2252106975629109713LLU;
int8_t x1061 = 0;
uint16_t x1070 = UINT16_MAX;
int64_t x1076 = INT64_MIN;
volatile int32_t t147 = 37;
int64_t x1077 = 28831967621278426LL;
int32_t x1096 = -1;
int32_t t153 = -2292907;
int32_t x1103 = INT32_MIN;
uint8_t x1104 = 18U;
uint64_t x1110 = 96228623931166138LLU;
int16_t x1122 = -1;
int32_t x1131 = INT32_MAX;
volatile int64_t t158 = 30027433983001139LL;
int16_t x1137 = INT16_MIN;
uint64_t x1147 = 128466336401057896LLU;
volatile int32_t t161 = 2;
uint16_t x1153 = 389U;
uint64_t x1155 = 270636710506LLU;
volatile int64_t x1164 = INT64_MAX;
uint16_t x1167 = UINT16_MAX;
uint64_t t167 = 306907143791422LLU;
int16_t x1222 = INT16_MIN;
int8_t x1224 = 1;
static uint16_t x1227 = 493U;
int16_t x1228 = INT16_MIN;
int64_t x1235 = -1LL;
static uint16_t x1236 = 8U;
int32_t x1249 = -1;
int16_t x1250 = INT16_MIN;
uint32_t x1253 = 1U;
uint64_t x1254 = UINT64_MAX;
volatile uint64_t t173 = 3658835855731132LLU;
int64_t x1305 = -1LL;
uint32_t x1307 = 2194U;
int8_t x1319 = INT8_MIN;
int16_t x1325 = 11701;
int16_t x1326 = INT16_MIN;
uint8_t x1332 = 0U;
int32_t t183 = 395603793;
static int16_t x1333 = -417;
int64_t x1335 = -134632LL;
static int64_t t184 = 3LL;
volatile int32_t x1347 = 358;
uint16_t x1358 = UINT16_MAX;
volatile uint64_t t188 = 57242256392477LLU;
static int8_t x1380 = INT8_MIN;
uint64_t x1389 = 298385670384357117LLU;
static volatile int8_t x1392 = 59;
static int16_t x1399 = -75;
volatile int32_t t193 = 4230;
int8_t x1423 = -1;
int64_t t195 = 125090LL;
uint64_t x1433 = 58150341837862LLU;
static int64_t x1436 = INT64_MIN;
static volatile uint64_t x1438 = UINT64_MAX;
volatile uint32_t x1440 = 166960U;
int8_t x1442 = INT8_MIN;
static int32_t x1446 = INT32_MIN;


void f0(void) {
    	int32_t x5 = INT32_MAX;
	int16_t x6 = 3;
	int32_t x8 = INT32_MIN;
	int32_t t0 = 271;

    t0 = ((x5-x6)<<(x7<=x8));

    if (t0 != 2147483644) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x13 = 6;
	int16_t x14 = INT16_MIN;
	int32_t x15 = INT32_MIN;

    t1 = ((x13-x14)<<(x15<=x16));

    if (t1 != 65548) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x25 = INT8_MAX;
	int64_t x26 = -1LL;
	int64_t x27 = -1LL;
	int16_t x28 = 1;

    t2 = ((x25-x26)<<(x27<=x28));

    if (t2 != 256LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x29 = INT64_MIN;
	int8_t x31 = INT8_MIN;
	uint64_t t3 = 16338464378LLU;

    t3 = ((x29-x30)<<(x31<=x32));

    if (t3 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x37 = 2;
	int8_t x40 = INT8_MIN;
	uint32_t t4 = 34092405U;

    t4 = ((x37-x38)<<(x39<=x40));

    if (t4 != 3496591806U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x41 = 1U;
	int64_t x43 = 16926824659LL;
	int64_t x44 = INT64_MAX;
	int32_t t5 = -3527245;

    t5 = ((x41-x42)<<(x43<=x44));

    if (t5 != 258) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x45 = 1;
	uint16_t x46 = 1U;
	uint8_t x47 = 6U;
	static volatile uint32_t x48 = UINT32_MAX;

    t6 = ((x45-x46)<<(x47<=x48));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x49 = -1LL;
	int16_t x50 = INT16_MIN;
	int16_t x51 = INT16_MIN;
	int64_t t7 = 13516032419631LL;

    t7 = ((x49-x50)<<(x51<=x52));

    if (t7 != 32767LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x54 = -1;
	static uint16_t x55 = 1U;
	uint16_t x56 = 125U;
	static volatile int32_t t8 = 70169730;

    t8 = ((x53-x54)<<(x55<=x56));

    if (t8 != 44) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x65 = 1;
	static int16_t x66 = -2;
	static volatile uint32_t x67 = UINT32_MAX;
	int16_t x68 = INT16_MAX;
	volatile int32_t t9 = 82;

    t9 = ((x65-x66)<<(x67<=x68));

    if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x81 = 2800;
	uint64_t x84 = 0LLU;
	static int64_t t10 = 480563432366408LL;

    t10 = ((x81-x82)<<(x83<=x84));

    if (t10 != 2795LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x85 = INT16_MAX;
	int16_t x86 = -1;
	int32_t x87 = -24;
	int8_t x88 = INT8_MIN;
	static volatile int32_t t11 = 7;

    t11 = ((x85-x86)<<(x87<=x88));

    if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x89 = 940;
	volatile uint64_t t12 = 65069LLU;

    t12 = ((x89-x90)<<(x91<=x92));

    if (t12 != 18446744073705532575LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x93 = -1;
	int16_t x95 = -1;
	int16_t x96 = -1;
	volatile uint64_t t13 = 18162LLU;

    t13 = ((x93-x94)<<(x95<=x96));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t t14 = 9436LL;

    t14 = ((x101-x102)<<(x103<=x104));

    if (t14 != 3232450LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x109 = INT8_MIN;
	uint32_t x110 = UINT32_MAX;
	static int16_t x111 = 870;
	static int8_t x112 = 24;
	static volatile uint32_t t15 = 2565U;

    t15 = ((x109-x110)<<(x111<=x112));

    if (t15 != 4294967169U) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x113 = 1;
	uint16_t x115 = 708U;
	volatile int32_t t16 = 5395983;

    t16 = ((x113-x114)<<(x115<=x116));

    if (t16 != 32769) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x121 = INT32_MAX;
	uint8_t x122 = 38U;
	static uint16_t x123 = UINT16_MAX;
	int32_t x124 = 1;
	int32_t t17 = 50;

    t17 = ((x121-x122)<<(x123<=x124));

    if (t17 != 2147483609) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x125 = INT16_MAX;
	static int8_t x126 = INT8_MIN;
	volatile int32_t x127 = -202435;
	int32_t t18 = 15;

    t18 = ((x125-x126)<<(x127<=x128));

    if (t18 != 32895) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x130 = INT16_MAX;
	uint16_t x131 = UINT16_MAX;
	uint32_t t19 = 452U;

    t19 = ((x129-x130)<<(x131<=x132));

    if (t19 != 4294934530U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x145 = INT8_MIN;
	int32_t x146 = INT32_MIN;
	static int8_t x147 = 28;
	int64_t x148 = INT64_MIN;
	static int32_t t20 = 83;

    t20 = ((x145-x146)<<(x147<=x148));

    if (t20 != 2147483520) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint16_t x149 = UINT16_MAX;
	static int64_t x151 = INT64_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t21 = -34030326;

    t21 = ((x149-x150)<<(x151<=x152));

    if (t21 != 65552) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x157 = 8217U;
	uint16_t x160 = 4184U;
	uint32_t t22 = 85190736U;

    t22 = ((x157-x158)<<(x159<=x160));

    if (t22 != 16436U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x165 = -74866;
	int32_t x167 = INT32_MIN;
	volatile uint64_t x168 = 84274426976LLU;
	volatile int64_t t23 = -51LL;

    t23 = ((x165-x166)<<(x167<=x168));

    if (t23 != 1422767606864351LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x173 = 13U;
	int32_t x174 = -1;
	int64_t x175 = -1LL;
	volatile uint64_t x176 = 1937157084637LLU;
	int32_t t24 = 1432;

    t24 = ((x173-x174)<<(x175<=x176));

    if (t24 != 14) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x177 = INT64_MIN;
	volatile int64_t x178 = INT64_MIN;
	volatile int16_t x179 = INT16_MIN;
	volatile int8_t x180 = -1;

    t25 = ((x177-x178)<<(x179<=x180));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x181 = 883682595;
	uint16_t x183 = 246U;
	int16_t x184 = INT16_MAX;
	volatile int64_t t26 = 7296230463577LL;

    t26 = ((x181-x182)<<(x183<=x184));

    if (t26 != 1765744402LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x193 = INT8_MAX;
	static volatile int16_t x194 = -1;
	static int16_t x195 = -1;
	volatile int8_t x196 = INT8_MAX;
	int32_t t27 = 491975;

    t27 = ((x193-x194)<<(x195<=x196));

    if (t27 != 256) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x198 = -1;
	static uint64_t x200 = 1534956LLU;
	static int32_t t28 = 2;

    t28 = ((x197-x198)<<(x199<=x200));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x213 = UINT16_MAX;
	uint16_t x214 = 11U;
	static int16_t x215 = INT16_MIN;
	int16_t x216 = INT16_MIN;

    t29 = ((x213-x214)<<(x215<=x216));

    if (t29 != 131048) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x217 = -1;
	static int16_t x218 = -9;
	int32_t x219 = INT32_MAX;
	int64_t x220 = INT64_MIN;
	int32_t t30 = 4238613;

    t30 = ((x217-x218)<<(x219<=x220));

    if (t30 != 8) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x222 = 3;
	int64_t x223 = INT64_MIN;
	static volatile int16_t x224 = -1460;
	static int32_t t31 = 1765;

    t31 = ((x221-x222)<<(x223<=x224));

    if (t31 != 242) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x233 = 29;
	int16_t x234 = INT16_MIN;
	uint16_t x236 = 1409U;
	volatile int32_t t32 = -13911;

    t32 = ((x233-x234)<<(x235<=x236));

    if (t32 != 65594) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x241 = 19U;
	uint64_t x242 = 1364676960512022LLU;
	uint64_t x243 = 919869235188341LLU;

    t33 = ((x241-x242)<<(x243<=x244));

    if (t33 != 18445379396749039613LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x254 = 25843091U;
	volatile uint16_t x255 = 31345U;
	int8_t x256 = 0;
	static volatile uint32_t t34 = 3940406U;

    t34 = ((x253-x254)<<(x255<=x256));

    if (t34 != 4269124204U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x258 = UINT64_MAX;
	static volatile int8_t x260 = INT8_MAX;
	static volatile uint64_t t35 = 139339654322340364LLU;

    t35 = ((x257-x258)<<(x259<=x260));

    if (t35 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x261 = 3;
	int8_t x262 = -1;
	int64_t x263 = INT64_MIN;
	int32_t t36 = -98;

    t36 = ((x261-x262)<<(x263<=x264));

    if (t36 != 4) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x265 = INT8_MAX;
	uint8_t x266 = 124U;
	int64_t x267 = -1LL;

    t37 = ((x265-x266)<<(x267<=x268));

    if (t37 != 6) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x273 = -1;
	static volatile int8_t x274 = -1;
	int8_t x275 = INT8_MIN;
	int32_t x276 = INT32_MIN;
	static volatile int32_t t38 = -2351493;

    t38 = ((x273-x274)<<(x275<=x276));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x277 = INT16_MAX;
	int16_t x278 = INT16_MAX;
	static int16_t x279 = INT16_MIN;

    t39 = ((x277-x278)<<(x279<=x280));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x287 = INT16_MIN;
	int16_t x288 = -1;
	uint64_t t40 = 57LLU;

    t40 = ((x285-x286)<<(x287<=x288));

    if (t40 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x289 = 29U;
	uint64_t x290 = UINT64_MAX;
	int64_t x291 = INT64_MAX;
	uint8_t x292 = UINT8_MAX;
	static uint64_t t41 = 222LLU;

    t41 = ((x289-x290)<<(x291<=x292));

    if (t41 != 30LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x294 = INT16_MIN;
	uint16_t x295 = UINT16_MAX;
	int64_t x296 = INT64_MAX;

    t42 = ((x293-x294)<<(x295<=x296));

    if (t42 != 65534LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x297 = UINT8_MAX;
	static int64_t x298 = -1LL;
	int8_t x299 = -1;
	int64_t x300 = INT64_MIN;
	static volatile int64_t t43 = -46LL;

    t43 = ((x297-x298)<<(x299<=x300));

    if (t43 != 256LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x301 = 8740U;
	int16_t x302 = -216;
	volatile uint8_t x304 = 0U;
	volatile uint32_t t44 = 6868U;

    t44 = ((x301-x302)<<(x303<=x304));

    if (t44 != 8956U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x313 = -1;
	int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MAX;
	int8_t x316 = 17;
	int32_t t45 = -10775;

    t45 = ((x313-x314)<<(x315<=x316));

    if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint8_t x317 = UINT8_MAX;
	int64_t x320 = INT64_MAX;
	volatile int64_t t46 = -96443787543662LL;

    t46 = ((x317-x318)<<(x319<=x320));

    if (t46 != 1390292477412LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x321 = 1195;
	int64_t x323 = -661770LL;
	uint8_t x324 = 1U;

    t47 = ((x321-x322)<<(x323<=x324));

    if (t47 != 2392) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x325 = UINT64_MAX;
	uint64_t x326 = 23277904270203LLU;
	volatile uint64_t x328 = 633183499LLU;
	volatile uint64_t t48 = 0LLU;

    t48 = ((x325-x326)<<(x327<=x328));

    if (t48 != 18446720795805281412LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x329 = UINT64_MAX;
	int64_t x330 = INT64_MAX;
	static int8_t x331 = 0;
	int32_t x332 = -1;
	uint64_t t49 = 43031903560LLU;

    t49 = ((x329-x330)<<(x331<=x332));

    if (t49 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x341 = 3845;
	static volatile int8_t x342 = -1;
	uint8_t x343 = 2U;
	int64_t x344 = 5474LL;

    t50 = ((x341-x342)<<(x343<=x344));

    if (t50 != 7692) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x353 = INT16_MAX;
	int16_t x354 = -13883;
	static int32_t x355 = 1;
	static int32_t x356 = -1;
	volatile int32_t t51 = -188900;

    t51 = ((x353-x354)<<(x355<=x356));

    if (t51 != 46650) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x357 = UINT32_MAX;
	static int16_t x358 = -1;
	static uint32_t x359 = UINT32_MAX;
	static uint32_t t52 = 1260509461U;

    t52 = ((x357-x358)<<(x359<=x360));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x361 = -1;
	int32_t x362 = -1;
	volatile int8_t x363 = -27;
	int8_t x364 = 0;
	int32_t t53 = -11627761;

    t53 = ((x361-x362)<<(x363<=x364));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x378 = INT16_MIN;
	uint8_t x379 = 7U;
	int32_t t54 = -628007;

    t54 = ((x377-x378)<<(x379<=x380));

    if (t54 != 65320) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x385 = 115437LLU;
	static uint8_t x386 = 1U;
	int8_t x387 = INT8_MIN;
	uint64_t x388 = 549100926LLU;
	uint64_t t55 = 6LLU;

    t55 = ((x385-x386)<<(x387<=x388));

    if (t55 != 115436LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x389 = INT8_MIN;
	int8_t x391 = -1;
	int64_t x392 = INT64_MAX;
	volatile uint32_t t56 = 1464U;

    t56 = ((x389-x390)<<(x391<=x392));

    if (t56 != 4230481372U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x393 = -1;
	uint8_t x395 = 88U;
	volatile int16_t x396 = INT16_MIN;

    t57 = ((x393-x394)<<(x395<=x396));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x405 = -28;
	volatile uint64_t x406 = 507LLU;
	static int32_t x407 = 1671;
	int32_t x408 = INT32_MAX;
	uint64_t t58 = 619524716664LLU;

    t58 = ((x405-x406)<<(x407<=x408));

    if (t58 != 18446744073709550546LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x413 = 332518572U;
	static volatile int8_t x414 = 0;
	static volatile uint16_t x415 = UINT16_MAX;
	int64_t x416 = INT64_MAX;
	uint32_t t59 = 7U;

    t59 = ((x413-x414)<<(x415<=x416));

    if (t59 != 665037144U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x426 = -1;
	int64_t x427 = INT64_MIN;
	volatile int32_t t60 = -7183;

    t60 = ((x425-x426)<<(x427<=x428));

    if (t60 != 512) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x433 = 3;
	uint8_t x435 = 3U;
	static volatile int16_t x436 = 142;
	uint32_t t61 = 1U;

    t61 = ((x433-x434)<<(x435<=x436));

    if (t61 != 3657893654U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x437 = UINT16_MAX;
	int64_t x438 = -1LL;
	uint8_t x439 = 13U;
	static uint32_t x440 = UINT32_MAX;

    t62 = ((x437-x438)<<(x439<=x440));

    if (t62 != 131072LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x449 = UINT8_MAX;
	uint32_t x451 = 24322U;
	uint32_t x452 = UINT32_MAX;
	uint64_t t63 = 2533210132521450LLU;

    t63 = ((x449-x450)<<(x451<=x452));

    if (t63 != 376LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x457 = UINT64_MAX;
	int8_t x458 = -1;
	volatile uint8_t x459 = 2U;
	int32_t x460 = -1;
	uint64_t t64 = 24378LLU;

    t64 = ((x457-x458)<<(x459<=x460));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x462 = 27743760LLU;
	static int32_t x463 = 30;

    t65 = ((x461-x462)<<(x463<=x464));

    if (t65 != 18446744073681807859LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x465 = -1;
	volatile int16_t x466 = -2;
	int64_t x467 = INT64_MAX;
	volatile int32_t t66 = 53973;

    t66 = ((x465-x466)<<(x467<=x468));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x469 = INT8_MIN;
	volatile int16_t x471 = INT16_MIN;
	static uint32_t x472 = 514041U;
	volatile uint64_t t67 = 616508426078LLU;

    t67 = ((x469-x470)<<(x471<=x472));

    if (t67 != 18446744073709413905LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x473 = -1;
	int64_t x474 = -581989778659139LL;
	uint32_t x475 = 77161547U;
	int64_t t68 = 239757623276969LL;

    t68 = ((x473-x474)<<(x475<=x476));

    if (t68 != 581989778659138LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint8_t x477 = UINT8_MAX;
	uint8_t x478 = 0U;
	int32_t x479 = -1;
	uint64_t x480 = UINT64_MAX;

    t69 = ((x477-x478)<<(x479<=x480));

    if (t69 != 510) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x481 = INT16_MIN;
	int32_t x482 = INT32_MIN;
	int8_t x483 = INT8_MIN;
	uint64_t x484 = 10LLU;
	int32_t t70 = -519945;

    t70 = ((x481-x482)<<(x483<=x484));

    if (t70 != 2147450880) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x497 = 6283142362342LL;
	int8_t x499 = -1;
	volatile int64_t t71 = -51920148219LL;

    t71 = ((x497-x498)<<(x499<=x500));

    if (t71 != 6283142362344LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x505 = -109LL;
	uint64_t x506 = 27366236997101116LLU;
	int64_t x507 = INT64_MIN;
	uint32_t x508 = 17U;
	volatile uint64_t t72 = 48550LLU;

    t72 = ((x505-x506)<<(x507<=x508));

    if (t72 != 18392011599715349166LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x510 = -6133212LL;
	uint32_t x511 = 10576U;
	int16_t x512 = INT16_MAX;
	uint64_t t73 = 298164168636LLU;

    t73 = ((x509-x510)<<(x511<=x512));

    if (t73 != 12266422LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x514 = -7;
	int8_t x515 = INT8_MIN;
	static int32_t x516 = -1;
	uint32_t t74 = 47U;

    t74 = ((x513-x514)<<(x515<=x516));

    if (t74 != 26U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x518 = -1LL;
	int32_t x519 = -107645253;
	volatile int64_t t75 = -15LL;

    t75 = ((x517-x518)<<(x519<=x520));

    if (t75 != 423LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x521 = 13507266;
	int64_t x524 = INT64_MIN;

    t76 = ((x521-x522)<<(x523<=x524));

    if (t76 != 14254717LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x525 = INT16_MAX;
	static int32_t x526 = -7939298;
	static uint8_t x527 = 7U;
	int32_t x528 = -1;
	volatile int32_t t77 = 30417127;

    t77 = ((x525-x526)<<(x527<=x528));

    if (t77 != 7972065) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x531 = -1;
	uint64_t t78 = 0LLU;

    t78 = ((x529-x530)<<(x531<=x532));

    if (t78 != 131072LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x546 = -12;
	volatile int16_t x547 = -2357;
	int32_t t79 = -206777117;

    t79 = ((x545-x546)<<(x547<=x548));

    if (t79 != 534) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x553 = -1;
	uint64_t x554 = 7978872LLU;
	uint64_t x555 = UINT64_MAX;
	int16_t x556 = INT16_MAX;
	uint64_t t80 = 2853756232504LLU;

    t80 = ((x553-x554)<<(x555<=x556));

    if (t80 != 18446744073701572743LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x557 = -1;
	volatile int64_t x558 = INT64_MIN;
	uint8_t x559 = 77U;
	int8_t x560 = INT8_MIN;

    t81 = ((x557-x558)<<(x559<=x560));

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x561 = UINT16_MAX;
	static uint8_t x563 = 3U;
	int64_t x564 = -1LL;

    t82 = ((x561-x562)<<(x563<=x564));

    if (t82 != 65663) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x565 = 12U;
	int16_t x566 = -1;
	uint32_t x567 = 8981U;
	int16_t x568 = INT16_MIN;
	static int32_t t83 = -2;

    t83 = ((x565-x566)<<(x567<=x568));

    if (t83 != 26) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x569 = 32;
	int8_t x570 = INT8_MIN;
	volatile uint16_t x571 = 461U;
	uint64_t x572 = UINT64_MAX;

    t84 = ((x569-x570)<<(x571<=x572));

    if (t84 != 320) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x573 = UINT64_MAX;
	static int64_t x574 = INT64_MAX;
	int8_t x575 = -3;
	uint64_t t85 = 43LLU;

    t85 = ((x573-x574)<<(x575<=x576));

    if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x577 = 0;
	uint8_t x579 = 27U;
	int16_t x580 = INT16_MAX;
	volatile uint32_t t86 = 3U;

    t86 = ((x577-x578)<<(x579<=x580));

    if (t86 != 4294967274U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x581 = -1LL;
	int8_t x582 = INT8_MIN;
	uint8_t x583 = UINT8_MAX;
	static volatile uint64_t x584 = UINT64_MAX;

    t87 = ((x581-x582)<<(x583<=x584));

    if (t87 != 254LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x585 = 28796134U;
	int8_t x586 = INT8_MIN;
	static uint64_t x588 = UINT64_MAX;
	volatile uint32_t t88 = 3993767U;

    t88 = ((x585-x586)<<(x587<=x588));

    if (t88 != 57592524U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x589 = 17U;
	static int32_t x590 = INT32_MIN;

    t89 = ((x589-x590)<<(x591<=x592));

    if (t89 != 2147483665U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x602 = INT16_MIN;
	uint8_t x603 = UINT8_MAX;
	uint32_t t90 = 14477U;

    t90 = ((x601-x602)<<(x603<=x604));

    if (t90 != 65540U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x612 = 5670276336458LLU;
	volatile int64_t t91 = -14562767LL;

    t91 = ((x609-x610)<<(x611<=x612));

    if (t91 != 16302LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x617 = -1;
	volatile uint32_t x618 = 374423835U;
	int16_t x619 = 14;
	uint8_t x620 = 67U;
	static volatile uint32_t t92 = 6U;

    t92 = ((x617-x618)<<(x619<=x620));

    if (t92 != 3546119624U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x621 = 410U;
	volatile uint32_t x622 = 8859U;
	static int8_t x624 = INT8_MAX;
	volatile uint32_t t93 = 218U;

    t93 = ((x621-x622)<<(x623<=x624));

    if (t93 != 4294958847U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x626 = UINT8_MAX;
	static int32_t x627 = INT32_MIN;
	int8_t x628 = INT8_MIN;
	volatile uint64_t t94 = 3215512320459466LLU;

    t94 = ((x625-x626)<<(x627<=x628));

    if (t94 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x629 = 23269U;
	int16_t x632 = -1;
	int32_t t95 = -14;

    t95 = ((x629-x630)<<(x631<=x632));

    if (t95 != 46332) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x637 = 5150591U;
	volatile uint32_t x638 = 6149954U;
	int32_t x639 = 51484;
	static uint64_t x640 = 586776LLU;
	uint32_t t96 = 3005275U;

    t96 = ((x637-x638)<<(x639<=x640));

    if (t96 != 4292968570U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x649 = INT8_MAX;
	uint64_t x650 = 8314916497LLU;
	uint8_t x652 = 1U;
	volatile uint64_t t97 = 13LLU;

    t97 = ((x649-x650)<<(x651<=x652));

    if (t97 != 18446744065394635246LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x661 = UINT16_MAX;
	uint64_t x662 = UINT64_MAX;
	int64_t x664 = 30258148821LL;
	uint64_t t98 = 13153912834590958LLU;

    t98 = ((x661-x662)<<(x663<=x664));

    if (t98 != 131072LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x665 = INT32_MAX;
	uint8_t x666 = UINT8_MAX;
	volatile int64_t x667 = 4968454LL;

    t99 = ((x665-x666)<<(x667<=x668));

    if (t99 != 2147483392) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x699 = INT32_MIN;
	static int32_t x700 = 0;
	volatile uint32_t t100 = 45U;

    t100 = ((x697-x698)<<(x699<=x700));

    if (t100 != 8174564U) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x705 = UINT64_MAX;
	static uint16_t x706 = 0U;
	uint8_t x707 = UINT8_MAX;
	uint64_t t101 = UINT64_MAX;

    t101 = ((x705-x706)<<(x707<=x708));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x709 = 5044337644509529LL;
	uint8_t x711 = 8U;
	volatile int64_t x712 = INT64_MIN;
	uint64_t t102 = 342514703888LLU;

    t102 = ((x709-x710)<<(x711<=x712));

    if (t102 != 16983044879293586085LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x713 = 7U;
	volatile int8_t x714 = INT8_MIN;
	static int32_t x716 = INT32_MIN;
	int32_t t103 = -181142;

    t103 = ((x713-x714)<<(x715<=x716));

    if (t103 != 135) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint8_t x725 = 10U;
	uint16_t x726 = 3U;
	int32_t t104 = 9537281;

    t104 = ((x725-x726)<<(x727<=x728));

    if (t104 != 7) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x733 = -1;
	uint32_t x734 = UINT32_MAX;
	int64_t x735 = 123825712LL;
	int32_t x736 = -1961;

    t105 = ((x733-x734)<<(x735<=x736));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x741 = -11094787LL;
	static uint64_t x742 = 2456532674LLU;
	int64_t x743 = -1LL;
	int64_t x744 = 3990181389294321LL;
	static volatile uint64_t t106 = 1058575173795LLU;

    t106 = ((x741-x742)<<(x743<=x744));

    if (t106 != 18446744068774296694LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x745 = INT16_MIN;
	int16_t x746 = INT16_MIN;
	int64_t x747 = INT64_MAX;
	uint16_t x748 = UINT16_MAX;
	int32_t t107 = 0;

    t107 = ((x745-x746)<<(x747<=x748));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x749 = UINT32_MAX;
	int32_t x750 = -1019223;
	int64_t x752 = 78513LL;
	uint32_t t108 = 61022116U;

    t108 = ((x749-x750)<<(x751<=x752));

    if (t108 != 2038444U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x757 = -1;
	int16_t x758 = -497;
	int8_t x759 = INT8_MAX;
	volatile int64_t x760 = INT64_MAX;
	static int32_t t109 = 1;

    t109 = ((x757-x758)<<(x759<=x760));

    if (t109 != 992) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x766 = -1;
	int64_t x767 = 485251230LL;
	volatile uint16_t x768 = UINT16_MAX;
	volatile int32_t t110 = 2715790;

    t110 = ((x765-x766)<<(x767<=x768));

    if (t110 != 256) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x769 = -1;
	int16_t x772 = INT16_MIN;
	int32_t t111 = 27;

    t111 = ((x769-x770)<<(x771<=x772));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x773 = UINT32_MAX;
	uint8_t x775 = UINT8_MAX;
	static uint32_t t112 = 207323U;

    t112 = ((x773-x774)<<(x775<=x776));

    if (t112 != 127U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x779 = 5344806616154415385LLU;
	static uint8_t x780 = UINT8_MAX;
	static volatile int32_t t113 = 76276;

    t113 = ((x777-x778)<<(x779<=x780));

    if (t113 != 116) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x789 = -1LL;
	int32_t x791 = 83230;
	static volatile int64_t t114 = -43004883LL;

    t114 = ((x789-x790)<<(x791<=x792));

    if (t114 != 3LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x793 = 1U;
	static int16_t x794 = INT16_MIN;
	int8_t x795 = -1;
	static int32_t x796 = INT32_MIN;
	uint32_t t115 = 4669176U;

    t115 = ((x793-x794)<<(x795<=x796));

    if (t115 != 32769U) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x814 = -1;
	int8_t x815 = INT8_MIN;

    t116 = ((x813-x814)<<(x815<=x816));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x817 = INT32_MAX;
	volatile uint32_t x818 = UINT32_MAX;
	int64_t x819 = 18748347LL;
	int64_t x820 = INT64_MAX;
	uint32_t t117 = 1278761U;

    t117 = ((x817-x818)<<(x819<=x820));

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x821 = UINT8_MAX;
	static int16_t x822 = INT16_MIN;
	static int16_t x823 = -1;
	int32_t x824 = -429;
	static volatile int32_t t118 = -171399;

    t118 = ((x821-x822)<<(x823<=x824));

    if (t118 != 33023) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x829 = -1;
	static int16_t x830 = -1;
	int16_t x831 = INT16_MIN;
	int8_t x832 = INT8_MAX;

    t119 = ((x829-x830)<<(x831<=x832));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x833 = 956298229554274LL;
	static int64_t x835 = INT64_MIN;
	uint64_t x836 = 106719913LLU;

    t120 = ((x833-x834)<<(x835<=x836));

    if (t120 != 956298229554303LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x857 = 819965445357375LL;
	uint32_t x858 = 0U;
	volatile uint64_t x860 = 6421197502069567LLU;
	int64_t t121 = -7573218LL;

    t121 = ((x857-x858)<<(x859<=x860));

    if (t121 != 819965445357375LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x862 = INT64_MIN;
	int8_t x863 = INT8_MAX;
	uint32_t x864 = 20034U;
	volatile uint64_t t122 = 8391409210671LLU;

    t122 = ((x861-x862)<<(x863<=x864));

    if (t122 != 6LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x878 = INT64_MIN;
	volatile uint16_t x879 = 1933U;
	int64_t x880 = INT64_MIN;
	uint64_t t123 = 307720703LLU;

    t123 = ((x877-x878)<<(x879<=x880));

    if (t123 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x882 = UINT64_MAX;
	volatile int8_t x883 = INT8_MIN;
	uint64_t t124 = 1600215706563090437LLU;

    t124 = ((x881-x882)<<(x883<=x884));

    if (t124 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x885 = 107U;
	volatile uint16_t x886 = 17U;
	uint64_t x887 = 16633527167082LLU;
	uint8_t x888 = 92U;
	volatile int32_t t125 = -1;

    t125 = ((x885-x886)<<(x887<=x888));

    if (t125 != 90) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x889 = INT8_MIN;
	uint32_t x890 = 1487U;
	int8_t x891 = 50;
	static uint32_t t126 = 9798U;

    t126 = ((x889-x890)<<(x891<=x892));

    if (t126 != 4294964066U) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x898 = -1;
	uint32_t x899 = 246179347U;
	uint16_t x900 = 5U;
	int32_t t127 = 58908612;

    t127 = ((x897-x898)<<(x899<=x900));

    if (t127 != 32768) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x901 = 494039892492232LLU;
	volatile uint8_t x902 = 16U;
	int32_t x903 = -657665;
	static uint32_t x904 = UINT32_MAX;
	volatile uint64_t t128 = 7018690588013884LLU;

    t128 = ((x901-x902)<<(x903<=x904));

    if (t128 != 988079784984432LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x905 = 2U;
	int8_t x906 = INT8_MIN;
	int8_t x907 = -10;
	static volatile int32_t t129 = 254;

    t129 = ((x905-x906)<<(x907<=x908));

    if (t129 != 130) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x913 = INT8_MIN;
	uint64_t x914 = UINT64_MAX;
	int32_t x915 = -1;
	volatile uint64_t t130 = 2164393337LLU;

    t130 = ((x913-x914)<<(x915<=x916));

    if (t130 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x919 = -1;
	int64_t t131 = 194LL;

    t131 = ((x917-x918)<<(x919<=x920));

    if (t131 != 9223358855721071779LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x937 = INT64_MIN;
	volatile uint64_t x938 = 85694326398LLU;
	uint16_t x939 = UINT16_MAX;
	static int64_t x940 = INT64_MIN;
	static volatile uint64_t t132 = 459757199LLU;

    t132 = ((x937-x938)<<(x939<=x940));

    if (t132 != 9223371951160449410LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x945 = INT64_MIN;
	volatile int64_t x946 = INT64_MIN;
	int16_t x947 = INT16_MIN;
	static int64_t x948 = INT64_MAX;
	volatile int64_t t133 = -699728436602934918LL;

    t133 = ((x945-x946)<<(x947<=x948));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x949 = 54632661627897484LLU;
	static uint16_t x952 = 190U;
	static uint64_t t134 = 121LLU;

    t134 = ((x949-x950)<<(x951<=x952));

    if (t134 != 109265323255860504LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x953 = UINT32_MAX;
	int16_t x954 = -65;
	uint64_t x955 = UINT64_MAX;
	int64_t x956 = -13187584LL;
	volatile uint32_t t135 = 28790681U;

    t135 = ((x953-x954)<<(x955<=x956));

    if (t135 != 64U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x981 = 4799LLU;
	int32_t x982 = 6246;
	uint8_t x983 = 2U;
	volatile int64_t x984 = -1LL;

    t136 = ((x981-x982)<<(x983<=x984));

    if (t136 != 18446744073709550169LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x993 = -1;
	int8_t x994 = INT8_MIN;
	int64_t x995 = INT64_MIN;
	volatile int16_t x996 = -1;
	volatile int32_t t137 = -6060397;

    t137 = ((x993-x994)<<(x995<=x996));

    if (t137 != 254) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x1009 = UINT8_MAX;
	volatile int8_t x1010 = -1;
	volatile uint16_t x1011 = UINT16_MAX;
	static int64_t x1012 = -151LL;
	volatile int32_t t138 = 3083;

    t138 = ((x1009-x1010)<<(x1011<=x1012));

    if (t138 != 256) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x1013 = 43U;
	volatile int16_t x1015 = INT16_MIN;
	volatile int16_t x1016 = -1;
	static int32_t t139 = 8;

    t139 = ((x1013-x1014)<<(x1015<=x1016));

    if (t139 != 46) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x1018 = INT16_MIN;
	int64_t x1019 = INT64_MIN;
	static int16_t x1020 = INT16_MIN;

    t140 = ((x1017-x1018)<<(x1019<=x1020));

    if (t140 != 50937289691499310LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x1033 = INT8_MIN;
	uint32_t x1035 = UINT32_MAX;
	uint16_t x1036 = 0U;
	int64_t t141 = 24243926100491505LL;

    t141 = ((x1033-x1034)<<(x1035<=x1036));

    if (t141 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1037 = 1148;
	int64_t x1039 = INT64_MIN;
	static int32_t x1040 = -53834180;
	volatile int32_t t142 = -299408;

    t142 = ((x1037-x1038)<<(x1039<=x1040));

    if (t142 != 10458790) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x1041 = 0U;
	int8_t x1043 = -1;
	volatile int64_t x1044 = INT64_MIN;

    t143 = ((x1041-x1042)<<(x1043<=x1044));

    if (t143 != 18444767387804822613LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1062 = INT8_MIN;
	volatile int64_t x1063 = 23001LL;
	static uint64_t x1064 = 0LLU;
	int32_t t144 = 389072;

    t144 = ((x1061-x1062)<<(x1063<=x1064));

    if (t144 != 128) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1065 = -1;
	int8_t x1066 = INT8_MIN;
	int64_t x1067 = INT64_MIN;
	uint8_t x1068 = UINT8_MAX;
	volatile int32_t t145 = 12502;

    t145 = ((x1065-x1066)<<(x1067<=x1068));

    if (t145 != 254) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x1069 = 13846725;
	int16_t x1071 = INT16_MAX;
	int64_t x1072 = -1LL;
	static volatile int32_t t146 = 1;

    t146 = ((x1069-x1070)<<(x1071<=x1072));

    if (t146 != 13781190) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1073 = 47U;
	int32_t x1074 = -9;
	uint8_t x1075 = 1U;

    t147 = ((x1073-x1074)<<(x1075<=x1076));

    if (t147 != 56) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x1078 = 2196U;
	int32_t x1079 = INT32_MIN;
	volatile int8_t x1080 = INT8_MIN;
	volatile int64_t t148 = -64487337583624380LL;

    t148 = ((x1077-x1078)<<(x1079<=x1080));

    if (t148 != 57663935242552460LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1081 = INT16_MAX;
	volatile int8_t x1082 = INT8_MIN;
	int8_t x1083 = -1;
	int64_t x1084 = -6LL;
	static volatile int32_t t149 = -62877233;

    t149 = ((x1081-x1082)<<(x1083<=x1084));

    if (t149 != 32895) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1085 = -1;
	uint32_t x1086 = 125991496U;
	int8_t x1087 = -2;
	uint32_t x1088 = 8886U;
	volatile uint32_t t150 = 17062851U;

    t150 = ((x1085-x1086)<<(x1087<=x1088));

    if (t150 != 4168975799U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x1089 = -1LL;
	int32_t x1090 = INT32_MIN;
	int32_t x1091 = INT32_MIN;
	static uint64_t x1092 = 467875204233LLU;
	int64_t t151 = -139680771254360531LL;

    t151 = ((x1089-x1090)<<(x1091<=x1092));

    if (t151 != 2147483647LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x1093 = UINT8_MAX;
	int64_t x1094 = -1LL;
	static uint64_t x1095 = 95916033750LLU;
	static int64_t t152 = 727450LL;

    t152 = ((x1093-x1094)<<(x1095<=x1096));

    if (t152 != 512LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1097 = 118;
	int8_t x1098 = INT8_MIN;
	int8_t x1099 = INT8_MAX;
	int16_t x1100 = INT16_MAX;

    t153 = ((x1097-x1098)<<(x1099<=x1100));

    if (t153 != 492) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x1101 = -26519LL;
	uint64_t x1102 = 2155984954319304LLU;
	volatile uint64_t t154 = 31373665LLU;

    t154 = ((x1101-x1102)<<(x1103<=x1104));

    if (t154 != 18442432103800859970LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x1109 = INT64_MIN;
	int16_t x1111 = INT16_MIN;
	static volatile int32_t x1112 = INT32_MIN;
	uint64_t t155 = 124079759360503105LLU;

    t155 = ((x1109-x1110)<<(x1111<=x1112));

    if (t155 != 9127143412923609670LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x1113 = 14044923414LL;
	static int32_t x1114 = INT32_MIN;
	int64_t x1115 = 91634LL;
	int16_t x1116 = -12451;
	volatile int64_t t156 = -5464LL;

    t156 = ((x1113-x1114)<<(x1115<=x1116));

    if (t156 != 16192407062LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1121 = 3935U;
	int16_t x1123 = INT16_MIN;
	int16_t x1124 = -1843;
	volatile uint32_t t157 = 10U;

    t157 = ((x1121-x1122)<<(x1123<=x1124));

    if (t157 != 7872U) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x1129 = 3117LL;
	uint8_t x1130 = 90U;
	uint8_t x1132 = 10U;

    t158 = ((x1129-x1130)<<(x1131<=x1132));

    if (t158 != 3027LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x1138 = 52978058U;
	int32_t x1139 = INT32_MAX;
	static uint32_t x1140 = 909U;
	uint32_t t159 = 113U;

    t159 = ((x1137-x1138)<<(x1139<=x1140));

    if (t159 != 4241956470U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1141 = -79550895;
	int64_t x1142 = INT64_MIN;
	static int16_t x1143 = -288;
	volatile uint32_t x1144 = 6861397U;
	volatile int64_t t160 = -328872115485755108LL;

    t160 = ((x1141-x1142)<<(x1143<=x1144));

    if (t160 != 9223372036775224913LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x1145 = -1;
	static int8_t x1146 = -26;
	volatile int8_t x1148 = 32;

    t161 = ((x1145-x1146)<<(x1147<=x1148));

    if (t161 != 25) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x1154 = -19058271LL;
	int64_t x1156 = -2170489133999401195LL;
	int64_t t162 = 751650582159022LL;

    t162 = ((x1153-x1154)<<(x1155<=x1156));

    if (t162 != 38117320LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x1157 = INT8_MIN;
	int64_t x1158 = INT64_MIN;
	uint32_t x1159 = 27911U;
	uint8_t x1160 = 30U;
	volatile int64_t t163 = -31434413214808LL;

    t163 = ((x1157-x1158)<<(x1159<=x1160));

    if (t163 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x1161 = -28;
	uint64_t x1162 = 182LLU;
	int32_t x1163 = INT32_MAX;
	volatile uint64_t t164 = 511138686LLU;

    t164 = ((x1161-x1162)<<(x1163<=x1164));

    if (t164 != 18446744073709551196LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x1165 = 24U;
	static int16_t x1166 = -1;
	int32_t x1168 = INT32_MAX;
	int32_t t165 = 255568;

    t165 = ((x1165-x1166)<<(x1167<=x1168));

    if (t165 != 50) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x1209 = INT32_MAX;
	int32_t x1210 = INT32_MAX;
	int8_t x1211 = INT8_MAX;
	static volatile int8_t x1212 = 24;
	volatile int32_t t166 = -217543921;

    t166 = ((x1209-x1210)<<(x1211<=x1212));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x1217 = UINT16_MAX;
	uint64_t x1218 = 8068726277509LLU;
	volatile int64_t x1219 = INT64_MAX;
	volatile int8_t x1220 = INT8_MIN;

    t167 = ((x1217-x1218)<<(x1219<=x1220));

    if (t167 != 18446736004983339642LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x1221 = UINT8_MAX;
	static int8_t x1223 = -1;
	int32_t t168 = 1;

    t168 = ((x1221-x1222)<<(x1223<=x1224));

    if (t168 != 66046) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x1225 = -1825;
	volatile uint32_t x1226 = 1866998U;
	uint32_t t169 = 3759732U;

    t169 = ((x1225-x1226)<<(x1227<=x1228));

    if (t169 != 4293098473U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1233 = 667U;
	int32_t x1234 = -1;
	volatile int32_t t170 = -7;

    t170 = ((x1233-x1234)<<(x1235<=x1236));

    if (t170 != 1336) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x1241 = UINT64_MAX;
	int32_t x1242 = -1;
	int8_t x1243 = INT8_MAX;
	int32_t x1244 = -781;
	volatile uint64_t t171 = 2854594639LLU;

    t171 = ((x1241-x1242)<<(x1243<=x1244));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x1251 = 182059U;
	uint16_t x1252 = 75U;
	int32_t t172 = -153078;

    t172 = ((x1249-x1250)<<(x1251<=x1252));

    if (t172 != 32767) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1255 = INT8_MIN;
	int16_t x1256 = -275;

    t173 = ((x1253-x1254)<<(x1255<=x1256));

    if (t173 != 2LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1257 = INT16_MAX;
	volatile int8_t x1258 = INT8_MAX;
	uint8_t x1259 = 61U;
	static uint16_t x1260 = 269U;
	static volatile int32_t t174 = -25745619;

    t174 = ((x1257-x1258)<<(x1259<=x1260));

    if (t174 != 65280) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1265 = 366U;
	int16_t x1266 = INT16_MIN;
	int8_t x1267 = -1;
	volatile int8_t x1268 = -1;
	static volatile int32_t t175 = -17654894;

    t175 = ((x1265-x1266)<<(x1267<=x1268));

    if (t175 != 66268) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x1281 = 31;
	volatile int32_t x1282 = -1;
	int32_t x1283 = -395;
	int16_t x1284 = INT16_MIN;
	int32_t t176 = -1049690662;

    t176 = ((x1281-x1282)<<(x1283<=x1284));

    if (t176 != 32) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1289 = UINT32_MAX;
	int16_t x1290 = INT16_MAX;
	static uint64_t x1291 = UINT64_MAX;
	uint8_t x1292 = 11U;
	static volatile uint32_t t177 = 21U;

    t177 = ((x1289-x1290)<<(x1291<=x1292));

    if (t177 != 4294934528U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x1297 = INT8_MAX;
	int8_t x1298 = 4;
	uint32_t x1299 = UINT32_MAX;
	volatile uint8_t x1300 = 0U;
	volatile int32_t t178 = -1734494;

    t178 = ((x1297-x1298)<<(x1299<=x1300));

    if (t178 != 123) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x1306 = INT16_MIN;
	uint16_t x1308 = 7608U;
	volatile int64_t t179 = 122352849749589LL;

    t179 = ((x1305-x1306)<<(x1307<=x1308));

    if (t179 != 65534LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x1313 = -1;
	volatile int8_t x1314 = INT8_MIN;
	int16_t x1315 = INT16_MIN;
	volatile int16_t x1316 = INT16_MIN;
	volatile int32_t t180 = 39170197;

    t180 = ((x1313-x1314)<<(x1315<=x1316));

    if (t180 != 254) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x1317 = 0;
	int8_t x1318 = INT8_MIN;
	volatile uint16_t x1320 = 6U;
	volatile int32_t t181 = -76179;

    t181 = ((x1317-x1318)<<(x1319<=x1320));

    if (t181 != 256) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1327 = 982LLU;
	static int8_t x1328 = -1;
	int32_t t182 = -802578973;

    t182 = ((x1325-x1326)<<(x1327<=x1328));

    if (t182 != 88938) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x1329 = UINT8_MAX;
	uint8_t x1330 = 66U;
	int64_t x1331 = INT64_MIN;

    t183 = ((x1329-x1330)<<(x1331<=x1332));

    if (t183 != 378) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1334 = -170884780079628LL;
	int8_t x1336 = 4;

    t184 = ((x1333-x1334)<<(x1335<=x1336));

    if (t184 != 341769560158422LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x1345 = INT16_MAX;
	int8_t x1346 = -1;
	static int32_t x1348 = INT32_MIN;
	volatile int32_t t185 = -21630;

    t185 = ((x1345-x1346)<<(x1347<=x1348));

    if (t185 != 32768) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1349 = INT16_MAX;
	volatile int16_t x1350 = INT16_MIN;
	static uint32_t x1351 = UINT32_MAX;
	uint64_t x1352 = 7LLU;
	int32_t t186 = 9;

    t186 = ((x1349-x1350)<<(x1351<=x1352));

    if (t186 != 65535) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1357 = 6240686974525478943LLU;
	uint16_t x1359 = UINT16_MAX;
	uint64_t x1360 = UINT64_MAX;
	volatile uint64_t t187 = 522354030LLU;

    t187 = ((x1357-x1358)<<(x1359<=x1360));

    if (t187 != 12481373949050826816LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x1365 = 6LLU;
	int64_t x1366 = -17LL;
	volatile int64_t x1367 = INT64_MAX;
	volatile int32_t x1368 = INT32_MAX;

    t188 = ((x1365-x1366)<<(x1367<=x1368));

    if (t188 != 23LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1377 = -5138LL;
	volatile int16_t x1378 = INT16_MIN;
	volatile int16_t x1379 = INT16_MIN;
	volatile int64_t t189 = -336824064LL;

    t189 = ((x1377-x1378)<<(x1379<=x1380));

    if (t189 != 55260LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1385 = UINT8_MAX;
	uint32_t x1386 = 12949164U;
	uint64_t x1387 = UINT64_MAX;
	static int64_t x1388 = 202819014190463010LL;
	static uint32_t t190 = 1766407U;

    t190 = ((x1385-x1386)<<(x1387<=x1388));

    if (t190 != 4282018387U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1390 = INT32_MIN;
	int64_t x1391 = -72004LL;
	volatile uint64_t t191 = 321640193975383LLU;

    t191 = ((x1389-x1390)<<(x1391<=x1392));

    if (t191 != 596771345063681530LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1397 = 1;
	uint64_t x1398 = 81807350146187959LLU;
	volatile uint16_t x1400 = UINT16_MAX;
	uint64_t t192 = 2655586755127547948LLU;

    t192 = ((x1397-x1398)<<(x1399<=x1400));

    if (t192 != 18283129373417175700LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x1409 = 26542U;
	static volatile int16_t x1410 = 394;
	int64_t x1411 = INT64_MIN;
	static int64_t x1412 = INT64_MAX;

    t193 = ((x1409-x1410)<<(x1411<=x1412));

    if (t193 != 52296) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1413 = 1465LL;
	int16_t x1414 = INT16_MIN;
	int16_t x1415 = INT16_MIN;
	int32_t x1416 = -516463241;
	volatile int64_t t194 = -32498763LL;

    t194 = ((x1413-x1414)<<(x1415<=x1416));

    if (t194 != 34233LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1421 = 88290463LL;
	int32_t x1422 = 7666875;
	int8_t x1424 = -1;

    t195 = ((x1421-x1422)<<(x1423<=x1424));

    if (t195 != 161247176LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint8_t x1434 = UINT8_MAX;
	int64_t x1435 = INT64_MIN;
	volatile uint64_t t196 = 849325532230409661LLU;

    t196 = ((x1433-x1434)<<(x1435<=x1436));

    if (t196 != 116300683675214LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1437 = INT16_MIN;
	uint8_t x1439 = 1U;
	uint64_t t197 = 2LLU;

    t197 = ((x1437-x1438)<<(x1439<=x1440));

    if (t197 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint64_t x1441 = 8183LLU;
	int16_t x1443 = INT16_MAX;
	int16_t x1444 = INT16_MAX;
	static uint64_t t198 = 121694449026LLU;

    t198 = ((x1441-x1442)<<(x1443<=x1444));

    if (t198 != 16622LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int32_t x1445 = -1;
	int32_t x1447 = -1;
	int16_t x1448 = INT16_MIN;
	volatile int32_t t199 = INT32_MAX;

    t199 = ((x1445-x1446)<<(x1447<=x1448));

    if (t199 != INT32_MAX) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

