#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x5 = 174;
volatile int64_t t0 = -241886256925173570LL;
volatile uint16_t x13 = 13106U;
static int16_t x14 = INT16_MIN;
int16_t x15 = -10;
int64_t t3 = -102202LL;
uint32_t x28 = 15U;
static int16_t x37 = INT16_MIN;
static uint32_t x39 = 245450U;
uint32_t x49 = UINT32_MAX;
static uint8_t x69 = 12U;
uint16_t x71 = 18408U;
int32_t x73 = 85487633;
volatile uint8_t x75 = UINT8_MAX;
uint8_t x83 = UINT8_MAX;
uint32_t t13 = 454489U;
static int64_t x88 = INT64_MIN;
int16_t x90 = INT16_MIN;
static uint64_t x92 = 4459LLU;
volatile uint64_t x94 = 12267566717119LLU;
int32_t x96 = INT32_MAX;
volatile uint64_t t16 = 6556459465946LLU;
int8_t x100 = INT8_MIN;
int32_t x103 = -673919206;
static int8_t x113 = INT8_MIN;
volatile uint16_t x115 = 2U;
volatile uint64_t x116 = 93350312281896462LLU;
int32_t x120 = -22179193;
volatile int32_t x123 = 4960;
int32_t x127 = INT32_MIN;
int16_t x128 = -12;
static uint32_t t22 = 15445U;
volatile int32_t x137 = -1;
int8_t x139 = INT8_MIN;
int32_t x154 = INT32_MIN;
uint8_t x155 = 24U;
static int64_t t24 = -4LL;
static uint32_t x171 = 516841U;
uint64_t x174 = 1231LLU;
int8_t x176 = INT8_MIN;
uint32_t x182 = 17453U;
volatile int32_t t29 = -2023363;
uint16_t x195 = 2U;
int32_t x196 = INT32_MIN;
int32_t x200 = INT32_MAX;
volatile uint32_t x202 = UINT32_MAX;
uint64_t t34 = 446410LLU;
int64_t x219 = -30657613777LL;
int8_t x244 = -8;
int32_t t39 = 17;
static volatile uint64_t x257 = 5LLU;
int32_t x259 = INT32_MIN;
volatile int32_t x262 = -1;
static volatile uint32_t x268 = UINT32_MAX;
static volatile int64_t t44 = 995945823744796844LL;
int64_t x284 = INT64_MIN;
volatile int64_t t47 = -149488824LL;
static volatile int64_t t48 = -60703345357998LL;
int16_t x295 = INT16_MIN;
int64_t x296 = INT64_MAX;
static uint32_t x299 = 122888U;
uint16_t x316 = 1U;
volatile int64_t t53 = 742784786712893906LL;
volatile uint64_t t54 = 1317LLU;
volatile int32_t x332 = INT32_MAX;
uint64_t t56 = 2116474260LLU;
int16_t x333 = INT16_MIN;
uint32_t x336 = 3606U;
volatile uint64_t t59 = 11LLU;
uint16_t x346 = UINT16_MAX;
uint16_t x349 = UINT16_MAX;
uint32_t x357 = 156U;
static volatile int64_t t63 = 59163564LL;
uint16_t x379 = UINT16_MAX;
static volatile uint64_t x385 = UINT64_MAX;
int64_t x395 = INT64_MIN;
static int16_t x399 = 374;
static volatile uint32_t t69 = 61113U;
uint16_t x401 = UINT16_MAX;
volatile int32_t t70 = -492267;
uint8_t x409 = 13U;
int8_t x414 = -18;
uint16_t x415 = 208U;
int32_t x419 = INT32_MIN;
uint64_t t74 = 1LLU;
volatile int8_t x426 = 25;
uint64_t t75 = 416025294608801LLU;
uint64_t t76 = 19156LLU;
uint64_t x437 = 6389381320LLU;
volatile uint16_t x444 = UINT16_MAX;
uint32_t x446 = 2U;
uint8_t x448 = 37U;
static volatile int8_t x459 = -2;
uint16_t x487 = 31U;
uint16_t x489 = UINT16_MAX;
static uint64_t x492 = 944694463LLU;
uint64_t t87 = 15267158160214LLU;
volatile int8_t x499 = INT8_MIN;
static int32_t x500 = 3;
volatile int32_t x502 = 13;
volatile int64_t t89 = -34107LL;
int64_t x508 = -1LL;
volatile int32_t x512 = -1;
static volatile int32_t x517 = -1;
static int8_t x528 = -1;
uint16_t x535 = 10U;
int32_t x547 = INT32_MIN;
static int16_t x548 = INT16_MIN;
int8_t x549 = 0;
int32_t x556 = -1;


