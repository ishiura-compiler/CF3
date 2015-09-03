#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
volatile int32_t t0 = 16404;
volatile uint16_t x17 = 80U;
static int8_t x23 = -7;
int32_t t2 = 3793;
static int8_t x41 = -1;
int32_t t4 = -1;
int32_t x51 = INT32_MIN;
int8_t x58 = -1;
static volatile int32_t t7 = -94;
int8_t x71 = 1;
int64_t x73 = INT64_MIN;
uint8_t x85 = 0U;
int16_t x94 = INT16_MIN;
int16_t x96 = -1;
uint32_t x98 = 609433U;
volatile uint8_t x100 = 7U;
int16_t x105 = -1;
volatile int32_t t14 = -1;
volatile int8_t x109 = -1;
int64_t x110 = INT64_MIN;
int32_t t18 = 1;
int16_t x136 = -1;
uint16_t x139 = 0U;
static int8_t x144 = 3;
volatile int32_t t23 = 77;
uint32_t x155 = 57386958U;
uint16_t x164 = 215U;
uint16_t x170 = 1U;
volatile int32_t t27 = 2;
int32_t x178 = -202;
static uint32_t x179 = UINT32_MAX;
uint64_t x188 = 2518215202739741LLU;
static int16_t x192 = INT16_MAX;
static volatile int16_t x194 = INT16_MIN;
int32_t x195 = INT32_MAX;
static int64_t x196 = -1LL;
volatile int64_t x206 = -51LL;
int8_t x208 = INT8_MIN;
int32_t t34 = -6;
uint16_t x242 = UINT16_MAX;
volatile uint64_t x249 = UINT64_MAX;
uint64_t x250 = 26576240758LLU;
uint16_t x258 = 13819U;
volatile int32_t t43 = 429203;
uint64_t x284 = 20LLU;
static int16_t x294 = 14;
static uint16_t x297 = 2U;
int32_t t48 = -1324784;
static int64_t x308 = -1LL;
static volatile int32_t t50 = 3655406;
int16_t x320 = INT16_MIN;
int8_t x327 = INT8_MAX;
uint16_t x331 = 193U;
int8_t x333 = -1;
static int32_t t56 = -1;
static int32_t t58 = -8119;
static int64_t x348 = INT64_MAX;
int64_t x349 = INT64_MIN;
static int16_t x351 = 0;
int16_t x353 = INT16_MAX;
uint8_t x354 = UINT8_MAX;
uint64_t x355 = 2LLU;
volatile int64_t x356 = -1LL;
int32_t t61 = -734543674;
int16_t x357 = -10053;
int32_t x362 = INT32_MIN;
int16_t x365 = INT16_MAX;
volatile int32_t t65 = -69;
volatile int8_t x386 = -53;
static volatile int32_t t68 = -1022664474;
uint16_t x394 = 7759U;
int16_t x404 = -96;
uint16_t x407 = 60U;
static int32_t t74 = -2750;
volatile uint64_t x427 = 11LLU;
volatile uint16_t x442 = 306U;
int32_t x450 = INT32_MIN;
volatile uint8_t x451 = 4U;
volatile int32_t t82 = 140;
static int8_t x454 = INT8_MAX;
static int16_t x455 = -1602;
int32_t x456 = 467403;
int32_t t83 = -236;
int16_t x462 = INT16_MIN;
volatile int32_t t84 = 1210;
volatile int32_t t86 = 847;
int16_t x480 = INT16_MAX;
int32_t t87 = -49;
volatile int32_t t88 = -4;
int8_t x485 = INT8_MIN;
volatile uint32_t x486 = UINT32_MAX;
int32_t t90 = -407342257;
static int32_t t91 = 76;
volatile int16_t x499 = INT16_MIN;
int32_t t92 = 6731;
volatile uint16_t x507 = 182U;
int32_t t93 = 37;
int8_t x517 = -1;
int8_t x518 = INT8_MIN;
volatile int8_t x520 = INT8_MAX;
int32_t x525 = -1;
int64_t x540 = -1LL;
static int32_t t97 = 50011;
int32_t x542 = INT32_MIN;
static volatile int32_t t98 = -55433;
volatile int32_t x557 = INT32_MIN;
uint16_t x558 = 15652U;
uint64_t x560 = 486274LLU;


