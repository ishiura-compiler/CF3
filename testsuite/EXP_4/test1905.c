
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

static uint16_t x5 = UINT16_MAX;
volatile int8_t x13 = -2;
uint32_t x15 = 79U;
int32_t x42 = INT32_MAX;
volatile int64_t x49 = INT64_MIN;
uint8_t x69 = 0U;
int8_t x70 = INT8_MAX;
uint8_t x74 = 123U;
int64_t x76 = INT64_MAX;
int16_t x80 = INT16_MIN;
uint64_t t11 = 12853018019LLU;
uint64_t x102 = 8255104LLU;
volatile uint64_t t13 = 47398529479949LLU;
uint64_t x106 = 3594482873848061LLU;
int8_t x113 = INT8_MAX;
static int16_t x115 = INT16_MIN;
int16_t x116 = INT16_MAX;
static uint8_t x139 = 0U;
uint16_t x146 = UINT16_MAX;
int16_t x152 = INT16_MIN;
uint32_t x158 = UINT32_MAX;
int8_t x169 = 2;
volatile int32_t t22 = 46571;
volatile uint8_t x183 = 1U;
uint64_t x189 = UINT64_MAX;
int16_t x191 = 253;
uint32_t x197 = 69U;
uint32_t x198 = 2013944440U;
uint32_t x200 = 30539U;
static int64_t x244 = INT64_MIN;
int8_t x250 = 0;
static int8_t x262 = INT8_MAX;
static uint32_t t30 = 21759U;
int8_t x293 = -1;
int16_t x341 = INT16_MIN;
int32_t x343 = 1;
int64_t x344 = 113LL;
static int32_t x371 = -155;
int8_t x374 = INT8_MAX;
int16_t x385 = -97;
int16_t x387 = -5047;
uint16_t x388 = 9271U;
int64_t t41 = 2540104LL;
static volatile int64_t t42 = -39669LL;
int64_t x409 = 752419256695LL;
int16_t x413 = INT16_MAX;
volatile int32_t x415 = INT32_MIN;
int8_t x419 = INT8_MIN;
uint64_t x422 = 514472837LLU;
uint64_t t47 = 34180849314LLU;
uint8_t x440 = 58U;
uint8_t x447 = 7U;
int32_t t52 = 12;
static volatile int16_t x455 = INT16_MIN;
int32_t x463 = -1;
int8_t x464 = -1;
uint64_t x483 = 607566LLU;
static uint64_t x485 = UINT64_MAX;
int8_t x487 = -1;
static volatile int32_t x488 = 154327129;
static uint64_t t57 = 198194644030484135LLU;
uint32_t x499 = 1169474U;
int16_t x501 = -1;
uint32_t x502 = UINT32_MAX;
static int8_t x506 = INT8_MAX;
static int32_t x517 = INT32_MIN;
uint32_t x518 = UINT32_MAX;
static uint64_t x524 = 1375978087334LLU;
int64_t x539 = -345442525455531591LL;
uint64_t t67 = 25155338737LLU;
volatile uint32_t x554 = UINT32_MAX;
uint8_t x565 = UINT8_MAX;
uint8_t x571 = 18U;
int8_t x574 = INT8_MAX;
uint32_t x575 = 1U;
int32_t t73 = 0;
volatile uint32_t x588 = 8010387U;
volatile int32_t x598 = 13;
uint32_t t75 = 14U;
volatile uint64_t t78 = 1295054145393699244LLU;
volatile int64_t x623 = INT64_MIN;
static uint32_t x637 = UINT32_MAX;
int16_t x644 = -7181;
static int8_t x647 = -12;
volatile int64_t x661 = 1707571999655733LL;
uint32_t x672 = 117U;
volatile int32_t t85 = INT32_MAX;
int64_t x680 = 11516086LL;
uint8_t x681 = 27U;
uint8_t x682 = UINT8_MAX;
volatile int32_t x688 = -1;
int64_t x708 = INT64_MIN;
volatile int64_t x709 = 1045172LL;
volatile uint64_t t91 = 3631LLU;
int16_t x714 = INT16_MAX;
int8_t x715 = INT8_MIN;
uint8_t x716 = 11U;
static uint32_t x725 = UINT32_MAX;
volatile int64_t x728 = 12LL;
uint8_t x729 = UINT8_MAX;
int64_t x736 = 13445664277LL;
int32_t x740 = INT32_MIN;
int64_t x756 = INT64_MIN;
volatile int32_t x763 = 13;
static int32_t t99 = -11;
uint32_t x778 = 11U;
uint64_t x779 = 1028583554661LLU;
int32_t x783 = INT32_MIN;
uint32_t x797 = UINT32_MAX;
static int64_t x824 = INT64_MAX;
static int16_t x825 = -40;
volatile int8_t x826 = INT8_MAX;
int32_t t107 = 4342;
volatile uint8_t x851 = UINT8_MAX;
static uint64_t t111 = 34529148LLU;
uint8_t x861 = 10U;
static volatile int16_t x864 = -1;
int64_t x877 = INT64_MIN;
volatile int64_t t113 = 3722781011LL;
int64_t x887 = 3577807568453000LL;
uint32_t x889 = 984638U;
int16_t x891 = INT16_MIN;
uint8_t x895 = 39U;
uint64_t t116 = 19939767582681LLU;
volatile int16_t x901 = -1;
int32_t x904 = INT32_MIN;
static uint32_t x918 = UINT32_MAX;
volatile uint16_t x919 = UINT16_MAX;
int16_t x920 = INT16_MIN;
volatile uint64_t x921 = 292219270108253516LLU;
static volatile uint16_t x934 = UINT16_MAX;
static uint64_t x942 = 1386145744709436983LLU;
static int16_t x946 = INT16_MAX;
int32_t x960 = INT32_MIN;
uint16_t x968 = UINT16_MAX;
volatile int32_t x980 = INT32_MAX;
uint64_t x987 = UINT64_MAX;
int32_t t131 = 6;
volatile uint32_t x991 = 2718191U;
static volatile int8_t x995 = -1;
static volatile uint32_t t133 = 225987U;
volatile int32_t x999 = 31139;
int32_t x1000 = 34;
static uint8_t x1001 = 9U;
volatile uint32_t t135 = 9266U;
static uint32_t x1005 = UINT32_MAX;
int32_t x1016 = -1;
volatile uint64_t t137 = 4355264090007LLU;
static uint8_t x1042 = 25U;
uint16_t x1047 = UINT16_MAX;
int16_t x1049 = INT16_MIN;
static int8_t x1050 = INT8_MAX;
int16_t x1055 = INT16_MIN;
int32_t t142 = -9;
static int64_t x1061 = INT64_MIN;
int64_t t143 = 2549637821891487172LL;
int64_t x1067 = INT64_MAX;
int32_t x1090 = INT32_MAX;
int16_t x1091 = INT16_MIN;
static int16_t x1095 = 3;
uint8_t x1096 = 13U;
int32_t t148 = 1;
uint32_t x1102 = UINT32_MAX;
static int32_t x1104 = INT32_MAX;
volatile uint8_t x1109 = 5U;
volatile int64_t t151 = -14LL;
uint16_t x1126 = UINT16_MAX;
int16_t x1128 = -3;
static int16_t x1132 = INT16_MIN;
int64_t t154 = -325395392842LL;
static int64_t x1137 = -1LL;
static volatile int64_t t155 = -1LL;
volatile uint16_t x1150 = 12U;
uint32_t t156 = 167269778U;
static volatile int16_t x1164 = 1;
static int32_t t158 = 11;
static uint16_t x1184 = 109U;
int8_t x1187 = -1;
int32_t x1194 = 13562;
uint32_t x1205 = 26873U;
int64_t t171 = -12770398199722363LL;
static volatile int32_t t174 = -11768075;
int8_t x1266 = 1;
int32_t t176 = 753;
volatile uint64_t x1273 = 121286698159158965LLU;
int64_t x1290 = 1405141661LL;
int32_t x1291 = INT32_MIN;
uint32_t x1299 = 2259U;
int32_t t179 = 11448;
uint8_t x1302 = 1U;
static uint64_t t180 = 25618893594703216LLU;
int64_t x1323 = INT64_MIN;
uint32_t x1333 = 1835335U;
int16_t x1336 = INT16_MAX;
uint64_t x1338 = 16LLU;
int64_t x1339 = INT64_MIN;
static int8_t x1342 = 57;
int32_t t185 = -1761;
volatile uint64_t t186 = 693LLU;
volatile int64_t t188 = -317994696580469604LL;
uint32_t x1361 = 78U;
int32_t x1366 = 2808;
int32_t x1368 = -93;
volatile uint16_t x1410 = UINT16_MAX;
static uint8_t x1424 = 4U;
uint16_t x1431 = 3072U;
int16_t x1432 = INT16_MIN;
volatile int32_t t193 = -86828;
static uint16_t x1438 = UINT16_MAX;
static int64_t t194 = 102572012LL;
volatile int64_t x1452 = INT64_MAX;
int16_t x1454 = INT16_MAX;
static volatile int32_t t197 = 404;


