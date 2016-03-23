
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

int8_t x3 = INT8_MIN;
int8_t x5 = 18;
static int32_t t1 = 17517;
uint16_t x15 = UINT16_MAX;
static volatile int32_t t3 = 321009;
static volatile int32_t t5 = 659;
volatile uint8_t x28 = 21U;
volatile uint64_t x35 = UINT64_MAX;
int16_t x41 = INT16_MIN;
volatile int16_t x42 = -527;
int32_t t10 = -1;
int8_t x46 = 1;
volatile int32_t t11 = -1500;
volatile int32_t t12 = -55584;
static volatile int32_t x62 = INT32_MAX;
static uint32_t x67 = 3U;
uint16_t x68 = UINT16_MAX;
volatile int32_t t16 = 258481;
volatile int64_t x71 = INT64_MIN;
static int8_t x77 = 0;
static volatile int32_t t18 = -9848;
uint64_t x82 = 3205737038331840LLU;
int32_t x95 = INT32_MIN;
volatile int32_t x103 = INT32_MIN;
static int8_t x105 = INT8_MIN;
int32_t t24 = -330823;
int32_t x110 = -7818194;
static int32_t t25 = 10;
uint32_t x115 = 396044U;
volatile int16_t x118 = -6032;
static int8_t x120 = -1;
int32_t x128 = -1;
uint8_t x131 = 40U;
static int32_t t30 = 544;
int8_t x148 = 1;
int64_t x154 = 8610672767LL;
int64_t x161 = INT64_MIN;
uint32_t x163 = 71U;
uint64_t x169 = 1124498223LLU;
volatile uint8_t x171 = 8U;
int32_t t40 = -1;
uint8_t x181 = UINT8_MAX;
int16_t x191 = INT16_MAX;
volatile int32_t t44 = 176;
int16_t x197 = 0;
int64_t x203 = -145790154711535303LL;
static int32_t x206 = INT32_MAX;
static uint8_t x209 = UINT8_MAX;
volatile int8_t x215 = 51;
volatile int16_t x219 = -16;
uint32_t x220 = 147569U;
int32_t t51 = 494417428;
static volatile int32_t t54 = 14915681;
int8_t x234 = INT8_MAX;
uint32_t x236 = 125563U;
volatile int64_t x238 = -346212740883700043LL;
static volatile int32_t t56 = 7119;
int64_t x242 = INT64_MIN;
static volatile int32_t t57 = 5581922;
static int8_t x249 = INT8_MIN;
volatile int32_t x261 = INT32_MAX;
volatile int32_t t62 = -512685;
static uint64_t x265 = 4260037697147LLU;
int32_t x285 = INT32_MAX;
static int16_t x288 = INT16_MAX;
volatile int32_t x289 = -48154637;
int32_t x292 = INT32_MIN;
volatile int32_t t68 = 28502807;
uint32_t x297 = 7610238U;
int64_t x313 = 182971713240463LL;
int32_t t73 = 50;
int64_t x321 = INT64_MIN;
static int32_t t74 = 27198348;
uint64_t x326 = 69151969018829991LLU;
int8_t x327 = 1;
volatile int16_t x334 = INT16_MIN;
int8_t x339 = -1;
int8_t x345 = INT8_MIN;
uint8_t x346 = 0U;
static volatile uint32_t x350 = 124172541U;
int16_t x355 = -1;
static int32_t t84 = 57234;
int8_t x374 = INT8_MIN;
volatile int32_t t86 = -74097774;
volatile int64_t x390 = INT64_MIN;
int32_t t91 = 1904865;
static int32_t x397 = INT32_MAX;
uint32_t x402 = UINT32_MAX;
int32_t x403 = INT32_MIN;
uint8_t x404 = UINT8_MAX;
int8_t x411 = INT8_MIN;
volatile uint64_t x424 = UINT64_MAX;
int16_t x427 = 15978;
int64_t x430 = 1LL;
int32_t t100 = 1;
volatile int32_t t101 = 19636;
int8_t x437 = 14;
uint64_t x439 = 1635304437807084LLU;
volatile int32_t t102 = -997144;
int64_t x445 = 17091674585383LL;
static volatile int32_t t104 = 25621563;
volatile int32_t t105 = 3384053;
static int64_t x463 = 209809LL;
volatile int32_t t109 = 0;
volatile int32_t t110 = -581100;
int16_t x477 = -767;
volatile uint8_t x485 = UINT8_MAX;
volatile int32_t t114 = -24;
static int64_t x492 = INT64_MIN;
uint8_t x496 = 4U;
static int64_t x503 = -29571488556666LL;
volatile int32_t x506 = -1;
int64_t x512 = -118701287824828LL;
static uint16_t x514 = 25230U;
volatile int32_t t121 = -216;
uint16_t x521 = 899U;
int16_t x525 = -728;
volatile int32_t t123 = -11126540;
int8_t x532 = -1;
int16_t x536 = -8;
int32_t t126 = -42;
int32_t t127 = 34543154;
uint64_t x546 = 22433LLU;
int8_t x548 = INT8_MIN;
volatile int32_t t128 = -910777;
static volatile int8_t x554 = INT8_MAX;
int64_t x555 = INT64_MIN;
volatile int32_t x556 = 61;
volatile int32_t t131 = 145559221;
uint8_t x561 = 0U;
static int8_t x568 = INT8_MAX;
int8_t x581 = INT8_MIN;
uint16_t x582 = UINT16_MAX;
volatile int16_t x583 = INT16_MIN;
static uint16_t x592 = 427U;
int8_t x594 = INT8_MIN;
static int32_t x597 = -1;
uint16_t x600 = 14U;
int8_t x604 = -6;
uint64_t x607 = UINT64_MAX;
volatile int8_t x610 = INT8_MIN;
int32_t x613 = INT32_MAX;
volatile uint8_t x615 = UINT8_MAX;
volatile int32_t t145 = 3622933;
int64_t x620 = INT64_MIN;
int16_t x626 = INT16_MIN;
volatile uint8_t x630 = 98U;
int8_t x635 = -1;
static int16_t x637 = -6806;
int8_t x639 = 23;
static uint16_t x644 = 15U;
int32_t t152 = 23;
uint8_t x648 = 55U;
uint8_t x653 = 10U;
int32_t x659 = -1;
volatile int64_t x662 = 17942127296122033LL;
static uint64_t x669 = 105372LLU;
uint32_t x673 = UINT32_MAX;
volatile uint8_t x676 = 36U;
int64_t x678 = -1LL;
int32_t x679 = -1;
static uint64_t x682 = UINT64_MAX;
volatile uint64_t x695 = 48640656703139090LLU;
static uint32_t x696 = 458747U;
volatile uint16_t x699 = 174U;
int32_t t165 = -349;
volatile int16_t x709 = INT16_MAX;
int8_t x711 = -1;
static int8_t x716 = 2;
int16_t x720 = INT16_MAX;
uint64_t x730 = UINT64_MAX;
volatile uint8_t x731 = 2U;
int64_t x734 = -1LL;
int16_t x742 = INT16_MIN;
int8_t x745 = INT8_MIN;
int32_t x748 = -1;
static volatile uint64_t x750 = 4150205LLU;
int64_t x751 = 420077683LL;
int32_t t177 = -2377;
uint64_t x758 = 61LLU;
static volatile uint64_t x759 = 7LLU;
static volatile uint64_t x762 = UINT64_MAX;
static int16_t x768 = INT16_MAX;
volatile int32_t t181 = -24762770;
int8_t x769 = -1;
static volatile int32_t t182 = -8665;
static int32_t x776 = INT32_MIN;
uint64_t x780 = 339307350451LLU;
int8_t x783 = -1;
volatile int16_t x790 = -13;
volatile int16_t x791 = INT16_MIN;
int8_t x799 = INT8_MIN;
int8_t x800 = 1;
volatile int8_t x811 = INT8_MAX;
volatile int32_t x812 = INT32_MIN;
int64_t x817 = -1LL;
volatile uint16_t x821 = 653U;
int32_t t193 = 24662;
int64_t x828 = 4288509881369818LL;
uint16_t x835 = 30U;
static int8_t x836 = INT8_MAX;
volatile int32_t t196 = 0;
int16_t x841 = INT16_MIN;
int32_t t198 = -52;


