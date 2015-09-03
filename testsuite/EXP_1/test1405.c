#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x9 = INT16_MIN;
static volatile uint64_t t3 = UINT64_MAX;
uint32_t t4 = 27U;
volatile int32_t x28 = -7119;
int8_t x30 = INT8_MIN;
static int64_t x39 = INT64_MIN;
volatile uint32_t x41 = 327046U;
int32_t t10 = 2330269;
static volatile int64_t t11 = 1640036238LL;
uint32_t x49 = 655918U;
uint32_t x50 = 14990U;
static int32_t x53 = -960454;
uint64_t x59 = 3LLU;
int8_t x66 = INT8_MIN;
volatile int64_t x73 = -1LL;
uint32_t x77 = 6065569U;
static int32_t t20 = 3;
uint64_t t22 = 64898301580749764LLU;
volatile int8_t x94 = INT8_MIN;
volatile int32_t t23 = 8134497;
int32_t x98 = INT32_MIN;
int32_t x107 = -1;
uint32_t x117 = 65782U;
int64_t x119 = INT64_MIN;
uint64_t x121 = 811792649343075LLU;
volatile int64_t x133 = -58023712LL;
uint16_t x136 = 3U;
static volatile int32_t t32 = -99921;
uint64_t x140 = 848269064442603LLU;
static int64_t x143 = 81509077LL;
int32_t x145 = -1;
volatile int8_t x151 = INT8_MIN;
static volatile int32_t t36 = 14783794;
uint32_t x156 = 32848282U;
int64_t t37 = 864989630333298LL;
int8_t x158 = INT8_MIN;
int32_t x160 = -3773;
int64_t t39 = -5LL;
static int8_t x165 = INT8_MAX;
int8_t x168 = INT8_MIN;
uint32_t x169 = UINT32_MAX;
int8_t x176 = INT8_MIN;
static volatile uint64_t x180 = UINT64_MAX;
volatile uint64_t t43 = 19LLU;
static volatile int64_t x186 = INT64_MAX;
int64_t x207 = INT64_MIN;
int8_t x214 = INT8_MIN;
int32_t t52 = -178;
int8_t x224 = INT8_MAX;
uint8_t x225 = 30U;
int32_t x227 = INT32_MAX;
volatile int64_t x234 = INT64_MIN;
static int32_t x236 = 4;
uint32_t x240 = 88592U;
int64_t x246 = -1LL;
static uint32_t x247 = 467556085U;
static int8_t x252 = 0;
int64_t x260 = INT64_MIN;
int16_t x261 = INT16_MIN;
int16_t x275 = 497;
volatile uint64_t x276 = 0LLU;
volatile int8_t x278 = INT8_MIN;
int32_t x299 = INT32_MAX;
volatile int32_t t70 = 377710;
uint64_t x301 = UINT64_MAX;
uint64_t x304 = 19821372LLU;
volatile uint32_t x315 = UINT32_MAX;
int8_t x318 = -1;
uint8_t x319 = 109U;
volatile int16_t x321 = INT16_MIN;
volatile uint16_t x323 = 123U;
int64_t x324 = INT64_MIN;
int32_t x328 = INT32_MAX;
volatile int8_t x341 = -1;
int8_t x356 = INT8_MAX;
static int32_t t83 = -554035;
static int16_t x359 = INT16_MIN;
int8_t x362 = INT8_MIN;
volatile int32_t x366 = 555436;
volatile int64_t x368 = INT64_MIN;
volatile int8_t x373 = INT8_MIN;
int8_t x377 = INT8_MIN;
volatile int8_t x378 = INT8_MIN;
int64_t x379 = 2LL;
int16_t x382 = -5283;
int32_t x395 = -1;
int8_t x419 = INT8_MIN;
volatile int32_t t97 = 262152509;
static int8_t x428 = -1;


