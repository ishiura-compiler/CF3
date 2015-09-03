#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x14 = -35844586880145305LL;
volatile int16_t x16 = INT16_MIN;
int32_t x17 = 1104;
int8_t x24 = INT8_MIN;
volatile uint64_t x29 = 3LLU;
int8_t x31 = -1;
volatile int32_t t7 = 255508;
int32_t x37 = -1;
int64_t x42 = INT64_MAX;
volatile int32_t x48 = INT32_MIN;
int32_t t10 = 102925;
int32_t x49 = INT32_MAX;
int64_t x60 = INT64_MIN;
int32_t x63 = -1;
int64_t x64 = -1LL;
int64_t x67 = -1LL;
volatile int32_t t15 = 2;
int8_t x70 = -1;
uint64_t x72 = 5016270828028804823LLU;
static uint32_t x75 = 1898918U;
int32_t x80 = INT32_MIN;
volatile uint64_t x81 = 32LLU;
static int16_t x85 = -1319;
int32_t x91 = -1;
int16_t x97 = 1;
int16_t x98 = INT16_MAX;
uint8_t x108 = 54U;
int32_t t25 = -433;
uint64_t x111 = 1LLU;
volatile int64_t x122 = INT64_MAX;
volatile int32_t x127 = -1;
int16_t x128 = INT16_MIN;
static uint16_t x140 = 2108U;
uint64_t x143 = 8583755546909279206LLU;
uint64_t x149 = UINT64_MAX;
int16_t x156 = INT16_MIN;
int32_t x174 = INT32_MAX;
static int32_t t40 = 1;
uint32_t x179 = 14835982U;
uint32_t x185 = 585U;
static int64_t x188 = INT64_MIN;
int32_t x192 = -1;
int32_t t43 = 1576693;
uint64_t x193 = 3896799LLU;
volatile uint8_t x195 = 1U;
volatile int32_t x196 = 89156087;
int8_t x197 = 0;
int8_t x212 = 17;
static uint16_t x216 = 605U;
static int8_t x217 = INT8_MIN;
volatile int64_t x219 = 135LL;
int64_t x220 = -14LL;
static int16_t x225 = -8150;
int64_t x229 = 1848783906337880LL;
volatile int32_t t52 = -440;
static int16_t x236 = -36;
static volatile int32_t t54 = 142122;
int32_t t56 = -375;
uint64_t x266 = 13733837LLU;
int8_t x268 = -1;
int64_t x269 = INT64_MIN;
int32_t x280 = INT32_MIN;
int8_t x282 = INT8_MAX;
static int32_t t61 = -21857;
volatile uint64_t x298 = 5LLU;
uint32_t x302 = 126062035U;
int32_t t65 = -1478;
static int16_t x312 = INT16_MAX;
volatile uint64_t x315 = 999436LLU;
int64_t x324 = INT64_MIN;
uint32_t x325 = 0U;
static int64_t x333 = INT64_MIN;
volatile int16_t x336 = -2;
static uint64_t x338 = 479048029LLU;
int64_t x352 = -29744LL;
volatile int32_t t77 = -3;
static uint8_t x363 = UINT8_MAX;
int32_t x368 = -1;
volatile uint32_t x373 = 2899U;
int16_t x376 = INT16_MAX;
uint8_t x379 = UINT8_MAX;
int8_t x381 = INT8_MIN;
int32_t x382 = -1;
static int32_t t84 = 57313231;
int32_t t85 = -586131;
static volatile int8_t x395 = INT8_MAX;
int32_t t86 = -55;
uint8_t x401 = 5U;
static int8_t x402 = -1;
static uint32_t x404 = 44456U;
volatile uint8_t x407 = 3U;
int16_t x408 = INT16_MIN;
volatile uint16_t x415 = 5U;
uint16_t x416 = 4925U;
volatile int32_t t92 = 21;
uint32_t x437 = UINT32_MAX;
int64_t x444 = -1LL;
volatile int32_t t96 = 7252;
int64_t x460 = INT64_MIN;


