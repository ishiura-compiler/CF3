#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int8_t x5 = INT8_MIN;
int32_t x7 = 13;
volatile uint16_t x13 = 384U;
int32_t x16 = -1;
int64_t x19 = -93LL;
volatile int64_t t3 = -107900935789750171LL;
static int64_t x23 = 206167408425624657LL;
int16_t x24 = -1;
static volatile int16_t x29 = 1;
int64_t t6 = 7307976197491LL;
static uint16_t x38 = 4103U;
uint64_t x39 = 48LLU;
volatile int16_t x40 = INT16_MIN;
int16_t x42 = -1;
uint16_t x50 = 49U;
volatile int8_t x55 = INT8_MAX;
int16_t x101 = INT16_MIN;
static int32_t x105 = -630767967;
int64_t x106 = -1LL;
int64_t t15 = 370157982280569LL;
static volatile int8_t x119 = -1;
int32_t x143 = -75;
volatile int32_t t19 = 9;
int8_t x153 = INT8_MIN;
static uint16_t x155 = UINT16_MAX;
volatile int32_t t20 = 1;
int32_t x158 = -8507355;
static uint32_t x165 = UINT32_MAX;
static int64_t t24 = 3344832669LL;
int16_t x193 = 2016;
static uint8_t x213 = 0U;
int32_t x219 = INT32_MIN;
int64_t x235 = -12322083450078LL;
int64_t x244 = -1LL;
int8_t x264 = INT8_MAX;
static int16_t x270 = INT16_MIN;
static volatile uint64_t t37 = 889456191191802LLU;
uint16_t x282 = 4738U;
static int16_t x325 = -996;
int32_t x327 = -1;
int8_t x352 = INT8_MIN;
uint32_t x365 = 4U;
int16_t x366 = -1;
static uint16_t x374 = 122U;
uint8_t x399 = UINT8_MAX;
int8_t x404 = INT8_MIN;
volatile uint32_t x411 = UINT32_MAX;
volatile uint8_t x423 = 65U;
uint32_t x424 = UINT32_MAX;
uint16_t x428 = 4275U;
volatile int64_t t51 = 31248907399027844LL;
int32_t x436 = INT32_MAX;
volatile int16_t x444 = INT16_MAX;
static int8_t x452 = INT8_MIN;
static uint8_t x464 = 17U;
uint8_t x477 = 0U;
uint64_t t60 = 1438LLU;
volatile int32_t t61 = 3379807;
uint32_t t62 = 118U;
uint16_t x491 = 15034U;
volatile int64_t t65 = -4LL;
int16_t x519 = INT16_MIN;
uint8_t x525 = 0U;
static int16_t x534 = 12;
int64_t x539 = INT64_MAX;
uint32_t x544 = UINT32_MAX;
volatile int64_t x546 = -1LL;
int64_t t73 = 112494LL;
int16_t x573 = INT16_MIN;
static uint16_t x575 = 2377U;
uint64_t x595 = 12095LLU;
volatile int32_t x601 = 55817827;
int8_t x611 = INT8_MIN;
uint8_t x621 = 113U;
volatile int64_t t80 = 10LL;
static volatile int16_t x625 = 2920;
volatile int32_t x628 = -1;
int64_t t82 = -266360400438531133LL;
static int16_t x636 = -122;
uint32_t t85 = 124U;
uint64_t x666 = 363467619596286LLU;
volatile int32_t t89 = 0;
int8_t x701 = -1;
static volatile int32_t x703 = INT32_MAX;
uint32_t t90 = 503932U;
int16_t x724 = -1;
int32_t t93 = -31;
uint16_t x732 = UINT16_MAX;
volatile uint64_t t94 = 198643144754455158LLU;
int16_t x736 = -1;
uint64_t x759 = UINT64_MAX;
volatile int64_t t98 = 2285810329484476110LL;
int16_t x808 = INT16_MAX;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	static volatile int32_t x3 = -1;
	uint16_t x4 = 4208U;
	static volatile int32_t t0 = 112872911;

	t0 = ((x1*x2)/(x3*x4));

	if (t0 != 1985) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -22;
	volatile int16_t x8 = INT16_MAX;
	int32_t t1 = 26817;

	t1 = ((x5*x6)/(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x14 = UINT64_MAX;
	uint32_t x15 = UINT32_MAX;
	volatile uint64_t t2 = 14459LLU;

	t2 = ((x13*x14)/(x15*x16));

	if (t2 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	static int32_t x18 = 0;
	static int8_t x20 = 1;

	t3 = ((x17*x18)/(x19*x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -1;
	static int8_t x22 = INT8_MIN;
	volatile int64_t t4 = 18008999286456LL;

	t4 = ((x21*x22)/(x23*x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	static volatile int32_t x26 = INT32_MAX;
	int32_t x27 = -1;
	int64_t x28 = -35338109LL;
	volatile uint64_t t5 = 17979017290111LLU;

	t5 = ((x25*x26)/(x27*x28));

	if (t5 != 522007107725LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = INT16_MIN;
	volatile int8_t x31 = -1;
	int64_t x32 = 20733511379LL;

	t6 = ((x29*x30)/(x31*x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	volatile uint64_t t7 = 66071LLU;

	t7 = ((x37*x38)/(x39*x40));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x41 = 3598U;
	uint8_t x43 = 40U;
	volatile uint16_t x44 = 18868U;
	volatile int32_t t8 = -11;

	t8 = ((x41*x42)/(x43*x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x45 = -1;
	uint16_t x46 = 7439U;
	uint16_t x47 = 309U;
	uint8_t x48 = 51U;
	int32_t t9 = 1;

	t9 = ((x45*x46)/(x47*x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = 40;
	uint32_t x51 = UINT32_MAX;
	uint32_t x52 = 20146U;
	volatile uint32_t t10 = 3970931U;

	t10 = ((x49*x50)/(x51*x52));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 189956656U;
	static int64_t x54 = 3720040287LL;
	static volatile int64_t x56 = -42074879176207LL;
	int64_t t11 = 1802558466LL;

	t11 = ((x53*x54)/(x55*x56));

	if (t11 != -132LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = INT16_MAX;
	int64_t x66 = 12LL;
	volatile int64_t x67 = -1LL;
	int64_t x68 = -1LL;
	volatile int64_t t12 = 2015824400906LL;

	t12 = ((x65*x66)/(x67*x68));

	if (t12 != 393204LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x93 = 102733765144994640LLU;
	volatile uint8_t x94 = 2U;
	static int8_t x95 = -1;
	static int16_t x96 = INT16_MIN;
	volatile uint64_t t13 = 2452708434906726262LLU;

	t13 = ((x93*x94)/(x95*x96));

	if (t13 != 6270371407775LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x102 = 105136LLU;
	int8_t x103 = -1;
	uint32_t x104 = UINT32_MAX;
	uint64_t t14 = 2413790745933LLU;

	t14 = ((x101*x102)/(x103*x104));

	if (t14 != 18446744070264455168LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x107 = 13U;
	uint32_t x108 = 303455405U;

	t15 = ((x105*x106)/(x107*x108));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x117 = INT16_MIN;
	static int16_t x118 = INT16_MAX;
	volatile uint16_t x120 = UINT16_MAX;
	volatile int32_t t16 = -787123506;

	t16 = ((x117*x118)/(x119*x120));

	if (t16 != 16383) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x129 = -15;
	int16_t x130 = -1;
	static uint16_t x131 = 63U;
	int16_t x132 = INT16_MIN;
	static int32_t t17 = -1;

	t17 = ((x129*x130)/(x131*x132));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x141 = UINT64_MAX;
	int64_t x142 = -1LL;
	volatile int16_t x144 = INT16_MIN;
	uint64_t t18 = 37408974729147LLU;

	t18 = ((x141*x142)/(x143*x144));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x145 = -59;
	int16_t x146 = INT16_MAX;
	int16_t x147 = -1;
	int8_t x148 = -1;

	t19 = ((x145*x146)/(x147*x148));

	if (t19 != -1933253) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x154 = 1;
	int32_t x156 = -1;

	t20 = ((x153*x154)/(x155*x156));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x157 = -168;
	uint8_t x159 = 71U;
	uint64_t x160 = 739354079054034218LLU;
	uint64_t t21 = 571140049420LLU;

	t21 = ((x157*x158)/(x159*x160));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x166 = 23768778LL;
	int8_t x167 = INT8_MAX;
	static int16_t x168 = INT16_MIN;
	static int64_t t22 = -961159421LL;

	t22 = ((x165*x166)/(x167*x168));

	if (t22 != -24530876136LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x169 = INT64_MAX;
	int8_t x170 = -1;
	uint32_t x171 = 70830026U;
	uint16_t x172 = 8U;
	volatile int64_t t23 = 908318785LL;

	t23 = ((x169*x170)/(x171*x172));

	if (t23 != -16277298904LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x177 = 41992LL;
	volatile int8_t x178 = -16;
	int16_t x179 = 15239;
	uint8_t x180 = 10U;

	t24 = ((x177*x178)/(x179*x180));

	if (t24 != -4LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x185 = INT16_MIN;
	uint32_t x186 = 668571U;
	int8_t x187 = 14;
	volatile uint64_t x188 = 133077388625LLU;
	volatile uint64_t t25 = 266059559LLU;

	t25 = ((x185*x186)/(x187*x188));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x194 = 1U;
	volatile int64_t x195 = -1LL;
	static int32_t x196 = INT32_MAX;
	volatile int64_t t26 = -215070493466956LL;

	t26 = ((x193*x194)/(x195*x196));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x205 = UINT32_MAX;
	int8_t x206 = INT8_MAX;
	int8_t x207 = INT8_MIN;
	uint64_t x208 = 664474260797262LLU;
	volatile uint64_t t27 = 1738842733949055LLU;

	t27 = ((x205*x206)/(x207*x208));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x209 = INT16_MIN;
	int32_t x210 = -1;
	uint16_t x211 = 16616U;
	int8_t x212 = -62;
	volatile int32_t t28 = 98;

	t28 = ((x209*x210)/(x211*x212));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x214 = UINT16_MAX;
	int8_t x215 = INT8_MAX;
	static int16_t x216 = 8;
	volatile int32_t t29 = -438907;

	t29 = ((x213*x214)/(x215*x216));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x217 = -1;
	int16_t x218 = -1;
	uint32_t x220 = 19447U;
	uint32_t t30 = 23642U;

	t30 = ((x217*x218)/(x219*x220));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x233 = INT16_MAX;
	int64_t x234 = -1LL;
	int32_t x236 = 184335;
	static volatile int64_t t31 = -3924889LL;

	t31 = ((x233*x234)/(x235*x236));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x237 = -13;
	int16_t x238 = INT16_MAX;
	int8_t x239 = -24;
	int8_t x240 = 1;
	int32_t t32 = 14;

	t32 = ((x237*x238)/(x239*x240));

	if (t32 != 17748) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x241 = 119274LLU;
	int64_t x242 = 0LL;
	int32_t x243 = INT32_MIN;
	uint64_t t33 = 80303404491580LLU;

	t33 = ((x241*x242)/(x243*x244));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x257 = INT64_MAX;
	int32_t x258 = -1;
	int8_t x259 = INT8_MIN;
	int16_t x260 = 199;
	int64_t t34 = -969LL;

	t34 = ((x257*x258)/(x259*x260));

	if (t34 != 362098462502150LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x261 = 3898677877626LLU;
	volatile uint32_t x262 = 90U;
	int16_t x263 = INT16_MAX;
	volatile uint64_t t35 = 72684327LLU;

	t35 = ((x261*x262)/(x263*x264));

	if (t35 != 84317837LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x265 = -1;
	volatile uint64_t x266 = 33527LLU;
	int16_t x267 = INT16_MAX;
	int16_t x268 = INT16_MIN;
	volatile uint64_t t36 = 11781251LLU;

	t36 = ((x265*x266)/(x267*x268));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x269 = UINT16_MAX;
	uint64_t x271 = UINT64_MAX;
	uint64_t x272 = 42657899582021LLU;

	t37 = ((x269*x270)/(x271*x272));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x273 = INT16_MAX;
	volatile int64_t x274 = 450867596LL;
	volatile uint64_t x275 = UINT64_MAX;
	int16_t x276 = 3;
	volatile uint64_t t38 = 2328322131285LLU;

	t38 = ((x273*x274)/(x275*x276));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x277 = -527875403;
	uint64_t x278 = 4502341336508899LLU;
	int8_t x279 = INT8_MAX;
	volatile int8_t x280 = INT8_MIN;
	uint64_t t39 = 699871190079975LLU;

	t39 = ((x277*x278)/(x279*x280));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x281 = UINT32_MAX;
	uint64_t x283 = 32LLU;
	int64_t x284 = -316148477334412866LL;
	volatile uint64_t t40 = 936955LLU;

	t40 = ((x281*x282)/(x283*x284));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x285 = 177;
	int8_t x286 = -1;
	int64_t x287 = 7723578LL;
	uint64_t x288 = UINT64_MAX;
	static uint64_t t41 = 69804343529112LLU;

	t41 = ((x285*x286)/(x287*x288));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x326 = 12751U;
	int8_t x328 = INT8_MAX;
	uint32_t t42 = 25769U;

	t42 = ((x325*x326)/(x327*x328));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x349 = 123735438U;
	static uint16_t x350 = UINT16_MAX;
	static int16_t x351 = 57;
	uint32_t t43 = 6590U;

	t43 = ((x349*x350)/(x351*x352));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x367 = 11394865938LLU;
	uint64_t x368 = 92280042LLU;
	uint64_t t44 = 4612604857765LLU;

	t44 = ((x365*x366)/(x367*x368));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x373 = -1;
	int8_t x375 = 1;
	int32_t x376 = -1;
	static volatile int32_t t45 = 0;

	t45 = ((x373*x374)/(x375*x376));

	if (t45 != 122) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x381 = -269063338728LL;
	int8_t x382 = -1;
	static uint32_t x383 = 6403323U;
	int32_t x384 = INT32_MIN;
	volatile int64_t t46 = -4880547LL;

	t46 = ((x381*x382)/(x383*x384));

	if (t46 != 125LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x397 = 734U;
	int32_t x398 = -1;
	int16_t x400 = INT16_MIN;
	volatile int32_t t47 = -22021;

	t47 = ((x397*x398)/(x399*x400));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x401 = UINT16_MAX;
	int64_t x402 = -1LL;
	volatile int32_t x403 = 3352472;
	volatile int64_t t48 = 16428017623LL;

	t48 = ((x401*x402)/(x403*x404));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x409 = 0;
	volatile int16_t x410 = INT16_MIN;
	int16_t x412 = INT16_MIN;
	volatile uint32_t t49 = 580164U;

	t49 = ((x409*x410)/(x411*x412));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x421 = -464784;
	int8_t x422 = INT8_MIN;
	volatile uint32_t t50 = 1U;

	t50 = ((x421*x422)/(x423*x424));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x425 = UINT16_MAX;
	volatile int16_t x426 = -614;
	volatile int64_t x427 = -694329167124658LL;

	t51 = ((x425*x426)/(x427*x428));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x429 = 94087269937716LL;
	int16_t x430 = INT16_MIN;
	uint32_t x431 = 1210738402U;
	uint16_t x432 = 7234U;
	volatile int64_t t52 = -202729671867370521LL;

	t52 = ((x429*x430)/(x431*x432));

	if (t52 != -2955142672LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x433 = -26;
	static int8_t x434 = INT8_MIN;
	int32_t x435 = -1;
	int32_t t53 = -24181513;

	t53 = ((x433*x434)/(x435*x436));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x437 = 3U;
	static volatile uint16_t x438 = UINT16_MAX;
	int32_t x439 = INT32_MAX;
	int32_t x440 = -1;
	int32_t t54 = 5258;

	t54 = ((x437*x438)/(x439*x440));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x441 = UINT8_MAX;
	int32_t x442 = 0;
	int8_t x443 = INT8_MAX;
	static int32_t t55 = 16689591;

	t55 = ((x441*x442)/(x443*x444));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x449 = 840585U;
	uint32_t x450 = 1U;
	uint8_t x451 = UINT8_MAX;
	volatile uint32_t t56 = 15925636U;

	t56 = ((x449*x450)/(x451*x452));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x453 = 5U;
	static uint16_t x454 = 516U;
	int16_t x455 = INT16_MIN;
	int8_t x456 = -1;
	int32_t t57 = -96014;

	t57 = ((x453*x454)/(x455*x456));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x461 = UINT32_MAX;
	uint64_t x462 = 113LLU;
	int32_t x463 = -305;
	static uint64_t t58 = 60710901911LLU;

	t58 = ((x461*x462)/(x463*x464));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x473 = INT16_MAX;
	volatile int32_t x474 = -1;
	volatile int16_t x475 = 190;
	uint16_t x476 = 38U;
	static int32_t t59 = 2508;

	t59 = ((x473*x474)/(x475*x476));

	if (t59 != -4) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x478 = 1U;
	uint64_t x479 = 140750248940LLU;
	uint8_t x480 = UINT8_MAX;

	t60 = ((x477*x478)/(x479*x480));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x481 = INT16_MAX;
	int16_t x482 = INT16_MIN;
	static int16_t x483 = INT16_MIN;
	volatile int16_t x484 = INT16_MIN;

	t61 = ((x481*x482)/(x483*x484));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x485 = 1311250116U;
	int16_t x486 = 30;
	static int8_t x487 = INT8_MIN;
	int8_t x488 = INT8_MAX;

	t62 = ((x485*x486)/(x487*x488));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x489 = -1;
	int16_t x490 = INT16_MIN;
	static int16_t x492 = INT16_MIN;
	volatile int32_t t63 = 356827083;

	t63 = ((x489*x490)/(x491*x492));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x505 = 55U;
	int8_t x506 = INT8_MAX;
	static volatile int32_t x507 = -1;
	uint64_t x508 = 1LLU;
	volatile uint64_t t64 = 551373601533241LLU;

	t64 = ((x505*x506)/(x507*x508));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x509 = -1LL;
	static int8_t x510 = -6;
	static uint16_t x511 = 237U;
	volatile int8_t x512 = -4;

	t65 = ((x509*x510)/(x511*x512));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x513 = UINT8_MAX;
	static uint32_t x514 = UINT32_MAX;
	uint64_t x515 = 762LLU;
	volatile int8_t x516 = -1;
	volatile uint64_t t66 = 2043947047906538LLU;

	t66 = ((x513*x514)/(x515*x516));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x517 = UINT64_MAX;
	int8_t x518 = 0;
	uint64_t x520 = UINT64_MAX;
	volatile uint64_t t67 = 365288281314LLU;

	t67 = ((x517*x518)/(x519*x520));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x526 = INT8_MAX;
	volatile int8_t x527 = INT8_MAX;
	static int64_t x528 = -4383553676101LL;
	int64_t t68 = 47803578991LL;

	t68 = ((x525*x526)/(x527*x528));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x533 = -10177945;
	volatile int32_t x535 = INT32_MAX;
	uint32_t x536 = UINT32_MAX;
	uint32_t t69 = 908536U;

	t69 = ((x533*x534)/(x535*x536));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x537 = INT16_MAX;
	uint16_t x538 = 2U;
	int16_t x540 = -1;
	volatile int64_t t70 = -10173621169210LL;

	t70 = ((x537*x538)/(x539*x540));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x541 = -5;
	int64_t x542 = -21LL;
	volatile uint8_t x543 = 40U;
	volatile int64_t t71 = 0LL;

	t71 = ((x541*x542)/(x543*x544));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x545 = INT8_MIN;
	volatile int16_t x547 = INT16_MAX;
	uint8_t x548 = 5U;
	volatile int64_t t72 = -23317LL;

	t72 = ((x545*x546)/(x547*x548));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x569 = UINT8_MAX;
	static int16_t x570 = INT16_MIN;
	int64_t x571 = -1LL;
	int8_t x572 = INT8_MIN;

	t73 = ((x569*x570)/(x571*x572));

	if (t73 != -65280LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x574 = 9U;
	int64_t x576 = -1LL;
	volatile int64_t t74 = -1101327LL;

	t74 = ((x573*x574)/(x575*x576));

	if (t74 != 124LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x577 = INT8_MIN;
	uint8_t x578 = UINT8_MAX;
	int8_t x579 = -1;
	uint8_t x580 = 3U;
	int32_t t75 = -7;

	t75 = ((x577*x578)/(x579*x580));

	if (t75 != 10880) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x593 = -306LL;
	uint64_t x594 = 10953737LLU;
	volatile uint16_t x596 = 7486U;
	uint64_t t76 = 1LLU;

	t76 = ((x593*x594)/(x595*x596));

	if (t76 != 203734241581LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x602 = -75655725LL;
	int16_t x603 = 344;
	static uint8_t x604 = UINT8_MAX;
	int64_t t77 = 62220613306935684LL;

	t77 = ((x601*x602)/(x603*x604));

	if (t77 != -48141110004LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x609 = UINT32_MAX;
	int16_t x610 = INT16_MIN;
	uint32_t x612 = UINT32_MAX;
	uint32_t t78 = 64504U;

	t78 = ((x609*x610)/(x611*x612));

	if (t78 != 256U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x613 = UINT64_MAX;
	int16_t x614 = INT16_MIN;
	uint32_t x615 = 24424U;
	static uint32_t x616 = 793U;
	static uint64_t t79 = 4334188212738380LLU;

	t79 = ((x613*x614)/(x615*x616));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x622 = 1755LL;
	int8_t x623 = 1;
	static int32_t x624 = INT32_MIN;

	t80 = ((x621*x622)/(x623*x624));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x626 = 13308U;
	volatile int8_t x627 = INT8_MAX;
	volatile int32_t t81 = -105;

	t81 = ((x625*x626)/(x627*x628));

	if (t81 != -305979) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x629 = INT8_MAX;
	static int64_t x630 = -1LL;
	static int32_t x631 = 61323035;
	uint8_t x632 = 17U;

	t82 = ((x629*x630)/(x631*x632));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x633 = INT8_MAX;
	uint8_t x634 = 2U;
	uint32_t x635 = 3U;
	uint32_t t83 = 521753U;

	t83 = ((x633*x634)/(x635*x636));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x637 = 273U;
	uint32_t x638 = 5U;
	uint64_t x639 = 467259576508575LLU;
	uint16_t x640 = 21U;
	uint64_t t84 = 349895751125905497LLU;

	t84 = ((x637*x638)/(x639*x640));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x653 = INT32_MAX;
	uint32_t x654 = 85U;
	static int16_t x655 = INT16_MIN;
	uint8_t x656 = 2U;

	t85 = ((x653*x654)/(x655*x656));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x665 = -43697311527893239LL;
	volatile int16_t x667 = -1402;
	static uint32_t x668 = 46724U;
	volatile uint64_t t86 = 2379646057187LLU;

	t86 = ((x665*x666)/(x667*x668));

	if (t86 != 2764304599LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x685 = 0;
	static int8_t x686 = 1;
	int16_t x687 = INT16_MIN;
	volatile int8_t x688 = -1;
	static volatile int32_t t87 = -317;

	t87 = ((x685*x686)/(x687*x688));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x693 = 3491343596744392408LL;
	volatile uint64_t x694 = UINT64_MAX;
	volatile int8_t x695 = INT8_MAX;
	static int8_t x696 = INT8_MAX;
	volatile uint64_t t88 = 45734390014688192LLU;

	t88 = ((x693*x694)/(x695*x696));

	if (t88 != 927236684045207LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x697 = INT16_MAX;
	int8_t x698 = INT8_MIN;
	int8_t x699 = -18;
	static volatile int16_t x700 = INT16_MIN;

	t89 = ((x697*x698)/(x699*x700));

	if (t89 != -7) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x702 = -3365;
	uint32_t x704 = 1606U;

	t90 = ((x701*x702)/(x703*x704));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x709 = 83U;
	static int8_t x710 = INT8_MIN;
	int8_t x711 = -1;
	uint8_t x712 = 9U;
	static int32_t t91 = 8;

	t91 = ((x709*x710)/(x711*x712));

	if (t91 != 1180) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x717 = INT64_MIN;
	static int32_t x718 = 1;
	uint64_t x719 = UINT64_MAX;
	int64_t x720 = -1LL;
	uint64_t t92 = 10LLU;

	t92 = ((x717*x718)/(x719*x720));

	if (t92 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x721 = 1;
	int8_t x722 = -5;
	uint8_t x723 = 1U;

	t93 = ((x721*x722)/(x723*x724));

	if (t93 != 5) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x729 = 0;
	uint16_t x730 = 49U;
	static uint64_t x731 = 5006384679LLU;

	t94 = ((x729*x730)/(x731*x732));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x733 = -1;
	int32_t x734 = -521;
	int16_t x735 = INT16_MAX;
	volatile int32_t t95 = 31130204;

	t95 = ((x733*x734)/(x735*x736));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x737 = 18U;
	int64_t x738 = -1LL;
	int16_t x739 = -8;
	int32_t x740 = 3844;
	int64_t t96 = -571215536LL;

	t96 = ((x737*x738)/(x739*x740));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x757 = -1;
	uint32_t x758 = 1444245101U;
	int64_t x760 = 20154667381720LL;
	static uint64_t t97 = 50873796307248013LLU;

	t97 = ((x757*x758)/(x759*x760));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x761 = -1;
	int32_t x762 = 17;
	int64_t x763 = -1LL;
	int8_t x764 = -1;

	t98 = ((x761*x762)/(x763*x764));

	if (t98 != -17LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x805 = 6LL;
	static int16_t x806 = INT16_MAX;
	int16_t x807 = 3153;
	volatile int64_t t99 = -767533956LL;

	t99 = ((x805*x806)/(x807*x808));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

