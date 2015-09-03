#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x10 = 44U;
static int64_t x22 = -131833981215LL;
uint32_t x25 = UINT32_MAX;
static uint64_t t5 = 5595777542LLU;
static int16_t x39 = 374;
int8_t x45 = INT8_MAX;
static int32_t t7 = 893167;
uint16_t x56 = 0U;
int8_t x95 = 0;
int64_t x96 = INT64_MIN;
int32_t t11 = -4;
uint8_t x109 = 84U;
int16_t x114 = INT16_MIN;
static int8_t x115 = -1;
uint8_t x116 = 108U;
int16_t x120 = -798;
int32_t x145 = INT32_MAX;
int64_t x147 = INT64_MIN;
volatile uint8_t x173 = 0U;
int32_t x174 = INT32_MIN;
int8_t x175 = INT8_MIN;
uint8_t x176 = 14U;
uint32_t x180 = 3397U;
int16_t x185 = 17;
int8_t x187 = INT8_MIN;
int16_t x194 = 1446;
uint16_t x199 = 692U;
static volatile int64_t x206 = -1LL;
int64_t x210 = INT64_MAX;
uint32_t x219 = 3097496U;
static int32_t t26 = -22933204;
static int32_t x243 = -1;
int16_t x248 = INT16_MIN;
volatile int32_t t30 = -58474;
uint32_t x255 = UINT32_MAX;
volatile uint32_t t31 = 29U;
uint16_t x257 = 5U;
int8_t x258 = INT8_MAX;
int32_t x266 = INT32_MAX;
uint8_t x267 = 1U;
static int16_t x269 = 16;
volatile int8_t x270 = -1;
int8_t x271 = -1;
uint64_t t36 = 8174LLU;
int8_t x286 = INT8_MIN;
uint32_t x297 = 244214U;
uint16_t x325 = 15U;
volatile int32_t t42 = -2012007;
int32_t x363 = 5845;
volatile int8_t x400 = 3;
uint16_t x407 = UINT16_MAX;
volatile uint32_t x409 = UINT32_MAX;
uint64_t x413 = 98LLU;
int32_t x414 = INT32_MAX;
int8_t x418 = INT8_MIN;
static int64_t x422 = -1LL;
volatile int32_t x423 = INT32_MAX;
uint16_t x440 = 3218U;
volatile int32_t t56 = 22335717;
uint32_t x461 = 29387U;
uint8_t x463 = 1U;
uint32_t t57 = 254237622U;
int32_t t58 = -22;
uint64_t x474 = 41493LLU;
int64_t x480 = INT64_MAX;
static volatile int32_t t60 = 3;
int16_t x497 = INT16_MAX;
static uint16_t x501 = 48U;
volatile uint16_t x504 = UINT16_MAX;
volatile uint64_t t63 = UINT64_MAX;
volatile uint64_t x533 = 122972275LLU;
volatile int8_t x545 = 0;
static uint8_t x549 = UINT8_MAX;
volatile uint64_t x554 = 0LLU;
static uint32_t x572 = 588U;
uint32_t x581 = 400U;
int16_t x583 = INT16_MIN;
static int16_t x586 = -1;
volatile int8_t x608 = -11;
static int16_t x612 = -65;
int64_t x615 = -1LL;
volatile int32_t t78 = INT32_MAX;
static int32_t x644 = INT32_MIN;
int16_t x666 = -85;
volatile int32_t t86 = 28;
int8_t x674 = 20;
int32_t t87 = -144;
uint16_t x682 = UINT16_MAX;
int32_t x683 = 140882882;
int32_t t89 = -2526;
volatile int8_t x686 = INT8_MIN;
int16_t x693 = 10039;
static uint16_t x696 = UINT16_MAX;
static volatile int32_t t91 = 802657268;
int64_t x716 = -5001230409694LL;
int32_t x722 = -1;
uint64_t t94 = 13LLU;
static int16_t x726 = INT16_MIN;
int32_t x728 = INT32_MIN;
static volatile uint8_t x742 = UINT8_MAX;
uint64_t x756 = 339661LLU;


