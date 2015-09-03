#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x5 = INT16_MAX;
volatile int32_t t1 = 2;
uint8_t x11 = 0U;
uint8_t x14 = 52U;
static volatile int16_t x17 = INT16_MIN;
int16_t x21 = 6;
int64_t x23 = INT64_MIN;
uint64_t x26 = 841LLU;
int64_t x38 = -1LL;
volatile int64_t x40 = -1LL;
int32_t t9 = -3932426;
uint32_t t10 = 2960U;
volatile int8_t x53 = INT8_MAX;
int32_t x54 = INT32_MAX;
static int32_t t12 = 25;
static uint16_t x64 = UINT16_MAX;
int64_t x65 = -59279415321LL;
int32_t x67 = INT32_MIN;
volatile int64_t t14 = 1754957LL;
static int32_t x69 = -339099;
int32_t x99 = -1;
int8_t x101 = -1;
int8_t x103 = INT8_MIN;
uint32_t t20 = 80415U;
int16_t x106 = INT16_MIN;
uint32_t x107 = 215U;
int32_t x108 = -2;
static volatile int32_t t21 = -33553;
int64_t x114 = -1382673017038990LL;
static uint64_t x118 = UINT64_MAX;
uint8_t x121 = 3U;
static int32_t t24 = -19317;
volatile int64_t x127 = 282LL;
int8_t x128 = INT8_MAX;
static uint64_t x135 = 201014677612913531LLU;
int16_t x138 = 0;
volatile int64_t x145 = -5461692LL;
static volatile int8_t x159 = 3;
int64_t x170 = -1LL;
static int64_t x171 = -33243750487250326LL;
uint64_t x174 = 9587484912961LLU;
volatile uint64_t x176 = 3718022158142428846LLU;
uint64_t t32 = 3LLU;
static int8_t x182 = -1;
volatile int32_t t36 = -684608113;
uint64_t x197 = UINT64_MAX;
uint64_t x210 = 0LLU;
uint64_t x226 = UINT64_MAX;
uint64_t x237 = 1731700527003732LLU;
int16_t x239 = -2033;
int8_t x246 = -1;
uint8_t x248 = 0U;
volatile int32_t t49 = 27992;
int32_t x294 = -11169;
uint64_t x296 = 25328929475896LLU;
int64_t t54 = -7708220LL;
volatile int8_t x316 = INT8_MIN;
int32_t t56 = 0;
uint32_t x319 = UINT32_MAX;
uint8_t x323 = UINT8_MAX;
int32_t x326 = 2946;
uint64_t x329 = 8561017303969LLU;
volatile int32_t x331 = 24;
uint64_t t60 = 103353922LLU;
volatile int32_t t61 = 381498;
static int16_t x337 = -673;
int32_t x345 = INT32_MIN;
int32_t x346 = INT32_MIN;
static uint16_t x348 = 31091U;
uint32_t x364 = 32U;
uint16_t x368 = 2U;
uint16_t x370 = UINT16_MAX;
volatile int64_t x371 = INT64_MIN;
int16_t x373 = 1;
static volatile int8_t x379 = -1;
int64_t x380 = -1LL;
int64_t t69 = -3087484344LL;
int64_t x381 = INT64_MIN;
int64_t t70 = 2915722389759119031LL;
volatile int8_t x394 = 0;
int16_t x395 = 1;
uint32_t x397 = UINT32_MAX;
int64_t x399 = INT64_MIN;
volatile uint32_t t75 = 1021613U;
int16_t x415 = INT16_MIN;
uint32_t x433 = 1812U;
uint32_t t80 = 739005U;
int64_t x444 = -17LL;
int32_t x445 = INT32_MIN;
uint8_t x458 = 3U;
static int32_t x463 = INT32_MAX;
volatile uint32_t x464 = 1787686543U;
int32_t t87 = 27445894;
volatile int16_t x510 = INT16_MAX;
static int8_t x519 = INT8_MIN;
int32_t x520 = -1;
int16_t x522 = -2;
static uint16_t x524 = 27U;
int64_t x525 = -1LL;
uint64_t x531 = 824LLU;
int8_t x532 = 20;
int8_t x538 = INT8_MAX;
uint8_t x540 = UINT8_MAX;


