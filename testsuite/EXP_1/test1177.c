
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

static uint16_t x8 = 71U;
uint32_t x10 = UINT32_MAX;
int64_t t2 = 0LL;
int32_t x13 = -1041;
volatile int8_t x17 = 7;
static int64_t x21 = -266LL;
volatile int32_t x25 = INT32_MIN;
int64_t x48 = -157437LL;
int64_t t9 = 7298314839310060LL;
volatile uint64_t x49 = UINT64_MAX;
uint8_t x51 = 4U;
static int32_t t10 = -3;
int8_t x57 = INT8_MAX;
static volatile int16_t x60 = INT16_MIN;
int64_t t12 = -120LL;
static volatile int32_t x62 = INT32_MIN;
static volatile uint64_t x68 = UINT64_MAX;
int64_t x74 = INT64_MIN;
int32_t x78 = -1;
uint8_t x87 = 127U;
uint8_t x91 = UINT8_MAX;
int8_t x95 = -2;
int8_t x100 = -1;
int16_t x112 = INT16_MIN;
int64_t t25 = -57776063532501LL;
uint16_t x113 = UINT16_MAX;
int8_t x117 = INT8_MAX;
uint32_t x120 = UINT32_MAX;
volatile int64_t t27 = 7LL;
static int16_t x148 = INT16_MIN;
static volatile int32_t t32 = -54;
int32_t x149 = INT32_MIN;
volatile int32_t t33 = 0;
uint32_t x168 = 5269U;
int64_t x169 = INT64_MIN;
static int32_t t37 = -4;
int64_t x175 = -1LL;
volatile uint32_t x176 = 908597512U;
volatile int64_t x185 = INT64_MIN;
int32_t x203 = -1;
volatile int32_t t44 = -6;
uint64_t x215 = UINT64_MAX;
int64_t x219 = INT64_MIN;
uint64_t x228 = 250638097779328940LLU;
int8_t x230 = INT8_MIN;
volatile int64_t t50 = 255403500LL;
static int32_t t51 = 1802267;
int8_t x237 = INT8_MIN;
int16_t x246 = INT16_MAX;
int64_t x250 = INT64_MIN;
uint32_t x251 = 447U;
static int32_t t56 = -3810679;
volatile int8_t x260 = -1;
uint16_t x267 = 26812U;
int64_t x275 = 2554508796565LL;
int64_t x277 = -1LL;
static uint64_t x278 = UINT64_MAX;
static volatile int32_t x280 = -1;
volatile int32_t t61 = -63373;
int32_t x282 = INT32_MIN;
int64_t x293 = -1LL;
static int32_t x302 = 3;
static uint32_t x312 = UINT32_MAX;
uint64_t x313 = 14489813695876LLU;
static uint8_t x316 = 9U;
static int64_t x319 = 476137810461096LL;
int16_t x321 = INT16_MAX;
uint8_t x327 = 4U;
int32_t t73 = -1154;
int32_t x334 = INT32_MIN;
volatile int8_t x339 = -1;
int64_t x343 = -4288447LL;
int8_t x347 = -16;
volatile int32_t x361 = INT32_MIN;
static volatile int8_t x364 = -2;
int16_t x379 = 1;
int64_t x380 = -1LL;
int64_t x389 = INT64_MAX;
static volatile int32_t t84 = -65;
int64_t x401 = -138LL;
int16_t x402 = INT16_MAX;
uint64_t x405 = UINT64_MAX;
int64_t x406 = INT64_MIN;
static int32_t x407 = -1;
volatile int16_t x418 = -1;
static volatile int64_t t88 = -14511642430LL;
int64_t x421 = INT64_MIN;
uint32_t x424 = 849U;
static volatile uint8_t x426 = UINT8_MAX;
static int32_t t90 = 11455819;
volatile int32_t x430 = INT32_MAX;
volatile int16_t x432 = -1;
static uint64_t x436 = 139799024637LLU;
volatile uint64_t x438 = 4155445390LLU;
uint64_t x439 = 118507625LLU;
int16_t x446 = -1;
int64_t x447 = 505816158111860LL;
uint8_t x453 = 31U;
int16_t x455 = INT16_MAX;
int32_t x457 = -1;
volatile uint64_t t98 = 439444340931365LLU;
volatile uint64_t x463 = 7272LLU;
static int8_t x465 = -2;
uint32_t x467 = 6159U;
uint8_t x482 = 127U;
int8_t x488 = 7;
int32_t x492 = -68781;
int16_t x496 = INT16_MAX;
static int32_t x510 = -30;
int16_t x513 = INT16_MIN;
static volatile uint64_t x528 = UINT64_MAX;
static uint32_t x531 = 4319U;
int64_t x532 = -2377557LL;
int32_t x533 = INT32_MAX;
int32_t x536 = INT32_MIN;
uint32_t x543 = 0U;
uint32_t x548 = 6407075U;
volatile uint32_t t120 = 1214U;
volatile int64_t t121 = 2133376LL;
int32_t x570 = INT32_MIN;
uint8_t x572 = UINT8_MAX;
uint32_t t122 = 96U;
uint64_t x573 = UINT64_MAX;
int64_t x581 = 144321906LL;
uint32_t x582 = 38499U;
int32_t x589 = INT32_MIN;
uint64_t t127 = 6454027725279LLU;
int32_t x593 = INT32_MAX;
volatile int16_t x599 = INT16_MAX;
uint32_t x603 = UINT32_MAX;
int16_t x605 = INT16_MAX;
uint16_t x606 = 1U;
volatile uint64_t x607 = 49LLU;
uint64_t t131 = 4249902240641619LLU;
volatile int32_t x618 = -1;
int32_t x621 = 173925;
uint32_t x629 = 1832364U;
int16_t x631 = INT16_MAX;
uint64_t x632 = 3563216822249427168LLU;
static int16_t x651 = INT16_MIN;
static volatile uint8_t x657 = 4U;
int32_t t141 = 0;
static volatile int8_t x666 = INT8_MIN;
int64_t x668 = -1LL;
static volatile int16_t x670 = 8295;
int32_t x675 = -1;
uint8_t x684 = 28U;
volatile uint32_t x686 = UINT32_MAX;
int16_t x687 = -385;
volatile uint32_t x691 = UINT32_MAX;
static volatile uint64_t t149 = 4245293208723LLU;
int64_t x693 = INT64_MIN;
volatile int32_t t150 = 50;
static int16_t x708 = INT16_MAX;
int64_t x714 = 1219946839876290LL;
uint32_t x715 = UINT32_MAX;
static int32_t t154 = 80;
int8_t x723 = -26;
static int64_t x725 = INT64_MAX;
static uint16_t x727 = 1321U;
int16_t x729 = -7693;
static uint16_t x730 = 1752U;
static volatile uint32_t t157 = 1528U;
uint64_t x741 = 1257942119196790LLU;
volatile uint32_t x747 = 521159U;
volatile int16_t x749 = -1;
static int8_t x756 = -1;
uint64_t x764 = 7598462LLU;
uint64_t x771 = 303713908279894LLU;
static uint32_t x773 = 29U;
volatile int8_t x783 = 1;
int64_t x785 = 485076LL;
int32_t x786 = INT32_MIN;
int32_t x789 = INT32_MAX;
uint32_t x790 = 3U;
static uint8_t x792 = UINT8_MAX;
int16_t x794 = INT16_MIN;
uint16_t x797 = UINT16_MAX;
volatile uint8_t x801 = UINT8_MAX;
int32_t t174 = 199285185;
volatile int64_t x805 = -1LL;
int16_t x813 = -1373;
volatile uint64_t t176 = 46LLU;
volatile int16_t x824 = INT16_MIN;
int8_t x825 = INT8_MIN;
int16_t x827 = INT16_MAX;
static int8_t x834 = -6;
int8_t x836 = -8;
volatile int32_t t181 = 23;
static uint32_t x856 = UINT32_MAX;
volatile uint32_t t187 = 974U;
uint32_t x870 = 31616192U;
int32_t x875 = INT32_MIN;
int8_t x878 = INT8_MIN;
volatile uint8_t x882 = 63U;
int16_t x886 = INT16_MIN;
uint8_t x907 = UINT8_MAX;
volatile uint8_t x910 = 1U;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	static int16_t x2 = INT16_MAX;
	int64_t x3 = 227552681454314917LL;
	static volatile int32_t x4 = 2;
	static volatile int64_t t0 = 702224167390244LL;

    t0 = (((x1!=x2)+x3)+x4);

    if (t0 != 227552681454314920LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int8_t x6 = 5;
	uint64_t x7 = 391145600544469LLU;
	volatile uint64_t t1 = 77450785441LLU;

    t1 = (((x5!=x6)+x7)+x8);

    if (t1 != 391145600544541LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 0;
	int16_t x11 = INT16_MIN;
	static int64_t x12 = -244918089LL;

    t2 = (((x9!=x10)+x11)+x12);

    if (t2 != -244950856LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = 1083676278713450LL;
	int64_t x15 = -1LL;
	volatile uint8_t x16 = 2U;
	int64_t t3 = 19300447707572127LL;

    t3 = (((x13!=x14)+x15)+x16);

    if (t3 != 2LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = INT64_MIN;
	int16_t x19 = -626;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = -82;

    t4 = (((x17!=x18)+x19)+x20);

    if (t4 != 2147483022) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x22 = 23;
	volatile int16_t x23 = -1;
	uint32_t x24 = UINT32_MAX;
	volatile uint32_t t5 = UINT32_MAX;

    t5 = (((x21!=x22)+x23)+x24);

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = INT64_MIN;
	int32_t x27 = -10888;
	uint16_t x28 = 1500U;
	volatile int32_t t6 = -7;

    t6 = (((x25!=x26)+x27)+x28);

    if (t6 != -9387) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x37 = 751U;
	static uint64_t x38 = 530064461407087LLU;
	volatile int64_t x39 = -1LL;
	int64_t x40 = 1LL;
	static int64_t t7 = -1517885LL;

    t7 = (((x37!=x38)+x39)+x40);

    if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = -1;
	volatile uint8_t x42 = UINT8_MAX;
	uint64_t x43 = 27984691LLU;
	static uint16_t x44 = UINT16_MAX;
	volatile uint64_t t8 = 23946874LLU;

    t8 = (((x41!=x42)+x43)+x44);

    if (t8 != 28050227LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint64_t x45 = UINT64_MAX;
	uint8_t x46 = UINT8_MAX;
	int32_t x47 = -24;

    t9 = (((x45!=x46)+x47)+x48);

    if (t9 != -157460LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x50 = 7992U;
	int32_t x52 = INT32_MIN;

    t10 = (((x49!=x50)+x51)+x52);

    if (t10 != -2147483643) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x53 = UINT64_MAX;
	uint8_t x54 = UINT8_MAX;
	int8_t x55 = INT8_MIN;
	uint16_t x56 = 95U;
	int32_t t11 = -7;

    t11 = (((x53!=x54)+x55)+x56);

    if (t11 != -32) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x58 = 3LLU;
	int64_t x59 = -1LL;

    t12 = (((x57!=x58)+x59)+x60);

    if (t12 != -32768LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x61 = 1U;
	int8_t x63 = -14;
	int16_t x64 = INT16_MAX;
	int32_t t13 = 192441133;

    t13 = (((x61!=x62)+x63)+x64);

    if (t13 != 32754) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x65 = -3;
	int8_t x66 = INT8_MIN;
	volatile uint64_t x67 = UINT64_MAX;
	volatile uint64_t t14 = UINT64_MAX;

    t14 = (((x65!=x66)+x67)+x68);

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x69 = 13249LL;
	int8_t x70 = INT8_MIN;
	int8_t x71 = INT8_MIN;
	int64_t x72 = -1LL;
	volatile int64_t t15 = -1LL;

    t15 = (((x69!=x70)+x71)+x72);

    if (t15 != -128LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = INT16_MIN;
	int32_t x75 = INT32_MIN;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t16 = 971659113;

    t16 = (((x73!=x74)+x75)+x76);

    if (t16 != -2147418112) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x77 = INT64_MIN;
	uint16_t x79 = UINT16_MAX;
	int16_t x80 = 0;
	volatile int32_t t17 = 68230;

    t17 = (((x77!=x78)+x79)+x80);

    if (t17 != 65536) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x81 = UINT32_MAX;
	uint64_t x82 = 1310662109LLU;
	int32_t x83 = -1;
	static int8_t x84 = INT8_MAX;
	int32_t t18 = -6922;

    t18 = (((x81!=x82)+x83)+x84);

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = INT16_MAX;
	volatile int8_t x86 = 0;
	static uint32_t x88 = UINT32_MAX;
	volatile uint32_t t19 = 1670674U;

    t19 = (((x85!=x86)+x87)+x88);

    if (t19 != 127U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = INT32_MAX;
	uint64_t x90 = 62902471043272395LLU;
	static int8_t x92 = -12;
	int32_t t20 = 358248957;

    t20 = (((x89!=x90)+x91)+x92);

    if (t20 != 244) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x93 = 33333438279LLU;
	int64_t x94 = INT64_MAX;
	int32_t x96 = 258520;
	volatile int32_t t21 = 116;

    t21 = (((x93!=x94)+x95)+x96);

    if (t21 != 258519) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x97 = UINT8_MAX;
	volatile int64_t x98 = INT64_MAX;
	uint32_t x99 = UINT32_MAX;
	uint32_t t22 = UINT32_MAX;

    t22 = (((x97!=x98)+x99)+x100);

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x101 = 0U;
	int64_t x102 = -1LL;
	uint32_t x103 = 127906U;
	static uint64_t x104 = 507571470282178LLU;
	volatile uint64_t t23 = 3049598424766LLU;

    t23 = (((x101!=x102)+x103)+x104);

    if (t23 != 507571470410085LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x105 = 12U;
	static int32_t x106 = -66742219;
	int16_t x107 = INT16_MAX;
	uint32_t x108 = UINT32_MAX;
	volatile uint32_t t24 = 2U;

    t24 = (((x105!=x106)+x107)+x108);

    if (t24 != 32767U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x109 = 7U;
	volatile int32_t x110 = INT32_MIN;
	int64_t x111 = 16627623169949419LL;

    t25 = (((x109!=x110)+x111)+x112);

    if (t25 != 16627623169916652LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x114 = INT64_MIN;
	int16_t x115 = INT16_MAX;
	static volatile int8_t x116 = INT8_MIN;
	int32_t t26 = 629842;

    t26 = (((x113!=x114)+x115)+x116);

    if (t26 != 32640) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x118 = INT32_MIN;
	int64_t x119 = INT64_MIN;

    t27 = (((x117!=x118)+x119)+x120);

    if (t27 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = INT32_MAX;
	int64_t x122 = -25518234415451297LL;
	volatile int16_t x123 = -3270;
	int32_t x124 = INT32_MAX;
	volatile int32_t t28 = -77222342;

    t28 = (((x121!=x122)+x123)+x124);

    if (t28 != 2147480378) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = INT32_MIN;
	static int16_t x126 = INT16_MAX;
	int16_t x127 = INT16_MIN;
	static int32_t x128 = 1198;
	int32_t t29 = -249;

    t29 = (((x125!=x126)+x127)+x128);

    if (t29 != -31569) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x133 = -1;
	int16_t x134 = 8046;
	int16_t x135 = INT16_MAX;
	int8_t x136 = 0;
	int32_t t30 = -939253;

    t30 = (((x133!=x134)+x135)+x136);

    if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x137 = INT16_MIN;
	uint32_t x138 = UINT32_MAX;
	int32_t x139 = -7;
	static uint32_t x140 = 874040U;
	volatile uint32_t t31 = 7890U;

    t31 = (((x137!=x138)+x139)+x140);

    if (t31 != 874034U) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x145 = INT32_MIN;
	int64_t x146 = INT64_MIN;
	uint8_t x147 = UINT8_MAX;

    t32 = (((x145!=x146)+x147)+x148);

    if (t32 != -32512) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x150 = 12U;
	int8_t x151 = -1;
	volatile int8_t x152 = INT8_MAX;

    t33 = (((x149!=x150)+x151)+x152);

    if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x153 = -1;
	static int64_t x154 = 1899287LL;
	static uint8_t x155 = UINT8_MAX;
	volatile uint16_t x156 = UINT16_MAX;
	int32_t t34 = 41767334;

    t34 = (((x153!=x154)+x155)+x156);

    if (t34 != 65791) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x157 = -1LL;
	int32_t x158 = INT32_MIN;
	int16_t x159 = -1;
	int32_t x160 = -1;
	static int32_t t35 = 164;

    t35 = (((x157!=x158)+x159)+x160);

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x165 = UINT64_MAX;
	static int32_t x166 = INT32_MIN;
	int8_t x167 = INT8_MIN;
	uint32_t t36 = 395171U;

    t36 = (((x165!=x166)+x167)+x168);

    if (t36 != 5142U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x170 = INT64_MAX;
	int32_t x171 = -1;
	int32_t x172 = 46878;

    t37 = (((x169!=x170)+x171)+x172);

    if (t37 != 46878) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x173 = 765548077U;
	volatile int8_t x174 = INT8_MAX;
	int64_t t38 = -109134203775LL;

    t38 = (((x173!=x174)+x175)+x176);

    if (t38 != 908597512LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x177 = -1;
	static int16_t x178 = -71;
	static volatile uint16_t x179 = 2285U;
	static int64_t x180 = -11784196378141718LL;
	volatile int64_t t39 = 280846LL;

    t39 = (((x177!=x178)+x179)+x180);

    if (t39 != -11784196378139432LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x186 = 56981851647LL;
	int16_t x187 = -1;
	uint64_t x188 = 92025811LLU;
	volatile uint64_t t40 = 114600704546189296LLU;

    t40 = (((x185!=x186)+x187)+x188);

    if (t40 != 92025811LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x189 = INT16_MIN;
	int32_t x190 = -636054;
	int8_t x191 = -1;
	uint32_t x192 = 45939892U;
	volatile uint32_t t41 = 4U;

    t41 = (((x189!=x190)+x191)+x192);

    if (t41 != 45939892U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x197 = INT16_MIN;
	int32_t x198 = INT32_MAX;
	uint64_t x199 = 1LLU;
	uint32_t x200 = 20U;
	volatile uint64_t t42 = 99891997LLU;

    t42 = (((x197!=x198)+x199)+x200);

    if (t42 != 22LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x201 = INT64_MIN;
	uint8_t x202 = UINT8_MAX;
	volatile uint32_t x204 = UINT32_MAX;
	volatile uint32_t t43 = UINT32_MAX;

    t43 = (((x201!=x202)+x203)+x204);

    if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x205 = 6U;
	static int32_t x206 = INT32_MIN;
	volatile int32_t x207 = 25;
	int32_t x208 = INT32_MIN;

    t44 = (((x205!=x206)+x207)+x208);

    if (t44 != -2147483622) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x209 = INT64_MAX;
	int64_t x210 = INT64_MIN;
	uint64_t x211 = 508437LLU;
	int8_t x212 = INT8_MAX;
	volatile uint64_t t45 = 11091600LLU;

    t45 = (((x209!=x210)+x211)+x212);

    if (t45 != 508565LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x213 = INT16_MIN;
	volatile int64_t x214 = INT64_MAX;
	volatile uint64_t x216 = UINT64_MAX;
	volatile uint64_t t46 = UINT64_MAX;

    t46 = (((x213!=x214)+x215)+x216);

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x217 = 488U;
	uint32_t x218 = 9314U;
	volatile int16_t x220 = 1;
	static volatile int64_t t47 = -120266317LL;

    t47 = (((x217!=x218)+x219)+x220);

    if (t47 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x221 = INT8_MAX;
	uint8_t x222 = 103U;
	int64_t x223 = INT64_MIN;
	static int32_t x224 = -1;
	int64_t t48 = INT64_MIN;

    t48 = (((x221!=x222)+x223)+x224);

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x225 = INT64_MAX;
	uint64_t x226 = UINT64_MAX;
	volatile uint32_t x227 = UINT32_MAX;
	volatile uint64_t t49 = 2687522118836LLU;

    t49 = (((x225!=x226)+x227)+x228);

    if (t49 != 250638097779328940LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x229 = -1;
	volatile uint16_t x231 = UINT16_MAX;
	int64_t x232 = -1LL;

    t50 = (((x229!=x230)+x231)+x232);

    if (t50 != 65535LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x233 = INT16_MIN;
	uint32_t x234 = UINT32_MAX;
	int32_t x235 = -55835;
	volatile int32_t x236 = 451566;

    t51 = (((x233!=x234)+x235)+x236);

    if (t51 != 395732) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x238 = -1;
	static uint32_t x239 = UINT32_MAX;
	int64_t x240 = -1LL;
	volatile int64_t t52 = -880315479918030LL;

    t52 = (((x237!=x238)+x239)+x240);

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x241 = INT16_MAX;
	int32_t x242 = -204;
	int32_t x243 = 8299241;
	int32_t x244 = -132318;
	volatile int32_t t53 = 609696;

    t53 = (((x241!=x242)+x243)+x244);

    if (t53 != 8166924) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x245 = 6819259U;
	volatile uint64_t x247 = 788909806LLU;
	volatile int16_t x248 = -1;
	static volatile uint64_t t54 = 318401733361675LLU;

    t54 = (((x245!=x246)+x247)+x248);

    if (t54 != 788909806LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x249 = -38667078;
	int8_t x252 = INT8_MAX;
	uint32_t t55 = 1031380U;

    t55 = (((x249!=x250)+x251)+x252);

    if (t55 != 575U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x253 = INT8_MIN;
	volatile uint32_t x254 = UINT32_MAX;
	static uint8_t x255 = 81U;
	int32_t x256 = 1258400;

    t56 = (((x253!=x254)+x255)+x256);

    if (t56 != 1258482) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x257 = 12U;
	volatile int8_t x258 = -2;
	uint64_t x259 = 678178910722996321LLU;
	uint64_t t57 = 28462708834361230LLU;

    t57 = (((x257!=x258)+x259)+x260);

    if (t57 != 678178910722996321LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x265 = INT64_MIN;
	volatile int32_t x266 = -1;
	static int32_t x268 = INT32_MIN;
	int32_t t58 = -28656;

    t58 = (((x265!=x266)+x267)+x268);

    if (t58 != -2147456835) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x269 = -2325282;
	int16_t x270 = 0;
	int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MAX;
	volatile int32_t t59 = -104;

    t59 = (((x269!=x270)+x271)+x272);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x273 = UINT8_MAX;
	int64_t x274 = INT64_MIN;
	volatile uint8_t x276 = 17U;
	static volatile int64_t t60 = 1436675845441696614LL;

    t60 = (((x273!=x274)+x275)+x276);

    if (t60 != 2554508796583LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x279 = 384;

    t61 = (((x277!=x278)+x279)+x280);

    if (t61 != 383) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x281 = -1;
	int32_t x283 = 4851;
	uint16_t x284 = 2580U;
	volatile int32_t t62 = 15;

    t62 = (((x281!=x282)+x283)+x284);

    if (t62 != 7432) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x289 = 993237098LLU;
	static int8_t x290 = 1;
	static volatile int8_t x291 = 6;
	volatile uint32_t x292 = 1U;
	uint32_t t63 = 76159U;

    t63 = (((x289!=x290)+x291)+x292);

    if (t63 != 8U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x294 = 575LLU;
	int64_t x295 = INT64_MIN;
	int16_t x296 = INT16_MAX;
	volatile int64_t t64 = -28LL;

    t64 = (((x293!=x294)+x295)+x296);

    if (t64 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x297 = 519062433U;
	int8_t x298 = INT8_MIN;
	volatile uint8_t x299 = 0U;
	uint64_t x300 = 95775460157LLU;
	volatile uint64_t t65 = 2286546150800549LLU;

    t65 = (((x297!=x298)+x299)+x300);

    if (t65 != 95775460158LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x301 = UINT32_MAX;
	int16_t x303 = 1045;
	uint32_t x304 = UINT32_MAX;
	uint32_t t66 = 17062U;

    t66 = (((x301!=x302)+x303)+x304);

    if (t66 != 1045U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x305 = -1LL;
	int16_t x306 = INT16_MIN;
	uint64_t x307 = 49LLU;
	static int64_t x308 = -1LL;
	uint64_t t67 = 8316209968992545LLU;

    t67 = (((x305!=x306)+x307)+x308);

    if (t67 != 49LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x309 = 3652894173461403LLU;
	int8_t x310 = INT8_MIN;
	static uint64_t x311 = 81212295164355LLU;
	volatile uint64_t t68 = 527998249770152612LLU;

    t68 = (((x309!=x310)+x311)+x312);

    if (t68 != 81216590131651LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x314 = 19921952182LL;
	int64_t x315 = 104526LL;
	int64_t t69 = -163754904168119462LL;

    t69 = (((x313!=x314)+x315)+x316);

    if (t69 != 104536LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x317 = -1;
	static uint64_t x318 = UINT64_MAX;
	volatile int64_t x320 = -1LL;
	volatile int64_t t70 = -9505183675LL;

    t70 = (((x317!=x318)+x319)+x320);

    if (t70 != 476137810461095LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x322 = 984944;
	int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	volatile int32_t t71 = -482488;

    t71 = (((x321!=x322)+x323)+x324);

    if (t71 != -32895) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x325 = -1;
	static int16_t x326 = INT16_MAX;
	volatile int32_t x328 = -1;
	volatile int32_t t72 = -111408;

    t72 = (((x325!=x326)+x327)+x328);

    if (t72 != 4) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x329 = -282923252;
	static int16_t x330 = 11;
	volatile int32_t x331 = INT32_MIN;
	uint16_t x332 = 27792U;

    t73 = (((x329!=x330)+x331)+x332);

    if (t73 != -2147455855) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x333 = INT16_MAX;
	volatile uint16_t x335 = UINT16_MAX;
	int8_t x336 = -1;
	int32_t t74 = -2;

    t74 = (((x333!=x334)+x335)+x336);

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x337 = INT16_MAX;
	uint64_t x338 = 314272LLU;
	static int32_t x340 = 0;
	volatile int32_t t75 = 2664;

    t75 = (((x337!=x338)+x339)+x340);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x341 = UINT32_MAX;
	static int64_t x342 = INT64_MAX;
	int8_t x344 = INT8_MIN;
	static int64_t t76 = -2853LL;

    t76 = (((x341!=x342)+x343)+x344);

    if (t76 != -4288574LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x345 = 1;
	static int8_t x346 = 1;
	static int16_t x348 = -1;
	int32_t t77 = -1;

    t77 = (((x345!=x346)+x347)+x348);

    if (t77 != -17) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x362 = INT32_MAX;
	static uint32_t x363 = 48061513U;
	uint32_t t78 = 15359U;

    t78 = (((x361!=x362)+x363)+x364);

    if (t78 != 48061512U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x365 = -1;
	uint32_t x366 = UINT32_MAX;
	int8_t x367 = -1;
	int16_t x368 = -1;
	int32_t t79 = -14;

    t79 = (((x365!=x366)+x367)+x368);

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x373 = INT16_MAX;
	int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MIN;
	static int32_t x376 = 26;
	volatile int32_t t80 = -5253497;

    t80 = (((x373!=x374)+x375)+x376);

    if (t80 != -101) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x377 = 2LLU;
	int8_t x378 = INT8_MAX;
	volatile int64_t t81 = -36451956687987710LL;

    t81 = (((x377!=x378)+x379)+x380);

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x390 = 145825U;
	uint32_t x391 = 7572U;
	int64_t x392 = INT64_MIN;
	static volatile int64_t t82 = -88143313953LL;

    t82 = (((x389!=x390)+x391)+x392);

    if (t82 != -9223372036854768235LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x393 = -1LL;
	uint32_t x394 = UINT32_MAX;
	int16_t x395 = -593;
	volatile int64_t x396 = INT64_MAX;
	int64_t t83 = -13LL;

    t83 = (((x393!=x394)+x395)+x396);

    if (t83 != 9223372036854775215LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x397 = -1;
	uint16_t x398 = 3013U;
	int16_t x399 = INT16_MAX;
	static int32_t x400 = INT32_MIN;

    t84 = (((x397!=x398)+x399)+x400);

    if (t84 != -2147450880) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x403 = UINT32_MAX;
	volatile int8_t x404 = INT8_MIN;
	uint32_t t85 = 3406U;

    t85 = (((x401!=x402)+x403)+x404);

    if (t85 != 4294967168U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x408 = INT64_MIN;
	int64_t t86 = INT64_MIN;

    t86 = (((x405!=x406)+x407)+x408);

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x409 = INT8_MIN;
	uint32_t x410 = UINT32_MAX;
	static int64_t x411 = -67570500LL;
	int32_t x412 = INT32_MAX;
	static volatile int64_t t87 = 2701358LL;

    t87 = (((x409!=x410)+x411)+x412);

    if (t87 != 2079913148LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x417 = 48;
	volatile int32_t x419 = 1806;
	int64_t x420 = INT64_MIN;

    t88 = (((x417!=x418)+x419)+x420);

    if (t88 != -9223372036854774001LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x422 = -1;
	int16_t x423 = INT16_MIN;
	uint32_t t89 = 1005498199U;

    t89 = (((x421!=x422)+x423)+x424);

    if (t89 != 4294935378U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x425 = 55U;
	int16_t x427 = INT16_MAX;
	volatile int8_t x428 = -1;

    t90 = (((x425!=x426)+x427)+x428);

    if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x429 = INT8_MIN;
	uint8_t x431 = 1U;
	int32_t t91 = -90694;

    t91 = (((x429!=x430)+x431)+x432);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x433 = INT16_MIN;
	int32_t x434 = 2;
	int8_t x435 = -13;
	uint64_t t92 = 15029LLU;

    t92 = (((x433!=x434)+x435)+x436);

    if (t92 != 139799024625LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x437 = 1032013539LLU;
	uint64_t x440 = 23732815150257LLU;
	volatile uint64_t t93 = 477866502771132LLU;

    t93 = (((x437!=x438)+x439)+x440);

    if (t93 != 23732933657883LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x441 = UINT32_MAX;
	static uint32_t x442 = UINT32_MAX;
	int8_t x443 = INT8_MIN;
	static int16_t x444 = 4;
	static int32_t t94 = 0;

    t94 = (((x441!=x442)+x443)+x444);

    if (t94 != -124) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x445 = INT32_MIN;
	uint8_t x448 = UINT8_MAX;
	int64_t t95 = 2631282LL;

    t95 = (((x445!=x446)+x447)+x448);

    if (t95 != 505816158112116LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x449 = -52;
	int64_t x450 = INT64_MIN;
	static uint32_t x451 = 5U;
	int16_t x452 = INT16_MIN;
	volatile uint32_t t96 = 106603U;

    t96 = (((x449!=x450)+x451)+x452);

    if (t96 != 4294934534U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x454 = INT8_MIN;
	static uint8_t x456 = UINT8_MAX;
	static int32_t t97 = 36296;

    t97 = (((x453!=x454)+x455)+x456);

    if (t97 != 33023) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x458 = UINT32_MAX;
	uint64_t x459 = 549824LLU;
	int8_t x460 = INT8_MAX;

    t98 = (((x457!=x458)+x459)+x460);

    if (t98 != 549951LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x461 = 113091799651440LL;
	uint32_t x462 = 7932603U;
	volatile int64_t x464 = INT64_MIN;
	volatile uint64_t t99 = 2LLU;

    t99 = (((x461!=x462)+x463)+x464);

    if (t99 != 9223372036854783081LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x466 = INT8_MIN;
	volatile int32_t x468 = INT32_MAX;
	uint32_t t100 = 0U;

    t100 = (((x465!=x466)+x467)+x468);

    if (t100 != 2147489807U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x469 = -1;
	int16_t x470 = 3;
	static int16_t x471 = INT16_MIN;
	uint16_t x472 = 37U;
	volatile int32_t t101 = -937;

    t101 = (((x469!=x470)+x471)+x472);

    if (t101 != -32730) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x473 = 14075;
	int16_t x474 = INT16_MIN;
	static int32_t x475 = -3795990;
	volatile int64_t x476 = 1844LL;
	volatile int64_t t102 = -2735LL;

    t102 = (((x473!=x474)+x475)+x476);

    if (t102 != -3794145LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x477 = INT32_MIN;
	static int64_t x478 = 120177028LL;
	int8_t x479 = INT8_MIN;
	static int16_t x480 = -1;
	static volatile int32_t t103 = 114416730;

    t103 = (((x477!=x478)+x479)+x480);

    if (t103 != -128) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x481 = INT64_MIN;
	uint32_t x483 = 6151U;
	int32_t x484 = -1;
	static uint32_t t104 = 11U;

    t104 = (((x481!=x482)+x483)+x484);

    if (t104 != 6151U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x485 = -1;
	int32_t x486 = INT32_MIN;
	uint8_t x487 = UINT8_MAX;
	volatile int32_t t105 = -406;

    t105 = (((x485!=x486)+x487)+x488);

    if (t105 != 263) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x489 = -17;
	static uint16_t x490 = UINT16_MAX;
	int8_t x491 = INT8_MIN;
	static int32_t t106 = 2973469;

    t106 = (((x489!=x490)+x491)+x492);

    if (t106 != -68908) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x493 = 257LLU;
	int8_t x494 = INT8_MAX;
	volatile uint8_t x495 = 53U;
	volatile int32_t t107 = 143968047;

    t107 = (((x493!=x494)+x495)+x496);

    if (t107 != 32821) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x497 = -1618;
	uint64_t x498 = 3086948106822484LLU;
	static int16_t x499 = -1;
	static int8_t x500 = INT8_MAX;
	volatile int32_t t108 = 2061133;

    t108 = (((x497!=x498)+x499)+x500);

    if (t108 != 127) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x501 = -236598769591223LL;
	int32_t x502 = INT32_MAX;
	int32_t x503 = INT32_MIN;
	static int16_t x504 = INT16_MAX;
	volatile int32_t t109 = -90839;

    t109 = (((x501!=x502)+x503)+x504);

    if (t109 != -2147450880) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x505 = UINT16_MAX;
	uint64_t x506 = 4571406LLU;
	uint64_t x507 = UINT64_MAX;
	uint32_t x508 = 2U;
	volatile uint64_t t110 = 790143LLU;

    t110 = (((x505!=x506)+x507)+x508);

    if (t110 != 2LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x509 = INT64_MIN;
	int64_t x511 = -1LL;
	int64_t x512 = -1LL;
	volatile int64_t t111 = -29400499372LL;

    t111 = (((x509!=x510)+x511)+x512);

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x514 = 0;
	uint64_t x515 = 4234204468LLU;
	uint8_t x516 = 118U;
	uint64_t t112 = 2098910436604LLU;

    t112 = (((x513!=x514)+x515)+x516);

    if (t112 != 4234204587LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x517 = -16;
	int8_t x518 = 30;
	volatile uint8_t x519 = 53U;
	uint8_t x520 = UINT8_MAX;
	int32_t t113 = -44396;

    t113 = (((x517!=x518)+x519)+x520);

    if (t113 != 309) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x525 = INT8_MAX;
	static int64_t x526 = -5469181042407LL;
	int8_t x527 = 0;
	static volatile uint64_t t114 = 3563744425305986400LLU;

    t114 = (((x525!=x526)+x527)+x528);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x529 = INT16_MAX;
	uint64_t x530 = 198148LLU;
	static int64_t t115 = -2686107LL;

    t115 = (((x529!=x530)+x531)+x532);

    if (t115 != -2373237LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x534 = INT8_MAX;
	int8_t x535 = 7;
	volatile int32_t t116 = -16592795;

    t116 = (((x533!=x534)+x535)+x536);

    if (t116 != -2147483640) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x537 = 5U;
	int8_t x538 = 13;
	static uint8_t x539 = UINT8_MAX;
	static int16_t x540 = INT16_MAX;
	volatile int32_t t117 = 143;

    t117 = (((x537!=x538)+x539)+x540);

    if (t117 != 33023) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x541 = 196U;
	int8_t x542 = INT8_MIN;
	uint64_t x544 = 155614LLU;
	volatile uint64_t t118 = 477818247LLU;

    t118 = (((x541!=x542)+x543)+x544);

    if (t118 != 155615LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int32_t x545 = -629627326;
	static int32_t x546 = INT32_MIN;
	uint64_t x547 = 362232924LLU;
	volatile uint64_t t119 = 175762244746040LLU;

    t119 = (((x545!=x546)+x547)+x548);

    if (t119 != 368640000LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x553 = INT32_MAX;
	static int32_t x554 = -1;
	int32_t x555 = -5783933;
	static uint32_t x556 = 105047818U;

    t120 = (((x553!=x554)+x555)+x556);

    if (t120 != 99263886U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x561 = 5511;
	uint32_t x562 = 2095U;
	static uint16_t x563 = 1U;
	static int64_t x564 = INT64_MIN;

    t121 = (((x561!=x562)+x563)+x564);

    if (t121 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x569 = INT8_MIN;
	uint32_t x571 = 300U;

    t122 = (((x569!=x570)+x571)+x572);

    if (t122 != 556U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x574 = 4U;
	static int32_t x575 = -1327;
	int16_t x576 = INT16_MIN;
	int32_t t123 = -154069;

    t123 = (((x573!=x574)+x575)+x576);

    if (t123 != -34094) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x577 = INT64_MIN;
	uint8_t x578 = 8U;
	volatile int8_t x579 = 0;
	volatile int16_t x580 = -12;
	static volatile int32_t t124 = -29066546;

    t124 = (((x577!=x578)+x579)+x580);

    if (t124 != -11) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x583 = -1;
	int64_t x584 = 5099986798588003LL;
	int64_t t125 = 41601509LL;

    t125 = (((x581!=x582)+x583)+x584);

    if (t125 != 5099986798588003LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x585 = INT16_MIN;
	int64_t x586 = 10469953800275LL;
	int8_t x587 = INT8_MIN;
	int16_t x588 = 0;
	int32_t t126 = -113607;

    t126 = (((x585!=x586)+x587)+x588);

    if (t126 != -127) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x590 = INT32_MIN;
	volatile int16_t x591 = -1;
	uint64_t x592 = UINT64_MAX;

    t127 = (((x589!=x590)+x591)+x592);

    if (t127 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x594 = 79467822672574452LL;
	static uint32_t x595 = 467466360U;
	volatile uint16_t x596 = 15U;
	uint32_t t128 = 32750166U;

    t128 = (((x593!=x594)+x595)+x596);

    if (t128 != 467466376U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x597 = -5219;
	int16_t x598 = 31;
	static int64_t x600 = INT64_MIN;
	volatile int64_t t129 = 17361LL;

    t129 = (((x597!=x598)+x599)+x600);

    if (t129 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x601 = 2U;
	uint64_t x602 = 1013986333576793LLU;
	uint32_t x604 = 5U;
	uint32_t t130 = 496219605U;

    t130 = (((x601!=x602)+x603)+x604);

    if (t130 != 5U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x608 = INT8_MAX;

    t131 = (((x605!=x606)+x607)+x608);

    if (t131 != 177LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x609 = INT32_MIN;
	uint16_t x610 = 31U;
	static int16_t x611 = INT16_MAX;
	int8_t x612 = -1;
	static int32_t t132 = 86874;

    t132 = (((x609!=x610)+x611)+x612);

    if (t132 != 32767) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x613 = UINT32_MAX;
	int8_t x614 = INT8_MIN;
	int32_t x615 = INT32_MIN;
	uint64_t x616 = 63419635075LLU;
	volatile uint64_t t133 = 383315151LLU;

    t133 = (((x613!=x614)+x615)+x616);

    if (t133 != 61272151428LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x617 = INT64_MIN;
	int16_t x619 = -1;
	uint16_t x620 = UINT16_MAX;
	static volatile int32_t t134 = 1834869;

    t134 = (((x617!=x618)+x619)+x620);

    if (t134 != 65535) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x622 = UINT32_MAX;
	int16_t x623 = -1;
	volatile int32_t x624 = -923;
	int32_t t135 = -21;

    t135 = (((x621!=x622)+x623)+x624);

    if (t135 != -923) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x625 = UINT32_MAX;
	static int8_t x626 = INT8_MAX;
	static uint8_t x627 = UINT8_MAX;
	uint16_t x628 = 11U;
	volatile int32_t t136 = -235398;

    t136 = (((x625!=x626)+x627)+x628);

    if (t136 != 267) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x630 = UINT32_MAX;
	static volatile uint64_t t137 = 1LLU;

    t137 = (((x629!=x630)+x631)+x632);

    if (t137 != 3563216822249459936LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x633 = INT8_MIN;
	static int32_t x634 = INT32_MIN;
	volatile uint64_t x635 = 13699920694464565LLU;
	int8_t x636 = 1;
	volatile uint64_t t138 = 55474124404LLU;

    t138 = (((x633!=x634)+x635)+x636);

    if (t138 != 13699920694464567LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x645 = UINT64_MAX;
	uint64_t x646 = 49806097704LLU;
	int32_t x647 = -1;
	int8_t x648 = 2;
	int32_t t139 = 20083;

    t139 = (((x645!=x646)+x647)+x648);

    if (t139 != 2) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x649 = 90552176;
	static int8_t x650 = -1;
	static int16_t x652 = 5215;
	volatile int32_t t140 = -997107;

    t140 = (((x649!=x650)+x651)+x652);

    if (t140 != -27552) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x658 = INT64_MAX;
	volatile uint16_t x659 = 3U;
	uint16_t x660 = 18U;

    t141 = (((x657!=x658)+x659)+x660);

    if (t141 != 22) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x661 = 16U;
	int16_t x662 = -1;
	volatile uint8_t x663 = UINT8_MAX;
	volatile uint32_t x664 = 3266U;
	uint32_t t142 = 2134310U;

    t142 = (((x661!=x662)+x663)+x664);

    if (t142 != 3522U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x665 = INT64_MIN;
	int32_t x667 = -1;
	volatile int64_t t143 = -969LL;

    t143 = (((x665!=x666)+x667)+x668);

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x669 = -3564314;
	volatile int16_t x671 = -6520;
	static int8_t x672 = -1;
	int32_t t144 = 2249;

    t144 = (((x669!=x670)+x671)+x672);

    if (t144 != -6520) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint64_t x673 = 539728695317947LLU;
	volatile uint16_t x674 = UINT16_MAX;
	int8_t x676 = INT8_MIN;
	static int32_t t145 = 1276587;

    t145 = (((x673!=x674)+x675)+x676);

    if (t145 != -128) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x677 = INT8_MIN;
	int32_t x678 = INT32_MIN;
	uint8_t x679 = 6U;
	static int64_t x680 = 1853106960418775LL;
	int64_t t146 = 45448801422LL;

    t146 = (((x677!=x678)+x679)+x680);

    if (t146 != 1853106960418782LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x681 = INT32_MAX;
	static uint16_t x682 = UINT16_MAX;
	int32_t x683 = INT32_MIN;
	volatile int32_t t147 = -1180;

    t147 = (((x681!=x682)+x683)+x684);

    if (t147 != -2147483619) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x685 = 14U;
	volatile int32_t x688 = INT32_MAX;
	static volatile int32_t t148 = 16256851;

    t148 = (((x685!=x686)+x687)+x688);

    if (t148 != 2147483263) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x689 = -279719;
	int8_t x690 = -18;
	uint64_t x692 = 3357829LLU;

    t149 = (((x689!=x690)+x691)+x692);

    if (t149 != 3357829LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint8_t x694 = 1U;
	volatile int16_t x695 = INT16_MIN;
	uint16_t x696 = UINT16_MAX;

    t150 = (((x693!=x694)+x695)+x696);

    if (t150 != 32768) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x701 = INT16_MIN;
	uint64_t x702 = 164049LLU;
	int64_t x703 = INT64_MIN;
	int16_t x704 = INT16_MAX;
	volatile int64_t t151 = 2085832LL;

    t151 = (((x701!=x702)+x703)+x704);

    if (t151 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x705 = -399203470044LL;
	int64_t x706 = INT64_MIN;
	int64_t x707 = -1LL;
	int64_t t152 = -26617471456LL;

    t152 = (((x705!=x706)+x707)+x708);

    if (t152 != 32767LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x713 = 1735152331967LLU;
	int8_t x716 = INT8_MIN;
	volatile uint32_t t153 = 678U;

    t153 = (((x713!=x714)+x715)+x716);

    if (t153 != 4294967168U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x717 = INT16_MIN;
	uint64_t x718 = 78162399LLU;
	volatile int16_t x719 = 1;
	int32_t x720 = 9;

    t154 = (((x717!=x718)+x719)+x720);

    if (t154 != 11) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x721 = 4374U;
	int32_t x722 = INT32_MIN;
	static volatile uint8_t x724 = UINT8_MAX;
	volatile int32_t t155 = 44;

    t155 = (((x721!=x722)+x723)+x724);

    if (t155 != 230) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x726 = 4U;
	static uint64_t x728 = 45LLU;
	volatile uint64_t t156 = 1648839952250LLU;

    t156 = (((x725!=x726)+x727)+x728);

    if (t156 != 1367LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x731 = UINT16_MAX;
	uint32_t x732 = 29885990U;

    t157 = (((x729!=x730)+x731)+x732);

    if (t157 != 29951526U) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x733 = INT64_MIN;
	int8_t x734 = INT8_MIN;
	uint8_t x735 = 20U;
	static int8_t x736 = -3;
	volatile int32_t t158 = -4947;

    t158 = (((x733!=x734)+x735)+x736);

    if (t158 != 18) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x737 = UINT64_MAX;
	int64_t x738 = INT64_MAX;
	static volatile int16_t x739 = INT16_MIN;
	int32_t x740 = INT32_MAX;
	volatile int32_t t159 = 1;

    t159 = (((x737!=x738)+x739)+x740);

    if (t159 != 2147450880) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x742 = -2;
	static uint64_t x743 = UINT64_MAX;
	volatile int8_t x744 = INT8_MIN;
	uint64_t t160 = 48291811LLU;

    t160 = (((x741!=x742)+x743)+x744);

    if (t160 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x745 = 10U;
	static volatile int64_t x746 = -1LL;
	int64_t x748 = 1531514350829712740LL;
	int64_t t161 = -1987LL;

    t161 = (((x745!=x746)+x747)+x748);

    if (t161 != 1531514350830233900LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x750 = -1;
	int32_t x751 = -150191;
	static int16_t x752 = INT16_MIN;
	volatile int32_t t162 = 669460;

    t162 = (((x749!=x750)+x751)+x752);

    if (t162 != -182959) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x753 = 146957U;
	int32_t x754 = -14462488;
	volatile int16_t x755 = 20;
	volatile int32_t t163 = -7763352;

    t163 = (((x753!=x754)+x755)+x756);

    if (t163 != 20) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x757 = -6;
	int16_t x758 = INT16_MIN;
	int64_t x759 = 2231830846616705LL;
	uint64_t x760 = 159423568595LLU;
	volatile uint64_t t164 = 601776716584804625LLU;

    t164 = (((x757!=x758)+x759)+x760);

    if (t164 != 2231990270185301LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x761 = -1;
	static uint8_t x762 = UINT8_MAX;
	int32_t x763 = -1;
	volatile uint64_t t165 = 10143462481LLU;

    t165 = (((x761!=x762)+x763)+x764);

    if (t165 != 7598462LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x769 = INT16_MIN;
	int32_t x770 = -37164812;
	static int8_t x772 = INT8_MIN;
	uint64_t t166 = 3432LLU;

    t166 = (((x769!=x770)+x771)+x772);

    if (t166 != 303713908279767LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x774 = -1;
	uint64_t x775 = 204LLU;
	int32_t x776 = INT32_MIN;
	volatile uint64_t t167 = 23451678132762536LLU;

    t167 = (((x773!=x774)+x775)+x776);

    if (t167 != 18446744071562068173LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x777 = 4LLU;
	int32_t x778 = -1;
	uint16_t x779 = 2U;
	static int32_t x780 = INT32_MIN;
	int32_t t168 = -511501560;

    t168 = (((x777!=x778)+x779)+x780);

    if (t168 != -2147483645) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x781 = INT64_MAX;
	int8_t x782 = INT8_MAX;
	static uint8_t x784 = UINT8_MAX;
	volatile int32_t t169 = 67;

    t169 = (((x781!=x782)+x783)+x784);

    if (t169 != 257) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x787 = -60311826230857LL;
	uint32_t x788 = 354339174U;
	int64_t t170 = 317719770LL;

    t170 = (((x785!=x786)+x787)+x788);

    if (t170 != -60311471891682LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x791 = 2997;
	volatile int32_t t171 = -26;

    t171 = (((x789!=x790)+x791)+x792);

    if (t171 != 3253) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x793 = -1;
	int16_t x795 = INT16_MAX;
	volatile uint16_t x796 = 28959U;
	int32_t t172 = -199972387;

    t172 = (((x793!=x794)+x795)+x796);

    if (t172 != 61727) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x798 = -111LL;
	static volatile int32_t x799 = -242379;
	volatile int64_t x800 = -1LL;
	int64_t t173 = -279995903115LL;

    t173 = (((x797!=x798)+x799)+x800);

    if (t173 != -242379LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x802 = INT16_MIN;
	uint8_t x803 = UINT8_MAX;
	static volatile uint8_t x804 = UINT8_MAX;

    t174 = (((x801!=x802)+x803)+x804);

    if (t174 != 511) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x806 = 686U;
	uint8_t x807 = UINT8_MAX;
	int32_t x808 = INT32_MIN;
	int32_t t175 = 2821049;

    t175 = (((x805!=x806)+x807)+x808);

    if (t175 != -2147483392) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x814 = 54909533U;
	uint64_t x815 = 33596094LLU;
	int64_t x816 = INT64_MAX;

    t176 = (((x813!=x814)+x815)+x816);

    if (t176 != 9223372036888371902LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x817 = INT32_MAX;
	int64_t x818 = -54059111925251LL;
	uint16_t x819 = 0U;
	volatile uint32_t x820 = 0U;
	volatile uint32_t t177 = 1U;

    t177 = (((x817!=x818)+x819)+x820);

    if (t177 != 1U) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x821 = 5U;
	uint16_t x822 = 2U;
	int64_t x823 = -1LL;
	static int64_t t178 = 1360242472LL;

    t178 = (((x821!=x822)+x823)+x824);

    if (t178 != -32768LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int16_t x826 = -1;
	static int32_t x828 = INT32_MIN;
	int32_t t179 = 470917;

    t179 = (((x825!=x826)+x827)+x828);

    if (t179 != -2147450880) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int8_t x829 = -1;
	uint64_t x830 = 57LLU;
	int16_t x831 = -1;
	int64_t x832 = -1LL;
	static int64_t t180 = -1250169066LL;

    t180 = (((x829!=x830)+x831)+x832);

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x833 = 184404;
	int8_t x835 = -13;

    t181 = (((x833!=x834)+x835)+x836);

    if (t181 != -20) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x837 = INT16_MAX;
	int32_t x838 = -12055921;
	uint8_t x839 = 94U;
	static uint64_t x840 = UINT64_MAX;
	uint64_t t182 = 570240106629041374LLU;

    t182 = (((x837!=x838)+x839)+x840);

    if (t182 != 94LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x845 = 588181075457295395LLU;
	volatile uint32_t x846 = UINT32_MAX;
	int64_t x847 = -239LL;
	int16_t x848 = 4204;
	int64_t t183 = 126067397117LL;

    t183 = (((x845!=x846)+x847)+x848);

    if (t183 != 3966LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x849 = INT64_MIN;
	static int16_t x850 = INT16_MAX;
	static volatile uint64_t x851 = UINT64_MAX;
	uint16_t x852 = UINT16_MAX;
	uint64_t t184 = 34LLU;

    t184 = (((x849!=x850)+x851)+x852);

    if (t184 != 65535LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x853 = UINT64_MAX;
	uint64_t x854 = 6LLU;
	int16_t x855 = INT16_MIN;
	volatile uint32_t t185 = 983591U;

    t185 = (((x853!=x854)+x855)+x856);

    if (t185 != 4294934528U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x857 = 236U;
	static int16_t x858 = INT16_MIN;
	int64_t x859 = INT64_MIN;
	volatile uint64_t x860 = UINT64_MAX;
	static uint64_t t186 = 479182366010633919LLU;

    t186 = (((x857!=x858)+x859)+x860);

    if (t186 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x861 = UINT64_MAX;
	uint8_t x862 = 7U;
	int32_t x863 = INT32_MIN;
	uint32_t x864 = UINT32_MAX;

    t187 = (((x861!=x862)+x863)+x864);

    if (t187 != 2147483648U) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x865 = INT64_MIN;
	static int16_t x866 = -1;
	int16_t x867 = -1;
	volatile uint64_t x868 = UINT64_MAX;
	volatile uint64_t t188 = UINT64_MAX;

    t188 = (((x865!=x866)+x867)+x868);

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x869 = INT16_MIN;
	volatile uint32_t x871 = UINT32_MAX;
	uint32_t x872 = 22U;
	uint32_t t189 = 9343U;

    t189 = (((x869!=x870)+x871)+x872);

    if (t189 != 22U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x873 = INT16_MIN;
	int8_t x874 = -1;
	volatile int64_t x876 = INT64_MAX;
	volatile int64_t t190 = 2182550205309423549LL;

    t190 = (((x873!=x874)+x875)+x876);

    if (t190 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x877 = INT8_MIN;
	uint32_t x879 = 21285749U;
	int64_t x880 = INT64_MIN;
	volatile int64_t t191 = 3527172969163546LL;

    t191 = (((x877!=x878)+x879)+x880);

    if (t191 != -9223372036833490059LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x881 = 11U;
	int64_t x883 = -431492LL;
	volatile uint64_t x884 = 242193318636984LLU;
	uint64_t t192 = 639LLU;

    t192 = (((x881!=x882)+x883)+x884);

    if (t192 != 242193318205493LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x885 = 0U;
	uint32_t x887 = UINT32_MAX;
	int8_t x888 = -1;
	static volatile uint32_t t193 = UINT32_MAX;

    t193 = (((x885!=x886)+x887)+x888);

    if (t193 != UINT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x893 = 7254542U;
	static int8_t x894 = INT8_MAX;
	int32_t x895 = -1;
	uint32_t x896 = 2102824889U;
	volatile uint32_t t194 = 21078U;

    t194 = (((x893!=x894)+x895)+x896);

    if (t194 != 2102824889U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x901 = -1;
	uint8_t x902 = 62U;
	uint64_t x903 = 2155063821668742LLU;
	uint16_t x904 = 0U;
	uint64_t t195 = 1532260360373130LLU;

    t195 = (((x901!=x902)+x903)+x904);

    if (t195 != 2155063821668743LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x905 = UINT8_MAX;
	int32_t x906 = -63647;
	uint32_t x908 = 24U;
	uint32_t t196 = 1752837U;

    t196 = (((x905!=x906)+x907)+x908);

    if (t196 != 280U) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x909 = UINT8_MAX;
	int64_t x911 = INT64_MIN;
	uint16_t x912 = 3U;
	int64_t t197 = -11950230LL;

    t197 = (((x909!=x910)+x911)+x912);

    if (t197 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x913 = INT64_MIN;
	static uint32_t x914 = UINT32_MAX;
	static int8_t x915 = -1;
	int8_t x916 = -1;
	volatile int32_t t198 = -62365361;

    t198 = (((x913!=x914)+x915)+x916);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x917 = 298U;
	int32_t x918 = INT32_MIN;
	static int8_t x919 = -13;
	static volatile int8_t x920 = 1;
	volatile int32_t t199 = 0;

    t199 = (((x917!=x918)+x919)+x920);

    if (t199 != -11) { NG(); } else { ; }
	
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

