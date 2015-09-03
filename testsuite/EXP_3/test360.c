#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
uint64_t x14 = 535750734LLU;
uint64_t x37 = 31682565004492707LLU;
int8_t x40 = INT8_MIN;
int32_t x51 = INT32_MAX;
volatile int32_t t8 = 1206;
static uint64_t x61 = UINT64_MAX;
volatile int64_t x63 = 4758512LL;
int32_t t10 = -22378;
uint64_t x70 = UINT64_MAX;
volatile uint32_t x77 = 8404U;
volatile int64_t x80 = -1LL;
uint16_t x81 = 0U;
int32_t x97 = -1;
volatile uint32_t x98 = UINT32_MAX;
uint32_t x102 = UINT32_MAX;
int64_t x105 = INT64_MIN;
uint8_t x115 = 27U;
uint64_t x116 = 96LLU;
uint16_t x133 = UINT16_MAX;
volatile int8_t x135 = 1;
volatile int32_t t21 = 16420;
int32_t t22 = -11;
uint8_t x141 = UINT8_MAX;
int32_t t23 = -7465;
int32_t x147 = INT32_MAX;
int32_t t24 = -120082;
int16_t x151 = -41;
int32_t t25 = -363801;
static int8_t x154 = INT8_MIN;
static volatile int32_t t26 = -121285597;
static int64_t x159 = 2467466400541LL;
int32_t t27 = 119;
int16_t x163 = -50;
int16_t x164 = -1;
int32_t t28 = -6725852;
int32_t t29 = -929;
uint16_t x170 = UINT16_MAX;
int8_t x173 = INT8_MIN;
int32_t x175 = -1;
int8_t x180 = INT8_MIN;
int16_t x183 = INT16_MIN;
static int8_t x184 = 0;
int32_t t33 = 113385;
static int32_t t34 = 34302;
int32_t x201 = INT32_MIN;
int64_t x209 = 131897572337641975LL;
volatile int32_t t39 = -31458;
static int8_t x220 = -4;
int32_t x225 = INT32_MIN;
uint64_t x232 = 99LLU;
uint32_t x236 = 490395U;
uint32_t x245 = UINT32_MAX;
int8_t x260 = INT8_MIN;
volatile uint32_t x266 = 4034618U;
volatile int32_t t48 = 513392;
int32_t t49 = -225064424;
int8_t x286 = INT8_MIN;
int16_t x290 = INT16_MAX;
volatile int32_t t52 = 1;
volatile int32_t x306 = -620523535;
int64_t x307 = -13251LL;
int16_t x316 = INT16_MAX;
int32_t t54 = -186481;
volatile int32_t t55 = 82648439;
uint16_t x340 = UINT16_MAX;
int64_t x349 = -10327299502647LL;
int64_t x351 = -238197313902549LL;
static int64_t x354 = -9201690240482515LL;
static int32_t x357 = INT32_MIN;
uint16_t x359 = 61U;
int16_t x362 = -1;
int16_t x364 = 8884;
volatile int32_t t62 = 2;
int8_t x368 = INT8_MAX;
int32_t t63 = -49773611;
int8_t x372 = INT8_MIN;
volatile uint64_t x373 = 4142437299662790LLU;
int32_t t65 = -617036;
uint16_t x389 = 7U;
int16_t x393 = INT16_MIN;
static int32_t t68 = 26;
uint64_t x397 = 28588905LLU;
int8_t x406 = INT8_MIN;
volatile int32_t t71 = 10308;
static uint32_t x420 = 2966U;
uint64_t x424 = 10LLU;
static uint8_t x431 = 2U;
static volatile int32_t t75 = 25;
uint8_t x435 = 2U;
volatile int64_t x436 = -1LL;
static volatile uint8_t x441 = UINT8_MAX;
volatile uint32_t x449 = 94583747U;
int32_t t79 = 35700;
uint32_t x464 = 34233833U;
int32_t t82 = 10;
uint64_t x472 = 2771844513060LLU;
int32_t t84 = -52797;
uint64_t x489 = 0LLU;
uint8_t x513 = UINT8_MAX;
int8_t x519 = INT8_MIN;
static uint32_t x527 = UINT32_MAX;
uint16_t x532 = UINT16_MAX;
int64_t x550 = 114LL;
int16_t x573 = INT16_MIN;
static int16_t x574 = INT16_MIN;
static int8_t x579 = 1;


