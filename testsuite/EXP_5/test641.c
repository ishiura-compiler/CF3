#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -11072910963LL;
int32_t x44 = -1;
uint64_t x45 = 342184LLU;
int64_t x48 = -125541352187731LL;
static uint64_t t4 = 1LLU;
int64_t x54 = INT64_MIN;
volatile int32_t x55 = INT32_MAX;
uint64_t x78 = 17268902403560034LLU;
int64_t x95 = -1LL;
uint64_t x155 = 107005793161135LLU;
int32_t x164 = -13;
int32_t x169 = INT32_MIN;
volatile int32_t t16 = 2041;
uint64_t x184 = UINT64_MAX;
uint8_t x192 = 4U;
static int64_t x196 = -1LL;
volatile int64_t x205 = INT64_MIN;
volatile int32_t x232 = -1;
static int32_t x237 = INT32_MIN;
static int32_t x253 = -1;
volatile uint64_t x255 = 175392143041379959LLU;
int32_t x276 = -1696652;
volatile int32_t t25 = -226560165;
static volatile uint16_t x313 = UINT16_MAX;
uint64_t x314 = UINT64_MAX;
int8_t x324 = INT8_MAX;
volatile int64_t t29 = -740842357242630LL;
volatile uint64_t t30 = 698167298018378593LLU;
int32_t x336 = INT32_MIN;
volatile int32_t x337 = -1;
int16_t x340 = INT16_MIN;
int64_t x344 = 11498964LL;
int16_t x351 = -77;
int32_t x357 = INT32_MAX;
volatile int8_t x359 = -1;
uint64_t x360 = 13566313LLU;
uint16_t x362 = UINT16_MAX;
int32_t x364 = 225;
static uint64_t x367 = 34759971LLU;
uint8_t x368 = 15U;
static uint64_t t37 = 43834669741235LLU;
static uint32_t x382 = UINT32_MAX;
int64_t x413 = INT64_MIN;
uint16_t x416 = UINT16_MAX;
static volatile int64_t t43 = 69354029772LL;
static uint8_t x443 = 11U;
static uint32_t t44 = 30613249U;
int16_t x480 = INT16_MAX;
static int32_t x483 = -1;
int32_t t48 = 763271563;
static int32_t x489 = -1;
uint64_t x490 = UINT64_MAX;
int64_t x494 = -1LL;
int32_t x500 = INT32_MAX;
int64_t x513 = INT64_MAX;
int64_t x520 = INT64_MIN;
int64_t x577 = INT64_MIN;
volatile int64_t t58 = 67724569695367354LL;
int32_t x649 = -1374161;
int32_t x657 = -233573440;
int8_t x658 = 18;
int16_t x664 = INT16_MIN;
static int8_t x674 = 4;
volatile uint8_t x675 = 1U;
uint8_t x687 = 28U;
static int32_t t64 = 4;
int32_t x697 = INT32_MAX;
uint64_t x698 = UINT64_MAX;
uint64_t t65 = 359645681131401273LLU;
static int32_t t66 = 0;
static uint8_t x730 = 50U;
int32_t x732 = INT32_MIN;
volatile uint64_t t68 = 847LLU;
static volatile uint8_t x737 = 6U;
static int64_t t70 = -34840886362412546LL;
int32_t x782 = INT32_MIN;
volatile uint64_t t73 = 1964167289808785733LLU;
uint64_t x799 = 98105481LLU;
uint64_t t75 = 4052655538LLU;
uint32_t t76 = 69106637U;
volatile int64_t t77 = -192325LL;
int8_t x837 = INT8_MAX;
static volatile int32_t x838 = INT32_MIN;
volatile int64_t t79 = 67035LL;
int16_t x847 = -3;
uint8_t x862 = 17U;
uint8_t x867 = 2U;
uint32_t x911 = 1709U;
int16_t x956 = 6854;
int32_t x968 = -3221411;
int64_t x970 = 120655LL;
static int64_t x992 = INT64_MIN;
int32_t x995 = INT32_MAX;
static volatile int64_t x996 = INT64_MAX;
static int64_t t92 = -7860LL;
volatile int64_t x997 = INT64_MIN;
static uint8_t x1001 = 2U;
uint64_t x1002 = UINT64_MAX;
volatile uint64_t t94 = 545076062475LLU;
uint16_t x1006 = UINT16_MAX;
static volatile int32_t t95 = -12742457;
static uint16_t x1025 = 5U;
static uint64_t x1037 = 14439936655274236LLU;
int8_t x1039 = -1;
volatile uint8_t x1040 = 1U;
uint64_t x1065 = 1444LLU;


