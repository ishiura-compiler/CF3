
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

static int32_t x8 = 348;
int64_t x19 = INT64_MIN;
volatile int64_t x32 = -1LL;
volatile uint16_t x48 = 986U;
int32_t t5 = 16481112;
volatile uint16_t x49 = UINT16_MAX;
int32_t x53 = INT32_MAX;
static int16_t x54 = -1;
static int16_t x56 = -1;
static int16_t x65 = 1;
int32_t t10 = 3;
volatile int32_t t11 = -2892;
uint32_t x89 = 0U;
int64_t x99 = 4204851090LL;
uint16_t x100 = 40U;
volatile int64_t x104 = 262326010970160LL;
volatile uint64_t x107 = 29747957147LLU;
int32_t x112 = -1;
static uint32_t x116 = 71331U;
static volatile int32_t t17 = 230615;
int32_t x118 = -1;
volatile int64_t x120 = 4061855175LL;
uint8_t x122 = UINT8_MAX;
uint16_t x134 = 0U;
int64_t x138 = INT64_MIN;
int16_t x154 = -1;
static int8_t x155 = INT8_MAX;
volatile uint8_t x158 = 39U;
int32_t t23 = -3;
volatile int32_t x164 = -1;
volatile int8_t x178 = INT8_MIN;
volatile int8_t x191 = INT8_MAX;
int16_t x202 = 0;
int64_t x217 = INT64_MAX;
uint64_t x219 = 225947810595LLU;
volatile int32_t x223 = -1;
int64_t x231 = INT64_MIN;
int16_t x245 = INT16_MAX;
int16_t x247 = -1;
int64_t x250 = INT64_MAX;
int8_t x253 = 1;
int8_t x259 = INT8_MIN;
int32_t t39 = -6652297;
int8_t x281 = INT8_MAX;
static uint8_t x284 = UINT8_MAX;
static int32_t x298 = INT32_MIN;
int64_t x300 = INT64_MIN;
volatile int32_t t44 = -8;
int16_t x304 = INT16_MIN;
int32_t x308 = INT32_MIN;
uint8_t x313 = 6U;
static volatile int32_t x314 = INT32_MAX;
static int16_t x318 = INT16_MIN;
int32_t x322 = 5;
volatile uint64_t x363 = 262632LLU;
volatile int32_t t52 = -1;
static int8_t x371 = 1;
int8_t x372 = INT8_MIN;
int32_t t53 = -10;
int8_t x381 = 31;
uint8_t x383 = UINT8_MAX;
uint16_t x385 = 3851U;
static int16_t x392 = -1;
static int32_t t56 = -112019873;
volatile int32_t t59 = -3576;
volatile uint32_t x409 = 20U;
int64_t x411 = INT64_MAX;
volatile int64_t x412 = INT64_MAX;
volatile int64_t x416 = INT64_MAX;
static int16_t x425 = INT16_MAX;
static int32_t t63 = -10787;
volatile int32_t t66 = -1489;
int64_t x487 = 234832518043618654LL;
volatile int32_t x490 = 102602;
volatile int64_t x491 = -5562197848657LL;
volatile int64_t x492 = -178LL;
volatile int32_t t74 = 2;
uint32_t x505 = 1307466U;
int16_t x537 = INT16_MAX;
volatile int64_t x540 = -1LL;
static int32_t t78 = -4;
static uint8_t x551 = UINT8_MAX;
int8_t x566 = -1;
uint16_t x569 = 12621U;
int16_t x571 = -1;
static uint8_t x583 = 0U;
volatile int64_t x589 = 24720316080859LL;
volatile int32_t t85 = 13;
int32_t x607 = -2363789;
volatile int32_t t86 = 268468;
volatile int32_t t87 = -4;
uint8_t x620 = UINT8_MAX;
uint32_t x642 = UINT32_MAX;
volatile int32_t t90 = -80168;
int16_t x646 = INT16_MIN;
uint16_t x651 = 0U;
int8_t x668 = -1;
int32_t x692 = INT32_MAX;
volatile uint32_t x693 = UINT32_MAX;
volatile uint32_t x706 = UINT32_MAX;
volatile int16_t x709 = INT16_MAX;
static int64_t x732 = INT64_MIN;
static uint16_t x733 = 300U;
int32_t x734 = INT32_MIN;
uint32_t x745 = 546911U;
volatile int32_t t104 = 1;
uint32_t x754 = 3U;
uint32_t x765 = UINT32_MAX;
int32_t x766 = 3;
int32_t x767 = INT32_MIN;
static int64_t x769 = 109994708401LL;
int16_t x775 = INT16_MIN;
volatile int32_t t108 = -518095;
volatile int64_t x789 = INT64_MAX;
uint8_t x791 = UINT8_MAX;
static int64_t x802 = INT64_MIN;
uint16_t x805 = UINT16_MAX;
int32_t x806 = 315;
int8_t x809 = 6;
volatile int64_t x810 = 87076016LL;
int64_t x823 = INT64_MAX;
uint16_t x824 = UINT16_MAX;
int32_t t114 = -1036043793;
int64_t x864 = 7LL;
uint16_t x873 = 992U;
static int8_t x879 = INT8_MIN;
int32_t x880 = INT32_MIN;
int32_t x884 = -1;
uint64_t x889 = 1602405620030325LLU;
int8_t x892 = INT8_MAX;
volatile int8_t x894 = INT8_MIN;
int32_t t124 = -5473942;
int16_t x898 = INT16_MIN;
uint16_t x901 = 6412U;
int16_t x902 = INT16_MAX;
int64_t x906 = INT64_MIN;
volatile int32_t t127 = -92;
uint64_t x919 = 110289512835700586LLU;
uint32_t x933 = 84U;
int64_t x934 = -1LL;
volatile int64_t x939 = -4405LL;
uint64_t x947 = 1405097347694LLU;
static int16_t x960 = 2;
uint64_t x969 = 25LLU;
int32_t x972 = -1;
static volatile int64_t x994 = INT64_MAX;
volatile uint64_t x996 = 702487560997LLU;
int64_t x1001 = INT64_MAX;
static int32_t t141 = -224444398;
volatile int64_t x1010 = INT64_MAX;
static int32_t x1016 = INT32_MAX;
int32_t x1022 = -1;
static int8_t x1023 = INT8_MIN;
static int32_t x1025 = INT32_MAX;
int8_t x1028 = INT8_MAX;
int32_t x1038 = INT32_MIN;
uint8_t x1047 = 63U;
static int16_t x1049 = INT16_MAX;
static uint8_t x1053 = 34U;
static int64_t x1063 = -4577449626602559162LL;
volatile int32_t t150 = 558378408;
volatile int64_t x1066 = 166LL;
int16_t x1068 = INT16_MIN;
int32_t t151 = -89936;
uint64_t x1075 = UINT64_MAX;
static uint64_t x1081 = UINT64_MAX;
volatile int32_t t155 = 345;
int32_t x1087 = INT32_MIN;
static int32_t t156 = -2953;
static uint32_t x1091 = 1634197U;
int32_t x1095 = 9231;
uint64_t x1099 = UINT64_MAX;
uint8_t x1113 = 0U;
static int16_t x1131 = INT16_MIN;
int32_t x1133 = INT32_MAX;
volatile uint32_t x1145 = 240982U;
uint32_t x1165 = 132490210U;
uint32_t x1167 = UINT32_MAX;
static uint16_t x1174 = 1387U;
int64_t x1181 = 2201993564468239LL;
uint32_t x1183 = 313U;
uint16_t x1199 = UINT16_MAX;
volatile int32_t t174 = 289828;
static volatile uint16_t x1202 = 1U;
static int32_t t177 = -62;
int8_t x1239 = INT8_MIN;
int32_t x1243 = -1;
static uint16_t x1251 = 2719U;
int8_t x1258 = INT8_MIN;
volatile int16_t x1262 = 0;
volatile int32_t t184 = 8381990;
int64_t x1269 = INT64_MAX;
volatile int16_t x1283 = INT16_MIN;
int8_t x1289 = 54;
int32_t x1290 = -1;
int8_t x1291 = INT8_MAX;
int8_t x1304 = INT8_MIN;
int32_t x1319 = INT32_MIN;
int32_t x1324 = 1663911;
volatile int16_t x1331 = -1;
volatile int32_t t193 = 337451253;
uint16_t x1341 = 1U;
int64_t x1342 = INT64_MIN;
static volatile int32_t t198 = 2;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	uint8_t x2 = UINT8_MAX;
	int64_t x3 = 7996128138296LL;
	uint8_t x4 = 1U;
	volatile int32_t t0 = 27;

    t0 = ((x1>>(x2!=x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x5 = 3;
	int64_t x6 = INT64_MIN;
	uint32_t x7 = UINT32_MAX;
	volatile int32_t t1 = -70;

    t1 = ((x5>>(x6!=x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = INT8_MAX;
	int32_t x18 = -1;
	uint16_t x20 = 973U;
	volatile int32_t t2 = -46049;

    t2 = ((x17>>(x18!=x19))>x20);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x25 = 3;
	int64_t x26 = INT64_MIN;
	int64_t x27 = -1135757903296768LL;
	int32_t x28 = -985301;
	volatile int32_t t3 = 457505;

    t3 = ((x25>>(x26!=x27))>x28);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x29 = INT64_MAX;
	int16_t x30 = 15;
	int32_t x31 = INT32_MAX;
	int32_t t4 = 3719705;

    t4 = ((x29>>(x30!=x31))>x32);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x45 = 2790550U;
	int16_t x46 = -1;
	static int64_t x47 = INT64_MIN;

    t5 = ((x45>>(x46!=x47))>x48);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x50 = 4LLU;
	static volatile int64_t x51 = INT64_MIN;
	static volatile uint16_t x52 = 424U;
	volatile int32_t t6 = 228;

    t6 = ((x49>>(x50!=x51))>x52);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x55 = UINT32_MAX;
	volatile int32_t t7 = 724628590;

    t7 = ((x53>>(x54!=x55))>x56);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x57 = 437;
	int32_t x58 = INT32_MIN;
	static int32_t x59 = INT32_MAX;
	volatile int32_t x60 = INT32_MAX;
	volatile int32_t t8 = 65424;

    t8 = ((x57>>(x58!=x59))>x60);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x61 = 924U;
	int32_t x62 = INT32_MAX;
	int64_t x63 = INT64_MIN;
	volatile int64_t x64 = INT64_MIN;
	volatile int32_t t9 = -3;

    t9 = ((x61>>(x62!=x63))>x64);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x66 = INT32_MIN;
	uint32_t x67 = UINT32_MAX;
	uint64_t x68 = UINT64_MAX;

    t10 = ((x65>>(x66!=x67))>x68);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x81 = 193054;
	volatile uint16_t x82 = UINT16_MAX;
	int16_t x83 = -1597;
	int8_t x84 = INT8_MIN;

    t11 = ((x81>>(x82!=x83))>x84);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x90 = 2U;
	uint32_t x91 = 297U;
	int32_t x92 = -3288792;
	volatile int32_t t12 = 777428116;

    t12 = ((x89>>(x90!=x91))>x92);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x97 = 5;
	int32_t x98 = -7769;
	volatile int32_t t13 = 59446;

    t13 = ((x97>>(x98!=x99))>x100);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x101 = UINT8_MAX;
	int64_t x102 = -2182324413872862LL;
	static uint16_t x103 = UINT16_MAX;
	int32_t t14 = -3;

    t14 = ((x101>>(x102!=x103))>x104);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x105 = 2LLU;
	int64_t x106 = 220955751LL;
	uint64_t x108 = 811897002604065LLU;
	static volatile int32_t t15 = 4094966;

    t15 = ((x105>>(x106!=x107))>x108);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x109 = 1865952517404544626LLU;
	uint64_t x110 = UINT64_MAX;
	uint16_t x111 = UINT16_MAX;
	static int32_t t16 = -1247634;

    t16 = ((x109>>(x110!=x111))>x112);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x113 = UINT16_MAX;
	int16_t x114 = -2;
	uint16_t x115 = UINT16_MAX;

    t17 = ((x113>>(x114!=x115))>x116);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x117 = UINT16_MAX;
	static uint32_t x119 = UINT32_MAX;
	int32_t t18 = -637;

    t18 = ((x117>>(x118!=x119))>x120);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x121 = 881055452U;
	int64_t x123 = INT64_MIN;
	volatile uint32_t x124 = 0U;
	static volatile int32_t t19 = 59;

    t19 = ((x121>>(x122!=x123))>x124);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x133 = 914136255776212LLU;
	uint64_t x135 = 4204609151LLU;
	volatile uint32_t x136 = 85U;
	int32_t t20 = 3772872;

    t20 = ((x133>>(x134!=x135))>x136);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x137 = 14679LL;
	int16_t x139 = 11188;
	int64_t x140 = -1LL;
	int32_t t21 = 1432;

    t21 = ((x137>>(x138!=x139))>x140);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint32_t x153 = 1578540134U;
	static uint64_t x156 = UINT64_MAX;
	volatile int32_t t22 = -7257604;

    t22 = ((x153>>(x154!=x155))>x156);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x157 = 63U;
	static int16_t x159 = -1;
	static int16_t x160 = INT16_MAX;

    t23 = ((x157>>(x158!=x159))>x160);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x161 = 0;
	uint8_t x162 = 34U;
	static int64_t x163 = -5388304113685265LL;
	int32_t t24 = -2;

    t24 = ((x161>>(x162!=x163))>x164);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x169 = INT8_MAX;
	int8_t x170 = -1;
	int8_t x171 = INT8_MIN;
	volatile uint64_t x172 = 416559561LLU;
	volatile int32_t t25 = 74538;

    t25 = ((x169>>(x170!=x171))>x172);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x177 = 33;
	uint8_t x179 = 0U;
	uint64_t x180 = 5LLU;
	volatile int32_t t26 = -20071200;

    t26 = ((x177>>(x178!=x179))>x180);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x181 = UINT32_MAX;
	int16_t x182 = 97;
	int16_t x183 = INT16_MAX;
	int64_t x184 = -7413LL;
	int32_t t27 = 42;

    t27 = ((x181>>(x182!=x183))>x184);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x189 = 14U;
	int32_t x190 = -1;
	int16_t x192 = -1;
	int32_t t28 = -3332;

    t28 = ((x189>>(x190!=x191))>x192);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x197 = UINT64_MAX;
	uint64_t x198 = UINT64_MAX;
	static int64_t x199 = INT64_MAX;
	int16_t x200 = -1;
	volatile int32_t t29 = 7603;

    t29 = ((x197>>(x198!=x199))>x200);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x201 = INT32_MAX;
	static int8_t x203 = -1;
	uint8_t x204 = 1U;
	int32_t t30 = -3837;

    t30 = ((x201>>(x202!=x203))>x204);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x218 = INT64_MIN;
	static uint64_t x220 = 524345051LLU;
	volatile int32_t t31 = 5;

    t31 = ((x217>>(x218!=x219))>x220);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x221 = 31271U;
	int64_t x222 = INT64_MAX;
	volatile uint32_t x224 = 2U;
	volatile int32_t t32 = -13480;

    t32 = ((x221>>(x222!=x223))>x224);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x229 = UINT16_MAX;
	uint32_t x230 = UINT32_MAX;
	volatile int8_t x232 = 31;
	volatile int32_t t33 = -17053629;

    t33 = ((x229>>(x230!=x231))>x232);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x237 = UINT32_MAX;
	int64_t x238 = INT64_MIN;
	volatile uint32_t x239 = UINT32_MAX;
	static int8_t x240 = INT8_MIN;
	int32_t t34 = 1965;

    t34 = ((x237>>(x238!=x239))>x240);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x246 = -1LL;
	int16_t x248 = INT16_MIN;
	volatile int32_t t35 = -8589;

    t35 = ((x245>>(x246!=x247))>x248);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x249 = 13057119879LLU;
	uint32_t x251 = 25065U;
	int32_t x252 = 963;
	int32_t t36 = -22;

    t36 = ((x249>>(x250!=x251))>x252);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x254 = -146243593LL;
	int8_t x255 = -1;
	int8_t x256 = INT8_MIN;
	volatile int32_t t37 = -657523241;

    t37 = ((x253>>(x254!=x255))>x256);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x257 = UINT32_MAX;
	volatile int8_t x258 = INT8_MIN;
	int32_t x260 = INT32_MAX;
	int32_t t38 = -407202;

    t38 = ((x257>>(x258!=x259))>x260);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x269 = 111U;
	uint16_t x270 = 1U;
	volatile int16_t x271 = INT16_MIN;
	int32_t x272 = 101850;

    t39 = ((x269>>(x270!=x271))>x272);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint32_t x273 = 205U;
	volatile int16_t x274 = -294;
	static int8_t x275 = INT8_MAX;
	uint32_t x276 = UINT32_MAX;
	volatile int32_t t40 = 63389647;

    t40 = ((x273>>(x274!=x275))>x276);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x277 = INT8_MAX;
	int64_t x278 = 316LL;
	int16_t x279 = 2;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t41 = -9756975;

    t41 = ((x277>>(x278!=x279))>x280);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x282 = 0LLU;
	int32_t x283 = INT32_MIN;
	int32_t t42 = -1;

    t42 = ((x281>>(x282!=x283))>x284);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x285 = 422521941308LL;
	static volatile int16_t x286 = INT16_MAX;
	volatile int64_t x287 = -1LL;
	volatile int32_t x288 = -1;
	int32_t t43 = -48959;

    t43 = ((x285>>(x286!=x287))>x288);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x297 = INT16_MAX;
	volatile int64_t x299 = INT64_MIN;

    t44 = ((x297>>(x298!=x299))>x300);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x301 = 2083412LLU;
	uint16_t x302 = UINT16_MAX;
	int32_t x303 = INT32_MIN;
	int32_t t45 = 198451;

    t45 = ((x301>>(x302!=x303))>x304);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x305 = 3U;
	int32_t x306 = INT32_MAX;
	int8_t x307 = 0;
	static volatile int32_t t46 = 10831;

    t46 = ((x305>>(x306!=x307))>x308);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x309 = 709398562271217881LL;
	volatile uint32_t x310 = UINT32_MAX;
	static volatile int16_t x311 = INT16_MIN;
	uint32_t x312 = 179836U;
	volatile int32_t t47 = -1544960;

    t47 = ((x309>>(x310!=x311))>x312);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x315 = 2175420841382246LLU;
	static int8_t x316 = -24;
	volatile int32_t t48 = -21400;

    t48 = ((x313>>(x314!=x315))>x316);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x317 = 21025U;
	int16_t x319 = INT16_MIN;
	static uint32_t x320 = UINT32_MAX;
	volatile int32_t t49 = 1888695;

    t49 = ((x317>>(x318!=x319))>x320);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x321 = 42;
	static uint64_t x323 = 1987873586158830LLU;
	static int8_t x324 = INT8_MIN;
	volatile int32_t t50 = 7868011;

    t50 = ((x321>>(x322!=x323))>x324);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x337 = 2;
	uint64_t x338 = 77LLU;
	int64_t x339 = -64091154456829797LL;
	int8_t x340 = INT8_MIN;
	int32_t t51 = -7804;

    t51 = ((x337>>(x338!=x339))>x340);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x361 = 37U;
	int64_t x362 = -1LL;
	int16_t x364 = -1;

    t52 = ((x361>>(x362!=x363))>x364);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x369 = 3;
	volatile int32_t x370 = INT32_MAX;

    t53 = ((x369>>(x370!=x371))>x372);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x382 = INT32_MAX;
	int32_t x384 = INT32_MIN;
	volatile int32_t t54 = 79624;

    t54 = ((x381>>(x382!=x383))>x384);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x386 = 3553309304394249048LLU;
	uint64_t x387 = 27883609LLU;
	int32_t x388 = INT32_MAX;
	int32_t t55 = -252;

    t55 = ((x385>>(x386!=x387))>x388);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x389 = 231859453908760064LLU;
	static int16_t x390 = -330;
	int64_t x391 = INT64_MIN;

    t56 = ((x389>>(x390!=x391))>x392);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x393 = 40U;
	volatile uint64_t x394 = 127357471301755LLU;
	uint64_t x395 = 1225985423LLU;
	static int16_t x396 = -1;
	volatile int32_t t57 = 29517373;

    t57 = ((x393>>(x394!=x395))>x396);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x397 = UINT64_MAX;
	int32_t x398 = INT32_MAX;
	volatile uint32_t x399 = UINT32_MAX;
	volatile int16_t x400 = -1;
	volatile int32_t t58 = 4;

    t58 = ((x397>>(x398!=x399))>x400);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x405 = 15008208650LLU;
	volatile int8_t x406 = INT8_MAX;
	volatile int32_t x407 = INT32_MIN;
	int8_t x408 = -1;

    t59 = ((x405>>(x406!=x407))>x408);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x410 = 129672126838378LLU;
	int32_t t60 = -98238844;

    t60 = ((x409>>(x410!=x411))>x412);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x413 = INT16_MAX;
	static int8_t x414 = -1;
	int32_t x415 = INT32_MAX;
	int32_t t61 = 0;

    t61 = ((x413>>(x414!=x415))>x416);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x426 = INT64_MIN;
	int8_t x427 = -1;
	int8_t x428 = INT8_MIN;
	volatile int32_t t62 = -39;

    t62 = ((x425>>(x426!=x427))>x428);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x433 = 249;
	volatile uint16_t x434 = 129U;
	volatile uint64_t x435 = 4162426LLU;
	uint64_t x436 = 0LLU;

    t63 = ((x433>>(x434!=x435))>x436);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x449 = 29U;
	uint32_t x450 = 7U;
	volatile uint64_t x451 = UINT64_MAX;
	volatile int64_t x452 = -121136780180LL;
	int32_t t64 = -748335;

    t64 = ((x449>>(x450!=x451))>x452);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x453 = 3273734LLU;
	uint16_t x454 = 4617U;
	int64_t x455 = INT64_MAX;
	int32_t x456 = -1;
	static volatile int32_t t65 = 7056084;

    t65 = ((x453>>(x454!=x455))>x456);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x457 = 17U;
	uint32_t x458 = 40918411U;
	static int8_t x459 = -15;
	uint64_t x460 = 2153997573216LLU;

    t66 = ((x457>>(x458!=x459))>x460);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x461 = INT8_MAX;
	uint32_t x462 = 0U;
	volatile int8_t x463 = INT8_MIN;
	int32_t x464 = 317004580;
	volatile int32_t t67 = 159;

    t67 = ((x461>>(x462!=x463))>x464);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x465 = 16U;
	volatile int64_t x466 = 257382631162710975LL;
	static int32_t x467 = -1;
	static volatile int16_t x468 = 1;
	int32_t t68 = -29;

    t68 = ((x465>>(x466!=x467))>x468);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x469 = INT16_MAX;
	static uint8_t x470 = 7U;
	int16_t x471 = -1;
	int64_t x472 = INT64_MAX;
	static int32_t t69 = -858;

    t69 = ((x469>>(x470!=x471))>x472);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint32_t x477 = 1615814U;
	static uint32_t x478 = 1429U;
	int16_t x479 = INT16_MIN;
	uint64_t x480 = UINT64_MAX;
	int32_t t70 = 2415;

    t70 = ((x477>>(x478!=x479))>x480);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x485 = UINT16_MAX;
	static int8_t x486 = -4;
	int8_t x488 = 48;
	volatile int32_t t71 = 13521972;

    t71 = ((x485>>(x486!=x487))>x488);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x489 = 20U;
	int32_t t72 = -1514747;

    t72 = ((x489>>(x490!=x491))>x492);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x493 = UINT32_MAX;
	static volatile int8_t x494 = -1;
	volatile int32_t x495 = INT32_MIN;
	volatile int8_t x496 = INT8_MIN;
	volatile int32_t t73 = 4102268;

    t73 = ((x493>>(x494!=x495))>x496);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x497 = 20U;
	int64_t x498 = INT64_MIN;
	int16_t x499 = INT16_MIN;
	int64_t x500 = INT64_MIN;

    t74 = ((x497>>(x498!=x499))>x500);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x506 = -14LL;
	volatile int16_t x507 = INT16_MIN;
	uint16_t x508 = UINT16_MAX;
	volatile int32_t t75 = 25317;

    t75 = ((x505>>(x506!=x507))>x508);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x525 = 25;
	static uint32_t x526 = UINT32_MAX;
	int16_t x527 = INT16_MIN;
	uint8_t x528 = 56U;
	int32_t t76 = -1962;

    t76 = ((x525>>(x526!=x527))>x528);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x529 = UINT64_MAX;
	static int8_t x530 = 0;
	volatile int32_t x531 = INT32_MIN;
	int32_t x532 = INT32_MAX;
	volatile int32_t t77 = 1634;

    t77 = ((x529>>(x530!=x531))>x532);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x538 = -8;
	int8_t x539 = INT8_MIN;

    t78 = ((x537>>(x538!=x539))>x540);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x549 = 1;
	static int32_t x550 = INT32_MAX;
	uint8_t x552 = 6U;
	volatile int32_t t79 = -123;

    t79 = ((x549>>(x550!=x551))>x552);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x565 = 3U;
	int32_t x567 = -1;
	volatile uint16_t x568 = 0U;
	volatile int32_t t80 = -7;

    t80 = ((x565>>(x566!=x567))>x568);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x570 = 52654947U;
	int64_t x572 = 283LL;
	static int32_t t81 = 0;

    t81 = ((x569>>(x570!=x571))>x572);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x573 = 261700041316927LLU;
	int8_t x574 = 59;
	int64_t x575 = 104675LL;
	static uint64_t x576 = 2572711427536116LLU;
	volatile int32_t t82 = 94663646;

    t82 = ((x573>>(x574!=x575))>x576);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x581 = 4U;
	volatile uint64_t x582 = UINT64_MAX;
	int32_t x584 = INT32_MAX;
	int32_t t83 = -38976;

    t83 = ((x581>>(x582!=x583))>x584);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x590 = -1LL;
	static int32_t x591 = -42875;
	int64_t x592 = -185952LL;
	int32_t t84 = -2111;

    t84 = ((x589>>(x590!=x591))>x592);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x601 = 11863;
	int8_t x602 = INT8_MAX;
	uint8_t x603 = 38U;
	volatile int16_t x604 = 190;

    t85 = ((x601>>(x602!=x603))>x604);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x605 = INT32_MAX;
	uint16_t x606 = UINT16_MAX;
	volatile int64_t x608 = 16971594139316756LL;

    t86 = ((x605>>(x606!=x607))>x608);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x609 = 5U;
	volatile uint16_t x610 = UINT16_MAX;
	uint32_t x611 = 15924U;
	int16_t x612 = -1;

    t87 = ((x609>>(x610!=x611))>x612);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x617 = 358;
	int32_t x618 = -148;
	int16_t x619 = INT16_MIN;
	int32_t t88 = 100584482;

    t88 = ((x617>>(x618!=x619))>x620);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x633 = UINT8_MAX;
	int32_t x634 = 14667;
	int8_t x635 = -1;
	int8_t x636 = INT8_MAX;
	int32_t t89 = -1461;

    t89 = ((x633>>(x634!=x635))>x636);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x641 = 2;
	uint8_t x643 = UINT8_MAX;
	int32_t x644 = INT32_MIN;

    t90 = ((x641>>(x642!=x643))>x644);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x645 = 0U;
	volatile int8_t x647 = INT8_MIN;
	int64_t x648 = INT64_MIN;
	int32_t t91 = 181;

    t91 = ((x645>>(x646!=x647))>x648);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x649 = 31;
	static volatile int16_t x650 = 389;
	uint8_t x652 = UINT8_MAX;
	volatile int32_t t92 = 1;

    t92 = ((x649>>(x650!=x651))>x652);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x657 = 17U;
	int32_t x658 = INT32_MIN;
	int64_t x659 = -1LL;
	int64_t x660 = 2LL;
	static volatile int32_t t93 = -40;

    t93 = ((x657>>(x658!=x659))>x660);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x665 = 14U;
	int16_t x666 = INT16_MAX;
	int16_t x667 = INT16_MAX;
	volatile int32_t t94 = 7;

    t94 = ((x665>>(x666!=x667))>x668);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x681 = UINT32_MAX;
	int16_t x682 = 6517;
	int64_t x683 = INT64_MIN;
	static uint8_t x684 = 4U;
	int32_t t95 = 0;

    t95 = ((x681>>(x682!=x683))>x684);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint16_t x689 = UINT16_MAX;
	int64_t x690 = INT64_MAX;
	volatile uint8_t x691 = UINT8_MAX;
	volatile int32_t t96 = 590925630;

    t96 = ((x689>>(x690!=x691))>x692);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x694 = 5;
	uint64_t x695 = 1LLU;
	int16_t x696 = 2;
	volatile int32_t t97 = -46513259;

    t97 = ((x693>>(x694!=x695))>x696);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x705 = 10U;
	int8_t x707 = -3;
	uint64_t x708 = 72028111441LLU;
	static int32_t t98 = 871366;

    t98 = ((x705>>(x706!=x707))>x708);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x710 = 17649024636333LLU;
	static int32_t x711 = INT32_MAX;
	static uint32_t x712 = UINT32_MAX;
	int32_t t99 = -466577993;

    t99 = ((x709>>(x710!=x711))>x712);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x725 = INT64_MAX;
	int16_t x726 = -1;
	uint16_t x727 = 13U;
	volatile int32_t x728 = INT32_MIN;
	volatile int32_t t100 = -15784;

    t100 = ((x725>>(x726!=x727))>x728);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x729 = 58U;
	int8_t x730 = INT8_MAX;
	int32_t x731 = INT32_MAX;
	int32_t t101 = 103802094;

    t101 = ((x729>>(x730!=x731))>x732);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x735 = INT64_MIN;
	static int16_t x736 = -1;
	volatile int32_t t102 = 0;

    t102 = ((x733>>(x734!=x735))>x736);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x741 = INT8_MAX;
	int64_t x742 = -1LL;
	static int8_t x743 = 1;
	uint8_t x744 = UINT8_MAX;
	volatile int32_t t103 = 919842;

    t103 = ((x741>>(x742!=x743))>x744);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x746 = 18;
	int16_t x747 = INT16_MIN;
	static int32_t x748 = -6;

    t104 = ((x745>>(x746!=x747))>x748);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x753 = 3;
	int64_t x755 = 17712344465294LL;
	int64_t x756 = INT64_MIN;
	int32_t t105 = -29;

    t105 = ((x753>>(x754!=x755))>x756);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x768 = INT16_MIN;
	volatile int32_t t106 = -1825951;

    t106 = ((x765>>(x766!=x767))>x768);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x770 = -1;
	volatile int32_t x771 = -7679;
	int32_t x772 = 15724;
	volatile int32_t t107 = -117073907;

    t107 = ((x769>>(x770!=x771))>x772);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x773 = UINT64_MAX;
	int8_t x774 = 2;
	int64_t x776 = -11973528107556LL;

    t108 = ((x773>>(x774!=x775))>x776);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x790 = -1;
	int32_t x792 = INT32_MAX;
	volatile int32_t t109 = -5418;

    t109 = ((x789>>(x790!=x791))>x792);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x801 = 11U;
	uint64_t x803 = 473357466334790LLU;
	int16_t x804 = -7607;
	volatile int32_t t110 = 168287;

    t110 = ((x801>>(x802!=x803))>x804);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x807 = UINT8_MAX;
	int32_t x808 = -1;
	volatile int32_t t111 = 61088;

    t111 = ((x805>>(x806!=x807))>x808);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x811 = UINT32_MAX;
	int16_t x812 = -1;
	static int32_t t112 = 1;

    t112 = ((x809>>(x810!=x811))>x812);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x817 = UINT8_MAX;
	int32_t x818 = -39457130;
	int8_t x819 = 5;
	uint8_t x820 = UINT8_MAX;
	volatile int32_t t113 = -3900;

    t113 = ((x817>>(x818!=x819))>x820);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x821 = 1254U;
	static uint64_t x822 = 6552451333LLU;

    t114 = ((x821>>(x822!=x823))>x824);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint64_t x837 = UINT64_MAX;
	static int32_t x838 = INT32_MAX;
	static int64_t x839 = 36579350762244LL;
	static volatile int8_t x840 = -1;
	static int32_t t115 = -25;

    t115 = ((x837>>(x838!=x839))>x840);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x841 = 96U;
	int64_t x842 = -200LL;
	int32_t x843 = INT32_MIN;
	int8_t x844 = 5;
	volatile int32_t t116 = 499815;

    t116 = ((x841>>(x842!=x843))>x844);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint8_t x853 = UINT8_MAX;
	int8_t x854 = 0;
	int64_t x855 = -11417LL;
	static volatile int64_t x856 = 1LL;
	volatile int32_t t117 = -1835;

    t117 = ((x853>>(x854!=x855))>x856);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x861 = 61U;
	volatile uint16_t x862 = UINT16_MAX;
	int16_t x863 = INT16_MAX;
	volatile int32_t t118 = 55780485;

    t118 = ((x861>>(x862!=x863))>x864);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x869 = INT16_MAX;
	int32_t x870 = -128581;
	int32_t x871 = INT32_MIN;
	uint64_t x872 = UINT64_MAX;
	static volatile int32_t t119 = 8162;

    t119 = ((x869>>(x870!=x871))>x872);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x874 = INT32_MIN;
	int8_t x875 = INT8_MIN;
	int16_t x876 = -1;
	volatile int32_t t120 = -1;

    t120 = ((x873>>(x874!=x875))>x876);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x877 = UINT8_MAX;
	int32_t x878 = INT32_MIN;
	volatile int32_t t121 = -1;

    t121 = ((x877>>(x878!=x879))>x880);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x881 = 16213LL;
	static uint8_t x882 = UINT8_MAX;
	static int32_t x883 = -60;
	static volatile int32_t t122 = -9;

    t122 = ((x881>>(x882!=x883))>x884);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x890 = 10;
	static int16_t x891 = -51;
	int32_t t123 = 2;

    t123 = ((x889>>(x890!=x891))>x892);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x893 = 0;
	int16_t x895 = -49;
	int32_t x896 = -1;

    t124 = ((x893>>(x894!=x895))>x896);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x897 = 19635U;
	static int8_t x899 = INT8_MAX;
	static int16_t x900 = -1;
	static int32_t t125 = -238104;

    t125 = ((x897>>(x898!=x899))>x900);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x903 = INT16_MIN;
	int32_t x904 = 17;
	volatile int32_t t126 = 0;

    t126 = ((x901>>(x902!=x903))>x904);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x905 = 695114U;
	static volatile int8_t x907 = INT8_MIN;
	int8_t x908 = INT8_MIN;

    t127 = ((x905>>(x906!=x907))>x908);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x917 = 5;
	int16_t x918 = INT16_MAX;
	static volatile uint16_t x920 = 5U;
	int32_t t128 = 1699857;

    t128 = ((x917>>(x918!=x919))>x920);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x921 = UINT16_MAX;
	int32_t x922 = 624;
	int8_t x923 = 0;
	int8_t x924 = 9;
	int32_t t129 = 648;

    t129 = ((x921>>(x922!=x923))>x924);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x929 = UINT32_MAX;
	uint16_t x930 = 122U;
	static int64_t x931 = INT64_MIN;
	volatile uint32_t x932 = 35415633U;
	volatile int32_t t130 = -2767449;

    t130 = ((x929>>(x930!=x931))>x932);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x935 = 58430463388405972LL;
	int8_t x936 = -1;
	int32_t t131 = -170;

    t131 = ((x933>>(x934!=x935))>x936);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x937 = INT8_MAX;
	int8_t x938 = -2;
	static int16_t x940 = INT16_MIN;
	volatile int32_t t132 = 341;

    t132 = ((x937>>(x938!=x939))>x940);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x945 = 5U;
	static volatile int8_t x946 = 0;
	uint32_t x948 = UINT32_MAX;
	int32_t t133 = 164;

    t133 = ((x945>>(x946!=x947))>x948);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint8_t x949 = UINT8_MAX;
	int16_t x950 = -3;
	int8_t x951 = -5;
	static volatile uint8_t x952 = 3U;
	int32_t t134 = -860802;

    t134 = ((x949>>(x950!=x951))>x952);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x957 = 605;
	uint64_t x958 = 14LLU;
	int16_t x959 = 0;
	int32_t t135 = -3;

    t135 = ((x957>>(x958!=x959))>x960);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x961 = 1;
	uint16_t x962 = UINT16_MAX;
	uint32_t x963 = UINT32_MAX;
	volatile int8_t x964 = -1;
	int32_t t136 = 197279016;

    t136 = ((x961>>(x962!=x963))>x964);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x970 = -1LL;
	uint32_t x971 = UINT32_MAX;
	volatile int32_t t137 = -4139;

    t137 = ((x969>>(x970!=x971))>x972);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x981 = INT16_MAX;
	static int8_t x982 = INT8_MAX;
	uint64_t x983 = UINT64_MAX;
	static uint16_t x984 = 3794U;
	static int32_t t138 = 4846475;

    t138 = ((x981>>(x982!=x983))>x984);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x989 = 66787204306687LLU;
	uint32_t x990 = 343324964U;
	static int64_t x991 = -2907069LL;
	static volatile uint8_t x992 = 3U;
	int32_t t139 = 235;

    t139 = ((x989>>(x990!=x991))>x992);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x993 = INT8_MAX;
	volatile int32_t x995 = INT32_MAX;
	volatile int32_t t140 = -7348159;

    t140 = ((x993>>(x994!=x995))>x996);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1002 = 7245;
	int16_t x1003 = 5;
	uint64_t x1004 = UINT64_MAX;

    t141 = ((x1001>>(x1002!=x1003))>x1004);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x1009 = 21U;
	volatile int32_t x1011 = INT32_MAX;
	uint64_t x1012 = UINT64_MAX;
	int32_t t142 = -816684;

    t142 = ((x1009>>(x1010!=x1011))>x1012);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x1013 = 673782777U;
	static int64_t x1014 = INT64_MIN;
	static volatile uint16_t x1015 = 6691U;
	int32_t t143 = 1;

    t143 = ((x1013>>(x1014!=x1015))>x1016);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1021 = 449;
	static int16_t x1024 = INT16_MAX;
	volatile int32_t t144 = 16;

    t144 = ((x1021>>(x1022!=x1023))>x1024);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1026 = -433;
	uint32_t x1027 = UINT32_MAX;
	int32_t t145 = -1781447;

    t145 = ((x1025>>(x1026!=x1027))>x1028);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x1037 = UINT8_MAX;
	int8_t x1039 = INT8_MAX;
	uint64_t x1040 = UINT64_MAX;
	volatile int32_t t146 = 76341;

    t146 = ((x1037>>(x1038!=x1039))>x1040);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1045 = 1654;
	static int16_t x1046 = INT16_MIN;
	int16_t x1048 = -1;
	static volatile int32_t t147 = 771;

    t147 = ((x1045>>(x1046!=x1047))>x1048);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x1050 = INT16_MIN;
	static uint32_t x1051 = 15652440U;
	uint32_t x1052 = 671523363U;
	static int32_t t148 = -3238767;

    t148 = ((x1049>>(x1050!=x1051))>x1052);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x1054 = UINT64_MAX;
	int8_t x1055 = INT8_MIN;
	volatile int8_t x1056 = -1;
	int32_t t149 = -59437203;

    t149 = ((x1053>>(x1054!=x1055))>x1056);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x1061 = 2U;
	volatile int16_t x1062 = 7;
	uint32_t x1064 = UINT32_MAX;

    t150 = ((x1061>>(x1062!=x1063))>x1064);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1065 = 6498184636825632LLU;
	int64_t x1067 = INT64_MAX;

    t151 = ((x1065>>(x1066!=x1067))>x1068);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x1069 = INT64_MAX;
	int64_t x1070 = INT64_MIN;
	int8_t x1071 = INT8_MAX;
	volatile int8_t x1072 = INT8_MAX;
	volatile int32_t t152 = 834;

    t152 = ((x1069>>(x1070!=x1071))>x1072);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x1073 = 25873952U;
	static uint64_t x1074 = UINT64_MAX;
	int8_t x1076 = -1;
	static volatile int32_t t153 = 0;

    t153 = ((x1073>>(x1074!=x1075))>x1076);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x1077 = UINT8_MAX;
	static volatile int16_t x1078 = INT16_MIN;
	volatile int16_t x1079 = INT16_MAX;
	int8_t x1080 = 1;
	int32_t t154 = 358;

    t154 = ((x1077>>(x1078!=x1079))>x1080);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x1082 = 125486852717LLU;
	int8_t x1083 = 20;
	static int8_t x1084 = 0;

    t155 = ((x1081>>(x1082!=x1083))>x1084);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x1085 = UINT32_MAX;
	uint64_t x1086 = 917188204541LLU;
	static uint16_t x1088 = 12381U;

    t156 = ((x1085>>(x1086!=x1087))>x1088);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x1089 = INT32_MAX;
	int64_t x1090 = 46917979014044406LL;
	int64_t x1092 = -545460LL;
	int32_t t157 = 0;

    t157 = ((x1089>>(x1090!=x1091))>x1092);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x1093 = 727306LLU;
	int64_t x1094 = INT64_MIN;
	volatile uint16_t x1096 = 63U;
	static volatile int32_t t158 = 1833;

    t158 = ((x1093>>(x1094!=x1095))>x1096);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x1097 = UINT8_MAX;
	static int16_t x1098 = INT16_MIN;
	uint16_t x1100 = UINT16_MAX;
	static int32_t t159 = -5168335;

    t159 = ((x1097>>(x1098!=x1099))>x1100);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1109 = 9;
	volatile uint8_t x1110 = UINT8_MAX;
	int32_t x1111 = -2;
	volatile int64_t x1112 = -1LL;
	int32_t t160 = 16109995;

    t160 = ((x1109>>(x1110!=x1111))>x1112);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x1114 = INT16_MIN;
	uint32_t x1115 = 3U;
	static uint32_t x1116 = UINT32_MAX;
	int32_t t161 = 683;

    t161 = ((x1113>>(x1114!=x1115))>x1116);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1121 = INT16_MAX;
	int64_t x1122 = 425306321410212LL;
	int16_t x1123 = -2840;
	int8_t x1124 = 2;
	int32_t t162 = -3368053;

    t162 = ((x1121>>(x1122!=x1123))>x1124);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x1129 = 114U;
	volatile uint32_t x1130 = 4811U;
	static int32_t x1132 = INT32_MIN;
	int32_t t163 = -669939;

    t163 = ((x1129>>(x1130!=x1131))>x1132);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1134 = INT8_MIN;
	volatile uint64_t x1135 = 285298LLU;
	volatile int32_t x1136 = -63748079;
	volatile int32_t t164 = 14007449;

    t164 = ((x1133>>(x1134!=x1135))>x1136);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x1141 = 59;
	uint32_t x1142 = 199U;
	int64_t x1143 = INT64_MIN;
	int16_t x1144 = 12;
	volatile int32_t t165 = -1798039;

    t165 = ((x1141>>(x1142!=x1143))>x1144);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x1146 = UINT16_MAX;
	int16_t x1147 = INT16_MIN;
	static int32_t x1148 = 89;
	int32_t t166 = -45671;

    t166 = ((x1145>>(x1146!=x1147))>x1148);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x1153 = 13456LLU;
	uint16_t x1154 = 3U;
	static int16_t x1155 = INT16_MAX;
	volatile int16_t x1156 = INT16_MIN;
	int32_t t167 = 4437675;

    t167 = ((x1153>>(x1154!=x1155))>x1156);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x1157 = INT32_MAX;
	int64_t x1158 = INT64_MIN;
	int32_t x1159 = 2;
	int8_t x1160 = INT8_MIN;
	int32_t t168 = 5837700;

    t168 = ((x1157>>(x1158!=x1159))>x1160);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x1161 = 118073812371LLU;
	static int64_t x1162 = -1LL;
	int8_t x1163 = INT8_MIN;
	int32_t x1164 = INT32_MAX;
	volatile int32_t t169 = 1830;

    t169 = ((x1161>>(x1162!=x1163))>x1164);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x1166 = -819;
	int64_t x1168 = INT64_MIN;
	volatile int32_t t170 = -1326;

    t170 = ((x1165>>(x1166!=x1167))>x1168);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1173 = 0U;
	volatile uint8_t x1175 = UINT8_MAX;
	static int16_t x1176 = INT16_MAX;
	static int32_t t171 = 998;

    t171 = ((x1173>>(x1174!=x1175))>x1176);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1182 = -1;
	static int16_t x1184 = INT16_MAX;
	volatile int32_t t172 = 21443843;

    t172 = ((x1181>>(x1182!=x1183))>x1184);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1193 = 9366U;
	volatile uint16_t x1194 = 2814U;
	uint32_t x1195 = 1004626U;
	static int64_t x1196 = -1LL;
	int32_t t173 = -126;

    t173 = ((x1193>>(x1194!=x1195))>x1196);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x1197 = 1U;
	int16_t x1198 = INT16_MAX;
	uint16_t x1200 = UINT16_MAX;

    t174 = ((x1197>>(x1198!=x1199))>x1200);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1201 = 9855690893653LLU;
	static int16_t x1203 = INT16_MAX;
	static volatile int16_t x1204 = -44;
	volatile int32_t t175 = 2;

    t175 = ((x1201>>(x1202!=x1203))>x1204);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x1221 = UINT32_MAX;
	int16_t x1222 = INT16_MAX;
	int64_t x1223 = -1LL;
	int8_t x1224 = INT8_MIN;
	static volatile int32_t t176 = 1285231;

    t176 = ((x1221>>(x1222!=x1223))>x1224);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int64_t x1225 = 620LL;
	uint32_t x1226 = 3U;
	uint32_t x1227 = 27U;
	int16_t x1228 = 1;

    t177 = ((x1225>>(x1226!=x1227))>x1228);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1229 = 6U;
	uint16_t x1230 = UINT16_MAX;
	volatile int64_t x1231 = -1LL;
	static int64_t x1232 = INT64_MIN;
	static int32_t t178 = 55;

    t178 = ((x1229>>(x1230!=x1231))>x1232);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1237 = 0;
	int64_t x1238 = INT64_MIN;
	int16_t x1240 = INT16_MIN;
	volatile int32_t t179 = -91797;

    t179 = ((x1237>>(x1238!=x1239))>x1240);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x1241 = 4U;
	int8_t x1242 = INT8_MAX;
	int16_t x1244 = -1;
	int32_t t180 = 970;

    t180 = ((x1241>>(x1242!=x1243))>x1244);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1249 = 103U;
	uint32_t x1250 = UINT32_MAX;
	int32_t x1252 = -1;
	int32_t t181 = 31496;

    t181 = ((x1249>>(x1250!=x1251))>x1252);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1257 = 10183;
	int32_t x1259 = INT32_MIN;
	uint32_t x1260 = 231U;
	static int32_t t182 = 902;

    t182 = ((x1257>>(x1258!=x1259))>x1260);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1261 = INT64_MAX;
	int32_t x1263 = INT32_MIN;
	static int64_t x1264 = INT64_MAX;
	volatile int32_t t183 = 22881;

    t183 = ((x1261>>(x1262!=x1263))>x1264);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1265 = 981LLU;
	static uint16_t x1266 = 1370U;
	volatile uint32_t x1267 = 96706U;
	static int16_t x1268 = -123;

    t184 = ((x1265>>(x1266!=x1267))>x1268);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1270 = -1LL;
	uint16_t x1271 = UINT16_MAX;
	static int32_t x1272 = INT32_MIN;
	volatile int32_t t185 = 3805113;

    t185 = ((x1269>>(x1270!=x1271))>x1272);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1281 = INT16_MAX;
	int16_t x1282 = -1;
	int8_t x1284 = 0;
	volatile int32_t t186 = -76;

    t186 = ((x1281>>(x1282!=x1283))>x1284);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1292 = UINT64_MAX;
	volatile int32_t t187 = -3512878;

    t187 = ((x1289>>(x1290!=x1291))>x1292);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1301 = 14U;
	uint16_t x1302 = 1U;
	int32_t x1303 = INT32_MIN;
	static int32_t t188 = -121455642;

    t188 = ((x1301>>(x1302!=x1303))>x1304);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1317 = 6U;
	static int8_t x1318 = INT8_MIN;
	int32_t x1320 = INT32_MAX;
	volatile int32_t t189 = 16169;

    t189 = ((x1317>>(x1318!=x1319))>x1320);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1321 = UINT64_MAX;
	volatile uint32_t x1322 = 345228U;
	int16_t x1323 = 14209;
	volatile int32_t t190 = 8316471;

    t190 = ((x1321>>(x1322!=x1323))>x1324);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1325 = 37LLU;
	volatile uint32_t x1326 = 97U;
	volatile int32_t x1327 = -1;
	static uint8_t x1328 = 0U;
	volatile int32_t t191 = 235539;

    t191 = ((x1325>>(x1326!=x1327))>x1328);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1329 = INT16_MAX;
	static int16_t x1330 = INT16_MIN;
	uint32_t x1332 = UINT32_MAX;
	volatile int32_t t192 = -325685138;

    t192 = ((x1329>>(x1330!=x1331))>x1332);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1333 = 393778680LLU;
	static int64_t x1334 = -1LL;
	int8_t x1335 = 1;
	uint8_t x1336 = UINT8_MAX;

    t193 = ((x1333>>(x1334!=x1335))>x1336);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1337 = INT32_MAX;
	uint32_t x1338 = 6183U;
	int8_t x1339 = -14;
	uint8_t x1340 = 0U;
	int32_t t194 = -273955454;

    t194 = ((x1337>>(x1338!=x1339))>x1340);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x1343 = -1LL;
	volatile int64_t x1344 = INT64_MIN;
	volatile int32_t t195 = 12103600;

    t195 = ((x1341>>(x1342!=x1343))>x1344);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x1345 = 109;
	int8_t x1346 = 1;
	static int64_t x1347 = 15LL;
	int32_t x1348 = -111628;
	volatile int32_t t196 = -7502;

    t196 = ((x1345>>(x1346!=x1347))>x1348);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x1349 = UINT64_MAX;
	volatile uint16_t x1350 = UINT16_MAX;
	uint64_t x1351 = 31159592413LLU;
	static int64_t x1352 = -1566999041659828LL;
	static volatile int32_t t197 = -311344;

    t197 = ((x1349>>(x1350!=x1351))>x1352);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1353 = 265327834LL;
	uint32_t x1354 = 799U;
	int32_t x1355 = -111388399;
	int64_t x1356 = INT64_MIN;

    t198 = ((x1353>>(x1354!=x1355))>x1356);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1361 = UINT32_MAX;
	static int16_t x1362 = INT16_MAX;
	int64_t x1363 = INT64_MIN;
	int32_t x1364 = INT32_MIN;
	int32_t t199 = 146;

    t199 = ((x1361>>(x1362!=x1363))>x1364);

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

