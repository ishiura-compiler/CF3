#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 30;
uint8_t x10 = 0U;
int64_t x44 = 264725119833771LL;
uint16_t x46 = 8U;
int64_t t6 = -88360LL;
int64_t x53 = -3LL;
static int32_t x54 = INT32_MIN;
volatile int64_t t10 = 0LL;
static uint64_t x69 = 1193102821966489843LLU;
int16_t x70 = INT16_MAX;
volatile uint64_t t11 = 67LLU;
static volatile uint64_t x74 = 13360930409LLU;
int16_t x75 = -3741;
volatile uint64_t t12 = 1127759738LLU;
volatile uint32_t x83 = 279U;
volatile int16_t x95 = -1;
uint64_t x96 = 241188758687450LLU;
static uint64_t t16 = 944010564380314LLU;
int16_t x97 = -1;
uint8_t x99 = 15U;
uint16_t x101 = 16379U;
uint16_t x104 = 426U;
static uint64_t t19 = 1980144694656LLU;
uint16_t x109 = 30U;
static int32_t t20 = 3005;
uint8_t x113 = UINT8_MAX;
volatile uint64_t t23 = 2091887832LLU;
uint64_t x135 = UINT64_MAX;
static volatile uint64_t t24 = 6927207272LLU;
volatile int16_t x143 = INT16_MAX;
uint16_t x144 = 314U;
int32_t x152 = INT32_MIN;
int32_t t28 = 1011655;
volatile uint8_t x153 = 64U;
static uint16_t x156 = 0U;
int64_t x159 = INT64_MAX;
static int64_t x162 = -1LL;
int64_t x169 = 389503LL;
uint16_t x172 = UINT16_MAX;
int8_t x183 = INT8_MAX;
int64_t x186 = INT64_MIN;
int32_t x188 = INT32_MAX;
int16_t x191 = -6763;
static int16_t x192 = INT16_MAX;
static volatile uint32_t t38 = 335552U;
uint16_t x209 = 154U;
uint64_t x210 = 81433825692LLU;
uint64_t t39 = 27149122LLU;
int32_t x237 = -1741;
int64_t x241 = -1LL;
volatile int16_t x242 = INT16_MAX;
int32_t x244 = INT32_MAX;
static int64_t t41 = 204136396747544LL;
int64_t x250 = -1LL;
int64_t x261 = -1LL;
static uint32_t x263 = UINT32_MAX;
volatile int64_t t44 = -217LL;
int16_t x266 = INT16_MIN;
volatile uint64_t t46 = 26433686971LLU;
static int8_t x278 = -1;
uint64_t x288 = 6300067956916LLU;
uint16_t x290 = 4924U;
uint16_t x291 = UINT16_MAX;
volatile int16_t x292 = INT16_MIN;
static int8_t x300 = INT8_MIN;
int8_t x303 = INT8_MIN;
int64_t x309 = -1LL;
volatile int64_t t55 = 2863LL;
static uint64_t x322 = 337257LLU;
uint8_t x324 = 2U;
uint64_t t57 = 15529282993698363LLU;
int64_t x331 = INT64_MIN;
int8_t x335 = INT8_MAX;
static int16_t x342 = INT16_MIN;
uint16_t x346 = 215U;
int32_t t61 = 522396;
volatile int16_t x352 = INT16_MIN;
uint64_t x353 = 246698623LLU;
int64_t x355 = -3349LL;
int64_t x359 = INT64_MAX;
static volatile int64_t t64 = 34397188959505LL;
volatile uint32_t t65 = 274U;
static volatile int16_t x367 = INT16_MIN;
volatile int32_t t66 = -961279;
volatile int32_t t67 = 347;
volatile uint64_t x375 = 341795759547304LLU;
volatile uint64_t t68 = 103LLU;
volatile int64_t t72 = -1258242455880LL;
uint8_t x413 = UINT8_MAX;
uint32_t x418 = 318520964U;
volatile uint16_t x435 = UINT16_MAX;
volatile uint32_t t77 = 62585U;
uint64_t x438 = UINT64_MAX;
uint64_t x439 = 70328651701381580LLU;
uint64_t x451 = 423LLU;
static uint64_t x452 = 3059463760LLU;
static volatile uint64_t t80 = 397722LLU;
int16_t x477 = -1;
uint8_t x479 = 16U;
volatile int64_t x488 = 22393048124LL;
volatile uint64_t t84 = 38840700LLU;
static volatile uint32_t x497 = UINT32_MAX;
volatile int8_t x498 = INT8_MIN;
static int8_t x504 = -52;
uint64_t t89 = 20818388LLU;
volatile int64_t x516 = INT64_MAX;
int64_t x521 = INT64_MIN;
static uint64_t x522 = 367LLU;
int32_t x527 = 3436;
static int64_t t94 = 322583496111126004LL;
static int64_t x547 = 52LL;
static uint32_t x568 = UINT32_MAX;
static int64_t t96 = -4507909001808977318LL;
uint8_t x570 = 26U;
static int64_t x572 = INT64_MIN;
volatile int32_t t98 = -17682840;


