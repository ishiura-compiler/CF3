
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

static uint64_t x3 = UINT64_MAX;
uint16_t x6 = 641U;
volatile int16_t x7 = -1;
static uint64_t x8 = 59620861902LLU;
static int64_t x16 = INT64_MAX;
static uint64_t t3 = 363546LLU;
static volatile int32_t t7 = -1733;
static uint16_t x53 = 13489U;
int64_t x54 = -3164894LL;
uint16_t x55 = 46U;
volatile uint8_t x57 = 1U;
int8_t x60 = INT8_MAX;
static int64_t t10 = 35045LL;
int8_t x62 = -1;
int64_t x63 = -1LL;
volatile int16_t x65 = INT16_MAX;
int8_t x67 = INT8_MIN;
uint8_t x68 = 116U;
volatile uint32_t t13 = 30211783U;
volatile int8_t x80 = -2;
volatile int64_t x81 = 1827789263332766LL;
static uint64_t t16 = 1LLU;
int64_t x97 = INT64_MAX;
int64_t t19 = -758808972187LL;
int64_t x111 = INT64_MAX;
static int8_t x141 = INT8_MIN;
uint64_t x143 = 1370361LLU;
int32_t x145 = INT32_MIN;
uint64_t x146 = UINT64_MAX;
int8_t x155 = INT8_MAX;
volatile uint32_t t28 = 91340U;
uint8_t x160 = 8U;
int64_t x162 = -1LL;
int64_t t30 = 55930LL;
int32_t x171 = INT32_MAX;
static volatile int8_t x172 = INT8_MAX;
uint8_t x175 = 5U;
int8_t x180 = -1;
int32_t t34 = 1959613;
uint16_t x186 = 12524U;
uint16_t x187 = 3876U;
volatile int64_t x202 = INT64_MAX;
uint32_t x208 = 1778U;
int64_t t40 = -9424610264525LL;
uint64_t t41 = UINT64_MAX;
volatile uint64_t x214 = 9066357LLU;
volatile uint64_t t42 = 706444866LLU;
uint64_t x220 = 544042565732479824LLU;
volatile int64_t x228 = 13267221LL;
int64_t t46 = 1LL;
int32_t x238 = 712;
volatile int32_t x241 = -1;
volatile uint16_t x249 = 1374U;
volatile int64_t t50 = -2774660145792LL;
int64_t x261 = -1LL;
int32_t x262 = -24178;
int16_t x264 = INT16_MIN;
volatile int64_t t53 = -30946196LL;
volatile int64_t t54 = -2601773578892434504LL;
int64_t x272 = INT64_MIN;
int32_t x275 = INT32_MAX;
int16_t x280 = -50;
uint32_t x283 = 82371945U;
uint16_t x284 = UINT16_MAX;
uint16_t x287 = UINT16_MAX;
int64_t x293 = -1LL;
static int64_t x299 = INT64_MIN;
int8_t x307 = INT8_MIN;
static uint32_t x313 = UINT32_MAX;
int32_t x322 = INT32_MAX;
int16_t x326 = -1;
volatile uint64_t t69 = 135217671884768LLU;
int64_t x346 = 194897964LL;
int32_t x348 = INT32_MAX;
static int16_t x359 = -1;
uint32_t x362 = 321707U;
uint64_t t78 = 206268252987017391LLU;
int64_t t81 = INT64_MIN;
uint32_t x405 = 65514371U;
int64_t t83 = -3600LL;
int8_t x409 = INT8_MIN;
int8_t x423 = INT8_MAX;
int32_t x429 = -1;
uint32_t x447 = UINT32_MAX;
static volatile int64_t x449 = INT64_MIN;
int16_t x450 = -6;
int64_t t91 = 262763174859307467LL;
volatile int16_t x456 = INT16_MIN;
volatile uint64_t x460 = UINT64_MAX;
uint64_t x466 = 11443482739820LLU;
volatile int64_t x468 = -52755679506001LL;
int32_t x473 = -108;
uint8_t x475 = 12U;
uint64_t x481 = 0LLU;
uint64_t t98 = 8081LLU;
volatile int16_t x490 = -1;
int32_t x492 = 5322;
uint64_t t101 = 15030389507LLU;
static volatile uint16_t x497 = UINT16_MAX;
int64_t x499 = INT64_MAX;
static int8_t x500 = INT8_MAX;
int64_t x501 = -1LL;
uint8_t x506 = 22U;
uint32_t x507 = UINT32_MAX;
int8_t x510 = INT8_MAX;
volatile int16_t x516 = -1;
int16_t x523 = INT16_MIN;
int8_t x529 = 25;
int8_t x539 = INT8_MAX;
int8_t x544 = INT8_MIN;
int64_t x552 = -1LL;
volatile int64_t t115 = -1275853653865LL;
int16_t x557 = INT16_MAX;
int16_t x560 = INT16_MIN;
volatile int64_t t116 = -209823LL;
int32_t t117 = 197605;
int8_t x565 = -2;
volatile int8_t x566 = 33;
static uint32_t x574 = 56596748U;
volatile uint64_t x575 = 60005LLU;
static uint16_t x598 = 11776U;
int16_t x601 = -1;
int64_t t124 = -30LL;
int8_t x605 = INT8_MIN;
int16_t x611 = INT16_MAX;
static uint64_t t128 = UINT64_MAX;
int64_t x625 = -2994454297LL;
volatile int64_t t132 = INT64_MAX;
int32_t x643 = INT32_MAX;
static volatile int32_t t134 = -533290;
int8_t x647 = 7;
volatile uint64_t t135 = 9876247377117LLU;
uint16_t x660 = 298U;
uint64_t t136 = 777594LLU;
uint64_t t138 = 65LLU;
int32_t x692 = -6;
int64_t x694 = 301750495707920193LL;
uint32_t x699 = UINT32_MAX;
int16_t x700 = -1;
int8_t x707 = 2;
int16_t x710 = INT16_MIN;
uint64_t t150 = 236915LLU;
volatile int32_t x737 = INT32_MIN;
int16_t x738 = 2934;
int64_t x739 = INT64_MAX;
int64_t x740 = INT64_MIN;
volatile int8_t x748 = 0;
int8_t x756 = 1;
int16_t x762 = INT16_MIN;
int64_t x768 = INT64_MIN;
static uint64_t x779 = UINT64_MAX;
int32_t x786 = INT32_MAX;
int32_t x791 = INT32_MAX;
uint32_t x792 = UINT32_MAX;
uint64_t t163 = 1327LLU;
int16_t x799 = -1;
uint8_t x816 = UINT8_MAX;
int32_t t165 = -23909251;
int64_t x820 = INT64_MIN;
volatile int8_t x821 = 18;
int16_t x828 = INT16_MAX;
int8_t x838 = INT8_MAX;
static int32_t t169 = -492;
uint64_t t171 = 291444LLU;
int32_t x855 = INT32_MIN;
uint32_t x856 = 177338963U;
int8_t x864 = INT8_MAX;
static int64_t x869 = INT64_MAX;
volatile int32_t x871 = INT32_MAX;
volatile int32_t x873 = -29538738;
volatile int8_t x877 = INT8_MAX;
volatile uint64_t t179 = UINT64_MAX;
int64_t x899 = INT64_MIN;
int64_t x901 = INT64_MAX;
volatile int16_t x903 = -41;
int64_t x904 = INT64_MIN;
volatile int64_t t181 = -275919565LL;
int16_t x909 = 0;
static volatile uint64_t x910 = 1901076LLU;
uint8_t x911 = 48U;
static int32_t x914 = 58;
volatile uint32_t t185 = 1U;
int16_t x926 = INT16_MIN;
static int32_t x927 = INT32_MIN;
int32_t t186 = 2008948;
int32_t x934 = -1;
int16_t x944 = 0;
uint8_t x963 = UINT8_MAX;
volatile uint16_t x968 = UINT16_MAX;
static int16_t x977 = INT16_MIN;
volatile int32_t x979 = INT32_MIN;
volatile int32_t x1006 = INT32_MAX;
static uint8_t x1007 = UINT8_MAX;
volatile int64_t t198 = -1110266LL;
int8_t x1013 = 3;
static int8_t x1014 = INT8_MIN;
uint32_t x1016 = UINT32_MAX;


