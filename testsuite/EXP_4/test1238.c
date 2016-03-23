
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

static int32_t x1 = INT32_MAX;
static volatile int32_t t0 = INT32_MAX;
static volatile int16_t x6 = 209;
static volatile int64_t x15 = -1LL;
uint32_t x21 = 91U;
int8_t x24 = INT8_MIN;
int32_t t5 = 0;
volatile int8_t x43 = INT8_MIN;
uint32_t t6 = 60U;
int16_t x46 = 0;
static volatile int64_t x48 = INT64_MAX;
static volatile int64_t x72 = 6747391444LL;
uint16_t x73 = UINT16_MAX;
uint8_t x74 = UINT8_MAX;
int32_t t10 = 4862;
int8_t x137 = INT8_MAX;
int32_t t16 = 194;
int16_t x145 = INT16_MAX;
int32_t t18 = 30429379;
uint64_t x159 = 1014LLU;
volatile int64_t t20 = INT64_MAX;
int8_t x181 = 3;
uint16_t x203 = 1U;
int64_t t23 = 1017680571LL;
int32_t x209 = INT32_MAX;
int64_t x211 = -3698LL;
int64_t x212 = -1LL;
int16_t x225 = INT16_MAX;
int32_t x228 = INT32_MIN;
int32_t t25 = -1226;
volatile int8_t x243 = 2;
volatile int64_t x260 = 651LL;
uint8_t x278 = 84U;
int16_t x292 = 3;
static volatile uint32_t t33 = 2189U;
volatile uint64_t x303 = UINT64_MAX;
uint64_t x315 = 66850244116345140LLU;
int64_t x316 = INT64_MIN;
static int64_t t37 = 133282768LL;
volatile int32_t x319 = INT32_MIN;
uint16_t x320 = 3U;
static volatile uint64_t t39 = 27408436094LLU;
volatile int16_t x326 = INT16_MIN;
volatile uint8_t x331 = 8U;
uint64_t x336 = 7184486397132769644LLU;
volatile int64_t x353 = 3303773066704011520LL;
volatile int32_t t45 = -52;
uint64_t x364 = 2761059LLU;
uint64_t x389 = UINT64_MAX;
volatile uint64_t t51 = 2502568926307LLU;
volatile int32_t t52 = -64;
static int32_t t53 = -1;
volatile uint64_t x408 = 966766LLU;
static volatile int64_t t54 = -52730LL;
uint64_t x413 = 150LLU;
int64_t x416 = INT64_MIN;
int8_t x427 = -1;
int16_t x435 = INT16_MIN;
int32_t t59 = 71;
uint64_t x452 = UINT64_MAX;
volatile int64_t x475 = INT64_MAX;
uint8_t x506 = 1U;
uint64_t x521 = 81052427663LLU;
uint16_t x534 = UINT16_MAX;
int32_t x535 = 893872542;
volatile int8_t x556 = -1;
uint8_t x567 = 46U;
int8_t x568 = INT8_MIN;
static volatile int16_t x570 = INT16_MIN;
static uint8_t x575 = UINT8_MAX;
volatile int16_t x577 = 36;
uint16_t x578 = 13U;
int8_t x581 = INT8_MAX;
int32_t t75 = 578170;
int8_t x602 = INT8_MAX;
int64_t x603 = INT64_MAX;
static int32_t t77 = 3333354;
volatile uint8_t x643 = 20U;
static int64_t x659 = 167842LL;
volatile int32_t t82 = 1;
int32_t x667 = INT32_MIN;
uint8_t x686 = 8U;
volatile int32_t x691 = 69255591;
int8_t x703 = -5;
int32_t x739 = -199287338;
volatile int32_t x756 = INT32_MIN;
int32_t x760 = 290301170;
static int64_t x762 = INT64_MAX;
int32_t x763 = -288695;
uint32_t x768 = 3560U;
int16_t x771 = INT16_MAX;
int32_t x785 = INT32_MAX;
int32_t x792 = INT32_MAX;
uint16_t x842 = 1U;
static volatile int64_t x867 = -247696997LL;
static volatile int32_t x878 = 1388;
int32_t t106 = 16457;
int32_t x884 = INT32_MAX;
uint32_t x885 = UINT32_MAX;
uint64_t x892 = 3574328319LLU;
volatile int32_t t109 = 4;
static int8_t x915 = INT8_MIN;
static uint64_t x921 = 1LLU;
uint64_t t112 = 28180772401931LLU;
static uint32_t x926 = 2551121U;
static int8_t x928 = -1;
uint32_t t113 = 670U;
int32_t x934 = 7091536;
int64_t x952 = -618110656075LL;
int64_t x959 = 518110435477694508LL;
int16_t x962 = INT16_MIN;
int64_t x980 = 16LL;
static volatile int32_t t121 = -30;
volatile int32_t t122 = -185530450;
int64_t x993 = 154425496173LL;
static uint32_t x994 = 12U;
int16_t x996 = -130;
int64_t x1008 = 176686LL;
uint64_t t126 = UINT64_MAX;
uint16_t x1013 = UINT16_MAX;
uint64_t x1021 = 52129534LLU;
volatile uint32_t x1049 = UINT32_MAX;
uint32_t x1067 = UINT32_MAX;
uint8_t x1077 = UINT8_MAX;
uint16_t x1081 = 1U;
int32_t t133 = 0;
volatile int8_t x1088 = INT8_MIN;
int32_t x1122 = 3;
uint16_t x1159 = UINT16_MAX;
int8_t x1160 = 1;
int64_t x1189 = INT64_MAX;
uint32_t x1191 = UINT32_MAX;
int64_t t141 = INT64_MAX;
volatile int8_t x1205 = 12;
int32_t x1207 = INT32_MIN;
uint16_t x1213 = UINT16_MAX;
int32_t t146 = 51260787;
static uint64_t x1235 = 40211447LLU;
volatile int32_t t149 = -2;
int64_t x1242 = -236LL;
static int8_t x1244 = 1;
int16_t x1284 = -1;
uint64_t t156 = 2815919294047097116LLU;
uint64_t x1289 = 173698930417390095LLU;
int8_t x1291 = 0;
int32_t x1300 = INT32_MIN;
volatile int16_t x1328 = INT16_MIN;
static int64_t x1334 = 24472323135610LL;
volatile uint32_t x1346 = 61U;
static volatile int32_t t163 = 27576126;
int32_t x1352 = INT32_MIN;
uint16_t x1353 = UINT16_MAX;
int32_t x1359 = INT32_MIN;
uint8_t x1360 = 3U;
uint32_t t166 = 816317498U;
int16_t x1370 = INT16_MIN;
int8_t x1375 = -1;
static int8_t x1383 = 0;
int32_t x1391 = INT32_MIN;
volatile int8_t x1402 = INT8_MAX;
volatile int32_t t173 = INT32_MAX;
int32_t x1446 = 3568094;
static int8_t x1447 = INT8_MIN;
int8_t x1449 = INT8_MAX;
static int16_t x1451 = INT16_MIN;
volatile int32_t t177 = 91904690;
uint32_t x1454 = UINT32_MAX;
int16_t x1456 = INT16_MIN;
int8_t x1461 = 14;
uint16_t x1469 = 356U;
volatile int32_t t184 = -21696068;
int64_t x1505 = INT64_MAX;
int16_t x1510 = -55;
uint64_t x1513 = 4677456824571684861LLU;
volatile uint32_t t188 = 1289042U;
int32_t t189 = 0;
volatile int8_t x1527 = 0;
uint16_t x1542 = 0U;
int16_t x1543 = INT16_MAX;
int32_t t192 = 3;
volatile uint8_t x1546 = 19U;
volatile int8_t x1550 = 10;
uint16_t x1559 = UINT16_MAX;
int64_t x1573 = INT64_MAX;
uint64_t x1574 = UINT64_MAX;
uint8_t x1581 = UINT8_MAX;
int16_t x1582 = INT16_MIN;
int32_t x1584 = -1;
int8_t x1590 = INT8_MIN;
static volatile int64_t x1592 = INT64_MAX;
volatile int32_t t198 = 8385513;
uint16_t x1605 = UINT16_MAX;
int8_t x1607 = -6;


