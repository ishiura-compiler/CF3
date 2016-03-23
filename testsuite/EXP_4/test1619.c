
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

static volatile uint16_t x1 = UINT16_MAX;
static int16_t x53 = -1;
int16_t x72 = INT16_MIN;
int32_t x80 = -35;
int8_t x87 = 10;
int8_t x98 = INT8_MIN;
static int64_t x114 = INT64_MIN;
uint16_t x117 = UINT16_MAX;
int16_t x118 = INT16_MAX;
int64_t x125 = -1LL;
uint32_t x128 = 5700558U;
int16_t x151 = INT16_MIN;
uint64_t x161 = 0LLU;
int8_t x164 = INT8_MAX;
volatile int32_t t21 = 4958;
static uint16_t x172 = 5U;
int64_t x174 = -1LL;
volatile int64_t x184 = 201LL;
int16_t x187 = -1;
volatile int16_t x188 = INT16_MIN;
uint32_t x191 = 57596U;
volatile int32_t t26 = -28585964;
int32_t x209 = INT32_MAX;
uint64_t x210 = UINT64_MAX;
int64_t x212 = INT64_MIN;
volatile int32_t t27 = 5882;
int32_t x217 = -1;
int8_t x219 = INT8_MAX;
static int16_t x227 = INT16_MIN;
static int64_t x236 = INT64_MIN;
int64_t x239 = -1LL;
int64_t x254 = INT64_MAX;
int64_t x256 = INT64_MIN;
uint16_t x270 = 26238U;
int32_t t36 = -2;
static int32_t x295 = INT32_MAX;
volatile int32_t t38 = -2555451;
int16_t x302 = -27;
static volatile int32_t t40 = 0;
int32_t x338 = 525551794;
int32_t x340 = -227291093;
int32_t x354 = -15801;
uint64_t x358 = UINT64_MAX;
uint64_t x366 = 3103623231756725LLU;
static int8_t x367 = -1;
volatile int32_t x368 = INT32_MIN;
volatile uint16_t x371 = 3530U;
uint32_t x377 = 71U;
uint32_t x380 = 3U;
volatile uint32_t x386 = 2U;
static int16_t x399 = INT16_MIN;
volatile int64_t x416 = -13154831886340890LL;
int32_t x423 = INT32_MAX;
int32_t t56 = 5311011;
int8_t x431 = INT8_MIN;
static int16_t x453 = INT16_MAX;
int8_t x474 = -1;
static int32_t x486 = -1;
static int8_t x487 = 9;
int64_t x502 = -27530LL;
static int64_t x504 = INT64_MIN;
volatile int32_t x513 = INT32_MIN;
int16_t x514 = INT16_MAX;
int64_t x516 = INT64_MIN;
int8_t x528 = 24;
volatile int32_t t69 = 880934974;
static int16_t x534 = INT16_MIN;
int32_t t70 = -7818315;
int32_t t71 = 889;
uint16_t x556 = UINT16_MAX;
int8_t x578 = INT8_MAX;
static int16_t x580 = -193;
int32_t t74 = 283;
int32_t t76 = -654128;
volatile int32_t t78 = 176898867;
int32_t x605 = 57;
static uint32_t x608 = 787277730U;
volatile int32_t t80 = -22647505;
volatile int32_t t81 = -9698;
static volatile int32_t t87 = 0;
int32_t x650 = INT32_MIN;
uint8_t x665 = UINT8_MAX;
static int64_t x675 = INT64_MAX;
volatile int16_t x676 = -1;
int32_t t90 = 15517;
uint64_t x694 = 0LLU;
static uint32_t x698 = 35U;
static int32_t t97 = 2837249;
int32_t t98 = 511576051;
int16_t x748 = 15;
static volatile int16_t x776 = INT16_MAX;
uint64_t x785 = 26898004234LLU;
volatile int16_t x787 = -1021;
uint8_t x790 = 0U;
uint64_t x806 = UINT64_MAX;
volatile int16_t x813 = INT16_MIN;
volatile int16_t x822 = INT16_MIN;
uint8_t x823 = 0U;
int16_t x832 = 50;
int32_t t110 = -164;
int64_t x837 = 118227899876634297LL;
uint64_t x839 = 66411LLU;
static uint64_t x844 = 997860222630LLU;
uint8_t x845 = UINT8_MAX;
volatile int32_t t113 = -862886990;
int8_t x850 = -1;
int32_t x851 = 23669721;
int16_t x852 = INT16_MAX;
uint16_t x855 = UINT16_MAX;
int32_t t116 = 28;
int32_t t117 = 3377;
int32_t x871 = -117071;
int8_t x873 = INT8_MIN;
int32_t t119 = 1004862104;
volatile uint32_t x889 = 0U;
static int64_t x891 = INT64_MAX;
uint16_t x897 = 168U;
static int16_t x907 = INT16_MAX;
int32_t t123 = -1586;
int16_t x910 = INT16_MIN;
uint16_t x919 = 1893U;
uint32_t x935 = 58038U;
static int32_t x952 = INT32_MIN;
int32_t t129 = 1;
static int16_t x962 = INT16_MIN;
volatile uint32_t x966 = UINT32_MAX;
int64_t x972 = -7492LL;
int16_t x991 = INT16_MAX;
int16_t x992 = -50;
uint16_t x999 = 283U;
int32_t x1004 = INT32_MIN;
int8_t x1010 = INT8_MIN;
int32_t t138 = 670191;
int64_t x1023 = INT64_MAX;
volatile uint16_t x1024 = 1153U;
int32_t t140 = -14;
static uint64_t x1025 = 2604LLU;
int8_t x1041 = INT8_MIN;
static int32_t x1045 = 348042;
static uint32_t x1058 = 2198U;
int64_t x1062 = INT64_MIN;
volatile uint32_t x1065 = UINT32_MAX;
volatile int32_t t146 = -3471;
int8_t x1070 = 13;
int16_t x1083 = 21;
int16_t x1084 = INT16_MIN;
int16_t x1094 = INT16_MIN;
uint64_t x1095 = UINT64_MAX;
uint8_t x1099 = 58U;
int32_t x1123 = INT32_MAX;
int16_t x1133 = INT16_MIN;
static int8_t x1143 = 0;
uint16_t x1150 = 374U;
int16_t x1167 = INT16_MAX;
uint8_t x1191 = 20U;
int16_t x1198 = INT16_MAX;
int16_t x1199 = -13;
uint16_t x1203 = UINT16_MAX;
int32_t t161 = 1;
volatile int32_t x1209 = 9;
uint32_t x1215 = 33642209U;
volatile int32_t t164 = 28266414;
uint32_t x1234 = 186312247U;
uint16_t x1236 = UINT16_MAX;
volatile int64_t x1243 = 1075696844918097534LL;
int32_t x1245 = INT32_MAX;
int16_t x1253 = -5563;
volatile int8_t x1258 = 43;
static int32_t t171 = 40373762;
int8_t x1291 = INT8_MIN;
int16_t x1301 = INT16_MIN;
volatile uint16_t x1304 = 1U;
volatile uint16_t x1310 = UINT16_MAX;
volatile int32_t t178 = 326516202;
int32_t x1315 = 55;
int16_t x1316 = -17;
uint32_t x1317 = 47854U;
uint64_t x1318 = 1005571208232LLU;
int8_t x1319 = INT8_MIN;
volatile uint64_t x1324 = 466LLU;
static volatile int32_t t181 = 914966;
int16_t x1342 = INT16_MIN;
volatile int32_t t182 = 4683702;
int16_t x1346 = -1;
int16_t x1367 = 221;
volatile uint16_t x1371 = 246U;
int8_t x1386 = INT8_MIN;
volatile uint64_t x1394 = 227473LLU;
static volatile int8_t x1399 = 1;
volatile uint64_t x1402 = UINT64_MAX;
int32_t t191 = 57955257;
volatile int32_t x1408 = -407;
int64_t x1414 = 5LL;
int32_t x1415 = -1;
static volatile int32_t t193 = -3731;
volatile int16_t x1435 = -7;
volatile int32_t t197 = -3067;


