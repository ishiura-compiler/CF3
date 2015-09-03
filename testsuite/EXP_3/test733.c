#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = INT32_MIN;
volatile int16_t x9 = INT16_MAX;
uint64_t x10 = UINT64_MAX;
static int32_t x16 = -828442;
static int64_t x20 = -4005LL;
int16_t x23 = -14;
volatile int64_t x24 = INT64_MAX;
int64_t x32 = INT64_MIN;
uint8_t x35 = 1U;
int64_t x39 = 4025LL;
static int64_t x49 = INT64_MAX;
static int8_t x51 = INT8_MAX;
int16_t x53 = INT16_MAX;
static int8_t x56 = INT8_MIN;
volatile uint32_t x58 = 370006240U;
int32_t x60 = 3721558;
uint32_t t12 = 1U;
int16_t x62 = INT16_MIN;
uint32_t x63 = 165U;
int16_t x65 = -1;
int8_t x83 = INT8_MAX;
int32_t x84 = 34;
volatile int64_t t18 = -1259379222205LL;
uint8_t x105 = 0U;
static volatile int16_t x114 = INT16_MAX;
uint16_t x115 = 3U;
volatile int8_t x123 = INT8_MAX;
uint64_t t23 = 822185232074321LLU;
static volatile uint8_t x125 = 0U;
uint8_t x131 = 29U;
static int64_t x137 = -1LL;
int8_t x143 = 1;
int32_t x144 = -140727;
uint64_t x163 = 753928370194566298LLU;
static uint64_t t30 = 1426812440LLU;
int8_t x172 = -5;
volatile uint64_t t32 = 4120847824871LLU;
int16_t x175 = -4;
uint32_t x178 = 317739838U;
uint64_t t34 = 6183168807LLU;
volatile int64_t t38 = 252065LL;
int16_t x205 = -492;
uint64_t x214 = UINT64_MAX;
volatile uint64_t t40 = 356541671121LLU;
static uint64_t x217 = 5657830549LLU;
int32_t x218 = -1;
int32_t x219 = INT32_MAX;
int64_t x220 = INT64_MAX;
int8_t x222 = INT8_MAX;
int32_t t43 = 102970699;
int16_t x233 = INT16_MIN;
volatile int64_t x235 = -1LL;
uint16_t x268 = 11939U;
static volatile int32_t t48 = -9379368;
volatile int16_t x291 = -1;
int8_t x298 = 3;
uint16_t x300 = 106U;
int32_t x301 = 123334498;
int8_t x302 = INT8_MIN;
volatile int64_t x303 = 272873408710974250LL;
uint64_t t52 = 227822639108247077LLU;
int64_t t53 = 5150853925LL;
volatile int16_t x317 = INT16_MIN;
uint8_t x330 = 1U;
uint32_t x332 = 187265U;
int8_t x334 = 57;
int64_t x344 = INT64_MAX;
int64_t t58 = 792139296722LL;
static volatile int16_t x349 = INT16_MIN;
int16_t x351 = INT16_MIN;
volatile uint32_t x357 = 9U;
int32_t x364 = INT32_MAX;
int64_t t61 = 12764194LL;
volatile int32_t x371 = INT32_MIN;
volatile uint16_t x384 = 84U;
static volatile int64_t t63 = 31908406491497LL;
uint64_t x389 = UINT64_MAX;
int16_t x390 = INT16_MAX;
volatile int32_t x392 = -1510;
int16_t x401 = -1;
int16_t x407 = INT16_MIN;
volatile int64_t t68 = -1029045835746LL;
int16_t x425 = INT16_MIN;
volatile uint32_t x433 = 91U;
int8_t x440 = INT8_MAX;
int64_t t73 = 284187890LL;
static int32_t x442 = -1;
int64_t t74 = -2839692303262396447LL;
uint64_t x445 = UINT64_MAX;
volatile int32_t x452 = INT32_MIN;
static uint64_t x458 = 793688002635979LLU;
int32_t x465 = INT32_MIN;
uint16_t x468 = UINT16_MAX;
volatile int16_t x477 = -246;
int64_t x481 = INT64_MIN;
volatile int8_t x483 = INT8_MAX;
int16_t x486 = INT16_MIN;
uint64_t x487 = 263232208626903585LLU;
uint16_t x490 = 1U;
uint32_t x496 = 4001U;
int8_t x501 = INT8_MAX;
int64_t x506 = -2616383364417LL;
static volatile int64_t t85 = 86566173LL;
volatile int64_t x517 = -3751592LL;
uint32_t t89 = 710U;
uint32_t x533 = UINT32_MAX;
static volatile int64_t x534 = INT64_MIN;
int16_t x536 = INT16_MAX;
int32_t x563 = -312258916;
volatile int8_t x565 = -5;
int16_t x570 = -7;
int16_t x579 = INT16_MIN;
int16_t x581 = -1;
int32_t t99 = -1;