void f0(void) {
	volatile uint64_t x1 = 252744869LLU;
	volatile int64_t x2 = INT64_MAX;
	uint32_t x3 = 57108909U;
	int16_t x4 = INT16_MAX;
	static uint32_t t0 = 1190114U;

	t0 = (((x1<x2)%x3)+x4);

	if (t0 != 32768U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	int32_t x6 = 430250598;
	volatile int32_t x7 = INT32_MIN;
	uint64_t x8 = 54737989LLU;
	volatile uint64_t t1 = 12771782615LLU;

	t1 = (((x5<x6)%x7)+x8);

	if (t1 != 54737990LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	volatile int8_t x11 = -1;
	volatile int32_t x12 = INT32_MIN;
	volatile int32_t t2 = INT32_MIN;

	t2 = (((x9<x10)%x11)+x12);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 0;
	int8_t x14 = INT8_MIN;
	uint64_t x15 = 88107622612LLU;
	int16_t x16 = -1;

	t3 = (((x13<x14)%x15)+x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	volatile uint64_t x18 = UINT64_MAX;
	int32_t x19 = INT32_MIN;
	static uint32_t x20 = UINT32_MAX;

	t4 = (((x17<x18)%x19)+x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -6;
	uint16_t x22 = UINT16_MAX;
	volatile int32_t x23 = -1;
	uint32_t x24 = 321096U;
	uint32_t t5 = 608085118U;

	t5 = (((x21<x22)%x23)+x24);

	if (t5 != 321096U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int8_t x26 = INT8_MAX;
	int64_t x27 = INT64_MIN;
	int64_t t6 = -1402441LL;

	t6 = (((x25<x26)%x27)+x28);

	if (t6 != -7119LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static int64_t x31 = INT64_MAX;
	int16_t x32 = INT16_MIN;
	volatile int64_t t7 = -131034918603396LL;

	t7 = (((x29<x30)%x31)+x32);

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -4;
	static uint16_t x34 = UINT16_MAX;
	int32_t x35 = INT32_MIN;
	uint16_t x36 = UINT16_MAX;
	static volatile int32_t t8 = -3;

	t8 = (((x33<x34)%x35)+x36);

	if (t8 != 65536) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int32_t x38 = INT32_MIN;
	uint64_t x40 = 18LLU;
	static volatile uint64_t t9 = 154LLU;

	t9 = (((x37<x38)%x39)+x40);

	if (t9 != 19LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x42 = 17980U;
	uint8_t x43 = 59U;
	uint16_t x44 = 14819U;

	t10 = (((x41<x42)%x43)+x44);

	if (t10 != 14819) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	volatile int16_t x46 = INT16_MIN;
	int64_t x47 = INT64_MIN;
	uint32_t x48 = 400828611U;

	t11 = (((x45<x46)%x47)+x48);

	if (t11 != 400828611LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x51 = UINT32_MAX;
	int16_t x52 = 1;
	uint32_t t12 = 794938U;

	t12 = (((x49<x50)%x51)+x52);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 21LLU;
	volatile int8_t x55 = INT8_MIN;
	volatile int32_t x56 = -488;
	static int32_t t13 = -18;

	t13 = (((x53<x54)%x55)+x56);

	if (t13 != -488) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	volatile int64_t x58 = -1LL;
	static volatile uint8_t x60 = 0U;
	uint64_t t14 = 731LLU;

	t14 = (((x57<x58)%x59)+x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 458813LLU;
	int8_t x62 = INT8_MAX;
	volatile uint8_t x63 = 4U;
	static uint64_t x64 = 178428338LLU;
	volatile uint64_t t15 = 10697856014636422LLU;

	t15 = (((x61<x62)%x63)+x64);

	if (t15 != 178428338LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 16U;
	uint32_t x67 = UINT32_MAX;
	uint64_t x68 = UINT64_MAX;
	static volatile uint64_t t16 = UINT64_MAX;

	t16 = (((x65<x66)%x67)+x68);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -1LL;
	int8_t x70 = INT8_MIN;
	int16_t x71 = -8500;
	int32_t x72 = INT32_MIN;
	int32_t t17 = INT32_MIN;

	t17 = (((x69<x70)%x71)+x72);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x74 = INT32_MIN;
	uint32_t x75 = 129466531U;
	static int64_t x76 = 436LL;
	static volatile int64_t t18 = -10210391904LL;

	t18 = (((x73<x74)%x75)+x76);

	if (t18 != 436LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = 5088;
	static uint64_t x79 = 7845921LLU;
	volatile int8_t x80 = INT8_MIN;
	volatile uint64_t t19 = 581065LLU;

	t19 = (((x77<x78)%x79)+x80);

	if (t19 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -1LL;
	static uint64_t x82 = 7933480386LLU;
	static volatile int32_t x83 = 2;
	int8_t x84 = -1;

	t20 = (((x81<x82)%x83)+x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = 34;
	static int32_t x86 = -1;
	static int8_t x87 = 21;
	volatile int64_t x88 = INT64_MIN;
	static int64_t t21 = INT64_MIN;

	t21 = (((x85<x86)%x87)+x88);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	volatile uint32_t x90 = 118733467U;
	volatile uint64_t x91 = 1467405937227295LLU;
	uint64_t x92 = 286470128960LLU;

	t22 = (((x89<x90)%x91)+x92);

	if (t22 != 286470128961LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MIN;
	uint16_t x95 = 2159U;
	static int8_t x96 = -1;

	t23 = (((x93<x94)%x95)+x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	uint32_t x99 = 812466U;
	volatile int32_t x100 = INT32_MAX;
	volatile uint32_t t24 = 2139141905U;

	t24 = (((x97<x98)%x99)+x100);

	if (t24 != 2147483647U) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = 3;
	int8_t x102 = -1;
	uint32_t x103 = 87256643U;
	int32_t x104 = INT32_MIN;
	uint32_t t25 = 2U;

	t25 = (((x101<x102)%x103)+x104);

	if (t25 != 2147483648U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 58350U;
	static int8_t x106 = -1;
	uint32_t x108 = 100U;
	volatile uint32_t t26 = 318U;

	t26 = (((x105<x106)%x107)+x108);

	if (t26 != 100U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	uint16_t x110 = 782U;
	static int8_t x111 = 14;
	int16_t x112 = 21;
	volatile int32_t t27 = 47290;

	t27 = (((x109<x110)%x111)+x112);

	if (t27 != 22) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -1;
	static int32_t x114 = INT32_MIN;
	volatile int16_t x115 = INT16_MIN;
	int16_t x116 = -1;
	int32_t t28 = 37;

	t28 = (((x113<x114)%x115)+x116);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = 131224;
	int64_t x120 = INT64_MIN;
	int64_t t29 = 1834037939326818020LL;

	t29 = (((x117<x118)%x119)+x120);

	if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = INT64_MIN;
	int16_t x123 = INT16_MAX;
	int16_t x124 = INT16_MAX;
	int32_t t30 = -28;

	t30 = (((x121<x122)%x123)+x124);

	if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MAX;
	volatile int8_t x126 = -1;
	int32_t x127 = INT32_MIN;
	volatile int64_t x128 = INT64_MAX;
	int64_t t31 = INT64_MAX;

	t31 = (((x125<x126)%x127)+x128);

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x134 = INT64_MAX;
	uint16_t x135 = 3281U;

	t32 = (((x133<x134)%x135)+x136);

	if (t32 != 4) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = -51970339LL;
	volatile uint16_t x138 = UINT16_MAX;
	int16_t x139 = 34;
	static volatile uint64_t t33 = 1LLU;

	t33 = (((x137<x138)%x139)+x140);

	if (t33 != 848269064442604LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = 57193586U;
	uint32_t x142 = 79689914U;
	static int8_t x144 = INT8_MIN;
	volatile int64_t t34 = -101LL;

	t34 = (((x141<x142)%x143)+x144);

	if (t34 != -127LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x146 = 159678864U;
	static volatile uint8_t x147 = UINT8_MAX;
	uint32_t x148 = UINT32_MAX;
	static volatile uint32_t t35 = UINT32_MAX;

	t35 = (((x145<x146)%x147)+x148);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = 2601;
	volatile uint16_t x150 = UINT16_MAX;
	int16_t x152 = -18;

	t36 = (((x149<x150)%x151)+x152);

	if (t36 != -17) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x153 = 4U;
	static int32_t x154 = 188943;
	static int64_t x155 = -1LL;

	t37 = (((x153<x154)%x155)+x156);

	if (t37 != 32848282LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x157 = -489;
	volatile int16_t x159 = INT16_MAX;
	volatile int32_t t38 = 332029;

	t38 = (((x157<x158)%x159)+x160);

	if (t38 != -3772) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x161 = -566162240;
	uint16_t x162 = 6U;
	int32_t x163 = 105526;
	int64_t x164 = -1130LL;

	t39 = (((x161<x162)%x163)+x164);

	if (t39 != -1129LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x166 = -1;
	int32_t x167 = INT32_MAX;
	static int32_t t40 = 3;

	t40 = (((x165<x166)%x167)+x168);

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x170 = INT16_MIN;
	uint16_t x171 = UINT16_MAX;
	int16_t x172 = INT16_MIN;
	int32_t t41 = 3;

	t41 = (((x169<x170)%x171)+x172);

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int64_t x174 = -1472LL;
	int16_t x175 = INT16_MAX;
	volatile int32_t t42 = -400691;

	t42 = (((x173<x174)%x175)+x176);

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x177 = 30011U;
	int8_t x178 = INT8_MIN;
	uint32_t x179 = 161U;

	t43 = (((x177<x178)%x179)+x180);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x181 = INT64_MAX;
	static uint32_t x182 = UINT32_MAX;
	int16_t x183 = INT16_MAX;
	static volatile uint32_t x184 = 88U;
	uint32_t t44 = 39391277U;

	t44 = (((x181<x182)%x183)+x184);

	if (t44 != 88U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = -1;
	int64_t x187 = 3546LL;
	static uint8_t x188 = 1U;
	static int64_t t45 = 14106998981LL;

	t45 = (((x185<x186)%x187)+x188);

	if (t45 != 2LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MIN;
	int64_t x190 = -1LL;
	uint64_t x191 = UINT64_MAX;
	int32_t x192 = INT32_MAX;
	volatile uint64_t t46 = 143255303236LLU;

	t46 = (((x189<x190)%x191)+x192);

	if (t46 != 2147483648LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = -1;
	int8_t x194 = -1;
	uint64_t x195 = 76045467327631687LLU;
	int8_t x196 = -1;
	uint64_t t47 = UINT64_MAX;

	t47 = (((x193<x194)%x195)+x196);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x197 = -1688419961104309308LL;
	static uint64_t x198 = 7676LLU;
	volatile uint16_t x199 = UINT16_MAX;
	uint32_t x200 = 13505U;
	uint32_t t48 = 418U;

	t48 = (((x197<x198)%x199)+x200);

	if (t48 != 13505U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = INT8_MIN;
	volatile uint64_t x202 = 131066318LLU;
	int16_t x203 = -27;
	int32_t x204 = INT32_MIN;
	int32_t t49 = INT32_MIN;

	t49 = (((x201<x202)%x203)+x204);

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = INT16_MIN;
	volatile int8_t x206 = 13;
	volatile int64_t x208 = INT64_MIN;
	volatile int64_t t50 = 2010LL;

	t50 = (((x205<x206)%x207)+x208);

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MIN;
	uint16_t x210 = 3879U;
	int32_t x211 = INT32_MAX;
	uint64_t x212 = 143836540157375LLU;
	uint64_t t51 = 3100602755493154LLU;

	t51 = (((x209<x210)%x211)+x212);

	if (t51 != 143836540157376LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x213 = 2U;
	static volatile int16_t x215 = INT16_MIN;
	volatile int16_t x216 = -1;

	t52 = (((x213<x214)%x215)+x216);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MIN;
	volatile int16_t x218 = 80;
	static volatile int8_t x219 = -1;
	int32_t x220 = 3742;
	int32_t t53 = 4847424;

	t53 = (((x217<x218)%x219)+x220);

	if (t53 != 3742) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x221 = INT32_MIN;
	static volatile int32_t x222 = 1;
	volatile int16_t x223 = INT16_MIN;
	int32_t t54 = 49;

	t54 = (((x221<x222)%x223)+x224);

	if (t54 != 128) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x226 = 83U;
	static int64_t x228 = 29942922033LL;
	int64_t t55 = 141LL;

	t55 = (((x225<x226)%x227)+x228);

	if (t55 != 29942922034LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MAX;
	int8_t x230 = -1;
	uint16_t x231 = 15078U;
	uint32_t x232 = 10157939U;
	static uint32_t t56 = 542688U;

	t56 = (((x229<x230)%x231)+x232);

	if (t56 != 10157939U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MAX;
	int16_t x235 = -1;
	static volatile int32_t t57 = -3485742;

	t57 = (((x233<x234)%x235)+x236);

	if (t57 != 4) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = INT8_MIN;
	int8_t x238 = 1;
	int32_t x239 = -1;
	uint32_t t58 = 0U;

	t58 = (((x237<x238)%x239)+x240);

	if (t58 != 88592U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x241 = INT32_MIN;
	static uint8_t x242 = 2U;
	int8_t x243 = -1;
	int16_t x244 = -1;
	int32_t t59 = -9;

	t59 = (((x241<x242)%x243)+x244);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x245 = 172034LL;
	int8_t x248 = INT8_MIN;
	static uint32_t t60 = 150250U;

	t60 = (((x245<x246)%x247)+x248);

	if (t60 != 4294967168U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = INT32_MIN;
	int16_t x250 = INT16_MAX;
	uint16_t x251 = 93U;
	int32_t t61 = 382818017;

	t61 = (((x249<x250)%x251)+x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = 16LLU;
	volatile int64_t x258 = INT64_MIN;
	int16_t x259 = INT16_MAX;
	int64_t t62 = -3876075956602475LL;

	t62 = (((x257<x258)%x259)+x260);

	if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x262 = 30144LLU;
	static int32_t x263 = INT32_MAX;
	int16_t x264 = 0;
	volatile int32_t t63 = 6;

	t63 = (((x261<x262)%x263)+x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = -1;
	volatile uint64_t x270 = UINT64_MAX;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = INT32_MIN;
	static int32_t t64 = INT32_MIN;

	t64 = (((x269<x270)%x271)+x272);

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = INT8_MIN;
	int32_t x274 = INT32_MIN;
	volatile uint64_t t65 = 27635147762538LLU;

	t65 = (((x273<x274)%x275)+x276);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = -6;
	uint64_t x279 = 1746LLU;
	volatile int8_t x280 = INT8_MIN;
	volatile uint64_t t66 = 2LLU;

	t66 = (((x277<x278)%x279)+x280);

	if (t66 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = INT32_MIN;
	int8_t x282 = -11;
	int64_t x283 = -1LL;
	int16_t x284 = 244;
	volatile int64_t t67 = 428382LL;

	t67 = (((x281<x282)%x283)+x284);

	if (t67 != 244LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x285 = INT64_MAX;
	uint8_t x286 = 0U;
	int64_t x287 = -798LL;
	int16_t x288 = 1;
	static int64_t t68 = -6LL;

	t68 = (((x285<x286)%x287)+x288);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = 7124;
	uint64_t x290 = 7192101266LLU;
	uint8_t x291 = UINT8_MAX;
	uint16_t x292 = 2244U;
	volatile int32_t t69 = -116850;

	t69 = (((x289<x290)%x291)+x292);

	if (t69 != 2245) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x297 = 427265961496206LLU;
	int32_t x298 = -1;
	static int32_t x300 = INT32_MIN;

	t70 = (((x297<x298)%x299)+x300);

	if (t70 != -2147483647) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x302 = -1LL;
	int32_t x303 = -20;
	volatile uint64_t t71 = 137LLU;

	t71 = (((x301<x302)%x303)+x304);

	if (t71 != 19821372LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = INT32_MIN;
	uint8_t x306 = 1U;
	static uint32_t x307 = 30U;
	uint16_t x308 = 2U;
	volatile uint32_t t72 = 686153U;

	t72 = (((x305<x306)%x307)+x308);

	if (t72 != 3U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MIN;
	int32_t x310 = INT32_MIN;
	volatile int64_t x311 = -1LL;
	uint64_t x312 = 1089836827349035975LLU;
	volatile uint64_t t73 = 8566127204077LLU;

	t73 = (((x309<x310)%x311)+x312);

	if (t73 != 1089836827349035975LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x313 = -1;
	uint64_t x314 = UINT64_MAX;
	int32_t x316 = 6;
	volatile uint32_t t74 = 39402U;

	t74 = (((x313<x314)%x315)+x316);

	if (t74 != 6U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x317 = 20;
	uint32_t x320 = UINT32_MAX;
	uint32_t t75 = UINT32_MAX;

	t75 = (((x317<x318)%x319)+x320);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x322 = 1U;
	int64_t t76 = 122363997LL;

	t76 = (((x321<x322)%x323)+x324);

	if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x325 = 341290778;
	uint8_t x326 = 0U;
	static volatile uint16_t x327 = UINT16_MAX;
	volatile int32_t t77 = INT32_MAX;

	t77 = (((x325<x326)%x327)+x328);

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x329 = UINT32_MAX;
	int64_t x330 = INT64_MIN;
	uint8_t x331 = 1U;
	int8_t x332 = INT8_MIN;
	int32_t t78 = -1988;

	t78 = (((x329<x330)%x331)+x332);

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x333 = 13;
	int8_t x334 = 6;
	static uint64_t x335 = UINT64_MAX;
	static uint16_t x336 = UINT16_MAX;
	volatile uint64_t t79 = 4508226LLU;

	t79 = (((x333<x334)%x335)+x336);

	if (t79 != 65535LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x337 = INT64_MIN;
	uint8_t x338 = 126U;
	int16_t x339 = -3;
	int32_t x340 = INT32_MIN;
	static int32_t t80 = -1;

	t80 = (((x337<x338)%x339)+x340);

	if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x342 = -1;
	volatile int8_t x343 = INT8_MAX;
	uint32_t x344 = 317U;
	uint32_t t81 = 4094U;

	t81 = (((x341<x342)%x343)+x344);

	if (t81 != 317U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = INT32_MAX;
	uint32_t x350 = 7806099U;
	uint64_t x351 = 27065655668LLU;
	int8_t x352 = INT8_MIN;
	volatile uint64_t t82 = 30305540391891LLU;

	t82 = (((x349<x350)%x351)+x352);

	if (t82 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x353 = UINT16_MAX;
	volatile uint64_t x354 = UINT64_MAX;
	uint16_t x355 = UINT16_MAX;

	t83 = (((x353<x354)%x355)+x356);

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x357 = 3U;
	volatile int16_t x358 = INT16_MAX;
	volatile int8_t x360 = INT8_MIN;
	static int32_t t84 = -29;

	t84 = (((x357<x358)%x359)+x360);

	if (t84 != -127) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x361 = 15U;
	volatile int32_t x363 = -1;
	int64_t x364 = INT64_MIN;
	int64_t t85 = INT64_MIN;

	t85 = (((x361<x362)%x363)+x364);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x365 = 95U;
	volatile int32_t x367 = INT32_MIN;
	volatile int64_t t86 = 68208119449580973LL;

	t86 = (((x365<x366)%x367)+x368);

	if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = -206LL;
	volatile int64_t x370 = -1LL;
	int8_t x371 = -1;
	volatile uint16_t x372 = 2U;
	volatile int32_t t87 = -4863517;

	t87 = (((x369<x370)%x371)+x372);

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x374 = INT32_MIN;
	volatile uint32_t x375 = 93U;
	static int16_t x376 = INT16_MIN;
	volatile uint32_t t88 = 52154239U;

	t88 = (((x373<x374)%x375)+x376);

	if (t88 != 4294934528U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x380 = 94451668U;
	int64_t t89 = -2065317LL;

	t89 = (((x377<x378)%x379)+x380);

	if (t89 != 94451668LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x381 = -1;
	int8_t x383 = INT8_MIN;
	int64_t x384 = INT64_MIN;
	volatile int64_t t90 = INT64_MIN;

	t90 = (((x381<x382)%x383)+x384);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = INT64_MIN;
	static int64_t x386 = -90241389110385981LL;
	static volatile uint8_t x387 = UINT8_MAX;
	int16_t x388 = -1;
	int32_t t91 = 1132;

	t91 = (((x385<x386)%x387)+x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x389 = UINT8_MAX;
	volatile int16_t x390 = INT16_MAX;
	int8_t x391 = 5;
	static int64_t x392 = -1LL;
	int64_t t92 = -56158705839LL;

	t92 = (((x389<x390)%x391)+x392);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = 15332LL;
	uint16_t x394 = UINT16_MAX;
	volatile uint16_t x396 = UINT16_MAX;
	volatile int32_t t93 = -6;

	t93 = (((x393<x394)%x395)+x396);

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = -386707;
	int64_t x398 = INT64_MIN;
	int8_t x399 = INT8_MAX;
	volatile uint32_t x400 = 17857537U;
	volatile uint32_t t94 = 134U;

	t94 = (((x397<x398)%x399)+x400);

	if (t94 != 17857537U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x401 = 3099U;
	static volatile int64_t x402 = INT64_MIN;
	int8_t x403 = INT8_MIN;
	int32_t x404 = -19510536;
	volatile int32_t t95 = -3;

	t95 = (((x401<x402)%x403)+x404);

	if (t95 != -19510536) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x405 = 47U;
	int64_t x406 = INT64_MAX;
	int16_t x407 = INT16_MAX;
	int64_t x408 = INT64_MIN;
	static volatile int64_t t96 = -68LL;

	t96 = (((x405<x406)%x407)+x408);

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x417 = -759490525153LL;
	uint8_t x418 = UINT8_MAX;
	int32_t x420 = INT32_MIN;

	t97 = (((x417<x418)%x419)+x420);

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x425 = -1LL;
	int32_t x426 = -1;
	uint64_t x427 = UINT64_MAX;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (((x425<x426)%x427)+x428);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x429 = 0;
	static int8_t x430 = INT8_MIN;
	static uint32_t x431 = UINT32_MAX;
	static int16_t x432 = 46;
	static volatile uint32_t t99 = 853408019U;

	t99 = (((x429<x430)%x431)+x432);

	if (t99 != 46U) { NG(); } else { ; }
	
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


    return 0;
}

