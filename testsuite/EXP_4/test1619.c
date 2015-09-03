#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
int64_t x4 = -488354948LL;
uint64_t t1 = 20939478091187957LLU;
volatile uint32_t t2 = 6502U;
volatile int64_t x29 = 1892LL;
int64_t x42 = INT64_MAX;
volatile int32_t t7 = -916318;
volatile int8_t x60 = -4;
static volatile uint32_t t8 = UINT32_MAX;
int16_t x88 = INT16_MIN;
volatile int32_t t10 = 0;
volatile int16_t x95 = INT16_MAX;
int32_t x96 = 1015764;
uint16_t x105 = UINT16_MAX;
uint32_t x110 = 27U;
int32_t t14 = -169333698;
int16_t x136 = -1;
int64_t x139 = INT64_MAX;
uint32_t x149 = UINT32_MAX;
volatile int64_t x170 = INT64_MIN;
uint16_t x181 = 16323U;
int64_t x186 = INT64_MAX;
uint32_t x188 = 14U;
volatile uint16_t x198 = 80U;
volatile int32_t t25 = -4;
int32_t x230 = INT32_MAX;
volatile int32_t t30 = -3056;
uint32_t x238 = 173978949U;
int16_t x244 = 4100;
volatile int8_t x276 = -5;
volatile uint8_t x278 = 30U;
int16_t x332 = INT16_MAX;
static volatile uint64_t t40 = UINT64_MAX;
int32_t t41 = 4059;
uint64_t x349 = 683199611LLU;
int64_t x352 = INT64_MAX;
int32_t t43 = -937;
uint16_t x360 = 22317U;
static volatile int32_t t47 = -42102;
int8_t x401 = INT8_MAX;
static int16_t x403 = -3617;
uint16_t x413 = UINT16_MAX;
static volatile int8_t x420 = -3;
static volatile int32_t t50 = -441;
int16_t x421 = 12349;
int16_t x426 = INT16_MIN;
static int32_t t52 = 67;
static uint64_t x431 = 12323451453LLU;
uint32_t t60 = UINT32_MAX;
static int32_t x491 = -1;
uint8_t x494 = 1U;
static volatile uint64_t t62 = 11364LLU;
volatile int8_t x506 = -1;
static int64_t x507 = INT64_MIN;
int32_t x511 = -452765;
int8_t x513 = 1;
static int32_t t65 = 23;
uint32_t t66 = 3U;
volatile int16_t x546 = -57;
int64_t x551 = 4196791982LL;
static uint64_t x557 = 1887170785LLU;
static int8_t x558 = 46;
uint64_t x560 = UINT64_MAX;
static uint32_t x561 = 642506963U;
static uint16_t x565 = 179U;
static int32_t x587 = -16424114;
volatile int8_t x588 = 29;
uint16_t x590 = UINT16_MAX;
int8_t x591 = INT8_MIN;
volatile int64_t x606 = 501064342455106LL;
volatile int16_t x619 = -12268;
int32_t t76 = 242539;
int8_t x646 = -18;
static uint16_t x648 = 512U;
volatile uint32_t t77 = 18278811U;
volatile int32_t x658 = INT32_MIN;
int16_t x680 = -1;
uint16_t x685 = UINT16_MAX;
volatile int16_t x690 = -1;
volatile int16_t x696 = INT16_MIN;
static uint16_t x713 = 11522U;
uint8_t x715 = 0U;
int32_t t88 = -4;
static int8_t x727 = INT8_MIN;
static int32_t x728 = INT32_MIN;
static int32_t x737 = 58619;
static int64_t x742 = 2LL;
volatile int32_t t94 = -83;
static uint64_t x769 = UINT64_MAX;
uint8_t x780 = 29U;
int16_t x784 = -378;