void f0(void) {
    	int32_t x1 = -1;
	int8_t x2 = INT8_MIN;
	static int64_t x4 = -73454426760LL;
	volatile uint64_t t0 = 132787178452499LLU;

    t0 = ((x1%(x2&x3))|x4);

    if (t0 != 18446744000255124863LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MIN;
	uint64_t t1 = 756LLU;

    t1 = ((x5%(x6&x7))|x8);

    if (t1 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int16_t x13 = INT16_MIN;
	int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MAX;
	volatile int64_t t2 = 8716087436499LL;

    t2 = ((x13%(x14&x15))|x16);

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = UINT64_MAX;
	int8_t x18 = INT8_MIN;
	static int8_t x19 = INT8_MIN;
	int32_t x20 = -55571874;

    t3 = ((x17%(x18&x19))|x20);

    if (t3 != 18446744073653979775LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	uint8_t x35 = 1U;
	uint64_t x36 = 27480382LLU;
	volatile uint64_t t4 = 810356563682142233LLU;

    t4 = ((x33%(x34&x35))|x36);

    if (t4 != 27480382LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x37 = 9U;
	uint32_t x38 = 128U;
	int16_t x39 = -1;
	int16_t x40 = INT16_MIN;
	uint32_t t5 = 3522U;

    t5 = ((x37%(x38&x39))|x40);

    if (t5 != 4294934537U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x41 = 95960792948338043LLU;
	int64_t x42 = -7080663134369LL;
	int64_t x43 = INT64_MAX;
	int16_t x44 = -1;
	volatile uint64_t t6 = UINT64_MAX;

    t6 = ((x41%(x42&x43))|x44);

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int8_t x45 = -1;
	uint16_t x46 = UINT16_MAX;
	static uint16_t x47 = 1U;
	static int8_t x48 = 63;

    t7 = ((x45%(x46&x47))|x48);

    if (t7 != 63) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x49 = -1;
	int8_t x50 = -17;
	uint32_t x51 = 535290350U;
	int32_t x52 = -1;
	volatile uint32_t t8 = UINT32_MAX;

    t8 = ((x49%(x50&x51))|x52);

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x56 = 351915569LLU;
	volatile uint64_t t9 = 4LLU;

    t9 = ((x53%(x54&x55))|x56);

    if (t9 != 351915577LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x58 = 35427425LL;
	volatile int16_t x59 = INT16_MAX;

    t10 = ((x57%(x58&x59))|x60);

    if (t10 != 127LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x61 = 920479346218LL;
	int32_t x64 = -1;
	volatile int64_t t11 = -94825386LL;

    t11 = ((x61%(x62&x63))|x64);

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x66 = INT64_MIN;
	int64_t t12 = -27062460069LL;

    t12 = ((x65%(x66&x67))|x68);

    if (t12 != 32767LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x69 = INT32_MAX;
	int8_t x70 = -1;
	uint32_t x71 = UINT32_MAX;
	uint8_t x72 = 3U;

    t13 = ((x69%(x70&x71))|x72);

    if (t13 != 2147483647U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x77 = -12;
	int16_t x78 = INT16_MIN;
	uint16_t x79 = UINT16_MAX;
	volatile int32_t t14 = 16505;

    t14 = ((x77%(x78&x79))|x80);

    if (t14 != -2) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x82 = 15464206096674837LL;
	int32_t x83 = INT32_MAX;
	int8_t x84 = 1;
	int64_t t15 = 1972688579974560LL;

    t15 = ((x81%(x82&x83))|x84);

    if (t15 != 243736259LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x85 = 2;
	volatile uint64_t x86 = UINT64_MAX;
	uint32_t x87 = UINT32_MAX;
	uint64_t x88 = 55532048421952LLU;

    t16 = ((x85%(x86&x87))|x88);

    if (t16 != 55532048421954LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x89 = 20552311600178LLU;
	int16_t x90 = INT16_MAX;
	int16_t x91 = -1;
	int16_t x92 = 2362;
	volatile uint64_t t17 = 121504620LLU;

    t17 = ((x89%(x90&x91))|x92);

    if (t17 != 10622LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint32_t x93 = UINT32_MAX;
	int32_t x94 = -84768133;
	static int64_t x95 = 1LL;
	volatile int16_t x96 = -1;
	int64_t t18 = 1LL;

    t18 = ((x93%(x94&x95))|x96);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x98 = INT16_MIN;
	static uint32_t x99 = UINT32_MAX;
	volatile int16_t x100 = INT16_MIN;

    t19 = ((x97%(x98&x99))|x100);

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x101 = INT32_MIN;
	volatile int16_t x102 = 4747;
	uint8_t x103 = 13U;
	int64_t x104 = INT64_MIN;
	static volatile int64_t t20 = -5345LL;

    t20 = ((x101%(x102&x103))|x104);

    if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x105 = UINT8_MAX;
	int32_t x106 = -6159;
	volatile uint16_t x107 = UINT16_MAX;
	volatile int16_t x108 = -49;
	int32_t t21 = 1086;

    t21 = ((x105%(x106&x107))|x108);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x109 = 239114352U;
	uint16_t x110 = 4667U;
	int8_t x112 = INT8_MIN;
	volatile int64_t t22 = -16112741LL;

    t22 = ((x109%(x110&x111))|x112);

    if (t22 != -33LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x121 = 7U;
	static int64_t x122 = INT64_MIN;
	static volatile int64_t x123 = -1LL;
	static volatile uint64_t x124 = 2032305636LLU;
	uint64_t t23 = 510413173266984LLU;

    t23 = ((x121%(x122&x123))|x124);

    if (t23 != 2032305639LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x133 = -1;
	int32_t x134 = -194766536;
	uint16_t x135 = 11198U;
	uint64_t x136 = UINT64_MAX;
	uint64_t t24 = UINT64_MAX;

    t24 = ((x133%(x134&x135))|x136);

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x137 = INT8_MIN;
	int64_t x138 = 117812LL;
	volatile uint8_t x139 = UINT8_MAX;
	static uint16_t x140 = 460U;
	volatile int64_t t25 = -12844760LL;

    t25 = ((x137%(x138&x139))|x140);

    if (t25 != -20LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x142 = INT8_MIN;
	int8_t x144 = INT8_MIN;
	volatile uint64_t t26 = 1329747161053682799LLU;

    t26 = ((x141%(x142&x143))|x144);

    if (t26 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x147 = -40;
	uint32_t x148 = 77191800U;
	static volatile uint64_t t27 = 11239LLU;

    t27 = ((x145%(x146&x147))|x148);

    if (t27 != 18446744071639259768LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x153 = INT8_MAX;
	int32_t x154 = -326576100;
	volatile uint32_t x156 = 12846924U;

    t28 = ((x153%(x154&x155))|x156);

    if (t28 != 12846927U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x157 = -1LL;
	int64_t x158 = INT64_MAX;
	uint64_t x159 = UINT64_MAX;
	volatile uint64_t t29 = 467422LLU;

    t29 = ((x157%(x158&x159))|x160);

    if (t29 != 9LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x161 = INT8_MIN;
	volatile uint8_t x163 = 2U;
	uint8_t x164 = 0U;

    t30 = ((x161%(x162&x163))|x164);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x165 = 229470267263LL;
	static int64_t x166 = INT64_MAX;
	volatile int64_t x167 = INT64_MAX;
	static uint8_t x168 = 2U;
	int64_t t31 = -120187LL;

    t31 = ((x165%(x166&x167))|x168);

    if (t31 != 229470267263LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x169 = 3;
	static uint16_t x170 = 10927U;
	int32_t t32 = 29;

    t32 = ((x169%(x170&x171))|x172);

    if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x173 = INT64_MAX;
	int16_t x174 = 207;
	static volatile int8_t x176 = 12;
	static volatile int64_t t33 = -17334297623304256LL;

    t33 = ((x173%(x174&x175))|x176);

    if (t33 != 14LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x177 = -1;
	static int8_t x178 = INT8_MIN;
	int16_t x179 = -27;

    t34 = ((x177%(x178&x179))|x180);

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x181 = -6;
	static uint32_t x182 = 8637916U;
	volatile int32_t x183 = 9;
	uint8_t x184 = UINT8_MAX;
	volatile uint32_t t35 = 1U;

    t35 = ((x181%(x182&x183))|x184);

    if (t35 != 255U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x185 = 0U;
	int64_t x188 = INT64_MIN;
	volatile int64_t t36 = INT64_MIN;

    t36 = ((x185%(x186&x187))|x188);

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x189 = -14;
	static uint8_t x190 = 102U;
	static uint8_t x191 = 3U;
	int32_t x192 = -69192;
	int32_t t37 = 2;

    t37 = ((x189%(x190&x191))|x192);

    if (t37 != -69192) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x197 = 1270005626LLU;
	uint64_t x198 = 83894LLU;
	uint64_t x199 = 298557006LLU;
	int64_t x200 = -9713690148942LL;
	volatile uint64_t t38 = 6254115225LLU;

    t38 = ((x197%(x198&x199))|x200);

    if (t38 != 18446734360019402686LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x201 = 3950U;
	uint16_t x203 = UINT16_MAX;
	volatile uint16_t x204 = 18930U;
	volatile int64_t t39 = -107024533279744792LL;

    t39 = ((x201%(x202&x203))|x204);

    if (t39 != 20478LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x205 = 122U;
	int32_t x206 = INT32_MIN;
	volatile int64_t x207 = INT64_MIN;

    t40 = ((x205%(x206&x207))|x208);

    if (t40 != 1786LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x209 = UINT8_MAX;
	int8_t x210 = INT8_MIN;
	static uint32_t x211 = 1773794998U;
	volatile uint64_t x212 = UINT64_MAX;

    t41 = ((x209%(x210&x211))|x212);

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x213 = UINT16_MAX;
	volatile uint32_t x215 = 1U;
	int8_t x216 = INT8_MIN;

    t42 = ((x213%(x214&x215))|x216);

    if (t42 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x217 = UINT16_MAX;
	int16_t x218 = INT16_MIN;
	int16_t x219 = INT16_MIN;
	volatile uint64_t t43 = 1000642739LLU;

    t43 = ((x217%(x218&x219))|x220);

    if (t43 != 544042565732499455LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MIN;
	int8_t x223 = -1;
	uint64_t x224 = 4432753094LLU;
	uint64_t t44 = 22891736677LLU;

    t44 = ((x221%(x222&x223))|x224);

    if (t44 != 4432753151LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x225 = 61U;
	int32_t x226 = INT32_MIN;
	int16_t x227 = -1;
	volatile int64_t t45 = 30358LL;

    t45 = ((x225%(x226&x227))|x228);

    if (t45 != 13267261LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x229 = 0;
	static int64_t x230 = -1LL;
	uint8_t x231 = UINT8_MAX;
	uint8_t x232 = UINT8_MAX;

    t46 = ((x229%(x230&x231))|x232);

    if (t46 != 255LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x237 = -19;
	uint64_t x239 = 10921LLU;
	uint64_t x240 = 15585809LLU;
	static uint64_t t47 = 6970270679701347LLU;

    t47 = ((x237%(x238&x239))|x240);

    if (t47 != 15586165LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x242 = -1;
	static int32_t x243 = -1;
	int16_t x244 = -1;
	volatile int32_t t48 = 64767;

    t48 = ((x241%(x242&x243))|x244);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x245 = 121U;
	volatile uint16_t x246 = UINT16_MAX;
	volatile uint32_t x247 = UINT32_MAX;
	int16_t x248 = INT16_MAX;
	uint32_t t49 = 2240041U;

    t49 = ((x245%(x246&x247))|x248);

    if (t49 != 32767U) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x250 = 78U;
	int16_t x251 = INT16_MAX;
	static int64_t x252 = 1217942696LL;

    t50 = ((x249%(x250&x251))|x252);

    if (t50 != 1217942712LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x253 = INT8_MIN;
	volatile int64_t x254 = -1LL;
	int32_t x255 = -1;
	int64_t x256 = -69136LL;
	static volatile int64_t t51 = -237953220079898913LL;

    t51 = ((x253%(x254&x255))|x256);

    if (t51 != -69136LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x257 = INT64_MAX;
	static int16_t x258 = -1;
	uint64_t x259 = UINT64_MAX;
	int16_t x260 = INT16_MAX;
	static volatile uint64_t t52 = 36348LLU;

    t52 = ((x257%(x258&x259))|x260);

    if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x263 = -384187147LL;

    t53 = ((x261%(x262&x263))|x264);

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x265 = INT8_MIN;
	int8_t x266 = INT8_MIN;
	int16_t x267 = INT16_MIN;
	int64_t x268 = -123218613670LL;

    t54 = ((x265%(x266&x267))|x268);

    if (t54 != -38LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x269 = UINT8_MAX;
	int32_t x270 = INT32_MAX;
	int16_t x271 = INT16_MIN;
	volatile int64_t t55 = -2567764363158825LL;

    t55 = ((x269%(x270&x271))|x272);

    if (t55 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x273 = -1;
	int32_t x274 = -11;
	static int32_t x276 = INT32_MIN;
	volatile int32_t t56 = -211117;

    t56 = ((x273%(x274&x275))|x276);

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x277 = INT32_MIN;
	volatile int64_t x278 = INT64_MAX;
	uint32_t x279 = 36U;
	volatile int64_t t57 = 1777LL;

    t57 = ((x277%(x278&x279))|x280);

    if (t57 != -18LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x281 = -332;
	uint32_t x282 = 26172786U;
	uint32_t t58 = 1010U;

    t58 = ((x281%(x282&x283))|x284);

    if (t58 != 8257535U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x285 = 60U;
	int64_t x286 = -8242079420265464LL;
	volatile int8_t x288 = -16;
	volatile int64_t t59 = 39251581567692158LL;

    t59 = ((x285%(x286&x287))|x288);

    if (t59 != -4LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x294 = INT32_MIN;
	uint64_t x295 = 724769102852LLU;
	volatile int16_t x296 = -1;
	static uint64_t t60 = UINT64_MAX;

    t60 = ((x293%(x294&x295))|x296);

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x297 = INT32_MAX;
	int16_t x298 = -1;
	uint64_t x300 = 119501527310845LLU;
	volatile uint64_t t61 = 2170201332290LLU;

    t61 = ((x297%(x298&x299))|x300);

    if (t61 != 119503170043903LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x301 = INT64_MIN;
	static int16_t x302 = INT16_MIN;
	int32_t x303 = INT32_MIN;
	int8_t x304 = INT8_MIN;
	volatile int64_t t62 = -7849LL;

    t62 = ((x301%(x302&x303))|x304);

    if (t62 != -128LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x305 = -1;
	uint8_t x306 = UINT8_MAX;
	uint64_t x308 = 49LLU;
	volatile uint64_t t63 = UINT64_MAX;

    t63 = ((x305%(x306&x307))|x308);

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x314 = INT16_MIN;
	static int32_t x315 = -1;
	static uint8_t x316 = UINT8_MAX;
	uint32_t t64 = 53925687U;

    t64 = ((x313%(x314&x315))|x316);

    if (t64 != 32767U) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x317 = 0U;
	uint64_t x318 = 243409798LLU;
	uint16_t x319 = UINT16_MAX;
	int64_t x320 = -3796711849227LL;
	static volatile uint64_t t65 = 24115240574199LLU;

    t65 = ((x317%(x318&x319))|x320);

    if (t65 != 18446740276997702389LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x321 = INT16_MAX;
	int16_t x323 = INT16_MIN;
	static volatile int32_t x324 = INT32_MAX;
	int32_t t66 = INT32_MAX;

    t66 = ((x321%(x322&x323))|x324);

    if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x325 = INT32_MIN;
	uint64_t x327 = UINT64_MAX;
	int8_t x328 = INT8_MAX;
	volatile uint64_t t67 = 55573392972025LLU;

    t67 = ((x325%(x326&x327))|x328);

    if (t67 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x329 = 812LL;
	int8_t x330 = -1;
	volatile int16_t x331 = INT16_MAX;
	static uint64_t x332 = UINT64_MAX;
	uint64_t t68 = UINT64_MAX;

    t68 = ((x329%(x330&x331))|x332);

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MIN;
	int64_t x339 = INT64_MIN;
	volatile uint64_t x340 = 30004873419760824LLU;

    t69 = ((x337%(x338&x339))|x340);

    if (t69 != 18446744073709551544LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x345 = 85U;
	int16_t x347 = 341;
	int64_t t70 = -75932609480828144LL;

    t70 = ((x345%(x346&x347))|x348);

    if (t70 != 2147483647LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int16_t x349 = INT16_MAX;
	uint32_t x350 = 165U;
	static uint16_t x351 = UINT16_MAX;
	int8_t x352 = INT8_MAX;
	uint32_t t71 = 15292U;

    t71 = ((x349%(x350&x351))|x352);

    if (t71 != 127U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x353 = 55U;
	static int32_t x354 = -1;
	int64_t x355 = 669232408LL;
	uint64_t x356 = UINT64_MAX;
	uint64_t t72 = UINT64_MAX;

    t72 = ((x353%(x354&x355))|x356);

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x357 = 1;
	int64_t x358 = INT64_MIN;
	static int8_t x360 = 20;
	volatile int64_t t73 = 559LL;

    t73 = ((x357%(x358&x359))|x360);

    if (t73 != 21LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x361 = -1;
	static int16_t x363 = INT16_MAX;
	int8_t x364 = INT8_MIN;
	uint32_t t74 = 39U;

    t74 = ((x361%(x362&x363))|x364);

    if (t74 != 4294967284U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x365 = 2018LL;
	static uint32_t x366 = UINT32_MAX;
	volatile uint16_t x367 = 8553U;
	int8_t x368 = INT8_MAX;
	volatile int64_t t75 = -7488LL;

    t75 = ((x365%(x366&x367))|x368);

    if (t75 != 2047LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x369 = 1;
	int16_t x370 = INT16_MIN;
	static int8_t x371 = INT8_MIN;
	uint8_t x372 = UINT8_MAX;
	static volatile int32_t t76 = 6;

    t76 = ((x369%(x370&x371))|x372);

    if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x373 = UINT64_MAX;
	static int64_t x374 = 49251482722LL;
	int32_t x375 = INT32_MIN;
	int64_t x376 = INT64_MAX;
	static volatile uint64_t t77 = 30147687881045848LLU;

    t77 = ((x373%(x374&x375))|x376);

    if (t77 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x377 = -1LL;
	uint16_t x378 = 1306U;
	uint64_t x379 = 307459280689LLU;
	int16_t x380 = INT16_MIN;

    t78 = ((x377%(x378&x379))|x380);

    if (t78 != 18446744073709519871LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x381 = INT16_MIN;
	static int8_t x382 = -1;
	int16_t x383 = -1;
	int16_t x384 = INT16_MIN;
	static volatile int32_t t79 = -336;

    t79 = ((x381%(x382&x383))|x384);

    if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x389 = -1;
	int64_t x390 = -31888343LL;
	int8_t x391 = 1;
	int64_t x392 = INT64_MIN;
	int64_t t80 = INT64_MIN;

    t80 = ((x389%(x390&x391))|x392);

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x393 = INT8_MAX;
	int32_t x394 = 11;
	static uint32_t x395 = 257397U;
	int64_t x396 = INT64_MIN;

    t81 = ((x393%(x394&x395))|x396);

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x401 = INT8_MIN;
	static int8_t x402 = INT8_MIN;
	static int32_t x403 = -1;
	int64_t x404 = 12750691LL;
	static int64_t t82 = -22593LL;

    t82 = ((x401%(x402&x403))|x404);

    if (t82 != 12750691LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x406 = INT8_MIN;
	int64_t x407 = -34318001025706499LL;
	static int64_t x408 = INT64_MIN;

    t83 = ((x405%(x406&x407))|x408);

    if (t83 != -9223372036789261437LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x410 = INT8_MAX;
	uint32_t x411 = 2U;
	int16_t x412 = INT16_MAX;
	uint32_t t84 = 4240649U;

    t84 = ((x409%(x410&x411))|x412);

    if (t84 != 32767U) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x413 = -36475537151125939LL;
	volatile int8_t x414 = INT8_MAX;
	volatile int8_t x415 = -60;
	static uint64_t x416 = UINT64_MAX;
	volatile uint64_t t85 = UINT64_MAX;

    t85 = ((x413%(x414&x415))|x416);

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x421 = -1;
	static int16_t x422 = -1;
	int32_t x424 = -1;
	int32_t t86 = -13900;

    t86 = ((x421%(x422&x423))|x424);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x430 = INT64_MAX;
	int8_t x431 = INT8_MIN;
	int64_t x432 = INT64_MIN;
	volatile int64_t t87 = -52LL;

    t87 = ((x429%(x430&x431))|x432);

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x437 = -1;
	int16_t x438 = -1;
	static int32_t x439 = INT32_MIN;
	static volatile uint64_t x440 = 115915919031LLU;
	volatile uint64_t t88 = UINT64_MAX;

    t88 = ((x437%(x438&x439))|x440);

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x441 = INT32_MIN;
	static int64_t x442 = INT64_MAX;
	int32_t x443 = -1;
	static int8_t x444 = INT8_MIN;
	int64_t t89 = -16732775LL;

    t89 = ((x441%(x442&x443))|x444);

    if (t89 != -128LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x445 = UINT32_MAX;
	int8_t x446 = INT8_MIN;
	int16_t x448 = INT16_MAX;
	static volatile uint32_t t90 = 3U;

    t90 = ((x445%(x446&x447))|x448);

    if (t90 != 32767U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x451 = INT8_MIN;
	int8_t x452 = 1;

    t91 = ((x449%(x450&x451))|x452);

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x453 = 0;
	uint32_t x454 = 2077172U;
	int64_t x455 = -1LL;
	int64_t t92 = 342862LL;

    t92 = ((x453%(x454&x455))|x456);

    if (t92 != -32768LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x457 = INT8_MIN;
	int16_t x458 = -1;
	static int32_t x459 = 1290;
	volatile uint64_t t93 = UINT64_MAX;

    t93 = ((x457%(x458&x459))|x460);

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x461 = INT64_MIN;
	static uint8_t x462 = 43U;
	uint32_t x463 = 228U;
	int8_t x464 = 1;
	static volatile int64_t t94 = 1363292860659577LL;

    t94 = ((x461%(x462&x463))|x464);

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x465 = INT8_MIN;
	int8_t x467 = 13;
	static volatile uint64_t t95 = 1694133844113446004LLU;

    t95 = ((x465%(x466&x467))|x468);

    if (t95 != 18446691318030045615LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int64_t x474 = INT64_MAX;
	uint8_t x476 = 0U;
	volatile int64_t t96 = -6LL;

    t96 = ((x473%(x474&x475))|x476);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int32_t x477 = 1;
	static int32_t x478 = 1;
	uint32_t x479 = UINT32_MAX;
	int32_t x480 = INT32_MAX;
	uint32_t t97 = 401852U;

    t97 = ((x477%(x478&x479))|x480);

    if (t97 != 2147483647U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x482 = 1428222U;
	uint8_t x483 = UINT8_MAX;
	int16_t x484 = 10464;

    t98 = ((x481%(x482&x483))|x484);

    if (t98 != 10464LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x485 = INT16_MAX;
	volatile int64_t x486 = -1LL;
	volatile int64_t x487 = INT64_MIN;
	int16_t x488 = -1;
	volatile int64_t t99 = 24038303LL;

    t99 = ((x485%(x486&x487))|x488);

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x489 = 7805U;
	static int64_t x491 = INT64_MAX;
	volatile int64_t t100 = -3759LL;

    t100 = ((x489%(x490&x491))|x492);

    if (t100 != 7935LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x493 = UINT64_MAX;
	uint8_t x494 = UINT8_MAX;
	int8_t x495 = -1;
	volatile int8_t x496 = 19;

    t101 = ((x493%(x494&x495))|x496);

    if (t101 != 19LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x498 = INT8_MAX;
	int64_t t102 = -29168296865205LL;

    t102 = ((x497%(x498&x499))|x500);

    if (t102 != 127LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x502 = -1;
	uint8_t x503 = UINT8_MAX;
	uint32_t x504 = 23629U;
	volatile int64_t t103 = -1380LL;

    t103 = ((x501%(x502&x503))|x504);

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x505 = UINT16_MAX;
	int16_t x508 = 2;
	volatile uint32_t t104 = 61151U;

    t104 = ((x505%(x506&x507))|x508);

    if (t104 != 19U) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint64_t x509 = 1LLU;
	volatile int16_t x511 = INT16_MAX;
	int8_t x512 = -8;
	uint64_t t105 = 106LLU;

    t105 = ((x509%(x510&x511))|x512);

    if (t105 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x513 = -877481;
	static uint32_t x514 = UINT32_MAX;
	static uint8_t x515 = UINT8_MAX;
	uint32_t t106 = UINT32_MAX;

    t106 = ((x513%(x514&x515))|x516);

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x521 = 2;
	volatile uint16_t x522 = UINT16_MAX;
	static int64_t x524 = INT64_MIN;
	static volatile int64_t t107 = -109LL;

    t107 = ((x521%(x522&x523))|x524);

    if (t107 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x525 = INT64_MIN;
	uint8_t x526 = 47U;
	uint16_t x527 = 18459U;
	int8_t x528 = -3;
	static volatile int64_t t108 = 101903LL;

    t108 = ((x525%(x526&x527))|x528);

    if (t108 != -3LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x530 = INT8_MIN;
	int32_t x531 = -1;
	uint32_t x532 = UINT32_MAX;
	volatile uint32_t t109 = UINT32_MAX;

    t109 = ((x529%(x530&x531))|x532);

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x533 = -3;
	int64_t x534 = -1LL;
	volatile int32_t x535 = INT32_MIN;
	static volatile int8_t x536 = 49;
	volatile int64_t t110 = -2976402170915LL;

    t110 = ((x533%(x534&x535))|x536);

    if (t110 != -3LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x537 = INT64_MIN;
	int32_t x538 = 380041;
	volatile int16_t x540 = 145;
	static int64_t t111 = 3968006740987LL;

    t111 = ((x537%(x538&x539))|x540);

    if (t111 != -7LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x541 = -472;
	uint64_t x542 = UINT64_MAX;
	int64_t x543 = -28LL;
	static uint64_t t112 = 769234405819LLU;

    t112 = ((x541%(x542&x543))|x544);

    if (t112 != 18446744073709551528LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x545 = 1;
	uint32_t x546 = 7413U;
	static int32_t x547 = INT32_MAX;
	int64_t x548 = 6192946618LL;
	volatile int64_t t113 = 15386056934LL;

    t113 = ((x545%(x546&x547))|x548);

    if (t113 != 6192946619LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x549 = INT32_MIN;
	volatile uint32_t x550 = UINT32_MAX;
	volatile int32_t x551 = INT32_MIN;
	int64_t t114 = 7441275LL;

    t114 = ((x549%(x550&x551))|x552);

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x553 = INT64_MIN;
	uint16_t x554 = 919U;
	uint16_t x555 = 3716U;
	uint16_t x556 = 4810U;

    t115 = ((x553%(x554&x555))|x556);

    if (t115 != -38LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x558 = INT8_MIN;
	volatile int64_t x559 = -2199742094775866465LL;

    t116 = ((x557%(x558&x559))|x560);

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x561 = 5U;
	static uint8_t x562 = UINT8_MAX;
	volatile int8_t x563 = -52;
	int8_t x564 = 12;

    t117 = ((x561%(x562&x563))|x564);

    if (t117 != 13) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x567 = -426332726636500189LL;
	volatile int16_t x568 = INT16_MIN;
	int64_t t118 = 2017778610LL;

    t118 = ((x565%(x566&x567))|x568);

    if (t118 != -2LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x569 = INT32_MIN;
	int8_t x570 = INT8_MIN;
	static uint16_t x571 = UINT16_MAX;
	uint64_t x572 = UINT64_MAX;
	volatile uint64_t t119 = UINT64_MAX;

    t119 = ((x569%(x570&x571))|x572);

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x573 = 15471737U;
	static int16_t x576 = INT16_MAX;
	uint64_t t120 = 362LLU;

    t120 = ((x573%(x574&x575))|x576);

    if (t120 != 32767LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x581 = 6;
	int16_t x582 = -1;
	int8_t x583 = INT8_MIN;
	uint32_t x584 = UINT32_MAX;
	volatile uint32_t t121 = UINT32_MAX;

    t121 = ((x581%(x582&x583))|x584);

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x589 = UINT16_MAX;
	int16_t x590 = INT16_MAX;
	static int32_t x591 = 14;
	static int32_t x592 = -1;
	int32_t t122 = -1;

    t122 = ((x589%(x590&x591))|x592);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x597 = INT16_MIN;
	int64_t x599 = 2669LL;
	static int8_t x600 = -1;
	int64_t t123 = -108303559225314LL;

    t123 = ((x597%(x598&x599))|x600);

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x602 = 1615697889U;
	volatile int16_t x603 = -3;
	int64_t x604 = 1LL;

    t124 = ((x601%(x602&x603))|x604);

    if (t124 != 1063571517LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x606 = INT16_MIN;
	int16_t x607 = -23;
	static uint16_t x608 = UINT16_MAX;
	int32_t t125 = 158;

    t125 = ((x605%(x606&x607))|x608);

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x609 = -27;
	int8_t x610 = INT8_MIN;
	int8_t x612 = -1;
	volatile int32_t t126 = 976522118;

    t126 = ((x609%(x610&x611))|x612);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint16_t x613 = 578U;
	uint32_t x614 = 303U;
	int8_t x615 = -48;
	static int64_t x616 = INT64_MIN;
	volatile int64_t t127 = 3123LL;

    t127 = ((x613%(x614&x615))|x616);

    if (t127 != -9223372036854775742LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x617 = -1;
	uint32_t x618 = UINT32_MAX;
	uint64_t x619 = 52LLU;
	int8_t x620 = -13;

    t128 = ((x617%(x618&x619))|x620);

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x621 = 359U;
	volatile uint16_t x622 = 3U;
	volatile uint16_t x623 = UINT16_MAX;
	volatile int64_t x624 = INT64_MAX;
	int64_t t129 = INT64_MAX;

    t129 = ((x621%(x622&x623))|x624);

    if (t129 != INT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x626 = UINT8_MAX;
	int32_t x627 = -957;
	volatile int16_t x628 = INT16_MIN;
	volatile int64_t t130 = -146527490225900LL;

    t130 = ((x625%(x626&x627))|x628);

    if (t130 != -48LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x629 = -1;
	uint32_t x630 = 443637U;
	static uint16_t x631 = 456U;
	int32_t x632 = 13413;
	volatile uint32_t t131 = 51464083U;

    t131 = ((x629%(x630&x631))|x632);

    if (t131 != 13439U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x633 = INT16_MAX;
	int16_t x634 = -15;
	volatile uint8_t x635 = 3U;
	int64_t x636 = INT64_MAX;

    t132 = ((x633%(x634&x635))|x636);

    if (t132 != INT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x637 = 0;
	int32_t x638 = -1;
	volatile uint32_t x639 = 211237U;
	int64_t x640 = INT64_MIN;
	volatile int64_t t133 = INT64_MIN;

    t133 = ((x637%(x638&x639))|x640);

    if (t133 != INT64_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x641 = INT32_MIN;
	int32_t x642 = -14;
	int32_t x644 = 209430;

    t134 = ((x641%(x642&x643))|x644);

    if (t134 != -10) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x645 = INT8_MIN;
	static int16_t x646 = -10100;
	volatile uint64_t x648 = 14323651201162LLU;

    t135 = ((x645%(x646&x647))|x648);

    if (t135 != 14323651201162LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x657 = UINT32_MAX;
	static int16_t x658 = INT16_MAX;
	static uint64_t x659 = UINT64_MAX;

    t136 = ((x657%(x658&x659))|x660);

    if (t136 != 299LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x669 = 809581727LLU;
	int8_t x670 = -1;
	uint64_t x671 = UINT64_MAX;
	int16_t x672 = -266;
	uint64_t t137 = 376206386LLU;

    t137 = ((x669%(x670&x671))|x672);

    if (t137 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x677 = -64457;
	int8_t x678 = INT8_MIN;
	volatile uint64_t x679 = UINT64_MAX;
	static uint32_t x680 = 3U;

    t138 = ((x677%(x678&x679))|x680);

    if (t138 != 18446744073709487159LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x685 = -393144618;
	uint64_t x686 = 434611194LLU;
	int8_t x687 = INT8_MAX;
	static uint8_t x688 = UINT8_MAX;
	static volatile uint64_t t139 = 22LLU;

    t139 = ((x685%(x686&x687))|x688);

    if (t139 != 255LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x689 = 1;
	static uint64_t x690 = 6430615708767963LLU;
	static volatile uint8_t x691 = 1U;
	volatile uint64_t t140 = 120673253606340LLU;

    t140 = ((x689%(x690&x691))|x692);

    if (t140 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x693 = INT32_MIN;
	int32_t x695 = INT32_MIN;
	static int16_t x696 = INT16_MAX;
	volatile int64_t t141 = -198447005411757502LL;

    t141 = ((x693%(x694&x695))|x696);

    if (t141 != -2147450881LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x697 = INT32_MIN;
	uint8_t x698 = 19U;
	uint32_t t142 = UINT32_MAX;

    t142 = ((x697%(x698&x699))|x700);

    if (t142 != UINT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x701 = 1394298400394LLU;
	int32_t x702 = INT32_MIN;
	int8_t x703 = -4;
	volatile int64_t x704 = -1LL;
	volatile uint64_t t143 = UINT64_MAX;

    t143 = ((x701%(x702&x703))|x704);

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x705 = -1LL;
	static uint64_t x706 = UINT64_MAX;
	static int32_t x708 = -918;
	static volatile uint64_t t144 = 236472713LLU;

    t144 = ((x705%(x706&x707))|x708);

    if (t144 != 18446744073709550699LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x709 = 1;
	int64_t x711 = INT64_MIN;
	int8_t x712 = -1;
	int64_t t145 = 15376014LL;

    t145 = ((x709%(x710&x711))|x712);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x717 = INT8_MAX;
	static uint64_t x718 = 903015637762082LLU;
	uint64_t x719 = UINT64_MAX;
	int32_t x720 = INT32_MIN;
	uint64_t t146 = 314652916126403906LLU;

    t146 = ((x717%(x718&x719))|x720);

    if (t146 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x721 = -31033739208723LL;
	uint64_t x722 = UINT64_MAX;
	static int16_t x723 = INT16_MAX;
	uint16_t x724 = 9936U;
	volatile uint64_t t147 = 200540388894831634LLU;

    t147 = ((x721%(x722&x723))|x724);

    if (t147 != 30676LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x725 = INT16_MIN;
	int16_t x726 = INT16_MAX;
	static volatile int16_t x727 = -1;
	uint32_t x728 = 2U;
	uint32_t t148 = UINT32_MAX;

    t148 = ((x725%(x726&x727))|x728);

    if (t148 != UINT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x729 = 1380921808893478605LLU;
	volatile int16_t x730 = INT16_MIN;
	int64_t x731 = -1LL;
	volatile uint32_t x732 = 1061481U;
	static uint64_t t149 = 2050435LLU;

    t149 = ((x729%(x730&x731))|x732);

    if (t149 != 1380921808894539501LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x733 = -753218731;
	uint64_t x734 = UINT64_MAX;
	static volatile int8_t x735 = INT8_MIN;
	static int16_t x736 = INT16_MAX;

    t150 = ((x733%(x734&x735))|x736);

    if (t150 != 18446744072956346367LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t t151 = 271473394676LL;

    t151 = ((x737%(x738&x739))|x740);

    if (t151 != -1028LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x741 = -1;
	static volatile int32_t x742 = -1;
	int32_t x743 = INT32_MIN;
	int8_t x744 = 25;
	volatile int32_t t152 = -974675963;

    t152 = ((x741%(x742&x743))|x744);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x745 = -1;
	int32_t x746 = -1;
	int64_t x747 = -1LL;
	volatile int64_t t153 = 0LL;

    t153 = ((x745%(x746&x747))|x748);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x749 = 2U;
	volatile int32_t x750 = INT32_MIN;
	int32_t x751 = -583262127;
	volatile int8_t x752 = 2;
	volatile int32_t t154 = 80997338;

    t154 = ((x749%(x750&x751))|x752);

    if (t154 != 2) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x753 = 0U;
	static volatile int64_t x754 = INT64_MAX;
	int32_t x755 = INT32_MIN;
	int64_t t155 = -116158218LL;

    t155 = ((x753%(x754&x755))|x756);

    if (t155 != 1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x757 = INT16_MAX;
	uint16_t x758 = 869U;
	uint16_t x759 = UINT16_MAX;
	volatile int32_t x760 = INT32_MIN;
	volatile int32_t t156 = 57;

    t156 = ((x757%(x758&x759))|x760);

    if (t156 != -2147483034) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x761 = 1;
	int64_t x763 = 117375348444LL;
	int32_t x764 = -1;
	int64_t t157 = 501517012LL;

    t157 = ((x761%(x762&x763))|x764);

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x765 = INT64_MIN;
	int16_t x766 = -1;
	volatile int64_t x767 = INT64_MIN;
	static volatile int64_t t158 = INT64_MIN;

    t158 = ((x765%(x766&x767))|x768);

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x769 = INT64_MAX;
	static volatile int32_t x770 = INT32_MAX;
	static int8_t x771 = -1;
	int16_t x772 = INT16_MIN;
	volatile int64_t t159 = -67238654733037224LL;

    t159 = ((x769%(x770&x771))|x772);

    if (t159 != -32767LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x777 = UINT8_MAX;
	volatile int64_t x778 = -4410107660LL;
	int16_t x780 = INT16_MIN;
	static volatile uint64_t t160 = 3344820598524395879LLU;

    t160 = ((x777%(x778&x779))|x780);

    if (t160 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x785 = -11081;
	int8_t x787 = -35;
	uint16_t x788 = 67U;
	int32_t t161 = 3862;

    t161 = ((x785%(x786&x787))|x788);

    if (t161 != -11017) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x789 = 17447733U;
	int32_t x790 = 100411675;
	static volatile uint32_t t162 = UINT32_MAX;

    t162 = ((x789%(x790&x791))|x792);

    if (t162 != UINT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x793 = 5852584084442878LLU;
	int32_t x794 = INT32_MIN;
	int64_t x795 = -1LL;
	uint32_t x796 = 96U;

    t163 = ((x793%(x794&x795))|x796);

    if (t163 != 5852584084442878LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x797 = 7352;
	static volatile int8_t x798 = -1;
	int16_t x800 = INT16_MIN;
	volatile int32_t t164 = -2441625;

    t164 = ((x797%(x798&x799))|x800);

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x813 = 18;
	int8_t x814 = -1;
	static int8_t x815 = INT8_MIN;

    t165 = ((x813%(x814&x815))|x816);

    if (t165 != 255) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x817 = 88792;
	uint64_t x818 = 129629756466627175LLU;
	volatile uint32_t x819 = 384052897U;
	volatile uint64_t t166 = 4295143073442201LLU;

    t166 = ((x817%(x818&x819))|x820);

    if (t166 != 9223372036854864600LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x822 = 2U;
	int16_t x823 = -1;
	uint64_t x824 = 7325LLU;
	uint64_t t167 = 14850018649LLU;

    t167 = ((x821%(x822&x823))|x824);

    if (t167 != 7325LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x825 = INT16_MIN;
	static int64_t x826 = INT64_MAX;
	static uint16_t x827 = 3U;
	int64_t t168 = -3227322670255LL;

    t168 = ((x825%(x826&x827))|x828);

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x837 = -349;
	uint8_t x839 = UINT8_MAX;
	int16_t x840 = INT16_MIN;

    t169 = ((x837%(x838&x839))|x840);

    if (t169 != -95) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x841 = INT8_MIN;
	int16_t x842 = -1;
	uint64_t x843 = 44870LLU;
	int16_t x844 = -1;
	volatile uint64_t t170 = UINT64_MAX;

    t170 = ((x841%(x842&x843))|x844);

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x849 = INT64_MIN;
	volatile int32_t x850 = -1;
	volatile int8_t x851 = INT8_MIN;
	volatile uint64_t x852 = 1850921LLU;

    t171 = ((x849%(x850&x851))|x852);

    if (t171 != 1850921LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x853 = -1;
	static int64_t x854 = INT64_MIN;
	volatile int64_t t172 = -3858150303LL;

    t172 = ((x853%(x854&x855))|x856);

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x857 = INT64_MIN;
	volatile int32_t x858 = -1;
	uint8_t x859 = 1U;
	uint64_t x860 = 14LLU;
	uint64_t t173 = 2756216578LLU;

    t173 = ((x857%(x858&x859))|x860);

    if (t173 != 14LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x861 = UINT32_MAX;
	volatile int32_t x862 = INT32_MIN;
	int8_t x863 = INT8_MIN;
	volatile uint32_t t174 = 13U;

    t174 = ((x861%(x862&x863))|x864);

    if (t174 != 2147483647U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x870 = -7;
	static uint16_t x872 = UINT16_MAX;
	int64_t t175 = -110935540171LL;

    t175 = ((x869%(x870&x871))|x872);

    if (t175 != 65535LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x874 = -4084;
	int16_t x875 = INT16_MAX;
	uint64_t x876 = UINT64_MAX;
	volatile uint64_t t176 = UINT64_MAX;

    t176 = ((x873%(x874&x875))|x876);

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x878 = UINT32_MAX;
	uint64_t x879 = 450557288815366008LLU;
	uint32_t x880 = 3075167U;
	uint64_t t177 = 10LLU;

    t177 = ((x877%(x878&x879))|x880);

    if (t177 != 3075199LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x881 = 1514873928U;
	int16_t x882 = -1;
	static uint64_t x883 = UINT64_MAX;
	volatile uint8_t x884 = 5U;
	uint64_t t178 = 7LLU;

    t178 = ((x881%(x882&x883))|x884);

    if (t178 != 1514873933LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x893 = INT8_MIN;
	int64_t x894 = INT64_MAX;
	int32_t x895 = INT32_MAX;
	uint64_t x896 = UINT64_MAX;

    t179 = ((x893%(x894&x895))|x896);

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x897 = UINT32_MAX;
	volatile uint64_t x898 = UINT64_MAX;
	int8_t x900 = 1;
	uint64_t t180 = 7612658022760612296LLU;

    t180 = ((x897%(x898&x899))|x900);

    if (t180 != 4294967295LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint8_t x902 = 53U;

    t181 = ((x901%(x902&x903))|x904);

    if (t181 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x905 = 76U;
	static int8_t x906 = INT8_MIN;
	int64_t x907 = INT64_MIN;
	static uint16_t x908 = 1U;
	int64_t t182 = 100LL;

    t182 = ((x905%(x906&x907))|x908);

    if (t182 != 77LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x912 = INT32_MIN;
	volatile uint64_t t183 = 9410LLU;

    t183 = ((x909%(x910&x911))|x912);

    if (t183 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x913 = 13;
	int8_t x915 = INT8_MAX;
	static int64_t x916 = INT64_MIN;
	static volatile int64_t t184 = 4966551484511LL;

    t184 = ((x913%(x914&x915))|x916);

    if (t184 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x917 = 3328U;
	volatile int8_t x918 = -1;
	int8_t x919 = -1;
	int8_t x920 = INT8_MIN;

    t185 = ((x917%(x918&x919))|x920);

    if (t185 != 4294967168U) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x925 = INT8_MIN;
	int16_t x928 = -1;

    t186 = ((x925%(x926&x927))|x928);

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x933 = UINT32_MAX;
	volatile int8_t x935 = INT8_MAX;
	int8_t x936 = INT8_MIN;
	volatile uint32_t t187 = 21979247U;

    t187 = ((x933%(x934&x935))|x936);

    if (t187 != 4294967183U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x941 = -1;
	int16_t x942 = 1;
	uint64_t x943 = 462052791LLU;
	volatile uint64_t t188 = 2246981430952696017LLU;

    t188 = ((x941%(x942&x943))|x944);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x949 = 1;
	volatile int32_t x950 = INT32_MAX;
	int64_t x951 = INT64_MAX;
	volatile int8_t x952 = INT8_MIN;
	int64_t t189 = 957LL;

    t189 = ((x949%(x950&x951))|x952);

    if (t189 != -127LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x953 = 52888976;
	volatile int16_t x954 = -1;
	static uint64_t x955 = 1686351074LLU;
	uint8_t x956 = 125U;
	uint64_t t190 = 674977617610923LLU;

    t190 = ((x953%(x954&x955))|x956);

    if (t190 != 52889085LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x961 = 3U;
	uint32_t x962 = 283968U;
	int16_t x964 = INT16_MAX;
	volatile uint32_t t191 = 1824375U;

    t191 = ((x961%(x962&x963))|x964);

    if (t191 != 32767U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x965 = INT16_MAX;
	int8_t x966 = -1;
	static uint64_t x967 = UINT64_MAX;
	uint64_t t192 = 241020LLU;

    t192 = ((x965%(x966&x967))|x968);

    if (t192 != 65535LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x969 = 18;
	static int8_t x970 = -9;
	uint8_t x971 = 53U;
	int16_t x972 = INT16_MAX;
	int32_t t193 = 462363333;

    t193 = ((x969%(x970&x971))|x972);

    if (t193 != 32767) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x978 = INT16_MIN;
	int32_t x980 = -1;
	int32_t t194 = -3739;

    t194 = ((x977%(x978&x979))|x980);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x981 = -251706104;
	int64_t x982 = INT64_MAX;
	uint8_t x983 = 26U;
	static int32_t x984 = -1;
	volatile int64_t t195 = -6552194LL;

    t195 = ((x981%(x982&x983))|x984);

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x1001 = -1;
	uint64_t x1002 = 325306LLU;
	int64_t x1003 = INT64_MAX;
	uint16_t x1004 = UINT16_MAX;
	volatile uint64_t t196 = 57805787857906LLU;

    t196 = ((x1001%(x1002&x1003))|x1004);

    if (t196 != 65535LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x1005 = 76338804U;
	int32_t x1008 = -2;
	uint32_t t197 = UINT32_MAX;

    t197 = ((x1005%(x1006&x1007))|x1008);

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1009 = -1;
	uint16_t x1010 = 11U;
	int8_t x1011 = 3;
	int64_t x1012 = INT64_MIN;

    t198 = ((x1009%(x1010&x1011))|x1012);

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1015 = -12643980114LL;
	int64_t t199 = -4876LL;

    t199 = ((x1013%(x1014&x1015))|x1016);

    if (t199 != 4294967295LL) { NG(); } else { ; }
	
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

