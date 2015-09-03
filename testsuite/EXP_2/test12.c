#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x5 = 0;
int16_t x12 = INT16_MIN;
uint64_t x13 = 849944007239028246LLU;
volatile uint64_t x20 = UINT64_MAX;
uint16_t x37 = UINT16_MAX;
static uint64_t x45 = 4684793099LLU;
static int8_t x47 = -1;
int32_t x49 = INT32_MIN;
static volatile int8_t x59 = INT8_MIN;
uint8_t x60 = 1U;
int16_t x67 = INT16_MIN;
volatile int32_t x80 = -1;
uint64_t x81 = 17955LLU;
int32_t x82 = INT32_MAX;
uint8_t x94 = 1U;
volatile int8_t x96 = INT8_MAX;
int32_t x99 = -264828960;
int8_t x100 = -1;
uint64_t t16 = UINT64_MAX;
int16_t x102 = INT16_MIN;
static int8_t x104 = INT8_MIN;
int16_t x105 = 16;
static int32_t x106 = INT32_MIN;
static uint8_t x112 = 0U;
int16_t x117 = INT16_MIN;
uint64_t x120 = UINT64_MAX;
volatile uint64_t t21 = UINT64_MAX;
uint32_t x121 = 10U;
int32_t x122 = INT32_MIN;
uint8_t x123 = 3U;
int64_t x128 = INT64_MIN;
int32_t x139 = INT32_MIN;
static volatile uint64_t x140 = 128463505LLU;
volatile uint64_t t25 = 493LLU;
int64_t x154 = 65493119481LL;
uint32_t x168 = 11156220U;
int32_t t31 = 177475;
int16_t x177 = -1;
uint16_t x179 = 2U;
int16_t x182 = INT16_MIN;
uint64_t x187 = 2731241687075542LLU;
volatile uint64_t t34 = 2715990LLU;
static volatile int32_t x193 = 112;
uint32_t x194 = 16U;
volatile int16_t x197 = INT16_MIN;
static int64_t x204 = -1LL;
int64_t x205 = -1099659397182LL;
volatile int64_t t39 = -258415079594007LL;
static int16_t x215 = INT16_MIN;
int64_t t41 = 1801481085LL;
static int32_t x227 = INT32_MIN;
uint64_t x236 = UINT64_MAX;
static volatile int8_t x243 = INT8_MAX;
static volatile int32_t t45 = -54373387;
int64_t x254 = 131701318LL;
volatile int32_t t47 = 8868;
static volatile uint8_t x262 = 27U;
uint64_t x268 = 967214803924556LLU;
static volatile int64_t x278 = INT64_MIN;
int8_t x289 = -2;
volatile int32_t x290 = -1;
static int64_t x293 = INT64_MIN;
static uint16_t x294 = UINT16_MAX;
int64_t x308 = 25LL;
int8_t x311 = INT8_MAX;
uint64_t t58 = 956773LLU;
static int32_t x316 = 0;
static uint32_t x319 = 56879U;
static int64_t x320 = 230359139LL;
uint64_t x323 = 10795728614107022LLU;
int32_t x336 = -1;
int16_t x348 = INT16_MIN;
int64_t x351 = 1325LL;
static uint64_t t70 = 7709LLU;
static int64_t t71 = 59742LL;
volatile int8_t x371 = -1;
volatile int32_t t72 = 1905;
volatile uint64_t t73 = 30LLU;
int32_t x379 = INT32_MIN;
volatile uint8_t x385 = 1U;
volatile int8_t x386 = INT8_MIN;
int32_t x387 = 9568934;
uint64_t t77 = 2390117671179LLU;
static uint32_t x393 = 774U;
static int8_t x394 = INT8_MAX;
volatile int64_t x395 = INT64_MIN;
volatile int64_t t80 = 30290841208310426LL;
int64_t x408 = INT64_MAX;
int64_t t81 = INT64_MAX;
volatile int8_t x421 = -57;
uint64_t x425 = 57688114685LLU;
static uint64_t x427 = UINT64_MAX;
static uint8_t x431 = 3U;
volatile int16_t x432 = -235;
int64_t t87 = -20LL;
volatile uint64_t x435 = 54670019725LLU;
uint16_t x439 = UINT16_MAX;
int8_t x443 = INT8_MIN;
static int32_t x444 = 1;
volatile uint32_t t90 = 2U;
volatile uint32_t x460 = 16466U;
int64_t t94 = -16811729200LL;
volatile int64_t x470 = INT64_MIN;
int64_t x472 = -30872641109LL;
static volatile int64_t t95 = 3053564LL;
uint8_t x475 = 2U;
volatile int64_t t96 = -42827972321037LL;
int8_t x485 = INT8_MIN;
static int64_t x487 = 525032571LL;
uint8_t x489 = UINT8_MAX;
int32_t x490 = INT32_MAX;
uint64_t x491 = UINT64_MAX;
int8_t x492 = 9;


