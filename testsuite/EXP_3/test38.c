
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

uint8_t x2 = UINT8_MAX;
static volatile int32_t t1 = -1;
volatile int8_t x20 = -1;
static uint16_t x21 = UINT16_MAX;
static volatile int32_t t4 = -89;
uint16_t x37 = 405U;
volatile int64_t x49 = -1LL;
static uint64_t x50 = 12833LLU;
uint32_t x54 = 153285962U;
uint64_t x56 = 60LLU;
int8_t x61 = 0;
int8_t x64 = -43;
volatile int32_t t12 = 7799;
uint16_t x75 = 1408U;
int32_t t14 = 13134;
static int16_t x82 = INT16_MIN;
uint16_t x95 = 1558U;
static int32_t t16 = -661931881;
int8_t x99 = -1;
int64_t x118 = 834LL;
uint16_t x121 = UINT16_MAX;
int64_t x123 = INT64_MAX;
uint64_t x137 = 43662513929LLU;
volatile int32_t t23 = 175508717;
static uint32_t x154 = 5322043U;
uint32_t x160 = UINT32_MAX;
int32_t t26 = 9136;
static volatile int32_t t28 = 56553;
int8_t x170 = -1;
static volatile int32_t t29 = 51528;
int32_t x181 = INT32_MIN;
uint8_t x188 = UINT8_MAX;
uint16_t x191 = 613U;
volatile int32_t t35 = -2202;
static int8_t x215 = -1;
int32_t t36 = -4;
int8_t x217 = INT8_MAX;
uint16_t x223 = UINT16_MAX;
static int32_t t39 = 706129;
volatile int32_t t40 = 37655;
int16_t x244 = -5696;
volatile int32_t t44 = -61495;
static uint32_t x285 = 65299329U;
uint8_t x290 = 18U;
static uint16_t x298 = 2047U;
static int32_t t48 = 1175;
int16_t x315 = 7;
uint16_t x320 = UINT16_MAX;
int32_t t53 = 959079755;
int64_t x349 = 3529LL;
uint16_t x350 = 246U;
volatile int32_t t57 = 23;
static volatile int32_t t60 = 1500843;
int8_t x376 = -1;
int8_t x388 = INT8_MAX;
int32_t t63 = 0;
static uint64_t x405 = UINT64_MAX;
int16_t x409 = INT16_MIN;
int32_t x412 = INT32_MAX;
volatile int32_t x417 = -403;
static volatile int32_t x426 = -1;
uint32_t x427 = 125759329U;
uint8_t x430 = 120U;
volatile uint16_t x434 = UINT16_MAX;
volatile int16_t x435 = -1;
volatile int32_t t72 = 9;
volatile uint32_t x437 = 157937U;
uint64_t x451 = UINT64_MAX;
int32_t t76 = 6;
uint32_t x458 = UINT32_MAX;
int16_t x462 = INT16_MAX;
volatile int32_t t78 = -21;
static int8_t x473 = INT8_MAX;
int64_t x482 = 0LL;
int16_t x487 = 68;
int32_t x502 = INT32_MAX;
uint64_t x508 = UINT64_MAX;
uint16_t x513 = UINT16_MAX;
uint32_t x548 = UINT32_MAX;
volatile uint32_t x551 = 5U;
volatile int32_t t89 = 0;
static uint64_t x559 = 16470738362349LLU;
static int32_t x561 = INT32_MIN;
int16_t x583 = INT16_MAX;
static uint8_t x584 = 6U;
static int32_t t93 = -12988;
uint64_t x586 = 706097167161816985LLU;
int32_t x592 = INT32_MAX;
static uint32_t x597 = UINT32_MAX;
int8_t x603 = -47;
static uint64_t x632 = 1551688141430LLU;
volatile uint64_t x633 = 911491LLU;
int64_t x634 = INT64_MIN;
uint32_t x636 = UINT32_MAX;
int16_t x641 = 7468;
static int64_t x642 = -1LL;
int32_t t106 = -323;
int64_t x652 = -134139726263200LL;
int8_t x655 = 17;
int32_t t109 = 3500455;
volatile int64_t x664 = -1LL;
int64_t x665 = -1718LL;
int64_t x669 = INT64_MIN;
uint32_t x693 = 0U;
uint8_t x703 = UINT8_MAX;
static volatile int32_t t114 = 18962;
static int64_t x711 = INT64_MAX;
int64_t x714 = 1LL;
uint32_t x716 = 350368U;
int16_t x718 = 377;
static int8_t x739 = -1;
volatile uint32_t x755 = 645U;
uint64_t x756 = UINT64_MAX;
uint16_t x758 = 0U;
int64_t x768 = 58521889LL;
int32_t x781 = 596278585;
uint64_t x784 = UINT64_MAX;
int16_t x798 = -1;
int32_t x808 = -1;
static int32_t x818 = INT32_MAX;
uint16_t x825 = 87U;
volatile int64_t x837 = -1LL;
volatile int8_t x840 = -6;
static uint64_t x845 = UINT64_MAX;
uint32_t x846 = 291762057U;
static int64_t x848 = 0LL;
static int64_t x849 = INT64_MIN;
uint8_t x858 = UINT8_MAX;
volatile int32_t t145 = -89471;
static uint16_t x893 = UINT16_MAX;
int16_t x894 = INT16_MAX;
uint32_t x895 = 7U;
volatile uint64_t x903 = 10897LLU;
volatile int32_t t147 = -38844;
uint16_t x906 = UINT16_MAX;
uint16_t x909 = 1U;
int32_t x910 = 1;
static int64_t x913 = -32673LL;
static int32_t t150 = 4144628;
uint64_t x918 = 7719836128764LLU;
int8_t x919 = INT8_MIN;
int64_t x920 = -1LL;
volatile int32_t t151 = 4389;
int32_t x936 = INT32_MIN;
uint64_t x937 = UINT64_MAX;
int16_t x941 = INT16_MIN;
volatile int64_t x944 = 35223815LL;
int32_t t155 = -3536;
static int32_t x946 = 13481;
uint8_t x960 = UINT8_MAX;
volatile int32_t x962 = 2461;
volatile int8_t x976 = INT8_MIN;
uint16_t x994 = 3774U;
static int16_t x1007 = -1;
int32_t x1012 = -170563297;
static int32_t x1022 = INT32_MIN;
int32_t x1023 = INT32_MIN;
uint16_t x1027 = UINT16_MAX;
uint32_t x1033 = 1396494U;
int16_t x1035 = INT16_MAX;
int16_t x1036 = INT16_MIN;
volatile int32_t t169 = -235;
int64_t x1038 = INT64_MAX;
uint64_t x1040 = 5LLU;
static uint8_t x1045 = UINT8_MAX;
volatile int32_t x1049 = INT32_MIN;
static volatile int32_t t174 = 8161;
static uint64_t x1076 = UINT64_MAX;
int16_t x1087 = 914;
volatile int32_t t179 = -6;
uint64_t x1097 = 40007372339235185LLU;
uint16_t x1098 = 57U;
volatile int32_t x1099 = INT32_MIN;
int32_t x1108 = -1;
uint16_t x1109 = 9U;
int32_t t183 = -344;
int64_t x1128 = -1LL;
volatile int16_t x1142 = INT16_MIN;
volatile int32_t t187 = -3652;
static volatile uint16_t x1149 = 0U;
static volatile uint64_t x1162 = UINT64_MAX;
uint64_t x1164 = 169820230470372LLU;
int8_t x1170 = -1;
int32_t x1172 = -3262055;
int8_t x1173 = INT8_MIN;
static volatile int8_t x1174 = -1;
static int64_t x1181 = 20003794057LL;
int8_t x1186 = -1;
int16_t x1190 = 0;
int32_t t196 = -1022107735;
volatile int16_t x1213 = -60;
static uint64_t x1214 = 141115LLU;
uint8_t x1217 = 0U;


