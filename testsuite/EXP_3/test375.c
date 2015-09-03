#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
int8_t x7 = -2;
static uint32_t x10 = 3882444U;
uint8_t x20 = UINT8_MAX;
volatile int64_t t4 = 3464823058137LL;
static int64_t x34 = -1LL;
volatile int8_t x35 = 25;
volatile int64_t t5 = -650267129493532853LL;
volatile uint32_t x40 = 6U;
static uint16_t x45 = 3443U;
static int64_t x46 = -1LL;
int64_t x47 = -1020643618138LL;
volatile uint16_t x51 = UINT16_MAX;
static int64_t t9 = 577LL;
static int64_t x71 = 57651673LL;
volatile int8_t x72 = -1;
uint64_t t10 = 41637273LLU;
int8_t x73 = INT8_MAX;
volatile uint64_t t11 = 461151267127935LLU;
int32_t x81 = -1;
int32_t t13 = -1007;
int64_t t14 = 2777375LL;
static uint64_t x110 = 1387030216814426LLU;
static volatile uint64_t t15 = 1300022LLU;
static uint16_t x114 = UINT16_MAX;
int64_t x122 = 6851880924517LL;
uint64_t x130 = 291587578LLU;
int64_t x149 = -1LL;
static int32_t x158 = -1;
volatile uint32_t x180 = UINT32_MAX;
uint64_t x183 = UINT64_MAX;
int64_t x184 = 40697LL;
int64_t x191 = 111LL;
static int64_t x207 = -6597479LL;
volatile int16_t x229 = INT16_MIN;
uint8_t x230 = UINT8_MAX;
int32_t x231 = INT32_MAX;
volatile int32_t t29 = 76389388;
uint16_t x263 = 7510U;
uint32_t t32 = 1248U;
volatile uint64_t x272 = 148LLU;
volatile uint64_t t33 = 34065843095223LLU;
int32_t x276 = -1;
uint32_t x277 = 104767241U;
static uint64_t x282 = 80462872107398LLU;
static volatile int64_t t39 = 3LL;
int8_t x307 = -1;
volatile int8_t x318 = -2;
int16_t x320 = INT16_MAX;
int8_t x371 = 6;
uint16_t x377 = UINT16_MAX;
uint8_t x379 = 3U;
static volatile uint32_t x394 = UINT32_MAX;
volatile int16_t x414 = -1;
static int64_t x415 = 283519772868425LL;
int8_t x416 = INT8_MIN;
int16_t x418 = INT16_MAX;
volatile int64_t x421 = -53948342838298679LL;
int8_t x422 = 3;
int64_t x430 = -37943997LL;
int64_t t53 = -1111205LL;
int16_t x451 = INT16_MIN;
static volatile int32_t t54 = 0;
static int32_t x461 = INT32_MAX;
uint64_t t55 = 16383518549640LLU;
uint64_t t56 = 1019708838LLU;
int64_t x479 = 4159585953LL;
uint16_t x492 = 6088U;
int64_t t62 = 13734759LL;
int8_t x512 = INT8_MIN;
uint32_t x520 = UINT32_MAX;
volatile uint64_t t64 = 2577701105817LLU;
uint16_t x521 = UINT16_MAX;
static uint16_t x523 = 5631U;
uint32_t x525 = 7645763U;
volatile uint32_t x526 = UINT32_MAX;
int8_t x528 = INT8_MAX;
static int8_t x529 = INT8_MAX;
int16_t x531 = INT16_MAX;
volatile uint32_t t67 = 2463828U;
int64_t x541 = 2480LL;
int8_t x564 = 1;
uint64_t x582 = UINT64_MAX;
volatile int16_t x586 = -1;
int32_t x596 = 9791;
static volatile int8_t x675 = INT8_MIN;
static int64_t x718 = -4145248808826LL;
int8_t x722 = -1;
uint16_t x723 = 0U;
volatile uint32_t x724 = UINT32_MAX;
uint32_t x725 = UINT32_MAX;
int16_t x742 = INT16_MIN;
volatile int16_t x748 = -1;
volatile int64_t t89 = -3944209LL;
int8_t x765 = 0;
int64_t x769 = -1LL;
uint8_t x773 = 1U;
uint64_t x776 = 26091983LLU;
uint64_t x778 = 5726590242058423LLU;
volatile uint64_t x809 = 1678347195808LLU;
volatile uint8_t x814 = 2U;
int64_t x818 = -64959619312LL;
static uint8_t x827 = UINT8_MAX;
int16_t x828 = -6798;
volatile int32_t t99 = 1003817425;


