#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = -1;
int8_t x14 = INT8_MIN;
int16_t x16 = 790;
int64_t t2 = 10LL;
int8_t x19 = INT8_MAX;
int8_t x25 = 1;
volatile int32_t x32 = 16576731;
uint16_t x41 = 25839U;
int64_t x44 = -1320240033646LL;
uint16_t x67 = 7U;
static uint8_t x77 = 2U;
uint64_t x78 = 7167720260429812748LLU;
static volatile int64_t x90 = -29737LL;
int32_t x94 = 645133924;
static volatile int64_t x104 = 350LL;
int8_t x108 = INT8_MIN;
uint32_t x110 = UINT32_MAX;
int32_t x112 = -1;
volatile int8_t x122 = INT8_MIN;
static int64_t x132 = INT64_MIN;
uint8_t x149 = 87U;
uint32_t x157 = 12459936U;
uint32_t t25 = 134579106U;
static uint16_t x167 = 0U;
volatile int32_t t27 = 1;
uint8_t x169 = 58U;
uint32_t x172 = 3215872U;
int64_t x182 = 15LL;
uint8_t x197 = 114U;
int8_t x198 = INT8_MIN;
int8_t x199 = INT8_MAX;
volatile int32_t t30 = 86;
uint8_t x209 = 1U;
uint8_t x212 = UINT8_MAX;
volatile int64_t x225 = INT64_MAX;
int8_t x228 = -1;
static uint8_t x233 = 83U;
int64_t x234 = -1LL;
uint64_t x235 = 135LLU;
int32_t x236 = INT32_MIN;
uint32_t t36 = 12713U;
int64_t x256 = 47168224LL;
static volatile uint64_t t38 = 36346986805903926LLU;
volatile int8_t x271 = INT8_MIN;
int32_t t39 = -190492;
int32_t t40 = -1;
static uint16_t x294 = 1U;
volatile uint16_t x295 = 194U;
volatile uint8_t x305 = 11U;
static int64_t x311 = 32141505LL;
static int8_t x315 = INT8_MIN;
static int8_t x327 = INT8_MAX;
volatile int16_t x330 = INT16_MIN;
int32_t x334 = -1;
static int16_t x336 = -105;
volatile uint64_t t49 = 10LLU;
uint32_t x385 = 47U;
int32_t t53 = INT32_MAX;
int32_t x394 = INT32_MIN;
static uint32_t x399 = UINT32_MAX;
int64_t x406 = INT64_MIN;
volatile int32_t t57 = 55029117;
int16_t x409 = 16;
static int8_t x415 = -1;
static int32_t x416 = INT32_MIN;
static int32_t t59 = -112944;
volatile int16_t x420 = INT16_MIN;
uint32_t x421 = 16146868U;
static volatile uint32_t t62 = 280954U;
static volatile uint16_t x454 = UINT16_MAX;
int64_t x455 = INT64_MIN;
static int32_t t65 = -1040734960;
int16_t x470 = -1;
int32_t x475 = INT32_MIN;
volatile int32_t t70 = INT32_MAX;
uint64_t x488 = UINT64_MAX;
static volatile uint64_t t72 = 68481310617194LLU;
uint64_t x495 = UINT64_MAX;
int32_t x499 = INT32_MIN;
volatile int16_t x508 = 1;
uint64_t x513 = UINT64_MAX;
int8_t x514 = INT8_MIN;
uint8_t x516 = 0U;
uint64_t t77 = 93324567698473680LLU;
volatile int8_t x525 = 0;
static uint64_t x537 = 62446LLU;
uint64_t x553 = 10999LLU;
int32_t x558 = INT32_MIN;
int8_t x569 = INT8_MAX;
int16_t x571 = -476;
volatile int32_t t84 = -1;
static int8_t x582 = -1;
static uint32_t t87 = 2907920U;
static uint64_t t90 = 1739552LLU;
volatile int32_t t91 = -15898;
int32_t t92 = 344667703;
int8_t x613 = 0;
uint64_t x614 = UINT64_MAX;
int16_t x618 = -397;
int64_t x619 = INT64_MAX;
uint64_t x623 = 4LLU;
uint8_t x625 = 0U;
volatile int8_t x626 = 0;
uint8_t x631 = 4U;
int16_t x640 = INT16_MIN;
int8_t x643 = -3;