void f0(void) {
    	static int32_t x1 = INT32_MIN;
	int16_t x2 = INT16_MAX;
	uint64_t x3 = 609221938882057LLU;
	int32_t x4 = -1;
	static int32_t t0 = 113137;

    t0 = (x1+(x2>>(x3<=x4)));

    if (t0 != -2147467265) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x6 = 154850340LLU;
	volatile uint8_t x7 = 0U;
	volatile int64_t x8 = -73133997LL;
	volatile uint64_t t1 = 4LLU;

    t1 = (x5+(x6>>(x7<=x8)));

    if (t1 != 154915875LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x14 = 7736U;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t2 = 0;

    t2 = (x13+(x14>>(x15<=x16)));

    if (t2 != 3866) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x25 = INT8_MAX;
	uint64_t x26 = UINT64_MAX;
	uint8_t x27 = 26U;
	int16_t x28 = -1;
	volatile uint64_t t3 = 371094843LLU;

    t3 = (x25+(x26>>(x27<=x28)));

    if (t3 != 126LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x33 = INT32_MIN;
	uint32_t x34 = 2506U;
	volatile int8_t x35 = INT8_MAX;
	uint64_t x36 = UINT64_MAX;
	uint32_t t4 = 89814U;

    t4 = (x33+(x34>>(x35<=x36)));

    if (t4 != 2147484901U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x41 = 526U;
	static int16_t x43 = INT16_MIN;
	int8_t x44 = -20;
	volatile int32_t t5 = 867158;

    t5 = (x41+(x42>>(x43<=x44)));

    if (t5 != 1073742349) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x50 = UINT64_MAX;
	int64_t x51 = INT64_MIN;
	static int32_t x52 = -1;
	static volatile uint64_t t6 = UINT64_MAX;

    t6 = (x49+(x50>>(x51<=x52)));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x57 = -61851;
	static uint32_t x58 = 844U;
	static int8_t x59 = INT8_MAX;
	int32_t x60 = INT32_MIN;
	volatile uint32_t t7 = 355U;

    t7 = (x57+(x58>>(x59<=x60)));

    if (t7 != 4294906289U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x71 = -556887LL;
	int16_t x72 = INT16_MIN;
	volatile int32_t t8 = -2;

    t8 = (x69+(x70>>(x71<=x72)));

    if (t8 != 63) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x73 = INT16_MAX;
	uint32_t x75 = UINT32_MAX;
	int32_t t9 = 113338;

    t9 = (x73+(x74>>(x75<=x76)));

    if (t9 != 32828) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x77 = -1LL;
	static uint8_t x78 = UINT8_MAX;
	int16_t x79 = 599;
	static volatile int64_t t10 = 930672989094201986LL;

    t10 = (x77+(x78>>(x79<=x80)));

    if (t10 != 254LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x81 = 29690201U;
	volatile uint64_t x82 = UINT64_MAX;
	uint64_t x83 = 2535776519109178LLU;
	uint16_t x84 = 9227U;

    t11 = (x81+(x82>>(x83<=x84)));

    if (t11 != 29690200LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x97 = -1;
	volatile int8_t x98 = INT8_MAX;
	static int8_t x99 = 44;
	int32_t x100 = 345233015;
	int32_t t12 = 357070;

    t12 = (x97+(x98>>(x99<=x100)));

    if (t12 != 62) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x101 = INT8_MIN;
	int8_t x103 = INT8_MAX;
	uint16_t x104 = 2U;

    t13 = (x101+(x102>>(x103<=x104)));

    if (t13 != 8254976LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x105 = -1;
	volatile int16_t x107 = -6;
	int16_t x108 = 40;
	static volatile uint64_t t14 = 70452462976070075LLU;

    t14 = (x105+(x106>>(x107<=x108)));

    if (t14 != 1797241436924029LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x114 = 1U;
	static uint32_t t15 = 1U;

    t15 = (x113+(x114>>(x115<=x116)));

    if (t15 != 127U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x133 = -917323597510LL;
	int16_t x134 = 5;
	static int64_t x135 = INT64_MIN;
	int32_t x136 = INT32_MIN;
	int64_t t16 = -324669818LL;

    t16 = (x133+(x134>>(x135<=x136)));

    if (t16 != -917323597508LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x137 = 80385479LLU;
	uint16_t x138 = 40U;
	static int64_t x140 = INT64_MIN;
	static uint64_t t17 = 64823441LLU;

    t17 = (x137+(x138>>(x139<=x140)));

    if (t17 != 80385519LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x141 = UINT32_MAX;
	uint16_t x142 = UINT16_MAX;
	uint64_t x143 = UINT64_MAX;
	static volatile int32_t x144 = -3797;
	volatile uint32_t t18 = 651U;

    t18 = (x141+(x142>>(x143<=x144)));

    if (t18 != 65534U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x145 = INT8_MAX;
	uint8_t x147 = 0U;
	uint64_t x148 = 241589392LLU;
	volatile int32_t t19 = -5684;

    t19 = (x145+(x146>>(x147<=x148)));

    if (t19 != 32894) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x149 = 38738319103LLU;
	int16_t x150 = INT16_MAX;
	int8_t x151 = INT8_MAX;
	uint64_t t20 = 1609407984710142001LLU;

    t20 = (x149+(x150>>(x151<=x152)));

    if (t20 != 38738351870LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x157 = -133647561LL;
	volatile uint64_t x159 = 1070701808678LLU;
	uint64_t x160 = UINT64_MAX;
	volatile int64_t t21 = -14924046820244855LL;

    t21 = (x157+(x158>>(x159<=x160)));

    if (t21 != 2013836086LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x170 = 1840;
	int16_t x171 = INT16_MAX;
	int16_t x172 = INT16_MIN;

    t22 = (x169+(x170>>(x171<=x172)));

    if (t22 != 1842) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x181 = 96U;
	volatile int8_t x182 = INT8_MAX;
	int32_t x184 = -3;
	int32_t t23 = 63604;

    t23 = (x181+(x182>>(x183<=x184)));

    if (t23 != 223) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x190 = 0U;
	int8_t x192 = -1;
	volatile uint64_t t24 = UINT64_MAX;

    t24 = (x189+(x190>>(x191<=x192)));

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x199 = UINT16_MAX;
	volatile uint32_t t25 = 34U;

    t25 = (x197+(x198>>(x199<=x200)));

    if (t25 != 2013944509U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x201 = -91531;
	volatile uint64_t x202 = 25873LLU;
	static int16_t x203 = -14;
	int8_t x204 = INT8_MIN;
	static uint64_t t26 = 1315LLU;

    t26 = (x201+(x202>>(x203<=x204)));

    if (t26 != 18446744073709485958LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x241 = UINT32_MAX;
	int16_t x242 = INT16_MAX;
	uint64_t x243 = 3673545384209469192LLU;
	uint32_t t27 = 1U;

    t27 = (x241+(x242>>(x243<=x244)));

    if (t27 != 16382U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x249 = -1;
	int64_t x251 = -3794565713LL;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t28 = 22870480;

    t28 = (x249+(x250>>(x251<=x252)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x261 = -1;
	int8_t x263 = INT8_MAX;
	uint64_t x264 = 65471369247932815LLU;
	int32_t t29 = 4;

    t29 = (x261+(x262>>(x263<=x264)));

    if (t29 != 62) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x281 = INT8_MIN;
	uint32_t x282 = 190U;
	int32_t x283 = -70337;
	int16_t x284 = -1;

    t30 = (x281+(x282>>(x283<=x284)));

    if (t30 != 4294967263U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x294 = 790391187LL;
	int64_t x295 = -1LL;
	int64_t x296 = INT64_MIN;
	int64_t t31 = -120349LL;

    t31 = (x293+(x294>>(x295<=x296)));

    if (t31 != 790391186LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x297 = 0LL;
	uint8_t x298 = 0U;
	int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MIN;
	int64_t t32 = 740719497367274422LL;

    t32 = (x297+(x298>>(x299<=x300)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x309 = INT32_MAX;
	volatile uint32_t x310 = UINT32_MAX;
	int8_t x311 = INT8_MIN;
	volatile int8_t x312 = INT8_MAX;
	uint32_t t33 = 1920U;

    t33 = (x309+(x310>>(x311<=x312)));

    if (t33 != 4294967294U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x329 = -234;
	volatile int64_t x330 = 8064011618664829LL;
	uint64_t x331 = 20173922LLU;
	int16_t x332 = -1;
	static int64_t t34 = -1771924806LL;

    t34 = (x329+(x330>>(x331<=x332)));

    if (t34 != 4032005809332180LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x342 = 13724;
	volatile int32_t t35 = 69587;

    t35 = (x341+(x342>>(x343<=x344)));

    if (t35 != -25906) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x349 = 1;
	static uint64_t x350 = 59827070841177399LLU;
	int64_t x351 = INT64_MAX;
	volatile int8_t x352 = INT8_MIN;
	volatile uint64_t t36 = 381255962347LLU;

    t36 = (x349+(x350>>(x351<=x352)));

    if (t36 != 59827070841177400LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x369 = 10198737U;
	static uint16_t x370 = 18U;
	int64_t x372 = -1105117LL;
	uint32_t t37 = 374U;

    t37 = (x369+(x370>>(x371<=x372)));

    if (t37 != 10198755U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x373 = 15;
	volatile int16_t x375 = INT16_MIN;
	volatile uint8_t x376 = 34U;
	volatile int32_t t38 = -118;

    t38 = (x373+(x374>>(x375<=x376)));

    if (t38 != 78) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x381 = 27167415259LLU;
	int8_t x382 = 3;
	uint8_t x383 = 1U;
	int64_t x384 = -1240279LL;
	volatile uint64_t t39 = 37016965895076LLU;

    t39 = (x381+(x382>>(x383<=x384)));

    if (t39 != 27167415262LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x386 = 16U;
	static volatile uint32_t t40 = 1554727765U;

    t40 = (x385+(x386>>(x387<=x388)));

    if (t40 != 4294967207U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x389 = INT64_MIN;
	static volatile uint8_t x390 = 3U;
	volatile int16_t x391 = -15619;
	int32_t x392 = 5721024;

    t41 = (x389+(x390>>(x391<=x392)));

    if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x397 = -1LL;
	uint8_t x398 = UINT8_MAX;
	volatile uint8_t x399 = 40U;
	int64_t x400 = INT64_MIN;

    t42 = (x397+(x398>>(x399<=x400)));

    if (t42 != 254LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x401 = INT8_MIN;
	volatile uint16_t x402 = 7489U;
	uint16_t x403 = 1U;
	uint8_t x404 = UINT8_MAX;
	static int32_t t43 = 6718725;

    t43 = (x401+(x402>>(x403<=x404)));

    if (t43 != 3616) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x410 = 740;
	static int16_t x411 = 45;
	int16_t x412 = 6;
	int64_t t44 = 349896076LL;

    t44 = (x409+(x410>>(x411<=x412)));

    if (t44 != 752419257435LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x414 = 6U;
	int8_t x416 = -1;
	int32_t t45 = -350269;

    t45 = (x413+(x414>>(x415<=x416)));

    if (t45 != 32770) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x417 = -1LL;
	static int64_t x418 = INT64_MAX;
	int32_t x420 = -1;
	volatile int64_t t46 = 2LL;

    t46 = (x417+(x418>>(x419<=x420)));

    if (t46 != 4611686018427387902LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x421 = -1;
	uint16_t x423 = UINT16_MAX;
	int32_t x424 = -3463;

    t47 = (x421+(x422>>(x423<=x424)));

    if (t47 != 514472836LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x425 = INT8_MAX;
	uint16_t x426 = 47U;
	int8_t x427 = INT8_MIN;
	static uint64_t x428 = 138158563485221LLU;
	volatile int32_t t48 = 118858;

    t48 = (x425+(x426>>(x427<=x428)));

    if (t48 != 174) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x433 = INT16_MIN;
	volatile int8_t x434 = 1;
	volatile int64_t x435 = INT64_MIN;
	int16_t x436 = 5857;
	static volatile int32_t t49 = 53;

    t49 = (x433+(x434>>(x435<=x436)));

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int32_t x437 = INT32_MIN;
	static uint8_t x438 = 42U;
	int8_t x439 = -1;
	int32_t t50 = 15850;

    t50 = (x437+(x438>>(x439<=x440)));

    if (t50 != -2147483627) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x441 = 1420254LLU;
	uint8_t x442 = 3U;
	volatile uint16_t x443 = 28U;
	uint64_t x444 = UINT64_MAX;
	volatile uint64_t t51 = 12572410782895LLU;

    t51 = (x441+(x442>>(x443<=x444)));

    if (t51 != 1420255LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x445 = -1;
	volatile uint8_t x446 = 3U;
	int16_t x448 = INT16_MIN;

    t52 = (x445+(x446>>(x447<=x448)));

    if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x453 = -1;
	uint16_t x454 = 368U;
	uint32_t x456 = UINT32_MAX;
	int32_t t53 = -32594;

    t53 = (x453+(x454>>(x455<=x456)));

    if (t53 != 183) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x461 = 13113457U;
	uint16_t x462 = UINT16_MAX;
	static volatile uint32_t t54 = 37983U;

    t54 = (x461+(x462>>(x463<=x464)));

    if (t54 != 13146224U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x477 = -7;
	int64_t x478 = 478365724198880935LL;
	uint64_t x479 = 19061247471LLU;
	int8_t x480 = INT8_MAX;
	int64_t t55 = -22265512576393394LL;

    t55 = (x477+(x478>>(x479<=x480)));

    if (t55 != 478365724198880928LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x481 = INT32_MIN;
	volatile uint16_t x482 = 6949U;
	static volatile int8_t x484 = INT8_MAX;
	volatile int32_t t56 = -1167800;

    t56 = (x481+(x482>>(x483<=x484)));

    if (t56 != -2147476699) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x486 = UINT64_MAX;

    t57 = (x485+(x486>>(x487<=x488)));

    if (t57 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x493 = 42202645;
	volatile int64_t x494 = 20772522022444LL;
	static int8_t x495 = -1;
	int16_t x496 = INT16_MIN;
	volatile int64_t t58 = -124004388103776LL;

    t58 = (x493+(x494>>(x495<=x496)));

    if (t58 != 20772564225089LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x497 = -7053007;
	int8_t x498 = 7;
	static int64_t x500 = 52173370LL;
	int32_t t59 = 501;

    t59 = (x497+(x498>>(x499<=x500)));

    if (t59 != -7053004) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x503 = 3;
	volatile int32_t x504 = INT32_MIN;
	uint32_t t60 = 685390136U;

    t60 = (x501+(x502>>(x503<=x504)));

    if (t60 != 4294967294U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x505 = 33586869103971LLU;
	int32_t x507 = 822337505;
	uint32_t x508 = 1088908402U;
	volatile uint64_t t61 = 451550LLU;

    t61 = (x505+(x506>>(x507<=x508)));

    if (t61 != 33586869104034LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x509 = UINT8_MAX;
	uint32_t x510 = 89032U;
	static int16_t x511 = INT16_MIN;
	static int32_t x512 = 391;
	uint32_t t62 = 1029223U;

    t62 = (x509+(x510>>(x511<=x512)));

    if (t62 != 44771U) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x513 = INT32_MAX;
	uint32_t x514 = UINT32_MAX;
	static uint32_t x515 = 0U;
	uint64_t x516 = UINT64_MAX;
	static volatile uint32_t t63 = 1842663U;

    t63 = (x513+(x514>>(x515<=x516)));

    if (t63 != 4294967294U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x519 = -6LL;
	int16_t x520 = INT16_MAX;
	volatile uint32_t t64 = UINT32_MAX;

    t64 = (x517+(x518>>(x519<=x520)));

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x521 = 34U;
	uint8_t x522 = 52U;
	int8_t x523 = -1;
	uint32_t t65 = 15346U;

    t65 = (x521+(x522>>(x523<=x524)));

    if (t65 != 86U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x529 = -1;
	uint32_t x530 = UINT32_MAX;
	int16_t x531 = INT16_MAX;
	static int32_t x532 = INT32_MAX;
	volatile uint32_t t66 = 9934505U;

    t66 = (x529+(x530>>(x531<=x532)));

    if (t66 != 2147483646U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x537 = UINT16_MAX;
	static uint64_t x538 = 116LLU;
	static int16_t x540 = -1;

    t67 = (x537+(x538>>(x539<=x540)));

    if (t67 != 65593LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x549 = -5788LL;
	uint32_t x550 = 29833280U;
	static uint16_t x551 = 9U;
	int64_t x552 = -848878453261375LL;
	int64_t t68 = -74035728215857662LL;

    t68 = (x549+(x550>>(x551<=x552)));

    if (t68 != 29827492LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x553 = -1;
	int64_t x555 = INT64_MIN;
	static int16_t x556 = -107;
	uint32_t t69 = 8U;

    t69 = (x553+(x554>>(x555<=x556)));

    if (t69 != 2147483646U) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x557 = 1780496474833557LLU;
	uint32_t x558 = 202689U;
	volatile uint64_t x559 = 42078885346831256LLU;
	int16_t x560 = 1791;
	volatile uint64_t t70 = 76212LLU;

    t70 = (x557+(x558>>(x559<=x560)));

    if (t70 != 1780496475036246LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x566 = 177U;
	int64_t x567 = -992384927LL;
	uint64_t x568 = 53262865456462295LLU;
	uint32_t t71 = 595344660U;

    t71 = (x565+(x566>>(x567<=x568)));

    if (t71 != 432U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x569 = -1;
	static uint32_t x570 = 24U;
	uint32_t x572 = UINT32_MAX;
	volatile uint32_t t72 = 214U;

    t72 = (x569+(x570>>(x571<=x572)));

    if (t72 != 11U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x573 = INT32_MIN;
	int16_t x576 = INT16_MIN;

    t73 = (x573+(x574>>(x575<=x576)));

    if (t73 != -2147483585) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x585 = UINT64_MAX;
	volatile int8_t x586 = 0;
	int16_t x587 = INT16_MIN;
	uint64_t t74 = UINT64_MAX;

    t74 = (x585+(x586>>(x587<=x588)));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x597 = 2U;
	int16_t x599 = 0;
	int8_t x600 = INT8_MAX;

    t75 = (x597+(x598>>(x599<=x600)));

    if (t75 != 8U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x601 = 24267U;
	int16_t x602 = 1;
	int32_t x603 = -222634097;
	int8_t x604 = INT8_MIN;
	volatile int32_t t76 = 101;

    t76 = (x601+(x602>>(x603<=x604)));

    if (t76 != 24267) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x605 = 201834842251LLU;
	uint32_t x606 = UINT32_MAX;
	int16_t x607 = 48;
	static volatile int32_t x608 = INT32_MIN;
	uint64_t t77 = 14412LLU;

    t77 = (x605+(x606>>(x607<=x608)));

    if (t77 != 206129809546LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint64_t x613 = 78LLU;
	static uint16_t x614 = 5260U;
	uint64_t x615 = 12LLU;
	int32_t x616 = INT32_MAX;

    t78 = (x613+(x614>>(x615<=x616)));

    if (t78 != 2708LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x621 = INT32_MIN;
	static uint16_t x622 = 64U;
	int32_t x624 = 1;
	int32_t t79 = -100644;

    t79 = (x621+(x622>>(x623<=x624)));

    if (t79 != -2147483616) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x638 = 6054U;
	static int8_t x639 = INT8_MIN;
	int32_t x640 = INT32_MIN;
	volatile uint32_t t80 = 843U;

    t80 = (x637+(x638>>(x639<=x640)));

    if (t80 != 6053U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x641 = -222745844021941LL;
	volatile int32_t x642 = 17510812;
	uint16_t x643 = UINT16_MAX;
	int64_t t81 = 2035688LL;

    t81 = (x641+(x642>>(x643<=x644)));

    if (t81 != -222745826511129LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x645 = UINT8_MAX;
	int64_t x646 = 18LL;
	volatile int16_t x648 = INT16_MIN;
	static int64_t t82 = 2014818755243645LL;

    t82 = (x645+(x646>>(x647<=x648)));

    if (t82 != 273LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x662 = UINT64_MAX;
	volatile int64_t x663 = 9562269630LL;
	static uint64_t x664 = UINT64_MAX;
	static volatile uint64_t t83 = 2033LLU;

    t83 = (x661+(x662>>(x663<=x664)));

    if (t83 != 9225079608854431540LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x665 = 0LLU;
	volatile uint64_t x666 = 3773109912123105821LLU;
	uint32_t x667 = UINT32_MAX;
	uint16_t x668 = 2246U;
	volatile uint64_t t84 = 374028001247LLU;

    t84 = (x665+(x666>>(x667<=x668)));

    if (t84 != 3773109912123105821LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x669 = 0;
	int32_t x670 = INT32_MAX;
	uint32_t x671 = 151332149U;

    t85 = (x669+(x670>>(x671<=x672)));

    if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x677 = UINT64_MAX;
	uint32_t x678 = UINT32_MAX;
	int32_t x679 = 25;
	volatile uint64_t t86 = 124635300LLU;

    t86 = (x677+(x678>>(x679<=x680)));

    if (t86 != 2147483646LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x683 = -2;
	static volatile int32_t x684 = -1;
	static int32_t t87 = -15429;

    t87 = (x681+(x682>>(x683<=x684)));

    if (t87 != 154) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x685 = UINT64_MAX;
	uint32_t x686 = 62U;
	uint64_t x687 = UINT64_MAX;
	uint64_t t88 = 30738134118424313LLU;

    t88 = (x685+(x686>>(x687<=x688)));

    if (t88 != 30LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x701 = INT8_MAX;
	volatile uint32_t x702 = 8008083U;
	volatile int16_t x703 = -780;
	int8_t x704 = INT8_MIN;
	uint32_t t89 = 103405U;

    t89 = (x701+(x702>>(x703<=x704)));

    if (t89 != 4004168U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x705 = INT16_MIN;
	static int32_t x706 = 6064;
	uint32_t x707 = UINT32_MAX;
	int32_t t90 = -64;

    t90 = (x705+(x706>>(x707<=x708)));

    if (t90 != -26704) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x710 = UINT64_MAX;
	static int8_t x711 = 1;
	uint8_t x712 = 38U;

    t91 = (x709+(x710>>(x711<=x712)));

    if (t91 != 9223372036855820979LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x713 = 50656U;
	uint32_t t92 = 788U;

    t92 = (x713+(x714>>(x715<=x716)));

    if (t92 != 67039U) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x721 = UINT32_MAX;
	volatile int16_t x722 = INT16_MAX;
	static uint64_t x723 = UINT64_MAX;
	uint16_t x724 = UINT16_MAX;
	volatile uint32_t t93 = 22007U;

    t93 = (x721+(x722>>(x723<=x724)));

    if (t93 != 32766U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x726 = 7746204LLU;
	int32_t x727 = -1;
	uint64_t t94 = 2542963891562939LLU;

    t94 = (x725+(x726>>(x727<=x728)));

    if (t94 != 4298840397LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x730 = INT16_MAX;
	int64_t x731 = -1LL;
	int16_t x732 = 36;
	static int32_t t95 = -101678;

    t95 = (x729+(x730>>(x731<=x732)));

    if (t95 != 16638) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x733 = 2U;
	uint8_t x734 = 8U;
	int32_t x735 = INT32_MAX;
	uint32_t t96 = 7838U;

    t96 = (x733+(x734>>(x735<=x736)));

    if (t96 != 6U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x737 = UINT16_MAX;
	static uint32_t x738 = 3656U;
	int32_t x739 = -2989399;
	volatile uint32_t t97 = 149U;

    t97 = (x737+(x738>>(x739<=x740)));

    if (t97 != 69191U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x753 = INT64_MIN;
	int32_t x754 = INT32_MAX;
	volatile int32_t x755 = INT32_MIN;
	static int64_t t98 = 478989LL;

    t98 = (x753+(x754>>(x755<=x756)));

    if (t98 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x761 = -3;
	int8_t x762 = INT8_MAX;
	uint8_t x764 = UINT8_MAX;

    t99 = (x761+(x762>>(x763<=x764)));

    if (t99 != 60) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x773 = INT8_MAX;
	uint16_t x774 = UINT16_MAX;
	uint32_t x775 = 342U;
	uint32_t x776 = UINT32_MAX;
	volatile int32_t t100 = -53356727;

    t100 = (x773+(x774>>(x775<=x776)));

    if (t100 != 32894) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x777 = INT32_MAX;
	volatile int8_t x780 = 2;
	uint32_t t101 = 54949U;

    t101 = (x777+(x778>>(x779<=x780)));

    if (t101 != 2147483658U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x781 = UINT32_MAX;
	int16_t x782 = INT16_MAX;
	uint8_t x784 = 83U;
	volatile uint32_t t102 = 6U;

    t102 = (x781+(x782>>(x783<=x784)));

    if (t102 != 16382U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x798 = 945321392U;
	int8_t x799 = 13;
	int16_t x800 = INT16_MIN;
	volatile uint32_t t103 = 99U;

    t103 = (x797+(x798>>(x799<=x800)));

    if (t103 != 945321391U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x801 = INT32_MIN;
	uint8_t x802 = UINT8_MAX;
	int32_t x803 = -6;
	static int8_t x804 = -1;
	volatile int32_t t104 = 15074101;

    t104 = (x801+(x802>>(x803<=x804)));

    if (t104 != -2147483521) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x813 = 30334800LL;
	int32_t x814 = 5666136;
	static int8_t x815 = INT8_MIN;
	int32_t x816 = 573088673;
	volatile int64_t t105 = 906092705804958497LL;

    t105 = (x813+(x814>>(x815<=x816)));

    if (t105 != 33167868LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x821 = 3U;
	int64_t x822 = 39993588711810534LL;
	static int8_t x823 = INT8_MIN;
	int64_t t106 = -3182208893569LL;

    t106 = (x821+(x822>>(x823<=x824)));

    if (t106 != 19996794355905270LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x827 = 16021437007LL;
	int32_t x828 = INT32_MAX;

    t107 = (x825+(x826>>(x827<=x828)));

    if (t107 != 87) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x833 = INT32_MAX;
	uint64_t x834 = UINT64_MAX;
	static int64_t x835 = -1LL;
	volatile uint32_t x836 = 3211U;
	volatile uint64_t t108 = 3832292481721534950LLU;

    t108 = (x833+(x834>>(x835<=x836)));

    if (t108 != 9223372039002259454LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x837 = INT8_MIN;
	uint16_t x838 = 109U;
	uint16_t x839 = 1661U;
	uint32_t x840 = 9343822U;
	static int32_t t109 = 9971;

    t109 = (x837+(x838>>(x839<=x840)));

    if (t109 != -74) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x841 = UINT64_MAX;
	uint64_t x842 = 135948215209269260LLU;
	int16_t x843 = -730;
	int8_t x844 = -9;
	static uint64_t t110 = 439109LLU;

    t110 = (x841+(x842>>(x843<=x844)));

    if (t110 != 67974107604634629LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x849 = -55LL;
	uint64_t x850 = UINT64_MAX;
	volatile int32_t x852 = -6353498;

    t111 = (x849+(x850>>(x851<=x852)));

    if (t111 != 18446744073709551560LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x862 = 58U;
	int64_t x863 = -1LL;
	static volatile int32_t t112 = -101826601;

    t112 = (x861+(x862>>(x863<=x864)));

    if (t112 != 39) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x878 = INT32_MAX;
	int16_t x879 = INT16_MAX;
	static int8_t x880 = -8;

    t113 = (x877+(x878>>(x879<=x880)));

    if (t113 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x885 = -6;
	int32_t x886 = INT32_MAX;
	int8_t x888 = INT8_MAX;
	volatile int32_t t114 = 443715381;

    t114 = (x885+(x886>>(x887<=x888)));

    if (t114 != 2147483641) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x890 = 148338499;
	uint64_t x892 = 242884LLU;
	volatile uint32_t t115 = 214400447U;

    t115 = (x889+(x890>>(x891<=x892)));

    if (t115 != 149323137U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x893 = 2;
	uint64_t x894 = UINT64_MAX;
	uint32_t x896 = 110830U;

    t116 = (x893+(x894>>(x895<=x896)));

    if (t116 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x902 = INT32_MAX;
	int32_t x903 = -1;
	int32_t t117 = 894021818;

    t117 = (x901+(x902>>(x903<=x904)));

    if (t117 != 2147483646) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x905 = INT16_MIN;
	uint32_t x906 = 27U;
	int16_t x907 = INT16_MIN;
	int32_t x908 = -1;
	volatile uint32_t t118 = 2316U;

    t118 = (x905+(x906>>(x907<=x908)));

    if (t118 != 4294934541U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x909 = UINT16_MAX;
	volatile uint32_t x910 = 21243U;
	uint8_t x911 = 108U;
	int16_t x912 = -1;
	volatile uint32_t t119 = 2315828U;

    t119 = (x909+(x910>>(x911<=x912)));

    if (t119 != 86778U) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x917 = -1LL;
	volatile int64_t t120 = 3213783LL;

    t120 = (x917+(x918>>(x919<=x920)));

    if (t120 != 4294967294LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x922 = INT32_MAX;
	volatile int32_t x923 = INT32_MIN;
	int8_t x924 = INT8_MIN;
	uint64_t t121 = 9656440930LLU;

    t121 = (x921+(x922>>(x923<=x924)));

    if (t121 != 292219271181995339LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x933 = 38;
	int16_t x935 = -2373;
	volatile int32_t x936 = INT32_MIN;
	static volatile int32_t t122 = -6863;

    t122 = (x933+(x934>>(x935<=x936)));

    if (t122 != 65573) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x937 = INT16_MIN;
	int64_t x938 = 13248980261LL;
	volatile int8_t x939 = 0;
	int64_t x940 = -280481963143362680LL;
	volatile int64_t t123 = 8003237LL;

    t123 = (x937+(x938>>(x939<=x940)));

    if (t123 != 13248947493LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x941 = 0;
	static uint16_t x943 = 243U;
	volatile int32_t x944 = -200158241;
	volatile uint64_t t124 = 3334734194479967LLU;

    t124 = (x941+(x942>>(x943<=x944)));

    if (t124 != 1386145744709436983LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x945 = 163801678922189LLU;
	uint16_t x947 = UINT16_MAX;
	uint8_t x948 = 0U;
	uint64_t t125 = 7581523435109441LLU;

    t125 = (x945+(x946>>(x947<=x948)));

    if (t125 != 163801678954956LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x953 = 556701768;
	int32_t x954 = 0;
	int32_t x955 = -115373;
	uint32_t x956 = 47506315U;
	volatile int32_t t126 = -1640;

    t126 = (x953+(x954>>(x955<=x956)));

    if (t126 != 556701768) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x957 = 797590567527492360LLU;
	uint32_t x958 = 2814409U;
	uint16_t x959 = 2U;
	uint64_t t127 = 1657889LLU;

    t127 = (x957+(x958>>(x959<=x960)));

    if (t127 != 797590567530306769LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint8_t x961 = 3U;
	int16_t x962 = 1;
	static uint16_t x963 = 47U;
	int8_t x964 = INT8_MAX;
	volatile int32_t t128 = 625290148;

    t128 = (x961+(x962>>(x963<=x964)));

    if (t128 != 3) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x965 = 17U;
	int8_t x966 = INT8_MAX;
	int32_t x967 = -1;
	volatile uint32_t t129 = 31901973U;

    t129 = (x965+(x966>>(x967<=x968)));

    if (t129 != 80U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x977 = -1;
	volatile uint16_t x978 = 1U;
	int64_t x979 = INT64_MIN;
	static int32_t t130 = 1544;

    t130 = (x977+(x978>>(x979<=x980)));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x985 = -3115113;
	volatile uint16_t x986 = UINT16_MAX;
	volatile int64_t x988 = -6611419LL;

    t131 = (x985+(x986>>(x987<=x988)));

    if (t131 != -3049578) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x989 = INT32_MIN;
	static uint64_t x990 = 283398991831051910LLU;
	static int64_t x992 = -1LL;
	uint64_t t132 = 1603364673738202358LLU;

    t132 = (x989+(x990>>(x991<=x992)));

    if (t132 != 283398989683568262LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x993 = 3U;
	volatile int16_t x994 = 0;
	volatile uint32_t x996 = 1372314882U;

    t133 = (x993+(x994>>(x995<=x996)));

    if (t133 != 3U) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x997 = 3U;
	uint16_t x998 = 1U;
	int32_t t134 = -19480;

    t134 = (x997+(x998>>(x999<=x1000)));

    if (t134 != 4) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x1002 = UINT32_MAX;
	volatile int8_t x1003 = INT8_MIN;
	int16_t x1004 = INT16_MAX;

    t135 = (x1001+(x1002>>(x1003<=x1004)));

    if (t135 != 2147483656U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x1006 = 7U;
	int32_t x1007 = INT32_MAX;
	int8_t x1008 = INT8_MIN;
	volatile uint32_t t136 = 31U;

    t136 = (x1005+(x1006>>(x1007<=x1008)));

    if (t136 != 6U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x1013 = UINT64_MAX;
	int64_t x1014 = INT64_MAX;
	int8_t x1015 = 47;

    t137 = (x1013+(x1014>>(x1015<=x1016)));

    if (t137 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x1025 = INT8_MAX;
	uint64_t x1026 = 38LLU;
	volatile uint8_t x1027 = 3U;
	int32_t x1028 = -1;
	volatile uint64_t t138 = 65194032573955784LLU;

    t138 = (x1025+(x1026>>(x1027<=x1028)));

    if (t138 != 165LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x1041 = 31U;
	uint32_t x1043 = 11339U;
	volatile int16_t x1044 = -3;
	int32_t t139 = 33508;

    t139 = (x1041+(x1042>>(x1043<=x1044)));

    if (t139 != 43) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x1045 = 30822580U;
	static uint16_t x1046 = 29836U;
	int8_t x1048 = INT8_MIN;
	uint32_t t140 = 20U;

    t140 = (x1045+(x1046>>(x1047<=x1048)));

    if (t140 != 30852416U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1051 = -1;
	volatile uint32_t x1052 = 51U;
	static int32_t t141 = 479;

    t141 = (x1049+(x1050>>(x1051<=x1052)));

    if (t141 != -32641) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x1053 = -2620732;
	int8_t x1054 = INT8_MAX;
	int16_t x1056 = INT16_MIN;

    t142 = (x1053+(x1054>>(x1055<=x1056)));

    if (t142 != -2620669) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x1062 = UINT16_MAX;
	static uint16_t x1063 = 812U;
	int16_t x1064 = INT16_MAX;

    t143 = (x1061+(x1062>>(x1063<=x1064)));

    if (t143 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x1065 = INT32_MIN;
	uint64_t x1066 = 67718754LLU;
	static volatile uint8_t x1068 = 16U;
	volatile uint64_t t144 = 24921879273513LLU;

    t144 = (x1065+(x1066>>(x1067<=x1068)));

    if (t144 != 18446744071629786722LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1069 = INT8_MAX;
	uint32_t x1070 = UINT32_MAX;
	static int64_t x1071 = 1LL;
	uint16_t x1072 = 60U;
	static volatile uint32_t t145 = 66805U;

    t145 = (x1069+(x1070>>(x1071<=x1072)));

    if (t145 != 2147483774U) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1073 = 3;
	uint64_t x1074 = UINT64_MAX;
	int64_t x1075 = INT64_MAX;
	int64_t x1076 = 38698289907LL;
	volatile uint64_t t146 = 2384809796534LLU;

    t146 = (x1073+(x1074>>(x1075<=x1076)));

    if (t146 != 2LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1089 = -1;
	static volatile int16_t x1092 = INT16_MAX;
	volatile int32_t t147 = 753215434;

    t147 = (x1089+(x1090>>(x1091<=x1092)));

    if (t147 != 1073741822) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x1093 = INT16_MAX;
	static int8_t x1094 = INT8_MAX;

    t148 = (x1093+(x1094>>(x1095<=x1096)));

    if (t148 != 32830) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1097 = INT32_MIN;
	int64_t x1098 = 88243503059074515LL;
	uint64_t x1099 = 2088990181LLU;
	int64_t x1100 = 1678239032379489103LL;
	int64_t t149 = -402545589617770580LL;

    t149 = (x1097+(x1098>>(x1099<=x1100)));

    if (t149 != 44121749382053609LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1101 = UINT32_MAX;
	volatile int32_t x1103 = -755;
	static uint32_t t150 = 419700699U;

    t150 = (x1101+(x1102>>(x1103<=x1104)));

    if (t150 != 2147483646U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x1110 = 1102981434721LL;
	uint8_t x1111 = 2U;
	int64_t x1112 = INT64_MAX;

    t151 = (x1109+(x1110>>(x1111<=x1112)));

    if (t151 != 551490717365LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x1117 = 30992U;
	uint8_t x1118 = 11U;
	int8_t x1119 = -24;
	int64_t x1120 = -1832673293938854176LL;
	int32_t t152 = 1624640;

    t152 = (x1117+(x1118>>(x1119<=x1120)));

    if (t152 != 31003) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x1125 = 69745;
	uint64_t x1127 = 521734518913538144LLU;
	volatile int32_t t153 = 3287;

    t153 = (x1125+(x1126>>(x1127<=x1128)));

    if (t153 != 102512) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x1129 = -110052670LL;
	volatile uint16_t x1130 = 2U;
	volatile uint16_t x1131 = UINT16_MAX;

    t154 = (x1129+(x1130>>(x1131<=x1132)));

    if (t154 != -110052668LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1138 = 3039;
	int64_t x1139 = -1LL;
	int16_t x1140 = -1;

    t155 = (x1137+(x1138>>(x1139<=x1140)));

    if (t155 != 1518LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x1149 = 6069955U;
	volatile int32_t x1151 = -1;
	static uint32_t x1152 = 382635268U;

    t156 = (x1149+(x1150>>(x1151<=x1152)));

    if (t156 != 6069967U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x1157 = INT64_MIN;
	int16_t x1158 = INT16_MAX;
	uint32_t x1159 = 0U;
	static volatile int64_t x1160 = INT64_MAX;
	static volatile int64_t t157 = 31928LL;

    t157 = (x1157+(x1158>>(x1159<=x1160)));

    if (t157 != -9223372036854759425LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x1161 = 2028997;
	uint8_t x1162 = UINT8_MAX;
	volatile int64_t x1163 = INT64_MIN;

    t158 = (x1161+(x1162>>(x1163<=x1164)));

    if (t158 != 2029124) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x1165 = INT64_MAX;
	volatile uint64_t x1166 = UINT64_MAX;
	uint32_t x1167 = 19061108U;
	int8_t x1168 = INT8_MIN;
	volatile uint64_t t159 = 33479LLU;

    t159 = (x1165+(x1166>>(x1167<=x1168)));

    if (t159 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1169 = 16U;
	uint64_t x1170 = UINT64_MAX;
	uint16_t x1171 = 8408U;
	uint64_t x1172 = 161420221758382634LLU;
	volatile uint64_t t160 = 49LLU;

    t160 = (x1169+(x1170>>(x1171<=x1172)));

    if (t160 != 9223372036854775823LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1173 = INT32_MIN;
	uint8_t x1174 = 30U;
	uint8_t x1175 = 22U;
	int16_t x1176 = 820;
	volatile int32_t t161 = 410;

    t161 = (x1173+(x1174>>(x1175<=x1176)));

    if (t161 != -2147483633) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1177 = 5489;
	volatile uint32_t x1178 = UINT32_MAX;
	int32_t x1179 = INT32_MAX;
	int64_t x1180 = 12144382794992564LL;
	uint32_t t162 = 7897U;

    t162 = (x1177+(x1178>>(x1179<=x1180)));

    if (t162 != 2147489136U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x1181 = 1441U;
	uint16_t x1182 = 1U;
	uint8_t x1183 = 3U;
	int32_t t163 = -12343;

    t163 = (x1181+(x1182>>(x1183<=x1184)));

    if (t163 != 1441) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x1185 = -27995;
	volatile int64_t x1186 = INT64_MAX;
	int32_t x1188 = INT32_MIN;
	int64_t t164 = 1548946LL;

    t164 = (x1185+(x1186>>(x1187<=x1188)));

    if (t164 != 9223372036854747812LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x1193 = 1;
	volatile int16_t x1195 = -1;
	uint32_t x1196 = 8U;
	volatile int32_t t165 = 7;

    t165 = (x1193+(x1194>>(x1195<=x1196)));

    if (t165 != 13563) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x1197 = UINT16_MAX;
	static int8_t x1198 = 0;
	static int64_t x1199 = -429LL;
	int32_t x1200 = 4;
	int32_t t166 = 13583856;

    t166 = (x1197+(x1198>>(x1199<=x1200)));

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1206 = UINT64_MAX;
	int8_t x1207 = INT8_MIN;
	static int32_t x1208 = -30732952;
	uint64_t t167 = 951715LLU;

    t167 = (x1205+(x1206>>(x1207<=x1208)));

    if (t167 != 26872LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x1213 = UINT32_MAX;
	volatile int64_t x1214 = INT64_MAX;
	int64_t x1215 = INT64_MIN;
	static volatile int32_t x1216 = INT32_MAX;
	static int64_t t168 = -1605267LL;

    t168 = (x1213+(x1214>>(x1215<=x1216)));

    if (t168 != 4611686022722355198LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1225 = 0U;
	int16_t x1226 = 9;
	volatile uint64_t x1227 = 399748233652948LLU;
	int32_t x1228 = INT32_MAX;
	volatile int32_t t169 = 82;

    t169 = (x1225+(x1226>>(x1227<=x1228)));

    if (t169 != 9) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1229 = 26U;
	int64_t x1230 = INT64_MAX;
	int64_t x1231 = INT64_MIN;
	volatile int8_t x1232 = INT8_MIN;
	int64_t t170 = -943597LL;

    t170 = (x1229+(x1230>>(x1231<=x1232)));

    if (t170 != 4611686018427387929LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1233 = INT64_MIN;
	uint32_t x1234 = UINT32_MAX;
	int64_t x1235 = INT64_MIN;
	volatile uint8_t x1236 = 67U;

    t171 = (x1233+(x1234>>(x1235<=x1236)));

    if (t171 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1245 = 326U;
	volatile uint8_t x1246 = 123U;
	volatile uint64_t x1247 = 2707239LLU;
	static volatile int64_t x1248 = INT64_MAX;
	int32_t t172 = 3646607;

    t172 = (x1245+(x1246>>(x1247<=x1248)));

    if (t172 != 387) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1249 = INT16_MIN;
	volatile int16_t x1250 = 97;
	int32_t x1251 = 239868456;
	int8_t x1252 = INT8_MAX;
	static int32_t t173 = -8137220;

    t173 = (x1249+(x1250>>(x1251<=x1252)));

    if (t173 != -32671) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1253 = INT16_MIN;
	volatile int16_t x1254 = INT16_MAX;
	uint64_t x1255 = 90980458546743822LLU;
	static int8_t x1256 = INT8_MIN;

    t174 = (x1253+(x1254>>(x1255<=x1256)));

    if (t174 != -16385) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1261 = INT16_MAX;
	volatile uint8_t x1262 = UINT8_MAX;
	static volatile uint16_t x1263 = UINT16_MAX;
	int8_t x1264 = INT8_MIN;
	static int32_t t175 = -68978;

    t175 = (x1261+(x1262>>(x1263<=x1264)));

    if (t175 != 33022) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1265 = INT8_MIN;
	volatile int32_t x1267 = INT32_MIN;
	int64_t x1268 = 744LL;

    t176 = (x1265+(x1266>>(x1267<=x1268)));

    if (t176 != -128) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1274 = INT8_MAX;
	int8_t x1275 = INT8_MIN;
	static uint8_t x1276 = UINT8_MAX;
	uint64_t t177 = 6401454837429LLU;

    t177 = (x1273+(x1274>>(x1275<=x1276)));

    if (t177 != 121286698159159028LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1289 = -1;
	volatile uint64_t x1292 = 1LLU;
	volatile int64_t t178 = 3LL;

    t178 = (x1289+(x1290>>(x1291<=x1292)));

    if (t178 != 1405141660LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1297 = -14;
	int32_t x1298 = INT32_MAX;
	int32_t x1300 = 216;

    t179 = (x1297+(x1298>>(x1299<=x1300)));

    if (t179 != 2147483633) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x1301 = 146776089LLU;
	int8_t x1303 = INT8_MAX;
	int8_t x1304 = -2;

    t180 = (x1301+(x1302>>(x1303<=x1304)));

    if (t180 != 146776090LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1321 = -1;
	static int64_t x1322 = 55978166515LL;
	static uint32_t x1324 = UINT32_MAX;
	int64_t t181 = -2LL;

    t181 = (x1321+(x1322>>(x1323<=x1324)));

    if (t181 != 27989083256LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x1329 = INT64_MIN;
	static uint8_t x1330 = 85U;
	volatile uint16_t x1331 = 1564U;
	int16_t x1332 = -1;
	int64_t t182 = -16083912LL;

    t182 = (x1329+(x1330>>(x1331<=x1332)));

    if (t182 != -9223372036854775723LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1334 = 49;
	int64_t x1335 = INT64_MIN;
	uint32_t t183 = 24629U;

    t183 = (x1333+(x1334>>(x1335<=x1336)));

    if (t183 != 1835359U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1337 = 85U;
	uint64_t x1340 = UINT64_MAX;
	uint64_t t184 = 958LLU;

    t184 = (x1337+(x1338>>(x1339<=x1340)));

    if (t184 != 93LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1341 = UINT8_MAX;
	int32_t x1343 = INT32_MAX;
	int64_t x1344 = -76373LL;

    t185 = (x1341+(x1342>>(x1343<=x1344)));

    if (t185 != 312) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1345 = 6225431382675085LLU;
	int32_t x1346 = INT32_MAX;
	int32_t x1347 = -1679;
	static volatile int32_t x1348 = -1;

    t186 = (x1345+(x1346>>(x1347<=x1348)));

    if (t186 != 6225432456416908LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x1349 = INT8_MAX;
	uint64_t x1350 = UINT64_MAX;
	volatile int8_t x1351 = 14;
	volatile uint32_t x1352 = UINT32_MAX;
	volatile uint64_t t187 = 817LLU;

    t187 = (x1349+(x1350>>(x1351<=x1352)));

    if (t187 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1357 = INT64_MIN;
	volatile uint8_t x1358 = 109U;
	int64_t x1359 = INT64_MIN;
	uint16_t x1360 = 18U;

    t188 = (x1357+(x1358>>(x1359<=x1360)));

    if (t188 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1362 = INT32_MAX;
	uint8_t x1363 = 21U;
	int16_t x1364 = 3;
	static uint32_t t189 = 426050762U;

    t189 = (x1361+(x1362>>(x1363<=x1364)));

    if (t189 != 2147483725U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x1365 = 12744;
	uint16_t x1367 = UINT16_MAX;
	int32_t t190 = 219;

    t190 = (x1365+(x1366>>(x1367<=x1368)));

    if (t190 != 15552) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x1409 = INT64_MIN;
	volatile int32_t x1411 = INT32_MAX;
	uint32_t x1412 = 399192020U;
	volatile int64_t t191 = 79458850963209915LL;

    t191 = (x1409+(x1410>>(x1411<=x1412)));

    if (t191 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1421 = INT64_MIN;
	int32_t x1422 = INT32_MAX;
	uint64_t x1423 = UINT64_MAX;
	int64_t t192 = -1637124018335LL;

    t192 = (x1421+(x1422>>(x1423<=x1424)));

    if (t192 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x1429 = INT8_MIN;
	uint8_t x1430 = 10U;

    t193 = (x1429+(x1430>>(x1431<=x1432)));

    if (t193 != -118) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1437 = 8417LL;
	static int32_t x1439 = -1;
	static int32_t x1440 = -95686945;

    t194 = (x1437+(x1438>>(x1439<=x1440)));

    if (t194 != 73952LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1441 = 6554916LLU;
	static uint64_t x1442 = UINT64_MAX;
	static int8_t x1443 = 3;
	uint16_t x1444 = UINT16_MAX;
	uint64_t t195 = 12462791LLU;

    t195 = (x1441+(x1442>>(x1443<=x1444)));

    if (t195 != 9223372036861330723LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x1449 = INT8_MIN;
	int64_t x1450 = 560LL;
	int8_t x1451 = -1;
	volatile int64_t t196 = 51911834609973498LL;

    t196 = (x1449+(x1450>>(x1451<=x1452)));

    if (t196 != 152LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x1453 = 24U;
	volatile uint32_t x1455 = UINT32_MAX;
	volatile int32_t x1456 = -1;

    t197 = (x1453+(x1454>>(x1455<=x1456)));

    if (t197 != 16407) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x1465 = UINT8_MAX;
	uint16_t x1466 = 5257U;
	uint64_t x1467 = 35223LLU;
	static volatile int16_t x1468 = -1;
	int32_t t198 = 1;

    t198 = (x1465+(x1466>>(x1467<=x1468)));

    if (t198 != 2883) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1469 = -165000227;
	uint32_t x1470 = 836652788U;
	uint32_t x1471 = 14356476U;
	static volatile int64_t x1472 = INT64_MAX;
	volatile uint32_t t199 = 6204U;

    t199 = (x1469+(x1470>>(x1471<=x1472)));

    if (t199 != 253326167U) { NG(); } else { ; }
	
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

