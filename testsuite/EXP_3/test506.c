
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

int16_t x4 = INT16_MIN;
int16_t x11 = INT16_MAX;
int16_t x12 = 7;
int8_t x19 = 44;
int16_t x23 = -1;
int16_t x30 = INT16_MAX;
int64_t x33 = INT64_MIN;
volatile int32_t x35 = 460;
volatile int32_t x36 = -1;
int64_t x50 = INT64_MIN;
volatile int32_t t7 = 142801761;
static int32_t x54 = INT32_MIN;
int32_t t8 = 1829282;
int64_t t10 = -1265975815272808LL;
static uint64_t x73 = 10LLU;
static uint64_t t12 = 2855046177821694LLU;
static int64_t x84 = 1486459765609207809LL;
static int32_t x85 = INT32_MAX;
int64_t x86 = INT64_MIN;
uint16_t x92 = 1U;
int16_t x110 = INT16_MIN;
static int8_t x119 = INT8_MIN;
static uint8_t x128 = 62U;
volatile int32_t t23 = 185035;
static uint64_t t24 = 58419239992LLU;
int8_t x162 = INT8_MIN;
int32_t x163 = -872;
static int32_t t26 = 438576965;
uint64_t x168 = 914316872419LLU;
int32_t x173 = INT32_MIN;
volatile int32_t t31 = -1007;
int32_t t34 = 5652;
volatile int32_t x201 = INT32_MIN;
uint8_t x217 = 17U;
uint64_t x220 = 5115LLU;
int8_t x224 = INT8_MIN;
uint64_t t38 = 45LLU;
static int64_t x236 = -1257670667411822LL;
static int8_t x240 = INT8_MIN;
uint32_t x242 = 14113U;
static uint64_t x247 = UINT64_MAX;
uint16_t x249 = 10596U;
uint32_t x252 = UINT32_MAX;
int32_t x254 = INT32_MIN;
uint64_t x263 = 92LLU;
uint64_t x272 = UINT64_MAX;
uint32_t t49 = 575828U;
int8_t x287 = -1;
int64_t t51 = -169002540343LL;
uint8_t x302 = 2U;
int64_t t53 = -1LL;
volatile uint32_t x314 = 57910U;
uint64_t x320 = 15LLU;
int32_t x327 = -1;
int64_t t58 = 16726LL;
uint64_t x349 = 80LLU;
int64_t x357 = INT64_MIN;
int8_t x365 = INT8_MIN;
static volatile uint8_t x367 = 21U;
int16_t x368 = -1;
uint16_t x387 = 3U;
volatile uint8_t x391 = UINT8_MAX;
int16_t x392 = INT16_MIN;
static int32_t t67 = 14;
uint64_t x406 = UINT64_MAX;
static volatile uint16_t x407 = 107U;
static volatile int64_t x410 = -2743987403987LL;
static uint8_t x419 = 1U;
int16_t x423 = INT16_MIN;
volatile uint32_t t72 = 5U;
int16_t x431 = INT16_MAX;
volatile uint64_t x435 = UINT64_MAX;
int32_t x447 = -1;
int64_t t78 = 257LL;
int64_t x465 = INT64_MIN;
static int32_t x466 = -1;
static uint8_t x473 = 1U;
volatile int8_t x476 = 14;
uint16_t x477 = 0U;
uint32_t t81 = 31U;
static int32_t x493 = INT32_MIN;
int64_t x507 = -3061122540360LL;
volatile int32_t x510 = 62;
uint16_t x515 = UINT16_MAX;
static volatile uint16_t x534 = UINT16_MAX;
uint16_t x535 = 0U;
int64_t x541 = INT64_MIN;
static volatile uint16_t x544 = UINT16_MAX;
volatile int32_t t94 = 29;
int64_t x545 = -15LL;
static int32_t t95 = 1385;
static uint16_t x552 = UINT16_MAX;
uint16_t x560 = 596U;
static int32_t t97 = 1361550;
static uint32_t x579 = 4U;
uint8_t x583 = UINT8_MAX;
int8_t x584 = 0;
volatile int32_t x585 = INT32_MIN;
static int8_t x586 = INT8_MAX;
uint8_t x587 = UINT8_MAX;
static int32_t t102 = -759762;
uint8_t x589 = UINT8_MAX;
int32_t x592 = INT32_MAX;
int32_t x593 = 147111606;
int16_t x601 = INT16_MIN;
volatile int32_t t105 = INT32_MAX;
int16_t x616 = INT16_MIN;
int32_t t108 = 887190740;
uint64_t x627 = UINT64_MAX;
uint64_t t110 = 254229836197924414LLU;
int8_t x643 = -1;
int8_t x644 = 0;
volatile int8_t x654 = INT8_MAX;
int64_t x657 = INT64_MAX;
static uint8_t x663 = UINT8_MAX;
uint32_t x664 = UINT32_MAX;
uint8_t x671 = 18U;
int8_t x672 = INT8_MAX;
int32_t t118 = 40527736;
static volatile uint64_t t120 = 37602924002146910LLU;
static int8_t x684 = INT8_MIN;
uint8_t x689 = 8U;
static int32_t t122 = 0;
uint32_t x693 = 73U;
uint32_t x696 = UINT32_MAX;
volatile uint32_t t123 = 4375U;
volatile int64_t t124 = -26LL;
uint64_t x711 = 179719580LLU;
volatile uint64_t t125 = 13973LLU;
volatile int16_t x715 = -1;
volatile uint64_t x719 = UINT64_MAX;
int16_t x731 = -1;
int8_t x736 = INT8_MIN;
static int16_t x744 = INT16_MIN;
volatile int32_t t133 = -21;
uint64_t x748 = 21917LLU;
uint16_t x756 = 1U;
volatile uint16_t x758 = 9458U;
volatile int32_t x759 = -1;
volatile int32_t t136 = 1671422;
static int16_t x762 = INT16_MAX;
int64_t x764 = -47017384897633650LL;
static int16_t x774 = -1;
static volatile uint32_t t139 = 85862873U;
static int16_t x777 = -1;
uint64_t x779 = 3010860569010278418LLU;
int16_t x780 = INT16_MIN;
uint64_t t140 = 681LLU;
int32_t x785 = INT32_MIN;
int64_t x797 = -136375751LL;
static int8_t x803 = 43;
int64_t x804 = 830376653204LL;
int16_t x825 = -24;
static int32_t x828 = -68;
uint16_t x853 = 790U;
int32_t x854 = INT32_MIN;
static volatile int16_t x858 = 974;
volatile uint16_t x859 = 903U;
volatile int32_t t154 = -39;
uint64_t x861 = 100841555729LLU;
uint32_t x880 = 6U;
int64_t x881 = INT64_MAX;
volatile int64_t x885 = INT64_MIN;
static int32_t t160 = -115;
int16_t x895 = INT16_MIN;
volatile int8_t x899 = 1;
int8_t x901 = -1;
int16_t x908 = INT16_MIN;
volatile uint64_t x910 = 130286970436755LLU;
volatile int32_t t168 = -17;
uint32_t x931 = 110708U;
uint8_t x932 = 0U;
volatile uint64_t t171 = 134376972331411LLU;
int32_t x937 = INT32_MAX;
uint16_t x938 = UINT16_MAX;
int64_t t172 = 0LL;
int64_t x946 = 98543LL;
int16_t x951 = INT16_MAX;
uint8_t x957 = 30U;
int32_t x958 = INT32_MAX;
uint32_t t175 = 84245U;
int64_t x962 = INT64_MAX;
uint64_t x977 = 50LLU;
uint32_t x980 = 876U;
volatile uint16_t x983 = UINT16_MAX;
int64_t x988 = 86062LL;
uint64_t t183 = 6750397732364LLU;
int8_t x993 = 1;
int64_t x1006 = -3407LL;
volatile uint32_t t186 = 51U;
volatile int64_t x1010 = -1114533LL;
static int32_t x1026 = 7370296;
volatile uint32_t x1035 = 237545574U;
uint32_t t192 = 5U;
int32_t x1040 = -11;
uint16_t x1041 = UINT16_MAX;
int32_t x1045 = 482787;
int16_t x1047 = INT16_MIN;
int16_t x1050 = INT16_MAX;
int32_t t196 = 99169;
volatile uint32_t t198 = 42607U;
static uint16_t x1069 = 14U;


