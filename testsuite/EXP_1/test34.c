#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x8 = UINT8_MAX;
volatile int32_t x14 = INT32_MIN;
static int16_t x24 = -5;
volatile int32_t t3 = -3191;
int16_t x26 = INT16_MIN;
volatile int32_t t6 = -22;
volatile int32_t t8 = 223912240;
static uint64_t x89 = UINT64_MAX;
int32_t x107 = INT32_MIN;
static volatile int32_t t15 = 43;
uint16_t x112 = 29964U;
int32_t x121 = 90096217;
int16_t x129 = -2;
volatile int32_t t20 = -20135586;
volatile int16_t x133 = INT16_MIN;
uint64_t x136 = 3619697263051LLU;
int16_t x140 = 191;
volatile uint64_t x151 = 261LLU;
volatile int16_t x176 = -1;
volatile int32_t x183 = INT32_MAX;
int16_t x186 = 13053;
volatile uint16_t x187 = UINT16_MAX;
uint64_t x189 = 0LLU;
uint32_t x193 = UINT32_MAX;
volatile uint32_t x196 = UINT32_MAX;
int32_t t31 = 311;
int64_t x224 = -1LL;
uint64_t x225 = 1LLU;
int32_t x230 = -1;
static int8_t x234 = -1;
int8_t x235 = INT8_MAX;
uint64_t x238 = UINT64_MAX;
uint32_t x239 = UINT32_MAX;
int64_t x256 = INT64_MIN;
volatile int16_t x262 = -1;
volatile int32_t t43 = 38;
int16_t x266 = 343;
uint32_t x267 = UINT32_MAX;
int32_t t44 = -53;
int32_t x280 = -4;
int32_t t47 = 127;
int64_t x289 = -28374839991LL;
volatile uint16_t x296 = UINT16_MAX;
static int32_t t49 = -13;
volatile uint16_t x297 = 155U;
int64_t x298 = -4772135118075692LL;
static volatile int32_t t51 = -261592;
uint64_t x325 = 512887LLU;
volatile uint8_t x331 = 0U;
int16_t x337 = INT16_MAX;
uint16_t x342 = UINT16_MAX;
int8_t x351 = INT8_MAX;
int32_t t59 = 6402;
uint64_t x365 = 355927761372335LLU;
uint32_t x366 = 5U;
static int64_t x379 = INT64_MIN;
int64_t x384 = -1LL;
int32_t t64 = 4950;
static uint32_t x390 = UINT32_MAX;
int8_t x393 = -1;
static uint8_t x394 = 3U;
static volatile int64_t x395 = -1LL;
uint16_t x401 = 0U;
uint16_t x404 = 27743U;
volatile int32_t t67 = 5;
static int32_t x414 = 8;
static int8_t x443 = 0;
int64_t x448 = INT64_MIN;
volatile int32_t t72 = 6882;
volatile uint32_t x450 = UINT32_MAX;
volatile uint16_t x454 = 740U;
uint32_t x456 = UINT32_MAX;
int16_t x460 = 138;
volatile int32_t t76 = 1105919;
uint16_t x466 = 32017U;
uint16_t x468 = 362U;
int32_t x471 = INT32_MIN;
static int32_t x489 = 201594;
int16_t x495 = INT16_MIN;
static int16_t x499 = INT16_MIN;
int16_t x501 = INT16_MIN;
volatile int8_t x512 = INT8_MIN;
static volatile int32_t t86 = 147392;
int16_t x527 = -1;
int32_t t87 = -5508;
static uint64_t x529 = UINT64_MAX;
uint16_t x530 = 102U;
volatile int32_t t90 = 59283137;
volatile int64_t x549 = -1LL;
int32_t t91 = -11587721;
static uint64_t x558 = 12240168LLU;
int32_t t93 = 166;
int64_t x574 = -1LL;
static uint16_t x575 = 0U;
uint8_t x577 = 77U;
int16_t x578 = 1;
uint16_t x584 = 11443U;
int64_t x586 = INT64_MAX;
volatile int8_t x588 = INT8_MIN;
static int32_t x598 = -1;
volatile int8_t x601 = INT8_MIN;
static volatile int32_t t99 = -949;


