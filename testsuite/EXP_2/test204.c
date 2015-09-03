#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x18 = INT32_MIN;
int64_t x22 = INT64_MAX;
uint64_t x33 = UINT64_MAX;
uint8_t x42 = 12U;
static int32_t t9 = -6;
uint64_t x60 = UINT64_MAX;
int16_t x65 = -260;
volatile uint8_t x67 = 33U;
volatile uint8_t x68 = UINT8_MAX;
int32_t x79 = -16132301;
volatile int16_t x82 = -1;
uint16_t x83 = 7U;
volatile int32_t t16 = 27;
static int32_t x89 = -1;
volatile int32_t t17 = -835;
uint64_t x98 = UINT64_MAX;
int64_t x99 = INT64_MIN;
uint64_t x105 = 3660LLU;
int16_t x107 = INT16_MIN;
volatile uint32_t x109 = 901901U;
static int16_t x110 = 38;
static int32_t x111 = 256155608;
int64_t x115 = -1655728276LL;
static uint64_t x145 = 6998164LLU;
int8_t x167 = INT8_MAX;
int8_t x172 = -1;
volatile int8_t x173 = INT8_MIN;
volatile uint8_t x174 = 41U;
volatile int32_t x177 = 7546631;
static volatile int32_t t33 = 61330;
volatile int64_t x194 = 1760897LL;
int8_t x196 = INT8_MIN;
static int32_t t35 = -15926987;
volatile int32_t x201 = -1;
volatile int8_t x216 = INT8_MIN;
volatile uint64_t x219 = 4063457773369041LLU;
static int16_t x221 = INT16_MIN;
int8_t x229 = INT8_MIN;
static int8_t x232 = INT8_MAX;
uint32_t x234 = 204644U;
int32_t x235 = INT32_MIN;
int32_t t44 = -528156748;
int8_t x249 = 1;
int32_t x250 = -31;
uint8_t x258 = 46U;
int8_t x265 = INT8_MIN;
int32_t x266 = INT32_MIN;
int16_t x268 = 22;
volatile int32_t t49 = -966477712;
uint8_t x285 = 0U;
volatile int32_t x287 = INT32_MIN;
int16_t x288 = INT16_MIN;
int16_t x291 = INT16_MAX;
int16_t x306 = INT16_MIN;
int32_t t53 = 73822073;
static int64_t x318 = 5100875069521522LL;
static int8_t x322 = 1;
static int64_t x324 = -2LL;
volatile int32_t t55 = 33335026;
int32_t x325 = INT32_MIN;
static int16_t x326 = -1;
uint64_t x327 = 4385672493584911950LLU;
int32_t t56 = -10869818;
volatile int32_t t57 = -2535;
static uint8_t x334 = 6U;
volatile uint32_t x348 = 266226U;
int32_t t62 = 106287179;
int32_t x375 = 250388;
static volatile int32_t t63 = 27828471;
volatile uint32_t x381 = UINT32_MAX;
volatile int32_t t65 = 25796058;
int16_t x385 = 4;
volatile int32_t t68 = -1432460;
uint8_t x405 = UINT8_MAX;
static int32_t x412 = -1;
int32_t x415 = -1;
volatile uint32_t x437 = UINT32_MAX;
int32_t x441 = -851;
static int32_t x442 = -51;
uint8_t x444 = UINT8_MAX;
int32_t t77 = 8328590;
volatile int32_t x448 = 10;
static volatile int16_t x472 = 10622;
int32_t t82 = 8542385;
int64_t x484 = -19490794658481LL;
int32_t t83 = 112;
uint64_t x491 = 104682032LLU;
uint16_t x494 = 126U;
int64_t x497 = -50242842479399LL;
int32_t x503 = -1;
int32_t t89 = 1;
uint8_t x516 = 13U;
uint64_t x517 = 10670147285LLU;
volatile uint64_t x518 = UINT64_MAX;
volatile int32_t t91 = 2949240;
volatile uint8_t x526 = UINT8_MAX;
uint16_t x527 = 2U;
int8_t x544 = 0;
int16_t x548 = -1;
static uint32_t x550 = 0U;
uint8_t x555 = 3U;
volatile int32_t t97 = 1;
int16_t x562 = INT16_MIN;


