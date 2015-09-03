#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
uint64_t x5 = 212567LLU;
uint64_t x7 = 8387566038316866822LLU;
int16_t x8 = INT16_MIN;
int64_t x10 = INT64_MIN;
static int16_t x11 = INT16_MIN;
uint8_t x14 = UINT8_MAX;
int16_t x15 = -1;
static int32_t x28 = INT32_MIN;
uint32_t x41 = 2994U;
int16_t x42 = 1;
static int64_t x53 = INT64_MIN;
int32_t t10 = -3;
int32_t x64 = -546308695;
volatile int32_t t12 = -402329;
volatile int32_t t15 = 20256;
int64_t x81 = 2761LL;
static int64_t x91 = INT64_MIN;
int16_t x92 = INT16_MIN;
uint32_t x93 = 12845137U;
int64_t x98 = -1LL;
volatile int8_t x104 = INT8_MIN;
volatile uint32_t x107 = 127112U;
static int16_t x110 = INT16_MAX;
uint8_t x127 = UINT8_MAX;
int64_t x130 = INT64_MIN;
int8_t x136 = INT8_MAX;
int32_t x140 = -1;
volatile int64_t x142 = -1LL;
static int32_t t30 = -48191;
int8_t x146 = INT8_MIN;
uint16_t x154 = 1U;
static volatile int32_t t33 = -23432485;
uint32_t x169 = 3U;
int64_t x172 = INT64_MIN;
static volatile int32_t t35 = -60572460;
int8_t x177 = INT8_MIN;
volatile uint32_t x180 = UINT32_MAX;
static int32_t x187 = 26;
static int64_t x192 = INT64_MIN;
int8_t x205 = 0;
int32_t x207 = 3656003;
static int32_t x210 = -66934493;
uint64_t x213 = 7LLU;
int16_t x218 = -72;
volatile int32_t x224 = INT32_MIN;
int32_t x225 = 7633418;
int16_t x226 = INT16_MIN;
volatile int32_t t47 = -19819;
volatile int64_t x230 = -1662007341LL;
volatile uint64_t x231 = UINT64_MAX;
volatile int32_t t48 = 3579943;
uint64_t x234 = 878184LLU;
volatile int32_t t49 = 4;
int64_t x237 = 131716LL;
volatile int16_t x239 = 10;
int16_t x240 = INT16_MIN;
int8_t x246 = INT8_MIN;
static volatile uint32_t x250 = UINT32_MAX;
int16_t x251 = -1;
int32_t x254 = -19947;
static volatile int64_t x256 = 7234183LL;
int32_t x259 = INT32_MIN;
int32_t x268 = INT32_MAX;
static int16_t x270 = 1;
uint16_t x271 = UINT16_MAX;
static int16_t x280 = INT16_MIN;
uint16_t x281 = 431U;
volatile int32_t t60 = 59991518;
int8_t x295 = -1;
int8_t x299 = 2;
static volatile int32_t t62 = -28;
int64_t x315 = INT64_MIN;
volatile int8_t x316 = INT8_MIN;
int16_t x329 = -769;
int64_t x332 = -301597LL;
static uint8_t x333 = 2U;
static uint64_t x335 = 938LLU;
static int64_t x336 = INT64_MIN;
static int32_t t69 = -12334;
static uint32_t x341 = 672359U;
int32_t x345 = -37;
uint32_t x349 = UINT32_MAX;
volatile int8_t x356 = 0;
uint32_t x364 = 223369555U;
static int32_t t76 = 48;
int32_t t77 = -6375;
volatile int8_t x372 = INT8_MIN;
volatile int32_t t79 = -10785;
volatile int16_t x381 = -1;
uint64_t x383 = 46584691LLU;
uint32_t x384 = 1U;
uint32_t x401 = 189173775U;
uint32_t x411 = UINT32_MAX;
volatile uint16_t x412 = UINT16_MAX;
volatile uint32_t x433 = 0U;
static uint32_t x436 = 21U;
volatile int64_t x447 = 65221955853711LL;
static int32_t t95 = -485579;
uint64_t x456 = UINT64_MAX;
volatile int16_t x458 = 6;
int64_t x460 = -1LL;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int16_t x3 = INT16_MAX;
	int32_t x4 = -500;
	static volatile int32_t t0 = 0;

	t0 = ((x1*(x2%x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = INT32_MIN;
	int32_t t1 = 8377828;

	t1 = ((x5*(x6%x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 470052456169445466LLU;
	int32_t x12 = 179;
	static int32_t t2 = -63;

	t2 = ((x9*(x10%x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x16 = 29685LL;
	int32_t t3 = -5564580;

	t3 = ((x13*(x14%x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MAX;
	int64_t x18 = -243268934468LL;
	volatile int16_t x19 = INT16_MIN;
	int64_t x20 = INT64_MAX;
	int32_t t4 = 397027;

	t4 = ((x17*(x18%x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 2U;
	int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MIN;
	int32_t t5 = -15282;

	t5 = ((x25*(x26%x27))<x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	uint32_t x30 = UINT32_MAX;
	uint16_t x31 = UINT16_MAX;
	uint8_t x32 = 6U;
	int32_t t6 = -4138;

	t6 = ((x29*(x30%x31))<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 7291U;
	int32_t x38 = -33522;
	static int32_t x39 = INT32_MIN;
	volatile int8_t x40 = INT8_MAX;
	volatile int32_t t7 = -2116815;

	t7 = ((x37*(x38%x39))<x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x43 = -1;
	volatile int8_t x44 = INT8_MAX;
	volatile int32_t t8 = 1878108;

	t8 = ((x41*(x42%x43))<x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x49 = -1;
	uint32_t x50 = 5789U;
	static int64_t x51 = 263058LL;
	uint64_t x52 = 468941099914581368LLU;
	volatile int32_t t9 = 4569878;

	t9 = ((x49*(x50%x51))<x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x54 = 854034666U;
	static uint64_t x55 = UINT64_MAX;
	volatile int8_t x56 = 25;

	t10 = ((x53*(x54%x55))<x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = -1;
	uint32_t x58 = 0U;
	int16_t x59 = -945;
	volatile int16_t x60 = INT16_MIN;
	int32_t t11 = -10910;

	t11 = ((x57*(x58%x59))<x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = 584092326;
	int64_t x62 = INT64_MIN;
	volatile int16_t x63 = -1;

	t12 = ((x61*(x62%x63))<x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = -3231;
	volatile int64_t x66 = -440860506649960LL;
	volatile int32_t x67 = -55057744;
	uint64_t x68 = 3081323594LLU;
	volatile int32_t t13 = 81;

	t13 = ((x65*(x66%x67))<x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MAX;
	volatile uint32_t x70 = 1854437U;
	int8_t x71 = 1;
	uint8_t x72 = 5U;
	volatile int32_t t14 = 102645;

	t14 = ((x69*(x70%x71))<x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = 1131253020492LLU;
	static int8_t x78 = INT8_MIN;
	int64_t x79 = -1LL;
	uint8_t x80 = UINT8_MAX;

	t15 = ((x77*(x78%x79))<x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x82 = 0U;
	uint8_t x83 = 9U;
	volatile int64_t x84 = -1LL;
	int32_t t16 = -1;

	t16 = ((x81*(x82%x83))<x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = INT8_MAX;
	int32_t x86 = INT32_MIN;
	int64_t x87 = 2LL;
	int16_t x88 = 110;
	static volatile int32_t t17 = 27;

	t17 = ((x85*(x86%x87))<x88);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x89 = INT16_MAX;
	uint8_t x90 = 27U;
	volatile int32_t t18 = 224;

	t18 = ((x89*(x90%x91))<x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x94 = -1;
	uint16_t x95 = 65U;
	int64_t x96 = 165328332LL;
	volatile int32_t t19 = 625218383;

	t19 = ((x93*(x94%x95))<x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x97 = 7632124LLU;
	int16_t x99 = INT16_MIN;
	volatile uint32_t x100 = 12U;
	volatile int32_t t20 = 1;

	t20 = ((x97*(x98%x99))<x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = UINT8_MAX;
	int32_t x102 = INT32_MIN;
	volatile int16_t x103 = -1;
	volatile int32_t t21 = -20262;

	t21 = ((x101*(x102%x103))<x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x105 = 0U;
	int8_t x106 = 29;
	volatile int8_t x108 = INT8_MAX;
	volatile int32_t t22 = -997;

	t22 = ((x105*(x106%x107))<x108);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x109 = INT8_MIN;
	static uint16_t x111 = UINT16_MAX;
	uint8_t x112 = 1U;
	int32_t t23 = 1672;

	t23 = ((x109*(x110%x111))<x112);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = -22;
	int64_t x114 = INT64_MAX;
	uint16_t x115 = 271U;
	uint16_t x116 = 24594U;
	int32_t t24 = 23943;

	t24 = ((x113*(x114%x115))<x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = 1783U;
	volatile int16_t x118 = INT16_MIN;
	static int32_t x119 = -1;
	int8_t x120 = -1;
	volatile int32_t t25 = -162;

	t25 = ((x117*(x118%x119))<x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x125 = -1;
	volatile int8_t x126 = -1;
	static volatile uint8_t x128 = 40U;
	static volatile int32_t t26 = -2;

	t26 = ((x125*(x126%x127))<x128);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = 822;
	int8_t x131 = INT8_MIN;
	uint64_t x132 = 2061296847641311LLU;
	int32_t t27 = -322781;

	t27 = ((x129*(x130%x131))<x132);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x133 = -1LL;
	int16_t x134 = INT16_MAX;
	volatile int64_t x135 = 3038LL;
	int32_t t28 = 5490;

	t28 = ((x133*(x134%x135))<x136);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x137 = INT32_MAX;
	int16_t x138 = 4023;
	uint32_t x139 = UINT32_MAX;
	int32_t t29 = 1;

	t29 = ((x137*(x138%x139))<x140);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x141 = 1U;
	int16_t x143 = INT16_MAX;
	int32_t x144 = 11126019;

	t30 = ((x141*(x142%x143))<x144);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = -1;
	uint32_t x147 = UINT32_MAX;
	uint16_t x148 = UINT16_MAX;
	int32_t t31 = -314;

	t31 = ((x145*(x146%x147))<x148);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = UINT32_MAX;
	static int8_t x155 = 1;
	uint64_t x156 = UINT64_MAX;
	int32_t t32 = 48;

	t32 = ((x153*(x154%x155))<x156);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = 1;
	static volatile uint64_t x166 = 1070990462188LLU;
	int8_t x167 = 3;
	uint64_t x168 = 3LLU;

	t33 = ((x165*(x166%x167))<x168);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x170 = INT64_MIN;
	static int8_t x171 = -29;
	int32_t t34 = 0;

	t34 = ((x169*(x170%x171))<x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x173 = INT32_MIN;
	uint32_t x174 = 37U;
	static int16_t x175 = INT16_MAX;
	uint64_t x176 = UINT64_MAX;

	t35 = ((x173*(x174%x175))<x176);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x178 = UINT64_MAX;
	static int64_t x179 = INT64_MIN;
	volatile int32_t t36 = 220735;

	t36 = ((x177*(x178%x179))<x180);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x185 = 603U;
	int32_t x186 = -37599998;
	int32_t x188 = INT32_MIN;
	static int32_t t37 = 26;

	t37 = ((x185*(x186%x187))<x188);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x189 = 2013;
	uint64_t x190 = UINT64_MAX;
	static volatile int32_t x191 = INT32_MAX;
	int32_t t38 = -7987;

	t38 = ((x189*(x190%x191))<x192);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x193 = -1LL;
	static int32_t x194 = -1;
	static uint16_t x195 = 247U;
	uint32_t x196 = UINT32_MAX;
	int32_t t39 = -12215639;

	t39 = ((x193*(x194%x195))<x196);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x197 = 11U;
	int64_t x198 = INT64_MIN;
	volatile uint16_t x199 = 1U;
	int8_t x200 = INT8_MAX;
	volatile int32_t t40 = -12329185;

	t40 = ((x197*(x198%x199))<x200);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x201 = -2LL;
	volatile int32_t x202 = 1;
	static uint64_t x203 = 59393LLU;
	uint32_t x204 = 75903U;
	volatile int32_t t41 = 351;

	t41 = ((x201*(x202%x203))<x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x206 = INT64_MAX;
	static int32_t x208 = INT32_MIN;
	volatile int32_t t42 = 452204894;

	t42 = ((x205*(x206%x207))<x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x209 = 3;
	int32_t x211 = 6529;
	static int32_t x212 = INT32_MIN;
	static int32_t t43 = 0;

	t43 = ((x209*(x210%x211))<x212);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x214 = 57U;
	uint32_t x215 = 532U;
	static int16_t x216 = -1;
	static volatile int32_t t44 = -1660724;

	t44 = ((x213*(x214%x215))<x216);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x217 = 0LL;
	int16_t x219 = -1;
	uint32_t x220 = UINT32_MAX;
	static int32_t t45 = -352;

	t45 = ((x217*(x218%x219))<x220);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x221 = -3;
	uint16_t x222 = 931U;
	int8_t x223 = INT8_MIN;
	volatile int32_t t46 = -1411171;

	t46 = ((x221*(x222%x223))<x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x227 = INT8_MAX;
	uint8_t x228 = 1U;

	t47 = ((x225*(x226%x227))<x228);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x229 = 7U;
	uint32_t x232 = 92596003U;

	t48 = ((x229*(x230%x231))<x232);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x233 = 2;
	uint16_t x235 = 133U;
	int8_t x236 = INT8_MIN;

	t49 = ((x233*(x234%x235))<x236);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x238 = INT32_MAX;
	volatile int32_t t50 = 170885;

	t50 = ((x237*(x238%x239))<x240);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x241 = INT8_MIN;
	int64_t x242 = -31250403LL;
	int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MIN;
	volatile int32_t t51 = -161369;

	t51 = ((x241*(x242%x243))<x244);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x245 = -1;
	static int16_t x247 = -1;
	volatile int8_t x248 = -18;
	int32_t t52 = -107837145;

	t52 = ((x245*(x246%x247))<x248);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = -1;
	int16_t x252 = 185;
	volatile int32_t t53 = -549059074;

	t53 = ((x249*(x250%x251))<x252);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x253 = INT16_MIN;
	volatile int64_t x255 = -1LL;
	volatile int32_t t54 = -13887;

	t54 = ((x253*(x254%x255))<x256);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x257 = 12;
	int32_t x258 = -1;
	int8_t x260 = -10;
	int32_t t55 = 385752;

	t55 = ((x257*(x258%x259))<x260);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x261 = INT8_MIN;
	static int8_t x262 = -1;
	static uint8_t x263 = 37U;
	int64_t x264 = -1LL;
	int32_t t56 = 2;

	t56 = ((x261*(x262%x263))<x264);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = -1;
	int32_t x266 = 361;
	static int16_t x267 = INT16_MIN;
	int32_t t57 = -519837;

	t57 = ((x265*(x266%x267))<x268);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = -11;
	int16_t x272 = -2886;
	int32_t t58 = -346922711;

	t58 = ((x269*(x270%x271))<x272);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = -1LL;
	static uint16_t x278 = 6U;
	static int16_t x279 = 538;
	int32_t t59 = 218579760;

	t59 = ((x277*(x278%x279))<x280);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x282 = INT16_MIN;
	uint64_t x283 = UINT64_MAX;
	int16_t x284 = -1;

	t60 = ((x281*(x282%x283))<x284);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x293 = -1;
	static int8_t x294 = 7;
	static int16_t x296 = INT16_MIN;
	volatile int32_t t61 = 687524157;

	t61 = ((x293*(x294%x295))<x296);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x297 = -1;
	static uint8_t x298 = 123U;
	static uint32_t x300 = UINT32_MAX;

	t62 = ((x297*(x298%x299))<x300);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x301 = 11454955U;
	int8_t x302 = 1;
	int8_t x303 = INT8_MIN;
	uint64_t x304 = 5LLU;
	volatile int32_t t63 = -970950118;

	t63 = ((x301*(x302%x303))<x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x305 = -1501218043LL;
	static int8_t x306 = 0;
	int16_t x307 = -221;
	uint32_t x308 = 22322U;
	volatile int32_t t64 = 4;

	t64 = ((x305*(x306%x307))<x308);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x309 = INT32_MAX;
	int64_t x310 = -1LL;
	volatile int32_t x311 = INT32_MIN;
	int16_t x312 = -1;
	static int32_t t65 = -2280;

	t65 = ((x309*(x310%x311))<x312);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x313 = 0;
	volatile int64_t x314 = 803730984826453LL;
	int32_t t66 = -1318;

	t66 = ((x313*(x314%x315))<x316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x325 = INT16_MIN;
	int64_t x326 = INT64_MAX;
	volatile uint8_t x327 = UINT8_MAX;
	uint32_t x328 = UINT32_MAX;
	int32_t t67 = 4017;

	t67 = ((x325*(x326%x327))<x328);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x330 = INT32_MIN;
	static uint16_t x331 = 2588U;
	int32_t t68 = 4;

	t68 = ((x329*(x330%x331))<x332);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x334 = INT8_MIN;

	t69 = ((x333*(x334%x335))<x336);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x337 = -3880266972615629LL;
	int8_t x338 = INT8_MIN;
	uint16_t x339 = UINT16_MAX;
	static volatile uint16_t x340 = 17770U;
	volatile int32_t t70 = 303;

	t70 = ((x337*(x338%x339))<x340);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x342 = INT64_MIN;
	volatile uint32_t x343 = 55154U;
	int16_t x344 = INT16_MIN;
	static int32_t t71 = -1944;

	t71 = ((x341*(x342%x343))<x344);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x346 = 774;
	static volatile int8_t x347 = -1;
	static volatile int8_t x348 = INT8_MIN;
	volatile int32_t t72 = -18;

	t72 = ((x345*(x346%x347))<x348);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x350 = -7742835460390LL;
	volatile int32_t x351 = INT32_MIN;
	uint8_t x352 = 23U;
	static int32_t t73 = 649616452;

	t73 = ((x349*(x350%x351))<x352);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x353 = UINT16_MAX;
	uint64_t x354 = 7LLU;
	static int16_t x355 = -1;
	int32_t t74 = -16117;

	t74 = ((x353*(x354%x355))<x356);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x357 = INT32_MIN;
	int32_t x358 = -1;
	uint32_t x359 = UINT32_MAX;
	int64_t x360 = INT64_MAX;
	volatile int32_t t75 = 203;

	t75 = ((x357*(x358%x359))<x360);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x361 = -503971LL;
	static volatile int32_t x362 = -1;
	volatile int16_t x363 = -1;

	t76 = ((x361*(x362%x363))<x364);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x365 = INT32_MAX;
	static int16_t x366 = INT16_MAX;
	uint32_t x367 = 70U;
	uint16_t x368 = 1U;

	t77 = ((x365*(x366%x367))<x368);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x369 = INT16_MIN;
	uint64_t x370 = 1094411644617439LLU;
	static uint8_t x371 = 118U;
	int32_t t78 = 22047;

	t78 = ((x369*(x370%x371))<x372);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x377 = INT64_MAX;
	int64_t x378 = INT64_MAX;
	volatile int8_t x379 = -1;
	int32_t x380 = INT32_MAX;

	t79 = ((x377*(x378%x379))<x380);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x382 = UINT64_MAX;
	volatile int32_t t80 = -4870;

	t80 = ((x381*(x382%x383))<x384);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x389 = 100614299U;
	volatile int16_t x390 = 121;
	volatile uint16_t x391 = UINT16_MAX;
	uint16_t x392 = 63U;
	int32_t t81 = 307516616;

	t81 = ((x389*(x390%x391))<x392);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x393 = UINT8_MAX;
	volatile int32_t x394 = INT32_MIN;
	volatile int64_t x395 = -71462607LL;
	int64_t x396 = -1LL;
	int32_t t82 = 35;

	t82 = ((x393*(x394%x395))<x396);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x397 = -1LL;
	int32_t x398 = INT32_MIN;
	uint32_t x399 = 81010470U;
	int32_t x400 = 212;
	int32_t t83 = 3;

	t83 = ((x397*(x398%x399))<x400);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x402 = INT64_MIN;
	int8_t x403 = INT8_MIN;
	uint32_t x404 = 1575098U;
	int32_t t84 = -563312429;

	t84 = ((x401*(x402%x403))<x404);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x405 = 7;
	uint64_t x406 = 312543703068LLU;
	int16_t x407 = -44;
	uint16_t x408 = 101U;
	static volatile int32_t t85 = 32644988;

	t85 = ((x405*(x406%x407))<x408);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x409 = -802346LL;
	int64_t x410 = -1LL;
	volatile int32_t t86 = -117;

	t86 = ((x409*(x410%x411))<x412);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x413 = -1LL;
	uint8_t x414 = 15U;
	static volatile int64_t x415 = INT64_MAX;
	static uint16_t x416 = UINT16_MAX;
	static volatile int32_t t87 = -2405932;

	t87 = ((x413*(x414%x415))<x416);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x417 = 6U;
	uint16_t x418 = 431U;
	volatile int16_t x419 = 13079;
	static int32_t x420 = INT32_MIN;
	volatile int32_t t88 = -28168842;

	t88 = ((x417*(x418%x419))<x420);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x421 = 23945U;
	int32_t x422 = INT32_MIN;
	static volatile uint8_t x423 = UINT8_MAX;
	int16_t x424 = -1;
	static int32_t t89 = 108636;

	t89 = ((x421*(x422%x423))<x424);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x425 = -1;
	int16_t x426 = -1;
	int32_t x427 = INT32_MIN;
	volatile int16_t x428 = 8;
	int32_t t90 = 377283866;

	t90 = ((x425*(x426%x427))<x428);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x429 = -1;
	int16_t x430 = INT16_MIN;
	uint32_t x431 = 79U;
	int8_t x432 = INT8_MAX;
	volatile int32_t t91 = 488785;

	t91 = ((x429*(x430%x431))<x432);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x434 = 68048648182LLU;
	uint16_t x435 = 1U;
	volatile int32_t t92 = 486;

	t92 = ((x433*(x434%x435))<x436);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x441 = -6;
	uint32_t x442 = 1495565U;
	uint16_t x443 = UINT16_MAX;
	uint8_t x444 = 2U;
	static int32_t t93 = 887343;

	t93 = ((x441*(x442%x443))<x444);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x445 = UINT16_MAX;
	int32_t x446 = INT32_MIN;
	uint64_t x448 = 735686LLU;
	int32_t t94 = 1654276;

	t94 = ((x445*(x446%x447))<x448);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x449 = 660U;
	uint32_t x450 = 1U;
	int32_t x451 = -1;
	int8_t x452 = -1;

	t95 = ((x449*(x450%x451))<x452);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x453 = UINT16_MAX;
	uint64_t x454 = 916017LLU;
	int64_t x455 = INT64_MAX;
	volatile int32_t t96 = -94;

	t96 = ((x453*(x454%x455))<x456);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x457 = INT16_MIN;
	uint8_t x459 = UINT8_MAX;
	int32_t t97 = 867;

	t97 = ((x457*(x458%x459))<x460);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x461 = UINT16_MAX;
	volatile int32_t x462 = INT32_MIN;
	uint8_t x463 = UINT8_MAX;
	int32_t x464 = -1;
	volatile int32_t t98 = -3991379;

	t98 = ((x461*(x462%x463))<x464);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x465 = 1;
	int8_t x466 = INT8_MIN;
	int64_t x467 = INT64_MIN;
	int16_t x468 = INT16_MIN;
	static int32_t t99 = 19874;

	t99 = ((x465*(x466%x467))<x468);

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

