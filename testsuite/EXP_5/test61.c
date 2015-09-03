#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 456U;
int32_t x9 = 156410085;
uint64_t x13 = 7016103895LLU;
volatile int32_t x14 = INT32_MIN;
uint8_t x17 = 15U;
uint8_t x25 = 0U;
volatile int32_t t5 = -242402438;
int8_t x34 = -1;
volatile int32_t t7 = 10;
volatile int32_t t8 = -1;
uint8_t x42 = 23U;
volatile int64_t x47 = 1064203704431412084LL;
static volatile int32_t t10 = -89;
uint64_t x53 = UINT64_MAX;
static int32_t t12 = -460697;
int32_t x58 = INT32_MAX;
uint8_t x60 = 5U;
int32_t t14 = -17;
volatile int64_t x65 = 10843766657828LL;
uint8_t x69 = 0U;
volatile int32_t x75 = 1019;
volatile int8_t x81 = INT8_MIN;
int16_t x88 = 215;
static int16_t x101 = INT16_MIN;
int64_t x106 = INT64_MIN;
int8_t x107 = INT8_MAX;
uint64_t x108 = UINT64_MAX;
int64_t x110 = INT64_MIN;
static int64_t x113 = -773436417405185774LL;
int64_t x116 = INT64_MIN;
uint16_t x118 = 11U;
int32_t t27 = 51248000;
static uint64_t x121 = 344069826449808LLU;
volatile int8_t x123 = INT8_MAX;
volatile int16_t x126 = INT16_MIN;
static int64_t x128 = INT64_MIN;
volatile int8_t x134 = 0;
static volatile int32_t t30 = -7534153;
uint64_t x140 = UINT64_MAX;
int32_t t32 = -11;
int32_t x145 = INT32_MAX;
volatile uint8_t x147 = 51U;
int16_t x167 = -1;
int32_t x168 = 31673926;
volatile int32_t t36 = -128741;
volatile int32_t x170 = -1;
static uint16_t x179 = 248U;
int64_t x180 = 64086551214522902LL;
uint8_t x181 = 3U;
int8_t x184 = -30;
static uint16_t x185 = 431U;
static int8_t x191 = INT8_MIN;
int64_t x192 = -1LL;
int64_t x194 = INT64_MAX;
int16_t x198 = -1;
volatile int32_t x200 = INT32_MIN;
int32_t x204 = INT32_MAX;
int64_t x209 = 325603574557LL;
int16_t x217 = INT16_MIN;
int8_t x218 = 2;
static volatile int8_t x226 = -4;
static volatile int16_t x228 = -436;
volatile int16_t x233 = INT16_MIN;
int8_t x234 = INT8_MAX;
uint32_t x244 = 5545U;
int16_t x250 = INT16_MIN;
volatile int8_t x251 = -1;
uint8_t x257 = 11U;
volatile int8_t x268 = INT8_MIN;
static int8_t x271 = 4;
volatile uint8_t x278 = 4U;
int8_t x279 = 1;
static uint32_t x283 = UINT32_MAX;
int16_t x285 = INT16_MIN;
volatile int32_t t64 = -328;
volatile int32_t x295 = -1;
int32_t x296 = INT32_MIN;
uint64_t x298 = UINT64_MAX;
uint8_t x299 = 0U;
int16_t x300 = 1;
int32_t t67 = 5589;
uint16_t x316 = UINT16_MAX;
static int16_t x327 = INT16_MAX;
int32_t t71 = -61054;
int64_t x330 = -102LL;
static uint16_t x333 = 2454U;
int16_t x334 = -1;
int8_t x360 = -1;
uint64_t x361 = 1LLU;
static uint64_t x364 = 404096394403453574LLU;
int8_t x366 = INT8_MIN;
int32_t t79 = 118338604;
static uint8_t x369 = UINT8_MAX;
static volatile int8_t x370 = -1;
uint32_t x382 = 316320193U;
static uint16_t x383 = 4464U;
int64_t x384 = -1LL;
volatile int8_t x395 = -1;
volatile uint64_t x396 = UINT64_MAX;
int8_t x401 = -1;
static int32_t x402 = INT32_MIN;
int8_t x407 = 0;
int64_t x411 = -255LL;
volatile int32_t t87 = 193;
uint64_t x419 = 7697981628071854LLU;
volatile int64_t x423 = INT64_MIN;
int32_t t90 = 3497;
int32_t x436 = -8118953;
static int16_t x437 = -1;
volatile int64_t x442 = 985887034594144LL;
volatile int32_t t94 = 426152;
int64_t x446 = -1LL;
int8_t x449 = -38;
int32_t x455 = 136;
int8_t x456 = INT8_MAX;
static int8_t x457 = 5;
static int8_t x458 = INT8_MIN;
int16_t x461 = -1;


