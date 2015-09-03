#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x8 = 3567U;
int16_t x22 = INT16_MIN;
int64_t x53 = INT64_MAX;
volatile int8_t x55 = -1;
uint64_t x61 = 12109355720LLU;
int64_t x63 = -4981450266LL;
volatile uint64_t t5 = 378111993LLU;
volatile uint32_t x66 = UINT32_MAX;
static int16_t x81 = INT16_MAX;
volatile int16_t x82 = INT16_MAX;
uint32_t x90 = UINT32_MAX;
int8_t x91 = INT8_MIN;
volatile int32_t t8 = -11;
int32_t x106 = 3;
int8_t x108 = -14;
volatile uint16_t x114 = 156U;
uint8_t x116 = 2U;
volatile int8_t x118 = -55;
static uint16_t x130 = 3858U;
uint32_t x132 = 1U;
uint64_t x133 = 1878075416000LLU;
int32_t x136 = 0;
uint16_t x147 = 5646U;
int64_t x162 = INT64_MIN;
uint64_t x185 = 110837LLU;
int32_t x190 = INT32_MIN;
static int64_t x191 = INT64_MAX;
uint8_t x196 = UINT8_MAX;
static int8_t x206 = 1;
uint64_t t22 = 700550847975LLU;
uint32_t x237 = UINT32_MAX;
int16_t x263 = -845;
static volatile int64_t t29 = 254397024LL;
int32_t x278 = INT32_MAX;
static volatile uint64_t t31 = 77358358773941LLU;
volatile int8_t x290 = -1;
volatile int16_t x296 = INT16_MIN;
volatile uint64_t t33 = 171922LLU;
static uint32_t x298 = 103209480U;
uint16_t x301 = UINT16_MAX;
volatile int32_t x303 = INT32_MIN;
volatile int32_t t35 = 3413;
uint16_t x323 = 93U;
uint32_t x333 = 6261U;
static uint64_t x337 = 1039LLU;
static uint64_t x343 = 16864711157LLU;
uint64_t x349 = 58593284LLU;
uint8_t x363 = 1U;
int32_t t46 = 2845;
uint64_t x370 = UINT64_MAX;
volatile uint32_t t47 = 67247743U;
volatile int16_t x383 = -904;
int8_t x392 = 3;
int16_t x395 = INT16_MIN;
volatile int32_t t52 = 552;
int64_t t53 = 11253013LL;
int8_t x425 = INT8_MAX;
int16_t x438 = -1;
int32_t x451 = -1;
volatile uint16_t x482 = 211U;
int8_t x486 = 0;
volatile uint16_t x489 = 28859U;
int32_t t63 = -11675174;
static volatile uint32_t x543 = 3093483U;
volatile int32_t t64 = -9370258;
int64_t x548 = -1LL;
int64_t t65 = 642238144674697LL;
uint8_t x558 = 14U;
int8_t x560 = -26;
int16_t x566 = INT16_MAX;
volatile uint8_t x567 = 1U;
int16_t x573 = INT16_MAX;
volatile uint8_t x578 = 2U;
int32_t x579 = -26253505;
static volatile int32_t t72 = -12;
uint8_t x584 = UINT8_MAX;
uint32_t x596 = 3134U;
uint32_t t75 = 450U;
int8_t x601 = 51;
volatile int16_t x610 = INT16_MAX;
int8_t x631 = -8;
uint8_t x633 = 76U;
int32_t x636 = -12136266;
volatile uint16_t x641 = 7U;
uint64_t x644 = 8015LLU;
uint16_t x665 = 541U;
int32_t x667 = -1;
uint64_t t84 = 178LLU;
static int16_t x706 = INT16_MAX;
int8_t x707 = -1;
volatile int32_t t86 = 37858;
uint8_t x709 = 5U;
uint32_t x712 = 423U;
uint32_t t87 = 774399773U;
int8_t x730 = INT8_MAX;
static int8_t x733 = INT8_MAX;
int32_t t90 = 292185;
uint64_t x745 = UINT64_MAX;
int8_t x746 = INT8_MAX;
uint64_t t92 = 114399109840LLU;
uint32_t x753 = 0U;
int64_t x768 = INT64_MAX;
int16_t x783 = INT16_MIN;
int8_t x784 = -13;
static volatile uint64_t t96 = 68061LLU;
uint8_t x785 = 1U;
volatile int8_t x786 = INT8_MIN;
static int64_t x787 = 231583435LL;
static uint64_t x789 = 3446584LLU;
volatile uint64_t t98 = 19096929255LLU;
int8_t x793 = 2;
volatile int32_t t99 = -6;