void f0(void) {
	volatile uint32_t x5 = 2556478U;
	volatile int64_t x6 = 29LL;
	int8_t x7 = -1;
	static volatile int16_t x8 = 2;
	static volatile uint32_t t0 = 127U;

	t0 = (x5<<(x6<(x7==x8)));

	if (t0 != 2556478U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = INT64_MAX;
	uint16_t x10 = 91U;
	uint64_t x12 = 227989197LLU;
	volatile int64_t t1 = INT64_MAX;

	t1 = (x9<<(x10<(x11==x12)));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = 7LL;
	int16_t x15 = -1;

	t2 = (x13<<(x14<(x15==x16)));

	if (t2 != 14LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = 1;
	int32_t x18 = INT32_MIN;
	int8_t x20 = 0;
	int32_t t3 = 70953;

	t3 = (x17<<(x18<(x19==x20)));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x26 = UINT8_MAX;
	int16_t x27 = 0;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t4 = -3813642;

	t4 = (x25<<(x26<(x27==x28)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x29 = 3;
	int8_t x30 = INT8_MIN;
	int8_t x31 = INT8_MIN;
	int32_t t5 = -200950072;

	t5 = (x29<<(x30<(x31==x32)));

	if (t5 != 6) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = 10;
	int8_t x34 = INT8_MAX;
	static int64_t x35 = INT64_MIN;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t6 = 3448;

	t6 = (x33<<(x34<(x35==x36)));

	if (t6 != 10) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 292U;
	uint64_t x38 = 8976437297271LLU;
	static volatile uint32_t x39 = UINT32_MAX;
	int32_t x40 = -3565505;
	volatile int32_t t7 = -887;

	t7 = (x37<<(x38<(x39==x40)));

	if (t7 != 292) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x42 = 255624994;
	static uint8_t x43 = 56U;
	volatile int32_t t8 = 1344;

	t8 = (x41<<(x42<(x43==x44)));

	if (t8 != 25839) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x53 = 19U;
	uint32_t x54 = 62218U;
	int16_t x55 = INT16_MIN;
	uint8_t x56 = 74U;
	int32_t t9 = -2;

	t9 = (x53<<(x54<(x55==x56)));

	if (t9 != 19) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = 34010936340072LLU;
	int32_t x58 = INT32_MIN;
	volatile uint16_t x59 = 7461U;
	int16_t x60 = -5;
	uint64_t t10 = 59619825LLU;

	t10 = (x57<<(x58<(x59==x60)));

	if (t10 != 68021872680144LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x61 = 39U;
	int64_t x62 = 232679830LL;
	int32_t x63 = INT32_MAX;
	volatile int8_t x64 = -1;
	int32_t t11 = -1462820;

	t11 = (x61<<(x62<(x63==x64)));

	if (t11 != 39) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = UINT16_MAX;
	static int64_t x66 = INT64_MIN;
	uint8_t x68 = UINT8_MAX;
	volatile int32_t t12 = -8674363;

	t12 = (x65<<(x66<(x67==x68)));

	if (t12 != 131070) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x69 = 17866;
	int32_t x70 = INT32_MAX;
	static uint16_t x71 = 13U;
	uint64_t x72 = 1690LLU;
	int32_t t13 = 99;

	t13 = (x69<<(x70<(x71==x72)));

	if (t13 != 17866) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x79 = INT16_MIN;
	static int64_t x80 = 583446436LL;
	volatile int32_t t14 = 122630186;

	t14 = (x77<<(x78<(x79==x80)));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x89 = INT16_MAX;
	volatile uint16_t x91 = UINT16_MAX;
	static uint8_t x92 = 7U;
	int32_t t15 = -11;

	t15 = (x89<<(x90<(x91==x92)));

	if (t15 != 65534) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x93 = UINT8_MAX;
	uint16_t x95 = 0U;
	uint16_t x96 = UINT16_MAX;
	int32_t t16 = 1112;

	t16 = (x93<<(x94<(x95==x96)));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x101 = INT8_MAX;
	int64_t x102 = INT64_MIN;
	uint32_t x103 = 171308902U;
	static volatile int32_t t17 = -1;

	t17 = (x101<<(x102<(x103==x104)));

	if (t17 != 254) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = INT16_MAX;
	uint16_t x106 = 747U;
	int8_t x107 = INT8_MIN;
	volatile int32_t t18 = -21711;

	t18 = (x105<<(x106<(x107==x108)));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x109 = 18U;
	int32_t x111 = -1;
	static volatile int32_t t19 = 1;

	t19 = (x109<<(x110<(x111==x112)));

	if (t19 != 18) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x121 = UINT8_MAX;
	static int8_t x123 = INT8_MIN;
	static int8_t x124 = -5;
	static volatile int32_t t20 = 3394351;

	t20 = (x121<<(x122<(x123==x124)));

	if (t20 != 510) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x125 = UINT32_MAX;
	uint16_t x126 = 3U;
	int64_t x127 = INT64_MIN;
	static uint16_t x128 = 12788U;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x125<<(x126<(x127==x128)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x129 = 0;
	int32_t x130 = -114;
	int8_t x131 = INT8_MIN;
	static int32_t t22 = 0;

	t22 = (x129<<(x130<(x131==x132)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x133 = 445398833078LL;
	int16_t x134 = -210;
	static int32_t x135 = INT32_MAX;
	static volatile uint64_t x136 = 31528183LLU;
	volatile int64_t t23 = 4101174LL;

	t23 = (x133<<(x134<(x135==x136)));

	if (t23 != 890797666156LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x150 = INT8_MAX;
	uint32_t x151 = UINT32_MAX;
	int16_t x152 = INT16_MIN;
	static int32_t t24 = -25880;

	t24 = (x149<<(x150<(x151==x152)));

	if (t24 != 87) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x158 = -871;
	int32_t x159 = -84327695;
	int64_t x160 = INT64_MIN;

	t25 = (x157<<(x158<(x159==x160)));

	if (t25 != 24919872U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x162 = INT64_MIN;
	int64_t x163 = -7101000LL;
	uint16_t x164 = UINT16_MAX;
	volatile uint64_t t26 = 846584921522367LLU;

	t26 = (x161<<(x162<(x163==x164)));

	if (t26 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x165 = 8;
	volatile int16_t x166 = -29;
	static volatile int32_t x168 = INT32_MAX;

	t27 = (x165<<(x166<(x167==x168)));

	if (t27 != 16) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x170 = INT32_MAX;
	int32_t x171 = INT32_MIN;
	volatile int32_t t28 = 188321166;

	t28 = (x169<<(x170<(x171==x172)));

	if (t28 != 58) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x181 = 2LLU;
	uint32_t x183 = UINT32_MAX;
	int32_t x184 = -1;
	uint64_t t29 = 7784LLU;

	t29 = (x181<<(x182<(x183==x184)));

	if (t29 != 2LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x200 = INT8_MIN;

	t30 = (x197<<(x198<(x199==x200)));

	if (t30 != 228) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x201 = UINT16_MAX;
	volatile uint8_t x202 = UINT8_MAX;
	int64_t x203 = -1200626520266111615LL;
	int16_t x204 = -890;
	static volatile int32_t t31 = 5;

	t31 = (x201<<(x202<(x203==x204)));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x210 = UINT16_MAX;
	uint8_t x211 = UINT8_MAX;
	int32_t t32 = -103156;

	t32 = (x209<<(x210<(x211==x212)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x213 = UINT64_MAX;
	volatile int16_t x214 = -1;
	volatile int8_t x215 = INT8_MIN;
	volatile int16_t x216 = 29;
	volatile uint64_t t33 = 156330791399639237LLU;

	t33 = (x213<<(x214<(x215==x216)));

	if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x226 = 10U;
	uint8_t x227 = UINT8_MAX;
	volatile int64_t t34 = INT64_MAX;

	t34 = (x225<<(x226<(x227==x228)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t t35 = 59172313;

	t35 = (x233<<(x234<(x235==x236)));

	if (t35 != 166) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x241 = 1U;
	volatile uint8_t x242 = 56U;
	volatile int8_t x243 = INT8_MIN;
	int32_t x244 = INT32_MIN;

	t36 = (x241<<(x242<(x243==x244)));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x253 = 13131839U;
	int32_t x254 = 9475863;
	uint16_t x255 = 1U;
	volatile uint32_t t37 = 8245507U;

	t37 = (x253<<(x254<(x255==x256)));

	if (t37 != 13131839U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x257 = 13LLU;
	static int16_t x258 = INT16_MIN;
	uint8_t x259 = 16U;
	uint8_t x260 = 7U;

	t38 = (x257<<(x258<(x259==x260)));

	if (t38 != 26LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x269 = INT8_MAX;
	int64_t x270 = INT64_MIN;
	static int64_t x272 = INT64_MAX;

	t39 = (x269<<(x270<(x271==x272)));

	if (t39 != 254) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x277 = 518;
	int8_t x278 = -8;
	uint16_t x279 = 2116U;
	int16_t x280 = -1;

	t40 = (x277<<(x278<(x279==x280)));

	if (t40 != 1036) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x281 = 28U;
	static uint16_t x282 = 272U;
	static int64_t x283 = 2737745LL;
	int64_t x284 = 1320274541186LL;
	volatile uint32_t t41 = 36U;

	t41 = (x281<<(x282<(x283==x284)));

	if (t41 != 28U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x293 = 7U;
	int16_t x296 = INT16_MIN;
	volatile int32_t t42 = -520827;

	t42 = (x293<<(x294<(x295==x296)));

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x306 = -1;
	uint32_t x307 = UINT32_MAX;
	int64_t x308 = INT64_MIN;
	int32_t t43 = 191346;

	t43 = (x305<<(x306<(x307==x308)));

	if (t43 != 22) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x309 = 3296LLU;
	uint64_t x310 = 1135433LLU;
	int8_t x312 = -1;
	uint64_t t44 = 3553101151656662LLU;

	t44 = (x309<<(x310<(x311==x312)));

	if (t44 != 3296LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x313 = 4002U;
	uint16_t x314 = 2710U;
	static int64_t x316 = INT64_MIN;
	uint32_t t45 = 48U;

	t45 = (x313<<(x314<(x315==x316)));

	if (t45 != 4002U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x321 = 132756606;
	int64_t x322 = -1LL;
	uint8_t x323 = 6U;
	static int8_t x324 = 3;
	int32_t t46 = -1910;

	t46 = (x321<<(x322<(x323==x324)));

	if (t46 != 265513212) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x325 = INT8_MAX;
	int64_t x326 = -1LL;
	int8_t x328 = -1;
	volatile int32_t t47 = 12711711;

	t47 = (x325<<(x326<(x327==x328)));

	if (t47 != 254) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x329 = 1;
	volatile uint8_t x331 = 28U;
	int8_t x332 = -1;
	static volatile int32_t t48 = 3;

	t48 = (x329<<(x330<(x331==x332)));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x333 = 25LLU;
	int64_t x335 = -10478964703673LL;

	t49 = (x333<<(x334<(x335==x336)));

	if (t49 != 50LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x345 = UINT16_MAX;
	int8_t x346 = INT8_MAX;
	uint8_t x347 = 1U;
	volatile int64_t x348 = -1846LL;
	volatile int32_t t50 = -1;

	t50 = (x345<<(x346<(x347==x348)));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x353 = 225053265;
	static int64_t x354 = 1707227384806LL;
	static int64_t x355 = INT64_MIN;
	uint32_t x356 = UINT32_MAX;
	volatile int32_t t51 = -1051228662;

	t51 = (x353<<(x354<(x355==x356)));

	if (t51 != 225053265) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x386 = 179668715682419535LL;
	volatile int8_t x387 = INT8_MIN;
	int16_t x388 = -1;
	static volatile uint32_t t52 = 124U;

	t52 = (x385<<(x386<(x387==x388)));

	if (t52 != 47U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x389 = INT32_MAX;
	uint16_t x390 = 1U;
	static uint64_t x391 = 842LLU;
	uint16_t x392 = 54U;

	t53 = (x389<<(x390<(x391==x392)));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x393 = 1394LL;
	uint8_t x395 = UINT8_MAX;
	uint8_t x396 = UINT8_MAX;
	static volatile int64_t t54 = 506492LL;

	t54 = (x393<<(x394<(x395==x396)));

	if (t54 != 2788LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x397 = UINT16_MAX;
	volatile int32_t x398 = INT32_MIN;
	static int8_t x400 = -1;
	volatile int32_t t55 = 62619558;

	t55 = (x397<<(x398<(x399==x400)));

	if (t55 != 131070) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x401 = 29606U;
	int32_t x402 = INT32_MAX;
	int64_t x403 = -1LL;
	int32_t x404 = INT32_MIN;
	uint32_t t56 = 971U;

	t56 = (x401<<(x402<(x403==x404)));

	if (t56 != 29606U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x405 = 89U;
	int32_t x407 = -1;
	uint16_t x408 = 774U;

	t57 = (x405<<(x406<(x407==x408)));

	if (t57 != 178) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x410 = -1;
	int8_t x411 = INT8_MIN;
	static int32_t x412 = -783915;
	volatile int32_t t58 = -55;

	t58 = (x409<<(x410<(x411==x412)));

	if (t58 != 32) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x413 = 22U;
	static int16_t x414 = INT16_MIN;

	t59 = (x413<<(x414<(x415==x416)));

	if (t59 != 44) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x417 = UINT16_MAX;
	static int8_t x418 = INT8_MIN;
	int16_t x419 = 33;
	int32_t t60 = 125331163;

	t60 = (x417<<(x418<(x419==x420)));

	if (t60 != 131070) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x422 = UINT16_MAX;
	uint16_t x423 = 23U;
	static int8_t x424 = INT8_MIN;
	uint32_t t61 = 208U;

	t61 = (x421<<(x422<(x423==x424)));

	if (t61 != 16146868U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x425 = UINT32_MAX;
	int64_t x426 = INT64_MIN;
	int16_t x427 = INT16_MIN;
	int16_t x428 = INT16_MAX;

	t62 = (x425<<(x426<(x427==x428)));

	if (t62 != 4294967294U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x437 = UINT16_MAX;
	volatile int64_t x438 = -1LL;
	int16_t x439 = INT16_MIN;
	static uint8_t x440 = 21U;
	static volatile int32_t t63 = -12472;

	t63 = (x437<<(x438<(x439==x440)));

	if (t63 != 131070) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x445 = 31860067LLU;
	uint64_t x446 = 625157LLU;
	uint16_t x447 = UINT16_MAX;
	int32_t x448 = INT32_MIN;
	volatile uint64_t t64 = 106911LLU;

	t64 = (x445<<(x446<(x447==x448)));

	if (t64 != 31860067LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x453 = 1U;
	static int32_t x456 = INT32_MIN;

	t65 = (x453<<(x454<(x455==x456)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x457 = 94U;
	volatile uint16_t x458 = 0U;
	static volatile uint32_t x459 = UINT32_MAX;
	static int32_t x460 = INT32_MAX;
	int32_t t66 = 1;

	t66 = (x457<<(x458<(x459==x460)));

	if (t66 != 94) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x465 = INT8_MAX;
	int16_t x466 = INT16_MIN;
	uint64_t x467 = UINT64_MAX;
	uint16_t x468 = 17U;
	int32_t t67 = 1;

	t67 = (x465<<(x466<(x467==x468)));

	if (t67 != 254) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x469 = 0U;
	int16_t x471 = -1;
	volatile uint64_t x472 = 504050056LLU;
	static volatile int32_t t68 = 101;

	t68 = (x469<<(x470<(x471==x472)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x473 = 7414U;
	static volatile int8_t x474 = INT8_MIN;
	volatile int64_t x476 = 62213021836LL;
	volatile uint32_t t69 = 1U;

	t69 = (x473<<(x474<(x475==x476)));

	if (t69 != 14828U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x477 = INT32_MAX;
	int8_t x478 = 2;
	int64_t x479 = -1LL;
	volatile int64_t x480 = INT64_MAX;

	t70 = (x477<<(x478<(x479==x480)));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x481 = 18;
	int8_t x482 = 28;
	int32_t x483 = INT32_MIN;
	int8_t x484 = -1;
	int32_t t71 = 1406316;

	t71 = (x481<<(x482<(x483==x484)));

	if (t71 != 18) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x485 = 1LLU;
	volatile int32_t x486 = 2683;
	int8_t x487 = INT8_MIN;

	t72 = (x485<<(x486<(x487==x488)));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x489 = 8;
	volatile uint8_t x490 = UINT8_MAX;
	uint32_t x491 = UINT32_MAX;
	int32_t x492 = 4022;
	int32_t t73 = 62;

	t73 = (x489<<(x490<(x491==x492)));

	if (t73 != 8) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x493 = 14;
	static int16_t x494 = -1;
	static volatile int16_t x496 = INT16_MAX;
	volatile int32_t t74 = 1;

	t74 = (x493<<(x494<(x495==x496)));

	if (t74 != 28) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x497 = 5558U;
	uint8_t x498 = 0U;
	int8_t x500 = -56;
	volatile int32_t t75 = 5458883;

	t75 = (x497<<(x498<(x499==x500)));

	if (t75 != 5558) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x505 = 333U;
	uint16_t x506 = 47U;
	int8_t x507 = 3;
	static volatile int32_t t76 = 62;

	t76 = (x505<<(x506<(x507==x508)));

	if (t76 != 333) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x515 = -1;

	t77 = (x513<<(x514<(x515==x516)));

	if (t77 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x526 = 3171LL;
	volatile int64_t x527 = -1LL;
	int64_t x528 = INT64_MAX;
	int32_t t78 = 3855;

	t78 = (x525<<(x526<(x527==x528)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x529 = 15U;
	uint32_t x530 = 81333833U;
	int8_t x531 = -7;
	int8_t x532 = INT8_MAX;
	int32_t t79 = 244;

	t79 = (x529<<(x530<(x531==x532)));

	if (t79 != 15) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x538 = -1LL;
	static int32_t x539 = INT32_MIN;
	static int8_t x540 = INT8_MIN;
	volatile uint64_t t80 = 5865450648654504LLU;

	t80 = (x537<<(x538<(x539==x540)));

	if (t80 != 124892LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x549 = INT16_MAX;
	volatile int64_t x550 = -1LL;
	int32_t x551 = -1;
	int8_t x552 = INT8_MAX;
	int32_t t81 = 223226634;

	t81 = (x549<<(x550<(x551==x552)));

	if (t81 != 65534) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x554 = 1;
	static int64_t x555 = INT64_MIN;
	int16_t x556 = INT16_MIN;
	volatile uint64_t t82 = 159591981470774878LLU;

	t82 = (x553<<(x554<(x555==x556)));

	if (t82 != 10999LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x557 = 28597U;
	int32_t x559 = INT32_MAX;
	int32_t x560 = INT32_MIN;
	uint32_t t83 = 0U;

	t83 = (x557<<(x558<(x559==x560)));

	if (t83 != 57194U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x570 = INT32_MAX;
	int64_t x572 = INT64_MAX;

	t84 = (x569<<(x570<(x571==x572)));

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x573 = UINT16_MAX;
	static int8_t x574 = 1;
	static volatile uint8_t x575 = 41U;
	uint8_t x576 = 61U;
	volatile int32_t t85 = 14187889;

	t85 = (x573<<(x574<(x575==x576)));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x577 = 12U;
	int64_t x578 = -137725109239LL;
	int64_t x579 = 0LL;
	volatile int64_t x580 = -43444484079795LL;
	volatile int32_t t86 = 2994306;

	t86 = (x577<<(x578<(x579==x580)));

	if (t86 != 24) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x581 = 36U;
	uint16_t x583 = 10U;
	int16_t x584 = INT16_MIN;

	t87 = (x581<<(x582<(x583==x584)));

	if (t87 != 72U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x585 = 11LLU;
	int16_t x586 = -1;
	int16_t x587 = 180;
	volatile uint32_t x588 = UINT32_MAX;
	uint64_t t88 = 2138996202969932LLU;

	t88 = (x585<<(x586<(x587==x588)));

	if (t88 != 22LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x589 = 44U;
	volatile int32_t x590 = -67907;
	uint16_t x591 = 6U;
	int64_t x592 = INT64_MAX;
	static volatile int32_t t89 = 138;

	t89 = (x589<<(x590<(x591==x592)));

	if (t89 != 88) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x593 = 80969LLU;
	int16_t x594 = -3239;
	volatile int16_t x595 = -1;
	uint16_t x596 = 1U;

	t90 = (x593<<(x594<(x595==x596)));

	if (t90 != 161938LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x597 = 2457U;
	int8_t x598 = INT8_MIN;
	int8_t x599 = -1;
	int64_t x600 = INT64_MIN;

	t91 = (x597<<(x598<(x599==x600)));

	if (t91 != 4914) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x601 = 1346U;
	uint32_t x602 = UINT32_MAX;
	int8_t x603 = INT8_MIN;
	static int32_t x604 = INT32_MAX;

	t92 = (x601<<(x602<(x603==x604)));

	if (t92 != 1346) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x615 = 14U;
	static volatile uint8_t x616 = 2U;
	static volatile int32_t t93 = -177380318;

	t93 = (x613<<(x614<(x615==x616)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x617 = 7691U;
	static int16_t x620 = INT16_MIN;
	int32_t t94 = 38192;

	t94 = (x617<<(x618<(x619==x620)));

	if (t94 != 15382) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x621 = 1750U;
	int16_t x622 = INT16_MAX;
	int8_t x624 = -13;
	static volatile int32_t t95 = -472972;

	t95 = (x621<<(x622<(x623==x624)));

	if (t95 != 1750) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x627 = 4800;
	int32_t x628 = -31;
	int32_t t96 = -3498;

	t96 = (x625<<(x626<(x627==x628)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x629 = 1U;
	volatile int32_t x630 = INT32_MIN;
	int64_t x632 = INT64_MIN;
	volatile int32_t t97 = 39;

	t97 = (x629<<(x630<(x631==x632)));

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x637 = 18;
	int8_t x638 = INT8_MIN;
	volatile int8_t x639 = INT8_MAX;
	int32_t t98 = -541558347;

	t98 = (x637<<(x638<(x639==x640)));

	if (t98 != 36) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x641 = UINT32_MAX;
	uint32_t x642 = 15241681U;
	int16_t x644 = INT16_MIN;
	uint32_t t99 = UINT32_MAX;

	t99 = (x641<<(x642<(x643==x644)));

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

