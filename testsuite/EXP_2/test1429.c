#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x6 = -1;
int64_t x8 = INT64_MAX;
volatile int64_t t0 = INT64_MAX;
static int64_t t1 = 4147467LL;
int16_t x48 = INT16_MAX;
uint8_t x54 = 9U;
int64_t x69 = 195567557878LL;
static int8_t x70 = INT8_MIN;
volatile int32_t x98 = INT32_MIN;
int8_t x103 = -32;
int16_t x105 = 3274;
int16_t x107 = -1;
static volatile int32_t x140 = INT32_MAX;
int32_t x155 = -27843091;
volatile int64_t t15 = INT64_MAX;
int32_t x166 = INT32_MAX;
static uint32_t x170 = 166U;
static uint64_t x183 = 121842629239933LLU;
volatile uint32_t t20 = 2U;
int32_t x211 = 423;
int64_t x212 = -1LL;
uint32_t x216 = 2U;
int64_t x230 = INT64_MIN;
volatile uint64_t t27 = UINT64_MAX;
static int16_t x240 = INT16_MIN;
static int32_t t28 = 1038;
int16_t x242 = 1;
uint8_t x244 = 45U;
volatile int64_t x256 = INT64_MIN;
uint64_t x260 = UINT64_MAX;
volatile int8_t x269 = 34;
int64_t x272 = -1LL;
int64_t t32 = -137580193729144986LL;
static int64_t x288 = INT64_MAX;
int8_t x291 = 54;
volatile int64_t x293 = 1911LL;
int64_t x294 = 0LL;
uint64_t t35 = 9717LLU;
int16_t x298 = 4;
uint8_t x309 = 14U;
volatile int32_t t38 = 885730746;
int32_t x346 = -406;
static volatile int8_t x348 = INT8_MAX;
static int16_t x349 = INT16_MAX;
uint32_t x350 = 3331U;
volatile int8_t x352 = INT8_MIN;
uint16_t x354 = UINT16_MAX;
static volatile int64_t t42 = -11332808LL;
int8_t x369 = 1;
uint16_t x370 = UINT16_MAX;
static uint32_t x372 = 102370888U;
static int64_t x378 = 562244444738583571LL;
uint32_t x390 = 3494U;
static volatile int32_t t50 = 7021;
int64_t x414 = INT64_MIN;
int64_t x435 = 11312273802962LL;
uint8_t x444 = 24U;
int32_t x449 = INT32_MAX;
static int64_t x450 = -1LL;
int32_t x459 = 485193073;
int8_t x460 = -1;
int64_t t58 = 4280452175222LL;
int16_t x475 = -11328;
uint32_t x476 = 100747U;
int8_t x483 = INT8_MIN;
uint8_t x490 = 35U;
static int64_t t68 = -2915328344596397699LL;
int16_t x548 = INT16_MIN;
int32_t x556 = INT32_MIN;
static uint64_t t71 = 44506165301745LLU;
int16_t x562 = INT16_MAX;
static uint8_t x563 = 1U;
int64_t x572 = INT64_MIN;
uint64_t x573 = 19893352196501LLU;
volatile uint64_t t74 = 21LLU;
int32_t x587 = INT32_MIN;
static int64_t x591 = -1LL;
int64_t t78 = INT64_MAX;
volatile uint64_t t79 = 1393415568LLU;
static int64_t x607 = INT64_MAX;
volatile int64_t t80 = -28639011LL;
int32_t t81 = -200623287;
int64_t x625 = 2229225520256237664LL;
int16_t x628 = INT16_MIN;
static int32_t x631 = -1;
static volatile int32_t x632 = -5;
int16_t x635 = INT16_MIN;
uint64_t x636 = UINT64_MAX;
uint16_t x644 = UINT16_MAX;
volatile uint64_t x657 = UINT64_MAX;
int32_t x679 = -1;
int32_t x680 = -1;
volatile int8_t x683 = INT8_MIN;
uint64_t x684 = UINT64_MAX;
uint16_t x690 = 5U;
static volatile uint64_t t92 = UINT64_MAX;
int32_t x706 = INT32_MAX;
int8_t x708 = INT8_MIN;
uint8_t x715 = 36U;
int32_t x716 = -1098;
uint64_t x738 = 5LLU;
static int64_t x742 = INT64_MIN;


