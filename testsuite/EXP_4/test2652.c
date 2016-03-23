
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

static uint16_t x21 = UINT16_MAX;
uint64_t x26 = UINT64_MAX;
int32_t x27 = INT32_MIN;
static volatile int32_t x28 = -1;
uint8_t x29 = 3U;
int16_t x31 = -119;
static int16_t x32 = INT16_MIN;
int32_t t4 = 1;
int8_t x45 = 0;
volatile int32_t t5 = 29378;
uint32_t x55 = 45969U;
uint8_t x62 = 6U;
int64_t x71 = INT64_MIN;
int8_t x88 = INT8_MIN;
uint8_t x89 = UINT8_MAX;
uint16_t x92 = 2U;
static int32_t t12 = 80998701;
uint64_t x96 = 3105658358945LLU;
int16_t x103 = INT16_MIN;
int32_t x104 = INT32_MIN;
static int64_t x109 = INT64_MAX;
uint16_t x113 = 12U;
int32_t t16 = 1;
static uint8_t x117 = 28U;
int16_t x120 = -1;
static volatile int32_t t17 = -236004;
uint64_t t19 = UINT64_MAX;
volatile int32_t x149 = INT32_MAX;
int8_t x151 = 32;
volatile int32_t t20 = INT32_MAX;
int8_t x165 = INT8_MAX;
int32_t x175 = INT32_MAX;
int64_t x177 = 1257106712762LL;
int32_t t25 = -7831104;
uint32_t x215 = UINT32_MAX;
int32_t t28 = -10180841;
uint8_t x236 = 0U;
volatile uint64_t t29 = 176LLU;
int16_t x240 = INT16_MIN;
int32_t x247 = -1;
int32_t t31 = -3184;
int32_t x267 = 168;
int32_t x282 = INT32_MIN;
int64_t t37 = -1347099498330887LL;
uint32_t x302 = 107490U;
volatile uint16_t x305 = UINT16_MAX;
int32_t x307 = 27;
static volatile int32_t t39 = -11734717;
uint16_t x311 = 6U;
int64_t x323 = INT64_MAX;
static int32_t t42 = -886;
volatile uint8_t x351 = 0U;
int8_t x352 = -45;
volatile int64_t x356 = 735719994650501409LL;
uint64_t x365 = UINT64_MAX;
volatile int32_t t47 = 126;
volatile int32_t t48 = 46;
int32_t t49 = -1565689;
uint32_t x389 = UINT32_MAX;
volatile int8_t x391 = -1;
int8_t x400 = INT8_MAX;
volatile uint32_t t51 = UINT32_MAX;
int16_t x409 = 72;
static volatile int32_t t54 = 1;
volatile uint8_t x417 = UINT8_MAX;
int16_t x420 = -25;
static int32_t t55 = -118980;
uint64_t x425 = 586437586893116709LLU;
static volatile int32_t x427 = -1;
uint64_t t56 = 23209746982130LLU;
uint8_t x471 = 73U;
uint32_t x493 = 0U;
int8_t x499 = -49;
uint8_t x517 = 32U;
int32_t x519 = INT32_MAX;
int32_t x534 = INT32_MIN;
int32_t x560 = -39;
static uint8_t x572 = UINT8_MAX;
volatile uint64_t t76 = 358178075572760LLU;
int8_t x575 = INT8_MAX;
static int32_t t77 = -1478865;
volatile int32_t t80 = 5;
uint16_t x590 = UINT16_MAX;
static volatile uint64_t t81 = UINT64_MAX;
static uint32_t x608 = UINT32_MAX;
uint16_t x616 = 2U;
static volatile int64_t x621 = 460082945441LL;
volatile int32_t t86 = 73;
uint64_t x645 = 132171981LLU;
uint32_t x650 = 6333576U;
volatile uint64_t x652 = 271684802030950664LLU;
static int32_t t89 = 446477653;
int8_t x663 = -1;
uint64_t t90 = 413085LLU;
volatile uint64_t x666 = UINT64_MAX;
volatile int8_t x667 = INT8_MIN;
int16_t x669 = 1;
volatile int64_t t93 = 30LL;
int8_t x681 = 3;
static int8_t x694 = INT8_MIN;
uint64_t x702 = UINT64_MAX;
static volatile int32_t t96 = 387966999;
static int64_t x705 = INT64_MAX;
volatile int64_t t97 = INT64_MAX;
uint32_t t98 = UINT32_MAX;
int64_t x718 = 193103663LL;
volatile int32_t x720 = INT32_MIN;
uint64_t x723 = UINT64_MAX;
uint8_t x725 = 77U;
uint32_t x727 = UINT32_MAX;
static volatile uint16_t x728 = UINT16_MAX;
uint32_t t103 = 801831118U;
int16_t x743 = 307;
int32_t t104 = 20399023;
uint32_t x753 = 21489702U;
uint32_t x756 = UINT32_MAX;
uint64_t x760 = UINT64_MAX;
volatile int8_t x762 = INT8_MIN;
volatile uint32_t t109 = 220369U;
uint8_t x777 = UINT8_MAX;
int16_t x798 = INT16_MIN;
uint16_t x802 = 85U;
volatile int64_t x804 = INT64_MIN;
int64_t x807 = INT64_MIN;
volatile int64_t x823 = -3729498788203178970LL;
volatile int64_t t117 = INT64_MAX;
int8_t x855 = INT8_MIN;
int32_t x873 = INT32_MAX;
uint8_t x886 = 3U;
uint64_t t123 = UINT64_MAX;
uint8_t x889 = 46U;
static int16_t x892 = INT16_MIN;
uint16_t x893 = 11414U;
int32_t x903 = INT32_MAX;
int32_t t127 = 4590;
int32_t x908 = INT32_MIN;
volatile int32_t t129 = -761425294;
static volatile int64_t x930 = -54284477556936412LL;
static int16_t x932 = 395;
int64_t x938 = -1LL;
int32_t x943 = -2164;
uint32_t x945 = 1U;
static int8_t x947 = -2;
int8_t x978 = -1;
static int16_t x980 = -4;
int32_t t139 = -1;
static int8_t x989 = INT8_MAX;
static uint64_t x990 = 1081489096544LLU;
int16_t x993 = 7;
int16_t x1000 = INT16_MIN;
volatile int8_t x1012 = INT8_MIN;
int32_t x1027 = INT32_MIN;
volatile uint32_t t145 = 25309U;
static uint8_t x1049 = 7U;
volatile int32_t t147 = -1708;
int16_t x1060 = INT16_MIN;
volatile int32_t t151 = -1296014;
volatile int16_t x1076 = 28;
int64_t x1079 = INT64_MIN;
int32_t x1080 = INT32_MAX;
uint64_t x1085 = 213LLU;
static int64_t x1091 = INT64_MAX;
volatile uint32_t x1097 = 988326U;
static volatile uint32_t t157 = 28U;
int8_t x1105 = 0;
uint32_t x1106 = UINT32_MAX;
uint32_t x1113 = UINT32_MAX;
volatile int16_t x1115 = -10;
uint8_t x1118 = UINT8_MAX;
int32_t x1120 = INT32_MAX;
uint32_t x1125 = 7U;
volatile uint8_t x1130 = UINT8_MAX;
static int64_t x1131 = INT64_MAX;
volatile uint16_t x1132 = 3624U;
static uint64_t x1133 = 1089674LLU;
uint8_t x1149 = 0U;
uint8_t x1150 = UINT8_MAX;
static volatile int32_t t165 = 3;
static volatile int16_t x1158 = INT16_MIN;
int32_t x1159 = INT32_MIN;
volatile int32_t t166 = 518321925;
int8_t x1164 = -1;
uint64_t t167 = UINT64_MAX;
static int32_t x1167 = INT32_MAX;
int16_t x1169 = 30;
uint32_t x1171 = 11462741U;
uint16_t x1173 = UINT16_MAX;
int64_t x1176 = -32735809405327LL;
static int32_t t170 = -61424550;
static volatile int8_t x1177 = 1;
volatile int16_t x1179 = -1;
int8_t x1191 = INT8_MIN;
static volatile int64_t t172 = -7185801545164LL;
uint64_t x1205 = 1250LLU;
static int64_t x1256 = -1LL;
volatile int64_t x1274 = -2676789213995LL;
volatile uint8_t x1287 = 1U;
static int8_t x1291 = 0;
volatile int32_t t184 = -5463;
uint8_t x1293 = 92U;
static uint64_t x1294 = 33LLU;
volatile int32_t t185 = -23;
uint16_t x1301 = 26640U;
uint16_t x1302 = 26U;
uint8_t x1303 = 75U;
int64_t x1309 = 15163388810LL;
static int8_t x1311 = 1;
static volatile int64_t t188 = 10LL;
int32_t x1316 = 426;
int16_t x1323 = INT16_MIN;
int16_t x1324 = INT16_MAX;
uint32_t t191 = 126081U;
uint16_t x1325 = 8U;
volatile int32_t x1327 = INT32_MAX;
uint64_t x1336 = 180936179915LLU;
uint8_t x1357 = UINT8_MAX;
int8_t x1360 = -1;
volatile int32_t t197 = 0;
static uint64_t x1365 = 12927LLU;


