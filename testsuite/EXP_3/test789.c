
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

static int32_t x12 = INT32_MIN;
static volatile uint32_t t3 = 7657220U;
static uint8_t x29 = UINT8_MAX;
int64_t x30 = INT64_MIN;
static volatile uint8_t x31 = 12U;
volatile int8_t x34 = INT8_MAX;
static int64_t t9 = 127LL;
volatile int16_t x65 = INT16_MAX;
volatile uint16_t x67 = 13470U;
int8_t x75 = -1;
volatile int64_t x81 = -7956434041602639LL;
int64_t x82 = -7628LL;
volatile int64_t t13 = 253937295359081LL;
int16_t x92 = -4075;
volatile int64_t t14 = -521LL;
int32_t x93 = 389221;
int16_t x94 = -949;
volatile int32_t x99 = -1;
volatile int64_t t18 = 652LL;
int32_t x129 = -4;
uint16_t x130 = UINT16_MAX;
int64_t x153 = INT64_MAX;
static int8_t x154 = 0;
int64_t t22 = -6140747205658LL;
uint64_t x171 = 123LLU;
uint16_t x187 = 8U;
uint8_t x198 = 115U;
volatile uint8_t x200 = 49U;
uint32_t x206 = UINT32_MAX;
uint64_t t31 = 74751LLU;
int64_t x213 = INT64_MIN;
uint8_t x214 = UINT8_MAX;
int64_t x219 = INT64_MIN;
int32_t x220 = INT32_MAX;
int32_t x229 = 282;
uint64_t x243 = UINT64_MAX;
static uint32_t x246 = 455867591U;
uint32_t t38 = 3567587U;
uint64_t x259 = 8164LLU;
uint64_t x268 = 547287889865LLU;
int32_t x280 = 56;
volatile int8_t x301 = -2;
volatile int16_t x302 = 411;
volatile uint8_t x308 = UINT8_MAX;
volatile int8_t x312 = -15;
static volatile int8_t x325 = INT8_MAX;
volatile int8_t x326 = -1;
static int32_t x328 = INT32_MAX;
volatile int32_t t48 = 363454;
int32_t x329 = INT32_MIN;
volatile uint64_t x332 = 106342868283LLU;
volatile uint64_t t49 = 18547483752LLU;
volatile int64_t x337 = -1LL;
static int16_t x346 = -1;
int64_t x351 = INT64_MIN;
volatile int64_t t55 = -4601249714454056756LL;
static volatile int64_t x369 = 724114376460LL;
int32_t x373 = INT32_MIN;
static uint64_t x377 = UINT64_MAX;
int32_t x378 = 12487046;
static uint64_t t58 = 1LLU;
volatile int64_t x386 = 880916LL;
static volatile int16_t x390 = INT16_MAX;
int32_t x393 = -5;
uint32_t t61 = 2U;
static int32_t x404 = INT32_MIN;
volatile int64_t x407 = -15045286737320LL;
volatile int8_t x424 = INT8_MIN;
static int32_t x430 = INT32_MAX;
static volatile int8_t x431 = -1;
int64_t x440 = -101068799287438LL;
static int32_t x453 = -28;
static int64_t x455 = INT64_MAX;
int8_t x465 = INT8_MIN;
int32_t t70 = 1;
uint64_t x472 = 24996356LLU;
int8_t x481 = 45;
volatile int64_t t74 = -2LL;
int64_t x509 = -24340772271316570LL;
int64_t x514 = INT64_MIN;
uint32_t x520 = 783U;
int8_t x536 = 12;
static uint8_t x546 = 11U;
volatile uint64_t t83 = 0LLU;
int8_t x554 = 0;
int16_t x555 = -1134;
volatile int16_t x557 = -1;
volatile uint64_t t86 = 3500285LLU;
static int32_t x569 = -10;
int8_t x570 = -1;
static int16_t x581 = -1;
int16_t x583 = INT16_MIN;
static uint64_t x585 = UINT64_MAX;
uint8_t x588 = 35U;
int64_t t94 = -9542623770165596LL;
int16_t x619 = -1;
static volatile uint64_t x623 = 724032637817LLU;
static int8_t x629 = -1;
int8_t x633 = INT8_MIN;
uint16_t x641 = 963U;
volatile int32_t t100 = -1449;
static int32_t x655 = -477050;
uint8_t x656 = UINT8_MAX;
volatile uint64_t x657 = UINT64_MAX;
int64_t x658 = -1LL;
uint64_t x662 = 3993392126122293LLU;
int64_t x668 = INT64_MIN;
int64_t x669 = -125542451LL;
volatile uint8_t x670 = 17U;
int64_t x677 = INT64_MIN;
volatile uint32_t x688 = 1763053U;
static volatile int32_t x692 = 102869743;
volatile uint64_t x693 = UINT64_MAX;
int8_t x706 = INT8_MIN;
uint32_t x714 = 0U;
int64_t x715 = INT64_MIN;
int64_t x718 = -19376226141539567LL;
static volatile int32_t x721 = -1;
int32_t x741 = -234;
int64_t t117 = -4287LL;
int64_t x757 = -1LL;
int16_t x765 = INT16_MIN;
uint16_t x766 = 20U;
static uint64_t x768 = 86702LLU;
int64_t x769 = INT64_MAX;
int64_t t122 = -6LL;
static int32_t x777 = INT32_MIN;
volatile uint32_t t124 = 2663U;
int64_t x792 = INT64_MIN;
uint64_t x794 = UINT64_MAX;
int64_t x795 = -79LL;
uint32_t x807 = UINT32_MAX;
int64_t x808 = -13536592294621LL;
uint32_t x817 = 1966658261U;
static volatile int64_t t129 = -6392687LL;
uint16_t x844 = 122U;
int16_t x855 = INT16_MAX;
int32_t x863 = 2;
volatile uint32_t t136 = 94264U;
volatile uint8_t x890 = UINT8_MAX;
static volatile int8_t x891 = -1;
uint32_t x902 = 3U;
static uint64_t x904 = 7629228254647536LLU;
int32_t x910 = INT32_MAX;
int16_t x915 = -1;
static volatile uint8_t x917 = 62U;
volatile int32_t x918 = INT32_MIN;
uint64_t x922 = 900714296750LLU;
volatile uint32_t x925 = 1U;
int8_t x927 = INT8_MIN;
int16_t x930 = INT16_MIN;
int64_t x932 = -109LL;
int8_t x941 = INT8_MAX;
int32_t x945 = INT32_MAX;
uint8_t x959 = UINT8_MAX;
int32_t x982 = 5066615;
int32_t x984 = 46143;
static volatile uint32_t t153 = 308U;
volatile int32_t x986 = INT32_MAX;
uint32_t x988 = 717161371U;
static int64_t t154 = -26LL;
uint64_t x992 = 1225751467403LLU;
uint64_t x1000 = 35642657819947120LLU;
volatile int16_t x1005 = INT16_MIN;
volatile int8_t x1006 = -1;
uint64_t t158 = 5029903LLU;
volatile int32_t x1012 = -43030978;
static volatile uint64_t t160 = 13LLU;
int32_t t161 = -24473;
int32_t x1030 = -1;
uint32_t x1031 = 1579942U;
volatile uint32_t t162 = 13U;
uint32_t x1051 = UINT32_MAX;
static volatile uint64_t x1053 = UINT64_MAX;
int16_t x1054 = INT16_MIN;
volatile uint64_t t165 = 3552344LLU;
volatile int64_t t166 = -362102621228868014LL;
volatile int8_t x1062 = INT8_MIN;
static uint32_t x1074 = 507798U;
int32_t x1076 = 1711619;
int8_t x1078 = INT8_MIN;
int32_t x1081 = INT32_MAX;
uint16_t x1101 = UINT16_MAX;
int64_t x1102 = INT64_MIN;
int64_t t175 = -1LL;
int8_t x1105 = 1;
volatile uint64_t x1109 = UINT64_MAX;
int32_t x1120 = INT32_MAX;
uint8_t x1121 = 2U;
uint32_t x1125 = 944988U;
uint64_t x1126 = 1909908194723478807LLU;
uint64_t x1130 = UINT64_MAX;
int16_t x1133 = INT16_MIN;
int32_t x1135 = 65100068;
int32_t x1139 = 499;
volatile uint32_t t184 = 3487U;
static uint64_t x1157 = 23LLU;
uint64_t t188 = 33447185705LLU;
int32_t x1183 = -1;
static int32_t x1187 = INT32_MIN;
int64_t t192 = 8LL;
uint64_t x1194 = UINT64_MAX;
volatile int32_t x1211 = INT32_MIN;
int32_t x1214 = 0;
volatile uint16_t x1242 = UINT16_MAX;
static int64_t x1250 = INT64_MAX;


