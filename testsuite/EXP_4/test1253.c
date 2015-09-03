#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -2802185615072LL;
uint64_t x4 = UINT64_MAX;
int8_t x20 = 12;
int16_t x29 = INT16_MIN;
uint16_t x33 = 8U;
int64_t x37 = INT64_MAX;
int8_t x38 = 29;
volatile int64_t x39 = 2707188LL;
int8_t x40 = 1;
static int64_t x43 = 1394LL;
int8_t x49 = INT8_MIN;
uint8_t x51 = 29U;
int32_t x61 = 1;
uint64_t x69 = UINT64_MAX;
uint16_t x73 = 1566U;
int64_t x74 = INT64_MAX;
static uint32_t x102 = UINT32_MAX;
int32_t x105 = -1151452;
uint8_t x121 = 31U;
static volatile int64_t x123 = -1LL;
volatile int32_t t15 = -5380712;
static uint16_t x126 = 420U;
static volatile uint64_t x137 = 17232191589729LLU;
uint64_t x154 = UINT64_MAX;
volatile uint64_t t18 = 413338438LLU;
uint64_t x162 = 101LLU;
int64_t x165 = -1LL;
static int16_t x173 = 0;
uint8_t x174 = 35U;
static volatile uint8_t x175 = UINT8_MAX;
uint16_t x198 = UINT16_MAX;
volatile uint32_t t23 = 1393U;
int8_t x208 = INT8_MAX;
static volatile uint64_t x226 = 60305705652LLU;
static uint32_t t27 = 22U;
int64_t x241 = -26173516959801850LL;
int64_t x261 = -1LL;
uint8_t x268 = 26U;
volatile int32_t t31 = 88;
volatile uint32_t x283 = 983572573U;
int8_t x284 = -1;
static uint16_t x287 = UINT16_MAX;
volatile int64_t x294 = 1LL;
static volatile uint8_t x302 = 14U;
uint16_t x314 = 1898U;
volatile int16_t x316 = INT16_MAX;
static uint64_t t37 = 8501658826LLU;
volatile int16_t x318 = 118;
volatile uint16_t x326 = 1U;
int8_t x328 = -1;
int64_t x338 = 13272528468681LL;
int64_t x340 = 191472541049525549LL;
int64_t t40 = 476632LL;
volatile int64_t t41 = 104717714911831054LL;
int16_t x354 = INT16_MAX;
int8_t x355 = INT8_MAX;
int32_t t43 = -23935;
int32_t t48 = -11341184;
uint32_t x405 = 0U;
static uint32_t x409 = UINT32_MAX;
volatile uint32_t t51 = 15166U;
static volatile uint16_t x413 = 1254U;
volatile int32_t t52 = 187428810;
uint32_t x417 = 990843896U;
uint64_t x446 = UINT64_MAX;
uint16_t x457 = 4828U;
uint32_t x458 = UINT32_MAX;
static uint32_t t56 = 103230U;
uint16_t x462 = 23U;
int64_t x465 = INT64_MAX;
volatile uint64_t x468 = UINT64_MAX;
int64_t t58 = -491765017025026LL;
volatile uint32_t x487 = 32081833U;
volatile uint64_t x494 = UINT64_MAX;
volatile uint64_t t61 = 44729109961372379LLU;
uint8_t x505 = 0U;
uint32_t t65 = 24U;
int16_t x569 = 22;
int16_t x572 = -1;
int32_t x584 = -1;
volatile uint32_t t69 = 7U;
uint16_t x595 = 177U;
int64_t x596 = INT64_MAX;
volatile int32_t t72 = -1;
int32_t t73 = -124460;
int32_t x631 = 8;
uint8_t x650 = UINT8_MAX;
uint16_t x655 = 479U;
static int16_t x656 = -1;
int16_t x668 = 5510;
int64_t x693 = 41LL;
volatile int64_t t84 = 142008LL;
int8_t x714 = 11;
int16_t x716 = 140;
uint32_t t89 = 1137813U;
int64_t t91 = -7LL;
int64_t x762 = 211693358688748035LL;
int64_t x764 = INT64_MIN;
int32_t x768 = 50;
int16_t x779 = -1;
int32_t t95 = 8997;
int8_t x782 = INT8_MAX;
static uint8_t x783 = UINT8_MAX;
int32_t t96 = 122358;
int32_t x789 = -1;
uint64_t x806 = UINT64_MAX;
int8_t x807 = INT8_MIN;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	static int16_t x2 = 19;
	int32_t t0 = -247516;

	t0 = (x1%(x2<<(x3==x4)));

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = 26;
	int64_t x14 = 1315706LL;
	int8_t x15 = 7;
	static uint16_t x16 = UINT16_MAX;
	volatile int64_t t1 = -243806LL;

	t1 = (x13%(x14<<(x15==x16)));

	if (t1 != 26LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = 33142559455LLU;
	int32_t x18 = 938191466;
	int16_t x19 = -12264;
	static volatile uint64_t t2 = 27431145796797411LLU;

	t2 = (x17%(x18<<(x19==x20)));

	if (t2 != 305858145LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x30 = UINT16_MAX;
	uint16_t x31 = UINT16_MAX;
	volatile uint8_t x32 = 0U;
	volatile int32_t t3 = -109334613;

	t3 = (x29%(x30<<(x31==x32)));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x34 = INT32_MAX;
	volatile int16_t x35 = -1;
	volatile int16_t x36 = -6010;
	volatile int32_t t4 = 23861;

	t4 = (x33%(x34<<(x35==x36)));

	if (t4 != 8) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t t5 = 21221266688LL;

	t5 = (x37%(x38<<(x39==x40)));

	if (t5 != 11LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x41 = INT64_MIN;
	int8_t x42 = INT8_MAX;
	int32_t x44 = 0;
	volatile int64_t t6 = -3765453304860LL;

	t6 = (x41%(x42<<(x43==x44)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x45 = UINT16_MAX;
	volatile uint64_t x46 = UINT64_MAX;
	volatile uint64_t x47 = 933002218520LLU;
	int64_t x48 = 80870739LL;
	uint64_t t7 = 8315808175274LLU;

	t7 = (x45%(x46<<(x47==x48)));

	if (t7 != 65535LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x50 = 2;
	int64_t x52 = INT64_MIN;
	int32_t t8 = 2;

	t8 = (x49%(x50<<(x51==x52)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x62 = INT8_MAX;
	static int32_t x63 = -4778722;
	volatile int8_t x64 = INT8_MIN;
	static int32_t t9 = 581154;

	t9 = (x61%(x62<<(x63==x64)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x70 = 25557U;
	int32_t x71 = -1;
	uint32_t x72 = UINT32_MAX;
	volatile uint64_t t10 = 10933638490164901LLU;

	t10 = (x69%(x70<<(x71==x72)));

	if (t10 != 855LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x75 = INT16_MIN;
	uint8_t x76 = 123U;
	int64_t t11 = 31398926LL;

	t11 = (x73%(x74<<(x75==x76)));

	if (t11 != 1566LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x97 = 288636LL;
	int32_t x98 = INT32_MAX;
	int16_t x99 = -1;
	volatile uint32_t x100 = 16315U;
	int64_t t12 = -20967LL;

	t12 = (x97%(x98<<(x99==x100)));

	if (t12 != 288636LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x101 = 306LLU;
	static int32_t x103 = -1;
	int8_t x104 = INT8_MIN;
	uint64_t t13 = 0LLU;

	t13 = (x101%(x102<<(x103==x104)));

	if (t13 != 306LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x106 = UINT16_MAX;
	int8_t x107 = INT8_MAX;
	int8_t x108 = INT8_MIN;
	int32_t t14 = 59078;

	t14 = (x105%(x106<<(x107==x108)));

	if (t14 != -37357) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x122 = 3U;
	int16_t x124 = INT16_MIN;

	t15 = (x121%(x122<<(x123==x124)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x125 = INT64_MAX;
	uint64_t x127 = UINT64_MAX;
	int32_t x128 = 108;
	int64_t t16 = -13702107551627LL;

	t16 = (x125%(x126<<(x127==x128)));

	if (t16 != 7LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x138 = UINT16_MAX;
	int8_t x139 = -2;
	int16_t x140 = -6;
	volatile uint64_t t17 = 2616187LLU;

	t17 = (x137%(x138<<(x139==x140)));

	if (t17 != 52149LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x153 = INT64_MAX;
	int64_t x155 = -1LL;
	volatile int32_t x156 = INT32_MIN;

	t18 = (x153%(x154<<(x155==x156)));

	if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x161 = UINT64_MAX;
	int8_t x163 = 1;
	int8_t x164 = 2;
	volatile uint64_t t19 = 1484704434696613648LLU;

	t19 = (x161%(x162<<(x163==x164)));

	if (t19 != 78LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x166 = UINT32_MAX;
	int16_t x167 = INT16_MAX;
	int64_t x168 = INT64_MIN;
	volatile int64_t t20 = -4712704115537300LL;

	t20 = (x165%(x166<<(x167==x168)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x176 = 8910;
	int32_t t21 = -420125;

	t21 = (x173%(x174<<(x175==x176)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x189 = INT16_MAX;
	int16_t x190 = 1258;
	static int64_t x191 = 7437320626917LL;
	static int64_t x192 = 15LL;
	int32_t t22 = 10577365;

	t22 = (x189%(x190<<(x191==x192)));

	if (t22 != 59) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x197 = UINT32_MAX;
	uint32_t x199 = UINT32_MAX;
	int64_t x200 = INT64_MIN;

	t23 = (x197%(x198<<(x199==x200)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x205 = INT16_MAX;
	uint64_t x206 = 29LLU;
	uint32_t x207 = 5595366U;
	volatile uint64_t t24 = 249LLU;

	t24 = (x205%(x206<<(x207==x208)));

	if (t24 != 26LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x217 = INT64_MIN;
	int32_t x218 = 124858;
	volatile uint16_t x219 = 4917U;
	int8_t x220 = -1;
	static volatile int64_t t25 = 13220155350LL;

	t25 = (x217%(x218<<(x219==x220)));

	if (t25 != -110950LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x225 = UINT64_MAX;
	uint64_t x227 = UINT64_MAX;
	int32_t x228 = -1;
	static uint64_t t26 = 373459895098935LLU;

	t26 = (x225%(x226<<(x227==x228)));

	if (t26 != 24738040695LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x237 = 478339U;
	int16_t x238 = INT16_MAX;
	volatile int32_t x239 = INT32_MIN;
	uint32_t x240 = UINT32_MAX;

	t27 = (x237%(x238<<(x239==x240)));

	if (t27 != 19601U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x242 = 1293097948U;
	int64_t x243 = -1LL;
	int32_t x244 = INT32_MIN;
	volatile int64_t t28 = 34LL;

	t28 = (x241%(x242<<(x243==x244)));

	if (t28 != -273308678LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x257 = INT8_MIN;
	volatile int16_t x258 = INT16_MAX;
	int32_t x259 = INT32_MIN;
	int64_t x260 = 147305002948LL;
	volatile int32_t t29 = 3895203;

	t29 = (x257%(x258<<(x259==x260)));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x262 = UINT32_MAX;
	int16_t x263 = INT16_MIN;
	static int32_t x264 = INT32_MAX;
	volatile int64_t t30 = 634966LL;

	t30 = (x261%(x262<<(x263==x264)));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x265 = 1U;
	int16_t x266 = 215;
	volatile int8_t x267 = INT8_MIN;

	t31 = (x265%(x266<<(x267==x268)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x269 = 0U;
	static uint32_t x270 = UINT32_MAX;
	int16_t x271 = -1;
	uint64_t x272 = UINT64_MAX;
	static uint32_t t32 = 441U;

	t32 = (x269%(x270<<(x271==x272)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x281 = 437U;
	static uint64_t x282 = 676988818LLU;
	volatile uint64_t t33 = 22LLU;

	t33 = (x281%(x282<<(x283==x284)));

	if (t33 != 437LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x285 = 4U;
	volatile uint32_t x286 = 4U;
	int8_t x288 = 1;
	volatile uint32_t t34 = 4957U;

	t34 = (x285%(x286<<(x287==x288)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x293 = INT64_MAX;
	int8_t x295 = INT8_MAX;
	int32_t x296 = INT32_MIN;
	static int64_t t35 = -14156LL;

	t35 = (x293%(x294<<(x295==x296)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x301 = 24;
	int64_t x303 = INT64_MIN;
	int32_t x304 = 14;
	volatile int32_t t36 = 1180;

	t36 = (x301%(x302<<(x303==x304)));

	if (t36 != 10) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x313 = UINT64_MAX;
	int16_t x315 = 19;

	t37 = (x313%(x314<<(x315==x316)));

	if (t37 != 1315LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x317 = INT32_MIN;
	int8_t x319 = 0;
	int16_t x320 = INT16_MIN;
	volatile int32_t t38 = 3;

	t38 = (x317%(x318<<(x319==x320)));

	if (t38 != -114) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x325 = INT8_MIN;
	uint16_t x327 = UINT16_MAX;
	volatile int32_t t39 = -14;

	t39 = (x325%(x326<<(x327==x328)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x337 = INT16_MIN;
	uint32_t x339 = 24523U;

	t40 = (x337%(x338<<(x339==x340)));

	if (t40 != -32768LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x345 = 1U;
	int64_t x346 = 1908403002398195LL;
	uint64_t x347 = 6276115340329LLU;
	int32_t x348 = INT32_MAX;

	t41 = (x345%(x346<<(x347==x348)));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x349 = -3142488;
	static uint32_t x350 = 174634U;
	int64_t x351 = INT64_MAX;
	static int64_t x352 = INT64_MAX;
	volatile uint32_t t42 = 53U;

	t42 = (x349%(x350<<(x351==x352)));

	if (t42 != 19624U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x353 = 3U;
	int16_t x356 = INT16_MIN;

	t43 = (x353%(x354<<(x355==x356)));

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x357 = UINT8_MAX;
	uint32_t x358 = 211U;
	int8_t x359 = INT8_MIN;
	int64_t x360 = -234LL;
	static volatile uint32_t t44 = 236896198U;

	t44 = (x357%(x358<<(x359==x360)));

	if (t44 != 44U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x369 = 1U;
	uint32_t x370 = 408091718U;
	int16_t x371 = 2;
	int32_t x372 = 4;
	uint32_t t45 = 16U;

	t45 = (x369%(x370<<(x371==x372)));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x373 = -1313238;
	uint32_t x374 = 60U;
	volatile int32_t x375 = -4022016;
	int16_t x376 = INT16_MIN;
	uint32_t t46 = 13U;

	t46 = (x373%(x374<<(x375==x376)));

	if (t46 != 58U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x377 = 707LLU;
	volatile uint8_t x378 = UINT8_MAX;
	int16_t x379 = INT16_MAX;
	int32_t x380 = -1;
	uint64_t t47 = 197337685160LLU;

	t47 = (x377%(x378<<(x379==x380)));

	if (t47 != 197LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x381 = 1U;
	static volatile uint8_t x382 = UINT8_MAX;
	volatile uint16_t x383 = 1330U;
	static int8_t x384 = 7;

	t48 = (x381%(x382<<(x383==x384)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x393 = UINT32_MAX;
	uint64_t x394 = UINT64_MAX;
	uint16_t x395 = 16852U;
	static uint32_t x396 = 447276U;
	uint64_t t49 = 248595636809431LLU;

	t49 = (x393%(x394<<(x395==x396)));

	if (t49 != 4294967295LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x406 = INT8_MAX;
	static int8_t x407 = INT8_MIN;
	int16_t x408 = -1;
	uint32_t t50 = 4058890U;

	t50 = (x405%(x406<<(x407==x408)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x410 = UINT32_MAX;
	int16_t x411 = -31;
	volatile int32_t x412 = INT32_MAX;

	t51 = (x409%(x410<<(x411==x412)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x414 = INT16_MAX;
	int16_t x415 = INT16_MIN;
	static volatile int16_t x416 = -1;

	t52 = (x413%(x414<<(x415==x416)));

	if (t52 != 1254) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x418 = UINT64_MAX;
	int64_t x419 = -1LL;
	static volatile uint16_t x420 = UINT16_MAX;
	volatile uint64_t t53 = 13906618774809LLU;

	t53 = (x417%(x418<<(x419==x420)));

	if (t53 != 990843896LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x433 = -136139799;
	uint8_t x434 = 21U;
	int64_t x435 = INT64_MAX;
	static volatile int8_t x436 = -1;
	int32_t t54 = -146739;

	t54 = (x433%(x434<<(x435==x436)));

	if (t54 != -12) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x445 = INT8_MIN;
	int8_t x447 = INT8_MIN;
	int16_t x448 = 126;
	volatile uint64_t t55 = 29164067LLU;

	t55 = (x445%(x446<<(x447==x448)));

	if (t55 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x459 = -1;
	int64_t x460 = INT64_MIN;

	t56 = (x457%(x458<<(x459==x460)));

	if (t56 != 4828U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x461 = 697LLU;
	int16_t x463 = -3421;
	static uint32_t x464 = UINT32_MAX;
	uint64_t t57 = 15256372LLU;

	t57 = (x461%(x462<<(x463==x464)));

	if (t57 != 7LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x466 = INT8_MAX;
	uint16_t x467 = 4370U;

	t58 = (x465%(x466<<(x467==x468)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x473 = INT8_MIN;
	uint8_t x474 = 59U;
	int32_t x475 = -8642137;
	int64_t x476 = INT64_MAX;
	volatile int32_t t59 = 12;

	t59 = (x473%(x474<<(x475==x476)));

	if (t59 != -10) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x485 = -22;
	int64_t x486 = 15381LL;
	int32_t x488 = -1;
	static int64_t t60 = 356LL;

	t60 = (x485%(x486<<(x487==x488)));

	if (t60 != -22LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x493 = UINT32_MAX;
	int32_t x495 = -2343868;
	int8_t x496 = INT8_MIN;

	t61 = (x493%(x494<<(x495==x496)));

	if (t61 != 4294967295LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x506 = 53965U;
	int32_t x507 = -1;
	static int32_t x508 = INT32_MIN;
	volatile uint32_t t62 = 511U;

	t62 = (x505%(x506<<(x507==x508)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x525 = INT64_MAX;
	int16_t x526 = 1;
	static uint32_t x527 = 0U;
	uint64_t x528 = UINT64_MAX;
	volatile int64_t t63 = 6LL;

	t63 = (x525%(x526<<(x527==x528)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x541 = -74;
	static volatile int8_t x542 = 1;
	int32_t x543 = INT32_MIN;
	int16_t x544 = -1;
	volatile int32_t t64 = 0;

	t64 = (x541%(x542<<(x543==x544)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x549 = UINT32_MAX;
	static int16_t x550 = 1;
	uint8_t x551 = UINT8_MAX;
	volatile int16_t x552 = -1;

	t65 = (x549%(x550<<(x551==x552)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x557 = INT64_MIN;
	int8_t x558 = 22;
	int64_t x559 = -3766708558070LL;
	volatile int64_t x560 = -1LL;
	int64_t t66 = 430888893LL;

	t66 = (x557%(x558<<(x559==x560)));

	if (t66 != -8LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x570 = 2U;
	volatile int32_t x571 = 2171;
	volatile int32_t t67 = -41236167;

	t67 = (x569%(x570<<(x571==x572)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x577 = 5476025851LL;
	volatile int32_t x578 = INT32_MAX;
	int8_t x579 = INT8_MIN;
	int8_t x580 = INT8_MAX;
	volatile int64_t t68 = 126308LL;

	t68 = (x577%(x578<<(x579==x580)));

	if (t68 != 1181058557LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x581 = 18U;
	volatile uint32_t x582 = 119112885U;
	uint32_t x583 = 12U;

	t69 = (x581%(x582<<(x583==x584)));

	if (t69 != 18U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x585 = 4;
	static int32_t x586 = INT32_MAX;
	int16_t x587 = INT16_MAX;
	volatile int64_t x588 = 405754929LL;
	volatile int32_t t70 = 1192769;

	t70 = (x585%(x586<<(x587==x588)));

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x593 = UINT8_MAX;
	int16_t x594 = 86;
	static int32_t t71 = -20;

	t71 = (x593%(x594<<(x595==x596)));

	if (t71 != 83) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x601 = INT16_MIN;
	static int16_t x602 = INT16_MAX;
	uint64_t x603 = 9681742724708458LLU;
	int64_t x604 = INT64_MAX;

	t72 = (x601%(x602<<(x603==x604)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x617 = INT16_MIN;
	volatile int16_t x618 = INT16_MAX;
	uint8_t x619 = 3U;
	uint32_t x620 = UINT32_MAX;

	t73 = (x617%(x618<<(x619==x620)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x625 = INT64_MAX;
	int16_t x626 = INT16_MAX;
	int8_t x627 = -1;
	static uint16_t x628 = 1953U;
	int64_t t74 = 898008868LL;

	t74 = (x625%(x626<<(x627==x628)));

	if (t74 != 7LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x629 = INT8_MIN;
	uint32_t x630 = UINT32_MAX;
	int16_t x632 = 12482;
	uint32_t t75 = 1249431602U;

	t75 = (x629%(x630<<(x631==x632)));

	if (t75 != 4294967168U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x633 = 1;
	uint16_t x634 = UINT16_MAX;
	static uint32_t x635 = 1295U;
	uint8_t x636 = 2U;
	volatile int32_t t76 = -1490;

	t76 = (x633%(x634<<(x635==x636)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x637 = INT8_MIN;
	int8_t x638 = 4;
	int32_t x639 = -217;
	uint64_t x640 = 1808487943343943LLU;
	int32_t t77 = 103787305;

	t77 = (x637%(x638<<(x639==x640)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x649 = 6U;
	static int64_t x651 = INT64_MIN;
	volatile int64_t x652 = -1LL;
	volatile int32_t t78 = -172;

	t78 = (x649%(x650<<(x651==x652)));

	if (t78 != 6) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x653 = -1;
	volatile uint32_t x654 = UINT32_MAX;
	volatile uint32_t t79 = 43046U;

	t79 = (x653%(x654<<(x655==x656)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x657 = -1;
	uint8_t x658 = UINT8_MAX;
	uint8_t x659 = 10U;
	static volatile int32_t x660 = -1968379;
	int32_t t80 = 1728;

	t80 = (x657%(x658<<(x659==x660)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x665 = UINT64_MAX;
	int64_t x666 = INT64_MAX;
	static int32_t x667 = INT32_MAX;
	volatile uint64_t t81 = 220218LLU;

	t81 = (x665%(x666<<(x667==x668)));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x673 = 4U;
	uint64_t x674 = 485064112886LLU;
	volatile int8_t x675 = 35;
	int8_t x676 = INT8_MIN;
	volatile uint64_t t82 = 114578473777683LLU;

	t82 = (x673%(x674<<(x675==x676)));

	if (t82 != 4LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x685 = INT16_MIN;
	int32_t x686 = 6541;
	int64_t x687 = INT64_MIN;
	static int8_t x688 = 1;
	volatile int32_t t83 = -1063;

	t83 = (x685%(x686<<(x687==x688)));

	if (t83 != -63) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x694 = UINT16_MAX;
	uint16_t x695 = 123U;
	volatile uint16_t x696 = 98U;

	t84 = (x693%(x694<<(x695==x696)));

	if (t84 != 41LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x701 = -6;
	uint8_t x702 = 1U;
	int16_t x703 = 0;
	static int32_t x704 = -1;
	static volatile int32_t t85 = 1011;

	t85 = (x701%(x702<<(x703==x704)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x713 = -867842;
	volatile int8_t x715 = 0;
	int32_t t86 = 60;

	t86 = (x713%(x714<<(x715==x716)));

	if (t86 != -8) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x733 = 4U;
	volatile uint8_t x734 = UINT8_MAX;
	int16_t x735 = INT16_MIN;
	int64_t x736 = INT64_MAX;
	volatile int32_t t87 = -918;

	t87 = (x733%(x734<<(x735==x736)));

	if (t87 != 4) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x737 = INT16_MIN;
	uint8_t x738 = 68U;
	int32_t x739 = INT32_MIN;
	int32_t x740 = 112700345;
	volatile int32_t t88 = 13040519;

	t88 = (x737%(x738<<(x739==x740)));

	if (t88 != -60) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x741 = 1U;
	volatile uint32_t x742 = 615155U;
	volatile uint32_t x743 = UINT32_MAX;
	uint32_t x744 = 402019131U;

	t89 = (x741%(x742<<(x743==x744)));

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x745 = INT64_MAX;
	static int8_t x746 = INT8_MAX;
	int64_t x747 = -1LL;
	uint16_t x748 = 29U;
	static volatile int64_t t90 = -1480LL;

	t90 = (x745%(x746<<(x747==x748)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x749 = INT64_MIN;
	volatile uint8_t x750 = 2U;
	volatile int8_t x751 = 28;
	static int32_t x752 = INT32_MIN;

	t91 = (x749%(x750<<(x751==x752)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x761 = UINT8_MAX;
	static volatile int32_t x763 = INT32_MIN;
	volatile int64_t t92 = 261553LL;

	t92 = (x761%(x762<<(x763==x764)));

	if (t92 != 255LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x765 = INT64_MAX;
	int32_t x766 = INT32_MAX;
	static int16_t x767 = INT16_MIN;
	volatile int64_t t93 = -26313179710LL;

	t93 = (x765%(x766<<(x767==x768)));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x773 = INT8_MIN;
	uint64_t x774 = 54498088LLU;
	int8_t x775 = INT8_MIN;
	static uint64_t x776 = UINT64_MAX;
	volatile uint64_t t94 = 46613117243LLU;

	t94 = (x773%(x774<<(x775==x776)));

	if (t94 != 38090040LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x777 = 2;
	int16_t x778 = 15;
	int16_t x780 = INT16_MIN;

	t95 = (x777%(x778<<(x779==x780)));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x781 = INT8_MAX;
	int32_t x784 = -1614011;

	t96 = (x781%(x782<<(x783==x784)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x790 = 1;
	static int32_t x791 = INT32_MAX;
	static int32_t x792 = INT32_MIN;
	volatile int32_t t97 = 1314;

	t97 = (x789%(x790<<(x791==x792)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x801 = UINT32_MAX;
	volatile int64_t x802 = 15LL;
	int8_t x803 = INT8_MIN;
	volatile int64_t x804 = INT64_MIN;
	volatile int64_t t98 = 3874LL;

	t98 = (x801%(x802<<(x803==x804)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x805 = 533703557129530619LL;
	int32_t x808 = -1;
	uint64_t t99 = 4345338084721105344LLU;

	t99 = (x805%(x806<<(x807==x808)));

	if (t99 != 533703557129530619LLU) { NG(); } else { ; }
	
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

