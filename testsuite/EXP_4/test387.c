#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x2 = -1;
static int8_t x18 = -1;
int16_t x20 = 255;
int32_t x24 = -1;
int16_t x47 = INT16_MIN;
static int64_t x50 = INT64_MIN;
static int64_t x63 = -192LL;
volatile int32_t t8 = -7071867;
static uint16_t x73 = 0U;
uint64_t x76 = 390LLU;
int64_t x78 = INT64_MIN;
volatile int32_t t11 = -515240441;
int16_t x87 = -6043;
int16_t x88 = 7;
int8_t x117 = INT8_MAX;
uint32_t x120 = 101322949U;
int8_t x125 = INT8_MIN;
volatile int8_t x136 = INT8_MIN;
static int32_t t20 = 39;
int32_t x158 = -6006559;
volatile uint32_t x160 = 3U;
uint16_t x176 = 369U;
static volatile int32_t t26 = -47;
static int16_t x193 = -5;
uint32_t x195 = 144599535U;
volatile uint32_t x197 = 3773U;
int32_t t30 = 0;
int8_t x215 = INT8_MAX;
int64_t x221 = -1LL;
int64_t x222 = -31179LL;
int32_t t36 = 14;
int32_t x262 = -2965343;
static int16_t x264 = -441;
int64_t x293 = INT64_MAX;
int16_t x300 = INT16_MIN;
int32_t t40 = -1;
int16_t x302 = INT16_MIN;
int32_t t41 = 3;
int8_t x307 = INT8_MIN;
int64_t x313 = 131707553LL;
volatile int32_t t44 = -17639;
int8_t x326 = INT8_MIN;
int16_t x328 = INT16_MIN;
uint64_t x333 = UINT64_MAX;
int32_t x345 = -1;
int32_t t50 = -28677;
int32_t t53 = 19660214;
uint16_t x374 = 7781U;
volatile int32_t t54 = 1283;
volatile uint32_t x378 = 0U;
int8_t x399 = INT8_MAX;
int32_t x418 = INT32_MIN;
int64_t x429 = INT64_MIN;
int8_t x430 = -1;
int64_t x438 = -660LL;
static uint8_t x446 = 23U;
uint64_t x447 = 2LLU;
volatile int32_t x450 = -1;
int8_t x468 = INT8_MIN;
uint16_t x471 = UINT16_MAX;
volatile int32_t t72 = 15;
uint8_t x479 = 36U;
int32_t t75 = 85;
uint8_t x489 = UINT8_MAX;
int32_t x505 = INT32_MAX;
int32_t x511 = -1;
static int32_t t80 = -59742;
volatile uint64_t x539 = 518786262511LLU;
int64_t x544 = -1LL;
uint64_t x567 = 24946544940340721LLU;
int32_t t88 = -32709703;
uint8_t x579 = UINT8_MAX;
volatile int16_t x581 = 172;
static int64_t x588 = -1LL;
static int64_t x601 = INT64_MAX;
int8_t x605 = 42;
volatile int32_t x606 = INT32_MIN;
volatile uint64_t x607 = UINT64_MAX;
int8_t x608 = -1;
uint8_t x612 = 27U;
uint64_t x615 = UINT64_MAX;
int8_t x622 = INT8_MIN;


