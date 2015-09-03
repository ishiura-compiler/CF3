#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x1 = 67U;
volatile int16_t x6 = INT16_MIN;
int16_t x7 = -1;
volatile int64_t x8 = INT64_MIN;
int32_t t1 = -1;
uint8_t x9 = 7U;
uint8_t x25 = 1U;
int64_t x34 = 56421653LL;
static uint32_t x36 = UINT32_MAX;
int64_t t9 = 1LL;
uint64_t x49 = UINT64_MAX;
int32_t x53 = -1;
uint16_t x54 = UINT16_MAX;
static uint64_t x65 = 18561753060928012LLU;
volatile uint64_t t12 = 490407765547339160LLU;
int64_t x79 = INT64_MIN;
uint8_t x93 = 3U;
uint8_t x95 = UINT8_MAX;
static int16_t x105 = INT16_MIN;
static uint64_t t20 = 35224111456LLU;
volatile int8_t x109 = INT8_MIN;
int64_t x111 = INT64_MAX;
uint8_t x112 = UINT8_MAX;
int32_t t21 = -32;
static int16_t x116 = -1;
static int16_t x118 = INT16_MIN;
int32_t x119 = INT32_MAX;
volatile int32_t t26 = -17;
int8_t x137 = 0;
static int16_t x138 = INT16_MIN;
volatile int32_t x142 = -1;
uint8_t x144 = 66U;
int8_t x145 = -1;
int8_t x151 = INT8_MAX;
static int32_t x168 = -18;
uint32_t x171 = 49U;
volatile uint64_t t33 = 7142359589820056LLU;
volatile int64_t x180 = -5527454021LL;
volatile int32_t t38 = -255;
volatile uint32_t x213 = 134U;
volatile uint32_t t40 = 277595U;
static int64_t x219 = -1LL;
int8_t x220 = -1;
int8_t x222 = INT8_MAX;
volatile uint64_t t42 = 66950937094623385LLU;
static uint32_t x227 = UINT32_MAX;
static volatile uint64_t x230 = 23134729962511990LLU;
volatile uint8_t x236 = 110U;
int64_t x244 = INT64_MIN;
uint64_t x273 = 8095821010LLU;
int32_t x274 = INT32_MIN;
static uint16_t x296 = UINT16_MAX;
int32_t t53 = 2;
volatile int32_t x297 = INT32_MIN;
uint32_t x300 = 12258U;
uint32_t t54 = 1102709U;
static uint32_t x305 = 19481167U;
static int16_t x314 = INT16_MAX;
int32_t x315 = INT32_MIN;
static int8_t x316 = 9;
int32_t t57 = -120955002;
static uint8_t x317 = 5U;
uint64_t x320 = UINT64_MAX;
int16_t x321 = INT16_MIN;
volatile int64_t x334 = -1LL;
uint16_t x353 = 6683U;
int64_t x355 = INT64_MAX;
int32_t t63 = 10;
uint8_t x359 = 43U;
uint16_t x360 = UINT16_MAX;
int32_t x365 = 1;
volatile int64_t x373 = -1224721LL;
int64_t t66 = -2447167300314LL;
uint16_t x392 = 10U;
volatile int32_t x395 = -1;
static volatile uint64_t t69 = 58533459LLU;
static volatile int32_t t70 = -1;
int16_t x402 = -1;
volatile uint8_t x404 = 79U;
int64_t x410 = 739054LL;
int16_t x424 = -3;
static int16_t x437 = INT16_MAX;
volatile int64_t x439 = 30477217207LL;
volatile uint16_t x444 = 34U;
uint16_t x449 = 171U;
int16_t x458 = -18;
volatile uint16_t x464 = 6015U;
int8_t x468 = 0;
volatile uint64_t t84 = 28591LLU;
int32_t x472 = -689;
uint16_t x474 = 470U;
static int32_t x476 = INT32_MIN;
int64_t x480 = INT64_MAX;
uint32_t t92 = 521U;
int8_t x522 = 43;
int32_t x524 = -1643900;
volatile uint32_t t93 = 343827798U;
volatile int16_t x538 = INT16_MIN;
int64_t x540 = 31904LL;
volatile int32_t x554 = -3873;
volatile int32_t t99 = 122;


