#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = -1;
static volatile uint16_t x6 = UINT16_MAX;
int8_t x8 = -1;
int16_t x11 = -1;
int32_t t2 = 108386;
uint8_t x17 = 120U;
static uint8_t x19 = 1U;
int8_t x20 = -1;
int8_t x22 = INT8_MIN;
uint32_t x24 = 1820U;
volatile int32_t t5 = 25691340;
int64_t x33 = INT64_MAX;
uint64_t x41 = 839732079LLU;
int32_t x44 = 240;
static volatile int32_t t9 = -30625755;
volatile int32_t t11 = 1;
static int8_t x68 = INT8_MIN;
int32_t x78 = 4267;
int8_t x82 = -38;
uint16_t x88 = UINT16_MAX;
uint64_t x99 = 1703838LLU;
volatile int32_t t18 = 3435632;
uint16_t x106 = 1U;
int16_t x107 = -1;
volatile int16_t x119 = INT16_MAX;
int64_t x126 = INT64_MIN;
static uint64_t x135 = 2446830691878LLU;
int16_t x138 = INT16_MAX;
int8_t x139 = INT8_MIN;
uint16_t x140 = 23168U;
volatile int32_t t26 = 1793442;
volatile int32_t x160 = INT32_MAX;
int16_t x167 = -44;
uint64_t x168 = 24731543909751LLU;
int16_t x173 = -6621;
int32_t x176 = 13544;
int32_t x180 = INT32_MIN;
uint16_t x183 = 37U;
static int64_t x185 = 52450122789780055LL;
volatile int64_t x187 = -1LL;
volatile int32_t t35 = -53706;
int64_t x190 = 10684669969LL;
static int32_t t36 = -13;
volatile int16_t x197 = INT16_MAX;
int8_t x209 = 1;
uint8_t x210 = 22U;
volatile int32_t x218 = 4800549;
int32_t x224 = -1;
volatile int32_t t42 = 1;
uint8_t x229 = UINT8_MAX;
uint16_t x230 = UINT16_MAX;
int8_t x231 = INT8_MIN;
int64_t x239 = INT64_MIN;
static uint16_t x240 = UINT16_MAX;
volatile int32_t t45 = 166;
int8_t x242 = -1;
uint64_t x256 = UINT64_MAX;
volatile int32_t x260 = INT32_MIN;
static volatile uint64_t x265 = 213651585694604558LLU;
int64_t x271 = INT64_MIN;
volatile int32_t t51 = 24;
int32_t x277 = INT32_MIN;
uint64_t x285 = 15621088LLU;
static uint64_t x288 = UINT64_MAX;
int8_t x292 = 10;
static volatile int32_t t54 = 64197;
volatile uint8_t x298 = UINT8_MAX;
static int32_t x302 = INT32_MIN;
int32_t x308 = INT32_MIN;
volatile uint64_t x348 = UINT64_MAX;
int32_t t61 = 3936;
volatile int16_t x352 = -129;
volatile int8_t x355 = 15;
static uint8_t x358 = 29U;
int64_t x366 = -1LL;
uint16_t x367 = 90U;
volatile int32_t t67 = -233;
volatile int32_t t68 = -4086556;
int64_t x381 = INT64_MIN;
static int32_t t69 = 408;
volatile int16_t x387 = -1;
uint16_t x389 = 831U;
static volatile int64_t x398 = 512046713022478LL;
volatile int16_t x401 = INT16_MIN;
volatile int64_t x402 = INT64_MAX;
int32_t x408 = INT32_MAX;
volatile int8_t x416 = 37;
volatile int32_t t77 = 67043;
int32_t t79 = 0;
int16_t x438 = INT16_MIN;
int32_t t80 = -16190;
uint8_t x441 = 2U;
int32_t x444 = INT32_MIN;
uint8_t x445 = 3U;
int16_t x448 = -1;
volatile int32_t t83 = 380045;
uint16_t x453 = UINT16_MAX;
int8_t x455 = INT8_MIN;
int32_t x461 = INT32_MAX;
uint64_t x463 = UINT64_MAX;
static volatile int8_t x465 = -20;
volatile int64_t x467 = -1LL;
uint16_t x476 = 2042U;
static uint8_t x478 = 2U;
volatile int32_t t90 = -8769247;
volatile int32_t t91 = -6;
uint8_t x485 = UINT8_MAX;
volatile uint8_t x489 = 2U;
int32_t x490 = 375;
int32_t x491 = -1;
static int32_t x496 = INT32_MIN;
int16_t x501 = 2637;
uint64_t x502 = 2834468LLU;
static int8_t x504 = INT8_MAX;