void f0(void) {
    	int16_t x2 = INT16_MAX;
	static int64_t x3 = -1LL;
	volatile uint64_t x4 = 107LLU;
	int32_t t0 = -468059257;

    t0 = (x1>(x2/(x3>x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 519343;
	static int8_t x6 = -1;
	int64_t x7 = 89374645LL;
	int16_t x8 = 1;
	static volatile int32_t t1 = 32872;

    t1 = (x5>(x6/(x7>x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x29 = UINT32_MAX;
	int64_t x30 = INT64_MIN;
	uint16_t x31 = 29U;
	int32_t x32 = INT32_MIN;
	static int32_t t2 = -13701;

    t2 = (x29>(x30/(x31>x32)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x33 = 0LLU;
	int64_t x34 = -1LL;
	int8_t x35 = INT8_MAX;
	uint8_t x36 = 15U;
	volatile int32_t t3 = -4438;

    t3 = (x33>(x34/(x35>x36)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x54 = UINT16_MAX;
	volatile int64_t x55 = INT64_MAX;
	int8_t x56 = -5;
	volatile int32_t t4 = -1473;

    t4 = (x53>(x54/(x55>x56)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x57 = -891924570793911150LL;
	volatile int16_t x58 = INT16_MIN;
	int64_t x59 = -16152004LL;
	volatile int32_t x60 = INT32_MIN;
	int32_t t5 = -2508;

    t5 = (x57>(x58/(x59>x60)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x65 = 53;
	int16_t x66 = -57;
	volatile uint8_t x67 = 3U;
	volatile int32_t x68 = -30055094;
	int32_t t6 = -4646;

    t6 = (x65>(x66/(x67>x68)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x69 = -15;
	volatile int32_t x70 = INT32_MAX;
	int8_t x71 = 1;
	volatile int32_t t7 = -765;

    t7 = (x69>(x70/(x71>x72)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x73 = UINT32_MAX;
	uint8_t x74 = 0U;
	uint64_t x75 = UINT64_MAX;
	volatile int16_t x76 = INT16_MAX;
	volatile int32_t t8 = -69308850;

    t8 = (x73>(x74/(x75>x76)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x77 = INT8_MIN;
	volatile int32_t x78 = INT32_MIN;
	static int64_t x79 = 8712403812119LL;
	int32_t t9 = 2982;

    t9 = (x77>(x78/(x79>x80)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x85 = -149930;
	int16_t x86 = INT16_MIN;
	int16_t x88 = -1;
	volatile int32_t t10 = 53;

    t10 = (x85>(x86/(x87>x88)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x97 = INT16_MIN;
	uint32_t x99 = 501108476U;
	uint16_t x100 = UINT16_MAX;
	int32_t t11 = 96639838;

    t11 = (x97>(x98/(x99>x100)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x101 = 103722982366037LLU;
	int8_t x102 = INT8_MAX;
	uint8_t x103 = UINT8_MAX;
	volatile uint16_t x104 = 45U;
	int32_t t12 = -72;

    t12 = (x101>(x102/(x103>x104)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x113 = 0;
	volatile int32_t x115 = INT32_MAX;
	int64_t x116 = -22128454633586LL;
	int32_t t13 = 14292544;

    t13 = (x113>(x114/(x115>x116)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x119 = 3;
	int64_t x120 = -1LL;
	int32_t t14 = 20;

    t14 = (x117>(x118/(x119>x120)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x121 = 7205U;
	uint8_t x122 = 2U;
	uint16_t x123 = UINT16_MAX;
	int32_t x124 = 5;
	static volatile int32_t t15 = 2999263;

    t15 = (x121>(x122/(x123>x124)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x126 = INT16_MIN;
	int32_t x127 = -718412;
	volatile int32_t t16 = -445;

    t16 = (x125>(x126/(x127>x128)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x137 = 1U;
	int8_t x138 = INT8_MIN;
	int64_t x139 = INT64_MAX;
	static int16_t x140 = INT16_MIN;
	static volatile int32_t t17 = -7;

    t17 = (x137>(x138/(x139>x140)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x141 = 3925;
	int32_t x142 = INT32_MAX;
	int32_t x143 = 6480;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t18 = -1;

    t18 = (x141>(x142/(x143>x144)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x149 = INT64_MIN;
	uint8_t x150 = UINT8_MAX;
	static uint32_t x152 = 12650433U;
	volatile int32_t t19 = 3213;

    t19 = (x149>(x150/(x151>x152)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x153 = -52176;
	uint32_t x154 = 467231655U;
	int64_t x155 = -1LL;
	int64_t x156 = -783646606788LL;
	int32_t t20 = -114339208;

    t20 = (x153>(x154/(x155>x156)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MAX;

    t21 = (x161>(x162/(x163>x164)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x169 = UINT64_MAX;
	int32_t x170 = 557;
	int64_t x171 = 1216672LL;
	volatile int32_t t22 = -1227;

    t22 = (x169>(x170/(x171>x172)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x173 = INT8_MIN;
	int8_t x175 = -1;
	int64_t x176 = -2279LL;
	volatile int32_t t23 = -1;

    t23 = (x173>(x174/(x175>x176)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x181 = -642103336;
	uint16_t x182 = 5488U;
	static uint64_t x183 = UINT64_MAX;
	int32_t t24 = -6018;

    t24 = (x181>(x182/(x183>x184)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x185 = 3LL;
	int64_t x186 = INT64_MIN;
	int32_t t25 = -430;

    t25 = (x185>(x186/(x187>x188)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x189 = 1LL;
	int32_t x190 = INT32_MIN;
	static int64_t x192 = INT64_MIN;

    t26 = (x189>(x190/(x191>x192)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x211 = -2;

    t27 = (x209>(x210/(x211>x212)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x213 = UINT64_MAX;
	static int64_t x214 = INT64_MIN;
	static uint64_t x215 = UINT64_MAX;
	uint32_t x216 = 0U;
	volatile int32_t t28 = 553405;

    t28 = (x213>(x214/(x215>x216)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x218 = INT16_MIN;
	static volatile int32_t x220 = INT32_MIN;
	volatile int32_t t29 = -1;

    t29 = (x217>(x218/(x219>x220)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x221 = UINT8_MAX;
	volatile int16_t x222 = INT16_MAX;
	static int16_t x223 = INT16_MIN;
	static uint32_t x224 = 15U;
	int32_t t30 = -28;

    t30 = (x221>(x222/(x223>x224)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int64_t x225 = -1LL;
	int8_t x226 = -1;
	int64_t x228 = INT64_MIN;
	int32_t t31 = -927107;

    t31 = (x225>(x226/(x227>x228)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x233 = -1LL;
	uint8_t x234 = UINT8_MAX;
	static volatile int16_t x235 = -1;
	volatile int32_t t32 = 951731992;

    t32 = (x233>(x234/(x235>x236)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x237 = -7731015513199LL;
	uint8_t x238 = UINT8_MAX;
	uint64_t x240 = 33004701389609967LLU;
	static volatile int32_t t33 = 854;

    t33 = (x237>(x238/(x239>x240)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x253 = -35LL;
	uint16_t x255 = UINT16_MAX;
	static volatile int32_t t34 = -150;

    t34 = (x253>(x254/(x255>x256)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x261 = INT16_MAX;
	int8_t x262 = INT8_MIN;
	int32_t x263 = INT32_MAX;
	int32_t x264 = -1;
	int32_t t35 = 7;

    t35 = (x261>(x262/(x263>x264)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x269 = -1;
	uint64_t x271 = 263091290843632LLU;
	static uint16_t x272 = UINT16_MAX;

    t36 = (x269>(x270/(x271>x272)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x281 = 120U;
	int32_t x282 = INT32_MAX;
	uint8_t x283 = UINT8_MAX;
	static volatile int64_t x284 = -53LL;
	int32_t t37 = -2925;

    t37 = (x281>(x282/(x283>x284)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x293 = -1LL;
	uint64_t x294 = 218853373050219LLU;
	volatile int64_t x296 = INT64_MIN;

    t38 = (x293>(x294/(x295>x296)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x297 = 140633LL;
	uint16_t x298 = 2429U;
	int8_t x299 = -1;
	int64_t x300 = -18291LL;
	volatile int32_t t39 = 186978231;

    t39 = (x297>(x298/(x299>x300)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x301 = 221290795698759LL;
	static int64_t x303 = INT64_MIN;
	static uint64_t x304 = 301379590LLU;

    t40 = (x301>(x302/(x303>x304)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x305 = 117773997023804570LLU;
	int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;
	volatile int32_t x308 = INT32_MIN;
	static int32_t t41 = 2968;

    t41 = (x305>(x306/(x307>x308)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x325 = 0;
	uint16_t x326 = 1U;
	static int32_t x327 = INT32_MAX;
	uint8_t x328 = 2U;
	volatile int32_t t42 = 48386241;

    t42 = (x325>(x326/(x327>x328)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x329 = -1;
	int8_t x330 = 10;
	int64_t x331 = -2769LL;
	int64_t x332 = INT64_MIN;
	int32_t t43 = -44613;

    t43 = (x329>(x330/(x331>x332)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x337 = UINT8_MAX;
	static int8_t x339 = 0;
	int32_t t44 = -44;

    t44 = (x337>(x338/(x339>x340)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x353 = 2U;
	int8_t x355 = INT8_MIN;
	static int32_t x356 = -243;
	int32_t t45 = -112545;

    t45 = (x353>(x354/(x355>x356)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x357 = INT64_MIN;
	int64_t x359 = INT64_MAX;
	int8_t x360 = 1;
	int32_t t46 = -271;

    t46 = (x357>(x358/(x359>x360)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x361 = INT8_MAX;
	uint16_t x362 = UINT16_MAX;
	int16_t x363 = -1;
	uint32_t x364 = 6019330U;
	volatile int32_t t47 = -86;

    t47 = (x361>(x362/(x363>x364)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x365 = 3U;
	int32_t t48 = 13629042;

    t48 = (x365>(x366/(x367>x368)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x369 = -20;
	int16_t x370 = INT16_MAX;
	uint8_t x372 = 0U;
	int32_t t49 = 1044123554;

    t49 = (x369>(x370/(x371>x372)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x378 = -9LL;
	static int16_t x379 = -699;
	static volatile int32_t t50 = -25;

    t50 = (x377>(x378/(x379>x380)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x381 = -1;
	int64_t x382 = INT64_MIN;
	int32_t x383 = -1;
	static int32_t x384 = INT32_MIN;
	int32_t t51 = 120256;

    t51 = (x381>(x382/(x383>x384)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x385 = UINT16_MAX;
	uint64_t x387 = 245316504825376025LLU;
	int32_t x388 = INT32_MAX;
	volatile int32_t t52 = 596436;

    t52 = (x385>(x386/(x387>x388)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x397 = -1;
	int8_t x398 = 2;
	int64_t x400 = INT64_MIN;
	static volatile int32_t t53 = 54519;

    t53 = (x397>(x398/(x399>x400)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x413 = -12462373;
	static volatile uint64_t x414 = UINT64_MAX;
	int64_t x415 = -91175LL;
	int32_t t54 = -3129114;

    t54 = (x413>(x414/(x415>x416)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x417 = INT16_MIN;
	int8_t x418 = INT8_MIN;
	uint32_t x419 = 250171270U;
	uint16_t x420 = UINT16_MAX;
	int32_t t55 = -26991;

    t55 = (x417>(x418/(x419>x420)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x421 = 52LL;
	int8_t x422 = INT8_MAX;
	volatile int64_t x424 = 313232LL;

    t56 = (x421>(x422/(x423>x424)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x429 = -831513757539764LL;
	int32_t x430 = -1;
	uint64_t x432 = 17354832LLU;
	volatile int32_t t57 = 11437;

    t57 = (x429>(x430/(x431>x432)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x433 = INT8_MAX;
	int64_t x434 = -1LL;
	int16_t x435 = -4241;
	int64_t x436 = -69183428900930064LL;
	volatile int32_t t58 = -709;

    t58 = (x433>(x434/(x435>x436)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x445 = UINT8_MAX;
	static int64_t x446 = -2007340297LL;
	int16_t x447 = INT16_MAX;
	uint16_t x448 = 36U;
	volatile int32_t t59 = -32;

    t59 = (x445>(x446/(x447>x448)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x449 = INT32_MIN;
	int64_t x450 = 4328486306LL;
	uint64_t x451 = UINT64_MAX;
	uint64_t x452 = 111817455817244LLU;
	int32_t t60 = 25795;

    t60 = (x449>(x450/(x451>x452)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x454 = 262201691;
	static int16_t x455 = INT16_MIN;
	int32_t x456 = INT32_MIN;
	volatile int32_t t61 = 978942;

    t61 = (x453>(x454/(x455>x456)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x465 = INT16_MAX;
	static volatile int64_t x466 = INT64_MIN;
	uint16_t x467 = UINT16_MAX;
	uint8_t x468 = UINT8_MAX;
	volatile int32_t t62 = 0;

    t62 = (x465>(x466/(x467>x468)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x473 = INT16_MIN;
	int16_t x475 = INT16_MAX;
	int64_t x476 = INT64_MIN;
	int32_t t63 = 242;

    t63 = (x473>(x474/(x475>x476)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x485 = -185;
	int16_t x488 = 7;
	volatile int32_t t64 = 24609980;

    t64 = (x485>(x486/(x487>x488)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x493 = INT32_MIN;
	uint32_t x494 = 68U;
	int64_t x495 = INT64_MAX;
	volatile int16_t x496 = INT16_MIN;
	int32_t t65 = 9;

    t65 = (x493>(x494/(x495>x496)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x501 = INT16_MAX;
	int8_t x503 = 0;
	static int32_t t66 = 65775465;

    t66 = (x501>(x502/(x503>x504)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x515 = 1426097059026363LL;
	volatile int32_t t67 = -2573193;

    t67 = (x513>(x514/(x515>x516)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x525 = INT64_MIN;
	int8_t x526 = -1;
	volatile uint16_t x527 = 13380U;
	int32_t t68 = 505742;

    t68 = (x525>(x526/(x527>x528)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x529 = 1;
	int32_t x530 = 22244570;
	uint16_t x531 = UINT16_MAX;
	static uint8_t x532 = UINT8_MAX;

    t69 = (x529>(x530/(x531>x532)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x533 = -15513;
	volatile uint32_t x535 = 142U;
	int16_t x536 = 19;

    t70 = (x533>(x534/(x535>x536)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x541 = INT8_MAX;
	volatile int16_t x542 = -1;
	int8_t x543 = -1;
	int8_t x544 = INT8_MIN;

    t71 = (x541>(x542/(x543>x544)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x553 = 0;
	int16_t x554 = -6;
	int64_t x555 = 1506644308439056665LL;
	int32_t t72 = 238264;

    t72 = (x553>(x554/(x555>x556)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x565 = 64945345LLU;
	int8_t x566 = -1;
	int32_t x567 = 171939021;
	int32_t x568 = INT32_MIN;
	volatile int32_t t73 = 1066;

    t73 = (x565>(x566/(x567>x568)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x577 = INT32_MIN;
	int16_t x579 = 1;

    t74 = (x577>(x578/(x579>x580)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x581 = -16197;
	uint16_t x582 = 1U;
	int64_t x583 = -1LL;
	int8_t x584 = INT8_MIN;
	volatile int32_t t75 = -437892;

    t75 = (x581>(x582/(x583>x584)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x585 = -15;
	static int32_t x586 = -1;
	int32_t x587 = -1;
	volatile uint64_t x588 = 714087900443LLU;

    t76 = (x585>(x586/(x587>x588)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x589 = INT32_MAX;
	int16_t x590 = -1;
	static int32_t x591 = -1;
	uint64_t x592 = 85LLU;
	static int32_t t77 = -71;

    t77 = (x589>(x590/(x591>x592)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x593 = UINT32_MAX;
	volatile int16_t x594 = 0;
	volatile uint16_t x595 = UINT16_MAX;
	int64_t x596 = INT64_MIN;

    t78 = (x593>(x594/(x595>x596)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x601 = -31;
	static int8_t x602 = INT8_MIN;
	uint8_t x603 = UINT8_MAX;
	int8_t x604 = INT8_MAX;
	static int32_t t79 = 7632863;

    t79 = (x601>(x602/(x603>x604)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int16_t x606 = -2791;
	int16_t x607 = -2;

    t80 = (x605>(x606/(x607>x608)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x609 = -1;
	int8_t x610 = -1;
	static uint8_t x611 = 0U;
	int8_t x612 = INT8_MIN;

    t81 = (x609>(x610/(x611>x612)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x613 = -15;
	int32_t x614 = INT32_MIN;
	uint16_t x615 = UINT16_MAX;
	uint16_t x616 = 12713U;
	int32_t t82 = -6089;

    t82 = (x613>(x614/(x615>x616)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x621 = INT64_MIN;
	int16_t x622 = INT16_MIN;
	volatile int32_t x623 = INT32_MAX;
	static int32_t x624 = INT32_MIN;
	int32_t t83 = 25;

    t83 = (x621>(x622/(x623>x624)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x629 = 59;
	int8_t x630 = INT8_MAX;
	uint16_t x631 = 66U;
	uint8_t x632 = 23U;
	int32_t t84 = -33358468;

    t84 = (x629>(x630/(x631>x632)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x633 = 2;
	int8_t x634 = -4;
	volatile uint8_t x635 = UINT8_MAX;
	volatile int8_t x636 = -1;
	int32_t t85 = 50139;

    t85 = (x633>(x634/(x635>x636)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x641 = INT32_MIN;
	uint64_t x642 = UINT64_MAX;
	uint32_t x643 = UINT32_MAX;
	static uint8_t x644 = UINT8_MAX;
	volatile int32_t t86 = -2;

    t86 = (x641>(x642/(x643>x644)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x645 = UINT32_MAX;
	int64_t x646 = -1LL;
	int32_t x647 = -1;
	volatile uint64_t x648 = 130994784LLU;

    t87 = (x645>(x646/(x647>x648)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x649 = INT16_MIN;
	uint32_t x651 = UINT32_MAX;
	int8_t x652 = INT8_MAX;
	volatile int32_t t88 = 401945971;

    t88 = (x649>(x650/(x651>x652)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x666 = 109055705LLU;
	int32_t x667 = 2497;
	uint64_t x668 = 475LLU;
	int32_t t89 = -3079894;

    t89 = (x665>(x666/(x667>x668)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x673 = -1;
	volatile int64_t x674 = INT64_MIN;

    t90 = (x673>(x674/(x675>x676)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x677 = INT16_MAX;
	int64_t x678 = 1067283831LL;
	uint64_t x679 = UINT64_MAX;
	int64_t x680 = INT64_MAX;
	volatile int32_t t91 = -32415200;

    t91 = (x677>(x678/(x679>x680)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x681 = INT8_MAX;
	int32_t x682 = -1171;
	static int16_t x683 = 1920;
	static int32_t x684 = 851;
	int32_t t92 = 1;

    t92 = (x681>(x682/(x683>x684)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x685 = INT32_MIN;
	static int8_t x686 = INT8_MIN;
	static int64_t x687 = INT64_MAX;
	uint64_t x688 = 4LLU;
	static volatile int32_t t93 = 374072;

    t93 = (x685>(x686/(x687>x688)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x689 = 124505086056444371LL;
	int64_t x690 = INT64_MIN;
	uint32_t x691 = UINT32_MAX;
	static int32_t x692 = -847;
	int32_t t94 = -210071249;

    t94 = (x689>(x690/(x691>x692)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x693 = 1;
	int16_t x695 = INT16_MIN;
	uint64_t x696 = 5307265LLU;
	volatile int32_t t95 = 480569;

    t95 = (x693>(x694/(x695>x696)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x697 = INT8_MIN;
	int16_t x699 = INT16_MAX;
	int8_t x700 = 56;
	int32_t t96 = 7;

    t96 = (x697>(x698/(x699>x700)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x721 = -1LL;
	uint8_t x722 = 107U;
	int32_t x723 = INT32_MAX;
	uint32_t x724 = 1991947587U;

    t97 = (x721>(x722/(x723>x724)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x733 = INT32_MAX;
	uint32_t x734 = 1208562U;
	int8_t x735 = -1;
	int8_t x736 = INT8_MIN;

    t98 = (x733>(x734/(x735>x736)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x737 = 46;
	int64_t x738 = INT64_MIN;
	static int64_t x739 = INT64_MAX;
	int8_t x740 = INT8_MAX;
	static volatile int32_t t99 = 27;

    t99 = (x737>(x738/(x739>x740)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x745 = INT32_MIN;
	uint8_t x746 = UINT8_MAX;
	static uint32_t x747 = UINT32_MAX;
	int32_t t100 = -16463751;

    t100 = (x745>(x746/(x747>x748)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint8_t x753 = 29U;
	static int8_t x754 = INT8_MIN;
	volatile int64_t x755 = 1LL;
	int8_t x756 = -7;
	volatile int32_t t101 = -23;

    t101 = (x753>(x754/(x755>x756)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x769 = INT32_MIN;
	static int64_t x770 = INT64_MIN;
	uint32_t x771 = 2995228U;
	int64_t x772 = -1LL;
	int32_t t102 = -46679;

    t102 = (x769>(x770/(x771>x772)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x773 = INT8_MIN;
	uint16_t x774 = 441U;
	uint32_t x775 = 28720898U;
	int32_t t103 = -76699;

    t103 = (x773>(x774/(x775>x776)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x786 = INT16_MIN;
	int32_t x788 = INT32_MIN;
	int32_t t104 = 23;

    t104 = (x785>(x786/(x787>x788)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x789 = UINT32_MAX;
	int64_t x791 = INT64_MAX;
	int8_t x792 = -1;
	int32_t t105 = 58;

    t105 = (x789>(x790/(x791>x792)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x805 = 12897378564832LL;
	uint8_t x807 = 111U;
	int32_t x808 = INT32_MIN;
	volatile int32_t t106 = 14815;

    t106 = (x805>(x806/(x807>x808)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x814 = INT16_MAX;
	uint32_t x815 = 413864337U;
	uint16_t x816 = 0U;
	int32_t t107 = 918;

    t107 = (x813>(x814/(x815>x816)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x821 = 6584973LLU;
	volatile int16_t x824 = -1;
	static volatile int32_t t108 = -42;

    t108 = (x821>(x822/(x823>x824)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x825 = 22406U;
	static uint64_t x826 = 90LLU;
	uint8_t x827 = 97U;
	int8_t x828 = INT8_MIN;
	volatile int32_t t109 = -72560479;

    t109 = (x825>(x826/(x827>x828)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x829 = 64004545434LL;
	int64_t x830 = INT64_MIN;
	int16_t x831 = INT16_MAX;

    t110 = (x829>(x830/(x831>x832)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x838 = INT8_MIN;
	uint16_t x840 = UINT16_MAX;
	int32_t t111 = 6;

    t111 = (x837>(x838/(x839>x840)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x841 = INT32_MIN;
	int32_t x842 = INT32_MIN;
	int32_t x843 = -1;
	static int32_t t112 = 116366352;

    t112 = (x841>(x842/(x843>x844)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x846 = 46U;
	int32_t x847 = INT32_MIN;
	uint64_t x848 = 5LLU;

    t113 = (x845>(x846/(x847>x848)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x849 = INT16_MIN;
	volatile int32_t t114 = 195994839;

    t114 = (x849>(x850/(x851>x852)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x853 = INT64_MIN;
	static int64_t x854 = INT64_MIN;
	static uint16_t x856 = 103U;
	int32_t t115 = 58;

    t115 = (x853>(x854/(x855>x856)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x857 = -1;
	int16_t x858 = INT16_MAX;
	volatile uint32_t x859 = UINT32_MAX;
	int64_t x860 = -8149068404LL;

    t116 = (x857>(x858/(x859>x860)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x865 = INT32_MAX;
	uint64_t x866 = 710972581035LLU;
	static int16_t x867 = INT16_MAX;
	int8_t x868 = 26;

    t117 = (x865>(x866/(x867>x868)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x869 = -1LL;
	volatile int8_t x870 = INT8_MIN;
	int32_t x872 = INT32_MIN;
	volatile int32_t t118 = -209965;

    t118 = (x869>(x870/(x871>x872)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint16_t x874 = UINT16_MAX;
	uint32_t x875 = 5U;
	volatile int16_t x876 = 0;

    t119 = (x873>(x874/(x875>x876)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x890 = INT8_MAX;
	int32_t x892 = -1;
	int32_t t120 = 8;

    t120 = (x889>(x890/(x891>x892)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x898 = INT8_MAX;
	uint8_t x899 = UINT8_MAX;
	int64_t x900 = INT64_MIN;
	static int32_t t121 = 4177219;

    t121 = (x897>(x898/(x899>x900)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x901 = INT64_MAX;
	volatile uint8_t x902 = 3U;
	int64_t x903 = 1610162624331LL;
	static int16_t x904 = -1;
	volatile int32_t t122 = -61;

    t122 = (x901>(x902/(x903>x904)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x905 = INT8_MIN;
	volatile uint16_t x906 = 406U;
	volatile uint16_t x908 = 47U;

    t123 = (x905>(x906/(x907>x908)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x909 = INT8_MAX;
	int16_t x911 = INT16_MAX;
	int8_t x912 = INT8_MIN;
	volatile int32_t t124 = 14046;

    t124 = (x909>(x910/(x911>x912)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x917 = -105;
	int16_t x918 = INT16_MIN;
	volatile int16_t x920 = -2916;
	static int32_t t125 = -7224410;

    t125 = (x917>(x918/(x919>x920)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x933 = 511LLU;
	int32_t x934 = INT32_MIN;
	uint8_t x936 = 53U;
	volatile int32_t t126 = -13616;

    t126 = (x933>(x934/(x935>x936)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x941 = 297467656;
	volatile uint8_t x942 = UINT8_MAX;
	uint64_t x943 = UINT64_MAX;
	int16_t x944 = -3;
	static int32_t t127 = -166883324;

    t127 = (x941>(x942/(x943>x944)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x949 = 0U;
	volatile int16_t x950 = 157;
	uint8_t x951 = UINT8_MAX;
	volatile int32_t t128 = -62008;

    t128 = (x949>(x950/(x951>x952)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x953 = INT32_MIN;
	volatile int16_t x954 = INT16_MIN;
	int32_t x955 = INT32_MAX;
	uint16_t x956 = 1U;

    t129 = (x953>(x954/(x955>x956)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x961 = INT8_MAX;
	uint8_t x963 = 1U;
	static volatile int16_t x964 = INT16_MIN;
	volatile int32_t t130 = 26099562;

    t130 = (x961>(x962/(x963>x964)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x965 = -1;
	int16_t x967 = -6;
	int64_t x968 = INT64_MIN;
	int32_t t131 = 109;

    t131 = (x965>(x966/(x967>x968)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x969 = -27016;
	static uint64_t x970 = 1306399504LLU;
	uint8_t x971 = UINT8_MAX;
	int32_t t132 = 12383;

    t132 = (x969>(x970/(x971>x972)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x973 = INT32_MAX;
	volatile int64_t x974 = -1LL;
	int8_t x975 = -1;
	volatile int32_t x976 = INT32_MIN;
	volatile int32_t t133 = 18430805;

    t133 = (x973>(x974/(x975>x976)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x981 = -124;
	int32_t x982 = -1;
	int16_t x983 = -11598;
	static volatile int16_t x984 = INT16_MIN;
	int32_t t134 = -16406168;

    t134 = (x981>(x982/(x983>x984)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x989 = 3U;
	int16_t x990 = INT16_MIN;
	static int32_t t135 = -289857;

    t135 = (x989>(x990/(x991>x992)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x997 = INT16_MIN;
	uint32_t x998 = UINT32_MAX;
	volatile int32_t x1000 = -694;
	int32_t t136 = 47;

    t136 = (x997>(x998/(x999>x1000)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x1001 = INT64_MAX;
	volatile int8_t x1002 = INT8_MAX;
	volatile int64_t x1003 = INT64_MAX;
	static int32_t t137 = 707974439;

    t137 = (x1001>(x1002/(x1003>x1004)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x1009 = INT16_MIN;
	uint8_t x1011 = UINT8_MAX;
	int8_t x1012 = 0;

    t138 = (x1009>(x1010/(x1011>x1012)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1013 = INT8_MIN;
	int64_t x1014 = INT64_MIN;
	int32_t x1015 = -1;
	static int8_t x1016 = -5;
	int32_t t139 = 97;

    t139 = (x1013>(x1014/(x1015>x1016)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x1021 = INT16_MAX;
	int16_t x1022 = INT16_MIN;

    t140 = (x1021>(x1022/(x1023>x1024)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x1026 = -1;
	int32_t x1027 = INT32_MAX;
	int8_t x1028 = INT8_MAX;
	int32_t t141 = 115781;

    t141 = (x1025>(x1026/(x1027>x1028)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x1042 = UINT32_MAX;
	uint16_t x1043 = UINT16_MAX;
	int64_t x1044 = -1LL;
	static volatile int32_t t142 = -1376;

    t142 = (x1041>(x1042/(x1043>x1044)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1046 = INT32_MIN;
	int8_t x1047 = -1;
	int16_t x1048 = INT16_MIN;
	volatile int32_t t143 = 45;

    t143 = (x1045>(x1046/(x1047>x1048)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1057 = INT8_MIN;
	int16_t x1059 = 13509;
	volatile int8_t x1060 = INT8_MIN;
	int32_t t144 = -7;

    t144 = (x1057>(x1058/(x1059>x1060)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1061 = INT8_MAX;
	volatile int64_t x1063 = 4630421304LL;
	int16_t x1064 = 898;
	static int32_t t145 = 13;

    t145 = (x1061>(x1062/(x1063>x1064)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1066 = -1;
	int32_t x1067 = 420357;
	volatile uint8_t x1068 = 1U;

    t146 = (x1065>(x1066/(x1067>x1068)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1069 = -152;
	uint64_t x1071 = 36LLU;
	uint16_t x1072 = 35U;
	int32_t t147 = -311402;

    t147 = (x1069>(x1070/(x1071>x1072)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1081 = -1;
	int64_t x1082 = INT64_MIN;
	volatile int32_t t148 = 971;

    t148 = (x1081>(x1082/(x1083>x1084)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1093 = INT64_MAX;
	uint8_t x1096 = 1U;
	volatile int32_t t149 = -217897;

    t149 = (x1093>(x1094/(x1095>x1096)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1097 = UINT64_MAX;
	int64_t x1098 = INT64_MAX;
	int16_t x1100 = -1305;
	volatile int32_t t150 = 60367;

    t150 = (x1097>(x1098/(x1099>x1100)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x1101 = 313U;
	uint64_t x1102 = 1307098334621LLU;
	static int32_t x1103 = 50853;
	static int64_t x1104 = INT64_MIN;
	volatile int32_t t151 = -47142109;

    t151 = (x1101>(x1102/(x1103>x1104)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1121 = 310;
	static volatile int32_t x1122 = INT32_MIN;
	static uint16_t x1124 = 2630U;
	volatile int32_t t152 = 206;

    t152 = (x1121>(x1122/(x1123>x1124)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x1134 = 99U;
	volatile uint32_t x1135 = 44012214U;
	int64_t x1136 = -1LL;
	int32_t t153 = 398;

    t153 = (x1133>(x1134/(x1135>x1136)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x1141 = UINT16_MAX;
	int16_t x1142 = 0;
	int64_t x1144 = INT64_MIN;
	int32_t t154 = 3;

    t154 = (x1141>(x1142/(x1143>x1144)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1149 = INT16_MIN;
	volatile uint64_t x1151 = UINT64_MAX;
	volatile int64_t x1152 = 1066203512389862122LL;
	int32_t t155 = 43599411;

    t155 = (x1149>(x1150/(x1151>x1152)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x1165 = -22;
	uint16_t x1166 = UINT16_MAX;
	volatile int64_t x1168 = -1LL;
	volatile int32_t t156 = -79015422;

    t156 = (x1165>(x1166/(x1167>x1168)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1181 = INT16_MAX;
	uint32_t x1182 = 0U;
	volatile uint32_t x1183 = UINT32_MAX;
	int16_t x1184 = 2665;
	volatile int32_t t157 = 18;

    t157 = (x1181>(x1182/(x1183>x1184)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1189 = -1;
	int64_t x1190 = -1LL;
	int64_t x1192 = -1LL;
	int32_t t158 = 750398409;

    t158 = (x1189>(x1190/(x1191>x1192)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1197 = -1;
	volatile int64_t x1200 = INT64_MIN;
	volatile int32_t t159 = 569;

    t159 = (x1197>(x1198/(x1199>x1200)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x1201 = INT8_MAX;
	static volatile int16_t x1202 = INT16_MIN;
	uint8_t x1204 = 15U;
	int32_t t160 = -5033799;

    t160 = (x1201>(x1202/(x1203>x1204)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x1205 = INT16_MIN;
	uint32_t x1206 = 350384001U;
	volatile uint8_t x1207 = UINT8_MAX;
	volatile int8_t x1208 = INT8_MIN;

    t161 = (x1205>(x1206/(x1207>x1208)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x1210 = INT64_MAX;
	volatile uint64_t x1211 = UINT64_MAX;
	int8_t x1212 = 1;
	int32_t t162 = 15;

    t162 = (x1209>(x1210/(x1211>x1212)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x1213 = UINT8_MAX;
	int8_t x1214 = -1;
	uint16_t x1216 = 3222U;
	volatile int32_t t163 = 73286787;

    t163 = (x1213>(x1214/(x1215>x1216)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1217 = 341789030;
	int32_t x1218 = INT32_MAX;
	int64_t x1219 = INT64_MAX;
	uint16_t x1220 = 79U;

    t164 = (x1217>(x1218/(x1219>x1220)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x1221 = INT8_MIN;
	int32_t x1222 = -1;
	int64_t x1223 = INT64_MAX;
	int8_t x1224 = -1;
	int32_t t165 = -25935;

    t165 = (x1221>(x1222/(x1223>x1224)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x1233 = -1LL;
	uint64_t x1235 = UINT64_MAX;
	volatile int32_t t166 = 3;

    t166 = (x1233>(x1234/(x1235>x1236)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x1237 = UINT16_MAX;
	static int32_t x1238 = INT32_MIN;
	int16_t x1239 = INT16_MIN;
	uint32_t x1240 = 392650U;
	volatile int32_t t167 = -351633230;

    t167 = (x1237>(x1238/(x1239>x1240)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x1241 = UINT64_MAX;
	int8_t x1242 = -1;
	int8_t x1244 = INT8_MAX;
	volatile int32_t t168 = -2747319;

    t168 = (x1241>(x1242/(x1243>x1244)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x1246 = 28467946998388069LL;
	static int8_t x1247 = INT8_MIN;
	uint32_t x1248 = 1U;
	volatile int32_t t169 = -115;

    t169 = (x1245>(x1246/(x1247>x1248)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1254 = 18U;
	int64_t x1255 = INT64_MAX;
	static int16_t x1256 = INT16_MIN;
	volatile int32_t t170 = 154;

    t170 = (x1253>(x1254/(x1255>x1256)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1257 = 0;
	int16_t x1259 = -56;
	uint64_t x1260 = 977829207641182LLU;

    t171 = (x1257>(x1258/(x1259>x1260)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1265 = 231134;
	int32_t x1266 = INT32_MAX;
	int32_t x1267 = 46622;
	static int64_t x1268 = -1LL;
	volatile int32_t t172 = 0;

    t172 = (x1265>(x1266/(x1267>x1268)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1273 = 968740876LLU;
	volatile int16_t x1274 = -1;
	static int64_t x1275 = 41942089549903251LL;
	int32_t x1276 = -6139325;
	int32_t t173 = -78313790;

    t173 = (x1273>(x1274/(x1275>x1276)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1289 = -5;
	int16_t x1290 = -1;
	volatile uint64_t x1292 = 30LLU;
	static volatile int32_t t174 = 211824366;

    t174 = (x1289>(x1290/(x1291>x1292)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1297 = INT16_MIN;
	int8_t x1298 = INT8_MIN;
	static int16_t x1299 = 1068;
	static int64_t x1300 = INT64_MIN;
	volatile int32_t t175 = 599425941;

    t175 = (x1297>(x1298/(x1299>x1300)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x1302 = 244714638419245057LLU;
	uint64_t x1303 = 2894708LLU;
	volatile int32_t t176 = 194744;

    t176 = (x1301>(x1302/(x1303>x1304)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1305 = INT16_MAX;
	uint8_t x1306 = UINT8_MAX;
	int8_t x1307 = -1;
	static int32_t x1308 = -442662;
	static volatile int32_t t177 = 0;

    t177 = (x1305>(x1306/(x1307>x1308)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x1309 = 63;
	uint32_t x1311 = UINT32_MAX;
	volatile uint32_t x1312 = 652U;

    t178 = (x1309>(x1310/(x1311>x1312)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x1313 = -1;
	int16_t x1314 = -1;
	volatile int32_t t179 = 244959711;

    t179 = (x1313>(x1314/(x1315>x1316)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1320 = 1626824416564035939LLU;
	volatile int32_t t180 = -255;

    t180 = (x1317>(x1318/(x1319>x1320)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1321 = INT32_MAX;
	int8_t x1322 = INT8_MIN;
	static uint32_t x1323 = UINT32_MAX;

    t181 = (x1321>(x1322/(x1323>x1324)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x1341 = INT8_MIN;
	int64_t x1343 = INT64_MAX;
	volatile int32_t x1344 = INT32_MAX;

    t182 = (x1341>(x1342/(x1343>x1344)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1345 = 1;
	int16_t x1347 = 50;
	int32_t x1348 = INT32_MIN;
	static int32_t t183 = -12417003;

    t183 = (x1345>(x1346/(x1347>x1348)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1349 = INT64_MIN;
	static uint32_t x1350 = UINT32_MAX;
	int16_t x1351 = 3832;
	int64_t x1352 = 118LL;
	int32_t t184 = 1;

    t184 = (x1349>(x1350/(x1351>x1352)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1365 = -1;
	static int32_t x1366 = -10;
	volatile int8_t x1368 = INT8_MIN;
	static volatile int32_t t185 = 85146;

    t185 = (x1365>(x1366/(x1367>x1368)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1369 = -1;
	static int8_t x1370 = INT8_MIN;
	static int64_t x1372 = -1LL;
	volatile int32_t t186 = -110207;

    t186 = (x1369>(x1370/(x1371>x1372)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1385 = -1;
	int32_t x1387 = -3;
	int32_t x1388 = INT32_MIN;
	int32_t t187 = -1506991;

    t187 = (x1385>(x1386/(x1387>x1388)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x1389 = INT32_MIN;
	volatile int32_t x1390 = -118;
	int32_t x1391 = 10617231;
	int64_t x1392 = INT64_MIN;
	volatile int32_t t188 = 677;

    t188 = (x1389>(x1390/(x1391>x1392)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1393 = UINT8_MAX;
	int8_t x1395 = 2;
	volatile int8_t x1396 = -2;
	int32_t t189 = 47259056;

    t189 = (x1393>(x1394/(x1395>x1396)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1397 = INT8_MAX;
	int8_t x1398 = INT8_MIN;
	static volatile int16_t x1400 = -1;
	int32_t t190 = 28105009;

    t190 = (x1397>(x1398/(x1399>x1400)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1401 = INT64_MIN;
	int64_t x1403 = INT64_MAX;
	int16_t x1404 = INT16_MAX;

    t191 = (x1401>(x1402/(x1403>x1404)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1405 = INT16_MIN;
	uint64_t x1406 = UINT64_MAX;
	static int8_t x1407 = -1;
	static int32_t t192 = -14109;

    t192 = (x1405>(x1406/(x1407>x1408)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1413 = 115;
	static int32_t x1416 = INT32_MIN;

    t193 = (x1413>(x1414/(x1415>x1416)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x1421 = 31138U;
	int8_t x1422 = INT8_MIN;
	static int16_t x1423 = INT16_MAX;
	int8_t x1424 = -18;
	volatile int32_t t194 = -5460737;

    t194 = (x1421>(x1422/(x1423>x1424)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1433 = UINT8_MAX;
	volatile int64_t x1434 = INT64_MAX;
	static int16_t x1436 = -579;
	int32_t t195 = 8862692;

    t195 = (x1433>(x1434/(x1435>x1436)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1437 = -1;
	int8_t x1438 = -2;
	int32_t x1439 = 20;
	volatile int16_t x1440 = -1;
	int32_t t196 = 16;

    t196 = (x1437>(x1438/(x1439>x1440)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1445 = INT32_MIN;
	volatile int64_t x1446 = -5541774126LL;
	int8_t x1447 = INT8_MAX;
	int8_t x1448 = INT8_MIN;

    t197 = (x1445>(x1446/(x1447>x1448)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1469 = 25;
	static int32_t x1470 = INT32_MAX;
	static int16_t x1471 = 1481;
	int8_t x1472 = INT8_MIN;
	int32_t t198 = 23180;

    t198 = (x1469>(x1470/(x1471>x1472)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x1473 = INT8_MIN;
	uint16_t x1474 = 179U;
	int8_t x1475 = 9;
	volatile int64_t x1476 = -1412462815446LL;
	static int32_t t199 = -7843199;

    t199 = (x1473>(x1474/(x1475>x1476)));

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

