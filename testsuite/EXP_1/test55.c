#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
volatile int64_t x6 = INT64_MIN;
volatile int64_t t1 = -6699639LL;
int64_t x11 = 2129285001815714626LL;
volatile int64_t t4 = -19130354712LL;
uint32_t x24 = UINT32_MAX;
static int16_t x27 = 1;
uint64_t x33 = UINT64_MAX;
int8_t x36 = INT8_MIN;
int16_t x40 = INT16_MAX;
static uint16_t x42 = UINT16_MAX;
int32_t x43 = INT32_MIN;
int16_t x49 = INT16_MIN;
uint64_t x57 = UINT64_MAX;
uint64_t t11 = 3459142765LLU;
static int8_t x68 = INT8_MIN;
volatile int64_t t13 = -1762480740LL;
uint16_t x71 = 2215U;
int16_t x76 = -2039;
volatile uint16_t x82 = UINT16_MAX;
uint32_t x89 = 245626837U;
static volatile uint16_t x95 = 1U;
uint8_t x96 = 1U;
static uint8_t x97 = 115U;
uint32_t x102 = 42947298U;
int16_t x103 = -1;
static uint64_t t22 = 240300LLU;
uint64_t x112 = 1336845800959708LLU;
volatile uint64_t t23 = 6344LLU;
int32_t x120 = INT32_MAX;
volatile uint8_t x124 = 27U;
static volatile uint32_t x127 = UINT32_MAX;
uint16_t x132 = UINT16_MAX;
static uint16_t x135 = UINT16_MAX;
volatile uint32_t x136 = 8851345U;
volatile uint32_t t28 = 2U;
int64_t x139 = INT64_MIN;
int8_t x144 = INT8_MAX;
volatile uint16_t x147 = 2U;
int32_t x149 = -1;
static int8_t x152 = INT8_MIN;
uint32_t t32 = 913075U;
uint64_t x159 = UINT64_MAX;
volatile int32_t x160 = INT32_MIN;
int64_t x171 = -271LL;
static int64_t t37 = -3658620010592LL;
static int64_t x177 = INT64_MIN;
int64_t x178 = INT64_MAX;
volatile uint64_t x179 = UINT64_MAX;
static int32_t x180 = INT32_MIN;
volatile int64_t x185 = INT64_MIN;
volatile int64_t t40 = -435LL;
int16_t x193 = -1;
int64_t x194 = INT64_MAX;
static int32_t x195 = INT32_MIN;
uint64_t x206 = UINT64_MAX;
int64_t x207 = -1LL;
int8_t x210 = 16;
volatile int64_t x211 = 2LL;
uint32_t x218 = 59407041U;
int16_t x227 = INT16_MAX;
uint8_t x229 = UINT8_MAX;
int16_t x234 = INT16_MIN;
volatile int64_t x240 = 28501373739142391LL;
volatile int64_t t49 = -734761136609677LL;
volatile int8_t x244 = -1;
static uint64_t x254 = 281153880412942505LLU;
volatile uint64_t t53 = 30LLU;
int32_t x258 = -25816551;
int64_t x263 = 4626LL;
static volatile int64_t x264 = 2091570185810LL;
int8_t x266 = 14;
uint64_t x269 = UINT64_MAX;
static uint64_t t57 = 1137LLU;
uint16_t x279 = UINT16_MAX;
int32_t t58 = 461086;
volatile int8_t x281 = -22;
uint64_t x293 = 3LLU;
volatile uint64_t t60 = 10165LLU;
uint32_t x298 = 5667298U;
uint64_t x313 = UINT64_MAX;
volatile int16_t x316 = 0;
static volatile uint64_t t64 = 94572120LLU;
volatile int64_t x317 = 143849164553LL;
volatile int64_t t65 = 4LL;
uint8_t x326 = UINT8_MAX;
int16_t x336 = -3675;
static int8_t x361 = INT8_MIN;
volatile int32_t t71 = -1886;
static int16_t x366 = 311;
int8_t x387 = 12;
static int8_t x388 = INT8_MIN;
static volatile int16_t x406 = -97;
int32_t x419 = INT32_MIN;
uint64_t t80 = 5354139011350LLU;
int16_t x421 = INT16_MIN;
int64_t x432 = INT64_MAX;
uint32_t x443 = 160547U;
uint32_t x445 = 81755585U;
static volatile int64_t t88 = 62534388LL;
int64_t x465 = INT64_MIN;
int32_t x466 = 512310042;
int64_t t89 = -1633303226251LL;
volatile int32_t x482 = INT32_MIN;
int64_t x487 = INT64_MIN;
static int32_t x490 = -1;
volatile uint64_t t93 = 17LLU;
uint64_t x497 = UINT64_MAX;
static volatile int32_t x502 = 9585221;
int32_t x504 = -1;
volatile int64_t t97 = 5445LL;