void f0(void) {
	static int16_t x5 = -3;
	volatile uint64_t x6 = UINT64_MAX;
	int16_t x7 = 420;
	static uint8_t x8 = 43U;
	int32_t t0 = -8;

	t0 = ((x5*(x6-x7))<x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	uint16_t x10 = 143U;
	int16_t x11 = INT16_MAX;
	static int8_t x12 = INT8_MIN;
	int32_t t1 = 559239;

	t1 = ((x9*(x10-x11))<x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	int16_t x14 = INT16_MIN;
	uint16_t x15 = 4442U;
	volatile uint8_t x16 = UINT8_MAX;
	int32_t t2 = -196;

	t2 = ((x13*(x14-x15))<x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 11646695499485LLU;
	uint32_t x19 = UINT32_MAX;
	int8_t x20 = -50;
	int32_t t3 = 884;

	t3 = ((x17*(x18-x19))<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = 0;
	volatile int64_t x23 = INT64_MAX;
	uint32_t x24 = UINT32_MAX;
	static int32_t t4 = -11958;

	t4 = ((x21*(x22-x23))<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MAX;
	int64_t x26 = 692719LL;
	int64_t x27 = -17877873692LL;
	volatile uint64_t x28 = 35LLU;
	static int32_t t5 = -1;

	t5 = ((x25*(x26-x27))<x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x34 = 0;
	static int32_t x35 = -11173828;
	int16_t x36 = -1;
	int32_t t6 = -211755;

	t6 = ((x33*(x34-x35))<x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = 11124;
	int32_t x38 = INT32_MIN;
	volatile uint64_t x39 = 194305597379709LLU;
	static uint16_t x40 = 2U;
	volatile int32_t t7 = 156468501;

	t7 = ((x37*(x38-x39))<x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MAX;
	uint16_t x43 = 890U;
	uint32_t x44 = 287124598U;
	volatile int32_t t8 = 5;

	t8 = ((x41*(x42-x43))<x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x49 = UINT64_MAX;
	volatile int8_t x50 = INT8_MIN;
	int8_t x51 = INT8_MIN;
	uint8_t x52 = UINT8_MAX;

	t9 = ((x49*(x50-x51))<x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x57 = 57U;
	static uint32_t x58 = UINT32_MAX;
	uint8_t x59 = UINT8_MAX;
	int32_t t10 = 60000569;

	t10 = ((x57*(x58-x59))<x60);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x66 = -7;
	int32_t t11 = 491;

	t11 = ((x65*(x66-x67))<x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x69 = -1;
	volatile uint64_t x70 = UINT64_MAX;
	int16_t x71 = INT16_MIN;
	int16_t x72 = 19;
	volatile int32_t t12 = 5343067;

	t12 = ((x69*(x70-x71))<x72);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x73 = 1003U;
	uint16_t x74 = 22887U;
	uint8_t x75 = UINT8_MAX;
	int64_t x76 = -1LL;
	static volatile int32_t t13 = -3311320;

	t13 = ((x73*(x74-x75))<x76);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = -1;
	uint32_t x78 = 48U;
	int16_t x80 = INT16_MIN;
	volatile int32_t t14 = 575379;

	t14 = ((x77*(x78-x79))<x80);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MIN;
	int8_t x84 = -1;
	volatile int32_t t15 = 588237643;

	t15 = ((x81*(x82-x83))<x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x85 = 237954485492LLU;
	int64_t x86 = -1LL;
	uint32_t x87 = 96905419U;
	static volatile int64_t x88 = INT64_MIN;

	t16 = ((x85*(x86-x87))<x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x90 = 15990470U;
	uint8_t x91 = 74U;
	int64_t x92 = 6992630706402526LL;

	t17 = ((x89*(x90-x91))<x92);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = 2102380LL;
	volatile int32_t x100 = 378;
	volatile int32_t t18 = 0;

	t18 = ((x97*(x98-x99))<x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x106 = INT32_MIN;
	uint8_t x108 = 50U;
	int32_t t19 = 1016;

	t19 = ((x105*(x106-x107))<x108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x112 = INT8_MIN;
	volatile int32_t t20 = 20690;

	t20 = ((x109*(x110-x111))<x112);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x113 = INT8_MIN;
	static int16_t x114 = -1;
	int8_t x116 = -6;
	volatile int32_t t21 = -5636270;

	t21 = ((x113*(x114-x115))<x116);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x117 = UINT32_MAX;
	int8_t x118 = INT8_MAX;
	static int32_t x119 = INT32_MAX;
	int16_t x120 = -108;
	volatile int32_t t22 = -2182;

	t22 = ((x117*(x118-x119))<x120);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x125 = 194LLU;
	uint16_t x126 = 159U;
	int8_t x127 = 1;
	uint64_t x128 = 286233875LLU;
	int32_t t23 = 559148727;

	t23 = ((x125*(x126-x127))<x128);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = 449;
	int8_t x130 = INT8_MAX;
	uint16_t x131 = UINT16_MAX;
	volatile uint32_t x132 = UINT32_MAX;
	int32_t t24 = 14;

	t24 = ((x129*(x130-x131))<x132);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x133 = -1;
	int64_t x134 = -1LL;
	int8_t x135 = INT8_MIN;
	volatile int32_t x136 = -1;
	int32_t t25 = -12837;

	t25 = ((x133*(x134-x135))<x136);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x146 = 3663828806LL;
	int32_t x147 = INT32_MIN;
	static uint64_t x148 = 1477923LLU;
	int32_t t26 = 877;

	t26 = ((x145*(x146-x147))<x148);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x149 = 3U;
	static uint64_t x150 = 31506LLU;
	int64_t x151 = INT64_MIN;
	volatile uint8_t x152 = 17U;
	volatile int32_t t27 = -2893862;

	t27 = ((x149*(x150-x151))<x152);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x157 = 954;
	uint8_t x158 = 118U;
	uint64_t x159 = 1502LLU;
	volatile int8_t x160 = INT8_MIN;
	volatile int32_t t28 = 0;

	t28 = ((x157*(x158-x159))<x160);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x165 = -1;
	int32_t x166 = -757640605;
	int8_t x168 = -3;
	static volatile int32_t t29 = -2407;

	t29 = ((x165*(x166-x167))<x168);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x169 = 298862255830218LLU;
	int16_t x170 = INT16_MAX;
	volatile int32_t x171 = 356470781;
	volatile int32_t t30 = -3975;

	t30 = ((x169*(x170-x171))<x172);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x175 = -1;
	int16_t x176 = INT16_MAX;
	static int32_t t31 = -1777;

	t31 = ((x173*(x174-x175))<x176);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x178 = 639170LL;
	volatile int16_t x179 = INT16_MIN;
	uint32_t x180 = 7167U;
	static volatile int32_t t32 = 124;

	t32 = ((x177*(x178-x179))<x180);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x185 = UINT8_MAX;
	uint8_t x186 = UINT8_MAX;
	uint16_t x187 = 208U;
	static int16_t x188 = INT16_MIN;

	t33 = ((x185*(x186-x187))<x188);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x189 = -1LL;
	int16_t x190 = INT16_MAX;
	int8_t x191 = INT8_MAX;
	uint32_t x192 = UINT32_MAX;
	int32_t t34 = -17041282;

	t34 = ((x189*(x190-x191))<x192);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x193 = INT32_MIN;
	int16_t x195 = INT16_MAX;

	t35 = ((x193*(x194-x195))<x196);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x197 = 3892LL;
	uint64_t x198 = 9656999587LLU;
	int64_t x199 = -22823496396153634LL;
	uint8_t x200 = 1U;
	int32_t t36 = 2794916;

	t36 = ((x197*(x198-x199))<x200);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x202 = INT16_MIN;
	int32_t x203 = INT32_MIN;
	static uint8_t x204 = 18U;
	volatile int32_t t37 = 151;

	t37 = ((x201*(x202-x203))<x204);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x213 = INT8_MIN;
	static int8_t x214 = -1;
	uint64_t x215 = 1020804LLU;
	static int32_t t38 = 1;

	t38 = ((x213*(x214-x215))<x216);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x217 = INT64_MAX;
	uint64_t x218 = 8790LLU;
	uint8_t x220 = 91U;
	volatile int32_t t39 = 17918388;

	t39 = ((x217*(x218-x219))<x220);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x222 = -1;
	static int8_t x223 = INT8_MIN;
	uint8_t x224 = 8U;
	int32_t t40 = 1808957;

	t40 = ((x221*(x222-x223))<x224);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x225 = -1;
	int16_t x226 = -3;
	int8_t x227 = INT8_MAX;
	uint16_t x228 = 6254U;
	volatile int32_t t41 = -143599;

	t41 = ((x225*(x226-x227))<x228);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x230 = INT8_MIN;
	int16_t x231 = INT16_MIN;
	int32_t t42 = 1741;

	t42 = ((x229*(x230-x231))<x232);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x233 = UINT32_MAX;
	int64_t x236 = INT64_MIN;
	int32_t t43 = 500;

	t43 = ((x233*(x234-x235))<x236);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x241 = -4;
	int8_t x242 = -1;
	volatile uint16_t x243 = 3171U;
	static volatile uint64_t x244 = UINT64_MAX;

	t44 = ((x241*(x242-x243))<x244);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x251 = 1U;
	int32_t x252 = 522924411;
	int32_t t45 = -532097;

	t45 = ((x249*(x250-x251))<x252);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x257 = UINT8_MAX;
	int64_t x259 = -120943399116947LL;
	static int8_t x260 = -1;
	volatile int32_t t46 = -251857;

	t46 = ((x257*(x258-x259))<x260);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x261 = INT32_MIN;
	int32_t x262 = -1;
	static int32_t x263 = -1;
	int32_t x264 = 203684;
	volatile int32_t t47 = 115891;

	t47 = ((x261*(x262-x263))<x264);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x267 = UINT32_MAX;
	static int32_t t48 = 2;

	t48 = ((x265*(x266-x267))<x268);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x273 = INT16_MIN;
	int64_t x274 = -1LL;
	int32_t x275 = INT32_MAX;
	volatile int32_t x276 = INT32_MAX;

	t49 = ((x273*(x274-x275))<x276);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x286 = INT64_MIN;
	int32_t t50 = 499;

	t50 = ((x285*(x286-x287))<x288);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x289 = INT16_MAX;
	int32_t x290 = -2;
	int8_t x292 = INT8_MIN;
	volatile int32_t t51 = -33;

	t51 = ((x289*(x290-x291))<x292);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x301 = UINT32_MAX;
	uint16_t x302 = UINT16_MAX;
	static volatile int16_t x303 = INT16_MIN;
	int8_t x304 = -1;
	volatile int32_t t52 = 133580586;

	t52 = ((x301*(x302-x303))<x304);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x305 = -1;
	volatile uint16_t x307 = UINT16_MAX;
	uint8_t x308 = UINT8_MAX;

	t53 = ((x305*(x306-x307))<x308);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x317 = -1;
	volatile int32_t x319 = INT32_MIN;
	static int32_t x320 = -1;
	int32_t t54 = 0;

	t54 = ((x317*(x318-x319))<x320);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x321 = UINT64_MAX;
	int64_t x323 = 2458LL;

	t55 = ((x321*(x322-x323))<x324);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x328 = 41529536U;

	t56 = ((x325*(x326-x327))<x328);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x329 = INT8_MIN;
	volatile int16_t x330 = -12;
	volatile uint16_t x331 = UINT16_MAX;
	uint32_t x332 = 102U;

	t57 = ((x329*(x330-x331))<x332);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x333 = UINT64_MAX;
	int32_t x335 = -1;
	uint8_t x336 = 56U;
	int32_t t58 = -1864;

	t58 = ((x333*(x334-x335))<x336);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x337 = UINT32_MAX;
	uint64_t x338 = 77719275279784LLU;
	static int8_t x339 = -8;
	uint32_t x340 = 45540U;
	static int32_t t59 = -1;

	t59 = ((x337*(x338-x339))<x340);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x345 = INT8_MIN;
	uint16_t x346 = UINT16_MAX;
	int16_t x347 = 27;
	int32_t t60 = -293322822;

	t60 = ((x345*(x346-x347))<x348);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x353 = -15;
	int8_t x354 = INT8_MAX;
	int8_t x355 = 1;
	int64_t x356 = INT64_MIN;
	volatile int32_t t61 = -222;

	t61 = ((x353*(x354-x355))<x356);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x365 = 0U;
	int32_t x366 = -27019;
	uint32_t x367 = 1069839871U;
	int8_t x368 = -1;

	t62 = ((x365*(x366-x367))<x368);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x373 = UINT32_MAX;
	int8_t x374 = -1;
	int16_t x376 = INT16_MIN;

	t63 = ((x373*(x374-x375))<x376);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x377 = INT8_MIN;
	int8_t x378 = -1;
	static uint16_t x379 = 22832U;
	uint64_t x380 = 53744048LLU;
	volatile int32_t t64 = -765821275;

	t64 = ((x377*(x378-x379))<x380);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x382 = INT16_MAX;
	int8_t x383 = INT8_MIN;
	static int8_t x384 = INT8_MAX;

	t65 = ((x381*(x382-x383))<x384);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x386 = UINT8_MAX;
	int32_t x387 = -1;
	static int16_t x388 = 216;
	int32_t t66 = 107899132;

	t66 = ((x385*(x386-x387))<x388);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x393 = UINT32_MAX;
	int8_t x394 = INT8_MIN;
	uint8_t x395 = 2U;
	int32_t x396 = INT32_MAX;
	volatile int32_t t67 = 3;

	t67 = ((x393*(x394-x395))<x396);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x397 = INT8_MIN;
	uint16_t x398 = UINT16_MAX;
	static int8_t x399 = -1;
	uint32_t x400 = 20U;

	t68 = ((x397*(x398-x399))<x400);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x406 = 8234U;
	int8_t x407 = 1;
	volatile uint64_t x408 = 240192519594LLU;
	int32_t t69 = 1267;

	t69 = ((x405*(x406-x407))<x408);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x409 = 29965216809232789LLU;
	volatile int8_t x410 = -1;
	volatile int16_t x411 = -692;
	volatile int32_t t70 = -275626;

	t70 = ((x409*(x410-x411))<x412);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x413 = UINT16_MAX;
	int8_t x414 = INT8_MIN;
	static uint32_t x416 = 253966U;
	volatile int32_t t71 = 29;

	t71 = ((x413*(x414-x415))<x416);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x421 = -1LL;
	static uint32_t x422 = 1U;
	static int8_t x423 = -6;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t72 = 1371212;

	t72 = ((x421*(x422-x423))<x424);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x425 = 1129;
	static uint8_t x426 = 4U;
	volatile int8_t x427 = -1;
	int8_t x428 = -1;
	int32_t t73 = -19936;

	t73 = ((x425*(x426-x427))<x428);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x429 = 31LL;
	int64_t x430 = -418397990LL;
	int16_t x431 = INT16_MIN;
	static int64_t x432 = INT64_MIN;
	volatile int32_t t74 = -152;

	t74 = ((x429*(x430-x431))<x432);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x433 = INT8_MIN;
	int8_t x434 = 0;
	uint16_t x435 = 86U;
	volatile int8_t x436 = -47;
	int32_t t75 = 0;

	t75 = ((x433*(x434-x435))<x436);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x438 = -1;
	volatile int32_t x439 = INT32_MAX;
	uint8_t x440 = 2U;
	int32_t t76 = 836;

	t76 = ((x437*(x438-x439))<x440);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x443 = 1;

	t77 = ((x441*(x442-x443))<x444);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x445 = 244326922898870LL;
	uint64_t x446 = 76200056LLU;
	int64_t x447 = INT64_MAX;
	int32_t t78 = -239149995;

	t78 = ((x445*(x446-x447))<x448);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x453 = 1U;
	static int16_t x454 = 613;
	int16_t x455 = INT16_MIN;
	static int16_t x456 = INT16_MAX;
	int32_t t79 = -253927;

	t79 = ((x453*(x454-x455))<x456);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x461 = 44;
	int8_t x462 = 1;
	volatile int8_t x463 = INT8_MIN;
	int32_t x464 = INT32_MIN;
	static int32_t t80 = -471157;

	t80 = ((x461*(x462-x463))<x464);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x469 = -1;
	int64_t x470 = -1LL;
	static int8_t x471 = INT8_MAX;
	volatile int32_t t81 = -11987354;

	t81 = ((x469*(x470-x471))<x472);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x473 = 0;
	static uint32_t x474 = 5449U;
	int64_t x475 = 469081106562008LL;
	volatile int16_t x476 = -395;

	t82 = ((x473*(x474-x475))<x476);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x481 = -236358LL;
	uint32_t x482 = 502216664U;
	static uint16_t x483 = UINT16_MAX;

	t83 = ((x481*(x482-x483))<x484);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x485 = -2;
	int8_t x486 = -1;
	int16_t x487 = INT16_MIN;
	uint64_t x488 = 2644186900222LLU;
	volatile int32_t t84 = 216555;

	t84 = ((x485*(x486-x487))<x488);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x489 = -37;
	int8_t x490 = INT8_MAX;
	volatile int16_t x492 = INT16_MAX;
	int32_t t85 = 3564624;

	t85 = ((x489*(x490-x491))<x492);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x493 = 1757;
	int8_t x495 = 0;
	int8_t x496 = -1;
	static int32_t t86 = -25357818;

	t86 = ((x493*(x494-x495))<x496);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x498 = UINT64_MAX;
	int64_t x499 = -1LL;
	int16_t x500 = INT16_MAX;
	volatile int32_t t87 = 23;

	t87 = ((x497*(x498-x499))<x500);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x501 = -956139286011987LL;
	uint8_t x502 = UINT8_MAX;
	volatile int32_t x504 = INT32_MIN;
	volatile int32_t t88 = 1228545;

	t88 = ((x501*(x502-x503))<x504);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x509 = INT16_MIN;
	int8_t x510 = INT8_MIN;
	volatile int16_t x511 = INT16_MAX;
	uint8_t x512 = UINT8_MAX;

	t89 = ((x509*(x510-x511))<x512);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x513 = INT32_MAX;
	static uint8_t x514 = 0U;
	static uint32_t x515 = 33076486U;
	static volatile int32_t t90 = 116;

	t90 = ((x513*(x514-x515))<x516);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x519 = 33U;
	static int64_t x520 = -1LL;

	t91 = ((x517*(x518-x519))<x520);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x525 = -1;
	uint64_t x528 = 151639433LLU;
	volatile int32_t t92 = 137566;

	t92 = ((x525*(x526-x527))<x528);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x537 = UINT64_MAX;
	uint32_t x538 = 96466U;
	int16_t x539 = INT16_MIN;
	int8_t x540 = -1;
	int32_t t93 = 891980214;

	t93 = ((x537*(x538-x539))<x540);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x541 = -1;
	int8_t x542 = INT8_MIN;
	static int64_t x543 = 9901LL;
	volatile int32_t t94 = 2;

	t94 = ((x541*(x542-x543))<x544);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x545 = -1;
	uint8_t x546 = 0U;
	int8_t x547 = -1;
	static volatile int32_t t95 = 6565;

	t95 = ((x545*(x546-x547))<x548);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x549 = UINT32_MAX;
	int16_t x551 = -1493;
	uint16_t x552 = 16251U;
	volatile int32_t t96 = 39069;

	t96 = ((x549*(x550-x551))<x552);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x553 = UINT32_MAX;
	static int64_t x554 = 0LL;
	static int64_t x556 = INT64_MAX;

	t97 = ((x553*(x554-x555))<x556);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x561 = 128U;
	int64_t x563 = -443LL;
	volatile uint8_t x564 = 1U;
	volatile int32_t t98 = 85593;

	t98 = ((x561*(x562-x563))<x564);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x565 = 34U;
	int32_t x566 = -1;
	static volatile int8_t x567 = INT8_MAX;
	int8_t x568 = 6;
	int32_t t99 = -921078;

	t99 = ((x565*(x566-x567))<x568);

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

