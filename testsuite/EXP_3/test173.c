#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x5 = UINT16_MAX;
int32_t t1 = 46669;
volatile uint8_t x11 = 92U;
int16_t x16 = INT16_MAX;
int64_t x19 = INT64_MIN;
volatile uint64_t x24 = UINT64_MAX;
int32_t x31 = -9566145;
volatile uint64_t t6 = 3LLU;
volatile int32_t x41 = INT32_MAX;
volatile int32_t t9 = 161683931;
int16_t x47 = -1;
volatile uint32_t t11 = 7288952U;
int16_t x54 = 3;
static volatile int64_t t12 = -719335LL;
volatile uint64_t t13 = 465278124919743725LLU;
static int8_t x62 = 1;
int8_t x71 = -1;
uint32_t t16 = 198175712U;
int32_t x78 = INT32_MAX;
int8_t x83 = INT8_MIN;
volatile uint64_t t21 = 2LLU;
volatile int32_t x107 = INT32_MAX;
static int64_t x108 = 893719LL;
int64_t t23 = 51LL;
static uint16_t x123 = 10U;
uint64_t t25 = 375LLU;
uint64_t x133 = UINT64_MAX;
uint16_t x134 = UINT16_MAX;
static int16_t x139 = -1;
volatile int8_t x151 = INT8_MIN;
int32_t t29 = -745662465;
uint32_t x156 = UINT32_MAX;
volatile uint32_t t31 = 17U;
uint64_t x166 = 159952LLU;
static int8_t x168 = -1;
int16_t x182 = -1;
static int32_t x192 = INT32_MIN;
uint64_t x200 = 1065306904035LLU;
uint8_t x206 = UINT8_MAX;
static volatile int16_t x211 = 1786;
uint32_t x222 = UINT32_MAX;
int16_t x223 = -1;
volatile int8_t x237 = -2;
int16_t x244 = -39;
int64_t x253 = -1470584LL;
volatile int8_t x259 = INT8_MIN;
static volatile int64_t t47 = -177501148902554160LL;
int64_t x262 = 182LL;
uint64_t x265 = UINT64_MAX;
static int64_t x266 = INT64_MIN;
volatile uint64_t t49 = 7577633587979044LLU;
volatile int32_t x280 = -2458589;
static uint32_t t51 = 14933U;
static uint32_t x292 = 4U;
static int8_t x304 = -13;
static uint64_t x309 = UINT64_MAX;
int8_t x310 = 1;
int64_t x314 = INT64_MIN;
static uint64_t x315 = 4290LLU;
int64_t x319 = -38269351LL;
volatile int16_t x320 = -40;
int64_t x322 = -1LL;
volatile uint64_t t60 = 13600LLU;
uint32_t x334 = 57U;
static int16_t x336 = -1408;
int16_t x340 = INT16_MAX;
volatile int64_t t63 = 695189197962396075LL;
int64_t x352 = 242390651LL;
volatile int16_t x356 = INT16_MAX;
int32_t x357 = 401927815;
int64_t x359 = -1LL;
uint64_t x374 = 3871LLU;
int16_t x376 = 0;
volatile int16_t x388 = -1;
uint32_t x413 = 215137851U;
int16_t x415 = -131;
volatile int64_t x417 = INT64_MIN;
volatile int32_t x418 = INT32_MAX;
int64_t x421 = -993970268LL;
volatile uint64_t t78 = 5351409578599528LLU;
int16_t x429 = 4821;
uint16_t x437 = 2278U;
volatile int16_t x443 = -1;
uint64_t x444 = 240LLU;
static uint16_t x445 = 7U;
int32_t x449 = 3528;
volatile int32_t t85 = 8836530;
static volatile uint32_t x463 = UINT32_MAX;
int32_t x466 = INT32_MIN;
uint64_t t87 = 108821LLU;
static uint8_t x477 = 14U;
volatile int64_t t89 = 3062853771LL;
int64_t x485 = -15LL;
static uint32_t x498 = UINT32_MAX;
int8_t x510 = -1;
uint64_t t93 = 97641LLU;
int8_t x513 = INT8_MIN;
int8_t x517 = -28;
int64_t x518 = -14194995985434089LL;
uint8_t x519 = 7U;
uint32_t x520 = 1477U;
uint32_t x526 = 1U;
uint16_t x528 = 6U;
int16_t x529 = 11510;
volatile uint16_t x531 = 30U;
volatile int32_t t97 = -1;
int8_t x538 = INT8_MAX;
int8_t x539 = 1;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	volatile int32_t x2 = -25891;
	uint16_t x3 = 2U;
	int32_t x4 = -1;
	static volatile int32_t t0 = 44894;

	t0 = ((x1+x2)/(x3-x4));

	if (t0 != 2292) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x6 = 9;
	uint16_t x7 = 5U;
	int8_t x8 = -1;

	t1 = ((x5+x6)/(x7-x8));

	if (t1 != 10924) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int64_t x10 = -1LL;
	int64_t x12 = -290279545975737047LL;
	volatile int64_t t2 = -169685910708LL;

	t2 = ((x9+x10)/(x11-x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	static int8_t x14 = INT8_MAX;
	int32_t x15 = -45;
	volatile int32_t t3 = 1868456;

	t3 = ((x13+x14)/(x15-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x17 = UINT8_MAX;
	int64_t x18 = INT64_MIN;
	int32_t x20 = -3916;
	static volatile int64_t t4 = -14994880LL;

	t4 = ((x17+x18)/(x19-x20));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	uint64_t x22 = 16496721LLU;
	uint16_t x23 = 54U;
	uint64_t t5 = 22LLU;

	t5 = ((x21+x22)/(x23-x24));

	if (t5 != 299940LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 170326168873130LLU;
	uint16_t x30 = UINT16_MAX;
	static uint16_t x32 = 7U;

	t6 = ((x29+x30)/(x31-x32));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 1U;
	int8_t x34 = 59;
	int16_t x35 = INT16_MIN;
	int64_t x36 = -4818705249LL;
	volatile int64_t t7 = -4694851515553981LL;

	t7 = ((x33+x34)/(x35-x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 0U;
	static int16_t x38 = -1;
	uint8_t x39 = UINT8_MAX;
	uint64_t x40 = 3470295505LLU;
	volatile uint64_t t8 = 48LLU;

	t8 = ((x37+x38)/(x39-x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MIN;
	int8_t x44 = 4;

	t9 = ((x41+x42)/(x43-x44));

	if (t9 != -16268814) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	uint16_t x46 = 3459U;
	int8_t x48 = INT8_MAX;
	static int32_t t10 = -7;

	t10 = ((x45+x46)/(x47-x48));

	if (t10 != -27) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 261242443U;
	static uint32_t x50 = 387351108U;
	volatile uint32_t x51 = 15214U;
	uint16_t x52 = 90U;

	t11 = ((x49+x50)/(x51-x52));

	if (t11 != 42885U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	uint16_t x55 = 18U;
	int32_t x56 = INT32_MAX;

	t12 = ((x53+x54)/(x55-x56));

	if (t12 != 4294967334LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = UINT8_MAX;
	int32_t x58 = -1;
	volatile uint64_t x59 = UINT64_MAX;
	volatile uint16_t x60 = 43U;

	t13 = ((x57+x58)/(x59-x60));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MAX;
	static uint32_t x63 = UINT32_MAX;
	int16_t x64 = INT16_MIN;
	volatile uint32_t t14 = 516593U;

	t14 = ((x61+x62)/(x63-x64));

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	uint8_t x66 = UINT8_MAX;
	uint8_t x67 = 18U;
	int8_t x68 = -2;
	int32_t t15 = 41216395;

	t15 = ((x65+x66)/(x67-x68));

	if (t15 != -1625) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	uint32_t x70 = 25U;
	volatile uint16_t x72 = 5478U;

	t16 = ((x69+x70)/(x71-x72));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	static uint32_t x79 = UINT32_MAX;
	volatile uint64_t x80 = UINT64_MAX;
	static volatile uint64_t t17 = 15574178LLU;

	t17 = ((x77+x78)/(x79-x80));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MIN;
	volatile uint64_t x82 = UINT64_MAX;
	int8_t x84 = 0;
	uint64_t t18 = 4422119049655LLU;

	t18 = ((x81+x82)/(x83-x84));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = 6821828LLU;
	uint16_t x86 = UINT16_MAX;
	int8_t x87 = 0;
	int8_t x88 = INT8_MIN;
	volatile uint64_t t19 = 238810976956061LLU;

	t19 = ((x85+x86)/(x87-x88));

	if (t19 != 53807LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = UINT8_MAX;
	static uint16_t x90 = UINT16_MAX;
	int32_t x91 = INT32_MAX;
	uint64_t x92 = 43563LLU;
	static volatile uint64_t t20 = 824158617145693857LLU;

	t20 = ((x89+x90)/(x91-x92));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MAX;
	uint64_t x98 = 568863852852LLU;
	uint32_t x99 = 22148U;
	int32_t x100 = 480298109;

	t21 = ((x97+x98)/(x99-x100));

	if (t21 != 2417855547LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = -12;
	int8_t x106 = -1;
	static int64_t t22 = -648713091LL;

	t22 = ((x105+x106)/(x107-x108));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x109 = UINT32_MAX;
	static volatile int64_t x110 = -1LL;
	int16_t x111 = -2483;
	uint16_t x112 = 6765U;

	t23 = ((x109+x110)/(x111-x112));

	if (t23 != -464421LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = 1U;
	int64_t x118 = INT64_MIN;
	int8_t x119 = -34;
	uint32_t x120 = 517491U;
	volatile int64_t t24 = 1LL;

	t24 = ((x117+x118)/(x119-x120));

	if (t24 != -2147742441LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = 10701230LLU;
	static uint32_t x122 = 684402U;
	static int8_t x124 = INT8_MAX;

	t25 = ((x121+x122)/(x123-x124));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = INT32_MIN;
	int32_t x126 = INT32_MAX;
	static uint16_t x127 = 1U;
	int32_t x128 = -1;
	int32_t t26 = -31976483;

	t26 = ((x125+x126)/(x127-x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x135 = -1;
	static volatile int8_t x136 = INT8_MIN;
	static uint64_t t27 = 1267315549023942858LLU;

	t27 = ((x133+x134)/(x135-x136));

	if (t27 != 516LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = -50;
	static uint32_t x138 = 386210307U;
	static int32_t x140 = -26513814;
	volatile uint32_t t28 = 14237402U;

	t28 = ((x137+x138)/(x139-x140));

	if (t28 != 14U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x149 = INT8_MAX;
	static volatile int16_t x150 = -1;
	int16_t x152 = -1;

	t29 = ((x149+x150)/(x151-x152));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x153 = 1742849753776776LLU;
	int32_t x154 = INT32_MIN;
	int64_t x155 = -1LL;
	volatile uint64_t t30 = 129904LLU;

	t30 = ((x153+x154)/(x155-x156));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x161 = INT32_MIN;
	int32_t x162 = INT32_MAX;
	static uint32_t x163 = UINT32_MAX;
	uint8_t x164 = UINT8_MAX;

	t31 = ((x161+x162)/(x163-x164));

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x165 = 1;
	uint8_t x167 = 0U;
	uint64_t t32 = 12797655976277716LLU;

	t32 = ((x165+x166)/(x167-x168));

	if (t32 != 159953LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x173 = INT64_MIN;
	int16_t x174 = 1172;
	static uint64_t x175 = UINT64_MAX;
	uint32_t x176 = UINT32_MAX;
	uint64_t t33 = 15LLU;

	t33 = ((x173+x174)/(x175-x176));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x177 = -1;
	static uint8_t x178 = 46U;
	uint64_t x179 = UINT64_MAX;
	static uint8_t x180 = 0U;
	uint64_t t34 = 188037915LLU;

	t34 = ((x177+x178)/(x179-x180));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = -3992373;
	volatile int16_t x183 = INT16_MIN;
	int8_t x184 = INT8_MIN;
	volatile int32_t t35 = 1;

	t35 = ((x181+x182)/(x183-x184));

	if (t35 != 122) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x189 = UINT32_MAX;
	uint32_t x190 = UINT32_MAX;
	int8_t x191 = INT8_MIN;
	volatile uint32_t t36 = 24443429U;

	t36 = ((x189+x190)/(x191-x192));

	if (t36 != 2U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x197 = 12U;
	int32_t x198 = -18271126;
	uint32_t x199 = UINT32_MAX;
	static uint64_t t37 = 99158LLU;

	t37 = ((x197+x198)/(x199-x200));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x205 = 3U;
	volatile uint16_t x207 = UINT16_MAX;
	int16_t x208 = INT16_MAX;
	static int32_t t38 = -116;

	t38 = ((x205+x206)/(x207-x208));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x209 = 16815U;
	static uint16_t x210 = 1U;
	static int64_t x212 = INT64_MAX;
	volatile int64_t t39 = -76778709920LL;

	t39 = ((x209+x210)/(x211-x212));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x217 = INT64_MIN;
	uint16_t x218 = 378U;
	int32_t x219 = INT32_MIN;
	int64_t x220 = INT64_MIN;
	volatile int64_t t40 = 23285922LL;

	t40 = ((x217+x218)/(x219-x220));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x221 = UINT16_MAX;
	int16_t x224 = 164;
	volatile uint32_t t41 = 0U;

	t41 = ((x221+x222)/(x223-x224));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x229 = INT16_MAX;
	int32_t x230 = -762786686;
	volatile int64_t x231 = -1356363377LL;
	uint64_t x232 = 86002LLU;
	uint64_t t42 = 4190653254080288LLU;

	t42 = ((x229+x230)/(x231-x232));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x238 = -428;
	static uint16_t x239 = 1U;
	int8_t x240 = -62;
	int32_t t43 = 3922288;

	t43 = ((x237+x238)/(x239-x240));

	if (t43 != -6) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x241 = 16U;
	int32_t x242 = INT32_MIN;
	uint64_t x243 = 684630506190LLU;
	uint64_t t44 = 44314LLU;

	t44 = ((x241+x242)/(x243-x244));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x249 = -17;
	volatile uint32_t x250 = 292250610U;
	int16_t x251 = INT16_MIN;
	int64_t x252 = -174432325127088LL;
	static volatile int64_t t45 = 366570348776658LL;

	t45 = ((x249+x250)/(x251-x252));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x254 = -1;
	uint32_t x255 = 397394U;
	uint16_t x256 = UINT16_MAX;
	volatile int64_t t46 = -1LL;

	t46 = ((x253+x254)/(x255-x256));

	if (t46 != -4LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x257 = 296U;
	static int16_t x258 = INT16_MAX;
	int64_t x260 = INT64_MIN;

	t47 = ((x257+x258)/(x259-x260));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x261 = INT8_MIN;
	int16_t x263 = -12968;
	uint32_t x264 = 10U;
	volatile int64_t t48 = -17199627124LL;

	t48 = ((x261+x262)/(x263-x264));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x267 = -8150;
	uint16_t x268 = 7U;

	t49 = ((x265+x266)/(x267-x268));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x269 = 78488736U;
	int8_t x270 = INT8_MIN;
	static uint64_t x271 = 7722572346250LLU;
	uint32_t x272 = UINT32_MAX;
	uint64_t t50 = 112095377826043LLU;

	t50 = ((x269+x270)/(x271-x272));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x277 = -112674;
	static uint32_t x278 = 967466U;
	int8_t x279 = INT8_MIN;

	t51 = ((x277+x278)/(x279-x280));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x289 = INT16_MIN;
	int64_t x290 = INT64_MAX;
	int8_t x291 = -1;
	int64_t t52 = -16169LL;

	t52 = ((x289+x290)/(x291-x292));

	if (t52 != 2147483650LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x297 = 61770912;
	int16_t x298 = -1;
	static int64_t x299 = -52917370LL;
	int8_t x300 = -1;
	volatile int64_t t53 = -473212LL;

	t53 = ((x297+x298)/(x299-x300));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x301 = 15U;
	int8_t x302 = -1;
	uint16_t x303 = UINT16_MAX;
	static int32_t t54 = 6029504;

	t54 = ((x301+x302)/(x303-x304));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x305 = -1;
	int8_t x306 = -13;
	int16_t x307 = INT16_MIN;
	uint16_t x308 = 344U;
	static volatile int32_t t55 = 121;

	t55 = ((x305+x306)/(x307-x308));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x311 = 2;
	uint64_t x312 = 11991754446LLU;
	static volatile uint64_t t56 = 2LLU;

	t56 = ((x309+x310)/(x311-x312));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x313 = UINT8_MAX;
	static volatile uint16_t x316 = UINT16_MAX;
	static uint64_t t57 = 6292019LLU;

	t57 = ((x313+x314)/(x315-x316));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x317 = INT32_MIN;
	volatile uint32_t x318 = 19805642U;
	static int64_t t58 = 149403598933LL;

	t58 = ((x317+x318)/(x319-x320));

	if (t58 != -56LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x321 = UINT32_MAX;
	volatile int16_t x323 = -1;
	uint32_t x324 = 1903131738U;
	volatile int64_t t59 = 490LL;

	t59 = ((x321+x322)/(x323-x324));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x325 = INT16_MAX;
	static uint8_t x326 = 1U;
	int32_t x327 = INT32_MIN;
	uint64_t x328 = 175704236324LLU;

	t60 = ((x325+x326)/(x327-x328));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x329 = 112872089U;
	int16_t x330 = INT16_MAX;
	int32_t x331 = -1351903;
	uint64_t x332 = 337220483207524777LLU;
	uint64_t t61 = 1526308631765735511LLU;

	t61 = ((x329+x330)/(x331-x332));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x333 = 2U;
	uint32_t x335 = 29U;
	volatile uint32_t t62 = 269388U;

	t62 = ((x333+x334)/(x335-x336));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x337 = 36U;
	int64_t x338 = -1LL;
	static int8_t x339 = INT8_MIN;

	t63 = ((x337+x338)/(x339-x340));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x349 = INT32_MIN;
	uint32_t x350 = 812752351U;
	static int16_t x351 = INT16_MIN;
	int64_t t64 = -474736LL;

	t64 = ((x349+x350)/(x351-x352));

	if (t64 != -12LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x353 = 41065368;
	int16_t x354 = -1;
	volatile int8_t x355 = INT8_MIN;
	int32_t t65 = -21274975;

	t65 = ((x353+x354)/(x355-x356));

	if (t65 != -1248) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x358 = INT16_MAX;
	uint32_t x360 = 14730370U;
	int64_t t66 = -207221518989604LL;

	t66 = ((x357+x358)/(x359-x360));

	if (t66 != -27LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x369 = 7U;
	uint32_t x370 = 748072268U;
	int8_t x371 = -4;
	int32_t x372 = -586728;
	static uint32_t t67 = 8583029U;

	t67 = ((x369+x370)/(x371-x372));

	if (t67 != 1274U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x373 = 14492204U;
	int32_t x375 = INT32_MIN;
	uint64_t t68 = 4610644372524526039LLU;

	t68 = ((x373+x374)/(x375-x376));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x377 = -1LL;
	int16_t x378 = INT16_MIN;
	static int8_t x379 = INT8_MIN;
	int64_t x380 = INT64_MIN;
	int64_t t69 = -2LL;

	t69 = ((x377+x378)/(x379-x380));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x381 = 761LLU;
	int8_t x382 = -23;
	static int64_t x383 = -200056424594290LL;
	uint32_t x384 = 51296758U;
	volatile uint64_t t70 = 271LLU;

	t70 = ((x381+x382)/(x383-x384));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x385 = UINT32_MAX;
	int32_t x386 = 191531463;
	int8_t x387 = -49;
	uint32_t t71 = 29403842U;

	t71 = ((x385+x386)/(x387-x388));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x393 = 1;
	int64_t x394 = -14839542530LL;
	static int64_t x395 = -1LL;
	int32_t x396 = INT32_MAX;
	int64_t t72 = 732102138LL;

	t72 = ((x393+x394)/(x395-x396));

	if (t72 != 6LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x397 = 16U;
	int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MIN;
	int32_t x400 = -1;
	int32_t t73 = -6275;

	t73 = ((x397+x398)/(x399-x400));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x405 = 0LL;
	uint16_t x406 = UINT16_MAX;
	uint8_t x407 = UINT8_MAX;
	static int64_t x408 = INT64_MAX;
	static int64_t t74 = -56LL;

	t74 = ((x405+x406)/(x407-x408));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x409 = INT64_MIN;
	static uint64_t x410 = UINT64_MAX;
	uint32_t x411 = 370823069U;
	volatile int64_t x412 = -1LL;
	static volatile uint64_t t75 = 15969615LLU;

	t75 = ((x409+x410)/(x411-x412));

	if (t75 != 24872702868LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x414 = 729886454LL;
	int64_t x416 = -1LL;
	static volatile int64_t t76 = -780921314LL;

	t76 = ((x413+x414)/(x415-x416));

	if (t76 != -7269417LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x419 = INT32_MIN;
	static int64_t x420 = -15963283325659LL;
	static volatile int64_t t77 = 4LL;

	t77 = ((x417+x418)/(x419-x420));

	if (t77 != -577864LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x422 = 1642231824320486LLU;
	volatile uint8_t x423 = 22U;
	int16_t x424 = -316;

	t78 = ((x421+x422)/(x423-x424));

	if (t78 != 4858671095710LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x430 = 3U;
	volatile uint64_t x431 = 177LLU;
	uint8_t x432 = UINT8_MAX;
	uint64_t t79 = 30278487334746615LLU;

	t79 = ((x429+x430)/(x431-x432));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x433 = INT8_MIN;
	static int8_t x434 = -1;
	uint8_t x435 = 15U;
	int64_t x436 = -1LL;
	volatile int64_t t80 = -60269LL;

	t80 = ((x433+x434)/(x435-x436));

	if (t80 != -8LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x438 = 57;
	uint8_t x439 = 83U;
	static volatile int32_t x440 = 1;
	volatile int32_t t81 = 1;

	t81 = ((x437+x438)/(x439-x440));

	if (t81 != 28) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x441 = INT32_MIN;
	static uint8_t x442 = 6U;
	volatile uint64_t t82 = 19252145015LLU;

	t82 = ((x441+x442)/(x443-x444));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x446 = 0;
	static volatile int8_t x447 = INT8_MIN;
	uint8_t x448 = 3U;
	volatile int32_t t83 = -923;

	t83 = ((x445+x446)/(x447-x448));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x450 = 32U;
	uint16_t x451 = 11U;
	int32_t x452 = -131625109;
	volatile int32_t t84 = -239808;

	t84 = ((x449+x450)/(x451-x452));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x457 = INT16_MAX;
	int32_t x458 = INT32_MIN;
	static volatile uint8_t x459 = 76U;
	int16_t x460 = INT16_MIN;

	t85 = ((x457+x458)/(x459-x460));

	if (t85 != -65383) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x461 = UINT32_MAX;
	uint8_t x462 = 0U;
	static int8_t x464 = INT8_MIN;
	uint32_t t86 = 7U;

	t86 = ((x461+x462)/(x463-x464));

	if (t86 != 33818640U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x465 = UINT64_MAX;
	int32_t x467 = 127238;
	uint32_t x468 = UINT32_MAX;

	t87 = ((x465+x466)/(x467-x468));

	if (t87 != 144977122356840LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x469 = -24;
	int64_t x470 = INT64_MAX;
	static uint64_t x471 = 30747740LLU;
	int16_t x472 = -1;
	uint64_t t88 = 42631117854LLU;

	t88 = ((x469+x470)/(x471-x472));

	if (t88 != 299969094863LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x478 = INT32_MIN;
	uint16_t x479 = 5241U;
	static volatile int64_t x480 = -1LL;

	t89 = ((x477+x478)/(x479-x480));

	if (t89 != -409668LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x486 = 2341LL;
	int8_t x487 = INT8_MIN;
	volatile int64_t x488 = -1LL;
	static volatile int64_t t90 = 37309414065LL;

	t90 = ((x485+x486)/(x487-x488));

	if (t90 != -18LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x493 = -1;
	int8_t x494 = 56;
	int32_t x495 = INT32_MAX;
	uint64_t x496 = 38LLU;
	uint64_t t91 = 1760971105025970134LLU;

	t91 = ((x493+x494)/(x495-x496));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x497 = -475843530431LL;
	int8_t x499 = 54;
	uint8_t x500 = UINT8_MAX;
	volatile int64_t t92 = 52955693872518238LL;

	t92 = ((x497+x498)/(x499-x500));

	if (t92 != 2346012751LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x509 = 1023397902U;
	int32_t x511 = -10;
	uint64_t x512 = UINT64_MAX;

	t93 = ((x509+x510)/(x511-x512));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x514 = 4279575U;
	int32_t x515 = -1;
	static int32_t x516 = INT32_MIN;
	uint32_t t94 = 26U;

	t94 = ((x513+x514)/(x515-x516));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t t95 = -2LL;

	t95 = ((x517+x518)/(x519-x520));

	if (t95 != -3305031LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x525 = -1;
	static uint32_t x527 = UINT32_MAX;
	static volatile uint32_t t96 = 39573362U;

	t96 = ((x525+x526)/(x527-x528));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x530 = INT8_MIN;
	uint16_t x532 = 115U;

	t97 = ((x529+x530)/(x531-x532));

	if (t97 != -133) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x537 = 3U;
	uint32_t x540 = UINT32_MAX;
	volatile uint32_t t98 = 795U;

	t98 = ((x537+x538)/(x539-x540));

	if (t98 != 65U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x541 = INT8_MAX;
	volatile int64_t x542 = INT64_MIN;
	volatile uint64_t x543 = 45LLU;
	int16_t x544 = -1;
	static uint64_t t99 = 799362696357341657LLU;

	t99 = ((x541+x542)/(x543-x544));

	if (t99 != 200508087757712520LLU) { NG(); } else { ; }
	
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