void f0(void) {
	int64_t x2 = -1LL;
	uint16_t x3 = 2U;
	volatile uint8_t x4 = UINT8_MAX;
	int32_t t0 = -2746961;

	t0 = (x1<((x2+x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	static int16_t x6 = 61;
	volatile uint8_t x7 = 88U;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 1223;

	t1 = (x5<((x6+x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x10 = UINT8_MAX;
	int32_t x11 = INT32_MIN;
	int64_t x12 = 3586LL;
	volatile int32_t t2 = 599;

	t2 = (x9<((x10+x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x15 = 499U;
	int16_t x16 = -1;
	volatile int32_t t3 = -625688;

	t3 = (x13<((x14+x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = UINT32_MAX;
	int16_t x19 = INT16_MIN;
	volatile uint8_t x20 = 35U;
	volatile int32_t t4 = -175293967;

	t4 = (x17<((x18+x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = 0;
	int8_t x27 = INT8_MIN;
	int64_t x28 = INT64_MAX;

	t5 = (x25<((x26+x27)%x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	int8_t x30 = INT8_MIN;
	int8_t x31 = INT8_MIN;
	int64_t x32 = -1LL;
	int32_t t6 = -37;

	t6 = (x29<((x30+x31)%x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = -1LL;
	static int32_t x35 = 22;
	int64_t x36 = INT64_MAX;

	t7 = (x33<((x34+x35)%x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MAX;
	uint16_t x38 = 7645U;
	static volatile uint8_t x39 = 91U;
	int32_t x40 = INT32_MIN;

	t8 = (x37<((x38+x39)%x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int32_t x43 = INT32_MIN;
	static uint32_t x44 = UINT32_MAX;
	volatile int32_t t9 = -34401545;

	t9 = (x41<((x42+x43)%x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	static uint64_t x46 = 1361892LLU;
	static int8_t x48 = INT8_MIN;

	t10 = (x45<((x46+x47)%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = INT16_MIN;
	static uint8_t x50 = 1U;
	volatile int16_t x51 = INT16_MIN;
	int16_t x52 = -7;
	volatile int32_t t11 = 964501;

	t11 = (x49<((x50+x51)%x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x54 = 100U;
	int64_t x55 = INT64_MIN;
	int64_t x56 = -232267398188LL;

	t12 = (x53<((x54+x55)%x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	volatile int64_t x59 = 3061764195091LL;
	static int32_t t13 = -629598395;

	t13 = (x57<((x58+x59)%x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	volatile int8_t x62 = -1;
	static uint8_t x63 = UINT8_MAX;
	uint16_t x64 = UINT16_MAX;

	t14 = (x61<((x62+x63)%x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x66 = 3125LL;
	uint64_t x67 = 159218229872666LLU;
	uint8_t x68 = UINT8_MAX;
	int32_t t15 = -10796;

	t15 = (x65<((x66+x67)%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = -187059149LL;
	static int16_t x71 = INT16_MAX;
	int64_t x72 = INT64_MIN;
	int32_t t16 = -23952;

	t16 = (x69<((x70+x71)%x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	int64_t x74 = -3LL;
	static uint64_t x76 = 27LLU;
	static volatile int32_t t17 = 9724793;

	t17 = (x73<((x74+x75)%x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	volatile int32_t x78 = 532119;
	int64_t x79 = INT64_MIN;
	uint8_t x80 = 18U;
	volatile int32_t t18 = 1001334;

	t18 = (x77<((x78+x79)%x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x82 = INT8_MIN;
	uint16_t x83 = UINT16_MAX;
	uint16_t x84 = UINT16_MAX;
	int32_t t19 = 4;

	t19 = (x81<((x82+x83)%x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x85 = UINT32_MAX;
	volatile int64_t x86 = INT64_MIN;
	volatile uint64_t x87 = 13792770435786637LLU;
	static volatile int32_t t20 = 452;

	t20 = (x85<((x86+x87)%x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = INT8_MAX;
	int8_t x95 = INT8_MIN;
	static volatile uint64_t x96 = 1LLU;
	int32_t t21 = -40935;

	t21 = (x93<((x94+x95)%x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = 55592;
	int64_t x98 = 271LL;
	static uint8_t x99 = 39U;
	uint16_t x100 = 285U;
	int32_t t22 = -9297024;

	t22 = (x97<((x98+x99)%x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x102 = INT8_MAX;
	uint8_t x103 = UINT8_MAX;
	int8_t x104 = 24;
	int32_t t23 = 876023979;

	t23 = (x101<((x102+x103)%x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x105 = -3;
	volatile int32_t t24 = 140426;

	t24 = (x105<((x106+x107)%x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = 1432U;
	volatile int64_t x111 = 3072744557752542242LL;
	volatile int8_t x112 = INT8_MIN;
	static int32_t t25 = 0;

	t25 = (x109<((x110+x111)%x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x114 = INT16_MIN;
	int16_t x115 = 19;
	volatile int32_t t26 = -53283875;

	t26 = (x113<((x114+x115)%x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x117 = UINT16_MAX;
	static int64_t x119 = 74LL;
	volatile int32_t x120 = -1;

	t27 = (x117<((x118+x119)%x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x122 = INT64_MIN;
	int32_t x124 = INT32_MIN;
	static volatile int32_t t28 = -24602861;

	t28 = (x121<((x122+x123)%x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MIN;
	int16_t x127 = INT16_MIN;
	static int32_t t29 = 1;

	t29 = (x125<((x126+x127)%x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = 2U;
	volatile uint16_t x135 = UINT16_MAX;
	static volatile uint32_t x136 = 4140829U;

	t30 = (x133<((x134+x135)%x136));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MIN;
	int64_t x138 = -327415993LL;
	int16_t x139 = INT16_MIN;
	volatile int32_t t31 = -27;

	t31 = (x137<((x138+x139)%x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = INT64_MIN;
	static uint8_t x142 = UINT8_MAX;
	int32_t x143 = 7;
	int8_t x144 = INT8_MIN;

	t32 = (x141<((x142+x143)%x144));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x146 = 1U;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t33 = 1006480;

	t33 = (x145<((x146+x147)%x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MAX;
	volatile int16_t x150 = INT16_MAX;
	int32_t x151 = -1;
	uint64_t x152 = 3LLU;
	int32_t t34 = -638;

	t34 = (x149<((x150+x151)%x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x161 = -1LL;
	volatile uint32_t x162 = 1955U;
	uint32_t x163 = UINT32_MAX;
	int8_t x164 = 27;
	volatile int32_t t35 = -1984;

	t35 = (x161<((x162+x163)%x164));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = INT32_MIN;
	int64_t x166 = INT64_MAX;

	t36 = (x165<((x166+x167)%x168));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x169 = UINT8_MAX;
	int32_t x171 = -1;
	volatile uint8_t x172 = 3U;
	int32_t t37 = 376574422;

	t37 = (x169<((x170+x171)%x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x177 = INT64_MIN;
	volatile uint32_t x178 = UINT32_MAX;
	static volatile int32_t t38 = 78170;

	t38 = (x177<((x178+x179)%x180));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x182 = UINT32_MAX;
	uint32_t x183 = UINT32_MAX;
	volatile int32_t t39 = -11610;

	t39 = (x181<((x182+x183)%x184));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x186 = INT8_MAX;
	int8_t x187 = INT8_MIN;
	uint16_t x188 = 46U;
	int32_t t40 = -87758;

	t40 = (x185<((x186+x187)%x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x189 = UINT64_MAX;
	int8_t x190 = INT8_MIN;
	int32_t t41 = 1386993;

	t41 = (x189<((x190+x191)%x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x193 = INT32_MAX;
	static int8_t x195 = -1;
	int64_t x196 = INT64_MAX;
	int32_t t42 = -175;

	t42 = (x193<((x194+x195)%x196));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = 2699332176011937718LLU;
	static uint16_t x199 = UINT16_MAX;
	volatile int32_t t43 = -39106;

	t43 = (x197<((x198+x199)%x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x201 = INT32_MAX;
	uint32_t x202 = 54U;
	static int32_t x203 = -16343614;
	volatile int32_t t44 = 53332602;

	t44 = (x201<((x202+x203)%x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x205 = -1;
	int16_t x206 = -1;
	volatile uint64_t x207 = 25930254LLU;
	int32_t x208 = INT32_MIN;
	int32_t t45 = 85;

	t45 = (x205<((x206+x207)%x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x210 = INT32_MIN;
	int16_t x211 = INT16_MAX;
	static uint16_t x212 = 145U;
	volatile int32_t t46 = 28026721;

	t46 = (x209<((x210+x211)%x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = -62;
	static int16_t x214 = INT16_MIN;
	uint8_t x215 = UINT8_MAX;
	volatile int16_t x216 = -1;
	int32_t t47 = -55;

	t47 = (x213<((x214+x215)%x216));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x219 = -432;
	int8_t x220 = INT8_MAX;
	volatile int32_t t48 = 0;

	t48 = (x217<((x218+x219)%x220));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x221 = 2U;
	uint16_t x222 = 2U;
	int32_t x223 = INT32_MIN;
	static uint8_t x224 = 26U;
	volatile int32_t t49 = 883656094;

	t49 = (x221<((x222+x223)%x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = INT32_MAX;
	int16_t x227 = INT16_MIN;
	int32_t t50 = 114381713;

	t50 = (x225<((x226+x227)%x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x235 = 3U;
	static volatile int8_t x236 = -1;
	volatile int32_t t51 = -63335;

	t51 = (x233<((x234+x235)%x236));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x237 = 464U;
	int64_t x238 = -1LL;
	uint32_t x239 = 11U;
	volatile int64_t x240 = INT64_MIN;
	int32_t t52 = -69496;

	t52 = (x237<((x238+x239)%x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x241 = INT64_MIN;
	uint16_t x242 = UINT16_MAX;
	int32_t x243 = 1935;
	static int32_t t53 = 477760;

	t53 = (x241<((x242+x243)%x244));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x245 = 7;
	static uint16_t x246 = UINT16_MAX;
	static uint8_t x247 = 76U;
	int16_t x248 = INT16_MIN;
	static int32_t t54 = 90;

	t54 = (x245<((x246+x247)%x248));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x249 = 7;
	int32_t x252 = -1;
	int32_t t55 = 190249272;

	t55 = (x249<((x250+x251)%x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x253 = -1;
	int16_t x254 = -4;
	volatile uint32_t x255 = UINT32_MAX;
	static int32_t x256 = INT32_MIN;
	int32_t t56 = 42464;

	t56 = (x253<((x254+x255)%x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x258 = UINT16_MAX;
	volatile int32_t x259 = INT32_MIN;
	uint64_t x260 = 2109067571LLU;
	int32_t t57 = -111;

	t57 = (x257<((x258+x259)%x260));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x261 = INT16_MIN;
	static int8_t x262 = INT8_MIN;
	volatile uint32_t x263 = 172300081U;
	static uint64_t x264 = UINT64_MAX;
	volatile int32_t t58 = 2863;

	t58 = (x261<((x262+x263)%x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x265 = 25815U;
	volatile uint32_t x266 = 42699475U;
	volatile int16_t x267 = INT16_MIN;
	int32_t t59 = 10;

	t59 = (x265<((x266+x267)%x268));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = INT8_MAX;
	uint64_t x270 = 1LLU;
	int16_t x272 = -467;
	int32_t t60 = 891;

	t60 = (x269<((x270+x271)%x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MIN;
	int16_t x274 = INT16_MAX;
	static int8_t x275 = -1;
	int8_t x276 = -1;
	int32_t t61 = 162637;

	t61 = (x273<((x274+x275)%x276));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x277 = 2011U;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t62 = -5045;

	t62 = (x277<((x278+x279)%x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x281 = 26U;
	int32_t x282 = -590840872;
	int8_t x284 = -1;
	volatile int32_t t63 = -7965;

	t63 = (x281<((x282+x283)%x284));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x286 = -6654;
	int32_t x287 = -388065;
	volatile int64_t x288 = -1LL;

	t64 = (x285<((x286+x287)%x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x289 = -1;
	static int32_t x290 = -11;
	static int64_t x291 = 60688068146LL;
	uint8_t x292 = 1U;
	int32_t t65 = -188938662;

	t65 = (x289<((x290+x291)%x292));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x293 = UINT32_MAX;
	uint8_t x294 = 17U;
	int32_t t66 = 52040;

	t66 = (x293<((x294+x295)%x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x297 = 3292U;

	t67 = (x297<((x298+x299)%x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = -1;
	static int8_t x310 = 7;
	volatile int8_t x311 = -5;
	static uint16_t x312 = 1196U;
	int32_t t68 = -167052344;

	t68 = (x309<((x310+x311)%x312));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x313 = 14665LL;
	int64_t x314 = 38LL;
	volatile uint64_t x315 = 1LLU;
	volatile int32_t t69 = -13158912;

	t69 = (x313<((x314+x315)%x316));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x321 = 511LLU;
	int64_t x322 = INT64_MIN;
	int16_t x323 = INT16_MAX;
	static int16_t x324 = INT16_MIN;
	volatile int32_t t70 = -1978837;

	t70 = (x321<((x322+x323)%x324));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = INT64_MIN;
	int32_t x326 = -1813940;
	int64_t x328 = 70750889538428LL;

	t71 = (x325<((x326+x327)%x328));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x329 = INT64_MAX;
	static int64_t x331 = INT64_MAX;
	volatile int16_t x332 = -3;
	volatile int32_t t72 = 816119;

	t72 = (x329<((x330+x331)%x332));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x335 = 26;
	volatile int8_t x336 = -1;
	int32_t t73 = -1;

	t73 = (x333<((x334+x335)%x336));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x337 = UINT16_MAX;
	static int16_t x338 = -1598;
	static uint8_t x339 = 15U;
	uint64_t x340 = 2027LLU;
	int32_t t74 = 23;

	t74 = (x337<((x338+x339)%x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x341 = INT32_MAX;
	static int8_t x342 = INT8_MIN;
	uint32_t x343 = UINT32_MAX;
	uint64_t x344 = UINT64_MAX;
	volatile int32_t t75 = 197;

	t75 = (x341<((x342+x343)%x344));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x353 = UINT32_MAX;
	int16_t x354 = INT16_MAX;
	volatile uint32_t x355 = 177238U;
	volatile int8_t x356 = -1;
	int32_t t76 = -106786110;

	t76 = (x353<((x354+x355)%x356));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = -1;
	int16_t x358 = -1208;
	int8_t x359 = -1;
	volatile int32_t t77 = -238612624;

	t77 = (x357<((x358+x359)%x360));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x362 = 2045U;
	int32_t x363 = INT32_MIN;
	static volatile int32_t t78 = -15982;

	t78 = (x361<((x362+x363)%x364));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x365 = 69926U;
	int32_t x367 = 239;
	static uint16_t x368 = UINT16_MAX;

	t79 = (x365<((x366+x367)%x368));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x371 = 1;
	volatile int64_t x372 = 30154LL;
	static int32_t t80 = 4;

	t80 = (x369<((x370+x371)%x372));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x377 = 1064685769LL;
	int8_t x378 = -1;
	int32_t x379 = -1;
	int16_t x380 = -1;
	int32_t t81 = 1125;

	t81 = (x377<((x378+x379)%x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x381 = INT8_MAX;
	int32_t t82 = -1436;

	t82 = (x381<((x382+x383)%x384));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x393 = 395477417U;
	int32_t x394 = 203;
	int32_t t83 = 50486;

	t83 = (x393<((x394+x395)%x396));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x397 = INT8_MIN;
	int8_t x398 = INT8_MIN;
	static int8_t x399 = INT8_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t84 = 29416;

	t84 = (x397<((x398+x399)%x400));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x403 = 19;
	static int16_t x404 = INT16_MAX;
	static volatile int32_t t85 = 40520;

	t85 = (x401<((x402+x403)%x404));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x405 = 1256U;
	int32_t x406 = 58936;
	int16_t x408 = INT16_MIN;
	int32_t t86 = -17;

	t86 = (x405<((x406+x407)%x408));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x409 = INT64_MIN;
	int64_t x410 = -1LL;
	int8_t x412 = INT8_MIN;

	t87 = (x409<((x410+x411)%x412));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x413 = -1;
	int16_t x414 = 856;
	int16_t x415 = INT16_MIN;
	uint32_t x416 = 779U;
	static volatile int32_t t88 = 8973;

	t88 = (x413<((x414+x415)%x416));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x417 = INT64_MIN;
	static uint8_t x418 = 33U;
	volatile uint16_t x420 = 1U;
	volatile int32_t t89 = -795188;

	t89 = (x417<((x418+x419)%x420));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x421 = UINT32_MAX;
	int64_t x422 = 3287249958LL;
	static volatile int16_t x424 = INT16_MIN;

	t90 = (x421<((x422+x423)%x424));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x425 = 557070849272LL;
	int8_t x426 = 1;
	int32_t x427 = -1;
	volatile int16_t x428 = 153;
	volatile int32_t t91 = 1;

	t91 = (x425<((x426+x427)%x428));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x433 = UINT16_MAX;
	int8_t x434 = INT8_MAX;
	uint16_t x435 = 6146U;
	volatile int32_t t92 = 835882230;

	t92 = (x433<((x434+x435)%x436));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x438 = INT8_MIN;
	uint64_t x439 = UINT64_MAX;
	int16_t x440 = 9236;
	int32_t t93 = -2145;

	t93 = (x437<((x438+x439)%x440));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x441 = INT8_MIN;
	uint32_t x443 = UINT32_MAX;
	static uint64_t x444 = 36580LLU;

	t94 = (x441<((x442+x443)%x444));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x445 = UINT64_MAX;
	volatile int8_t x447 = 6;
	uint64_t x448 = UINT64_MAX;
	volatile int32_t t95 = 764;

	t95 = (x445<((x446+x447)%x448));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x450 = UINT8_MAX;
	int16_t x451 = 0;
	int64_t x452 = -1LL;
	static int32_t t96 = 452871739;

	t96 = (x449<((x450+x451)%x452));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x453 = 1;
	int8_t x454 = 62;
	static volatile int32_t t97 = -266637666;

	t97 = (x453<((x454+x455)%x456));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x459 = UINT64_MAX;
	uint8_t x460 = 6U;
	int32_t t98 = 71332;

	t98 = (x457<((x458+x459)%x460));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x462 = UINT32_MAX;
	uint16_t x463 = UINT16_MAX;
	static volatile uint16_t x464 = UINT16_MAX;
	static volatile int32_t t99 = -18;

	t99 = (x461<((x462+x463)%x464));

	if (t99 != 0) { NG(); } else { ; }
	
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

