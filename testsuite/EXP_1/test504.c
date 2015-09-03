#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x3 = 29;
int64_t x6 = INT64_MIN;
static int8_t x11 = INT8_MIN;
volatile uint8_t x16 = UINT8_MAX;
static volatile int32_t t3 = 253990434;
volatile int16_t x18 = INT16_MAX;
volatile int16_t x26 = -4990;
uint32_t x33 = UINT32_MAX;
volatile int32_t t7 = 10513;
int16_t x44 = -1;
static uint32_t x48 = 65543087U;
int16_t x52 = INT16_MAX;
static int16_t x54 = -1;
int32_t x58 = -3;
int32_t t13 = 0;
static int16_t x65 = -1;
uint32_t x66 = 51095U;
static int32_t t14 = 113766638;
uint8_t x76 = 13U;
int16_t x92 = INT16_MAX;
volatile uint64_t x96 = UINT64_MAX;
int8_t x98 = INT8_MIN;
int16_t x99 = -13258;
int32_t x100 = -1;
uint16_t x101 = 1340U;
int16_t x115 = INT16_MIN;
int64_t x123 = 319666LL;
uint64_t x124 = 1513LLU;
volatile int32_t t27 = 310;
int32_t x125 = -26;
volatile int32_t t28 = -3;
int8_t x129 = -1;
int8_t x130 = -1;
uint32_t x131 = 683089346U;
volatile int16_t x132 = INT16_MIN;
volatile int16_t x139 = INT16_MIN;
volatile uint8_t x150 = 3U;
volatile int16_t x152 = -2;
volatile int32_t t32 = -231548;
static int16_t x154 = INT16_MIN;
uint8_t x162 = 61U;
volatile int32_t t36 = -111857488;
int8_t x177 = 2;
static int32_t x178 = 75318;
volatile int32_t t39 = -7049848;
int64_t x192 = INT64_MAX;
int8_t x209 = INT8_MIN;
uint8_t x221 = 49U;
int16_t x230 = -1;
int64_t x244 = INT64_MIN;
int32_t t51 = -24;
int64_t x251 = INT64_MAX;
static int8_t x260 = INT8_MIN;
volatile uint16_t x261 = UINT16_MAX;
static uint32_t x265 = 8657U;
static int32_t t59 = -107;
int8_t x280 = INT8_MIN;
static int32_t t62 = 674;
static uint16_t x297 = 1802U;
int64_t x301 = -1LL;
volatile int16_t x303 = INT16_MAX;
int32_t t64 = 714487818;
int8_t x312 = -1;
uint64_t x313 = 9591455863356LLU;
static int64_t x315 = 3LL;
uint16_t x330 = UINT16_MAX;
volatile int32_t t72 = -37007266;
uint16_t x344 = 14U;
static uint8_t x348 = UINT8_MAX;
int32_t t74 = 6199098;
static int8_t x359 = INT8_MIN;
uint64_t x360 = 108587225061729839LLU;
int16_t x368 = INT16_MIN;
static volatile int64_t x369 = 4741LL;
int8_t x385 = 6;
volatile int8_t x387 = INT8_MIN;
int8_t x388 = INT8_MIN;
int32_t x391 = -1;
volatile int64_t x392 = INT64_MIN;
volatile int32_t t81 = -924401;
static volatile uint8_t x393 = 23U;
static uint32_t x411 = 2U;
static int16_t x420 = INT16_MIN;
int8_t x425 = -1;
volatile int32_t t89 = 141359;
static int32_t x446 = INT32_MIN;
static uint32_t x447 = UINT32_MAX;
int32_t x458 = 207613396;
static volatile int32_t t92 = -215733257;
int32_t x462 = -366371529;
uint32_t x464 = UINT32_MAX;
uint32_t x465 = 1316731702U;
volatile uint64_t x479 = UINT64_MAX;
int16_t x480 = -6223;


