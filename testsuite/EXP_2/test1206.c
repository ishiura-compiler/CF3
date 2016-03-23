
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

volatile int32_t x1 = INT32_MIN;
uint64_t x4 = 0LLU;
static int64_t x30 = -7LL;
int64_t x34 = INT64_MIN;
int16_t x37 = INT16_MAX;
volatile int32_t t7 = -475;
volatile uint32_t t8 = 13U;
static int16_t x45 = INT16_MIN;
uint8_t x49 = 11U;
int32_t t12 = -2843743;
static volatile uint64_t t13 = 4323037484025LLU;
static volatile int32_t x72 = INT32_MIN;
static uint64_t x74 = 224796589972LLU;
static volatile int16_t x81 = -1;
uint64_t x84 = UINT64_MAX;
static uint64_t t17 = 15734LLU;
int64_t x94 = INT64_MIN;
volatile uint8_t x99 = UINT8_MAX;
int8_t x102 = INT8_MIN;
volatile uint64_t x114 = UINT64_MAX;
volatile int64_t x123 = -1LL;
int32_t x124 = INT32_MIN;
int64_t x126 = 157473739LL;
int8_t x129 = 1;
static volatile int64_t x150 = INT64_MIN;
static volatile uint64_t x158 = UINT64_MAX;
int64_t x159 = INT64_MAX;
int8_t x161 = -1;
int8_t x176 = -6;
int32_t x180 = 45452;
int16_t x185 = INT16_MAX;
int32_t x190 = -1;
static int32_t t38 = -12;
int8_t x197 = INT8_MAX;
static int64_t x199 = INT64_MAX;
volatile uint64_t x208 = 1410826LLU;
static volatile int8_t x209 = 9;
int8_t x212 = 23;
volatile int32_t t42 = -1355968;
int64_t x213 = 437LL;
static int64_t t43 = 4803480782039LL;
volatile int8_t x222 = 47;
static uint32_t x225 = 41U;
int64_t x226 = -1LL;
int8_t x233 = -7;
int32_t x234 = INT32_MIN;
volatile int16_t x235 = -1;
volatile int64_t x246 = INT64_MIN;
int32_t t49 = 6650;
static uint16_t x256 = 30894U;
volatile uint16_t x258 = 6U;
int16_t x263 = INT16_MIN;
uint64_t x269 = 7967LLU;
int16_t x275 = INT16_MIN;
int64_t x283 = INT64_MIN;
static uint64_t x285 = UINT64_MAX;
volatile int32_t t58 = 3426;
volatile uint32_t x293 = 5U;
int32_t x298 = INT32_MIN;
volatile int64_t t61 = 4185532864LL;
int64_t x309 = -4LL;
uint8_t x310 = 88U;
int16_t x311 = -16;
uint16_t x313 = UINT16_MAX;
uint32_t x315 = 3U;
static uint32_t x328 = UINT32_MAX;
uint32_t t66 = 2U;
static int8_t x329 = -1;
int8_t x330 = INT8_MIN;
static volatile int64_t x332 = -22923861406LL;
int8_t x334 = INT8_MIN;
static int16_t x335 = 400;
int8_t x336 = INT8_MIN;
int8_t x338 = -1;
volatile int32_t t69 = -2;
uint16_t x345 = 2U;
int32_t t70 = -1;
volatile int64_t t71 = 13004470923988LL;
uint32_t x359 = UINT32_MAX;
int8_t x367 = 3;
static int64_t x369 = -45207423824280379LL;
static int32_t x375 = INT32_MIN;
static int32_t x376 = -1;
volatile int64_t x381 = -139841473LL;
uint32_t x399 = UINT32_MAX;
volatile uint32_t t83 = 1802887U;
uint8_t x410 = 4U;
static int64_t x412 = -1744176LL;
static uint64_t x417 = 2LLU;
int8_t x418 = 0;
volatile uint32_t t87 = 30425589U;
volatile int32_t t88 = 4068;
int64_t x430 = -1LL;
static volatile uint32_t x443 = 967152U;
volatile int16_t x455 = INT16_MAX;
volatile int16_t x459 = INT16_MAX;
uint16_t x460 = 194U;
int32_t x469 = INT32_MAX;
volatile uint16_t x473 = 5997U;
uint8_t x476 = 3U;
uint64_t t99 = 3870815461LLU;
int16_t x483 = INT16_MAX;
uint64_t x486 = 1LLU;
volatile uint32_t t102 = 26261102U;
uint64_t x497 = 11618240254547LLU;
int32_t t104 = -401228366;
volatile uint32_t x506 = 4064U;
uint64_t x511 = 3784242543370310879LLU;
int16_t x512 = INT16_MAX;
static int16_t x514 = INT16_MIN;
uint32_t x515 = UINT32_MAX;
volatile int32_t t107 = -983357;
static uint32_t x517 = 14U;
static int8_t x526 = -1;
static int16_t x534 = 2;
int16_t x538 = 29;
int64_t x542 = INT64_MIN;
static int16_t x543 = INT16_MAX;
int8_t x544 = INT8_MIN;
int64_t t113 = -60LL;
static uint32_t x545 = 121967180U;
int16_t x551 = INT16_MAX;
volatile int64_t t116 = -29244983LL;
static int8_t x563 = INT8_MIN;
static uint64_t t117 = 286363913865LLU;
uint64_t x572 = 46405230LLU;
volatile int16_t x586 = INT16_MAX;
int16_t x589 = INT16_MIN;
int32_t x598 = -159;
static int64_t x599 = INT64_MAX;
int64_t t124 = -3742716231572034LL;
static int16_t x610 = -1;
int64_t t126 = -5LL;
int32_t t127 = 1828106;
static int64_t x618 = -1LL;
uint16_t x619 = 7144U;
static volatile int64_t t128 = 6150078LL;
int16_t x621 = 4;
uint8_t x623 = UINT8_MAX;
static volatile uint16_t x628 = 0U;
int16_t x631 = INT16_MIN;
volatile uint32_t t131 = 2132U;
volatile int32_t t132 = -31707952;
uint8_t x638 = UINT8_MAX;
int16_t x640 = INT16_MIN;
int16_t x642 = INT16_MAX;
int8_t x644 = INT8_MIN;
int32_t x645 = -888;
volatile int8_t x648 = INT8_MIN;
volatile int64_t x649 = -77793113318LL;
uint32_t x655 = UINT32_MAX;
static uint16_t x665 = UINT16_MAX;
int64_t x673 = INT64_MAX;
volatile uint64_t x674 = UINT64_MAX;
static int8_t x675 = -6;
int64_t t141 = 3668045050540755708LL;
int8_t x677 = INT8_MIN;
int16_t x678 = INT16_MAX;
int64_t x681 = INT64_MAX;
uint16_t x682 = 473U;
int32_t x686 = INT32_MIN;
uint16_t x688 = 39U;
int32_t x690 = INT32_MAX;
volatile int64_t t145 = INT64_MAX;
int32_t x694 = 655618832;
int32_t t146 = -25;
int8_t x712 = -1;
volatile int32_t t149 = 23324463;
volatile int32_t x722 = -1;
static volatile int16_t x725 = -1;
volatile int8_t x731 = -14;
int32_t t154 = 16090;
int64_t x746 = INT64_MIN;
volatile uint64_t t159 = 8551434895566LLU;
uint32_t x772 = 671U;
int64_t x774 = INT64_MAX;
uint32_t x782 = UINT32_MAX;
int64_t x795 = 13769LL;
static volatile uint64_t t168 = 34424700LLU;
static uint64_t x808 = 27288910604936LLU;
uint64_t x809 = 57747LLU;
volatile int8_t x810 = INT8_MIN;
int16_t x811 = -1;
volatile uint64_t t170 = 29453LLU;
int8_t x813 = INT8_MAX;
int64_t x815 = INT64_MIN;
volatile uint64_t x819 = UINT64_MAX;
int64_t x824 = INT64_MAX;
int64_t t173 = -21172115030492LL;
uint32_t x825 = 313732U;
volatile uint32_t t174 = 92724974U;
uint64_t x831 = UINT64_MAX;
volatile uint8_t x836 = UINT8_MAX;
int64_t x840 = -1LL;
int64_t x847 = -5905105240100LL;
int64_t x855 = INT64_MIN;
int64_t x856 = INT64_MIN;
volatile int64_t t181 = INT64_MAX;
uint32_t x857 = UINT32_MAX;
int64_t x868 = -353040702LL;
static volatile int32_t x869 = INT32_MIN;
int8_t x871 = INT8_MIN;
int64_t x883 = 822127963441LL;
volatile int32_t x891 = -1129;
int32_t x892 = INT32_MIN;
static int64_t x893 = -209LL;
static uint8_t x895 = 54U;
volatile int64_t t190 = 873LL;
static int16_t x902 = INT16_MIN;
uint16_t x904 = 239U;
uint32_t x908 = UINT32_MAX;
volatile int64_t x909 = INT64_MIN;
volatile int64_t t193 = 898051608LL;
int64_t x914 = -424058LL;
static int8_t x916 = INT8_MAX;
uint32_t x920 = 114480U;
uint8_t x922 = 1U;
static int8_t x927 = -6;
uint32_t x937 = 1800U;
uint32_t x938 = UINT32_MAX;
int32_t t199 = 10;