void f0(void) {
	uint8_t x1 = 30U;
	static int64_t x2 = INT64_MIN;
	int8_t x3 = INT8_MAX;
	static int16_t x4 = INT16_MAX;
	volatile int32_t t0 = 3404935;

	t0 = (((x1%x2)*x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint16_t x6 = UINT16_MAX;
	volatile uint64_t x7 = 127LLU;
	volatile uint8_t x8 = 3U;
	volatile int32_t t1 = -244169380;

	t1 = (((x5%x6)*x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 618375164U;
	volatile int16_t x10 = 577;
	int64_t x11 = -39493687484249037LL;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -52;

	t2 = (((x9%x10)*x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	static int8_t x15 = 7;
	int32_t t3 = -1570978;

	t3 = (((x13%x14)*x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 9867U;
	int16_t x19 = INT16_MAX;
	volatile int16_t x20 = -37;
	volatile int32_t t4 = 0;

	t4 = (((x17%x18)*x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 241609331308LLU;
	int32_t x22 = INT32_MIN;
	static int32_t x23 = INT32_MIN;
	static volatile int32_t t5 = 7947;

	t5 = (((x21%x22)*x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile int64_t x26 = INT64_MIN;
	static int8_t x27 = INT8_MIN;
	int16_t x28 = 1;
	volatile int32_t t6 = 798098;

	t6 = (((x25%x26)*x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = 75;
	static uint8_t x32 = UINT8_MAX;

	t7 = (((x29%x30)*x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x38 = -16;
	uint32_t x39 = UINT32_MAX;
	int32_t x40 = 50873435;
	volatile int32_t t8 = 1;

	t8 = (((x37%x38)*x39)<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x41 = INT64_MIN;
	int8_t x43 = -1;
	volatile int64_t x44 = 589785650LL;
	int32_t t9 = -10424;

	t9 = (((x41%x42)*x43)<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 1388;
	int64_t x46 = INT64_MAX;
	static int8_t x47 = INT8_MIN;

	t10 = (((x45%x46)*x47)<x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x50 = 111U;
	volatile uint8_t x51 = UINT8_MAX;
	uint8_t x52 = UINT8_MAX;
	int32_t t11 = 13904705;

	t11 = (((x49%x50)*x51)<x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x53 = 22598192U;
	uint8_t x54 = UINT8_MAX;
	int8_t x55 = -1;
	volatile int8_t x56 = -1;
	static volatile int32_t t12 = 2136;

	t12 = (((x53%x54)*x55)<x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 18350622398LLU;
	int32_t x58 = INT32_MIN;
	volatile int32_t x59 = -7460;
	volatile int32_t t13 = -5;

	t13 = (((x57%x58)*x59)<x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = 1U;
	volatile int8_t x62 = 55;
	static volatile int32_t t14 = 443808;

	t14 = (((x61%x62)*x63)<x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 1LLU;
	int16_t x66 = -6053;
	int16_t x68 = INT16_MIN;

	t15 = (((x65%x66)*x67)<x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x69 = -62998695LL;
	int32_t x71 = -1175784;
	static int32_t t16 = 21586;

	t16 = (((x69%x70)*x71)<x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = -10027;
	int64_t x74 = 7043992LL;
	int64_t x76 = 1322488028913816619LL;
	volatile int32_t t17 = -171705;

	t17 = (((x73%x74)*x75)<x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = INT64_MIN;
	int8_t x78 = -9;
	static int8_t x79 = INT8_MAX;
	int32_t t18 = -165;

	t18 = (((x77%x78)*x79)<x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x82 = INT64_MIN;
	int8_t x83 = INT8_MAX;
	static int32_t x84 = -16;
	volatile int32_t t19 = 15515751;

	t19 = (((x81%x82)*x83)<x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x86 = INT64_MIN;
	int32_t x87 = INT32_MAX;
	volatile int64_t x88 = -1LL;
	int32_t t20 = 457;

	t20 = (((x85%x86)*x87)<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 1817U;
	int8_t x90 = -1;
	static uint16_t x92 = 618U;
	volatile int32_t t21 = -2072829;

	t21 = (((x89%x90)*x91)<x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MIN;
	int8_t x95 = INT8_MAX;
	uint32_t x96 = 9517769U;
	volatile int32_t t22 = -766758552;

	t22 = (((x93%x94)*x95)<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x99 = 20U;
	uint32_t x100 = 1154111U;
	static volatile int32_t t23 = -1;

	t23 = (((x97%x98)*x99)<x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MAX;
	int16_t x102 = INT16_MAX;
	static uint64_t x103 = 99834693LLU;
	uint64_t x104 = 91226647LLU;
	volatile int32_t t24 = -5349461;

	t24 = (((x101%x102)*x103)<x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 62LLU;
	uint32_t x106 = 119526956U;
	uint32_t x107 = 8U;

	t25 = (((x105%x106)*x107)<x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x109 = INT64_MIN;
	int64_t x110 = -1LL;
	static uint32_t x112 = UINT32_MAX;
	int32_t t26 = -531463903;

	t26 = (((x109%x110)*x111)<x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MIN;
	int32_t x118 = -1;
	volatile int8_t x119 = 7;
	volatile int8_t x120 = INT8_MIN;
	int32_t t27 = -2;

	t27 = (((x117%x118)*x119)<x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = -1LL;
	uint8_t x123 = 107U;
	int16_t x124 = INT16_MAX;
	int32_t t28 = -559460910;

	t28 = (((x121%x122)*x123)<x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x125 = INT16_MAX;
	volatile int64_t x126 = INT64_MAX;
	int32_t t29 = 0;

	t29 = (((x125%x126)*x127)<x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x133 = INT8_MAX;
	int8_t x134 = INT8_MIN;
	volatile int64_t x135 = 2632305LL;
	int16_t x136 = -1;
	int32_t t30 = 50;

	t30 = (((x133%x134)*x135)<x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x137 = INT8_MAX;
	volatile int64_t x138 = -1LL;
	int32_t x139 = INT32_MIN;
	int32_t t31 = -56267923;

	t31 = (((x137%x138)*x139)<x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x141 = 15U;
	int16_t x142 = 462;
	uint64_t x144 = 2031LLU;
	volatile int32_t t32 = 130351;

	t32 = (((x141%x142)*x143)<x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = UINT64_MAX;
	uint16_t x146 = UINT16_MAX;
	uint8_t x147 = 3U;
	volatile int16_t x148 = INT16_MIN;
	int32_t t33 = 5896;

	t33 = (((x145%x146)*x147)<x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x150 = INT8_MIN;
	volatile int8_t x151 = 12;
	int64_t x152 = INT64_MIN;
	int32_t t34 = 224460;

	t34 = (((x149%x150)*x151)<x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x153 = 113486847U;
	uint8_t x154 = 29U;
	volatile uint64_t x155 = UINT64_MAX;
	static int32_t t35 = -4;

	t35 = (((x153%x154)*x155)<x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x157 = 157U;
	volatile uint16_t x158 = 3439U;
	static uint32_t x159 = 2U;
	int16_t x160 = INT16_MAX;
	volatile int32_t t36 = -659842876;

	t36 = (((x157%x158)*x159)<x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = 46;
	uint32_t x162 = 15U;
	uint8_t x163 = 0U;
	uint32_t x164 = 74881054U;
	volatile int32_t t37 = -21358976;

	t37 = (((x161%x162)*x163)<x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = INT8_MIN;
	volatile uint8_t x166 = 11U;
	int8_t x167 = -57;
	static int8_t x168 = INT8_MAX;
	int32_t t38 = 1428214;

	t38 = (((x165%x166)*x167)<x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = -1;
	volatile int8_t x171 = -27;
	volatile int16_t x172 = -413;
	int32_t t39 = -188867;

	t39 = (((x169%x170)*x171)<x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x173 = 40U;
	int8_t x175 = 6;
	uint64_t x176 = 446534818LLU;

	t40 = (((x173%x174)*x175)<x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x177 = -1LL;
	uint16_t x178 = 25730U;
	int64_t x180 = INT64_MAX;
	int32_t t41 = 22032;

	t41 = (((x177%x178)*x179)<x180);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x186 = -1;
	int16_t x187 = -1;
	static int32_t t42 = 10;

	t42 = (((x185%x186)*x187)<x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = INT64_MAX;
	int64_t x190 = 327836LL;
	static int32_t x191 = -8;

	t43 = (((x189%x190)*x191)<x192);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x194 = -1;
	static int32_t t44 = 1058987;

	t44 = (((x193%x194)*x195)<x196);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x198 = INT8_MAX;
	uint64_t x199 = UINT64_MAX;
	uint8_t x200 = 49U;
	int32_t t45 = 3;

	t45 = (((x197%x198)*x199)<x200);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = -5121;
	int64_t x202 = -1LL;
	static volatile int64_t x203 = 2086585LL;
	int16_t x204 = INT16_MAX;
	int32_t t46 = -1;

	t46 = (((x201%x202)*x203)<x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x209 = 20U;
	uint16_t x210 = 15478U;
	int16_t x211 = -1;
	int32_t t47 = 6347362;

	t47 = (((x209%x210)*x211)<x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = INT64_MAX;
	static uint16_t x214 = 6U;
	static uint32_t x215 = 768379328U;
	int32_t t48 = 4;

	t48 = (((x213%x214)*x215)<x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x218 = INT8_MAX;
	volatile int32_t t49 = -120;

	t49 = (((x217%x218)*x219)<x220);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = -1LL;
	int16_t x222 = -1;
	uint32_t x223 = 62U;
	int8_t x224 = -1;
	static volatile int32_t t50 = 195;

	t50 = (((x221%x222)*x223)<x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x226 = INT64_MAX;
	static int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MIN;
	volatile int32_t t51 = -3734;

	t51 = (((x225%x226)*x227)<x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x230 = -112LL;
	int32_t x231 = INT32_MIN;
	uint64_t x232 = 601LLU;

	t52 = (((x229%x230)*x231)<x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = INT16_MAX;
	static int8_t x234 = INT8_MAX;
	volatile int32_t x235 = -1;
	volatile int32_t t53 = -62240799;

	t53 = (((x233%x234)*x235)<x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x245 = 13103006718LLU;
	static int32_t x246 = INT32_MIN;
	int8_t x247 = -36;
	static int16_t x248 = INT16_MIN;

	t54 = (((x245%x246)*x247)<x248);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = -1;
	uint32_t x250 = UINT32_MAX;
	uint8_t x251 = 2U;
	volatile int32_t x252 = INT32_MAX;
	volatile int32_t t55 = -8;

	t55 = (((x249%x250)*x251)<x252);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MAX;
	static volatile int16_t x263 = -1;
	static int32_t x264 = INT32_MAX;

	t56 = (((x261%x262)*x263)<x264);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = -41;
	uint32_t x267 = UINT32_MAX;
	int32_t t57 = -30342713;

	t57 = (((x265%x266)*x267)<x268);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x270 = -13;
	int8_t x271 = -1;
	static int64_t x272 = -1LL;
	static int32_t t58 = 2197411;

	t58 = (((x269%x270)*x271)<x272);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x273 = -1LL;
	volatile int32_t x274 = INT32_MAX;
	uint8_t x275 = 1U;
	static uint16_t x276 = 2U;
	volatile int32_t t59 = 12;

	t59 = (((x273%x274)*x275)<x276);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x277 = UINT16_MAX;
	volatile int8_t x278 = INT8_MAX;
	volatile int64_t x279 = -544LL;
	volatile int32_t t60 = -980285;

	t60 = (((x277%x278)*x279)<x280);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = -48;
	int16_t x283 = -2547;
	uint32_t x284 = 14750U;

	t61 = (((x281%x282)*x283)<x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = -245;
	uint64_t x286 = 1603923988LLU;
	int32_t x287 = 404641;
	uint16_t x288 = 8903U;
	static volatile int32_t t62 = -1889;

	t62 = (((x285%x286)*x287)<x288);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = INT64_MAX;
	int16_t x294 = INT16_MAX;
	uint16_t x295 = 641U;
	volatile int16_t x296 = INT16_MIN;
	volatile int32_t t63 = -1996;

	t63 = (((x293%x294)*x295)<x296);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x297 = UINT16_MAX;
	int32_t x299 = -1;
	volatile uint64_t x300 = 978841LLU;
	volatile int32_t t64 = 5;

	t64 = (((x297%x298)*x299)<x300);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = 147092253839LL;
	int32_t x303 = -459;
	int32_t x304 = INT32_MIN;

	t65 = (((x301%x302)*x303)<x304);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x309 = UINT64_MAX;
	int8_t x310 = INT8_MIN;
	int16_t x311 = 15;
	int32_t t66 = -468;

	t66 = (((x309%x310)*x311)<x312);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = -1419494;
	int64_t x314 = 511585LL;
	int64_t x316 = 1209LL;
	static volatile int32_t t67 = 6904625;

	t67 = (((x313%x314)*x315)<x316);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x317 = -4908;
	int32_t x318 = 6;
	uint8_t x319 = 5U;
	uint64_t x320 = 8015LLU;
	static int32_t t68 = -57971;

	t68 = (((x317%x318)*x319)<x320);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x321 = -61;
	static uint64_t x322 = 9545500LLU;
	uint8_t x323 = 1U;
	static volatile int32_t t69 = 123270;

	t69 = (((x321%x322)*x323)<x324);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x326 = 1425U;
	int8_t x327 = -1;
	uint8_t x328 = 57U;
	volatile int32_t t70 = -285;

	t70 = (((x325%x326)*x327)<x328);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x329 = 1163842501LLU;
	uint32_t x330 = 30219247U;
	int16_t x331 = INT16_MIN;
	volatile uint64_t x332 = UINT64_MAX;
	int32_t t71 = 35;

	t71 = (((x329%x330)*x331)<x332);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x334 = 3U;
	uint16_t x335 = 6U;
	volatile int32_t t72 = -45428;

	t72 = (((x333%x334)*x335)<x336);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x337 = UINT8_MAX;
	int8_t x339 = INT8_MIN;
	int64_t x340 = 4LL;
	static int32_t t73 = 142;

	t73 = (((x337%x338)*x339)<x340);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x341 = -1;
	int64_t x342 = INT64_MIN;
	uint16_t x343 = 0U;
	volatile int64_t x344 = INT64_MAX;
	volatile int32_t t74 = -120246;

	t74 = (((x341%x342)*x343)<x344);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x345 = -1;
	int16_t x346 = INT16_MAX;
	int64_t x347 = -355LL;
	volatile int8_t x348 = -1;
	int32_t t75 = 994752524;

	t75 = (((x345%x346)*x347)<x348);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x349 = INT16_MIN;
	uint8_t x350 = UINT8_MAX;
	uint64_t x351 = 9731114781LLU;
	int32_t t76 = -11;

	t76 = (((x349%x350)*x351)<x352);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x357 = -1LL;
	volatile uint8_t x358 = 6U;
	uint16_t x359 = UINT16_MAX;
	uint8_t x360 = 52U;

	t77 = (((x357%x358)*x359)<x360);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x361 = INT16_MAX;
	uint64_t x362 = UINT64_MAX;
	int8_t x364 = INT8_MAX;
	int32_t t78 = 6162714;

	t78 = (((x361%x362)*x363)<x364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x365 = INT64_MIN;
	static int16_t x366 = -1;
	uint16_t x367 = 0U;
	volatile int32_t t79 = -1057484740;

	t79 = (((x365%x366)*x367)<x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x369 = UINT8_MAX;
	int8_t x370 = -1;
	int8_t x371 = INT8_MIN;
	uint64_t x372 = UINT64_MAX;
	volatile int32_t t80 = 16081;

	t80 = (((x369%x370)*x371)<x372);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x374 = 12023268LLU;
	int8_t x375 = INT8_MIN;
	volatile int32_t t81 = 1226413;

	t81 = (((x373%x374)*x375)<x376);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x377 = -27;
	int32_t x378 = INT32_MAX;
	int8_t x380 = -14;
	static int32_t t82 = 6224421;

	t82 = (((x377%x378)*x379)<x380);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x383 = INT8_MAX;
	volatile int8_t x384 = -1;
	int32_t t83 = -3388;

	t83 = (((x381%x382)*x383)<x384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = INT8_MAX;
	uint32_t x386 = 64248U;
	int8_t x387 = INT8_MAX;
	uint32_t x388 = UINT32_MAX;

	t84 = (((x385%x386)*x387)<x388);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x389 = 450U;
	volatile int16_t x390 = 794;
	int16_t x391 = 218;
	volatile uint64_t x392 = UINT64_MAX;

	t85 = (((x389%x390)*x391)<x392);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x393 = 3U;
	volatile int8_t x394 = -1;
	uint16_t x396 = 30224U;

	t86 = (((x393%x394)*x395)<x396);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x403 = UINT32_MAX;
	volatile int32_t t87 = 147800;

	t87 = (((x401%x402)*x403)<x404);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x405 = 83U;
	static int8_t x406 = -1;
	int32_t t88 = -32131;

	t88 = (((x405%x406)*x407)<x408);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x409 = 0;
	int8_t x410 = -1;
	int8_t x411 = INT8_MAX;
	int32_t x412 = INT32_MIN;
	static volatile int32_t t89 = 0;

	t89 = (((x409%x410)*x411)<x412);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x413 = -1237393208LL;
	volatile uint16_t x414 = UINT16_MAX;
	volatile int32_t t90 = 0;

	t90 = (((x413%x414)*x415)<x416);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x425 = UINT64_MAX;
	static int16_t x426 = -1;
	uint8_t x427 = 3U;
	uint32_t x428 = 87114999U;
	volatile int32_t t91 = 286;

	t91 = (((x425%x426)*x427)<x428);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x429 = INT32_MAX;
	volatile int64_t x430 = INT64_MIN;
	int8_t x431 = -1;
	uint8_t x432 = 2U;

	t92 = (((x429%x430)*x431)<x432);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x438 = -336456;
	static int16_t x439 = INT16_MIN;
	static uint64_t x440 = 628LLU;
	static volatile int32_t t93 = 128;

	t93 = (((x437%x438)*x439)<x440);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x441 = 950;
	volatile uint64_t x442 = 3883014059244LLU;
	int8_t x443 = -1;
	volatile int32_t t94 = -4;

	t94 = (((x441%x442)*x443)<x444);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x445 = INT32_MIN;
	static int8_t x446 = -1;
	int16_t x447 = 0;
	volatile uint32_t x448 = 53U;
	volatile int32_t t95 = 2967328;

	t95 = (((x445%x446)*x447)<x448);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x449 = UINT8_MAX;
	int16_t x450 = 41;
	int16_t x451 = -1;
	uint8_t x452 = UINT8_MAX;

	t96 = (((x449%x450)*x451)<x452);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x453 = -346;
	int32_t x454 = INT32_MIN;
	int8_t x455 = INT8_MIN;
	uint32_t x456 = 3158U;
	int32_t t97 = 668;

	t97 = (((x453%x454)*x455)<x456);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x457 = INT8_MAX;
	uint32_t x458 = UINT32_MAX;
	uint16_t x459 = 228U;
	int32_t t98 = 75;

	t98 = (((x457%x458)*x459)<x460);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x461 = INT64_MAX;
	int32_t x462 = INT32_MIN;
	static int32_t x463 = INT32_MIN;
	uint16_t x464 = 5610U;
	static int32_t t99 = 1;

	t99 = (((x461%x462)*x463)<x464);

	if (t99 != 1) { NG(); } else { ; }
	
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