void f0(void) {
	uint8_t x1 = 0U;
	static int8_t x2 = -1;
	int64_t x4 = -1LL;
	int32_t t0 = -90472;

	t0 = ((x1-x2)<(x3*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 38LLU;
	static volatile int8_t x10 = -1;
	static int8_t x11 = -1;
	static int16_t x12 = INT16_MIN;
	volatile int32_t t1 = 19278002;

	t1 = ((x9-x10)<(x11*x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x13 = UINT16_MAX;
	static int8_t x15 = -3;
	int32_t x16 = -1;
	volatile int32_t t2 = 2429;

	t2 = ((x13-x14)<(x15*x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = -1;
	uint32_t x18 = UINT32_MAX;
	int8_t x19 = -16;
	int32_t x20 = -1;
	int32_t t3 = 0;

	t3 = ((x17-x18)<(x19*x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 136179849LLU;
	int8_t x22 = 36;
	int64_t x23 = -555827706576LL;
	static volatile int8_t x24 = INT8_MIN;
	int32_t t4 = -1418;

	t4 = ((x21-x22)<(x23*x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 95U;
	int8_t x26 = -1;
	int16_t x27 = 0;
	volatile int16_t x28 = INT16_MIN;
	volatile int32_t t5 = -2;

	t5 = ((x25-x26)<(x27*x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MAX;
	static int64_t x30 = INT64_MAX;
	uint64_t x31 = UINT64_MAX;
	volatile int32_t x32 = INT32_MAX;
	int32_t t6 = -1;

	t6 = ((x29-x30)<(x31*x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x38 = 7025432;
	static uint64_t x39 = 2480LLU;
	static int32_t t7 = 95005;

	t7 = ((x37-x38)<(x39*x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x49 = UINT64_MAX;
	int64_t x50 = -1LL;
	static int8_t x52 = -1;

	t8 = ((x49-x50)<(x51*x52));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x62 = INT16_MAX;
	uint32_t x64 = UINT32_MAX;
	int32_t t9 = -8;

	t9 = ((x61-x62)<(x63*x64));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = -5;
	int32_t x66 = INT32_MIN;
	int32_t x67 = INT32_MIN;
	uint64_t x68 = 7057495202816988148LLU;

	t10 = ((x65-x66)<(x67*x68));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x69 = UINT8_MAX;
	volatile int8_t x71 = INT8_MIN;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t11 = 1631;

	t11 = ((x69-x70)<(x71*x72));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x73 = -1737757;
	volatile int64_t x74 = -1LL;
	int8_t x75 = INT8_MIN;
	volatile int16_t x76 = -1;
	int32_t t12 = 1;

	t12 = ((x73-x74)<(x75*x76));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x78 = 405975205LLU;
	int16_t x79 = INT16_MAX;
	int32_t t13 = 2182416;

	t13 = ((x77-x78)<(x79*x80));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x82 = 119045858;
	uint16_t x83 = 123U;
	int16_t x84 = INT16_MAX;
	int32_t t14 = 116309;

	t14 = ((x81-x82)<(x83*x84));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x99 = -5;
	int8_t x100 = -1;
	static int32_t t15 = -7030;

	t15 = ((x97-x98)<(x99*x100));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x101 = INT16_MAX;
	int16_t x103 = -3;
	static uint32_t x104 = 645046613U;
	volatile int32_t t16 = 0;

	t16 = ((x101-x102)<(x103*x104));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x106 = -1;
	int64_t x107 = -1LL;
	static int64_t x108 = INT64_MAX;
	int32_t t17 = 21721898;

	t17 = ((x105-x106)<(x107*x108));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x109 = INT16_MAX;
	volatile uint64_t x110 = UINT64_MAX;
	uint32_t x111 = UINT32_MAX;
	uint32_t x112 = 78468689U;
	static int32_t t18 = -112388;

	t18 = ((x109-x110)<(x111*x112));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x113 = -1929633;
	int32_t x114 = -1;
	int32_t t19 = -1;

	t19 = ((x113-x114)<(x115*x116));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x125 = -1LL;
	int16_t x126 = INT16_MIN;
	static volatile uint64_t x127 = 78412401LLU;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t20 = -22;

	t20 = ((x125-x126)<(x127*x128));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x134 = INT16_MIN;
	int32_t x136 = -731583107;

	t21 = ((x133-x134)<(x135*x136));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x137 = INT16_MIN;
	uint16_t x138 = UINT16_MAX;
	static int8_t x139 = INT8_MAX;
	volatile uint64_t x140 = 2376435LLU;

	t22 = ((x137-x138)<(x139*x140));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x142 = INT16_MAX;
	uint8_t x143 = 0U;
	int8_t x144 = 14;

	t23 = ((x141-x142)<(x143*x144));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x145 = 596;
	uint64_t x146 = 6712248002172894926LLU;
	static uint8_t x148 = 1U;

	t24 = ((x145-x146)<(x147*x148));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x149 = -726244555816725LL;
	int64_t x150 = INT64_MIN;
	uint16_t x152 = UINT16_MAX;

	t25 = ((x149-x150)<(x151*x152));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x153 = UINT32_MAX;
	static int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MIN;

	t26 = ((x153-x154)<(x155*x156));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x157 = 0U;
	static int8_t x158 = INT8_MIN;
	int16_t x160 = 31;

	t27 = ((x157-x158)<(x159*x160));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x161 = UINT16_MAX;
	uint64_t x162 = UINT64_MAX;

	t28 = ((x161-x162)<(x163*x164));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x165 = 7197U;
	volatile int64_t x166 = -8073665130398LL;
	int16_t x167 = -5943;
	uint16_t x168 = UINT16_MAX;

	t29 = ((x165-x166)<(x167*x168));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x169 = INT16_MIN;
	int64_t x171 = -637848210LL;
	int8_t x172 = 4;
	int32_t t30 = -263022;

	t30 = ((x169-x170)<(x171*x172));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x174 = INT64_MIN;
	int8_t x176 = -1;
	volatile int32_t t31 = 3848;

	t31 = ((x173-x174)<(x175*x176));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x177 = 680814312U;
	static int8_t x178 = INT8_MIN;
	static int8_t x179 = -1;
	volatile int32_t t32 = 53896141;

	t32 = ((x177-x178)<(x179*x180));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x181 = INT32_MIN;
	int64_t x182 = INT64_MIN;

	t33 = ((x181-x182)<(x183*x184));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x193 = INT16_MAX;
	static volatile int8_t x194 = 4;
	volatile uint32_t x195 = 137013U;
	static int32_t x196 = -5640;

	t34 = ((x193-x194)<(x195*x196));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x197 = UINT16_MAX;
	int8_t x198 = INT8_MAX;
	static volatile int64_t x199 = INT64_MIN;
	uint8_t x200 = 0U;
	static int32_t t35 = 347699103;

	t35 = ((x197-x198)<(x199*x200));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x202 = INT64_MIN;
	uint64_t x203 = UINT64_MAX;
	volatile int32_t x204 = -1;
	static volatile int32_t t36 = -1;

	t36 = ((x201-x202)<(x203*x204));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x205 = INT8_MIN;
	static int8_t x206 = 0;
	static uint64_t x207 = UINT64_MAX;
	volatile int64_t x208 = -251113084456102518LL;
	int32_t t37 = -92564832;

	t37 = ((x205-x206)<(x207*x208));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x210 = 1;
	int8_t x211 = INT8_MIN;
	int64_t x212 = -1LL;
	volatile int32_t t38 = 1;

	t38 = ((x209-x210)<(x211*x212));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x213 = -1;
	int32_t x214 = INT32_MIN;
	static uint16_t x215 = 709U;
	int32_t x216 = 842;

	t39 = ((x213-x214)<(x215*x216));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x217 = -2;
	int8_t x218 = 2;
	volatile uint16_t x219 = 701U;
	static int32_t t40 = 70464;

	t40 = ((x217-x218)<(x219*x220));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x226 = INT32_MIN;
	int32_t x227 = INT32_MAX;
	int64_t x228 = -1LL;
	int32_t t41 = 74036889;

	t41 = ((x225-x226)<(x227*x228));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x229 = 0U;
	int16_t x230 = -714;
	uint64_t x231 = UINT64_MAX;
	int32_t t42 = -1;

	t42 = ((x229-x230)<(x231*x232));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x233 = INT8_MIN;
	int64_t x234 = -1LL;
	uint64_t x235 = UINT64_MAX;
	static int32_t t43 = 24;

	t43 = ((x233-x234)<(x235*x236));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x246 = 42;
	uint64_t x247 = 757LLU;
	volatile uint32_t x248 = 596298301U;
	volatile int32_t t44 = -1886536;

	t44 = ((x245-x246)<(x247*x248));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x249 = 93U;
	int64_t x250 = 16428262LL;
	int16_t x251 = INT16_MIN;
	int8_t x252 = -15;
	volatile int32_t t45 = -3962;

	t45 = ((x249-x250)<(x251*x252));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x257 = INT16_MAX;
	static int64_t x258 = -134LL;
	volatile uint16_t x259 = 51U;
	static volatile int32_t t46 = 82238;

	t46 = ((x257-x258)<(x259*x260));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x261 = 52;
	uint8_t x262 = UINT8_MAX;
	uint8_t x263 = UINT8_MAX;
	static int32_t x264 = 28;
	int32_t t47 = 29;

	t47 = ((x261-x262)<(x263*x264));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x265 = UINT8_MAX;
	int32_t x267 = 408;
	static volatile uint32_t x268 = 5U;

	t48 = ((x265-x266)<(x267*x268));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x277 = 24U;
	static volatile uint32_t x278 = 56U;
	uint16_t x279 = 317U;
	static uint32_t x280 = 42804U;

	t49 = ((x277-x278)<(x279*x280));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x285 = -98LL;
	int64_t x287 = -1LL;
	uint8_t x288 = 83U;
	volatile int32_t t50 = 3405316;

	t50 = ((x285-x286)<(x287*x288));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x289 = INT16_MAX;
	int8_t x291 = INT8_MIN;
	volatile int64_t x292 = -1LL;
	static int32_t t51 = -73944;

	t51 = ((x289-x290)<(x291*x292));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x297 = -11;
	static int8_t x298 = 1;
	static int8_t x299 = -8;
	static int8_t x300 = INT8_MIN;

	t52 = ((x297-x298)<(x299*x300));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x305 = 17171;
	int16_t x308 = -141;
	volatile int32_t t53 = 57660;

	t53 = ((x305-x306)<(x307*x308));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x313 = -1;
	int16_t x314 = INT16_MIN;
	int8_t x315 = 15;

	t54 = ((x313-x314)<(x315*x316));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x317 = 25;
	int8_t x318 = INT8_MIN;
	static uint16_t x319 = 1U;
	volatile int64_t x320 = -1LL;

	t55 = ((x317-x318)<(x319*x320));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x329 = -1;
	volatile int64_t x330 = INT64_MAX;
	int8_t x331 = INT8_MAX;
	uint16_t x332 = 64U;
	volatile int32_t t56 = 27160067;

	t56 = ((x329-x330)<(x331*x332));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x337 = 52347LLU;
	int64_t x338 = -2537952077LL;
	static int16_t x339 = INT16_MAX;
	static volatile int32_t t57 = -503822923;

	t57 = ((x337-x338)<(x339*x340));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x345 = -25764777;
	int8_t x346 = 1;
	volatile uint16_t x347 = UINT16_MAX;
	volatile int32_t x348 = -1;
	volatile int32_t t58 = -523281;

	t58 = ((x345-x346)<(x347*x348));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x350 = 6U;
	volatile int16_t x352 = -11616;
	int32_t t59 = 95050;

	t59 = ((x349-x350)<(x351*x352));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x353 = UINT16_MAX;
	uint64_t x355 = UINT64_MAX;
	uint32_t x356 = 217023U;
	static volatile int32_t t60 = -101497698;

	t60 = ((x353-x354)<(x355*x356));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x358 = 47377329LLU;
	static uint32_t x360 = 39U;
	volatile int32_t t61 = 44;

	t61 = ((x357-x358)<(x359*x360));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x361 = INT8_MAX;
	int16_t x363 = INT16_MAX;

	t62 = ((x361-x362)<(x363*x364));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x365 = 7288U;
	int32_t x366 = 13814629;
	static int8_t x367 = -1;

	t63 = ((x365-x366)<(x367*x368));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x369 = INT16_MIN;
	int16_t x370 = -1;
	volatile int32_t x371 = 1;
	int32_t t64 = 66826813;

	t64 = ((x369-x370)<(x371*x372));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x374 = INT16_MAX;
	int8_t x375 = INT8_MIN;
	int16_t x376 = INT16_MIN;

	t65 = ((x373-x374)<(x375*x376));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x381 = -4;
	volatile int64_t x382 = 7681627113LL;
	volatile int8_t x383 = -10;
	int32_t x384 = 8181512;
	static int32_t t66 = 6677;

	t66 = ((x381-x382)<(x383*x384));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x390 = UINT16_MAX;
	uint16_t x391 = 19256U;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t67 = -19363;

	t67 = ((x389-x390)<(x391*x392));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x394 = -1;
	static int16_t x395 = -1;
	static int16_t x396 = 14;

	t68 = ((x393-x394)<(x395*x396));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x398 = 231269541365601982LL;
	static volatile int64_t x399 = -1LL;
	uint32_t x400 = 439U;
	volatile int32_t t69 = 42;

	t69 = ((x397-x398)<(x399*x400));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x405 = INT8_MAX;
	int32_t x407 = -1;
	int32_t x408 = INT32_MAX;
	volatile int32_t t70 = 6;

	t70 = ((x405-x406)<(x407*x408));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x413 = 59215177323LL;
	static int8_t x414 = -12;
	int8_t x415 = INT8_MIN;
	int16_t x416 = -1;

	t71 = ((x413-x414)<(x415*x416));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x417 = INT16_MIN;
	static int32_t x418 = -1;
	int8_t x419 = -1;
	volatile int32_t t72 = 2;

	t72 = ((x417-x418)<(x419*x420));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x421 = 1803LL;
	int32_t x422 = 582631105;
	int64_t x423 = INT64_MAX;
	int32_t t73 = 8;

	t73 = ((x421-x422)<(x423*x424));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x425 = 872U;
	static uint64_t x426 = UINT64_MAX;
	uint32_t x427 = 983274687U;
	int64_t x428 = 1623408211LL;
	int32_t t74 = 257;

	t74 = ((x425-x426)<(x427*x428));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x429 = INT64_MIN;
	volatile int16_t x430 = -4740;
	volatile int32_t x432 = 1354;

	t75 = ((x429-x430)<(x431*x432));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x433 = INT8_MAX;
	int8_t x434 = -59;
	volatile int32_t t76 = 13;

	t76 = ((x433-x434)<(x435*x436));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x437 = INT16_MIN;
	static int8_t x438 = -1;
	volatile int32_t x439 = INT32_MIN;
	static uint32_t x440 = 354056U;
	int32_t t77 = -158180;

	t77 = ((x437-x438)<(x439*x440));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x442 = UINT64_MAX;
	static int8_t x443 = 3;
	uint32_t x444 = 107073978U;
	volatile int32_t t78 = 1;

	t78 = ((x441-x442)<(x443*x444));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x450 = -1;
	static volatile uint8_t x451 = UINT8_MAX;
	uint16_t x452 = UINT16_MAX;

	t79 = ((x449-x450)<(x451*x452));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x453 = INT16_MIN;
	uint32_t x454 = 5545U;
	volatile uint64_t x455 = 14638232356600374LLU;
	uint64_t x456 = UINT64_MAX;
	volatile int32_t t80 = 15510;

	t80 = ((x453-x454)<(x455*x456));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x461 = INT64_MIN;
	static int64_t x462 = INT64_MIN;
	int32_t x463 = 5;
	static volatile int32_t t81 = 12928;

	t81 = ((x461-x462)<(x463*x464));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x465 = 2080541487768327LLU;
	int16_t x466 = -1;
	volatile int64_t x467 = -6471LL;
	static int32_t x468 = 0;

	t82 = ((x465-x466)<(x467*x468));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x469 = 676;
	volatile int16_t x470 = INT16_MAX;
	volatile uint32_t x471 = 82021937U;
	volatile int32_t t83 = -885801;

	t83 = ((x469-x470)<(x471*x472));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x485 = 1747U;
	int32_t x486 = -1;
	static int32_t x487 = 680082;
	int8_t x488 = 13;

	t84 = ((x485-x486)<(x487*x488));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x490 = -1;
	int16_t x491 = INT16_MAX;
	int16_t x492 = INT16_MAX;
	int32_t t85 = 771639;

	t85 = ((x489-x490)<(x491*x492));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x493 = 4999U;
	static uint32_t x494 = UINT32_MAX;
	static volatile int32_t x495 = -329;
	uint8_t x496 = 10U;
	static int32_t t86 = -37821258;

	t86 = ((x493-x494)<(x495*x496));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x505 = 11U;
	int8_t x506 = -2;
	int32_t x507 = INT32_MAX;
	static volatile int64_t x508 = -3525LL;
	static volatile int32_t t87 = 1628;

	t87 = ((x505-x506)<(x507*x508));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x514 = 1463U;
	uint8_t x515 = 4U;
	int8_t x516 = INT8_MAX;
	volatile int32_t t88 = -1391222;

	t88 = ((x513-x514)<(x515*x516));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x517 = 1451U;
	uint8_t x518 = 1U;
	volatile uint16_t x520 = 1U;
	int32_t t89 = -678251;

	t89 = ((x517-x518)<(x519*x520));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x525 = -1LL;
	int16_t x526 = INT16_MIN;
	uint32_t x528 = 21514U;
	volatile int32_t t90 = 670070;

	t90 = ((x525-x526)<(x527*x528));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x529 = INT64_MAX;
	volatile uint32_t x530 = 12U;
	volatile uint64_t x531 = UINT64_MAX;
	int32_t t91 = 116939;

	t91 = ((x529-x530)<(x531*x532));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x533 = INT16_MIN;
	static int64_t x534 = INT64_MIN;
	uint16_t x535 = 2525U;
	static int8_t x536 = INT8_MAX;
	int32_t t92 = -76;

	t92 = ((x533-x534)<(x535*x536));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x549 = INT8_MAX;
	static uint8_t x551 = UINT8_MAX;
	static int16_t x552 = 7;
	volatile int32_t t93 = 263102;

	t93 = ((x549-x550)<(x551*x552));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x553 = 1;
	int16_t x554 = -1;
	int8_t x555 = -26;
	int32_t x556 = -3321083;
	static volatile int32_t t94 = 16;

	t94 = ((x553-x554)<(x555*x556));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x557 = -36287068;
	uint64_t x558 = 48825516886007LLU;
	volatile uint16_t x559 = 20U;
	uint16_t x560 = 6U;
	int32_t t95 = -376793;

	t95 = ((x557-x558)<(x559*x560));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x561 = 496075865LL;
	int32_t x562 = INT32_MIN;
	int32_t x563 = -1;
	volatile uint32_t x564 = 169323U;
	int32_t t96 = -214;

	t96 = ((x561-x562)<(x563*x564));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x565 = 1;
	static int32_t x566 = INT32_MAX;
	static int8_t x567 = -9;
	int16_t x568 = INT16_MAX;
	volatile int32_t t97 = -196;

	t97 = ((x565-x566)<(x567*x568));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x575 = INT16_MIN;
	static int16_t x576 = INT16_MIN;
	int32_t t98 = 7702080;

	t98 = ((x573-x574)<(x575*x576));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x577 = -108;
	static uint16_t x578 = 10088U;
	int32_t x580 = -494650;
	static int32_t t99 = 0;

	t99 = ((x577-x578)<(x579*x580));

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

