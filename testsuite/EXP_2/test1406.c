#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x5 = UINT32_MAX;
uint64_t x6 = 80950418008831LLU;
int8_t x8 = 42;
int16_t x19 = 1673;
int64_t t1 = 112837456316LL;
uint64_t t2 = 445392065541091LLU;
uint16_t x43 = 1U;
uint64_t t5 = 114LLU;
uint32_t x51 = UINT32_MAX;
int8_t x62 = INT8_MAX;
int16_t x74 = INT16_MIN;
volatile int32_t t10 = -3;
uint64_t x92 = 42696502400774957LLU;
volatile int32_t t13 = -974215;
static volatile int16_t x104 = -1;
static int8_t x113 = 1;
int64_t x115 = 7050LL;
volatile uint64_t t17 = 9936457LLU;
int32_t x131 = 1;
int64_t x146 = INT64_MIN;
int16_t x169 = -3844;
volatile int32_t x179 = INT32_MIN;
static uint64_t x190 = 50428960758LLU;
int8_t x191 = INT8_MIN;
int64_t t24 = -14440LL;
int32_t x195 = 208110146;
uint16_t x210 = UINT16_MAX;
uint32_t x215 = 102761976U;
static int32_t t28 = -19;
static int64_t x239 = INT64_MAX;
int64_t x269 = -1LL;
int64_t t32 = 156833LL;
uint64_t x282 = 156005300991LLU;
int8_t x288 = 9;
uint8_t x303 = UINT8_MAX;
volatile uint64_t t38 = 9919431LLU;
static volatile int32_t x319 = -1;
int16_t x322 = INT16_MIN;
int16_t x332 = INT16_MIN;
uint64_t t44 = 217596943LLU;
uint8_t x355 = 97U;
uint16_t x363 = 7U;
uint64_t x375 = UINT64_MAX;
int64_t x385 = -1LL;
int16_t x390 = -2;
int32_t x392 = INT32_MIN;
static volatile uint64_t t51 = 10806LLU;
uint64_t x394 = 121LLU;
int8_t x395 = -1;
int32_t t52 = 1;
int64_t x422 = -25648LL;
static int64_t x423 = 726LL;
static uint8_t x431 = UINT8_MAX;
int16_t x465 = INT16_MIN;
static int64_t x466 = INT64_MIN;
uint64_t x468 = 58445449069LLU;
int16_t x492 = -2066;
volatile uint32_t x499 = 3934U;
static int8_t x500 = -1;
static int64_t x522 = -2804337LL;
volatile int8_t x523 = INT8_MIN;
uint16_t x524 = 486U;
static volatile int32_t t61 = 123313;
int32_t x528 = 673035146;
int32_t t62 = 376196;
volatile int32_t t63 = 12300;
static uint16_t x535 = UINT16_MAX;
uint64_t x539 = 4LLU;
volatile uint8_t x540 = 1U;
uint64_t x544 = 39347717LLU;
int16_t x554 = -722;
int64_t x555 = INT64_MAX;
volatile uint8_t x569 = 1U;
int64_t x571 = INT64_MAX;
uint16_t x572 = 27U;
volatile int64_t t70 = -1447344359106478415LL;
int64_t x593 = -1LL;
uint8_t x595 = UINT8_MAX;
static int64_t x609 = 75821492632983972LL;
static int16_t x610 = INT16_MIN;
int8_t x630 = INT8_MIN;
int64_t x633 = -1LL;
static volatile int32_t x635 = INT32_MIN;
int16_t x636 = INT16_MAX;
uint8_t x643 = UINT8_MAX;
static uint16_t x653 = 5838U;
int64_t x669 = -1LL;
int8_t x684 = 7;
volatile int32_t t83 = -13;
static int64_t x694 = INT64_MIN;
int8_t x710 = INT8_MIN;
int32_t t86 = -530261;
volatile uint8_t x720 = 91U;
volatile uint32_t t88 = 39U;
volatile int32_t x730 = INT32_MIN;
int64_t x732 = -1LL;
uint16_t x733 = 1U;
int16_t x734 = INT16_MAX;
uint16_t x735 = UINT16_MAX;
static uint64_t x751 = 1992514664LLU;
uint8_t x761 = UINT8_MAX;
static uint32_t x768 = UINT32_MAX;
volatile uint16_t x774 = 0U;