void f0(void) {
	int16_t x1 = -57;
	uint8_t x3 = UINT8_MAX;
	volatile uint8_t x4 = UINT8_MAX;
	int32_t t0 = 169956;

	t0 = (x1<=(x2/(x3*x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint16_t x6 = 12101U;
	uint16_t x7 = 1U;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 118482;

	t1 = (x5<=(x6/(x7*x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 186U;
	static volatile int16_t x10 = 10772;
	volatile uint32_t x11 = 2U;
	int16_t x12 = 5;
	int32_t t2 = 32761073;

	t2 = (x9<=(x10/(x11*x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = -1;
	volatile int16_t x19 = 494;
	volatile int32_t t3 = 10271;

	t3 = (x17<=(x18/(x19*x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 53U;
	int64_t x22 = INT64_MAX;
	uint16_t x23 = 6U;
	int32_t t4 = 21;

	t4 = (x21<=(x22/(x23*x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x45 = 1084LL;
	int32_t x46 = INT32_MAX;
	static uint64_t x48 = UINT64_MAX;
	int32_t t5 = 476;

	t5 = (x45<=(x46/(x47*x48)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x49 = 28U;
	uint64_t x51 = UINT64_MAX;
	int32_t x52 = INT32_MAX;
	static volatile int32_t t6 = -3611529;

	t6 = (x49<=(x50/(x51*x52)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x57 = 17044031U;
	uint32_t x58 = 112U;
	static volatile int8_t x59 = INT8_MIN;
	volatile int16_t x60 = INT16_MIN;
	volatile int32_t t7 = -21;

	t7 = (x57<=(x58/(x59*x60)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x61 = INT64_MAX;
	int16_t x62 = -1;
	int64_t x64 = -68949LL;

	t8 = (x61<=(x62/(x63*x64)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x69 = INT8_MAX;
	uint8_t x70 = 3U;
	volatile uint16_t x71 = 47U;
	static uint32_t x72 = 985967603U;
	volatile int32_t t9 = 22;

	t9 = (x69<=(x70/(x71*x72)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x74 = -1;
	int32_t x75 = INT32_MAX;
	volatile int32_t t10 = 24712;

	t10 = (x73<=(x74/(x75*x76)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x77 = INT16_MAX;
	static uint8_t x79 = UINT8_MAX;
	int64_t x80 = -315541827LL;

	t11 = (x77<=(x78/(x79*x80)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x81 = 3644LL;
	uint8_t x82 = 7U;
	static int8_t x83 = INT8_MAX;
	uint64_t x84 = UINT64_MAX;
	int32_t t12 = -6850;

	t12 = (x81<=(x82/(x83*x84)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x85 = INT32_MIN;
	int8_t x86 = INT8_MIN;
	int32_t t13 = -83442;

	t13 = (x85<=(x86/(x87*x88)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x93 = UINT64_MAX;
	int16_t x94 = INT16_MIN;
	volatile uint64_t x95 = 28780311691LLU;
	int8_t x96 = INT8_MIN;
	int32_t t14 = 530170024;

	t14 = (x93<=(x94/(x95*x96)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x97 = INT16_MIN;
	uint16_t x98 = 108U;
	int8_t x99 = -1;
	int8_t x100 = INT8_MIN;
	static int32_t t15 = 28058;

	t15 = (x97<=(x98/(x99*x100)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x118 = 3U;
	int32_t x119 = -1;
	int32_t t16 = 227;

	t16 = (x117<=(x118/(x119*x120)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x126 = -7727;
	int8_t x127 = INT8_MIN;
	uint64_t x128 = 411LLU;
	int32_t t17 = 0;

	t17 = (x125<=(x126/(x127*x128)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x133 = -84537391783LL;
	uint16_t x134 = UINT16_MAX;
	uint16_t x135 = UINT16_MAX;
	int32_t t18 = -18552;

	t18 = (x133<=(x134/(x135*x136)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x145 = 38U;
	volatile uint32_t x146 = 43549U;
	int64_t x147 = 620303756359964LL;
	volatile uint16_t x148 = 7935U;
	volatile int32_t t19 = -1023706;

	t19 = (x145<=(x146/(x147*x148)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x149 = INT16_MAX;
	static volatile int64_t x150 = INT64_MIN;
	volatile int64_t x151 = -34106607LL;
	volatile int16_t x152 = INT16_MAX;

	t20 = (x149<=(x150/(x151*x152)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x157 = -14466;
	int32_t x159 = INT32_MIN;
	int32_t t21 = 360059;

	t21 = (x157<=(x158/(x159*x160)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x165 = INT8_MIN;
	uint64_t x166 = 1076399544LLU;
	static int16_t x167 = INT16_MAX;
	int32_t x168 = 12;
	volatile int32_t t22 = 18256;

	t22 = (x165<=(x166/(x167*x168)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x169 = UINT16_MAX;
	uint64_t x170 = UINT64_MAX;
	uint64_t x171 = 16292040226LLU;
	uint16_t x172 = 3U;
	volatile int32_t t23 = -241581533;

	t23 = (x169<=(x170/(x171*x172)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x173 = UINT8_MAX;
	static volatile int8_t x174 = -1;
	uint8_t x175 = UINT8_MAX;
	int32_t t24 = 24;

	t24 = (x173<=(x174/(x175*x176)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x177 = INT8_MIN;
	int16_t x178 = -1;
	int32_t x179 = -3;
	int16_t x180 = -1;
	volatile int32_t t25 = 11002;

	t25 = (x177<=(x178/(x179*x180)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x181 = -1;
	uint8_t x182 = 14U;
	int16_t x183 = -4267;
	volatile int32_t x184 = 1;

	t26 = (x181<=(x182/(x183*x184)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x189 = -15;
	int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MIN;
	static int64_t x192 = -11472LL;
	volatile int32_t t27 = -533534;

	t27 = (x189<=(x190/(x191*x192)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x194 = -8267;
	uint32_t x196 = 404314268U;
	volatile int32_t t28 = 3314;

	t28 = (x193<=(x194/(x195*x196)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x198 = INT8_MAX;
	static uint8_t x199 = 6U;
	int32_t x200 = 32017563;
	static volatile int32_t t29 = 21919;

	t29 = (x197<=(x198/(x199*x200)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x205 = INT8_MIN;
	uint64_t x206 = UINT64_MAX;
	static int8_t x207 = 6;
	volatile int64_t x208 = -848096182LL;

	t30 = (x205<=(x206/(x207*x208)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x213 = UINT8_MAX;
	volatile int8_t x214 = -1;
	volatile int64_t x216 = -1LL;
	int32_t t31 = 1;

	t31 = (x213<=(x214/(x215*x216)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x223 = 7;
	int8_t x224 = INT8_MIN;
	volatile int32_t t32 = -33625240;

	t32 = (x221<=(x222/(x223*x224)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x237 = -1;
	volatile int8_t x238 = 12;
	static int64_t x239 = INT64_MAX;
	int8_t x240 = -1;
	int32_t t33 = -1;

	t33 = (x237<=(x238/(x239*x240)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x249 = 4U;
	static int64_t x250 = INT64_MIN;
	int64_t x251 = -1LL;
	volatile int16_t x252 = INT16_MAX;
	volatile int32_t t34 = 175776;

	t34 = (x249<=(x250/(x251*x252)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x253 = INT16_MIN;
	volatile int32_t x254 = -25256405;
	volatile uint16_t x255 = 3403U;
	uint8_t x256 = 6U;
	int32_t t35 = 240;

	t35 = (x253<=(x254/(x255*x256)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x257 = -4;
	int16_t x258 = -405;
	int8_t x259 = INT8_MAX;
	uint64_t x260 = UINT64_MAX;

	t36 = (x257<=(x258/(x259*x260)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x261 = INT16_MIN;
	uint16_t x263 = 3U;
	static int32_t t37 = -1;

	t37 = (x261<=(x262/(x263*x264)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x285 = -1;
	int32_t x286 = INT32_MIN;
	volatile uint64_t x287 = 7197226070521500LLU;
	uint16_t x288 = UINT16_MAX;
	int32_t t38 = -31161368;

	t38 = (x285<=(x286/(x287*x288)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x294 = -1;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = 8U;
	int32_t t39 = -28011438;

	t39 = (x293<=(x294/(x295*x296)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x297 = 32222818560513385LL;
	uint16_t x298 = UINT16_MAX;
	uint32_t x299 = 684817U;

	t40 = (x297<=(x298/(x299*x300)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x301 = -609058697;
	int16_t x303 = -48;
	static uint16_t x304 = 2U;

	t41 = (x301<=(x302/(x303*x304)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x305 = UINT32_MAX;
	int8_t x306 = 3;
	int32_t x308 = -939706;
	int32_t t42 = 8;

	t42 = (x305<=(x306/(x307*x308)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x309 = UINT8_MAX;
	static volatile int8_t x310 = -1;
	int16_t x311 = INT16_MAX;
	uint32_t x312 = UINT32_MAX;
	static volatile int32_t t43 = -35;

	t43 = (x309<=(x310/(x311*x312)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x314 = -1990;
	static volatile uint64_t x315 = 13629473LLU;
	int16_t x316 = -1;

	t44 = (x313<=(x314/(x315*x316)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x317 = -1;
	int8_t x318 = 1;
	uint32_t x319 = UINT32_MAX;
	uint16_t x320 = UINT16_MAX;
	int32_t t45 = 6268;

	t45 = (x317<=(x318/(x319*x320)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x325 = UINT16_MAX;
	uint32_t x327 = 28915647U;
	volatile int32_t t46 = 489860;

	t46 = (x325<=(x326/(x327*x328)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x334 = -1;
	static uint16_t x335 = 27550U;
	uint8_t x336 = 23U;
	int32_t t47 = 1801;

	t47 = (x333<=(x334/(x335*x336)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x337 = INT8_MIN;
	int16_t x338 = -1;
	int16_t x339 = INT16_MAX;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t48 = -4178843;

	t48 = (x337<=(x338/(x339*x340)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x346 = INT8_MAX;
	uint32_t x347 = UINT32_MAX;
	uint64_t x348 = UINT64_MAX;
	int32_t t49 = -87542;

	t49 = (x345<=(x346/(x347*x348)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x353 = 29472LL;
	int32_t x354 = -1;
	volatile int8_t x355 = -1;
	volatile int64_t x356 = -1LL;

	t50 = (x353<=(x354/(x355*x356)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x357 = 13062U;
	int16_t x358 = 3;
	volatile uint8_t x359 = 1U;
	int8_t x360 = INT8_MIN;
	int32_t t51 = -445330228;

	t51 = (x357<=(x358/(x359*x360)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x361 = 2064630U;
	static int8_t x362 = 0;
	volatile int32_t x363 = 3125;
	int32_t x364 = 101653;
	int32_t t52 = -6;

	t52 = (x361<=(x362/(x363*x364)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x365 = INT32_MIN;
	volatile int8_t x366 = -26;
	volatile uint64_t x367 = 1655871973326136478LLU;
	volatile int16_t x368 = 1;

	t53 = (x365<=(x366/(x367*x368)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x373 = 0U;
	static int32_t x375 = 34;
	int64_t x376 = -28LL;

	t54 = (x373<=(x374/(x375*x376)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x377 = UINT32_MAX;
	uint64_t x379 = UINT64_MAX;
	static volatile int16_t x380 = -15405;
	volatile int32_t t55 = 84195;

	t55 = (x377<=(x378/(x379*x380)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x381 = INT16_MIN;
	static volatile int16_t x382 = INT16_MAX;
	volatile int16_t x383 = INT16_MIN;
	static volatile int32_t x384 = -400;
	volatile int32_t t56 = -9188339;

	t56 = (x381<=(x382/(x383*x384)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x385 = 5978;
	volatile int32_t x386 = -1;
	int8_t x387 = INT8_MIN;
	int64_t x388 = 213923164838600LL;
	volatile int32_t t57 = 3210;

	t57 = (x385<=(x386/(x387*x388)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x393 = INT16_MIN;
	uint16_t x394 = 218U;
	uint16_t x395 = UINT16_MAX;
	uint8_t x396 = 29U;
	static volatile int32_t t58 = 2026494;

	t58 = (x393<=(x394/(x395*x396)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x397 = INT32_MIN;
	int16_t x398 = 622;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t59 = 0;

	t59 = (x397<=(x398/(x399*x400)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x401 = INT32_MAX;
	static volatile uint8_t x402 = UINT8_MAX;
	uint32_t x403 = UINT32_MAX;
	uint64_t x404 = UINT64_MAX;
	int32_t t60 = -3;

	t60 = (x401<=(x402/(x403*x404)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x405 = INT16_MIN;
	uint16_t x406 = UINT16_MAX;
	int64_t x407 = INT64_MAX;
	static volatile int16_t x408 = -1;
	volatile int32_t t61 = 35202;

	t61 = (x405<=(x406/(x407*x408)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x409 = 162814954336LLU;
	int64_t x410 = INT64_MIN;
	uint32_t x411 = 27318U;
	uint16_t x412 = 21811U;
	int32_t t62 = 27232;

	t62 = (x409<=(x410/(x411*x412)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x413 = INT8_MAX;
	int32_t x414 = INT32_MAX;
	int8_t x415 = -1;
	uint32_t x416 = 49843U;
	volatile int32_t t63 = 0;

	t63 = (x413<=(x414/(x415*x416)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x417 = INT32_MIN;
	static int32_t x419 = INT32_MIN;
	volatile uint64_t x420 = 5587198237926534103LLU;
	volatile int32_t t64 = 18;

	t64 = (x417<=(x418/(x419*x420)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x425 = INT8_MAX;
	volatile uint64_t x426 = 0LLU;
	volatile int16_t x427 = INT16_MAX;
	static volatile uint64_t x428 = UINT64_MAX;
	int32_t t65 = 399;

	t65 = (x425<=(x426/(x427*x428)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x431 = 2U;
	int8_t x432 = INT8_MAX;
	volatile int32_t t66 = 28534;

	t66 = (x429<=(x430/(x431*x432)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x437 = INT16_MAX;
	int16_t x439 = -1;
	int32_t x440 = 975049;
	int32_t t67 = -74;

	t67 = (x437<=(x438/(x439*x440)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x445 = INT64_MIN;
	uint16_t x448 = 1208U;
	static volatile int32_t t68 = -207;

	t68 = (x445<=(x446/(x447*x448)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x449 = UINT16_MAX;
	volatile int16_t x451 = INT16_MIN;
	static int16_t x452 = INT16_MIN;
	static int32_t t69 = 3;

	t69 = (x449<=(x450/(x451*x452)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x457 = 7U;
	int16_t x458 = -1;
	int16_t x459 = 10051;
	uint64_t x460 = 54628982986LLU;
	volatile int32_t t70 = 21780;

	t70 = (x457<=(x458/(x459*x460)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x465 = 1323;
	uint64_t x466 = 299122805219659LLU;
	static int64_t x467 = -125196347LL;
	static volatile int32_t t71 = -20092408;

	t71 = (x465<=(x466/(x467*x468)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x469 = 1U;
	int16_t x470 = INT16_MIN;
	uint32_t x472 = 9U;

	t72 = (x469<=(x470/(x471*x472)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x477 = 147722U;
	int64_t x478 = 1LL;
	uint32_t x480 = UINT32_MAX;
	int32_t t73 = -33;

	t73 = (x477<=(x478/(x479*x480)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x481 = 1U;
	int8_t x482 = 42;
	uint32_t x483 = 15567323U;
	int8_t x484 = INT8_MAX;
	int32_t t74 = 219;

	t74 = (x481<=(x482/(x483*x484)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x485 = 21U;
	int8_t x486 = -1;
	volatile uint32_t x487 = 23927U;
	int8_t x488 = -1;

	t75 = (x485<=(x486/(x487*x488)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x490 = INT16_MIN;
	volatile int64_t x491 = -1LL;
	uint64_t x492 = UINT64_MAX;
	int32_t t76 = 15494;

	t76 = (x489<=(x490/(x491*x492)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x501 = -1;
	static uint8_t x502 = UINT8_MAX;
	int8_t x503 = -1;
	static uint16_t x504 = 29654U;
	static int32_t t77 = 11050;

	t77 = (x501<=(x502/(x503*x504)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x506 = 117;
	int16_t x507 = INT16_MIN;
	int8_t x508 = 3;
	int32_t t78 = 21;

	t78 = (x505<=(x506/(x507*x508)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x509 = 5507U;
	static int8_t x510 = 48;
	int32_t x512 = -1592439;
	volatile int32_t t79 = 1;

	t79 = (x509<=(x510/(x511*x512)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x521 = UINT16_MAX;
	uint16_t x522 = 646U;
	volatile uint16_t x523 = 4U;
	volatile uint64_t x524 = 8521240161451897LLU;

	t80 = (x521<=(x522/(x523*x524)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x529 = -60270LL;
	static volatile int8_t x530 = -14;
	int32_t x531 = -30478870;
	int8_t x532 = -1;
	int32_t t81 = 4117517;

	t81 = (x529<=(x530/(x531*x532)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x533 = INT16_MAX;
	int64_t x534 = 6246LL;
	uint16_t x535 = 29U;
	static volatile int16_t x536 = INT16_MAX;
	int32_t t82 = 59860;

	t82 = (x533<=(x534/(x535*x536)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x537 = UINT64_MAX;
	int64_t x538 = -12845511LL;
	uint32_t x540 = 40184U;
	static volatile int32_t t83 = 455850026;

	t83 = (x537<=(x538/(x539*x540)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x541 = 1308;
	int64_t x542 = INT64_MIN;
	static volatile int8_t x543 = 21;
	volatile int32_t t84 = -111;

	t84 = (x541<=(x542/(x543*x544)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x557 = INT64_MIN;
	int32_t x558 = -621402551;
	uint64_t x559 = 993713LLU;
	int8_t x560 = INT8_MAX;
	volatile int32_t t85 = -197953545;

	t85 = (x557<=(x558/(x559*x560)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x561 = UINT32_MAX;
	static volatile uint8_t x562 = 3U;
	uint8_t x563 = 2U;
	static uint8_t x564 = UINT8_MAX;
	int32_t t86 = -76245491;

	t86 = (x561<=(x562/(x563*x564)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x565 = 21132360774LL;
	uint64_t x566 = 135140743LLU;
	int16_t x568 = -1;
	static volatile int32_t t87 = -441465015;

	t87 = (x565<=(x566/(x567*x568)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x569 = UINT8_MAX;
	int16_t x570 = INT16_MIN;
	static int8_t x571 = -1;
	volatile int64_t x572 = -1LL;

	t88 = (x569<=(x570/(x571*x572)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x577 = 3672201961476854LLU;
	uint16_t x578 = 3U;
	volatile int8_t x580 = INT8_MIN;
	int32_t t89 = 53725044;

	t89 = (x577<=(x578/(x579*x580)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x582 = INT8_MIN;
	int32_t x583 = 10779;
	int8_t x584 = -8;
	int32_t t90 = -728;

	t90 = (x581<=(x582/(x583*x584)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x585 = 2694644258381941LL;
	uint8_t x586 = 11U;
	int8_t x587 = INT8_MIN;
	volatile int32_t t91 = -19;

	t91 = (x585<=(x586/(x587*x588)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x589 = -333276699223904LL;
	uint8_t x590 = 38U;
	int16_t x591 = 3508;
	int32_t x592 = 12;
	static volatile int32_t t92 = 101436;

	t92 = (x589<=(x590/(x591*x592)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x593 = INT64_MAX;
	volatile uint16_t x594 = UINT16_MAX;
	uint8_t x595 = 10U;
	int8_t x596 = INT8_MIN;
	volatile int32_t t93 = -487713153;

	t93 = (x593<=(x594/(x595*x596)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x597 = 63768976170LLU;
	int64_t x598 = INT64_MIN;
	volatile int32_t x599 = -1;
	int8_t x600 = INT8_MIN;
	static volatile int32_t t94 = 81721;

	t94 = (x597<=(x598/(x599*x600)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x602 = INT32_MIN;
	int16_t x603 = 1820;
	uint32_t x604 = UINT32_MAX;
	int32_t t95 = 74796;

	t95 = (x601<=(x602/(x603*x604)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t t96 = 695301322;

	t96 = (x605<=(x606/(x607*x608)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x609 = -1;
	volatile int16_t x610 = INT16_MIN;
	volatile uint64_t x611 = 2182123234LLU;
	volatile int32_t t97 = 1468;

	t97 = (x609<=(x610/(x611*x612)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x613 = -122LL;
	static uint8_t x614 = UINT8_MAX;
	volatile uint32_t x616 = UINT32_MAX;
	int32_t t98 = 16232567;

	t98 = (x613<=(x614/(x615*x616)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x621 = INT16_MAX;
	uint64_t x623 = UINT64_MAX;
	volatile int16_t x624 = INT16_MIN;
	volatile int32_t t99 = 71590;

	t99 = (x621<=(x622/(x623*x624)));

	if (t99 != 1) { NG(); } else { ; }
	
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

