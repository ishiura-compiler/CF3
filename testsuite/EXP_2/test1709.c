
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

int32_t x4 = INT32_MAX;
static uint64_t t1 = 0LLU;
uint64_t x11 = 69LLU;
static int32_t x16 = 0;
int16_t x18 = INT16_MAX;
int64_t x19 = INT64_MAX;
volatile int32_t t6 = 108;
int16_t x37 = INT16_MAX;
static uint32_t x51 = 18277U;
volatile int16_t x52 = -40;
int16_t x56 = -10;
uint16_t x59 = 116U;
uint32_t x62 = 149473U;
int64_t x63 = -1LL;
uint8_t x69 = UINT8_MAX;
uint64_t t14 = 756191457188810LLU;
uint64_t x81 = 465LLU;
static int8_t x88 = INT8_MAX;
int32_t x95 = -104;
static int32_t x113 = 8321440;
volatile int32_t t22 = 0;
volatile int64_t t23 = -2290LL;
int32_t x130 = INT32_MIN;
int8_t x144 = INT8_MAX;
int32_t x146 = INT32_MAX;
uint64_t x147 = UINT64_MAX;
static volatile uint32_t x154 = UINT32_MAX;
int64_t x155 = INT64_MIN;
int64_t x156 = -26132983183091648LL;
int64_t t30 = -96426646233LL;
uint32_t x177 = 4039U;
volatile int16_t x178 = -1;
static uint16_t x180 = 9U;
uint16_t x198 = UINT16_MAX;
static uint8_t x200 = 12U;
volatile uint32_t t35 = 13923271U;
int8_t x241 = 1;
uint32_t x244 = UINT32_MAX;
int8_t x248 = INT8_MIN;
int8_t x251 = -1;
volatile int32_t x269 = 3704;
static int16_t x270 = INT16_MIN;
static uint64_t x306 = 777462907608296LLU;
int16_t x317 = 116;
uint32_t x319 = 73659313U;
uint8_t x324 = 22U;
static volatile int32_t x325 = INT32_MAX;
int8_t x330 = 0;
uint64_t x337 = UINT64_MAX;
volatile uint8_t x353 = 1U;
int16_t x354 = -2;
static volatile uint32_t x361 = UINT32_MAX;
static uint16_t x372 = UINT16_MAX;
static int32_t x381 = INT32_MAX;
static volatile int32_t t58 = 8168;
uint64_t t59 = 20LLU;
int16_t x428 = -1;
static volatile int16_t x430 = INT16_MAX;
uint16_t x433 = 72U;
int16_t x436 = 27;
static int32_t t63 = -91100;
volatile int16_t x459 = INT16_MIN;
uint8_t x463 = 5U;
int64_t t68 = 341645315404LL;
volatile int32_t t69 = -1;
volatile int32_t t71 = 515476;
int8_t x528 = INT8_MIN;
int64_t t72 = 17005596689577LL;
volatile int16_t x536 = 11727;
int32_t x550 = INT32_MAX;
uint32_t t76 = 180330698U;
volatile int64_t x570 = INT64_MIN;
int16_t x584 = -3;
static volatile uint32_t t80 = 2U;
int32_t x623 = -8248613;
volatile int32_t x638 = 401195834;
static int32_t x647 = INT32_MAX;
int64_t t87 = -2696171948784LL;
int32_t x651 = INT32_MAX;
volatile int16_t x666 = INT16_MIN;
int16_t x667 = INT16_MAX;
int64_t x685 = INT64_MAX;
int64_t x686 = -1LL;
static int16_t x692 = INT16_MAX;
int16_t x697 = INT16_MAX;
uint32_t x698 = 880U;
static int16_t x747 = INT16_MIN;
uint64_t x748 = 545LLU;
int64_t x755 = 4857172511710060LL;
int16_t x756 = -22;
int16_t x759 = 48;
static volatile int32_t x764 = -1;
static uint64_t x771 = 134727260843595LLU;
volatile int32_t t100 = -2;
static int64_t x778 = 12431354LL;
volatile int8_t x783 = INT8_MIN;
int16_t x793 = 280;
int64_t x806 = INT64_MIN;
static int64_t t107 = 8338139LL;
static uint16_t x821 = 0U;
uint32_t x826 = UINT32_MAX;
volatile uint64_t x841 = UINT64_MAX;
int32_t x844 = -39668672;
volatile int16_t x852 = INT16_MIN;
uint64_t t114 = 426LLU;
int32_t x873 = INT32_MAX;
int16_t x883 = INT16_MAX;
int64_t x884 = INT64_MIN;
uint32_t x906 = UINT32_MAX;
int8_t x911 = INT8_MAX;
static int32_t t121 = -402;
int32_t x929 = INT32_MAX;
static uint32_t t122 = 1U;
int16_t x948 = -918;
uint8_t x956 = 18U;
static int8_t x980 = INT8_MIN;
uint32_t x997 = UINT32_MAX;
int32_t x1008 = INT32_MIN;
int8_t x1014 = INT8_MIN;
uint32_t t132 = 1U;
int16_t x1055 = INT16_MIN;
int32_t x1061 = INT32_MAX;
static int64_t t134 = -2422419032541LL;
static uint8_t x1069 = 33U;
int32_t x1076 = INT32_MIN;
static volatile int32_t t136 = -828;
uint8_t x1081 = 33U;
static int16_t x1103 = INT16_MIN;
static uint16_t x1105 = 377U;
int16_t x1116 = INT16_MIN;
volatile uint16_t x1135 = UINT16_MAX;
uint32_t x1138 = 8081U;
int8_t x1140 = INT8_MIN;
volatile uint32_t t145 = 27U;
int64_t x1150 = INT64_MAX;
uint16_t x1180 = 72U;
int32_t x1190 = INT32_MIN;
int64_t x1211 = 17560LL;
uint8_t x1214 = 1U;
int64_t x1216 = -1LL;
int32_t t157 = 61908947;
uint32_t x1224 = 217333051U;
uint32_t t158 = 10355212U;
int32_t x1237 = INT32_MAX;
uint8_t x1263 = UINT8_MAX;
uint32_t x1284 = 110251U;
volatile uint16_t x1301 = 1716U;
static int16_t x1311 = -5;
int32_t t165 = -191;
volatile int16_t x1317 = INT16_MAX;
uint32_t x1331 = 1U;
uint64_t t169 = 204047220425877812LLU;
volatile int64_t x1341 = INT64_MAX;
uint64_t x1342 = UINT64_MAX;
static volatile int16_t x1343 = -6;
int8_t x1346 = INT8_MIN;
uint32_t x1348 = 895209U;
volatile uint32_t t171 = 87U;
int16_t x1351 = INT16_MIN;
volatile int64_t x1363 = INT64_MIN;
int16_t x1364 = INT16_MIN;
int16_t x1370 = INT16_MAX;
int32_t t175 = -12;
static int32_t x1378 = INT32_MIN;
int32_t x1380 = INT32_MIN;
volatile uint16_t x1381 = UINT16_MAX;
int32_t t177 = -1936;
volatile int32_t t179 = -35353;
uint64_t x1405 = UINT64_MAX;
static int8_t x1406 = INT8_MAX;
uint32_t x1410 = 14332714U;
int32_t x1412 = -5791;
static uint8_t x1426 = UINT8_MAX;
int16_t x1432 = -72;
volatile uint64_t t186 = 102LLU;
int8_t x1437 = INT8_MAX;
volatile int64_t x1445 = INT64_MAX;
volatile int64_t x1458 = -18761LL;
volatile int8_t x1459 = INT8_MAX;
int8_t x1476 = INT8_MIN;
volatile uint64_t t191 = 1703010979985058LLU;
static volatile int8_t x1499 = 0;
uint8_t x1504 = 13U;
int8_t x1506 = -9;
static volatile int64_t t197 = 10548483031541636LL;
volatile int64_t t198 = -246LL;


