#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x12 = 410714444LL;
int8_t x14 = -1;
static int16_t x17 = INT16_MIN;
int64_t x18 = 355369LL;
uint8_t x19 = 7U;
static uint64_t t2 = 425LLU;
static int32_t t4 = -304815700;
int8_t x39 = INT8_MIN;
int8_t x57 = -15;
int16_t x60 = INT16_MAX;
int32_t t9 = 222188207;
static int32_t x63 = INT32_MIN;
static volatile uint32_t t10 = 314759604U;
static int16_t x90 = INT16_MAX;
int64_t x91 = INT64_MAX;
int16_t x92 = 478;
static int32_t t14 = -10076;
int32_t x103 = INT32_MIN;
volatile int16_t x118 = INT16_MAX;
int64_t x121 = -1LL;
static int32_t t18 = -896333;
int16_t x150 = INT16_MIN;
uint8_t x153 = 104U;
int64_t x156 = INT64_MIN;
volatile int64_t t24 = INT64_MIN;
uint64_t x170 = 3027373958333302350LLU;
uint64_t x174 = 119393360LLU;
uint16_t x176 = 19882U;
int32_t t27 = 14778630;
uint32_t x192 = 1711344890U;
int16_t x196 = INT16_MIN;
int8_t x201 = -1;
volatile int32_t x202 = -1;
int16_t x205 = -1;
static int64_t x228 = -1LL;
static int8_t x235 = -1;
volatile int16_t x236 = INT16_MIN;
static int32_t x243 = INT32_MIN;
uint8_t x251 = 0U;
static uint64_t x256 = UINT64_MAX;
int16_t x260 = INT16_MIN;
int32_t x266 = 1;
int16_t x276 = INT16_MAX;
volatile int16_t x279 = INT16_MIN;
int32_t x280 = -1;
uint32_t x281 = 155333714U;
static uint16_t x283 = 59U;
volatile int32_t t48 = -60674;
uint64_t x289 = 11152LLU;
int32_t x290 = INT32_MAX;
int32_t x298 = INT32_MIN;
int32_t t52 = 2;
volatile uint16_t x306 = UINT16_MAX;
static volatile int32_t t54 = 7843591;
volatile int64_t x313 = -1LL;
int16_t x314 = -3;
static uint64_t x318 = 0LLU;
int16_t x324 = INT16_MAX;
int8_t x325 = 38;
uint32_t x326 = UINT32_MAX;
int8_t x328 = -1;
int32_t t58 = 252;
volatile uint64_t t59 = 30LLU;
int16_t x333 = -4029;
static volatile int32_t t61 = 8053;
int8_t x346 = -1;
int32_t x348 = INT32_MIN;
static int32_t t62 = INT32_MIN;
int32_t x352 = INT32_MIN;
int16_t x354 = INT16_MIN;
uint32_t x358 = 85U;
int64_t x360 = 3195LL;
volatile int64_t t65 = -49424LL;
int32_t t66 = 47;
int8_t x367 = INT8_MAX;
uint16_t x374 = UINT16_MAX;
uint64_t x375 = UINT64_MAX;
int8_t x382 = INT8_MIN;
uint16_t x396 = 13154U;
static volatile int64_t x402 = -47583LL;
int64_t x412 = -1582520LL;
int16_t x416 = -58;
int32_t t76 = 112284;
volatile int16_t x424 = INT16_MIN;
int32_t x444 = -1;
static int16_t x446 = -1;
int64_t x448 = INT64_MIN;
uint32_t x470 = 4137906U;
int64_t x476 = INT64_MIN;
uint64_t x483 = 26359442454850214LLU;
uint64_t x488 = 1811LLU;
static uint64_t t90 = 7338LLU;
uint8_t x490 = 59U;
int16_t x496 = INT16_MIN;
static int16_t x524 = -1;
static int32_t t97 = 473598;
volatile int32_t t98 = INT32_MIN;
static int32_t x535 = INT32_MIN;