void f0(void) {
	int64_t x1 = 1LL;
	int16_t x2 = INT16_MIN;
	static int16_t x4 = INT16_MAX;
	int32_t t0 = 2916;

	t0 = (((x1*x2)^x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 267570033714021451LLU;
	static uint32_t x7 = 1U;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = 393969763;

	t1 = (((x5*x6)^x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	int64_t x10 = -83642479698318916LL;
	int8_t x12 = INT8_MAX;
	int32_t t2 = -200730778;

	t2 = (((x9*x10)^x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	volatile uint16_t x14 = 4U;
	uint64_t x15 = 16036273LLU;

	t3 = (((x13*x14)^x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 3U;
	int8_t x19 = 0;
	int32_t x20 = -1173;
	int32_t t4 = 1;

	t4 = (((x17*x18)^x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 82737LL;
	uint8_t x22 = 96U;
	static int64_t x23 = 28003813781157LL;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -159826469;

	t5 = (((x21*x22)^x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	volatile uint8_t x27 = 4U;
	int8_t x28 = 3;
	volatile int32_t t6 = -50501;

	t6 = (((x25*x26)^x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = INT8_MIN;
	int64_t x35 = INT64_MIN;
	int64_t x36 = 3LL;

	t7 = (((x33*x34)^x35)<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 0;
	int32_t x38 = INT32_MAX;
	int32_t x39 = 1;
	static int32_t x40 = INT32_MIN;
	volatile int32_t t8 = -1846425;

	t8 = (((x37*x38)^x39)<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1;
	uint32_t x42 = UINT32_MAX;
	static uint8_t x43 = 0U;
	int32_t t9 = 40;

	t9 = (((x41*x42)^x43)<=x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x45 = 5471748446725952699LLU;
	int16_t x46 = 8803;
	int16_t x47 = -1;
	volatile int32_t t10 = 1;

	t10 = (((x45*x46)^x47)<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	int16_t x50 = -681;
	int32_t x51 = 3896335;
	int32_t t11 = -865754;

	t11 = (((x49*x50)^x51)<=x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	static uint16_t x55 = 11U;
	int16_t x56 = 752;
	int32_t t12 = -2;

	t12 = (((x53*x54)^x55)<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = -1LL;
	static uint64_t x59 = UINT64_MAX;
	static int32_t x60 = INT32_MIN;

	t13 = (((x57*x58)^x59)<=x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x67 = UINT32_MAX;
	int32_t x68 = INT32_MIN;

	t14 = (((x65*x66)^x67)<=x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 2U;
	uint32_t x70 = UINT32_MAX;
	volatile uint8_t x71 = 1U;
	uint8_t x72 = 22U;
	volatile int32_t t15 = 606318;

	t15 = (((x69*x70)^x71)<=x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	int64_t x74 = 132479LL;
	int16_t x75 = -238;
	volatile int32_t t16 = -1247407;

	t16 = (((x73*x74)^x75)<=x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	uint8_t x78 = UINT8_MAX;
	uint16_t x79 = 27U;
	int8_t x80 = -26;
	int32_t t17 = 809;

	t17 = (((x77*x78)^x79)<=x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x81 = 1938292748U;
	int16_t x82 = INT16_MIN;
	volatile uint64_t x83 = 120295297157301LLU;
	volatile int8_t x84 = -57;
	int32_t t18 = 111041288;

	t18 = (((x81*x82)^x83)<=x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -1LL;
	static uint16_t x86 = UINT16_MAX;
	int16_t x87 = INT16_MIN;
	int8_t x88 = INT8_MAX;
	int32_t t19 = 3351319;

	t19 = (((x85*x86)^x87)<=x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = 209;
	int8_t x90 = -1;
	volatile int16_t x91 = 5177;
	volatile int32_t t20 = -301;

	t20 = (((x89*x90)^x91)<=x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = 34887073050530LLU;
	int8_t x94 = -1;
	int16_t x95 = INT16_MIN;
	volatile int32_t t21 = 24398;

	t21 = (((x93*x94)^x95)<=x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MAX;
	int32_t t22 = 242409161;

	t22 = (((x97*x98)^x99)<=x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x102 = -11133886LL;
	int32_t x103 = -905536;
	static uint16_t x104 = UINT16_MAX;
	volatile int32_t t23 = -527593;

	t23 = (((x101*x102)^x103)<=x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = 593;
	int8_t x110 = INT8_MIN;
	static uint8_t x111 = UINT8_MAX;
	int64_t x112 = INT64_MIN;
	volatile int32_t t24 = 133897;

	t24 = (((x109*x110)^x111)<=x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x113 = UINT32_MAX;
	uint32_t x114 = 52U;
	uint8_t x116 = 6U;
	int32_t t25 = 14913;

	t25 = (((x113*x114)^x115)<=x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x117 = -18;
	int32_t x118 = -1;
	int8_t x119 = 7;
	int8_t x120 = INT8_MIN;
	static int32_t t26 = -788655732;

	t26 = (((x117*x118)^x119)<=x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = 31159263LLU;
	uint64_t x122 = 5177871746392LLU;

	t27 = (((x121*x122)^x123)<=x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x126 = 31;
	int8_t x127 = INT8_MAX;
	int32_t x128 = -1;

	t28 = (((x125*x126)^x127)<=x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t t29 = 51864638;

	t29 = (((x129*x130)^x131)<=x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = 7056;
	volatile int16_t x138 = 1;
	static uint32_t x140 = UINT32_MAX;
	int32_t t30 = -240;

	t30 = (((x137*x138)^x139)<=x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x141 = INT16_MAX;
	int16_t x142 = 2526;
	int16_t x143 = INT16_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t31 = -8;

	t31 = (((x141*x142)^x143)<=x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = -1;
	int16_t x151 = 14412;

	t32 = (((x149*x150)^x151)<=x152);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = -6390;
	int16_t x155 = -6997;
	int64_t x156 = INT64_MIN;
	volatile int32_t t33 = -509;

	t33 = (((x153*x154)^x155)<=x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = 0;
	static int64_t x158 = INT64_MAX;
	volatile int64_t x159 = INT64_MIN;
	volatile int16_t x160 = INT16_MIN;
	volatile int32_t t34 = -2117757;

	t34 = (((x157*x158)^x159)<=x160);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = INT16_MIN;
	int8_t x163 = -1;
	volatile int8_t x164 = -1;
	volatile int32_t t35 = 175883;

	t35 = (((x161*x162)^x163)<=x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = 10849U;
	uint64_t x166 = 46LLU;
	static volatile int64_t x167 = -1326LL;
	int8_t x168 = INT8_MIN;

	t36 = (((x165*x166)^x167)<=x168);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x169 = UINT8_MAX;
	int32_t x170 = -1;
	static volatile int32_t x171 = INT32_MIN;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t37 = -772124354;

	t37 = (((x169*x170)^x171)<=x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x179 = 10442794U;
	int16_t x180 = INT16_MIN;
	volatile int32_t t38 = 55975945;

	t38 = (((x177*x178)^x179)<=x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MIN;
	volatile int16_t x182 = INT16_MAX;
	volatile uint32_t x183 = UINT32_MAX;
	uint64_t x184 = 1665150182876633329LLU;

	t39 = (((x181*x182)^x183)<=x184);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = INT32_MAX;
	uint32_t x186 = 215090U;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = -1LL;
	int32_t t40 = -1439;

	t40 = (((x185*x186)^x187)<=x188);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x189 = INT8_MIN;
	uint16_t x190 = 83U;
	int64_t x191 = -1LL;
	int32_t t41 = -1;

	t41 = (((x189*x190)^x191)<=x192);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = 3U;
	uint16_t x194 = UINT16_MAX;
	int64_t x195 = 165028548428738LL;
	int16_t x196 = 3299;
	volatile int32_t t42 = 0;

	t42 = (((x193*x194)^x195)<=x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x205 = INT8_MAX;
	int64_t x206 = 3913705LL;
	int16_t x207 = INT16_MIN;
	static volatile int64_t x208 = INT64_MAX;
	int32_t t43 = -321;

	t43 = (((x205*x206)^x207)<=x208);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x210 = 7;
	int8_t x211 = -1;
	int8_t x212 = INT8_MIN;
	int32_t t44 = -68;

	t44 = (((x209*x210)^x211)<=x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x217 = UINT16_MAX;
	int8_t x218 = 1;
	int64_t x219 = -1LL;
	int8_t x220 = INT8_MIN;
	int32_t t45 = -1667;

	t45 = (((x217*x218)^x219)<=x220);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x222 = -1LL;
	volatile uint64_t x223 = 10423LLU;
	int64_t x224 = -72608554818LL;
	volatile int32_t t46 = 37097083;

	t46 = (((x221*x222)^x223)<=x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x225 = INT32_MAX;
	static uint32_t x226 = UINT32_MAX;
	volatile int8_t x227 = -15;
	volatile int64_t x228 = 369LL;
	static int32_t t47 = 1062574379;

	t47 = (((x225*x226)^x227)<=x228);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;
	int32_t t48 = 161320840;

	t48 = (((x229*x230)^x231)<=x232);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x233 = 1141U;
	int8_t x234 = 0;
	int64_t x235 = INT64_MAX;
	int16_t x236 = -1;
	static volatile int32_t t49 = -20;

	t49 = (((x233*x234)^x235)<=x236);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x237 = 1;
	int8_t x238 = INT8_MIN;
	uint32_t x239 = UINT32_MAX;
	static int32_t x240 = -1;
	volatile int32_t t50 = 9;

	t50 = (((x237*x238)^x239)<=x240);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = INT16_MAX;
	int16_t x242 = -1;
	uint8_t x243 = 5U;

	t51 = (((x241*x242)^x243)<=x244);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x245 = 3591U;
	volatile int32_t x246 = 254458965;
	int8_t x247 = -1;
	int64_t x248 = INT64_MIN;
	static volatile int32_t t52 = 6;

	t52 = (((x245*x246)^x247)<=x248);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = INT16_MIN;
	int8_t x250 = INT8_MIN;
	int16_t x252 = INT16_MAX;
	int32_t t53 = -756215;

	t53 = (((x249*x250)^x251)<=x252);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x253 = INT16_MIN;
	uint64_t x254 = 154409414344223LLU;
	int64_t x255 = INT64_MIN;
	volatile uint64_t x256 = 1051131644LLU;
	volatile int32_t t54 = -252550;

	t54 = (((x253*x254)^x255)<=x256);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x257 = -1LL;
	int32_t x258 = -1;
	int16_t x259 = -1;
	int32_t t55 = 3560622;

	t55 = (((x257*x258)^x259)<=x260);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x262 = -1;
	int32_t x263 = INT32_MAX;
	int32_t x264 = INT32_MIN;
	int32_t t56 = -1;

	t56 = (((x261*x262)^x263)<=x264);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x266 = INT16_MAX;
	volatile int64_t x267 = INT64_MIN;
	int64_t x268 = INT64_MIN;
	static int32_t t57 = -95391;

	t57 = (((x265*x266)^x267)<=x268);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x269 = 660U;
	int32_t x270 = -23888;
	int32_t x271 = INT32_MAX;
	uint16_t x272 = 0U;
	int32_t t58 = -108030;

	t58 = (((x269*x270)^x271)<=x272);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x273 = INT8_MIN;
	uint64_t x274 = 47LLU;
	int16_t x275 = -506;
	int8_t x276 = INT8_MIN;

	t59 = (((x273*x274)^x275)<=x276);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x277 = 657444095U;
	uint8_t x278 = 19U;
	uint8_t x279 = 3U;
	static volatile int32_t t60 = 1;

	t60 = (((x277*x278)^x279)<=x280);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x281 = 1U;
	static int16_t x282 = INT16_MAX;
	int16_t x283 = INT16_MIN;
	int16_t x284 = -1;
	volatile int32_t t61 = -164351;

	t61 = (((x281*x282)^x283)<=x284);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x293 = 138102864LLU;
	uint8_t x294 = 2U;
	static uint32_t x295 = 540329276U;
	int16_t x296 = INT16_MIN;

	t62 = (((x293*x294)^x295)<=x296);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x298 = 5LL;
	static int8_t x299 = INT8_MIN;
	int16_t x300 = INT16_MIN;
	int32_t t63 = -247999749;

	t63 = (((x297*x298)^x299)<=x300);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x302 = -2;
	uint16_t x304 = 5856U;

	t64 = (((x301*x302)^x303)<=x304);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x305 = 1U;
	int64_t x306 = INT64_MIN;
	volatile int16_t x307 = 62;
	int8_t x308 = INT8_MIN;
	int32_t t65 = 598892065;

	t65 = (((x305*x306)^x307)<=x308);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x309 = 17U;
	static int8_t x310 = 13;
	int64_t x311 = INT64_MIN;
	volatile int32_t t66 = 2083137;

	t66 = (((x309*x310)^x311)<=x312);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x314 = -1LL;
	int8_t x316 = 58;
	int32_t t67 = 22034592;

	t67 = (((x313*x314)^x315)<=x316);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = 8253736LL;
	int8_t x318 = 18;
	volatile uint8_t x319 = UINT8_MAX;
	volatile int64_t x320 = -1LL;
	volatile int32_t t68 = 698760696;

	t68 = (((x317*x318)^x319)<=x320);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x321 = 206340211U;
	volatile uint8_t x322 = UINT8_MAX;
	uint32_t x323 = 65U;
	uint64_t x324 = 2192660193011672LLU;
	int32_t t69 = 121919;

	t69 = (((x321*x322)^x323)<=x324);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = -1;
	uint32_t x326 = 1697608385U;
	int32_t x327 = INT32_MIN;
	int64_t x328 = -1LL;
	volatile int32_t t70 = -2;

	t70 = (((x325*x326)^x327)<=x328);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x329 = 3698488838LLU;
	volatile uint64_t x331 = 14347147259086LLU;
	static uint64_t x332 = 1564655LLU;
	static volatile int32_t t71 = 442;

	t71 = (((x329*x330)^x331)<=x332);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x333 = INT64_MAX;
	static volatile int16_t x334 = 0;
	int8_t x335 = -10;
	volatile int16_t x336 = INT16_MAX;

	t72 = (((x333*x334)^x335)<=x336);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x341 = -1;
	int8_t x342 = INT8_MAX;
	volatile uint32_t x343 = 1U;
	int32_t t73 = 209534823;

	t73 = (((x341*x342)^x343)<=x344);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x345 = 12274508LL;
	uint8_t x346 = 23U;
	uint8_t x347 = 6U;

	t74 = (((x345*x346)^x347)<=x348);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x357 = -2051643712408777674LL;
	volatile uint64_t x358 = UINT64_MAX;
	volatile int32_t t75 = -414359003;

	t75 = (((x357*x358)^x359)<=x360);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x365 = -1LL;
	int32_t x366 = 16433327;
	static int16_t x367 = INT16_MAX;
	volatile int32_t t76 = 4911735;

	t76 = (((x365*x366)^x367)<=x368);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x370 = UINT64_MAX;
	uint64_t x371 = 1293673LLU;
	int16_t x372 = INT16_MIN;
	volatile int32_t t77 = 1552907;

	t77 = (((x369*x370)^x371)<=x372);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x373 = UINT32_MAX;
	volatile int8_t x374 = INT8_MAX;
	int16_t x375 = -604;
	int16_t x376 = -44;
	int32_t t78 = 75;

	t78 = (((x373*x374)^x375)<=x376);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x381 = INT8_MIN;
	uint8_t x382 = 17U;
	int32_t x383 = INT32_MIN;
	uint64_t x384 = 1676084016LLU;
	volatile int32_t t79 = 1015859;

	t79 = (((x381*x382)^x383)<=x384);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x386 = 0;
	int32_t t80 = 1;

	t80 = (((x385*x386)^x387)<=x388);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x389 = INT8_MIN;
	volatile int64_t x390 = -1LL;

	t81 = (((x389*x390)^x391)<=x392);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x394 = INT8_MIN;
	uint8_t x395 = 28U;
	static int32_t x396 = -1;
	static int32_t t82 = 518213848;

	t82 = (((x393*x394)^x395)<=x396);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x397 = -1LL;
	volatile uint8_t x398 = 7U;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = UINT8_MAX;
	static int32_t t83 = -23787672;

	t83 = (((x397*x398)^x399)<=x400);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x401 = 5LLU;
	int64_t x402 = 114320423LL;
	int32_t x403 = INT32_MIN;
	volatile int64_t x404 = 58487376746LL;
	int32_t t84 = -911;

	t84 = (((x401*x402)^x403)<=x404);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x409 = INT8_MIN;
	int8_t x410 = 0;
	static uint64_t x412 = 2035995LLU;
	static volatile int32_t t85 = -1731;

	t85 = (((x409*x410)^x411)<=x412);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x413 = 86506386U;
	int32_t x414 = INT32_MIN;
	int8_t x415 = -2;
	volatile int8_t x416 = -1;
	int32_t t86 = 424;

	t86 = (((x413*x414)^x415)<=x416);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x417 = INT16_MIN;
	static volatile int16_t x418 = INT16_MAX;
	uint32_t x419 = UINT32_MAX;
	volatile int32_t t87 = 13;

	t87 = (((x417*x418)^x419)<=x420);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x426 = INT32_MAX;
	int32_t x427 = 343671949;
	int32_t x428 = INT32_MIN;
	volatile int32_t t88 = -4;

	t88 = (((x425*x426)^x427)<=x428);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x433 = UINT64_MAX;
	int8_t x434 = INT8_MAX;
	int64_t x435 = -21LL;
	volatile int16_t x436 = 132;

	t89 = (((x433*x434)^x435)<=x436);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x445 = UINT32_MAX;
	int8_t x448 = INT8_MIN;
	volatile int32_t t90 = -240;

	t90 = (((x445*x446)^x447)<=x448);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x449 = 5644;
	uint64_t x450 = 317LLU;
	int64_t x451 = INT64_MIN;
	int16_t x452 = 11;
	volatile int32_t t91 = -1671558;

	t91 = (((x449*x450)^x451)<=x452);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x457 = UINT32_MAX;
	int8_t x459 = INT8_MIN;
	static uint16_t x460 = UINT16_MAX;

	t92 = (((x457*x458)^x459)<=x460);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x461 = -1;
	int64_t x463 = INT64_MAX;
	volatile int32_t t93 = -87445;

	t93 = (((x461*x462)^x463)<=x464);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x466 = INT16_MIN;
	uint8_t x467 = 5U;
	volatile int16_t x468 = -582;
	volatile int32_t t94 = -41870896;

	t94 = (((x465*x466)^x467)<=x468);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x469 = UINT16_MAX;
	uint8_t x470 = 12U;
	int32_t x471 = INT32_MIN;
	int8_t x472 = 2;
	volatile int32_t t95 = 88;

	t95 = (((x469*x470)^x471)<=x472);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x473 = 3619;
	int32_t x474 = -205;
	int8_t x475 = INT8_MIN;
	static uint16_t x476 = 50U;
	static int32_t t96 = 11;

	t96 = (((x473*x474)^x475)<=x476);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x477 = -14246;
	int16_t x478 = 6;
	volatile int32_t t97 = -120;

	t97 = (((x477*x478)^x479)<=x480);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x481 = 20LLU;
	volatile int32_t x482 = INT32_MIN;
	int64_t x483 = 562982950LL;
	int32_t x484 = -58;
	volatile int32_t t98 = 1;

	t98 = (((x481*x482)^x483)<=x484);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x485 = -3302;
	int16_t x486 = INT16_MIN;
	int16_t x487 = 1;
	uint64_t x488 = UINT64_MAX;
	static volatile int32_t t99 = 12949;

	t99 = (((x485*x486)^x487)<=x488);

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

