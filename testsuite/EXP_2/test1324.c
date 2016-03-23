
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

volatile uint32_t x5 = 6U;
volatile int16_t x8 = INT16_MIN;
uint8_t x22 = UINT8_MAX;
int64_t x23 = INT64_MAX;
static int16_t x26 = INT16_MIN;
static volatile int16_t x27 = INT16_MIN;
uint64_t x40 = 438454LLU;
uint32_t x45 = UINT32_MAX;
uint32_t x47 = UINT32_MAX;
uint8_t x78 = UINT8_MAX;
volatile int32_t t9 = -4469625;
static volatile int64_t x94 = INT64_MAX;
int32_t x114 = 7107;
int16_t x115 = 34;
int32_t t13 = -312541137;
static int32_t x123 = INT32_MIN;
int16_t x135 = 1;
static uint32_t x152 = UINT32_MAX;
int32_t x153 = 115141;
volatile int32_t x156 = -1;
uint32_t x167 = UINT32_MAX;
static volatile int32_t t22 = -21352577;
static int16_t x172 = -1;
int64_t x179 = -1LL;
int32_t t26 = 110239;
volatile uint8_t x198 = 2U;
int32_t x200 = -1;
static uint64_t x205 = 18761LLU;
int32_t t29 = -1611;
int32_t t31 = 243;
static uint64_t x229 = UINT64_MAX;
int32_t x231 = INT32_MIN;
uint16_t x238 = UINT16_MAX;
int32_t t33 = -1047710;
uint32_t x257 = 174765248U;
int64_t x259 = -1LL;
volatile uint16_t x265 = UINT16_MAX;
uint64_t x267 = 8633278LLU;
int8_t x298 = INT8_MIN;
int64_t x300 = -1LL;
volatile int32_t t41 = 29;
uint64_t x310 = 115732LLU;
int32_t x311 = -15;
int8_t x312 = -1;
int32_t t42 = -3;
int64_t x315 = 1LL;
uint64_t x317 = 52892LLU;
int64_t x320 = -1LL;
uint32_t x327 = UINT32_MAX;
int32_t t45 = -73847425;
static int32_t x334 = INT32_MAX;
uint16_t x336 = 254U;
int32_t t47 = -21404472;
int64_t x343 = 35965371384356389LL;
int64_t x344 = 92LL;
int32_t t48 = 152;
volatile uint16_t x349 = UINT16_MAX;
volatile int8_t x357 = INT8_MAX;
int32_t t51 = 31927;
volatile int32_t t53 = -93803;
int8_t x377 = 0;
int64_t x379 = INT64_MAX;
uint32_t x383 = UINT32_MAX;
uint16_t x394 = UINT16_MAX;
volatile int32_t t56 = 3;
volatile int8_t x406 = -2;
uint64_t x420 = UINT64_MAX;
static int8_t x439 = INT8_MAX;
static volatile int8_t x454 = INT8_MIN;
int8_t x455 = 0;
volatile int32_t t62 = 1670;
int8_t x462 = 1;
volatile int64_t x464 = 66779702999631273LL;
int16_t x475 = -1;
uint32_t x476 = 355U;
static int32_t t64 = 301549715;
int16_t x478 = 809;
static int64_t x487 = -1LL;
volatile int32_t x488 = INT32_MIN;
uint32_t x497 = UINT32_MAX;
volatile int16_t x518 = -1;
static int8_t x520 = INT8_MIN;
uint64_t x527 = 21660194295614245LLU;
uint8_t x542 = 25U;
static volatile int16_t x543 = INT16_MIN;
static int16_t x544 = -1;
int64_t x563 = INT64_MIN;
int16_t x578 = INT16_MIN;
volatile int8_t x579 = INT8_MIN;
int32_t x584 = INT32_MIN;
int64_t x592 = 48192600796266623LL;
volatile int32_t t78 = 368444;
uint64_t x594 = UINT64_MAX;
uint16_t x605 = UINT16_MAX;
int8_t x608 = INT8_MAX;
int16_t x616 = -1;
int16_t x619 = -243;
int16_t x638 = 37;
uint8_t x639 = 9U;
int32_t x647 = INT32_MIN;
int32_t t91 = -25363;
int32_t x671 = INT32_MIN;
volatile int64_t x687 = INT64_MIN;
static int16_t x704 = -1;
static volatile int32_t t98 = -141642;
static int8_t x711 = INT8_MIN;
int32_t x712 = INT32_MAX;
volatile int32_t t99 = -506;
volatile int64_t x715 = INT64_MIN;
uint32_t x733 = 1358321U;
volatile int32_t x743 = INT32_MIN;
uint8_t x753 = 13U;
static volatile int8_t x755 = INT8_MAX;
uint8_t x759 = 0U;
volatile int32_t t105 = -58288029;
uint32_t x769 = 10343U;
int32_t t108 = -217860;
uint16_t x773 = 2237U;
int16_t x776 = -1;
static uint64_t x793 = UINT64_MAX;
volatile uint32_t x794 = 122U;
volatile int32_t x799 = INT32_MIN;
static uint8_t x816 = 0U;
volatile uint16_t x825 = 0U;
uint16_t x827 = 421U;
uint16_t x828 = UINT16_MAX;
volatile int8_t x840 = INT8_MIN;
static volatile int32_t t119 = 245045749;
uint8_t x846 = 40U;
uint64_t x857 = 6266766453612LLU;
static uint8_t x869 = UINT8_MAX;
int64_t x882 = 20651LL;
static volatile int32_t t125 = -1;
int32_t t126 = 1375268;
int64_t x889 = 42727LL;
int32_t x903 = INT32_MIN;
uint64_t x904 = 53082862LLU;
static uint64_t x916 = 403830635295153LLU;
int64_t x917 = 397461229119154171LL;
int64_t x919 = INT64_MIN;
uint8_t x920 = 15U;
volatile uint64_t x936 = 111415LLU;
uint16_t x941 = 50U;
int16_t x984 = INT16_MAX;
static volatile int32_t t137 = -12;
int32_t t138 = 6;
static volatile int32_t t140 = -1418;
int16_t x1030 = -15;
static int8_t x1031 = -12;
int32_t x1032 = INT32_MIN;
static int16_t x1042 = -1;
int8_t x1052 = INT8_MIN;
int32_t x1054 = INT32_MIN;
static uint32_t x1056 = UINT32_MAX;
volatile int32_t t149 = -479;
int32_t x1106 = -1;
volatile uint8_t x1121 = 1U;
int16_t x1122 = INT16_MIN;
int32_t x1135 = INT32_MIN;
static uint8_t x1169 = UINT8_MAX;
volatile int32_t t159 = -114;
uint64_t x1178 = 13550127935040868LLU;
volatile uint16_t x1179 = UINT16_MAX;
int32_t t160 = -2589;
static uint8_t x1190 = UINT8_MAX;
volatile uint16_t x1200 = 23693U;
int8_t x1224 = -1;
static int32_t t167 = -15435129;
static volatile int16_t x1243 = INT16_MIN;
volatile int32_t t169 = 201722352;
volatile int32_t t171 = 1951;
uint8_t x1277 = UINT8_MAX;
uint8_t x1279 = 54U;
volatile int64_t x1283 = 235494737948LL;
int8_t x1284 = -7;
int8_t x1287 = 1;
int8_t x1290 = INT8_MAX;
static uint32_t x1293 = 356937U;
int16_t x1296 = -8060;
int32_t x1300 = INT32_MAX;
volatile int32_t t177 = -365;
int8_t x1301 = 0;
uint16_t x1329 = 173U;
uint64_t x1343 = 3166236LLU;
int32_t t182 = -95;
int8_t x1350 = 8;
uint8_t x1355 = 1U;
volatile int8_t x1360 = INT8_MAX;
volatile int8_t x1363 = -1;
static volatile int32_t t187 = -662730654;
static uint8_t x1369 = 2U;
uint64_t x1386 = 143LLU;
int16_t x1393 = 203;
uint64_t x1397 = UINT64_MAX;
int32_t x1405 = 7217976;
uint64_t x1417 = UINT64_MAX;
int64_t x1419 = INT64_MIN;
int8_t x1425 = 0;