void f0(void) {
	int32_t x1 = INT32_MAX;
	uint32_t x2 = 11163532U;
	static uint64_t x4 = 3368LLU;
	volatile int32_t t0 = 977711;

	t0 = ((x1*(x2|x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int16_t x7 = INT16_MIN;
	static int32_t t1 = 40;

	t1 = ((x5*(x6|x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	volatile int64_t x10 = INT64_MIN;
	int32_t x12 = INT32_MIN;

	t2 = ((x9*(x10|x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = INT16_MIN;
	volatile int32_t t3 = -39854;

	t3 = ((x17*(x18|x19))<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	int64_t x23 = -15846907LL;
	int32_t t4 = -2898;

	t4 = ((x21*(x22|x23))<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	volatile int32_t x26 = 207;
	static int16_t x27 = INT16_MAX;
	int16_t x28 = -1;

	t5 = ((x25*(x26|x27))<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x34 = -1LL;
	uint32_t x35 = 2358U;
	uint32_t x36 = 13790U;
	volatile int32_t t6 = -1;

	t6 = ((x33*(x34|x35))<=x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -1423765504111938LL;
	volatile int16_t x38 = -10075;
	uint64_t x39 = 8443411LLU;
	int64_t x40 = INT64_MIN;
	volatile int32_t t7 = -2;

	t7 = ((x37*(x38|x39))<=x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x42 = UINT8_MAX;
	static uint64_t x43 = 1240742036210LLU;
	int32_t t8 = 574;

	t8 = ((x41*(x42|x43))<=x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	int8_t x46 = INT8_MAX;
	int8_t x47 = INT8_MAX;
	int64_t x48 = INT64_MAX;

	t9 = ((x45*(x46|x47))<=x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 7531983645836026LLU;
	int8_t x50 = 53;
	static int32_t x51 = 77562;
	int16_t x52 = 7;
	int32_t t10 = -161;

	t10 = ((x49*(x50|x51))<=x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = -4439LL;
	volatile uint32_t x54 = UINT32_MAX;
	int16_t x55 = -1;
	int16_t x56 = INT16_MIN;

	t11 = ((x53*(x54|x55))<=x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = INT8_MAX;
	int8_t x66 = INT8_MIN;
	int64_t x67 = INT64_MAX;
	static volatile int32_t t12 = 458864066;

	t12 = ((x65*(x66|x67))<=x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = 1652;
	int32_t x70 = -1;
	static int32_t x71 = -1;
	int8_t x72 = 1;
	int32_t t13 = -170993353;

	t13 = ((x69*(x70|x71))<=x72);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x77 = UINT16_MAX;
	static int32_t x79 = -1;
	volatile int64_t x80 = INT64_MAX;
	volatile int32_t t14 = 2533171;

	t14 = ((x77*(x78|x79))<=x80);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x81 = -1;
	volatile int32_t x83 = -54849;
	uint16_t x84 = UINT16_MAX;
	static int32_t t15 = 7197;

	t15 = ((x81*(x82|x83))<=x84);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x85 = INT32_MAX;
	volatile uint64_t x86 = 102148312641098LLU;
	int16_t x87 = INT16_MAX;
	static volatile int32_t t16 = 0;

	t16 = ((x85*(x86|x87))<=x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x89 = 54U;
	int16_t x90 = INT16_MIN;
	volatile int64_t x91 = -1LL;
	int16_t x92 = INT16_MIN;
	volatile int32_t t17 = 72665403;

	t17 = ((x89*(x90|x91))<=x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x97 = 3514848U;
	static int16_t x98 = 15;
	int8_t x100 = INT8_MAX;

	t18 = ((x97*(x98|x99))<=x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x101 = 31U;
	uint16_t x102 = 55U;
	int8_t x103 = INT8_MIN;
	static int8_t x104 = -1;
	volatile int32_t t19 = -1605;

	t19 = ((x101*(x102|x103))<=x104);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = 3;
	volatile int16_t x108 = -52;
	int32_t t20 = -266617144;

	t20 = ((x105*(x106|x107))<=x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x117 = UINT32_MAX;
	uint8_t x118 = UINT8_MAX;
	int32_t x120 = -1;
	volatile int32_t t21 = 225048504;

	t21 = ((x117*(x118|x119))<=x120);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x121 = INT8_MAX;
	volatile uint8_t x122 = 40U;
	int32_t x123 = -1;
	uint64_t x124 = UINT64_MAX;
	volatile int32_t t22 = 2;

	t22 = ((x121*(x122|x123))<=x124);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x125 = 4167679775439291127LLU;
	int8_t x127 = -1;
	int64_t x128 = INT64_MIN;
	int32_t t23 = -48644913;

	t23 = ((x125*(x126|x127))<=x128);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x133 = INT64_MIN;
	int8_t x134 = INT8_MIN;
	static int64_t x136 = 156802910LL;
	int32_t t24 = -5405866;

	t24 = ((x133*(x134|x135))<=x136);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x137 = INT8_MIN;
	int32_t t25 = -484526035;

	t25 = ((x137*(x138|x139))<=x140);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x141 = 39242714LL;
	int8_t x142 = -1;
	int16_t x143 = -1;
	int8_t x144 = INT8_MIN;

	t26 = ((x141*(x142|x143))<=x144);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x149 = -14;
	static volatile uint64_t x150 = 1185LLU;
	static int32_t x151 = -1;
	int8_t x152 = -8;
	static int32_t t27 = 222360052;

	t27 = ((x149*(x150|x151))<=x152);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x157 = 25U;
	int8_t x158 = -7;
	static uint32_t x159 = 0U;
	static volatile int32_t t28 = -5;

	t28 = ((x157*(x158|x159))<=x160);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x161 = -8LL;
	int8_t x162 = INT8_MAX;
	int32_t x163 = -4491;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t29 = 0;

	t29 = ((x161*(x162|x163))<=x164);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x165 = -3184;
	int64_t x166 = INT64_MIN;
	volatile int32_t t30 = -207;

	t30 = ((x165*(x166|x167))<=x168);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x169 = 2U;
	static uint32_t x170 = 364467018U;
	uint8_t x171 = UINT8_MAX;
	static int8_t x172 = -5;
	int32_t t31 = 607395290;

	t31 = ((x169*(x170|x171))<=x172);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x174 = INT8_MIN;
	static uint8_t x175 = UINT8_MAX;
	volatile int32_t t32 = -3;

	t32 = ((x173*(x174|x175))<=x176);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x177 = 21;
	int8_t x178 = -1;
	static int64_t x179 = INT64_MIN;
	static volatile int32_t t33 = -1002;

	t33 = ((x177*(x178|x179))<=x180);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = -1LL;
	volatile int8_t x182 = 1;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t34 = -26;

	t34 = ((x181*(x182|x183))<=x184);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x186 = INT64_MIN;
	volatile uint8_t x188 = 1U;

	t35 = ((x185*(x186|x187))<=x188);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x189 = 31679LL;
	int64_t x191 = -3977121439LL;
	int32_t x192 = INT32_MIN;

	t36 = ((x189*(x190|x191))<=x192);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x198 = 872505876U;
	int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MIN;
	volatile int32_t t37 = -54;

	t37 = ((x197*(x198|x199))<=x200);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x201 = 34U;
	static uint8_t x202 = UINT8_MAX;
	static volatile int16_t x203 = INT16_MIN;
	int32_t x204 = INT32_MIN;
	volatile int32_t t38 = 47;

	t38 = ((x201*(x202|x203))<=x204);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x211 = 1405U;
	volatile int16_t x212 = -1;
	volatile int32_t t39 = 438468;

	t39 = ((x209*(x210|x211))<=x212);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x217 = -1;
	volatile uint8_t x219 = 1U;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t40 = -6;

	t40 = ((x217*(x218|x219))<=x220);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MIN;
	volatile int32_t t41 = -383;

	t41 = ((x221*(x222|x223))<=x224);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x225 = -1;
	int16_t x226 = INT16_MAX;
	uint16_t x227 = 0U;
	int32_t x228 = INT32_MAX;

	t42 = ((x225*(x226|x227))<=x228);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x232 = -1LL;
	volatile int32_t t43 = 509149;

	t43 = ((x229*(x230|x231))<=x232);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x233 = 97259LLU;
	int8_t x234 = INT8_MAX;
	int32_t x235 = INT32_MAX;
	int16_t x236 = INT16_MIN;
	static int32_t t44 = -81596924;

	t44 = ((x233*(x234|x235))<=x236);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x237 = 2U;
	int32_t x238 = INT32_MIN;

	t45 = ((x237*(x238|x239))<=x240);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x241 = 1033213U;
	uint64_t x243 = UINT64_MAX;
	int64_t x244 = -876228725344573LL;
	volatile int32_t t46 = -15902;

	t46 = ((x241*(x242|x243))<=x244);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x245 = 58U;
	uint32_t x246 = 112306989U;
	int32_t x247 = -500;
	static int32_t x248 = -1;
	volatile int32_t t47 = -247558508;

	t47 = ((x245*(x246|x247))<=x248);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x253 = 8110U;
	volatile uint64_t x254 = 4835628187373517LLU;
	uint16_t x255 = UINT16_MAX;
	int32_t t48 = -102523723;

	t48 = ((x253*(x254|x255))<=x256);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MAX;
	int32_t t49 = -12828257;

	t49 = ((x257*(x258|x259))<=x260);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x266 = 44676367U;
	int32_t x267 = -2990;
	int32_t x268 = -1;
	static volatile int32_t t50 = 27;

	t50 = ((x265*(x266|x267))<=x268);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x269 = INT64_MAX;
	static int64_t x270 = -1LL;
	int32_t x272 = 1415210;

	t51 = ((x269*(x270|x271))<=x272);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x278 = INT32_MIN;
	int64_t x279 = INT64_MIN;
	uint32_t x280 = 17984070U;
	int32_t t52 = -77976444;

	t52 = ((x277*(x278|x279))<=x280);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x286 = INT16_MIN;
	uint16_t x287 = 1U;
	int32_t t53 = 92319;

	t53 = ((x285*(x286|x287))<=x288);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x289 = 7U;
	uint8_t x290 = 2U;
	int32_t x291 = -1;

	t54 = ((x289*(x290|x291))<=x292);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x297 = -94697754;
	int32_t x299 = -1;
	volatile int64_t x300 = INT64_MIN;
	int32_t t55 = -14167;

	t55 = ((x297*(x298|x299))<=x300);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x301 = 81LLU;
	uint64_t x303 = 55785147245LLU;
	uint64_t x304 = 1889038244526028LLU;
	volatile int32_t t56 = -144943;

	t56 = ((x301*(x302|x303))<=x304);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x305 = -1;
	volatile int16_t x306 = -1;
	int32_t x307 = 1;
	static volatile int32_t t57 = -1467;

	t57 = ((x305*(x306|x307))<=x308);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x313 = INT32_MAX;
	int64_t x314 = -3374456948563LL;
	int64_t x315 = INT64_MAX;
	int64_t x316 = INT64_MAX;
	volatile int32_t t58 = 1207;

	t58 = ((x313*(x314|x315))<=x316);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x333 = UINT8_MAX;
	uint32_t x334 = UINT32_MAX;
	volatile int16_t x335 = INT16_MIN;
	int32_t x336 = INT32_MAX;
	int32_t t59 = 99873702;

	t59 = ((x333*(x334|x335))<=x336);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x341 = INT32_MAX;
	static int16_t x342 = -472;
	volatile int64_t x343 = -1LL;
	int64_t x344 = 792260893LL;
	volatile int32_t t60 = -29;

	t60 = ((x341*(x342|x343))<=x344);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x345 = 200478561818750235LLU;
	int32_t x346 = 1;
	volatile uint64_t x347 = UINT64_MAX;

	t61 = ((x345*(x346|x347))<=x348);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x349 = -4;
	uint32_t x350 = UINT32_MAX;
	uint8_t x351 = 22U;
	static int32_t t62 = 963769;

	t62 = ((x349*(x350|x351))<=x352);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x353 = 110U;
	static volatile int16_t x354 = INT16_MAX;
	volatile int16_t x356 = -197;
	int32_t t63 = 3;

	t63 = ((x353*(x354|x355))<=x356);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x357 = UINT16_MAX;
	int8_t x359 = INT8_MIN;
	uint32_t x360 = 125U;
	static int32_t t64 = 2046478;

	t64 = ((x357*(x358|x359))<=x360);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x361 = 57013U;
	int8_t x362 = -10;
	int16_t x363 = INT16_MIN;
	static int8_t x364 = INT8_MIN;
	int32_t t65 = 361283286;

	t65 = ((x361*(x362|x363))<=x364);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x365 = INT8_MAX;
	int8_t x368 = 25;
	volatile int32_t t66 = -2910707;

	t66 = ((x365*(x366|x367))<=x368);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x369 = 14;
	uint8_t x370 = 34U;
	int16_t x371 = INT16_MIN;
	uint8_t x372 = 0U;

	t67 = ((x369*(x370|x371))<=x372);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x377 = -1;
	int8_t x378 = INT8_MIN;
	uint16_t x379 = 3U;
	static volatile uint32_t x380 = 4U;

	t68 = ((x377*(x378|x379))<=x380);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x382 = 1379425LL;
	uint64_t x383 = UINT64_MAX;
	int8_t x384 = 4;

	t69 = ((x381*(x382|x383))<=x384);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x385 = 308;
	uint16_t x386 = UINT16_MAX;
	int16_t x388 = 16;
	static volatile int32_t t70 = -4860;

	t70 = ((x385*(x386|x387))<=x388);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x390 = INT16_MIN;
	volatile uint16_t x391 = 98U;
	uint64_t x392 = UINT64_MAX;
	volatile int32_t t71 = -739;

	t71 = ((x389*(x390|x391))<=x392);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x393 = UINT16_MAX;
	int64_t x394 = 13635LL;
	volatile uint64_t x395 = UINT64_MAX;
	static int32_t x396 = -1;
	volatile int32_t t72 = 538;

	t72 = ((x393*(x394|x395))<=x396);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x397 = INT16_MAX;
	uint64_t x399 = 2101563971LLU;
	int32_t x400 = INT32_MIN;
	int32_t t73 = 177;

	t73 = ((x397*(x398|x399))<=x400);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x403 = -33;
	int8_t x404 = -18;
	int32_t t74 = -230534;

	t74 = ((x401*(x402|x403))<=x404);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x405 = 3364U;
	int16_t x406 = INT16_MAX;
	uint8_t x407 = UINT8_MAX;
	static volatile int32_t t75 = 11654;

	t75 = ((x405*(x406|x407))<=x408);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x413 = 30U;
	int32_t x414 = -1;
	static int8_t x415 = INT8_MIN;
	static volatile int32_t t76 = -10869107;

	t76 = ((x413*(x414|x415))<=x416);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x417 = 1LL;
	static int32_t x418 = 100551577;
	int32_t x419 = -7;
	int16_t x420 = -1;

	t77 = ((x417*(x418|x419))<=x420);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x421 = INT8_MIN;
	volatile int8_t x422 = -1;
	int8_t x423 = -1;
	static volatile int8_t x424 = 4;
	static volatile int32_t t78 = -122691;

	t78 = ((x421*(x422|x423))<=x424);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x429 = 0U;
	uint16_t x430 = 28941U;
	uint64_t x431 = 1LLU;
	int32_t x432 = INT32_MIN;

	t79 = ((x429*(x430|x431))<=x432);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x437 = UINT16_MAX;
	int64_t x439 = INT64_MIN;
	uint32_t x440 = 7450U;

	t80 = ((x437*(x438|x439))<=x440);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x442 = UINT8_MAX;
	int16_t x443 = -1;
	static volatile int32_t t81 = -41;

	t81 = ((x441*(x442|x443))<=x444);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x446 = INT64_MAX;
	uint64_t x447 = UINT64_MAX;
	int32_t t82 = -313690;

	t82 = ((x445*(x446|x447))<=x448);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x449 = 0;
	int16_t x450 = 1;
	volatile int16_t x451 = INT16_MIN;
	uint8_t x452 = UINT8_MAX;

	t83 = ((x449*(x450|x451))<=x452);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x454 = INT32_MAX;
	int64_t x456 = INT64_MAX;
	int32_t t84 = 6;

	t84 = ((x453*(x454|x455))<=x456);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x457 = UINT32_MAX;
	static int8_t x458 = 2;
	int16_t x459 = INT16_MAX;
	int64_t x460 = 6LL;
	static int32_t t85 = -543;

	t85 = ((x457*(x458|x459))<=x460);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x462 = UINT64_MAX;
	int8_t x464 = -1;
	static int32_t t86 = 12;

	t86 = ((x461*(x462|x463))<=x464);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x466 = 2U;
	volatile int64_t x468 = 698436437182144LL;
	int32_t t87 = -16494941;

	t87 = ((x465*(x466|x467))<=x468);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x469 = 18;
	static int8_t x470 = -1;
	static int32_t x471 = INT32_MAX;
	int8_t x472 = -1;
	int32_t t88 = -943681;

	t88 = ((x469*(x470|x471))<=x472);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x473 = INT8_MIN;
	int32_t x474 = INT32_MAX;
	int16_t x475 = INT16_MIN;
	int32_t t89 = 795931;

	t89 = ((x473*(x474|x475))<=x476);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x477 = INT64_MAX;
	volatile uint64_t x479 = 3658391002942539LLU;
	uint8_t x480 = 69U;

	t90 = ((x477*(x478|x479))<=x480);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x481 = 6U;
	int64_t x482 = -19052749533315751LL;
	int32_t x483 = -1;
	static int32_t x484 = INT32_MIN;

	t91 = ((x481*(x482|x483))<=x484);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x486 = -1;
	uint8_t x487 = 2U;
	int16_t x488 = INT16_MIN;
	int32_t t92 = -94043060;

	t92 = ((x485*(x486|x487))<=x488);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x492 = -494637;
	static volatile int32_t t93 = 3;

	t93 = ((x489*(x490|x491))<=x492);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x493 = 273531960469302LLU;
	int8_t x494 = 1;
	static int8_t x495 = -1;
	volatile int32_t t94 = -346193624;

	t94 = ((x493*(x494|x495))<=x496);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x497 = 8671216259454LL;
	volatile int32_t x498 = 1;
	int32_t x499 = -1;
	static uint8_t x500 = 46U;
	int32_t t95 = -25520;

	t95 = ((x497*(x498|x499))<=x500);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x503 = -54790LL;
	int32_t t96 = -1;

	t96 = ((x501*(x502|x503))<=x504);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x505 = 1U;
	volatile int64_t x506 = INT64_MIN;
	uint8_t x507 = UINT8_MAX;
	static uint64_t x508 = UINT64_MAX;
	int32_t t97 = -449;

	t97 = ((x505*(x506|x507))<=x508);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x513 = -1;
	int32_t x514 = -3412;
	static int64_t x515 = 81LL;
	int8_t x516 = -1;
	int32_t t98 = 52;

	t98 = ((x513*(x514|x515))<=x516);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x517 = -1LL;
	int8_t x518 = INT8_MIN;
	uint32_t x519 = UINT32_MAX;
	static int64_t x520 = INT64_MIN;
	volatile int32_t t99 = 985944;

	t99 = ((x517*(x518|x519))<=x520);

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