void f0(void) {
	volatile uint16_t x2 = UINT16_MAX;
	int64_t x3 = INT64_MIN;
	int8_t x4 = 1;
	int32_t t0 = 582;

	t0 = (x1*(x2|(x3<x4)));

	if (t0 != 4390845) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;

	t1 = (x5*(x6|(x7<x8)));

	if (t1 != 1073741824) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int8_t x11 = INT8_MAX;
	uint64_t x12 = 136666328LLU;
	int32_t t2 = 15627;

	t2 = (x9*(x10|(x11<x12)));

	if (t2 != -229369) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 14;
	static uint32_t x18 = 3288586U;
	static volatile int64_t x19 = INT64_MAX;
	volatile uint64_t x20 = UINT64_MAX;
	static uint32_t t3 = 467U;

	t3 = (x17*(x18|(x19<x20)));

	if (t3 != 46040218U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MAX;
	uint8_t x22 = 13U;
	int64_t x23 = INT64_MAX;
	int32_t x24 = INT32_MAX;
	int32_t t4 = 305694705;

	t4 = (x21*(x22|(x23<x24)));

	if (t4 != 1651) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x26 = 16743630LL;
	int32_t x27 = -1;
	int8_t x28 = INT8_MIN;
	int64_t t5 = 734621LL;

	t5 = (x25*(x26|(x27<x28)));

	if (t5 != 16743630LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	uint8_t x30 = UINT8_MAX;
	int8_t x31 = -1;
	volatile int8_t x32 = INT8_MAX;
	int32_t t6 = 3;

	t6 = (x29*(x30|(x31<x32)));

	if (t6 != -255) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = 1U;
	static int32_t x35 = -1;
	volatile int64_t t7 = 29177594791LL;

	t7 = (x33*(x34|(x35<x36)));

	if (t7 != 56421653LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	uint16_t x38 = 149U;
	int8_t x39 = 11;
	int32_t x40 = -1;
	volatile int32_t t8 = 1850;

	t8 = (x37*(x38|(x39<x40)));

	if (t8 != -4882432) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	uint32_t x42 = 0U;
	static int8_t x43 = INT8_MIN;
	int64_t x44 = -1LL;

	t9 = (x41*(x42|(x43<x44)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x50 = 1U;
	volatile uint64_t x51 = UINT64_MAX;
	static volatile uint8_t x52 = 6U;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x49*(x50|(x51<x52)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x55 = 14346515LLU;
	int64_t x56 = -1LL;
	int32_t t11 = -1;

	t11 = (x53*(x54|(x55<x56)));

	if (t11 != -65535) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x66 = INT32_MIN;
	int32_t x67 = INT32_MAX;
	int32_t x68 = -1;

	t12 = (x65*(x66|(x67<x68)));

	if (t12 != 10030232126453972992LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = -42353;
	static int16_t x70 = -1;
	int16_t x71 = INT16_MIN;
	uint16_t x72 = 2062U;
	volatile int32_t t13 = -10;

	t13 = (x69*(x70|(x71<x72)));

	if (t13 != 42353) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x77 = -1LL;
	volatile int64_t x78 = INT64_MIN;
	uint8_t x80 = 7U;
	static volatile int64_t t14 = INT64_MAX;

	t14 = (x77*(x78|(x79<x80)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = INT32_MAX;
	int8_t x82 = -1;
	volatile int64_t x83 = INT64_MIN;
	int32_t x84 = INT32_MAX;
	volatile int32_t t15 = 1096485;

	t15 = (x81*(x82|(x83<x84)));

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x85 = 6U;
	static int8_t x86 = INT8_MAX;
	int16_t x87 = INT16_MAX;
	uint64_t x88 = 485739274106LLU;
	static volatile int32_t t16 = 3354675;

	t16 = (x85*(x86|(x87<x88)));

	if (t16 != 762) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x89 = UINT16_MAX;
	int16_t x90 = -1;
	int16_t x91 = INT16_MIN;
	static uint32_t x92 = 6U;
	int32_t t17 = 10903;

	t17 = (x89*(x90|(x91<x92)));

	if (t17 != -65535) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x94 = INT8_MIN;
	int8_t x96 = 8;
	volatile int32_t t18 = 29933332;

	t18 = (x93*(x94|(x95<x96)));

	if (t18 != -384) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x97 = 1;
	volatile uint32_t x98 = 250259423U;
	volatile int64_t x99 = -1LL;
	int8_t x100 = -1;
	volatile uint32_t t19 = 315878577U;

	t19 = (x97*(x98|(x99<x100)));

	if (t19 != 250259423U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x106 = UINT64_MAX;
	int64_t x107 = 6960040235618LL;
	int64_t x108 = INT64_MIN;

	t20 = (x105*(x106|(x107<x108)));

	if (t20 != 32768LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x110 = INT16_MIN;

	t21 = (x109*(x110|(x111<x112)));

	if (t21 != 4194304) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x113 = UINT64_MAX;
	int64_t x114 = -1LL;
	uint64_t x115 = UINT64_MAX;
	uint64_t t22 = 15986420LLU;

	t22 = (x113*(x114|(x115<x116)));

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x117 = 29;
	uint16_t x120 = 3U;
	volatile int32_t t23 = -5;

	t23 = (x117*(x118|(x119<x120)));

	if (t23 != -950272) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = -1;
	static int8_t x126 = 17;
	static int8_t x127 = -1;
	static uint8_t x128 = 15U;
	volatile int32_t t24 = -98;

	t24 = (x125*(x126|(x127<x128)));

	if (t24 != -17) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x129 = INT16_MIN;
	int8_t x130 = -1;
	volatile int16_t x131 = INT16_MAX;
	uint32_t x132 = UINT32_MAX;
	int32_t t25 = 15773346;

	t25 = (x129*(x130|(x131<x132)));

	if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x133 = INT8_MAX;
	uint8_t x134 = 26U;
	int32_t x135 = -1;
	uint64_t x136 = UINT64_MAX;

	t26 = (x133*(x134|(x135<x136)));

	if (t26 != 3302) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x139 = -1;
	int64_t x140 = -3LL;
	volatile int32_t t27 = -2;

	t27 = (x137*(x138|(x139<x140)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = 18;
	static uint8_t x143 = 18U;
	volatile int32_t t28 = 78591234;

	t28 = (x141*(x142|(x143<x144)));

	if (t28 != -18) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x146 = 2U;
	int16_t x147 = -217;
	int16_t x148 = -1;
	static int32_t t29 = -1001621;

	t29 = (x145*(x146|(x147<x148)));

	if (t29 != -3) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x149 = 1U;
	int32_t x150 = INT32_MIN;
	int32_t x152 = 429;
	volatile int32_t t30 = -751194;

	t30 = (x149*(x150|(x151<x152)));

	if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = 18;
	int32_t x158 = 11;
	static uint64_t x159 = 114708788361328786LLU;
	volatile int32_t x160 = 1429;
	volatile int32_t t31 = 314871396;

	t31 = (x157*(x158|(x159<x160)));

	if (t31 != 198) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x165 = 5465U;
	int32_t x166 = INT32_MAX;
	volatile int64_t x167 = INT64_MIN;
	uint32_t t32 = 314U;

	t32 = (x165*(x166|(x167<x168)));

	if (t32 != 2147478183U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x169 = 47758191361883388LLU;
	uint64_t x170 = 5753916472690072117LLU;
	volatile int16_t x172 = 2;

	t33 = (x169*(x170|(x171<x172)));

	if (t33 != 5245880878841034796LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x177 = INT16_MAX;
	volatile int64_t x178 = -26339332LL;
	volatile int16_t x179 = 1;
	static volatile int64_t t34 = 2783802858LL;

	t34 = (x177*(x178|(x179<x180)));

	if (t34 != -863060891644LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = INT64_MIN;
	uint8_t x190 = 1U;
	static int64_t x191 = -1LL;
	uint32_t x192 = 167323U;
	volatile int64_t t35 = INT64_MIN;

	t35 = (x189*(x190|(x191<x192)));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x193 = INT16_MAX;
	static int16_t x194 = INT16_MAX;
	static volatile uint64_t x195 = UINT64_MAX;
	static int32_t x196 = -15;
	static int32_t t36 = 3383;

	t36 = (x193*(x194|(x195<x196)));

	if (t36 != 1073676289) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x197 = 1;
	volatile uint64_t x198 = 107905932641206LLU;
	int16_t x199 = INT16_MIN;
	int64_t x200 = -1LL;
	volatile uint64_t t37 = 55218892999LLU;

	t37 = (x197*(x198|(x199<x200)));

	if (t37 != 107905932641207LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x201 = -21;
	uint8_t x202 = 11U;
	volatile uint32_t x203 = UINT32_MAX;
	uint16_t x204 = 7U;

	t38 = (x201*(x202|(x203<x204)));

	if (t38 != -231) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x209 = INT8_MIN;
	uint16_t x210 = UINT16_MAX;
	static int32_t x211 = 0;
	int32_t x212 = INT32_MAX;
	int32_t t39 = -4;

	t39 = (x209*(x210|(x211<x212)));

	if (t39 != -8388480) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x214 = INT8_MIN;
	volatile int8_t x215 = -51;
	static int32_t x216 = 158;

	t40 = (x213*(x214|(x215<x216)));

	if (t40 != 4294950278U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x217 = -1;
	uint8_t x218 = UINT8_MAX;
	int32_t t41 = -1380;

	t41 = (x217*(x218|(x219<x220)));

	if (t41 != -255) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x221 = 13717082612954LLU;
	volatile int32_t x223 = INT32_MIN;
	int64_t x224 = 194911526191LL;

	t42 = (x221*(x222|(x223<x224)));

	if (t42 != 1742069491845158LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x225 = UINT64_MAX;
	volatile int64_t x226 = INT64_MIN;
	int64_t x228 = -309LL;
	uint64_t t43 = 152576901487412LLU;

	t43 = (x225*(x226|(x227<x228)));

	if (t43 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x229 = -14558211LL;
	uint8_t x231 = 3U;
	static volatile int16_t x232 = INT16_MIN;
	uint64_t t44 = 92094041317873888LLU;

	t44 = (x229*(x230|(x231<x232)));

	if (t44 != 373075517352955038LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x233 = 1;
	int64_t x234 = -56907LL;
	int8_t x235 = 47;
	static volatile int64_t t45 = 958730887965728863LL;

	t45 = (x233*(x234|(x235<x236)));

	if (t45 != -56907LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x241 = 38U;
	volatile uint32_t x242 = 482867482U;
	volatile int64_t x243 = INT64_MIN;
	static volatile uint32_t t46 = 522428723U;

	t46 = (x241*(x242|(x243<x244)));

	if (t46 != 1169095132U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x253 = 98504104665119354LLU;
	static int64_t x254 = INT64_MAX;
	int64_t x255 = INT64_MAX;
	int16_t x256 = 48;
	uint64_t t47 = 0LLU;

	t47 = (x253*(x254|(x255<x256)));

	if (t47 != 18348239969044432262LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x257 = INT16_MIN;
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = 14;
	int8_t x260 = INT8_MIN;
	static int32_t t48 = 2887369;

	t48 = (x257*(x258|(x259<x260)));

	if (t48 != -2147450880) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x265 = 1;
	int16_t x266 = 17;
	int32_t x267 = INT32_MAX;
	volatile uint16_t x268 = UINT16_MAX;
	volatile int32_t t49 = -66873095;

	t49 = (x265*(x266|(x267<x268)));

	if (t49 != 17) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x275 = INT64_MAX;
	volatile int8_t x276 = INT8_MAX;
	static volatile uint64_t t50 = 229022LLU;

	t50 = (x273*(x274|(x275<x276)));

	if (t50 != 1061100837599707136LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x277 = 1U;
	int32_t x278 = INT32_MAX;
	static int64_t x279 = -4244921446243881325LL;
	int32_t x280 = INT32_MAX;
	int32_t t51 = INT32_MAX;

	t51 = (x277*(x278|(x279<x280)));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x281 = INT32_MIN;
	uint64_t x282 = UINT64_MAX;
	uint64_t x283 = 4270164824766863LLU;
	volatile int64_t x284 = INT64_MIN;
	uint64_t t52 = 3127686991516707LLU;

	t52 = (x281*(x282|(x283<x284)));

	if (t52 != 2147483648LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x293 = 35U;
	int8_t x294 = -1;
	uint16_t x295 = 1U;

	t53 = (x293*(x294|(x295<x296)));

	if (t53 != -35) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x298 = 496U;
	int16_t x299 = INT16_MIN;

	t54 = (x297*(x298|(x299<x300)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x306 = 9U;
	int8_t x307 = 1;
	int64_t x308 = -1LL;
	volatile uint32_t t55 = 262U;

	t55 = (x305*(x306|(x307<x308)));

	if (t55 != 175330503U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x309 = -4LL;
	static volatile int64_t x310 = -78209153068462948LL;
	static int8_t x311 = INT8_MAX;
	uint16_t x312 = 3437U;
	volatile int64_t t56 = -4006509666LL;

	t56 = (x309*(x310|(x311<x312)));

	if (t56 != 312836612273851788LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x313 = 100U;

	t57 = (x313*(x314|(x315<x316)));

	if (t57 != 3276700) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x318 = -1;
	static uint32_t x319 = 211U;
	static volatile int32_t t58 = -6504522;

	t58 = (x317*(x318|(x319<x320)));

	if (t58 != -5) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x322 = -9;
	static int8_t x323 = INT8_MAX;
	int64_t x324 = -115022268LL;
	int32_t t59 = -44191137;

	t59 = (x321*(x322|(x323<x324)));

	if (t59 != 294912) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x325 = 1;
	int32_t x326 = -1;
	int64_t x327 = -1LL;
	uint8_t x328 = 6U;
	volatile int32_t t60 = -535547837;

	t60 = (x325*(x326|(x327<x328)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x333 = INT16_MIN;
	int64_t x335 = -1LL;
	volatile uint16_t x336 = 8282U;
	int64_t t61 = -216992416213LL;

	t61 = (x333*(x334|(x335<x336)));

	if (t61 != 32768LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x341 = 61U;
	int8_t x342 = -1;
	int16_t x343 = -1;
	static int8_t x344 = -1;
	volatile int32_t t62 = -97;

	t62 = (x341*(x342|(x343<x344)));

	if (t62 != -61) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x354 = -1;
	int8_t x356 = -6;

	t63 = (x353*(x354|(x355<x356)));

	if (t63 != -6683) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x357 = -12391LL;
	uint8_t x358 = 2U;
	int64_t t64 = -29040952941644LL;

	t64 = (x357*(x358|(x359<x360)));

	if (t64 != -37173LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x366 = 107U;
	static uint8_t x367 = 27U;
	uint64_t x368 = 51223671LLU;
	int32_t t65 = 5;

	t65 = (x365*(x366|(x367<x368)));

	if (t65 != 107) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x374 = -1;
	volatile uint16_t x375 = UINT16_MAX;
	int8_t x376 = INT8_MIN;

	t66 = (x373*(x374|(x375<x376)));

	if (t66 != 1224721LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x385 = INT8_MAX;
	static uint16_t x386 = UINT16_MAX;
	uint16_t x387 = 509U;
	static int64_t x388 = INT64_MIN;
	volatile int32_t t67 = 32813233;

	t67 = (x385*(x386|(x387<x388)));

	if (t67 != 8322945) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x389 = 772873LL;
	static uint8_t x390 = 110U;
	static volatile int16_t x391 = INT16_MAX;
	int64_t t68 = -1LL;

	t68 = (x389*(x390|(x391<x392)));

	if (t68 != 85016030LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x393 = 669614LLU;
	static int64_t x394 = -105806861506LL;
	volatile int64_t x396 = INT64_MIN;

	t69 = (x393*(x394|(x395<x396)));

	if (t69 != 18375894317949072932LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x397 = 1;
	static volatile uint8_t x398 = 5U;
	int16_t x399 = INT16_MAX;
	uint32_t x400 = UINT32_MAX;

	t70 = (x397*(x398|(x399<x400)));

	if (t70 != 5) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x401 = 1LLU;
	volatile uint64_t x403 = UINT64_MAX;
	uint64_t t71 = UINT64_MAX;

	t71 = (x401*(x402|(x403<x404)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x405 = UINT8_MAX;
	uint8_t x406 = 22U;
	int8_t x407 = 0;
	int16_t x408 = -172;
	volatile int32_t t72 = -2;

	t72 = (x405*(x406|(x407<x408)));

	if (t72 != 5610) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x409 = INT16_MIN;
	int64_t x411 = 41037LL;
	volatile int8_t x412 = -1;
	int64_t t73 = 3139629789867LL;

	t73 = (x409*(x410|(x411<x412)));

	if (t73 != -24217321472LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x417 = INT16_MIN;
	static volatile int8_t x418 = INT8_MIN;
	int16_t x419 = -1;
	static int32_t x420 = -8580;
	int32_t t74 = 17557;

	t74 = (x417*(x418|(x419<x420)));

	if (t74 != 4194304) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x421 = INT16_MAX;
	uint32_t x422 = 19173586U;
	uint64_t x423 = 116978833636LLU;
	uint32_t t75 = 211758U;

	t75 = (x421*(x422|(x423<x424)));

	if (t75 != 1195700013U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x429 = 204U;
	uint64_t x430 = 247328LLU;
	int32_t x431 = INT32_MAX;
	uint64_t x432 = 8826800334979LLU;
	uint64_t t76 = 4010203717191575LLU;

	t76 = (x429*(x430|(x431<x432)));

	if (t76 != 50455116LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x433 = 2420;
	uint8_t x434 = 19U;
	volatile int32_t x435 = INT32_MIN;
	uint16_t x436 = 1U;
	static int32_t t77 = -4737;

	t77 = (x433*(x434|(x435<x436)));

	if (t77 != 45980) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x438 = 476U;
	static uint8_t x440 = UINT8_MAX;
	int32_t t78 = -254198;

	t78 = (x437*(x438|(x439<x440)));

	if (t78 != 15597092) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x441 = INT16_MIN;
	int32_t x442 = -712;
	volatile int64_t x443 = -3026126487LL;
	volatile int32_t t79 = -12596;

	t79 = (x441*(x442|(x443<x444)));

	if (t79 != 23298048) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x450 = INT16_MAX;
	uint32_t x451 = 466U;
	static volatile int32_t x452 = INT32_MIN;
	volatile int32_t t80 = -82;

	t80 = (x449*(x450|(x451<x452)));

	if (t80 != 5603157) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x453 = 1;
	int8_t x454 = INT8_MAX;
	uint8_t x455 = 68U;
	static int64_t x456 = INT64_MIN;
	volatile int32_t t81 = -65154;

	t81 = (x453*(x454|(x455<x456)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x457 = -3;
	int16_t x459 = INT16_MAX;
	uint64_t x460 = 79120706908446359LLU;
	volatile int32_t t82 = -56;

	t82 = (x457*(x458|(x459<x460)));

	if (t82 != 51) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x461 = -696139;
	static int16_t x462 = -1;
	uint32_t x463 = 88201U;
	volatile int32_t t83 = 417;

	t83 = (x461*(x462|(x463<x464)));

	if (t83 != 696139) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x465 = UINT64_MAX;
	int32_t x466 = -57;
	uint64_t x467 = 3615959573LLU;

	t84 = (x465*(x466|(x467<x468)));

	if (t84 != 57LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x469 = 25784U;
	uint64_t x470 = 2LLU;
	static int64_t x471 = 178073294091LL;
	static uint64_t t85 = 336255900434027372LLU;

	t85 = (x469*(x470|(x471<x472)));

	if (t85 != 51568LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x473 = -930LL;
	uint8_t x475 = UINT8_MAX;
	int64_t t86 = -7985LL;

	t86 = (x473*(x474|(x475<x476)));

	if (t86 != -437100LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x477 = INT8_MIN;
	int32_t x478 = -1;
	volatile int16_t x479 = INT16_MIN;
	int32_t t87 = 736687444;

	t87 = (x477*(x478|(x479<x480)));

	if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x481 = UINT8_MAX;
	int8_t x482 = -38;
	int64_t x483 = 73756538LL;
	int32_t x484 = INT32_MAX;
	volatile int32_t t88 = 58;

	t88 = (x481*(x482|(x483<x484)));

	if (t88 != -9435) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x485 = 26U;
	int8_t x486 = 0;
	int8_t x487 = -1;
	volatile int32_t x488 = -1;
	uint32_t t89 = 1055188U;

	t89 = (x485*(x486|(x487<x488)));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x501 = 484251416360550823LLU;
	volatile uint16_t x502 = 6U;
	static int16_t x503 = -3347;
	int32_t x504 = INT32_MIN;
	static uint64_t t90 = 937762766LLU;

	t90 = (x501*(x502|(x503<x504)));

	if (t90 != 2905508498163304938LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x509 = -1;
	volatile uint16_t x510 = 89U;
	int32_t x511 = -3;
	uint8_t x512 = 14U;
	int32_t t91 = -77;

	t91 = (x509*(x510|(x511<x512)));

	if (t91 != -89) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x513 = 2U;
	static int8_t x514 = INT8_MIN;
	volatile uint32_t x515 = UINT32_MAX;
	uint8_t x516 = 3U;

	t92 = (x513*(x514|(x515<x516)));

	if (t92 != 4294967040U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x521 = UINT32_MAX;
	int8_t x523 = -1;

	t93 = (x521*(x522|(x523<x524)));

	if (t93 != 4294967253U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x525 = INT16_MAX;
	uint8_t x526 = 29U;
	volatile int32_t x527 = -1;
	int8_t x528 = INT8_MAX;
	volatile int32_t t94 = 1;

	t94 = (x525*(x526|(x527<x528)));

	if (t94 != 950243) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x529 = -293;
	uint8_t x530 = 0U;
	static int32_t x531 = -1123660;
	uint8_t x532 = UINT8_MAX;
	volatile int32_t t95 = -16697;

	t95 = (x529*(x530|(x531<x532)));

	if (t95 != -293) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x537 = 471590791LLU;
	volatile int64_t x539 = 3391606067593LL;
	uint64_t t96 = 25006509LLU;

	t96 = (x537*(x538|(x539<x540)));

	if (t96 != 18446728620622512128LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x541 = 2;
	static uint64_t x542 = 5129373439290455468LLU;
	volatile uint8_t x543 = UINT8_MAX;
	int64_t x544 = 210823700854717LL;
	volatile uint64_t t97 = 7927LLU;

	t97 = (x541*(x542|(x543<x544)));

	if (t97 != 10258746878580910938LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x553 = -73141541406LL;
	static volatile int64_t x555 = 9308560774LL;
	int64_t x556 = 559863174275382914LL;
	int64_t t98 = -2011166LL;

	t98 = (x553*(x554|(x555<x556)));

	if (t98 != 283277189865438LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x557 = -1;
	int32_t x558 = -1;
	volatile int16_t x559 = -28;
	int64_t x560 = 2130354714LL;

	t99 = (x557*(x558|(x559<x560)));

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