void f0(void) {
	volatile uint16_t x2 = 188U;
	static int64_t x3 = INT64_MIN;
	int64_t x4 = -16LL;
	int64_t t0 = -2203920820277171662LL;

	t0 = (((x1+x2)%x3)*x4);

	if (t0 != 34359735360LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 525U;
	uint16_t x7 = UINT16_MAX;
	uint16_t x8 = 954U;

	t1 = (((x5+x6)%x7)*x8);

	if (t1 != -30759822LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -743;
	int16_t x10 = -2;
	uint8_t x12 = UINT8_MAX;
	int64_t t2 = 274955197748668516LL;

	t2 = (((x9+x10)%x11)*x12);

	if (t2 != -189975LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 1U;
	static uint64_t x14 = UINT64_MAX;
	static volatile uint32_t x15 = UINT32_MAX;
	volatile uint32_t x16 = UINT32_MAX;
	uint64_t t3 = 2892356276558671LLU;

	t3 = (((x13+x14)%x15)*x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	uint32_t x18 = 15381U;
	int64_t x19 = -1LL;
	volatile int16_t x20 = -1;

	t4 = (((x17+x18)%x19)*x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -141;
	int16_t x22 = 801;
	int8_t x23 = INT8_MAX;
	uint32_t t5 = 6U;

	t5 = (((x21+x22)%x23)*x24);

	if (t5 != 4294967271U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 1240326;
	volatile uint32_t x26 = 251086517U;
	int16_t x28 = INT16_MAX;
	volatile uint32_t t6 = 140080U;

	t6 = (((x25+x26)%x27)*x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = INT32_MIN;
	int8_t x35 = 1;
	volatile uint64_t t7 = 971LLU;

	t7 = (((x33+x34)%x35)*x36);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 1U;
	int16_t x38 = -1;
	uint16_t x39 = 324U;
	volatile int32_t t8 = -15;

	t8 = (((x37+x38)%x39)*x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x41 = INT16_MAX;
	uint32_t x44 = 24287U;
	uint32_t t9 = 19958U;

	t9 = (((x41+x42)%x43)*x44);

	if (t9 != 2387460674U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x50 = 0U;
	int16_t x51 = -1;
	static uint64_t x52 = 12916429668869312LLU;
	volatile uint64_t t10 = 12238135394LLU;

	t10 = (((x49+x50)%x51)*x52);

	if (t10 != 12715794427191230464LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MAX;
	int8_t x60 = INT8_MIN;

	t11 = (((x57+x58)%x59)*x60);

	if (t11 != 18446744073705371904LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -1;
	static uint32_t x62 = 1623U;
	volatile int32_t x63 = INT32_MIN;
	static int8_t x64 = INT8_MIN;
	static volatile uint32_t t12 = 998081U;

	t12 = (((x61+x62)%x63)*x64);

	if (t12 != 4294759680U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 10U;
	int64_t x66 = -12980137LL;
	uint32_t x67 = 163U;

	t13 = (((x65+x66)%x67)*x68);

	if (t13 != 14208LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -8408833039LL;
	int16_t x70 = -891;
	static int64_t x72 = -466608288090LL;
	int64_t t14 = 15LL;

	t14 = (((x69+x70)%x71)*x72);

	if (t14 != 296296262937150LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x73 = INT8_MIN;
	static uint64_t x74 = 0LLU;
	static int64_t x75 = 10612LL;
	static uint64_t t15 = 7262914905LLU;

	t15 = (((x73+x74)%x75)*x76);

	if (t15 != 18446744073705383900LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x77 = INT32_MIN;
	static volatile uint16_t x78 = 5U;
	int16_t x79 = 15881;
	int8_t x80 = 1;
	volatile int32_t t16 = 1229813;

	t16 = (((x77+x78)%x79)*x80);

	if (t16 != -7180) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x81 = -1;
	volatile int16_t x83 = INT16_MAX;
	uint32_t x84 = UINT32_MAX;
	static volatile uint32_t t17 = 15U;

	t17 = (((x81+x82)%x83)*x84);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x90 = UINT32_MAX;
	volatile int64_t x91 = -1LL;
	static volatile uint8_t x92 = 14U;
	int64_t t18 = 27089936LL;

	t18 = (((x89+x90)%x91)*x92);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = 15562814220521LL;
	static int8_t x94 = INT8_MIN;
	int64_t t19 = 58123857LL;

	t19 = (((x93+x94)%x95)*x96);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x98 = -1020088;
	int64_t x99 = 106121LL;
	volatile uint16_t x100 = 20U;
	volatile int64_t t20 = 43486037589244119LL;

	t20 = (((x97+x98)%x99)*x100);

	if (t20 != -1297680LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x101 = INT16_MIN;
	int16_t x104 = INT16_MIN;
	static volatile uint32_t t21 = 37078U;

	t21 = (((x101+x102)%x103)*x104);

	if (t21 != 2525954048U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = -40;
	uint64_t x106 = 4969028483647307920LLU;
	int32_t x107 = INT32_MIN;
	static int32_t x108 = -500144;

	t22 = (((x105+x106)%x107)*x108);

	if (t22 != 7813405220189130880LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = 6663U;
	static int8_t x110 = INT8_MIN;
	uint16_t x111 = UINT16_MAX;

	t23 = (((x109+x110)%x111)*x112);

	if (t23 != 8736287309271691780LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x117 = INT64_MIN;
	int16_t x118 = 1;
	uint32_t x119 = 9246U;
	int64_t t24 = 1509086LL;

	t24 = (((x117+x118)%x119)*x120);

	if (t24 != -1239098064319LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x121 = -1;
	volatile int32_t x122 = -1;
	uint64_t x123 = 1538886700753142939LLU;
	uint64_t t25 = 13683908936000968LLU;

	t25 = (((x121+x122)%x123)*x124);

	if (t25 != 4119251719055337463LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x125 = 79U;
	uint32_t x126 = 106U;
	volatile int16_t x128 = INT16_MIN;
	volatile uint32_t t26 = 29U;

	t26 = (((x125+x126)%x127)*x128);

	if (t26 != 4288905216U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = 31;
	uint16_t x130 = 27U;
	int32_t x131 = INT32_MIN;
	int32_t t27 = 420;

	t27 = (((x129+x130)%x131)*x132);

	if (t27 != 3801030) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = -1;
	static int8_t x134 = 1;

	t28 = (((x133+x134)%x135)*x136);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x137 = 5717U;
	volatile uint64_t x138 = 23125276665LLU;
	int16_t x140 = -121;
	uint64_t t29 = 11LLU;

	t29 = (((x137+x138)%x139)*x140);

	if (t29 != 18446741275550383394LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x141 = UINT32_MAX;
	int64_t x142 = -1LL;
	int64_t x143 = INT64_MIN;
	int64_t t30 = -19936353897602LL;

	t30 = (((x141+x142)%x143)*x144);

	if (t30 != 545460846338LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x145 = 2187168601LL;
	int8_t x146 = INT8_MIN;
	static uint8_t x148 = 11U;
	volatile int64_t t31 = -83142935LL;

	t31 = (((x145+x146)%x147)*x148);

	if (t31 != 11LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x150 = 40732U;
	int8_t x151 = INT8_MIN;

	t32 = (((x149+x150)%x151)*x152);

	if (t32 != 4289753728U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = -35;
	static int32_t x154 = 29;
	volatile int64_t x155 = 3999185844611215294LL;
	int16_t x156 = INT16_MIN;
	volatile int64_t t33 = 58374283506LL;

	t33 = (((x153+x154)%x155)*x156);

	if (t33 != 196608LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x157 = 5637U;
	static int8_t x158 = INT8_MIN;
	uint64_t t34 = 98408731568LLU;

	t34 = (((x157+x158)%x159)*x160);

	if (t34 != 18446732243222134784LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x161 = INT64_MIN;
	uint8_t x162 = UINT8_MAX;
	uint64_t x163 = 26160273LLU;
	volatile int32_t x164 = INT32_MIN;
	static uint64_t t35 = 24LLU;

	t35 = (((x161+x162)%x163)*x164);

	if (t35 != 18438714288752295936LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x165 = -141;
	int16_t x166 = INT16_MIN;
	int64_t x167 = -1LL;
	uint32_t x168 = UINT32_MAX;
	int64_t t36 = 19LL;

	t36 = (((x165+x166)%x167)*x168);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = INT8_MIN;
	volatile uint8_t x170 = 2U;
	int16_t x172 = INT16_MIN;

	t37 = (((x169+x170)%x171)*x172);

	if (t37 != 4128768LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x173 = 1093822200U;
	int8_t x174 = INT8_MIN;
	static int16_t x175 = 1;
	uint16_t x176 = 77U;
	uint32_t t38 = 62568U;

	t38 = (((x173+x174)%x175)*x176);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t t39 = 139790185197698LLU;

	t39 = (((x177+x178)%x179)*x180);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x186 = UINT16_MAX;
	int16_t x187 = INT16_MAX;
	volatile int64_t x188 = -1LL;

	t40 = (((x185+x186)%x187)*x188);

	if (t40 != 7LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x196 = 11U;
	volatile int64_t t41 = -1777793LL;

	t41 = (((x193+x194)%x195)*x196);

	if (t41 != 23622320106LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x197 = UINT32_MAX;
	int64_t x198 = INT64_MIN;
	int16_t x199 = -1;
	volatile int64_t x200 = -1LL;
	volatile int64_t t42 = 1519621112LL;

	t42 = (((x197+x198)%x199)*x200);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x205 = 483U;
	uint8_t x208 = 1U;
	uint64_t t43 = 70307547727191LLU;

	t43 = (((x205+x206)%x207)*x208);

	if (t43 != 482LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x209 = UINT32_MAX;
	uint8_t x212 = UINT8_MAX;
	volatile int64_t t44 = 605LL;

	t44 = (((x209+x210)%x211)*x212);

	if (t44 != 255LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = INT8_MIN;
	uint32_t x219 = 28U;
	static volatile uint64_t x220 = 26258769262LLU;
	volatile uint64_t t45 = 395066986LLU;

	t45 = (((x217+x218)%x219)*x220);

	if (t45 != 341364000406LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x225 = -1;
	int64_t x226 = INT64_MAX;
	volatile int16_t x228 = INT16_MIN;
	static volatile int64_t t46 = 1428595335919932LL;

	t46 = (((x225+x226)%x227)*x228);

	if (t46 != -196608LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x230 = -1;
	volatile int8_t x231 = -1;
	volatile int8_t x232 = INT8_MIN;
	volatile int32_t t47 = 3783620;

	t47 = (((x229+x230)%x231)*x232);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x233 = INT8_MIN;
	uint8_t x235 = UINT8_MAX;
	volatile uint16_t x236 = 253U;
	int32_t t48 = 295182;

	t48 = (((x233+x234)%x235)*x236);

	if (t48 != -253) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = -2;
	int64_t x238 = -16227606852240LL;
	int16_t x239 = -1;

	t49 = (((x237+x238)%x239)*x240);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x241 = 1700U;
	static volatile uint64_t x242 = UINT64_MAX;
	uint32_t x243 = 1535U;
	volatile uint64_t t50 = 1415LLU;

	t50 = (((x241+x242)%x243)*x244);

	if (t50 != 18446744073709551452LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x245 = 7244U;
	int64_t x246 = 4170567920LL;
	int16_t x247 = -1;
	int16_t x248 = INT16_MIN;
	volatile int64_t t51 = 0LL;

	t51 = (((x245+x246)%x247)*x248);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = 12LL;
	static uint16_t x250 = 1U;
	volatile int32_t x251 = -409953;
	int16_t x252 = -1;
	int64_t t52 = -994009797324LL;

	t52 = (((x249+x250)%x251)*x252);

	if (t52 != -13LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x253 = 2U;
	static volatile int32_t x255 = INT32_MAX;
	int64_t x256 = 31289LL;

	t53 = (((x253+x254)%x255)*x256);

	if (t53 != 63538850396632LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x257 = 925LL;
	int64_t x259 = INT64_MIN;
	int8_t x260 = 6;
	int64_t t54 = 0LL;

	t54 = (((x257+x258)%x259)*x260);

	if (t54 != -154893756LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x261 = 759067U;
	static int32_t x262 = 1572;
	volatile int64_t t55 = 110305070955238187LL;

	t55 = (((x261+x262)%x263)*x264);

	if (t55 != 4130851116974750LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = 9177578;
	int8_t x267 = -1;
	int64_t x268 = INT64_MIN;
	int64_t t56 = 1943711109LL;

	t56 = (((x265+x266)%x267)*x268);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x270 = -22631269;
	int64_t x271 = -1LL;
	int64_t x272 = -219794655077773305LL;

	t57 = (((x269+x270)%x271)*x272);

	if (t57 != 12303913956942338102LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x277 = UINT8_MAX;
	static volatile uint8_t x278 = 31U;
	int8_t x280 = INT8_MIN;

	t58 = (((x277+x278)%x279)*x280);

	if (t58 != -36608) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x282 = 5U;
	volatile int32_t x283 = -8162267;
	int32_t x284 = -1;
	volatile int32_t t59 = -101426;

	t59 = (((x281+x282)%x283)*x284);

	if (t59 != 17) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x294 = 2967;
	int32_t x295 = INT32_MAX;
	uint32_t x296 = UINT32_MAX;

	t60 = (((x293+x294)%x295)*x296);

	if (t60 != 12756052866150LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x297 = 5U;
	volatile int64_t x299 = INT64_MAX;
	int32_t x300 = INT32_MIN;
	volatile int64_t t61 = -19234LL;

	t61 = (((x297+x298)%x299)*x300);

	if (t61 != -12170440520761344LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x301 = INT8_MIN;
	static volatile uint64_t x302 = 323178LLU;
	uint16_t x303 = 294U;
	uint8_t x304 = UINT8_MAX;
	volatile uint64_t t62 = 842456517296LLU;

	t62 = (((x301+x302)%x303)*x304);

	if (t62 != 60690LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x305 = INT8_MIN;
	uint32_t x306 = UINT32_MAX;
	uint32_t x307 = 3802075U;
	static uint8_t x308 = 25U;
	volatile uint32_t t63 = 214905395U;

	t63 = (((x305+x306)%x307)*x308);

	if (t63 != 60612300U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x314 = 2410LLU;
	int16_t x315 = INT16_MIN;

	t64 = (((x313+x314)%x315)*x316);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x318 = -1;
	int16_t x319 = -1;
	static volatile int64_t x320 = 1151LL;

	t65 = (((x317+x318)%x319)*x320);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x325 = -51647674;
	uint8_t x327 = 7U;
	int16_t x328 = INT16_MAX;
	volatile int32_t t66 = -850842558;

	t66 = (((x325+x326)%x327)*x328);

	if (t66 != -163835) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x333 = UINT32_MAX;
	static uint16_t x334 = 2U;
	int64_t x335 = INT64_MAX;
	static int64_t t67 = -65LL;

	t67 = (((x333+x334)%x335)*x336);

	if (t67 != -3675LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x337 = UINT8_MAX;
	int32_t x338 = INT32_MIN;
	uint8_t x339 = 43U;
	uint32_t x340 = 58115U;
	volatile uint32_t t68 = 2127669U;

	t68 = (((x337+x338)%x339)*x340);

	if (t68 != 4294328031U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x341 = INT16_MAX;
	int32_t x342 = INT32_MIN;
	uint8_t x343 = UINT8_MAX;
	static int8_t x344 = INT8_MIN;
	static int32_t t69 = -120700;

	t69 = (((x341+x342)%x343)*x344);

	if (t69 != 128) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x349 = 1327LLU;
	int64_t x350 = INT64_MIN;
	int32_t x351 = INT32_MIN;
	static volatile uint64_t x352 = UINT64_MAX;
	static volatile uint64_t t70 = 1911780256LLU;

	t70 = (((x349+x350)%x351)*x352);

	if (t70 != 9223372036854774481LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x362 = 124U;
	int8_t x363 = INT8_MIN;
	volatile int16_t x364 = 6128;

	t71 = (((x361+x362)%x363)*x364);

	if (t71 != -24512) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x365 = INT8_MAX;
	int8_t x367 = -1;
	volatile int16_t x368 = INT16_MIN;
	int32_t t72 = -1;

	t72 = (((x365+x366)%x367)*x368);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x381 = INT64_MAX;
	volatile int8_t x382 = INT8_MIN;
	int64_t x383 = -15320445972LL;
	int8_t x384 = -1;
	int64_t t73 = 87LL;

	t73 = (((x381+x382)%x383)*x384);

	if (t73 != -10977000875LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x385 = -71880680565300253LL;
	int8_t x386 = INT8_MIN;
	volatile int64_t t74 = -230513735299348LL;

	t74 = (((x385+x386)%x387)*x388);

	if (t74 != 1152LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x389 = 4U;
	volatile int64_t x390 = -1LL;
	int32_t x391 = INT32_MIN;
	int8_t x392 = -1;
	volatile int64_t t75 = 390848940720886286LL;

	t75 = (((x389+x390)%x391)*x392);

	if (t75 != -3LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x393 = UINT8_MAX;
	int64_t x394 = -31365145LL;
	uint8_t x395 = 36U;
	volatile uint32_t x396 = 441U;
	static int64_t t76 = 42627737348124497LL;

	t76 = (((x393+x394)%x395)*x396);

	if (t76 != -14994LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x405 = INT64_MAX;
	volatile int16_t x407 = -1;
	uint64_t x408 = 47083762LLU;
	volatile uint64_t t77 = 32406122833621272LLU;

	t77 = (((x405+x406)%x407)*x408);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x409 = INT64_MIN;
	static volatile uint64_t x410 = 30005578LLU;
	int8_t x411 = INT8_MIN;
	uint32_t x412 = 1582024326U;
	static volatile uint64_t t78 = 257683LLU;

	t78 = (((x409+x410)%x411)*x412);

	if (t78 != 47469554311690428LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x413 = 311807075899164369LLU;
	int32_t x414 = INT32_MIN;
	volatile int8_t x415 = INT8_MIN;
	static int64_t x416 = 687629615063139831LL;
	volatile uint64_t t79 = 137LLU;

	t79 = (((x413+x414)%x415)*x416);

	if (t79 != 16549851270926756007LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x417 = INT8_MAX;
	volatile int32_t x418 = INT32_MIN;
	uint64_t x420 = UINT64_MAX;

	t80 = (((x417+x418)%x419)*x420);

	if (t80 != 2147483521LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x422 = INT64_MAX;
	volatile int32_t x423 = -1;
	static int64_t x424 = INT64_MIN;
	int64_t t81 = -14342347309370588LL;

	t81 = (((x421+x422)%x423)*x424);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x429 = INT16_MIN;
	static int32_t x430 = -1;
	int64_t x431 = -1LL;
	volatile int64_t t82 = -671LL;

	t82 = (((x429+x430)%x431)*x432);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x433 = -1;
	uint16_t x434 = 0U;
	static int32_t x435 = -1;
	static int64_t x436 = INT64_MAX;
	volatile int64_t t83 = -7LL;

	t83 = (((x433+x434)%x435)*x436);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x437 = INT32_MIN;
	volatile uint8_t x438 = UINT8_MAX;
	int16_t x439 = -1;
	int8_t x440 = 0;
	volatile int32_t t84 = 12785601;

	t84 = (((x437+x438)%x439)*x440);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x441 = INT32_MIN;
	int8_t x442 = INT8_MAX;
	int32_t x444 = -1;
	volatile uint32_t t85 = 17U;

	t85 = (((x441+x442)%x443)*x444);

	if (t85 != 4294960193U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x446 = -1LL;
	volatile int8_t x447 = 5;
	volatile int32_t x448 = -1;
	volatile int64_t t86 = 18751100376594LL;

	t86 = (((x445+x446)%x447)*x448);

	if (t86 != -4LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x449 = INT16_MIN;
	uint8_t x450 = 25U;
	int32_t x451 = INT32_MIN;
	volatile int8_t x452 = 24;
	int32_t t87 = 1558;

	t87 = (((x449+x450)%x451)*x452);

	if (t87 != -785832) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x457 = -135732731LL;
	int16_t x458 = -12;
	volatile int32_t x459 = -1407;
	volatile int16_t x460 = 97;

	t88 = (((x457+x458)%x459)*x460);

	if (t88 != -83420LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x467 = 94290758;
	static int8_t x468 = INT8_MIN;

	t89 = (((x465+x466)%x467)*x468);

	if (t89 != 7125386240LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x469 = -1LL;
	int64_t x470 = INT64_MAX;
	uint8_t x471 = 29U;
	uint32_t x472 = 502393U;
	static volatile int64_t t90 = 19LL;

	t90 = (((x469+x470)%x471)*x472);

	if (t90 != 5023930LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x481 = 0;
	static int8_t x483 = INT8_MIN;
	uint8_t x484 = 49U;
	static volatile int32_t t91 = 31;

	t91 = (((x481+x482)%x483)*x484);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x485 = 0U;
	uint64_t x486 = 106444LLU;
	int8_t x488 = -1;
	volatile uint64_t t92 = 1679104326514LLU;

	t92 = (((x485+x486)%x487)*x488);

	if (t92 != 18446744073709445172LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x489 = 366128308638954830LLU;
	int64_t x491 = -513145290466325190LL;
	volatile uint16_t x492 = 1232U;

	t93 = (((x489+x490)%x491)*x492);

	if (t93 != 8348218474163110544LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x493 = INT8_MAX;
	int64_t x494 = INT64_MIN;
	static volatile int64_t x495 = 12LL;
	int64_t x496 = INT64_MAX;
	volatile int64_t t94 = 175020371256320LL;

	t94 = (((x493+x494)%x495)*x496);

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x498 = -1;
	int8_t x499 = INT8_MAX;
	volatile int64_t x500 = -1LL;
	volatile uint64_t t95 = 51009975498174011LLU;

	t95 = (((x497+x498)%x499)*x500);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x501 = UINT64_MAX;
	int16_t x503 = -1;
	volatile uint64_t t96 = 1487582LLU;

	t96 = (((x501+x502)%x503)*x504);

	if (t96 != 18446744073699966396LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x505 = -1;
	static int64_t x506 = 347990LL;
	int8_t x507 = INT8_MIN;
	volatile int16_t x508 = INT16_MIN;

	t97 = (((x505+x506)%x507)*x508);

	if (t97 != -2785280LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x509 = INT16_MIN;
	uint32_t x510 = UINT32_MAX;
	int32_t x511 = -1;
	uint8_t x512 = 36U;
	volatile uint32_t t98 = 2704U;

	t98 = (((x509+x510)%x511)*x512);

	if (t98 != 4293787612U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x513 = -5;
	static volatile int8_t x514 = 0;
	volatile int64_t x515 = INT64_MIN;
	int16_t x516 = 2;
	static int64_t t99 = 44879975466516LL;

	t99 = (((x513+x514)%x515)*x516);

	if (t99 != -10LL) { NG(); } else { ; }
	
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