void f0(void) {
	int32_t x1 = -1;
	int16_t x2 = 0;
	volatile uint32_t x3 = UINT32_MAX;
	uint16_t x4 = UINT16_MAX;
	static int32_t t0 = 1;

	t0 = (x1-((x2<x3)-x4));

	if (t0 != 65533) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = 0;
	static int16_t x7 = INT16_MAX;
	int16_t x8 = INT16_MIN;

	t1 = (x5-((x6<x7)-x8));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	static uint16_t x10 = 215U;
	int8_t x12 = INT8_MAX;
	volatile int64_t t2 = 2115310125LL;

	t2 = (x9-((x10<x11)-x12));

	if (t2 != 126LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 0;
	int16_t x15 = INT16_MIN;
	int16_t x16 = 7;
	int32_t t3 = -1538659;

	t3 = (x13-((x14<x15)-x16));

	if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = INT8_MIN;
	int8_t x19 = INT8_MIN;
	uint64_t x20 = UINT64_MAX;
	uint64_t t4 = 270884535995618LLU;

	t4 = (x17-((x18<x19)-x20));

	if (t4 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -1572882;
	int16_t x24 = 2;
	volatile int32_t t5 = -60195783;

	t5 = (x21-((x22<x23)-x24));

	if (t5 != 8) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MAX;
	int8_t x27 = INT8_MIN;
	volatile uint32_t x28 = 6U;
	uint32_t t6 = 1046476U;

	t6 = (x25-((x26<x27)-x28));

	if (t6 != 132U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = INT16_MIN;
	uint16_t x34 = UINT16_MAX;
	int8_t x35 = 28;
	int8_t x36 = INT8_MIN;
	volatile int32_t t7 = -182;

	t7 = (x33-((x34<x35)-x36));

	if (t7 != -32896) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = -2848;
	uint32_t x39 = 105U;
	static int64_t t8 = -1509363734676LL;

	t8 = (x37-((x38<x39)-x40));

	if (t8 != -2850LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	static int32_t x42 = INT32_MAX;
	int64_t x43 = -1LL;
	volatile uint16_t x44 = UINT16_MAX;

	t9 = (x41-((x42<x43)-x44));

	if (t9 != 65407) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	volatile uint32_t x46 = 435152652U;
	int16_t x47 = 1;
	volatile uint32_t x48 = 639580256U;

	t10 = (x45-((x46<x47)-x48));

	if (t10 != 639580511U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x55 = -21;
	volatile int8_t x56 = -19;
	int32_t t11 = 0;

	t11 = (x53-((x54<x55)-x56));

	if (t11 != 108) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = -1;
	uint32_t x58 = 16229731U;
	static int16_t x59 = 43;
	static uint16_t x60 = UINT16_MAX;

	t12 = (x57-((x58<x59)-x60));

	if (t12 != 65534) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	uint64_t x62 = 10142LLU;
	static int16_t x63 = INT16_MIN;
	static volatile int64_t t13 = 420615117107LL;

	t13 = (x61-((x62<x63)-x64));

	if (t13 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x66 = UINT16_MAX;
	uint16_t x68 = UINT16_MAX;

	t14 = (x65-((x66<x67)-x68));

	if (t14 != -59279349786LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x70 = 37LL;
	uint16_t x71 = UINT16_MAX;
	static int64_t x72 = INT64_MAX;
	int64_t t15 = 22296LL;

	t15 = (x69-((x70<x71)-x72));

	if (t15 != 9223372036854436707LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = -29LL;
	uint32_t x82 = 10627U;
	int8_t x83 = INT8_MAX;
	int64_t x84 = -1LL;
	static volatile int64_t t16 = 3671LL;

	t16 = (x81-((x82<x83)-x84));

	if (t16 != -30LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x89 = UINT8_MAX;
	static volatile int32_t x90 = -57;
	uint32_t x91 = 279U;
	volatile int64_t x92 = -1LL;
	volatile int64_t t17 = 57LL;

	t17 = (x89-((x90<x91)-x92));

	if (t17 != 254LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = INT8_MIN;
	int16_t x94 = INT16_MIN;
	volatile int16_t x95 = -460;
	volatile uint16_t x96 = 407U;
	int32_t t18 = -20592;

	t18 = (x93-((x94<x95)-x96));

	if (t18 != 278) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x97 = 26;
	volatile int64_t x98 = INT64_MAX;
	uint8_t x100 = UINT8_MAX;
	volatile int32_t t19 = 32578;

	t19 = (x97-((x98<x99)-x100));

	if (t19 != 281) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x102 = 3LLU;
	uint32_t x104 = UINT32_MAX;

	t20 = (x101-((x102<x103)-x104));

	if (t20 != 4294967293U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x105 = 3U;

	t21 = (x105-((x106<x107)-x108));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = INT64_MAX;
	uint64_t x115 = 11972LLU;
	int16_t x116 = INT16_MIN;
	volatile int64_t t22 = 56372349268520LL;

	t22 = (x113-((x114<x115)-x116));

	if (t22 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = INT16_MAX;
	static volatile int16_t x119 = INT16_MIN;
	static int8_t x120 = -1;
	int32_t t23 = 5;

	t23 = (x117-((x118<x119)-x120));

	if (t23 != 32766) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x122 = INT64_MAX;
	volatile uint16_t x123 = 19U;
	int16_t x124 = INT16_MIN;

	t24 = (x121-((x122<x123)-x124));

	if (t24 != -32765) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x125 = INT32_MIN;
	volatile uint32_t x126 = 1317782339U;
	int32_t t25 = -1538435;

	t25 = (x125-((x126<x127)-x128));

	if (t25 != -2147483521) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x133 = 3272161456LLU;
	static int64_t x134 = -520673255LL;
	volatile int64_t x136 = 3690421760761LL;
	volatile uint64_t t26 = 32106773LLU;

	t26 = (x133-((x134<x135)-x136));

	if (t26 != 3693693922217LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x137 = 98906050LL;
	int64_t x139 = -7LL;
	static int8_t x140 = -1;
	volatile int64_t t27 = 1049307953200LL;

	t27 = (x137-((x138<x139)-x140));

	if (t27 != 98906049LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x146 = UINT8_MAX;
	volatile uint16_t x147 = UINT16_MAX;
	uint16_t x148 = 24703U;
	volatile int64_t t28 = 3290917LL;

	t28 = (x145-((x146<x147)-x148));

	if (t28 != -5436990LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x153 = 2012U;
	uint64_t x154 = UINT64_MAX;
	volatile int64_t x155 = -1LL;
	static uint64_t x156 = UINT64_MAX;
	volatile uint64_t t29 = 2066LLU;

	t29 = (x153-((x154<x155)-x156));

	if (t29 != 2011LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x157 = 1;
	int16_t x158 = INT16_MIN;
	static volatile uint8_t x160 = 12U;
	static volatile int32_t t30 = 0;

	t30 = (x157-((x158<x159)-x160));

	if (t30 != 12) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x169 = -9;
	int8_t x172 = INT8_MAX;
	int32_t t31 = -16198;

	t31 = (x169-((x170<x171)-x172));

	if (t31 != 118) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x173 = INT32_MIN;
	volatile int32_t x175 = INT32_MAX;

	t32 = (x173-((x174<x175)-x176));

	if (t32 != 3718022155994945198LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x181 = UINT32_MAX;
	static int32_t x183 = -1;
	uint64_t x184 = 1857478303142LLU;
	static volatile uint64_t t33 = 335186322644LLU;

	t33 = (x181-((x182<x183)-x184));

	if (t33 != 1861773270437LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x185 = 2U;
	static uint8_t x186 = 53U;
	static volatile int64_t x187 = -27650242LL;
	static int8_t x188 = INT8_MIN;
	int32_t t34 = -283;

	t34 = (x185-((x186<x187)-x188));

	if (t34 != -126) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x189 = -14;
	uint16_t x190 = UINT16_MAX;
	uint8_t x191 = 3U;
	int16_t x192 = INT16_MIN;
	int32_t t35 = -16344273;

	t35 = (x189-((x190<x191)-x192));

	if (t35 != -32782) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x193 = -1;
	uint8_t x194 = UINT8_MAX;
	int32_t x195 = -3012;
	int8_t x196 = -1;

	t36 = (x193-((x194<x195)-x196));

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x198 = 13LLU;
	int16_t x199 = -1;
	int32_t x200 = -495;
	uint64_t t37 = 7048474318LLU;

	t37 = (x197-((x198<x199)-x200));

	if (t37 != 18446744073709551119LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x209 = -1;
	int64_t x211 = -1LL;
	int64_t x212 = INT64_MAX;
	int64_t t38 = -9755224226013418LL;

	t38 = (x209-((x210<x211)-x212));

	if (t38 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x221 = 254LL;
	volatile int32_t x222 = INT32_MIN;
	static int16_t x223 = INT16_MIN;
	int64_t x224 = -289779LL;
	int64_t t39 = -58939LL;

	t39 = (x221-((x222<x223)-x224));

	if (t39 != -289526LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x225 = INT8_MIN;
	int64_t x227 = -68891938854431745LL;
	uint16_t x228 = 234U;
	volatile int32_t t40 = -885;

	t40 = (x225-((x226<x227)-x228));

	if (t40 != 106) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x229 = INT16_MIN;
	int64_t x230 = -122203LL;
	int16_t x231 = INT16_MAX;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t41 = -3787;

	t41 = (x229-((x230<x231)-x232));

	if (t41 != -32514) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x233 = INT8_MIN;
	volatile uint8_t x234 = 2U;
	volatile int32_t x235 = 2055761;
	int64_t x236 = -1LL;
	static volatile int64_t t42 = -855786293LL;

	t42 = (x233-((x234<x235)-x236));

	if (t42 != -130LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x238 = INT8_MAX;
	static volatile int8_t x240 = 0;
	static volatile uint64_t t43 = 3321089543840849936LLU;

	t43 = (x237-((x238<x239)-x240));

	if (t43 != 1731700527003732LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x245 = -1LL;
	static int16_t x247 = -1011;
	int64_t t44 = -289057LL;

	t44 = (x245-((x246<x247)-x248));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x253 = -10474;
	static uint8_t x254 = UINT8_MAX;
	int64_t x255 = INT64_MIN;
	static uint32_t x256 = 60396U;
	volatile uint32_t t45 = 28947U;

	t45 = (x253-((x254<x255)-x256));

	if (t45 != 49922U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x265 = 985;
	static int8_t x266 = INT8_MIN;
	uint32_t x267 = 54883374U;
	int64_t x268 = -1520037327119998LL;
	int64_t t46 = 856LL;

	t46 = (x265-((x266<x267)-x268));

	if (t46 != -1520037327119013LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x269 = 27U;
	volatile int64_t x270 = 2482776393693605292LL;
	static int64_t x271 = INT64_MIN;
	uint64_t x272 = UINT64_MAX;
	static volatile uint64_t t47 = 80624LLU;

	t47 = (x269-((x270<x271)-x272));

	if (t47 != 26LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x277 = 449819889U;
	static int8_t x278 = INT8_MAX;
	int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MAX;
	volatile uint32_t t48 = 62U;

	t48 = (x277-((x278<x279)-x280));

	if (t48 != 2597303536U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x281 = INT8_MIN;
	int32_t x282 = INT32_MIN;
	volatile int64_t x283 = 1145802530514878488LL;
	int32_t x284 = INT32_MAX;

	t49 = (x281-((x282<x283)-x284));

	if (t49 != 2147483518) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x285 = 17U;
	int32_t x286 = 762;
	uint8_t x287 = 3U;
	int8_t x288 = -1;
	static volatile int32_t t50 = -14645;

	t50 = (x285-((x286<x287)-x288));

	if (t50 != 16) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x293 = INT16_MIN;
	uint8_t x295 = 1U;
	uint64_t t51 = 2378318LLU;

	t51 = (x293-((x294<x295)-x296));

	if (t51 != 25328929443127LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x297 = 187U;
	int32_t x298 = -1;
	uint32_t x299 = 129410286U;
	int32_t x300 = 8098;
	int32_t t52 = -222;

	t52 = (x297-((x298<x299)-x300));

	if (t52 != 8285) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x301 = INT8_MIN;
	uint8_t x302 = 19U;
	uint16_t x303 = 274U;
	int16_t x304 = INT16_MIN;
	volatile int32_t t53 = 226448147;

	t53 = (x301-((x302<x303)-x304));

	if (t53 != -32897) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MIN;
	static int8_t x307 = -1;
	int64_t x308 = 69994365836473LL;

	t54 = (x305-((x306<x307)-x308));

	if (t54 != 69994365836344LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x309 = INT8_MIN;
	static volatile int64_t x310 = INT64_MIN;
	int16_t x311 = -845;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t55 = 2959;

	t55 = (x309-((x310<x311)-x312));

	if (t55 != 126) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x313 = -1;
	static uint32_t x314 = UINT32_MAX;
	int64_t x315 = -1LL;

	t56 = (x313-((x314<x315)-x316));

	if (t56 != -129) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x317 = INT16_MIN;
	int32_t x318 = INT32_MIN;
	int16_t x320 = INT16_MIN;
	volatile int32_t t57 = 29;

	t57 = (x317-((x318<x319)-x320));

	if (t57 != -65537) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x321 = -13376;
	volatile uint16_t x322 = 15261U;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t58 = 1708198167U;

	t58 = (x321-((x322<x323)-x324));

	if (t58 != 4294953919U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x325 = 36U;
	volatile uint8_t x327 = UINT8_MAX;
	int16_t x328 = -1;
	volatile int32_t t59 = 49;

	t59 = (x325-((x326<x327)-x328));

	if (t59 != 35) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x330 = -2;
	uint64_t x332 = 434792431LLU;

	t60 = (x329-((x330<x331)-x332));

	if (t60 != 8561452096399LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x333 = -7842;
	int32_t x334 = -173868;
	volatile uint8_t x335 = UINT8_MAX;
	uint8_t x336 = UINT8_MAX;

	t61 = (x333-((x334<x335)-x336));

	if (t61 != -7588) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x338 = UINT16_MAX;
	static uint64_t x339 = 4002357054492009LLU;
	int8_t x340 = -1;
	int32_t t62 = -1;

	t62 = (x337-((x338<x339)-x340));

	if (t62 != -675) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x341 = 1;
	volatile int64_t x342 = INT64_MIN;
	static int8_t x343 = INT8_MIN;
	int32_t x344 = -1;
	static volatile int32_t t63 = -203023924;

	t63 = (x341-((x342<x343)-x344));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x347 = 219518U;
	int32_t t64 = 2489;

	t64 = (x345-((x346<x347)-x348));

	if (t64 != -2147452557) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x361 = 1757;
	static uint8_t x362 = 13U;
	uint64_t x363 = UINT64_MAX;
	volatile uint32_t t65 = 1835638221U;

	t65 = (x361-((x362<x363)-x364));

	if (t65 != 1788U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x365 = -1;
	int8_t x366 = INT8_MIN;
	int16_t x367 = INT16_MIN;
	volatile int32_t t66 = -10;

	t66 = (x365-((x366<x367)-x368));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x369 = -5009;
	uint32_t x372 = 33U;
	volatile uint32_t t67 = 33075804U;

	t67 = (x369-((x370<x371)-x372));

	if (t67 != 4294962320U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x374 = 1;
	int16_t x375 = INT16_MIN;
	int32_t x376 = 0;
	int32_t t68 = 5934107;

	t68 = (x373-((x374<x375)-x376));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x377 = -1;
	uint32_t x378 = 4396U;

	t69 = (x377-((x378<x379)-x380));

	if (t69 != -3LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x382 = 2U;
	int8_t x383 = -1;
	uint16_t x384 = 4075U;

	t70 = (x381-((x382<x383)-x384));

	if (t70 != -9223372036854771733LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x393 = INT16_MIN;
	int16_t x396 = -1;
	volatile int32_t t71 = -30627328;

	t71 = (x393-((x394<x395)-x396));

	if (t71 != -32770) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x398 = -1;
	int16_t x400 = -5;
	volatile uint32_t t72 = 3377259U;

	t72 = (x397-((x398<x399)-x400));

	if (t72 != 4294967290U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x401 = 54740;
	int64_t x402 = 3LL;
	static uint16_t x403 = 467U;
	int8_t x404 = 2;
	volatile int32_t t73 = -1;

	t73 = (x401-((x402<x403)-x404));

	if (t73 != 54741) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x405 = -1LL;
	static uint16_t x406 = 50U;
	int64_t x407 = -1LL;
	volatile uint32_t x408 = 36U;
	static int64_t t74 = 217546286092143268LL;

	t74 = (x405-((x406<x407)-x408));

	if (t74 != -4294967261LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x409 = 989701136U;
	int8_t x410 = INT8_MIN;
	static int64_t x411 = INT64_MIN;
	volatile uint16_t x412 = 14982U;

	t75 = (x409-((x410<x411)-x412));

	if (t75 != 989716118U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x413 = INT32_MAX;
	uint64_t x414 = 503790250975955592LLU;
	volatile int8_t x416 = INT8_MIN;
	int32_t t76 = 0;

	t76 = (x413-((x414<x415)-x416));

	if (t76 != 2147483518) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x417 = INT8_MIN;
	int16_t x418 = -1;
	volatile int64_t x419 = INT64_MAX;
	int16_t x420 = INT16_MIN;
	int32_t t77 = 558265715;

	t77 = (x417-((x418<x419)-x420));

	if (t77 != -32897) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x421 = -1;
	volatile int32_t x422 = 5;
	uint8_t x423 = UINT8_MAX;
	uint32_t x424 = UINT32_MAX;
	static uint32_t t78 = 16361937U;

	t78 = (x421-((x422<x423)-x424));

	if (t78 != 4294967293U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x425 = 318248U;
	volatile uint32_t x426 = 55U;
	static int64_t x427 = INT64_MIN;
	static uint64_t x428 = 2067217928682LLU;
	uint64_t t79 = 225LLU;

	t79 = (x425-((x426<x427)-x428));

	if (t79 != 2067218246930LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x434 = UINT32_MAX;
	uint8_t x435 = 126U;
	uint16_t x436 = 4899U;

	t80 = (x433-((x434<x435)-x436));

	if (t80 != 6711U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x437 = 1376;
	volatile uint32_t x438 = 106257U;
	static int32_t x439 = 2499;
	int32_t x440 = 27386;
	static int32_t t81 = 193;

	t81 = (x437-((x438<x439)-x440));

	if (t81 != 28762) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x441 = 136777954376554869LLU;
	int16_t x442 = 1173;
	volatile int8_t x443 = INT8_MIN;
	volatile uint64_t t82 = 26000209552701366LLU;

	t82 = (x441-((x442<x443)-x444));

	if (t82 != 136777954376554852LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x446 = INT8_MAX;
	int32_t x447 = INT32_MAX;
	uint16_t x448 = 30U;
	int32_t t83 = -5841;

	t83 = (x445-((x446<x447)-x448));

	if (t83 != -2147483619) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x453 = INT32_MIN;
	int32_t x454 = INT32_MIN;
	static volatile int16_t x455 = -1;
	static int64_t x456 = -444LL;
	static int64_t t84 = 67832725629LL;

	t84 = (x453-((x454<x455)-x456));

	if (t84 != -2147484093LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x457 = -1;
	int16_t x459 = -1;
	static int16_t x460 = 829;
	volatile int32_t t85 = 17037;

	t85 = (x457-((x458<x459)-x460));

	if (t85 != 828) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x461 = -1;
	static int16_t x462 = -1;
	uint32_t t86 = 1553189U;

	t86 = (x461-((x462<x463)-x464));

	if (t86 != 1787686541U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x465 = -1;
	static int8_t x466 = 37;
	int32_t x467 = 234;
	int8_t x468 = INT8_MAX;

	t87 = (x465-((x466<x467)-x468));

	if (t87 != 125) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x473 = -1LL;
	volatile uint8_t x474 = 24U;
	int64_t x475 = -1LL;
	uint16_t x476 = 1457U;
	int64_t t88 = -724304403705807194LL;

	t88 = (x473-((x474<x475)-x476));

	if (t88 != 1456LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x481 = -1;
	uint32_t x482 = 9947U;
	int32_t x483 = INT32_MIN;
	uint8_t x484 = 15U;
	int32_t t89 = -1442787;

	t89 = (x481-((x482<x483)-x484));

	if (t89 != 13) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x485 = -1LL;
	volatile int8_t x486 = -63;
	uint64_t x487 = 244LLU;
	volatile int16_t x488 = -1;
	int64_t t90 = -3179484540LL;

	t90 = (x485-((x486<x487)-x488));

	if (t90 != -2LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x489 = 115U;
	int16_t x490 = INT16_MIN;
	uint8_t x491 = UINT8_MAX;
	volatile uint16_t x492 = 792U;
	int32_t t91 = 1517448;

	t91 = (x489-((x490<x491)-x492));

	if (t91 != 906) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x497 = INT8_MAX;
	int64_t x498 = -1LL;
	uint8_t x499 = UINT8_MAX;
	uint32_t x500 = 5807008U;
	static volatile uint32_t t92 = 119586U;

	t92 = (x497-((x498<x499)-x500));

	if (t92 != 5807134U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x509 = INT16_MAX;
	int64_t x511 = -722706160851LL;
	int8_t x512 = -7;
	static volatile int32_t t93 = -349;

	t93 = (x509-((x510<x511)-x512));

	if (t93 != 32760) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x513 = INT8_MIN;
	uint64_t x514 = UINT64_MAX;
	static int16_t x515 = INT16_MIN;
	volatile uint64_t x516 = 7507454853737672451LLU;
	volatile uint64_t t94 = 7423LLU;

	t94 = (x513-((x514<x515)-x516));

	if (t94 != 7507454853737672323LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x517 = UINT16_MAX;
	int32_t x518 = INT32_MAX;
	static volatile int32_t t95 = -1;

	t95 = (x517-((x518<x519)-x520));

	if (t95 != 65534) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x521 = 14004531;
	static int8_t x523 = 3;
	int32_t t96 = -5;

	t96 = (x521-((x522<x523)-x524));

	if (t96 != 14004557) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x526 = INT16_MAX;
	static uint32_t x527 = 526U;
	uint16_t x528 = UINT16_MAX;
	int64_t t97 = 1091LL;

	t97 = (x525-((x526<x527)-x528));

	if (t97 != 65534LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x529 = 142506858LLU;
	int16_t x530 = INT16_MIN;
	uint64_t t98 = 959171495LLU;

	t98 = (x529-((x530<x531)-x532));

	if (t98 != 142506878LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x537 = INT64_MIN;
	static uint32_t x539 = 148892492U;
	int64_t t99 = 29582449695792222LL;

	t99 = (x537-((x538<x539)-x540));

	if (t99 != -9223372036854775554LL) { NG(); } else { ; }
	
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

