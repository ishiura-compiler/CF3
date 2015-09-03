#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = UINT8_MAX;
int8_t x3 = -1;
static int8_t x10 = 24;
int8_t x15 = 43;
volatile uint8_t x17 = 0U;
uint64_t x18 = UINT64_MAX;
volatile int64_t x20 = INT64_MIN;
int16_t x21 = -52;
volatile int32_t x30 = -4717;
uint64_t x31 = 9759429128566970LLU;
uint16_t x35 = 0U;
static volatile int64_t t7 = -3LL;
int64_t t8 = 85725589LL;
static uint8_t x41 = 2U;
uint32_t x59 = 840408U;
int8_t x62 = 0;
int16_t x71 = INT16_MIN;
int64_t t16 = INT64_MAX;
int8_t x74 = INT8_MIN;
volatile int64_t x75 = INT64_MIN;
volatile int64_t t17 = 32110197181230490LL;
volatile int32_t x78 = INT32_MIN;
static int32_t t18 = 1;
static uint64_t x81 = 536705469417147LLU;
static int64_t x87 = INT64_MIN;
static uint16_t x88 = 126U;
uint16_t x92 = UINT16_MAX;
volatile uint64_t t21 = 16794709739539LLU;
volatile int16_t x98 = 2600;
int8_t x106 = INT8_MIN;
volatile uint8_t x112 = 6U;
int64_t x114 = INT64_MAX;
int64_t t26 = -2995231553618512LL;
int32_t x117 = INT32_MIN;
int64_t x126 = 473130376537618LL;
volatile uint32_t x134 = 18162U;
int64_t x140 = INT64_MAX;
volatile uint8_t x142 = 10U;
int64_t x145 = -1803237557LL;
uint8_t x147 = 38U;
int8_t x149 = INT8_MIN;
int64_t x150 = INT64_MIN;
int64_t t35 = -4128270608LL;
static volatile int16_t x165 = -1;
volatile int32_t t38 = 7839;
int64_t x174 = -2501LL;
static uint16_t x175 = 3U;
int64_t x177 = -1LL;
uint16_t x178 = 832U;
int8_t x185 = INT8_MAX;
uint64_t t43 = 36228LLU;
volatile int32_t t45 = 1047228;
volatile int32_t t47 = -60058;
int32_t x206 = 512823;
static int64_t x210 = -1LL;
volatile uint16_t x211 = 52U;
int64_t t49 = -7050705867438LL;
int16_t x224 = INT16_MAX;
static int8_t x225 = -1;
uint32_t x227 = 686007366U;
uint32_t t53 = UINT32_MAX;
int32_t x230 = -1;
int16_t x233 = INT16_MIN;
int64_t x235 = 444LL;
int64_t t55 = -22732739400633525LL;
uint16_t x241 = 5412U;
volatile uint64_t t57 = 28LLU;
int64_t x248 = -77914449454951003LL;
uint8_t x254 = UINT8_MAX;
uint16_t x255 = 3U;
volatile uint64_t t59 = 9939652LLU;
uint32_t x269 = 36308U;
int32_t x275 = INT32_MIN;
int32_t x277 = INT32_MIN;
int64_t x279 = INT64_MIN;
uint16_t x280 = 72U;
static int64_t x284 = 1571288822903281590LL;
int64_t x289 = INT64_MAX;
volatile int64_t x291 = 4049925118981470105LL;
static int8_t x292 = 0;
static volatile int16_t x293 = -1;
int64_t x302 = INT64_MIN;
volatile int8_t x317 = INT8_MAX;
volatile int32_t x328 = INT32_MIN;
int32_t x330 = INT32_MAX;
int64_t t75 = -728770585744714LL;
volatile uint32_t x343 = 1246214839U;
static uint64_t t78 = 1689899830761404569LLU;
static volatile uint32_t x345 = UINT32_MAX;
int8_t x347 = -1;
static int16_t x348 = INT16_MIN;
int8_t x362 = -1;
volatile uint64_t x368 = 374417588534681133LLU;
int32_t x372 = -1;
static int8_t x384 = -1;
static volatile uint32_t t88 = UINT32_MAX;
static int32_t x393 = INT32_MIN;
int32_t x404 = -1;
volatile int32_t x410 = INT32_MIN;
volatile int64_t t93 = 3LL;
volatile int16_t x422 = INT16_MAX;
int64_t x424 = INT64_MIN;
static uint64_t x427 = 666329LLU;
uint64_t t97 = 1602844328790LLU;
uint16_t x432 = 2U;
static uint64_t x434 = 1LLU;
int64_t x436 = -15401143483LL;


