#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x7 = 64270795LL;
int16_t x8 = INT16_MIN;
int16_t x28 = 1838;
uint64_t x36 = UINT64_MAX;
uint64_t x38 = 654681124502LLU;
int16_t x40 = INT16_MIN;
volatile uint8_t x49 = 2U;
uint8_t x80 = UINT8_MAX;
static uint16_t x90 = 506U;
int16_t x91 = INT16_MAX;
int8_t x120 = INT8_MAX;
int8_t x122 = INT8_MIN;
uint16_t x126 = 13U;
int16_t x128 = INT16_MIN;
uint16_t x129 = UINT16_MAX;
uint16_t x131 = UINT16_MAX;
int16_t x132 = -1;
volatile int32_t t12 = 15160654;
static int32_t x135 = INT32_MAX;
int64_t x140 = 3LL;
uint64_t x152 = 251576173LLU;
int8_t x154 = -8;
static int32_t x170 = INT32_MAX;
uint32_t x172 = 738U;
static uint32_t t20 = 480180128U;
volatile uint16_t x173 = 713U;
volatile int32_t x174 = -1;
static volatile int32_t t21 = 1804230;
uint32_t x179 = 3U;
static volatile int32_t x183 = 1025;
volatile uint32_t t23 = 2034U;
volatile int16_t x192 = INT16_MAX;
uint32_t t24 = 154825007U;
volatile int16_t x218 = INT16_MIN;
int64_t t27 = -14943812LL;
static volatile uint32_t t28 = 30945U;
int16_t x226 = INT16_MIN;
int64_t t29 = 2375419352LL;
int64_t x231 = INT64_MIN;
static uint64_t x232 = 1120462858158173957LLU;
int8_t x237 = INT8_MAX;
uint64_t x238 = 2943LLU;
volatile uint64_t t32 = 112979161LLU;
int8_t x282 = INT8_MIN;
uint8_t x295 = 2U;
int64_t x301 = INT64_MAX;
static volatile int16_t x332 = -1;
volatile int16_t x338 = -93;
uint32_t x370 = 449U;
int8_t x386 = INT8_MAX;
volatile int64_t t46 = -4442564LL;
int64_t x391 = INT64_MIN;
uint8_t x396 = UINT8_MAX;
volatile int32_t t48 = -26757157;
volatile uint32_t t49 = 4062U;
int8_t x411 = -47;
volatile int64_t t50 = 31529152348535LL;
static volatile int32_t x414 = INT32_MAX;
int16_t x415 = -1;
int8_t x417 = 0;
int32_t x419 = INT32_MIN;
int8_t x425 = INT8_MAX;
int64_t x426 = INT64_MIN;
int16_t x428 = INT16_MIN;
static uint64_t x431 = 40016750716LLU;
volatile int8_t x459 = INT8_MIN;
uint8_t x460 = 27U;
uint64_t x473 = 1LLU;
int32_t x474 = INT32_MAX;
uint32_t x491 = 61176255U;
int16_t x492 = -47;
int32_t t61 = -78387;
int32_t x504 = 290895240;
uint8_t x505 = 1U;
static uint32_t x507 = UINT32_MAX;
int16_t x527 = -1;
uint8_t x538 = UINT8_MAX;
volatile uint8_t x569 = 6U;
uint16_t x576 = 14U;
int8_t x577 = 6;
uint64_t x589 = UINT64_MAX;
uint64_t x590 = UINT64_MAX;
static volatile uint64_t t71 = 27385610321077756LLU;
uint8_t x603 = 7U;
uint64_t t72 = 0LLU;
uint32_t x606 = 14140U;
uint64_t t74 = 7938104LLU;
volatile int64_t x631 = INT64_MIN;
volatile int32_t x643 = 2;
static int64_t x650 = INT64_MAX;
uint64_t x652 = UINT64_MAX;
volatile uint64_t t80 = 112LLU;
int8_t x659 = -1;
uint32_t t82 = 3335U;
volatile uint32_t x661 = UINT32_MAX;
int8_t x681 = INT8_MAX;
int32_t t84 = -6906;
int8_t x689 = INT8_MAX;
int32_t t86 = 18123;
int8_t x708 = -1;
uint64_t x718 = 4515109LLU;
volatile int32_t x720 = 1;
uint8_t x721 = 7U;
int16_t x732 = INT16_MIN;
uint8_t x735 = UINT8_MAX;
uint64_t t92 = 1839910755104497745LLU;
uint8_t x770 = 126U;
int32_t x771 = -1;


