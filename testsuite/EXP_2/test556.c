#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -9485;
int32_t x8 = 55432;
int32_t t1 = 66433037;
int16_t x18 = INT16_MAX;
int32_t x46 = INT32_MIN;
int32_t t5 = -311453;
int64_t x54 = INT64_MIN;
volatile int32_t t6 = -56253014;
int8_t x79 = -2;
int32_t t8 = -375959751;
volatile int64_t x94 = INT64_MIN;
uint8_t x95 = 7U;
uint16_t x121 = 278U;
int8_t x122 = INT8_MIN;
uint32_t x134 = 180549402U;
uint64_t x137 = 3372149LLU;
uint16_t x139 = 127U;
uint64_t x142 = UINT64_MAX;
int32_t t17 = 27947;
volatile int8_t x181 = INT8_MIN;
int64_t x184 = -1LL;
volatile int32_t t19 = 320652;
volatile int32_t t20 = -8167;
uint64_t x201 = UINT64_MAX;
static int64_t x204 = -1LL;
volatile int32_t t22 = 1348378;
uint16_t x209 = 42U;
uint16_t x224 = UINT16_MAX;
uint16_t x247 = 1530U;
volatile int64_t x248 = 28685LL;
int32_t x258 = INT32_MIN;
uint16_t x273 = 824U;
volatile int32_t x282 = INT32_MIN;
uint8_t x287 = UINT8_MAX;
int8_t x296 = INT8_MAX;
int32_t t40 = -13;
int8_t x317 = 14;
int16_t x318 = INT16_MAX;
uint8_t x319 = 119U;
uint16_t x349 = UINT16_MAX;
int32_t t42 = 4875;
static volatile int32_t t43 = 1;
int8_t x362 = INT8_MIN;
int32_t x363 = -1;
int32_t t45 = -38;
volatile int32_t x387 = INT32_MAX;
static int8_t x391 = INT8_MIN;
int8_t x439 = INT8_MIN;
int32_t x453 = INT32_MAX;
uint64_t x458 = 457LLU;
uint16_t x463 = UINT16_MAX;
static uint32_t x485 = 5U;
uint8_t x487 = 11U;
static int32_t t58 = -404;
volatile int32_t t59 = -764505;
uint16_t x498 = 5571U;
static volatile int8_t x505 = -4;
volatile int8_t x521 = 37;
int64_t x522 = INT64_MAX;
static int64_t x530 = -915LL;
static uint8_t x531 = 7U;
volatile int64_t x573 = INT64_MIN;
volatile int16_t x574 = INT16_MAX;
int64_t x576 = INT64_MIN;
static int32_t t67 = -7;
volatile int16_t x593 = INT16_MAX;
int16_t x610 = 9172;
uint64_t x612 = UINT64_MAX;
static volatile int32_t t69 = 98;
volatile uint8_t x616 = UINT8_MAX;
int32_t x622 = -320;
static volatile int16_t x625 = INT16_MIN;
volatile int32_t t72 = -106871;
static volatile int16_t x641 = INT16_MIN;
static volatile int8_t x644 = INT8_MIN;
uint16_t x650 = UINT16_MAX;
volatile int32_t t75 = -842133460;
uint32_t x654 = UINT32_MAX;
uint32_t x673 = 41578447U;
static int64_t x676 = -1LL;
volatile int32_t x677 = INT32_MIN;
int16_t x678 = INT16_MAX;
int64_t x682 = 923940013LL;
int16_t x686 = -1;
volatile int16_t x688 = INT16_MIN;
volatile int32_t t83 = -48757;
int16_t x700 = INT16_MIN;
volatile int32_t t84 = 585204793;
int8_t x714 = -3;
uint8_t x715 = 1U;
uint16_t x716 = UINT16_MAX;
static int32_t t87 = -1;
volatile int32_t x752 = INT32_MIN;
int64_t x765 = 85248688LL;
int32_t x766 = -1;
uint64_t x767 = UINT64_MAX;
static volatile int32_t t90 = 19;
static volatile int16_t x774 = INT16_MIN;
int8_t x782 = INT8_MIN;
int64_t x808 = INT64_MAX;
volatile int64_t x827 = INT64_MIN;
static int64_t x837 = -20568548LL;
uint8_t x839 = 1U;
int32_t x840 = INT32_MIN;