void f0(void) {
    	static int8_t x1 = INT8_MAX;
	int64_t x2 = INT64_MIN;
	static volatile uint16_t x3 = 915U;
	static int8_t x4 = -1;
	static volatile int32_t t0 = 0;

    t0 = (x1<<(x2==(x3^x4)));

    if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x22 = 208U;
	int64_t x23 = INT64_MAX;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t1 = 370435;

    t1 = (x21<<(x22==(x23^x24)));

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x25 = UINT64_MAX;
	volatile uint64_t t2 = UINT64_MAX;

    t2 = (x25<<(x26==(x27^x28)));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x30 = -1LL;
	volatile int32_t t3 = 4728570;

    t3 = (x29<<(x30==(x31^x32)));

    if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x33 = INT16_MAX;
	static uint64_t x34 = UINT64_MAX;
	volatile uint32_t x35 = 2U;
	static uint32_t x36 = 5699816U;

    t4 = (x33<<(x34==(x35^x36)));

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x46 = INT16_MIN;
	int64_t x47 = INT64_MIN;
	static volatile int16_t x48 = INT16_MIN;

    t5 = (x45<<(x46==(x47^x48)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x49 = INT64_MAX;
	uint8_t x50 = 1U;
	volatile uint64_t x51 = 107013252935LLU;
	int16_t x52 = INT16_MIN;
	int64_t t6 = INT64_MAX;

    t6 = (x49<<(x50==(x51^x52)));

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x53 = 89U;
	volatile uint16_t x54 = UINT16_MAX;
	int32_t x56 = INT32_MAX;
	int32_t t7 = -1;

    t7 = (x53<<(x54==(x55^x56)));

    if (t7 != 89) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x61 = UINT64_MAX;
	static int64_t x63 = INT64_MIN;
	volatile int8_t x64 = INT8_MIN;
	static volatile uint64_t t8 = UINT64_MAX;

    t8 = (x61<<(x62==(x63^x64)));

    if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x69 = 1742029LLU;
	volatile int8_t x70 = -25;
	static int64_t x72 = -1LL;
	static uint64_t t9 = 193478747603145LLU;

    t9 = (x69<<(x70==(x71^x72)));

    if (t9 != 1742029LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x81 = 900;
	int32_t x82 = 1;
	uint16_t x83 = 13398U;
	int64_t x84 = -29532LL;
	volatile int32_t t10 = -6276;

    t10 = (x81<<(x82==(x83^x84)));

    if (t10 != 900) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x85 = INT64_MAX;
	int16_t x86 = -1;
	int64_t x87 = -1LL;
	volatile int64_t t11 = INT64_MAX;

    t11 = (x85<<(x86==(x87^x88)));

    if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x90 = 48110456537559LLU;
	int16_t x91 = INT16_MAX;

    t12 = (x89<<(x90==(x91^x92)));

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x93 = UINT64_MAX;
	int32_t x94 = -1;
	int8_t x95 = INT8_MAX;
	volatile uint64_t t13 = UINT64_MAX;

    t13 = (x93<<(x94==(x95^x96)));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x101 = INT16_MAX;
	uint32_t x102 = UINT32_MAX;
	static volatile int32_t t14 = 2;

    t14 = (x101<<(x102==(x103^x104)));

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x110 = INT8_MIN;
	int32_t x111 = 1928;
	uint32_t x112 = UINT32_MAX;
	volatile int64_t t15 = INT64_MAX;

    t15 = (x109<<(x110==(x111^x112)));

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x114 = 2780597U;
	uint8_t x115 = 0U;
	static int64_t x116 = INT64_MIN;

    t16 = (x113<<(x114==(x115^x116)));

    if (t16 != 12) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x118 = 4803938776140697LL;
	uint8_t x119 = 55U;

    t17 = (x117<<(x118==(x119^x120)));

    if (t17 != 28) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x133 = 50U;
	uint8_t x134 = 4U;
	int32_t x135 = INT32_MIN;
	uint64_t x136 = UINT64_MAX;
	static int32_t t18 = -1;

    t18 = (x133<<(x134==(x135^x136)));

    if (t18 != 50) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x141 = UINT64_MAX;
	static int64_t x142 = -128106715LL;
	volatile int32_t x143 = INT32_MAX;
	int32_t x144 = INT32_MAX;

    t19 = (x141<<(x142==(x143^x144)));

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x150 = -1;
	volatile int32_t x152 = INT32_MIN;

    t20 = (x149<<(x150==(x151^x152)));

    if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x157 = INT16_MAX;
	uint16_t x158 = 837U;
	uint64_t x159 = UINT64_MAX;
	int8_t x160 = INT8_MIN;
	int32_t t21 = 2;

    t21 = (x157<<(x158==(x159^x160)));

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x166 = INT8_MIN;
	int8_t x167 = -16;
	uint8_t x168 = UINT8_MAX;
	int32_t t22 = -21203;

    t22 = (x165<<(x166==(x167^x168)));

    if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x173 = INT32_MAX;
	uint8_t x174 = 0U;
	static uint64_t x176 = 51637293LLU;
	int32_t t23 = INT32_MAX;

    t23 = (x173<<(x174==(x175^x176)));

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x178 = 130328458LLU;
	int16_t x179 = 1;
	uint8_t x180 = UINT8_MAX;
	int64_t t24 = 2057698LL;

    t24 = (x177<<(x178==(x179^x180)));

    if (t24 != 1257106712762LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x181 = INT16_MAX;
	volatile int8_t x182 = -1;
	volatile uint32_t x183 = UINT32_MAX;
	volatile uint8_t x184 = UINT8_MAX;

    t25 = (x181<<(x182==(x183^x184)));

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x193 = UINT8_MAX;
	uint16_t x194 = UINT16_MAX;
	uint16_t x195 = 7U;
	int64_t x196 = 1525042LL;
	int32_t t26 = 17233911;

    t26 = (x193<<(x194==(x195^x196)));

    if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x205 = 369329;
	volatile int32_t x206 = -1;
	volatile int64_t x207 = -1LL;
	uint32_t x208 = UINT32_MAX;
	int32_t t27 = -1;

    t27 = (x205<<(x206==(x207^x208)));

    if (t27 != 369329) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x213 = 14011;
	int16_t x214 = INT16_MIN;
	uint64_t x216 = 12456645052347LLU;

    t28 = (x213<<(x214==(x215^x216)));

    if (t28 != 14011) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x233 = 940165LLU;
	uint64_t x234 = 129934939519083LLU;
	uint32_t x235 = 126184663U;

    t29 = (x233<<(x234==(x235^x236)));

    if (t29 != 940165LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x237 = INT16_MAX;
	int32_t x238 = 4;
	static int64_t x239 = INT64_MAX;
	int32_t t30 = 0;

    t30 = (x237<<(x238==(x239^x240)));

    if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x245 = UINT16_MAX;
	int8_t x246 = -1;
	static uint16_t x248 = 0U;

    t31 = (x245<<(x246==(x247^x248)));

    if (t31 != 131070) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x257 = 202U;
	volatile int64_t x258 = INT64_MAX;
	int8_t x259 = INT8_MIN;
	uint16_t x260 = 189U;
	uint32_t t32 = 232206U;

    t32 = (x257<<(x258==(x259^x260)));

    if (t32 != 202U) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x261 = 0U;
	int16_t x262 = INT16_MAX;
	uint8_t x263 = UINT8_MAX;
	int8_t x264 = -2;
	volatile int32_t t33 = 44315;

    t33 = (x261<<(x262==(x263^x264)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x265 = INT64_MAX;
	int8_t x266 = INT8_MIN;
	volatile int64_t x268 = 3440LL;
	int64_t t34 = INT64_MAX;

    t34 = (x265<<(x266==(x267^x268)));

    if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x269 = 0;
	int16_t x270 = -290;
	uint64_t x271 = UINT64_MAX;
	uint8_t x272 = 0U;
	int32_t t35 = -206;

    t35 = (x269<<(x270==(x271^x272)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x281 = 1;
	uint8_t x283 = 10U;
	volatile int64_t x284 = INT64_MAX;
	volatile int32_t t36 = 5;

    t36 = (x281<<(x282==(x283^x284)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x289 = 3713986LL;
	int16_t x290 = -1;
	volatile int8_t x291 = -9;
	int64_t x292 = -1LL;

    t37 = (x289<<(x290==(x291^x292)));

    if (t37 != 3713986LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x301 = 2LLU;
	int16_t x303 = -47;
	volatile int16_t x304 = -1;
	volatile uint64_t t38 = 216660469576809843LLU;

    t38 = (x301<<(x302==(x303^x304)));

    if (t38 != 2LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x306 = INT64_MIN;
	static volatile int16_t x308 = INT16_MAX;

    t39 = (x305<<(x306==(x307^x308)));

    if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x309 = 7995867;
	int64_t x310 = -1LL;
	int64_t x312 = -1LL;
	int32_t t40 = -1535;

    t40 = (x309<<(x310==(x311^x312)));

    if (t40 != 7995867) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x313 = 126U;
	int32_t x314 = 1064;
	int32_t x315 = INT32_MAX;
	int16_t x316 = -11;
	volatile int32_t t41 = 2626;

    t41 = (x313<<(x314==(x315^x316)));

    if (t41 != 126) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x321 = 78U;
	int64_t x322 = INT64_MIN;
	uint8_t x324 = 3U;

    t42 = (x321<<(x322==(x323^x324)));

    if (t42 != 78) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x329 = 171359637676111722LLU;
	uint16_t x330 = 916U;
	int64_t x331 = 12323026938798000LL;
	uint16_t x332 = UINT16_MAX;
	volatile uint64_t t43 = 1684751292158LLU;

    t43 = (x329<<(x330==(x331^x332)));

    if (t43 != 171359637676111722LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x349 = 86U;
	static int64_t x350 = INT64_MAX;
	int32_t t44 = -4;

    t44 = (x349<<(x350==(x351^x352)));

    if (t44 != 86) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x353 = INT16_MAX;
	static uint32_t x354 = 26416U;
	int32_t x355 = -24110;
	volatile int32_t t45 = 836311080;

    t45 = (x353<<(x354==(x355^x356)));

    if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x366 = 2U;
	static int32_t x367 = -250441997;
	static int8_t x368 = INT8_MIN;
	uint64_t t46 = UINT64_MAX;

    t46 = (x365<<(x366==(x367^x368)));

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x369 = 3;
	int8_t x370 = INT8_MIN;
	int8_t x371 = 27;
	int64_t x372 = -782882453LL;

    t47 = (x369<<(x370==(x371^x372)));

    if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x373 = 1;
	int16_t x374 = 15622;
	volatile int32_t x375 = -1;
	int64_t x376 = 302529139LL;

    t48 = (x373<<(x374==(x375^x376)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x381 = 7;
	int64_t x382 = -555772049LL;
	static uint64_t x383 = 723517096728990LLU;
	static uint16_t x384 = UINT16_MAX;

    t49 = (x381<<(x382==(x383^x384)));

    if (t49 != 7) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x390 = 8654LLU;
	volatile int16_t x392 = INT16_MIN;
	uint32_t t50 = UINT32_MAX;

    t50 = (x389<<(x390==(x391^x392)));

    if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x397 = UINT32_MAX;
	int8_t x398 = 1;
	int32_t x399 = INT32_MAX;

    t51 = (x397<<(x398==(x399^x400)));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x405 = UINT16_MAX;
	static int64_t x406 = 13785094718991LL;
	static uint64_t x407 = UINT64_MAX;
	volatile int16_t x408 = INT16_MIN;
	int32_t t52 = -56328;

    t52 = (x405<<(x406==(x407^x408)));

    if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x410 = 991291334105796LLU;
	int32_t x411 = INT32_MIN;
	static volatile int32_t x412 = INT32_MIN;
	int32_t t53 = -4;

    t53 = (x409<<(x410==(x411^x412)));

    if (t53 != 72) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x413 = 90U;
	volatile int32_t x414 = -1;
	uint32_t x415 = 75305U;
	volatile int8_t x416 = -1;

    t54 = (x413<<(x414==(x415^x416)));

    if (t54 != 90) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x418 = 20;
	uint8_t x419 = 1U;

    t55 = (x417<<(x418==(x419^x420)));

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x426 = -1005443080;
	int32_t x428 = 93463;

    t56 = (x425<<(x426==(x427^x428)));

    if (t56 != 586437586893116709LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x429 = UINT16_MAX;
	static int64_t x430 = -186LL;
	int64_t x431 = INT64_MIN;
	static int64_t x432 = -1LL;
	volatile int32_t t57 = 5299;

    t57 = (x429<<(x430==(x431^x432)));

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x437 = 159959LLU;
	int16_t x438 = INT16_MIN;
	static uint16_t x439 = UINT16_MAX;
	static volatile uint32_t x440 = UINT32_MAX;
	uint64_t t58 = 202023049LLU;

    t58 = (x437<<(x438==(x439^x440)));

    if (t58 != 159959LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x441 = INT8_MAX;
	volatile int8_t x442 = 0;
	int64_t x443 = -1LL;
	int64_t x444 = -873435896LL;
	volatile int32_t t59 = -89551;

    t59 = (x441<<(x442==(x443^x444)));

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x453 = UINT8_MAX;
	int16_t x454 = -192;
	volatile uint16_t x455 = UINT16_MAX;
	volatile uint32_t x456 = UINT32_MAX;
	volatile int32_t t60 = 1718;

    t60 = (x453<<(x454==(x455^x456)));

    if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x465 = 56U;
	int8_t x466 = INT8_MIN;
	static int64_t x467 = -23430674LL;
	static int8_t x468 = -1;
	int32_t t61 = -40530002;

    t61 = (x465<<(x466==(x467^x468)));

    if (t61 != 56) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x469 = 18U;
	int64_t x470 = -1LL;
	uint64_t x472 = 2116756527674LLU;
	volatile int32_t t62 = 1108478;

    t62 = (x469<<(x470==(x471^x472)));

    if (t62 != 18) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x473 = 44U;
	int32_t x474 = INT32_MIN;
	volatile int16_t x475 = INT16_MIN;
	int8_t x476 = INT8_MAX;
	volatile int32_t t63 = -710;

    t63 = (x473<<(x474==(x475^x476)));

    if (t63 != 44) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x477 = 198;
	static int16_t x478 = INT16_MAX;
	uint32_t x479 = 58993246U;
	volatile int64_t x480 = INT64_MIN;
	int32_t t64 = 0;

    t64 = (x477<<(x478==(x479^x480)));

    if (t64 != 198) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x494 = -19021;
	int8_t x495 = INT8_MIN;
	static volatile int16_t x496 = INT16_MIN;
	uint32_t t65 = 55741U;

    t65 = (x493<<(x494==(x495^x496)));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x497 = 32U;
	static volatile int64_t x498 = -1LL;
	int8_t x500 = 45;
	volatile int32_t t66 = -550492507;

    t66 = (x497<<(x498==(x499^x500)));

    if (t66 != 32) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x501 = 0U;
	static volatile int64_t x502 = -262LL;
	uint16_t x503 = UINT16_MAX;
	static int32_t x504 = -1;
	int32_t t67 = -6287;

    t67 = (x501<<(x502==(x503^x504)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x505 = 71U;
	int8_t x506 = -1;
	static int32_t x507 = -1;
	static uint16_t x508 = 1934U;
	static int32_t t68 = -1;

    t68 = (x505<<(x506==(x507^x508)));

    if (t68 != 71) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x518 = INT32_MIN;
	static int16_t x520 = 4;
	static volatile int32_t t69 = 42469;

    t69 = (x517<<(x518==(x519^x520)));

    if (t69 != 32) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x521 = 1732U;
	int16_t x522 = -1;
	static uint32_t x523 = 2245263U;
	uint64_t x524 = 70786672575775206LLU;
	volatile int32_t t70 = 20;

    t70 = (x521<<(x522==(x523^x524)));

    if (t70 != 1732) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x529 = INT16_MAX;
	uint32_t x530 = 238U;
	uint8_t x531 = 83U;
	int64_t x532 = INT64_MAX;
	int32_t t71 = -988;

    t71 = (x529<<(x530==(x531^x532)));

    if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x533 = 30;
	uint32_t x535 = UINT32_MAX;
	int64_t x536 = INT64_MAX;
	volatile int32_t t72 = 579;

    t72 = (x533<<(x534==(x535^x536)));

    if (t72 != 30) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x545 = INT64_MAX;
	int16_t x546 = INT16_MIN;
	int32_t x547 = INT32_MIN;
	uint16_t x548 = 29U;
	volatile int64_t t73 = INT64_MAX;

    t73 = (x545<<(x546==(x547^x548)));

    if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x557 = 15U;
	static int32_t x558 = -1;
	static volatile int8_t x559 = INT8_MAX;
	static volatile int32_t t74 = 507971;

    t74 = (x557<<(x558==(x559^x560)));

    if (t74 != 15) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x565 = 23581793962806136LL;
	uint16_t x566 = UINT16_MAX;
	volatile int16_t x567 = INT16_MAX;
	int32_t x568 = -3790;
	volatile int64_t t75 = -26LL;

    t75 = (x565<<(x566==(x567^x568)));

    if (t75 != 23581793962806136LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x569 = 1280LLU;
	uint16_t x570 = 32690U;
	static int8_t x571 = INT8_MIN;

    t76 = (x569<<(x570==(x571^x572)));

    if (t76 != 1280LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x573 = INT16_MAX;
	static int32_t x574 = INT32_MIN;
	int16_t x576 = INT16_MAX;

    t77 = (x573<<(x574==(x575^x576)));

    if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x577 = INT64_MAX;
	int64_t x578 = INT64_MIN;
	int8_t x579 = -3;
	static uint64_t x580 = UINT64_MAX;
	volatile int64_t t78 = INT64_MAX;

    t78 = (x577<<(x578==(x579^x580)));

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x581 = 15295836;
	int64_t x582 = -1LL;
	int16_t x583 = INT16_MAX;
	uint8_t x584 = 2U;
	int32_t t79 = -743234;

    t79 = (x581<<(x582==(x583^x584)));

    if (t79 != 15295836) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int8_t x585 = INT8_MAX;
	volatile int8_t x586 = INT8_MAX;
	int32_t x587 = INT32_MIN;
	uint8_t x588 = UINT8_MAX;

    t80 = (x585<<(x586==(x587^x588)));

    if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x589 = UINT64_MAX;
	int8_t x591 = -1;
	int16_t x592 = INT16_MAX;

    t81 = (x589<<(x590==(x591^x592)));

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x605 = 0U;
	int32_t x606 = INT32_MIN;
	int8_t x607 = -1;
	int32_t t82 = 29198583;

    t82 = (x605<<(x606==(x607^x608)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x613 = INT8_MAX;
	int8_t x614 = INT8_MIN;
	int64_t x615 = 1065LL;
	volatile int32_t t83 = 1;

    t83 = (x613<<(x614==(x615^x616)));

    if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x622 = INT32_MIN;
	volatile uint8_t x623 = UINT8_MAX;
	uint8_t x624 = 3U;
	int64_t t84 = -6684406LL;

    t84 = (x621<<(x622==(x623^x624)));

    if (t84 != 460082945441LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x633 = UINT32_MAX;
	int8_t x634 = INT8_MIN;
	volatile int8_t x635 = INT8_MIN;
	static uint64_t x636 = 75337833423LLU;
	static uint32_t t85 = UINT32_MAX;

    t85 = (x633<<(x634==(x635^x636)));

    if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x641 = INT16_MAX;
	uint8_t x642 = 3U;
	int8_t x643 = INT8_MIN;
	uint32_t x644 = 592075U;

    t86 = (x641<<(x642==(x643^x644)));

    if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x646 = INT16_MIN;
	int8_t x647 = INT8_MIN;
	uint16_t x648 = UINT16_MAX;
	volatile uint64_t t87 = 6048441054LLU;

    t87 = (x645<<(x646==(x647^x648)));

    if (t87 != 132171981LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x649 = INT64_MAX;
	int16_t x651 = INT16_MAX;
	int64_t t88 = INT64_MAX;

    t88 = (x649<<(x650==(x651^x652)));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x657 = INT16_MAX;
	int8_t x658 = -1;
	static volatile uint16_t x659 = UINT16_MAX;
	int8_t x660 = -1;

    t89 = (x657<<(x658==(x659^x660)));

    if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x661 = 4196LLU;
	int16_t x662 = INT16_MAX;
	int64_t x664 = -1LL;

    t90 = (x661<<(x662==(x663^x664)));

    if (t90 != 4196LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x665 = INT16_MAX;
	int8_t x668 = INT8_MIN;
	int32_t t91 = 28197196;

    t91 = (x665<<(x666==(x667^x668)));

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x670 = 622718;
	static uint64_t x671 = UINT64_MAX;
	static int8_t x672 = INT8_MAX;
	static int32_t t92 = -214809;

    t92 = (x669<<(x670==(x671^x672)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x673 = 3145442313256159070LL;
	uint32_t x674 = 1117363U;
	uint64_t x675 = UINT64_MAX;
	volatile int8_t x676 = -48;

    t93 = (x673<<(x674==(x675^x676)));

    if (t93 != 3145442313256159070LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x682 = 64560U;
	static uint32_t x683 = UINT32_MAX;
	static int64_t x684 = INT64_MIN;
	volatile int32_t t94 = 49523698;

    t94 = (x681<<(x682==(x683^x684)));

    if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x693 = 0;
	uint32_t x695 = 3408U;
	int8_t x696 = -1;
	static int32_t t95 = -1051683744;

    t95 = (x693<<(x694==(x695^x696)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x701 = INT16_MAX;
	int32_t x703 = INT32_MIN;
	volatile int64_t x704 = 47579886375787LL;

    t96 = (x701<<(x702==(x703^x704)));

    if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x706 = -1;
	static uint64_t x707 = 678378LLU;
	static int8_t x708 = 1;

    t97 = (x705<<(x706==(x707^x708)));

    if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x713 = UINT32_MAX;
	static int64_t x714 = INT64_MIN;
	int32_t x715 = INT32_MAX;
	static int64_t x716 = INT64_MAX;

    t98 = (x713<<(x714==(x715^x716)));

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x717 = INT32_MAX;
	int8_t x719 = -1;
	volatile int32_t t99 = INT32_MAX;

    t99 = (x717<<(x718==(x719^x720)));

    if (t99 != INT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x721 = 36;
	volatile int64_t x722 = -240560313LL;
	static uint32_t x724 = 120958361U;
	int32_t t100 = -27775;

    t100 = (x721<<(x722==(x723^x724)));

    if (t100 != 36) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x726 = -1;
	volatile int32_t t101 = -332101;

    t101 = (x725<<(x726==(x727^x728)));

    if (t101 != 77) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x729 = 127U;
	int8_t x730 = -1;
	uint8_t x731 = UINT8_MAX;
	int8_t x732 = INT8_MIN;
	volatile int32_t t102 = -7;

    t102 = (x729<<(x730==(x731^x732)));

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x733 = 1440308U;
	volatile int64_t x734 = INT64_MIN;
	static uint8_t x735 = 3U;
	int16_t x736 = INT16_MIN;

    t103 = (x733<<(x734==(x735^x736)));

    if (t103 != 1440308U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x741 = 1U;
	static int16_t x742 = INT16_MIN;
	int16_t x744 = INT16_MIN;

    t104 = (x741<<(x742==(x743^x744)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x745 = UINT64_MAX;
	int8_t x746 = -1;
	int8_t x747 = INT8_MAX;
	volatile int16_t x748 = -3;
	uint64_t t105 = UINT64_MAX;

    t105 = (x745<<(x746==(x747^x748)));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x749 = 2;
	volatile uint16_t x750 = 1795U;
	int32_t x751 = 490219;
	volatile uint8_t x752 = 3U;
	volatile int32_t t106 = -520;

    t106 = (x749<<(x750==(x751^x752)));

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x754 = 1LLU;
	int8_t x755 = -1;
	volatile uint32_t t107 = 979196U;

    t107 = (x753<<(x754==(x755^x756)));

    if (t107 != 21489702U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x757 = 1191U;
	int16_t x758 = INT16_MIN;
	int16_t x759 = 13527;
	static int32_t t108 = -42;

    t108 = (x757<<(x758==(x759^x760)));

    if (t108 != 1191) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x761 = 1506642U;
	static int16_t x763 = -7806;
	int64_t x764 = INT64_MIN;

    t109 = (x761<<(x762==(x763^x764)));

    if (t109 != 1506642U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x773 = 4U;
	int8_t x774 = -1;
	int16_t x775 = INT16_MIN;
	int8_t x776 = 0;
	volatile int32_t t110 = 48;

    t110 = (x773<<(x774==(x775^x776)));

    if (t110 != 4) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x778 = -1;
	int16_t x779 = -1;
	volatile uint8_t x780 = UINT8_MAX;
	volatile int32_t t111 = 1980151;

    t111 = (x777<<(x778==(x779^x780)));

    if (t111 != 255) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x797 = 729343LL;
	uint8_t x799 = 11U;
	int32_t x800 = 623852;
	volatile int64_t t112 = 486622056LL;

    t112 = (x797<<(x798==(x799^x800)));

    if (t112 != 729343LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x801 = 1U;
	int32_t x803 = INT32_MIN;
	volatile int32_t t113 = -1;

    t113 = (x801<<(x802==(x803^x804)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x805 = UINT16_MAX;
	uint32_t x806 = 2U;
	static int16_t x808 = -1;
	int32_t t114 = 439461603;

    t114 = (x805<<(x806==(x807^x808)));

    if (t114 != 65535) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x813 = 13U;
	uint8_t x814 = UINT8_MAX;
	uint64_t x815 = 4973944582LLU;
	volatile int64_t x816 = INT64_MIN;
	volatile int32_t t115 = -6;

    t115 = (x813<<(x814==(x815^x816)));

    if (t115 != 13) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x821 = 0;
	uint8_t x822 = 75U;
	int8_t x824 = INT8_MIN;
	static int32_t t116 = -737773837;

    t116 = (x821<<(x822==(x823^x824)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x829 = INT64_MAX;
	uint64_t x830 = UINT64_MAX;
	uint32_t x831 = 20302904U;
	uint64_t x832 = 135204804273550488LLU;

    t117 = (x829<<(x830==(x831^x832)));

    if (t117 != INT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x853 = 157855U;
	int8_t x854 = 24;
	int16_t x856 = INT16_MIN;
	volatile uint32_t t118 = 51372U;

    t118 = (x853<<(x854==(x855^x856)));

    if (t118 != 157855U) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x857 = 20U;
	int16_t x858 = 2535;
	static int64_t x859 = INT64_MAX;
	static int64_t x860 = -221024055512912252LL;
	volatile int32_t t119 = 24294;

    t119 = (x857<<(x858==(x859^x860)));

    if (t119 != 20) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x869 = UINT64_MAX;
	static uint8_t x870 = 33U;
	static uint64_t x871 = 727635081354LLU;
	uint16_t x872 = UINT16_MAX;
	uint64_t t120 = UINT64_MAX;

    t120 = (x869<<(x870==(x871^x872)));

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x874 = -1;
	int64_t x875 = INT64_MAX;
	uint32_t x876 = UINT32_MAX;
	volatile int32_t t121 = INT32_MAX;

    t121 = (x873<<(x874==(x875^x876)));

    if (t121 != INT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x877 = UINT32_MAX;
	static volatile int8_t x878 = INT8_MIN;
	int32_t x879 = 24654;
	static uint64_t x880 = 24888938LLU;
	uint32_t t122 = UINT32_MAX;

    t122 = (x877<<(x878==(x879^x880)));

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x885 = UINT64_MAX;
	static int32_t x887 = -1;
	int8_t x888 = -1;

    t123 = (x885<<(x886==(x887^x888)));

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x890 = INT64_MIN;
	uint64_t x891 = 104365569691750LLU;
	volatile int32_t t124 = -5396;

    t124 = (x889<<(x890==(x891^x892)));

    if (t124 != 46) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x894 = 10517245LLU;
	volatile int64_t x895 = -2280807455875252554LL;
	static int64_t x896 = 82797831LL;
	static int32_t t125 = 13966;

    t125 = (x893<<(x894==(x895^x896)));

    if (t125 != 11414) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x897 = UINT32_MAX;
	volatile int8_t x898 = 1;
	int64_t x899 = -36693016LL;
	int8_t x900 = 18;
	static volatile uint32_t t126 = UINT32_MAX;

    t126 = (x897<<(x898==(x899^x900)));

    if (t126 != UINT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x901 = INT16_MAX;
	volatile uint64_t x902 = 1722696LLU;
	int32_t x904 = -249403111;

    t127 = (x901<<(x902==(x903^x904)));

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x905 = UINT16_MAX;
	volatile int8_t x906 = INT8_MIN;
	uint64_t x907 = 3248419812188728951LLU;
	int32_t t128 = 8;

    t128 = (x905<<(x906==(x907^x908)));

    if (t128 != 65535) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x913 = 5U;
	static uint64_t x914 = UINT64_MAX;
	static int8_t x915 = INT8_MIN;
	volatile int16_t x916 = INT16_MIN;

    t129 = (x913<<(x914==(x915^x916)));

    if (t129 != 5) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x925 = 0U;
	uint16_t x926 = 5U;
	static volatile uint8_t x927 = 6U;
	volatile int8_t x928 = INT8_MAX;
	volatile int32_t t130 = 1530561;

    t130 = (x925<<(x926==(x927^x928)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x929 = INT16_MAX;
	volatile int16_t x931 = -1;
	static volatile int32_t t131 = -287168005;

    t131 = (x929<<(x930==(x931^x932)));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x937 = UINT16_MAX;
	volatile int32_t x939 = INT32_MIN;
	int16_t x940 = -7171;
	volatile int32_t t132 = -10972;

    t132 = (x937<<(x938==(x939^x940)));

    if (t132 != 65535) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x941 = UINT64_MAX;
	uint32_t x942 = 14372728U;
	volatile int16_t x944 = -1;
	volatile uint64_t t133 = UINT64_MAX;

    t133 = (x941<<(x942==(x943^x944)));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x946 = UINT8_MAX;
	int16_t x948 = 8;
	uint32_t t134 = 8777U;

    t134 = (x945<<(x946==(x947^x948)));

    if (t134 != 1U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x953 = 19927U;
	volatile int32_t x954 = 1030655989;
	int64_t x955 = INT64_MIN;
	uint64_t x956 = 2142128204339LLU;
	volatile int32_t t135 = 391;

    t135 = (x953<<(x954==(x955^x956)));

    if (t135 != 19927) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x957 = 12;
	volatile int32_t x958 = -6009;
	int8_t x959 = INT8_MIN;
	static volatile int64_t x960 = -1LL;
	volatile int32_t t136 = -93067988;

    t136 = (x957<<(x958==(x959^x960)));

    if (t136 != 12) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x965 = 9U;
	uint32_t x966 = 1814729143U;
	static int16_t x967 = INT16_MAX;
	static uint8_t x968 = 0U;
	int32_t t137 = -55270;

    t137 = (x965<<(x966==(x967^x968)));

    if (t137 != 9) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int8_t x973 = 3;
	uint32_t x974 = 666U;
	int64_t x975 = 56969197835087948LL;
	static uint64_t x976 = 13398LLU;
	int32_t t138 = -401881;

    t138 = (x973<<(x974==(x975^x976)));

    if (t138 != 3) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x977 = 14U;
	uint32_t x979 = UINT32_MAX;

    t139 = (x977<<(x978==(x979^x980)));

    if (t139 != 14) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x991 = 4U;
	volatile int16_t x992 = INT16_MIN;
	static volatile int32_t t140 = 5304;

    t140 = (x989<<(x990==(x991^x992)));

    if (t140 != 127) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x994 = INT8_MAX;
	volatile int32_t x995 = 92345;
	int32_t x996 = INT32_MAX;
	static int32_t t141 = 26;

    t141 = (x993<<(x994==(x995^x996)));

    if (t141 != 7) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x997 = 1;
	int16_t x998 = 3;
	volatile uint32_t x999 = 21633U;
	static int32_t t142 = -97211599;

    t142 = (x997<<(x998==(x999^x1000)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x1009 = UINT64_MAX;
	volatile int32_t x1010 = -51;
	int32_t x1011 = INT32_MAX;
	volatile uint64_t t143 = UINT64_MAX;

    t143 = (x1009<<(x1010==(x1011^x1012)));

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1013 = UINT8_MAX;
	int16_t x1014 = INT16_MIN;
	uint8_t x1015 = 4U;
	uint64_t x1016 = 71311216LLU;
	static volatile int32_t t144 = 36111;

    t144 = (x1013<<(x1014==(x1015^x1016)));

    if (t144 != 255) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1025 = 830323358U;
	int8_t x1026 = INT8_MIN;
	static int32_t x1028 = 1;

    t145 = (x1025<<(x1026==(x1027^x1028)));

    if (t145 != 830323358U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x1045 = 9U;
	uint8_t x1046 = 95U;
	int64_t x1047 = INT64_MIN;
	int8_t x1048 = INT8_MIN;
	uint32_t t146 = 1U;

    t146 = (x1045<<(x1046==(x1047^x1048)));

    if (t146 != 9U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1050 = INT16_MIN;
	int8_t x1051 = INT8_MIN;
	int8_t x1052 = INT8_MAX;

    t147 = (x1049<<(x1050==(x1051^x1052)));

    if (t147 != 7) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x1053 = 1;
	int64_t x1054 = INT64_MAX;
	int16_t x1055 = INT16_MAX;
	static int8_t x1056 = -15;
	static volatile int32_t t148 = -51;

    t148 = (x1053<<(x1054==(x1055^x1056)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x1057 = 65040LLU;
	static int64_t x1058 = INT64_MAX;
	uint64_t x1059 = 48272956472LLU;
	volatile uint64_t t149 = 165582LLU;

    t149 = (x1057<<(x1058==(x1059^x1060)));

    if (t149 != 65040LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1065 = 0LL;
	volatile uint16_t x1066 = UINT16_MAX;
	volatile int8_t x1067 = -1;
	int64_t x1068 = 21159711LL;
	int64_t t150 = 255241593638LL;

    t150 = (x1065<<(x1066==(x1067^x1068)));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x1069 = 0U;
	uint64_t x1070 = UINT64_MAX;
	int16_t x1071 = -4;
	int8_t x1072 = INT8_MIN;

    t151 = (x1069<<(x1070==(x1071^x1072)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x1073 = UINT16_MAX;
	int16_t x1074 = INT16_MIN;
	int32_t x1075 = INT32_MIN;
	volatile int32_t t152 = -180198;

    t152 = (x1073<<(x1074==(x1075^x1076)));

    if (t152 != 65535) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x1077 = 60;
	int32_t x1078 = 118;
	volatile int32_t t153 = -582536790;

    t153 = (x1077<<(x1078==(x1079^x1080)));

    if (t153 != 60) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1086 = -1;
	uint8_t x1087 = UINT8_MAX;
	uint16_t x1088 = 153U;
	static uint64_t t154 = 2457237171387LLU;

    t154 = (x1085<<(x1086==(x1087^x1088)));

    if (t154 != 213LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1089 = 538864634556LLU;
	int16_t x1090 = INT16_MAX;
	int16_t x1092 = INT16_MIN;
	uint64_t t155 = 250LLU;

    t155 = (x1089<<(x1090==(x1091^x1092)));

    if (t155 != 538864634556LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x1093 = 78U;
	uint32_t x1094 = 142U;
	uint8_t x1095 = 45U;
	int32_t x1096 = INT32_MAX;
	int32_t t156 = 1743;

    t156 = (x1093<<(x1094==(x1095^x1096)));

    if (t156 != 78) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x1098 = 17963366358209LLU;
	volatile int16_t x1099 = -47;
	int8_t x1100 = INT8_MIN;

    t157 = (x1097<<(x1098==(x1099^x1100)));

    if (t157 != 988326U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1107 = -4857;
	uint16_t x1108 = 290U;
	volatile int32_t t158 = -13178706;

    t158 = (x1105<<(x1106==(x1107^x1108)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1114 = 3132;
	volatile int64_t x1116 = INT64_MIN;
	volatile uint32_t t159 = UINT32_MAX;

    t159 = (x1113<<(x1114==(x1115^x1116)));

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1117 = UINT8_MAX;
	int64_t x1119 = INT64_MIN;
	int32_t t160 = 64540;

    t160 = (x1117<<(x1118==(x1119^x1120)));

    if (t160 != 255) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1121 = 7081;
	int64_t x1122 = INT64_MAX;
	uint16_t x1123 = 32628U;
	int64_t x1124 = -1LL;
	volatile int32_t t161 = -128;

    t161 = (x1121<<(x1122==(x1123^x1124)));

    if (t161 != 7081) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x1126 = UINT32_MAX;
	volatile int16_t x1127 = INT16_MIN;
	int8_t x1128 = INT8_MIN;
	volatile uint32_t t162 = 450U;

    t162 = (x1125<<(x1126==(x1127^x1128)));

    if (t162 != 7U) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x1129 = UINT8_MAX;
	int32_t t163 = -117417;

    t163 = (x1129<<(x1130==(x1131^x1132)));

    if (t163 != 255) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1134 = INT16_MIN;
	uint64_t x1135 = UINT64_MAX;
	uint64_t x1136 = 1203286729942658LLU;
	volatile uint64_t t164 = 9LLU;

    t164 = (x1133<<(x1134==(x1135^x1136)));

    if (t164 != 1089674LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1151 = INT8_MIN;
	int32_t x1152 = INT32_MAX;

    t165 = (x1149<<(x1150==(x1151^x1152)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x1157 = UINT16_MAX;
	int64_t x1160 = INT64_MIN;

    t166 = (x1157<<(x1158==(x1159^x1160)));

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x1161 = UINT64_MAX;
	int8_t x1162 = INT8_MAX;
	int32_t x1163 = INT32_MIN;

    t167 = (x1161<<(x1162==(x1163^x1164)));

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1165 = 215592303501LLU;
	int8_t x1166 = INT8_MIN;
	uint16_t x1168 = UINT16_MAX;
	uint64_t t168 = 476LLU;

    t168 = (x1165<<(x1166==(x1167^x1168)));

    if (t168 != 215592303501LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x1170 = INT32_MIN;
	int32_t x1172 = INT32_MIN;
	volatile int32_t t169 = 1;

    t169 = (x1169<<(x1170==(x1171^x1172)));

    if (t169 != 30) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1174 = -158;
	int16_t x1175 = 438;

    t170 = (x1173<<(x1174==(x1175^x1176)));

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1178 = 1172LLU;
	int64_t x1180 = 26884836LL;
	int32_t t171 = 350092;

    t171 = (x1177<<(x1178==(x1179^x1180)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x1189 = 1LL;
	int64_t x1190 = INT64_MIN;
	uint8_t x1192 = 3U;

    t172 = (x1189<<(x1190==(x1191^x1192)));

    if (t172 != 1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1206 = UINT8_MAX;
	int32_t x1207 = INT32_MIN;
	int64_t x1208 = INT64_MIN;
	uint64_t t173 = 14406LLU;

    t173 = (x1205<<(x1206==(x1207^x1208)));

    if (t173 != 1250LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1209 = 1;
	static uint64_t x1210 = 9175354672737LLU;
	static int8_t x1211 = 0;
	volatile int32_t x1212 = INT32_MAX;
	volatile int32_t t174 = -10;

    t174 = (x1209<<(x1210==(x1211^x1212)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1213 = 1;
	uint8_t x1214 = UINT8_MAX;
	static uint8_t x1215 = 6U;
	uint8_t x1216 = 1U;
	volatile int32_t t175 = 824622227;

    t175 = (x1213<<(x1214==(x1215^x1216)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1217 = 173LLU;
	int64_t x1218 = INT64_MAX;
	uint16_t x1219 = 0U;
	uint16_t x1220 = 96U;
	volatile uint64_t t176 = 1838882661339059LLU;

    t176 = (x1217<<(x1218==(x1219^x1220)));

    if (t176 != 173LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x1225 = 138543593493262148LL;
	static uint64_t x1226 = 180467LLU;
	static int64_t x1227 = INT64_MIN;
	uint8_t x1228 = 33U;
	volatile int64_t t177 = -686076314LL;

    t177 = (x1225<<(x1226==(x1227^x1228)));

    if (t177 != 138543593493262148LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int8_t x1229 = INT8_MAX;
	volatile int32_t x1230 = -1;
	volatile int64_t x1231 = -1LL;
	static int8_t x1232 = INT8_MIN;
	volatile int32_t t178 = 49810;

    t178 = (x1229<<(x1230==(x1231^x1232)));

    if (t178 != 127) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1233 = 25U;
	int8_t x1234 = -1;
	static uint64_t x1235 = 32828539040956483LLU;
	int16_t x1236 = INT16_MIN;
	volatile int32_t t179 = -518700047;

    t179 = (x1233<<(x1234==(x1235^x1236)));

    if (t179 != 25) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1253 = INT64_MAX;
	int32_t x1254 = INT32_MIN;
	static int32_t x1255 = INT32_MIN;
	static volatile int64_t t180 = INT64_MAX;

    t180 = (x1253<<(x1254==(x1255^x1256)));

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1257 = UINT8_MAX;
	int8_t x1258 = INT8_MIN;
	uint8_t x1259 = 1U;
	int32_t x1260 = INT32_MAX;
	volatile int32_t t181 = 1363965;

    t181 = (x1257<<(x1258==(x1259^x1260)));

    if (t181 != 255) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x1273 = 5;
	int8_t x1275 = -1;
	uint8_t x1276 = 29U;
	volatile int32_t t182 = 384984;

    t182 = (x1273<<(x1274==(x1275^x1276)));

    if (t182 != 5) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1285 = 4U;
	static uint64_t x1286 = 22747276569722558LLU;
	int32_t x1288 = INT32_MAX;
	volatile int32_t t183 = 1;

    t183 = (x1285<<(x1286==(x1287^x1288)));

    if (t183 != 4) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1289 = 3869U;
	int16_t x1290 = INT16_MIN;
	int64_t x1292 = 1809783LL;

    t184 = (x1289<<(x1290==(x1291^x1292)));

    if (t184 != 3869) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x1295 = INT8_MAX;
	static uint16_t x1296 = UINT16_MAX;

    t185 = (x1293<<(x1294==(x1295^x1296)));

    if (t185 != 92) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x1297 = UINT16_MAX;
	int32_t x1298 = INT32_MIN;
	int32_t x1299 = INT32_MIN;
	volatile int64_t x1300 = -12172LL;
	volatile int32_t t186 = -966081022;

    t186 = (x1297<<(x1298==(x1299^x1300)));

    if (t186 != 65535) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x1304 = UINT64_MAX;
	volatile int32_t t187 = -418180671;

    t187 = (x1301<<(x1302==(x1303^x1304)));

    if (t187 != 26640) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int16_t x1310 = 9;
	uint8_t x1312 = 12U;

    t188 = (x1309<<(x1310==(x1311^x1312)));

    if (t188 != 15163388810LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1313 = UINT16_MAX;
	static int32_t x1314 = -29227;
	volatile uint8_t x1315 = UINT8_MAX;
	int32_t t189 = -345014232;

    t189 = (x1313<<(x1314==(x1315^x1316)));

    if (t189 != 65535) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1317 = 3;
	int8_t x1318 = 13;
	volatile int16_t x1319 = INT16_MIN;
	uint32_t x1320 = 307563616U;
	volatile int32_t t190 = 12929;

    t190 = (x1317<<(x1318==(x1319^x1320)));

    if (t190 != 3) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint32_t x1321 = 85955U;
	int32_t x1322 = INT32_MIN;

    t191 = (x1321<<(x1322==(x1323^x1324)));

    if (t191 != 85955U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1326 = 16497U;
	uint16_t x1328 = 20463U;
	static volatile int32_t t192 = 2;

    t192 = (x1325<<(x1326==(x1327^x1328)));

    if (t192 != 8) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1333 = 1;
	uint32_t x1334 = 98U;
	int64_t x1335 = -1LL;
	int32_t t193 = -35;

    t193 = (x1333<<(x1334==(x1335^x1336)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1345 = UINT16_MAX;
	int8_t x1346 = INT8_MIN;
	static volatile int16_t x1347 = INT16_MIN;
	uint16_t x1348 = UINT16_MAX;
	int32_t t194 = -210407011;

    t194 = (x1345<<(x1346==(x1347^x1348)));

    if (t194 != 65535) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x1349 = 2;
	static int8_t x1350 = INT8_MIN;
	uint64_t x1351 = UINT64_MAX;
	uint8_t x1352 = 5U;
	int32_t t195 = -905;

    t195 = (x1349<<(x1350==(x1351^x1352)));

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1358 = INT32_MAX;
	int64_t x1359 = INT64_MIN;
	volatile int32_t t196 = 219620432;

    t196 = (x1357<<(x1358==(x1359^x1360)));

    if (t196 != 255) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint8_t x1361 = 22U;
	int32_t x1362 = 149;
	int64_t x1363 = -15879439138540600LL;
	int32_t x1364 = 9093083;

    t197 = (x1361<<(x1362==(x1363^x1364)));

    if (t197 != 22) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1366 = 3323U;
	int8_t x1367 = -3;
	int16_t x1368 = INT16_MIN;
	static uint64_t t198 = 46LLU;

    t198 = (x1365<<(x1366==(x1367^x1368)));

    if (t198 != 12927LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1373 = 5U;
	static uint16_t x1374 = UINT16_MAX;
	int16_t x1375 = INT16_MIN;
	static int64_t x1376 = -24317479432LL;
	volatile int32_t t199 = 846511363;

    t199 = (x1373<<(x1374==(x1375^x1376)));

    if (t199 != 5) { NG(); } else { ; }
	
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

