#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x9 = UINT16_MAX;
uint8_t x11 = 0U;
static int8_t x12 = INT8_MAX;
volatile int64_t t1 = 113425LL;
static int32_t t3 = -997820755;
static uint32_t x29 = UINT32_MAX;
int16_t x30 = INT16_MIN;
uint32_t t4 = 12318189U;
int16_t x75 = 1;
volatile int64_t t11 = -499163693LL;
static int32_t x105 = INT32_MIN;
static volatile int32_t t12 = -4;
int64_t x122 = -1LL;
uint32_t x127 = UINT32_MAX;
int64_t x144 = 243928667LL;
static int32_t x152 = INT32_MIN;
static int32_t x162 = 857553307;
static int32_t x164 = -94446;
int32_t x184 = -388599;
volatile uint64_t x187 = UINT64_MAX;
uint16_t x202 = 29U;
int64_t x203 = -1LL;
int64_t x218 = -1LL;
volatile uint16_t x226 = 6815U;
uint8_t x227 = 2U;
volatile uint64_t x232 = 46LLU;
uint64_t t27 = 43823420867LLU;
uint32_t x237 = 681U;
int16_t x238 = INT16_MIN;
int32_t x239 = -30;
int16_t x251 = -8;
int8_t x272 = -1;
uint16_t x275 = UINT16_MAX;
static int64_t x276 = INT64_MIN;
volatile uint8_t x278 = 99U;
int8_t x283 = -1;
int64_t x289 = -161449037413366LL;
volatile int32_t x291 = 7;
int64_t x292 = 3342326185568LL;
uint32_t x295 = 29437804U;
volatile int32_t t39 = -81563909;
uint64_t x325 = 1411035566459087LLU;
volatile int16_t x326 = -1;
uint64_t t41 = 3185833496251LLU;
uint64_t x329 = 329990LLU;
uint8_t x331 = 120U;
uint64_t x377 = 4125329076078081LLU;
volatile uint16_t x378 = 6U;
volatile uint8_t x380 = 47U;
static uint64_t x385 = 422134844LLU;
int64_t x399 = 419109362LL;
uint32_t x401 = 315646U;
static volatile uint8_t x403 = 5U;
int32_t x423 = -1;
int32_t x430 = 949;
volatile int8_t x431 = INT8_MAX;
volatile int32_t t54 = 1;
volatile int16_t x436 = INT16_MIN;
volatile int8_t x462 = 33;
int64_t x464 = INT64_MIN;
int64_t x468 = INT64_MIN;
int32_t x485 = -1;
uint8_t x488 = UINT8_MAX;
int32_t t63 = 79;
uint32_t x493 = 13712470U;
int64_t x494 = INT64_MAX;
int8_t x495 = -5;
volatile int64_t t65 = 3213432441LL;
volatile uint16_t x497 = 104U;
int32_t x498 = INT32_MAX;
volatile int32_t x507 = INT32_MAX;
static uint8_t x521 = 127U;
uint8_t x523 = UINT8_MAX;
volatile uint8_t x553 = 14U;
int32_t x554 = INT32_MAX;
int32_t t70 = -688564901;
int32_t t72 = -242100397;
static int16_t x573 = 11978;
uint8_t x574 = 82U;
uint32_t x581 = 237U;
uint16_t x582 = 6U;
volatile int8_t x584 = INT8_MAX;
volatile int64_t x585 = INT64_MAX;
int8_t x587 = INT8_MIN;
int16_t x594 = 0;
int8_t x618 = INT8_MIN;
static volatile uint64_t x632 = 2395626251777863209LLU;
uint32_t t80 = UINT32_MAX;
int16_t x644 = -187;
static int8_t x663 = -1;
int64_t t83 = -628792LL;
int8_t x695 = -1;
static uint16_t x719 = 1126U;
static volatile int32_t x725 = -771589;
volatile int32_t t89 = -604093;
volatile uint32_t x737 = UINT32_MAX;
volatile uint32_t t92 = 1U;
int64_t x748 = INT64_MIN;
static int8_t x758 = INT8_MAX;
volatile uint32_t x762 = 230199U;
static volatile uint32_t t95 = 2622U;
uint64_t x774 = 1832221574991LLU;
int32_t x776 = INT32_MAX;
uint64_t t96 = 170985LLU;
volatile int64_t x788 = -65707678934LL;
volatile uint64_t t98 = 11617045358468380LLU;


