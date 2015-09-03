#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x17 = INT16_MAX;
int32_t x18 = INT32_MAX;
int32_t t2 = INT32_MAX;
static int16_t x21 = INT16_MAX;
uint64_t t3 = 1012107LLU;
static int32_t x28 = -1024196;
volatile uint16_t x34 = 669U;
volatile int64_t t5 = 1LL;
int64_t x40 = 8198913331040LL;
uint64_t t6 = 26110090192597LLU;
uint8_t x66 = UINT8_MAX;
static volatile int64_t t8 = 36066295528908639LL;
uint32_t x77 = UINT32_MAX;
int16_t x84 = INT16_MAX;
static volatile int16_t x86 = INT16_MAX;
int8_t x96 = -1;
int8_t x97 = -25;
uint64_t t14 = UINT64_MAX;
volatile int8_t x105 = INT8_MIN;
volatile uint64_t t16 = 7605395726645LLU;
uint64_t t17 = UINT64_MAX;
uint16_t x127 = 76U;
uint16_t x138 = 1999U;
volatile int64_t t21 = 2935073106423LL;
volatile uint32_t x161 = 697539485U;
int32_t x169 = -1131123;
int8_t x171 = -6;
uint32_t t23 = 1U;
int8_t x177 = -16;
int32_t x192 = -253312;
uint32_t x200 = UINT32_MAX;
int16_t x201 = -1;
static uint32_t t28 = UINT32_MAX;
volatile int64_t x227 = -1LL;
uint16_t x228 = UINT16_MAX;
static int16_t x244 = -1;
uint16_t x247 = 26U;
int16_t x248 = 30;
volatile uint64_t x258 = UINT64_MAX;
int8_t x260 = -1;
volatile int32_t t35 = -14975;
volatile int8_t x302 = 3;
uint8_t x309 = 4U;
static int32_t t41 = 259978689;
volatile int16_t x323 = -1;
volatile uint64_t x330 = UINT64_MAX;
uint64_t t44 = UINT64_MAX;
uint16_t x333 = 508U;
uint8_t x335 = 53U;
uint16_t x344 = 23006U;
volatile int32_t x350 = 6337093;
volatile uint32_t x367 = 1976781U;
static int64_t x399 = INT64_MAX;
static uint8_t x406 = 0U;
static uint16_t x407 = 199U;
volatile uint32_t x408 = 30U;
int8_t x415 = -1;
static int64_t x419 = INT64_MIN;
int8_t x421 = 7;
static int64_t x425 = INT64_MIN;
static uint32_t x427 = 31246U;
int16_t x436 = 850;
volatile uint32_t x439 = 10941U;
int8_t x461 = INT8_MIN;
volatile uint64_t x468 = UINT64_MAX;
int32_t x469 = INT32_MAX;
int8_t x471 = INT8_MIN;
int16_t x480 = INT16_MIN;
volatile uint64_t t68 = UINT64_MAX;
int8_t x517 = INT8_MIN;
static int8_t x519 = INT8_MIN;
uint16_t x526 = 16U;
uint16_t x558 = UINT16_MAX;
int8_t x561 = INT8_MAX;
static uint32_t x570 = 17U;
int8_t x575 = INT8_MAX;
volatile uint8_t x582 = 0U;
int16_t x595 = -1;
int8_t x600 = INT8_MAX;
volatile int64_t x602 = INT64_MAX;
static uint64_t x603 = UINT64_MAX;
volatile uint8_t x608 = 8U;
volatile int64_t t85 = INT64_MAX;
int64_t x609 = -196590550467080827LL;
static int16_t x615 = INT16_MIN;
volatile uint64_t x618 = 35889LLU;
volatile uint32_t t89 = 191U;
uint32_t x628 = 645142U;
uint64_t x641 = 4004334882536400LLU;
int8_t x669 = INT8_MIN;
static int64_t x672 = INT64_MIN;
uint8_t x679 = 0U;
int16_t x692 = INT16_MIN;
int64_t x696 = 1530464968LL;
static volatile uint32_t t97 = UINT32_MAX;
uint8_t x709 = 2U;
int64_t x718 = 60738980LL;


