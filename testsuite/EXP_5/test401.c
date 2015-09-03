#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 4;
volatile int32_t t0 = -881127;
uint32_t x17 = 3U;
static int16_t x47 = -11;
uint8_t x52 = UINT8_MAX;
int64_t t4 = 36267407260LL;
int16_t x76 = 1;
volatile uint64_t t8 = 1657LLU;
int16_t x85 = -7174;
uint64_t x86 = 16711LLU;
static uint64_t t10 = 391869003604176306LLU;
int32_t x89 = INT32_MIN;
static uint16_t x91 = UINT16_MAX;
int16_t x95 = INT16_MIN;
int8_t x102 = INT8_MAX;
uint64_t x108 = UINT64_MAX;
uint8_t x114 = 64U;
int16_t x116 = -1;
uint8_t x127 = 1U;
int32_t x156 = INT32_MAX;
static int32_t x170 = -1;
int32_t t23 = -789080929;
int16_t x174 = 3260;
uint16_t x176 = 430U;
int16_t x177 = INT16_MIN;
int64_t t25 = 68031LL;
int8_t x181 = INT8_MIN;
int8_t x188 = -3;
volatile uint64_t x194 = 72582158983044261LLU;
static int8_t x195 = 1;
int64_t x197 = 158631959LL;
uint64_t x203 = UINT64_MAX;
int16_t x222 = -15;
int16_t x229 = 4787;
volatile uint32_t x257 = 960304259U;
int8_t x266 = -1;
volatile int64_t t41 = 188LL;
uint16_t x278 = UINT16_MAX;
static volatile int16_t x281 = INT16_MAX;
int8_t x284 = INT8_MIN;
int8_t x288 = -36;
int64_t t45 = -413069535730LL;
int8_t x293 = -11;
int16_t x294 = INT16_MAX;
volatile int64_t x296 = INT64_MIN;
static volatile uint8_t x297 = 2U;
static volatile uint16_t x318 = 906U;
int32_t x333 = -193624;
static int16_t x340 = -1;
uint64_t x342 = UINT64_MAX;
static int16_t x353 = INT16_MIN;
int32_t x354 = -147987779;
volatile int8_t x361 = -1;
static uint64_t x365 = 12505LLU;
uint32_t x367 = UINT32_MAX;
volatile uint64_t x376 = 4180723483LLU;
int16_t x379 = -1;
static int64_t x384 = -5700699668237191LL;
uint16_t x385 = 27067U;
int64_t t64 = -25814915643811230LL;
volatile int64_t x389 = 960902522281274LL;
int16_t x408 = -15;
volatile int32_t t68 = -25958876;
static int16_t x413 = -1;
int16_t x416 = -1;
volatile uint16_t x417 = 16099U;
int16_t x420 = -1;
volatile uint64_t t72 = 4246007237779LLU;
int16_t x436 = 161;
int64_t t73 = -2573LL;
uint32_t x437 = 34U;
volatile int8_t x438 = INT8_MIN;
uint64_t x444 = UINT64_MAX;
volatile int16_t x445 = -1;
int64_t x466 = -2833301920296296LL;
int32_t x468 = INT32_MIN;
static volatile int8_t x486 = -15;
volatile int64_t t85 = 8073529274781LL;
int64_t x510 = -4291826960592LL;
volatile uint32_t x511 = 14U;
static volatile uint64_t t89 = 67595801LLU;
int16_t x527 = INT16_MIN;
uint16_t x541 = UINT16_MAX;
int32_t x543 = -41;
volatile int64_t x546 = -21LL;
int16_t x548 = 2;
static int16_t x553 = -5010;
uint64_t x554 = 632231512LLU;
uint32_t x556 = 19U;
volatile uint64_t t95 = 15LLU;
uint16_t x562 = 4U;
int64_t x566 = -1LL;
volatile int64_t x569 = INT64_MIN;


