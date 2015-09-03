#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x2 = 321LLU;
static uint8_t x4 = UINT8_MAX;
uint64_t t0 = 28LLU;
int32_t x9 = 5;
int16_t x18 = -5;
int8_t x20 = INT8_MAX;
volatile int64_t x30 = -4159329448702249LL;
volatile int32_t t4 = -1;
static volatile uint32_t x38 = UINT32_MAX;
int16_t x51 = -1;
int8_t x70 = -1;
uint64_t x76 = 9631162101133LLU;
volatile int16_t x84 = -786;
uint8_t x85 = 2U;
volatile uint64_t t15 = 175LLU;
int8_t x106 = -1;
static uint16_t x112 = 97U;
volatile uint32_t t18 = 752530634U;
int16_t x116 = INT16_MIN;
volatile int32_t x118 = -1;
static volatile uint16_t x126 = UINT16_MAX;
volatile uint32_t t21 = 95U;
volatile uint32_t x130 = UINT32_MAX;
volatile int32_t x131 = INT32_MIN;
volatile int32_t x137 = INT32_MIN;
static int32_t x140 = 8741;
int32_t x157 = -5577703;
int16_t x161 = INT16_MIN;
uint8_t x164 = UINT8_MAX;
uint32_t x165 = UINT32_MAX;
volatile int8_t x170 = INT8_MAX;
uint8_t x174 = 3U;
uint32_t t29 = 313951U;
int64_t x177 = INT64_MAX;
static uint16_t x183 = 165U;
uint64_t t31 = 2LLU;
int64_t x185 = INT64_MIN;
uint16_t x186 = UINT16_MAX;
static volatile int32_t x188 = INT32_MIN;
volatile int64_t t32 = 242603LL;
static int64_t x194 = -1LL;
static volatile int64_t t33 = 3LL;
volatile uint64_t t34 = 8280190932908084LLU;
volatile int64_t t35 = -92516986LL;
int64_t t36 = -1521900LL;
static volatile uint32_t t38 = 204484687U;
int16_t x225 = INT16_MIN;
volatile int32_t x226 = -1;
int16_t x227 = -231;
int32_t x228 = 1962219;
volatile uint32_t x238 = UINT32_MAX;
volatile int16_t x242 = -1;
volatile uint32_t t41 = 71U;
volatile int8_t x246 = INT8_MAX;
volatile uint64_t x254 = 12401109880LLU;
int16_t x260 = INT16_MIN;
volatile uint64_t t44 = 92531420172509894LLU;
volatile int8_t x265 = INT8_MIN;
uint16_t x266 = 32114U;
int32_t x273 = INT32_MIN;
static volatile uint64_t x276 = UINT64_MAX;
int8_t x284 = INT8_MIN;
int64_t x287 = INT64_MAX;
static int64_t t48 = 11208348LL;
volatile int16_t x300 = INT16_MIN;
int32_t t50 = -41;
uint16_t x302 = 52U;
volatile uint8_t x317 = 3U;
int32_t t53 = 429829;
int64_t x325 = -124057508581452835LL;
uint16_t x327 = UINT16_MAX;
uint8_t x329 = 4U;
int16_t x331 = INT16_MIN;
int32_t x344 = INT32_MAX;
int16_t x348 = INT16_MAX;
int16_t x357 = 43;
static int16_t x358 = 4305;
volatile uint64_t x359 = UINT64_MAX;
volatile uint16_t x364 = 1U;
uint16_t x367 = 47U;
volatile uint16_t x374 = 24U;
int64_t t63 = 127615155242875967LL;
uint8_t x385 = UINT8_MAX;
uint8_t x389 = 2U;
int8_t x391 = INT8_MIN;
volatile int64_t t67 = -15911544557740LL;
int32_t t68 = -1943580;
static int16_t x408 = -15;
uint64_t x418 = UINT64_MAX;
int8_t x420 = INT8_MAX;
int32_t x422 = INT32_MAX;
int16_t x432 = INT16_MIN;
uint8_t x435 = UINT8_MAX;
int8_t x445 = -1;
uint16_t x447 = 972U;
int32_t x448 = 650706;
int64_t x449 = -833391888630384LL;
int16_t x450 = -528;
int16_t x455 = INT16_MIN;
volatile int64_t t79 = 4252457LL;
volatile int64_t t80 = -566602707896071844LL;
volatile int16_t x471 = 69;
static int32_t x503 = INT32_MIN;
volatile uint64_t x514 = UINT64_MAX;
int8_t x518 = 20;
int32_t x525 = INT32_MIN;
volatile uint64_t t90 = 10682454266894484LLU;
static int16_t x555 = INT16_MIN;
int16_t x561 = -9;
volatile int16_t x565 = INT16_MIN;
uint32_t x572 = UINT32_MAX;
uint64_t x574 = 428365351458152LLU;
int64_t x576 = -1LL;
uint8_t x578 = UINT8_MAX;
int64_t x583 = -1LL;
int64_t t99 = -2503469LL;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	uint8_t x3 = 5U;

	t0 = ((x1%(x2&x3))*x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x10 = -1;
	int64_t x11 = -1LL;
	int64_t x12 = 2329156553LL;
	volatile int64_t t1 = 3159542769729113899LL;

	t1 = ((x9%(x10&x11))*x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x17 = INT8_MIN;
	uint8_t x19 = 5U;
	int32_t t2 = 1;

	t2 = ((x17%(x18&x19))*x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x29 = 28069U;
	uint32_t x31 = 422918U;
	int8_t x32 = -1;
	int64_t t3 = 498736536849LL;

	t3 = ((x29%(x30&x31))*x32);

	if (t3 != -28069LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = INT32_MAX;
	volatile int32_t x34 = -1;
	static int8_t x35 = 35;
	int8_t x36 = -3;

	t4 = ((x33%(x34&x35))*x36);

	if (t4 != -66) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x37 = UINT8_MAX;
	int16_t x39 = INT16_MAX;
	int64_t x40 = -1LL;
	volatile int64_t t5 = 2586083435LL;

	t5 = ((x37%(x38&x39))*x40);

	if (t5 != -255LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x41 = 50469186U;
	uint16_t x42 = 58U;
	int8_t x43 = INT8_MAX;
	static uint8_t x44 = 0U;
	volatile uint32_t t6 = 22932U;

	t6 = ((x41%(x42&x43))*x44);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = -18807951;
	uint8_t x46 = UINT8_MAX;
	volatile int32_t x47 = -504;
	int8_t x48 = INT8_MIN;
	volatile int32_t t7 = 620;

	t7 = ((x45%(x46&x47))*x48);

	if (t7 != 896) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x49 = -1;
	volatile int8_t x50 = -6;
	static uint64_t x52 = UINT64_MAX;
	static uint64_t t8 = 15917581358LLU;

	t8 = ((x49%(x50&x51))*x52);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = 1;
	uint16_t x54 = 9U;
	uint8_t x55 = UINT8_MAX;
	uint32_t x56 = 954U;
	volatile uint32_t t9 = 821U;

	t9 = ((x53%(x54&x55))*x56);

	if (t9 != 954U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x65 = 6012686192625363688LLU;
	static int64_t x66 = INT64_MIN;
	volatile int64_t x67 = INT64_MIN;
	int32_t x68 = -1;
	uint64_t t10 = 1418LLU;

	t10 = ((x65%(x66&x67))*x68);

	if (t10 != 12434057881084187928LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x69 = 6;
	int32_t x71 = 8590554;
	uint64_t x72 = UINT64_MAX;
	uint64_t t11 = 6549225LLU;

	t11 = ((x69%(x70&x71))*x72);

	if (t11 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x73 = INT64_MIN;
	int8_t x74 = -14;
	volatile int32_t x75 = INT32_MIN;
	volatile uint64_t t12 = 2438733921LLU;

	t12 = ((x73%(x74&x75))*x76);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x77 = 26645816U;
	int64_t x78 = INT64_MAX;
	volatile uint64_t x79 = UINT64_MAX;
	int8_t x80 = INT8_MIN;
	volatile uint64_t t13 = 279151503630503338LLU;

	t13 = ((x77%(x78&x79))*x80);

	if (t13 != 18446744070298887168LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x81 = 3957762113579160LLU;
	volatile int8_t x82 = -19;
	uint64_t x83 = UINT64_MAX;
	volatile uint64_t t14 = 13778035LLU;

	t14 = ((x81%(x82&x83))*x84);

	if (t14 != 15335943052436331856LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x86 = INT8_MIN;
	volatile uint64_t x87 = UINT64_MAX;
	uint16_t x88 = UINT16_MAX;

	t15 = ((x85%(x86&x87))*x88);

	if (t15 != 131070LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = 52544;
	int8_t x94 = INT8_MIN;
	int16_t x95 = -1;
	int64_t x96 = -2855926780370537LL;
	volatile int64_t t16 = 190123LL;

	t16 = ((x93%(x94&x95))*x96);

	if (t16 != -182779313943714368LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x105 = 26;
	static int32_t x107 = INT32_MAX;
	uint64_t x108 = 75LLU;
	volatile uint64_t t17 = 179314LLU;

	t17 = ((x105%(x106&x107))*x108);

	if (t17 != 1950LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x109 = -1;
	uint16_t x110 = UINT16_MAX;
	static uint32_t x111 = 14261U;

	t18 = ((x109%(x110&x111))*x112);

	if (t18 != 1013359U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x113 = -9334;
	static int32_t x114 = 28806;
	static volatile int64_t x115 = -114423643LL;
	int64_t t19 = -2084473526514LL;

	t19 = ((x113%(x114&x115))*x116);

	if (t19 != 3080192LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x117 = INT64_MIN;
	int32_t x119 = -1;
	static volatile uint8_t x120 = 11U;
	volatile int64_t t20 = 10199LL;

	t20 = ((x117%(x118&x119))*x120);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x125 = -84;
	uint32_t x127 = 62U;
	int8_t x128 = INT8_MIN;

	t21 = ((x125%(x126&x127))*x128);

	if (t21 != 4294961664U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x129 = 16249188LL;
	uint8_t x132 = 0U;
	static int64_t t22 = 30107158105330LL;

	t22 = ((x129%(x130&x131))*x132);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x133 = INT32_MIN;
	uint32_t x134 = 635542U;
	static uint32_t x135 = 976098U;
	volatile int32_t x136 = -1;
	volatile uint32_t t23 = 673U;

	t23 = ((x133%(x134&x135))*x136);

	if (t23 != 4294789292U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x138 = 1U;
	uint8_t x139 = UINT8_MAX;
	static int32_t t24 = -9;

	t24 = ((x137%(x138&x139))*x140);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x158 = 108;
	int8_t x159 = -1;
	static uint64_t x160 = 1476115698901457LLU;
	uint64_t t25 = 102540263357LLU;

	t25 = ((x157%(x158&x159))*x160);

	if (t25 != 18383271098656788965LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x162 = INT16_MIN;
	volatile int64_t x163 = -1LL;
	static int64_t t26 = 2LL;

	t26 = ((x161%(x162&x163))*x164);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x166 = INT8_MIN;
	int32_t x167 = 3623594;
	int32_t x168 = INT32_MIN;
	static uint32_t t27 = 13U;

	t27 = ((x165%(x166&x167))*x168);

	if (t27 != 2147483648U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x169 = UINT16_MAX;
	int16_t x171 = -516;
	volatile int8_t x172 = -7;
	static int32_t t28 = 1;

	t28 = ((x169%(x170&x171))*x172);

	if (t28 != -441) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x173 = INT16_MIN;
	uint32_t x175 = 1111U;
	uint16_t x176 = 74U;

	t29 = ((x173%(x174&x175))*x176);

	if (t29 != 148U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x178 = INT16_MAX;
	uint16_t x179 = 352U;
	static int32_t x180 = INT32_MAX;
	static volatile int64_t t30 = -15161856003851LL;

	t30 = ((x177%(x178&x179))*x180);

	if (t30 != 204010946465LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x181 = 0;
	uint64_t x182 = 1698800774253LLU;
	volatile int32_t x184 = INT32_MIN;

	t31 = ((x181%(x182&x183))*x184);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x187 = UINT32_MAX;

	t32 = ((x185%(x186&x187))*x188);

	if (t32 != 70368744177664LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x193 = INT64_MAX;
	uint32_t x195 = UINT32_MAX;
	volatile uint32_t x196 = 1631587U;

	t33 = ((x193%(x194&x195))*x196);

	if (t33 != 3503806401157789LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x201 = 158U;
	static int64_t x202 = INT64_MAX;
	uint64_t x203 = 46952812LLU;
	volatile int32_t x204 = INT32_MIN;

	t34 = ((x201%(x202&x203))*x204);

	if (t34 != 18446743734407135232LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x205 = -1LL;
	int8_t x206 = 25;
	uint16_t x207 = 927U;
	int64_t x208 = -1LL;

	t35 = ((x205%(x206&x207))*x208);

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = 128943LL;
	uint16_t x211 = 467U;
	uint16_t x212 = 1977U;

	t36 = ((x209%(x210&x211))*x212);

	if (t36 != -270849LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x217 = UINT8_MAX;
	static uint8_t x218 = UINT8_MAX;
	volatile int64_t x219 = -1LL;
	int64_t x220 = INT64_MAX;
	volatile int64_t t37 = -793485850245052LL;

	t37 = ((x217%(x218&x219))*x220);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x221 = 3U;
	static uint16_t x222 = 2644U;
	int8_t x223 = -62;
	static uint32_t x224 = 6869U;

	t38 = ((x221%(x222&x223))*x224);

	if (t38 != 20607U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t t39 = -17725;

	t39 = ((x225%(x226&x227))*x228);

	if (t39 != -386557143) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x237 = 121U;
	volatile int8_t x239 = 61;
	uint8_t x240 = UINT8_MAX;
	uint32_t t40 = 858U;

	t40 = ((x237%(x238&x239))*x240);

	if (t40 != 15300U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x241 = 21U;
	static volatile int16_t x243 = INT16_MAX;
	volatile uint32_t x244 = 1975486546U;

	t41 = ((x241%(x242&x243))*x244);

	if (t41 != 2830511802U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x245 = INT64_MAX;
	uint32_t x247 = 1399528U;
	volatile uint8_t x248 = UINT8_MAX;
	static volatile int64_t t42 = 7819LL;

	t42 = ((x245%(x246&x247))*x248);

	if (t42 != 1785LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x253 = 747U;
	int32_t x255 = -1;
	static int32_t x256 = INT32_MIN;
	uint64_t t43 = 225LLU;

	t43 = ((x253%(x254&x255))*x256);

	if (t43 != 18446742469539266560LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x257 = -1;
	uint64_t x258 = 4168121389277LLU;
	uint16_t x259 = 8U;

	t44 = ((x257%(x258&x259))*x260);

	if (t44 != 18446744073709322240LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x267 = INT32_MAX;
	int64_t x268 = -1LL;
	int64_t t45 = -1LL;

	t45 = ((x265%(x266&x267))*x268);

	if (t45 != 128LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x274 = UINT16_MAX;
	int8_t x275 = INT8_MIN;
	uint64_t t46 = 1924LLU;

	t46 = ((x273%(x274&x275))*x276);

	if (t46 != 8192LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x281 = 191U;
	static int16_t x282 = -33;
	int64_t x283 = INT64_MIN;
	volatile int64_t t47 = -337671380LL;

	t47 = ((x281%(x282&x283))*x284);

	if (t47 != -24448LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x285 = 105;
	volatile int16_t x286 = INT16_MAX;
	int16_t x288 = INT16_MIN;

	t48 = ((x285%(x286&x287))*x288);

	if (t48 != -3440640LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x293 = -1;
	int16_t x294 = INT16_MAX;
	int8_t x295 = INT8_MIN;
	static volatile int32_t x296 = -27;
	volatile int32_t t49 = -803;

	t49 = ((x293%(x294&x295))*x296);

	if (t49 != 27) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x297 = 0;
	int32_t x298 = INT32_MIN;
	int32_t x299 = INT32_MIN;

	t50 = ((x297%(x298&x299))*x300);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x301 = INT16_MIN;
	int64_t x303 = 1856128096527017LL;
	static uint16_t x304 = 2707U;
	volatile int64_t t51 = -1LL;

	t51 = ((x301%(x302&x303))*x304);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x305 = INT16_MIN;
	int64_t x306 = 15451822551942856LL;
	static uint64_t x307 = 2127659725351301140LLU;
	int32_t x308 = -1;
	volatile uint64_t t52 = 1591LLU;

	t52 = ((x305%(x306&x307))*x308);

	if (t52 != 18444854509726367744LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x318 = -8038811;
	int8_t x319 = INT8_MIN;
	int8_t x320 = -41;

	t53 = ((x317%(x318&x319))*x320);

	if (t53 != -123) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x326 = 3577U;
	int16_t x328 = 11783;
	volatile int64_t t54 = -26LL;

	t54 = ((x325%(x326&x327))*x328);

	if (t54 != -39143126LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x330 = INT8_MIN;
	volatile uint32_t x332 = 22531714U;
	volatile uint32_t t55 = 152U;

	t55 = ((x329%(x330&x331))*x332);

	if (t55 != 90126856U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x341 = 13U;
	int64_t x342 = -1LL;
	volatile int8_t x343 = INT8_MIN;
	int64_t t56 = -2616459995LL;

	t56 = ((x341%(x342&x343))*x344);

	if (t56 != 27917287411LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x345 = INT16_MIN;
	volatile uint8_t x346 = 30U;
	static int16_t x347 = -259;
	int32_t t57 = -886015;

	t57 = ((x345%(x346&x347))*x348);

	if (t57 != -262136) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x349 = INT64_MIN;
	uint8_t x350 = 7U;
	int64_t x351 = -2583870498521LL;
	volatile uint8_t x352 = UINT8_MAX;
	int64_t t58 = -22197311674LL;

	t58 = ((x349%(x350&x351))*x352);

	if (t58 != -255LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x353 = 4294297650098967LLU;
	volatile uint16_t x354 = 2U;
	volatile int64_t x355 = 533981215LL;
	volatile int32_t x356 = -1;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = ((x353%(x354&x355))*x356);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x360 = 650640139;
	volatile uint64_t t60 = 414LLU;

	t60 = ((x357%(x358&x359))*x360);

	if (t60 != 27977525977LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x361 = INT16_MAX;
	uint64_t x362 = 3935955990413LLU;
	int16_t x363 = INT16_MAX;
	volatile uint64_t t61 = 127409678007371LLU;

	t61 = ((x361%(x362&x363))*x364);

	if (t61 != 4325LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x365 = INT64_MIN;
	volatile uint8_t x366 = 84U;
	int32_t x368 = INT32_MAX;
	int64_t t62 = 4593235551575103447LL;

	t62 = ((x365%(x366&x367))*x368);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x373 = INT64_MIN;
	uint32_t x375 = 22365309U;
	int32_t x376 = -1;

	t63 = ((x373%(x374&x375))*x376);

	if (t63 != 8LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x381 = 0;
	static uint8_t x382 = UINT8_MAX;
	volatile int8_t x383 = INT8_MIN;
	int64_t x384 = 463LL;
	volatile int64_t t64 = 0LL;

	t64 = ((x381%(x382&x383))*x384);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x386 = 517167358869LLU;
	volatile uint16_t x387 = UINT16_MAX;
	volatile uint16_t x388 = 954U;
	volatile uint64_t t65 = 344351LLU;

	t65 = ((x385%(x386&x387))*x388);

	if (t65 != 243270LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x390 = -1872;
	int8_t x392 = -53;
	int32_t t66 = -85731330;

	t66 = ((x389%(x390&x391))*x392);

	if (t66 != -106) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x393 = INT64_MAX;
	int32_t x394 = -1;
	static int64_t x395 = 16LL;
	int32_t x396 = -1;

	t67 = ((x393%(x394&x395))*x396);

	if (t67 != -15LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x401 = UINT8_MAX;
	int16_t x402 = INT16_MIN;
	int16_t x403 = -7;
	int16_t x404 = INT16_MAX;

	t68 = ((x401%(x402&x403))*x404);

	if (t68 != 8355585) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x405 = -1;
	uint16_t x406 = UINT16_MAX;
	volatile int16_t x407 = INT16_MAX;
	static volatile int32_t t69 = -135027438;

	t69 = ((x405%(x406&x407))*x408);

	if (t69 != 15) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x409 = -671661204;
	static int64_t x410 = INT64_MIN;
	int64_t x411 = -2LL;
	int64_t x412 = 1672LL;
	static int64_t t70 = 1781269955LL;

	t70 = ((x409%(x410&x411))*x412);

	if (t70 != -1123017533088LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x417 = INT8_MIN;
	int32_t x419 = INT32_MIN;
	volatile uint64_t t71 = 1587LLU;

	t71 = ((x417%(x418&x419))*x420);

	if (t71 != 272730407040LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x421 = -1LL;
	int64_t x423 = INT64_MAX;
	volatile int16_t x424 = INT16_MAX;
	int64_t t72 = -1LL;

	t72 = ((x421%(x422&x423))*x424);

	if (t72 != -32767LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x425 = INT64_MAX;
	static int16_t x426 = -2;
	uint8_t x427 = 31U;
	int64_t x428 = -373LL;
	int64_t t73 = 26923188LL;

	t73 = ((x425%(x426&x427))*x428);

	if (t73 != -2611LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x429 = -31;
	int16_t x430 = INT16_MAX;
	int8_t x431 = -1;
	volatile int32_t t74 = 2;

	t74 = ((x429%(x430&x431))*x432);

	if (t74 != 1015808) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x433 = -1LL;
	uint64_t x434 = 175098763LLU;
	int8_t x436 = INT8_MAX;
	uint64_t t75 = 5648858187LLU;

	t75 = ((x433%(x434&x435))*x436);

	if (t75 != 1524LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x446 = INT8_MAX;
	volatile int32_t t76 = -78316;

	t76 = ((x445%(x446&x447))*x448);

	if (t76 != -650706) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x451 = INT16_MAX;
	volatile int8_t x452 = INT8_MIN;
	int64_t t77 = 11435034897611245LL;

	t77 = ((x449%(x450&x451))*x452);

	if (t77 != 704512LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x453 = INT64_MIN;
	volatile int64_t x454 = -15573785481LL;
	static int16_t x456 = INT16_MAX;
	volatile int64_t t78 = 232229437182LL;

	t78 = ((x453%(x454&x455))*x456);

	if (t78 != -433838586331136LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x461 = INT64_MIN;
	int8_t x462 = -1;
	uint32_t x463 = 12724399U;
	int32_t x464 = -364;

	t79 = ((x461%(x462&x463))*x464);

	if (t79 != 987955696LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x465 = -356;
	volatile int64_t x466 = INT64_MAX;
	int32_t x467 = INT32_MIN;
	uint8_t x468 = 41U;

	t80 = ((x465%(x466&x467))*x468);

	if (t80 != -14596LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x469 = 6U;
	volatile uint32_t x470 = 7599U;
	int32_t x472 = -114;
	uint32_t t81 = 16U;

	t81 = ((x469%(x470&x471))*x472);

	if (t81 != 4294967182U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x477 = UINT16_MAX;
	uint64_t x478 = UINT64_MAX;
	int16_t x479 = -1;
	int32_t x480 = -1;
	uint64_t t82 = 1830268LLU;

	t82 = ((x477%(x478&x479))*x480);

	if (t82 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x481 = -16057;
	uint32_t x482 = UINT32_MAX;
	static int32_t x483 = -225;
	volatile uint16_t x484 = 26170U;
	volatile uint32_t t83 = 8110602U;

	t83 = ((x481%(x482&x483))*x484);

	if (t83 != 3874755606U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x497 = -1;
	volatile int64_t x498 = -1LL;
	static int64_t x499 = 97315LL;
	int16_t x500 = INT16_MAX;
	volatile int64_t t84 = 60004690843338LL;

	t84 = ((x497%(x498&x499))*x500);

	if (t84 != -32767LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x501 = UINT64_MAX;
	int64_t x502 = INT64_MIN;
	static int32_t x504 = -1;
	static volatile uint64_t t85 = 68315717LLU;

	t85 = ((x501%(x502&x503))*x504);

	if (t85 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x505 = UINT64_MAX;
	volatile int32_t x506 = INT32_MAX;
	uint16_t x507 = 837U;
	volatile int32_t x508 = -1;
	uint64_t t86 = 824211135529LLU;

	t86 = ((x505%(x506&x507))*x508);

	if (t86 != 18446744073709551322LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x513 = INT8_MIN;
	static int64_t x515 = INT64_MIN;
	uint32_t x516 = 2145457932U;
	volatile uint64_t t87 = 10664651LLU;

	t87 = ((x513%(x514&x515))*x516);

	if (t87 != 18446743799090936320LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x517 = 3093LLU;
	volatile int32_t x519 = 7;
	static int32_t x520 = 182406;
	uint64_t t88 = 11601863765105924LLU;

	t88 = ((x517%(x518&x519))*x520);

	if (t88 != 182406LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x521 = INT16_MIN;
	int16_t x522 = INT16_MAX;
	static int32_t x523 = INT32_MAX;
	int16_t x524 = INT16_MIN;
	static volatile int32_t t89 = 103363;

	t89 = ((x521%(x522&x523))*x524);

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x526 = INT8_MAX;
	volatile uint64_t x527 = 346LLU;
	int64_t x528 = INT64_MIN;

	t90 = ((x525%(x526&x527))*x528);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x545 = 8;
	int16_t x546 = 24;
	volatile int64_t x547 = 55LL;
	volatile int8_t x548 = INT8_MIN;
	volatile int64_t t91 = 26799119LL;

	t91 = ((x545%(x546&x547))*x548);

	if (t91 != -1024LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x553 = INT32_MAX;
	int8_t x554 = INT8_MIN;
	static volatile int8_t x556 = -1;
	int32_t t92 = 0;

	t92 = ((x553%(x554&x555))*x556);

	if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x557 = -1;
	static volatile uint32_t x558 = UINT32_MAX;
	volatile int8_t x559 = -1;
	volatile uint64_t x560 = 6678096856935492LLU;
	static volatile uint64_t t93 = 47974LLU;

	t93 = ((x557%(x558&x559))*x560);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x562 = 95U;
	int8_t x563 = 1;
	int32_t x564 = INT32_MAX;
	int32_t t94 = -15;

	t94 = ((x561%(x562&x563))*x564);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x566 = UINT8_MAX;
	int16_t x567 = -1;
	volatile int16_t x568 = INT16_MIN;
	volatile int32_t t95 = 360894;

	t95 = ((x565%(x566&x567))*x568);

	if (t95 != 4194304) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x569 = 2;
	uint16_t x570 = 10727U;
	static int16_t x571 = -1;
	volatile uint32_t t96 = 5U;

	t96 = ((x569%(x570&x571))*x572);

	if (t96 != 4294967294U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x573 = 228;
	int64_t x575 = -1LL;
	uint64_t t97 = 108001LLU;

	t97 = ((x573%(x574&x575))*x576);

	if (t97 != 18446744073709551388LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x577 = INT32_MAX;
	int8_t x579 = INT8_MAX;
	int8_t x580 = INT8_MIN;
	static volatile int32_t t98 = 67;

	t98 = ((x577%(x578&x579))*x580);

	if (t98 != -896) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x581 = 1U;
	volatile int16_t x582 = INT16_MIN;
	volatile int16_t x584 = INT16_MAX;

	t99 = ((x581%(x582&x583))*x584);

	if (t99 != 32767LL) { NG(); } else { ; }
	
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

