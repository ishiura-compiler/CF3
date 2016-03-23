
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

uint32_t x5 = 90093093U;
int32_t x6 = 259338;
uint32_t x17 = 873U;
int32_t x19 = INT32_MIN;
uint16_t x22 = UINT16_MAX;
static uint64_t x24 = UINT64_MAX;
int16_t x25 = 1694;
int16_t x58 = 16002;
volatile int64_t x65 = 81971LL;
int8_t x66 = -12;
int64_t x67 = -1LL;
uint32_t x71 = 7056U;
volatile uint64_t t13 = 297244439550250LLU;
static volatile int32_t t16 = -561;
uint32_t x129 = 1U;
static volatile int32_t t18 = 1748;
volatile int16_t x145 = 14;
static uint32_t x146 = UINT32_MAX;
static uint64_t x148 = UINT64_MAX;
uint32_t x149 = 1124049872U;
static uint64_t x150 = 90032773957116LLU;
int8_t x151 = 0;
int32_t x156 = INT32_MIN;
uint64_t x175 = UINT64_MAX;
uint16_t x178 = 207U;
static uint32_t x179 = 44U;
volatile int64_t t24 = -167501012182428548LL;
int8_t x186 = -1;
uint64_t x205 = 114937LLU;
uint16_t x208 = 0U;
static volatile int8_t x226 = INT8_MIN;
int32_t x228 = INT32_MIN;
volatile int32_t t32 = -46572;
uint16_t x246 = UINT16_MAX;
uint8_t x259 = 127U;
int64_t x268 = INT64_MIN;
int32_t x275 = -1;
uint64_t x285 = 202972607LLU;
static int16_t x295 = INT16_MIN;
uint8_t x319 = 4U;
static uint32_t x321 = UINT32_MAX;
static uint32_t x323 = 848511U;
volatile uint8_t x337 = 58U;
uint64_t x338 = 13LLU;
static uint64_t x339 = 13701294011095878LLU;
volatile int32_t t44 = 166493493;
int64_t x358 = INT64_MIN;
uint16_t x362 = 1935U;
int64_t x363 = INT64_MIN;
volatile int64_t x371 = INT64_MAX;
static uint32_t x373 = 52240094U;
volatile uint32_t t49 = 60614U;
int64_t x383 = INT64_MAX;
volatile uint32_t t50 = 269U;
volatile int64_t t51 = 2986LL;
volatile int64_t x421 = INT64_MAX;
volatile int32_t x424 = -28;
uint64_t x428 = 73622190046LLU;
int16_t x431 = 2;
int64_t x433 = INT64_MAX;
int64_t x434 = -1LL;
int64_t t58 = 3058171LL;
int32_t x448 = INT32_MIN;
int32_t t59 = -2542675;
uint32_t x461 = 410053328U;
static uint32_t t61 = 867394465U;
int16_t x478 = 5934;
uint8_t x490 = UINT8_MAX;
int8_t x492 = INT8_MIN;
int8_t x500 = INT8_MAX;
volatile uint32_t t67 = 11214U;
volatile int8_t x547 = -1;
static volatile int64_t t71 = 0LL;
int32_t x565 = 20;
int64_t x581 = INT64_MAX;
int32_t x589 = INT32_MAX;
volatile uint32_t x593 = 399395U;
static int64_t x594 = -1558LL;
int64_t x595 = INT64_MAX;
int64_t x596 = INT64_MIN;
volatile int64_t t77 = 54151337699198342LL;
int32_t t78 = 4480413;
static int32_t x614 = INT32_MAX;
static uint16_t x615 = 3U;
int32_t x616 = -219;
uint64_t x637 = UINT64_MAX;
int64_t x644 = 3LL;
int64_t t82 = -13328161LL;
uint16_t x645 = 2U;
uint8_t x657 = UINT8_MAX;
uint16_t x662 = 18U;
uint32_t x663 = 1754492U;
uint8_t x682 = UINT8_MAX;
uint8_t x693 = 1U;
volatile uint32_t t89 = 1U;
int8_t x698 = INT8_MAX;
int8_t x700 = INT8_MIN;
volatile uint64_t x705 = 12538LLU;
int32_t x707 = 352226;
uint8_t x709 = UINT8_MAX;
volatile int32_t t92 = -57;
static int64_t x757 = INT64_MAX;
volatile int64_t t98 = 32LL;
int32_t t99 = -383089;
volatile uint8_t x773 = 8U;
int16_t x776 = 1;
volatile int32_t t103 = 6;
uint32_t x784 = 11U;
volatile uint32_t t104 = 394667U;
int64_t x787 = 131495307223LL;
int8_t x800 = INT8_MIN;
static int32_t x805 = INT32_MAX;
int16_t x814 = INT16_MIN;
int32_t t111 = INT32_MIN;
int64_t x821 = 31LL;
volatile int8_t x824 = 7;
int32_t t113 = 45816;
uint64_t x832 = 223LLU;
uint64_t t114 = 32411540291LLU;
int64_t x836 = -1LL;
uint8_t x838 = 3U;
static int64_t t116 = 2429881LL;
int32_t t118 = 1;
uint32_t x849 = UINT32_MAX;
int32_t x860 = INT32_MIN;
int16_t x868 = INT16_MAX;
uint8_t x873 = 49U;
uint32_t x874 = 13378530U;
uint8_t x900 = 1U;
int32_t x906 = -156;
int8_t x908 = INT8_MAX;
uint32_t x911 = 391850932U;
volatile int16_t x912 = INT16_MAX;
static volatile uint64_t x920 = 43084466055689491LLU;
uint8_t x924 = UINT8_MAX;
static volatile int32_t t129 = 59191575;
static uint8_t x928 = 4U;
int8_t x934 = -1;
volatile uint32_t x945 = 2854U;
int8_t x947 = INT8_MAX;
volatile int8_t x948 = -1;
uint32_t t133 = 146U;
static volatile int64_t x965 = INT64_MAX;
int16_t x966 = 0;
int64_t t135 = 1LL;
int32_t x975 = -1;
int32_t x978 = -97483;
int8_t x982 = INT8_MAX;
int8_t x995 = 4;
static int8_t x1007 = 1;
volatile int8_t x1010 = -37;
volatile int16_t x1023 = -1;
volatile uint32_t x1025 = UINT32_MAX;
uint32_t t146 = 958U;
static uint16_t x1077 = 3744U;
volatile int64_t t147 = -1LL;
uint8_t x1081 = 23U;
uint16_t x1083 = UINT16_MAX;
uint64_t t148 = 2841078876LLU;
uint32_t x1102 = UINT32_MAX;
static int8_t x1103 = INT8_MAX;
int8_t x1111 = -1;
int32_t x1117 = 21988751;
int16_t x1119 = INT16_MIN;
int32_t t155 = -817970;
volatile int64_t x1123 = INT64_MIN;
volatile int64_t t156 = 1LL;
static volatile int8_t x1125 = 1;
static int32_t t157 = -71622;
int16_t x1129 = INT16_MAX;
int64_t x1134 = INT64_MAX;
static volatile uint16_t x1138 = UINT16_MAX;
int32_t t162 = -13327;
int64_t x1150 = 139463LL;
uint64_t x1152 = 1659037117972918LLU;
uint64_t x1165 = UINT64_MAX;
int8_t x1171 = 15;
volatile int16_t x1172 = INT16_MIN;
uint8_t x1178 = 11U;
uint32_t x1180 = 97U;
int32_t x1188 = INT32_MAX;
int32_t x1192 = -89842;
int16_t x1204 = -1;
volatile uint16_t x1207 = UINT16_MAX;
uint8_t x1208 = 11U;
uint32_t x1211 = 1269111U;
int64_t x1231 = -814519987922LL;
int16_t x1242 = INT16_MIN;
static int32_t x1251 = -1;
volatile uint64_t t180 = 208LLU;
int32_t x1273 = INT32_MAX;
volatile int8_t x1303 = -1;
static uint8_t x1338 = 46U;
uint64_t x1350 = UINT64_MAX;
static volatile int32_t x1356 = INT32_MIN;
static int32_t t190 = 107450366;
int8_t x1357 = 2;
int16_t x1358 = 10;
int32_t x1360 = INT32_MIN;
static uint64_t x1361 = UINT64_MAX;
volatile uint64_t t192 = 2952LLU;
int64_t x1366 = -726138570LL;
int32_t t193 = -61;
static volatile int32_t x1370 = INT32_MIN;
int8_t x1371 = 11;
volatile uint32_t t194 = 30149U;
volatile int32_t t195 = -174601;
uint64_t x1387 = UINT64_MAX;
volatile int32_t t196 = -1346699;
volatile int64_t x1392 = INT64_MAX;
uint32_t x1393 = 333369U;
uint64_t x1397 = 19720LLU;
int8_t x1400 = 28;
volatile uint64_t t199 = 66354666555LLU;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	int8_t x2 = 6;
	int32_t x3 = INT32_MAX;
	uint8_t x4 = 36U;
	int32_t t0 = 634;

    t0 = ((x1<<(x2==x3))+x4);

    if (t0 != 163) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x7 = -1;
	int32_t x8 = INT32_MIN;
	volatile uint32_t t1 = 139524815U;

    t1 = ((x5<<(x6==x7))+x8);

    if (t1 != 2237576741U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = 0LL;
	int64_t x10 = INT64_MIN;
	int16_t x11 = INT16_MIN;
	static int8_t x12 = -1;
	int64_t t2 = 159005LL;

    t2 = ((x9<<(x10==x11))+x12);

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 4011512U;
	int16_t x14 = -1;
	int8_t x15 = -1;
	int16_t x16 = -1;
	static uint32_t t3 = 170977182U;

    t3 = ((x13<<(x14==x15))+x16);

    if (t3 != 8023023U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x18 = INT8_MIN;
	uint32_t x20 = 1642574U;
	volatile uint32_t t4 = 3939U;

    t4 = ((x17<<(x18==x19))+x20);

    if (t4 != 1643447U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 4799U;
	static uint16_t x23 = 1U;
	static volatile uint64_t t5 = 85676LLU;

    t5 = ((x21<<(x22==x23))+x24);

    if (t5 != 4798LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x26 = -1;
	int8_t x27 = INT8_MIN;
	static uint8_t x28 = 93U;
	volatile int32_t t6 = 37245;

    t6 = ((x25<<(x26==x27))+x28);

    if (t6 != 1787) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x29 = 121507788808331LLU;
	int64_t x30 = INT64_MIN;
	int32_t x31 = -6405445;
	uint32_t x32 = UINT32_MAX;
	uint64_t t7 = 193574039218LLU;

    t7 = ((x29<<(x30==x31))+x32);

    if (t7 != 121512083775626LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = INT32_MAX;
	static int64_t x34 = INT64_MIN;
	volatile uint64_t x35 = 7593377117611014207LLU;
	uint64_t x36 = UINT64_MAX;
	uint64_t t8 = 435861LLU;

    t8 = ((x33<<(x34==x35))+x36);

    if (t8 != 2147483646LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x49 = UINT8_MAX;
	static int64_t x50 = -145339348398LL;
	volatile int8_t x51 = INT8_MIN;
	volatile int16_t x52 = INT16_MIN;
	volatile int32_t t9 = -19;

    t9 = ((x49<<(x50==x51))+x52);

    if (t9 != -32513) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x57 = UINT8_MAX;
	uint16_t x59 = UINT16_MAX;
	static uint16_t x60 = 0U;
	volatile int32_t t10 = 507714834;

    t10 = ((x57<<(x58==x59))+x60);

    if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x61 = INT32_MAX;
	static int32_t x62 = 6869600;
	static volatile int32_t x63 = INT32_MIN;
	uint64_t x64 = UINT64_MAX;
	volatile uint64_t t11 = 146042278786069514LLU;

    t11 = ((x61<<(x62==x63))+x64);

    if (t11 != 2147483646LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x68 = UINT32_MAX;
	volatile int64_t t12 = -8374265264561LL;

    t12 = ((x65<<(x66==x67))+x68);

    if (t12 != 4295049266LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x69 = UINT16_MAX;
	volatile uint32_t x70 = 60526U;
	uint64_t x72 = 213631LLU;

    t13 = ((x69<<(x70==x71))+x72);

    if (t13 != 279166LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x81 = UINT64_MAX;
	int64_t x82 = INT64_MIN;
	uint32_t x83 = 12292836U;
	volatile int64_t x84 = -1LL;
	volatile uint64_t t14 = 6338883897938LLU;

    t14 = ((x81<<(x82==x83))+x84);

    if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int8_t x101 = INT8_MAX;
	static int64_t x102 = INT64_MAX;
	uint8_t x103 = 0U;
	int32_t x104 = 2253668;
	volatile int32_t t15 = 41931838;

    t15 = ((x101<<(x102==x103))+x104);

    if (t15 != 2253795) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x109 = 50358075;
	int64_t x110 = INT64_MAX;
	volatile uint16_t x111 = 15869U;
	static uint8_t x112 = UINT8_MAX;

    t16 = ((x109<<(x110==x111))+x112);

    if (t16 != 50358330) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x130 = INT8_MIN;
	uint8_t x131 = UINT8_MAX;
	int32_t x132 = INT32_MAX;
	volatile uint32_t t17 = 29634U;

    t17 = ((x129<<(x130==x131))+x132);

    if (t17 != 2147483648U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x137 = 4U;
	int8_t x138 = INT8_MAX;
	int16_t x139 = -14476;
	int32_t x140 = -1;

    t18 = ((x137<<(x138==x139))+x140);

    if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x141 = 1431U;
	uint32_t x142 = 9585927U;
	static int16_t x143 = -1;
	volatile uint8_t x144 = 1U;
	volatile int32_t t19 = 2151419;

    t19 = ((x141<<(x142==x143))+x144);

    if (t19 != 1432) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x147 = INT16_MIN;
	uint64_t t20 = 34857334507LLU;

    t20 = ((x145<<(x146==x147))+x148);

    if (t20 != 13LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x152 = 2LLU;
	volatile uint64_t t21 = 7775987386380538633LLU;

    t21 = ((x149<<(x150==x151))+x152);

    if (t21 != 1124049874LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x153 = INT8_MAX;
	int16_t x154 = -23;
	int32_t x155 = 55067687;
	static volatile int32_t t22 = 4499;

    t22 = ((x153<<(x154==x155))+x156);

    if (t22 != -2147483521) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x173 = INT16_MAX;
	int64_t x174 = INT64_MIN;
	int8_t x176 = 2;
	volatile int32_t t23 = 141383628;

    t23 = ((x173<<(x174==x175))+x176);

    if (t23 != 32769) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x177 = UINT8_MAX;
	int64_t x180 = -83550LL;

    t24 = ((x177<<(x178==x179))+x180);

    if (t24 != -83295LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x181 = INT16_MAX;
	volatile uint64_t x182 = UINT64_MAX;
	int32_t x183 = INT32_MIN;
	uint8_t x184 = 2U;
	int32_t t25 = -109;

    t25 = ((x181<<(x182==x183))+x184);

    if (t25 != 32769) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x185 = 10;
	int16_t x187 = 122;
	static int16_t x188 = 296;
	volatile int32_t t26 = -430;

    t26 = ((x185<<(x186==x187))+x188);

    if (t26 != 306) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x189 = 0U;
	volatile int64_t x190 = 4132248135157LL;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t27 = 3952;

    t27 = ((x189<<(x190==x191))+x192);

    if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x193 = 33U;
	int64_t x194 = INT64_MAX;
	uint8_t x195 = 5U;
	int32_t x196 = -1;
	int32_t t28 = 103;

    t28 = ((x193<<(x194==x195))+x196);

    if (t28 != 32) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x197 = INT8_MAX;
	int8_t x198 = -1;
	static int32_t x199 = INT32_MAX;
	int16_t x200 = 32;
	volatile int32_t t29 = -44469;

    t29 = ((x197<<(x198==x199))+x200);

    if (t29 != 159) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x206 = 18931927452932LL;
	int16_t x207 = -11882;
	uint64_t t30 = 34235582813318728LLU;

    t30 = ((x205<<(x206==x207))+x208);

    if (t30 != 114937LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x217 = INT16_MAX;
	uint64_t x218 = 491316LLU;
	volatile uint8_t x219 = 3U;
	int64_t x220 = -65483790LL;
	volatile int64_t t31 = -35568351523765LL;

    t31 = ((x217<<(x218==x219))+x220);

    if (t31 != -65451023LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x225 = 2;
	int8_t x227 = 12;

    t32 = ((x225<<(x226==x227))+x228);

    if (t32 != -2147483646) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x241 = 146875U;
	int16_t x242 = 3;
	static int8_t x243 = 3;
	uint16_t x244 = UINT16_MAX;
	static uint32_t t33 = 3339066U;

    t33 = ((x241<<(x242==x243))+x244);

    if (t33 != 359285U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x245 = 14705852909LLU;
	uint16_t x247 = 192U;
	int8_t x248 = INT8_MIN;
	volatile uint64_t t34 = 27391LLU;

    t34 = ((x245<<(x246==x247))+x248);

    if (t34 != 14705852781LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x253 = UINT16_MAX;
	int16_t x254 = 197;
	int16_t x255 = 0;
	int32_t x256 = 2415911;
	volatile int32_t t35 = -725031372;

    t35 = ((x253<<(x254==x255))+x256);

    if (t35 != 2481446) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x257 = UINT64_MAX;
	int16_t x258 = -1;
	uint8_t x260 = 76U;
	volatile uint64_t t36 = 168LLU;

    t36 = ((x257<<(x258==x259))+x260);

    if (t36 != 75LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x265 = 224U;
	int32_t x266 = INT32_MAX;
	static volatile int64_t x267 = -1LL;
	int64_t t37 = -13772LL;

    t37 = ((x265<<(x266==x267))+x268);

    if (t37 != -9223372036854775584LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x273 = UINT64_MAX;
	volatile int32_t x274 = INT32_MAX;
	int64_t x276 = -1LL;
	volatile uint64_t t38 = 344274664LLU;

    t38 = ((x273<<(x274==x275))+x276);

    if (t38 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x286 = INT32_MAX;
	volatile uint32_t x287 = 1156790U;
	uint32_t x288 = UINT32_MAX;
	static uint64_t t39 = 235620347LLU;

    t39 = ((x285<<(x286==x287))+x288);

    if (t39 != 4497939902LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x293 = UINT64_MAX;
	int8_t x294 = INT8_MIN;
	int8_t x296 = INT8_MAX;
	volatile uint64_t t40 = 3LLU;

    t40 = ((x293<<(x294==x295))+x296);

    if (t40 != 126LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x313 = 310;
	static uint32_t x314 = 12491U;
	static int32_t x315 = 34;
	int16_t x316 = -1;
	int32_t t41 = 122;

    t41 = ((x313<<(x314==x315))+x316);

    if (t41 != 309) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x317 = 60255291U;
	int64_t x318 = INT64_MIN;
	int8_t x320 = -1;
	static uint32_t t42 = 23534919U;

    t42 = ((x317<<(x318==x319))+x320);

    if (t42 != 60255290U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x322 = -9;
	uint16_t x324 = 120U;
	uint32_t t43 = 158437411U;

    t43 = ((x321<<(x322==x323))+x324);

    if (t43 != 119U) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x340 = -1;

    t44 = ((x337<<(x338==x339))+x340);

    if (t44 != 57) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x357 = INT64_MAX;
	static int64_t x359 = -27563LL;
	int32_t x360 = -1;
	static volatile int64_t t45 = 750LL;

    t45 = ((x357<<(x358==x359))+x360);

    if (t45 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x361 = UINT8_MAX;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t46 = -4544;

    t46 = ((x361<<(x362==x363))+x364);

    if (t46 != 510) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x365 = UINT32_MAX;
	uint32_t x366 = 5320397U;
	static int16_t x367 = INT16_MAX;
	static uint32_t x368 = UINT32_MAX;
	volatile uint32_t t47 = 3643U;

    t47 = ((x365<<(x366==x367))+x368);

    if (t47 != 4294967294U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x369 = UINT64_MAX;
	int8_t x370 = INT8_MIN;
	int16_t x372 = -61;
	volatile uint64_t t48 = 11617LLU;

    t48 = ((x369<<(x370==x371))+x372);

    if (t48 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x374 = -1;
	int8_t x375 = -1;
	int32_t x376 = INT32_MAX;

    t49 = ((x373<<(x374==x375))+x376);

    if (t49 != 2251963835U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x381 = 2;
	static int64_t x382 = INT64_MAX;
	uint32_t x384 = 102U;

    t50 = ((x381<<(x382==x383))+x384);

    if (t50 != 106U) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x397 = 9045LL;
	uint64_t x398 = 272097367594077LLU;
	static int8_t x399 = -1;
	static int8_t x400 = -1;

    t51 = ((x397<<(x398==x399))+x400);

    if (t51 != 9044LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x401 = 66U;
	uint64_t x402 = 1057302669871LLU;
	int8_t x403 = -1;
	static int8_t x404 = 3;
	volatile int32_t t52 = 18174;

    t52 = ((x401<<(x402==x403))+x404);

    if (t52 != 69) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x405 = 20;
	int16_t x406 = -1;
	static uint16_t x407 = UINT16_MAX;
	volatile int16_t x408 = INT16_MIN;
	int32_t t53 = 624;

    t53 = ((x405<<(x406==x407))+x408);

    if (t53 != -32748) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x417 = 7;
	int64_t x418 = 16859855880LL;
	static uint8_t x419 = UINT8_MAX;
	int64_t x420 = -1LL;
	volatile int64_t t54 = 1284015LL;

    t54 = ((x417<<(x418==x419))+x420);

    if (t54 != 6LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x422 = INT32_MIN;
	int64_t x423 = -148LL;
	volatile int64_t t55 = 2240867341534825077LL;

    t55 = ((x421<<(x422==x423))+x424);

    if (t55 != 9223372036854775779LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x425 = 11531;
	volatile uint8_t x426 = 4U;
	uint16_t x427 = 3879U;
	static volatile uint64_t t56 = 1941076LLU;

    t56 = ((x425<<(x426==x427))+x428);

    if (t56 != 73622201577LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x429 = INT16_MAX;
	volatile int32_t x430 = -23493;
	int64_t x432 = INT64_MIN;
	volatile int64_t t57 = 64747085LL;

    t57 = ((x429<<(x430==x431))+x432);

    if (t57 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x435 = 5869;
	static int8_t x436 = INT8_MIN;

    t58 = ((x433<<(x434==x435))+x436);

    if (t58 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint16_t x445 = UINT16_MAX;
	int64_t x446 = -369565LL;
	int32_t x447 = INT32_MIN;

    t59 = ((x445<<(x446==x447))+x448);

    if (t59 != -2147418113) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x453 = 16003LLU;
	static int32_t x454 = -1537;
	int32_t x455 = INT32_MAX;
	int32_t x456 = INT32_MIN;
	volatile uint64_t t60 = 2440LLU;

    t60 = ((x453<<(x454==x455))+x456);

    if (t60 != 18446744071562083971LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x462 = UINT64_MAX;
	int64_t x463 = INT64_MIN;
	static uint8_t x464 = 5U;

    t61 = ((x461<<(x462==x463))+x464);

    if (t61 != 410053333U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x465 = 1631897397LLU;
	int16_t x466 = INT16_MIN;
	uint32_t x467 = 3U;
	static volatile int64_t x468 = -1LL;
	volatile uint64_t t62 = 6LLU;

    t62 = ((x465<<(x466==x467))+x468);

    if (t62 != 1631897396LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x477 = 775;
	uint32_t x479 = 49078037U;
	uint32_t x480 = UINT32_MAX;
	uint32_t t63 = 29533U;

    t63 = ((x477<<(x478==x479))+x480);

    if (t63 != 774U) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x485 = INT16_MAX;
	int16_t x486 = INT16_MIN;
	uint64_t x487 = 46267LLU;
	int8_t x488 = INT8_MIN;
	int32_t t64 = 785580970;

    t64 = ((x485<<(x486==x487))+x488);

    if (t64 != 32639) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x489 = UINT16_MAX;
	int8_t x491 = 1;
	static int32_t t65 = 27;

    t65 = ((x489<<(x490==x491))+x492);

    if (t65 != 65407) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x493 = 20;
	int32_t x494 = INT32_MAX;
	int64_t x495 = -1542LL;
	static volatile int32_t x496 = -26631434;
	volatile int32_t t66 = 3175;

    t66 = ((x493<<(x494==x495))+x496);

    if (t66 != -26631414) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x497 = 462U;
	static volatile uint64_t x498 = 5458334229064928LLU;
	static uint8_t x499 = 1U;

    t67 = ((x497<<(x498==x499))+x500);

    if (t67 != 589U) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x525 = 126U;
	volatile int64_t x526 = INT64_MIN;
	int8_t x527 = -1;
	volatile uint32_t x528 = 22103U;
	uint32_t t68 = 235U;

    t68 = ((x525<<(x526==x527))+x528);

    if (t68 != 22229U) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x529 = INT16_MAX;
	uint16_t x530 = UINT16_MAX;
	uint32_t x531 = 149U;
	int8_t x532 = 58;
	volatile int32_t t69 = 318;

    t69 = ((x529<<(x530==x531))+x532);

    if (t69 != 32825) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x545 = 27U;
	static int64_t x546 = 356049690023375583LL;
	uint8_t x548 = UINT8_MAX;
	static volatile int32_t t70 = -901960709;

    t70 = ((x545<<(x546==x547))+x548);

    if (t70 != 282) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x549 = 0LL;
	int16_t x550 = 336;
	uint32_t x551 = 5028076U;
	int16_t x552 = INT16_MIN;

    t71 = ((x549<<(x550==x551))+x552);

    if (t71 != -32768LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x566 = 2U;
	volatile int16_t x567 = 379;
	uint64_t x568 = UINT64_MAX;
	uint64_t t72 = 62401232215LLU;

    t72 = ((x565<<(x566==x567))+x568);

    if (t72 != 19LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x569 = INT32_MAX;
	uint8_t x570 = 6U;
	int32_t x571 = INT32_MIN;
	volatile int64_t x572 = -1LL;
	int64_t t73 = -5566LL;

    t73 = ((x569<<(x570==x571))+x572);

    if (t73 != 2147483646LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x573 = UINT64_MAX;
	static volatile int16_t x574 = -1;
	int8_t x575 = INT8_MAX;
	volatile uint64_t x576 = 6748346549488LLU;
	uint64_t t74 = 5LLU;

    t74 = ((x573<<(x574==x575))+x576);

    if (t74 != 6748346549487LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x582 = UINT32_MAX;
	static int8_t x583 = INT8_MAX;
	int16_t x584 = INT16_MIN;
	volatile int64_t t75 = -2893750401449LL;

    t75 = ((x581<<(x582==x583))+x584);

    if (t75 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x590 = INT16_MIN;
	int16_t x591 = INT16_MAX;
	int16_t x592 = INT16_MIN;
	volatile int32_t t76 = 62;

    t76 = ((x589<<(x590==x591))+x592);

    if (t76 != 2147450879) { NG(); } else { ; }
	
}

void f77(void) {
    

    t77 = ((x593<<(x594==x595))+x596);

    if (t77 != -9223372036854376413LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x609 = 8;
	volatile uint8_t x610 = 0U;
	static int8_t x611 = INT8_MIN;
	volatile int32_t x612 = INT32_MIN;

    t78 = ((x609<<(x610==x611))+x612);

    if (t78 != -2147483640) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x613 = UINT16_MAX;
	static volatile int32_t t79 = 7562034;

    t79 = ((x613<<(x614==x615))+x616);

    if (t79 != 65316) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x625 = 42357864326LLU;
	volatile int32_t x626 = INT32_MAX;
	uint64_t x627 = UINT64_MAX;
	volatile int8_t x628 = 1;
	uint64_t t80 = 91798616LLU;

    t80 = ((x625<<(x626==x627))+x628);

    if (t80 != 42357864327LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x638 = INT32_MIN;
	static volatile uint32_t x639 = 181U;
	int32_t x640 = INT32_MIN;
	uint64_t t81 = 226684LLU;

    t81 = ((x637<<(x638==x639))+x640);

    if (t81 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x641 = 6U;
	int16_t x642 = INT16_MIN;
	int64_t x643 = -67097LL;

    t82 = ((x641<<(x642==x643))+x644);

    if (t82 != 9LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x646 = 81018915319393LLU;
	static int32_t x647 = -9;
	int8_t x648 = INT8_MIN;
	static volatile int32_t t83 = -117;

    t83 = ((x645<<(x646==x647))+x648);

    if (t83 != -126) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x658 = INT64_MAX;
	int8_t x659 = INT8_MAX;
	uint16_t x660 = 5250U;
	volatile int32_t t84 = -117594536;

    t84 = ((x657<<(x658==x659))+x660);

    if (t84 != 5505) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x661 = 1U;
	int32_t x664 = INT32_MIN;
	int32_t t85 = 2036;

    t85 = ((x661<<(x662==x663))+x664);

    if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x665 = 50963483LLU;
	volatile int32_t x666 = -149888008;
	int64_t x667 = INT64_MAX;
	uint8_t x668 = UINT8_MAX;
	volatile uint64_t t86 = 1LLU;

    t86 = ((x665<<(x666==x667))+x668);

    if (t86 != 50963738LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x677 = 0U;
	int32_t x678 = INT32_MIN;
	volatile uint16_t x679 = UINT16_MAX;
	int32_t x680 = -1;
	volatile int32_t t87 = -3;

    t87 = ((x677<<(x678==x679))+x680);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x681 = UINT8_MAX;
	static uint16_t x683 = 3615U;
	int32_t x684 = INT32_MIN;
	volatile int32_t t88 = 267;

    t88 = ((x681<<(x682==x683))+x684);

    if (t88 != -2147483393) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x694 = INT8_MIN;
	int64_t x695 = -24395230777LL;
	uint32_t x696 = 5U;

    t89 = ((x693<<(x694==x695))+x696);

    if (t89 != 6U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x697 = 41760721LLU;
	int16_t x699 = INT16_MAX;
	volatile uint64_t t90 = 24059022LLU;

    t90 = ((x697<<(x698==x699))+x700);

    if (t90 != 41760593LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x706 = INT16_MAX;
	uint32_t x708 = 90U;
	uint64_t t91 = 424792039633596LLU;

    t91 = ((x705<<(x706==x707))+x708);

    if (t91 != 12628LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x710 = -218274426LL;
	int64_t x711 = 119574126067LL;
	int16_t x712 = -14;

    t92 = ((x709<<(x710==x711))+x712);

    if (t92 != 241) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x717 = 1960992LL;
	static int16_t x718 = INT16_MIN;
	int8_t x719 = INT8_MAX;
	int8_t x720 = -5;
	volatile int64_t t93 = -181543299646690LL;

    t93 = ((x717<<(x718==x719))+x720);

    if (t93 != 1960987LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x729 = 26U;
	static int32_t x730 = INT32_MIN;
	uint16_t x731 = 15273U;
	volatile int32_t x732 = -12497;
	volatile int32_t t94 = -56319479;

    t94 = ((x729<<(x730==x731))+x732);

    if (t94 != -12471) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x733 = 1U;
	static int8_t x734 = -46;
	uint64_t x735 = UINT64_MAX;
	int8_t x736 = -1;
	int32_t t95 = 25041743;

    t95 = ((x733<<(x734==x735))+x736);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x741 = 8157569U;
	int64_t x742 = INT64_MAX;
	uint32_t x743 = 1618U;
	volatile int64_t x744 = INT64_MIN;
	volatile int64_t t96 = -29356331756326LL;

    t96 = ((x741<<(x742==x743))+x744);

    if (t96 != -9223372036846618239LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x749 = UINT64_MAX;
	int8_t x750 = -9;
	int32_t x751 = -1;
	int32_t x752 = -1;
	uint64_t t97 = 51596402114856LLU;

    t97 = ((x749<<(x750==x751))+x752);

    if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x758 = 12U;
	uint32_t x759 = UINT32_MAX;
	int32_t x760 = INT32_MIN;

    t98 = ((x757<<(x758==x759))+x760);

    if (t98 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x761 = 1U;
	int16_t x762 = -1;
	uint8_t x763 = 62U;
	int32_t x764 = INT32_MIN;

    t99 = ((x761<<(x762==x763))+x764);

    if (t99 != -2147483647) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x765 = 78U;
	int16_t x766 = 540;
	static int64_t x767 = -1LL;
	int32_t x768 = 210293;
	volatile uint32_t t100 = 7142586U;

    t100 = ((x765<<(x766==x767))+x768);

    if (t100 != 210371U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x769 = 20U;
	int64_t x770 = -2350131240LL;
	static uint32_t x771 = 1487515688U;
	int64_t x772 = INT64_MIN;
	int64_t t101 = 884980350310LL;

    t101 = ((x769<<(x770==x771))+x772);

    if (t101 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x774 = -1;
	int64_t x775 = INT64_MAX;
	volatile int32_t t102 = 607060;

    t102 = ((x773<<(x774==x775))+x776);

    if (t102 != 9) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x777 = 0;
	uint16_t x778 = 8U;
	int64_t x779 = INT64_MIN;
	int32_t x780 = -1;

    t103 = ((x777<<(x778==x779))+x780);

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x781 = 343598;
	static int64_t x782 = INT64_MIN;
	uint64_t x783 = 111884LLU;

    t104 = ((x781<<(x782==x783))+x784);

    if (t104 != 343609U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x785 = 52;
	static volatile uint32_t x786 = UINT32_MAX;
	uint16_t x788 = UINT16_MAX;
	int32_t t105 = -41418214;

    t105 = ((x785<<(x786==x787))+x788);

    if (t105 != 65587) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x793 = 2647U;
	int64_t x794 = INT64_MIN;
	uint32_t x795 = 82U;
	int16_t x796 = -1;
	int32_t t106 = 1001034;

    t106 = ((x793<<(x794==x795))+x796);

    if (t106 != 2646) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x797 = 77;
	int16_t x798 = INT16_MIN;
	int32_t x799 = -342437176;
	volatile int32_t t107 = -1963;

    t107 = ((x797<<(x798==x799))+x800);

    if (t107 != -51) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x806 = INT8_MIN;
	int64_t x807 = -1LL;
	uint64_t x808 = UINT64_MAX;
	uint64_t t108 = 78LLU;

    t108 = ((x805<<(x806==x807))+x808);

    if (t108 != 2147483646LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x809 = 447U;
	int8_t x810 = -19;
	volatile int64_t x811 = -1LL;
	uint16_t x812 = UINT16_MAX;
	volatile int32_t t109 = 1;

    t109 = ((x809<<(x810==x811))+x812);

    if (t109 != 65982) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x813 = 137761768U;
	int8_t x815 = -1;
	volatile int64_t x816 = INT64_MIN;
	int64_t t110 = 1216448699626828LL;

    t110 = ((x813<<(x814==x815))+x816);

    if (t110 != -9223372036717014040LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x817 = 0;
	volatile int8_t x818 = -1;
	volatile uint16_t x819 = 4760U;
	int32_t x820 = INT32_MIN;

    t111 = ((x817<<(x818==x819))+x820);

    if (t111 != INT32_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x822 = UINT8_MAX;
	volatile uint8_t x823 = 28U;
	int64_t t112 = -2356LL;

    t112 = ((x821<<(x822==x823))+x824);

    if (t112 != 38LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x825 = 1;
	int8_t x826 = INT8_MIN;
	int16_t x827 = -1;
	int8_t x828 = 2;

    t113 = ((x825<<(x826==x827))+x828);

    if (t113 != 3) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x829 = 68U;
	int32_t x830 = -1;
	int32_t x831 = -1;

    t114 = ((x829<<(x830==x831))+x832);

    if (t114 != 359LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x833 = 28;
	static uint64_t x834 = 253832672933176LLU;
	uint64_t x835 = UINT64_MAX;
	volatile int64_t t115 = -786912998LL;

    t115 = ((x833<<(x834==x835))+x836);

    if (t115 != 27LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x837 = UINT32_MAX;
	int16_t x839 = INT16_MAX;
	volatile int64_t x840 = -393094LL;

    t116 = ((x837<<(x838==x839))+x840);

    if (t116 != 4294574201LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x841 = INT16_MAX;
	uint32_t x842 = 1596134675U;
	uint8_t x843 = 0U;
	int8_t x844 = INT8_MAX;
	volatile int32_t t117 = 626916;

    t117 = ((x841<<(x842==x843))+x844);

    if (t117 != 32894) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x845 = 112U;
	int64_t x846 = INT64_MIN;
	volatile int16_t x847 = INT16_MAX;
	int16_t x848 = INT16_MIN;

    t118 = ((x845<<(x846==x847))+x848);

    if (t118 != -32656) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x850 = -1LL;
	uint8_t x851 = 0U;
	static int64_t x852 = INT64_MIN;
	int64_t t119 = -394412579927LL;

    t119 = ((x849<<(x850==x851))+x852);

    if (t119 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x857 = UINT64_MAX;
	static uint64_t x858 = UINT64_MAX;
	volatile uint32_t x859 = 15602514U;
	static uint64_t t120 = 475477491LLU;

    t120 = ((x857<<(x858==x859))+x860);

    if (t120 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x865 = UINT32_MAX;
	uint64_t x866 = UINT64_MAX;
	int64_t x867 = INT64_MIN;
	uint32_t t121 = 8036611U;

    t121 = ((x865<<(x866==x867))+x868);

    if (t121 != 32766U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x875 = INT8_MIN;
	volatile int64_t x876 = 2039353601507LL;
	volatile int64_t t122 = -70LL;

    t122 = ((x873<<(x874==x875))+x876);

    if (t122 != 2039353601556LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x881 = 0;
	int32_t x882 = -1;
	int64_t x883 = -3811727740865LL;
	uint32_t x884 = 7275U;
	uint32_t t123 = 1959812U;

    t123 = ((x881<<(x882==x883))+x884);

    if (t123 != 7275U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x897 = 0U;
	static int32_t x898 = 1471;
	int16_t x899 = -5;
	int32_t t124 = 950;

    t124 = ((x897<<(x898==x899))+x900);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x901 = INT16_MAX;
	static int8_t x902 = INT8_MIN;
	volatile int16_t x903 = -3;
	static int32_t x904 = -44694944;
	int32_t t125 = 8468;

    t125 = ((x901<<(x902==x903))+x904);

    if (t125 != -44662177) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint32_t x905 = 113990367U;
	int32_t x907 = INT32_MIN;
	volatile uint32_t t126 = 17U;

    t126 = ((x905<<(x906==x907))+x908);

    if (t126 != 113990494U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x909 = UINT64_MAX;
	static volatile int32_t x910 = -1;
	static volatile uint64_t t127 = 17566689084893LLU;

    t127 = ((x909<<(x910==x911))+x912);

    if (t127 != 32766LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x917 = 62;
	static volatile uint16_t x918 = 230U;
	int64_t x919 = 9437953801834768LL;
	volatile uint64_t t128 = 117251405LLU;

    t128 = ((x917<<(x918==x919))+x920);

    if (t128 != 43084466055689553LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x921 = UINT8_MAX;
	uint32_t x922 = 1U;
	uint8_t x923 = 13U;

    t129 = ((x921<<(x922==x923))+x924);

    if (t129 != 510) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x925 = 56148066U;
	static int32_t x926 = INT32_MIN;
	uint32_t x927 = 1272890U;
	volatile uint32_t t130 = 479U;

    t130 = ((x925<<(x926==x927))+x928);

    if (t130 != 56148070U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x933 = 1;
	volatile int32_t x935 = -1;
	uint32_t x936 = UINT32_MAX;
	uint32_t t131 = 107702U;

    t131 = ((x933<<(x934==x935))+x936);

    if (t131 != 1U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x937 = INT16_MAX;
	int16_t x938 = -1;
	uint8_t x939 = 1U;
	int64_t x940 = INT64_MIN;
	static int64_t t132 = 2LL;

    t132 = ((x937<<(x938==x939))+x940);

    if (t132 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x946 = INT8_MIN;

    t133 = ((x945<<(x946==x947))+x948);

    if (t133 != 2853U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x961 = 1157U;
	int32_t x962 = -15;
	uint64_t x963 = 354607040676703341LLU;
	uint16_t x964 = 1918U;
	int32_t t134 = 1;

    t134 = ((x961<<(x962==x963))+x964);

    if (t134 != 3075) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x967 = -1;
	static int8_t x968 = INT8_MIN;

    t135 = ((x965<<(x966==x967))+x968);

    if (t135 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int8_t x973 = INT8_MAX;
	int64_t x974 = INT64_MIN;
	uint32_t x976 = UINT32_MAX;
	volatile uint32_t t136 = 106477U;

    t136 = ((x973<<(x974==x975))+x976);

    if (t136 != 126U) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x977 = INT32_MAX;
	int8_t x979 = INT8_MAX;
	static uint32_t x980 = 1121207U;
	volatile uint32_t t137 = 877255U;

    t137 = ((x977<<(x978==x979))+x980);

    if (t137 != 2148604854U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x981 = INT64_MAX;
	static volatile int64_t x983 = INT64_MIN;
	int32_t x984 = INT32_MIN;
	static int64_t t138 = -1LL;

    t138 = ((x981<<(x982==x983))+x984);

    if (t138 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x993 = 265U;
	uint64_t x994 = 16996278LLU;
	static int32_t x996 = 5;
	volatile int32_t t139 = 6162;

    t139 = ((x993<<(x994==x995))+x996);

    if (t139 != 270) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x997 = 1189199022032701419LLU;
	int8_t x998 = INT8_MAX;
	int64_t x999 = INT64_MIN;
	volatile int8_t x1000 = INT8_MIN;
	uint64_t t140 = 25238804804203770LLU;

    t140 = ((x997<<(x998==x999))+x1000);

    if (t140 != 1189199022032701291LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x1005 = 211887076062726993LLU;
	static int32_t x1006 = 27;
	int64_t x1008 = 0LL;
	volatile uint64_t t141 = 4348219827055057LLU;

    t141 = ((x1005<<(x1006==x1007))+x1008);

    if (t141 != 211887076062726993LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x1009 = 1;
	static volatile uint16_t x1011 = 41U;
	int8_t x1012 = -1;
	volatile int32_t t142 = -27;

    t142 = ((x1009<<(x1010==x1011))+x1012);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x1021 = INT64_MAX;
	int8_t x1022 = INT8_MIN;
	int64_t x1024 = -74LL;
	int64_t t143 = -196464846LL;

    t143 = ((x1021<<(x1022==x1023))+x1024);

    if (t143 != 9223372036854775733LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x1026 = -697054LL;
	volatile int64_t x1027 = 3708440753102837377LL;
	int32_t x1028 = 47980;
	static uint32_t t144 = 259U;

    t144 = ((x1025<<(x1026==x1027))+x1028);

    if (t144 != 47979U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x1033 = 225305460695427030LLU;
	volatile int32_t x1034 = INT32_MIN;
	int32_t x1035 = INT32_MIN;
	uint64_t x1036 = 106562843599LLU;
	uint64_t t145 = 53708258150348LLU;

    t145 = ((x1033<<(x1034==x1035))+x1036);

    if (t145 != 450611027953697659LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x1073 = 32058;
	uint32_t x1074 = 131U;
	uint32_t x1075 = 184U;
	volatile uint32_t x1076 = UINT32_MAX;

    t146 = ((x1073<<(x1074==x1075))+x1076);

    if (t146 != 32057U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x1078 = INT32_MIN;
	volatile int16_t x1079 = INT16_MIN;
	static int64_t x1080 = INT64_MIN;

    t147 = ((x1077<<(x1078==x1079))+x1080);

    if (t147 != -9223372036854772064LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1082 = -1;
	uint64_t x1084 = UINT64_MAX;

    t148 = ((x1081<<(x1082==x1083))+x1084);

    if (t148 != 22LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x1085 = 5U;
	uint16_t x1086 = 7399U;
	int32_t x1087 = INT32_MIN;
	uint64_t x1088 = 14619729609289415LLU;
	volatile uint64_t t149 = 1LLU;

    t149 = ((x1085<<(x1086==x1087))+x1088);

    if (t149 != 14619729609289420LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1093 = 1993U;
	uint8_t x1094 = 1U;
	uint16_t x1095 = 1U;
	int32_t x1096 = -2;
	volatile uint32_t t150 = 684937561U;

    t150 = ((x1093<<(x1094==x1095))+x1096);

    if (t150 != 3984U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x1097 = 1U;
	int8_t x1098 = INT8_MIN;
	static int32_t x1099 = 26;
	int64_t x1100 = 3LL;
	volatile int64_t t151 = -271961646336LL;

    t151 = ((x1097<<(x1098==x1099))+x1100);

    if (t151 != 4LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1101 = UINT64_MAX;
	int16_t x1104 = INT16_MAX;
	static uint64_t t152 = 8LLU;

    t152 = ((x1101<<(x1102==x1103))+x1104);

    if (t152 != 32766LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x1105 = 20566LLU;
	volatile int32_t x1106 = INT32_MIN;
	volatile uint64_t x1107 = UINT64_MAX;
	int8_t x1108 = -8;
	volatile uint64_t t153 = 4LLU;

    t153 = ((x1105<<(x1106==x1107))+x1108);

    if (t153 != 20558LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x1109 = 119246625624353678LLU;
	volatile int8_t x1110 = 0;
	static int8_t x1112 = INT8_MAX;
	volatile uint64_t t154 = 74908LLU;

    t154 = ((x1109<<(x1110==x1111))+x1112);

    if (t154 != 119246625624353805LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x1118 = 449014834;
	int8_t x1120 = 59;

    t155 = ((x1117<<(x1118==x1119))+x1120);

    if (t155 != 21988810) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x1121 = 1848LL;
	int64_t x1122 = 1208817024863485LL;
	int64_t x1124 = 119088580668574987LL;

    t156 = ((x1121<<(x1122==x1123))+x1124);

    if (t156 != 119088580668576835LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x1126 = UINT8_MAX;
	int64_t x1127 = -124797026760374LL;
	static int16_t x1128 = INT16_MIN;

    t157 = ((x1125<<(x1126==x1127))+x1128);

    if (t157 != -32767) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x1130 = -218043;
	int8_t x1131 = INT8_MAX;
	volatile int64_t x1132 = INT64_MIN;
	static volatile int64_t t158 = -328726468357LL;

    t158 = ((x1129<<(x1130==x1131))+x1132);

    if (t158 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x1133 = 6U;
	uint32_t x1135 = 390960U;
	int64_t x1136 = 35007LL;
	static volatile int64_t t159 = -739839400560111LL;

    t159 = ((x1133<<(x1134==x1135))+x1136);

    if (t159 != 35013LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1137 = 107LL;
	static int32_t x1139 = 3;
	int64_t x1140 = -1831575331448LL;
	int64_t t160 = 18892069336408LL;

    t160 = ((x1137<<(x1138==x1139))+x1140);

    if (t160 != -1831575331341LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x1141 = 1197U;
	int64_t x1142 = INT64_MAX;
	int16_t x1143 = -1;
	int16_t x1144 = -1;
	static volatile int32_t t161 = -38;

    t161 = ((x1141<<(x1142==x1143))+x1144);

    if (t161 != 1196) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x1145 = 0U;
	int64_t x1146 = INT64_MIN;
	int64_t x1147 = -1LL;
	int32_t x1148 = -5;

    t162 = ((x1145<<(x1146==x1147))+x1148);

    if (t162 != -5) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x1149 = 266629987U;
	int64_t x1151 = -2784LL;
	volatile uint64_t t163 = 462LLU;

    t163 = ((x1149<<(x1150==x1151))+x1152);

    if (t163 != 1659037384602905LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x1157 = UINT64_MAX;
	volatile uint64_t x1158 = 440591LLU;
	int8_t x1159 = -1;
	int64_t x1160 = -1LL;
	static uint64_t t164 = 1537692630403LLU;

    t164 = ((x1157<<(x1158==x1159))+x1160);

    if (t164 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x1166 = 14U;
	uint32_t x1167 = 1397707523U;
	int64_t x1168 = INT64_MIN;
	volatile uint64_t t165 = 466507LLU;

    t165 = ((x1165<<(x1166==x1167))+x1168);

    if (t165 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x1169 = 272U;
	int8_t x1170 = INT8_MIN;
	uint32_t t166 = 2752542U;

    t166 = ((x1169<<(x1170==x1171))+x1172);

    if (t166 != 4294934800U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x1177 = INT32_MAX;
	static int32_t x1179 = 3833;
	uint32_t t167 = 124630103U;

    t167 = ((x1177<<(x1178==x1179))+x1180);

    if (t167 != 2147483744U) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x1181 = 1493107116LLU;
	int16_t x1182 = INT16_MAX;
	int8_t x1183 = INT8_MAX;
	uint64_t x1184 = 13189049625226061LLU;
	uint64_t t168 = 2584778249015517LLU;

    t168 = ((x1181<<(x1182==x1183))+x1184);

    if (t168 != 13189051118333177LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x1185 = UINT32_MAX;
	static int32_t x1186 = -765289727;
	volatile int32_t x1187 = INT32_MIN;
	volatile uint32_t t169 = 1776339U;

    t169 = ((x1185<<(x1186==x1187))+x1188);

    if (t169 != 2147483646U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1189 = 2U;
	uint32_t x1190 = 16U;
	int8_t x1191 = INT8_MIN;
	uint32_t t170 = 57148U;

    t170 = ((x1189<<(x1190==x1191))+x1192);

    if (t170 != 4294877456U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1201 = 10LL;
	volatile uint32_t x1202 = 46242243U;
	int16_t x1203 = INT16_MIN;
	static volatile int64_t t171 = -3955318783260325LL;

    t171 = ((x1201<<(x1202==x1203))+x1204);

    if (t171 != 9LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x1205 = 12U;
	uint16_t x1206 = 53U;
	int32_t t172 = -175405;

    t172 = ((x1205<<(x1206==x1207))+x1208);

    if (t172 != 23) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1209 = 84;
	volatile int8_t x1210 = INT8_MAX;
	volatile int32_t x1212 = INT32_MIN;
	static volatile int32_t t173 = -17521209;

    t173 = ((x1209<<(x1210==x1211))+x1212);

    if (t173 != -2147483564) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x1213 = UINT16_MAX;
	uint32_t x1214 = UINT32_MAX;
	static volatile int16_t x1215 = 20;
	static uint64_t x1216 = 2026171299LLU;
	volatile uint64_t t174 = 1LLU;

    t174 = ((x1213<<(x1214==x1215))+x1216);

    if (t174 != 2026236834LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x1217 = 5506;
	uint8_t x1218 = UINT8_MAX;
	uint64_t x1219 = UINT64_MAX;
	int8_t x1220 = 1;
	volatile int32_t t175 = 30572881;

    t175 = ((x1217<<(x1218==x1219))+x1220);

    if (t175 != 5507) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1229 = INT32_MAX;
	int64_t x1230 = INT64_MIN;
	int8_t x1232 = INT8_MIN;
	static volatile int32_t t176 = 1514;

    t176 = ((x1229<<(x1230==x1231))+x1232);

    if (t176 != 2147483519) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x1233 = INT8_MAX;
	int16_t x1234 = INT16_MIN;
	volatile int32_t x1235 = INT32_MAX;
	volatile int64_t x1236 = INT64_MIN;
	volatile int64_t t177 = 26741132532LL;

    t177 = ((x1233<<(x1234==x1235))+x1236);

    if (t177 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x1237 = UINT32_MAX;
	uint16_t x1238 = 0U;
	uint32_t x1239 = UINT32_MAX;
	int32_t x1240 = -1;
	volatile uint32_t t178 = 13U;

    t178 = ((x1237<<(x1238==x1239))+x1240);

    if (t178 != 4294967294U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1241 = 120064536975702LL;
	static int16_t x1243 = INT16_MIN;
	volatile uint16_t x1244 = UINT16_MAX;
	static volatile int64_t t179 = -334186590565721137LL;

    t179 = ((x1241<<(x1242==x1243))+x1244);

    if (t179 != 240129074016939LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1249 = 57965106689772LLU;
	int8_t x1250 = 3;
	uint16_t x1252 = 1U;

    t180 = ((x1249<<(x1250==x1251))+x1252);

    if (t180 != 57965106689773LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1265 = 0U;
	volatile int64_t x1266 = INT64_MIN;
	static uint32_t x1267 = UINT32_MAX;
	volatile int8_t x1268 = INT8_MIN;
	volatile int32_t t181 = 1696465;

    t181 = ((x1265<<(x1266==x1267))+x1268);

    if (t181 != -128) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x1269 = 2U;
	int64_t x1270 = INT64_MAX;
	static int8_t x1271 = -1;
	uint8_t x1272 = 30U;
	volatile int32_t t182 = -25;

    t182 = ((x1269<<(x1270==x1271))+x1272);

    if (t182 != 32) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1274 = INT16_MIN;
	volatile int64_t x1275 = 11423550679594635LL;
	static uint32_t x1276 = UINT32_MAX;
	uint32_t t183 = 1U;

    t183 = ((x1273<<(x1274==x1275))+x1276);

    if (t183 != 2147483646U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1301 = 5568615869825383LL;
	int32_t x1302 = 960828074;
	uint8_t x1304 = 8U;
	int64_t t184 = 116107LL;

    t184 = ((x1301<<(x1302==x1303))+x1304);

    if (t184 != 5568615869825391LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint8_t x1305 = UINT8_MAX;
	int8_t x1306 = INT8_MIN;
	int32_t x1307 = INT32_MIN;
	static int16_t x1308 = INT16_MIN;
	volatile int32_t t185 = -506402988;

    t185 = ((x1305<<(x1306==x1307))+x1308);

    if (t185 != -32513) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint16_t x1313 = 21768U;
	uint8_t x1314 = UINT8_MAX;
	int32_t x1315 = 27;
	int32_t x1316 = 2080968;
	int32_t t186 = -757;

    t186 = ((x1313<<(x1314==x1315))+x1316);

    if (t186 != 2102736) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x1321 = 3U;
	volatile int32_t x1322 = -1;
	volatile int32_t x1323 = -1;
	static int16_t x1324 = -1293;
	volatile int32_t t187 = 215685;

    t187 = ((x1321<<(x1322==x1323))+x1324);

    if (t187 != -1287) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x1337 = 29836919U;
	static int64_t x1339 = -1LL;
	static int8_t x1340 = -1;
	volatile uint32_t t188 = 175804603U;

    t188 = ((x1337<<(x1338==x1339))+x1340);

    if (t188 != 29836918U) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x1349 = 1674474884500626885LL;
	volatile int32_t x1351 = INT32_MIN;
	static int16_t x1352 = -53;
	volatile int64_t t189 = 13711840LL;

    t189 = ((x1349<<(x1350==x1351))+x1352);

    if (t189 != 1674474884500626832LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1353 = UINT16_MAX;
	volatile int16_t x1354 = INT16_MAX;
	uint32_t x1355 = UINT32_MAX;

    t190 = ((x1353<<(x1354==x1355))+x1356);

    if (t190 != -2147418113) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1359 = -1;
	int32_t t191 = 82340;

    t191 = ((x1357<<(x1358==x1359))+x1360);

    if (t191 != -2147483646) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1362 = INT8_MIN;
	uint16_t x1363 = UINT16_MAX;
	uint16_t x1364 = 7184U;

    t192 = ((x1361<<(x1362==x1363))+x1364);

    if (t192 != 7183LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x1365 = INT16_MAX;
	int8_t x1367 = INT8_MIN;
	uint8_t x1368 = 7U;

    t193 = ((x1365<<(x1366==x1367))+x1368);

    if (t193 != 32774) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1369 = UINT32_MAX;
	int32_t x1372 = INT32_MIN;

    t194 = ((x1369<<(x1370==x1371))+x1372);

    if (t194 != 2147483647U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1377 = UINT8_MAX;
	static uint8_t x1378 = UINT8_MAX;
	volatile int64_t x1379 = INT64_MIN;
	static uint16_t x1380 = UINT16_MAX;

    t195 = ((x1377<<(x1378==x1379))+x1380);

    if (t195 != 65790) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x1385 = INT8_MAX;
	volatile int32_t x1386 = INT32_MIN;
	uint16_t x1388 = 61U;

    t196 = ((x1385<<(x1386==x1387))+x1388);

    if (t196 != 188) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1389 = 8689451033LLU;
	int16_t x1390 = -1;
	volatile int32_t x1391 = 0;
	volatile uint64_t t197 = 21418535073984319LLU;

    t197 = ((x1389<<(x1390==x1391))+x1392);

    if (t197 != 9223372045544226840LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1394 = UINT64_MAX;
	static int8_t x1395 = -8;
	static volatile int64_t x1396 = INT64_MIN;
	int64_t t198 = -109678LL;

    t198 = ((x1393<<(x1394==x1395))+x1396);

    if (t198 != -9223372036854442439LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1398 = 7U;
	volatile uint16_t x1399 = UINT16_MAX;

    t199 = ((x1397<<(x1398==x1399))+x1400);

    if (t199 != 19748LLU) { NG(); } else { ; }
	
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

