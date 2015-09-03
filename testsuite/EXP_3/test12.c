#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 276908703724369613LLU;
int16_t x9 = INT16_MIN;
volatile int64_t x12 = -1LL;
int64_t t2 = 21759046997788541LL;
static int8_t x26 = -1;
uint32_t x27 = 21079816U;
static volatile uint16_t x28 = UINT16_MAX;
int32_t x36 = -13933;
int32_t x60 = -1889;
static volatile int32_t t10 = -1;
volatile uint32_t x70 = 1816681U;
uint32_t t13 = 1789282U;
volatile int64_t x78 = 235413952LL;
int64_t t14 = -414LL;
uint32_t x84 = UINT32_MAX;
static uint8_t x91 = 15U;
static uint8_t x93 = UINT8_MAX;
uint32_t x97 = 9991452U;
uint64_t x99 = 10823095563434LLU;
int8_t x111 = INT8_MIN;
int32_t t20 = 1936;
int16_t x115 = 19;
static int16_t x129 = -1;
int32_t x132 = 12;
int16_t x143 = INT16_MAX;
int32_t x150 = -1;
static int32_t t27 = -28904518;
int16_t x158 = -1;
static volatile int16_t x161 = INT16_MIN;
volatile int32_t t29 = -16;
uint16_t x166 = 11U;
static int64_t x178 = -1LL;
int64_t t32 = -1992873184839538LL;
static volatile int64_t x188 = 466973791119409409LL;
int16_t x193 = INT16_MAX;
static int64_t x196 = -1LL;
static int64_t x198 = 240446LL;
int16_t x216 = INT16_MIN;
int64_t x218 = INT64_MAX;
static int64_t x224 = -1LL;
volatile int64_t t45 = -26119270LL;
uint8_t x237 = 26U;
int16_t x245 = -1;
int8_t x247 = INT8_MAX;
static int8_t x248 = -1;
int64_t t51 = -111147359205546LL;
volatile int64_t x289 = 3260081LL;
uint32_t x293 = UINT32_MAX;
volatile int64_t t55 = 48559093796766399LL;
int32_t x324 = INT32_MAX;
static uint64_t x327 = 23250342161808LLU;
int16_t x336 = 6293;
int32_t t60 = 4892;
static uint16_t x337 = UINT16_MAX;
int32_t x340 = -8008703;
int32_t x342 = INT32_MIN;
static volatile uint64_t t63 = 932022291528LLU;
int16_t x364 = INT16_MIN;
int32_t x369 = -6166;
static int32_t x381 = INT32_MIN;
uint8_t x382 = 1U;
static uint32_t x383 = 73U;
int32_t x397 = -1070013;
int32_t x399 = -1;
int16_t x406 = INT16_MIN;
static int32_t x410 = -1;
volatile uint16_t x411 = UINT16_MAX;
uint32_t t76 = UINT32_MAX;
int8_t x424 = 30;
int16_t x433 = 0;
volatile int64_t x434 = -4209030138LL;
static int64_t x439 = -1LL;
static volatile int64_t t80 = -5630182LL;
uint8_t x443 = 0U;
int16_t x444 = -1;
volatile int32_t t81 = -105569735;
int32_t x447 = INT32_MAX;
static int32_t x450 = -139301401;
static int8_t x454 = INT8_MAX;
volatile int64_t x455 = -1LL;
uint64_t x476 = 13940LLU;
uint32_t x480 = 1354774169U;
int8_t x481 = INT8_MAX;
int8_t x486 = -1;
int64_t x487 = -110796478704LL;
volatile int32_t x491 = INT32_MAX;
int32_t x505 = INT32_MAX;
int64_t t99 = -356LL;


