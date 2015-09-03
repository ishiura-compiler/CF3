#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MAX;
volatile uint64_t x3 = 854519LLU;
int32_t x7 = 1719;
volatile int32_t t1 = -21550442;
volatile int32_t t2 = 23;
static int16_t x18 = 0;
static int64_t x19 = 275259LL;
volatile int32_t t3 = -111904;
volatile int64_t x21 = INT64_MIN;
volatile int32_t t9 = 1;
int32_t t10 = 778026;
int32_t x57 = INT32_MIN;
volatile int8_t x71 = -3;
volatile int32_t t13 = -1;
static int32_t x76 = INT32_MIN;
volatile int32_t t14 = -283;
int8_t x77 = -19;
int16_t x79 = INT16_MAX;
int32_t x89 = -509871;
int64_t x91 = INT64_MIN;
volatile int32_t t18 = -2975;
int16_t x94 = -1;
static volatile int32_t t20 = -6136644;
int32_t t21 = 13138;
volatile int32_t t22 = 5693621;
int8_t x111 = -1;
int32_t t24 = 527687;
int64_t x130 = -1LL;
uint32_t x135 = 1234U;
int16_t x139 = 3;
int16_t x141 = -1;
int8_t x155 = -17;
static int8_t x171 = INT8_MAX;
int8_t x172 = -29;
int8_t x176 = -1;
int32_t x183 = INT32_MAX;
int8_t x192 = INT8_MIN;
int16_t x198 = INT16_MIN;
static int16_t x212 = -92;
volatile int32_t t42 = 3;
static int32_t x213 = INT32_MIN;
int32_t x216 = -1;
int16_t x219 = INT16_MIN;
int8_t x221 = -6;
int32_t t45 = 0;
int32_t t47 = 3551769;
volatile int32_t t48 = -328;
int8_t x237 = 0;
uint64_t x244 = 1866253237653927LLU;
static volatile int32_t t50 = 115;
uint32_t x245 = 444U;
int8_t x248 = -1;
volatile int32_t t51 = 127770452;
int8_t x251 = INT8_MAX;
volatile uint32_t x256 = 121717856U;
volatile int64_t x260 = INT64_MIN;
int32_t x266 = INT32_MAX;
int8_t x275 = INT8_MIN;
int32_t x280 = -38536382;
int64_t x281 = INT64_MIN;
static uint8_t x282 = 0U;
int32_t t59 = -521629689;
static int8_t x294 = INT8_MIN;
uint16_t x302 = 255U;
uint32_t x304 = 14024507U;
int32_t t63 = 14957921;
static int16_t x314 = -1;
uint32_t x316 = 1284728445U;
int32_t t64 = -1;
volatile int32_t t65 = 40585303;
static uint8_t x323 = UINT8_MAX;
static int64_t x325 = INT64_MIN;
int8_t x326 = -1;
static int32_t t67 = 0;
volatile uint32_t x329 = UINT32_MAX;
int8_t x331 = -6;
int16_t x332 = INT16_MIN;
static int16_t x336 = 1;
uint8_t x338 = 1U;
uint16_t x339 = UINT16_MAX;
int32_t t70 = 591794906;
int8_t x343 = 1;
static int32_t t71 = -236076076;
int64_t x347 = INT64_MIN;
volatile int32_t t74 = 17;
int64_t x361 = INT64_MIN;
uint64_t x363 = 37LLU;
int32_t x367 = INT32_MIN;
int64_t x380 = -1LL;
int32_t t80 = 89;
int32_t x388 = INT32_MAX;
uint8_t x394 = UINT8_MAX;
int8_t x404 = INT8_MIN;
int16_t x411 = INT16_MAX;
static uint64_t x415 = 577573602LLU;
int64_t x441 = 6322874314558LL;
volatile int8_t x459 = -1;
int8_t x482 = -1;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	uint64_t x4 = 4147LLU;
	volatile int32_t t0 = 2827;

	t0 = (x1<(x2/(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	int64_t x6 = INT64_MIN;
	int64_t x8 = -1LL;

	t1 = (x5<(x6/(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x13 = 189695488LLU;
	uint8_t x14 = UINT8_MAX;
	int64_t x15 = INT64_MIN;
	int32_t x16 = INT32_MIN;

	t2 = (x13<(x14/(x15-x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = INT16_MAX;
	int32_t x20 = INT32_MIN;

	t3 = (x17<(x18/(x19-x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x22 = -7535;
	static uint64_t x23 = 414419LLU;
	int64_t x24 = INT64_MIN;
	int32_t t4 = 2618;

	t4 = (x21<(x22/(x23-x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = -4LL;
	static int32_t x26 = INT32_MAX;
	int32_t x27 = 176;
	static int16_t x28 = INT16_MAX;
	int32_t t5 = 882425;

	t5 = (x25<(x26/(x27-x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = INT32_MIN;
	int32_t x30 = 119158046;
	uint64_t x31 = 428492LLU;
	static uint8_t x32 = UINT8_MAX;
	int32_t t6 = 0;

	t6 = (x29<(x30/(x31-x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = 26036863LL;
	uint32_t x42 = 2676160U;
	int64_t x43 = 3358039259782LL;
	uint8_t x44 = 1U;
	int32_t t7 = 498607874;

	t7 = (x41<(x42/(x43-x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x45 = 90U;
	int16_t x46 = 1;
	static int8_t x47 = -16;
	uint32_t x48 = 25101U;
	int32_t t8 = 167521;

	t8 = (x45<(x46/(x47-x48)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = -1;
	int64_t x50 = -5981079LL;
	static uint16_t x51 = 506U;
	int16_t x52 = INT16_MIN;

	t9 = (x49<(x50/(x51-x52)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x53 = 2364U;
	int8_t x54 = INT8_MIN;
	uint64_t x55 = 677LLU;
	static uint16_t x56 = 15654U;

	t10 = (x53<(x54/(x55-x56)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x58 = -16637168037187379LL;
	static uint32_t x59 = 208096U;
	uint8_t x60 = UINT8_MAX;
	static volatile int32_t t11 = 0;

	t11 = (x57<(x58/(x59-x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x61 = 1913328240109477341LLU;
	int16_t x62 = INT16_MAX;
	int32_t x63 = INT32_MAX;
	int8_t x64 = INT8_MAX;
	static volatile int32_t t12 = 683;

	t12 = (x61<(x62/(x63-x64)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = INT64_MIN;
	int64_t x70 = -261008094LL;
	int8_t x72 = INT8_MIN;

	t13 = (x69<(x70/(x71-x72)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = 435374921LL;
	int64_t x74 = 6781213904334872LL;
	uint64_t x75 = UINT64_MAX;

	t14 = (x73<(x74/(x75-x76)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x78 = 1U;
	int16_t x80 = INT16_MIN;
	volatile int32_t t15 = -1909;

	t15 = (x77<(x78/(x79-x80)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = -1;
	static int16_t x82 = INT16_MAX;
	int32_t x83 = INT32_MAX;
	uint16_t x84 = 985U;
	int32_t t16 = 1;

	t16 = (x81<(x82/(x83-x84)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x85 = INT64_MAX;
	static int16_t x86 = INT16_MAX;
	static int64_t x87 = 319610799416LL;
	int8_t x88 = INT8_MIN;
	int32_t t17 = 99053;

	t17 = (x85<(x86/(x87-x88)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x90 = INT16_MAX;
	uint64_t x92 = 1823953672426LLU;

	t18 = (x89<(x90/(x91-x92)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MIN;
	int64_t x95 = INT64_MIN;
	volatile int32_t x96 = -20148548;
	static int32_t t19 = 299500631;

	t19 = (x93<(x94/(x95-x96)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = UINT8_MAX;
	uint32_t x98 = UINT32_MAX;
	int8_t x99 = INT8_MIN;
	static int8_t x100 = INT8_MAX;

	t20 = (x97<(x98/(x99-x100)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = INT64_MIN;
	static volatile int32_t x102 = 0;
	int16_t x103 = -11661;
	volatile int16_t x104 = -1;

	t21 = (x101<(x102/(x103-x104)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = 196;
	volatile uint32_t x106 = 5U;
	int64_t x107 = -13786LL;
	uint32_t x108 = 7184U;

	t22 = (x105<(x106/(x107-x108)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = 22U;
	volatile int8_t x110 = -1;
	static uint8_t x112 = 0U;
	int32_t t23 = -5544;

	t23 = (x109<(x110/(x111-x112)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x113 = 3844281829367946LLU;
	int64_t x114 = -4252765147LL;
	int64_t x115 = -1LL;
	int16_t x116 = INT16_MIN;

	t24 = (x113<(x114/(x115-x116)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = INT16_MAX;
	volatile int8_t x118 = INT8_MIN;
	static int8_t x119 = INT8_MAX;
	int16_t x120 = INT16_MIN;
	volatile int32_t t25 = 27;

	t25 = (x117<(x118/(x119-x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = 4431136251658245LLU;
	int64_t x122 = INT64_MIN;
	int16_t x123 = INT16_MIN;
	uint16_t x124 = 0U;
	volatile int32_t t26 = 753;

	t26 = (x121<(x122/(x123-x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x129 = 1U;
	volatile int16_t x131 = INT16_MAX;
	static volatile uint64_t x132 = 4279187355959640371LLU;
	int32_t t27 = 3634;

	t27 = (x129<(x130/(x131-x132)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MAX;
	static int32_t x134 = -1;
	int8_t x136 = INT8_MIN;
	volatile int32_t t28 = -6;

	t28 = (x133<(x134/(x135-x136)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x137 = 14;
	int16_t x138 = 119;
	int8_t x140 = INT8_MAX;
	volatile int32_t t29 = 112;

	t29 = (x137<(x138/(x139-x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x142 = 189U;
	int64_t x143 = 925793743552094070LL;
	int16_t x144 = 2;
	int32_t t30 = 221;

	t30 = (x141<(x142/(x143-x144)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = -24;
	int8_t x146 = 0;
	int16_t x147 = -94;
	uint32_t x148 = 1916035970U;
	static volatile int32_t t31 = -143551595;

	t31 = (x145<(x146/(x147-x148)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x153 = -7758216LL;
	int16_t x154 = -4;
	uint16_t x156 = 118U;
	volatile int32_t t32 = 3824642;

	t32 = (x153<(x154/(x155-x156)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MIN;
	uint16_t x158 = 22U;
	int32_t x159 = INT32_MAX;
	volatile uint8_t x160 = UINT8_MAX;
	volatile int32_t t33 = -22959;

	t33 = (x157<(x158/(x159-x160)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x161 = INT8_MAX;
	int16_t x162 = INT16_MIN;
	static int32_t x163 = INT32_MIN;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t34 = -40426;

	t34 = (x161<(x162/(x163-x164)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x169 = INT64_MIN;
	static int64_t x170 = INT64_MAX;
	volatile int32_t t35 = -419824;

	t35 = (x169<(x170/(x171-x172)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = INT32_MIN;
	uint16_t x174 = UINT16_MAX;
	volatile uint32_t x175 = 454U;
	volatile int32_t t36 = 1557884;

	t36 = (x173<(x174/(x175-x176)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x181 = INT32_MIN;
	static int8_t x182 = -6;
	int64_t x184 = -14835LL;
	volatile int32_t t37 = -23;

	t37 = (x181<(x182/(x183-x184)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x189 = 28LLU;
	uint64_t x190 = UINT64_MAX;
	volatile int16_t x191 = 6757;
	static volatile int32_t t38 = -66041;

	t38 = (x189<(x190/(x191-x192)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x193 = -3;
	static volatile int64_t x194 = INT64_MAX;
	volatile uint16_t x195 = 7U;
	int64_t x196 = INT64_MAX;
	int32_t t39 = 10320427;

	t39 = (x193<(x194/(x195-x196)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x197 = 5U;
	static int64_t x199 = 16572LL;
	uint64_t x200 = 5403560305957913LLU;
	int32_t t40 = -47282990;

	t40 = (x197<(x198/(x199-x200)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x205 = -925;
	static volatile int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MAX;
	int8_t x208 = INT8_MIN;
	int32_t t41 = 210723;

	t41 = (x205<(x206/(x207-x208)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x209 = UINT64_MAX;
	int16_t x210 = INT16_MIN;
	uint32_t x211 = UINT32_MAX;

	t42 = (x209<(x210/(x211-x212)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MAX;
	int32_t t43 = -880;

	t43 = (x213<(x214/(x215-x216)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x217 = INT8_MIN;
	static uint16_t x218 = UINT16_MAX;
	int64_t x220 = -304507LL;
	int32_t t44 = 40873942;

	t44 = (x217<(x218/(x219-x220)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x222 = INT8_MIN;
	int64_t x223 = INT64_MIN;
	volatile int64_t x224 = -1LL;

	t45 = (x221<(x222/(x223-x224)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x225 = -904272610LL;
	static volatile uint64_t x226 = 8306366765324LLU;
	volatile uint64_t x227 = 1231LLU;
	uint64_t x228 = 500669438010609LLU;
	int32_t t46 = -2;

	t46 = (x225<(x226/(x227-x228)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x229 = UINT16_MAX;
	static uint16_t x230 = 6772U;
	static int16_t x231 = INT16_MIN;
	static int64_t x232 = -91703285LL;

	t47 = (x229<(x230/(x231-x232)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x233 = -1163LL;
	uint8_t x234 = 107U;
	static uint64_t x235 = 5139LLU;
	volatile int64_t x236 = INT64_MAX;

	t48 = (x233<(x234/(x235-x236)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MAX;
	int64_t x240 = INT64_MAX;
	volatile int32_t t49 = -75546;

	t49 = (x237<(x238/(x239-x240)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x241 = INT32_MIN;
	volatile int64_t x242 = INT64_MIN;
	uint8_t x243 = 0U;

	t50 = (x241<(x242/(x243-x244)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x246 = 15U;
	uint32_t x247 = 1345215U;

	t51 = (x245<(x246/(x247-x248)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x249 = INT64_MIN;
	uint8_t x250 = 1U;
	static int16_t x252 = -1;
	int32_t t52 = 75480091;

	t52 = (x249<(x250/(x251-x252)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x253 = INT8_MIN;
	volatile uint16_t x254 = 2581U;
	int16_t x255 = 28;
	static int32_t t53 = 189291;

	t53 = (x253<(x254/(x255-x256)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x257 = 0U;
	volatile uint16_t x258 = UINT16_MAX;
	int16_t x259 = -1;
	static int32_t t54 = -253332913;

	t54 = (x257<(x258/(x259-x260)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x265 = INT64_MIN;
	int64_t x267 = INT64_MAX;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t55 = 463642284;

	t55 = (x265<(x266/(x267-x268)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x273 = INT64_MAX;
	static int32_t x274 = INT32_MIN;
	int8_t x276 = -8;
	volatile int32_t t56 = -13235;

	t56 = (x273<(x274/(x275-x276)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x277 = INT8_MAX;
	uint8_t x278 = 8U;
	static int64_t x279 = INT64_MIN;
	int32_t t57 = -18380;

	t57 = (x277<(x278/(x279-x280)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x283 = UINT32_MAX;
	int64_t x284 = INT64_MAX;
	static int32_t t58 = 857157;

	t58 = (x281<(x282/(x283-x284)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x289 = INT64_MIN;
	uint32_t x290 = 388107297U;
	int16_t x291 = INT16_MIN;
	uint64_t x292 = 3953946734007744LLU;

	t59 = (x289<(x290/(x291-x292)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x293 = -1LL;
	static volatile int32_t x295 = INT32_MAX;
	static int8_t x296 = 6;
	int32_t t60 = 0;

	t60 = (x293<(x294/(x295-x296)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x301 = INT32_MAX;
	static int8_t x303 = INT8_MAX;
	int32_t t61 = -148080;

	t61 = (x301<(x302/(x303-x304)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x305 = UINT32_MAX;
	int64_t x306 = -1LL;
	int32_t x307 = 48469;
	int32_t x308 = -1;
	volatile int32_t t62 = 64754;

	t62 = (x305<(x306/(x307-x308)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x309 = UINT64_MAX;
	volatile uint8_t x310 = UINT8_MAX;
	volatile int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MIN;

	t63 = (x309<(x310/(x311-x312)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x313 = 13LLU;
	static uint32_t x315 = 377573U;

	t64 = (x313<(x314/(x315-x316)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x317 = 1U;
	volatile uint64_t x318 = UINT64_MAX;
	uint64_t x319 = 47384913310803LLU;
	volatile uint64_t x320 = 57LLU;

	t65 = (x317<(x318/(x319-x320)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x321 = INT8_MAX;
	int64_t x322 = INT64_MIN;
	volatile int16_t x324 = INT16_MIN;
	volatile int32_t t66 = 162;

	t66 = (x321<(x322/(x323-x324)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x327 = -1;
	int64_t x328 = INT64_MIN;

	t67 = (x325<(x326/(x327-x328)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x330 = 5129100LL;
	volatile int32_t t68 = -43;

	t68 = (x329<(x330/(x331-x332)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x333 = 19;
	volatile uint32_t x334 = 4679229U;
	int32_t x335 = -374790779;
	static volatile int32_t t69 = -2;

	t69 = (x333<(x334/(x335-x336)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x337 = INT32_MAX;
	int32_t x340 = 62437607;

	t70 = (x337<(x338/(x339-x340)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x341 = 1903937448U;
	static uint64_t x342 = 121604LLU;
	uint64_t x344 = 88276LLU;

	t71 = (x341<(x342/(x343-x344)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x345 = INT64_MAX;
	uint32_t x346 = 34135661U;
	int8_t x348 = -1;
	volatile int32_t t72 = -51329182;

	t72 = (x345<(x346/(x347-x348)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x349 = 6828596;
	int64_t x350 = -1LL;
	int32_t x351 = 858755403;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t73 = 180055072;

	t73 = (x349<(x350/(x351-x352)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x353 = INT64_MIN;
	int8_t x354 = INT8_MIN;
	volatile int16_t x355 = INT16_MIN;
	uint32_t x356 = 138286314U;

	t74 = (x353<(x354/(x355-x356)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x357 = UINT8_MAX;
	volatile uint8_t x358 = 1U;
	volatile uint8_t x359 = UINT8_MAX;
	static int8_t x360 = 0;
	volatile int32_t t75 = -254675;

	t75 = (x357<(x358/(x359-x360)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x362 = INT64_MIN;
	static int16_t x364 = INT16_MIN;
	int32_t t76 = -240278;

	t76 = (x361<(x362/(x363-x364)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x365 = 3558455267LLU;
	int16_t x366 = -1;
	uint32_t x368 = 3U;
	volatile int32_t t77 = -1;

	t77 = (x365<(x366/(x367-x368)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = -38;
	uint32_t x370 = UINT32_MAX;
	int64_t x371 = -14011LL;
	int64_t x372 = INT64_MIN;
	volatile int32_t t78 = 101;

	t78 = (x369<(x370/(x371-x372)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x377 = INT8_MIN;
	int16_t x378 = 1;
	static int8_t x379 = INT8_MIN;
	volatile int32_t t79 = 11;

	t79 = (x377<(x378/(x379-x380)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x381 = INT32_MAX;
	static int16_t x382 = INT16_MIN;
	int8_t x383 = 4;
	int8_t x384 = 9;

	t80 = (x381<(x382/(x383-x384)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x385 = 1;
	static int32_t x386 = INT32_MAX;
	volatile uint64_t x387 = UINT64_MAX;
	volatile int32_t t81 = -4;

	t81 = (x385<(x386/(x387-x388)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x389 = 1;
	int8_t x390 = INT8_MIN;
	uint32_t x391 = 25U;
	uint8_t x392 = 5U;
	static int32_t t82 = 38378;

	t82 = (x389<(x390/(x391-x392)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x393 = UINT16_MAX;
	uint16_t x395 = UINT16_MAX;
	volatile uint32_t x396 = 0U;
	volatile int32_t t83 = -12791144;

	t83 = (x393<(x394/(x395-x396)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x401 = -1315LL;
	static volatile int64_t x402 = -1LL;
	int16_t x403 = INT16_MIN;
	static volatile int32_t t84 = -1785864;

	t84 = (x401<(x402/(x403-x404)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x405 = -785840710;
	volatile int64_t x406 = INT64_MIN;
	static int32_t x407 = 3171509;
	int16_t x408 = INT16_MIN;
	int32_t t85 = 39;

	t85 = (x405<(x406/(x407-x408)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x409 = INT32_MIN;
	int64_t x410 = INT64_MIN;
	volatile uint32_t x412 = 2045U;
	int32_t t86 = -1;

	t86 = (x409<(x410/(x411-x412)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x413 = -1;
	int64_t x414 = INT64_MIN;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t87 = 18376617;

	t87 = (x413<(x414/(x415-x416)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x417 = INT64_MIN;
	uint64_t x418 = 269LLU;
	int8_t x419 = INT8_MIN;
	volatile uint8_t x420 = UINT8_MAX;
	volatile int32_t t88 = 377;

	t88 = (x417<(x418/(x419-x420)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x421 = -4;
	static int32_t x422 = INT32_MIN;
	uint8_t x423 = 1U;
	int16_t x424 = -38;
	int32_t t89 = -110648;

	t89 = (x421<(x422/(x423-x424)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x425 = INT32_MIN;
	int64_t x426 = -8810252305LL;
	int32_t x427 = -39741642;
	uint8_t x428 = UINT8_MAX;
	static volatile int32_t t90 = -3480;

	t90 = (x425<(x426/(x427-x428)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x429 = 0U;
	int16_t x430 = -1;
	int32_t x431 = INT32_MIN;
	uint64_t x432 = 41431LLU;
	static volatile int32_t t91 = -324;

	t91 = (x429<(x430/(x431-x432)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x433 = INT32_MAX;
	static int16_t x434 = INT16_MIN;
	int16_t x435 = -4;
	static int16_t x436 = INT16_MIN;
	int32_t t92 = 219394513;

	t92 = (x433<(x434/(x435-x436)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x442 = -643335269;
	int32_t x443 = -687235;
	volatile uint8_t x444 = 23U;
	int32_t t93 = -535032;

	t93 = (x441<(x442/(x443-x444)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x445 = INT64_MIN;
	static uint16_t x446 = 1311U;
	volatile int16_t x447 = -716;
	int64_t x448 = 2672737872546117592LL;
	volatile int32_t t94 = 533;

	t94 = (x445<(x446/(x447-x448)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x453 = 60805071;
	int64_t x454 = -1521034246936681LL;
	volatile int16_t x455 = INT16_MIN;
	static int16_t x456 = -1;
	int32_t t95 = -7708915;

	t95 = (x453<(x454/(x455-x456)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x457 = INT8_MAX;
	volatile int64_t x458 = 47846725013LL;
	int64_t x460 = INT64_MAX;
	int32_t t96 = 0;

	t96 = (x457<(x458/(x459-x460)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x461 = INT64_MIN;
	int8_t x462 = -1;
	int8_t x463 = INT8_MIN;
	uint32_t x464 = UINT32_MAX;
	int32_t t97 = 0;

	t97 = (x461<(x462/(x463-x464)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x473 = INT16_MAX;
	static int8_t x474 = 4;
	int64_t x475 = -1LL;
	int16_t x476 = 3642;
	int32_t t98 = -104237;

	t98 = (x473<(x474/(x475-x476)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x481 = 115U;
	int16_t x483 = -1;
	uint32_t x484 = 0U;
	static int32_t t99 = -693336;

	t99 = (x481<(x482/(x483-x484)));

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

