
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

uint32_t x1 = 55U;
int32_t x26 = 516788999;
volatile int32_t x32 = 7385540;
int8_t x42 = INT8_MAX;
uint8_t x46 = 0U;
volatile uint8_t x50 = UINT8_MAX;
volatile int32_t t8 = 45;
int64_t x59 = -1LL;
int8_t x70 = -2;
uint32_t x72 = 4267596U;
volatile int16_t x92 = -577;
volatile int64_t x117 = 50LL;
int8_t x118 = INT8_MIN;
uint32_t x120 = UINT32_MAX;
int64_t x123 = -1LL;
volatile int32_t x124 = INT32_MIN;
volatile int32_t t18 = 46417;
volatile int64_t x133 = -1439868LL;
int64_t x136 = -18338LL;
volatile int32_t t19 = 366;
int16_t x141 = INT16_MIN;
uint8_t x142 = UINT8_MAX;
static int16_t x143 = -196;
int32_t t20 = 2;
static volatile int32_t t21 = 228040;
uint64_t x153 = 1389457LLU;
int8_t x154 = 1;
int32_t x155 = -1;
volatile int32_t t22 = -168023;
uint32_t x162 = 234865530U;
int8_t x163 = 9;
int32_t x169 = 2;
static int32_t t24 = 32292;
static int16_t x179 = -73;
uint8_t x200 = UINT8_MAX;
int32_t t28 = -706;
uint8_t x201 = 68U;
int16_t x204 = INT16_MIN;
int32_t t29 = 1;
volatile int64_t x207 = -14878330238116LL;
volatile uint16_t x210 = 41U;
int32_t x212 = INT32_MAX;
static uint64_t x214 = 36670418789989911LLU;
static volatile uint8_t x216 = UINT8_MAX;
uint64_t x226 = UINT64_MAX;
volatile int8_t x230 = -1;
static uint16_t x232 = UINT16_MAX;
int16_t x250 = -38;
int32_t t37 = -46110;
int8_t x254 = -1;
uint64_t x266 = 2936907692825LLU;
volatile int32_t t40 = -87242914;
uint16_t x269 = 21U;
uint16_t x271 = UINT16_MAX;
static int64_t x276 = -1LL;
volatile uint16_t x296 = 26125U;
volatile int32_t t43 = -11226;
uint32_t x307 = 57472U;
static int8_t x316 = INT8_MIN;
uint64_t x318 = 368361517267LLU;
uint64_t x319 = UINT64_MAX;
int32_t x327 = -1;
int32_t t48 = 6532;
static int64_t x343 = INT64_MIN;
static volatile int64_t x348 = INT64_MAX;
int32_t t51 = 716;
volatile uint8_t x351 = 28U;
static uint64_t x354 = 146893522472596910LLU;
volatile int32_t t53 = 31;
int32_t x393 = 561;
int8_t x395 = INT8_MIN;
int64_t x396 = INT64_MAX;
int32_t t58 = -26;
static volatile int32_t t59 = 5;
int64_t x403 = INT64_MIN;
volatile uint32_t x405 = 1697443U;
static volatile int32_t x408 = INT32_MIN;
volatile int8_t x412 = INT8_MAX;
int32_t t62 = 7626;
static int32_t x420 = -1;
static uint8_t x434 = UINT8_MAX;
uint8_t x436 = 3U;
int32_t t67 = 374628034;
volatile int64_t x451 = INT64_MAX;
uint8_t x456 = 4U;
int8_t x461 = INT8_MAX;
int8_t x462 = -43;
volatile uint8_t x467 = 48U;
volatile int64_t x469 = -1LL;
int16_t x470 = -22;
volatile uint8_t x474 = UINT8_MAX;
static int64_t x476 = INT64_MIN;
volatile uint16_t x490 = 5U;
static int16_t x493 = 63;
static int32_t t77 = 7;
static volatile uint32_t x504 = UINT32_MAX;
int8_t x506 = -1;
int8_t x508 = INT8_MAX;
volatile int32_t t82 = 67433705;
volatile int32_t x522 = -1;
volatile uint64_t x549 = UINT64_MAX;
uint32_t x559 = 7U;
volatile int32_t t87 = -2;
int32_t x562 = -1;
static int16_t x571 = -1;
uint32_t x574 = 13U;
uint16_t x579 = 13735U;
int32_t t91 = 3423;
int16_t x582 = INT16_MIN;
static volatile int32_t t92 = -8377370;
int8_t x588 = INT8_MIN;
uint32_t x602 = UINT32_MAX;
static int32_t t96 = -428566;
int32_t x615 = INT32_MIN;
int8_t x618 = -1;
int32_t x632 = -93108;
volatile int32_t t101 = -11867;
static uint8_t x635 = UINT8_MAX;
static uint64_t x646 = 1404933105LLU;
int8_t x653 = INT8_MIN;
uint32_t x656 = 2088U;
static int8_t x665 = -45;
static int32_t x668 = INT32_MAX;
volatile int32_t t109 = 250180;
uint64_t x698 = 594312743LLU;
int32_t x704 = -812745407;
static int32_t x705 = INT32_MIN;
int8_t x715 = 36;
int32_t t113 = 9281;
volatile int64_t x733 = -1LL;
volatile int32_t t118 = -8975272;
int32_t x759 = INT32_MAX;
int8_t x765 = -1;
uint8_t x772 = UINT8_MAX;
uint32_t x781 = UINT32_MAX;
static volatile int32_t t124 = -59;
int8_t x791 = INT8_MAX;
volatile int64_t x792 = -1LL;
int64_t x796 = -1LL;
int32_t t126 = -631891159;
volatile uint64_t x816 = UINT64_MAX;
volatile int8_t x823 = INT8_MIN;
uint8_t x824 = 31U;
static int8_t x832 = INT8_MIN;
volatile int32_t t130 = -768525;
int8_t x835 = -1;
int32_t t132 = 211;
static uint64_t x848 = 8247253LLU;
uint16_t x857 = UINT16_MAX;
static int8_t x859 = -1;
int32_t x860 = INT32_MIN;
int32_t t137 = 3213;
volatile int32_t t139 = 372;
uint64_t x889 = UINT64_MAX;
int32_t x890 = -1;
static volatile uint32_t x894 = 1594913636U;
volatile uint16_t x901 = 2295U;
int16_t x902 = INT16_MIN;
int16_t x903 = -1;
uint16_t x913 = UINT16_MAX;
int16_t x930 = INT16_MIN;
volatile int32_t x939 = INT32_MIN;
uint32_t x950 = 6U;
int8_t x960 = -2;
uint64_t x962 = 877420120532LLU;
uint64_t x975 = 551016075583438LLU;
uint64_t x976 = UINT64_MAX;
int16_t x982 = 3;
uint64_t x983 = 8678340402135267LLU;
volatile uint64_t x984 = 505LLU;
static int32_t t156 = -225586;
static int32_t x998 = INT32_MIN;
volatile int32_t t158 = 426;
int32_t x1007 = 16919;
uint8_t x1009 = 1U;
int32_t x1014 = INT32_MIN;
static volatile int32_t t162 = 1;
uint16_t x1025 = UINT16_MAX;
uint16_t x1026 = 1U;
int16_t x1029 = INT16_MAX;
volatile int16_t x1031 = INT16_MIN;
volatile int32_t t164 = 1033295452;
uint64_t x1033 = 2988354788501783906LLU;
uint16_t x1067 = 12227U;
uint16_t x1078 = 223U;
volatile int32_t t169 = 62888395;
uint16_t x1089 = 4130U;
volatile int8_t x1102 = -1;
uint64_t x1103 = 25337534720340LLU;
uint64_t x1104 = 535893625193LLU;
static int64_t x1106 = INT64_MAX;
volatile uint8_t x1114 = UINT8_MAX;
int64_t x1115 = -17240196940190572LL;
int8_t x1139 = INT8_MAX;
static int8_t x1144 = INT8_MAX;
static volatile int32_t x1152 = -8901097;
static int32_t x1168 = INT32_MAX;
volatile int32_t t183 = 63;
volatile uint8_t x1177 = UINT8_MAX;
volatile int8_t x1179 = 0;
uint32_t x1180 = 24984U;
int32_t t185 = -1;
int8_t x1198 = -1;
static int32_t x1221 = INT32_MIN;
static uint32_t x1222 = UINT32_MAX;
uint16_t x1224 = 64U;
volatile uint8_t x1225 = 16U;
static volatile int16_t x1227 = 456;
int8_t x1228 = -62;
static volatile int32_t t188 = 20314937;
volatile int32_t x1229 = INT32_MIN;
int16_t x1231 = 11;
uint8_t x1263 = 90U;
int8_t x1266 = 0;
static uint8_t x1267 = UINT8_MAX;
uint32_t x1270 = 876234040U;
int16_t x1272 = -21;
static volatile int8_t x1273 = INT8_MAX;
static int32_t t196 = -531;
uint32_t x1286 = UINT32_MAX;
int32_t t199 = -23;