void f0(void) {
	uint32_t x5 = 1U;
	static int64_t x6 = -1LL;
	uint32_t x7 = UINT32_MAX;
	int16_t x8 = INT16_MIN;
	uint32_t t0 = 3577U;

	t0 = (x5>>((x6^x7)==x8));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 26U;
	static int64_t x11 = INT64_MAX;
	uint16_t x12 = 4666U;
	int32_t t1 = 1;

	t1 = (x9>>((x10^x11)==x12));

	if (t1 != 26) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = 1;
	uint32_t x23 = UINT32_MAX;
	volatile int32_t x24 = 28188149;
	int32_t t2 = -3;

	t2 = (x21>>((x22^x23)==x24));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x26 = UINT8_MAX;
	volatile int64_t x27 = INT64_MIN;
	int32_t x28 = INT32_MIN;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = (x25>>((x26^x27)==x28));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x29 = UINT16_MAX;
	int32_t x30 = INT32_MIN;
	int32_t x31 = 201155;
	int8_t x32 = 0;
	volatile int32_t t4 = 484;

	t4 = (x29>>((x30^x31)==x32));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x33 = 737915LLU;
	int32_t x34 = 52760;
	int32_t x35 = -1;
	int64_t x36 = INT64_MIN;

	t5 = (x33>>((x34^x35)==x36));

	if (t5 != 737915LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = 135210;
	uint32_t x38 = UINT32_MAX;
	volatile uint64_t x40 = 55255LLU;
	static volatile int32_t t6 = 774;

	t6 = (x37>>((x38^x39)==x40));

	if (t6 != 135210) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x46 = INT16_MIN;
	int32_t x47 = -1;
	static int32_t x48 = INT32_MIN;

	t7 = (x45>>((x46^x47)==x48));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x53 = 13700586595LLU;
	static volatile int64_t x54 = INT64_MIN;
	int16_t x55 = -11;
	volatile uint64_t t8 = 271256538219563313LLU;

	t8 = (x53>>((x54^x55)==x56));

	if (t8 != 13700586595LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x65 = 197929U;
	static int8_t x66 = -1;
	int32_t x67 = -1;
	volatile int64_t x68 = INT64_MIN;
	volatile uint32_t t9 = 10009U;

	t9 = (x65>>((x66^x67)==x68));

	if (t9 != 197929U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x73 = 1;
	int32_t x74 = INT32_MIN;
	volatile int32_t x75 = -1;
	int32_t x76 = INT32_MIN;
	volatile int32_t t10 = -4189;

	t10 = (x73>>((x74^x75)==x76));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x93 = INT32_MAX;
	volatile int64_t x94 = INT64_MIN;

	t11 = (x93>>((x94^x95)==x96));

	if (t11 != 1073741823) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x110 = INT64_MIN;
	static volatile uint32_t x111 = 1852U;
	volatile int64_t x112 = INT64_MAX;
	volatile int32_t t12 = 807;

	t12 = (x109>>((x110^x111)==x112));

	if (t12 != 84) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x113 = 442305212531LLU;
	static uint64_t t13 = 8365581LLU;

	t13 = (x113>>((x114^x115)==x116));

	if (t13 != 442305212531LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x117 = 10195623502859LLU;
	int32_t x118 = INT32_MIN;
	int16_t x119 = -1;
	static volatile uint64_t t14 = 4627593927681LLU;

	t14 = (x117>>((x118^x119)==x120));

	if (t14 != 10195623502859LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x137 = 0U;
	static uint64_t x138 = UINT64_MAX;
	int8_t x139 = 0;
	int64_t x140 = -6076LL;
	volatile int32_t t15 = -638809;

	t15 = (x137>>((x138^x139)==x140));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x141 = UINT8_MAX;
	uint64_t x142 = 1866469473398LLU;
	int32_t x143 = INT32_MIN;
	static int32_t x144 = -1;
	int32_t t16 = 40;

	t16 = (x141>>((x142^x143)==x144));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x146 = UINT64_MAX;
	static uint16_t x148 = 2595U;
	int32_t t17 = INT32_MAX;

	t17 = (x145>>((x146^x147)==x148));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t t18 = -2;

	t18 = (x173>>((x174^x175)==x176));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x177 = UINT64_MAX;
	uint64_t x178 = UINT64_MAX;
	int32_t x179 = -1645756;
	uint64_t t19 = UINT64_MAX;

	t19 = (x177>>((x178^x179)==x180));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x186 = INT32_MIN;
	int32_t x188 = -1;
	static int32_t t20 = 1;

	t20 = (x185>>((x186^x187)==x188));

	if (t20 != 17) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x193 = 0U;
	static int32_t x195 = 439185;
	volatile uint32_t x196 = 43887938U;
	static int32_t t21 = -978176;

	t21 = (x193>>((x194^x195)==x196));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x197 = INT16_MAX;
	volatile int8_t x198 = 0;
	uint16_t x200 = 264U;
	static int32_t t22 = -969176495;

	t22 = (x197>>((x198^x199)==x200));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x205 = 8113401272318667LL;
	uint8_t x207 = 1U;
	uint8_t x208 = UINT8_MAX;
	int64_t t23 = 206LL;

	t23 = (x205>>((x206^x207)==x208));

	if (t23 != 8113401272318667LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x209 = UINT16_MAX;
	static uint16_t x211 = 279U;
	static int16_t x212 = -1;
	int32_t t24 = -1;

	t24 = (x209>>((x210^x211)==x212));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x213 = UINT64_MAX;
	volatile int8_t x214 = INT8_MAX;
	uint32_t x215 = UINT32_MAX;
	uint16_t x216 = 3578U;
	static volatile uint64_t t25 = UINT64_MAX;

	t25 = (x213>>((x214^x215)==x216));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x217 = UINT8_MAX;
	volatile uint16_t x218 = 412U;
	int8_t x220 = -1;

	t26 = (x217>>((x218^x219)==x220));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x233 = INT32_MAX;
	volatile int16_t x234 = INT16_MIN;
	int64_t x235 = INT64_MIN;
	static uint64_t x236 = UINT64_MAX;
	int32_t t27 = INT32_MAX;

	t27 = (x233>>((x234^x235)==x236));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x241 = INT32_MAX;
	int16_t x242 = 1;
	int8_t x244 = INT8_MIN;
	int32_t t28 = INT32_MAX;

	t28 = (x241>>((x242^x243)==x244));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x245 = 64U;
	static int64_t x246 = INT64_MIN;
	static int32_t x247 = 2824;
	static int32_t t29 = 1;

	t29 = (x245>>((x246^x247)==x248));

	if (t29 != 64) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x249 = 15U;
	volatile int8_t x250 = INT8_MIN;
	uint8_t x251 = UINT8_MAX;
	volatile int16_t x252 = -1;

	t30 = (x249>>((x250^x251)==x252));

	if (t30 != 15) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x253 = 1679U;
	uint32_t x254 = UINT32_MAX;
	static volatile uint64_t x256 = UINT64_MAX;

	t31 = (x253>>((x254^x255)==x256));

	if (t31 != 1679U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x259 = -3158;
	int16_t x260 = INT16_MAX;
	volatile int32_t t32 = -113;

	t32 = (x257>>((x258^x259)==x260));

	if (t32 != 5) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x261 = 43U;
	int8_t x262 = INT8_MIN;
	int32_t x263 = INT32_MIN;
	int16_t x264 = -24;
	static volatile int32_t t33 = -1;

	t33 = (x261>>((x262^x263)==x264));

	if (t33 != 43) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x265 = INT32_MAX;
	int8_t x268 = -1;
	int32_t t34 = INT32_MAX;

	t34 = (x265>>((x266^x267)==x268));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x272 = INT32_MIN;
	int32_t t35 = -4231;

	t35 = (x269>>((x270^x271)==x272));

	if (t35 != 16) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x273 = 679049194924LLU;
	int64_t x274 = 3352732414472LL;
	static uint16_t x275 = 1U;
	static uint8_t x276 = 2U;

	t36 = (x273>>((x274^x275)==x276));

	if (t36 != 679049194924LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x277 = 845882984575LLU;
	int16_t x278 = INT16_MAX;
	uint64_t x279 = 2472176233430543LLU;
	int32_t x280 = 436;
	uint64_t t37 = 69309474247703979LLU;

	t37 = (x277>>((x278^x279)==x280));

	if (t37 != 845882984575LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x285 = 1907U;
	int8_t x287 = 62;
	static int16_t x288 = INT16_MAX;
	static uint32_t t38 = 28031725U;

	t38 = (x285>>((x286^x287)==x288));

	if (t38 != 1907U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x293 = INT16_MAX;
	uint32_t x294 = UINT32_MAX;
	uint64_t x295 = 258859486805569646LLU;
	static volatile int16_t x296 = -203;
	int32_t t39 = -278418;

	t39 = (x293>>((x294^x295)==x296));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x298 = 14LLU;
	volatile int8_t x299 = -1;
	int32_t x300 = INT32_MAX;
	uint32_t t40 = 1016148227U;

	t40 = (x297>>((x298^x299)==x300));

	if (t40 != 244214U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x309 = UINT32_MAX;
	int64_t x310 = INT64_MIN;
	int16_t x311 = -43;
	volatile int64_t x312 = 186174585LL;
	uint32_t t41 = UINT32_MAX;

	t41 = (x309>>((x310^x311)==x312));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MIN;
	int32_t x328 = 95;

	t42 = (x325>>((x326^x327)==x328));

	if (t42 != 15) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x341 = 1733U;
	int64_t x342 = INT64_MAX;
	static uint16_t x343 = 38U;
	int64_t x344 = INT64_MIN;
	volatile uint32_t t43 = 72119979U;

	t43 = (x341>>((x342^x343)==x344));

	if (t43 != 1733U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x349 = 1U;
	static uint32_t x350 = 6572U;
	uint16_t x351 = UINT16_MAX;
	volatile int16_t x352 = INT16_MIN;
	int32_t t44 = -41353;

	t44 = (x349>>((x350^x351)==x352));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x357 = 106;
	uint8_t x358 = 3U;
	int64_t x359 = -528254706108076438LL;
	static int64_t x360 = INT64_MIN;
	int32_t t45 = -41638010;

	t45 = (x357>>((x358^x359)==x360));

	if (t45 != 106) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x361 = UINT64_MAX;
	uint64_t x362 = 12830096027LLU;
	int32_t x364 = INT32_MAX;
	uint64_t t46 = UINT64_MAX;

	t46 = (x361>>((x362^x363)==x364));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x385 = 56896664449646LLU;
	static volatile int64_t x386 = -1LL;
	int16_t x387 = INT16_MAX;
	uint16_t x388 = 757U;
	volatile uint64_t t47 = 1250LLU;

	t47 = (x385>>((x386^x387)==x388));

	if (t47 != 56896664449646LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x397 = 1;
	int8_t x398 = INT8_MIN;
	int64_t x399 = -5545336819412102LL;
	volatile int32_t t48 = -53;

	t48 = (x397>>((x398^x399)==x400));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x405 = 404U;
	static volatile int16_t x406 = -14587;
	int64_t x408 = 23028365376471511LL;
	uint32_t t49 = 240460U;

	t49 = (x405>>((x406^x407)==x408));

	if (t49 != 404U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x410 = 19515992;
	int16_t x411 = 2003;
	uint16_t x412 = 89U;
	static volatile uint32_t t50 = UINT32_MAX;

	t50 = (x409>>((x410^x411)==x412));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x415 = -610588LL;
	static int32_t x416 = INT32_MAX;
	volatile uint64_t t51 = 153698039LLU;

	t51 = (x413>>((x414^x415)==x416));

	if (t51 != 98LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x417 = 2U;
	uint32_t x419 = 2133U;
	int32_t x420 = INT32_MIN;
	int32_t t52 = 946558559;

	t52 = (x417>>((x418^x419)==x420));

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x421 = INT16_MAX;
	static int32_t x424 = INT32_MIN;
	static int32_t t53 = 57165672;

	t53 = (x421>>((x422^x423)==x424));

	if (t53 != 16383) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x437 = UINT64_MAX;
	static volatile int16_t x438 = -1;
	static int64_t x439 = -5503302LL;
	uint64_t t54 = UINT64_MAX;

	t54 = (x437>>((x438^x439)==x440));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x441 = UINT64_MAX;
	int64_t x442 = 58948969635807355LL;
	uint64_t x443 = 218826245721302LLU;
	static volatile int8_t x444 = 1;
	uint64_t t55 = UINT64_MAX;

	t55 = (x441>>((x442^x443)==x444));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x449 = 95U;
	uint64_t x450 = 127226502431LLU;
	int16_t x451 = INT16_MIN;
	volatile int8_t x452 = -55;

	t56 = (x449>>((x450^x451)==x452));

	if (t56 != 95) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x462 = INT32_MIN;
	uint32_t x464 = UINT32_MAX;

	t57 = (x461>>((x462^x463)==x464));

	if (t57 != 29387U) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x465 = 0;
	int16_t x466 = -1;
	uint64_t x467 = 16380383085730LLU;
	static volatile int16_t x468 = INT16_MIN;

	t58 = (x465>>((x466^x467)==x468));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x473 = INT64_MAX;
	uint8_t x475 = 1U;
	int16_t x476 = INT16_MIN;
	volatile int64_t t59 = INT64_MAX;

	t59 = (x473>>((x474^x475)==x476));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x477 = INT8_MAX;
	static int32_t x478 = INT32_MAX;
	uint64_t x479 = 1LLU;

	t60 = (x477>>((x478^x479)==x480));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x498 = 28084U;
	int64_t x499 = INT64_MAX;
	int16_t x500 = INT16_MAX;
	int32_t t61 = 859929;

	t61 = (x497>>((x498^x499)==x500));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x502 = 109838319998LL;
	int32_t x503 = -72763;
	static volatile int32_t t62 = -14327;

	t62 = (x501>>((x502^x503)==x504));

	if (t62 != 48) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x517 = UINT64_MAX;
	static int64_t x518 = -1LL;
	volatile uint8_t x519 = 105U;
	int16_t x520 = 1768;

	t63 = (x517>>((x518^x519)==x520));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x534 = 0;
	static int32_t x535 = INT32_MIN;
	int16_t x536 = 1;
	volatile uint64_t t64 = 15370350374742LLU;

	t64 = (x533>>((x534^x535)==x536));

	if (t64 != 122972275LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x546 = -1LL;
	static int64_t x547 = -1LL;
	uint16_t x548 = 15361U;
	int32_t t65 = 520200271;

	t65 = (x545>>((x546^x547)==x548));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x550 = -6733LL;
	static volatile int8_t x551 = -5;
	uint32_t x552 = UINT32_MAX;
	volatile int32_t t66 = 39;

	t66 = (x549>>((x550^x551)==x552));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x553 = 41024200U;
	uint16_t x555 = 9U;
	uint32_t x556 = UINT32_MAX;
	static uint32_t t67 = 8244003U;

	t67 = (x553>>((x554^x555)==x556));

	if (t67 != 41024200U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x557 = 260511390U;
	uint16_t x558 = UINT16_MAX;
	int8_t x559 = INT8_MAX;
	static int16_t x560 = INT16_MAX;
	uint32_t t68 = 1863736487U;

	t68 = (x557>>((x558^x559)==x560));

	if (t68 != 260511390U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x565 = 1U;
	int64_t x566 = -1LL;
	int8_t x567 = 22;
	int64_t x568 = INT64_MAX;
	volatile uint32_t t69 = 21981U;

	t69 = (x565>>((x566^x567)==x568));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x569 = 13110791515LL;
	static int16_t x570 = 74;
	uint64_t x571 = UINT64_MAX;
	static int64_t t70 = 52LL;

	t70 = (x569>>((x570^x571)==x572));

	if (t70 != 13110791515LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x577 = 125847959762LL;
	int64_t x578 = -1LL;
	int16_t x579 = INT16_MIN;
	int64_t x580 = -417282193LL;
	volatile int64_t t71 = -47391LL;

	t71 = (x577>>((x578^x579)==x580));

	if (t71 != 125847959762LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x582 = -32550039;
	uint16_t x584 = 28727U;
	uint32_t t72 = 7940U;

	t72 = (x581>>((x582^x583)==x584));

	if (t72 != 400U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x585 = 1893963859402939LLU;
	int64_t x587 = INT64_MAX;
	int32_t x588 = -1;
	static volatile uint64_t t73 = 3575864058034LLU;

	t73 = (x585>>((x586^x587)==x588));

	if (t73 != 1893963859402939LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x589 = 4U;
	int16_t x590 = INT16_MIN;
	volatile uint16_t x591 = 1U;
	volatile uint8_t x592 = UINT8_MAX;
	volatile int32_t t74 = 964396;

	t74 = (x589>>((x590^x591)==x592));

	if (t74 != 4) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x593 = 217375175293044LLU;
	int64_t x594 = -1LL;
	int64_t x595 = -1LL;
	int32_t x596 = -1;
	uint64_t t75 = 109563305099537940LLU;

	t75 = (x593>>((x594^x595)==x596));

	if (t75 != 217375175293044LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x605 = 4002314U;
	int8_t x606 = INT8_MAX;
	int64_t x607 = INT64_MAX;
	volatile uint32_t t76 = 71999397U;

	t76 = (x605>>((x606^x607)==x608));

	if (t76 != 4002314U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x609 = 1730835U;
	volatile uint64_t x610 = 1953624876256LLU;
	uint8_t x611 = UINT8_MAX;
	volatile uint32_t t77 = 4051U;

	t77 = (x609>>((x610^x611)==x612));

	if (t77 != 1730835U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x613 = INT32_MAX;
	static int64_t x614 = -4069121206114795LL;
	int16_t x616 = -1;

	t78 = (x613>>((x614^x615)==x616));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x625 = INT8_MAX;
	int64_t x626 = -1LL;
	static int8_t x627 = INT8_MIN;
	int16_t x628 = INT16_MIN;
	int32_t t79 = 952;

	t79 = (x625>>((x626^x627)==x628));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x637 = 213;
	static uint8_t x638 = 1U;
	uint8_t x639 = UINT8_MAX;
	static uint32_t x640 = 160U;
	static volatile int32_t t80 = -1351289;

	t80 = (x637>>((x638^x639)==x640));

	if (t80 != 213) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x641 = UINT32_MAX;
	int8_t x642 = INT8_MIN;
	int32_t x643 = INT32_MIN;
	uint32_t t81 = UINT32_MAX;

	t81 = (x641>>((x642^x643)==x644));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x645 = 0U;
	int16_t x646 = INT16_MIN;
	static uint32_t x647 = UINT32_MAX;
	volatile uint32_t x648 = 69U;
	volatile int32_t t82 = 249454;

	t82 = (x645>>((x646^x647)==x648));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x649 = INT16_MAX;
	int16_t x650 = -4697;
	int16_t x651 = 1089;
	static int8_t x652 = INT8_MAX;
	static int32_t t83 = -3673735;

	t83 = (x649>>((x650^x651)==x652));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x653 = UINT16_MAX;
	volatile int8_t x654 = 0;
	int32_t x655 = INT32_MIN;
	int64_t x656 = -3025258LL;
	int32_t t84 = -434;

	t84 = (x653>>((x654^x655)==x656));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x661 = 1;
	int8_t x662 = -1;
	static int16_t x663 = INT16_MAX;
	int32_t x664 = INT32_MIN;
	static volatile int32_t t85 = -7562712;

	t85 = (x661>>((x662^x663)==x664));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x665 = 28U;
	uint8_t x667 = UINT8_MAX;
	int32_t x668 = -829738;

	t86 = (x665>>((x666^x667)==x668));

	if (t86 != 28) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x673 = 3324;
	int64_t x675 = -1LL;
	int16_t x676 = 2;

	t87 = (x673>>((x674^x675)==x676));

	if (t87 != 3324) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x677 = 197354880081746085LLU;
	int16_t x678 = INT16_MIN;
	int8_t x679 = -4;
	int16_t x680 = INT16_MAX;
	uint64_t t88 = 36400581667601518LLU;

	t88 = (x677>>((x678^x679)==x680));

	if (t88 != 197354880081746085LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x681 = 3;
	int8_t x684 = INT8_MIN;

	t89 = (x681>>((x682^x683)==x684));

	if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x685 = UINT32_MAX;
	uint64_t x687 = 164887645LLU;
	volatile int16_t x688 = INT16_MIN;
	uint32_t t90 = UINT32_MAX;

	t90 = (x685>>((x686^x687)==x688));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x694 = 842LLU;
	uint8_t x695 = 35U;

	t91 = (x693>>((x694^x695)==x696));

	if (t91 != 10039) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x701 = 0;
	int16_t x702 = -1;
	uint16_t x703 = 104U;
	static int32_t x704 = INT32_MIN;
	volatile int32_t t92 = 370678204;

	t92 = (x701>>((x702^x703)==x704));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x713 = UINT32_MAX;
	int64_t x714 = INT64_MAX;
	volatile int32_t x715 = -1;
	static volatile uint32_t t93 = UINT32_MAX;

	t93 = (x713>>((x714^x715)==x716));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x721 = 7529LLU;
	int64_t x723 = -67LL;
	int32_t x724 = 11998350;

	t94 = (x721>>((x722^x723)==x724));

	if (t94 != 7529LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x725 = 2306U;
	volatile int64_t x727 = -427028813451867101LL;
	volatile int32_t t95 = 0;

	t95 = (x725>>((x726^x727)==x728));

	if (t95 != 2306) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x733 = UINT32_MAX;
	uint8_t x734 = 102U;
	int32_t x735 = INT32_MAX;
	uint64_t x736 = 54LLU;
	uint32_t t96 = UINT32_MAX;

	t96 = (x733>>((x734^x735)==x736));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x741 = UINT8_MAX;
	int64_t x743 = INT64_MIN;
	uint16_t x744 = 2543U;
	int32_t t97 = -2283;

	t97 = (x741>>((x742^x743)==x744));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x745 = 422866U;
	uint8_t x746 = 40U;
	volatile int32_t x747 = INT32_MIN;
	uint8_t x748 = 42U;
	static volatile uint32_t t98 = 368285704U;

	t98 = (x745>>((x746^x747)==x748));

	if (t98 != 422866U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x753 = UINT32_MAX;
	static uint16_t x754 = UINT16_MAX;
	uint64_t x755 = UINT64_MAX;
	static volatile uint32_t t99 = UINT32_MAX;

	t99 = (x753>>((x754^x755)==x756));

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

