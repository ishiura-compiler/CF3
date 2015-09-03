#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = -1LL;
volatile int32_t x7 = INT32_MIN;
static volatile int8_t x15 = 1;
uint64_t t2 = 735889LLU;
int16_t x18 = -3;
volatile int64_t x19 = INT64_MIN;
int32_t x25 = -1;
int8_t x31 = -1;
uint8_t x52 = UINT8_MAX;
volatile int32_t x106 = INT32_MIN;
int8_t x108 = -3;
volatile int64_t x124 = 12LL;
volatile uint32_t t12 = 13045256U;
int8_t x126 = INT8_MAX;
int64_t t13 = 7253133418LL;
volatile int32_t x131 = -127332;
uint32_t t18 = 3U;
static uint16_t x178 = UINT16_MAX;
uint64_t t19 = 49662757333LLU;
uint16_t x184 = 5019U;
int16_t x185 = INT16_MIN;
static uint32_t x188 = UINT32_MAX;
uint64_t x210 = 259151785LLU;
volatile int32_t t24 = -4797;
static int8_t x229 = INT8_MIN;
int8_t x234 = INT8_MIN;
volatile int8_t x237 = 0;
uint64_t x242 = UINT64_MAX;
int64_t x244 = 215054181792808LL;
int32_t t31 = 52508;
int64_t x251 = INT64_MAX;
int64_t t32 = 26925451976LL;
int32_t x267 = INT32_MIN;
static int32_t x269 = INT32_MIN;
static int32_t x283 = -2;
int64_t x284 = 734079927301686LL;
int8_t x315 = -1;
int64_t x342 = -49163759774543LL;
int16_t x343 = INT16_MIN;
uint32_t x354 = UINT32_MAX;
int8_t x380 = 56;
uint64_t t47 = 464732417674261LLU;
static int8_t x388 = INT8_MAX;
uint32_t x392 = UINT32_MAX;
int8_t x406 = 1;
uint16_t x409 = UINT16_MAX;
volatile int16_t x415 = INT16_MIN;
int8_t x424 = -6;
volatile uint8_t x428 = 2U;
uint64_t x448 = 27983672621LLU;
static uint32_t x449 = UINT32_MAX;
static int8_t x469 = -19;
uint8_t x473 = 123U;
volatile int32_t x474 = INT32_MAX;
volatile int16_t x476 = -1;
volatile int32_t t66 = -1230;
int32_t x490 = INT32_MIN;
volatile int32_t x493 = -1;
int64_t x494 = INT64_MIN;
volatile int64_t t68 = INT64_MAX;
uint64_t x516 = UINT64_MAX;
int32_t x517 = INT32_MIN;
int32_t x533 = INT32_MIN;
int64_t x534 = 27LL;
volatile uint8_t x535 = 82U;
volatile int8_t x548 = 1;
volatile int8_t x568 = INT8_MAX;
static int32_t t77 = -19603266;
uint16_t x570 = 0U;
volatile int8_t x576 = -1;
uint8_t x590 = 6U;
static int32_t x593 = 2810203;
volatile uint16_t x594 = 1771U;
int32_t x595 = -1;
static uint8_t x596 = 5U;
volatile int32_t t82 = -20476728;
int16_t x609 = INT16_MIN;
int32_t x612 = 195;
int8_t x628 = INT8_MAX;
int8_t x640 = INT8_MAX;
volatile int32_t t87 = -46144;
uint16_t x641 = UINT16_MAX;
static volatile int32_t t89 = 6;
int64_t x674 = 7893LL;
int16_t x689 = -1;
static volatile int8_t x694 = INT8_MIN;
uint8_t x695 = 56U;
volatile int64_t t96 = -5958164246801301LL;
static volatile uint32_t t97 = 71390U;
static int32_t t99 = 91996;


