
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

static uint32_t x10 = UINT32_MAX;
int32_t x14 = 20;
uint8_t x15 = UINT8_MAX;
int8_t x16 = 2;
volatile int32_t x33 = 4;
volatile int16_t x34 = -54;
int8_t x40 = INT8_MAX;
uint32_t t8 = 1U;
static int16_t x49 = 378;
int32_t x52 = INT32_MIN;
int16_t x55 = 1;
int32_t x60 = -55;
int8_t x64 = 6;
static uint64_t t13 = 149577575229030LLU;
static int16_t x71 = INT16_MAX;
static int32_t t14 = -12159;
int32_t x76 = -1;
int32_t x78 = -1;
int16_t x84 = INT16_MIN;
int32_t t19 = -515337;
int8_t x93 = -54;
uint32_t x98 = 776463906U;
volatile uint64_t t21 = 3004859008LLU;
int16_t x101 = -30;
int32_t x105 = INT32_MIN;
int16_t x112 = -1364;
volatile int64_t x116 = INT64_MAX;
int64_t t25 = 616175281029093LL;
uint32_t x119 = UINT32_MAX;
uint64_t x124 = 9701439123LLU;
uint64_t x126 = 111LLU;
volatile uint64_t t28 = 517LLU;
int32_t x129 = INT32_MIN;
volatile int64_t t30 = 259695717729559LL;
uint8_t x137 = UINT8_MAX;
volatile int64_t x147 = 45394035454206LL;
int64_t x160 = INT64_MIN;
static uint32_t x163 = UINT32_MAX;
int8_t x164 = INT8_MIN;
int64_t x165 = INT64_MIN;
int32_t x167 = INT32_MIN;
int8_t x177 = INT8_MAX;
int32_t x180 = -22;
static uint64_t x182 = UINT64_MAX;
volatile int16_t x187 = -1;
int16_t x188 = INT16_MIN;
volatile int64_t x189 = -3896144514046LL;
int8_t x192 = -2;
volatile uint32_t t44 = 687034U;
static int8_t x198 = INT8_MIN;
volatile int32_t t45 = -18284;
static volatile int32_t x201 = -577;
int16_t x211 = -175;
uint8_t x214 = UINT8_MAX;
int8_t x221 = INT8_MIN;
uint8_t x230 = 3U;
static int16_t x232 = INT16_MAX;
static uint32_t t51 = 12914U;
int8_t x237 = INT8_MAX;
int32_t t53 = 8280815;
int64_t t54 = -73LL;
int16_t x249 = -7;
static volatile int32_t t55 = 31;
int32_t x256 = 37;
volatile int32_t t56 = -10;
uint16_t x258 = 1157U;
int64_t x265 = -1LL;
int64_t t59 = 43425772623589709LL;
int16_t x272 = INT16_MIN;
volatile int64_t t60 = -93456085239410LL;
volatile uint16_t x276 = UINT16_MAX;
volatile uint32_t t61 = 13015U;
int16_t x290 = 681;
volatile int8_t x291 = 11;
volatile int64_t x299 = INT64_MIN;
int8_t x305 = -18;
int32_t t67 = 10031;
static volatile int64_t x311 = 13848386972724LL;
volatile int32_t x313 = -22011106;
int32_t x319 = 7832;
uint16_t x322 = UINT16_MAX;
uint64_t t71 = 62013088582782082LLU;
int8_t x332 = -1;
int8_t x335 = -1;
static int64_t x336 = -1LL;
uint32_t x339 = UINT32_MAX;
int32_t x347 = INT32_MIN;
uint64_t x352 = 1LLU;
int32_t t77 = -12;
uint64_t x358 = UINT64_MAX;
uint64_t x365 = 24LLU;
int8_t x369 = INT8_MIN;
uint8_t x379 = 2U;
volatile int32_t x380 = INT32_MIN;
volatile int16_t x381 = -1;
static int16_t x385 = -3;
int32_t t86 = 35132467;
volatile uint8_t x394 = 0U;
uint32_t x398 = 1201380560U;
uint32_t x399 = 1038U;
int8_t x403 = 4;
volatile uint32_t t92 = 23997691U;
static int16_t x415 = -68;
int64_t x419 = -45LL;
int16_t x431 = 1237;
int64_t x436 = 328865761290LL;
volatile uint32_t t98 = 13U;
static uint8_t x452 = 18U;
int32_t x453 = INT32_MAX;
volatile int32_t x458 = -1;
static uint8_t x459 = UINT8_MAX;
int16_t x468 = 1202;
volatile uint16_t x471 = UINT16_MAX;
int16_t x473 = 5;
int8_t x475 = INT8_MAX;
int64_t x479 = INT64_MIN;
uint64_t x480 = 3664715LLU;
volatile int32_t t107 = 375700;
uint32_t x483 = 1046924U;
int64_t x484 = 4036218343443111188LL;
static int16_t x498 = -1;
int8_t x503 = INT8_MIN;
int64_t t111 = -87LL;
static int32_t x510 = INT32_MIN;
volatile uint16_t x511 = 11860U;
static int64_t x514 = -14666234516747LL;
int64_t t114 = 2622584685089LL;
uint32_t x517 = 10U;
static int8_t x518 = -1;
uint8_t x519 = 8U;
int64_t x521 = -1LL;
static int8_t x533 = INT8_MIN;
int8_t x535 = INT8_MIN;
int32_t t118 = 2118347;
uint32_t x542 = 266U;
static int64_t x549 = -3606206LL;
static int64_t x551 = -40687264LL;
volatile int32_t x558 = -1;
int32_t t125 = -1;
static uint16_t x582 = UINT16_MAX;
volatile int64_t x583 = INT64_MIN;
static volatile uint64_t x584 = 34206086232674393LLU;
int16_t x587 = INT16_MAX;
uint32_t t129 = 870U;
volatile int64_t t130 = 84859334898479593LL;
int16_t x597 = INT16_MAX;
uint16_t x599 = 3U;
volatile uint16_t x604 = 1U;
int32_t x613 = -1;
int8_t x616 = 11;
volatile uint32_t x631 = 1120444519U;
int32_t x648 = INT32_MIN;
int16_t x651 = -1;
uint64_t x652 = 4235548640390700LLU;
int32_t x658 = 179;
uint32_t x661 = 2460350U;
static uint32_t t145 = 126255U;
uint8_t x667 = 0U;
int64_t x674 = INT64_MIN;
uint64_t x678 = 9208LLU;
int32_t t150 = 90961229;
uint8_t x687 = 0U;
uint16_t x693 = 2577U;
static int32_t t153 = 3134;
int64_t x720 = 3813393LL;
static int64_t x726 = 1LL;
int64_t x737 = 800285492509LL;
uint32_t x743 = UINT32_MAX;
int8_t x745 = INT8_MAX;
static int64_t x751 = -25191383915LL;
uint64_t x752 = 6648834156094469LLU;
volatile uint64_t t166 = 46430235LLU;
volatile int16_t x756 = INT16_MAX;
int64_t x760 = 199170LL;
static uint64_t x761 = 14078161446518671LLU;
int8_t x763 = -1;
volatile uint64_t x768 = UINT64_MAX;
static int32_t x770 = -1;
volatile int32_t t171 = 5042844;
static uint16_t x773 = UINT16_MAX;
volatile int64_t x774 = INT64_MIN;
int8_t x776 = INT8_MIN;
uint8_t x777 = 20U;
int64_t x778 = -118732129LL;
volatile int32_t x780 = -1;
volatile int32_t x796 = INT32_MAX;
volatile int32_t t177 = -225191096;
uint16_t x811 = 341U;
int8_t x821 = INT8_MAX;
int16_t x826 = -1299;
int16_t x828 = -1;
uint64_t x831 = UINT64_MAX;
volatile int64_t x840 = 219LL;
int16_t x849 = -1;
int64_t x853 = -1LL;
uint32_t x871 = 0U;
static volatile uint32_t t192 = 2612U;
uint32_t x882 = 135602532U;
uint64_t x887 = UINT64_MAX;
volatile uint8_t x898 = 1U;
int32_t t197 = 6803874;
uint16_t x904 = 51U;
uint16_t x907 = UINT16_MAX;