void f0(void) {
	static uint64_t x9 = 18094005743531362LLU;
	uint32_t x10 = UINT32_MAX;
	uint64_t x11 = UINT64_MAX;
	volatile int64_t t0 = -8410597339774LL;

	t0 = (((x9*x10)<x11)^x12);

	if (t0 != 410714445LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = -1619LL;
	uint64_t x15 = UINT64_MAX;
	static uint8_t x16 = 20U;
	int32_t t1 = -3;

	t1 = (((x13*x14)<x15)^x16);

	if (t1 != 21) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x20 = 236193186891LLU;

	t2 = (((x17*x18)<x19)^x20);

	if (t2 != 236193186890LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = INT8_MIN;
	static int64_t x22 = 594509033LL;
	static int8_t x23 = INT8_MIN;
	uint64_t x24 = UINT64_MAX;
	uint64_t t3 = 13469LLU;

	t3 = (((x21*x22)<x23)^x24);

	if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = -1;
	int8_t x26 = INT8_MIN;
	volatile uint16_t x27 = 1573U;
	uint16_t x28 = UINT16_MAX;

	t4 = (((x25*x26)<x27)^x28);

	if (t4 != 65534) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x33 = 45552LLU;
	volatile int64_t x34 = -1764014868LL;
	int8_t x35 = INT8_MIN;
	int8_t x36 = 1;
	static volatile int32_t t5 = -41;

	t5 = (((x33*x34)<x35)^x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = 18;
	static uint32_t x38 = 198347U;
	int8_t x40 = INT8_MAX;
	int32_t t6 = -2970794;

	t6 = (((x37*x38)<x39)^x40);

	if (t6 != 126) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = 389913U;
	static volatile uint8_t x42 = UINT8_MAX;
	uint32_t x43 = UINT32_MAX;
	static volatile int32_t x44 = INT32_MIN;
	static volatile int32_t t7 = -6036298;

	t7 = (((x41*x42)<x43)^x44);

	if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x53 = 4;
	int64_t x54 = -275162791LL;
	int32_t x55 = INT32_MAX;
	static uint64_t x56 = UINT64_MAX;
	volatile uint64_t t8 = 2046772LLU;

	t8 = (((x53*x54)<x55)^x56);

	if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x58 = 231056596253103LL;
	int64_t x59 = INT64_MIN;

	t9 = (((x57*x58)<x59)^x60);

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x61 = -4759867;
	static volatile uint8_t x62 = 66U;
	volatile uint32_t x64 = 388707356U;

	t10 = (((x61*x62)<x63)^x64);

	if (t10 != 388707356U) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x73 = -1LL;
	int32_t x74 = INT32_MAX;
	volatile uint16_t x75 = 3U;
	int32_t x76 = -343;
	int32_t t11 = -698;

	t11 = (((x73*x74)<x75)^x76);

	if (t11 != -344) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x85 = 6U;
	volatile uint16_t x86 = UINT16_MAX;
	int8_t x87 = -24;
	uint8_t x88 = 1U;
	static int32_t t12 = -21052684;

	t12 = (((x85*x86)<x87)^x88);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x89 = 30U;
	static int32_t t13 = 3194627;

	t13 = (((x89*x90)<x91)^x92);

	if (t13 != 479) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x93 = 1U;
	volatile int16_t x94 = INT16_MIN;
	uint16_t x95 = 25U;
	volatile int16_t x96 = INT16_MIN;

	t14 = (((x93*x94)<x95)^x96);

	if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x97 = -6319609589LL;
	int64_t x98 = 3066130LL;
	int32_t x99 = INT32_MAX;
	volatile int32_t x100 = 15545662;
	int32_t t15 = 859545497;

	t15 = (((x97*x98)<x99)^x100);

	if (t15 != 15545663) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x101 = UINT8_MAX;
	int8_t x102 = INT8_MIN;
	volatile int8_t x104 = INT8_MIN;
	int32_t t16 = 31547;

	t16 = (((x101*x102)<x103)^x104);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x117 = -1LL;
	uint16_t x119 = UINT16_MAX;
	volatile uint16_t x120 = 105U;
	volatile int32_t t17 = -29830;

	t17 = (((x117*x118)<x119)^x120);

	if (t17 != 104) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x122 = 112046288452232911LLU;
	int32_t x123 = -850634253;
	volatile uint16_t x124 = UINT16_MAX;

	t18 = (((x121*x122)<x123)^x124);

	if (t18 != 65534) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x129 = INT8_MAX;
	int16_t x130 = -1;
	int8_t x131 = INT8_MIN;
	int16_t x132 = -62;
	volatile int32_t t19 = -15788;

	t19 = (((x129*x130)<x131)^x132);

	if (t19 != -62) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x133 = UINT8_MAX;
	int16_t x134 = INT16_MIN;
	int32_t x135 = INT32_MIN;
	static uint8_t x136 = 15U;
	int32_t t20 = 949190;

	t20 = (((x133*x134)<x135)^x136);

	if (t20 != 15) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x137 = 0;
	int16_t x138 = INT16_MAX;
	int8_t x139 = INT8_MAX;
	volatile int8_t x140 = INT8_MIN;
	volatile int32_t t21 = 255;

	t21 = (((x137*x138)<x139)^x140);

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x141 = UINT16_MAX;
	volatile int32_t x142 = 2;
	uint16_t x143 = 1U;
	volatile uint16_t x144 = 0U;
	int32_t t22 = 0;

	t22 = (((x141*x142)<x143)^x144);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x149 = 117519121129836LL;
	int8_t x151 = -1;
	uint16_t x152 = 109U;
	volatile int32_t t23 = -11893612;

	t23 = (((x149*x150)<x151)^x152);

	if (t23 != 108) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x154 = 118U;
	int16_t x155 = -1;

	t24 = (((x153*x154)<x155)^x156);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x157 = INT16_MAX;
	int16_t x158 = -1;
	uint64_t x159 = UINT64_MAX;
	volatile int16_t x160 = -1;
	int32_t t25 = 444642250;

	t25 = (((x157*x158)<x159)^x160);

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x169 = UINT8_MAX;
	static int8_t x171 = -26;
	static volatile uint64_t x172 = 251137246LLU;
	uint64_t t26 = 6009481LLU;

	t26 = (((x169*x170)<x171)^x172);

	if (t26 != 251137247LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x173 = -12112382814310583LL;
	int64_t x175 = INT64_MIN;

	t27 = (((x173*x174)<x175)^x176);

	if (t27 != 19882) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x177 = 126074U;
	volatile int64_t x178 = -1LL;
	int16_t x179 = 12540;
	int32_t x180 = INT32_MIN;
	int32_t t28 = -29772;

	t28 = (((x177*x178)<x179)^x180);

	if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x185 = UINT64_MAX;
	static volatile int64_t x186 = INT64_MIN;
	int64_t x187 = 94822LL;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t29 = 115171153;

	t29 = (((x185*x186)<x187)^x188);

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x189 = -808;
	volatile uint32_t x190 = UINT32_MAX;
	int8_t x191 = INT8_MIN;
	volatile uint32_t t30 = 2638U;

	t30 = (((x189*x190)<x191)^x192);

	if (t30 != 1711344891U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x193 = -27LL;
	uint8_t x194 = UINT8_MAX;
	uint32_t x195 = 254463U;
	int32_t t31 = 5;

	t31 = (((x193*x194)<x195)^x196);

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x197 = 1116634158U;
	uint32_t x198 = 191U;
	volatile uint16_t x199 = UINT16_MAX;
	uint8_t x200 = 7U;
	int32_t t32 = 4055;

	t32 = (((x197*x198)<x199)^x200);

	if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x203 = UINT8_MAX;
	int8_t x204 = 0;
	int32_t t33 = -103511;

	t33 = (((x201*x202)<x203)^x204);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x206 = UINT8_MAX;
	static uint16_t x207 = 20300U;
	int64_t x208 = -1LL;
	static volatile int64_t t34 = 70208109LL;

	t34 = (((x205*x206)<x207)^x208);

	if (t34 != -2LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x209 = UINT8_MAX;
	static uint64_t x210 = 50704774212133341LLU;
	volatile int64_t x211 = -4641223651LL;
	uint32_t x212 = 2549221U;
	volatile uint32_t t35 = 0U;

	t35 = (((x209*x210)<x211)^x212);

	if (t35 != 2549220U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x213 = -1LL;
	int32_t x214 = -1;
	uint8_t x215 = 9U;
	int64_t x216 = -25LL;
	int64_t t36 = 3445495LL;

	t36 = (((x213*x214)<x215)^x216);

	if (t36 != -26LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x217 = 16;
	static volatile uint8_t x218 = UINT8_MAX;
	int32_t x219 = -1;
	static volatile int64_t x220 = 156931446557LL;
	int64_t t37 = 6LL;

	t37 = (((x217*x218)<x219)^x220);

	if (t37 != 156931446557LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x225 = -1;
	volatile uint8_t x226 = 4U;
	volatile int16_t x227 = 2;
	volatile int64_t t38 = 616112079908973627LL;

	t38 = (((x225*x226)<x227)^x228);

	if (t38 != -2LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x233 = -1;
	uint16_t x234 = 0U;
	volatile int32_t t39 = 1960;

	t39 = (((x233*x234)<x235)^x236);

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x241 = -1LL;
	volatile uint8_t x242 = 23U;
	volatile int64_t x244 = INT64_MIN;
	volatile int64_t t40 = INT64_MIN;

	t40 = (((x241*x242)<x243)^x244);

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x249 = 120U;
	int16_t x250 = INT16_MAX;
	int64_t x252 = -1LL;
	volatile int64_t t41 = 28353416585617161LL;

	t41 = (((x249*x250)<x251)^x252);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x253 = 27U;
	int32_t x254 = 978206738;
	static int32_t x255 = -2587;
	volatile uint64_t t42 = 100329328608880LLU;

	t42 = (((x253*x254)<x255)^x256);

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x257 = 1U;
	uint16_t x258 = 51U;
	static volatile int32_t x259 = 247101179;
	static volatile int32_t t43 = 309;

	t43 = (((x257*x258)<x259)^x260);

	if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x265 = 3243457;
	static uint8_t x267 = UINT8_MAX;
	static int16_t x268 = -790;
	int32_t t44 = 4;

	t44 = (((x265*x266)<x267)^x268);

	if (t44 != -790) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x273 = 1263902889054803841LL;
	uint64_t x274 = 21LLU;
	int16_t x275 = INT16_MIN;
	static int32_t t45 = 6979;

	t45 = (((x273*x274)<x275)^x276);

	if (t45 != 32766) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x277 = INT16_MAX;
	uint64_t x278 = UINT64_MAX;
	volatile int32_t t46 = -13578575;

	t46 = (((x277*x278)<x279)^x280);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x282 = 2U;
	static uint32_t x284 = 55U;
	volatile uint32_t t47 = 473812663U;

	t47 = (((x281*x282)<x283)^x284);

	if (t47 != 55U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x285 = 0U;
	int32_t x286 = INT32_MIN;
	int64_t x287 = 4059LL;
	int32_t x288 = -1;

	t48 = (((x285*x286)<x287)^x288);

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x291 = 178825900932146LLU;
	volatile int8_t x292 = INT8_MAX;
	static volatile int32_t t49 = 14475;

	t49 = (((x289*x290)<x291)^x292);

	if (t49 != 126) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x293 = INT16_MIN;
	volatile int64_t x294 = -101653115LL;
	volatile uint64_t x295 = 13178423626851739LLU;
	int32_t x296 = -1;
	static volatile int32_t t50 = 20;

	t50 = (((x293*x294)<x295)^x296);

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x297 = UINT64_MAX;
	int64_t x299 = -1LL;
	uint64_t x300 = 32243685LLU;
	uint64_t t51 = 280389094208928LLU;

	t51 = (((x297*x298)<x299)^x300);

	if (t51 != 32243684LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x301 = UINT32_MAX;
	static volatile int8_t x302 = -1;
	static volatile int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MIN;

	t52 = (((x301*x302)<x303)^x304);

	if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x305 = INT16_MIN;
	static int16_t x307 = -1;
	static int64_t x308 = 18022417599980LL;
	volatile int64_t t53 = -6073220574128277LL;

	t53 = (((x305*x306)<x307)^x308);

	if (t53 != 18022417599981LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x309 = UINT16_MAX;
	int32_t x310 = 6515;
	volatile int16_t x311 = -3;
	int32_t x312 = -1;

	t54 = (((x309*x310)<x311)^x312);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x315 = INT8_MIN;
	volatile uint64_t x316 = UINT64_MAX;
	uint64_t t55 = UINT64_MAX;

	t55 = (((x313*x314)<x315)^x316);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x317 = INT8_MAX;
	int32_t x319 = -1093;
	int64_t x320 = INT64_MIN;
	static int64_t t56 = 554880173780403LL;

	t56 = (((x317*x318)<x319)^x320);

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x321 = -11;
	int64_t x322 = 22026099048LL;
	int8_t x323 = 15;
	int32_t t57 = 4433;

	t57 = (((x321*x322)<x323)^x324);

	if (t57 != 32766) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x327 = INT32_MAX;

	t58 = (((x325*x326)<x327)^x328);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x329 = INT8_MIN;
	int16_t x330 = -1;
	int16_t x331 = -4189;
	volatile uint64_t x332 = 45557949051812LLU;

	t59 = (((x329*x330)<x331)^x332);

	if (t59 != 45557949051812LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x334 = 50013415U;
	volatile int32_t x335 = -1;
	int64_t x336 = -1LL;
	int64_t t60 = -16722402962379LL;

	t60 = (((x333*x334)<x335)^x336);

	if (t60 != -2LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x341 = 58LLU;
	uint8_t x342 = 5U;
	int16_t x343 = 5584;
	volatile uint16_t x344 = UINT16_MAX;

	t61 = (((x341*x342)<x343)^x344);

	if (t61 != 65534) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x345 = INT16_MIN;
	int64_t x347 = INT64_MIN;

	t62 = (((x345*x346)<x347)^x348);

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x349 = 152286677175LLU;
	int8_t x350 = 1;
	static int16_t x351 = 4;
	int32_t t63 = INT32_MIN;

	t63 = (((x349*x350)<x351)^x352);

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x353 = -1;
	uint64_t x355 = 29270655473LLU;
	volatile int32_t x356 = INT32_MIN;
	int32_t t64 = -58;

	t64 = (((x353*x354)<x355)^x356);

	if (t64 != -2147483647) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x357 = UINT8_MAX;
	int8_t x359 = 4;

	t65 = (((x357*x358)<x359)^x360);

	if (t65 != 3195LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x361 = INT32_MAX;
	uint64_t x362 = 262845900289981544LLU;
	int64_t x363 = -6564819227605621LL;
	volatile uint8_t x364 = 0U;

	t66 = (((x361*x362)<x363)^x364);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x365 = 0;
	static int32_t x366 = -1;
	uint32_t x368 = UINT32_MAX;
	static volatile uint32_t t67 = 101546384U;

	t67 = (((x365*x366)<x367)^x368);

	if (t67 != 4294967294U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x373 = 147U;
	static int64_t x376 = INT64_MAX;
	volatile int64_t t68 = -10556LL;

	t68 = (((x373*x374)<x375)^x376);

	if (t68 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x381 = -1;
	int8_t x383 = -1;
	volatile int32_t x384 = INT32_MAX;
	int32_t t69 = INT32_MAX;

	t69 = (((x381*x382)<x383)^x384);

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x385 = -22;
	int16_t x386 = 1;
	int64_t x387 = INT64_MIN;
	uint16_t x388 = 13785U;
	int32_t t70 = -3;

	t70 = (((x385*x386)<x387)^x388);

	if (t70 != 13785) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x389 = 24;
	static int32_t x390 = -2294;
	int32_t x391 = INT32_MIN;
	volatile uint32_t x392 = 52U;
	uint32_t t71 = 93203435U;

	t71 = (((x389*x390)<x391)^x392);

	if (t71 != 52U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x393 = 12U;
	static uint64_t x394 = UINT64_MAX;
	volatile int8_t x395 = -1;
	volatile int32_t t72 = 63751931;

	t72 = (((x393*x394)<x395)^x396);

	if (t72 != 13155) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x397 = INT64_MIN;
	volatile uint64_t x398 = 244LLU;
	volatile int8_t x399 = INT8_MIN;
	static volatile uint8_t x400 = UINT8_MAX;
	volatile int32_t t73 = -3;

	t73 = (((x397*x398)<x399)^x400);

	if (t73 != 254) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x401 = INT16_MIN;
	volatile uint64_t x403 = 8199089308484LLU;
	uint16_t x404 = UINT16_MAX;
	int32_t t74 = -1710939;

	t74 = (((x401*x402)<x403)^x404);

	if (t74 != 65534) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x409 = 31;
	int32_t x410 = 12026486;
	int8_t x411 = -1;
	volatile int64_t t75 = 4429660257715697LL;

	t75 = (((x409*x410)<x411)^x412);

	if (t75 != -1582520LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x413 = 11;
	volatile uint32_t x414 = 16128U;
	static uint16_t x415 = UINT16_MAX;

	t76 = (((x413*x414)<x415)^x416);

	if (t76 != -58) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x417 = 2024986794U;
	int16_t x418 = -1;
	static int32_t x419 = 369467652;
	int8_t x420 = -2;
	volatile int32_t t77 = 9421916;

	t77 = (((x417*x418)<x419)^x420);

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x421 = INT8_MAX;
	static int16_t x422 = 360;
	int64_t x423 = INT64_MIN;
	int32_t t78 = 7615;

	t78 = (((x421*x422)<x423)^x424);

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x433 = 14007401U;
	volatile uint8_t x434 = UINT8_MAX;
	static int32_t x435 = -275;
	volatile int16_t x436 = INT16_MAX;
	static int32_t t79 = 75;

	t79 = (((x433*x434)<x435)^x436);

	if (t79 != 32766) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x437 = -6;
	static int8_t x438 = INT8_MIN;
	static volatile int16_t x439 = INT16_MIN;
	int8_t x440 = INT8_MIN;
	int32_t t80 = 127366717;

	t80 = (((x437*x438)<x439)^x440);

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x441 = -1;
	static uint16_t x442 = 32U;
	int32_t x443 = INT32_MIN;
	volatile int32_t t81 = 313759;

	t81 = (((x441*x442)<x443)^x444);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x445 = 1;
	uint64_t x447 = UINT64_MAX;
	volatile int64_t t82 = INT64_MIN;

	t82 = (((x445*x446)<x447)^x448);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x449 = -679;
	volatile int64_t x450 = -1LL;
	volatile int32_t x451 = -38104;
	uint8_t x452 = 4U;
	static volatile int32_t t83 = 813;

	t83 = (((x449*x450)<x451)^x452);

	if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x457 = -1LL;
	static volatile int16_t x458 = INT16_MIN;
	int64_t x459 = 2078116335088926680LL;
	static int32_t x460 = 22745510;
	volatile int32_t t84 = -1972;

	t84 = (((x457*x458)<x459)^x460);

	if (t84 != 22745511) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x461 = 6225;
	uint32_t x462 = UINT32_MAX;
	int16_t x463 = INT16_MAX;
	int32_t x464 = INT32_MIN;
	int32_t t85 = INT32_MIN;

	t85 = (((x461*x462)<x463)^x464);

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x469 = 566U;
	uint8_t x471 = UINT8_MAX;
	int16_t x472 = INT16_MAX;
	static volatile int32_t t86 = 100;

	t86 = (((x469*x470)<x471)^x472);

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x473 = -1LL;
	uint8_t x474 = 4U;
	uint8_t x475 = 7U;
	static volatile int64_t t87 = 3587LL;

	t87 = (((x473*x474)<x475)^x476);

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x477 = INT16_MIN;
	static int8_t x478 = INT8_MIN;
	int64_t x479 = 969782695782LL;
	int16_t x480 = INT16_MAX;
	volatile int32_t t88 = -142835;

	t88 = (((x477*x478)<x479)^x480);

	if (t88 != 32766) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x481 = 1476;
	uint8_t x482 = 4U;
	uint32_t x484 = 343615U;
	volatile uint32_t t89 = 2345U;

	t89 = (((x481*x482)<x483)^x484);

	if (t89 != 343614U) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x485 = -3;
	int8_t x486 = INT8_MAX;
	int32_t x487 = INT32_MIN;

	t90 = (((x485*x486)<x487)^x488);

	if (t90 != 1811LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x489 = 4;
	int8_t x491 = INT8_MAX;
	static int32_t x492 = INT32_MAX;
	int32_t t91 = INT32_MAX;

	t91 = (((x489*x490)<x491)^x492);

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x493 = -1LL;
	static int16_t x494 = -43;
	uint64_t x495 = UINT64_MAX;
	volatile int32_t t92 = 13497;

	t92 = (((x493*x494)<x495)^x496);

	if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x497 = 30551U;
	uint16_t x498 = UINT16_MAX;
	volatile int64_t x499 = INT64_MAX;
	uint64_t x500 = 67641293444337024LLU;
	volatile uint64_t t93 = 11468LLU;

	t93 = (((x497*x498)<x499)^x500);

	if (t93 != 67641293444337025LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x505 = UINT16_MAX;
	uint16_t x506 = 6805U;
	volatile int64_t x507 = -7518114895146545LL;
	int32_t x508 = INT32_MIN;
	int32_t t94 = INT32_MIN;

	t94 = (((x505*x506)<x507)^x508);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x509 = INT16_MAX;
	int16_t x510 = -630;
	int64_t x511 = 1730958793116382236LL;
	int32_t x512 = INT32_MIN;
	volatile int32_t t95 = -67425111;

	t95 = (((x509*x510)<x511)^x512);

	if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x513 = 116388449LL;
	int8_t x514 = 2;
	volatile int16_t x515 = INT16_MIN;
	int64_t x516 = -5LL;
	static int64_t t96 = 3LL;

	t96 = (((x513*x514)<x515)^x516);

	if (t96 != -5LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x521 = 1579;
	volatile uint16_t x522 = 8119U;
	static int32_t x523 = 3386868;

	t97 = (((x521*x522)<x523)^x524);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x529 = 47U;
	int32_t x530 = 1143772;
	volatile int8_t x531 = 0;
	int32_t x532 = INT32_MIN;

	t98 = (((x529*x530)<x531)^x532);

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x533 = INT8_MIN;
	int16_t x534 = -12;
	int64_t x536 = INT64_MIN;
	int64_t t99 = INT64_MIN;

	t99 = (((x533*x534)<x535)^x536);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

