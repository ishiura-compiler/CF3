
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

int8_t x8 = -1;
int64_t x15 = 192LL;
int32_t t3 = -1525;
volatile uint16_t x19 = 113U;
volatile int32_t t4 = -41553;
static int32_t x22 = INT32_MIN;
static int64_t x27 = INT64_MIN;
int8_t x28 = 13;
uint8_t x35 = UINT8_MAX;
int16_t x36 = INT16_MAX;
volatile int32_t t11 = -11;
uint16_t x53 = 95U;
int64_t x54 = -1LL;
int8_t x67 = INT8_MAX;
int16_t x79 = -1593;
uint64_t x85 = 28LLU;
int32_t t20 = 26044;
int8_t x95 = INT8_MIN;
volatile int64_t x102 = INT64_MIN;
volatile uint32_t x103 = UINT32_MAX;
uint8_t x104 = 1U;
int32_t t24 = 3322994;
int32_t t25 = 0;
int64_t x110 = INT64_MIN;
int32_t x114 = -22652;
int8_t x120 = -4;
static uint8_t x133 = 3U;
uint32_t x135 = 1541U;
int8_t x136 = INT8_MAX;
uint32_t x140 = 134U;
int32_t x142 = INT32_MAX;
uint16_t x149 = 1812U;
int16_t x152 = -1;
int32_t t37 = 3;
int32_t x159 = -71;
uint64_t x161 = 277227317923945426LLU;
int32_t x164 = -267387;
int16_t x169 = INT16_MIN;
int8_t x173 = -1;
int8_t x174 = INT8_MIN;
uint8_t x185 = UINT8_MAX;
int8_t x189 = 5;
static uint64_t x195 = 937502384394499338LLU;
volatile int32_t t49 = 68;
int64_t x209 = INT64_MAX;
uint8_t x213 = UINT8_MAX;
static int32_t t53 = 1;
int32_t x231 = INT32_MIN;
volatile int64_t x235 = INT64_MIN;
uint8_t x238 = 14U;
int64_t x239 = -1LL;
volatile uint32_t x242 = 15U;
static volatile uint64_t x247 = UINT64_MAX;
volatile int32_t x249 = -842882007;
volatile int64_t x251 = INT64_MIN;
static uint32_t x253 = 38809U;
static int64_t x259 = 10761596095LL;
volatile int32_t t65 = -3;
uint32_t x273 = 0U;
uint32_t x283 = 6299415U;
static volatile int32_t t69 = 1;
int32_t x293 = INT32_MAX;
int32_t x302 = INT32_MIN;
volatile int32_t t72 = 73884;
volatile int16_t x306 = -1;
static int64_t x307 = -1LL;
volatile int32_t t73 = 176457;
static uint16_t x313 = UINT16_MAX;
int8_t x314 = -1;
int16_t x323 = -1;
volatile int32_t t78 = 903957759;
static volatile int8_t x330 = INT8_MIN;
volatile int32_t x332 = -1;
int32_t t79 = -48;
static volatile uint8_t x346 = UINT8_MAX;
static uint16_t x352 = 12U;
int8_t x353 = 26;
static volatile int64_t x355 = -2700095725019LL;
int64_t x358 = 1LL;
int32_t x359 = -1;
volatile int32_t t88 = -147;
uint16_t x369 = 8U;
volatile int8_t x371 = 14;
int16_t x374 = 0;
int32_t x375 = 124;
int32_t t90 = 16104;
int16_t x380 = INT16_MIN;
static int32_t x381 = -1;
int32_t x397 = INT32_MIN;
uint32_t x399 = 36160154U;
uint32_t x403 = 732723719U;
int32_t t97 = 2074235;
volatile int8_t x405 = INT8_MAX;
int32_t t98 = 383982;
uint16_t x412 = 746U;
static uint16_t x414 = 19127U;
volatile int64_t x416 = INT64_MIN;
uint16_t x418 = 0U;
int64_t x419 = 236250170345437LL;
int32_t x421 = INT32_MIN;
int32_t t102 = -1049;
int16_t x436 = INT16_MIN;
int64_t x439 = 12086LL;
int8_t x442 = INT8_MIN;
int16_t x444 = -31;
int64_t x446 = INT64_MIN;
static volatile int32_t t108 = 4721;
static volatile uint16_t x450 = 16053U;
int8_t x451 = INT8_MIN;
static int32_t t109 = 927367128;
static uint16_t x458 = 1192U;
int8_t x464 = INT8_MAX;
static uint16_t x466 = 7U;
volatile int32_t t113 = -5928863;
volatile int32_t t115 = 30685206;
volatile int32_t t116 = 114;
int32_t t117 = 476;
uint8_t x486 = 1U;
volatile int32_t t118 = 105494;
int32_t t119 = 7204574;
int8_t x501 = -1;
volatile int16_t x505 = -1;
static uint8_t x512 = UINT8_MAX;
int8_t x515 = 3;
uint16_t x519 = UINT16_MAX;
static int8_t x524 = -11;
int16_t x527 = -6;
int32_t t127 = -106968083;
int32_t t129 = 2071;
static int8_t x538 = INT8_MIN;
uint64_t x540 = 863820326324005LLU;
int8_t x541 = INT8_MIN;
int16_t x544 = INT16_MAX;
int32_t x549 = -1;
static uint16_t x552 = 0U;
int32_t t133 = 16354460;
uint32_t x557 = 28U;
static int32_t t135 = -56670015;
static uint32_t x566 = UINT32_MAX;
int8_t x570 = INT8_MIN;
volatile uint8_t x571 = 48U;
static int8_t x575 = INT8_MIN;
static uint8_t x580 = 12U;
int32_t x583 = INT32_MIN;
volatile int32_t t142 = -927307;
static int32_t t143 = -1268;
int8_t x601 = INT8_MIN;
int32_t t146 = -442;
int16_t x610 = -2362;
volatile int32_t t147 = 15238;
static volatile int32_t t148 = 235877;
static int64_t x617 = 53531238345380LL;
static int16_t x618 = -15;
int32_t x631 = -1;
volatile int32_t t152 = -438262;
static int16_t x636 = INT16_MIN;
int32_t x640 = INT32_MAX;
volatile int32_t t154 = -1;
int16_t x647 = INT16_MIN;
uint16_t x655 = 3U;
volatile uint16_t x669 = 2U;
int32_t t162 = -1;
static volatile int32_t t164 = -4836;
volatile int32_t t165 = -9;
int64_t x691 = INT64_MIN;
uint32_t x701 = 1978943994U;
int8_t x703 = 1;
int32_t x714 = INT32_MIN;
int16_t x715 = -1;
static int8_t x717 = INT8_MIN;
int8_t x723 = -39;
int32_t x724 = INT32_MAX;
volatile int32_t t174 = 49;
uint32_t x725 = 1U;
static int8_t x726 = INT8_MAX;
volatile int32_t t176 = 224;
uint64_t x740 = UINT64_MAX;
int16_t x741 = INT16_MAX;
volatile int32_t t178 = 3;
uint64_t x745 = 8484611989473555226LLU;
volatile int64_t x748 = INT64_MIN;
static volatile int32_t x754 = INT32_MAX;
uint16_t x757 = 6U;
int16_t x758 = INT16_MIN;
int16_t x760 = INT16_MAX;
int64_t x763 = INT64_MIN;
int8_t x765 = -1;
int32_t x768 = -2568;
int64_t x770 = -1LL;
int32_t t186 = 14752;
int64_t x782 = -183611941LL;
uint32_t x784 = 22958U;
int32_t x788 = -1;
volatile int32_t t188 = -40;
uint32_t x791 = 1358U;
static int64_t x792 = INT64_MAX;
int64_t x803 = -221957557769LL;
int16_t x805 = INT16_MIN;
static int32_t t195 = 6656383;
int16_t x820 = -1;
int32_t x822 = 283;
static int32_t t197 = 1;
volatile int64_t x826 = -55846458034499LL;
static int8_t x830 = INT8_MIN;
int16_t x832 = -1;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	uint8_t x2 = UINT8_MAX;
	uint8_t x3 = 1U;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = 310066;

    t0 = ((x1-(x2>x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int32_t x6 = INT32_MAX;
	static uint64_t x7 = 2434570121618LLU;
	static volatile int32_t t1 = -192463234;

    t1 = ((x5-(x6>x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = 17607029872LLU;
	uint8_t x10 = 48U;
	int16_t x11 = -2;
	volatile int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 6889318;

    t2 = ((x9-(x10>x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	uint8_t x14 = 14U;
	int64_t x16 = INT64_MAX;

    t3 = ((x13-(x14>x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = 986LLU;
	int32_t x18 = INT32_MIN;
	int32_t x20 = 28;

    t4 = ((x17-(x18>x19))>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 22U;
	uint64_t x23 = 805386861849LLU;
	uint32_t x24 = UINT32_MAX;
	volatile int32_t t5 = -11431582;

    t5 = ((x21-(x22>x23))>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = -1;
	int16_t x26 = 9669;
	volatile int32_t t6 = 99720052;

    t6 = ((x25-(x26>x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	volatile uint8_t x30 = UINT8_MAX;
	volatile uint8_t x31 = 13U;
	uint16_t x32 = 165U;
	static volatile int32_t t7 = 7;

    t7 = ((x29-(x30>x31))>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	uint16_t x34 = UINT16_MAX;
	int32_t t8 = 13;

    t8 = ((x33-(x34>x35))>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = 5;
	int64_t x38 = INT64_MIN;
	uint16_t x39 = 5U;
	volatile int16_t x40 = -1;
	int32_t t9 = -1;

    t9 = ((x37-(x38>x39))>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = INT8_MAX;
	uint32_t x42 = 7U;
	int16_t x43 = INT16_MIN;
	static volatile uint8_t x44 = 2U;
	static volatile int32_t t10 = 4;

    t10 = ((x41-(x42>x43))>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = -1LL;
	int64_t x46 = -1LL;
	uint32_t x47 = 1952078U;
	int16_t x48 = 326;

    t11 = ((x45-(x46>x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x55 = UINT64_MAX;
	int32_t x56 = 834606467;
	volatile int32_t t12 = 9;

    t12 = ((x53-(x54>x55))>x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x57 = INT32_MAX;
	uint32_t x58 = 1414488700U;
	static uint32_t x59 = 466458U;
	volatile int16_t x60 = INT16_MAX;
	int32_t t13 = 3863118;

    t13 = ((x57-(x58>x59))>x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = -257925093;
	int32_t x62 = INT32_MIN;
	int8_t x63 = INT8_MAX;
	int16_t x64 = -282;
	static volatile int32_t t14 = -54743733;

    t14 = ((x61-(x62>x63))>x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = 6;
	int16_t x66 = -6;
	int16_t x68 = INT16_MIN;
	static int32_t t15 = 361;

    t15 = ((x65-(x66>x67))>x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = 3270;
	volatile int16_t x70 = -8;
	int16_t x71 = -3;
	int16_t x72 = INT16_MAX;
	static volatile int32_t t16 = 1024379075;

    t16 = ((x69-(x70>x71))>x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x73 = 1;
	int32_t x74 = INT32_MIN;
	static uint16_t x75 = 0U;
	static volatile int8_t x76 = 13;
	volatile int32_t t17 = 177350;

    t17 = ((x73-(x74>x75))>x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int8_t x77 = INT8_MAX;
	volatile int32_t x78 = INT32_MIN;
	int32_t x80 = INT32_MIN;
	int32_t t18 = 1;

    t18 = ((x77-(x78>x79))>x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x81 = 281035U;
	int16_t x82 = INT16_MAX;
	static int32_t x83 = -1;
	uint32_t x84 = 8783U;
	volatile int32_t t19 = -10670444;

    t19 = ((x81-(x82>x83))>x84);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x86 = UINT16_MAX;
	uint64_t x87 = UINT64_MAX;
	int16_t x88 = -1;

    t20 = ((x85-(x86>x87))>x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MAX;
	int32_t x90 = -1;
	uint16_t x91 = 22162U;
	static uint64_t x92 = 165592501645008LLU;
	int32_t t21 = -433784;

    t21 = ((x89-(x90>x91))>x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = INT32_MIN;
	volatile int32_t x94 = INT32_MIN;
	int64_t x96 = INT64_MAX;
	volatile int32_t t22 = 10501;

    t22 = ((x93-(x94>x95))>x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x97 = INT16_MIN;
	static uint64_t x98 = UINT64_MAX;
	uint32_t x99 = 35537699U;
	volatile int16_t x100 = INT16_MIN;
	int32_t t23 = -59;

    t23 = ((x97-(x98>x99))>x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x101 = 18897LLU;

    t24 = ((x101-(x102>x103))>x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x105 = UINT64_MAX;
	static int32_t x106 = 8865;
	int64_t x107 = -1043845823606112LL;
	volatile int64_t x108 = -468748674466428639LL;

    t25 = ((x105-(x106>x107))>x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x109 = INT8_MIN;
	uint8_t x111 = 1U;
	int8_t x112 = INT8_MIN;
	volatile int32_t t26 = 1;

    t26 = ((x109-(x110>x111))>x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = INT32_MAX;
	uint64_t x115 = UINT64_MAX;
	volatile int8_t x116 = 0;
	volatile int32_t t27 = -188;

    t27 = ((x113-(x114>x115))>x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x117 = 1112197U;
	uint32_t x118 = 0U;
	int32_t x119 = 918443;
	volatile int32_t t28 = -512945264;

    t28 = ((x117-(x118>x119))>x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = INT64_MAX;
	int16_t x122 = INT16_MAX;
	uint32_t x123 = 12U;
	int64_t x124 = INT64_MAX;
	volatile int32_t t29 = 1;

    t29 = ((x121-(x122>x123))>x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x125 = 29960707293068LLU;
	static int64_t x126 = 708510LL;
	volatile int64_t x127 = 4LL;
	int64_t x128 = INT64_MIN;
	volatile int32_t t30 = -2965;

    t30 = ((x125-(x126>x127))>x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = 6;
	int16_t x130 = -1254;
	int8_t x131 = INT8_MAX;
	uint32_t x132 = UINT32_MAX;
	volatile int32_t t31 = 20767249;

    t31 = ((x129-(x130>x131))>x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x134 = INT8_MIN;
	volatile int32_t t32 = -29;

    t32 = ((x133-(x134>x135))>x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = INT16_MAX;
	int32_t x138 = -27236513;
	uint8_t x139 = 45U;
	volatile int32_t t33 = -5503;

    t33 = ((x137-(x138>x139))>x140);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x141 = 124U;
	int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MIN;
	volatile int32_t t34 = -21115;

    t34 = ((x141-(x142>x143))>x144);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = -3;
	int64_t x146 = 0LL;
	int16_t x147 = 1;
	int8_t x148 = -62;
	int32_t t35 = 85;

    t35 = ((x145-(x146>x147))>x148);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x150 = -1;
	static volatile int64_t x151 = INT64_MIN;
	static int32_t t36 = 22088;

    t36 = ((x149-(x150>x151))>x152);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x153 = UINT16_MAX;
	int64_t x154 = -1LL;
	int16_t x155 = -1;
	int32_t x156 = -1;

    t37 = ((x153-(x154>x155))>x156);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x157 = 82U;
	int64_t x158 = -2453181730739413LL;
	static uint64_t x160 = 248736LLU;
	static volatile int32_t t38 = 1220279;

    t38 = ((x157-(x158>x159))>x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x162 = 18343U;
	int8_t x163 = 59;
	volatile int32_t t39 = -25;

    t39 = ((x161-(x162>x163))>x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = INT16_MIN;
	int32_t x166 = INT32_MAX;
	static int32_t x167 = 3575;
	int8_t x168 = INT8_MIN;
	int32_t t40 = -164452;

    t40 = ((x165-(x166>x167))>x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x170 = UINT16_MAX;
	uint32_t x171 = 2073619U;
	int8_t x172 = INT8_MIN;
	volatile int32_t t41 = -13;

    t41 = ((x169-(x170>x171))>x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x175 = UINT16_MAX;
	static int8_t x176 = INT8_MAX;
	volatile int32_t t42 = 285;

    t42 = ((x173-(x174>x175))>x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x177 = -1LL;
	uint8_t x178 = UINT8_MAX;
	volatile int64_t x179 = INT64_MIN;
	static volatile int8_t x180 = INT8_MIN;
	volatile int32_t t43 = 93132020;

    t43 = ((x177-(x178>x179))>x180);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x181 = INT64_MIN;
	volatile uint16_t x182 = 0U;
	static int64_t x183 = 0LL;
	volatile uint32_t x184 = 2954798U;
	static volatile int32_t t44 = -553485;

    t44 = ((x181-(x182>x183))>x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x186 = 0U;
	int16_t x187 = INT16_MIN;
	volatile int32_t x188 = 1546;
	static int32_t t45 = -278705;

    t45 = ((x185-(x186>x187))>x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x190 = UINT8_MAX;
	int8_t x191 = INT8_MAX;
	static uint16_t x192 = 275U;
	static volatile int32_t t46 = -313941529;

    t46 = ((x189-(x190>x191))>x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x193 = 409U;
	static int32_t x194 = -1;
	static int64_t x196 = INT64_MIN;
	static int32_t t47 = -70;

    t47 = ((x193-(x194>x195))>x196);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = -1;
	int64_t x198 = INT64_MAX;
	volatile uint8_t x199 = 2U;
	int16_t x200 = INT16_MAX;
	volatile int32_t t48 = 3930;

    t48 = ((x197-(x198>x199))>x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x201 = 697U;
	int32_t x202 = 3878;
	volatile int16_t x203 = -1;
	uint8_t x204 = 0U;

    t49 = ((x201-(x202>x203))>x204);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x210 = 2U;
	uint16_t x211 = 6374U;
	static volatile int32_t x212 = -27;
	int32_t t50 = -29;

    t50 = ((x209-(x210>x211))>x212);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x214 = 21140466;
	volatile uint32_t x215 = 1U;
	int32_t x216 = -1;
	volatile int32_t t51 = 29;

    t51 = ((x213-(x214>x215))>x216);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x217 = UINT32_MAX;
	uint32_t x218 = UINT32_MAX;
	uint16_t x219 = 29276U;
	int16_t x220 = -1;
	int32_t t52 = 3;

    t52 = ((x217-(x218>x219))>x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x221 = 6535279U;
	int16_t x222 = 195;
	volatile uint64_t x223 = 649253LLU;
	volatile uint16_t x224 = UINT16_MAX;

    t53 = ((x221-(x222>x223))>x224);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x225 = 88503819U;
	static uint64_t x226 = UINT64_MAX;
	uint64_t x227 = 469633875610817LLU;
	static int8_t x228 = INT8_MIN;
	static volatile int32_t t54 = 4672158;

    t54 = ((x225-(x226>x227))>x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x229 = INT8_MIN;
	int8_t x230 = INT8_MAX;
	int16_t x232 = INT16_MAX;
	int32_t t55 = 1476807;

    t55 = ((x229-(x230>x231))>x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x233 = INT8_MIN;
	volatile int64_t x234 = -1LL;
	uint64_t x236 = 581955076600LLU;
	int32_t t56 = 869999;

    t56 = ((x233-(x234>x235))>x236);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x237 = 533940677LL;
	int16_t x240 = INT16_MAX;
	volatile int32_t t57 = -1;

    t57 = ((x237-(x238>x239))>x240);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x241 = -6LL;
	static int8_t x243 = INT8_MIN;
	int16_t x244 = INT16_MIN;
	int32_t t58 = -1987721;

    t58 = ((x241-(x242>x243))>x244);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x245 = UINT16_MAX;
	static int64_t x246 = INT64_MAX;
	uint8_t x248 = 6U;
	static volatile int32_t t59 = 1099022;

    t59 = ((x245-(x246>x247))>x248);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x250 = -213211025268374LL;
	int8_t x252 = INT8_MAX;
	volatile int32_t t60 = 14;

    t60 = ((x249-(x250>x251))>x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x254 = -5;
	volatile int32_t x255 = INT32_MIN;
	volatile int8_t x256 = -1;
	int32_t t61 = 1603578;

    t61 = ((x253-(x254>x255))>x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x257 = 6LLU;
	volatile int8_t x258 = 0;
	uint64_t x260 = UINT64_MAX;
	volatile int32_t t62 = -747612199;

    t62 = ((x257-(x258>x259))>x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x261 = -1;
	volatile int16_t x262 = INT16_MAX;
	volatile int8_t x263 = -1;
	int32_t x264 = -965930198;
	int32_t t63 = -1796;

    t63 = ((x261-(x262>x263))>x264);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x265 = -1;
	int64_t x266 = -34223LL;
	uint8_t x267 = 52U;
	int16_t x268 = INT16_MIN;
	volatile int32_t t64 = -237796927;

    t64 = ((x265-(x266>x267))>x268);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x269 = INT8_MIN;
	uint64_t x270 = 5216746LLU;
	static int32_t x271 = -3710319;
	volatile uint8_t x272 = 16U;

    t65 = ((x269-(x270>x271))>x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x274 = UINT8_MAX;
	uint32_t x275 = 0U;
	uint8_t x276 = 35U;
	int32_t t66 = -92;

    t66 = ((x273-(x274>x275))>x276);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x277 = -1;
	static uint32_t x278 = UINT32_MAX;
	int8_t x279 = 14;
	int64_t x280 = 24313LL;
	volatile int32_t t67 = 2491708;

    t67 = ((x277-(x278>x279))>x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x281 = -16;
	int16_t x282 = INT16_MAX;
	int16_t x284 = 1;
	volatile int32_t t68 = -36248427;

    t68 = ((x281-(x282>x283))>x284);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x289 = 102U;
	uint64_t x290 = 229943LLU;
	int32_t x291 = INT32_MAX;
	volatile int16_t x292 = -1;

    t69 = ((x289-(x290>x291))>x292);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x294 = -1;
	uint16_t x295 = 950U;
	volatile uint16_t x296 = 561U;
	int32_t t70 = -317;

    t70 = ((x293-(x294>x295))>x296);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x297 = -15637;
	uint64_t x298 = 85552867089601LLU;
	int16_t x299 = -1;
	volatile int32_t x300 = -1;
	volatile int32_t t71 = 472452843;

    t71 = ((x297-(x298>x299))>x300);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x301 = INT64_MAX;
	int8_t x303 = INT8_MAX;
	int8_t x304 = -1;

    t72 = ((x301-(x302>x303))>x304);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x305 = INT8_MIN;
	int8_t x308 = INT8_MAX;

    t73 = ((x305-(x306>x307))>x308);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x309 = -1;
	static uint8_t x310 = UINT8_MAX;
	int16_t x311 = INT16_MAX;
	int64_t x312 = INT64_MIN;
	int32_t t74 = -78804836;

    t74 = ((x309-(x310>x311))>x312);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x315 = 103U;
	volatile int8_t x316 = INT8_MIN;
	int32_t t75 = 188612139;

    t75 = ((x313-(x314>x315))>x316);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x317 = 6456U;
	uint8_t x318 = 1U;
	int32_t x319 = -1;
	int16_t x320 = 1338;
	volatile int32_t t76 = -853;

    t76 = ((x317-(x318>x319))>x320);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MAX;
	uint32_t x324 = 29U;
	volatile int32_t t77 = -1901;

    t77 = ((x321-(x322>x323))>x324);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x325 = 219U;
	static volatile uint8_t x326 = 60U;
	int16_t x327 = INT16_MIN;
	int8_t x328 = -1;

    t78 = ((x325-(x326>x327))>x328);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x329 = UINT64_MAX;
	int64_t x331 = -201998337358LL;

    t79 = ((x329-(x330>x331))>x332);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x333 = 19364LL;
	uint8_t x334 = UINT8_MAX;
	static int64_t x335 = INT64_MAX;
	volatile uint16_t x336 = 1333U;
	int32_t t80 = -1;

    t80 = ((x333-(x334>x335))>x336);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x337 = INT16_MIN;
	int32_t x338 = -1;
	int8_t x339 = 23;
	int8_t x340 = -1;
	volatile int32_t t81 = 2;

    t81 = ((x337-(x338>x339))>x340);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x341 = -5181988976LL;
	int16_t x342 = 229;
	volatile int32_t x343 = INT32_MIN;
	static volatile uint8_t x344 = 109U;
	volatile int32_t t82 = 0;

    t82 = ((x341-(x342>x343))>x344);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x345 = 22442172LL;
	uint64_t x347 = 62819LLU;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t83 = 9649;

    t83 = ((x345-(x346>x347))>x348);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x349 = 904U;
	int8_t x350 = -1;
	static uint32_t x351 = 2366229U;
	static volatile int32_t t84 = -325466240;

    t84 = ((x349-(x350>x351))>x352);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x354 = -1LL;
	int64_t x356 = -1LL;
	int32_t t85 = -300462083;

    t85 = ((x353-(x354>x355))>x356);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x357 = 25929284U;
	int32_t x360 = INT32_MIN;
	int32_t t86 = 234472962;

    t86 = ((x357-(x358>x359))>x360);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x361 = INT32_MIN;
	uint32_t x362 = UINT32_MAX;
	int32_t x363 = -1;
	static int16_t x364 = -48;
	volatile int32_t t87 = 8737;

    t87 = ((x361-(x362>x363))>x364);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x365 = -1;
	uint32_t x366 = 3U;
	int64_t x367 = -1LL;
	int8_t x368 = 1;

    t88 = ((x365-(x366>x367))>x368);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x370 = 6U;
	volatile int16_t x372 = -1;
	static volatile int32_t t89 = 233476822;

    t89 = ((x369-(x370>x371))>x372);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x373 = INT32_MIN;
	int16_t x376 = INT16_MIN;

    t90 = ((x373-(x374>x375))>x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x377 = INT32_MIN;
	uint32_t x378 = 5U;
	int64_t x379 = 8LL;
	static volatile int32_t t91 = 0;

    t91 = ((x377-(x378>x379))>x380);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x382 = 13259166;
	uint8_t x383 = 0U;
	static uint16_t x384 = UINT16_MAX;
	int32_t t92 = -45109;

    t92 = ((x381-(x382>x383))>x384);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x385 = UINT8_MAX;
	int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	int32_t x388 = -5;
	volatile int32_t t93 = -1071676;

    t93 = ((x385-(x386>x387))>x388);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x389 = 4;
	static int16_t x390 = INT16_MIN;
	uint8_t x391 = UINT8_MAX;
	static volatile int8_t x392 = -1;
	volatile int32_t t94 = -50183072;

    t94 = ((x389-(x390>x391))>x392);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x393 = UINT8_MAX;
	volatile uint16_t x394 = 61U;
	int16_t x395 = 0;
	uint8_t x396 = 19U;
	volatile int32_t t95 = 1588;

    t95 = ((x393-(x394>x395))>x396);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x398 = 1;
	static uint8_t x400 = 85U;
	static int32_t t96 = 62;

    t96 = ((x397-(x398>x399))>x400);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x401 = INT32_MIN;
	int16_t x402 = 15;
	int8_t x404 = 63;

    t97 = ((x401-(x402>x403))>x404);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x406 = INT64_MAX;
	volatile uint16_t x407 = 3U;
	int16_t x408 = 3;

    t98 = ((x405-(x406>x407))>x408);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x409 = INT32_MAX;
	int64_t x410 = INT64_MIN;
	volatile int32_t x411 = INT32_MIN;
	volatile int32_t t99 = -1011;

    t99 = ((x409-(x410>x411))>x412);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x413 = 26133U;
	volatile uint16_t x415 = 31U;
	static int32_t t100 = 7152539;

    t100 = ((x413-(x414>x415))>x416);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x417 = 80785779;
	static int32_t x420 = -28615;
	volatile int32_t t101 = 57;

    t101 = ((x417-(x418>x419))>x420);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x422 = INT16_MAX;
	int32_t x423 = INT32_MAX;
	int64_t x424 = INT64_MIN;

    t102 = ((x421-(x422>x423))>x424);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x425 = -1LL;
	int32_t x426 = INT32_MAX;
	int32_t x427 = -1;
	uint16_t x428 = 1U;
	volatile int32_t t103 = -54581;

    t103 = ((x425-(x426>x427))>x428);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x429 = INT8_MAX;
	int32_t x430 = -58;
	int8_t x431 = INT8_MIN;
	int64_t x432 = INT64_MIN;
	static volatile int32_t t104 = 3936785;

    t104 = ((x429-(x430>x431))>x432);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x433 = 612;
	uint32_t x434 = 12U;
	int32_t x435 = -1;
	int32_t t105 = -1812;

    t105 = ((x433-(x434>x435))>x436);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x437 = INT32_MIN;
	int16_t x438 = INT16_MIN;
	int64_t x440 = INT64_MIN;
	volatile int32_t t106 = -22376;

    t106 = ((x437-(x438>x439))>x440);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x441 = -1;
	static uint32_t x443 = UINT32_MAX;
	int32_t t107 = 6598865;

    t107 = ((x441-(x442>x443))>x444);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x445 = INT64_MIN;
	uint16_t x447 = 1867U;
	int64_t x448 = -1LL;

    t108 = ((x445-(x446>x447))>x448);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x449 = 835944U;
	static int16_t x452 = INT16_MIN;

    t109 = ((x449-(x450>x451))>x452);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x453 = -1LL;
	volatile int32_t x454 = INT32_MAX;
	int32_t x455 = 1;
	static int8_t x456 = -1;
	volatile int32_t t110 = 34788853;

    t110 = ((x453-(x454>x455))>x456);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x457 = UINT16_MAX;
	uint64_t x459 = 1245930LLU;
	volatile int8_t x460 = -1;
	int32_t t111 = 1218;

    t111 = ((x457-(x458>x459))>x460);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x461 = INT32_MAX;
	int64_t x462 = INT64_MAX;
	static volatile int32_t x463 = -1;
	static int32_t t112 = 608;

    t112 = ((x461-(x462>x463))>x464);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x465 = 0;
	uint64_t x467 = 12304423LLU;
	volatile int16_t x468 = -1;

    t113 = ((x465-(x466>x467))>x468);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x469 = -1LL;
	uint8_t x470 = 16U;
	int8_t x471 = -1;
	int64_t x472 = -1LL;
	int32_t t114 = -4;

    t114 = ((x469-(x470>x471))>x472);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x473 = UINT64_MAX;
	int64_t x474 = 77529283LL;
	volatile uint32_t x475 = UINT32_MAX;
	uint64_t x476 = UINT64_MAX;

    t115 = ((x473-(x474>x475))>x476);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x477 = 6U;
	int8_t x478 = INT8_MAX;
	int16_t x479 = 5;
	int32_t x480 = 79291573;

    t116 = ((x477-(x478>x479))>x480);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x481 = UINT8_MAX;
	volatile uint64_t x482 = 4964106739381LLU;
	static uint32_t x483 = 322979U;
	uint16_t x484 = UINT16_MAX;

    t117 = ((x481-(x482>x483))>x484);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x485 = 0U;
	static int32_t x487 = INT32_MIN;
	int8_t x488 = INT8_MIN;

    t118 = ((x485-(x486>x487))>x488);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x489 = INT8_MIN;
	int64_t x490 = INT64_MIN;
	uint64_t x491 = 480843765173462LLU;
	uint16_t x492 = UINT16_MAX;

    t119 = ((x489-(x490>x491))>x492);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x497 = 1;
	volatile int32_t x498 = -1;
	volatile uint16_t x499 = UINT16_MAX;
	int8_t x500 = 1;
	volatile int32_t t120 = 224045;

    t120 = ((x497-(x498>x499))>x500);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x502 = INT64_MAX;
	static volatile int8_t x503 = INT8_MIN;
	static volatile int32_t x504 = INT32_MAX;
	static int32_t t121 = 21963;

    t121 = ((x501-(x502>x503))>x504);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x506 = -1LL;
	int8_t x507 = INT8_MAX;
	static int16_t x508 = -1;
	int32_t t122 = -939;

    t122 = ((x505-(x506>x507))>x508);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x509 = -43382030;
	int8_t x510 = 0;
	uint32_t x511 = UINT32_MAX;
	volatile int32_t t123 = 196263736;

    t123 = ((x509-(x510>x511))>x512);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x513 = -1;
	volatile int32_t x514 = 5;
	uint32_t x516 = 458928U;
	static int32_t t124 = -51;

    t124 = ((x513-(x514>x515))>x516);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x517 = INT32_MIN;
	int16_t x518 = -16210;
	uint8_t x520 = 12U;
	static volatile int32_t t125 = 37;

    t125 = ((x517-(x518>x519))>x520);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x521 = 14U;
	int32_t x522 = INT32_MIN;
	int64_t x523 = INT64_MAX;
	volatile int32_t t126 = 662715050;

    t126 = ((x521-(x522>x523))>x524);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x525 = INT8_MAX;
	int32_t x526 = 45;
	volatile int8_t x528 = -26;

    t127 = ((x525-(x526>x527))>x528);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x529 = 4189U;
	static uint32_t x530 = 2626U;
	int64_t x531 = -199860274788592LL;
	uint8_t x532 = 10U;
	volatile int32_t t128 = 1;

    t128 = ((x529-(x530>x531))>x532);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x533 = INT8_MIN;
	int64_t x534 = -1LL;
	int8_t x535 = -1;
	static int32_t x536 = -1;

    t129 = ((x533-(x534>x535))>x536);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x537 = -1;
	int16_t x539 = -1;
	int32_t t130 = -1048899;

    t130 = ((x537-(x538>x539))>x540);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x542 = INT32_MIN;
	static int64_t x543 = -29027134483320374LL;
	volatile int32_t t131 = -35;

    t131 = ((x541-(x542>x543))>x544);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x545 = -454;
	int8_t x546 = -1;
	int64_t x547 = -1LL;
	volatile uint64_t x548 = 51915LLU;
	static int32_t t132 = 48;

    t132 = ((x545-(x546>x547))>x548);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x550 = 10031025833291139LLU;
	static uint32_t x551 = 249U;

    t133 = ((x549-(x550>x551))>x552);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x553 = UINT32_MAX;
	int16_t x554 = INT16_MIN;
	uint8_t x555 = 58U;
	static int8_t x556 = -1;
	int32_t t134 = 224198845;

    t134 = ((x553-(x554>x555))>x556);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x558 = INT64_MIN;
	int32_t x559 = INT32_MIN;
	uint32_t x560 = 22663U;

    t135 = ((x557-(x558>x559))>x560);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x561 = UINT64_MAX;
	static int16_t x562 = INT16_MAX;
	uint16_t x563 = 8U;
	uint64_t x564 = 1195354626LLU;
	int32_t t136 = -15711;

    t136 = ((x561-(x562>x563))>x564);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x565 = INT16_MAX;
	int64_t x567 = -7889934LL;
	int16_t x568 = -17;
	int32_t t137 = -810507171;

    t137 = ((x565-(x566>x567))>x568);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x569 = INT16_MAX;
	uint8_t x572 = UINT8_MAX;
	int32_t t138 = -327734;

    t138 = ((x569-(x570>x571))>x572);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x573 = -5;
	int8_t x574 = INT8_MIN;
	int16_t x576 = 278;
	int32_t t139 = 15;

    t139 = ((x573-(x574>x575))>x576);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x577 = UINT16_MAX;
	static volatile uint32_t x578 = 446U;
	int8_t x579 = INT8_MIN;
	static volatile int32_t t140 = -308;

    t140 = ((x577-(x578>x579))>x580);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x581 = 31U;
	uint32_t x582 = UINT32_MAX;
	static volatile int64_t x584 = -2403423726LL;
	int32_t t141 = 28141;

    t141 = ((x581-(x582>x583))>x584);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x585 = INT16_MAX;
	static volatile int32_t x586 = INT32_MIN;
	uint32_t x587 = 291937664U;
	int64_t x588 = -105035099491270773LL;

    t142 = ((x585-(x586>x587))>x588);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x589 = INT8_MAX;
	int64_t x590 = 2731456LL;
	int8_t x591 = -8;
	static int64_t x592 = -1LL;

    t143 = ((x589-(x590>x591))>x592);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x593 = INT8_MAX;
	int64_t x594 = INT64_MAX;
	int16_t x595 = 111;
	volatile int32_t x596 = INT32_MIN;
	int32_t t144 = -1;

    t144 = ((x593-(x594>x595))>x596);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x597 = UINT64_MAX;
	int64_t x598 = INT64_MIN;
	int64_t x599 = -1LL;
	static int64_t x600 = INT64_MAX;
	static int32_t t145 = -269686;

    t145 = ((x597-(x598>x599))>x600);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x602 = -1;
	uint64_t x603 = 5089835252519599LLU;
	int64_t x604 = INT64_MIN;

    t146 = ((x601-(x602>x603))>x604);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x609 = -1LL;
	volatile int8_t x611 = -3;
	uint16_t x612 = UINT16_MAX;

    t147 = ((x609-(x610>x611))>x612);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x613 = UINT16_MAX;
	int16_t x614 = -1;
	uint64_t x615 = UINT64_MAX;
	int64_t x616 = INT64_MIN;

    t148 = ((x613-(x614>x615))>x616);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x619 = INT64_MIN;
	uint64_t x620 = UINT64_MAX;
	int32_t t149 = -48952357;

    t149 = ((x617-(x618>x619))>x620);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x621 = 29U;
	int32_t x622 = INT32_MIN;
	int32_t x623 = INT32_MAX;
	volatile int64_t x624 = 182968LL;
	volatile int32_t t150 = 23;

    t150 = ((x621-(x622>x623))>x624);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x625 = INT64_MAX;
	static int64_t x626 = INT64_MIN;
	int8_t x627 = INT8_MAX;
	uint32_t x628 = 37572188U;
	int32_t t151 = -1729238;

    t151 = ((x625-(x626>x627))>x628);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int16_t x629 = -1;
	int8_t x630 = 2;
	static int64_t x632 = INT64_MIN;

    t152 = ((x629-(x630>x631))>x632);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x633 = INT16_MIN;
	static int32_t x634 = 779;
	volatile int32_t x635 = INT32_MIN;
	int32_t t153 = -64778;

    t153 = ((x633-(x634>x635))>x636);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x637 = 11529LLU;
	static int64_t x638 = INT64_MAX;
	static int8_t x639 = INT8_MIN;

    t154 = ((x637-(x638>x639))>x640);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x645 = -1;
	volatile uint8_t x646 = 16U;
	volatile int8_t x648 = INT8_MAX;
	volatile int32_t t155 = 58071;

    t155 = ((x645-(x646>x647))>x648);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x649 = -25;
	uint8_t x650 = UINT8_MAX;
	uint16_t x651 = 11726U;
	uint64_t x652 = 27151LLU;
	volatile int32_t t156 = -971;

    t156 = ((x649-(x650>x651))>x652);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x653 = 48U;
	static uint16_t x654 = 5U;
	int16_t x656 = INT16_MIN;
	int32_t t157 = -117262196;

    t157 = ((x653-(x654>x655))>x656);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x657 = UINT64_MAX;
	int64_t x658 = INT64_MIN;
	volatile int8_t x659 = INT8_MAX;
	static int64_t x660 = 420477LL;
	static volatile int32_t t158 = 49;

    t158 = ((x657-(x658>x659))>x660);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x661 = UINT32_MAX;
	volatile uint64_t x662 = 6514859606LLU;
	static int32_t x663 = -30620012;
	int64_t x664 = INT64_MIN;
	volatile int32_t t159 = 26929;

    t159 = ((x661-(x662>x663))>x664);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x665 = 36U;
	uint64_t x666 = 140735LLU;
	volatile int8_t x667 = INT8_MAX;
	int32_t x668 = 225593;
	int32_t t160 = 4659;

    t160 = ((x665-(x666>x667))>x668);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x670 = 253417742LLU;
	int32_t x671 = INT32_MAX;
	int64_t x672 = 7LL;
	volatile int32_t t161 = 336588;

    t161 = ((x669-(x670>x671))>x672);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x673 = -855889152LL;
	int8_t x674 = -1;
	static uint64_t x675 = 200384LLU;
	int16_t x676 = INT16_MIN;

    t162 = ((x673-(x674>x675))>x676);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x677 = INT8_MAX;
	uint64_t x678 = UINT64_MAX;
	uint8_t x679 = UINT8_MAX;
	int16_t x680 = -1;
	int32_t t163 = 90043;

    t163 = ((x677-(x678>x679))>x680);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x681 = -1LL;
	int64_t x682 = -1LL;
	int8_t x683 = INT8_MAX;
	int32_t x684 = -1;

    t164 = ((x681-(x682>x683))>x684);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x685 = UINT32_MAX;
	int16_t x686 = 1;
	static int16_t x687 = INT16_MAX;
	int32_t x688 = -1;

    t165 = ((x685-(x686>x687))>x688);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x689 = 2182U;
	int8_t x690 = -1;
	int8_t x692 = -1;
	static volatile int32_t t166 = -45;

    t166 = ((x689-(x690>x691))>x692);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x693 = INT16_MAX;
	int8_t x694 = 8;
	int16_t x695 = 4;
	int8_t x696 = INT8_MIN;
	int32_t t167 = 37736;

    t167 = ((x693-(x694>x695))>x696);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x697 = INT16_MIN;
	int64_t x698 = INT64_MAX;
	uint64_t x699 = UINT64_MAX;
	int8_t x700 = -6;
	int32_t t168 = 414186;

    t168 = ((x697-(x698>x699))>x700);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x702 = 2246U;
	volatile uint16_t x704 = UINT16_MAX;
	int32_t t169 = -201611894;

    t169 = ((x701-(x702>x703))>x704);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x705 = -1;
	volatile int64_t x706 = 7845LL;
	int8_t x707 = -1;
	static volatile uint32_t x708 = 91805426U;
	int32_t t170 = 386;

    t170 = ((x705-(x706>x707))>x708);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x709 = 6804653LLU;
	int32_t x710 = INT32_MIN;
	uint16_t x711 = 8U;
	int32_t x712 = -100;
	volatile int32_t t171 = 3400;

    t171 = ((x709-(x710>x711))>x712);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x713 = INT16_MAX;
	volatile int64_t x716 = -148869379LL;
	volatile int32_t t172 = -2957398;

    t172 = ((x713-(x714>x715))>x716);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x718 = INT16_MAX;
	volatile int16_t x719 = -80;
	int64_t x720 = 318LL;
	int32_t t173 = -1;

    t173 = ((x717-(x718>x719))>x720);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x721 = UINT32_MAX;
	static volatile uint16_t x722 = 764U;

    t174 = ((x721-(x722>x723))>x724);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x727 = 33245009;
	int8_t x728 = INT8_MIN;
	volatile int32_t t175 = -740;

    t175 = ((x725-(x726>x727))>x728);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x729 = UINT8_MAX;
	volatile uint16_t x730 = 19U;
	uint64_t x731 = UINT64_MAX;
	int64_t x732 = -1LL;

    t176 = ((x729-(x730>x731))>x732);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x737 = -1;
	static int16_t x738 = -1;
	uint8_t x739 = UINT8_MAX;
	static volatile int32_t t177 = 2036;

    t177 = ((x737-(x738>x739))>x740);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x742 = UINT16_MAX;
	uint8_t x743 = UINT8_MAX;
	uint32_t x744 = 71135U;

    t178 = ((x741-(x742>x743))>x744);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x746 = INT64_MIN;
	static int16_t x747 = 0;
	volatile int32_t t179 = -10;

    t179 = ((x745-(x746>x747))>x748);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x753 = -1;
	volatile uint8_t x755 = UINT8_MAX;
	uint8_t x756 = UINT8_MAX;
	volatile int32_t t180 = -2105;

    t180 = ((x753-(x754>x755))>x756);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x759 = INT32_MIN;
	int32_t t181 = -406;

    t181 = ((x757-(x758>x759))>x760);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x761 = -1;
	static int64_t x762 = -1LL;
	int8_t x764 = INT8_MAX;
	int32_t t182 = 126085265;

    t182 = ((x761-(x762>x763))>x764);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x766 = INT8_MIN;
	int32_t x767 = INT32_MIN;
	volatile int32_t t183 = -3764;

    t183 = ((x765-(x766>x767))>x768);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x769 = INT64_MIN;
	int8_t x771 = 2;
	int32_t x772 = INT32_MIN;
	static int32_t t184 = -3126587;

    t184 = ((x769-(x770>x771))>x772);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x773 = 3U;
	int8_t x774 = INT8_MIN;
	int8_t x775 = -1;
	volatile int16_t x776 = 10228;
	volatile int32_t t185 = -13;

    t185 = ((x773-(x774>x775))>x776);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint32_t x777 = 866U;
	static uint32_t x778 = 277U;
	int8_t x779 = INT8_MIN;
	int64_t x780 = -834134323036183LL;

    t186 = ((x777-(x778>x779))>x780);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x781 = 50810875LL;
	int64_t x783 = -6454LL;
	volatile int32_t t187 = 320071;

    t187 = ((x781-(x782>x783))>x784);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x785 = 1966U;
	int64_t x786 = 3569496081LL;
	int64_t x787 = -1LL;

    t188 = ((x785-(x786>x787))>x788);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint64_t x789 = UINT64_MAX;
	volatile uint8_t x790 = UINT8_MAX;
	static int32_t t189 = 898265201;

    t189 = ((x789-(x790>x791))>x792);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x793 = -1;
	uint64_t x794 = 54466536222LLU;
	static int64_t x795 = INT64_MIN;
	volatile uint32_t x796 = 7U;
	int32_t t190 = -30716;

    t190 = ((x793-(x794>x795))>x796);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x797 = UINT32_MAX;
	volatile int64_t x798 = 1LL;
	int8_t x799 = -1;
	volatile int64_t x800 = INT64_MIN;
	static volatile int32_t t191 = 0;

    t191 = ((x797-(x798>x799))>x800);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x801 = UINT16_MAX;
	uint64_t x802 = UINT64_MAX;
	int16_t x804 = -1482;
	int32_t t192 = -14;

    t192 = ((x801-(x802>x803))>x804);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x806 = 22U;
	volatile uint64_t x807 = 47624125018887405LLU;
	int64_t x808 = INT64_MIN;
	static volatile int32_t t193 = 245703317;

    t193 = ((x805-(x806>x807))>x808);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x809 = INT8_MAX;
	static int64_t x810 = INT64_MIN;
	int8_t x811 = INT8_MIN;
	int64_t x812 = 1921541960LL;
	int32_t t194 = -3962069;

    t194 = ((x809-(x810>x811))>x812);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x813 = INT16_MIN;
	volatile int8_t x814 = 25;
	int16_t x815 = INT16_MIN;
	volatile uint8_t x816 = UINT8_MAX;

    t195 = ((x813-(x814>x815))>x816);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x817 = -571;
	int64_t x818 = INT64_MIN;
	uint8_t x819 = UINT8_MAX;
	static volatile int32_t t196 = 185004;

    t196 = ((x817-(x818>x819))>x820);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x821 = -31;
	volatile int64_t x823 = 44376908573469LL;
	static volatile int16_t x824 = INT16_MAX;

    t197 = ((x821-(x822>x823))>x824);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x825 = 8U;
	int64_t x827 = INT64_MIN;
	int32_t x828 = INT32_MIN;
	int32_t t198 = -1;

    t198 = ((x825-(x826>x827))>x828);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x829 = INT16_MIN;
	int32_t x831 = INT32_MAX;
	static int32_t t199 = -1;

    t199 = ((x829-(x830>x831))>x832);

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