void f0(void) {
	static int64_t x6 = INT64_MAX;
	int64_t x8 = 6330526076012LL;
	int64_t t0 = INT64_MIN;

	t0 = (x5-(x6/(x7<=x8)));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 1289842U;
	int64_t x10 = -1LL;
	int64_t x11 = INT64_MIN;
	uint32_t x12 = 1867U;
	volatile int64_t t1 = -6LL;

	t1 = (x9-(x10/(x11<=x12)));

	if (t1 != 1289843LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = INT64_MIN;
	uint64_t x14 = 22285237206658LLU;
	uint16_t x16 = 4U;

	t2 = (x13-(x14/(x15<=x16)));

	if (t2 != 9223349751617569150LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = 86863217639LL;
	volatile int64_t x20 = -1LL;
	static int64_t t3 = 433038627219737LL;

	t3 = (x17-(x18/(x19<=x20)));

	if (t3 != 86863217642LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x26 = INT64_MIN;
	static int64_t x27 = -1LL;
	uint8_t x28 = 2U;
	int64_t t4 = INT64_MAX;

	t4 = (x25-(x26/(x27<=x28)));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = 0U;
	static uint64_t x30 = UINT64_MAX;
	uint8_t x32 = 2U;
	volatile uint64_t t5 = 1188862145615301LLU;

	t5 = (x29-(x30/(x31<=x32)));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x49 = -1;
	uint16_t x50 = 0U;
	uint8_t x51 = 4U;
	volatile int32_t t6 = 9484;

	t6 = (x49-(x50/(x51<=x52)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x53 = -7;
	volatile int64_t x54 = INT64_MIN;
	uint8_t x55 = 1U;
	uint64_t x56 = UINT64_MAX;
	static int64_t t7 = 59409807LL;

	t7 = (x53-(x54/(x55<=x56)));

	if (t7 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x73 = 14;
	uint32_t x74 = UINT32_MAX;
	uint32_t x75 = 28485559U;
	int32_t x76 = -26207163;
	uint32_t t8 = 691512825U;

	t8 = (x73-(x74/(x75<=x76)));

	if (t8 != 15U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x105 = -1;
	int64_t x107 = INT64_MIN;
	int32_t t9 = INT32_MAX;

	t9 = (x105-(x106/(x107<=x108)));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x109 = INT16_MIN;
	int16_t x110 = -1;
	volatile int64_t x111 = -7LL;
	int64_t x112 = 190920866LL;
	static int32_t t10 = 714;

	t10 = (x109-(x110/(x111<=x112)));

	if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x113 = 722894195;
	int64_t x114 = 33LL;
	uint16_t x115 = 3U;
	static uint64_t x116 = 1198718632LLU;
	int64_t t11 = 1429LL;

	t11 = (x113-(x114/(x115<=x116)));

	if (t11 != 722894162LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x121 = -1;
	uint32_t x122 = 12123U;
	int64_t x123 = INT64_MIN;

	t12 = (x121-(x122/(x123<=x124)));

	if (t12 != 4294955172U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x125 = 1558930167244LL;
	int64_t x127 = INT64_MIN;
	uint64_t x128 = UINT64_MAX;

	t13 = (x125-(x126/(x127<=x128)));

	if (t13 != 1558930167117LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x129 = -1;
	static int32_t x130 = -2463145;
	int16_t x132 = 27;
	int32_t t14 = 258051;

	t14 = (x129-(x130/(x131<=x132)));

	if (t14 != 2463144) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x137 = 544884361813012LLU;
	int64_t x138 = INT64_MIN;
	int16_t x139 = INT16_MAX;
	uint64_t x140 = 3848405841319LLU;
	static volatile uint64_t t15 = 169808833115623990LLU;

	t15 = (x137-(x138/(x139<=x140)));

	if (t15 != 9223916921216588820LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x141 = 2765U;
	int8_t x142 = 5;
	volatile int32_t x143 = -1;
	int64_t x144 = INT64_MAX;
	uint32_t t16 = 17630U;

	t16 = (x141-(x142/(x143<=x144)));

	if (t16 != 2760U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x157 = -477;
	uint8_t x158 = 79U;
	int32_t x159 = INT32_MIN;
	int8_t x160 = -8;
	static int32_t t17 = -49535785;

	t17 = (x157-(x158/(x159<=x160)));

	if (t17 != -556) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x173 = 11188742U;
	static int32_t x174 = INT32_MIN;
	int16_t x175 = -833;
	uint8_t x176 = UINT8_MAX;

	t18 = (x173-(x174/(x175<=x176)));

	if (t18 != 2158672390U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x177 = 289099657050LLU;
	int64_t x179 = 142053LL;
	uint64_t x180 = UINT64_MAX;

	t19 = (x177-(x178/(x179<=x180)));

	if (t19 != 289099591515LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x181 = UINT32_MAX;
	uint8_t x182 = 35U;
	uint8_t x183 = UINT8_MAX;
	volatile uint32_t t20 = 362468U;

	t20 = (x181-(x182/(x183<=x184)));

	if (t20 != 4294967260U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x186 = 940634U;
	volatile uint32_t x187 = UINT32_MAX;
	static volatile uint32_t t21 = 48736485U;

	t21 = (x185-(x186/(x187<=x188)));

	if (t21 != 4293993894U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x193 = UINT32_MAX;
	static uint32_t x194 = UINT32_MAX;
	static int8_t x195 = 4;
	uint16_t x196 = 3427U;
	volatile uint32_t t22 = 0U;

	t22 = (x193-(x194/(x195<=x196)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x209 = 26U;
	uint32_t x211 = 1U;
	int16_t x212 = INT16_MAX;
	uint64_t t23 = 5663629513356826408LLU;

	t23 = (x209-(x210/(x211<=x212)));

	if (t23 != 18446744073450399857LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x213 = -1;
	int32_t x214 = 50344018;
	static int16_t x215 = -1;
	int16_t x216 = INT16_MAX;

	t24 = (x213-(x214/(x215<=x216)));

	if (t24 != -50344019) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x217 = INT16_MIN;
	uint32_t x218 = UINT32_MAX;
	int64_t x219 = INT64_MIN;
	static int64_t x220 = -1LL;
	uint32_t t25 = 83662190U;

	t25 = (x217-(x218/(x219<=x220)));

	if (t25 != 4294934529U) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x221 = INT16_MIN;
	int8_t x222 = 5;
	int16_t x223 = INT16_MIN;
	static volatile int8_t x224 = INT8_MIN;
	int32_t t26 = -347;

	t26 = (x221-(x222/(x223<=x224)));

	if (t26 != -32773) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x230 = INT32_MIN;
	int64_t x231 = 383119470LL;
	uint32_t x232 = 1971848742U;
	int32_t t27 = -776317;

	t27 = (x229-(x230/(x231<=x232)));

	if (t27 != 2147483520) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x233 = -1;
	volatile int8_t x235 = INT8_MIN;
	uint8_t x236 = UINT8_MAX;
	static int32_t t28 = 2059843;

	t28 = (x233-(x234/(x235<=x236)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x238 = 31952353U;
	int16_t x239 = -1;
	volatile uint64_t x240 = UINT64_MAX;
	volatile uint32_t t29 = 15142U;

	t29 = (x237-(x238/(x239<=x240)));

	if (t29 != 4263014943U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x241 = -14;
	int8_t x243 = INT8_MIN;
	uint64_t t30 = 1351137564LLU;

	t30 = (x241-(x242/(x243<=x244)));

	if (t30 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x245 = 1U;
	int8_t x246 = INT8_MIN;
	int8_t x247 = 1;
	volatile uint64_t x248 = UINT64_MAX;

	t31 = (x245-(x246/(x247<=x248)));

	if (t31 != 129) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x249 = -1LL;
	uint8_t x250 = UINT8_MAX;
	int64_t x252 = INT64_MAX;

	t32 = (x249-(x250/(x251<=x252)));

	if (t32 != -256LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x253 = -1LL;
	uint64_t x254 = 5762LLU;
	int64_t x255 = INT64_MIN;
	int8_t x256 = 52;
	static volatile uint64_t t33 = 637686441821LLU;

	t33 = (x253-(x254/(x255<=x256)));

	if (t33 != 18446744073709545853LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x257 = 735388907980763167LLU;
	volatile uint32_t x258 = 285U;
	int32_t x259 = -7;
	int32_t x260 = INT32_MAX;
	uint64_t t34 = 10790004600850381LLU;

	t34 = (x257-(x258/(x259<=x260)));

	if (t34 != 735388907980762882LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x265 = INT8_MAX;
	static int64_t x266 = INT64_MAX;
	static int8_t x268 = -2;
	int64_t t35 = 332720809842735LL;

	t35 = (x265-(x266/(x267<=x268)));

	if (t35 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x270 = INT64_MIN;
	volatile int8_t x271 = -28;
	int8_t x272 = 3;
	int64_t t36 = 84LL;

	t36 = (x269-(x270/(x271<=x272)));

	if (t36 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x281 = -496;
	int8_t x282 = INT8_MIN;
	int32_t t37 = 77453068;

	t37 = (x281-(x282/(x283<=x284)));

	if (t37 != -368) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x293 = 1442910834159622709LLU;
	int64_t x294 = 121359336LL;
	static int32_t x295 = INT32_MAX;
	volatile uint64_t x296 = 994222400454628LLU;
	volatile uint64_t t38 = 2824LLU;

	t38 = (x293-(x294/(x295<=x296)));

	if (t38 != 1442910834038263373LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x297 = INT8_MIN;
	int16_t x298 = INT16_MIN;
	static volatile uint64_t x299 = UINT64_MAX;
	int64_t x300 = -1LL;
	static volatile int32_t t39 = -13;

	t39 = (x297-(x298/(x299<=x300)));

	if (t39 != 32640) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x305 = UINT32_MAX;
	int32_t x306 = INT32_MIN;
	uint16_t x307 = 1U;
	static uint64_t x308 = 701127449LLU;
	uint32_t t40 = 124183980U;

	t40 = (x305-(x306/(x307<=x308)));

	if (t40 != 2147483647U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x313 = 3828U;
	static int8_t x314 = -8;
	volatile int8_t x316 = INT8_MAX;
	int32_t t41 = -53807894;

	t41 = (x313-(x314/(x315<=x316)));

	if (t41 != 3836) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x325 = -1;
	int16_t x326 = 23;
	int8_t x327 = INT8_MAX;
	int64_t x328 = INT64_MAX;
	volatile int32_t t42 = -238855662;

	t42 = (x325-(x326/(x327<=x328)));

	if (t42 != -24) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x341 = UINT8_MAX;
	static volatile int8_t x344 = INT8_MIN;
	int64_t t43 = 1345210641LL;

	t43 = (x341-(x342/(x343<=x344)));

	if (t43 != 49163759774798LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x353 = INT8_MAX;
	uint16_t x355 = 5U;
	int16_t x356 = INT16_MAX;
	uint32_t t44 = 17245U;

	t44 = (x353-(x354/(x355<=x356)));

	if (t44 != 128U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x361 = -7082;
	static int16_t x362 = INT16_MIN;
	int8_t x363 = -1;
	static int64_t x364 = 165LL;
	int32_t t45 = 2142;

	t45 = (x361-(x362/(x363<=x364)));

	if (t45 != 25686) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x377 = 5U;
	volatile int16_t x378 = INT16_MIN;
	static int32_t x379 = INT32_MIN;
	volatile int32_t t46 = -1;

	t46 = (x377-(x378/(x379<=x380)));

	if (t46 != 32773) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x381 = 48233937LLU;
	volatile int16_t x382 = 0;
	int8_t x383 = -1;
	uint8_t x384 = UINT8_MAX;

	t47 = (x381-(x382/(x383<=x384)));

	if (t47 != 48233937LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x385 = 1685;
	int32_t x386 = -102;
	static int8_t x387 = INT8_MAX;
	int32_t t48 = -7934;

	t48 = (x385-(x386/(x387<=x388)));

	if (t48 != 1787) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x389 = -1;
	int32_t x390 = -1;
	int64_t x391 = -2976405718751053721LL;
	int32_t t49 = -65348033;

	t49 = (x389-(x390/(x391<=x392)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x393 = 0U;
	volatile uint8_t x394 = 1U;
	uint8_t x395 = 0U;
	uint8_t x396 = 0U;
	volatile int32_t t50 = -16281952;

	t50 = (x393-(x394/(x395<=x396)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x401 = UINT16_MAX;
	int8_t x402 = -1;
	static int8_t x403 = 3;
	uint16_t x404 = 14U;
	static int32_t t51 = 37177;

	t51 = (x401-(x402/(x403<=x404)));

	if (t51 != 65536) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x405 = INT16_MIN;
	static uint8_t x407 = 28U;
	uint8_t x408 = 103U;
	int32_t t52 = -812;

	t52 = (x405-(x406/(x407<=x408)));

	if (t52 != -32769) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x410 = 826145LLU;
	int16_t x411 = 7664;
	int64_t x412 = INT64_MAX;
	volatile uint64_t t53 = 3725LLU;

	t53 = (x409-(x410/(x411<=x412)));

	if (t53 != 18446744073708791006LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x413 = -2456;
	int16_t x414 = INT16_MAX;
	int32_t x416 = -1;
	int32_t t54 = -10713139;

	t54 = (x413-(x414/(x415<=x416)));

	if (t54 != -35223) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x417 = INT8_MIN;
	static uint16_t x418 = UINT16_MAX;
	int8_t x419 = INT8_MIN;
	int64_t x420 = INT64_MAX;
	int32_t t55 = 3779;

	t55 = (x417-(x418/(x419<=x420)));

	if (t55 != -65663) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x421 = 12U;
	int8_t x422 = 0;
	int16_t x423 = INT16_MIN;
	static volatile int32_t t56 = 1779;

	t56 = (x421-(x422/(x423<=x424)));

	if (t56 != 12) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x425 = 14U;
	static int64_t x426 = -805885LL;
	int8_t x427 = -1;
	volatile int64_t t57 = 533317167LL;

	t57 = (x425-(x426/(x427<=x428)));

	if (t57 != 805899LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x445 = 3;
	int32_t x446 = 7457;
	int32_t x447 = INT32_MAX;
	static volatile int32_t t58 = 0;

	t58 = (x445-(x446/(x447<=x448)));

	if (t58 != -7454) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x450 = -9;
	int16_t x451 = INT16_MIN;
	volatile uint16_t x452 = 6396U;
	volatile uint32_t t59 = 102656822U;

	t59 = (x449-(x450/(x451<=x452)));

	if (t59 != 8U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x453 = -13;
	volatile int64_t x454 = 0LL;
	uint64_t x455 = 46766LLU;
	int8_t x456 = INT8_MIN;
	int64_t t60 = 1570163LL;

	t60 = (x453-(x454/(x455<=x456)));

	if (t60 != -13LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x457 = -779857;
	volatile int16_t x458 = -9451;
	int16_t x459 = -1;
	static uint64_t x460 = UINT64_MAX;
	static int32_t t61 = -9;

	t61 = (x457-(x458/(x459<=x460)));

	if (t61 != -770406) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x465 = INT64_MAX;
	uint64_t x466 = UINT64_MAX;
	uint32_t x467 = 718U;
	volatile int8_t x468 = -1;
	uint64_t t62 = 2252639900LLU;

	t62 = (x465-(x466/(x467<=x468)));

	if (t62 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x470 = UINT64_MAX;
	static uint32_t x471 = 62986U;
	int16_t x472 = INT16_MIN;
	uint64_t t63 = 28096102238377LLU;

	t63 = (x469-(x470/(x471<=x472)));

	if (t63 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x475 = -1;
	static int32_t t64 = 56900;

	t64 = (x473-(x474/(x475<=x476)));

	if (t64 != -2147483524) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x477 = UINT32_MAX;
	int8_t x478 = 2;
	int16_t x479 = -438;
	uint8_t x480 = 55U;
	volatile uint32_t t65 = 44073930U;

	t65 = (x477-(x478/(x479<=x480)));

	if (t65 != 4294967293U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x485 = -4;
	static int16_t x486 = INT16_MAX;
	int64_t x487 = INT64_MIN;
	int32_t x488 = INT32_MIN;

	t66 = (x485-(x486/(x487<=x488)));

	if (t66 != -32771) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x489 = 3711868873LL;
	uint64_t x491 = 4LLU;
	static uint16_t x492 = 7U;
	static volatile int64_t t67 = 2660751LL;

	t67 = (x489-(x490/(x491<=x492)));

	if (t67 != 5859352521LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x495 = -869LL;
	volatile int8_t x496 = INT8_MIN;

	t68 = (x493-(x494/(x495<=x496)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x505 = 12376LLU;
	static volatile int16_t x506 = INT16_MAX;
	static volatile uint32_t x507 = 3565119U;
	volatile int8_t x508 = -63;
	static volatile uint64_t t69 = 1371LLU;

	t69 = (x505-(x506/(x507<=x508)));

	if (t69 != 18446744073709531225LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x513 = 2786013U;
	static int16_t x514 = 13716;
	int16_t x515 = INT16_MAX;
	volatile uint32_t t70 = 5U;

	t70 = (x513-(x514/(x515<=x516)));

	if (t70 != 2772297U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x518 = -1LL;
	static int8_t x519 = -3;
	static uint16_t x520 = 3U;
	volatile int64_t t71 = -1258846459429072069LL;

	t71 = (x517-(x518/(x519<=x520)));

	if (t71 != -2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x529 = UINT16_MAX;
	int8_t x530 = INT8_MIN;
	int32_t x531 = -191;
	int8_t x532 = 0;
	volatile int32_t t72 = 30933;

	t72 = (x529-(x530/(x531<=x532)));

	if (t72 != 65663) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x536 = 6748078194589443LLU;
	int64_t t73 = 5453LL;

	t73 = (x533-(x534/(x535<=x536)));

	if (t73 != -2147483675LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x541 = 48;
	int8_t x542 = INT8_MIN;
	volatile int8_t x543 = INT8_MIN;
	static int32_t x544 = -1;
	volatile int32_t t74 = 65685;

	t74 = (x541-(x542/(x543<=x544)));

	if (t74 != 176) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x545 = 191U;
	int8_t x546 = INT8_MAX;
	int32_t x547 = INT32_MIN;
	volatile int32_t t75 = -391047436;

	t75 = (x545-(x546/(x547<=x548)));

	if (t75 != 64) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x561 = INT8_MAX;
	int64_t x562 = -658046016940726907LL;
	static int8_t x563 = INT8_MIN;
	int8_t x564 = 6;
	volatile int64_t t76 = -3745LL;

	t76 = (x561-(x562/(x563<=x564)));

	if (t76 != 658046016940727034LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x565 = INT16_MIN;
	uint16_t x566 = 89U;
	static int8_t x567 = INT8_MAX;

	t77 = (x565-(x566/(x567<=x568)));

	if (t77 != -32857) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x569 = 3939469362919LLU;
	static int32_t x571 = INT32_MIN;
	int32_t x572 = INT32_MIN;
	uint64_t t78 = 129793LLU;

	t78 = (x569-(x570/(x571<=x572)));

	if (t78 != 3939469362919LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x573 = -1;
	static int64_t x574 = -1LL;
	static uint64_t x575 = 1824LLU;
	int64_t t79 = -909326477360LL;

	t79 = (x573-(x574/(x575<=x576)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x585 = INT16_MIN;
	int32_t x586 = INT32_MIN;
	int8_t x587 = INT8_MIN;
	static int32_t x588 = 2242711;
	volatile int32_t t80 = 200043;

	t80 = (x585-(x586/(x587<=x588)));

	if (t80 != 2147450880) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x589 = UINT32_MAX;
	uint8_t x591 = 12U;
	uint64_t x592 = 97689LLU;
	static uint32_t t81 = 306U;

	t81 = (x589-(x590/(x591<=x592)));

	if (t81 != 4294967289U) { NG(); } else { ; }
	
}

void f82(void) {


	t82 = (x593-(x594/(x595<=x596)));

	if (t82 != 2808432) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x597 = INT32_MIN;
	int8_t x598 = INT8_MIN;
	int8_t x599 = INT8_MIN;
	volatile int32_t x600 = -1;
	int32_t t83 = -196739;

	t83 = (x597-(x598/(x599<=x600)));

	if (t83 != -2147483520) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x605 = 69U;
	static int16_t x606 = INT16_MIN;
	int16_t x607 = 2;
	uint8_t x608 = UINT8_MAX;
	volatile int32_t t84 = -179793919;

	t84 = (x605-(x606/(x607<=x608)));

	if (t84 != 32837) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x610 = 3U;
	int8_t x611 = -1;
	int32_t t85 = 2;

	t85 = (x609-(x610/(x611<=x612)));

	if (t85 != -32771) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x625 = INT8_MIN;
	uint32_t x626 = 7747170U;
	int16_t x627 = INT16_MIN;
	uint32_t t86 = 3708777U;

	t86 = (x625-(x626/(x627<=x628)));

	if (t86 != 4287219998U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x637 = 52;
	uint16_t x638 = 0U;
	volatile uint16_t x639 = 24U;

	t87 = (x637-(x638/(x639<=x640)));

	if (t87 != 52) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x642 = INT16_MAX;
	uint32_t x643 = 263U;
	int16_t x644 = -73;
	volatile int32_t t88 = -30958192;

	t88 = (x641-(x642/(x643<=x644)));

	if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x661 = -1;
	int8_t x662 = INT8_MAX;
	volatile int16_t x663 = INT16_MIN;
	int8_t x664 = 2;

	t89 = (x661-(x662/(x663<=x664)));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x673 = -1;
	int64_t x675 = -9192733418648LL;
	volatile int16_t x676 = -908;
	volatile int64_t t90 = -16146504676LL;

	t90 = (x673-(x674/(x675<=x676)));

	if (t90 != -7894LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x690 = INT64_MIN;
	volatile int8_t x691 = 1;
	uint16_t x692 = 91U;
	volatile int64_t t91 = INT64_MAX;

	t91 = (x689-(x690/(x691<=x692)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x693 = INT32_MIN;
	int16_t x696 = INT16_MAX;
	int32_t t92 = 959801;

	t92 = (x693-(x694/(x695<=x696)));

	if (t92 != -2147483520) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x697 = UINT64_MAX;
	static int8_t x698 = INT8_MIN;
	int16_t x699 = 78;
	static volatile uint64_t x700 = 10451LLU;
	static volatile uint64_t t93 = 20LLU;

	t93 = (x697-(x698/(x699<=x700)));

	if (t93 != 127LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x701 = 2185U;
	uint32_t x702 = UINT32_MAX;
	uint32_t x703 = 0U;
	static uint32_t x704 = 1U;
	volatile uint32_t t94 = 1354971149U;

	t94 = (x701-(x702/(x703<=x704)));

	if (t94 != 2186U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x709 = -3;
	uint8_t x710 = UINT8_MAX;
	uint64_t x711 = UINT64_MAX;
	int64_t x712 = -1LL;
	volatile int32_t t95 = 793995;

	t95 = (x709-(x710/(x711<=x712)));

	if (t95 != -258) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x713 = INT64_MIN;
	int32_t x714 = INT32_MIN;
	volatile uint32_t x715 = 1U;
	int8_t x716 = -1;

	t96 = (x713-(x714/(x715<=x716)));

	if (t96 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x725 = 3U;
	int32_t x726 = 73;
	int16_t x727 = INT16_MIN;
	static int16_t x728 = -1;

	t97 = (x725-(x726/(x727<=x728)));

	if (t97 != 4294967226U) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x741 = INT16_MAX;
	int16_t x742 = INT16_MIN;
	volatile int16_t x743 = 0;
	uint8_t x744 = 42U;
	int32_t t98 = 730377;

	t98 = (x741-(x742/(x743<=x744)));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x753 = UINT16_MAX;
	int16_t x754 = INT16_MAX;
	int32_t x755 = INT32_MIN;
	static int16_t x756 = INT16_MIN;

	t99 = (x753-(x754/(x755<=x756)));

	if (t99 != 32768) { NG(); } else { ; }
	
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