void f0(void) {
	int32_t x5 = -93612;
	volatile uint64_t x6 = 184271151860731680LLU;
	int16_t x7 = INT16_MAX;
	static int32_t t0 = 1838;

	t0 = (((x5+x6)*x7)==x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = -1;
	int8_t x10 = INT8_MIN;
	uint8_t x11 = 6U;
	static volatile int8_t x12 = -6;
	volatile int32_t t1 = 2;

	t1 = (((x9+x10)*x11)==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x13 = UINT16_MAX;
	uint64_t x15 = 5LLU;
	uint64_t x16 = 3018715LLU;
	int32_t t2 = 1578;

	t2 = (((x13+x14)*x15)==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x21 = -1;
	int64_t x22 = 20637263123685LL;
	uint16_t x23 = UINT16_MAX;

	t3 = (((x21+x22)*x23)==x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x25 = 60469015U;
	static volatile uint32_t x27 = 7U;
	int32_t x28 = INT32_MIN;
	int32_t t4 = 29152;

	t4 = (((x25+x26)*x27)==x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x41 = UINT64_MAX;
	int16_t x42 = INT16_MIN;
	static uint8_t x43 = UINT8_MAX;
	int16_t x44 = INT16_MIN;
	volatile int32_t t5 = -10;

	t5 = (((x41+x42)*x43)==x44);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x45 = 16670U;
	static int8_t x46 = 4;
	volatile uint8_t x47 = 4U;
	static volatile uint8_t x48 = 16U;

	t6 = (((x45+x46)*x47)==x48);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x49 = -187;
	int32_t x50 = -1;
	uint64_t x51 = 7522276860083LLU;
	int32_t x52 = 4;
	int32_t t7 = -532926086;

	t7 = (((x49+x50)*x51)==x52);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = INT8_MIN;
	int8_t x54 = -1;
	int64_t x55 = -1LL;
	int16_t x56 = INT16_MIN;

	t8 = (((x53+x54)*x55)==x56);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x57 = 745;
	int8_t x58 = 13;
	int8_t x59 = INT8_MIN;
	uint32_t x60 = 26U;
	int32_t t9 = 1236060;

	t9 = (((x57+x58)*x59)==x60);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = -1;
	static int16_t x66 = INT16_MAX;
	int8_t x67 = -3;
	uint16_t x68 = UINT16_MAX;
	volatile int32_t t10 = 1;

	t10 = (((x65+x66)*x67)==x68);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x69 = -17020652420678643LL;
	int8_t x70 = INT8_MIN;
	static uint64_t x71 = 1259867710LLU;
	int8_t x72 = -10;
	volatile int32_t t11 = 872101848;

	t11 = (((x69+x70)*x71)==x72);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x81 = 54877060U;
	int8_t x82 = INT8_MIN;
	uint16_t x83 = 0U;
	int8_t x84 = INT8_MIN;
	int32_t t12 = 686;

	t12 = (((x81+x82)*x83)==x84);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x90 = 117;
	int16_t x91 = INT16_MAX;
	int16_t x92 = -1;
	volatile int32_t t13 = 39508164;

	t13 = (((x89+x90)*x91)==x92);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x101 = 18U;
	static int8_t x102 = INT8_MIN;
	static int16_t x103 = -10;
	volatile int64_t x104 = INT64_MAX;
	int32_t t14 = -2445721;

	t14 = (((x101+x102)*x103)==x104);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x105 = UINT8_MAX;
	int64_t x106 = -1LL;
	volatile uint32_t x108 = 106U;

	t15 = (((x105+x106)*x107)==x108);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x109 = -213;
	uint8_t x110 = 61U;
	static uint8_t x111 = 1U;
	int32_t t16 = 20276;

	t16 = (((x109+x110)*x111)==x112);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x117 = UINT8_MAX;
	static volatile int8_t x118 = 0;
	volatile int32_t x119 = -1012854;
	int8_t x120 = 0;
	int32_t t17 = -3107;

	t17 = (((x117+x118)*x119)==x120);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x122 = -2;
	int8_t x123 = 1;
	int16_t x124 = INT16_MIN;
	int32_t t18 = -197339;

	t18 = (((x121+x122)*x123)==x124);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x125 = 6005U;
	uint32_t x126 = 7041635U;
	int32_t x127 = INT32_MIN;
	static uint32_t x128 = UINT32_MAX;
	volatile int32_t t19 = 68;

	t19 = (((x125+x126)*x127)==x128);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x130 = INT8_MIN;
	int64_t x131 = -1LL;
	volatile int32_t x132 = -1;

	t20 = (((x129+x130)*x131)==x132);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x134 = 2580298LLU;
	int16_t x135 = INT16_MIN;
	volatile int32_t t21 = 461897933;

	t21 = (((x133+x134)*x135)==x136);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x137 = INT16_MIN;
	int64_t x138 = -204692665LL;
	uint32_t x139 = 1527769U;
	int32_t t22 = 7;

	t22 = (((x137+x138)*x139)==x140);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x141 = INT8_MIN;
	uint16_t x142 = UINT16_MAX;
	int8_t x143 = INT8_MAX;
	int64_t x144 = INT64_MIN;
	volatile int32_t t23 = 267028365;

	t23 = (((x141+x142)*x143)==x144);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x149 = INT16_MAX;
	volatile int8_t x150 = INT8_MAX;
	static int8_t x152 = INT8_MAX;
	volatile int32_t t24 = 1355922;

	t24 = (((x149+x150)*x151)==x152);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x153 = -4763376;
	volatile uint32_t x154 = 3U;
	int16_t x155 = 1;
	static uint8_t x156 = 7U;
	int32_t t25 = -11098968;

	t25 = (((x153+x154)*x155)==x156);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x161 = -1LL;
	uint8_t x162 = UINT8_MAX;
	int64_t x163 = 12224LL;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t26 = -714058979;

	t26 = (((x161+x162)*x163)==x164);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x173 = -8;
	uint16_t x174 = 1U;
	static int16_t x175 = INT16_MIN;
	int32_t t27 = 357501;

	t27 = (((x173+x174)*x175)==x176);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x181 = 1U;
	uint64_t x182 = 6LLU;
	int8_t x184 = INT8_MIN;
	int32_t t28 = 52;

	t28 = (((x181+x182)*x183)==x184);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x185 = 9204180U;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t29 = 224923473;

	t29 = (((x185+x186)*x187)==x188);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x190 = 88LLU;
	static int64_t x191 = -1LL;
	static int64_t x192 = -14804LL;
	volatile int32_t t30 = -17;

	t30 = (((x189+x190)*x191)==x192);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x194 = -3390851732LL;
	static int32_t x195 = INT32_MAX;

	t31 = (((x193+x194)*x195)==x196);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x197 = -1;
	int64_t x198 = -1LL;
	int32_t x199 = -1;
	uint8_t x200 = 14U;
	int32_t t32 = 126319;

	t32 = (((x197+x198)*x199)==x200);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x201 = 2923195LLU;
	static uint64_t x202 = 41101558LLU;
	uint64_t x203 = 4189472154LLU;
	uint32_t x204 = UINT32_MAX;
	volatile int32_t t33 = 287;

	t33 = (((x201+x202)*x203)==x204);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x209 = 6829206U;
	uint32_t x210 = 61865944U;
	static uint64_t x211 = UINT64_MAX;
	int16_t x212 = INT16_MAX;
	int32_t t34 = 421706;

	t34 = (((x209+x210)*x211)==x212);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x221 = INT8_MIN;
	int64_t x222 = -1LL;
	int8_t x223 = INT8_MIN;
	int32_t t35 = 894738;

	t35 = (((x221+x222)*x223)==x224);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x226 = 5;
	int32_t x227 = -1;
	int8_t x228 = INT8_MIN;
	int32_t t36 = -1072714059;

	t36 = (((x225+x226)*x227)==x228);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x229 = -6;
	uint16_t x231 = UINT16_MAX;
	volatile int8_t x232 = INT8_MIN;
	static volatile int32_t t37 = -44023390;

	t37 = (((x229+x230)*x231)==x232);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x233 = INT8_MIN;
	static int64_t x236 = -1LL;
	static int32_t t38 = 2326;

	t38 = (((x233+x234)*x235)==x236);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x237 = INT32_MIN;
	int32_t x240 = INT32_MIN;
	int32_t t39 = 48;

	t39 = (((x237+x238)*x239)==x240);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x241 = -1;
	uint64_t x242 = 21849532201395LLU;
	int8_t x243 = INT8_MAX;
	volatile int8_t x244 = INT8_MIN;
	volatile int32_t t40 = -708;

	t40 = (((x241+x242)*x243)==x244);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x245 = -37874279LL;
	static int32_t x246 = INT32_MIN;
	uint64_t x247 = 391825228043051793LLU;
	volatile int8_t x248 = -1;
	int32_t t41 = 41;

	t41 = (((x245+x246)*x247)==x248);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x253 = 3U;
	uint16_t x254 = 1U;
	int8_t x255 = INT8_MIN;
	static volatile int32_t t42 = 1827;

	t42 = (((x253+x254)*x255)==x256);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x261 = 205;
	volatile uint16_t x263 = 9153U;
	uint8_t x264 = UINT8_MAX;

	t43 = (((x261+x262)*x263)==x264);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x265 = INT32_MIN;
	int64_t x268 = -91112LL;

	t44 = (((x265+x266)*x267)==x268);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x277 = INT8_MIN;
	volatile uint8_t x278 = 93U;
	static int32_t x279 = -40;
	static volatile int32_t t45 = 4004;

	t45 = (((x277+x278)*x279)==x280);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x281 = UINT64_MAX;
	int8_t x282 = INT8_MIN;
	int16_t x283 = -1;
	static uint32_t x284 = 113U;
	int32_t t46 = -265;

	t46 = (((x281+x282)*x283)==x284);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = INT8_MAX;
	uint16_t x287 = UINT16_MAX;
	static int64_t x288 = INT64_MIN;

	t47 = (((x285+x286)*x287)==x288);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x290 = 66341468LLU;
	int8_t x291 = -1;
	static int16_t x292 = INT16_MIN;
	int32_t t48 = -2942484;

	t48 = (((x289+x290)*x291)==x292);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x293 = UINT64_MAX;
	uint8_t x294 = 47U;
	static int16_t x295 = INT16_MIN;

	t49 = (((x293+x294)*x295)==x296);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x299 = 1;
	int32_t x300 = 5;
	int32_t t50 = 0;

	t50 = (((x297+x298)*x299)==x300);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x309 = UINT16_MAX;
	static uint64_t x310 = 41858243515559LLU;
	volatile int64_t x311 = INT64_MIN;
	int64_t x312 = INT64_MAX;

	t51 = (((x309+x310)*x311)==x312);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x313 = 1LLU;
	uint64_t x314 = 22861LLU;
	volatile int8_t x315 = 1;
	static int32_t x316 = -1;
	int32_t t52 = 21112927;

	t52 = (((x313+x314)*x315)==x316);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x326 = INT32_MIN;
	static int64_t x327 = INT64_MAX;
	int32_t x328 = -1;
	int32_t t53 = 164706;

	t53 = (((x325+x326)*x327)==x328);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x329 = UINT8_MAX;
	int64_t x330 = INT64_MIN;
	int16_t x332 = INT16_MIN;
	volatile int32_t t54 = -64016;

	t54 = (((x329+x330)*x331)==x332);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x333 = 3LL;
	uint64_t x334 = 4065185366662292079LLU;
	int64_t x335 = -1LL;
	int32_t x336 = INT32_MAX;
	int32_t t55 = -2;

	t55 = (((x333+x334)*x335)==x336);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x338 = UINT8_MAX;
	static volatile uint32_t x339 = UINT32_MAX;
	volatile int32_t x340 = INT32_MIN;
	int32_t t56 = 401;

	t56 = (((x337+x338)*x339)==x340);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x341 = UINT64_MAX;
	static uint32_t x343 = UINT32_MAX;
	volatile int64_t x344 = INT64_MAX;
	int32_t t57 = -9;

	t57 = (((x341+x342)*x343)==x344);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x349 = -1;
	uint8_t x350 = 0U;
	uint64_t x352 = 174851LLU;
	static int32_t t58 = 1515502;

	t58 = (((x349+x350)*x351)==x352);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x353 = UINT64_MAX;
	static int32_t x354 = 553740;
	uint16_t x355 = 27364U;
	int8_t x356 = -1;

	t59 = (((x353+x354)*x355)==x356);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x367 = -1786788LL;
	uint64_t x368 = UINT64_MAX;
	int32_t t60 = 9096126;

	t60 = (((x365+x366)*x367)==x368);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x373 = -5937;
	int32_t x374 = -1;
	static int8_t x375 = 3;
	uint64_t x376 = UINT64_MAX;
	int32_t t61 = -1509549;

	t61 = (((x373+x374)*x375)==x376);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x377 = 243467704U;
	uint64_t x378 = 13022683854LLU;
	volatile uint16_t x380 = 890U;
	volatile int32_t t62 = 3865;

	t62 = (((x377+x378)*x379)==x380);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x381 = INT8_MAX;
	uint32_t x382 = 983U;
	uint32_t x383 = 118476646U;
	volatile int32_t t63 = -23328;

	t63 = (((x381+x382)*x383)==x384);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x385 = -1;
	uint32_t x386 = 21744738U;
	volatile int8_t x387 = INT8_MIN;
	static volatile int32_t x388 = INT32_MIN;

	t64 = (((x385+x386)*x387)==x388);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x389 = 1U;
	static uint64_t x391 = UINT64_MAX;
	static int8_t x392 = 1;
	int32_t t65 = 12955772;

	t65 = (((x389+x390)*x391)==x392);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t66 = 135420;

	t66 = (((x393+x394)*x395)==x396);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x402 = INT16_MIN;
	uint16_t x403 = 0U;

	t67 = (((x401+x402)*x403)==x404);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x413 = INT32_MIN;
	volatile int64_t x415 = -1LL;
	int64_t x416 = INT64_MAX;
	volatile int32_t t68 = -1164;

	t68 = (((x413+x414)*x415)==x416);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x417 = 19U;
	int8_t x418 = INT8_MIN;
	volatile int16_t x419 = 1;
	int64_t x420 = INT64_MIN;
	int32_t t69 = -435362449;

	t69 = (((x417+x418)*x419)==x420);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x425 = INT16_MAX;
	static uint16_t x426 = UINT16_MAX;
	uint16_t x427 = 168U;
	static volatile uint32_t x428 = 36U;
	static volatile int32_t t70 = -19;

	t70 = (((x425+x426)*x427)==x428);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x441 = 2U;
	uint16_t x442 = 122U;
	uint8_t x444 = 17U;
	int32_t t71 = 4707183;

	t71 = (((x441+x442)*x443)==x444);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x445 = INT32_MIN;
	uint8_t x446 = 2U;
	uint32_t x447 = 5033300U;

	t72 = (((x445+x446)*x447)==x448);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x449 = INT32_MAX;
	int8_t x451 = -1;
	int8_t x452 = INT8_MAX;
	volatile int32_t t73 = -51947;

	t73 = (((x449+x450)*x451)==x452);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x453 = 123292067704403287LLU;
	int64_t x455 = INT64_MAX;
	volatile int32_t t74 = 787494;

	t74 = (((x453+x454)*x455)==x456);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x457 = INT32_MIN;
	volatile int64_t x458 = 11638875LL;
	volatile int32_t x459 = INT32_MIN;
	int32_t t75 = 7;

	t75 = (((x457+x458)*x459)==x460);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x461 = -1;
	int16_t x462 = INT16_MIN;
	int16_t x463 = -7165;
	volatile uint8_t x464 = UINT8_MAX;

	t76 = (((x461+x462)*x463)==x464);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x465 = UINT32_MAX;
	uint16_t x467 = UINT16_MAX;
	int32_t t77 = 0;

	t77 = (((x465+x466)*x467)==x468);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x469 = -1;
	uint64_t x470 = UINT64_MAX;
	int64_t x472 = INT64_MIN;
	int32_t t78 = 15;

	t78 = (((x469+x470)*x471)==x472);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x477 = -1;
	static int32_t x478 = INT32_MAX;
	int16_t x479 = -1;
	volatile int8_t x480 = -5;
	int32_t t79 = 0;

	t79 = (((x477+x478)*x479)==x480);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x490 = -1LL;
	uint16_t x491 = 28U;
	static int64_t x492 = INT64_MIN;
	volatile int32_t t80 = -6126;

	t80 = (((x489+x490)*x491)==x492);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x493 = -1;
	volatile int64_t x494 = -31359341LL;
	uint32_t x496 = UINT32_MAX;
	volatile int32_t t81 = 29169;

	t81 = (((x493+x494)*x495)==x496);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x497 = 29U;
	static volatile uint64_t x498 = UINT64_MAX;
	volatile uint16_t x500 = 46U;
	volatile int32_t t82 = -208450609;

	t82 = (((x497+x498)*x499)==x500);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x502 = INT16_MAX;
	volatile uint8_t x503 = UINT8_MAX;
	int16_t x504 = INT16_MAX;
	static volatile int32_t t83 = -890420746;

	t83 = (((x501+x502)*x503)==x504);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x505 = UINT16_MAX;
	static uint32_t x506 = UINT32_MAX;
	int32_t x507 = -1;
	int64_t x508 = INT64_MIN;
	static int32_t t84 = -4391623;

	t84 = (((x505+x506)*x507)==x508);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x509 = 675140217957LL;
	int16_t x510 = INT16_MIN;
	int16_t x511 = INT16_MAX;
	volatile int32_t t85 = 269383467;

	t85 = (((x509+x510)*x511)==x512);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x517 = 14580LLU;
	volatile uint8_t x518 = UINT8_MAX;
	static int16_t x519 = -1;
	volatile int16_t x520 = -1;

	t86 = (((x517+x518)*x519)==x520);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x525 = UINT32_MAX;
	int8_t x526 = INT8_MAX;
	int32_t x528 = INT32_MIN;

	t87 = (((x525+x526)*x527)==x528);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x531 = 16;
	static int64_t x532 = -1LL;
	int32_t t88 = 0;

	t88 = (((x529+x530)*x531)==x532);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x533 = 97U;
	static uint8_t x534 = 60U;
	volatile int16_t x535 = -1;
	volatile int8_t x536 = -1;
	int32_t t89 = -175187;

	t89 = (((x533+x534)*x535)==x536);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x537 = 4037;
	volatile int32_t x538 = -1;
	static uint32_t x539 = UINT32_MAX;
	int64_t x540 = -1LL;

	t90 = (((x537+x538)*x539)==x540);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x550 = 2720LLU;
	static int64_t x551 = 2027202673651623LL;
	uint64_t x552 = 170421356760304LLU;

	t91 = (((x549+x550)*x551)==x552);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x557 = -1;
	static int64_t x559 = INT64_MAX;
	int8_t x560 = -1;
	volatile int32_t t92 = -899566697;

	t92 = (((x557+x558)*x559)==x560);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x569 = INT32_MAX;
	volatile uint64_t x570 = UINT64_MAX;
	volatile int16_t x571 = INT16_MIN;
	int64_t x572 = -1LL;

	t93 = (((x569+x570)*x571)==x572);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x573 = 2LL;
	static uint64_t x576 = 146612877LLU;
	volatile int32_t t94 = -393011160;

	t94 = (((x573+x574)*x575)==x576);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x579 = UINT16_MAX;
	volatile int32_t x580 = INT32_MAX;
	volatile int32_t t95 = -182301383;

	t95 = (((x577+x578)*x579)==x580);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x581 = UINT64_MAX;
	static uint8_t x582 = 21U;
	int8_t x583 = 3;
	volatile int32_t t96 = 2999261;

	t96 = (((x581+x582)*x583)==x584);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x585 = 73LLU;
	int8_t x587 = 11;
	int32_t t97 = -35;

	t97 = (((x585+x586)*x587)==x588);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x597 = UINT16_MAX;
	int8_t x599 = -1;
	int8_t x600 = -1;
	int32_t t98 = 86165;

	t98 = (((x597+x598)*x599)==x600);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x602 = INT32_MAX;
	static int32_t x603 = -1;
	volatile int16_t x604 = INT16_MIN;

	t99 = (((x601+x602)*x603)==x604);

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

