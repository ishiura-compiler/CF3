#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x6 = INT8_MAX;
int64_t x22 = 0LL;
int32_t t3 = 213;
int32_t t4 = 3483;
int16_t x41 = 354;
static int32_t t9 = -140203809;
uint64_t x83 = 8122528907346559703LLU;
int32_t t10 = 1;
int8_t x96 = INT8_MIN;
uint8_t x100 = 78U;
static int64_t x105 = -1LL;
volatile int32_t t14 = 2;
int32_t x119 = 106464;
static int16_t x123 = INT16_MAX;
volatile int64_t x136 = -953543456LL;
int16_t x148 = INT16_MAX;
int64_t x149 = INT64_MIN;
uint8_t x161 = UINT8_MAX;
static uint16_t x179 = 1U;
uint16_t x180 = UINT16_MAX;
volatile uint8_t x189 = UINT8_MAX;
volatile int32_t t30 = -52013;
int64_t x209 = INT64_MAX;
int32_t t31 = -129615763;
uint64_t x216 = UINT64_MAX;
int8_t x235 = INT8_MIN;
static volatile uint64_t x238 = 23LLU;
uint32_t x239 = 161442693U;
int32_t x240 = INT32_MIN;
int32_t t35 = -948537409;
uint16_t x252 = 1U;
int64_t x258 = 48097032791368287LL;
static int16_t x262 = 0;
int16_t x264 = INT16_MIN;
int32_t t39 = 0;
static int8_t x299 = INT8_MIN;
volatile int32_t t42 = -10;
int16_t x303 = -1;
volatile int32_t t43 = 240;
int64_t x308 = 7387197345396112LL;
uint32_t x317 = 3U;
static uint32_t x318 = 2105477U;
static uint64_t x320 = 1269LLU;
uint8_t x332 = 2U;
uint8_t x338 = 7U;
int64_t x340 = INT64_MIN;
int32_t t49 = -20118171;
int8_t x361 = 0;
volatile int16_t x364 = -1;
int32_t t52 = -6371454;
uint8_t x377 = 23U;
static int8_t x378 = 4;
int64_t x385 = -178996574809714LL;
int16_t x387 = INT16_MIN;
static volatile int32_t t57 = 191486;
static uint32_t x398 = 6593U;
int64_t x399 = INT64_MAX;
static uint64_t x409 = 23LLU;
uint8_t x418 = UINT8_MAX;
static int32_t t64 = -1;
int32_t x452 = -522308;
volatile int32_t x471 = 8543;
uint8_t x472 = UINT8_MAX;
int32_t t66 = -6364886;
uint64_t x496 = 397754843LLU;
int32_t t69 = 1;
static int8_t x501 = -1;
static volatile int32_t t70 = 0;
int32_t x506 = INT32_MAX;
int16_t x513 = INT16_MAX;
static uint64_t x516 = 1564LLU;
int32_t x517 = -3054991;
volatile int32_t t73 = -247;
static uint32_t x527 = 6U;
int32_t x528 = -1;
int8_t x536 = -1;
volatile int32_t t78 = 1449;
int8_t x550 = INT8_MAX;
static uint16_t x551 = 249U;
int8_t x553 = -9;
volatile int64_t x569 = -1LL;
uint16_t x571 = UINT16_MAX;
uint8_t x581 = UINT8_MAX;
static int32_t x583 = INT32_MIN;
int32_t t82 = 1;
uint16_t x595 = 4009U;
int16_t x613 = -1;
int16_t x615 = INT16_MIN;
volatile uint32_t x642 = 1234883632U;
static int8_t x649 = INT8_MAX;
static int32_t t91 = -115;
int16_t x674 = INT16_MAX;
static volatile int32_t t92 = -59011078;
int64_t x704 = INT64_MIN;
static int32_t t97 = -556022880;
int8_t x741 = -1;
volatile int16_t x743 = 7;


