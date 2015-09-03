#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x9 = 275643LLU;
static int64_t x19 = -1330756656LL;
int8_t x23 = INT8_MIN;
uint32_t x24 = 655335902U;
volatile uint8_t x25 = 15U;
int16_t x30 = 1;
uint32_t x32 = UINT32_MAX;
volatile uint32_t x33 = 116451U;
int8_t x45 = 5;
uint16_t x49 = 1U;
volatile int32_t x52 = 1189;
volatile int32_t x71 = -1;
uint32_t t14 = 0U;
uint64_t x117 = UINT64_MAX;
int16_t x120 = -5675;
int64_t x121 = 61602569LL;
static int16_t x130 = INT16_MIN;
int32_t t22 = -1006681059;
int8_t x158 = -2;
uint64_t x175 = 1378078LLU;
int32_t x190 = -428047505;
int64_t x191 = INT64_MIN;
volatile int32_t t28 = -13044339;
volatile int64_t x197 = INT64_MAX;
static uint8_t x198 = UINT8_MAX;
int32_t x200 = INT32_MIN;
volatile uint32_t x206 = UINT32_MAX;
uint8_t x207 = 1U;
static int64_t t31 = -39524069LL;
volatile int32_t x217 = INT32_MAX;
static int64_t x218 = -1LL;
uint64_t x237 = 665LLU;
int64_t x242 = INT64_MIN;
uint8_t x243 = 4U;
int32_t x289 = 27;
int8_t x305 = INT8_MAX;
static int32_t x308 = INT32_MIN;
int64_t x320 = INT64_MIN;
volatile int32_t t40 = -12080351;
int8_t x329 = INT8_MAX;
volatile uint32_t t43 = 1692830U;
uint8_t x341 = UINT8_MAX;
int8_t x342 = -1;
static volatile int32_t t45 = -9;
uint8_t x360 = 4U;
int64_t x363 = INT64_MAX;
volatile int32_t t49 = -569;
int64_t x374 = 5LL;
int64_t x387 = -2087746218077253LL;
int16_t x388 = INT16_MIN;
uint8_t x393 = UINT8_MAX;
int32_t x414 = 22;
static int64_t x415 = INT64_MIN;
int32_t x434 = INT32_MAX;
int8_t x435 = 11;
int32_t x438 = INT32_MIN;
int16_t x439 = INT16_MIN;
volatile int32_t x440 = INT32_MIN;
int32_t t58 = -6318129;
uint64_t x468 = 2084843501307188462LLU;
int32_t x471 = 10203;
int16_t x479 = -225;
volatile uint32_t x502 = 104422530U;
static int32_t x547 = INT32_MIN;
uint32_t x550 = 202731791U;
int16_t x579 = -1;
int16_t x580 = -2;
uint16_t x581 = 0U;
int32_t x584 = -1;
int8_t x613 = INT8_MAX;
uint8_t x615 = UINT8_MAX;
volatile int32_t x634 = INT32_MIN;
int32_t x641 = 896;
volatile int32_t x642 = INT32_MIN;
static int16_t x643 = 0;
int64_t x654 = INT64_MAX;
int16_t x658 = INT16_MAX;
volatile uint32_t t85 = UINT32_MAX;
volatile uint8_t x671 = UINT8_MAX;
uint32_t t86 = 11U;
int8_t x674 = INT8_MAX;
int64_t t88 = INT64_MAX;
uint64_t x689 = UINT64_MAX;
static int32_t x690 = INT32_MAX;
int8_t x700 = INT8_MAX;
uint16_t x709 = UINT16_MAX;
volatile int64_t x726 = INT64_MIN;
uint16_t x727 = 241U;
int8_t x740 = INT8_MIN;
static int64_t x760 = -1LL;
volatile uint32_t t98 = 3049U;
uint64_t x762 = 218362927063LLU;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	static volatile int8_t x2 = INT8_MIN;
	int16_t x3 = -1;
	int8_t x4 = 21;
	int32_t t0 = -7988380;

	t0 = (x1>>(x2<(x3%x4)));

	if (t0 != 63) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = -3;
	static int8_t x11 = INT8_MIN;
	static int64_t x12 = INT64_MIN;
	volatile uint64_t t1 = 465056886857196LLU;

	t1 = (x9>>(x10<(x11%x12)));

	if (t1 != 275643LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x13 = UINT8_MAX;
	int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MAX;
	int16_t x16 = INT16_MIN;
	volatile int32_t t2 = -813;

	t2 = (x13>>(x14<(x15%x16)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = INT64_MAX;
	uint64_t x18 = 2LLU;
	int64_t x20 = -7670205944288069LL;
	volatile int64_t t3 = -53LL;

	t3 = (x17>>(x18<(x19%x20)));

	if (t3 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MAX;
	uint32_t x22 = 4339040U;
	static int32_t t4 = -361;

	t4 = (x21>>(x22<(x23%x24)));

	if (t4 != 63) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x26 = UINT64_MAX;
	volatile int16_t x27 = -3;
	static int8_t x28 = -1;
	int32_t t5 = 3769;

	t5 = (x25>>(x26<(x27%x28)));

	if (t5 != 15) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = INT8_MAX;
	static int16_t x31 = INT16_MAX;
	int32_t t6 = -227252;

	t6 = (x29>>(x30<(x31%x32)));

	if (t6 != 63) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = INT8_MAX;
	volatile int16_t x35 = INT16_MIN;
	uint64_t x36 = 3779913966LLU;
	static uint32_t t7 = 238487643U;

	t7 = (x33>>(x34<(x35%x36)));

	if (t7 != 58225U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x37 = UINT64_MAX;
	int16_t x38 = -3309;
	int64_t x39 = -235361668356567LL;
	uint16_t x40 = UINT16_MAX;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = (x37>>(x38<(x39%x40)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x46 = INT8_MAX;
	int64_t x47 = INT64_MIN;
	volatile int16_t x48 = INT16_MIN;
	static int32_t t9 = -372;

	t9 = (x45>>(x46<(x47%x48)));

	if (t9 != 5) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = INT32_MAX;
	static int64_t x51 = 1933509278LL;
	int32_t t10 = 20819;

	t10 = (x49>>(x50<(x51%x52)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x61 = INT16_MAX;
	static int16_t x62 = INT16_MIN;
	int64_t x63 = INT64_MIN;
	uint16_t x64 = 291U;
	int32_t t11 = 541;

	t11 = (x61>>(x62<(x63%x64)));

	if (t11 != 16383) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x69 = INT8_MAX;
	int64_t x70 = INT64_MAX;
	static uint8_t x72 = 49U;
	int32_t t12 = 0;

	t12 = (x69>>(x70<(x71%x72)));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x77 = UINT32_MAX;
	int8_t x78 = INT8_MIN;
	int8_t x79 = 46;
	uint32_t x80 = 5131U;
	uint32_t t13 = UINT32_MAX;

	t13 = (x77>>(x78<(x79%x80)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x89 = 23942U;
	uint8_t x90 = 45U;
	int16_t x91 = 19;
	uint32_t x92 = 11895451U;

	t14 = (x89>>(x90<(x91%x92)));

	if (t14 != 23942U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x93 = 0U;
	int32_t x94 = 80;
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MAX;
	int32_t t15 = -1;

	t15 = (x93>>(x94<(x95%x96)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x97 = 95U;
	static int8_t x98 = INT8_MIN;
	int32_t x99 = -1;
	int16_t x100 = INT16_MAX;
	volatile uint32_t t16 = 45U;

	t16 = (x97>>(x98<(x99%x100)));

	if (t16 != 47U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x105 = UINT8_MAX;
	int64_t x106 = INT64_MIN;
	int64_t x107 = -113773428LL;
	int8_t x108 = -1;
	static volatile int32_t t17 = -10053;

	t17 = (x105>>(x106<(x107%x108)));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x118 = INT32_MAX;
	static int32_t x119 = 727164000;
	static uint64_t t18 = UINT64_MAX;

	t18 = (x117>>(x118<(x119%x120)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x122 = INT16_MAX;
	int32_t x123 = INT32_MAX;
	static int8_t x124 = INT8_MIN;
	int64_t t19 = 14315LL;

	t19 = (x121>>(x122<(x123%x124)));

	if (t19 != 61602569LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x125 = 1066200102U;
	static volatile int8_t x126 = -14;
	int64_t x127 = INT64_MIN;
	static int8_t x128 = INT8_MIN;
	volatile uint32_t t20 = 13879180U;

	t20 = (x125>>(x126<(x127%x128)));

	if (t20 != 533100051U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x129 = INT64_MAX;
	static int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MAX;
	volatile int64_t t21 = 4923684325592LL;

	t21 = (x129>>(x130<(x131%x132)));

	if (t21 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x141 = 27;
	uint16_t x142 = 1502U;
	uint16_t x143 = UINT16_MAX;
	static int32_t x144 = 1736;

	t22 = (x141>>(x142<(x143%x144)));

	if (t22 != 27) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x149 = 668U;
	static volatile uint64_t x150 = 3LLU;
	int8_t x151 = INT8_MIN;
	int16_t x152 = 254;
	volatile uint32_t t23 = 184382636U;

	t23 = (x149>>(x150<(x151%x152)));

	if (t23 != 334U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x157 = 3U;
	volatile int32_t x159 = INT32_MIN;
	volatile int8_t x160 = INT8_MIN;
	int32_t t24 = -27046147;

	t24 = (x157>>(x158<(x159%x160)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x169 = 809007599LLU;
	uint8_t x170 = UINT8_MAX;
	uint8_t x171 = 0U;
	volatile uint64_t x172 = 32113302345102LLU;
	uint64_t t25 = 864519154186077378LLU;

	t25 = (x169>>(x170<(x171%x172)));

	if (t25 != 809007599LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x173 = INT16_MAX;
	int32_t x174 = -27;
	uint8_t x176 = 3U;
	int32_t t26 = 608;

	t26 = (x173>>(x174<(x175%x176)));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x177 = 7;
	uint64_t x178 = UINT64_MAX;
	int64_t x179 = INT64_MIN;
	volatile int8_t x180 = INT8_MIN;
	int32_t t27 = 43222;

	t27 = (x177>>(x178<(x179%x180)));

	if (t27 != 7) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x189 = UINT8_MAX;
	static uint8_t x192 = 6U;

	t28 = (x189>>(x190<(x191%x192)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x193 = 1U;
	int16_t x194 = 12;
	int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MIN;
	int32_t t29 = -8714720;

	t29 = (x193>>(x194<(x195%x196)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x199 = -1;
	volatile int64_t t30 = INT64_MAX;

	t30 = (x197>>(x198<(x199%x200)));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x205 = 127083LL;
	static int32_t x208 = INT32_MIN;

	t31 = (x205>>(x206<(x207%x208)));

	if (t31 != 127083LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x219 = -1;
	static int8_t x220 = INT8_MIN;
	static volatile int32_t t32 = INT32_MAX;

	t32 = (x217>>(x218<(x219%x220)));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x238 = INT16_MIN;
	uint8_t x239 = UINT8_MAX;
	volatile int8_t x240 = INT8_MIN;
	uint64_t t33 = 277883493498LLU;

	t33 = (x237>>(x238<(x239%x240)));

	if (t33 != 332LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x241 = 59;
	int32_t x244 = 865031400;
	static int32_t t34 = 128588706;

	t34 = (x241>>(x242<(x243%x244)));

	if (t34 != 29) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x245 = INT64_MAX;
	int64_t x246 = 9568822713706LL;
	int64_t x247 = INT64_MIN;
	static int16_t x248 = INT16_MIN;
	volatile int64_t t35 = INT64_MAX;

	t35 = (x245>>(x246<(x247%x248)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x269 = UINT64_MAX;
	uint32_t x270 = UINT32_MAX;
	volatile int16_t x271 = -1;
	static int64_t x272 = 27504926433345LL;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (x269>>(x270<(x271%x272)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x290 = INT32_MIN;
	int8_t x291 = INT8_MIN;
	volatile uint8_t x292 = 1U;
	static volatile int32_t t37 = -8073;

	t37 = (x289>>(x290<(x291%x292)));

	if (t37 != 13) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x297 = INT32_MAX;
	uint32_t x298 = 30U;
	uint16_t x299 = 0U;
	int32_t x300 = INT32_MAX;
	int32_t t38 = INT32_MAX;

	t38 = (x297>>(x298<(x299%x300)));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x306 = INT64_MIN;
	uint32_t x307 = UINT32_MAX;
	volatile int32_t t39 = 649;

	t39 = (x305>>(x306<(x307%x308)));

	if (t39 != 63) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x317 = INT16_MAX;
	static int8_t x318 = INT8_MAX;
	int16_t x319 = INT16_MAX;

	t40 = (x317>>(x318<(x319%x320)));

	if (t40 != 16383) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x330 = 615980718LLU;
	volatile int16_t x331 = INT16_MIN;
	uint16_t x332 = 119U;
	volatile int32_t t41 = -3084145;

	t41 = (x329>>(x330<(x331%x332)));

	if (t41 != 63) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x333 = 1526LLU;
	int32_t x334 = INT32_MIN;
	int16_t x335 = -124;
	uint16_t x336 = 55U;
	uint64_t t42 = 554404357128032700LLU;

	t42 = (x333>>(x334<(x335%x336)));

	if (t42 != 763LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x337 = UINT32_MAX;
	int8_t x338 = INT8_MIN;
	volatile int16_t x339 = INT16_MIN;
	int16_t x340 = INT16_MAX;

	t43 = (x337>>(x338<(x339%x340)));

	if (t43 != 2147483647U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x343 = 9577U;
	static uint64_t x344 = UINT64_MAX;
	int32_t t44 = -4;

	t44 = (x341>>(x342<(x343%x344)));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x349 = 0U;
	uint8_t x350 = 79U;
	static uint8_t x351 = 3U;
	uint8_t x352 = 55U;

	t45 = (x349>>(x350<(x351%x352)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x353 = 23U;
	int64_t x354 = INT64_MAX;
	volatile int16_t x355 = -1;
	uint64_t x356 = 41936841075939169LLU;
	volatile int32_t t46 = -1;

	t46 = (x353>>(x354<(x355%x356)));

	if (t46 != 23) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x357 = INT64_MAX;
	int32_t x358 = INT32_MIN;
	int64_t x359 = -1LL;
	volatile int64_t t47 = 74505342LL;

	t47 = (x357>>(x358<(x359%x360)));

	if (t47 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x361 = UINT8_MAX;
	static int16_t x362 = INT16_MIN;
	uint64_t x364 = 5664752713887LLU;
	volatile int32_t t48 = 3042;

	t48 = (x361>>(x362<(x363%x364)));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x369 = INT16_MAX;
	uint32_t x370 = 291309491U;
	volatile int16_t x371 = INT16_MIN;
	uint32_t x372 = UINT32_MAX;

	t49 = (x369>>(x370<(x371%x372)));

	if (t49 != 16383) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x373 = 11698;
	int8_t x375 = -12;
	static volatile int32_t x376 = -1;
	int32_t t50 = 453;

	t50 = (x373>>(x374<(x375%x376)));

	if (t50 != 11698) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x385 = 251445161U;
	volatile uint16_t x386 = 347U;
	volatile uint32_t t51 = 4878U;

	t51 = (x385>>(x386<(x387%x388)));

	if (t51 != 251445161U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x389 = 19U;
	static volatile uint64_t x390 = 331663223353LLU;
	int16_t x391 = 26;
	int64_t x392 = INT64_MAX;
	volatile int32_t t52 = 3801999;

	t52 = (x389>>(x390<(x391%x392)));

	if (t52 != 19) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x394 = UINT8_MAX;
	static uint64_t x395 = UINT64_MAX;
	int64_t x396 = INT64_MIN;
	volatile int32_t t53 = 73905;

	t53 = (x393>>(x394<(x395%x396)));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x409 = 4794U;
	int8_t x410 = -1;
	int8_t x411 = -1;
	volatile int8_t x412 = -2;
	volatile int32_t t54 = -7789129;

	t54 = (x409>>(x410<(x411%x412)));

	if (t54 != 4794) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x413 = INT8_MAX;
	uint64_t x416 = 2793824901384555LLU;
	static volatile int32_t t55 = -2719;

	t55 = (x413>>(x414<(x415%x416)));

	if (t55 != 63) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x433 = 57;
	volatile int16_t x436 = -7975;
	int32_t t56 = 6985;

	t56 = (x433>>(x434<(x435%x436)));

	if (t56 != 57) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x437 = UINT32_MAX;
	volatile uint32_t t57 = 252U;

	t57 = (x437>>(x438<(x439%x440)));

	if (t57 != 2147483647U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x441 = 3;
	static uint32_t x442 = 7520655U;
	static uint8_t x443 = 29U;
	volatile int32_t x444 = -309;

	t58 = (x441>>(x442<(x443%x444)));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x449 = 12;
	int32_t x450 = INT32_MIN;
	int8_t x451 = INT8_MIN;
	uint8_t x452 = 77U;
	volatile int32_t t59 = 9;

	t59 = (x449>>(x450<(x451%x452)));

	if (t59 != 6) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x453 = INT16_MAX;
	static volatile uint32_t x454 = 34502U;
	static volatile int8_t x455 = INT8_MIN;
	uint32_t x456 = UINT32_MAX;
	int32_t t60 = 5338662;

	t60 = (x453>>(x454<(x455%x456)));

	if (t60 != 16383) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x461 = UINT8_MAX;
	int16_t x462 = 65;
	static int32_t x463 = INT32_MAX;
	volatile int64_t x464 = -130457208454LL;
	int32_t t61 = 41;

	t61 = (x461>>(x462<(x463%x464)));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x465 = 40U;
	uint16_t x466 = 875U;
	int32_t x467 = INT32_MAX;
	int32_t t62 = -10648021;

	t62 = (x465>>(x466<(x467%x468)));

	if (t62 != 20) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x469 = UINT32_MAX;
	volatile int8_t x470 = INT8_MIN;
	volatile uint16_t x472 = UINT16_MAX;
	volatile uint32_t t63 = 157894U;

	t63 = (x469>>(x470<(x471%x472)));

	if (t63 != 2147483647U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x477 = UINT32_MAX;
	int16_t x478 = -79;
	static int32_t x480 = -1;
	volatile uint32_t t64 = 102U;

	t64 = (x477>>(x478<(x479%x480)));

	if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x497 = 0U;
	uint8_t x498 = 60U;
	int8_t x499 = 3;
	uint32_t x500 = 32284U;
	int32_t t65 = 11335207;

	t65 = (x497>>(x498<(x499%x500)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x501 = INT32_MAX;
	static int8_t x503 = -1;
	volatile int8_t x504 = INT8_MIN;
	volatile int32_t t66 = 1308165;

	t66 = (x501>>(x502<(x503%x504)));

	if (t66 != 1073741823) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x521 = 16U;
	static int32_t x522 = -189348543;
	static volatile int8_t x523 = 0;
	int8_t x524 = INT8_MIN;
	static volatile int32_t t67 = -54078632;

	t67 = (x521>>(x522<(x523%x524)));

	if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x529 = 97U;
	int8_t x530 = 3;
	int16_t x531 = INT16_MIN;
	int32_t x532 = -1;
	volatile int32_t t68 = -18;

	t68 = (x529>>(x530<(x531%x532)));

	if (t68 != 97) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x541 = 6U;
	int16_t x542 = 15528;
	uint32_t x543 = 918508U;
	volatile int8_t x544 = INT8_MAX;
	volatile int32_t t69 = -4082;

	t69 = (x541>>(x542<(x543%x544)));

	if (t69 != 6) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x545 = 7711U;
	static int16_t x546 = -844;
	volatile int32_t x548 = INT32_MAX;
	static int32_t t70 = -59;

	t70 = (x545>>(x546<(x547%x548)));

	if (t70 != 3855) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x549 = 0;
	int64_t x551 = INT64_MAX;
	int8_t x552 = -1;
	int32_t t71 = 497057;

	t71 = (x549>>(x550<(x551%x552)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x553 = 7U;
	volatile int16_t x554 = INT16_MIN;
	int32_t x555 = INT32_MIN;
	int16_t x556 = INT16_MIN;
	int32_t t72 = 197892896;

	t72 = (x553>>(x554<(x555%x556)));

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x577 = UINT8_MAX;
	int8_t x578 = -9;
	int32_t t73 = -12;

	t73 = (x577>>(x578<(x579%x580)));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x582 = 171407;
	volatile uint32_t x583 = 168936126U;
	volatile int32_t t74 = -11027535;

	t74 = (x581>>(x582<(x583%x584)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x597 = UINT16_MAX;
	int8_t x598 = 3;
	int8_t x599 = -1;
	uint32_t x600 = UINT32_MAX;
	volatile int32_t t75 = -2739030;

	t75 = (x597>>(x598<(x599%x600)));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x601 = 30849783295975496LL;
	static volatile int64_t x602 = -1LL;
	volatile int64_t x603 = 646026088LL;
	int64_t x604 = INT64_MIN;
	static int64_t t76 = -186531296LL;

	t76 = (x601>>(x602<(x603%x604)));

	if (t76 != 15424891647987748LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x614 = INT64_MIN;
	int32_t x616 = 55380984;
	volatile int32_t t77 = 7810;

	t77 = (x613>>(x614<(x615%x616)));

	if (t77 != 63) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x629 = UINT32_MAX;
	int16_t x630 = -1;
	int64_t x631 = -1LL;
	static int16_t x632 = -1;
	uint32_t t78 = 0U;

	t78 = (x629>>(x630<(x631%x632)));

	if (t78 != 2147483647U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x633 = 11483U;
	static uint8_t x635 = 124U;
	int8_t x636 = INT8_MAX;
	volatile uint32_t t79 = 3578U;

	t79 = (x633>>(x634<(x635%x636)));

	if (t79 != 5741U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x644 = INT64_MIN;
	static int32_t t80 = 6469859;

	t80 = (x641>>(x642<(x643%x644)));

	if (t80 != 448) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x645 = 7LLU;
	static int8_t x646 = INT8_MIN;
	int16_t x647 = 422;
	int32_t x648 = 4533146;
	static uint64_t t81 = 1041897LLU;

	t81 = (x645>>(x646<(x647%x648)));

	if (t81 != 3LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x649 = 3211LLU;
	int8_t x650 = 51;
	uint32_t x651 = 4U;
	int32_t x652 = -1;
	static volatile uint64_t t82 = 2331936254169462053LLU;

	t82 = (x649>>(x650<(x651%x652)));

	if (t82 != 3211LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x653 = 1516869;
	static int64_t x655 = INT64_MIN;
	static int64_t x656 = 10LL;
	int32_t t83 = 0;

	t83 = (x653>>(x654<(x655%x656)));

	if (t83 != 1516869) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x657 = 230U;
	uint64_t x659 = 465727287091945LLU;
	volatile int8_t x660 = -1;
	volatile int32_t t84 = -761;

	t84 = (x657>>(x658<(x659%x660)));

	if (t84 != 115) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x661 = UINT32_MAX;
	uint64_t x662 = 488629653503801141LLU;
	volatile int32_t x663 = 101;
	int8_t x664 = INT8_MIN;

	t85 = (x661>>(x662<(x663%x664)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x669 = 80984U;
	int64_t x670 = 0LL;
	volatile int64_t x672 = 2921311016438903LL;

	t86 = (x669>>(x670<(x671%x672)));

	if (t86 != 40492U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x673 = 1U;
	int16_t x675 = 14390;
	int8_t x676 = -1;
	volatile int32_t t87 = -89483806;

	t87 = (x673>>(x674<(x675%x676)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x681 = INT64_MAX;
	int64_t x682 = 0LL;
	int64_t x683 = INT64_MIN;
	int16_t x684 = -1;

	t88 = (x681>>(x682<(x683%x684)));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x691 = 128426338U;
	uint16_t x692 = 76U;
	uint64_t t89 = UINT64_MAX;

	t89 = (x689>>(x690<(x691%x692)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x697 = INT8_MAX;
	volatile int64_t x698 = -1LL;
	int32_t x699 = INT32_MAX;
	static volatile int32_t t90 = -31;

	t90 = (x697>>(x698<(x699%x700)));

	if (t90 != 63) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x710 = -1;
	volatile int64_t x711 = -1LL;
	volatile int64_t x712 = -1LL;
	volatile int32_t t91 = 53379;

	t91 = (x709>>(x710<(x711%x712)));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x717 = INT16_MAX;
	int8_t x718 = -1;
	volatile int16_t x719 = INT16_MAX;
	int16_t x720 = INT16_MAX;
	volatile int32_t t92 = 0;

	t92 = (x717>>(x718<(x719%x720)));

	if (t92 != 16383) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x721 = INT16_MAX;
	volatile uint32_t x722 = 13U;
	volatile int16_t x723 = INT16_MAX;
	int64_t x724 = INT64_MIN;
	int32_t t93 = 24077;

	t93 = (x721>>(x722<(x723%x724)));

	if (t93 != 16383) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x725 = 255710LLU;
	int32_t x728 = INT32_MIN;
	uint64_t t94 = 158414479850296148LLU;

	t94 = (x725>>(x726<(x727%x728)));

	if (t94 != 127855LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x737 = 880946464;
	int32_t x738 = INT32_MIN;
	uint32_t x739 = UINT32_MAX;
	int32_t t95 = -2;

	t95 = (x737>>(x738<(x739%x740)));

	if (t95 != 880946464) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x741 = 6U;
	int32_t x742 = 174574068;
	static uint8_t x743 = UINT8_MAX;
	uint64_t x744 = 1513151694LLU;
	volatile int32_t t96 = 7129;

	t96 = (x741>>(x742<(x743%x744)));

	if (t96 != 6) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x753 = UINT64_MAX;
	static int64_t x754 = INT64_MIN;
	uint32_t x755 = 114474253U;
	int32_t x756 = INT32_MIN;
	volatile uint64_t t97 = 431LLU;

	t97 = (x753>>(x754<(x755%x756)));

	if (t97 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x757 = 0U;
	volatile uint16_t x758 = UINT16_MAX;
	int32_t x759 = -1;

	t98 = (x757>>(x758<(x759%x760)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x761 = 14;
	int16_t x763 = INT16_MAX;
	int16_t x764 = 1;
	static int32_t t99 = 53;

	t99 = (x761>>(x762<(x763%x764)));

	if (t99 != 14) { NG(); } else { ; }
	
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

