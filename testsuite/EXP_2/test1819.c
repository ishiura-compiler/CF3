#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = -2;
volatile uint64_t t1 = 431320936618886LLU;
int64_t x9 = -228570379659013535LL;
int32_t x11 = INT32_MIN;
int32_t t3 = 61841928;
volatile int64_t x29 = INT64_MIN;
volatile int8_t x38 = INT8_MIN;
static int64_t x40 = -111343246768117925LL;
static uint16_t x42 = UINT16_MAX;
uint32_t x43 = 493785U;
volatile uint32_t t10 = 336159252U;
uint16_t x47 = 1U;
int32_t t12 = -152;
static uint8_t x53 = 1U;
uint64_t x66 = 4153LLU;
static uint64_t x72 = UINT64_MAX;
static uint64_t x73 = 130054307868728861LLU;
int32_t x74 = -1;
int32_t t19 = -1;
int64_t x84 = -1LL;
int64_t x94 = INT64_MAX;
uint32_t x96 = 174675U;
int64_t x97 = INT64_MIN;
static int8_t x99 = -1;
int32_t t24 = 1934;
static volatile uint8_t x106 = UINT8_MAX;
volatile int8_t x108 = -12;
static volatile int8_t x110 = INT8_MAX;
uint64_t x112 = 207LLU;
static volatile int32_t t29 = -15284;
int16_t x122 = -16342;
volatile int32_t t30 = 38869;
int32_t t32 = -29929;
uint16_t x135 = UINT16_MAX;
static int64_t x138 = INT64_MIN;
volatile int32_t t34 = INT32_MIN;
uint64_t x141 = 5676149LLU;
uint8_t x150 = UINT8_MAX;
int8_t x156 = INT8_MIN;
volatile int32_t t38 = 29259;
volatile uint32_t t39 = 16U;
uint32_t x167 = 5472045U;
int8_t x169 = -1;
volatile int64_t x170 = INT64_MIN;
int32_t x180 = 596011;
uint32_t x186 = 15U;
volatile int32_t t46 = -72493;
volatile int64_t x192 = INT64_MIN;
static int32_t x202 = INT32_MIN;
int64_t t52 = INT64_MIN;
volatile uint64_t x218 = UINT64_MAX;
int16_t x223 = 133;
volatile int64_t t58 = -9865053LL;
volatile int32_t x243 = -1;
int32_t x244 = INT32_MIN;
uint32_t x247 = 2011959536U;
uint64_t x254 = UINT64_MAX;
static int32_t x255 = INT32_MAX;
volatile int32_t t63 = 0;
int16_t x260 = -1;
volatile int32_t x266 = -171;
static int32_t x268 = -1;
int16_t x269 = INT16_MIN;
uint8_t x270 = 15U;
static volatile int64_t x278 = -878313515LL;
uint16_t x279 = 2479U;
uint16_t x281 = 1082U;
static int8_t x288 = INT8_MIN;
uint64_t x289 = 56385506537LLU;
int32_t x290 = 0;
uint32_t x295 = 15750155U;
volatile uint8_t x296 = UINT8_MAX;
volatile uint64_t t74 = UINT64_MAX;
static int64_t x311 = 1LL;
int64_t x320 = INT64_MIN;
static volatile int64_t t79 = INT64_MIN;
int8_t x321 = -3;
static volatile uint64_t t80 = 4410215LLU;
int32_t t83 = -78306163;
int8_t x342 = INT8_MIN;
static volatile int8_t x365 = INT8_MAX;
static int32_t x366 = -1;
uint16_t x375 = 5833U;
static int32_t x382 = -181;
static volatile uint16_t x388 = 299U;
int8_t x390 = INT8_MIN;
static int32_t t97 = -15191;
int32_t x395 = INT32_MIN;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int32_t x2 = -1;
	static uint16_t x3 = 7U;
	int64_t x4 = 16499690LL;
	volatile int64_t t0 = -3750798747284069LL;

	t0 = ((x1<=(x2&x3))|x4);

	if (t0 != 16499690LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x6 = UINT64_MAX;
	int32_t x7 = 1273714;
	uint64_t x8 = 7231137523LLU;

	t1 = ((x5<=(x6&x7))|x8);

	if (t1 != 7231137523LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -1;
	volatile int32_t x12 = INT32_MAX;
	int32_t t2 = INT32_MAX;

	t2 = ((x9<=(x10&x11))|x12);

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = 6U;
	volatile uint16_t x14 = UINT16_MAX;
	int64_t x15 = 1206499291848LL;
	int32_t x16 = 1;

	t3 = ((x13<=(x14&x15))|x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	static int16_t x18 = INT16_MIN;
	volatile int32_t x19 = 45420;
	static int64_t x20 = -1LL;
	static int64_t t4 = -422151909714210LL;

	t4 = ((x17<=(x18&x19))|x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int64_t x22 = INT64_MAX;
	volatile int16_t x23 = INT16_MIN;
	volatile int64_t x24 = INT64_MAX;
	volatile int64_t t5 = INT64_MAX;

	t5 = ((x21<=(x22&x23))|x24);

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 205U;
	volatile int16_t x26 = 13;
	uint16_t x27 = 3U;
	uint64_t x28 = 4943LLU;
	static volatile uint64_t t6 = 5815296322617132LLU;

	t6 = ((x25<=(x26&x27))|x28);

	if (t6 != 4943LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x30 = 19U;
	static int8_t x31 = 1;
	int8_t x32 = -1;
	volatile int32_t t7 = 269;

	t7 = ((x29<=(x30&x31))|x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	volatile int16_t x34 = INT16_MIN;
	volatile int8_t x35 = INT8_MIN;
	int32_t x36 = INT32_MAX;
	int32_t t8 = INT32_MAX;

	t8 = ((x33<=(x34&x35))|x36);

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	int8_t x39 = INT8_MIN;
	int64_t t9 = 1LL;

	t9 = ((x37<=(x38&x39))|x40);

	if (t9 != -111343246768117925LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = UINT16_MAX;
	uint32_t x44 = 1744810U;

	t10 = ((x41<=(x42&x43))|x44);

	if (t10 != 1744810U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 8190766000234LLU;
	int64_t x46 = INT64_MIN;
	uint64_t x48 = 13LLU;
	uint64_t t11 = 265092524788154401LLU;

	t11 = ((x45<=(x46&x47))|x48);

	if (t11 != 13LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MAX;
	int16_t x50 = -6;
	int8_t x51 = INT8_MIN;
	static int16_t x52 = INT16_MIN;

	t12 = ((x49<=(x50&x51))|x52);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = UINT8_MAX;
	int64_t x55 = INT64_MIN;
	int32_t x56 = -1;
	volatile int32_t t13 = 672;

	t13 = ((x53<=(x54&x55))|x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int64_t x58 = -1150768LL;
	volatile int32_t x59 = INT32_MIN;
	uint16_t x60 = 111U;
	int32_t t14 = -9145987;

	t14 = ((x57<=(x58&x59))|x60);

	if (t14 != 111) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	int16_t x62 = INT16_MIN;
	uint32_t x63 = 150U;
	volatile uint8_t x64 = 14U;
	volatile int32_t t15 = 31;

	t15 = ((x61<=(x62&x63))|x64);

	if (t15 != 14) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MAX;
	int64_t x67 = INT64_MAX;
	volatile int64_t x68 = INT64_MIN;
	volatile int64_t t16 = INT64_MIN;

	t16 = ((x65<=(x66&x67))|x68);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x69 = 0;
	static int32_t x70 = INT32_MIN;
	static int16_t x71 = -1;
	uint64_t t17 = UINT64_MAX;

	t17 = ((x69<=(x70&x71))|x72);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x75 = INT16_MIN;
	static int64_t x76 = INT64_MIN;
	volatile int64_t t18 = -542197LL;

	t18 = ((x73<=(x74&x75))|x76);

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	int32_t x78 = INT32_MAX;
	int16_t x79 = INT16_MIN;
	int16_t x80 = -1;

	t19 = ((x77<=(x78&x79))|x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MIN;
	static uint8_t x82 = UINT8_MAX;
	int64_t x83 = INT64_MAX;
	volatile int64_t t20 = 125371778925988LL;

	t20 = ((x81<=(x82&x83))|x84);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int32_t x86 = INT32_MIN;
	int32_t x87 = -1;
	int32_t x88 = -1;
	int32_t t21 = -8693474;

	t21 = ((x85<=(x86&x87))|x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	uint8_t x90 = UINT8_MAX;
	volatile uint64_t x91 = 5126907243307LLU;
	int32_t x92 = -2589;
	static int32_t t22 = -22597807;

	t22 = ((x89<=(x90&x91))|x92);

	if (t22 != -2589) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	uint8_t x95 = UINT8_MAX;
	volatile uint32_t t23 = 528994734U;

	t23 = ((x93<=(x94&x95))|x96);

	if (t23 != 174675U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x98 = 1250U;
	int8_t x100 = 1;

	t24 = ((x97<=(x98&x99))|x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = -1LL;
	uint16_t x102 = UINT16_MAX;
	volatile int64_t x103 = INT64_MIN;
	static uint16_t x104 = 1U;
	int32_t t25 = -60048453;

	t25 = ((x101<=(x102&x103))|x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = -26839854;
	int64_t x107 = INT64_MIN;
	static volatile int32_t t26 = 1839885;

	t26 = ((x105<=(x106&x107))|x108);

	if (t26 != -11) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x109 = 75U;
	volatile int64_t x111 = 98196LL;
	volatile uint64_t t27 = 0LLU;

	t27 = ((x109<=(x110&x111))|x112);

	if (t27 != 207LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int16_t x114 = -816;
	int16_t x115 = -13;
	uint32_t x116 = 13809752U;
	uint32_t t28 = 401290908U;

	t28 = ((x113<=(x114&x115))|x116);

	if (t28 != 13809752U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -3141773;
	int32_t x118 = -1728;
	int32_t x119 = 1;
	volatile int16_t x120 = -1;

	t29 = ((x117<=(x118&x119))|x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	uint32_t x123 = 1416482057U;
	static uint8_t x124 = 19U;

	t30 = ((x121<=(x122&x123))|x124);

	if (t30 != 19) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = -3350380;
	int32_t x126 = INT32_MAX;
	int8_t x127 = INT8_MAX;
	volatile uint32_t x128 = UINT32_MAX;
	volatile uint32_t t31 = UINT32_MAX;

	t31 = ((x125<=(x126&x127))|x128);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = INT16_MAX;
	int32_t x130 = INT32_MAX;
	uint32_t x131 = 0U;
	volatile int8_t x132 = -1;

	t32 = ((x129<=(x130&x131))|x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = -165;
	int8_t x134 = INT8_MIN;
	int8_t x136 = -1;
	int32_t t33 = -5983;

	t33 = ((x133<=(x134&x135))|x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MAX;
	int16_t x139 = 200;
	int32_t x140 = INT32_MIN;

	t34 = ((x137<=(x138&x139))|x140);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x142 = -1;
	int8_t x143 = INT8_MIN;
	uint64_t x144 = UINT64_MAX;
	uint64_t t35 = UINT64_MAX;

	t35 = ((x141<=(x142&x143))|x144);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	int8_t x146 = -1;
	uint32_t x147 = UINT32_MAX;
	volatile int8_t x148 = -17;
	volatile int32_t t36 = -1798314;

	t36 = ((x145<=(x146&x147))|x148);

	if (t36 != -17) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -1;
	int8_t x151 = 0;
	volatile int16_t x152 = -1;
	volatile int32_t t37 = 81296537;

	t37 = ((x149<=(x150&x151))|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 72319533U;
	static int64_t x154 = INT64_MIN;
	volatile int16_t x155 = -1;

	t38 = ((x153<=(x154&x155))|x156);

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	int64_t x158 = 118853798041459047LL;
	int16_t x159 = -1;
	uint32_t x160 = 338U;

	t39 = ((x157<=(x158&x159))|x160);

	if (t39 != 339U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 13;
	volatile int64_t x162 = 0LL;
	int8_t x163 = -8;
	static uint16_t x164 = 29100U;
	int32_t t40 = -124;

	t40 = ((x161<=(x162&x163))|x164);

	if (t40 != 29100) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	volatile int64_t x166 = -1LL;
	int64_t x168 = INT64_MIN;
	int64_t t41 = INT64_MIN;

	t41 = ((x165<=(x166&x167))|x168);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x171 = INT8_MIN;
	uint32_t x172 = 125276U;
	static volatile uint32_t t42 = 1495888855U;

	t42 = ((x169<=(x170&x171))|x172);

	if (t42 != 125276U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 654U;
	int64_t x174 = -1LL;
	int64_t x175 = INT64_MAX;
	static uint8_t x176 = 1U;
	volatile int32_t t43 = 0;

	t43 = ((x173<=(x174&x175))|x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 1382314LLU;
	int64_t x178 = 3775214708821204271LL;
	static int16_t x179 = -1;
	volatile int32_t t44 = 1;

	t44 = ((x177<=(x178&x179))|x180);

	if (t44 != 596011) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	volatile int16_t x182 = INT16_MIN;
	uint8_t x183 = 0U;
	static int32_t x184 = INT32_MAX;
	static volatile int32_t t45 = INT32_MAX;

	t45 = ((x181<=(x182&x183))|x184);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int8_t x187 = INT8_MIN;
	static int16_t x188 = 13;

	t46 = ((x185<=(x186&x187))|x188);

	if (t46 != 13) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	static int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MIN;
	volatile int64_t t47 = INT64_MIN;

	t47 = ((x189<=(x190&x191))|x192);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = INT32_MIN;
	uint8_t x194 = 127U;
	volatile int64_t x195 = 177979657617565698LL;
	int8_t x196 = INT8_MAX;
	static volatile int32_t t48 = 121527310;

	t48 = ((x193<=(x194&x195))|x196);

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = 34;
	int16_t x198 = -1;
	int64_t x199 = INT64_MIN;
	int16_t x200 = INT16_MIN;
	static volatile int32_t t49 = -960;

	t49 = ((x197<=(x198&x199))|x200);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = 6U;
	static int32_t x203 = -1;
	int16_t x204 = -1;
	volatile int32_t t50 = 12262;

	t50 = ((x201<=(x202&x203))|x204);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	uint16_t x206 = 5U;
	uint8_t x207 = 1U;
	volatile uint64_t x208 = UINT64_MAX;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = ((x205<=(x206&x207))|x208);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	static int64_t x210 = -1LL;
	volatile uint16_t x211 = 2U;
	int64_t x212 = INT64_MIN;

	t52 = ((x209<=(x210&x211))|x212);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 2U;
	int8_t x214 = 2;
	static int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MIN;
	volatile int32_t t53 = 7;

	t53 = ((x213<=(x214&x215))|x216);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int64_t x219 = 4267628715485863LL;
	int8_t x220 = INT8_MIN;
	static volatile int32_t t54 = 3;

	t54 = ((x217<=(x218&x219))|x220);

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x221 = UINT8_MAX;
	uint32_t x222 = 2140362434U;
	int64_t x224 = -1LL;
	int64_t t55 = 121819775867138962LL;

	t55 = ((x221<=(x222&x223))|x224);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 184U;
	int32_t x226 = -4072;
	static int8_t x227 = -1;
	uint8_t x228 = 0U;
	static volatile int32_t t56 = -1;

	t56 = ((x225<=(x226&x227))|x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	uint32_t x230 = 5525U;
	static volatile int32_t x231 = INT32_MIN;
	int8_t x232 = INT8_MAX;
	volatile int32_t t57 = 147;

	t57 = ((x229<=(x230&x231))|x232);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x233 = 46;
	int64_t x234 = INT64_MIN;
	volatile uint8_t x235 = 6U;
	static int64_t x236 = 140722388562132LL;

	t58 = ((x233<=(x234&x235))|x236);

	if (t58 != 140722388562132LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	volatile int64_t x238 = INT64_MIN;
	int64_t x239 = INT64_MIN;
	static int8_t x240 = -1;
	volatile int32_t t59 = -2419639;

	t59 = ((x237<=(x238&x239))|x240);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -22;
	static volatile uint64_t x242 = 178265945LLU;
	volatile int32_t t60 = INT32_MIN;

	t60 = ((x241<=(x242&x243))|x244);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MIN;
	static uint64_t x246 = 18053337LLU;
	volatile int64_t x248 = -8741288011669LL;
	int64_t t61 = -19085567146576LL;

	t61 = ((x245<=(x246&x247))|x248);

	if (t61 != -8741288011669LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = INT64_MIN;
	int64_t x250 = INT64_MIN;
	int8_t x251 = -1;
	volatile int8_t x252 = INT8_MIN;
	int32_t t62 = -2;

	t62 = ((x249<=(x250&x251))|x252);

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = 28;
	int16_t x256 = -1;

	t63 = ((x253<=(x254&x255))|x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	int64_t x258 = 3606135LL;
	int64_t x259 = INT64_MIN;
	int32_t t64 = 242495298;

	t64 = ((x257<=(x258&x259))|x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = -21;
	int16_t x262 = 5;
	int32_t x263 = INT32_MIN;
	static int16_t x264 = 3879;
	static volatile int32_t t65 = -9;

	t65 = ((x261<=(x262&x263))|x264);

	if (t65 != 3879) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = 0;
	int16_t x267 = -1;
	volatile int32_t t66 = 16242434;

	t66 = ((x265<=(x266&x267))|x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x271 = INT64_MIN;
	int8_t x272 = -1;
	int32_t t67 = 14231;

	t67 = ((x269<=(x270&x271))|x272);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = UINT32_MAX;
	int16_t x274 = INT16_MIN;
	int16_t x275 = -112;
	volatile int32_t x276 = -1;
	static volatile int32_t t68 = 58085030;

	t68 = ((x273<=(x274&x275))|x276);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	uint64_t x280 = 560796390121388LLU;
	volatile uint64_t t69 = 12513048404783461LLU;

	t69 = ((x277<=(x278&x279))|x280);

	if (t69 != 560796390121389LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = 1U;
	int8_t x283 = -4;
	static volatile int8_t x284 = 62;
	int32_t t70 = 393;

	t70 = ((x281<=(x282&x283))|x284);

	if (t70 != 62) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 687665;
	volatile int32_t x286 = INT32_MIN;
	static uint64_t x287 = 20579500LLU;
	volatile int32_t t71 = -61749;

	t71 = ((x285<=(x286&x287))|x288);

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x291 = INT64_MAX;
	int32_t x292 = 945708472;
	volatile int32_t t72 = -36224;

	t72 = ((x289<=(x290&x291))|x292);

	if (t72 != 945708472) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = -612;
	int64_t x294 = -1LL;
	int32_t t73 = 391026093;

	t73 = ((x293<=(x294&x295))|x296);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	static uint32_t x298 = UINT32_MAX;
	static int64_t x299 = INT64_MIN;
	uint64_t x300 = UINT64_MAX;

	t74 = ((x297<=(x298&x299))|x300);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 87210808;
	uint32_t x302 = 775272045U;
	uint8_t x303 = 2U;
	volatile int64_t x304 = INT64_MIN;
	int64_t t75 = INT64_MIN;

	t75 = ((x301<=(x302&x303))|x304);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	int8_t x306 = 5;
	static int8_t x307 = -33;
	int32_t x308 = INT32_MAX;
	int32_t t76 = INT32_MAX;

	t76 = ((x305<=(x306&x307))|x308);

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 7U;
	int32_t x310 = INT32_MIN;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = INT32_MIN;

	t77 = ((x309<=(x310&x311))|x312);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	uint64_t x314 = 2301868309664217991LLU;
	int8_t x315 = 57;
	volatile int32_t x316 = 208454731;
	static volatile int32_t t78 = -865313;

	t78 = ((x313<=(x314&x315))|x316);

	if (t78 != 208454731) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x317 = 246985540023LLU;
	uint16_t x318 = 165U;
	uint64_t x319 = 29206124LLU;

	t79 = ((x317<=(x318&x319))|x320);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x322 = INT32_MIN;
	uint32_t x323 = 214U;
	uint64_t x324 = 73789442LLU;

	t80 = ((x321<=(x322&x323))|x324);

	if (t80 != 73789442LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -21LL;
	int8_t x326 = INT8_MIN;
	static uint64_t x327 = UINT64_MAX;
	static int8_t x328 = INT8_MAX;
	volatile int32_t t81 = 62033392;

	t81 = ((x325<=(x326&x327))|x328);

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	uint8_t x330 = 51U;
	int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -2404;

	t82 = ((x329<=(x330&x331))|x332);

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	static int64_t x334 = -1LL;
	int16_t x335 = INT16_MAX;
	volatile int8_t x336 = -22;

	t83 = ((x333<=(x334&x335))|x336);

	if (t83 != -21) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	int16_t x338 = -1;
	volatile uint16_t x339 = UINT16_MAX;
	static int8_t x340 = 0;
	volatile int32_t t84 = -48640;

	t84 = ((x337<=(x338&x339))|x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	static int32_t x343 = INT32_MIN;
	uint64_t x344 = 1LLU;
	uint64_t t85 = 1845025LLU;

	t85 = ((x341<=(x342&x343))|x344);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	uint32_t x346 = 129U;
	volatile uint16_t x347 = 5U;
	volatile int32_t x348 = -515856340;
	volatile int32_t t86 = -4;

	t86 = ((x345<=(x346&x347))|x348);

	if (t86 != -515856339) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 37636;
	uint8_t x350 = 16U;
	int8_t x351 = INT8_MAX;
	uint32_t x352 = 388U;
	volatile uint32_t t87 = 1338693311U;

	t87 = ((x349<=(x350&x351))|x352);

	if (t87 != 388U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int16_t x354 = -1;
	int32_t x355 = -810;
	static volatile int8_t x356 = -4;
	int32_t t88 = -258330;

	t88 = ((x353<=(x354&x355))|x356);

	if (t88 != -3) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 0;
	int32_t x358 = INT32_MIN;
	volatile int32_t x359 = -1;
	uint16_t x360 = 67U;
	int32_t t89 = -391230;

	t89 = ((x357<=(x358&x359))|x360);

	if (t89 != 67) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = 21345;
	int64_t x362 = -1876861689215985077LL;
	int16_t x363 = -12;
	int16_t x364 = INT16_MIN;
	static volatile int32_t t90 = -126;

	t90 = ((x361<=(x362&x363))|x364);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x367 = INT16_MIN;
	uint8_t x368 = UINT8_MAX;
	int32_t t91 = 61;

	t91 = ((x365<=(x366&x367))|x368);

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	static uint64_t x370 = 86138641186803LLU;
	uint16_t x371 = UINT16_MAX;
	static uint16_t x372 = 144U;
	int32_t t92 = -424677;

	t92 = ((x369<=(x370&x371))|x372);

	if (t92 != 144) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = -1;
	int32_t x374 = 239847100;
	volatile int64_t x376 = -326236349370211LL;
	volatile int64_t t93 = -658871300324246081LL;

	t93 = ((x373<=(x374&x375))|x376);

	if (t93 != -326236349370211LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = -342805028421599LL;
	uint16_t x378 = UINT16_MAX;
	static int32_t x379 = 93;
	int8_t x380 = 0;
	volatile int32_t t94 = 31;

	t94 = ((x377<=(x378&x379))|x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	uint16_t x383 = 7005U;
	int32_t x384 = INT32_MAX;
	volatile int32_t t95 = INT32_MAX;

	t95 = ((x381<=(x382&x383))|x384);

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = 29;
	int64_t x386 = INT64_MIN;
	volatile int16_t x387 = -1;
	int32_t t96 = 2786665;

	t96 = ((x385<=(x386&x387))|x388);

	if (t96 != 299) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	uint16_t x391 = UINT16_MAX;
	int16_t x392 = INT16_MAX;

	t97 = ((x389<=(x390&x391))|x392);

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 963724781018LLU;
	int64_t x394 = -1LL;
	uint32_t x396 = 34541302U;
	volatile uint32_t t98 = 3701077U;

	t98 = ((x393<=(x394&x395))|x396);

	if (t98 != 34541303U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x397 = UINT16_MAX;
	uint32_t x398 = 28U;
	int64_t x399 = -4829169147066LL;
	static uint64_t x400 = 1656715744243703927LLU;
	static uint64_t t99 = 7925883293297616483LLU;

	t99 = ((x397<=(x398&x399))|x400);

	if (t99 != 1656715744243703927LLU) { NG(); } else { ; }
	
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

