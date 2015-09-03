#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -18709834611520901LL;
static int64_t x10 = INT64_MIN;
volatile int32_t t2 = 385;
uint64_t x13 = UINT64_MAX;
volatile int64_t x22 = 99339963809645LL;
volatile int32_t t5 = 971455210;
uint32_t x33 = 1007U;
static int16_t x37 = -361;
int16_t x45 = 0;
int32_t t8 = 1;
volatile int64_t x52 = INT64_MIN;
volatile int32_t t10 = -178;
int64_t x66 = 52339547850944LL;
int16_t x71 = -1134;
volatile int32_t t14 = -89254681;
int64_t x79 = -1LL;
volatile int32_t t15 = 696102;
volatile int16_t x86 = -1;
int64_t x87 = INT64_MIN;
volatile int32_t t17 = 187199008;
static volatile uint32_t x89 = UINT32_MAX;
int32_t t18 = -15569;
volatile uint16_t x95 = 7U;
int32_t t20 = 28945;
static int32_t x111 = -1;
static volatile int32_t t23 = 786268875;
static int32_t x121 = -1;
uint16_t x124 = UINT16_MAX;
int64_t x125 = -1LL;
volatile int32_t t25 = 33626535;
volatile int32_t t26 = 93055391;
static uint32_t x134 = UINT32_MAX;
volatile int64_t x137 = 1618358715LL;
uint8_t x139 = UINT8_MAX;
uint64_t x162 = UINT64_MAX;
int64_t x164 = INT64_MIN;
int32_t t32 = 3329423;
volatile int16_t x172 = INT16_MIN;
static int32_t t34 = 2;
volatile uint32_t x183 = 167462634U;
static volatile uint64_t x198 = UINT64_MAX;
int32_t t37 = -7787;
static int32_t x204 = INT32_MIN;
uint32_t x206 = 23197495U;
volatile int32_t t39 = -7;
int8_t x213 = INT8_MIN;
volatile int32_t t42 = 0;
volatile int32_t t44 = -215746495;
int8_t x245 = 6;
uint32_t x249 = 131398195U;
volatile uint16_t x257 = 0U;
int32_t x262 = -1355;
int8_t x266 = -6;
volatile int32_t x268 = INT32_MIN;
volatile int32_t t51 = -327;
int32_t x269 = -1;
int32_t x279 = INT32_MAX;
int8_t x282 = -1;
int64_t x283 = 2415LL;
static volatile int64_t x290 = -911607696310199444LL;
volatile int8_t x292 = INT8_MAX;
uint8_t x294 = 0U;
volatile int64_t x296 = INT64_MIN;
static volatile int32_t t58 = 1250699;
volatile int32_t t59 = 1287129;
int64_t x311 = -8216LL;
static volatile uint16_t x314 = 58U;
int32_t t62 = -724754938;
int64_t x320 = -1LL;
int16_t x321 = INT16_MAX;
static uint32_t x332 = 447559397U;
static uint16_t x338 = UINT16_MAX;
int16_t x340 = 6415;
static volatile int32_t x344 = 138;
int16_t x370 = INT16_MAX;
static uint8_t x380 = 3U;
uint8_t x382 = 45U;
int8_t x386 = 2;
volatile int32_t t77 = -46692054;
volatile uint8_t x390 = 0U;
int64_t x397 = 725LL;
static volatile uint16_t x400 = 1224U;
uint16_t x405 = 7542U;
static volatile int16_t x407 = -83;
static volatile int32_t t83 = -241;
int8_t x446 = INT8_MIN;
uint32_t x447 = UINT32_MAX;
int8_t x459 = INT8_MIN;
static int8_t x487 = INT8_MIN;
int32_t t91 = -3217;
int16_t x494 = INT16_MAX;
volatile uint64_t x499 = UINT64_MAX;
int32_t t93 = -49;
static volatile int64_t x503 = 816010612140LL;
uint64_t x504 = 25494LLU;
int8_t x505 = INT8_MAX;
int64_t x506 = -1LL;
int16_t x508 = -3;
uint16_t x510 = 1U;
static volatile int32_t x517 = -242;
volatile uint16_t x519 = 5016U;
uint32_t x522 = 0U;
int8_t x526 = 6;
int32_t x528 = INT32_MAX;


