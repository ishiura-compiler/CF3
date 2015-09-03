#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x8 = INT16_MIN;
volatile int64_t t0 = -1695100LL;
int32_t x15 = INT32_MIN;
static int32_t t1 = INT32_MIN;
int16_t x17 = -13;
static int8_t x18 = 14;
int16_t x19 = -3609;
static uint8_t x22 = 42U;
uint16_t x27 = 5355U;
int32_t t4 = INT32_MAX;
uint32_t x33 = 14U;
static int64_t x35 = 2501LL;
int8_t x38 = 0;
static int64_t x45 = INT64_MAX;
int8_t x46 = 5;
uint64_t x51 = 8203353834245LLU;
uint16_t x54 = 1U;
int32_t x69 = INT32_MIN;
int64_t x79 = INT64_MAX;
static int32_t x82 = INT32_MAX;
static volatile int8_t x83 = 0;
int64_t t13 = 496652LL;
int16_t x103 = INT16_MIN;
static volatile int32_t t15 = -10;
uint32_t x114 = 22272U;
uint16_t x117 = UINT16_MAX;
uint8_t x135 = 7U;
int64_t x136 = -1159780465LL;
int16_t x143 = -1707;
volatile int64_t t22 = 2954LL;
static uint16_t x169 = 0U;
uint64_t x170 = 175441472609266146LLU;
static int8_t x181 = -1;
volatile int32_t t24 = -11;
int32_t x187 = 236728147;
int32_t x188 = INT32_MAX;
int64_t t25 = 9914586LL;
int16_t x193 = INT16_MAX;
static int16_t x196 = 0;
volatile int64_t x199 = INT64_MIN;
uint8_t x200 = 0U;
volatile uint64_t t27 = 50057975485806LLU;
int8_t x213 = INT8_MIN;
volatile uint64_t t29 = 62754606298413477LLU;
uint32_t t33 = UINT32_MAX;
int64_t x285 = -1LL;
int64_t t36 = -14281LL;
int64_t x303 = -1LL;
uint32_t x314 = 254U;
volatile uint32_t t39 = UINT32_MAX;
volatile int8_t x322 = INT8_MAX;
volatile int32_t t40 = 205121049;
int8_t x329 = -18;
int8_t x335 = INT8_MAX;
uint32_t t44 = 379U;
int16_t x362 = INT16_MAX;
volatile int64_t t46 = -1LL;
static int8_t x376 = 0;
volatile uint32_t t47 = UINT32_MAX;
volatile int64_t t48 = -390007287297820135LL;
uint64_t x393 = 669282938490062LLU;
volatile int16_t x394 = INT16_MAX;
uint8_t x396 = 7U;
uint64_t x399 = UINT64_MAX;
int8_t x410 = INT8_MAX;
static int16_t x415 = 3;
int64_t x420 = 0LL;
static int64_t t54 = 4749LL;
int32_t t56 = 403218563;
uint8_t x435 = 1U;
uint32_t t59 = 3427U;
int32_t x448 = INT32_MIN;
volatile int16_t x455 = INT16_MIN;
volatile int8_t x494 = INT8_MAX;
uint16_t x495 = 1002U;
int64_t x501 = INT64_MIN;
volatile int32_t t65 = 0;
static uint32_t x527 = 26U;
int32_t t67 = 5552401;
int16_t x546 = 5;
int32_t x548 = -204802;
uint64_t x562 = UINT64_MAX;
volatile uint32_t x589 = UINT32_MAX;
volatile uint64_t x598 = UINT64_MAX;
int64_t x607 = INT64_MAX;
static int8_t x608 = INT8_MIN;
int64_t x640 = -1LL;
int32_t x659 = 1;
static int64_t x683 = INT64_MIN;
int8_t x709 = INT8_MIN;
volatile uint64_t x711 = 1981153874748845LLU;
uint32_t t83 = 705U;
int32_t t84 = 435949;
uint64_t t85 = 346279757467936600LLU;
volatile int32_t t86 = -104373055;
uint8_t x770 = UINT8_MAX;
uint32_t t90 = 30574599U;
int8_t x811 = INT8_MAX;
static volatile uint64_t x812 = UINT64_MAX;
int64_t x821 = INT64_MIN;
static int8_t x840 = -1;
volatile uint64_t t94 = UINT64_MAX;
int64_t x867 = 3885620LL;
uint16_t x868 = 4463U;
volatile int32_t x883 = 1039609;
int64_t x884 = -5887LL;
volatile uint32_t t99 = UINT32_MAX;


