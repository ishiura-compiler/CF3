#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = INT64_MAX;
int32_t x12 = -1;
uint8_t x14 = 2U;
int32_t x19 = -1;
volatile int32_t t4 = 902;
int32_t x60 = -2617585;
int16_t x84 = INT16_MAX;
int64_t x100 = INT64_MAX;
int8_t x123 = INT8_MIN;
volatile int16_t x127 = -1;
uint32_t x130 = 8125158U;
int64_t x139 = INT64_MIN;
int16_t x170 = INT16_MAX;
volatile int16_t x172 = 381;
volatile int32_t t21 = -2;
int32_t x178 = INT32_MIN;
uint8_t x180 = 11U;
static int32_t x195 = 155;
volatile int32_t t24 = 6763;
int32_t x202 = INT32_MIN;
uint8_t x204 = UINT8_MAX;
volatile uint64_t t25 = 564515254789414901LLU;
static volatile int8_t x212 = 19;
int64_t x245 = INT64_MIN;
static int8_t x260 = INT8_MAX;
uint64_t x276 = 1435716807243215LLU;
volatile int32_t x278 = -2172782;
int64_t x279 = INT64_MIN;
volatile int32_t t33 = 29;
int8_t x283 = -1;
int16_t x286 = INT16_MIN;
static int32_t x295 = -1;
static int64_t t36 = -115107887LL;
uint32_t x302 = 11616015U;
int8_t x331 = INT8_MIN;
int32_t x337 = 778;
volatile int64_t x339 = INT64_MIN;
uint32_t x340 = UINT32_MAX;
static volatile int16_t x355 = INT16_MIN;
static volatile int64_t t44 = -6834411508281LL;
int8_t x361 = 1;
int8_t x362 = INT8_MAX;
uint16_t x364 = 57U;
int64_t x381 = -13531LL;
int8_t x382 = -1;
uint8_t x384 = UINT8_MAX;
static uint16_t x396 = UINT16_MAX;
int16_t x409 = INT16_MIN;
int8_t x410 = -1;
volatile int32_t x411 = -3548;
int8_t x421 = 38;
int16_t x422 = 1;
int64_t x423 = INT64_MIN;
int16_t x430 = INT16_MIN;
volatile uint64_t t55 = UINT64_MAX;
volatile int64_t x446 = INT64_MIN;
uint32_t x461 = 2U;
int8_t x462 = 9;
int32_t x469 = -1;
uint8_t x470 = 10U;
int64_t x474 = -139493428LL;
volatile uint8_t x486 = UINT8_MAX;
int32_t x492 = INT32_MIN;
volatile int8_t x522 = INT8_MIN;
int32_t x528 = -1;
volatile int32_t x535 = 30;
int8_t x555 = INT8_MAX;
int16_t x567 = INT16_MIN;
static int16_t x568 = INT16_MAX;
uint64_t x581 = 63902647582603LLU;
static uint8_t x583 = 52U;
volatile int64_t x584 = 27541924LL;
volatile int16_t x595 = 11;
static int64_t x627 = INT64_MIN;
int64_t x634 = INT64_MAX;
int64_t x674 = INT64_MAX;
int64_t x675 = -791227575471LL;
uint32_t x676 = UINT32_MAX;
int8_t x681 = INT8_MIN;
static int64_t x719 = -1LL;
volatile int32_t x720 = INT32_MAX;
volatile int32_t t94 = 474;
volatile int16_t x725 = INT16_MIN;
volatile int32_t t95 = -2200224;
uint16_t x733 = UINT16_MAX;
int8_t x740 = 0;
int8_t x742 = 1;
int64_t x749 = INT64_MIN;


