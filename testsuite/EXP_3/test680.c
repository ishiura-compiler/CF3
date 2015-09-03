#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x1 = 7U;
int64_t x3 = -973183562284757LL;
int32_t x12 = -885226;
volatile int64_t x23 = -1LL;
volatile int16_t x39 = 5076;
int64_t t7 = -103911461648LL;
static uint64_t x49 = 15974691733LLU;
int8_t x51 = INT8_MIN;
int16_t x52 = INT16_MIN;
uint64_t x57 = UINT64_MAX;
volatile int16_t x59 = -405;
uint8_t x71 = 1U;
static volatile uint64_t t13 = 862898000034LLU;
int8_t x78 = INT8_MIN;
volatile int64_t x83 = INT64_MIN;
volatile uint8_t x86 = UINT8_MAX;
int32_t x93 = -1;
uint8_t x105 = 3U;
int32_t x107 = INT32_MAX;
int16_t x115 = INT16_MIN;
int8_t x128 = -16;
static int32_t x142 = INT32_MIN;
uint64_t x155 = 297LLU;
volatile uint64_t t28 = 3619LLU;
int64_t x199 = INT64_MIN;
int16_t x218 = INT16_MAX;
uint32_t x222 = 99592191U;
int16_t x231 = 1;
volatile int64_t t34 = 389407525170372LL;
static int16_t x252 = INT16_MIN;
int32_t x267 = INT32_MAX;
static uint64_t x283 = 439538852062LLU;
int64_t t40 = -208742489062194LL;
uint16_t x301 = 1U;
static int32_t x302 = INT32_MIN;
int8_t x303 = -1;
volatile int32_t x304 = INT32_MAX;
static volatile int32_t t42 = INT32_MAX;
uint16_t x314 = 11869U;
static int64_t x316 = INT64_MIN;
uint16_t x364 = UINT16_MAX;
int8_t x377 = 60;
int8_t x379 = -20;
volatile int64_t x380 = INT64_MIN;
volatile uint64_t t52 = 12446141LLU;
int64_t x386 = -2028LL;
uint64_t t54 = 22LLU;
static int8_t x396 = INT8_MIN;
static int16_t x413 = 115;
int8_t x429 = INT8_MIN;
uint32_t x430 = 2023366U;
static volatile uint32_t t59 = 15U;
static uint64_t x433 = 155110579681239232LLU;
volatile uint16_t x434 = 6U;
static int8_t x437 = -1;
uint64_t x442 = 416LLU;
volatile uint32_t t63 = 117U;
volatile int32_t x456 = INT32_MIN;
int16_t x457 = INT16_MIN;
uint32_t x486 = UINT32_MAX;
int64_t x487 = INT64_MAX;
uint16_t x497 = 54U;
uint32_t x498 = 9601U;
int8_t x526 = 1;
static int32_t x527 = 178526;
uint8_t x552 = UINT8_MAX;
static uint8_t x557 = 47U;
static int64_t x559 = 61LL;
static volatile uint64_t x560 = UINT64_MAX;
int64_t x565 = 107281311358298029LL;
int64_t x567 = -38LL;
int64_t t77 = -2874543LL;
uint32_t x587 = 491U;
int32_t x588 = INT32_MIN;
volatile int8_t x594 = INT8_MIN;
int64_t x608 = INT64_MIN;
int64_t x611 = 4522294LL;
uint16_t x633 = 0U;
volatile uint8_t x636 = 10U;
int64_t t85 = -188869241LL;
uint8_t x652 = 18U;
static volatile uint8_t x655 = 3U;
volatile int8_t x657 = INT8_MIN;
volatile uint16_t x668 = UINT16_MAX;
uint32_t x671 = 303845553U;
uint64_t x672 = UINT64_MAX;
static int16_t x677 = INT16_MIN;
int8_t x700 = 5;
static volatile uint16_t x706 = 4007U;
volatile int64_t x707 = 12069LL;
int64_t t99 = -2001878195LL;