void f0(void) {
	uint32_t x5 = UINT32_MAX;
	volatile int8_t x6 = INT8_MAX;
	volatile int64_t x7 = INT64_MAX;
	int8_t x8 = INT8_MIN;
	volatile uint32_t t0 = UINT32_MAX;

	t0 = (x5|(x6<<(x7==x8)));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x13 = -63LL;
	int16_t x14 = INT16_MAX;
	int64_t x15 = -1LL;
	int32_t x16 = 99;
	volatile int64_t t1 = -361107174911875061LL;

	t1 = (x13|(x14<<(x15==x16)));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x19 = -1;
	static int32_t x20 = INT32_MAX;

	t2 = (x17|(x18<<(x19==x20)));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x22 = 28LLU;
	int32_t x23 = 255;
	static int64_t x24 = -1LL;

	t3 = (x21|(x22<<(x23==x24)));

	if (t3 != 32767LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = 11;
	static uint64_t x26 = 2LLU;
	int16_t x27 = -1;
	uint64_t t4 = 110024656720066LLU;

	t4 = (x25|(x26<<(x27==x28)));

	if (t4 != 11LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = INT64_MIN;
	int64_t x35 = INT64_MAX;
	uint64_t x36 = 1422329521152058LLU;

	t5 = (x33|(x34<<(x35==x36)));

	if (t5 != -9223372036854775139LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = 1LLU;
	volatile int16_t x38 = 240;
	int32_t x39 = 1734779;

	t6 = (x37|(x38<<(x39==x40)));

	if (t6 != 241LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x65 = INT16_MAX;
	uint32_t x67 = 76U;
	int64_t x68 = -1LL;
	volatile int32_t t7 = -66804575;

	t7 = (x65|(x66<<(x67==x68)));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x69 = -320473172335091LL;
	uint32_t x70 = 16376U;
	uint32_t x71 = UINT32_MAX;
	int8_t x72 = INT8_MIN;

	t8 = (x69|(x70<<(x71==x72)));

	if (t8 != -320473172328451LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x73 = 0;
	uint32_t x74 = 7412074U;
	static int16_t x75 = INT16_MIN;
	static int16_t x76 = INT16_MIN;
	uint32_t t9 = 1U;

	t9 = (x73|(x74<<(x75==x76)));

	if (t9 != 14824148U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x78 = UINT8_MAX;
	int32_t x79 = INT32_MIN;
	int32_t x80 = 560961;
	uint32_t t10 = UINT32_MAX;

	t10 = (x77|(x78<<(x79==x80)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x81 = INT8_MAX;
	volatile int32_t x82 = INT32_MAX;
	int32_t x83 = -1;
	static int32_t t11 = INT32_MAX;

	t11 = (x81|(x82<<(x83==x84)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x85 = -265;
	int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MIN;
	static volatile int32_t t12 = -195542580;

	t12 = (x85|(x86<<(x87==x88)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x93 = -3;
	int16_t x94 = INT16_MAX;
	int64_t x95 = -2329743894969660032LL;
	volatile int32_t t13 = 380660413;

	t13 = (x93|(x94<<(x95==x96)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x98 = UINT64_MAX;
	int16_t x99 = 58;
	int16_t x100 = INT16_MIN;

	t14 = (x97|(x98<<(x99==x100)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x106 = INT8_MAX;
	volatile int8_t x107 = 6;
	static uint32_t x108 = 3U;
	volatile int32_t t15 = 15496;

	t15 = (x105|(x106<<(x107==x108)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x113 = -816;
	static uint64_t x114 = 2982LLU;
	int64_t x115 = INT64_MAX;
	volatile int64_t x116 = 164975684975362LL;

	t16 = (x113|(x114<<(x115==x116)));

	if (t16 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x117 = UINT64_MAX;
	volatile uint32_t x118 = 310U;
	int16_t x119 = 346;
	static volatile uint32_t x120 = 214U;

	t17 = (x117|(x118<<(x119==x120)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x125 = UINT8_MAX;
	volatile uint16_t x126 = 266U;
	static uint8_t x128 = 39U;
	int32_t t18 = -3134894;

	t18 = (x125|(x126<<(x127==x128)));

	if (t18 != 511) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x129 = -185;
	static uint16_t x130 = UINT16_MAX;
	static int32_t x131 = INT32_MIN;
	uint32_t x132 = 8U;
	int32_t t19 = -47;

	t19 = (x129|(x130<<(x131==x132)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x137 = 23U;
	static int64_t x139 = -8261464LL;
	int32_t x140 = INT32_MAX;
	int32_t t20 = 44;

	t20 = (x137|(x138<<(x139==x140)));

	if (t20 != 2015) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x153 = 3993LL;
	uint32_t x154 = 1010518U;
	static volatile int64_t x155 = INT64_MIN;
	int64_t x156 = -1LL;

	t21 = (x153|(x154<<(x155==x156)));

	if (t21 != 1011679LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x162 = UINT64_MAX;
	static uint16_t x163 = 159U;
	uint64_t x164 = 78LLU;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = (x161|(x162<<(x163==x164)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x170 = 14U;
	static volatile uint8_t x172 = UINT8_MAX;

	t23 = (x169|(x170<<(x171==x172)));

	if (t23 != 4293836175U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x178 = UINT64_MAX;
	int8_t x179 = -1;
	int8_t x180 = -3;
	uint64_t t24 = UINT64_MAX;

	t24 = (x177|(x178<<(x179==x180)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x181 = INT8_MIN;
	int32_t x182 = 7660476;
	static int64_t x183 = INT64_MIN;
	uint64_t x184 = 1502657054538LLU;
	volatile int32_t t25 = 720;

	t25 = (x181|(x182<<(x183==x184)));

	if (t25 != -68) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x189 = UINT16_MAX;
	uint8_t x190 = UINT8_MAX;
	uint64_t x191 = UINT64_MAX;
	volatile int32_t t26 = 86378;

	t26 = (x189|(x190<<(x191==x192)));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x197 = UINT64_MAX;
	uint8_t x198 = 8U;
	static volatile int8_t x199 = 10;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (x197|(x198<<(x199==x200)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x202 = 24146U;
	int32_t x203 = -198970527;
	volatile uint8_t x204 = UINT8_MAX;

	t28 = (x201|(x202<<(x203==x204)));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x225 = UINT64_MAX;
	uint64_t x226 = 422436LLU;
	uint64_t t29 = UINT64_MAX;

	t29 = (x225|(x226<<(x227==x228)));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x241 = INT8_MIN;
	volatile int64_t x242 = 2246829LL;
	int8_t x243 = -1;
	int64_t t30 = 10729163383567LL;

	t30 = (x241|(x242<<(x243==x244)));

	if (t30 != -38LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x245 = 4968LLU;
	uint32_t x246 = 1743U;
	static volatile uint64_t t31 = 0LLU;

	t31 = (x245|(x246<<(x247==x248)));

	if (t31 != 6127LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x249 = 2515;
	static int32_t x250 = 2997;
	int32_t x251 = 116;
	static int16_t x252 = INT16_MIN;
	volatile int32_t t32 = 0;

	t32 = (x249|(x250<<(x251==x252)));

	if (t32 != 3063) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x253 = 14;
	uint32_t x254 = 1889U;
	uint16_t x255 = 1U;
	static int64_t x256 = -1LL;
	static volatile uint32_t t33 = 13U;

	t33 = (x253|(x254<<(x255==x256)));

	if (t33 != 1903U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x257 = 90LLU;
	int64_t x259 = 1289983302072LL;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (x257|(x258<<(x259==x260)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x261 = -1;
	uint8_t x262 = 3U;
	int16_t x263 = 1908;
	int64_t x264 = 1LL;

	t35 = (x261|(x262<<(x263==x264)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x285 = 7U;
	static int32_t x286 = INT32_MAX;
	int16_t x287 = -1;
	int64_t x288 = -31897695154344089LL;
	volatile int32_t t36 = INT32_MAX;

	t36 = (x285|(x286<<(x287==x288)));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x289 = UINT64_MAX;
	uint32_t x290 = 9U;
	int64_t x291 = INT64_MIN;
	uint16_t x292 = UINT16_MAX;
	uint64_t t37 = UINT64_MAX;

	t37 = (x289|(x290<<(x291==x292)));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x297 = INT64_MIN;
	volatile int16_t x298 = INT16_MAX;
	static volatile uint16_t x299 = 6427U;
	int64_t x300 = -1LL;
	int64_t t38 = 5637212LL;

	t38 = (x297|(x298<<(x299==x300)));

	if (t38 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x301 = UINT32_MAX;
	static int32_t x303 = INT32_MIN;
	static int8_t x304 = -1;
	volatile uint32_t t39 = UINT32_MAX;

	t39 = (x301|(x302<<(x303==x304)));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x305 = -24367685;
	int16_t x306 = INT16_MAX;
	volatile int16_t x307 = 4556;
	uint32_t x308 = UINT32_MAX;
	int32_t t40 = 50237;

	t40 = (x305|(x306<<(x307==x308)));

	if (t40 != -24346625) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x310 = 2079332;
	uint64_t x311 = UINT64_MAX;
	int16_t x312 = 41;

	t41 = (x309|(x310<<(x311==x312)));

	if (t41 != 2079332) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x317 = INT64_MIN;
	volatile uint64_t x318 = 57513847030750LLU;
	int8_t x319 = INT8_MIN;
	int64_t x320 = -1LL;
	volatile uint64_t t42 = 7177106080LLU;

	t42 = (x317|(x318<<(x319==x320)));

	if (t42 != 9223429550701806558LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x321 = UINT64_MAX;
	volatile int8_t x322 = 1;
	volatile uint8_t x324 = UINT8_MAX;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (x321|(x322<<(x323==x324)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x329 = 1;
	int64_t x331 = INT64_MAX;
	int16_t x332 = INT16_MIN;

	t44 = (x329|(x330<<(x331==x332)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x334 = 26U;
	int8_t x336 = -21;
	volatile int32_t t45 = 29185;

	t45 = (x333|(x334<<(x335==x336)));

	if (t45 != 510) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x341 = -50;
	uint32_t x342 = 23188U;
	uint16_t x343 = 14U;
	static uint32_t t46 = 733U;

	t46 = (x341|(x342<<(x343==x344)));

	if (t46 != 4294967262U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x349 = 81;
	int32_t x351 = 297543;
	uint8_t x352 = UINT8_MAX;
	int32_t t47 = -3788141;

	t47 = (x349|(x350<<(x351==x352)));

	if (t47 != 6337109) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x357 = INT8_MIN;
	static int32_t x358 = INT32_MAX;
	static int64_t x359 = 11LL;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t48 = -2;

	t48 = (x357|(x358<<(x359==x360)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x365 = INT64_MIN;
	uint64_t x366 = UINT64_MAX;
	static int16_t x368 = INT16_MIN;
	static uint64_t t49 = UINT64_MAX;

	t49 = (x365|(x366<<(x367==x368)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x377 = INT32_MAX;
	int32_t x378 = 1379;
	int16_t x379 = INT16_MAX;
	int64_t x380 = INT64_MIN;
	int32_t t50 = INT32_MAX;

	t50 = (x377|(x378<<(x379==x380)));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x381 = 38U;
	uint8_t x382 = 26U;
	int32_t x383 = 5568;
	int16_t x384 = INT16_MAX;
	int32_t t51 = 116;

	t51 = (x381|(x382<<(x383==x384)));

	if (t51 != 62) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x385 = -1;
	uint32_t x386 = 1684329U;
	uint8_t x387 = 2U;
	uint16_t x388 = 43U;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = (x385|(x386<<(x387==x388)));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x397 = INT64_MIN;
	uint32_t x398 = 7U;
	int8_t x400 = INT8_MIN;
	int64_t t53 = -102901848664130162LL;

	t53 = (x397|(x398<<(x399==x400)));

	if (t53 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x405 = 4013U;
	uint32_t t54 = 174542U;

	t54 = (x405|(x406<<(x407==x408)));

	if (t54 != 4013U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x409 = 1U;
	uint64_t x410 = UINT64_MAX;
	int32_t x411 = INT32_MAX;
	uint32_t x412 = 515028303U;
	uint64_t t55 = UINT64_MAX;

	t55 = (x409|(x410<<(x411==x412)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x413 = INT32_MIN;
	volatile uint8_t x414 = 27U;
	int64_t x416 = INT64_MIN;
	int32_t t56 = 1;

	t56 = (x413|(x414<<(x415==x416)));

	if (t56 != -2147483621) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x417 = -28205436058775387LL;
	int32_t x418 = 0;
	volatile uint8_t x420 = 58U;
	int64_t t57 = 6795LL;

	t57 = (x417|(x418<<(x419==x420)));

	if (t57 != -28205436058775387LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x422 = 63U;
	int16_t x423 = INT16_MIN;
	int32_t x424 = INT32_MIN;
	static uint32_t t58 = 4U;

	t58 = (x421|(x422<<(x423==x424)));

	if (t58 != 63U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x426 = UINT16_MAX;
	uint64_t x428 = 383091702742LLU;
	volatile int64_t t59 = 72068171LL;

	t59 = (x425|(x426<<(x427==x428)));

	if (t59 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x433 = 59;
	uint64_t x434 = UINT64_MAX;
	static uint8_t x435 = 2U;
	uint64_t t60 = UINT64_MAX;

	t60 = (x433|(x434<<(x435==x436)));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x437 = 7316U;
	int8_t x438 = INT8_MAX;
	static int16_t x440 = 1049;
	static volatile int32_t t61 = -161;

	t61 = (x437|(x438<<(x439==x440)));

	if (t61 != 7423) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x441 = INT32_MAX;
	int16_t x442 = INT16_MAX;
	uint32_t x443 = UINT32_MAX;
	int8_t x444 = -1;
	int32_t t62 = INT32_MAX;

	t62 = (x441|(x442<<(x443==x444)));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x462 = 84U;
	int16_t x463 = -1;
	volatile int8_t x464 = INT8_MIN;
	int32_t t63 = 1366;

	t63 = (x461|(x462<<(x463==x464)));

	if (t63 != -44) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x465 = UINT16_MAX;
	uint64_t x466 = 36928220503LLU;
	int64_t x467 = 7686067305264555LL;
	static uint64_t t64 = 8076826244LLU;

	t64 = (x465|(x466<<(x467==x468)));

	if (t64 != 36928225279LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x470 = INT8_MAX;
	static uint16_t x472 = UINT16_MAX;
	int32_t t65 = INT32_MAX;

	t65 = (x469|(x470<<(x471==x472)));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x477 = INT32_MIN;
	uint32_t x478 = 2114220U;
	volatile int32_t x479 = INT32_MIN;
	volatile uint32_t t66 = 160220846U;

	t66 = (x477|(x478<<(x479==x480)));

	if (t66 != 2149597868U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x485 = 25U;
	static uint64_t x486 = 14525296432923062LLU;
	static int32_t x487 = -709;
	int32_t x488 = -1;
	uint64_t t67 = 598358001404LLU;

	t67 = (x485|(x486<<(x487==x488)));

	if (t67 != 14525296432923071LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x493 = -152635008810058679LL;
	uint64_t x494 = UINT64_MAX;
	static uint16_t x495 = UINT16_MAX;
	volatile int16_t x496 = INT16_MIN;

	t68 = (x493|(x494<<(x495==x496)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x509 = -1;
	int16_t x510 = 1;
	int32_t x511 = 4;
	static int64_t x512 = INT64_MIN;
	volatile int32_t t69 = 31386;

	t69 = (x509|(x510<<(x511==x512)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x513 = UINT16_MAX;
	volatile uint8_t x514 = 8U;
	int8_t x515 = INT8_MAX;
	int32_t x516 = INT32_MAX;
	int32_t t70 = 5;

	t70 = (x513|(x514<<(x515==x516)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x518 = 837013646273LL;
	int8_t x520 = -1;
	int64_t t71 = 2840888LL;

	t71 = (x517|(x518<<(x519==x520)));

	if (t71 != -63LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x525 = INT64_MIN;
	uint8_t x527 = UINT8_MAX;
	uint8_t x528 = UINT8_MAX;
	volatile int64_t t72 = -34009211944451LL;

	t72 = (x525|(x526<<(x527==x528)));

	if (t72 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x549 = -390;
	int64_t x550 = INT64_MAX;
	int16_t x551 = -15;
	int32_t x552 = INT32_MIN;
	volatile int64_t t73 = -64492924LL;

	t73 = (x549|(x550<<(x551==x552)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x553 = INT8_MIN;
	static int64_t x554 = 27822830800081LL;
	int8_t x555 = INT8_MIN;
	int32_t x556 = INT32_MIN;
	volatile int64_t t74 = -754027712709292287LL;

	t74 = (x553|(x554<<(x555==x556)));

	if (t74 != -47LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x557 = INT32_MIN;
	static int16_t x559 = INT16_MAX;
	static int16_t x560 = INT16_MAX;
	volatile int32_t t75 = -15;

	t75 = (x557|(x558<<(x559==x560)));

	if (t75 != -2147352578) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x562 = 535001664U;
	static volatile int64_t x563 = INT64_MIN;
	int16_t x564 = INT16_MIN;
	static volatile uint32_t t76 = 196U;

	t76 = (x561|(x562<<(x563==x564)));

	if (t76 != 535001727U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x565 = 435053354061177059LLU;
	uint16_t x566 = 1807U;
	int16_t x567 = INT16_MIN;
	volatile uint16_t x568 = UINT16_MAX;
	uint64_t t77 = 36552248727802778LLU;

	t77 = (x565|(x566<<(x567==x568)));

	if (t77 != 435053354061178863LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x569 = 10;
	int64_t x571 = INT64_MIN;
	uint8_t x572 = 19U;
	volatile uint32_t t78 = 54505U;

	t78 = (x569|(x570<<(x571==x572)));

	if (t78 != 27U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x573 = -1;
	static volatile int8_t x574 = INT8_MAX;
	static uint64_t x576 = 1231LLU;
	int32_t t79 = 5;

	t79 = (x573|(x574<<(x575==x576)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x581 = UINT64_MAX;
	volatile uint8_t x583 = 3U;
	int16_t x584 = -1419;
	static uint64_t t80 = UINT64_MAX;

	t80 = (x581|(x582<<(x583==x584)));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x585 = INT8_MAX;
	int8_t x586 = INT8_MAX;
	int16_t x587 = -6374;
	uint16_t x588 = 184U;
	volatile int32_t t81 = -5102487;

	t81 = (x585|(x586<<(x587==x588)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x593 = -1;
	volatile uint16_t x594 = UINT16_MAX;
	static int32_t x596 = INT32_MAX;
	volatile int32_t t82 = 152059;

	t82 = (x593|(x594<<(x595==x596)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x597 = UINT16_MAX;
	volatile int8_t x598 = 11;
	int32_t x599 = INT32_MAX;
	volatile int32_t t83 = 21;

	t83 = (x597|(x598<<(x599==x600)));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x601 = -1;
	uint32_t x604 = 2192451U;
	int64_t t84 = 81012LL;

	t84 = (x601|(x602<<(x603==x604)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x605 = INT64_MAX;
	int16_t x606 = INT16_MAX;
	int32_t x607 = INT32_MIN;

	t85 = (x605|(x606<<(x607==x608)));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x610 = INT16_MAX;
	int32_t x611 = INT32_MAX;
	uint16_t x612 = UINT16_MAX;
	static volatile int64_t t86 = -28352556740804750LL;

	t86 = (x609|(x610<<(x611==x612)));

	if (t86 != -196590550467051521LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x613 = -971487;
	uint16_t x614 = 0U;
	int16_t x616 = INT16_MIN;
	volatile int32_t t87 = 1;

	t87 = (x613|(x614<<(x615==x616)));

	if (t87 != -971487) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x617 = -2459;
	static uint8_t x619 = UINT8_MAX;
	int32_t x620 = 83;
	uint64_t t88 = 398LLU;

	t88 = (x617|(x618<<(x619==x620)));

	if (t88 != 18446744073709551221LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x621 = 157U;
	uint16_t x622 = UINT16_MAX;
	static volatile int16_t x623 = INT16_MIN;
	int8_t x624 = 3;

	t89 = (x621|(x622<<(x623==x624)));

	if (t89 != 65535U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x625 = 13LL;
	uint16_t x626 = 22U;
	int64_t x627 = 3624665LL;
	volatile int64_t t90 = 0LL;

	t90 = (x625|(x626<<(x627==x628)));

	if (t90 != 31LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x642 = 1;
	uint8_t x643 = 14U;
	volatile int16_t x644 = 7;
	volatile uint64_t t91 = 342341628677752645LLU;

	t91 = (x641|(x642<<(x643==x644)));

	if (t91 != 4004334882536401LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x657 = UINT16_MAX;
	uint64_t x658 = UINT64_MAX;
	int32_t x659 = -1;
	volatile int16_t x660 = INT16_MIN;
	static volatile uint64_t t92 = UINT64_MAX;

	t92 = (x657|(x658<<(x659==x660)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x670 = 34;
	static uint32_t x671 = 2U;
	static int32_t t93 = 214;

	t93 = (x669|(x670<<(x671==x672)));

	if (t93 != -94) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x677 = -1;
	int64_t x678 = 615886839989LL;
	int16_t x680 = 3;
	int64_t t94 = -12LL;

	t94 = (x677|(x678<<(x679==x680)));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x689 = 114U;
	volatile uint64_t x690 = UINT64_MAX;
	uint32_t x691 = UINT32_MAX;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (x689|(x690<<(x691==x692)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x693 = INT64_MIN;
	volatile int32_t x694 = 3955625;
	volatile int8_t x695 = INT8_MAX;
	int64_t t96 = -1293309059638LL;

	t96 = (x693|(x694<<(x695==x696)));

	if (t96 != -9223372036850820183LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x697 = -8;
	uint32_t x698 = 1527U;
	int32_t x699 = -358;
	volatile uint32_t x700 = 841U;

	t97 = (x697|(x698<<(x699==x700)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x710 = 13U;
	static int64_t x711 = -46294814478778847LL;
	uint32_t x712 = 13U;
	int32_t t98 = -114239975;

	t98 = (x709|(x710<<(x711==x712)));

	if (t98 != 15) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x717 = 3629639;
	volatile int8_t x719 = INT8_MIN;
	volatile int8_t x720 = -53;
	int64_t t99 = 15LL;

	t99 = (x717|(x718<<(x719==x720)));

	if (t99 != 62910439LL) { NG(); } else { ; }
	
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

