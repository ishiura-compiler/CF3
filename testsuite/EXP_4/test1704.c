
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = 405056;
int16_t x7 = 12;
int16_t x10 = INT16_MAX;
int32_t x11 = -259327;
static volatile uint8_t x16 = UINT8_MAX;
static int32_t t3 = -464887511;
static int16_t x22 = 1;
int64_t x23 = -1LL;
int16_t x24 = INT16_MIN;
volatile int32_t t5 = 3140;
int16_t x32 = INT16_MIN;
volatile int32_t t7 = -39095689;
static uint16_t x41 = UINT16_MAX;
uint16_t x43 = 1324U;
static int16_t x45 = 5695;
static uint16_t x52 = 6245U;
volatile int32_t t12 = 887002;
static uint32_t x62 = 11252793U;
static int64_t x63 = INT64_MIN;
int64_t x66 = 3000167314685LL;
static uint16_t x68 = UINT16_MAX;
static int32_t t16 = -7975768;
static volatile int64_t x70 = -1LL;
static volatile int8_t x74 = INT8_MIN;
int16_t x80 = INT16_MIN;
int16_t x87 = 15885;
static int64_t x95 = 575696512LL;
volatile int32_t t24 = 2;
volatile uint8_t x108 = UINT8_MAX;
uint16_t x110 = 1U;
volatile uint16_t x112 = 0U;
volatile int8_t x115 = INT8_MAX;
int32_t x117 = 106;
volatile int32_t t29 = 1;
int32_t x124 = INT32_MIN;
static volatile int8_t x127 = INT8_MIN;
volatile int32_t t31 = -78174973;
static uint64_t x129 = 3LLU;
int64_t x130 = INT64_MIN;
static int64_t x137 = INT64_MIN;
volatile int16_t x140 = -1;
static int8_t x141 = -1;
volatile uint16_t x142 = 23247U;
volatile int32_t t36 = 28005;
uint64_t x151 = 118937982LLU;
static int16_t x152 = INT16_MIN;
int32_t x153 = INT32_MAX;
int32_t t40 = -601092;
volatile int64_t x176 = INT64_MIN;
uint8_t x187 = 27U;
int32_t t49 = -5;
int8_t x204 = INT8_MIN;
uint64_t x220 = 72614048204669324LLU;
static int64_t x222 = -1LL;
uint8_t x225 = 0U;
int8_t x226 = INT8_MAX;
static int64_t x227 = 7926LL;
uint16_t x228 = 503U;
int32_t t56 = 110;
int8_t x230 = INT8_MIN;
int32_t t57 = -15840;
int8_t x236 = -1;
int64_t x239 = INT64_MAX;
int8_t x240 = 15;
int32_t t59 = -173097;
uint16_t x243 = 75U;
volatile int32_t x246 = -13303;
static int32_t t61 = 108270;
static uint32_t x250 = 52U;
volatile int8_t x257 = INT8_MIN;
static uint64_t x259 = 2609LLU;
uint64_t x261 = UINT64_MAX;
static uint8_t x263 = UINT8_MAX;
volatile int64_t x265 = INT64_MAX;
volatile int32_t x267 = 18810;
static int32_t t66 = 0;
static volatile int32_t t67 = 0;
static volatile int32_t t68 = -1;
int32_t t69 = -2;
static volatile uint32_t x282 = 8298758U;
volatile uint8_t x284 = 0U;
int64_t x286 = -1LL;
volatile int8_t x290 = INT8_MIN;
int8_t x298 = -1;
int16_t x304 = -1;
static volatile int32_t t75 = -4;
uint16_t x305 = 153U;
int64_t x307 = INT64_MAX;
int64_t x312 = INT64_MAX;
int8_t x314 = 1;
uint8_t x315 = 1U;
int16_t x317 = INT16_MAX;
int32_t x318 = INT32_MIN;
static volatile int16_t x323 = INT16_MAX;
uint64_t x327 = UINT64_MAX;
int32_t t82 = 805299;
uint32_t x333 = 270U;
uint64_t x339 = UINT64_MAX;
int32_t t87 = -151033603;
int32_t x353 = INT32_MIN;
uint16_t x371 = 946U;
uint8_t x372 = UINT8_MAX;
static volatile int32_t t92 = -13248640;
int8_t x377 = INT8_MIN;
uint64_t x380 = UINT64_MAX;
int8_t x381 = 1;
static volatile int32_t t96 = 1698;
static int32_t t102 = 0;
volatile int16_t x413 = INT16_MIN;
int16_t x414 = 82;
static int8_t x417 = INT8_MIN;
volatile int32_t t105 = 107324975;
uint32_t x429 = 31317444U;
int16_t x438 = INT16_MAX;
int16_t x440 = 292;
int32_t x441 = INT32_MIN;
uint64_t x451 = 61LLU;
static uint8_t x454 = UINT8_MAX;
volatile int32_t t113 = -15;
static uint16_t x457 = 1U;
volatile int32_t x458 = INT32_MIN;
uint32_t x459 = UINT32_MAX;
volatile int32_t x460 = INT32_MIN;
int64_t x463 = INT64_MIN;
uint32_t x466 = 3785400U;
volatile int32_t x480 = INT32_MAX;
static int64_t x488 = -6LL;
uint16_t x490 = UINT16_MAX;
uint32_t x494 = 16U;
int16_t x496 = -1;
static int64_t x505 = -1LL;
int16_t x507 = INT16_MIN;
volatile int32_t t126 = -6881334;
uint16_t x510 = 2773U;
volatile int64_t x511 = INT64_MIN;
volatile uint32_t x516 = 27787992U;
static int32_t t128 = -1289;
volatile uint64_t x519 = UINT64_MAX;
int32_t x529 = -1;
volatile uint16_t x530 = UINT16_MAX;
static volatile int16_t x536 = -10;
static uint32_t x537 = UINT32_MAX;
int8_t x551 = INT8_MIN;
volatile int64_t x553 = -1LL;
volatile int32_t x554 = 0;
static volatile uint16_t x555 = 1U;
int32_t x563 = INT32_MIN;
int16_t x564 = -410;
int16_t x565 = INT16_MIN;
static volatile int32_t t141 = 2292;
static int32_t t142 = -267284;
volatile int32_t t143 = 338;
int16_t x579 = INT16_MIN;
volatile int32_t x581 = INT32_MAX;
int16_t x588 = INT16_MIN;
int32_t t149 = 110;
int32_t t150 = -48670;
static uint64_t x606 = 3636431653LLU;
static int8_t x616 = 14;
int64_t x617 = INT64_MIN;
int16_t x620 = -1;
static volatile int64_t x626 = INT64_MIN;
int32_t x637 = INT32_MIN;
uint16_t x639 = UINT16_MAX;
static uint64_t x660 = 155344433430828LLU;
int8_t x661 = 0;
volatile uint32_t x662 = 1393294U;
int32_t x663 = 1;
int8_t x665 = -1;
int64_t x676 = -1LL;
volatile uint16_t x677 = 1429U;
volatile int64_t x680 = INT64_MIN;
static int16_t x682 = INT16_MIN;
int32_t t170 = 283166379;
int8_t x690 = INT8_MAX;
uint8_t x693 = UINT8_MAX;
uint8_t x702 = 22U;
uint32_t x708 = 1670754155U;
volatile int64_t x711 = INT64_MIN;
volatile int32_t x714 = INT32_MIN;
int64_t x716 = -15123736235170824LL;
int32_t t178 = 86351784;
static uint16_t x719 = 37U;
int32_t x730 = INT32_MIN;
uint64_t x731 = 39102432830LLU;
volatile int32_t x733 = -1;
volatile int32_t x736 = -19;
uint32_t x737 = 487U;
static uint16_t x747 = UINT16_MAX;
int32_t t186 = -16183835;
int64_t x750 = -1LL;
volatile int32_t x751 = INT32_MIN;
int64_t x752 = -1LL;
volatile int16_t x754 = INT16_MAX;
int32_t t188 = 9725;
uint64_t x757 = UINT64_MAX;
int32_t t191 = -197767454;
int64_t x772 = -7369733310773LL;
int32_t t192 = 265;
int8_t x777 = -1;
int64_t x782 = 103186990LL;
int32_t t195 = -237385630;
uint16_t x785 = 9973U;
volatile int32_t t196 = 85;
static volatile int16_t x797 = 73;
int8_t x798 = INT8_MAX;
volatile int32_t t199 = -22917;