void f0(void) {
	volatile uint8_t x1 = 15U;
	uint64_t x2 = UINT64_MAX;
	static volatile int16_t x4 = 3;
	static volatile uint64_t t0 = 2040266860096097935LLU;

	t0 = ((x1%x2)%(x3%x4));

	if (t0 != 15LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x11 = 1U;
	uint8_t x12 = UINT8_MAX;
	static volatile uint64_t t1 = 13347LLU;

	t1 = ((x9%x10)%(x11%x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	static int8_t x14 = 1;
	uint16_t x15 = UINT16_MAX;
	static uint32_t t2 = 25910191U;

	t2 = ((x13%x14)%(x15%x16));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	static uint64_t x18 = 24LLU;
	int64_t x19 = -1LL;
	volatile uint64_t t3 = 24090379915LLU;

	t3 = ((x17%x18)%(x19%x20));

	if (t3 != 8LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 40426165U;
	int32_t x22 = 12199346;
	int64_t t4 = 0LL;

	t4 = ((x21%x22)%(x23%x24));

	if (t4 != 9LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -1;
	static uint16_t x30 = 1627U;
	volatile int8_t x31 = -4;
	int64_t t5 = 60310361149LL;

	t5 = ((x29%x30)%(x31%x32));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x33 = 43336153U;
	static int8_t x34 = INT8_MAX;
	volatile uint64_t x36 = 3708354382LLU;
	volatile uint64_t t6 = 541791692842LLU;

	t6 = ((x33%x34)%(x35%x36));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	uint64_t x38 = 2677080258791LLU;
	static uint64_t x40 = 43LLU;
	uint64_t t7 = 66844091535LLU;

	t7 = ((x37%x38)%(x39%x40));

	if (t7 != 4LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x41 = -1LL;
	static uint32_t x42 = 32415U;
	int8_t x43 = INT8_MIN;
	volatile int64_t x44 = INT64_MIN;
	static volatile int64_t t8 = -4458133977633666LL;

	t8 = ((x41%x42)%(x43%x44));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = INT32_MIN;
	int32_t x46 = 42351;
	static int64_t x47 = -6428784603484LL;
	uint64_t x48 = 156117424925552LLU;
	uint64_t t9 = 54509495916576689LLU;

	t9 = ((x45%x46)%(x47%x48));

	if (t9 != 22773827981122LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = INT32_MIN;
	static uint64_t x52 = 494740706223LLU;
	uint64_t t10 = 693453078889443266LLU;

	t10 = ((x49%x50)%(x51%x52));

	if (t10 != 7LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x54 = 12166U;
	int64_t x55 = INT64_MAX;
	volatile int64_t t11 = 110557597832311LL;

	t11 = ((x53%x54)%(x55%x56));

	if (t11 != 53LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x57 = 802U;
	uint32_t x59 = 189059U;

	t12 = ((x57%x58)%(x59%x60));

	if (t12 != 802U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = UINT8_MAX;
	volatile int8_t x64 = INT8_MAX;
	volatile uint32_t t13 = 30U;

	t13 = ((x61%x62)%(x63%x64));

	if (t13 != 27U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x66 = -1;
	int8_t x67 = -1;
	uint32_t x68 = 1434567U;
	volatile uint32_t t14 = 2U;

	t14 = ((x65%x66)%(x67%x68));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MAX;
	static uint16_t x70 = UINT16_MAX;
	uint32_t x71 = 1609179U;
	int64_t x72 = INT64_MIN;
	int64_t t15 = -276811146LL;

	t15 = ((x69%x70)%(x71%x72));

	if (t15 != 32767LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x81 = -1LL;
	int16_t x82 = INT16_MAX;
	volatile int64_t t16 = 36LL;

	t16 = ((x81%x82)%(x83%x84));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = 796042LLU;
	static uint32_t x86 = 120U;
	int16_t x87 = INT16_MIN;
	uint64_t x88 = UINT64_MAX;
	uint64_t t17 = 156588654LLU;

	t17 = ((x85%x86)%(x87%x88));

	if (t17 != 82LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x89 = -1LL;
	uint16_t x90 = 13676U;
	uint8_t x91 = 29U;
	int8_t x92 = INT8_MAX;

	t18 = ((x89%x90)%(x91%x92));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MAX;
	volatile uint16_t x98 = 20U;
	static int32_t x99 = INT32_MIN;
	int32_t x100 = INT32_MAX;
	volatile int32_t t19 = 49;

	t19 = ((x97%x98)%(x99%x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x106 = -1;
	int64_t x107 = INT64_MIN;
	uint8_t x108 = 111U;
	int64_t t20 = -11497180887143200LL;

	t20 = ((x105%x106)%(x107%x108));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x109 = UINT64_MAX;
	uint16_t x110 = UINT16_MAX;
	uint64_t x111 = 55067990LLU;
	int64_t x112 = -1LL;
	volatile uint64_t t21 = 14408LLU;

	t21 = ((x109%x110)%(x111%x112));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = INT64_MIN;
	uint8_t x116 = UINT8_MAX;
	static int64_t t22 = -64612365532470LL;

	t22 = ((x113%x114)%(x115%x116));

	if (t22 != -2LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = 26LLU;
	int16_t x122 = -1;
	volatile uint64_t x124 = 119112831758LLU;

	t23 = ((x121%x122)%(x123%x124));

	if (t23 != 26LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x126 = INT64_MIN;
	int8_t x127 = 13;
	int32_t x128 = -5479;
	volatile int64_t t24 = -1470018105820LL;

	t24 = ((x125%x126)%(x127%x128));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = INT8_MIN;
	static int32_t x130 = INT32_MIN;
	int32_t x132 = INT32_MAX;
	volatile int32_t t25 = -363167;

	t25 = ((x129%x130)%(x131%x132));

	if (t25 != -12) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x138 = 11;
	int8_t x139 = INT8_MIN;
	int32_t x140 = INT32_MIN;
	static volatile int64_t t26 = -107903948703679314LL;

	t26 = ((x137%x138)%(x139%x140));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x141 = -1677930940350LL;
	int8_t x142 = 1;
	int64_t t27 = 89938036729940339LL;

	t27 = ((x141%x142)%(x143%x144));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x145 = 12LL;
	int64_t x146 = 390053080260247523LL;
	int64_t x147 = -370LL;
	int32_t x148 = -38036;
	int64_t t28 = 395354130158LL;

	t28 = ((x145%x146)%(x147%x148));

	if (t28 != 12LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x157 = UINT32_MAX;
	uint8_t x158 = 4U;
	int8_t x159 = INT8_MIN;
	uint64_t x160 = 52905LLU;
	uint64_t t29 = 28594496306133119LLU;

	t29 = ((x157%x158)%(x159%x160));

	if (t29 != 3LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x161 = 378376LLU;
	int16_t x162 = INT16_MAX;
	uint8_t x164 = 44U;

	t30 = ((x161%x162)%(x163%x164));

	if (t30 != 5LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x165 = INT64_MIN;
	static int64_t x166 = 358930859158742LL;
	int8_t x167 = 4;
	static int8_t x168 = INT8_MIN;
	volatile int64_t t31 = 55160401068LL;

	t31 = ((x165%x166)%(x167%x168));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x169 = 5LLU;
	volatile int32_t x170 = -516214561;
	static volatile int32_t x171 = INT32_MAX;

	t32 = ((x169%x170)%(x171%x172));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x173 = -131783491869890LL;
	volatile int64_t x174 = -1LL;
	int8_t x176 = -55;
	volatile int64_t t33 = 18818LL;

	t33 = ((x173%x174)%(x175%x176));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = -1;
	static uint64_t x179 = UINT64_MAX;
	volatile int64_t x180 = 12864937LL;

	t34 = ((x177%x178)%(x179%x180));

	if (t34 != 4835732LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x181 = UINT8_MAX;
	uint64_t x182 = 907269LLU;
	volatile int32_t x183 = INT32_MAX;
	uint16_t x184 = 3U;
	uint64_t t35 = 7650613063150LLU;

	t35 = ((x181%x182)%(x183%x184));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x189 = -1;
	int8_t x190 = INT8_MAX;
	uint32_t x191 = UINT32_MAX;
	int32_t x192 = INT32_MAX;
	static uint32_t t36 = 439186502U;

	t36 = ((x189%x190)%(x191%x192));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x193 = UINT16_MAX;
	volatile int64_t x194 = -2574LL;
	uint64_t x195 = UINT64_MAX;
	int64_t x196 = INT64_MIN;
	static uint64_t t37 = 540422794901LLU;

	t37 = ((x193%x194)%(x195%x196));

	if (t37 != 1185LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x197 = 3U;
	static int64_t x198 = 63747283LL;
	volatile uint32_t x199 = 1U;
	int32_t x200 = INT32_MIN;

	t38 = ((x197%x198)%(x199%x200));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x206 = -2417;
	uint32_t x207 = 4U;
	int8_t x208 = -1;
	volatile uint32_t t39 = 0U;

	t39 = ((x205%x206)%(x207%x208));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x213 = 17944565;
	static uint64_t x215 = UINT64_MAX;
	int64_t x216 = 251LL;

	t40 = ((x213%x214)%(x215%x216));

	if (t40 != 45LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t t41 = 70007941LLU;

	t41 = ((x217%x218)%(x219%x220));

	if (t41 != 1362863255LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x221 = 27280U;
	static int8_t x223 = INT8_MIN;
	volatile uint8_t x224 = 6U;
	static volatile int32_t t42 = 424757733;

	t42 = ((x221%x222)%(x223%x224));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x229 = 874023885;
	int8_t x230 = 1;
	int8_t x231 = INT8_MIN;
	uint8_t x232 = UINT8_MAX;

	t43 = ((x229%x230)%(x231%x232));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x234 = INT16_MIN;
	int16_t x236 = 3;
	volatile int64_t t44 = -240616301792LL;

	t44 = ((x233%x234)%(x235%x236));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x237 = INT64_MAX;
	int16_t x238 = INT16_MIN;
	static int32_t x239 = INT32_MIN;
	int8_t x240 = 3;
	int64_t t45 = -49430LL;

	t45 = ((x237%x238)%(x239%x240));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x257 = 20220664LL;
	uint16_t x258 = 2U;
	static uint64_t x259 = 599724LLU;
	volatile uint8_t x260 = UINT8_MAX;
	uint64_t t46 = 6LLU;

	t46 = ((x257%x258)%(x259%x260));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x265 = INT32_MIN;
	int16_t x266 = INT16_MIN;
	static int64_t x267 = INT64_MAX;
	volatile int64_t t47 = 16LL;

	t47 = ((x265%x266)%(x267%x268));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x281 = INT32_MAX;
	static int32_t x282 = -27533;
	int32_t x283 = INT32_MAX;
	static int8_t x284 = INT8_MAX;

	t48 = ((x281%x282)%(x283%x284));

	if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x289 = 4562888241436232290LLU;
	uint16_t x290 = UINT16_MAX;
	static int8_t x292 = INT8_MAX;
	uint64_t t49 = 3302188852747LLU;

	t49 = ((x289%x290)%(x291%x292));

	if (t49 != 6400LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x297 = UINT16_MAX;
	int16_t x299 = 58;
	int32_t t50 = 7;

	t50 = ((x297%x298)%(x299%x300));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x304 = INT8_MIN;
	static volatile int64_t t51 = 702637371336467LL;

	t51 = ((x301%x302)%(x303%x304));

	if (t51 != 14LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x309 = INT8_MIN;
	int64_t x310 = -1176396913233LL;
	uint64_t x311 = 58LLU;
	uint16_t x312 = 3356U;

	t52 = ((x309%x310)%(x311%x312));

	if (t52 != 12LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x313 = -12LL;
	int32_t x314 = -500;
	int16_t x315 = INT16_MIN;
	uint16_t x316 = 12331U;

	t53 = ((x313%x314)%(x315%x316));

	if (t53 != -12LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x318 = 61U;
	uint32_t x319 = UINT32_MAX;
	uint32_t x320 = 22178901U;
	volatile uint32_t t54 = 25042U;

	t54 = ((x317%x318)%(x319%x320));

	if (t54 != 6464891U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x321 = -1;
	static int32_t x322 = INT32_MIN;
	uint16_t x323 = 24U;
	static volatile uint64_t x324 = 2720604723LLU;
	volatile uint64_t t55 = 199184212922915LLU;

	t55 = ((x321%x322)%(x323%x324));

	if (t55 != 15LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x329 = INT8_MAX;
	volatile int16_t x331 = INT16_MIN;
	static volatile uint32_t t56 = 12237U;

	t56 = ((x329%x330)%(x331%x332));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x333 = 1418U;
	volatile int8_t x335 = 57;
	int64_t x336 = -545126870350LL;
	static int64_t t57 = 20523019LL;

	t57 = ((x333%x334)%(x335%x336));

	if (t57 != 50LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x341 = 26968U;
	volatile int8_t x342 = -38;
	int16_t x343 = -1;

	t58 = ((x341%x342)%(x343%x344));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x350 = -144020;
	static int64_t x352 = INT64_MAX;
	int64_t t59 = 0LL;

	t59 = ((x349%x350)%(x351%x352));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x358 = -208085LL;
	int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MIN;
	volatile int64_t t60 = -127093694581798LL;

	t60 = ((x357%x358)%(x359%x360));

	if (t60 != 9LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x361 = INT16_MIN;
	int64_t x362 = 1690209LL;
	int8_t x363 = 1;

	t61 = ((x361%x362)%(x363%x364));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x369 = UINT8_MAX;
	int8_t x370 = INT8_MAX;
	static int16_t x372 = INT16_MAX;
	int32_t t62 = -41;

	t62 = ((x369%x370)%(x371%x372));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x381 = -1LL;
	uint8_t x382 = 61U;
	volatile uint16_t x383 = UINT16_MAX;

	t63 = ((x381%x382)%(x383%x384));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x385 = -59;
	int64_t x386 = 241550LL;
	int8_t x387 = INT8_MIN;
	uint64_t x388 = UINT64_MAX;
	uint64_t t64 = 108LLU;

	t64 = ((x385%x386)%(x387%x388));

	if (t64 != 69LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x391 = UINT8_MAX;
	static volatile uint64_t t65 = 4665LLU;

	t65 = ((x389%x390)%(x391%x392));

	if (t65 != 15LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x402 = -1;
	static uint64_t x403 = UINT64_MAX;
	volatile int16_t x404 = INT16_MAX;
	volatile uint64_t t66 = 939209990LLU;

	t66 = ((x401%x402)%(x403%x404));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x405 = INT32_MIN;
	volatile uint64_t x406 = 12245122339LLU;
	int32_t x408 = 5;
	static volatile uint64_t t67 = 489655885944068LLU;

	t67 = ((x405%x406)%(x407%x408));

	if (t67 != 4151048502LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x409 = -1;
	static int64_t x410 = -1LL;
	uint16_t x411 = 9U;
	volatile int8_t x412 = -31;

	t68 = ((x409%x410)%(x411%x412));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x413 = UINT8_MAX;
	int32_t x414 = 2;
	int16_t x415 = -3;
	volatile int32_t x416 = INT32_MAX;
	volatile int32_t t69 = 3164197;

	t69 = ((x413%x414)%(x415%x416));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x417 = 3922;
	uint32_t x418 = 3289947U;
	int32_t x419 = -1;
	int32_t x420 = -1023;
	volatile uint32_t t70 = 1U;

	t70 = ((x417%x418)%(x419%x420));

	if (t70 != 3922U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x426 = -7312;
	static int8_t x427 = INT8_MAX;
	int64_t x428 = INT64_MIN;
	static volatile int64_t t71 = 157721481382107409LL;

	t71 = ((x425%x426)%(x427%x428));

	if (t71 != -91LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x434 = -2481244;
	int32_t x435 = 5639;
	int8_t x436 = INT8_MIN;
	volatile uint32_t t72 = 61261U;

	t72 = ((x433%x434)%(x435%x436));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x437 = -1;
	int64_t x438 = INT64_MAX;
	static int32_t x439 = INT32_MAX;

	t73 = ((x437%x438)%(x439%x440));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x441 = 105U;
	volatile int64_t x443 = INT64_MIN;
	int32_t x444 = INT32_MAX;

	t74 = ((x441%x442)%(x443%x444));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x446 = 2495U;
	int16_t x447 = INT16_MAX;
	static int8_t x448 = 6;
	volatile uint64_t t75 = 67482987407LLU;

	t75 = ((x445%x446)%(x447%x448));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x449 = INT64_MIN;
	volatile int16_t x450 = 6;
	int8_t x451 = INT8_MIN;
	int64_t t76 = -2679210LL;

	t76 = ((x449%x450)%(x451%x452));

	if (t76 != -2LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x457 = UINT8_MAX;
	volatile int32_t x459 = INT32_MIN;
	uint8_t x460 = UINT8_MAX;
	uint64_t t77 = 410636385LLU;

	t77 = ((x457%x458)%(x459%x460));

	if (t77 != 255LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x466 = 2U;
	int16_t x467 = -1356;
	int32_t t78 = 492;

	t78 = ((x465%x466)%(x467%x468));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x478 = -1;
	int64_t x479 = 673755LL;
	uint8_t x480 = UINT8_MAX;
	volatile int64_t t79 = -10933020LL;

	t79 = ((x477%x478)%(x479%x480));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x482 = INT32_MIN;
	static volatile int8_t x484 = INT8_MIN;
	volatile int64_t t80 = -66LL;

	t80 = ((x481%x482)%(x483%x484));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x485 = INT8_MIN;
	volatile int8_t x488 = INT8_MIN;
	uint64_t t81 = 35365622464493311LLU;

	t81 = ((x485%x486)%(x487%x488));

	if (t81 != 20489469826300538LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x489 = INT32_MAX;
	static uint16_t x491 = 2220U;
	uint64_t x492 = UINT64_MAX;
	uint64_t t82 = 84142411LLU;

	t82 = ((x489%x490)%(x491%x492));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x493 = 466511515039LLU;
	int16_t x494 = 5094;
	volatile int32_t x495 = 23;
	uint64_t t83 = 10095586549427LLU;

	t83 = ((x493%x494)%(x495%x496));

	if (t83 != 8LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x502 = UINT32_MAX;
	static int16_t x503 = INT16_MIN;
	uint16_t x504 = UINT16_MAX;
	volatile uint32_t t84 = 1492982U;

	t84 = ((x501%x502)%(x503%x504));

	if (t84 != 127U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x505 = UINT8_MAX;
	volatile uint8_t x507 = 14U;
	volatile int32_t x508 = INT32_MAX;

	t85 = ((x505%x506)%(x507%x508));

	if (t85 != 3LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x509 = INT8_MIN;
	uint16_t x510 = UINT16_MAX;
	int16_t x511 = 1;
	volatile uint16_t x512 = 53U;
	int32_t t86 = 4691298;

	t86 = ((x509%x510)%(x511%x512));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x513 = UINT8_MAX;
	int64_t x514 = INT64_MAX;
	static int64_t x515 = INT64_MIN;
	static int16_t x516 = 38;
	int64_t t87 = -1LL;

	t87 = ((x513%x514)%(x515%x516));

	if (t87 != 3LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x518 = 1U;
	uint64_t x519 = 840865071335941LLU;
	int8_t x520 = 15;
	static uint64_t t88 = 37465LLU;

	t88 = ((x517%x518)%(x519%x520));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x529 = INT8_MAX;
	int8_t x530 = INT8_MIN;
	volatile uint32_t x531 = UINT32_MAX;
	int32_t x532 = -461853507;

	t89 = ((x529%x530)%(x531%x532));

	if (t89 != 127U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x535 = INT32_MIN;
	volatile int64_t t90 = -1633372LL;

	t90 = ((x533%x534)%(x535%x536));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x537 = 26362648491217LLU;
	int32_t x538 = INT32_MAX;
	uint8_t x539 = 1U;
	int8_t x540 = INT8_MIN;
	volatile uint64_t t91 = 523448LLU;

	t91 = ((x537%x538)%(x539%x540));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x541 = -1LL;
	uint32_t x542 = 287990U;
	volatile int64_t x543 = INT64_MIN;
	int8_t x544 = 40;
	static volatile int64_t t92 = 43750LL;

	t92 = ((x541%x542)%(x543%x544));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x545 = UINT32_MAX;
	volatile int64_t x546 = -1LL;
	static uint32_t x547 = 14055U;
	static volatile int64_t x548 = 171LL;
	volatile int64_t t93 = 260LL;

	t93 = ((x545%x546)%(x547%x548));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x561 = -1;
	volatile int64_t x562 = INT64_MAX;
	int64_t x564 = INT64_MIN;
	int64_t t94 = 24906866118096LL;

	t94 = ((x561%x562)%(x563%x564));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x566 = INT16_MIN;
	volatile uint64_t x567 = 279267802856132LLU;
	int32_t x568 = INT32_MIN;
	static uint64_t t95 = 2798022276464816LLU;

	t95 = ((x565%x566)%(x567%x568));

	if (t95 != 267891653464615LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x569 = 14880932824LL;
	volatile int8_t x571 = INT8_MAX;
	int32_t x572 = INT32_MIN;
	static int64_t t96 = -242508LL;

	t96 = ((x569%x570)%(x571%x572));

	if (t96 != 2LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x573 = 4287888296697042560LLU;
	static uint64_t x574 = UINT64_MAX;
	volatile uint8_t x575 = UINT8_MAX;
	uint8_t x576 = 113U;
	static uint64_t t97 = 7438LLU;

	t97 = ((x573%x574)%(x575%x576));

	if (t97 != 6LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x577 = -1;
	static volatile int8_t x578 = -30;
	uint8_t x580 = 110U;
	int32_t t98 = -396;

	t98 = ((x577%x578)%(x579%x580));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x582 = 5U;
	int16_t x583 = -1;
	int32_t x584 = -2;

	t99 = ((x581%x582)%(x583%x584));

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