void f0(void) {
	int32_t x2 = -1;
	int32_t x3 = -1277857;
	uint16_t x4 = 2485U;

	t0 = (x1&((x2*x3)%x4));

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x18 = UINT32_MAX;
	volatile int8_t x19 = 4;
	int8_t x20 = INT8_MIN;
	volatile uint32_t t1 = 28U;

	t1 = (x17&((x18*x19)%x20));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x25 = UINT64_MAX;
	int32_t x26 = INT32_MIN;
	uint64_t x27 = UINT64_MAX;
	int32_t x28 = INT32_MAX;
	volatile uint64_t t2 = 2144531999805054LLU;

	t2 = (x25&((x26*x27)%x28));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x45 = UINT16_MAX;
	int8_t x46 = INT8_MAX;
	int8_t x48 = INT8_MIN;
	volatile int32_t t3 = -31081;

	t3 = (x45&((x46*x47)%x48));

	if (t3 != 65419) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x49 = 56694752LL;
	int8_t x50 = 1;
	static volatile int64_t x51 = INT64_MIN;

	t4 = (x49&((x50*x51)%x52));

	if (t4 != 56694656LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x57 = UINT8_MAX;
	uint8_t x58 = UINT8_MAX;
	uint32_t x59 = 121U;
	static int32_t x60 = INT32_MIN;
	uint32_t t5 = 6055U;

	t5 = (x57&((x58*x59)%x60));

	if (t5 != 135U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x65 = 25U;
	uint64_t x66 = 3180LLU;
	static uint32_t x67 = 910214113U;
	volatile uint8_t x68 = 4U;
	uint64_t t6 = 932822LLU;

	t6 = (x65&((x66*x67)%x68));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x69 = INT8_MAX;
	static volatile int8_t x70 = -1;
	static uint32_t x71 = 440076653U;
	int64_t x72 = 33154790467128LL;
	volatile int64_t t7 = 97296854LL;

	t7 = (x69&((x70*x71)%x72));

	if (t7 != 19LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x73 = 2201LLU;
	static int8_t x74 = INT8_MIN;
	volatile uint64_t x75 = 8783002376086211LLU;

	t8 = (x73&((x74*x75)%x76));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x77 = UINT64_MAX;
	static volatile uint8_t x78 = 5U;
	static uint16_t x79 = 13U;
	uint16_t x80 = 8U;
	uint64_t t9 = 2LLU;

	t9 = (x77&((x78*x79)%x80));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x87 = -1127;
	int16_t x88 = -72;

	t10 = (x85&((x86*x87)%x88));

	if (t10 != 18446744073690718314LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x90 = 6U;
	uint8_t x92 = 60U;
	volatile int32_t t11 = 59578;

	t11 = (x89&((x90*x91)%x92));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x93 = INT64_MIN;
	uint8_t x94 = UINT8_MAX;
	volatile int16_t x96 = INT16_MIN;
	int64_t t12 = 3958183581LL;

	t12 = (x93&((x94*x95)%x96));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x97 = 1877127366U;
	int32_t x98 = 113;
	int8_t x99 = INT8_MIN;
	int16_t x100 = -1;
	volatile uint32_t t13 = 3938285U;

	t13 = (x97&((x98*x99)%x100));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x101 = 5;
	uint8_t x103 = UINT8_MAX;
	int64_t x104 = -1LL;
	int64_t t14 = -527700214206655LL;

	t14 = (x101&((x102*x103)%x104));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x105 = INT32_MIN;
	static uint8_t x106 = UINT8_MAX;
	static uint8_t x107 = 123U;
	volatile uint64_t t15 = 82693593LLU;

	t15 = (x105&((x106*x107)%x108));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x113 = INT16_MIN;
	int8_t x115 = -1;
	volatile int32_t t16 = 0;

	t16 = (x113&((x114*x115)%x116));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x117 = 7U;
	int8_t x118 = INT8_MIN;
	uint32_t x119 = UINT32_MAX;
	int32_t x120 = INT32_MIN;
	uint32_t t17 = 1680U;

	t17 = (x117&((x118*x119)%x120));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x121 = 14315U;
	static volatile int8_t x122 = -1;
	int8_t x123 = INT8_MAX;
	int8_t x124 = INT8_MIN;
	int32_t t18 = -3616234;

	t18 = (x121&((x122*x123)%x124));

	if (t18 != 14209) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x125 = 12U;
	int16_t x126 = INT16_MIN;
	static int32_t x128 = 1071874;
	int32_t t19 = 30;

	t19 = (x125&((x126*x127)%x128));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x129 = 20;
	uint8_t x130 = 5U;
	uint64_t x131 = 5758763975338272819LLU;
	uint16_t x132 = 292U;
	volatile uint64_t t20 = 1911243008963096874LLU;

	t20 = (x129&((x130*x131)%x132));

	if (t20 != 16LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x137 = 8462924688LL;
	static int16_t x138 = 1;
	int32_t x139 = INT32_MAX;
	static uint32_t x140 = 53U;
	int64_t t21 = 3249703302017168972LL;

	t21 = (x137&((x138*x139)%x140));

	if (t21 != 16LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x153 = 1U;
	int8_t x154 = INT8_MIN;
	uint8_t x155 = 2U;
	int32_t t22 = -1;

	t22 = (x153&((x154*x155)%x156));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x169 = 20U;
	uint16_t x171 = UINT16_MAX;
	int8_t x172 = INT8_MAX;

	t23 = (x169&((x170*x171)%x172));

	if (t23 != 20) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x173 = 31U;
	volatile uint64_t x175 = 20591345LLU;
	volatile uint64_t t24 = 125007503683LLU;

	t24 = (x173&((x174*x175)%x176));

	if (t24 != 26LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x178 = UINT8_MAX;
	static volatile uint32_t x179 = 44U;
	int64_t x180 = INT64_MIN;

	t25 = (x177&((x178*x179)%x180));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x182 = INT8_MIN;
	uint8_t x183 = UINT8_MAX;
	static int64_t x184 = INT64_MIN;
	int64_t t26 = -313394895808LL;

	t26 = (x181&((x182*x183)%x184));

	if (t26 != -32640LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x185 = 14103542LLU;
	int8_t x186 = INT8_MAX;
	volatile int16_t x187 = 295;
	static volatile uint64_t t27 = 242LLU;

	t27 = (x185&((x186*x187)%x188));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x189 = INT16_MAX;
	int16_t x190 = INT16_MIN;
	uint32_t x191 = UINT32_MAX;
	volatile int32_t x192 = INT32_MIN;
	uint32_t t28 = 23U;

	t28 = (x189&((x190*x191)%x192));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x193 = INT8_MIN;
	static int8_t x196 = -27;
	volatile uint64_t t29 = 1144215801433562LLU;

	t29 = (x193&((x194*x195)%x196));

	if (t29 != 72582158983044224LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x198 = INT16_MAX;
	int32_t x199 = 8058;
	int64_t x200 = INT64_MIN;
	int64_t t30 = 1LL;

	t30 = (x197&((x198*x199)%x200));

	if (t30 != 154435590LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x201 = INT8_MAX;
	uint32_t x202 = UINT32_MAX;
	volatile uint64_t x204 = 6063LLU;
	uint64_t t31 = 63075796454644LLU;

	t31 = (x201&((x202*x203)%x204));

	if (t31 != 26LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x213 = 1811U;
	static int64_t x214 = -1914291LL;
	int8_t x215 = -1;
	volatile int32_t x216 = -3;
	volatile int64_t t32 = -364844957871133LL;

	t32 = (x213&((x214*x215)%x216));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x217 = UINT8_MAX;
	volatile uint32_t x218 = 7119U;
	static int16_t x219 = 197;
	int16_t x220 = INT16_MIN;
	volatile uint32_t t33 = 15U;

	t33 = (x217&((x218*x219)%x220));

	if (t33 != 75U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x221 = UINT16_MAX;
	int64_t x223 = -1LL;
	static volatile int8_t x224 = INT8_MIN;
	volatile int64_t t34 = 1LL;

	t34 = (x221&((x222*x223)%x224));

	if (t34 != 15LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x230 = 0U;
	volatile int32_t x231 = 2237593;
	int64_t x232 = -2LL;
	volatile int64_t t35 = -1LL;

	t35 = (x229&((x230*x231)%x232));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x233 = 8721U;
	int8_t x234 = INT8_MIN;
	volatile int8_t x235 = INT8_MAX;
	int64_t x236 = 485LL;
	volatile int64_t t36 = -223703LL;

	t36 = (x233&((x234*x235)%x236));

	if (t36 != 8705LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x237 = 2925335359892498LLU;
	int32_t x238 = -1;
	int64_t x239 = 423465LL;
	volatile int16_t x240 = INT16_MIN;
	static volatile uint64_t t37 = 0LLU;

	t37 = (x237&((x238*x239)%x240));

	if (t37 != 2925335359883282LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x249 = -1;
	volatile int32_t x250 = 0;
	uint16_t x251 = 1U;
	int8_t x252 = -1;
	static volatile int32_t t38 = 1;

	t38 = (x249&((x250*x251)%x252));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x258 = UINT64_MAX;
	int64_t x259 = -4188448659672032LL;
	volatile uint16_t x260 = 43U;
	uint64_t t39 = 0LLU;

	t39 = (x257&((x258*x259)%x260));

	if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x261 = INT16_MIN;
	volatile uint16_t x262 = 268U;
	uint64_t x263 = 6039673383818606802LLU;
	int32_t x264 = -1;
	uint64_t t40 = 441LLU;

	t40 = (x261&((x262*x263)%x264));

	if (t40 != 13765732450655600640LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x265 = INT32_MIN;
	uint32_t x267 = UINT32_MAX;
	int64_t x268 = 5LL;

	t41 = (x265&((x266*x267)%x268));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x269 = INT16_MIN;
	int8_t x270 = -1;
	int32_t x271 = INT32_MAX;
	int8_t x272 = -3;
	int32_t t42 = -211836;

	t42 = (x269&((x270*x271)%x272));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x277 = 0;
	int64_t x279 = -1LL;
	int16_t x280 = INT16_MAX;
	volatile int64_t t43 = -508834LL;

	t43 = (x277&((x278*x279)%x280));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x282 = 150712LL;
	uint16_t x283 = 7112U;
	volatile int64_t t44 = 1703531318LL;

	t44 = (x281&((x282*x283)%x284));

	if (t44 != 64LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x285 = INT16_MIN;
	int64_t x286 = -10241LL;
	int32_t x287 = -1;

	t45 = (x285&((x286*x287)%x288));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x295 = INT8_MIN;
	int64_t t46 = -841099952LL;

	t46 = (x293&((x294*x295)%x296));

	if (t46 != -4194176LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x298 = -1;
	int64_t x299 = INT64_MAX;
	int8_t x300 = -1;
	volatile int64_t t47 = 48960464626745028LL;

	t47 = (x297&((x298*x299)%x300));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x301 = INT8_MIN;
	static int64_t x302 = 6134716241920348LL;
	static int8_t x303 = INT8_MAX;
	volatile uint8_t x304 = 3U;
	int64_t t48 = -1007030305985617355LL;

	t48 = (x301&((x302*x303)%x304));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x317 = 0;
	static int8_t x319 = INT8_MAX;
	int32_t x320 = 10090;
	volatile int32_t t49 = -621659244;

	t49 = (x317&((x318*x319)%x320));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x321 = UINT8_MAX;
	volatile uint16_t x322 = 6103U;
	int16_t x323 = -1;
	static int32_t x324 = -942369174;
	int32_t t50 = -1;

	t50 = (x321&((x322*x323)%x324));

	if (t50 != 41) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x325 = INT64_MIN;
	volatile uint8_t x326 = UINT8_MAX;
	int8_t x327 = INT8_MIN;
	uint64_t x328 = UINT64_MAX;
	static uint64_t t51 = 6LLU;

	t51 = (x325&((x326*x327)%x328));

	if (t51 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x334 = 0U;
	uint64_t x335 = UINT64_MAX;
	int32_t x336 = INT32_MIN;
	volatile uint64_t t52 = 3838883042LLU;

	t52 = (x333&((x334*x335)%x336));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x337 = -2282332387LL;
	uint64_t x338 = UINT64_MAX;
	uint64_t x339 = 26777LLU;
	volatile uint64_t t53 = 16915751150LLU;

	t53 = (x337&((x338*x339)%x340));

	if (t53 != 18446744071427200773LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x341 = 394209246U;
	volatile int64_t x343 = INT64_MIN;
	int64_t x344 = INT64_MIN;
	volatile uint64_t t54 = 501914LLU;

	t54 = (x341&((x342*x343)%x344));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x349 = 1U;
	static uint8_t x350 = 47U;
	uint16_t x351 = 16U;
	volatile int64_t x352 = -1328384LL;
	int64_t t55 = 388036LL;

	t55 = (x349&((x350*x351)%x352));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x355 = 2U;
	int8_t x356 = -2;
	static volatile uint32_t t56 = 4203185U;

	t56 = (x353&((x354*x355)%x356));

	if (t56 != 3998973952U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x357 = UINT8_MAX;
	int8_t x358 = -14;
	int16_t x359 = INT16_MIN;
	int64_t x360 = 200954880460089LL;
	static int64_t t57 = -180195185282574LL;

	t57 = (x357&((x358*x359)%x360));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x362 = 23U;
	uint32_t x363 = 5496360U;
	int16_t x364 = INT16_MIN;
	uint32_t t58 = 514669777U;

	t58 = (x361&((x362*x363)%x364));

	if (t58 != 126416280U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x366 = INT32_MIN;
	uint32_t x368 = UINT32_MAX;
	volatile uint64_t t59 = 8367533865LLU;

	t59 = (x365&((x366*x367)%x368));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x369 = -1;
	uint64_t x370 = 6519586LLU;
	static int64_t x371 = 15379513LL;
	int8_t x372 = INT8_MIN;
	uint64_t t60 = 8LLU;

	t60 = (x369&((x370*x371)%x372));

	if (t60 != 100268057641618LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x373 = 139583758001LLU;
	int64_t x374 = INT64_MIN;
	uint64_t x375 = 1LLU;
	uint64_t t61 = 3767658439LLU;

	t61 = (x373&((x374*x375)%x376));

	if (t61 != 1426460704LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x377 = 27;
	volatile uint32_t x378 = 4930952U;
	int32_t x380 = INT32_MIN;
	volatile uint32_t t62 = 44897348U;

	t62 = (x377&((x378*x379)%x380));

	if (t62 != 24U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x381 = INT16_MAX;
	int32_t x382 = INT32_MIN;
	uint32_t x383 = UINT32_MAX;
	int64_t t63 = 564079078761LL;

	t63 = (x381&((x382*x383)%x384));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x386 = UINT16_MAX;
	static volatile int64_t x387 = 804005022LL;
	int16_t x388 = -1;

	t64 = (x385&((x386*x387)%x388));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x390 = INT64_MIN;
	uint64_t x391 = UINT64_MAX;
	int16_t x392 = -1;
	volatile uint64_t t65 = 6490201222511LLU;

	t65 = (x389&((x390*x391)%x392));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x393 = INT32_MAX;
	volatile uint32_t x394 = UINT32_MAX;
	int8_t x395 = 7;
	static uint32_t x396 = 176U;
	static volatile uint32_t t66 = 6U;

	t66 = (x393&((x394*x395)%x396));

	if (t66 != 41U) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x397 = -1LL;
	int8_t x398 = -26;
	int64_t x399 = 81LL;
	int16_t x400 = -3;
	int64_t t67 = 0LL;

	t67 = (x397&((x398*x399)%x400));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x405 = INT32_MAX;
	int8_t x406 = -1;
	int16_t x407 = INT16_MIN;

	t68 = (x405&((x406*x407)%x408));

	if (t68 != 8) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x414 = 28U;
	int16_t x415 = INT16_MIN;
	int32_t t69 = 3945039;

	t69 = (x413&((x414*x415)%x416));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x418 = INT32_MIN;
	volatile uint64_t x419 = 9087524394803LLU;
	volatile uint64_t t70 = 49522983186548LLU;

	t70 = (x417&((x418*x419)%x420));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x421 = INT16_MAX;
	volatile int8_t x422 = -3;
	static int8_t x423 = 38;
	int8_t x424 = INT8_MIN;
	int32_t t71 = -95;

	t71 = (x421&((x422*x423)%x424));

	if (t71 != 32654) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x425 = 196114376;
	static int8_t x426 = INT8_MIN;
	uint64_t x427 = 737363095574LLU;
	int64_t x428 = INT64_MIN;

	t72 = (x425&((x426*x427)%x428));

	if (t72 != 167802112LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x433 = -4;
	volatile int64_t x434 = INT64_MAX;
	int32_t x435 = -1;

	t73 = (x433&((x434*x435)%x436));

	if (t73 != -140LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x439 = INT16_MAX;
	int32_t x440 = -1;
	uint32_t t74 = 1367U;

	t74 = (x437&((x438*x439)%x440));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x441 = 28U;
	int16_t x442 = -13;
	int16_t x443 = INT16_MIN;
	static uint64_t t75 = 151539LLU;

	t75 = (x441&((x442*x443)%x444));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x446 = -1LL;
	static int32_t x447 = INT32_MAX;
	int32_t x448 = -7464;
	static volatile int64_t t76 = -11357301221487665LL;

	t76 = (x445&((x446*x447)%x448));

	if (t76 != -1279LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x449 = UINT64_MAX;
	volatile uint8_t x450 = 0U;
	static uint64_t x451 = UINT64_MAX;
	uint8_t x452 = 44U;
	static volatile uint64_t t77 = 747157LLU;

	t77 = (x449&((x450*x451)%x452));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x453 = 49U;
	volatile int8_t x454 = -1;
	int16_t x455 = 52;
	uint32_t x456 = 384555521U;
	uint32_t t78 = 149728329U;

	t78 = (x453&((x454*x455)%x456));

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x461 = INT64_MAX;
	static uint8_t x462 = UINT8_MAX;
	int16_t x463 = INT16_MIN;
	int64_t x464 = INT64_MIN;
	int64_t t79 = -429024LL;

	t79 = (x461&((x462*x463)%x464));

	if (t79 != 9223372036846419968LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x465 = UINT64_MAX;
	uint8_t x467 = 95U;
	volatile uint64_t t80 = 0LLU;

	t80 = (x465&((x466*x467)%x468));

	if (t80 != 18446744071871342184LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x473 = -1;
	int32_t x474 = INT32_MAX;
	static uint32_t x475 = 355114121U;
	volatile int8_t x476 = INT8_MIN;
	uint32_t t81 = 35U;

	t81 = (x473&((x474*x475)%x476));

	if (t81 != 1792369527U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x477 = -53733887731579175LL;
	uint32_t x478 = 2U;
	int8_t x479 = -1;
	uint64_t x480 = 700748194281511LLU;
	static volatile uint64_t t82 = 211443587190679LLU;

	t82 = (x477&((x478*x479)%x480));

	if (t82 != 1432078040LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x481 = 0U;
	uint64_t x482 = 63638628408633LLU;
	uint64_t x483 = UINT64_MAX;
	int32_t x484 = INT32_MAX;
	static volatile uint64_t t83 = 58696810289880LLU;

	t83 = (x481&((x482*x483)%x484));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x485 = INT32_MIN;
	static uint8_t x487 = UINT8_MAX;
	uint8_t x488 = 2U;
	volatile int32_t t84 = INT32_MIN;

	t84 = (x485&((x486*x487)%x488));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x489 = UINT8_MAX;
	int64_t x490 = 12LL;
	int32_t x491 = INT32_MIN;
	static int32_t x492 = INT32_MIN;

	t85 = (x489&((x490*x491)%x492));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x497 = INT16_MIN;
	int32_t x498 = -1;
	uint64_t x499 = 83263740LLU;
	int32_t x500 = 260662054;
	volatile uint64_t t86 = 15949106044LLU;

	t86 = (x497&((x498*x499)%x500));

	if (t86 != 12910592LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x505 = INT16_MIN;
	uint64_t x506 = 2050438LLU;
	int8_t x507 = -3;
	int8_t x508 = INT8_MIN;
	uint64_t t87 = 2151959281008LLU;

	t87 = (x505&((x506*x507)%x508));

	if (t87 != 18446744073703391232LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x509 = INT64_MAX;
	int32_t x512 = -1;
	int64_t t88 = 910LL;

	t88 = (x509&((x510*x511)%x512));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x517 = INT8_MAX;
	uint64_t x518 = UINT64_MAX;
	uint16_t x519 = 878U;
	uint8_t x520 = 9U;

	t89 = (x517&((x518*x519)%x520));

	if (t89 != 2LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x525 = UINT64_MAX;
	int16_t x526 = -2;
	int32_t x528 = INT32_MIN;
	volatile uint64_t t90 = 6LLU;

	t90 = (x525&((x526*x527)%x528));

	if (t90 != 65536LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x533 = -289501974484LL;
	static int16_t x534 = 1;
	int64_t x535 = -1LL;
	static volatile int64_t x536 = 332848225010LL;
	int64_t t91 = -20248LL;

	t91 = (x533&((x534*x535)%x536));

	if (t91 != -289501974484LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x542 = INT8_MIN;
	static int64_t x544 = INT64_MIN;
	volatile int64_t t92 = -15LL;

	t92 = (x541&((x542*x543)%x544));

	if (t92 != 5248LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x545 = INT64_MIN;
	int32_t x547 = 11;
	volatile int64_t t93 = INT64_MIN;

	t93 = (x545&((x546*x547)%x548));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x549 = -4541;
	uint8_t x550 = UINT8_MAX;
	volatile int16_t x551 = 26;
	uint32_t x552 = UINT32_MAX;
	volatile uint32_t t94 = 465906998U;

	t94 = (x549&((x550*x551)%x552));

	if (t94 != 2114U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x555 = INT8_MIN;

	t95 = (x553&((x554*x555)%x556));

	if (t95 != 10LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x557 = 10;
	static volatile int16_t x558 = -1;
	uint8_t x559 = 71U;
	volatile uint32_t x560 = 299U;
	volatile uint32_t t96 = 3141U;

	t96 = (x557&((x558*x559)%x560));

	if (t96 != 2U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x561 = UINT8_MAX;
	uint64_t x563 = 7LLU;
	uint64_t x564 = UINT64_MAX;
	volatile uint64_t t97 = 314597990639139LLU;

	t97 = (x561&((x562*x563)%x564));

	if (t97 != 28LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x565 = INT16_MAX;
	int64_t x567 = -1LL;
	int64_t x568 = INT64_MAX;
	static int64_t t98 = -200398792173437711LL;

	t98 = (x565&((x566*x567)%x568));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x570 = 341021U;
	volatile uint16_t x571 = 23893U;
	int16_t x572 = INT16_MIN;
	volatile int64_t t99 = -378LL;

	t99 = (x569&((x570*x571)%x572));

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

