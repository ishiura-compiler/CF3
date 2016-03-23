
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

uint8_t x3 = 0U;
static int32_t x19 = -1;
int64_t x27 = -1LL;
static int32_t x28 = INT32_MIN;
int16_t x32 = -1;
uint64_t x42 = UINT64_MAX;
volatile uint64_t t8 = 4140718LLU;
int64_t x45 = -1LL;
int8_t x48 = -1;
uint32_t t12 = 2831U;
int8_t x74 = -1;
int32_t x75 = 587;
uint64_t t14 = 133774903032608LLU;
volatile int64_t t15 = 184294371LL;
int8_t x92 = -1;
uint64_t t17 = 61748LLU;
int32_t x99 = INT32_MIN;
int64_t t18 = -612848046LL;
static volatile int32_t x101 = 35100;
int8_t x102 = -3;
static volatile int64_t t19 = 3LL;
int64_t x105 = -1LL;
static volatile int32_t x111 = -7;
int32_t x118 = INT32_MIN;
static uint8_t x119 = UINT8_MAX;
uint64_t x135 = UINT64_MAX;
int32_t x137 = -1;
int64_t x140 = 4078LL;
static volatile uint64_t t26 = 7LLU;
int16_t x143 = -50;
volatile int16_t x145 = INT16_MAX;
int8_t x149 = -1;
static volatile int8_t x154 = -53;
int16_t x155 = INT16_MIN;
volatile int16_t x161 = -1;
int8_t x164 = -1;
volatile uint32_t x181 = 18239511U;
int8_t x184 = INT8_MAX;
uint16_t x194 = 209U;
uint8_t x201 = UINT8_MAX;
int8_t x207 = 6;
volatile int32_t t37 = -5649;
uint8_t x209 = 3U;
static int64_t x210 = INT64_MIN;
int8_t x212 = -63;
volatile int64_t x223 = INT64_MAX;
volatile int16_t x225 = -8187;
volatile int64_t t43 = 13823071LL;
int8_t x246 = 4;
uint32_t x250 = 7U;
volatile int32_t x256 = -1;
static uint16_t x257 = UINT16_MAX;
int64_t x261 = INT64_MIN;
volatile int32_t t49 = 37015;
static int8_t x270 = -3;
volatile uint32_t x271 = 153U;
uint64_t t51 = 713LLU;
int8_t x282 = 1;
volatile int64_t t52 = 40752967LL;
int16_t x285 = INT16_MIN;
uint16_t x286 = UINT16_MAX;
int8_t x288 = 0;
volatile int16_t x299 = INT16_MIN;
uint16_t x303 = 180U;
static uint8_t x307 = UINT8_MAX;
static int16_t x308 = INT16_MAX;
volatile uint64_t t58 = 255387108LLU;
uint32_t x334 = UINT32_MAX;
int64_t x346 = -6499863LL;
static int16_t x347 = -1;
int64_t t64 = 52534076LL;
static int32_t x357 = INT32_MIN;
volatile int64_t x361 = INT64_MIN;
int64_t x368 = -380LL;
uint8_t x374 = 11U;
static int8_t x378 = INT8_MIN;
static int64_t t69 = -21966532392778908LL;
volatile int16_t x395 = INT16_MIN;
static uint64_t t72 = 3253595215469LLU;
volatile uint64_t t73 = 2960305186LLU;
uint32_t x407 = 29967U;
uint8_t x420 = 0U;
uint32_t x424 = UINT32_MAX;
static int8_t x426 = INT8_MIN;
int16_t x430 = INT16_MIN;
static int16_t x433 = INT16_MIN;
static uint32_t x445 = UINT32_MAX;
volatile uint8_t x450 = 2U;
volatile int32_t x456 = INT32_MAX;
int16_t x457 = -5399;
int64_t x458 = -13489LL;
volatile int8_t x479 = -1;
int16_t x489 = INT16_MIN;
volatile uint32_t t88 = 82546U;
uint64_t x502 = 25434889LLU;
volatile uint64_t t92 = 0LLU;
uint32_t x522 = 258116623U;
uint64_t t93 = 8060983LLU;
volatile uint16_t x526 = 482U;
uint64_t x532 = UINT64_MAX;
static volatile uint32_t x535 = 79733U;
static int16_t x540 = 4;
uint64_t x561 = UINT64_MAX;
static uint64_t x563 = 1486920613608637702LLU;
uint64_t t101 = 3LLU;
uint32_t x578 = UINT32_MAX;
uint64_t x597 = UINT64_MAX;
int8_t x598 = INT8_MIN;
int32_t x607 = INT32_MAX;
static volatile uint8_t x608 = 8U;
int64_t x610 = -1LL;
static volatile uint64_t t112 = 1537782602LLU;
volatile int16_t x618 = INT16_MIN;
volatile int8_t x620 = INT8_MIN;
int64_t x633 = -1LL;
int8_t x636 = -7;
int16_t x647 = INT16_MIN;
volatile int64_t t119 = 9508LL;
int64_t x653 = -10LL;
uint32_t x655 = 868347U;
int16_t x662 = INT16_MIN;
uint64_t x691 = 430373511580LLU;
int8_t x696 = INT8_MIN;
static int16_t x705 = -1905;
int32_t x707 = 5176238;
volatile int8_t x711 = 41;
static int16_t x717 = INT16_MIN;
int8_t x720 = INT8_MIN;
int8_t x721 = INT8_MAX;
volatile uint8_t x724 = 0U;
int64_t x733 = INT64_MIN;
int32_t x745 = -1070349707;
volatile uint64_t t134 = 23LLU;
int64_t x749 = -1LL;
static uint8_t x759 = UINT8_MAX;
uint16_t x766 = UINT16_MAX;
volatile int64_t t138 = -8298966683263LL;
int32_t x772 = INT32_MAX;
int32_t x789 = -1;
int8_t x794 = INT8_MIN;
int32_t t143 = 373;
int8_t x809 = -22;
volatile int8_t x810 = -1;
static int64_t x811 = 856LL;
volatile int32_t x837 = 300553918;
static volatile uint8_t x841 = 5U;
uint32_t x854 = 346U;
uint32_t x860 = 47U;
int32_t x867 = -1;
static uint32_t x871 = 221742U;
int64_t x872 = INT64_MAX;
volatile uint16_t x876 = 1767U;
int8_t x877 = 16;
volatile uint8_t x883 = 115U;
static volatile int64_t t159 = -2169LL;
volatile int32_t x915 = INT32_MIN;
uint32_t t163 = 794U;
int32_t x923 = INT32_MIN;
int16_t x934 = INT16_MIN;
uint16_t x939 = UINT16_MAX;
int32_t x941 = INT32_MIN;
int8_t x964 = -1;
volatile int64_t t170 = 402741194LL;
uint32_t x968 = 19U;
int64_t t171 = 100924864396LL;
volatile uint16_t x986 = UINT16_MAX;
int32_t x992 = INT32_MIN;
static uint64_t t176 = 1838243156418LLU;
volatile int32_t x1002 = -1;
volatile int32_t x1004 = INT32_MIN;
static int32_t x1014 = INT32_MIN;
uint8_t x1017 = UINT8_MAX;
volatile int64_t t182 = 32106724567094LL;
static uint32_t x1022 = UINT32_MAX;
static int8_t x1033 = 1;
int16_t x1041 = 296;
volatile uint64_t t187 = 149530510LLU;
int8_t x1045 = INT8_MIN;
volatile int32_t x1047 = INT32_MIN;
int16_t x1051 = INT16_MIN;
int64_t x1062 = INT64_MIN;
int8_t x1068 = -45;
uint32_t x1072 = 32362U;
uint64_t x1073 = UINT64_MAX;
uint8_t x1089 = 0U;
int64_t x1093 = INT64_MAX;
int64_t x1095 = -19765737726435LL;
int8_t x1098 = -1;
int64_t x1101 = INT64_MAX;


