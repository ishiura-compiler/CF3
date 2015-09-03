#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = -1;
volatile uint32_t t4 = 512562U;
int32_t x24 = INT32_MAX;
volatile int32_t x25 = INT32_MAX;
uint16_t x28 = UINT16_MAX;
volatile int32_t x30 = INT32_MAX;
uint32_t x31 = UINT32_MAX;
volatile int32_t t8 = -210648;
uint64_t x41 = UINT64_MAX;
static uint16_t x45 = UINT16_MAX;
int64_t x48 = -1LL;
int32_t x49 = 7;
static int16_t x62 = 3528;
static volatile uint64_t x67 = 2519286LLU;
uint8_t x69 = UINT8_MAX;
volatile int32_t t17 = 467452;
uint64_t x75 = 43699025LLU;
int8_t x79 = 1;
uint8_t x89 = 3U;
uint32_t t21 = 13390873U;
uint64_t x93 = UINT64_MAX;
int64_t x94 = INT64_MIN;
volatile uint32_t x97 = UINT32_MAX;
uint64_t x100 = 734LLU;
uint64_t x101 = UINT64_MAX;
volatile uint8_t x103 = UINT8_MAX;
static volatile uint64_t t25 = 1895338271444LLU;
volatile int64_t x115 = -1LL;
int64_t t28 = 20995399LL;
int16_t x122 = INT16_MAX;
int16_t x126 = INT16_MIN;
int32_t t30 = -6755359;
int32_t t31 = -133;
int32_t x136 = INT32_MAX;
static uint16_t x146 = UINT16_MAX;
volatile int32_t x148 = INT32_MIN;
int16_t x151 = -6407;
volatile uint64_t t36 = 11280371LLU;
int8_t x158 = INT8_MAX;
uint32_t x159 = 829U;
static int16_t x163 = INT16_MIN;
int64_t t39 = 380612896LL;
int8_t x176 = 33;
volatile int32_t t40 = 70575;
int32_t x181 = 536842090;
int8_t x186 = 1;
uint64_t x188 = UINT64_MAX;
volatile uint32_t t44 = 42U;
uint16_t x194 = 9U;
volatile uint64_t t45 = 9728095481LLU;
volatile int16_t x199 = INT16_MAX;
int8_t x203 = -1;
static int16_t x226 = -1;
volatile int64_t t54 = 2797177702LL;
int32_t x242 = 25339;
int64_t x245 = -1LL;
int64_t t56 = -3835054403LL;
uint64_t x252 = 4301523974260LLU;
volatile uint32_t t58 = 4U;
int32_t x258 = INT32_MIN;
static int8_t x266 = -5;
int32_t x268 = INT32_MAX;
int16_t x271 = -5;
volatile int32_t x272 = -1;
uint64_t x274 = UINT64_MAX;
volatile int32_t t63 = -53;
int64_t x281 = -1LL;
uint32_t x283 = 3U;
uint64_t t66 = 2LLU;
volatile int8_t x289 = -1;
static int64_t x297 = INT64_MIN;
int64_t x306 = INT64_MIN;
volatile uint64_t t70 = 3924409105783LLU;
volatile uint32_t t71 = 1743999536U;
int16_t x327 = INT16_MAX;
int32_t t74 = -3450;
volatile int8_t x332 = INT8_MIN;
static volatile uint16_t x339 = 22U;
static int16_t x342 = -1;
static int8_t x345 = -1;
uint64_t x351 = 759LLU;
volatile uint32_t x356 = 42786008U;
int64_t t81 = 4217593286153LL;
int8_t x363 = INT8_MIN;
int8_t x365 = INT8_MIN;
volatile int16_t x370 = -1;
uint8_t x371 = UINT8_MAX;
uint32_t x374 = 1U;
volatile int64_t x377 = INT64_MAX;
static int16_t x381 = -1;
volatile uint16_t x388 = 121U;
int16_t x395 = -953;
int32_t x397 = 7086;
uint8_t x403 = UINT8_MAX;
int32_t x408 = -417;
volatile int64_t t94 = -3117880LL;
static uint32_t x421 = 1291737362U;
uint8_t x423 = 54U;
volatile int64_t t97 = 1654959023982949LL;
static int8_t x429 = -54;