void f0(void) {
	static int64_t x5 = -1LL;
	static uint8_t x6 = UINT8_MAX;
	int8_t x7 = -50;

	t0 = (x5|(x6<<(x7<x8)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MIN;
	uint8_t x14 = 0U;
	static int64_t x16 = -33253300029887218LL;

	t1 = (x13|(x14<<(x15<x16)));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x20 = -1;
	volatile int32_t t2 = 7102054;

	t2 = (x17|(x18<<(x19<x20)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 71U;
	int8_t x23 = INT8_MAX;
	volatile uint8_t x24 = 0U;
	volatile int32_t t3 = -2015;

	t3 = (x21|(x22<<(x23<x24)));

	if (t3 != 111) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MAX;
	volatile int8_t x26 = 0;
	static volatile int16_t x28 = 1;

	t4 = (x25|(x26<<(x27<x28)));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x34 = 5472256U;
	uint64_t x36 = UINT64_MAX;
	uint32_t t5 = 3185212U;

	t5 = (x33|(x34<<(x35<x36)));

	if (t5 != 10944526U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x37 = INT16_MIN;
	static int16_t x39 = INT16_MIN;
	volatile uint16_t x40 = UINT16_MAX;
	volatile int32_t t6 = 9;

	t6 = (x37|(x38<<(x39<x40)));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x41 = 1;
	volatile int8_t x42 = 29;
	int32_t x43 = -1;
	uint32_t x44 = UINT32_MAX;
	int32_t t7 = -110941;

	t7 = (x41|(x42<<(x43<x44)));

	if (t7 != 29) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x47 = 498998LLU;
	int8_t x48 = -1;
	static volatile int64_t t8 = INT64_MAX;

	t8 = (x45|(x46<<(x47<x48)));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x49 = 1;
	volatile uint16_t x50 = UINT16_MAX;
	uint16_t x52 = 48U;
	volatile int32_t t9 = 7;

	t9 = (x49|(x50<<(x51<x52)));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = -2;
	static int32_t x55 = INT32_MIN;
	uint32_t x56 = 1233274614U;
	int32_t t10 = -6201;

	t10 = (x53|(x54<<(x55<x56)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x70 = UINT8_MAX;
	static int8_t x71 = 1;
	static volatile uint64_t x72 = 246745608450546LLU;
	int32_t t11 = 62575592;

	t11 = (x69|(x70<<(x71<x72)));

	if (t11 != -2147483138) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x77 = -1181;
	static int32_t x78 = INT32_MAX;
	static int16_t x80 = INT16_MIN;
	int32_t t12 = 0;

	t12 = (x77|(x78<<(x79<x80)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x81 = INT64_MIN;
	static int64_t x84 = -1LL;

	t13 = (x81|(x82<<(x83<x84)));

	if (t13 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x101 = 142275U;
	int32_t x102 = 26992028;
	static int64_t x104 = -1LL;
	static volatile uint32_t t14 = 32U;

	t14 = (x101|(x102<<(x103<x104)));

	if (t14 != 53984251U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x105 = -1182;
	uint8_t x106 = 10U;
	volatile uint16_t x107 = UINT16_MAX;
	uint32_t x108 = 13724832U;

	t15 = (x105|(x106<<(x107<x108)));

	if (t15 != -1162) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x113 = -1;
	int64_t x115 = -491356778342LL;
	int16_t x116 = -1;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = (x113|(x114<<(x115<x116)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x118 = 33768U;
	int16_t x119 = -1;
	uint8_t x120 = 93U;
	volatile uint32_t t17 = 6615U;

	t17 = (x117|(x118<<(x119<x120)));

	if (t17 != 131071U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x129 = UINT8_MAX;
	uint8_t x130 = 1U;
	int8_t x131 = -1;
	static int16_t x132 = 0;
	int32_t t18 = 45197;

	t18 = (x129|(x130<<(x131<x132)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x133 = INT64_MIN;
	uint64_t x134 = UINT64_MAX;
	uint64_t t19 = UINT64_MAX;

	t19 = (x133|(x134<<(x135<x136)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x141 = 1811547702134LLU;
	static uint16_t x142 = 6374U;
	uint16_t x144 = UINT16_MAX;
	volatile uint64_t t20 = 3LLU;

	t20 = (x141|(x142<<(x143<x144)));

	if (t20 != 1811547714558LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x153 = 9;
	volatile uint32_t x154 = UINT32_MAX;
	int64_t x155 = 0LL;
	int32_t x156 = -34;
	static volatile uint32_t t21 = UINT32_MAX;

	t21 = (x153|(x154<<(x155<x156)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x165 = INT64_MIN;
	uint16_t x166 = UINT16_MAX;
	int64_t x167 = INT64_MAX;
	volatile int64_t x168 = 955779LL;

	t22 = (x165|(x166<<(x167<x168)));

	if (t22 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x171 = 174214522U;
	volatile int64_t x172 = -1LL;
	static volatile uint64_t t23 = 318877246649584741LLU;

	t23 = (x169|(x170<<(x171<x172)));

	if (t23 != 175441472609266146LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x182 = 2348U;
	int64_t x183 = INT64_MAX;
	volatile int16_t x184 = INT16_MIN;

	t24 = (x181|(x182<<(x183<x184)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x185 = -3618255248LL;
	volatile uint8_t x186 = 36U;

	t25 = (x185|(x186<<(x187<x188)));

	if (t25 != -3618255240LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x194 = 3;
	int8_t x195 = INT8_MIN;
	static volatile int32_t t26 = 5276660;

	t26 = (x193|(x194<<(x195<x196)));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x197 = 6427LLU;
	uint16_t x198 = UINT16_MAX;

	t27 = (x197|(x198<<(x199<x200)));

	if (t27 != 131071LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x214 = 1121;
	uint32_t x215 = UINT32_MAX;
	uint8_t x216 = 6U;
	int32_t t28 = -931602333;

	t28 = (x213|(x214<<(x215<x216)));

	if (t28 != -31) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x221 = 124981378;
	static uint64_t x222 = UINT64_MAX;
	uint64_t x223 = 7016923781LLU;
	int64_t x224 = INT64_MIN;

	t29 = (x221|(x222<<(x223<x224)));

	if (t29 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x225 = -325;
	uint32_t x226 = 3U;
	uint32_t x227 = 245828U;
	static volatile int32_t x228 = -752887918;
	uint32_t t30 = 66149019U;

	t30 = (x225|(x226<<(x227<x228)));

	if (t30 != 4294966975U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x229 = 20U;
	volatile int32_t x230 = INT32_MAX;
	int32_t x231 = INT32_MIN;
	volatile int64_t x232 = INT64_MIN;
	volatile int32_t t31 = INT32_MAX;

	t31 = (x229|(x230<<(x231<x232)));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x237 = INT16_MAX;
	uint32_t x238 = 72384U;
	volatile int32_t x239 = -4;
	int32_t x240 = -3256;
	static uint32_t t32 = 91790413U;

	t32 = (x237|(x238<<(x239<x240)));

	if (t32 != 98303U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x253 = -1;
	uint32_t x254 = 4207U;
	int16_t x255 = INT16_MAX;
	volatile int64_t x256 = 3LL;

	t33 = (x253|(x254<<(x255<x256)));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x257 = -5;
	uint8_t x258 = 25U;
	uint32_t x259 = 1017278U;
	uint8_t x260 = UINT8_MAX;
	int32_t t34 = -1;

	t34 = (x257|(x258<<(x259<x260)));

	if (t34 != -5) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x277 = -1LL;
	int32_t x278 = INT32_MAX;
	uint32_t x279 = 454051333U;
	int64_t x280 = INT64_MIN;
	int64_t t35 = -130977520612884LL;

	t35 = (x277|(x278<<(x279<x280)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x286 = UINT16_MAX;
	volatile uint16_t x287 = 39U;
	uint8_t x288 = 18U;

	t36 = (x285|(x286<<(x287<x288)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x301 = 268495267172190LLU;
	int8_t x302 = INT8_MAX;
	static int16_t x304 = INT16_MIN;
	volatile uint64_t t37 = 53LLU;

	t37 = (x301|(x302<<(x303<x304)));

	if (t37 != 268495267172223LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x305 = -113;
	int64_t x306 = INT64_MAX;
	int16_t x307 = -11158;
	uint32_t x308 = 176528977U;
	volatile int64_t t38 = 4954723LL;

	t38 = (x305|(x306<<(x307<x308)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x313 = -1;
	int16_t x315 = -27;
	int32_t x316 = INT32_MAX;

	t39 = (x313|(x314<<(x315<x316)));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x321 = INT8_MAX;
	volatile int32_t x323 = 261384618;
	int32_t x324 = INT32_MIN;

	t40 = (x321|(x322<<(x323<x324)));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x330 = 27394U;
	uint8_t x331 = UINT8_MAX;
	int32_t x332 = -1625;
	volatile int32_t t41 = -6888;

	t41 = (x329|(x330<<(x331<x332)));

	if (t41 != -18) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x333 = UINT16_MAX;
	uint64_t x334 = 250715906LLU;
	uint64_t x336 = 5599906271LLU;
	uint64_t t42 = 191224080308LLU;

	t42 = (x333|(x334<<(x335<x336)));

	if (t42 != 501481471LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x341 = INT16_MIN;
	volatile int64_t x342 = 2459924LL;
	volatile int64_t x343 = INT64_MIN;
	uint32_t x344 = 115568002U;
	int64_t t43 = -6641778684415LL;

	t43 = (x341|(x342<<(x343<x344)));

	if (t43 != -28120LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x353 = 125U;
	uint32_t x354 = 8870101U;
	int64_t x355 = -1LL;
	int8_t x356 = INT8_MIN;

	t44 = (x353|(x354<<(x355<x356)));

	if (t44 != 8870141U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x357 = -1;
	static uint16_t x358 = 458U;
	int8_t x359 = 13;
	int64_t x360 = 16731267LL;
	volatile int32_t t45 = -1;

	t45 = (x357|(x358<<(x359<x360)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x361 = -1LL;
	volatile int16_t x363 = INT16_MIN;
	uint16_t x364 = 145U;

	t46 = (x361|(x362<<(x363<x364)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x373 = 277U;
	uint32_t x374 = UINT32_MAX;
	int32_t x375 = -1;

	t47 = (x373|(x374<<(x375<x376)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x385 = INT64_MIN;
	static int32_t x386 = 641;
	int32_t x387 = INT32_MAX;
	int32_t x388 = -382595649;

	t48 = (x385|(x386<<(x387<x388)));

	if (t48 != -9223372036854775167LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x395 = -1;
	uint64_t t49 = 85LLU;

	t49 = (x393|(x394<<(x395<x396)));

	if (t49 != 669282938519550LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x397 = INT64_MAX;
	uint8_t x398 = 61U;
	static volatile int32_t x400 = -43;
	int64_t t50 = INT64_MAX;

	t50 = (x397|(x398<<(x399<x400)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x401 = INT8_MIN;
	int64_t x402 = 1565510335594554274LL;
	volatile int16_t x403 = INT16_MIN;
	int16_t x404 = INT16_MAX;
	volatile int64_t t51 = -192654191253602LL;

	t51 = (x401|(x402<<(x403<x404)));

	if (t51 != -60LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x409 = -1;
	uint64_t x411 = 2LLU;
	int32_t x412 = INT32_MIN;
	static int32_t t52 = 86258548;

	t52 = (x409|(x410<<(x411<x412)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x413 = INT64_MIN;
	volatile int16_t x414 = INT16_MAX;
	int64_t x416 = 25615631872958638LL;
	volatile int64_t t53 = 0LL;

	t53 = (x413|(x414<<(x415<x416)));

	if (t53 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x417 = INT16_MIN;
	int64_t x418 = 2424655759616LL;
	static uint64_t x419 = UINT64_MAX;

	t54 = (x417|(x418<<(x419<x420)));

	if (t54 != -14080LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x421 = 900LLU;
	volatile uint32_t x422 = UINT32_MAX;
	volatile uint32_t x423 = 105709U;
	int8_t x424 = INT8_MIN;
	uint64_t t55 = 14466723669LLU;

	t55 = (x421|(x422<<(x423<x424)));

	if (t55 != 4294967294LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x429 = 558U;
	int32_t x430 = 12782;
	volatile int64_t x431 = INT64_MIN;
	static int32_t x432 = INT32_MAX;

	t56 = (x429|(x430<<(x431<x432)));

	if (t56 != 25598) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x433 = INT64_MAX;
	volatile uint16_t x434 = UINT16_MAX;
	int32_t x436 = -2548;
	static volatile int64_t t57 = INT64_MAX;

	t57 = (x433|(x434<<(x435<x436)));

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x437 = -43LL;
	int16_t x438 = INT16_MAX;
	int64_t x439 = INT64_MAX;
	int16_t x440 = INT16_MIN;
	static volatile int64_t t58 = -4146097761LL;

	t58 = (x437|(x438<<(x439<x440)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x441 = 2U;
	uint8_t x442 = 12U;
	int32_t x443 = INT32_MIN;
	int8_t x444 = -1;

	t59 = (x441|(x442<<(x443<x444)));

	if (t59 != 26U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x445 = INT32_MIN;
	int32_t x446 = INT32_MAX;
	volatile uint8_t x447 = 0U;
	int32_t t60 = -473;

	t60 = (x445|(x446<<(x447<x448)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x453 = -118146068LL;
	uint64_t x454 = 2692989436318130472LLU;
	int8_t x456 = 14;
	uint64_t t61 = 1428511488559383666LLU;

	t61 = (x453|(x454<<(x455<x456)));

	if (t61 != 18446744073709517820LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x485 = -283239908177LL;
	volatile uint32_t x486 = 345396U;
	volatile int16_t x487 = -1;
	uint64_t x488 = 258973754495769602LLU;
	static int64_t t62 = 235177LL;

	t62 = (x485|(x486<<(x487<x488)));

	if (t62 != -283239907905LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x493 = UINT32_MAX;
	static volatile uint64_t x496 = 2388977791295567034LLU;
	static uint32_t t63 = UINT32_MAX;

	t63 = (x493|(x494<<(x495<x496)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x502 = 20187665799801LLU;
	volatile int64_t x503 = -48840836681573LL;
	int64_t x504 = -1LL;
	static uint64_t t64 = 72LLU;

	t64 = (x501|(x502<<(x503<x504)));

	if (t64 != 9223412412186375410LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x505 = 4917970;
	uint8_t x506 = UINT8_MAX;
	volatile int64_t x507 = INT64_MIN;
	volatile int16_t x508 = -1;

	t65 = (x505|(x506<<(x507<x508)));

	if (t65 != 4918270) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x525 = INT64_MIN;
	static int16_t x526 = 20;
	int32_t x528 = -1;
	int64_t t66 = 2239856756631LL;

	t66 = (x525|(x526<<(x527<x528)));

	if (t66 != -9223372036854775768LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x533 = INT8_MIN;
	int16_t x534 = INT16_MAX;
	int64_t x535 = -1LL;
	int8_t x536 = 44;

	t67 = (x533|(x534<<(x535<x536)));

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x537 = 9U;
	int32_t x538 = INT32_MAX;
	int64_t x539 = INT64_MAX;
	int64_t x540 = -708447910485991220LL;
	static volatile uint32_t t68 = 110U;

	t68 = (x537|(x538<<(x539<x540)));

	if (t68 != 2147483647U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x545 = INT8_MIN;
	int64_t x547 = INT64_MAX;
	int32_t t69 = 14441;

	t69 = (x545|(x546<<(x547<x548)));

	if (t69 != -123) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x549 = 0U;
	volatile uint8_t x550 = UINT8_MAX;
	int32_t x551 = INT32_MIN;
	volatile int64_t x552 = INT64_MIN;
	int32_t t70 = -1;

	t70 = (x549|(x550<<(x551<x552)));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x561 = -75686120LL;
	volatile uint64_t x563 = 32574991978LLU;
	uint64_t x564 = UINT64_MAX;
	uint64_t t71 = 7080945857101800LLU;

	t71 = (x561|(x562<<(x563<x564)));

	if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x569 = -1;
	uint32_t x570 = UINT32_MAX;
	int16_t x571 = INT16_MIN;
	int32_t x572 = INT32_MAX;
	static volatile uint32_t t72 = UINT32_MAX;

	t72 = (x569|(x570<<(x571<x572)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x590 = UINT32_MAX;
	static volatile int8_t x591 = -6;
	int16_t x592 = INT16_MAX;
	volatile uint32_t t73 = UINT32_MAX;

	t73 = (x589|(x590<<(x591<x592)));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x597 = 364106913490105LLU;
	volatile int16_t x599 = -14;
	static int8_t x600 = INT8_MAX;
	uint64_t t74 = UINT64_MAX;

	t74 = (x597|(x598<<(x599<x600)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x605 = INT16_MAX;
	static uint64_t x606 = 1041583LLU;
	static uint64_t t75 = 57727039LLU;

	t75 = (x605|(x606<<(x607<x608)));

	if (t75 != 1048575LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x637 = INT16_MIN;
	uint8_t x638 = UINT8_MAX;
	int32_t x639 = 0;
	volatile int32_t t76 = -37033879;

	t76 = (x637|(x638<<(x639<x640)));

	if (t76 != -32513) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x657 = INT16_MIN;
	uint8_t x658 = 1U;
	static uint8_t x660 = UINT8_MAX;
	int32_t t77 = 46729;

	t77 = (x657|(x658<<(x659<x660)));

	if (t77 != -32766) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x665 = INT16_MIN;
	uint8_t x666 = UINT8_MAX;
	int8_t x667 = INT8_MAX;
	int32_t x668 = 3699086;
	int32_t t78 = 53;

	t78 = (x665|(x666<<(x667<x668)));

	if (t78 != -32258) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x673 = 25U;
	volatile uint32_t x674 = 197U;
	static uint16_t x675 = 3U;
	int64_t x676 = -869205289268LL;
	uint32_t t79 = 128837071U;

	t79 = (x673|(x674<<(x675<x676)));

	if (t79 != 221U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x681 = UINT32_MAX;
	int16_t x682 = 100;
	static int32_t x684 = -1;
	uint32_t t80 = UINT32_MAX;

	t80 = (x681|(x682<<(x683<x684)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x693 = INT8_MIN;
	volatile int64_t x694 = 5LL;
	int8_t x695 = INT8_MIN;
	int64_t x696 = -46126898297657552LL;
	volatile int64_t t81 = -760LL;

	t81 = (x693|(x694<<(x695<x696)));

	if (t81 != -123LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x701 = 7;
	uint8_t x702 = 0U;
	int16_t x703 = INT16_MIN;
	uint8_t x704 = UINT8_MAX;
	static volatile int32_t t82 = -63;

	t82 = (x701|(x702<<(x703<x704)));

	if (t82 != 7) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x710 = UINT32_MAX;
	int32_t x712 = INT32_MIN;

	t83 = (x709|(x710<<(x711<x712)));

	if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x725 = 13U;
	uint8_t x726 = 0U;
	int32_t x727 = -1;
	static uint32_t x728 = 542734366U;

	t84 = (x725|(x726<<(x727<x728)));

	if (t84 != 13) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x733 = UINT8_MAX;
	static uint64_t x734 = 5333701505LLU;
	static int8_t x735 = 1;
	int16_t x736 = INT16_MIN;

	t85 = (x733|(x734<<(x735<x736)));

	if (t85 != 5333701631LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x737 = INT16_MIN;
	uint8_t x738 = UINT8_MAX;
	uint16_t x739 = UINT16_MAX;
	int32_t x740 = 942664;

	t86 = (x737|(x738<<(x739<x740)));

	if (t86 != -32258) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x757 = 41U;
	uint8_t x758 = UINT8_MAX;
	uint32_t x759 = 10302274U;
	int32_t x760 = -658945;
	static int32_t t87 = 38;

	t87 = (x757|(x758<<(x759<x760)));

	if (t87 != 511) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x761 = 17718U;
	static int16_t x762 = INT16_MAX;
	uint8_t x763 = UINT8_MAX;
	int8_t x764 = INT8_MIN;
	volatile int32_t t88 = -157112628;

	t88 = (x761|(x762<<(x763<x764)));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x769 = 3753U;
	int64_t x771 = INT64_MIN;
	uint64_t x772 = 0LLU;
	int32_t t89 = -1301031;

	t89 = (x769|(x770<<(x771<x772)));

	if (t89 != 3839) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x777 = INT32_MIN;
	uint32_t x778 = 76621174U;
	volatile int16_t x779 = -1;
	static int8_t x780 = INT8_MAX;

	t90 = (x777|(x778<<(x779<x780)));

	if (t90 != 2300725996U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x801 = UINT32_MAX;
	static volatile uint16_t x802 = 1U;
	static int64_t x803 = 2LL;
	static int64_t x804 = INT64_MIN;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (x801|(x802<<(x803<x804)));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x809 = 9;
	int8_t x810 = INT8_MAX;
	int32_t t92 = 25464;

	t92 = (x809|(x810<<(x811<x812)));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x822 = 262731028U;
	int32_t x823 = INT32_MAX;
	int64_t x824 = INT64_MIN;
	int64_t t93 = 182LL;

	t93 = (x821|(x822<<(x823<x824)));

	if (t93 != -9223372036592044780LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x837 = -10LL;
	uint64_t x838 = UINT64_MAX;
	int8_t x839 = -1;

	t94 = (x837|(x838<<(x839<x840)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x845 = INT16_MIN;
	int16_t x846 = INT16_MAX;
	int8_t x847 = INT8_MAX;
	volatile uint8_t x848 = 8U;
	volatile int32_t t95 = -480172506;

	t95 = (x845|(x846<<(x847<x848)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x857 = INT32_MAX;
	uint16_t x858 = UINT16_MAX;
	uint64_t x859 = UINT64_MAX;
	uint64_t x860 = 14901969141938LLU;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x857|(x858<<(x859<x860)));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x865 = INT16_MIN;
	uint8_t x866 = UINT8_MAX;
	volatile int32_t t97 = 10237858;

	t97 = (x865|(x866<<(x867<x868)));

	if (t97 != -32513) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x869 = 1;
	volatile uint32_t x870 = 185291339U;
	int16_t x871 = INT16_MIN;
	static int16_t x872 = 100;
	uint32_t t98 = 3187U;

	t98 = (x869|(x870<<(x871<x872)));

	if (t98 != 370582679U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x881 = -1;
	uint32_t x882 = UINT32_MAX;

	t99 = (x881|(x882<<(x883<x884)));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

