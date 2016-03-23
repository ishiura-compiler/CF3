
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

static int16_t x1 = INT16_MIN;
volatile int16_t x2 = -1;
static volatile int32_t t0 = -15020;
int8_t x6 = INT8_MIN;
int8_t x17 = INT8_MIN;
static int64_t x19 = 9755395939809LL;
volatile int8_t x30 = INT8_MAX;
uint8_t x32 = UINT8_MAX;
int32_t t5 = 785367;
int16_t x36 = 2771;
volatile int32_t t7 = 2;
uint64_t x51 = UINT64_MAX;
int8_t x57 = INT8_MAX;
volatile uint32_t x59 = 231786185U;
uint32_t x71 = UINT32_MAX;
static int32_t t14 = -1173;
uint8_t x100 = 3U;
uint8_t x102 = 0U;
uint16_t x117 = 0U;
int32_t x118 = -1;
volatile int16_t x133 = 7246;
int16_t x135 = INT16_MIN;
uint16_t x137 = 1U;
uint32_t x138 = UINT32_MAX;
static int16_t x142 = INT16_MIN;
int32_t x146 = INT32_MAX;
uint8_t x154 = UINT8_MAX;
uint8_t x159 = 4U;
int32_t t27 = 0;
static uint16_t x195 = UINT16_MAX;
int32_t t31 = 67193;
int8_t x207 = INT8_MIN;
int16_t x208 = INT16_MIN;
uint8_t x216 = 21U;
int32_t t34 = -35291;
int32_t x236 = -817;
static volatile uint16_t x237 = 5U;
static int64_t x240 = -571751357866325LL;
uint64_t x261 = 7885408049385616107LLU;
uint16_t x270 = 26U;
int64_t x271 = INT64_MIN;
static int64_t x288 = -1LL;
int32_t x314 = INT32_MIN;
volatile uint8_t x325 = 56U;
int32_t t47 = 12066312;
int16_t x334 = INT16_MIN;
static volatile int32_t t48 = 1;
int32_t t50 = -92148;
int64_t x350 = INT64_MIN;
volatile int32_t x352 = 1;
static int32_t t52 = 724176;
int64_t x370 = -1LL;
int32_t x371 = INT32_MAX;
int16_t x372 = -165;
static uint32_t x374 = UINT32_MAX;
static int64_t x376 = INT64_MIN;
int32_t t54 = 228;
int32_t x378 = INT32_MAX;
uint16_t x379 = UINT16_MAX;
static int16_t x380 = INT16_MAX;
int32_t x389 = INT32_MIN;
static volatile int32_t t56 = 55162;
volatile uint32_t x405 = UINT32_MAX;
volatile uint16_t x408 = 176U;
int32_t t59 = 944106052;
int16_t x411 = 3382;
int8_t x421 = INT8_MIN;
int64_t x422 = -1LL;
int64_t x423 = 31944324701974788LL;
uint8_t x424 = UINT8_MAX;
int32_t t62 = -128816;
int16_t x436 = INT16_MIN;
int32_t x442 = -1;
int16_t x447 = INT16_MAX;
volatile uint8_t x464 = 1U;
int32_t x509 = -1;
volatile int16_t x515 = 629;
int8_t x516 = -1;
volatile int32_t x517 = 3;
static int16_t x570 = -1;
int8_t x577 = -1;
static int8_t x578 = 33;
int16_t x580 = 46;
uint16_t x592 = 1593U;
static uint8_t x603 = 2U;
static int8_t x617 = INT8_MAX;
static int16_t x618 = 2;
int16_t x619 = INT16_MAX;
uint8_t x625 = 0U;
int32_t t87 = -1;
int64_t x663 = INT64_MAX;
int32_t x665 = INT32_MIN;
int16_t x670 = 61;
uint16_t x671 = 380U;
int8_t x675 = INT8_MAX;
int32_t x676 = INT32_MIN;
volatile int32_t x683 = 369;
int8_t x685 = -1;
uint8_t x696 = UINT8_MAX;
static volatile int32_t t99 = -71831;
volatile int32_t x697 = INT32_MAX;
int64_t x698 = -1LL;
static uint16_t x703 = 769U;
volatile int32_t t101 = 1203;
static uint32_t x711 = UINT32_MAX;
static uint64_t x716 = 32328453296503LLU;
static int8_t x741 = -1;
static volatile int32_t x742 = 65276;
int32_t x743 = INT32_MIN;
int64_t x746 = 153141627732711LL;
int32_t x756 = INT32_MIN;
volatile int8_t x761 = 2;
volatile int32_t t109 = 31;
volatile uint8_t x776 = 2U;
uint16_t x781 = 6643U;
int8_t x783 = -1;
volatile int32_t t111 = -12221789;
int64_t x796 = INT64_MIN;
volatile int16_t x804 = INT16_MIN;
volatile int32_t t114 = 18148;
volatile uint64_t x807 = 23842120419LLU;
int8_t x814 = INT8_MIN;
int32_t x823 = INT32_MIN;
static int8_t x825 = -1;
uint16_t x837 = 14U;
static volatile int8_t x839 = -1;
int64_t x846 = 189301042LL;
volatile int64_t x849 = INT64_MIN;
static int8_t x851 = INT8_MIN;
int32_t x853 = INT32_MIN;
int64_t x872 = -1LL;
int64_t x877 = 997015LL;
static uint16_t x880 = UINT16_MAX;
int16_t x906 = -1;
uint16_t x907 = 0U;
static int64_t x920 = -200523LL;
static volatile int32_t t128 = 31271;
volatile uint8_t x921 = UINT8_MAX;
int8_t x924 = -8;
volatile int32_t t129 = 0;
volatile int32_t t130 = -44016465;
int8_t x937 = -1;
volatile uint8_t x939 = 109U;
int32_t t135 = 16948;
int64_t x961 = -10651036562704LL;
static int32_t t138 = -1820;
int64_t x980 = -120716155933LL;
volatile int32_t t140 = 2;
uint8_t x1007 = 11U;
int64_t x1008 = INT64_MIN;
volatile int32_t t141 = -198;
uint32_t x1014 = UINT32_MAX;
uint8_t x1021 = 12U;
static int32_t t146 = -421949;
volatile int16_t x1041 = INT16_MAX;
volatile int64_t x1044 = INT64_MIN;
int16_t x1060 = INT16_MIN;
int32_t t150 = 14313;
uint32_t x1094 = 1265053860U;
int64_t x1099 = INT64_MIN;
int64_t x1118 = INT64_MAX;
int16_t x1119 = INT16_MAX;
int8_t x1120 = 7;
uint8_t x1123 = UINT8_MAX;
static int16_t x1124 = INT16_MIN;
int32_t t156 = 0;
volatile int32_t t157 = 382056757;
volatile int32_t t158 = -437;
uint8_t x1176 = 46U;
int16_t x1177 = -1;
volatile int32_t t160 = -1962440;
volatile uint32_t x1181 = 1216274547U;
int8_t x1188 = INT8_MIN;
uint64_t x1201 = 39305566760LLU;
static volatile int32_t t163 = 43757;
uint16_t x1219 = 1U;
static int32_t x1237 = 1;
volatile int32_t x1238 = -86;
int32_t t168 = 294376482;
int32_t t169 = 42;
int32_t t170 = 8277088;
uint64_t x1261 = UINT64_MAX;
int32_t x1264 = -1;
int8_t x1265 = -1;
int64_t x1266 = 3396986329LL;
int32_t t172 = -14961145;
int32_t x1279 = -1;
int64_t x1280 = INT64_MIN;
int32_t t174 = 124885;
static int32_t t175 = -407359;
volatile int8_t x1289 = -1;
uint32_t x1292 = 1U;
uint64_t x1298 = 3209881443475432LLU;
int16_t x1302 = 211;
uint32_t x1303 = UINT32_MAX;
int32_t x1304 = INT32_MIN;
int32_t x1330 = INT32_MIN;
int64_t x1360 = -1746627464541987481LL;
uint64_t x1362 = 3LLU;
int16_t x1370 = -178;
static int8_t x1388 = 2;
volatile int32_t t185 = -143668;
uint8_t x1390 = 0U;
int32_t t186 = -6956;
int8_t x1398 = -1;
int32_t t187 = 6;
int64_t x1407 = INT64_MAX;
int32_t t188 = 78;
int64_t x1416 = INT64_MIN;
int32_t t189 = 4589388;
int8_t x1440 = INT8_MIN;
int8_t x1445 = INT8_MIN;
int32_t t193 = -83056;
uint16_t x1449 = UINT16_MAX;
volatile int8_t x1450 = INT8_MAX;
int32_t t194 = 0;
int16_t x1459 = INT16_MAX;
int32_t x1472 = INT32_MIN;
static int16_t x1477 = 58;
uint32_t x1483 = 19099U;
uint16_t x1486 = 22452U;