void f0(void) {
	int64_t x6 = INT64_MIN;
	int8_t x7 = 26;
	int32_t x8 = 11569319;
	static int64_t t0 = 60949LL;

	t0 = ((x5+(x6+x7))|x8);

	if (t0 != -9223372036843206465LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 19761U;
	volatile int8_t x10 = -7;
	int8_t x11 = -2;
	static volatile int32_t t1 = 50;

	t1 = ((x9+(x10+x11))|x12);

	if (t1 != -13016) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x14 = 12603894U;
	int8_t x15 = -28;
	volatile int64_t x16 = 3372383LL;
	volatile uint64_t t2 = 31LLU;

	t2 = ((x13+(x14+x15))|x16);

	if (t2 != 849944007251853311LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	static volatile int16_t x18 = INT16_MIN;
	static uint32_t x19 = 12938U;
	static uint64_t t3 = UINT64_MAX;

	t3 = ((x17+(x18+x19))|x20);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = 3345;
	int32_t x26 = INT32_MAX;
	uint32_t x27 = 6957U;
	int64_t x28 = 262432153LL;
	static volatile int64_t t4 = -95471118392965100LL;

	t4 = ((x25+(x26+x27))|x28);

	if (t4 != 2409917885LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x33 = INT64_MIN;
	static int16_t x34 = INT16_MIN;
	static int32_t x35 = INT32_MAX;
	int32_t x36 = INT32_MIN;
	volatile int64_t t5 = -1350LL;

	t5 = ((x33+(x34+x35))|x36);

	if (t5 != -32769LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x38 = 3197LLU;
	int32_t x39 = -32;
	static int32_t x40 = INT32_MAX;
	volatile uint64_t t6 = 1812553041933255004LLU;

	t6 = ((x37+(x38+x39))|x40);

	if (t6 != 2147483647LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MIN;
	int16_t x42 = -4;
	int16_t x43 = 1157;
	uint64_t x44 = 12278983796836LLU;
	uint64_t t7 = 7LLU;

	t7 = ((x41+(x42+x43))|x44);

	if (t7 != 18446744073381850341LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x46 = INT16_MIN;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = ((x45+(x46+x47))|x48);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x50 = -1LL;
	int32_t x51 = 10469667;
	int16_t x52 = -183;
	int64_t t9 = 11267889LL;

	t9 = ((x49+(x50+x51))|x52);

	if (t9 != -149LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x57 = 12;
	static volatile uint16_t x58 = 4234U;
	int32_t t10 = 735408;

	t10 = ((x57+(x58+x59))|x60);

	if (t10 != 4119) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x61 = UINT8_MAX;
	static int8_t x62 = INT8_MIN;
	uint64_t x63 = UINT64_MAX;
	static uint32_t x64 = UINT32_MAX;
	static uint64_t t11 = 395664937LLU;

	t11 = ((x61+(x62+x63))|x64);

	if (t11 != 4294967295LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = INT8_MAX;
	static int8_t x66 = INT8_MIN;
	int64_t x68 = 97466984778699655LL;
	int64_t t12 = -244596047377959LL;

	t12 = ((x65+(x66+x67))|x68);

	if (t12 != -32769LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x77 = 23U;
	volatile uint64_t x78 = UINT64_MAX;
	static int8_t x79 = 23;
	static uint64_t t13 = UINT64_MAX;

	t13 = ((x77+(x78+x79))|x80);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x83 = INT64_MIN;
	int64_t x84 = INT64_MIN;
	static volatile uint64_t t14 = 2136674092614LLU;

	t14 = ((x81+(x82+x83))|x84);

	if (t14 != 9223372039002277410LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x93 = 282202438099LL;
	volatile uint32_t x95 = 118947272U;
	int64_t t15 = -13964376854530LL;

	t15 = ((x93+(x94+x95))|x96);

	if (t15 != 282321385471LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x97 = 1697114114LLU;
	int32_t x98 = -29;

	t16 = ((x97+(x98+x99))|x100);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x101 = -1LL;
	uint16_t x103 = 2U;
	volatile int64_t t17 = -598375LL;

	t17 = ((x101+(x102+x103))|x104);

	if (t17 != -127LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x107 = INT32_MAX;
	static int8_t x108 = INT8_MIN;
	volatile int32_t t18 = -124856;

	t18 = ((x105+(x106+x107))|x108);

	if (t18 != -113) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x109 = -1;
	static int8_t x110 = -1;
	int16_t x111 = 0;
	int32_t t19 = -114900;

	t19 = ((x109+(x110+x111))|x112);

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x113 = INT64_MAX;
	volatile uint16_t x114 = 107U;
	static int16_t x115 = INT16_MIN;
	static int32_t x116 = INT32_MIN;
	int64_t t20 = -296019LL;

	t20 = ((x113+(x114+x115))|x116);

	if (t20 != -32662LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x118 = UINT16_MAX;
	static int64_t x119 = -1LL;

	t21 = ((x117+(x118+x119))|x120);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x124 = INT16_MAX;
	volatile uint32_t t22 = 1U;

	t22 = ((x121+(x122+x123))|x124);

	if (t22 != 2147516415U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x125 = -1;
	uint64_t x126 = 1747350100176LLU;
	uint16_t x127 = UINT16_MAX;
	uint64_t t23 = 278357LLU;

	t23 = ((x125+(x126+x127))|x128);

	if (t23 != 9223373784204941518LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x133 = INT64_MIN;
	volatile uint8_t x134 = 4U;
	volatile int32_t x135 = -1;
	uint16_t x136 = UINT16_MAX;
	static volatile int64_t t24 = -3LL;

	t24 = ((x133+(x134+x135))|x136);

	if (t24 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x137 = 1501920630322464753LLU;
	int64_t x138 = 29018919LL;

	t25 = ((x137+(x138+x139))|x140);

	if (t25 != 1501920628254339993LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x141 = 176080685462627LL;
	uint8_t x142 = UINT8_MAX;
	int32_t x143 = -17;
	volatile int8_t x144 = INT8_MIN;
	volatile int64_t t26 = 116546LL;

	t26 = ((x141+(x142+x143))|x144);

	if (t26 != -47LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x153 = INT64_MIN;
	uint32_t x155 = 21086134U;
	uint32_t x156 = UINT32_MAX;
	volatile int64_t t27 = 94392161823LL;

	t27 = ((x153+(x154+x155))|x156);

	if (t27 != -9223371968135299073LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x161 = INT8_MIN;
	static int64_t x162 = INT64_MIN;
	int64_t x163 = 6050389932545005LL;
	static int16_t x164 = INT16_MAX;
	static volatile int64_t t28 = 1LL;

	t28 = ((x161+(x162+x163))|x164);

	if (t28 != -9217321646922203137LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x165 = 1;
	int8_t x166 = 55;
	int16_t x167 = -3;
	uint32_t t29 = 12794091U;

	t29 = ((x165+(x166+x167))|x168);

	if (t29 != 11156221U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x169 = -1;
	int64_t x170 = -1LL;
	static int32_t x171 = INT32_MIN;
	static int64_t x172 = 10864741LL;
	int64_t t30 = -592363123LL;

	t30 = ((x169+(x170+x171))|x172);

	if (t30 != -2147483649LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x173 = INT16_MAX;
	int16_t x174 = INT16_MAX;
	static uint8_t x175 = 12U;
	static int16_t x176 = -1;

	t31 = ((x173+(x174+x175))|x176);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x178 = -18468LL;
	uint16_t x180 = UINT16_MAX;
	static int64_t t32 = 2874732408585LL;

	t32 = ((x177+(x178+x179))|x180);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x181 = INT32_MAX;
	volatile int8_t x183 = -1;
	int16_t x184 = -7679;
	static int32_t t33 = 10778210;

	t33 = ((x181+(x182+x183))|x184);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x185 = UINT8_MAX;
	int64_t x186 = -42185667510317842LL;
	static int8_t x188 = INT8_MIN;

	t34 = ((x185+(x186+x187))|x188);

	if (t34 != 18446744073709551555LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x189 = -37;
	uint64_t x190 = 6138097384224238LLU;
	int64_t x191 = INT64_MIN;
	int16_t x192 = -1;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = ((x189+(x190+x191))|x192);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x195 = -1LL;
	volatile int16_t x196 = INT16_MIN;
	volatile int64_t t36 = 39664LL;

	t36 = ((x193+(x194+x195))|x196);

	if (t36 != -32641LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x198 = UINT8_MAX;
	uint64_t x199 = 44LLU;
	static int8_t x200 = -1;
	uint64_t t37 = UINT64_MAX;

	t37 = ((x197+(x198+x199))|x200);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x201 = INT8_MAX;
	int8_t x202 = 38;
	static int16_t x203 = INT16_MIN;
	int64_t t38 = 145499083LL;

	t38 = ((x201+(x202+x203))|x204);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x206 = -1;
	int16_t x207 = 1;
	uint8_t x208 = UINT8_MAX;

	t39 = ((x205+(x206+x207))|x208);

	if (t39 != -1099659397121LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x213 = -1LL;
	uint64_t x214 = UINT64_MAX;
	int8_t x216 = 0;
	uint64_t t40 = 3361443273LLU;

	t40 = ((x213+(x214+x215))|x216);

	if (t40 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x221 = 76LL;
	static int16_t x222 = INT16_MIN;
	static uint8_t x223 = 6U;
	volatile uint16_t x224 = 1772U;

	t41 = ((x221+(x222+x223))|x224);

	if (t41 != -30978LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x225 = INT16_MIN;
	int64_t x226 = 13640LL;
	int8_t x228 = INT8_MIN;
	int64_t t42 = -3874600425LL;

	t42 = ((x225+(x226+x227))|x228);

	if (t42 != -56LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x233 = 408;
	volatile int8_t x234 = -1;
	uint64_t x235 = 13229LLU;
	uint64_t t43 = UINT64_MAX;

	t43 = ((x233+(x234+x235))|x236);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x237 = INT8_MIN;
	int8_t x238 = -1;
	static uint64_t x239 = UINT64_MAX;
	int8_t x240 = -1;
	uint64_t t44 = UINT64_MAX;

	t44 = ((x237+(x238+x239))|x240);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x241 = 188;
	uint16_t x242 = 1579U;
	uint16_t x244 = 26U;

	t45 = ((x241+(x242+x243))|x244);

	if (t45 != 1918) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x253 = 6;
	uint16_t x255 = UINT16_MAX;
	static volatile uint32_t x256 = UINT32_MAX;
	volatile int64_t t46 = -82436621LL;

	t46 = ((x253+(x254+x255))|x256);

	if (t46 != 4294967295LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x257 = INT16_MIN;
	uint16_t x258 = 31845U;
	volatile int16_t x259 = -1;
	int32_t x260 = INT32_MIN;

	t47 = ((x257+(x258+x259))|x260);

	if (t47 != -924) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x261 = -1LL;
	static int64_t x263 = 1691703497050606065LL;
	int64_t x264 = -1LL;
	int64_t t48 = -159122527389LL;

	t48 = ((x261+(x262+x263))|x264);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x265 = -1;
	uint32_t x266 = UINT32_MAX;
	static int64_t x267 = INT64_MIN;
	volatile uint64_t t49 = 28287332567563LLU;

	t49 = ((x265+(x266+x267))|x268);

	if (t49 != 9224339254899900414LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x269 = 221LLU;
	int64_t x270 = INT64_MIN;
	volatile int16_t x271 = INT16_MAX;
	int64_t x272 = -18LL;
	volatile uint64_t t50 = 562756274991761LLU;

	t50 = ((x269+(x270+x271))|x272);

	if (t50 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x273 = -1;
	uint8_t x274 = UINT8_MAX;
	uint64_t x275 = 1502070268232124LLU;
	uint16_t x276 = UINT16_MAX;
	static volatile uint64_t t51 = 284672456183LLU;

	t51 = ((x273+(x274+x275))|x276);

	if (t51 != 1502070268297215LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x277 = -1LL;
	volatile uint64_t x279 = UINT64_MAX;
	static int32_t x280 = -1;
	uint64_t t52 = UINT64_MAX;

	t52 = ((x277+(x278+x279))|x280);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x291 = UINT8_MAX;
	static int16_t x292 = INT16_MIN;
	volatile int32_t t53 = -6848;

	t53 = ((x289+(x290+x291))|x292);

	if (t53 != -32516) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x295 = UINT8_MAX;
	uint8_t x296 = UINT8_MAX;
	static volatile int64_t t54 = -1882LL;

	t54 = ((x293+(x294+x295))|x296);

	if (t54 != -9223372036854710017LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x297 = -1LL;
	int8_t x298 = 16;
	int32_t x299 = INT32_MIN;
	int16_t x300 = -634;
	static volatile int64_t t55 = 347975514468LL;

	t55 = ((x297+(x298+x299))|x300);

	if (t55 != -625LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x301 = INT8_MIN;
	static int32_t x302 = INT32_MIN;
	uint8_t x303 = UINT8_MAX;
	int64_t x304 = INT64_MAX;
	static int64_t t56 = 81586966821152794LL;

	t56 = ((x301+(x302+x303))|x304);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x305 = -128252;
	volatile int8_t x306 = -14;
	volatile uint32_t x307 = UINT32_MAX;
	static volatile int64_t t57 = -109840392329LL;

	t57 = ((x305+(x306+x307))|x308);

	if (t57 != 4294839037LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x309 = 21914LLU;
	int32_t x310 = 4865025;
	volatile uint32_t x312 = 162071U;

	t58 = ((x309+(x310+x311))|x312);

	if (t58 != 4913951LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x313 = 7855U;
	int16_t x314 = -1;
	int16_t x315 = INT16_MIN;
	static volatile int32_t t59 = 9877021;

	t59 = ((x313+(x314+x315))|x316);

	if (t59 != -24914) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x317 = 1;
	int64_t x318 = -4215867361000235LL;
	static volatile int64_t t60 = 39187620965243LL;

	t60 = ((x317+(x318+x319))|x320);

	if (t60 != -4215867155946649LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x321 = -971;
	volatile int64_t x322 = 39173773570LL;
	int32_t x324 = 6;
	static uint64_t t61 = 942LLU;

	t61 = ((x321+(x322+x323))|x324);

	if (t61 != 10795767787879623LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x325 = UINT32_MAX;
	int64_t x326 = 258397603770LL;
	static int8_t x327 = -1;
	uint32_t x328 = UINT32_MAX;
	int64_t t62 = -53910699LL;

	t62 = ((x325+(x326+x327))|x328);

	if (t62 != 266287972351LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x329 = UINT8_MAX;
	uint64_t x330 = 1337834171LLU;
	volatile uint8_t x331 = 3U;
	uint64_t x332 = UINT64_MAX;
	uint64_t t63 = UINT64_MAX;

	t63 = ((x329+(x330+x331))|x332);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x333 = INT16_MAX;
	int64_t x334 = -1LL;
	int32_t x335 = -1;
	static volatile int64_t t64 = 16382941875LL;

	t64 = ((x333+(x334+x335))|x336);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x337 = UINT32_MAX;
	int32_t x338 = -32691;
	volatile int32_t x339 = INT32_MAX;
	uint16_t x340 = 547U;
	uint32_t t65 = 113194U;

	t65 = ((x337+(x338+x339))|x340);

	if (t65 != 2147451499U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x341 = INT16_MAX;
	volatile int16_t x342 = 488;
	volatile uint64_t x343 = 510716392638162LLU;
	volatile int16_t x344 = INT16_MIN;
	volatile uint64_t t66 = 23039280LLU;

	t66 = ((x341+(x342+x343))|x344);

	if (t66 != 18446744073709521081LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x345 = INT16_MIN;
	uint8_t x346 = 7U;
	int64_t x347 = -1LL;
	volatile int64_t t67 = -7029434670LL;

	t67 = ((x345+(x346+x347))|x348);

	if (t67 != -32762LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x349 = -1;
	uint32_t x350 = 100075662U;
	volatile int32_t x352 = 0;
	static volatile int64_t t68 = 913188258814710587LL;

	t68 = ((x349+(x350+x351))|x352);

	if (t68 != 100076986LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x353 = INT16_MAX;
	uint32_t x354 = 7722U;
	int8_t x355 = INT8_MIN;
	static int64_t x356 = INT64_MIN;
	int64_t t69 = -1058192868397961399LL;

	t69 = ((x353+(x354+x355))|x356);

	if (t69 != -9223372036854735447LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x357 = 363629;
	int32_t x358 = INT32_MAX;
	uint64_t x359 = 45656111210773LLU;
	uint64_t x360 = 45116147452834LLU;

	t70 = ((x357+(x358+x359))|x360);

	if (t70 != 45693888622499LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x361 = INT64_MIN;
	volatile int64_t x362 = INT64_MAX;
	static int32_t x363 = INT32_MIN;
	int16_t x364 = INT16_MIN;

	t71 = ((x361+(x362+x363))|x364);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x369 = -4;
	volatile int16_t x370 = 123;
	uint8_t x372 = 39U;

	t72 = ((x369+(x370+x371))|x372);

	if (t72 != 119) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x373 = INT8_MIN;
	uint16_t x374 = 2903U;
	volatile int32_t x375 = 886;
	uint64_t x376 = 96LLU;

	t73 = ((x373+(x374+x375))|x376);

	if (t73 != 3693LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x377 = UINT8_MAX;
	int8_t x378 = INT8_MAX;
	uint32_t x380 = 16554955U;
	volatile uint32_t t74 = 10U;

	t74 = ((x377+(x378+x379))|x380);

	if (t74 != 2164038655U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x381 = 0U;
	int8_t x382 = -1;
	volatile uint8_t x383 = UINT8_MAX;
	volatile uint64_t x384 = UINT64_MAX;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x381+(x382+x383))|x384);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x388 = UINT8_MAX;
	static volatile int32_t t76 = 0;

	t76 = ((x385+(x386+x387))|x388);

	if (t76 != 9569023) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x389 = -1;
	uint64_t x390 = UINT64_MAX;
	uint64_t x391 = 9623LLU;
	int32_t x392 = INT32_MIN;

	t77 = ((x389+(x390+x391))|x392);

	if (t77 != 18446744071562077589LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x396 = 13701886LL;
	volatile int64_t t78 = 80428214LL;

	t78 = ((x393+(x394+x395))|x396);

	if (t78 != -9223372036841073665LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x397 = -1;
	int16_t x398 = 4189;
	int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MIN;
	int64_t t79 = 638252760804248980LL;

	t79 = ((x397+(x398+x399))|x400);

	if (t79 != -9223372036854771748LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x401 = -1LL;
	int16_t x402 = INT16_MIN;
	static uint16_t x403 = 598U;
	uint32_t x404 = UINT32_MAX;

	t80 = ((x401+(x402+x403))|x404);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x405 = 5U;
	volatile uint16_t x406 = 1188U;
	uint8_t x407 = 1U;

	t81 = ((x405+(x406+x407))|x408);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x409 = 156022429;
	static uint32_t x410 = UINT32_MAX;
	int16_t x411 = INT16_MAX;
	uint64_t x412 = UINT64_MAX;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = ((x409+(x410+x411))|x412);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x413 = 8U;
	int16_t x414 = 0;
	volatile int8_t x415 = -28;
	int8_t x416 = INT8_MIN;
	volatile int32_t t83 = 107665845;

	t83 = ((x413+(x414+x415))|x416);

	if (t83 != -20) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x417 = -1LL;
	int16_t x418 = -8;
	uint16_t x419 = 517U;
	static int16_t x420 = 14011;
	volatile int64_t t84 = -106250LL;

	t84 = ((x417+(x418+x419))|x420);

	if (t84 != 14335LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x422 = -1;
	int16_t x423 = INT16_MIN;
	static volatile int16_t x424 = 112;
	volatile int32_t t85 = -427239;

	t85 = ((x421+(x422+x423))|x424);

	if (t85 != -32778) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x426 = INT32_MIN;
	static uint16_t x428 = UINT16_MAX;
	uint64_t t86 = 281169225301810LLU;

	t86 = ((x425+(x426+x427))|x428);

	if (t86 != 55540645887LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x429 = 1102776U;
	int64_t x430 = INT64_MIN;

	t87 = ((x429+(x430+x431))|x432);

	if (t87 != -65LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x433 = 250790U;
	int16_t x434 = INT16_MIN;
	volatile int16_t x436 = -1;
	static uint64_t t88 = UINT64_MAX;

	t88 = ((x433+(x434+x435))|x436);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x437 = 195693;
	int32_t x438 = -1492793;
	int32_t x440 = -509254263;
	int32_t t89 = 20;

	t89 = ((x437+(x438+x439))|x440);

	if (t89 != -1215045) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x441 = 4230U;
	volatile uint16_t x442 = 3570U;

	t90 = ((x441+(x442+x443))|x444);

	if (t90 != 7673U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x445 = 9322U;
	static volatile int16_t x446 = INT16_MIN;
	int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MIN;
	int32_t t91 = 392023300;

	t91 = ((x445+(x446+x447))|x448);

	if (t91 != -22) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x449 = 41U;
	volatile uint16_t x450 = UINT16_MAX;
	uint32_t x451 = UINT32_MAX;
	uint16_t x452 = 877U;
	static uint32_t t92 = 311666U;

	t92 = ((x449+(x450+x451))|x452);

	if (t92 != 66415U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x453 = UINT64_MAX;
	uint8_t x454 = UINT8_MAX;
	volatile uint8_t x455 = 27U;
	static uint16_t x456 = UINT16_MAX;
	volatile uint64_t t93 = 86406748132251987LLU;

	t93 = ((x453+(x454+x455))|x456);

	if (t93 != 65535LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x457 = INT8_MAX;
	int64_t x458 = 109LL;
	int16_t x459 = 633;

	t94 = ((x457+(x458+x459))|x460);

	if (t94 != 17271LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x469 = INT8_MIN;
	static uint32_t x471 = 9907517U;

	t95 = ((x469+(x470+x471))|x472);

	if (t95 != -30872179265LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x473 = UINT16_MAX;
	int8_t x474 = INT8_MIN;
	int64_t x476 = INT64_MIN;

	t96 = ((x473+(x474+x475))|x476);

	if (t96 != -9223372036854710399LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x481 = -1LL;
	int16_t x482 = INT16_MIN;
	int32_t x483 = -10;
	volatile int16_t x484 = INT16_MAX;
	int64_t t97 = -23061769491LL;

	t97 = ((x481+(x482+x483))|x484);

	if (t97 != -32769LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x486 = INT32_MAX;
	int64_t x488 = -1LL;
	volatile int64_t t98 = -1004957179LL;

	t98 = ((x485+(x486+x487))|x488);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t t99 = 4490901LLU;

	t99 = ((x489+(x490+x491))|x492);

	if (t99 != 2147483901LLU) { NG(); } else { ; }
	
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