void f0(void) {
    	int8_t x5 = INT8_MIN;
	uint32_t x6 = 348881202U;
	int32_t x7 = 102047812;
	static volatile uint32_t x8 = UINT32_MAX;
	uint32_t t0 = 1305U;

    t0 = ((x5+x6)%(x7%x8));

    if (t0 != 42737638U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x9 = INT32_MIN;
	uint32_t x10 = 203U;
	static int8_t x11 = INT8_MAX;
	uint32_t t1 = 16619200U;

    t1 = ((x9+x10)%(x11%x12));

    if (t1 != 84U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x13 = UINT8_MAX;
	int8_t x14 = INT8_MIN;
	volatile int16_t x15 = 2;
	int64_t x16 = INT64_MAX;
	int64_t t2 = -1LL;

    t2 = ((x13+x14)%(x15%x16));

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x25 = INT32_MIN;
	uint32_t x26 = 122773U;
	uint8_t x27 = UINT8_MAX;
	static uint32_t x28 = 36U;

    t3 = ((x25+x26)%(x27%x28));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x32 = INT64_MIN;
	static int64_t t4 = -469678765382LL;

    t4 = ((x29+x30)%(x31%x32));

    if (t4 != -5LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x33 = INT8_MIN;
	int16_t x35 = -1030;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t5 = 994;

    t5 = ((x33+x34)%(x35%x36));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x37 = -84035121;
	uint32_t x38 = 292U;
	uint32_t x39 = UINT32_MAX;
	volatile int32_t x40 = -1841734;
	volatile uint32_t t6 = 7538U;

    t6 = ((x37+x38)%(x39%x40));

    if (t6 != 730829U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x45 = INT16_MAX;
	int16_t x46 = INT16_MIN;
	int32_t x47 = -183;
	static uint32_t x48 = 31826U;
	static volatile uint32_t t7 = 154224992U;

    t7 = ((x45+x46)%(x47%x48));

    if (t7 != 12450U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x57 = 0;
	volatile uint16_t x58 = 7U;
	int32_t x59 = INT32_MAX;
	uint8_t x60 = 5U;
	volatile int32_t t8 = -3;

    t8 = ((x57+x58)%(x59%x60));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x61 = -85210891852764LL;
	volatile int64_t x62 = -1LL;
	int64_t x63 = 127LL;
	uint32_t x64 = UINT32_MAX;

    t9 = ((x61+x62)%(x63%x64));

    if (t9 != -61LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x66 = 305U;
	volatile uint64_t x68 = UINT64_MAX;
	static uint64_t t10 = 1786781204663LLU;

    t10 = ((x65+x66)%(x67%x68));

    if (t10 != 6132LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x73 = 969LLU;
	int32_t x74 = INT32_MAX;
	static volatile uint16_t x76 = 207U;
	uint64_t t11 = 212702444855LLU;

    t11 = ((x73+x74)%(x75%x76));

    if (t11 != 2147484616LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x83 = 25;
	int64_t x84 = 1007539448982LL;
	volatile int64_t t12 = -326LL;

    t12 = ((x81+x82)%(x83%x84));

    if (t12 != -17LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x85 = INT64_MAX;
	int64_t x86 = INT64_MIN;
	volatile int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MAX;

    t13 = ((x85+x86)%(x87%x88));

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x89 = 222U;
	uint32_t x90 = 60U;
	int64_t x91 = 3175628LL;

    t14 = ((x89+x90)%(x91%x92));

    if (t14 != 282LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x95 = UINT16_MAX;
	int32_t x96 = INT32_MIN;
	int32_t t15 = -72;

    t15 = ((x93+x94)%(x95%x96));

    if (t15 != 60597) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x97 = UINT16_MAX;
	uint32_t x98 = 7U;
	volatile int32_t x100 = -242867117;
	volatile uint32_t t16 = 1383U;

    t16 = ((x97+x98)%(x99%x100));

    if (t16 != 65542U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x113 = 2U;
	static int16_t x114 = -1;
	int8_t x115 = -1;
	volatile int16_t x116 = INT16_MAX;
	int32_t t17 = -278;

    t17 = ((x113+x114)%(x115%x116));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x117 = -1LL;
	static int64_t x118 = -7904412903LL;
	static int32_t x119 = INT32_MIN;
	int64_t x120 = INT64_MIN;

    t18 = ((x117+x118)%(x119%x120));

    if (t18 != -1461961960LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x121 = -2;
	int64_t x122 = -298LL;
	static int16_t x123 = INT16_MIN;
	uint64_t x124 = 54148043236597567LLU;
	uint64_t t19 = 47201LLU;

    t19 = ((x121+x122)%(x123%x124));

    if (t19 != 23601200938440908LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x131 = -1LL;
	uint16_t x132 = 19U;
	int64_t t20 = 1785591LL;

    t20 = ((x129+x130)%(x131%x132));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x141 = UINT32_MAX;
	int8_t x142 = -1;
	int32_t x143 = -2;
	static int64_t x144 = INT64_MIN;
	static int64_t t21 = 28053532395LL;

    t21 = ((x141+x142)%(x143%x144));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x155 = INT8_MIN;
	uint32_t x156 = UINT32_MAX;

    t22 = ((x153+x154)%(x155%x156));

    if (t22 != 8191LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x157 = 6U;
	uint64_t x158 = 10186420375LLU;
	static volatile int8_t x159 = -17;
	int8_t x160 = INT8_MIN;
	volatile uint64_t t23 = 3956376467LLU;

    t23 = ((x157+x158)%(x159%x160));

    if (t23 != 10186420381LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x165 = UINT64_MAX;
	int32_t x166 = INT32_MIN;
	int64_t x167 = -146230LL;
	volatile int32_t x168 = INT32_MIN;
	volatile uint64_t t24 = 439680356556LLU;

    t24 = ((x165+x166)%(x167%x168));

    if (t24 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x169 = 0;
	volatile int16_t x170 = INT16_MIN;
	volatile uint32_t x172 = 45974U;
	uint64_t t25 = 9126LLU;

    t25 = ((x169+x170)%(x171%x172));

    if (t25 != 89LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x173 = -1;
	uint16_t x174 = 8082U;
	int32_t x175 = INT32_MAX;
	int64_t x176 = INT64_MIN;
	static volatile int64_t t26 = -18LL;

    t26 = ((x173+x174)%(x175%x176));

    if (t26 != 8081LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x181 = 1371U;
	uint8_t x182 = 43U;
	volatile uint8_t x183 = 26U;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t27 = -476;

    t27 = ((x181+x182)%(x183%x184));

    if (t27 != 10) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x185 = 1;
	uint64_t x186 = 103746301934484561LLU;
	int32_t x188 = INT32_MIN;
	uint64_t t28 = 15836571770945LLU;

    t28 = ((x185+x186)%(x187%x188));

    if (t28 != 2LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x189 = 763LLU;
	static volatile uint16_t x190 = UINT16_MAX;
	uint64_t x191 = 48LLU;
	uint16_t x192 = 5U;
	static uint64_t t29 = 20912503LLU;

    t29 = ((x189+x190)%(x191%x192));

    if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x197 = -7387276LL;
	uint8_t x199 = 7U;
	int64_t t30 = 831268305068768837LL;

    t30 = ((x197+x198)%(x199%x200));

    if (t30 != -5LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x205 = UINT64_MAX;
	uint32_t x207 = 1342U;
	static volatile int32_t x208 = INT32_MAX;

    t31 = ((x205+x206)%(x207%x208));

    if (t31 != 970LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x215 = -1;
	static int64_t x216 = 3688915LL;
	int64_t t32 = 14561787323LL;

    t32 = ((x213+x214)%(x215%x216));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x217 = UINT64_MAX;
	uint8_t x218 = 26U;
	static volatile uint64_t t33 = 6700308144LLU;

    t33 = ((x217+x218)%(x219%x220));

    if (t33 != 25LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x221 = -1916809934LL;
	static int16_t x222 = -955;
	int8_t x223 = INT8_MIN;
	uint32_t x224 = 214U;
	static volatile int64_t t34 = 6LL;

    t34 = ((x221+x222)%(x223%x224));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x225 = UINT64_MAX;
	int32_t x226 = INT32_MAX;
	int8_t x227 = 51;
	static int64_t x228 = 928986851326315701LL;
	volatile uint64_t t35 = 21302LLU;

    t35 = ((x225+x226)%(x227%x228));

    if (t35 != 24LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x230 = INT64_MIN;
	int32_t x231 = 1;
	int32_t x232 = INT32_MIN;
	int64_t t36 = 119549LL;

    t36 = ((x229+x230)%(x231%x232));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x241 = 24084U;
	static int16_t x242 = INT16_MIN;
	static uint8_t x244 = 70U;
	volatile uint64_t t37 = 19893LLU;

    t37 = ((x241+x242)%(x243%x244));

    if (t37 != 2LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x245 = 683930U;
	int8_t x247 = 13;
	uint8_t x248 = 15U;

    t38 = ((x245+x246)%(x247%x248));

    if (t38 != 10U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x257 = 0U;
	volatile int32_t x258 = INT32_MAX;
	int16_t x260 = 343;
	volatile uint64_t t39 = 696993494975207LLU;

    t39 = ((x257+x258)%(x259%x260));

    if (t39 != 122LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MIN;
	int16_t x267 = INT16_MIN;
	uint64_t t40 = 211805752909LLU;

    t40 = ((x265+x266)%(x267%x268));

    if (t40 != 134888713827LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x269 = 1424217U;
	uint8_t x270 = UINT8_MAX;
	volatile int32_t x271 = INT32_MIN;
	volatile int16_t x272 = 14187;
	volatile uint32_t t41 = 692279U;

    t41 = ((x269+x270)%(x271%x272));

    if (t41 != 1424472U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x277 = INT16_MAX;
	int32_t x278 = INT32_MIN;
	static uint8_t x279 = 47U;
	static int32_t t42 = 1073739560;

    t42 = ((x277+x278)%(x279%x280));

    if (t42 != -13) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x293 = -1;
	uint32_t x294 = UINT32_MAX;
	int16_t x295 = -1;
	uint64_t x296 = 8818474189308878464LLU;
	static uint64_t t43 = 52241682753LLU;

    t43 = ((x293+x294)%(x295%x296));

    if (t43 != 4294967294LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x303 = -932;
	int16_t x304 = -4434;
	int32_t t44 = 48341970;

    t44 = ((x301+x302)%(x303%x304));

    if (t44 != 409) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x305 = INT8_MIN;
	int64_t x306 = INT64_MAX;
	volatile uint32_t x307 = 7U;
	int64_t t45 = -1LL;

    t45 = ((x305+x306)%(x307%x308));

    if (t45 != 5LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x309 = INT8_MIN;
	uint16_t x310 = 1U;
	int8_t x311 = -1;
	volatile int32_t t46 = -123913377;

    t46 = ((x309+x310)%(x311%x312));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x321 = -1;
	uint16_t x322 = 7U;
	static uint8_t x323 = 17U;
	int64_t x324 = INT64_MIN;
	volatile int64_t t47 = -345025370LL;

    t47 = ((x321+x322)%(x323%x324));

    if (t47 != 6LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x327 = INT32_MIN;

    t48 = ((x325+x326)%(x327%x328));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x330 = 539U;
	int32_t x331 = INT32_MAX;

    t49 = ((x329+x330)%(x331%x332));

    if (t49 != 542LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x338 = 1049U;
	static volatile int64_t x339 = INT64_MIN;
	int8_t x340 = INT8_MAX;
	static int64_t t50 = 60LL;

    t50 = ((x337+x338)%(x339%x340));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x345 = -1;
	uint64_t x347 = 9355LLU;
	static volatile int16_t x348 = 7339;
	uint64_t t51 = 3524LLU;

    t51 = ((x345+x346)%(x347%x348));

    if (t51 != 1022LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x349 = 1LL;
	static volatile int64_t x350 = INT64_MIN;
	uint16_t x352 = UINT16_MAX;
	int64_t t52 = 178971LL;

    t52 = ((x349+x350)%(x351%x352));

    if (t52 != -32767LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x357 = INT32_MIN;
	uint16_t x358 = 28U;
	uint16_t x359 = 10U;
	int8_t x360 = INT8_MIN;
	int32_t t53 = 1;

    t53 = ((x357+x358)%(x359%x360));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x361 = -1LL;
	uint8_t x362 = UINT8_MAX;
	int8_t x363 = INT8_MIN;
	volatile int64_t x364 = -262673426204093593LL;
	int64_t t54 = 10546LL;

    t54 = ((x361+x362)%(x363%x364));

    if (t54 != 126LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x365 = -3091643967639686920LL;
	static int32_t x366 = INT32_MIN;
	volatile int16_t x367 = INT16_MAX;
	int64_t x368 = -3838829LL;

    t55 = ((x365+x366)%(x367%x368));

    if (t55 != -11215LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x370 = -1;
	volatile int16_t x371 = INT16_MAX;
	uint32_t x372 = UINT32_MAX;
	static int64_t t56 = 1246159300217LL;

    t56 = ((x369+x370)%(x371%x372));

    if (t56 != 15062LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x374 = INT64_MAX;
	static int16_t x375 = -1;
	uint8_t x376 = 34U;
	volatile int64_t t57 = 0LL;

    t57 = ((x373+x374)%(x375%x376));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x379 = 3U;
	int32_t x380 = INT32_MAX;

    t58 = ((x377+x378)%(x379%x380));

    if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x385 = 63093U;
	static uint16_t x387 = UINT16_MAX;
	uint32_t x388 = UINT32_MAX;
	int64_t t59 = 67453448677498221LL;

    t59 = ((x385+x386)%(x387%x388));

    if (t59 != 26519LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x389 = 0LL;
	int32_t x391 = INT32_MIN;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t60 = 0LLU;

    t60 = ((x389+x390)%(x391%x392));

    if (t60 != 32767LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x394 = INT8_MIN;
	int8_t x395 = INT8_MIN;
	uint32_t x396 = 21122U;

    t61 = ((x393+x394)%(x395%x396));

    if (t61 != 10275U) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x397 = -1;
	int16_t x398 = INT16_MIN;
	uint8_t x399 = 4U;
	int16_t x400 = INT16_MIN;
	int32_t t62 = 53;

    t62 = ((x397+x398)%(x399%x400));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x401 = 583207851710063021LLU;
	static uint8_t x402 = 1U;
	volatile int64_t x403 = INT64_MAX;
	uint64_t t63 = 33862325246470044LLU;

    t63 = ((x401+x402)%(x403%x404));

    if (t63 != 261460629LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x405 = INT16_MIN;
	uint32_t x406 = 4556943U;
	volatile uint16_t x408 = UINT16_MAX;
	volatile int64_t t64 = 107857731LL;

    t64 = ((x405+x406)%(x407%x408));

    if (t64 != 1225LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x417 = INT8_MIN;
	static uint64_t x418 = UINT64_MAX;
	int64_t x419 = INT64_MIN;
	uint16_t x420 = 448U;
	uint64_t t65 = 15523280LLU;

    t65 = ((x417+x418)%(x419%x420));

    if (t65 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x421 = 197U;
	int8_t x422 = -45;
	uint16_t x423 = 58U;
	volatile int32_t t66 = 202;

    t66 = ((x421+x422)%(x423%x424));

    if (t66 != 36) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x429 = -1LL;
	uint32_t x432 = 59637356U;
	int64_t t67 = 104054076277LL;

    t67 = ((x429+x430)%(x431%x432));

    if (t67 != 778950LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x437 = 538U;
	uint32_t x438 = 6720209U;
	static int16_t x439 = 661;
	volatile int64_t t68 = 5634513LL;

    t68 = ((x437+x438)%(x439%x440));

    if (t68 != 360LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x454 = 30433U;
	static int8_t x456 = INT8_MIN;
	volatile int64_t t69 = 61900194112LL;

    t69 = ((x453+x454)%(x455%x456));

    if (t69 != 52LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x466 = -1;
	int16_t x467 = INT16_MIN;
	static int8_t x468 = INT8_MAX;

    t70 = ((x465+x466)%(x467%x468));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x469 = 116362816U;
	int32_t x470 = 20037027;
	volatile int32_t x471 = INT32_MIN;
	uint64_t t71 = 4LLU;

    t71 = ((x469+x470)%(x471%x472));

    if (t71 != 2510563LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x477 = -464835702LL;
	static uint32_t x478 = 7088U;
	uint32_t x479 = 56066U;
	static int32_t x480 = -1;
	static volatile int64_t t72 = -6835362483LL;

    t72 = ((x477+x478)%(x479%x480));

    if (t72 != -41474LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x482 = INT8_MAX;
	static int16_t x483 = INT16_MAX;
	static uint64_t x484 = UINT64_MAX;
	volatile uint64_t t73 = 14226716114135517LLU;

    t73 = ((x481+x482)%(x483%x484));

    if (t73 != 172LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x489 = 440840U;
	int16_t x490 = 0;
	int32_t x491 = -6884;
	int64_t x492 = INT64_MIN;

    t74 = ((x489+x490)%(x491%x492));

    if (t74 != 264LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x497 = INT8_MIN;
	volatile int32_t x498 = -1;
	int32_t x499 = INT32_MIN;
	int64_t x500 = INT64_MIN;
	volatile int64_t t75 = -4253398564LL;

    t75 = ((x497+x498)%(x499%x500));

    if (t75 != -129LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x510 = INT32_MIN;
	int8_t x511 = INT8_MIN;
	uint64_t x512 = 2126831306LLU;
	uint64_t t76 = 620138809845477918LLU;

    t76 = ((x509+x510)%(x511%x512));

    if (t76 != 379757158LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x513 = 286016169253014LLU;
	int16_t x515 = INT16_MIN;
	int8_t x516 = -22;
	volatile uint64_t t77 = 213464814512671076LLU;

    t77 = ((x513+x514)%(x515%x516));

    if (t77 != 9223658053024028822LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x517 = -12126988470289959LL;
	volatile int8_t x518 = INT8_MIN;
	int32_t x519 = INT32_MIN;
	static int64_t t78 = -136990LL;

    t78 = ((x517+x518)%(x519%x520));

    if (t78 != -398LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x521 = 1;
	uint16_t x522 = 525U;
	static volatile int8_t x523 = INT8_MIN;
	uint32_t x524 = 382544489U;
	static uint32_t t79 = 27590U;

    t79 = ((x521+x522)%(x523%x524));

    if (t79 != 526U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x525 = UINT16_MAX;
	volatile int16_t x526 = INT16_MAX;
	volatile int32_t x527 = INT32_MIN;
	static int64_t x528 = 293734135LL;
	volatile int64_t t80 = 378LL;

    t80 = ((x525+x526)%(x527%x528));

    if (t80 != 98302LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x533 = -1LL;
	volatile int8_t x534 = -1;
	uint8_t x535 = UINT8_MAX;
	volatile int64_t t81 = -1034438354LL;

    t81 = ((x533+x534)%(x535%x536));

    if (t81 != -2LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x545 = UINT32_MAX;
	uint8_t x547 = 2U;
	volatile int64_t x548 = INT64_MAX;
	int64_t t82 = -180679545157188673LL;

    t82 = ((x545+x546)%(x547%x548));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x549 = -1;
	uint16_t x550 = UINT16_MAX;
	static volatile int64_t x551 = INT64_MIN;
	uint64_t x552 = 42955535364122422LLU;

    t83 = ((x549+x550)%(x551%x552));

    if (t83 != 65534LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x553 = -1;
	static volatile int8_t x556 = INT8_MIN;
	int32_t t84 = -2;

    t84 = ((x553+x554)%(x555%x556));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x558 = -11817152296093744LL;
	static int64_t x559 = INT64_MIN;
	int32_t x560 = -80;
	volatile int64_t t85 = -69LL;

    t85 = ((x557+x558)%(x559%x560));

    if (t85 != -17LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x561 = 772512LLU;
	int64_t x562 = INT64_MAX;
	volatile int16_t x563 = 2837;
	int64_t x564 = INT64_MAX;

    t86 = ((x561+x562)%(x563%x564));

    if (t86 != 2458LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x565 = INT16_MIN;
	int16_t x566 = -1;
	int64_t x567 = INT64_MIN;
	uint16_t x568 = 22U;
	static int64_t t87 = 79111110930264078LL;

    t87 = ((x565+x566)%(x567%x568));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x571 = 940929U;
	int32_t x572 = 377005;
	uint32_t t88 = 3U;

    t88 = ((x569+x570)%(x571%x572));

    if (t88 != 129422U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x573 = UINT8_MAX;
	int8_t x574 = -1;
	int16_t x575 = 168;
	volatile int64_t x576 = INT64_MIN;
	static int64_t t89 = -23393645637270LL;

    t89 = ((x573+x574)%(x575%x576));

    if (t89 != 86LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x582 = UINT16_MAX;
	static int64_t x584 = INT64_MIN;
	int64_t t90 = 751340LL;

    t90 = ((x581+x582)%(x583%x584));

    if (t90 != 32766LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x586 = INT16_MAX;
	uint16_t x587 = 294U;
	uint64_t t91 = 1386260003LLU;

    t91 = ((x585+x586)%(x587%x588));

    if (t91 != 6LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x589 = 368;
	static volatile uint64_t x590 = 138580126452993154LLU;
	int16_t x591 = INT16_MIN;
	uint64_t x592 = 7353773492252479LLU;
	volatile uint64_t t92 = 51537730625317583LLU;

    t92 = ((x589+x590)%(x591%x592));

    if (t92 != 2854075981234398LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x593 = INT16_MAX;
	int16_t x594 = 1;
	static uint8_t x595 = 120U;
	int64_t x596 = 296871311368842LL;
	int64_t t93 = -469LL;

    t93 = ((x593+x594)%(x595%x596));

    if (t93 != 8LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x597 = INT64_MIN;
	uint32_t x598 = 27U;
	int32_t x599 = -1;
	uint32_t x600 = 191122207U;

    t94 = ((x597+x598)%(x599%x600));

    if (t94 != -38997058LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x617 = -1;
	int8_t x618 = 58;
	int8_t x620 = 7;
	int32_t t95 = -3038940;

    t95 = ((x617+x618)%(x619%x620));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x621 = UINT8_MAX;
	uint16_t x622 = 24U;
	int64_t x624 = 1936002613804LL;
	uint64_t t96 = 238725LLU;

    t96 = ((x621+x622)%(x623%x624));

    if (t96 != 279LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x630 = 103996LL;
	volatile int32_t x631 = -1;
	volatile int16_t x632 = INT16_MIN;
	int64_t t97 = 4219LL;

    t97 = ((x629+x630)%(x631%x632));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x634 = 115LLU;
	uint8_t x635 = 6U;
	static uint32_t x636 = UINT32_MAX;
	static volatile uint64_t t98 = 15LLU;

    t98 = ((x633+x634)%(x635%x636));

    if (t98 != 3LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x637 = UINT32_MAX;
	int8_t x638 = -17;
	static volatile uint64_t x639 = 17337LLU;
	static int16_t x640 = -265;
	static uint64_t t99 = 5647282137LLU;

    t99 = ((x637+x638)%(x639%x640));

    if (t99 != 2920LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x642 = -1;
	int16_t x643 = -43;
	uint8_t x644 = 7U;

    t100 = ((x641+x642)%(x643%x644));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x653 = UINT16_MAX;
	int16_t x654 = -63;
	volatile int32_t t101 = -1375102;

    t101 = ((x653+x654)%(x655%x656));

    if (t101 != 72) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x659 = 1LL;
	uint32_t x660 = UINT32_MAX;
	uint64_t t102 = 5418668613623649671LLU;

    t102 = ((x657+x658)%(x659%x660));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x661 = 10735719497159LL;
	volatile uint8_t x663 = UINT8_MAX;
	static uint8_t x664 = 2U;
	uint64_t t103 = 140181543165035LLU;

    t103 = ((x661+x662)%(x663%x664));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x665 = 0LL;
	uint16_t x666 = UINT16_MAX;
	volatile int16_t x667 = -2;
	static volatile int64_t t104 = -8189LL;

    t104 = ((x665+x666)%(x667%x668));

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x671 = -8;
	int64_t x672 = INT64_MAX;
	volatile int64_t t105 = -396LL;

    t105 = ((x669+x670)%(x671%x672));

    if (t105 != -2LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x678 = 39U;
	uint64_t x679 = 1046271LLU;
	uint16_t x680 = 2U;
	volatile uint64_t t106 = 32827921417258LLU;

    t106 = ((x677+x678)%(x679%x680));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x685 = 727921657U;
	int16_t x686 = -41;
	volatile int64_t x687 = -1LL;
	volatile int64_t t107 = 124128378729025610LL;

    t107 = ((x685+x686)%(x687%x688));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x689 = INT16_MAX;
	int64_t x690 = 27802556837940LL;
	int16_t x691 = -1866;
	int64_t t108 = -12323978709058190LL;

    t108 = ((x689+x690)%(x691%x692));

    if (t108 != 415LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x694 = INT8_MIN;
	volatile int64_t x695 = INT64_MIN;
	int32_t x696 = INT32_MAX;
	uint64_t t109 = 10122774040449LLU;

    t109 = ((x693+x694)%(x695%x696));

    if (t109 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x701 = 1;
	volatile uint16_t x702 = UINT16_MAX;
	int64_t x703 = -1LL;
	uint8_t x704 = UINT8_MAX;
	static int64_t t110 = 55444LL;

    t110 = ((x701+x702)%(x703%x704));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x705 = 3774U;
	int8_t x707 = -1;
	int64_t x708 = -819018059056866827LL;
	int64_t t111 = 164304LL;

    t111 = ((x705+x706)%(x707%x708));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x713 = 1226801U;
	uint16_t x716 = 2531U;
	static int64_t t112 = -569740369243LL;

    t112 = ((x713+x714)%(x715%x716));

    if (t112 != 407LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x717 = 5U;
	int8_t x719 = INT8_MIN;
	uint32_t x720 = 21U;
	volatile int64_t t113 = -345007329458991LL;

    t113 = ((x717+x718)%(x719%x720));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x722 = 880U;
	volatile int32_t x723 = -1;
	int16_t x724 = 3;
	static uint32_t t114 = 2735U;

    t114 = ((x721+x722)%(x723%x724));

    if (t114 != 879U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x733 = 10U;
	uint16_t x734 = 97U;
	int8_t x735 = 1;
	int16_t x736 = 34;
	volatile uint32_t t115 = 8435U;

    t115 = ((x733+x734)%(x735%x736));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x742 = INT16_MIN;
	int64_t x743 = -1LL;
	uint8_t x744 = 4U;
	volatile int64_t t116 = 219042LL;

    t116 = ((x741+x742)%(x743%x744));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x745 = 34;
	static int8_t x746 = INT8_MAX;
	static int16_t x747 = INT16_MIN;
	int64_t x748 = INT64_MIN;

    t117 = ((x745+x746)%(x747%x748));

    if (t117 != 161LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x749 = -1;
	uint8_t x750 = 0U;
	uint32_t x751 = 3126011U;
	volatile int8_t x752 = -1;
	volatile uint32_t t118 = 11532U;

    t118 = ((x749+x750)%(x751%x752));

    if (t118 != 2954192U) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x753 = INT64_MIN;
	int16_t x754 = INT16_MAX;
	uint64_t x755 = UINT64_MAX;
	static uint16_t x756 = 27U;
	uint64_t t119 = 751401LLU;

    t119 = ((x753+x754)%(x755%x756));

    if (t119 != 15LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x758 = INT8_MIN;
	int64_t x759 = -1LL;
	int64_t x760 = INT64_MIN;
	int64_t t120 = -12808598509254857LL;

    t120 = ((x757+x758)%(x759%x760));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x767 = INT64_MIN;
	volatile uint64_t t121 = 62773028481LLU;

    t121 = ((x765+x766)%(x767%x768));

    if (t121 != 27896LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x770 = -1;
	volatile int32_t x771 = INT32_MIN;
	volatile int32_t x772 = -9782;

    t122 = ((x769+x770)%(x771%x772));

    if (t122 != 386LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x773 = INT64_MAX;
	int16_t x774 = INT16_MIN;
	int8_t x775 = INT8_MIN;
	static int64_t x776 = INT64_MIN;
	volatile int64_t t123 = 1556549841LL;

    t123 = ((x773+x774)%(x775%x776));

    if (t123 != 127LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x778 = 57826U;
	static uint16_t x779 = UINT16_MAX;
	uint8_t x780 = 18U;

    t124 = ((x777+x778)%(x779%x780));

    if (t124 != 9U) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x789 = INT32_MIN;
	int32_t x790 = 18;
	volatile int16_t x791 = -112;
	int64_t t125 = -1639341888785LL;

    t125 = ((x789+x790)%(x791%x792));

    if (t125 != -110LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x793 = INT16_MAX;
	static int8_t x796 = INT8_MAX;
	volatile uint64_t t126 = 365499688315050LLU;

    t126 = ((x793+x794)%(x795%x796));

    if (t126 != 32766LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x805 = 14213U;
	uint16_t x806 = 242U;
	int64_t t127 = -2029532611LL;

    t127 = ((x805+x806)%(x807%x808));

    if (t127 != 14455LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x809 = 122349203;
	uint64_t x810 = UINT64_MAX;
	int64_t x811 = -3038518114134194LL;
	int64_t x812 = INT64_MIN;
	static uint64_t t128 = 8270212LLU;

    t128 = ((x809+x810)%(x811%x812));

    if (t128 != 122349202LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x818 = 127U;
	int64_t x819 = 1011031301505490LL;
	volatile int8_t x820 = -3;

    t129 = ((x817+x818)%(x819%x820));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x821 = -1LL;
	int8_t x822 = INT8_MIN;
	static int32_t x823 = INT32_MAX;
	volatile int16_t x824 = INT16_MIN;
	volatile int64_t t130 = -302308272509070987LL;

    t130 = ((x821+x822)%(x823%x824));

    if (t130 != -129LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x833 = INT8_MAX;
	int8_t x834 = INT8_MAX;
	int64_t x835 = 16240880678LL;
	uint16_t x836 = UINT16_MAX;
	int64_t t131 = 543870864662156994LL;

    t131 = ((x833+x834)%(x835%x836));

    if (t131 != 254LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x837 = INT16_MIN;
	uint32_t x838 = 3U;
	uint32_t x839 = UINT32_MAX;
	volatile int32_t x840 = 2303;
	uint32_t t132 = 206533073U;

    t132 = ((x837+x838)%(x839%x840));

    if (t132 != 728U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x841 = 0;
	static int8_t x842 = INT8_MIN;
	static volatile int64_t x843 = INT64_MIN;
	int64_t t133 = 37965392084415LL;

    t133 = ((x841+x842)%(x843%x844));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x849 = INT16_MIN;
	int32_t x850 = -7932;
	static int64_t x851 = -6LL;
	int32_t x852 = 504191;
	volatile int64_t t134 = 76LL;

    t134 = ((x849+x850)%(x851%x852));

    if (t134 != -2LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x853 = UINT16_MAX;
	volatile int64_t x854 = -205852579516983LL;
	int64_t x856 = INT64_MIN;
	static int64_t t135 = -138109028606106LL;

    t135 = ((x853+x854)%(x855%x856));

    if (t135 != -21216LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x861 = INT8_MIN;
	volatile uint32_t x862 = 16720867U;
	volatile int8_t x864 = INT8_MIN;

    t136 = ((x861+x862)%(x863%x864));

    if (t136 != 1U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x865 = UINT8_MAX;
	uint16_t x866 = 10U;
	int16_t x867 = -8132;
	int8_t x868 = INT8_MIN;
	volatile int32_t t137 = -414;

    t137 = ((x865+x866)%(x867%x868));

    if (t137 != 61) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x873 = INT16_MIN;
	volatile uint32_t x874 = UINT32_MAX;
	static int8_t x875 = INT8_MIN;
	static volatile int32_t x876 = -31277278;
	volatile uint32_t t138 = 154562079U;

    t138 = ((x873+x874)%(x875%x876));

    if (t138 != 4294934527U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x881 = INT64_MIN;
	volatile int64_t x882 = 275786588LL;
	volatile uint32_t x883 = UINT32_MAX;
	static int8_t x884 = INT8_MIN;
	static int64_t t139 = -157420LL;

    t139 = ((x881+x882)%(x883%x884));

    if (t139 != -9LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x889 = 3643U;
	int8_t x892 = INT8_MIN;
	int32_t t140 = 441599;

    t140 = ((x889+x890)%(x891%x892));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x901 = 9LLU;
	uint16_t x903 = 3U;
	volatile uint64_t t141 = 3LLU;

    t141 = ((x901+x902)%(x903%x904));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x909 = 150365LL;
	int64_t x911 = INT64_MAX;
	int32_t x912 = INT32_MIN;
	volatile int64_t t142 = -417876LL;

    t142 = ((x909+x910)%(x911%x912));

    if (t142 != 150365LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x913 = INT16_MAX;
	int8_t x914 = INT8_MAX;
	int8_t x916 = 7;
	volatile int32_t t143 = -40;

    t143 = ((x913+x914)%(x915%x916));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x919 = INT16_MIN;
	volatile uint8_t x920 = 13U;
	static int32_t t144 = -10844242;

    t144 = ((x917+x918)%(x919%x920));

    if (t144 != -2) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x921 = 31;
	uint32_t x923 = UINT32_MAX;
	uint8_t x924 = 13U;
	uint64_t t145 = 223LLU;

    t145 = ((x921+x922)%(x923%x924));

    if (t145 != 5LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x926 = UINT32_MAX;
	static int32_t x928 = INT32_MIN;
	volatile uint32_t t146 = 43U;

    t146 = ((x925+x926)%(x927%x928));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x929 = INT16_MIN;
	volatile uint16_t x931 = UINT16_MAX;
	int64_t t147 = -1920819700LL;

    t147 = ((x929+x930)%(x931%x932));

    if (t147 != -16LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x942 = -1;
	uint8_t x943 = UINT8_MAX;
	int32_t x944 = INT32_MAX;
	static int32_t t148 = 3;

    t148 = ((x941+x942)%(x943%x944));

    if (t148 != 126) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x946 = 3917376U;
	volatile uint8_t x947 = 3U;
	uint16_t x948 = UINT16_MAX;
	volatile uint32_t t149 = 82216729U;

    t149 = ((x945+x946)%(x947%x948));

    if (t149 != 1U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x949 = 31LLU;
	int16_t x950 = INT16_MAX;
	int16_t x951 = -1;
	volatile int8_t x952 = INT8_MAX;
	uint64_t t150 = 1151177LLU;

    t150 = ((x949+x950)%(x951%x952));

    if (t150 != 32798LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x957 = INT16_MIN;
	static int8_t x958 = INT8_MIN;
	volatile int8_t x960 = INT8_MAX;
	int32_t t151 = -78;

    t151 = ((x957+x958)%(x959%x960));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x961 = 227384649LL;
	uint16_t x962 = 15698U;
	static int64_t x963 = INT64_MIN;
	volatile int8_t x964 = -55;
	int64_t t152 = -34031377382LL;

    t152 = ((x961+x962)%(x963%x964));

    if (t152 != 3LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x981 = 61U;
	static uint8_t x983 = UINT8_MAX;

    t153 = ((x981+x982)%(x983%x984));

    if (t153 != 81U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x985 = -1LL;
	int8_t x987 = -1;

    t154 = ((x985+x986)%(x987%x988));

    if (t154 != 20002326LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x989 = 15;
	int32_t x990 = INT32_MIN;
	static uint64_t x991 = UINT64_MAX;
	static uint64_t t155 = 278737686230524LLU;

    t155 = ((x989+x990)%(x991%x992));

    if (t155 != 811333237056LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x993 = INT32_MIN;
	int64_t x994 = -1LL;
	int32_t x995 = -11898990;
	int32_t x996 = -61104;
	int64_t t156 = -102949352527280676LL;

    t156 = ((x993+x994)%(x995%x996));

    if (t156 != -41583LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x997 = 4314727421165257LLU;
	uint64_t x998 = UINT64_MAX;
	int16_t x999 = 3312;
	uint64_t t157 = 66830244LLU;

    t157 = ((x997+x998)%(x999%x1000));

    if (t157 != 1320LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1007 = INT8_MIN;
	static uint64_t x1008 = 53476078LLU;

    t158 = ((x1005+x1006)%(x1007%x1008));

    if (t158 != 35675647LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x1009 = UINT16_MAX;
	uint16_t x1010 = 13918U;
	uint32_t x1011 = 62802U;
	volatile uint32_t t159 = 30U;

    t159 = ((x1009+x1010)%(x1011%x1012));

    if (t159 != 16651U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x1013 = 2354774720LLU;
	static int16_t x1014 = 2029;
	uint8_t x1015 = 1U;
	volatile int8_t x1016 = INT8_MIN;

    t160 = ((x1013+x1014)%(x1015%x1016));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x1017 = -13643;
	static volatile int16_t x1018 = 574;
	uint8_t x1019 = 23U;
	int32_t x1020 = INT32_MIN;

    t161 = ((x1017+x1018)%(x1019%x1020));

    if (t161 != -5) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x1029 = 4U;
	int32_t x1032 = INT32_MIN;

    t162 = ((x1029+x1030)%(x1031%x1032));

    if (t162 != 3U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1033 = -2;
	int32_t x1034 = INT32_MAX;
	int32_t x1035 = INT32_MIN;
	volatile uint16_t x1036 = UINT16_MAX;
	volatile int32_t t163 = 1;

    t163 = ((x1033+x1034)%(x1035%x1036));

    if (t163 != 32765) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x1049 = -1;
	int32_t x1050 = -266162;
	int64_t x1052 = INT64_MIN;
	volatile int64_t t164 = 2485291119961277102LL;

    t164 = ((x1049+x1050)%(x1051%x1052));

    if (t164 != -266163LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1055 = INT16_MIN;
	int32_t x1056 = 2326142;

    t165 = ((x1053+x1054)%(x1055%x1056));

    if (t165 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1057 = INT8_MIN;
	volatile int16_t x1058 = INT16_MIN;
	int16_t x1059 = -168;
	volatile int64_t x1060 = INT64_MAX;

    t166 = ((x1057+x1058)%(x1059%x1060));

    if (t166 != -136LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1061 = -1;
	int8_t x1063 = INT8_MAX;
	int32_t x1064 = INT32_MAX;
	int32_t t167 = -5758353;

    t167 = ((x1061+x1062)%(x1063%x1064));

    if (t167 != -2) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1065 = -1;
	int64_t x1066 = INT64_MAX;
	int16_t x1067 = INT16_MIN;
	int64_t x1068 = INT64_MAX;
	static int64_t t168 = -33746570656422LL;

    t168 = ((x1065+x1066)%(x1067%x1068));

    if (t168 != 32766LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1069 = -520302272637632860LL;
	volatile uint64_t x1070 = 3290LLU;
	int32_t x1071 = -1;
	volatile int32_t x1072 = 1494599;
	volatile uint64_t t169 = 760877698LLU;

    t169 = ((x1069+x1070)%(x1071%x1072));

    if (t169 != 17926441801071922046LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1073 = -1LL;
	int16_t x1075 = INT16_MIN;
	static int64_t t170 = -33548061271LL;

    t170 = ((x1073+x1074)%(x1075%x1076));

    if (t170 != 16277LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x1077 = INT16_MAX;
	volatile uint32_t x1079 = UINT32_MAX;
	volatile uint64_t x1080 = UINT64_MAX;
	volatile uint64_t t171 = 7307237582860306081LLU;

    t171 = ((x1077+x1078)%(x1079%x1080));

    if (t171 != 32639LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x1082 = INT8_MIN;
	int16_t x1083 = INT16_MAX;
	int64_t x1084 = -687004748374LL;
	int64_t t172 = -1088410330812LL;

    t172 = ((x1081+x1082)%(x1083%x1084));

    if (t172 != 32640LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1093 = INT8_MAX;
	int16_t x1094 = INT16_MIN;
	int64_t x1095 = 284316170871828709LL;
	uint64_t x1096 = UINT64_MAX;
	static volatile uint64_t t173 = 647980320919914LLU;

    t173 = ((x1093+x1094)%(x1095%x1096));

    if (t173 != 250509137912481599LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1097 = 16U;
	int16_t x1098 = 159;
	volatile int8_t x1099 = -1;
	int32_t x1100 = INT32_MIN;
	volatile int32_t t174 = 156452209;

    t174 = ((x1097+x1098)%(x1099%x1100));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1103 = -1LL;
	int8_t x1104 = INT8_MAX;

    t175 = ((x1101+x1102)%(x1103%x1104));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1106 = INT64_MIN;
	uint8_t x1107 = 32U;
	static uint64_t x1108 = 142959672LLU;
	uint64_t t176 = 246051129826878853LLU;

    t176 = ((x1105+x1106)%(x1107%x1108));

    if (t176 != 1LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1110 = INT32_MIN;
	int8_t x1111 = INT8_MIN;
	volatile uint32_t x1112 = UINT32_MAX;
	static uint64_t t177 = 15297882793LLU;

    t177 = ((x1109+x1110)%(x1111%x1112));

    if (t177 != 2147499903LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1117 = -27168347560977198LL;
	int16_t x1118 = 0;
	int32_t x1119 = -1;
	volatile int64_t t178 = 12259360682LL;

    t178 = ((x1117+x1118)%(x1119%x1120));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x1122 = INT64_MIN;
	static uint64_t x1123 = 5050284LLU;
	static volatile int32_t x1124 = INT32_MIN;
	static volatile uint64_t t179 = 104092LLU;

    t179 = ((x1121+x1122)%(x1123%x1124));

    if (t179 != 791458LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1127 = 14U;
	int64_t x1128 = INT64_MIN;
	volatile uint64_t t180 = 422419840694891856LLU;

    t180 = ((x1125+x1126)%(x1127%x1128));

    if (t180 != 13LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1129 = -1;
	volatile int32_t x1131 = INT32_MIN;
	uint32_t x1132 = UINT32_MAX;
	volatile uint64_t t181 = 424668LLU;

    t181 = ((x1129+x1130)%(x1131%x1132));

    if (t181 != 2147483646LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1134 = -1905452LL;
	int8_t x1136 = INT8_MIN;
	static int64_t t182 = 235795098665354614LL;

    t182 = ((x1133+x1134)%(x1135%x1136));

    if (t182 != -16LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1137 = 61LLU;
	static int8_t x1138 = 25;
	int64_t x1140 = INT64_MIN;
	uint64_t t183 = 1986381LLU;

    t183 = ((x1137+x1138)%(x1139%x1140));

    if (t183 != 86LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1141 = INT16_MAX;
	static uint32_t x1142 = 3729475U;
	int32_t x1143 = INT32_MIN;
	uint8_t x1144 = UINT8_MAX;

    t184 = ((x1141+x1142)%(x1143%x1144));

    if (t184 != 3762242U) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x1145 = 443U;
	int64_t x1146 = 22109155880249482LL;
	static uint8_t x1147 = 3U;
	uint32_t x1148 = 13279908U;
	int64_t t185 = 1LL;

    t185 = ((x1145+x1146)%(x1147%x1148));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1149 = 19273869U;
	int32_t x1150 = INT32_MIN;
	volatile uint32_t x1151 = UINT32_MAX;
	static volatile int32_t x1152 = 160136;
	volatile uint32_t t186 = 8653U;

    t186 = ((x1149+x1150)%(x1151%x1152));

    if (t186 != 27767U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1153 = INT16_MIN;
	uint8_t x1154 = UINT8_MAX;
	volatile uint32_t x1155 = UINT32_MAX;
	volatile int16_t x1156 = INT16_MAX;
	uint32_t t187 = 3U;

    t187 = ((x1153+x1154)%(x1155%x1156));

    if (t187 != 2U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x1158 = INT32_MIN;
	int16_t x1159 = -1;
	int16_t x1160 = -2;

    t188 = ((x1157+x1158)%(x1159%x1160));

    if (t188 != 18446744071562067991LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1161 = INT8_MIN;
	volatile uint8_t x1162 = 1U;
	uint32_t x1163 = UINT32_MAX;
	int8_t x1164 = 27;
	uint32_t t189 = 3U;

    t189 = ((x1161+x1162)%(x1163%x1164));

    if (t189 != 3U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x1181 = 98160296;
	uint16_t x1182 = 2U;
	int64_t x1184 = INT64_MIN;
	static int64_t t190 = -2579LL;

    t190 = ((x1181+x1182)%(x1183%x1184));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1185 = INT8_MIN;
	uint16_t x1186 = 1953U;
	int64_t x1188 = INT64_MIN;
	int64_t t191 = 17635LL;

    t191 = ((x1185+x1186)%(x1187%x1188));

    if (t191 != 1825LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1189 = 342U;
	uint8_t x1190 = UINT8_MAX;
	int64_t x1191 = -2696693930544263036LL;
	int16_t x1192 = INT16_MAX;

    t192 = ((x1189+x1190)%(x1191%x1192));

    if (t192 != 597LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1193 = UINT32_MAX;
	static int16_t x1195 = INT16_MIN;
	int16_t x1196 = -49;
	uint64_t t193 = 268766240887LLU;

    t193 = ((x1193+x1194)%(x1195%x1196));

    if (t193 != 4294967294LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x1205 = INT16_MAX;
	int16_t x1206 = INT16_MIN;
	uint8_t x1207 = UINT8_MAX;
	static int8_t x1208 = INT8_MIN;
	volatile int32_t t194 = 1;

    t194 = ((x1205+x1206)%(x1207%x1208));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1209 = 53U;
	uint32_t x1210 = 9U;
	volatile uint16_t x1212 = 3142U;
	uint32_t t195 = 1415463U;

    t195 = ((x1209+x1210)%(x1211%x1212));

    if (t195 != 62U) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x1213 = INT16_MIN;
	int64_t x1215 = 408352LL;
	static volatile uint32_t x1216 = 271491U;
	int64_t t196 = 2883788390901LL;

    t196 = ((x1213+x1214)%(x1215%x1216));

    if (t196 != -32768LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1221 = UINT8_MAX;
	static uint64_t x1222 = 488LLU;
	volatile int64_t x1223 = INT64_MIN;
	int16_t x1224 = 160;
	static volatile uint64_t t197 = 812340561767298162LLU;

    t197 = ((x1221+x1222)%(x1223%x1224));

    if (t197 != 743LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x1241 = 4211;
	volatile uint32_t x1243 = UINT32_MAX;
	static uint8_t x1244 = 56U;
	volatile uint32_t t198 = 156668970U;

    t198 = ((x1241+x1242)%(x1243%x1244));

    if (t198 != 27U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1249 = INT8_MIN;
	int8_t x1251 = -63;
	static int64_t x1252 = INT64_MIN;
	int64_t t199 = -7386LL;

    t199 = ((x1249+x1250)%(x1251%x1252));

    if (t199 != 5LL) { NG(); } else { ; }
	
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