void f0(void) {
    	int64_t x1 = 1LL;
	int32_t x2 = INT32_MIN;
	static int16_t x3 = INT16_MAX;
	int32_t t0 = -4;

    t0 = ((x1>x2)-(x3*x4));

    if (t0 != 1073709057) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = INT8_MAX;
	int32_t x10 = INT32_MAX;
	int32_t t1 = 407130;

    t1 = ((x9>x10)-(x11*x12));

    if (t1 != -229369) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = INT16_MIN;
	volatile int32_t x14 = INT32_MIN;
	static int8_t x15 = INT8_MAX;
	static uint8_t x16 = 2U;
	volatile int32_t t2 = -46873;

    t2 = ((x13>x14)-(x15*x16));

    if (t2 != -253) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x17 = -27743LL;
	uint64_t x18 = 376074172377549LLU;
	uint64_t x20 = UINT64_MAX;
	static volatile uint64_t t3 = 5LLU;

    t3 = ((x17>x18)-(x19*x20));

    if (t3 != 45LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x21 = UINT32_MAX;
	int64_t x22 = INT64_MIN;
	int8_t x24 = -1;
	static int32_t t4 = 0;

    t4 = ((x21>x22)-(x23*x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x29 = 255;
	static volatile int64_t x31 = INT64_MAX;
	uint8_t x32 = 1U;
	volatile int64_t t5 = -3928368944194273605LL;

    t5 = ((x29>x30)-(x31*x32));

    if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x34 = INT8_MIN;
	static volatile int32_t t6 = -633614134;

    t6 = ((x33>x34)-(x35*x36));

    if (t6 != 460) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x49 = 30063799LLU;
	int8_t x51 = -1;
	int32_t x52 = -1;

    t7 = ((x49>x50)-(x51*x52));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x53 = 0;
	int16_t x55 = -1;
	volatile int8_t x56 = INT8_MAX;

    t8 = ((x53>x54)-(x55*x56));

    if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x61 = INT16_MIN;
	volatile int8_t x62 = 1;
	static int32_t x63 = 1219362;
	volatile uint32_t x64 = UINT32_MAX;
	volatile uint32_t t9 = 68092U;

    t9 = ((x61>x62)-(x63*x64));

    if (t9 != 1219362U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x69 = 404715LLU;
	volatile int32_t x70 = -1;
	int64_t x71 = -1LL;
	int16_t x72 = INT16_MIN;

    t10 = ((x69>x70)-(x71*x72));

    if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x74 = -1LL;
	static volatile int8_t x75 = -1;
	static volatile int32_t x76 = -1;
	volatile int32_t t11 = 4469;

    t11 = ((x73>x74)-(x75*x76));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x77 = INT16_MIN;
	int8_t x78 = -1;
	volatile uint64_t x79 = 25186780850467LLU;
	static int32_t x80 = 8525087;

    t12 = ((x77>x78)-(x79*x80));

    if (t12 != 6641430884349453763LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x81 = -13;
	int32_t x82 = 8;
	volatile int64_t x83 = -1LL;
	static int64_t t13 = -232LL;

    t13 = ((x81>x82)-(x83*x84));

    if (t13 != 1486459765609207809LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x87 = -1;
	int16_t x88 = -1;
	volatile int32_t t14 = -513461247;

    t14 = ((x85>x86)-(x87*x88));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x89 = INT64_MIN;
	int64_t x90 = INT64_MIN;
	int8_t x91 = INT8_MAX;
	int32_t t15 = 5989949;

    t15 = ((x89>x90)-(x91*x92));

    if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x93 = 430665574228949LLU;
	static int64_t x94 = 2LL;
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MIN;
	int32_t t16 = 48246467;

    t16 = ((x93>x94)-(x95*x96));

    if (t16 != -4194303) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x101 = INT64_MIN;
	int64_t x102 = -46929998LL;
	uint32_t x103 = 5602U;
	int16_t x104 = INT16_MAX;
	volatile uint32_t t17 = 367U;

    t17 = ((x101>x102)-(x103*x104));

    if (t17 != 4111406562U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x109 = 52U;
	static int8_t x111 = -1;
	volatile uint32_t x112 = 176341209U;
	uint32_t t18 = 866U;

    t18 = ((x109>x110)-(x111*x112));

    if (t18 != 176341210U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x117 = -1;
	static volatile int64_t x118 = INT64_MIN;
	uint16_t x120 = UINT16_MAX;
	int32_t t19 = 1640;

    t19 = ((x117>x118)-(x119*x120));

    if (t19 != 8388481) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x121 = INT64_MIN;
	int64_t x122 = -1LL;
	uint64_t x123 = UINT64_MAX;
	int16_t x124 = -1;
	uint64_t t20 = UINT64_MAX;

    t20 = ((x121>x122)-(x123*x124));

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x125 = -52;
	int16_t x126 = -15;
	int64_t x127 = 2750133669472561LL;
	volatile int64_t t21 = -4848407564LL;

    t21 = ((x125>x126)-(x127*x128));

    if (t21 != -170508287507298782LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x129 = INT8_MIN;
	int16_t x130 = -1;
	uint32_t x131 = 8U;
	int16_t x132 = -1;
	static volatile uint32_t t22 = 10U;

    t22 = ((x129>x130)-(x131*x132));

    if (t22 != 8U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x137 = -225335;
	volatile uint16_t x138 = 15U;
	volatile int32_t x139 = INT32_MIN;
	int8_t x140 = 0;

    t23 = ((x137>x138)-(x139*x140));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x145 = 629940994996249850LL;
	int16_t x146 = -1;
	volatile int64_t x147 = -1LL;
	uint64_t x148 = UINT64_MAX;

    t24 = ((x145>x146)-(x147*x148));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x153 = INT16_MIN;
	int8_t x154 = INT8_MIN;
	volatile uint32_t x155 = 42674U;
	int32_t x156 = 11;
	volatile uint32_t t25 = 1768488U;

    t25 = ((x153>x154)-(x155*x156));

    if (t25 != 4294497882U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x161 = 409LLU;
	static volatile int16_t x164 = INT16_MAX;

    t26 = ((x161>x162)-(x163*x164));

    if (t26 != 28572824) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x165 = INT64_MAX;
	static uint8_t x166 = 1U;
	int8_t x167 = INT8_MAX;
	uint64_t t27 = 169292158435LLU;

    t27 = ((x165>x166)-(x167*x168));

    if (t27 != 18446627955466754404LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint64_t x169 = UINT64_MAX;
	int8_t x170 = INT8_MIN;
	volatile uint32_t x171 = 92U;
	int16_t x172 = 123;
	volatile uint32_t t28 = 2222U;

    t28 = ((x169>x170)-(x171*x172));

    if (t28 != 4294955981U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x174 = INT16_MIN;
	volatile uint32_t x175 = UINT32_MAX;
	volatile uint32_t x176 = 798162978U;
	volatile uint32_t t29 = 5U;

    t29 = ((x173>x174)-(x175*x176));

    if (t29 != 798162978U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x177 = 12;
	int32_t x178 = -1;
	volatile int64_t x179 = 2139086734642LL;
	uint64_t x180 = 46302982760709LLU;
	volatile uint64_t t30 = 264566939442466LLU;

    t30 = ((x177>x178)-(x179*x180));

    if (t30 != 6757178862225007623LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x181 = 462574501304653705LLU;
	volatile uint64_t x182 = 6344408381306077LLU;
	volatile uint16_t x183 = 166U;
	int32_t x184 = -1;

    t31 = ((x181>x182)-(x183*x184));

    if (t31 != 167) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x185 = 349492649660LLU;
	int8_t x186 = -1;
	int8_t x187 = 6;
	volatile int8_t x188 = -1;
	int32_t t32 = -1;

    t32 = ((x185>x186)-(x187*x188));

    if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x193 = 84U;
	int8_t x194 = INT8_MIN;
	uint32_t x195 = UINT32_MAX;
	int8_t x196 = -53;
	volatile uint32_t t33 = 29753430U;

    t33 = ((x193>x194)-(x195*x196));

    if (t33 != 4294967243U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x197 = INT16_MIN;
	int32_t x198 = INT32_MAX;
	uint16_t x199 = 13U;
	int32_t x200 = -118354;

    t34 = ((x197>x198)-(x199*x200));

    if (t34 != 1538602) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x202 = 27954U;
	int16_t x203 = INT16_MIN;
	int8_t x204 = -1;
	volatile int32_t t35 = -31;

    t35 = ((x201>x202)-(x203*x204));

    if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x218 = 24;
	int64_t x219 = INT64_MIN;
	volatile uint64_t t36 = 9357291207LLU;

    t36 = ((x217>x218)-(x219*x220));

    if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x221 = INT16_MIN;
	volatile int32_t x222 = INT32_MIN;
	static volatile uint64_t x223 = UINT64_MAX;
	uint64_t t37 = 410839408LLU;

    t37 = ((x221>x222)-(x223*x224));

    if (t37 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x225 = INT64_MIN;
	static int64_t x226 = -1LL;
	uint64_t x227 = 394314773971949LLU;
	volatile int16_t x228 = INT16_MAX;

    t38 = ((x225>x226)-(x227*x228));

    if (t38 != 5526231874970698733LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x229 = 1;
	int8_t x230 = -1;
	int32_t x231 = -6290993;
	static int8_t x232 = INT8_MIN;
	int32_t t39 = 387;

    t39 = ((x229>x230)-(x231*x232));

    if (t39 != -805247103) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x233 = INT16_MIN;
	int32_t x234 = -1;
	int8_t x235 = INT8_MIN;
	int64_t t40 = -36284LL;

    t40 = ((x233>x234)-(x235*x236));

    if (t40 != -160981845428713216LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x237 = INT64_MAX;
	int8_t x238 = INT8_MIN;
	int64_t x239 = -25565LL;
	static volatile int64_t t41 = -99786LL;

    t41 = ((x237>x238)-(x239*x240));

    if (t41 != -3272319LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x241 = INT16_MAX;
	int64_t x243 = -1LL;
	volatile uint32_t x244 = 188822140U;
	static int64_t t42 = 1529342LL;

    t42 = ((x241>x242)-(x243*x244));

    if (t42 != 188822141LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x245 = 0U;
	uint8_t x246 = UINT8_MAX;
	int32_t x248 = 14;
	static volatile uint64_t t43 = 181826720962LLU;

    t43 = ((x245>x246)-(x247*x248));

    if (t43 != 14LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x250 = UINT8_MAX;
	volatile int16_t x251 = -1;
	volatile uint32_t t44 = 220679U;

    t44 = ((x249>x250)-(x251*x252));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x253 = INT32_MAX;
	int32_t x255 = 0;
	volatile int32_t x256 = INT32_MIN;
	static int32_t t45 = 17901306;

    t45 = ((x253>x254)-(x255*x256));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x257 = 1384004938U;
	volatile uint32_t x258 = UINT32_MAX;
	uint64_t x259 = UINT64_MAX;
	int16_t x260 = INT16_MIN;
	volatile uint64_t t46 = 68867999804LLU;

    t46 = ((x257>x258)-(x259*x260));

    if (t46 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x261 = INT32_MAX;
	int16_t x262 = -1;
	int16_t x264 = 104;
	static volatile uint64_t t47 = 437334197259357LLU;

    t47 = ((x261>x262)-(x263*x264));

    if (t47 != 18446744073709542049LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x269 = 15;
	uint32_t x270 = UINT32_MAX;
	int64_t x271 = INT64_MIN;
	volatile uint64_t t48 = 4729450162306LLU;

    t48 = ((x269>x270)-(x271*x272));

    if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x281 = 3377514LLU;
	static int8_t x282 = -1;
	int32_t x283 = -894414;
	uint32_t x284 = 921683113U;

    t49 = ((x281>x282)-(x283*x284));

    if (t49 != 3141938430U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x285 = INT32_MAX;
	int8_t x286 = INT8_MAX;
	static uint64_t x288 = UINT64_MAX;
	uint64_t t50 = 17259LLU;

    t50 = ((x285>x286)-(x287*x288));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x293 = INT16_MIN;
	static uint64_t x294 = 492374987243816LLU;
	volatile int32_t x295 = INT32_MIN;
	volatile int64_t x296 = -41LL;

    t51 = ((x293>x294)-(x295*x296));

    if (t51 != -88046829567LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x301 = -1;
	uint8_t x303 = 0U;
	volatile int8_t x304 = -2;
	volatile int32_t t52 = -49629200;

    t52 = ((x301>x302)-(x303*x304));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x309 = -1;
	volatile int16_t x310 = INT16_MIN;
	uint8_t x311 = 43U;
	int64_t x312 = 34899820467LL;

    t53 = ((x309>x310)-(x311*x312));

    if (t53 != -1500692280080LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x313 = INT16_MIN;
	static int8_t x315 = 11;
	uint8_t x316 = UINT8_MAX;
	int32_t t54 = -3883;

    t54 = ((x313>x314)-(x315*x316));

    if (t54 != -2804) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x317 = UINT64_MAX;
	volatile uint16_t x318 = 22729U;
	volatile int64_t x319 = INT64_MIN;
	volatile uint64_t t55 = 306LLU;

    t55 = ((x317>x318)-(x319*x320));

    if (t55 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int8_t x325 = -1;
	int16_t x326 = -94;
	int8_t x328 = 8;
	int32_t t56 = 214647322;

    t56 = ((x325>x326)-(x327*x328));

    if (t56 != 9) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x329 = 102137109U;
	uint8_t x330 = 5U;
	int8_t x331 = -1;
	uint8_t x332 = 0U;
	volatile int32_t t57 = 3560;

    t57 = ((x329>x330)-(x331*x332));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x333 = UINT64_MAX;
	int16_t x334 = -3;
	int16_t x335 = -1;
	int64_t x336 = 6084629549421LL;

    t58 = ((x333>x334)-(x335*x336));

    if (t58 != 6084629549422LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x337 = UINT16_MAX;
	int8_t x338 = INT8_MIN;
	uint32_t x339 = 961475U;
	int32_t x340 = INT32_MIN;
	uint32_t t59 = 1036394709U;

    t59 = ((x337>x338)-(x339*x340));

    if (t59 != 2147483649U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x341 = UINT16_MAX;
	static int8_t x342 = INT8_MAX;
	int8_t x343 = -1;
	int8_t x344 = -1;
	int32_t t60 = 6;

    t60 = ((x341>x342)-(x343*x344));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x350 = 22;
	int16_t x351 = -17;
	int64_t x352 = -255241666423LL;
	static int64_t t61 = 225931801329232LL;

    t61 = ((x349>x350)-(x351*x352));

    if (t61 != -4339108329190LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x358 = -1;
	int16_t x359 = INT16_MAX;
	int64_t x360 = -1LL;
	int64_t t62 = 4213LL;

    t62 = ((x357>x358)-(x359*x360));

    if (t62 != 32767LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x366 = INT32_MAX;
	static int32_t t63 = 11651960;

    t63 = ((x365>x366)-(x367*x368));

    if (t63 != 21) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x373 = -1;
	int64_t x374 = INT64_MIN;
	uint16_t x375 = 0U;
	uint8_t x376 = 10U;
	int32_t t64 = -1085;

    t64 = ((x373>x374)-(x375*x376));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x377 = 0;
	int64_t x378 = INT64_MAX;
	uint64_t x379 = 2171110039358264LLU;
	static uint8_t x380 = 1U;
	static volatile uint64_t t65 = 7LLU;

    t65 = ((x377>x378)-(x379*x380));

    if (t65 != 18444572963670193352LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x385 = INT8_MIN;
	uint32_t x386 = 1U;
	static int8_t x388 = INT8_MAX;
	static volatile int32_t t66 = -703874;

    t66 = ((x385>x386)-(x387*x388));

    if (t66 != -380) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x389 = 29U;
	volatile uint32_t x390 = UINT32_MAX;

    t67 = ((x389>x390)-(x391*x392));

    if (t67 != 8355840) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x405 = 22198625U;
	int64_t x408 = 3924616LL;
	int64_t t68 = 5097257385349LL;

    t68 = ((x405>x406)-(x407*x408));

    if (t68 != -419933912LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x409 = INT64_MIN;
	uint32_t x411 = UINT32_MAX;
	volatile int8_t x412 = INT8_MAX;
	uint32_t t69 = 2751U;

    t69 = ((x409>x410)-(x411*x412));

    if (t69 != 127U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x413 = 10U;
	uint16_t x414 = 16292U;
	static uint16_t x415 = 190U;
	uint32_t x416 = 849381745U;
	volatile uint32_t t70 = 20304U;

    t70 = ((x413>x414)-(x415*x416));

    if (t70 != 1826225698U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x417 = INT8_MIN;
	volatile uint32_t x418 = UINT32_MAX;
	uint16_t x420 = 31669U;
	int32_t t71 = -31802485;

    t71 = ((x417>x418)-(x419*x420));

    if (t71 != -31669) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x421 = INT64_MAX;
	int64_t x422 = INT64_MIN;
	volatile uint32_t x424 = UINT32_MAX;

    t72 = ((x421>x422)-(x423*x424));

    if (t72 != 4294934529U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x429 = 93822770LL;
	uint64_t x430 = UINT64_MAX;
	volatile int8_t x432 = INT8_MAX;
	int32_t t73 = -112927236;

    t73 = ((x429>x430)-(x431*x432));

    if (t73 != -4161409) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x433 = INT32_MAX;
	int64_t x434 = 1780940776045625LL;
	int16_t x436 = INT16_MAX;
	volatile uint64_t t74 = 16079LLU;

    t74 = ((x433>x434)-(x435*x436));

    if (t74 != 32767LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x445 = 3LLU;
	int8_t x446 = 12;
	int8_t x448 = -1;
	volatile int32_t t75 = 0;

    t75 = ((x445>x446)-(x447*x448));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x449 = 1540;
	uint16_t x450 = 5U;
	int8_t x451 = INT8_MIN;
	int32_t x452 = -1;
	int32_t t76 = -5;

    t76 = ((x449>x450)-(x451*x452));

    if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x453 = INT32_MAX;
	static int8_t x454 = INT8_MIN;
	static uint16_t x455 = UINT16_MAX;
	int16_t x456 = 595;
	volatile int32_t t77 = 1;

    t77 = ((x453>x454)-(x455*x456));

    if (t77 != -38993324) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint32_t x461 = 233U;
	static int32_t x462 = -936367987;
	uint16_t x463 = UINT16_MAX;
	int64_t x464 = -25240254LL;

    t78 = ((x461>x462)-(x463*x464));

    if (t78 != 1654120045890LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x467 = 25;
	volatile uint32_t x468 = 0U;
	uint32_t t79 = 156595U;

    t79 = ((x465>x466)-(x467*x468));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x474 = 26U;
	uint64_t x475 = 10234677557LLU;
	uint64_t t80 = 0LLU;

    t80 = ((x473>x474)-(x475*x476));

    if (t80 != 18446743930424065818LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x478 = INT32_MAX;
	int16_t x479 = INT16_MIN;
	uint32_t x480 = UINT32_MAX;

    t81 = ((x477>x478)-(x479*x480));

    if (t81 != 4294934528U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x481 = UINT32_MAX;
	static volatile uint8_t x482 = UINT8_MAX;
	int32_t x483 = 13;
	volatile uint8_t x484 = 49U;
	volatile int32_t t82 = 1;

    t82 = ((x481>x482)-(x483*x484));

    if (t82 != -636) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x485 = INT64_MIN;
	uint8_t x486 = 0U;
	volatile int8_t x487 = INT8_MIN;
	int8_t x488 = INT8_MIN;
	int32_t t83 = -703;

    t83 = ((x485>x486)-(x487*x488));

    if (t83 != -16384) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x494 = INT8_MIN;
	uint64_t x495 = 22180378661LLU;
	uint8_t x496 = 3U;
	volatile uint64_t t84 = 4635635053LLU;

    t84 = ((x493>x494)-(x495*x496));

    if (t84 != 18446744007168415633LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x497 = INT32_MAX;
	static int16_t x498 = 561;
	volatile int64_t x499 = -7394357LL;
	int32_t x500 = INT32_MIN;
	volatile int64_t t85 = 3680414994LL;

    t85 = ((x497>x498)-(x499*x500));

    if (t85 != -15879260744974335LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x501 = INT32_MIN;
	int64_t x502 = INT64_MIN;
	static volatile int32_t x503 = -6464009;
	uint64_t x504 = UINT64_MAX;
	volatile uint64_t t86 = 3407LLU;

    t86 = ((x501>x502)-(x503*x504));

    if (t86 != 18446744073703087608LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x505 = UINT16_MAX;
	volatile int16_t x506 = -1;
	int16_t x508 = 1;
	volatile int64_t t87 = 626952980948LL;

    t87 = ((x505>x506)-(x507*x508));

    if (t87 != 3061122540361LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x509 = INT16_MIN;
	static int16_t x511 = INT16_MIN;
	uint16_t x512 = 13U;
	volatile int32_t t88 = 8527732;

    t88 = ((x509>x510)-(x511*x512));

    if (t88 != 425984) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x513 = INT16_MIN;
	static int64_t x514 = -1LL;
	uint8_t x516 = UINT8_MAX;
	static volatile int32_t t89 = 7969822;

    t89 = ((x513>x514)-(x515*x516));

    if (t89 != -16711425) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x521 = INT64_MIN;
	int8_t x522 = -1;
	static int16_t x523 = 7;
	volatile int32_t x524 = 423;
	int32_t t90 = 100113617;

    t90 = ((x521>x522)-(x523*x524));

    if (t90 != -2961) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x525 = -1;
	volatile uint16_t x526 = 0U;
	volatile int64_t x527 = 90376645358667LL;
	int8_t x528 = INT8_MIN;
	static volatile int64_t t91 = 16956487897588LL;

    t91 = ((x525>x526)-(x527*x528));

    if (t91 != 11568210605909376LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x533 = -1;
	volatile int64_t x536 = INT64_MIN;
	static int64_t t92 = 8164223797885542LL;

    t92 = ((x533>x534)-(x535*x536));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x537 = -1;
	uint8_t x538 = UINT8_MAX;
	int16_t x539 = INT16_MIN;
	static int16_t x540 = 0;
	volatile int32_t t93 = -346798640;

    t93 = ((x537>x538)-(x539*x540));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x542 = 2798U;
	int16_t x543 = INT16_MIN;

    t94 = ((x541>x542)-(x543*x544));

    if (t94 != 2147450880) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x546 = INT16_MIN;
	volatile int16_t x547 = INT16_MAX;
	static uint8_t x548 = 5U;

    t95 = ((x545>x546)-(x547*x548));

    if (t95 != -163834) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x549 = -12;
	int8_t x550 = -1;
	static int64_t x551 = -1LL;
	int64_t t96 = -1152LL;

    t96 = ((x549>x550)-(x551*x552));

    if (t96 != 65535LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x557 = INT8_MAX;
	volatile uint8_t x558 = UINT8_MAX;
	int8_t x559 = INT8_MIN;

    t97 = ((x557>x558)-(x559*x560));

    if (t97 != 76288) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x569 = 17U;
	static int16_t x570 = INT16_MIN;
	uint8_t x571 = UINT8_MAX;
	static int32_t x572 = 16266;
	int32_t t98 = 19;

    t98 = ((x569>x570)-(x571*x572));

    if (t98 != -4147829) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x573 = -1;
	uint64_t x574 = 5535841987558899LLU;
	int16_t x575 = INT16_MIN;
	uint64_t x576 = 779358911096468LLU;
	static uint64_t t99 = 1LLU;

    t99 = ((x573>x574)-(x575*x576));

    if (t99 != 7091288725099511809LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x577 = -26;
	volatile int32_t x578 = INT32_MIN;
	int32_t x580 = -23628070;
	volatile uint32_t t100 = 107412U;

    t100 = ((x577>x578)-(x579*x580));

    if (t100 != 94512281U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x581 = INT32_MAX;
	uint16_t x582 = UINT16_MAX;
	volatile int32_t t101 = -41656;

    t101 = ((x581>x582)-(x583*x584));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x588 = INT8_MIN;

    t102 = ((x585>x586)-(x587*x588));

    if (t102 != 32640) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x590 = 2107;
	int64_t x591 = -1LL;
	volatile int64_t t103 = -906751806901LL;

    t103 = ((x589>x590)-(x591*x592));

    if (t103 != 2147483647LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x594 = 8683490188LLU;
	volatile int64_t x595 = -3105365974747448LL;
	uint16_t x596 = 2760U;
	static volatile int64_t t104 = -145093LL;

    t104 = ((x593>x594)-(x595*x596));

    if (t104 != 8570810090302956480LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x602 = INT8_MAX;
	static volatile int32_t x603 = -1;
	int32_t x604 = INT32_MAX;

    t105 = ((x601>x602)-(x603*x604));

    if (t105 != INT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x605 = UINT32_MAX;
	int8_t x606 = INT8_MIN;
	int32_t x607 = 23946506;
	int16_t x608 = -1;
	int32_t t106 = -10897117;

    t106 = ((x605>x606)-(x607*x608));

    if (t106 != 23946507) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int16_t x609 = -2805;
	static int64_t x610 = -1LL;
	int64_t x611 = INT64_MIN;
	static volatile uint64_t x612 = 7LLU;
	uint64_t t107 = 2327LLU;

    t107 = ((x609>x610)-(x611*x612));

    if (t107 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x613 = UINT64_MAX;
	volatile int16_t x614 = 9;
	int8_t x615 = INT8_MIN;

    t108 = ((x613>x614)-(x615*x616));

    if (t108 != -4194303) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x617 = -2140409936LL;
	static int32_t x618 = INT32_MIN;
	uint8_t x619 = 7U;
	int16_t x620 = -1;
	int32_t t109 = 81934696;

    t109 = ((x617>x618)-(x619*x620));

    if (t109 != 8) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x625 = 17U;
	int32_t x626 = INT32_MAX;
	uint8_t x628 = UINT8_MAX;

    t110 = ((x625>x626)-(x627*x628));

    if (t110 != 255LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x637 = INT64_MAX;
	int8_t x638 = INT8_MIN;
	int16_t x639 = -17;
	int8_t x640 = 39;
	volatile int32_t t111 = -845;

    t111 = ((x637>x638)-(x639*x640));

    if (t111 != 664) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x641 = INT16_MIN;
	static int32_t x642 = INT32_MIN;
	int32_t t112 = -14;

    t112 = ((x641>x642)-(x643*x644));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int64_t x649 = INT64_MIN;
	int64_t x650 = -1LL;
	static int64_t x651 = -1LL;
	int32_t x652 = 398666188;
	int64_t t113 = -1142615777850LL;

    t113 = ((x649>x650)-(x651*x652));

    if (t113 != 398666188LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x653 = -1;
	uint64_t x655 = UINT64_MAX;
	int32_t x656 = INT32_MIN;
	static uint64_t t114 = 1762816464607460238LLU;

    t114 = ((x653>x654)-(x655*x656));

    if (t114 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x658 = -1;
	uint32_t x659 = 1U;
	int64_t x660 = 619802535032824449LL;
	int64_t t115 = -3LL;

    t115 = ((x657>x658)-(x659*x660));

    if (t115 != -619802535032824448LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x661 = 675LL;
	int8_t x662 = INT8_MIN;
	volatile uint32_t t116 = 772U;

    t116 = ((x661>x662)-(x663*x664));

    if (t116 != 256U) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x665 = 27U;
	static volatile int32_t x666 = INT32_MIN;
	static int32_t x667 = 4;
	uint32_t x668 = UINT32_MAX;
	volatile uint32_t t117 = 5U;

    t117 = ((x665>x666)-(x667*x668));

    if (t117 != 5U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x669 = INT8_MIN;
	uint32_t x670 = UINT32_MAX;

    t118 = ((x669>x670)-(x671*x672));

    if (t118 != -2286) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x673 = -1;
	int16_t x674 = INT16_MIN;
	static int8_t x675 = -20;
	uint32_t x676 = 1065137494U;
	volatile uint32_t t119 = 3U;

    t119 = ((x673>x674)-(x675*x676));

    if (t119 != 4122880697U) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x677 = -1;
	int32_t x678 = INT32_MIN;
	int8_t x679 = -1;
	uint64_t x680 = 31681038841242LLU;

    t120 = ((x677>x678)-(x679*x680));

    if (t120 != 31681038841243LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x681 = 38687U;
	uint16_t x682 = 1772U;
	uint8_t x683 = 1U;
	volatile int32_t t121 = 33;

    t121 = ((x681>x682)-(x683*x684));

    if (t121 != 129) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x690 = 91U;
	int8_t x691 = -1;
	uint16_t x692 = 25811U;

    t122 = ((x689>x690)-(x691*x692));

    if (t122 != 25811) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x694 = UINT32_MAX;
	uint16_t x695 = 1U;

    t123 = ((x693>x694)-(x695*x696));

    if (t123 != 1U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x697 = 10492680725866271LLU;
	int8_t x698 = 1;
	int64_t x699 = -1LL;
	static int16_t x700 = INT16_MIN;

    t124 = ((x697>x698)-(x699*x700));

    if (t124 != -32767LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x709 = INT64_MIN;
	static int64_t x710 = -1LL;
	int8_t x712 = 10;

    t125 = ((x709>x710)-(x711*x712));

    if (t125 != 18446744071912355816LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x713 = INT16_MAX;
	int16_t x714 = -2;
	uint16_t x716 = 963U;
	int32_t t126 = 2512286;

    t126 = ((x713>x714)-(x715*x716));

    if (t126 != 964) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x717 = INT32_MAX;
	int64_t x718 = -57LL;
	uint8_t x720 = 1U;
	uint64_t t127 = 133558530743183LLU;

    t127 = ((x717>x718)-(x719*x720));

    if (t127 != 2LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x721 = -1;
	uint16_t x722 = 24U;
	uint32_t x723 = 43132463U;
	uint16_t x724 = UINT16_MAX;
	volatile uint32_t t128 = 722484174U;

    t128 = ((x721>x722)-(x723*x724));

    if (t128 != 3697485359U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x725 = 4305U;
	static uint8_t x726 = 0U;
	int32_t x727 = -1;
	volatile uint16_t x728 = 1U;
	static volatile int32_t t129 = -7202012;

    t129 = ((x725>x726)-(x727*x728));

    if (t129 != 2) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x729 = -299;
	uint16_t x730 = 3U;
	uint16_t x732 = 78U;
	int32_t t130 = -54907;

    t130 = ((x729>x730)-(x731*x732));

    if (t130 != 78) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x733 = INT8_MIN;
	static int32_t x734 = INT32_MIN;
	volatile int64_t x735 = -19058760LL;
	volatile int64_t t131 = 437923897LL;

    t131 = ((x733>x734)-(x735*x736));

    if (t131 != -2439521279LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x737 = 12878180899269LLU;
	int32_t x738 = 81581;
	uint32_t x739 = UINT32_MAX;
	uint64_t x740 = 10LLU;
	static volatile uint64_t t132 = 323577336852998LLU;

    t132 = ((x737>x738)-(x739*x740));

    if (t132 != 18446744030759878667LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x741 = INT8_MAX;
	uint32_t x742 = 83892U;
	static uint16_t x743 = 1U;

    t133 = ((x741>x742)-(x743*x744));

    if (t133 != 32768) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x745 = -1LL;
	uint32_t x746 = UINT32_MAX;
	uint16_t x747 = 16456U;
	uint64_t t134 = 6510421937LLU;

    t134 = ((x745>x746)-(x747*x748));

    if (t134 != 18446744073348885464LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x753 = UINT16_MAX;
	uint8_t x754 = UINT8_MAX;
	static volatile int32_t x755 = 21876;
	int32_t t135 = -1;

    t135 = ((x753>x754)-(x755*x756));

    if (t135 != -21875) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x757 = -35;
	int16_t x760 = INT16_MAX;

    t136 = ((x757>x758)-(x759*x760));

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x761 = UINT64_MAX;
	volatile uint8_t x763 = 0U;
	static volatile int64_t t137 = 23133066446LL;

    t137 = ((x761>x762)-(x763*x764));

    if (t137 != 1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x765 = 15U;
	volatile uint64_t x766 = 16513076LLU;
	int16_t x767 = -1;
	uint32_t x768 = 95U;
	static uint32_t t138 = 330U;

    t138 = ((x765>x766)-(x767*x768));

    if (t138 != 95U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x773 = INT32_MIN;
	static int16_t x775 = INT16_MIN;
	uint32_t x776 = UINT32_MAX;

    t139 = ((x773>x774)-(x775*x776));

    if (t139 != 4294934528U) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x778 = 5663U;

    t140 = ((x777>x778)-(x779*x780));

    if (t140 != 6691819130121158656LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x786 = INT16_MIN;
	volatile uint16_t x787 = 3611U;
	int8_t x788 = -15;
	int32_t t141 = -16971779;

    t141 = ((x785>x786)-(x787*x788));

    if (t141 != 54165) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x793 = INT8_MIN;
	int32_t x794 = 49;
	int16_t x795 = INT16_MIN;
	int8_t x796 = -1;
	int32_t t142 = 6966;

    t142 = ((x793>x794)-(x795*x796));

    if (t142 != -32768) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x798 = INT32_MIN;
	uint8_t x799 = UINT8_MAX;
	int16_t x800 = INT16_MIN;
	volatile int32_t t143 = 11118282;

    t143 = ((x797>x798)-(x799*x800));

    if (t143 != 8355841) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x801 = 1323;
	int32_t x802 = -1;
	volatile int64_t t144 = -35LL;

    t144 = ((x801>x802)-(x803*x804));

    if (t144 != -35706196087771LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x809 = UINT8_MAX;
	volatile uint64_t x810 = 6LLU;
	static volatile int32_t x811 = 45629034;
	uint8_t x812 = 14U;
	volatile int32_t t145 = 27352015;

    t145 = ((x809>x810)-(x811*x812));

    if (t145 != -638806475) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x813 = 1341U;
	int32_t x814 = -1;
	uint32_t x815 = 9U;
	uint16_t x816 = UINT16_MAX;
	uint32_t t146 = 2U;

    t146 = ((x813>x814)-(x815*x816));

    if (t146 != 4294377482U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x817 = INT32_MIN;
	static volatile int8_t x818 = -1;
	volatile uint32_t x819 = 0U;
	static int8_t x820 = INT8_MIN;
	static volatile uint32_t t147 = 699U;

    t147 = ((x817>x818)-(x819*x820));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x821 = INT64_MIN;
	uint8_t x822 = UINT8_MAX;
	int32_t x823 = -1;
	int8_t x824 = INT8_MIN;
	int32_t t148 = 1026764201;

    t148 = ((x821>x822)-(x823*x824));

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x826 = -647390400683366908LL;
	static int32_t x827 = -11;
	int32_t t149 = -5805;

    t149 = ((x825>x826)-(x827*x828));

    if (t149 != -747) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x837 = INT64_MAX;
	uint64_t x838 = UINT64_MAX;
	volatile int8_t x839 = 1;
	volatile uint8_t x840 = 28U;
	int32_t t150 = 15318906;

    t150 = ((x837>x838)-(x839*x840));

    if (t150 != -28) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x841 = INT8_MIN;
	int64_t x842 = -1LL;
	volatile int16_t x843 = -1;
	int8_t x844 = -1;
	static volatile int32_t t151 = 0;

    t151 = ((x841>x842)-(x843*x844));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x845 = 17362U;
	uint8_t x846 = UINT8_MAX;
	volatile int32_t x847 = -1;
	int8_t x848 = 46;
	static volatile int32_t t152 = 751001628;

    t152 = ((x845>x846)-(x847*x848));

    if (t152 != 47) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x855 = 100272039U;
	int8_t x856 = INT8_MIN;
	volatile uint32_t t153 = 53U;

    t153 = ((x853>x854)-(x855*x856));

    if (t153 != 4244886401U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x857 = INT16_MAX;
	uint8_t x860 = 5U;

    t154 = ((x857>x858)-(x859*x860));

    if (t154 != -4514) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x862 = INT8_MIN;
	int16_t x863 = 77;
	int64_t x864 = 147328828691LL;
	static int64_t t155 = 0LL;

    t155 = ((x861>x862)-(x863*x864));

    if (t155 != -11344319809207LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x865 = 994187U;
	int16_t x866 = 4;
	uint32_t x867 = 2668282U;
	uint16_t x868 = 7U;
	volatile uint32_t t156 = 136277534U;

    t156 = ((x865>x866)-(x867*x868));

    if (t156 != 4276289323U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x873 = UINT64_MAX;
	uint32_t x874 = 965424418U;
	static int32_t x875 = -252;
	volatile int8_t x876 = INT8_MIN;
	volatile int32_t t157 = -448807002;

    t157 = ((x873>x874)-(x875*x876));

    if (t157 != -32255) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x877 = 70U;
	uint64_t x878 = UINT64_MAX;
	int32_t x879 = INT32_MIN;
	uint32_t t158 = 56U;

    t158 = ((x877>x878)-(x879*x880));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x882 = INT16_MIN;
	static uint8_t x883 = 0U;
	static int64_t x884 = -419116683LL;
	int64_t t159 = 1753709LL;

    t159 = ((x881>x882)-(x883*x884));

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x886 = UINT8_MAX;
	int32_t x887 = 2510;
	int8_t x888 = INT8_MIN;

    t160 = ((x885>x886)-(x887*x888));

    if (t160 != 321280) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x889 = INT8_MAX;
	int32_t x890 = -1;
	static uint32_t x891 = 999575068U;
	volatile int8_t x892 = -39;
	uint32_t t161 = 311U;

    t161 = ((x889>x890)-(x891*x892));

    if (t161 != 328721989U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x893 = -25LL;
	int64_t x894 = -1LL;
	uint64_t x896 = 2174304049LLU;
	volatile uint64_t t162 = 7403784LLU;

    t162 = ((x893>x894)-(x895*x896));

    if (t162 != 71247595077632LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x897 = -133245;
	volatile int64_t x898 = -1LL;
	static volatile uint16_t x900 = UINT16_MAX;
	volatile int32_t t163 = -4535;

    t163 = ((x897>x898)-(x899*x900));

    if (t163 != -65535) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x902 = INT16_MIN;
	uint8_t x903 = 0U;
	static int8_t x904 = INT8_MIN;
	int32_t t164 = -489644;

    t164 = ((x901>x902)-(x903*x904));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x905 = UINT8_MAX;
	uint64_t x906 = UINT64_MAX;
	int16_t x907 = -1;
	int32_t t165 = -727211;

    t165 = ((x905>x906)-(x907*x908));

    if (t165 != -32768) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x909 = -1;
	int32_t x911 = INT32_MAX;
	int64_t x912 = 4324755LL;
	volatile int64_t t166 = 31069LL;

    t166 = ((x909>x910)-(x911*x912));

    if (t166 != -9287340639781484LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x913 = -1;
	int8_t x914 = INT8_MAX;
	volatile int64_t x915 = 12653197959022755LL;
	volatile uint8_t x916 = 1U;
	volatile int64_t t167 = -97958350LL;

    t167 = ((x913>x914)-(x915*x916));

    if (t167 != -12653197959022755LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x917 = 4498;
	volatile int16_t x918 = 0;
	int16_t x919 = 233;
	uint8_t x920 = 0U;

    t168 = ((x917>x918)-(x919*x920));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x925 = -1;
	volatile int32_t x926 = INT32_MAX;
	static int32_t x927 = -661783;
	uint32_t x928 = UINT32_MAX;
	uint32_t t169 = 3143U;

    t169 = ((x925>x926)-(x927*x928));

    if (t169 != 4294305513U) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x929 = UINT16_MAX;
	int32_t x930 = -1;
	volatile uint32_t t170 = 87U;

    t170 = ((x929>x930)-(x931*x932));

    if (t170 != 1U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x933 = INT64_MIN;
	uint8_t x934 = UINT8_MAX;
	uint64_t x935 = 630LLU;
	int64_t x936 = INT64_MIN;

    t171 = ((x933>x934)-(x935*x936));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x939 = -110665358LL;
	uint32_t x940 = UINT32_MAX;

    t172 = ((x937>x938)-(x939*x940));

    if (t172 != 475304093299466611LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x945 = 2U;
	static int16_t x947 = INT16_MAX;
	int8_t x948 = -1;
	volatile int32_t t173 = 5;

    t173 = ((x945>x946)-(x947*x948));

    if (t173 != 32767) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x949 = 68U;
	int32_t x950 = INT32_MIN;
	static int64_t x952 = -17080207304LL;
	volatile int64_t t174 = 561475620195160747LL;

    t174 = ((x949>x950)-(x951*x952));

    if (t174 != 559667152730169LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x959 = UINT32_MAX;
	int16_t x960 = INT16_MAX;

    t175 = ((x957>x958)-(x959*x960));

    if (t175 != 32767U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x961 = -1;
	int64_t x963 = -1LL;
	int16_t x964 = INT16_MIN;
	static volatile int64_t t176 = 148830679693878LL;

    t176 = ((x961>x962)-(x963*x964));

    if (t176 != -32768LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x965 = -1;
	volatile int16_t x966 = 9289;
	uint64_t x967 = 986906939267755091LLU;
	static int16_t x968 = -38;
	volatile uint64_t t177 = 15106LLU;

    t177 = ((x965>x966)-(x967*x968));

    if (t177 != 608975544755590226LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x969 = -484;
	uint8_t x970 = UINT8_MAX;
	int64_t x971 = -24140995LL;
	int64_t x972 = -21230040LL;
	static volatile int64_t t178 = 1436148703311LL;

    t178 = ((x969>x970)-(x971*x972));

    if (t178 != -512514289489800LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x973 = 7;
	volatile int64_t x974 = 3994002293LL;
	int32_t x975 = 397;
	int8_t x976 = 29;
	static volatile int32_t t179 = -763;

    t179 = ((x973>x974)-(x975*x976));

    if (t179 != -11513) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x978 = -1;
	volatile uint16_t x979 = 12U;
	uint32_t t180 = 113U;

    t180 = ((x977>x978)-(x979*x980));

    if (t180 != 4294956784U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x981 = -22;
	static int32_t x982 = -15300127;
	int16_t x984 = 113;
	int32_t t181 = 6778628;

    t181 = ((x981>x982)-(x983*x984));

    if (t181 != -7405454) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x985 = INT8_MAX;
	int8_t x986 = 0;
	static int32_t x987 = INT32_MAX;
	int64_t t182 = -16224060LL;

    t182 = ((x985>x986)-(x987*x988));

    if (t182 != -184816737628113LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x989 = INT64_MIN;
	uint16_t x990 = 52U;
	uint64_t x991 = UINT64_MAX;
	volatile int64_t x992 = INT64_MAX;

    t183 = ((x989>x990)-(x991*x992));

    if (t183 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x994 = INT8_MIN;
	int8_t x995 = INT8_MIN;
	static uint32_t x996 = 225440U;
	uint32_t t184 = 2453578U;

    t184 = ((x993>x994)-(x995*x996));

    if (t184 != 28856321U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x997 = -1;
	volatile int8_t x998 = -6;
	int32_t x999 = INT32_MIN;
	static uint32_t x1000 = UINT32_MAX;
	static volatile uint32_t t185 = 629513U;

    t185 = ((x997>x998)-(x999*x1000));

    if (t185 != 2147483649U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x1005 = 61;
	static volatile uint32_t x1007 = 4U;
	int32_t x1008 = -13081;

    t186 = ((x1005>x1006)-(x1007*x1008));

    if (t186 != 52325U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x1009 = INT32_MIN;
	int8_t x1011 = -1;
	static uint32_t x1012 = UINT32_MAX;
	volatile uint32_t t187 = UINT32_MAX;

    t187 = ((x1009>x1010)-(x1011*x1012));

    if (t187 != UINT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x1013 = INT64_MIN;
	uint32_t x1014 = 1309881U;
	int16_t x1015 = -339;
	int64_t x1016 = -1LL;
	volatile int64_t t188 = -1389438565038599LL;

    t188 = ((x1013>x1014)-(x1015*x1016));

    if (t188 != -339LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1021 = -1LL;
	int8_t x1022 = INT8_MAX;
	int8_t x1023 = INT8_MIN;
	int16_t x1024 = 14353;
	volatile int32_t t189 = -16846441;

    t189 = ((x1021>x1022)-(x1023*x1024));

    if (t189 != 1837184) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x1025 = -2807791833185405LL;
	static int16_t x1027 = -26;
	int8_t x1028 = 1;
	volatile int32_t t190 = -33;

    t190 = ((x1025>x1026)-(x1027*x1028));

    if (t190 != 26) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1029 = 72;
	static volatile uint16_t x1030 = UINT16_MAX;
	uint8_t x1031 = 28U;
	int16_t x1032 = INT16_MIN;
	static int32_t t191 = -51;

    t191 = ((x1029>x1030)-(x1031*x1032));

    if (t191 != 917504) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1033 = -1;
	int32_t x1034 = INT32_MIN;
	volatile uint16_t x1036 = UINT16_MAX;

    t192 = ((x1033>x1034)-(x1035*x1036));

    if (t192 != 1707255911U) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1037 = INT16_MIN;
	int64_t x1038 = 293815079017LL;
	static int8_t x1039 = INT8_MIN;
	int32_t t193 = 29005379;

    t193 = ((x1037>x1038)-(x1039*x1040));

    if (t193 != -1408) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x1042 = 29;
	int64_t x1043 = -30846883LL;
	int8_t x1044 = INT8_MIN;
	volatile int64_t t194 = -2395723222440LL;

    t194 = ((x1041>x1042)-(x1043*x1044));

    if (t194 != -3948401023LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1046 = 1U;
	volatile int64_t x1048 = -1LL;
	static volatile int64_t t195 = -880622906LL;

    t195 = ((x1045>x1046)-(x1047*x1048));

    if (t195 != -32767LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x1049 = -417240255;
	uint8_t x1051 = 44U;
	static uint8_t x1052 = UINT8_MAX;

    t196 = ((x1049>x1050)-(x1051*x1052));

    if (t196 != -11220) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x1053 = UINT8_MAX;
	int32_t x1054 = -1;
	static int8_t x1055 = -1;
	int16_t x1056 = INT16_MIN;
	static int32_t t197 = -3385817;

    t197 = ((x1053>x1054)-(x1055*x1056));

    if (t197 != -32767) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x1065 = 2045424;
	volatile uint32_t x1066 = 18991330U;
	static volatile int8_t x1067 = -1;
	volatile uint32_t x1068 = 83703U;

    t198 = ((x1065>x1066)-(x1067*x1068));

    if (t198 != 83703U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x1070 = 6452323;
	volatile uint64_t x1071 = 252761LLU;
	int8_t x1072 = INT8_MIN;
	static uint64_t t199 = 1832490130601475LLU;

    t199 = ((x1069>x1070)-(x1071*x1072));

    if (t199 != 32353408LLU) { NG(); } else { ; }
	
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

