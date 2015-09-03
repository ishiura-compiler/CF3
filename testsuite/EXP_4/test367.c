#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = UINT8_MAX;
uint16_t x3 = 17827U;
volatile uint64_t x4 = UINT64_MAX;
uint16_t x5 = UINT16_MAX;
uint64_t t1 = 8620431LLU;
static volatile int16_t x9 = INT16_MIN;
int16_t x18 = INT16_MAX;
uint64_t x39 = UINT64_MAX;
static int64_t x40 = 9LL;
volatile int64_t t7 = 22636501624103965LL;
uint32_t x80 = UINT32_MAX;
int64_t x150 = 2177338058821987242LL;
int8_t x159 = -1;
int8_t x170 = -2;
int16_t x180 = -1;
volatile int16_t x188 = -3;
volatile int32_t t19 = 812265;
static int16_t x203 = INT16_MIN;
int32_t x221 = -1;
uint8_t x223 = 15U;
static int32_t t22 = -147171;
int32_t x249 = 63198;
volatile uint64_t t23 = 3638633LLU;
uint32_t x257 = 402313U;
uint8_t x263 = UINT8_MAX;
int64_t x264 = -1LL;
volatile int64_t t25 = 4919381LL;
static volatile int32_t t28 = 316468;
int32_t x289 = INT32_MIN;
static volatile uint64_t t30 = 3711243930744LLU;
int8_t x301 = INT8_MAX;
int8_t x303 = 1;
static uint64_t x306 = 76LLU;
uint8_t x315 = UINT8_MAX;
uint64_t t33 = 33049570276399LLU;
static volatile uint64_t t34 = 478576837335045LLU;
int32_t x327 = -2762;
uint8_t x350 = UINT8_MAX;
int64_t x355 = -1LL;
static volatile int16_t x357 = 2;
int8_t x367 = INT8_MIN;
static volatile uint64_t t41 = 524002LLU;
int8_t x394 = INT8_MIN;
static uint64_t x404 = UINT64_MAX;
volatile int16_t x427 = INT16_MIN;
int64_t x435 = -987493828974518LL;
static uint64_t t51 = 1361222LLU;
uint32_t x442 = 3357675U;
int32_t x443 = 567;
int32_t x444 = -1;
int8_t x448 = 0;
static volatile uint8_t x449 = UINT8_MAX;
int64_t x466 = -6678243LL;
uint64_t x467 = UINT64_MAX;
volatile int8_t x473 = -27;
uint16_t x474 = UINT16_MAX;
uint64_t t57 = 11848369035318LLU;
int32_t x500 = INT32_MAX;
uint32_t x513 = 837651574U;
int64_t t61 = -911371109788LL;
volatile uint64_t x519 = UINT64_MAX;
uint64_t x520 = 57091453242751760LLU;
int32_t t63 = 30;
static int16_t x555 = 1;
volatile uint64_t t65 = 2450124303342LLU;
static uint64_t x574 = 2103960183LLU;
volatile uint64_t t66 = 139LLU;
int32_t x589 = INT32_MIN;
static int8_t x590 = 3;
volatile int32_t x601 = INT32_MIN;
int64_t x605 = INT64_MIN;
int8_t x617 = INT8_MAX;
uint32_t x619 = UINT32_MAX;
volatile int16_t x627 = INT16_MIN;
int16_t x634 = INT16_MIN;
uint8_t x642 = 1U;
volatile int16_t x643 = INT16_MIN;
static volatile uint64_t t77 = 1369301481042068551LLU;
uint64_t x680 = UINT64_MAX;
int32_t x696 = 828;
volatile uint8_t x704 = UINT8_MAX;
volatile int64_t t81 = 4398848202201465LL;
int16_t x707 = INT16_MAX;
uint64_t t82 = 455LLU;
int8_t x715 = 1;
int32_t t83 = -32;
int16_t x738 = -1;
volatile int8_t x741 = INT8_MIN;
uint8_t x743 = 77U;
int32_t t87 = 6681;
int64_t t88 = -9142904861LL;
volatile int32_t x771 = -1;
uint8_t x782 = 1U;
volatile int8_t x799 = INT8_MIN;
static volatile int32_t t95 = 81936049;
int16_t x812 = -6;
volatile uint64_t t97 = 252974LLU;
uint8_t x822 = UINT8_MAX;
int64_t t98 = -173447169LL;
uint64_t x825 = UINT64_MAX;
volatile uint64_t t99 = 8818056401009044LLU;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	static volatile uint64_t t0 = 36LLU;

	t0 = (x1*(x2*(x3*x4)));

	if (t0 != 18446744073132224221LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = UINT64_MAX;
	int8_t x7 = -9;
	int64_t x8 = -1LL;

	t1 = (x5*(x6*(x7*x8)));

	if (t1 != 18446744073708961801LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MAX;
	uint64_t x11 = UINT64_MAX;
	int8_t x12 = INT8_MAX;
	static uint64_t t2 = 51074032167097162LLU;

	t2 = (x9*(x10*(x11*x12)));

	if (t2 != 528515072LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = -1;
	uint16_t x19 = 2U;
	uint32_t x20 = 2U;
	static uint32_t t3 = 35U;

	t3 = (x17*(x18*(x19*x20)));

	if (t3 != 4294836228U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 1U;
	volatile int32_t x22 = -1297656;
	static volatile uint64_t x23 = 30447580015LLU;
	int64_t x24 = -527873215359044LL;
	uint64_t t4 = 3284201634326LLU;

	t4 = (x21*(x22*(x23*x24)));

	if (t4 != 12483736911561768992LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 2558830321173LLU;
	int32_t x26 = -6;
	volatile uint64_t x27 = UINT64_MAX;
	static int32_t x28 = INT32_MAX;
	static uint64_t t5 = 252522LLU;

	t5 = (x25*(x26*(x27*x28)));

	if (t5 != 5945961281683409794LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x37 = INT32_MAX;
	uint32_t x38 = 3790U;
	volatile uint64_t t6 = 63LLU;

	t6 = (x37*(x38*(x39*x40)));

	if (t6 != 18446670823042352446LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -1LL;
	volatile uint8_t x42 = 3U;
	int16_t x43 = INT16_MIN;
	int32_t x44 = -1;

	t7 = (x41*(x42*(x43*x44)));

	if (t7 != -98304LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x45 = 459U;
	uint64_t x46 = 124LLU;
	uint16_t x47 = 11U;
	int8_t x48 = INT8_MAX;
	volatile uint64_t t8 = 535675689742836LLU;

	t8 = (x45*(x46*(x47*x48)));

	if (t8 != 79511652LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x53 = INT64_MIN;
	int16_t x54 = INT16_MIN;
	int32_t x55 = 6160;
	uint64_t x56 = 7494LLU;
	static volatile uint64_t t9 = 861206145842358186LLU;

	t9 = (x53*(x54*(x55*x56)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x77 = 453850357505039LL;
	int32_t x78 = 1;
	uint32_t x79 = UINT32_MAX;
	int64_t t10 = 251LL;

	t10 = (x77*(x78*(x79*x80)));

	if (t10 != 453850357505039LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x101 = 3;
	int32_t x102 = -1;
	static uint64_t x103 = 901743548848189LLU;
	int8_t x104 = INT8_MIN;
	uint64_t t11 = 94LLU;

	t11 = (x101*(x102*(x103*x104)));

	if (t11 != 346269522757704576LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x105 = INT64_MIN;
	uint64_t x106 = 270305183831840050LLU;
	static int8_t x107 = INT8_MIN;
	int32_t x108 = -1;
	uint64_t t12 = 3LLU;

	t12 = (x105*(x106*(x107*x108)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x133 = 80U;
	uint32_t x134 = 22685865U;
	uint16_t x135 = 1U;
	int8_t x136 = INT8_MIN;
	volatile uint32_t t13 = 125096U;

	t13 = (x133*(x134*(x135*x136)));

	if (t13 != 3919943680U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x149 = UINT64_MAX;
	volatile int16_t x151 = INT16_MAX;
	uint64_t x152 = 4LLU;
	volatile uint64_t t14 = 1LLU;

	t14 = (x149*(x150*(x151*x152)));

	if (t14 != 10232870680249216680LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x153 = 3U;
	int8_t x154 = INT8_MIN;
	int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MIN;
	static volatile int32_t t15 = -517933204;

	t15 = (x153*(x154*(x155*x156)));

	if (t15 != -6291456) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x157 = 13270496999LL;
	uint16_t x158 = 428U;
	int8_t x160 = INT8_MAX;
	volatile int64_t t16 = 9690553LL;

	t16 = (x157*(x158*(x159*x160)));

	if (t16 != -721331134877644LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x169 = -28;
	volatile int16_t x171 = INT16_MIN;
	static uint64_t x172 = 281071336591248005LLU;
	uint64_t t17 = 2141969931894335LLU;

	t17 = (x169*(x170*(x171*x172)));

	if (t17 != 2813085286244024320LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x177 = INT8_MIN;
	int64_t x178 = 1LL;
	static int16_t x179 = INT16_MIN;
	int64_t t18 = -63960LL;

	t18 = (x177*(x178*(x179*x180)));

	if (t18 != -4194304LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x185 = UINT16_MAX;
	static volatile uint16_t x186 = 394U;
	int8_t x187 = -1;

	t19 = (x185*(x186*(x187*x188)));

	if (t19 != 77462370) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x193 = -1;
	int64_t x194 = INT64_MIN;
	uint64_t x195 = 163103269229445558LLU;
	int32_t x196 = -1;
	volatile uint64_t t20 = 578LLU;

	t20 = (x193*(x194*(x195*x196)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x201 = 14U;
	volatile uint64_t x202 = 1579184767918491014LLU;
	int8_t x204 = INT8_MIN;
	uint64_t t21 = 71608242085LLU;

	t21 = (x201*(x202*(x203*x204)));

	if (t21 != 11591903097361793024LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x222 = 3U;
	int8_t x224 = 5;

	t22 = (x221*(x222*(x223*x224)));

	if (t22 != -225) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x250 = -1;
	int8_t x251 = INT8_MIN;
	static uint64_t x252 = 232567616439LLU;

	t23 = (x249*(x250*(x251*x252)));

	if (t23 != 1881319452635126016LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x258 = 1100U;
	static int64_t x259 = 2742573LL;
	uint16_t x260 = 4009U;
	static volatile int64_t t24 = 141024783191020LL;

	t24 = (x257*(x258*(x259*x260)));

	if (t24 != 4865763584371955100LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x261 = 0U;
	uint8_t x262 = 0U;

	t25 = (x261*(x262*(x263*x264)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x273 = -1LL;
	volatile int16_t x274 = 62;
	static int8_t x275 = INT8_MIN;
	uint8_t x276 = 16U;
	volatile int64_t t26 = 12LL;

	t26 = (x273*(x274*(x275*x276)));

	if (t26 != 126976LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x277 = INT32_MIN;
	static uint16_t x278 = 420U;
	static volatile uint64_t x279 = UINT64_MAX;
	static uint8_t x280 = 0U;
	static uint64_t t27 = 1LLU;

	t27 = (x277*(x278*(x279*x280)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x281 = INT8_MAX;
	static int16_t x282 = INT16_MIN;
	static uint8_t x283 = UINT8_MAX;
	int16_t x284 = -1;

	t28 = (x281*(x282*(x283*x284)));

	if (t28 != 1061191680) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x290 = 679956U;
	int8_t x291 = 17;
	static uint64_t x292 = 1482762776278624LLU;
	volatile uint64_t t29 = 65266259LLU;

	t29 = (x289*(x290*(x291*x292)));

	if (t29 != 2921257534343872512LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x297 = INT8_MAX;
	uint64_t x298 = 2981881LLU;
	volatile uint8_t x299 = 47U;
	uint8_t x300 = 109U;

	t30 = (x297*(x298*(x299*x300)));

	if (t30 != 1940074398101LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x302 = INT16_MAX;
	uint64_t x304 = 933847LLU;
	uint64_t t31 = 31642410314565882LLU;

	t31 = (x301*(x302*(x303*x304)));

	if (t31 != 3886119310423LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x305 = 35077936520514LLU;
	int8_t x307 = -1;
	uint8_t x308 = 5U;
	uint64_t t32 = 1092510580043201LLU;

	t32 = (x305*(x306*(x307*x308)));

	if (t32 != 18433414457831756296LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x313 = -1LL;
	volatile int64_t x314 = INT64_MIN;
	static uint64_t x316 = 15832199646690LLU;

	t33 = (x313*(x314*(x315*x316)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x317 = -1LL;
	uint32_t x318 = 455595531U;
	uint64_t x319 = 5201968764112LLU;
	volatile uint8_t x320 = 5U;

	t34 = (x317*(x318*(x319*x320)));

	if (t34 != 11287832740139771728LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x325 = 2105167LLU;
	uint64_t x326 = 3326745LLU;
	uint8_t x328 = 1U;
	uint64_t t35 = 1798321440023LLU;

	t35 = (x325*(x326*(x327*x328)));

	if (t35 != 18427400810537663386LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x337 = INT32_MAX;
	static int32_t x338 = INT32_MAX;
	uint64_t x339 = 13183LLU;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t36 = 13LLU;

	t36 = (x337*(x338*(x339*x340)));

	if (t36 != 4611742638981237889LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x349 = -1;
	static int16_t x351 = INT16_MAX;
	uint8_t x352 = UINT8_MAX;
	static volatile int32_t t37 = -15;

	t37 = (x349*(x350*(x351*x352)));

	if (t37 != -2130674175) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x353 = 28U;
	uint64_t x354 = 17969470139436LLU;
	uint8_t x356 = 0U;
	uint64_t t38 = 165LLU;

	t38 = (x353*(x354*(x355*x356)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x358 = 863508354248838LLU;
	uint16_t x359 = 0U;
	int64_t x360 = INT64_MAX;
	uint64_t t39 = 1515724478541LLU;

	t39 = (x357*(x358*(x359*x360)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x365 = -1;
	uint8_t x366 = UINT8_MAX;
	static uint32_t x368 = 64725U;
	static volatile uint32_t t40 = 240284212U;

	t40 = (x365*(x366*(x367*x368)));

	if (t40 != 2112624000U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x369 = 19134938U;
	int8_t x370 = -1;
	uint64_t x371 = 8163515054086908544LLU;
	static volatile int64_t x372 = INT64_MIN;

	t41 = (x369*(x370*(x371*x372)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x373 = 0U;
	int32_t x374 = INT32_MIN;
	uint64_t x375 = 1035120967079LLU;
	static int8_t x376 = INT8_MIN;
	uint64_t t42 = 241949863564713462LLU;

	t42 = (x373*(x374*(x375*x376)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x385 = INT64_MAX;
	volatile int64_t x386 = -1LL;
	static uint64_t x387 = 8829670190LLU;
	static int32_t x388 = INT32_MIN;
	volatile uint64_t t43 = 30496LLU;

	t43 = (x385*(x386*(x387*x388)));

	if (t43 != 17931915797161050112LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x393 = -15;
	uint64_t x395 = UINT64_MAX;
	static int32_t x396 = -286632418;
	static volatile uint64_t t44 = 475579204737524LLU;

	t44 = (x393*(x394*(x395*x396)));

	if (t44 != 550334242560LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x401 = UINT8_MAX;
	int8_t x402 = 4;
	uint16_t x403 = 188U;
	uint64_t t45 = 420LLU;

	t45 = (x401*(x402*(x403*x404)));

	if (t45 != 18446744073709359856LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x405 = INT8_MIN;
	uint8_t x406 = 57U;
	static uint32_t x407 = 7934U;
	uint32_t x408 = 503U;
	volatile uint32_t t46 = 0U;

	t46 = (x405*(x406*(x407*x408)));

	if (t46 != 947879680U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x413 = INT16_MAX;
	uint8_t x414 = 5U;
	volatile uint64_t x415 = 402852603018LLU;
	int16_t x416 = -1;
	volatile uint64_t t47 = 241962588LLU;

	t47 = (x413*(x414*(x415*x416)));

	if (t47 != 18380742717494097586LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x421 = INT32_MIN;
	uint32_t x422 = UINT32_MAX;
	static uint64_t x423 = UINT64_MAX;
	volatile int32_t x424 = INT32_MAX;
	uint64_t t48 = 394424053231023LLU;

	t48 = (x421*(x422*(x423*x424)));

	if (t48 != 4611686020574871552LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x425 = -32;
	uint16_t x426 = 325U;
	static volatile int64_t x428 = -1LL;
	volatile int64_t t49 = 63510LL;

	t49 = (x425*(x426*(x427*x428)));

	if (t49 != -340787200LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x429 = -65379697;
	volatile int16_t x430 = -5;
	int16_t x431 = INT16_MIN;
	uint32_t x432 = 114197U;
	static volatile uint32_t t50 = 2U;

	t50 = (x429*(x430*(x431*x432)));

	if (t50 != 190021632U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x433 = 31798315820658LLU;
	static uint8_t x434 = UINT8_MAX;
	uint64_t x436 = 13LLU;

	t51 = (x433*(x434*(x435*x436)));

	if (t51 != 8438950071714667420LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x437 = 230911465U;
	int64_t x438 = INT64_MIN;
	static uint64_t x439 = UINT64_MAX;
	uint16_t x440 = 3U;
	volatile uint64_t t52 = 49968166LLU;

	t52 = (x437*(x438*(x439*x440)));

	if (t52 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x441 = INT32_MAX;
	volatile uint32_t t53 = 215U;

	t53 = (x441*(x442*(x443*x444)));

	if (t53 != 4051285373U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x445 = 57U;
	int64_t x446 = INT64_MIN;
	static int32_t x447 = 399;
	volatile int64_t t54 = 796256159975LL;

	t54 = (x445*(x446*(x447*x448)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x450 = 69045449125893LLU;
	uint8_t x451 = 12U;
	int64_t x452 = 13546283496276LL;
	uint64_t t55 = 284LLU;

	t55 = (x449*(x450*(x451*x452)));

	if (t55 != 3368169965438085200LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x465 = UINT8_MAX;
	int64_t x468 = 8041003869LL;
	volatile uint64_t t56 = 189LLU;

	t56 = (x465*(x466*(x467*x468)));

	if (t56 != 13693443339286152585LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x475 = 1850619487673493LLU;
	static int16_t x476 = INT16_MIN;

	t57 = (x473*(x474*(x475*x476)));

	if (t57 != 13810253034810540032LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x481 = -1;
	int32_t x482 = INT32_MIN;
	int8_t x483 = -59;
	uint32_t x484 = 6582471U;
	volatile uint32_t t58 = 1977U;

	t58 = (x481*(x482*(x483*x484)));

	if (t58 != 2147483648U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x497 = -13665152;
	volatile uint64_t x498 = UINT64_MAX;
	uint32_t x499 = UINT32_MAX;
	static uint64_t t59 = 7796316681LLU;

	t59 = (x497*(x498*(x499*x500)));

	if (t59 != 29345690481099648LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x505 = -1435;
	volatile uint32_t x506 = UINT32_MAX;
	uint32_t x507 = 7U;
	int16_t x508 = 4;
	static volatile uint32_t t60 = 125U;

	t60 = (x505*(x506*(x507*x508)));

	if (t60 != 40180U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x514 = 2255U;
	static int64_t x515 = -1LL;
	int32_t x516 = -1;

	t61 = (x513*(x514*(x515*x516)));

	if (t61 != 1888904299370LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x517 = UINT8_MAX;
	static int8_t x518 = INT8_MIN;
	uint64_t t62 = 130865LLU;

	t62 = (x517*(x518*(x519*x520)));

	if (t62 != 343882398752733184LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x529 = 46;
	int32_t x530 = 9;
	static volatile uint8_t x531 = 34U;
	int8_t x532 = 0;

	t63 = (x529*(x530*(x531*x532)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x553 = -1;
	static uint8_t x554 = 6U;
	int16_t x556 = INT16_MIN;
	static volatile int32_t t64 = -3554734;

	t64 = (x553*(x554*(x555*x556)));

	if (t64 != 196608) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x557 = INT32_MIN;
	int8_t x558 = -1;
	static int32_t x559 = 6;
	uint64_t x560 = UINT64_MAX;

	t65 = (x557*(x558*(x559*x560)));

	if (t65 != 18446744060824649728LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x573 = INT32_MIN;
	uint8_t x575 = UINT8_MAX;
	static int8_t x576 = -1;

	t66 = (x573*(x574*(x575*x576)));

	if (t66 != 8447990134082633728LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x581 = 629030308LLU;
	uint32_t x582 = UINT32_MAX;
	volatile int64_t x583 = 4158281776301686288LL;
	static uint64_t x584 = 1018642861464027LLU;
	volatile uint64_t t67 = 3699LLU;

	t67 = (x581*(x582*(x583*x584)));

	if (t67 != 10459049994506969920LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x591 = 1;
	uint64_t x592 = 2896425LLU;
	volatile uint64_t t68 = 9709LLU;

	t68 = (x589*(x590*(x591*x592)));

	if (t68 != 18428083997734076416LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x602 = 516U;
	int16_t x603 = INT16_MIN;
	uint64_t x604 = 11065458478622LLU;
	uint64_t t69 = 194838656113351LLU;

	t69 = (x601*(x602*(x603*x604)));

	if (t69 != 15933172531683393536LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x606 = INT64_MIN;
	volatile uint64_t x607 = 3LLU;
	int32_t x608 = -1;
	volatile uint64_t t70 = 308060869083LLU;

	t70 = (x605*(x606*(x607*x608)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x613 = -18;
	volatile int8_t x614 = -1;
	int16_t x615 = 0;
	volatile int16_t x616 = INT16_MIN;
	static int32_t t71 = 280295947;

	t71 = (x613*(x614*(x615*x616)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x618 = INT32_MIN;
	int8_t x620 = -1;
	volatile uint32_t t72 = 69243797U;

	t72 = (x617*(x618*(x619*x620)));

	if (t72 != 2147483648U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x625 = 1740922378371189LL;
	int8_t x626 = INT8_MIN;
	uint8_t x628 = 0U;
	volatile int64_t t73 = 4LL;

	t73 = (x625*(x626*(x627*x628)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x633 = -1;
	volatile int8_t x635 = 18;
	volatile uint64_t x636 = UINT64_MAX;
	uint64_t t74 = 189229756690960LLU;

	t74 = (x633*(x634*(x635*x636)));

	if (t74 != 18446744073708961792LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x641 = 23447U;
	int16_t x644 = INT16_MIN;
	volatile uint32_t t75 = 147583396U;

	t75 = (x641*(x642*(x643*x644)));

	if (t75 != 3221225472U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x645 = 0U;
	static int8_t x646 = 17;
	uint8_t x647 = 10U;
	int16_t x648 = 7;
	volatile int32_t t76 = -33378095;

	t76 = (x645*(x646*(x647*x648)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x649 = 1;
	int64_t x650 = 72927872782047LL;
	uint64_t x651 = 8035638502472LLU;
	static int64_t x652 = INT64_MIN;

	t77 = (x649*(x650*(x651*x652)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x665 = 99U;
	int64_t x666 = INT64_MAX;
	int16_t x667 = INT16_MIN;
	uint64_t x668 = UINT64_MAX;
	uint64_t t78 = 1697313605152236636LLU;

	t78 = (x665*(x666*(x667*x668)));

	if (t78 != 18446744073706307584LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x677 = -128599159LL;
	volatile int32_t x678 = INT32_MIN;
	static volatile uint8_t x679 = 25U;
	volatile uint64_t t79 = 10676301530LLU;

	t79 = (x677*(x678*(x679*x680)));

	if (t79 != 11542629296233250816LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x693 = 0;
	volatile uint16_t x694 = UINT16_MAX;
	uint32_t x695 = 2049819204U;
	volatile uint32_t t80 = 1034477489U;

	t80 = (x693*(x694*(x695*x696)));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x701 = -1LL;
	uint32_t x702 = 1020U;
	int64_t x703 = -921412317LL;

	t81 = (x701*(x702*(x703*x704)));

	if (t81 != 239659343651700LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x705 = 3U;
	uint64_t x706 = UINT64_MAX;
	int64_t x708 = 92131370203LL;

	t82 = (x705*(x706*(x707*x708)));

	if (t82 != 18437687467887226513LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x713 = -17;
	int16_t x714 = 5113;
	volatile int16_t x716 = -1888;

	t83 = (x713*(x714*(x715*x716)));

	if (t83 != 164106848) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x717 = INT8_MIN;
	uint64_t x718 = 480143751082LLU;
	int32_t x719 = -4006190;
	int8_t x720 = -1;
	uint64_t t84 = 41813820777500908LLU;

	t84 = (x717*(x718*(x719*x720)));

	if (t84 != 12040388981092432384LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x721 = UINT16_MAX;
	int8_t x722 = -1;
	volatile uint64_t x723 = 516071079873LLU;
	int32_t x724 = INT32_MIN;
	static volatile uint64_t t85 = 34729542092LLU;

	t85 = (x721*(x722*(x723*x724)));

	if (t85 != 14682473792333152256LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x737 = 0U;
	static uint64_t x739 = 67160190919348827LLU;
	volatile uint16_t x740 = 68U;
	uint64_t t86 = 7LLU;

	t86 = (x737*(x738*(x739*x740)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x742 = -8;
	int8_t x744 = 4;

	t87 = (x741*(x742*(x743*x744)));

	if (t87 != 315392) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x749 = -1LL;
	static uint32_t x750 = 32U;
	static int16_t x751 = 679;
	uint16_t x752 = 430U;

	t88 = (x749*(x750*(x751*x752)));

	if (t88 != -9343040LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x769 = -1;
	uint8_t x770 = 1U;
	volatile int16_t x772 = INT16_MIN;
	static volatile int32_t t89 = -8155;

	t89 = (x769*(x770*(x771*x772)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x777 = INT8_MIN;
	uint32_t x778 = 3U;
	volatile uint32_t x779 = UINT32_MAX;
	int8_t x780 = INT8_MAX;
	uint32_t t90 = 298U;

	t90 = (x777*(x778*(x779*x780)));

	if (t90 != 48768U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x781 = INT64_MIN;
	static int32_t x783 = -1;
	int16_t x784 = 0;
	int64_t t91 = 124176422877140LL;

	t91 = (x781*(x782*(x783*x784)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x785 = UINT32_MAX;
	volatile uint64_t x786 = 210499614839249LLU;
	int8_t x787 = INT8_MIN;
	int8_t x788 = -2;
	uint64_t t92 = 46626918068LLU;

	t92 = (x785*(x786*(x787*x788)));

	if (t92 != 14110444199588278016LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x793 = INT32_MIN;
	volatile int32_t x794 = 0;
	int16_t x795 = INT16_MIN;
	int8_t x796 = INT8_MIN;
	volatile int32_t t93 = 8007;

	t93 = (x793*(x794*(x795*x796)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x797 = 18U;
	int16_t x798 = -8173;
	static uint8_t x800 = 1U;
	static int32_t t94 = 0;

	t94 = (x797*(x798*(x799*x800)));

	if (t94 != 18830592) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x805 = -1;
	uint16_t x806 = 24U;
	static int32_t x807 = 198661;
	int8_t x808 = 0;

	t95 = (x805*(x806*(x807*x808)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x809 = -1LL;
	uint32_t x810 = UINT32_MAX;
	int32_t x811 = -62221;
	int64_t t96 = 1LL;

	t96 = (x809*(x810*(x811*x812)));

	if (t96 != -4294593970LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x817 = 133605212U;
	uint32_t x818 = 15937458U;
	int8_t x819 = INT8_MIN;
	static uint64_t x820 = UINT64_MAX;

	t97 = (x817*(x818*(x819*x820)));

	if (t97 != 272553914218380288LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x821 = -109LL;
	volatile int16_t x823 = INT16_MIN;
	static uint32_t x824 = 348127U;

	t98 = (x821*(x822*(x823*x824)));

	if (t98 != -337280335872LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x826 = -108445493;
	int16_t x827 = -1;
	volatile uint16_t x828 = 0U;

	t99 = (x825*(x826*(x827*x828)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

