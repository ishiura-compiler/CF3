#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -1LL;
uint8_t x8 = UINT8_MAX;
uint8_t x22 = 3U;
static volatile int16_t x26 = INT16_MIN;
uint8_t x27 = 1U;
uint16_t x33 = 263U;
int16_t x38 = 5938;
int64_t x40 = INT64_MIN;
int64_t x52 = INT64_MAX;
int64_t t15 = -39317969762598040LL;
uint8_t x71 = UINT8_MAX;
volatile uint32_t x72 = UINT32_MAX;
int64_t x76 = -895988LL;
int64_t x81 = -120015LL;
volatile int64_t t20 = -7196754332LL;
int64_t x91 = -11125LL;
static volatile int32_t t22 = -17;
static int8_t x99 = INT8_MIN;
uint8_t x101 = 0U;
int16_t x110 = -1;
int64_t x112 = INT64_MIN;
uint16_t x117 = 15128U;
static uint8_t x126 = UINT8_MAX;
int64_t x142 = INT64_MIN;
int8_t x143 = -43;
int16_t x157 = -1515;
uint32_t x168 = 678U;
volatile int64_t x170 = INT64_MIN;
int64_t x172 = 396LL;
static int8_t x174 = INT8_MIN;
static volatile uint32_t x175 = UINT32_MAX;
uint16_t x182 = UINT16_MAX;
static volatile int32_t x186 = -22993777;
uint32_t x188 = 14838U;
static volatile uint32_t t44 = 3775980U;
static uint64_t x194 = 3251151064486940LLU;
volatile uint64_t t46 = 2213833145521059LLU;
static int32_t x197 = INT32_MAX;
int32_t t47 = 9919774;
int32_t x202 = INT32_MAX;
uint8_t x204 = 67U;
uint64_t t50 = 76LLU;
uint64_t x215 = 1LLU;
uint32_t x218 = 122U;
int16_t x221 = INT16_MIN;
int64_t x223 = INT64_MIN;
static volatile int32_t t53 = 8618;
static uint64_t x236 = UINT64_MAX;
volatile int64_t x248 = -1465553659970956049LL;
int64_t t57 = 93LL;
uint32_t x251 = 361819404U;
volatile int32_t t58 = 7854412;
uint32_t x254 = UINT32_MAX;
int32_t x255 = INT32_MIN;
int64_t x263 = INT64_MIN;
int8_t x265 = -1;
static volatile uint32_t x279 = UINT32_MAX;
int64_t x282 = INT64_MIN;
int32_t t66 = -8;
int8_t x290 = INT8_MIN;
int32_t x292 = 7446262;
int64_t x296 = -18256488LL;
int64_t x297 = INT64_MIN;
int16_t x300 = 1;
int32_t x304 = INT32_MIN;
volatile int32_t t71 = 353;
uint32_t x308 = 15U;
int16_t x321 = INT16_MIN;
uint32_t x324 = 98266355U;
static uint32_t x332 = UINT32_MAX;
static int8_t x333 = -11;
int8_t x335 = INT8_MIN;
volatile int32_t x336 = INT32_MIN;
uint8_t x350 = 0U;
int16_t x354 = INT16_MAX;
volatile int8_t x359 = -1;
static int64_t x369 = -493373733044899074LL;
static int64_t x370 = 3633LL;
int16_t x374 = -250;
volatile uint32_t x375 = 7U;
volatile int64_t t91 = -123568085118054635LL;
int64_t x385 = -78453LL;
int32_t x387 = INT32_MIN;
int16_t x395 = INT16_MIN;
uint32_t x409 = 4833086U;


