#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x8 = UINT16_MAX;
volatile int8_t x10 = -7;
uint64_t x14 = 37019510LLU;
int16_t x16 = -1;
int32_t t3 = 21159651;
int8_t x18 = -19;
uint32_t x19 = 450084U;
uint32_t x29 = UINT32_MAX;
uint32_t x49 = 7U;
static int8_t x58 = -1;
volatile int64_t x59 = -1LL;
static int32_t x66 = 647153;
uint16_t x101 = 27U;
int8_t x105 = INT8_MIN;
volatile int32_t t20 = 3723935;
int16_t x113 = INT16_MIN;
static int8_t x122 = INT8_MIN;
int32_t t22 = -1710;
static uint8_t x125 = UINT8_MAX;
uint64_t x126 = 297266657087959881LLU;
static int32_t t23 = 458658;
static volatile int32_t t24 = -688245;
static int32_t t26 = 137378;
int8_t x150 = -1;
int32_t t27 = -1;
volatile int8_t x163 = 51;
static uint64_t x164 = 26751093388217195LLU;
static uint8_t x165 = 0U;
uint64_t x172 = 11698876983279LLU;
volatile int32_t t34 = -229698796;
static uint32_t x190 = 52014U;
int16_t x192 = INT16_MAX;
int32_t x198 = -1;
static volatile int32_t t37 = -27491080;
int64_t x203 = INT64_MIN;
int8_t x207 = INT8_MIN;
uint64_t x212 = 4185157653083912LLU;
volatile uint16_t x213 = 118U;
int32_t x218 = INT32_MAX;
volatile int32_t x221 = INT32_MAX;
uint8_t x223 = 1U;
uint8_t x225 = 63U;
int16_t x232 = 5;
int32_t t45 = -9047490;
uint64_t x239 = 47911159LLU;
volatile int32_t t47 = -853867;
int16_t x248 = INT16_MIN;
uint32_t x250 = UINT32_MAX;
static int8_t x251 = -1;
int16_t x252 = -1;
int32_t t50 = 1376;
int8_t x253 = 0;
volatile uint32_t x254 = UINT32_MAX;
int32_t t51 = 25;
volatile int32_t t53 = -21921316;
uint8_t x271 = 25U;
static volatile int8_t x281 = -1;
uint16_t x282 = 1U;
int8_t x284 = -1;
uint16_t x288 = 145U;
uint32_t x305 = UINT32_MAX;
int16_t x311 = INT16_MAX;
static volatile int32_t t63 = 1;
volatile uint8_t x325 = UINT8_MAX;
volatile int16_t x330 = INT16_MAX;
volatile int64_t x333 = INT64_MAX;
volatile uint8_t x340 = 85U;
static volatile int32_t t70 = 18395705;
int64_t x343 = 1700590599128LL;
int8_t x346 = -1;
uint64_t x355 = 5562526276203LLU;
volatile int32_t t74 = -149354;
static int32_t t75 = 111367;
static volatile int32_t t76 = 785;
int8_t x369 = -3;
volatile int64_t x371 = 100231001825939400LL;
int8_t x374 = INT8_MAX;
int64_t x376 = 1837561617LL;
static volatile int32_t x398 = 64845;
int32_t t80 = -5299;
uint16_t x413 = 1U;
int32_t t81 = -94032512;
uint16_t x417 = 47U;
uint8_t x424 = 1U;
int16_t x427 = -1;
static uint16_t x429 = 1U;
uint8_t x432 = UINT8_MAX;
int32_t x437 = 1561410;
volatile int32_t t88 = 1763;
int32_t x448 = INT32_MIN;
static volatile int32_t t92 = -390;
volatile int32_t x472 = INT32_MIN;
static int32_t t93 = -98201064;
static uint32_t x482 = 2008U;
static int64_t x486 = INT64_MAX;
int32_t x487 = -1;
uint16_t x488 = 27U;
int64_t x498 = -620605818999LL;
volatile uint16_t x499 = 9556U;
int32_t t98 = -673485224;
volatile int64_t x501 = INT64_MIN;
uint16_t x503 = 24030U;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	volatile int64_t x2 = -1LL;
	int32_t x3 = -411;
	volatile uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 0;

	t0 = (x1<(x2+(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	uint32_t x6 = 124679518U;
	volatile int64_t x7 = -1LL;
	volatile int32_t t1 = 49978;

	t1 = (x5<(x6+(x7-x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 96LL;
	int16_t x11 = -1;
	static int16_t x12 = INT16_MIN;
	int32_t t2 = 2432150;

	t2 = (x9<(x10+(x11-x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int32_t x15 = -48;

	t3 = (x13<(x14+(x15-x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	uint16_t x20 = 48U;
	volatile int32_t t4 = 132987385;

	t4 = (x17<(x18+(x19-x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 10498U;
	int16_t x22 = -1;
	int64_t x23 = 13380536LL;
	static int32_t x24 = -1;
	volatile int32_t t5 = -28469963;

	t5 = (x21<(x22+(x23-x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	uint16_t x26 = 51U;
	uint8_t x27 = 36U;
	uint64_t x28 = 36990405LLU;
	volatile int32_t t6 = 907;

	t6 = (x25<(x26+(x27-x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x30 = UINT8_MAX;
	static int16_t x31 = -887;
	int16_t x32 = -1;
	static volatile int32_t t7 = -6553;

	t7 = (x29<(x30+(x31-x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x37 = 0U;
	int8_t x38 = INT8_MIN;
	int32_t x39 = -26325;
	uint32_t x40 = UINT32_MAX;
	int32_t t8 = 7148558;

	t8 = (x37<(x38+(x39-x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	int32_t x42 = -1;
	uint8_t x43 = 1U;
	int16_t x44 = INT16_MAX;
	static volatile int32_t t9 = 0;

	t9 = (x41<(x42+(x43-x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = INT8_MIN;
	uint64_t x46 = 4262939984237LLU;
	int32_t x47 = -1;
	uint16_t x48 = 13U;
	int32_t t10 = -81;

	t10 = (x45<(x46+(x47-x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x50 = INT64_MIN;
	uint64_t x51 = UINT64_MAX;
	static int64_t x52 = INT64_MIN;
	static int32_t t11 = -233570572;

	t11 = (x49<(x50+(x51-x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x53 = 4471834794LLU;
	int16_t x54 = -732;
	uint16_t x55 = 3U;
	int8_t x56 = INT8_MIN;
	volatile int32_t t12 = -1;

	t12 = (x53<(x54+(x55-x56)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 8775U;
	int16_t x60 = INT16_MIN;
	volatile int32_t t13 = -5794611;

	t13 = (x57<(x58+(x59-x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = UINT8_MAX;
	volatile int64_t x67 = -527293280709LL;
	static int8_t x68 = INT8_MIN;
	volatile int32_t t14 = -3;

	t14 = (x65<(x66+(x67-x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x69 = UINT32_MAX;
	static int32_t x70 = -1;
	int16_t x71 = INT16_MAX;
	static int16_t x72 = -7246;
	volatile int32_t t15 = -2600;

	t15 = (x69<(x70+(x71-x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = 44U;
	int16_t x82 = -1566;
	uint8_t x83 = 43U;
	volatile uint8_t x84 = UINT8_MAX;
	volatile int32_t t16 = 490254;

	t16 = (x81<(x82+(x83-x84)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x97 = UINT16_MAX;
	static int64_t x98 = 201LL;
	volatile int64_t x99 = -83387787267571LL;
	int16_t x100 = INT16_MIN;
	volatile int32_t t17 = -1;

	t17 = (x97<(x98+(x99-x100)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x102 = -23788LL;
	int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MAX;
	static int32_t t18 = -1835;

	t18 = (x101<(x102+(x103-x104)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x106 = 13979758793922534LLU;
	volatile int64_t x107 = -1LL;
	uint32_t x108 = 5285U;
	int32_t t19 = -116651;

	t19 = (x105<(x106+(x107-x108)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x109 = INT8_MAX;
	static int32_t x110 = INT32_MIN;
	int32_t x111 = -1;
	volatile int8_t x112 = -1;

	t20 = (x109<(x110+(x111-x112)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x114 = 2U;
	int16_t x115 = -1;
	volatile int16_t x116 = INT16_MIN;
	volatile int32_t t21 = 7446;

	t21 = (x113<(x114+(x115-x116)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x121 = INT16_MIN;
	int16_t x123 = -1;
	int32_t x124 = -1;

	t22 = (x121<(x122+(x123-x124)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x127 = INT64_MAX;
	static int32_t x128 = INT32_MAX;

	t23 = (x125<(x126+(x127-x128)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x129 = 1U;
	uint64_t x130 = 4062825794305691LLU;
	volatile int64_t x131 = -254436907341LL;
	uint16_t x132 = 4U;

	t24 = (x129<(x130+(x131-x132)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x141 = -1;
	static volatile int8_t x142 = INT8_MIN;
	int16_t x143 = -1;
	uint16_t x144 = 2370U;
	volatile int32_t t25 = 0;

	t25 = (x141<(x142+(x143-x144)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x145 = 0U;
	static uint64_t x146 = UINT64_MAX;
	static int64_t x147 = -1LL;
	volatile int32_t x148 = -1;

	t26 = (x145<(x146+(x147-x148)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x149 = 44U;
	int16_t x151 = INT16_MIN;
	static volatile uint64_t x152 = UINT64_MAX;

	t27 = (x149<(x150+(x151-x152)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x153 = INT16_MAX;
	int64_t x154 = -25375730785691247LL;
	int32_t x155 = -1992483;
	int8_t x156 = INT8_MAX;
	volatile int32_t t28 = -42738210;

	t28 = (x153<(x154+(x155-x156)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x157 = 3263U;
	int32_t x158 = -8356527;
	volatile uint8_t x159 = UINT8_MAX;
	static uint64_t x160 = 1506194940LLU;
	volatile int32_t t29 = -1;

	t29 = (x157<(x158+(x159-x160)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x161 = 237022U;
	static uint16_t x162 = 242U;
	volatile int32_t t30 = 12928934;

	t30 = (x161<(x162+(x163-x164)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x166 = -1LL;
	uint8_t x167 = UINT8_MAX;
	int8_t x168 = -1;
	int32_t t31 = -2949852;

	t31 = (x165<(x166+(x167-x168)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x169 = UINT16_MAX;
	int32_t x170 = -613433;
	int64_t x171 = -105852LL;
	volatile int32_t t32 = 2038878;

	t32 = (x169<(x170+(x171-x172)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x177 = 5U;
	int64_t x178 = -1LL;
	static int32_t x179 = -264;
	static volatile int16_t x180 = -879;
	volatile int32_t t33 = 512;

	t33 = (x177<(x178+(x179-x180)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = -8687039077223684LL;
	uint64_t x182 = 4295951118805091LLU;
	int8_t x183 = 3;
	int64_t x184 = -1LL;

	t34 = (x181<(x182+(x183-x184)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = -792946619600112LL;
	int8_t x191 = INT8_MIN;
	int32_t t35 = -169;

	t35 = (x189<(x190+(x191-x192)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x193 = UINT32_MAX;
	int8_t x194 = 1;
	static volatile int16_t x195 = INT16_MIN;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t36 = -4761504;

	t36 = (x193<(x194+(x195-x196)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x197 = -562240LL;
	int32_t x199 = INT32_MAX;
	volatile uint8_t x200 = 14U;

	t37 = (x197<(x198+(x199-x200)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x201 = INT16_MAX;
	static int8_t x202 = 1;
	static int8_t x204 = INT8_MIN;
	static volatile int32_t t38 = -24;

	t38 = (x201<(x202+(x203-x204)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x205 = INT32_MAX;
	int64_t x206 = -1LL;
	uint32_t x208 = UINT32_MAX;
	static int32_t t39 = -660219;

	t39 = (x205<(x206+(x207-x208)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x209 = INT8_MIN;
	volatile int64_t x210 = INT64_MIN;
	static volatile uint64_t x211 = 58025534LLU;
	static int32_t t40 = 85433076;

	t40 = (x209<(x210+(x211-x212)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x214 = -1;
	volatile uint32_t x215 = 390U;
	uint32_t x216 = 1917154496U;
	volatile int32_t t41 = 100366;

	t41 = (x213<(x214+(x215-x216)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x217 = -1242322678390LL;
	int16_t x219 = -2;
	volatile uint64_t x220 = UINT64_MAX;
	int32_t t42 = -22973;

	t42 = (x217<(x218+(x219-x220)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x222 = -3904LL;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t43 = -56017;

	t43 = (x221<(x222+(x223-x224)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x226 = 1296615U;
	uint8_t x227 = 17U;
	int8_t x228 = -1;
	int32_t t44 = 225643;

	t44 = (x225<(x226+(x227-x228)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x229 = 551194;
	static int16_t x230 = INT16_MIN;
	volatile uint16_t x231 = 11U;

	t45 = (x229<(x230+(x231-x232)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x233 = INT8_MIN;
	static int32_t x234 = 1;
	volatile int8_t x235 = -1;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t46 = 77;

	t46 = (x233<(x234+(x235-x236)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x237 = UINT16_MAX;
	int64_t x238 = INT64_MIN;
	uint16_t x240 = UINT16_MAX;

	t47 = (x237<(x238+(x239-x240)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x241 = 32432732638LL;
	volatile uint32_t x242 = 166U;
	volatile int32_t x243 = INT32_MIN;
	static uint64_t x244 = 276374921LLU;
	int32_t t48 = 1901292;

	t48 = (x241<(x242+(x243-x244)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x245 = -1;
	int32_t x246 = 172;
	int64_t x247 = -2013306LL;
	static int32_t t49 = 746;

	t49 = (x245<(x246+(x247-x248)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x249 = 22U;

	t50 = (x249<(x250+(x251-x252)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x255 = 1LLU;
	int8_t x256 = -1;

	t51 = (x253<(x254+(x255-x256)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x257 = INT32_MIN;
	uint16_t x258 = UINT16_MAX;
	volatile int16_t x259 = -742;
	int64_t x260 = 315679LL;
	int32_t t52 = 271685;

	t52 = (x257<(x258+(x259-x260)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x261 = -1;
	volatile int16_t x262 = INT16_MAX;
	uint64_t x263 = 28687739212022LLU;
	uint64_t x264 = UINT64_MAX;

	t53 = (x261<(x262+(x263-x264)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x265 = UINT16_MAX;
	int32_t x266 = INT32_MIN;
	int32_t x267 = 726;
	uint8_t x268 = 2U;
	int32_t t54 = 11233;

	t54 = (x265<(x266+(x267-x268)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x269 = 17U;
	uint16_t x270 = 183U;
	int8_t x272 = 1;
	volatile int32_t t55 = 24;

	t55 = (x269<(x270+(x271-x272)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x273 = -1;
	volatile int16_t x274 = INT16_MIN;
	volatile uint64_t x275 = 4009LLU;
	static int8_t x276 = INT8_MIN;
	volatile int32_t t56 = -683;

	t56 = (x273<(x274+(x275-x276)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x277 = 0U;
	int64_t x278 = -1LL;
	int8_t x279 = INT8_MAX;
	int64_t x280 = INT64_MAX;
	volatile int32_t t57 = 97592;

	t57 = (x277<(x278+(x279-x280)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x283 = UINT32_MAX;
	int32_t t58 = 11;

	t58 = (x281<(x282+(x283-x284)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x285 = -3;
	int32_t x286 = -123321;
	int64_t x287 = INT64_MAX;
	volatile int32_t t59 = -13108;

	t59 = (x285<(x286+(x287-x288)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x293 = INT64_MIN;
	uint8_t x294 = UINT8_MAX;
	int8_t x295 = -1;
	static int16_t x296 = -1;
	volatile int32_t t60 = 88467;

	t60 = (x293<(x294+(x295-x296)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x297 = INT8_MIN;
	static volatile int16_t x298 = INT16_MAX;
	int8_t x299 = -1;
	int8_t x300 = INT8_MIN;
	int32_t t61 = 42582767;

	t61 = (x297<(x298+(x299-x300)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x306 = 16U;
	uint16_t x307 = 14U;
	volatile int8_t x308 = -1;
	static volatile int32_t t62 = 3;

	t62 = (x305<(x306+(x307-x308)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x309 = 486;
	volatile uint16_t x310 = 5U;
	int16_t x312 = -1;

	t63 = (x309<(x310+(x311-x312)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x313 = 105854U;
	int16_t x314 = 0;
	volatile uint32_t x315 = UINT32_MAX;
	int32_t x316 = -50264197;
	int32_t t64 = 15487710;

	t64 = (x313<(x314+(x315-x316)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x317 = INT16_MIN;
	int16_t x318 = INT16_MAX;
	uint8_t x319 = 11U;
	static int32_t x320 = INT32_MAX;
	static int32_t t65 = 26642740;

	t65 = (x317<(x318+(x319-x320)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MIN;
	uint16_t x323 = UINT16_MAX;
	int64_t x324 = -39147LL;
	int32_t t66 = -2121;

	t66 = (x321<(x322+(x323-x324)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x326 = UINT16_MAX;
	uint32_t x327 = UINT32_MAX;
	uint8_t x328 = 90U;
	volatile int32_t t67 = 117;

	t67 = (x325<(x326+(x327-x328)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x329 = 14U;
	static int32_t x331 = INT32_MIN;
	static int32_t x332 = -2;
	volatile int32_t t68 = 13337935;

	t68 = (x329<(x330+(x331-x332)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x334 = UINT64_MAX;
	volatile int16_t x335 = INT16_MIN;
	uint8_t x336 = 0U;
	volatile int32_t t69 = 593073018;

	t69 = (x333<(x334+(x335-x336)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x337 = 172159;
	uint8_t x338 = 42U;
	int32_t x339 = 6153;

	t70 = (x337<(x338+(x339-x340)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x341 = -1LL;
	uint32_t x342 = 160U;
	int32_t x344 = -1;
	volatile int32_t t71 = -1;

	t71 = (x341<(x342+(x343-x344)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x345 = INT64_MAX;
	static int8_t x347 = INT8_MIN;
	static uint64_t x348 = 74942647412357LLU;
	volatile int32_t t72 = -7504;

	t72 = (x345<(x346+(x347-x348)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x349 = 1745713LLU;
	static int64_t x350 = INT64_MIN;
	int8_t x351 = 1;
	static int16_t x352 = INT16_MIN;
	volatile int32_t t73 = -3629795;

	t73 = (x349<(x350+(x351-x352)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MIN;
	volatile uint64_t x356 = UINT64_MAX;

	t74 = (x353<(x354+(x355-x356)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x357 = 611U;
	int32_t x358 = 2537547;
	int32_t x359 = -2;
	volatile int16_t x360 = INT16_MIN;

	t75 = (x357<(x358+(x359-x360)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x361 = INT64_MAX;
	int16_t x362 = INT16_MAX;
	volatile uint32_t x363 = UINT32_MAX;
	int32_t x364 = -1;

	t76 = (x361<(x362+(x363-x364)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x370 = INT16_MIN;
	int16_t x372 = INT16_MIN;
	int32_t t77 = 4;

	t77 = (x369<(x370+(x371-x372)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x373 = INT32_MAX;
	static int8_t x375 = INT8_MIN;
	volatile int32_t t78 = 1996;

	t78 = (x373<(x374+(x375-x376)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x397 = 913474951LLU;
	volatile uint32_t x399 = 62U;
	static uint64_t x400 = 58597226LLU;
	volatile int32_t t79 = -82;

	t79 = (x397<(x398+(x399-x400)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x409 = -11912540461881151LL;
	int16_t x410 = 1429;
	static int64_t x411 = 92466227601LL;
	int64_t x412 = INT64_MAX;

	t80 = (x409<(x410+(x411-x412)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x414 = -1;
	int64_t x415 = -4152251833LL;
	uint64_t x416 = 96285LLU;

	t81 = (x413<(x414+(x415-x416)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x418 = 3U;
	uint8_t x419 = 1U;
	static uint64_t x420 = 110214543479587LLU;
	static int32_t t82 = -18;

	t82 = (x417<(x418+(x419-x420)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x421 = 201U;
	uint32_t x422 = 16807180U;
	int32_t x423 = -1;
	volatile int32_t t83 = -1110508;

	t83 = (x421<(x422+(x423-x424)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x425 = UINT64_MAX;
	int8_t x426 = INT8_MIN;
	int16_t x428 = INT16_MIN;
	static volatile int32_t t84 = -1655830;

	t84 = (x425<(x426+(x427-x428)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x430 = 113U;
	static int8_t x431 = INT8_MAX;
	int32_t t85 = -13636;

	t85 = (x429<(x430+(x431-x432)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x433 = INT64_MIN;
	int32_t x434 = INT32_MAX;
	int32_t x435 = INT32_MIN;
	int8_t x436 = -1;
	int32_t t86 = 6;

	t86 = (x433<(x434+(x435-x436)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x438 = INT32_MAX;
	static int16_t x439 = INT16_MIN;
	int64_t x440 = -2028LL;
	volatile int32_t t87 = 31;

	t87 = (x437<(x438+(x439-x440)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x441 = -54LL;
	int64_t x442 = 10467LL;
	uint8_t x443 = 5U;
	uint16_t x444 = 10500U;

	t88 = (x441<(x442+(x443-x444)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x445 = 1U;
	uint16_t x446 = UINT16_MAX;
	int64_t x447 = INT64_MIN;
	int32_t t89 = -1473105;

	t89 = (x445<(x446+(x447-x448)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x457 = -1;
	static volatile int8_t x458 = 60;
	int8_t x459 = -6;
	uint16_t x460 = UINT16_MAX;
	volatile int32_t t90 = 1;

	t90 = (x457<(x458+(x459-x460)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x461 = UINT32_MAX;
	volatile uint64_t x462 = 1844LLU;
	uint64_t x463 = 161192310326LLU;
	static volatile int32_t x464 = -249317388;
	volatile int32_t t91 = -243624206;

	t91 = (x461<(x462+(x463-x464)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x465 = 4193730644LLU;
	uint16_t x466 = UINT16_MAX;
	uint8_t x467 = UINT8_MAX;
	int32_t x468 = INT32_MAX;

	t92 = (x465<(x466+(x467-x468)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x469 = -96340;
	uint16_t x470 = 17203U;
	uint64_t x471 = 13485347632432616LLU;

	t93 = (x469<(x470+(x471-x472)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x473 = -1;
	int16_t x474 = INT16_MIN;
	int64_t x475 = INT64_MAX;
	static volatile int16_t x476 = INT16_MAX;
	volatile int32_t t94 = -692272;

	t94 = (x473<(x474+(x475-x476)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x481 = INT8_MIN;
	volatile int8_t x483 = 29;
	uint32_t x484 = 14U;
	volatile int32_t t95 = -1;

	t95 = (x481<(x482+(x483-x484)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x485 = -1LL;
	int32_t t96 = 3;

	t96 = (x485<(x486+(x487-x488)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x493 = 19084464060LLU;
	static int64_t x494 = -1LL;
	int64_t x495 = 37408LL;
	int8_t x496 = INT8_MIN;
	int32_t t97 = 6;

	t97 = (x493<(x494+(x495-x496)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x497 = 15786;
	int16_t x500 = INT16_MIN;

	t98 = (x497<(x498+(x499-x500)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x502 = INT8_MAX;
	uint16_t x504 = UINT16_MAX;
	int32_t t99 = 8;

	t99 = (x501<(x502+(x503-x504)));

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