void f0(void) {
	volatile uint8_t x2 = 7U;
	volatile int32_t x3 = -44349450;
	int32_t x4 = INT32_MAX;
	int32_t t0 = -6184969;

	t0 = (((x1*x2)<x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = 40U;
	uint32_t x6 = UINT32_MAX;
	volatile uint8_t x7 = 1U;
	volatile uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = 21601510;

	t1 = (((x5*x6)<x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 57LLU;
	uint16_t x11 = UINT16_MAX;
	uint16_t x12 = 11U;

	t2 = (((x9*x10)<x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = -1021;
	volatile uint8_t x15 = 1U;
	int64_t x16 = INT64_MAX;
	int32_t t3 = 233301;

	t3 = (((x13*x14)<x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = 53;
	volatile int32_t x23 = -1;
	volatile uint8_t x24 = 16U;
	static volatile int32_t t4 = 3603;

	t4 = (((x21*x22)<x23)<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 0;
	uint64_t x26 = 5850LLU;
	int16_t x27 = INT16_MIN;
	uint64_t x28 = 3861LLU;

	t5 = (((x25*x26)<x27)<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x34 = -1LL;
	static volatile int8_t x35 = INT8_MIN;
	uint16_t x36 = 1U;
	int32_t t6 = -3;

	t6 = (((x33*x34)<x35)<x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x38 = -1LL;
	static int64_t x39 = INT64_MIN;
	int16_t x40 = INT16_MAX;
	static int32_t t7 = 43772;

	t7 = (((x37*x38)<x39)<x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x46 = INT64_MIN;
	uint64_t x47 = 46699LLU;
	volatile int32_t x48 = INT32_MAX;

	t8 = (((x45*x46)<x47)<x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = UINT8_MAX;
	int64_t x50 = -19054144707LL;
	uint32_t x51 = 3580U;
	volatile int32_t t9 = 2149137;

	t9 = (((x49*x50)<x51)<x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = -8082602529LL;
	volatile int8_t x58 = INT8_MAX;
	volatile int32_t x59 = -31;
	volatile int16_t x60 = -1;

	t10 = (((x57*x58)<x59)<x60);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x61 = 111551187815870033LLU;
	volatile int16_t x62 = 114;
	uint16_t x63 = 1383U;
	uint16_t x64 = 12634U;
	int32_t t11 = 544345;

	t11 = (((x61*x62)<x63)<x64);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = INT16_MAX;
	static int16_t x67 = 0;
	static volatile int32_t x68 = -908576;
	int32_t t12 = -613;

	t12 = (((x65*x66)<x67)<x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = -6;
	int16_t x70 = INT16_MIN;
	static uint64_t x72 = UINT64_MAX;
	volatile int32_t t13 = 14061110;

	t13 = (((x69*x70)<x71)<x72);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = -1;
	volatile uint8_t x74 = UINT8_MAX;
	int64_t x75 = -1LL;
	int8_t x76 = INT8_MIN;

	t14 = (((x73*x74)<x75)<x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = UINT32_MAX;
	int32_t x78 = INT32_MIN;
	uint32_t x80 = 2008U;

	t15 = (((x77*x78)<x79)<x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = 0;
	int8_t x82 = INT8_MIN;
	int64_t x83 = 222352704920425LL;
	uint16_t x84 = 3556U;
	int32_t t16 = 288;

	t16 = (((x81*x82)<x83)<x84);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = 103134;
	int32_t x88 = INT32_MIN;

	t17 = (((x85*x86)<x87)<x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x90 = INT8_MIN;
	volatile uint64_t x91 = 15112812228LLU;
	uint32_t x92 = 837201026U;

	t18 = (((x89*x90)<x91)<x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x93 = UINT8_MAX;
	int16_t x94 = -4721;
	int16_t x96 = INT16_MIN;
	int32_t t19 = -49161;

	t19 = (((x93*x94)<x95)<x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x97 = 619357;
	volatile uint32_t x98 = 101108U;
	static uint32_t x99 = 264357U;
	static volatile int16_t x100 = INT16_MIN;

	t20 = (((x97*x98)<x99)<x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = INT32_MAX;
	static uint8_t x106 = 1U;
	volatile int32_t x107 = 700025;
	int64_t x108 = 3930LL;
	volatile int32_t t21 = 442734;

	t21 = (((x105*x106)<x107)<x108);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x109 = INT32_MIN;
	int64_t x110 = -1LL;
	int32_t x112 = 0;
	int32_t t22 = 8628047;

	t22 = (((x109*x110)<x111)<x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = -124;
	static int64_t x118 = -1LL;
	int64_t x119 = 128191395692239LL;
	static int64_t x120 = INT64_MIN;

	t23 = (((x117*x118)<x119)<x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x122 = INT32_MAX;
	int64_t x123 = INT64_MIN;
	volatile int32_t t24 = -43;

	t24 = (((x121*x122)<x123)<x124);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x126 = 104U;
	int16_t x127 = INT16_MIN;
	static int32_t x128 = 12;

	t25 = (((x125*x126)<x127)<x128);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = 767746643LL;
	int16_t x130 = INT16_MIN;
	uint64_t x131 = UINT64_MAX;
	volatile int16_t x132 = -203;

	t26 = (((x129*x130)<x131)<x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x133 = 350769974189061LLU;
	int16_t x135 = INT16_MAX;
	int16_t x136 = INT16_MIN;
	volatile int32_t t27 = -2929277;

	t27 = (((x133*x134)<x135)<x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x138 = -1LL;
	volatile int8_t x140 = 7;
	volatile int32_t t28 = -10;

	t28 = (((x137*x138)<x139)<x140);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = INT32_MAX;
	uint8_t x146 = 0U;
	int16_t x147 = -1;
	int8_t x148 = INT8_MIN;
	static int32_t t29 = -236;

	t29 = (((x145*x146)<x147)<x148);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x149 = 7172600U;
	static int8_t x150 = INT8_MIN;
	int32_t x151 = INT32_MIN;
	int64_t x152 = -1LL;
	volatile int32_t t30 = -1392;

	t30 = (((x149*x150)<x151)<x152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x153 = UINT32_MAX;
	uint32_t x154 = UINT32_MAX;
	int32_t x155 = 8106;
	int16_t x156 = -3936;
	int32_t t31 = 21132;

	t31 = (((x153*x154)<x155)<x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x161 = INT32_MIN;
	uint16_t x163 = 3443U;

	t32 = (((x161*x162)<x163)<x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x165 = 2950911530LLU;
	int32_t x166 = -1;
	static int8_t x167 = 0;
	int8_t x168 = 7;
	volatile int32_t t33 = -2581;

	t33 = (((x165*x166)<x167)<x168);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x169 = 617113U;
	int32_t x170 = INT32_MIN;
	volatile uint8_t x171 = 0U;

	t34 = (((x169*x170)<x171)<x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x177 = 13464140620936LL;
	uint8_t x178 = UINT8_MAX;
	static int64_t x179 = INT64_MIN;
	static uint8_t x180 = 5U;
	static volatile int32_t t35 = -162016;

	t35 = (((x177*x178)<x179)<x180);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = 2;
	int8_t x182 = INT8_MIN;
	int32_t x184 = INT32_MIN;
	int32_t t36 = -3246;

	t36 = (((x181*x182)<x183)<x184);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x197 = -1;
	volatile uint8_t x199 = 11U;
	int16_t x200 = INT16_MIN;

	t37 = (((x197*x198)<x199)<x200);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x201 = -7989;
	volatile int8_t x202 = INT8_MIN;
	uint16_t x203 = 108U;
	volatile int32_t t38 = -1;

	t38 = (((x201*x202)<x203)<x204);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x205 = INT16_MAX;
	int32_t x207 = INT32_MIN;
	uint16_t x208 = 30902U;

	t39 = (((x205*x206)<x207)<x208);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x209 = 32292068LL;
	uint32_t x210 = 0U;
	volatile uint32_t x211 = 221U;
	uint64_t x212 = UINT64_MAX;
	volatile int32_t t40 = 16;

	t40 = (((x209*x210)<x211)<x212);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x214 = 362U;
	uint64_t x215 = 1845724887LLU;
	int32_t x216 = INT32_MIN;
	volatile int32_t t41 = -785;

	t41 = (((x213*x214)<x215)<x216);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = INT16_MAX;
	static int32_t x222 = -1;
	static volatile int32_t x223 = -1;
	static int64_t x224 = INT64_MIN;

	t42 = (((x221*x222)<x223)<x224);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x225 = -1;
	static volatile int16_t x226 = INT16_MAX;
	uint32_t x227 = UINT32_MAX;
	int32_t x228 = INT32_MAX;
	volatile int32_t t43 = 6773;

	t43 = (((x225*x226)<x227)<x228);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x233 = UINT8_MAX;
	int16_t x234 = 91;
	volatile uint32_t x235 = 113041481U;
	int16_t x236 = INT16_MIN;

	t44 = (((x233*x234)<x235)<x236);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = -1LL;
	volatile uint32_t x243 = 188567U;
	int8_t x244 = 5;
	static volatile int32_t t45 = -108751980;

	t45 = (((x241*x242)<x243)<x244);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x246 = UINT32_MAX;
	volatile int8_t x247 = -1;
	uint32_t x248 = UINT32_MAX;
	static volatile int32_t t46 = -99;

	t46 = (((x245*x246)<x247)<x248);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x250 = UINT64_MAX;
	volatile uint16_t x251 = 14U;
	int16_t x252 = -1571;
	volatile int32_t t47 = 174410;

	t47 = (((x249*x250)<x251)<x252);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x253 = INT16_MIN;
	int16_t x254 = INT16_MAX;
	int32_t x255 = INT32_MAX;
	static volatile int32_t x256 = INT32_MAX;
	volatile int32_t t48 = -386;

	t48 = (((x253*x254)<x255)<x256);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x258 = INT8_MIN;
	static uint16_t x259 = 1U;
	static volatile uint32_t x260 = 4990911U;
	static int32_t t49 = 72144525;

	t49 = (((x257*x258)<x259)<x260);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x261 = INT16_MIN;
	int64_t x263 = -3LL;
	int16_t x264 = -3;
	volatile int32_t t50 = 32590474;

	t50 = (((x261*x262)<x263)<x264);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x265 = -1;
	uint8_t x267 = 0U;

	t51 = (((x265*x266)<x267)<x268);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x270 = -1;
	int32_t x271 = 211561917;
	int8_t x272 = -1;
	int32_t t52 = 9;

	t52 = (((x269*x270)<x271)<x272);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x273 = INT32_MIN;
	uint64_t x274 = UINT64_MAX;
	int8_t x275 = 3;
	uint16_t x276 = 10036U;
	int32_t t53 = 329513488;

	t53 = (((x273*x274)<x275)<x276);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x277 = UINT16_MAX;
	int8_t x278 = 3;
	volatile int8_t x280 = -24;
	volatile int32_t t54 = -4639763;

	t54 = (((x277*x278)<x279)<x280);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x281 = 105U;
	int8_t x284 = 58;
	int32_t t55 = 15871893;

	t55 = (((x281*x282)<x283)<x284);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x285 = 5315833626LLU;
	int32_t x286 = INT32_MIN;
	int8_t x287 = INT8_MIN;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t56 = -176;

	t56 = (((x285*x286)<x287)<x288);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x289 = 0LL;
	uint32_t x291 = 15U;
	int32_t t57 = 15410;

	t57 = (((x289*x290)<x291)<x292);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x293 = 37U;
	static int16_t x295 = -1;

	t58 = (((x293*x294)<x295)<x296);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x297 = INT16_MIN;
	uint32_t x298 = UINT32_MAX;
	uint64_t x299 = 6522709LLU;
	volatile int32_t x300 = INT32_MAX;

	t59 = (((x297*x298)<x299)<x300);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x305 = UINT64_MAX;
	volatile uint64_t x306 = 995230989610LLU;
	int16_t x307 = 0;
	static int16_t x308 = INT16_MIN;
	int32_t t60 = 1;

	t60 = (((x305*x306)<x307)<x308);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x309 = -1;
	uint16_t x310 = UINT16_MAX;
	uint32_t x312 = UINT32_MAX;
	int32_t t61 = 297226845;

	t61 = (((x309*x310)<x311)<x312);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x313 = 1399158141U;
	int8_t x315 = INT8_MAX;
	uint32_t x316 = UINT32_MAX;

	t62 = (((x313*x314)<x315)<x316);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x317 = 13U;
	int32_t x318 = -1007;
	int32_t x319 = -1;
	int32_t t63 = -86776409;

	t63 = (((x317*x318)<x319)<x320);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x322 = 4;
	int16_t x323 = INT16_MAX;
	static volatile uint32_t x324 = UINT32_MAX;
	int32_t t64 = 10880991;

	t64 = (((x321*x322)<x323)<x324);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x329 = 2101470835U;
	static int8_t x330 = INT8_MIN;
	static volatile int64_t x331 = -1LL;
	int32_t t65 = 15656029;

	t65 = (((x329*x330)<x331)<x332);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x333 = INT16_MIN;
	uint8_t x334 = UINT8_MAX;
	uint32_t x335 = UINT32_MAX;
	uint32_t x336 = 336977884U;
	volatile int32_t t66 = -64613949;

	t66 = (((x333*x334)<x335)<x336);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x337 = 0U;
	volatile int16_t x339 = INT16_MIN;
	int32_t t67 = -41;

	t67 = (((x337*x338)<x339)<x340);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x341 = UINT64_MAX;
	volatile uint64_t x342 = UINT64_MAX;
	int8_t x343 = -1;
	int32_t t68 = 9656;

	t68 = (((x341*x342)<x343)<x344);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x345 = 1;
	volatile int64_t x346 = 2012455525LL;
	int32_t x347 = INT32_MAX;
	static int32_t x348 = INT32_MAX;
	int32_t t69 = -54026908;

	t69 = (((x345*x346)<x347)<x348);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x349 = INT64_MAX;
	int16_t x350 = -1;
	volatile uint8_t x351 = 60U;
	static volatile int32_t x352 = INT32_MAX;
	int32_t t70 = -465;

	t70 = (((x349*x350)<x351)<x352);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x353 = 1638581LLU;
	volatile uint64_t x354 = 223147579480LLU;
	int16_t x355 = INT16_MIN;
	volatile uint16_t x356 = 6485U;
	static int32_t t71 = 72;

	t71 = (((x353*x354)<x355)<x356);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x357 = -17952;
	static int16_t x358 = INT16_MIN;
	volatile int32_t x359 = -1;
	uint32_t x360 = 57648U;
	int32_t t72 = -66153679;

	t72 = (((x357*x358)<x359)<x360);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x365 = 1502LLU;
	int64_t x366 = -1LL;
	int32_t x367 = INT32_MAX;
	int32_t x368 = -76490;
	static int32_t t73 = 471;

	t73 = (((x365*x366)<x367)<x368);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x369 = INT8_MIN;
	uint8_t x371 = 20U;
	volatile int64_t x372 = INT64_MAX;
	static int32_t t74 = -167666856;

	t74 = (((x369*x370)<x371)<x372);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x377 = 500283280U;
	static int8_t x378 = 0;
	int64_t x379 = INT64_MAX;
	volatile int32_t t75 = -71806;

	t75 = (((x377*x378)<x379)<x380);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x381 = INT8_MIN;
	int32_t x383 = INT32_MIN;
	int8_t x384 = INT8_MIN;
	volatile int32_t t76 = 4;

	t76 = (((x381*x382)<x383)<x384);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x385 = 10U;
	uint32_t x387 = 0U;
	static int16_t x388 = 4005;

	t77 = (((x385*x386)<x387)<x388);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x389 = UINT64_MAX;
	int8_t x391 = -1;
	uint64_t x392 = 849LLU;
	int32_t t78 = -131;

	t78 = (((x389*x390)<x391)<x392);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x398 = 9U;
	int8_t x399 = -1;
	int32_t t79 = 836;

	t79 = (((x397*x398)<x399)<x400);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x406 = -27;
	uint8_t x408 = UINT8_MAX;
	static int32_t t80 = -4849471;

	t80 = (((x405*x406)<x407)<x408);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x413 = 7U;
	int32_t x414 = 1;
	volatile int8_t x415 = -1;
	static uint64_t x416 = UINT64_MAX;
	int32_t t81 = -32;

	t81 = (((x413*x414)<x415)<x416);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x429 = 41U;
	int16_t x430 = INT16_MIN;
	int64_t x431 = -1LL;
	static volatile uint16_t x432 = UINT16_MAX;
	volatile int32_t t82 = -552138489;

	t82 = (((x429*x430)<x431)<x432);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x437 = 58U;
	static uint32_t x438 = UINT32_MAX;
	int64_t x439 = INT64_MIN;
	uint16_t x440 = UINT16_MAX;

	t83 = (((x437*x438)<x439)<x440);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x445 = -22333;
	int8_t x448 = -1;
	int32_t t84 = -28186;

	t84 = (((x445*x446)<x447)<x448);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x449 = -1;
	volatile int8_t x450 = INT8_MAX;
	volatile int64_t x451 = -1LL;
	int16_t x452 = INT16_MIN;
	int32_t t85 = 62377;

	t85 = (((x449*x450)<x451)<x452);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x457 = 195664112374539LLU;
	int8_t x458 = -1;
	volatile int8_t x460 = 6;
	int32_t t86 = 72;

	t86 = (((x457*x458)<x459)<x460);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x465 = 28U;
	int64_t x466 = 6761113874124LL;
	int8_t x467 = 0;
	uint32_t x468 = 5018239U;
	static int32_t t87 = -6;

	t87 = (((x465*x466)<x467)<x468);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x473 = 14LLU;
	volatile int16_t x474 = INT16_MIN;
	uint32_t x475 = 30131U;
	int16_t x476 = INT16_MAX;
	int32_t t88 = -494;

	t88 = (((x473*x474)<x475)<x476);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x481 = -1;
	static int8_t x482 = INT8_MIN;
	int16_t x483 = -48;
	static int32_t x484 = INT32_MAX;
	static volatile int32_t t89 = 2382;

	t89 = (((x481*x482)<x483)<x484);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x485 = 2;
	volatile int8_t x486 = INT8_MIN;
	int8_t x488 = INT8_MAX;
	volatile int32_t t90 = -3;

	t90 = (((x485*x486)<x487)<x488);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x489 = -1;
	volatile int8_t x490 = 1;
	uint32_t x491 = 888235014U;
	static int32_t x492 = -1;

	t91 = (((x489*x490)<x491)<x492);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x493 = 15U;
	int32_t x495 = INT32_MIN;
	uint32_t x496 = 141777401U;
	int32_t t92 = 546963;

	t92 = (((x493*x494)<x495)<x496);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x497 = UINT64_MAX;
	int64_t x498 = -1316LL;
	int16_t x500 = INT16_MAX;

	t93 = (((x497*x498)<x499)<x500);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x501 = -1;
	int64_t x502 = 534167111145723767LL;
	int32_t t94 = 0;

	t94 = (((x501*x502)<x503)<x504);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x507 = -38;
	int32_t t95 = 1288;

	t95 = (((x505*x506)<x507)<x508);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x509 = -1;
	int8_t x511 = -1;
	static volatile int32_t x512 = INT32_MAX;
	volatile int32_t t96 = 4511;

	t96 = (((x509*x510)<x511)<x512);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x518 = UINT16_MAX;
	static int16_t x520 = INT16_MIN;
	volatile int32_t t97 = 3455386;

	t97 = (((x517*x518)<x519)<x520);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x521 = -1LL;
	int16_t x523 = -7820;
	static int64_t x524 = -108LL;
	static int32_t t98 = -1677998;

	t98 = (((x521*x522)<x523)<x524);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x525 = 592;
	int8_t x527 = INT8_MIN;
	int32_t t99 = 9;

	t99 = (((x525*x526)<x527)<x528);

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

