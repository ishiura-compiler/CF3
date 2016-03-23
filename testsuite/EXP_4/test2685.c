
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

volatile int64_t x10 = INT64_MIN;
static int8_t x22 = INT8_MAX;
volatile int64_t x29 = INT64_MAX;
static int16_t x32 = -1;
volatile int64_t x52 = -1LL;
static int64_t x57 = INT64_MAX;
uint64_t x59 = 8263002066332LLU;
int16_t x62 = INT16_MIN;
int8_t x63 = INT8_MIN;
uint16_t x75 = UINT16_MAX;
int32_t x86 = 10;
int64_t x91 = INT64_MAX;
static volatile uint8_t x102 = 1U;
int64_t x120 = INT64_MIN;
volatile int32_t t16 = -8025015;
volatile int32_t t17 = 1;
int64_t x128 = -1LL;
volatile int32_t x132 = INT32_MAX;
volatile int32_t t19 = 2829624;
volatile int8_t x150 = -19;
int32_t x152 = INT32_MAX;
uint16_t x173 = 3430U;
uint8_t x183 = 7U;
int8_t x184 = INT8_MIN;
int16_t x188 = INT16_MIN;
uint16_t x199 = 389U;
uint8_t x201 = 1U;
uint32_t x202 = 607407476U;
volatile int32_t t30 = 70812;
int8_t x222 = 1;
static int64_t t33 = -1558187LL;
int32_t x244 = INT32_MIN;
static volatile int32_t t39 = 683;
static int64_t x261 = 81477615388145LL;
uint16_t x262 = UINT16_MAX;
int16_t x264 = INT16_MIN;
uint32_t x265 = 18724U;
volatile uint32_t x291 = 888U;
static int8_t x299 = INT8_MAX;
volatile int32_t x304 = INT32_MAX;
static volatile int64_t t46 = -1309731339LL;
uint64_t x312 = UINT64_MAX;
static uint32_t x327 = 22191U;
uint8_t x328 = UINT8_MAX;
static volatile uint64_t x332 = 132LLU;
int8_t x333 = 0;
static int32_t t52 = 472;
int32_t x350 = INT32_MIN;
int32_t x351 = INT32_MIN;
int32_t x359 = -1;
static volatile int32_t x364 = -18933870;
volatile uint64_t t56 = 2075413236933LLU;
uint64_t x365 = UINT64_MAX;
uint8_t x368 = 99U;
uint32_t x369 = 4030798U;
volatile uint64_t t59 = 460851130LLU;
int16_t x382 = -1;
int8_t x387 = INT8_MIN;
int32_t t61 = 115;
int8_t x390 = 8;
volatile uint16_t x391 = UINT16_MAX;
uint32_t x398 = 116327U;
static int32_t x409 = INT32_MAX;
volatile int32_t x410 = INT32_MIN;
uint16_t x411 = 1871U;
volatile int32_t x415 = -1;
uint64_t x418 = 1551920362195203101LLU;
int64_t x421 = INT64_MAX;
static volatile int32_t t68 = -1940;
uint64_t x442 = UINT64_MAX;
int16_t x445 = INT16_MAX;
int8_t x448 = INT8_MAX;
volatile int32_t t72 = -188481648;
int8_t x461 = 62;
static uint64_t x462 = UINT64_MAX;
uint32_t x469 = 139736624U;
static volatile uint32_t t74 = 476402U;
uint32_t x474 = 3465U;
uint8_t x475 = 0U;
uint32_t x492 = 6020139U;
static int32_t x493 = 86;
int8_t x503 = 0;
int64_t x505 = INT64_MAX;
volatile int64_t t81 = 504LL;
uint64_t x535 = UINT64_MAX;
volatile int16_t x536 = INT16_MIN;
int8_t x541 = 0;
uint16_t x542 = 57U;
int16_t x554 = -1;
uint64_t t86 = 42090003LLU;
int16_t x560 = -14;
volatile uint64_t t88 = UINT64_MAX;
uint8_t x565 = UINT8_MAX;
uint64_t x566 = 1764227942785LLU;
static volatile int32_t x567 = 28;
uint32_t x579 = 65144U;
volatile int32_t t92 = 1;
volatile int32_t t93 = -29357;
static volatile uint64_t x613 = 295534351LLU;
static int8_t x615 = -18;
volatile uint16_t x622 = 2U;
int8_t x625 = 42;
int16_t x651 = 13;
volatile int32_t t99 = -2;
uint16_t x654 = 124U;
int8_t x681 = INT8_MAX;
int32_t t102 = -235;
int64_t x688 = -760883428387LL;
int64_t x699 = -1LL;
int32_t t106 = 18328;
static volatile int64_t x710 = INT64_MIN;
int32_t x723 = 92753638;
volatile uint8_t x724 = UINT8_MAX;
volatile int32_t x726 = 6625;
volatile int16_t x768 = -1;
volatile uint32_t t117 = 191098728U;
uint16_t x784 = UINT16_MAX;
volatile int8_t x786 = -1;
volatile int32_t t120 = -5;
uint8_t x811 = UINT8_MAX;
int32_t t125 = -14314025;
int8_t x817 = INT8_MAX;
static int8_t x821 = 4;
volatile int16_t x830 = 1;
uint32_t x835 = UINT32_MAX;
uint32_t x837 = 396548836U;
uint32_t x852 = 11U;
static uint8_t x857 = UINT8_MAX;
int16_t x870 = INT16_MAX;
int32_t x871 = INT32_MAX;
volatile int32_t t135 = 2863;
int16_t x880 = -1;
static volatile int8_t x920 = INT8_MIN;
static int64_t x926 = INT64_MIN;
int8_t x935 = INT8_MAX;
volatile uint64_t t141 = 66815092680622840LLU;
int16_t x939 = INT16_MIN;
int16_t x940 = INT16_MIN;
volatile int32_t t142 = -60;
volatile uint64_t x943 = 16695LLU;
uint64_t x947 = 105561304660460668LLU;
volatile int32_t x948 = INT32_MIN;
uint64_t x952 = 5826645LLU;
uint8_t x958 = 2U;
int32_t x962 = INT32_MIN;
volatile int32_t t147 = INT32_MAX;
static volatile int32_t t148 = -514267644;
int8_t x979 = 26;
uint64_t x981 = UINT64_MAX;
uint64_t x985 = 210802LLU;
int16_t x995 = 0;
static int32_t x998 = INT32_MIN;
volatile uint64_t t153 = 483LLU;
int64_t x1002 = 1748LL;
static volatile uint8_t x1013 = 1U;
int64_t x1015 = INT64_MAX;
int32_t x1017 = 3114;
int8_t x1022 = 7;
volatile uint64_t x1024 = 29757875747LLU;
int64_t t157 = 1LL;
int64_t x1029 = 82660328LL;
int64_t x1032 = INT64_MAX;
static int64_t t158 = 85109604791449107LL;
uint16_t x1049 = 9149U;
uint32_t x1050 = UINT32_MAX;
uint16_t x1053 = 205U;
uint32_t x1054 = 3582U;
int8_t x1056 = -7;
uint32_t x1071 = 42746931U;
int32_t t162 = 56472;
uint16_t x1079 = UINT16_MAX;
int8_t x1080 = -47;
volatile int64_t x1084 = INT64_MIN;
int32_t x1085 = INT32_MAX;
uint64_t x1119 = UINT64_MAX;
int64_t t169 = -19065LL;
int64_t x1134 = 24524LL;
int64_t t170 = -1907110826209LL;
int16_t x1139 = INT16_MAX;
volatile int64_t x1142 = -39685LL;
int16_t x1148 = -1;
int64_t x1151 = INT64_MIN;
int8_t x1163 = 0;
uint8_t x1181 = 46U;
static int8_t x1206 = -1;
static int8_t x1208 = INT8_MIN;
static int16_t x1226 = -1;
volatile int16_t x1230 = INT16_MIN;
int8_t x1237 = INT8_MAX;
int64_t x1239 = INT64_MIN;
static volatile int16_t x1242 = -1;
uint32_t x1243 = 10252804U;
volatile int32_t t185 = -871206;
volatile int32_t t186 = 8362216;
int16_t x1257 = INT16_MAX;
int64_t x1260 = INT64_MIN;
int64_t x1262 = INT64_MIN;
uint16_t x1297 = 2726U;
uint8_t x1300 = UINT8_MAX;
volatile int32_t t191 = -1894266;
static uint8_t x1304 = 17U;
uint32_t x1320 = UINT32_MAX;
static volatile uint64_t t194 = 4453956966067LLU;
uint8_t x1325 = 49U;
volatile int32_t t195 = -19000;
uint64_t x1329 = UINT64_MAX;
volatile int64_t x1331 = 832LL;
uint64_t t196 = UINT64_MAX;
volatile int32_t t198 = 425620;
volatile int32_t x1356 = INT32_MIN;
static volatile int32_t t199 = 31;