void f0(void) {
    	int32_t x6 = INT32_MAX;
	int16_t x7 = INT16_MIN;
	static int32_t t0 = 51327052;

    t0 = ((x5>>(x6!=x7))==x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x13 = 15U;
	static int8_t x14 = 0;
	int64_t x15 = -2244LL;
	volatile int16_t x16 = INT16_MIN;
	volatile int32_t t1 = -91148;

    t1 = ((x13>>(x14!=x15))==x16);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x21 = 1003222008LL;
	uint16_t x24 = 92U;
	int32_t t2 = 107;

    t2 = ((x21>>(x22!=x23))==x24);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x25 = UINT64_MAX;
	uint64_t x28 = 2063062LLU;
	int32_t t3 = 46629;

    t3 = ((x25>>(x26!=x27))==x28);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x33 = INT32_MAX;
	int16_t x34 = 2;
	uint32_t x35 = 60147476U;
	int32_t x36 = INT32_MIN;
	static volatile int32_t t4 = 160;

    t4 = ((x33>>(x34!=x35))==x36);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x37 = UINT64_MAX;
	static uint16_t x38 = 1801U;
	int64_t x39 = INT64_MIN;
	volatile int32_t t5 = 24818498;

    t5 = ((x37>>(x38!=x39))==x40);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x46 = 1;
	uint32_t x48 = UINT32_MAX;
	int32_t t6 = 2463199;

    t6 = ((x45>>(x46!=x47))==x48);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x65 = 63592481U;
	int16_t x66 = -1;
	uint8_t x67 = 0U;
	static int64_t x68 = -32436496LL;
	volatile int32_t t7 = -191;

    t7 = ((x65>>(x66!=x67))==x68);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x69 = 75U;
	volatile int64_t x70 = 1257LL;
	uint32_t x71 = 731413U;
	uint64_t x72 = 118659573663828LLU;
	static int32_t t8 = 17;

    t8 = ((x69>>(x70!=x71))==x72);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x77 = UINT32_MAX;
	static volatile uint32_t x79 = UINT32_MAX;
	int16_t x80 = -1;

    t9 = ((x77>>(x78!=x79))==x80);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x89 = UINT8_MAX;
	int8_t x90 = INT8_MIN;
	uint32_t x91 = 1716169995U;
	uint16_t x92 = 20U;
	volatile int32_t t10 = 1;

    t10 = ((x89>>(x90!=x91))==x92);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x93 = 123U;
	int64_t x95 = -1LL;
	volatile uint64_t x96 = UINT64_MAX;
	int32_t t11 = 11117;

    t11 = ((x93>>(x94!=x95))==x96);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x101 = 37U;
	volatile uint16_t x102 = 4U;
	uint64_t x103 = UINT64_MAX;
	volatile int8_t x104 = 0;
	int32_t t12 = -1;

    t12 = ((x101>>(x102!=x103))==x104);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x113 = 305675361470079859LLU;
	static volatile uint8_t x116 = 57U;

    t13 = ((x113>>(x114!=x115))==x116);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x121 = 5022;
	int8_t x122 = -1;
	uint32_t x124 = 599476196U;
	volatile int32_t t14 = 50368996;

    t14 = ((x121>>(x122!=x123))==x124);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x125 = INT32_MAX;
	int8_t x126 = -1;
	int16_t x127 = INT16_MIN;
	static int64_t x128 = -1820647512690LL;
	volatile int32_t t15 = 5351281;

    t15 = ((x125>>(x126!=x127))==x128);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x133 = INT16_MAX;
	int16_t x134 = -1;
	static int32_t x136 = -780;
	volatile int32_t t16 = 26;

    t16 = ((x133>>(x134!=x135))==x136);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x137 = 97U;
	int16_t x138 = 6;
	int32_t x139 = -1;
	int16_t x140 = -8720;
	volatile int32_t t17 = -26232925;

    t17 = ((x137>>(x138!=x139))==x140);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x145 = 18493444LLU;
	uint64_t x146 = UINT64_MAX;
	int32_t x147 = INT32_MAX;
	int32_t x148 = -2;
	int32_t t18 = 144573;

    t18 = ((x145>>(x146!=x147))==x148);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x149 = UINT16_MAX;
	int16_t x150 = -1;
	static int64_t x151 = -1LL;
	int32_t t19 = 27470;

    t19 = ((x149>>(x150!=x151))==x152);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x154 = -1;
	int8_t x155 = INT8_MIN;
	volatile int32_t t20 = -4919824;

    t20 = ((x153>>(x154!=x155))==x156);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x161 = 16U;
	uint8_t x162 = 121U;
	uint8_t x163 = 1U;
	volatile uint64_t x164 = UINT64_MAX;
	static int32_t t21 = 3541865;

    t21 = ((x161>>(x162!=x163))==x164);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x165 = 0;
	uint32_t x166 = UINT32_MAX;
	int16_t x168 = 198;

    t22 = ((x165>>(x166!=x167))==x168);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x169 = INT32_MAX;
	int32_t x170 = 177389;
	int16_t x171 = -342;
	int32_t t23 = -92;

    t23 = ((x169>>(x170!=x171))==x172);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x177 = 915LLU;
	static int32_t x178 = INT32_MAX;
	volatile int8_t x180 = INT8_MIN;
	int32_t t24 = 1900;

    t24 = ((x177>>(x178!=x179))==x180);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x181 = 254604U;
	static int64_t x182 = -1LL;
	int16_t x183 = INT16_MIN;
	int16_t x184 = INT16_MAX;
	volatile int32_t t25 = -421;

    t25 = ((x181>>(x182!=x183))==x184);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x185 = INT32_MAX;
	int8_t x186 = INT8_MAX;
	static int32_t x187 = -1064;
	uint32_t x188 = 3025U;

    t26 = ((x185>>(x186!=x187))==x188);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x197 = 0U;
	static int8_t x199 = -1;
	int32_t t27 = 16;

    t27 = ((x197>>(x198!=x199))==x200);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x201 = 23133LLU;
	volatile uint32_t x202 = UINT32_MAX;
	static int8_t x203 = INT8_MIN;
	volatile uint8_t x204 = UINT8_MAX;
	int32_t t28 = 0;

    t28 = ((x201>>(x202!=x203))==x204);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x206 = 21642U;
	static volatile int64_t x207 = INT64_MIN;
	volatile int32_t x208 = INT32_MIN;

    t29 = ((x205>>(x206!=x207))==x208);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x213 = 167LLU;
	volatile int32_t x214 = INT32_MAX;
	int32_t x215 = 3968688;
	int64_t x216 = INT64_MIN;
	int32_t t30 = 4;

    t30 = ((x213>>(x214!=x215))==x216);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x221 = 32303869657810LLU;
	static int32_t x222 = INT32_MIN;
	volatile int16_t x223 = -11386;
	uint16_t x224 = 5059U;

    t31 = ((x221>>(x222!=x223))==x224);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x230 = -3;
	int32_t x232 = INT32_MIN;
	volatile int32_t t32 = 1888;

    t32 = ((x229>>(x230!=x231))==x232);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint8_t x237 = 0U;
	uint64_t x239 = UINT64_MAX;
	int8_t x240 = 0;

    t33 = ((x237>>(x238!=x239))==x240);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x249 = 12446U;
	static int32_t x250 = 511;
	volatile int64_t x251 = -26056983675110LL;
	int64_t x252 = 995653463616473LL;
	int32_t t34 = -976592849;

    t34 = ((x249>>(x250!=x251))==x252);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x258 = 5681248752465171LLU;
	int32_t x260 = INT32_MIN;
	static int32_t t35 = -192458833;

    t35 = ((x257>>(x258!=x259))==x260);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int64_t x266 = INT64_MAX;
	static int32_t x268 = -244;
	volatile int32_t t36 = -45;

    t36 = ((x265>>(x266!=x267))==x268);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x269 = INT16_MAX;
	uint8_t x270 = 1U;
	static int32_t x271 = INT32_MIN;
	uint64_t x272 = UINT64_MAX;
	volatile int32_t t37 = -2;

    t37 = ((x269>>(x270!=x271))==x272);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x281 = 1881525296394LL;
	int8_t x282 = 0;
	uint16_t x283 = UINT16_MAX;
	static volatile int8_t x284 = INT8_MIN;
	static volatile int32_t t38 = -4;

    t38 = ((x281>>(x282!=x283))==x284);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x289 = 54046LL;
	int16_t x290 = INT16_MIN;
	static uint8_t x291 = UINT8_MAX;
	int64_t x292 = -1LL;
	static int32_t t39 = -54;

    t39 = ((x289>>(x290!=x291))==x292);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x293 = INT64_MAX;
	uint64_t x294 = UINT64_MAX;
	int8_t x295 = -1;
	int16_t x296 = INT16_MIN;
	volatile int32_t t40 = -1108;

    t40 = ((x293>>(x294!=x295))==x296);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x297 = 3585865765LL;
	uint8_t x299 = 5U;

    t41 = ((x297>>(x298!=x299))==x300);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x309 = 1;

    t42 = ((x309>>(x310!=x311))==x312);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x313 = 1;
	int32_t x314 = INT32_MIN;
	uint8_t x316 = 2U;
	int32_t t43 = 23;

    t43 = ((x313>>(x314!=x315))==x316);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x318 = 380U;
	static int64_t x319 = INT64_MIN;
	volatile int32_t t44 = 521;

    t44 = ((x317>>(x318!=x319))==x320);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x325 = 587485526U;
	uint64_t x326 = 998715LLU;
	int32_t x328 = -1;

    t45 = ((x325>>(x326!=x327))==x328);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x329 = 55U;
	static int16_t x330 = INT16_MAX;
	int32_t x331 = INT32_MIN;
	static int64_t x332 = -1LL;
	volatile int32_t t46 = 781;

    t46 = ((x329>>(x330!=x331))==x332);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x333 = 2201;
	static int32_t x335 = -4;

    t47 = ((x333>>(x334!=x335))==x336);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x341 = 1U;
	int64_t x342 = -1LL;

    t48 = ((x341>>(x342!=x343))==x344);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x350 = 10U;
	uint16_t x351 = 35U;
	uint32_t x352 = UINT32_MAX;
	static int32_t t49 = -3498107;

    t49 = ((x349>>(x350!=x351))==x352);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x353 = 42572694U;
	static int16_t x354 = -1483;
	int64_t x355 = -6365432LL;
	int8_t x356 = INT8_MIN;
	volatile int32_t t50 = 581640302;

    t50 = ((x353>>(x354!=x355))==x356);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x358 = INT64_MAX;
	static uint32_t x359 = 4299676U;
	int16_t x360 = -1;

    t51 = ((x357>>(x358!=x359))==x360);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x369 = INT64_MAX;
	volatile int32_t x370 = INT32_MIN;
	int64_t x371 = -7933LL;
	int64_t x372 = INT64_MIN;
	static volatile int32_t t52 = 559552875;

    t52 = ((x369>>(x370!=x371))==x372);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x373 = 173;
	int16_t x374 = INT16_MIN;
	static volatile int8_t x375 = INT8_MAX;
	int32_t x376 = -31875;

    t53 = ((x373>>(x374!=x375))==x376);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x378 = INT16_MIN;
	int8_t x380 = INT8_MIN;
	static int32_t t54 = -1557;

    t54 = ((x377>>(x378!=x379))==x380);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x381 = 6U;
	uint16_t x382 = UINT16_MAX;
	static volatile int64_t x384 = INT64_MIN;
	int32_t t55 = 10581120;

    t55 = ((x381>>(x382!=x383))==x384);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x393 = 10032U;
	int16_t x395 = -1;
	int64_t x396 = INT64_MIN;

    t56 = ((x393>>(x394!=x395))==x396);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x405 = 63;
	int16_t x407 = INT16_MIN;
	uint16_t x408 = 13U;
	int32_t t57 = -654;

    t57 = ((x405>>(x406!=x407))==x408);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x417 = INT8_MAX;
	int16_t x418 = INT16_MIN;
	static int16_t x419 = -678;
	int32_t t58 = -727;

    t58 = ((x417>>(x418!=x419))==x420);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x425 = 45846118318441LLU;
	int8_t x426 = INT8_MIN;
	int32_t x427 = -154506;
	int8_t x428 = -1;
	int32_t t59 = -19522;

    t59 = ((x425>>(x426!=x427))==x428);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x429 = 9U;
	int64_t x430 = INT64_MIN;
	uint32_t x431 = UINT32_MAX;
	volatile int8_t x432 = -1;
	volatile int32_t t60 = 20;

    t60 = ((x429>>(x430!=x431))==x432);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x437 = 31589U;
	volatile uint8_t x438 = 5U;
	int8_t x440 = INT8_MIN;
	int32_t t61 = 3;

    t61 = ((x437>>(x438!=x439))==x440);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x453 = 801U;
	volatile int16_t x456 = INT16_MIN;

    t62 = ((x453>>(x454!=x455))==x456);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x461 = 0U;
	volatile int8_t x463 = INT8_MIN;
	volatile int32_t t63 = 674000293;

    t63 = ((x461>>(x462!=x463))==x464);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x473 = UINT8_MAX;
	volatile uint8_t x474 = UINT8_MAX;

    t64 = ((x473>>(x474!=x475))==x476);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x477 = UINT64_MAX;
	int8_t x479 = -1;
	uint16_t x480 = 9U;
	static volatile int32_t t65 = -14;

    t65 = ((x477>>(x478!=x479))==x480);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x485 = 1LL;
	volatile uint64_t x486 = 16361994784950313LLU;
	volatile int32_t t66 = -97988786;

    t66 = ((x485>>(x486!=x487))==x488);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x498 = 7U;
	uint64_t x499 = UINT64_MAX;
	int8_t x500 = -1;
	static volatile int32_t t67 = -23006;

    t67 = ((x497>>(x498!=x499))==x500);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x505 = 220;
	uint16_t x506 = UINT16_MAX;
	int64_t x507 = INT64_MIN;
	volatile uint16_t x508 = 125U;
	volatile int32_t t68 = 523053754;

    t68 = ((x505>>(x506!=x507))==x508);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x517 = 20U;
	int32_t x519 = -1;
	int32_t t69 = 3709126;

    t69 = ((x517>>(x518!=x519))==x520);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x525 = INT16_MAX;
	uint8_t x526 = UINT8_MAX;
	volatile uint32_t x528 = 171547U;
	int32_t t70 = -299;

    t70 = ((x525>>(x526!=x527))==x528);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x537 = 17U;
	int32_t x538 = INT32_MIN;
	volatile uint16_t x539 = UINT16_MAX;
	volatile int64_t x540 = -15720502983583573LL;
	volatile int32_t t71 = 0;

    t71 = ((x537>>(x538!=x539))==x540);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x541 = 0U;
	volatile int32_t t72 = -112191;

    t72 = ((x541>>(x542!=x543))==x544);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x561 = 433U;
	int32_t x562 = INT32_MIN;
	int16_t x564 = INT16_MIN;
	volatile int32_t t73 = 0;

    t73 = ((x561>>(x562!=x563))==x564);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x565 = 103LL;
	volatile int64_t x566 = 32262055LL;
	int64_t x567 = INT64_MIN;
	uint16_t x568 = 2391U;
	static volatile int32_t t74 = -4;

    t74 = ((x565>>(x566!=x567))==x568);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x573 = 1990867141222770903LLU;
	static int32_t x574 = -129421;
	int64_t x575 = INT64_MIN;
	int16_t x576 = -1;
	static volatile int32_t t75 = -738642;

    t75 = ((x573>>(x574!=x575))==x576);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x577 = 44;
	static uint8_t x580 = UINT8_MAX;
	int32_t t76 = -3315165;

    t76 = ((x577>>(x578!=x579))==x580);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x581 = 8U;
	int64_t x582 = -1LL;
	volatile int8_t x583 = INT8_MAX;
	volatile int32_t t77 = 3;

    t77 = ((x581>>(x582!=x583))==x584);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x589 = 5LLU;
	volatile int64_t x590 = -596LL;
	uint16_t x591 = 30849U;

    t78 = ((x589>>(x590!=x591))==x592);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x593 = 204118;
	int64_t x595 = INT64_MAX;
	volatile int64_t x596 = INT64_MIN;
	int32_t t79 = 246;

    t79 = ((x593>>(x594!=x595))==x596);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x597 = INT16_MAX;
	static int64_t x598 = INT64_MAX;
	uint8_t x599 = 112U;
	int64_t x600 = 198096794LL;
	volatile int32_t t80 = -1249;

    t80 = ((x597>>(x598!=x599))==x600);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x606 = UINT8_MAX;
	uint64_t x607 = UINT64_MAX;
	int32_t t81 = 10;

    t81 = ((x605>>(x606!=x607))==x608);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x613 = 126U;
	uint16_t x614 = 1U;
	static int64_t x615 = -1LL;
	int32_t t82 = 642157;

    t82 = ((x613>>(x614!=x615))==x616);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x617 = 69LLU;
	int16_t x618 = INT16_MIN;
	static int64_t x620 = 63319718246975LL;
	static int32_t t83 = -8101123;

    t83 = ((x617>>(x618!=x619))==x620);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint64_t x621 = UINT64_MAX;
	int16_t x622 = -1;
	static int32_t x623 = -1;
	int64_t x624 = -1LL;
	int32_t t84 = 4131;

    t84 = ((x621>>(x622!=x623))==x624);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x625 = 48U;
	int64_t x626 = INT64_MAX;
	int32_t x627 = -1;
	static int16_t x628 = INT16_MIN;
	int32_t t85 = -1181;

    t85 = ((x625>>(x626!=x627))==x628);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x629 = 1;
	volatile int8_t x630 = INT8_MIN;
	int32_t x631 = -64;
	int8_t x632 = 0;
	static int32_t t86 = 6;

    t86 = ((x629>>(x630!=x631))==x632);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x633 = UINT64_MAX;
	uint32_t x634 = UINT32_MAX;
	int32_t x635 = INT32_MIN;
	uint8_t x636 = 22U;
	int32_t t87 = -199383497;

    t87 = ((x633>>(x634!=x635))==x636);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x637 = UINT8_MAX;
	int32_t x640 = 9640365;
	static int32_t t88 = 146;

    t88 = ((x637>>(x638!=x639))==x640);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x641 = UINT64_MAX;
	int16_t x642 = INT16_MIN;
	int32_t x643 = INT32_MIN;
	volatile int64_t x644 = -1832196751029400LL;
	static volatile int32_t t89 = -263204;

    t89 = ((x641>>(x642!=x643))==x644);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x645 = 123231932986212429LLU;
	uint32_t x646 = UINT32_MAX;
	uint64_t x648 = 3797371151756623LLU;
	int32_t t90 = 6;

    t90 = ((x645>>(x646!=x647))==x648);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x657 = 16493U;
	uint8_t x658 = UINT8_MAX;
	int16_t x659 = INT16_MAX;
	static uint64_t x660 = UINT64_MAX;

    t91 = ((x657>>(x658!=x659))==x660);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x661 = UINT16_MAX;
	volatile int64_t x662 = -68973362LL;
	int32_t x663 = 17492774;
	static int32_t x664 = INT32_MIN;
	int32_t t92 = -8208;

    t92 = ((x661>>(x662!=x663))==x664);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x665 = UINT8_MAX;
	volatile int8_t x666 = INT8_MIN;
	volatile uint32_t x667 = 41036U;
	int8_t x668 = INT8_MAX;
	static volatile int32_t t93 = -56;

    t93 = ((x665>>(x666!=x667))==x668);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x669 = 3320789LL;
	volatile int32_t x670 = INT32_MIN;
	static int64_t x672 = -32656172781814LL;
	static int32_t t94 = 168937994;

    t94 = ((x669>>(x670!=x671))==x672);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x681 = 183U;
	uint8_t x682 = UINT8_MAX;
	int16_t x683 = INT16_MAX;
	volatile int8_t x684 = INT8_MIN;
	int32_t t95 = 995;

    t95 = ((x681>>(x682!=x683))==x684);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x685 = INT32_MAX;
	volatile uint16_t x686 = 6U;
	static int8_t x688 = -1;
	volatile int32_t t96 = -1;

    t96 = ((x685>>(x686!=x687))==x688);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x701 = UINT32_MAX;
	int16_t x702 = 385;
	uint32_t x703 = 204626U;
	int32_t t97 = -18753630;

    t97 = ((x701>>(x702!=x703))==x704);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x705 = 6;
	int32_t x706 = INT32_MIN;
	uint8_t x707 = UINT8_MAX;
	uint16_t x708 = 31903U;

    t98 = ((x705>>(x706!=x707))==x708);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x709 = INT32_MAX;
	volatile int8_t x710 = INT8_MAX;

    t99 = ((x709>>(x710!=x711))==x712);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x713 = UINT16_MAX;
	int16_t x714 = -14;
	uint16_t x716 = 27665U;
	volatile int32_t t100 = -653606575;

    t100 = ((x713>>(x714!=x715))==x716);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x721 = 8453536554726058LLU;
	int64_t x722 = -2995709036808196LL;
	int32_t x723 = INT32_MIN;
	volatile uint64_t x724 = 845217580919568LLU;
	int32_t t101 = -10;

    t101 = ((x721>>(x722!=x723))==x724);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x734 = 13U;
	int32_t x735 = -335011;
	static int64_t x736 = -1LL;
	int32_t t102 = -1;

    t102 = ((x733>>(x734!=x735))==x736);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x741 = 96680938;
	static int8_t x742 = INT8_MIN;
	int64_t x744 = -1LL;
	static int32_t t103 = 76;

    t103 = ((x741>>(x742!=x743))==x744);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint16_t x754 = 10463U;
	uint8_t x756 = 86U;
	volatile int32_t t104 = -77;

    t104 = ((x753>>(x754!=x755))==x756);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x757 = 12279U;
	static volatile uint8_t x758 = UINT8_MAX;
	uint32_t x760 = UINT32_MAX;

    t105 = ((x757>>(x758!=x759))==x760);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x761 = 1873787412LLU;
	static int32_t x762 = INT32_MIN;
	int64_t x763 = INT64_MIN;
	int32_t x764 = 200;
	int32_t t106 = -1118;

    t106 = ((x761>>(x762!=x763))==x764);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x765 = 12U;
	int32_t x766 = INT32_MIN;
	int8_t x767 = -1;
	int64_t x768 = -1LL;
	static volatile int32_t t107 = -8464;

    t107 = ((x765>>(x766!=x767))==x768);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x770 = 13U;
	volatile int16_t x771 = INT16_MAX;
	int32_t x772 = INT32_MIN;

    t108 = ((x769>>(x770!=x771))==x772);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x774 = INT8_MIN;
	int16_t x775 = INT16_MIN;
	int32_t t109 = 4;

    t109 = ((x773>>(x774!=x775))==x776);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x781 = 369199794LLU;
	static int64_t x782 = INT64_MAX;
	volatile int32_t x783 = INT32_MIN;
	static int64_t x784 = INT64_MIN;
	int32_t t110 = 26155;

    t110 = ((x781>>(x782!=x783))==x784);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x795 = 13U;
	int16_t x796 = -1;
	int32_t t111 = -1382;

    t111 = ((x793>>(x794!=x795))==x796);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x797 = UINT16_MAX;
	uint32_t x798 = 2976579U;
	uint16_t x800 = 508U;
	int32_t t112 = -116109790;

    t112 = ((x797>>(x798!=x799))==x800);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x801 = 74397131U;
	int8_t x802 = -1;
	uint8_t x803 = 2U;
	int32_t x804 = INT32_MIN;
	static volatile int32_t t113 = 701456;

    t113 = ((x801>>(x802!=x803))==x804);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x805 = INT32_MAX;
	static uint32_t x806 = 9U;
	int8_t x807 = -1;
	int64_t x808 = INT64_MAX;
	volatile int32_t t114 = -719303;

    t114 = ((x805>>(x806!=x807))==x808);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x813 = 1012;
	int32_t x814 = INT32_MIN;
	static int64_t x815 = INT64_MIN;
	int32_t t115 = 1;

    t115 = ((x813>>(x814!=x815))==x816);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x817 = INT16_MAX;
	int64_t x818 = -1LL;
	int8_t x819 = 3;
	uint16_t x820 = 27U;
	int32_t t116 = -30584202;

    t116 = ((x817>>(x818!=x819))==x820);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x826 = INT8_MIN;
	static volatile int32_t t117 = -52750067;

    t117 = ((x825>>(x826!=x827))==x828);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x829 = 57300355861653LLU;
	int8_t x830 = 11;
	static int64_t x831 = 35LL;
	static int8_t x832 = INT8_MIN;
	int32_t t118 = -742895;

    t118 = ((x829>>(x830!=x831))==x832);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x837 = 53U;
	volatile int32_t x838 = 10614899;
	int32_t x839 = INT32_MIN;

    t119 = ((x837>>(x838!=x839))==x840);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x841 = 557666931095LLU;
	uint16_t x842 = 26U;
	static uint32_t x843 = UINT32_MAX;
	int16_t x844 = INT16_MAX;
	int32_t t120 = 5879;

    t120 = ((x841>>(x842!=x843))==x844);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x845 = INT64_MAX;
	static int8_t x847 = 0;
	static int32_t x848 = -446874;
	volatile int32_t t121 = 3463176;

    t121 = ((x845>>(x846!=x847))==x848);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x853 = 6185744323771LLU;
	uint8_t x854 = UINT8_MAX;
	volatile int32_t x855 = -30649;
	volatile uint64_t x856 = 45951LLU;
	volatile int32_t t122 = 1530008;

    t122 = ((x853>>(x854!=x855))==x856);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x858 = 11;
	static volatile int64_t x859 = -1LL;
	static int32_t x860 = INT32_MIN;
	volatile int32_t t123 = 1907;

    t123 = ((x857>>(x858!=x859))==x860);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x870 = UINT16_MAX;
	int32_t x871 = INT32_MIN;
	uint8_t x872 = 6U;
	volatile int32_t t124 = -589593;

    t124 = ((x869>>(x870!=x871))==x872);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x881 = 1;
	static int32_t x883 = INT32_MIN;
	volatile uint16_t x884 = 0U;

    t125 = ((x881>>(x882!=x883))==x884);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x885 = 996U;
	static int16_t x886 = INT16_MAX;
	uint16_t x887 = UINT16_MAX;
	int64_t x888 = 2088959186LL;

    t126 = ((x885>>(x886!=x887))==x888);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x890 = -55;
	volatile int8_t x891 = INT8_MIN;
	static int64_t x892 = -1LL;
	volatile int32_t t127 = 3289;

    t127 = ((x889>>(x890!=x891))==x892);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x897 = 53914251436844LLU;
	uint32_t x898 = UINT32_MAX;
	int64_t x899 = 21614828684LL;
	uint32_t x900 = 4265U;
	int32_t t128 = -2427288;

    t128 = ((x897>>(x898!=x899))==x900);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x901 = 122292410753371386LLU;
	static int64_t x902 = INT64_MIN;
	static volatile int32_t t129 = -209348;

    t129 = ((x901>>(x902!=x903))==x904);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x913 = UINT64_MAX;
	int64_t x914 = INT64_MIN;
	int8_t x915 = 11;
	int32_t t130 = 216;

    t130 = ((x913>>(x914!=x915))==x916);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x918 = 5;
	static int32_t t131 = -1155;

    t131 = ((x917>>(x918!=x919))==x920);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x933 = UINT32_MAX;
	static uint8_t x934 = 0U;
	uint64_t x935 = UINT64_MAX;
	static int32_t t132 = -44104;

    t132 = ((x933>>(x934!=x935))==x936);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x942 = INT32_MIN;
	int32_t x943 = -1;
	static int64_t x944 = -15128150510137419LL;
	int32_t t133 = -1829745;

    t133 = ((x941>>(x942!=x943))==x944);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x953 = UINT16_MAX;
	static uint64_t x954 = 2288664700LLU;
	int64_t x955 = INT64_MAX;
	int8_t x956 = INT8_MAX;
	volatile int32_t t134 = -8691;

    t134 = ((x953>>(x954!=x955))==x956);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x969 = 41U;
	static volatile int32_t x970 = -1;
	int64_t x971 = INT64_MIN;
	uint64_t x972 = 221072256LLU;
	static int32_t t135 = -32773050;

    t135 = ((x969>>(x970!=x971))==x972);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x981 = INT16_MAX;
	int8_t x982 = INT8_MIN;
	int32_t x983 = INT32_MIN;
	int32_t t136 = 64580509;

    t136 = ((x981>>(x982!=x983))==x984);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x993 = INT32_MAX;
	int32_t x994 = -1;
	uint32_t x995 = 77U;
	int16_t x996 = 57;

    t137 = ((x993>>(x994!=x995))==x996);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x1001 = UINT16_MAX;
	uint64_t x1002 = 748586LLU;
	volatile uint32_t x1003 = UINT32_MAX;
	int64_t x1004 = INT64_MIN;

    t138 = ((x1001>>(x1002!=x1003))==x1004);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x1005 = UINT32_MAX;
	static uint16_t x1006 = 396U;
	int16_t x1007 = INT16_MIN;
	volatile uint32_t x1008 = 370U;
	volatile int32_t t139 = -428680;

    t139 = ((x1005>>(x1006!=x1007))==x1008);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x1025 = 30972U;
	int64_t x1026 = 23272308121LL;
	int8_t x1027 = 8;
	uint8_t x1028 = 0U;

    t140 = ((x1025>>(x1026!=x1027))==x1028);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1029 = 0;
	volatile int32_t t141 = 4699;

    t141 = ((x1029>>(x1030!=x1031))==x1032);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x1033 = 281083220U;
	int16_t x1034 = -1;
	volatile int32_t x1035 = 1;
	int64_t x1036 = -1LL;
	int32_t t142 = -2742381;

    t142 = ((x1033>>(x1034!=x1035))==x1036);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x1041 = 104U;
	int64_t x1043 = 550799654381434959LL;
	uint8_t x1044 = UINT8_MAX;
	int32_t t143 = 974152;

    t143 = ((x1041>>(x1042!=x1043))==x1044);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1049 = 4;
	static volatile int64_t x1050 = INT64_MIN;
	uint64_t x1051 = 458183LLU;
	int32_t t144 = 2861;

    t144 = ((x1049>>(x1050!=x1051))==x1052);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1053 = INT8_MAX;
	uint8_t x1055 = UINT8_MAX;
	volatile int32_t t145 = 13754;

    t145 = ((x1053>>(x1054!=x1055))==x1056);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1057 = 10134U;
	int32_t x1058 = INT32_MIN;
	int8_t x1059 = INT8_MIN;
	int16_t x1060 = INT16_MIN;
	int32_t t146 = -93706091;

    t146 = ((x1057>>(x1058!=x1059))==x1060);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x1061 = INT8_MAX;
	static int64_t x1062 = -574839557LL;
	int16_t x1063 = INT16_MIN;
	int32_t x1064 = 41808987;
	volatile int32_t t147 = 1;

    t147 = ((x1061>>(x1062!=x1063))==x1064);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x1077 = UINT32_MAX;
	int64_t x1078 = 1LL;
	volatile uint8_t x1079 = 20U;
	volatile int8_t x1080 = 5;
	volatile int32_t t148 = 5;

    t148 = ((x1077>>(x1078!=x1079))==x1080);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1101 = INT64_MAX;
	uint64_t x1102 = 2774544702LLU;
	static int32_t x1103 = -1;
	int64_t x1104 = 987719904600695457LL;

    t149 = ((x1101>>(x1102!=x1103))==x1104);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x1105 = INT32_MAX;
	uint16_t x1107 = UINT16_MAX;
	int8_t x1108 = 13;
	int32_t t150 = -6965;

    t150 = ((x1105>>(x1106!=x1107))==x1108);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x1109 = INT32_MAX;
	int16_t x1110 = INT16_MIN;
	static uint64_t x1111 = UINT64_MAX;
	uint8_t x1112 = UINT8_MAX;
	int32_t t151 = -427971957;

    t151 = ((x1109>>(x1110!=x1111))==x1112);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x1113 = INT64_MAX;
	volatile int8_t x1114 = 5;
	uint16_t x1115 = 1406U;
	int32_t x1116 = INT32_MIN;
	static int32_t t152 = 288931;

    t152 = ((x1113>>(x1114!=x1115))==x1116);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x1123 = INT32_MIN;
	static uint16_t x1124 = 484U;
	int32_t t153 = 13162104;

    t153 = ((x1121>>(x1122!=x1123))==x1124);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x1125 = INT64_MAX;
	uint32_t x1126 = UINT32_MAX;
	uint8_t x1127 = UINT8_MAX;
	static uint32_t x1128 = 8U;
	int32_t t154 = -63;

    t154 = ((x1125>>(x1126!=x1127))==x1128);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x1129 = 26181LLU;
	volatile int8_t x1130 = INT8_MIN;
	int16_t x1131 = -1;
	int64_t x1132 = INT64_MAX;
	volatile int32_t t155 = -239;

    t155 = ((x1129>>(x1130!=x1131))==x1132);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x1133 = 141;
	int32_t x1134 = INT32_MIN;
	int16_t x1136 = -1;
	volatile int32_t t156 = 746743;

    t156 = ((x1133>>(x1134!=x1135))==x1136);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x1161 = UINT8_MAX;
	volatile int8_t x1162 = INT8_MIN;
	volatile uint64_t x1163 = 1593540484354LLU;
	uint16_t x1164 = 5U;
	int32_t t157 = 8489696;

    t157 = ((x1161>>(x1162!=x1163))==x1164);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x1165 = 0;
	int32_t x1166 = 3844863;
	static int32_t x1167 = INT32_MIN;
	volatile int64_t x1168 = INT64_MIN;
	int32_t t158 = -118;

    t158 = ((x1165>>(x1166!=x1167))==x1168);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1170 = INT32_MAX;
	volatile int16_t x1171 = -1;
	uint8_t x1172 = 28U;

    t159 = ((x1169>>(x1170!=x1171))==x1172);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1177 = 3U;
	int32_t x1180 = -48076;

    t160 = ((x1177>>(x1178!=x1179))==x1180);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x1181 = 1U;
	uint16_t x1182 = UINT16_MAX;
	static uint32_t x1183 = 330743U;
	uint64_t x1184 = 281LLU;
	int32_t t161 = 4;

    t161 = ((x1181>>(x1182!=x1183))==x1184);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x1189 = 756540U;
	int8_t x1191 = 0;
	uint16_t x1192 = UINT16_MAX;
	volatile int32_t t162 = 467024;

    t162 = ((x1189>>(x1190!=x1191))==x1192);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x1197 = 15580U;
	volatile uint64_t x1198 = UINT64_MAX;
	int32_t x1199 = 7687;
	volatile int32_t t163 = -172961;

    t163 = ((x1197>>(x1198!=x1199))==x1200);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1201 = 4751480;
	int32_t x1202 = INT32_MIN;
	static int16_t x1203 = INT16_MIN;
	int8_t x1204 = INT8_MAX;
	volatile int32_t t164 = -2;

    t164 = ((x1201>>(x1202!=x1203))==x1204);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1217 = 38U;
	int16_t x1218 = -1;
	int32_t x1219 = INT32_MIN;
	int32_t x1220 = 8334850;
	static volatile int32_t t165 = -10;

    t165 = ((x1217>>(x1218!=x1219))==x1220);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x1221 = 286U;
	static volatile int8_t x1222 = -1;
	int16_t x1223 = -1;
	volatile int32_t t166 = -8579;

    t166 = ((x1221>>(x1222!=x1223))==x1224);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1229 = INT8_MAX;
	int8_t x1230 = INT8_MAX;
	uint32_t x1231 = 2735936U;
	static int16_t x1232 = INT16_MIN;

    t167 = ((x1229>>(x1230!=x1231))==x1232);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1241 = 1U;
	static uint32_t x1242 = UINT32_MAX;
	volatile int16_t x1244 = -4;
	volatile int32_t t168 = -2044531;

    t168 = ((x1241>>(x1242!=x1243))==x1244);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1249 = UINT32_MAX;
	static int32_t x1250 = -728486;
	volatile int8_t x1251 = 3;
	uint8_t x1252 = 3U;

    t169 = ((x1249>>(x1250!=x1251))==x1252);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x1265 = 1980;
	uint16_t x1266 = UINT16_MAX;
	int16_t x1267 = 13;
	int16_t x1268 = -1;
	int32_t t170 = -7855;

    t170 = ((x1265>>(x1266!=x1267))==x1268);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1269 = 182U;
	static uint8_t x1270 = 39U;
	static int16_t x1271 = INT16_MIN;
	int8_t x1272 = -1;

    t171 = ((x1269>>(x1270!=x1271))==x1272);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1278 = 289996510960LL;
	int16_t x1280 = INT16_MIN;
	volatile int32_t t172 = 39;

    t172 = ((x1277>>(x1278!=x1279))==x1280);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x1281 = 51378741LLU;
	volatile int16_t x1282 = INT16_MIN;
	int32_t t173 = -1;

    t173 = ((x1281>>(x1282!=x1283))==x1284);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1285 = 176477316040188123LLU;
	uint8_t x1286 = 5U;
	int32_t x1288 = -1;
	volatile int32_t t174 = -1435;

    t174 = ((x1285>>(x1286!=x1287))==x1288);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1289 = INT32_MAX;
	int8_t x1291 = INT8_MIN;
	int64_t x1292 = INT64_MIN;
	static int32_t t175 = 16704;

    t175 = ((x1289>>(x1290!=x1291))==x1292);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x1294 = -1LL;
	uint64_t x1295 = 1625281LLU;
	int32_t t176 = 550;

    t176 = ((x1293>>(x1294!=x1295))==x1296);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint8_t x1297 = UINT8_MAX;
	int64_t x1298 = -1LL;
	int8_t x1299 = INT8_MAX;

    t177 = ((x1297>>(x1298!=x1299))==x1300);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1302 = INT64_MAX;
	int8_t x1303 = -1;
	static uint8_t x1304 = 56U;
	volatile int32_t t178 = 13622;

    t178 = ((x1301>>(x1302!=x1303))==x1304);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1309 = INT8_MAX;
	int8_t x1310 = INT8_MIN;
	int64_t x1311 = INT64_MAX;
	int32_t x1312 = -45269;
	int32_t t179 = 8374270;

    t179 = ((x1309>>(x1310!=x1311))==x1312);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1313 = 459U;
	uint32_t x1314 = UINT32_MAX;
	volatile int8_t x1315 = -1;
	int16_t x1316 = INT16_MIN;
	int32_t t180 = -17836;

    t180 = ((x1313>>(x1314!=x1315))==x1316);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x1330 = 887U;
	uint16_t x1331 = 73U;
	static uint8_t x1332 = 35U;
	int32_t t181 = 6435607;

    t181 = ((x1329>>(x1330!=x1331))==x1332);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1341 = INT32_MAX;
	static uint64_t x1342 = UINT64_MAX;
	uint8_t x1344 = 15U;

    t182 = ((x1341>>(x1342!=x1343))==x1344);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1349 = 2U;
	static int64_t x1351 = INT64_MAX;
	int8_t x1352 = INT8_MIN;
	int32_t t183 = 477;

    t183 = ((x1349>>(x1350!=x1351))==x1352);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1353 = 2277503961490808325LLU;
	volatile int64_t x1354 = INT64_MIN;
	volatile int32_t x1356 = INT32_MAX;
	int32_t t184 = -192558;

    t184 = ((x1353>>(x1354!=x1355))==x1356);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x1357 = UINT8_MAX;
	static int8_t x1358 = -1;
	volatile int8_t x1359 = INT8_MIN;
	volatile int32_t t185 = -1;

    t185 = ((x1357>>(x1358!=x1359))==x1360);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1361 = INT32_MAX;
	uint32_t x1362 = 805515414U;
	static volatile int16_t x1364 = INT16_MIN;
	static int32_t t186 = -317668424;

    t186 = ((x1361>>(x1362!=x1363))==x1364);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1365 = UINT8_MAX;
	int16_t x1366 = INT16_MIN;
	volatile int64_t x1367 = INT64_MAX;
	int64_t x1368 = INT64_MAX;

    t187 = ((x1365>>(x1366!=x1367))==x1368);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x1370 = INT32_MAX;
	static uint8_t x1371 = 2U;
	int8_t x1372 = INT8_MIN;
	volatile int32_t t188 = 1;

    t188 = ((x1369>>(x1370!=x1371))==x1372);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1377 = 2980106U;
	uint16_t x1378 = 19524U;
	int64_t x1379 = INT64_MIN;
	int8_t x1380 = INT8_MIN;
	int32_t t189 = 17204292;

    t189 = ((x1377>>(x1378!=x1379))==x1380);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1381 = UINT16_MAX;
	int64_t x1382 = INT64_MAX;
	static int64_t x1383 = -18LL;
	static volatile int8_t x1384 = INT8_MIN;
	volatile int32_t t190 = -7411;

    t190 = ((x1381>>(x1382!=x1383))==x1384);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x1385 = UINT64_MAX;
	static volatile uint64_t x1387 = UINT64_MAX;
	volatile int16_t x1388 = -1;
	int32_t t191 = -166726650;

    t191 = ((x1385>>(x1386!=x1387))==x1388);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1394 = UINT8_MAX;
	static int32_t x1395 = INT32_MAX;
	int8_t x1396 = -10;
	volatile int32_t t192 = 18;

    t192 = ((x1393>>(x1394!=x1395))==x1396);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1398 = INT16_MAX;
	int32_t x1399 = -1;
	static int8_t x1400 = INT8_MIN;
	int32_t t193 = 693;

    t193 = ((x1397>>(x1398!=x1399))==x1400);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1406 = 97087U;
	int32_t x1407 = INT32_MIN;
	uint8_t x1408 = UINT8_MAX;
	volatile int32_t t194 = -13973;

    t194 = ((x1405>>(x1406!=x1407))==x1408);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x1409 = INT32_MAX;
	static volatile uint8_t x1410 = 67U;
	int16_t x1411 = INT16_MIN;
	int8_t x1412 = -1;
	volatile int32_t t195 = -1600406;

    t195 = ((x1409>>(x1410!=x1411))==x1412);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x1418 = -3;
	volatile int16_t x1420 = INT16_MIN;
	volatile int32_t t196 = -1;

    t196 = ((x1417>>(x1418!=x1419))==x1420);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1426 = UINT8_MAX;
	int16_t x1427 = 4267;
	volatile int64_t x1428 = INT64_MIN;
	static int32_t t197 = 0;

    t197 = ((x1425>>(x1426!=x1427))==x1428);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x1429 = 55U;
	uint16_t x1430 = 9U;
	int16_t x1431 = 3;
	uint32_t x1432 = 109151523U;
	static volatile int32_t t198 = -1556217;

    t198 = ((x1429>>(x1430!=x1431))==x1432);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x1433 = 8LLU;
	static int16_t x1434 = INT16_MAX;
	static volatile int64_t x1435 = -516LL;
	static volatile int64_t x1436 = INT64_MIN;
	int32_t t199 = -404;

    t199 = ((x1433>>(x1434!=x1435))==x1436);

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

