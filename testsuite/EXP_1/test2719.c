
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

static int64_t x3 = INT64_MIN;
static int64_t x14 = INT64_MIN;
volatile int64_t t3 = 29LL;
uint8_t x17 = UINT8_MAX;
volatile uint64_t x19 = 24LLU;
static volatile uint64_t t4 = 2176312515258LLU;
int16_t x25 = INT16_MIN;
uint8_t x27 = 2U;
volatile uint32_t t6 = 3178U;
static int16_t x36 = INT16_MAX;
volatile uint32_t x39 = 1609996910U;
int64_t x42 = INT64_MAX;
volatile int16_t x46 = -1;
int8_t x47 = INT8_MIN;
int64_t t11 = -27452LL;
uint16_t x49 = 2U;
int32_t t12 = -8105441;
static int64_t x58 = INT64_MAX;
static int64_t t14 = -1773364836711929962LL;
volatile int32_t x65 = INT32_MIN;
volatile int32_t x66 = -3387;
static int32_t x74 = INT32_MIN;
static int16_t x83 = INT16_MIN;
uint16_t x92 = 318U;
volatile int32_t t20 = 206;
static uint8_t x108 = 15U;
volatile int8_t x112 = -1;
int32_t x114 = INT32_MAX;
int8_t x115 = -1;
volatile int16_t x116 = INT16_MIN;
volatile int8_t x122 = INT8_MIN;
uint64_t x124 = 537568587LLU;
uint16_t x132 = 524U;
volatile int64_t t29 = -959LL;
uint32_t x138 = 179164U;
int8_t x145 = 2;
int16_t x148 = -1;
int32_t x168 = -1;
volatile int64_t t38 = -980303LL;
uint64_t x190 = 5128593940913851300LLU;
int32_t x200 = 223;
int32_t x204 = -1;
volatile int8_t x207 = -1;
uint32_t x208 = 32U;
int8_t x221 = INT8_MIN;
int16_t x222 = INT16_MIN;
int64_t x224 = -1LL;
volatile uint32_t x234 = UINT32_MAX;
static int64_t x247 = INT64_MIN;
int64_t x253 = 594309888371438543LL;
static int16_t x260 = INT16_MIN;
int8_t x279 = 3;
volatile int64_t t63 = 7LL;
static volatile int16_t x290 = -1;
static uint32_t x291 = 579426997U;
static uint64_t x302 = 636390155644LLU;
uint64_t x306 = 905579LLU;
volatile uint64_t t66 = 275816116649135LLU;
uint16_t x312 = 917U;
static uint16_t x313 = UINT16_MAX;
int64_t x320 = -1LL;
int64_t t69 = -5329532963328LL;
volatile int8_t x326 = -1;
uint16_t x330 = UINT16_MAX;
static volatile int32_t x336 = -4943592;
int8_t x338 = -1;
int32_t x340 = 18165097;
int64_t x341 = -3830913561717LL;
int8_t x342 = -1;
volatile int8_t x344 = -1;
int64_t t75 = 1664516LL;
volatile int8_t x350 = -27;
int8_t x352 = INT8_MIN;
static int32_t t76 = 0;
volatile int64_t x355 = -1LL;
static int16_t x357 = INT16_MIN;
static volatile int64_t x359 = 254LL;
int64_t x375 = 182559LL;
int8_t x376 = -1;
static int64_t t81 = 1LL;
volatile int32_t x390 = -1;
volatile int32_t t84 = -460265913;
int16_t x395 = 19;
volatile uint32_t t85 = 42710U;
volatile int64_t t87 = -12461LL;
int64_t x414 = -1LL;
int64_t t89 = 69197062514LL;
static int16_t x425 = INT16_MIN;
int32_t x427 = -1;
uint32_t x429 = UINT32_MAX;
volatile uint64_t t95 = 5150501587588LLU;
uint64_t x446 = 792889460LLU;
uint16_t x451 = 26296U;
int32_t t100 = -13609;
volatile uint64_t x466 = 381430228LLU;
int8_t x467 = INT8_MAX;
volatile uint64_t t101 = 204498LLU;
volatile int8_t x478 = -1;
int8_t x479 = INT8_MIN;
uint16_t x494 = 0U;
int8_t x496 = INT8_MIN;
volatile int32_t t107 = 503;
int64_t t109 = -6LL;
uint16_t x515 = UINT16_MAX;
static volatile int32_t x516 = INT32_MAX;
uint64_t t110 = 46131905367LLU;
uint32_t x519 = 379U;
static int8_t x520 = INT8_MIN;
int32_t x526 = INT32_MAX;
static int8_t x527 = INT8_MIN;
int8_t x528 = -5;
int16_t x531 = -32;
uint8_t x533 = 1U;
uint16_t x553 = 1079U;
int32_t x556 = 716;
static volatile int64_t x561 = INT64_MIN;
volatile uint64_t x566 = 400270053LLU;
int16_t x571 = -1;
int8_t x597 = INT8_MAX;
static uint16_t x611 = 6U;
int64_t x624 = -1LL;
uint16_t x629 = 28901U;
uint8_t x640 = 1U;
uint8_t x641 = 4U;
uint64_t x659 = 154669LLU;
static uint64_t x663 = UINT64_MAX;
static volatile uint8_t x664 = UINT8_MAX;
int32_t x672 = -19732598;
uint32_t x674 = UINT32_MAX;
int8_t x678 = INT8_MIN;
uint64_t t139 = 125874LLU;
uint32_t x685 = UINT32_MAX;
static int16_t x696 = -895;
uint32_t x707 = UINT32_MAX;
int8_t x721 = -3;
uint16_t x730 = 76U;
int16_t x731 = 0;
volatile int16_t x734 = 114;
static volatile int16_t x736 = -1;
int64_t x742 = INT64_MIN;
int64_t x749 = 11311LL;
uint8_t x757 = 0U;
volatile uint16_t x760 = 11009U;
int32_t x761 = 269537011;
static uint64_t x775 = 63LLU;
int32_t x781 = INT32_MIN;
volatile uint64_t t165 = 16184556207LLU;
volatile int8_t x804 = -1;
int32_t x812 = -122;
int8_t x815 = INT8_MIN;
static uint64_t t169 = 6888LLU;
volatile int64_t x822 = -1LL;
uint64_t t172 = 2085209LLU;
int64_t x849 = 0LL;
static volatile uint16_t x850 = UINT16_MAX;
uint16_t x866 = 1313U;
int64_t t178 = -30329186LL;
int8_t x870 = -1;
static volatile int8_t x872 = 1;
static int32_t t179 = 7;
int64_t x874 = INT64_MIN;
int64_t x875 = -942646723LL;
volatile uint8_t x878 = 1U;
int8_t x882 = INT8_MIN;
uint16_t x887 = 6927U;
int8_t x891 = -1;
volatile int64_t x909 = 58534346633722867LL;
int16_t x910 = -6;
static uint64_t x911 = 6184118628208LLU;
static int32_t x913 = -1;
int8_t x914 = 0;
int8_t x915 = INT8_MIN;
int64_t x916 = 2LL;
int16_t x918 = -1;
int32_t x922 = INT32_MIN;
static volatile int32_t x925 = -1;
uint16_t x948 = 430U;
int64_t t194 = 5129LL;
static volatile uint32_t x964 = UINT32_MAX;
uint64_t x971 = 8631814067936926LLU;
volatile int64_t x972 = INT64_MAX;


