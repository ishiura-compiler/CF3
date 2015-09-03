#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x2 = -1LL;
uint16_t x5 = 1176U;
uint32_t x6 = 4243408U;
uint32_t t1 = 859U;
int16_t x15 = INT16_MAX;
uint32_t x18 = 1501U;
uint8_t x27 = UINT8_MAX;
int32_t t4 = 16654636;
uint64_t x33 = 81636LLU;
static volatile int8_t x34 = INT8_MAX;
uint64_t t5 = 2992339000LLU;
static uint16_t x49 = 63U;
uint64_t x55 = 252141836386LLU;
int32_t x62 = INT32_MAX;
uint8_t x63 = 1U;
static uint8_t x71 = 61U;
volatile int32_t t10 = -33265304;
volatile int64_t t11 = 573655LL;
static int16_t x81 = 0;
int64_t t13 = -23374444760536514LL;
uint8_t x98 = 0U;
static uint64_t t15 = 1135973LLU;
uint64_t x136 = UINT64_MAX;
int64_t x137 = -1581LL;
static uint16_t x138 = 376U;
volatile int64_t t19 = 6734LL;
int16_t x145 = -1;
volatile int64_t t20 = 1299LL;
volatile int32_t x150 = 24361;
int32_t x152 = -1;
static uint8_t x153 = UINT8_MAX;
int8_t x155 = INT8_MAX;
static uint8_t x156 = 35U;
static int32_t x159 = -4000;
int32_t x163 = INT32_MIN;
int64_t t25 = -3172963265459588441LL;
volatile uint8_t x169 = UINT8_MAX;
static uint8_t x171 = 0U;
int8_t x174 = INT8_MIN;
uint64_t t27 = 1498955542122985145LLU;
volatile int32_t x178 = -1;
volatile uint64_t x186 = UINT64_MAX;
int8_t x197 = 10;
static int16_t x208 = 404;
static volatile uint32_t x219 = 403779778U;
static uint16_t x252 = UINT16_MAX;
volatile uint64_t t38 = 45018519407LLU;
int8_t x257 = INT8_MIN;
int16_t x265 = -1;
uint64_t t40 = 319040LLU;
uint16_t x270 = 4836U;
volatile uint32_t x291 = 462758315U;
volatile int64_t x297 = 44901LL;
int8_t x302 = INT8_MIN;
int32_t x312 = INT32_MAX;
volatile int64_t t47 = -172541LL;
uint8_t x322 = 63U;
volatile uint8_t x325 = 0U;
volatile int8_t x327 = INT8_MIN;
uint32_t x328 = 671U;
int16_t x339 = -6223;
int16_t x360 = 113;
static uint16_t x375 = 997U;
volatile uint32_t x380 = 0U;
int32_t x384 = 24495;
static volatile int64_t t59 = 4846958422243172LL;
uint64_t t60 = 815992LLU;
volatile int32_t t61 = 136;
uint8_t x405 = UINT8_MAX;
int8_t x409 = -11;
uint64_t x425 = 32133461971LLU;
int32_t x426 = INT32_MIN;
int8_t x432 = 27;
int8_t x435 = INT8_MIN;
static uint64_t x445 = 36219883411537086LLU;
uint8_t x448 = UINT8_MAX;
uint64_t t68 = 2161412536317117383LLU;
int64_t x452 = -1LL;
volatile uint64_t t69 = 9522221164LLU;
uint8_t x463 = 34U;
int32_t t70 = 17995;
uint16_t x478 = UINT16_MAX;
int16_t x479 = INT16_MIN;
static int8_t x483 = -25;
int8_t x489 = INT8_MAX;
uint32_t x490 = UINT32_MAX;
uint8_t x491 = 14U;
uint64_t x493 = 3985540206084909LLU;
static int16_t x505 = INT16_MIN;
uint32_t x513 = 1258183U;
static uint16_t x519 = UINT16_MAX;
static uint8_t x531 = 0U;
int64_t x532 = -304056080LL;
volatile int64_t t79 = -359457396363329LL;
uint64_t t80 = 450203889LLU;
uint32_t x537 = 0U;
int8_t x540 = INT8_MIN;
static volatile uint32_t t81 = 490U;
uint16_t x541 = 28U;
int8_t x550 = 0;
int16_t x565 = INT16_MAX;
uint64_t x566 = 2515LLU;
static volatile uint16_t x567 = 3U;
uint8_t x570 = 28U;
int16_t x592 = INT16_MAX;
int8_t x605 = -1;
uint64_t t94 = 163081907694184703LLU;
int32_t x629 = -1;
uint64_t x643 = 55721LLU;
static int16_t x647 = INT16_MIN;
int64_t t97 = -14LL;
int16_t x656 = 1;
static int32_t x658 = -1;
uint16_t x660 = 834U;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	int16_t x3 = INT16_MAX;
	int8_t x4 = INT8_MIN;
	static int64_t t0 = -277687128663LL;

	t0 = (((x1*x2)*x3)-x4);

	if (t0 != 70366596694144LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x7 = 1;
	int32_t x8 = INT32_MIN;

	t1 = (((x5*x6)*x7)-x8);

	if (t1 != 2842764160U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	volatile uint64_t x14 = 5142917543063448701LLU;
	int16_t x16 = INT16_MIN;
	uint64_t t2 = 104853197369856471LLU;

	t2 = (((x13*x14)*x15)-x16);

	if (t2 != 3766676795412119552LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x17 = 11U;
	uint64_t x19 = 11194LLU;
	int32_t x20 = -115;
	uint64_t t3 = 13605LLU;

	t3 = (((x17*x18)*x19)-x20);

	if (t3 != 184824249LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x25 = 1;
	static volatile uint8_t x26 = 6U;
	int8_t x28 = -1;

	t4 = (((x25*x26)*x27)-x28);

	if (t4 != 1531) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x35 = 299U;
	int8_t x36 = INT8_MIN;

	t5 = (((x33*x34)*x35)-x36);

	if (t5 != 3099963956LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x45 = INT16_MIN;
	static uint64_t x46 = 62864083710LLU;
	int32_t x47 = INT32_MIN;
	uint8_t x48 = UINT8_MAX;
	static volatile uint64_t t6 = 4874301LLU;

	t6 = (((x45*x46)*x47)-x48);

	if (t6 != 8268468178363875073LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x50 = INT16_MIN;
	int16_t x51 = -1;
	int8_t x52 = INT8_MIN;
	static volatile int32_t t7 = 0;

	t7 = (((x49*x50)*x51)-x52);

	if (t7 != 2064512) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = -3447;
	int32_t x54 = -1;
	int32_t x56 = INT32_MIN;
	volatile uint64_t t8 = 1106083252502243LLU;

	t8 = (((x53*x54)*x55)-x56);

	if (t8 != 869135057506190LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x61 = 6606312986LLU;
	uint64_t x64 = 5642918820455981765LLU;
	uint64_t t9 = 2601371117LLU;

	t9 = (((x61*x62)*x63)-x64);

	if (t9 != 8544030283942758177LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x69 = UINT8_MAX;
	int16_t x70 = INT16_MIN;
	int16_t x72 = -1;

	t10 = (((x69*x70)*x71)-x72);

	if (t10 != -509706239) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x77 = INT8_MIN;
	int16_t x78 = -115;
	int8_t x79 = INT8_MIN;
	int64_t x80 = -4241602945006740468LL;

	t11 = (((x77*x78)*x79)-x80);

	if (t11 != 4241602945004856308LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x82 = 11;
	int16_t x83 = -1;
	static uint8_t x84 = 0U;
	volatile int32_t t12 = 5888;

	t12 = (((x81*x82)*x83)-x84);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x89 = 43004LL;
	int16_t x90 = -432;
	int16_t x91 = -8451;
	static int64_t x92 = -682229LL;

	t13 = (((x89*x90)*x91)-x92);

	if (t13 != 157001061557LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x97 = INT16_MAX;
	int64_t x99 = 0LL;
	volatile int16_t x100 = -1;
	int64_t t14 = 0LL;

	t14 = (((x97*x98)*x99)-x100);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x117 = 108214836;
	int16_t x118 = -1;
	static uint64_t x119 = 3081440163LLU;
	static uint64_t x120 = 27877LLU;

	t15 = (((x117*x118)*x119)-x120);

	if (t15 != 18113286531826665471LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x125 = INT16_MAX;
	int16_t x126 = INT16_MAX;
	int8_t x127 = -1;
	int64_t x128 = INT64_MIN;
	static volatile int64_t t16 = 2091LL;

	t16 = (((x125*x126)*x127)-x128);

	if (t16 != 9223372035781099519LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x129 = UINT32_MAX;
	volatile int32_t x130 = INT32_MAX;
	static uint32_t x131 = 163U;
	uint16_t x132 = UINT16_MAX;
	volatile uint32_t t17 = 650U;

	t17 = (((x129*x130)*x131)-x132);

	if (t17 != 2147418276U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x133 = -46801;
	volatile uint16_t x134 = 1U;
	int16_t x135 = 5;
	static volatile uint64_t t18 = 2200LLU;

	t18 = (((x133*x134)*x135)-x136);

	if (t18 != 18446744073709317612LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x139 = -1LL;
	int8_t x140 = -1;

	t19 = (((x137*x138)*x139)-x140);

	if (t19 != 594457LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x146 = 427164LL;
	int16_t x147 = -1;
	static volatile int32_t x148 = INT32_MIN;

	t20 = (((x145*x146)*x147)-x148);

	if (t20 != 2147910812LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x149 = -1;
	static int8_t x151 = -1;
	int32_t t21 = 4987;

	t21 = (((x149*x150)*x151)-x152);

	if (t21 != 24362) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x154 = -328;
	volatile int32_t t22 = -1077;

	t22 = (((x153*x154)*x155)-x156);

	if (t22 != -10622315) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x157 = 14213184;
	int64_t x158 = -1LL;
	volatile int8_t x160 = -1;
	int64_t t23 = -117651517LL;

	t23 = (((x157*x158)*x159)-x160);

	if (t23 != 56852736001LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x161 = 11239U;
	uint64_t x162 = UINT64_MAX;
	int16_t x164 = INT16_MIN;
	static uint64_t t24 = 1883977453469LLU;

	t24 = (((x161*x162)*x163)-x164);

	if (t24 != 24135568752640LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x165 = -3;
	static int64_t x166 = -2532051579LL;
	int16_t x167 = INT16_MAX;
	int8_t x168 = INT8_MIN;

	t25 = (((x165*x166)*x167)-x168);

	if (t25 != 248903202267407LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x170 = 482U;
	int64_t x172 = -273753474986LL;
	int64_t t26 = -1651203641LL;

	t26 = (((x169*x170)*x171)-x172);

	if (t26 != 273753474986LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x173 = UINT64_MAX;
	int8_t x175 = INT8_MIN;
	volatile int8_t x176 = INT8_MIN;

	t27 = (((x173*x174)*x175)-x176);

	if (t27 != 18446744073709535360LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x177 = INT16_MIN;
	uint64_t x179 = 754664390978777LLU;
	int8_t x180 = INT8_MIN;
	uint64_t t28 = 2357LLU;

	t28 = (((x177*x178)*x179)-x180);

	if (t28 != 6282098689883013248LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x185 = UINT16_MAX;
	uint16_t x187 = 4U;
	static uint32_t x188 = 0U;
	uint64_t t29 = 3587466324558LLU;

	t29 = (((x185*x186)*x187)-x188);

	if (t29 != 18446744073709289476LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x193 = INT8_MIN;
	int16_t x194 = INT16_MIN;
	int8_t x195 = -3;
	int8_t x196 = INT8_MIN;
	volatile int32_t t30 = 3275;

	t30 = (((x193*x194)*x195)-x196);

	if (t30 != -12582784) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x198 = UINT64_MAX;
	int32_t x199 = 1;
	int16_t x200 = INT16_MIN;
	uint64_t t31 = 7457542765966140469LLU;

	t31 = (((x197*x198)*x199)-x200);

	if (t31 != 32758LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x201 = 24U;
	volatile int8_t x202 = INT8_MIN;
	volatile uint16_t x203 = UINT16_MAX;
	int8_t x204 = INT8_MIN;
	volatile int32_t t32 = -186;

	t32 = (((x201*x202)*x203)-x204);

	if (t32 != -201323392) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x205 = -1;
	uint32_t x206 = UINT32_MAX;
	volatile int16_t x207 = INT16_MIN;
	uint32_t t33 = 3152U;

	t33 = (((x205*x206)*x207)-x208);

	if (t33 != 4294934124U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x209 = 49265121931LLU;
	uint32_t x210 = UINT32_MAX;
	uint16_t x211 = 825U;
	uint8_t x212 = 72U;
	uint64_t t34 = 520929LLU;

	t34 = (((x209*x210)*x211)-x212);

	if (t34 != 1932999698116539845LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x213 = 403404679U;
	int32_t x214 = 1;
	static int16_t x215 = 242;
	volatile int64_t x216 = -1LL;
	static int64_t t35 = -964117506108297681LL;

	t35 = (((x213*x214)*x215)-x216);

	if (t35 != 3134651807LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x217 = -252;
	int8_t x218 = -1;
	int8_t x220 = INT8_MIN;
	static uint32_t t36 = 348U;

	t36 = (((x217*x218)*x219)-x220);

	if (t36 != 2968256376U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x225 = INT32_MAX;
	int8_t x226 = 0;
	int32_t x227 = 9638;
	uint64_t x228 = 112059260LLU;
	volatile uint64_t t37 = 18883121770153314LLU;

	t37 = (((x225*x226)*x227)-x228);

	if (t37 != 18446744073597492356LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x249 = INT16_MIN;
	volatile uint16_t x250 = 1U;
	static uint64_t x251 = UINT64_MAX;

	t38 = (((x249*x250)*x251)-x252);

	if (t38 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x258 = -1LL;
	int8_t x259 = 1;
	volatile int16_t x260 = 81;
	volatile int64_t t39 = 79287860144LL;

	t39 = (((x257*x258)*x259)-x260);

	if (t39 != 47LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x266 = 30;
	uint64_t x267 = UINT64_MAX;
	int64_t x268 = 44020LL;

	t40 = (((x265*x266)*x267)-x268);

	if (t40 != 18446744073709507626LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x269 = 8U;
	int64_t x271 = 0LL;
	uint16_t x272 = 28826U;
	int64_t t41 = 5287620LL;

	t41 = (((x269*x270)*x271)-x272);

	if (t41 != -28826LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x273 = -1;
	int32_t x274 = -1;
	volatile int32_t x275 = -1;
	uint32_t x276 = UINT32_MAX;
	volatile uint32_t t42 = 0U;

	t42 = (((x273*x274)*x275)-x276);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x277 = 425;
	volatile uint32_t x278 = UINT32_MAX;
	static int32_t x279 = -137;
	int8_t x280 = INT8_MIN;
	volatile uint32_t t43 = 6U;

	t43 = (((x277*x278)*x279)-x280);

	if (t43 != 58353U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x289 = 1;
	int32_t x290 = -345;
	static volatile uint32_t x292 = 930363U;
	static volatile uint32_t t44 = 632536U;

	t44 = (((x289*x290)*x291)-x292);

	if (t44 != 3556208210U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x298 = -1;
	uint32_t x299 = 1409U;
	int16_t x300 = -5026;
	int64_t t45 = -2998179475013970149LL;

	t45 = (((x297*x298)*x299)-x300);

	if (t45 != -63260483LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x301 = 189U;
	uint8_t x303 = 1U;
	int16_t x304 = 1;
	volatile int32_t t46 = 7688;

	t46 = (((x301*x302)*x303)-x304);

	if (t46 != -24193) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x309 = 2U;
	int32_t x310 = INT32_MIN;
	int64_t x311 = -1LL;

	t47 = (((x309*x310)*x311)-x312);

	if (t47 != -2147483647LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x317 = 65600520073134876LLU;
	static int32_t x318 = -2;
	int64_t x319 = 1044661454381410LL;
	int64_t x320 = INT64_MAX;
	static volatile uint64_t t48 = 396655LLU;

	t48 = (((x317*x318)*x319)-x320);

	if (t48 != 6214387581644662417LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x321 = INT16_MIN;
	static int16_t x323 = -1;
	int16_t x324 = -13;
	volatile int32_t t49 = 16625;

	t49 = (((x321*x322)*x323)-x324);

	if (t49 != 2064397) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x326 = 1U;
	static volatile uint32_t t50 = 900240U;

	t50 = (((x325*x326)*x327)-x328);

	if (t50 != 4294966625U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x337 = -1;
	uint64_t x338 = UINT64_MAX;
	int64_t x340 = INT64_MAX;
	static uint64_t t51 = 24400436998477450LLU;

	t51 = (((x337*x338)*x339)-x340);

	if (t51 != 9223372036854769586LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x349 = 0;
	int32_t x350 = INT32_MIN;
	volatile int64_t x351 = 1951719LL;
	volatile uint32_t x352 = 148194688U;
	static int64_t t52 = -404526170991LL;

	t52 = (((x349*x350)*x351)-x352);

	if (t52 != -148194688LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x353 = INT16_MIN;
	uint32_t x354 = UINT32_MAX;
	uint16_t x355 = 3U;
	static int32_t x356 = -4114582;
	uint32_t t53 = 869662938U;

	t53 = (((x353*x354)*x355)-x356);

	if (t53 != 4212886U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x357 = INT32_MIN;
	volatile uint64_t x358 = 789LLU;
	static int32_t x359 = -1;
	volatile uint64_t t54 = 67260136429LLU;

	t54 = (((x357*x358)*x359)-x360);

	if (t54 != 1694364598159LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x365 = 2U;
	static uint64_t x366 = UINT64_MAX;
	static volatile uint8_t x367 = 6U;
	int8_t x368 = INT8_MIN;
	volatile uint64_t t55 = 4835LLU;

	t55 = (((x365*x366)*x367)-x368);

	if (t55 != 116LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x369 = 7564417177LLU;
	static volatile int32_t x370 = INT32_MIN;
	volatile int8_t x371 = -1;
	static uint32_t x372 = 15334U;
	volatile uint64_t t56 = 530350364092173043LLU;

	t56 = (((x369*x370)*x371)-x372);

	if (t56 != 16244462194257806362LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x373 = 5040U;
	volatile int32_t x374 = -1;
	static uint16_t x376 = UINT16_MAX;
	volatile uint32_t t57 = 31460U;

	t57 = (((x373*x374)*x375)-x376);

	if (t57 != 4289876881U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x377 = UINT64_MAX;
	int16_t x378 = INT16_MAX;
	static int32_t x379 = -1;
	uint64_t t58 = 376263245768275LLU;

	t58 = (((x377*x378)*x379)-x380);

	if (t58 != 32767LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x381 = -523LL;
	uint16_t x382 = 15U;
	int32_t x383 = INT32_MIN;

	t59 = (((x381*x382)*x383)-x384);

	if (t59 != 16847009194065LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x385 = -154396;
	uint8_t x386 = 0U;
	volatile uint64_t x387 = 55001159LLU;
	static int8_t x388 = INT8_MIN;

	t60 = (((x385*x386)*x387)-x388);

	if (t60 != 128LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x393 = 91U;
	uint16_t x394 = 407U;
	int16_t x395 = -1;
	volatile int8_t x396 = INT8_MIN;

	t61 = (((x393*x394)*x395)-x396);

	if (t61 != -36909) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x397 = -1;
	int8_t x398 = 0;
	volatile int32_t x399 = INT32_MAX;
	int16_t x400 = INT16_MIN;
	int32_t t62 = -1529771;

	t62 = (((x397*x398)*x399)-x400);

	if (t62 != 32768) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x406 = -1;
	uint32_t x407 = 1232915623U;
	uint64_t x408 = 154728715352800LLU;
	uint64_t t63 = 6LLU;

	t63 = (((x405*x406)*x407)-x408);

	if (t63 != 18446589348428294855LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x410 = INT8_MAX;
	int16_t x411 = INT16_MIN;
	static int32_t x412 = 370194922;
	int32_t t64 = -52480;

	t64 = (((x409*x410)*x411)-x412);

	if (t64 != -324418026) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x427 = UINT32_MAX;
	int8_t x428 = INT8_MIN;
	static volatile uint64_t t65 = 460168993368LLU;

	t65 = (((x425*x426)*x427)-x428);

	if (t65 != 4442479878368919680LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x429 = 0U;
	uint64_t x430 = UINT64_MAX;
	uint32_t x431 = 29251348U;
	static uint64_t t66 = 108737011549049744LLU;

	t66 = (((x429*x430)*x431)-x432);

	if (t66 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x433 = 53U;
	uint32_t x434 = UINT32_MAX;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t67 = 774654LLU;

	t67 = (((x433*x434)*x435)-x436);

	if (t67 != 6785LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x446 = INT32_MIN;
	uint32_t x447 = 157920U;

	t68 = (((x445*x446)*x447)-x448);

	if (t68 != 7078766772857339649LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x449 = INT64_MAX;
	uint64_t x450 = UINT64_MAX;
	int32_t x451 = -1;

	t69 = (((x449*x450)*x451)-x452);

	if (t69 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x461 = 1U;
	int8_t x462 = -1;
	int16_t x464 = -3453;

	t70 = (((x461*x462)*x463)-x464);

	if (t70 != 3419) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x469 = INT32_MIN;
	uint32_t x470 = 2026U;
	static uint64_t x471 = 956840648445932LLU;
	static uint8_t x472 = 44U;
	static volatile uint64_t t71 = 25420LLU;

	t71 = (((x469*x470)*x471)-x472);

	if (t71 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x477 = -1;
	uint64_t x480 = UINT64_MAX;
	volatile uint64_t t72 = 209718138622LLU;

	t72 = (((x477*x478)*x479)-x480);

	if (t72 != 2147450881LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x481 = INT8_MIN;
	uint16_t x482 = 47U;
	int8_t x484 = INT8_MIN;
	static int32_t t73 = -7;

	t73 = (((x481*x482)*x483)-x484);

	if (t73 != 150528) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x492 = INT8_MIN;
	static volatile uint32_t t74 = 1200883U;

	t74 = (((x489*x490)*x491)-x492);

	if (t74 != 4294965646U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x494 = 120U;
	int8_t x495 = -14;
	static int16_t x496 = INT16_MIN;
	volatile uint64_t t75 = 11720282237854LLU;

	t75 = (((x493*x494)*x495)-x496);

	if (t75 != 11751036527486937264LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x506 = 17833U;
	volatile int64_t x507 = 11913834615LL;
	int8_t x508 = INT8_MIN;
	static int64_t t76 = 52351374425524LL;

	t76 = (((x505*x506)*x507)-x508);

	if (t76 != -6961870035002818432LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x514 = UINT64_MAX;
	volatile uint32_t x515 = 24632U;
	uint16_t x516 = 3U;
	volatile uint64_t t77 = 19311LLU;

	t77 = (((x513*x514)*x515)-x516);

	if (t77 != 18446744042717987957LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x517 = 18627643U;
	static int8_t x518 = INT8_MIN;
	int32_t x520 = INT32_MIN;
	uint32_t t78 = 6809U;

	t78 = (((x517*x518)*x519)-x520);

	if (t78 != 4036894080U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x529 = 4;
	static uint16_t x530 = 3U;

	t79 = (((x529*x530)*x531)-x532);

	if (t79 != 304056080LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x533 = UINT64_MAX;
	static int16_t x534 = INT16_MIN;
	uint8_t x535 = UINT8_MAX;
	uint16_t x536 = UINT16_MAX;

	t80 = (((x533*x534)*x535)-x536);

	if (t80 != 8290305LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x538 = INT32_MIN;
	uint32_t x539 = 87U;

	t81 = (((x537*x538)*x539)-x540);

	if (t81 != 128U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x542 = 1303493100U;
	static int32_t x543 = INT32_MAX;
	int8_t x544 = INT8_MIN;
	uint32_t t82 = 6187U;

	t82 = (((x541*x542)*x543)-x544);

	if (t82 != 2156898992U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x545 = UINT64_MAX;
	volatile int32_t x546 = INT32_MAX;
	int16_t x547 = 3;
	static uint8_t x548 = 0U;
	uint64_t t83 = 17421423LLU;

	t83 = (((x545*x546)*x547)-x548);

	if (t83 != 18446744067267100675LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x549 = UINT32_MAX;
	uint64_t x551 = 28405LLU;
	volatile uint32_t x552 = 25727U;
	uint64_t t84 = 2738529443977787851LLU;

	t84 = (((x549*x550)*x551)-x552);

	if (t84 != 18446744073709525889LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x553 = -1;
	int8_t x554 = 0;
	uint64_t x555 = 5092497LLU;
	int64_t x556 = -478LL;
	uint64_t t85 = 570350LLU;

	t85 = (((x553*x554)*x555)-x556);

	if (t85 != 478LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x557 = 817757749821422LLU;
	uint64_t x558 = 517LLU;
	uint32_t x559 = 20348326U;
	volatile uint64_t x560 = 115531795828815694LLU;
	volatile uint64_t t86 = 2170133688705505949LLU;

	t86 = (((x557*x558)*x559)-x560);

	if (t86 != 1641017841393550422LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x561 = 161U;
	volatile uint8_t x562 = 15U;
	static uint64_t x563 = 1720679674378LLU;
	static uint16_t x564 = UINT16_MAX;
	volatile uint64_t t87 = 18551614LLU;

	t87 = (((x561*x562)*x563)-x564);

	if (t87 != 4155441413557335LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x568 = UINT8_MAX;
	uint64_t t88 = 363228797993587LLU;

	t88 = (((x565*x566)*x567)-x568);

	if (t88 != 247226760LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x569 = 16782519LL;
	static uint64_t x571 = UINT64_MAX;
	int64_t x572 = INT64_MAX;
	uint64_t t89 = 304232599809LLU;

	t89 = (((x569*x570)*x571)-x572);

	if (t89 != 9223372036384865277LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x585 = UINT16_MAX;
	int8_t x586 = -1;
	int16_t x587 = INT16_MAX;
	static int8_t x588 = INT8_MAX;
	volatile int32_t t90 = -70742;

	t90 = (((x585*x586)*x587)-x588);

	if (t90 != -2147385472) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x589 = INT16_MIN;
	uint64_t x590 = 89925708LLU;
	volatile int32_t x591 = -1;
	static uint64_t t91 = 32LLU;

	t91 = (((x589*x590)*x591)-x592);

	if (t91 != 2946685566977LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x606 = INT16_MIN;
	int8_t x607 = INT8_MAX;
	volatile uint32_t x608 = UINT32_MAX;
	volatile uint32_t t92 = 31U;

	t92 = (((x605*x606)*x607)-x608);

	if (t92 != 4161537U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x613 = INT8_MAX;
	static int64_t x614 = -396025165638LL;
	uint16_t x615 = 0U;
	volatile uint64_t x616 = 250LLU;
	volatile uint64_t t93 = 180379LLU;

	t93 = (((x613*x614)*x615)-x616);

	if (t93 != 18446744073709551366LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x617 = -182361LL;
	int32_t x618 = -28;
	uint64_t x619 = 132829271528LLU;
	volatile int16_t x620 = -15;

	t94 = (((x617*x618)*x619)-x620);

	if (t94 != 678240605983293039LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x630 = -1LL;
	int8_t x631 = INT8_MIN;
	volatile uint64_t x632 = UINT64_MAX;
	uint64_t t95 = 1381088635422LLU;

	t95 = (((x629*x630)*x631)-x632);

	if (t95 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x641 = 878;
	volatile uint64_t x642 = 2181210LLU;
	volatile int16_t x644 = -1;
	uint64_t t96 = 4969283626LLU;

	t96 = (((x641*x642)*x643)-x644);

	if (t96 != 106711419715981LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x645 = 206359290073LL;
	static uint32_t x646 = 36U;
	int8_t x648 = INT8_MAX;

	t97 = (((x645*x646)*x647)-x648);

	if (t97 != -243431323816034431LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x653 = UINT8_MAX;
	int16_t x654 = INT16_MIN;
	int8_t x655 = 11;
	int32_t t98 = -5984;

	t98 = (((x653*x654)*x655)-x656);

	if (t98 != -91914241) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x657 = -2;
	volatile uint16_t x659 = 8729U;
	static volatile int32_t t99 = 3109;

	t99 = (((x657*x658)*x659)-x660);

	if (t99 != 16624) { NG(); } else { ; }
	
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