void f0(void) {
	int16_t x2 = -317;
	volatile int32_t x4 = INT32_MIN;
	int64_t t0 = -4199LL;

	t0 = ((x1+x2)/(x3%x4));

	if (t0 != -2LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 28U;
	static uint32_t x10 = UINT32_MAX;
	static volatile int8_t x11 = INT8_MIN;
	static uint32_t t1 = 0U;

	t1 = ((x9+x10)/(x11%x12));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x17 = -1;
	static int32_t x18 = INT32_MAX;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = UINT8_MAX;
	int32_t t2 = 1281720;

	t2 = ((x17+x18)/(x19%x20));

	if (t2 != -16777215) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = -2143;
	uint32_t x22 = 2882984U;
	int8_t x24 = 5;
	volatile int64_t t3 = 6029283LL;

	t3 = ((x21+x22)/(x23%x24));

	if (t3 != -2880841LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x25 = -43733586;
	uint32_t x26 = UINT32_MAX;
	static uint8_t x27 = 1U;
	uint8_t x28 = 3U;
	uint32_t t4 = 11353U;

	t4 = ((x25+x26)/(x27%x28));

	if (t4 != 4251233709U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	int64_t x30 = INT64_MAX;
	int8_t x31 = INT8_MIN;
	int8_t x32 = 51;
	static int64_t t5 = -7796254206279LL;

	t5 = ((x29+x30)/(x31%x32));

	if (t5 != -354745078340568300LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -1;
	static uint8_t x34 = UINT8_MAX;
	static int16_t x35 = -1;
	int8_t x36 = -49;
	static int32_t t6 = 71;

	t6 = ((x33+x34)/(x35%x36));

	if (t6 != -254) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -1LL;
	int16_t x38 = INT16_MAX;
	static uint8_t x40 = 15U;

	t7 = ((x37+x38)/(x39%x40));

	if (t7 != 5461LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -20;
	int32_t x42 = -168603202;
	int8_t x43 = -1;
	int64_t x44 = INT64_MIN;
	int64_t t8 = -1669135876LL;

	t8 = ((x41+x42)/(x43%x44));

	if (t8 != 168603222LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = 844;
	uint16_t x46 = UINT16_MAX;
	volatile uint32_t x47 = 7993U;
	int16_t x48 = -1;
	volatile uint32_t t9 = 76U;

	t9 = ((x45+x46)/(x47%x48));

	if (t9 != 8U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x50 = INT16_MAX;
	volatile uint64_t t10 = 13237LLU;

	t10 = ((x49+x50)/(x51%x52));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x58 = 0;
	uint32_t x60 = UINT32_MAX;
	volatile uint64_t t11 = 1659561633345LLU;

	t11 = ((x57+x58)/(x59%x60));

	if (t11 != 4294967701LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = -29;
	int8_t x62 = INT8_MIN;
	static uint32_t x63 = 429U;
	int64_t x64 = -61079767LL;
	volatile int64_t t12 = 116467642394928LL;

	t12 = ((x61+x62)/(x63%x64));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x69 = 345162778861LLU;
	volatile int64_t x70 = INT64_MIN;
	volatile int16_t x72 = INT16_MIN;

	t13 = ((x69+x70)/(x71%x72));

	if (t13 != 9223372382017554669LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = 0;
	volatile int8_t x79 = INT8_MIN;
	int32_t x80 = INT32_MAX;
	int32_t t14 = -811463361;

	t14 = ((x77+x78)/(x79%x80));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MIN;
	static int8_t x82 = -3;
	static int64_t x84 = 1928LL;
	volatile int64_t t15 = 1528028968LL;

	t15 = ((x81+x82)/(x83%x84));

	if (t15 != 17LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = -1LL;
	int16_t x87 = INT16_MIN;
	int32_t x88 = 6292007;
	int64_t t16 = 2169361675LL;

	t16 = ((x85+x86)/(x87%x88));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x94 = 5485U;
	int8_t x95 = 4;
	int16_t x96 = INT16_MAX;
	static int32_t t17 = 24;

	t17 = ((x93+x94)/(x95%x96));

	if (t17 != 1371) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x101 = INT8_MIN;
	uint64_t x102 = UINT64_MAX;
	int16_t x103 = -1015;
	int64_t x104 = INT64_MAX;
	uint64_t t18 = 846261186LLU;

	t18 = ((x101+x102)/(x103%x104));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x106 = 19U;
	static int64_t x108 = 3771696317208253745LL;
	static int64_t t19 = -6078LL;

	t19 = ((x105+x106)/(x107%x108));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x113 = -199062871;
	uint32_t x114 = 51434U;
	int16_t x116 = 6;
	volatile uint32_t t20 = 567105U;

	t20 = ((x113+x114)/(x115%x116));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = INT16_MIN;
	uint8_t x122 = UINT8_MAX;
	int16_t x123 = INT16_MIN;
	volatile int16_t x124 = 52;
	volatile int32_t t21 = 3;

	t21 = ((x121+x122)/(x123%x124));

	if (t21 != 4064) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MAX;
	uint32_t x127 = 531345804U;
	int64_t t22 = 1LL;

	t22 = ((x125+x126)/(x127%x128));

	if (t22 != 17358511096LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x133 = INT32_MIN;
	volatile uint64_t x134 = 93743855976728599LLU;
	int16_t x135 = INT16_MAX;
	volatile int64_t x136 = INT64_MIN;
	uint64_t t23 = 820LLU;

	t23 = ((x133+x134)/(x135%x136));

	if (t23 != 2860922691404LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x141 = 13;
	uint64_t x143 = 23634517394LLU;
	int64_t x144 = 1024198087400656276LL;
	static uint64_t t24 = 1337092150521649LLU;

	t24 = ((x141+x142)/(x143%x144));

	if (t24 != 780500137LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x153 = 98;
	uint16_t x154 = 79U;
	int32_t x156 = INT32_MAX;
	static uint64_t t25 = 122597903022LLU;

	t25 = ((x153+x154)/(x155%x156));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x169 = 37961U;
	int32_t x170 = INT32_MAX;
	int64_t x171 = -1LL;
	int16_t x172 = INT16_MIN;
	volatile int64_t t26 = -245599393691LL;

	t26 = ((x169+x170)/(x171%x172));

	if (t26 != -2147521608LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x173 = -1;
	uint16_t x174 = 60U;
	int64_t x175 = INT64_MIN;
	volatile uint32_t x176 = 220U;
	int64_t t27 = -25459LL;

	t27 = ((x173+x174)/(x175%x176));

	if (t27 != -7LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x181 = -1;
	volatile int32_t x182 = -1;
	volatile uint64_t x183 = 37311576LLU;
	int16_t x184 = INT16_MIN;

	t28 = ((x181+x182)/(x183%x184));

	if (t28 != 494397343969LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x189 = 75;
	volatile uint16_t x190 = 325U;
	static uint16_t x191 = 41U;
	int16_t x192 = INT16_MIN;
	int32_t t29 = -53966366;

	t29 = ((x189+x190)/(x191%x192));

	if (t29 != 9) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x197 = 61484054LLU;
	int32_t x198 = -101;
	static uint64_t x200 = 5425403313086909901LLU;
	volatile uint64_t t30 = 65863827733LLU;

	t30 = ((x197+x198)/(x199%x200));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x217 = UINT16_MAX;
	uint32_t x219 = UINT32_MAX;
	static volatile int16_t x220 = 52;
	volatile uint32_t t31 = 466042U;

	t31 = ((x217+x218)/(x219%x220));

	if (t31 != 2091U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x221 = UINT64_MAX;
	int8_t x223 = INT8_MAX;
	uint8_t x224 = 96U;
	uint64_t t32 = 14136330259LLU;

	t32 = ((x221+x222)/(x223%x224));

	if (t32 != 3212651LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x225 = INT32_MIN;
	uint32_t x226 = UINT32_MAX;
	static uint8_t x227 = 1U;
	int16_t x228 = -5950;
	static uint32_t t33 = 773U;

	t33 = ((x225+x226)/(x227%x228));

	if (t33 != 2147483647U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x229 = INT16_MIN;
	int64_t x230 = -1LL;
	static int16_t x232 = INT16_MAX;

	t34 = ((x229+x230)/(x231%x232));

	if (t34 != -32769LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x249 = UINT32_MAX;
	volatile int8_t x250 = -58;
	int8_t x251 = 1;
	static uint32_t t35 = 17U;

	t35 = ((x249+x250)/(x251%x252));

	if (t35 != 4294967237U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x253 = UINT64_MAX;
	volatile int8_t x254 = INT8_MIN;
	int32_t x255 = 1036931;
	static int64_t x256 = INT64_MIN;
	uint64_t t36 = 30874008LLU;

	t36 = ((x253+x254)/(x255%x256));

	if (t36 != 17789750787380LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x265 = -24904239LL;
	volatile int16_t x266 = INT16_MIN;
	static int8_t x268 = 63;
	volatile int64_t t37 = 50811LL;

	t37 = ((x265+x266)/(x267%x268));

	if (t37 != -24937007LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x277 = 0;
	uint64_t x278 = 2410LLU;
	volatile int64_t x279 = -2206362318099078LL;
	int64_t x280 = INT64_MIN;
	static volatile uint64_t t38 = 242LLU;

	t38 = ((x277+x278)/(x279%x280));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x281 = UINT16_MAX;
	volatile uint32_t x282 = UINT32_MAX;
	uint32_t x284 = UINT32_MAX;
	volatile uint64_t t39 = 111011769518LLU;

	t39 = ((x281+x282)/(x283%x284));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x293 = 15U;
	static int16_t x294 = -190;
	volatile uint8_t x295 = UINT8_MAX;
	int64_t x296 = INT64_MIN;

	t40 = ((x293+x294)/(x295%x296));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x297 = 0;
	uint16_t x298 = 18U;
	int16_t x299 = -14435;
	int32_t x300 = 115198681;
	int32_t t41 = 1300;

	t41 = ((x297+x298)/(x299%x300));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {


	t42 = ((x301+x302)/(x303%x304));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x309 = INT32_MIN;
	volatile uint32_t x310 = 120863420U;
	int16_t x311 = -7973;
	int64_t x312 = INT64_MIN;
	static volatile int64_t t43 = -593979741LL;

	t43 = ((x309+x310)/(x311%x312));

	if (t43 != -284503LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x313 = INT64_MIN;
	int8_t x315 = -1;
	int64_t t44 = -39LL;

	t44 = ((x313+x314)/(x315%x316));

	if (t44 != 9223372036854763939LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x329 = 1U;
	uint64_t x330 = UINT64_MAX;
	uint64_t x331 = 19390548683340191LLU;
	volatile int32_t x332 = 104042031;
	uint64_t t45 = 5113LLU;

	t45 = ((x329+x330)/(x331%x332));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x333 = -1;
	uint64_t x334 = 13711950605403379LLU;
	volatile uint8_t x335 = 3U;
	volatile int64_t x336 = INT64_MAX;
	static uint64_t t46 = 14012672072515407LLU;

	t46 = ((x333+x334)/(x335%x336));

	if (t46 != 4570650201801126LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x337 = 12;
	int64_t x338 = 18764346LL;
	int64_t x339 = 39LL;
	int32_t x340 = INT32_MIN;
	int64_t t47 = 6461537778106450LL;

	t47 = ((x337+x338)/(x339%x340));

	if (t47 != 481137LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x357 = -1;
	int16_t x358 = -1;
	int8_t x359 = INT8_MAX;
	int64_t x360 = -60LL;
	int64_t t48 = 513662812805191LL;

	t48 = ((x357+x358)/(x359%x360));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x361 = UINT8_MAX;
	int8_t x362 = INT8_MIN;
	static int32_t x363 = 243720338;
	int32_t t49 = -111293255;

	t49 = ((x361+x362)/(x363%x364));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x369 = INT16_MAX;
	uint32_t x370 = 66370U;
	int8_t x371 = INT8_MIN;
	uint16_t x372 = UINT16_MAX;
	uint32_t t50 = 194374U;

	t50 = ((x369+x370)/(x371%x372));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x378 = INT8_MAX;
	volatile int64_t t51 = 83293LL;

	t51 = ((x377+x378)/(x379%x380));

	if (t51 != -9LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x381 = UINT64_MAX;
	int32_t x382 = -3667805;
	int8_t x383 = -1;
	uint16_t x384 = 3U;

	t52 = ((x381+x382)/(x383%x384));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x385 = UINT32_MAX;
	int64_t x387 = 855054999LL;
	int64_t x388 = 11838759LL;
	int64_t t53 = 253853001LL;

	t53 = ((x385+x386)/(x387%x388));

	if (t53 != 1612LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x389 = 1767644599431LLU;
	int64_t x390 = INT64_MAX;
	int16_t x391 = INT16_MIN;
	volatile int32_t x392 = INT32_MIN;

	t54 = ((x389+x390)/(x391%x392));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x393 = INT16_MAX;
	volatile uint32_t x394 = 26979U;
	volatile int64_t x395 = -1LL;
	volatile int64_t t55 = 271469999302676LL;

	t55 = ((x393+x394)/(x395%x396));

	if (t55 != -59746LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x401 = -1;
	uint8_t x402 = 41U;
	uint8_t x403 = 17U;
	static int8_t x404 = INT8_MIN;
	int32_t t56 = -63;

	t56 = ((x401+x402)/(x403%x404));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x409 = INT16_MAX;
	uint8_t x410 = 17U;
	int16_t x411 = INT16_MIN;
	volatile uint16_t x412 = 25166U;
	static volatile int32_t t57 = -633;

	t57 = ((x409+x410)/(x411%x412));

	if (t57 != -4) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x414 = 6U;
	volatile uint16_t x415 = UINT16_MAX;
	static int8_t x416 = INT8_MAX;
	int32_t t58 = 1902;

	t58 = ((x413+x414)/(x415%x416));

	if (t58 != 40) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x431 = 3455;
	int32_t x432 = -486;

	t59 = ((x429+x430)/(x431%x432));

	if (t59 != 38174U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x435 = 1;
	int64_t x436 = INT64_MIN;
	uint64_t t60 = 689LLU;

	t60 = ((x433+x434)/(x435%x436));

	if (t60 != 155110579681239238LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x438 = 1510158270912512595LL;
	volatile int32_t x439 = INT32_MAX;
	uint8_t x440 = UINT8_MAX;
	int64_t t61 = 3969LL;

	t61 = ((x437+x438)/(x439%x440));

	if (t61 != 11891010007185138LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x441 = -1;
	int64_t x443 = -1LL;
	int32_t x444 = INT32_MAX;
	uint64_t t62 = 4481837474587LLU;

	t62 = ((x441+x442)/(x443%x444));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x445 = 28U;
	int8_t x446 = -1;
	uint32_t x447 = 1941U;
	static uint32_t x448 = 2696U;

	t63 = ((x445+x446)/(x447%x448));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x453 = 1464786LL;
	int64_t x454 = INT64_MIN;
	static int8_t x455 = -27;
	volatile int64_t t64 = -49604313390LL;

	t64 = ((x453+x454)/(x455%x456));

	if (t64 != 341606371735307815LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x458 = UINT32_MAX;
	static uint64_t x459 = 521003LLU;
	volatile int16_t x460 = INT16_MIN;
	volatile uint64_t t65 = 22104474516478024LLU;

	t65 = ((x457+x458)/(x459%x460));

	if (t65 != 8243LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x477 = 0;
	int64_t x478 = 8LL;
	int64_t x479 = -1579036695137009LL;
	static volatile int64_t x480 = INT64_MAX;
	volatile int64_t t66 = 16968580604266074LL;

	t66 = ((x477+x478)/(x479%x480));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x481 = INT8_MIN;
	int64_t x482 = INT64_MAX;
	int16_t x483 = INT16_MIN;
	int64_t x484 = INT64_MAX;
	static int64_t t67 = 109423723768LL;

	t67 = ((x481+x482)/(x483%x484));

	if (t67 != -281474976710655LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x485 = 409U;
	int32_t x488 = INT32_MIN;
	volatile int64_t t68 = -58LL;

	t68 = ((x485+x486)/(x487%x488));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x499 = INT16_MAX;
	static uint32_t x500 = UINT32_MAX;
	volatile uint32_t t69 = 27172U;

	t69 = ((x497+x498)/(x499%x500));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x517 = 3;
	int64_t x518 = INT64_MIN;
	int32_t x519 = -7099;
	volatile int16_t x520 = -70;
	int64_t t70 = 243492908882804101LL;

	t70 = ((x517+x518)/(x519%x520));

	if (t70 != 318047311615681924LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x525 = UINT16_MAX;
	static uint64_t x528 = 66272595334055LLU;
	uint64_t t71 = 0LLU;

	t71 = ((x525+x526)/(x527%x528));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x533 = 28U;
	static volatile uint64_t x534 = 6405930245434LLU;
	int8_t x535 = -40;
	uint16_t x536 = 126U;
	static uint64_t t72 = 3176198609296428LLU;

	t72 = ((x533+x534)/(x535%x536));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x541 = 1435;
	int16_t x542 = -1;
	volatile int64_t x543 = INT64_MIN;
	uint64_t x544 = UINT64_MAX;
	static uint64_t t73 = 189470859LLU;

	t73 = ((x541+x542)/(x543%x544));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x545 = 60076030U;
	uint64_t x546 = 0LLU;
	uint64_t x547 = UINT64_MAX;
	volatile int64_t x548 = 951791875230279LL;
	uint64_t t74 = 3405LLU;

	t74 = ((x545+x546)/(x547%x548));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x549 = -56LL;
	int64_t x550 = 35LL;
	uint64_t x551 = 14699935917174LLU;
	uint64_t t75 = 144672365097480LLU;

	t75 = ((x549+x550)/(x551%x552));

	if (t75 != 219604096115589899LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x558 = -465988127;
	uint64_t t76 = 1002736062520876456LLU;

	t76 = ((x557+x558)/(x559%x560));

	if (t76 != 302405640544976451LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x566 = 3U;
	static volatile uint16_t x568 = UINT16_MAX;

	t77 = ((x565+x566)/(x567%x568));

	if (t77 != -2823192404165737LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x585 = -1;
	uint32_t x586 = 1020577U;
	static uint32_t t78 = 60U;

	t78 = ((x585+x586)/(x587%x588));

	if (t78 != 2078U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x593 = 7880;
	volatile int16_t x595 = -408;
	uint8_t x596 = UINT8_MAX;
	volatile int32_t t79 = 189;

	t79 = ((x593+x594)/(x595%x596));

	if (t79 != -50) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x605 = 0U;
	volatile uint8_t x606 = 0U;
	volatile uint64_t x607 = 69100377854689LLU;
	uint64_t t80 = 121650281918LLU;

	t80 = ((x605+x606)/(x607%x608));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x609 = 455682131;
	volatile int16_t x610 = INT16_MIN;
	uint16_t x612 = 35U;
	volatile int64_t t81 = -31438923828LL;

	t81 = ((x609+x610)/(x611%x612));

	if (t81 != 32546383LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x613 = UINT32_MAX;
	volatile int64_t x614 = INT64_MIN;
	volatile int16_t x615 = -1;
	uint16_t x616 = UINT16_MAX;
	static int64_t t82 = -248647LL;

	t82 = ((x613+x614)/(x615%x616));

	if (t82 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x634 = 73U;
	uint32_t x635 = 751U;
	uint32_t t83 = 168972456U;

	t83 = ((x633+x634)/(x635%x636));

	if (t83 != 73U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x637 = INT32_MAX;
	int32_t x638 = INT32_MIN;
	uint8_t x639 = 3U;
	volatile int64_t x640 = INT64_MIN;
	volatile int64_t t84 = 233522368081112LL;

	t84 = ((x637+x638)/(x639%x640));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x641 = 33992;
	uint32_t x642 = 338432615U;
	int32_t x643 = -1;
	int64_t x644 = 349177127408763670LL;

	t85 = ((x641+x642)/(x643%x644));

	if (t85 != -338466607LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x649 = 0;
	static int16_t x650 = -1;
	volatile int8_t x651 = INT8_MIN;
	volatile int32_t t86 = -119;

	t86 = ((x649+x650)/(x651%x652));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x653 = 275326095565LLU;
	int32_t x654 = -1;
	int64_t x656 = INT64_MIN;
	volatile uint64_t t87 = 177866823224LLU;

	t87 = ((x653+x654)/(x655%x656));

	if (t87 != 91775365188LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x658 = INT8_MAX;
	int32_t x659 = -80;
	int32_t x660 = INT32_MAX;
	volatile int32_t t88 = -312;

	t88 = ((x657+x658)/(x659%x660));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x661 = 1U;
	static int16_t x662 = INT16_MAX;
	static volatile uint64_t x663 = 1023548613834716419LLU;
	int8_t x664 = INT8_MIN;
	static uint64_t t89 = 0LLU;

	t89 = ((x661+x662)/(x663%x664));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x665 = -1;
	static int16_t x666 = 0;
	static int32_t x667 = -79;
	static volatile int32_t t90 = 442;

	t90 = ((x665+x666)/(x667%x668));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x669 = INT16_MIN;
	int32_t x670 = 20767;
	uint64_t t91 = 15LLU;

	t91 = ((x669+x670)/(x671%x672));

	if (t91 != 60710923334LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x673 = 0U;
	volatile int64_t x674 = INT64_MIN;
	int16_t x675 = INT16_MAX;
	uint8_t x676 = 50U;
	int64_t t92 = -104512452LL;

	t92 = ((x673+x674)/(x675%x676));

	if (t92 != -542551296285575047LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x678 = INT8_MIN;
	static uint32_t x679 = UINT32_MAX;
	int64_t x680 = 1335134925476612886LL;
	volatile int64_t t93 = -448123511803LL;

	t93 = ((x677+x678)/(x679%x680));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x685 = INT8_MAX;
	static int32_t x686 = -1;
	static int64_t x687 = 3426811705LL;
	uint64_t x688 = 34292128915LLU;
	uint64_t t94 = 9664128160313LLU;

	t94 = ((x685+x686)/(x687%x688));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x689 = 0LL;
	int32_t x690 = INT32_MAX;
	static int64_t x691 = INT64_MAX;
	int16_t x692 = INT16_MAX;
	volatile int64_t t95 = 66585033416452054LL;

	t95 = ((x689+x690)/(x691%x692));

	if (t95 != 306783378LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x693 = INT16_MAX;
	int32_t x694 = -21938;
	uint32_t x695 = 130726U;
	int64_t x696 = INT64_MIN;
	int64_t t96 = -9LL;

	t96 = ((x693+x694)/(x695%x696));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x697 = 376573460U;
	int16_t x698 = 0;
	int32_t x699 = -1;
	static uint32_t t97 = 42U;

	t97 = ((x697+x698)/(x699%x700));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x701 = 2;
	static uint8_t x702 = UINT8_MAX;
	int16_t x703 = -10;
	static int32_t x704 = INT32_MAX;
	static int32_t t98 = 2;

	t98 = ((x701+x702)/(x703%x704));

	if (t98 != -25) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x705 = -848250;
	int64_t x708 = 759LL;

	t99 = ((x705+x706)/(x707%x708));

	if (t99 != -1234LL) { NG(); } else { ; }
	
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