void f0(void) {
    	int16_t x1 = 15;
	uint16_t x2 = 2U;
	int64_t x3 = -1176LL;
	int32_t t0 = -1;

    t0 = (x1<=(x2<=(x3>x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = 236;
	int16_t x6 = INT16_MAX;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = -77741;

    t1 = (x5<=(x6<=(x7>x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	static int32_t x12 = INT32_MIN;
	int32_t t2 = 16329;

    t2 = (x9<=(x10<=(x11>x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	volatile uint16_t x14 = 13U;
	volatile uint8_t x15 = 19U;

    t3 = (x13<=(x14<=(x15>x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	volatile int32_t x18 = INT32_MIN;
	int16_t x19 = INT16_MIN;
	int16_t x20 = -416;
	int32_t t4 = 168;

    t4 = (x17<=(x18<=(x19>x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;

    t5 = (x21<=(x22<=(x23>x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -92132;
	int16_t x26 = INT16_MIN;
	int16_t x27 = -1;
	static uint16_t x28 = 34U;
	static int32_t t6 = 2465462;

    t6 = (x25<=(x26<=(x27>x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	int16_t x30 = -122;
	volatile int64_t x31 = INT64_MIN;

    t7 = (x29<=(x30<=(x31>x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = -1;
	static int64_t x34 = -1494378353309775048LL;
	volatile int16_t x35 = INT16_MIN;
	static uint16_t x36 = UINT16_MAX;
	int32_t t8 = 829297;

    t8 = (x33<=(x34<=(x35>x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = -1;
	int64_t x38 = -1LL;
	static int32_t x39 = 4902;
	uint8_t x40 = 2U;
	int32_t t9 = 5;

    t9 = (x37<=(x38<=(x39>x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x42 = 2U;
	int64_t x44 = -13LL;
	int32_t t10 = 1897;

    t10 = (x41<=(x42<=(x43>x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x46 = 1U;
	volatile int64_t x47 = INT64_MAX;
	static int8_t x48 = INT8_MIN;
	volatile int32_t t11 = 21330;

    t11 = (x45<=(x46<=(x47>x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x49 = 2087;
	int32_t x50 = -1;
	static int64_t x51 = 222097608009732LL;

    t12 = (x49<=(x50<=(x51>x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	volatile int32_t x54 = INT32_MIN;
	uint8_t x55 = 90U;
	static int32_t x56 = INT32_MAX;
	int32_t t13 = 14;

    t13 = (x53<=(x54<=(x55>x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	uint8_t x58 = 10U;
	int64_t x59 = -1LL;
	uint32_t x60 = UINT32_MAX;
	int32_t t14 = 18846032;

    t14 = (x57<=(x58<=(x59>x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 1947;
	uint16_t x64 = 1U;
	int32_t t15 = 5446;

    t15 = (x61<=(x62<=(x63>x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = 4274692707931LL;
	int64_t x67 = -971554LL;

    t16 = (x65<=(x66<=(x67>x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = UINT64_MAX;
	static int8_t x71 = INT8_MAX;
	int32_t x72 = -1;
	static int32_t t17 = -62;

    t17 = (x69<=(x70<=(x71>x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = UINT64_MAX;
	int16_t x75 = INT16_MIN;
	static int16_t x76 = INT16_MIN;
	int32_t t18 = 1;

    t18 = (x73<=(x74<=(x75>x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 15528398U;
	int32_t x78 = 361037;
	int8_t x79 = INT8_MIN;
	volatile int32_t t19 = 5;

    t19 = (x77<=(x78<=(x79>x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	volatile int8_t x82 = -1;
	volatile int32_t x83 = INT32_MIN;
	uint32_t x84 = 10280523U;
	volatile int32_t t20 = -3;

    t20 = (x81<=(x82<=(x83>x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 10U;
	int64_t x86 = INT64_MIN;
	static int64_t x88 = -160030461233LL;
	static int32_t t21 = -6926;

    t21 = (x85<=(x86<=(x87>x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 0U;
	volatile int16_t x90 = -1;
	int32_t x91 = 12475;
	int16_t x92 = INT16_MIN;
	static int32_t t22 = 2791;

    t22 = (x89<=(x90<=(x91>x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x93 = INT64_MIN;
	volatile uint8_t x94 = UINT8_MAX;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = 384069;

    t23 = (x93<=(x94<=(x95>x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = 683976097;
	volatile int32_t x98 = INT32_MAX;
	int16_t x99 = INT16_MIN;
	static volatile int8_t x100 = -1;

    t24 = (x97<=(x98<=(x99>x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = UINT64_MAX;
	int64_t x102 = INT64_MIN;
	int8_t x103 = 1;
	int64_t x104 = INT64_MIN;
	static volatile int32_t t25 = 1;

    t25 = (x101<=(x102<=(x103>x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 700;
	int64_t x106 = 2023893697LL;
	volatile uint8_t x107 = 2U;
	volatile int32_t t26 = 58;

    t26 = (x105<=(x106<=(x107>x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = UINT64_MAX;
	int64_t x111 = INT64_MIN;
	volatile int32_t t27 = -1077955;

    t27 = (x109<=(x110<=(x111>x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	int8_t x114 = -1;
	volatile int64_t x116 = INT64_MIN;
	static volatile int32_t t28 = -2784;

    t28 = (x113<=(x114<=(x115>x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x118 = INT32_MIN;
	volatile int64_t x119 = INT64_MIN;
	static volatile uint32_t x120 = 293105U;

    t29 = (x117<=(x118<=(x119>x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x121 = INT64_MAX;
	int16_t x122 = INT16_MIN;
	volatile int32_t x123 = -43;
	volatile int32_t t30 = -5;

    t30 = (x121<=(x122<=(x123>x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int16_t x125 = INT16_MIN;
	uint16_t x126 = 3204U;
	uint16_t x128 = UINT16_MAX;

    t31 = (x125<=(x126<=(x127>x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x131 = 1;
	static uint8_t x132 = 7U;
	int32_t t32 = 46049439;

    t32 = (x129<=(x130<=(x131>x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 579U;
	volatile uint16_t x134 = UINT16_MAX;
	volatile int64_t x135 = INT64_MIN;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t33 = -345;

    t33 = (x133<=(x134<=(x135>x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint32_t x138 = UINT32_MAX;
	int16_t x139 = 0;
	volatile int32_t t34 = 0;

    t34 = (x137<=(x138<=(x139>x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x143 = INT8_MIN;
	static int16_t x144 = 1;
	int32_t t35 = -571792172;

    t35 = (x141<=(x142<=(x143>x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x145 = 1U;
	static int64_t x146 = 19964204082353LL;
	volatile int64_t x147 = INT64_MIN;
	int32_t x148 = INT32_MAX;

    t36 = (x145<=(x146<=(x147>x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -28;
	int64_t x150 = -18171432261370060LL;
	int32_t t37 = -1;

    t37 = (x149<=(x150<=(x151>x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x154 = 9826U;
	volatile uint32_t x155 = UINT32_MAX;
	int8_t x156 = 1;
	static int32_t t38 = -1210059;

    t38 = (x153<=(x154<=(x155>x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MIN;
	int8_t x159 = -1;
	static int16_t x160 = -15067;
	int32_t t39 = -147733559;

    t39 = (x157<=(x158<=(x159>x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -40;
	volatile int32_t x162 = INT32_MIN;
	static int16_t x163 = -43;
	static int32_t x164 = INT32_MAX;

    t40 = (x161<=(x162<=(x163>x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 8U;
	int32_t x166 = INT32_MIN;
	static volatile int8_t x167 = -1;
	uint16_t x168 = 8067U;
	volatile int32_t t41 = 3749;

    t41 = (x165<=(x166<=(x167>x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 1315521LLU;
	int64_t x170 = INT64_MIN;
	static int32_t x171 = -7745911;
	uint8_t x172 = 1U;
	int32_t t42 = 279184589;

    t42 = (x169<=(x170<=(x171>x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	static int64_t x174 = INT64_MAX;
	int8_t x175 = -1;
	int32_t t43 = 8;

    t43 = (x173<=(x174<=(x175>x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -219158435493972LL;
	volatile int64_t x178 = INT64_MAX;
	uint8_t x179 = 67U;
	int16_t x180 = INT16_MAX;
	volatile int32_t t44 = 343247262;

    t44 = (x177<=(x178<=(x179>x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = UINT16_MAX;
	int16_t x182 = INT16_MAX;
	uint64_t x183 = 31880226014432894LLU;
	int64_t x184 = -1LL;
	int32_t t45 = 2;

    t45 = (x181<=(x182<=(x183>x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -1;
	int16_t x186 = -2;
	int8_t x188 = -1;
	volatile int32_t t46 = 60;

    t46 = (x185<=(x186<=(x187>x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MAX;
	uint32_t x190 = 2365686U;
	uint16_t x191 = UINT16_MAX;
	uint16_t x192 = 221U;
	volatile int32_t t47 = -594;

    t47 = (x189<=(x190<=(x191>x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x193 = UINT64_MAX;
	uint64_t x194 = UINT64_MAX;
	static volatile uint64_t x195 = UINT64_MAX;
	uint8_t x196 = 3U;
	volatile int32_t t48 = 154717;

    t48 = (x193<=(x194<=(x195>x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x197 = INT8_MIN;
	static int16_t x198 = -1;
	uint16_t x199 = 1227U;
	uint32_t x200 = UINT32_MAX;

    t49 = (x197<=(x198<=(x199>x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MIN;
	volatile uint32_t x202 = 740302U;
	uint16_t x203 = 691U;
	int32_t t50 = -76633842;

    t50 = (x201<=(x202<=(x203>x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 15986759130514178LLU;
	int16_t x206 = 118;
	int16_t x207 = INT16_MIN;
	static int8_t x208 = -2;
	static volatile int32_t t51 = -7;

    t51 = (x205<=(x206<=(x207>x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x209 = INT16_MIN;
	volatile int32_t x210 = INT32_MAX;
	uint64_t x211 = 21875508159134006LLU;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 213;

    t52 = (x209<=(x210<=(x211>x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x213 = 9U;
	static uint16_t x214 = 0U;
	volatile uint32_t x215 = 4382U;
	uint16_t x216 = 189U;
	static volatile int32_t t53 = 9;

    t53 = (x213<=(x214<=(x215>x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MAX;
	volatile uint16_t x218 = 2U;
	int64_t x219 = INT64_MIN;
	volatile int32_t t54 = 193096;

    t54 = (x217<=(x218<=(x219>x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 15888107563LLU;
	int16_t x223 = -1;
	int16_t x224 = 108;
	int32_t t55 = -1432;

    t55 = (x221<=(x222<=(x223>x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    

    t56 = (x225<=(x226<=(x227>x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x229 = 0U;
	int32_t x231 = -1984;
	static uint32_t x232 = 1893666516U;

    t57 = (x229<=(x230<=(x231>x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x233 = UINT64_MAX;
	int16_t x234 = -1;
	int8_t x235 = INT8_MIN;
	static volatile int32_t t58 = 109770;

    t58 = (x233<=(x234<=(x235>x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x237 = INT8_MIN;
	int32_t x238 = INT32_MIN;

    t59 = (x237<=(x238<=(x239>x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MAX;
	static volatile int32_t x242 = INT32_MAX;
	volatile int16_t x244 = INT16_MAX;
	static volatile int32_t t60 = 1;

    t60 = (x241<=(x242<=(x243>x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -12217LL;
	int16_t x247 = -1;
	volatile uint32_t x248 = 1907737U;

    t61 = (x245<=(x246<=(x247>x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MAX;
	int16_t x251 = INT16_MAX;
	uint32_t x252 = 2015U;
	int32_t t62 = 120338;

    t62 = (x249<=(x250<=(x251>x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MAX;
	int64_t x254 = INT64_MIN;
	uint64_t x255 = UINT64_MAX;
	int16_t x256 = -1;
	volatile int32_t t63 = -757;

    t63 = (x253<=(x254<=(x255>x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x258 = 0U;
	int32_t x260 = -69687148;
	int32_t t64 = 2;

    t64 = (x257<=(x258<=(x259>x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x262 = INT32_MIN;
	int8_t x264 = INT8_MIN;
	volatile int32_t t65 = -55367205;

    t65 = (x261<=(x262<=(x263>x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x266 = INT16_MAX;
	int8_t x268 = INT8_MIN;

    t66 = (x265<=(x266<=(x267>x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = UINT64_MAX;
	int8_t x270 = INT8_MIN;
	static int16_t x271 = INT16_MAX;
	static int8_t x272 = -1;

    t67 = (x269<=(x270<=(x271>x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	static volatile uint32_t x274 = 602380U;
	int8_t x275 = 0;
	volatile int32_t x276 = 134302661;

    t68 = (x273<=(x274<=(x275>x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	int32_t x278 = INT32_MIN;
	uint16_t x279 = 9366U;
	int8_t x280 = INT8_MIN;

    t69 = (x277<=(x278<=(x279>x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -70;
	static int32_t x283 = INT32_MIN;
	int32_t t70 = 1;

    t70 = (x281<=(x282<=(x283>x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -4041;
	int32_t x287 = 864;
	int32_t x288 = 6995168;
	int32_t t71 = 104346;

    t71 = (x285<=(x286<=(x287>x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 210843322U;
	int8_t x291 = INT8_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = 519549893;

    t72 = (x289<=(x290<=(x291>x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x293 = INT64_MIN;
	static int32_t x294 = INT32_MIN;
	int32_t x295 = -1;
	int32_t x296 = INT32_MAX;
	volatile int32_t t73 = 51641;

    t73 = (x293<=(x294<=(x295>x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	uint64_t x299 = 7LLU;
	int64_t x300 = 2419449608325LL;
	static volatile int32_t t74 = -63;

    t74 = (x297<=(x298<=(x299>x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -1;
	int64_t x302 = -1002713058LL;
	int64_t x303 = -6377989085LL;

    t75 = (x301<=(x302<=(x303>x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x306 = INT32_MAX;
	volatile int64_t x308 = INT64_MIN;
	volatile int32_t t76 = 54557214;

    t76 = (x305<=(x306<=(x307>x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = UINT64_MAX;
	static volatile uint8_t x310 = UINT8_MAX;
	static volatile uint32_t x311 = UINT32_MAX;
	volatile int32_t t77 = 52630393;

    t77 = (x309<=(x310<=(x311>x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x313 = INT8_MIN;
	int64_t x316 = INT64_MIN;
	int32_t t78 = -120865;

    t78 = (x313<=(x314<=(x315>x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x319 = -1;
	uint16_t x320 = 280U;
	static int32_t t79 = -3091;

    t79 = (x317<=(x318<=(x319>x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -1;
	uint16_t x322 = UINT16_MAX;
	volatile uint32_t x324 = 507U;
	volatile int32_t t80 = -1484867;

    t80 = (x321<=(x322<=(x323>x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x325 = -1;
	static int16_t x326 = 362;
	int64_t x328 = -1LL;
	static volatile int32_t t81 = -112889851;

    t81 = (x325<=(x326<=(x327>x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MAX;
	uint16_t x330 = UINT16_MAX;
	volatile int32_t x331 = INT32_MAX;
	volatile uint64_t x332 = 1004263473417822LLU;

    t82 = (x329<=(x330<=(x331>x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x334 = INT64_MIN;
	volatile int16_t x335 = INT16_MIN;
	int8_t x336 = -21;
	static int32_t t83 = 24885;

    t83 = (x333<=(x334<=(x335>x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x337 = 2770U;
	int64_t x338 = INT64_MIN;
	static int64_t x340 = INT64_MAX;
	int32_t t84 = -329303;

    t84 = (x337<=(x338<=(x339>x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MAX;
	int16_t x342 = -1;
	int16_t x343 = -1;
	static int64_t x344 = INT64_MIN;
	volatile int32_t t85 = 105639;

    t85 = (x341<=(x342<=(x343>x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MIN;
	volatile uint64_t x346 = 14993061373185LLU;
	int8_t x347 = INT8_MIN;
	int16_t x348 = 6304;
	int32_t t86 = -240810;

    t86 = (x345<=(x346<=(x347>x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x349 = INT64_MIN;
	static volatile int16_t x350 = INT16_MIN;
	static int8_t x351 = INT8_MAX;
	int64_t x352 = -11784LL;

    t87 = (x349<=(x350<=(x351>x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x354 = 593877U;
	int8_t x355 = INT8_MAX;
	int32_t x356 = INT32_MAX;
	volatile int32_t t88 = -141898637;

    t88 = (x353<=(x354<=(x355>x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 714LLU;
	volatile int8_t x358 = INT8_MAX;
	static int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MIN;
	static volatile int32_t t89 = -19075;

    t89 = (x357<=(x358<=(x359>x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	uint64_t x362 = 47LLU;
	uint64_t x363 = 435266LLU;
	int8_t x364 = INT8_MAX;
	int32_t t90 = -33850863;

    t90 = (x361<=(x362<=(x363>x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = UINT8_MAX;
	volatile uint8_t x366 = UINT8_MAX;
	int64_t x367 = INT64_MIN;
	int64_t x368 = INT64_MAX;
	volatile int32_t t91 = 126760;

    t91 = (x365<=(x366<=(x367>x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x369 = 635832LL;
	int16_t x370 = 16003;

    t92 = (x369<=(x370<=(x371>x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -1;
	static uint64_t x374 = 2758671754724LLU;
	volatile int16_t x375 = INT16_MIN;
	static volatile int16_t x376 = INT16_MIN;
	volatile int32_t t93 = 3;

    t93 = (x373<=(x374<=(x375>x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x378 = 0;
	uint64_t x379 = UINT64_MAX;
	int32_t t94 = -3053;

    t94 = (x377<=(x378<=(x379>x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x382 = 2U;
	uint8_t x383 = 0U;
	uint8_t x384 = 7U;
	int32_t t95 = -51;

    t95 = (x381<=(x382<=(x383>x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = -53;
	int16_t x386 = 95;
	int32_t x387 = INT32_MAX;
	static int64_t x388 = 77229000336LL;

    t96 = (x385<=(x386<=(x387>x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -1;
	int8_t x390 = INT8_MAX;
	volatile uint8_t x391 = UINT8_MAX;
	int64_t x392 = INT64_MAX;
	int32_t t97 = 0;

    t97 = (x389<=(x390<=(x391>x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = UINT32_MAX;
	static int64_t x394 = -1LL;
	uint64_t x395 = UINT64_MAX;
	int16_t x396 = -3;
	int32_t t98 = -16109077;

    t98 = (x393<=(x394<=(x395>x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x397 = -1;
	int32_t x398 = 139;
	volatile uint32_t x399 = 20346U;
	uint8_t x400 = UINT8_MAX;
	int32_t t99 = -984552036;

    t99 = (x397<=(x398<=(x399>x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x401 = 0;
	int16_t x402 = -1;
	int64_t x403 = INT64_MIN;
	int16_t x404 = INT16_MAX;
	static int32_t t100 = 546;

    t100 = (x401<=(x402<=(x403>x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = UINT16_MAX;
	int8_t x406 = -2;
	static uint64_t x407 = 6LLU;
	static int32_t x408 = -1;
	int32_t t101 = 0;

    t101 = (x405<=(x406<=(x407>x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	int64_t x410 = -1LL;
	int16_t x411 = INT16_MIN;
	volatile uint8_t x412 = 27U;

    t102 = (x409<=(x410<=(x411>x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x415 = INT16_MAX;
	uint32_t x416 = UINT32_MAX;
	volatile int32_t t103 = -2878;

    t103 = (x413<=(x414<=(x415>x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x418 = 332470958;
	uint16_t x419 = 134U;
	static int8_t x420 = -1;
	volatile int32_t t104 = 577;

    t104 = (x417<=(x418<=(x419>x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x421 = 3U;
	int32_t x422 = INT32_MAX;
	int64_t x423 = 13308LL;
	int32_t x424 = INT32_MIN;

    t105 = (x421<=(x422<=(x423>x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MAX;
	int64_t x426 = -1LL;
	uint8_t x427 = 30U;
	int8_t x428 = INT8_MIN;
	volatile int32_t t106 = -414;

    t106 = (x425<=(x426<=(x427>x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x430 = 1;
	volatile uint8_t x431 = 2U;
	int64_t x432 = INT64_MIN;
	static volatile int32_t t107 = -36714;

    t107 = (x429<=(x430<=(x431>x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 16U;
	static uint64_t x434 = 1047178880LLU;
	int16_t x435 = 13519;
	static int16_t x436 = INT16_MIN;
	int32_t t108 = 225511927;

    t108 = (x433<=(x434<=(x435>x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = 518196;
	static volatile int32_t x439 = -2;
	int32_t t109 = 12250351;

    t109 = (x437<=(x438<=(x439>x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int16_t x442 = 7451;
	volatile uint64_t x443 = UINT64_MAX;
	static int64_t x444 = INT64_MIN;
	volatile int32_t t110 = -2;

    t110 = (x441<=(x442<=(x443>x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x445 = 3U;
	uint16_t x446 = UINT16_MAX;
	static volatile int64_t x447 = 168364389854514LL;
	static uint16_t x448 = 43U;
	volatile int32_t t111 = -465152;

    t111 = (x445<=(x446<=(x447>x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = 6150;
	static int8_t x450 = 1;
	uint16_t x452 = UINT16_MAX;
	volatile int32_t t112 = 977837907;

    t112 = (x449<=(x450<=(x451>x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MAX;
	int32_t x455 = -1;
	uint16_t x456 = 28211U;

    t113 = (x453<=(x454<=(x455>x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t t114 = -30;

    t114 = (x457<=(x458<=(x459>x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	int8_t x462 = 35;
	int64_t x464 = INT64_MIN;
	static int32_t t115 = -19568;

    t115 = (x461<=(x462<=(x463>x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = UINT16_MAX;
	static int32_t x467 = INT32_MIN;
	uint16_t x468 = 228U;
	static int32_t t116 = 30552;

    t116 = (x465<=(x466<=(x467>x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x469 = 260U;
	int64_t x470 = INT64_MIN;
	static uint32_t x471 = UINT32_MAX;
	static int16_t x472 = INT16_MAX;
	static volatile int32_t t117 = -1;

    t117 = (x469<=(x470<=(x471>x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MIN;
	int32_t x474 = INT32_MAX;
	int8_t x475 = -4;
	int64_t x476 = INT64_MIN;
	int32_t t118 = 19;

    t118 = (x473<=(x474<=(x475>x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = -1;
	volatile int8_t x478 = INT8_MIN;
	int16_t x479 = 251;
	volatile int32_t t119 = 0;

    t119 = (x477<=(x478<=(x479>x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = UINT8_MAX;
	int64_t x482 = INT64_MIN;
	int64_t x483 = INT64_MAX;
	volatile int32_t x484 = INT32_MIN;
	int32_t t120 = -4381982;

    t120 = (x481<=(x482<=(x483>x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = 482U;
	volatile int8_t x486 = 0;
	int16_t x487 = INT16_MAX;
	static int32_t t121 = -5198;

    t121 = (x485<=(x486<=(x487>x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -1;
	int64_t x491 = INT64_MIN;
	volatile uint64_t x492 = 108LLU;
	static volatile int32_t t122 = -692434;

    t122 = (x489<=(x490<=(x491>x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 28U;
	uint16_t x495 = 111U;
	volatile int32_t t123 = -153;

    t123 = (x493<=(x494<=(x495>x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x497 = -1503473208LL;
	int64_t x498 = -943227569110893LL;
	uint16_t x499 = 0U;
	uint8_t x500 = 10U;
	int32_t t124 = -1;

    t124 = (x497<=(x498<=(x499>x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x501 = UINT64_MAX;
	uint32_t x502 = 1U;
	volatile int32_t x503 = 1;
	int32_t x504 = -1;
	volatile int32_t t125 = -3;

    t125 = (x501<=(x502<=(x503>x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x506 = INT32_MIN;
	uint32_t x508 = UINT32_MAX;

    t126 = (x505<=(x506<=(x507>x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -1;
	uint8_t x512 = 52U;
	int32_t t127 = 42510;

    t127 = (x509<=(x510<=(x511>x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = -8;
	uint16_t x514 = 23U;
	volatile int8_t x515 = -1;

    t128 = (x513<=(x514<=(x515>x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = -9749;
	uint16_t x518 = 464U;
	uint16_t x520 = 21460U;
	volatile int32_t t129 = -1317;

    t129 = (x517<=(x518<=(x519>x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x521 = 3U;
	static uint8_t x522 = 0U;
	static uint16_t x523 = UINT16_MAX;
	int32_t x524 = -7740;
	static int32_t t130 = -407;

    t130 = (x521<=(x522<=(x523>x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MAX;
	int64_t x526 = 199119950LL;
	uint32_t x527 = 387U;
	int8_t x528 = -4;
	volatile int32_t t131 = -112;

    t131 = (x525<=(x526<=(x527>x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x531 = 29785U;
	int32_t x532 = -1;
	static int32_t t132 = 6762707;

    t132 = (x529<=(x530<=(x531>x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MIN;
	uint16_t x534 = 844U;
	volatile int32_t x535 = 1230;
	volatile int32_t t133 = 13640;

    t133 = (x533<=(x534<=(x535>x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x538 = -34;
	static int8_t x539 = 13;
	int64_t x540 = INT64_MAX;
	int32_t t134 = 14;

    t134 = (x537<=(x538<=(x539>x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = INT64_MIN;
	volatile int32_t x542 = -1;
	static int16_t x543 = -1;
	uint32_t x544 = 4U;
	volatile int32_t t135 = -109;

    t135 = (x541<=(x542<=(x543>x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = UINT64_MAX;
	int64_t x546 = INT64_MIN;
	uint64_t x547 = 36148034077750LLU;
	uint32_t x548 = 1U;
	volatile int32_t t136 = 28;

    t136 = (x545<=(x546<=(x547>x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	uint64_t x550 = 5LLU;
	static int64_t x552 = INT64_MIN;
	volatile int32_t t137 = 13070135;

    t137 = (x549<=(x550<=(x551>x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x556 = INT64_MIN;
	int32_t t138 = -14996;

    t138 = (x553<=(x554<=(x555>x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	uint64_t x558 = 1268LLU;
	int8_t x559 = -1;
	uint8_t x560 = 1U;
	int32_t t139 = -1;

    t139 = (x557<=(x558<=(x559>x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x561 = -8;
	uint16_t x562 = UINT16_MAX;
	static int32_t t140 = -26837;

    t140 = (x561<=(x562<=(x563>x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = -22;
	int8_t x567 = INT8_MAX;
	static int32_t x568 = -1;

    t141 = (x565<=(x566<=(x567>x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x569 = 401835395369521LLU;
	int8_t x570 = 0;
	volatile uint8_t x571 = 9U;
	uint32_t x572 = UINT32_MAX;

    t142 = (x569<=(x570<=(x571>x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	int64_t x574 = INT64_MIN;
	static int8_t x575 = INT8_MAX;
	int64_t x576 = INT64_MAX;

    t143 = (x573<=(x574<=(x575>x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x577 = INT64_MIN;
	static int8_t x578 = INT8_MIN;
	int64_t x580 = INT64_MIN;
	int32_t t144 = -66;

    t144 = (x577<=(x578<=(x579>x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x582 = INT8_MIN;
	uint64_t x583 = 5354LLU;
	static uint64_t x584 = 28399812749LLU;
	static volatile int32_t t145 = -21;

    t145 = (x581<=(x582<=(x583>x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x585 = INT8_MIN;
	volatile int8_t x586 = -3;
	int16_t x587 = 587;
	volatile int32_t t146 = -50077;

    t146 = (x585<=(x586<=(x587>x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x589 = INT8_MIN;
	volatile int64_t x590 = INT64_MIN;
	static volatile uint8_t x591 = 55U;
	int32_t x592 = 1;
	int32_t t147 = -8701;

    t147 = (x589<=(x590<=(x591>x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = 1000651617;
	int8_t x594 = INT8_MAX;
	int64_t x595 = INT64_MAX;
	static int64_t x596 = INT64_MAX;
	volatile int32_t t148 = -7722686;

    t148 = (x593<=(x594<=(x595>x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -498913;
	int64_t x598 = INT64_MIN;
	static int8_t x599 = INT8_MIN;
	uint32_t x600 = UINT32_MAX;

    t149 = (x597<=(x598<=(x599>x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 8993U;
	static volatile int16_t x602 = INT16_MAX;
	int64_t x603 = INT64_MIN;
	uint8_t x604 = 1U;

    t150 = (x601<=(x602<=(x603>x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	uint64_t x607 = 1641068441510161LLU;
	volatile int8_t x608 = INT8_MIN;
	volatile int32_t t151 = 1;

    t151 = (x605<=(x606<=(x607>x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x609 = -317365176LL;
	int64_t x610 = -1LL;
	int8_t x611 = INT8_MAX;
	uint64_t x612 = UINT64_MAX;
	volatile int32_t t152 = 10182913;

    t152 = (x609<=(x610<=(x611>x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	int32_t x614 = INT32_MIN;
	int64_t x615 = INT64_MIN;
	int32_t t153 = 530134654;

    t153 = (x613<=(x614<=(x615>x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x618 = INT64_MIN;
	volatile int8_t x619 = INT8_MIN;
	volatile int32_t t154 = -3087;

    t154 = (x617<=(x618<=(x619>x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = INT16_MAX;
	volatile int32_t x622 = -1;
	uint8_t x623 = 53U;
	int16_t x624 = 53;
	volatile int32_t t155 = 13205;

    t155 = (x621<=(x622<=(x623>x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MAX;
	volatile int16_t x627 = INT16_MIN;
	static uint32_t x628 = UINT32_MAX;
	static volatile int32_t t156 = -55109216;

    t156 = (x625<=(x626<=(x627>x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MIN;
	int64_t x630 = INT64_MAX;
	int64_t x631 = INT64_MIN;
	int32_t x632 = INT32_MIN;
	volatile int32_t t157 = -1859;

    t157 = (x629<=(x630<=(x631>x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	int8_t x634 = -1;
	static int16_t x635 = -1;
	int32_t x636 = 4733;
	int32_t t158 = -158475887;

    t158 = (x633<=(x634<=(x635>x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x638 = 241LLU;
	int16_t x640 = 44;
	volatile int32_t t159 = 546;

    t159 = (x637<=(x638<=(x639>x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MIN;
	volatile int64_t x642 = INT64_MIN;
	int16_t x643 = 10;
	int8_t x644 = -1;
	int32_t t160 = 5;

    t160 = (x641<=(x642<=(x643>x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x645 = INT32_MIN;
	uint32_t x646 = 6016U;
	volatile int16_t x647 = -2;
	uint16_t x648 = 5U;
	volatile int32_t t161 = 15908558;

    t161 = (x645<=(x646<=(x647>x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 3U;
	static volatile int64_t x650 = INT64_MIN;
	int64_t x651 = INT64_MIN;
	volatile int64_t x652 = INT64_MAX;
	static int32_t t162 = 6;

    t162 = (x649<=(x650<=(x651>x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x653 = 251U;
	int8_t x654 = 0;
	static volatile int32_t x655 = -1;
	volatile int8_t x656 = INT8_MAX;
	static volatile int32_t t163 = -1;

    t163 = (x653<=(x654<=(x655>x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = 1;
	volatile uint16_t x658 = 5U;
	volatile uint64_t x659 = 1073002873794LLU;
	int32_t t164 = -50738;

    t164 = (x657<=(x658<=(x659>x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x664 = 128998005213952115LL;
	volatile int32_t t165 = 2670;

    t165 = (x661<=(x662<=(x663>x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x666 = INT64_MIN;
	uint64_t x667 = 4116581588844468LLU;
	static volatile int32_t x668 = INT32_MIN;
	volatile int32_t t166 = 7;

    t166 = (x665<=(x666<=(x667>x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = -6;
	int64_t x670 = INT64_MAX;
	static int64_t x671 = 85299302398775514LL;
	uint32_t x672 = 199248920U;
	static volatile int32_t t167 = -6975621;

    t167 = (x669<=(x670<=(x671>x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x673 = INT16_MIN;
	int64_t x674 = INT64_MIN;
	int16_t x675 = -1;
	volatile int32_t t168 = -10813;

    t168 = (x673<=(x674<=(x675>x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x678 = 3U;
	static int32_t x679 = 0;
	volatile int32_t t169 = -115196460;

    t169 = (x677<=(x678<=(x679>x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = -94666;
	volatile uint32_t x683 = UINT32_MAX;
	uint32_t x684 = UINT32_MAX;

    t170 = (x681<=(x682<=(x683>x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = INT8_MIN;
	static uint32_t x686 = 670U;
	static int64_t x687 = -1LL;
	static int8_t x688 = -13;
	static volatile int32_t t171 = -95;

    t171 = (x685<=(x686<=(x687>x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = UINT16_MAX;
	int8_t x691 = INT8_MAX;
	uint16_t x692 = 4657U;
	volatile int32_t t172 = 686559119;

    t172 = (x689<=(x690<=(x691>x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x694 = 2551848;
	static int64_t x695 = INT64_MIN;
	int8_t x696 = 19;
	static int32_t t173 = 20394;

    t173 = (x693<=(x694<=(x695>x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = 207U;
	static int8_t x698 = -1;
	int64_t x699 = -1LL;
	uint8_t x700 = UINT8_MAX;
	int32_t t174 = -7584;

    t174 = (x697<=(x698<=(x699>x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	static volatile int32_t x703 = INT32_MIN;
	volatile uint64_t x704 = UINT64_MAX;
	int32_t t175 = 1133609;

    t175 = (x701<=(x702<=(x703>x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x705 = 3U;
	static uint16_t x706 = 1U;
	int8_t x707 = -1;
	int32_t t176 = 0;

    t176 = (x705<=(x706<=(x707>x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = 1297102959744488586LL;
	uint64_t x710 = 16323623824433LLU;
	uint64_t x712 = UINT64_MAX;
	static volatile int32_t t177 = 1067908432;

    t177 = (x709<=(x710<=(x711>x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x713 = INT32_MIN;
	uint16_t x715 = 423U;

    t178 = (x713<=(x714<=(x715>x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x717 = 3593938388972845LL;
	static int8_t x718 = -23;
	int64_t x720 = INT64_MIN;
	volatile int32_t t179 = 6;

    t179 = (x717<=(x718<=(x719>x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 73880LLU;
	uint64_t x722 = 117487LLU;
	volatile int16_t x723 = INT16_MIN;
	uint16_t x724 = 2869U;
	volatile int32_t t180 = -115;

    t180 = (x721<=(x722<=(x723>x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = 1140U;
	int32_t x726 = INT32_MAX;
	int8_t x727 = INT8_MIN;
	uint32_t x728 = 90U;
	int32_t t181 = -30880662;

    t181 = (x725<=(x726<=(x727>x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	uint32_t x732 = UINT32_MAX;
	volatile int32_t t182 = 96344;

    t182 = (x729<=(x730<=(x731>x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int64_t x734 = -1LL;
	volatile uint16_t x735 = 2012U;
	volatile int32_t t183 = 273;

    t183 = (x733<=(x734<=(x735>x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x738 = -1LL;
	volatile uint64_t x739 = 2LLU;
	static int32_t x740 = INT32_MAX;
	int32_t t184 = 110045;

    t184 = (x737<=(x738<=(x739>x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = 2794LLU;
	int16_t x742 = INT16_MIN;
	int32_t x743 = INT32_MIN;
	static int16_t x744 = INT16_MIN;
	int32_t t185 = 25;

    t185 = (x741<=(x742<=(x743>x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x745 = INT8_MIN;
	int16_t x746 = INT16_MAX;
	int32_t x748 = -1;

    t186 = (x745<=(x746<=(x747>x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 58U;
	int32_t t187 = -81139;

    t187 = (x749<=(x750<=(x751>x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = INT16_MAX;
	static int64_t x755 = INT64_MIN;
	int16_t x756 = 335;

    t188 = (x753<=(x754<=(x755>x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = -6498;
	int32_t x759 = -76615228;
	volatile uint32_t x760 = 181U;
	volatile int32_t t189 = -25;

    t189 = (x757<=(x758<=(x759>x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 1136U;
	static volatile int16_t x762 = INT16_MIN;
	int16_t x763 = INT16_MIN;
	uint32_t x764 = 465060237U;
	int32_t t190 = -53;

    t190 = (x761<=(x762<=(x763>x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MAX;
	int32_t x766 = -1;
	static uint16_t x767 = 3U;
	int64_t x768 = INT64_MIN;

    t191 = (x765<=(x766<=(x767>x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x769 = UINT64_MAX;
	static volatile uint8_t x770 = UINT8_MAX;
	uint16_t x771 = 15561U;

    t192 = (x769<=(x770<=(x771>x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x773 = -1;
	volatile uint32_t x774 = UINT32_MAX;
	static int32_t x775 = 1367502;
	int32_t x776 = INT32_MAX;
	int32_t t193 = 13;

    t193 = (x773<=(x774<=(x775>x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x778 = 9U;
	uint8_t x779 = UINT8_MAX;
	int8_t x780 = -1;
	volatile int32_t t194 = 1;

    t194 = (x777<=(x778<=(x779>x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x781 = 1;
	int16_t x783 = -395;
	uint16_t x784 = 106U;

    t195 = (x781<=(x782<=(x783>x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x786 = INT16_MAX;
	static int8_t x787 = -10;
	static int32_t x788 = -1;

    t196 = (x785<=(x786<=(x787>x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	uint16_t x790 = UINT16_MAX;
	int64_t x791 = 561049185687076LL;
	int64_t x792 = INT64_MAX;
	int32_t t197 = 451;

    t197 = (x789<=(x790<=(x791>x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	volatile uint32_t x794 = 164U;
	static int32_t x795 = -1;
	static int8_t x796 = INT8_MIN;
	int32_t t198 = -740996;

    t198 = (x793<=(x794<=(x795>x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x799 = INT16_MIN;
	static int32_t x800 = INT32_MIN;

    t199 = (x797<=(x798<=(x799>x800)));

    if (t199 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