void f0(void) {
	int8_t x7 = -1;
	volatile uint32_t t0 = 51056U;

	t0 = ((x5%(x6<x7))-x8);

	if (t0 != 4294967254U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x17 = -1LL;
	int32_t x18 = -1;
	int16_t x20 = -7795;

	t1 = ((x17%(x18<x19))-x20);

	if (t1 != 7795LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x21 = 29571297LLU;
	int16_t x22 = INT16_MIN;
	static int32_t x23 = INT32_MAX;
	static int16_t x24 = -6;

	t2 = ((x21%(x22<x23))-x24);

	if (t2 != 6LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x29 = -18631205LL;
	int32_t x30 = INT32_MIN;
	static volatile int32_t x31 = -1;
	volatile uint8_t x32 = UINT8_MAX;
	static volatile int64_t t3 = -654452977253828LL;

	t3 = ((x29%(x30<x31))-x32);

	if (t3 != -255LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = 58;
	int64_t x34 = INT64_MIN;
	int8_t x35 = -1;
	int8_t x36 = -3;
	volatile int32_t t4 = 1;

	t4 = ((x33%(x34<x35))-x36);

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x41 = UINT16_MAX;
	static int16_t x42 = -1;
	volatile uint64_t x44 = 150803LLU;

	t5 = ((x41%(x42<x43))-x44);

	if (t5 != 18446744073709400813LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = INT32_MAX;
	volatile uint64_t x52 = UINT64_MAX;
	uint64_t t6 = 874587LLU;

	t6 = ((x49%(x50<x51))-x52);

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x61 = INT8_MAX;
	uint8_t x63 = UINT8_MAX;
	int16_t x64 = INT16_MIN;
	volatile int32_t t7 = 1692;

	t7 = ((x61%(x62<x63))-x64);

	if (t7 != 32768) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x65 = INT16_MAX;
	int8_t x66 = INT8_MIN;
	int16_t x67 = 0;
	int8_t x68 = 35;
	int32_t t8 = 3024039;

	t8 = ((x65%(x66<x67))-x68);

	if (t8 != -35) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x73 = UINT8_MAX;
	volatile uint16_t x75 = UINT16_MAX;
	uint32_t x76 = 1U;
	volatile uint32_t t9 = UINT32_MAX;

	t9 = ((x73%(x74<x75))-x76);

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x81 = UINT16_MAX;
	static int32_t x82 = INT32_MIN;
	volatile uint8_t x83 = 125U;
	int8_t x84 = 0;

	t10 = ((x81%(x82<x83))-x84);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = 9;
	uint16_t x87 = 265U;
	uint16_t x88 = 335U;
	static int32_t t11 = -97114;

	t11 = ((x85%(x86<x87))-x88);

	if (t11 != -335) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x89 = UINT64_MAX;
	uint32_t x90 = 358041417U;
	int32_t x91 = -1;
	uint64_t t12 = 52841053622878063LLU;

	t12 = ((x89%(x90<x91))-x92);

	if (t12 != 18404047571308776659LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x93 = 260;
	volatile uint16_t x94 = 441U;
	int64_t x95 = INT64_MAX;
	int16_t x96 = -1;

	t13 = ((x93%(x94<x95))-x96);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x97 = INT32_MIN;
	volatile int32_t x98 = INT32_MIN;
	static int8_t x99 = -1;
	volatile int16_t x100 = INT16_MAX;
	static volatile int32_t t14 = 457;

	t14 = ((x97%(x98<x99))-x100);

	if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x101 = 4;
	uint8_t x102 = UINT8_MAX;
	static uint16_t x103 = UINT16_MAX;
	static int32_t t15 = 422111891;

	t15 = ((x101%(x102<x103))-x104);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x114 = -35148183177166322LL;
	int16_t x116 = -5338;
	int32_t t16 = 7786842;

	t16 = ((x113%(x114<x115))-x116);

	if (t16 != 5338) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x117 = UINT64_MAX;
	static volatile uint32_t x118 = UINT32_MAX;
	int64_t x119 = INT64_MAX;
	static int8_t x120 = 0;

	t17 = ((x117%(x118<x119))-x120);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x129 = 9U;
	volatile uint16_t x130 = 0U;
	uint64_t x132 = UINT64_MAX;
	uint64_t t18 = 7657709LLU;

	t18 = ((x129%(x130<x131))-x132);

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x133 = -1;
	int32_t x134 = INT32_MIN;
	int8_t x135 = -1;
	uint8_t x136 = 26U;
	volatile int32_t t19 = 3;

	t19 = ((x133%(x134<x135))-x136);

	if (t19 != -26) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x145 = 544084;
	static int8_t x147 = INT8_MAX;
	uint64_t x148 = 2163716290575069082LLU;
	static uint64_t t20 = 62158252977060LLU;

	t20 = ((x145%(x146<x147))-x148);

	if (t20 != 16283027783134482534LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = -7568;
	int32_t x151 = INT32_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t21 = -852456807;

	t21 = ((x149%(x150<x151))-x152);

	if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x170 = -843654812339004588LL;
	int16_t x171 = -1;
	uint64_t x172 = 1336961182324985124LLU;
	volatile uint64_t t22 = 1LLU;

	t22 = ((x169%(x170<x171))-x172);

	if (t22 != 17109782891384566492LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x177 = -1;
	volatile int64_t x178 = -16101573798984054LL;
	int16_t x180 = INT16_MIN;
	int32_t t23 = 258864;

	t23 = ((x177%(x178<x179))-x180);

	if (t23 != 32768) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x189 = INT32_MAX;
	int64_t x192 = -1LL;

	t24 = ((x189%(x190<x191))-x192);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x193 = INT16_MIN;
	volatile int64_t x194 = INT64_MIN;
	int16_t x196 = INT16_MAX;
	volatile int32_t t25 = 39;

	t25 = ((x193%(x194<x195))-x196);

	if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x197 = UINT16_MAX;
	int8_t x198 = INT8_MIN;
	volatile uint8_t x199 = UINT8_MAX;
	uint64_t x200 = 29736570LLU;
	static volatile uint64_t t26 = 17942828523398LLU;

	t26 = ((x197%(x198<x199))-x200);

	if (t26 != 18446744073679815046LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x209 = UINT8_MAX;
	int32_t x211 = 117853941;
	int8_t x212 = -45;
	volatile int32_t t27 = -174;

	t27 = ((x209%(x210<x211))-x212);

	if (t27 != 45) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x213 = INT8_MAX;
	uint64_t x214 = 7334942LLU;
	uint16_t x216 = 5303U;

	t28 = ((x213%(x214<x215))-x216);

	if (t28 != -5303) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x237 = -1;
	int32_t x238 = -1;
	static int32_t x240 = INT32_MAX;
	static volatile int32_t t29 = -531676;

	t29 = ((x237%(x238<x239))-x240);

	if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x249 = INT32_MIN;
	volatile int16_t x250 = INT16_MIN;
	static int16_t x251 = 3506;
	volatile uint8_t x252 = 1U;
	volatile int32_t t30 = 1031;

	t30 = ((x249%(x250<x251))-x252);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x257 = -93;
	static uint8_t x258 = UINT8_MAX;
	uint32_t x259 = UINT32_MAX;
	uint64_t x260 = 2300361085216365LLU;
	volatile uint64_t t31 = 2628LLU;

	t31 = ((x257%(x258<x259))-x260);

	if (t31 != 18444443712624335251LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x270 = -1;
	int8_t x271 = 0;
	int16_t x272 = INT16_MIN;

	t32 = ((x269%(x270<x271))-x272);

	if (t32 != 32768LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x273 = INT64_MIN;
	uint16_t x274 = UINT16_MAX;
	uint32_t x275 = 89244722U;
	volatile uint64_t x276 = UINT64_MAX;
	uint64_t t33 = 1680930404338701746LLU;

	t33 = ((x273%(x274<x275))-x276);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x277 = INT16_MIN;
	static int16_t x278 = 1;
	static uint16_t x279 = 8U;
	static int32_t x280 = 10758;
	int32_t t34 = -21208;

	t34 = ((x277%(x278<x279))-x280);

	if (t34 != -10758) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x281 = 24U;
	int32_t x283 = -1;
	volatile int32_t x284 = -1;
	int32_t t35 = 1;

	t35 = ((x281%(x282<x283))-x284);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x285 = 3114U;
	static uint8_t x286 = UINT8_MAX;
	uint32_t x287 = UINT32_MAX;
	volatile int32_t t36 = 101;

	t36 = ((x285%(x286<x287))-x288);

	if (t36 != -9) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x289 = 10U;
	uint8_t x290 = 7U;
	static int32_t x291 = INT32_MAX;
	int64_t x292 = 17869322LL;
	int64_t t37 = 1338772907391917LL;

	t37 = ((x289%(x290<x291))-x292);

	if (t37 != -17869322LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x301 = 202U;
	int64_t x302 = 0LL;
	uint64_t x304 = UINT64_MAX;

	t38 = ((x301%(x302<x303))-x304);

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x317 = INT64_MAX;
	static uint32_t x318 = 913773U;
	uint64_t x320 = 4360670150965062LLU;
	volatile uint64_t t39 = 97386210203864LLU;

	t39 = ((x317%(x318<x319))-x320);

	if (t39 != 18442383403558586554LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x321 = INT32_MAX;
	static int8_t x323 = INT8_MIN;
	int32_t x324 = INT32_MAX;
	volatile int32_t t40 = 12;

	t40 = ((x321%(x322<x323))-x324);

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x329 = 51U;
	static uint64_t x330 = 1315444832410109840LLU;
	int32_t x331 = INT32_MIN;
	int32_t t41 = -2239600;

	t41 = ((x329%(x330<x331))-x332);

	if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x337 = 3U;
	volatile int32_t x338 = INT32_MIN;
	static uint32_t x339 = UINT32_MAX;
	int16_t x340 = INT16_MAX;
	static volatile uint32_t t42 = 24951451U;

	t42 = ((x337%(x338<x339))-x340);

	if (t42 != 4294934529U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x341 = 14U;
	int32_t x342 = -20065037;
	int8_t x343 = 1;
	uint64_t x344 = UINT64_MAX;
	uint64_t t43 = 853489542LLU;

	t43 = ((x341%(x342<x343))-x344);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x345 = 243835729LLU;
	static volatile int8_t x346 = -1;
	int16_t x347 = INT16_MAX;
	volatile int16_t x348 = INT16_MIN;

	t44 = ((x345%(x346<x347))-x348);

	if (t44 != 32768LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x349 = -2;
	volatile int8_t x350 = INT8_MAX;
	int16_t x351 = INT16_MAX;
	static int64_t x352 = -1LL;
	static volatile int64_t t45 = -2972364LL;

	t45 = ((x349%(x350<x351))-x352);

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x353 = 8028349865LLU;
	int32_t x354 = INT32_MIN;
	uint16_t x356 = 12U;
	volatile uint64_t t46 = 435872720397LLU;

	t46 = ((x353%(x354<x355))-x356);

	if (t46 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x361 = 0U;
	static uint8_t x362 = 2U;
	volatile uint16_t x364 = 0U;
	static volatile int32_t t47 = 23;

	t47 = ((x361%(x362<x363))-x364);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x365 = -1;
	volatile int16_t x366 = INT16_MIN;
	int64_t x367 = 182640646729035648LL;
	int16_t x368 = -1;
	int32_t t48 = -337106;

	t48 = ((x365%(x366<x367))-x368);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x373 = 20801390683491908LLU;
	uint32_t x374 = 174U;
	int8_t x376 = INT8_MIN;
	volatile uint64_t t49 = 295627887604214278LLU;

	t49 = ((x373%(x374<x375))-x376);

	if (t49 != 128LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x386 = 0LL;
	uint16_t x387 = 1337U;
	uint8_t x388 = 14U;
	volatile int64_t t50 = 1LL;

	t50 = ((x385%(x386<x387))-x388);

	if (t50 != -14LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x389 = 138212502651LLU;
	int64_t x391 = -1LL;

	t51 = ((x389%(x390<x391))-x392);

	if (t51 != 2147483648LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x393 = UINT16_MAX;
	int16_t x396 = INT16_MIN;

	t52 = ((x393%(x394<x395))-x396);

	if (t52 != 32768) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x413 = -215069;
	volatile int32_t x414 = -1;
	int16_t x415 = INT16_MAX;
	int8_t x416 = -1;
	volatile int32_t t53 = 1;

	t53 = ((x413%(x414<x415))-x416);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x421 = 1U;
	volatile int16_t x424 = INT16_MAX;
	static volatile uint32_t t54 = 323628U;

	t54 = ((x421%(x422<x423))-x424);

	if (t54 != 4294934529U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x429 = UINT64_MAX;
	uint8_t x430 = 0U;
	int16_t x432 = INT16_MAX;
	uint64_t t55 = 10757362031LLU;

	t55 = ((x429%(x430<x431))-x432);

	if (t55 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x445 = UINT16_MAX;
	static int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MIN;
	volatile uint32_t x448 = UINT32_MAX;
	uint32_t t56 = 171U;

	t56 = ((x445%(x446<x447))-x448);

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x467 = INT8_MIN;
	static volatile uint64_t t57 = 27377211LLU;

	t57 = ((x465%(x466<x467))-x468);

	if (t57 != 18446744015264102547LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x489 = UINT8_MAX;
	uint32_t x490 = 2U;
	volatile int8_t x491 = INT8_MAX;
	int32_t t58 = -4186;

	t58 = ((x489%(x490<x491))-x492);

	if (t58 != 2066) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x497 = UINT8_MAX;
	volatile uint16_t x498 = 442U;
	volatile int32_t t59 = 111065307;

	t59 = ((x497%(x498<x499))-x500);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x509 = UINT8_MAX;
	int16_t x510 = 23;
	int32_t x511 = INT32_MAX;
	int8_t x512 = 1;
	int32_t t60 = 241;

	t60 = ((x509%(x510<x511))-x512);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x521 = INT32_MAX;

	t61 = ((x521%(x522<x523))-x524);

	if (t61 != -486) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x525 = INT16_MIN;
	int16_t x526 = -1351;
	int64_t x527 = -14LL;

	t62 = ((x525%(x526<x527))-x528);

	if (t62 != -673035146) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x529 = 87U;
	int64_t x530 = -1LL;
	uint16_t x531 = UINT16_MAX;
	int32_t x532 = -43;

	t63 = ((x529%(x530<x531))-x532);

	if (t63 != 43) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x533 = 9;
	uint8_t x534 = UINT8_MAX;
	static uint32_t x536 = 22U;
	volatile uint32_t t64 = 32U;

	t64 = ((x533%(x534<x535))-x536);

	if (t64 != 4294967274U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x537 = 331430084U;
	int32_t x538 = 1;
	uint32_t t65 = UINT32_MAX;

	t65 = ((x537%(x538<x539))-x540);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x541 = INT8_MAX;
	volatile int64_t x542 = INT64_MIN;
	int64_t x543 = -1LL;
	uint64_t t66 = 36LLU;

	t66 = ((x541%(x542<x543))-x544);

	if (t66 != 18446744073670203899LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x553 = INT32_MAX;
	int16_t x556 = 15;
	volatile int32_t t67 = 1;

	t67 = ((x553%(x554<x555))-x556);

	if (t67 != -15) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x557 = 0;
	uint8_t x558 = 8U;
	int32_t x559 = INT32_MAX;
	uint32_t x560 = UINT32_MAX;
	static uint32_t t68 = 530173525U;

	t68 = ((x557%(x558<x559))-x560);

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x570 = 8052U;
	int32_t t69 = 148533182;

	t69 = ((x569%(x570<x571))-x572);

	if (t69 != -27) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x589 = INT64_MAX;
	static int16_t x590 = INT16_MIN;
	int64_t x591 = -1LL;
	int64_t x592 = 29480LL;

	t70 = ((x589%(x590<x591))-x592);

	if (t70 != -29480LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x594 = 0;
	int16_t x596 = INT16_MIN;
	int64_t t71 = -995881379644646LL;

	t71 = ((x593%(x594<x595))-x596);

	if (t71 != 32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x611 = 4U;
	volatile int16_t x612 = 382;
	int64_t t72 = 23452LL;

	t72 = ((x609%(x610<x611))-x612);

	if (t72 != -382LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x613 = 1793314LL;
	int8_t x614 = INT8_MIN;
	int16_t x615 = INT16_MAX;
	volatile uint32_t x616 = 93368U;
	int64_t t73 = -3709757292771123LL;

	t73 = ((x613%(x614<x615))-x616);

	if (t73 != -93368LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x629 = -105;
	volatile int32_t x631 = INT32_MAX;
	uint64_t x632 = 7492LLU;
	volatile uint64_t t74 = 1845611118523925LLU;

	t74 = ((x629%(x630<x631))-x632);

	if (t74 != 18446744073709544124LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x634 = INT64_MIN;
	volatile int64_t t75 = -1LL;

	t75 = ((x633%(x634<x635))-x636);

	if (t75 != -32767LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x637 = 1070293673810132512LL;
	int16_t x638 = -1125;
	static int16_t x639 = -4;
	uint8_t x640 = 11U;
	volatile int64_t t76 = 240103889LL;

	t76 = ((x637%(x638<x639))-x640);

	if (t76 != -11LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x641 = INT16_MAX;
	uint32_t x642 = 207U;
	int16_t x644 = INT16_MIN;
	int32_t t77 = -428157;

	t77 = ((x641%(x642<x643))-x644);

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x654 = 498U;
	volatile uint16_t x655 = 7638U;
	uint8_t x656 = 3U;
	static volatile int32_t t78 = 4397;

	t78 = ((x653%(x654<x655))-x656);

	if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x657 = -112914LL;
	static uint64_t x658 = 1016714542628362LLU;
	int8_t x659 = INT8_MIN;
	int32_t x660 = -533461;
	volatile int64_t t79 = 34091226269LL;

	t79 = ((x657%(x658<x659))-x660);

	if (t79 != 533461LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x661 = 0U;
	static uint64_t x662 = 852155902428497LLU;
	int64_t x663 = -44014088LL;
	int64_t x664 = INT64_MAX;
	int64_t t80 = 1358543787LL;

	t80 = ((x661%(x662<x663))-x664);

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x670 = INT8_MIN;
	int8_t x671 = -1;
	int16_t x672 = 3710;
	int64_t t81 = 60040611538868719LL;

	t81 = ((x669%(x670<x671))-x672);

	if (t81 != -3710LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x673 = INT8_MIN;
	int64_t x674 = INT64_MIN;
	volatile uint16_t x675 = 1U;
	int16_t x676 = -1;
	volatile int32_t t82 = 341;

	t82 = ((x673%(x674<x675))-x676);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x681 = -197;
	volatile int8_t x682 = INT8_MAX;
	volatile uint8_t x683 = UINT8_MAX;

	t83 = ((x681%(x682<x683))-x684);

	if (t83 != -7) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x693 = 14U;
	int8_t x695 = 19;
	static int8_t x696 = INT8_MIN;
	int32_t t84 = 24833074;

	t84 = ((x693%(x694<x695))-x696);

	if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x705 = -1;
	int8_t x706 = 1;
	volatile int64_t x707 = INT64_MAX;
	uint8_t x708 = 0U;
	volatile int32_t t85 = -187320;

	t85 = ((x705%(x706<x707))-x708);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x709 = 23;
	volatile int64_t x711 = -1LL;
	uint8_t x712 = 53U;

	t86 = ((x709%(x710<x711))-x712);

	if (t86 != -53) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x713 = INT32_MIN;
	static int8_t x714 = -1;
	volatile int32_t x715 = INT32_MAX;
	static int32_t x716 = 43;
	static volatile int32_t t87 = -2087;

	t87 = ((x713%(x714<x715))-x716);

	if (t87 != -43) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x717 = 53941939U;
	int8_t x718 = 1;
	static uint16_t x719 = UINT16_MAX;

	t88 = ((x717%(x718<x719))-x720);

	if (t88 != 4294967205U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x729 = INT64_MIN;
	uint16_t x731 = 7251U;
	int64_t t89 = 31940345351LL;

	t89 = ((x729%(x730<x731))-x732);

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x736 = UINT16_MAX;
	volatile int32_t t90 = 668460;

	t90 = ((x733%(x734<x735))-x736);

	if (t90 != -65535) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x737 = UINT64_MAX;
	int32_t x738 = -1;
	static uint8_t x739 = 1U;
	int8_t x740 = 7;
	volatile uint64_t t91 = 48LLU;

	t91 = ((x737%(x738<x739))-x740);

	if (t91 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x741 = 2U;
	int16_t x742 = INT16_MIN;
	static volatile uint8_t x743 = 16U;
	int32_t x744 = 1;
	int32_t t92 = -1;

	t92 = ((x741%(x742<x743))-x744);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x745 = UINT8_MAX;
	uint64_t x746 = 66544282306LLU;
	int8_t x747 = INT8_MIN;
	uint8_t x748 = 3U;
	static volatile int32_t t93 = 24234;

	t93 = ((x745%(x746<x747))-x748);

	if (t93 != -3) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x749 = 110554399;
	uint16_t x750 = 12633U;
	int16_t x752 = -1;
	static volatile int32_t t94 = 444257938;

	t94 = ((x749%(x750<x751))-x752);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x762 = 3U;
	uint16_t x763 = 11U;
	static int8_t x764 = INT8_MAX;
	int32_t t95 = 41;

	t95 = ((x761%(x762<x763))-x764);

	if (t95 != -127) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x765 = INT8_MAX;
	volatile int16_t x766 = 0;
	int32_t x767 = INT32_MAX;
	volatile uint32_t t96 = 22365299U;

	t96 = ((x765%(x766<x767))-x768);

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x773 = 147798U;
	uint16_t x775 = 90U;
	uint32_t x776 = 170180U;
	uint32_t t97 = 18525U;

	t97 = ((x773%(x774<x775))-x776);

	if (t97 != 4294797116U) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x785 = INT8_MIN;
	volatile int16_t x786 = INT16_MIN;
	static volatile int8_t x787 = 52;
	volatile int8_t x788 = -1;
	int32_t t98 = 555;

	t98 = ((x785%(x786<x787))-x788);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x789 = -25;
	volatile int64_t x790 = -72698097796101823LL;
	int8_t x791 = 4;
	static int64_t x792 = INT64_MAX;
	volatile int64_t t99 = -491524216LL;

	t99 = ((x789%(x790<x791))-x792);

	if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
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