void f0(void) {
	volatile int64_t x5 = INT64_MIN;
	static int16_t x7 = INT16_MIN;
	int64_t x8 = INT64_MAX;
	static volatile int32_t t0 = 1769;

	t0 = (x5==(x6<<(x7==x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 2435952;
	int64_t x10 = 344LL;
	static int32_t x11 = INT32_MAX;
	int16_t x12 = 6;
	int32_t t1 = -12;

	t1 = (x9==(x10<<(x11==x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	int64_t x14 = 94361080LL;
	volatile int8_t x15 = INT8_MIN;
	static int8_t x16 = 50;
	int32_t t2 = -174507;

	t2 = (x13==(x14<<(x15==x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x21 = 357646137532564LLU;
	int32_t x23 = -30246;
	volatile int16_t x24 = INT16_MAX;

	t3 = (x21==(x22<<(x23==x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = UINT16_MAX;
	int32_t x26 = 14012;
	static int8_t x27 = 1;
	volatile int16_t x28 = INT16_MAX;

	t4 = (x25==(x26<<(x27==x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x42 = 34312894170952905LLU;
	int32_t x43 = INT32_MAX;
	int8_t x44 = INT8_MAX;
	int32_t t5 = -443583;

	t5 = (x41==(x42<<(x43==x44)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x45 = 6U;
	uint64_t x46 = 3LLU;
	int16_t x47 = 1;
	uint8_t x48 = UINT8_MAX;
	int32_t t6 = 560910;

	t6 = (x45==(x46<<(x47==x48)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x49 = 1171138764U;
	uint64_t x50 = 1LLU;
	uint16_t x51 = 69U;
	volatile int32_t x52 = INT32_MAX;
	volatile int32_t t7 = -904529492;

	t7 = (x49==(x50<<(x51==x52)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x53 = INT64_MIN;
	volatile int16_t x54 = INT16_MAX;
	int32_t x55 = INT32_MIN;
	volatile int32_t x56 = -1;
	volatile int32_t t8 = -1075097;

	t8 = (x53==(x54<<(x55==x56)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = 105;
	static int16_t x62 = INT16_MAX;
	static int32_t x63 = 31407;
	static int32_t x64 = INT32_MIN;

	t9 = (x61==(x62<<(x63==x64)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x81 = 43;
	int16_t x82 = 3;
	int32_t x84 = INT32_MIN;

	t10 = (x81==(x82<<(x83==x84)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x89 = INT32_MIN;
	static uint64_t x90 = 3450796LLU;
	uint64_t x91 = 15468594887285LLU;
	int64_t x92 = -213436496914330LL;
	volatile int32_t t11 = -61195265;

	t11 = (x89==(x90<<(x91==x92)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x93 = 1;
	static int16_t x94 = INT16_MAX;
	volatile int32_t x95 = -1303089;
	int32_t t12 = 366;

	t12 = (x93==(x94<<(x95==x96)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x97 = 301106LL;
	uint8_t x98 = 25U;
	int32_t x99 = INT32_MIN;
	volatile int32_t t13 = 393313;

	t13 = (x97==(x98<<(x99==x100)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x106 = 45;
	static int8_t x107 = -10;
	volatile int16_t x108 = -1;

	t14 = (x105==(x106<<(x107==x108)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x109 = -1;
	volatile uint64_t x110 = UINT64_MAX;
	static volatile uint64_t x111 = 772782391LLU;
	volatile int8_t x112 = INT8_MIN;
	int32_t t15 = -123570210;

	t15 = (x109==(x110<<(x111==x112)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x117 = UINT16_MAX;
	uint32_t x118 = 5U;
	int64_t x120 = INT64_MIN;
	volatile int32_t t16 = -17;

	t16 = (x117==(x118<<(x119==x120)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x121 = UINT32_MAX;
	uint32_t x122 = 2029846461U;
	int16_t x124 = INT16_MIN;
	static volatile int32_t t17 = -40143369;

	t17 = (x121==(x122<<(x123==x124)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x129 = -1;
	int16_t x130 = 1;
	volatile int32_t x131 = -3364995;
	volatile int8_t x132 = INT8_MIN;
	int32_t t18 = 1915156;

	t18 = (x129==(x130<<(x131==x132)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x133 = INT64_MAX;
	volatile int64_t x134 = INT64_MAX;
	static uint8_t x135 = UINT8_MAX;
	int32_t t19 = 11013;

	t19 = (x133==(x134<<(x135==x136)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x141 = INT8_MIN;
	uint8_t x142 = 1U;
	int64_t x143 = -1LL;
	int32_t x144 = -107580;
	static volatile int32_t t20 = -1;

	t20 = (x141==(x142<<(x143==x144)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x145 = -1;
	uint16_t x146 = 7656U;
	int8_t x147 = -1;
	int32_t t21 = 175902757;

	t21 = (x145==(x146<<(x147==x148)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x150 = INT64_MAX;
	int64_t x151 = -1676060LL;
	int8_t x152 = 1;
	int32_t t22 = 24478771;

	t22 = (x149==(x150<<(x151==x152)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x162 = 2641217834619723LLU;
	static uint16_t x163 = 837U;
	static int8_t x164 = 51;
	int32_t t23 = -6174;

	t23 = (x161==(x162<<(x163==x164)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x173 = 7U;
	volatile uint64_t x174 = 475LLU;
	int32_t x175 = INT32_MAX;
	int16_t x176 = 0;
	int32_t t24 = 27;

	t24 = (x173==(x174<<(x175==x176)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x177 = UINT8_MAX;
	static volatile int8_t x178 = INT8_MAX;
	int32_t t25 = -325261;

	t25 = (x177==(x178<<(x179==x180)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x181 = 75U;
	int64_t x182 = 1303LL;
	uint64_t x183 = UINT64_MAX;
	uint16_t x184 = 6804U;
	static volatile int32_t t26 = -17;

	t26 = (x181==(x182<<(x183==x184)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x185 = INT8_MAX;
	static uint32_t x186 = 28U;
	static int32_t x187 = -58;
	int8_t x188 = 1;
	volatile int32_t t27 = -339961;

	t27 = (x185==(x186<<(x187==x188)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x190 = 93114LLU;
	volatile uint64_t x191 = 17396LLU;
	uint16_t x192 = UINT16_MAX;
	static int32_t t28 = -96949793;

	t28 = (x189==(x190<<(x191==x192)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x193 = UINT64_MAX;
	uint16_t x194 = 7U;
	static uint8_t x195 = 0U;
	uint64_t x196 = 211756962918282LLU;
	int32_t t29 = -954992;

	t29 = (x193==(x194<<(x195==x196)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x205 = INT16_MIN;
	int8_t x206 = 1;
	volatile uint32_t x207 = 200615U;
	uint64_t x208 = 61890753612396237LLU;

	t30 = (x205==(x206<<(x207==x208)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x210 = 35U;
	int16_t x211 = -1;
	uint32_t x212 = 14U;

	t31 = (x209==(x210<<(x211==x212)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x213 = -1;
	uint64_t x214 = 24545058572895LLU;
	uint8_t x215 = 3U;
	volatile int32_t t32 = 2252;

	t32 = (x213==(x214<<(x215==x216)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x217 = INT64_MIN;
	uint64_t x218 = 4228LLU;
	uint8_t x219 = UINT8_MAX;
	int16_t x220 = INT16_MAX;
	volatile int32_t t33 = 4;

	t33 = (x217==(x218<<(x219==x220)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x233 = -34;
	volatile int8_t x234 = INT8_MAX;
	int32_t x236 = INT32_MIN;
	volatile int32_t t34 = 20979272;

	t34 = (x233==(x234<<(x235==x236)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x237 = INT16_MIN;

	t35 = (x237==(x238<<(x239==x240)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x249 = -8423726245057449LL;
	volatile uint8_t x250 = 3U;
	static int64_t x251 = -106723272LL;
	volatile int32_t t36 = -2347;

	t36 = (x249==(x250<<(x251==x252)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x253 = UINT16_MAX;
	static uint16_t x254 = UINT16_MAX;
	uint8_t x255 = UINT8_MAX;
	volatile int16_t x256 = -1;
	volatile int32_t t37 = -1101529;

	t37 = (x253==(x254<<(x255==x256)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x257 = -1;
	volatile int16_t x259 = 1;
	volatile uint16_t x260 = 1226U;
	volatile int32_t t38 = -167120326;

	t38 = (x257==(x258<<(x259==x260)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x261 = INT32_MIN;
	volatile int16_t x263 = INT16_MAX;

	t39 = (x261==(x262<<(x263==x264)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x265 = INT8_MAX;
	static int64_t x266 = INT64_MAX;
	uint16_t x267 = 13U;
	volatile uint16_t x268 = 12221U;
	volatile int32_t t40 = 196402139;

	t40 = (x265==(x266<<(x267==x268)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x269 = 4U;
	static volatile int16_t x270 = 1;
	static int32_t x271 = INT32_MAX;
	int16_t x272 = -1;
	int32_t t41 = -38;

	t41 = (x269==(x270<<(x271==x272)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x297 = UINT8_MAX;
	volatile uint8_t x298 = 27U;
	volatile int8_t x300 = INT8_MIN;

	t42 = (x297==(x298<<(x299==x300)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x301 = 51LL;
	uint32_t x302 = 2903155U;
	uint32_t x304 = 58U;

	t43 = (x301==(x302<<(x303==x304)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x305 = INT32_MIN;
	uint16_t x306 = 57U;
	static int16_t x307 = INT16_MAX;
	volatile int32_t t44 = -1;

	t44 = (x305==(x306<<(x307==x308)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x319 = INT8_MIN;
	volatile int32_t t45 = 32213;

	t45 = (x317==(x318<<(x319==x320)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x329 = 6645738LL;
	int64_t x330 = INT64_MAX;
	volatile int64_t x331 = -1LL;
	volatile int32_t t46 = -3;

	t46 = (x329==(x330<<(x331==x332)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x333 = INT64_MAX;
	uint16_t x334 = UINT16_MAX;
	uint32_t x335 = 2U;
	uint32_t x336 = 544758U;
	static int32_t t47 = 1;

	t47 = (x333==(x334<<(x335==x336)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x337 = -1572935;
	static volatile int16_t x339 = 10;
	int32_t t48 = -6;

	t48 = (x337==(x338<<(x339==x340)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x341 = -6529;
	uint32_t x342 = 14202885U;
	volatile int16_t x343 = -1;
	static volatile int8_t x344 = 0;

	t49 = (x341==(x342<<(x343==x344)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x349 = INT8_MAX;
	int16_t x350 = 2;
	int64_t x351 = -119826093LL;
	int32_t x352 = INT32_MIN;
	volatile int32_t t50 = -106;

	t50 = (x349==(x350<<(x351==x352)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x353 = INT8_MAX;
	volatile uint8_t x354 = 58U;
	int32_t x355 = INT32_MIN;
	volatile int64_t x356 = INT64_MIN;
	int32_t t51 = -51269;

	t51 = (x353==(x354<<(x355==x356)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x362 = 6869056U;
	uint16_t x363 = UINT16_MAX;

	t52 = (x361==(x362<<(x363==x364)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x369 = 40;
	uint8_t x370 = UINT8_MAX;
	int16_t x371 = INT16_MAX;
	volatile uint8_t x372 = 5U;
	int32_t t53 = -172;

	t53 = (x369==(x370<<(x371==x372)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x373 = INT64_MIN;
	uint32_t x374 = 2019858876U;
	volatile uint32_t x375 = 122810087U;
	int64_t x376 = 0LL;
	volatile int32_t t54 = 1;

	t54 = (x373==(x374<<(x375==x376)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x379 = INT8_MIN;
	volatile uint16_t x380 = 8U;
	volatile int32_t t55 = 1029470160;

	t55 = (x377==(x378<<(x379==x380)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x381 = INT16_MAX;
	static uint16_t x382 = 5156U;
	static uint64_t x383 = UINT64_MAX;
	volatile int32_t x384 = -57;
	static volatile int32_t t56 = -9923;

	t56 = (x381==(x382<<(x383==x384)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x386 = INT64_MAX;
	uint32_t x388 = UINT32_MAX;

	t57 = (x385==(x386<<(x387==x388)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x393 = INT16_MAX;
	uint8_t x394 = 122U;
	volatile uint8_t x395 = UINT8_MAX;
	uint32_t x396 = UINT32_MAX;
	int32_t t58 = 374847218;

	t58 = (x393==(x394<<(x395==x396)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x397 = UINT32_MAX;
	int64_t x400 = INT64_MIN;
	static volatile int32_t t59 = 1216676;

	t59 = (x397==(x398<<(x399==x400)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x401 = 3LLU;
	uint32_t x402 = 562U;
	volatile uint16_t x403 = 746U;
	int32_t x404 = INT32_MIN;
	volatile int32_t t60 = 54;

	t60 = (x401==(x402<<(x403==x404)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x410 = 12U;
	int8_t x411 = INT8_MAX;
	int16_t x412 = -1;
	static int32_t t61 = 26;

	t61 = (x409==(x410<<(x411==x412)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x413 = 4210798U;
	uint8_t x414 = 19U;
	int64_t x415 = -4198603880581502987LL;
	uint8_t x416 = 1U;
	volatile int32_t t62 = -6117699;

	t62 = (x413==(x414<<(x415==x416)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x417 = UINT8_MAX;
	int8_t x419 = -1;
	volatile int64_t x420 = 56456LL;
	volatile int32_t t63 = -166286982;

	t63 = (x417==(x418<<(x419==x420)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x421 = INT32_MAX;
	static int8_t x422 = 1;
	volatile uint32_t x423 = 11322476U;
	int32_t x424 = -76;

	t64 = (x421==(x422<<(x423==x424)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x449 = -1;
	uint16_t x450 = UINT16_MAX;
	volatile uint32_t x451 = UINT32_MAX;
	int32_t t65 = 668369;

	t65 = (x449==(x450<<(x451==x452)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x469 = -1;
	uint8_t x470 = UINT8_MAX;

	t66 = (x469==(x470<<(x471==x472)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x477 = INT32_MIN;
	uint16_t x478 = UINT16_MAX;
	static volatile uint32_t x479 = 947U;
	volatile int64_t x480 = INT64_MAX;
	int32_t t67 = -985700;

	t67 = (x477==(x478<<(x479==x480)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x493 = -5;
	int8_t x494 = 1;
	int8_t x495 = -1;
	int32_t t68 = 417318;

	t68 = (x493==(x494<<(x495==x496)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x497 = 2164U;
	uint32_t x498 = 521331U;
	int32_t x499 = INT32_MIN;
	static int16_t x500 = 2331;

	t69 = (x497==(x498<<(x499==x500)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x502 = 5U;
	volatile uint64_t x503 = UINT64_MAX;
	int8_t x504 = INT8_MIN;

	t70 = (x501==(x502<<(x503==x504)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x505 = INT8_MIN;
	uint8_t x507 = 32U;
	int32_t x508 = INT32_MIN;
	int32_t t71 = 51225;

	t71 = (x505==(x506<<(x507==x508)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x514 = 0U;
	uint16_t x515 = 244U;
	int32_t t72 = -254;

	t72 = (x513==(x514<<(x515==x516)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x518 = 13U;
	uint32_t x519 = 448255U;
	int8_t x520 = INT8_MIN;

	t73 = (x517==(x518<<(x519==x520)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x525 = -703455LL;
	int32_t x526 = INT32_MAX;
	volatile int32_t t74 = 0;

	t74 = (x525==(x526<<(x527==x528)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x529 = 3U;
	uint16_t x530 = 4U;
	volatile uint8_t x531 = 72U;
	static uint8_t x532 = 21U;
	volatile int32_t t75 = -57673982;

	t75 = (x529==(x530<<(x531==x532)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x533 = UINT64_MAX;
	int8_t x534 = 5;
	int64_t x535 = -148LL;
	static volatile int32_t t76 = -27;

	t76 = (x533==(x534<<(x535==x536)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x537 = -1;
	int32_t x538 = INT32_MAX;
	uint16_t x539 = UINT16_MAX;
	int64_t x540 = INT64_MIN;
	volatile int32_t t77 = 27;

	t77 = (x537==(x538<<(x539==x540)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x541 = -1;
	static volatile uint16_t x542 = 408U;
	uint16_t x543 = 31899U;
	volatile int8_t x544 = INT8_MIN;

	t78 = (x541==(x542<<(x543==x544)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x549 = UINT32_MAX;
	int32_t x552 = -1;
	volatile int32_t t79 = -71431296;

	t79 = (x549==(x550<<(x551==x552)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x554 = 1720U;
	int8_t x555 = INT8_MIN;
	static int16_t x556 = -1;
	int32_t t80 = -192390247;

	t80 = (x553==(x554<<(x555==x556)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x570 = 2015483650LLU;
	static int32_t x572 = INT32_MAX;
	int32_t t81 = 117616151;

	t81 = (x569==(x570<<(x571==x572)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x582 = 0LL;
	int32_t x584 = INT32_MAX;

	t82 = (x581==(x582<<(x583==x584)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x593 = -1;
	uint64_t x594 = 495613LLU;
	volatile uint8_t x596 = 11U;
	int32_t t83 = -56723;

	t83 = (x593==(x594<<(x595==x596)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x609 = 0;
	volatile uint32_t x610 = 30688U;
	int8_t x611 = INT8_MIN;
	static uint64_t x612 = 13421300287416657LLU;
	int32_t t84 = 77257928;

	t84 = (x609==(x610<<(x611==x612)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x614 = 89902578332972LLU;
	static int8_t x616 = INT8_MIN;
	volatile int32_t t85 = -101975;

	t85 = (x613==(x614<<(x615==x616)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x617 = INT32_MIN;
	uint16_t x618 = UINT16_MAX;
	volatile int16_t x619 = INT16_MIN;
	int8_t x620 = -1;
	int32_t t86 = 72939;

	t86 = (x617==(x618<<(x619==x620)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x629 = -26;
	int64_t x630 = INT64_MAX;
	int64_t x631 = INT64_MIN;
	int16_t x632 = -1;
	int32_t t87 = 10513;

	t87 = (x629==(x630<<(x631==x632)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x633 = INT64_MAX;
	uint8_t x634 = 1U;
	volatile int8_t x635 = INT8_MIN;
	int16_t x636 = INT16_MIN;
	volatile int32_t t88 = -615;

	t88 = (x633==(x634<<(x635==x636)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x637 = UINT8_MAX;
	static uint32_t x638 = UINT32_MAX;
	volatile int32_t x639 = INT32_MIN;
	uint64_t x640 = 2622265LLU;
	volatile int32_t t89 = 366132;

	t89 = (x637==(x638<<(x639==x640)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x641 = INT32_MAX;
	static int64_t x643 = INT64_MIN;
	int64_t x644 = -1LL;
	static volatile int32_t t90 = 841870672;

	t90 = (x641==(x642<<(x643==x644)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x650 = UINT64_MAX;
	uint8_t x651 = 0U;
	int32_t x652 = INT32_MIN;

	t91 = (x649==(x650<<(x651==x652)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x673 = UINT16_MAX;
	int64_t x675 = INT64_MIN;
	int64_t x676 = INT64_MIN;

	t92 = (x673==(x674<<(x675==x676)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x681 = 0U;
	uint64_t x682 = 1946259290347180354LLU;
	int32_t x683 = 5;
	static int64_t x684 = INT64_MAX;
	static int32_t t93 = 113;

	t93 = (x681==(x682<<(x683==x684)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x697 = 241U;
	uint64_t x698 = UINT64_MAX;
	volatile int64_t x699 = -1LL;
	int32_t x700 = INT32_MIN;
	int32_t t94 = 3;

	t94 = (x697==(x698<<(x699==x700)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x701 = UINT16_MAX;
	int64_t x702 = 3068102293457LL;
	static uint64_t x703 = UINT64_MAX;
	volatile int32_t t95 = -11;

	t95 = (x701==(x702<<(x703==x704)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x709 = UINT32_MAX;
	uint64_t x710 = UINT64_MAX;
	int32_t x711 = -60;
	int16_t x712 = 0;
	volatile int32_t t96 = 30616;

	t96 = (x709==(x710<<(x711==x712)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x729 = -2;
	int16_t x730 = INT16_MAX;
	int32_t x731 = -1;
	static volatile int8_t x732 = INT8_MAX;

	t97 = (x729==(x730<<(x731==x732)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x742 = 80U;
	int64_t x744 = 777232825856933LL;
	int32_t t98 = -3;

	t98 = (x741==(x742<<(x743==x744)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x749 = INT16_MAX;
	static uint16_t x750 = 0U;
	int8_t x751 = 0;
	int8_t x752 = 1;
	volatile int32_t t99 = -980;

	t99 = (x749==(x750<<(x751==x752)));

	if (t99 != 0) { NG(); } else { ; }
	
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