void f0(void) {
    	int8_t x1 = 1;
	volatile int8_t x2 = INT8_MIN;
	int32_t x3 = -1579;
	int32_t t0 = INT32_MAX;

    t0 = ((x1>>(x2>x3))+x4);

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 8U;
	uint64_t x6 = UINT64_MAX;
	int16_t x7 = -1;
	static uint64_t x8 = 30005622LLU;

    t1 = ((x5>>(x6>x7))+x8);

    if (t1 != 30005630LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 1032284U;
	int8_t x10 = INT8_MIN;
	volatile int8_t x12 = -13;
	uint32_t t2 = 405621182U;

    t2 = ((x9>>(x10>x11))+x12);

    if (t2 != 516129U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = UINT32_MAX;
	volatile int64_t x14 = 4357388LL;
	static uint16_t x15 = 0U;
	static volatile uint32_t t3 = 1075996481U;

    t3 = ((x13>>(x14>x15))+x16);

    if (t3 != 2147483647U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = UINT64_MAX;
	int16_t x20 = 12;
	volatile uint64_t t4 = 2314LLU;

    t4 = ((x17>>(x18>x19))+x20);

    if (t4 != 11LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x29 = UINT32_MAX;
	int16_t x30 = INT16_MIN;
	uint64_t x31 = 422998674LLU;
	volatile int16_t x32 = 56;
	volatile uint32_t t5 = 31122629U;

    t5 = ((x29>>(x30>x31))+x32);

    if (t5 != 2147483703U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x33 = INT16_MAX;
	static int64_t x34 = -1LL;
	uint8_t x35 = UINT8_MAX;
	int32_t x36 = 341616;

    t6 = ((x33>>(x34>x35))+x36);

    if (t6 != 374383) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x38 = INT16_MIN;
	int32_t x39 = INT32_MIN;
	int32_t x40 = -5026;
	volatile int32_t t7 = 11477;

    t7 = ((x37>>(x38>x39))+x40);

    if (t7 != 11357) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x49 = UINT8_MAX;
	static int16_t x50 = INT16_MIN;
	static int32_t t8 = -14;

    t8 = ((x49>>(x50>x51))+x52);

    if (t8 != 87) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x53 = INT8_MAX;
	static volatile int8_t x54 = INT8_MIN;
	int64_t x55 = INT64_MAX;
	int32_t t9 = -813525729;

    t9 = ((x53>>(x54>x55))+x56);

    if (t9 != 117) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x57 = 3U;
	uint16_t x58 = 2395U;
	static volatile int16_t x60 = INT16_MIN;
	int32_t t10 = 3;

    t10 = ((x57>>(x58>x59))+x60);

    if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x61 = INT32_MAX;
	int8_t x64 = INT8_MIN;
	volatile int32_t t11 = -23181265;

    t11 = ((x61>>(x62>x63))+x64);

    if (t11 != 1073741695) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x70 = 0;
	static uint16_t x71 = UINT16_MAX;
	int16_t x72 = -1;
	volatile int32_t t12 = 935680761;

    t12 = ((x69>>(x70>x71))+x72);

    if (t12 != 254) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x73 = 1080339754039369LLU;
	int64_t x74 = INT64_MAX;
	int32_t x75 = INT32_MIN;
	static int32_t x76 = INT32_MAX;
	uint64_t t13 = 1LLU;

    t13 = ((x73>>(x74>x75))+x76);

    if (t13 != 540172024503331LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x77 = UINT64_MAX;
	int32_t x78 = 180632;
	uint32_t x79 = 740074U;
	int8_t x80 = INT8_MAX;

    t14 = ((x77>>(x78>x79))+x80);

    if (t14 != 126LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x82 = INT64_MIN;
	int16_t x83 = -1;
	int64_t x84 = INT64_MAX;
	uint64_t t15 = 1679834LLU;

    t15 = ((x81>>(x82>x83))+x84);

    if (t15 != 9223372036854776272LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x85 = 3410LL;
	uint64_t x86 = 623341063LLU;
	static int32_t x87 = INT32_MIN;
	int64_t t16 = -101584865LL;

    t16 = ((x85>>(x86>x87))+x88);

    if (t16 != 3537LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x89 = 641061101433267554LLU;
	static uint16_t x90 = 64U;
	uint16_t x91 = 824U;
	uint64_t x92 = 422LLU;
	uint64_t t17 = 3LLU;

    t17 = ((x89>>(x90>x91))+x92);

    if (t17 != 641061101433267976LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x93 = UINT32_MAX;
	int8_t x94 = -1;
	static uint32_t x96 = UINT32_MAX;
	static uint32_t t18 = 176330U;

    t18 = ((x93>>(x94>x95))+x96);

    if (t18 != 2147483646U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x97 = 14;
	static int64_t x98 = INT64_MAX;
	uint32_t x99 = 29203U;
	int16_t x100 = 171;
	volatile int32_t t19 = -221075;

    t19 = ((x97>>(x98>x99))+x100);

    if (t19 != 178) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint16_t x101 = 0U;
	uint32_t x102 = 161U;
	static volatile int8_t x103 = INT8_MAX;
	int64_t x104 = INT64_MIN;
	int64_t t20 = INT64_MIN;

    t20 = ((x101>>(x102>x103))+x104);

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x105 = 31U;
	uint32_t x106 = 66340329U;
	uint16_t x107 = UINT16_MAX;
	int8_t x108 = INT8_MIN;
	volatile int32_t t21 = 427;

    t21 = ((x105>>(x106>x107))+x108);

    if (t21 != -113) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x114 = -8347LL;
	int32_t x115 = -3004688;
	int16_t x116 = INT16_MIN;

    t22 = ((x113>>(x114>x115))+x116);

    if (t22 != 4127952) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x121 = 41;
	volatile uint16_t x122 = UINT16_MAX;
	uint64_t x123 = UINT64_MAX;
	static int64_t x124 = -1LL;

    t23 = ((x121>>(x122>x123))+x124);

    if (t23 != 40LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x125 = 1240568119599690808LL;
	static int8_t x126 = 41;
	int32_t x127 = INT32_MIN;
	int16_t x128 = INT16_MAX;
	int64_t t24 = -1270706443977290065LL;

    t24 = ((x125>>(x126>x127))+x128);

    if (t24 != 620284059799878171LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x129 = UINT8_MAX;
	int8_t x131 = INT8_MIN;
	int8_t x132 = INT8_MAX;
	int32_t t25 = -30830;

    t25 = ((x129>>(x130>x131))+x132);

    if (t25 != 382) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint32_t x133 = 14U;
	uint16_t x134 = UINT16_MAX;
	uint32_t x135 = 18U;
	int8_t x136 = INT8_MIN;
	static volatile uint32_t t26 = 2002U;

    t26 = ((x133>>(x134>x135))+x136);

    if (t26 != 4294967175U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x137 = INT8_MAX;
	static int8_t x138 = -1;
	uint16_t x139 = 434U;
	volatile uint8_t x140 = 1U;
	volatile int32_t t27 = 540168536;

    t27 = ((x137>>(x138>x139))+x140);

    if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x141 = UINT64_MAX;
	int8_t x142 = INT8_MAX;
	static volatile int16_t x143 = INT16_MAX;
	volatile uint64_t t28 = 4213828427716928992LLU;

    t28 = ((x141>>(x142>x143))+x144);

    if (t28 != 126LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x145 = 43;
	uint32_t x148 = 3U;
	volatile uint32_t t29 = 12391U;

    t29 = ((x145>>(x146>x147))+x148);

    if (t29 != 46U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x153 = 1939641U;

    t30 = ((x153>>(x154>x155))+x156);

    if (t30 != -26132983182121828LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x165 = 119U;
	int32_t x166 = INT32_MAX;
	int16_t x167 = -1;
	static int16_t x168 = INT16_MIN;
	static int32_t t31 = -328;

    t31 = ((x165>>(x166>x167))+x168);

    if (t31 != -32709) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x179 = 25241424274LL;
	static uint32_t t32 = 3176U;

    t32 = ((x177>>(x178>x179))+x180);

    if (t32 != 4048U) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x197 = 1U;
	static int8_t x199 = 28;
	static int32_t t33 = -83883;

    t33 = ((x197>>(x198>x199))+x200);

    if (t33 != 12) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x229 = UINT16_MAX;
	static int64_t x230 = INT64_MIN;
	int8_t x231 = -1;
	uint64_t x232 = 22270890LLU;
	volatile uint64_t t34 = 10858777228213LLU;

    t34 = ((x229>>(x230>x231))+x232);

    if (t34 != 22336425LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint32_t x233 = UINT32_MAX;
	uint64_t x234 = 8767780LLU;
	static int16_t x235 = INT16_MIN;
	int16_t x236 = INT16_MAX;

    t35 = ((x233>>(x234>x235))+x236);

    if (t35 != 32766U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x242 = 1;
	static int64_t x243 = INT64_MIN;
	uint32_t t36 = UINT32_MAX;

    t36 = ((x241>>(x242>x243))+x244);

    if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x245 = INT64_MAX;
	uint32_t x246 = 4U;
	int16_t x247 = INT16_MAX;
	volatile int64_t t37 = 809061420354LL;

    t37 = ((x245>>(x246>x247))+x248);

    if (t37 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x249 = UINT16_MAX;
	volatile uint16_t x250 = UINT16_MAX;
	int32_t x252 = INT32_MIN;
	int32_t t38 = 42437743;

    t38 = ((x249>>(x250>x251))+x252);

    if (t38 != -2147450881) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x253 = 2803LLU;
	volatile int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MIN;
	static volatile int32_t x256 = INT32_MIN;
	volatile uint64_t t39 = 1LLU;

    t39 = ((x253>>(x254>x255))+x256);

    if (t39 != 18446744071562070771LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x265 = UINT32_MAX;
	volatile int8_t x266 = 0;
	int32_t x267 = INT32_MIN;
	uint64_t x268 = 3895025947LLU;
	static volatile uint64_t t40 = 64287LLU;

    t40 = ((x265>>(x266>x267))+x268);

    if (t40 != 6042509594LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x271 = UINT16_MAX;
	int8_t x272 = INT8_MIN;
	volatile int32_t t41 = 2129626;

    t41 = ((x269>>(x270>x271))+x272);

    if (t41 != 3576) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x273 = 4990U;
	static uint8_t x274 = 31U;
	int8_t x275 = 23;
	int16_t x276 = INT16_MIN;
	static volatile uint32_t t42 = 65062U;

    t42 = ((x273>>(x274>x275))+x276);

    if (t42 != 4294937023U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x277 = 34U;
	volatile int32_t x278 = 1;
	uint8_t x279 = 1U;
	volatile int8_t x280 = INT8_MAX;
	volatile int32_t t43 = -2131;

    t43 = ((x277>>(x278>x279))+x280);

    if (t43 != 161) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x289 = 77U;
	static uint64_t x290 = UINT64_MAX;
	int8_t x291 = 1;
	uint16_t x292 = 2853U;
	int32_t t44 = -26;

    t44 = ((x289>>(x290>x291))+x292);

    if (t44 != 2891) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x305 = INT32_MAX;
	static int16_t x307 = INT16_MIN;
	int8_t x308 = INT8_MIN;
	int32_t t45 = 10585709;

    t45 = ((x305>>(x306>x307))+x308);

    if (t45 != 2147483519) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x309 = UINT32_MAX;
	volatile int32_t x310 = INT32_MIN;
	uint8_t x311 = 6U;
	volatile uint8_t x312 = UINT8_MAX;
	static uint32_t t46 = 748U;

    t46 = ((x309>>(x310>x311))+x312);

    if (t46 != 254U) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x318 = -13020;
	int32_t x320 = INT32_MIN;
	int32_t t47 = -4944989;

    t47 = ((x317>>(x318>x319))+x320);

    if (t47 != -2147483590) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x321 = UINT8_MAX;
	int64_t x322 = INT64_MAX;
	uint32_t x323 = 20598U;
	volatile int32_t t48 = -255058804;

    t48 = ((x321>>(x322>x323))+x324);

    if (t48 != 149) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x326 = INT8_MIN;
	volatile uint32_t x327 = UINT32_MAX;
	int32_t x328 = INT32_MIN;
	volatile int32_t t49 = -34893616;

    t49 = ((x325>>(x326>x327))+x328);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x329 = 15187LLU;
	int8_t x331 = -1;
	volatile uint16_t x332 = 0U;
	uint64_t t50 = 210088618980592LLU;

    t50 = ((x329>>(x330>x331))+x332);

    if (t50 != 7593LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x338 = -85;
	static volatile int8_t x339 = -5;
	static int16_t x340 = -1;
	volatile uint64_t t51 = 3666LLU;

    t51 = ((x337>>(x338>x339))+x340);

    if (t51 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x345 = UINT32_MAX;
	volatile int16_t x346 = INT16_MAX;
	int16_t x347 = -3698;
	int64_t x348 = -11LL;
	int64_t t52 = 14641534003795469LL;

    t52 = ((x345>>(x346>x347))+x348);

    if (t52 != 2147483636LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x355 = INT8_MAX;
	uint64_t x356 = 7279839LLU;
	volatile uint64_t t53 = 1576LLU;

    t53 = ((x353>>(x354>x355))+x356);

    if (t53 != 7279840LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x357 = INT32_MAX;
	int16_t x358 = -1;
	static volatile int32_t x359 = INT32_MIN;
	uint16_t x360 = 7U;
	volatile int32_t t54 = -130592055;

    t54 = ((x357>>(x358>x359))+x360);

    if (t54 != 1073741830) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x362 = -1;
	int16_t x363 = -1;
	int64_t x364 = -29LL;
	int64_t t55 = -559552512394520259LL;

    t55 = ((x361>>(x362>x363))+x364);

    if (t55 != 4294967266LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x365 = UINT16_MAX;
	int32_t x366 = 5;
	volatile uint64_t x367 = 83518LLU;
	static volatile int64_t x368 = INT64_MIN;
	int64_t t56 = -47434LL;

    t56 = ((x365>>(x366>x367))+x368);

    if (t56 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x369 = INT32_MAX;
	volatile uint16_t x370 = UINT16_MAX;
	int8_t x371 = -1;
	volatile int32_t t57 = 41769;

    t57 = ((x369>>(x370>x371))+x372);

    if (t57 != 1073807358) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x382 = 158638425LLU;
	int16_t x383 = -1;
	static int16_t x384 = -1591;

    t58 = ((x381>>(x382>x383))+x384);

    if (t58 != 2147482056) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x389 = 3148200575LLU;
	static volatile int8_t x390 = 2;
	uint16_t x391 = UINT16_MAX;
	uint8_t x392 = UINT8_MAX;

    t59 = ((x389>>(x390>x391))+x392);

    if (t59 != 3148200830LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x417 = 2U;
	volatile int64_t x418 = INT64_MAX;
	int16_t x419 = INT16_MAX;
	static uint16_t x420 = UINT16_MAX;
	int32_t t60 = -95;

    t60 = ((x417>>(x418>x419))+x420);

    if (t60 != 65536) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x425 = INT16_MAX;
	static uint8_t x426 = UINT8_MAX;
	int8_t x427 = 5;
	static int32_t t61 = 1249;

    t61 = ((x425>>(x426>x427))+x428);

    if (t61 != 16382) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x429 = 57U;
	volatile int64_t x431 = -1LL;
	static int16_t x432 = -1;
	static int32_t t62 = 449517968;

    t62 = ((x429>>(x430>x431))+x432);

    if (t62 != 27) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x434 = -497LL;
	static volatile int8_t x435 = -1;

    t63 = ((x433>>(x434>x435))+x436);

    if (t63 != 99) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x457 = INT16_MAX;
	static int8_t x458 = 1;
	volatile int64_t x460 = INT64_MIN;
	int64_t t64 = -1850039546820LL;

    t64 = ((x457>>(x458>x459))+x460);

    if (t64 != -9223372036854759425LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x461 = 1;
	static int8_t x462 = -1;
	uint8_t x464 = 1U;
	int32_t t65 = -191679;

    t65 = ((x461>>(x462>x463))+x464);

    if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x473 = 98U;
	int64_t x474 = -1LL;
	volatile uint64_t x475 = 311LLU;
	uint16_t x476 = 1909U;
	int32_t t66 = -54;

    t66 = ((x473>>(x474>x475))+x476);

    if (t66 != 1958) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x481 = 50;
	uint32_t x482 = UINT32_MAX;
	uint32_t x483 = 4U;
	int32_t x484 = INT32_MIN;
	int32_t t67 = -1;

    t67 = ((x481>>(x482>x483))+x484);

    if (t67 != -2147483623) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x493 = 1021689550149140065LL;
	static int64_t x494 = INT64_MIN;
	static volatile int32_t x495 = -1;
	int8_t x496 = -1;

    t68 = ((x493>>(x494>x495))+x496);

    if (t68 != 1021689550149140064LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x501 = 91U;
	static int64_t x502 = INT64_MIN;
	uint8_t x503 = UINT8_MAX;
	uint16_t x504 = 0U;

    t69 = ((x501>>(x502>x503))+x504);

    if (t69 != 91) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x513 = UINT8_MAX;
	volatile int8_t x514 = -1;
	uint64_t x515 = 341652437366LLU;
	uint8_t x516 = 55U;
	static int32_t t70 = -17383725;

    t70 = ((x513>>(x514>x515))+x516);

    if (t70 != 182) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x521 = 15U;
	static int64_t x522 = -1LL;
	static int64_t x523 = INT64_MIN;
	int16_t x524 = -203;

    t71 = ((x521>>(x522>x523))+x524);

    if (t71 != -196) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x525 = INT64_MAX;
	volatile int16_t x526 = -1;
	volatile int32_t x527 = -550264;

    t72 = ((x525>>(x526>x527))+x528);

    if (t72 != 4611686018427387775LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x529 = UINT16_MAX;
	static uint16_t x530 = UINT16_MAX;
	volatile uint64_t x531 = 84212173LLU;
	static uint16_t x532 = 0U;
	volatile int32_t t73 = 0;

    t73 = ((x529>>(x530>x531))+x532);

    if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x533 = INT16_MAX;
	volatile uint16_t x534 = UINT16_MAX;
	static volatile uint32_t x535 = 896U;
	volatile int32_t t74 = -329203413;

    t74 = ((x533>>(x534>x535))+x536);

    if (t74 != 28110) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint8_t x541 = 1U;
	uint8_t x542 = UINT8_MAX;
	uint8_t x543 = UINT8_MAX;
	uint8_t x544 = 4U;
	volatile int32_t t75 = -9;

    t75 = ((x541>>(x542>x543))+x544);

    if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x549 = UINT32_MAX;
	int32_t x551 = INT32_MIN;
	volatile uint16_t x552 = 996U;

    t76 = ((x549>>(x550>x551))+x552);

    if (t76 != 2147484643U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x565 = 24574U;
	int8_t x566 = INT8_MIN;
	uint16_t x567 = 363U;
	int16_t x568 = -1;
	uint32_t t77 = 18U;

    t77 = ((x565>>(x566>x567))+x568);

    if (t77 != 24573U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x569 = 3;
	int64_t x571 = INT64_MAX;
	int8_t x572 = -1;
	volatile int32_t t78 = -63952;

    t78 = ((x569>>(x570>x571))+x572);

    if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x581 = 3251U;
	static int64_t x582 = -11354372LL;
	volatile uint8_t x583 = 38U;
	volatile uint32_t t79 = 56U;

    t79 = ((x581>>(x582>x583))+x584);

    if (t79 != 3248U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x585 = 103U;
	uint64_t x586 = 168059LLU;
	int64_t x587 = -22432581804LL;
	static volatile int32_t x588 = -1;

    t80 = ((x585>>(x586>x587))+x588);

    if (t80 != 102U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x589 = 1;
	int16_t x590 = 5;
	static uint64_t x591 = 19320375LLU;
	int8_t x592 = INT8_MIN;
	static volatile int32_t t81 = 576572586;

    t81 = ((x589>>(x590>x591))+x592);

    if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x613 = INT32_MAX;
	uint16_t x614 = 5050U;
	int32_t x615 = -9;
	int8_t x616 = INT8_MIN;
	static int32_t t82 = 46;

    t82 = ((x613>>(x614>x615))+x616);

    if (t82 != 1073741695) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x617 = INT8_MAX;
	int32_t x618 = 5519296;
	int16_t x619 = -1;
	uint64_t x620 = UINT64_MAX;
	static uint64_t t83 = 2135652889111821858LLU;

    t83 = ((x617>>(x618>x619))+x620);

    if (t83 != 62LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x621 = 8351;
	int8_t x622 = INT8_MIN;
	volatile int32_t x624 = INT32_MIN;
	int32_t t84 = -94415783;

    t84 = ((x621>>(x622>x623))+x624);

    if (t84 != -2147479473) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x633 = INT16_MAX;
	int64_t x634 = 7104LL;
	int8_t x635 = INT8_MIN;
	volatile int8_t x636 = -2;
	static int32_t t85 = -18;

    t85 = ((x633>>(x634>x635))+x636);

    if (t85 != 16381) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x637 = 0U;
	uint64_t x639 = UINT64_MAX;
	volatile uint16_t x640 = UINT16_MAX;
	volatile int32_t t86 = 243997270;

    t86 = ((x637>>(x638>x639))+x640);

    if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x645 = 7;
	int8_t x646 = -13;
	int64_t x648 = INT64_MIN;

    t87 = ((x645>>(x646>x647))+x648);

    if (t87 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x649 = 14777063LL;
	int8_t x650 = 0;
	int64_t x652 = -1LL;
	static int64_t t88 = -413LL;

    t88 = ((x649>>(x650>x651))+x652);

    if (t88 != 14777062LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x665 = 2;
	volatile uint16_t x668 = UINT16_MAX;
	static volatile int32_t t89 = 995175;

    t89 = ((x665>>(x666>x667))+x668);

    if (t89 != 65537) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x673 = 0U;
	uint64_t x674 = 1800080988115LLU;
	static uint16_t x675 = 57U;
	int64_t x676 = -6896780919LL;
	volatile int64_t t90 = -44142803LL;

    t90 = ((x673>>(x674>x675))+x676);

    if (t90 != -6896780919LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x687 = 11224257205681LLU;
	volatile int16_t x688 = 3946;
	static volatile int64_t t91 = 768486030LL;

    t91 = ((x685>>(x686>x687))+x688);

    if (t91 != 4611686018427391849LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x689 = UINT16_MAX;
	volatile int32_t x690 = -53442358;
	int8_t x691 = -55;
	static int32_t t92 = 13182;

    t92 = ((x689>>(x690>x691))+x692);

    if (t92 != 98302) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x699 = 32U;
	volatile int64_t x700 = -1LL;
	static volatile int64_t t93 = -144447066133LL;

    t93 = ((x697>>(x698>x699))+x700);

    if (t93 != 16382LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x725 = 130228242904675LLU;
	uint8_t x726 = 14U;
	int64_t x727 = INT64_MIN;
	int8_t x728 = -1;
	volatile uint64_t t94 = 4402724627108LLU;

    t94 = ((x725>>(x726>x727))+x728);

    if (t94 != 65114121452336LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x745 = UINT8_MAX;
	volatile int8_t x746 = INT8_MIN;
	uint64_t t95 = 515845789LLU;

    t95 = ((x745>>(x746>x747))+x748);

    if (t95 != 672LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x753 = INT64_MAX;
	volatile int16_t x754 = 50;
	static int64_t t96 = -5620LL;

    t96 = ((x753>>(x754>x755))+x756);

    if (t96 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x757 = UINT32_MAX;
	static int8_t x758 = -1;
	int32_t x760 = -294324;
	uint32_t t97 = 17U;

    t97 = ((x757>>(x758>x759))+x760);

    if (t97 != 4294672971U) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x761 = 0U;
	volatile uint8_t x762 = UINT8_MAX;
	uint64_t x763 = 262559LLU;
	volatile int32_t t98 = -733912;

    t98 = ((x761>>(x762>x763))+x764);

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x765 = INT8_MAX;
	uint8_t x766 = UINT8_MAX;
	static int8_t x767 = INT8_MIN;
	int16_t x768 = 0;
	volatile int32_t t99 = -89613;

    t99 = ((x765>>(x766>x767))+x768);

    if (t99 != 63) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x769 = UINT16_MAX;
	static int32_t x770 = INT32_MIN;
	int32_t x772 = 9527;

    t100 = ((x769>>(x770>x771))+x772);

    if (t100 != 42294) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x777 = 2476LL;
	int32_t x779 = INT32_MAX;
	static uint32_t x780 = 6755541U;
	int64_t t101 = 219LL;

    t101 = ((x777>>(x778>x779))+x780);

    if (t101 != 6758017LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x781 = 140476645LLU;
	uint8_t x782 = 34U;
	volatile int32_t x784 = INT32_MIN;
	volatile uint64_t t102 = 121462LLU;

    t102 = ((x781>>(x782>x783))+x784);

    if (t102 != 18446744071632306290LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x785 = UINT16_MAX;
	volatile int32_t x786 = -1;
	volatile uint32_t x787 = UINT32_MAX;
	uint8_t x788 = 2U;
	int32_t t103 = 0;

    t103 = ((x785>>(x786>x787))+x788);

    if (t103 != 65537) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x794 = INT16_MIN;
	static uint32_t x795 = 6073779U;
	int16_t x796 = INT16_MAX;
	volatile int32_t t104 = -1587;

    t104 = ((x793>>(x794>x795))+x796);

    if (t104 != 32907) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x801 = 7322833209827244009LLU;
	int16_t x802 = -9870;
	volatile int32_t x803 = 995;
	int16_t x804 = INT16_MIN;
	volatile uint64_t t105 = 2412903312LLU;

    t105 = ((x801>>(x802>x803))+x804);

    if (t105 != 7322833209827211241LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x805 = 46U;
	uint16_t x807 = 193U;
	uint8_t x808 = 1U;
	uint32_t t106 = 408315U;

    t106 = ((x805>>(x806>x807))+x808);

    if (t106 != 47U) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x817 = 126908LL;
	uint16_t x818 = UINT16_MAX;
	volatile int8_t x819 = -1;
	int8_t x820 = INT8_MAX;

    t107 = ((x817>>(x818>x819))+x820);

    if (t107 != 63581LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x822 = -1;
	static int64_t x823 = -1LL;
	static int16_t x824 = -39;
	volatile int32_t t108 = -95726;

    t108 = ((x821>>(x822>x823))+x824);

    if (t108 != -39) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x825 = UINT8_MAX;
	uint64_t x827 = 3164LLU;
	int64_t x828 = -1LL;
	volatile int64_t t109 = 11868367495LL;

    t109 = ((x825>>(x826>x827))+x828);

    if (t109 != 126LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x833 = 5U;
	int16_t x834 = -5742;
	static int32_t x835 = -1;
	int16_t x836 = INT16_MIN;
	static int32_t t110 = 782046681;

    t110 = ((x833>>(x834>x835))+x836);

    if (t110 != -32763) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x837 = 7LLU;
	int8_t x838 = INT8_MIN;
	int8_t x839 = INT8_MIN;
	uint64_t x840 = 63LLU;
	uint64_t t111 = 3499380991LLU;

    t111 = ((x837>>(x838>x839))+x840);

    if (t111 != 70LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x842 = INT32_MAX;
	int8_t x843 = -1;
	uint64_t t112 = 125686848LLU;

    t112 = ((x841>>(x842>x843))+x844);

    if (t112 != 9223372036815107135LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x849 = INT16_MAX;
	volatile int64_t x850 = 83844881957LL;
	int16_t x851 = -1;
	int32_t t113 = 224;

    t113 = ((x849>>(x850>x851))+x852);

    if (t113 != -16385) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x853 = 43257990028875415LLU;
	volatile int16_t x854 = -4342;
	int64_t x855 = 401598334LL;
	static int64_t x856 = -15LL;

    t114 = ((x853>>(x854>x855))+x856);

    if (t114 != 43257990028875400LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x874 = -26;
	int8_t x875 = 29;
	volatile int16_t x876 = -8;
	volatile int32_t t115 = 41;

    t115 = ((x873>>(x874>x875))+x876);

    if (t115 != 2147483639) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x877 = INT16_MAX;
	int8_t x878 = 31;
	volatile int32_t x879 = -1;
	uint64_t x880 = UINT64_MAX;
	volatile uint64_t t116 = 23094LLU;

    t116 = ((x877>>(x878>x879))+x880);

    if (t116 != 16382LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x881 = 1U;
	int8_t x882 = -1;
	volatile int64_t t117 = 32215LL;

    t117 = ((x881>>(x882>x883))+x884);

    if (t117 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x893 = 3542389377233177LLU;
	int16_t x894 = INT16_MIN;
	static int16_t x895 = INT16_MIN;
	volatile uint32_t x896 = 1583859U;
	volatile uint64_t t118 = 3623660857297LLU;

    t118 = ((x893>>(x894>x895))+x896);

    if (t118 != 3542389378817036LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x905 = 7532U;
	static int64_t x907 = -1LL;
	static volatile uint64_t x908 = 802081229436LLU;
	uint64_t t119 = 122117643LLU;

    t119 = ((x905>>(x906>x907))+x908);

    if (t119 != 802081233202LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x909 = 6U;
	static volatile uint64_t x910 = 3999LLU;
	int64_t x912 = 1838833109LL;
	static int64_t t120 = -517467022593434012LL;

    t120 = ((x909>>(x910>x911))+x912);

    if (t120 != 1838833112LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x917 = UINT16_MAX;
	static int64_t x918 = -430371837104LL;
	uint64_t x919 = 5541LLU;
	volatile int32_t x920 = 242344055;

    t121 = ((x917>>(x918>x919))+x920);

    if (t121 != 242376822) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x930 = -3203350487237LL;
	volatile int16_t x931 = 1;
	static uint32_t x932 = 66601U;

    t122 = ((x929>>(x930>x931))+x932);

    if (t122 != 2147550248U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x933 = 839;
	uint16_t x934 = 1541U;
	int64_t x935 = INT64_MAX;
	volatile int32_t x936 = INT32_MIN;
	static int32_t t123 = 220329472;

    t123 = ((x933>>(x934>x935))+x936);

    if (t123 != -2147482809) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x945 = INT16_MAX;
	int32_t x946 = 0;
	uint8_t x947 = UINT8_MAX;
	volatile int32_t t124 = 5715459;

    t124 = ((x945>>(x946>x947))+x948);

    if (t124 != 31849) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x953 = UINT16_MAX;
	static volatile int8_t x954 = -1;
	int8_t x955 = 1;
	int32_t t125 = -220509527;

    t125 = ((x953>>(x954>x955))+x956);

    if (t125 != 65553) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x965 = 586135035739146LL;
	int32_t x966 = 0;
	static int64_t x967 = INT64_MAX;
	uint64_t x968 = 97108793789350LLU;
	uint64_t t126 = 20019457868LLU;

    t126 = ((x965>>(x966>x967))+x968);

    if (t126 != 683243829528496LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x969 = 57408U;
	volatile uint8_t x970 = UINT8_MAX;
	int8_t x971 = INT8_MIN;
	int16_t x972 = -7;
	uint32_t t127 = 113023U;

    t127 = ((x969>>(x970>x971))+x972);

    if (t127 != 28697U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x977 = 2;
	static int32_t x978 = 7;
	volatile uint8_t x979 = 1U;
	int32_t t128 = 1215977;

    t128 = ((x977>>(x978>x979))+x980);

    if (t128 != -127) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x989 = 30U;
	int16_t x990 = 393;
	int64_t x991 = -10386LL;
	int64_t x992 = INT64_MIN;
	volatile int64_t t129 = -8314659LL;

    t129 = ((x989>>(x990>x991))+x992);

    if (t129 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint16_t x998 = 6399U;
	volatile int8_t x999 = INT8_MIN;
	volatile int32_t x1000 = INT32_MAX;
	static volatile uint32_t t130 = 52578U;

    t130 = ((x997>>(x998>x999))+x1000);

    if (t130 != 4294967294U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x1005 = 7U;
	int32_t x1006 = INT32_MIN;
	uint8_t x1007 = 3U;
	static int32_t t131 = 45;

    t131 = ((x1005>>(x1006>x1007))+x1008);

    if (t131 != -2147483641) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x1013 = 63U;
	uint64_t x1015 = 1769287478494589633LLU;
	uint32_t x1016 = 1U;

    t132 = ((x1013>>(x1014>x1015))+x1016);

    if (t132 != 32U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x1053 = 14218109158294582LLU;
	int16_t x1054 = INT16_MIN;
	int16_t x1056 = INT16_MIN;
	uint64_t t133 = 4LLU;

    t133 = ((x1053>>(x1054>x1055))+x1056);

    if (t133 != 14218109158261814LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x1062 = 0;
	uint64_t x1063 = 311658600336122248LLU;
	int64_t x1064 = INT64_MIN;

    t134 = ((x1061>>(x1062>x1063))+x1064);

    if (t134 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x1070 = -1;
	uint32_t x1071 = UINT32_MAX;
	static int32_t x1072 = -2;
	static volatile int32_t t135 = 1445903;

    t135 = ((x1069>>(x1070>x1071))+x1072);

    if (t135 != 31) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x1073 = 328U;
	int8_t x1074 = 20;
	uint32_t x1075 = UINT32_MAX;

    t136 = ((x1073>>(x1074>x1075))+x1076);

    if (t136 != -2147483320) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x1077 = 4;
	volatile int8_t x1078 = 27;
	int8_t x1079 = INT8_MAX;
	static volatile int8_t x1080 = -18;
	static volatile int32_t t137 = 0;

    t137 = ((x1077>>(x1078>x1079))+x1080);

    if (t137 != -14) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x1082 = -1LL;
	uint8_t x1083 = 9U;
	uint32_t x1084 = 229U;
	uint32_t t138 = 2071U;

    t138 = ((x1081>>(x1082>x1083))+x1084);

    if (t138 != 262U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x1101 = UINT32_MAX;
	volatile int16_t x1102 = INT16_MIN;
	uint64_t x1104 = UINT64_MAX;
	static uint64_t t139 = 909271997LLU;

    t139 = ((x1101>>(x1102>x1103))+x1104);

    if (t139 != 4294967294LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1106 = -61LL;
	uint32_t x1107 = UINT32_MAX;
	int32_t x1108 = INT32_MIN;
	int32_t t140 = 1;

    t140 = ((x1105>>(x1106>x1107))+x1108);

    if (t140 != -2147483271) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x1113 = 2146U;
	volatile int8_t x1114 = -12;
	uint8_t x1115 = 10U;
	int32_t t141 = 20;

    t141 = ((x1113>>(x1114>x1115))+x1116);

    if (t141 != -30622) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1133 = 1;
	int16_t x1134 = 1;
	int8_t x1136 = -15;
	int32_t t142 = 9;

    t142 = ((x1133>>(x1134>x1135))+x1136);

    if (t142 != -14) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x1137 = UINT16_MAX;
	int64_t x1139 = INT64_MAX;
	int32_t t143 = -14;

    t143 = ((x1137>>(x1138>x1139))+x1140);

    if (t143 != 65407) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x1141 = 592811327600951LLU;
	int32_t x1142 = -31184509;
	volatile uint32_t x1143 = 6U;
	uint8_t x1144 = UINT8_MAX;
	uint64_t t144 = 161LLU;

    t144 = ((x1141>>(x1142>x1143))+x1144);

    if (t144 != 296405663800730LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x1145 = UINT16_MAX;
	static volatile int64_t x1146 = -1LL;
	int16_t x1147 = INT16_MAX;
	uint32_t x1148 = UINT32_MAX;

    t145 = ((x1145>>(x1146>x1147))+x1148);

    if (t145 != 65534U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x1149 = INT32_MAX;
	int16_t x1151 = 7;
	uint32_t x1152 = 680U;
	uint32_t t146 = 12545U;

    t146 = ((x1149>>(x1150>x1151))+x1152);

    if (t146 != 1073742503U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x1153 = UINT32_MAX;
	volatile int32_t x1154 = INT32_MIN;
	uint8_t x1155 = 14U;
	int8_t x1156 = INT8_MIN;
	volatile uint32_t t147 = 43316946U;

    t147 = ((x1153>>(x1154>x1155))+x1156);

    if (t147 != 4294967167U) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x1165 = 1U;
	static uint8_t x1166 = UINT8_MAX;
	static int8_t x1167 = -28;
	int64_t x1168 = -1LL;
	int64_t t148 = -55268LL;

    t148 = ((x1165>>(x1166>x1167))+x1168);

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x1169 = 278U;
	static uint64_t x1170 = 92697480636283LLU;
	static uint64_t x1171 = 8112LLU;
	int16_t x1172 = -6;
	int32_t t149 = -30;

    t149 = ((x1169>>(x1170>x1171))+x1172);

    if (t149 != 133) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x1177 = 0U;
	int32_t x1178 = 1;
	int16_t x1179 = INT16_MIN;
	int32_t t150 = 6568;

    t150 = ((x1177>>(x1178>x1179))+x1180);

    if (t150 != 72) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x1181 = 2089559712LL;
	int32_t x1182 = INT32_MAX;
	int64_t x1183 = INT64_MAX;
	uint16_t x1184 = 5U;
	static volatile int64_t t151 = 40LL;

    t151 = ((x1181>>(x1182>x1183))+x1184);

    if (t151 != 2089559717LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x1185 = UINT16_MAX;
	volatile uint16_t x1186 = 9U;
	volatile int8_t x1187 = INT8_MIN;
	int16_t x1188 = -1;
	int32_t t152 = -82671531;

    t152 = ((x1185>>(x1186>x1187))+x1188);

    if (t152 != 32766) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1189 = INT8_MAX;
	int16_t x1191 = 1;
	static volatile int8_t x1192 = 31;
	int32_t t153 = 5;

    t153 = ((x1189>>(x1190>x1191))+x1192);

    if (t153 != 158) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint8_t x1193 = 9U;
	int8_t x1194 = INT8_MIN;
	int8_t x1195 = INT8_MIN;
	static int16_t x1196 = INT16_MIN;
	int32_t t154 = 83235376;

    t154 = ((x1193>>(x1194>x1195))+x1196);

    if (t154 != -32759) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1209 = UINT64_MAX;
	uint32_t x1210 = 2018U;
	uint32_t x1212 = 59U;
	uint64_t t155 = 1435965144141LLU;

    t155 = ((x1209>>(x1210>x1211))+x1212);

    if (t155 != 58LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x1213 = 0U;
	static volatile int16_t x1215 = -1;
	volatile int64_t t156 = 3496218LL;

    t156 = ((x1213>>(x1214>x1215))+x1216);

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x1217 = 271U;
	int8_t x1218 = INT8_MIN;
	int16_t x1219 = 0;
	static int16_t x1220 = INT16_MIN;

    t157 = ((x1217>>(x1218>x1219))+x1220);

    if (t157 != -32497) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1221 = 54;
	int16_t x1222 = INT16_MIN;
	static uint32_t x1223 = 1161U;

    t158 = ((x1221>>(x1222>x1223))+x1224);

    if (t158 != 217333078U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x1229 = 23U;
	int8_t x1230 = INT8_MAX;
	uint16_t x1231 = 0U;
	static int8_t x1232 = INT8_MIN;
	int32_t t159 = -101740;

    t159 = ((x1229>>(x1230>x1231))+x1232);

    if (t159 != -117) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1238 = 0;
	int64_t x1239 = 559749215LL;
	static volatile uint64_t x1240 = UINT64_MAX;
	static volatile uint64_t t160 = 127509924984435716LLU;

    t160 = ((x1237>>(x1238>x1239))+x1240);

    if (t160 != 2147483646LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint8_t x1253 = 11U;
	uint64_t x1254 = UINT64_MAX;
	int16_t x1255 = INT16_MIN;
	uint32_t x1256 = UINT32_MAX;
	uint32_t t161 = 3586U;

    t161 = ((x1253>>(x1254>x1255))+x1256);

    if (t161 != 4U) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x1261 = 8U;
	int64_t x1262 = INT64_MIN;
	static int64_t x1264 = 18544042052LL;
	int64_t t162 = -25711765613305LL;

    t162 = ((x1261>>(x1262>x1263))+x1264);

    if (t162 != 18544042060LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x1281 = INT8_MAX;
	uint16_t x1282 = 105U;
	volatile int8_t x1283 = -1;
	uint32_t t163 = 147335U;

    t163 = ((x1281>>(x1282>x1283))+x1284);

    if (t163 != 110314U) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1302 = -1;
	uint32_t x1303 = UINT32_MAX;
	uint8_t x1304 = 5U;
	volatile int32_t t164 = -301731486;

    t164 = ((x1301>>(x1302>x1303))+x1304);

    if (t164 != 1721) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x1309 = 0U;
	uint16_t x1310 = 63U;
	uint16_t x1312 = 70U;

    t165 = ((x1309>>(x1310>x1311))+x1312);

    if (t165 != 70) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x1313 = 8789855;
	int64_t x1314 = 1083LL;
	int32_t x1315 = -1;
	uint32_t x1316 = 120606U;
	static volatile uint32_t t166 = 14U;

    t166 = ((x1313>>(x1314>x1315))+x1316);

    if (t166 != 4515533U) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x1318 = 1;
	int32_t x1319 = INT32_MAX;
	uint32_t x1320 = 4550250U;
	uint32_t t167 = 141205U;

    t167 = ((x1317>>(x1318>x1319))+x1320);

    if (t167 != 4583017U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x1329 = 3703LLU;
	int16_t x1330 = INT16_MIN;
	int8_t x1332 = -1;
	volatile uint64_t t168 = 3437006218171647LLU;

    t168 = ((x1329>>(x1330>x1331))+x1332);

    if (t168 != 1850LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x1337 = 375473146LLU;
	static int16_t x1338 = 8670;
	int8_t x1339 = 2;
	static int8_t x1340 = INT8_MIN;

    t169 = ((x1337>>(x1338>x1339))+x1340);

    if (t169 != 187736445LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1344 = 3994U;
	int64_t t170 = 388214794LL;

    t170 = ((x1341>>(x1342>x1343))+x1344);

    if (t170 != 4611686018427391897LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1345 = 3U;
	uint32_t x1347 = UINT32_MAX;

    t171 = ((x1345>>(x1346>x1347))+x1348);

    if (t171 != 895212U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1349 = UINT32_MAX;
	uint16_t x1350 = 613U;
	volatile int32_t x1352 = INT32_MAX;
	uint32_t t172 = 373U;

    t172 = ((x1349>>(x1350>x1351))+x1352);

    if (t172 != 4294967294U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x1357 = 14;
	uint64_t x1358 = 7713860810890LLU;
	int8_t x1359 = 1;
	static volatile int8_t x1360 = -1;
	int32_t t173 = 7222;

    t173 = ((x1357>>(x1358>x1359))+x1360);

    if (t173 != 6) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x1361 = 26;
	static int16_t x1362 = -1;
	int32_t t174 = -302;

    t174 = ((x1361>>(x1362>x1363))+x1364);

    if (t174 != -32755) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x1369 = UINT16_MAX;
	volatile uint16_t x1371 = UINT16_MAX;
	int16_t x1372 = INT16_MIN;

    t175 = ((x1369>>(x1370>x1371))+x1372);

    if (t175 != 32767) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1377 = 5U;
	uint32_t x1379 = 94U;
	volatile int32_t t176 = -1455;

    t176 = ((x1377>>(x1378>x1379))+x1380);

    if (t176 != -2147483646) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1382 = INT32_MIN;
	int64_t x1383 = INT64_MAX;
	uint8_t x1384 = UINT8_MAX;

    t177 = ((x1381>>(x1382>x1383))+x1384);

    if (t177 != 65790) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1389 = 4392U;
	uint32_t x1390 = 1246734U;
	static volatile uint64_t x1391 = UINT64_MAX;
	int16_t x1392 = -3946;
	volatile uint32_t t178 = 1U;

    t178 = ((x1389>>(x1390>x1391))+x1392);

    if (t178 != 446U) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1393 = 13;
	int64_t x1394 = INT64_MAX;
	uint16_t x1395 = 84U;
	int16_t x1396 = INT16_MIN;

    t179 = ((x1393>>(x1394>x1395))+x1396);

    if (t179 != -32762) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x1397 = 200LLU;
	uint32_t x1398 = 6213U;
	volatile int32_t x1399 = INT32_MAX;
	int16_t x1400 = -506;
	static uint64_t t180 = 32273LLU;

    t180 = ((x1397>>(x1398>x1399))+x1400);

    if (t180 != 18446744073709551310LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1401 = INT64_MAX;
	int32_t x1402 = -1;
	static int16_t x1403 = INT16_MIN;
	volatile int64_t x1404 = 45LL;
	int64_t t181 = -2285991549LL;

    t181 = ((x1401>>(x1402>x1403))+x1404);

    if (t181 != 4611686018427387948LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x1407 = INT16_MIN;
	volatile int64_t x1408 = INT64_MIN;
	uint64_t t182 = UINT64_MAX;

    t182 = ((x1405>>(x1406>x1407))+x1408);

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1409 = 28U;
	volatile int16_t x1411 = -1;
	volatile int32_t t183 = -7459;

    t183 = ((x1409>>(x1410>x1411))+x1412);

    if (t183 != -5763) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1425 = 15;
	uint8_t x1427 = 2U;
	int16_t x1428 = INT16_MAX;
	int32_t t184 = -3432700;

    t184 = ((x1425>>(x1426>x1427))+x1428);

    if (t184 != 32774) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1429 = INT8_MAX;
	int16_t x1430 = INT16_MIN;
	volatile uint8_t x1431 = 111U;
	int32_t t185 = -32;

    t185 = ((x1429>>(x1430>x1431))+x1432);

    if (t185 != 55) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1433 = UINT64_MAX;
	int64_t x1434 = 24834701018286907LL;
	static int8_t x1435 = INT8_MIN;
	static uint16_t x1436 = 1008U;

    t186 = ((x1433>>(x1434>x1435))+x1436);

    if (t186 != 9223372036854776815LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x1438 = INT8_MIN;
	static uint16_t x1439 = 13U;
	int8_t x1440 = -15;
	volatile int32_t t187 = 15089;

    t187 = ((x1437>>(x1438>x1439))+x1440);

    if (t187 != 112) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1446 = -8;
	volatile uint16_t x1447 = 933U;
	int64_t x1448 = INT64_MIN;
	volatile int64_t t188 = -628364331156374LL;

    t188 = ((x1445>>(x1446>x1447))+x1448);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1457 = 642U;
	static int32_t x1460 = INT32_MIN;
	int32_t t189 = 1475652;

    t189 = ((x1457>>(x1458>x1459))+x1460);

    if (t189 != -2147483006) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x1465 = UINT32_MAX;
	int16_t x1466 = -1;
	static int8_t x1467 = -1;
	uint8_t x1468 = UINT8_MAX;
	uint32_t t190 = 456594U;

    t190 = ((x1465>>(x1466>x1467))+x1468);

    if (t190 != 254U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1473 = 2848571160144949LLU;
	static uint32_t x1474 = 1U;
	static volatile int64_t x1475 = INT64_MIN;

    t191 = ((x1473>>(x1474>x1475))+x1476);

    if (t191 != 1424285580072346LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1489 = 104202743039LL;
	int64_t x1490 = INT64_MIN;
	int16_t x1491 = INT16_MAX;
	int32_t x1492 = INT32_MIN;
	static volatile int64_t t192 = -13280123003597201LL;

    t192 = ((x1489>>(x1490>x1491))+x1492);

    if (t192 != 102055259391LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1493 = 153672119U;
	int16_t x1494 = INT16_MAX;
	uint16_t x1495 = 18750U;
	int64_t x1496 = 765589363041LL;
	int64_t t193 = -5140259372222680LL;

    t193 = ((x1493>>(x1494>x1495))+x1496);

    if (t193 != 765666199100LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1497 = UINT64_MAX;
	static int32_t x1498 = -1;
	int32_t x1500 = INT32_MAX;
	static uint64_t t194 = 1641727402269552LLU;

    t194 = ((x1497>>(x1498>x1499))+x1500);

    if (t194 != 2147483646LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1501 = INT64_MAX;
	uint32_t x1502 = UINT32_MAX;
	static int8_t x1503 = 1;
	int64_t t195 = 527706117LL;

    t195 = ((x1501>>(x1502>x1503))+x1504);

    if (t195 != 4611686018427387916LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint16_t x1505 = UINT16_MAX;
	int16_t x1507 = -1;
	uint64_t x1508 = UINT64_MAX;
	volatile uint64_t t196 = 3244041871464790LLU;

    t196 = ((x1505>>(x1506>x1507))+x1508);

    if (t196 != 65534LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1509 = 311115027152LL;
	int64_t x1510 = INT64_MIN;
	uint8_t x1511 = 1U;
	int32_t x1512 = INT32_MAX;

    t197 = ((x1509>>(x1510>x1511))+x1512);

    if (t197 != 313262510799LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1513 = INT64_MAX;
	static uint32_t x1514 = 119686U;
	volatile int32_t x1515 = 15840;
	static volatile int64_t x1516 = -1LL;

    t198 = ((x1513>>(x1514>x1515))+x1516);

    if (t198 != 4611686018427387902LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x1525 = UINT16_MAX;
	volatile uint32_t x1526 = 59939280U;
	int32_t x1527 = INT32_MAX;
	int32_t x1528 = -1;
	volatile int32_t t199 = -3133;

    t199 = ((x1525>>(x1526>x1527))+x1528);

    if (t199 != 65534) { NG(); } else { ; }
	
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