void f0(void) {
	int8_t x5 = -1;
	int16_t x6 = -34;
	uint8_t x7 = UINT8_MAX;

	t0 = (x5<=(x6-(x7*x8)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x18 = -1LL;
	int16_t x19 = -1;
	int64_t x20 = -1LL;
	int32_t t1 = 2595;

	t1 = (x17<=(x18-(x19*x20)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x21 = 234240LLU;
	volatile uint64_t x22 = 63707974059807LLU;
	static uint16_t x24 = UINT16_MAX;

	t2 = (x21<=(x22-(x23*x24)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x42 = 3560;
	uint32_t x43 = UINT32_MAX;
	int8_t x44 = INT8_MIN;
	int32_t t3 = -27345;

	t3 = (x41<=(x42-(x43*x44)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x45 = INT16_MIN;
	static int16_t x46 = INT16_MIN;
	volatile int16_t x47 = INT16_MIN;
	int32_t x48 = 4020;

	t4 = (x45<=(x46-(x47*x48)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x49 = 1;
	uint32_t x50 = 2405350U;
	uint16_t x52 = 0U;
	static volatile int32_t t5 = -3495;

	t5 = (x49<=(x50-(x51*x52)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x53 = -1;
	int32_t x54 = -1;
	int32_t x55 = 1949;
	int32_t x56 = -320173;
	static volatile int32_t t6 = 75463744;

	t6 = (x53<=(x54-(x55*x56)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x57 = UINT8_MAX;
	volatile uint8_t x59 = 2U;
	static int8_t x60 = INT8_MAX;

	t7 = (x57<=(x58-(x59*x60)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x69 = INT32_MIN;
	uint64_t x70 = 4471290518141311LLU;
	int8_t x72 = 3;
	int32_t t8 = 16;

	t8 = (x69<=(x70-(x71*x72)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x74 = INT64_MIN;
	static uint16_t x75 = 1812U;
	int8_t x76 = INT8_MIN;
	volatile int32_t t9 = -6;

	t9 = (x73<=(x74-(x75*x76)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x77 = UINT16_MAX;
	int64_t x78 = INT64_MIN;
	uint64_t x79 = UINT64_MAX;
	volatile int16_t x80 = INT16_MAX;
	volatile int32_t t10 = -216161991;

	t10 = (x77<=(x78-(x79*x80)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x86 = 1U;
	static volatile int16_t x87 = INT16_MIN;
	static uint64_t x88 = UINT64_MAX;
	volatile int32_t t11 = -35165;

	t11 = (x85<=(x86-(x87*x88)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x93 = 327465523429522LL;
	volatile int8_t x95 = -1;
	volatile int32_t t12 = 81535478;

	t12 = (x93<=(x94-(x95*x96)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x97 = INT32_MIN;
	int64_t x99 = -1696LL;
	static volatile int32_t t13 = 9051;

	t13 = (x97<=(x98-(x99*x100)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x106 = UINT8_MAX;
	volatile int16_t x107 = INT16_MAX;
	static int16_t x108 = -1;

	t14 = (x105<=(x106-(x107*x108)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x111 = UINT32_MAX;
	uint64_t x112 = 930302667085LLU;
	int32_t t15 = -12107;

	t15 = (x109<=(x110-(x111*x112)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x117 = UINT16_MAX;
	uint8_t x118 = 0U;
	static volatile uint32_t x119 = 1U;
	uint64_t x120 = UINT64_MAX;
	int32_t t16 = -28929;

	t16 = (x117<=(x118-(x119*x120)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x121 = -11LL;
	int64_t x122 = -158731337376918LL;
	static int16_t x123 = -423;
	int16_t x124 = INT16_MIN;
	volatile int32_t t17 = -32666863;

	t17 = (x121<=(x122-(x123*x124)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x125 = INT64_MAX;
	uint8_t x126 = UINT8_MAX;
	static int64_t x127 = -1LL;
	int16_t x128 = 15;

	t18 = (x125<=(x126-(x127*x128)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x129 = -10674148;
	int8_t x130 = INT8_MIN;
	uint32_t x131 = UINT32_MAX;
	volatile int32_t x132 = INT32_MIN;
	volatile int32_t t19 = -3;

	t19 = (x129<=(x130-(x131*x132)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x133 = UINT16_MAX;
	int8_t x134 = -1;
	int32_t x135 = 174;
	volatile int32_t t20 = -15;

	t20 = (x133<=(x134-(x135*x136)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x137 = 1LLU;
	int16_t x138 = -1;
	static int8_t x140 = INT8_MAX;
	int32_t t21 = 61;

	t21 = (x137<=(x138-(x139*x140)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x141 = INT32_MIN;
	uint8_t x142 = 14U;
	static int32_t x143 = 0;
	volatile int32_t t22 = 7422;

	t22 = (x141<=(x142-(x143*x144)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x145 = 3735065LL;
	int16_t x146 = INT16_MAX;
	int64_t x147 = -1LL;
	static int32_t x148 = INT32_MAX;

	t23 = (x145<=(x146-(x147*x148)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x153 = UINT16_MAX;
	volatile int32_t x154 = INT32_MIN;
	int8_t x156 = -1;
	volatile int32_t t24 = -922599;

	t24 = (x153<=(x154-(x155*x156)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x161 = UINT16_MAX;
	int16_t x162 = 117;
	uint32_t x163 = 460U;
	int32_t t25 = 30;

	t25 = (x161<=(x162-(x163*x164)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x165 = -1;
	static volatile uint8_t x166 = UINT8_MAX;
	volatile int32_t x167 = -98660;
	int8_t x168 = INT8_MIN;
	int32_t t26 = 7;

	t26 = (x165<=(x166-(x167*x168)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x169 = 5810U;
	volatile uint16_t x171 = 23503U;
	static int16_t x172 = -1;

	t27 = (x169<=(x170-(x171*x172)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x177 = -1741020853LL;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t28 = -3;

	t28 = (x177<=(x178-(x179*x180)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x181 = UINT8_MAX;
	uint8_t x182 = 18U;
	int32_t x183 = -502545;
	static volatile int8_t x184 = -12;
	static int32_t t29 = 1;

	t29 = (x181<=(x182-(x183*x184)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x185 = INT8_MAX;
	int32_t x186 = INT32_MIN;
	int8_t x187 = 0;
	volatile int32_t t30 = -1465989;

	t30 = (x185<=(x186-(x187*x188)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x189 = UINT32_MAX;
	int32_t x190 = -1;
	uint8_t x191 = 19U;
	volatile int32_t t31 = 120706445;

	t31 = (x189<=(x190-(x191*x192)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x193 = 57U;
	volatile int32_t t32 = 10468;

	t32 = (x193<=(x194-(x195*x196)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x205 = -1LL;
	uint16_t x207 = 7U;
	int32_t t33 = -6718217;

	t33 = (x205<=(x206-(x207*x208)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x221 = -1;
	volatile int32_t x222 = INT32_MIN;
	uint64_t x223 = 3096667LLU;
	uint8_t x224 = 13U;

	t34 = (x221<=(x222-(x223*x224)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x229 = 1;
	int16_t x230 = 1;
	static int8_t x231 = INT8_MAX;
	static int8_t x232 = INT8_MAX;
	volatile int32_t t35 = -982041;

	t35 = (x229<=(x230-(x231*x232)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x233 = 80;
	int64_t x234 = INT64_MAX;
	uint32_t x235 = 48857U;
	int16_t x236 = INT16_MIN;
	volatile int32_t t36 = 1577;

	t36 = (x233<=(x234-(x235*x236)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x237 = INT16_MAX;
	int16_t x238 = -1;
	uint8_t x239 = 6U;
	volatile int16_t x240 = 1739;
	int32_t t37 = -31;

	t37 = (x237<=(x238-(x239*x240)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x241 = INT8_MIN;
	int8_t x243 = 1;
	static uint8_t x244 = 28U;
	int32_t t38 = 141;

	t38 = (x241<=(x242-(x243*x244)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x251 = -11487;
	int16_t x252 = INT16_MAX;
	volatile int32_t t39 = 1710042;

	t39 = (x249<=(x250-(x251*x252)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MIN;
	uint16_t x255 = 15U;
	volatile uint32_t x256 = 102U;
	volatile int32_t t40 = 341659;

	t40 = (x253<=(x254-(x255*x256)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x257 = 1136U;
	static int8_t x259 = -2;
	volatile int32_t x260 = -1;
	static int32_t t41 = -6122;

	t41 = (x257<=(x258-(x259*x260)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x269 = UINT32_MAX;
	volatile int32_t x270 = INT32_MAX;
	int16_t x271 = INT16_MIN;
	uint32_t x272 = 2096954165U;
	static int32_t t42 = -28679747;

	t42 = (x269<=(x270-(x271*x272)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x273 = -444003LL;
	static int8_t x274 = INT8_MIN;
	int8_t x275 = INT8_MAX;
	uint32_t x276 = 1923U;

	t43 = (x273<=(x274-(x275*x276)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x281 = INT32_MIN;
	int16_t x282 = INT16_MAX;
	volatile int64_t x283 = INT64_MIN;
	volatile int32_t t44 = 79952734;

	t44 = (x281<=(x282-(x283*x284)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x285 = 12835U;
	uint32_t x286 = 25U;
	static uint8_t x287 = 1U;
	int8_t x288 = 1;
	volatile int32_t t45 = 162;

	t45 = (x285<=(x286-(x287*x288)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x289 = INT8_MIN;
	int16_t x290 = -1;
	int16_t x291 = INT16_MAX;
	int8_t x292 = INT8_MIN;
	static volatile int32_t t46 = 11007825;

	t46 = (x289<=(x290-(x291*x292)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x293 = 15501;
	static volatile uint8_t x295 = 0U;
	int64_t x296 = INT64_MIN;
	int32_t t47 = 0;

	t47 = (x293<=(x294-(x295*x296)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x298 = 17049272712LLU;
	volatile int64_t x299 = -38034LL;
	static int32_t x300 = -112;

	t48 = (x297<=(x298-(x299*x300)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x305 = INT64_MIN;
	uint16_t x306 = 5321U;
	int8_t x307 = -1;
	int32_t t49 = 196536;

	t49 = (x305<=(x306-(x307*x308)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x309 = 0;
	static int64_t x310 = -1LL;
	uint8_t x311 = 1U;
	int32_t x312 = 802948185;

	t50 = (x309<=(x310-(x311*x312)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x313 = 1646679878237LL;
	static int32_t x314 = INT32_MIN;
	uint64_t x315 = 7930329691232139809LLU;
	volatile int64_t x316 = INT64_MIN;
	static int32_t t51 = 144681;

	t51 = (x313<=(x314-(x315*x316)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x317 = -52;
	uint64_t x318 = 152721474314LLU;
	volatile uint32_t x319 = 946710U;
	int32_t t52 = -1;

	t52 = (x317<=(x318-(x319*x320)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x321 = INT16_MIN;
	int64_t x322 = INT64_MIN;
	int8_t x323 = -12;
	int16_t x324 = INT16_MAX;
	int32_t t53 = -62916042;

	t53 = (x321<=(x322-(x323*x324)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x325 = 735834572035566144LLU;
	uint32_t x326 = 214824130U;
	static volatile int8_t x328 = INT8_MAX;
	int32_t t54 = 1005;

	t54 = (x325<=(x326-(x327*x328)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x329 = INT8_MAX;
	uint16_t x330 = 23782U;
	int8_t x332 = INT8_MIN;
	volatile int32_t t55 = 606028;

	t55 = (x329<=(x330-(x331*x332)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x334 = 14;
	int16_t x335 = INT16_MIN;
	int64_t x336 = -12LL;

	t56 = (x333<=(x334-(x335*x336)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x337 = -637832599LL;
	uint32_t x338 = UINT32_MAX;
	static int64_t x339 = -339623627LL;
	volatile int16_t x340 = 0;
	volatile int32_t t57 = -5;

	t57 = (x337<=(x338-(x339*x340)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x341 = INT8_MIN;
	uint64_t x342 = 10805543053223342LLU;
	volatile int16_t x343 = 0;
	volatile uint64_t x344 = 1838060LLU;

	t58 = (x341<=(x342-(x343*x344)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x345 = 1;
	int32_t x346 = INT32_MIN;
	uint64_t x347 = UINT64_MAX;
	volatile int32_t t59 = -586;

	t59 = (x345<=(x346-(x347*x348)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x350 = -1;
	int32_t x352 = 797;
	static volatile int32_t t60 = -888476231;

	t60 = (x349<=(x350-(x351*x352)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {


	t61 = (x353<=(x354-(x355*x356)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x358 = INT64_MAX;
	volatile uint16_t x359 = UINT16_MAX;
	static uint64_t x360 = 24571897714LLU;
	volatile int32_t t62 = 0;

	t62 = (x357<=(x358-(x359*x360)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x361 = -1;
	static volatile uint16_t x363 = UINT16_MAX;
	volatile int64_t x364 = -508307361LL;
	int32_t t63 = 375557424;

	t63 = (x361<=(x362-(x363*x364)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x366 = 44835224LL;
	int64_t x367 = INT64_MAX;
	int8_t x368 = 1;
	volatile int32_t t64 = 9454;

	t64 = (x365<=(x366-(x367*x368)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x373 = UINT16_MAX;
	int32_t x374 = INT32_MIN;
	volatile uint64_t x375 = 137396LLU;
	uint8_t x376 = UINT8_MAX;

	t65 = (x373<=(x374-(x375*x376)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x377 = INT32_MAX;
	volatile int32_t x378 = INT32_MAX;
	static uint64_t x379 = UINT64_MAX;
	volatile uint64_t x380 = 5381802319283781889LLU;
	int32_t t66 = 29318;

	t66 = (x377<=(x378-(x379*x380)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x385 = UINT8_MAX;
	int8_t x387 = INT8_MAX;
	volatile int16_t x388 = -16;
	int32_t t67 = 0;

	t67 = (x385<=(x386-(x387*x388)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x389 = INT64_MIN;
	uint8_t x390 = 25U;
	int32_t x391 = -1;
	uint16_t x392 = UINT16_MAX;

	t68 = (x389<=(x390-(x391*x392)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x393 = 83U;
	volatile int32_t x395 = 2;
	static uint64_t x396 = 488127297195310893LLU;
	volatile int32_t t69 = -19859;

	t69 = (x393<=(x394-(x395*x396)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x397 = INT32_MAX;
	int64_t x398 = -1016752661811782LL;
	uint8_t x399 = UINT8_MAX;
	volatile int8_t x400 = -21;
	int32_t t70 = 773367;

	t70 = (x397<=(x398-(x399*x400)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x401 = 1063977491236803LL;
	int64_t x402 = INT64_MAX;
	volatile uint64_t x403 = UINT64_MAX;
	static volatile int32_t t71 = -212403;

	t71 = (x401<=(x402-(x403*x404)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x405 = UINT16_MAX;
	int32_t x406 = 6514522;
	uint32_t x408 = UINT32_MAX;
	volatile int32_t t72 = 2600;

	t72 = (x405<=(x406-(x407*x408)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x409 = UINT32_MAX;
	int64_t x410 = -1LL;
	int16_t x411 = 0;
	static uint16_t x412 = 1U;
	int32_t t73 = -346528;

	t73 = (x409<=(x410-(x411*x412)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x413 = INT16_MAX;
	volatile int32_t x414 = INT32_MIN;
	static uint64_t x415 = 142747269040408024LLU;
	volatile int8_t x416 = -1;

	t74 = (x413<=(x414-(x415*x416)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x417 = 20U;
	volatile int64_t x418 = INT64_MAX;
	int32_t x419 = INT32_MAX;
	int16_t x420 = 1;
	volatile int32_t t75 = -78709;

	t75 = (x417<=(x418-(x419*x420)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x421 = UINT32_MAX;
	uint16_t x422 = 38U;
	int8_t x423 = INT8_MIN;
	uint64_t x424 = 96953LLU;
	int32_t t76 = -362;

	t76 = (x421<=(x422-(x423*x424)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x425 = INT16_MIN;
	int64_t x426 = INT64_MIN;
	static int32_t x428 = INT32_MAX;
	volatile int32_t t77 = -85602;

	t77 = (x425<=(x426-(x427*x428)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x433 = -1;
	int16_t x434 = INT16_MIN;
	static uint64_t x435 = 837LLU;
	int64_t x436 = INT64_MIN;
	int32_t t78 = -16936017;

	t78 = (x433<=(x434-(x435*x436)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x437 = 1940;
	int8_t x438 = INT8_MIN;
	static uint32_t x439 = 10930U;
	volatile int32_t x440 = INT32_MIN;
	volatile int32_t t79 = -91555902;

	t79 = (x437<=(x438-(x439*x440)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x441 = 127U;
	uint32_t x443 = 12U;
	int8_t x444 = -1;
	static volatile int32_t t80 = 15868;

	t80 = (x441<=(x442-(x443*x444)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x445 = -1LL;
	static int32_t x446 = INT32_MIN;
	volatile uint16_t x447 = UINT16_MAX;
	uint32_t x448 = UINT32_MAX;
	volatile int32_t t81 = -6989;

	t81 = (x445<=(x446-(x447*x448)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x449 = UINT16_MAX;
	int64_t x452 = -1LL;

	t82 = (x449<=(x450-(x451*x452)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x453 = -1;

	t83 = (x453<=(x454-(x455*x456)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x461 = INT64_MIN;
	uint32_t x463 = 3U;
	int16_t x464 = INT16_MIN;

	t84 = (x461<=(x462-(x463*x464)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x465 = -1LL;
	int64_t x466 = 11LL;
	uint32_t x467 = 313730U;
	static int8_t x468 = INT8_MAX;
	volatile int32_t t85 = -15206624;

	t85 = (x465<=(x466-(x467*x468)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x469 = 83U;
	int64_t x470 = -4577102197599712282LL;
	static int64_t x471 = -5812607783794929LL;
	int32_t x472 = -207;

	t86 = (x469<=(x470-(x471*x472)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x477 = -5;
	volatile int8_t x478 = -1;
	volatile int64_t x479 = -3382762LL;

	t87 = (x477<=(x478-(x479*x480)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x481 = -1LL;
	int16_t x482 = INT16_MAX;
	int64_t x483 = -1LL;
	int32_t x484 = -1;

	t88 = (x481<=(x482-(x483*x484)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x487 = -11;
	int8_t x488 = -1;
	int32_t t89 = -805156518;

	t89 = (x485<=(x486-(x487*x488)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x489 = 305U;
	static uint8_t x490 = 10U;
	int64_t x491 = INT64_MIN;
	uint64_t x492 = 8515697LLU;

	t90 = (x489<=(x490-(x491*x492)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x493 = INT8_MIN;
	volatile uint16_t x494 = UINT16_MAX;
	int16_t x495 = -1;
	static uint32_t x496 = 6U;

	t91 = (x493<=(x494-(x495*x496)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x497 = INT16_MIN;
	int64_t x498 = -1014490274113867LL;
	volatile int16_t x500 = INT16_MAX;

	t92 = (x497<=(x498-(x499*x500)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x505 = -1LL;
	uint16_t x506 = 1U;
	uint32_t x508 = 0U;

	t93 = (x505<=(x506-(x507*x508)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x513 = -1;
	static int8_t x514 = INT8_MAX;
	volatile int8_t x515 = INT8_MAX;
	uint64_t x516 = 160678997LLU;
	volatile int32_t t94 = -191;

	t94 = (x513<=(x514-(x515*x516)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x519 = -1;
	volatile int32_t t95 = 0;

	t95 = (x517<=(x518-(x519*x520)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x526 = INT64_MIN;
	static volatile int64_t x527 = 1244LL;
	uint64_t x528 = 19018603344LLU;
	int32_t t96 = 125936;

	t96 = (x525<=(x526-(x527*x528)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x537 = INT16_MIN;
	int32_t x538 = INT32_MIN;
	int64_t x539 = INT64_MAX;

	t97 = (x537<=(x538-(x539*x540)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x541 = INT16_MIN;
	int16_t x543 = -1;
	uint16_t x544 = 25U;

	t98 = (x541<=(x542-(x543*x544)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x559 = 167898436LLU;
	volatile int32_t t99 = 156069480;

	t99 = (x557<=(x558-(x559*x560)));

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

