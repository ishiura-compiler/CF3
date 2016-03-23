
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

static uint16_t x4 = 716U;
volatile int8_t x13 = INT8_MIN;
static uint32_t x15 = 329479U;
volatile uint32_t t3 = 156U;
static volatile int16_t x21 = INT16_MIN;
int32_t x28 = INT32_MAX;
uint8_t x32 = 1U;
int8_t x37 = INT8_MAX;
int64_t x38 = INT64_MIN;
int8_t x39 = INT8_MAX;
volatile int8_t x43 = INT8_MIN;
uint64_t x44 = UINT64_MAX;
static int64_t t10 = -2LL;
uint8_t x49 = 0U;
int32_t x50 = -183706;
uint32_t t12 = 403U;
volatile uint8_t x59 = 20U;
uint32_t t17 = 38150935U;
int16_t x90 = -1;
uint16_t x95 = UINT16_MAX;
volatile int64_t t22 = -944010444308906LL;
int32_t x111 = INT32_MIN;
int64_t t24 = 209782043945LL;
volatile uint64_t t25 = 842LLU;
int16_t x117 = INT16_MIN;
int32_t x121 = -1;
volatile uint64_t t27 = 1906253513173488LLU;
int32_t x134 = -346662;
volatile int32_t t30 = -97194149;
uint32_t x139 = UINT32_MAX;
static volatile uint32_t t31 = 188850U;
static int32_t x146 = 1727739;
volatile int8_t x150 = INT8_MAX;
static volatile int64_t x156 = -1LL;
volatile int64_t t35 = -1LL;
int16_t x159 = -120;
uint8_t x160 = 1U;
volatile int8_t x161 = 11;
int32_t x163 = INT32_MIN;
int8_t x165 = -10;
volatile uint8_t x169 = UINT8_MAX;
int32_t x171 = 44726955;
static uint64_t t41 = 235199880886695273LLU;
int8_t x185 = INT8_MIN;
volatile uint64_t t46 = 27549531LLU;
uint16_t x202 = 1094U;
int64_t x213 = -1LL;
uint64_t x215 = 2721LLU;
static int16_t x227 = -1;
int32_t t50 = 326471;
int8_t x230 = INT8_MIN;
uint8_t x245 = UINT8_MAX;
uint8_t x246 = UINT8_MAX;
uint8_t x247 = UINT8_MAX;
int32_t x251 = INT32_MIN;
volatile uint64_t t55 = 3939446829LLU;
volatile int32_t x254 = -68;
int8_t x260 = -1;
uint32_t x262 = UINT32_MAX;
uint32_t t58 = 398026508U;
volatile int64_t x265 = INT64_MAX;
uint32_t x267 = UINT32_MAX;
int16_t x285 = INT16_MIN;
static int8_t x297 = INT8_MAX;
static volatile int32_t x300 = -48;
volatile int32_t t66 = -1;
uint16_t x304 = 1U;
int32_t t67 = 9497401;
static int64_t x314 = INT64_MAX;
int32_t x317 = -91;
static uint64_t t71 = 49085254LLU;
volatile uint16_t x333 = 12251U;
uint16_t x337 = 1U;
volatile uint64_t t78 = 5961789235281584700LLU;
uint32_t x361 = 156070632U;
uint32_t x362 = UINT32_MAX;
static int8_t x367 = INT8_MIN;
int16_t x370 = -1;
uint64_t t81 = 113LLU;
static volatile uint16_t x376 = 3289U;
volatile int64_t t82 = 57480168609111LL;
uint8_t x377 = 2U;
volatile uint16_t x378 = UINT16_MAX;
volatile int32_t x380 = 225153246;
static volatile int16_t x383 = INT16_MIN;
int32_t x386 = INT32_MIN;
volatile uint64_t t86 = 4029385068251742LLU;
int32_t x398 = INT32_MIN;
int8_t x421 = 24;
volatile uint16_t x423 = 11U;
int64_t t92 = -123382716LL;
int32_t x427 = INT32_MIN;
int32_t x436 = INT32_MIN;
uint8_t x444 = 2U;
volatile uint64_t t97 = 458LLU;
int64_t x448 = INT64_MIN;
int8_t x451 = INT8_MIN;
uint8_t x463 = 59U;
volatile int32_t x475 = -1;
int16_t x478 = INT16_MAX;
volatile int32_t t106 = -383;
int32_t x504 = INT32_MAX;
volatile int32_t t112 = -317252799;
int16_t x509 = -1;
static uint32_t x512 = 3026105U;
uint8_t x513 = 36U;
int16_t x515 = 5871;
uint8_t x526 = 26U;
int32_t x534 = INT32_MIN;
volatile int16_t x539 = INT16_MAX;
int16_t x550 = INT16_MIN;
volatile uint64_t x551 = 880581462LLU;
static uint16_t x552 = UINT16_MAX;
int32_t x561 = -1;
uint32_t x563 = 646U;
volatile int16_t x564 = 6692;
int32_t x567 = -1;
volatile int64_t x568 = INT64_MAX;
volatile uint64_t x572 = UINT64_MAX;
uint64_t t127 = 140LLU;
volatile uint32_t x581 = UINT32_MAX;
uint16_t x593 = UINT16_MAX;
static int16_t x595 = INT16_MIN;
int32_t x613 = INT32_MIN;
volatile int8_t x621 = INT8_MIN;
static int64_t x625 = INT64_MIN;
int32_t x626 = INT32_MIN;
volatile uint32_t x628 = 59U;
static int64_t t140 = -57719404LL;
int32_t x633 = INT32_MIN;
static int16_t x636 = 169;
int64_t x648 = -357846972490LL;
uint16_t x653 = UINT16_MAX;
uint32_t x660 = 6350U;
volatile uint64_t x667 = UINT64_MAX;
volatile uint64_t t149 = 53LLU;
static uint32_t x672 = 58568109U;
uint32_t x685 = 625253U;
volatile uint64_t t154 = 8337248684LLU;
volatile uint32_t x699 = 568U;
volatile int16_t x701 = INT16_MIN;
int8_t x708 = INT8_MIN;
uint32_t x714 = UINT32_MAX;
uint16_t x715 = 131U;
uint64_t t159 = 15978834404535180LLU;
volatile int32_t t160 = -14;
volatile uint32_t t161 = 0U;
uint32_t x729 = UINT32_MAX;
static int32_t x730 = 958038;
static volatile int16_t x745 = INT16_MIN;
int64_t x748 = 943879712345248LL;
int8_t x762 = 1;
volatile int64_t t167 = -4216541839535123686LL;
static volatile uint64_t x772 = UINT64_MAX;
int64_t x782 = -1178652805426351675LL;
volatile int64_t t171 = -111102388LL;
int64_t t172 = 64827LL;
int64_t x794 = 254LL;
uint32_t x796 = UINT32_MAX;
volatile int16_t x798 = INT16_MAX;
static uint16_t x801 = 6511U;
int32_t x803 = INT32_MIN;
volatile uint64_t x808 = 497546362329135498LLU;
uint8_t x809 = 10U;
uint8_t x817 = 59U;
uint8_t x823 = 0U;
int64_t t181 = -992846187109LL;
volatile int32_t x829 = INT32_MAX;
volatile uint32_t x840 = UINT32_MAX;
int32_t x844 = -157;
uint16_t x860 = 27U;
uint16_t x865 = 77U;
volatile int64_t x866 = -1LL;
volatile int8_t x876 = INT8_MIN;
static int32_t x882 = INT32_MIN;
static int16_t x889 = INT16_MIN;
uint32_t t195 = 11206250U;
uint64_t t196 = 1563841511LLU;
static int64_t x900 = -642375011382359293LL;
int64_t x906 = 5051684LL;