void f0(void) {
	volatile int32_t x1 = 578;
	static int8_t x3 = INT8_MAX;
	static uint8_t x4 = UINT8_MAX;
	int64_t t0 = 4595408354035330571LL;

	t0 = (x1/((x2/x3)&x4));

	if (t0 != 2LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x13 = 11252876LLU;
	uint64_t x14 = 841421LLU;
	static int16_t x15 = INT16_MAX;
	static uint64_t x16 = 3751650960LLU;
	static uint64_t t1 = 4LLU;

	t1 = (x13/((x14/x15)&x16));

	if (t1 != 703304LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x25 = 1U;
	uint64_t x26 = UINT64_MAX;
	int8_t x27 = 12;
	uint16_t x28 = 637U;
	volatile uint64_t t2 = 109LLU;

	t2 = (x25/((x26/x27)&x28));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x41 = -1LL;
	uint32_t x42 = 368724364U;
	int64_t x43 = -1LL;
	static volatile int64_t t3 = -722063029LL;

	t3 = (x41/((x42/x43)&x44));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x46 = 3858;
	static int8_t x47 = INT8_MAX;

	t4 = (x45/((x46/x47)&x48));

	if (t4 != 28515LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x53 = 4U;
	uint16_t x56 = UINT16_MAX;
	static int64_t t5 = -413045371513LL;

	t5 = (x53/((x54/x55)&x56));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x73 = 5558;
	uint8_t x74 = UINT8_MAX;
	int32_t x75 = 6;
	uint64_t x76 = UINT64_MAX;
	uint64_t t6 = 792250235974LLU;

	t6 = (x73/((x74/x75)&x76));

	if (t6 != 132LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x77 = 1063279133607549677LL;
	int16_t x79 = 4704;
	uint8_t x80 = UINT8_MAX;
	uint64_t t7 = 57LLU;

	t7 = (x77/((x78/x79)&x80));

	if (t7 != 6405295985587648LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x85 = -1LL;
	int64_t x86 = INT64_MIN;
	int64_t x87 = 2105451239074413689LL;
	int16_t x88 = INT16_MIN;
	int64_t t8 = -11299934606LL;

	t8 = (x85/((x86/x87)&x88));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x93 = INT64_MIN;
	static int64_t x94 = INT64_MAX;
	uint64_t x96 = 1263711664777LLU;
	uint64_t t9 = 6534921166732536700LLU;

	t9 = (x93/((x94/x95)&x96));

	if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x101 = 2U;
	int64_t x102 = 2683436817022044LL;
	static int16_t x103 = INT16_MIN;
	static int64_t x104 = INT64_MIN;
	int64_t t10 = -47268598995LL;

	t10 = (x101/((x102/x103)&x104));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x109 = INT32_MIN;
	int32_t x110 = 7;
	int64_t x111 = -1LL;
	int64_t x112 = -992556048853LL;
	int64_t t11 = 122058562LL;

	t11 = (x109/((x110/x111)&x112));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x153 = 119U;
	int16_t x154 = -12;
	int32_t x156 = INT32_MAX;
	volatile uint64_t t12 = 39890755LLU;

	t12 = (x153/((x154/x155)&x156));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x157 = 283;
	uint8_t x158 = UINT8_MAX;
	uint8_t x159 = UINT8_MAX;
	volatile int32_t x160 = -1;
	int32_t t13 = 34157947;

	t13 = (x157/((x158/x159)&x160));

	if (t13 != 283) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x161 = 20756U;
	int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MIN;
	volatile int32_t t14 = 132;

	t14 = (x161/((x162/x163)&x164));

	if (t14 != 81) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x165 = 2U;
	int8_t x166 = -1;
	volatile int16_t x167 = -1;
	static int64_t x168 = -660130446013029LL;
	volatile int64_t t15 = 3044LL;

	t15 = (x165/((x166/x167)&x168));

	if (t15 != 2LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x170 = UINT16_MAX;
	uint8_t x171 = 5U;
	volatile int8_t x172 = 40;

	t16 = (x169/((x170/x171)&x172));

	if (t16 != -67108864) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x181 = 8709949LL;
	uint8_t x182 = 15U;
	int16_t x183 = -1;
	volatile uint64_t t17 = 4346841119184LLU;

	t17 = (x181/((x182/x183)&x184));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x189 = INT16_MAX;
	int32_t x190 = INT32_MAX;
	volatile uint16_t x191 = 8U;
	volatile int32_t t18 = 737316091;

	t18 = (x189/((x190/x191)&x192));

	if (t18 != 8191) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x193 = 1006;
	uint16_t x194 = 45U;
	volatile int64_t x195 = -1LL;
	static volatile int64_t t19 = -21LL;

	t19 = (x193/((x194/x195)&x196));

	if (t19 != -22LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x206 = UINT64_MAX;
	int32_t x207 = 126;
	int8_t x208 = 11;
	uint64_t t20 = 98LLU;

	t20 = (x205/((x206/x207)&x208));

	if (t20 != 1152921504606846976LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x217 = INT8_MIN;
	int16_t x218 = INT16_MIN;
	uint16_t x219 = 2U;
	int64_t x220 = INT64_MIN;
	volatile int64_t t21 = -1703537981187746LL;

	t21 = (x217/((x218/x219)&x220));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x229 = 1;
	uint8_t x230 = UINT8_MAX;
	uint8_t x231 = UINT8_MAX;
	int32_t t22 = -6;

	t22 = (x229/((x230/x231)&x232));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x238 = UINT8_MAX;
	static int8_t x239 = -1;
	static int64_t x240 = INT64_MIN;
	static volatile int64_t t23 = 298280782065006240LL;

	t23 = (x237/((x238/x239)&x240));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x254 = 1930220493234233714LLU;
	uint8_t x256 = 1U;
	uint64_t t24 = UINT64_MAX;

	t24 = (x253/((x254/x255)&x256));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x273 = -436;
	uint8_t x274 = 1U;
	static int8_t x275 = -1;

	t25 = (x273/((x274/x275)&x276));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x281 = UINT8_MAX;
	static int8_t x282 = INT8_MIN;
	volatile int8_t x283 = INT8_MAX;
	int64_t x284 = 1LL;
	volatile int64_t t26 = -2LL;

	t26 = (x281/((x282/x283)&x284));

	if (t26 != 255LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MAX;
	volatile uint64_t t27 = 45190479783308LLU;

	t27 = (x313/((x314/x315)&x316));

	if (t27 != 65535LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x321 = 59;
	volatile uint8_t x322 = 99U;
	static int64_t x323 = -1LL;
	volatile int64_t t28 = -5221229858LL;

	t28 = (x321/((x322/x323)&x324));

	if (t28 != 2LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x325 = 59U;
	int64_t x326 = -25890LL;
	int8_t x327 = -1;
	int16_t x328 = -1;

	t29 = (x325/((x326/x327)&x328));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x329 = UINT16_MAX;
	int8_t x330 = -1;
	static uint64_t x331 = 3071605990516129LLU;
	int32_t x332 = INT32_MAX;

	t30 = (x329/((x330/x331)&x332));

	if (t30 != 10LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x333 = -1LL;
	uint8_t x334 = UINT8_MAX;
	static int16_t x335 = -1;
	int64_t t31 = -22LL;

	t31 = (x333/((x334/x335)&x336));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x338 = 2678434420505893580LLU;
	volatile uint64_t x339 = 53132481583LLU;
	uint64_t t32 = 127LLU;

	t32 = (x337/((x338/x339)&x340));

	if (t32 != 366027277907LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x341 = 22629U;
	static int64_t x342 = 2660158LL;
	static int8_t x343 = INT8_MAX;
	volatile int64_t t33 = 158821983610965027LL;

	t33 = (x341/((x342/x343)&x344));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x349 = INT8_MAX;
	volatile int32_t x350 = 1913653;
	volatile int32_t x352 = 286;
	static int32_t t34 = 1;

	t34 = (x349/((x350/x351)&x352));

	if (t34 != 10) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x358 = -5596;
	uint64_t t35 = 489LLU;

	t35 = (x357/((x358/x359)&x360));

	if (t35 != 6547206LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x361 = 3U;
	static int16_t x363 = INT16_MIN;
	volatile uint32_t t36 = 3993061U;

	t36 = (x361/((x362/x363)&x364));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x365 = INT16_MAX;
	uint64_t x366 = UINT64_MAX;

	t37 = (x365/((x366/x367)&x368));

	if (t37 != 4681LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x381 = 0U;
	int32_t x383 = INT32_MAX;
	int8_t x384 = -1;
	uint32_t t38 = 500U;

	t38 = (x381/((x382/x383)&x384));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x405 = INT64_MIN;
	static int64_t x406 = INT64_MIN;
	volatile uint16_t x407 = UINT16_MAX;
	int32_t x408 = INT32_MIN;
	static volatile int64_t t39 = -10910LL;

	t39 = (x405/((x406/x407)&x408));

	if (t39 != 65534LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x414 = -1004855596LL;
	uint64_t x415 = 1LLU;
	volatile uint64_t t40 = 1687LLU;

	t40 = (x413/((x414/x415)&x416));

	if (t40 != 1168698940300909LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x417 = INT8_MAX;
	uint32_t x418 = 379U;
	int8_t x419 = INT8_MAX;
	int16_t x420 = INT16_MAX;
	static uint32_t t41 = 0U;

	t41 = (x417/((x418/x419)&x420));

	if (t41 != 63U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x433 = INT32_MIN;
	int64_t x434 = INT64_MAX;
	static uint8_t x435 = 24U;
	int16_t x436 = INT16_MAX;
	volatile int64_t t42 = 101066LL;

	t42 = (x433/((x434/x435)&x436));

	if (t42 != -98305LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x437 = -1;
	int64_t x438 = -1518LL;
	int32_t x439 = -1;
	int64_t x440 = -1819404545843628094LL;

	t43 = (x437/((x438/x439)&x440));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x441 = 0U;
	volatile int16_t x442 = INT16_MIN;
	uint32_t x444 = 635149691U;

	t44 = (x441/((x442/x443)&x444));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x445 = 118262266U;
	int8_t x446 = 3;
	static int16_t x447 = -1;
	uint16_t x448 = UINT16_MAX;
	volatile uint32_t t45 = 195942U;

	t45 = (x445/((x446/x447)&x448));

	if (t45 != 1804U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x461 = -22;
	int64_t x462 = INT64_MAX;
	int32_t x463 = -20887326;
	volatile int32_t x464 = INT32_MAX;
	int64_t t46 = -14729892LL;

	t46 = (x461/((x462/x463)&x464));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x477 = -1LL;
	uint64_t x478 = 1705113771939810LLU;
	uint16_t x479 = 1849U;
	volatile uint64_t t47 = 161138230071LLU;

	t47 = (x477/((x478/x479)&x480));

	if (t47 != 614031824569254LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x481 = -1;
	uint8_t x482 = 27U;
	int32_t x484 = INT32_MIN;

	t48 = (x481/((x482/x483)&x484));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x491 = INT16_MIN;
	volatile int64_t x492 = INT64_MAX;
	uint64_t t49 = UINT64_MAX;

	t49 = (x489/((x490/x491)&x492));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x493 = INT64_MIN;
	static int16_t x495 = -1;
	int8_t x496 = -1;
	volatile int64_t t50 = INT64_MIN;

	t50 = (x493/((x494/x495)&x496));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x497 = UINT8_MAX;
	volatile int32_t x498 = -3513;
	uint32_t x499 = 38U;
	static volatile uint32_t t51 = 33U;

	t51 = (x497/((x498/x499)&x500));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x514 = UINT8_MAX;
	int16_t x515 = -244;
	int8_t x516 = 1;
	volatile int64_t t52 = INT64_MAX;

	t52 = (x513/((x514/x515)&x516));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x517 = 55LLU;
	int32_t x518 = INT32_MIN;
	int32_t x519 = INT32_MAX;
	uint64_t t53 = 2681956LLU;

	t53 = (x517/((x518/x519)&x520));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x525 = 513228712;
	int64_t x526 = -1LL;
	uint64_t x527 = UINT64_MAX;
	uint16_t x528 = UINT16_MAX;
	uint64_t t54 = 1131065LLU;

	t54 = (x525/((x526/x527)&x528));

	if (t54 != 513228712LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x573 = 373643913U;
	volatile int32_t x574 = -1;
	uint64_t x575 = 377718491004LLU;
	volatile int64_t x576 = INT64_MAX;
	volatile uint64_t t55 = 3797246655LLU;

	t55 = (x573/((x574/x575)&x576));

	if (t55 != 7LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x578 = INT8_MIN;
	int16_t x579 = -75;
	int32_t x580 = 209575913;
	static int64_t t56 = INT64_MIN;

	t56 = (x577/((x578/x579)&x580));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x629 = INT32_MAX;
	int64_t x630 = INT64_MIN;
	int16_t x631 = 18;
	static volatile int64_t x632 = -2865286193325480535LL;
	int64_t t57 = -761013250833662LL;

	t57 = (x629/((x630/x631)&x632));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x637 = -36;
	int16_t x638 = -1;
	int8_t x639 = -1;
	int64_t x640 = -3988480315LL;

	t58 = (x637/((x638/x639)&x640));

	if (t58 != -36LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x650 = INT64_MAX;
	int8_t x651 = INT8_MAX;
	static int32_t x652 = -1;
	static volatile int64_t t59 = 1507527535661632LL;

	t59 = (x649/((x650/x651)&x652));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x659 = -1;
	static int64_t x660 = INT64_MIN;
	int64_t t60 = -933LL;

	t60 = (x657/((x658/x659)&x660));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x661 = -1LL;
	static int64_t x662 = INT64_MIN;
	static uint32_t x663 = 691293U;
	volatile int64_t t61 = 39857375LL;

	t61 = (x661/((x662/x663)&x664));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x673 = INT16_MIN;
	int64_t x676 = -1LL;
	int64_t t62 = 1098102258213001387LL;

	t62 = (x673/((x674/x675)&x676));

	if (t62 != -8192LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x677 = 1U;
	static volatile int8_t x678 = -1;
	uint64_t x679 = 401042LLU;
	int8_t x680 = -1;
	uint64_t t63 = 846041616LLU;

	t63 = (x677/((x678/x679)&x680));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x685 = INT8_MIN;
	int8_t x686 = INT8_MIN;
	int16_t x688 = -1;

	t64 = (x685/((x686/x687)&x688));

	if (t64 != 32) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x699 = UINT16_MAX;
	int16_t x700 = -1;

	t65 = (x697/((x698/x699)&x700));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x709 = INT8_MIN;
	static uint16_t x710 = UINT16_MAX;
	int8_t x711 = INT8_MIN;
	int16_t x712 = INT16_MIN;

	t66 = (x709/((x710/x711)&x712));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x713 = 11U;
	static int64_t x714 = -2755LL;
	int32_t x715 = 9;
	int8_t x716 = INT8_MIN;
	volatile int64_t t67 = 509LL;

	t67 = (x713/((x714/x715)&x716));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x729 = UINT64_MAX;
	static int64_t x731 = -1LL;

	t68 = (x729/((x730/x731)&x732));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x738 = UINT16_MAX;
	uint8_t x739 = 5U;
	static uint64_t x740 = 133391335LLU;
	uint64_t t69 = 12365483090065062LLU;

	t69 = (x737/((x738/x739)&x740));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x745 = -2LL;
	int32_t x746 = -1;
	uint32_t x747 = 8144U;
	uint32_t x748 = 16049U;

	t70 = (x745/((x746/x747)&x748));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x769 = UINT64_MAX;
	uint8_t x770 = UINT8_MAX;
	int8_t x771 = INT8_MAX;
	int16_t x772 = -1;
	uint64_t t71 = 80137921LLU;

	t71 = (x769/((x770/x771)&x772));

	if (t71 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x777 = 1792278U;
	volatile int32_t x778 = -1;
	static uint8_t x779 = 1U;
	uint64_t x780 = UINT64_MAX;
	uint64_t t72 = 106LLU;

	t72 = (x777/((x778/x779)&x780));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x781 = 91LLU;
	static int32_t x783 = INT32_MAX;
	volatile int16_t x784 = 2820;

	t73 = (x781/((x782/x783)&x784));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x793 = INT8_MIN;
	int64_t x794 = INT64_MAX;
	uint8_t x795 = UINT8_MAX;
	volatile int8_t x796 = INT8_MIN;
	volatile int64_t t74 = 0LL;

	t74 = (x793/((x794/x795)&x796));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x797 = 26;
	volatile int32_t x798 = INT32_MAX;
	static int64_t x800 = INT64_MAX;

	t75 = (x797/((x798/x799)&x800));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x805 = INT8_MIN;
	uint32_t x806 = 11U;
	int8_t x807 = 4;
	static int8_t x808 = 6;

	t76 = (x805/((x806/x807)&x808));

	if (t76 != 2147483584U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x813 = INT8_MIN;
	static int16_t x814 = INT16_MIN;
	uint8_t x815 = 44U;
	static int64_t x816 = -1LL;

	t77 = (x813/((x814/x815)&x816));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x839 = INT16_MAX;
	int32_t x840 = -116734;
	volatile int32_t t78 = 1029714193;

	t78 = (x837/((x838/x839)&x840));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x841 = 2983U;
	int64_t x842 = INT64_MIN;
	uint16_t x843 = 7728U;
	int16_t x844 = -2;

	t79 = (x841/((x842/x843)&x844));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x845 = -1;
	int8_t x846 = INT8_MIN;
	volatile int8_t x848 = -1;
	volatile int32_t t80 = -320388538;

	t80 = (x845/((x846/x847)&x848));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x861 = -5;
	int64_t x863 = -1LL;
	int32_t x864 = -423759412;
	int64_t t81 = 907508LL;

	t81 = (x861/((x862/x863)&x864));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x865 = 15847073LLU;
	volatile uint64_t x866 = 24627057981962811LLU;
	int16_t x868 = INT16_MIN;
	uint64_t t82 = 15175705347067LLU;

	t82 = (x865/((x866/x867)&x868));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x905 = 4U;
	int8_t x906 = -1;
	static volatile uint32_t x907 = 349354934U;
	static int8_t x908 = INT8_MAX;
	uint32_t t83 = 278871U;

	t83 = (x905/((x906/x907)&x908));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x909 = -1;
	static int8_t x910 = INT8_MIN;
	static int64_t x912 = -6039979LL;
	static volatile int64_t t84 = -98440748558260LL;

	t84 = (x909/((x910/x911)&x912));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x925 = INT64_MAX;
	volatile uint64_t x926 = UINT64_MAX;
	uint32_t x927 = UINT32_MAX;
	int64_t x928 = INT64_MAX;
	static volatile uint64_t t85 = 193321LLU;

	t85 = (x925/((x926/x927)&x928));

	if (t85 != 2147483647LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x929 = 44;
	static int64_t x930 = INT64_MIN;
	int64_t x931 = -108548122LL;
	int8_t x932 = INT8_MIN;
	volatile int64_t t86 = -64754821LL;

	t86 = (x929/((x930/x931)&x932));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x953 = INT8_MIN;
	volatile int8_t x954 = INT8_MIN;
	static uint8_t x955 = 1U;
	static volatile int32_t t87 = -30259172;

	t87 = (x953/((x954/x955)&x956));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x965 = UINT64_MAX;
	int64_t x966 = INT64_MIN;
	static uint16_t x967 = 18U;
	uint64_t t88 = 3265896172136263019LLU;

	t88 = (x965/((x966/x967)&x968));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x969 = UINT16_MAX;
	uint16_t x971 = 5U;
	uint64_t x972 = UINT64_MAX;
	volatile uint64_t t89 = 696722125760LLU;

	t89 = (x969/((x970/x971)&x972));

	if (t89 != 2LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x977 = INT16_MIN;
	int64_t x978 = INT64_MIN;
	volatile int32_t x979 = INT32_MAX;
	int64_t x980 = INT64_MIN;
	int64_t t90 = 1LL;

	t90 = (x977/((x978/x979)&x980));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x989 = INT16_MAX;
	int32_t x990 = INT32_MIN;
	volatile int16_t x991 = 4280;
	int64_t t91 = 229LL;

	t91 = (x989/((x990/x991)&x992));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x993 = INT8_MIN;
	int32_t x994 = INT32_MIN;

	t92 = (x993/((x994/x995)&x996));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x998 = INT64_MIN;
	int64_t x999 = 16079167140340LL;
	uint16_t x1000 = 97U;
	int64_t t93 = -15LL;

	t93 = (x997/((x998/x999)&x1000));

	if (t93 != -144115188075855872LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x1003 = 226LLU;
	static volatile int32_t x1004 = -1;

	t94 = (x1001/((x1002/x1003)&x1004));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1005 = INT32_MIN;
	uint16_t x1007 = 153U;
	static int8_t x1008 = -46;

	t95 = (x1005/((x1006/x1007)&x1008));

	if (t95 != -5592405) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x1013 = 8U;
	int32_t x1014 = INT32_MIN;
	static uint32_t x1015 = 8407U;
	uint8_t x1016 = 5U;
	uint32_t t96 = 2199714U;

	t96 = (x1013/((x1014/x1015)&x1016));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x1026 = INT8_MAX;
	int8_t x1027 = 1;
	int32_t x1028 = INT32_MAX;
	volatile int32_t t97 = 207;

	t97 = (x1025/((x1026/x1027)&x1028));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1038 = INT32_MAX;
	volatile uint64_t t98 = 3228LLU;

	t98 = (x1037/((x1038/x1039)&x1040));

	if (t98 != 14439936655274236LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x1066 = INT8_MIN;
	uint8_t x1067 = 44U;
	int64_t x1068 = -45310LL;
	uint64_t t99 = 3500LLU;

	t99 = (x1065/((x1066/x1067)&x1068));

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

