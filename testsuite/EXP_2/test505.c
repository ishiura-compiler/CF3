#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = 11U;
volatile uint8_t x7 = UINT8_MAX;
int16_t x8 = -1;
uint32_t x14 = 1953U;
volatile int64_t t3 = 23049369LL;
uint8_t x30 = UINT8_MAX;
volatile uint64_t x34 = 1317551495103305LLU;
uint16_t x40 = 10249U;
int16_t x50 = INT16_MIN;
volatile int64_t t8 = 85687387LL;
uint64_t x62 = 96359LLU;
volatile int16_t x63 = INT16_MIN;
uint32_t x81 = UINT32_MAX;
uint8_t x82 = UINT8_MAX;
int64_t x89 = 473806582481LL;
int16_t x99 = INT16_MIN;
volatile int8_t x102 = 24;
int64_t x103 = 205781344LL;
int32_t x116 = INT32_MAX;
static uint16_t x119 = 5U;
static volatile int64_t t20 = 7671860146698677LL;
int8_t x126 = 0;
int8_t x133 = INT8_MIN;
static int64_t x136 = 25LL;
volatile uint64_t t23 = 838LLU;
static int32_t x137 = -1;
volatile uint32_t t27 = 3U;
int8_t x162 = -13;
static volatile int32_t t28 = 29;
int8_t x168 = -11;
static int64_t x179 = INT64_MAX;
static volatile uint64_t t31 = 49228LLU;
static int64_t x191 = 1981LL;
static int16_t x194 = 346;
int16_t x196 = -1;
uint32_t x202 = UINT32_MAX;
int64_t x209 = 5555651LL;
volatile uint64_t x211 = 379215LLU;
uint64_t t36 = 50LLU;
uint8_t x214 = 1U;
int32_t x219 = -1;
uint32_t x233 = UINT32_MAX;
static volatile uint64_t t40 = 18291264040LLU;
int32_t x244 = INT32_MIN;
volatile int64_t x245 = INT64_MIN;
int16_t x246 = INT16_MIN;
int64_t x265 = 4130942899969038623LL;
int64_t x268 = 1263206213286080258LL;
int64_t t47 = 5998738422LL;
static volatile uint64_t t48 = 768731LLU;
int64_t x287 = INT64_MIN;
static int16_t x291 = INT16_MAX;
int16_t x292 = INT16_MIN;
static int16_t x296 = -1;
uint32_t x298 = 0U;
uint8_t x309 = 124U;
int8_t x331 = -11;
static int16_t x334 = INT16_MAX;
int16_t x342 = INT16_MAX;
volatile uint8_t x347 = 25U;
uint8_t x354 = 7U;
volatile int16_t x365 = -1;
static int32_t t65 = 139575785;
int16_t x374 = INT16_MAX;
volatile int64_t x381 = INT64_MIN;
int16_t x401 = INT16_MIN;
int32_t x402 = -447558;
int16_t x429 = 106;
uint16_t x439 = UINT16_MAX;
uint64_t t77 = 6983593628686LLU;
int16_t x445 = -1;
uint16_t x447 = UINT16_MAX;
uint8_t x456 = 0U;
volatile int8_t x462 = INT8_MIN;
volatile uint64_t t82 = 18973LLU;
volatile uint64_t t83 = 37527900564LLU;
static int64_t x476 = INT64_MIN;
static uint8_t x477 = 2U;
int8_t x487 = -1;
volatile int64_t t86 = -1823401LL;
int8_t x495 = -25;
uint64_t t88 = 1661LLU;
volatile uint64_t x503 = 47082886021725LLU;
volatile uint64_t t89 = 103996024428948LLU;
int8_t x507 = 1;
int16_t x526 = INT16_MAX;
volatile int8_t x527 = -5;
int64_t x528 = INT64_MIN;
uint32_t x530 = 712U;
uint32_t x549 = 490955U;
uint8_t x550 = 1U;
int64_t x553 = -1LL;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	static int64_t x2 = -967715LL;
	int32_t x3 = INT32_MIN;
	uint64_t x4 = 797LLU;
	volatile uint64_t t0 = 489725LLU;

	t0 = ((x1^(x2*x3))&x4);

	if (t0 != 768LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 2;
	volatile int32_t t1 = -56138763;

	t1 = ((x5^(x6*x7))&x8);

	if (t1 != 501) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int8_t x10 = INT8_MAX;
	int16_t x11 = INT16_MAX;
	int16_t x12 = -5;
	int64_t t2 = -22768977260LL;

	t2 = ((x9^(x10*x11))&x12);

	if (t2 != 9223372036850614394LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint8_t x15 = 125U;
	int64_t x16 = INT64_MAX;

	t3 = ((x13^(x14*x15))&x16);

	if (t3 != 2147727773LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x25 = INT16_MAX;
	int32_t x26 = INT32_MIN;
	volatile uint32_t x27 = 245734125U;
	int16_t x28 = INT16_MIN;
	uint32_t t4 = 4U;

	t4 = ((x25^(x26*x27))&x28);

	if (t4 != 2147483648U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = 2U;
	int16_t x31 = -1;
	volatile int16_t x32 = -3;
	volatile int32_t t5 = 15123;

	t5 = ((x29^(x30*x31))&x32);

	if (t5 != -255) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x33 = INT64_MAX;
	static volatile uint32_t x35 = 39431U;
	int64_t x36 = 12764839839LL;
	volatile uint64_t t6 = 6684LLU;

	t6 = ((x33^(x34*x35))&x36);

	if (t6 != 9672507136LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x37 = INT8_MIN;
	volatile uint8_t x38 = 24U;
	int16_t x39 = 3;
	int32_t t7 = -234628;

	t7 = ((x37^(x38*x39))&x40);

	if (t7 != 10248) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x49 = INT16_MIN;
	int16_t x51 = 6;
	int64_t x52 = -1LL;

	t8 = ((x49^(x50*x51))&x52);

	if (t8 != 163840LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x53 = INT8_MIN;
	uint64_t x54 = 14128392290678LLU;
	int64_t x55 = 0LL;
	int64_t x56 = INT64_MIN;
	volatile uint64_t t9 = 243LLU;

	t9 = ((x53^(x54*x55))&x56);

	if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x61 = INT8_MIN;
	int32_t x64 = -1;
	volatile uint64_t t10 = 3871420252LLU;

	t10 = ((x61^(x62*x63))&x64);

	if (t10 != 3157491584LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x73 = 3U;
	int64_t x74 = -6879619346LL;
	volatile uint32_t x75 = 31U;
	uint32_t x76 = UINT32_MAX;
	volatile int64_t t11 = 2098089978717LL;

	t11 = ((x73^(x74*x75))&x76);

	if (t11 != 1480165073LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = -1LL;
	uint16_t x78 = 9938U;
	int8_t x79 = -1;
	int64_t x80 = INT64_MAX;
	int64_t t12 = -495648713789LL;

	t12 = ((x77^(x78*x79))&x80);

	if (t12 != 9937LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x83 = 9U;
	volatile int16_t x84 = INT16_MIN;
	volatile uint32_t t13 = 3U;

	t13 = ((x81^(x82*x83))&x84);

	if (t13 != 4294934528U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x90 = -1;
	int8_t x91 = INT8_MIN;
	int16_t x92 = INT16_MAX;
	int64_t t14 = -1143640556360533911LL;

	t14 = ((x89^(x90*x91))&x92);

	if (t14 != 12881LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x97 = 57U;
	volatile uint8_t x98 = 13U;
	uint64_t x100 = UINT64_MAX;
	volatile uint64_t t15 = 17398LLU;

	t15 = ((x97^(x98*x99))&x100);

	if (t15 != 4294541369LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x101 = INT32_MAX;
	uint64_t x104 = 134LLU;
	volatile uint64_t t16 = 5LLU;

	t16 = ((x101^(x102*x103))&x104);

	if (t16 != 134LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x105 = INT64_MIN;
	int8_t x106 = -35;
	int32_t x107 = 14321606;
	static int8_t x108 = INT8_MIN;
	int64_t t17 = 7431197626LL;

	t17 = ((x105^(x106*x107))&x108);

	if (t17 != 9223372036353519488LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x113 = UINT64_MAX;
	static int32_t x114 = INT32_MIN;
	uint64_t x115 = 1LLU;
	volatile uint64_t t18 = 745960712358838LLU;

	t18 = ((x113^(x114*x115))&x116);

	if (t18 != 2147483647LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x117 = UINT64_MAX;
	static int64_t x118 = -14004529090896927LL;
	volatile int64_t x120 = INT64_MIN;
	volatile uint64_t t19 = 1LLU;

	t19 = ((x117^(x118*x119))&x120);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x121 = -1;
	static int64_t x122 = -1LL;
	int64_t x123 = -52314300400LL;
	int16_t x124 = -82;

	t20 = ((x121^(x122*x123))&x124);

	if (t20 != -52314300402LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x125 = INT32_MIN;
	static int16_t x127 = INT16_MIN;
	uint32_t x128 = UINT32_MAX;
	static volatile uint32_t t21 = 92U;

	t21 = ((x125^(x126*x127))&x128);

	if (t21 != 2147483648U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = -1615143LL;
	int8_t x131 = INT8_MIN;
	int8_t x132 = -38;
	int64_t t22 = 3482852972LL;

	t22 = ((x129^(x130*x131))&x132);

	if (t22 != -1940745344LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x134 = UINT64_MAX;
	uint64_t x135 = UINT64_MAX;

	t23 = ((x133^(x134*x135))&x136);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x138 = INT64_MAX;
	int32_t x139 = -1;
	volatile int8_t x140 = 3;
	volatile int64_t t24 = 12269468643LL;

	t24 = ((x137^(x138*x139))&x140);

	if (t24 != 2LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x141 = 58331071452578512LLU;
	int32_t x142 = 4;
	int8_t x143 = -1;
	static int64_t x144 = INT64_MIN;
	uint64_t t25 = 40944779485357446LLU;

	t25 = ((x141^(x142*x143))&x144);

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x149 = -5568014483015LL;
	int64_t x150 = INT64_MAX;
	int8_t x151 = -1;
	int8_t x152 = INT8_MAX;
	volatile int64_t t26 = 7839758720LL;

	t26 = ((x149^(x150*x151))&x152);

	if (t26 != 56LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x157 = UINT8_MAX;
	uint16_t x158 = 4068U;
	volatile uint32_t x159 = 228822U;
	int16_t x160 = INT16_MIN;

	t27 = ((x157^(x158*x159))&x160);

	if (t27 != 930840576U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x161 = -1;
	uint8_t x163 = 22U;
	uint8_t x164 = UINT8_MAX;

	t28 = ((x161^(x162*x163))&x164);

	if (t28 != 29) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x165 = 223U;
	uint64_t x166 = 831LLU;
	static int64_t x167 = -1LL;
	static volatile uint64_t t29 = 36887037110018816LLU;

	t29 = ((x165^(x166*x167))&x168);

	if (t29 != 18446744073709550612LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x173 = INT64_MAX;
	int16_t x174 = -214;
	volatile int16_t x175 = -1;
	volatile int64_t x176 = -1LL;
	int64_t t30 = 28LL;

	t30 = ((x173^(x174*x175))&x176);

	if (t30 != 9223372036854775593LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x177 = 1U;
	uint64_t x178 = 40794010364212289LLU;
	int64_t x180 = INT64_MAX;

	t31 = ((x177^(x178*x179))&x180);

	if (t31 != 9182578026490563518LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x185 = 1U;
	uint64_t x186 = 29880LLU;
	int64_t x187 = 4307312884240315LL;
	static uint16_t x188 = 49U;
	volatile uint64_t t32 = 1768908383102LLU;

	t32 = ((x185^(x186*x187))&x188);

	if (t32 != 33LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x189 = 60910061874LLU;
	int32_t x190 = INT32_MIN;
	uint64_t x192 = 2000LLU;
	uint64_t t33 = 753506377258197078LLU;

	t33 = ((x189^(x190*x191))&x192);

	if (t33 != 272LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x193 = INT64_MAX;
	static int8_t x195 = -1;
	volatile int64_t t34 = 38757LL;

	t34 = ((x193^(x194*x195))&x196);

	if (t34 != -9223372036854775463LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x201 = INT16_MAX;
	int32_t x203 = 5;
	volatile int8_t x204 = 1;
	static volatile uint32_t t35 = 14689889U;

	t35 = ((x201^(x202*x203))&x204);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x210 = INT64_MIN;
	static volatile int64_t x212 = INT64_MIN;

	t36 = ((x209^(x210*x211))&x212);

	if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x213 = 150U;
	int8_t x215 = -1;
	uint8_t x216 = 1U;
	volatile int32_t t37 = 2119;

	t37 = ((x213^(x214*x215))&x216);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x217 = INT16_MIN;
	uint16_t x218 = 87U;
	volatile uint32_t x220 = UINT32_MAX;
	uint32_t t38 = 117115U;

	t38 = ((x217^(x218*x219))&x220);

	if (t38 != 32681U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x221 = UINT16_MAX;
	int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MIN;
	int16_t x224 = 0;
	static int32_t t39 = -3;

	t39 = ((x221^(x222*x223))&x224);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x234 = INT16_MAX;
	volatile uint64_t x235 = UINT64_MAX;
	static int64_t x236 = 4LL;

	t40 = ((x233^(x234*x235))&x236);

	if (t40 != 4LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x241 = 10U;
	int32_t x242 = 56;
	uint8_t x243 = 0U;
	int32_t t41 = -12764237;

	t41 = ((x241^(x242*x243))&x244);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x247 = INT16_MIN;
	int16_t x248 = INT16_MAX;
	volatile int64_t t42 = 1LL;

	t42 = ((x245^(x246*x247))&x248);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x257 = INT32_MIN;
	int16_t x258 = -1;
	static uint64_t x259 = 932874LLU;
	int64_t x260 = INT64_MIN;
	volatile uint64_t t43 = 486656262LLU;

	t43 = ((x257^(x258*x259))&x260);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x261 = -3629;
	uint8_t x262 = UINT8_MAX;
	uint16_t x263 = 5U;
	static int64_t x264 = 506165574742LL;
	int64_t t44 = -3277017959LL;

	t44 = ((x261^(x262*x263))&x264);

	if (t44 != 506165572608LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x266 = UINT64_MAX;
	uint16_t x267 = 0U;
	volatile uint64_t t45 = 113187076010053602LLU;

	t45 = ((x265^(x266*x267))&x268);

	if (t45 != 1226120434732468482LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x269 = INT16_MAX;
	int16_t x270 = 49;
	int16_t x271 = -1;
	uint16_t x272 = 768U;
	int32_t t46 = -36230;

	t46 = ((x269^(x270*x271))&x272);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x273 = 215;
	int32_t x274 = INT32_MIN;
	volatile int64_t x275 = 109977LL;
	volatile uint16_t x276 = 184U;

	t47 = ((x273^(x274*x275))&x276);

	if (t47 != 144LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x281 = 1676LLU;
	uint64_t x282 = 10LLU;
	uint8_t x283 = 0U;
	volatile uint16_t x284 = 2U;

	t48 = ((x281^(x282*x283))&x284);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x285 = -7297306;
	volatile int8_t x286 = 1;
	volatile int16_t x288 = INT16_MAX;
	static volatile int64_t t49 = -13152919102LL;

	t49 = ((x285^(x286*x287))&x288);

	if (t49 != 9958LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x289 = INT64_MAX;
	int32_t x290 = 1545;
	volatile int64_t t50 = -401067466406LL;

	t50 = ((x289^(x290*x291))&x292);

	if (t50 != 9223372036804149248LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x293 = INT16_MIN;
	static int8_t x294 = INT8_MIN;
	int8_t x295 = -2;
	static int32_t t51 = 0;

	t51 = ((x293^(x294*x295))&x296);

	if (t51 != -32512) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x297 = 1;
	int16_t x299 = -10;
	int16_t x300 = -1;
	uint32_t t52 = 158584835U;

	t52 = ((x297^(x298*x299))&x300);

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x301 = INT8_MIN;
	volatile int8_t x302 = INT8_MIN;
	uint16_t x303 = 31U;
	int8_t x304 = -3;
	int32_t t53 = 2;

	t53 = ((x301^(x302*x303))&x304);

	if (t53 != 3840) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x310 = INT16_MAX;
	volatile int8_t x311 = -1;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t54 = 6029;

	t54 = ((x309^(x310*x311))&x312);

	if (t54 != 32893) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x313 = INT16_MAX;
	uint64_t x314 = 244688031LLU;
	static volatile int8_t x315 = 1;
	volatile uint8_t x316 = 4U;
	uint64_t t55 = 229401344375272880LLU;

	t55 = ((x313^(x314*x315))&x316);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x321 = INT8_MIN;
	static uint32_t x322 = 347U;
	int16_t x323 = INT16_MIN;
	static volatile uint16_t x324 = 8289U;
	uint32_t t56 = 1205902587U;

	t56 = ((x321^(x322*x323))&x324);

	if (t56 != 8192U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x325 = -1;
	uint16_t x326 = 26333U;
	int64_t x327 = -1LL;
	int8_t x328 = INT8_MIN;
	volatile int64_t t57 = 266LL;

	t57 = ((x325^(x326*x327))&x328);

	if (t57 != 26240LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x329 = -1LL;
	uint16_t x330 = 3U;
	static int8_t x332 = -1;
	int64_t t58 = 18LL;

	t58 = ((x329^(x330*x331))&x332);

	if (t58 != 32LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x333 = 28;
	uint64_t x335 = 17LLU;
	volatile int16_t x336 = INT16_MAX;
	uint64_t t59 = 33439LLU;

	t59 = ((x333^(x334*x335))&x336);

	if (t59 != 32755LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x337 = -1873853;
	int16_t x338 = INT16_MIN;
	static uint64_t x339 = UINT64_MAX;
	volatile int32_t x340 = -1;
	uint64_t t60 = 47212580866738LLU;

	t60 = ((x337^(x338*x339))&x340);

	if (t60 != 18446744073707710531LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x341 = -1;
	static volatile uint64_t x343 = UINT64_MAX;
	volatile int8_t x344 = INT8_MIN;
	static volatile uint64_t t61 = 3178671LLU;

	t61 = ((x341^(x342*x343))&x344);

	if (t61 != 32640LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x345 = 1;
	int32_t x346 = -57141552;
	uint8_t x348 = 31U;
	volatile int32_t t62 = -40762;

	t62 = ((x345^(x346*x347))&x348);

	if (t62 != 17) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x353 = UINT16_MAX;
	uint32_t x355 = UINT32_MAX;
	int8_t x356 = -1;
	static uint32_t t63 = 2934U;

	t63 = ((x353^(x354*x355))&x356);

	if (t63 != 4294901766U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x361 = -12354;
	static int8_t x362 = -15;
	static int8_t x363 = -1;
	static int16_t x364 = 1917;
	static volatile int32_t t64 = -2327972;

	t64 = ((x361^(x362*x363))&x364);

	if (t64 != 1841) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x366 = 434;
	uint16_t x367 = 3854U;
	volatile int16_t x368 = INT16_MIN;

	t65 = ((x365^(x366*x367))&x368);

	if (t65 != -1703936) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x369 = INT16_MIN;
	static int16_t x370 = -1;
	int32_t x371 = INT32_MAX;
	volatile int8_t x372 = 0;
	static int32_t t66 = 962;

	t66 = ((x369^(x370*x371))&x372);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x373 = INT16_MAX;
	static int8_t x375 = -1;
	int32_t x376 = INT32_MAX;
	volatile int32_t t67 = -107;

	t67 = ((x373^(x374*x375))&x376);

	if (t67 != 2147483646) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x377 = INT32_MAX;
	static uint64_t x378 = 183905671LLU;
	static int32_t x379 = INT32_MIN;
	int64_t x380 = -453LL;
	static uint64_t t68 = 8259449314670LLU;

	t68 = ((x377^(x378*x379))&x380);

	if (t68 != 18051809654610067003LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x382 = -199762;
	static uint16_t x383 = 24U;
	int16_t x384 = INT16_MIN;
	int64_t t69 = -26304719185623725LL;

	t69 = ((x381^(x382*x383))&x384);

	if (t69 != 9223372036849958912LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x397 = UINT8_MAX;
	int8_t x398 = INT8_MIN;
	int32_t x399 = -66;
	uint64_t x400 = UINT64_MAX;
	uint64_t t70 = 1821689737LLU;

	t70 = ((x397^(x398*x399))&x400);

	if (t70 != 8703LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x403 = -4;
	volatile int16_t x404 = INT16_MAX;
	volatile int32_t t71 = 118775756;

	t71 = ((x401^(x402*x403))&x404);

	if (t71 != 20760) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x413 = 2308343627778LLU;
	uint16_t x414 = UINT16_MAX;
	int8_t x415 = INT8_MIN;
	int32_t x416 = INT32_MAX;
	volatile uint64_t t72 = 2279006977939220409LLU;

	t72 = ((x413^(x414*x415))&x416);

	if (t72 != 192970882LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x417 = 17;
	int8_t x418 = -1;
	static uint8_t x419 = 108U;
	volatile uint64_t x420 = 0LLU;
	volatile uint64_t t73 = 3940945929145253LLU;

	t73 = ((x417^(x418*x419))&x420);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x430 = 59377LLU;
	int64_t x431 = INT64_MIN;
	int32_t x432 = -1;
	static uint64_t t74 = 481438668104LLU;

	t74 = ((x429^(x430*x431))&x432);

	if (t74 != 9223372036854775914LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x433 = -1463617;
	static volatile uint32_t x434 = 17479189U;
	uint64_t x435 = 1056249253342LLU;
	int8_t x436 = INT8_MIN;
	uint64_t t75 = 1068LLU;

	t75 = ((x433^(x434*x435))&x436);

	if (t75 != 18431107817146867072LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x437 = INT32_MIN;
	int16_t x438 = INT16_MIN;
	static int32_t x440 = INT32_MAX;
	int32_t t76 = -223802603;

	t76 = ((x437^(x438*x439))&x440);

	if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x441 = 0;
	uint64_t x442 = UINT64_MAX;
	volatile uint8_t x443 = 7U;
	int64_t x444 = INT64_MIN;

	t77 = ((x441^(x442*x443))&x444);

	if (t77 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x446 = 6U;
	uint8_t x448 = 9U;
	int32_t t78 = 308200211;

	t78 = ((x445^(x446*x447))&x448);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x449 = -1;
	volatile int64_t x450 = INT64_MIN;
	uint64_t x451 = 5857946336053LLU;
	int16_t x452 = -4;
	static uint64_t t79 = 8839512258374267LLU;

	t79 = ((x449^(x450*x451))&x452);

	if (t79 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x453 = 13480311U;
	uint16_t x454 = 610U;
	int8_t x455 = INT8_MIN;
	volatile uint32_t t80 = 889U;

	t80 = ((x453^(x454*x455))&x456);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x457 = -1LL;
	int32_t x458 = 1;
	static int16_t x459 = 5;
	volatile int16_t x460 = INT16_MIN;
	int64_t t81 = 1LL;

	t81 = ((x457^(x458*x459))&x460);

	if (t81 != -32768LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x461 = 19091173LLU;
	int16_t x463 = -3;
	static volatile int8_t x464 = INT8_MIN;

	t82 = ((x461^(x462*x463))&x464);

	if (t82 != 19091200LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x465 = 69392463U;
	volatile int16_t x466 = -1;
	int64_t x467 = INT64_MAX;
	uint64_t x468 = UINT64_MAX;

	t83 = ((x465^(x466*x467))&x468);

	if (t83 != 9223372036924168270LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x473 = INT32_MIN;
	uint16_t x474 = 1U;
	int64_t x475 = -1LL;
	volatile int64_t t84 = 114LL;

	t84 = ((x473^(x474*x475))&x476);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x478 = -1;
	int8_t x479 = INT8_MIN;
	volatile int16_t x480 = -1;
	int32_t t85 = -409081;

	t85 = ((x477^(x478*x479))&x480);

	if (t85 != 130) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x485 = INT16_MIN;
	static int32_t x486 = -1;
	int64_t x488 = 648958076LL;

	t86 = ((x485^(x486*x487))&x488);

	if (t86 != 648937472LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x493 = 269U;
	int16_t x494 = -31;
	static int16_t x496 = INT16_MAX;
	volatile int32_t t87 = -1136;

	t87 = ((x493^(x494*x495))&x496);

	if (t87 != 522) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x497 = -1;
	static uint64_t x498 = 7301LLU;
	int16_t x499 = -1;
	volatile int16_t x500 = 926;

	t88 = ((x497^(x498*x499))&x500);

	if (t88 != 132LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x501 = 2150898U;
	int8_t x502 = 0;
	int64_t x504 = INT64_MAX;

	t89 = ((x501^(x502*x503))&x504);

	if (t89 != 2150898LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x505 = 2;
	static int8_t x506 = INT8_MAX;
	static volatile int8_t x508 = INT8_MAX;
	volatile int32_t t90 = 529969665;

	t90 = ((x505^(x506*x507))&x508);

	if (t90 != 125) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x509 = 16426274098LLU;
	uint32_t x510 = 10051U;
	uint8_t x511 = UINT8_MAX;
	int64_t x512 = INT64_MAX;
	volatile uint64_t t91 = 27378694216LLU;

	t91 = ((x509^(x510*x511))&x512);

	if (t91 != 16428177039LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x513 = 36U;
	uint64_t x514 = 643326166033358LLU;
	static uint32_t x515 = UINT32_MAX;
	int16_t x516 = INT16_MAX;
	uint64_t t92 = 27964291933LLU;

	t92 = ((x513^(x514*x515))&x516);

	if (t92 != 7190LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x517 = INT32_MIN;
	volatile int16_t x518 = -1;
	int8_t x519 = INT8_MIN;
	volatile int64_t x520 = -2632475266411LL;
	static volatile int64_t t93 = -22731560LL;

	t93 = ((x517^(x518*x519))&x520);

	if (t93 != -2632814952320LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x525 = -63808061LL;
	int64_t t94 = 14160570121LL;

	t94 = ((x525^(x526*x527))&x528);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x529 = INT8_MAX;
	int16_t x531 = INT16_MIN;
	static int64_t x532 = -1LL;
	volatile int64_t t95 = -30668774844LL;

	t95 = ((x529^(x530*x531))&x532);

	if (t95 != 4271636607LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x541 = INT64_MIN;
	uint8_t x542 = 7U;
	static int16_t x543 = INT16_MIN;
	volatile uint16_t x544 = 41U;
	volatile int64_t t96 = 316341639963679130LL;

	t96 = ((x541^(x542*x543))&x544);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x545 = -1;
	int8_t x546 = -30;
	uint8_t x547 = 29U;
	int32_t x548 = 73;
	volatile int32_t t97 = -13439085;

	t97 = ((x545^(x546*x547))&x548);

	if (t97 != 65) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x551 = 82U;
	uint16_t x552 = 4U;
	static volatile uint32_t t98 = 369U;

	t98 = ((x549^(x550*x551))&x552);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x554 = 38;
	static int64_t x555 = -4874968919LL;
	int8_t x556 = 6;
	static volatile int64_t t99 = -2319947208725323313LL;

	t99 = ((x553^(x554*x555))&x556);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