void f0(void) {
    	static uint32_t x1 = UINT32_MAX;
	int8_t x2 = -2;
	static uint64_t x4 = 562321711716551669LLU;
	uint64_t t0 = 182856917LLU;

    t0 = ((x1+x2)/(x3-x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = -1;
	volatile int8_t x6 = -18;
	uint16_t x7 = UINT16_MAX;
	static volatile int64_t x8 = INT64_MAX;
	volatile int64_t t1 = -438609799LL;

    t1 = ((x5+x6)/(x7-x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 48111265U;
	static volatile uint64_t x10 = 188LLU;
	static int64_t x11 = INT64_MIN;
	int16_t x12 = -19;
	uint64_t t2 = 16070LLU;

    t2 = ((x9+x10)/(x11-x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = INT32_MAX;
	uint64_t x18 = 141589088483961LLU;
	uint16_t x20 = UINT16_MAX;
	uint64_t t3 = 255941460971282616LLU;

    t3 = ((x17+x18)/(x19-x20));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MIN;
	static uint32_t x22 = 24014442U;
	volatile int8_t x23 = INT8_MIN;
	uint64_t x24 = 12441397162LLU;
	uint64_t t4 = 269387410324053728LLU;

    t4 = ((x21+x22)/(x23-x24));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x25 = UINT32_MAX;
	int64_t x26 = INT64_MIN;
	volatile int64_t t5 = -4804129780513LL;

    t5 = ((x25+x26)/(x27-x28));

    if (t5 != -4294967296LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x29 = UINT64_MAX;
	int64_t x30 = -1LL;
	uint64_t x31 = 0LLU;
	uint64_t t6 = 634636428628LLU;

    t6 = ((x29+x30)/(x31-x32));

    if (t6 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x33 = UINT16_MAX;
	static uint8_t x34 = 6U;
	int16_t x35 = -1;
	static int8_t x36 = INT8_MIN;
	volatile int32_t t7 = 134;

    t7 = ((x33+x34)/(x35-x36));

    if (t7 != 516) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x41 = 1525110440314821693LLU;
	uint16_t x43 = UINT16_MAX;
	static uint32_t x44 = UINT32_MAX;

    t8 = ((x41+x42)/(x43-x44));

    if (t8 != 23271338505780LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x46 = INT8_MIN;
	static uint8_t x47 = UINT8_MAX;
	int64_t t9 = -427255800355LL;

    t9 = ((x45+x46)/(x47-x48));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x53 = INT32_MAX;
	int8_t x54 = INT8_MIN;
	int32_t x55 = INT32_MIN;
	int64_t x56 = INT64_MIN;
	static volatile int64_t t10 = 1891LL;

    t10 = ((x53+x54)/(x55-x56));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x57 = 10228;
	int64_t x58 = INT64_MIN;
	uint8_t x59 = UINT8_MAX;
	int16_t x60 = INT16_MIN;
	int64_t t11 = -17798LL;

    t11 = ((x57+x58)/(x59-x60));

    if (t11 != -279301457676612LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x65 = 1;
	static volatile int32_t x66 = -290;
	uint32_t x67 = 327U;
	int8_t x68 = INT8_MAX;

    t12 = ((x65+x66)/(x67-x68));

    if (t12 != 21474835U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x69 = 3953U;
	uint16_t x70 = 6029U;
	static int64_t x71 = INT64_MIN;
	int32_t x72 = INT32_MIN;
	static int64_t t13 = 1373831972875LL;

    t13 = ((x69+x70)/(x71-x72));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x73 = UINT64_MAX;
	static volatile uint16_t x76 = 1U;

    t14 = ((x73+x74)/(x75-x76));

    if (t14 != 31479085450016299LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x77 = INT8_MIN;
	int16_t x78 = -1;
	static int64_t x79 = INT64_MIN;
	int32_t x80 = -1;

    t15 = ((x77+x78)/(x79-x80));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x89 = UINT64_MAX;
	volatile int32_t x90 = -807791;
	int16_t x91 = INT16_MAX;
	static volatile uint64_t t16 = 133541292724LLU;

    t16 = ((x89+x90)/(x91-x92));

    if (t16 != 562949953421287LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x93 = INT8_MAX;
	uint32_t x94 = UINT32_MAX;
	static volatile uint64_t x95 = 3066592402LLU;
	uint32_t x96 = UINT32_MAX;

    t17 = ((x93+x94)/(x95-x96));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x97 = -1;
	int64_t x98 = -1LL;
	static int16_t x100 = -1;

    t18 = ((x97+x98)/(x99-x100));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x103 = INT64_MIN;
	uint8_t x104 = 0U;

    t19 = ((x101+x102)/(x103-x104));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x106 = INT64_MAX;
	volatile int32_t x107 = INT32_MAX;
	int16_t x108 = INT16_MAX;
	volatile int64_t t20 = 41218105LL;

    t20 = ((x105+x106)/(x107-x108));

    if (t20 != 4295032833LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x109 = 434LLU;
	volatile int64_t x110 = -99546LL;
	uint16_t x112 = 4665U;
	static uint64_t t21 = 431560037857993LLU;

    t21 = ((x109+x110)/(x111-x112));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x113 = -512809655060LL;
	int8_t x114 = -1;
	int32_t x115 = -1;
	static int32_t x116 = INT32_MAX;
	volatile int64_t t22 = -12372087LL;

    t22 = ((x113+x114)/(x115-x116));

    if (t22 != 238LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x117 = 1;
	int32_t x120 = 1651;
	static volatile int32_t t23 = 94413;

    t23 = ((x117+x118)/(x119-x120));

    if (t23 != 1538312) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MAX;
	int32_t x123 = 384355672;
	int16_t x124 = INT16_MIN;
	int32_t t24 = -7925;

    t24 = ((x121+x122)/(x123-x124));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x133 = 1558U;
	int16_t x134 = -1438;
	int16_t x136 = -3366;
	volatile uint64_t t25 = 350LLU;

    t25 = ((x133+x134)/(x135-x136));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x138 = 8LLU;
	int32_t x139 = 57;

    t26 = ((x137+x138)/(x139-x140));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x141 = INT16_MAX;
	static int64_t x142 = INT64_MIN;
	uint8_t x144 = 2U;
	int64_t t27 = -4994996972425LL;

    t27 = ((x141+x142)/(x143-x144));

    if (t27 != 177372539170283520LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x146 = INT8_MIN;
	int64_t x147 = INT64_MIN;
	int16_t x148 = -1;
	int64_t t28 = 1143141120LL;

    t28 = ((x145+x146)/(x147-x148));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x150 = 14U;
	int32_t x151 = INT32_MIN;
	uint64_t x152 = 28910LLU;
	uint64_t t29 = 943241087LLU;

    t29 = ((x149+x150)/(x151-x152));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x153 = 324U;
	uint8_t x156 = 7U;
	uint32_t t30 = 139U;

    t30 = ((x153+x154)/(x155-x156));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x162 = 47607941896769986LLU;
	int32_t x163 = -9902;
	uint64_t t31 = 4932825881694661030LLU;

    t31 = ((x161+x162)/(x163-x164));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x177 = 4U;
	volatile int8_t x178 = INT8_MAX;
	int16_t x179 = -498;
	int8_t x180 = 0;
	int32_t t32 = -176015976;

    t32 = ((x177+x178)/(x179-x180));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x182 = INT64_MIN;
	static volatile uint32_t x183 = UINT32_MAX;
	static volatile int64_t t33 = -55958223493LL;

    t33 = ((x181+x182)/(x183-x184));

    if (t33 != -2147483711LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x185 = INT16_MAX;
	int16_t x186 = 954;
	int32_t x187 = -27;
	uint64_t x188 = 161721LLU;
	uint64_t t34 = 3734LLU;

    t34 = ((x185+x186)/(x187-x188));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x193 = UINT16_MAX;
	int8_t x195 = 2;
	uint32_t x196 = 533U;
	volatile uint32_t t35 = 14753U;

    t35 = ((x193+x194)/(x195-x196));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x202 = 2U;
	int32_t x203 = -1468;
	int8_t x204 = 19;
	int32_t t36 = -23804;

    t36 = ((x201+x202)/(x203-x204));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x205 = 118U;
	int16_t x206 = INT16_MAX;
	volatile int8_t x208 = 1;

    t37 = ((x205+x206)/(x207-x208));

    if (t37 != 6577) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x211 = INT64_MIN;
	volatile int64_t t38 = -1317LL;

    t38 = ((x209+x210)/(x211-x212));

    if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x217 = 102893;
	int8_t x218 = INT8_MAX;
	static int64_t x219 = -1LL;
	static int8_t x220 = 0;
	int64_t t39 = -987071486781103LL;

    t39 = ((x217+x218)/(x219-x220));

    if (t39 != -103020LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x221 = UINT16_MAX;
	static uint16_t x222 = 1691U;
	int32_t x224 = 41;
	int64_t t40 = -454450236LL;

    t40 = ((x221+x222)/(x223-x224));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x226 = -1LL;
	int32_t x227 = INT32_MAX;
	static uint32_t x228 = 504U;
	int64_t t41 = -512529727LL;

    t41 = ((x225+x226)/(x227-x228));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x237 = -1LL;
	int64_t x238 = -1373136893596LL;
	static int16_t x239 = -1;
	static volatile uint32_t x240 = 195444U;
	volatile int64_t t42 = -46393201987598067LL;

    t42 = ((x237+x238)/(x239-x240));

    if (t42 != -319LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x241 = 339U;
	static volatile int8_t x242 = -1;
	int64_t x243 = INT64_MAX;
	static uint8_t x244 = UINT8_MAX;

    t43 = ((x241+x242)/(x243-x244));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x245 = INT32_MIN;
	static int64_t x247 = -1LL;
	int64_t x248 = -180686257LL;
	volatile int64_t t44 = 15945783946707623LL;

    t44 = ((x245+x246)/(x247-x248));

    if (t44 != -11LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x249 = INT16_MIN;
	static volatile int32_t x251 = INT32_MAX;
	int8_t x252 = 0;
	volatile uint32_t t45 = 121814493U;

    t45 = ((x249+x250)/(x251-x252));

    if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x253 = -1LL;
	volatile int64_t x254 = -1LL;
	int32_t x255 = INT32_MIN;
	volatile int64_t t46 = -152LL;

    t46 = ((x253+x254)/(x255-x256));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x258 = 3444;
	static volatile uint64_t x259 = 4025138LLU;
	volatile int8_t x260 = INT8_MIN;
	uint64_t t47 = 7547818376326668162LLU;

    t47 = ((x257+x258)/(x259-x260));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x262 = 6;
	int64_t x263 = -1LL;
	int8_t x264 = -35;
	volatile int64_t t48 = 103LL;

    t48 = ((x261+x262)/(x263-x264));

    if (t48 != -271275648142787523LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x265 = -398001846;
	uint16_t x266 = 1856U;
	int8_t x267 = INT8_MAX;
	uint8_t x268 = 1U;

    t49 = ((x265+x266)/(x267-x268));

    if (t49 != -3158730) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x269 = UINT64_MAX;
	int32_t x272 = 86122626;
	uint64_t t50 = 593063451LLU;

    t50 = ((x269+x270)/(x271-x272));

    if (t50 != 4382852029LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x277 = 2333LLU;
	int16_t x278 = -2;
	int16_t x279 = INT16_MIN;
	static volatile int16_t x280 = INT16_MAX;

    t51 = ((x277+x278)/(x279-x280));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x281 = -1;
	volatile int64_t x283 = INT64_MAX;
	int16_t x284 = INT16_MAX;

    t52 = ((x281+x282)/(x283-x284));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x287 = -63;
	int32_t t53 = -7319804;

    t53 = ((x285+x286)/(x287-x288));

    if (t53 != -520) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x289 = 0;
	int16_t x290 = -1;
	volatile uint16_t x291 = 5363U;
	int64_t x292 = INT64_MAX;
	volatile int64_t t54 = 31LL;

    t54 = ((x289+x290)/(x291-x292));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x297 = 2LLU;
	int64_t x298 = INT64_MIN;
	static int64_t x300 = INT64_MIN;
	uint64_t t55 = 7451153LLU;

    t55 = ((x297+x298)/(x299-x300));

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x301 = UINT32_MAX;
	int64_t x302 = -1LL;
	static volatile int32_t x304 = -21;
	volatile int64_t t56 = -47LL;

    t56 = ((x301+x302)/(x303-x304));

    if (t56 != 21367996LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x305 = -8LL;
	uint8_t x306 = UINT8_MAX;
	volatile int64_t t57 = 6587LL;

    t57 = ((x305+x306)/(x307-x308));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x317 = 55;
	uint8_t x318 = 1U;
	uint64_t x319 = UINT64_MAX;
	uint64_t x320 = 368143558031LLU;

    t58 = ((x317+x318)/(x319-x320));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x321 = 1LL;
	static uint16_t x322 = UINT16_MAX;
	static int32_t x323 = -986491;
	static volatile uint16_t x324 = 229U;
	volatile int64_t t59 = 159392742643LL;

    t59 = ((x321+x322)/(x323-x324));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x325 = 4U;
	static volatile int16_t x326 = -1;
	int16_t x327 = INT16_MIN;
	static volatile int16_t x328 = -17;
	int32_t t60 = 28248303;

    t60 = ((x325+x326)/(x327-x328));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x333 = -1LL;
	int64_t x335 = INT64_MIN;
	int32_t x336 = -1546;
	int64_t t61 = 5087838LL;

    t61 = ((x333+x334)/(x335-x336));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x341 = 1546393U;
	uint8_t x342 = 0U;
	int64_t x343 = 5LL;
	int32_t x344 = INT32_MAX;
	int64_t t62 = 0LL;

    t62 = ((x341+x342)/(x343-x344));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x345 = -1;
	static int8_t x348 = INT8_MIN;
	volatile int64_t t63 = -103947156693444907LL;

    t63 = ((x345+x346)/(x347-x348));

    if (t63 != -51180LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x349 = UINT32_MAX;
	uint16_t x350 = 1U;
	volatile int64_t x351 = -492339LL;
	int16_t x352 = INT16_MIN;

    t64 = ((x349+x350)/(x351-x352));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x358 = 5699;
	uint8_t x359 = 35U;
	volatile int32_t x360 = -1;
	int32_t t65 = -1198;

    t65 = ((x357+x358)/(x359-x360));

    if (t65 != -59652165) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x362 = UINT16_MAX;
	uint64_t x363 = 15118781LLU;
	uint32_t x364 = 5U;
	volatile uint64_t t66 = 1710789424507324516LLU;

    t66 = ((x361+x362)/(x363-x364));

    if (t66 != 610060763970LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x365 = 1854813U;
	int64_t x366 = -825778865423231LL;
	int32_t x367 = INT32_MIN;
	int64_t t67 = -1LL;

    t67 = ((x365+x366)/(x367-x368));

    if (t67 != 384533LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x373 = 6918LL;
	uint8_t x375 = UINT8_MAX;
	int8_t x376 = 11;
	volatile int64_t t68 = -24238743350LL;

    t68 = ((x373+x374)/(x375-x376));

    if (t68 != 28LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x377 = 245720258986189LL;
	int16_t x379 = 213;
	int8_t x380 = -1;

    t69 = ((x377+x378)/(x379-x380));

    if (t69 != 1148225509280LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x385 = INT16_MIN;
	int32_t x386 = 1;
	uint16_t x387 = 0U;
	volatile int16_t x388 = INT16_MIN;
	static volatile int32_t t70 = 81;

    t70 = ((x385+x386)/(x387-x388));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x393 = INT16_MIN;
	static uint64_t x394 = 490110821LLU;
	uint8_t x396 = 49U;
	uint64_t t71 = 14LLU;

    t71 = ((x393+x394)/(x395-x396));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x397 = -1;
	int8_t x398 = INT8_MIN;
	int16_t x399 = -13;
	uint64_t x400 = UINT64_MAX;

    t72 = ((x397+x398)/(x399-x400));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x401 = UINT64_MAX;
	uint8_t x402 = 0U;
	static uint32_t x403 = UINT32_MAX;
	static uint64_t x404 = UINT64_MAX;

    t73 = ((x401+x402)/(x403-x404));

    if (t73 != 4294967295LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x405 = 212U;
	int16_t x406 = INT16_MIN;
	int32_t x408 = INT32_MIN;
	uint32_t t74 = 3U;

    t74 = ((x405+x406)/(x407-x408));

    if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x417 = INT32_MAX;
	static int8_t x418 = -1;
	static volatile int32_t x419 = -889331;
	int32_t t75 = 3738446;

    t75 = ((x417+x418)/(x419-x420));

    if (t75 != -2414) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x421 = 441823371694502LL;
	int32_t x422 = INT32_MAX;
	int8_t x423 = -25;
	int64_t t76 = -6611950469842422LL;

    t76 = ((x421+x422)/(x423-x424));

    if (t76 != 102870LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x425 = -65971335177LL;
	int8_t x427 = INT8_MIN;
	uint8_t x428 = 31U;
	volatile int64_t t77 = 398789LL;

    t77 = ((x425+x426)/(x427-x428));

    if (t77 != 414914058LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x429 = INT8_MIN;
	static int16_t x431 = 1;
	uint32_t x432 = 1399U;
	static volatile uint32_t t78 = 496967U;

    t78 = ((x429+x430)/(x431-x432));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x434 = -42;
	int32_t x435 = INT32_MAX;
	int64_t x436 = 3871LL;
	int64_t t79 = 104368378993909613LL;

    t79 = ((x433+x434)/(x435-x436));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x446 = INT8_MIN;
	volatile int16_t x447 = INT16_MIN;
	int64_t x448 = -39201574LL;
	volatile int64_t t80 = 66465LL;

    t80 = ((x445+x446)/(x447-x448));

    if (t80 != 109LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x449 = -1LL;
	int16_t x451 = -1;
	uint64_t x452 = 1604010074205LLU;
	volatile uint64_t t81 = 589LLU;

    t81 = ((x449+x450)/(x451-x452));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x453 = -1;
	int32_t x454 = INT32_MAX;
	int8_t x455 = -1;
	volatile int32_t t82 = 51;

    t82 = ((x453+x454)/(x455-x456));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x459 = -6263523207LL;
	int32_t x460 = INT32_MAX;
	int64_t t83 = -8041050702LL;

    t83 = ((x457+x458)/(x459-x460));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x469 = -14183860864040LL;
	int8_t x470 = INT8_MIN;
	uint64_t x471 = 478974871591878784LLU;
	int16_t x472 = 0;
	volatile uint64_t t84 = 1027549272644LLU;

    t84 = ((x469+x470)/(x471-x472));

    if (t84 != 38LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x477 = 1876362U;
	uint64_t x478 = 1401459220876LLU;
	volatile uint32_t x480 = 10894U;
	volatile uint64_t t85 = 1063169220051685LLU;

    t85 = ((x477+x478)/(x479-x480));

    if (t85 != 326LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x481 = UINT32_MAX;
	uint32_t x482 = 23U;
	uint8_t x483 = 1U;
	int8_t x484 = -1;
	volatile uint32_t t86 = 4780243U;

    t86 = ((x481+x482)/(x483-x484));

    if (t86 != 11U) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x485 = UINT32_MAX;
	uint32_t x486 = 4175387U;
	volatile int64_t x487 = 593186LL;
	volatile uint64_t x488 = 4LLU;
	uint64_t t87 = 91967958LLU;

    t87 = ((x485+x486)/(x487-x488));

    if (t87 != 7LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x490 = UINT32_MAX;
	uint16_t x491 = 15U;
	static uint8_t x492 = UINT8_MAX;

    t88 = ((x489+x490)/(x491-x492));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x493 = INT16_MIN;
	static int8_t x494 = 0;
	uint32_t x495 = 2481710U;
	int16_t x496 = -1;
	volatile uint32_t t89 = 0U;

    t89 = ((x493+x494)/(x495-x496));

    if (t89 != 1730U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x501 = 1;
	uint16_t x503 = UINT16_MAX;
	volatile int8_t x504 = -5;
	volatile uint64_t t90 = 200805698270LLU;

    t90 = ((x501+x502)/(x503-x504));

    if (t90 != 388LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x505 = 25956LL;
	volatile int16_t x506 = 518;
	int16_t x507 = INT16_MIN;
	int8_t x508 = -2;
	int64_t t91 = -2814919257LL;

    t91 = ((x505+x506)/(x507-x508));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x509 = 352035U;
	volatile int16_t x510 = INT16_MIN;
	uint64_t x511 = 5LLU;
	int32_t x512 = -12;

    t92 = ((x509+x510)/(x511-x512));

    if (t92 != 18780LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x521 = -3;
	int16_t x523 = 14;
	volatile uint64_t x524 = UINT64_MAX;

    t93 = ((x521+x522)/(x523-x524));

    if (t93 != 17207774LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x525 = 31U;
	int32_t x527 = INT32_MIN;
	static volatile uint32_t x528 = 54724405U;
	uint32_t t94 = 2019098408U;

    t94 = ((x525+x526)/(x527-x528));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x529 = 52LLU;
	uint16_t x530 = 28244U;
	volatile uint16_t x531 = 1570U;
	volatile uint64_t t95 = 30341314LLU;

    t95 = ((x529+x530)/(x531-x532));

    if (t95 != 18LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x533 = -1;
	uint16_t x534 = 2U;
	int8_t x536 = INT8_MIN;
	static volatile uint32_t t96 = 716U;

    t96 = ((x533+x534)/(x535-x536));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x537 = UINT16_MAX;
	volatile int16_t x538 = INT16_MIN;
	int16_t x539 = INT16_MAX;
	static volatile int32_t t97 = 2975;

    t97 = ((x537+x538)/(x539-x540));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x541 = UINT16_MAX;
	static volatile int32_t x542 = -1;
	uint64_t x543 = 12398851704722195LLU;
	static int8_t x544 = INT8_MAX;
	uint64_t t98 = 54412264LLU;

    t98 = ((x541+x542)/(x543-x544));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x553 = INT64_MIN;
	uint64_t x554 = 19785LLU;
	uint32_t x555 = 923928761U;
	static int64_t x556 = INT64_MAX;
	volatile uint64_t t99 = 4701183685593LLU;

    t99 = ((x553+x554)/(x555-x556));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x557 = 54566410;
	static volatile uint32_t x558 = 393843696U;
	static int32_t x559 = INT32_MIN;
	static volatile int8_t x560 = INT8_MIN;
	uint32_t t100 = 939437708U;

    t100 = ((x557+x558)/(x559-x560));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x562 = UINT8_MAX;
	static int64_t x564 = -6563264214935306LL;

    t101 = ((x561+x562)/(x563-x564));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x565 = -4;
	static volatile int64_t x566 = -7LL;
	volatile int64_t x567 = INT64_MAX;
	uint8_t x568 = 79U;
	volatile int64_t t102 = 3806739747054703LL;

    t102 = ((x565+x566)/(x567-x568));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x569 = UINT8_MAX;
	uint64_t x570 = UINT64_MAX;
	uint16_t x571 = UINT16_MAX;
	volatile uint64_t x572 = UINT64_MAX;
	volatile uint64_t t103 = 21500458019401877LLU;

    t103 = ((x569+x570)/(x571-x572));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x573 = 5U;
	uint32_t x574 = UINT32_MAX;
	int8_t x575 = -15;
	uint8_t x576 = 108U;
	uint32_t t104 = 3553018U;

    t104 = ((x573+x574)/(x575-x576));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x577 = 122U;
	int8_t x579 = -1;
	uint64_t x580 = 25442404038603159LLU;
	volatile uint64_t t105 = 56830716LLU;

    t105 = ((x577+x578)/(x579-x580));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x581 = UINT8_MAX;
	static uint64_t x582 = UINT64_MAX;
	uint8_t x583 = UINT8_MAX;
	int64_t x584 = -1LL;
	static uint64_t t106 = 68689LLU;

    t106 = ((x581+x582)/(x583-x584));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x589 = UINT64_MAX;
	int64_t x590 = INT64_MIN;
	int32_t x591 = -14;
	int8_t x592 = 14;
	volatile uint64_t t107 = 7865425LLU;

    t107 = ((x589+x590)/(x591-x592));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x599 = INT16_MIN;
	int64_t x600 = 821LL;
	volatile uint64_t t108 = 250236607866LLU;

    t108 = ((x597+x598)/(x599-x600));

    if (t108 != 1LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x601 = 0U;
	int8_t x602 = -3;
	int16_t x603 = -148;
	uint64_t x604 = UINT64_MAX;
	uint64_t t109 = 5953LLU;

    t109 = ((x601+x602)/(x603-x604));

    if (t109 != 1LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x605 = 1;
	volatile int8_t x606 = INT8_MIN;
	int32_t t110 = -361876811;

    t110 = ((x605+x606)/(x607-x608));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x609 = 137531697998865LL;
	uint32_t x611 = UINT32_MAX;
	uint64_t x612 = 10691359135272LLU;
	volatile uint64_t t111 = 3702392525843664859LLU;

    t111 = ((x609+x610)/(x611-x612));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x613 = -50;
	uint64_t x614 = 133226686298435872LLU;
	uint8_t x615 = 0U;
	int64_t x616 = INT64_MAX;

    t112 = ((x613+x614)/(x615-x616));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x617 = INT16_MIN;
	int32_t x619 = INT32_MIN;
	static int32_t t113 = -3414732;

    t113 = ((x617+x618)/(x619-x620));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x621 = 0U;
	static int32_t x622 = INT32_MIN;
	uint32_t x623 = 128U;
	int8_t x624 = INT8_MAX;
	uint32_t t114 = 2851940U;

    t114 = ((x621+x622)/(x623-x624));

    if (t114 != 2147483648U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x625 = UINT32_MAX;
	static volatile int64_t x626 = 257154173LL;
	volatile int64_t x627 = INT64_MIN;
	uint64_t x628 = 707458870LLU;
	uint64_t t115 = 2450140LLU;

    t115 = ((x625+x626)/(x627-x628));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x629 = INT32_MAX;
	int64_t x630 = 11951830LL;
	int64_t x631 = -16251LL;
	uint32_t x632 = UINT32_MAX;
	int64_t t116 = -16557847597853LL;

    t116 = ((x629+x630)/(x631-x632));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x634 = 190031125U;
	uint8_t x635 = 43U;
	int64_t t117 = -1050791538LL;

    t117 = ((x633+x634)/(x635-x636));

    if (t117 != 3800622LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x637 = -15;
	int8_t x638 = INT8_MIN;
	volatile int64_t x639 = -1LL;
	uint64_t x640 = 111484LLU;
	uint64_t t118 = 1702833304LLU;

    t118 = ((x637+x638)/(x639-x640));

    if (t118 != 1LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x645 = 30U;
	int64_t x646 = INT64_MIN;
	int8_t x648 = INT8_MIN;

    t119 = ((x645+x646)/(x647-x648));

    if (t119 != 282578800148737LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x654 = INT32_MAX;
	volatile int16_t x656 = -1;
	volatile int64_t t120 = -20209568422LL;

    t120 = ((x653+x654)/(x655-x656));

    if (t120 != 2473LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x661 = 3334563;
	uint8_t x663 = 30U;
	int64_t x664 = -1LL;
	int64_t t121 = -26685030322151LL;

    t121 = ((x661+x662)/(x663-x664));

    if (t121 != 106509LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x673 = 208217327542025LLU;
	int32_t x674 = -1;
	uint8_t x675 = 1U;
	int8_t x676 = INT8_MIN;
	volatile uint64_t t122 = 465026567LLU;

    t122 = ((x673+x674)/(x675-x676));

    if (t122 != 1614087810403LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x677 = INT8_MIN;
	static volatile int16_t x678 = -1;
	int32_t x679 = INT32_MIN;
	int32_t x680 = -1;
	volatile int32_t t123 = -239740;

    t123 = ((x677+x678)/(x679-x680));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x681 = INT16_MAX;
	uint32_t x682 = UINT32_MAX;
	volatile int8_t x683 = INT8_MIN;
	int64_t x684 = -1LL;
	volatile int64_t t124 = -7382976LL;

    t124 = ((x681+x682)/(x683-x684));

    if (t124 != -258LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x689 = -745230930;
	volatile int8_t x690 = INT8_MIN;
	int64_t x692 = INT64_MIN;
	volatile uint64_t t125 = 0LLU;

    t125 = ((x689+x690)/(x691-x692));

    if (t125 != 1LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x693 = 112838291LLU;
	int8_t x694 = INT8_MIN;
	static int32_t x695 = INT32_MIN;
	volatile uint64_t t126 = 9338906321873LLU;

    t126 = ((x693+x694)/(x695-x696));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x697 = INT8_MIN;
	int16_t x698 = INT16_MIN;
	uint16_t x699 = 1043U;
	int32_t x700 = -1;
	static int32_t t127 = -507563026;

    t127 = ((x697+x698)/(x699-x700));

    if (t127 != -31) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x701 = INT8_MAX;
	uint16_t x702 = 3U;
	int32_t x703 = -1;
	volatile uint16_t x704 = 19U;
	volatile int32_t t128 = -309614;

    t128 = ((x701+x702)/(x703-x704));

    if (t128 != -6) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x706 = 6087U;
	volatile int64_t x708 = INT64_MAX;
	static volatile int64_t t129 = 49248314545393393LL;

    t129 = ((x705+x706)/(x707-x708));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x709 = INT64_MAX;
	static int8_t x710 = -1;
	volatile int8_t x712 = INT8_MIN;
	volatile int64_t t130 = -1LL;

    t130 = ((x709+x710)/(x711-x712));

    if (t130 != 54576165898548969LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x718 = UINT32_MAX;
	int64_t x719 = -1LL;
	static volatile int64_t t131 = 109466212429488LL;

    t131 = ((x717+x718)/(x719-x720));

    if (t131 != 33818382LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x722 = UINT32_MAX;
	static uint32_t x723 = UINT32_MAX;
	uint32_t t132 = 143850131U;

    t132 = ((x721+x722)/(x723-x724));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x734 = INT8_MAX;
	static int16_t x735 = INT16_MIN;
	int8_t x736 = INT8_MIN;
	int64_t t133 = -4153192168LL;

    t133 = ((x733+x734)/(x735-x736));

    if (t133 != 282578800148737LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint16_t x746 = 140U;
	uint64_t x747 = 10454175909673636LLU;
	volatile int16_t x748 = INT16_MIN;

    t134 = ((x745+x746)/(x747-x748));

    if (t134 != 1764LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x750 = 26U;
	static volatile int8_t x751 = 1;
	int8_t x752 = -1;
	volatile int64_t t135 = 18718644742LL;

    t135 = ((x749+x750)/(x751-x752));

    if (t135 != 12LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x753 = -1LL;
	int16_t x754 = INT16_MAX;
	int64_t x755 = -1LL;
	uint8_t x756 = 40U;
	volatile int64_t t136 = 7LL;

    t136 = ((x753+x754)/(x755-x756));

    if (t136 != -799LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x757 = UINT32_MAX;
	int32_t x758 = 242;
	uint32_t x760 = 2461396U;
	volatile uint32_t t137 = 14218720U;

    t137 = ((x757+x758)/(x759-x760));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x765 = INT64_MIN;
	int32_t x767 = INT32_MIN;
	int8_t x768 = -55;

    t138 = ((x765+x766)/(x767-x768));

    if (t138 != 4294967405LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x769 = -2609;
	static int8_t x770 = INT8_MIN;
	int16_t x771 = INT16_MAX;
	volatile int32_t t139 = 14263;

    t139 = ((x769+x770)/(x771-x772));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x785 = 0U;
	static int8_t x786 = -1;
	volatile int32_t x787 = 399685549;
	volatile int32_t x788 = INT32_MAX;
	volatile int32_t t140 = -963;

    t140 = ((x785+x786)/(x787-x788));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x790 = 0LLU;
	static int16_t x791 = INT16_MAX;
	static volatile int16_t x792 = 0;
	uint64_t t141 = 5635237961LLU;

    t141 = ((x789+x790)/(x791-x792));

    if (t141 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x793 = -1LL;
	static uint8_t x795 = 27U;
	int16_t x796 = INT16_MAX;
	volatile int64_t t142 = 316726LL;

    t142 = ((x793+x794)/(x795-x796));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x797 = INT16_MIN;
	static int32_t x798 = -1;
	int8_t x799 = INT8_MAX;
	int32_t x800 = 659;

    t143 = ((x797+x798)/(x799-x800));

    if (t143 != 61) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x805 = -10;
	uint64_t x806 = 914LLU;
	uint32_t x807 = 326U;
	volatile int16_t x808 = INT16_MIN;
	volatile uint64_t t144 = 406359404790LLU;

    t144 = ((x805+x806)/(x807-x808));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x812 = -1;
	volatile int64_t t145 = 1LL;

    t145 = ((x809+x810)/(x811-x812));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x813 = -5;
	int8_t x814 = 0;
	static volatile int32_t x815 = -244800;
	int64_t x816 = 712706LL;
	int64_t t146 = -9105936595045LL;

    t146 = ((x813+x814)/(x815-x816));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x817 = INT16_MIN;
	int32_t x818 = 928;
	uint32_t x819 = UINT32_MAX;
	uint16_t x820 = UINT16_MAX;
	uint32_t t147 = 67842U;

    t147 = ((x817+x818)/(x819-x820));

    if (t147 != 1U) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x821 = 1;
	int8_t x822 = -1;
	int16_t x823 = INT16_MIN;
	uint8_t x824 = 0U;
	static int32_t t148 = -12857648;

    t148 = ((x821+x822)/(x823-x824));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x838 = INT16_MIN;
	int64_t x839 = -229806025459016251LL;
	uint32_t x840 = 4415U;
	int64_t t149 = -24968485LL;

    t149 = ((x837+x838)/(x839-x840));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint32_t x842 = UINT32_MAX;
	volatile int16_t x843 = INT16_MIN;
	int32_t x844 = -35918;
	uint32_t t150 = 23U;

    t150 = ((x841+x842)/(x843-x844));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x853 = 12U;
	int16_t x855 = 1716;
	int32_t x856 = 4;
	volatile uint32_t t151 = 144587U;

    t151 = ((x853+x854)/(x855-x856));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x857 = 2U;
	int8_t x858 = 53;
	static int8_t x859 = INT8_MIN;
	uint32_t t152 = 4U;

    t152 = ((x857+x858)/(x859-x860));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x865 = 100U;
	uint32_t x866 = 214U;
	int16_t x868 = INT16_MAX;
	volatile uint32_t t153 = 5U;

    t153 = ((x865+x866)/(x867-x868));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x869 = -7;
	volatile int16_t x870 = -1;
	static volatile int64_t t154 = 51580253LL;

    t154 = ((x869+x870)/(x871-x872));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x873 = -522LL;
	uint32_t x874 = 392683221U;
	uint16_t x875 = 60U;
	volatile int64_t t155 = 2301653722195518043LL;

    t155 = ((x873+x874)/(x875-x876));

    if (t155 != -230042LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x878 = UINT64_MAX;
	int8_t x879 = -39;
	int8_t x880 = -24;
	uint64_t t156 = 52873673LLU;

    t156 = ((x877+x878)/(x879-x880));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x881 = 13007683;
	int16_t x882 = -1;
	uint8_t x884 = UINT8_MAX;
	int32_t t157 = -357;

    t157 = ((x881+x882)/(x883-x884));

    if (t157 != -92912) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x885 = -1;
	int8_t x886 = INT8_MIN;
	uint8_t x887 = 42U;
	static int16_t x888 = 621;
	int32_t t158 = -53;

    t158 = ((x885+x886)/(x887-x888));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x897 = INT8_MIN;
	static int32_t x898 = -1;
	int64_t x899 = INT64_MIN;
	int32_t x900 = 0;

    t159 = ((x897+x898)/(x899-x900));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x901 = 1;
	uint16_t x902 = 299U;
	int32_t x903 = INT32_MIN;
	volatile int16_t x904 = -2251;
	volatile int32_t t160 = 1591354;

    t160 = ((x901+x902)/(x903-x904));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x905 = INT16_MIN;
	static uint32_t x906 = UINT32_MAX;
	uint64_t x907 = 167519516062057LLU;
	volatile int16_t x908 = INT16_MAX;
	volatile uint64_t t161 = 38020302LLU;

    t161 = ((x905+x906)/(x907-x908));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x909 = INT8_MIN;
	volatile int8_t x910 = INT8_MIN;
	uint32_t x911 = UINT32_MAX;
	int64_t x912 = 803081521099LL;
	static int64_t t162 = -817621LL;

    t162 = ((x909+x910)/(x911-x912));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x913 = 34U;
	int32_t x914 = INT32_MIN;
	uint32_t x916 = 62266U;

    t163 = ((x913+x914)/(x915-x916));

    if (t163 != 1U) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x921 = INT16_MIN;
	int16_t x922 = 233;
	static int64_t x924 = INT64_MIN;
	int64_t t164 = -6866356162955144LL;

    t164 = ((x921+x922)/(x923-x924));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x925 = 149LLU;
	volatile int16_t x926 = 1970;
	int16_t x927 = INT16_MIN;
	static int8_t x928 = -20;
	volatile uint64_t t165 = 28311546194LLU;

    t165 = ((x925+x926)/(x927-x928));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x933 = 1779U;
	int8_t x935 = INT8_MIN;
	int64_t x936 = -1LL;
	volatile int64_t t166 = 2462676906876023480LL;

    t166 = ((x933+x934)/(x935-x936));

    if (t166 != 244LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x937 = -1;
	static int16_t x938 = INT16_MAX;
	uint8_t x940 = 14U;
	int32_t t167 = -79754;

    t167 = ((x937+x938)/(x939-x940));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x942 = INT8_MAX;
	uint16_t x943 = UINT16_MAX;
	int32_t x944 = -1;
	int32_t t168 = 17;

    t168 = ((x941+x942)/(x943-x944));

    if (t168 != -32767) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x953 = INT64_MIN;
	volatile uint32_t x954 = UINT32_MAX;
	int8_t x955 = INT8_MIN;
	int16_t x956 = -146;
	int64_t t169 = -2780629LL;

    t169 = ((x953+x954)/(x955-x956));

    if (t169 != -512409557364433806LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x961 = INT8_MAX;
	int64_t x962 = -1LL;
	volatile int32_t x963 = INT32_MIN;

    t170 = ((x961+x962)/(x963-x964));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x965 = INT64_MIN;
	int16_t x966 = INT16_MAX;
	int8_t x967 = -1;

    t171 = ((x965+x966)/(x967-x968));

    if (t171 != -2147483657LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x969 = 598U;
	static uint16_t x970 = 19820U;
	int16_t x971 = INT16_MAX;
	volatile uint32_t x972 = 2U;
	uint32_t t172 = 98029966U;

    t172 = ((x969+x970)/(x971-x972));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x973 = INT8_MIN;
	int8_t x974 = -27;
	uint8_t x975 = 2U;
	int64_t x976 = -1LL;
	int64_t t173 = 6LL;

    t173 = ((x973+x974)/(x975-x976));

    if (t173 != -51LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x977 = INT64_MAX;
	int16_t x978 = -33;
	int8_t x979 = INT8_MIN;
	int64_t x980 = INT64_MIN;
	volatile int64_t t174 = -12718948009008LL;

    t174 = ((x977+x978)/(x979-x980));

    if (t174 != 1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x985 = INT32_MIN;
	int32_t x987 = -929524;
	static uint8_t x988 = 1U;
	static volatile int32_t t175 = 7;

    t175 = ((x985+x986)/(x987-x988));

    if (t175 != 2310) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x989 = UINT16_MAX;
	int64_t x990 = 1040313LL;
	uint64_t x991 = 77390239895LLU;

    t176 = ((x989+x990)/(x991-x992));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x993 = INT32_MIN;
	uint64_t x994 = 44423950LLU;
	static int32_t x995 = 941694;
	int64_t x996 = -1LL;
	volatile uint64_t t177 = 298768391020847969LLU;

    t177 = ((x993+x994)/(x995-x996));

    if (t177 != 19588873331181LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x1001 = 67066923238049781LL;
	volatile int64_t x1003 = INT64_MIN;
	volatile int64_t t178 = -28430968367309LL;

    t178 = ((x1001+x1002)/(x1003-x1004));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x1005 = 10357LLU;
	int64_t x1006 = -4440LL;
	uint8_t x1007 = 33U;
	uint64_t x1008 = 782LLU;
	static uint64_t t179 = 62161093504806LLU;

    t179 = ((x1005+x1006)/(x1007-x1008));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x1009 = 1047223U;
	uint16_t x1010 = 1U;
	uint16_t x1011 = 885U;
	int8_t x1012 = INT8_MIN;
	volatile uint32_t t180 = 3385592U;

    t180 = ((x1009+x1010)/(x1011-x1012));

    if (t180 != 1033U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1013 = 6;
	static int64_t x1015 = INT64_MIN;
	volatile int64_t x1016 = -1389LL;
	int64_t t181 = 3895431357914404032LL;

    t181 = ((x1013+x1014)/(x1015-x1016));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1018 = -6LL;
	uint32_t x1019 = 14321542U;
	uint32_t x1020 = 944429U;

    t182 = ((x1017+x1018)/(x1019-x1020));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1021 = INT64_MIN;
	volatile uint16_t x1023 = UINT16_MAX;
	volatile int64_t x1024 = INT64_MAX;
	int64_t t183 = -8066LL;

    t183 = ((x1021+x1022)/(x1023-x1024));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x1025 = -15;
	int16_t x1026 = -1;
	uint32_t x1027 = 851377079U;
	uint32_t x1028 = UINT32_MAX;
	volatile uint32_t t184 = 3260960U;

    t184 = ((x1025+x1026)/(x1027-x1028));

    if (t184 != 5U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1034 = UINT32_MAX;
	int64_t x1035 = -331432368LL;
	static volatile int8_t x1036 = INT8_MIN;
	static int64_t t185 = 212365902964LL;

    t185 = ((x1033+x1034)/(x1035-x1036));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1037 = 19;
	static int64_t x1038 = INT64_MIN;
	volatile int64_t x1039 = INT64_MIN;
	int16_t x1040 = -58;
	static int64_t t186 = 2724807688510289579LL;

    t186 = ((x1037+x1038)/(x1039-x1040));

    if (t186 != 1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x1042 = -1LL;
	static int64_t x1043 = -1LL;
	uint64_t x1044 = 162720970LLU;

    t187 = ((x1041+x1042)/(x1043-x1044));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x1046 = -14;
	int8_t x1048 = INT8_MIN;
	int32_t t188 = -9051823;

    t188 = ((x1045+x1046)/(x1047-x1048));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1049 = 11375;
	int16_t x1050 = -1;
	volatile uint32_t x1052 = UINT32_MAX;
	volatile uint32_t t189 = 176875773U;

    t189 = ((x1049+x1050)/(x1051-x1052));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x1061 = 1110126273645467216LL;
	int64_t x1063 = INT64_MIN;
	int32_t x1064 = -1;
	int64_t t190 = 14182939248LL;

    t190 = ((x1061+x1062)/(x1063-x1064));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1065 = INT32_MIN;
	static int64_t x1066 = INT64_MAX;
	int32_t x1067 = -1;
	volatile int64_t t191 = -103001217LL;

    t191 = ((x1065+x1066)/(x1067-x1068));

    if (t191 != 209622091697893003LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x1069 = 56952U;
	int16_t x1070 = -773;
	uint32_t x1071 = 65U;
	uint32_t t192 = 777U;

    t192 = ((x1069+x1070)/(x1071-x1072));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int16_t x1074 = INT16_MIN;
	uint8_t x1075 = 22U;
	int16_t x1076 = -989;
	uint64_t t193 = 25LLU;

    t193 = ((x1073+x1074)/(x1075-x1076));

    if (t193 != 18246037659455508LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1077 = -1;
	uint64_t x1078 = 1LLU;
	static volatile int64_t x1079 = -1052023LL;
	int8_t x1080 = INT8_MIN;
	volatile uint64_t t194 = 1LLU;

    t194 = ((x1077+x1078)/(x1079-x1080));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1085 = 4133654382486592597LLU;
	int8_t x1086 = -1;
	uint64_t x1087 = 2LLU;
	volatile int32_t x1088 = -1;
	static volatile uint64_t t195 = 439487314265LLU;

    t195 = ((x1085+x1086)/(x1087-x1088));

    if (t195 != 1377884794162197532LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x1090 = 20LL;
	int16_t x1091 = INT16_MAX;
	volatile uint64_t x1092 = UINT64_MAX;
	volatile uint64_t t196 = 7824610279814756745LLU;

    t196 = ((x1089+x1090)/(x1091-x1092));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1094 = INT64_MIN;
	volatile int8_t x1096 = -2;
	static int64_t t197 = -30296644320723892LL;

    t197 = ((x1093+x1094)/(x1095-x1096));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1097 = INT8_MAX;
	static int16_t x1099 = -3254;
	uint64_t x1100 = 29926LLU;
	uint64_t t198 = 966202295487883LLU;

    t198 = ((x1097+x1098)/(x1099-x1100));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1102 = INT32_MIN;
	static int64_t x1103 = -1LL;
	volatile int64_t x1104 = INT64_MAX;
	volatile int64_t t199 = -276527813508865LL;

    t199 = ((x1101+x1102)/(x1103-x1104));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