void f0(void) {
	volatile uint32_t x5 = 170U;
	static int16_t x7 = INT16_MAX;

	t0 = ((x5<<(x6<x7))|x8);

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x21 = 7U;
	int64_t x22 = INT64_MAX;
	uint32_t x23 = UINT32_MAX;
	int64_t x24 = INT64_MIN;

	t1 = ((x21<<(x22<x23))|x24);

	if (t1 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x45 = UINT64_MAX;
	int16_t x46 = INT16_MAX;
	int16_t x47 = INT16_MAX;
	static uint64_t t2 = UINT64_MAX;

	t2 = ((x45<<(x46<x47))|x48);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x53 = 9922U;
	volatile int64_t x55 = 1949512335585891636LL;
	int64_t x56 = -1LL;
	static int64_t t3 = 547341907819LL;

	t3 = ((x53<<(x54<x55))|x56);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x57 = UINT32_MAX;
	int64_t x58 = -16421340243788LL;
	int16_t x59 = INT16_MAX;
	int16_t x60 = -65;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = ((x57<<(x58<x59))|x60);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x61 = 13842882388834LLU;
	volatile int16_t x62 = -1;
	static int8_t x63 = INT8_MAX;
	volatile int16_t x64 = INT16_MAX;
	volatile uint64_t t5 = 6524LLU;

	t5 = ((x61<<(x62<x63))|x64);

	if (t5 != 27685764792319LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x71 = INT32_MAX;
	int32_t x72 = -346;
	volatile int64_t t6 = -1785916338257548LL;

	t6 = ((x69<<(x70<x71))|x72);

	if (t6 != -18LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x73 = INT32_MAX;
	volatile uint64_t x74 = 10387187573LLU;
	static int32_t x75 = INT32_MAX;
	static volatile int16_t x76 = INT16_MAX;
	int32_t t7 = INT32_MAX;

	t7 = ((x73<<(x74<x75))|x76);

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x85 = 339717U;
	int64_t x86 = INT64_MIN;
	int8_t x87 = 3;
	int16_t x88 = 367;
	static uint32_t t8 = 21181U;

	t8 = ((x85<<(x86<x87))|x88);

	if (t8 != 679791U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x97 = INT8_MAX;
	int32_t x99 = INT32_MIN;
	int16_t x100 = INT16_MIN;
	volatile int32_t t9 = -949360001;

	t9 = ((x97<<(x98<x99))|x100);

	if (t9 != -32641) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x101 = INT16_MAX;
	int8_t x102 = INT8_MIN;
	uint32_t x104 = UINT32_MAX;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = ((x101<<(x102<x103))|x104);

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x106 = INT8_MIN;
	volatile uint8_t x108 = 25U;
	int32_t t11 = 297;

	t11 = ((x105<<(x106<x107))|x108);

	if (t11 != 6557) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x125 = INT8_MAX;
	int32_t x126 = 84;
	uint64_t x127 = 1900272169LLU;
	volatile uint8_t x128 = 83U;
	int32_t t12 = 61;

	t12 = ((x125<<(x126<x127))|x128);

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x137 = 33201772LLU;
	volatile int32_t x138 = 106;
	static int8_t x139 = -1;
	volatile uint64_t t13 = 60185654888030364LLU;

	t13 = ((x137<<(x138<x139))|x140);

	if (t13 != 2147483647LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x149 = 431737;
	static int64_t x150 = -4204720319857LL;
	uint16_t x151 = 1514U;
	uint64_t x152 = 0LLU;
	uint64_t t14 = 1676623392820460961LLU;

	t14 = ((x149<<(x150<x151))|x152);

	if (t14 != 863474LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x153 = INT64_MAX;
	uint32_t x154 = UINT32_MAX;
	uint32_t x156 = 0U;

	t15 = ((x153<<(x154<x155))|x156);

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x165 = 6217;
	int32_t x167 = INT32_MIN;
	int64_t x168 = INT64_MIN;
	volatile int64_t t16 = -250705628281LL;

	t16 = ((x165<<(x166<x167))|x168);

	if (t16 != -9223372036854769591LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x169 = 26382211U;
	int16_t x171 = -1;
	int64_t x172 = INT64_MIN;
	volatile int64_t t17 = -7664461336078387LL;

	t17 = ((x169<<(x170<x171))|x172);

	if (t17 != -9223372036802011386LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x181 = INT64_MAX;
	int64_t x182 = INT64_MIN;
	volatile int8_t x184 = -1;
	int64_t t18 = 69877604848297048LL;

	t18 = ((x181<<(x182<x183))|x184);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x185 = 27112644484LLU;
	int8_t x186 = -27;
	static int32_t x187 = INT32_MIN;
	int32_t x188 = -1;
	uint64_t t19 = UINT64_MAX;

	t19 = ((x185<<(x186<x187))|x188);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x197 = 19150U;
	int16_t x198 = INT16_MIN;
	int64_t x199 = INT64_MIN;
	int8_t x200 = INT8_MIN;

	t20 = ((x197<<(x198<x199))|x200);

	if (t20 != 4294967246U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x201 = UINT64_MAX;
	int32_t x202 = -1;
	uint32_t x203 = 1500695U;
	static int16_t x204 = INT16_MIN;
	static volatile uint64_t t21 = UINT64_MAX;

	t21 = ((x201<<(x202<x203))|x204);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x205 = 96786634946LLU;
	int16_t x206 = 9;
	int32_t x207 = INT32_MIN;
	int16_t x208 = -1;
	uint64_t t22 = UINT64_MAX;

	t22 = ((x205<<(x206<x207))|x208);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x209 = 12701U;
	int16_t x210 = INT16_MIN;
	int64_t t23 = 254990270LL;

	t23 = ((x209<<(x210<x211))|x212);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x213 = 105U;
	uint64_t x214 = 4032743605376457300LLU;
	volatile int64_t x215 = INT64_MIN;
	volatile uint32_t t24 = 885584U;

	t24 = ((x213<<(x214<x215))|x216);

	if (t24 != 210U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x217 = 18;
	int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MIN;
	volatile int32_t x220 = INT32_MIN;
	static volatile int32_t t25 = 21552661;

	t25 = ((x217<<(x218<x219))|x220);

	if (t25 != -2147483612) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x221 = 346741LL;
	uint64_t x222 = 315216898448477LLU;
	static uint16_t x223 = UINT16_MAX;
	int32_t x224 = -1;
	volatile int64_t t26 = -3955727LL;

	t26 = ((x221<<(x222<x223))|x224);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x229 = 4U;
	uint64_t x231 = 4757020949680LLU;
	uint64_t x232 = UINT64_MAX;

	t27 = ((x229<<(x230<x231))|x232);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x237 = 1;
	volatile uint64_t x238 = UINT64_MAX;
	uint64_t x239 = 5LLU;

	t28 = ((x237<<(x238<x239))|x240);

	if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x241 = 1695786;
	uint64_t x243 = 3435LLU;
	volatile int32_t t29 = 696547;

	t29 = ((x241<<(x242<x243))|x244);

	if (t29 != 3391613) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x253 = 520062348209709LLU;
	int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MIN;
	volatile uint64_t t30 = 119LLU;

	t30 = ((x253<<(x254<x255))|x256);

	if (t30 != 9224412161551195226LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x257 = 42968;
	int8_t x258 = -1;
	volatile int8_t x259 = INT8_MIN;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = ((x257<<(x258<x259))|x260);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x270 = INT16_MIN;
	volatile int16_t x271 = INT16_MAX;

	t32 = ((x269<<(x270<x271))|x272);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x285 = UINT32_MAX;
	int8_t x286 = -1;
	int64_t x287 = -1LL;
	static int64_t t33 = INT64_MAX;

	t33 = ((x285<<(x286<x287))|x288);

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x289 = UINT16_MAX;
	uint16_t x290 = UINT16_MAX;
	volatile int8_t x292 = INT8_MIN;
	int32_t t34 = 1030717044;

	t34 = ((x289<<(x290<x291))|x292);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x295 = INT32_MIN;
	static volatile uint64_t x296 = 2596961504746LLU;

	t35 = ((x293<<(x294<x295))|x296);

	if (t35 != 2596961505279LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x297 = 0U;
	uint64_t x299 = UINT64_MAX;
	uint32_t x300 = 0U;
	volatile uint32_t t36 = 106632697U;

	t36 = ((x297<<(x298<x299))|x300);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x301 = 47560LLU;
	volatile int8_t x302 = 0;
	int16_t x303 = 493;
	int16_t x304 = -1;
	uint64_t t37 = UINT64_MAX;

	t37 = ((x301<<(x302<x303))|x304);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x310 = -1LL;
	int8_t x311 = 1;
	static uint16_t x312 = UINT16_MAX;

	t38 = ((x309<<(x310<x311))|x312);

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x313 = 12;
	int16_t x314 = -1;
	uint32_t x315 = UINT32_MAX;
	static uint8_t x316 = UINT8_MAX;
	volatile int32_t t39 = 1;

	t39 = ((x313<<(x314<x315))|x316);

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x345 = 523U;
	volatile int64_t x347 = INT64_MIN;
	int32_t t40 = -102148;

	t40 = ((x345<<(x346<x347))|x348);

	if (t40 != 639) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x351 = INT16_MIN;
	volatile int32_t t41 = 1803;

	t41 = ((x349<<(x350<x351))|x352);

	if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x353 = 1521904556708887033LL;
	int16_t x355 = INT16_MIN;
	static int16_t x356 = INT16_MIN;

	t42 = ((x353<<(x354<x355))|x356);

	if (t42 != -1543LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x361 = 18;
	static int64_t x362 = INT64_MIN;
	int16_t x363 = -1;
	int32_t x364 = 1449;
	volatile int32_t t43 = -114743461;

	t43 = ((x361<<(x362<x363))|x364);

	if (t43 != 1453) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x365 = 75U;
	uint8_t x366 = 20U;
	int16_t x367 = INT16_MIN;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t44 = UINT64_MAX;

	t44 = ((x365<<(x366<x367))|x368);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x371 = -1LL;
	uint32_t t45 = 515963294U;

	t45 = ((x369<<(x370<x371))|x372);

	if (t45 != 102370889U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x377 = UINT8_MAX;
	uint16_t x379 = UINT16_MAX;
	volatile uint32_t x380 = 15U;
	volatile uint32_t t46 = 16900U;

	t46 = ((x377<<(x378<x379))|x380);

	if (t46 != 255U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x389 = UINT64_MAX;
	static uint16_t x391 = UINT16_MAX;
	int32_t x392 = -1;
	static uint64_t t47 = UINT64_MAX;

	t47 = ((x389<<(x390<x391))|x392);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x393 = UINT32_MAX;
	volatile uint64_t x394 = 26516575224865LLU;
	int64_t x395 = -1LL;
	int8_t x396 = -1;
	uint32_t t48 = UINT32_MAX;

	t48 = ((x393<<(x394<x395))|x396);

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x405 = 1650LLU;
	uint8_t x406 = 88U;
	int64_t x407 = INT64_MIN;
	volatile uint8_t x408 = UINT8_MAX;
	static volatile uint64_t t49 = 269375237300LLU;

	t49 = ((x405<<(x406<x407))|x408);

	if (t49 != 1791LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x409 = UINT8_MAX;
	uint64_t x410 = 52719572685487259LLU;
	int32_t x411 = INT32_MIN;
	int8_t x412 = INT8_MIN;

	t50 = ((x409<<(x410<x411))|x412);

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x413 = INT16_MAX;
	static int8_t x415 = 35;
	volatile uint32_t x416 = UINT32_MAX;
	uint32_t t51 = UINT32_MAX;

	t51 = ((x413<<(x414<x415))|x416);

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x425 = 131;
	uint16_t x426 = 25U;
	int8_t x427 = -27;
	int8_t x428 = 18;
	volatile int32_t t52 = 3;

	t52 = ((x425<<(x426<x427))|x428);

	if (t52 != 147) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x433 = UINT16_MAX;
	int16_t x434 = INT16_MAX;
	int64_t x436 = INT64_MIN;
	volatile int64_t t53 = 1LL;

	t53 = ((x433<<(x434<x435))|x436);

	if (t53 != -9223372036854644738LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x441 = INT16_MAX;
	int32_t x442 = INT32_MIN;
	int16_t x443 = INT16_MAX;
	int32_t t54 = 109338;

	t54 = ((x441<<(x442<x443))|x444);

	if (t54 != 65534) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x451 = -1;
	volatile int32_t x452 = INT32_MAX;
	volatile int32_t t55 = INT32_MAX;

	t55 = ((x449<<(x450<x451))|x452);

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x457 = INT16_MAX;
	int16_t x458 = -1;
	volatile int32_t t56 = -241;

	t56 = ((x457<<(x458<x459))|x460);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x461 = UINT64_MAX;
	static volatile int16_t x462 = INT16_MIN;
	int16_t x463 = INT16_MIN;
	uint8_t x464 = 65U;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = ((x461<<(x462<x463))|x464);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x465 = 1612271LL;
	int16_t x466 = 28;
	uint8_t x467 = 3U;
	static int32_t x468 = INT32_MIN;

	t58 = ((x465<<(x466<x467))|x468);

	if (t58 != -2145871377LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x469 = 105U;
	int16_t x470 = -1;
	volatile int64_t x471 = 455265254LL;
	uint64_t x472 = 129704171227928224LLU;
	uint64_t t59 = 8110LLU;

	t59 = ((x469<<(x470<x471))|x472);

	if (t59 != 129704171227928306LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x473 = UINT8_MAX;
	static uint64_t x474 = UINT64_MAX;
	uint32_t t60 = 113U;

	t60 = ((x473<<(x474<x475))|x476);

	if (t60 != 100863U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x481 = INT64_MAX;
	static volatile uint32_t x482 = UINT32_MAX;
	uint8_t x484 = 0U;
	volatile int64_t t61 = INT64_MAX;

	t61 = ((x481<<(x482<x483))|x484);

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x485 = 16834U;
	uint8_t x486 = 7U;
	int32_t x487 = INT32_MIN;
	int64_t x488 = INT64_MAX;
	int64_t t62 = INT64_MAX;

	t62 = ((x485<<(x486<x487))|x488);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x489 = 14198629U;
	volatile uint32_t x491 = UINT32_MAX;
	uint32_t x492 = 65653619U;
	volatile uint32_t t63 = 65114733U;

	t63 = ((x489<<(x490<x491))|x492);

	if (t63 != 66703355U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x493 = 0U;
	int8_t x494 = -1;
	int32_t x495 = INT32_MAX;
	uint16_t x496 = 121U;
	volatile int32_t t64 = 245;

	t64 = ((x493<<(x494<x495))|x496);

	if (t64 != 121) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x501 = UINT64_MAX;
	int16_t x502 = -6340;
	uint16_t x503 = 3U;
	int16_t x504 = INT16_MAX;
	uint64_t t65 = UINT64_MAX;

	t65 = ((x501<<(x502<x503))|x504);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x521 = UINT32_MAX;
	static uint16_t x522 = 4U;
	uint16_t x523 = 1357U;
	static volatile uint8_t x524 = UINT8_MAX;
	uint32_t t66 = UINT32_MAX;

	t66 = ((x521<<(x522<x523))|x524);

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x525 = 14U;
	uint64_t x526 = UINT64_MAX;
	int8_t x527 = -1;
	int16_t x528 = INT16_MAX;
	static int32_t t67 = 43;

	t67 = ((x525<<(x526<x527))|x528);

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x529 = UINT16_MAX;
	uint64_t x530 = UINT64_MAX;
	int32_t x531 = -1;
	int64_t x532 = INT64_MIN;

	t68 = ((x529<<(x530<x531))|x532);

	if (t68 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x541 = 12116;
	uint16_t x542 = UINT16_MAX;
	int64_t x543 = 179770165LL;
	int8_t x544 = INT8_MIN;
	int32_t t69 = -1295;

	t69 = ((x541<<(x542<x543))|x544);

	if (t69 != -88) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x545 = 3;
	int32_t x546 = 11;
	volatile uint8_t x547 = 2U;
	int32_t t70 = 211459684;

	t70 = ((x545<<(x546<x547))|x548);

	if (t70 != -32765) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x553 = 583637142339LLU;
	int32_t x554 = INT32_MIN;
	static int8_t x555 = -1;

	t71 = ((x553<<(x554<x555))|x556);

	if (t71 != 18446744072752731782LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x561 = 928U;
	int64_t x564 = -267455243062LL;
	int64_t t72 = 461482LL;

	t72 = ((x561<<(x562<x563))|x564);

	if (t72 != -267455242262LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x569 = 726756;
	int16_t x570 = INT16_MAX;
	int8_t x571 = INT8_MIN;
	static int64_t t73 = -4577390LL;

	t73 = ((x569<<(x570<x571))|x572);

	if (t73 != -9223372036854049052LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x574 = 12088;
	int16_t x575 = INT16_MIN;
	uint8_t x576 = 27U;

	t74 = ((x573<<(x574<x575))|x576);

	if (t74 != 19893352196511LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x577 = INT8_MAX;
	int8_t x578 = 1;
	int8_t x579 = INT8_MIN;
	uint16_t x580 = 0U;
	int32_t t75 = -4;

	t75 = ((x577<<(x578<x579))|x580);

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x581 = UINT8_MAX;
	int32_t x582 = INT32_MIN;
	uint32_t x583 = UINT32_MAX;
	static int64_t x584 = -1LL;
	int64_t t76 = -6LL;

	t76 = ((x581<<(x582<x583))|x584);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x585 = 5649U;
	int16_t x586 = 0;
	int8_t x588 = -1;
	volatile int32_t t77 = 5789;

	t77 = ((x585<<(x586<x587))|x588);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x589 = INT64_MAX;
	static uint32_t x590 = 2358U;
	volatile uint8_t x592 = 61U;

	t78 = ((x589<<(x590<x591))|x592);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x593 = 117936;
	static volatile int8_t x594 = -1;
	volatile int32_t x595 = -1;
	static uint64_t x596 = 143994883195432008LLU;

	t79 = ((x593<<(x594<x595))|x596);

	if (t79 != 143994883195530488LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x605 = 5LL;
	static volatile int32_t x606 = 26209487;
	int16_t x608 = -2;

	t80 = ((x605<<(x606<x607))|x608);

	if (t80 != -2LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x613 = INT8_MAX;
	volatile int32_t x614 = INT32_MIN;
	int64_t x615 = INT64_MAX;
	uint8_t x616 = 20U;

	t81 = ((x613<<(x614<x615))|x616);

	if (t81 != 254) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x626 = 11;
	int8_t x627 = 4;
	int64_t t82 = 13945192433467LL;

	t82 = ((x625<<(x626<x627))|x628);

	if (t82 != -16288LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x629 = 1U;
	volatile int64_t x630 = 21225639725013LL;
	static volatile int32_t t83 = 876240946;

	t83 = ((x629<<(x630<x631))|x632);

	if (t83 != -5) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x633 = 130964226121692LLU;
	static int16_t x634 = INT16_MIN;
	uint64_t t84 = UINT64_MAX;

	t84 = ((x633<<(x634<x635))|x636);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x641 = 25980545;
	static int8_t x642 = INT8_MAX;
	int32_t x643 = -1409;
	int32_t t85 = -537;

	t85 = ((x641<<(x642<x643))|x644);

	if (t85 != 26017791) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x653 = UINT16_MAX;
	static int64_t x654 = INT64_MIN;
	int32_t x655 = INT32_MAX;
	int8_t x656 = -1;
	volatile int32_t t86 = 29614;

	t86 = ((x653<<(x654<x655))|x656);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x658 = UINT8_MAX;
	int64_t x659 = INT64_MAX;
	int32_t x660 = -1;
	uint64_t t87 = UINT64_MAX;

	t87 = ((x657<<(x658<x659))|x660);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x661 = INT8_MAX;
	static uint8_t x662 = 3U;
	volatile int8_t x663 = -1;
	int64_t x664 = -1681LL;
	int64_t t88 = 61626363564598LL;

	t88 = ((x661<<(x662<x663))|x664);

	if (t88 != -1665LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x669 = UINT32_MAX;
	int8_t x670 = -12;
	int64_t x671 = INT64_MIN;
	static int16_t x672 = INT16_MIN;
	uint32_t t89 = UINT32_MAX;

	t89 = ((x669<<(x670<x671))|x672);

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x677 = 7;
	uint32_t x678 = 37U;
	int32_t t90 = -117821;

	t90 = ((x677<<(x678<x679))|x680);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x681 = 41;
	static int16_t x682 = 14;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = ((x681<<(x682<x683))|x684);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x689 = UINT64_MAX;
	static uint8_t x691 = 22U;
	int32_t x692 = INT32_MAX;

	t92 = ((x689<<(x690<x691))|x692);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x693 = 2048LLU;
	volatile uint64_t x694 = 22433291367151LLU;
	uint64_t x695 = UINT64_MAX;
	int32_t x696 = 99;
	uint64_t t93 = 3808483809992886255LLU;

	t93 = ((x693<<(x694<x695))|x696);

	if (t93 != 4195LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x705 = 0;
	int64_t x707 = -1LL;
	volatile int32_t t94 = -48;

	t94 = ((x705<<(x706<x707))|x708);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x709 = INT32_MAX;
	uint8_t x710 = 115U;
	static volatile int8_t x711 = 0;
	int16_t x712 = -1;
	static int32_t t95 = -2540;

	t95 = ((x709<<(x710<x711))|x712);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x713 = 1122U;
	uint8_t x714 = UINT8_MAX;
	volatile int32_t t96 = -109860966;

	t96 = ((x713<<(x714<x715))|x716);

	if (t96 != -10) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x717 = INT16_MAX;
	static volatile int64_t x718 = INT64_MAX;
	int64_t x719 = -21034LL;
	int32_t x720 = 55464715;
	static volatile int32_t t97 = 0;

	t97 = ((x717<<(x718<x719))|x720);

	if (t97 != 55476223) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x737 = 13U;
	static volatile int32_t x739 = -1339264;
	int16_t x740 = INT16_MIN;
	int32_t t98 = 3907782;

	t98 = ((x737<<(x738<x739))|x740);

	if (t98 != -32742) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x741 = 6U;
	int16_t x743 = INT16_MIN;
	volatile int32_t x744 = INT32_MIN;
	static int32_t t99 = 1684;

	t99 = ((x741<<(x742<x743))|x744);

	if (t99 != -2147483636) { NG(); } else { ; }
	
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