void f0(void) {
	uint8_t x5 = 2U;
	uint32_t x6 = 5U;
	volatile int16_t x7 = -1;
	int32_t t0 = -2;

	t0 = ((x5<<(x6<x7))-x8);

	if (t0 != -3563) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x17 = UINT8_MAX;
	uint32_t x18 = UINT32_MAX;
	volatile int64_t x19 = 251931339LL;
	int16_t x20 = INT16_MIN;
	int32_t t1 = -132939257;

	t1 = ((x17<<(x18<x19))-x20);

	if (t1 != 33023) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x21 = 14748U;
	int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MIN;
	volatile uint32_t t2 = 185427119U;

	t2 = ((x21<<(x22<x23))-x24);

	if (t2 != 47516U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x49 = 193U;
	static uint32_t x50 = 2051U;
	int8_t x51 = INT8_MIN;
	static uint64_t x52 = 44333797874LLU;
	volatile uint64_t t3 = 1LLU;

	t3 = ((x49<<(x50<x51))-x52);

	if (t3 != 18446744029375754128LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x54 = INT64_MAX;
	uint32_t x56 = 726683U;
	volatile int64_t t4 = -9414038725036LL;

	t4 = ((x53<<(x54<x55))-x56);

	if (t4 != 9223372036854049124LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x62 = -1;
	uint32_t x64 = 9821U;

	t5 = ((x61<<(x62<x63))-x64);

	if (t5 != 12109345899LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x65 = 16585258093LLU;
	int32_t x67 = INT32_MIN;
	uint64_t x68 = 252LLU;
	uint64_t t6 = 1919062787972624LLU;

	t6 = ((x65<<(x66<x67))-x68);

	if (t6 != 16585257841LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x83 = 23U;
	int16_t x84 = INT16_MAX;
	int32_t t7 = -32756;

	t7 = ((x81<<(x82<x83))-x84);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x89 = 625;
	static int8_t x92 = INT8_MIN;

	t8 = ((x89<<(x90<x91))-x92);

	if (t8 != 753) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x101 = 7U;
	int8_t x102 = -7;
	int64_t x103 = INT64_MIN;
	int64_t x104 = -1LL;
	int64_t t9 = 0LL;

	t9 = ((x101<<(x102<x103))-x104);

	if (t9 != 8LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x105 = UINT64_MAX;
	uint8_t x107 = UINT8_MAX;
	uint64_t t10 = 23314885318LLU;

	t10 = ((x105<<(x106<x107))-x108);

	if (t10 != 12LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x113 = INT64_MAX;
	int8_t x115 = -1;
	volatile int64_t t11 = 3745766010958704LL;

	t11 = ((x113<<(x114<x115))-x116);

	if (t11 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x117 = 9U;
	static volatile int16_t x119 = INT16_MIN;
	uint16_t x120 = 24U;
	int32_t t12 = 700;

	t12 = ((x117<<(x118<x119))-x120);

	if (t12 != -15) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x129 = 7U;
	int64_t x131 = INT64_MIN;
	uint32_t t13 = 264126319U;

	t13 = ((x129<<(x130<x131))-x132);

	if (t13 != 6U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x134 = UINT8_MAX;
	uint64_t x135 = UINT64_MAX;
	volatile uint64_t t14 = 559886LLU;

	t14 = ((x133<<(x134<x135))-x136);

	if (t14 != 3756150832000LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x145 = 267045456U;
	volatile int8_t x146 = INT8_MIN;
	static int8_t x148 = INT8_MIN;
	volatile uint32_t t15 = 1U;

	t15 = ((x145<<(x146<x147))-x148);

	if (t15 != 534091040U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x157 = UINT8_MAX;
	volatile int8_t x158 = INT8_MAX;
	static uint64_t x159 = 1941371211540465751LLU;
	volatile uint16_t x160 = UINT16_MAX;
	int32_t t16 = -349259822;

	t16 = ((x157<<(x158<x159))-x160);

	if (t16 != -65025) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x161 = 33U;
	int16_t x163 = INT16_MIN;
	uint64_t x164 = UINT64_MAX;
	uint64_t t17 = 22539LLU;

	t17 = ((x161<<(x162<x163))-x164);

	if (t17 != 67LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x173 = 16089517853654255LLU;
	int32_t x174 = 31712;
	int64_t x175 = 7046139LL;
	int32_t x176 = -215599;
	volatile uint64_t t18 = 80128090938502878LLU;

	t18 = ((x173<<(x174<x175))-x176);

	if (t18 != 32179035707524109LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x186 = 127;
	volatile uint64_t x187 = 98173931LLU;
	volatile int32_t x188 = INT32_MAX;
	volatile uint64_t t19 = 43928614146LLU;

	t19 = ((x185<<(x186<x187))-x188);

	if (t19 != 18446744071562289643LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x189 = 0;
	int8_t x192 = INT8_MIN;
	int32_t t20 = -47934;

	t20 = ((x189<<(x190<x191))-x192);

	if (t20 != 128) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x193 = 4;
	int8_t x194 = 1;
	volatile int32_t x195 = 34;
	int32_t t21 = 638058212;

	t21 = ((x193<<(x194<x195))-x196);

	if (t21 != -247) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x205 = 228964221342LLU;
	int16_t x207 = INT16_MIN;
	static int16_t x208 = INT16_MIN;

	t22 = ((x205<<(x206<x207))-x208);

	if (t22 != 228964254110LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x233 = 39000048U;
	int8_t x234 = INT8_MIN;
	volatile int32_t x235 = INT32_MIN;
	int32_t x236 = 19637;
	volatile uint32_t t23 = 33334U;

	t23 = ((x233<<(x234<x235))-x236);

	if (t23 != 38980411U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x238 = UINT32_MAX;
	static volatile int16_t x239 = INT16_MAX;
	int8_t x240 = INT8_MIN;
	static volatile uint32_t t24 = 4425486U;

	t24 = ((x237<<(x238<x239))-x240);

	if (t24 != 127U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x249 = 1940376248000LLU;
	int32_t x250 = INT32_MIN;
	uint64_t x251 = UINT64_MAX;
	int32_t x252 = -1;
	static uint64_t t25 = 110102377LLU;

	t25 = ((x249<<(x250<x251))-x252);

	if (t25 != 3880752496001LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x253 = 272627101117034062LL;
	volatile int16_t x254 = INT16_MIN;
	volatile int64_t x255 = 2336802348869LL;
	volatile int64_t x256 = INT64_MAX;
	volatile int64_t t26 = -1479LL;

	t26 = ((x253<<(x254<x255))-x256);

	if (t26 != -8678117834620707683LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x261 = 3584U;
	volatile int64_t x262 = -1LL;
	volatile int16_t x264 = INT16_MIN;
	static volatile int32_t t27 = 0;

	t27 = ((x261<<(x262<x263))-x264);

	if (t27 != 36352) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x265 = 13365667057576LL;
	int32_t x266 = 108;
	int16_t x267 = 3333;
	int32_t x268 = INT32_MIN;
	int64_t t28 = 17692345423LL;

	t28 = ((x265<<(x266<x267))-x268);

	if (t28 != 26733481598800LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x269 = 331252914;
	int16_t x270 = INT16_MIN;
	uint32_t x271 = 4909U;
	int64_t x272 = -18010LL;

	t29 = ((x269<<(x270<x271))-x272);

	if (t29 != 331270924LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x277 = 397322752678023LLU;
	static uint16_t x279 = 1U;
	static volatile int8_t x280 = -1;
	uint64_t t30 = 50546LLU;

	t30 = ((x277<<(x278<x279))-x280);

	if (t30 != 397322752678024LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x285 = 1015LLU;
	volatile int16_t x286 = INT16_MIN;
	volatile int32_t x287 = INT32_MIN;
	uint32_t x288 = UINT32_MAX;

	t31 = ((x285<<(x286<x287))-x288);

	if (t31 != 18446744069414585336LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x289 = 13256U;
	int64_t x291 = -1LL;
	int16_t x292 = -1;
	volatile int32_t t32 = -545652;

	t32 = ((x289<<(x290<x291))-x292);

	if (t32 != 13257) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x293 = 1LLU;
	uint64_t x294 = 1777882252277333LLU;
	int8_t x295 = -14;

	t33 = ((x293<<(x294<x295))-x296);

	if (t33 != 32770LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x297 = UINT64_MAX;
	uint64_t x299 = 90062LLU;
	int64_t x300 = -118420912200306644LL;
	uint64_t t34 = 11958325705745788LLU;

	t34 = ((x297<<(x298<x299))-x300);

	if (t34 != 118420912200306643LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x302 = 5U;
	static uint8_t x304 = 3U;

	t35 = ((x301<<(x302<x303))-x304);

	if (t35 != 65532) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x305 = INT8_MAX;
	int16_t x306 = 234;
	volatile int32_t x307 = -1;
	uint16_t x308 = 1U;
	int32_t t36 = -1;

	t36 = ((x305<<(x306<x307))-x308);

	if (t36 != 126) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x313 = 695LLU;
	static volatile uint32_t x314 = 1389304U;
	int8_t x315 = -4;
	int32_t x316 = INT32_MIN;
	uint64_t t37 = 24LLU;

	t37 = ((x313<<(x314<x315))-x316);

	if (t37 != 2147485038LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x321 = 14;
	int64_t x322 = INT64_MIN;
	int8_t x324 = INT8_MIN;
	static int32_t t38 = 26874986;

	t38 = ((x321<<(x322<x323))-x324);

	if (t38 != 156) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x334 = 57U;
	int32_t x335 = INT32_MIN;
	int32_t x336 = INT32_MAX;
	static volatile uint32_t t39 = 1U;

	t39 = ((x333<<(x334<x335))-x336);

	if (t39 != 2147489910U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x338 = 188LLU;
	uint8_t x339 = 40U;
	static volatile uint16_t x340 = UINT16_MAX;
	uint64_t t40 = 284392146LLU;

	t40 = ((x337<<(x338<x339))-x340);

	if (t40 != 18446744073709487120LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x341 = INT8_MAX;
	int64_t x342 = INT64_MAX;
	int16_t x344 = -3;
	volatile int32_t t41 = -1;

	t41 = ((x341<<(x342<x343))-x344);

	if (t41 != 130) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x350 = INT8_MIN;
	uint32_t x351 = 432055543U;
	static int8_t x352 = -1;
	uint64_t t42 = 28940359906068921LLU;

	t42 = ((x349<<(x350<x351))-x352);

	if (t42 != 58593285LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x353 = 6770080791854LLU;
	uint32_t x354 = 845272912U;
	uint16_t x355 = 23006U;
	volatile uint64_t x356 = 15LLU;
	volatile uint64_t t43 = 14LLU;

	t43 = ((x353<<(x354<x355))-x356);

	if (t43 != 6770080791839LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x357 = 1407618787806LLU;
	int64_t x358 = INT64_MIN;
	uint16_t x359 = UINT16_MAX;
	uint8_t x360 = 46U;
	volatile uint64_t t44 = 181274650847827LLU;

	t44 = ((x357<<(x358<x359))-x360);

	if (t44 != 2815237575566LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x361 = UINT8_MAX;
	static uint8_t x362 = 0U;
	uint8_t x364 = UINT8_MAX;
	int32_t t45 = -627;

	t45 = ((x361<<(x362<x363))-x364);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x365 = 1;
	uint64_t x366 = 8334894LLU;
	int16_t x367 = INT16_MIN;
	uint16_t x368 = 1124U;

	t46 = ((x365<<(x366<x367))-x368);

	if (t46 != -1122) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x369 = 174676733U;
	int16_t x371 = 28;
	volatile uint32_t x372 = 2029236U;

	t47 = ((x369<<(x370<x371))-x372);

	if (t47 != 172647497U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x373 = 6;
	int64_t x374 = -1LL;
	int8_t x375 = -1;
	uint32_t x376 = 640109893U;
	uint32_t t48 = 5U;

	t48 = ((x373<<(x374<x375))-x376);

	if (t48 != 3654857409U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x381 = UINT64_MAX;
	int8_t x382 = INT8_MAX;
	volatile uint64_t x384 = 37660765LLU;
	uint64_t t49 = 272125458326073LLU;

	t49 = ((x381<<(x382<x383))-x384);

	if (t49 != 18446744073671890850LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x389 = 667577LLU;
	int64_t x390 = -17091LL;
	volatile int16_t x391 = -1;
	static uint64_t t50 = 12938703LLU;

	t50 = ((x389<<(x390<x391))-x392);

	if (t50 != 1335151LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x393 = 125641255;
	int16_t x394 = INT16_MAX;
	uint8_t x396 = 1U;
	int32_t t51 = 3;

	t51 = ((x393<<(x394<x395))-x396);

	if (t51 != 125641254) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x405 = 438U;
	int64_t x406 = INT64_MIN;
	uint32_t x407 = 1735U;
	static uint8_t x408 = 11U;

	t52 = ((x405<<(x406<x407))-x408);

	if (t52 != 865) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x413 = 3;
	uint8_t x414 = 34U;
	int16_t x415 = -1;
	int64_t x416 = 44355476425444214LL;

	t53 = ((x413<<(x414<x415))-x416);

	if (t53 != -44355476425444211LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x421 = 1U;
	volatile int8_t x422 = -1;
	static uint16_t x423 = 9U;
	static int64_t x424 = -1LL;
	volatile int64_t t54 = -21710LL;

	t54 = ((x421<<(x422<x423))-x424);

	if (t54 != 3LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x426 = INT8_MAX;
	int8_t x427 = INT8_MAX;
	uint32_t x428 = 1349514U;
	static volatile uint32_t t55 = 1U;

	t55 = ((x425<<(x426<x427))-x428);

	if (t55 != 4293617909U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x437 = 7931;
	uint32_t x439 = 658U;
	uint8_t x440 = 14U;
	volatile int32_t t56 = -234030;

	t56 = ((x437<<(x438<x439))-x440);

	if (t56 != 7917) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x449 = INT16_MAX;
	volatile int8_t x450 = -1;
	volatile int8_t x452 = INT8_MIN;
	int32_t t57 = 2814;

	t57 = ((x449<<(x450<x451))-x452);

	if (t57 != 32895) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x453 = 127533990368LLU;
	volatile int64_t x454 = INT64_MAX;
	int8_t x455 = 3;
	int64_t x456 = -1LL;
	static volatile uint64_t t58 = 133195013269356597LLU;

	t58 = ((x453<<(x454<x455))-x456);

	if (t58 != 127533990369LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x481 = UINT64_MAX;
	int16_t x483 = 0;
	volatile uint32_t x484 = UINT32_MAX;
	volatile uint64_t t59 = 6801716715LLU;

	t59 = ((x481<<(x482<x483))-x484);

	if (t59 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x485 = 0;
	int64_t x487 = -4656450679LL;
	static volatile uint32_t x488 = 712712U;
	volatile uint32_t t60 = 13582843U;

	t60 = ((x485<<(x486<x487))-x488);

	if (t60 != 4294254584U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x490 = INT8_MAX;
	volatile uint64_t x491 = UINT64_MAX;
	uint64_t x492 = 39147595697LLU;
	uint64_t t61 = 3331196298LLU;

	t61 = ((x489<<(x490<x491))-x492);

	if (t61 != 18446744034562013637LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x517 = 3487674437064LLU;
	static uint16_t x518 = 7U;
	uint32_t x519 = 2U;
	int8_t x520 = INT8_MAX;
	static uint64_t t62 = 1691LLU;

	t62 = ((x517<<(x518<x519))-x520);

	if (t62 != 3487674436937LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x521 = 31324U;
	static volatile uint8_t x522 = UINT8_MAX;
	int32_t x523 = INT32_MIN;
	int16_t x524 = INT16_MIN;

	t63 = ((x521<<(x522<x523))-x524);

	if (t63 != 64092) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x541 = 5U;
	static int8_t x542 = -2;
	int16_t x544 = 3;

	t64 = ((x541<<(x542<x543))-x544);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x545 = 15U;
	uint16_t x546 = 30U;
	int32_t x547 = INT32_MAX;

	t65 = ((x545<<(x546<x547))-x548);

	if (t65 != 31LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x549 = 118U;
	uint64_t x550 = 14LLU;
	static volatile int16_t x551 = INT16_MIN;
	int8_t x552 = INT8_MIN;
	int32_t t66 = -401214;

	t66 = ((x549<<(x550<x551))-x552);

	if (t66 != 364) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x557 = INT8_MAX;
	int16_t x559 = -4739;
	int32_t t67 = 488707;

	t67 = ((x557<<(x558<x559))-x560);

	if (t67 != 153) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x561 = 23U;
	int64_t x562 = INT64_MIN;
	static volatile int16_t x563 = 29;
	uint32_t x564 = UINT32_MAX;
	uint32_t t68 = 4829691U;

	t68 = ((x561<<(x562<x563))-x564);

	if (t68 != 47U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x565 = 948U;
	volatile int32_t x568 = INT32_MIN;
	uint32_t t69 = 30620563U;

	t69 = ((x565<<(x566<x567))-x568);

	if (t69 != 2147484596U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x569 = 0U;
	int8_t x570 = 1;
	volatile int16_t x571 = INT16_MIN;
	uint16_t x572 = 1U;
	static int32_t t70 = 76590058;

	t70 = ((x569<<(x570<x571))-x572);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x574 = INT64_MAX;
	static int32_t x575 = -12;
	int64_t x576 = INT64_MAX;
	volatile int64_t t71 = 5286LL;

	t71 = ((x573<<(x574<x575))-x576);

	if (t71 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x577 = 0;
	int32_t x580 = -10798086;

	t72 = ((x577<<(x578<x579))-x580);

	if (t72 != 10798086) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x581 = UINT8_MAX;
	volatile int16_t x582 = 484;
	int16_t x583 = -1;
	volatile int32_t t73 = -34469;

	t73 = ((x581<<(x582<x583))-x584);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x585 = INT16_MAX;
	int64_t x586 = -83397664914LL;
	int16_t x587 = -278;
	static volatile int16_t x588 = 1;
	int32_t t74 = 403;

	t74 = ((x585<<(x586<x587))-x588);

	if (t74 != 65533) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x593 = INT32_MAX;
	volatile uint8_t x594 = 6U;
	int16_t x595 = INT16_MIN;

	t75 = ((x593<<(x594<x595))-x596);

	if (t75 != 2147480513U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x602 = INT8_MIN;
	int8_t x603 = -1;
	int8_t x604 = -30;
	volatile int32_t t76 = -1027;

	t76 = ((x601<<(x602<x603))-x604);

	if (t76 != 132) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x609 = 2068524U;
	uint16_t x611 = 29U;
	int32_t x612 = -1;
	volatile uint32_t t77 = 20696179U;

	t77 = ((x609<<(x610<x611))-x612);

	if (t77 != 2068525U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x629 = 11U;
	uint16_t x630 = 2U;
	int8_t x632 = INT8_MIN;
	volatile int32_t t78 = -23612;

	t78 = ((x629<<(x630<x631))-x632);

	if (t78 != 139) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x634 = UINT32_MAX;
	int32_t x635 = INT32_MIN;
	volatile int32_t t79 = -41;

	t79 = ((x633<<(x634<x635))-x636);

	if (t79 != 12136342) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x642 = INT64_MAX;
	int32_t x643 = INT32_MAX;
	uint64_t t80 = 8647LLU;

	t80 = ((x641<<(x642<x643))-x644);

	if (t80 != 18446744073709543608LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x649 = 1U;
	static int16_t x650 = INT16_MIN;
	uint64_t x651 = 3784345672744164LLU;
	uint64_t x652 = 71LLU;
	uint64_t t81 = 3233685888688384LLU;

	t81 = ((x649<<(x650<x651))-x652);

	if (t81 != 18446744073709551546LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x661 = INT64_MAX;
	volatile uint16_t x662 = 1742U;
	int64_t x663 = INT64_MIN;
	uint8_t x664 = UINT8_MAX;
	volatile int64_t t82 = 1829767945116678LL;

	t82 = ((x661<<(x662<x663))-x664);

	if (t82 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x666 = -3590789403LL;
	int16_t x668 = 2362;
	int32_t t83 = 2178508;

	t83 = ((x665<<(x666<x667))-x668);

	if (t83 != -1280) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x681 = UINT8_MAX;
	int32_t x682 = INT32_MIN;
	uint16_t x683 = 3237U;
	uint64_t x684 = 575254095819169672LLU;

	t84 = ((x681<<(x682<x683))-x684);

	if (t84 != 17871489977890382454LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x689 = 34069931LLU;
	static uint64_t x690 = 7839538754LLU;
	uint16_t x691 = 1834U;
	int16_t x692 = 470;
	uint64_t t85 = 289322623403851417LLU;

	t85 = ((x689<<(x690<x691))-x692);

	if (t85 != 34069461LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x705 = 121U;
	volatile uint16_t x708 = 337U;

	t86 = ((x705<<(x706<x707))-x708);

	if (t86 != -216) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x710 = INT16_MAX;
	static uint32_t x711 = 1057499617U;

	t87 = ((x709<<(x710<x711))-x712);

	if (t87 != 4294966883U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x717 = 982;
	int64_t x718 = -572732LL;
	int16_t x719 = 413;
	int8_t x720 = -1;
	volatile int32_t t88 = -329098399;

	t88 = ((x717<<(x718<x719))-x720);

	if (t88 != 1965) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x729 = 4018057225LL;
	uint16_t x731 = 11U;
	int16_t x732 = -2309;
	volatile int64_t t89 = -38942151439553772LL;

	t89 = ((x729<<(x730<x731))-x732);

	if (t89 != 4018059534LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x734 = INT16_MIN;
	volatile int32_t x735 = INT32_MIN;
	int16_t x736 = INT16_MAX;

	t90 = ((x733<<(x734<x735))-x736);

	if (t90 != -32640) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x737 = 9428U;
	uint64_t x738 = 17432LLU;
	static uint8_t x739 = 0U;
	static uint32_t x740 = 60773559U;
	static uint32_t t91 = 1724U;

	t91 = ((x737<<(x738<x739))-x740);

	if (t91 != 4234203165U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x747 = UINT32_MAX;
	uint64_t x748 = 304LLU;

	t92 = ((x745<<(x746<x747))-x748);

	if (t92 != 18446744073709551310LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x754 = INT8_MAX;
	int16_t x755 = INT16_MIN;
	int64_t x756 = -185LL;
	volatile int64_t t93 = 285564LL;

	t93 = ((x753<<(x754<x755))-x756);

	if (t93 != 185LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x765 = 919U;
	int32_t x766 = -1;
	uint32_t x767 = 6U;
	static int64_t t94 = 53587LL;

	t94 = ((x765<<(x766<x767))-x768);

	if (t94 != -9223372036854774888LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x773 = INT16_MAX;
	uint16_t x774 = 168U;
	int64_t x775 = INT64_MIN;
	int16_t x776 = 378;
	static int32_t t95 = -232285;

	t95 = ((x773<<(x774<x775))-x776);

	if (t95 != 32389) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x781 = 115856817LLU;
	uint8_t x782 = 10U;

	t96 = ((x781<<(x782<x783))-x784);

	if (t96 != 115856830LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x788 = 5U;
	static volatile int32_t t97 = -179;

	t97 = ((x785<<(x786<x787))-x788);

	if (t97 != -3) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x790 = INT8_MAX;
	static int32_t x791 = -1;
	static volatile int16_t x792 = -3345;

	t98 = ((x789<<(x790<x791))-x792);

	if (t98 != 3449929LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x794 = UINT32_MAX;
	int64_t x795 = -32989LL;
	int32_t x796 = -1;

	t99 = ((x793<<(x794<x795))-x796);

	if (t99 != 3) { NG(); } else { ; }
	
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

