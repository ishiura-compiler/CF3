#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x7 = 1595620;
int64_t x11 = -1LL;
volatile int16_t x12 = -1;
int32_t t2 = -1662;
volatile int64_t x16 = INT64_MIN;
uint32_t x28 = 30177U;
int64_t x34 = -185260279750607LL;
uint16_t x35 = 3U;
volatile int32_t t8 = 181278;
volatile int32_t t9 = 99124;
uint64_t x61 = UINT64_MAX;
volatile int32_t t12 = -7145996;
static uint32_t x74 = 19U;
int8_t x77 = INT8_MAX;
volatile int32_t t16 = -138581;
volatile int64_t t17 = 28038270449385LL;
static volatile int64_t x92 = INT64_MIN;
volatile int8_t x94 = INT8_MAX;
int8_t x106 = -1;
int8_t x108 = INT8_MIN;
volatile int32_t t20 = 13;
uint32_t x109 = 32660762U;
uint32_t x112 = 233U;
volatile uint32_t t21 = 3U;
static int8_t x119 = 30;
int8_t x121 = 0;
volatile int64_t x123 = INT64_MAX;
int32_t x145 = -19748791;
static int64_t x147 = 12130567LL;
int32_t t31 = 489018;
uint32_t x173 = 24U;
uint8_t x175 = 3U;
volatile int32_t t34 = -52088746;
static int32_t x181 = -1603935;
static int8_t x184 = 61;
int8_t x188 = -3;
uint16_t x190 = 11U;
uint16_t x193 = 78U;
int32_t x195 = -326108253;
uint64_t x214 = 9106479348769LLU;
int16_t x215 = INT16_MAX;
volatile uint64_t x216 = 694980955555733LLU;
volatile uint32_t t43 = 5U;
uint64_t x225 = 7552959LLU;
uint64_t x226 = UINT64_MAX;
int16_t x230 = 1;
uint64_t x231 = 11467507807908401LLU;
int32_t t46 = -467130417;
uint32_t x233 = 563277U;
uint8_t x244 = 5U;
uint8_t x249 = UINT8_MAX;
volatile int32_t x253 = -1;
int64_t x256 = INT64_MIN;
uint8_t x261 = 41U;
uint16_t x262 = 3327U;
static int16_t x264 = 409;
volatile int32_t t51 = 49140771;
volatile int16_t x265 = INT16_MIN;
volatile int8_t x268 = INT8_MIN;
int32_t t54 = 354;
int8_t x278 = -1;
volatile int8_t x291 = 7;
int32_t x299 = -1;
static int8_t x304 = INT8_MIN;
static volatile int32_t t61 = 17;
volatile int32_t t65 = 3601;
volatile int64_t x342 = -1773763036796393LL;
static int8_t x345 = 15;
uint16_t x346 = UINT16_MAX;
int64_t x347 = -1LL;
uint8_t x348 = 0U;
int64_t t72 = INT64_MIN;
uint32_t x354 = UINT32_MAX;
volatile int16_t x358 = -1;
uint64_t x364 = 622441459341787LLU;
volatile int64_t x372 = INT64_MAX;
volatile int16_t x401 = -2;
int16_t x403 = INT16_MIN;
int32_t x416 = INT32_MIN;
uint8_t x419 = UINT8_MAX;
volatile int32_t t86 = INT32_MAX;
volatile int8_t x429 = -1;
uint64_t x431 = UINT64_MAX;
int8_t x446 = -1;
static volatile int32_t t91 = -1;
int16_t x460 = -1;
int64_t x462 = -53009519112669LL;
uint32_t x463 = UINT32_MAX;
int8_t x464 = -1;
int32_t t94 = -25068;
static uint32_t x478 = UINT32_MAX;
int64_t x481 = -1LL;
uint32_t x482 = 90U;
volatile int64_t x489 = INT64_MIN;
static int32_t x492 = -455386380;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int32_t x2 = INT32_MIN;
	int64_t x3 = INT64_MIN;
	static int8_t x4 = 0;
	int32_t t0 = 1;

	t0 = (((x1+x2)<x3)+x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = UINT16_MAX;
	uint8_t x6 = UINT8_MAX;
	uint32_t x8 = 1350135985U;
	uint32_t t1 = 2089927904U;

	t1 = (((x5+x6)<x7)+x8);

	if (t1 != 1350135986U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 183050851LLU;
	int32_t x10 = -589261;

	t2 = (((x9+x10)<x11)+x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 44;
	uint32_t x14 = 3461U;
	int32_t x15 = INT32_MIN;
	volatile int64_t t3 = 496426LL;

	t3 = (((x13+x14)<x15)+x16);

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	int16_t x22 = INT16_MAX;
	uint64_t x23 = 23564797655956385LLU;
	int64_t x24 = INT64_MAX;
	static int64_t t4 = INT64_MAX;

	t4 = (((x21+x22)<x23)+x24);

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	static int8_t x26 = INT8_MIN;
	volatile int64_t x27 = 812311614409717LL;
	static volatile uint32_t t5 = 40U;

	t5 = (((x25+x26)<x27)+x28);

	if (t5 != 30178U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = INT8_MAX;
	int16_t x30 = INT16_MIN;
	volatile int16_t x31 = INT16_MIN;
	int32_t x32 = INT32_MIN;
	int32_t t6 = INT32_MIN;

	t6 = (((x29+x30)<x31)+x32);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -28LL;
	uint64_t x36 = 14648545198089LLU;
	volatile uint64_t t7 = 67LLU;

	t7 = (((x33+x34)<x35)+x36);

	if (t7 != 14648545198090LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	uint8_t x38 = UINT8_MAX;
	int16_t x39 = INT16_MIN;
	static volatile int8_t x40 = 13;

	t8 = (((x37+x38)<x39)+x40);

	if (t8 != 14) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = 61U;
	uint32_t x50 = UINT32_MAX;
	uint64_t x51 = 1070600498782795090LLU;
	static uint8_t x52 = UINT8_MAX;

	t9 = (((x49+x50)<x51)+x52);

	if (t9 != 256) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x53 = INT16_MAX;
	static volatile int32_t x54 = INT32_MIN;
	int8_t x55 = 1;
	int32_t x56 = INT32_MIN;
	volatile int32_t t10 = 98;

	t10 = (((x53+x54)<x55)+x56);

	if (t10 != -2147483647) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = -1;
	static volatile int16_t x58 = INT16_MAX;
	static volatile uint64_t x59 = 87986332609498LLU;
	int32_t x60 = -1;
	volatile int32_t t11 = 6;

	t11 = (((x57+x58)<x59)+x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x62 = 6993U;
	uint16_t x63 = UINT16_MAX;
	int32_t x64 = -61649;

	t12 = (((x61+x62)<x63)+x64);

	if (t12 != -61648) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = 20308LLU;
	volatile int64_t x66 = INT64_MAX;
	int8_t x67 = 18;
	volatile int32_t x68 = 107380;
	volatile int32_t t13 = 1;

	t13 = (((x65+x66)<x67)+x68);

	if (t13 != 107380) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x73 = -1;
	int16_t x75 = -1;
	static volatile int32_t x76 = INT32_MIN;
	int32_t t14 = 18;

	t14 = (((x73+x74)<x75)+x76);

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x78 = UINT32_MAX;
	int16_t x79 = 16213;
	volatile int64_t x80 = INT64_MIN;
	volatile int64_t t15 = 2841257LL;

	t15 = (((x77+x78)<x79)+x80);

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = -1;
	static int16_t x82 = INT16_MIN;
	int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MAX;

	t16 = (((x81+x82)<x83)+x84);

	if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x85 = UINT8_MAX;
	int8_t x86 = INT8_MAX;
	static int64_t x87 = INT64_MIN;
	int64_t x88 = -432LL;

	t17 = (((x85+x86)<x87)+x88);

	if (t17 != -432LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = UINT64_MAX;
	int64_t x90 = INT64_MAX;
	volatile int16_t x91 = 6;
	volatile int64_t t18 = INT64_MIN;

	t18 = (((x89+x90)<x91)+x92);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = 0;
	int16_t x95 = 207;
	uint8_t x96 = 6U;
	volatile int32_t t19 = -30;

	t19 = (((x93+x94)<x95)+x96);

	if (t19 != 7) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x105 = INT16_MIN;
	static int16_t x107 = INT16_MIN;

	t20 = (((x105+x106)<x107)+x108);

	if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MAX;

	t21 = (((x109+x110)<x111)+x112);

	if (t21 != 234U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = INT32_MIN;
	uint64_t x118 = 575766758922202288LLU;
	volatile int32_t x120 = 26229;
	int32_t t22 = -7300156;

	t22 = (((x117+x118)<x119)+x120);

	if (t22 != 26229) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x122 = 8U;
	int16_t x124 = 51;
	volatile int32_t t23 = -1635699;

	t23 = (((x121+x122)<x123)+x124);

	if (t23 != 52) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x125 = 61U;
	int64_t x126 = 2587363509589LL;
	uint8_t x127 = 16U;
	uint16_t x128 = UINT16_MAX;
	int32_t t24 = 265;

	t24 = (((x125+x126)<x127)+x128);

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = INT16_MIN;
	static uint64_t x130 = 627811LLU;
	int64_t x131 = -1LL;
	int8_t x132 = INT8_MAX;
	int32_t t25 = 2036;

	t25 = (((x129+x130)<x131)+x132);

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MAX;
	int16_t x135 = -11676;
	uint32_t x136 = 904U;
	uint32_t t26 = 1452844U;

	t26 = (((x133+x134)<x135)+x136);

	if (t26 != 904U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x137 = 2998U;
	static volatile int64_t x138 = -1LL;
	int64_t x139 = -10610181850270LL;
	static uint32_t x140 = UINT32_MAX;
	uint32_t t27 = UINT32_MAX;

	t27 = (((x137+x138)<x139)+x140);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = INT8_MIN;
	static uint8_t x142 = 3U;
	static uint64_t x143 = 4767097940455892LLU;
	int8_t x144 = INT8_MAX;
	static volatile int32_t t28 = 194858913;

	t28 = (((x141+x142)<x143)+x144);

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x146 = -24;
	uint16_t x148 = 26U;
	volatile int32_t t29 = -20180122;

	t29 = (((x145+x146)<x147)+x148);

	if (t29 != 27) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x149 = 61U;
	static uint32_t x150 = 1U;
	int16_t x151 = INT16_MIN;
	static volatile uint64_t x152 = 28LLU;
	uint64_t t30 = 224016453LLU;

	t30 = (((x149+x150)<x151)+x152);

	if (t30 != 29LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = 1;
	uint8_t x154 = 2U;
	static int16_t x155 = -2931;
	int16_t x156 = 81;

	t31 = (((x153+x154)<x155)+x156);

	if (t31 != 81) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x157 = 61U;
	volatile int16_t x158 = -1;
	int8_t x159 = INT8_MIN;
	int8_t x160 = -1;
	volatile int32_t t32 = 1;

	t32 = (((x157+x158)<x159)+x160);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = INT8_MIN;
	int64_t x162 = -127293444447043LL;
	int16_t x163 = INT16_MIN;
	static uint8_t x164 = UINT8_MAX;
	volatile int32_t t33 = 411650;

	t33 = (((x161+x162)<x163)+x164);

	if (t33 != 256) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x174 = INT32_MIN;
	static int8_t x176 = 48;

	t34 = (((x173+x174)<x175)+x176);

	if (t34 != 48) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x177 = UINT8_MAX;
	int8_t x178 = 1;
	static uint16_t x179 = UINT16_MAX;
	volatile int32_t x180 = -9415;
	static volatile int32_t t35 = 4;

	t35 = (((x177+x178)<x179)+x180);

	if (t35 != -9414) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x182 = 261527553;
	static int32_t x183 = INT32_MAX;
	static int32_t t36 = 1229;

	t36 = (((x181+x182)<x183)+x184);

	if (t36 != 62) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x185 = UINT64_MAX;
	uint16_t x186 = 55U;
	int32_t x187 = -310980;
	static volatile int32_t t37 = 21748643;

	t37 = (((x185+x186)<x187)+x188);

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x189 = INT16_MAX;
	int8_t x191 = -1;
	int64_t x192 = -1LL;
	int64_t t38 = -175LL;

	t38 = (((x189+x190)<x191)+x192);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x194 = 956195423966LLU;
	int16_t x196 = -1;
	int32_t t39 = -15613;

	t39 = (((x193+x194)<x195)+x196);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x201 = INT64_MIN;
	volatile uint8_t x202 = 4U;
	static int64_t x203 = 563890788LL;
	static uint8_t x204 = UINT8_MAX;
	volatile int32_t t40 = -1;

	t40 = (((x201+x202)<x203)+x204);

	if (t40 != 256) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x205 = 18569562LLU;
	uint32_t x206 = 312007U;
	int8_t x207 = INT8_MAX;
	static int16_t x208 = INT16_MIN;
	static volatile int32_t t41 = -1;

	t41 = (((x205+x206)<x207)+x208);

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x213 = -1;
	uint64_t t42 = 33292064LLU;

	t42 = (((x213+x214)<x215)+x216);

	if (t42 != 694980955555733LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = -45;
	int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MAX;
	volatile uint32_t x220 = UINT32_MAX;

	t43 = (((x217+x218)<x219)+x220);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x221 = -6;
	int8_t x222 = -1;
	uint32_t x223 = 13U;
	uint64_t x224 = 136425669368LLU;
	volatile uint64_t t44 = 33192859470LLU;

	t44 = (((x221+x222)<x223)+x224);

	if (t44 != 136425669368LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x227 = 92U;
	int8_t x228 = 1;
	static int32_t t45 = -5;

	t45 = (((x225+x226)<x227)+x228);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x229 = -1LL;
	int8_t x232 = -1;

	t46 = (((x229+x230)<x231)+x232);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x234 = 0;
	static int16_t x235 = 1;
	int16_t x236 = INT16_MIN;
	volatile int32_t t47 = 3;

	t47 = (((x233+x234)<x235)+x236);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x241 = 19;
	int64_t x242 = INT64_MIN;
	volatile uint32_t x243 = 101247402U;
	volatile int32_t t48 = -73;

	t48 = (((x241+x242)<x243)+x244);

	if (t48 != 6) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x250 = 87;
	int32_t x251 = -1;
	volatile int32_t x252 = -21825276;
	static volatile int32_t t49 = -22990474;

	t49 = (((x249+x250)<x251)+x252);

	if (t49 != -21825276) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x254 = -19;
	volatile uint16_t x255 = 7U;
	int64_t t50 = 1662967257747LL;

	t50 = (((x253+x254)<x255)+x256);

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x263 = INT8_MAX;

	t51 = (((x261+x262)<x263)+x264);

	if (t51 != 409) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x266 = 2768449865406503045LLU;
	static int32_t x267 = -3411561;
	volatile int32_t t52 = 206;

	t52 = (((x265+x266)<x267)+x268);

	if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x269 = -1880355;
	int8_t x270 = INT8_MIN;
	int32_t x271 = -1;
	int32_t x272 = INT32_MIN;
	int32_t t53 = 11;

	t53 = (((x269+x270)<x271)+x272);

	if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x273 = UINT8_MAX;
	volatile int8_t x274 = INT8_MIN;
	int16_t x275 = 3806;
	static uint8_t x276 = UINT8_MAX;

	t54 = (((x273+x274)<x275)+x276);

	if (t54 != 256) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x277 = -5;
	volatile int64_t x279 = INT64_MAX;
	int8_t x280 = INT8_MAX;
	volatile int32_t t55 = 26486172;

	t55 = (((x277+x278)<x279)+x280);

	if (t55 != 128) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x281 = INT32_MIN;
	volatile uint8_t x282 = 0U;
	int16_t x283 = 138;
	int64_t x284 = INT64_MIN;
	static volatile int64_t t56 = -70LL;

	t56 = (((x281+x282)<x283)+x284);

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x285 = 525808U;
	uint32_t x286 = 1U;
	int64_t x287 = INT64_MAX;
	uint8_t x288 = 15U;
	int32_t t57 = 4286230;

	t57 = (((x285+x286)<x287)+x288);

	if (t57 != 16) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x290 = INT16_MIN;
	int32_t x292 = INT32_MIN;
	int32_t t58 = INT32_MIN;

	t58 = (((x289+x290)<x291)+x292);

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x293 = INT8_MIN;
	uint32_t x294 = UINT32_MAX;
	int16_t x295 = -3;
	static int32_t x296 = -1;
	volatile int32_t t59 = -22387818;

	t59 = (((x293+x294)<x295)+x296);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x297 = INT16_MAX;
	volatile int16_t x298 = INT16_MIN;
	uint16_t x300 = 27U;
	static int32_t t60 = 12;

	t60 = (((x297+x298)<x299)+x300);

	if (t60 != 27) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x301 = -2LL;
	uint16_t x302 = UINT16_MAX;
	int8_t x303 = -1;

	t61 = (((x301+x302)<x303)+x304);

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x305 = INT64_MAX;
	volatile int64_t x306 = INT64_MIN;
	volatile int8_t x307 = 1;
	volatile uint8_t x308 = UINT8_MAX;
	volatile int32_t t62 = 28;

	t62 = (((x305+x306)<x307)+x308);

	if (t62 != 256) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x309 = -1;
	int16_t x310 = INT16_MAX;
	static int16_t x311 = 35;
	int8_t x312 = INT8_MAX;
	volatile int32_t t63 = -1;

	t63 = (((x309+x310)<x311)+x312);

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x313 = 379641919078LLU;
	int16_t x314 = 1;
	int16_t x315 = INT16_MIN;
	volatile int16_t x316 = INT16_MIN;
	int32_t t64 = 308060;

	t64 = (((x313+x314)<x315)+x316);

	if (t64 != -32767) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x321 = 1038338U;
	int8_t x322 = 7;
	int32_t x323 = INT32_MIN;
	static int16_t x324 = INT16_MAX;

	t65 = (((x321+x322)<x323)+x324);

	if (t65 != 32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x325 = UINT16_MAX;
	int16_t x326 = -1;
	int16_t x327 = 71;
	uint64_t x328 = 896556305023LLU;
	volatile uint64_t t66 = 10589262539LLU;

	t66 = (((x325+x326)<x327)+x328);

	if (t66 != 896556305023LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x329 = -1;
	int64_t x330 = INT64_MAX;
	uint8_t x331 = 3U;
	int8_t x332 = 0;
	static volatile int32_t t67 = -200;

	t67 = (((x329+x330)<x331)+x332);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x333 = -464112677388147613LL;
	uint32_t x334 = 31529U;
	static int8_t x335 = INT8_MAX;
	volatile int16_t x336 = INT16_MIN;
	volatile int32_t t68 = 398;

	t68 = (((x333+x334)<x335)+x336);

	if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x337 = UINT8_MAX;
	static uint8_t x338 = 5U;
	int16_t x339 = -4657;
	int64_t x340 = 79675268102LL;
	int64_t t69 = -1332LL;

	t69 = (((x337+x338)<x339)+x340);

	if (t69 != 79675268102LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x341 = INT32_MIN;
	static uint8_t x343 = 1U;
	static int64_t x344 = -203267654217151LL;
	volatile int64_t t70 = -13739402LL;

	t70 = (((x341+x342)<x343)+x344);

	if (t70 != -203267654217150LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t t71 = 459;

	t71 = (((x345+x346)<x347)+x348);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x349 = -666130116;
	volatile int64_t x350 = 175816491160549LL;
	uint16_t x351 = UINT16_MAX;
	static int64_t x352 = INT64_MIN;

	t72 = (((x349+x350)<x351)+x352);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x353 = 3U;
	int32_t x355 = INT32_MAX;
	uint16_t x356 = 2017U;
	volatile int32_t t73 = -113377917;

	t73 = (((x353+x354)<x355)+x356);

	if (t73 != 2018) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x357 = UINT8_MAX;
	static uint8_t x359 = 105U;
	static int64_t x360 = INT64_MAX;
	static int64_t t74 = INT64_MAX;

	t74 = (((x357+x358)<x359)+x360);

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x361 = 3U;
	static int8_t x362 = 6;
	int16_t x363 = 1195;
	volatile uint64_t t75 = 436850376LLU;

	t75 = (((x361+x362)<x363)+x364);

	if (t75 != 622441459341788LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x365 = 2U;
	volatile int16_t x366 = INT16_MAX;
	uint16_t x367 = 133U;
	uint16_t x368 = 39U;
	volatile int32_t t76 = -2;

	t76 = (((x365+x366)<x367)+x368);

	if (t76 != 39) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x369 = 696303633182255470LLU;
	int8_t x370 = -28;
	uint8_t x371 = UINT8_MAX;
	int64_t t77 = INT64_MAX;

	t77 = (((x369+x370)<x371)+x372);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x377 = 55961;
	static int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MAX;
	int64_t x380 = INT64_MIN;
	volatile int64_t t78 = 918015LL;

	t78 = (((x377+x378)<x379)+x380);

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x381 = -1;
	static volatile uint32_t x382 = 59762U;
	int32_t x383 = INT32_MIN;
	volatile int32_t x384 = INT32_MIN;
	int32_t t79 = 0;

	t79 = (((x381+x382)<x383)+x384);

	if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x385 = 609U;
	int8_t x386 = -1;
	volatile int8_t x387 = 48;
	volatile int16_t x388 = INT16_MIN;
	int32_t t80 = -13;

	t80 = (((x385+x386)<x387)+x388);

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x389 = -1;
	volatile uint8_t x390 = UINT8_MAX;
	uint8_t x391 = 90U;
	uint32_t x392 = 60U;
	static volatile uint32_t t81 = 630039U;

	t81 = (((x389+x390)<x391)+x392);

	if (t81 != 60U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x393 = -1;
	int16_t x394 = INT16_MAX;
	static int16_t x395 = INT16_MAX;
	volatile int8_t x396 = -10;
	int32_t t82 = 160;

	t82 = (((x393+x394)<x395)+x396);

	if (t82 != -9) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x402 = 43LLU;
	int16_t x404 = -81;
	int32_t t83 = -10699754;

	t83 = (((x401+x402)<x403)+x404);

	if (t83 != -80) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x405 = 1U;
	int64_t x406 = -1LL;
	static volatile int8_t x407 = INT8_MIN;
	int32_t x408 = INT32_MAX;
	static int32_t t84 = INT32_MAX;

	t84 = (((x405+x406)<x407)+x408);

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x413 = 6097525873208962293LLU;
	static int64_t x414 = 1856LL;
	volatile uint8_t x415 = 2U;
	int32_t t85 = INT32_MIN;

	t85 = (((x413+x414)<x415)+x416);

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x417 = -16248829018220LL;
	int64_t x418 = INT64_MAX;
	int32_t x420 = INT32_MAX;

	t86 = (((x417+x418)<x419)+x420);

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x430 = 13U;
	volatile uint32_t x432 = 22292U;
	uint32_t t87 = 5623U;

	t87 = (((x429+x430)<x431)+x432);

	if (t87 != 22293U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x437 = -1LL;
	int16_t x438 = 235;
	static int8_t x439 = INT8_MAX;
	int64_t x440 = 234465LL;
	volatile int64_t t88 = 1276177LL;

	t88 = (((x437+x438)<x439)+x440);

	if (t88 != 234465LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x441 = 3992U;
	uint64_t x442 = UINT64_MAX;
	static volatile int8_t x443 = 5;
	static int16_t x444 = INT16_MAX;
	volatile int32_t t89 = -1362580;

	t89 = (((x441+x442)<x443)+x444);

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x445 = INT8_MAX;
	int32_t x447 = INT32_MIN;
	int8_t x448 = -1;
	int32_t t90 = 597925914;

	t90 = (((x445+x446)<x447)+x448);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x449 = INT32_MAX;
	int16_t x450 = INT16_MIN;
	static int32_t x451 = 760591;
	int8_t x452 = -1;

	t91 = (((x449+x450)<x451)+x452);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x457 = INT16_MIN;
	int32_t x458 = INT32_MAX;
	static volatile int16_t x459 = INT16_MIN;
	volatile int32_t t92 = 7720160;

	t92 = (((x457+x458)<x459)+x460);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x461 = -519247LL;
	int32_t t93 = 1974;

	t93 = (((x461+x462)<x463)+x464);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x469 = INT64_MIN;
	uint64_t x470 = 111094787298824199LLU;
	volatile int16_t x471 = INT16_MIN;
	static int32_t x472 = INT32_MIN;

	t94 = (((x469+x470)<x471)+x472);

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x473 = -1;
	static uint32_t x474 = 1312U;
	static uint16_t x475 = 22U;
	static int16_t x476 = INT16_MAX;
	int32_t t95 = 1035983;

	t95 = (((x473+x474)<x475)+x476);

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x477 = INT64_MIN;
	static uint16_t x479 = 20U;
	volatile uint16_t x480 = 1006U;
	int32_t t96 = -53346;

	t96 = (((x477+x478)<x479)+x480);

	if (t96 != 1007) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x483 = UINT32_MAX;
	int64_t x484 = 7274765065108LL;
	volatile int64_t t97 = -167950358760LL;

	t97 = (((x481+x482)<x483)+x484);

	if (t97 != 7274765065109LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x485 = -22;
	volatile int8_t x486 = -1;
	int16_t x487 = 0;
	volatile int8_t x488 = INT8_MIN;
	int32_t t98 = 39998;

	t98 = (((x485+x486)<x487)+x488);

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x490 = 93109LLU;
	int64_t x491 = INT64_MIN;
	volatile int32_t t99 = -53514593;

	t99 = (((x489+x490)<x491)+x492);

	if (t99 != -455386380) { NG(); } else { ; }
	
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