void f0(void) {
	static uint8_t x1 = 51U;
	int16_t x2 = 393;
	int32_t x3 = INT32_MIN;
	int64_t t0 = -5LL;

	t0 = ((x1<=(x2%x3))/x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	static int64_t x6 = INT64_MAX;
	int32_t x7 = INT32_MAX;
	int32_t t1 = 11441;

	t1 = ((x5<=(x6%x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -12;
	volatile uint8_t x10 = UINT8_MAX;
	int32_t x11 = INT32_MIN;
	static int64_t x12 = -4527735LL;
	volatile int64_t t2 = 621LL;

	t2 = ((x9<=(x10%x11))/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	int32_t x14 = INT32_MIN;
	static int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MAX;
	int32_t t3 = 222;

	t3 = ((x13<=(x14%x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -6;
	int32_t x18 = INT32_MIN;
	static int16_t x19 = INT16_MAX;
	int32_t x20 = INT32_MAX;
	int32_t t4 = 237;

	t4 = ((x17<=(x18%x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -27150281;
	uint16_t x23 = 462U;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = 13327520;

	t5 = ((x21<=(x22%x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 61;

	t6 = ((x25<=(x26%x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -34;
	int32_t x30 = -1;
	int8_t x31 = -34;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -81;

	t7 = ((x29<=(x30%x31))/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = UINT64_MAX;
	uint32_t x35 = 218115U;
	static uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 9612;

	t8 = ((x33<=(x34%x35))/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	volatile int64_t x39 = -1LL;
	static int64_t t9 = 1336976LL;

	t9 = ((x37<=(x38%x39))/x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	uint64_t x42 = UINT64_MAX;
	int32_t x43 = 61;
	volatile uint16_t x44 = UINT16_MAX;
	int32_t t10 = 1412924;

	t10 = ((x41<=(x42%x43))/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint32_t x46 = 69999U;
	static uint16_t x47 = 2795U;
	int64_t x48 = INT64_MIN;
	int64_t t11 = 103574183LL;

	t11 = ((x45<=(x46%x47))/x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = -1;
	int64_t x50 = INT64_MIN;
	int16_t x51 = INT16_MAX;
	volatile int64_t t12 = -166LL;

	t12 = ((x49<=(x50%x51))/x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	volatile int64_t x54 = INT64_MIN;
	int8_t x55 = 1;
	volatile int8_t x56 = INT8_MIN;
	int32_t t13 = 205930547;

	t13 = ((x53<=(x54%x55))/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	static int32_t x62 = -1;
	static uint64_t x63 = UINT64_MAX;
	int16_t x64 = -1;
	int32_t t14 = 1974546;

	t14 = ((x61<=(x62%x63))/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x65 = -2;
	uint16_t x66 = UINT16_MAX;
	static uint16_t x67 = 3U;
	int64_t x68 = INT64_MIN;

	t15 = ((x65<=(x66%x67))/x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	static int16_t x70 = INT16_MAX;
	volatile uint32_t t16 = 25975700U;

	t16 = ((x69<=(x70%x71))/x72);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x73 = 5U;
	static int64_t x74 = -2714270097579439LL;
	int16_t x75 = INT16_MIN;
	volatile int64_t t17 = 60075LL;

	t17 = ((x73<=(x74%x75))/x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = INT8_MIN;
	int32_t x78 = -261099;
	int64_t x79 = INT64_MAX;
	int64_t x80 = INT64_MIN;
	int64_t t18 = 429566575LL;

	t18 = ((x77<=(x78%x79))/x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x82 = 186U;
	int32_t x83 = 38;
	uint8_t x84 = 1U;
	static int32_t t19 = -225378;

	t19 = ((x81<=(x82%x83))/x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x85 = INT32_MIN;
	uint64_t x86 = 39194349442LLU;
	int64_t x87 = INT64_MIN;
	static int64_t x88 = INT64_MAX;

	t20 = ((x85<=(x86%x87))/x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -1LL;
	int32_t x90 = INT32_MIN;
	uint8_t x92 = UINT8_MAX;
	int32_t t21 = 7;

	t21 = ((x89<=(x90%x91))/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = INT16_MAX;
	int16_t x94 = -1;
	volatile uint16_t x95 = 3224U;
	volatile int32_t x96 = INT32_MIN;

	t22 = ((x93<=(x94%x95))/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = 7072373;
	static volatile int32_t x98 = -1;
	uint8_t x100 = UINT8_MAX;
	int32_t t23 = 130741887;

	t23 = ((x97<=(x98%x99))/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x102 = UINT64_MAX;
	uint32_t x103 = 225639U;
	static int16_t x104 = 28;
	volatile int32_t t24 = 2398;

	t24 = ((x101<=(x102%x103))/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -4;
	volatile int8_t x106 = INT8_MAX;
	uint8_t x107 = UINT8_MAX;
	int32_t x108 = -4493;
	int32_t t25 = -790;

	t25 = ((x105<=(x106%x107))/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x109 = INT32_MIN;
	int16_t x111 = INT16_MIN;
	int64_t t26 = 116216550622LL;

	t26 = ((x109<=(x110%x111))/x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 32579U;
	uint8_t x114 = 0U;
	volatile int64_t x115 = INT64_MIN;
	volatile uint32_t x116 = 646U;
	volatile uint32_t t27 = 1967550079U;

	t27 = ((x113<=(x114%x115))/x116);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x118 = 443869668529378653LLU;
	volatile int64_t x119 = INT64_MIN;
	int64_t x120 = INT64_MIN;
	static int64_t t28 = 5492235321434912LL;

	t28 = ((x117<=(x118%x119))/x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	volatile int64_t x122 = INT64_MIN;
	uint16_t x123 = 62U;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t29 = -137943;

	t29 = ((x121<=(x122%x123))/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 15U;
	int8_t x127 = -1;
	static int16_t x128 = -12617;
	static int32_t t30 = -1;

	t30 = ((x125<=(x126%x127))/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = INT64_MIN;
	int64_t x131 = -3LL;
	int64_t x132 = INT64_MAX;
	int64_t t31 = 1814138LL;

	t31 = ((x129<=(x130%x131))/x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MAX;
	int32_t x134 = INT32_MAX;
	static int16_t x135 = -339;
	static int16_t x136 = INT16_MIN;
	static int32_t t32 = -188;

	t32 = ((x133<=(x134%x135))/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = 29U;
	volatile int32_t x138 = -1;
	int16_t x139 = -15;
	int16_t x140 = INT16_MIN;
	int32_t t33 = -209;

	t33 = ((x137<=(x138%x139))/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x141 = 27U;
	int32_t x144 = INT32_MAX;
	int32_t t34 = 66149831;

	t34 = ((x141<=(x142%x143))/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x145 = -1;
	int8_t x146 = 62;
	static int64_t x147 = INT64_MIN;
	static volatile int16_t x148 = -1;
	int32_t t35 = 14209274;

	t35 = ((x145<=(x146%x147))/x148);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = -1;
	volatile uint64_t x150 = 60928682528325877LLU;
	int32_t x151 = INT32_MAX;
	volatile uint8_t x152 = UINT8_MAX;
	volatile int32_t t36 = -117;

	t36 = ((x149<=(x150%x151))/x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x158 = INT8_MAX;
	int16_t x159 = 43;
	volatile uint32_t x160 = UINT32_MAX;
	uint32_t t37 = 391U;

	t37 = ((x157<=(x158%x159))/x160);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = UINT32_MAX;
	volatile uint64_t x162 = 284083734255240595LLU;
	uint16_t x163 = UINT16_MAX;
	static volatile int16_t x164 = -1;
	int32_t t38 = -348239;

	t38 = ((x161<=(x162%x163))/x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	static uint32_t x166 = 706668U;
	int8_t x167 = INT8_MAX;
	static volatile uint32_t t39 = 985273053U;

	t39 = ((x165<=(x166%x167))/x168);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MIN;
	int8_t x171 = -1;
	static volatile int64_t t40 = 234558001254LL;

	t40 = ((x169<=(x170%x171))/x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = -1LL;
	int16_t x176 = INT16_MIN;
	int32_t t41 = -854822367;

	t41 = ((x173<=(x174%x175))/x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x177 = 677627U;
	static int8_t x178 = INT8_MIN;
	uint16_t x179 = 18U;
	int8_t x180 = INT8_MIN;
	int32_t t42 = 12447729;

	t42 = ((x177<=(x178%x179))/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = UINT8_MAX;
	uint8_t x183 = UINT8_MAX;
	static int64_t x184 = 183666980295261LL;
	int64_t t43 = 2986322210413LL;

	t43 = ((x181<=(x182%x183))/x184);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MAX;
	uint16_t x187 = 153U;

	t44 = ((x185<=(x186%x187))/x188);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = INT16_MIN;
	uint64_t x190 = UINT64_MAX;
	uint16_t x191 = UINT16_MAX;
	volatile int32_t x192 = -90;
	int32_t t45 = 131;

	t45 = ((x189<=(x190%x191))/x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -1LL;
	uint32_t x195 = 164079U;
	static volatile uint64_t x196 = 3515349223239476LLU;

	t46 = ((x193<=(x194%x195))/x196);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x198 = 55240LLU;
	int32_t x199 = INT32_MIN;
	int32_t x200 = -815309;

	t47 = ((x197<=(x198%x199))/x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x201 = 104LLU;
	uint16_t x203 = UINT16_MAX;
	static volatile int32_t t48 = 14867129;

	t48 = ((x201<=(x202%x203))/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -1LL;
	uint16_t x206 = UINT16_MAX;
	volatile int32_t x207 = INT32_MIN;
	volatile uint32_t x208 = 117139U;
	uint32_t t49 = 3912664U;

	t49 = ((x205<=(x206%x207))/x208);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	uint64_t x212 = 1986978LLU;

	t50 = ((x209<=(x210%x211))/x212);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = 58;
	int16_t x214 = INT16_MIN;
	int32_t x216 = INT32_MIN;
	int32_t t51 = 157020;

	t51 = ((x213<=(x214%x215))/x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x217 = UINT16_MAX;
	int16_t x219 = INT16_MIN;
	static int32_t x220 = INT32_MIN;
	volatile int32_t t52 = -1674;

	t52 = ((x217<=(x218%x219))/x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x222 = 123U;
	volatile int16_t x224 = INT16_MAX;

	t53 = ((x221<=(x222%x223))/x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = INT8_MAX;
	static int8_t x226 = INT8_MAX;
	uint16_t x227 = UINT16_MAX;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t54 = -48792;

	t54 = ((x225<=(x226%x227))/x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = INT64_MIN;
	static int8_t x234 = -1;
	int8_t x235 = -1;
	uint64_t t55 = 1089787LLU;

	t55 = ((x233<=(x234%x235))/x236);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = INT64_MAX;
	static volatile int64_t x242 = INT64_MIN;
	int64_t x243 = 24921841567LL;
	static volatile uint16_t x244 = 356U;
	int32_t t56 = -2;

	t56 = ((x241<=(x242%x243))/x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x245 = -2;
	volatile uint8_t x246 = UINT8_MAX;
	static int64_t x247 = INT64_MIN;

	t57 = ((x245<=(x246%x247))/x248);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = INT8_MIN;
	uint8_t x250 = 34U;
	static int32_t x252 = -100075;

	t58 = ((x249<=(x250%x251))/x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = INT16_MIN;
	int64_t x256 = -1LL;
	volatile int64_t t59 = 5830217742326LL;

	t59 = ((x253<=(x254%x255))/x256);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x257 = 3080U;
	uint8_t x258 = 1U;
	int16_t x259 = INT16_MAX;
	int8_t x260 = INT8_MAX;
	int32_t t60 = 893;

	t60 = ((x257<=(x258%x259))/x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x261 = INT32_MIN;
	int8_t x262 = 0;
	uint64_t x264 = 432LLU;
	uint64_t t61 = 33379LLU;

	t61 = ((x261<=(x262%x263))/x264);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x266 = INT64_MIN;
	int8_t x267 = -1;
	int32_t x268 = -1;
	static volatile int32_t t62 = 1704;

	t62 = ((x265<=(x266%x267))/x268);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x269 = UINT16_MAX;
	volatile int32_t x270 = INT32_MIN;
	static int64_t x271 = INT64_MIN;
	int8_t x272 = INT8_MAX;
	volatile int32_t t63 = 12380;

	t63 = ((x269<=(x270%x271))/x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x273 = INT32_MIN;
	int16_t x274 = INT16_MIN;
	int16_t x275 = INT16_MIN;
	static volatile int64_t x276 = -2LL;
	volatile int64_t t64 = 42843035948305LL;

	t64 = ((x273<=(x274%x275))/x276);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = -1;
	static int64_t x278 = INT64_MIN;
	int8_t x280 = 23;
	volatile int32_t t65 = -6399;

	t65 = ((x277<=(x278%x279))/x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = INT32_MIN;
	int64_t x283 = INT64_MIN;
	int32_t x284 = INT32_MIN;

	t66 = ((x281<=(x282%x283))/x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x285 = 113609343U;
	int32_t x286 = INT32_MIN;
	volatile int32_t x287 = 7;
	static uint16_t x288 = 1133U;
	volatile int32_t t67 = 0;

	t67 = ((x285<=(x286%x287))/x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = -1LL;
	static volatile uint16_t x291 = UINT16_MAX;
	int32_t t68 = -1;

	t68 = ((x289<=(x290%x291))/x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x293 = UINT64_MAX;
	uint8_t x294 = 15U;
	static int64_t x295 = INT64_MIN;
	volatile int64_t t69 = -94466286923041042LL;

	t69 = ((x293<=(x294%x295))/x296);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x298 = 3;
	int32_t x299 = INT32_MIN;
	int32_t t70 = -14;

	t70 = ((x297<=(x298%x299))/x300);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x301 = 0U;
	int16_t x302 = -11627;
	volatile int8_t x303 = INT8_MAX;

	t71 = ((x301<=(x302%x303))/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = INT64_MIN;
	int16_t x306 = INT16_MIN;
	int64_t x307 = -1LL;
	volatile uint32_t t72 = 2365803U;

	t72 = ((x305<=(x306%x307))/x308);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x309 = 8U;
	int32_t x310 = INT32_MIN;
	int8_t x311 = -1;
	int8_t x312 = INT8_MIN;
	int32_t t73 = -406;

	t73 = ((x309<=(x310%x311))/x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = -13043025905300590LL;
	static uint32_t x314 = 9570U;
	int64_t x315 = 113395566LL;
	volatile int16_t x316 = 1833;
	int32_t t74 = -1;

	t74 = ((x313<=(x314%x315))/x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = -16;
	uint16_t x318 = 400U;
	int8_t x319 = INT8_MIN;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t75 = 6071;

	t75 = ((x317<=(x318%x319))/x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x322 = -768490173;
	volatile int8_t x323 = 3;
	volatile uint32_t t76 = 0U;

	t76 = ((x321<=(x322%x323))/x324);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = INT16_MIN;
	int8_t x326 = 7;
	int32_t x327 = 3762538;
	int8_t x328 = INT8_MAX;
	int32_t t77 = -661;

	t77 = ((x325<=(x326%x327))/x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x329 = 4309588U;
	volatile int8_t x330 = -1;
	volatile uint8_t x331 = 3U;
	volatile uint32_t t78 = 490U;

	t78 = ((x329<=(x330%x331))/x332);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x334 = INT32_MIN;
	static int32_t t79 = -118044160;

	t79 = ((x333<=(x334%x335))/x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = INT16_MAX;
	uint64_t x338 = 114337191088306760LLU;
	static int8_t x339 = -10;
	volatile int32_t x340 = -47;
	int32_t t80 = -400856;

	t80 = ((x337<=(x338%x339))/x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = 1LL;
	uint8_t x342 = 35U;
	int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MAX;
	int32_t t81 = -115808169;

	t81 = ((x341<=(x342%x343))/x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = 10081482LL;
	int16_t x346 = INT16_MIN;
	int64_t x347 = -1LL;
	volatile int32_t x348 = INT32_MIN;
	volatile int32_t t82 = -2562582;

	t82 = ((x345<=(x346%x347))/x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = -12;
	uint32_t x351 = UINT32_MAX;
	static int16_t x352 = 524;
	volatile int32_t t83 = 56257;

	t83 = ((x349<=(x350%x351))/x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x353 = 1U;
	static int16_t x355 = INT16_MAX;
	int64_t x356 = INT64_MIN;
	volatile int64_t t84 = 10063839770104LL;

	t84 = ((x353<=(x354%x355))/x356);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = -928LL;
	volatile uint16_t x358 = UINT16_MAX;
	int8_t x360 = -18;
	int32_t t85 = 7285;

	t85 = ((x357<=(x358%x359))/x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = -1LL;
	int64_t x362 = INT64_MIN;
	static int64_t x363 = -460LL;
	static int32_t x364 = INT32_MIN;
	int32_t t86 = 1036;

	t86 = ((x361<=(x362%x363))/x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x365 = 55U;
	static volatile int64_t x366 = 16675LL;
	volatile int32_t x367 = INT32_MAX;
	int8_t x368 = -1;
	static int32_t t87 = -2335003;

	t87 = ((x365<=(x366%x367))/x368);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x371 = 84U;
	uint16_t x372 = 25U;
	int32_t t88 = 1047891;

	t88 = ((x369<=(x370%x371))/x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = 2;
	volatile uint64_t x376 = 3598500545211933117LLU;
	volatile uint64_t t89 = 6596837LLU;

	t89 = ((x373<=(x374%x375))/x376);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x377 = INT64_MIN;
	int32_t x378 = INT32_MIN;
	volatile int32_t x379 = -3065180;
	int64_t x380 = INT64_MIN;
	int64_t t90 = 149626175361371092LL;

	t90 = ((x377<=(x378%x379))/x380);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x381 = INT32_MIN;
	int8_t x382 = INT8_MIN;
	static uint8_t x383 = 27U;
	static int64_t x384 = -1LL;

	t91 = ((x381<=(x382%x383))/x384);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x386 = INT8_MAX;
	int8_t x388 = INT8_MAX;
	volatile int32_t t92 = 236804136;

	t92 = ((x385<=(x386%x387))/x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = INT16_MIN;
	int32_t x390 = INT32_MIN;
	uint64_t x391 = 12614354270LLU;
	int16_t x392 = INT16_MAX;
	volatile int32_t t93 = 6;

	t93 = ((x389<=(x390%x391))/x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x393 = INT8_MAX;
	uint8_t x394 = 64U;
	volatile uint16_t x396 = UINT16_MAX;
	volatile int32_t t94 = -2;

	t94 = ((x393<=(x394%x395))/x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = -30;
	int32_t x398 = INT32_MAX;
	static uint64_t x399 = 25LLU;
	uint64_t x400 = 26239LLU;
	volatile uint64_t t95 = 1092245303331483LLU;

	t95 = ((x397<=(x398%x399))/x400);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x401 = UINT64_MAX;
	int8_t x402 = INT8_MIN;
	static uint16_t x403 = UINT16_MAX;
	uint64_t x404 = 5LLU;
	volatile uint64_t t96 = 3291471526LLU;

	t96 = ((x401<=(x402%x403))/x404);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x405 = UINT32_MAX;
	static int16_t x406 = INT16_MIN;
	uint8_t x407 = 2U;
	static volatile int16_t x408 = INT16_MIN;
	int32_t t97 = 82971;

	t97 = ((x405<=(x406%x407))/x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x410 = INT16_MIN;
	volatile int64_t x411 = INT64_MIN;
	uint64_t x412 = 30LLU;
	uint64_t t98 = 770653979393486LLU;

	t98 = ((x409<=(x410%x411))/x412);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = -1;
	int16_t x414 = -1;
	int32_t x415 = INT32_MAX;
	int32_t x416 = -392517;
	volatile int32_t t99 = 1;

	t99 = ((x413<=(x414%x415))/x416);

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