void f0(void) {
	static uint8_t x2 = 0U;
	static volatile int64_t x3 = -1LL;
	volatile int32_t t0 = 584;

	t0 = (x1>>(x2==(x3<=x4)));

	if (t0 != 16383) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = 481904974LLU;
	int16_t x14 = -1;
	int64_t x15 = -1LL;
	volatile int64_t x16 = INT64_MIN;

	t1 = (x13>>(x14==(x15<=x16)));

	if (t1 != 481904974LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x17 = 89825U;
	volatile int8_t x18 = 9;
	volatile int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MIN;

	t2 = (x17>>(x18==(x19<=x20)));

	if (t2 != 89825U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 0U;
	uint32_t x22 = 1U;
	static int64_t x23 = 228220703501LL;
	int64_t x24 = -1LL;
	static volatile int32_t t3 = -188031784;

	t3 = (x21>>(x22==(x23<=x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 1769784LLU;
	int8_t x26 = -1;
	int32_t x27 = -1429153;
	int32_t x28 = 3560;
	uint64_t t4 = 9503203LLU;

	t4 = (x25>>(x26==(x27<=x28)));

	if (t4 != 1769784LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x30 = 4;
	int8_t x31 = INT8_MIN;
	int64_t x32 = -70040448671538LL;
	static volatile int64_t t5 = 1LL;

	t5 = (x29>>(x30==(x31<=x32)));

	if (t5 != 1892LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = 3525LLU;
	int32_t x38 = INT32_MAX;
	volatile int16_t x39 = INT16_MIN;
	volatile int16_t x40 = INT16_MAX;
	uint64_t t6 = 107967854205391364LLU;

	t6 = (x37>>(x38==(x39<=x40)));

	if (t6 != 3525LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = UINT8_MAX;
	static int8_t x43 = INT8_MIN;
	int32_t x44 = INT32_MIN;

	t7 = (x41>>(x42==(x43<=x44)));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x57 = UINT32_MAX;
	static uint16_t x58 = 9U;
	volatile int64_t x59 = INT64_MIN;

	t8 = (x57>>(x58==(x59<=x60)));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x77 = 31U;
	int32_t x78 = INT32_MIN;
	uint8_t x79 = UINT8_MAX;
	volatile int32_t x80 = INT32_MAX;
	volatile int32_t t9 = -1;

	t9 = (x77>>(x78==(x79<=x80)));

	if (t9 != 31) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x85 = UINT16_MAX;
	int64_t x86 = 11347481LL;
	uint32_t x87 = 35U;

	t10 = (x85>>(x86==(x87<=x88)));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x93 = 2364341U;
	int16_t x94 = -1;
	volatile uint32_t t11 = 68U;

	t11 = (x93>>(x94==(x95<=x96)));

	if (t11 != 2364341U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x97 = INT64_MAX;
	static uint8_t x98 = UINT8_MAX;
	volatile int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MAX;
	volatile int64_t t12 = INT64_MAX;

	t12 = (x97>>(x98==(x99<=x100)));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x106 = 244U;
	int8_t x107 = 16;
	static volatile int16_t x108 = -94;
	volatile int32_t t13 = 881817;

	t13 = (x105>>(x106==(x107<=x108)));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x109 = UINT8_MAX;
	int8_t x111 = -1;
	static int32_t x112 = 38912565;

	t14 = (x109>>(x110==(x111<=x112)));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x117 = INT32_MAX;
	volatile int8_t x118 = INT8_MAX;
	int64_t x119 = 1616105322LL;
	uint8_t x120 = 2U;
	static int32_t t15 = INT32_MAX;

	t15 = (x117>>(x118==(x119<=x120)));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x133 = 60979730LLU;
	volatile uint8_t x134 = 13U;
	int16_t x135 = INT16_MAX;
	volatile uint64_t t16 = 665276953LLU;

	t16 = (x133>>(x134==(x135<=x136)));

	if (t16 != 60979730LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x137 = 104759071U;
	static int8_t x138 = 1;
	volatile uint64_t x140 = UINT64_MAX;
	static uint32_t t17 = 132193486U;

	t17 = (x137>>(x138==(x139<=x140)));

	if (t17 != 52379535U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x150 = INT64_MIN;
	int32_t x151 = -1;
	volatile int64_t x152 = INT64_MAX;
	uint32_t t18 = UINT32_MAX;

	t18 = (x149>>(x150==(x151<=x152)));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x153 = 0;
	volatile int8_t x154 = INT8_MIN;
	int64_t x155 = 144963498033LL;
	int32_t x156 = INT32_MIN;
	int32_t t19 = -3218;

	t19 = (x153>>(x154==(x155<=x156)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x169 = UINT16_MAX;
	uint32_t x171 = 477354940U;
	static int64_t x172 = INT64_MAX;
	volatile int32_t t20 = 101473135;

	t20 = (x169>>(x170==(x171<=x172)));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x173 = 2999288874326417176LLU;
	int32_t x174 = INT32_MIN;
	int32_t x175 = -1;
	uint32_t x176 = 37U;
	volatile uint64_t t21 = 5793682068961474360LLU;

	t21 = (x173>>(x174==(x175<=x176)));

	if (t21 != 2999288874326417176LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x182 = -1;
	volatile uint64_t x183 = 19661560LLU;
	volatile int64_t x184 = 2098444958954LL;
	static int32_t t22 = 189;

	t22 = (x181>>(x182==(x183<=x184)));

	if (t22 != 16323) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x185 = 18332074U;
	int8_t x187 = -1;
	volatile uint32_t t23 = 0U;

	t23 = (x185>>(x186==(x187<=x188)));

	if (t23 != 18332074U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x197 = UINT64_MAX;
	volatile int32_t x199 = INT32_MAX;
	uint32_t x200 = 405U;
	uint64_t t24 = UINT64_MAX;

	t24 = (x197>>(x198==(x199<=x200)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x209 = UINT16_MAX;
	int16_t x210 = INT16_MIN;
	int8_t x211 = INT8_MAX;
	static int16_t x212 = 11376;

	t25 = (x209>>(x210==(x211<=x212)));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x213 = 74U;
	int16_t x214 = -1;
	uint32_t x215 = 645U;
	int32_t x216 = -1;
	volatile uint32_t t26 = 1U;

	t26 = (x213>>(x214==(x215<=x216)));

	if (t26 != 74U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x221 = 91U;
	int64_t x222 = INT64_MIN;
	static volatile uint16_t x223 = 1207U;
	int16_t x224 = -1;
	volatile int32_t t27 = 192393586;

	t27 = (x221>>(x222==(x223<=x224)));

	if (t27 != 91) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x225 = UINT16_MAX;
	int64_t x226 = INT64_MIN;
	static uint16_t x227 = UINT16_MAX;
	volatile int64_t x228 = INT64_MIN;
	static volatile int32_t t28 = 2732424;

	t28 = (x225>>(x226==(x227<=x228)));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x229 = 122U;
	int32_t x231 = INT32_MIN;
	int16_t x232 = -1;
	int32_t t29 = 3;

	t29 = (x229>>(x230==(x231<=x232)));

	if (t29 != 122) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x233 = INT16_MAX;
	static int64_t x234 = INT64_MAX;
	int8_t x235 = -44;
	int16_t x236 = INT16_MIN;

	t30 = (x233>>(x234==(x235<=x236)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x237 = INT64_MAX;
	int8_t x239 = 1;
	int64_t x240 = INT64_MIN;
	volatile int64_t t31 = INT64_MAX;

	t31 = (x237>>(x238==(x239<=x240)));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x241 = UINT8_MAX;
	static int32_t x242 = INT32_MAX;
	volatile int32_t x243 = INT32_MIN;
	int32_t t32 = 52962;

	t32 = (x241>>(x242==(x243<=x244)));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x257 = INT8_MAX;
	static int64_t x258 = INT64_MIN;
	uint64_t x259 = 2925271LLU;
	int32_t x260 = INT32_MIN;
	static volatile int32_t t33 = 1562;

	t33 = (x257>>(x258==(x259<=x260)));

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x273 = INT8_MAX;
	volatile int8_t x274 = 16;
	uint64_t x275 = UINT64_MAX;
	int32_t t34 = -532751432;

	t34 = (x273>>(x274==(x275<=x276)));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x277 = 91834545856876LLU;
	int32_t x279 = -181667973;
	uint16_t x280 = 63U;
	volatile uint64_t t35 = 66210091679450LLU;

	t35 = (x277>>(x278==(x279<=x280)));

	if (t35 != 91834545856876LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x297 = INT8_MAX;
	static int32_t x298 = -11;
	uint8_t x299 = 5U;
	uint16_t x300 = 21169U;
	int32_t t36 = 12966255;

	t36 = (x297>>(x298==(x299<=x300)));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x309 = 22U;
	int8_t x310 = INT8_MIN;
	int16_t x311 = 11;
	uint64_t x312 = 6507019202537881LLU;
	volatile int32_t t37 = 106717668;

	t37 = (x309>>(x310==(x311<=x312)));

	if (t37 != 22) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x325 = UINT8_MAX;
	int64_t x326 = -33791922824LL;
	uint8_t x327 = 11U;
	int32_t x328 = -2476;
	static volatile int32_t t38 = -82875;

	t38 = (x325>>(x326==(x327<=x328)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x329 = 5;
	uint8_t x330 = 117U;
	volatile int16_t x331 = INT16_MAX;
	static volatile int32_t t39 = -472051;

	t39 = (x329>>(x330==(x331<=x332)));

	if (t39 != 5) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x337 = UINT64_MAX;
	static int64_t x338 = INT64_MIN;
	static int64_t x339 = INT64_MIN;
	volatile int8_t x340 = INT8_MIN;

	t40 = (x337>>(x338==(x339<=x340)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x341 = 1457;
	int16_t x342 = INT16_MAX;
	int8_t x343 = INT8_MAX;
	int32_t x344 = -161640;

	t41 = (x341>>(x342==(x343<=x344)));

	if (t41 != 1457) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x350 = UINT32_MAX;
	uint64_t x351 = UINT64_MAX;
	uint64_t t42 = 79187256635LLU;

	t42 = (x349>>(x350==(x351<=x352)));

	if (t42 != 683199611LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x353 = 0;
	volatile int64_t x354 = INT64_MIN;
	static volatile int64_t x355 = INT64_MAX;
	uint32_t x356 = 0U;

	t43 = (x353>>(x354==(x355<=x356)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x357 = 4197738423LL;
	int32_t x358 = INT32_MIN;
	volatile int8_t x359 = INT8_MAX;
	volatile int64_t t44 = 9LL;

	t44 = (x357>>(x358==(x359<=x360)));

	if (t44 != 4197738423LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x369 = 4U;
	int32_t x370 = -1;
	static int32_t x371 = INT32_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t45 = -41;

	t45 = (x369>>(x370==(x371<=x372)));

	if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x381 = 30507906LLU;
	uint64_t x382 = 2921403LLU;
	static int16_t x383 = INT16_MIN;
	uint32_t x384 = 124974U;
	volatile uint64_t t46 = 100LLU;

	t46 = (x381>>(x382==(x383<=x384)));

	if (t46 != 30507906LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x389 = INT16_MAX;
	volatile uint64_t x390 = UINT64_MAX;
	uint16_t x391 = UINT16_MAX;
	uint32_t x392 = 6009U;

	t47 = (x389>>(x390==(x391<=x392)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x402 = -962;
	uint8_t x404 = UINT8_MAX;
	volatile int32_t t48 = 57804868;

	t48 = (x401>>(x402==(x403<=x404)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x414 = INT8_MIN;
	int32_t x415 = INT32_MIN;
	volatile uint64_t x416 = UINT64_MAX;
	static int32_t t49 = 78663556;

	t49 = (x413>>(x414==(x415<=x416)));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x417 = 0U;
	volatile int16_t x418 = 0;
	int16_t x419 = -1;

	t50 = (x417>>(x418==(x419<=x420)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x422 = -1;
	uint16_t x423 = 1386U;
	volatile uint8_t x424 = 114U;
	int32_t t51 = 54417;

	t51 = (x421>>(x422==(x423<=x424)));

	if (t51 != 12349) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x425 = UINT16_MAX;
	int32_t x427 = -1;
	volatile int8_t x428 = -10;

	t52 = (x425>>(x426==(x427<=x428)));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x429 = 8;
	int32_t x430 = 197;
	static int8_t x432 = 1;
	volatile int32_t t53 = -148652;

	t53 = (x429>>(x430==(x431<=x432)));

	if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x445 = 275044476870297901LLU;
	int32_t x446 = INT32_MIN;
	volatile int16_t x447 = INT16_MIN;
	volatile uint16_t x448 = UINT16_MAX;
	volatile uint64_t t54 = 24958371844LLU;

	t54 = (x445>>(x446==(x447<=x448)));

	if (t54 != 275044476870297901LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x453 = UINT64_MAX;
	static int64_t x454 = -1LL;
	uint16_t x455 = UINT16_MAX;
	static uint64_t x456 = UINT64_MAX;
	uint64_t t55 = UINT64_MAX;

	t55 = (x453>>(x454==(x455<=x456)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x461 = INT8_MAX;
	uint64_t x462 = 6856022160LLU;
	volatile int8_t x463 = INT8_MIN;
	volatile uint8_t x464 = UINT8_MAX;
	volatile int32_t t56 = 894;

	t56 = (x461>>(x462==(x463<=x464)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x465 = INT8_MAX;
	uint8_t x466 = UINT8_MAX;
	volatile int8_t x467 = INT8_MAX;
	uint32_t x468 = 6U;
	volatile int32_t t57 = -9369859;

	t57 = (x465>>(x466==(x467<=x468)));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x469 = INT64_MAX;
	static uint32_t x470 = 23U;
	int8_t x471 = INT8_MAX;
	uint8_t x472 = 41U;
	int64_t t58 = INT64_MAX;

	t58 = (x469>>(x470==(x471<=x472)));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x477 = 7488190829032765794LLU;
	int64_t x478 = -1LL;
	volatile int32_t x479 = INT32_MIN;
	int32_t x480 = INT32_MIN;
	volatile uint64_t t59 = 194LLU;

	t59 = (x477>>(x478==(x479<=x480)));

	if (t59 != 7488190829032765794LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x481 = UINT32_MAX;
	uint32_t x482 = 102188U;
	int16_t x483 = -1;
	uint64_t x484 = UINT64_MAX;

	t60 = (x481>>(x482==(x483<=x484)));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x489 = INT16_MAX;
	int8_t x490 = INT8_MAX;
	int32_t x492 = INT32_MIN;
	volatile int32_t t61 = -230987293;

	t61 = (x489>>(x490==(x491<=x492)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x493 = 7514555471LLU;
	int8_t x495 = INT8_MIN;
	volatile int8_t x496 = 2;

	t62 = (x493>>(x494==(x495<=x496)));

	if (t62 != 3757277735LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x505 = 45006390982LLU;
	static uint8_t x508 = 0U;
	volatile uint64_t t63 = 62101504970412LLU;

	t63 = (x505>>(x506==(x507<=x508)));

	if (t63 != 45006390982LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x509 = 271562LLU;
	uint16_t x510 = 21202U;
	uint32_t x512 = 4008711U;
	uint64_t t64 = 168773906LLU;

	t64 = (x509>>(x510==(x511<=x512)));

	if (t64 != 271562LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x514 = -1LL;
	static uint8_t x515 = 0U;
	int32_t x516 = 4;

	t65 = (x513>>(x514==(x515<=x516)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x541 = 2060421440U;
	int32_t x542 = 194980;
	int64_t x543 = INT64_MAX;
	int16_t x544 = INT16_MIN;

	t66 = (x541>>(x542==(x543<=x544)));

	if (t66 != 2060421440U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x545 = 526U;
	int64_t x547 = INT64_MAX;
	static int64_t x548 = INT64_MIN;
	static int32_t t67 = -617152811;

	t67 = (x545>>(x546==(x547<=x548)));

	if (t67 != 526) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x549 = 48U;
	uint16_t x550 = 2U;
	int32_t x552 = INT32_MIN;
	static volatile int32_t t68 = -108;

	t68 = (x549>>(x550==(x551<=x552)));

	if (t68 != 48) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x559 = INT64_MAX;
	uint64_t t69 = 1670882736LLU;

	t69 = (x557>>(x558==(x559<=x560)));

	if (t69 != 1887170785LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x562 = 5981219LL;
	static int64_t x563 = -1LL;
	int64_t x564 = INT64_MAX;
	uint32_t t70 = 41U;

	t70 = (x561>>(x562==(x563<=x564)));

	if (t70 != 642506963U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x566 = -4;
	int64_t x567 = INT64_MIN;
	uint8_t x568 = 12U;
	static int32_t t71 = 89184562;

	t71 = (x565>>(x566==(x567<=x568)));

	if (t71 != 179) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x585 = 0LLU;
	uint16_t x586 = 52U;
	uint64_t t72 = 259772715483LLU;

	t72 = (x585>>(x586==(x587<=x588)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x589 = 0U;
	uint32_t x592 = 0U;
	int32_t t73 = 47364815;

	t73 = (x589>>(x590==(x591<=x592)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x605 = 30149357262LL;
	static uint32_t x607 = 2785922U;
	static volatile int8_t x608 = 61;
	int64_t t74 = -9372628LL;

	t74 = (x605>>(x606==(x607<=x608)));

	if (t74 != 30149357262LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x617 = 2078345711570453282LLU;
	uint8_t x618 = 2U;
	static uint64_t x620 = UINT64_MAX;
	static uint64_t t75 = 60265255LLU;

	t75 = (x617>>(x618==(x619<=x620)));

	if (t75 != 2078345711570453282LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x629 = 4U;
	uint32_t x630 = 1U;
	int16_t x631 = INT16_MAX;
	uint32_t x632 = UINT32_MAX;

	t76 = (x629>>(x630==(x631<=x632)));

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x645 = 924U;
	static int32_t x647 = INT32_MIN;

	t77 = (x645>>(x646==(x647<=x648)));

	if (t77 != 924U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x653 = UINT8_MAX;
	static int8_t x654 = 55;
	uint64_t x655 = 357865503LLU;
	uint8_t x656 = 6U;
	volatile int32_t t78 = 237;

	t78 = (x653>>(x654==(x655<=x656)));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x657 = INT8_MAX;
	volatile int8_t x659 = INT8_MAX;
	int64_t x660 = INT64_MIN;
	int32_t t79 = 45018;

	t79 = (x657>>(x658==(x659<=x660)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x673 = UINT8_MAX;
	int16_t x674 = -154;
	uint16_t x675 = UINT16_MAX;
	static volatile int64_t x676 = INT64_MIN;
	int32_t t80 = 167;

	t80 = (x673>>(x674==(x675<=x676)));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x677 = INT16_MAX;
	static uint8_t x678 = 50U;
	int64_t x679 = INT64_MIN;
	int32_t t81 = -784937;

	t81 = (x677>>(x678==(x679<=x680)));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x686 = -1LL;
	uint64_t x687 = 3711822LLU;
	volatile uint16_t x688 = 14U;
	int32_t t82 = -948107956;

	t82 = (x685>>(x686==(x687<=x688)));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x689 = 10773775179734435LL;
	uint8_t x691 = 0U;
	uint64_t x692 = 939LLU;
	volatile int64_t t83 = 4580612LL;

	t83 = (x689>>(x690==(x691<=x692)));

	if (t83 != 10773775179734435LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x693 = 707600636616LLU;
	volatile int16_t x694 = -6461;
	uint32_t x695 = UINT32_MAX;
	uint64_t t84 = 3962968190066114021LLU;

	t84 = (x693>>(x694==(x695<=x696)));

	if (t84 != 707600636616LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x697 = 0U;
	volatile uint32_t x698 = UINT32_MAX;
	uint16_t x699 = 27698U;
	int8_t x700 = 0;
	static int32_t t85 = -6;

	t85 = (x697>>(x698==(x699<=x700)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x701 = UINT32_MAX;
	int32_t x702 = INT32_MIN;
	volatile uint64_t x703 = UINT64_MAX;
	int64_t x704 = INT64_MIN;
	uint32_t t86 = UINT32_MAX;

	t86 = (x701>>(x702==(x703<=x704)));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x709 = 4U;
	volatile int8_t x710 = -1;
	int64_t x711 = -1LL;
	int16_t x712 = INT16_MAX;
	volatile uint32_t t87 = 0U;

	t87 = (x709>>(x710==(x711<=x712)));

	if (t87 != 4U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x714 = UINT16_MAX;
	uint64_t x716 = UINT64_MAX;

	t88 = (x713>>(x714==(x715<=x716)));

	if (t88 != 11522) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x717 = 196U;
	int32_t x718 = -58213;
	int32_t x719 = -1;
	int8_t x720 = INT8_MIN;
	volatile int32_t t89 = 26266;

	t89 = (x717>>(x718==(x719<=x720)));

	if (t89 != 196) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x725 = 1079U;
	int32_t x726 = INT32_MIN;
	volatile int32_t t90 = 105313875;

	t90 = (x725>>(x726==(x727<=x728)));

	if (t90 != 1079) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x738 = INT8_MIN;
	int32_t x739 = INT32_MIN;
	int64_t x740 = INT64_MIN;
	int32_t t91 = -264;

	t91 = (x737>>(x738==(x739<=x740)));

	if (t91 != 58619) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x741 = 0;
	uint32_t x743 = 2U;
	volatile uint64_t x744 = UINT64_MAX;
	volatile int32_t t92 = -1;

	t92 = (x741>>(x742==(x743<=x744)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x749 = 2LLU;
	volatile int8_t x750 = INT8_MIN;
	int32_t x751 = 164828865;
	uint16_t x752 = UINT16_MAX;
	volatile uint64_t t93 = 10704181417437LLU;

	t93 = (x749>>(x750==(x751<=x752)));

	if (t93 != 2LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x753 = INT8_MAX;
	volatile int8_t x754 = INT8_MIN;
	uint16_t x755 = 5U;
	int8_t x756 = -14;

	t94 = (x753>>(x754==(x755<=x756)));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x761 = 0U;
	uint32_t x762 = UINT32_MAX;
	int16_t x763 = 286;
	int64_t x764 = INT64_MAX;
	static int32_t t95 = 13;

	t95 = (x761>>(x762==(x763<=x764)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x770 = 69U;
	volatile int8_t x771 = INT8_MIN;
	int8_t x772 = INT8_MIN;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (x769>>(x770==(x771<=x772)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x773 = 0LL;
	static volatile uint32_t x774 = 99876264U;
	static uint32_t x775 = 142U;
	static uint64_t x776 = UINT64_MAX;
	static int64_t t97 = 1590594LL;

	t97 = (x773>>(x774==(x775<=x776)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x777 = 3436LLU;
	int32_t x778 = INT32_MAX;
	int16_t x779 = INT16_MAX;
	uint64_t t98 = 797LLU;

	t98 = (x777>>(x778==(x779<=x780)));

	if (t98 != 3436LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x781 = INT64_MAX;
	uint8_t x782 = 0U;
	int32_t x783 = -1;
	volatile int64_t t99 = 13LL;

	t99 = (x781>>(x782==(x783<=x784)));

	if (t99 != 4611686018427387903LL) { NG(); } else { ; }
	
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