void f0(void) {
    	volatile uint32_t x2 = 377603U;
	uint64_t x3 = 826LLU;
	int16_t x4 = INT16_MAX;
	static int32_t t0 = 14932;

    t0 = (((x1*x2)*x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x5 = 0U;
	volatile int8_t x6 = INT8_MIN;
	int32_t x7 = 170073526;
	int64_t x8 = 1227511LL;
	volatile int32_t t1 = 469986273;

    t1 = (((x5*x6)*x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x17 = UINT8_MAX;
	static uint32_t x18 = 909423504U;
	uint16_t x19 = 23U;
	uint64_t x20 = 729559002845386224LLU;
	static int32_t t2 = 25394489;

    t2 = (((x17*x18)*x19)==x20);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x25 = 2101U;
	int16_t x27 = -2178;
	uint64_t x28 = 518912LLU;
	int32_t t3 = 695906;

    t3 = (((x25*x26)*x27)==x28);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x29 = -1;
	int16_t x30 = -12;
	int16_t x31 = -1;
	volatile int32_t t4 = -11410;

    t4 = (((x29*x30)*x31)==x32);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x41 = 1700634171063LLU;
	uint32_t x43 = 1509U;
	int8_t x44 = 1;
	volatile int32_t t5 = 41;

    t5 = (((x41*x42)*x43)==x44);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x45 = 21U;
	int64_t x47 = -2608LL;
	int16_t x48 = INT16_MIN;
	static int32_t t6 = 1;

    t6 = (((x45*x46)*x47)==x48);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x49 = 86U;
	int16_t x51 = -1;
	int8_t x52 = INT8_MIN;
	int32_t t7 = 1499;

    t7 = (((x49*x50)*x51)==x52);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x53 = UINT64_MAX;
	int16_t x54 = INT16_MAX;
	int8_t x55 = -1;
	int8_t x56 = INT8_MIN;

    t8 = (((x53*x54)*x55)==x56);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x57 = -13;
	volatile int64_t x58 = -1443428LL;
	volatile int64_t x60 = INT64_MIN;
	int32_t t9 = 1;

    t9 = (((x57*x58)*x59)==x60);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x61 = INT32_MAX;
	volatile uint32_t x62 = UINT32_MAX;
	int32_t x63 = INT32_MAX;
	int32_t x64 = -1;
	volatile int32_t t10 = -247;

    t10 = (((x61*x62)*x63)==x64);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x69 = 127163U;
	uint8_t x71 = 60U;
	volatile int32_t t11 = -118;

    t11 = (((x69*x70)*x71)==x72);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x81 = -1;
	static int8_t x82 = INT8_MAX;
	uint32_t x83 = 71311183U;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t12 = 637;

    t12 = (((x81*x82)*x83)==x84);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x89 = 2U;
	uint32_t x90 = 63041026U;
	int8_t x91 = INT8_MIN;
	volatile int32_t t13 = 18;

    t13 = (((x89*x90)*x91)==x92);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x97 = INT64_MIN;
	uint64_t x98 = UINT64_MAX;
	int64_t x99 = -1LL;
	static uint16_t x100 = 4U;
	static volatile int32_t t14 = 8;

    t14 = (((x97*x98)*x99)==x100);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x109 = -1;
	volatile uint64_t x110 = UINT64_MAX;
	volatile int8_t x111 = -1;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t15 = 0;

    t15 = (((x109*x110)*x111)==x112);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x113 = INT16_MAX;
	int16_t x114 = 1;
	int16_t x115 = INT16_MIN;
	uint64_t x116 = 678748628857114LLU;
	static volatile int32_t t16 = -23;

    t16 = (((x113*x114)*x115)==x116);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x119 = 3;
	volatile int32_t t17 = -26616;

    t17 = (((x117*x118)*x119)==x120);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x121 = 1U;
	static uint16_t x122 = 56U;

    t18 = (((x121*x122)*x123)==x124);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x134 = -1LL;
	int16_t x135 = INT16_MAX;

    t19 = (((x133*x134)*x135)==x136);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x144 = 5076721398385LLU;

    t20 = (((x141*x142)*x143)==x144);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x149 = -14;
	static volatile int64_t x150 = -1LL;
	int16_t x151 = INT16_MIN;
	volatile int8_t x152 = 1;

    t21 = (((x149*x150)*x151)==x152);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x156 = 14;

    t22 = (((x153*x154)*x155)==x156);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x161 = -1LL;
	volatile int16_t x164 = INT16_MAX;
	int32_t t23 = -1;

    t23 = (((x161*x162)*x163)==x164);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x170 = -1;
	static uint64_t x171 = UINT64_MAX;
	int8_t x172 = -2;

    t24 = (((x169*x170)*x171)==x172);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x173 = 9U;
	int8_t x174 = -1;
	volatile uint8_t x175 = 15U;
	uint16_t x176 = 63U;
	static int32_t t25 = 343331;

    t25 = (((x173*x174)*x175)==x176);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x177 = INT8_MIN;
	static volatile uint8_t x178 = 20U;
	volatile uint16_t x180 = UINT16_MAX;
	static volatile int32_t t26 = 367;

    t26 = (((x177*x178)*x179)==x180);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x181 = UINT32_MAX;
	int32_t x182 = INT32_MIN;
	uint16_t x183 = 32U;
	uint64_t x184 = 157613704355LLU;
	static int32_t t27 = 302453681;

    t27 = (((x181*x182)*x183)==x184);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x197 = 7U;
	uint8_t x198 = 1U;
	int16_t x199 = INT16_MAX;

    t28 = (((x197*x198)*x199)==x200);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x202 = -1LL;
	int64_t x203 = -1LL;

    t29 = (((x201*x202)*x203)==x204);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x205 = INT8_MIN;
	int8_t x206 = -1;
	int16_t x208 = INT16_MAX;
	int32_t t30 = 1466;

    t30 = (((x205*x206)*x207)==x208);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x209 = -100680LL;
	volatile int16_t x211 = INT16_MIN;
	static volatile int32_t t31 = -5525;

    t31 = (((x209*x210)*x211)==x212);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x213 = INT32_MAX;
	volatile uint64_t x215 = UINT64_MAX;
	int32_t t32 = -19755;

    t32 = (((x213*x214)*x215)==x216);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x221 = -1;
	int32_t x222 = 62;
	static volatile uint8_t x223 = 1U;
	int64_t x224 = INT64_MAX;
	volatile int32_t t33 = -60;

    t33 = (((x221*x222)*x223)==x224);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x225 = 10U;
	int8_t x227 = -1;
	static int32_t x228 = 116787724;
	int32_t t34 = -98;

    t34 = (((x225*x226)*x227)==x228);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x229 = INT16_MIN;
	static int8_t x231 = 5;
	static int32_t t35 = 1474;

    t35 = (((x229*x230)*x231)==x232);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x245 = 5U;
	uint64_t x246 = UINT64_MAX;
	int32_t x247 = 2;
	static volatile uint32_t x248 = UINT32_MAX;
	volatile int32_t t36 = -1;

    t36 = (((x245*x246)*x247)==x248);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x249 = INT8_MIN;
	volatile int64_t x251 = -3LL;
	int8_t x252 = INT8_MIN;

    t37 = (((x249*x250)*x251)==x252);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x253 = INT8_MIN;
	volatile int8_t x255 = 16;
	static volatile uint64_t x256 = UINT64_MAX;
	int32_t t38 = 804488;

    t38 = (((x253*x254)*x255)==x256);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x257 = -1;
	uint64_t x258 = 164568LLU;
	static volatile uint64_t x259 = 93901576531LLU;
	static int32_t x260 = 209096;
	static int32_t t39 = -30314;

    t39 = (((x257*x258)*x259)==x260);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x265 = 456316112LLU;
	int32_t x267 = INT32_MIN;
	uint16_t x268 = UINT16_MAX;

    t40 = (((x265*x266)*x267)==x268);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x270 = UINT8_MAX;
	uint32_t x272 = UINT32_MAX;
	int32_t t41 = -150626;

    t41 = (((x269*x270)*x271)==x272);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x273 = INT16_MIN;
	static uint32_t x274 = 18U;
	static uint8_t x275 = UINT8_MAX;
	static volatile int32_t t42 = -18437;

    t42 = (((x273*x274)*x275)==x276);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x293 = 321LL;
	uint8_t x294 = 26U;
	int8_t x295 = INT8_MAX;

    t43 = (((x293*x294)*x295)==x296);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x301 = INT16_MIN;
	int64_t x302 = -1LL;
	int64_t x303 = 124035639442LL;
	int64_t x304 = -78946118013663780LL;
	int32_t t44 = -369;

    t44 = (((x301*x302)*x303)==x304);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x305 = UINT32_MAX;
	int8_t x306 = -1;
	int32_t x308 = INT32_MIN;
	int32_t t45 = 2;

    t45 = (((x305*x306)*x307)==x308);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x313 = 0;
	int16_t x314 = 14910;
	uint64_t x315 = 30406160159LLU;
	volatile int32_t t46 = -1;

    t46 = (((x313*x314)*x315)==x316);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x317 = 15U;
	int64_t x320 = INT64_MAX;
	volatile int32_t t47 = 159209342;

    t47 = (((x317*x318)*x319)==x320);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x325 = INT16_MAX;
	int8_t x326 = INT8_MAX;
	volatile int16_t x328 = INT16_MIN;

    t48 = (((x325*x326)*x327)==x328);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x337 = UINT32_MAX;
	int8_t x338 = 1;
	static uint16_t x339 = 4U;
	int32_t x340 = INT32_MIN;
	int32_t t49 = -16;

    t49 = (((x337*x338)*x339)==x340);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x341 = UINT8_MAX;
	int8_t x342 = 0;
	static volatile int32_t x344 = -164495;
	volatile int32_t t50 = 145;

    t50 = (((x341*x342)*x343)==x344);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x345 = INT16_MIN;
	uint16_t x346 = 20U;
	int8_t x347 = -1;

    t51 = (((x345*x346)*x347)==x348);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x349 = -510153426894LL;
	volatile int16_t x350 = 2186;
	int32_t x352 = -11;
	int32_t t52 = 29716;

    t52 = (((x349*x350)*x351)==x352);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x353 = 560;
	static uint16_t x355 = 0U;
	int64_t x356 = INT64_MIN;

    t53 = (((x353*x354)*x355)==x356);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x365 = 11U;
	int8_t x366 = INT8_MIN;
	int8_t x367 = -25;
	int8_t x368 = 0;
	static volatile int32_t t54 = -1141232;

    t54 = (((x365*x366)*x367)==x368);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x369 = INT16_MIN;
	static uint16_t x370 = 0U;
	volatile int8_t x371 = INT8_MAX;
	static int64_t x372 = INT64_MIN;
	volatile int32_t t55 = 0;

    t55 = (((x369*x370)*x371)==x372);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x377 = UINT32_MAX;
	int8_t x378 = -1;
	static int16_t x379 = INT16_MIN;
	int32_t x380 = 89331660;
	int32_t t56 = 25;

    t56 = (((x377*x378)*x379)==x380);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x385 = 7922725158952LLU;
	int8_t x386 = INT8_MIN;
	static int16_t x387 = INT16_MIN;
	uint32_t x388 = UINT32_MAX;
	int32_t t57 = 0;

    t57 = (((x385*x386)*x387)==x388);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x394 = 14U;

    t58 = (((x393*x394)*x395)==x396);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x397 = -1;
	static volatile int16_t x398 = INT16_MIN;
	volatile int8_t x399 = INT8_MIN;
	int16_t x400 = -423;

    t59 = (((x397*x398)*x399)==x400);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x401 = 455299LLU;
	uint8_t x402 = 4U;
	uint64_t x404 = 2063944030648421LLU;
	int32_t t60 = 9438;

    t60 = (((x401*x402)*x403)==x404);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x406 = 30;
	uint32_t x407 = UINT32_MAX;
	int32_t t61 = 0;

    t61 = (((x405*x406)*x407)==x408);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x409 = 3482;
	int16_t x410 = -1;
	uint16_t x411 = 88U;

    t62 = (((x409*x410)*x411)==x412);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x413 = -1LL;
	uint8_t x414 = 0U;
	static volatile int8_t x415 = -1;
	volatile int8_t x416 = INT8_MAX;
	int32_t t63 = -2207994;

    t63 = (((x413*x414)*x415)==x416);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x417 = 208U;
	int8_t x418 = INT8_MIN;
	volatile uint64_t x419 = UINT64_MAX;
	volatile int32_t t64 = 1041;

    t64 = (((x417*x418)*x419)==x420);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x429 = UINT16_MAX;
	static uint64_t x430 = 9499578LLU;
	int64_t x431 = INT64_MIN;
	int32_t x432 = 13532;
	volatile int32_t t65 = 9994872;

    t65 = (((x429*x430)*x431)==x432);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x433 = -1;
	int64_t x435 = -10669660574LL;
	volatile int32_t t66 = -720;

    t66 = (((x433*x434)*x435)==x436);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x437 = 527810499U;
	uint8_t x438 = 0U;
	int64_t x439 = 32LL;
	int32_t x440 = 4;

    t67 = (((x437*x438)*x439)==x440);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x449 = -1;
	uint64_t x450 = 363LLU;
	int16_t x452 = 13103;
	int32_t t68 = -432;

    t68 = (((x449*x450)*x451)==x452);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x453 = UINT32_MAX;
	volatile uint64_t x454 = UINT64_MAX;
	uint16_t x455 = 1492U;
	volatile int32_t t69 = 195933;

    t69 = (((x453*x454)*x455)==x456);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x457 = UINT32_MAX;
	uint32_t x458 = UINT32_MAX;
	int32_t x459 = INT32_MIN;
	static volatile int16_t x460 = INT16_MAX;
	int32_t t70 = 274;

    t70 = (((x457*x458)*x459)==x460);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x463 = INT16_MIN;
	static uint32_t x464 = 2224696U;
	static volatile int32_t t71 = 0;

    t71 = (((x461*x462)*x463)==x464);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x465 = UINT32_MAX;
	uint8_t x466 = 0U;
	int64_t x468 = INT64_MIN;
	int32_t t72 = 2987857;

    t72 = (((x465*x466)*x467)==x468);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x471 = UINT64_MAX;
	int8_t x472 = INT8_MAX;
	volatile int32_t t73 = -299167;

    t73 = (((x469*x470)*x471)==x472);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int8_t x473 = 4;
	int8_t x475 = -1;
	int32_t t74 = 5;

    t74 = (((x473*x474)*x475)==x476);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x481 = UINT64_MAX;
	int8_t x482 = INT8_MIN;
	volatile uint8_t x483 = 4U;
	uint32_t x484 = UINT32_MAX;
	volatile int32_t t75 = -220843;

    t75 = (((x481*x482)*x483)==x484);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x489 = 1846749LLU;
	int64_t x491 = 1348LL;
	int32_t x492 = 9546;
	static int32_t t76 = 194966661;

    t76 = (((x489*x490)*x491)==x492);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x494 = -1LL;
	int16_t x495 = 603;
	volatile int8_t x496 = -1;

    t77 = (((x493*x494)*x495)==x496);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x497 = INT8_MAX;
	static volatile uint32_t x498 = 14906U;
	int16_t x499 = -1;
	int16_t x500 = -4397;
	volatile int32_t t78 = -293654920;

    t78 = (((x497*x498)*x499)==x500);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x501 = 7U;
	volatile uint64_t x502 = UINT64_MAX;
	uint64_t x503 = 137372014842216LLU;
	volatile int32_t t79 = 8;

    t79 = (((x501*x502)*x503)==x504);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x505 = -1;
	volatile int16_t x507 = INT16_MIN;
	static volatile int32_t t80 = -295201;

    t80 = (((x505*x506)*x507)==x508);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x509 = 3059U;
	uint32_t x510 = UINT32_MAX;
	static volatile int8_t x511 = INT8_MIN;
	static int8_t x512 = 0;
	int32_t t81 = -3;

    t81 = (((x509*x510)*x511)==x512);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x513 = 10019169604LLU;
	static int64_t x514 = -126839434119LL;
	static int32_t x515 = INT32_MAX;
	static uint32_t x516 = 299U;

    t82 = (((x513*x514)*x515)==x516);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x517 = 43616554U;
	int32_t x518 = INT32_MIN;
	int8_t x519 = -1;
	int64_t x520 = 5546948318893005LL;
	int32_t t83 = 0;

    t83 = (((x517*x518)*x519)==x520);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x521 = -1;
	int8_t x523 = INT8_MIN;
	int64_t x524 = INT64_MAX;
	static volatile int32_t t84 = 2019138;

    t84 = (((x521*x522)*x523)==x524);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x533 = -1;
	int8_t x534 = -2;
	volatile uint16_t x535 = 5861U;
	int8_t x536 = -1;
	int32_t t85 = 884951;

    t85 = (((x533*x534)*x535)==x536);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x550 = -62;
	int32_t x551 = 3113757;
	int64_t x552 = -6536LL;
	volatile int32_t t86 = 345;

    t86 = (((x549*x550)*x551)==x552);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x557 = 7246U;
	static uint16_t x558 = UINT16_MAX;
	int64_t x560 = INT64_MIN;

    t87 = (((x557*x558)*x559)==x560);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x561 = UINT32_MAX;
	int32_t x563 = 3815;
	uint16_t x564 = UINT16_MAX;
	int32_t t88 = 11;

    t88 = (((x561*x562)*x563)==x564);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x569 = INT8_MAX;
	static int8_t x570 = INT8_MIN;
	int16_t x572 = INT16_MIN;
	int32_t t89 = 51;

    t89 = (((x569*x570)*x571)==x572);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x573 = INT32_MAX;
	static volatile uint8_t x575 = 50U;
	static int64_t x576 = INT64_MIN;
	static int32_t t90 = -9;

    t90 = (((x573*x574)*x575)==x576);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x577 = 245U;
	static uint8_t x578 = UINT8_MAX;
	volatile int64_t x580 = -1LL;

    t91 = (((x577*x578)*x579)==x580);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x581 = -1LL;
	static uint8_t x583 = 13U;
	volatile int8_t x584 = -45;

    t92 = (((x581*x582)*x583)==x584);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x585 = INT32_MAX;
	volatile uint32_t x586 = UINT32_MAX;
	volatile uint16_t x587 = 23U;
	volatile int32_t t93 = 5102127;

    t93 = (((x585*x586)*x587)==x588);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint32_t x589 = 111070632U;
	volatile uint32_t x590 = UINT32_MAX;
	uint8_t x591 = 11U;
	int32_t x592 = -1;
	volatile int32_t t94 = -486598;

    t94 = (((x589*x590)*x591)==x592);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x593 = INT8_MIN;
	volatile int32_t x594 = 0;
	volatile int8_t x595 = -1;
	volatile int64_t x596 = -1648LL;
	int32_t t95 = -37438831;

    t95 = (((x593*x594)*x595)==x596);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x601 = UINT8_MAX;
	uint32_t x603 = 28309162U;
	int32_t x604 = INT32_MAX;

    t96 = (((x601*x602)*x603)==x604);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x609 = 9461594524LLU;
	static int16_t x610 = -30;
	static int8_t x611 = INT8_MAX;
	static uint64_t x612 = UINT64_MAX;
	volatile int32_t t97 = 1063888179;

    t97 = (((x609*x610)*x611)==x612);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x613 = INT8_MIN;
	static volatile int64_t x614 = -1LL;
	static int16_t x616 = -1;
	volatile int32_t t98 = 652971;

    t98 = (((x613*x614)*x615)==x616);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x617 = -1;
	uint8_t x619 = 4U;
	int64_t x620 = INT64_MIN;
	volatile int32_t t99 = -7948309;

    t99 = (((x617*x618)*x619)==x620);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint32_t x621 = UINT32_MAX;
	int32_t x622 = -1;
	volatile uint16_t x623 = 2U;
	volatile int64_t x624 = 18951542643927662LL;
	volatile int32_t t100 = 512224508;

    t100 = (((x621*x622)*x623)==x624);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x629 = 31U;
	int32_t x630 = 2263;
	static volatile int16_t x631 = -3;

    t101 = (((x629*x630)*x631)==x632);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x633 = UINT32_MAX;
	uint8_t x634 = UINT8_MAX;
	volatile int64_t x636 = 235554169829462LL;
	volatile int32_t t102 = -38915;

    t102 = (((x633*x634)*x635)==x636);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x645 = UINT16_MAX;
	static uint32_t x647 = UINT32_MAX;
	int16_t x648 = -1;
	volatile int32_t t103 = 1118;

    t103 = (((x645*x646)*x647)==x648);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x654 = 57515545263LL;
	uint32_t x655 = 1405U;
	int32_t t104 = -3929116;

    t104 = (((x653*x654)*x655)==x656);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x661 = UINT8_MAX;
	uint16_t x662 = 155U;
	uint8_t x663 = 1U;
	static uint32_t x664 = 1702U;
	int32_t t105 = -764829126;

    t105 = (((x661*x662)*x663)==x664);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x666 = 19U;
	uint8_t x667 = 15U;
	int32_t t106 = 1491366;

    t106 = (((x665*x666)*x667)==x668);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x677 = -798695539128622997LL;
	int8_t x678 = 4;
	int32_t x679 = -1;
	static volatile uint64_t x680 = UINT64_MAX;
	int32_t t107 = 349203;

    t107 = (((x677*x678)*x679)==x680);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x685 = INT8_MAX;
	uint8_t x686 = 37U;
	static uint64_t x687 = 169259625177171LLU;
	int16_t x688 = -206;
	volatile int32_t t108 = 58742;

    t108 = (((x685*x686)*x687)==x688);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x693 = UINT64_MAX;
	volatile uint32_t x694 = 392867637U;
	volatile int8_t x695 = 1;
	static int16_t x696 = INT16_MIN;

    t109 = (((x693*x694)*x695)==x696);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x697 = INT64_MIN;
	uint64_t x699 = 42190016414LLU;
	int16_t x700 = INT16_MIN;
	volatile int32_t t110 = 0;

    t110 = (((x697*x698)*x699)==x700);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x701 = -87;
	uint32_t x702 = 26239025U;
	int8_t x703 = INT8_MIN;
	int32_t t111 = 176733;

    t111 = (((x701*x702)*x703)==x704);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x706 = -1LL;
	int64_t x707 = -1150477LL;
	int8_t x708 = INT8_MIN;
	int32_t t112 = -289392260;

    t112 = (((x705*x706)*x707)==x708);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x713 = 2520391;
	uint8_t x714 = 3U;
	int16_t x716 = INT16_MIN;

    t113 = (((x713*x714)*x715)==x716);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint8_t x717 = 6U;
	int16_t x718 = 91;
	static volatile int16_t x719 = 107;
	static uint32_t x720 = UINT32_MAX;
	int32_t t114 = 90615;

    t114 = (((x717*x718)*x719)==x720);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x721 = INT8_MIN;
	volatile uint8_t x722 = 14U;
	int32_t x723 = -1;
	uint64_t x724 = 2107853214284LLU;
	volatile int32_t t115 = 3;

    t115 = (((x721*x722)*x723)==x724);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x734 = 5;
	uint32_t x735 = 2U;
	static uint64_t x736 = UINT64_MAX;
	volatile int32_t t116 = -25073686;

    t116 = (((x733*x734)*x735)==x736);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x741 = -1LL;
	int8_t x742 = -1;
	int16_t x743 = INT16_MIN;
	volatile int64_t x744 = -12792LL;
	volatile int32_t t117 = 1413;

    t117 = (((x741*x742)*x743)==x744);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x749 = -1LL;
	volatile uint16_t x750 = 127U;
	static int8_t x751 = INT8_MAX;
	int16_t x752 = -1;

    t118 = (((x749*x750)*x751)==x752);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x757 = INT32_MAX;
	uint32_t x758 = UINT32_MAX;
	uint64_t x760 = UINT64_MAX;
	int32_t t119 = -106;

    t119 = (((x757*x758)*x759)==x760);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x761 = 363938LLU;
	uint64_t x762 = 1801LLU;
	volatile uint16_t x763 = 314U;
	volatile int8_t x764 = INT8_MIN;
	int32_t t120 = 26;

    t120 = (((x761*x762)*x763)==x764);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x766 = -2;
	int8_t x767 = -1;
	volatile uint32_t x768 = UINT32_MAX;
	volatile int32_t t121 = -123;

    t121 = (((x765*x766)*x767)==x768);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x769 = -99;
	int8_t x770 = -1;
	int64_t x771 = -2LL;
	volatile int32_t t122 = 508459165;

    t122 = (((x769*x770)*x771)==x772);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x773 = -1LL;
	static int16_t x774 = -3;
	int32_t x775 = INT32_MIN;
	uint32_t x776 = 14583582U;
	volatile int32_t t123 = 71426;

    t123 = (((x773*x774)*x775)==x776);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x782 = UINT16_MAX;
	uint16_t x783 = 530U;
	static uint64_t x784 = 50416383924787LLU;

    t124 = (((x781*x782)*x783)==x784);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x789 = INT64_MIN;
	uint64_t x790 = 553345815902772263LLU;
	volatile int32_t t125 = -39570030;

    t125 = (((x789*x790)*x791)==x792);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x793 = 5U;
	int16_t x794 = INT16_MIN;
	uint64_t x795 = 4772775308878655LLU;

    t126 = (((x793*x794)*x795)==x796);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x813 = INT8_MIN;
	volatile int64_t x814 = 0LL;
	uint16_t x815 = 0U;
	volatile int32_t t127 = -10;

    t127 = (((x813*x814)*x815)==x816);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x817 = UINT16_MAX;
	uint32_t x818 = UINT32_MAX;
	uint64_t x819 = 75590395834426LLU;
	uint64_t x820 = 12167327791858304LLU;
	int32_t t128 = -5402506;

    t128 = (((x817*x818)*x819)==x820);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x821 = -14562058;
	volatile uint32_t x822 = UINT32_MAX;
	volatile int32_t t129 = 256428;

    t129 = (((x821*x822)*x823)==x824);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x829 = 3160U;
	uint16_t x830 = UINT16_MAX;
	uint16_t x831 = 28623U;

    t130 = (((x829*x830)*x831)==x832);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x833 = INT16_MAX;
	uint64_t x834 = 75173LLU;
	int32_t x836 = INT32_MIN;
	int32_t t131 = 3795823;

    t131 = (((x833*x834)*x835)==x836);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x841 = UINT64_MAX;
	static uint8_t x842 = UINT8_MAX;
	uint8_t x843 = UINT8_MAX;
	int32_t x844 = INT32_MAX;

    t132 = (((x841*x842)*x843)==x844);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x845 = 0;
	volatile int8_t x846 = -1;
	volatile int64_t x847 = -1LL;
	int32_t t133 = -1585;

    t133 = (((x845*x846)*x847)==x848);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x849 = UINT16_MAX;
	volatile int64_t x850 = -1LL;
	uint32_t x851 = UINT32_MAX;
	uint32_t x852 = UINT32_MAX;
	int32_t t134 = 431639908;

    t134 = (((x849*x850)*x851)==x852);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x858 = -1;
	static int32_t t135 = -4171310;

    t135 = (((x857*x858)*x859)==x860);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x861 = -353564;
	uint32_t x862 = 46915849U;
	int16_t x863 = INT16_MIN;
	int8_t x864 = 1;
	int32_t t136 = 0;

    t136 = (((x861*x862)*x863)==x864);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x865 = -1;
	static uint64_t x866 = 557933855526208826LLU;
	uint16_t x867 = UINT16_MAX;
	int16_t x868 = INT16_MIN;

    t137 = (((x865*x866)*x867)==x868);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x869 = -1;
	int64_t x870 = -1LL;
	int64_t x871 = -2459167478454873089LL;
	volatile uint8_t x872 = 33U;
	volatile int32_t t138 = -159;

    t138 = (((x869*x870)*x871)==x872);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x885 = INT8_MIN;
	volatile int8_t x886 = INT8_MAX;
	uint16_t x887 = 15U;
	int16_t x888 = INT16_MIN;

    t139 = (((x885*x886)*x887)==x888);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x891 = INT32_MIN;
	uint16_t x892 = UINT16_MAX;
	volatile int32_t t140 = 381618;

    t140 = (((x889*x890)*x891)==x892);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x893 = 0;
	int8_t x895 = 34;
	int32_t x896 = INT32_MIN;
	volatile int32_t t141 = 176;

    t141 = (((x893*x894)*x895)==x896);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x897 = UINT16_MAX;
	static uint8_t x898 = 17U;
	int8_t x899 = INT8_MAX;
	volatile uint8_t x900 = 16U;
	int32_t t142 = 90;

    t142 = (((x897*x898)*x899)==x900);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x904 = 4800627;
	int32_t t143 = -31507;

    t143 = (((x901*x902)*x903)==x904);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x914 = 654911427600446525LLU;
	uint8_t x915 = 1U;
	uint8_t x916 = 3U;
	static int32_t t144 = 882960;

    t144 = (((x913*x914)*x915)==x916);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x917 = 15267570673063LLU;
	static int32_t x918 = INT32_MIN;
	int8_t x919 = 0;
	static int64_t x920 = -1LL;
	static int32_t t145 = -5879;

    t145 = (((x917*x918)*x919)==x920);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x921 = 23612414LLU;
	int64_t x922 = INT64_MAX;
	uint8_t x923 = 6U;
	int32_t x924 = INT32_MIN;
	volatile int32_t t146 = -8108381;

    t146 = (((x921*x922)*x923)==x924);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x929 = -1;
	uint64_t x931 = UINT64_MAX;
	uint64_t x932 = 9LLU;
	int32_t t147 = 1;

    t147 = (((x929*x930)*x931)==x932);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x937 = -1LL;
	int8_t x938 = INT8_MIN;
	static int8_t x940 = -1;
	volatile int32_t t148 = 9277;

    t148 = (((x937*x938)*x939)==x940);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x941 = 2U;
	static int16_t x942 = INT16_MIN;
	uint8_t x943 = UINT8_MAX;
	volatile int32_t x944 = INT32_MIN;
	int32_t t149 = 39329;

    t149 = (((x941*x942)*x943)==x944);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x949 = INT16_MIN;
	uint64_t x951 = 0LLU;
	volatile int16_t x952 = INT16_MIN;
	int32_t t150 = 12;

    t150 = (((x949*x950)*x951)==x952);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x957 = UINT64_MAX;
	uint64_t x958 = 62689894180374LLU;
	uint32_t x959 = UINT32_MAX;
	volatile int32_t t151 = 375;

    t151 = (((x957*x958)*x959)==x960);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x961 = -1LL;
	int32_t x963 = INT32_MIN;
	volatile int8_t x964 = 17;
	volatile int32_t t152 = -15189301;

    t152 = (((x961*x962)*x963)==x964);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x965 = -1LL;
	uint16_t x966 = 2948U;
	volatile int8_t x967 = -1;
	int32_t x968 = INT32_MAX;
	int32_t t153 = 12;

    t153 = (((x965*x966)*x967)==x968);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x973 = -1;
	static volatile int32_t x974 = -6507997;
	static int32_t t154 = 17752;

    t154 = (((x973*x974)*x975)==x976);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x981 = 1U;
	static int32_t t155 = 1;

    t155 = (((x981*x982)*x983)==x984);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x985 = 5934528143551747045LLU;
	static volatile uint64_t x986 = 1760LLU;
	int16_t x987 = INT16_MIN;
	static int16_t x988 = INT16_MIN;

    t156 = (((x985*x986)*x987)==x988);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x989 = 5U;
	uint8_t x990 = UINT8_MAX;
	int8_t x991 = -39;
	int8_t x992 = INT8_MIN;
	volatile int32_t t157 = -3;

    t157 = (((x989*x990)*x991)==x992);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x997 = 250U;
	int32_t x999 = INT32_MIN;
	uint32_t x1000 = UINT32_MAX;

    t158 = (((x997*x998)*x999)==x1000);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1005 = UINT64_MAX;
	static volatile uint32_t x1006 = 18U;
	uint16_t x1008 = 0U;
	int32_t t159 = -355;

    t159 = (((x1005*x1006)*x1007)==x1008);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1010 = -1;
	uint64_t x1011 = 24622870278LLU;
	uint32_t x1012 = UINT32_MAX;
	int32_t t160 = -55968603;

    t160 = (((x1009*x1010)*x1011)==x1012);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint32_t x1013 = 3U;
	static int32_t x1015 = INT32_MAX;
	static uint16_t x1016 = 3591U;
	static int32_t t161 = -46;

    t161 = (((x1013*x1014)*x1015)==x1016);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x1017 = 21U;
	uint16_t x1018 = UINT16_MAX;
	uint64_t x1019 = 3924380627762866LLU;
	int8_t x1020 = INT8_MAX;

    t162 = (((x1017*x1018)*x1019)==x1020);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1027 = 8730839145912685LLU;
	volatile int64_t x1028 = INT64_MAX;
	static int32_t t163 = -14647;

    t163 = (((x1025*x1026)*x1027)==x1028);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x1030 = UINT32_MAX;
	uint8_t x1032 = 124U;

    t164 = (((x1029*x1030)*x1031)==x1032);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1034 = INT32_MIN;
	static int16_t x1035 = INT16_MAX;
	int16_t x1036 = 13;
	volatile int32_t t165 = -1175;

    t165 = (((x1033*x1034)*x1035)==x1036);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1037 = -3495334008LL;
	int16_t x1038 = INT16_MIN;
	int32_t x1039 = -1;
	uint32_t x1040 = 6142091U;
	volatile int32_t t166 = -113;

    t166 = (((x1037*x1038)*x1039)==x1040);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1065 = 7032LL;
	static int32_t x1066 = INT32_MIN;
	int32_t x1068 = 43188708;
	volatile int32_t t167 = 1;

    t167 = (((x1065*x1066)*x1067)==x1068);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1077 = INT8_MIN;
	uint64_t x1079 = 351882942953285642LLU;
	int16_t x1080 = -3804;
	volatile int32_t t168 = 266;

    t168 = (((x1077*x1078)*x1079)==x1080);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1081 = INT64_MIN;
	uint8_t x1082 = 0U;
	uint16_t x1083 = UINT16_MAX;
	int8_t x1084 = 1;

    t169 = (((x1081*x1082)*x1083)==x1084);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1090 = INT16_MIN;
	volatile uint32_t x1091 = 1518103U;
	static volatile uint8_t x1092 = 1U;
	volatile int32_t t170 = 215961666;

    t170 = (((x1089*x1090)*x1091)==x1092);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x1093 = -1;
	int8_t x1094 = -3;
	uint64_t x1095 = 146462LLU;
	uint8_t x1096 = 122U;
	static volatile int32_t t171 = -85;

    t171 = (((x1093*x1094)*x1095)==x1096);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1101 = -1;
	volatile int32_t t172 = -3288549;

    t172 = (((x1101*x1102)*x1103)==x1104);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1105 = 0U;
	static int64_t x1107 = 15753316952LL;
	int16_t x1108 = INT16_MIN;
	volatile int32_t t173 = 1;

    t173 = (((x1105*x1106)*x1107)==x1108);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1113 = UINT64_MAX;
	static int32_t x1116 = -119;
	volatile int32_t t174 = -1;

    t174 = (((x1113*x1114)*x1115)==x1116);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x1129 = 1571;
	static volatile uint32_t x1130 = UINT32_MAX;
	uint64_t x1131 = 237468LLU;
	uint8_t x1132 = 1U;
	static volatile int32_t t175 = -49;

    t175 = (((x1129*x1130)*x1131)==x1132);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1137 = INT8_MAX;
	int16_t x1138 = INT16_MIN;
	static int32_t x1140 = -369404;
	int32_t t176 = -200317;

    t176 = (((x1137*x1138)*x1139)==x1140);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1141 = UINT32_MAX;
	int8_t x1142 = INT8_MAX;
	static uint16_t x1143 = 0U;
	int32_t t177 = 569;

    t177 = (((x1141*x1142)*x1143)==x1144);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1145 = UINT32_MAX;
	int16_t x1146 = INT16_MAX;
	static int16_t x1147 = -2806;
	int16_t x1148 = -1;
	static volatile int32_t t178 = -159842;

    t178 = (((x1145*x1146)*x1147)==x1148);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x1149 = -19;
	volatile int16_t x1150 = 370;
	int64_t x1151 = -1LL;
	volatile int32_t t179 = 476670;

    t179 = (((x1149*x1150)*x1151)==x1152);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1153 = 57U;
	uint8_t x1154 = UINT8_MAX;
	volatile uint64_t x1155 = 50042257227942598LLU;
	volatile uint32_t x1156 = 15U;
	volatile int32_t t180 = 3929;

    t180 = (((x1153*x1154)*x1155)==x1156);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1161 = 4U;
	static int32_t x1162 = -1;
	int32_t x1163 = -1;
	volatile int8_t x1164 = INT8_MIN;
	static int32_t t181 = 14;

    t181 = (((x1161*x1162)*x1163)==x1164);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1165 = UINT16_MAX;
	int16_t x1166 = -1;
	uint16_t x1167 = 32275U;
	volatile int32_t t182 = -11;

    t182 = (((x1165*x1166)*x1167)==x1168);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1173 = 10U;
	uint32_t x1174 = UINT32_MAX;
	volatile int64_t x1175 = -1LL;
	int32_t x1176 = INT32_MAX;

    t183 = (((x1173*x1174)*x1175)==x1176);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x1178 = 16U;
	volatile int32_t t184 = 400;

    t184 = (((x1177*x1178)*x1179)==x1180);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1181 = UINT64_MAX;
	static volatile int8_t x1182 = 0;
	int8_t x1183 = INT8_MIN;
	int32_t x1184 = -1986006;

    t185 = (((x1181*x1182)*x1183)==x1184);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x1197 = INT32_MAX;
	volatile uint64_t x1199 = 3296584426037LLU;
	static int16_t x1200 = -1;
	volatile int32_t t186 = 472269;

    t186 = (((x1197*x1198)*x1199)==x1200);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1223 = INT32_MIN;
	int32_t t187 = 871619;

    t187 = (((x1221*x1222)*x1223)==x1224);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x1226 = -1;

    t188 = (((x1225*x1226)*x1227)==x1228);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1230 = -1LL;
	static volatile int8_t x1232 = -2;
	int32_t t189 = 164487;

    t189 = (((x1229*x1230)*x1231)==x1232);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1233 = -1LL;
	static int16_t x1234 = INT16_MAX;
	int64_t x1235 = -1LL;
	int64_t x1236 = -1LL;
	static int32_t t190 = 0;

    t190 = (((x1233*x1234)*x1235)==x1236);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1245 = 58317;
	int8_t x1246 = INT8_MAX;
	uint8_t x1247 = 6U;
	int32_t x1248 = INT32_MIN;
	volatile int32_t t191 = 102914941;

    t191 = (((x1245*x1246)*x1247)==x1248);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1249 = 912940085407536216LL;
	int64_t x1250 = -1LL;
	static volatile uint64_t x1251 = 536235LLU;
	int32_t x1252 = INT32_MIN;
	volatile int32_t t192 = 238788;

    t192 = (((x1249*x1250)*x1251)==x1252);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1261 = 14U;
	int32_t x1262 = 0;
	uint64_t x1264 = 5901048LLU;
	int32_t t193 = -4336122;

    t193 = (((x1261*x1262)*x1263)==x1264);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x1265 = 14511LLU;
	uint8_t x1268 = UINT8_MAX;
	volatile int32_t t194 = -455;

    t194 = (((x1265*x1266)*x1267)==x1268);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x1269 = UINT16_MAX;
	static int8_t x1271 = INT8_MIN;
	volatile int32_t t195 = 8;

    t195 = (((x1269*x1270)*x1271)==x1272);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x1274 = 6LLU;
	volatile int32_t x1275 = INT32_MIN;
	int8_t x1276 = 0;

    t196 = (((x1273*x1274)*x1275)==x1276);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1281 = INT8_MIN;
	int8_t x1282 = -1;
	uint8_t x1283 = 0U;
	int8_t x1284 = INT8_MIN;
	volatile int32_t t197 = 935824363;

    t197 = (((x1281*x1282)*x1283)==x1284);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1285 = INT8_MIN;
	int16_t x1287 = INT16_MIN;
	int16_t x1288 = -6439;
	volatile int32_t t198 = 3618;

    t198 = (((x1285*x1286)*x1287)==x1288);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1293 = -1;
	volatile int64_t x1294 = 3529858818LL;
	static uint16_t x1295 = 23U;
	int32_t x1296 = INT32_MAX;

    t199 = (((x1293*x1294)*x1295)==x1296);

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