void f0(void) {
    	volatile int16_t x1 = 11;
	volatile uint8_t x2 = 51U;
	int16_t x3 = -1;
	int32_t t0 = 128699477;

    t0 = (((x1/x2)-x3)/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x9 = 0;
	volatile uint8_t x10 = UINT8_MAX;
	uint16_t x11 = UINT16_MAX;
	volatile int64_t x12 = 188387LL;
	int64_t t1 = 59407452912247764LL;

    t1 = (((x9/x10)-x11)/x12);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x14 = UINT32_MAX;
	static int64_t x16 = INT64_MIN;
	int64_t t2 = -63816420193374LL;

    t2 = (((x13/x14)-x15)/x16);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x17 = INT16_MIN;
	static int16_t x18 = INT16_MIN;
	uint32_t x19 = 63395U;
	static int8_t x20 = -7;

    t3 = (((x17/x18)-x19)/x20);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x22 = INT8_MAX;
	volatile int8_t x23 = 1;
	int32_t x24 = INT32_MIN;
	static int32_t t4 = 8039;

    t4 = (((x21/x22)-x23)/x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = -1;
	static int32_t x26 = -1;
	uint32_t x27 = 457U;
	uint32_t t5 = 644704U;

    t5 = (((x25/x26)-x27)/x28);

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x29 = INT8_MIN;
	volatile uint64_t x30 = 432565703034LLU;
	int64_t x31 = INT64_MIN;
	static volatile uint64_t t6 = 8853838368221LLU;

    t6 = (((x29/x30)-x31)/x32);

    if (t6 != 9223372036897420760LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = -1;
	int32_t x34 = INT32_MAX;
	int64_t x35 = -482600LL;
	uint64_t x36 = 15178798462710LLU;
	uint64_t t7 = 4861917341LLU;

    t7 = (((x33/x34)-x35)/x36);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint32_t x40 = UINT32_MAX;
	volatile int64_t t8 = -36629959LL;

    t8 = (((x37/x38)-x39)/x40);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = -45412778035LL;
	static int32_t x42 = INT32_MIN;
	uint64_t t9 = 104279665274LLU;

    t9 = (((x41/x42)-x43)/x44);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = 62145938757467LL;
	int16_t x46 = -1;
	int8_t x47 = INT8_MIN;
	static int32_t x48 = 8547;

    t10 = (((x45/x46)-x47)/x48);

    if (t10 != -7271082105LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x51 = UINT8_MAX;
	volatile int8_t x52 = 7;
	int32_t t11 = -130914;

    t11 = (((x49/x50)-x51)/x52);

    if (t11 != -36) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = 1180338006U;
	int32_t x54 = INT32_MIN;
	volatile int8_t x55 = INT8_MIN;
	volatile int32_t x56 = INT32_MAX;

    t12 = (((x53/x54)-x55)/x56);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = -1;
	static volatile int8_t x58 = INT8_MIN;
	int64_t x60 = INT64_MAX;
	int64_t t13 = 302285680072238LL;

    t13 = (((x57/x58)-x59)/x60);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = 32U;
	int8_t x62 = 1;
	static int32_t x63 = -1;
	volatile int16_t x64 = INT16_MIN;
	int32_t t14 = 15963;

    t14 = (((x61/x62)-x63)/x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x65 = UINT16_MAX;
	int32_t x66 = -1;
	int16_t x67 = INT16_MIN;
	static int16_t x68 = INT16_MIN;
	int32_t t15 = -1757631;

    t15 = (((x65/x66)-x67)/x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x69 = 0U;
	uint32_t x70 = 82261U;
	static uint64_t x71 = 3LLU;
	static volatile int64_t x72 = INT64_MIN;
	uint64_t t16 = 6659464076076427247LLU;

    t16 = (((x69/x70)-x71)/x72);

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x77 = -2;
	uint32_t x78 = 253U;
	static int16_t x79 = INT16_MAX;
	int8_t x80 = -1;

    t17 = (((x77/x78)-x79)/x80);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int16_t x81 = INT16_MAX;
	static volatile uint32_t x82 = 57U;
	int32_t x83 = INT32_MIN;
	static uint32_t x84 = 94U;
	volatile uint32_t t18 = 1188U;

    t18 = (((x81/x82)-x83)/x84);

    if (t18 != 22845576U) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint8_t x85 = 18U;
	int8_t x86 = INT8_MAX;
	volatile int8_t x87 = INT8_MIN;
	uint64_t x88 = 19875507LLU;
	uint64_t t19 = 1670945479LLU;

    t19 = (((x85/x86)-x87)/x88);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = -1;
	static uint64_t x91 = UINT64_MAX;
	uint16_t x92 = UINT16_MAX;
	volatile uint64_t t20 = 7665LLU;

    t20 = (((x89/x90)-x91)/x92);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x93 = 37;
	int32_t x94 = 468;
	volatile int16_t x96 = 14862;
	int32_t t21 = 60952;

    t21 = (((x93/x94)-x95)/x96);

    if (t21 != -4) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = -1;
	int64_t x98 = INT64_MIN;
	int32_t x99 = INT32_MIN;
	int32_t x100 = 17;

    t22 = (((x97/x98)-x99)/x100);

    if (t22 != 126322567LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x101 = 1U;
	static int16_t x102 = -1;
	static int32_t x103 = 1719772;
	static uint64_t x104 = 255138941113386780LLU;
	static volatile uint64_t t23 = 216LLU;

    t23 = (((x101/x102)-x103)/x104);

    if (t23 != 72LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x109 = -1;
	static uint32_t x110 = UINT32_MAX;
	int64_t x112 = 1298467587LL;

    t24 = (((x109/x110)-x111)/x112);

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x113 = INT32_MAX;
	static uint64_t x114 = 14970119LLU;
	volatile int32_t x115 = -667981739;
	int64_t x116 = 899586049318609LL;

    t25 = (((x113/x114)-x115)/x116);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x118 = INT64_MIN;
	int64_t x119 = 26266651223706887LL;
	volatile int64_t x120 = -1LL;
	static int64_t t26 = 1917LL;

    t26 = (((x117/x118)-x119)/x120);

    if (t26 != 26266651223706887LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x122 = 1295760696557878LLU;
	int16_t x123 = INT16_MAX;
	volatile int8_t x124 = -50;

    t27 = (((x121/x122)-x123)/x124);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x125 = INT64_MAX;
	volatile int8_t x126 = INT8_MIN;
	int32_t x127 = -1059285281;
	int32_t x128 = INT32_MIN;
	volatile int64_t t28 = 5743347110059LL;

    t28 = (((x125/x126)-x127)/x128);

    if (t28 != 33554431LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x129 = 905463543;
	uint16_t x130 = 20619U;
	static uint64_t x131 = 199LLU;
	static int64_t x132 = INT64_MIN;
	static volatile uint64_t t29 = 2150044LLU;

    t29 = (((x129/x130)-x131)/x132);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x133 = INT16_MAX;
	volatile uint8_t x135 = 0U;
	int32_t x136 = 2159723;

    t30 = (((x133/x134)-x135)/x136);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x137 = 14;
	volatile int32_t x138 = INT32_MAX;
	uint8_t x140 = UINT8_MAX;

    t31 = (((x137/x138)-x139)/x140);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x141 = UINT32_MAX;
	volatile int16_t x142 = INT16_MIN;
	static uint16_t x143 = UINT16_MAX;
	static int32_t x144 = INT32_MIN;
	volatile uint32_t t32 = 1U;

    t32 = (((x141/x142)-x143)/x144);

    if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x145 = 6U;
	volatile int64_t x147 = 204438LL;
	volatile int16_t x148 = -1;
	static volatile int64_t t33 = 84LL;

    t33 = (((x145/x146)-x147)/x148);

    if (t33 != 204438LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x149 = -1;
	volatile int8_t x151 = INT8_MIN;
	int64_t x152 = 24822529910572LL;
	static volatile int64_t t34 = -5LL;

    t34 = (((x149/x150)-x151)/x152);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x153 = -1;
	uint32_t x154 = 31056139U;
	int16_t x155 = INT16_MIN;

    t35 = (((x153/x154)-x155)/x156);

    if (t35 != -32906LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x157 = -22;
	static volatile int16_t x158 = INT16_MAX;
	volatile int32_t t36 = 6255420;

    t36 = (((x157/x158)-x159)/x160);

    if (t36 != 120) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x162 = -1;
	uint64_t x164 = 2578387LLU;
	static uint64_t t37 = 1293822984887043633LLU;

    t37 = (((x161/x162)-x163)/x164);

    if (t37 != 832LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x166 = UINT8_MAX;
	static uint64_t x167 = 460537974081042LLU;
	int16_t x168 = -1;
	static volatile uint64_t t38 = 524042199LLU;

    t38 = (((x165/x166)-x167)/x168);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x170 = 7579U;
	static uint32_t x172 = UINT32_MAX;
	volatile uint32_t t39 = 6114U;

    t39 = (((x169/x170)-x171)/x172);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x173 = INT64_MIN;
	int64_t x174 = -1317505083628221LL;
	uint16_t x175 = UINT16_MAX;
	uint8_t x176 = 15U;
	volatile int64_t t40 = -1638519LL;

    t40 = (((x173/x174)-x175)/x176);

    if (t40 != -3902LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x177 = 1U;
	uint64_t x178 = 1486793560359350646LLU;
	int8_t x179 = INT8_MIN;
	volatile uint32_t x180 = UINT32_MAX;

    t41 = (((x177/x178)-x179)/x180);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x181 = 50U;
	static int64_t x182 = INT64_MIN;
	static uint32_t x183 = 18U;
	volatile int32_t x184 = -1;
	volatile int64_t t42 = -68752775129523LL;

    t42 = (((x181/x182)-x183)/x184);

    if (t42 != 18LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x186 = INT8_MAX;
	volatile int16_t x187 = INT16_MAX;
	static volatile uint16_t x188 = 2U;
	static volatile int32_t t43 = 13;

    t43 = (((x185/x186)-x187)/x188);

    if (t43 != -16384) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x189 = INT32_MIN;
	int16_t x190 = 757;
	int64_t x191 = 65369585435899437LL;
	int8_t x192 = -4;
	volatile int64_t t44 = 861925LL;

    t44 = (((x189/x190)-x191)/x192);

    if (t44 != 16342396359684067LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x193 = -1;
	uint16_t x194 = 9U;
	volatile int16_t x195 = INT16_MAX;
	int8_t x196 = 3;
	static volatile int32_t t45 = -1015736;

    t45 = (((x193/x194)-x195)/x196);

    if (t45 != -10922) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x197 = 839520405210LLU;
	static int8_t x198 = -1;
	int8_t x199 = INT8_MAX;
	static uint32_t x200 = 30740U;

    t46 = (((x197/x198)-x199)/x200);

    if (t46 != 600089267199399LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x201 = -1;
	uint32_t x203 = UINT32_MAX;
	int32_t x204 = INT32_MIN;
	uint32_t t47 = 1393034U;

    t47 = (((x201/x202)-x203)/x204);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x214 = INT8_MIN;
	uint32_t x216 = UINT32_MAX;
	uint64_t t48 = 24288310LLU;

    t48 = (((x213/x214)-x215)/x216);

    if (t48 != 4294967296LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x217 = 19;
	volatile int32_t x218 = -1;
	static int8_t x219 = 39;
	uint32_t x220 = 9150U;
	uint32_t t49 = 1997729359U;

    t49 = (((x217/x218)-x219)/x220);

    if (t49 != 469395U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x225 = INT8_MIN;
	uint16_t x226 = 991U;
	int8_t x228 = -15;

    t50 = (((x225/x226)-x227)/x228);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x229 = INT64_MAX;
	uint32_t x231 = UINT32_MAX;
	static uint16_t x232 = UINT16_MAX;
	int64_t t51 = 122LL;

    t51 = (((x229/x230)-x231)/x232);

    if (t51 != -1099528470785LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x237 = -1;
	int16_t x238 = -1313;
	static int32_t x239 = -1;
	uint8_t x240 = UINT8_MAX;
	static volatile int32_t t52 = -751247993;

    t52 = (((x237/x238)-x239)/x240);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x241 = 18149005400386LLU;
	int32_t x242 = -1;
	int8_t x243 = INT8_MIN;
	int8_t x244 = -1;
	uint64_t t53 = 57315386LLU;

    t53 = (((x241/x242)-x243)/x244);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x248 = 249814671;
	volatile int32_t t54 = -122;

    t54 = (((x245/x246)-x247)/x248);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x249 = INT8_MAX;
	static uint64_t x250 = UINT64_MAX;
	uint64_t x252 = 4768LLU;

    t55 = (((x249/x250)-x251)/x252);

    if (t55 != 450395LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x253 = INT8_MIN;
	static volatile uint16_t x255 = 1679U;
	uint32_t x256 = 2538694U;
	uint32_t t56 = 545U;

    t56 = (((x253/x254)-x255)/x256);

    if (t56 != 1691U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x257 = 23895LLU;
	int16_t x258 = -1;
	uint8_t x259 = 0U;
	static uint64_t t57 = 13503960657473LLU;

    t57 = (((x257/x258)-x259)/x260);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x261 = INT16_MAX;
	volatile uint8_t x263 = 8U;
	int32_t x264 = INT32_MAX;

    t58 = (((x261/x262)-x263)/x264);

    if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x266 = 113U;
	int16_t x268 = INT16_MIN;
	volatile int64_t t59 = 2319543866905345LL;

    t59 = (((x265/x266)-x267)/x268);

    if (t59 != -2490928866367LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x273 = 51271398U;
	static volatile int8_t x274 = INT8_MIN;
	static uint8_t x275 = 1U;
	int64_t x276 = INT64_MIN;
	static int64_t t60 = -10178938LL;

    t60 = (((x273/x274)-x275)/x276);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x277 = INT8_MAX;
	int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MAX;
	static int16_t x280 = INT16_MAX;
	int32_t t61 = -61086;

    t61 = (((x277/x278)-x279)/x280);

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x281 = 10503U;
	int64_t x282 = 1LL;
	static int64_t x283 = 0LL;
	uint8_t x284 = 1U;
	int64_t t62 = 30837078796609452LL;

    t62 = (((x281/x282)-x283)/x284);

    if (t62 != 10503LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x286 = 104157LLU;
	static volatile int64_t x287 = -1LL;
	int8_t x288 = 7;
	static uint64_t t63 = 28786568LLU;

    t63 = (((x285/x286)-x287)/x288);

    if (t63 != 25300739781167LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x289 = INT16_MAX;
	int64_t x290 = INT64_MIN;
	int8_t x291 = -16;
	int16_t x292 = -1;
	volatile int64_t t64 = -86989LL;

    t64 = (((x289/x290)-x291)/x292);

    if (t64 != -16LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x293 = INT64_MAX;
	static int32_t x294 = INT32_MAX;
	int8_t x295 = -12;
	uint16_t x296 = 10103U;
	volatile int64_t t65 = -9419971984LL;

    t65 = (((x293/x294)-x295)/x296);

    if (t65 != 425118LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x298 = INT32_MAX;
	volatile int8_t x299 = INT8_MIN;

    t66 = (((x297/x298)-x299)/x300);

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x301 = UINT8_MAX;
	int16_t x302 = INT16_MAX;
	int32_t x303 = -1;

    t67 = (((x301/x302)-x303)/x304);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x305 = -1;
	int64_t x306 = -1LL;
	int8_t x307 = 1;
	static int16_t x308 = -1;
	int64_t t68 = 3882643LL;

    t68 = (((x305/x306)-x307)/x308);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x309 = INT16_MAX;
	uint16_t x310 = 2216U;
	uint8_t x311 = UINT8_MAX;
	volatile int32_t x312 = INT32_MIN;
	int32_t t69 = 57;

    t69 = (((x309/x310)-x311)/x312);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x313 = 0;
	int8_t x315 = INT8_MAX;
	int64_t x316 = INT64_MIN;
	volatile int64_t t70 = -192929191096476LL;

    t70 = (((x313/x314)-x315)/x316);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x318 = UINT64_MAX;
	static volatile uint16_t x319 = 1007U;
	volatile uint8_t x320 = 6U;

    t71 = (((x317/x318)-x319)/x320);

    if (t71 != 3074457345618258434LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x321 = 266308274961355LLU;
	uint16_t x322 = 11596U;
	static int64_t x323 = -14584607134LL;
	uint16_t x324 = UINT16_MAX;
	uint64_t t72 = 80464LLU;

    t72 = (((x321/x322)-x323)/x324);

    if (t72 != 572978LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x325 = 46273;
	int64_t x326 = -1LL;
	int32_t x327 = -1;
	uint32_t x328 = UINT32_MAX;
	int64_t t73 = -31851483676415LL;

    t73 = (((x325/x326)-x327)/x328);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint64_t x334 = 58LLU;
	uint8_t x335 = 3U;
	uint32_t x336 = 50483381U;
	volatile uint64_t t74 = 1290028733LLU;

    t74 = (((x333/x334)-x335)/x336);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x338 = UINT8_MAX;
	int8_t x339 = INT8_MIN;
	int64_t x340 = INT64_MIN;
	static volatile int64_t t75 = -3475189284325155809LL;

    t75 = (((x337/x338)-x339)/x340);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x349 = -31;
	volatile uint64_t x350 = UINT64_MAX;
	uint16_t x351 = UINT16_MAX;
	static volatile int64_t x352 = INT64_MAX;
	volatile uint64_t t76 = 22LLU;

    t76 = (((x349/x350)-x351)/x352);

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x353 = 0;
	uint64_t x354 = 22LLU;
	static uint16_t x355 = 151U;
	uint16_t x356 = 1571U;
	uint64_t t77 = 4058LLU;

    t77 = (((x353/x354)-x355)/x356);

    if (t77 != 11742039512227594LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x357 = INT8_MAX;
	volatile int32_t x358 = INT32_MIN;
	static volatile uint64_t x359 = 34LLU;
	int8_t x360 = INT8_MIN;

    t78 = (((x357/x358)-x359)/x360);

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x363 = -1;
	int8_t x364 = 1;
	static volatile uint32_t t79 = 3450643U;

    t79 = (((x361/x362)-x363)/x364);

    if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x365 = INT32_MAX;
	static uint8_t x366 = 121U;
	int8_t x368 = -1;
	volatile int32_t t80 = 2086807;

    t80 = (((x365/x366)-x367)/x368);

    if (t80 != -17747926) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x369 = 1U;
	uint64_t x371 = 107344LLU;
	static int32_t x372 = INT32_MAX;

    t81 = (((x369/x370)-x371)/x372);

    if (t81 != 8589934595LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x373 = -1;
	int64_t x374 = -1LL;
	volatile int32_t x375 = INT32_MIN;

    t82 = (((x373/x374)-x375)/x376);

    if (t82 != 652929LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x379 = INT32_MAX;
	volatile int32_t t83 = 4;

    t83 = (((x377/x378)-x379)/x380);

    if (t83 != -9) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint32_t x381 = 15878801U;
	uint64_t x382 = 520077600556038954LLU;
	int32_t x384 = -1;
	volatile uint64_t t84 = 281573365879LLU;

    t84 = (((x381/x382)-x383)/x384);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int64_t x385 = 30216690LL;
	int64_t x387 = -780503549LL;
	uint16_t x388 = UINT16_MAX;
	static int64_t t85 = 7133LL;

    t85 = (((x385/x386)-x387)/x388);

    if (t85 != 11909LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x393 = INT8_MAX;
	uint8_t x394 = 3U;
	uint64_t x395 = 127641LLU;
	int8_t x396 = INT8_MIN;

    t86 = (((x393/x394)-x395)/x396);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x397 = INT16_MIN;
	int32_t x399 = 2995770;
	static int16_t x400 = -208;
	volatile int32_t t87 = 492875;

    t87 = (((x397/x398)-x399)/x400);

    if (t87 != 14402) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x405 = UINT64_MAX;
	volatile uint64_t x406 = 101233287006820527LLU;
	static volatile int8_t x407 = 15;
	int16_t x408 = INT16_MAX;
	volatile uint64_t t88 = 318242117237964LLU;

    t88 = (((x405/x406)-x407)/x408);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x409 = 235705232LLU;
	int64_t x410 = INT64_MAX;
	static volatile uint8_t x411 = UINT8_MAX;
	int64_t x412 = INT64_MIN;
	uint64_t t89 = 33836649247010LLU;

    t89 = (((x409/x410)-x411)/x412);

    if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x413 = -2;
	uint64_t x414 = 14783LLU;
	int8_t x415 = 15;
	volatile uint16_t x416 = 26091U;
	volatile uint64_t t90 = 382890456LLU;

    t90 = (((x413/x414)-x415)/x416);

    if (t90 != 47826260033LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x417 = INT8_MIN;
	static uint16_t x418 = 863U;
	static volatile int64_t x419 = -780084868326674LL;
	int64_t x420 = INT64_MAX;
	volatile int64_t t91 = -1468491348874015LL;

    t91 = (((x417/x418)-x419)/x420);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x422 = -1;
	int64_t x424 = -1LL;

    t92 = (((x421/x422)-x423)/x424);

    if (t92 != 35LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x425 = UINT64_MAX;
	uint32_t x426 = UINT32_MAX;
	uint16_t x428 = 237U;
	volatile uint64_t t93 = 466647505794LLU;

    t93 = (((x425/x426)-x427)/x428);

    if (t93 != 27183337LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x429 = 3754;
	int64_t x430 = INT64_MAX;
	static int8_t x431 = INT8_MIN;
	volatile int8_t x432 = -21;
	volatile int64_t t94 = 159172021506540918LL;

    t94 = (((x429/x430)-x431)/x432);

    if (t94 != -6LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x433 = 27180;
	int16_t x434 = INT16_MAX;
	volatile uint64_t x435 = UINT64_MAX;
	static uint64_t t95 = 267728190299009073LLU;

    t95 = (((x433/x434)-x435)/x436);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x437 = INT16_MIN;
	uint32_t x438 = 2U;
	int16_t x439 = 2234;
	volatile int16_t x440 = -40;
	volatile uint32_t t96 = 195425574U;

    t96 = (((x437/x438)-x439)/x440);

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint64_t x441 = UINT64_MAX;
	int32_t x442 = -1148;
	int32_t x443 = -3;

    t97 = (((x441/x442)-x443)/x444);

    if (t97 != 2LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x445 = -2934;
	static int16_t x446 = INT16_MIN;
	uint8_t x447 = 3U;
	int64_t t98 = 33602970837730421LL;

    t98 = (((x445/x446)-x447)/x448);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x449 = 66311U;
	volatile int32_t x450 = INT32_MAX;
	uint8_t x452 = UINT8_MAX;
	volatile uint32_t t99 = 2279493U;

    t99 = (((x449/x450)-x451)/x452);

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x453 = 676U;
	static uint8_t x454 = 27U;
	static uint64_t x455 = 136491060818708LLU;
	int32_t x456 = INT32_MIN;
	uint64_t t100 = 4630131568339953258LLU;

    t100 = (((x453/x454)-x455)/x456);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x457 = 855789LLU;
	volatile int32_t x458 = INT32_MAX;
	int64_t x459 = -1LL;
	uint32_t x460 = 3U;
	uint64_t t101 = 255979LLU;

    t101 = (((x457/x458)-x459)/x460);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x461 = 490;
	uint64_t x462 = 2LLU;
	int64_t x464 = INT64_MAX;
	uint64_t t102 = 82LLU;

    t102 = (((x461/x462)-x463)/x464);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x465 = 2419392LL;
	uint16_t x466 = UINT16_MAX;
	int32_t x467 = 239663452;
	int16_t x468 = -25;
	volatile int64_t t103 = -6913181846351LL;

    t103 = (((x465/x466)-x467)/x468);

    if (t103 != 9586536LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x469 = 49236841505LL;
	static int16_t x470 = -832;
	int64_t x471 = -1LL;
	int64_t x472 = INT64_MIN;
	int64_t t104 = 6482LL;

    t104 = (((x469/x470)-x471)/x472);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x473 = INT64_MAX;
	volatile int32_t x474 = -147674046;
	volatile int8_t x476 = -1;
	int64_t t105 = -65408564199018LL;

    t105 = (((x473/x474)-x475)/x476);

    if (t105 != 62457637523LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x477 = INT32_MIN;
	static int8_t x479 = -1;
	int8_t x480 = INT8_MAX;

    t106 = (((x477/x478)-x479)/x480);

    if (t106 != -516) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x481 = -1LL;
	volatile int32_t x482 = INT32_MAX;
	static uint32_t x483 = UINT32_MAX;
	int16_t x484 = INT16_MIN;
	static volatile int64_t t107 = -851425625427LL;

    t107 = (((x481/x482)-x483)/x484);

    if (t107 != 131071LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x485 = 2U;
	int16_t x486 = -1;
	int8_t x487 = INT8_MAX;
	static int64_t x488 = -57452357021952405LL;
	int64_t t108 = 1LL;

    t108 = (((x485/x486)-x487)/x488);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x489 = INT32_MIN;
	static volatile uint16_t x490 = UINT16_MAX;
	int16_t x491 = -446;
	int16_t x492 = 15;
	int32_t t109 = 1751;

    t109 = (((x489/x490)-x491)/x492);

    if (t109 != -2154) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x493 = INT64_MIN;
	int16_t x494 = INT16_MIN;
	volatile int32_t x495 = -1;
	int16_t x496 = INT16_MIN;
	static volatile int64_t t110 = -167LL;

    t110 = (((x493/x494)-x495)/x496);

    if (t110 != -8589934592LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x497 = INT16_MAX;
	uint32_t x498 = 97901694U;
	static int32_t x499 = -1;
	static int64_t x500 = INT64_MIN;
	volatile int64_t t111 = 8LL;

    t111 = (((x497/x498)-x499)/x500);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x501 = 2U;
	int16_t x502 = -20;
	int8_t x503 = -1;

    t112 = (((x501/x502)-x503)/x504);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x505 = 1759;
	uint64_t x506 = 1952325827328537LLU;
	int8_t x507 = 1;
	int8_t x508 = INT8_MIN;
	volatile uint64_t t113 = 117018490LLU;

    t113 = (((x505/x506)-x507)/x508);

    if (t113 != 1LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x510 = INT32_MAX;
	int32_t x511 = INT32_MAX;
	uint32_t t114 = 256526907U;

    t114 = (((x509/x510)-x511)/x512);

    if (t114 != 709U) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int8_t x514 = -12;
	volatile int64_t x516 = -1LL;
	volatile int64_t t115 = 140880169LL;

    t115 = (((x513/x514)-x515)/x516);

    if (t115 != 5874LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x517 = INT32_MIN;
	uint64_t x518 = 16380511341LLU;
	int16_t x519 = INT16_MIN;
	uint32_t x520 = 63669U;
	static uint64_t t116 = 701LLU;

    t116 = (((x517/x518)-x519)/x520);

    if (t116 != 17687LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x521 = -14311;
	int8_t x522 = 1;
	volatile int32_t x523 = INT32_MIN;
	int32_t x524 = -1;
	static volatile int32_t t117 = 55;

    t117 = (((x521/x522)-x523)/x524);

    if (t117 != -2147469337) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x525 = INT8_MIN;
	static uint32_t x527 = 8155U;
	int64_t x528 = -1LL;
	int64_t t118 = 1228088548LL;

    t118 = (((x525/x526)-x527)/x528);

    if (t118 != -4294959137LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x533 = INT64_MAX;
	int8_t x535 = -59;
	int64_t x536 = -1LL;
	volatile int64_t t119 = -3LL;

    t119 = (((x533/x534)-x535)/x536);

    if (t119 != 4294967236LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x537 = -1LL;
	int32_t x538 = -1;
	int32_t x540 = INT32_MIN;
	volatile int64_t t120 = 215429625238LL;

    t120 = (((x537/x538)-x539)/x540);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x541 = INT32_MIN;
	static uint8_t x542 = UINT8_MAX;
	int16_t x543 = INT16_MIN;
	volatile int64_t x544 = INT64_MAX;
	static volatile int64_t t121 = 697795911LL;

    t121 = (((x541/x542)-x543)/x544);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x549 = -1;
	volatile uint64_t t122 = 2260106043164906LLU;

    t122 = (((x549/x550)-x551)/x552);

    if (t122 != 281479271730052LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x553 = 20639693U;
	int16_t x554 = INT16_MIN;
	int32_t x555 = 314;
	int32_t x556 = 124;
	uint32_t t123 = 2U;

    t123 = (((x553/x554)-x555)/x556);

    if (t123 != 34636830U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x557 = -720242702851779648LL;
	static uint64_t x558 = UINT64_MAX;
	int32_t x559 = 220062;
	int64_t x560 = -62LL;
	volatile uint64_t t124 = 10721672760741LLU;

    t124 = (((x557/x558)-x559)/x560);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x562 = INT8_MAX;
	volatile uint32_t t125 = 8U;

    t125 = (((x561/x562)-x563)/x564);

    if (t125 != 641806U) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x565 = UINT16_MAX;
	volatile uint32_t x566 = 1329U;
	static volatile int64_t t126 = 857314411964LL;

    t126 = (((x565/x566)-x567)/x568);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x569 = 1U;
	int64_t x570 = -42900296947725908LL;
	int64_t x571 = -6209603258314LL;

    t127 = (((x569/x570)-x571)/x572);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x573 = -9864LL;
	uint8_t x574 = UINT8_MAX;
	int8_t x575 = INT8_MAX;
	volatile int64_t x576 = 40289LL;
	int64_t t128 = 33483112295984192LL;

    t128 = (((x573/x574)-x575)/x576);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x582 = INT64_MIN;
	int8_t x583 = INT8_MIN;
	volatile int64_t x584 = INT64_MIN;
	volatile int64_t t129 = 260709238027266LL;

    t129 = (((x581/x582)-x583)/x584);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x585 = INT16_MIN;
	static int8_t x586 = INT8_MIN;
	int8_t x587 = INT8_MAX;
	uint32_t x588 = 15U;
	uint32_t t130 = 216696U;

    t130 = (((x585/x586)-x587)/x588);

    if (t130 != 8U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x589 = 15293591U;
	volatile int32_t x590 = INT32_MIN;
	int32_t x591 = -1;
	uint64_t x592 = UINT64_MAX;
	volatile uint64_t t131 = 15533541LLU;

    t131 = (((x589/x590)-x591)/x592);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x594 = INT64_MIN;
	int16_t x596 = INT16_MIN;
	static volatile int64_t t132 = 688LL;

    t132 = (((x593/x594)-x595)/x596);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x597 = INT16_MIN;
	int8_t x598 = 12;
	static int16_t x599 = INT16_MIN;
	int64_t x600 = -1LL;
	static int64_t t133 = -310LL;

    t133 = (((x597/x598)-x599)/x600);

    if (t133 != -30038LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x601 = INT64_MIN;
	volatile int16_t x602 = INT16_MIN;
	int32_t x603 = INT32_MIN;
	static int16_t x604 = INT16_MIN;
	volatile int64_t t134 = -58600437369LL;

    t134 = (((x601/x602)-x603)/x604);

    if (t134 != -8590000128LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x605 = -1;
	int64_t x606 = INT64_MIN;
	int8_t x607 = 0;
	int32_t x608 = -1;
	volatile int64_t t135 = 67773843273474LL;

    t135 = (((x605/x606)-x607)/x608);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x609 = INT8_MIN;
	uint64_t x610 = 21900870867643033LLU;
	volatile uint32_t x611 = 180U;
	uint32_t x612 = UINT32_MAX;
	uint64_t t136 = 833589620LLU;

    t136 = (((x609/x610)-x611)/x612);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x614 = 2LL;
	volatile int8_t x615 = -1;
	static int16_t x616 = -1;
	static int64_t t137 = 4971744914LL;

    t137 = (((x613/x614)-x615)/x616);

    if (t137 != 1073741823LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x617 = UINT16_MAX;
	uint64_t x618 = 286914226196379LLU;
	int8_t x619 = -12;
	int16_t x620 = INT16_MAX;
	volatile uint64_t t138 = 57090233312LLU;

    t138 = (((x617/x618)-x619)/x620);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x622 = INT8_MIN;
	static volatile int8_t x623 = 1;
	static int16_t x624 = -1;
	volatile int32_t t139 = 144850971;

    t139 = (((x621/x622)-x623)/x624);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint16_t x627 = 826U;

    t140 = (((x625/x626)-x627)/x628);

    if (t140 != 72796041LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x629 = UINT64_MAX;
	int8_t x630 = 18;
	int32_t x631 = -189;
	int32_t x632 = INT32_MIN;
	volatile uint64_t t141 = 255789048LLU;

    t141 = (((x629/x630)-x631)/x632);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x634 = -1LL;
	static int64_t x635 = 472646113LL;
	volatile int64_t t142 = -961353778148913LL;

    t142 = (((x633/x634)-x635)/x636);

    if (t142 != 9910281LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x637 = INT32_MAX;
	static uint64_t x638 = UINT64_MAX;
	volatile uint32_t x639 = 124U;
	int32_t x640 = -1;
	uint64_t t143 = 0LLU;

    t143 = (((x637/x638)-x639)/x640);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x641 = -1;
	int8_t x642 = -2;
	static int16_t x643 = INT16_MAX;
	uint16_t x644 = 10927U;
	volatile int32_t t144 = 3;

    t144 = (((x641/x642)-x643)/x644);

    if (t144 != -2) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x645 = INT8_MIN;
	volatile uint64_t x646 = UINT64_MAX;
	int16_t x647 = -126;
	volatile uint64_t t145 = 482397LLU;

    t145 = (((x645/x646)-x647)/x648);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x654 = INT64_MAX;
	int32_t x655 = -152006;
	int16_t x656 = INT16_MAX;
	volatile int64_t t146 = 674585LL;

    t146 = (((x653/x654)-x655)/x656);

    if (t146 != 4LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int32_t x657 = -77923;
	volatile int64_t x658 = -1LL;
	uint32_t x659 = 9023970U;
	int64_t t147 = 13401738428334658LL;

    t147 = (((x657/x658)-x659)/x660);

    if (t147 != -1408LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x661 = INT32_MAX;
	int64_t x662 = INT64_MIN;
	volatile uint32_t x663 = 3902U;
	uint64_t x664 = 199201771899735LLU;
	uint64_t t148 = 1927997234LLU;

    t148 = (((x661/x662)-x663)/x664);

    if (t148 != 92603LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x665 = UINT32_MAX;
	int16_t x666 = -1;
	uint16_t x668 = UINT16_MAX;

    t149 = (((x665/x666)-x667)/x668);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x669 = UINT8_MAX;
	int64_t x670 = -987LL;
	int8_t x671 = INT8_MAX;
	int64_t t150 = 0LL;

    t150 = (((x669/x670)-x671)/x672);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x677 = -1;
	int16_t x678 = INT16_MIN;
	int8_t x679 = INT8_MIN;
	static volatile int8_t x680 = INT8_MAX;
	int32_t t151 = -33202430;

    t151 = (((x677/x678)-x679)/x680);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x681 = INT16_MIN;
	uint64_t x682 = 4982527068LLU;
	static uint32_t x683 = UINT32_MAX;
	int16_t x684 = 1;
	uint64_t t152 = 134059350749LLU;

    t152 = (((x681/x682)-x683)/x684);

    if (t152 != 18446744073116871096LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x686 = 1U;
	uint16_t x687 = 2060U;
	int32_t x688 = INT32_MIN;
	volatile uint32_t t153 = 39195118U;

    t153 = (((x685/x686)-x687)/x688);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x693 = UINT64_MAX;
	volatile int16_t x694 = INT16_MAX;
	static int64_t x695 = INT64_MIN;
	uint64_t x696 = UINT64_MAX;

    t154 = (((x693/x694)-x695)/x696);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x697 = 275456085LL;
	static uint64_t x698 = 4224LLU;
	volatile int16_t x700 = -1;
	uint64_t t155 = 100193337LLU;

    t155 = (((x697/x698)-x699)/x700);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x702 = INT8_MAX;
	static int64_t x703 = INT64_MIN;
	static int32_t x704 = INT32_MIN;
	int64_t t156 = -3331752149662369450LL;

    t156 = (((x701/x702)-x703)/x704);

    if (t156 != -4294967295LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x705 = INT8_MIN;
	int8_t x706 = INT8_MIN;
	uint16_t x707 = 445U;
	static int32_t t157 = 201335;

    t157 = (((x705/x706)-x707)/x708);

    if (t157 != 3) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x709 = INT32_MAX;
	int64_t x710 = 1966407121221336957LL;
	static uint8_t x711 = UINT8_MAX;
	uint8_t x712 = 2U;
	int64_t t158 = -7161650LL;

    t158 = (((x709/x710)-x711)/x712);

    if (t158 != -127LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x713 = 717342825LL;
	uint64_t x716 = UINT64_MAX;

    t159 = (((x713/x714)-x715)/x716);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x717 = 3;
	static volatile uint16_t x718 = 3U;
	volatile int8_t x719 = 1;
	static volatile int16_t x720 = INT16_MIN;

    t160 = (((x717/x718)-x719)/x720);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x725 = UINT32_MAX;
	int16_t x726 = -975;
	static int32_t x727 = 118861;
	volatile int8_t x728 = -9;

    t161 = (((x725/x726)-x727)/x728);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x731 = 1U;
	int8_t x732 = -1;
	volatile uint32_t t162 = 2725U;

    t162 = (((x729/x730)-x731)/x732);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x733 = INT64_MAX;
	uint64_t x734 = UINT64_MAX;
	int32_t x735 = -20;
	uint64_t x736 = 2038981186785564292LLU;
	volatile uint64_t t163 = 56822179LLU;

    t163 = (((x733/x734)-x735)/x736);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x741 = INT32_MIN;
	int16_t x742 = INT16_MAX;
	uint64_t x743 = 12LLU;
	uint32_t x744 = 8634U;
	volatile uint64_t t164 = 8329267911217549230LLU;

    t164 = (((x741/x742)-x743)/x744);

    if (t164 != 2136523520235057LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x746 = 3;
	uint16_t x747 = 1054U;
	int64_t t165 = 3070860722392LL;

    t165 = (((x745/x746)-x747)/x748);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x761 = UINT8_MAX;
	volatile int8_t x763 = -1;
	volatile int64_t x764 = 7919225LL;
	int64_t t166 = 3571151892407410LL;

    t166 = (((x761/x762)-x763)/x764);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x765 = 0;
	static int64_t x766 = -63598LL;
	static uint32_t x767 = UINT32_MAX;
	volatile uint32_t x768 = 186U;

    t167 = (((x765/x766)-x767)/x768);

    if (t167 != -23091222LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x769 = 28041U;
	int8_t x770 = INT8_MIN;
	int16_t x771 = 3;
	static uint64_t t168 = 339020428365LLU;

    t168 = (((x769/x770)-x771)/x772);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x773 = 230456566;
	int32_t x774 = -1;
	uint64_t x775 = UINT64_MAX;
	int64_t x776 = -262513328342694991LL;
	uint64_t t169 = 213254037119863304LLU;

    t169 = (((x773/x774)-x775)/x776);

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x777 = 15U;
	uint32_t x778 = UINT32_MAX;
	static volatile uint16_t x779 = UINT16_MAX;
	static int16_t x780 = 6;
	volatile uint32_t t170 = 62955U;

    t170 = (((x777/x778)-x779)/x780);

    if (t170 != 715816960U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x781 = 2489806650944918LL;
	volatile int16_t x783 = INT16_MIN;
	int64_t x784 = -1LL;

    t171 = (((x781/x782)-x783)/x784);

    if (t171 != -32768LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x785 = INT16_MAX;
	static uint32_t x786 = 3571U;
	static int16_t x787 = INT16_MIN;
	int64_t x788 = INT64_MAX;

    t172 = (((x785/x786)-x787)/x788);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x789 = 5U;
	static int32_t x790 = -62687;
	volatile int32_t x791 = INT32_MAX;
	static uint64_t x792 = 260544564114250LLU;
	uint64_t t173 = 12598372LLU;

    t173 = (((x789/x790)-x791)/x792);

    if (t173 != 70800LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x793 = INT32_MAX;
	int8_t x795 = INT8_MIN;
	static int64_t t174 = 1870240021LL;

    t174 = (((x793/x794)-x795)/x796);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x797 = INT8_MIN;
	volatile uint16_t x799 = UINT16_MAX;
	int16_t x800 = 19;
	static int32_t t175 = -2813885;

    t175 = (((x797/x798)-x799)/x800);

    if (t175 != -3449) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x802 = INT64_MAX;
	volatile uint8_t x804 = UINT8_MAX;
	volatile int64_t t176 = -417161836253LL;

    t176 = (((x801/x802)-x803)/x804);

    if (t176 != 8421504LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x805 = INT64_MIN;
	int8_t x806 = INT8_MAX;
	int8_t x807 = INT8_MIN;
	uint64_t t177 = 132810869LLU;

    t177 = (((x805/x806)-x807)/x808);

    if (t177 != 36LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x810 = INT64_MIN;
	volatile int32_t x811 = -14939800;
	uint16_t x812 = UINT16_MAX;
	int64_t t178 = -35083684293121826LL;

    t178 = (((x809/x810)-x811)/x812);

    if (t178 != 227LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x818 = 25U;
	static int8_t x819 = INT8_MIN;
	uint16_t x820 = UINT16_MAX;
	static volatile int32_t t179 = -175656712;

    t179 = (((x817/x818)-x819)/x820);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x821 = INT16_MIN;
	static uint8_t x822 = 1U;
	int32_t x824 = -1;
	volatile int32_t t180 = 11;

    t180 = (((x821/x822)-x823)/x824);

    if (t180 != 32768) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x825 = INT64_MAX;
	volatile uint32_t x826 = UINT32_MAX;
	volatile int8_t x827 = 0;
	int8_t x828 = INT8_MAX;

    t181 = (((x825/x826)-x827)/x828);

    if (t181 != 16909320LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x830 = 348;
	int64_t x831 = 52036201581LL;
	int16_t x832 = INT16_MAX;
	int64_t t182 = -5184453735306464LL;

    t182 = (((x829/x830)-x831)/x832);

    if (t182 != -1587878LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x837 = INT64_MIN;
	volatile int64_t x838 = INT64_MAX;
	int8_t x839 = -1;
	int64_t t183 = 248492187777087LL;

    t183 = (((x837/x838)-x839)/x840);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x841 = UINT64_MAX;
	volatile uint16_t x842 = 10155U;
	int16_t x843 = -1;
	uint64_t t184 = 1612628673LLU;

    t184 = (((x841/x842)-x843)/x844);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x849 = INT32_MAX;
	static int16_t x850 = 68;
	int64_t x851 = 82205682547LL;
	volatile int16_t x852 = INT16_MAX;
	volatile int64_t t185 = 15962691960LL;

    t185 = (((x849/x850)-x851)/x852);

    if (t185 != -2507831LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x853 = 261102669618313LLU;
	int16_t x854 = -3;
	int64_t x855 = INT64_MAX;
	volatile int32_t x856 = INT32_MIN;
	uint64_t t186 = 34350062792LLU;

    t186 = (((x853/x854)-x855)/x856);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x857 = INT16_MAX;
	volatile uint64_t x858 = 50837982055122LLU;
	static int64_t x859 = -1LL;
	static volatile uint64_t t187 = 6070428789827030LLU;

    t187 = (((x857/x858)-x859)/x860);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x861 = INT16_MIN;
	int16_t x862 = INT16_MIN;
	volatile int8_t x863 = INT8_MAX;
	volatile int32_t x864 = INT32_MIN;
	volatile int32_t t188 = -2479917;

    t188 = (((x861/x862)-x863)/x864);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x867 = 2U;
	int16_t x868 = INT16_MAX;
	volatile int64_t t189 = -5425LL;

    t189 = (((x865/x866)-x867)/x868);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x869 = INT8_MAX;
	uint16_t x870 = 5166U;
	static uint8_t x871 = UINT8_MAX;
	static volatile int16_t x872 = -8684;
	static volatile int32_t t190 = -192;

    t190 = (((x869/x870)-x871)/x872);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x873 = INT16_MAX;
	int32_t x874 = INT32_MAX;
	volatile int32_t x875 = 8478;
	int32_t t191 = -220;

    t191 = (((x873/x874)-x875)/x876);

    if (t191 != 66) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x877 = 120U;
	volatile uint64_t x878 = 22144878LLU;
	int32_t x879 = 528372166;
	int32_t x880 = INT32_MIN;
	uint64_t t192 = 290009942343LLU;

    t192 = (((x877/x878)-x879)/x880);

    if (t192 != 1LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x881 = -1LL;
	static volatile int16_t x883 = -14;
	uint8_t x884 = 29U;
	static volatile int64_t t193 = 0LL;

    t193 = (((x881/x882)-x883)/x884);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x885 = 393;
	static volatile uint64_t x886 = 16111LLU;
	volatile uint64_t x887 = 61896745594102789LLU;
	static volatile int16_t x888 = 2450;
	uint64_t t194 = 11LLU;

    t194 = (((x885/x886)-x887)/x888);

    if (t194 != 7504019317598142LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x890 = 35U;
	int32_t x891 = 24013;
	int32_t x892 = INT32_MIN;

    t195 = (((x889/x890)-x891)/x892);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x893 = 4;
	uint64_t x894 = 31242947349LLU;
	uint32_t x895 = 53174U;
	static volatile uint32_t x896 = UINT32_MAX;

    t196 = (((x893/x894)-x895)/x896);

    if (t196 != 4294967296LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x897 = -1;
	volatile int64_t x898 = 214675889614LL;
	uint32_t x899 = 3118972U;
	volatile int64_t t197 = -72LL;

    t197 = (((x897/x898)-x899)/x900);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x901 = INT64_MIN;
	static int8_t x902 = INT8_MAX;
	uint32_t x903 = 8U;
	volatile int16_t x904 = INT16_MAX;
	volatile int64_t t198 = 1046275013332666LL;

    t198 = (((x901/x902)-x903)/x904);

    if (t198 != -2216406038640LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x905 = INT64_MIN;
	int16_t x907 = INT16_MIN;
	volatile uint16_t x908 = UINT16_MAX;
	int64_t t199 = 5427069LL;

    t199 = (((x905/x906)-x907)/x908);

    if (t199 != -27859944LL) { NG(); } else { ; }
	
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