void f0(void) {
	uint32_t x1 = 2U;
	static int8_t x4 = INT8_MIN;
	uint32_t t0 = 26476084U;

	t0 = (x1|(x2+(x3&x4)));

	if (t0 != 127U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint64_t x6 = 1654419617640937LLU;
	volatile int16_t x7 = INT16_MIN;
	volatile int8_t x8 = INT8_MIN;
	volatile uint64_t t1 = 1009926LLU;

	t1 = (x5|(x6+(x7&x8)));

	if (t1 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 43;
	volatile int16_t x11 = INT16_MIN;
	uint8_t x12 = 1U;
	int32_t t2 = 20646;

	t2 = (x9|(x10+(x11&x12)));

	if (t2 != 59) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	int64_t x14 = -7488LL;
	uint8_t x16 = UINT8_MAX;
	int64_t t3 = 726LL;

	t3 = (x13|(x14+(x15&x16)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x19 = 475098U;
	static volatile uint64_t t4 = UINT64_MAX;

	t4 = (x17|(x18+(x19&x20)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x22 = UINT8_MAX;
	static uint8_t x23 = 2U;
	volatile int16_t x24 = -1;
	int32_t t5 = -14003;

	t5 = (x21|(x22+(x23&x24)));

	if (t5 != -51) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	static uint64_t x32 = 2659973220958137347LLU;
	volatile uint64_t t6 = 4218178451695LLU;

	t6 = (x29|(x30+(x31&x32)));

	if (t6 != 18446744072136824213LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	static volatile uint8_t x34 = 63U;
	int64_t x36 = INT64_MAX;

	t7 = (x33|(x34+(x35&x36)));

	if (t7 != 127LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -8246290LL;
	volatile uint8_t x38 = 1U;
	int16_t x39 = -1;
	volatile int32_t x40 = INT32_MIN;

	t8 = (x37|(x38+(x39&x40)));

	if (t8 != -8246289LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x42 = UINT64_MAX;
	uint64_t x43 = UINT64_MAX;
	int16_t x44 = -1;
	volatile uint64_t t9 = 24804531568LLU;

	t9 = (x41|(x42+(x43&x44)));

	if (t9 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 89U;
	uint32_t x46 = 3928U;
	static volatile int32_t x47 = INT32_MIN;
	static int8_t x48 = -1;
	uint32_t t10 = 40074U;

	t10 = (x45|(x46+(x47&x48)));

	if (t10 != 2147487577U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	uint8_t x50 = UINT8_MAX;
	int64_t x51 = -10394LL;
	uint32_t x52 = UINT32_MAX;
	static int64_t t11 = 56297273464860LL;

	t11 = (x49|(x50+(x51&x52)));

	if (t11 != 4294967295LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = 940;
	int16_t x54 = INT16_MIN;
	volatile int16_t x55 = 5291;
	uint8_t x56 = UINT8_MAX;
	int32_t t12 = 6653804;

	t12 = (x53|(x54+(x55&x56)));

	if (t12 != -31825) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = 1;
	volatile int32_t x60 = INT32_MAX;
	uint32_t t13 = 75281U;

	t13 = (x57|(x58+(x59&x60)));

	if (t13 != 2148324057U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x61 = UINT8_MAX;
	int64_t x63 = INT64_MIN;
	int32_t x64 = -1316580;
	static int64_t t14 = 52LL;

	t14 = (x61|(x62+(x63&x64)));

	if (t14 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MIN;
	int64_t x67 = INT64_MIN;
	volatile uint8_t x68 = 8U;
	static int64_t t15 = -2242702526153056057LL;

	t15 = (x65|(x66+(x67&x68)));

	if (t15 != -128LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MAX;
	int32_t x70 = INT32_MAX;
	int16_t x72 = INT16_MIN;

	t16 = (x69|(x70+(x71&x72)));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MAX;
	static uint8_t x76 = 25U;

	t17 = (x73|(x74+(x75&x76)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MAX;
	uint8_t x79 = 117U;
	static volatile uint16_t x80 = UINT16_MAX;

	t18 = (x77|(x78+(x79&x80)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x82 = UINT32_MAX;
	int16_t x83 = INT16_MIN;
	static uint64_t x84 = 2664406911414026505LLU;
	uint64_t t19 = 10564464608917863LLU;

	t19 = (x81|(x82+(x83&x84)));

	if (t19 != 2664442101558673407LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x85 = INT64_MIN;
	int8_t x86 = -2;
	int64_t t20 = 264608896841876LL;

	t20 = (x85|(x86+(x87&x88)));

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 830135443659073LLU;
	int8_t x90 = INT8_MAX;
	volatile int32_t x91 = 60049;

	t21 = (x89|(x90+(x91&x92)));

	if (t21 != 830135443716945LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -1;
	static uint16_t x99 = UINT16_MAX;
	static uint32_t x100 = UINT32_MAX;
	volatile uint32_t t22 = UINT32_MAX;

	t22 = (x97|(x98+(x99&x100)));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x101 = 4039291LLU;
	int8_t x102 = 0;
	static uint16_t x103 = UINT16_MAX;
	static uint64_t x104 = 741LLU;
	volatile uint64_t t23 = 912230LLU;

	t23 = (x101|(x102+(x103&x104)));

	if (t23 != 4039423LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MAX;
	int32_t x107 = 1;
	static int16_t x108 = INT16_MIN;
	static volatile int32_t t24 = 8;

	t24 = (x105|(x106+(x107&x108)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MIN;
	volatile uint32_t x110 = 114382U;
	int8_t x111 = INT8_MIN;
	volatile uint32_t t25 = 272305U;

	t25 = (x109|(x110+(x111&x112)));

	if (t25 != 4294967246U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -1LL;
	int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MIN;

	t26 = (x113|(x114+(x115&x116)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x118 = 1;
	int8_t x119 = INT8_MAX;
	volatile int8_t x120 = INT8_MAX;
	static volatile int32_t t27 = -2091443;

	t27 = (x117|(x118+(x119&x120)));

	if (t27 != -2147483520) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = UINT8_MAX;
	volatile uint8_t x122 = UINT8_MAX;
	int64_t x123 = 10130705LL;
	int32_t x124 = -1;
	int64_t t28 = 1306945001060499412LL;

	t28 = (x121|(x122+(x123&x124)));

	if (t28 != 10131199LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MIN;
	uint64_t x127 = UINT64_MAX;
	int8_t x128 = 3;
	volatile uint64_t t29 = 528807311564832LLU;

	t29 = (x125|(x126+(x127&x128)));

	if (t29 != 9223845167231313429LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x129 = 34U;
	static uint64_t x130 = 3LLU;
	volatile int32_t x131 = -248;
	int16_t x132 = -43;
	uint64_t t30 = 45367329099311284LLU;

	t30 = (x129|(x130+(x131&x132)));

	if (t30 != 18446744073709551395LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = -5;
	uint32_t x135 = UINT32_MAX;
	uint64_t x136 = 492470LLU;
	static volatile uint64_t t31 = 829666557053LLU;

	t31 = (x133|(x134+(x135&x136)));

	if (t31 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x137 = INT16_MIN;
	uint64_t x138 = 709718716487LLU;
	volatile int16_t x139 = INT16_MIN;
	volatile uint64_t t32 = 2047906586353783087LLU;

	t32 = (x137|(x138+(x139&x140)));

	if (t32 != 18446744073709531207LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	volatile uint16_t x143 = 55U;
	int32_t x144 = 28;
	static int32_t t33 = 30;

	t33 = (x141|(x142+(x143&x144)));

	if (t33 != -32738) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x146 = -1LL;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t34 = 1087486708121735254LLU;

	t34 = (x145|(x146+(x147&x148)));

	if (t34 != 18446744071906314095LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x151 = UINT8_MAX;
	uint8_t x152 = 2U;

	t35 = (x149|(x150+(x151&x152)));

	if (t35 != -126LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = 370;
	static int16_t x154 = 0;
	int16_t x155 = -1;
	uint64_t x156 = UINT64_MAX;
	uint64_t t36 = UINT64_MAX;

	t36 = (x153|(x154+(x155&x156)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x161 = 17486687530650529LLU;
	volatile int8_t x162 = INT8_MIN;
	int8_t x163 = -1;
	static volatile int64_t x164 = 2241547289LL;
	static uint64_t t37 = 3854396383LLU;

	t37 = (x161|(x162+(x163&x164)));

	if (t37 != 17486687548165049LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x166 = -76035416;
	int16_t x167 = INT16_MIN;
	int8_t x168 = -1;

	t38 = (x165|(x166+(x167&x168)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x169 = UINT64_MAX;
	int16_t x170 = 7809;
	int32_t x171 = INT32_MIN;
	static uint64_t x172 = 3755LLU;
	uint64_t t39 = UINT64_MAX;

	t39 = (x169|(x170+(x171&x172)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MIN;
	volatile uint8_t x176 = 14U;
	volatile int64_t t40 = 4802LL;

	t40 = (x173|(x174+(x175&x176)));

	if (t40 != -2499LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x179 = -1;
	volatile uint16_t x180 = 9150U;
	int64_t t41 = 368095847582LL;

	t41 = (x177|(x178+(x179&x180)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x181 = INT8_MIN;
	static int8_t x182 = INT8_MIN;
	volatile int8_t x183 = INT8_MIN;
	static uint16_t x184 = UINT16_MAX;
	int32_t t42 = 31;

	t42 = (x181|(x182+(x183&x184)));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x186 = 123LLU;
	volatile int16_t x187 = INT16_MIN;
	int32_t x188 = INT32_MIN;

	t43 = (x185|(x186+(x187&x188)));

	if (t43 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x189 = INT32_MIN;
	uint8_t x190 = 115U;
	int64_t x191 = INT64_MIN;
	static int64_t x192 = INT64_MIN;
	volatile int64_t t44 = -11622373841LL;

	t44 = (x189|(x190+(x191&x192)));

	if (t44 != -2147483533LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x193 = -656;
	volatile uint16_t x194 = UINT16_MAX;
	volatile int8_t x195 = -10;
	volatile int8_t x196 = 39;

	t45 = (x193|(x194+(x195&x196)));

	if (t45 != -651) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = -1LL;
	volatile uint64_t x198 = 2914004374717773LLU;
	int32_t x199 = INT32_MIN;
	volatile int16_t x200 = INT16_MIN;
	static volatile uint64_t t46 = UINT64_MAX;

	t46 = (x197|(x198+(x199&x200)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = 15895U;
	volatile int32_t x202 = -173067378;
	int16_t x203 = 275;
	uint16_t x204 = UINT16_MAX;

	t47 = (x201|(x202+(x203&x204)));

	if (t47 != -173064521) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = -1;
	static volatile uint8_t x207 = 3U;
	static int8_t x208 = -1;
	int32_t t48 = 6;

	t48 = (x205|(x206+(x207&x208)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MIN;
	volatile int16_t x212 = -1;

	t49 = (x209|(x210+(x211&x212)));

	if (t49 != -77LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x213 = 8U;
	int32_t x214 = 100;
	uint64_t x215 = UINT64_MAX;
	int8_t x216 = 1;
	static uint64_t t50 = 4LLU;

	t50 = (x213|(x214+(x215&x216)));

	if (t50 != 109LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = INT16_MAX;
	static uint8_t x218 = 31U;
	uint64_t x219 = UINT64_MAX;
	volatile uint8_t x220 = 33U;
	volatile uint64_t t51 = 15LLU;

	t51 = (x217|(x218+(x219&x220)));

	if (t51 != 32767LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = -1;
	int32_t x222 = INT32_MIN;
	volatile int16_t x223 = -1;
	volatile int32_t t52 = -2;

	t52 = (x221|(x222+(x223&x224)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x226 = 9U;
	int32_t x228 = INT32_MAX;

	t53 = (x225|(x226+(x227&x228)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x229 = 28774042U;
	int8_t x231 = 0;
	int64_t x232 = -1LL;
	int64_t t54 = 1824576363205LL;

	t54 = (x229|(x230+(x231&x232)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x234 = UINT16_MAX;
	int8_t x236 = -6;

	t55 = (x233|(x234+(x235&x236)));

	if (t55 != -32329LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x237 = UINT16_MAX;
	uint16_t x238 = 11056U;
	int16_t x239 = -1763;
	static int8_t x240 = INT8_MIN;
	volatile int32_t t56 = 390959;

	t56 = (x237|(x238+(x239&x240)));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x242 = 1674100154164LLU;
	static int8_t x243 = -3;
	uint16_t x244 = 16U;

	t57 = (x241|(x242+(x243&x244)));

	if (t57 != 1674100154212LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x245 = 31U;
	uint32_t x246 = 32484U;
	int32_t x247 = -3;
	int64_t t58 = 11859282307357176LL;

	t58 = (x245|(x246+(x247&x248)));

	if (t58 != -77914449454918497LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = INT32_MAX;
	volatile uint64_t x256 = UINT64_MAX;

	t59 = (x253|(x254+(x255&x256)));

	if (t59 != 2147483647LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x261 = 102U;
	volatile uint8_t x262 = UINT8_MAX;
	static int8_t x263 = INT8_MAX;
	int64_t x264 = INT64_MIN;
	int64_t t60 = 519851262688LL;

	t60 = (x261|(x262+(x263&x264)));

	if (t60 != 255LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x270 = 1U;
	static int32_t x271 = -1;
	static int32_t x272 = INT32_MIN;
	static uint32_t t61 = 7U;

	t61 = (x269|(x270+(x271&x272)));

	if (t61 != 2147519957U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x273 = -1;
	volatile uint8_t x274 = UINT8_MAX;
	uint32_t x276 = 227451774U;
	static uint32_t t62 = UINT32_MAX;

	t62 = (x273|(x274+(x275&x276)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x278 = -1;
	volatile int64_t t63 = -44600162LL;

	t63 = (x277|(x278+(x279&x280)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = -1;
	static int8_t x282 = INT8_MIN;
	static int64_t x283 = INT64_MIN;
	int64_t t64 = 440578809670403001LL;

	t64 = (x281|(x282+(x283&x284)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x290 = INT16_MIN;
	volatile int64_t t65 = -826272807979414LL;

	t65 = (x289|(x290+(x291&x292)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x294 = -1LL;
	volatile int8_t x295 = -1;
	int8_t x296 = INT8_MAX;
	volatile int64_t t66 = -154LL;

	t66 = (x293|(x294+(x295&x296)));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x297 = UINT16_MAX;
	uint8_t x298 = 1U;
	int8_t x299 = INT8_MAX;
	int32_t x300 = INT32_MIN;
	static volatile int32_t t67 = 2003369;

	t67 = (x297|(x298+(x299&x300)));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = -1;
	uint16_t x303 = 43U;
	static uint32_t x304 = 131U;
	int64_t t68 = 1223970675246844LL;

	t68 = (x301|(x302+(x303&x304)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x305 = 8711U;
	int8_t x306 = INT8_MIN;
	static volatile uint16_t x307 = 14900U;
	volatile uint16_t x308 = 1104U;
	uint32_t t69 = 6380U;

	t69 = (x305|(x306+(x307&x308)));

	if (t69 != 4294967191U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x309 = -3997;
	volatile int8_t x310 = INT8_MIN;
	int8_t x311 = -1;
	int16_t x312 = INT16_MIN;
	static int32_t t70 = -823602;

	t70 = (x309|(x310+(x311&x312)));

	if (t70 != -29) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x313 = 483U;
	static uint8_t x314 = 79U;
	int8_t x315 = INT8_MAX;
	int64_t x316 = INT64_MIN;
	int64_t t71 = 55647777588106LL;

	t71 = (x313|(x314+(x315&x316)));

	if (t71 != 495LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x318 = INT32_MIN;
	static int16_t x319 = INT16_MAX;
	static int16_t x320 = INT16_MAX;
	int32_t t72 = 12;

	t72 = (x317|(x318+(x319&x320)));

	if (t72 != -2147450881) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x321 = UINT64_MAX;
	uint32_t x322 = 22132U;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MAX;
	uint64_t t73 = UINT64_MAX;

	t73 = (x321|(x322+(x323&x324)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x325 = INT8_MAX;
	int8_t x326 = INT8_MIN;
	uint16_t x327 = 0U;
	volatile int32_t t74 = -171485314;

	t74 = (x325|(x326+(x327&x328)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = -1LL;
	volatile int64_t x331 = -1LL;
	int8_t x332 = 1;

	t75 = (x329|(x330+(x331&x332)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x333 = 12904101U;
	int16_t x334 = INT16_MIN;
	volatile int32_t x335 = INT32_MAX;
	int32_t x336 = -1;
	volatile uint32_t t76 = 782304109U;

	t76 = (x333|(x334+(x335&x336)));

	if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x337 = 1U;
	int8_t x338 = INT8_MAX;
	int16_t x339 = INT16_MAX;
	int32_t x340 = INT32_MIN;
	volatile int32_t t77 = -3393;

	t77 = (x337|(x338+(x339&x340)));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MAX;
	volatile uint64_t x344 = UINT64_MAX;

	t78 = (x341|(x342+(x343&x344)));

	if (t78 != 18446744072808282806LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x346 = UINT8_MAX;
	static volatile uint32_t t79 = UINT32_MAX;

	t79 = (x345|(x346+(x347&x348)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x357 = UINT64_MAX;
	int64_t x358 = -1LL;
	volatile int16_t x359 = INT16_MIN;
	uint32_t x360 = 1022634U;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = (x357|(x358+(x359&x360)));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x361 = 34;
	static int32_t x363 = -635196;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t81 = 5;

	t81 = (x361|(x362+(x363&x364)));

	if (t81 != -635265) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x365 = INT8_MIN;
	uint64_t x366 = UINT64_MAX;
	static int32_t x367 = -4032;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (x365|(x366+(x367&x368)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x369 = -488LL;
	int8_t x370 = -1;
	static volatile int64_t x371 = 5LL;
	volatile int64_t t83 = 4882LL;

	t83 = (x369|(x370+(x371&x372)));

	if (t83 != -484LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = -1;
	uint16_t x374 = UINT16_MAX;
	int16_t x375 = 55;
	int64_t x376 = 8149322LL;
	static volatile int64_t t84 = -321133895597598LL;

	t84 = (x373|(x374+(x375&x376)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x377 = INT8_MIN;
	int32_t x378 = -1;
	int8_t x379 = INT8_MIN;
	volatile int8_t x380 = 0;
	static volatile int32_t t85 = 0;

	t85 = (x377|(x378+(x379&x380)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x381 = INT32_MAX;
	uint64_t x382 = 121318056988533126LLU;
	int16_t x383 = -1;
	volatile uint64_t t86 = 9264629915814LLU;

	t86 = (x381|(x382+(x383&x384)));

	if (t86 != 121318057866952703LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x385 = INT8_MIN;
	static int8_t x386 = INT8_MIN;
	uint16_t x387 = UINT16_MAX;
	int8_t x388 = INT8_MIN;
	volatile int32_t t87 = 1;

	t87 = (x385|(x386+(x387&x388)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = -1;
	static uint32_t x390 = UINT32_MAX;
	int32_t x391 = INT32_MAX;
	uint32_t x392 = UINT32_MAX;

	t88 = (x389|(x390+(x391&x392)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x394 = INT8_MAX;
	int8_t x395 = -1;
	int32_t x396 = INT32_MIN;
	volatile int32_t t89 = 44;

	t89 = (x393|(x394+(x395&x396)));

	if (t89 != -2147483521) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = -1;
	volatile int8_t x398 = -2;
	static uint16_t x399 = UINT16_MAX;
	int32_t x400 = 754;
	int32_t t90 = -387112514;

	t90 = (x397|(x398+(x399&x400)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x401 = UINT8_MAX;
	static uint32_t x402 = UINT32_MAX;
	uint8_t x403 = 96U;
	uint32_t t91 = 86U;

	t91 = (x401|(x402+(x403&x404)));

	if (t91 != 255U) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x405 = INT8_MIN;
	volatile int8_t x406 = INT8_MAX;
	uint16_t x407 = UINT16_MAX;
	int8_t x408 = INT8_MIN;
	int32_t t92 = 264805;

	t92 = (x405|(x406+(x407&x408)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x409 = INT16_MIN;
	int64_t x411 = -1LL;
	volatile int32_t x412 = 2138;

	t93 = (x409|(x410+(x411&x412)));

	if (t93 != -30630LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = INT16_MAX;
	volatile int8_t x414 = -1;
	uint64_t x415 = 3LLU;
	int16_t x416 = -1;
	uint64_t t94 = 37038925606LLU;

	t94 = (x413|(x414+(x415&x416)));

	if (t94 != 32767LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x417 = 1317474575U;
	int64_t x418 = INT64_MIN;
	int16_t x419 = INT16_MIN;
	uint16_t x420 = 1U;
	static volatile int64_t t95 = -583480430442LL;

	t95 = (x417|(x418+(x419&x420)));

	if (t95 != -9223372035537301233LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x421 = UINT8_MAX;
	static volatile int64_t x423 = INT64_MIN;
	volatile int64_t t96 = -25643423412680LL;

	t96 = (x421|(x422+(x423&x424)));

	if (t96 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x425 = INT64_MIN;
	int16_t x426 = INT16_MIN;
	volatile int8_t x428 = INT8_MAX;

	t97 = (x425|(x426+(x427&x428)));

	if (t97 != 18446744073709518937LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x429 = -4355231981426704501LL;
	static int16_t x430 = -7;
	int64_t x431 = -17609384LL;
	int64_t t98 = 0LL;

	t98 = (x429|(x430+(x431&x432)));

	if (t98 != -5LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x433 = -3787119546722LL;
	volatile int8_t x435 = -1;
	volatile uint64_t t99 = 65232932333109LLU;

	t99 = (x433|(x434+(x435&x436)));

	if (t99 != 18446744067234971614LLU) { NG(); } else { ; }
	
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