void f0(void) {
	uint8_t x1 = 92U;
	volatile int16_t x2 = -1;
	volatile uint32_t x3 = UINT32_MAX;
	int64_t x4 = -1LL;
	volatile int64_t t0 = 4742576566LL;

	t0 = (((x1<=x2)*x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	volatile uint32_t x6 = 8509342U;
	uint16_t x7 = 6793U;
	static int8_t x8 = -1;
	static int32_t t1 = -344671;

	t1 = (((x5<=x6)*x7)/x8);

	if (t1 != -6793) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile int32_t x10 = INT32_MAX;
	int16_t x11 = 0;
	volatile int16_t x12 = -2;

	t2 = (((x9<=x10)*x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	uint8_t x14 = 51U;
	int16_t x15 = -1;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = 6;

	t3 = (((x13<=x14)*x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int64_t x18 = INT64_MIN;
	static int32_t x19 = INT32_MAX;
	uint32_t x20 = 16359U;

	t4 = (((x17<=x18)*x19)/x20);

	if (t4 != 131272U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	uint64_t x22 = 13485251666839LLU;
	static uint16_t x23 = UINT16_MAX;
	volatile int32_t t5 = -3658477;

	t5 = (((x21<=x22)*x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = 0;
	uint64_t x27 = UINT64_MAX;
	uint64_t t6 = 468658361981772LLU;

	t6 = (((x25<=x26)*x27)/x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 8U;
	static volatile uint32_t x32 = 119U;
	static volatile uint32_t t7 = 6216U;

	t7 = (((x29<=x30)*x31)/x32);

	if (t7 != 36092162U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	int32_t x34 = -1;
	volatile uint8_t x35 = UINT8_MAX;
	uint8_t x36 = 20U;

	t8 = (((x33<=x34)*x35)/x36);

	if (t8 != 12) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 16561206336039LLU;
	static uint32_t x38 = 241873U;
	int64_t x39 = INT64_MIN;
	int16_t x40 = 219;
	volatile int64_t t9 = -360599927727605737LL;

	t9 = (((x37<=x38)*x39)/x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = 12898235225LLU;
	int32_t x43 = -167;
	int8_t x44 = INT8_MIN;
	int32_t t10 = -57;

	t10 = (((x41<=x42)*x43)/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = INT16_MAX;
	static int32_t x47 = INT32_MIN;
	volatile int64_t t11 = 1239111889923069241LL;

	t11 = (((x45<=x46)*x47)/x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x50 = UINT32_MAX;
	int32_t x51 = INT32_MIN;
	static int16_t x52 = INT16_MAX;
	int32_t t12 = -1444;

	t12 = (((x49<=x50)*x51)/x52);

	if (t12 != -65538) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 6;
	int32_t x54 = INT32_MAX;
	int64_t x55 = -1LL;
	uint16_t x56 = UINT16_MAX;
	int64_t t13 = 39859LL;

	t13 = (((x53<=x54)*x55)/x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 0U;
	int8_t x58 = -1;
	uint8_t x59 = 0U;
	int8_t x60 = INT8_MAX;
	volatile int32_t t14 = -2587;

	t14 = (((x57<=x58)*x59)/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	volatile int32_t x63 = INT32_MAX;
	volatile uint32_t x64 = 141U;
	volatile uint32_t t15 = 0U;

	t15 = (((x61<=x62)*x63)/x64);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = UINT64_MAX;
	int16_t x66 = -3007;
	int64_t x68 = -1LL;
	volatile uint64_t t16 = 52046131LLU;

	t16 = (((x65<=x66)*x67)/x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MIN;
	int32_t x71 = -6132;
	int16_t x72 = -1;

	t17 = (((x69<=x70)*x71)/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = 30229U;
	int16_t x74 = -6609;
	int32_t x76 = INT32_MAX;
	uint64_t t18 = 7492LLU;

	t18 = (((x73<=x74)*x75)/x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 17;
	int32_t x78 = -33;
	static volatile uint8_t x80 = 14U;
	volatile int32_t t19 = 568;

	t19 = (((x77<=x78)*x79)/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MAX;
	volatile int64_t t20 = 1664353876024LL;

	t20 = (((x81<=x82)*x83)/x84);

	if (t20 != -281483566907400LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x90 = -1;
	uint32_t x91 = 900158U;
	int32_t x92 = INT32_MIN;

	t21 = (((x89<=x90)*x91)/x92);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x95 = -1;
	static int16_t x96 = INT16_MIN;
	volatile int32_t t22 = -1;

	t22 = (((x93<=x94)*x95)/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x98 = -15430725LL;
	int32_t x99 = -267921;
	volatile uint64_t t23 = 673960498LLU;

	t23 = (((x97<=x98)*x99)/x100);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x102 = INT32_MIN;
	static int64_t x104 = INT64_MIN;
	int64_t t24 = 92192973486LL;

	t24 = (((x101<=x102)*x103)/x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	static volatile uint16_t x106 = UINT16_MAX;
	volatile uint64_t x107 = UINT64_MAX;
	uint8_t x108 = UINT8_MAX;

	t25 = (((x105<=x106)*x107)/x108);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 0U;
	uint16_t x110 = 350U;
	int32_t x111 = -1;
	int8_t x112 = 9;
	int32_t t26 = -14;

	t26 = (((x109<=x110)*x111)/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	static uint8_t x114 = UINT8_MAX;
	int8_t x116 = 6;
	volatile int64_t t27 = -28014257405853LL;

	t27 = (((x113<=x114)*x115)/x116);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = 18U;
	int16_t x118 = 794;
	uint32_t x119 = 52271110U;
	int64_t x120 = -1LL;

	t28 = (((x117<=x118)*x119)/x120);

	if (t28 != -52271110LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = -1LL;
	uint64_t x123 = UINT64_MAX;
	volatile int32_t x124 = 4523235;
	uint64_t t29 = 96LLU;

	t29 = (((x121<=x122)*x123)/x124);

	if (t29 != 4078219255402LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = -373282;
	int8_t x127 = INT8_MIN;
	int8_t x128 = INT8_MIN;

	t30 = (((x125<=x126)*x127)/x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;
	volatile uint32_t x130 = 1197488453U;
	int16_t x131 = -1;
	int16_t x132 = -28;

	t31 = (((x129<=x130)*x131)/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	int64_t x134 = -261277LL;
	volatile int32_t x135 = -1;
	volatile int32_t t32 = 1018155;

	t32 = (((x133<=x134)*x135)/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x141 = INT64_MIN;
	volatile int32_t x142 = 1;
	volatile uint32_t x143 = 228300339U;
	int8_t x144 = -6;
	volatile uint32_t t33 = 127613382U;

	t33 = (((x141<=x142)*x143)/x144);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -1507298345LL;
	uint32_t x147 = 6664U;
	uint32_t t34 = 795756U;

	t34 = (((x145<=x146)*x147)/x148);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = 5213180887LLU;
	static volatile int16_t x150 = -8543;
	static volatile uint16_t x152 = UINT16_MAX;
	volatile int32_t t35 = 678069257;

	t35 = (((x149<=x150)*x151)/x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MIN;
	int32_t x154 = 180;
	volatile int16_t x155 = INT16_MAX;
	uint64_t x156 = 6035132860LLU;

	t36 = (((x153<=x154)*x155)/x156);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x157 = 7499179715LLU;
	int8_t x160 = INT8_MIN;
	uint32_t t37 = 2306489U;

	t37 = (((x157<=x158)*x159)/x160);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = UINT64_MAX;
	int16_t x162 = 44;
	uint64_t x164 = 227149LLU;
	uint64_t t38 = 4355775987976417LLU;

	t38 = (((x161<=x162)*x163)/x164);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MAX;
	static uint8_t x170 = UINT8_MAX;
	int64_t x171 = INT64_MAX;
	int32_t x172 = INT32_MIN;

	t39 = (((x169<=x170)*x171)/x172);

	if (t39 != -4294967295LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x173 = -465;
	int8_t x174 = INT8_MIN;
	int16_t x175 = INT16_MIN;

	t40 = (((x173<=x174)*x175)/x176);

	if (t40 != -992) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = -1534;
	int8_t x178 = INT8_MIN;
	volatile int32_t x179 = 432170073;
	static int32_t x180 = -1;
	volatile int32_t t41 = 1;

	t41 = (((x177<=x178)*x179)/x180);

	if (t41 != -432170073) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x182 = 412876605;
	int16_t x183 = 0;
	int8_t x184 = -1;
	int32_t t42 = -891855161;

	t42 = (((x181<=x182)*x183)/x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x185 = 900367997269998732LLU;
	volatile uint16_t x187 = UINT16_MAX;
	uint64_t t43 = 6463285239574886158LLU;

	t43 = (((x185<=x186)*x187)/x188);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x189 = 5753477480924178174LLU;
	int64_t x190 = -1LL;
	static uint32_t x191 = UINT32_MAX;
	volatile int8_t x192 = -1;

	t44 = (((x189<=x190)*x191)/x192);

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x193 = INT8_MIN;
	uint64_t x195 = 1418896740548460LLU;
	int16_t x196 = INT16_MIN;

	t45 = (((x193<=x194)*x195)/x196);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x197 = -167;
	uint8_t x198 = 47U;
	static volatile int8_t x200 = -1;
	volatile int32_t t46 = 1038066307;

	t46 = (((x197<=x198)*x199)/x200);

	if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = 29U;
	uint64_t x202 = 63622993571LLU;
	uint64_t x204 = 19559235177016LLU;
	volatile uint64_t t47 = 66961176LLU;

	t47 = (((x201<=x202)*x203)/x204);

	if (t47 != 943121LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = -13604471LL;
	static uint8_t x214 = UINT8_MAX;
	volatile uint64_t x215 = UINT64_MAX;
	uint64_t x216 = 130231438838669072LLU;
	static uint64_t t48 = 1830089215037546857LLU;

	t48 = (((x213<=x214)*x215)/x216);

	if (t48 != 141LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = 0;
	uint64_t x218 = 15711341LLU;
	static volatile int16_t x219 = INT16_MIN;
	int64_t x220 = 43959238460LL;
	volatile int64_t t49 = 1LL;

	t49 = (((x217<=x218)*x219)/x220);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x221 = 44588773055995LLU;
	int64_t x222 = INT64_MIN;
	static volatile int32_t x223 = INT32_MIN;
	uint8_t x224 = 3U;
	volatile int32_t t50 = -36674;

	t50 = (((x221<=x222)*x223)/x224);

	if (t50 != -715827882) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x225 = UINT64_MAX;
	volatile int16_t x227 = -82;
	int16_t x228 = 432;
	static int32_t t51 = 688221024;

	t51 = (((x225<=x226)*x227)/x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = 387;
	int32_t x230 = -1;
	volatile int16_t x231 = INT16_MIN;
	volatile uint16_t x232 = 84U;
	volatile int32_t t52 = -70033;

	t52 = (((x229<=x230)*x231)/x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x233 = UINT64_MAX;
	int64_t x234 = INT64_MIN;
	static uint8_t x235 = 49U;
	int64_t x236 = INT64_MIN;
	volatile int64_t t53 = 35113971284207LL;

	t53 = (((x233<=x234)*x235)/x236);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x237 = INT16_MIN;
	static uint16_t x238 = 4907U;
	int8_t x239 = INT8_MIN;
	int64_t x240 = -1LL;

	t54 = (((x237<=x238)*x239)/x240);

	if (t54 != 128LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = INT32_MIN;
	int64_t x243 = 24427085046LL;
	int64_t x244 = INT64_MAX;
	static volatile int64_t t55 = -211424169568LL;

	t55 = (((x241<=x242)*x243)/x244);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x246 = INT32_MAX;
	int64_t x247 = -25397659627LL;
	volatile int8_t x248 = INT8_MAX;

	t56 = (((x245<=x246)*x247)/x248);

	if (t56 != -199981571LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = 16591LLU;
	uint8_t x250 = 41U;
	volatile int16_t x251 = INT16_MAX;
	volatile uint64_t t57 = 61LLU;

	t57 = (((x249<=x250)*x251)/x252);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x253 = INT64_MIN;
	volatile uint16_t x254 = 30340U;
	static uint32_t x255 = 13993272U;
	static int32_t x256 = -1679438;

	t58 = (((x253<=x254)*x255)/x256);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x257 = INT64_MAX;
	volatile uint8_t x259 = UINT8_MAX;
	volatile int64_t x260 = 105032337218406431LL;
	volatile int64_t t59 = 1604LL;

	t59 = (((x257<=x258)*x259)/x260);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MIN;
	uint16_t x262 = UINT16_MAX;
	int16_t x263 = INT16_MIN;
	int16_t x264 = INT16_MAX;
	int32_t t60 = -923629;

	t60 = (((x261<=x262)*x263)/x264);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x265 = -1;
	int64_t x267 = INT64_MIN;
	volatile int64_t t61 = -1300640099LL;

	t61 = (((x265<=x266)*x267)/x268);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x269 = 32822111050402LL;
	static int16_t x270 = 731;
	int32_t t62 = -6;

	t62 = (((x269<=x270)*x271)/x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x273 = UINT16_MAX;
	uint16_t x275 = UINT16_MAX;
	static int8_t x276 = INT8_MIN;

	t63 = (((x273<=x274)*x275)/x276);

	if (t63 != -511) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x277 = 9746570872458475LLU;
	uint64_t x278 = UINT64_MAX;
	int64_t x279 = INT64_MAX;
	uint8_t x280 = 50U;
	volatile int64_t t64 = -498760088LL;

	t64 = (((x277<=x278)*x279)/x280);

	if (t64 != 184467440737095516LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x282 = 4;
	static int32_t x284 = -1;
	uint32_t t65 = 86592U;

	t65 = (((x281<=x282)*x283)/x284);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x285 = 12U;
	volatile int8_t x286 = -1;
	uint64_t x287 = 1209058286435LLU;
	uint64_t x288 = 351451468LLU;

	t66 = (((x285<=x286)*x287)/x288);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x290 = -5;
	int16_t x291 = -1;
	static uint16_t x292 = 2329U;
	static volatile int32_t t67 = -5504;

	t67 = (((x289<=x290)*x291)/x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = 89509717;
	uint16_t x294 = UINT16_MAX;
	static volatile int64_t x295 = INT64_MIN;
	static int32_t x296 = INT32_MAX;
	static int64_t t68 = 0LL;

	t68 = (((x293<=x294)*x295)/x296);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x298 = -3791;
	static int32_t x299 = -114;
	uint16_t x300 = 1U;
	volatile int32_t t69 = -13;

	t69 = (((x297<=x298)*x299)/x300);

	if (t69 != -114) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = -1;
	static uint32_t x307 = 230965U;
	uint64_t x308 = 603LLU;

	t70 = (((x305<=x306)*x307)/x308);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x309 = 40855;
	int16_t x310 = INT16_MIN;
	static uint32_t x311 = 929021247U;
	static int8_t x312 = INT8_MIN;

	t71 = (((x309<=x310)*x311)/x312);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x313 = 15U;
	static int16_t x314 = INT16_MIN;
	int64_t x315 = INT64_MIN;
	uint16_t x316 = UINT16_MAX;
	volatile int64_t t72 = -162699683149LL;

	t72 = (((x313<=x314)*x315)/x316);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = INT8_MAX;
	int8_t x318 = INT8_MAX;
	int16_t x319 = INT16_MIN;
	uint16_t x320 = 5U;
	volatile int32_t t73 = -15340115;

	t73 = (((x317<=x318)*x319)/x320);

	if (t73 != -6553) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x325 = UINT16_MAX;
	int64_t x326 = INT64_MAX;
	static volatile int8_t x328 = -21;

	t74 = (((x325<=x326)*x327)/x328);

	if (t74 != -1560) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x329 = UINT16_MAX;
	int16_t x330 = INT16_MIN;
	volatile uint8_t x331 = 1U;
	int32_t t75 = -182423043;

	t75 = (((x329<=x330)*x331)/x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x333 = -106LL;
	int64_t x334 = -1LL;
	int8_t x335 = INT8_MIN;
	int64_t x336 = INT64_MIN;
	int64_t t76 = -1093827851358498322LL;

	t76 = (((x333<=x334)*x335)/x336);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x337 = -78LL;
	volatile int8_t x338 = INT8_MAX;
	static int32_t x340 = -226;
	int32_t t77 = 41210125;

	t77 = (((x337<=x338)*x339)/x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x341 = 0;
	volatile uint8_t x343 = 33U;
	static volatile int32_t x344 = INT32_MAX;
	volatile int32_t t78 = -31;

	t78 = (((x341<=x342)*x343)/x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x346 = -1;
	int32_t x347 = INT32_MIN;
	uint32_t x348 = 5312686U;
	volatile uint32_t t79 = 231332534U;

	t79 = (((x345<=x346)*x347)/x348);

	if (t79 != 404U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x349 = UINT32_MAX;
	static int16_t x350 = INT16_MIN;
	int8_t x352 = INT8_MIN;
	uint64_t t80 = 412717451335LLU;

	t80 = (((x349<=x350)*x351)/x352);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x353 = INT8_MIN;
	uint64_t x354 = 42519686663LLU;
	int64_t x355 = -3850709777369984153LL;

	t81 = (((x353<=x354)*x355)/x356);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x361 = -3197535085LL;
	uint16_t x362 = 0U;
	uint32_t x364 = UINT32_MAX;
	static uint32_t t82 = 568U;

	t82 = (((x361<=x362)*x363)/x364);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x366 = -1;
	int64_t x367 = INT64_MIN;
	uint32_t x368 = 378080102U;
	volatile int64_t t83 = -5063664261LL;

	t83 = (((x365<=x366)*x367)/x368);

	if (t83 != -24395285517LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x369 = UINT8_MAX;
	static int8_t x372 = INT8_MAX;
	volatile int32_t t84 = -231100;

	t84 = (((x369<=x370)*x371)/x372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = -1;
	int16_t x375 = INT16_MIN;
	volatile int16_t x376 = 1996;
	static int32_t t85 = 1;

	t85 = (((x373<=x374)*x375)/x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x378 = -914397;
	static int8_t x379 = INT8_MAX;
	int16_t x380 = INT16_MIN;
	static volatile int32_t t86 = 1052;

	t86 = (((x377<=x378)*x379)/x380);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MAX;
	int8_t x384 = INT8_MIN;
	volatile int32_t t87 = -31715536;

	t87 = (((x381<=x382)*x383)/x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x385 = -1;
	volatile int64_t x386 = INT64_MIN;
	static volatile int32_t x387 = INT32_MIN;
	int32_t t88 = -9337;

	t88 = (((x385<=x386)*x387)/x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x389 = 21;
	static int32_t x390 = -1;
	volatile uint16_t x391 = 286U;
	int64_t x392 = INT64_MIN;
	volatile int64_t t89 = 326995180363887LL;

	t89 = (((x389<=x390)*x391)/x392);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = -799LL;
	static int8_t x394 = INT8_MIN;
	int64_t x396 = 719608LL;
	volatile int64_t t90 = -14680133119471151LL;

	t90 = (((x393<=x394)*x395)/x396);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x398 = 15486030LLU;
	int16_t x399 = INT16_MIN;
	int32_t x400 = -1;
	int32_t t91 = 23135500;

	t91 = (((x397<=x398)*x399)/x400);

	if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x401 = INT8_MIN;
	volatile int16_t x402 = -1;
	int8_t x404 = 39;
	volatile int32_t t92 = -162753214;

	t92 = (((x401<=x402)*x403)/x404);

	if (t92 != 6) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x405 = -1;
	int8_t x406 = INT8_MIN;
	int64_t x407 = 221208873653LL;
	volatile int64_t t93 = 5893420379198414LL;

	t93 = (((x405<=x406)*x407)/x408);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x409 = UINT32_MAX;
	static int8_t x410 = 8;
	static int64_t x411 = INT64_MAX;
	int64_t x412 = INT64_MIN;

	t94 = (((x409<=x410)*x411)/x412);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x413 = INT8_MIN;
	int32_t x414 = INT32_MIN;
	int64_t x415 = INT64_MAX;
	int64_t x416 = 2254854683180093LL;
	int64_t t95 = -527887034LL;

	t95 = (((x413<=x414)*x415)/x416);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x417 = -469844938030673007LL;
	int64_t x418 = INT64_MIN;
	int64_t x419 = INT64_MIN;
	int8_t x420 = 5;
	int64_t t96 = 247448358230515627LL;

	t96 = (((x417<=x418)*x419)/x420);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x422 = INT32_MIN;
	int64_t x424 = INT64_MIN;

	t97 = (((x421<=x422)*x423)/x424);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x425 = 20152U;
	int64_t x426 = INT64_MIN;
	uint8_t x427 = 1U;
	int16_t x428 = INT16_MIN;
	int32_t t98 = -4356730;

	t98 = (((x425<=x426)*x427)/x428);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x430 = -1;
	int32_t x431 = INT32_MIN;
	volatile int8_t x432 = INT8_MAX;
	volatile int32_t t99 = -141;

	t99 = (((x429<=x430)*x431)/x432);

	if (t99 != -16909320) { NG(); } else { ; }
	
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