void f0(void) {
    	uint64_t x5 = UINT64_MAX;
	volatile uint64_t x6 = 455488421645LLU;
	int8_t x7 = INT8_MAX;
	static uint16_t x8 = UINT16_MAX;
	volatile uint64_t t0 = UINT64_MAX;

    t0 = (x5>>(x6<=(x7^x8)));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = 1867535164643LL;
	static volatile int32_t x11 = -13;
	uint32_t x12 = UINT32_MAX;
	volatile int64_t t1 = -8401061448954776LL;

    t1 = (x9>>(x10<=(x11^x12)));

    if (t1 != 933767582321LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = 3;
	int8_t x18 = INT8_MIN;
	volatile int16_t x19 = -1055;
	volatile int8_t x20 = -44;
	volatile int32_t t2 = 31;

    t2 = (x17>>(x18<=(x19^x20)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x21 = INT64_MAX;
	uint32_t x23 = UINT32_MAX;
	int64_t x24 = INT64_MIN;
	int64_t t3 = INT64_MAX;

    t3 = (x21>>(x22<=(x23^x24)));

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x30 = 56194995577793LLU;
	int16_t x31 = 8;
	static int64_t t4 = -5859581509624218LL;

    t4 = (x29>>(x30<=(x31^x32)));

    if (t4 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x49 = UINT16_MAX;
	static uint8_t x50 = 42U;
	int8_t x51 = 2;
	static int32_t t5 = -64816;

    t5 = (x49>>(x50<=(x51^x52)));

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x58 = INT8_MIN;
	int8_t x60 = 2;
	volatile int64_t t6 = INT64_MAX;

    t6 = (x57>>(x58<=(x59^x60)));

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x61 = INT16_MAX;
	uint64_t x64 = UINT64_MAX;
	int32_t t7 = 231;

    t7 = (x61>>(x62<=(x63^x64)));

    if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x65 = 52LL;
	static int8_t x66 = 15;
	volatile int8_t x67 = 63;
	static int16_t x68 = -1;
	volatile int64_t t8 = 1007477610LL;

    t8 = (x65>>(x66<=(x67^x68)));

    if (t8 != 52LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x73 = 2668422;
	int64_t x74 = -66LL;
	volatile int16_t x76 = 0;
	static volatile int32_t t9 = -3258;

    t9 = (x73>>(x74<=(x75^x76)));

    if (t9 != 1334211) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x77 = 2046221U;
	static int64_t x78 = INT64_MAX;
	int8_t x79 = INT8_MIN;
	int64_t x80 = 263691907095LL;
	static uint32_t t10 = 127840U;

    t10 = (x77>>(x78<=(x79^x80)));

    if (t10 != 2046221U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x81 = UINT32_MAX;
	int16_t x82 = -57;
	static int64_t x83 = 34672880970472LL;
	static int8_t x84 = INT8_MAX;
	uint32_t t11 = 7655715U;

    t11 = (x81>>(x82<=(x83^x84)));

    if (t11 != 2147483647U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x85 = 3032U;
	uint16_t x87 = 2U;
	int32_t x88 = -30445952;
	volatile int32_t t12 = -48001272;

    t12 = (x85>>(x86<=(x87^x88)));

    if (t12 != 3032) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x89 = 8U;
	int8_t x90 = 1;
	static uint16_t x92 = 38U;
	int32_t t13 = 923880;

    t13 = (x89>>(x90<=(x91^x92)));

    if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x93 = INT16_MAX;
	int16_t x94 = INT16_MIN;
	uint8_t x95 = UINT8_MAX;
	int16_t x96 = 4546;
	volatile int32_t t14 = 26469177;

    t14 = (x93>>(x94<=(x95^x96)));

    if (t14 != 16383) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x101 = 1;
	int64_t x103 = 278605LL;
	int64_t x104 = 0LL;
	volatile int32_t t15 = -172599;

    t15 = (x101>>(x102<=(x103^x104)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x117 = 1;
	int32_t x118 = INT32_MIN;
	int16_t x119 = -1;

    t16 = (x117>>(x118<=(x119^x120)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x121 = 62;
	uint64_t x122 = 106LLU;
	int8_t x123 = 19;
	static uint64_t x124 = 74677180541LLU;

    t17 = (x121>>(x122<=(x123^x124)));

    if (t17 != 31) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x125 = INT8_MAX;
	int32_t x126 = INT32_MIN;
	static int32_t x127 = INT32_MAX;
	int32_t t18 = 1;

    t18 = (x125>>(x126<=(x127^x128)));

    if (t18 != 63) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x129 = 44U;
	uint32_t x130 = 44U;
	static int64_t x131 = 1797294522LL;

    t19 = (x129>>(x130<=(x131^x132)));

    if (t19 != 22) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x141 = 4U;
	int8_t x142 = INT8_MAX;
	int8_t x143 = INT8_MIN;
	uint16_t x144 = 8253U;
	static volatile int32_t t20 = -1;

    t20 = (x141>>(x142<=(x143^x144)));

    if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x145 = 8076394018870018940LLU;
	volatile int8_t x146 = -54;
	static uint32_t x147 = 2U;
	int64_t x148 = -1LL;
	static volatile uint64_t t21 = 270175601381915LLU;

    t21 = (x145>>(x146<=(x147^x148)));

    if (t21 != 4038197009435009470LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x149 = INT8_MAX;
	volatile int8_t x151 = INT8_MIN;
	static int32_t t22 = 36047161;

    t22 = (x149>>(x150<=(x151^x152)));

    if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x157 = INT64_MAX;
	static int64_t x158 = INT64_MIN;
	uint32_t x159 = 18522134U;
	int16_t x160 = INT16_MIN;
	static int64_t t23 = -257563LL;

    t23 = (x157>>(x158<=(x159^x160)));

    if (t23 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x169 = UINT16_MAX;
	int32_t x170 = 5;
	int8_t x171 = -2;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t24 = -22999;

    t24 = (x169>>(x170<=(x171^x172)));

    if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x174 = 1946147U;
	static int8_t x175 = INT8_MAX;
	volatile int8_t x176 = -38;
	int32_t t25 = 0;

    t25 = (x173>>(x174<=(x175^x176)));

    if (t25 != 1715) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x177 = 1571LLU;
	int16_t x178 = INT16_MIN;
	int32_t x179 = INT32_MAX;
	static int16_t x180 = INT16_MAX;
	uint64_t t26 = 16561507391LLU;

    t26 = (x177>>(x178<=(x179^x180)));

    if (t26 != 785LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x181 = 36;
	static int16_t x182 = -1;
	static int32_t t27 = 7;

    t27 = (x181>>(x182<=(x183^x184)));

    if (t27 != 36) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x185 = UINT32_MAX;
	int8_t x186 = INT8_MIN;
	volatile int16_t x187 = INT16_MIN;
	volatile uint32_t t28 = 1743U;

    t28 = (x185>>(x186<=(x187^x188)));

    if (t28 != 2147483647U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x197 = 3619404068LL;
	int8_t x198 = -1;
	volatile uint8_t x200 = 2U;
	volatile int64_t t29 = 65009LL;

    t29 = (x197>>(x198<=(x199^x200)));

    if (t29 != 1809702034LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x203 = INT16_MIN;
	uint16_t x204 = 1U;

    t30 = (x201>>(x202<=(x203^x204)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x205 = 49U;
	int16_t x206 = -44;
	static int16_t x207 = -6246;
	static uint64_t x208 = UINT64_MAX;
	volatile int32_t t31 = 0;

    t31 = (x205>>(x206<=(x207^x208)));

    if (t31 != 49) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x213 = INT64_MAX;
	int16_t x214 = INT16_MIN;
	uint8_t x215 = 10U;
	int32_t x216 = INT32_MAX;
	volatile int64_t t32 = 7518611LL;

    t32 = (x213>>(x214<=(x215^x216)));

    if (t32 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x221 = 2LL;
	int16_t x223 = INT16_MAX;
	static volatile int16_t x224 = -1;

    t33 = (x221>>(x222<=(x223^x224)));

    if (t33 != 2LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x229 = UINT16_MAX;
	int32_t x230 = 65759924;
	int16_t x231 = -1;
	static volatile int16_t x232 = INT16_MIN;
	int32_t t34 = -5324660;

    t34 = (x229>>(x230<=(x231^x232)));

    if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x233 = UINT64_MAX;
	static int64_t x234 = -1LL;
	uint32_t x235 = 1487323471U;
	int32_t x236 = INT32_MIN;
	static uint64_t t35 = 697277842321102070LLU;

    t35 = (x233>>(x234<=(x235^x236)));

    if (t35 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x237 = 50U;
	uint64_t x238 = 816LLU;
	int16_t x239 = -1;
	int16_t x240 = -149;
	int32_t t36 = -91455993;

    t36 = (x237>>(x238<=(x239^x240)));

    if (t36 != 50) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x241 = INT16_MAX;
	uint64_t x242 = 70165969156937140LLU;
	volatile uint64_t x243 = 101LLU;
	int32_t t37 = -4033;

    t37 = (x241>>(x242<=(x243^x244)));

    if (t37 != 16383) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x245 = INT8_MAX;
	volatile int64_t x246 = INT64_MIN;
	uint8_t x247 = 58U;
	int16_t x248 = INT16_MIN;
	int32_t t38 = -3760970;

    t38 = (x245>>(x246<=(x247^x248)));

    if (t38 != 63) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x249 = UINT16_MAX;
	int32_t x250 = INT32_MIN;
	volatile uint64_t x251 = UINT64_MAX;
	uint32_t x252 = 18754U;

    t39 = (x249>>(x250<=(x251^x252)));

    if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x263 = 0;
	int64_t t40 = -690001010469730939LL;

    t40 = (x261>>(x262<=(x263^x264)));

    if (t40 != 81477615388145LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x266 = UINT64_MAX;
	uint8_t x267 = UINT8_MAX;
	int64_t x268 = -1LL;
	uint32_t t41 = 745034U;

    t41 = (x265>>(x266<=(x267^x268)));

    if (t41 != 18724U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x281 = UINT32_MAX;
	volatile int32_t x282 = -1;
	int8_t x283 = -1;
	int16_t x284 = -1630;
	volatile uint32_t t42 = 137009U;

    t42 = (x281>>(x282<=(x283^x284)));

    if (t42 != 2147483647U) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x289 = 1329969;
	int32_t x290 = -1;
	static int64_t x292 = 2752675LL;
	int32_t t43 = 0;

    t43 = (x289>>(x290<=(x291^x292)));

    if (t43 != 664984) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x293 = 2U;
	int8_t x294 = -1;
	static int16_t x295 = -2;
	int16_t x296 = INT16_MIN;
	volatile int32_t t44 = -10916593;

    t44 = (x293>>(x294<=(x295^x296)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x297 = UINT64_MAX;
	int8_t x298 = 3;
	uint8_t x300 = 58U;
	uint64_t t45 = 169507740142404LLU;

    t45 = (x297>>(x298<=(x299^x300)));

    if (t45 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x301 = 6013045LL;
	volatile uint16_t x302 = UINT16_MAX;
	volatile int8_t x303 = INT8_MIN;

    t46 = (x301>>(x302<=(x303^x304)));

    if (t46 != 6013045LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x305 = UINT16_MAX;
	uint32_t x306 = UINT32_MAX;
	int16_t x307 = INT16_MAX;
	static uint32_t x308 = 7U;
	static int32_t t47 = 129705;

    t47 = (x305>>(x306<=(x307^x308)));

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint8_t x309 = UINT8_MAX;
	uint8_t x310 = 7U;
	volatile uint16_t x311 = 1U;
	static volatile int32_t t48 = 44433;

    t48 = (x309>>(x310<=(x311^x312)));

    if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x325 = 0U;
	int16_t x326 = -289;
	int32_t t49 = -386;

    t49 = (x325>>(x326<=(x327^x328)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x329 = 4U;
	uint16_t x330 = UINT16_MAX;
	uint32_t x331 = 59U;
	volatile int32_t t50 = 44;

    t50 = (x329>>(x330<=(x331^x332)));

    if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x334 = 10887663092651LLU;
	volatile int8_t x335 = -5;
	uint64_t x336 = UINT64_MAX;
	int32_t t51 = -56;

    t51 = (x333>>(x334<=(x335^x336)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x341 = 14179;
	int16_t x342 = -91;
	uint8_t x343 = 0U;
	volatile int32_t x344 = 106869917;

    t52 = (x341>>(x342<=(x343^x344)));

    if (t52 != 7089) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x345 = 130533LL;
	int32_t x346 = 233904587;
	static uint16_t x347 = 55U;
	static volatile uint64_t x348 = 26376972462781462LLU;
	int64_t t53 = 25866931250LL;

    t53 = (x345>>(x346<=(x347^x348)));

    if (t53 != 65266LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x349 = 118;
	volatile uint64_t x352 = 470064LLU;
	static int32_t t54 = 382;

    t54 = (x349>>(x350<=(x351^x352)));

    if (t54 != 59) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x357 = INT64_MAX;
	static int64_t x358 = INT64_MIN;
	int32_t x360 = INT32_MIN;
	static volatile int64_t t55 = 105920481412LL;

    t55 = (x357>>(x358<=(x359^x360)));

    if (t55 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x361 = 516LLU;
	int16_t x362 = INT16_MIN;
	volatile int32_t x363 = INT32_MIN;

    t56 = (x361>>(x362<=(x363^x364)));

    if (t56 != 258LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x366 = 30586U;
	uint64_t x367 = 143LLU;
	uint64_t t57 = UINT64_MAX;

    t57 = (x365>>(x366<=(x367^x368)));

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x370 = 0U;
	static int16_t x371 = 1;
	int8_t x372 = INT8_MIN;
	static volatile uint32_t t58 = 37142658U;

    t58 = (x369>>(x370<=(x371^x372)));

    if (t58 != 4030798U) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint64_t x377 = 65021515877LLU;
	int32_t x378 = -1;
	static int8_t x379 = -1;
	int16_t x380 = INT16_MIN;

    t59 = (x377>>(x378<=(x379^x380)));

    if (t59 != 32510757938LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x381 = UINT32_MAX;
	static int32_t x383 = INT32_MAX;
	uint32_t x384 = UINT32_MAX;
	volatile uint32_t t60 = UINT32_MAX;

    t60 = (x381>>(x382<=(x383^x384)));

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x385 = INT8_MAX;
	volatile uint64_t x386 = 45117544733LLU;
	uint8_t x388 = 5U;

    t61 = (x385>>(x386<=(x387^x388)));

    if (t61 != 63) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x389 = 296U;
	static int32_t x392 = INT32_MAX;
	uint32_t t62 = 359227U;

    t62 = (x389>>(x390<=(x391^x392)));

    if (t62 != 148U) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x397 = UINT8_MAX;
	int64_t x399 = INT64_MAX;
	volatile uint8_t x400 = 3U;
	volatile int32_t t63 = -2018;

    t63 = (x397>>(x398<=(x399^x400)));

    if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x412 = 473677LLU;
	volatile int32_t t64 = INT32_MAX;

    t64 = (x409>>(x410<=(x411^x412)));

    if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x413 = UINT32_MAX;
	volatile int64_t x414 = INT64_MAX;
	volatile int16_t x416 = 1;
	uint32_t t65 = UINT32_MAX;

    t65 = (x413>>(x414<=(x415^x416)));

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x417 = UINT32_MAX;
	static int64_t x419 = INT64_MIN;
	volatile int64_t x420 = INT64_MAX;
	uint32_t t66 = 577949U;

    t66 = (x417>>(x418<=(x419^x420)));

    if (t66 != 2147483647U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x422 = INT8_MAX;
	volatile uint8_t x423 = UINT8_MAX;
	static int32_t x424 = 508;
	volatile int64_t t67 = -134066453156302397LL;

    t67 = (x421>>(x422<=(x423^x424)));

    if (t67 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x425 = 160;
	int64_t x426 = 3928038LL;
	int16_t x427 = 166;
	uint64_t x428 = 7124103268584521LLU;

    t68 = (x425>>(x426<=(x427^x428)));

    if (t68 != 80) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x429 = 52294086U;
	int64_t x430 = INT64_MIN;
	uint32_t x431 = UINT32_MAX;
	int64_t x432 = INT64_MAX;
	static uint32_t t69 = 0U;

    t69 = (x429>>(x430<=(x431^x432)));

    if (t69 != 26147043U) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x437 = INT64_MAX;
	volatile uint16_t x438 = UINT16_MAX;
	uint64_t x439 = 772736113466LLU;
	uint32_t x440 = 367334U;
	int64_t t70 = 734822LL;

    t70 = (x437>>(x438<=(x439^x440)));

    if (t70 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x441 = 40638LLU;
	int32_t x443 = INT32_MAX;
	int8_t x444 = INT8_MIN;
	volatile uint64_t t71 = 32190LLU;

    t71 = (x441>>(x442<=(x443^x444)));

    if (t71 != 40638LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x446 = -3145321550LL;
	uint16_t x447 = 1222U;

    t72 = (x445>>(x446<=(x447^x448)));

    if (t72 != 16383) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x463 = 9U;
	volatile uint64_t x464 = UINT64_MAX;
	volatile int32_t t73 = -3700688;

    t73 = (x461>>(x462<=(x463^x464)));

    if (t73 != 62) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x470 = 96U;
	uint64_t x471 = UINT64_MAX;
	int32_t x472 = INT32_MIN;

    t74 = (x469>>(x470<=(x471^x472)));

    if (t74 != 69868312U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x473 = 12190U;
	uint16_t x476 = UINT16_MAX;
	static volatile int32_t t75 = -6853089;

    t75 = (x473>>(x474<=(x475^x476)));

    if (t75 != 6095) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x477 = 0;
	int64_t x478 = INT64_MIN;
	uint8_t x479 = 1U;
	uint16_t x480 = 7U;
	int32_t t76 = 662525;

    t76 = (x477>>(x478<=(x479^x480)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x481 = INT8_MAX;
	volatile uint32_t x482 = UINT32_MAX;
	uint64_t x483 = 22858LLU;
	int8_t x484 = -5;
	volatile int32_t t77 = 165089;

    t77 = (x481>>(x482<=(x483^x484)));

    if (t77 != 63) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x489 = INT16_MAX;
	int32_t x490 = 3304;
	uint64_t x491 = 631573940212423891LLU;
	int32_t t78 = -1;

    t78 = (x489>>(x490<=(x491^x492)));

    if (t78 != 16383) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x494 = -1LL;
	int64_t x495 = -1LL;
	static volatile uint32_t x496 = 92691U;
	volatile int32_t t79 = 406338926;

    t79 = (x493>>(x494<=(x495^x496)));

    if (t79 != 86) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x501 = INT64_MAX;
	static uint32_t x502 = UINT32_MAX;
	int16_t x504 = INT16_MIN;
	static int64_t t80 = INT64_MAX;

    t80 = (x501>>(x502<=(x503^x504)));

    if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x506 = 1U;
	uint16_t x507 = 0U;
	int32_t x508 = 1013869;

    t81 = (x505>>(x506<=(x507^x508)));

    if (t81 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x509 = 80U;
	uint8_t x510 = 32U;
	static volatile int16_t x511 = INT16_MIN;
	volatile int8_t x512 = 2;
	static volatile int32_t t82 = 1082915;

    t82 = (x509>>(x510<=(x511^x512)));

    if (t82 != 80) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x529 = 1;
	volatile int32_t x530 = -1;
	int8_t x531 = 12;
	volatile uint64_t x532 = 13LLU;
	volatile int32_t t83 = -2662849;

    t83 = (x529>>(x530<=(x531^x532)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x533 = INT16_MAX;
	volatile int16_t x534 = INT16_MIN;
	int32_t t84 = -954789;

    t84 = (x533>>(x534<=(x535^x536)));

    if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x543 = -4978LL;
	int64_t x544 = INT64_MIN;
	static volatile int32_t t85 = 2410;

    t85 = (x541>>(x542<=(x543^x544)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x553 = 21477853959010256LLU;
	static int32_t x555 = INT32_MIN;
	static volatile int64_t x556 = -1LL;

    t86 = (x553>>(x554<=(x555^x556)));

    if (t86 != 10738926979505128LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x557 = UINT8_MAX;
	int8_t x558 = -1;
	uint8_t x559 = 23U;
	static int32_t t87 = 434;

    t87 = (x557>>(x558<=(x559^x560)));

    if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x561 = UINT64_MAX;
	int32_t x562 = 186707450;
	uint32_t x563 = 4885U;
	int32_t x564 = 40;

    t88 = (x561>>(x562<=(x563^x564)));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x568 = -1;
	int32_t t89 = 705290;

    t89 = (x565>>(x566<=(x567^x568)));

    if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x577 = 2627U;
	uint8_t x578 = 1U;
	volatile int32_t x580 = 0;
	int32_t t90 = 189870547;

    t90 = (x577>>(x578<=(x579^x580)));

    if (t90 != 1313) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x585 = 107U;
	uint64_t x586 = 21379808LLU;
	static uint16_t x587 = UINT16_MAX;
	static int16_t x588 = INT16_MIN;
	int32_t t91 = -98671;

    t91 = (x585>>(x586<=(x587^x588)));

    if (t91 != 53) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x597 = INT32_MAX;
	volatile int32_t x598 = INT32_MIN;
	volatile int16_t x599 = 2222;
	static int8_t x600 = INT8_MIN;

    t92 = (x597>>(x598<=(x599^x600)));

    if (t92 != 1073741823) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x601 = 89U;
	uint16_t x602 = 21617U;
	static int64_t x603 = INT64_MIN;
	int64_t x604 = -1LL;

    t93 = (x601>>(x602<=(x603^x604)));

    if (t93 != 44) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x614 = 469829U;
	volatile uint64_t x616 = UINT64_MAX;
	volatile uint64_t t94 = 17333696569037111LLU;

    t94 = (x613>>(x614<=(x615^x616)));

    if (t94 != 295534351LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x621 = INT64_MAX;
	static int64_t x623 = 32894LL;
	uint16_t x624 = UINT16_MAX;
	static int64_t t95 = -84599708505364LL;

    t95 = (x621>>(x622<=(x623^x624)));

    if (t95 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x626 = -2011;
	int16_t x627 = 0;
	int32_t x628 = INT32_MAX;
	volatile int32_t t96 = -22;

    t96 = (x625>>(x626<=(x627^x628)));

    if (t96 != 21) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x641 = 302;
	static volatile int16_t x642 = -1;
	uint16_t x643 = UINT16_MAX;
	int16_t x644 = 2;
	static volatile int32_t t97 = -916;

    t97 = (x641>>(x642<=(x643^x644)));

    if (t97 != 151) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x645 = 93U;
	int16_t x646 = 15086;
	uint64_t x647 = 166601698886LLU;
	int32_t x648 = INT32_MIN;
	static volatile int32_t t98 = 599032271;

    t98 = (x645>>(x646<=(x647^x648)));

    if (t98 != 46) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x649 = INT16_MAX;
	static uint64_t x650 = 673311304157956LLU;
	int32_t x652 = INT32_MAX;

    t99 = (x649>>(x650<=(x651^x652)));

    if (t99 != 32767) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x653 = UINT32_MAX;
	uint16_t x655 = UINT16_MAX;
	static uint64_t x656 = UINT64_MAX;
	volatile uint32_t t100 = 259489U;

    t100 = (x653>>(x654<=(x655^x656)));

    if (t100 != 2147483647U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x657 = UINT32_MAX;
	uint32_t x658 = 57076U;
	int64_t x659 = -1142LL;
	uint16_t x660 = 705U;
	uint32_t t101 = UINT32_MAX;

    t101 = (x657>>(x658<=(x659^x660)));

    if (t101 != UINT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x682 = 112U;
	static volatile int16_t x683 = INT16_MIN;
	int32_t x684 = INT32_MIN;

    t102 = (x681>>(x682<=(x683^x684)));

    if (t102 != 63) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x685 = UINT8_MAX;
	int32_t x686 = INT32_MIN;
	int8_t x687 = INT8_MIN;
	static volatile int32_t t103 = -2;

    t103 = (x685>>(x686<=(x687^x688)));

    if (t103 != 127) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x689 = UINT64_MAX;
	volatile int16_t x690 = -1;
	uint64_t x691 = UINT64_MAX;
	int32_t x692 = -1;
	static volatile uint64_t t104 = UINT64_MAX;

    t104 = (x689>>(x690<=(x691^x692)));

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x693 = 7U;
	volatile int32_t x694 = INT32_MIN;
	volatile int8_t x695 = INT8_MIN;
	uint8_t x696 = 1U;
	int32_t t105 = -61469878;

    t105 = (x693>>(x694<=(x695^x696)));

    if (t105 != 3) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x697 = UINT8_MAX;
	static int8_t x698 = 6;
	volatile int32_t x700 = INT32_MIN;

    t106 = (x697>>(x698<=(x699^x700)));

    if (t106 != 127) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x709 = 204943528839697109LLU;
	volatile int8_t x711 = -6;
	int64_t x712 = INT64_MIN;
	uint64_t t107 = 353041882842143424LLU;

    t107 = (x709>>(x710<=(x711^x712)));

    if (t107 != 102471764419848554LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x721 = UINT16_MAX;
	int8_t x722 = 12;
	volatile int32_t t108 = -1;

    t108 = (x721>>(x722<=(x723^x724)));

    if (t108 != 32767) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x725 = 4902357573LLU;
	int64_t x727 = 1036876060LL;
	uint32_t x728 = 402U;
	uint64_t t109 = 8774858702750874545LLU;

    t109 = (x725>>(x726<=(x727^x728)));

    if (t109 != 2451178786LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x729 = 13U;
	uint8_t x730 = 25U;
	int8_t x731 = 9;
	static int64_t x732 = INT64_MIN;
	static int32_t t110 = -27869470;

    t110 = (x729>>(x730<=(x731^x732)));

    if (t110 != 13) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x733 = 73561607142LLU;
	int64_t x734 = -1LL;
	int64_t x735 = INT64_MAX;
	volatile int32_t x736 = INT32_MIN;
	uint64_t t111 = 4283536399256776480LLU;

    t111 = (x733>>(x734<=(x735^x736)));

    if (t111 != 73561607142LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x741 = UINT32_MAX;
	int16_t x742 = -145;
	uint16_t x743 = 1U;
	int8_t x744 = -1;
	volatile uint32_t t112 = 1053249687U;

    t112 = (x741>>(x742<=(x743^x744)));

    if (t112 != 2147483647U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x745 = 32;
	uint64_t x746 = UINT64_MAX;
	volatile int8_t x747 = -1;
	volatile uint8_t x748 = UINT8_MAX;
	volatile int32_t t113 = 240031;

    t113 = (x745>>(x746<=(x747^x748)));

    if (t113 != 32) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x749 = 351U;
	int16_t x750 = 5;
	int8_t x751 = -1;
	static volatile uint32_t x752 = 255495U;
	volatile uint32_t t114 = 2U;

    t114 = (x749>>(x750<=(x751^x752)));

    if (t114 != 175U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x757 = 85392LLU;
	uint8_t x758 = 7U;
	int64_t x759 = 457126LL;
	static uint64_t x760 = UINT64_MAX;
	static volatile uint64_t t115 = 26951696LLU;

    t115 = (x757>>(x758<=(x759^x760)));

    if (t115 != 42696LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x765 = INT8_MAX;
	volatile int32_t x766 = 1;
	int64_t x767 = INT64_MIN;
	volatile int32_t t116 = 1971;

    t116 = (x765>>(x766<=(x767^x768)));

    if (t116 != 63) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x769 = 2669U;
	uint32_t x770 = UINT32_MAX;
	static volatile uint32_t x771 = UINT32_MAX;
	int32_t x772 = INT32_MIN;

    t117 = (x769>>(x770<=(x771^x772)));

    if (t117 != 2669U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x781 = 15U;
	uint16_t x782 = 48U;
	static int16_t x783 = -1;
	volatile uint32_t t118 = 1004U;

    t118 = (x781>>(x782<=(x783^x784)));

    if (t118 != 15U) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x785 = 3;
	int32_t x787 = INT32_MIN;
	uint8_t x788 = 20U;
	volatile int32_t t119 = 131359319;

    t119 = (x785>>(x786<=(x787^x788)));

    if (t119 != 3) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x789 = 1509U;
	int8_t x790 = -1;
	static int16_t x791 = INT16_MIN;
	static int8_t x792 = 16;

    t120 = (x789>>(x790<=(x791^x792)));

    if (t120 != 1509) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x793 = UINT32_MAX;
	volatile int64_t x794 = INT64_MAX;
	static int8_t x795 = -1;
	volatile uint16_t x796 = UINT16_MAX;
	uint32_t t121 = UINT32_MAX;

    t121 = (x793>>(x794<=(x795^x796)));

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x797 = 27485;
	int32_t x798 = 1;
	int32_t x799 = -1;
	uint16_t x800 = 7019U;
	int32_t t122 = 99;

    t122 = (x797>>(x798<=(x799^x800)));

    if (t122 != 27485) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x801 = 0U;
	int8_t x802 = INT8_MIN;
	int64_t x803 = INT64_MIN;
	int8_t x804 = INT8_MIN;
	int32_t t123 = 454792;

    t123 = (x801>>(x802<=(x803^x804)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x809 = 0U;
	int16_t x810 = 1;
	uint16_t x812 = 1056U;
	volatile int32_t t124 = 195772;

    t124 = (x809>>(x810<=(x811^x812)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x813 = INT16_MAX;
	uint8_t x814 = UINT8_MAX;
	static uint64_t x815 = 15LLU;
	uint8_t x816 = 0U;

    t125 = (x813>>(x814<=(x815^x816)));

    if (t125 != 32767) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x818 = 0U;
	int16_t x819 = -64;
	volatile int8_t x820 = INT8_MIN;
	int32_t t126 = -129;

    t126 = (x817>>(x818<=(x819^x820)));

    if (t126 != 63) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x822 = 33;
	int64_t x823 = 870564571575680254LL;
	static volatile uint8_t x824 = UINT8_MAX;
	int32_t t127 = 15090882;

    t127 = (x821>>(x822<=(x823^x824)));

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x829 = 3U;
	int32_t x831 = INT32_MAX;
	uint8_t x832 = UINT8_MAX;
	int32_t t128 = -437848;

    t128 = (x829>>(x830<=(x831^x832)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x833 = INT32_MAX;
	static uint16_t x834 = 22468U;
	int16_t x836 = -651;
	volatile int32_t t129 = INT32_MAX;

    t129 = (x833>>(x834<=(x835^x836)));

    if (t129 != INT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x838 = 96;
	int8_t x839 = -29;
	uint16_t x840 = UINT16_MAX;
	volatile uint32_t t130 = 253352235U;

    t130 = (x837>>(x838<=(x839^x840)));

    if (t130 != 396548836U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x849 = INT8_MAX;
	uint64_t x850 = 23679661387033LLU;
	volatile uint16_t x851 = UINT16_MAX;
	static int32_t t131 = 5200;

    t131 = (x849>>(x850<=(x851^x852)));

    if (t131 != 127) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x858 = -1;
	int64_t x859 = -1LL;
	uint64_t x860 = UINT64_MAX;
	volatile int32_t t132 = -762597279;

    t132 = (x857>>(x858<=(x859^x860)));

    if (t132 != 255) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x865 = 675;
	volatile int32_t x866 = -1;
	static volatile uint8_t x867 = 22U;
	volatile uint32_t x868 = 809716561U;
	int32_t t133 = -20;

    t133 = (x865>>(x866<=(x867^x868)));

    if (t133 != 675) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x869 = 0;
	static uint64_t x872 = 716645849771695LLU;
	int32_t t134 = -34550769;

    t134 = (x869>>(x870<=(x871^x872)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x873 = 13U;
	volatile uint32_t x874 = 3U;
	static uint16_t x875 = 1U;
	uint64_t x876 = UINT64_MAX;

    t135 = (x873>>(x874<=(x875^x876)));

    if (t135 != 6) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x877 = 1U;
	int8_t x878 = INT8_MIN;
	static int32_t x879 = INT32_MIN;
	int32_t t136 = -8566180;

    t136 = (x877>>(x878<=(x879^x880)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x909 = 30161U;
	static volatile uint32_t x910 = 45836181U;
	int8_t x911 = INT8_MIN;
	uint64_t x912 = UINT64_MAX;
	int32_t t137 = -6896;

    t137 = (x909>>(x910<=(x911^x912)));

    if (t137 != 30161) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x917 = 150U;
	int64_t x918 = 265699LL;
	int16_t x919 = INT16_MIN;
	volatile int32_t t138 = 1;

    t138 = (x917>>(x918<=(x919^x920)));

    if (t138 != 150) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x921 = INT64_MAX;
	volatile int32_t x922 = INT32_MIN;
	static int64_t x923 = INT64_MIN;
	static int32_t x924 = -859;
	volatile int64_t t139 = -23750274LL;

    t139 = (x921>>(x922<=(x923^x924)));

    if (t139 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x925 = INT64_MAX;
	volatile int64_t x927 = INT64_MIN;
	int32_t x928 = INT32_MAX;
	static volatile int64_t t140 = 168277657922LL;

    t140 = (x925>>(x926<=(x927^x928)));

    if (t140 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x933 = 529487097LLU;
	static int64_t x934 = INT64_MIN;
	int64_t x936 = INT64_MAX;

    t141 = (x933>>(x934<=(x935^x936)));

    if (t141 != 264743548LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x937 = 51U;
	int32_t x938 = -460476711;

    t142 = (x937>>(x938<=(x939^x940)));

    if (t142 != 25) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint64_t x941 = 321248078744LLU;
	int64_t x942 = -544453822977193849LL;
	int32_t x944 = -1;
	uint64_t t143 = 5319607519518157LLU;

    t143 = (x941>>(x942<=(x943^x944)));

    if (t143 != 160624039372LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x945 = INT32_MAX;
	int64_t x946 = INT64_MIN;
	int32_t t144 = 3750774;

    t144 = (x945>>(x946<=(x947^x948)));

    if (t144 != 1073741823) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x949 = 274;
	static int16_t x950 = -1;
	volatile int32_t x951 = INT32_MIN;
	int32_t t145 = 36;

    t145 = (x949>>(x950<=(x951^x952)));

    if (t145 != 274) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x957 = 116U;
	uint16_t x959 = 494U;
	int8_t x960 = INT8_MIN;
	static int32_t t146 = 5;

    t146 = (x957>>(x958<=(x959^x960)));

    if (t146 != 116) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x961 = INT32_MAX;
	static int64_t x963 = 20996403155318563LL;
	int64_t x964 = INT64_MIN;

    t147 = (x961>>(x962<=(x963^x964)));

    if (t147 != INT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x969 = 1U;
	static uint8_t x970 = UINT8_MAX;
	int32_t x971 = INT32_MIN;
	uint32_t x972 = 1171335979U;

    t148 = (x969>>(x970<=(x971^x972)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x977 = 4156725LL;
	volatile int16_t x978 = -1603;
	uint64_t x980 = UINT64_MAX;
	int64_t t149 = 3LL;

    t149 = (x977>>(x978<=(x979^x980)));

    if (t149 != 2078362LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x982 = 31;
	int16_t x983 = -13709;
	static int32_t x984 = 10;
	uint64_t t150 = UINT64_MAX;

    t150 = (x981>>(x982<=(x983^x984)));

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x986 = INT8_MIN;
	int32_t x987 = INT32_MAX;
	volatile uint32_t x988 = 2139819257U;
	volatile uint64_t t151 = 118158LLU;

    t151 = (x985>>(x986<=(x987^x988)));

    if (t151 != 210802LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x993 = INT32_MAX;
	volatile uint16_t x994 = 0U;
	static int16_t x996 = -1;
	static int32_t t152 = INT32_MAX;

    t152 = (x993>>(x994<=(x995^x996)));

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x997 = 676842488627203139LLU;
	static int8_t x999 = 56;
	int16_t x1000 = -1;

    t153 = (x997>>(x998<=(x999^x1000)));

    if (t153 != 338421244313601569LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x1001 = 3533416531345413LLU;
	uint16_t x1003 = 20U;
	static volatile int64_t x1004 = 263812055711018037LL;
	uint64_t t154 = 6LLU;

    t154 = (x1001>>(x1002<=(x1003^x1004)));

    if (t154 != 1766708265672706LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x1014 = 3581653;
	static int8_t x1016 = INT8_MIN;
	static int32_t t155 = 562;

    t155 = (x1013>>(x1014<=(x1015^x1016)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x1018 = UINT8_MAX;
	int16_t x1019 = 567;
	int8_t x1020 = INT8_MIN;
	volatile int32_t t156 = 8770703;

    t156 = (x1017>>(x1018<=(x1019^x1020)));

    if (t156 != 3114) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x1021 = INT64_MAX;
	int8_t x1023 = INT8_MAX;

    t157 = (x1021>>(x1022<=(x1023^x1024)));

    if (t157 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x1030 = INT32_MIN;
	int32_t x1031 = -1;

    t158 = (x1029>>(x1030<=(x1031^x1032)));

    if (t158 != 82660328LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1045 = 13LL;
	uint8_t x1046 = UINT8_MAX;
	static int8_t x1047 = INT8_MIN;
	int32_t x1048 = 127;
	volatile int64_t t159 = -4637259LL;

    t159 = (x1045>>(x1046<=(x1047^x1048)));

    if (t159 != 13LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x1051 = 8U;
	uint16_t x1052 = UINT16_MAX;
	volatile int32_t t160 = -102068157;

    t160 = (x1049>>(x1050<=(x1051^x1052)));

    if (t160 != 9149) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1055 = 4276046U;
	static volatile int32_t t161 = 3;

    t161 = (x1053>>(x1054<=(x1055^x1056)));

    if (t161 != 102) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x1069 = 1;
	static int16_t x1070 = -1;
	int64_t x1072 = -1145198369173LL;

    t162 = (x1069>>(x1070<=(x1071^x1072)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x1077 = 15653;
	volatile uint32_t x1078 = UINT32_MAX;
	volatile int32_t t163 = 17566;

    t163 = (x1077>>(x1078<=(x1079^x1080)));

    if (t163 != 15653) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x1081 = 868984907U;
	uint32_t x1082 = UINT32_MAX;
	int64_t x1083 = INT64_MIN;
	uint32_t t164 = 25868763U;

    t164 = (x1081>>(x1082<=(x1083^x1084)));

    if (t164 != 868984907U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1086 = INT32_MAX;
	uint16_t x1087 = 20U;
	int32_t x1088 = INT32_MIN;
	static volatile int32_t t165 = INT32_MAX;

    t165 = (x1085>>(x1086<=(x1087^x1088)));

    if (t165 != INT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x1089 = 63;
	volatile int32_t x1090 = INT32_MAX;
	volatile int32_t x1091 = -1;
	uint16_t x1092 = 3432U;
	static int32_t t166 = 1;

    t166 = (x1089>>(x1090<=(x1091^x1092)));

    if (t166 != 63) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1113 = UINT64_MAX;
	int16_t x1114 = -1;
	volatile int32_t x1115 = -568;
	static uint64_t x1116 = UINT64_MAX;
	uint64_t t167 = UINT64_MAX;

    t167 = (x1113>>(x1114<=(x1115^x1116)));

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1117 = 2351U;
	uint32_t x1118 = UINT32_MAX;
	volatile int16_t x1120 = -4549;
	int32_t t168 = 59556;

    t168 = (x1117>>(x1118<=(x1119^x1120)));

    if (t168 != 2351) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1121 = INT64_MAX;
	static int16_t x1122 = INT16_MAX;
	int8_t x1123 = 8;
	uint64_t x1124 = 1155022980LLU;

    t169 = (x1121>>(x1122<=(x1123^x1124)));

    if (t169 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x1133 = 483612138834642284LL;
	static uint8_t x1135 = 3U;
	uint32_t x1136 = 81979796U;

    t170 = (x1133>>(x1134<=(x1135^x1136)));

    if (t170 != 241806069417321142LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1137 = INT16_MAX;
	uint8_t x1138 = UINT8_MAX;
	int8_t x1140 = INT8_MIN;
	volatile int32_t t171 = -1212023;

    t171 = (x1137>>(x1138<=(x1139^x1140)));

    if (t171 != 32767) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint8_t x1141 = UINT8_MAX;
	int32_t x1143 = -1;
	uint32_t x1144 = 1355781346U;
	volatile int32_t t172 = 0;

    t172 = (x1141>>(x1142<=(x1143^x1144)));

    if (t172 != 127) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x1145 = INT16_MAX;
	static uint64_t x1146 = 4389LLU;
	int32_t x1147 = -20;
	static int32_t t173 = 992810255;

    t173 = (x1145>>(x1146<=(x1147^x1148)));

    if (t173 != 32767) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x1149 = UINT16_MAX;
	int64_t x1150 = -1LL;
	int32_t x1152 = INT32_MIN;
	int32_t t174 = -6815;

    t174 = (x1149>>(x1150<=(x1151^x1152)));

    if (t174 != 32767) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1161 = 1127570;
	int64_t x1162 = INT64_MIN;
	static uint32_t x1164 = 1959818288U;
	int32_t t175 = 0;

    t175 = (x1161>>(x1162<=(x1163^x1164)));

    if (t175 != 563785) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x1165 = 3;
	volatile int8_t x1166 = -6;
	uint8_t x1167 = 36U;
	int8_t x1168 = -1;
	volatile int32_t t176 = -376511;

    t176 = (x1165>>(x1166<=(x1167^x1168)));

    if (t176 != 3) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1169 = 265753915LLU;
	uint64_t x1170 = 2823898737LLU;
	volatile int8_t x1171 = 1;
	int32_t x1172 = 485468;
	volatile uint64_t t177 = 3667934583820LLU;

    t177 = (x1169>>(x1170<=(x1171^x1172)));

    if (t177 != 265753915LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1182 = 38U;
	int64_t x1183 = -1LL;
	volatile int8_t x1184 = INT8_MIN;
	volatile int32_t t178 = 51226;

    t178 = (x1181>>(x1182<=(x1183^x1184)));

    if (t178 != 23) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x1205 = 17733U;
	static volatile int8_t x1207 = 1;
	int32_t t179 = 18088;

    t179 = (x1205>>(x1206<=(x1207^x1208)));

    if (t179 != 17733) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1209 = 23722912U;
	int16_t x1210 = -1;
	int32_t x1211 = INT32_MAX;
	volatile int8_t x1212 = INT8_MIN;
	uint32_t t180 = 1211339U;

    t180 = (x1209>>(x1210<=(x1211^x1212)));

    if (t180 != 23722912U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1225 = UINT8_MAX;
	static int64_t x1227 = -1LL;
	static volatile int64_t x1228 = -1LL;
	volatile int32_t t181 = 723;

    t181 = (x1225>>(x1226<=(x1227^x1228)));

    if (t181 != 127) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x1229 = 836413232U;
	int16_t x1231 = INT16_MIN;
	static int64_t x1232 = -1LL;
	volatile uint32_t t182 = 64308U;

    t182 = (x1229>>(x1230<=(x1231^x1232)));

    if (t182 != 418206616U) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int8_t x1233 = 0;
	int8_t x1234 = INT8_MIN;
	int8_t x1235 = INT8_MIN;
	uint32_t x1236 = 13650U;
	int32_t t183 = 116214;

    t183 = (x1233>>(x1234<=(x1235^x1236)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x1238 = INT8_MAX;
	uint32_t x1240 = 794U;
	int32_t t184 = -4182717;

    t184 = (x1237>>(x1238<=(x1239^x1240)));

    if (t184 != 127) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1241 = 1786448;
	volatile int32_t x1244 = -162656079;

    t185 = (x1241>>(x1242<=(x1243^x1244)));

    if (t185 != 1786448) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1245 = 46U;
	static int8_t x1246 = -1;
	uint32_t x1247 = 1U;
	int32_t x1248 = INT32_MIN;

    t186 = (x1245>>(x1246<=(x1247^x1248)));

    if (t186 != 46) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1258 = 403U;
	static uint32_t x1259 = 50933U;
	static volatile int32_t t187 = 1689664;

    t187 = (x1257>>(x1258<=(x1259^x1260)));

    if (t187 != 32767) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1261 = 410U;
	volatile int32_t x1263 = -1;
	int64_t x1264 = INT64_MAX;
	volatile int32_t t188 = 4446;

    t188 = (x1261>>(x1262<=(x1263^x1264)));

    if (t188 != 205) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x1269 = 1;
	int32_t x1270 = INT32_MIN;
	int8_t x1271 = INT8_MIN;
	static uint16_t x1272 = 3U;
	int32_t t189 = -159544736;

    t189 = (x1269>>(x1270<=(x1271^x1272)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1285 = 6235U;
	int32_t x1286 = 66286340;
	volatile uint8_t x1287 = 5U;
	uint8_t x1288 = 39U;
	volatile int32_t t190 = 40;

    t190 = (x1285>>(x1286<=(x1287^x1288)));

    if (t190 != 6235) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x1298 = 12952U;
	int64_t x1299 = -1LL;

    t191 = (x1297>>(x1298<=(x1299^x1300)));

    if (t191 != 2726) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1301 = UINT32_MAX;
	static uint32_t x1302 = UINT32_MAX;
	uint16_t x1303 = UINT16_MAX;
	uint32_t t192 = UINT32_MAX;

    t192 = (x1301>>(x1302<=(x1303^x1304)));

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1309 = UINT64_MAX;
	volatile uint8_t x1310 = 103U;
	int16_t x1311 = INT16_MIN;
	volatile uint8_t x1312 = 14U;
	volatile uint64_t t193 = UINT64_MAX;

    t193 = (x1309>>(x1310<=(x1311^x1312)));

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1317 = 5462046504215588LLU;
	int8_t x1318 = 2;
	uint32_t x1319 = UINT32_MAX;

    t194 = (x1317>>(x1318<=(x1319^x1320)));

    if (t194 != 5462046504215588LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1326 = 885;
	volatile int32_t x1327 = -14346416;
	uint8_t x1328 = 76U;

    t195 = (x1325>>(x1326<=(x1327^x1328)));

    if (t195 != 49) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1330 = -1;
	int8_t x1332 = INT8_MIN;

    t196 = (x1329>>(x1330<=(x1331^x1332)));

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1337 = INT32_MAX;
	static int32_t x1338 = INT32_MIN;
	uint64_t x1339 = 195484772532691LLU;
	int8_t x1340 = -1;
	static volatile int32_t t197 = INT32_MAX;

    t197 = (x1337>>(x1338<=(x1339^x1340)));

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1345 = 7U;
	int32_t x1346 = -9;
	uint64_t x1347 = UINT64_MAX;
	int8_t x1348 = 1;

    t198 = (x1345>>(x1346<=(x1347^x1348)));

    if (t198 != 3) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1353 = 6287;
	uint16_t x1354 = 246U;
	int8_t x1355 = INT8_MIN;

    t199 = (x1353>>(x1354<=(x1355^x1356)));

    if (t199 != 3143) { NG(); } else { ; }
	
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