void f0(void) {
    	int32_t x2 = 13;
	int64_t x3 = -409939406670807LL;
	volatile uint64_t t0 = 295722150708LLU;

    t0 = ((x1*(x2!=x3))-x4);

    if (t0 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 71U;
	int32_t x6 = INT32_MAX;
	int16_t x7 = -1;
	static uint8_t x8 = 94U;
	int32_t t1 = 114592;

    t1 = ((x5*(x6!=x7))-x8);

    if (t1 != -23) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = 582;
	uint32_t x10 = 1332U;
	int8_t x11 = INT8_MAX;
	volatile uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = 1280U;

    t2 = ((x9*(x10!=x11))-x12);

    if (t2 != 583U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 106;
	int8_t x14 = INT8_MIN;
	int64_t x15 = -98LL;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 7;

    t3 = ((x13*(x14!=x15))-x16);

    if (t3 != -65429) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x25 = 210;
	volatile int32_t x26 = INT32_MAX;
	uint32_t x27 = UINT32_MAX;
	uint8_t x28 = UINT8_MAX;
	static volatile int32_t t4 = -988882;

    t4 = ((x25*(x26!=x27))-x28);

    if (t4 != -45) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x29 = 476U;
	uint8_t x31 = 12U;
	int16_t x32 = INT16_MIN;
	static int32_t t5 = 6016613;

    t5 = ((x29*(x30!=x31))-x32);

    if (t5 != 33244) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x33 = 11641;
	static uint64_t x35 = 345100054LLU;
	int16_t x36 = INT16_MIN;
	int32_t t6 = 10489;

    t6 = ((x33*(x34!=x35))-x36);

    if (t6 != 44409) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x38 = 8U;
	static int16_t x39 = INT16_MIN;
	volatile uint8_t x40 = 16U;

    t7 = ((x37*(x38!=x39))-x40);

    if (t7 != 32751) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x41 = 6U;
	uint8_t x42 = UINT8_MAX;
	static volatile int16_t x43 = -34;
	volatile uint32_t x44 = UINT32_MAX;

    t8 = ((x41*(x42!=x43))-x44);

    if (t8 != 7U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x46 = INT8_MAX;
	uint32_t x47 = 10421U;
	int16_t x48 = -150;
	static volatile int32_t t9 = 29890973;

    t9 = ((x45*(x46!=x47))-x48);

    if (t9 != -32618) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x50 = 49U;
	int32_t x51 = INT32_MAX;
	uint16_t x52 = 2699U;
	volatile int32_t t10 = 754693636;

    t10 = ((x49*(x50!=x51))-x52);

    if (t10 != -2688) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x53 = INT32_MAX;
	static uint16_t x54 = 5U;
	int8_t x55 = INT8_MAX;
	uint32_t x56 = 569302020U;
	volatile uint32_t t11 = 268266728U;

    t11 = ((x53*(x54!=x55))-x56);

    if (t11 != 1578181627U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x57 = 3U;
	int32_t x58 = INT32_MAX;
	int64_t x59 = INT64_MAX;
	static int16_t x60 = INT16_MIN;

    t12 = ((x57*(x58!=x59))-x60);

    if (t12 != 32771) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x61 = 33156849909703821LLU;
	static volatile uint32_t x62 = 843U;
	uint16_t x63 = 2U;
	uint8_t x64 = 44U;

    t13 = ((x61*(x62!=x63))-x64);

    if (t13 != 33156849909703777LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x65 = 5384829508781LLU;
	int32_t x66 = INT32_MAX;
	static volatile int8_t x67 = INT8_MAX;
	static volatile int8_t x68 = INT8_MAX;
	uint64_t t14 = 15575009666343461LLU;

    t14 = ((x65*(x66!=x67))-x68);

    if (t14 != 5384829508654LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x69 = INT32_MIN;
	volatile int16_t x70 = -24;
	uint64_t x71 = 92LLU;
	volatile int32_t t15 = -12734;

    t15 = ((x69*(x70!=x71))-x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x73 = UINT8_MAX;
	static int16_t x75 = INT16_MIN;
	uint64_t x76 = 100LLU;
	static uint64_t t16 = 15400911LLU;

    t16 = ((x73*(x74!=x75))-x76);

    if (t16 != 155LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x82 = 15456540LLU;
	int64_t x83 = INT64_MIN;

    t17 = ((x81*(x82!=x83))-x84);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x85 = -1;
	int16_t x86 = INT16_MAX;
	int32_t x87 = INT32_MIN;
	volatile uint16_t x88 = 1U;
	volatile int32_t t18 = -391;

    t18 = ((x85*(x86!=x87))-x88);

    if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x89 = INT8_MAX;
	int32_t x90 = -1;
	uint64_t x91 = 18LLU;
	static uint64_t x92 = 1769789269477924LLU;
	volatile uint64_t t19 = 3974669LLU;

    t19 = ((x89*(x90!=x91))-x92);

    if (t19 != 18444974284440073819LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x93 = -4;
	static volatile int64_t x95 = INT64_MAX;
	static int16_t x96 = -1;
	volatile int32_t t20 = 6381;

    t20 = ((x93*(x94!=x95))-x96);

    if (t20 != -3) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = INT8_MIN;
	uint16_t x98 = 10655U;
	uint32_t x100 = 900089601U;
	static uint32_t t21 = 159828700U;

    t21 = ((x97*(x98!=x99))-x100);

    if (t21 != 3394877567U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x101 = INT16_MIN;
	static volatile int64_t x103 = INT64_MIN;
	uint8_t x104 = UINT8_MAX;
	static int32_t t22 = -27;

    t22 = ((x101*(x102!=x103))-x104);

    if (t22 != -33023) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x113 = -7;
	uint32_t x115 = UINT32_MAX;
	static int16_t x116 = -1;
	volatile int32_t t23 = 60590814;

    t23 = ((x113*(x114!=x115))-x116);

    if (t23 != -6) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x117 = 3465U;
	static int8_t x118 = INT8_MIN;
	volatile uint16_t x119 = 0U;
	uint16_t x120 = 9617U;
	volatile int32_t t24 = 7645;

    t24 = ((x117*(x118!=x119))-x120);

    if (t24 != -6152) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x121 = INT32_MIN;
	int64_t x122 = INT64_MAX;
	static int32_t t25 = -183288731;

    t25 = ((x121*(x122!=x123))-x124);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x125 = INT8_MIN;
	int16_t x127 = 0;
	volatile int8_t x128 = -2;
	volatile int32_t t26 = -22520;

    t26 = ((x125*(x126!=x127))-x128);

    if (t26 != -126) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x130 = UINT8_MAX;
	uint32_t x131 = 780927U;
	static int8_t x132 = 3;
	int32_t t27 = -1252;

    t27 = ((x129*(x130!=x131))-x132);

    if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x133 = 5U;
	int8_t x134 = 0;
	uint32_t x135 = 11381511U;
	int16_t x136 = -1;
	int32_t t28 = 1013578702;

    t28 = ((x133*(x134!=x135))-x136);

    if (t28 != 6) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x137 = 63U;
	int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t29 = 15910LLU;

    t29 = ((x137*(x138!=x139))-x140);

    if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x141 = 3825U;
	uint8_t x142 = 0U;
	int16_t x143 = 4;
	uint32_t x144 = 829905U;
	uint32_t t30 = 122067122U;

    t30 = ((x141*(x142!=x143))-x144);

    if (t30 != 4294141216U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x149 = 386;
	int16_t x151 = -1;
	volatile uint32_t x152 = 111416U;
	volatile uint32_t t31 = 213687115U;

    t31 = ((x149*(x150!=x151))-x152);

    if (t31 != 4294856266U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x157 = -793579128949LL;
	uint64_t x160 = UINT64_MAX;
	static volatile uint64_t t32 = 203852572835362LLU;

    t32 = ((x157*(x158!=x159))-x160);

    if (t32 != 18446743280130422668LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x162 = UINT64_MAX;
	int16_t x163 = INT16_MIN;
	volatile int16_t x164 = -1;
	volatile int32_t t33 = 437;

    t33 = ((x161*(x162!=x163))-x164);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x173 = INT64_MIN;
	static int16_t x174 = -1;
	uint16_t x175 = UINT16_MAX;
	volatile int64_t t34 = -487674355654815868LL;

    t34 = ((x173*(x174!=x175))-x176);

    if (t34 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x177 = 1U;
	int16_t x178 = INT16_MIN;
	int64_t x179 = INT64_MIN;
	int32_t t35 = -16798720;

    t35 = ((x177*(x178!=x179))-x180);

    if (t35 != -45451) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x186 = -1;
	int8_t x187 = INT8_MAX;
	uint32_t x188 = UINT32_MAX;
	uint32_t t36 = 681271U;

    t36 = ((x185*(x186!=x187))-x188);

    if (t36 != 32768U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x189 = 38365879248LLU;
	uint8_t x191 = 1U;
	volatile int32_t x192 = INT32_MIN;
	volatile uint64_t t37 = 2235561931595LLU;

    t37 = ((x189*(x190!=x191))-x192);

    if (t37 != 40513362896LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x193 = 61;
	uint64_t x194 = UINT64_MAX;
	int16_t x195 = 1366;
	static int8_t x196 = INT8_MIN;

    t38 = ((x193*(x194!=x195))-x196);

    if (t38 != 189) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x198 = 532U;
	int64_t x200 = -1LL;
	static volatile int64_t t39 = -4370103LL;

    t39 = ((x197*(x198!=x199))-x200);

    if (t39 != 128LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x201 = 28571U;
	volatile int32_t x202 = 0;
	int32_t x203 = 103474;
	static uint16_t x204 = 993U;
	static volatile int32_t t40 = 14973;

    t40 = ((x201*(x202!=x203))-x204);

    if (t40 != 27578) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x205 = INT8_MAX;
	int32_t x206 = -488;
	int64_t x207 = -1LL;
	static volatile uint64_t t41 = 825007192170987LLU;

    t41 = ((x205*(x206!=x207))-x208);

    if (t41 != 18446744073708140917LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x210 = 480U;
	int32_t x211 = INT32_MAX;

    t42 = ((x209*(x210!=x211))-x212);

    if (t42 != -14) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x214 = INT64_MAX;
	int8_t x215 = -1;
	volatile int8_t x216 = 22;

    t43 = ((x213*(x214!=x215))-x216);

    if (t43 != 415LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x221 = -1LL;
	uint32_t x223 = UINT32_MAX;
	int64_t x224 = INT64_MAX;
	volatile int64_t t44 = INT64_MIN;

    t44 = ((x221*(x222!=x223))-x224);

    if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x227 = 16120U;
	uint64_t x228 = 19648637751316LLU;
	uint64_t t45 = 8277706LLU;

    t45 = ((x225*(x226!=x227))-x228);

    if (t45 != 18446724425071800341LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x236 = 1152535339LL;
	volatile int64_t t46 = -2LL;

    t46 = ((x233*(x234!=x235))-x236);

    if (t46 != -1152535346LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x237 = 970U;
	int16_t x238 = -1;
	int16_t x239 = -1;
	int32_t x240 = INT32_MAX;
	volatile int32_t t47 = -7;

    t47 = ((x237*(x238!=x239))-x240);

    if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x241 = 138U;
	static int32_t x242 = -705;
	uint16_t x243 = 291U;
	uint64_t x244 = 136251LLU;
	uint64_t t48 = 8077525843804LLU;

    t48 = ((x241*(x242!=x243))-x244);

    if (t48 != 18446744073709415503LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x245 = 18956;
	uint64_t x247 = UINT64_MAX;
	int16_t x248 = -2;

    t49 = ((x245*(x246!=x247))-x248);

    if (t49 != 18958) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x249 = 139LLU;
	volatile int64_t x250 = -1LL;
	int32_t x251 = -1;
	int64_t x252 = -1LL;
	volatile uint64_t t50 = 147304324LLU;

    t50 = ((x249*(x250!=x251))-x252);

    if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x253 = INT8_MIN;
	int32_t x254 = INT32_MIN;
	int32_t x255 = INT32_MIN;
	int32_t t51 = -16;

    t51 = ((x253*(x254!=x255))-x256);

    if (t51 != -30894) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x257 = -1;
	int8_t x259 = -1;
	volatile int8_t x260 = -1;
	volatile int32_t t52 = 108;

    t52 = ((x257*(x258!=x259))-x260);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x261 = 51537613;
	uint32_t x262 = UINT32_MAX;
	int8_t x264 = INT8_MAX;
	static int32_t t53 = -960578100;

    t53 = ((x261*(x262!=x263))-x264);

    if (t53 != 51537486) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x270 = INT16_MIN;
	volatile int32_t x271 = -8;
	static uint16_t x272 = UINT16_MAX;
	uint64_t t54 = 37531LLU;

    t54 = ((x269*(x270!=x271))-x272);

    if (t54 != 18446744073709494048LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int32_t x273 = INT32_MIN;
	uint8_t x274 = 8U;
	int16_t x276 = INT16_MIN;
	static int32_t t55 = -5;

    t55 = ((x273*(x274!=x275))-x276);

    if (t55 != -2147450880) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x281 = INT8_MAX;
	volatile int8_t x282 = INT8_MIN;
	int64_t x284 = -1LL;
	int64_t t56 = -7LL;

    t56 = ((x281*(x282!=x283))-x284);

    if (t56 != 128LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x286 = -1;
	static volatile int8_t x287 = -1;
	static int64_t x288 = -15LL;
	uint64_t t57 = 541102146181737LLU;

    t57 = ((x285*(x286!=x287))-x288);

    if (t57 != 15LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x289 = 0U;
	volatile int32_t x290 = INT32_MIN;
	int64_t x291 = 1445366831145022824LL;
	volatile int8_t x292 = 6;

    t58 = ((x289*(x290!=x291))-x292);

    if (t58 != -6) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x294 = 7U;
	int8_t x295 = INT8_MAX;
	static volatile uint16_t x296 = 15107U;
	static volatile uint32_t t59 = 1380434022U;

    t59 = ((x293*(x294!=x295))-x296);

    if (t59 != 4294952194U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x297 = 0U;
	int32_t x299 = -1;
	static uint64_t x300 = 644891LLU;
	volatile uint64_t t60 = 3996763645973LLU;

    t60 = ((x297*(x298!=x299))-x300);

    if (t60 != 18446744073708906725LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x301 = -337370357863917473LL;
	static int64_t x302 = INT64_MAX;
	volatile int32_t x303 = INT32_MIN;
	int32_t x304 = INT32_MIN;

    t61 = ((x301*(x302!=x303))-x304);

    if (t61 != -337370355716433825LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x305 = INT64_MAX;
	int16_t x306 = 8;
	static uint32_t x307 = 1U;
	uint16_t x308 = 244U;
	volatile int64_t t62 = -21257LL;

    t62 = ((x305*(x306!=x307))-x308);

    if (t62 != 9223372036854775563LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x312 = -3;
	int64_t t63 = -17472909650537851LL;

    t63 = ((x309*(x310!=x311))-x312);

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x314 = -1LL;
	uint8_t x316 = 1U;
	static int32_t t64 = -67591141;

    t64 = ((x313*(x314!=x315))-x316);

    if (t64 != 65534) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x317 = UINT64_MAX;
	uint64_t x318 = 21911691203LLU;
	int32_t x319 = -1;
	uint32_t x320 = UINT32_MAX;
	static uint64_t t65 = 217742927809091045LLU;

    t65 = ((x317*(x318!=x319))-x320);

    if (t65 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x325 = INT8_MAX;
	volatile uint32_t x326 = 3U;
	static int64_t x327 = INT64_MIN;

    t66 = ((x325*(x326!=x327))-x328);

    if (t66 != 128U) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x331 = 2927248;
	volatile int64_t t67 = 476844LL;

    t67 = ((x329*(x330!=x331))-x332);

    if (t67 != 22923861405LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x333 = 10;
	volatile int32_t t68 = 28;

    t68 = ((x333*(x334!=x335))-x336);

    if (t68 != 138) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x337 = 3028U;
	static uint64_t x339 = 8363259741932336LLU;
	int16_t x340 = -1693;

    t69 = ((x337*(x338!=x339))-x340);

    if (t69 != 4721) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x346 = -1LL;
	static int64_t x347 = -1LL;
	volatile int16_t x348 = INT16_MIN;

    t70 = ((x345*(x346!=x347))-x348);

    if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x349 = 250033831;
	static uint8_t x350 = 4U;
	uint64_t x351 = 15826434592361LLU;
	int64_t x352 = 414576LL;

    t71 = ((x349*(x350!=x351))-x352);

    if (t71 != 249619255LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x353 = -10724442;
	int8_t x354 = -1;
	int32_t x355 = -318229426;
	static int32_t x356 = INT32_MIN;
	int32_t t72 = 0;

    t72 = ((x353*(x354!=x355))-x356);

    if (t72 != 2136759206) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x357 = UINT16_MAX;
	static int32_t x358 = INT32_MIN;
	uint16_t x360 = 0U;
	volatile int32_t t73 = 1;

    t73 = ((x357*(x358!=x359))-x360);

    if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x365 = INT8_MIN;
	int64_t x366 = INT64_MIN;
	int64_t x368 = INT64_MIN;
	int64_t t74 = -7614872673489655LL;

    t74 = ((x365*(x366!=x367))-x368);

    if (t74 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x370 = 2U;
	uint8_t x371 = 0U;
	int32_t x372 = INT32_MAX;
	static int64_t t75 = 2LL;

    t75 = ((x369*(x370!=x371))-x372);

    if (t75 != -45207425971764026LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x373 = 85U;
	int8_t x374 = INT8_MIN;
	volatile int32_t t76 = -13085;

    t76 = ((x373*(x374!=x375))-x376);

    if (t76 != 86) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x377 = INT8_MIN;
	static int8_t x378 = INT8_MAX;
	uint64_t x379 = 2837627LLU;
	uint16_t x380 = 766U;
	volatile int32_t t77 = 383;

    t77 = ((x377*(x378!=x379))-x380);

    if (t77 != -894) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x382 = INT32_MAX;
	int64_t x383 = INT64_MAX;
	int8_t x384 = -2;
	volatile int64_t t78 = -21769LL;

    t78 = ((x381*(x382!=x383))-x384);

    if (t78 != -139841471LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x385 = -1;
	volatile int32_t x386 = INT32_MIN;
	static int16_t x387 = INT16_MIN;
	int32_t x388 = INT32_MIN;
	int32_t t79 = INT32_MAX;

    t79 = ((x385*(x386!=x387))-x388);

    if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x389 = 11859;
	volatile int16_t x390 = -1;
	static int8_t x391 = -36;
	volatile int32_t x392 = 5953;
	int32_t t80 = -584287385;

    t80 = ((x389*(x390!=x391))-x392);

    if (t80 != 5906) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x393 = INT32_MIN;
	uint8_t x394 = 22U;
	int16_t x395 = -1;
	int64_t x396 = INT64_MIN;
	int64_t t81 = -2824LL;

    t81 = ((x393*(x394!=x395))-x396);

    if (t81 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x397 = INT8_MIN;
	int8_t x398 = -1;
	static int8_t x400 = INT8_MIN;
	int32_t t82 = 3491692;

    t82 = ((x397*(x398!=x399))-x400);

    if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x405 = 21181403U;
	uint64_t x406 = UINT64_MAX;
	static uint64_t x407 = 3890758646597741LLU;
	volatile int32_t x408 = INT32_MIN;

    t83 = ((x405*(x406!=x407))-x408);

    if (t83 != 2168665051U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x409 = 33U;
	volatile int8_t x411 = 0;
	int64_t t84 = -2LL;

    t84 = ((x409*(x410!=x411))-x412);

    if (t84 != 1744209LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x413 = INT64_MIN;
	static int16_t x414 = INT16_MIN;
	uint8_t x415 = UINT8_MAX;
	int64_t x416 = INT64_MIN;
	volatile int64_t t85 = 496411670526LL;

    t85 = ((x413*(x414!=x415))-x416);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x419 = UINT16_MAX;
	uint64_t x420 = 105691175009314450LLU;
	uint64_t t86 = 9480LLU;

    t86 = ((x417*(x418!=x419))-x420);

    if (t86 != 18341052898700237168LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x421 = UINT8_MAX;
	int32_t x422 = -1;
	static uint16_t x423 = UINT16_MAX;
	static uint32_t x424 = 327919U;

    t87 = ((x421*(x422!=x423))-x424);

    if (t87 != 4294639632U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x425 = -31;
	int8_t x426 = 2;
	int8_t x427 = 0;
	uint16_t x428 = UINT16_MAX;

    t88 = ((x425*(x426!=x427))-x428);

    if (t88 != -65566) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x429 = INT64_MAX;
	int32_t x431 = -1;
	int32_t x432 = INT32_MIN;
	int64_t t89 = -3400LL;

    t89 = ((x429*(x430!=x431))-x432);

    if (t89 != 2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x433 = INT8_MAX;
	static int16_t x434 = INT16_MAX;
	uint16_t x435 = UINT16_MAX;
	int16_t x436 = INT16_MAX;
	volatile int32_t t90 = -99680;

    t90 = ((x433*(x434!=x435))-x436);

    if (t90 != -32640) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x441 = INT16_MAX;
	uint64_t x442 = 6369580978034LLU;
	volatile int32_t x444 = INT32_MAX;
	int32_t t91 = 27269;

    t91 = ((x441*(x442!=x443))-x444);

    if (t91 != -2147450880) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x445 = INT64_MIN;
	int32_t x446 = INT32_MIN;
	int64_t x447 = -43535370LL;
	int64_t x448 = INT64_MIN;
	int64_t t92 = 0LL;

    t92 = ((x445*(x446!=x447))-x448);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x453 = 119;
	static int8_t x454 = INT8_MIN;
	volatile uint8_t x456 = 0U;
	int32_t t93 = 4;

    t93 = ((x453*(x454!=x455))-x456);

    if (t93 != 119) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x457 = INT16_MIN;
	int32_t x458 = INT32_MIN;
	static volatile int32_t t94 = 26268;

    t94 = ((x457*(x458!=x459))-x460);

    if (t94 != -32962) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x461 = UINT8_MAX;
	static int64_t x462 = -3488LL;
	uint16_t x463 = 136U;
	static int32_t x464 = -1;
	volatile int32_t t95 = 43441442;

    t95 = ((x461*(x462!=x463))-x464);

    if (t95 != 256) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x465 = 0U;
	int32_t x466 = INT32_MIN;
	int64_t x467 = INT64_MIN;
	uint32_t x468 = 512394U;
	uint32_t t96 = 48897935U;

    t96 = ((x465*(x466!=x467))-x468);

    if (t96 != 4294454902U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x470 = INT64_MAX;
	uint8_t x471 = 61U;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t97 = 1;

    t97 = ((x469*(x470!=x471))-x472);

    if (t97 != 2147483392) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x474 = 8138U;
	int16_t x475 = INT16_MIN;
	int32_t t98 = 2514;

    t98 = ((x473*(x474!=x475))-x476);

    if (t98 != 5994) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x477 = 35U;
	static uint64_t x478 = UINT64_MAX;
	int64_t x479 = INT64_MAX;
	uint64_t x480 = 90760383713411762LLU;

    t99 = ((x477*(x478!=x479))-x480);

    if (t99 != 18355983689996139889LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x481 = 3;
	static uint16_t x482 = 6U;
	int8_t x484 = INT8_MIN;
	int32_t t100 = -6874;

    t100 = ((x481*(x482!=x483))-x484);

    if (t100 != 131) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x485 = -1;
	int64_t x487 = INT64_MAX;
	static int8_t x488 = INT8_MIN;
	int32_t t101 = -2;

    t101 = ((x485*(x486!=x487))-x488);

    if (t101 != 127) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x493 = INT8_MIN;
	static int8_t x494 = INT8_MIN;
	static int8_t x495 = INT8_MAX;
	uint32_t x496 = 19U;

    t102 = ((x493*(x494!=x495))-x496);

    if (t102 != 4294967149U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x498 = -67;
	int8_t x499 = INT8_MIN;
	static int16_t x500 = INT16_MIN;
	uint64_t t103 = 1460166906LLU;

    t103 = ((x497*(x498!=x499))-x500);

    if (t103 != 11618240287315LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x501 = INT16_MAX;
	int32_t x502 = 534915;
	static volatile int8_t x503 = -1;
	static int32_t x504 = INT32_MAX;

    t104 = ((x501*(x502!=x503))-x504);

    if (t104 != -2147450880) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x505 = -1;
	static int32_t x507 = -1;
	int16_t x508 = -7;
	int32_t t105 = -4462908;

    t105 = ((x505*(x506!=x507))-x508);

    if (t105 != 6) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x509 = 3U;
	int64_t x510 = INT64_MAX;
	int32_t t106 = 854;

    t106 = ((x509*(x510!=x511))-x512);

    if (t106 != -32764) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x513 = -28;
	int8_t x516 = 3;

    t107 = ((x513*(x514!=x515))-x516);

    if (t107 != -31) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x518 = INT16_MIN;
	volatile uint16_t x519 = 125U;
	uint32_t x520 = 1043904506U;
	uint32_t t108 = 112864195U;

    t108 = ((x517*(x518!=x519))-x520);

    if (t108 != 3251062804U) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x525 = INT32_MIN;
	uint32_t x527 = 7U;
	int8_t x528 = INT8_MIN;
	volatile int32_t t109 = 15134;

    t109 = ((x525*(x526!=x527))-x528);

    if (t109 != -2147483520) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x529 = INT32_MAX;
	int16_t x530 = -1;
	volatile int32_t x531 = -1;
	volatile int8_t x532 = INT8_MIN;
	volatile int32_t t110 = 2070;

    t110 = ((x529*(x530!=x531))-x532);

    if (t110 != 128) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x533 = UINT16_MAX;
	uint16_t x535 = 1U;
	uint64_t x536 = 31305504668760LLU;
	volatile uint64_t t111 = 549738384312841790LLU;

    t111 = ((x533*(x534!=x535))-x536);

    if (t111 != 18446712768204948391LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x537 = 10U;
	uint16_t x539 = 372U;
	uint32_t x540 = 916071705U;
	volatile uint32_t t112 = 103U;

    t112 = ((x537*(x538!=x539))-x540);

    if (t112 != 3378895601U) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x541 = -1LL;

    t113 = ((x541*(x542!=x543))-x544);

    if (t113 != 127LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x546 = INT16_MIN;
	uint16_t x547 = UINT16_MAX;
	int16_t x548 = INT16_MIN;
	uint32_t t114 = 2381287U;

    t114 = ((x545*(x546!=x547))-x548);

    if (t114 != 121999948U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x549 = UINT32_MAX;
	int64_t x550 = -14694565LL;
	int32_t x552 = INT32_MIN;
	uint32_t t115 = 0U;

    t115 = ((x549*(x550!=x551))-x552);

    if (t115 != 2147483647U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x557 = INT16_MAX;
	uint32_t x558 = UINT32_MAX;
	int8_t x559 = 59;
	int64_t x560 = INT64_MAX;

    t116 = ((x557*(x558!=x559))-x560);

    if (t116 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x561 = 3LLU;
	int64_t x562 = 273789434059371LL;
	int64_t x564 = -328537257731345LL;

    t117 = ((x561*(x562!=x563))-x564);

    if (t117 != 328537257731348LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x565 = UINT8_MAX;
	uint8_t x566 = 4U;
	static volatile uint16_t x567 = 862U;
	int8_t x568 = INT8_MIN;
	int32_t t118 = -1850;

    t118 = ((x565*(x566!=x567))-x568);

    if (t118 != 383) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x569 = INT8_MAX;
	uint64_t x570 = 30788360682655LLU;
	int8_t x571 = INT8_MAX;
	static volatile uint64_t t119 = 196898211LLU;

    t119 = ((x569*(x570!=x571))-x572);

    if (t119 != 18446744073663146513LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x573 = INT8_MIN;
	int32_t x574 = INT32_MIN;
	int8_t x575 = 45;
	static volatile int16_t x576 = INT16_MAX;
	static volatile int32_t t120 = 4638;

    t120 = ((x573*(x574!=x575))-x576);

    if (t120 != -32895) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x585 = -1LL;
	volatile int8_t x587 = INT8_MAX;
	uint64_t x588 = 148434500994344001LLU;
	uint64_t t121 = 18853429807299908LLU;

    t121 = ((x585*(x586!=x587))-x588);

    if (t121 != 18298309572715207614LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x590 = INT16_MAX;
	int64_t x591 = 53237201558LL;
	static volatile uint64_t x592 = 12447LLU;
	uint64_t t122 = 1849780LLU;

    t122 = ((x589*(x590!=x591))-x592);

    if (t122 != 18446744073709506401LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x597 = -1LL;
	int16_t x600 = -1;
	int64_t t123 = 13783LL;

    t123 = ((x597*(x598!=x599))-x600);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x601 = 18901U;
	int8_t x602 = INT8_MAX;
	int8_t x603 = -15;
	int64_t x604 = INT64_MAX;

    t124 = ((x601*(x602!=x603))-x604);

    if (t124 != -9223372036854756906LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x605 = 3LL;
	static volatile int8_t x606 = INT8_MAX;
	int32_t x607 = -801174029;
	static volatile uint8_t x608 = UINT8_MAX;
	volatile int64_t t125 = -7836789604431070LL;

    t125 = ((x605*(x606!=x607))-x608);

    if (t125 != -252LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x609 = INT64_MIN;
	volatile int32_t x611 = 5;
	volatile int8_t x612 = -7;

    t126 = ((x609*(x610!=x611))-x612);

    if (t126 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x613 = INT8_MIN;
	int8_t x614 = -1;
	int8_t x615 = INT8_MIN;
	uint8_t x616 = UINT8_MAX;

    t127 = ((x613*(x614!=x615))-x616);

    if (t127 != -383) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x617 = -1;
	int64_t x620 = 1248LL;

    t128 = ((x617*(x618!=x619))-x620);

    if (t128 != -1249LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x622 = -89830;
	int32_t x624 = INT32_MAX;
	volatile int32_t t129 = -322;

    t129 = ((x621*(x622!=x623))-x624);

    if (t129 != -2147483643) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x625 = INT16_MAX;
	volatile int32_t x626 = -311;
	uint32_t x627 = UINT32_MAX;
	volatile int32_t t130 = 1074;

    t130 = ((x625*(x626!=x627))-x628);

    if (t130 != 32767) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint16_t x629 = 14U;
	int8_t x630 = 1;
	uint32_t x632 = 204626101U;

    t131 = ((x629*(x630!=x631))-x632);

    if (t131 != 4090341209U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x633 = 21082;
	static int64_t x634 = INT64_MIN;
	volatile int16_t x635 = INT16_MIN;
	int16_t x636 = INT16_MAX;

    t132 = ((x633*(x634!=x635))-x636);

    if (t132 != -11685) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x637 = UINT16_MAX;
	volatile int8_t x639 = -1;
	volatile int32_t t133 = 5895931;

    t133 = ((x637*(x638!=x639))-x640);

    if (t133 != 98303) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x641 = INT8_MAX;
	int8_t x643 = -1;
	static volatile int32_t t134 = 1237;

    t134 = ((x641*(x642!=x643))-x644);

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x646 = -770;
	uint64_t x647 = 116837164LLU;
	volatile int32_t t135 = 555;

    t135 = ((x645*(x646!=x647))-x648);

    if (t135 != -760) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x650 = INT8_MAX;
	int16_t x651 = 1;
	uint64_t x652 = 3514317130371685LLU;
	uint64_t t136 = 70320412942264044LLU;

    t136 = ((x649*(x650!=x651))-x652);

    if (t136 != 18443229678786066613LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x653 = 338051LLU;
	volatile uint8_t x654 = 18U;
	uint16_t x656 = UINT16_MAX;
	volatile uint64_t t137 = 11424174175897LLU;

    t137 = ((x653*(x654!=x655))-x656);

    if (t137 != 272516LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x657 = INT16_MIN;
	static int64_t x658 = 153LL;
	static volatile int32_t x659 = -1;
	volatile uint8_t x660 = 0U;
	static int32_t t138 = 10824564;

    t138 = ((x657*(x658!=x659))-x660);

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x661 = 3U;
	volatile int8_t x662 = 10;
	volatile int16_t x663 = 238;
	int8_t x664 = -1;
	static int32_t t139 = 7342;

    t139 = ((x661*(x662!=x663))-x664);

    if (t139 != 4) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x666 = 0U;
	static uint64_t x667 = UINT64_MAX;
	uint64_t x668 = UINT64_MAX;
	static volatile uint64_t t140 = 0LLU;

    t140 = ((x665*(x666!=x667))-x668);

    if (t140 != 65536LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x676 = INT64_MAX;

    t141 = ((x673*(x674!=x675))-x676);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x679 = UINT8_MAX;
	volatile int16_t x680 = 2788;
	volatile int32_t t142 = 8379430;

    t142 = ((x677*(x678!=x679))-x680);

    if (t142 != -2916) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x683 = INT64_MAX;
	volatile int8_t x684 = INT8_MAX;
	int64_t t143 = 19288344LL;

    t143 = ((x681*(x682!=x683))-x684);

    if (t143 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x685 = INT8_MIN;
	int64_t x687 = -1LL;
	static volatile int32_t t144 = 425;

    t144 = ((x685*(x686!=x687))-x688);

    if (t144 != -167) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x689 = -1;
	uint64_t x691 = 94072038566127LLU;
	int64_t x692 = INT64_MIN;

    t145 = ((x689*(x690!=x691))-x692);

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x693 = -1;
	volatile uint64_t x695 = UINT64_MAX;
	int8_t x696 = 9;

    t146 = ((x693*(x694!=x695))-x696);

    if (t146 != -10) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x697 = UINT8_MAX;
	static uint64_t x698 = 255822400223LLU;
	volatile uint32_t x699 = 356517811U;
	uint16_t x700 = 22U;
	int32_t t147 = -1;

    t147 = ((x697*(x698!=x699))-x700);

    if (t147 != 233) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x709 = 1U;
	int16_t x710 = INT16_MIN;
	volatile int64_t x711 = 298LL;
	uint32_t t148 = 22U;

    t148 = ((x709*(x710!=x711))-x712);

    if (t148 != 2U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x713 = -1;
	static volatile int16_t x714 = INT16_MIN;
	uint8_t x715 = 3U;
	uint8_t x716 = 9U;

    t149 = ((x713*(x714!=x715))-x716);

    if (t149 != -10) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x717 = 780476369208963LL;
	static uint32_t x718 = UINT32_MAX;
	volatile int8_t x719 = INT8_MAX;
	int16_t x720 = INT16_MIN;
	int64_t t150 = -161467LL;

    t150 = ((x717*(x718!=x719))-x720);

    if (t150 != 780476369241731LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint16_t x721 = UINT16_MAX;
	uint64_t x723 = 509878LLU;
	uint16_t x724 = UINT16_MAX;
	volatile int32_t t151 = -12642556;

    t151 = ((x721*(x722!=x723))-x724);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x726 = 7U;
	static volatile int64_t x727 = 650694630077297LL;
	uint16_t x728 = 2U;
	volatile int32_t t152 = 119672943;

    t152 = ((x725*(x726!=x727))-x728);

    if (t152 != -3) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x729 = -1LL;
	uint32_t x730 = 12U;
	int32_t x732 = -1;
	volatile int64_t t153 = 3681168850681LL;

    t153 = ((x729*(x730!=x731))-x732);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x733 = INT16_MIN;
	volatile uint32_t x734 = UINT32_MAX;
	uint16_t x735 = UINT16_MAX;
	static int16_t x736 = INT16_MIN;

    t154 = ((x733*(x734!=x735))-x736);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x737 = -1;
	int64_t x738 = INT64_MIN;
	int16_t x739 = -7286;
	int8_t x740 = 0;
	int32_t t155 = 3288292;

    t155 = ((x737*(x738!=x739))-x740);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x741 = INT16_MIN;
	volatile int32_t x742 = INT32_MIN;
	int64_t x743 = -1LL;
	int8_t x744 = -8;
	volatile int32_t t156 = -326575066;

    t156 = ((x741*(x742!=x743))-x744);

    if (t156 != -32760) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x745 = INT16_MIN;
	int16_t x747 = INT16_MIN;
	int8_t x748 = 60;
	static volatile int32_t t157 = 0;

    t157 = ((x745*(x746!=x747))-x748);

    if (t157 != -32828) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x749 = 299LLU;
	static int32_t x750 = -1420;
	int64_t x751 = INT64_MIN;
	int32_t x752 = -1;
	uint64_t t158 = 959650885828345035LLU;

    t158 = ((x749*(x750!=x751))-x752);

    if (t158 != 300LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x753 = 10236478895540LLU;
	volatile int64_t x754 = 431171716LL;
	volatile int32_t x755 = 111391335;
	volatile int64_t x756 = -1LL;

    t159 = ((x753*(x754!=x755))-x756);

    if (t159 != 10236478895541LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x765 = -50;
	int32_t x766 = INT32_MAX;
	int32_t x767 = INT32_MIN;
	volatile int16_t x768 = INT16_MIN;
	volatile int32_t t160 = -64318153;

    t160 = ((x765*(x766!=x767))-x768);

    if (t160 != 32718) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x769 = 774602LL;
	int16_t x770 = -1;
	static uint32_t x771 = 48653U;
	int64_t t161 = -6LL;

    t161 = ((x769*(x770!=x771))-x772);

    if (t161 != 773931LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x773 = 12498U;
	int16_t x775 = INT16_MAX;
	int16_t x776 = -24;
	int32_t t162 = 596491902;

    t162 = ((x773*(x774!=x775))-x776);

    if (t162 != 12522) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x777 = INT16_MIN;
	int8_t x778 = INT8_MIN;
	int8_t x779 = INT8_MIN;
	uint16_t x780 = 24U;
	volatile int32_t t163 = 13;

    t163 = ((x777*(x778!=x779))-x780);

    if (t163 != -24) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x781 = INT16_MIN;
	volatile int64_t x783 = -1LL;
	int16_t x784 = -1;
	int32_t t164 = -412;

    t164 = ((x781*(x782!=x783))-x784);

    if (t164 != -32767) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x785 = UINT32_MAX;
	volatile int32_t x786 = INT32_MIN;
	static uint32_t x787 = UINT32_MAX;
	static volatile int32_t x788 = 1764;
	uint32_t t165 = 31367U;

    t165 = ((x785*(x786!=x787))-x788);

    if (t165 != 4294965531U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x789 = 422559717LL;
	int64_t x790 = -364122000024807LL;
	static volatile uint32_t x791 = UINT32_MAX;
	int32_t x792 = -74;
	volatile int64_t t166 = -3812453987152LL;

    t166 = ((x789*(x790!=x791))-x792);

    if (t166 != 422559791LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x793 = INT16_MAX;
	int32_t x794 = 472;
	int8_t x796 = -22;
	volatile int32_t t167 = 352;

    t167 = ((x793*(x794!=x795))-x796);

    if (t167 != 32789) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x801 = 112980677543139LLU;
	int32_t x802 = INT32_MIN;
	uint32_t x803 = 8173007U;
	int8_t x804 = 1;

    t168 = ((x801*(x802!=x803))-x804);

    if (t168 != 112980677543138LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x805 = 338;
	int8_t x806 = INT8_MIN;
	static int8_t x807 = -1;
	uint64_t t169 = 1432LLU;

    t169 = ((x805*(x806!=x807))-x808);

    if (t169 != 18446716784798947018LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x812 = 2472;

    t170 = ((x809*(x810!=x811))-x812);

    if (t170 != 55275LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x814 = -8014;
	int8_t x816 = 3;
	int32_t t171 = -34;

    t171 = ((x813*(x814!=x815))-x816);

    if (t171 != 124) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x817 = INT8_MIN;
	int16_t x818 = INT16_MIN;
	int64_t x820 = INT64_MIN;
	volatile int64_t t172 = 20392694LL;

    t172 = ((x817*(x818!=x819))-x820);

    if (t172 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int32_t x821 = INT32_MAX;
	uint8_t x822 = UINT8_MAX;
	uint32_t x823 = 2421U;

    t173 = ((x821*(x822!=x823))-x824);

    if (t173 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x826 = INT16_MAX;
	uint16_t x827 = 108U;
	uint8_t x828 = 11U;

    t174 = ((x825*(x826!=x827))-x828);

    if (t174 != 313721U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x829 = INT8_MIN;
	int16_t x830 = INT16_MIN;
	int16_t x832 = INT16_MAX;
	int32_t t175 = 82622;

    t175 = ((x829*(x830!=x831))-x832);

    if (t175 != -32895) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x833 = -1;
	int8_t x834 = -1;
	static int64_t x835 = INT64_MIN;
	static int32_t t176 = 195410149;

    t176 = ((x833*(x834!=x835))-x836);

    if (t176 != -256) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x837 = -1056948971559LL;
	volatile uint32_t x838 = 85025U;
	uint32_t x839 = UINT32_MAX;
	volatile int64_t t177 = -145LL;

    t177 = ((x837*(x838!=x839))-x840);

    if (t177 != -1056948971558LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x841 = INT64_MIN;
	volatile int16_t x842 = 1;
	volatile int64_t x843 = INT64_MAX;
	static int8_t x844 = -1;
	volatile int64_t t178 = -2499681557168LL;

    t178 = ((x841*(x842!=x843))-x844);

    if (t178 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x845 = INT32_MIN;
	uint64_t x846 = 1838962923968LLU;
	static volatile uint32_t x848 = UINT32_MAX;
	static uint32_t t179 = 1140640254U;

    t179 = ((x845*(x846!=x847))-x848);

    if (t179 != 2147483649U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x849 = -3738993942LL;
	static int32_t x850 = INT32_MIN;
	uint8_t x851 = 1U;
	int8_t x852 = INT8_MAX;
	volatile int64_t t180 = 1642977LL;

    t180 = ((x849*(x850!=x851))-x852);

    if (t180 != -3738994069LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x853 = -1;
	int32_t x854 = 310365160;

    t181 = ((x853*(x854!=x855))-x856);

    if (t181 != INT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x858 = -1LL;
	uint8_t x859 = 7U;
	uint16_t x860 = UINT16_MAX;
	volatile uint32_t t182 = 5U;

    t182 = ((x857*(x858!=x859))-x860);

    if (t182 != 4294901760U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x861 = -140;
	static uint32_t x862 = 2887062U;
	int8_t x863 = -7;
	int32_t x864 = 18;
	volatile int32_t t183 = -164;

    t183 = ((x861*(x862!=x863))-x864);

    if (t183 != -158) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x865 = 2U;
	int64_t x866 = -6585LL;
	int8_t x867 = INT8_MIN;
	int64_t t184 = -4738520398LL;

    t184 = ((x865*(x866!=x867))-x868);

    if (t184 != 353040704LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x870 = 14U;
	int32_t x872 = INT32_MIN;
	int32_t t185 = 25448;

    t185 = ((x869*(x870!=x871))-x872);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x877 = -1;
	volatile int8_t x878 = INT8_MIN;
	volatile int64_t x879 = INT64_MIN;
	static int16_t x880 = -1;
	int32_t t186 = 0;

    t186 = ((x877*(x878!=x879))-x880);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x881 = 3567;
	uint8_t x882 = UINT8_MAX;
	static int8_t x884 = INT8_MIN;
	int32_t t187 = 2089737;

    t187 = ((x881*(x882!=x883))-x884);

    if (t187 != 3695) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x885 = INT8_MAX;
	int64_t x886 = INT64_MIN;
	int16_t x887 = INT16_MIN;
	volatile int32_t x888 = -130204;
	volatile int32_t t188 = -86;

    t188 = ((x885*(x886!=x887))-x888);

    if (t188 != 130331) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x889 = INT32_MIN;
	int32_t x890 = INT32_MIN;
	volatile int32_t t189 = 11;

    t189 = ((x889*(x890!=x891))-x892);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x894 = INT8_MIN;
	int64_t x896 = -1LL;

    t190 = ((x893*(x894!=x895))-x896);

    if (t190 != -208LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x901 = UINT64_MAX;
	static uint32_t x903 = 317729U;
	volatile uint64_t t191 = 732842119822LLU;

    t191 = ((x901*(x902!=x903))-x904);

    if (t191 != 18446744073709551376LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x905 = UINT32_MAX;
	int64_t x906 = INT64_MIN;
	int32_t x907 = INT32_MIN;
	uint32_t t192 = 2012050U;

    t192 = ((x905*(x906!=x907))-x908);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x910 = 0U;
	static volatile uint16_t x911 = UINT16_MAX;
	int8_t x912 = INT8_MIN;

    t193 = ((x909*(x910!=x911))-x912);

    if (t193 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x913 = 9785244U;
	uint64_t x915 = UINT64_MAX;
	uint32_t t194 = 7357U;

    t194 = ((x913*(x914!=x915))-x916);

    if (t194 != 9785117U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x917 = UINT64_MAX;
	int16_t x918 = INT16_MIN;
	int32_t x919 = -103668;
	volatile uint64_t t195 = 3LLU;

    t195 = ((x917*(x918!=x919))-x920);

    if (t195 != 18446744073709437135LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x921 = 1826U;
	volatile int8_t x923 = INT8_MIN;
	static int16_t x924 = 583;
	static volatile int32_t t196 = -68;

    t196 = ((x921*(x922!=x923))-x924);

    if (t196 != 1243) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x925 = UINT16_MAX;
	int64_t x926 = INT64_MIN;
	int16_t x928 = -38;
	int32_t t197 = -230440;

    t197 = ((x925*(x926!=x927))-x928);

    if (t197 != 65573) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x939 = INT32_MAX;
	int16_t x940 = -1;
	volatile uint32_t t198 = 1U;

    t198 = ((x937*(x938!=x939))-x940);

    if (t198 != 1801U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x941 = UINT8_MAX;
	volatile uint16_t x942 = 1U;
	static uint32_t x943 = 6268293U;
	volatile int16_t x944 = INT16_MAX;

    t199 = ((x941*(x942!=x943))-x944);

    if (t199 != -32512) { NG(); } else { ; }
	
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