void f0(void) {
	int16_t x5 = 69;
	uint8_t x6 = 1U;
	static uint64_t x7 = 22885017239726LLU;
	volatile int32_t t0 = -39849573;

	t0 = (x5|(x6%(x7<=x8)));

	if (t0 != 69) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = INT8_MIN;
	uint16_t x10 = UINT16_MAX;
	int16_t x11 = INT16_MIN;
	static int32_t t1 = -16;

	t1 = (x9|(x10%(x11<=x12)));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = -1;
	int64_t x15 = INT64_MIN;
	int8_t x16 = -1;
	volatile int32_t t2 = -702292;

	t2 = (x13|(x14%(x15<=x16)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = -119;
	int64_t x18 = -128444LL;
	volatile uint8_t x20 = 0U;
	volatile int64_t t3 = -35687284LL;

	t3 = (x17|(x18%(x19<=x20)));

	if (t3 != -119LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 75U;
	static int32_t x22 = -6;
	static uint64_t x23 = 16118LLU;
	int32_t x24 = INT32_MIN;

	t4 = (x21|(x22%(x23<=x24)));

	if (t4 != 75) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	static uint32_t x26 = 3485U;
	volatile uint64_t x27 = 22LLU;
	int32_t x28 = -439;
	volatile int64_t t5 = -115380729LL;

	t5 = (x25|(x26%(x27<=x28)));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = 1LL;
	static uint64_t x38 = UINT64_MAX;
	static volatile int16_t x39 = INT16_MIN;
	int64_t x40 = 253000LL;
	uint64_t t6 = 516479162477661492LLU;

	t6 = (x37|(x38%(x39<=x40)));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x45 = 220U;
	int32_t x46 = 43799;
	static uint64_t x47 = 1010062216999LLU;
	int32_t x48 = -24908424;
	volatile uint32_t t7 = 363U;

	t7 = (x45|(x46%(x47<=x48)));

	if (t7 != 220U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = 219;
	volatile int16_t x50 = INT16_MIN;
	uint16_t x51 = 0U;
	int8_t x52 = 29;
	int32_t t8 = -1123019;

	t8 = (x49|(x50%(x51<=x52)));

	if (t8 != 219) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = -6;
	static uint16_t x58 = 15U;
	static int32_t x59 = INT32_MIN;
	int32_t t9 = 10994983;

	t9 = (x57|(x58%(x59<=x60)));

	if (t9 != -6) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = 363;
	int16_t x66 = 3975;
	int8_t x67 = 0;
	volatile int32_t x68 = 25;
	static int32_t t10 = -5627932;

	t10 = (x65|(x66%(x67<=x68)));

	if (t10 != 363) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x81 = INT32_MAX;
	int16_t x82 = INT16_MAX;
	int32_t x83 = 26447;
	int32_t t11 = INT32_MAX;

	t11 = (x81|(x82%(x83<=x84)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x97 = INT32_MAX;
	uint64_t x98 = 34305189LLU;
	int8_t x99 = INT8_MIN;
	static volatile uint64_t t12 = 79945534LLU;

	t12 = (x97|(x98%(x99<=x100)));

	if (t12 != 2147483647LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x101 = -1LL;
	static uint64_t x102 = UINT64_MAX;
	int64_t x103 = -1LL;
	int16_t x104 = -1;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (x101|(x102%(x103<=x104)));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x109 = UINT16_MAX;
	int16_t x110 = 7;
	volatile uint32_t x111 = 171418U;
	int16_t x112 = -1;
	volatile int32_t t14 = -25;

	t14 = (x109|(x110%(x111<=x112)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x113 = 189;
	volatile int8_t x114 = INT8_MIN;
	static int64_t x115 = -316503491LL;
	uint8_t x116 = UINT8_MAX;
	int32_t t15 = -478;

	t15 = (x113|(x114%(x115<=x116)));

	if (t15 != 189) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x117 = INT64_MIN;
	uint8_t x118 = UINT8_MAX;
	int32_t x119 = INT32_MIN;
	int64_t x120 = -1LL;
	int64_t t16 = INT64_MIN;

	t16 = (x117|(x118%(x119<=x120)));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x121 = INT16_MIN;
	uint8_t x122 = 4U;
	uint32_t x124 = UINT32_MAX;
	int32_t t17 = 186462955;

	t17 = (x121|(x122%(x123<=x124)));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x125 = 63575LL;
	uint8_t x126 = 42U;
	uint8_t x128 = UINT8_MAX;
	volatile int64_t t18 = 5312879981672LL;

	t18 = (x125|(x126%(x127<=x128)));

	if (t18 != 63575LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x129 = INT64_MIN;
	uint32_t x131 = UINT32_MAX;
	static uint64_t x132 = UINT64_MAX;
	volatile int64_t t19 = INT64_MIN;

	t19 = (x129|(x130%(x131<=x132)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x137 = INT8_MIN;
	int8_t x138 = INT8_MIN;
	uint8_t x140 = 5U;
	volatile int32_t t20 = 1;

	t20 = (x137|(x138%(x139<=x140)));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x169 = -4018;
	volatile int32_t x171 = -1;

	t21 = (x169|(x170%(x171<=x172)));

	if (t21 != -4018) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x177 = 0;
	volatile int64_t x179 = INT64_MIN;
	volatile int32_t t22 = 0;

	t22 = (x177|(x178%(x179<=x180)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x193 = INT32_MAX;
	static uint16_t x194 = 2066U;
	int16_t x196 = 6625;
	int32_t t23 = INT32_MAX;

	t23 = (x193|(x194%(x195<=x196)));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x197 = -18;
	int8_t x198 = INT8_MIN;
	uint64_t x199 = 27LLU;
	static int32_t x200 = INT32_MAX;

	t24 = (x197|(x198%(x199<=x200)));

	if (t24 != -18) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x201 = 4316041067393928LLU;
	int8_t x203 = -7;

	t25 = (x201|(x202%(x203<=x204)));

	if (t25 != 4316041067393928LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x209 = -1764;
	int8_t x210 = -1;
	int64_t x211 = -1LL;
	static volatile int32_t t26 = 135;

	t26 = (x209|(x210%(x211<=x212)));

	if (t26 != -1764) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x221 = INT64_MIN;
	volatile int64_t x222 = 2915804615374241LL;
	int16_t x223 = 642;
	int16_t x224 = INT16_MAX;
	static int64_t t27 = INT64_MIN;

	t27 = (x221|(x222%(x223<=x224)));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x233 = 72U;
	int64_t x234 = -19LL;
	uint64_t x235 = 8626687580340055025LLU;
	int8_t x236 = INT8_MIN;
	int64_t t28 = -9683654LL;

	t28 = (x233|(x234%(x235<=x236)));

	if (t28 != 72LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x246 = -1;
	volatile int32_t x247 = -367;
	int32_t x248 = INT32_MAX;
	int64_t t29 = INT64_MIN;

	t29 = (x245|(x246%(x247<=x248)));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x249 = INT32_MAX;
	int16_t x250 = INT16_MIN;
	volatile int16_t x251 = 10;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t30 = INT32_MAX;

	t30 = (x249|(x250%(x251<=x252)));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x257 = INT64_MAX;
	int32_t x258 = 936;
	int8_t x259 = INT8_MIN;
	int64_t t31 = INT64_MAX;

	t31 = (x257|(x258%(x259<=x260)));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x273 = 136072318030751146LL;
	uint16_t x274 = UINT16_MAX;
	int16_t x275 = 2092;
	volatile int64_t t32 = -2103853774126800LL;

	t32 = (x273|(x274%(x275<=x276)));

	if (t32 != 136072318030751146LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x277 = 0;
	static volatile int16_t x280 = INT16_MAX;

	t33 = (x277|(x278%(x279<=x280)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x281 = INT8_MAX;
	int64_t x282 = 698775LL;
	uint8_t x284 = 2U;
	volatile int64_t t34 = -121556LL;

	t34 = (x281|(x282%(x283<=x284)));

	if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x285 = 1U;
	int64_t x287 = -1LL;
	volatile uint16_t x288 = 9866U;
	static volatile int32_t t35 = -916902725;

	t35 = (x285|(x286%(x287<=x288)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x293 = -1LL;
	int8_t x294 = INT8_MIN;
	int16_t x296 = INT16_MAX;

	t36 = (x293|(x294%(x295<=x296)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x301 = 11U;
	uint16_t x303 = 0U;
	static volatile uint64_t x304 = UINT64_MAX;
	volatile uint32_t t37 = 0U;

	t37 = (x301|(x302%(x303<=x304)));

	if (t37 != 11U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x309 = -2;
	int8_t x310 = INT8_MIN;
	int32_t x311 = INT32_MAX;
	uint64_t x312 = UINT64_MAX;
	static int32_t t38 = 9801;

	t38 = (x309|(x310%(x311<=x312)));

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x317 = 228203502LL;
	int8_t x318 = 24;
	volatile int16_t x319 = -1;
	uint16_t x320 = UINT16_MAX;
	int64_t t39 = 778LL;

	t39 = (x317|(x318%(x319<=x320)));

	if (t39 != 228203502LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x321 = 0;
	int16_t x322 = INT16_MIN;
	volatile int32_t x323 = INT32_MIN;
	static uint8_t x324 = UINT8_MAX;
	volatile int32_t t40 = -57;

	t40 = (x321|(x322%(x323<=x324)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x329 = -1LL;
	int16_t x330 = 250;
	uint8_t x332 = 7U;
	static volatile int64_t t41 = 1404190LL;

	t41 = (x329|(x330%(x331<=x332)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x338 = 373LL;
	int64_t t42 = 94571917097782LL;

	t42 = (x337|(x338%(x339<=x340)));

	if (t42 != 778LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x349 = 2;
	int64_t x350 = 10526688594483198LL;
	static volatile int32_t x351 = INT32_MIN;
	int16_t x352 = INT16_MAX;
	volatile int64_t t43 = 30LL;

	t43 = (x349|(x350%(x351<=x352)));

	if (t43 != 2LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x353 = -12;
	static int64_t x354 = INT64_MIN;
	volatile int32_t x356 = 2879207;

	t44 = (x353|(x354%(x355<=x356)));

	if (t44 != -12LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint64_t x363 = 3LLU;
	volatile int32_t t45 = -2912027;

	t45 = (x361|(x362%(x363<=x364)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x373 = -30981187LL;
	int16_t x374 = -2;
	uint64_t x375 = 19265900019LLU;
	uint64_t x376 = 3961227492024098LLU;
	static volatile int64_t t46 = 6LL;

	t46 = (x373|(x374%(x375<=x376)));

	if (t46 != -30981187LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x383 = INT64_MIN;
	int64_t t47 = 776266044085034LL;

	t47 = (x381|(x382%(x383<=x384)));

	if (t47 != -13531LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x385 = 15;
	static uint16_t x386 = UINT16_MAX;
	int64_t x387 = INT64_MIN;
	int64_t x388 = INT64_MAX;
	int32_t t48 = -8990;

	t48 = (x385|(x386%(x387<=x388)));

	if (t48 != 15) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x389 = INT64_MIN;
	static uint64_t x390 = 21253524849LLU;
	int16_t x391 = INT16_MIN;
	static uint16_t x392 = UINT16_MAX;
	volatile uint64_t t49 = 1LLU;

	t49 = (x389|(x390%(x391<=x392)));

	if (t49 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x393 = INT8_MIN;
	static int32_t x394 = INT32_MIN;
	int16_t x395 = INT16_MAX;
	static int32_t t50 = -6405;

	t50 = (x393|(x394%(x395<=x396)));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x397 = 252901U;
	int16_t x398 = INT16_MAX;
	static volatile int32_t x399 = INT32_MIN;
	int16_t x400 = INT16_MIN;
	static volatile uint32_t t51 = 104375U;

	t51 = (x397|(x398%(x399<=x400)));

	if (t51 != 252901U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x401 = INT32_MIN;
	uint64_t x402 = 223326085LLU;
	static int32_t x403 = -339647653;
	volatile int16_t x404 = -1;
	uint64_t t52 = 26112586237LLU;

	t52 = (x401|(x402%(x403<=x404)));

	if (t52 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x412 = INT8_MAX;
	volatile int32_t t53 = -736237693;

	t53 = (x409|(x410%(x411<=x412)));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x424 = 24937U;
	int32_t t54 = -1;

	t54 = (x421|(x422%(x423<=x424)));

	if (t54 != 38) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x429 = UINT64_MAX;
	int8_t x431 = 5;
	static uint64_t x432 = 530295015LLU;

	t55 = (x429|(x430%(x431<=x432)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x433 = -1LL;
	static int8_t x434 = 1;
	static uint32_t x435 = 1U;
	volatile uint8_t x436 = 2U;
	int64_t t56 = 10552471109540147LL;

	t56 = (x433|(x434%(x435<=x436)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x445 = 23;
	uint16_t x447 = 26U;
	int16_t x448 = INT16_MAX;
	volatile int64_t t57 = 12645681397LL;

	t57 = (x445|(x446%(x447<=x448)));

	if (t57 != 23LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x463 = -1169951749751459847LL;
	int8_t x464 = INT8_MIN;
	volatile uint32_t t58 = 3U;

	t58 = (x461|(x462%(x463<=x464)));

	if (t58 != 2U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x471 = 0;
	int8_t x472 = 28;
	int32_t t59 = -1;

	t59 = (x469|(x470%(x471<=x472)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x473 = 127211551LLU;
	static int16_t x475 = -8;
	volatile uint16_t x476 = UINT16_MAX;
	uint64_t t60 = 3294869809555LLU;

	t60 = (x473|(x474%(x475<=x476)));

	if (t60 != 127211551LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x477 = 0U;
	int16_t x478 = INT16_MAX;
	volatile int32_t x479 = INT32_MIN;
	uint16_t x480 = 9U;
	int32_t t61 = 1;

	t61 = (x477|(x478%(x479<=x480)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x485 = UINT64_MAX;
	int16_t x487 = 33;
	uint8_t x488 = UINT8_MAX;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (x485|(x486%(x487<=x488)));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x489 = -1178;
	uint8_t x490 = 1U;
	int32_t x491 = INT32_MIN;
	static int32_t t63 = -317971;

	t63 = (x489|(x490%(x491<=x492)));

	if (t63 != -1178) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x497 = -1;
	uint64_t x498 = UINT64_MAX;
	static volatile uint64_t x499 = 1520LLU;
	uint16_t x500 = UINT16_MAX;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x497|(x498%(x499<=x500)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x521 = -1;
	int16_t x523 = -24;
	int64_t x524 = INT64_MAX;
	volatile int32_t t65 = -121935;

	t65 = (x521|(x522%(x523<=x524)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x525 = INT64_MIN;
	int64_t x526 = INT64_MAX;
	int16_t x527 = INT16_MIN;
	volatile int64_t t66 = INT64_MIN;

	t66 = (x525|(x526%(x527<=x528)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x529 = 6U;
	uint64_t x530 = UINT64_MAX;
	int8_t x531 = INT8_MIN;
	volatile int8_t x532 = -1;
	uint64_t t67 = 29795520540147LLU;

	t67 = (x529|(x530%(x531<=x532)));

	if (t67 != 6LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x533 = 523U;
	volatile int32_t x534 = -4;
	static uint32_t x536 = 5919161U;
	volatile int32_t t68 = -12254;

	t68 = (x533|(x534%(x535<=x536)));

	if (t68 != 523) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x537 = INT16_MIN;
	int16_t x538 = INT16_MAX;
	int8_t x539 = 6;
	int64_t x540 = INT64_MAX;
	volatile int32_t t69 = 13;

	t69 = (x537|(x538%(x539<=x540)));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x545 = INT64_MAX;
	int64_t x546 = 12300620LL;
	volatile int16_t x547 = -1;
	static int8_t x548 = INT8_MAX;
	static int64_t t70 = INT64_MAX;

	t70 = (x545|(x546%(x547<=x548)));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x553 = INT64_MAX;
	uint8_t x554 = 15U;
	static uint32_t x556 = 187693628U;
	int64_t t71 = INT64_MAX;

	t71 = (x553|(x554%(x555<=x556)));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x561 = 2883395848818083275LLU;
	volatile int64_t x562 = INT64_MAX;
	volatile int16_t x563 = INT16_MIN;
	static int16_t x564 = INT16_MIN;
	uint64_t t72 = 203942135828890LLU;

	t72 = (x561|(x562%(x563<=x564)));

	if (t72 != 2883395848818083275LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x565 = INT32_MIN;
	volatile int8_t x566 = INT8_MAX;
	int32_t t73 = INT32_MIN;

	t73 = (x565|(x566%(x567<=x568)));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x569 = INT8_MIN;
	int32_t x570 = INT32_MIN;
	int8_t x571 = INT8_MIN;
	uint8_t x572 = 0U;
	int32_t t74 = 30;

	t74 = (x569|(x570%(x571<=x572)));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x573 = 298661954092584139LL;
	static uint32_t x574 = UINT32_MAX;
	int16_t x575 = INT16_MIN;
	static volatile int8_t x576 = INT8_MAX;
	int64_t t75 = 77180224065017207LL;

	t75 = (x573|(x574%(x575<=x576)));

	if (t75 != 298661954092584139LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x577 = INT64_MAX;
	int64_t x578 = INT64_MIN;
	uint8_t x579 = 1U;
	int64_t x580 = INT64_MAX;
	volatile int64_t t76 = INT64_MAX;

	t76 = (x577|(x578%(x579<=x580)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x582 = 113U;
	volatile uint64_t t77 = 7737862847481818306LLU;

	t77 = (x581|(x582%(x583<=x584)));

	if (t77 != 63902647582603LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x589 = INT8_MAX;
	static int64_t x590 = -2LL;
	int32_t x591 = INT32_MIN;
	int16_t x592 = INT16_MAX;
	volatile int64_t t78 = 11605419094LL;

	t78 = (x589|(x590%(x591<=x592)));

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x593 = 452LL;
	uint32_t x594 = UINT32_MAX;
	volatile uint64_t x596 = 63247LLU;
	volatile int64_t t79 = -13324438949LL;

	t79 = (x593|(x594%(x595<=x596)));

	if (t79 != 452LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x609 = -75707LL;
	static uint32_t x610 = 61726877U;
	volatile int8_t x611 = -1;
	int32_t x612 = INT32_MAX;
	static volatile int64_t t80 = 3544449056474591LL;

	t80 = (x609|(x610%(x611<=x612)));

	if (t80 != -75707LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x625 = -1;
	int8_t x626 = INT8_MIN;
	static volatile int8_t x628 = 0;
	volatile int32_t t81 = 2;

	t81 = (x625|(x626%(x627<=x628)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x633 = 2U;
	static int32_t x635 = INT32_MIN;
	int8_t x636 = INT8_MIN;
	volatile int64_t t82 = 1249769162LL;

	t82 = (x633|(x634%(x635<=x636)));

	if (t82 != 2LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x641 = 3125771LLU;
	int8_t x642 = 6;
	volatile int64_t x643 = INT64_MIN;
	int32_t x644 = -1;
	uint64_t t83 = 1LLU;

	t83 = (x641|(x642%(x643<=x644)));

	if (t83 != 3125771LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x645 = 5U;
	uint32_t x646 = UINT32_MAX;
	volatile int16_t x647 = INT16_MIN;
	volatile uint16_t x648 = 41U;
	uint32_t t84 = 1031456U;

	t84 = (x645|(x646%(x647<=x648)));

	if (t84 != 5U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x657 = 0;
	int8_t x658 = -41;
	int32_t x659 = INT32_MIN;
	int32_t x660 = -3;
	volatile int32_t t85 = 15973;

	t85 = (x657|(x658%(x659<=x660)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x673 = -1LL;
	int64_t t86 = 6LL;

	t86 = (x673|(x674%(x675<=x676)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x682 = 3479670U;
	static volatile uint8_t x683 = 1U;
	volatile int8_t x684 = INT8_MAX;
	volatile uint32_t t87 = 7722534U;

	t87 = (x681|(x682%(x683<=x684)));

	if (t87 != 4294967168U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x685 = UINT16_MAX;
	uint32_t x686 = UINT32_MAX;
	int32_t x687 = INT32_MIN;
	static int32_t x688 = -1;
	uint32_t t88 = 215U;

	t88 = (x685|(x686%(x687<=x688)));

	if (t88 != 65535U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x689 = -1LL;
	int32_t x690 = INT32_MIN;
	int32_t x691 = -1;
	int32_t x692 = INT32_MAX;
	static int64_t t89 = -2026LL;

	t89 = (x689|(x690%(x691<=x692)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x697 = 3U;
	uint32_t x698 = UINT32_MAX;
	uint64_t x699 = 1228669791437463360LLU;
	volatile int64_t x700 = INT64_MIN;
	uint32_t t90 = 43571526U;

	t90 = (x697|(x698%(x699<=x700)));

	if (t90 != 3U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x709 = -48446729;
	int8_t x710 = -23;
	volatile uint32_t x711 = 1179025U;
	static uint64_t x712 = UINT64_MAX;
	int32_t t91 = -550244;

	t91 = (x709|(x710%(x711<=x712)));

	if (t91 != -48446729) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x713 = 454299U;
	uint32_t x714 = UINT32_MAX;
	volatile int8_t x715 = INT8_MIN;
	int32_t x716 = 633;
	uint32_t t92 = 895585U;

	t92 = (x713|(x714%(x715<=x716)));

	if (t92 != 454299U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x717 = INT16_MIN;
	int64_t x718 = 1LL;
	volatile int64_t t93 = -24699701LL;

	t93 = (x717|(x718%(x719<=x720)));

	if (t93 != -32768LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x721 = -1;
	uint8_t x722 = 1U;
	volatile int32_t x723 = 12;
	int32_t x724 = 229866;

	t94 = (x721|(x722%(x723<=x724)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x726 = 0U;
	volatile int16_t x727 = -1;
	static int16_t x728 = 28;

	t95 = (x725|(x726%(x727<=x728)));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x734 = 19917U;
	int16_t x735 = 9;
	uint32_t x736 = UINT32_MAX;
	int32_t t96 = -40866;

	t96 = (x733|(x734%(x735<=x736)));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x737 = 217;
	static int8_t x738 = INT8_MIN;
	volatile int64_t x739 = -1LL;
	volatile int32_t t97 = 15;

	t97 = (x737|(x738%(x739<=x740)));

	if (t97 != 217) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x741 = 682931U;
	int64_t x743 = INT64_MIN;
	uint16_t x744 = UINT16_MAX;
	uint32_t t98 = 335648U;

	t98 = (x741|(x742%(x743<=x744)));

	if (t98 != 682931U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x750 = -1;
	int32_t x751 = INT32_MIN;
	int64_t x752 = 1482290LL;
	int64_t t99 = INT64_MIN;

	t99 = (x749|(x750%(x751<=x752)));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