void f0(void) {
    	volatile int32_t x1 = -1;
	int16_t x2 = -1;
	int8_t x4 = 1;
	int32_t t0 = 2825;

    t0 = (((x1&x2)/x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = 2087414U;
	uint8_t x7 = UINT8_MAX;
	int8_t x8 = INT8_MIN;

    t1 = (((x5&x6)/x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = -165847971026366961LL;
	uint8_t x10 = 3U;
	static uint16_t x11 = UINT16_MAX;
	int8_t x12 = 0;
	int32_t t2 = 940278;

    t2 = (((x9&x10)/x11)!=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int64_t x14 = 696164189597340165LL;
	static int16_t x16 = -114;

    t3 = (((x13&x14)/x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MAX;
	int64_t x18 = -1010346439353953LL;
	uint16_t x19 = 228U;
	uint64_t x20 = UINT64_MAX;
	volatile int32_t t4 = 45;

    t4 = (((x17&x18)/x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	int64_t x22 = -1LL;
	static int32_t x23 = 57187784;
	int32_t x24 = INT32_MIN;

    t5 = (((x21&x22)/x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int16_t x26 = INT16_MIN;
	int64_t x27 = INT64_MIN;
	volatile int32_t t6 = 1305625;

    t6 = (((x25&x26)/x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	int16_t x30 = -7;
	int8_t x31 = INT8_MAX;
	volatile int32_t x32 = -1;
	int32_t t7 = 920758;

    t7 = (((x29&x30)/x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = INT64_MIN;
	uint16_t x34 = UINT16_MAX;
	int8_t x36 = -1;
	int32_t t8 = -4957537;

    t8 = (((x33&x34)/x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MAX;
	int8_t x38 = 6;
	volatile int32_t x39 = -459932047;
	volatile int64_t x40 = INT64_MAX;
	int32_t t9 = 65315944;

    t9 = (((x37&x38)/x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x43 = UINT8_MAX;
	uint32_t x44 = 22955U;

    t10 = (((x41&x42)/x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = 242;
	uint16_t x47 = 1683U;
	static uint64_t x48 = 364LLU;

    t11 = (((x45&x46)/x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = 501;
	int8_t x50 = 62;
	int64_t x51 = -1LL;
	volatile int8_t x52 = INT8_MIN;

    t12 = (((x49&x50)/x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x53 = -1;
	volatile uint32_t x54 = 4445463U;
	volatile int16_t x55 = INT16_MIN;
	static int16_t x56 = -1163;
	static int32_t t13 = 48702;

    t13 = (((x53&x54)/x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	int16_t x58 = 8437;
	int8_t x59 = -13;
	static int32_t x60 = -34;
	volatile int32_t t14 = -2070568;

    t14 = (((x57&x58)/x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = INT32_MIN;
	int16_t x63 = 857;
	volatile int16_t x64 = -1410;
	volatile int32_t t15 = 824;

    t15 = (((x61&x62)/x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	int16_t x66 = -7936;

    t16 = (((x65&x66)/x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -375529LL;
	int64_t x70 = -7LL;
	uint64_t x72 = UINT64_MAX;
	volatile int32_t t17 = 227;

    t17 = (((x69&x70)/x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x78 = -1;
	uint16_t x79 = 27840U;
	static int32_t x80 = -1;

    t18 = (((x77&x78)/x79)!=x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x81 = 4U;
	int64_t x83 = INT64_MIN;
	uint64_t x84 = UINT64_MAX;
	int32_t t19 = -309844333;

    t19 = (((x81&x82)/x83)!=x84);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = -1;
	int8_t x90 = -1;
	uint16_t x91 = 15624U;
	int16_t x92 = INT16_MAX;
	int32_t t20 = -333259;

    t20 = (((x89&x90)/x91)!=x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x93 = -4;
	static volatile uint8_t x94 = 10U;
	uint16_t x96 = 7062U;
	int32_t t21 = -485792931;

    t21 = (((x93&x94)/x95)!=x96);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x97 = INT8_MIN;
	uint8_t x98 = 1U;
	uint64_t x99 = 262640395LLU;
	uint32_t x100 = 75775695U;
	int32_t t22 = -36;

    t22 = (((x97&x98)/x99)!=x100);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = -1LL;
	volatile int64_t x102 = INT64_MIN;
	int16_t x104 = INT16_MIN;
	static int32_t t23 = -463;

    t23 = (((x101&x102)/x103)!=x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x106 = INT8_MIN;
	uint16_t x107 = 825U;
	static uint32_t x108 = UINT32_MAX;

    t24 = (((x105&x106)/x107)!=x108);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x109 = 3U;
	int8_t x111 = 1;
	static volatile int64_t x112 = INT64_MAX;

    t25 = (((x109&x110)/x111)!=x112);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x113 = -1;
	static int8_t x114 = -1;
	static int64_t x116 = INT64_MIN;
	int32_t t26 = 318686655;

    t26 = (((x113&x114)/x115)!=x116);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = 56303389;
	volatile int64_t x119 = INT64_MIN;
	volatile int32_t t27 = -1151416;

    t27 = (((x117&x118)/x119)!=x120);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x121 = 3U;
	uint64_t x122 = 1803158137709893LLU;
	int16_t x123 = INT16_MAX;
	int8_t x124 = 3;
	volatile int32_t t28 = -668;

    t28 = (((x121&x122)/x123)!=x124);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x125 = -1LL;
	int32_t x126 = 1836900;
	static volatile uint64_t x127 = 455103502458679927LLU;
	int32_t t29 = -504526953;

    t29 = (((x125&x126)/x127)!=x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = -1;
	uint16_t x130 = 199U;
	int16_t x132 = INT16_MAX;

    t30 = (((x129&x130)/x131)!=x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x133 = 29698944U;
	static uint8_t x134 = 4U;
	int32_t x135 = -4101979;
	static int16_t x136 = -7;
	int32_t t31 = -21516979;

    t31 = (((x133&x134)/x135)!=x136);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x137 = INT8_MIN;
	uint64_t x138 = 52LLU;
	uint64_t x139 = 29025632097LLU;
	volatile int32_t x140 = INT32_MAX;
	int32_t t32 = -5209;

    t32 = (((x137&x138)/x139)!=x140);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x141 = -1;
	int64_t x142 = INT64_MIN;
	int64_t x143 = INT64_MIN;
	volatile uint16_t x144 = 7U;
	int32_t t33 = -30;

    t33 = (((x141&x142)/x143)!=x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = -123513958344702512LL;
	int32_t x146 = INT32_MIN;
	int64_t x147 = INT64_MIN;
	volatile int32_t t34 = 29580;

    t34 = (((x145&x146)/x147)!=x148);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x149 = 5235118LLU;
	int64_t x150 = -1LL;
	volatile int32_t x151 = -4;
	volatile uint8_t x152 = 22U;
	volatile int32_t t35 = -6638;

    t35 = (((x149&x150)/x151)!=x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x153 = UINT64_MAX;
	static volatile int32_t x155 = 30391;
	uint64_t x156 = 273LLU;
	int32_t t36 = -162674550;

    t36 = (((x153&x154)/x155)!=x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x157 = 986LLU;
	int16_t x158 = 0;
	int32_t x159 = -1;
	int64_t x160 = -1LL;
	int32_t t37 = -9303;

    t37 = (((x157&x158)/x159)!=x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x162 = -1;
	int8_t x164 = -1;
	static volatile int32_t t38 = 79397796;

    t38 = (((x161&x162)/x163)!=x164);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x170 = 1U;
	uint8_t x172 = 3U;
	int32_t t39 = 28961804;

    t39 = (((x169&x170)/x171)!=x172);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x173 = 0U;
	uint64_t x174 = UINT64_MAX;
	int32_t x175 = INT32_MAX;
	static uint64_t x176 = 24168LLU;

    t40 = (((x173&x174)/x175)!=x176);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x177 = 55U;
	volatile int8_t x178 = INT8_MIN;
	int64_t x179 = INT64_MIN;
	int8_t x180 = INT8_MIN;
	static volatile int32_t t41 = 0;

    t41 = (((x177&x178)/x179)!=x180);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x182 = UINT32_MAX;
	volatile int64_t x183 = INT64_MIN;
	uint64_t x184 = 35796LLU;
	int32_t t42 = -872584017;

    t42 = (((x181&x182)/x183)!=x184);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x185 = INT8_MIN;
	static int64_t x186 = 344682435788949LL;
	int16_t x187 = -1;
	int8_t x188 = -1;
	volatile int32_t t43 = 7794;

    t43 = (((x185&x186)/x187)!=x188);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x189 = 1639715U;
	static int8_t x190 = -1;
	static uint32_t x192 = 14424U;

    t44 = (((x189&x190)/x191)!=x192);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x193 = 562U;
	uint8_t x194 = 52U;
	int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MIN;
	volatile int32_t t45 = 125;

    t45 = (((x193&x194)/x195)!=x196);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x198 = INT32_MAX;
	volatile uint64_t x199 = UINT64_MAX;
	int8_t x200 = INT8_MIN;
	static volatile int32_t t46 = 39113777;

    t46 = (((x197&x198)/x199)!=x200);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x201 = INT8_MAX;
	static int16_t x202 = -1;
	static volatile int16_t x204 = INT16_MIN;
	int32_t t47 = 31348050;

    t47 = (((x201&x202)/x203)!=x204);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x205 = 0U;
	static uint16_t x207 = 573U;
	uint16_t x208 = 1U;
	int32_t t48 = -1;

    t48 = (((x205&x206)/x207)!=x208);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x210 = INT32_MAX;
	uint16_t x211 = 125U;
	static volatile uint8_t x212 = 37U;
	volatile int32_t t49 = -48132;

    t49 = (((x209&x210)/x211)!=x212);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x213 = INT32_MAX;
	uint16_t x214 = UINT16_MAX;
	static volatile int32_t x216 = 590;
	int32_t t50 = 946;

    t50 = (((x213&x214)/x215)!=x216);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x217 = INT32_MIN;
	static int32_t x218 = 114;

    t51 = (((x217&x218)/x219)!=x220);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x221 = INT32_MIN;
	int32_t x222 = INT32_MAX;
	int32_t x223 = INT32_MIN;
	int32_t x224 = INT32_MIN;
	int32_t t52 = -15;

    t52 = (((x221&x222)/x223)!=x224);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x225 = -6316956350795039LL;
	uint8_t x226 = 9U;
	int32_t x227 = 508256907;
	uint32_t x228 = 1597U;
	volatile int32_t t53 = -11232743;

    t53 = (((x225&x226)/x227)!=x228);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = INT8_MIN;
	static int32_t x230 = INT32_MAX;
	uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MIN;

    t54 = (((x229&x230)/x231)!=x232);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x233 = -1;
	int64_t x235 = INT64_MAX;
	int32_t t55 = 815977;

    t55 = (((x233&x234)/x235)!=x236);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x237 = UINT16_MAX;
	volatile uint32_t x239 = 299161U;
	int64_t x240 = 4516741981619051300LL;

    t56 = (((x237&x238)/x239)!=x240);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x241 = 8;
	int64_t x243 = INT64_MIN;
	uint64_t x244 = UINT64_MAX;

    t57 = (((x241&x242)/x243)!=x244);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x245 = 75990096U;
	int64_t x246 = -1LL;
	uint8_t x247 = 118U;
	int64_t x248 = INT64_MIN;
	int32_t t58 = 0;

    t58 = (((x245&x246)/x247)!=x248);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x250 = INT16_MIN;
	int8_t x251 = INT8_MAX;
	int16_t x252 = -1;
	volatile int32_t t59 = 129989407;

    t59 = (((x249&x250)/x251)!=x252);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x253 = INT16_MIN;
	int32_t x254 = 109;
	int16_t x255 = -142;
	static uint16_t x256 = 2U;
	volatile int32_t t60 = -346;

    t60 = (((x253&x254)/x255)!=x256);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x257 = -12;
	int64_t x258 = -120LL;
	volatile uint64_t x259 = 82767117048088LLU;
	static int32_t x260 = INT32_MIN;
	volatile int32_t t61 = 0;

    t61 = (((x257&x258)/x259)!=x260);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x262 = INT32_MAX;
	int32_t x263 = -1;
	int32_t x264 = INT32_MIN;

    t62 = (((x261&x262)/x263)!=x264);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x266 = 3LLU;
	int64_t x267 = -1LL;
	uint8_t x268 = UINT8_MAX;
	int32_t t63 = 109733096;

    t63 = (((x265&x266)/x267)!=x268);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x273 = UINT16_MAX;
	volatile int16_t x274 = INT16_MIN;
	uint32_t x275 = 13U;
	int16_t x276 = 449;
	static int32_t t64 = -87871862;

    t64 = (((x273&x274)/x275)!=x276);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x277 = -57;
	int8_t x278 = INT8_MIN;
	volatile int64_t x279 = 504177LL;
	int32_t x280 = INT32_MIN;
	int32_t t65 = -6075718;

    t65 = (((x277&x278)/x279)!=x280);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x286 = -1;
	volatile int32_t x287 = INT32_MAX;
	static int32_t t66 = -344;

    t66 = (((x285&x286)/x287)!=x288);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x290 = 17;
	static int16_t x291 = INT16_MIN;
	volatile int32_t t67 = -8946;

    t67 = (((x289&x290)/x291)!=x292);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x293 = UINT16_MAX;
	static uint64_t x294 = 27LLU;
	uint64_t x295 = UINT64_MAX;
	volatile uint8_t x296 = UINT8_MAX;

    t68 = (((x293&x294)/x295)!=x296);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x298 = 300U;
	int64_t x299 = -1LL;
	int8_t x300 = INT8_MIN;
	volatile int32_t t69 = 285312;

    t69 = (((x297&x298)/x299)!=x300);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x301 = -1;
	static int8_t x302 = -1;
	int64_t x303 = INT64_MAX;
	int8_t x304 = 18;
	int32_t t70 = 1;

    t70 = (((x301&x302)/x303)!=x304);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x305 = -1;
	volatile int32_t x306 = 19505;
	static volatile int8_t x307 = INT8_MAX;
	int32_t x308 = INT32_MIN;
	int32_t t71 = 241995;

    t71 = (((x305&x306)/x307)!=x308);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x314 = INT16_MIN;
	uint8_t x315 = 1U;
	static int16_t x316 = INT16_MIN;
	int32_t t72 = -236;

    t72 = (((x313&x314)/x315)!=x316);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x317 = UINT8_MAX;
	static int32_t x318 = INT32_MAX;
	static int16_t x319 = INT16_MAX;
	uint32_t x320 = UINT32_MAX;

    t73 = (((x317&x318)/x319)!=x320);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x322 = 11610;
	static int32_t x323 = INT32_MIN;
	int64_t x324 = -32586LL;

    t74 = (((x321&x322)/x323)!=x324);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x325 = 18U;
	uint16_t x328 = 17151U;
	volatile int32_t t75 = -263732986;

    t75 = (((x325&x326)/x327)!=x328);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint8_t x329 = UINT8_MAX;
	uint16_t x330 = 0U;
	static int64_t x331 = -1LL;
	int8_t x332 = -1;
	int32_t t76 = 1;

    t76 = (((x329&x330)/x331)!=x332);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x333 = 61U;
	static int8_t x335 = INT8_MAX;
	int32_t x336 = 320431;
	int32_t t77 = 1068;

    t77 = (((x333&x334)/x335)!=x336);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x337 = UINT64_MAX;
	int32_t x338 = INT32_MIN;
	uint64_t x340 = UINT64_MAX;
	static volatile int32_t t78 = -295570631;

    t78 = (((x337&x338)/x339)!=x340);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x341 = INT64_MIN;
	static int32_t x342 = -1025891441;
	int32_t x343 = INT32_MAX;
	uint16_t x344 = 444U;
	volatile int32_t t79 = 1;

    t79 = (((x341&x342)/x343)!=x344);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x347 = -1;
	int8_t x348 = 1;
	volatile int32_t t80 = 62913736;

    t80 = (((x345&x346)/x347)!=x348);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x349 = INT64_MAX;
	int16_t x351 = 1;
	uint8_t x352 = 0U;
	volatile int32_t t81 = 13;

    t81 = (((x349&x350)/x351)!=x352);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x353 = 0U;
	volatile int32_t x354 = INT32_MIN;
	uint8_t x356 = 47U;
	volatile int32_t t82 = -8158;

    t82 = (((x353&x354)/x355)!=x356);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x357 = INT8_MIN;
	uint16_t x358 = UINT16_MAX;
	int16_t x359 = INT16_MAX;
	int64_t x360 = INT64_MIN;
	volatile int32_t t83 = -452;

    t83 = (((x357&x358)/x359)!=x360);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x361 = INT32_MIN;
	uint16_t x362 = 35U;
	static int16_t x363 = -1;
	int16_t x364 = 786;

    t84 = (((x361&x362)/x363)!=x364);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x365 = INT16_MAX;
	volatile int32_t x366 = INT32_MIN;
	volatile int8_t x367 = INT8_MIN;
	static uint64_t x368 = 522769943599310358LLU;
	volatile int32_t t85 = -60;

    t85 = (((x365&x366)/x367)!=x368);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x373 = INT32_MIN;
	int8_t x375 = INT8_MIN;
	static int16_t x376 = INT16_MIN;

    t86 = (((x373&x374)/x375)!=x376);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x377 = -1LL;
	int8_t x378 = INT8_MIN;
	int64_t x379 = -7LL;
	uint8_t x380 = 40U;
	int32_t t87 = -18962;

    t87 = (((x377&x378)/x379)!=x380);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x381 = UINT8_MAX;
	int16_t x382 = -1;
	uint64_t x383 = UINT64_MAX;
	uint64_t x384 = 914900641LLU;
	static volatile int32_t t88 = 764;

    t88 = (((x381&x382)/x383)!=x384);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x385 = INT32_MIN;
	int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MAX;
	volatile int64_t x388 = 39245993LL;
	int32_t t89 = 67024;

    t89 = (((x385&x386)/x387)!=x388);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x389 = 58U;
	int32_t x391 = INT32_MIN;
	uint8_t x392 = 62U;
	volatile int32_t t90 = -168063013;

    t90 = (((x389&x390)/x391)!=x392);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x393 = 1LL;
	static int16_t x394 = INT16_MIN;
	int16_t x395 = INT16_MIN;
	uint16_t x396 = UINT16_MAX;

    t91 = (((x393&x394)/x395)!=x396);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x398 = -2;
	static uint64_t x399 = 542436526162333619LLU;
	volatile uint64_t x400 = 125703124LLU;
	volatile int32_t t92 = -131752158;

    t92 = (((x397&x398)/x399)!=x400);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x401 = 14030651435LLU;
	volatile int32_t t93 = 9811;

    t93 = (((x401&x402)/x403)!=x404);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x405 = -1;
	volatile int64_t x406 = -33167320312549LL;
	int8_t x407 = 1;
	int32_t x408 = 0;
	int32_t t94 = 1614492;

    t94 = (((x405&x406)/x407)!=x408);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x409 = -1;
	uint64_t x410 = 612312195769815LLU;
	volatile uint64_t x412 = 36309891803919146LLU;
	volatile int32_t t95 = 8;

    t95 = (((x409&x410)/x411)!=x412);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x413 = 179107U;
	int16_t x414 = INT16_MIN;
	int32_t x415 = -188400;
	int32_t x416 = -14730;
	volatile int32_t t96 = 15621840;

    t96 = (((x413&x414)/x415)!=x416);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x417 = 5735U;
	int16_t x418 = -1;
	int32_t x419 = INT32_MIN;
	volatile uint64_t x420 = 818494423LLU;
	int32_t t97 = -49956;

    t97 = (((x417&x418)/x419)!=x420);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x421 = -257612263;
	int32_t x422 = -1;
	int32_t x423 = -1;
	static int32_t t98 = 346928648;

    t98 = (((x421&x422)/x423)!=x424);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x425 = -1;
	int8_t x426 = 31;
	uint64_t x428 = 237LLU;
	int32_t t99 = -1;

    t99 = (((x425&x426)/x427)!=x428);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x429 = -14026;
	uint16_t x431 = UINT16_MAX;
	volatile uint16_t x432 = 17340U;

    t100 = (((x429&x430)/x431)!=x432);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x433 = UINT8_MAX;
	static volatile int32_t x434 = -197537186;
	volatile uint32_t x435 = 199039493U;
	int32_t x436 = 6695;

    t101 = (((x433&x434)/x435)!=x436);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x438 = INT64_MIN;
	uint32_t x440 = 12U;

    t102 = (((x437&x438)/x439)!=x440);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x441 = INT64_MAX;
	volatile int32_t x442 = 22603;
	volatile int64_t x443 = 66679243513683LL;
	uint16_t x444 = UINT16_MAX;
	int32_t t103 = -10327;

    t103 = (((x441&x442)/x443)!=x444);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x446 = -1;
	static int64_t x447 = 1997LL;
	volatile uint8_t x448 = 3U;

    t104 = (((x445&x446)/x447)!=x448);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x449 = INT32_MIN;
	int64_t x450 = INT64_MIN;
	uint32_t x451 = UINT32_MAX;
	static int8_t x452 = 1;

    t105 = (((x449&x450)/x451)!=x452);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x453 = INT8_MAX;
	int16_t x454 = -1;
	uint64_t x455 = 1LLU;
	int8_t x456 = -1;
	static volatile int32_t t106 = 418689;

    t106 = (((x453&x454)/x455)!=x456);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x457 = UINT32_MAX;
	int16_t x458 = 337;
	int8_t x459 = INT8_MAX;
	int16_t x460 = INT16_MAX;
	volatile int32_t t107 = 116664;

    t107 = (((x457&x458)/x459)!=x460);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x461 = -1;
	static int64_t x462 = INT64_MIN;
	int16_t x464 = INT16_MIN;
	volatile int32_t t108 = 521807;

    t108 = (((x461&x462)/x463)!=x464);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x465 = INT8_MIN;
	uint16_t x466 = 28U;
	volatile int16_t x467 = INT16_MIN;
	int16_t x468 = INT16_MAX;

    t109 = (((x465&x466)/x467)!=x468);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint64_t x469 = 73002317749538476LLU;
	uint16_t x470 = 1U;
	static uint32_t x471 = 1U;
	uint8_t x472 = 8U;

    t110 = (((x469&x470)/x471)!=x472);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x473 = -1;
	volatile int16_t x474 = INT16_MIN;
	int64_t x475 = -1LL;
	uint64_t x476 = UINT64_MAX;
	volatile int32_t t111 = 1165;

    t111 = (((x473&x474)/x475)!=x476);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x478 = 647LLU;
	int64_t x479 = -1LL;
	uint16_t x480 = 4U;
	volatile int32_t t112 = -1630;

    t112 = (((x477&x478)/x479)!=x480);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x481 = 2;
	uint32_t x482 = UINT32_MAX;
	int32_t x483 = -1;
	volatile int16_t x484 = -1;
	int32_t t113 = -1280;

    t113 = (((x481&x482)/x483)!=x484);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x486 = INT64_MAX;
	static int8_t x487 = INT8_MAX;
	volatile int32_t x488 = -1976777;

    t114 = (((x485&x486)/x487)!=x488);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x489 = INT16_MIN;
	int64_t x490 = -1LL;
	uint8_t x491 = UINT8_MAX;
	volatile int32_t t115 = 765355587;

    t115 = (((x489&x490)/x491)!=x492);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x493 = INT32_MIN;
	int16_t x494 = -1;
	int64_t x495 = -1LL;
	int32_t t116 = -105688;

    t116 = (((x493&x494)/x495)!=x496);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x501 = UINT64_MAX;
	int8_t x502 = INT8_MIN;
	volatile int64_t x504 = INT64_MAX;
	static volatile int32_t t117 = -35415497;

    t117 = (((x501&x502)/x503)!=x504);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x505 = -1LL;
	int32_t x507 = INT32_MAX;
	uint32_t x508 = UINT32_MAX;
	static volatile int32_t t118 = -173247;

    t118 = (((x505&x506)/x507)!=x508);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x509 = INT32_MAX;
	int64_t x510 = INT64_MIN;
	int8_t x511 = INT8_MAX;
	volatile int32_t t119 = -132555;

    t119 = (((x509&x510)/x511)!=x512);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x513 = INT32_MIN;
	int64_t x515 = INT64_MAX;
	volatile uint64_t x516 = 1212208928048730LLU;
	static int32_t t120 = -50032;

    t120 = (((x513&x514)/x515)!=x516);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x517 = INT32_MIN;
	uint64_t x518 = 49LLU;
	volatile int16_t x519 = INT16_MAX;
	volatile int8_t x520 = INT8_MIN;

    t121 = (((x517&x518)/x519)!=x520);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x522 = INT16_MIN;
	static uint32_t x523 = 30927438U;
	static volatile int64_t x524 = -1LL;
	int32_t t122 = 3;

    t122 = (((x521&x522)/x523)!=x524);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x526 = UINT16_MAX;
	int64_t x527 = -1123104LL;
	static int64_t x528 = INT64_MIN;

    t123 = (((x525&x526)/x527)!=x528);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x529 = 2;
	uint8_t x530 = 1U;
	int64_t x531 = -44032477LL;
	volatile int32_t t124 = -198653;

    t124 = (((x529&x530)/x531)!=x532);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x533 = -1;
	uint8_t x534 = 4U;
	int8_t x535 = INT8_MIN;
	static volatile int32_t t125 = -6094317;

    t125 = (((x533&x534)/x535)!=x536);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x537 = 5;
	static uint16_t x538 = UINT16_MAX;
	int8_t x539 = -1;
	uint16_t x540 = 10752U;

    t126 = (((x537&x538)/x539)!=x540);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x541 = INT16_MIN;
	int64_t x542 = -3046992747LL;
	uint16_t x543 = UINT16_MAX;
	volatile int16_t x544 = INT16_MAX;

    t127 = (((x541&x542)/x543)!=x544);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x545 = INT64_MAX;
	int64_t x547 = 1540638692288LL;

    t128 = (((x545&x546)/x547)!=x548);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x549 = INT32_MIN;
	int8_t x550 = INT8_MAX;
	static int8_t x551 = INT8_MIN;
	uint16_t x552 = 394U;
	int32_t t129 = -963095461;

    t129 = (((x549&x550)/x551)!=x552);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x553 = 2U;
	int32_t t130 = -1816;

    t130 = (((x553&x554)/x555)!=x556);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x557 = INT32_MIN;
	uint8_t x558 = 6U;
	volatile uint32_t x559 = 23716845U;
	static uint64_t x560 = 2593760841LLU;

    t131 = (((x557&x558)/x559)!=x560);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x562 = -1;
	uint32_t x563 = UINT32_MAX;
	static int64_t x564 = 243678243350LL;
	static int32_t t132 = 4;

    t132 = (((x561&x562)/x563)!=x564);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x565 = INT64_MIN;
	int64_t x566 = INT64_MAX;
	volatile uint16_t x567 = 1616U;
	volatile int32_t t133 = -28578177;

    t133 = (((x565&x566)/x567)!=x568);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x569 = -16730975;
	int16_t x570 = -1;
	int64_t x571 = -112407450LL;
	volatile uint64_t x572 = UINT64_MAX;
	volatile int32_t t134 = 0;

    t134 = (((x569&x570)/x571)!=x572);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x573 = -1;
	static int16_t x574 = -6817;
	int8_t x575 = -1;
	static int32_t x576 = 365057538;
	static volatile int32_t t135 = 200577163;

    t135 = (((x573&x574)/x575)!=x576);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x577 = 10U;
	uint64_t x578 = UINT64_MAX;
	int16_t x579 = -1;
	uint32_t x580 = 217132U;
	static int32_t t136 = 7357;

    t136 = (((x577&x578)/x579)!=x580);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x584 = 0;
	int32_t t137 = 911713;

    t137 = (((x581&x582)/x583)!=x584);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x585 = UINT8_MAX;
	uint64_t x586 = UINT64_MAX;
	uint32_t x587 = 103265U;
	int8_t x588 = 1;
	static volatile int32_t t138 = -1;

    t138 = (((x585&x586)/x587)!=x588);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x589 = -853746421445543LL;
	int32_t x590 = INT32_MIN;
	static int16_t x591 = -1;
	static volatile int32_t t139 = 7862;

    t139 = (((x589&x590)/x591)!=x592);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x593 = INT32_MIN;
	int32_t x595 = -20;
	int16_t x596 = INT16_MIN;
	static int32_t t140 = -27974;

    t140 = (((x593&x594)/x595)!=x596);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x598 = -5;
	int64_t x599 = -25186056872875724LL;
	volatile int32_t t141 = -3909486;

    t141 = (((x597&x598)/x599)!=x600);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x601 = 6U;
	uint8_t x602 = 49U;
	uint8_t x603 = 14U;
	volatile int32_t t142 = 13;

    t142 = (((x601&x602)/x603)!=x604);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x605 = 0U;
	static int32_t x606 = INT32_MIN;
	static volatile uint16_t x608 = 24U;
	volatile int32_t t143 = 2015;

    t143 = (((x605&x606)/x607)!=x608);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x609 = 57U;
	uint16_t x611 = UINT16_MAX;
	static uint64_t x612 = UINT64_MAX;
	volatile int32_t t144 = 506968614;

    t144 = (((x609&x610)/x611)!=x612);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x614 = -1;
	volatile uint8_t x616 = 1U;

    t145 = (((x613&x614)/x615)!=x616);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x617 = INT16_MIN;
	int8_t x618 = INT8_MAX;
	static uint32_t x619 = 1410U;
	int32_t t146 = -2;

    t146 = (((x617&x618)/x619)!=x620);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x621 = UINT32_MAX;
	uint64_t x622 = UINT64_MAX;
	static volatile uint16_t x623 = UINT16_MAX;
	int8_t x624 = INT8_MIN;
	int32_t t147 = 1955768;

    t147 = (((x621&x622)/x623)!=x624);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x625 = UINT16_MAX;
	volatile int64_t x627 = INT64_MAX;
	int32_t x628 = INT32_MIN;
	volatile int32_t t148 = -386;

    t148 = (((x625&x626)/x627)!=x628);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x629 = -2;
	volatile int8_t x631 = INT8_MIN;
	int8_t x632 = -1;
	volatile int32_t t149 = 2995;

    t149 = (((x629&x630)/x631)!=x632);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x633 = 1438;
	uint64_t x634 = UINT64_MAX;
	int8_t x636 = -3;
	int32_t t150 = -68;

    t150 = (((x633&x634)/x635)!=x636);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x638 = 9646U;
	static int32_t x640 = -1;
	int32_t t151 = -3610;

    t151 = (((x637&x638)/x639)!=x640);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x641 = -68967;
	static int16_t x642 = INT16_MIN;
	static volatile uint16_t x643 = UINT16_MAX;

    t152 = (((x641&x642)/x643)!=x644);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x645 = 3;
	int32_t x646 = INT32_MIN;
	static int16_t x647 = -1470;
	volatile int32_t t153 = 247;

    t153 = (((x645&x646)/x647)!=x648);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x649 = -1267;
	static uint32_t x650 = UINT32_MAX;
	int8_t x651 = INT8_MIN;
	int32_t x652 = INT32_MIN;
	static int32_t t154 = -101523725;

    t154 = (((x649&x650)/x651)!=x652);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x654 = 174;
	static int32_t x655 = -1;
	int16_t x656 = INT16_MIN;
	volatile int32_t t155 = 318;

    t155 = (((x653&x654)/x655)!=x656);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x657 = INT16_MAX;
	static volatile int16_t x658 = INT16_MAX;
	int32_t x660 = 57527782;
	static volatile int32_t t156 = -1;

    t156 = (((x657&x658)/x659)!=x660);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x661 = 3U;
	volatile int32_t x663 = -1;
	uint8_t x664 = 1U;
	volatile int32_t t157 = 5;

    t157 = (((x661&x662)/x663)!=x664);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x665 = 337705109234LLU;
	volatile uint32_t x666 = 275040U;
	int32_t x667 = -57987;
	uint16_t x668 = UINT16_MAX;
	int32_t t158 = -28;

    t158 = (((x665&x666)/x667)!=x668);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x670 = UINT16_MAX;
	static uint64_t x671 = 1LLU;
	int16_t x672 = 0;
	volatile int32_t t159 = -34566;

    t159 = (((x669&x670)/x671)!=x672);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x674 = UINT64_MAX;
	volatile int8_t x675 = 23;
	static volatile int32_t t160 = -361;

    t160 = (((x673&x674)/x675)!=x676);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x677 = UINT16_MAX;
	uint32_t x680 = 100U;
	volatile int32_t t161 = -16560346;

    t161 = (((x677&x678)/x679)!=x680);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x681 = -31;
	int32_t x683 = INT32_MAX;
	static int16_t x684 = -1;
	static int32_t t162 = -1370;

    t162 = (((x681&x682)/x683)!=x684);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x689 = INT16_MAX;
	int16_t x690 = INT16_MIN;
	int32_t x691 = INT32_MIN;
	static volatile int16_t x692 = 13331;
	int32_t t163 = 58;

    t163 = (((x689&x690)/x691)!=x692);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x693 = UINT64_MAX;
	int64_t x694 = 15448LL;
	static int32_t t164 = -15440157;

    t164 = (((x693&x694)/x695)!=x696);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x697 = 1901250752LL;
	uint8_t x698 = 30U;
	int32_t x700 = -13806;

    t165 = (((x697&x698)/x699)!=x700);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x705 = 9232U;
	uint64_t x706 = UINT64_MAX;
	volatile int64_t x707 = -1LL;
	static int64_t x708 = INT64_MAX;
	static int32_t t166 = 27;

    t166 = (((x705&x706)/x707)!=x708);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x710 = -1;
	int8_t x712 = -9;
	volatile int32_t t167 = -5;

    t167 = (((x709&x710)/x711)!=x712);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x713 = INT8_MAX;
	int32_t x714 = INT32_MAX;
	uint8_t x715 = 124U;
	static int32_t t168 = 107404;

    t168 = (((x713&x714)/x715)!=x716);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint64_t x717 = 16928LLU;
	uint32_t x718 = 1759949803U;
	uint16_t x719 = UINT16_MAX;
	static volatile int32_t t169 = 81;

    t169 = (((x717&x718)/x719)!=x720);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x721 = 4U;
	int8_t x722 = -1;
	volatile uint8_t x723 = 1U;
	uint8_t x724 = 55U;
	volatile int32_t t170 = 3597466;

    t170 = (((x721&x722)/x723)!=x724);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x725 = UINT64_MAX;
	uint64_t x726 = 355422603LLU;
	uint16_t x727 = UINT16_MAX;
	int16_t x728 = -1;
	int32_t t171 = 461322;

    t171 = (((x725&x726)/x727)!=x728);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x729 = INT16_MIN;
	uint8_t x732 = UINT8_MAX;
	volatile int32_t t172 = -9128184;

    t172 = (((x729&x730)/x731)!=x732);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x733 = INT64_MAX;
	int32_t x735 = INT32_MIN;
	uint64_t x736 = 43384191201LLU;
	volatile int32_t t173 = -20307425;

    t173 = (((x733&x734)/x735)!=x736);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x737 = UINT16_MAX;
	static volatile int32_t x738 = INT32_MIN;
	volatile int16_t x739 = INT16_MIN;
	int32_t x740 = -786629861;
	volatile int32_t t174 = 976;

    t174 = (((x737&x738)/x739)!=x740);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x741 = UINT8_MAX;
	uint64_t x743 = 6684852247233852082LLU;
	volatile int8_t x744 = INT8_MAX;
	volatile int32_t t175 = -164347789;

    t175 = (((x741&x742)/x743)!=x744);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x746 = INT16_MIN;
	static int8_t x747 = -2;
	volatile int32_t t176 = 1033843;

    t176 = (((x745&x746)/x747)!=x748);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x749 = 9U;
	static uint32_t x752 = 2U;

    t177 = (((x749&x750)/x751)!=x752);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x753 = INT16_MIN;
	int16_t x754 = -339;
	static int16_t x755 = -49;
	volatile int32_t x756 = -429713113;
	volatile int32_t t178 = -201340441;

    t178 = (((x753&x754)/x755)!=x756);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x757 = 68U;
	uint8_t x760 = UINT8_MAX;
	int32_t t179 = -6901;

    t179 = (((x757&x758)/x759)!=x760);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x761 = 32278501842074276LLU;
	uint16_t x763 = 6U;
	int32_t x764 = INT32_MIN;
	int32_t t180 = 3338;

    t180 = (((x761&x762)/x763)!=x764);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x765 = INT32_MIN;
	int8_t x766 = INT8_MIN;
	static int8_t x767 = INT8_MIN;

    t181 = (((x765&x766)/x767)!=x768);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x770 = -1;
	static uint16_t x771 = 6U;
	int8_t x772 = -4;

    t182 = (((x769&x770)/x771)!=x772);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x773 = INT32_MAX;
	int8_t x774 = -1;
	volatile int16_t x775 = -1;
	static int32_t t183 = -1;

    t183 = (((x773&x774)/x775)!=x776);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x777 = -2067;
	static uint8_t x778 = 5U;
	int16_t x779 = INT16_MAX;
	volatile int32_t t184 = 56;

    t184 = (((x777&x778)/x779)!=x780);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x781 = -50;
	int8_t x782 = INT8_MIN;
	static int32_t x784 = INT32_MIN;
	volatile int32_t t185 = -254817;

    t185 = (((x781&x782)/x783)!=x784);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x785 = INT8_MIN;
	int8_t x786 = -10;
	volatile int16_t x787 = INT16_MAX;
	uint8_t x788 = 46U;
	int32_t t186 = 38174;

    t186 = (((x785&x786)/x787)!=x788);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x789 = 3U;
	int32_t x792 = 29;
	static int32_t t187 = -32;

    t187 = (((x789&x790)/x791)!=x792);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x797 = -1847;
	static int8_t x798 = INT8_MAX;
	volatile int32_t t188 = -46854;

    t188 = (((x797&x798)/x799)!=x800);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x805 = 21U;
	static volatile int64_t x806 = INT64_MIN;
	uint8_t x807 = UINT8_MAX;
	int32_t x808 = 14;
	static volatile int32_t t189 = 807327701;

    t189 = (((x805&x806)/x807)!=x808);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x809 = INT16_MIN;
	int8_t x810 = INT8_MIN;
	int32_t t190 = -11;

    t190 = (((x809&x810)/x811)!=x812);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x813 = UINT8_MAX;
	int32_t x814 = INT32_MAX;
	volatile int8_t x815 = 36;
	int8_t x816 = INT8_MAX;
	volatile int32_t t191 = -789;

    t191 = (((x813&x814)/x815)!=x816);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x818 = INT8_MIN;
	int32_t x819 = INT32_MIN;
	int32_t x820 = -18718581;
	volatile int32_t t192 = 13930939;

    t192 = (((x817&x818)/x819)!=x820);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x822 = 1U;
	uint32_t x823 = 101957424U;
	static int16_t x824 = INT16_MIN;

    t193 = (((x821&x822)/x823)!=x824);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x825 = INT8_MAX;
	int16_t x826 = -1;
	static int8_t x827 = INT8_MIN;
	volatile int32_t t194 = 16241;

    t194 = (((x825&x826)/x827)!=x828);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x829 = INT64_MIN;
	volatile int16_t x830 = 2649;
	volatile int16_t x831 = INT16_MAX;
	int32_t x832 = INT32_MIN;
	static volatile int32_t t195 = -3;

    t195 = (((x829&x830)/x831)!=x832);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x833 = -663958494;
	volatile int16_t x834 = INT16_MIN;

    t196 = (((x833&x834)/x835)!=x836);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x837 = 3U;
	int8_t x838 = -1;
	int32_t x839 = 4;
	int16_t x840 = -1;
	volatile int32_t t197 = -14;

    t197 = (((x837&x838)/x839)!=x840);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int64_t x842 = INT64_MAX;
	volatile uint64_t x843 = 6129557LLU;
	int32_t x844 = -110561180;

    t198 = (((x841&x842)/x843)!=x844);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x845 = INT16_MIN;
	int8_t x846 = INT8_MIN;
	uint32_t x847 = 262688093U;
	uint32_t x848 = 3U;
	int32_t t199 = -25;

    t199 = (((x845&x846)/x847)!=x848);

    if (t199 != 1) { NG(); } else { ; }
	
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

