
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

static int8_t x1 = INT8_MIN;
int32_t t0 = 214651;
volatile int8_t x10 = 15;
int32_t x16 = -48289;
static uint32_t t3 = 72399582U;
uint16_t x23 = 25U;
int32_t t5 = 16105;
int8_t x27 = INT8_MIN;
uint64_t x36 = UINT64_MAX;
int64_t x40 = -1LL;
static int64_t t12 = -195236393913LL;
int64_t x54 = -55553LL;
int64_t x58 = -3133624662350LL;
static uint8_t x59 = 24U;
volatile uint64_t t15 = 5001185LLU;
int64_t x65 = INT64_MAX;
volatile uint64_t x71 = 11115466661522LLU;
volatile uint64_t t17 = 70940495865LLU;
int64_t x77 = INT64_MIN;
static int16_t x78 = INT16_MIN;
uint8_t x82 = 82U;
volatile int16_t x87 = INT16_MIN;
int8_t x91 = -1;
int32_t x95 = INT32_MIN;
volatile int32_t x100 = INT32_MIN;
volatile int32_t t24 = INT32_MIN;
int32_t x102 = 1188946;
volatile int64_t x104 = -1LL;
int8_t x106 = INT8_MIN;
uint64_t t26 = 46717276171303013LLU;
int8_t x110 = 6;
int64_t t27 = -95113999526276LL;
volatile int16_t x114 = INT16_MIN;
volatile int8_t x116 = INT8_MIN;
int8_t x120 = INT8_MIN;
static int8_t x141 = -1;
int64_t x143 = -1788LL;
static int32_t x149 = -154700;
volatile int16_t x160 = -15;
int64_t x162 = INT64_MIN;
static int8_t x167 = INT8_MIN;
uint64_t x171 = UINT64_MAX;
volatile uint64_t t40 = 3LLU;
static int8_t x188 = -3;
uint32_t x189 = UINT32_MAX;
int16_t x198 = 61;
static volatile int8_t x200 = INT8_MAX;
int8_t x205 = 0;
uint64_t x207 = 3383465059LLU;
volatile uint64_t x213 = 25LLU;
volatile uint64_t x216 = UINT64_MAX;
uint64_t t51 = 8480104561740917672LLU;
static volatile int32_t x218 = -2120780;
volatile int64_t t52 = 113LL;
uint16_t x223 = 10117U;
volatile int8_t x224 = -1;
static uint32_t x228 = UINT32_MAX;
static volatile uint64_t x237 = 47603LLU;
static volatile int16_t x255 = 1431;
volatile int32_t x265 = 465;
static int16_t x268 = INT16_MIN;
volatile int64_t x273 = INT64_MIN;
int32_t x274 = INT32_MAX;
volatile int32_t t63 = 13847398;
int16_t x277 = INT16_MIN;
int64_t x284 = INT64_MIN;
static int8_t x291 = INT8_MIN;
uint16_t x297 = UINT16_MAX;
volatile int16_t x303 = INT16_MIN;
static volatile int64_t x304 = INT64_MIN;
volatile int8_t x305 = -14;
static uint8_t x314 = 0U;
int8_t x316 = INT8_MIN;
int64_t x319 = INT64_MIN;
volatile uint64_t x325 = 17951LLU;
static int32_t x330 = INT32_MAX;
int64_t t77 = -16739388LL;
int64_t t78 = 30642034LL;
volatile int16_t x339 = INT16_MIN;
uint64_t x342 = 3332265150512008LLU;
volatile int32_t t80 = 31089796;
int8_t x354 = INT8_MAX;
int32_t x357 = INT32_MIN;
int16_t x366 = -1;
uint32_t t87 = 3036904U;
int8_t x376 = -1;
volatile int16_t x378 = INT16_MIN;
int16_t x384 = INT16_MAX;
int32_t t90 = 2049116;
int16_t x397 = -1;
int16_t x400 = INT16_MIN;
volatile uint32_t x402 = 3092657U;
int32_t x404 = -56245;
int16_t x409 = INT16_MIN;
volatile int64_t t101 = 1886680LL;
int16_t x431 = INT16_MIN;
int16_t x433 = INT16_MAX;
int8_t x434 = INT8_MIN;
volatile int64_t t103 = -247912297342LL;
int64_t x441 = INT64_MIN;
uint8_t x443 = 54U;
int32_t t105 = 312339298;
uint16_t x466 = 22U;
static uint16_t x481 = 201U;
static uint8_t x486 = 6U;
volatile int8_t x487 = -1;
int64_t x488 = INT64_MIN;
int16_t x490 = INT16_MAX;
volatile int32_t t117 = 79272;
uint32_t x498 = UINT32_MAX;
int32_t t118 = 2006587;
uint8_t x503 = 2U;
int8_t x506 = -1;
int16_t x513 = INT16_MIN;
int64_t x515 = -11790223247LL;
volatile uint64_t x520 = 5573083LLU;
int16_t x526 = -1;
int8_t x531 = 5;
uint32_t x533 = 605U;
int8_t x539 = INT8_MAX;
uint32_t x545 = 679U;
int8_t x549 = INT8_MIN;
int64_t x552 = INT64_MIN;
int64_t x555 = -1LL;
static int64_t t132 = -2LL;
static uint64_t t133 = 12565672543617LLU;
int8_t x563 = INT8_MIN;
volatile int8_t x564 = INT8_MIN;
volatile uint16_t x567 = 859U;
volatile int64_t t136 = 156LL;
int64_t x574 = -1LL;
int64_t x575 = INT64_MIN;
volatile int16_t x577 = -1;
int16_t x580 = -1;
uint64_t x584 = 8221869LLU;
int64_t x587 = -1129441LL;
volatile int32_t x588 = -1;
int16_t x589 = 20;
int32_t x598 = -1;
int32_t x600 = INT32_MIN;
int32_t t143 = 39493;
static int8_t x602 = INT8_MAX;
static uint32_t t145 = 2080442929U;
int16_t x610 = 145;
volatile int32_t t148 = 340101726;
int32_t x622 = INT32_MIN;
int16_t x624 = 1046;
volatile int16_t x627 = -1;
int32_t x633 = INT32_MIN;
static uint16_t x637 = 2U;
volatile int16_t x642 = 1;
static volatile int32_t t154 = 0;
static uint16_t x645 = UINT16_MAX;
uint64_t x647 = 1LLU;
int64_t x648 = -18695LL;
uint32_t x649 = 13U;
int8_t x651 = 0;
static volatile uint64_t t156 = 1495706969459LLU;
uint16_t x655 = 29U;
uint16_t x656 = 519U;
int64_t x663 = 530625577518LL;
volatile int64_t t159 = 672246361LL;
int32_t x668 = 10982959;
int64_t x670 = -38406LL;
static int32_t x674 = INT32_MIN;
volatile uint64_t t163 = 1358LLU;
int32_t x686 = 1;
volatile int32_t t167 = -5;
int64_t t168 = -15LL;
volatile uint64_t x710 = UINT64_MAX;
int8_t x716 = INT8_MIN;
int32_t t174 = -1376037;
int64_t x730 = INT64_MAX;
uint32_t x733 = 871U;
int8_t x737 = INT8_MAX;
uint64_t t179 = 24791930LLU;
static volatile int16_t x746 = 0;
volatile uint8_t x752 = 15U;
uint64_t x755 = UINT64_MAX;
int16_t x758 = INT16_MIN;
static int64_t x769 = INT64_MAX;
static int16_t x770 = -1;
int64_t x771 = INT64_MIN;
static uint16_t x772 = UINT16_MAX;
uint8_t x777 = UINT8_MAX;
uint64_t x778 = 42LLU;
static uint16_t x783 = 5U;
static int64_t x784 = 171375115LL;
int32_t x785 = INT32_MIN;
volatile uint64_t t190 = 158532LLU;
static int8_t x789 = -1;
volatile uint8_t x795 = 1U;
static int16_t x822 = -1;
volatile int32_t x823 = INT32_MIN;
int8_t x828 = INT8_MAX;
volatile int32_t t198 = 1023679;
int64_t x830 = INT64_MAX;