void f0(void) {
	uint16_t x10 = 7U;
	int32_t t0 = 17;

	t0 = ((x9&x10)<<(x11/x12));

	if (t0 != 7) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x17 = INT64_MIN;
	uint32_t x18 = UINT32_MAX;
	int8_t x19 = INT8_MAX;
	volatile int64_t x20 = -298846746509137LL;

	t1 = ((x17&x18)<<(x19/x20));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x21 = 6941631U;
	static uint16_t x22 = 6U;
	int8_t x23 = 1;
	static int16_t x24 = INT16_MIN;
	volatile uint32_t t2 = 407939U;

	t2 = ((x21&x22)<<(x23/x24));

	if (t2 != 6U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = -824;
	uint8_t x26 = UINT8_MAX;
	uint8_t x27 = 1U;
	volatile uint16_t x28 = UINT16_MAX;

	t3 = ((x25&x26)<<(x27/x28));

	if (t3 != 200) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x31 = 4144022351LLU;
	int16_t x32 = INT16_MIN;

	t4 = ((x29&x30)<<(x31/x32));

	if (t4 != 4294934528U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x37 = 141;
	static uint64_t x38 = UINT64_MAX;
	static volatile int32_t x39 = -1;
	static volatile int16_t x40 = INT16_MAX;
	volatile uint64_t t5 = 107771631LLU;

	t5 = ((x37&x38)<<(x39/x40));

	if (t5 != 141LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x49 = INT8_MAX;
	uint32_t x50 = 222623U;
	static volatile int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MIN;
	volatile uint32_t t6 = 187645313U;

	t6 = ((x49&x50)<<(x51/x52));

	if (t6 != 31U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x73 = INT32_MIN;
	uint8_t x74 = 48U;
	static int64_t x76 = -4175468711564881LL;
	static int32_t t7 = 11;

	t7 = ((x73&x74)<<(x75/x76));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x77 = INT32_MIN;
	int8_t x78 = 1;
	static int32_t x79 = -1;
	static int64_t x80 = INT64_MIN;
	static int32_t t8 = 73331983;

	t8 = ((x77&x78)<<(x79/x80));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x89 = 0LLU;
	static volatile uint64_t x90 = 1010512LLU;
	uint16_t x91 = 19U;
	int16_t x92 = INT16_MIN;
	uint64_t t9 = 20302617920558564LLU;

	t9 = ((x89&x90)<<(x91/x92));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x93 = INT8_MAX;
	static int16_t x94 = INT16_MIN;
	static int32_t x95 = -1;
	uint32_t x96 = UINT32_MAX;
	static volatile int32_t t10 = 17854;

	t10 = ((x93&x94)<<(x95/x96));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x101 = 3U;
	volatile int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MIN;
	volatile int32_t x104 = INT32_MAX;

	t11 = ((x101&x102)<<(x103/x104));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x106 = 2U;
	int64_t x107 = 0LL;
	int64_t x108 = INT64_MIN;

	t12 = ((x105&x106)<<(x107/x108));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x121 = INT32_MAX;
	int8_t x123 = 2;
	static int64_t x124 = -10711LL;
	int64_t t13 = 354LL;

	t13 = ((x121&x122)<<(x123/x124));

	if (t13 != 2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x125 = -1;
	uint16_t x126 = 6U;
	int16_t x128 = -1;
	volatile int32_t t14 = 4872914;

	t14 = ((x125&x126)<<(x127/x128));

	if (t14 != 12) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x141 = UINT32_MAX;
	int32_t x142 = INT32_MIN;
	static int32_t x143 = -1;
	uint32_t t15 = 652535853U;

	t15 = ((x141&x142)<<(x143/x144));

	if (t15 != 2147483648U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x149 = 17U;
	volatile int8_t x150 = INT8_MIN;
	uint16_t x151 = 18160U;
	volatile int32_t t16 = 8888;

	t16 = ((x149&x150)<<(x151/x152));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x157 = -2736386453505594108LL;
	int32_t x158 = 61590;
	uint64_t x159 = UINT64_MAX;
	int8_t x160 = -1;
	static volatile int64_t t17 = -2LL;

	t17 = ((x157&x158)<<(x159/x160));

	if (t17 != 81928LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x161 = INT16_MIN;
	volatile int8_t x163 = INT8_MAX;
	volatile int32_t t18 = -6076975;

	t18 = ((x161&x162)<<(x163/x164));

	if (t18 != 857538560) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x181 = 486;
	int8_t x182 = 0;
	volatile uint64_t x183 = 10679026745333LLU;
	int32_t t19 = -4523;

	t19 = ((x181&x182)<<(x183/x184));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x185 = 3;
	int8_t x186 = -1;
	int16_t x188 = -1;
	volatile int32_t t20 = 3;

	t20 = ((x185&x186)<<(x187/x188));

	if (t20 != 6) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x189 = INT16_MIN;
	uint8_t x190 = UINT8_MAX;
	int64_t x191 = -1LL;
	uint16_t x192 = UINT16_MAX;
	int32_t t21 = 676909;

	t21 = ((x189&x190)<<(x191/x192));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x201 = UINT8_MAX;
	uint16_t x204 = 16U;
	volatile int32_t t22 = 1;

	t22 = ((x201&x202)<<(x203/x204));

	if (t22 != 29) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x213 = INT32_MAX;
	int64_t x214 = 32489543LL;
	uint16_t x215 = 0U;
	int32_t x216 = INT32_MAX;
	int64_t t23 = -5069LL;

	t23 = ((x213&x214)<<(x215/x216));

	if (t23 != 32489543LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x217 = 1U;
	uint8_t x219 = 0U;
	uint8_t x220 = UINT8_MAX;
	volatile int64_t t24 = 1400097587058259LL;

	t24 = ((x217&x218)<<(x219/x220));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x221 = INT16_MIN;
	uint16_t x222 = 667U;
	uint16_t x223 = UINT16_MAX;
	uint32_t x224 = 169414U;
	int32_t t25 = 3;

	t25 = ((x221&x222)<<(x223/x224));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x225 = INT16_MAX;
	static volatile int16_t x228 = INT16_MIN;
	int32_t t26 = 7356377;

	t26 = ((x225&x226)<<(x227/x228));

	if (t26 != 6815) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x229 = INT8_MIN;
	uint64_t x230 = UINT64_MAX;
	volatile uint32_t x231 = 40U;

	t27 = ((x229&x230)<<(x231/x232));

	if (t27 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x233 = 3;
	volatile int64_t x234 = -466LL;
	static int16_t x235 = INT16_MIN;
	int16_t x236 = INT16_MIN;
	volatile int64_t t28 = 0LL;

	t28 = ((x233&x234)<<(x235/x236));

	if (t28 != 4LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x240 = -500414LL;
	volatile uint32_t t29 = 6006U;

	t29 = ((x237&x238)<<(x239/x240));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x241 = 2682315342374555LLU;
	uint16_t x242 = UINT16_MAX;
	static volatile int32_t x243 = 111733680;
	volatile uint32_t x244 = 2844540U;
	uint64_t t30 = 10451924650LLU;

	t30 = ((x241&x242)<<(x243/x244));

	if (t30 != 14440435963396096LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x249 = -234060587286266155LL;
	uint16_t x250 = UINT16_MAX;
	int16_t x252 = -6765;
	static int64_t t31 = -338257892LL;

	t31 = ((x249&x250)<<(x251/x252));

	if (t31 != 65237LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x253 = INT16_MAX;
	volatile uint32_t x254 = 876U;
	volatile uint32_t x255 = 5586650U;
	static int64_t x256 = -384736793961LL;
	volatile uint32_t t32 = 1506U;

	t32 = ((x253&x254)<<(x255/x256));

	if (t32 != 876U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x257 = -1LL;
	uint32_t x258 = UINT32_MAX;
	uint8_t x259 = 0U;
	int64_t x260 = -1168674114249712LL;
	int64_t t33 = 2780174LL;

	t33 = ((x257&x258)<<(x259/x260));

	if (t33 != 4294967295LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x269 = INT64_MIN;
	int8_t x270 = INT8_MAX;
	uint32_t x271 = 1761U;
	int64_t t34 = -33532253136368LL;

	t34 = ((x269&x270)<<(x271/x272));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x273 = UINT16_MAX;
	int32_t x274 = INT32_MIN;
	int32_t t35 = 12;

	t35 = ((x273&x274)<<(x275/x276));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x277 = -1;
	int64_t x279 = INT64_MAX;
	volatile int64_t x280 = INT64_MAX;
	volatile int32_t t36 = -34531515;

	t36 = ((x277&x278)<<(x279/x280));

	if (t36 != 198) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x281 = 260243;
	static uint8_t x282 = UINT8_MAX;
	volatile int64_t x284 = INT64_MIN;
	volatile int32_t t37 = -6232;

	t37 = ((x281&x282)<<(x283/x284));

	if (t37 != 147) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x290 = 0U;
	volatile int64_t t38 = 117620952LL;

	t38 = ((x289&x290)<<(x291/x292));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x293 = 1;
	int8_t x294 = -1;
	volatile int16_t x296 = INT16_MIN;

	t39 = ((x293&x294)<<(x295/x296));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x313 = 0U;
	static volatile int64_t x314 = -30203305788101714LL;
	int64_t x315 = -4LL;
	static uint32_t x316 = UINT32_MAX;
	int64_t t40 = -521315315569LL;

	t40 = ((x313&x314)<<(x315/x316));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x327 = -1LL;
	uint32_t x328 = 623901745U;

	t41 = ((x325&x326)<<(x327/x328));

	if (t41 != 1411035566459087LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x330 = 0;
	uint8_t x332 = 2U;
	uint64_t t42 = 202444800456510LLU;

	t42 = ((x329&x330)<<(x331/x332));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x337 = -1;
	volatile uint16_t x338 = UINT16_MAX;
	static int8_t x339 = INT8_MAX;
	volatile int64_t x340 = INT64_MIN;
	int32_t t43 = 102;

	t43 = ((x337&x338)<<(x339/x340));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x341 = 2187876531010753078LLU;
	int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MAX;
	int32_t x344 = INT32_MAX;
	uint64_t t44 = 1315489845802095LLU;

	t44 = ((x341&x342)<<(x343/x344));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x345 = -1;
	int16_t x346 = 4807;
	static volatile uint8_t x347 = 22U;
	static uint64_t x348 = 194510LLU;
	int32_t t45 = 3691409;

	t45 = ((x345&x346)<<(x347/x348));

	if (t45 != 4807) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x353 = 2U;
	static int8_t x354 = -1;
	uint16_t x355 = 6U;
	volatile int32_t x356 = -705293;
	volatile int32_t t46 = 8349946;

	t46 = ((x353&x354)<<(x355/x356));

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x361 = 57U;
	volatile uint32_t x362 = 103U;
	int32_t x363 = -1;
	int8_t x364 = INT8_MAX;
	volatile uint32_t t47 = 0U;

	t47 = ((x361&x362)<<(x363/x364));

	if (t47 != 33U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x373 = 16U;
	int32_t x374 = -1;
	uint8_t x375 = 74U;
	volatile int64_t x376 = INT64_MIN;
	int32_t t48 = -104167;

	t48 = ((x373&x374)<<(x375/x376));

	if (t48 != 16) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x379 = 0;
	volatile uint64_t t49 = 31094071322636LLU;

	t49 = ((x377&x378)<<(x379/x380));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x386 = -1LL;
	static volatile uint8_t x387 = 0U;
	volatile int32_t x388 = INT32_MAX;
	static uint64_t t50 = 7577779511915428LLU;

	t50 = ((x385&x386)<<(x387/x388));

	if (t50 != 422134844LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x397 = -1;
	uint32_t x398 = 4U;
	int32_t x400 = INT32_MIN;
	volatile uint32_t t51 = 501337U;

	t51 = ((x397&x398)<<(x399/x400));

	if (t51 != 4U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x402 = 1;
	uint64_t x404 = 19818708LLU;
	uint32_t t52 = 208034836U;

	t52 = ((x401&x402)<<(x403/x404));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x421 = 0LLU;
	int8_t x422 = INT8_MAX;
	static int64_t x424 = -1LL;
	static volatile uint64_t t53 = 5648543471112367092LLU;

	t53 = ((x421&x422)<<(x423/x424));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x429 = -1;
	int64_t x432 = INT64_MIN;

	t54 = ((x429&x430)<<(x431/x432));

	if (t54 != 949) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x433 = 45420071715141907LLU;
	int64_t x434 = 1460378LL;
	static int16_t x435 = INT16_MIN;
	static uint64_t t55 = 249LLU;

	t55 = ((x433&x434)<<(x435/x436));

	if (t55 != 36900LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x437 = INT8_MIN;
	int16_t x438 = INT16_MAX;
	int32_t x439 = -1;
	int32_t x440 = 187692072;
	int32_t t56 = -1034833201;

	t56 = ((x437&x438)<<(x439/x440));

	if (t56 != 32640) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x445 = 8506088U;
	int64_t x446 = -1LL;
	uint8_t x447 = UINT8_MAX;
	volatile uint64_t x448 = 449386615LLU;
	static volatile int64_t t57 = -13442891LL;

	t57 = ((x445&x446)<<(x447/x448));

	if (t57 != 8506088LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x449 = 39;
	volatile int16_t x450 = -1388;
	volatile int32_t x451 = 799;
	volatile int32_t x452 = INT32_MAX;
	volatile int32_t t58 = -12882895;

	t58 = ((x449&x450)<<(x451/x452));

	if (t58 != 4) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x461 = 29433619LLU;
	volatile int16_t x463 = 245;
	volatile uint64_t t59 = 1714494750158LLU;

	t59 = ((x461&x462)<<(x463/x464));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x465 = 7488820156737LLU;
	int8_t x466 = INT8_MIN;
	uint8_t x467 = 12U;
	volatile uint64_t t60 = 129291071LLU;

	t60 = ((x465&x466)<<(x467/x468));

	if (t60 != 7488820156672LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x469 = INT8_MAX;
	int64_t x470 = INT64_MIN;
	static volatile uint64_t x471 = 349300095LLU;
	int32_t x472 = INT32_MAX;
	volatile int64_t t61 = 974LL;

	t61 = ((x469&x470)<<(x471/x472));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x481 = INT32_MAX;
	static int8_t x482 = INT8_MIN;
	int16_t x483 = -1;
	static volatile int16_t x484 = INT16_MIN;
	volatile int32_t t62 = 383;

	t62 = ((x481&x482)<<(x483/x484));

	if (t62 != 2147483520) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x486 = 1;
	int8_t x487 = INT8_MIN;

	t63 = ((x485&x486)<<(x487/x488));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x489 = 12238U;
	int32_t x490 = 387040975;
	int8_t x491 = INT8_MAX;
	int8_t x492 = 47;
	volatile int32_t t64 = -3;

	t64 = ((x489&x490)<<(x491/x492));

	if (t64 != 6968) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x496 = INT32_MIN;

	t65 = ((x493&x494)<<(x495/x496));

	if (t65 != 13712470LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x499 = 5U;
	uint32_t x500 = 435868U;
	volatile int32_t t66 = 11081;

	t66 = ((x497&x498)<<(x499/x500));

	if (t66 != 104) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x505 = INT8_MIN;
	uint32_t x506 = UINT32_MAX;
	int64_t x508 = -22024939384443LL;
	uint32_t t67 = 91533U;

	t67 = ((x505&x506)<<(x507/x508));

	if (t67 != 4294967168U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x522 = 2;
	int16_t x524 = INT16_MIN;
	int32_t t68 = 100488;

	t68 = ((x521&x522)<<(x523/x524));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x529 = -1;
	volatile uint16_t x530 = 458U;
	uint64_t x531 = UINT64_MAX;
	uint64_t x532 = UINT64_MAX;
	volatile int32_t t69 = -5942;

	t69 = ((x529&x530)<<(x531/x532));

	if (t69 != 916) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x555 = 5U;
	static volatile int16_t x556 = 10;

	t70 = ((x553&x554)<<(x555/x556));

	if (t70 != 14) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x561 = INT64_MIN;
	uint32_t x562 = 1102U;
	volatile int32_t x563 = 2;
	volatile int16_t x564 = -38;
	int64_t t71 = 409124697417061LL;

	t71 = ((x561&x562)<<(x563/x564));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x569 = 32731U;
	static int32_t x570 = -1679;
	static uint64_t x571 = UINT64_MAX;
	volatile int64_t x572 = INT64_MIN;

	t72 = ((x569&x570)<<(x571/x572));

	if (t72 != 62114) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x575 = INT8_MIN;
	int64_t x576 = -3709017146LL;
	static int32_t t73 = -56771;

	t73 = ((x573&x574)<<(x575/x576));

	if (t73 != 66) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x583 = -3;
	uint32_t t74 = 922U;

	t74 = ((x581&x582)<<(x583/x584));

	if (t74 != 4U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x586 = 877U;
	int16_t x588 = INT16_MAX;
	int64_t t75 = -182051787LL;

	t75 = ((x585&x586)<<(x587/x588));

	if (t75 != 877LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x593 = 666566902LLU;
	uint32_t x595 = 922403392U;
	int32_t x596 = -119703;
	static uint64_t t76 = 1387LLU;

	t76 = ((x593&x594)<<(x595/x596));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x617 = UINT16_MAX;
	int16_t x619 = -1;
	static int16_t x620 = -1;
	int32_t t77 = 7;

	t77 = ((x617&x618)<<(x619/x620));

	if (t77 != 130816) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x621 = 138655007;
	volatile uint32_t x622 = 473U;
	static uint8_t x623 = 19U;
	static volatile uint64_t x624 = 66LLU;
	static uint32_t t78 = 1071953616U;

	t78 = ((x621&x622)<<(x623/x624));

	if (t78 != 281U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x625 = INT16_MIN;
	int64_t x626 = INT64_MAX;
	uint16_t x627 = 21335U;
	uint32_t x628 = 5830031U;
	static volatile int64_t t79 = 9392LL;

	t79 = ((x625&x626)<<(x627/x628));

	if (t79 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x629 = UINT32_MAX;
	int8_t x630 = -1;
	uint32_t x631 = 6U;

	t80 = ((x629&x630)<<(x631/x632));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x641 = 100LLU;
	uint32_t x642 = 133166657U;
	int64_t x643 = -1LL;
	volatile uint64_t t81 = 1558520159897487184LLU;

	t81 = ((x641&x642)<<(x643/x644));

	if (t81 != 64LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x645 = 32;
	static uint32_t x646 = 1U;
	int8_t x647 = INT8_MIN;
	uint8_t x648 = UINT8_MAX;
	static uint32_t t82 = 444935U;

	t82 = ((x645&x646)<<(x647/x648));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x661 = 2682730;
	static int64_t x662 = INT64_MIN;
	volatile int8_t x664 = 13;

	t83 = ((x661&x662)<<(x663/x664));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x677 = 13U;
	volatile int8_t x678 = INT8_MAX;
	uint64_t x679 = UINT64_MAX;
	int64_t x680 = INT64_MIN;
	volatile uint32_t t84 = 1030742275U;

	t84 = ((x677&x678)<<(x679/x680));

	if (t84 != 26U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x689 = INT8_MAX;
	static volatile int8_t x690 = 19;
	static int8_t x691 = INT8_MIN;
	uint16_t x692 = 18923U;
	volatile int32_t t85 = -44;

	t85 = ((x689&x690)<<(x691/x692));

	if (t85 != 19) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x693 = -1;
	uint16_t x694 = 42U;
	int16_t x696 = INT16_MAX;
	int32_t t86 = -1;

	t86 = ((x693&x694)<<(x695/x696));

	if (t86 != 42) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x713 = -1;
	volatile uint32_t x714 = 46U;
	int8_t x715 = 31;
	int16_t x716 = INT16_MIN;
	volatile uint32_t t87 = 5890689U;

	t87 = ((x713&x714)<<(x715/x716));

	if (t87 != 46U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x717 = 901934572991003833LL;
	int8_t x718 = 19;
	int8_t x720 = INT8_MAX;
	volatile int64_t t88 = -9903907748240LL;

	t88 = ((x717&x718)<<(x719/x720));

	if (t88 != 4352LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x726 = INT32_MAX;
	static uint64_t x727 = 0LLU;
	uint32_t x728 = UINT32_MAX;

	t89 = ((x725&x726)<<(x727/x728));

	if (t89 != 2146712059) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x729 = 49148560U;
	uint16_t x730 = 578U;
	static uint64_t x731 = 3102307143360782LLU;
	volatile int16_t x732 = INT16_MIN;
	volatile uint32_t t90 = 416652U;

	t90 = ((x729&x730)<<(x731/x732));

	if (t90 != 512U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x733 = -1;
	volatile uint32_t x734 = 492847585U;
	int32_t x735 = -1;
	static int64_t x736 = -4063089285LL;
	volatile uint32_t t91 = 71325U;

	t91 = ((x733&x734)<<(x735/x736));

	if (t91 != 492847585U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x738 = 0;
	int8_t x739 = -1;
	uint8_t x740 = 17U;

	t92 = ((x737&x738)<<(x739/x740));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x745 = INT32_MIN;
	uint16_t x746 = 266U;
	volatile int32_t x747 = -1;
	int32_t t93 = 0;

	t93 = ((x745&x746)<<(x747/x748));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x757 = 117U;
	int64_t x759 = 14LL;
	uint8_t x760 = UINT8_MAX;
	static volatile int32_t t94 = -761891;

	t94 = ((x757&x758)<<(x759/x760));

	if (t94 != 117) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x761 = 1U;
	int8_t x763 = -1;
	volatile int32_t x764 = -103;

	t95 = ((x761&x762)<<(x763/x764));

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x773 = 10808195LLU;
	uint8_t x775 = 20U;

	t96 = ((x773&x774)<<(x775/x776));

	if (t96 != 10519299LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x785 = -1;
	static uint16_t x786 = UINT16_MAX;
	static int16_t x787 = 7;
	volatile int32_t t97 = 4;

	t97 = ((x785&x786)<<(x787/x788));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x793 = -1101LL;
	uint64_t x794 = UINT64_MAX;
	uint8_t x795 = UINT8_MAX;
	uint64_t x796 = 78LLU;

	t98 = ((x793&x794)<<(x795/x796));

	if (t98 != 18446744073709542808LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x797 = 1059747940971125LL;
	int32_t x798 = INT32_MIN;
	volatile int16_t x799 = INT16_MAX;
	static int64_t x800 = INT64_MIN;
	static int64_t t99 = -4078699622LL;

	t99 = ((x797&x798)<<(x799/x800));

	if (t99 != 1059746673065984LL) { NG(); } else { ; }
	
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