void f0(void) {
	static int16_t x1 = -2;
	uint16_t x3 = 12U;
	uint16_t x4 = 1007U;
	static volatile int32_t t0 = -241085300;

	t0 = ((x1*x2)&(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	uint16_t x6 = UINT16_MAX;
	volatile uint32_t x8 = 0U;
	uint32_t t1 = 15U;

	t1 = ((x5*x6)&(x7*x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	volatile int32_t x11 = -51;
	uint32_t x12 = 58U;
	uint32_t t2 = 52908U;

	t2 = ((x9*x10)&(x11*x12));

	if (t2 != 4291084336U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = -2;
	static uint16_t x19 = UINT16_MAX;
	int32_t t3 = 124767;

	t3 = ((x17*x18)&(x19*x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x29 = -5813859LL;
	int8_t x30 = -1;
	volatile int64_t x31 = INT64_MAX;
	static int8_t x32 = 0;

	t4 = ((x29*x30)&(x31*x32));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x33 = INT8_MAX;
	int16_t x36 = INT16_MAX;

	t5 = ((x33*x34)&(x35*x36));

	if (t5 != 819073LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = INT16_MAX;
	static int16_t x38 = -106;
	volatile uint32_t x39 = 573763U;
	volatile uint32_t t6 = 3580U;

	t6 = ((x37*x38)&(x39*x40));

	if (t6 != 2U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x48 = INT8_MIN;
	volatile int64_t t7 = 6504139025972LL;

	t7 = ((x45*x46)&(x47*x48));

	if (t7 != 130642383118336LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x49 = UINT32_MAX;
	static volatile uint16_t x50 = 112U;
	volatile int64_t x52 = -1LL;
	int64_t t8 = 317LL;

	t8 = ((x49*x50)&(x51*x52));

	if (t8 != 4294901760LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x65 = 1421;
	int32_t x66 = -1;
	static int64_t x67 = 22939LL;
	int8_t x68 = INT8_MIN;

	t9 = ((x65*x66)&(x67*x68));

	if (t9 != -2936320LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x69 = 51LLU;
	uint16_t x70 = 14020U;

	t10 = ((x69*x70)&(x71*x72));

	if (t10 != 18436LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x74 = -7;
	uint16_t x75 = UINT16_MAX;
	uint64_t x76 = 13188LLU;

	t11 = ((x73*x74)&(x75*x76));

	if (t11 != 864275460LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MAX;
	static uint32_t x84 = UINT32_MAX;
	volatile uint32_t t12 = 0U;

	t12 = ((x81*x82)&(x83*x84));

	if (t12 != 32768U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x89 = -3;
	uint8_t x90 = UINT8_MAX;
	int16_t x91 = INT16_MIN;
	uint16_t x92 = UINT16_MAX;

	t13 = ((x89*x90)&(x91*x92));

	if (t13 != -2147450880) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x105 = 229034781U;
	volatile int8_t x106 = INT8_MIN;
	volatile int32_t x107 = -2024;
	static volatile int64_t x108 = -1LL;

	t14 = ((x105*x106)&(x107*x108));

	if (t14 != 384LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x109 = INT8_MAX;
	static int64_t x111 = -1LL;
	static int16_t x112 = 13608;

	t15 = ((x109*x110)&(x111*x112));

	if (t15 != 176152837535418496LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x113 = 16;
	int64_t x115 = -1LL;
	volatile uint32_t x116 = UINT32_MAX;
	volatile int64_t t16 = 76140LL;

	t16 = ((x113*x114)&(x115*x116));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x121 = INT8_MAX;
	static volatile uint16_t x123 = 6738U;
	uint8_t x124 = UINT8_MAX;
	int64_t t17 = -31310468475804202LL;

	t17 = ((x121*x122)&(x123*x124));

	if (t17 != 537866LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x129 = -1LL;
	int32_t x131 = INT32_MAX;
	int64_t x132 = -1LL;
	static volatile uint64_t t18 = 8194811145974LLU;

	t18 = ((x129*x130)&(x131*x132));

	if (t18 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x137 = 6454U;
	uint8_t x138 = 23U;
	static volatile int64_t x139 = -1LL;
	uint8_t x140 = UINT8_MAX;
	volatile int64_t t19 = 16630LL;

	t19 = ((x137*x138)&(x139*x140));

	if (t19 != 148224LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x150 = 125023329U;
	int64_t x151 = INT64_MIN;
	int16_t x152 = 1;
	volatile int64_t t20 = INT64_MIN;

	t20 = ((x149*x150)&(x151*x152));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x157 = 670;
	int16_t x159 = -7120;
	volatile int8_t x160 = INT8_MIN;
	volatile int32_t t21 = -31716;

	t21 = ((x157*x158)&(x159*x160));

	if (t21 != 911360) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x177 = 3;
	int8_t x178 = -1;
	static uint16_t x179 = 206U;
	uint32_t t22 = 82109305U;

	t22 = ((x177*x178)&(x179*x180));

	if (t22 != 4294967088U) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x181 = 77326;
	int8_t x182 = -62;
	uint64_t t23 = 614575662026LLU;

	t23 = ((x181*x182)&(x183*x184));

	if (t23 != 18446744073704718340LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x189 = UINT64_MAX;
	uint32_t x190 = UINT32_MAX;
	uint16_t x192 = 312U;
	uint64_t t24 = 3810710227070LLU;

	t24 = ((x189*x190)&(x191*x192));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x193 = 5087265U;
	int16_t x194 = INT16_MAX;
	uint32_t x195 = 2045873849U;
	volatile int8_t x196 = INT8_MIN;
	volatile uint32_t t25 = 40333139U;

	t25 = ((x193*x194)&(x195*x196));

	if (t25 != 117474176U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x205 = UINT64_MAX;
	static int8_t x206 = 21;
	uint32_t x208 = UINT32_MAX;
	uint64_t t26 = 233LLU;

	t26 = ((x205*x206)&(x207*x208));

	if (t26 != 18418408117175102307LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x217 = INT32_MAX;
	int16_t x218 = -1;
	static volatile uint8_t x219 = 1U;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t27 = 428150004;

	t27 = ((x217*x218)&(x219*x220));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x221 = -3459;
	int64_t x222 = -50401LL;
	int16_t x223 = INT16_MIN;
	static int32_t x224 = -1;
	volatile int64_t t28 = -113229743144659LL;

	t28 = ((x221*x222)&(x223*x224));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x232 = 0U;

	t29 = ((x229*x230)&(x231*x232));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x241 = INT16_MIN;
	int32_t x242 = -1;
	uint64_t x243 = 1691LLU;
	int32_t x244 = INT32_MIN;
	static volatile uint64_t t30 = 619858LLU;

	t30 = ((x241*x242)&(x243*x244));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x253 = INT16_MAX;
	volatile int32_t x254 = -1;
	uint8_t x255 = 0U;
	uint32_t x256 = 201U;
	volatile uint32_t t31 = 114U;

	t31 = ((x253*x254)&(x255*x256));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x261 = 1;
	int32_t x262 = INT32_MAX;
	static uint32_t x264 = 2U;

	t32 = ((x261*x262)&(x263*x264));

	if (t32 != 15020U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x269 = INT32_MIN;
	uint32_t x270 = UINT32_MAX;
	static volatile int8_t x271 = -1;

	t33 = ((x269*x270)&(x271*x272));

	if (t33 != 2147483648LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x273 = -1;
	uint16_t x274 = 32U;
	static int32_t x275 = 0;
	int32_t t34 = 12558;

	t34 = ((x273*x274)&(x275*x276));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x278 = 10714913;
	volatile int8_t x279 = INT8_MAX;
	uint16_t x280 = UINT16_MAX;
	uint32_t t35 = 6440767U;

	t35 = ((x277*x278)&(x279*x280));

	if (t35 != 3340033U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x281 = 6104843U;
	static uint64_t x283 = 4235832810480653LLU;
	static uint16_t x284 = 196U;
	uint64_t t36 = 9006759564157LLU;

	t36 = ((x281*x282)&(x283*x284));

	if (t36 != 36459943826718912LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x293 = INT16_MIN;
	volatile uint8_t x294 = 4U;
	volatile uint16_t x295 = UINT16_MAX;
	static volatile int16_t x296 = INT16_MIN;
	volatile int32_t t37 = INT32_MIN;

	t37 = ((x293*x294)&(x295*x296));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x297 = 10U;
	int8_t x298 = 1;
	int32_t x299 = -1;
	static int16_t x300 = INT16_MIN;
	volatile int32_t t38 = 231886;

	t38 = ((x297*x298)&(x299*x300));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x301 = UINT8_MAX;
	volatile uint16_t x302 = 3624U;
	int16_t x303 = INT16_MIN;
	int64_t x304 = 7518715523787LL;

	t39 = ((x301*x302)&(x303*x304));

	if (t39 != 655360LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x305 = 10U;
	uint8_t x306 = 126U;
	uint8_t x308 = UINT8_MAX;
	int32_t t40 = 1114;

	t40 = ((x305*x306)&(x307*x308));

	if (t40 != 1024) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x309 = 15713U;
	int8_t x310 = -6;
	volatile uint64_t x311 = 243280894108745828LLU;
	int8_t x312 = INT8_MIN;
	uint64_t t41 = 131626377724092390LLU;

	t41 = ((x309*x310)&(x311*x312));

	if (t41 != 5753533701499555328LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x317 = INT16_MIN;
	uint16_t x319 = 10U;
	int32_t t42 = 18996161;

	t42 = ((x317*x318)&(x319*x320));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x341 = 4U;
	volatile int16_t x342 = INT16_MAX;
	int8_t x343 = 1;
	static int16_t x344 = INT16_MIN;
	static int32_t t43 = -1658595;

	t43 = ((x341*x342)&(x343*x344));

	if (t43 != 98304) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x369 = -1;
	uint32_t x370 = 2146384U;
	int8_t x372 = -1;
	static volatile uint32_t t44 = 49488053U;

	t44 = ((x369*x370)&(x371*x372));

	if (t44 != 4292820912U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x378 = -1;
	static int32_t x380 = -1;
	static volatile int32_t t45 = 461579066;

	t45 = ((x377*x378)&(x379*x380));

	if (t45 != -65535) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x393 = INT32_MAX;
	volatile uint16_t x395 = 26442U;
	static volatile int8_t x396 = 1;
	static uint32_t t46 = 1U;

	t46 = ((x393*x394)&(x395*x396));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x409 = UINT8_MAX;
	static uint32_t x410 = 165627308U;
	int16_t x411 = 9;
	int16_t x412 = INT16_MIN;
	volatile uint32_t t47 = 2U;

	t47 = ((x409*x410)&(x411*x412));

	if (t47 != 3579969536U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x413 = 6111888755186LLU;
	uint64_t t48 = 714150675506LLU;

	t48 = ((x413*x414)&(x415*x416));

	if (t48 != 18410451876328772096LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x417 = INT16_MIN;
	int32_t x419 = 14976507;
	int64_t x420 = -1LL;
	int64_t t49 = -29089LL;

	t49 = ((x417*x418)&(x419*x420));

	if (t49 != -1073741824LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x423 = -51;
	int16_t x424 = INT16_MIN;
	volatile int64_t t50 = 226LL;

	t50 = ((x421*x422)&(x423*x424));

	if (t50 != 1081344LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x425 = 0U;
	int32_t x426 = -1;
	uint32_t x427 = 16394642U;
	int8_t x428 = INT8_MIN;
	static volatile uint32_t t51 = 777703U;

	t51 = ((x425*x426)&(x427*x428));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x429 = INT16_MAX;
	int8_t x431 = INT8_MAX;
	volatile int16_t x432 = -7;
	int64_t t52 = -1LL;

	t52 = ((x429*x430)&(x431*x432));

	if (t52 != -1243310950267LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x437 = UINT8_MAX;
	volatile uint8_t x438 = UINT8_MAX;
	int64_t x439 = -4293031726365LL;
	static int32_t x440 = 0;

	t53 = ((x437*x438)&(x439*x440));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x449 = -1;
	int8_t x450 = -1;
	volatile int16_t x452 = INT16_MAX;

	t54 = ((x449*x450)&(x451*x452));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x462 = -1;
	int8_t x463 = INT8_MAX;
	uint64_t x464 = UINT64_MAX;

	t55 = ((x461*x462)&(x463*x464));

	if (t55 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x465 = UINT8_MAX;
	int32_t x466 = -1;
	static volatile int32_t x467 = 3102926;
	uint64_t x468 = 1827875494630099242LLU;

	t56 = ((x465*x466)&(x467*x468));

	if (t56 != 15783683414323416832LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x469 = UINT32_MAX;
	static uint8_t x470 = 89U;
	uint8_t x471 = 3U;
	static int16_t x472 = INT16_MAX;
	volatile uint32_t t57 = 40266U;

	t57 = ((x469*x470)&(x471*x472));

	if (t57 != 98213U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x473 = UINT32_MAX;
	int8_t x474 = INT8_MIN;
	int8_t x475 = -4;
	int16_t x476 = 998;
	uint32_t t58 = 34742U;

	t58 = ((x473*x474)&(x475*x476));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x477 = -57;
	int16_t x478 = -1;
	int8_t x480 = -1;
	int64_t t59 = 9057837025236749LL;

	t59 = ((x477*x478)&(x479*x480));

	if (t59 != 25LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x485 = -1;
	uint32_t x486 = UINT32_MAX;
	uint32_t x487 = UINT32_MAX;
	volatile uint16_t x488 = 537U;
	volatile uint32_t t60 = 23U;

	t60 = ((x485*x486)&(x487*x488));

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x489 = -12;
	int8_t x490 = 2;
	uint32_t x491 = 8311920U;
	uint32_t t61 = 353256U;

	t61 = ((x489*x490)&(x491*x492));

	if (t61 != 3358328704U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x497 = INT8_MIN;
	int64_t x498 = 294LL;
	static uint8_t x499 = 15U;
	volatile uint32_t x500 = UINT32_MAX;

	t62 = ((x497*x498)&(x499*x500));

	if (t62 != 4294929664LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x509 = INT32_MAX;
	uint8_t x510 = 1U;
	int8_t x511 = INT8_MIN;
	volatile int32_t t63 = 312;

	t63 = ((x509*x510)&(x511*x512));

	if (t63 != 16384) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x517 = -217454199LL;
	uint64_t x518 = UINT64_MAX;
	uint16_t x519 = 12U;

	t64 = ((x517*x518)&(x519*x520));

	if (t64 != 217454196LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x522 = INT16_MAX;
	static uint32_t x524 = 142000212U;
	volatile uint32_t t65 = 36067U;

	t65 = ((x521*x522)&(x523*x524));

	if (t65 != 739246080U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x527 = 20U;
	volatile uint32_t t66 = 3353U;

	t66 = ((x525*x526)&(x527*x528));

	if (t66 != 428U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x530 = INT16_MAX;
	uint32_t x532 = 62450555U;

	t67 = ((x529*x530)&(x531*x532));

	if (t67 != 267393U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x537 = INT8_MAX;
	static volatile uint64_t x538 = 5LLU;
	static int8_t x539 = INT8_MAX;
	int16_t x540 = INT16_MIN;
	uint64_t t68 = 97442LLU;

	t68 = ((x537*x538)&(x539*x540));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x542 = INT16_MAX;
	int32_t x543 = -1;
	volatile int64_t x544 = INT64_MAX;
	int64_t t69 = 23241LL;

	t69 = ((x541*x542)&(x543*x544));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x549 = 4U;
	int8_t x550 = INT8_MAX;
	volatile uint32_t x551 = 12U;
	int16_t x552 = INT16_MIN;
	uint32_t t70 = 316U;

	t70 = ((x549*x550)&(x551*x552));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x561 = 30577522573111LLU;
	int8_t x562 = INT8_MIN;
	static int64_t x563 = 471248557632923978LL;
	uint64_t t71 = 1519647LLU;

	t71 = ((x561*x562)&(x563*x564));

	if (t71 != 468954906884055040LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x581 = INT32_MIN;
	volatile int64_t x583 = -43LL;
	int32_t x584 = -1;
	uint64_t t72 = 1015239857LLU;

	t72 = ((x581*x582)&(x583*x584));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x585 = INT32_MAX;
	int16_t x587 = -1;
	int8_t x588 = -1;
	int32_t t73 = -1788;

	t73 = ((x585*x586)&(x587*x588));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x589 = UINT32_MAX;
	static int32_t x590 = -1;
	static int8_t x591 = -1;
	int16_t x592 = -1;
	uint32_t t74 = 831U;

	t74 = ((x589*x590)&(x591*x592));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x593 = -12873;
	volatile uint8_t x594 = 1U;
	int16_t x595 = -1;
	int32_t t75 = -7000715;

	t75 = ((x593*x594)&(x595*x596));

	if (t75 != -13951) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x617 = INT16_MIN;
	volatile uint32_t x618 = UINT32_MAX;
	int32_t x619 = 257201;
	int64_t x620 = -73LL;
	int64_t t76 = 7645486060669LL;

	t76 = ((x617*x618)&(x619*x620));

	if (t76 != 32768LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x621 = 456756471;
	int64_t x622 = -615LL;
	static volatile uint64_t x623 = UINT64_MAX;
	int64_t x624 = -1LL;
	static uint64_t t77 = 27168LLU;

	t77 = ((x621*x622)&(x623*x624));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x653 = 1U;
	int32_t x654 = INT32_MAX;
	uint64_t x655 = 9466743304934957LLU;
	static int8_t x656 = -1;
	static volatile uint64_t t78 = 2992890LLU;

	t78 = ((x653*x654)&(x655*x656));

	if (t78 != 270608851LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x673 = 4925U;
	volatile int16_t x674 = INT16_MIN;
	uint64_t x676 = UINT64_MAX;
	volatile uint64_t t79 = 3435801312LLU;

	t79 = ((x673*x674)&(x675*x676));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x677 = 8114742U;
	int16_t x678 = INT16_MIN;
	static int8_t x679 = -7;
	static int64_t x680 = -1LL;
	int64_t t80 = -309324620LL;

	t80 = ((x677*x678)&(x679*x680));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x685 = INT8_MIN;
	uint32_t x686 = UINT32_MAX;
	static uint16_t x687 = 0U;
	volatile int64_t x688 = -1LL;
	volatile int64_t t81 = -989803697LL;

	t81 = ((x685*x686)&(x687*x688));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x709 = 414641043547239LLU;
	int32_t x710 = INT32_MAX;
	int64_t x711 = -1LL;
	int64_t x712 = 1LL;
	volatile uint64_t t82 = 15LLU;

	t82 = ((x709*x710)&(x711*x712));

	if (t82 != 10523954750567996313LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x717 = UINT64_MAX;
	volatile int16_t x719 = 43;
	uint16_t x720 = 609U;
	static uint64_t t83 = 386853181850401613LLU;

	t83 = ((x717*x718)&(x719*x720));

	if (t83 != 9802LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x721 = -10;
	volatile uint32_t t84 = 1326531836U;

	t84 = ((x721*x722)&(x723*x724));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x726 = -1LL;
	static uint8_t x727 = 3U;
	volatile int16_t x728 = 23;
	int64_t t85 = -7808LL;

	t85 = ((x725*x726)&(x727*x728));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x741 = 0U;
	uint64_t x743 = UINT64_MAX;
	static int8_t x744 = INT8_MIN;
	volatile uint64_t t86 = 23938LLU;

	t86 = ((x741*x742)&(x743*x744));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x745 = INT16_MIN;
	uint16_t x746 = 16062U;
	volatile int16_t x747 = INT16_MIN;
	int32_t t87 = 0;

	t87 = ((x745*x746)&(x747*x748));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x753 = UINT32_MAX;
	uint32_t x754 = UINT32_MAX;
	uint64_t x755 = 64919526169164LLU;
	uint32_t x756 = 1655U;
	uint64_t t88 = 42519520422675LLU;

	t88 = ((x753*x754)&(x755*x756));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x761 = INT64_MAX;
	int32_t x762 = -1;
	static int16_t x763 = INT16_MIN;
	int16_t x764 = INT16_MIN;

	t89 = ((x761*x762)&(x763*x764));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x766 = 0U;
	int64_t x767 = -1LL;
	uint8_t x768 = 2U;
	int64_t t90 = -231515611963393730LL;

	t90 = ((x765*x766)&(x767*x768));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x770 = INT8_MIN;
	volatile int64_t x771 = -1LL;
	volatile int32_t x772 = -5217;
	int64_t t91 = 127145185382LL;

	t91 = ((x769*x770)&(x771*x772));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x774 = INT16_MAX;
	int8_t x775 = INT8_MIN;
	uint64_t t92 = 5LLU;

	t92 = ((x773*x774)&(x775*x776));

	if (t92 != 6272LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x777 = 36;
	int8_t x779 = INT8_MAX;
	uint16_t x780 = 22012U;
	volatile uint64_t t93 = 3449730991406479LLU;

	t93 = ((x777*x778)&(x779*x780));

	if (t93 != 2656260LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x793 = INT16_MAX;
	int8_t x794 = 0;
	static int8_t x795 = INT8_MIN;
	uint8_t x796 = 91U;
	volatile int32_t t94 = -10160;

	t94 = ((x793*x794)&(x795*x796));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x797 = 213004U;
	static uint64_t x798 = 16779110861934388LLU;
	volatile uint32_t x799 = UINT32_MAX;
	volatile int16_t x800 = -1;
	uint64_t t95 = 423433010643205641LLU;

	t95 = ((x797*x798)&(x799*x800));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x810 = INT8_MIN;
	int64_t x811 = 8477616179LL;
	volatile uint64_t x812 = 3396157LLU;
	volatile uint64_t t96 = 155462259LLU;

	t96 = ((x809*x810)&(x811*x812));

	if (t96 != 28719845046493184LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x813 = 7U;
	static uint64_t x815 = 115228603286891382LLU;
	int16_t x816 = -1;
	uint64_t t97 = 94165021LLU;

	t97 = ((x813*x814)&(x815*x816));

	if (t97 != 10LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x817 = 1U;
	uint8_t x819 = 0U;
	int16_t x820 = INT16_MIN;
	int64_t t98 = 1677660549LL;

	t98 = ((x817*x818)&(x819*x820));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x825 = INT8_MIN;
	int16_t x826 = 2;

	t99 = ((x825*x826)&(x827*x828));

	if (t99 != -1733632) { NG(); } else { ; }
	
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