void f0(void) {
	uint64_t x5 = 1147318834LLU;
	uint64_t x6 = 16LLU;
	uint64_t t0 = 4533939262648LLU;

	t0 = ((x5<<(x6==x7))/x8);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x25 = 1453697LLU;
	uint32_t x26 = 54811084U;
	int16_t x27 = -1;
	static volatile uint64_t t1 = 310666564964434LLU;

	t1 = ((x25<<(x26==x27))/x28);

	if (t1 != 790LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x33 = INT32_MAX;
	static int16_t x34 = -17;
	int64_t x35 = INT64_MAX;
	uint64_t t2 = 693041610LLU;

	t2 = ((x33<<(x34==x35))/x36);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x37 = 1;
	uint16_t x39 = UINT16_MAX;
	static volatile int32_t t3 = -61444527;

	t3 = ((x37<<(x38==x39))/x40);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x50 = 68;
	uint32_t x51 = 39U;
	uint16_t x52 = 402U;
	volatile int32_t t4 = -110;

	t4 = ((x49<<(x50==x51))/x52);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x61 = INT16_MAX;
	static int8_t x62 = INT8_MAX;
	static int32_t x63 = -1;
	static uint8_t x64 = 13U;
	volatile int32_t t5 = 18596473;

	t5 = ((x61<<(x62==x63))/x64);

	if (t5 != 2520) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x73 = 27U;
	static int8_t x74 = -1;
	static volatile int32_t x75 = -3151669;
	int32_t x76 = INT32_MIN;
	volatile int32_t t6 = 8653731;

	t6 = ((x73<<(x74==x75))/x76);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x77 = 1U;
	uint8_t x78 = 0U;
	volatile uint32_t x79 = 558007454U;
	static uint32_t t7 = 18171U;

	t7 = ((x77<<(x78==x79))/x80);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x89 = 1U;
	int8_t x92 = INT8_MIN;
	volatile int32_t t8 = 180691;

	t8 = ((x89<<(x90==x91))/x92);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t x118 = 174;
	int32_t x119 = 24707266;
	static int32_t t9 = -808;

	t9 = ((x117<<(x118==x119))/x120);

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x121 = 245U;
	uint64_t x123 = 16935632LLU;
	volatile int8_t x124 = INT8_MIN;
	uint32_t t10 = 852798807U;

	t10 = ((x121<<(x122==x123))/x124);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x125 = 1U;
	int16_t x127 = INT16_MIN;
	volatile int32_t t11 = -1001;

	t11 = ((x125<<(x126==x127))/x128);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x130 = -1;

	t12 = ((x129<<(x130==x131))/x132);

	if (t12 != -65535) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x133 = 0U;
	static int8_t x134 = INT8_MAX;
	static int64_t x136 = 27LL;
	int64_t t13 = -62LL;

	t13 = ((x133<<(x134==x135))/x136);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x137 = 1LL;
	static uint16_t x138 = 1352U;
	int64_t x139 = INT64_MIN;
	int64_t t14 = 3961876509LL;

	t14 = ((x137<<(x138==x139))/x140);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x145 = INT16_MAX;
	volatile uint8_t x146 = UINT8_MAX;
	uint16_t x147 = 227U;
	uint8_t x148 = UINT8_MAX;
	int32_t t15 = 7414922;

	t15 = ((x145<<(x146==x147))/x148);

	if (t15 != 128) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x149 = UINT8_MAX;
	static volatile int64_t x150 = INT64_MIN;
	uint64_t x151 = 6398326391873334LLU;
	volatile uint64_t t16 = 62LLU;

	t16 = ((x149<<(x150==x151))/x152);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x153 = UINT32_MAX;
	int8_t x155 = INT8_MIN;
	static int8_t x156 = INT8_MAX;
	static uint32_t t17 = 52085173U;

	t17 = ((x153<<(x154==x155))/x156);

	if (t17 != 33818640U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x157 = UINT16_MAX;
	int8_t x158 = -11;
	uint16_t x159 = 42U;
	uint64_t x160 = UINT64_MAX;
	uint64_t t18 = 29977325571338269LLU;

	t18 = ((x157<<(x158==x159))/x160);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x165 = 2354LLU;
	int32_t x166 = -1;
	static int8_t x167 = -1;
	uint64_t x168 = 24559LLU;
	uint64_t t19 = 4126472020LLU;

	t19 = ((x165<<(x166==x167))/x168);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x169 = 67U;
	uint64_t x171 = 12710LLU;

	t20 = ((x169<<(x170==x171))/x172);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x175 = -4055728437LL;
	int16_t x176 = -1;

	t21 = ((x173<<(x174==x175))/x176);

	if (t21 != -713) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x177 = 19U;
	uint64_t x178 = 4562865600766LLU;
	uint64_t x180 = 3LLU;
	volatile uint64_t t22 = 5385400544856149LLU;

	t22 = ((x177<<(x178==x179))/x180);

	if (t22 != 6LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x181 = INT16_MAX;
	uint16_t x182 = 54U;
	volatile uint32_t x184 = 9606U;

	t23 = ((x181<<(x182==x183))/x184);

	if (t23 != 3U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x189 = 109059U;
	int16_t x190 = INT16_MIN;
	static int32_t x191 = -10;

	t24 = ((x189<<(x190==x191))/x192);

	if (t24 != 3U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x193 = 108446562LLU;
	uint8_t x194 = 14U;
	int16_t x195 = -6;
	static int16_t x196 = -58;
	uint64_t t25 = 17782421LLU;

	t25 = ((x193<<(x194==x195))/x196);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x201 = 12098736562336689LLU;
	static int32_t x202 = INT32_MIN;
	int64_t x203 = -1LL;
	int16_t x204 = INT16_MIN;
	volatile uint64_t t26 = 0LLU;

	t26 = ((x201<<(x202==x203))/x204);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x217 = 101U;
	int32_t x219 = 466;
	static int64_t x220 = 25446599LL;

	t27 = ((x217<<(x218==x219))/x220);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x221 = 15U;
	int64_t x222 = INT64_MAX;
	uint32_t x223 = 6315U;
	static int8_t x224 = -1;

	t28 = ((x221<<(x222==x223))/x224);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x225 = 2537792892108920272LL;
	int8_t x227 = INT8_MAX;
	uint8_t x228 = UINT8_MAX;

	t29 = ((x225<<(x226==x227))/x228);

	if (t29 != 9952128988662432LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x229 = UINT64_MAX;
	uint64_t x230 = UINT64_MAX;
	volatile uint64_t t30 = 425LLU;

	t30 = ((x229<<(x230==x231))/x232);

	if (t30 != 16LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x239 = 1724958325540766668LL;
	int16_t x240 = INT16_MIN;
	int32_t t31 = -184;

	t31 = ((x237<<(x238==x239))/x240);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int8_t x242 = -33;
	int16_t x243 = INT16_MAX;
	volatile int8_t x244 = INT8_MAX;

	t32 = ((x241<<(x242==x243))/x244);

	if (t32 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x253 = 31U;
	uint16_t x254 = UINT16_MAX;
	volatile uint64_t x255 = 11LLU;
	int8_t x256 = -1;
	volatile int32_t t33 = -76300867;

	t33 = ((x253<<(x254==x255))/x256);

	if (t33 != -31) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x257 = 15;
	int32_t x258 = INT32_MIN;
	static int8_t x259 = -1;
	int32_t x260 = 774;
	int32_t t34 = -125375765;

	t34 = ((x257<<(x258==x259))/x260);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x265 = 7240;
	uint8_t x266 = 14U;
	volatile int32_t x267 = 96;
	static uint32_t x268 = 874U;
	uint32_t t35 = 752225113U;

	t35 = ((x265<<(x266==x267))/x268);

	if (t35 != 8U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x273 = UINT64_MAX;
	static uint64_t x274 = 5050LLU;
	int16_t x275 = INT16_MIN;
	volatile uint8_t x276 = 5U;
	uint64_t t36 = 20954943731090247LLU;

	t36 = ((x273<<(x274==x275))/x276);

	if (t36 != 3689348814741910323LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x281 = 0U;
	static uint32_t x283 = UINT32_MAX;
	int8_t x284 = -1;
	volatile int32_t t37 = -439479;

	t37 = ((x281<<(x282==x283))/x284);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x293 = 1931U;
	volatile int32_t x294 = INT32_MIN;
	volatile uint8_t x296 = 2U;
	static int32_t t38 = -787;

	t38 = ((x293<<(x294==x295))/x296);

	if (t38 != 965) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x302 = INT8_MIN;
	uint8_t x303 = UINT8_MAX;
	static int8_t x304 = -1;
	int64_t t39 = 1962428929LL;

	t39 = ((x301<<(x302==x303))/x304);

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x321 = 1;
	int64_t x322 = INT64_MIN;
	int16_t x323 = -1;
	static volatile int8_t x324 = INT8_MIN;
	int32_t t40 = -263252;

	t40 = ((x321<<(x322==x323))/x324);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x329 = 8U;
	int8_t x330 = INT8_MIN;
	int64_t x331 = 2252LL;
	volatile int32_t t41 = 227022;

	t41 = ((x329<<(x330==x331))/x332);

	if (t41 != -8) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x337 = 33408282LL;
	static int8_t x339 = INT8_MAX;
	int8_t x340 = 19;
	int64_t t42 = -17970342047469423LL;

	t42 = ((x337<<(x338==x339))/x340);

	if (t42 != 1758330LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x357 = UINT8_MAX;
	int32_t x358 = INT32_MAX;
	int32_t x359 = -1;
	int16_t x360 = 800;
	static volatile int32_t t43 = -395493704;

	t43 = ((x357<<(x358==x359))/x360);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x369 = UINT64_MAX;
	int16_t x371 = INT16_MAX;
	static volatile int8_t x372 = 63;
	static volatile uint64_t t44 = 22954656670187791LLU;

	t44 = ((x369<<(x370==x371))/x372);

	if (t44 != 292805461487453200LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x377 = 51462293556LLU;
	static int16_t x378 = 10655;
	volatile uint8_t x379 = 2U;
	static int16_t x380 = INT16_MIN;
	uint64_t t45 = 59623LLU;

	t45 = ((x377<<(x378==x379))/x380);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x385 = 28023128746886LL;
	volatile uint8_t x387 = 2U;
	int32_t x388 = 596557922;

	t46 = ((x385<<(x386==x387))/x388);

	if (t46 != 46974LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x389 = INT64_MAX;
	uint64_t x390 = 2542LLU;
	uint16_t x392 = 7U;
	int64_t t47 = 0LL;

	t47 = ((x389<<(x390==x391))/x392);

	if (t47 != 1317624576693539401LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x393 = UINT8_MAX;
	uint32_t x394 = 915792U;
	int8_t x395 = -2;

	t48 = ((x393<<(x394==x395))/x396);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x405 = 12U;
	int32_t x406 = -36974;
	static int32_t x407 = -2102;
	static volatile uint32_t x408 = UINT32_MAX;

	t49 = ((x405<<(x406==x407))/x408);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x409 = 10087U;
	uint8_t x410 = 19U;
	int64_t x412 = -1LL;

	t50 = ((x409<<(x410==x411))/x412);

	if (t50 != -10087LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x413 = UINT64_MAX;
	int32_t x416 = INT32_MIN;
	static volatile uint64_t t51 = 25625LLU;

	t51 = ((x413<<(x414==x415))/x416);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x418 = 12935;
	int16_t x420 = -1;
	int32_t t52 = 253;

	t52 = ((x417<<(x418==x419))/x420);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x421 = 0U;
	volatile uint64_t x422 = 8LLU;
	uint32_t x423 = 14U;
	int8_t x424 = INT8_MIN;
	uint32_t t53 = 38496264U;

	t53 = ((x421<<(x422==x423))/x424);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x427 = 7LLU;
	volatile int32_t t54 = 5281;

	t54 = ((x425<<(x426==x427))/x428);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x429 = 0;
	volatile int16_t x430 = INT16_MIN;
	uint16_t x432 = 1240U;
	volatile int32_t t55 = 183171;

	t55 = ((x429<<(x430==x431))/x432);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x441 = 24U;
	int64_t x442 = 196378LL;
	uint16_t x443 = UINT16_MAX;
	int8_t x444 = INT8_MAX;
	static int32_t t56 = 9483857;

	t56 = ((x441<<(x442==x443))/x444);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x457 = INT16_MAX;
	int64_t x458 = -328329731185181227LL;
	volatile int32_t t57 = 1;

	t57 = ((x457<<(x458==x459))/x460);

	if (t57 != 1213) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x461 = 11;
	uint16_t x462 = 25U;
	int64_t x463 = INT64_MIN;
	int32_t x464 = -1;
	static volatile int32_t t58 = 440460;

	t58 = ((x461<<(x462==x463))/x464);

	if (t58 != -11) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x475 = -170069164231LL;
	volatile uint16_t x476 = 421U;
	volatile uint64_t t59 = 11351702873614661LLU;

	t59 = ((x473<<(x474==x475))/x476);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x481 = 1;
	int32_t x482 = -124;
	int64_t x483 = 1579343145103784LL;
	int16_t x484 = -1;
	volatile int32_t t60 = 37836;

	t60 = ((x481<<(x482==x483))/x484);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x489 = 1U;
	volatile uint64_t x490 = 580459008767947LLU;

	t61 = ((x489<<(x490==x491))/x492);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x501 = 176LL;
	int16_t x502 = INT16_MAX;
	volatile uint64_t x503 = UINT64_MAX;
	int64_t t62 = -38304379LL;

	t62 = ((x501<<(x502==x503))/x504);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x506 = 22540U;
	int16_t x508 = INT16_MIN;
	volatile int32_t t63 = -798617;

	t63 = ((x505<<(x506==x507))/x508);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x525 = 9596211U;
	uint8_t x526 = 21U;
	int64_t x528 = INT64_MIN;
	volatile int64_t t64 = 17612925702LL;

	t64 = ((x525<<(x526==x527))/x528);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x529 = 51200504;
	volatile uint64_t x530 = 975811072630LLU;
	volatile int64_t x531 = -1LL;
	static int8_t x532 = 37;
	volatile int32_t t65 = 53707393;

	t65 = ((x529<<(x530==x531))/x532);

	if (t65 != 1383797) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x537 = UINT8_MAX;
	volatile int32_t x539 = INT32_MAX;
	static int16_t x540 = -1;
	volatile int32_t t66 = -960280;

	t66 = ((x537<<(x538==x539))/x540);

	if (t66 != -255) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x541 = 42U;
	int16_t x542 = -1;
	volatile int8_t x543 = INT8_MIN;
	static volatile uint32_t x544 = 21173363U;
	volatile uint32_t t67 = 499805173U;

	t67 = ((x541<<(x542==x543))/x544);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x570 = -1;
	uint32_t x571 = 1505121987U;
	uint8_t x572 = 3U;
	volatile int32_t t68 = 68921;

	t68 = ((x569<<(x570==x571))/x572);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x573 = 31653300433LL;
	int64_t x574 = INT64_MIN;
	uint16_t x575 = UINT16_MAX;
	volatile int64_t t69 = -480076269521148227LL;

	t69 = ((x573<<(x574==x575))/x576);

	if (t69 != 2260950030LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x578 = INT64_MIN;
	uint16_t x579 = UINT16_MAX;
	int8_t x580 = 12;
	static volatile int32_t t70 = -556247;

	t70 = ((x577<<(x578==x579))/x580);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x591 = 0U;
	static uint16_t x592 = 7579U;

	t71 = ((x589<<(x590==x591))/x592);

	if (t71 != 2433928496333230LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x601 = 120336817908LLU;
	int8_t x602 = INT8_MAX;
	static int32_t x604 = -251812;

	t72 = ((x601<<(x602==x603))/x604);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x605 = INT8_MAX;
	int8_t x607 = INT8_MIN;
	int32_t x608 = INT32_MAX;
	int32_t t73 = 915;

	t73 = ((x605<<(x606==x607))/x608);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x613 = UINT64_MAX;
	static int16_t x614 = -10328;
	static volatile int16_t x615 = -1;
	uint8_t x616 = UINT8_MAX;

	t74 = ((x613<<(x614==x615))/x616);

	if (t74 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x617 = INT16_MAX;
	int8_t x618 = INT8_MIN;
	uint64_t x619 = UINT64_MAX;
	int32_t x620 = INT32_MIN;
	int32_t t75 = 445;

	t75 = ((x617<<(x618==x619))/x620);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x629 = UINT32_MAX;
	int32_t x630 = INT32_MIN;
	int64_t x632 = INT64_MAX;
	volatile int64_t t76 = 7690LL;

	t76 = ((x629<<(x630==x631))/x632);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x633 = 0;
	int8_t x634 = 2;
	volatile int16_t x635 = 19;
	uint64_t x636 = 90527302828449243LLU;
	volatile uint64_t t77 = 855024868LLU;

	t77 = ((x633<<(x634==x635))/x636);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x641 = UINT8_MAX;
	uint64_t x642 = 1033LLU;
	static int64_t x644 = INT64_MAX;
	volatile int64_t t78 = 5910166LL;

	t78 = ((x641<<(x642==x643))/x644);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x645 = 3027LLU;
	int16_t x646 = INT16_MAX;
	int8_t x647 = 0;
	uint32_t x648 = 128391U;
	volatile uint64_t t79 = 22616888658072097LLU;

	t79 = ((x645<<(x646==x647))/x648);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x649 = 9450706332LLU;
	static volatile int16_t x651 = INT16_MIN;

	t80 = ((x649<<(x650==x651))/x652);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x653 = 177LLU;
	static int16_t x654 = 413;
	static int32_t x655 = -1;
	uint32_t x656 = 80U;
	uint64_t t81 = 133LLU;

	t81 = ((x653<<(x654==x655))/x656);

	if (t81 != 2LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x657 = 267U;
	uint32_t x658 = UINT32_MAX;
	static uint32_t x660 = 139786040U;

	t82 = ((x657<<(x658==x659))/x660);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x662 = UINT32_MAX;
	static int32_t x663 = INT32_MAX;
	volatile int8_t x664 = 55;
	volatile uint32_t t83 = 15U;

	t83 = ((x661<<(x662==x663))/x664);

	if (t83 != 78090314U) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x682 = INT8_MAX;
	uint32_t x683 = UINT32_MAX;
	int32_t x684 = -1;

	t84 = ((x681<<(x682==x683))/x684);

	if (t84 != -127) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x690 = 3397870973613LLU;
	static int8_t x691 = INT8_MAX;
	uint16_t x692 = 26487U;
	static volatile int32_t t85 = 576;

	t85 = ((x689<<(x690==x691))/x692);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x701 = 3967U;
	uint32_t x702 = 60U;
	int8_t x703 = INT8_MIN;
	int32_t x704 = INT32_MAX;

	t86 = ((x701<<(x702==x703))/x704);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x705 = 6U;
	uint16_t x706 = UINT16_MAX;
	static int8_t x707 = -1;
	uint32_t t87 = 52U;

	t87 = ((x705<<(x706==x707))/x708);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x717 = INT64_MAX;
	int64_t x719 = 7196700799797064LL;
	int64_t t88 = INT64_MAX;

	t88 = ((x717<<(x718==x719))/x720);

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x722 = INT8_MIN;
	uint32_t x723 = UINT32_MAX;
	static uint64_t x724 = 3848418826680213391LLU;
	static volatile uint64_t t89 = 880778294LLU;

	t89 = ((x721<<(x722==x723))/x724);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x729 = 3809816631715LL;
	volatile int32_t x730 = INT32_MIN;
	int64_t x731 = INT64_MIN;
	int64_t t90 = -469819808LL;

	t90 = ((x729<<(x730==x731))/x732);

	if (t90 != -116266376LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x733 = 6;
	int16_t x734 = INT16_MIN;
	uint16_t x736 = 6039U;
	int32_t t91 = -9735352;

	t91 = ((x733<<(x734==x735))/x736);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x737 = 463LLU;
	static int32_t x738 = 21;
	static uint16_t x739 = 1115U;
	volatile uint64_t x740 = 14002759LLU;

	t92 = ((x737<<(x738==x739))/x740);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x745 = 0;
	volatile int8_t x746 = INT8_MAX;
	volatile int32_t x747 = INT32_MAX;
	int32_t x748 = -1;
	volatile int32_t t93 = 2;

	t93 = ((x745<<(x746==x747))/x748);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x749 = 3U;
	int64_t x750 = INT64_MIN;
	int64_t x751 = -1LL;
	int16_t x752 = 2177;
	static volatile int32_t t94 = -1;

	t94 = ((x749<<(x750==x751))/x752);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x765 = UINT32_MAX;
	static volatile int8_t x766 = INT8_MAX;
	static int32_t x767 = INT32_MAX;
	int16_t x768 = INT16_MIN;
	uint32_t t95 = 297351845U;

	t95 = ((x765<<(x766==x767))/x768);

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x769 = UINT64_MAX;
	static int64_t x772 = 270447053872524832LL;
	static uint64_t t96 = 5112747238934065359LLU;

	t96 = ((x769<<(x770==x771))/x772);

	if (t96 != 68LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x773 = 1;
	static uint64_t x774 = 6LLU;
	int32_t x775 = -220;
	static int8_t x776 = -1;
	volatile int32_t t97 = -5197700;

	t97 = ((x773<<(x774==x775))/x776);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x781 = 11877U;
	uint8_t x782 = UINT8_MAX;
	int16_t x783 = INT16_MIN;
	volatile int64_t x784 = INT64_MIN;
	int64_t t98 = 102172LL;

	t98 = ((x781<<(x782==x783))/x784);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x793 = UINT16_MAX;
	int64_t x794 = -1LL;
	static volatile int64_t x795 = -425LL;
	static int16_t x796 = 1660;
	volatile int32_t t99 = 59;

	t99 = ((x793<<(x794==x795))/x796);

	if (t99 != 39) { NG(); } else { ; }
	
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