void f0(void) {
    	volatile int8_t x1 = INT8_MIN;
	uint64_t x3 = UINT64_MAX;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -803971;

    t0 = ((x1*x2)<=(x3+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x9 = UINT16_MAX;
	int8_t x10 = 0;
	uint8_t x11 = 3U;
	static uint64_t x12 = UINT64_MAX;

    t1 = ((x9*x10)<=(x11+x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = INT16_MIN;
	static int16_t x14 = -2;
	int16_t x15 = INT16_MIN;
	int16_t x16 = -1269;
	volatile int32_t t2 = -4751;

    t2 = ((x13*x14)<=(x15+x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x17 = UINT64_MAX;
	static volatile int64_t x18 = -1LL;
	volatile int64_t x19 = 1518LL;
	static int32_t t3 = 1233;

    t3 = ((x17*x18)<=(x19+x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x22 = INT8_MIN;
	int8_t x23 = -14;
	int32_t x24 = -1;

    t4 = ((x21*x22)<=(x23+x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x25 = 2886U;
	volatile uint32_t x26 = 2059U;
	int64_t x27 = -119LL;
	volatile uint8_t x28 = 7U;
	int32_t t5 = -22;

    t5 = ((x25*x26)<=(x27+x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = INT16_MIN;
	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	uint32_t x32 = UINT32_MAX;
	volatile int32_t t6 = -415;

    t6 = ((x29*x30)<=(x31+x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x33 = UINT16_MAX;
	uint64_t x34 = 28360137915LLU;
	int16_t x35 = INT16_MAX;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t7 = 1001114;

    t7 = ((x33*x34)<=(x35+x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x38 = 1977968674U;
	int16_t x39 = INT16_MIN;
	int16_t x40 = INT16_MAX;
	int32_t t8 = 1392;

    t8 = ((x37*x38)<=(x39+x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x45 = 3407U;
	int8_t x46 = -1;
	static int32_t x47 = INT32_MAX;
	int32_t x48 = -1;
	int32_t t9 = 2290008;

    t9 = ((x45*x46)<=(x47+x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x51 = 20;
	uint16_t x52 = 93U;
	volatile int32_t t10 = 5;

    t10 = ((x49*x50)<=(x51+x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x53 = 106U;
	uint16_t x55 = 1U;
	int32_t t11 = 127;

    t11 = ((x53*x54)<=(x55+x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x62 = INT16_MIN;
	uint32_t x63 = 262070U;

    t12 = ((x61*x62)<=(x63+x64));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x69 = -5;
	volatile int64_t x70 = 5392786165LL;
	static volatile uint8_t x71 = 3U;
	static uint32_t x72 = UINT32_MAX;
	volatile int32_t t13 = -126678;

    t13 = ((x69*x70)<=(x71+x72));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x73 = -1;
	uint64_t x74 = 183LLU;
	uint32_t x76 = UINT32_MAX;

    t14 = ((x73*x74)<=(x75+x76));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x81 = 1U;
	int16_t x83 = INT16_MIN;
	uint64_t x84 = UINT64_MAX;
	static volatile int32_t t15 = 16420411;

    t15 = ((x81*x82)<=(x83+x84));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x93 = INT32_MAX;
	volatile uint32_t x94 = UINT32_MAX;
	volatile int8_t x96 = 0;

    t16 = ((x93*x94)<=(x95+x96));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x97 = 1607;
	uint64_t x98 = UINT64_MAX;
	volatile int32_t x100 = INT32_MAX;
	int32_t t17 = -1304696;

    t17 = ((x97*x98)<=(x99+x100));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x105 = 839U;
	int8_t x106 = -1;
	int64_t x107 = -1LL;
	int16_t x108 = 23;
	static volatile int32_t t18 = -1972;

    t18 = ((x105*x106)<=(x107+x108));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x109 = 1147U;
	static int64_t x110 = -1LL;
	volatile uint32_t x111 = 996U;
	int8_t x112 = -1;
	volatile int32_t t19 = 10;

    t19 = ((x109*x110)<=(x111+x112));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x117 = -40;
	int8_t x119 = INT8_MIN;
	uint8_t x120 = 0U;
	volatile int32_t t20 = -32;

    t20 = ((x117*x118)<=(x119+x120));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x122 = 6U;
	int16_t x124 = -772;
	int32_t t21 = 30013193;

    t21 = ((x121*x122)<=(x123+x124));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x129 = 43658U;
	int16_t x130 = -31;
	static volatile int32_t x131 = -779886249;
	uint64_t x132 = 17900916429361862LLU;
	volatile int32_t t22 = -4095785;

    t22 = ((x129*x130)<=(x131+x132));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x138 = INT16_MIN;
	static int8_t x139 = -1;
	uint8_t x140 = 5U;

    t23 = ((x137*x138)<=(x139+x140));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x149 = INT8_MIN;
	static volatile int64_t x150 = -1LL;
	uint32_t x151 = UINT32_MAX;
	uint32_t x152 = 1800U;
	int32_t t24 = 5372;

    t24 = ((x149*x150)<=(x151+x152));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x153 = 3525U;
	uint16_t x155 = 0U;
	int16_t x156 = INT16_MIN;
	volatile int32_t t25 = -8929473;

    t25 = ((x153*x154)<=(x155+x156));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x157 = 789367;
	volatile uint16_t x158 = 0U;
	uint16_t x159 = 9U;

    t26 = ((x157*x158)<=(x159+x160));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x161 = 8889U;
	uint8_t x162 = 36U;
	int16_t x163 = INT16_MIN;
	static int8_t x164 = INT8_MIN;
	int32_t t27 = -6862;

    t27 = ((x161*x162)<=(x163+x164));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x165 = -1;
	int32_t x166 = 818;
	uint64_t x167 = UINT64_MAX;
	uint8_t x168 = UINT8_MAX;

    t28 = ((x165*x166)<=(x167+x168));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x169 = -1;
	int64_t x171 = INT64_MAX;
	static volatile int8_t x172 = -59;

    t29 = ((x169*x170)<=(x171+x172));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x177 = -146;
	uint16_t x178 = UINT16_MAX;
	volatile int16_t x179 = INT16_MIN;
	int16_t x180 = -1;
	int32_t t30 = 90;

    t30 = ((x177*x178)<=(x179+x180));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x182 = UINT32_MAX;
	volatile int8_t x183 = INT8_MAX;
	static int16_t x184 = -3174;
	volatile int32_t t31 = -3663705;

    t31 = ((x181*x182)<=(x183+x184));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x185 = -1;
	static uint16_t x186 = 264U;
	uint16_t x187 = 5U;
	volatile int32_t t32 = -1;

    t32 = ((x185*x186)<=(x187+x188));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x189 = INT8_MAX;
	static int16_t x190 = INT16_MAX;
	static uint16_t x192 = 890U;
	static volatile int32_t t33 = -2362;

    t33 = ((x189*x190)<=(x191+x192));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x205 = -2;
	uint32_t x206 = 401745173U;
	int64_t x207 = INT64_MIN;
	uint64_t x208 = UINT64_MAX;
	int32_t t34 = 29937;

    t34 = ((x205*x206)<=(x207+x208));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x209 = 2055949;
	uint8_t x210 = 0U;
	volatile int8_t x211 = -1;
	static int16_t x212 = 20;

    t35 = ((x209*x210)<=(x211+x212));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x213 = UINT16_MAX;
	uint64_t x214 = 12926475513LLU;
	volatile int64_t x216 = -1LL;

    t36 = ((x213*x214)<=(x215+x216));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x218 = INT16_MIN;
	static uint64_t x219 = 5154124578263LLU;
	int32_t x220 = -61;
	volatile int32_t t37 = -30636;

    t37 = ((x217*x218)<=(x219+x220));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x221 = 67U;
	int16_t x222 = INT16_MIN;
	volatile int32_t x224 = 475;
	volatile int32_t t38 = 76094;

    t38 = ((x221*x222)<=(x223+x224));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x229 = 7451598U;
	uint32_t x230 = 49028U;
	uint32_t x231 = 257250U;
	volatile uint8_t x232 = 1U;

    t39 = ((x229*x230)<=(x231+x232));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x233 = INT16_MAX;
	volatile int64_t x234 = 7627101648491LL;
	int8_t x235 = -25;
	uint64_t x236 = 5092944251918282LLU;

    t40 = ((x233*x234)<=(x235+x236));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x237 = -831886;
	int32_t x238 = -7;
	static int8_t x239 = -3;
	static uint8_t x240 = 1U;
	int32_t t41 = -916;

    t41 = ((x237*x238)<=(x239+x240));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x241 = 4U;
	uint16_t x242 = 254U;
	volatile int16_t x243 = -338;
	volatile int32_t t42 = -518321997;

    t42 = ((x241*x242)<=(x243+x244));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x249 = INT8_MIN;
	uint64_t x250 = UINT64_MAX;
	int8_t x251 = -1;
	int32_t x252 = -202617;
	int32_t t43 = 1;

    t43 = ((x249*x250)<=(x251+x252));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x269 = 547516012LLU;
	volatile int64_t x270 = INT64_MAX;
	volatile int8_t x271 = -1;
	int64_t x272 = 1560444923422828573LL;

    t44 = ((x269*x270)<=(x271+x272));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x273 = INT32_MAX;
	static int32_t x274 = -1;
	static volatile int8_t x275 = -1;
	int8_t x276 = INT8_MIN;
	static int32_t t45 = -15354;

    t45 = ((x273*x274)<=(x275+x276));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x286 = -48;
	int16_t x287 = -23;
	static int32_t x288 = -1352769;
	static volatile int32_t t46 = -7474;

    t46 = ((x285*x286)<=(x287+x288));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x289 = 837483803137LLU;
	volatile int32_t x291 = 0;
	static int32_t x292 = -1;
	volatile int32_t t47 = -1941;

    t47 = ((x289*x290)<=(x291+x292));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x297 = INT8_MIN;
	int64_t x299 = INT64_MIN;
	uint16_t x300 = 0U;

    t48 = ((x297*x298)<=(x299+x300));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x301 = UINT32_MAX;
	uint32_t x302 = 0U;
	static int32_t x303 = INT32_MIN;
	static int32_t x304 = INT32_MAX;
	int32_t t49 = -1056507968;

    t49 = ((x301*x302)<=(x303+x304));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x309 = UINT32_MAX;
	uint16_t x310 = UINT16_MAX;
	static int64_t x311 = INT64_MIN;
	uint64_t x312 = 243668LLU;
	int32_t t50 = 673;

    t50 = ((x309*x310)<=(x311+x312));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x313 = 1;
	static int64_t x314 = INT64_MIN;
	static volatile uint16_t x316 = 168U;
	volatile int32_t t51 = -1037836;

    t51 = ((x313*x314)<=(x315+x316));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x317 = UINT64_MAX;
	volatile int32_t x318 = INT32_MIN;
	uint64_t x319 = UINT64_MAX;
	int32_t t52 = 2849;

    t52 = ((x317*x318)<=(x319+x320));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x321 = UINT64_MAX;
	int16_t x322 = INT16_MIN;
	int16_t x323 = -32;
	int16_t x324 = 956;

    t53 = ((x321*x322)<=(x323+x324));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x337 = 1;
	int64_t x338 = 16LL;
	static volatile int8_t x339 = -10;
	int16_t x340 = 1932;
	int32_t t54 = 10418121;

    t54 = ((x337*x338)<=(x339+x340));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x345 = 2456U;
	volatile int8_t x346 = INT8_MIN;
	int64_t x347 = -740536153800036811LL;
	int64_t x348 = 4377455LL;
	int32_t t55 = -212;

    t55 = ((x345*x346)<=(x347+x348));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x351 = INT32_MIN;
	uint64_t x352 = 1292449572750459LLU;
	int32_t t56 = 1441403;

    t56 = ((x349*x350)<=(x351+x352));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x357 = 323;
	int16_t x358 = INT16_MAX;
	uint64_t x359 = 9161298261124919LLU;
	int32_t x360 = 327001361;

    t57 = ((x357*x358)<=(x359+x360));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x361 = -3;
	int16_t x362 = 0;
	static volatile uint32_t x363 = UINT32_MAX;
	uint8_t x364 = 1U;
	static int32_t t58 = -177;

    t58 = ((x361*x362)<=(x363+x364));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x365 = 7524;
	int8_t x366 = -1;
	uint8_t x367 = 42U;
	int16_t x368 = INT16_MIN;
	static int32_t t59 = 42;

    t59 = ((x365*x366)<=(x367+x368));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x369 = -2;
	int16_t x370 = -1;
	volatile int16_t x371 = INT16_MIN;
	static uint64_t x372 = 2469717799326LLU;

    t60 = ((x369*x370)<=(x371+x372));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x373 = 1063U;
	uint8_t x374 = 15U;
	int32_t x375 = INT32_MAX;
	int32_t t61 = -317201486;

    t61 = ((x373*x374)<=(x375+x376));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x385 = 0U;
	int32_t x386 = -1;
	uint16_t x387 = 75U;
	int32_t t62 = 1004457;

    t62 = ((x385*x386)<=(x387+x388));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x389 = 107329U;
	int8_t x390 = INT8_MAX;
	int32_t x391 = INT32_MIN;
	static uint64_t x392 = UINT64_MAX;

    t63 = ((x389*x390)<=(x391+x392));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x393 = 1810LLU;
	volatile int64_t x394 = -1LL;
	uint64_t x395 = 4974777513760LLU;
	int8_t x396 = 2;
	int32_t t64 = -2;

    t64 = ((x393*x394)<=(x395+x396));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x397 = UINT16_MAX;
	int8_t x398 = -10;
	volatile uint32_t x399 = 17831U;
	static int8_t x400 = INT8_MIN;
	static int32_t t65 = -4010203;

    t65 = ((x397*x398)<=(x399+x400));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x406 = 1797393995LLU;
	int8_t x407 = 0;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t66 = -12097034;

    t66 = ((x405*x406)<=(x407+x408));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint16_t x410 = UINT16_MAX;
	int16_t x411 = -643;
	int32_t t67 = -3245;

    t67 = ((x409*x410)<=(x411+x412));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x418 = 6609;
	int64_t x419 = 6433LL;
	int64_t x420 = 17502945231LL;
	int32_t t68 = 22;

    t68 = ((x417*x418)<=(x419+x420));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x421 = 78U;
	uint32_t x422 = 52499629U;
	uint32_t x423 = 81U;
	uint32_t x424 = 1710904U;
	int32_t t69 = 2826;

    t69 = ((x421*x422)<=(x423+x424));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x425 = 85540246635LLU;
	volatile uint16_t x428 = 13U;
	volatile int32_t t70 = -60115;

    t70 = ((x425*x426)<=(x427+x428));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint64_t x429 = 1406154187389420754LLU;
	uint32_t x431 = 6905U;
	int64_t x432 = INT64_MIN;
	static volatile int32_t t71 = -745;

    t71 = ((x429*x430)<=(x431+x432));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x433 = 1U;
	int8_t x436 = 0;

    t72 = ((x433*x434)<=(x435+x436));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x438 = 2U;
	int32_t x439 = INT32_MAX;
	int8_t x440 = -1;
	static volatile int32_t t73 = -487;

    t73 = ((x437*x438)<=(x439+x440));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x441 = INT16_MIN;
	int8_t x442 = -1;
	static volatile int64_t x443 = INT64_MIN;
	static uint8_t x444 = 73U;
	volatile int32_t t74 = -191961359;

    t74 = ((x441*x442)<=(x443+x444));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x445 = 1;
	int16_t x446 = INT16_MAX;
	int8_t x447 = 0;
	uint8_t x448 = 2U;
	int32_t t75 = -3031;

    t75 = ((x445*x446)<=(x447+x448));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x449 = INT8_MIN;
	volatile uint32_t x450 = 51526792U;
	static uint64_t x452 = 6346497717939580039LLU;

    t76 = ((x449*x450)<=(x451+x452));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x457 = 5;
	volatile uint64_t x459 = 277LLU;
	volatile uint8_t x460 = UINT8_MAX;
	int32_t t77 = 3;

    t77 = ((x457*x458)<=(x459+x460));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x461 = INT16_MIN;
	static int8_t x463 = 15;
	int64_t x464 = INT64_MIN;

    t78 = ((x461*x462)<=(x463+x464));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x469 = -1743435419437580LL;
	int16_t x470 = 0;
	volatile int32_t x471 = INT32_MAX;
	volatile int64_t x472 = 107LL;
	static volatile int32_t t79 = -26;

    t79 = ((x469*x470)<=(x471+x472));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x474 = INT16_MIN;
	uint8_t x475 = 79U;
	int16_t x476 = 14;
	int32_t t80 = -654402;

    t80 = ((x473*x474)<=(x475+x476));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x481 = INT16_MAX;
	int8_t x483 = INT8_MAX;
	static int16_t x484 = -12;
	static int32_t t81 = 88985983;

    t81 = ((x481*x482)<=(x483+x484));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x485 = -345918251LL;
	uint16_t x486 = 2U;
	uint32_t x488 = 60747U;
	int32_t t82 = -2051501;

    t82 = ((x485*x486)<=(x487+x488));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x501 = UINT32_MAX;
	static uint32_t x503 = 635621U;
	volatile uint64_t x504 = UINT64_MAX;
	volatile int32_t t83 = -1;

    t83 = ((x501*x502)<=(x503+x504));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x505 = INT16_MAX;
	static int8_t x506 = -4;
	int64_t x507 = INT64_MAX;
	int32_t t84 = 123833;

    t84 = ((x505*x506)<=(x507+x508));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x514 = -1;
	static uint8_t x515 = 25U;
	volatile int32_t x516 = INT32_MIN;
	volatile int32_t t85 = -9370;

    t85 = ((x513*x514)<=(x515+x516));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x521 = -1;
	uint16_t x522 = 1279U;
	int16_t x523 = -18;
	int16_t x524 = INT16_MAX;
	static int32_t t86 = -22774211;

    t86 = ((x521*x522)<=(x523+x524));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x533 = 6;
	int8_t x534 = 1;
	int32_t x535 = 1;
	uint32_t x536 = 81151942U;
	static int32_t t87 = 845690;

    t87 = ((x533*x534)<=(x535+x536));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x545 = -7;
	uint64_t x546 = 1LLU;
	static uint64_t x547 = 109LLU;
	volatile int32_t t88 = -3;

    t88 = ((x545*x546)<=(x547+x548));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x549 = UINT16_MAX;
	int8_t x550 = -1;
	volatile uint64_t x552 = 97375LLU;

    t89 = ((x549*x550)<=(x551+x552));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x557 = 13217964U;
	int32_t x558 = -901;
	uint8_t x560 = 5U;
	int32_t t90 = -412274588;

    t90 = ((x557*x558)<=(x559+x560));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x562 = -1LL;
	int64_t x563 = INT64_MAX;
	int8_t x564 = INT8_MIN;
	int32_t t91 = 0;

    t91 = ((x561*x562)<=(x563+x564));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x573 = -2;
	uint8_t x574 = 0U;
	uint16_t x575 = 2020U;
	int16_t x576 = -1;
	volatile int32_t t92 = 13331907;

    t92 = ((x573*x574)<=(x575+x576));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x581 = -1;
	volatile int32_t x582 = 33959276;

    t93 = ((x581*x582)<=(x583+x584));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x585 = 267674644954360LL;
	int32_t x587 = -172919;
	uint64_t x588 = UINT64_MAX;
	int32_t t94 = -617550529;

    t94 = ((x585*x586)<=(x587+x588));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x589 = 1U;
	int8_t x590 = -3;
	int16_t x591 = -1;
	volatile int32_t t95 = -26;

    t95 = ((x589*x590)<=(x591+x592));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x593 = 7LLU;
	volatile int8_t x594 = 0;
	int8_t x595 = -1;
	int8_t x596 = -1;
	int32_t t96 = -2726;

    t96 = ((x593*x594)<=(x595+x596));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x598 = INT8_MIN;
	int8_t x599 = INT8_MIN;
	volatile uint64_t x600 = 957741LLU;
	volatile int32_t t97 = -1607752;

    t97 = ((x597*x598)<=(x599+x600));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x601 = -1;
	uint32_t x602 = 707607U;
	uint8_t x604 = UINT8_MAX;
	volatile int32_t t98 = 32536217;

    t98 = ((x601*x602)<=(x603+x604));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x605 = -678;
	static uint64_t x606 = 39LLU;
	static int8_t x607 = INT8_MAX;
	uint16_t x608 = 4U;
	volatile int32_t t99 = 174031185;

    t99 = ((x605*x606)<=(x607+x608));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x613 = 3U;
	int16_t x614 = INT16_MAX;
	volatile int8_t x615 = INT8_MIN;
	volatile int8_t x616 = -11;
	volatile int32_t t100 = -22461;

    t100 = ((x613*x614)<=(x615+x616));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x617 = INT32_MIN;
	volatile uint64_t x618 = 4218347LLU;
	int64_t x619 = -62708LL;
	static int16_t x620 = 0;
	volatile int32_t t101 = 188514;

    t101 = ((x617*x618)<=(x619+x620));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x625 = 7;
	uint16_t x626 = 153U;
	static int32_t x627 = INT32_MIN;
	static int16_t x628 = 9;
	volatile int32_t t102 = -2302850;

    t102 = ((x625*x626)<=(x627+x628));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x629 = INT16_MIN;
	static uint64_t x630 = UINT64_MAX;
	int16_t x631 = INT16_MAX;
	volatile int32_t t103 = -93;

    t103 = ((x629*x630)<=(x631+x632));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x635 = -1;
	int32_t t104 = 38;

    t104 = ((x633*x634)<=(x635+x636));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x637 = INT32_MAX;
	uint64_t x638 = 857501721373046285LLU;
	uint8_t x639 = 2U;
	int16_t x640 = -1535;
	int32_t t105 = -65473;

    t105 = ((x637*x638)<=(x639+x640));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x643 = -1;
	uint32_t x644 = UINT32_MAX;

    t106 = ((x641*x642)<=(x643+x644));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x649 = INT8_MIN;
	int16_t x650 = INT16_MIN;
	uint32_t x651 = 1054950412U;
	int32_t t107 = 1878;

    t107 = ((x649*x650)<=(x651+x652));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x653 = -1;
	static int8_t x654 = -1;
	uint32_t x656 = UINT32_MAX;
	static volatile int32_t t108 = 2466;

    t108 = ((x653*x654)<=(x655+x656));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x657 = 15;
	uint64_t x658 = 7751LLU;
	uint16_t x659 = UINT16_MAX;
	static int8_t x660 = 0;

    t109 = ((x657*x658)<=(x659+x660));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x661 = -1;
	int8_t x662 = INT8_MIN;
	int8_t x663 = -1;
	volatile int32_t t110 = 414310;

    t110 = ((x661*x662)<=(x663+x664));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x666 = UINT32_MAX;
	int32_t x667 = -330564;
	int16_t x668 = 19;
	volatile int32_t t111 = -4;

    t111 = ((x665*x666)<=(x667+x668));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x670 = 330426507492LLU;
	static int64_t x671 = -1LL;
	uint16_t x672 = 1609U;
	volatile int32_t t112 = -406246613;

    t112 = ((x669*x670)<=(x671+x672));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x694 = 220662999;
	volatile int8_t x695 = -3;
	static uint8_t x696 = 46U;
	volatile int32_t t113 = -27;

    t113 = ((x693*x694)<=(x695+x696));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x701 = INT16_MIN;
	int8_t x702 = INT8_MIN;
	int32_t x704 = INT32_MIN;

    t114 = ((x701*x702)<=(x703+x704));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x709 = 110U;
	volatile uint32_t x710 = 385847U;
	volatile int32_t x712 = INT32_MIN;
	int32_t t115 = 26353357;

    t115 = ((x709*x710)<=(x711+x712));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x715 = -27;
	static volatile int32_t t116 = -1;

    t116 = ((x713*x714)<=(x715+x716));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x717 = 35U;
	volatile uint16_t x719 = UINT16_MAX;
	int16_t x720 = INT16_MAX;
	volatile int32_t t117 = 281829;

    t117 = ((x717*x718)<=(x719+x720));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x721 = 246;
	int8_t x722 = INT8_MAX;
	uint64_t x723 = UINT64_MAX;
	static int8_t x724 = INT8_MIN;
	static volatile int32_t t118 = 209089;

    t118 = ((x721*x722)<=(x723+x724));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x725 = -1;
	int64_t x726 = 404LL;
	volatile int8_t x727 = INT8_MIN;
	uint8_t x728 = 7U;
	volatile int32_t t119 = 17;

    t119 = ((x725*x726)<=(x727+x728));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x733 = UINT16_MAX;
	int16_t x734 = INT16_MAX;
	int16_t x735 = -1;
	static uint64_t x736 = 7770LLU;
	volatile int32_t t120 = -18606;

    t120 = ((x733*x734)<=(x735+x736));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x737 = UINT32_MAX;
	int32_t x738 = INT32_MIN;
	uint16_t x740 = UINT16_MAX;
	volatile int32_t t121 = 0;

    t121 = ((x737*x738)<=(x739+x740));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x741 = 1497522300976LLU;
	static uint8_t x742 = 17U;
	volatile int8_t x743 = INT8_MAX;
	int32_t x744 = 16170176;
	int32_t t122 = -34;

    t122 = ((x741*x742)<=(x743+x744));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x745 = -1;
	volatile uint16_t x746 = UINT16_MAX;
	int32_t x747 = INT32_MAX;
	int16_t x748 = -1;
	int32_t t123 = 7520841;

    t123 = ((x745*x746)<=(x747+x748));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x749 = INT16_MIN;
	uint64_t x750 = 2386LLU;
	int32_t x751 = -1;
	int16_t x752 = INT16_MIN;
	volatile int32_t t124 = -202240180;

    t124 = ((x749*x750)<=(x751+x752));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x753 = -51;
	uint64_t x754 = UINT64_MAX;
	volatile int32_t t125 = 1;

    t125 = ((x753*x754)<=(x755+x756));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x757 = -1;
	int16_t x759 = -6;
	static int32_t x760 = -1;
	volatile int32_t t126 = 113426422;

    t126 = ((x757*x758)<=(x759+x760));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x765 = -1;
	static volatile int8_t x766 = INT8_MIN;
	int64_t x767 = INT64_MIN;
	volatile int32_t t127 = 91;

    t127 = ((x765*x766)<=(x767+x768));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x773 = UINT8_MAX;
	int8_t x774 = INT8_MIN;
	volatile int8_t x775 = 3;
	int16_t x776 = 0;
	static int32_t t128 = 0;

    t128 = ((x773*x774)<=(x775+x776));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x782 = -1;
	int8_t x783 = 0;
	int32_t t129 = 97709939;

    t129 = ((x781*x782)<=(x783+x784));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x785 = UINT8_MAX;
	int8_t x786 = -51;
	int8_t x787 = -1;
	uint8_t x788 = 1U;
	static volatile int32_t t130 = 218;

    t130 = ((x785*x786)<=(x787+x788));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x797 = 17041605968981LLU;
	int32_t x799 = INT32_MIN;
	int8_t x800 = 1;
	int32_t t131 = -59;

    t131 = ((x797*x798)<=(x799+x800));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x801 = INT16_MIN;
	volatile uint16_t x802 = 1U;
	uint16_t x803 = UINT16_MAX;
	int16_t x804 = INT16_MAX;
	int32_t t132 = -167;

    t132 = ((x801*x802)<=(x803+x804));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x805 = 1U;
	int32_t x806 = -2750;
	uint32_t x807 = UINT32_MAX;
	int32_t t133 = 4058055;

    t133 = ((x805*x806)<=(x807+x808));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x817 = 1;
	int16_t x819 = -1;
	int16_t x820 = INT16_MIN;
	volatile int32_t t134 = -62;

    t134 = ((x817*x818)<=(x819+x820));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x826 = -1LL;
	static uint32_t x827 = 602560202U;
	uint32_t x828 = UINT32_MAX;
	volatile int32_t t135 = 13416;

    t135 = ((x825*x826)<=(x827+x828));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x829 = 28327;
	volatile int16_t x830 = 1908;
	uint8_t x831 = 0U;
	int64_t x832 = INT64_MIN;
	volatile int32_t t136 = 380;

    t136 = ((x829*x830)<=(x831+x832));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x838 = -1;
	static volatile int32_t x839 = -495;
	volatile int32_t t137 = 51344282;

    t137 = ((x837*x838)<=(x839+x840));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x841 = 12U;
	volatile uint8_t x842 = UINT8_MAX;
	volatile int32_t x843 = INT32_MIN;
	volatile uint16_t x844 = 1211U;
	int32_t t138 = 174100;

    t138 = ((x841*x842)<=(x843+x844));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x847 = 1U;
	volatile int32_t t139 = 102125888;

    t139 = ((x845*x846)<=(x847+x848));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x850 = UINT64_MAX;
	volatile int8_t x851 = INT8_MIN;
	uint8_t x852 = 1U;
	volatile int32_t t140 = -89764;

    t140 = ((x849*x850)<=(x851+x852));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint16_t x857 = UINT16_MAX;
	int32_t x859 = INT32_MIN;
	uint64_t x860 = 409346487240528601LLU;
	volatile int32_t t141 = -5124;

    t141 = ((x857*x858)<=(x859+x860));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x861 = -1;
	uint32_t x862 = UINT32_MAX;
	int16_t x863 = INT16_MAX;
	static volatile int8_t x864 = 0;
	int32_t t142 = -1690;

    t142 = ((x861*x862)<=(x863+x864));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x873 = 359782586LLU;
	int64_t x874 = INT64_MIN;
	static uint64_t x875 = 268666683541LLU;
	uint8_t x876 = UINT8_MAX;
	int32_t t143 = 16899;

    t143 = ((x873*x874)<=(x875+x876));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x881 = INT8_MAX;
	int32_t x882 = -147;
	int8_t x883 = -1;
	uint64_t x884 = 4733131LLU;
	volatile int32_t t144 = 1725;

    t144 = ((x881*x882)<=(x883+x884));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x889 = 47U;
	static volatile int16_t x890 = INT16_MAX;
	static int8_t x891 = INT8_MIN;
	volatile int32_t x892 = 14980;

    t145 = ((x889*x890)<=(x891+x892));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x896 = INT8_MIN;
	volatile int32_t t146 = -2900912;

    t146 = ((x893*x894)<=(x895+x896));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x901 = -5803388;
	uint64_t x902 = 90218573429LLU;
	int8_t x904 = INT8_MAX;

    t147 = ((x901*x902)<=(x903+x904));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x905 = INT16_MIN;
	int32_t x907 = 1217;
	int16_t x908 = INT16_MAX;
	volatile int32_t t148 = 109637;

    t148 = ((x905*x906)<=(x907+x908));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x911 = -1;
	int16_t x912 = INT16_MIN;
	volatile int32_t t149 = 20707924;

    t149 = ((x909*x910)<=(x911+x912));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x914 = 18U;
	volatile int16_t x915 = INT16_MAX;
	volatile int8_t x916 = INT8_MIN;

    t150 = ((x913*x914)<=(x915+x916));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x917 = -44171LL;

    t151 = ((x917*x918)<=(x919+x920));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x925 = 0;
	uint16_t x926 = UINT16_MAX;
	uint8_t x927 = 30U;
	int32_t x928 = INT32_MIN;
	static int32_t t152 = -2683415;

    t152 = ((x925*x926)<=(x927+x928));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x933 = -1893;
	int8_t x934 = 6;
	int16_t x935 = 0;
	static int32_t t153 = -458282;

    t153 = ((x933*x934)<=(x935+x936));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x938 = INT32_MIN;
	uint32_t x939 = UINT32_MAX;
	int16_t x940 = INT16_MIN;
	volatile int32_t t154 = -2;

    t154 = ((x937*x938)<=(x939+x940));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x942 = -11;
	static uint16_t x943 = 133U;

    t155 = ((x941*x942)<=(x943+x944));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x945 = UINT16_MAX;
	int16_t x947 = INT16_MIN;
	uint16_t x948 = 1046U;
	volatile int32_t t156 = 134216721;

    t156 = ((x945*x946)<=(x947+x948));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x949 = INT8_MIN;
	uint64_t x950 = UINT64_MAX;
	static volatile int8_t x951 = -1;
	int64_t x952 = -1LL;
	volatile int32_t t157 = 281832843;

    t157 = ((x949*x950)<=(x951+x952));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x957 = UINT8_MAX;
	uint16_t x958 = 80U;
	int8_t x959 = INT8_MIN;
	volatile int32_t t158 = -136194;

    t158 = ((x957*x958)<=(x959+x960));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x961 = 0;
	volatile int16_t x963 = -1;
	uint16_t x964 = UINT16_MAX;
	volatile int32_t t159 = 41518;

    t159 = ((x961*x962)<=(x963+x964));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x973 = INT64_MAX;
	uint64_t x974 = UINT64_MAX;
	uint64_t x975 = 2478962191451LLU;
	int32_t t160 = 7;

    t160 = ((x973*x974)<=(x975+x976));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x977 = -1;
	volatile int16_t x978 = -1;
	uint16_t x979 = 0U;
	uint16_t x980 = UINT16_MAX;
	static volatile int32_t t161 = -79457752;

    t161 = ((x977*x978)<=(x979+x980));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x993 = 258336LLU;
	int16_t x995 = -1;
	volatile uint8_t x996 = 93U;
	static int32_t t162 = 974283306;

    t162 = ((x993*x994)<=(x995+x996));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1001 = INT64_MAX;
	int32_t x1002 = -1;
	volatile uint16_t x1003 = 6236U;
	uint8_t x1004 = UINT8_MAX;
	int32_t t163 = -175;

    t163 = ((x1001*x1002)<=(x1003+x1004));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x1005 = 3048;
	volatile uint32_t x1006 = UINT32_MAX;
	uint64_t x1008 = 1118525968516LLU;
	int32_t t164 = -8;

    t164 = ((x1005*x1006)<=(x1007+x1008));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1009 = -3;
	volatile int16_t x1010 = INT16_MAX;
	int16_t x1011 = -1;
	volatile int32_t t165 = -5631;

    t165 = ((x1009*x1010)<=(x1011+x1012));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x1021 = 19U;
	uint32_t x1024 = 121451U;
	volatile int32_t t166 = -70;

    t166 = ((x1021*x1022)<=(x1023+x1024));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1025 = INT16_MAX;
	volatile int8_t x1026 = 0;
	int32_t x1028 = 152047916;
	volatile int32_t t167 = -1;

    t167 = ((x1025*x1026)<=(x1027+x1028));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1029 = INT8_MIN;
	uint16_t x1030 = 454U;
	static int32_t x1031 = INT32_MIN;
	static uint8_t x1032 = 13U;
	int32_t t168 = 80;

    t168 = ((x1029*x1030)<=(x1031+x1032));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1034 = 346596624;

    t169 = ((x1033*x1034)<=(x1035+x1036));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1037 = 0U;
	static uint32_t x1039 = 0U;
	volatile int32_t t170 = -408;

    t170 = ((x1037*x1038)<=(x1039+x1040));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x1041 = 14U;
	int16_t x1042 = -184;
	volatile int8_t x1043 = INT8_MAX;
	volatile uint8_t x1044 = 23U;
	volatile int32_t t171 = -3975;

    t171 = ((x1041*x1042)<=(x1043+x1044));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1046 = -1;
	uint8_t x1047 = 2U;
	int32_t x1048 = -1;
	volatile int32_t t172 = -53578;

    t172 = ((x1045*x1046)<=(x1047+x1048));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1050 = UINT32_MAX;
	int8_t x1051 = INT8_MIN;
	int16_t x1052 = 0;
	int32_t t173 = -6957500;

    t173 = ((x1049*x1050)<=(x1051+x1052));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1069 = INT8_MIN;
	int8_t x1070 = -1;
	uint16_t x1071 = 4U;
	static int32_t x1072 = INT32_MIN;

    t174 = ((x1069*x1070)<=(x1071+x1072));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1073 = INT8_MAX;
	volatile int16_t x1074 = 13;
	int64_t x1075 = INT64_MIN;
	int32_t t175 = 137507412;

    t175 = ((x1073*x1074)<=(x1075+x1076));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x1077 = -1;
	static int16_t x1078 = -8378;
	static volatile uint64_t x1079 = UINT64_MAX;
	static volatile int64_t x1080 = INT64_MIN;
	volatile int32_t t176 = -7973318;

    t176 = ((x1077*x1078)<=(x1079+x1080));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x1081 = -1;
	int16_t x1082 = INT16_MIN;
	volatile int32_t x1083 = INT32_MAX;
	int16_t x1084 = -1;
	int32_t t177 = 824;

    t177 = ((x1081*x1082)<=(x1083+x1084));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1085 = 206071872177898LL;
	uint64_t x1086 = 1605388LLU;
	int16_t x1088 = 7;
	volatile int32_t t178 = 24;

    t178 = ((x1085*x1086)<=(x1087+x1088));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x1089 = 379745U;
	uint64_t x1090 = 248969733706516695LLU;
	int64_t x1091 = INT64_MIN;
	uint64_t x1092 = UINT64_MAX;

    t179 = ((x1089*x1090)<=(x1091+x1092));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x1100 = 13193572495LLU;
	int32_t t180 = 1;

    t180 = ((x1097*x1098)<=(x1099+x1100));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x1105 = -2389;
	int16_t x1106 = 3753;
	volatile uint64_t x1107 = 8495213632136796LLU;
	int32_t t181 = -146325;

    t181 = ((x1105*x1106)<=(x1107+x1108));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1110 = 1;
	int64_t x1111 = -478810LL;
	int32_t x1112 = INT32_MIN;
	int32_t t182 = -415167;

    t182 = ((x1109*x1110)<=(x1111+x1112));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x1113 = UINT64_MAX;
	uint64_t x1114 = UINT64_MAX;
	int16_t x1115 = -11;
	int16_t x1116 = -1;

    t183 = ((x1113*x1114)<=(x1115+x1116));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1117 = 2459;
	volatile uint8_t x1118 = UINT8_MAX;
	int8_t x1119 = 1;
	static int64_t x1120 = INT64_MIN;
	int32_t t184 = 49801;

    t184 = ((x1117*x1118)<=(x1119+x1120));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1125 = 7067U;
	uint64_t x1126 = UINT64_MAX;
	uint64_t x1127 = UINT64_MAX;
	static volatile int32_t t185 = -1753084;

    t185 = ((x1125*x1126)<=(x1127+x1128));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1133 = -132904845750LL;
	volatile int8_t x1134 = INT8_MAX;
	int32_t x1135 = -5;
	static int8_t x1136 = -3;
	volatile int32_t t186 = 65766870;

    t186 = ((x1133*x1134)<=(x1135+x1136));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1141 = INT8_MIN;
	uint32_t x1143 = UINT32_MAX;
	uint64_t x1144 = 10LLU;

    t187 = ((x1141*x1142)<=(x1143+x1144));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x1145 = INT16_MIN;
	int8_t x1146 = 32;
	uint8_t x1147 = 2U;
	int32_t x1148 = -1;
	int32_t t188 = 6;

    t188 = ((x1145*x1146)<=(x1147+x1148));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int64_t x1150 = INT64_MIN;
	uint64_t x1151 = 8148LLU;
	volatile int32_t x1152 = -1;
	static volatile int32_t t189 = 52204;

    t189 = ((x1149*x1150)<=(x1151+x1152));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1157 = INT64_MIN;
	volatile uint8_t x1158 = 0U;
	int8_t x1159 = 36;
	uint64_t x1160 = 2316LLU;
	volatile int32_t t190 = -154527;

    t190 = ((x1157*x1158)<=(x1159+x1160));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1161 = -1272933;
	volatile int8_t x1163 = -1;
	volatile int32_t t191 = 1;

    t191 = ((x1161*x1162)<=(x1163+x1164));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1169 = INT8_MIN;
	int16_t x1171 = 5;
	int32_t t192 = 1;

    t192 = ((x1169*x1170)<=(x1171+x1172));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1175 = 7299900720LL;
	int16_t x1176 = -14101;
	int32_t t193 = 971245860;

    t193 = ((x1173*x1174)<=(x1175+x1176));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1182 = -1LL;
	int32_t x1183 = INT32_MAX;
	volatile int64_t x1184 = INT64_MIN;
	volatile int32_t t194 = 22885834;

    t194 = ((x1181*x1182)<=(x1183+x1184));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1185 = 1U;
	uint64_t x1187 = 0LLU;
	int16_t x1188 = -1;
	int32_t t195 = -17406423;

    t195 = ((x1185*x1186)<=(x1187+x1188));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1189 = -1;
	static uint16_t x1191 = UINT16_MAX;
	uint32_t x1192 = 15U;

    t196 = ((x1189*x1190)<=(x1191+x1192));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x1201 = -13;
	uint16_t x1202 = 47U;
	int16_t x1203 = INT16_MIN;
	int8_t x1204 = INT8_MIN;
	volatile int32_t t197 = -3360;

    t197 = ((x1201*x1202)<=(x1203+x1204));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1215 = 15U;
	static volatile uint16_t x1216 = UINT16_MAX;
	volatile int32_t t198 = -81069;

    t198 = ((x1213*x1214)<=(x1215+x1216));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int16_t x1218 = INT16_MAX;
	uint32_t x1219 = 57U;
	uint8_t x1220 = UINT8_MAX;
	volatile int32_t t199 = -85;

    t199 = ((x1217*x1218)<=(x1219+x1220));

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

