#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 1U;
uint64_t t0 = 18LLU;
int32_t x16 = INT32_MIN;
static int32_t x18 = -1;
uint16_t x42 = 0U;
uint64_t x46 = 56LLU;
static uint32_t x50 = UINT32_MAX;
static uint64_t x55 = 6118910336067LLU;
uint32_t t12 = 2860U;
static uint32_t x61 = 464409068U;
int16_t x63 = INT16_MAX;
volatile int64_t t13 = 539013761918LL;
int16_t x72 = 8033;
uint8_t x76 = UINT8_MAX;
static uint64_t x78 = UINT64_MAX;
static volatile int32_t x79 = -1;
static int16_t x80 = INT16_MIN;
volatile uint64_t t16 = 0LLU;
int8_t x86 = INT8_MIN;
uint64_t t18 = UINT64_MAX;
int8_t x91 = INT8_MIN;
int16_t x102 = INT16_MAX;
volatile int64_t x107 = INT64_MIN;
static int32_t x119 = INT32_MIN;
static uint64_t x123 = UINT64_MAX;
static int64_t x135 = INT64_MIN;
volatile int64_t t29 = INT64_MAX;
volatile int16_t x151 = -1;
volatile int16_t x152 = INT16_MIN;
volatile int64_t t31 = 45972777134597564LL;
volatile int8_t x161 = INT8_MIN;
volatile int64_t t34 = 105845065329574045LL;
static int16_t x165 = 1363;
volatile int8_t x166 = INT8_MIN;
volatile int64_t x168 = INT64_MIN;
static int8_t x171 = INT8_MIN;
volatile uint8_t x178 = UINT8_MAX;
uint16_t x180 = 403U;
int16_t x181 = -1;
int64_t x183 = INT64_MIN;
int64_t t38 = 19249LL;
int8_t x187 = -1;
volatile uint16_t x189 = 5U;
volatile int32_t x193 = -124720613;
int64_t t41 = -58343116LL;
volatile int64_t x197 = INT64_MIN;
static volatile int32_t x202 = 127;
uint16_t x207 = UINT16_MAX;
int64_t t44 = 1016LL;
int32_t x219 = INT32_MAX;
static uint64_t t46 = 453309754LLU;
volatile int32_t x225 = 7896657;
int64_t x233 = INT64_MIN;
int32_t x236 = -40511;
int8_t x239 = 31;
volatile int32_t t51 = -7;
volatile uint64_t x248 = 10626338946502900LLU;
volatile uint64_t x250 = 783344939783LLU;
volatile int16_t x252 = 3559;
volatile int8_t x256 = -15;
uint64_t x257 = 3347725290LLU;
int32_t t56 = 112026;
uint32_t x272 = 5949U;
int64_t x277 = -2LL;
volatile int64_t t60 = 130369LL;
int16_t x285 = INT16_MAX;
int16_t x290 = -1;
int16_t x298 = 679;
int32_t x301 = INT32_MIN;
int64_t t65 = INT64_MIN;
int64_t t66 = 146872527298434610LL;
uint32_t x324 = 54885247U;
static int32_t x325 = INT32_MIN;
int8_t x336 = INT8_MIN;
uint32_t x342 = 27U;
volatile int64_t x348 = INT64_MIN;
int32_t x366 = INT32_MAX;
int64_t x369 = -1LL;
static int64_t x371 = -1472510LL;
int64_t t80 = -1219093LL;
volatile int64_t x376 = -1LL;
uint64_t x379 = 349667522191499LLU;
static uint32_t x385 = 468736U;
uint8_t x386 = UINT8_MAX;
int32_t x390 = -1;
int16_t x396 = INT16_MAX;
int16_t x404 = 1370;
volatile uint32_t t90 = 1336U;
static int32_t x420 = INT32_MAX;
volatile uint64_t t91 = 296938352131597498LLU;
static volatile uint8_t x426 = UINT8_MAX;
int32_t t93 = -71;
int32_t x434 = INT32_MAX;
uint32_t t95 = UINT32_MAX;
static int8_t x437 = INT8_MIN;
static volatile int64_t x443 = -1770936741034317LL;
volatile uint16_t x451 = 26U;