void f0(void) {
    	uint64_t x9 = UINT64_MAX;
	uint8_t x11 = 2U;
	uint32_t x12 = 649U;
	volatile uint64_t t0 = 536551314189059LLU;

    t0 = ((x9+x10)^(x11<=x12));

    if (t0 != 4294967295LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x13 = 3663U;
	volatile int32_t t1 = -19753;

    t1 = ((x13+x14)^(x15<=x16));

    if (t1 != 3683) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int32_t x17 = -361341419;
	uint8_t x18 = 1U;
	volatile int64_t x19 = 23283048LL;
	volatile int32_t x20 = 176664488;
	int32_t t2 = -1;

    t2 = ((x17+x18)^(x19<=x20));

    if (t2 != -361341417) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x25 = INT8_MAX;
	static volatile int8_t x26 = INT8_MIN;
	static uint8_t x27 = UINT8_MAX;
	int64_t x28 = 201570LL;
	int32_t t3 = 151600;

    t3 = ((x25+x26)^(x27<=x28));

    if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x29 = UINT64_MAX;
	uint32_t x30 = 6294343U;
	int8_t x31 = -1;
	int16_t x32 = INT16_MAX;
	uint64_t t4 = 48447333198098LLU;

    t4 = ((x29+x30)^(x31<=x32));

    if (t4 != 6294343LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x35 = UINT8_MAX;
	uint32_t x36 = UINT32_MAX;
	int32_t t5 = 408503;

    t5 = ((x33+x34)^(x35<=x36));

    if (t5 != -49) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x37 = INT8_MIN;
	uint8_t x38 = 90U;
	volatile uint8_t x39 = 118U;
	int32_t t6 = 12;

    t6 = ((x37+x38)^(x39<=x40));

    if (t6 != -37) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x41 = -1046;
	uint8_t x42 = UINT8_MAX;
	int32_t x43 = 14361236;
	int64_t x44 = -1LL;
	static int32_t t7 = 1358;

    t7 = ((x41+x42)^(x43<=x44));

    if (t7 != -791) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x45 = UINT32_MAX;
	volatile int32_t x46 = INT32_MIN;
	uint16_t x47 = 6538U;
	int32_t x48 = 197;

    t8 = ((x45+x46)^(x47<=x48));

    if (t8 != 2147483647U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x50 = -25;
	uint32_t x51 = UINT32_MAX;
	volatile int32_t t9 = 946922;

    t9 = ((x49+x50)^(x51<=x52));

    if (t9 != 353) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x53 = UINT8_MAX;
	volatile int64_t x54 = -1LL;
	uint16_t x56 = 16U;
	static int64_t t10 = 1101593093193719LL;

    t10 = ((x53+x54)^(x55<=x56));

    if (t10 != 255LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = -1;
	volatile int16_t x58 = INT16_MIN;
	static uint8_t x59 = 10U;
	volatile int32_t t11 = 43553;

    t11 = ((x57+x58)^(x59<=x60));

    if (t11 != -32769) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x61 = UINT8_MAX;
	static int8_t x62 = 5;
	int32_t x63 = -1;
	static int32_t t12 = 11653017;

    t12 = ((x61+x62)^(x63<=x64));

    if (t12 != 261) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x65 = -2787;
	uint64_t x66 = 55609751LLU;
	volatile int32_t x67 = 0;
	volatile int32_t x68 = INT32_MIN;

    t13 = ((x65+x66)^(x67<=x68));

    if (t13 != 55606964LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = INT8_MIN;
	static int8_t x70 = INT8_MIN;
	uint32_t x72 = UINT32_MAX;

    t14 = ((x69+x70)^(x71<=x72));

    if (t14 != -255) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x73 = 490549389LLU;
	static uint8_t x74 = 3U;
	static int32_t x75 = -1;
	uint64_t t15 = 61111256766LLU;

    t15 = ((x73+x74)^(x75<=x76));

    if (t15 != 490549393LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x77 = INT32_MAX;
	int32_t x79 = INT32_MIN;
	uint32_t x80 = 1015U;
	int32_t t16 = 276;

    t16 = ((x77+x78)^(x79<=x80));

    if (t16 != 2147483646) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x81 = UINT64_MAX;
	static uint8_t x82 = 8U;
	int16_t x83 = INT16_MIN;
	volatile uint64_t t17 = 14703776LLU;

    t17 = ((x81+x82)^(x83<=x84));

    if (t17 != 6LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint16_t x85 = 1U;
	static uint16_t x86 = 347U;
	volatile int16_t x87 = INT16_MIN;
	int64_t x88 = INT64_MAX;
	volatile int32_t t18 = 686355714;

    t18 = ((x85+x86)^(x87<=x88));

    if (t18 != 349) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x89 = 1121U;
	static int32_t x90 = 13;
	static int64_t x91 = -295LL;
	uint32_t x92 = 12081029U;

    t19 = ((x89+x90)^(x91<=x92));

    if (t19 != 1135) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x94 = INT32_MAX;
	uint64_t x95 = 787045021825595248LLU;
	int32_t x96 = -242988574;
	static volatile int32_t t20 = -7;

    t20 = ((x93+x94)^(x95<=x96));

    if (t20 != 2147483592) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x97 = 185279692595641416LLU;
	int8_t x99 = -1;
	uint16_t x100 = 7724U;

    t21 = ((x97+x98)^(x99<=x100));

    if (t21 != 185279693372105323LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x102 = INT8_MIN;
	static int64_t x103 = INT64_MIN;
	static int32_t x104 = -336636;
	int32_t t22 = -3;

    t22 = ((x101+x102)^(x103<=x104));

    if (t22 != -157) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x106 = -1LL;
	int64_t x107 = INT64_MIN;
	uint32_t x108 = 2U;
	static int64_t t23 = -3942824283LL;

    t23 = ((x105+x106)^(x107<=x108));

    if (t23 != -2147483650LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x109 = -1LL;
	static int16_t x110 = -7358;
	int64_t x111 = 0LL;
	volatile int64_t t24 = 66940LL;

    t24 = ((x109+x110)^(x111<=x112));

    if (t24 != -7359LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x113 = UINT16_MAX;
	int64_t x114 = INT64_MIN;
	int16_t x115 = -1;

    t25 = ((x113+x114)^(x115<=x116));

    if (t25 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x117 = INT8_MAX;
	uint64_t x118 = 52216880LLU;
	int64_t x120 = -1LL;
	volatile uint64_t t26 = 12439670014LLU;

    t26 = ((x117+x118)^(x119<=x120));

    if (t26 != 52217007LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x121 = INT16_MIN;
	static int8_t x122 = INT8_MIN;
	static uint16_t x123 = UINT16_MAX;
	int32_t t27 = -39887;

    t27 = ((x121+x122)^(x123<=x124));

    if (t27 != -32895) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x125 = INT32_MIN;
	int32_t x127 = -15105629;
	uint16_t x128 = 612U;

    t28 = ((x125+x126)^(x127<=x128));

    if (t28 != 18446744071562068078LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x130 = 3641953LLU;
	uint64_t x131 = 10835155355LLU;
	int8_t x132 = INT8_MIN;
	volatile uint64_t t29 = 4650LLU;

    t29 = ((x129+x130)^(x131<=x132));

    if (t29 != 18446744071565709920LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x133 = INT64_MIN;
	static volatile int64_t x134 = INT64_MAX;
	int8_t x135 = 25;
	volatile uint16_t x136 = UINT16_MAX;

    t30 = ((x133+x134)^(x135<=x136));

    if (t30 != -2LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x138 = INT16_MIN;
	int8_t x139 = -1;
	volatile int8_t x140 = 3;
	volatile int32_t t31 = -7938658;

    t31 = ((x137+x138)^(x139<=x140));

    if (t31 != -32514) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int32_t x141 = -1;
	int8_t x142 = -1;
	int16_t x143 = -1;
	volatile int32_t x144 = INT32_MAX;
	volatile int32_t t32 = 368;

    t32 = ((x141+x142)^(x143<=x144));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x145 = -1;
	volatile uint32_t x146 = 14U;
	static uint32_t x148 = 80291577U;
	volatile uint32_t t33 = 30902091U;

    t33 = ((x145+x146)^(x147<=x148));

    if (t33 != 13U) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x149 = 335U;
	int32_t x150 = 1425792;
	uint64_t x151 = 252LLU;
	int32_t x152 = INT32_MIN;
	static int32_t t34 = -17;

    t34 = ((x149+x150)^(x151<=x152));

    if (t34 != 1426126) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x157 = UINT16_MAX;
	volatile int16_t x158 = -1;
	int32_t x159 = -1;
	static int32_t t35 = -3143375;

    t35 = ((x157+x158)^(x159<=x160));

    if (t35 != 65534) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x161 = 833U;
	int64_t x162 = INT64_MIN;
	static int64_t t36 = -5LL;

    t36 = ((x161+x162)^(x163<=x164));

    if (t36 != -9223372036854774975LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x166 = UINT32_MAX;
	volatile int16_t x168 = -1;
	int64_t t37 = -1577713LL;

    t37 = ((x165+x166)^(x167<=x168));

    if (t37 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x169 = -14;
	uint16_t x170 = 134U;
	int16_t x171 = 58;
	int64_t x172 = 24LL;
	int32_t t38 = 100156;

    t38 = ((x169+x170)^(x171<=x172));

    if (t38 != 120) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x173 = -1LL;
	static int16_t x174 = INT16_MAX;
	int8_t x175 = INT8_MIN;
	uint8_t x176 = UINT8_MAX;
	static int64_t t39 = -442135LL;

    t39 = ((x173+x174)^(x175<=x176));

    if (t39 != 32767LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x178 = -1;
	volatile uint64_t x179 = 213LLU;
	int32_t t40 = 0;

    t40 = ((x177+x178)^(x179<=x180));

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x181 = INT32_MIN;
	int64_t x183 = 2731649700896857LL;
	volatile uint8_t x184 = 0U;
	uint64_t t41 = 971210670LLU;

    t41 = ((x181+x182)^(x183<=x184));

    if (t41 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x185 = 3195;
	static uint8_t x186 = 6U;
	volatile int32_t t42 = 14585375;

    t42 = ((x185+x186)^(x187<=x188));

    if (t42 != 3201) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x190 = INT32_MIN;
	volatile int16_t x191 = INT16_MIN;
	static int64_t t43 = -6LL;

    t43 = ((x189+x190)^(x191<=x192));

    if (t43 != -3898291997693LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x193 = 1449841;
	uint32_t x194 = 21U;
	volatile int16_t x195 = INT16_MAX;
	int16_t x196 = -1;

    t44 = ((x193+x194)^(x195<=x196));

    if (t44 != 1449862U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x197 = -888;
	int32_t x199 = INT32_MIN;
	volatile uint16_t x200 = 0U;

    t45 = ((x197+x198)^(x199<=x200));

    if (t45 != -1015) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x202 = -1;
	int16_t x203 = -10140;
	int32_t x204 = INT32_MAX;
	int32_t t46 = -156151460;

    t46 = ((x201+x202)^(x203<=x204));

    if (t46 != -577) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x209 = -13214412058LL;
	int64_t x210 = -1LL;
	int16_t x212 = INT16_MIN;
	static int64_t t47 = -961561322439LL;

    t47 = ((x209+x210)^(x211<=x212));

    if (t47 != -13214412059LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x213 = INT16_MAX;
	uint16_t x215 = 18007U;
	int64_t x216 = -1107788997031424546LL;
	volatile int32_t t48 = -1072173;

    t48 = ((x213+x214)^(x215<=x216));

    if (t48 != 33022) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x217 = INT32_MIN;
	static int8_t x218 = INT8_MAX;
	volatile int16_t x219 = -1;
	static uint16_t x220 = 7548U;
	volatile int32_t t49 = 206398;

    t49 = ((x217+x218)^(x219<=x220));

    if (t49 != -2147483522) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x222 = -1;
	volatile uint8_t x223 = 10U;
	uint32_t x224 = UINT32_MAX;
	int32_t t50 = 736687723;

    t50 = ((x221+x222)^(x223<=x224));

    if (t50 != -130) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x229 = 121U;
	volatile uint8_t x231 = 56U;

    t51 = ((x229+x230)^(x231<=x232));

    if (t51 != 125U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x238 = UINT8_MAX;
	volatile uint64_t x239 = 1LLU;
	volatile int32_t x240 = 13202137;
	int32_t t52 = 8;

    t52 = ((x237+x238)^(x239<=x240));

    if (t52 != 383) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x241 = -633;
	uint8_t x242 = UINT8_MAX;
	volatile uint32_t x243 = 53U;
	volatile int16_t x244 = -6659;

    t53 = ((x241+x242)^(x243<=x244));

    if (t53 != -377) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x245 = -1LL;
	volatile uint32_t x246 = UINT32_MAX;
	int64_t x247 = INT64_MIN;
	volatile int16_t x248 = INT16_MIN;

    t54 = ((x245+x246)^(x247<=x248));

    if (t54 != 4294967295LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x250 = -1;
	static uint8_t x251 = 116U;
	static int64_t x252 = INT64_MIN;

    t55 = ((x249+x250)^(x251<=x252));

    if (t55 != -8) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x253 = INT8_MIN;
	int16_t x254 = INT16_MIN;
	volatile int64_t x255 = -2566LL;

    t56 = ((x253+x254)^(x255<=x256));

    if (t56 != -32895) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x257 = INT16_MAX;
	static int16_t x259 = -1;
	int16_t x260 = -1;
	volatile int32_t t57 = -900;

    t57 = ((x257+x258)^(x259<=x260));

    if (t57 != 33925) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x261 = 0;
	int16_t x262 = -1;
	volatile int16_t x263 = 2801;
	volatile int32_t x264 = INT32_MIN;
	volatile int32_t t58 = 529913;

    t58 = ((x261+x262)^(x263<=x264));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x266 = 12708;
	volatile int64_t x267 = INT64_MIN;
	int16_t x268 = 0;

    t59 = ((x265+x266)^(x267<=x268));

    if (t59 != 12706LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x269 = -1LL;
	uint8_t x270 = 40U;
	uint64_t x271 = 44131152LLU;

    t60 = ((x269+x270)^(x271<=x272));

    if (t60 != 38LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x273 = INT32_MIN;
	uint32_t x274 = UINT32_MAX;
	volatile int32_t x275 = 59158;

    t61 = ((x273+x274)^(x275<=x276));

    if (t61 != 2147483646U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x277 = INT16_MIN;
	int32_t x278 = -1;
	static int8_t x279 = -9;
	int64_t x280 = -119751074224260027LL;
	int32_t t62 = 0;

    t62 = ((x277+x278)^(x279<=x280));

    if (t62 != -32769) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x285 = -6575;
	static int32_t x286 = -1;
	int8_t x287 = -1;
	volatile uint16_t x288 = 815U;
	volatile int32_t t63 = -1;

    t63 = ((x285+x286)^(x287<=x288));

    if (t63 != -6575) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x289 = 549U;
	int16_t x292 = INT16_MIN;
	static uint32_t t64 = 106U;

    t64 = ((x289+x290)^(x291<=x292));

    if (t64 != 1230U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x297 = 1U;
	uint64_t x298 = 578642463013LLU;
	uint64_t x300 = UINT64_MAX;
	volatile uint64_t t65 = 16890909953281LLU;

    t65 = ((x297+x298)^(x299<=x300));

    if (t65 != 578642463015LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x301 = INT16_MAX;
	int16_t x302 = INT16_MAX;
	int8_t x303 = INT8_MIN;
	static uint8_t x304 = 59U;
	static int32_t t66 = -28;

    t66 = ((x301+x302)^(x303<=x304));

    if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x306 = 64;
	volatile int32_t x307 = INT32_MAX;
	int16_t x308 = INT16_MIN;

    t67 = ((x305+x306)^(x307<=x308));

    if (t67 != 46) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x309 = INT8_MIN;
	int8_t x310 = 62;
	int16_t x312 = -2692;
	int32_t t68 = -29;

    t68 = ((x309+x310)^(x311<=x312));

    if (t68 != -66) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x314 = 1;
	int32_t x315 = 5560678;
	uint16_t x316 = 3303U;
	int32_t t69 = -79390;

    t69 = ((x313+x314)^(x315<=x316));

    if (t69 != -22011105) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x317 = INT32_MAX;
	static volatile int16_t x318 = -1;
	uint32_t x320 = 695427356U;
	int32_t t70 = INT32_MAX;

    t70 = ((x317+x318)^(x319<=x320));

    if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x321 = 28983670200LLU;
	int16_t x323 = INT16_MIN;
	static int8_t x324 = INT8_MAX;

    t71 = ((x321+x322)^(x323<=x324));

    if (t71 != 28983735734LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x329 = UINT64_MAX;
	int32_t x330 = INT32_MAX;
	volatile uint16_t x331 = 6921U;
	uint64_t t72 = 41826LLU;

    t72 = ((x329+x330)^(x331<=x332));

    if (t72 != 2147483646LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x333 = -1;
	volatile uint16_t x334 = UINT16_MAX;
	volatile int32_t t73 = -35948;

    t73 = ((x333+x334)^(x335<=x336));

    if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x337 = INT16_MIN;
	static int64_t x338 = -1319786096466976143LL;
	static int32_t x340 = INT32_MAX;
	int64_t t74 = -2922932115LL;

    t74 = ((x337+x338)^(x339<=x340));

    if (t74 != -1319786096467008911LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x341 = 1;
	static int64_t x342 = INT64_MIN;
	uint64_t x343 = UINT64_MAX;
	static int8_t x344 = INT8_MAX;
	volatile int64_t t75 = 2032615869392549LL;

    t75 = ((x341+x342)^(x343<=x344));

    if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x345 = 0U;
	int8_t x346 = 10;
	int8_t x348 = 2;
	static int32_t t76 = -83;

    t76 = ((x345+x346)^(x347<=x348));

    if (t76 != 11) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x349 = UINT16_MAX;
	static int16_t x350 = INT16_MAX;
	uint16_t x351 = UINT16_MAX;

    t77 = ((x349+x350)^(x351<=x352));

    if (t77 != 98302) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x353 = 132141819259LLU;
	volatile uint8_t x354 = UINT8_MAX;
	int8_t x355 = INT8_MAX;
	volatile int32_t x356 = -1;
	static uint64_t t78 = 1LLU;

    t78 = ((x353+x354)^(x355<=x356));

    if (t78 != 132141819514LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x357 = 2067638105917LLU;
	int8_t x359 = INT8_MAX;
	uint64_t x360 = 31494831071LLU;
	volatile uint64_t t79 = 380LLU;

    t79 = ((x357+x358)^(x359<=x360));

    if (t79 != 2067638105917LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x361 = INT16_MAX;
	volatile int8_t x362 = INT8_MIN;
	static uint8_t x363 = 71U;
	int32_t x364 = INT32_MAX;
	int32_t t80 = -1661274;

    t80 = ((x361+x362)^(x363<=x364));

    if (t80 != 32638) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x366 = INT32_MIN;
	int16_t x367 = -1;
	uint32_t x368 = UINT32_MAX;
	volatile uint64_t t81 = 355536LLU;

    t81 = ((x365+x366)^(x367<=x368));

    if (t81 != 18446744071562067993LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x370 = INT16_MIN;
	volatile int64_t x371 = INT64_MIN;
	volatile uint32_t x372 = 33325918U;
	int32_t t82 = -3185;

    t82 = ((x369+x370)^(x371<=x372));

    if (t82 != -32895) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x373 = -1LL;
	int32_t x374 = INT32_MIN;
	volatile int32_t x375 = INT32_MIN;
	volatile int16_t x376 = -49;
	int64_t t83 = -456434885719129LL;

    t83 = ((x373+x374)^(x375<=x376));

    if (t83 != -2147483650LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x377 = -4;
	volatile uint16_t x378 = UINT16_MAX;
	int32_t t84 = -225;

    t84 = ((x377+x378)^(x379<=x380));

    if (t84 != 65531) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x382 = INT32_MAX;
	volatile int16_t x383 = -3692;
	static int64_t x384 = -1LL;
	int32_t t85 = INT32_MAX;

    t85 = ((x381+x382)^(x383<=x384));

    if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x386 = -1;
	int64_t x387 = -257198473497239841LL;
	uint32_t x388 = 1U;

    t86 = ((x385+x386)^(x387<=x388));

    if (t86 != -3) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x389 = 9454406003032LL;
	volatile int32_t x390 = 2670;
	int8_t x391 = -1;
	uint64_t x392 = 19LLU;
	static int64_t t87 = 1689167709LL;

    t87 = ((x389+x390)^(x391<=x392));

    if (t87 != 9454406005702LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x393 = INT8_MIN;
	static volatile uint16_t x395 = 414U;
	int32_t x396 = INT32_MIN;
	volatile int32_t t88 = -209302918;

    t88 = ((x393+x394)^(x395<=x396));

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x397 = 7990115906549417LLU;
	uint16_t x400 = 48U;
	volatile uint64_t t89 = 2507849105797092514LLU;

    t89 = ((x397+x398)^(x399<=x400));

    if (t89 != 7990117107929977LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x401 = -5;
	static int16_t x402 = INT16_MIN;
	uint16_t x404 = 721U;
	volatile int32_t t90 = -3124351;

    t90 = ((x401+x402)^(x403<=x404));

    if (t90 != -32774) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x405 = UINT16_MAX;
	int8_t x406 = INT8_MAX;
	int16_t x407 = INT16_MIN;
	static uint64_t x408 = 172738LLU;
	volatile int32_t t91 = 11999;

    t91 = ((x405+x406)^(x407<=x408));

    if (t91 != 65662) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x409 = -98540;
	uint32_t x410 = 157U;
	int16_t x411 = INT16_MAX;
	uint32_t x412 = 30459050U;

    t92 = ((x409+x410)^(x411<=x412));

    if (t92 != 4294868912U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x413 = UINT64_MAX;
	static uint64_t x414 = 1259935145179LLU;
	static volatile uint32_t x416 = 13U;
	volatile uint64_t t93 = 4125357782863357LLU;

    t93 = ((x413+x414)^(x415<=x416));

    if (t93 != 1259935145178LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x417 = 0U;
	int32_t x418 = INT32_MIN;
	int64_t x420 = INT64_MAX;
	volatile int32_t t94 = -1588;

    t94 = ((x417+x418)^(x419<=x420));

    if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x421 = 5250;
	int32_t x422 = -6401199;
	static uint16_t x423 = UINT16_MAX;
	volatile int32_t x424 = INT32_MIN;
	volatile int32_t t95 = -28392;

    t95 = ((x421+x422)^(x423<=x424));

    if (t95 != -6395949) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x425 = -1;
	int32_t x426 = -180301;
	volatile int32_t x427 = INT32_MIN;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t96 = -5363;

    t96 = ((x425+x426)^(x427<=x428));

    if (t96 != -180301) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x429 = -1;
	uint8_t x430 = 16U;
	static int32_t x432 = 66;
	int32_t t97 = 5;

    t97 = ((x429+x430)^(x431<=x432));

    if (t97 != 15) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x433 = UINT32_MAX;
	int8_t x434 = INT8_MAX;
	int8_t x435 = -1;

    t98 = ((x433+x434)^(x435<=x436));

    if (t98 != 127U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x445 = 2U;
	int8_t x446 = INT8_MAX;
	int8_t x447 = 1;
	uint16_t x448 = 158U;
	static int32_t t99 = 6123;

    t99 = ((x445+x446)^(x447<=x448));

    if (t99 != 128) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x449 = -1;
	int16_t x450 = 2;
	uint16_t x451 = UINT16_MAX;
	volatile int32_t t100 = 1;

    t100 = ((x449+x450)^(x451<=x452));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x454 = -1;
	int32_t x455 = -1;
	int8_t x456 = -1;
	int32_t t101 = INT32_MAX;

    t101 = ((x453+x454)^(x455<=x456));

    if (t101 != INT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x457 = INT16_MAX;
	int16_t x460 = INT16_MIN;
	volatile int32_t t102 = 50517295;

    t102 = ((x457+x458)^(x459<=x460));

    if (t102 != 32766) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x461 = 427290421980641LL;
	volatile int32_t x462 = 2;
	uint8_t x463 = UINT8_MAX;
	volatile uint16_t x464 = 6077U;
	int64_t t103 = -266033412465LL;

    t103 = ((x461+x462)^(x463<=x464));

    if (t103 != 427290421980642LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x465 = -8;
	uint16_t x466 = 372U;
	static int16_t x467 = -1;
	int32_t t104 = 324609;

    t104 = ((x465+x466)^(x467<=x468));

    if (t104 != 365) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x469 = 2U;
	uint64_t x470 = UINT64_MAX;
	static volatile int16_t x472 = INT16_MAX;
	volatile uint64_t t105 = 9625406921551LLU;

    t105 = ((x469+x470)^(x471<=x472));

    if (t105 != 1LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x474 = INT8_MIN;
	static volatile int8_t x476 = -1;
	volatile int32_t t106 = -7355697;

    t106 = ((x473+x474)^(x475<=x476));

    if (t106 != -123) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x477 = 32;
	int8_t x478 = INT8_MIN;

    t107 = ((x477+x478)^(x479<=x480));

    if (t107 != -96) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x481 = 110U;
	int8_t x482 = -1;
	int32_t t108 = 45575837;

    t108 = ((x481+x482)^(x483<=x484));

    if (t108 != 108) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x489 = INT32_MAX;
	int64_t x490 = -1LL;
	int8_t x491 = 1;
	static int32_t x492 = 2627231;
	volatile int64_t t109 = 58576LL;

    t109 = ((x489+x490)^(x491<=x492));

    if (t109 != 2147483647LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x497 = 47;
	int16_t x499 = 328;
	uint8_t x500 = 5U;
	volatile int32_t t110 = -626328318;

    t110 = ((x497+x498)^(x499<=x500));

    if (t110 != 46) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x501 = 11U;
	volatile int64_t x502 = 4LL;
	static volatile int32_t x504 = 239560;

    t111 = ((x501+x502)^(x503<=x504));

    if (t111 != 14LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x505 = 3442355U;
	uint32_t x506 = 9036339U;
	static uint16_t x507 = 6530U;
	int16_t x508 = INT16_MAX;
	volatile uint32_t t112 = 48U;

    t112 = ((x505+x506)^(x507<=x508));

    if (t112 != 12478695U) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x509 = 126470817;
	uint32_t x512 = 267244680U;
	volatile int32_t t113 = 273270;

    t113 = ((x509+x510)^(x511<=x512));

    if (t113 != -2021012832) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x513 = 422235U;
	int64_t x515 = INT64_MAX;
	int16_t x516 = -6534;

    t114 = ((x513+x514)^(x515<=x516));

    if (t114 != -14666234094512LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x520 = INT8_MIN;
	static uint32_t t115 = 0U;

    t115 = ((x517+x518)^(x519<=x520));

    if (t115 != 9U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x522 = INT8_MIN;
	static int32_t x523 = 0;
	int32_t x524 = INT32_MIN;
	int64_t t116 = -98222232483LL;

    t116 = ((x521+x522)^(x523<=x524));

    if (t116 != -129LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x534 = -1;
	int8_t x536 = -1;
	int32_t t117 = -8971757;

    t117 = ((x533+x534)^(x535<=x536));

    if (t117 != -130) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x537 = INT8_MAX;
	volatile uint16_t x538 = 62U;
	volatile uint64_t x539 = 5284340LLU;
	int32_t x540 = INT32_MIN;

    t118 = ((x537+x538)^(x539<=x540));

    if (t118 != 188) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x541 = 1046259LL;
	int64_t x543 = INT64_MIN;
	int16_t x544 = -1;
	volatile int64_t t119 = -2954304472322689374LL;

    t119 = ((x541+x542)^(x543<=x544));

    if (t119 != 1046524LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x550 = 853426930663760LL;
	static int32_t x552 = INT32_MIN;
	int64_t t120 = -378069741536259LL;

    t120 = ((x549+x550)^(x551<=x552));

    if (t120 != 853426927057554LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x553 = INT8_MIN;
	static int8_t x554 = -1;
	int16_t x555 = 15;
	int8_t x556 = 11;
	volatile int32_t t121 = -329;

    t121 = ((x553+x554)^(x555<=x556));

    if (t121 != -129) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x557 = -718LL;
	volatile int8_t x559 = 1;
	int32_t x560 = -1;
	static int64_t t122 = -14954381741211607LL;

    t122 = ((x557+x558)^(x559<=x560));

    if (t122 != -719LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint8_t x561 = 47U;
	int32_t x562 = INT32_MIN;
	uint8_t x563 = UINT8_MAX;
	volatile uint64_t x564 = UINT64_MAX;
	int32_t t123 = 356638;

    t123 = ((x561+x562)^(x563<=x564));

    if (t123 != -2147483602) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x565 = 1045947U;
	static uint16_t x566 = UINT16_MAX;
	int64_t x567 = -298692150540096LL;
	volatile int32_t x568 = 28615;
	volatile uint32_t t124 = 25719321U;

    t124 = ((x565+x566)^(x567<=x568));

    if (t124 != 1111483U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x573 = INT8_MIN;
	uint8_t x574 = UINT8_MAX;
	static uint32_t x575 = UINT32_MAX;
	uint32_t x576 = UINT32_MAX;

    t125 = ((x573+x574)^(x575<=x576));

    if (t125 != 126) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x577 = 3472796473341835LLU;
	int8_t x578 = -11;
	int64_t x579 = -99005531LL;
	int8_t x580 = 1;
	volatile uint64_t t126 = 99LLU;

    t126 = ((x577+x578)^(x579<=x580));

    if (t126 != 3472796473341825LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x581 = INT16_MIN;
	static int32_t t127 = -997;

    t127 = ((x581+x582)^(x583<=x584));

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x585 = 7U;
	volatile uint16_t x586 = UINT16_MAX;
	int16_t x588 = -10;
	int32_t t128 = -3550230;

    t128 = ((x585+x586)^(x587<=x588));

    if (t128 != 65542) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x589 = UINT32_MAX;
	int32_t x590 = INT32_MAX;
	int8_t x591 = INT8_MIN;
	uint32_t x592 = 3859U;

    t129 = ((x589+x590)^(x591<=x592));

    if (t129 != 2147483646U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x593 = 64476403LL;
	int64_t x594 = -437057LL;
	int8_t x595 = -1;
	int32_t x596 = INT32_MIN;

    t130 = ((x593+x594)^(x595<=x596));

    if (t130 != 64039346LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x598 = -1LL;
	volatile uint32_t x600 = UINT32_MAX;
	volatile int64_t t131 = -3087LL;

    t131 = ((x597+x598)^(x599<=x600));

    if (t131 != 32767LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x601 = INT8_MIN;
	int64_t x602 = -10528338600397686LL;
	volatile int64_t x603 = INT64_MIN;
	int64_t t132 = 4808645479533LL;

    t132 = ((x601+x602)^(x603<=x604));

    if (t132 != -10528338600397813LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x605 = INT32_MIN;
	uint8_t x606 = UINT8_MAX;
	uint8_t x607 = 10U;
	static int32_t x608 = -305;
	int32_t t133 = 4576561;

    t133 = ((x605+x606)^(x607<=x608));

    if (t133 != -2147483393) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x609 = INT16_MIN;
	int32_t x610 = 209;
	int32_t x611 = INT32_MAX;
	int8_t x612 = INT8_MIN;
	static int32_t t134 = 385779729;

    t134 = ((x609+x610)^(x611<=x612));

    if (t134 != -32559) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x614 = INT8_MIN;
	int16_t x615 = INT16_MIN;
	int32_t t135 = 9;

    t135 = ((x613+x614)^(x615<=x616));

    if (t135 != -130) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x617 = 23LLU;
	uint32_t x618 = 303U;
	uint16_t x619 = 1U;
	volatile uint64_t x620 = 59971805LLU;
	volatile uint64_t t136 = 6LLU;

    t136 = ((x617+x618)^(x619<=x620));

    if (t136 != 327LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x625 = UINT16_MAX;
	int16_t x626 = -1;
	volatile int32_t x627 = 1;
	int8_t x628 = -1;
	static int32_t t137 = -1385792;

    t137 = ((x625+x626)^(x627<=x628));

    if (t137 != 65534) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x629 = UINT64_MAX;
	uint32_t x630 = UINT32_MAX;
	volatile int32_t x632 = INT32_MAX;
	volatile uint64_t t138 = 3013208666756LLU;

    t138 = ((x629+x630)^(x631<=x632));

    if (t138 != 4294967295LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x633 = INT64_MIN;
	int32_t x634 = 1711;
	int16_t x635 = -417;
	int64_t x636 = INT64_MAX;
	static int64_t t139 = 120523572194831LL;

    t139 = ((x633+x634)^(x635<=x636));

    if (t139 != -9223372036854774098LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x637 = INT32_MIN;
	uint16_t x638 = 1U;
	int32_t x639 = INT32_MIN;
	uint16_t x640 = 3U;
	volatile int32_t t140 = INT32_MIN;

    t140 = ((x637+x638)^(x639<=x640));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x641 = 27U;
	uint16_t x642 = 1114U;
	int8_t x643 = INT8_MIN;
	static volatile int8_t x644 = INT8_MIN;
	int32_t t141 = 758274854;

    t141 = ((x641+x642)^(x643<=x644));

    if (t141 != 1140) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x645 = 9320LLU;
	volatile uint8_t x646 = 0U;
	static int64_t x647 = -1LL;
	volatile uint64_t t142 = 3525655174401634576LLU;

    t142 = ((x645+x646)^(x647<=x648));

    if (t142 != 9320LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x649 = 7U;
	uint8_t x650 = 3U;
	int32_t t143 = -1245377;

    t143 = ((x649+x650)^(x651<=x652));

    if (t143 != 10) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x657 = -1LL;
	int32_t x659 = -1;
	static volatile int64_t x660 = INT64_MIN;
	int64_t t144 = -53001319LL;

    t144 = ((x657+x658)^(x659<=x660));

    if (t144 != 178LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x662 = 1091U;
	uint16_t x663 = UINT16_MAX;
	int16_t x664 = 9754;

    t145 = ((x661+x662)^(x663<=x664));

    if (t145 != 2461441U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x665 = UINT16_MAX;
	int32_t x666 = INT32_MIN;
	static int16_t x668 = INT16_MIN;
	int32_t t146 = -104;

    t146 = ((x665+x666)^(x667<=x668));

    if (t146 != -2147418113) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x669 = -1LL;
	int32_t x670 = INT32_MIN;
	int16_t x671 = -1;
	int64_t x672 = INT64_MIN;
	int64_t t147 = 50791430944108LL;

    t147 = ((x669+x670)^(x671<=x672));

    if (t147 != -2147483649LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x673 = UINT64_MAX;
	int64_t x675 = -31573LL;
	int8_t x676 = INT8_MIN;
	uint64_t t148 = 907378207622LLU;

    t148 = ((x673+x674)^(x675<=x676));

    if (t148 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x677 = INT8_MAX;
	static volatile uint64_t x679 = UINT64_MAX;
	int16_t x680 = INT16_MIN;
	volatile uint64_t t149 = 3033984136340184816LLU;

    t149 = ((x677+x678)^(x679<=x680));

    if (t149 != 9335LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x681 = -3;
	int32_t x682 = INT32_MAX;
	int32_t x683 = INT32_MIN;
	int64_t x684 = -1LL;

    t150 = ((x681+x682)^(x683<=x684));

    if (t150 != 2147483645) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x685 = 473995875617229LLU;
	int16_t x686 = INT16_MAX;
	uint64_t x688 = UINT64_MAX;
	static volatile uint64_t t151 = 686206LLU;

    t151 = ((x685+x686)^(x687<=x688));

    if (t151 != 473995875649997LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x689 = -1;
	int64_t x690 = -108655000929LL;
	int16_t x691 = -1;
	static int16_t x692 = -3722;
	static volatile int64_t t152 = 145112217420LL;

    t152 = ((x689+x690)^(x691<=x692));

    if (t152 != -108655000930LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x694 = 0U;
	int64_t x695 = 1295679358465571LL;
	static int64_t x696 = INT64_MAX;

    t153 = ((x693+x694)^(x695<=x696));

    if (t153 != 2576) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x697 = -51720647;
	uint16_t x698 = UINT16_MAX;
	int64_t x699 = -19LL;
	uint8_t x700 = UINT8_MAX;
	int32_t t154 = 2;

    t154 = ((x697+x698)^(x699<=x700));

    if (t154 != -51655111) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x701 = INT16_MAX;
	static uint8_t x702 = 121U;
	int64_t x703 = INT64_MAX;
	static uint32_t x704 = UINT32_MAX;
	volatile int32_t t155 = 148;

    t155 = ((x701+x702)^(x703<=x704));

    if (t155 != 32888) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int16_t x705 = INT16_MIN;
	int8_t x706 = INT8_MAX;
	volatile int16_t x707 = INT16_MIN;
	static int32_t x708 = -1350545;
	int32_t t156 = -1377402;

    t156 = ((x705+x706)^(x707<=x708));

    if (t156 != -32641) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x713 = -185446LL;
	uint32_t x714 = 532U;
	int32_t x715 = INT32_MIN;
	int64_t x716 = INT64_MIN;
	int64_t t157 = -3737581623LL;

    t157 = ((x713+x714)^(x715<=x716));

    if (t157 != -184914LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x717 = INT64_MAX;
	int64_t x718 = -1LL;
	volatile int64_t x719 = 3LL;
	volatile int64_t t158 = INT64_MAX;

    t158 = ((x717+x718)^(x719<=x720));

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x721 = 8737;
	int8_t x722 = INT8_MAX;
	uint32_t x723 = 1560720223U;
	uint16_t x724 = 22U;
	int32_t t159 = 58553792;

    t159 = ((x721+x722)^(x723<=x724));

    if (t159 != 8864) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x725 = INT16_MIN;
	static int16_t x727 = -1;
	int8_t x728 = INT8_MIN;
	int64_t t160 = -2889161385356957LL;

    t160 = ((x725+x726)^(x727<=x728));

    if (t160 != -32767LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x729 = -1LL;
	uint32_t x730 = 7638U;
	volatile uint16_t x731 = 7054U;
	int16_t x732 = INT16_MIN;
	volatile int64_t t161 = -5624355LL;

    t161 = ((x729+x730)^(x731<=x732));

    if (t161 != 7637LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x733 = -1;
	uint64_t x734 = 28639LLU;
	static int8_t x735 = -53;
	static volatile int16_t x736 = 271;
	static uint64_t t162 = 5LLU;

    t162 = ((x733+x734)^(x735<=x736));

    if (t162 != 28639LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x738 = UINT32_MAX;
	int32_t x739 = INT32_MIN;
	int16_t x740 = -1;
	volatile int64_t t163 = 87085246LL;

    t163 = ((x737+x738)^(x739<=x740));

    if (t163 != 804580459805LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x741 = UINT64_MAX;
	int32_t x742 = INT32_MAX;
	uint64_t x744 = 348LLU;
	volatile uint64_t t164 = 22LLU;

    t164 = ((x741+x742)^(x743<=x744));

    if (t164 != 2147483646LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x746 = 64222424251390LLU;
	static int16_t x747 = INT16_MIN;
	uint8_t x748 = 14U;
	volatile uint64_t t165 = 430759995498371462LLU;

    t165 = ((x745+x746)^(x747<=x748));

    if (t165 != 64222424251516LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x749 = -1;
	static uint64_t x750 = 120LLU;

    t166 = ((x749+x750)^(x751<=x752));

    if (t166 != 119LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x753 = INT32_MAX;
	static int8_t x754 = -1;
	int16_t x755 = -1891;
	static volatile int32_t t167 = INT32_MAX;

    t167 = ((x753+x754)^(x755<=x756));

    if (t167 != INT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x757 = 39835981LLU;
	static int32_t x758 = -1;
	static int16_t x759 = 605;
	volatile uint64_t t168 = 3023811764LLU;

    t168 = ((x757+x758)^(x759<=x760));

    if (t168 != 39835981LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x762 = INT64_MIN;
	volatile int8_t x764 = 0;
	uint64_t t169 = 3273768544837LLU;

    t169 = ((x761+x762)^(x763<=x764));

    if (t169 != 9237450198301294478LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x765 = UINT16_MAX;
	int64_t x766 = INT64_MIN;
	uint16_t x767 = 1817U;
	int64_t t170 = -1700517511487LL;

    t170 = ((x765+x766)^(x767<=x768));

    if (t170 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x769 = -3;
	int32_t x771 = INT32_MIN;
	static int32_t x772 = INT32_MIN;

    t171 = ((x769+x770)^(x771<=x772));

    if (t171 != -3) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x775 = INT8_MIN;
	int64_t t172 = -411001955773LL;

    t172 = ((x773+x774)^(x775<=x776));

    if (t172 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x779 = INT8_MIN;
	int64_t t173 = 10612LL;

    t173 = ((x777+x778)^(x779<=x780));

    if (t173 != -118732110LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x781 = INT64_MIN;
	static int32_t x782 = INT32_MAX;
	static int32_t x783 = INT32_MIN;
	int32_t x784 = INT32_MAX;
	volatile int64_t t174 = -22814071511094LL;

    t174 = ((x781+x782)^(x783<=x784));

    if (t174 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x785 = UINT8_MAX;
	static int16_t x786 = -1;
	volatile int32_t x787 = INT32_MAX;
	static int8_t x788 = 5;
	int32_t t175 = 1897848;

    t175 = ((x785+x786)^(x787<=x788));

    if (t175 != 254) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int8_t x793 = INT8_MAX;
	static int16_t x794 = INT16_MIN;
	int16_t x795 = -87;
	volatile int32_t t176 = 64;

    t176 = ((x793+x794)^(x795<=x796));

    if (t176 != -32642) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x797 = INT16_MAX;
	uint8_t x798 = UINT8_MAX;
	uint16_t x799 = 3177U;
	volatile int32_t x800 = 45611953;

    t177 = ((x797+x798)^(x799<=x800));

    if (t177 != 33023) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x801 = INT8_MIN;
	int64_t x802 = -1LL;
	uint16_t x803 = UINT16_MAX;
	volatile int8_t x804 = INT8_MIN;
	int64_t t178 = 13825211063893LL;

    t178 = ((x801+x802)^(x803<=x804));

    if (t178 != -129LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x805 = 5;
	int16_t x806 = INT16_MIN;
	uint16_t x807 = UINT16_MAX;
	static volatile uint16_t x808 = 2041U;
	int32_t t179 = 70117473;

    t179 = ((x805+x806)^(x807<=x808));

    if (t179 != -32763) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x809 = 7U;
	static int16_t x810 = INT16_MIN;
	int8_t x812 = INT8_MAX;
	uint32_t t180 = 191U;

    t180 = ((x809+x810)^(x811<=x812));

    if (t180 != 4294934535U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x813 = 1;
	static volatile int32_t x814 = -111048056;
	static int8_t x815 = -11;
	uint16_t x816 = 27933U;
	volatile int32_t t181 = 0;

    t181 = ((x813+x814)^(x815<=x816));

    if (t181 != -111048056) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x817 = UINT8_MAX;
	uint8_t x818 = UINT8_MAX;
	int16_t x819 = INT16_MIN;
	int32_t x820 = -1;
	static volatile int32_t t182 = 642981479;

    t182 = ((x817+x818)^(x819<=x820));

    if (t182 != 511) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x822 = -1LL;
	int64_t x823 = INT64_MIN;
	int8_t x824 = -1;
	volatile int64_t t183 = -3554576LL;

    t183 = ((x821+x822)^(x823<=x824));

    if (t183 != 127LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x825 = -1;
	static volatile int8_t x827 = -1;
	static volatile int32_t t184 = 37868738;

    t184 = ((x825+x826)^(x827<=x828));

    if (t184 != -1299) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x829 = -1290165837945709LL;
	volatile int16_t x830 = INT16_MAX;
	int64_t x832 = -1LL;
	static volatile int64_t t185 = 2776LL;

    t185 = ((x829+x830)^(x831<=x832));

    if (t185 != -1290165837912941LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x837 = INT64_MIN;
	uint8_t x838 = 39U;
	uint32_t x839 = UINT32_MAX;
	int64_t t186 = 64074516988LL;

    t186 = ((x837+x838)^(x839<=x840));

    if (t186 != -9223372036854775769LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x841 = 378;
	uint8_t x842 = 3U;
	static uint16_t x843 = 1U;
	int16_t x844 = 0;
	static int32_t t187 = 474090862;

    t187 = ((x841+x842)^(x843<=x844));

    if (t187 != 381) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x850 = UINT8_MAX;
	volatile uint16_t x851 = UINT16_MAX;
	static uint8_t x852 = UINT8_MAX;
	volatile int32_t t188 = 413;

    t188 = ((x849+x850)^(x851<=x852));

    if (t188 != 254) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x854 = 67U;
	uint8_t x855 = UINT8_MAX;
	int32_t x856 = INT32_MIN;
	int64_t t189 = -60LL;

    t189 = ((x853+x854)^(x855<=x856));

    if (t189 != 66LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x861 = UINT64_MAX;
	int32_t x862 = -20264733;
	static volatile uint8_t x863 = 93U;
	int16_t x864 = INT16_MAX;
	volatile uint64_t t190 = 5532LLU;

    t190 = ((x861+x862)^(x863<=x864));

    if (t190 != 18446744073689286883LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x865 = -1;
	uint64_t x866 = UINT64_MAX;
	int16_t x867 = INT16_MIN;
	int16_t x868 = 5282;
	volatile uint64_t t191 = UINT64_MAX;

    t191 = ((x865+x866)^(x867<=x868));

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x869 = UINT32_MAX;
	static int32_t x870 = 2505595;
	int16_t x872 = -1;

    t192 = ((x869+x870)^(x871<=x872));

    if (t192 != 2505595U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x873 = INT8_MIN;
	int8_t x874 = INT8_MIN;
	static uint16_t x875 = UINT16_MAX;
	int16_t x876 = INT16_MAX;
	volatile int32_t t193 = -11475603;

    t193 = ((x873+x874)^(x875<=x876));

    if (t193 != -256) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x881 = INT16_MIN;
	volatile uint32_t x883 = UINT32_MAX;
	uint8_t x884 = 5U;
	uint32_t t194 = 485510022U;

    t194 = ((x881+x882)^(x883<=x884));

    if (t194 != 135569764U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x885 = INT16_MAX;
	volatile uint8_t x886 = 17U;
	volatile uint64_t x888 = 0LLU;
	int32_t t195 = -18234;

    t195 = ((x885+x886)^(x887<=x888));

    if (t195 != 32784) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x889 = -106272;
	static int32_t x890 = -1;
	static uint8_t x891 = 2U;
	static volatile int64_t x892 = INT64_MIN;
	int32_t t196 = 523362;

    t196 = ((x889+x890)^(x891<=x892));

    if (t196 != -106273) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x897 = INT16_MIN;
	static uint32_t x899 = 0U;
	int8_t x900 = INT8_MIN;

    t197 = ((x897+x898)^(x899<=x900));

    if (t197 != -32768) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x901 = 3026531LLU;
	int32_t x902 = -1923367;
	int64_t x903 = INT64_MIN;
	volatile uint64_t t198 = 81669189389763546LLU;

    t198 = ((x901+x902)^(x903<=x904));

    if (t198 != 1103165LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint16_t x905 = UINT16_MAX;
	uint16_t x906 = UINT16_MAX;
	static int64_t x908 = 780727697898406003LL;
	volatile int32_t t199 = 174284;

    t199 = ((x905+x906)^(x907<=x908));

    if (t199 != 131071) { NG(); } else { ; }
	
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