void f0(void) {
    	static int32_t x1 = 28946;
	static uint64_t x2 = 5LLU;
	int8_t x4 = 1;
	volatile uint64_t t0 = 66990110001LLU;

    t0 = (((x1^x2)|x3)*x4);

    if (t0 != 9223372036854804759LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MAX;
	uint64_t x6 = UINT64_MAX;
	volatile uint8_t x7 = UINT8_MAX;
	uint32_t x8 = 12232262U;
	volatile uint64_t t1 = 1554052557514LLU;

    t1 = (((x5^x6)|x7)*x8);

    if (t1 != 18446744073697319354LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x9 = INT8_MAX;
	uint64_t x10 = 6916883569086771LLU;
	int32_t x11 = INT32_MAX;
	static uint16_t x12 = 10129U;
	uint64_t t2 = 0LLU;

    t2 = (((x9^x10)|x11)*x12);

    if (t2 != 14720883474407872623LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	int64_t x15 = INT64_MAX;
	int16_t x16 = 0;

    t3 = (((x13^x14)|x15)*x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x18 = INT16_MAX;
	volatile int8_t x20 = 44;

    t4 = (((x17^x18)|x19)*x20);

    if (t4 != 1431584LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = UINT16_MAX;
	uint32_t x22 = UINT32_MAX;
	volatile int32_t x23 = 1750;
	uint16_t x24 = 694U;
	static uint32_t t5 = 7830U;

    t5 = (((x21^x22)|x23)*x24);

    if (t5 != 4250699812U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x26 = UINT32_MAX;
	volatile int8_t x28 = -1;

    t6 = (((x25^x26)|x27)*x28);

    if (t6 != 4294934529U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 5U;
	int32_t x30 = -529;
	uint32_t x31 = 2724566U;
	uint16_t x32 = 7946U;
	uint32_t t7 = 1699U;

    t7 = (((x29^x30)|x31)*x32);

    if (t7 != 4294951404U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 13U;
	uint32_t x34 = UINT32_MAX;
	static int32_t x35 = 106517456;
	volatile uint32_t t8 = 8U;

    t8 = (((x33^x34)|x35)*x36);

    if (t8 != 4294508558U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	volatile int8_t x38 = INT8_MIN;
	int8_t x40 = INT8_MIN;
	volatile uint32_t t9 = 170199649U;

    t9 = (((x37^x38)|x39)*x40);

    if (t9 != 78823552U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = INT64_MAX;
	static int8_t x43 = -1;
	uint16_t x44 = UINT16_MAX;
	volatile int64_t t10 = -1LL;

    t10 = (((x41^x42)|x43)*x44);

    if (t10 != -65535LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -52417770LL;
	int16_t x48 = 154;

    t11 = (((x45^x46)|x47)*x48);

    if (t11 != -3542LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = INT32_MIN;
	uint8_t x51 = UINT8_MAX;
	uint8_t x52 = 1U;

    t12 = (((x49^x50)|x51)*x52);

    if (t12 != -2147483393) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	static int64_t x54 = -48598224945165LL;
	int8_t x55 = INT8_MIN;
	int32_t x56 = -98;
	volatile int64_t t13 = -814537909457166LL;

    t13 = (((x53^x54)|x55)*x56);

    if (t13 != 11368LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 5U;
	static int32_t x59 = -336;
	uint16_t x60 = 255U;

    t14 = (((x57^x58)|x59)*x60);

    if (t14 != -1530LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = INT16_MAX;
	int64_t x62 = -30889169093249LL;
	volatile int16_t x63 = -2;
	int16_t x64 = -2;
	volatile int64_t t15 = -9697300470LL;

    t15 = (((x61^x62)|x63)*x64);

    if (t15 != 4LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x67 = 6;
	uint8_t x68 = 0U;
	static volatile int32_t t16 = 1590727;

    t16 = (((x65^x66)|x67)*x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x73 = INT16_MIN;
	static int64_t x75 = -1LL;
	volatile int64_t x76 = -1LL;
	volatile int64_t t17 = -733083478047396LL;

    t17 = (((x73^x74)|x75)*x76);

    if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = INT16_MIN;
	volatile uint16_t x82 = 219U;
	int8_t x84 = -1;
	int32_t t18 = -655;

    t18 = (((x81^x82)|x83)*x84);

    if (t18 != 32549) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x85 = 24;
	int16_t x86 = INT16_MIN;
	uint8_t x87 = UINT8_MAX;
	int8_t x88 = INT8_MIN;
	int32_t t19 = 171;

    t19 = (((x85^x86)|x87)*x88);

    if (t19 != 4161664) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x89 = 3U;
	uint8_t x90 = 8U;
	static int8_t x91 = -1;

    t20 = (((x89^x90)|x91)*x92);

    if (t20 != -318) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = INT64_MIN;
	static int32_t x94 = INT32_MIN;
	int8_t x95 = INT8_MIN;
	int8_t x96 = -1;
	int64_t t21 = 20LL;

    t21 = (((x93^x94)|x95)*x96);

    if (t21 != 128LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x101 = INT32_MIN;
	int16_t x102 = -9620;
	static volatile uint64_t x103 = UINT64_MAX;
	uint32_t x104 = UINT32_MAX;
	uint64_t t22 = 5454390381611464LLU;

    t22 = (((x101^x102)|x103)*x104);

    if (t22 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x105 = -1;
	int8_t x106 = -1;
	uint32_t x107 = 352388848U;
	volatile uint32_t t23 = 1024U;

    t23 = (((x105^x106)|x107)*x108);

    if (t23 != 990865424U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x109 = -4LL;
	uint8_t x110 = 1U;
	int8_t x111 = 63;
	volatile int64_t t24 = 737475929834LL;

    t24 = (((x109^x110)|x111)*x112);

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x113 = 6U;
	volatile int32_t t25 = -950;

    t25 = (((x113^x114)|x115)*x116);

    if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x117 = 354767;
	int8_t x118 = INT8_MAX;
	volatile uint16_t x119 = UINT16_MAX;
	uint64_t x120 = 244867811LLU;
	static uint64_t t26 = 25LLU;

    t26 = (((x117^x118)|x119)*x120);

    if (t26 != 96285696302365LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x121 = 15013567510LLU;
	int8_t x123 = INT8_MIN;
	volatile uint64_t t27 = 745830403184807587LLU;

    t27 = (((x121^x122)|x123)*x124);

    if (t27 != 18446744016727281394LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x125 = INT32_MIN;
	static int32_t x126 = 3;
	static int8_t x127 = 7;
	uint64_t x128 = 5293136637454291499LLU;
	static volatile uint64_t t28 = 3520LLU;

    t28 = (((x125^x126)|x127)*x128);

    if (t28 != 16332925282283093805LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x129 = INT16_MIN;
	volatile int64_t x130 = -1LL;
	uint16_t x131 = 1U;

    t29 = (((x129^x130)|x131)*x132);

    if (t29 != 17169908LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MAX;
	int16_t x135 = INT16_MIN;
	int16_t x136 = -1;
	volatile int64_t t30 = -822772979582101LL;

    t30 = (((x133^x134)|x135)*x136);

    if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x137 = INT8_MAX;
	int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MAX;
	static uint32_t t31 = 0U;

    t31 = (((x137^x138)|x139)*x140);

    if (t31 != 4291919965U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x141 = 0U;
	static int64_t x142 = -1LL;
	int16_t x143 = -1;
	uint64_t x144 = 5901LLU;
	volatile uint64_t t32 = 10347071299LLU;

    t32 = (((x141^x142)|x143)*x144);

    if (t32 != 18446744073709545715LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x146 = UINT64_MAX;
	volatile uint64_t x147 = UINT64_MAX;
	volatile uint64_t t33 = 252766041462051LLU;

    t33 = (((x145^x146)|x147)*x148);

    if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x149 = -13079;
	int32_t x150 = INT32_MIN;
	int64_t x151 = -1LL;
	uint8_t x152 = 9U;
	volatile int64_t t34 = -102429768884580216LL;

    t34 = (((x149^x150)|x151)*x152);

    if (t34 != -9LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x153 = UINT16_MAX;
	uint8_t x154 = UINT8_MAX;
	int8_t x155 = INT8_MIN;
	int64_t x156 = -1LL;
	volatile int64_t t35 = -1659535491678LL;

    t35 = (((x153^x154)|x155)*x156);

    if (t35 != 128LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint16_t x157 = 108U;
	int32_t x158 = -1;
	static int64_t x159 = 1735LL;
	volatile uint64_t x160 = 103LLU;
	uint64_t t36 = 304LLU;

    t36 = (((x157^x158)|x159)*x160);

    if (t36 != 18446744073709547393LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x165 = INT8_MIN;
	uint8_t x166 = 3U;
	int64_t x167 = INT64_MIN;
	volatile int64_t t37 = -58164LL;

    t37 = (((x165^x166)|x167)*x168);

    if (t37 != 125LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x169 = INT16_MAX;
	int16_t x170 = INT16_MIN;
	int64_t x171 = 1LL;
	volatile int16_t x172 = 97;

    t38 = (((x169^x170)|x171)*x172);

    if (t38 != -97LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x173 = 1237U;
	static int64_t x174 = INT64_MIN;
	int64_t x175 = INT64_MIN;
	static int8_t x176 = 0;
	int64_t t39 = 319961988379013LL;

    t39 = (((x173^x174)|x175)*x176);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x185 = INT8_MIN;
	int8_t x186 = INT8_MIN;
	int32_t x187 = INT32_MIN;
	volatile int64_t x188 = -1LL;
	volatile int64_t t40 = -1608LL;

    t40 = (((x185^x186)|x187)*x188);

    if (t40 != 2147483648LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x189 = INT64_MIN;
	int16_t x191 = -1;
	int64_t x192 = 10425LL;
	volatile uint64_t t41 = 346934035274616823LLU;

    t41 = (((x189^x190)|x191)*x192);

    if (t41 != 18446744073709541191LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x193 = -1;
	int16_t x194 = INT16_MIN;
	uint64_t x195 = 265564016563LLU;
	static uint64_t x196 = 747135965381480LLU;
	static uint64_t t42 = 158071LLU;

    t42 = (((x193^x194)|x195)*x196);

    if (t42 != 14182656510219992216LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x197 = -873;
	int64_t x198 = INT64_MIN;
	uint64_t x199 = 14387693713LLU;
	uint64_t t43 = 21747735LLU;

    t43 = (((x197^x198)|x199)*x200);

    if (t43 != 9223372036854581129LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x201 = INT16_MAX;
	int16_t x202 = INT16_MIN;
	uint16_t x203 = 485U;
	volatile int32_t t44 = -3;

    t44 = (((x201^x202)|x203)*x204);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x205 = -1;
	uint32_t x206 = 2155691U;
	volatile uint32_t t45 = 1588242467U;

    t45 = (((x205^x206)|x207)*x208);

    if (t45 != 4294967264U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x209 = 3LLU;
	int32_t x210 = INT32_MAX;
	int64_t x211 = -7192LL;
	static int8_t x212 = 13;
	static volatile uint64_t t46 = 285526714387551690LLU;

    t46 = (((x209^x210)|x211)*x212);

    if (t46 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x213 = INT64_MIN;
	int32_t x214 = INT32_MIN;
	volatile int8_t x215 = INT8_MIN;
	static volatile int32_t x216 = -359560911;
	static int64_t t47 = 576LL;

    t47 = (((x213^x214)|x215)*x216);

    if (t47 != 46023796608LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x223 = INT64_MAX;
	int64_t t48 = -4378455258420LL;

    t48 = (((x221^x222)|x223)*x224);

    if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x225 = 104U;
	int32_t x226 = -1001;
	uint8_t x227 = 27U;
	int64_t x228 = -1573246LL;
	static volatile int64_t t49 = 30254138LL;

    t49 = (((x225^x226)|x227)*x228);

    if (t49 != 1411201662LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x229 = 32064U;
	int8_t x230 = 1;
	int16_t x231 = INT16_MIN;
	int8_t x232 = 11;
	int32_t t50 = 43362646;

    t50 = (((x229^x230)|x231)*x232);

    if (t50 != -7733) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x233 = 658U;
	uint8_t x235 = UINT8_MAX;
	volatile int8_t x236 = -1;
	uint32_t t51 = 30696689U;

    t51 = (((x233^x234)|x235)*x236);

    if (t51 != 513U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x237 = INT16_MIN;
	int64_t x238 = -16408284LL;
	volatile uint32_t x239 = 6795250U;
	int8_t x240 = -1;
	int64_t t52 = 60031795LL;

    t52 = (((x237^x238)|x239)*x240);

    if (t52 != -16756726LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x241 = INT32_MIN;
	uint8_t x242 = UINT8_MAX;
	uint32_t x243 = UINT32_MAX;
	uint8_t x244 = 4U;
	volatile uint32_t t53 = 3470978U;

    t53 = (((x241^x242)|x243)*x244);

    if (t53 != 4294967292U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x245 = 58911630285LL;
	static int16_t x246 = 8;
	static int8_t x248 = -1;
	static volatile int64_t t54 = -249965LL;

    t54 = (((x245^x246)|x247)*x248);

    if (t54 != 9223371977943145531LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x254 = -1;
	static int64_t x255 = -1LL;
	uint8_t x256 = 42U;
	int64_t t55 = -5597414113741LL;

    t55 = (((x253^x254)|x255)*x256);

    if (t55 != -42LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x257 = 940U;
	int16_t x258 = INT16_MIN;
	int32_t x259 = INT32_MIN;
	static int32_t t56 = -200515;

    t56 = (((x257^x258)|x259)*x260);

    if (t56 != 1042939904) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x261 = INT16_MIN;
	uint8_t x262 = 2U;
	uint16_t x263 = 9U;
	uint64_t x264 = 795535167347LLU;
	volatile uint64_t t57 = 56671172LLU;

    t57 = (((x261^x262)|x263)*x264);

    if (t57 != 18420684728232765937LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x265 = 124U;
	int32_t x266 = INT32_MIN;
	static volatile int16_t x267 = INT16_MAX;
	int64_t x268 = 146LL;
	volatile int64_t t58 = 5LL;

    t58 = (((x265^x266)|x267)*x268);

    if (t58 != -313527828626LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x269 = 40U;
	volatile int16_t x270 = -223;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = 3226U;
	volatile uint32_t t59 = 29197310U;

    t59 = (((x269^x270)|x271)*x272);

    if (t59 != 4294170474U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x273 = INT32_MIN;
	uint16_t x274 = 131U;
	int32_t x275 = 156518;
	volatile int32_t x276 = -1;
	static volatile int32_t t60 = 102;

    t60 = (((x273^x274)|x275)*x276);

    if (t60 != 2147327001) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x277 = 4;
	volatile int32_t x278 = -1;
	uint16_t x280 = 908U;
	static volatile int32_t t61 = -57095;

    t61 = (((x277^x278)|x279)*x280);

    if (t61 != -4540) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x281 = -53;
	int64_t x282 = -1LL;
	int8_t x283 = INT8_MIN;
	int64_t x284 = -104405928779975LL;
	volatile int64_t t62 = -6263LL;

    t62 = (((x281^x282)|x283)*x284);

    if (t62 != 7934850587278100LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x285 = INT8_MIN;
	uint32_t x286 = 498113516U;
	int64_t x287 = INT64_MIN;
	int32_t x288 = -1;

    t63 = (((x285^x286)|x287)*x288);

    if (t63 != 9223372033057921940LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x289 = 402692619775LLU;
	volatile int64_t x292 = INT64_MIN;
	uint64_t t64 = 988454186977LLU;

    t64 = (((x289^x290)|x291)*x292);

    if (t64 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x301 = INT64_MIN;
	volatile int16_t x303 = INT16_MIN;
	volatile int8_t x304 = -15;
	uint64_t t65 = 352384231991948LLU;

    t65 = (((x301^x302)|x303)*x304);

    if (t65 != 347580LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x305 = 47996666378569LLU;
	static uint16_t x307 = UINT16_MAX;
	static volatile int16_t x308 = INT16_MAX;

    t66 = (((x305^x306)|x307)*x308);

    if (t66 != 1572706739366428673LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x309 = -1;
	volatile uint32_t x310 = 8141332U;
	int16_t x311 = -1;
	uint32_t t67 = 242807U;

    t67 = (((x309^x310)|x311)*x312);

    if (t67 != 4294966379U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x314 = UINT32_MAX;
	int32_t x315 = INT32_MAX;
	uint32_t x316 = UINT32_MAX;
	uint32_t t68 = 7639U;

    t68 = (((x313^x314)|x315)*x316);

    if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint8_t x317 = 14U;
	int32_t x318 = INT32_MIN;
	static volatile int16_t x319 = INT16_MIN;

    t69 = (((x317^x318)|x319)*x320);

    if (t69 != 32754LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x321 = INT16_MAX;
	int64_t x322 = INT64_MAX;
	int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MIN;
	int64_t t70 = -2LL;

    t70 = (((x321^x322)|x323)*x324);

    if (t70 != 70368744177664LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x325 = 4279605897177LLU;
	int16_t x327 = 1113;
	int64_t x328 = INT64_MIN;
	uint64_t t71 = 43079542890028LLU;

    t71 = (((x325^x326)|x327)*x328);

    if (t71 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x329 = INT16_MAX;
	volatile int8_t x331 = 19;
	uint8_t x332 = 1U;
	int32_t t72 = -11531912;

    t72 = (((x329^x330)|x331)*x332);

    if (t72 != 32787) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x333 = -1;
	uint16_t x334 = 33U;
	int16_t x335 = -243;
	volatile int32_t t73 = 37161;

    t73 = (((x333^x334)|x335)*x336);

    if (t73 != 163138536) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x337 = INT16_MIN;
	static uint64_t x339 = UINT64_MAX;
	static volatile uint64_t t74 = 18454469848LLU;

    t74 = (((x337^x338)|x339)*x340);

    if (t74 != 18446744073691386519LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x343 = INT8_MIN;

    t75 = (((x341^x342)|x343)*x344);

    if (t75 != 12LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x349 = INT16_MAX;
	static int32_t x351 = -95197;

    t76 = (((x349^x350)|x351)*x352);

    if (t76 != 3793536) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x353 = INT32_MIN;
	int32_t x354 = -1;
	uint8_t x356 = 0U;
	static volatile int64_t t77 = 3954301216549871941LL;

    t77 = (((x353^x354)|x355)*x356);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x358 = -60;
	int16_t x360 = INT16_MAX;
	volatile int64_t t78 = -96364221105933809LL;

    t78 = (((x357^x358)|x359)*x360);

    if (t78 != 1073643522LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x361 = 29902U;
	uint32_t x362 = UINT32_MAX;
	volatile uint16_t x363 = 113U;
	uint32_t x364 = 1006792U;
	uint32_t t79 = 93948695U;

    t79 = (((x361^x362)|x363)*x364);

    if (t79 != 23104584U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x369 = 1U;
	static int16_t x370 = 46;
	uint16_t x371 = UINT16_MAX;
	uint8_t x372 = UINT8_MAX;
	volatile uint32_t t80 = 147U;

    t80 = (((x369^x370)|x371)*x372);

    if (t80 != 16711425U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x373 = UINT8_MAX;
	uint16_t x374 = 1451U;

    t81 = (((x373^x374)|x375)*x376);

    if (t81 != -183647LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x381 = 18593952304115248LL;
	int8_t x382 = 56;
	int32_t x383 = INT32_MIN;
	volatile int64_t x384 = -1LL;
	int64_t t82 = 14597479063475LL;

    t82 = (((x381^x382)|x383)*x384);

    if (t82 != 502354424LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x385 = INT64_MIN;
	int32_t x386 = 29621;
	int64_t x387 = -1LL;
	int16_t x388 = INT16_MIN;
	int64_t t83 = -232279LL;

    t83 = (((x385^x386)|x387)*x388);

    if (t83 != 32768LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x389 = 43256807;
	int16_t x391 = -1;
	int16_t x392 = -1;

    t84 = (((x389^x390)|x391)*x392);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x393 = INT16_MIN;
	int32_t x394 = INT32_MIN;
	uint32_t x396 = 215871U;

    t85 = (((x393^x394)|x395)*x396);

    if (t85 != 3667858861U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x401 = INT16_MIN;
	static int64_t x402 = 1640536642LL;
	uint32_t x403 = 3537U;
	static int16_t x404 = 1;
	static volatile int64_t t86 = -152850942LL;

    t86 = (((x401^x402)|x403)*x404);

    if (t86 != -1640554541LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x405 = 5462780770LL;
	volatile int64_t x406 = 211LL;
	static int8_t x407 = -25;
	int64_t x408 = 617693LL;

    t87 = (((x405^x406)|x407)*x408);

    if (t87 != -5559237LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x409 = 606975216292412LL;
	int8_t x410 = 16;
	uint64_t x411 = UINT64_MAX;
	static int16_t x412 = -1;
	volatile uint64_t t88 = 9174727303712611553LLU;

    t88 = (((x409^x410)|x411)*x412);

    if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x413 = INT16_MIN;
	static uint8_t x415 = UINT8_MAX;
	uint8_t x416 = UINT8_MAX;

    t89 = (((x413^x414)|x415)*x416);

    if (t89 != 8355585LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x417 = 30606300183LLU;
	int32_t x418 = INT32_MIN;
	volatile int16_t x419 = INT16_MIN;
	volatile uint16_t x420 = UINT16_MAX;
	static volatile uint64_t t90 = 2193689819559926185LLU;

    t90 = (((x417^x418)|x419)*x420);

    if (t90 != 18446744071899147241LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x421 = -1;
	int16_t x422 = -1;
	uint32_t x423 = 467738U;
	int32_t x424 = INT32_MAX;
	uint32_t t91 = 29325977U;

    t91 = (((x421^x422)|x423)*x424);

    if (t91 != 4294499558U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x426 = 17820U;
	int64_t x428 = INT64_MAX;
	int64_t t92 = -289803343563LL;

    t92 = (((x425^x426)|x427)*x428);

    if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x430 = UINT32_MAX;
	uint16_t x431 = 11372U;
	int8_t x432 = INT8_MIN;
	volatile uint32_t t93 = 1715681435U;

    t93 = (((x429^x430)|x431)*x432);

    if (t93 != 4293511680U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x433 = INT64_MIN;
	int64_t x434 = -168LL;
	volatile int32_t x435 = 17892;
	volatile int8_t x436 = 0;
	int64_t t94 = 10760010209983321LL;

    t94 = (((x433^x434)|x435)*x436);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x441 = UINT64_MAX;
	int8_t x442 = INT8_MIN;
	int64_t x443 = INT64_MIN;
	volatile int16_t x444 = INT16_MAX;

    t95 = (((x441^x442)|x443)*x444);

    if (t95 != 9223372036858937217LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x445 = 2U;
	int8_t x447 = INT8_MIN;
	int64_t x448 = -1LL;
	uint64_t t96 = 7440495908347326LLU;

    t96 = (((x445^x446)|x447)*x448);

    if (t96 != 10LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint16_t x449 = UINT16_MAX;
	int16_t x450 = INT16_MIN;
	volatile int8_t x452 = -1;
	static int32_t t97 = -814;

    t97 = (((x449^x450)|x451)*x452);

    if (t97 != 32769) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x453 = INT32_MIN;
	static int64_t x454 = 859623LL;
	int16_t x455 = 0;
	uint64_t x456 = 491718448902975395LLU;
	volatile uint64_t t98 = 1809757084851263023LLU;

    t98 = (((x453^x454)|x455)*x456);

    if (t98 != 13436958430366102293LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x457 = -228226624LL;
	volatile uint64_t x458 = UINT64_MAX;
	int64_t x459 = INT64_MAX;
	int8_t x460 = -1;
	static uint64_t t99 = 2203898677564148200LLU;

    t99 = (((x457^x458)|x459)*x460);

    if (t99 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x461 = 15;
	int32_t x462 = 1580886;
	static int16_t x463 = -28;
	volatile int16_t x464 = 1;

    t100 = (((x461^x462)|x463)*x464);

    if (t100 != -3) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x465 = INT64_MIN;
	int8_t x468 = INT8_MIN;

    t101 = (((x465^x466)|x467)*x468);

    if (t101 != 18446744024886476928LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x469 = UINT16_MAX;
	int8_t x470 = 1;
	volatile int64_t x471 = INT64_MAX;
	volatile int32_t x472 = -1;
	volatile int64_t t102 = 7LL;

    t102 = (((x469^x470)|x471)*x472);

    if (t102 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x477 = 301837371174231298LLU;
	volatile uint16_t x480 = UINT16_MAX;
	static uint64_t t103 = 6868935LLU;

    t103 = (((x477^x478)|x479)*x480);

    if (t103 != 18446744073709355011LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x481 = INT8_MAX;
	int8_t x482 = 29;
	int64_t x483 = INT64_MAX;
	int32_t x484 = -1;
	volatile int64_t t104 = 0LL;

    t104 = (((x481^x482)|x483)*x484);

    if (t104 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x485 = 3LLU;
	int8_t x486 = 26;
	volatile int16_t x487 = INT16_MIN;
	int64_t x488 = 4LL;
	static uint64_t t105 = 590925LLU;

    t105 = (((x485^x486)|x487)*x488);

    if (t105 != 18446744073709420644LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x489 = -37938345659LL;
	uint8_t x490 = 6U;
	volatile int32_t x491 = INT32_MAX;
	int8_t x492 = -1;
	int64_t t106 = 556736110827706853LL;

    t106 = (((x489^x490)|x491)*x492);

    if (t106 != 36507222017LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x493 = INT8_MAX;
	volatile int8_t x495 = INT8_MIN;

    t107 = (((x493^x494)|x495)*x496);

    if (t107 != 128) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x505 = UINT64_MAX;
	static uint32_t x506 = 2062209U;
	uint16_t x507 = UINT16_MAX;
	int32_t x508 = INT32_MIN;
	uint64_t t108 = 16131171852941LLU;

    t108 = (((x505^x506)|x507)*x508);

    if (t108 != 4362864286498816LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x509 = -37168LL;
	uint32_t x510 = UINT32_MAX;
	static int8_t x511 = INT8_MAX;
	uint8_t x512 = 0U;

    t109 = (((x509^x510)|x511)*x512);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint64_t x513 = 533373353274LLU;
	int8_t x514 = INT8_MAX;

    t110 = (((x513^x514)|x515)*x516);

    if (t110 != 1712493222786760705LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x517 = 22497539;
	int32_t x518 = INT32_MIN;
	volatile uint32_t t111 = 3U;

    t111 = (((x517^x518)|x519)*x520);

    if (t111 != 1415266944U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x525 = INT64_MIN;
	volatile int64_t t112 = -54596804LL;

    t112 = (((x525^x526)|x527)*x528);

    if (t112 != 5LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x529 = 2U;
	int64_t x530 = INT64_MAX;
	int8_t x532 = INT8_MIN;
	int64_t t113 = 5315263794287421LL;

    t113 = (((x529^x530)|x531)*x532);

    if (t113 != 384LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x534 = 322959;
	int32_t x535 = -94;
	uint64_t x536 = UINT64_MAX;
	volatile uint64_t t114 = 602LLU;

    t114 = (((x533^x534)|x535)*x536);

    if (t114 != 82LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x545 = 14U;
	int8_t x546 = INT8_MIN;
	int64_t x547 = INT64_MIN;
	int8_t x548 = INT8_MIN;
	static volatile int64_t t115 = -467436799409LL;

    t115 = (((x545^x546)|x547)*x548);

    if (t115 != 14592LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x549 = -1;
	uint8_t x550 = 8U;
	static uint8_t x551 = 12U;
	static int32_t x552 = 9169766;
	volatile int32_t t116 = 2189;

    t116 = (((x549^x550)|x551)*x552);

    if (t116 != -9169766) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x554 = -14;
	static int16_t x555 = INT16_MIN;
	volatile int32_t t117 = 997;

    t117 = (((x553^x554)|x555)*x556);

    if (t117 != -775428) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x557 = 0U;
	uint32_t x558 = UINT32_MAX;
	int32_t x559 = 76;
	static int16_t x560 = 920;
	uint32_t t118 = 190365880U;

    t118 = (((x557^x558)|x559)*x560);

    if (t118 != 4294966376U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x562 = -1869;
	static int32_t x563 = -1;
	volatile int8_t x564 = INT8_MIN;
	static int64_t t119 = 4311620723717200LL;

    t119 = (((x561^x562)|x563)*x564);

    if (t119 != 128LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x565 = 0U;
	int16_t x567 = INT16_MIN;
	uint32_t x568 = 1727U;
	uint64_t t120 = 391LLU;

    t120 = (((x565^x566)|x567)*x568);

    if (t120 != 18446744073668388571LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x569 = UINT32_MAX;
	volatile int64_t x570 = INT64_MIN;
	volatile uint64_t x572 = UINT64_MAX;
	static volatile uint64_t t121 = 603078287560516881LLU;

    t121 = (((x569^x570)|x571)*x572);

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x573 = 837759157383954002LLU;
	uint64_t x574 = 40588439530LLU;
	int8_t x575 = -1;
	volatile int32_t x576 = -1;
	volatile uint64_t t122 = 2094762362550940LLU;

    t122 = (((x573^x574)|x575)*x576);

    if (t122 != 1LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x585 = UINT8_MAX;
	uint64_t x586 = 967LLU;
	int16_t x587 = 11;
	uint8_t x588 = UINT8_MAX;
	volatile uint64_t t123 = 2767679LLU;

    t123 = (((x585^x586)|x587)*x588);

    if (t123 != 210885LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x598 = 2U;
	static int8_t x599 = 11;
	volatile int32_t x600 = 27694;
	uint32_t t124 = 471553U;

    t124 = (((x597^x598)|x599)*x600);

    if (t124 != 3517138U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x609 = 28U;
	int16_t x610 = INT16_MIN;
	int64_t x612 = -4LL;
	volatile int64_t t125 = -554LL;

    t125 = (((x609^x610)|x611)*x612);

    if (t125 != 130952LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x617 = -1;
	static int64_t x618 = -1LL;
	int8_t x619 = 0;
	uint32_t x620 = UINT32_MAX;
	int64_t t126 = 65544196280409LL;

    t126 = (((x617^x618)|x619)*x620);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x621 = UINT16_MAX;
	int32_t x622 = INT32_MIN;
	int32_t x623 = INT32_MIN;
	int64_t t127 = -27951958LL;

    t127 = (((x621^x622)|x623)*x624);

    if (t127 != 2147418113LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x625 = INT32_MAX;
	static int32_t x626 = 895721;
	static int32_t x627 = INT32_MIN;
	int64_t x628 = -1LL;
	int64_t t128 = 0LL;

    t128 = (((x625^x626)|x627)*x628);

    if (t128 != 895722LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x630 = 4484U;
	int64_t x631 = INT64_MIN;
	static volatile int32_t x632 = -1;
	int64_t t129 = 3LL;

    t129 = (((x629^x630)|x631)*x632);

    if (t129 != 9223372036854750879LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x633 = -11364805748665LL;
	int32_t x634 = -188193837;
	int16_t x635 = 3;
	uint8_t x636 = UINT8_MAX;
	volatile int64_t t130 = -16257696LL;

    t130 = (((x633^x634)|x635)*x636);

    if (t130 != 2898045997505385LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x637 = -1;
	int32_t x638 = 21534432;
	int32_t x639 = 6269109;
	static volatile int32_t t131 = -78;

    t131 = (((x637^x638)|x639)*x640);

    if (t131 != -16782913) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x642 = UINT64_MAX;
	int16_t x643 = -1;
	int16_t x644 = INT16_MIN;
	uint64_t t132 = 986LLU;

    t132 = (((x641^x642)|x643)*x644);

    if (t132 != 32768LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x653 = -1;
	volatile uint64_t x654 = 89908705439958LLU;
	int16_t x655 = 138;
	uint16_t x656 = 501U;
	volatile uint64_t t133 = 171463LLU;

    t133 = (((x653^x654)|x655)*x656);

    if (t133 != 18401699812284197287LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x657 = 31421U;
	uint32_t x658 = 146U;
	static int16_t x660 = INT16_MIN;
	volatile uint64_t t134 = 971104340687890LLU;

    t134 = (((x657^x658)|x659)*x660);

    if (t134 != 18446744068356079616LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x661 = -1;
	volatile uint16_t x662 = UINT16_MAX;
	uint64_t t135 = 150LLU;

    t135 = (((x661^x662)|x663)*x664);

    if (t135 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x665 = INT32_MAX;
	volatile int16_t x666 = -2568;
	volatile int8_t x667 = INT8_MIN;
	static int8_t x668 = INT8_MIN;
	int32_t t136 = 1986910;

    t136 = (((x665^x666)|x667)*x668);

    if (t136 != 15488) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x669 = UINT16_MAX;
	int8_t x670 = -1;
	int64_t x671 = INT64_MAX;
	volatile int64_t t137 = 3794338LL;

    t137 = (((x669^x670)|x671)*x672);

    if (t137 != 19732598LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x673 = INT16_MIN;
	int32_t x675 = -2309484;
	int32_t x676 = INT32_MIN;
	volatile uint32_t t138 = 99862510U;

    t138 = (((x673^x674)|x675)*x676);

    if (t138 != 2147483648U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x677 = INT32_MAX;
	static uint64_t x679 = 49818059LLU;
	int32_t x680 = 4533862;

    t139 = (((x677^x678)|x679)*x680);

    if (t139 != 18437233547642637722LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x681 = -116LL;
	uint8_t x682 = 7U;
	uint16_t x683 = UINT16_MAX;
	uint8_t x684 = 19U;
	int64_t t140 = -4484784089864967043LL;

    t140 = (((x681^x682)|x683)*x684);

    if (t140 != -19LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x686 = UINT64_MAX;
	uint16_t x687 = 30U;
	volatile int8_t x688 = INT8_MAX;
	uint64_t t141 = 1285427288LLU;

    t141 = (((x685^x686)|x687)*x688);

    if (t141 != 18446743528248708834LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x693 = -1;
	uint32_t x694 = 8018U;
	uint32_t x695 = UINT32_MAX;
	static uint32_t t142 = 112572291U;

    t142 = (((x693^x694)|x695)*x696);

    if (t142 != 895U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x697 = INT64_MAX;
	static int16_t x698 = -6;
	static uint16_t x699 = 37U;
	int16_t x700 = -1;
	volatile int64_t t143 = 1LL;

    t143 = (((x697^x698)|x699)*x700);

    if (t143 != 9223372036854775771LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x701 = INT32_MAX;
	int32_t x702 = -1;
	static uint16_t x703 = UINT16_MAX;
	static volatile int32_t x704 = 0;
	volatile int32_t t144 = 39754842;

    t144 = (((x701^x702)|x703)*x704);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x705 = 14U;
	int8_t x706 = -50;
	volatile int8_t x708 = INT8_MIN;
	volatile uint32_t t145 = 925471732U;

    t145 = (((x705^x706)|x707)*x708);

    if (t145 != 128U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x709 = UINT64_MAX;
	int8_t x710 = INT8_MIN;
	int8_t x711 = INT8_MIN;
	static int16_t x712 = -1;
	static volatile uint64_t t146 = 857762851127LLU;

    t146 = (((x709^x710)|x711)*x712);

    if (t146 != 1LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x713 = INT8_MAX;
	int8_t x714 = INT8_MIN;
	int16_t x715 = INT16_MAX;
	volatile int64_t x716 = -1LL;
	int64_t t147 = -3646528LL;

    t147 = (((x713^x714)|x715)*x716);

    if (t147 != 1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint32_t x717 = 355122U;
	int16_t x718 = -16383;
	int16_t x719 = INT16_MAX;
	uint32_t x720 = UINT32_MAX;
	uint32_t t148 = 8158U;

    t148 = (((x717^x718)|x719)*x720);

    if (t148 != 327681U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x722 = 20155U;
	int64_t x723 = INT64_MIN;
	volatile int64_t x724 = -1LL;
	volatile int64_t t149 = -2949364LL;

    t149 = (((x721^x722)|x723)*x724);

    if (t149 != 20154LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x725 = 26U;
	static uint32_t x726 = 2874U;
	volatile int64_t x727 = -1LL;
	int32_t x728 = -1;
	volatile int64_t t150 = 7628LL;

    t150 = (((x725^x726)|x727)*x728);

    if (t150 != 1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint16_t x729 = 2682U;
	int32_t x732 = -1;
	volatile int32_t t151 = 30822;

    t151 = (((x729^x730)|x731)*x732);

    if (t151 != -2614) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x733 = INT32_MIN;
	volatile int8_t x735 = INT8_MIN;
	int32_t t152 = -694;

    t152 = (((x733^x734)|x735)*x736);

    if (t152 != 14) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x737 = -13;
	uint16_t x738 = 60U;
	volatile int8_t x739 = INT8_MAX;
	static uint8_t x740 = 33U;
	int32_t t153 = -641;

    t153 = (((x737^x738)|x739)*x740);

    if (t153 != -33) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x741 = 23U;
	volatile int8_t x743 = INT8_MIN;
	volatile uint8_t x744 = 0U;
	int64_t t154 = 63LL;

    t154 = (((x741^x742)|x743)*x744);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x745 = UINT16_MAX;
	static int16_t x746 = 929;
	int16_t x747 = -3507;
	int8_t x748 = INT8_MIN;
	int32_t t155 = -3522;

    t155 = (((x745^x746)|x747)*x748);

    if (t155 != 53376) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x750 = -9;
	uint32_t x751 = UINT32_MAX;
	uint8_t x752 = UINT8_MAX;
	int64_t t156 = -15503040LL;

    t156 = (((x749^x750)|x751)*x752);

    if (t156 != -255LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x758 = -9;
	int8_t x759 = INT8_MIN;
	int32_t t157 = -22;

    t157 = (((x757^x758)|x759)*x760);

    if (t157 != -99081) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint16_t x762 = 10262U;
	uint16_t x763 = 6133U;
	volatile int8_t x764 = 6;
	int32_t t158 = -3378875;

    t158 = (((x761^x762)|x763)*x764);

    if (t158 != 1617285054) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x765 = -1;
	volatile int64_t x766 = INT64_MIN;
	int32_t x767 = INT32_MIN;
	int16_t x768 = -29;
	volatile int64_t t159 = 2365LL;

    t159 = (((x765^x766)|x767)*x768);

    if (t159 != 29LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x769 = 64717043U;
	static int8_t x770 = -1;
	int8_t x771 = INT8_MIN;
	int64_t x772 = -1LL;
	int64_t t160 = -27LL;

    t160 = (((x769^x770)|x771)*x772);

    if (t160 != -4294967180LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x773 = INT8_MIN;
	int32_t x774 = INT32_MIN;
	uint8_t x776 = UINT8_MAX;
	volatile uint64_t t161 = 3947LLU;

    t161 = (((x773^x774)|x775)*x776);

    if (t161 != 547608313665LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x777 = INT16_MIN;
	uint16_t x778 = UINT16_MAX;
	int64_t x779 = -2534423LL;
	volatile int16_t x780 = INT16_MIN;
	int64_t t162 = -502516LL;

    t162 = (((x777^x778)|x779)*x780);

    if (t162 != 1073774592LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x782 = 7277657106275697803LLU;
	uint8_t x783 = UINT8_MAX;
	uint64_t x784 = UINT64_MAX;
	volatile uint64_t t163 = 1084732343013923LLU;

    t163 = (((x781^x782)|x783)*x784);

    if (t163 != 7277657105448237825LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x785 = 1;
	static int64_t x786 = INT64_MIN;
	volatile uint64_t x787 = 1309LLU;
	volatile int32_t x788 = 51764855;
	uint64_t t164 = 11657728116792724LLU;

    t164 = (((x785^x786)|x787)*x788);

    if (t164 != 9223372104614971003LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x797 = INT32_MAX;
	uint64_t x798 = 145559LLU;
	static volatile uint16_t x799 = 271U;
	volatile uint16_t x800 = UINT16_MAX;

    t165 = (((x797^x798)|x799)*x800);

    if (t165 != 140725802055825LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x801 = 17U;
	int64_t x802 = INT64_MAX;
	static uint32_t x803 = 5317U;
	volatile int64_t t166 = -21014LL;

    t166 = (((x801^x802)|x803)*x804);

    if (t166 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x805 = 1U;
	volatile uint16_t x806 = 3431U;
	uint64_t x807 = UINT64_MAX;
	uint8_t x808 = 1U;
	static uint64_t t167 = UINT64_MAX;

    t167 = (((x805^x806)|x807)*x808);

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x809 = INT64_MAX;
	uint8_t x810 = 9U;
	uint64_t x811 = UINT64_MAX;
	uint64_t t168 = 65128053543LLU;

    t168 = (((x809^x810)|x811)*x812);

    if (t168 != 122LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x813 = 770;
	uint64_t x814 = UINT64_MAX;
	uint64_t x816 = 2620324429869556LLU;

    t169 = (((x813^x814)|x815)*x816);

    if (t169 != 18438883100419942948LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x817 = UINT32_MAX;
	uint32_t x818 = UINT32_MAX;
	static uint16_t x819 = 0U;
	uint64_t x820 = 4LLU;
	uint64_t t170 = 83668356782908LLU;

    t170 = (((x817^x818)|x819)*x820);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x821 = UINT16_MAX;
	int8_t x823 = -6;
	static volatile uint8_t x824 = 12U;
	volatile int64_t t171 = 3850974065163315519LL;

    t171 = (((x821^x822)|x823)*x824);

    if (t171 != -72LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x833 = -1;
	int8_t x834 = 20;
	static volatile int64_t x835 = -1LL;
	uint64_t x836 = 49782791LLU;

    t172 = (((x833^x834)|x835)*x836);

    if (t172 != 18446744073659768825LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x841 = 4;
	int8_t x842 = -10;
	int64_t x843 = INT64_MIN;
	static uint64_t x844 = 300LLU;
	uint64_t t173 = 2880618238697017LLU;

    t173 = (((x841^x842)|x843)*x844);

    if (t173 != 18446744073709547416LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x845 = INT16_MAX;
	uint8_t x846 = UINT8_MAX;
	int8_t x847 = INT8_MIN;
	volatile int8_t x848 = 14;
	int32_t t174 = 43233900;

    t174 = (((x845^x846)|x847)*x848);

    if (t174 != -1792) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x851 = INT8_MIN;
	int8_t x852 = INT8_MIN;
	volatile int64_t t175 = -32653581LL;

    t175 = (((x849^x850)|x851)*x852);

    if (t175 != 128LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x853 = INT8_MIN;
	static uint8_t x854 = 27U;
	int8_t x855 = INT8_MAX;
	static int16_t x856 = 839;
	volatile int32_t t176 = 0;

    t176 = (((x853^x854)|x855)*x856);

    if (t176 != -839) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x857 = -88;
	int8_t x858 = INT8_MIN;
	int32_t x859 = INT32_MIN;
	int8_t x860 = 0;
	int32_t t177 = -50;

    t177 = (((x857^x858)|x859)*x860);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x865 = -171879213783084LL;
	static int32_t x867 = INT32_MIN;
	static volatile int16_t x868 = INT16_MIN;

    t178 = (((x865^x866)|x867)*x868);

    if (t178 != 34899537264640LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x869 = INT32_MIN;
	volatile int32_t x871 = INT32_MIN;

    t179 = (((x869^x870)|x871)*x872);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x873 = -5;
	volatile int8_t x876 = -11;
	int64_t t180 = 3349125817352441LL;

    t180 = (((x873^x874)|x875)*x876);

    if (t180 != 11LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x877 = 1040727584LLU;
	int8_t x879 = 7;
	volatile int64_t x880 = INT64_MAX;
	static volatile uint64_t t181 = 9404LLU;

    t181 = (((x877^x878)|x879)*x880);

    if (t181 != 9223372035814048217LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x881 = 7739988LLU;
	int16_t x883 = INT16_MAX;
	uint8_t x884 = 58U;
	volatile uint64_t t182 = 3LLU;

    t182 = (((x881^x882)|x883)*x884);

    if (t182 != 18446744073261023174LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x885 = -1915;
	volatile int32_t x886 = -1;
	volatile int8_t x888 = INT8_MIN;
	volatile int32_t t183 = 454;

    t183 = (((x885^x886)|x887)*x888);

    if (t183 != -1032064) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x889 = 50U;
	volatile int16_t x890 = INT16_MIN;
	volatile int32_t x892 = INT32_MAX;
	int32_t t184 = 756;

    t184 = (((x889^x890)|x891)*x892);

    if (t184 != -2147483647) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x897 = -10;
	int32_t x898 = 120587044;
	int16_t x899 = 25;
	int8_t x900 = -1;
	int32_t t185 = 902;

    t185 = (((x897^x898)|x899)*x900);

    if (t185 != 120587045) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x901 = UINT32_MAX;
	int32_t x902 = -1;
	int8_t x903 = INT8_MAX;
	static int16_t x904 = -30;
	volatile uint32_t t186 = 584639U;

    t186 = (((x901^x902)|x903)*x904);

    if (t186 != 4294963486U) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x912 = UINT64_MAX;
	static volatile uint64_t t187 = 453LLU;

    t187 = (((x909^x910)|x911)*x912);

    if (t187 != 58529340413055111LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t t188 = 99108312230338LL;

    t188 = (((x913^x914)|x915)*x916);

    if (t188 != -2LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x917 = INT8_MIN;
	int16_t x919 = -24;
	uint32_t x920 = 426950U;
	uint32_t t189 = 1879874191U;

    t189 = (((x917^x918)|x919)*x920);

    if (t189 != 4294540346U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x921 = 3091209002LLU;
	int16_t x923 = INT16_MIN;
	static int64_t x924 = INT64_MIN;
	uint64_t t190 = 44331873682178LLU;

    t190 = (((x921^x922)|x923)*x924);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x926 = UINT16_MAX;
	volatile int8_t x927 = -1;
	int16_t x928 = 449;
	int32_t t191 = -230;

    t191 = (((x925^x926)|x927)*x928);

    if (t191 != -449) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x929 = -1;
	uint8_t x930 = UINT8_MAX;
	static int16_t x931 = INT16_MAX;
	int8_t x932 = INT8_MIN;
	int32_t t192 = 747184164;

    t192 = (((x929^x930)|x931)*x932);

    if (t192 != 128) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x937 = 2449U;
	int32_t x938 = 13;
	int16_t x939 = INT16_MIN;
	int8_t x940 = 44;
	volatile int32_t t193 = 1523311;

    t193 = (((x937^x938)|x939)*x940);

    if (t193 != -1333552) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x945 = 2U;
	uint8_t x946 = UINT8_MAX;
	int64_t x947 = -1LL;

    t194 = (((x945^x946)|x947)*x948);

    if (t194 != -430LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x949 = 177;
	static int32_t x950 = -1;
	static volatile int64_t x951 = 1878028296843LL;
	int8_t x952 = INT8_MAX;
	int64_t t195 = -8707735267LL;

    t195 = (((x949^x950)|x951)*x952);

    if (t195 != -6223LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x953 = 71631141221610LLU;
	int8_t x954 = INT8_MIN;
	int32_t x955 = -1;
	static int64_t x956 = INT64_MAX;
	volatile uint64_t t196 = 35746067LLU;

    t196 = (((x953^x954)|x955)*x956);

    if (t196 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x957 = 0U;
	int16_t x958 = INT16_MIN;
	int64_t x959 = 9LL;
	volatile int64_t x960 = 6569344LL;
	int64_t t197 = 256765093LL;

    t197 = (((x957^x958)|x959)*x960);

    if (t197 != 28214902431033728LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x961 = -1;
	int8_t x962 = 1;
	int8_t x963 = 6;
	volatile uint32_t t198 = 329U;

    t198 = (((x961^x962)|x963)*x964);

    if (t198 != 2U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x969 = 0;
	uint32_t x970 = 1411275789U;
	volatile uint64_t t199 = 973089149LLU;

    t199 = (((x969^x970)|x971)*x972);

    if (t199 != 9214740222718288225LLU) { NG(); } else { ; }
	
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