void f0(void) {
	volatile int64_t x1 = 91400275055LL;
	int16_t x2 = INT16_MAX;
	uint64_t x4 = UINT64_MAX;

	t0 = ((x1&(x2/x3))+x4);

	if (t0 != 1134LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -59;
	volatile int16_t x6 = -1;
	int8_t x7 = INT8_MIN;
	static volatile int16_t x8 = 6;
	volatile int32_t t1 = -30920286;

	t1 = ((x5&(x6/x7))+x8);

	if (t1 != 6) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static int8_t x10 = 7;
	int64_t x11 = 308785578LL;
	int32_t x12 = INT32_MIN;
	int64_t t2 = 36LL;

	t2 = ((x9&(x10/x11))+x12);

	if (t2 != -2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;
	uint32_t x14 = 2772U;
	uint64_t x15 = 1069LLU;
	uint64_t t3 = 38243422LLU;

	t3 = ((x13&(x14/x15))+x16);

	if (t3 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	uint8_t x19 = 2U;
	uint64_t x20 = UINT64_MAX;
	uint64_t t4 = UINT64_MAX;

	t4 = ((x17&(x18/x19))+x20);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int16_t x22 = -1;
	static int64_t x23 = INT64_MIN;
	uint64_t x24 = UINT64_MAX;
	uint64_t t5 = UINT64_MAX;

	t5 = ((x21&(x22/x23))+x24);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x29 = 4633;
	int16_t x30 = 1472;
	static uint64_t x31 = 7726545320414592817LLU;
	int32_t x32 = INT32_MIN;
	volatile uint64_t t6 = 483442124527545LLU;

	t6 = ((x29&(x30/x31))+x32);

	if (t6 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	uint16_t x38 = UINT16_MAX;
	uint64_t x39 = 113114276705LLU;
	uint32_t x40 = UINT32_MAX;
	volatile uint64_t t7 = 7798838929875548703LLU;

	t7 = ((x37&(x38/x39))+x40);

	if (t7 != 4294967295LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = -64424981;
	volatile uint16_t x43 = 1640U;
	int64_t x44 = -776091388222317695LL;
	int64_t t8 = -11LL;

	t8 = ((x41&(x42/x43))+x44);

	if (t8 != -776091388222317695LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -11198;
	uint32_t x47 = 1U;
	int8_t x48 = -1;
	static uint64_t t9 = UINT64_MAX;

	t9 = ((x45&(x46/x47))+x48);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	int64_t x51 = INT64_MAX;
	int32_t x52 = INT32_MAX;
	int64_t t10 = -111082317311LL;

	t10 = ((x49&(x50/x51))+x52);

	if (t10 != 2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -4;
	uint16_t x54 = UINT16_MAX;
	volatile int64_t x56 = INT64_MAX;
	volatile uint64_t t11 = 36234LLU;

	t11 = ((x53&(x54/x55))+x56);

	if (t11 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 1;
	int8_t x58 = -1;
	volatile uint32_t x59 = 10926U;
	int16_t x60 = 2273;

	t12 = ((x57&(x58/x59))+x60);

	if (t12 != 2273U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x62 = UINT8_MAX;
	int64_t x64 = -132558080796235LL;

	t13 = ((x61&(x62/x63))+x64);

	if (t13 != -132558080796235LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = -22;
	static uint32_t x70 = 30U;
	int32_t x71 = INT32_MIN;
	volatile uint32_t t14 = 2176599U;

	t14 = ((x69&(x70/x71))+x72);

	if (t14 != 8033U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MAX;
	uint16_t x74 = 375U;
	int32_t x75 = 875;
	static int32_t t15 = -126;

	t15 = ((x73&(x74/x75))+x76);

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x77 = INT8_MIN;

	t16 = ((x77&(x78/x79))+x80);

	if (t16 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = 3350LL;
	volatile uint64_t x82 = 4LLU;
	int64_t x83 = INT64_MIN;
	static volatile int8_t x84 = -1;
	uint64_t t17 = UINT64_MAX;

	t17 = ((x81&(x82/x83))+x84);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = -1;
	static int16_t x87 = INT16_MAX;
	static volatile uint64_t x88 = UINT64_MAX;

	t18 = ((x85&(x86/x87))+x88);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MAX;
	int32_t x90 = INT32_MIN;
	int64_t x92 = -1LL;
	volatile int64_t t19 = -33301LL;

	t19 = ((x89&(x90/x91))+x92);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MIN;
	static uint8_t x94 = 42U;
	int8_t x95 = INT8_MIN;
	static uint16_t x96 = UINT16_MAX;
	int32_t t20 = -7194;

	t20 = ((x93&(x94/x95))+x96);

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x97 = INT8_MAX;
	static uint64_t x98 = 8019007LLU;
	uint32_t x99 = 78U;
	int8_t x100 = -1;
	uint64_t t21 = 43798039304292266LLU;

	t21 = ((x97&(x98/x99))+x100);

	if (t21 != 22LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = -1LL;
	uint16_t x103 = 1U;
	int32_t x104 = INT32_MIN;
	static int64_t t22 = 3LL;

	t22 = ((x101&(x102/x103))+x104);

	if (t22 != -2147450881LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x105 = INT8_MAX;
	static int64_t x106 = INT64_MIN;
	int32_t x108 = INT32_MIN;
	static volatile int64_t t23 = 95796LL;

	t23 = ((x105&(x106/x107))+x108);

	if (t23 != -2147483647LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x109 = UINT32_MAX;
	int64_t x110 = -7745LL;
	static uint64_t x111 = 553345936148LLU;
	int32_t x112 = 9850;
	volatile uint64_t t24 = 1956176LLU;

	t24 = ((x109&(x110/x111))+x112);

	if (t24 != 33346580LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x117 = UINT64_MAX;
	int8_t x118 = INT8_MAX;
	volatile int64_t x120 = -1LL;
	static uint64_t t25 = UINT64_MAX;

	t25 = ((x117&(x118/x119))+x120);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x121 = -1LL;
	int64_t x122 = -58452479LL;
	uint16_t x124 = 28762U;
	volatile uint64_t t26 = 442310733LLU;

	t26 = ((x121&(x122/x123))+x124);

	if (t26 != 28762LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = -12458742;
	uint32_t x126 = 39034195U;
	int64_t x127 = INT64_MIN;
	int16_t x128 = -1;
	volatile int64_t t27 = -53941369971677LL;

	t27 = ((x125&(x126/x127))+x128);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x129 = UINT8_MAX;
	uint32_t x130 = 50069188U;
	uint8_t x131 = 3U;
	static int64_t x132 = INT64_MIN;
	static int64_t t28 = -22413839224LL;

	t28 = ((x129&(x130/x131))+x132);

	if (t28 != -9223372036854775743LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = 0;
	static int16_t x134 = INT16_MAX;
	int64_t x136 = INT64_MAX;

	t29 = ((x133&(x134/x135))+x136);

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x137 = INT32_MIN;
	int64_t x138 = 314470491LL;
	uint8_t x139 = 4U;
	uint16_t x140 = UINT16_MAX;
	int64_t t30 = -132005287LL;

	t30 = ((x137&(x138/x139))+x140);

	if (t30 != 65535LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = INT64_MIN;
	volatile int32_t x150 = -1137;

	t31 = ((x149&(x150/x151))+x152);

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x153 = -16031949;
	uint32_t x154 = UINT32_MAX;
	static uint16_t x155 = 1U;
	volatile uint8_t x156 = 105U;
	volatile uint32_t t32 = 328U;

	t32 = ((x153&(x154/x155))+x156);

	if (t32 != 4278935452U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = 14614;
	int16_t x158 = -1;
	int16_t x159 = -27;
	int32_t x160 = INT32_MIN;
	volatile int32_t t33 = INT32_MIN;

	t33 = ((x157&(x158/x159))+x160);

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x162 = INT8_MIN;
	int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MIN;

	t34 = ((x161&(x162/x163))+x164);

	if (t34 != -2147483648LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x167 = INT64_MAX;
	static volatile int64_t t35 = INT64_MIN;

	t35 = ((x165&(x166/x167))+x168);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = 3026;
	static volatile int16_t x170 = 73;
	int16_t x172 = -1;
	volatile int32_t t36 = 11;

	t36 = ((x169&(x170/x171))+x172);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x177 = -1LL;
	int8_t x179 = INT8_MIN;
	static volatile int64_t t37 = -440156LL;

	t37 = ((x177&(x178/x179))+x180);

	if (t37 != 402LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x182 = -375;
	int8_t x184 = INT8_MIN;

	t38 = ((x181&(x182/x183))+x184);

	if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x185 = 10533LLU;
	int8_t x186 = 56;
	int32_t x188 = INT32_MIN;
	uint64_t t39 = 41LLU;

	t39 = ((x185&(x186/x187))+x188);

	if (t39 != 18446744071562078464LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x190 = 65007555997692LLU;
	int8_t x191 = INT8_MIN;
	static volatile uint64_t x192 = 1805425298LLU;
	volatile uint64_t t40 = 0LLU;

	t40 = ((x189&(x190/x191))+x192);

	if (t40 != 1805425298LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x194 = -128;
	int32_t x195 = -1;
	int64_t x196 = -1LL;

	t41 = ((x193&(x194/x195))+x196);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x198 = 16U;
	uint16_t x199 = 423U;
	int8_t x200 = INT8_MIN;
	static int64_t t42 = -321472602162LL;

	t42 = ((x197&(x198/x199))+x200);

	if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = 1;
	static volatile int32_t x203 = INT32_MIN;
	volatile int64_t x204 = -1LL;
	volatile int64_t t43 = 178750LL;

	t43 = ((x201&(x202/x203))+x204);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x205 = INT64_MAX;
	int32_t x206 = INT32_MIN;
	static uint16_t x208 = 1U;

	t44 = ((x205&(x206/x207))+x208);

	if (t44 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = INT32_MIN;
	int16_t x214 = 58;
	volatile int32_t x215 = -249643740;
	static int16_t x216 = 0;
	volatile int32_t t45 = -4;

	t45 = ((x213&(x214/x215))+x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x217 = 1592222185LLU;
	int16_t x218 = INT16_MIN;
	volatile int8_t x220 = INT8_MIN;

	t46 = ((x217&(x218/x219))+x220);

	if (t46 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = INT16_MAX;
	int16_t x222 = -8;
	uint64_t x223 = 459027950846611LLU;
	volatile uint16_t x224 = 360U;
	volatile uint64_t t47 = 240892046041271LLU;

	t47 = ((x221&(x222/x223))+x224);

	if (t47 != 7778LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x226 = 24495;
	int8_t x227 = INT8_MIN;
	uint8_t x228 = 25U;
	volatile int32_t t48 = -595;

	t48 = ((x225&(x226/x227))+x228);

	if (t48 != 7896666) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x234 = 2U;
	uint32_t x235 = 238U;
	int64_t t49 = -88LL;

	t49 = ((x233&(x234/x235))+x236);

	if (t49 != -40511LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MAX;
	static int8_t x240 = INT8_MAX;
	int64_t t50 = -11671035903LL;

	t50 = ((x237&(x238/x239))+x240);

	if (t50 != 127LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x241 = INT16_MIN;
	volatile int16_t x242 = INT16_MIN;
	int8_t x243 = -1;
	int8_t x244 = INT8_MIN;

	t51 = ((x241&(x242/x243))+x244);

	if (t51 != 32640) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x245 = 3206U;
	int8_t x246 = 49;
	int16_t x247 = INT16_MAX;
	static uint64_t t52 = 188540125660LLU;

	t52 = ((x245&(x246/x247))+x248);

	if (t52 != 10626338946502900LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = 1;
	int16_t x251 = -1;
	volatile uint64_t t53 = 643943011LLU;

	t53 = ((x249&(x250/x251))+x252);

	if (t53 != 3559LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x253 = 32068U;
	int8_t x254 = INT8_MIN;
	volatile int32_t x255 = INT32_MAX;
	int32_t t54 = 5623;

	t54 = ((x253&(x254/x255))+x256);

	if (t54 != -15) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x258 = INT16_MIN;
	volatile int64_t x259 = INT64_MIN;
	static int32_t x260 = INT32_MIN;
	volatile uint64_t t55 = 1667723LLU;

	t55 = ((x257&(x258/x259))+x260);

	if (t55 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x265 = INT16_MIN;
	int32_t x266 = -5771;
	volatile int8_t x267 = INT8_MIN;
	int16_t x268 = 913;

	t56 = ((x265&(x266/x267))+x268);

	if (t56 != 913) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x269 = INT16_MIN;
	static int32_t x270 = -226650081;
	static volatile uint8_t x271 = UINT8_MAX;
	volatile uint32_t t57 = 1207811100U;

	t57 = ((x269&(x270/x271))+x272);

	if (t57 != 4294055741U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x273 = 22U;
	static int8_t x274 = INT8_MIN;
	int64_t x275 = 382297LL;
	int16_t x276 = -1;
	int64_t t58 = -37138602351099765LL;

	t58 = ((x273&(x274/x275))+x276);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x278 = INT16_MIN;
	uint64_t x279 = UINT64_MAX;
	int32_t x280 = INT32_MAX;
	volatile uint64_t t59 = 68992734966237267LLU;

	t59 = ((x277&(x278/x279))+x280);

	if (t59 != 2147483647LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x281 = -15497768817LL;
	uint8_t x282 = 1U;
	int64_t x283 = -1LL;
	volatile int16_t x284 = 1961;

	t60 = ((x281&(x282/x283))+x284);

	if (t60 != -15497766856LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x286 = 120U;
	volatile int16_t x287 = 31;
	static int16_t x288 = INT16_MAX;
	int32_t t61 = -220;

	t61 = ((x285&(x286/x287))+x288);

	if (t61 != 32770) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x289 = INT8_MIN;
	static uint32_t x291 = UINT32_MAX;
	int64_t x292 = INT64_MAX;
	volatile int64_t t62 = INT64_MAX;

	t62 = ((x289&(x290/x291))+x292);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x297 = INT8_MIN;
	int64_t x299 = -1LL;
	static volatile int8_t x300 = INT8_MIN;
	int64_t t63 = -605599LL;

	t63 = ((x297&(x298/x299))+x300);

	if (t63 != -896LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x302 = INT16_MIN;
	int64_t x303 = -1LL;
	int16_t x304 = INT16_MIN;
	volatile int64_t t64 = 21311LL;

	t64 = ((x301&(x302/x303))+x304);

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x305 = -389445LL;
	static volatile int32_t x306 = -7;
	volatile int8_t x307 = INT8_MIN;
	int64_t x308 = INT64_MIN;

	t65 = ((x305&(x306/x307))+x308);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x309 = INT64_MIN;
	volatile int8_t x310 = -13;
	static int16_t x311 = INT16_MIN;
	static volatile int8_t x312 = -3;

	t66 = ((x309&(x310/x311))+x312);

	if (t66 != -3LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = 0;
	static int32_t x319 = 1;
	int32_t x320 = -1;
	static int32_t t67 = -16349;

	t67 = ((x317&(x318/x319))+x320);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x321 = INT16_MIN;
	static volatile int32_t x322 = INT32_MIN;
	uint8_t x323 = UINT8_MAX;
	volatile uint32_t t68 = 7U;

	t68 = ((x321&(x322/x323))+x324);

	if (t68 != 46431103U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x326 = 49470U;
	static volatile int16_t x327 = INT16_MAX;
	int64_t x328 = INT64_MIN;
	volatile int64_t t69 = INT64_MIN;

	t69 = ((x325&(x326/x327))+x328);

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x329 = -2;
	int16_t x330 = INT16_MIN;
	uint8_t x331 = 59U;
	uint32_t x332 = UINT32_MAX;
	uint32_t t70 = 3U;

	t70 = ((x329&(x330/x331))+x332);

	if (t70 != 4294966739U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x333 = -19LL;
	static int8_t x334 = -1;
	int32_t x335 = -1;
	int64_t t71 = -976436772488736LL;

	t71 = ((x333&(x334/x335))+x336);

	if (t71 != -127LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x337 = 424U;
	int64_t x338 = -12137814803LL;
	int16_t x339 = INT16_MIN;
	volatile int64_t x340 = -14566178LL;
	volatile int64_t t72 = -919769628LL;

	t72 = ((x337&(x338/x339))+x340);

	if (t72 != -14566018LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x341 = -1;
	int16_t x343 = -1;
	int8_t x344 = INT8_MIN;
	uint32_t t73 = 99U;

	t73 = ((x341&(x342/x343))+x344);

	if (t73 != 4294967168U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x345 = INT64_MIN;
	static uint32_t x346 = 1539U;
	static uint64_t x347 = 22046LLU;
	static uint64_t t74 = 818LLU;

	t74 = ((x345&(x346/x347))+x348);

	if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x349 = 3;
	int64_t x350 = 4144000901LL;
	volatile int8_t x351 = INT8_MIN;
	uint16_t x352 = 1U;
	static int64_t t75 = 0LL;

	t75 = ((x349&(x350/x351))+x352);

	if (t75 != 2LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x353 = 601905666392LLU;
	uint32_t x354 = 8196921U;
	static int8_t x355 = 6;
	int16_t x356 = 135;
	uint64_t t76 = 7LLU;

	t76 = ((x353&(x354/x355))+x356);

	if (t76 != 1349775LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x357 = INT32_MIN;
	static int32_t x358 = -3;
	volatile uint64_t x359 = UINT64_MAX;
	uint16_t x360 = 1903U;
	volatile uint64_t t77 = 3095LLU;

	t77 = ((x357&(x358/x359))+x360);

	if (t77 != 1903LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = INT32_MIN;
	uint32_t x362 = 667U;
	int64_t x363 = INT64_MIN;
	int32_t x364 = -1;
	static volatile int64_t t78 = -484272019471269LL;

	t78 = ((x361&(x362/x363))+x364);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x365 = 10;
	volatile int16_t x367 = INT16_MAX;
	int64_t x368 = -1LL;
	static volatile int64_t t79 = 778597LL;

	t79 = ((x365&(x366/x367))+x368);

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x370 = INT64_MAX;
	int8_t x372 = INT8_MAX;

	t80 = ((x369&(x370/x371))+x372);

	if (t80 != -6263707571879LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x373 = INT32_MIN;
	int8_t x374 = 19;
	static uint32_t x375 = 285204U;
	int64_t t81 = -352347873127LL;

	t81 = ((x373&(x374/x375))+x376);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = -1;
	uint32_t x378 = UINT32_MAX;
	uint8_t x380 = 3U;
	uint64_t t82 = 1293813217142010LLU;

	t82 = ((x377&(x378/x379))+x380);

	if (t82 != 3LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x381 = 1699U;
	int16_t x382 = 9;
	static int16_t x383 = INT16_MAX;
	static int8_t x384 = -1;
	volatile int32_t t83 = -22705;

	t83 = ((x381&(x382/x383))+x384);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x387 = -62;
	int64_t x388 = 129045LL;
	int64_t t84 = 3288LL;

	t84 = ((x385&(x386/x387))+x388);

	if (t84 != 597781LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = INT32_MIN;
	volatile uint16_t x391 = UINT16_MAX;
	volatile int32_t x392 = 340329887;
	static volatile int32_t t85 = -504404;

	t85 = ((x389&(x390/x391))+x392);

	if (t85 != 340329887) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x393 = 5436U;
	static int64_t x394 = INT64_MIN;
	int32_t x395 = -1111;
	int64_t t86 = 1171282LL;

	t86 = ((x393&(x394/x395))+x396);

	if (t86 != 32799LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x397 = 45U;
	static uint16_t x398 = 10356U;
	static int16_t x399 = INT16_MAX;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t87 = -475619500;

	t87 = ((x397&(x398/x399))+x400);

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x401 = INT8_MAX;
	static uint16_t x402 = 77U;
	static uint32_t x403 = UINT32_MAX;
	static uint32_t t88 = 177368U;

	t88 = ((x401&(x402/x403))+x404);

	if (t88 != 1370U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x405 = INT16_MAX;
	int64_t x406 = -1LL;
	uint16_t x407 = 31849U;
	int8_t x408 = INT8_MAX;
	volatile int64_t t89 = 1063588914546078193LL;

	t89 = ((x405&(x406/x407))+x408);

	if (t89 != 127LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x409 = INT32_MIN;
	static int8_t x410 = -1;
	int8_t x411 = 7;
	uint32_t x412 = 961502916U;

	t90 = ((x409&(x410/x411))+x412);

	if (t90 != 961502916U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x417 = 15492460LLU;
	int8_t x418 = -1;
	int64_t x419 = -50808LL;

	t91 = ((x417&(x418/x419))+x420);

	if (t91 != 2147483647LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x421 = INT16_MAX;
	int8_t x422 = -1;
	int8_t x423 = -57;
	int16_t x424 = INT16_MIN;
	int32_t t92 = 34199;

	t92 = ((x421&(x422/x423))+x424);

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = INT16_MIN;
	int8_t x427 = 34;
	int8_t x428 = 27;

	t93 = ((x425&(x426/x427))+x428);

	if (t93 != 27) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x429 = 23U;
	int64_t x430 = INT64_MIN;
	int32_t x431 = INT32_MIN;
	uint32_t x432 = 120893832U;
	volatile int64_t t94 = -1LL;

	t94 = ((x429&(x430/x431))+x432);

	if (t94 != 120893832LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x433 = 41078874U;
	int32_t x435 = INT32_MIN;
	int16_t x436 = -1;

	t95 = ((x433&(x434/x435))+x436);

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x438 = 0U;
	volatile int32_t x439 = INT32_MAX;
	uint64_t x440 = 1426913901334LLU;
	volatile uint64_t t96 = 27703902081661250LLU;

	t96 = ((x437&(x438/x439))+x440);

	if (t96 != 1426913901334LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x441 = 81213559126202275LLU;
	volatile uint16_t x442 = 26993U;
	int8_t x444 = INT8_MAX;
	volatile uint64_t t97 = 70LLU;

	t97 = ((x441&(x442/x443))+x444);

	if (t97 != 127LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x445 = 0U;
	int64_t x446 = -1LL;
	static int64_t x447 = INT64_MAX;
	int32_t x448 = -1;
	int64_t t98 = -4836302906898LL;

	t98 = ((x445&(x446/x447))+x448);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x449 = -3358;
	volatile int16_t x450 = -1;
	int8_t x452 = 1;
	int32_t t99 = 2595;

	t99 = ((x449&(x450/x451))+x452);

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