void f0(void) {
    	static volatile int8_t x2 = INT8_MIN;
	volatile int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MAX;

    t0 = (x1<<(x2%(x3!=x4)));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x5 = 6;
	static int16_t x7 = INT16_MIN;
	static uint8_t x8 = 1U;
	volatile int32_t t1 = -41942;

    t1 = (x5<<(x6%(x7!=x8)));

    if (t1 != 6) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 413U;
	int64_t x10 = -17852LL;
	int64_t x11 = INT64_MIN;
	uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = -7522;

    t2 = (x9<<(x10%(x11!=x12)));

    if (t2 != 413) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	int8_t x14 = INT8_MIN;
	volatile int16_t x16 = INT16_MAX;
	int32_t t3 = -19872;

    t3 = (x13<<(x14%(x15!=x16)));

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x22 = INT16_MAX;
	int16_t x23 = INT16_MIN;
	uint32_t t4 = 0U;

    t4 = (x21<<(x22%(x23!=x24)));

    if (t4 != 91U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x25 = 1U;
	int16_t x26 = INT16_MIN;
	int8_t x27 = INT8_MIN;
	volatile uint8_t x28 = 3U;

    t5 = (x25<<(x26%(x27!=x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x41 = 77855017U;
	volatile int64_t x42 = INT64_MIN;
	int8_t x44 = -1;

    t6 = (x41<<(x42%(x43!=x44)));

    if (t6 != 77855017U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x45 = 6270255257679LL;
	uint32_t x47 = 7U;
	volatile int64_t t7 = -13738614727LL;

    t7 = (x45<<(x46%(x47!=x48)));

    if (t7 != 6270255257679LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x57 = INT16_MAX;
	uint8_t x58 = 2U;
	int8_t x59 = INT8_MIN;
	uint8_t x60 = UINT8_MAX;
	static int32_t t8 = -829;

    t8 = (x57<<(x58%(x59!=x60)));

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint64_t x69 = 3895764355494LLU;
	uint16_t x70 = 6016U;
	int64_t x71 = INT64_MAX;
	static volatile uint64_t t9 = 3801903516771002642LLU;

    t9 = (x69<<(x70%(x71!=x72)));

    if (t9 != 3895764355494LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x75 = UINT32_MAX;
	static uint32_t x76 = 5306U;

    t10 = (x73<<(x74%(x75!=x76)));

    if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x85 = INT16_MAX;
	uint16_t x86 = 888U;
	uint16_t x87 = 1691U;
	uint64_t x88 = 24357528914LLU;
	volatile int32_t t11 = 102118;

    t11 = (x85<<(x86%(x87!=x88)));

    if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x89 = 1U;
	int16_t x90 = INT16_MAX;
	int32_t x91 = INT32_MIN;
	volatile uint64_t x92 = UINT64_MAX;
	volatile int32_t t12 = -71;

    t12 = (x89<<(x90%(x91!=x92)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x117 = 629U;
	volatile int16_t x118 = INT16_MIN;
	uint8_t x119 = 0U;
	volatile int32_t x120 = 44;
	int32_t t13 = -573;

    t13 = (x117<<(x118%(x119!=x120)));

    if (t13 != 629) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x125 = 830U;
	static volatile int8_t x126 = 4;
	int64_t x127 = INT64_MAX;
	int8_t x128 = INT8_MIN;
	uint32_t t14 = 5640071U;

    t14 = (x125<<(x126%(x127!=x128)));

    if (t14 != 830U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x138 = INT64_MIN;
	uint64_t x139 = 392LLU;
	uint64_t x140 = 647391LLU;
	int32_t t15 = -9471407;

    t15 = (x137<<(x138%(x139!=x140)));

    if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x141 = 0;
	static volatile int32_t x142 = -8521320;
	static uint32_t x143 = 87922U;
	int64_t x144 = -1LL;

    t16 = (x141<<(x142%(x143!=x144)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x146 = INT8_MIN;
	static uint8_t x147 = UINT8_MAX;
	uint64_t x148 = UINT64_MAX;
	volatile int32_t t17 = -4124;

    t17 = (x145<<(x146%(x147!=x148)));

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x149 = INT8_MAX;
	volatile uint64_t x150 = UINT64_MAX;
	int8_t x151 = -5;
	int8_t x152 = INT8_MAX;

    t18 = (x149<<(x150%(x151!=x152)));

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x157 = INT8_MAX;
	int64_t x158 = INT64_MAX;
	uint16_t x160 = UINT16_MAX;
	static volatile int32_t t19 = 3577;

    t19 = (x157<<(x158%(x159!=x160)));

    if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x177 = INT64_MAX;
	int8_t x178 = 33;
	volatile int16_t x179 = INT16_MIN;
	static int32_t x180 = -122;

    t20 = (x177<<(x178%(x179!=x180)));

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x182 = UINT32_MAX;
	int32_t x183 = 5159212;
	uint64_t x184 = 833040863LLU;
	int32_t t21 = -7;

    t21 = (x181<<(x182%(x183!=x184)));

    if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x193 = 8;
	volatile int64_t x194 = 49LL;
	int64_t x195 = INT64_MIN;
	int16_t x196 = INT16_MAX;
	volatile int32_t t22 = 737413;

    t22 = (x193<<(x194%(x195!=x196)));

    if (t22 != 8) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x201 = 10346763382282514LL;
	static int32_t x202 = INT32_MAX;
	static int32_t x204 = INT32_MAX;

    t23 = (x201<<(x202%(x203!=x204)));

    if (t23 != 10346763382282514LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x210 = UINT64_MAX;
	volatile int32_t t24 = INT32_MAX;

    t24 = (x209<<(x210%(x211!=x212)));

    if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x226 = INT64_MIN;
	uint16_t x227 = 29U;

    t25 = (x225<<(x226%(x227!=x228)));

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x237 = UINT64_MAX;
	int16_t x238 = -1;
	volatile int16_t x239 = 60;
	uint64_t x240 = 39LLU;
	volatile uint64_t t26 = UINT64_MAX;

    t26 = (x237<<(x238%(x239!=x240)));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x241 = 1LLU;
	int32_t x242 = INT32_MIN;
	uint32_t x244 = 18034586U;
	volatile uint64_t t27 = 49839866189LLU;

    t27 = (x241<<(x242%(x243!=x244)));

    if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x257 = 1209U;
	uint64_t x258 = 4296884441LLU;
	int16_t x259 = INT16_MAX;
	int32_t t28 = -1387;

    t28 = (x257<<(x258%(x259!=x260)));

    if (t28 != 1209) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x265 = 12U;
	int8_t x266 = -5;
	int64_t x267 = -1LL;
	uint64_t x268 = 320495482523877926LLU;
	static volatile uint32_t t29 = 824547797U;

    t29 = (x265<<(x266%(x267!=x268)));

    if (t29 != 12U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x269 = 469503U;
	volatile int16_t x270 = 1241;
	int16_t x271 = INT16_MIN;
	volatile int32_t x272 = -1;
	volatile uint32_t t30 = 3486255U;

    t30 = (x269<<(x270%(x271!=x272)));

    if (t30 != 469503U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x277 = 904977091LLU;
	static volatile int16_t x279 = 268;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t31 = 58020LLU;

    t31 = (x277<<(x278%(x279!=x280)));

    if (t31 != 904977091LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x289 = 6;
	int8_t x290 = INT8_MIN;
	volatile uint8_t x291 = UINT8_MAX;
	volatile int32_t t32 = 16;

    t32 = (x289<<(x290%(x291!=x292)));

    if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x293 = 252838U;
	int32_t x294 = 7890352;
	static uint8_t x295 = 3U;
	int32_t x296 = 58092;

    t33 = (x293<<(x294%(x295!=x296)));

    if (t33 != 252838U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x297 = UINT32_MAX;
	int8_t x298 = INT8_MIN;
	uint8_t x299 = UINT8_MAX;
	int16_t x300 = -1;
	static volatile uint32_t t34 = UINT32_MAX;

    t34 = (x297<<(x298%(x299!=x300)));

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x301 = UINT16_MAX;
	uint64_t x302 = 6LLU;
	volatile uint8_t x304 = UINT8_MAX;
	volatile int32_t t35 = -3062;

    t35 = (x301<<(x302%(x303!=x304)));

    if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x305 = 65U;
	volatile int8_t x306 = -57;
	static volatile int16_t x307 = 31;
	volatile int32_t x308 = -178081;
	int32_t t36 = -1;

    t36 = (x305<<(x306%(x307!=x308)));

    if (t36 != 65) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x313 = 5905LL;
	static int64_t x314 = 1065LL;

    t37 = (x313<<(x314%(x315!=x316)));

    if (t37 != 5905LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x317 = 796523552542279LL;
	int32_t x318 = 175115;
	static volatile int64_t t38 = -845950165057368LL;

    t38 = (x317<<(x318%(x319!=x320)));

    if (t38 != 796523552542279LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x321 = 92488256773LLU;
	int32_t x322 = INT32_MAX;
	volatile int8_t x323 = -10;
	volatile int16_t x324 = -1;

    t39 = (x321<<(x322%(x323!=x324)));

    if (t39 != 92488256773LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x325 = 2551;
	volatile int8_t x327 = 3;
	volatile int64_t x328 = 304212923890LL;
	volatile int32_t t40 = -4394330;

    t40 = (x325<<(x326%(x327!=x328)));

    if (t40 != 2551) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x329 = 7LLU;
	int8_t x330 = INT8_MAX;
	uint32_t x332 = 51467783U;
	volatile uint64_t t41 = 17LLU;

    t41 = (x329<<(x330%(x331!=x332)));

    if (t41 != 7LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x333 = 989U;
	int16_t x334 = -1;
	uint64_t x335 = 12LLU;
	static int32_t t42 = -91;

    t42 = (x333<<(x334%(x335!=x336)));

    if (t42 != 989) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x349 = 52U;
	int64_t x350 = INT64_MIN;
	volatile int16_t x351 = INT16_MIN;
	int16_t x352 = INT16_MAX;
	volatile int32_t t43 = 120663;

    t43 = (x349<<(x350%(x351!=x352)));

    if (t43 != 52) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x354 = INT32_MAX;
	int16_t x355 = -13413;
	volatile int16_t x356 = 242;
	volatile int64_t t44 = -1965LL;

    t44 = (x353<<(x354%(x355!=x356)));

    if (t44 != 3303773066704011520LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x357 = INT8_MAX;
	int32_t x358 = -7336;
	volatile int32_t x359 = INT32_MIN;
	static uint32_t x360 = 94920233U;

    t45 = (x357<<(x358%(x359!=x360)));

    if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint64_t x361 = 6719023371011419LLU;
	static uint32_t x362 = 70592U;
	volatile int64_t x363 = INT64_MIN;
	volatile uint64_t t46 = 37845LLU;

    t46 = (x361<<(x362%(x363!=x364)));

    if (t46 != 6719023371011419LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x369 = 55;
	volatile uint8_t x370 = 0U;
	static int8_t x371 = -2;
	static uint32_t x372 = 23U;
	int32_t t47 = 168;

    t47 = (x369<<(x370%(x371!=x372)));

    if (t47 != 55) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x377 = 19;
	static int32_t x378 = 1;
	static int32_t x379 = INT32_MIN;
	uint32_t x380 = 82663U;
	int32_t t48 = -53;

    t48 = (x377<<(x378%(x379!=x380)));

    if (t48 != 19) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x385 = UINT64_MAX;
	int32_t x386 = INT32_MAX;
	int32_t x387 = INT32_MAX;
	uint64_t x388 = UINT64_MAX;
	uint64_t t49 = UINT64_MAX;

    t49 = (x385<<(x386%(x387!=x388)));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x390 = 957454496280980885LLU;
	static int8_t x391 = INT8_MIN;
	int64_t x392 = 44311LL;
	static uint64_t t50 = UINT64_MAX;

    t50 = (x389<<(x390%(x391!=x392)));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x393 = 100619881900524LLU;
	uint32_t x394 = 6U;
	int8_t x395 = INT8_MAX;
	uint8_t x396 = UINT8_MAX;

    t51 = (x393<<(x394%(x395!=x396)));

    if (t51 != 100619881900524LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x397 = 294;
	uint8_t x398 = UINT8_MAX;
	int32_t x399 = -1;
	uint8_t x400 = 12U;

    t52 = (x397<<(x398%(x399!=x400)));

    if (t52 != 294) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x401 = 1365U;
	int64_t x402 = -1LL;
	uint8_t x403 = 15U;
	uint64_t x404 = 798LLU;

    t53 = (x401<<(x402%(x403!=x404)));

    if (t53 != 1365) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x405 = 0LL;
	int16_t x406 = INT16_MIN;
	uint32_t x407 = UINT32_MAX;

    t54 = (x405<<(x406%(x407!=x408)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x409 = INT16_MAX;
	static volatile uint8_t x410 = 19U;
	volatile int32_t x411 = -11152786;
	static int8_t x412 = -1;
	volatile int32_t t55 = 951;

    t55 = (x409<<(x410%(x411!=x412)));

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x414 = 6507U;
	int8_t x415 = 33;
	volatile uint64_t t56 = 482LLU;

    t56 = (x413<<(x414%(x415!=x416)));

    if (t56 != 150LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x425 = UINT64_MAX;
	int16_t x426 = -1;
	static int32_t x428 = 199213718;
	uint64_t t57 = UINT64_MAX;

    t57 = (x425<<(x426%(x427!=x428)));

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x433 = INT16_MAX;
	volatile uint64_t x434 = UINT64_MAX;
	uint64_t x436 = UINT64_MAX;
	volatile int32_t t58 = -5593356;

    t58 = (x433<<(x434%(x435!=x436)));

    if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x445 = 4;
	int8_t x446 = INT8_MAX;
	uint64_t x447 = 1070LLU;
	int8_t x448 = 0;

    t59 = (x445<<(x446%(x447!=x448)));

    if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x449 = 12171U;
	static uint8_t x450 = 1U;
	volatile int32_t x451 = INT32_MAX;
	volatile int32_t t60 = -15;

    t60 = (x449<<(x450%(x451!=x452)));

    if (t60 != 12171) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x473 = INT64_MAX;
	int8_t x474 = INT8_MIN;
	int16_t x476 = INT16_MIN;
	static int64_t t61 = INT64_MAX;

    t61 = (x473<<(x474%(x475!=x476)));

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x477 = 1;
	volatile uint16_t x478 = 1705U;
	volatile uint8_t x479 = 0U;
	int16_t x480 = INT16_MIN;
	int32_t t62 = -2466;

    t62 = (x477<<(x478%(x479!=x480)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x497 = 23U;
	uint8_t x498 = UINT8_MAX;
	uint8_t x499 = 14U;
	uint32_t x500 = 973U;
	volatile int32_t t63 = 965;

    t63 = (x497<<(x498%(x499!=x500)));

    if (t63 != 23) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x501 = 2U;
	int8_t x502 = INT8_MIN;
	int16_t x503 = INT16_MAX;
	int32_t x504 = INT32_MIN;
	static volatile int32_t t64 = -192605;

    t64 = (x501<<(x502%(x503!=x504)));

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x505 = 1U;
	uint32_t x507 = 6U;
	int16_t x508 = INT16_MIN;
	uint32_t t65 = 152U;

    t65 = (x505<<(x506%(x507!=x508)));

    if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x522 = 0U;
	int64_t x523 = -1763639027758818LL;
	volatile int16_t x524 = -1;
	volatile uint64_t t66 = 12456570LLU;

    t66 = (x521<<(x522%(x523!=x524)));

    if (t66 != 81052427663LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x533 = UINT64_MAX;
	volatile uint16_t x536 = 226U;
	volatile uint64_t t67 = UINT64_MAX;

    t67 = (x533<<(x534%(x535!=x536)));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x553 = 2161LLU;
	volatile int8_t x554 = INT8_MIN;
	int32_t x555 = INT32_MIN;
	volatile uint64_t t68 = 2366680945738LLU;

    t68 = (x553<<(x554%(x555!=x556)));

    if (t68 != 2161LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x561 = INT16_MAX;
	volatile int32_t x562 = 1;
	int16_t x563 = INT16_MAX;
	volatile int16_t x564 = -1;
	volatile int32_t t69 = -1339027;

    t69 = (x561<<(x562%(x563!=x564)));

    if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x565 = UINT64_MAX;
	int8_t x566 = 27;
	static uint64_t t70 = UINT64_MAX;

    t70 = (x565<<(x566%(x567!=x568)));

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x569 = 1362;
	int32_t x571 = INT32_MIN;
	int16_t x572 = INT16_MAX;
	int32_t t71 = -1;

    t71 = (x569<<(x570%(x571!=x572)));

    if (t71 != 1362) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x573 = 2LL;
	int16_t x574 = 3092;
	int64_t x576 = INT64_MIN;
	volatile int64_t t72 = -466999LL;

    t72 = (x573<<(x574%(x575!=x576)));

    if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x579 = INT8_MIN;
	volatile uint8_t x580 = UINT8_MAX;
	volatile int32_t t73 = -56227144;

    t73 = (x577<<(x578%(x579!=x580)));

    if (t73 != 36) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x582 = INT32_MIN;
	static volatile uint16_t x583 = UINT16_MAX;
	static volatile int32_t x584 = INT32_MIN;
	int32_t t74 = 11264984;

    t74 = (x581<<(x582%(x583!=x584)));

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x585 = 3513;
	volatile int64_t x586 = 6213LL;
	volatile int32_t x587 = 230;
	uint8_t x588 = UINT8_MAX;

    t75 = (x585<<(x586%(x587!=x588)));

    if (t75 != 3513) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x589 = INT8_MAX;
	static uint32_t x590 = 796544U;
	static uint16_t x591 = 1U;
	static uint64_t x592 = 5018LLU;
	volatile int32_t t76 = 0;

    t76 = (x589<<(x590%(x591!=x592)));

    if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x601 = UINT8_MAX;
	int8_t x604 = -1;

    t77 = (x601<<(x602%(x603!=x604)));

    if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x605 = INT64_MAX;
	static uint16_t x606 = UINT16_MAX;
	int8_t x607 = 9;
	int32_t x608 = INT32_MIN;
	volatile int64_t t78 = INT64_MAX;

    t78 = (x605<<(x606%(x607!=x608)));

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x613 = 588746702418136085LL;
	int8_t x614 = INT8_MAX;
	int32_t x615 = -1;
	static uint32_t x616 = 0U;
	volatile int64_t t79 = 2LL;

    t79 = (x613<<(x614%(x615!=x616)));

    if (t79 != 588746702418136085LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x625 = INT32_MAX;
	static volatile uint8_t x626 = UINT8_MAX;
	uint32_t x627 = UINT32_MAX;
	static volatile int64_t x628 = 1232914154395081246LL;
	int32_t t80 = INT32_MAX;

    t80 = (x625<<(x626%(x627!=x628)));

    if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x641 = UINT8_MAX;
	int16_t x642 = INT16_MIN;
	int64_t x644 = -1LL;
	volatile int32_t t81 = -3;

    t81 = (x641<<(x642%(x643!=x644)));

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x657 = 2395;
	int32_t x658 = -1;
	volatile int32_t x660 = 58;

    t82 = (x657<<(x658%(x659!=x660)));

    if (t82 != 2395) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x665 = 6U;
	int32_t x666 = 275360;
	int8_t x668 = -1;
	volatile int32_t t83 = -1046;

    t83 = (x665<<(x666%(x667!=x668)));

    if (t83 != 6) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x673 = 2593U;
	int8_t x674 = INT8_MIN;
	int64_t x675 = -1LL;
	int32_t x676 = INT32_MIN;
	volatile int32_t t84 = -2424;

    t84 = (x673<<(x674%(x675!=x676)));

    if (t84 != 2593) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x685 = 109496LL;
	int64_t x687 = INT64_MIN;
	int16_t x688 = INT16_MAX;
	volatile int64_t t85 = -289831LL;

    t85 = (x685<<(x686%(x687!=x688)));

    if (t85 != 109496LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x689 = INT32_MAX;
	int64_t x690 = INT64_MIN;
	static volatile int16_t x692 = -1;
	volatile int32_t t86 = INT32_MAX;

    t86 = (x689<<(x690%(x691!=x692)));

    if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x693 = 0;
	volatile int64_t x694 = -1LL;
	uint16_t x695 = 131U;
	int64_t x696 = INT64_MIN;
	int32_t t87 = 71295178;

    t87 = (x693<<(x694%(x695!=x696)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x701 = 42;
	int64_t x702 = INT64_MAX;
	volatile uint8_t x704 = 55U;
	static volatile int32_t t88 = -24736;

    t88 = (x701<<(x702%(x703!=x704)));

    if (t88 != 42) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x721 = INT32_MAX;
	volatile int32_t x722 = -1;
	volatile uint64_t x723 = UINT64_MAX;
	static int64_t x724 = INT64_MIN;
	volatile int32_t t89 = INT32_MAX;

    t89 = (x721<<(x722%(x723!=x724)));

    if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x725 = 916U;
	int64_t x726 = -1LL;
	uint32_t x727 = 0U;
	uint64_t x728 = UINT64_MAX;
	static volatile int32_t t90 = -1;

    t90 = (x725<<(x726%(x727!=x728)));

    if (t90 != 916) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x737 = 921U;
	volatile int32_t x738 = -1;
	int16_t x740 = -25;
	int32_t t91 = 21326;

    t91 = (x737<<(x738%(x739!=x740)));

    if (t91 != 921) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x753 = UINT16_MAX;
	uint16_t x754 = 22U;
	uint16_t x755 = UINT16_MAX;
	volatile int32_t t92 = 7;

    t92 = (x753<<(x754%(x755!=x756)));

    if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x757 = 62U;
	static volatile int8_t x758 = INT8_MIN;
	volatile int16_t x759 = INT16_MIN;
	volatile int32_t t93 = -644;

    t93 = (x757<<(x758%(x759!=x760)));

    if (t93 != 62) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x761 = UINT64_MAX;
	uint16_t x764 = UINT16_MAX;
	uint64_t t94 = UINT64_MAX;

    t94 = (x761<<(x762%(x763!=x764)));

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x765 = 320919962LLU;
	volatile uint32_t x766 = 8U;
	uint32_t x767 = 20U;
	volatile uint64_t t95 = 24LLU;

    t95 = (x765<<(x766%(x767!=x768)));

    if (t95 != 320919962LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x769 = INT16_MAX;
	static int64_t x770 = INT64_MIN;
	int64_t x772 = -1LL;
	volatile int32_t t96 = 649541900;

    t96 = (x769<<(x770%(x771!=x772)));

    if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x786 = 97781U;
	int16_t x787 = -1;
	int32_t x788 = -49;
	int32_t t97 = INT32_MAX;

    t97 = (x785<<(x786%(x787!=x788)));

    if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x789 = INT64_MAX;
	int16_t x790 = 0;
	int8_t x791 = INT8_MIN;
	volatile int64_t t98 = INT64_MAX;

    t98 = (x789<<(x790%(x791!=x792)));

    if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x801 = 237U;
	uint64_t x802 = 3184315138588781LLU;
	int32_t x803 = INT32_MIN;
	int8_t x804 = INT8_MAX;
	uint32_t t99 = 78U;

    t99 = (x801<<(x802%(x803!=x804)));

    if (t99 != 237U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x809 = UINT32_MAX;
	static volatile int64_t x810 = INT64_MIN;
	int16_t x811 = INT16_MIN;
	static int32_t x812 = INT32_MIN;
	uint32_t t100 = UINT32_MAX;

    t100 = (x809<<(x810%(x811!=x812)));

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x821 = INT16_MAX;
	int8_t x822 = INT8_MIN;
	int64_t x823 = -1LL;
	uint16_t x824 = 49U;
	volatile int32_t t101 = 31;

    t101 = (x821<<(x822%(x823!=x824)));

    if (t101 != 32767) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x841 = 285775286991439065LL;
	int32_t x843 = 25;
	int32_t x844 = INT32_MIN;
	int64_t t102 = -3016411226743273088LL;

    t102 = (x841<<(x842%(x843!=x844)));

    if (t102 != 285775286991439065LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x845 = 402731LLU;
	int32_t x846 = INT32_MIN;
	uint16_t x847 = 4U;
	uint64_t x848 = 179LLU;
	volatile uint64_t t103 = 28LLU;

    t103 = (x845<<(x846%(x847!=x848)));

    if (t103 != 402731LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x857 = INT16_MAX;
	volatile int64_t x858 = INT64_MIN;
	int64_t x859 = INT64_MIN;
	int8_t x860 = 40;
	volatile int32_t t104 = 3712722;

    t104 = (x857<<(x858%(x859!=x860)));

    if (t104 != 32767) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x865 = 5U;
	uint32_t x866 = UINT32_MAX;
	int8_t x868 = -1;
	static volatile int32_t t105 = -1;

    t105 = (x865<<(x866%(x867!=x868)));

    if (t105 != 5) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x877 = 34265;
	int16_t x879 = -1;
	int16_t x880 = INT16_MAX;

    t106 = (x877<<(x878%(x879!=x880)));

    if (t106 != 34265) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x881 = INT16_MAX;
	static int8_t x882 = INT8_MIN;
	volatile int64_t x883 = INT64_MAX;
	volatile int32_t t107 = 396242449;

    t107 = (x881<<(x882%(x883!=x884)));

    if (t107 != 32767) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x886 = 60U;
	int16_t x887 = -11931;
	static int64_t x888 = -118850647061749742LL;
	volatile uint32_t t108 = UINT32_MAX;

    t108 = (x885<<(x886%(x887!=x888)));

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x889 = 12;
	static volatile int8_t x890 = -1;
	uint8_t x891 = 12U;

    t109 = (x889<<(x890%(x891!=x892)));

    if (t109 != 12) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x897 = 0;
	static int16_t x898 = 81;
	static uint16_t x899 = 2409U;
	int8_t x900 = 5;
	volatile int32_t t110 = 6342179;

    t110 = (x897<<(x898%(x899!=x900)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x913 = 1U;
	static uint64_t x914 = 35302252372195736LLU;
	uint8_t x916 = 56U;
	int32_t t111 = -369;

    t111 = (x913<<(x914%(x915!=x916)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x922 = INT64_MAX;
	static int32_t x923 = -1;
	uint32_t x924 = 160583644U;

    t112 = (x921<<(x922%(x923!=x924)));

    if (t112 != 1LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x925 = 21U;
	int8_t x927 = 0;

    t113 = (x925<<(x926%(x927!=x928)));

    if (t113 != 21U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x929 = INT64_MAX;
	uint64_t x930 = UINT64_MAX;
	volatile int64_t x931 = INT64_MIN;
	uint32_t x932 = 1622U;
	int64_t t114 = INT64_MAX;

    t114 = (x929<<(x930%(x931!=x932)));

    if (t114 != INT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x933 = INT8_MAX;
	static int16_t x935 = INT16_MIN;
	int8_t x936 = -1;
	static volatile int32_t t115 = 0;

    t115 = (x933<<(x934%(x935!=x936)));

    if (t115 != 127) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x937 = UINT16_MAX;
	static uint64_t x938 = 4067LLU;
	int16_t x939 = INT16_MAX;
	uint32_t x940 = 14494837U;
	volatile int32_t t116 = -1737;

    t116 = (x937<<(x938%(x939!=x940)));

    if (t116 != 65535) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x949 = 3;
	int8_t x950 = -1;
	uint64_t x951 = 371672307665310LLU;
	int32_t t117 = 21485386;

    t117 = (x949<<(x950%(x951!=x952)));

    if (t117 != 3) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x953 = UINT64_MAX;
	volatile int8_t x954 = INT8_MIN;
	int16_t x955 = INT16_MIN;
	static uint8_t x956 = 2U;
	static volatile uint64_t t118 = UINT64_MAX;

    t118 = (x953<<(x954%(x955!=x956)));

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x957 = INT8_MAX;
	int64_t x958 = -2005593441LL;
	int32_t x960 = -1;
	volatile int32_t t119 = 1;

    t119 = (x957<<(x958%(x959!=x960)));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x961 = 11U;
	volatile uint16_t x963 = 51U;
	int32_t x964 = -1;
	static volatile int32_t t120 = 0;

    t120 = (x961<<(x962%(x963!=x964)));

    if (t120 != 11) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x977 = 14U;
	volatile uint16_t x978 = UINT16_MAX;
	int16_t x979 = INT16_MIN;

    t121 = (x977<<(x978%(x979!=x980)));

    if (t121 != 14) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x985 = 48;
	uint8_t x986 = 30U;
	int32_t x987 = INT32_MAX;
	uint32_t x988 = 4913720U;

    t122 = (x985<<(x986%(x987!=x988)));

    if (t122 != 48) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x989 = 46LLU;
	uint32_t x990 = 1U;
	int32_t x991 = 2789473;
	int16_t x992 = INT16_MIN;
	static volatile uint64_t t123 = 21696269505920LLU;

    t123 = (x989<<(x990%(x991!=x992)));

    if (t123 != 46LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x995 = UINT32_MAX;
	volatile int64_t t124 = 1296870LL;

    t124 = (x993<<(x994%(x995!=x996)));

    if (t124 != 154425496173LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x1005 = 51;
	static volatile uint64_t x1006 = 5179052083LLU;
	int64_t x1007 = -8232106088282LL;
	volatile int32_t t125 = -8;

    t125 = (x1005<<(x1006%(x1007!=x1008)));

    if (t125 != 51) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x1009 = UINT64_MAX;
	uint32_t x1010 = UINT32_MAX;
	uint16_t x1011 = 90U;
	volatile int32_t x1012 = -1;

    t126 = (x1009<<(x1010%(x1011!=x1012)));

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x1014 = UINT32_MAX;
	uint16_t x1015 = 9U;
	uint8_t x1016 = 3U;
	volatile int32_t t127 = 1879;

    t127 = (x1013<<(x1014%(x1015!=x1016)));

    if (t127 != 65535) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x1022 = -29;
	int8_t x1023 = -1;
	int32_t x1024 = INT32_MIN;
	static volatile uint64_t t128 = 716970140211364LLU;

    t128 = (x1021<<(x1022%(x1023!=x1024)));

    if (t128 != 52129534LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x1050 = -23970;
	uint8_t x1051 = 28U;
	static volatile int32_t x1052 = INT32_MAX;
	uint32_t t129 = UINT32_MAX;

    t129 = (x1049<<(x1050%(x1051!=x1052)));

    if (t129 != UINT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x1057 = 44U;
	static uint8_t x1058 = 7U;
	static int8_t x1059 = INT8_MIN;
	volatile int16_t x1060 = INT16_MIN;
	int32_t t130 = 141921256;

    t130 = (x1057<<(x1058%(x1059!=x1060)));

    if (t130 != 44) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x1065 = 102U;
	int32_t x1066 = INT32_MAX;
	int64_t x1068 = INT64_MAX;
	int32_t t131 = 13995;

    t131 = (x1065<<(x1066%(x1067!=x1068)));

    if (t131 != 102) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x1078 = -1LL;
	int64_t x1079 = 1LL;
	uint64_t x1080 = UINT64_MAX;
	volatile int32_t t132 = -597;

    t132 = (x1077<<(x1078%(x1079!=x1080)));

    if (t132 != 255) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x1082 = -1LL;
	int32_t x1083 = INT32_MAX;
	int8_t x1084 = 61;

    t133 = (x1081<<(x1082%(x1083!=x1084)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x1085 = 46U;
	int64_t x1086 = -1LL;
	uint32_t x1087 = 37U;
	static volatile int32_t t134 = 109278;

    t134 = (x1085<<(x1086%(x1087!=x1088)));

    if (t134 != 46) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x1093 = 18;
	int8_t x1094 = INT8_MIN;
	int16_t x1095 = INT16_MIN;
	int32_t x1096 = 231438;
	volatile int32_t t135 = -816574403;

    t135 = (x1093<<(x1094%(x1095!=x1096)));

    if (t135 != 18) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x1101 = 32734U;
	int64_t x1102 = INT64_MAX;
	int16_t x1103 = -1;
	uint8_t x1104 = 22U;
	static uint32_t t136 = 34U;

    t136 = (x1101<<(x1102%(x1103!=x1104)));

    if (t136 != 32734U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x1121 = 27538U;
	int8_t x1123 = -1;
	int64_t x1124 = INT64_MIN;
	volatile int32_t t137 = 14517855;

    t137 = (x1121<<(x1122%(x1123!=x1124)));

    if (t137 != 27538) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x1145 = 1272U;
	uint8_t x1146 = 26U;
	uint32_t x1147 = 1U;
	volatile uint16_t x1148 = UINT16_MAX;
	uint32_t t138 = 711503U;

    t138 = (x1145<<(x1146%(x1147!=x1148)));

    if (t138 != 1272U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x1157 = INT32_MAX;
	uint8_t x1158 = 0U;
	int32_t t139 = INT32_MAX;

    t139 = (x1157<<(x1158%(x1159!=x1160)));

    if (t139 != INT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x1161 = 4829642528098758898LLU;
	int8_t x1162 = INT8_MIN;
	int8_t x1163 = -1;
	volatile uint64_t x1164 = 540LLU;
	volatile uint64_t t140 = 268781702296976492LLU;

    t140 = (x1161<<(x1162%(x1163!=x1164)));

    if (t140 != 4829642528098758898LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x1190 = -22;
	static int64_t x1192 = 2011916LL;

    t141 = (x1189<<(x1190%(x1191!=x1192)));

    if (t141 != INT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x1193 = INT16_MAX;
	uint8_t x1194 = 36U;
	uint8_t x1195 = 1U;
	uint16_t x1196 = 1793U;
	volatile int32_t t142 = 1;

    t142 = (x1193<<(x1194%(x1195!=x1196)));

    if (t142 != 32767) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x1197 = UINT32_MAX;
	int64_t x1198 = INT64_MAX;
	volatile int8_t x1199 = 0;
	static int32_t x1200 = 1332;
	volatile uint32_t t143 = UINT32_MAX;

    t143 = (x1197<<(x1198%(x1199!=x1200)));

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x1206 = 850U;
	static int32_t x1208 = INT32_MAX;
	static int32_t t144 = 2298;

    t144 = (x1205<<(x1206%(x1207!=x1208)));

    if (t144 != 12) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x1209 = INT32_MAX;
	uint8_t x1210 = UINT8_MAX;
	uint16_t x1211 = 14U;
	static int16_t x1212 = -837;
	static int32_t t145 = INT32_MAX;

    t145 = (x1209<<(x1210%(x1211!=x1212)));

    if (t145 != INT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1214 = -1;
	volatile int32_t x1215 = -3281802;
	uint32_t x1216 = 40720965U;

    t146 = (x1213<<(x1214%(x1215!=x1216)));

    if (t146 != 65535) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1221 = 19468U;
	volatile int16_t x1222 = INT16_MIN;
	int8_t x1223 = INT8_MAX;
	uint64_t x1224 = 511305998408523270LLU;
	volatile int32_t t147 = 3816;

    t147 = (x1221<<(x1222%(x1223!=x1224)));

    if (t147 != 19468) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x1233 = UINT8_MAX;
	static int16_t x1234 = -8726;
	int16_t x1236 = INT16_MIN;
	static volatile int32_t t148 = -11;

    t148 = (x1233<<(x1234%(x1235!=x1236)));

    if (t148 != 255) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x1237 = UINT8_MAX;
	int32_t x1238 = -93892;
	uint8_t x1239 = 2U;
	static uint32_t x1240 = UINT32_MAX;

    t149 = (x1237<<(x1238%(x1239!=x1240)));

    if (t149 != 255) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1241 = 9395147171998429LL;
	int64_t x1243 = 3119326203642228796LL;
	int64_t t150 = -147011044193627069LL;

    t150 = (x1241<<(x1242%(x1243!=x1244)));

    if (t150 != 9395147171998429LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x1245 = 102950552960163LL;
	static volatile uint32_t x1246 = 1U;
	uint16_t x1247 = 2U;
	int16_t x1248 = -412;
	volatile int64_t t151 = 396290506LL;

    t151 = (x1245<<(x1246%(x1247!=x1248)));

    if (t151 != 102950552960163LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x1249 = 1U;
	uint32_t x1250 = 10U;
	int32_t x1251 = INT32_MAX;
	uint32_t x1252 = 3112U;
	int32_t t152 = -4916;

    t152 = (x1249<<(x1250%(x1251!=x1252)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x1257 = INT32_MAX;
	int16_t x1258 = -4973;
	static uint32_t x1259 = UINT32_MAX;
	uint8_t x1260 = 108U;
	int32_t t153 = INT32_MAX;

    t153 = (x1257<<(x1258%(x1259!=x1260)));

    if (t153 != INT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1265 = INT16_MAX;
	static int32_t x1266 = INT32_MIN;
	int32_t x1267 = INT32_MIN;
	int8_t x1268 = INT8_MIN;
	int32_t t154 = -29;

    t154 = (x1265<<(x1266%(x1267!=x1268)));

    if (t154 != 32767) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x1281 = UINT32_MAX;
	static int8_t x1282 = -1;
	volatile int16_t x1283 = INT16_MIN;
	volatile uint32_t t155 = UINT32_MAX;

    t155 = (x1281<<(x1282%(x1283!=x1284)));

    if (t155 != UINT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1285 = 969035211LLU;
	int64_t x1286 = INT64_MAX;
	int64_t x1287 = INT64_MIN;
	int32_t x1288 = -517117366;

    t156 = (x1285<<(x1286%(x1287!=x1288)));

    if (t156 != 969035211LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1290 = INT32_MIN;
	uint64_t x1292 = UINT64_MAX;
	volatile uint64_t t157 = 1081777436698021217LLU;

    t157 = (x1289<<(x1290%(x1291!=x1292)));

    if (t157 != 173698930417390095LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x1297 = 702U;
	static volatile int8_t x1298 = 0;
	volatile uint64_t x1299 = UINT64_MAX;
	volatile uint32_t t158 = 78158124U;

    t158 = (x1297<<(x1298%(x1299!=x1300)));

    if (t158 != 702U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1301 = 8U;
	int64_t x1302 = 1706498003694703092LL;
	int16_t x1303 = -707;
	int32_t x1304 = INT32_MIN;
	int32_t t159 = 8639;

    t159 = (x1301<<(x1302%(x1303!=x1304)));

    if (t159 != 8) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1313 = 110U;
	int16_t x1314 = -1;
	int8_t x1315 = INT8_MIN;
	int64_t x1316 = 5582389462LL;
	static int32_t t160 = 21160;

    t160 = (x1313<<(x1314%(x1315!=x1316)));

    if (t160 != 110) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x1325 = 3990188995895LLU;
	uint16_t x1326 = 1636U;
	int16_t x1327 = -1;
	uint64_t t161 = 22900LLU;

    t161 = (x1325<<(x1326%(x1327!=x1328)));

    if (t161 != 3990188995895LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1333 = 7U;
	int32_t x1335 = -2561475;
	int8_t x1336 = -1;
	volatile int32_t t162 = -3942;

    t162 = (x1333<<(x1334%(x1335!=x1336)));

    if (t162 != 7) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x1345 = 77U;
	uint64_t x1347 = 2043091588219883675LLU;
	static int8_t x1348 = 1;

    t163 = (x1345<<(x1346%(x1347!=x1348)));

    if (t163 != 77) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x1349 = UINT32_MAX;
	static int8_t x1350 = 22;
	uint32_t x1351 = 31088U;
	uint32_t t164 = UINT32_MAX;

    t164 = (x1349<<(x1350%(x1351!=x1352)));

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1354 = -1;
	int64_t x1355 = INT64_MIN;
	static uint16_t x1356 = UINT16_MAX;
	int32_t t165 = -19399;

    t165 = (x1353<<(x1354%(x1355!=x1356)));

    if (t165 != 65535) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x1357 = 466275U;
	static int64_t x1358 = -1LL;

    t166 = (x1357<<(x1358%(x1359!=x1360)));

    if (t166 != 466275U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x1369 = INT16_MAX;
	volatile int32_t x1371 = INT32_MIN;
	uint32_t x1372 = UINT32_MAX;
	volatile int32_t t167 = -6281;

    t167 = (x1369<<(x1370%(x1371!=x1372)));

    if (t167 != 32767) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1373 = 210740145626LL;
	int64_t x1374 = INT64_MAX;
	volatile int8_t x1376 = INT8_MIN;
	int64_t t168 = 69879401808LL;

    t168 = (x1373<<(x1374%(x1375!=x1376)));

    if (t168 != 210740145626LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x1381 = UINT64_MAX;
	uint8_t x1382 = 33U;
	static uint16_t x1384 = UINT16_MAX;
	uint64_t t169 = UINT64_MAX;

    t169 = (x1381<<(x1382%(x1383!=x1384)));

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x1389 = 1;
	static uint32_t x1390 = 438632356U;
	uint64_t x1392 = 1068804146LLU;
	volatile int32_t t170 = 211138;

    t170 = (x1389<<(x1390%(x1391!=x1392)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1393 = UINT16_MAX;
	uint32_t x1394 = 0U;
	volatile int16_t x1395 = 15626;
	int64_t x1396 = -1LL;
	volatile int32_t t171 = -1;

    t171 = (x1393<<(x1394%(x1395!=x1396)));

    if (t171 != 65535) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x1401 = INT64_MAX;
	uint32_t x1403 = 1076U;
	int8_t x1404 = -1;
	static volatile int64_t t172 = INT64_MAX;

    t172 = (x1401<<(x1402%(x1403!=x1404)));

    if (t172 != INT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1405 = INT32_MAX;
	uint32_t x1406 = 172998046U;
	static volatile uint8_t x1407 = 31U;
	static uint16_t x1408 = 2U;

    t173 = (x1405<<(x1406%(x1407!=x1408)));

    if (t173 != INT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x1413 = UINT16_MAX;
	int8_t x1414 = 3;
	int64_t x1415 = 543550193740214LL;
	uint8_t x1416 = UINT8_MAX;
	int32_t t174 = 2875;

    t174 = (x1413<<(x1414%(x1415!=x1416)));

    if (t174 != 65535) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1421 = 2;
	int16_t x1422 = INT16_MAX;
	static int64_t x1423 = INT64_MIN;
	int32_t x1424 = 261663;
	int32_t t175 = 1495548;

    t175 = (x1421<<(x1422%(x1423!=x1424)));

    if (t175 != 2) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1445 = UINT16_MAX;
	int8_t x1448 = 14;
	int32_t t176 = 10860997;

    t176 = (x1445<<(x1446%(x1447!=x1448)));

    if (t176 != 65535) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1450 = -1LL;
	int32_t x1452 = 6310258;

    t177 = (x1449<<(x1450%(x1451!=x1452)));

    if (t177 != 127) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x1453 = 0;
	uint32_t x1455 = UINT32_MAX;
	static int32_t t178 = 316;

    t178 = (x1453<<(x1454%(x1455!=x1456)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1457 = 3587U;
	int64_t x1458 = INT64_MAX;
	static volatile uint8_t x1459 = 1U;
	int64_t x1460 = 5984LL;
	uint32_t t179 = 383U;

    t179 = (x1457<<(x1458%(x1459!=x1460)));

    if (t179 != 3587U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1462 = -1LL;
	int8_t x1463 = INT8_MIN;
	volatile uint32_t x1464 = 15507334U;
	int32_t t180 = 8033344;

    t180 = (x1461<<(x1462%(x1463!=x1464)));

    if (t180 != 14) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1465 = 1U;
	static int64_t x1466 = 10092887LL;
	int32_t x1467 = INT32_MAX;
	volatile int16_t x1468 = -8259;
	int32_t t181 = -123734881;

    t181 = (x1465<<(x1466%(x1467!=x1468)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1470 = 12542426537LLU;
	int16_t x1471 = 31;
	int32_t x1472 = INT32_MAX;
	int32_t t182 = 180474;

    t182 = (x1469<<(x1470%(x1471!=x1472)));

    if (t182 != 356) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x1473 = INT32_MAX;
	int64_t x1474 = -13642815451257977LL;
	uint64_t x1475 = 91392173739LLU;
	volatile uint8_t x1476 = 127U;
	int32_t t183 = INT32_MAX;

    t183 = (x1473<<(x1474%(x1475!=x1476)));

    if (t183 != INT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x1489 = UINT16_MAX;
	static int16_t x1490 = INT16_MAX;
	int32_t x1491 = INT32_MIN;
	static volatile uint32_t x1492 = 0U;

    t184 = (x1489<<(x1490%(x1491!=x1492)));

    if (t184 != 65535) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x1506 = INT32_MIN;
	int64_t x1507 = INT64_MIN;
	static int64_t x1508 = -1LL;
	static int64_t t185 = INT64_MAX;

    t185 = (x1505<<(x1506%(x1507!=x1508)));

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x1509 = UINT32_MAX;
	int8_t x1511 = INT8_MIN;
	volatile int16_t x1512 = INT16_MIN;
	uint32_t t186 = UINT32_MAX;

    t186 = (x1509<<(x1510%(x1511!=x1512)));

    if (t186 != UINT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x1514 = INT64_MAX;
	int64_t x1515 = INT64_MIN;
	volatile int16_t x1516 = INT16_MIN;
	volatile uint64_t t187 = 0LLU;

    t187 = (x1513<<(x1514%(x1515!=x1516)));

    if (t187 != 4677456824571684861LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1517 = 16U;
	uint8_t x1518 = UINT8_MAX;
	static uint32_t x1519 = 106097U;
	int8_t x1520 = -1;

    t188 = (x1517<<(x1518%(x1519!=x1520)));

    if (t188 != 16U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1521 = 2;
	volatile int8_t x1522 = -1;
	volatile int16_t x1523 = -1;
	static int64_t x1524 = 0LL;

    t189 = (x1521<<(x1522%(x1523!=x1524)));

    if (t189 != 2) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1525 = INT64_MAX;
	static volatile int64_t x1526 = INT64_MIN;
	int64_t x1528 = INT64_MIN;
	volatile int64_t t190 = INT64_MAX;

    t190 = (x1525<<(x1526%(x1527!=x1528)));

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1529 = 926U;
	static int16_t x1530 = INT16_MIN;
	static int32_t x1531 = -120663340;
	int32_t x1532 = INT32_MAX;
	uint32_t t191 = 5655U;

    t191 = (x1529<<(x1530%(x1531!=x1532)));

    if (t191 != 926U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1541 = INT16_MAX;
	uint8_t x1544 = UINT8_MAX;

    t192 = (x1541<<(x1542%(x1543!=x1544)));

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1545 = 2;
	int8_t x1547 = INT8_MIN;
	volatile int32_t x1548 = INT32_MAX;
	volatile int32_t t193 = 236594;

    t193 = (x1545<<(x1546%(x1547!=x1548)));

    if (t193 != 2) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x1549 = UINT16_MAX;
	static int8_t x1551 = -28;
	volatile uint64_t x1552 = 5LLU;
	int32_t t194 = 3406150;

    t194 = (x1549<<(x1550%(x1551!=x1552)));

    if (t194 != 65535) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x1557 = 4;
	static volatile int8_t x1558 = INT8_MIN;
	uint8_t x1560 = 3U;
	volatile int32_t t195 = 198;

    t195 = (x1557<<(x1558%(x1559!=x1560)));

    if (t195 != 4) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1575 = INT64_MAX;
	int8_t x1576 = 0;
	int64_t t196 = INT64_MAX;

    t196 = (x1573<<(x1574%(x1575!=x1576)));

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1583 = INT64_MAX;
	int32_t t197 = 78451891;

    t197 = (x1581<<(x1582%(x1583!=x1584)));

    if (t197 != 255) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1589 = INT16_MAX;
	static uint8_t x1591 = UINT8_MAX;

    t198 = (x1589<<(x1590%(x1591!=x1592)));

    if (t198 != 32767) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1606 = 9832041055982LL;
	volatile int16_t x1608 = INT16_MAX;
	volatile int32_t t199 = -6111434;

    t199 = (x1605<<(x1606%(x1607!=x1608)));

    if (t199 != 65535) { NG(); } else { ; }
	
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