void f0(void) {
	int16_t x1 = INT16_MAX;
	uint16_t x2 = 520U;
	uint8_t x3 = 17U;
	uint64_t x4 = UINT64_MAX;

	t0 = ((x1/(x2/x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 2U;
	int16_t x6 = INT16_MIN;
	int32_t x7 = -1;

	t1 = ((x5/(x6/x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x17 = -1;
	volatile int8_t x19 = -6;
	int8_t x20 = -1;
	int32_t t2 = -65866;

	t2 = ((x17/(x18/x19))<=x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x37 = 23815U;
	int16_t x38 = INT16_MIN;
	int64_t x39 = -1LL;
	int16_t x40 = -1872;
	static int32_t t3 = -1;

	t3 = ((x37/(x38/x39))<=x40);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x41 = INT32_MAX;
	int8_t x42 = -1;
	static int8_t x43 = -1;
	int8_t x44 = INT8_MAX;
	int32_t t4 = -1;

	t4 = ((x41/(x42/x43))<=x44);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x45 = 14838149U;
	static volatile int16_t x47 = INT16_MIN;
	static int8_t x48 = -1;

	t5 = ((x45/(x46/x47))<=x48);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x53 = -1;
	int16_t x55 = INT16_MIN;
	int8_t x56 = -1;

	t6 = ((x53/(x54/x55))<=x56);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x69 = 43LLU;
	static int8_t x70 = INT8_MIN;
	int8_t x71 = INT8_MIN;
	int32_t x72 = INT32_MIN;
	int32_t t7 = -61;

	t7 = ((x69/(x70/x71))<=x72);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x77 = 0;
	int64_t x78 = INT64_MIN;
	volatile int32_t x80 = INT32_MIN;

	t8 = ((x77/(x78/x79))<=x80);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x85 = INT32_MAX;
	int32_t x86 = -1;
	int16_t x87 = -1;
	static volatile int64_t x88 = INT64_MIN;
	int32_t t9 = 93;

	t9 = ((x85/(x86/x87))<=x88);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x89 = -1;
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = -1LL;
	int8_t x92 = INT8_MIN;
	int32_t t10 = -2;

	t10 = ((x89/(x90/x91))<=x92);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x93 = INT32_MIN;
	int64_t x96 = INT64_MIN;
	int32_t t11 = -9486;

	t11 = ((x93/(x94/x95))<=x96);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x101 = UINT32_MAX;
	int16_t x102 = INT16_MIN;
	int8_t x103 = INT8_MIN;
	volatile int16_t x104 = INT16_MIN;
	static volatile int32_t t12 = -6;

	t12 = ((x101/(x102/x103))<=x104);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x117 = 1090LLU;
	static uint32_t x118 = 476166746U;
	uint32_t x119 = 89963644U;
	uint16_t x120 = 774U;
	volatile int32_t t13 = -1947528;

	t13 = ((x117/(x118/x119))<=x120);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x123 = 12;
	volatile int16_t x124 = -1;
	int32_t t14 = -71378538;

	t14 = ((x121/(x122/x123))<=x124);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x133 = 4517U;
	static uint32_t x135 = 23276349U;
	uint8_t x136 = UINT8_MAX;
	int32_t t15 = 985;

	t15 = ((x133/(x134/x135))<=x136);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x138 = 266616081U;
	static int8_t x140 = -1;
	static int32_t t16 = 0;

	t16 = ((x137/(x138/x139))<=x140);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x141 = -1;
	int8_t x143 = INT8_MIN;
	int64_t x144 = -38575740LL;

	t17 = ((x141/(x142/x143))<=x144);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x165 = INT32_MIN;
	int32_t x166 = INT32_MAX;
	volatile uint32_t x167 = 51U;
	int8_t x168 = -3;
	static int32_t t18 = 61510437;

	t18 = ((x165/(x166/x167))<=x168);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x182 = INT16_MIN;
	int32_t x183 = -1;

	t19 = ((x181/(x182/x183))<=x184);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x185 = -53;
	int64_t x186 = 32426418334586LL;
	uint32_t x187 = 36104815U;
	static int8_t x188 = -1;

	t20 = ((x185/(x186/x187))<=x188);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x193 = INT8_MIN;
	uint64_t x194 = 19081025082512366LLU;
	int32_t x195 = 1210641;
	uint64_t x196 = UINT64_MAX;
	volatile int32_t t21 = -547960;

	t21 = ((x193/(x194/x195))<=x196);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x202 = UINT16_MAX;
	uint8_t x203 = 67U;

	t22 = ((x201/(x202/x203))<=x204);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x205 = 7U;
	volatile uint64_t x206 = UINT64_MAX;
	uint32_t x207 = 104295U;
	int8_t x208 = -1;
	int32_t t23 = -112925274;

	t23 = ((x205/(x206/x207))<=x208);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x210 = UINT64_MAX;
	int32_t x211 = INT32_MAX;
	uint32_t x212 = UINT32_MAX;
	int32_t t24 = -186427;

	t24 = ((x209/(x210/x211))<=x212);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x221 = 0LLU;
	volatile int32_t x222 = INT32_MAX;
	int8_t x223 = INT8_MIN;
	static volatile int32_t t25 = 591;

	t25 = ((x221/(x222/x223))<=x224);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x225 = INT8_MIN;
	int16_t x226 = INT16_MAX;
	int64_t x227 = -1LL;
	int8_t x228 = 0;
	volatile int32_t t26 = 2;

	t26 = ((x225/(x226/x227))<=x228);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x237 = 12U;
	uint8_t x238 = UINT8_MAX;
	volatile uint64_t x239 = 14LLU;
	int32_t x240 = -6332;
	int32_t t27 = -3888;

	t27 = ((x237/(x238/x239))<=x240);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x245 = 1310517U;
	static int32_t x246 = INT32_MIN;
	volatile int32_t t28 = -6515;

	t28 = ((x245/(x246/x247))<=x248);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x253 = -95500633;
	volatile int32_t x254 = -43625282;
	static volatile uint8_t x255 = 47U;
	int32_t x256 = INT32_MAX;
	volatile int32_t t29 = 874894018;

	t29 = ((x253/(x254/x255))<=x256);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x257 = UINT32_MAX;
	uint8_t x259 = 10U;
	int16_t x260 = -115;
	static volatile int32_t t30 = 78459881;

	t30 = ((x257/(x258/x259))<=x260);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x261 = 2668055U;
	int16_t x262 = -334;
	volatile int8_t x263 = 1;
	volatile int32_t x264 = -5010;
	static volatile int32_t t31 = -790;

	t31 = ((x261/(x262/x263))<=x264);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x265 = INT32_MAX;
	int64_t x266 = INT64_MIN;
	volatile uint32_t x267 = UINT32_MAX;
	volatile uint32_t x268 = 11389U;
	volatile int32_t t32 = -2912747;

	t32 = ((x265/(x266/x267))<=x268);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x269 = INT64_MAX;
	int64_t x270 = 2332284035368532LL;
	uint8_t x271 = 2U;
	uint32_t x272 = 1950U;
	int32_t t33 = -204027403;

	t33 = ((x269/(x270/x271))<=x272);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x274 = 69919910LLU;
	int16_t x275 = INT16_MAX;
	static int32_t x276 = INT32_MIN;
	int32_t t34 = 176185447;

	t34 = ((x273/(x274/x275))<=x276);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x277 = INT8_MAX;
	volatile int8_t x278 = INT8_MIN;
	uint8_t x279 = 127U;
	uint64_t x280 = 1074280563046113LLU;
	int32_t t35 = -4923030;

	t35 = ((x277/(x278/x279))<=x280);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x281 = INT64_MIN;
	int8_t x283 = 4;
	static int64_t x284 = 124039LL;
	int32_t t36 = -16930424;

	t36 = ((x281/(x282/x283))<=x284);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x285 = UINT64_MAX;
	int32_t x286 = INT32_MIN;
	static volatile int8_t x288 = -39;
	int32_t t37 = 2;

	t37 = ((x285/(x286/x287))<=x288);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x289 = -1;
	int8_t x290 = INT8_MAX;
	volatile uint16_t x291 = 2U;
	static int8_t x292 = INT8_MIN;
	static int32_t t38 = 5642;

	t38 = ((x289/(x290/x291))<=x292);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x293 = 9623510U;
	uint64_t x294 = UINT64_MAX;
	uint32_t x295 = 1347U;
	int32_t t39 = 23106;

	t39 = ((x293/(x294/x295))<=x296);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x305 = INT16_MIN;
	static int32_t x306 = INT32_MIN;
	int8_t x307 = 1;
	int64_t x308 = -1846337LL;

	t40 = ((x305/(x306/x307))<=x308);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x320 = 1U;
	int32_t t41 = -62687;

	t41 = ((x317/(x318/x319))<=x320);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x350 = INT16_MIN;
	static int8_t x351 = -16;
	int8_t x352 = INT8_MAX;

	t42 = ((x349/(x350/x351))<=x352);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x353 = -1;
	int64_t x354 = INT64_MAX;
	int16_t x355 = INT16_MIN;
	static int64_t x356 = INT64_MAX;

	t43 = ((x353/(x354/x355))<=x356);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x357 = INT16_MAX;
	uint8_t x358 = UINT8_MAX;
	int16_t x359 = 1;
	uint16_t x360 = 475U;
	static int32_t t44 = 2;

	t44 = ((x357/(x358/x359))<=x360);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x361 = INT64_MAX;
	int8_t x364 = -45;

	t45 = ((x361/(x362/x363))<=x364);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x365 = 863763U;
	static int32_t x366 = 458301973;
	static volatile int8_t x367 = -1;
	int16_t x368 = INT16_MIN;
	volatile int32_t t46 = 4572;

	t46 = ((x365/(x366/x367))<=x368);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x385 = 868U;
	int32_t x386 = INT32_MIN;
	uint8_t x388 = UINT8_MAX;
	int32_t t47 = -14;

	t47 = ((x385/(x386/x387))<=x388);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x389 = INT32_MIN;
	static int64_t x390 = INT64_MIN;
	volatile int16_t x392 = 2000;
	static volatile int32_t t48 = -1;

	t48 = ((x389/(x390/x391))<=x392);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x393 = 1U;
	volatile uint64_t x394 = UINT64_MAX;
	volatile int32_t x395 = INT32_MAX;
	int32_t x396 = -59930;
	volatile int32_t t49 = 46453584;

	t49 = ((x393/(x394/x395))<=x396);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x413 = INT16_MIN;
	int8_t x414 = INT8_MIN;
	int8_t x415 = INT8_MAX;
	int16_t x416 = INT16_MIN;
	int32_t t50 = 34856;

	t50 = ((x413/(x414/x415))<=x416);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x417 = -1;
	int64_t x418 = 1646162088215740202LL;
	int32_t x419 = INT32_MIN;
	int32_t x420 = INT32_MIN;
	volatile int32_t t51 = 113240;

	t51 = ((x417/(x418/x419))<=x420);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x429 = -1;
	uint64_t x430 = UINT64_MAX;
	static int8_t x431 = -1;
	int16_t x432 = -2;
	volatile int32_t t52 = -807631896;

	t52 = ((x429/(x430/x431))<=x432);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x437 = UINT8_MAX;
	uint16_t x438 = UINT16_MAX;
	int32_t x440 = INT32_MIN;
	static volatile int32_t t53 = 105048897;

	t53 = ((x437/(x438/x439))<=x440);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x441 = 6133688470956LLU;
	static volatile uint16_t x442 = 1010U;
	int64_t x443 = -1LL;
	static int16_t x444 = INT16_MIN;
	static int32_t t54 = -2;

	t54 = ((x441/(x442/x443))<=x444);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x454 = -5792290LL;
	uint64_t x455 = 15034525173132LLU;
	int16_t x456 = 0;
	static int32_t t55 = -242837;

	t55 = ((x453/(x454/x455))<=x456);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x457 = 1640;
	static uint8_t x459 = 73U;
	int8_t x460 = 0;
	static volatile int32_t t56 = 386295286;

	t56 = ((x457/(x458/x459))<=x460);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x461 = -16;
	volatile int32_t x462 = INT32_MIN;
	static volatile int8_t x464 = 31;
	int32_t t57 = 42;

	t57 = ((x461/(x462/x463))<=x464);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x486 = UINT8_MAX;
	int8_t x488 = INT8_MIN;

	t58 = ((x485/(x486/x487))<=x488);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x489 = INT64_MAX;
	volatile int32_t x490 = INT32_MAX;
	int8_t x491 = -5;
	int32_t x492 = INT32_MIN;

	t59 = ((x489/(x490/x491))<=x492);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x497 = 6108;
	int8_t x499 = INT8_MAX;
	uint16_t x500 = UINT16_MAX;
	int32_t t60 = 21652714;

	t60 = ((x497/(x498/x499))<=x500);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x506 = -59;
	int8_t x507 = 52;
	static uint8_t x508 = 6U;
	volatile int32_t t61 = -43162;

	t61 = ((x505/(x506/x507))<=x508);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x523 = -1;
	volatile int32_t x524 = INT32_MIN;
	volatile int32_t t62 = 10582;

	t62 = ((x521/(x522/x523))<=x524);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x529 = -1;
	volatile int32_t x532 = INT32_MAX;
	int32_t t63 = -67105943;

	t63 = ((x529/(x530/x531))<=x532);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x533 = 1365U;
	uint8_t x534 = UINT8_MAX;
	int16_t x535 = 83;
	static uint16_t x536 = UINT16_MAX;
	int32_t t64 = -128394;

	t64 = ((x533/(x534/x535))<=x536);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x575 = INT16_MAX;
	int32_t t65 = -4147378;

	t65 = ((x573/(x574/x575))<=x576);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x581 = 0;
	uint16_t x582 = UINT16_MAX;
	static uint16_t x583 = UINT16_MAX;
	uint16_t x584 = 684U;
	volatile int32_t t66 = -78;

	t66 = ((x581/(x582/x583))<=x584);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x589 = 53U;
	static volatile uint64_t x590 = 331537254882064076LLU;
	uint64_t x591 = 67348834169525LLU;
	int16_t x592 = INT16_MIN;

	t67 = ((x589/(x590/x591))<=x592);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x594 = -13888;
	volatile int8_t x595 = 2;
	uint8_t x596 = 11U;
	volatile int32_t t68 = 2;

	t68 = ((x593/(x594/x595))<=x596);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x609 = -1LL;
	uint8_t x611 = UINT8_MAX;

	t69 = ((x609/(x610/x611))<=x612);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x613 = INT32_MAX;
	uint8_t x614 = 9U;
	volatile int64_t x615 = -1LL;
	volatile int32_t t70 = -235304;

	t70 = ((x613/(x614/x615))<=x616);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x621 = INT16_MIN;
	int64_t x623 = -1LL;
	uint16_t x624 = 14290U;
	int32_t t71 = -76429;

	t71 = ((x621/(x622/x623))<=x624);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x626 = -19173894;
	volatile uint8_t x627 = UINT8_MAX;
	uint16_t x628 = 3U;

	t72 = ((x625/(x626/x627))<=x628);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x642 = -1;
	uint32_t x643 = 1187343502U;
	static volatile int32_t t73 = 19800;

	t73 = ((x641/(x642/x643))<=x644);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x645 = UINT16_MAX;
	static int32_t x646 = INT32_MAX;
	int16_t x647 = -1;
	int8_t x648 = -1;
	int32_t t74 = -209704;

	t74 = ((x645/(x646/x647))<=x648);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x649 = 205664097U;
	static volatile int8_t x651 = INT8_MIN;
	uint64_t x652 = 12254LLU;

	t75 = ((x649/(x650/x651))<=x652);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x653 = 9598U;
	int16_t x655 = 25;
	uint64_t x656 = 678LLU;
	int32_t t76 = 6726;

	t76 = ((x653/(x654/x655))<=x656);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x657 = 0U;
	int64_t x658 = INT64_MIN;
	volatile uint16_t x659 = UINT16_MAX;
	volatile int64_t x660 = -144LL;
	int32_t t77 = 145936;

	t77 = ((x657/(x658/x659))<=x660);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x674 = INT64_MIN;
	uint16_t x675 = UINT16_MAX;
	int32_t t78 = -5820;

	t78 = ((x673/(x674/x675))<=x676);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x679 = -1;
	int64_t x680 = INT64_MAX;
	int32_t t79 = 221267;

	t79 = ((x677/(x678/x679))<=x680);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x681 = -1;
	volatile uint8_t x683 = 10U;
	uint16_t x684 = UINT16_MAX;
	int32_t t80 = 370;

	t80 = ((x681/(x682/x683))<=x684);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x685 = INT64_MIN;
	uint32_t x687 = 213338208U;
	int32_t t81 = -115760203;

	t81 = ((x685/(x686/x687))<=x688);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x689 = 254449985U;
	int8_t x690 = INT8_MIN;
	int8_t x691 = -1;
	int16_t x692 = 329;
	int32_t t82 = 57;

	t82 = ((x689/(x690/x691))<=x692);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x693 = 2U;
	static int16_t x694 = INT16_MIN;
	int32_t x695 = -1;
	uint32_t x696 = 6U;

	t83 = ((x693/(x694/x695))<=x696);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x697 = UINT32_MAX;
	uint16_t x698 = 1285U;
	int8_t x699 = INT8_MIN;

	t84 = ((x697/(x698/x699))<=x700);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x713 = 1076U;
	int32_t t85 = -1;

	t85 = ((x713/(x714/x715))<=x716);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x725 = 3U;
	static uint64_t x726 = UINT64_MAX;
	uint32_t x727 = 443U;
	int32_t x728 = INT32_MIN;
	volatile int32_t t86 = 917777;

	t86 = ((x725/(x726/x727))<=x728);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x737 = 58541819579LLU;
	volatile int64_t x738 = INT64_MIN;
	static uint8_t x739 = UINT8_MAX;
	int64_t x740 = INT64_MIN;

	t87 = ((x737/(x738/x739))<=x740);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x745 = -201;
	int32_t x746 = INT32_MIN;
	int32_t x747 = -14043;
	static uint16_t x748 = 1532U;
	int32_t t88 = -717;

	t88 = ((x745/(x746/x747))<=x748);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x749 = INT64_MAX;
	int32_t x750 = INT32_MIN;
	static int32_t x751 = INT32_MAX;
	static int32_t t89 = -2011151;

	t89 = ((x749/(x750/x751))<=x752);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x768 = INT64_MAX;

	t90 = ((x765/(x766/x767))<=x768);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x773 = INT16_MIN;
	int16_t x775 = -1;
	int16_t x776 = INT16_MIN;
	int32_t t91 = 26345;

	t91 = ((x773/(x774/x775))<=x776);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x781 = 9;
	int8_t x783 = -13;
	static uint64_t x784 = UINT64_MAX;
	volatile int32_t t92 = -6009222;

	t92 = ((x781/(x782/x783))<=x784);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x789 = 1953218U;
	volatile uint16_t x790 = UINT16_MAX;
	static int8_t x791 = -1;
	static int16_t x792 = INT16_MIN;
	volatile int32_t t93 = -124;

	t93 = ((x789/(x790/x791))<=x792);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x805 = 26;
	static volatile uint8_t x806 = UINT8_MAX;
	int8_t x807 = 1;
	int32_t t94 = -61727;

	t94 = ((x805/(x806/x807))<=x808);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x817 = UINT16_MAX;
	uint8_t x818 = 38U;
	static int8_t x819 = -20;
	volatile int32_t x820 = INT32_MAX;
	int32_t t95 = -363975675;

	t95 = ((x817/(x818/x819))<=x820);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x821 = INT16_MIN;
	uint8_t x822 = 9U;
	volatile int64_t x823 = -1LL;
	int16_t x824 = INT16_MAX;
	volatile int32_t t96 = 732299531;

	t96 = ((x821/(x822/x823))<=x824);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x825 = INT32_MIN;
	int64_t x826 = INT64_MIN;
	static int16_t x828 = -1;
	int32_t t97 = 140;

	t97 = ((x825/(x826/x827))<=x828);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x838 = INT64_MAX;
	static volatile int32_t t98 = -1;

	t98 = ((x837/(x838/x839))<=x840);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x849 = -35;
	volatile int64_t x850 = INT64_MIN;
	uint8_t x851 = 1U;
	uint8_t x852 = 1U;
	int32_t t99 = 40102;

	t99 = ((x849/(x850/x851))<=x852);

	if (t99 != 1) { NG(); } else { ; }
	
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

