#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x4 = INT32_MAX;
volatile int32_t t0 = 1113;
volatile int64_t t1 = 573777LL;
volatile int8_t x9 = -1;
static volatile int8_t x11 = INT8_MAX;
static uint16_t x12 = UINT16_MAX;
int64_t x16 = -4401LL;
volatile int64_t t3 = 1944399654084343LL;
uint64_t x29 = UINT64_MAX;
static uint16_t x32 = 27U;
uint32_t x34 = UINT32_MAX;
int8_t x41 = INT8_MIN;
uint8_t x43 = 3U;
volatile int8_t x57 = INT8_MAX;
uint64_t t10 = 3164446LLU;
static int8_t x61 = -1;
volatile int16_t x64 = -10;
uint64_t t12 = 128961402LLU;
volatile int32_t x76 = INT32_MIN;
int8_t x81 = 27;
int64_t t18 = -18959473LL;
volatile int16_t x99 = -1;
int8_t x100 = -1;
volatile int64_t t20 = 260537925654945450LL;
volatile uint16_t x113 = UINT16_MAX;
volatile int64_t x114 = 2871644331993102882LL;
volatile int32_t t23 = 323016;
uint64_t t24 = 1083095390203LLU;
int16_t x129 = 2;
uint8_t x133 = 63U;
volatile uint16_t x137 = 419U;
volatile int8_t x147 = INT8_MIN;
uint64_t x150 = 41191352208299LLU;
int16_t x151 = 3611;
uint32_t x153 = 1661U;
uint32_t t31 = 1658880092U;
int8_t x160 = -1;
volatile int64_t x165 = -1LL;
int64_t x167 = 250208319753664506LL;
int32_t x186 = -3575;
int32_t x190 = -12589446;
int8_t x191 = INT8_MIN;
uint64_t x195 = 249LLU;
int8_t x204 = INT8_MIN;
int8_t x214 = 0;
static int8_t x215 = INT8_MIN;
int32_t t44 = 85005494;
int8_t x219 = 1;
static int64_t x225 = -1LL;
volatile int64_t x232 = INT64_MAX;
volatile uint64_t t47 = 102725511248229838LLU;
uint64_t x235 = 218996868014LLU;
volatile int8_t x238 = -1;
uint32_t x251 = UINT32_MAX;
int16_t x256 = 5;
int8_t x273 = INT8_MIN;
static int32_t t55 = 169555;
uint8_t x279 = 25U;
int32_t x280 = INT32_MIN;
int64_t x282 = -228LL;
int8_t x290 = INT8_MIN;
int8_t x295 = 0;
uint32_t t60 = 128737096U;
int64_t x303 = INT64_MAX;
uint64_t t62 = 62357LLU;
int8_t x318 = INT8_MAX;
int8_t x320 = INT8_MAX;
uint16_t x329 = 9U;
static int32_t x330 = 6922617;
uint16_t x331 = UINT16_MAX;
uint32_t x335 = 233952U;
static uint64_t x338 = 17LLU;
static uint8_t x341 = UINT8_MAX;
static uint32_t x345 = UINT32_MAX;
int32_t x349 = -3921;
int64_t x351 = -1LL;
uint64_t t72 = 126745919206754788LLU;
volatile int64_t x365 = INT64_MAX;
volatile uint64_t x368 = UINT64_MAX;
uint64_t t74 = 304290519LLU;
int32_t x370 = INT32_MAX;
volatile int64_t t75 = -4346287682168061LL;
volatile int16_t x376 = INT16_MIN;
int16_t x377 = 6081;
static int8_t x384 = -20;
int64_t x385 = -1LL;
uint64_t t80 = 89298LLU;
int16_t x405 = INT16_MAX;
volatile uint64_t x406 = 419039221727884646LLU;
static int64_t x407 = INT64_MAX;
uint64_t t83 = 361264550950663LLU;
int64_t t86 = -2350409946996312891LL;
volatile uint64_t x433 = 1LLU;
int16_t x436 = INT16_MIN;
uint64_t t90 = 365LLU;
uint16_t x442 = 18U;
int8_t x443 = 2;
int64_t x444 = -1LL;
int64_t x447 = -58989376021324LL;
uint16_t x456 = UINT16_MAX;
uint64_t x463 = 129852365LLU;
static int32_t x480 = INT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint16_t x2 = 1U;
	int32_t x3 = INT32_MIN;

	t0 = (x1/((x2+x3)^x4));

	if (t0 != -16383) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int64_t x6 = -1LL;
	volatile int32_t x7 = INT32_MAX;
	static int16_t x8 = INT16_MIN;

	t1 = (x5/((x6+x7)^x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	int32_t t2 = 2040;

	t2 = (x9/((x10+x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 107U;
	uint16_t x14 = 31002U;
	int32_t x15 = 13481731;

	t3 = (x13/((x14+x15)^x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	volatile int8_t x22 = INT8_MIN;
	int8_t x23 = INT8_MIN;
	int16_t x24 = -1;
	static int32_t t4 = -21894;

	t4 = (x21/((x22+x23)^x24));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x30 = 1021U;
	int16_t x31 = -1;
	uint64_t t5 = 3424803986047938LLU;

	t5 = (x29/((x30+x31)^x32));

	if (t5 != 18465209282992544LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -286239381727037LL;
	static int8_t x35 = INT8_MAX;
	uint32_t x36 = UINT32_MAX;
	int64_t t6 = -44889972286361653LL;

	t6 = (x33/((x34+x35)^x36));

	if (t6 != -66645LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x42 = 936129U;
	int16_t x44 = INT16_MAX;
	uint32_t t7 = 7156900U;

	t7 = (x41/((x42+x43)^x44));

	if (t7 != 4610U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = UINT32_MAX;
	int8_t x46 = INT8_MIN;
	volatile int8_t x47 = INT8_MAX;
	volatile int64_t x48 = INT64_MAX;
	static volatile int64_t t8 = -3689056383674165LL;

	t8 = (x45/((x46+x47)^x48));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 1LLU;
	int64_t x50 = 1LL;
	int64_t x51 = INT64_MIN;
	uint8_t x52 = UINT8_MAX;
	uint64_t t9 = 581569593972682LLU;

	t9 = (x49/((x50+x51)^x52));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x58 = 1;
	uint64_t x59 = 83515610348LLU;
	static int64_t x60 = -1LL;

	t10 = (x57/((x58+x59)^x60));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x62 = 13887339;
	uint8_t x63 = 33U;
	volatile int32_t t11 = 3884212;

	t11 = (x61/((x62+x63)^x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x65 = 22U;
	int32_t x66 = -1;
	uint16_t x67 = 0U;
	uint64_t x68 = 3209774LLU;

	t12 = (x65/((x66+x67)^x68));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x69 = -7839;
	uint64_t x70 = 8192442053103LLU;
	int64_t x71 = -1LL;
	static uint16_t x72 = 1U;
	uint64_t t13 = 1LLU;

	t13 = (x69/((x70+x71)^x72));

	if (t13 != 2251678LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x73 = 7794LLU;
	volatile int32_t x74 = 20828191;
	int32_t x75 = -534166447;
	volatile uint64_t t14 = 22435768LLU;

	t14 = (x73/((x74+x75)^x76));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = INT32_MAX;
	int32_t x78 = 225;
	static uint32_t x79 = 60U;
	int8_t x80 = -1;
	volatile uint32_t t15 = 11159U;

	t15 = (x77/((x78+x79)^x80));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x82 = 15921628U;
	volatile int64_t x83 = 652970429036LL;
	int8_t x84 = 0;
	volatile int64_t t16 = -12LL;

	t16 = (x81/((x82+x83)^x84));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x85 = 0U;
	static uint32_t x86 = 2173808U;
	int64_t x87 = -3416374321815533446LL;
	static uint16_t x88 = UINT16_MAX;
	int64_t t17 = -74LL;

	t17 = (x85/((x86+x87)^x88));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = -7648614LL;
	volatile int32_t x94 = 1507;
	volatile int64_t x95 = 133021659639LL;
	static int16_t x96 = 0;

	t18 = (x93/((x94+x95)^x96));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x97 = 6U;
	int8_t x98 = INT8_MIN;
	volatile int32_t t19 = -8361821;

	t19 = (x97/((x98+x99)^x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x101 = UINT16_MAX;
	uint16_t x102 = 1845U;
	static int32_t x103 = 224;
	volatile int64_t x104 = INT64_MIN;

	t20 = (x101/((x102+x103)^x104));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = -1;
	uint32_t x106 = UINT32_MAX;
	uint64_t x107 = 8430947206LLU;
	int16_t x108 = INT16_MIN;
	uint64_t t21 = 239239916566784176LLU;

	t21 = (x105/((x106+x107)^x108));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x115 = INT8_MIN;
	static int16_t x116 = INT16_MIN;
	volatile int64_t t22 = -35849002LL;

	t22 = (x113/((x114+x115)^x116));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x117 = 28U;
	uint16_t x118 = 0U;
	volatile int16_t x119 = -7589;
	uint8_t x120 = UINT8_MAX;

	t23 = (x117/((x118+x119)^x120));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x125 = 128438754282729LLU;
	int8_t x126 = INT8_MIN;
	int16_t x127 = -30;
	uint16_t x128 = UINT16_MAX;

	t24 = (x125/((x126+x127)^x128));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x130 = -1LL;
	volatile uint64_t x131 = UINT64_MAX;
	static int64_t x132 = INT64_MAX;
	uint64_t t25 = 132953816519LLU;

	t25 = (x129/((x130+x131)^x132));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MIN;
	int64_t x136 = 5848156451LL;
	int64_t t26 = 1084188240425404224LL;

	t26 = (x133/((x134+x135)^x136));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x138 = UINT64_MAX;
	int32_t x139 = 1909392;
	uint64_t x140 = UINT64_MAX;
	static uint64_t t27 = 53361690662397869LLU;

	t27 = (x137/((x138+x139)^x140));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x141 = -1;
	static int16_t x142 = INT16_MAX;
	int16_t x143 = 2269;
	int32_t x144 = -21696223;
	static volatile int32_t t28 = -5;

	t28 = (x141/((x142+x143)^x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x145 = 0U;
	int64_t x146 = INT64_MAX;
	static int16_t x148 = INT16_MIN;
	volatile int64_t t29 = 0LL;

	t29 = (x145/((x146+x147)^x148));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x149 = 8LLU;
	int16_t x152 = 1;
	volatile uint64_t t30 = 261135662680LLU;

	t30 = (x149/((x150+x151)^x152));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x154 = UINT32_MAX;
	static uint8_t x155 = 37U;
	volatile uint8_t x156 = UINT8_MAX;

	t31 = (x153/((x154+x155)^x156));

	if (t31 != 7U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = 2037;
	uint32_t x158 = 194507U;
	static int8_t x159 = -39;
	uint32_t t32 = 151243830U;

	t32 = (x157/((x158+x159)^x160));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = INT64_MIN;
	volatile uint16_t x162 = 1U;
	volatile uint16_t x163 = 1U;
	int32_t x164 = INT32_MAX;
	static int64_t t33 = -10091LL;

	t33 = (x161/((x162+x163)^x164));

	if (t33 != -4294967302LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x166 = -41;
	uint32_t x168 = 27442U;
	int64_t t34 = 247010256295094LL;

	t34 = (x165/((x166+x167)^x168));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = INT32_MIN;
	int16_t x170 = 1672;
	volatile int8_t x171 = 29;
	volatile uint16_t x172 = UINT16_MAX;
	volatile int32_t t35 = -1;

	t35 = (x169/((x170+x171)^x172));

	if (t35 != -33641) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x177 = INT32_MIN;
	static uint32_t x178 = 491991491U;
	static int32_t x179 = -1795;
	int64_t x180 = -1LL;
	int64_t t36 = 386046280LL;

	t36 = (x177/((x178+x179)^x180));

	if (t36 != 4LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x181 = 10281U;
	int64_t x182 = -1LL;
	uint64_t x183 = UINT64_MAX;
	int64_t x184 = INT64_MIN;
	volatile uint64_t t37 = 1453112750491LLU;

	t37 = (x181/((x182+x183)^x184));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x185 = UINT16_MAX;
	uint32_t x187 = 41650U;
	int64_t x188 = INT64_MIN;
	volatile int64_t t38 = 460LL;

	t38 = (x185/((x186+x187)^x188));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x189 = INT8_MAX;
	volatile int8_t x192 = INT8_MAX;
	int32_t t39 = -95842;

	t39 = (x189/((x190+x191)^x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x193 = 1;
	static uint32_t x194 = 194U;
	int8_t x196 = 9;
	uint64_t t40 = 312776182136656LLU;

	t40 = (x193/((x194+x195)^x196));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x201 = 13325858;
	static int64_t x202 = -1LL;
	static uint16_t x203 = 42U;
	volatile int64_t t41 = 148974864881174892LL;

	t41 = (x201/((x202+x203)^x204));

	if (t41 != -153170LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x205 = -4560;
	static int32_t x206 = -1018333966;
	int64_t x207 = -28044065613515607LL;
	static int32_t x208 = -6;
	int64_t t42 = -3859588LL;

	t42 = (x205/((x206+x207)^x208));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x209 = INT64_MAX;
	uint16_t x210 = 58U;
	uint64_t x211 = 14LLU;
	int8_t x212 = -2;
	static uint64_t t43 = 60801503LLU;

	t43 = (x209/((x210+x211)^x212));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = 23287;
	static uint16_t x216 = 25U;

	t44 = (x213/((x214+x215)^x216));

	if (t44 != -226) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = INT8_MIN;
	static uint32_t x218 = UINT32_MAX;
	int16_t x220 = 5;
	volatile uint32_t t45 = 10239U;

	t45 = (x217/((x218+x219)^x220));

	if (t45 != 858993433U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x226 = -284;
	int32_t x227 = -514235036;
	int64_t x228 = INT64_MIN;
	volatile int64_t t46 = -286156LL;

	t46 = (x225/((x226+x227)^x228));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x229 = 241U;
	uint64_t x230 = 12319722LLU;
	volatile int16_t x231 = INT16_MIN;

	t47 = (x229/((x230+x231)^x232));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x233 = INT32_MIN;
	static int32_t x234 = INT32_MIN;
	volatile int8_t x236 = 1;
	volatile uint64_t t48 = 17663LLU;

	t48 = (x233/((x234+x235)^x236));

	if (t48 != 85067080LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x237 = 102229;
	uint8_t x239 = 5U;
	int16_t x240 = INT16_MIN;
	int32_t t49 = -61;

	t49 = (x237/((x238+x239)^x240));

	if (t49 != -3) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x249 = 234274969U;
	uint8_t x250 = UINT8_MAX;
	static volatile uint64_t x252 = 259067LLU;
	uint64_t t50 = 57004195276171464LLU;

	t50 = (x249/((x250+x251)^x252));

	if (t50 != 905LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x253 = -3;
	uint64_t x254 = 3507LLU;
	volatile int64_t x255 = -1LL;
	uint64_t t51 = 666173676855LLU;

	t51 = (x253/((x254+x255)^x256));

	if (t51 != 5253985780036898LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x261 = INT16_MAX;
	int16_t x262 = 579;
	volatile int64_t x263 = -1LL;
	static int8_t x264 = INT8_MIN;
	volatile int64_t t52 = 58539688LL;

	t52 = (x261/((x262+x263)^x264));

	if (t52 != -57LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x265 = INT32_MIN;
	static int8_t x266 = INT8_MIN;
	int8_t x267 = -1;
	int16_t x268 = INT16_MIN;
	volatile int32_t t53 = -109775;

	t53 = (x265/((x266+x267)^x268));

	if (t53 != -65795) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x269 = UINT8_MAX;
	volatile int8_t x270 = INT8_MIN;
	volatile int64_t x271 = -1372960828034663LL;
	int32_t x272 = INT32_MIN;
	volatile int64_t t54 = 4369548265670763LL;

	t54 = (x269/((x270+x271)^x272));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x274 = INT8_MIN;
	int16_t x275 = -6825;
	int16_t x276 = INT16_MIN;

	t55 = (x273/((x274+x275)^x276));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x277 = 24U;
	volatile int8_t x278 = INT8_MIN;
	static int32_t t56 = 129207571;

	t56 = (x277/((x278+x279)^x280));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x281 = -54;
	int16_t x283 = INT16_MIN;
	static int8_t x284 = INT8_MAX;
	static int64_t t57 = -1LL;

	t57 = (x281/((x282+x283)^x284));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x289 = INT32_MIN;
	int64_t x291 = 81870918183426LL;
	int16_t x292 = INT16_MIN;
	static volatile int64_t t58 = -3842693LL;

	t58 = (x289/((x290+x291)^x292));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x293 = 3U;
	int8_t x294 = 1;
	uint8_t x296 = 8U;
	volatile int32_t t59 = -7751;

	t59 = (x293/((x294+x295)^x296));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x297 = 27631U;
	uint32_t x298 = 61310U;
	static volatile int16_t x299 = INT16_MIN;
	int8_t x300 = 0;

	t60 = (x297/((x298+x299)^x300));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x301 = UINT8_MAX;
	volatile int64_t x302 = -58LL;
	static int64_t x304 = 7584LL;
	int64_t t61 = -155788LL;

	t61 = (x301/((x302+x303)^x304));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x305 = -115LL;
	int32_t x306 = INT32_MAX;
	volatile int8_t x307 = INT8_MIN;
	uint64_t x308 = 3895779LLU;

	t62 = (x305/((x306+x307)^x308));

	if (t62 != 8605545519LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x313 = 7622LL;
	int64_t x314 = 4719016887492807LL;
	volatile uint64_t x315 = UINT64_MAX;
	uint32_t x316 = 9142U;
	volatile uint64_t t63 = 52448LLU;

	t63 = (x313/((x314+x315)^x316));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x317 = 109U;
	uint16_t x319 = 6U;
	volatile int32_t t64 = -3;

	t64 = (x317/((x318+x319)^x320));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x325 = INT64_MAX;
	int8_t x326 = INT8_MIN;
	static uint64_t x327 = UINT64_MAX;
	int64_t x328 = 27974831LL;
	uint64_t t65 = 58503399643LLU;

	t65 = (x325/((x326+x327)^x328));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x332 = 32193;
	static int32_t t66 = -13;

	t66 = (x329/((x330+x331)^x332));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x333 = INT64_MIN;
	volatile int8_t x334 = INT8_MIN;
	int8_t x336 = -26;
	int64_t t67 = -3344841483LL;

	t67 = (x333/((x334+x335)^x336));

	if (t67 != -2147600579LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x337 = INT16_MAX;
	volatile int16_t x339 = -10;
	volatile int8_t x340 = INT8_MIN;
	volatile uint64_t t68 = 11831495543LLU;

	t68 = (x337/((x338+x339)^x340));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x342 = 122U;
	uint8_t x343 = UINT8_MAX;
	uint8_t x344 = 3U;
	int32_t t69 = 164;

	t69 = (x341/((x342+x343)^x344));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x346 = -1;
	static int8_t x347 = INT8_MAX;
	uint16_t x348 = UINT16_MAX;
	uint32_t t70 = 2824303U;

	t70 = (x345/((x346+x347)^x348));

	if (t70 != 65663U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x350 = 12;
	static int16_t x352 = 6;
	volatile int64_t t71 = -2064376942LL;

	t71 = (x349/((x350+x351)^x352));

	if (t71 != -301LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x357 = INT8_MIN;
	static volatile int64_t x358 = INT64_MIN;
	uint64_t x359 = 463137429311807782LLU;
	int8_t x360 = 61;

	t72 = (x357/((x358+x359)^x360));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x361 = -1;
	uint8_t x362 = 2U;
	int8_t x363 = -2;
	int16_t x364 = INT16_MIN;
	int32_t t73 = -1;

	t73 = (x361/((x362+x363)^x364));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x366 = -1;
	int8_t x367 = INT8_MIN;

	t74 = (x365/((x366+x367)^x368));

	if (t74 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x369 = 158;
	int64_t x371 = INT64_MIN;
	uint16_t x372 = UINT16_MAX;

	t75 = (x369/((x370+x371)^x372));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x373 = UINT32_MAX;
	static uint64_t x374 = 24319352988098LLU;
	int16_t x375 = INT16_MAX;
	volatile uint64_t t76 = 114140969268LLU;

	t76 = (x373/((x374+x375)^x376));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x378 = 240;
	int64_t x379 = -26LL;
	int32_t x380 = -363756038;
	volatile int64_t t77 = -32668031494LL;

	t77 = (x377/((x378+x379)^x380));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x381 = 18U;
	int16_t x382 = -370;
	volatile uint16_t x383 = UINT16_MAX;
	int32_t t78 = -640535;

	t78 = (x381/((x382+x383)^x384));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x386 = UINT64_MAX;
	int8_t x387 = -35;
	volatile int16_t x388 = INT16_MIN;
	uint64_t t79 = 592LLU;

	t79 = (x385/((x386+x387)^x388));

	if (t79 != 563569108936501LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x389 = INT8_MIN;
	static int8_t x390 = INT8_MAX;
	uint64_t x391 = 1556226386874539207LLU;
	int8_t x392 = 0;

	t80 = (x389/((x390+x391)^x392));

	if (t80 != 11LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x393 = 248;
	uint8_t x394 = 60U;
	int8_t x395 = -31;
	volatile uint8_t x396 = 126U;
	int32_t t81 = 0;

	t81 = (x393/((x394+x395)^x396));

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x401 = -1;
	int8_t x402 = INT8_MIN;
	int16_t x403 = -6;
	int16_t x404 = -1;
	volatile int32_t t82 = 507;

	t82 = (x401/((x402+x403)^x404));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x408 = INT32_MIN;

	t83 = (x405/((x406+x407)^x408));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x409 = -2;
	int16_t x410 = INT16_MIN;
	uint8_t x411 = UINT8_MAX;
	int32_t x412 = INT32_MAX;
	int32_t t84 = -23029546;

	t84 = (x409/((x410+x411)^x412));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x413 = INT8_MAX;
	static int32_t x414 = -290387816;
	int32_t x415 = -234358460;
	int8_t x416 = INT8_MAX;
	volatile int32_t t85 = -4;

	t85 = (x413/((x414+x415)^x416));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x417 = -1LL;
	int64_t x418 = -1LL;
	int32_t x419 = INT32_MIN;
	volatile int16_t x420 = INT16_MIN;

	t86 = (x417/((x418+x419)^x420));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x421 = INT8_MAX;
	volatile int32_t x422 = INT32_MIN;
	int64_t x423 = -598044387492LL;
	static uint8_t x424 = 2U;
	int64_t t87 = 15787375497196196LL;

	t87 = (x421/((x422+x423)^x424));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x425 = INT32_MIN;
	int32_t x426 = INT32_MIN;
	volatile int16_t x427 = 680;
	static volatile uint8_t x428 = UINT8_MAX;
	volatile int32_t t88 = -1;

	t88 = (x425/((x426+x427)^x428));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x429 = UINT16_MAX;
	uint8_t x430 = UINT8_MAX;
	volatile uint64_t x431 = 102906LLU;
	int8_t x432 = -5;
	volatile uint64_t t89 = 9398058336193LLU;

	t89 = (x429/((x430+x431)^x432));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x434 = UINT32_MAX;
	int16_t x435 = INT16_MAX;

	t90 = (x433/((x434+x435)^x436));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x441 = INT8_MAX;
	int64_t t91 = -159255677254667LL;

	t91 = (x441/((x442+x443)^x444));

	if (t91 != -6LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x445 = UINT8_MAX;
	volatile int64_t x446 = -3832005861432LL;
	volatile int8_t x448 = INT8_MIN;
	int64_t t92 = 63236436LL;

	t92 = (x445/((x446+x447)^x448));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x449 = 7554U;
	uint16_t x450 = 4970U;
	volatile uint8_t x451 = 94U;
	int16_t x452 = 0;
	static int32_t t93 = 1;

	t93 = (x449/((x450+x451)^x452));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x453 = -1;
	int64_t x454 = 14285421744793838LL;
	volatile uint16_t x455 = 15U;
	volatile int64_t t94 = -705046488237714LL;

	t94 = (x453/((x454+x455)^x456));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x457 = INT64_MIN;
	int8_t x458 = -1;
	int8_t x459 = -9;
	int8_t x460 = INT8_MAX;
	int64_t t95 = -1LL;

	t95 = (x457/((x458+x459)^x460));

	if (t95 != 77507328040796435LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x461 = INT8_MIN;
	volatile uint32_t x462 = 461U;
	int64_t x464 = INT64_MIN;
	uint64_t t96 = 2782698079201646LLU;

	t96 = (x461/((x462+x463)^x464));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x465 = INT16_MIN;
	static uint16_t x466 = 1U;
	int8_t x467 = -1;
	static int8_t x468 = INT8_MIN;
	volatile int32_t t97 = 893881153;

	t97 = (x465/((x466+x467)^x468));

	if (t97 != 256) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x473 = INT16_MIN;
	volatile int32_t x474 = 6766;
	int8_t x475 = INT8_MAX;
	int64_t x476 = INT64_MIN;
	volatile int64_t t98 = 9LL;

	t98 = (x473/((x474+x475)^x476));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x477 = 1148U;
	int32_t x478 = INT32_MAX;
	int8_t x479 = INT8_MIN;
	static int32_t t99 = 52;

	t99 = (x477/((x478+x479)^x480));

	if (t99 != 8) { NG(); } else { ; }
	
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