void f0(void) {
	static int16_t x5 = -3;
	int8_t x6 = INT8_MAX;
	volatile int16_t x7 = INT16_MAX;
	static volatile int8_t x8 = INT8_MAX;

	t0 = (((x5*x6)/x7)&x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	volatile int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MAX;
	int32_t t1 = 0;

	t1 = (((x9*x10)/x11)&x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = 57;
	int32_t x22 = -614160;
	uint64_t x23 = 3927001LLU;
	int8_t x24 = 2;
	uint64_t t2 = 20603657LLU;

	t2 = (((x21*x22)/x23)&x24);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x25 = 1U;
	uint16_t x26 = UINT16_MAX;
	int32_t x27 = INT32_MIN;
	static uint32_t x28 = 212771U;
	static uint32_t t3 = 248U;

	t3 = (((x25*x26)/x27)&x28);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x33 = -188487195271LL;
	static int8_t x34 = INT8_MAX;
	int32_t x35 = INT32_MIN;
	static int16_t x36 = -96;
	int64_t t4 = -518989782LL;

	t4 = (((x33*x34)/x35)&x36);

	if (t4 != 11136LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x41 = 1U;
	int8_t x42 = -47;
	volatile int64_t x43 = -211828418440LL;
	static volatile int64_t t5 = 299944024861832426LL;

	t5 = (((x41*x42)/x43)&x44);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = INT8_MIN;
	int64_t x47 = 2241861LL;
	int32_t x48 = INT32_MAX;

	t6 = (((x45*x46)/x47)&x48);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x49 = 1832;
	int32_t x50 = -58;
	volatile uint64_t x51 = 74LLU;
	static uint16_t x52 = 2U;
	volatile uint64_t t7 = 45683154895LLU;

	t7 = (((x49*x50)/x51)&x52);

	if (t7 != 2LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x55 = INT64_MIN;
	int64_t x56 = 33756655731607161LL;
	volatile int64_t t8 = 241985LL;

	t8 = (((x53*x54)/x55)&x56);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x57 = 8968U;
	static uint64_t x58 = 3953972703891LLU;
	int16_t x59 = INT16_MIN;
	volatile int8_t x60 = -1;
	uint64_t t9 = 11250LLU;

	t9 = (((x57*x58)/x59)&x60);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x65 = 46688942U;
	int32_t x66 = -1;
	volatile uint16_t x67 = UINT16_MAX;
	int64_t x68 = INT64_MIN;

	t10 = (((x65*x66)/x67)&x68);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x71 = INT64_MIN;
	int32_t x72 = -1;

	t11 = (((x69*x70)/x71)&x72);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x73 = 3664064092488152LL;
	static int32_t x76 = 78401820;

	t12 = (((x73*x74)/x75)&x76);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = -1;
	uint8_t x78 = 41U;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = INT16_MAX;
	volatile uint32_t t13 = 10U;

	t13 = (((x77*x78)/x79)&x80);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x81 = 1144U;
	uint8_t x82 = 4U;
	static uint8_t x84 = 8U;
	volatile uint32_t t14 = 1453774U;

	t14 = (((x81*x82)/x83)&x84);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x89 = INT8_MIN;
	int64_t x90 = -1LL;
	uint16_t x91 = 251U;
	uint8_t x92 = 56U;
	int64_t t15 = -4440LL;

	t15 = (((x89*x90)/x91)&x92);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x93 = INT8_MIN;
	static int32_t x94 = 244226;

	t16 = (((x93*x94)/x95)&x96);

	if (t16 != 4784128LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x98 = -3;
	int64_t x100 = -11078992253732LL;
	volatile int64_t t17 = 0LL;

	t17 = (((x97*x98)/x99)&x100);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x102 = 1U;
	uint8_t x103 = 37U;
	static int32_t t18 = -446;

	t18 = (((x101*x102)/x103)&x104);

	if (t18 != 426) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x105 = UINT64_MAX;
	volatile uint16_t x106 = UINT16_MAX;
	volatile int16_t x107 = INT16_MIN;
	static uint8_t x108 = 0U;

	t19 = (((x105*x106)/x107)&x108);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x110 = 43U;
	int32_t x111 = INT32_MAX;
	int32_t x112 = INT32_MIN;

	t20 = (((x109*x110)/x111)&x112);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x114 = 55416;
	int8_t x115 = INT8_MIN;
	uint64_t x116 = UINT64_MAX;
	volatile uint64_t t21 = 26141806915LLU;

	t21 = (((x113*x114)/x115)&x116);

	if (t21 != 18446744073709441217LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x125 = INT16_MAX;
	uint64_t x126 = UINT64_MAX;
	uint32_t x127 = UINT32_MAX;
	uint32_t x128 = 11082U;
	volatile uint64_t t22 = 48686138LLU;

	t22 = (((x125*x126)/x127)&x128);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x129 = 0U;
	int32_t x130 = -1;
	uint32_t x131 = 6560661U;
	static uint64_t x132 = 374446332830873430LLU;

	t23 = (((x129*x130)/x131)&x132);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x133 = 5U;
	int8_t x134 = INT8_MAX;
	static int32_t x136 = INT32_MIN;

	t24 = (((x133*x134)/x135)&x136);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x137 = 0U;
	static int64_t x138 = INT64_MAX;
	uint32_t x139 = 2910U;
	volatile int32_t x140 = INT32_MAX;
	volatile int64_t t25 = -16380881723LL;

	t25 = (((x137*x138)/x139)&x140);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = INT16_MAX;
	volatile uint32_t x142 = UINT32_MAX;
	uint32_t t26 = 62840873U;

	t26 = (((x141*x142)/x143)&x144);

	if (t26 != 2U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = INT16_MIN;
	volatile int8_t x146 = 55;
	int32_t x147 = 3;
	static int16_t x148 = 43;
	volatile int32_t t27 = -97;

	t27 = (((x145*x146)/x147)&x148);

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x149 = INT8_MIN;
	static int16_t x150 = INT16_MAX;
	volatile int16_t x151 = INT16_MIN;

	t28 = (((x149*x150)/x151)&x152);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x154 = 797178652U;
	int8_t x155 = -1;
	uint32_t t29 = 59741U;

	t29 = (((x153*x154)/x155)&x156);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x157 = 95653839655LL;
	static uint8_t x158 = 74U;
	static uint64_t x160 = 5507065728LLU;
	volatile uint64_t t30 = 14LLU;

	t30 = (((x157*x158)/x159)&x160);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = INT8_MIN;
	int16_t x163 = -2648;
	uint16_t x164 = 0U;
	int64_t t31 = 111267LL;

	t31 = (((x161*x162)/x163)&x164);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x165 = 5U;
	int8_t x166 = -1;
	volatile uint64_t x167 = 21051258LLU;
	int64_t x168 = INT64_MAX;
	volatile uint64_t t32 = 2724767976087LLU;

	t32 = (((x165*x166)/x167)&x168);

	if (t32 != 876277516227LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x170 = 11U;
	static volatile int16_t x171 = -1;
	volatile int64_t t33 = -947LL;

	t33 = (((x169*x170)/x171)&x172);

	if (t33 != 40843LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x181 = UINT32_MAX;
	volatile uint16_t x182 = UINT16_MAX;
	volatile int16_t x184 = 1;
	uint32_t t34 = 772546U;

	t34 = (((x181*x182)/x183)&x184);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x185 = 34LLU;
	int32_t x187 = INT32_MIN;
	static uint64_t t35 = 59401861711LLU;

	t35 = (((x185*x186)/x187)&x188);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x189 = 264404U;
	int16_t x190 = -1370;
	uint32_t t36 = 125675803U;

	t36 = (((x189*x190)/x191)&x192);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x193 = -1LL;
	int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MIN;
	int8_t x196 = -1;
	volatile int64_t t37 = -422LL;

	t37 = (((x193*x194)/x195)&x196);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x201 = 1;
	uint16_t x202 = 257U;
	uint32_t x203 = 403222780U;
	volatile int32_t x204 = INT32_MIN;

	t38 = (((x201*x202)/x203)&x204);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x211 = INT16_MIN;
	volatile int64_t x212 = -1LL;

	t39 = (((x209*x210)/x211)&x212);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x238 = UINT64_MAX;
	int8_t x239 = INT8_MAX;
	static int8_t x240 = -23;
	volatile uint64_t t40 = 3382270591954353675LLU;

	t40 = (((x237*x238)/x239)&x240);

	if (t40 != 9LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x243 = INT8_MAX;

	t41 = (((x241*x242)/x243)&x244);

	if (t41 != 2147483390LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x245 = 1LL;
	static volatile int16_t x246 = -1;
	int64_t x247 = INT64_MIN;
	int64_t x248 = -1LL;
	int64_t t42 = 93244411656727LL;

	t42 = (((x245*x246)/x247)&x248);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x249 = -6;
	int32_t x251 = -1;
	int8_t x252 = -1;
	volatile int64_t t43 = -136252581478LL;

	t43 = (((x249*x250)/x251)&x252);

	if (t43 != -6LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x262 = -1;
	int64_t x264 = INT64_MAX;

	t44 = (((x261*x262)/x263)&x264);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x265 = INT16_MAX;
	volatile uint64_t x267 = UINT64_MAX;
	volatile int32_t x268 = 5;
	uint64_t t45 = 100571226606LLU;

	t45 = (((x265*x266)/x267)&x268);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x273 = UINT64_MAX;
	int16_t x274 = -1;
	int16_t x275 = INT16_MIN;
	volatile int32_t x276 = INT32_MIN;

	t46 = (((x273*x274)/x275)&x276);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x277 = INT16_MIN;
	int8_t x279 = INT8_MAX;
	int8_t x280 = -1;
	int32_t t47 = 578005365;

	t47 = (((x277*x278)/x279)&x280);

	if (t47 != 258) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x281 = UINT64_MAX;
	int32_t x282 = INT32_MAX;
	int32_t x283 = INT32_MIN;
	static volatile int8_t x284 = 12;
	volatile uint64_t t48 = 85017LLU;

	t48 = (((x281*x282)/x283)&x284);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x285 = UINT8_MAX;
	int8_t x286 = INT8_MAX;
	static volatile int16_t x287 = -1;
	volatile uint64_t t49 = 3857518091204LLU;

	t49 = (((x285*x286)/x287)&x288);

	if (t49 != 6300067954740LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x289 = INT8_MIN;
	int32_t t50 = 1;

	t50 = (((x289*x290)/x291)&x292);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x293 = -1LL;
	int16_t x294 = -1;
	uint16_t x295 = 1U;
	int32_t x296 = INT32_MAX;
	volatile int64_t t51 = 3338LL;

	t51 = (((x293*x294)/x295)&x296);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x297 = -1;
	static uint16_t x298 = UINT16_MAX;
	volatile int64_t x299 = INT64_MAX;
	volatile int64_t t52 = 50485LL;

	t52 = (((x297*x298)/x299)&x300);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x301 = INT32_MIN;
	uint32_t x302 = 4U;
	int16_t x304 = INT16_MIN;
	volatile uint32_t t53 = 126U;

	t53 = (((x301*x302)/x303)&x304);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x310 = 1123341637U;
	int16_t x311 = 6;
	static volatile int64_t x312 = INT64_MIN;
	int64_t t54 = INT64_MIN;

	t54 = (((x309*x310)/x311)&x312);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x313 = 438U;
	volatile uint8_t x314 = UINT8_MAX;
	volatile int16_t x315 = INT16_MIN;
	static int64_t x316 = -1LL;

	t55 = (((x313*x314)/x315)&x316);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x317 = INT8_MIN;
	static int16_t x318 = -1;
	int32_t x319 = INT32_MIN;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t56 = 15694494;

	t56 = (((x317*x318)/x319)&x320);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x321 = 2;
	volatile uint8_t x323 = 30U;

	t57 = (((x321*x322)/x323)&x324);

	if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x329 = 15168547LLU;
	int32_t x330 = 1400;
	int16_t x332 = -1;
	volatile uint64_t t58 = 413605888322846LLU;

	t58 = (((x329*x330)/x331)&x332);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x333 = -1;
	int8_t x334 = -1;
	int16_t x336 = INT16_MAX;
	int32_t t59 = 488973523;

	t59 = (((x333*x334)/x335)&x336);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x341 = UINT64_MAX;
	static int64_t x343 = INT64_MAX;
	volatile int32_t x344 = 100173;
	volatile uint64_t t60 = 3092534575LLU;

	t60 = (((x341*x342)/x343)&x344);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x345 = INT8_MIN;
	int16_t x347 = INT16_MAX;
	uint16_t x348 = 7123U;

	t61 = (((x345*x346)/x347)&x348);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x349 = INT64_MAX;
	volatile int8_t x350 = 0;
	uint32_t x351 = UINT32_MAX;
	static volatile int64_t t62 = 284137950LL;

	t62 = (((x349*x350)/x351)&x352);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x354 = 52555077U;
	uint16_t x356 = 50U;
	volatile uint64_t t63 = 32727736700LLU;

	t63 = (((x353*x354)/x355)&x356);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x357 = -1;
	uint32_t x358 = 36421750U;
	int32_t x360 = -1;

	t64 = (((x357*x358)/x359)&x360);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x361 = 15;
	static int8_t x362 = INT8_MAX;
	uint32_t x363 = 449125U;
	int8_t x364 = INT8_MIN;

	t65 = (((x361*x362)/x363)&x364);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x365 = UINT16_MAX;
	int16_t x366 = INT16_MIN;
	int32_t x368 = INT32_MAX;

	t66 = (((x365*x366)/x367)&x368);

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = -1;
	static int32_t x371 = INT32_MIN;
	int8_t x372 = INT8_MIN;

	t67 = (((x369*x370)/x371)&x372);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x373 = 2309;
	uint32_t x374 = 0U;
	uint8_t x376 = 5U;

	t68 = (((x373*x374)/x375)&x376);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x382 = INT16_MIN;
	static int16_t x383 = 48;
	int8_t x384 = INT8_MIN;
	static volatile uint64_t t69 = 705LLU;

	t69 = (((x381*x382)/x383)&x384);

	if (t69 != 640LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x397 = INT16_MAX;
	uint8_t x398 = 0U;
	int16_t x399 = INT16_MIN;
	uint8_t x400 = 3U;
	int32_t t70 = -7162896;

	t70 = (((x397*x398)/x399)&x400);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x401 = 1U;
	uint16_t x402 = 94U;
	int8_t x403 = -1;
	uint32_t x404 = UINT32_MAX;
	static uint32_t t71 = 9378578U;

	t71 = (((x401*x402)/x403)&x404);

	if (t71 != 4294967202U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x405 = INT8_MIN;
	static int8_t x406 = INT8_MAX;
	volatile int64_t x407 = INT64_MAX;
	int8_t x408 = -13;

	t72 = (((x405*x406)/x407)&x408);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x414 = 381;
	int16_t x415 = -596;
	int16_t x416 = INT16_MAX;
	int32_t t73 = -117324;

	t73 = (((x413*x414)/x415)&x416);

	if (t73 != 32605) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x417 = 51LLU;
	static int64_t x419 = -1LL;
	int8_t x420 = -10;
	uint64_t t74 = 721468LLU;

	t74 = (((x417*x418)/x419)&x420);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x425 = 186U;
	uint32_t x426 = 572497U;
	volatile uint64_t x427 = 67050125208834LLU;
	static int64_t x428 = INT64_MIN;
	uint64_t t75 = 1622LLU;

	t75 = (((x425*x426)/x427)&x428);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x429 = 63U;
	uint8_t x430 = 3U;
	int32_t x431 = 2625486;
	uint64_t x432 = 7110578LLU;
	uint64_t t76 = 465773LLU;

	t76 = (((x429*x430)/x431)&x432);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x433 = INT32_MIN;
	uint32_t x434 = 772U;
	int32_t x436 = INT32_MAX;

	t77 = (((x433*x434)/x435)&x436);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x437 = INT8_MIN;
	int16_t x440 = INT16_MAX;
	volatile uint64_t t78 = 18717617943591LLU;

	t78 = (((x437*x438)/x439)&x440);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x441 = INT8_MIN;
	uint64_t x442 = 4174457739LLU;
	int32_t x443 = INT32_MIN;
	uint64_t x444 = 13169696LLU;
	volatile uint64_t t79 = 3047954777043669LLU;

	t79 = (((x441*x442)/x443)&x444);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x449 = UINT16_MAX;
	int64_t x450 = -1LL;

	t80 = (((x449*x450)/x451)&x452);

	if (t80 != 3025737216LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x461 = -1;
	int8_t x462 = -1;
	int8_t x463 = -1;
	int64_t x464 = INT64_MAX;
	int64_t t81 = INT64_MAX;

	t81 = (((x461*x462)/x463)&x464);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x478 = 2212;
	int32_t x480 = -213;
	static int32_t t82 = -76727;

	t82 = (((x477*x478)/x479)&x480);

	if (t82 != -222) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x481 = 1016;
	volatile int8_t x482 = INT8_MIN;
	volatile int32_t x483 = INT32_MIN;
	int64_t x484 = -648588180756LL;
	volatile int64_t t83 = 2286996LL;

	t83 = (((x481*x482)/x483)&x484);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x485 = UINT64_MAX;
	int16_t x486 = 28;
	int64_t x487 = -1LL;

	t84 = (((x485*x486)/x487)&x488);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x489 = INT8_MIN;
	int8_t x490 = INT8_MAX;
	int8_t x491 = INT8_MIN;
	int32_t x492 = INT32_MAX;
	volatile int32_t t85 = 16104124;

	t85 = (((x489*x490)/x491)&x492);

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x499 = INT32_MIN;
	volatile int8_t x500 = INT8_MIN;
	uint32_t t86 = 8036414U;

	t86 = (((x497*x498)/x499)&x500);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x501 = 13816;
	int16_t x502 = -1;
	volatile int32_t x503 = INT32_MIN;
	static int32_t t87 = -15;

	t87 = (((x501*x502)/x503)&x504);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x505 = 16U;
	int16_t x506 = 0;
	volatile int32_t x507 = INT32_MIN;
	int16_t x508 = INT16_MAX;
	int32_t t88 = -51;

	t88 = (((x505*x506)/x507)&x508);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x509 = -12700;
	uint8_t x510 = UINT8_MAX;
	uint64_t x511 = 4215660528056043LLU;
	int32_t x512 = INT32_MIN;

	t89 = (((x509*x510)/x511)&x512);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x513 = INT8_MIN;
	static int32_t x514 = -1;
	static int64_t x515 = -10763462651504LL;
	int64_t t90 = 1674314LL;

	t90 = (((x513*x514)/x515)&x516);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x517 = 1U;
	uint32_t x518 = 1U;
	volatile uint16_t x519 = 4334U;
	uint16_t x520 = 5671U;
	volatile uint32_t t91 = 61U;

	t91 = (((x517*x518)/x519)&x520);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x523 = INT8_MIN;
	int8_t x524 = INT8_MIN;
	volatile uint64_t t92 = 70664194343050044LLU;

	t92 = (((x521*x522)/x523)&x524);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x525 = INT8_MIN;
	static uint16_t x526 = 231U;
	int32_t x528 = -1;
	volatile int32_t t93 = -619568801;

	t93 = (((x525*x526)/x527)&x528);

	if (t93 != -8) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x533 = UINT16_MAX;
	static int16_t x534 = -11;
	int64_t x535 = -548173LL;
	int64_t x536 = INT64_MIN;

	t94 = (((x533*x534)/x535)&x536);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x545 = 1U;
	int16_t x546 = 11077;
	int64_t x548 = INT64_MIN;
	static int64_t t95 = -6237882654924LL;

	t95 = (((x545*x546)/x547)&x548);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x565 = -4;
	int64_t x566 = 9LL;
	int8_t x567 = -35;

	t96 = (((x565*x566)/x567)&x568);

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x569 = 46U;
	int16_t x571 = INT16_MIN;
	static int64_t t97 = 7924125160219LL;

	t97 = (((x569*x570)/x571)&x572);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x573 = INT16_MAX;
	int8_t x574 = -22;
	int32_t x575 = 1284133;
	uint16_t x576 = 159U;

	t98 = (((x573*x574)/x575)&x576);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x581 = 0;
	volatile uint16_t x582 = 12637U;
	int8_t x583 = INT8_MAX;
	int32_t x584 = INT32_MAX;
	volatile int32_t t99 = -1252;

	t99 = (((x581*x582)/x583)&x584);

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