void f0(void) {
	uint8_t x6 = 29U;
	int64_t x7 = INT64_MAX;
	int32_t x8 = INT32_MIN;

	t0 = ((x5/(x6%x7))%x8);

	if (t0 != 6LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x16 = INT32_MIN;
	int32_t t1 = 2;

	t1 = ((x13/(x14%x15))%x16);

	if (t1 != -1638) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = -1LL;
	static int32_t x18 = -1;
	int16_t x19 = INT16_MIN;
	int32_t x20 = -1;
	int64_t t2 = 5943LL;

	t2 = ((x17/(x18%x19))%x20);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x21 = -8;
	int64_t x22 = INT64_MIN;
	int16_t x23 = 12;
	int64_t x24 = INT64_MAX;

	t3 = ((x21/(x22%x23))%x24);

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -1;
	uint16_t x26 = UINT16_MAX;
	volatile uint16_t x27 = 26U;
	volatile uint32_t t4 = 5453080U;

	t4 = ((x25/(x26%x27))%x28);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x33 = -1LL;
	int32_t x34 = INT32_MAX;
	uint16_t x35 = 203U;
	uint64_t x36 = 66LLU;
	volatile uint64_t t5 = 470715529LLU;

	t5 = ((x33/(x34%x35))%x36);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x38 = 13583;
	volatile int8_t x40 = INT8_MIN;
	uint32_t t6 = 72U;

	t6 = ((x37/(x38%x39))%x40);

	if (t6 != 316199U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = 1;
	int32_t x42 = INT32_MIN;
	uint64_t x43 = 4004311668729809046LLU;
	int8_t x44 = -10;
	volatile uint64_t t7 = 9395643214LLU;

	t7 = ((x41/(x42%x43))%x44);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = 0U;
	int64_t x46 = -1130769358416887969LL;
	volatile int16_t x47 = 3568;
	int16_t x48 = 13398;
	int64_t t8 = -29004654103LL;

	t8 = ((x45/(x46%x47))%x48);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x50 = 180610337523LL;
	static volatile int8_t x51 = 8;
	int32_t x52 = -113782;
	static int64_t t9 = 467LL;

	t9 = ((x49/(x50%x51))%x52);

	if (t9 != 50641LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = -1;
	int16_t x54 = -3;
	uint64_t x55 = UINT64_MAX;
	uint8_t x56 = UINT8_MAX;
	uint64_t t10 = 5356876356349LLU;

	t10 = ((x53/(x54%x55))%x56);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x70 = UINT64_MAX;
	static uint32_t x72 = 41U;
	volatile uint64_t t11 = 56870364700999773LLU;

	t11 = ((x69/(x70%x71))%x72);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x74 = 2;
	uint32_t x76 = UINT32_MAX;
	volatile uint32_t t12 = 206U;

	t12 = ((x73/(x74%x75))%x76);

	if (t12 != 42743816U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x81 = -1;
	static volatile uint32_t x82 = 21320U;
	int8_t x84 = INT8_MIN;

	t13 = ((x81/(x82%x83))%x84);

	if (t13 != 27709466U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x85 = INT16_MAX;
	uint64_t x86 = UINT64_MAX;
	int8_t x87 = INT8_MIN;
	volatile uint64_t t14 = 1321LLU;

	t14 = ((x85/(x86%x87))%x88);

	if (t14 != 258LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x89 = INT8_MIN;
	int64_t x91 = INT64_MIN;
	volatile uint64_t t15 = 168437497LLU;

	t15 = ((x89/(x90%x91))%x92);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x93 = 1U;
	volatile int64_t x95 = 14737LL;

	t16 = ((x93/(x94%x95))%x96);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x97 = INT8_MIN;
	static int16_t x98 = INT16_MIN;
	static int64_t x99 = INT64_MAX;
	int64_t t17 = 271948056149LL;

	t17 = ((x97/(x98%x99))%x100);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x101 = 1388241U;
	int16_t x102 = INT16_MIN;
	static volatile int16_t x104 = -1;
	volatile uint32_t t18 = 3653U;

	t18 = ((x101/(x102%x103))%x104);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x114 = -1;
	uint64_t t19 = 28LLU;

	t19 = ((x113/(x114%x115))%x116);

	if (t19 != 128LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x117 = INT8_MIN;
	static int8_t x118 = INT8_MIN;
	int16_t x119 = INT16_MIN;
	volatile int32_t t20 = -1466446;

	t20 = ((x117/(x118%x119))%x120);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = -57;
	uint8_t x122 = 2U;
	static volatile uint64_t x124 = 703402138828896542LLU;
	static uint64_t t21 = 14744LLU;

	t21 = ((x121/(x122%x123))%x124);

	if (t21 != 158288464158241496LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x125 = 1U;
	static volatile int16_t x126 = INT16_MIN;

	t22 = ((x125/(x126%x127))%x128);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x138 = -1;
	uint32_t x140 = UINT32_MAX;
	static uint32_t t23 = 2U;

	t23 = ((x137/(x138%x139))%x140);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x153 = 4126942U;
	static int64_t x156 = -150509881670LL;

	t24 = ((x153/(x154%x155))%x156);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x165 = INT8_MAX;
	int64_t x166 = INT64_MAX;
	uint16_t x167 = 201U;
	uint16_t x168 = 14843U;
	static int64_t t25 = -61869973LL;

	t25 = ((x165/(x166%x167))%x168);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x169 = -1094;
	uint16_t x170 = 34U;
	int8_t x172 = INT8_MIN;
	uint32_t t26 = 1552972913U;

	t26 = ((x169/(x170%x171))%x172);

	if (t26 != 126322535U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x173 = 6U;
	static int64_t x175 = INT64_MAX;
	uint64_t t27 = 52076005169355683LLU;

	t27 = ((x173/(x174%x175))%x176);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x181 = INT64_MIN;
	int64_t x183 = INT64_MAX;
	static int8_t x184 = -1;
	int64_t t28 = -13089219LL;

	t28 = ((x181/(x182%x183))%x184);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MIN;
	static volatile uint16_t x187 = 6U;
	int16_t x188 = -1;

	t29 = ((x185/(x186%x187))%x188);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x193 = -1;
	uint8_t x194 = 1U;
	int32_t t30 = 1494077;

	t30 = ((x193/(x194%x195))%x196);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x197 = 0LL;
	static uint64_t x198 = 2774897444LLU;
	volatile int64_t x199 = INT64_MAX;
	uint64_t t31 = 1020279697476LLU;

	t31 = ((x197/(x198%x199))%x200);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x201 = INT16_MAX;
	int64_t x203 = INT64_MAX;
	uint32_t x204 = 169U;
	int64_t t32 = 43902162500669LL;

	t32 = ((x201/(x202%x203))%x204);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x205 = -232862581909481LL;
	uint32_t x206 = 6855149U;
	volatile int32_t x207 = INT32_MIN;
	volatile uint32_t x208 = UINT32_MAX;
	volatile int64_t t33 = -6478194842LL;

	t33 = ((x205/(x206%x207))%x208);

	if (t33 != -33969003LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x209 = -1;
	static int8_t x210 = -53;
	uint32_t x211 = UINT32_MAX;
	uint64_t x212 = 26058848777LLU;

	t34 = ((x209/(x210%x211))%x212);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x213 = 490U;
	volatile int32_t x214 = 6656;
	static int8_t x215 = INT8_MAX;
	int64_t x216 = -1LL;
	volatile int64_t t35 = 29898380629737LL;

	t35 = ((x213/(x214%x215))%x216);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x217 = -4131;
	static volatile uint16_t x218 = 2924U;
	volatile int32_t x220 = INT32_MIN;
	static int64_t t36 = -996216LL;

	t36 = ((x217/(x218%x219))%x220);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x221 = INT8_MAX;
	uint32_t x222 = UINT32_MAX;
	uint64_t x223 = UINT64_MAX;
	int8_t x224 = INT8_MAX;
	volatile uint64_t t37 = 267477826218865479LLU;

	t37 = ((x221/(x222%x223))%x224);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x233 = INT16_MAX;
	uint16_t x234 = UINT16_MAX;
	static volatile int64_t x235 = 377429829709LL;
	uint8_t x236 = 20U;
	int64_t t38 = -28087748LL;

	t38 = ((x233/(x234%x235))%x236);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x241 = INT32_MIN;
	volatile uint16_t x242 = UINT16_MAX;
	static uint8_t x243 = 113U;

	t39 = ((x241/(x242%x243))%x244);

	if (t39 != -3) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x249 = 619877231LLU;
	volatile int64_t x250 = INT64_MIN;
	uint8_t x251 = 6U;
	uint32_t x252 = UINT32_MAX;
	uint64_t t40 = 474304409946266LLU;

	t40 = ((x249/(x250%x251))%x252);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x253 = INT64_MAX;
	int32_t x254 = -1;
	static int64_t x255 = 1140420251LL;
	uint16_t x256 = 94U;
	int64_t t41 = 357497LL;

	t41 = ((x253/(x254%x255))%x256);

	if (t41 != -35LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x258 = INT16_MIN;
	static int32_t x260 = INT32_MIN;
	uint64_t t42 = 6587906253LLU;

	t42 = ((x257/(x258%x259))%x260);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x261 = UINT32_MAX;
	static int32_t x263 = INT32_MAX;
	static uint32_t x264 = UINT32_MAX;
	static uint32_t t43 = 2751U;

	t43 = ((x261/(x262%x263))%x264);

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x265 = -17;
	int64_t x266 = -1LL;
	static int8_t x267 = INT8_MIN;

	t44 = ((x265/(x266%x267))%x268);

	if (t44 != 17LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x277 = 1;
	int64_t x278 = -99511315LL;
	int16_t x279 = INT16_MIN;
	static int64_t x280 = -3163LL;
	volatile int64_t t45 = -1LL;

	t45 = ((x277/(x278%x279))%x280);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x281 = UINT64_MAX;
	volatile uint64_t x282 = UINT64_MAX;
	int8_t x283 = INT8_MIN;
	uint64_t t46 = 39609300497559LLU;

	t46 = ((x281/(x282%x283))%x284);

	if (t46 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x285 = INT8_MIN;
	static int64_t x286 = -1LL;
	int16_t x287 = 19;
	int8_t x288 = -1;

	t47 = ((x285/(x286%x287))%x288);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x289 = 4;
	int64_t x290 = INT64_MAX;
	int32_t x291 = INT32_MAX;
	static volatile int64_t x292 = -2644803630010706LL;

	t48 = ((x289/(x290%x291))%x292);

	if (t48 != 4LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x293 = UINT16_MAX;
	static int64_t x294 = -1LL;
	volatile int64_t t49 = 1798LL;

	t49 = ((x293/(x294%x295))%x296);

	if (t49 != -65535LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x297 = INT8_MAX;
	volatile int8_t x298 = -3;
	uint8_t x300 = 47U;
	volatile uint32_t t50 = 11032U;

	t50 = ((x297/(x298%x299))%x300);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x301 = 264180002964884LL;
	volatile uint8_t x302 = 17U;
	int64_t x303 = INT64_MIN;
	static volatile int64_t x304 = -82368048LL;
	int64_t t51 = 8908450225127871LL;

	t51 = ((x301/(x302%x303))%x304);

	if (t51 != 32398484LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x305 = 13148U;
	int64_t x306 = -58LL;
	uint32_t x307 = UINT32_MAX;
	int16_t x308 = 7;
	volatile int64_t t52 = -33484793724LL;

	t52 = ((x305/(x306%x307))%x308);

	if (t52 != -2LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x313 = INT64_MIN;
	static int32_t x314 = 5626838;
	int16_t x315 = 70;

	t53 = ((x313/(x314%x315))%x316);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x321 = UINT64_MAX;
	volatile int64_t x322 = -1LL;
	uint8_t x323 = UINT8_MAX;
	int64_t x324 = INT64_MAX;

	t54 = ((x321/(x322%x323))%x324);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x325 = 62750U;
	int64_t x326 = INT64_MAX;
	uint8_t x327 = UINT8_MAX;
	volatile int16_t x328 = INT16_MAX;
	int64_t t55 = 3674LL;

	t55 = ((x325/(x326%x327))%x328);

	if (t55 != 494LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x329 = INT64_MIN;
	uint32_t x330 = 11217U;
	static uint64_t x331 = 1752LLU;

	t56 = ((x329/(x330%x331))%x332);

	if (t56 != 420358501LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x334 = -2;
	volatile uint64_t x335 = 458752736182774LLU;
	volatile uint64_t t57 = 49820070LLU;

	t57 = ((x333/(x334%x335))%x336);

	if (t57 != 902LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x337 = INT32_MIN;
	int64_t x338 = -13368543682477253LL;
	static int64_t x339 = -2247299728864792LL;
	int8_t x340 = 11;
	volatile int64_t t58 = 1128LL;

	t58 = ((x337/(x338%x339))%x340);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x341 = UINT64_MAX;
	uint16_t x342 = 843U;
	volatile uint32_t x343 = 8282U;
	int32_t x344 = INT32_MIN;

	t59 = ((x341/(x342%x343))%x344);

	if (t59 != 21882258687674438LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x345 = 1U;
	int64_t x347 = INT64_MAX;
	int8_t x348 = INT8_MIN;
	static volatile int64_t t60 = -53394LL;

	t60 = ((x345/(x346%x347))%x348);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x350 = INT16_MIN;
	static uint16_t x351 = UINT16_MAX;
	int8_t x352 = INT8_MAX;
	int32_t t61 = 5343201;

	t61 = ((x349/(x350%x351))%x352);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x358 = 733354U;
	int64_t x359 = 640534LL;
	int32_t x360 = INT32_MIN;
	int64_t t62 = 240562965LL;

	t62 = ((x357/(x358%x359))%x360);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x361 = INT8_MAX;
	uint32_t x362 = 263458U;
	static volatile int32_t x363 = 427075487;
	int64_t x364 = -3786450133510LL;

	t63 = ((x361/(x362%x363))%x364);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x365 = 14741784;
	uint32_t x366 = 45812U;
	int8_t x367 = 3;
	volatile uint16_t x368 = 12118U;
	volatile uint32_t t64 = 419U;

	t64 = ((x365/(x366%x367))%x368);

	if (t64 != 3148U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x373 = 9487U;
	int8_t x374 = 1;
	volatile int8_t x375 = 20;
	static volatile int8_t x376 = 10;
	int32_t t65 = 37823265;

	t65 = ((x373/(x374%x375))%x376);

	if (t65 != 7) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x377 = INT32_MIN;
	static int16_t x378 = -6;
	uint64_t x380 = 1148LLU;
	volatile uint64_t t66 = 12LLU;

	t66 = ((x377/(x378%x379))%x380);

	if (t66 != 833LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x386 = 57LLU;
	static int64_t x387 = 54259885056LL;
	volatile int16_t x388 = INT16_MAX;
	uint64_t t67 = 6409751392928LLU;

	t67 = ((x385/(x386%x387))%x388);

	if (t67 != 25868LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x393 = 33654328U;
	int16_t x394 = INT16_MIN;
	volatile int16_t x396 = INT16_MAX;
	volatile int64_t t68 = -2069712LL;

	t68 = ((x393/(x394%x395))%x396);

	if (t68 != -1027LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x397 = UINT32_MAX;
	int16_t x398 = INT16_MIN;
	static volatile int32_t x400 = INT32_MAX;

	t69 = ((x397/(x398%x399))%x400);

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x402 = -1;
	int32_t x403 = -5;
	int32_t x404 = INT32_MAX;

	t70 = ((x401/(x402%x403))%x404);

	if (t70 != -65535) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x410 = 9638099U;
	uint32_t x411 = UINT32_MAX;
	uint8_t x412 = 42U;
	volatile uint32_t t71 = 14U;

	t71 = ((x409/(x410%x411))%x412);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x413 = 202521U;
	volatile int16_t x416 = -12215;
	static volatile uint32_t t72 = 12602488U;

	t72 = ((x413/(x414%x415))%x416);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x417 = INT8_MIN;
	int8_t x418 = 1;
	int32_t x420 = INT32_MIN;
	int32_t t73 = -1;

	t73 = ((x417/(x418%x419))%x420);

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x421 = -1;
	uint64_t x422 = 983376569LLU;
	static uint64_t x423 = UINT64_MAX;
	static int16_t x424 = INT16_MIN;

	t74 = ((x421/(x422%x423))%x424);

	if (t74 != 18758575966LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x425 = -1LL;
	uint64_t x427 = UINT64_MAX;
	int64_t x428 = INT64_MIN;

	t75 = ((x425/(x426%x427))%x428);

	if (t75 != 737869762948382064LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x429 = 1291LLU;
	volatile uint16_t x430 = UINT16_MAX;
	uint64_t x431 = UINT64_MAX;
	volatile uint64_t x432 = UINT64_MAX;

	t76 = ((x429/(x430%x431))%x432);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x433 = INT8_MIN;
	uint64_t x434 = 189528204642928LLU;
	uint64_t x435 = 919LLU;
	int32_t x436 = -83457337;
	volatile uint64_t t77 = 5666635909637LLU;

	t77 = ((x433/(x434%x435))%x436);

	if (t77 != 62744027461597113LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x438 = UINT64_MAX;
	int32_t x439 = -694479363;
	int32_t x440 = -437491;
	volatile uint64_t t78 = 4575272949319LLU;

	t78 = ((x437/(x438%x439))%x440);

	if (t78 != 9LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x441 = INT32_MAX;
	uint16_t x442 = UINT16_MAX;
	int16_t x443 = 34;
	int32_t t79 = 13786988;

	t79 = ((x441/(x442%x443))%x444);

	if (t79 != 36622) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x445 = 266144869200718LL;
	int16_t x447 = -1;
	int64_t t80 = -889LL;

	t80 = ((x445/(x446%x447))%x448);

	if (t80 != 7LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x449 = INT16_MAX;
	uint64_t x450 = 11203384525LLU;
	int64_t x451 = -33474LL;
	int16_t x452 = -10;
	volatile uint64_t t81 = 128395716LLU;

	t81 = ((x449/(x450%x451))%x452);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x453 = 11815194;
	uint16_t x454 = 5133U;
	int16_t x455 = INT16_MAX;
	uint16_t x456 = UINT16_MAX;
	static volatile int32_t t82 = -1737421;

	t82 = ((x453/(x454%x455))%x456);

	if (t82 != 2301) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x457 = 3;
	static uint8_t x458 = UINT8_MAX;
	int32_t x460 = -1;
	int32_t t83 = 577344787;

	t83 = ((x457/(x458%x459))%x460);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x461 = 1081745526888LL;
	int32_t x462 = INT32_MIN;
	static uint64_t x463 = UINT64_MAX;
	uint16_t x464 = 3U;
	uint64_t t84 = 15LLU;

	t84 = ((x461/(x462%x463))%x464);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x481 = INT32_MIN;
	int64_t x482 = INT64_MIN;
	uint64_t x483 = 6364646168552802372LLU;
	volatile int32_t x484 = -120;
	static volatile uint64_t t85 = 268658758833LLU;

	t85 = ((x481/(x482%x483))%x484);

	if (t85 != 6LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x485 = INT16_MAX;
	int16_t x486 = -1;
	int8_t x488 = INT8_MIN;
	int32_t t86 = 26;

	t86 = ((x485/(x486%x487))%x488);

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x490 = UINT32_MAX;
	int8_t x491 = INT8_MIN;

	t87 = ((x489/(x490%x491))%x492);

	if (t87 != 516LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x497 = UINT8_MAX;
	uint8_t x498 = 1U;
	static int32_t t88 = -481;

	t88 = ((x497/(x498%x499))%x500);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x501 = -1;
	uint32_t x503 = 105328U;
	int64_t x504 = INT64_MIN;

	t89 = ((x501/(x502%x503))%x504);

	if (t89 != 330382099LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x505 = INT32_MAX;
	int64_t x506 = INT64_MIN;
	static int32_t x507 = -304049378;
	int64_t t90 = 755115602142475LL;

	t90 = ((x505/(x506%x507))%x508);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x509 = -1198;
	int16_t x510 = -2653;
	int8_t x511 = -57;
	int32_t t91 = -348387859;

	t91 = ((x509/(x510%x511))%x512);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x518 = -1LL;
	int32_t x519 = INT32_MIN;
	volatile uint8_t x520 = UINT8_MAX;
	int64_t t92 = 17439LL;

	t92 = ((x517/(x518%x519))%x520);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x521 = UINT64_MAX;
	int32_t x522 = -1;
	uint32_t x523 = 158231684U;
	int8_t x524 = -1;
	uint64_t t93 = 284135305LLU;

	t93 = ((x521/(x522%x523))%x524);

	if (t93 != 812208726039LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x525 = -25140387967224034LL;
	uint64_t x526 = 4LLU;
	static uint32_t x527 = UINT32_MAX;
	volatile uint64_t t94 = 14LLU;

	t94 = ((x525/(x526%x527))%x528);

	if (t94 != 4605400921435581895LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x529 = -1;
	int32_t x530 = INT32_MIN;
	int16_t x531 = INT16_MAX;
	uint32_t x532 = UINT32_MAX;
	static volatile uint32_t t95 = 316300010U;

	t95 = ((x529/(x530%x531))%x532);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x533 = UINT8_MAX;
	int16_t x534 = INT16_MIN;
	static uint16_t x536 = 89U;
	volatile int32_t t96 = 12;

	t96 = ((x533/(x534%x535))%x536);

	if (t96 != -31) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x545 = -703;
	uint64_t x546 = UINT64_MAX;
	uint64_t t97 = 3808172667208168LLU;

	t97 = ((x545/(x546%x547))%x548);

	if (t97 != 8589934595LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x550 = 1141U;
	static uint16_t x551 = 20U;
	volatile int16_t x552 = -1;
	volatile int32_t t98 = -84;

	t98 = ((x549/(x550%x551))%x552);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x553 = INT16_MIN;
	static int16_t x554 = INT16_MIN;
	int64_t x555 = 104LL;
	static volatile int64_t t99 = -3099493819527304LL;

	t99 = ((x553/(x554%x555))%x556);

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

