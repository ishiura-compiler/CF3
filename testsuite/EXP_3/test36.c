
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

static int64_t x2 = 0LL;
volatile int64_t x4 = -1LL;
uint64_t x10 = UINT64_MAX;
uint16_t x25 = 13U;
uint64_t x33 = 6874271LLU;
static volatile uint16_t x47 = 0U;
int32_t t6 = 252446518;
int32_t t7 = -45688936;
int8_t x62 = 3;
static uint64_t x66 = 1629505LLU;
int64_t x70 = -60857LL;
volatile uint16_t x75 = UINT16_MAX;
uint16_t x76 = 8977U;
volatile int16_t x82 = 9;
int64_t x83 = INT64_MIN;
int32_t t14 = 139494;
uint8_t x103 = 11U;
uint32_t x109 = 1740084555U;
volatile uint32_t x113 = 565213808U;
int8_t x115 = INT8_MAX;
volatile int16_t x118 = 52;
volatile int32_t t21 = -6723;
int8_t x130 = INT8_MIN;
volatile int32_t t23 = -5;
volatile int32_t x146 = -1;
static uint16_t x157 = 0U;
int16_t x182 = -1;
volatile int32_t t31 = -583660625;
int32_t t32 = -441164925;
int8_t x212 = INT8_MIN;
static uint16_t x222 = 3U;
uint16_t x230 = 0U;
int32_t x233 = 321;
uint64_t x235 = 253941519034133034LLU;
int16_t x245 = 826;
volatile int64_t x249 = -199903971959LL;
static int16_t x267 = INT16_MIN;
int64_t x269 = 26692956LL;
static int32_t x271 = 467392772;
uint8_t x272 = 2U;
volatile int32_t t45 = 1;
int16_t x286 = -3;
uint32_t x290 = 17044676U;
int32_t t50 = -2198;
uint64_t x305 = 25774LLU;
uint32_t x316 = UINT32_MAX;
static volatile int16_t x318 = 6712;
int16_t x325 = -1;
static int8_t x339 = INT8_MIN;
int8_t x343 = INT8_MAX;
int16_t x360 = -1;
static uint8_t x362 = UINT8_MAX;
int32_t t61 = -8101188;
int8_t x374 = INT8_MIN;
int16_t x378 = INT16_MIN;
int32_t x380 = 37058;
uint32_t x386 = 11U;
volatile uint8_t x410 = UINT8_MAX;
static int16_t x411 = INT16_MIN;
volatile int32_t t70 = -429857;
int16_t x427 = -1;
int32_t t71 = 133231852;
static int16_t x441 = INT16_MAX;
int64_t x443 = INT64_MAX;
int8_t x445 = INT8_MIN;
static int16_t x446 = INT16_MIN;
uint32_t x458 = 2867U;
static volatile int64_t x460 = INT64_MAX;
static volatile int32_t t77 = 325359;
static int64_t x469 = -11079267LL;
int8_t x475 = INT8_MAX;
uint16_t x481 = 2U;
volatile int32_t t82 = 1948107;
int32_t t84 = -2226;
int8_t x507 = -1;
int8_t x509 = -23;
volatile int32_t t86 = 423031445;
int64_t x523 = -1LL;
int32_t x532 = -1;
int32_t t91 = 113522190;
int64_t x553 = -1LL;
uint32_t x555 = UINT32_MAX;
int32_t x558 = INT32_MIN;
int32_t x562 = -4;
static int64_t x571 = -77692903246LL;
static volatile int32_t x580 = INT32_MIN;
int64_t x581 = 1327LL;
volatile int32_t t99 = 536175548;
volatile uint16_t x596 = UINT16_MAX;
uint8_t x606 = 1U;
int16_t x607 = INT16_MAX;
int32_t t102 = -1566040;
int8_t x614 = INT8_MIN;
volatile int32_t t103 = 1;
int16_t x621 = INT16_MIN;
volatile int32_t t104 = -44;
int32_t x635 = INT32_MAX;
uint8_t x638 = UINT8_MAX;
volatile uint32_t x658 = 22U;
int16_t x659 = INT16_MIN;
int32_t t110 = -1001181;
volatile int8_t x673 = INT8_MIN;
volatile int32_t t114 = 97;
int32_t x692 = INT32_MIN;
volatile uint32_t x696 = UINT32_MAX;
static uint32_t x705 = UINT32_MAX;
uint64_t x708 = 152153262739LLU;
int16_t x712 = -1;
int32_t t119 = -14176;
static uint16_t x713 = 0U;
int8_t x717 = -1;
int64_t x720 = INT64_MIN;
volatile int32_t t121 = 655662708;
int32_t x722 = -1;
uint16_t x723 = UINT16_MAX;
uint8_t x724 = 25U;
static volatile int32_t t123 = 1552591;
volatile int32_t t124 = -6;
int8_t x752 = INT8_MAX;
volatile int8_t x800 = INT8_MIN;
uint8_t x801 = 5U;
uint32_t x802 = 371322019U;
uint32_t x804 = UINT32_MAX;
int32_t t129 = -647;
volatile int64_t x809 = 1895823561736LL;
static int64_t x811 = -1LL;
int64_t x821 = 951263234643LL;
int16_t x822 = INT16_MAX;
static int8_t x837 = 2;
uint64_t x845 = 584LLU;
int8_t x871 = -1;
uint32_t x872 = UINT32_MAX;
static int16_t x877 = 5248;
uint64_t x880 = 28035688398450966LLU;
int32_t t136 = 140541;
int8_t x883 = -1;
int32_t t138 = 105291427;
volatile int8_t x894 = -28;
uint32_t x896 = 27604U;
volatile int16_t x929 = -10286;
uint32_t x940 = 883U;
int32_t t145 = 75210046;
static uint8_t x946 = 36U;
volatile uint16_t x947 = 1U;
uint8_t x948 = 5U;
uint16_t x953 = 26U;
int8_t x958 = INT8_MIN;
int32_t t148 = -7949;
int8_t x969 = -1;
uint32_t x975 = UINT32_MAX;
int8_t x979 = -62;
int16_t x988 = -5;
static uint64_t x995 = 374899866293LLU;
uint64_t x1004 = 55126389364968294LLU;
int32_t t155 = 0;
static int16_t x1005 = INT16_MAX;
int8_t x1023 = -1;
int64_t x1031 = -13339319980LL;
uint32_t x1032 = UINT32_MAX;
volatile uint64_t x1033 = 15782263LLU;
uint16_t x1042 = 99U;
volatile uint32_t x1048 = UINT32_MAX;
uint16_t x1051 = 13286U;
int32_t t163 = 0;
volatile uint64_t x1061 = 1375698LLU;
volatile int32_t t165 = -35;
volatile int32_t t166 = 758702;
static volatile int32_t x1074 = INT32_MIN;
uint32_t x1078 = 1418061U;
volatile int32_t t168 = 8000;
uint32_t x1084 = 20U;
static int32_t t169 = 140;
int64_t x1090 = INT64_MIN;
int64_t x1095 = -1LL;
volatile uint8_t x1096 = UINT8_MAX;
volatile int16_t x1104 = INT16_MIN;
volatile int8_t x1116 = INT8_MIN;
uint64_t x1117 = 0LLU;
int64_t x1118 = INT64_MIN;
volatile int32_t t175 = -246;
volatile int16_t x1125 = -5;
int16_t x1139 = -38;
int16_t x1140 = INT16_MAX;
volatile int32_t t178 = 3620;
uint16_t x1156 = 1U;
static int16_t x1158 = INT16_MIN;
uint16_t x1160 = 0U;
uint32_t x1166 = 35448U;
volatile int16_t x1168 = 1;
volatile uint64_t x1169 = 32546704241119188LLU;
static int32_t x1177 = -290;
int32_t x1183 = INT32_MAX;
volatile int32_t t186 = 13339674;
int8_t x1187 = -55;
volatile uint32_t x1191 = 199U;
int8_t x1192 = -1;
int32_t x1193 = INT32_MAX;
int32_t x1200 = 375668810;
uint64_t x1208 = 878469LLU;
static int32_t x1217 = 2;
int8_t x1224 = INT8_MIN;
volatile int32_t t195 = -6;
volatile int32_t t196 = -489;
uint16_t x1246 = UINT16_MAX;
static uint32_t x1247 = 7U;
int32_t x1251 = -1;
int8_t x1252 = -30;
volatile int8_t x1262 = -1;
int32_t x1264 = -1;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int8_t x3 = -3;
	volatile int32_t t0 = 30;

    t0 = ((x1*x2)==(x3+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = -1;
	int16_t x11 = -1;
	volatile uint16_t x12 = UINT16_MAX;
	static volatile int32_t t1 = -5721825;

    t1 = ((x9*x10)==(x11+x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = -1;
	static int64_t x14 = INT64_MAX;
	uint16_t x15 = 25U;
	int8_t x16 = 1;
	volatile int32_t t2 = 1;

    t2 = ((x13*x14)==(x15+x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x26 = -3;
	volatile uint32_t x27 = UINT32_MAX;
	int64_t x28 = INT64_MIN;
	int32_t t3 = -6747;

    t3 = ((x25*x26)==(x27+x28));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x29 = 3759U;
	volatile uint64_t x30 = 5914097569082418694LLU;
	int8_t x31 = INT8_MIN;
	static int32_t x32 = -1;
	static int32_t t4 = 124330;

    t4 = ((x29*x30)==(x31+x32));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x34 = UINT16_MAX;
	int8_t x35 = INT8_MIN;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t5 = 709;

    t5 = ((x33*x34)==(x35+x36));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x45 = UINT16_MAX;
	uint8_t x46 = UINT8_MAX;
	uint32_t x48 = 2971U;

    t6 = ((x45*x46)==(x47+x48));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x53 = -1;
	uint64_t x54 = 2791425519163034LLU;
	static int8_t x55 = INT8_MIN;
	static uint16_t x56 = 312U;

    t7 = ((x53*x54)==(x55+x56));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x57 = 7163328LL;
	static volatile int16_t x58 = INT16_MIN;
	volatile int16_t x59 = 326;
	static volatile int8_t x60 = -33;
	static volatile int32_t t8 = 7;

    t8 = ((x57*x58)==(x59+x60));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x61 = -20;
	uint16_t x63 = UINT16_MAX;
	uint16_t x64 = 7U;
	int32_t t9 = -13897794;

    t9 = ((x61*x62)==(x63+x64));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x65 = UINT16_MAX;
	volatile int8_t x67 = -1;
	volatile int16_t x68 = 344;
	static volatile int32_t t10 = 0;

    t10 = ((x65*x66)==(x67+x68));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x69 = INT8_MIN;
	static uint64_t x71 = 301054721659177LLU;
	static int16_t x72 = -1;
	static int32_t t11 = 3;

    t11 = ((x69*x70)==(x71+x72));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x73 = -1;
	static int8_t x74 = INT8_MIN;
	static int32_t t12 = -14;

    t12 = ((x73*x74)==(x75+x76));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x77 = -1LL;
	static int8_t x78 = -1;
	uint16_t x79 = 3893U;
	int16_t x80 = 1;
	static int32_t t13 = 4242;

    t13 = ((x77*x78)==(x79+x80));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x81 = UINT32_MAX;
	uint32_t x84 = 1132315186U;

    t14 = ((x81*x82)==(x83+x84));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x85 = 1;
	uint32_t x86 = UINT32_MAX;
	volatile int64_t x87 = INT64_MIN;
	int64_t x88 = 394364597261260LL;
	volatile int32_t t15 = 73;

    t15 = ((x85*x86)==(x87+x88));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x93 = -5698;
	int64_t x94 = -1LL;
	uint32_t x95 = 182U;
	uint16_t x96 = 25U;
	volatile int32_t t16 = 72;

    t16 = ((x93*x94)==(x95+x96));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x101 = 63U;
	uint8_t x102 = 21U;
	int64_t x104 = -260170LL;
	int32_t t17 = 141;

    t17 = ((x101*x102)==(x103+x104));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x110 = 6U;
	int8_t x111 = 2;
	static int8_t x112 = INT8_MAX;
	int32_t t18 = -127909;

    t18 = ((x109*x110)==(x111+x112));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x114 = INT16_MIN;
	uint64_t x116 = 1759264768919444862LLU;
	static volatile int32_t t19 = -185686856;

    t19 = ((x113*x114)==(x115+x116));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x117 = -77870LL;
	static int8_t x119 = INT8_MAX;
	volatile int64_t x120 = INT64_MIN;
	int32_t t20 = 199508100;

    t20 = ((x117*x118)==(x119+x120));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MIN;
	int8_t x123 = -1;
	volatile int64_t x124 = -1LL;

    t21 = ((x121*x122)==(x123+x124));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x125 = 391119081U;
	volatile uint32_t x126 = 1579U;
	int8_t x127 = -3;
	int64_t x128 = -1LL;
	volatile int32_t t22 = 8107448;

    t22 = ((x125*x126)==(x127+x128));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x129 = UINT64_MAX;
	uint64_t x131 = UINT64_MAX;
	int8_t x132 = INT8_MIN;

    t23 = ((x129*x130)==(x131+x132));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x133 = -19856;
	int16_t x134 = -1;
	uint16_t x135 = 385U;
	volatile uint8_t x136 = 30U;
	volatile int32_t t24 = -174991870;

    t24 = ((x133*x134)==(x135+x136));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x137 = UINT16_MAX;
	volatile uint16_t x138 = 4663U;
	volatile uint32_t x139 = 218527075U;
	uint16_t x140 = 24409U;
	int32_t t25 = 2;

    t25 = ((x137*x138)==(x139+x140));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x145 = 1U;
	static uint16_t x147 = UINT16_MAX;
	static int16_t x148 = -1;
	int32_t t26 = 18;

    t26 = ((x145*x146)==(x147+x148));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x158 = INT32_MIN;
	int8_t x159 = INT8_MAX;
	uint64_t x160 = 8342489788128897367LLU;
	volatile int32_t t27 = -1972408;

    t27 = ((x157*x158)==(x159+x160));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x165 = 14969382427376937LLU;
	static int8_t x166 = INT8_MIN;
	static int32_t x167 = INT32_MAX;
	int8_t x168 = INT8_MIN;
	int32_t t28 = -378498;

    t28 = ((x165*x166)==(x167+x168));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x177 = INT8_MIN;
	volatile uint16_t x178 = 25017U;
	uint32_t x179 = 833U;
	uint64_t x180 = 1246826767168257LLU;
	int32_t t29 = 1;

    t29 = ((x177*x178)==(x179+x180));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x181 = -61105446064LL;
	uint32_t x183 = 1264585835U;
	int8_t x184 = -1;
	volatile int32_t t30 = 22;

    t30 = ((x181*x182)==(x183+x184));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x185 = 13U;
	volatile int32_t x186 = -1154664;
	volatile int64_t x187 = -1LL;
	uint64_t x188 = UINT64_MAX;

    t31 = ((x185*x186)==(x187+x188));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x205 = -5800070265873LL;
	int16_t x206 = -1;
	static int32_t x207 = 4;
	int16_t x208 = INT16_MIN;

    t32 = ((x205*x206)==(x207+x208));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x209 = 13263U;
	static volatile int8_t x210 = -2;
	int8_t x211 = INT8_MIN;
	int32_t t33 = -28993220;

    t33 = ((x209*x210)==(x211+x212));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x213 = -1LL;
	static int64_t x214 = INT64_MAX;
	uint16_t x215 = 1U;
	static int32_t x216 = -3179601;
	static int32_t t34 = 34295541;

    t34 = ((x213*x214)==(x215+x216));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x217 = 713384031LL;
	int32_t x218 = -1;
	uint32_t x219 = 4123U;
	uint16_t x220 = 883U;
	int32_t t35 = -37743;

    t35 = ((x217*x218)==(x219+x220));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x221 = -1;
	uint64_t x223 = 16732371369LLU;
	uint16_t x224 = UINT16_MAX;
	int32_t t36 = 23;

    t36 = ((x221*x222)==(x223+x224));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x229 = UINT16_MAX;
	volatile int8_t x231 = -1;
	int8_t x232 = INT8_MIN;
	int32_t t37 = -14;

    t37 = ((x229*x230)==(x231+x232));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x234 = 8;
	int32_t x236 = INT32_MIN;
	volatile int32_t t38 = 1;

    t38 = ((x233*x234)==(x235+x236));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x246 = INT8_MIN;
	int16_t x247 = 54;
	static uint32_t x248 = 180U;
	int32_t t39 = 3407228;

    t39 = ((x245*x246)==(x247+x248));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x250 = 1052118LL;
	static uint64_t x251 = 2237422596148746LLU;
	uint8_t x252 = UINT8_MAX;
	int32_t t40 = 86803;

    t40 = ((x249*x250)==(x251+x252));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x253 = 1LL;
	uint16_t x254 = UINT16_MAX;
	static int64_t x255 = -18423456168LL;
	int8_t x256 = -1;
	volatile int32_t t41 = -115;

    t41 = ((x253*x254)==(x255+x256));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x257 = UINT64_MAX;
	int16_t x258 = 3;
	int32_t x259 = INT32_MIN;
	uint32_t x260 = UINT32_MAX;
	static int32_t t42 = 48649;

    t42 = ((x257*x258)==(x259+x260));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x265 = 3LLU;
	uint64_t x266 = UINT64_MAX;
	int16_t x268 = -1;
	static volatile int32_t t43 = 0;

    t43 = ((x265*x266)==(x267+x268));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x270 = 3565U;
	int32_t t44 = -60255;

    t44 = ((x269*x270)==(x271+x272));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x273 = UINT64_MAX;
	volatile uint64_t x274 = 8577965153098471149LLU;
	int16_t x275 = -1;
	static volatile int8_t x276 = INT8_MIN;

    t45 = ((x273*x274)==(x275+x276));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x277 = -17955LL;
	uint64_t x278 = UINT64_MAX;
	uint64_t x279 = 789497388419118LLU;
	volatile int16_t x280 = 15;
	int32_t t46 = 211474;

    t46 = ((x277*x278)==(x279+x280));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x285 = 1098489U;
	volatile int64_t x287 = INT64_MIN;
	volatile int64_t x288 = 9948104854818053LL;
	volatile int32_t t47 = -9676;

    t47 = ((x285*x286)==(x287+x288));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x289 = -1;
	uint8_t x291 = 16U;
	int32_t x292 = -587459;
	volatile int32_t t48 = 91064;

    t48 = ((x289*x290)==(x291+x292));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x293 = 1452LL;
	static int32_t x294 = INT32_MIN;
	uint8_t x295 = 51U;
	int8_t x296 = -1;
	int32_t t49 = -50956;

    t49 = ((x293*x294)==(x295+x296));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x301 = INT16_MIN;
	uint8_t x302 = UINT8_MAX;
	int32_t x303 = INT32_MAX;
	int64_t x304 = -1LL;

    t50 = ((x301*x302)==(x303+x304));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x306 = 989455LL;
	uint64_t x307 = 28467061362560LLU;
	volatile int8_t x308 = 1;
	volatile int32_t t51 = 0;

    t51 = ((x305*x306)==(x307+x308));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x309 = -17;
	uint16_t x310 = 27187U;
	uint16_t x311 = 0U;
	volatile int8_t x312 = -1;
	static volatile int32_t t52 = 779926;

    t52 = ((x309*x310)==(x311+x312));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x313 = 2;
	uint32_t x314 = 642869U;
	static volatile int32_t x315 = INT32_MIN;
	volatile int32_t t53 = 3737756;

    t53 = ((x313*x314)==(x315+x316));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x317 = INT8_MIN;
	static int32_t x319 = INT32_MIN;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t54 = -1;

    t54 = ((x317*x318)==(x319+x320));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x326 = UINT32_MAX;
	int16_t x327 = -2;
	volatile int16_t x328 = -3432;
	static volatile int32_t t55 = 979;

    t55 = ((x325*x326)==(x327+x328));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x333 = INT8_MIN;
	static int64_t x334 = -2058324246606LL;
	volatile uint64_t x335 = 1733699828424862597LLU;
	int8_t x336 = INT8_MAX;
	int32_t t56 = 160347;

    t56 = ((x333*x334)==(x335+x336));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x337 = INT16_MIN;
	volatile uint8_t x338 = 4U;
	int16_t x340 = 1489;
	int32_t t57 = 197;

    t57 = ((x337*x338)==(x339+x340));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x341 = -1;
	int16_t x342 = 3;
	int16_t x344 = INT16_MIN;
	static volatile int32_t t58 = 163488;

    t58 = ((x341*x342)==(x343+x344));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint64_t x345 = 127548929803278310LLU;
	uint16_t x346 = 0U;
	static int16_t x347 = INT16_MIN;
	volatile int16_t x348 = INT16_MIN;
	int32_t t59 = -1628699;

    t59 = ((x345*x346)==(x347+x348));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x357 = INT16_MIN;
	static uint64_t x358 = UINT64_MAX;
	volatile int16_t x359 = 4;
	int32_t t60 = 24779383;

    t60 = ((x357*x358)==(x359+x360));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x361 = UINT16_MAX;
	int16_t x363 = INT16_MAX;
	int8_t x364 = INT8_MIN;

    t61 = ((x361*x362)==(x363+x364));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x373 = INT8_MIN;
	int8_t x375 = -1;
	volatile int16_t x376 = INT16_MIN;
	volatile int32_t t62 = 1282;

    t62 = ((x373*x374)==(x375+x376));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x377 = INT16_MIN;
	volatile int8_t x379 = -3;
	volatile int32_t t63 = 447316;

    t63 = ((x377*x378)==(x379+x380));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x381 = -2119LL;
	int8_t x382 = 1;
	int8_t x383 = -1;
	int8_t x384 = 3;
	volatile int32_t t64 = -325013;

    t64 = ((x381*x382)==(x383+x384));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x385 = INT32_MIN;
	static int64_t x387 = -1LL;
	static uint64_t x388 = UINT64_MAX;
	volatile int32_t t65 = -60;

    t65 = ((x385*x386)==(x387+x388));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x389 = 9760062110043LL;
	int32_t x390 = -1;
	uint64_t x391 = 486706692051LLU;
	volatile int16_t x392 = 33;
	volatile int32_t t66 = -1;

    t66 = ((x389*x390)==(x391+x392));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x397 = -1LL;
	int32_t x398 = INT32_MIN;
	static volatile uint64_t x399 = 58166LLU;
	int64_t x400 = INT64_MIN;
	volatile int32_t t67 = 70;

    t67 = ((x397*x398)==(x399+x400));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x405 = 1U;
	uint16_t x406 = UINT16_MAX;
	int64_t x407 = 3515065LL;
	uint16_t x408 = UINT16_MAX;
	int32_t t68 = -7187;

    t68 = ((x405*x406)==(x407+x408));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x409 = INT8_MIN;
	volatile int64_t x412 = INT64_MAX;
	int32_t t69 = -24909;

    t69 = ((x409*x410)==(x411+x412));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x413 = INT8_MAX;
	uint64_t x414 = UINT64_MAX;
	uint32_t x415 = UINT32_MAX;
	int32_t x416 = 16456;

    t70 = ((x413*x414)==(x415+x416));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x425 = 26050349LLU;
	static int64_t x426 = INT64_MIN;
	int64_t x428 = -1LL;

    t71 = ((x425*x426)==(x427+x428));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x442 = 25;
	uint64_t x444 = 492153640953773LLU;
	volatile int32_t t72 = -127624;

    t72 = ((x441*x442)==(x443+x444));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x447 = UINT32_MAX;
	volatile int64_t x448 = INT64_MIN;
	static int32_t t73 = -4;

    t73 = ((x445*x446)==(x447+x448));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x449 = INT64_MIN;
	int8_t x450 = 0;
	int8_t x451 = -1;
	int8_t x452 = INT8_MIN;
	static int32_t t74 = -100418361;

    t74 = ((x449*x450)==(x451+x452));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x457 = INT32_MAX;
	int64_t x459 = -1LL;
	volatile int32_t t75 = 4439;

    t75 = ((x457*x458)==(x459+x460));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x461 = -15952LL;
	int32_t x462 = INT32_MIN;
	uint8_t x463 = 17U;
	int16_t x464 = -258;
	volatile int32_t t76 = -25;

    t76 = ((x461*x462)==(x463+x464));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x465 = 555;
	uint32_t x466 = UINT32_MAX;
	uint64_t x467 = 969712957319920275LLU;
	volatile int8_t x468 = -1;

    t77 = ((x465*x466)==(x467+x468));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x470 = 3;
	int32_t x471 = INT32_MAX;
	int16_t x472 = INT16_MIN;
	volatile int32_t t78 = -931023;

    t78 = ((x469*x470)==(x471+x472));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x473 = 122834671518402296LLU;
	uint64_t x474 = 223540843LLU;
	static uint32_t x476 = UINT32_MAX;
	volatile int32_t t79 = 293;

    t79 = ((x473*x474)==(x475+x476));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x482 = 12U;
	uint16_t x483 = UINT16_MAX;
	volatile int16_t x484 = -304;
	static int32_t t80 = 6976;

    t80 = ((x481*x482)==(x483+x484));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x485 = 3;
	volatile int16_t x486 = INT16_MIN;
	int32_t x487 = INT32_MIN;
	uint32_t x488 = UINT32_MAX;
	int32_t t81 = 604812145;

    t81 = ((x485*x486)==(x487+x488));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x489 = 32554890U;
	volatile uint16_t x490 = 0U;
	int16_t x491 = 1;
	int64_t x492 = -1LL;

    t82 = ((x489*x490)==(x491+x492));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x493 = 0LLU;
	int16_t x494 = -6905;
	static uint16_t x495 = 4U;
	int16_t x496 = -1;
	static volatile int32_t t83 = 3571681;

    t83 = ((x493*x494)==(x495+x496));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x501 = UINT16_MAX;
	volatile uint32_t x502 = 2U;
	uint16_t x503 = 69U;
	uint32_t x504 = 167994852U;

    t84 = ((x501*x502)==(x503+x504));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x505 = -362;
	int16_t x506 = INT16_MIN;
	uint8_t x508 = 46U;
	int32_t t85 = 43785;

    t85 = ((x505*x506)==(x507+x508));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int32_t x510 = -1;
	static int16_t x511 = 6;
	uint16_t x512 = UINT16_MAX;

    t86 = ((x509*x510)==(x511+x512));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x521 = -209;
	static uint16_t x522 = 1U;
	int8_t x524 = INT8_MIN;
	int32_t t87 = -8502;

    t87 = ((x521*x522)==(x523+x524));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x525 = 11U;
	uint8_t x526 = 22U;
	int16_t x527 = -1;
	int16_t x528 = INT16_MIN;
	volatile int32_t t88 = 19;

    t88 = ((x525*x526)==(x527+x528));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x529 = UINT32_MAX;
	uint16_t x530 = UINT16_MAX;
	int16_t x531 = INT16_MAX;
	static volatile int32_t t89 = -473;

    t89 = ((x529*x530)==(x531+x532));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x541 = UINT32_MAX;
	volatile int16_t x542 = -1;
	int16_t x543 = INT16_MIN;
	uint32_t x544 = 6332U;
	int32_t t90 = 170466;

    t90 = ((x541*x542)==(x543+x544));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x545 = 109U;
	uint32_t x546 = 10881545U;
	int16_t x547 = 1;
	static int8_t x548 = 2;

    t91 = ((x545*x546)==(x547+x548));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x549 = -1;
	uint32_t x550 = 133011U;
	uint16_t x551 = UINT16_MAX;
	int32_t x552 = 216375;
	int32_t t92 = 39246;

    t92 = ((x549*x550)==(x551+x552));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x554 = -1;
	static volatile uint64_t x556 = 1098566772100LLU;
	int32_t t93 = -137;

    t93 = ((x553*x554)==(x555+x556));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x557 = 231633632689247LLU;
	int32_t x559 = 158214;
	int32_t x560 = 42596;
	volatile int32_t t94 = -43682;

    t94 = ((x557*x558)==(x559+x560));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x561 = 0U;
	static volatile int8_t x563 = 1;
	static int8_t x564 = INT8_MIN;
	volatile int32_t t95 = 261184819;

    t95 = ((x561*x562)==(x563+x564));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x565 = 2;
	uint8_t x566 = UINT8_MAX;
	int32_t x567 = INT32_MIN;
	int64_t x568 = 13730080880013LL;
	static int32_t t96 = -46743106;

    t96 = ((x565*x566)==(x567+x568));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x569 = -1;
	int8_t x570 = INT8_MIN;
	uint16_t x572 = 0U;
	static int32_t t97 = -1480;

    t97 = ((x569*x570)==(x571+x572));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x577 = 22;
	volatile int16_t x578 = 6;
	uint8_t x579 = UINT8_MAX;
	int32_t t98 = 283;

    t98 = ((x577*x578)==(x579+x580));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x582 = 3LLU;
	volatile uint16_t x583 = UINT16_MAX;
	static int64_t x584 = 6526LL;

    t99 = ((x581*x582)==(x583+x584));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x585 = INT16_MIN;
	int8_t x586 = 1;
	static uint32_t x587 = UINT32_MAX;
	int64_t x588 = 1136LL;
	int32_t t100 = 6;

    t100 = ((x585*x586)==(x587+x588));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x593 = 1U;
	volatile int32_t x594 = 360884179;
	int8_t x595 = INT8_MIN;
	volatile int32_t t101 = -3;

    t101 = ((x593*x594)==(x595+x596));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x605 = INT8_MIN;
	uint64_t x608 = 5418118761224973342LLU;

    t102 = ((x605*x606)==(x607+x608));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x613 = INT16_MIN;
	uint16_t x615 = 7U;
	volatile int32_t x616 = 8683;

    t103 = ((x613*x614)==(x615+x616));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x622 = 2U;
	volatile int8_t x623 = 3;
	static volatile int64_t x624 = INT64_MIN;

    t104 = ((x621*x622)==(x623+x624));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x629 = INT64_MIN;
	int8_t x630 = 1;
	volatile int8_t x631 = 4;
	int16_t x632 = -1;
	volatile int32_t t105 = 119208528;

    t105 = ((x629*x630)==(x631+x632));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x633 = 0;
	static int8_t x634 = INT8_MIN;
	int8_t x636 = INT8_MIN;
	volatile int32_t t106 = 1105;

    t106 = ((x633*x634)==(x635+x636));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x637 = UINT16_MAX;
	uint64_t x639 = UINT64_MAX;
	int16_t x640 = -1;
	volatile int32_t t107 = 41;

    t107 = ((x637*x638)==(x639+x640));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x649 = -1;
	volatile uint32_t x650 = 440U;
	uint64_t x651 = UINT64_MAX;
	uint16_t x652 = 123U;
	volatile int32_t t108 = -21397;

    t108 = ((x649*x650)==(x651+x652));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x653 = INT8_MIN;
	volatile uint8_t x654 = 1U;
	uint16_t x655 = 326U;
	int64_t x656 = INT64_MIN;
	int32_t t109 = 16120151;

    t109 = ((x653*x654)==(x655+x656));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x657 = 4U;
	uint8_t x660 = 44U;

    t110 = ((x657*x658)==(x659+x660));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x665 = UINT16_MAX;
	int16_t x666 = -1;
	volatile uint64_t x667 = 7LLU;
	uint8_t x668 = 7U;
	int32_t t111 = 110281602;

    t111 = ((x665*x666)==(x667+x668));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x674 = 35U;
	int16_t x675 = -1;
	static volatile uint8_t x676 = 53U;
	int32_t t112 = -29647;

    t112 = ((x673*x674)==(x675+x676));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x677 = INT16_MIN;
	volatile int64_t x678 = -1LL;
	volatile uint32_t x679 = 688U;
	int16_t x680 = INT16_MIN;
	int32_t t113 = 2625515;

    t113 = ((x677*x678)==(x679+x680));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x685 = -1;
	static volatile uint16_t x686 = UINT16_MAX;
	volatile uint8_t x687 = 0U;
	uint64_t x688 = UINT64_MAX;

    t114 = ((x685*x686)==(x687+x688));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x689 = INT8_MIN;
	int16_t x690 = INT16_MIN;
	volatile uint8_t x691 = UINT8_MAX;
	int32_t t115 = 1;

    t115 = ((x689*x690)==(x691+x692));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x693 = 1;
	int64_t x694 = -245LL;
	volatile int32_t x695 = 3487;
	volatile int32_t t116 = 30807;

    t116 = ((x693*x694)==(x695+x696));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x697 = UINT8_MAX;
	uint32_t x698 = UINT32_MAX;
	uint32_t x699 = UINT32_MAX;
	uint64_t x700 = 2470172LLU;
	int32_t t117 = 1007912716;

    t117 = ((x697*x698)==(x699+x700));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x706 = INT16_MIN;
	static volatile int32_t x707 = -60;
	static volatile int32_t t118 = -3660045;

    t118 = ((x705*x706)==(x707+x708));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x709 = -1;
	int64_t x710 = -1889175915491871844LL;
	uint16_t x711 = 0U;

    t119 = ((x709*x710)==(x711+x712));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x714 = INT32_MAX;
	int16_t x715 = INT16_MIN;
	volatile int64_t x716 = INT64_MAX;
	volatile int32_t t120 = -242;

    t120 = ((x713*x714)==(x715+x716));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x718 = -618486056388LL;
	uint16_t x719 = UINT16_MAX;

    t121 = ((x717*x718)==(x719+x720));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x721 = -3244;
	int32_t t122 = -728;

    t122 = ((x721*x722)==(x723+x724));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x725 = INT8_MIN;
	uint32_t x726 = UINT32_MAX;
	uint16_t x727 = UINT16_MAX;
	volatile int16_t x728 = 10;

    t123 = ((x725*x726)==(x727+x728));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x741 = 22081U;
	static uint16_t x742 = 38U;
	int32_t x743 = INT32_MAX;
	int64_t x744 = -22659830LL;

    t124 = ((x741*x742)==(x743+x744));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x749 = 6162LLU;
	static int8_t x750 = INT8_MAX;
	uint8_t x751 = 48U;
	int32_t t125 = 8;

    t125 = ((x749*x750)==(x751+x752));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x753 = 89369912U;
	int8_t x754 = INT8_MIN;
	uint16_t x755 = 2U;
	static int32_t x756 = -1150136;
	volatile int32_t t126 = -232696;

    t126 = ((x753*x754)==(x755+x756));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x785 = -1;
	static int32_t x786 = 100975;
	static uint64_t x787 = 14972217LLU;
	int8_t x788 = 0;
	volatile int32_t t127 = 1101;

    t127 = ((x785*x786)==(x787+x788));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x797 = 1U;
	int8_t x798 = 1;
	int32_t x799 = INT32_MAX;
	volatile int32_t t128 = 473;

    t128 = ((x797*x798)==(x799+x800));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x803 = -1;

    t129 = ((x801*x802)==(x803+x804));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x810 = 57264U;
	static int32_t x812 = INT32_MAX;
	volatile int32_t t130 = -30;

    t130 = ((x809*x810)==(x811+x812));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x823 = 1447;
	volatile uint8_t x824 = 1U;
	int32_t t131 = 440;

    t131 = ((x821*x822)==(x823+x824));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x825 = -9331206;
	uint32_t x826 = 60317271U;
	static int16_t x827 = -1;
	uint32_t x828 = UINT32_MAX;
	static volatile int32_t t132 = -139;

    t132 = ((x825*x826)==(x827+x828));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x838 = 2U;
	int64_t x839 = INT64_MIN;
	int16_t x840 = 13;
	static int32_t t133 = 150914;

    t133 = ((x837*x838)==(x839+x840));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x846 = -3286;
	int64_t x847 = INT64_MIN;
	int16_t x848 = INT16_MAX;
	int32_t t134 = -3;

    t134 = ((x845*x846)==(x847+x848));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x869 = 31U;
	int8_t x870 = -1;
	volatile int32_t t135 = 1;

    t135 = ((x869*x870)==(x871+x872));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x878 = 25;
	static uint32_t x879 = UINT32_MAX;

    t136 = ((x877*x878)==(x879+x880));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int16_t x881 = -1;
	uint8_t x882 = UINT8_MAX;
	static int8_t x884 = 12;
	volatile int32_t t137 = -1;

    t137 = ((x881*x882)==(x883+x884));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x885 = 2821028U;
	int8_t x886 = INT8_MIN;
	volatile uint32_t x887 = 15403U;
	int64_t x888 = 25LL;

    t138 = ((x885*x886)==(x887+x888));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x889 = 7937U;
	static volatile uint64_t x890 = 306976LLU;
	volatile int16_t x891 = -13779;
	int16_t x892 = INT16_MIN;
	volatile int32_t t139 = 22930;

    t139 = ((x889*x890)==(x891+x892));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x893 = 103;
	int8_t x895 = -1;
	volatile int32_t t140 = -3212;

    t140 = ((x893*x894)==(x895+x896));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x901 = 467U;
	int32_t x902 = 50960;
	int16_t x903 = -1;
	volatile int16_t x904 = 34;
	static volatile int32_t t141 = -3610266;

    t141 = ((x901*x902)==(x903+x904));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x909 = -1;
	static int16_t x910 = INT16_MIN;
	int16_t x911 = INT16_MIN;
	volatile int16_t x912 = INT16_MIN;
	volatile int32_t t142 = 1057;

    t142 = ((x909*x910)==(x911+x912));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x925 = 36U;
	volatile int32_t x926 = 2;
	int64_t x927 = -1LL;
	volatile uint64_t x928 = 632024210LLU;
	int32_t t143 = 325270;

    t143 = ((x925*x926)==(x927+x928));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x930 = 99U;
	int16_t x931 = INT16_MAX;
	static int8_t x932 = INT8_MIN;
	int32_t t144 = 358358;

    t144 = ((x929*x930)==(x931+x932));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x937 = 98U;
	static uint32_t x938 = 16050U;
	uint64_t x939 = 2564880028LLU;

    t145 = ((x937*x938)==(x939+x940));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x945 = -1LL;
	int32_t t146 = -4;

    t146 = ((x945*x946)==(x947+x948));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x954 = INT16_MIN;
	int16_t x955 = -1;
	static volatile int64_t x956 = INT64_MAX;
	volatile int32_t t147 = -1;

    t147 = ((x953*x954)==(x955+x956));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x957 = UINT8_MAX;
	int64_t x959 = 980883326LL;
	int32_t x960 = 0;

    t148 = ((x957*x958)==(x959+x960));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x970 = UINT8_MAX;
	int64_t x971 = INT64_MIN;
	uint8_t x972 = 1U;
	volatile int32_t t149 = -298991;

    t149 = ((x969*x970)==(x971+x972));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint8_t x973 = 99U;
	int8_t x974 = 1;
	int64_t x976 = -1LL;
	volatile int32_t t150 = 132;

    t150 = ((x973*x974)==(x975+x976));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x977 = -1;
	volatile int32_t x978 = -1;
	uint32_t x980 = 67U;
	int32_t t151 = 7;

    t151 = ((x977*x978)==(x979+x980));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x981 = UINT16_MAX;
	uint8_t x982 = UINT8_MAX;
	int16_t x983 = -6;
	uint32_t x984 = 12186417U;
	int32_t t152 = -33766485;

    t152 = ((x981*x982)==(x983+x984));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x985 = UINT8_MAX;
	volatile uint64_t x986 = 240LLU;
	static int8_t x987 = INT8_MAX;
	volatile int32_t t153 = -249115272;

    t153 = ((x985*x986)==(x987+x988));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x993 = UINT16_MAX;
	volatile uint16_t x994 = 7379U;
	volatile int8_t x996 = 2;
	static int32_t t154 = -24573;

    t154 = ((x993*x994)==(x995+x996));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x1001 = UINT8_MAX;
	volatile int16_t x1002 = INT16_MIN;
	uint8_t x1003 = 2U;

    t155 = ((x1001*x1002)==(x1003+x1004));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x1006 = INT16_MIN;
	volatile int64_t x1007 = -3249085257LL;
	uint8_t x1008 = UINT8_MAX;
	int32_t t156 = 206282;

    t156 = ((x1005*x1006)==(x1007+x1008));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1021 = INT16_MIN;
	int16_t x1022 = INT16_MIN;
	static volatile int8_t x1024 = INT8_MAX;
	static int32_t t157 = -1099;

    t157 = ((x1021*x1022)==(x1023+x1024));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1029 = -7831;
	static int32_t x1030 = -182;
	int32_t t158 = 92;

    t158 = ((x1029*x1030)==(x1031+x1032));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1034 = -39;
	int64_t x1035 = INT64_MAX;
	static int8_t x1036 = INT8_MIN;
	int32_t t159 = 3290;

    t159 = ((x1033*x1034)==(x1035+x1036));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1041 = 14;
	volatile uint32_t x1043 = UINT32_MAX;
	int8_t x1044 = -1;
	int32_t t160 = -1277;

    t160 = ((x1041*x1042)==(x1043+x1044));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x1045 = -1;
	uint32_t x1046 = UINT32_MAX;
	int32_t x1047 = INT32_MIN;
	volatile int32_t t161 = -1;

    t161 = ((x1045*x1046)==(x1047+x1048));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x1049 = 14U;
	volatile int16_t x1050 = INT16_MIN;
	static int32_t x1052 = -418792682;
	volatile int32_t t162 = 15;

    t162 = ((x1049*x1050)==(x1051+x1052));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1057 = 289267LLU;
	uint64_t x1058 = 44LLU;
	int32_t x1059 = INT32_MAX;
	int64_t x1060 = INT64_MIN;

    t163 = ((x1057*x1058)==(x1059+x1060));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x1062 = 840;
	uint64_t x1063 = 215714625586896LLU;
	int8_t x1064 = -1;
	int32_t t164 = -501825318;

    t164 = ((x1061*x1062)==(x1063+x1064));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x1065 = INT16_MIN;
	static int64_t x1066 = -3124907999025LL;
	static int64_t x1067 = 48034188LL;
	int32_t x1068 = -31;

    t165 = ((x1065*x1066)==(x1067+x1068));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1069 = INT16_MIN;
	uint16_t x1070 = 1U;
	int64_t x1071 = -1LL;
	uint16_t x1072 = UINT16_MAX;

    t166 = ((x1069*x1070)==(x1071+x1072));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x1073 = 112255801U;
	int8_t x1075 = INT8_MAX;
	int8_t x1076 = -12;
	int32_t t167 = 0;

    t167 = ((x1073*x1074)==(x1075+x1076));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1077 = INT32_MIN;
	int64_t x1079 = 5934045LL;
	static uint16_t x1080 = 2686U;

    t168 = ((x1077*x1078)==(x1079+x1080));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1081 = -1LL;
	static volatile int8_t x1082 = INT8_MIN;
	volatile uint8_t x1083 = 6U;

    t169 = ((x1081*x1082)==(x1083+x1084));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1089 = UINT64_MAX;
	static uint64_t x1091 = 75083031611989LLU;
	uint32_t x1092 = UINT32_MAX;
	int32_t t170 = 219;

    t170 = ((x1089*x1090)==(x1091+x1092));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1093 = UINT32_MAX;
	uint8_t x1094 = 21U;
	static int32_t t171 = 11570900;

    t171 = ((x1093*x1094)==(x1095+x1096));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x1101 = INT8_MIN;
	int16_t x1102 = INT16_MIN;
	int64_t x1103 = -127582812319313391LL;
	int32_t t172 = 0;

    t172 = ((x1101*x1102)==(x1103+x1104));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x1105 = INT16_MIN;
	volatile int32_t x1106 = -1;
	int16_t x1107 = 4275;
	volatile int16_t x1108 = 161;
	int32_t t173 = -280;

    t173 = ((x1105*x1106)==(x1107+x1108));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x1113 = 0U;
	static int16_t x1114 = -1;
	int64_t x1115 = INT64_MAX;
	volatile int32_t t174 = 100;

    t174 = ((x1113*x1114)==(x1115+x1116));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1119 = -14;
	int8_t x1120 = -1;

    t175 = ((x1117*x1118)==(x1119+x1120));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1121 = -153;
	int32_t x1122 = -28;
	uint32_t x1123 = 8010U;
	int32_t x1124 = 55460740;
	volatile int32_t t176 = -151593;

    t176 = ((x1121*x1122)==(x1123+x1124));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1126 = INT16_MAX;
	int64_t x1127 = 63085377324LL;
	volatile int16_t x1128 = 1505;
	volatile int32_t t177 = 40615;

    t177 = ((x1125*x1126)==(x1127+x1128));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1137 = 14008U;
	int64_t x1138 = -1LL;

    t178 = ((x1137*x1138)==(x1139+x1140));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1141 = UINT32_MAX;
	static uint16_t x1142 = UINT16_MAX;
	static uint16_t x1143 = UINT16_MAX;
	static volatile int16_t x1144 = -1;
	int32_t t179 = 1;

    t179 = ((x1141*x1142)==(x1143+x1144));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1145 = -1;
	int8_t x1146 = -1;
	static int8_t x1147 = 14;
	uint8_t x1148 = UINT8_MAX;
	volatile int32_t t180 = -1;

    t180 = ((x1145*x1146)==(x1147+x1148));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1153 = -1LL;
	uint8_t x1154 = UINT8_MAX;
	static uint16_t x1155 = 24U;
	int32_t t181 = 14182188;

    t181 = ((x1153*x1154)==(x1155+x1156));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x1157 = 7171696LL;
	static uint16_t x1159 = UINT16_MAX;
	volatile int32_t t182 = 20145172;

    t182 = ((x1157*x1158)==(x1159+x1160));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x1165 = -37;
	static volatile int16_t x1167 = -1;
	int32_t t183 = -24123699;

    t183 = ((x1165*x1166)==(x1167+x1168));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1170 = INT8_MAX;
	volatile int32_t x1171 = -509;
	uint16_t x1172 = UINT16_MAX;
	volatile int32_t t184 = -57028539;

    t184 = ((x1169*x1170)==(x1171+x1172));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1178 = INT16_MIN;
	uint32_t x1179 = 765934043U;
	volatile int16_t x1180 = INT16_MIN;
	int32_t t185 = 4;

    t185 = ((x1177*x1178)==(x1179+x1180));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1181 = INT16_MIN;
	uint16_t x1182 = 11391U;
	uint64_t x1184 = 6LLU;

    t186 = ((x1181*x1182)==(x1183+x1184));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1185 = 288U;
	uint8_t x1186 = UINT8_MAX;
	int32_t x1188 = -3514320;
	int32_t t187 = 16;

    t187 = ((x1185*x1186)==(x1187+x1188));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x1189 = 1U;
	int32_t x1190 = -35324279;
	volatile int32_t t188 = 171329758;

    t188 = ((x1189*x1190)==(x1191+x1192));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x1194 = 1U;
	uint32_t x1195 = 1283U;
	int16_t x1196 = 13;
	volatile int32_t t189 = -281255;

    t189 = ((x1193*x1194)==(x1195+x1196));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1197 = INT8_MIN;
	int8_t x1198 = INT8_MIN;
	uint32_t x1199 = UINT32_MAX;
	volatile int32_t t190 = -2;

    t190 = ((x1197*x1198)==(x1199+x1200));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1201 = 6601945339802LLU;
	uint32_t x1202 = UINT32_MAX;
	int16_t x1203 = INT16_MIN;
	int16_t x1204 = INT16_MIN;
	volatile int32_t t191 = -15082;

    t191 = ((x1201*x1202)==(x1203+x1204));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x1205 = 0;
	uint8_t x1206 = 2U;
	uint8_t x1207 = 1U;
	volatile int32_t t192 = -42;

    t192 = ((x1205*x1206)==(x1207+x1208));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x1218 = 62;
	int64_t x1219 = 381594LL;
	uint8_t x1220 = 2U;
	volatile int32_t t193 = 469;

    t193 = ((x1217*x1218)==(x1219+x1220));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1221 = -1LL;
	volatile uint8_t x1222 = 9U;
	volatile uint32_t x1223 = 439331656U;
	volatile int32_t t194 = 514449;

    t194 = ((x1221*x1222)==(x1223+x1224));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x1229 = INT8_MIN;
	static volatile uint8_t x1230 = UINT8_MAX;
	uint64_t x1231 = UINT64_MAX;
	volatile uint64_t x1232 = UINT64_MAX;

    t195 = ((x1229*x1230)==(x1231+x1232));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1237 = UINT8_MAX;
	int16_t x1238 = INT16_MIN;
	volatile uint16_t x1239 = UINT16_MAX;
	uint64_t x1240 = UINT64_MAX;

    t196 = ((x1237*x1238)==(x1239+x1240));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x1245 = -724;
	int8_t x1248 = INT8_MIN;
	volatile int32_t t197 = -137;

    t197 = ((x1245*x1246)==(x1247+x1248));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint64_t x1249 = UINT64_MAX;
	int32_t x1250 = INT32_MIN;
	int32_t t198 = 38785859;

    t198 = ((x1249*x1250)==(x1251+x1252));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1261 = 1U;
	uint8_t x1263 = 0U;
	volatile int32_t t199 = 14;

    t199 = ((x1261*x1262)==(x1263+x1264));

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