void f0(void) {
	static uint64_t x1 = 9113840377734483LLU;
	uint16_t x2 = 5770U;
	int64_t x3 = INT64_MAX;
	int64_t x4 = -1LL;

	t0 = ((x1+x2)|(x3+x4));

	if (t0 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	int64_t x6 = INT64_MAX;
	uint16_t x7 = 91U;
	int8_t x8 = 0;
	volatile int64_t t1 = -37798475144LL;

	t1 = ((x5+x6)|(x7+x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 49U;
	uint16_t x11 = UINT16_MAX;

	t2 = ((x9+x10)|(x11+x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	int16_t x14 = -416;
	uint16_t x15 = UINT16_MAX;
	static uint8_t x16 = 4U;
	static int32_t t3 = 84385571;

	t3 = ((x13+x14)|(x15+x16));

	if (t3 != -417) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	static int32_t x18 = -1;
	static int32_t x19 = 24;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 16;

	t4 = ((x17+x18)|(x19+x20));

	if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 3682U;
	static volatile uint32_t t5 = 334845U;

	t5 = ((x25+x26)|(x27+x28));

	if (t5 != 21147495U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 67LLU;
	static uint32_t x34 = 1142512322U;
	int16_t x35 = INT16_MIN;
	static volatile uint64_t t6 = 3709415578668234309LLU;

	t6 = ((x33+x34)|(x35+x36));

	if (t6 != 18446744073709509527LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x41 = 130295209198672197LL;
	int16_t x42 = -10;
	int16_t x43 = 1961;
	static int8_t x44 = -1;
	volatile int64_t t7 = -56103481502509LL;

	t7 = ((x41+x42)|(x43+x44));

	if (t7 != 130295209198673851LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x45 = -42;
	int16_t x46 = INT16_MIN;
	static int64_t x47 = -1LL;
	int8_t x48 = INT8_MAX;
	int64_t t8 = -864296866LL;

	t8 = ((x45+x46)|(x47+x48));

	if (t8 != -32770LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = -1;
	uint16_t x54 = 3851U;
	uint16_t x55 = 177U;
	int64_t x56 = INT64_MIN;
	volatile int64_t t9 = -1712LL;

	t9 = ((x53+x54)|(x55+x56));

	if (t9 != -9223372036854771781LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x57 = 10010U;
	static uint16_t x58 = 28976U;
	static volatile int8_t x59 = -27;

	t10 = ((x57+x58)|(x59+x60));

	if (t10 != -1842) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x61 = UINT8_MAX;
	int32_t x62 = INT32_MIN;
	volatile uint8_t x63 = 5U;
	uint8_t x64 = 6U;
	int32_t t11 = 17;

	t11 = ((x61+x62)|(x63+x64));

	if (t11 != -2147483393) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = INT8_MAX;
	int64_t x66 = 1122350587223LL;
	volatile int32_t x67 = -1;
	uint32_t x68 = 633353U;
	int64_t t12 = 3LL;

	t12 = ((x65+x66)|(x67+x68));

	if (t12 != 1122350661598LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x69 = INT8_MAX;
	volatile uint32_t x71 = UINT32_MAX;
	uint32_t x72 = 406942271U;

	t13 = ((x69+x70)|(x71+x72));

	if (t13 != 408681214U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x77 = 16972U;
	uint8_t x79 = UINT8_MAX;
	int32_t x80 = INT32_MIN;

	t14 = ((x77+x78)|(x79+x80));

	if (t14 != -1912052481LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x81 = 36525432586807243LLU;
	int16_t x82 = -1;
	int64_t x83 = INT64_MIN;
	uint64_t t15 = 74177243859058LLU;

	t15 = ((x81+x82)|(x83+x84));

	if (t15 != 9259897469532110847LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = 349LLU;
	int8_t x90 = INT8_MIN;
	static uint16_t x92 = UINT16_MAX;
	uint64_t t16 = 127LLU;

	t16 = ((x89+x90)|(x91+x92));

	if (t16 != 65759LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x94 = 150;
	uint32_t x95 = 110U;
	int32_t x96 = INT32_MIN;
	uint32_t t17 = 32U;

	t17 = ((x93+x94)|(x95+x96));

	if (t17 != 2147484159U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x98 = INT16_MIN;
	uint8_t x100 = UINT8_MAX;
	static volatile uint64_t t18 = 2LLU;

	t18 = ((x97+x98)|(x99+x100));

	if (t18 != 10823096858045LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = -340727114;
	static uint16_t x106 = UINT16_MAX;
	volatile uint16_t x107 = 1284U;
	int64_t x108 = INT64_MIN;
	int64_t t19 = -222278090123LL;

	t19 = ((x105+x106)|(x107+x108));

	if (t19 != -340660299LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x109 = UINT8_MAX;
	static int32_t x110 = INT32_MIN;
	uint8_t x112 = 30U;

	t20 = ((x109+x110)|(x111+x112));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x113 = 41LLU;
	volatile uint16_t x114 = UINT16_MAX;
	uint16_t x116 = UINT16_MAX;
	uint64_t t21 = 235529529LLU;

	t21 = ((x113+x114)|(x115+x116));

	if (t21 != 65594LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x117 = UINT8_MAX;
	static volatile int16_t x118 = INT16_MAX;
	int16_t x119 = INT16_MAX;
	int32_t x120 = 103842021;
	volatile int32_t t22 = -222142;

	t22 = ((x117+x118)|(x119+x120));

	if (t22 != 103907582) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x121 = 0U;
	int8_t x122 = INT8_MAX;
	volatile uint8_t x123 = UINT8_MAX;
	uint64_t x124 = 3130335106091488042LLU;
	volatile uint64_t t23 = 29968LLU;

	t23 = ((x121+x122)|(x123+x124));

	if (t23 != 3130335106091488383LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x125 = 241U;
	int8_t x126 = -3;
	int32_t x127 = 14232200;
	volatile int8_t x128 = -1;
	volatile int32_t t24 = 1442093;

	t24 = ((x125+x126)|(x127+x128));

	if (t24 != 14232303) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x130 = UINT64_MAX;
	volatile int16_t x131 = INT16_MIN;
	volatile uint64_t t25 = 11499412LLU;

	t25 = ((x129+x130)|(x131+x132));

	if (t25 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x141 = 117U;
	int64_t x142 = -583LL;
	int16_t x144 = INT16_MIN;
	volatile int64_t t26 = 1266854452239505502LL;

	t26 = ((x141+x142)|(x143+x144));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x149 = INT8_MAX;
	uint8_t x151 = UINT8_MAX;
	static uint8_t x152 = UINT8_MAX;

	t27 = ((x149+x150)|(x151+x152));

	if (t27 != 510) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x157 = 72537490658LLU;
	uint8_t x159 = 2U;
	volatile int8_t x160 = 11;
	volatile uint64_t t28 = 57367293948423LLU;

	t28 = ((x157+x158)|(x159+x160));

	if (t28 != 72537490669LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x162 = 14;
	volatile int8_t x163 = -2;
	uint8_t x164 = 4U;

	t29 = ((x161+x162)|(x163+x164));

	if (t29 != -32754) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x165 = INT8_MIN;
	static uint16_t x167 = 14U;
	volatile int8_t x168 = INT8_MAX;
	int32_t t30 = 6778;

	t30 = ((x165+x166)|(x167+x168));

	if (t30 != -113) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x173 = INT64_MIN;
	uint8_t x174 = 28U;
	uint8_t x175 = UINT8_MAX;
	static volatile int8_t x176 = INT8_MIN;
	int64_t t31 = 10LL;

	t31 = ((x173+x174)|(x175+x176));

	if (t31 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x177 = 6572LL;
	int32_t x179 = INT32_MIN;
	int64_t x180 = 43LL;

	t32 = ((x177+x178)|(x179+x180));

	if (t32 != -2147477077LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x181 = 350546;
	int32_t x182 = 0;
	int16_t x183 = INT16_MAX;
	int8_t x184 = INT8_MIN;
	volatile int32_t t33 = 436357141;

	t33 = ((x181+x182)|(x183+x184));

	if (t33 != 360319) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x185 = 10754U;
	uint16_t x186 = 9125U;
	uint64_t x187 = 6128944289960577026LLU;
	static volatile uint64_t t34 = 9225097617LLU;

	t34 = ((x185+x186)|(x187+x188));

	if (t34 != 6595918081079987623LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x189 = 17;
	uint64_t x190 = 1518LLU;
	static int8_t x191 = INT8_MAX;
	int64_t x192 = -1LL;
	static uint64_t t35 = 371115444LLU;

	t35 = ((x189+x190)|(x191+x192));

	if (t35 != 1535LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x194 = 0U;
	uint64_t x195 = 20805147628300LLU;
	uint64_t t36 = 169258625144LLU;

	t36 = ((x193+x194)|(x195+x196));

	if (t36 != 20805147656191LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x197 = INT16_MIN;
	volatile int8_t x199 = INT8_MAX;
	static uint8_t x200 = 7U;
	static int64_t t37 = -191114945LL;

	t37 = ((x197+x198)|(x199+x200));

	if (t37 != 207806LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x201 = -1LL;
	uint64_t x202 = 5156LLU;
	static int8_t x203 = 1;
	uint16_t x204 = UINT16_MAX;
	volatile uint64_t t38 = 7796403929298LLU;

	t38 = ((x201+x202)|(x203+x204));

	if (t38 != 70691LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x209 = INT16_MIN;
	int64_t x210 = -48LL;
	int32_t x211 = INT32_MIN;
	uint64_t x212 = 948493LLU;
	static volatile uint64_t t39 = 3393LLU;

	t39 = ((x209+x210)|(x211+x212));

	if (t39 != 18446744073709518813LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x213 = INT16_MIN;
	uint16_t x214 = 5665U;
	volatile int32_t x215 = -16601;
	int32_t t40 = -7618;

	t40 = ((x213+x214)|(x215+x216));

	if (t40 != -16601) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x217 = -1;
	uint32_t x219 = 0U;
	int16_t x220 = 795;
	volatile int64_t t41 = INT64_MAX;

	t41 = ((x217+x218)|(x219+x220));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x221 = INT32_MIN;
	static uint8_t x222 = 51U;
	volatile uint64_t x223 = UINT64_MAX;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = ((x221+x222)|(x223+x224));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x225 = 3221LLU;
	static int32_t x226 = INT32_MIN;
	int32_t x227 = -73944119;
	volatile int32_t x228 = -63924;
	uint64_t t43 = 144573322LLU;

	t43 = ((x225+x226)|(x227+x228));

	if (t43 != 18446744073635544725LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x229 = 8310946926LLU;
	int32_t x230 = -1;
	int64_t x231 = 199544626603065LL;
	volatile int16_t x232 = 2187;
	static volatile uint64_t t44 = 44LLU;

	t44 = ((x229+x230)|(x231+x232));

	if (t44 != 199552768408813LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x233 = -1;
	uint16_t x234 = UINT16_MAX;
	int8_t x235 = 6;
	static volatile int64_t x236 = INT64_MIN;

	t45 = ((x233+x234)|(x235+x236));

	if (t45 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x238 = INT32_MIN;
	int16_t x239 = -1;
	uint64_t x240 = UINT64_MAX;
	uint64_t t46 = 464384779494LLU;

	t46 = ((x237+x238)|(x239+x240));

	if (t46 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x246 = -1;
	volatile int32_t t47 = -33364;

	t47 = ((x245+x246)|(x247+x248));

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x257 = 22805462U;
	int32_t x258 = -7447565;
	uint16_t x259 = 1U;
	int8_t x260 = INT8_MIN;
	volatile uint32_t t48 = 14222U;

	t48 = ((x257+x258)|(x259+x260));

	if (t48 != 4294967241U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x261 = -6;
	static int64_t x262 = -422840LL;
	uint16_t x263 = UINT16_MAX;
	uint64_t x264 = 355619LLU;
	uint64_t t49 = 7582295056627613646LLU;

	t49 = ((x261+x262)|(x263+x264));

	if (t49 != 18446744073709546850LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x269 = INT64_MIN;
	volatile uint16_t x270 = 6U;
	int32_t x271 = INT32_MIN;
	int16_t x272 = 12;
	volatile int64_t t50 = 3298148740880LL;

	t50 = ((x269+x270)|(x271+x272));

	if (t50 != -2147483634LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x277 = -1;
	int16_t x278 = INT16_MIN;
	static int16_t x279 = INT16_MIN;
	int64_t x280 = 468064LL;

	t51 = ((x277+x278)|(x279+x280));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x281 = INT32_MAX;
	int8_t x282 = -63;
	uint16_t x283 = 0U;
	int32_t x284 = -166;
	int32_t t52 = 356357;

	t52 = ((x281+x282)|(x283+x284));

	if (t52 != -38) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x290 = 119U;
	static int16_t x291 = 99;
	uint16_t x292 = 6225U;
	volatile int64_t t53 = -1383LL;

	t53 = ((x289+x290)|(x291+x292));

	if (t53 != 3260348LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x294 = -1;
	uint32_t x295 = 40U;
	static uint64_t x296 = 100746792331LLU;
	static uint64_t t54 = 7675LLU;

	t54 = ((x293+x294)|(x295+x296));

	if (t54 != 103079215103LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x305 = INT64_MIN;
	static int16_t x306 = 1988;
	int32_t x307 = 15192;
	static int64_t x308 = INT64_MIN;

	t55 = ((x305+x306)|(x307+x308));

	if (t55 != -9223372036854759460LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x309 = 163176;
	int32_t x310 = INT32_MIN;
	volatile uint32_t x311 = 396585U;
	int16_t x312 = -1;
	static uint32_t t56 = 2U;

	t56 = ((x309+x310)|(x311+x312));

	if (t56 != 2147908968U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x313 = -1;
	static uint8_t x314 = 24U;
	static int8_t x315 = INT8_MIN;
	int16_t x316 = INT16_MIN;
	volatile int32_t t57 = 0;

	t57 = ((x313+x314)|(x315+x316));

	if (t57 != -32873) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x321 = 2586U;
	int8_t x322 = INT8_MIN;
	volatile int16_t x323 = -9;
	volatile int32_t t58 = 21529033;

	t58 = ((x321+x322)|(x323+x324));

	if (t58 != 2147483646) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x325 = 80U;
	int64_t x326 = -1LL;
	static volatile uint64_t x328 = 1448LLU;
	static uint64_t t59 = 12876592641223LLU;

	t59 = ((x325+x326)|(x327+x328));

	if (t59 != 23250342163327LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x333 = -19;
	volatile int16_t x334 = -15568;
	volatile int16_t x335 = -269;

	t60 = ((x333+x334)|(x335+x336));

	if (t60 != -10339) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x338 = UINT16_MAX;
	int8_t x339 = -1;
	volatile int32_t t61 = 701015;

	t61 = ((x337+x338)|(x339+x340));

	if (t61 != -7995394) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x341 = 3U;
	int16_t x343 = INT16_MIN;
	int8_t x344 = -1;
	static int32_t t62 = -13;

	t62 = ((x341+x342)|(x343+x344));

	if (t62 != -32769) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x345 = -1;
	volatile uint64_t x346 = 1LLU;
	int32_t x347 = -1;
	volatile uint32_t x348 = UINT32_MAX;

	t63 = ((x345+x346)|(x347+x348));

	if (t63 != 4294967294LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x349 = -1;
	volatile uint8_t x350 = UINT8_MAX;
	int64_t x351 = INT64_MIN;
	uint16_t x352 = UINT16_MAX;
	volatile int64_t t64 = -2845905922LL;

	t64 = ((x349+x350)|(x351+x352));

	if (t64 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x361 = -104LL;
	uint8_t x362 = 3U;
	volatile int16_t x363 = INT16_MAX;
	volatile int64_t t65 = -111169871LL;

	t65 = ((x361+x362)|(x363+x364));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x365 = -3126112042593861LL;
	static int32_t x366 = 19973962;
	uint64_t x367 = UINT64_MAX;
	int8_t x368 = -2;
	uint64_t t66 = 339LLU;

	t66 = ((x365+x366)|(x367+x368));

	if (t66 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x370 = INT16_MIN;
	int32_t x371 = INT32_MIN;
	uint64_t x372 = 677969036554774721LLU;
	uint64_t t67 = 2077126871682LLU;

	t67 = ((x369+x370)|(x371+x372));

	if (t67 != 18446744073709547499LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x373 = -1;
	int32_t x374 = -2377701;
	static uint32_t x375 = 110023734U;
	volatile int8_t x376 = INT8_MIN;
	static uint32_t t68 = 48726758U;

	t68 = ((x373+x374)|(x375+x376));

	if (t68 != 4292869054U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x384 = UINT8_MAX;
	volatile uint32_t t69 = 3142U;

	t69 = ((x381+x382)|(x383+x384));

	if (t69 != 2147483977U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x385 = 7U;
	uint16_t x386 = UINT16_MAX;
	uint16_t x387 = 1724U;
	uint16_t x388 = UINT16_MAX;
	int32_t t70 = 3988;

	t70 = ((x385+x386)|(x387+x388));

	if (t70 != 67263) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x389 = 5868743U;
	volatile int32_t x390 = INT32_MIN;
	uint8_t x391 = 3U;
	volatile uint32_t x392 = UINT32_MAX;
	static volatile uint32_t t71 = 7860858U;

	t71 = ((x389+x390)|(x391+x392));

	if (t71 != 2153352391U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x393 = UINT32_MAX;
	static volatile int8_t x394 = INT8_MIN;
	static int8_t x395 = INT8_MIN;
	uint64_t x396 = 28062106052581LLU;
	uint64_t t72 = 2591331308012171427LLU;

	t72 = ((x393+x394)|(x395+x396));

	if (t72 != 28063316311935LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x398 = 24278U;
	int32_t x400 = 73888;
	volatile int32_t t73 = 313124;

	t73 = ((x397+x398)|(x399+x400));

	if (t73 != -971873) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x401 = INT16_MIN;
	volatile int16_t x402 = 1;
	int32_t x403 = INT32_MAX;
	uint64_t x404 = UINT64_MAX;
	uint64_t t74 = UINT64_MAX;

	t74 = ((x401+x402)|(x403+x404));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x405 = 14U;
	static int64_t x407 = 41542250222LL;
	uint16_t x408 = 5U;
	volatile int64_t t75 = -92220284897602LL;

	t75 = ((x405+x406)|(x407+x408));

	if (t75 != -4353LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x409 = 0U;
	uint8_t x412 = UINT8_MAX;

	t76 = ((x409+x410)|(x411+x412));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x421 = -1;
	uint16_t x422 = UINT16_MAX;
	int64_t x423 = INT64_MIN;
	volatile int64_t t77 = 10630810LL;

	t77 = ((x421+x422)|(x423+x424));

	if (t77 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x425 = 515852884170LL;
	static uint32_t x426 = UINT32_MAX;
	int16_t x427 = INT16_MIN;
	uint32_t x428 = UINT32_MAX;
	volatile int64_t t78 = -33960612609827LL;

	t78 = ((x425+x426)|(x427+x428));

	if (t78 != 523985977343LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x435 = 0;
	int64_t x436 = INT64_MIN;
	volatile int64_t t79 = 17924900LL;

	t79 = ((x433+x434)|(x435+x436));

	if (t79 != -4209030138LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x437 = INT16_MIN;
	uint8_t x438 = 24U;
	int8_t x440 = -30;

	t80 = ((x437+x438)|(x439+x440));

	if (t80 != -7LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x441 = -1;
	static int8_t x442 = -2;

	t81 = ((x441+x442)|(x443+x444));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x445 = 0U;
	int64_t x446 = 240LL;
	int8_t x448 = 0;
	volatile int64_t t82 = 254859584LL;

	t82 = ((x445+x446)|(x447+x448));

	if (t82 != 2147483647LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x449 = -1;
	uint32_t x451 = 145088U;
	volatile int64_t x452 = INT64_MIN;
	volatile int64_t t83 = -559674843440594LL;

	t83 = ((x449+x450)|(x451+x452));

	if (t83 != -139296794LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x453 = -1LL;
	int32_t x456 = INT32_MIN;
	volatile int64_t t84 = 1LL;

	t84 = ((x453+x454)|(x455+x456));

	if (t84 != -2147483649LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x457 = 2624581781548285LLU;
	static int8_t x458 = INT8_MIN;
	int8_t x459 = -1;
	int64_t x460 = 0LL;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = ((x457+x458)|(x459+x460));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x465 = 395253U;
	uint8_t x466 = 11U;
	int64_t x467 = INT64_MIN;
	uint32_t x468 = UINT32_MAX;
	int64_t t86 = 431344164894338LL;

	t86 = ((x465+x466)|(x467+x468));

	if (t86 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x469 = UINT64_MAX;
	volatile int8_t x470 = INT8_MIN;
	int64_t x471 = -1LL;
	uint16_t x472 = 78U;
	uint64_t t87 = 4662060536208443008LLU;

	t87 = ((x469+x470)|(x471+x472));

	if (t87 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x473 = UINT32_MAX;
	static uint8_t x474 = 92U;
	int8_t x475 = -15;
	uint64_t t88 = 484939269215LLU;

	t88 = ((x473+x474)|(x475+x476));

	if (t88 != 13951LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x477 = INT64_MAX;
	static int64_t x478 = INT64_MIN;
	static volatile uint32_t x479 = 79109805U;
	int64_t t89 = -4396LL;

	t89 = ((x477+x478)|(x479+x480));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x482 = 15;
	int64_t x483 = -1LL;
	uint32_t x484 = UINT32_MAX;
	int64_t t90 = -3637605287149LL;

	t90 = ((x481+x482)|(x483+x484));

	if (t90 != 4294967294LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x485 = -95274840;
	int16_t x488 = INT16_MAX;
	volatile int64_t t91 = 115912LL;

	t91 = ((x485+x486)|(x487+x488));

	if (t91 != -27885649LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x489 = INT32_MIN;
	static uint32_t x490 = 321640509U;
	static uint16_t x492 = 0U;
	static volatile uint32_t t92 = UINT32_MAX;

	t92 = ((x489+x490)|(x491+x492));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x493 = 118761211615LLU;
	int32_t x494 = -741844;
	int32_t x495 = 266636585;
	int64_t x496 = INT64_MIN;
	volatile uint64_t t93 = 2LLU;

	t93 = ((x493+x494)|(x495+x496));

	if (t93 != 9223372155770436907LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x497 = -91159823422360196LL;
	volatile int8_t x498 = -1;
	uint8_t x499 = 0U;
	int32_t x500 = INT32_MIN;
	volatile int64_t t94 = -295989275LL;

	t94 = ((x497+x498)|(x499+x500));

	if (t94 != -1558219397LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x501 = -1;
	int8_t x502 = -1;
	uint32_t x503 = 17U;
	static int8_t x504 = INT8_MAX;
	volatile uint32_t t95 = 59153U;

	t95 = ((x501+x502)|(x503+x504));

	if (t95 != 4294967294U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x506 = -1;
	uint8_t x507 = UINT8_MAX;
	volatile int64_t x508 = -1LL;
	static int64_t t96 = 2320982518797622594LL;

	t96 = ((x505+x506)|(x507+x508));

	if (t96 != 2147483646LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x509 = 842U;
	int8_t x510 = -5;
	volatile int16_t x511 = INT16_MIN;
	int8_t x512 = INT8_MIN;
	uint32_t t97 = 1321401781U;

	t97 = ((x509+x510)|(x511+x512));

	if (t97 != 4294934469U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x513 = 22U;
	volatile int32_t x514 = INT32_MAX;
	volatile int8_t x515 = 47;
	int8_t x516 = INT8_MIN;
	volatile uint32_t t98 = 235892U;

	t98 = ((x513+x514)|(x515+x516));

	if (t98 != 4294967231U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x517 = 2047U;
	static int16_t x518 = INT16_MAX;
	int64_t x519 = -1LL;
	static uint16_t x520 = UINT16_MAX;

	t99 = ((x517+x518)|(x519+x520));

	if (t99 != 65534LL) { NG(); } else { ; }
	
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