void f0(void) {
    	volatile int32_t x3 = 5881;
	int16_t x4 = INT16_MIN;

    t0 = ((x1>x2)%(x3>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	volatile int64_t x7 = INT64_MAX;
	static uint8_t x8 = 9U;
	static int32_t t1 = 3383709;

    t1 = ((x5>x6)%(x7>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x18 = -1;
	int8_t x20 = INT8_MIN;
	volatile int32_t t2 = 175;

    t2 = ((x17>x18)%(x19>x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x21 = INT16_MAX;
	static uint8_t x22 = UINT8_MAX;
	int16_t x23 = 816;
	int16_t x24 = INT16_MIN;
	int32_t t3 = -117704945;

    t3 = ((x21>x22)%(x23>x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x25 = INT64_MIN;
	uint8_t x26 = 1U;
	uint32_t x27 = UINT32_MAX;
	volatile int16_t x28 = INT16_MAX;
	int32_t t4 = -12803;

    t4 = ((x25>x26)%(x27>x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x29 = INT32_MIN;
	int16_t x31 = INT16_MAX;

    t5 = ((x29>x30)%(x31>x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x33 = INT64_MAX;
	int64_t x34 = -1876470042734014LL;
	int16_t x35 = INT16_MAX;
	int32_t t6 = 34;

    t6 = ((x33>x34)%(x35>x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x41 = UINT32_MAX;
	static int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MAX;
	int8_t x44 = INT8_MIN;

    t7 = ((x41>x42)%(x43>x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x45 = 292984284U;
	int32_t x46 = INT32_MAX;
	uint16_t x47 = 165U;
	int64_t x48 = -11675938896579392LL;
	volatile int32_t t8 = -25;

    t8 = ((x45>x46)%(x47>x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = 12283;
	static volatile int32_t x50 = 0;
	int32_t x52 = -109;
	volatile int32_t t9 = -457642983;

    t9 = ((x49>x50)%(x51>x52));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x53 = 23LLU;
	int64_t x54 = -1LL;
	static uint8_t x55 = 23U;
	int32_t x56 = INT32_MIN;
	int32_t t10 = -8;

    t10 = ((x53>x54)%(x55>x56));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x58 = INT8_MAX;
	uint8_t x60 = 13U;
	int32_t t11 = 542;

    t11 = ((x57>x58)%(x59>x60));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x61 = INT16_MIN;
	static int64_t x62 = INT64_MIN;
	static int64_t x63 = 13963438997LL;
	static int8_t x64 = INT8_MAX;
	int32_t t12 = -23102;

    t12 = ((x61>x62)%(x63>x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x69 = 65319472U;
	int32_t x70 = INT32_MIN;
	int32_t x72 = 2637633;
	volatile int32_t t13 = -4875;

    t13 = ((x69>x70)%(x71>x72));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x81 = UINT16_MAX;
	int8_t x82 = INT8_MIN;
	uint8_t x83 = 81U;
	uint8_t x84 = 11U;

    t14 = ((x81>x82)%(x83>x84));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x85 = INT32_MAX;
	static int32_t x86 = INT32_MAX;
	int64_t x87 = 152160LL;
	int32_t x88 = INT32_MIN;
	volatile int32_t t15 = -477;

    t15 = ((x85>x86)%(x87>x88));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x93 = 1U;
	int32_t x94 = INT32_MIN;
	static int8_t x95 = -29;
	int32_t x96 = INT32_MIN;
	volatile int32_t t16 = 3993;

    t16 = ((x93>x94)%(x95>x96));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x97 = INT32_MIN;
	static int8_t x98 = INT8_MIN;
	int64_t x99 = 252073832LL;
	int32_t t17 = 792;

    t17 = ((x97>x98)%(x99>x100));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x101 = -1;
	static int8_t x103 = INT8_MIN;
	static int32_t x104 = -15417261;
	volatile int32_t t18 = -1;

    t18 = ((x101>x102)%(x103>x104));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x119 = -1;
	uint64_t x120 = 2472892218184LLU;
	static volatile int32_t t19 = 0;

    t19 = ((x117>x118)%(x119>x120));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x121 = -1;
	static uint32_t x122 = UINT32_MAX;
	static int32_t x123 = INT32_MAX;
	int8_t x124 = 0;
	static int32_t t20 = -19902120;

    t20 = ((x121>x122)%(x123>x124));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x134 = 8581;
	int64_t x136 = INT64_MIN;
	int32_t t21 = 5055010;

    t21 = ((x133>x134)%(x135>x136));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x139 = UINT8_MAX;
	int64_t x140 = -136262096LL;
	int32_t t22 = 196333397;

    t22 = ((x137>x138)%(x139>x140));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x141 = INT16_MIN;
	uint32_t x143 = UINT32_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t23 = -8361;

    t23 = ((x141>x142)%(x143>x144));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x145 = -1;
	uint16_t x147 = 5U;
	volatile int32_t x148 = INT32_MIN;
	volatile int32_t t24 = 88;

    t24 = ((x145>x146)%(x147>x148));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x153 = -1LL;
	volatile uint16_t x155 = UINT16_MAX;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t25 = 128799;

    t25 = ((x153>x154)%(x155>x156));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x157 = 30;
	int16_t x158 = 17;
	int32_t x160 = 0;
	int32_t t26 = 17;

    t26 = ((x157>x158)%(x159>x160));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x165 = 2383U;
	uint8_t x166 = UINT8_MAX;
	int64_t x167 = -1LL;
	int16_t x168 = INT16_MIN;

    t27 = ((x165>x166)%(x167>x168));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x169 = UINT16_MAX;
	uint32_t x170 = UINT32_MAX;
	uint16_t x171 = 3523U;
	int64_t x172 = -1LL;
	volatile int32_t t28 = -2;

    t28 = ((x169>x170)%(x171>x172));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x173 = INT8_MIN;
	int16_t x174 = INT16_MIN;
	int64_t x175 = 385317LL;
	volatile int32_t x176 = INT32_MIN;
	volatile int32_t t29 = 5646;

    t29 = ((x173>x174)%(x175>x176));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x181 = 30051;
	static uint8_t x182 = UINT8_MAX;
	static int64_t x183 = -60844920LL;
	static uint64_t x184 = 238608552530398205LLU;
	int32_t t30 = -1104310;

    t30 = ((x181>x182)%(x183>x184));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x193 = INT32_MIN;
	volatile int8_t x194 = 0;
	static volatile int8_t x196 = INT8_MAX;

    t31 = ((x193>x194)%(x195>x196));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x197 = 18U;
	uint16_t x198 = 5303U;
	static int8_t x199 = 0;
	int8_t x200 = INT8_MIN;
	static volatile int32_t t32 = -49;

    t32 = ((x197>x198)%(x199>x200));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x205 = INT8_MIN;
	volatile int64_t x206 = INT64_MIN;
	static int32_t t33 = 302;

    t33 = ((x205>x206)%(x207>x208));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x213 = -1;
	static int8_t x214 = INT8_MIN;
	int8_t x215 = INT8_MAX;

    t34 = ((x213>x214)%(x215>x216));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x233 = -771480;
	static volatile int64_t x234 = INT64_MIN;
	int8_t x235 = 8;
	int32_t t35 = -119032;

    t35 = ((x233>x234)%(x235>x236));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x238 = UINT8_MAX;
	static volatile int8_t x239 = 0;
	int32_t t36 = -892412150;

    t36 = ((x237>x238)%(x239>x240));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x241 = 4067;
	uint16_t x242 = 12805U;
	volatile uint64_t x243 = 1362608666916LLU;
	uint8_t x244 = 61U;
	int32_t t37 = -1;

    t37 = ((x241>x242)%(x243>x244));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x253 = -22;
	uint8_t x254 = 1U;
	volatile uint16_t x255 = UINT16_MAX;
	int16_t x256 = 2703;
	volatile int32_t t38 = -2230239;

    t38 = ((x253>x254)%(x255>x256));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x262 = 767503381LLU;
	static int64_t x263 = -1LL;
	int64_t x264 = INT64_MIN;
	int32_t t39 = 106069284;

    t39 = ((x261>x262)%(x263>x264));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x269 = 15U;
	uint64_t x272 = 21LLU;
	int32_t t40 = 157;

    t40 = ((x269>x270)%(x271>x272));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x273 = INT16_MAX;
	static uint32_t x274 = 66564538U;
	uint32_t x275 = UINT32_MAX;
	static int16_t x276 = 927;
	volatile int32_t t41 = 34901;

    t41 = ((x273>x274)%(x275>x276));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x285 = 53U;
	uint16_t x286 = UINT16_MAX;
	uint8_t x287 = UINT8_MAX;
	int32_t t42 = -4;

    t42 = ((x285>x286)%(x287>x288));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x305 = INT32_MIN;
	uint64_t x306 = UINT64_MAX;
	int32_t x307 = 188683601;
	int16_t x308 = INT16_MIN;
	int32_t t43 = -31419114;

    t43 = ((x305>x306)%(x307>x308));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x309 = INT32_MAX;
	int64_t x310 = 228905433LL;
	int8_t x311 = INT8_MIN;
	static int16_t x312 = INT16_MIN;
	static volatile int32_t t44 = -857041;

    t44 = ((x309>x310)%(x311>x312));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x313 = -1;
	static uint32_t x315 = 6019U;
	uint32_t x316 = 0U;
	static int32_t t45 = 223841;

    t45 = ((x313>x314)%(x315>x316));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x326 = INT16_MIN;
	int32_t x327 = INT32_MAX;
	int32_t x328 = INT32_MIN;
	int32_t t46 = 772175;

    t46 = ((x325>x326)%(x327>x328));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x329 = 11351;
	int8_t x330 = INT8_MIN;
	volatile int8_t x331 = 0;
	static int8_t x332 = -11;

    t47 = ((x329>x330)%(x331>x332));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x333 = -1;
	int32_t x335 = INT32_MIN;
	static uint32_t x336 = 203U;

    t48 = ((x333>x334)%(x335>x336));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x341 = -1;
	int32_t x342 = INT32_MIN;
	uint8_t x343 = 1U;
	int8_t x344 = INT8_MIN;
	int32_t t49 = -29568815;

    t49 = ((x341>x342)%(x343>x344));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x345 = 1857U;
	static volatile int8_t x346 = INT8_MIN;
	uint8_t x347 = UINT8_MAX;
	volatile int16_t x348 = INT16_MIN;

    t50 = ((x345>x346)%(x347>x348));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x349 = 29288LLU;
	int8_t x351 = INT8_MAX;
	int32_t t51 = 188;

    t51 = ((x349>x350)%(x351>x352));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x353 = INT16_MIN;
	volatile uint16_t x354 = 12532U;
	static int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MIN;

    t52 = ((x353>x354)%(x355>x356));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x369 = -1LL;
	volatile int32_t t53 = -298;

    t53 = ((x369>x370)%(x371>x372));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x373 = 7;
	volatile uint32_t x375 = UINT32_MAX;

    t54 = ((x373>x374)%(x375>x376));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x377 = -129182LL;
	volatile int32_t t55 = 113499020;

    t55 = ((x377>x378)%(x379>x380));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x390 = -1;
	static int16_t x391 = 354;
	static int32_t x392 = INT32_MIN;

    t56 = ((x389>x390)%(x391>x392));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x397 = UINT8_MAX;
	uint8_t x398 = 14U;
	uint8_t x399 = UINT8_MAX;
	int8_t x400 = -1;
	int32_t t57 = 624630936;

    t57 = ((x397>x398)%(x399>x400));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x401 = INT8_MIN;
	volatile uint64_t x402 = 23832072LLU;
	int64_t x403 = INT64_MAX;
	int8_t x404 = -1;
	int32_t t58 = 1623;

    t58 = ((x401>x402)%(x403>x404));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x406 = INT16_MIN;
	uint64_t x407 = 43833619265872037LLU;

    t59 = ((x405>x406)%(x407>x408));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x409 = INT8_MIN;
	uint32_t x410 = UINT32_MAX;
	static int8_t x412 = INT8_MAX;
	volatile int32_t t60 = 44;

    t60 = ((x409>x410)%(x411>x412));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x413 = -1;
	int64_t x414 = INT64_MIN;
	volatile int32_t x415 = -1;
	uint32_t x416 = 18178356U;
	volatile int32_t t61 = 22785366;

    t61 = ((x413>x414)%(x415>x416));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    

    t62 = ((x421>x422)%(x423>x424));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x433 = -1LL;
	int64_t x434 = -453LL;
	uint8_t x435 = UINT8_MAX;
	static int32_t t63 = 2037358;

    t63 = ((x433>x434)%(x435>x436));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x441 = INT64_MIN;
	int8_t x443 = INT8_MAX;
	volatile int8_t x444 = -1;
	volatile int32_t t64 = 240511;

    t64 = ((x441>x442)%(x443>x444));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x445 = 210;
	static int32_t x446 = -6;
	volatile int32_t x448 = INT32_MIN;
	int32_t t65 = -23363;

    t65 = ((x445>x446)%(x447>x448));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x453 = UINT16_MAX;
	int16_t x454 = -127;
	uint16_t x455 = 592U;
	uint8_t x456 = 65U;
	int32_t t66 = 824131;

    t66 = ((x453>x454)%(x455>x456));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x461 = 647744817U;
	uint64_t x462 = UINT64_MAX;
	static int32_t x463 = INT32_MAX;
	int32_t t67 = 1;

    t67 = ((x461>x462)%(x463>x464));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x465 = UINT16_MAX;
	int8_t x466 = 5;
	volatile int16_t x467 = INT16_MIN;
	volatile int64_t x468 = -11679034553LL;
	int32_t t68 = 420917;

    t68 = ((x465>x466)%(x467>x468));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x477 = -1;
	uint64_t x478 = 725LLU;
	static int16_t x479 = -1;
	uint32_t x480 = 89480U;
	int32_t t69 = 42;

    t69 = ((x477>x478)%(x479>x480));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x489 = -60572921;
	uint32_t x490 = 941743U;
	int8_t x491 = INT8_MIN;
	int32_t x492 = INT32_MIN;
	volatile int32_t t70 = 79511;

    t70 = ((x489>x490)%(x491>x492));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x497 = INT16_MIN;
	int16_t x498 = INT16_MIN;
	int8_t x499 = -1;
	int64_t x500 = INT64_MIN;
	volatile int32_t t71 = 1;

    t71 = ((x497>x498)%(x499>x500));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint32_t x501 = 5991850U;
	int16_t x502 = -7;
	static int64_t x503 = -1LL;
	int8_t x504 = INT8_MIN;
	volatile int32_t t72 = -8599;

    t72 = ((x501>x502)%(x503>x504));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x505 = UINT16_MAX;
	int64_t x506 = 46265379905LL;
	volatile int64_t x507 = 418989495515836LL;
	uint64_t x508 = 2786187370LLU;
	volatile int32_t t73 = 22;

    t73 = ((x505>x506)%(x507>x508));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x510 = 6306U;
	static uint16_t x511 = 26U;
	uint16_t x512 = 24U;
	volatile int32_t t74 = -1;

    t74 = ((x509>x510)%(x511>x512));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x513 = -1LL;
	static volatile uint64_t x514 = UINT64_MAX;
	int32_t t75 = 36288;

    t75 = ((x513>x514)%(x515>x516));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x518 = -1;
	uint64_t x519 = UINT64_MAX;
	uint32_t x520 = 1782568149U;
	static volatile int32_t t76 = 356086844;

    t76 = ((x517>x518)%(x519>x520));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x537 = 747814072594198LLU;
	int16_t x538 = INT16_MAX;
	static uint32_t x539 = 3969U;
	int64_t x540 = INT64_MIN;
	int32_t t77 = -1579516;

    t77 = ((x537>x538)%(x539>x540));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x541 = -349668151503972LL;
	static uint16_t x542 = UINT16_MAX;
	static int8_t x543 = -1;
	int64_t x544 = -24LL;
	int32_t t78 = -16377;

    t78 = ((x541>x542)%(x543>x544));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x561 = 191965U;
	int64_t x562 = 44580038452805LL;
	int64_t x563 = -1LL;
	volatile int8_t x564 = INT8_MIN;
	volatile int32_t t79 = 103779;

    t79 = ((x561>x562)%(x563>x564));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x569 = 5U;
	int8_t x571 = -1;
	int16_t x572 = -86;
	static int32_t t80 = -7460;

    t80 = ((x569>x570)%(x571>x572));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x579 = UINT16_MAX;
	int32_t t81 = 230780022;

    t81 = ((x577>x578)%(x579>x580));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x585 = -1;
	int16_t x586 = INT16_MAX;
	uint8_t x587 = 3U;
	static int16_t x588 = INT16_MIN;
	int32_t t82 = 5421;

    t82 = ((x585>x586)%(x587>x588));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x589 = INT16_MIN;
	static volatile uint8_t x590 = 5U;
	int16_t x591 = INT16_MAX;
	volatile int32_t t83 = 1;

    t83 = ((x589>x590)%(x591>x592));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x601 = INT16_MIN;
	volatile int16_t x602 = INT16_MIN;
	int32_t x604 = -1;
	volatile int32_t t84 = -22;

    t84 = ((x601>x602)%(x603>x604));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x620 = 216LLU;
	int32_t t85 = 394193864;

    t85 = ((x617>x618)%(x619>x620));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x621 = INT64_MIN;
	uint16_t x622 = UINT16_MAX;
	static volatile uint64_t x623 = UINT64_MAX;
	int32_t x624 = -6768;
	int32_t t86 = -7879038;

    t86 = ((x621>x622)%(x623>x624));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x626 = -1;
	volatile int16_t x627 = INT16_MAX;
	int8_t x628 = -6;

    t87 = ((x625>x626)%(x627>x628));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x629 = INT16_MIN;
	int16_t x630 = INT16_MAX;
	static int32_t x631 = INT32_MAX;
	int32_t x632 = INT32_MIN;
	volatile int32_t t88 = 80;

    t88 = ((x629>x630)%(x631>x632));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x637 = INT64_MIN;
	int16_t x638 = 4134;
	int64_t x639 = -18343584243719194LL;
	int64_t x640 = INT64_MIN;
	int32_t t89 = -15;

    t89 = ((x637>x638)%(x639>x640));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x649 = UINT32_MAX;
	int8_t x650 = 5;
	int8_t x651 = INT8_MAX;
	static volatile int16_t x652 = INT16_MIN;
	static int32_t t90 = -7348;

    t90 = ((x649>x650)%(x651>x652));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x657 = 773U;
	int16_t x658 = INT16_MAX;
	uint16_t x659 = UINT16_MAX;
	uint16_t x660 = 19744U;
	int32_t t91 = 12788;

    t91 = ((x657>x658)%(x659>x660));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x661 = INT8_MAX;
	int8_t x662 = -15;
	int64_t x664 = -3241434181294104LL;
	volatile int32_t t92 = -22379;

    t92 = ((x661>x662)%(x663>x664));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x666 = 5951U;
	static uint16_t x667 = 12U;
	volatile int8_t x668 = INT8_MIN;
	int32_t t93 = 85;

    t93 = ((x665>x666)%(x667>x668));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint8_t x669 = UINT8_MAX;
	uint8_t x672 = UINT8_MAX;
	int32_t t94 = 3936188;

    t94 = ((x669>x670)%(x671>x672));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x673 = INT32_MIN;
	int64_t x674 = 13923441451LL;
	static int32_t t95 = 7986;

    t95 = ((x673>x674)%(x675>x676));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x681 = 2546;
	static int64_t x682 = -1LL;
	int8_t x684 = -46;
	int32_t t96 = 0;

    t96 = ((x681>x682)%(x683>x684));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x686 = 821595;
	int8_t x687 = INT8_MIN;
	int64_t x688 = -40970769276596836LL;
	int32_t t97 = -991;

    t97 = ((x685>x686)%(x687>x688));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x689 = INT64_MIN;
	volatile int16_t x690 = -1;
	uint64_t x691 = UINT64_MAX;
	uint32_t x692 = 382910U;
	volatile int32_t t98 = -28896;

    t98 = ((x689>x690)%(x691>x692));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x693 = INT8_MIN;
	static int64_t x694 = 23273783LL;
	uint64_t x695 = 108570649LLU;

    t99 = ((x693>x694)%(x695>x696));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x699 = 2085416393435402LL;
	volatile int32_t x700 = INT32_MIN;
	int32_t t100 = -19642;

    t100 = ((x697>x698)%(x699>x700));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x701 = UINT8_MAX;
	uint64_t x702 = 6958222779LLU;
	int16_t x704 = INT16_MIN;

    t101 = ((x701>x702)%(x703>x704));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x709 = 25196367241LL;
	int16_t x710 = INT16_MIN;
	int16_t x712 = INT16_MAX;
	volatile int32_t t102 = -276;

    t102 = ((x709>x710)%(x711>x712));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x713 = INT64_MAX;
	static int32_t x714 = INT32_MAX;
	int64_t x715 = INT64_MIN;
	int32_t t103 = 8630;

    t103 = ((x713>x714)%(x715>x716));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x725 = 6LL;
	int8_t x726 = INT8_MAX;
	uint64_t x727 = UINT64_MAX;
	int16_t x728 = INT16_MAX;
	int32_t t104 = -907483;

    t104 = ((x725>x726)%(x727>x728));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x744 = INT64_MIN;
	static volatile int32_t t105 = 62578;

    t105 = ((x741>x742)%(x743>x744));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x745 = INT32_MIN;
	int64_t x747 = INT64_MAX;
	int32_t x748 = 619151;
	int32_t t106 = 2152206;

    t106 = ((x745>x746)%(x747>x748));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x749 = 216608U;
	int8_t x750 = INT8_MIN;
	uint32_t x751 = 98022U;
	int8_t x752 = INT8_MAX;
	int32_t t107 = -3268740;

    t107 = ((x749>x750)%(x751>x752));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x753 = 3U;
	volatile int64_t x754 = INT64_MIN;
	int32_t x755 = -1;
	volatile int32_t t108 = 2344722;

    t108 = ((x753>x754)%(x755>x756));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x762 = 862U;
	int32_t x763 = INT32_MAX;
	int32_t x764 = -1;

    t109 = ((x761>x762)%(x763>x764));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x773 = 268335760782022631LLU;
	uint16_t x774 = 5U;
	uint16_t x775 = 1422U;
	volatile int32_t t110 = -107970322;

    t110 = ((x773>x774)%(x775>x776));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x782 = INT16_MAX;
	int32_t x784 = INT32_MIN;

    t111 = ((x781>x782)%(x783>x784));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x789 = 0U;
	uint64_t x790 = UINT64_MAX;
	static uint32_t x791 = 153270574U;
	int8_t x792 = INT8_MAX;
	int32_t t112 = -5855204;

    t112 = ((x789>x790)%(x791>x792));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x793 = 1U;
	volatile int64_t x794 = INT64_MAX;
	uint8_t x795 = 123U;
	volatile int32_t t113 = 144470;

    t113 = ((x793>x794)%(x795>x796));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x801 = UINT64_MAX;
	static int16_t x802 = INT16_MIN;
	int8_t x803 = -1;

    t114 = ((x801>x802)%(x803>x804));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x805 = INT32_MIN;
	static volatile int16_t x806 = -1;
	int32_t x808 = 8069111;
	int32_t t115 = 2;

    t115 = ((x805>x806)%(x807>x808));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x809 = 5903U;
	volatile uint16_t x810 = UINT16_MAX;
	int32_t x811 = -1;
	volatile int16_t x812 = INT16_MIN;
	volatile int32_t t116 = 1037602;

    t116 = ((x809>x810)%(x811>x812));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x813 = 103;
	int8_t x815 = INT8_MIN;
	int64_t x816 = -54107LL;
	int32_t t117 = -14;

    t117 = ((x813>x814)%(x815>x816));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x821 = UINT16_MAX;
	int16_t x822 = INT16_MAX;
	static uint64_t x824 = 175427528536601877LLU;
	int32_t t118 = -1573;

    t118 = ((x821>x822)%(x823>x824));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x826 = 1;
	volatile int64_t x827 = 2446143985LL;
	volatile int16_t x828 = 17;
	static volatile int32_t t119 = -237529428;

    t119 = ((x825>x826)%(x827>x828));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x838 = 7LLU;
	int64_t x840 = -751190LL;
	int32_t t120 = -38406559;

    t120 = ((x837>x838)%(x839>x840));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x845 = INT16_MAX;
	volatile int8_t x847 = INT8_MIN;
	int16_t x848 = INT16_MIN;
	volatile int32_t t121 = -4;

    t121 = ((x845>x846)%(x847>x848));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x850 = 357016LLU;
	uint64_t x852 = 3505771996LLU;
	static int32_t t122 = 179;

    t122 = ((x849>x850)%(x851>x852));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x854 = -1;
	uint32_t x855 = UINT32_MAX;
	static uint16_t x856 = UINT16_MAX;
	volatile int32_t t123 = 3;

    t123 = ((x853>x854)%(x855>x856));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x869 = 28U;
	int16_t x870 = 27;
	uint16_t x871 = UINT16_MAX;
	static int32_t t124 = -187807978;

    t124 = ((x869>x870)%(x871>x872));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x878 = INT8_MAX;
	static uint64_t x879 = UINT64_MAX;
	volatile int32_t t125 = -53854696;

    t125 = ((x877>x878)%(x879>x880));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x905 = -1LL;
	int16_t x908 = INT16_MIN;
	volatile int32_t t126 = -16;

    t126 = ((x905>x906)%(x907>x908));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x909 = 11854U;
	volatile int64_t x910 = 40630LL;
	int8_t x911 = 0;
	int8_t x912 = -38;
	static int32_t t127 = -1288;

    t127 = ((x909>x910)%(x911>x912));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x917 = 15111U;
	static volatile int64_t x918 = INT64_MIN;
	int64_t x919 = INT64_MAX;

    t128 = ((x917>x918)%(x919>x920));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x922 = 8180U;
	uint64_t x923 = UINT64_MAX;

    t129 = ((x921>x922)%(x923>x924));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x925 = 20294943730520332LLU;
	uint16_t x926 = 430U;
	int16_t x927 = INT16_MAX;
	uint32_t x928 = 1300U;

    t130 = ((x925>x926)%(x927>x928));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x929 = INT16_MIN;
	int64_t x930 = -1LL;
	static uint8_t x931 = 103U;
	uint8_t x932 = 14U;
	int32_t t131 = 1165590;

    t131 = ((x929>x930)%(x931>x932));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x933 = -1;
	int32_t x934 = INT32_MIN;
	volatile int64_t x935 = INT64_MAX;
	static int64_t x936 = INT64_MIN;
	int32_t t132 = -52456861;

    t132 = ((x933>x934)%(x935>x936));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x938 = INT32_MIN;
	uint8_t x940 = 75U;
	volatile int32_t t133 = 2;

    t133 = ((x937>x938)%(x939>x940));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x941 = 53172LL;
	static int32_t x942 = INT32_MAX;
	uint16_t x943 = 17478U;
	static int8_t x944 = INT8_MAX;
	static int32_t t134 = -19328189;

    t134 = ((x941>x942)%(x943>x944));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x949 = UINT64_MAX;
	int8_t x950 = INT8_MIN;
	int16_t x951 = INT16_MAX;
	static int64_t x952 = INT64_MIN;

    t135 = ((x949>x950)%(x951>x952));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x962 = 2592257308LLU;
	volatile uint32_t x963 = 1715068U;
	uint8_t x964 = 106U;
	int32_t t136 = 107;

    t136 = ((x961>x962)%(x963>x964));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x969 = 41U;
	int8_t x970 = -7;
	int64_t x971 = INT64_MAX;
	uint32_t x972 = 5127U;
	int32_t t137 = -41807899;

    t137 = ((x969>x970)%(x971>x972));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x973 = 12U;
	static uint32_t x974 = 163U;
	int8_t x975 = INT8_MAX;
	int64_t x976 = -1LL;

    t138 = ((x973>x974)%(x975>x976));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x977 = INT8_MIN;
	uint8_t x978 = UINT8_MAX;
	int16_t x979 = INT16_MIN;
	int32_t t139 = 141;

    t139 = ((x977>x978)%(x979>x980));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x993 = INT64_MIN;
	int8_t x994 = INT8_MIN;
	static int64_t x995 = INT64_MAX;
	uint64_t x996 = 437506740LLU;

    t140 = ((x993>x994)%(x995>x996));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint32_t x1005 = 370U;
	uint64_t x1006 = UINT64_MAX;

    t141 = ((x1005>x1006)%(x1007>x1008));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1013 = -1;
	int8_t x1015 = INT8_MAX;
	int32_t x1016 = INT32_MIN;
	int32_t t142 = -235573370;

    t142 = ((x1013>x1014)%(x1015>x1016));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x1017 = INT64_MIN;
	int8_t x1018 = -2;
	int16_t x1019 = INT16_MAX;
	static int32_t x1020 = INT32_MIN;
	static volatile int32_t t143 = 0;

    t143 = ((x1017>x1018)%(x1019>x1020));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x1022 = 7U;
	int64_t x1023 = 1220095601254LL;
	static uint32_t x1024 = UINT32_MAX;
	int32_t t144 = 54;

    t144 = ((x1021>x1022)%(x1023>x1024));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1025 = -19;
	int16_t x1026 = -1;
	uint64_t x1027 = UINT64_MAX;
	int64_t x1028 = 330774327836574272LL;
	int32_t t145 = -199693;

    t145 = ((x1025>x1026)%(x1027>x1028));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x1033 = 3979594U;
	int64_t x1034 = INT64_MAX;
	static uint16_t x1035 = UINT16_MAX;
	volatile int8_t x1036 = 1;

    t146 = ((x1033>x1034)%(x1035>x1036));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1037 = INT8_MAX;
	uint16_t x1038 = UINT16_MAX;
	volatile uint32_t x1039 = 23652U;
	int16_t x1040 = 2766;
	volatile int32_t t147 = -26167838;

    t147 = ((x1037>x1038)%(x1039>x1040));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1042 = INT64_MAX;
	uint32_t x1043 = UINT32_MAX;
	static int32_t t148 = 14;

    t148 = ((x1041>x1042)%(x1043>x1044));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x1057 = 32140734U;
	int64_t x1058 = INT64_MIN;
	uint16_t x1059 = 113U;
	int32_t t149 = 11330;

    t149 = ((x1057>x1058)%(x1059>x1060));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1085 = -1;
	uint64_t x1086 = UINT64_MAX;
	static uint8_t x1087 = 10U;
	volatile int8_t x1088 = INT8_MIN;

    t150 = ((x1085>x1086)%(x1087>x1088));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x1089 = -84;
	uint64_t x1090 = 5171973124445LLU;
	static uint32_t x1091 = UINT32_MAX;
	static int64_t x1092 = INT64_MIN;
	volatile int32_t t151 = -12497;

    t151 = ((x1089>x1090)%(x1091>x1092));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x1093 = UINT8_MAX;
	static int32_t x1095 = -1;
	int64_t x1096 = -52906297764882476LL;
	int32_t t152 = 7672075;

    t152 = ((x1093>x1094)%(x1095>x1096));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int8_t x1097 = INT8_MAX;
	int64_t x1098 = INT64_MIN;
	uint64_t x1100 = 304LLU;
	int32_t t153 = -10;

    t153 = ((x1097>x1098)%(x1099>x1100));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x1117 = 8162;
	volatile int32_t t154 = -1644611;

    t154 = ((x1117>x1118)%(x1119>x1120));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1121 = 1991477U;
	uint8_t x1122 = 32U;
	static int32_t t155 = -22;

    t155 = ((x1121>x1122)%(x1123>x1124));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x1161 = INT16_MAX;
	static uint64_t x1162 = UINT64_MAX;
	static volatile int16_t x1163 = -5;
	int8_t x1164 = INT8_MIN;

    t156 = ((x1161>x1162)%(x1163>x1164));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1165 = UINT32_MAX;
	volatile int32_t x1166 = INT32_MIN;
	uint32_t x1167 = UINT32_MAX;
	int16_t x1168 = INT16_MIN;

    t157 = ((x1165>x1166)%(x1167>x1168));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x1169 = 33520855261078424LLU;
	uint64_t x1170 = UINT64_MAX;
	int32_t x1171 = 54555152;
	int64_t x1172 = INT64_MIN;

    t158 = ((x1169>x1170)%(x1171>x1172));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x1173 = 22U;
	uint32_t x1174 = UINT32_MAX;
	uint16_t x1175 = UINT16_MAX;
	static int32_t t159 = 10052;

    t159 = ((x1173>x1174)%(x1175>x1176));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1178 = 2;
	int32_t x1179 = -1;
	static int8_t x1180 = INT8_MIN;

    t160 = ((x1177>x1178)%(x1179>x1180));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1182 = -8679408221041LL;
	uint64_t x1183 = 1470881700565LLU;
	uint16_t x1184 = 1U;
	volatile int32_t t161 = 347205178;

    t161 = ((x1181>x1182)%(x1183>x1184));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x1185 = INT32_MIN;
	int64_t x1186 = -1LL;
	uint64_t x1187 = UINT64_MAX;
	volatile int32_t t162 = 14;

    t162 = ((x1185>x1186)%(x1187>x1188));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x1202 = INT8_MIN;
	uint8_t x1203 = 67U;
	int64_t x1204 = -1LL;

    t163 = ((x1201>x1202)%(x1203>x1204));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1209 = UINT64_MAX;
	int32_t x1210 = INT32_MIN;
	int16_t x1211 = 3474;
	int32_t x1212 = -1;
	int32_t t164 = -14;

    t164 = ((x1209>x1210)%(x1211>x1212));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1217 = UINT32_MAX;
	static int8_t x1218 = 4;
	int64_t x1220 = INT64_MIN;
	static volatile int32_t t165 = -59998;

    t165 = ((x1217>x1218)%(x1219>x1220));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1221 = -10416;
	uint16_t x1222 = 1409U;
	int32_t x1223 = -233462;
	int64_t x1224 = -22486639LL;
	volatile int32_t t166 = -12504844;

    t166 = ((x1221>x1222)%(x1223>x1224));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1239 = INT8_MAX;
	int16_t x1240 = INT16_MIN;
	int32_t t167 = 11827105;

    t167 = ((x1237>x1238)%(x1239>x1240));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1241 = INT16_MIN;
	int16_t x1242 = INT16_MAX;
	volatile int64_t x1243 = 1986444573000297609LL;
	int8_t x1244 = INT8_MIN;

    t168 = ((x1241>x1242)%(x1243>x1244));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x1245 = 6LLU;
	uint8_t x1246 = 0U;
	uint16_t x1247 = UINT16_MAX;
	volatile int32_t x1248 = INT32_MIN;

    t169 = ((x1245>x1246)%(x1247>x1248));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1249 = 1;
	int64_t x1250 = -555LL;
	volatile int8_t x1251 = -1;
	int32_t x1252 = INT32_MIN;

    t170 = ((x1249>x1250)%(x1251>x1252));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x1262 = UINT8_MAX;
	int64_t x1263 = INT64_MAX;
	volatile int32_t t171 = -15638;

    t171 = ((x1261>x1262)%(x1263>x1264));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1267 = -1;
	int32_t x1268 = -869141127;

    t172 = ((x1265>x1266)%(x1267>x1268));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x1273 = UINT32_MAX;
	volatile uint8_t x1274 = UINT8_MAX;
	volatile int8_t x1275 = 6;
	int64_t x1276 = INT64_MIN;
	int32_t t173 = 92252;

    t173 = ((x1273>x1274)%(x1275>x1276));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x1277 = INT32_MAX;
	int8_t x1278 = 0;

    t174 = ((x1277>x1278)%(x1279>x1280));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1281 = 2;
	volatile int8_t x1282 = INT8_MIN;
	int8_t x1283 = INT8_MAX;
	int8_t x1284 = -1;

    t175 = ((x1281>x1282)%(x1283>x1284));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x1290 = -1;
	static int8_t x1291 = INT8_MIN;
	static volatile int32_t t176 = -1168;

    t176 = ((x1289>x1290)%(x1291>x1292));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1297 = INT8_MAX;
	uint64_t x1299 = UINT64_MAX;
	int16_t x1300 = INT16_MIN;
	int32_t t177 = 3733;

    t177 = ((x1297>x1298)%(x1299>x1300));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1301 = INT64_MIN;
	int32_t t178 = -3497;

    t178 = ((x1301>x1302)%(x1303>x1304));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x1329 = INT64_MIN;
	volatile int64_t x1331 = 641415081385514036LL;
	int32_t x1332 = -9375;
	int32_t t179 = -3543;

    t179 = ((x1329>x1330)%(x1331>x1332));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x1337 = -11LL;
	int8_t x1338 = -8;
	int8_t x1339 = INT8_MIN;
	int64_t x1340 = INT64_MIN;
	static int32_t t180 = -10;

    t180 = ((x1337>x1338)%(x1339>x1340));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1357 = INT32_MIN;
	uint16_t x1358 = 157U;
	static volatile int16_t x1359 = -1;
	static volatile int32_t t181 = 291;

    t181 = ((x1357>x1358)%(x1359>x1360));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1361 = INT8_MIN;
	volatile int32_t x1363 = 27818701;
	int8_t x1364 = INT8_MIN;
	volatile int32_t t182 = 5058294;

    t182 = ((x1361>x1362)%(x1363>x1364));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1369 = 3766529U;
	volatile int32_t x1371 = 0;
	int64_t x1372 = -191167596LL;
	int32_t t183 = 38;

    t183 = ((x1369>x1370)%(x1371>x1372));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x1373 = 38U;
	volatile int16_t x1374 = INT16_MAX;
	int32_t x1375 = INT32_MIN;
	volatile uint32_t x1376 = 23816U;
	static int32_t t184 = -1;

    t184 = ((x1373>x1374)%(x1375>x1376));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1385 = INT64_MIN;
	int64_t x1386 = -236298523LL;
	int16_t x1387 = INT16_MAX;

    t185 = ((x1385>x1386)%(x1387>x1388));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1389 = INT32_MIN;
	volatile int32_t x1391 = 18;
	int16_t x1392 = INT16_MIN;

    t186 = ((x1389>x1390)%(x1391>x1392));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1397 = 0U;
	uint64_t x1399 = UINT64_MAX;
	static volatile uint16_t x1400 = 1U;

    t187 = ((x1397>x1398)%(x1399>x1400));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x1405 = -194060663805798LL;
	int32_t x1406 = -50213302;
	int32_t x1408 = INT32_MAX;

    t188 = ((x1405>x1406)%(x1407>x1408));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1413 = INT16_MIN;
	int16_t x1414 = INT16_MIN;
	int32_t x1415 = INT32_MIN;

    t189 = ((x1413>x1414)%(x1415>x1416));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x1417 = UINT64_MAX;
	uint8_t x1418 = UINT8_MAX;
	int64_t x1419 = -1LL;
	int64_t x1420 = INT64_MIN;
	volatile int32_t t190 = 3340;

    t190 = ((x1417>x1418)%(x1419>x1420));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x1429 = UINT64_MAX;
	int16_t x1430 = -2949;
	uint64_t x1431 = 744746956LLU;
	uint8_t x1432 = 2U;
	static volatile int32_t t191 = 830055658;

    t191 = ((x1429>x1430)%(x1431>x1432));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1437 = 428U;
	uint8_t x1438 = 1U;
	int16_t x1439 = -1;
	int32_t t192 = -2044;

    t192 = ((x1437>x1438)%(x1439>x1440));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x1446 = -1;
	int16_t x1447 = 32;
	static int8_t x1448 = -20;

    t193 = ((x1445>x1446)%(x1447>x1448));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1451 = 0U;
	int16_t x1452 = -1;

    t194 = ((x1449>x1450)%(x1451>x1452));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1457 = 1;
	static int64_t x1458 = INT64_MIN;
	static int32_t x1460 = -1;
	int32_t t195 = 346445595;

    t195 = ((x1457>x1458)%(x1459>x1460));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x1469 = 912U;
	static volatile int64_t x1470 = INT64_MIN;
	int32_t x1471 = INT32_MAX;
	int32_t t196 = 166730;

    t196 = ((x1469>x1470)%(x1471>x1472));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1478 = UINT16_MAX;
	int16_t x1479 = INT16_MIN;
	static uint64_t x1480 = 10569LLU;
	volatile int32_t t197 = 119216965;

    t197 = ((x1477>x1478)%(x1479>x1480));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1481 = -1;
	int32_t x1482 = 1820;
	int8_t x1484 = 1;
	int32_t t198 = -330332210;

    t198 = ((x1481>x1482)%(x1483>x1484));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1485 = INT32_MAX;
	static uint32_t x1487 = 692903U;
	static int16_t x1488 = 4077;
	volatile int32_t t199 = 15;

    t199 = ((x1485>x1486)%(x1487>x1488));

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