void f0(void) {
    	int64_t x2 = -38212LL;
	volatile int32_t x3 = INT32_MAX;
	static int16_t x4 = -5341;

    t0 = (((x1<=x2)+x3)&x4);

    if (t0 != 2147478307) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MIN;
	int64_t x6 = -1LL;
	static uint8_t x7 = UINT8_MAX;
	uint8_t x8 = UINT8_MAX;
	int32_t t1 = -980;

    t1 = (((x5<=x6)+x7)&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 5774669;
	int8_t x11 = -1;
	int32_t x12 = 1058;
	volatile int32_t t2 = 7;

    t2 = (((x9<=x10)+x11)&x12);

    if (t2 != 1058) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 2606236176LLU;
	uint32_t x14 = UINT32_MAX;
	static uint32_t x15 = 2124U;

    t3 = (((x13<=x14)+x15)&x16);

    if (t3 != 77U) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x17 = UINT16_MAX;
	int16_t x18 = INT16_MAX;
	int16_t x19 = INT16_MIN;
	static int16_t x20 = 17;
	int32_t t4 = 7107;

    t4 = (((x17<=x18)+x19)&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = -54;
	int32_t x22 = -1;
	uint16_t x24 = 6U;

    t5 = (((x21<=x22)+x23)&x24);

    if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	volatile int64_t x26 = INT64_MIN;
	uint8_t x28 = 1U;
	static volatile int32_t t6 = 1;

    t6 = (((x25<=x26)+x27)&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	volatile int16_t x30 = -1223;
	uint16_t x31 = UINT16_MAX;
	int16_t x32 = 1017;
	int32_t t7 = -2;

    t7 = (((x29<=x30)+x31)&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 38U;
	uint16_t x34 = UINT16_MAX;
	static volatile uint64_t x35 = 257258791788LLU;
	uint64_t t8 = 13LLU;

    t8 = (((x33<=x34)+x35)&x36);

    if (t8 != 257258791789LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MAX;
	static int32_t x38 = INT32_MIN;
	uint16_t x39 = 456U;
	int64_t t9 = 319288LL;

    t9 = (((x37<=x38)+x39)&x40);

    if (t9 != 456LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 163080566245975LLU;
	uint64_t x42 = 373902880277930LLU;
	int32_t x43 = 739912441;
	static volatile uint16_t x44 = UINT16_MAX;
	static volatile int32_t t10 = 5339;

    t10 = (((x41<=x42)+x43)&x44);

    if (t10 != 11002) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	static int64_t x46 = -113LL;
	static int16_t x47 = -1;
	int16_t x48 = 0;
	int32_t t11 = -326;

    t11 = (((x45<=x46)+x47)&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	uint16_t x50 = UINT16_MAX;
	static volatile int16_t x51 = -1;
	int64_t x52 = INT64_MIN;

    t12 = (((x49<=x50)+x51)&x52);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = -382755LL;
	int8_t x55 = INT8_MAX;
	uint16_t x56 = 1513U;
	static volatile int32_t t13 = -1;

    t13 = (((x53<=x54)+x55)&x56);

    if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 1U;
	uint8_t x60 = 0U;
	int32_t t14 = 490112267;

    t14 = (((x57<=x58)+x59)&x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 1U;
	int64_t x62 = 34304064088056LL;
	uint64_t x63 = 104811LLU;
	uint8_t x64 = UINT8_MAX;

    t15 = (((x61<=x62)+x63)&x64);

    if (t15 != 108LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x66 = UINT16_MAX;
	static int8_t x67 = -1;
	int16_t x68 = -31;
	int32_t t16 = 4150;

    t16 = (((x65<=x66)+x67)&x68);

    if (t16 != -31) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	volatile int8_t x70 = INT8_MAX;
	int32_t x72 = 914792324;

    t17 = (((x69<=x70)+x71)&x72);

    if (t17 != 67116672LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = INT8_MIN;
	volatile int32_t x74 = 40794;
	int8_t x75 = -1;
	int8_t x76 = INT8_MIN;
	static int32_t t18 = -2;

    t18 = (((x73<=x74)+x75)&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x79 = -1LL;
	volatile int32_t x80 = INT32_MAX;
	int64_t t19 = 206840LL;

    t19 = (((x77<=x78)+x79)&x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	int8_t x83 = -1;
	uint32_t x84 = 7U;
	uint32_t t20 = 35683U;

    t20 = (((x81<=x82)+x83)&x84);

    if (t20 != 7U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -1;
	uint16_t x86 = 71U;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = -1263451;

    t21 = (((x85<=x86)+x87)&x88);

    if (t21 != 32769) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = -1;
	uint16_t x90 = 10950U;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = 3;

    t22 = (((x89<=x90)+x91)&x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MIN;
	uint32_t x96 = UINT32_MAX;
	volatile uint32_t t23 = 688923U;

    t23 = (((x93<=x94)+x95)&x96);

    if (t23 != 2147483649U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 17215663859LLU;
	volatile int16_t x98 = -5680;
	int32_t x99 = INT32_MIN;

    t24 = (((x97<=x98)+x99)&x100);

    if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = INT32_MAX;
	volatile uint16_t x103 = 1U;
	int64_t t25 = -2LL;

    t25 = (((x101<=x102)+x103)&x104);

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	int64_t x107 = -214008040LL;
	volatile uint64_t x108 = 191LLU;

    t26 = (((x105<=x106)+x107)&x108);

    if (t26 != 25LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x109 = -1;
	int64_t x111 = 20376LL;
	int64_t x112 = INT64_MIN;

    t27 = (((x109<=x110)+x111)&x112);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	int32_t x115 = INT32_MAX;
	volatile int32_t t28 = 7;

    t28 = (((x113<=x114)+x115)&x116);

    if (t28 != 2147483520) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x117 = -1;
	int32_t x118 = INT32_MIN;
	int32_t x119 = -1;
	int32_t t29 = 79547949;

    t29 = (((x117<=x118)+x119)&x120);

    if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -58532;
	volatile int16_t x122 = INT16_MAX;
	volatile int8_t x123 = INT8_MIN;
	uint64_t x124 = 2550372392790562LLU;
	volatile uint64_t t30 = 49364071559975LLU;

    t30 = (((x121<=x122)+x123)&x124);

    if (t30 != 2550372392790528LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -1;
	int8_t x126 = INT8_MIN;
	int32_t x127 = -1;
	static volatile uint32_t x128 = 115U;
	uint32_t t31 = 17579U;

    t31 = (((x125<=x126)+x127)&x128);

    if (t31 != 115U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 213520217U;
	static int32_t x130 = INT32_MIN;
	int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MIN;
	static int64_t t32 = INT64_MIN;

    t32 = (((x129<=x130)+x131)&x132);

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 859U;
	int8_t x134 = 1;
	static uint32_t x135 = 7U;
	volatile uint32_t x136 = UINT32_MAX;
	volatile uint32_t t33 = 51638U;

    t33 = (((x133<=x134)+x135)&x136);

    if (t33 != 7U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x142 = 49804LLU;
	volatile int8_t x144 = 35;
	volatile int64_t t34 = -1967583033011LL;

    t34 = (((x141<=x142)+x143)&x144);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x150 = INT64_MIN;
	static uint64_t x151 = UINT64_MAX;
	int32_t x152 = 3698;
	volatile uint64_t t35 = 26LLU;

    t35 = (((x149<=x150)+x151)&x152);

    if (t35 != 3698LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x153 = UINT32_MAX;
	uint8_t x154 = 24U;
	volatile int16_t x155 = INT16_MAX;
	uint16_t x156 = 32U;
	volatile int32_t t36 = -351;

    t36 = (((x153<=x154)+x155)&x156);

    if (t36 != 32) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x157 = INT16_MIN;
	static uint8_t x158 = UINT8_MAX;
	int32_t x159 = -1;
	volatile int32_t t37 = 30056007;

    t37 = (((x157<=x158)+x159)&x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x161 = 165U;
	uint32_t x163 = 37492333U;
	int8_t x164 = -6;
	volatile uint32_t t38 = 2U;

    t38 = (((x161<=x162)+x163)&x164);

    if (t38 != 37492328U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x165 = -1;
	volatile uint8_t x166 = 14U;
	static volatile int32_t x168 = INT32_MIN;
	int32_t t39 = INT32_MIN;

    t39 = (((x165<=x166)+x167)&x168);

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = 553415259205LL;
	int32_t x170 = INT32_MIN;
	volatile uint32_t x172 = 13993U;

    t40 = (((x169<=x170)+x171)&x172);

    if (t40 != 13993LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x173 = INT16_MAX;
	int8_t x174 = INT8_MIN;
	int8_t x175 = INT8_MIN;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t41 = 261268783542LLU;

    t41 = (((x173<=x174)+x175)&x176);

    if (t41 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x177 = 388849785339LLU;
	int16_t x178 = -3;
	int16_t x179 = INT16_MIN;
	uint16_t x180 = 362U;
	int32_t t42 = 5815;

    t42 = (((x177<=x178)+x179)&x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x181 = -1LL;
	static int32_t x182 = INT32_MIN;
	uint16_t x183 = 423U;
	int32_t x184 = -1;
	static volatile int32_t t43 = 5;

    t43 = (((x181<=x182)+x183)&x184);

    if (t43 != 423) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x185 = 14;
	uint16_t x186 = 6852U;
	int16_t x187 = 2099;
	volatile int32_t t44 = -3979617;

    t44 = (((x185<=x186)+x187)&x188);

    if (t44 != 2100) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x190 = 7U;
	static int8_t x191 = INT8_MIN;
	volatile int64_t x192 = -1LL;
	volatile int64_t t45 = 4433618064533598LL;

    t45 = (((x189<=x190)+x191)&x192);

    if (t45 != -128LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x193 = INT64_MAX;
	int64_t x194 = INT64_MAX;
	int8_t x195 = INT8_MIN;
	int32_t x196 = 12281004;
	int32_t t46 = 349307;

    t46 = (((x193<=x194)+x195)&x196);

    if (t46 != 12280960) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = INT8_MAX;
	int64_t x199 = 26689691371751LL;
	int64_t t47 = -633LL;

    t47 = (((x197<=x198)+x199)&x200);

    if (t47 != 103LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x201 = 1118476142228LLU;
	int8_t x202 = -1;
	static int8_t x203 = 5;
	volatile int8_t x204 = -1;
	int32_t t48 = 1906178;

    t48 = (((x201<=x202)+x203)&x204);

    if (t48 != 6) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x206 = -1LL;
	int32_t x208 = INT32_MIN;
	uint64_t t49 = 18570LLU;

    t49 = (((x205<=x206)+x207)&x208);

    if (t49 != 2147483648LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x209 = -4;
	int64_t x210 = -1LL;
	int16_t x211 = INT16_MAX;
	uint32_t x212 = 46125687U;
	static volatile uint32_t t50 = 1986979U;

    t50 = (((x209<=x210)+x211)&x212);

    if (t50 != 32768U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x214 = 8658150035589591LLU;
	static volatile int8_t x215 = INT8_MIN;

    t51 = (((x213<=x214)+x215)&x216);

    if (t51 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x217 = 15125937U;
	int32_t x219 = 199596;
	volatile int64_t x220 = 14959LL;

    t52 = (((x217<=x218)+x219)&x220);

    if (t52 != 2605LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x221 = 23U;
	int16_t x222 = -1;
	volatile int32_t t53 = 18;

    t53 = (((x221<=x222)+x223)&x224);

    if (t53 != 10117) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x225 = 59129LLU;
	int16_t x226 = INT16_MAX;
	uint64_t x227 = 1763368256033LLU;
	volatile uint64_t t54 = 54323253889493807LLU;

    t54 = (((x225<=x226)+x227)&x228);

    if (t54 != 2431664673LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MIN;
	int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MIN;
	volatile int32_t t55 = -50;

    t55 = (((x233<=x234)+x235)&x236);

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x238 = -1LL;
	uint16_t x239 = 2155U;
	int16_t x240 = 13;
	int32_t t56 = 2;

    t56 = (((x237<=x238)+x239)&x240);

    if (t56 != 12) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x241 = 58U;
	int32_t x242 = INT32_MAX;
	volatile int8_t x243 = -1;
	int64_t x244 = INT64_MIN;
	int64_t t57 = -80803LL;

    t57 = (((x241<=x242)+x243)&x244);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x245 = INT32_MAX;
	int8_t x246 = -54;
	volatile int32_t x247 = INT32_MAX;
	int32_t x248 = -44;
	static volatile int32_t t58 = -3101959;

    t58 = (((x245<=x246)+x247)&x248);

    if (t58 != 2147483604) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x249 = -724965;
	int64_t x250 = -1701LL;
	int8_t x251 = INT8_MIN;
	uint64_t x252 = UINT64_MAX;
	static uint64_t t59 = 728217299206988LLU;

    t59 = (((x249<=x250)+x251)&x252);

    if (t59 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int32_t x253 = INT32_MIN;
	int32_t x254 = -1;
	volatile int16_t x256 = INT16_MIN;
	volatile int32_t t60 = 5371465;

    t60 = (((x253<=x254)+x255)&x256);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x257 = INT16_MIN;
	int32_t x258 = INT32_MIN;
	volatile uint64_t x259 = 73018LLU;
	volatile int16_t x260 = -1;
	volatile uint64_t t61 = 32066877431448LLU;

    t61 = (((x257<=x258)+x259)&x260);

    if (t61 != 73018LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint16_t x266 = 186U;
	int16_t x267 = INT16_MAX;
	volatile int32_t t62 = 4;

    t62 = (((x265<=x266)+x267)&x268);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x275 = 702U;
	int8_t x276 = 2;

    t63 = (((x273<=x274)+x275)&x276);

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x278 = UINT64_MAX;
	uint16_t x279 = UINT16_MAX;
	int8_t x280 = INT8_MIN;
	static int32_t t64 = 394507914;

    t64 = (((x277<=x278)+x279)&x280);

    if (t64 != 65536) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x281 = INT32_MAX;
	int64_t x282 = -1LL;
	int32_t x283 = -1;
	volatile int64_t t65 = INT64_MIN;

    t65 = (((x281<=x282)+x283)&x284);

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x285 = INT32_MAX;
	int16_t x286 = INT16_MIN;
	volatile uint32_t x287 = UINT32_MAX;
	int16_t x288 = -307;
	volatile uint32_t t66 = 332818976U;

    t66 = (((x285<=x286)+x287)&x288);

    if (t66 != 4294966989U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x289 = INT64_MIN;
	uint32_t x290 = UINT32_MAX;
	int16_t x292 = -1574;
	static volatile int32_t t67 = 1;

    t67 = (((x289<=x290)+x291)&x292);

    if (t67 != -1664) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x293 = -1;
	volatile int64_t x294 = -3LL;
	volatile int8_t x295 = INT8_MIN;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t68 = -182627;

    t68 = (((x293<=x294)+x295)&x296);

    if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x298 = -1;
	static int64_t x299 = INT64_MAX;
	int64_t x300 = INT64_MAX;
	int64_t t69 = INT64_MAX;

    t69 = (((x297<=x298)+x299)&x300);

    if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x301 = 3LLU;
	int16_t x302 = -1;
	int64_t t70 = INT64_MIN;

    t70 = (((x301<=x302)+x303)&x304);

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x306 = 51U;
	int8_t x307 = INT8_MAX;
	uint16_t x308 = UINT16_MAX;
	int32_t t71 = 11294;

    t71 = (((x305<=x306)+x307)&x308);

    if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x309 = UINT8_MAX;
	uint8_t x310 = 0U;
	static int32_t x311 = INT32_MIN;
	int8_t x312 = 11;
	static volatile int32_t t72 = 407;

    t72 = (((x309<=x310)+x311)&x312);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x313 = 1083U;
	uint32_t x315 = 666141673U;
	uint32_t t73 = 1069684147U;

    t73 = (((x313<=x314)+x315)&x316);

    if (t73 != 666141568U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x317 = -1;
	static uint8_t x318 = 7U;
	static int32_t x320 = 15859;
	int64_t t74 = -6082521446165514LL;

    t74 = (((x317<=x318)+x319)&x320);

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x321 = -1;
	volatile int32_t x322 = INT32_MIN;
	volatile int8_t x323 = INT8_MIN;
	static int64_t x324 = -1LL;
	int64_t t75 = 914568605793216LL;

    t75 = (((x321<=x322)+x323)&x324);

    if (t75 != -128LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x326 = -1LL;
	int64_t x327 = -2LL;
	static uint64_t x328 = 198351934LLU;
	uint64_t t76 = 95654LLU;

    t76 = (((x325<=x326)+x327)&x328);

    if (t76 != 198351934LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x329 = INT32_MIN;
	uint16_t x331 = 450U;
	int64_t x332 = -1LL;

    t77 = (((x329<=x330)+x331)&x332);

    if (t77 != 451LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x333 = INT16_MIN;
	int64_t x334 = 10101050069517LL;
	int64_t x335 = -5LL;
	uint32_t x336 = 3U;

    t78 = (((x333<=x334)+x335)&x336);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x337 = -1;
	static int64_t x338 = INT64_MIN;
	uint8_t x340 = 4U;
	int32_t t79 = 322;

    t79 = (((x337<=x338)+x339)&x340);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x341 = INT16_MIN;
	int8_t x343 = INT8_MAX;
	int8_t x344 = -29;

    t80 = (((x341<=x342)+x343)&x344);

    if (t80 != 99) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x345 = -1;
	int32_t x346 = INT32_MAX;
	uint8_t x347 = UINT8_MAX;
	int64_t x348 = INT64_MIN;
	int64_t t81 = -856335529LL;

    t81 = (((x345<=x346)+x347)&x348);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x349 = 0;
	int8_t x350 = INT8_MIN;
	static volatile int64_t x351 = -1824345897680836798LL;
	uint64_t x352 = 10794331838394526LLU;
	uint64_t t82 = 1303103LLU;

    t82 = (((x349<=x350)+x351)&x352);

    if (t82 != 10723546036740098LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x353 = 13274U;
	uint8_t x355 = 41U;
	int64_t x356 = 523819238LL;
	volatile int64_t t83 = -4377308803176738LL;

    t83 = (((x353<=x354)+x355)&x356);

    if (t83 != 32LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x358 = 116;
	uint8_t x359 = 1U;
	uint16_t x360 = 14U;
	volatile int32_t t84 = 100954;

    t84 = (((x357<=x358)+x359)&x360);

    if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x361 = 12387U;
	int64_t x362 = INT64_MIN;
	uint32_t x363 = UINT32_MAX;
	static uint64_t x364 = 81005078135LLU;
	uint64_t t85 = 6311169057226500194LLU;

    t85 = (((x361<=x362)+x363)&x364);

    if (t85 != 3695666807LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x365 = 15;
	uint32_t x367 = UINT32_MAX;
	static uint8_t x368 = 2U;
	volatile uint32_t t86 = 1833U;

    t86 = (((x365<=x366)+x367)&x368);

    if (t86 != 2U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x369 = INT32_MIN;
	uint8_t x370 = 45U;
	int32_t x371 = -1;
	static uint32_t x372 = 389993U;

    t87 = (((x369<=x370)+x371)&x372);

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x373 = -42;
	uint8_t x374 = UINT8_MAX;
	uint64_t x375 = 53921156697013LLU;
	uint64_t t88 = 2LLU;

    t88 = (((x373<=x374)+x375)&x376);

    if (t88 != 53921156697014LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x377 = INT64_MIN;
	int64_t x379 = -6154602LL;
	int32_t x380 = -1;
	static int64_t t89 = 1001LL;

    t89 = (((x377<=x378)+x379)&x380);

    if (t89 != -6154601LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x381 = 42495332U;
	uint64_t x382 = 1LLU;
	static volatile int16_t x383 = INT16_MIN;

    t90 = (((x381<=x382)+x383)&x384);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x385 = -7347;
	int8_t x386 = INT8_MIN;
	int16_t x387 = 11702;
	uint32_t x388 = UINT32_MAX;
	uint32_t t91 = 96288579U;

    t91 = (((x385<=x386)+x387)&x388);

    if (t91 != 11703U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x389 = 486U;
	int8_t x390 = -27;
	int16_t x391 = -1;
	int64_t x392 = -81046307564643LL;
	int64_t t92 = -1441756621984915LL;

    t92 = (((x389<=x390)+x391)&x392);

    if (t92 != -81046307564643LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x393 = INT32_MIN;
	uint16_t x394 = UINT16_MAX;
	static uint64_t x395 = 12739489674071LLU;
	volatile int16_t x396 = INT16_MIN;
	uint64_t t93 = 15864100715LLU;

    t93 = (((x393<=x394)+x395)&x396);

    if (t93 != 12739489660928LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x398 = INT8_MIN;
	static int64_t x399 = 312LL;
	volatile int64_t t94 = 105933229LL;

    t94 = (((x397<=x398)+x399)&x400);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x401 = 33;
	int64_t x403 = -1LL;
	volatile int64_t t95 = -488LL;

    t95 = (((x401<=x402)+x403)&x404);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x405 = -998;
	int8_t x406 = INT8_MAX;
	int64_t x407 = INT64_MIN;
	static int16_t x408 = 0;
	volatile int64_t t96 = 83297LL;

    t96 = (((x405<=x406)+x407)&x408);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x410 = -1;
	uint16_t x411 = 14U;
	int16_t x412 = INT16_MIN;
	static volatile int32_t t97 = 1;

    t97 = (((x409<=x410)+x411)&x412);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x413 = INT16_MAX;
	int16_t x414 = 949;
	uint16_t x415 = 0U;
	volatile uint16_t x416 = UINT16_MAX;
	int32_t t98 = -718068;

    t98 = (((x413<=x414)+x415)&x416);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x417 = 81978LLU;
	volatile int64_t x418 = 33844341117951751LL;
	volatile int8_t x419 = -1;
	int16_t x420 = INT16_MAX;
	static int32_t t99 = 88;

    t99 = (((x417<=x418)+x419)&x420);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x421 = 119LLU;
	uint8_t x422 = 6U;
	int16_t x423 = -373;
	static int32_t x424 = 218353;
	static int32_t t100 = 931597858;

    t100 = (((x421<=x422)+x423)&x424);

    if (t100 != 218241) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x425 = -5;
	static int32_t x426 = -739223;
	uint32_t x427 = 49U;
	static volatile int64_t x428 = -1LL;

    t101 = (((x425<=x426)+x427)&x428);

    if (t101 != 49LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x429 = INT8_MIN;
	int16_t x430 = INT16_MAX;
	volatile uint64_t x432 = 3065128811099638LLU;
	volatile uint64_t t102 = 5626702424554LLU;

    t102 = (((x429<=x430)+x431)&x432);

    if (t102 != 3065128811069440LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x435 = INT64_MIN;
	uint32_t x436 = 24446971U;

    t103 = (((x433<=x434)+x435)&x436);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x437 = 26U;
	uint16_t x438 = 8873U;
	static int16_t x439 = INT16_MIN;
	int64_t x440 = 503517695326434434LL;
	volatile int64_t t104 = 5738548LL;

    t104 = (((x437<=x438)+x439)&x440);

    if (t104 != 503517695326420992LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x442 = -1;
	int16_t x444 = INT16_MAX;

    t105 = (((x441<=x442)+x443)&x444);

    if (t105 != 55) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x445 = INT64_MIN;
	volatile int8_t x446 = -2;
	static int64_t x447 = -202373606LL;
	uint16_t x448 = 3279U;
	volatile int64_t t106 = 109605LL;

    t106 = (((x445<=x446)+x447)&x448);

    if (t106 != 1035LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x449 = -14209072712761927LL;
	uint32_t x450 = 8998604U;
	int64_t x451 = -71637106317LL;
	volatile int16_t x452 = INT16_MAX;
	volatile int64_t t107 = 73941LL;

    t107 = (((x449<=x450)+x451)&x452);

    if (t107 != 372LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x453 = 28;
	uint8_t x454 = 1U;
	volatile uint32_t x455 = 765857965U;
	uint32_t x456 = 713U;
	static uint32_t t108 = 590U;

    t108 = (((x453<=x454)+x455)&x456);

    if (t108 != 137U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x461 = UINT64_MAX;
	volatile uint8_t x462 = 83U;
	static int8_t x463 = INT8_MIN;
	static int8_t x464 = INT8_MIN;
	volatile int32_t t109 = 1610397;

    t109 = (((x461<=x462)+x463)&x464);

    if (t109 != -128) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x465 = UINT64_MAX;
	static uint16_t x467 = 23U;
	volatile uint64_t x468 = 1075035505289LLU;
	volatile uint64_t t110 = 31400387LLU;

    t110 = (((x465<=x466)+x467)&x468);

    if (t110 != 1LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x469 = UINT32_MAX;
	uint16_t x470 = 605U;
	int32_t x471 = -7328;
	int16_t x472 = INT16_MIN;
	int32_t t111 = 344;

    t111 = (((x469<=x470)+x471)&x472);

    if (t111 != -32768) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x473 = INT16_MAX;
	volatile uint8_t x474 = UINT8_MAX;
	volatile int8_t x475 = INT8_MIN;
	static int16_t x476 = 5;
	int32_t t112 = 3;

    t112 = (((x473<=x474)+x475)&x476);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x477 = INT16_MIN;
	int64_t x478 = INT64_MAX;
	int32_t x479 = -1;
	int64_t x480 = INT64_MIN;
	int64_t t113 = -4051742687LL;

    t113 = (((x477<=x478)+x479)&x480);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x482 = -3071;
	int8_t x483 = 2;
	static int64_t x484 = INT64_MIN;
	volatile int64_t t114 = -1368914879427458068LL;

    t114 = (((x481<=x482)+x483)&x484);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x485 = 14267902773854943LLU;
	static volatile int64_t t115 = INT64_MIN;

    t115 = (((x485<=x486)+x487)&x488);

    if (t115 != INT64_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x489 = INT64_MIN;
	volatile int32_t x491 = 0;
	volatile int8_t x492 = -1;
	static int32_t t116 = 16824;

    t116 = (((x489<=x490)+x491)&x492);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x493 = INT32_MIN;
	static uint64_t x494 = 11130404689LLU;
	int16_t x495 = INT16_MIN;
	uint8_t x496 = 3U;

    t117 = (((x493<=x494)+x495)&x496);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x497 = 325U;
	int32_t x499 = INT32_MIN;
	volatile uint8_t x500 = UINT8_MAX;

    t118 = (((x497<=x498)+x499)&x500);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x501 = 15LLU;
	static uint16_t x502 = UINT16_MAX;
	int64_t x504 = -160492LL;
	volatile int64_t t119 = -6455128720447484LL;

    t119 = (((x501<=x502)+x503)&x504);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x505 = INT64_MIN;
	uint32_t x507 = 68U;
	int8_t x508 = 1;
	static volatile uint32_t t120 = 49U;

    t120 = (((x505<=x506)+x507)&x508);

    if (t120 != 1U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x509 = INT8_MIN;
	uint8_t x510 = UINT8_MAX;
	int8_t x511 = INT8_MAX;
	volatile uint8_t x512 = UINT8_MAX;
	int32_t t121 = -1326;

    t121 = (((x509<=x510)+x511)&x512);

    if (t121 != 128) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x514 = -49;
	int32_t x516 = 4564;
	static volatile int64_t t122 = -976867957070LL;

    t122 = (((x513<=x514)+x515)&x516);

    if (t122 != 4176LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x517 = 27198LLU;
	static uint64_t x518 = 5939025641792066115LLU;
	static int8_t x519 = INT8_MIN;
	uint64_t t123 = 26606375362934LLU;

    t123 = (((x517<=x518)+x519)&x520);

    if (t123 != 5572993LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x521 = INT8_MAX;
	uint16_t x522 = 3280U;
	uint16_t x523 = 523U;
	uint8_t x524 = 6U;
	volatile int32_t t124 = -1772472;

    t124 = (((x521<=x522)+x523)&x524);

    if (t124 != 4) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x525 = INT64_MIN;
	int8_t x527 = -1;
	static uint8_t x528 = 4U;
	volatile int32_t t125 = 0;

    t125 = (((x525<=x526)+x527)&x528);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x529 = -189;
	int32_t x530 = INT32_MIN;
	volatile uint8_t x532 = 8U;
	volatile int32_t t126 = 113744171;

    t126 = (((x529<=x530)+x531)&x532);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x534 = -1LL;
	int16_t x535 = -1;
	int64_t x536 = -1LL;
	volatile int64_t t127 = -9LL;

    t127 = (((x533<=x534)+x535)&x536);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x537 = INT32_MIN;
	static uint64_t x538 = 192379923467098LLU;
	int32_t x540 = INT32_MAX;
	volatile int32_t t128 = -370699033;

    t128 = (((x537<=x538)+x539)&x540);

    if (t128 != 127) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x541 = -1LL;
	int32_t x542 = INT32_MIN;
	int8_t x543 = INT8_MAX;
	int8_t x544 = -1;
	volatile int32_t t129 = -4;

    t129 = (((x541<=x542)+x543)&x544);

    if (t129 != 127) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x546 = -1LL;
	int32_t x547 = -1;
	int16_t x548 = -1;
	static volatile int32_t t130 = -670919;

    t130 = (((x545<=x546)+x547)&x548);

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x550 = -7;
	static int16_t x551 = -893;
	volatile int64_t t131 = INT64_MIN;

    t131 = (((x549<=x550)+x551)&x552);

    if (t131 != INT64_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x553 = 25;
	int32_t x554 = INT32_MIN;
	uint32_t x556 = 154438129U;

    t132 = (((x553<=x554)+x555)&x556);

    if (t132 != 154438129LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x557 = UINT32_MAX;
	int32_t x558 = INT32_MIN;
	static int32_t x559 = INT32_MAX;
	uint64_t x560 = 29355LLU;

    t133 = (((x557<=x558)+x559)&x560);

    if (t133 != 29355LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x561 = 23U;
	int8_t x562 = -1;
	int32_t t134 = 13261174;

    t134 = (((x561<=x562)+x563)&x564);

    if (t134 != -128) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x565 = -4;
	uint64_t x566 = UINT64_MAX;
	int64_t x568 = -1LL;
	volatile int64_t t135 = -295688940218LL;

    t135 = (((x565<=x566)+x567)&x568);

    if (t135 != 860LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int32_t x569 = INT32_MAX;
	int32_t x570 = 23913;
	static int64_t x571 = 3495600436LL;
	static int8_t x572 = INT8_MIN;

    t136 = (((x569<=x570)+x571)&x572);

    if (t136 != 3495600384LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x573 = INT64_MIN;
	int16_t x576 = INT16_MIN;
	int64_t t137 = INT64_MIN;

    t137 = (((x573<=x574)+x575)&x576);

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x578 = UINT64_MAX;
	static int16_t x579 = 460;
	volatile int32_t t138 = -1;

    t138 = (((x577<=x578)+x579)&x580);

    if (t138 != 461) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x581 = UINT64_MAX;
	static volatile int64_t x582 = 4879LL;
	int64_t x583 = 123124LL;
	uint64_t t139 = 6041207955810484531LLU;

    t139 = (((x581<=x582)+x583)&x584);

    if (t139 != 90276LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x585 = -188948350348396945LL;
	int64_t x586 = INT64_MIN;
	volatile int64_t t140 = 384LL;

    t140 = (((x585<=x586)+x587)&x588);

    if (t140 != -1129441LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x590 = 1U;
	volatile uint16_t x591 = 73U;
	uint8_t x592 = 5U;
	static volatile int32_t t141 = 453275;

    t141 = (((x589<=x590)+x591)&x592);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x593 = INT16_MAX;
	int64_t x594 = -1LL;
	static uint8_t x595 = 30U;
	volatile int32_t x596 = -1;
	int32_t t142 = 5448056;

    t142 = (((x593<=x594)+x595)&x596);

    if (t142 != 30) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x597 = -1LL;
	uint16_t x599 = 3863U;

    t143 = (((x597<=x598)+x599)&x600);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x601 = UINT64_MAX;
	static uint8_t x603 = 14U;
	int64_t x604 = -1LL;
	int64_t t144 = -31721710LL;

    t144 = (((x601<=x602)+x603)&x604);

    if (t144 != 14LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x605 = UINT64_MAX;
	int32_t x606 = -122;
	uint32_t x607 = UINT32_MAX;
	static int8_t x608 = INT8_MIN;

    t145 = (((x605<=x606)+x607)&x608);

    if (t145 != 4294967168U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x609 = -2;
	static int8_t x611 = -10;
	int16_t x612 = INT16_MAX;
	volatile int32_t t146 = 376318;

    t146 = (((x609<=x610)+x611)&x612);

    if (t146 != 32759) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x613 = UINT8_MAX;
	int64_t x614 = -32834LL;
	int32_t x615 = INT32_MIN;
	int8_t x616 = -1;
	int32_t t147 = INT32_MIN;

    t147 = (((x613<=x614)+x615)&x616);

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x617 = 6;
	static volatile int32_t x618 = 11;
	int8_t x619 = -11;
	uint16_t x620 = 956U;

    t148 = (((x617<=x618)+x619)&x620);

    if (t148 != 948) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x621 = -1;
	volatile int8_t x623 = -1;
	int32_t t149 = 988;

    t149 = (((x621<=x622)+x623)&x624);

    if (t149 != 1046) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x625 = INT64_MIN;
	static int16_t x626 = INT16_MIN;
	volatile int64_t x628 = -1LL;
	static volatile int64_t t150 = 2488574715219139724LL;

    t150 = (((x625<=x626)+x627)&x628);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x629 = 26600160U;
	volatile int32_t x630 = INT32_MIN;
	int32_t x631 = -1;
	int64_t x632 = -1LL;
	int64_t t151 = 2609419850LL;

    t151 = (((x629<=x630)+x631)&x632);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x634 = INT16_MIN;
	int16_t x635 = INT16_MIN;
	uint16_t x636 = 1967U;
	volatile int32_t t152 = 1487;

    t152 = (((x633<=x634)+x635)&x636);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int64_t x638 = -1LL;
	static uint16_t x639 = 10U;
	volatile int16_t x640 = -1;
	volatile int32_t t153 = -4551;

    t153 = (((x637<=x638)+x639)&x640);

    if (t153 != 10) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x641 = INT8_MAX;
	uint8_t x643 = 16U;
	static uint8_t x644 = 14U;

    t154 = (((x641<=x642)+x643)&x644);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x646 = -3702;
	static uint64_t t155 = 4508LLU;

    t155 = (((x645<=x646)+x647)&x648);

    if (t155 != 1LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x650 = -131278216851692LL;
	static uint64_t x652 = 157LLU;

    t156 = (((x649<=x650)+x651)&x652);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x653 = INT8_MIN;
	volatile int16_t x654 = 1;
	volatile int32_t t157 = -13026;

    t157 = (((x653<=x654)+x655)&x656);

    if (t157 != 6) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x657 = INT8_MAX;
	int32_t x658 = -1;
	int64_t x659 = 261250473LL;
	volatile uint32_t x660 = 3U;
	static int64_t t158 = 235329822LL;

    t158 = (((x657<=x658)+x659)&x660);

    if (t158 != 1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint32_t x661 = 3U;
	volatile int8_t x662 = INT8_MAX;
	volatile int64_t x664 = -1LL;

    t159 = (((x661<=x662)+x663)&x664);

    if (t159 != 530625577519LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x665 = 1;
	int8_t x666 = INT8_MIN;
	int64_t x667 = -1LL;
	int64_t t160 = 56510770438669LL;

    t160 = (((x665<=x666)+x667)&x668);

    if (t160 != 10982959LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x669 = INT32_MAX;
	volatile int8_t x671 = -1;
	volatile int16_t x672 = INT16_MAX;
	int32_t t161 = 114212;

    t161 = (((x669<=x670)+x671)&x672);

    if (t161 != 32767) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x673 = 310U;
	int32_t x675 = INT32_MIN;
	int32_t x676 = INT32_MIN;
	int32_t t162 = INT32_MIN;

    t162 = (((x673<=x674)+x675)&x676);

    if (t162 != INT32_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x677 = INT16_MIN;
	static volatile int32_t x678 = INT32_MIN;
	int8_t x679 = -1;
	static volatile uint64_t x680 = 439525341LLU;

    t163 = (((x677<=x678)+x679)&x680);

    if (t163 != 439525341LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x681 = 6279U;
	volatile int8_t x682 = 1;
	int32_t x683 = 630748715;
	uint64_t x684 = UINT64_MAX;
	volatile uint64_t t164 = 43676304LLU;

    t164 = (((x681<=x682)+x683)&x684);

    if (t164 != 630748715LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x685 = UINT32_MAX;
	uint64_t x687 = 193814LLU;
	volatile uint64_t x688 = 1217900154LLU;
	volatile uint64_t t165 = 51370836LLU;

    t165 = (((x685<=x686)+x687)&x688);

    if (t165 != 173074LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x689 = 1734304552714231LL;
	uint8_t x690 = 4U;
	int64_t x691 = INT64_MIN;
	int32_t x692 = INT32_MIN;
	volatile int64_t t166 = INT64_MIN;

    t166 = (((x689<=x690)+x691)&x692);

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x693 = 8U;
	static int64_t x694 = INT64_MIN;
	int32_t x695 = INT32_MIN;
	static int8_t x696 = 0;

    t167 = (((x693<=x694)+x695)&x696);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x697 = 849U;
	int8_t x698 = INT8_MIN;
	int64_t x699 = INT64_MAX;
	static volatile int16_t x700 = INT16_MAX;

    t168 = (((x697<=x698)+x699)&x700);

    if (t168 != 32767LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x701 = 26;
	static uint32_t x702 = UINT32_MAX;
	int8_t x703 = INT8_MIN;
	int8_t x704 = -2;
	volatile int32_t t169 = -21536;

    t169 = (((x701<=x702)+x703)&x704);

    if (t169 != -128) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x705 = -1;
	volatile int16_t x706 = 33;
	int16_t x707 = INT16_MAX;
	int8_t x708 = INT8_MAX;
	volatile int32_t t170 = -80;

    t170 = (((x705<=x706)+x707)&x708);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x709 = INT32_MAX;
	static int8_t x711 = INT8_MAX;
	uint64_t x712 = 357003964LLU;
	volatile uint64_t t171 = 0LLU;

    t171 = (((x709<=x710)+x711)&x712);

    if (t171 != 128LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x713 = 0U;
	uint16_t x714 = 3U;
	int16_t x715 = INT16_MIN;
	volatile int32_t t172 = -2461286;

    t172 = (((x713<=x714)+x715)&x716);

    if (t172 != -32768) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x717 = -1;
	volatile uint16_t x718 = 1U;
	volatile int64_t x719 = -1LL;
	static uint16_t x720 = 1405U;
	int64_t t173 = -755532LL;

    t173 = (((x717<=x718)+x719)&x720);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x721 = -1;
	int32_t x722 = -1;
	uint8_t x723 = 1U;
	int16_t x724 = 0;

    t174 = (((x721<=x722)+x723)&x724);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x725 = -1;
	int8_t x726 = INT8_MAX;
	static uint64_t x727 = 4403437LLU;
	int8_t x728 = 1;
	static volatile uint64_t t175 = 234211221002LLU;

    t175 = (((x725<=x726)+x727)&x728);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x729 = INT32_MIN;
	volatile uint8_t x731 = 26U;
	volatile int32_t x732 = -1;
	static int32_t t176 = -1;

    t176 = (((x729<=x730)+x731)&x732);

    if (t176 != 27) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x734 = 12076U;
	uint16_t x735 = 1U;
	int64_t x736 = -1LL;
	static volatile int64_t t177 = 248202066486523LL;

    t177 = (((x733<=x734)+x735)&x736);

    if (t177 != 2LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x738 = 19U;
	volatile int16_t x739 = -2;
	int32_t x740 = INT32_MAX;
	volatile int32_t t178 = 2;

    t178 = (((x737<=x738)+x739)&x740);

    if (t178 != 2147483646) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x741 = 24721628707LL;
	static uint8_t x742 = UINT8_MAX;
	uint64_t x743 = 0LLU;
	uint16_t x744 = 3776U;

    t179 = (((x741<=x742)+x743)&x744);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x745 = 23;
	int64_t x747 = -6568294LL;
	static int64_t x748 = -1LL;
	static volatile int64_t t180 = -1546820537389872LL;

    t180 = (((x745<=x746)+x747)&x748);

    if (t180 != -6568294LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x749 = INT16_MIN;
	static uint8_t x750 = 46U;
	int32_t x751 = 421581;
	int32_t t181 = -325264;

    t181 = (((x749<=x750)+x751)&x752);

    if (t181 != 14) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x753 = 5040793U;
	uint64_t x754 = 1284747LLU;
	static volatile int8_t x756 = INT8_MAX;
	uint64_t t182 = 4130LLU;

    t182 = (((x753<=x754)+x755)&x756);

    if (t182 != 127LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x757 = 48872U;
	static int16_t x759 = 8;
	volatile int8_t x760 = -3;
	volatile int32_t t183 = 2698;

    t183 = (((x757<=x758)+x759)&x760);

    if (t183 != 9) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x761 = INT32_MAX;
	int32_t x762 = INT32_MIN;
	static int64_t x763 = 56419792471481232LL;
	int16_t x764 = INT16_MIN;
	int64_t t184 = 52745325338LL;

    t184 = (((x761<=x762)+x763)&x764);

    if (t184 != 56419792471457792LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x765 = UINT64_MAX;
	int16_t x766 = -907;
	uint64_t x767 = 114LLU;
	int64_t x768 = -1LL;
	uint64_t t185 = 23855594998260463LLU;

    t185 = (((x765<=x766)+x767)&x768);

    if (t185 != 114LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t t186 = 160291203679908LL;

    t186 = (((x769<=x770)+x771)&x772);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x773 = INT64_MIN;
	int8_t x774 = -1;
	int16_t x775 = 0;
	int16_t x776 = INT16_MIN;
	static int32_t t187 = 408527;

    t187 = (((x773<=x774)+x775)&x776);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x779 = INT8_MAX;
	volatile int64_t x780 = 79563LL;
	volatile int64_t t188 = -208073659LL;

    t188 = (((x777<=x778)+x779)&x780);

    if (t188 != 75LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x781 = 116481380895LL;
	volatile int32_t x782 = INT32_MIN;
	int64_t t189 = -2500505697181695LL;

    t189 = (((x781<=x782)+x783)&x784);

    if (t189 != 1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x786 = 3646483824121LL;
	int32_t x787 = -23235380;
	uint64_t x788 = 130600515779094455LLU;

    t190 = (((x785<=x786)+x787)&x788);

    if (t190 != 130600515772638341LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x790 = 5;
	volatile int64_t x791 = INT64_MIN;
	int64_t x792 = -1LL;
	int64_t t191 = 499637086294LL;

    t191 = (((x789<=x790)+x791)&x792);

    if (t191 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x793 = 3;
	volatile int64_t x794 = INT64_MAX;
	volatile int8_t x796 = -1;
	int32_t t192 = 1930;

    t192 = (((x793<=x794)+x795)&x796);

    if (t192 != 2) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x797 = -43290LL;
	int8_t x798 = -1;
	int16_t x799 = -12;
	int16_t x800 = 253;
	static volatile int32_t t193 = -15290;

    t193 = (((x797<=x798)+x799)&x800);

    if (t193 != 245) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x809 = INT16_MIN;
	uint16_t x810 = UINT16_MAX;
	uint8_t x811 = UINT8_MAX;
	static int16_t x812 = INT16_MIN;
	volatile int32_t t194 = 700267;

    t194 = (((x809<=x810)+x811)&x812);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x813 = 17U;
	static int64_t x814 = 0LL;
	int8_t x815 = 0;
	int16_t x816 = INT16_MAX;
	volatile int32_t t195 = 9663586;

    t195 = (((x813<=x814)+x815)&x816);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x817 = 222;
	static volatile int8_t x818 = -1;
	int64_t x819 = INT64_MIN;
	static int32_t x820 = INT32_MIN;
	volatile int64_t t196 = INT64_MIN;

    t196 = (((x817<=x818)+x819)&x820);

    if (t196 != INT64_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x821 = INT16_MAX;
	static volatile int8_t x824 = -1;
	int32_t t197 = INT32_MIN;

    t197 = (((x821<=x822)+x823)&x824);

    if (t197 != INT32_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x825 = -3180;
	int16_t x826 = INT16_MIN;
	volatile int8_t x827 = -1;

    t198 = (((x825<=x826)+x827)&x828);

    if (t198 != 127) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x829 = -41;
	int32_t x831 = INT32_MIN;
	int64_t x832 = INT64_MIN;
	volatile int64_t t199 = INT64_MIN;

    t199 = (((x829<=x830)+x831)&x832);

    if (t199 != INT64_MIN) { NG(); } else { ; }
	
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

