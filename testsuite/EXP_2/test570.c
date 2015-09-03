#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x8 = 0U;
int64_t t0 = -219665829LL;
uint8_t x33 = UINT8_MAX;
uint64_t x38 = 93346515878LLU;
volatile int64_t t4 = 889824626022LL;
static uint32_t x59 = 6U;
volatile uint32_t t5 = 23217U;
int64_t t6 = -1348335LL;
static uint16_t x72 = UINT16_MAX;
int32_t x77 = -1;
uint64_t x78 = UINT64_MAX;
int8_t x79 = -3;
int32_t x84 = -1;
int32_t x96 = -3380162;
int8_t x105 = 0;
static int16_t x107 = INT16_MAX;
int64_t x109 = -3499865680LL;
int16_t x111 = -1;
static int32_t x113 = INT32_MIN;
uint64_t t13 = 505918LLU;
int64_t x127 = -1LL;
uint8_t x149 = 5U;
volatile int8_t x151 = -1;
uint16_t x157 = UINT16_MAX;
static int32_t x158 = INT32_MAX;
int16_t x170 = INT16_MIN;
int64_t x179 = -117907388294LL;
uint8_t x195 = 7U;
int64_t x212 = -40LL;
int64_t t24 = 1LL;
int32_t x213 = -1;
uint8_t x234 = 86U;
int16_t x248 = -1;
volatile uint64_t t29 = 118LLU;
uint8_t x252 = 1U;
uint64_t x266 = UINT64_MAX;
static uint64_t t35 = 4132071801422LLU;
int8_t x308 = 0;
uint32_t t38 = 3U;
volatile uint64_t t40 = 5526509805044430521LLU;
volatile uint64_t x336 = UINT64_MAX;
static volatile uint64_t t45 = 3004734LLU;
uint8_t x355 = 1U;
volatile int64_t t46 = 1021137599LL;
volatile uint64_t t47 = 142191936164LLU;
uint8_t x366 = 6U;
static int16_t x376 = INT16_MAX;
static int16_t x382 = INT16_MAX;
uint64_t x386 = 654845409745LLU;
volatile int32_t x399 = -275424725;
int64_t t54 = -108585084LL;
int16_t x407 = -53;
int64_t x408 = -1LL;
static uint32_t x413 = 5569974U;
volatile int64_t x424 = INT64_MIN;
int64_t x446 = 53512967927832LL;
int8_t x451 = INT8_MIN;
int32_t x465 = 140;
uint16_t x467 = UINT16_MAX;
uint32_t x470 = 54235315U;
uint16_t x482 = 2U;
static int8_t x483 = -1;
uint16_t x497 = 19701U;
static uint32_t x508 = UINT32_MAX;
volatile int64_t x510 = INT64_MIN;
volatile uint32_t t68 = 68U;
static int8_t x517 = -13;
int8_t x529 = 1;
volatile int16_t x530 = 5649;
volatile int32_t x531 = 3;
volatile uint64_t x532 = UINT64_MAX;
int32_t x538 = -8696;
volatile int32_t t71 = -3;
int64_t t73 = 27440893LL;
int64_t x555 = 52143262051LL;
volatile uint8_t x556 = UINT8_MAX;
int8_t x561 = -1;
int32_t x562 = INT32_MIN;
uint16_t x563 = 1U;
volatile int32_t x566 = INT32_MAX;
uint8_t x596 = 61U;
int32_t x605 = 62833;
int8_t x607 = -1;
int8_t x609 = 52;
uint16_t x635 = UINT16_MAX;
static volatile int64_t t83 = -49185322548LL;
int32_t x638 = INT32_MIN;
int32_t t84 = 127;
volatile uint64_t x655 = 429041559368LLU;
uint32_t x658 = UINT32_MAX;
uint64_t x660 = 1775438790033257131LLU;
static volatile uint64_t t86 = 178597LLU;
uint64_t x678 = 160822890202906119LLU;
static uint8_t x679 = 31U;
int8_t x688 = -1;
int8_t x706 = INT8_MIN;
uint8_t x713 = 2U;
int16_t x715 = INT16_MIN;
uint8_t x716 = 1U;
int16_t x718 = INT16_MIN;
int64_t x741 = 154403036361LL;
volatile uint64_t x742 = 878453LLU;
static uint32_t x744 = UINT32_MAX;
uint16_t x760 = UINT16_MAX;
uint32_t t96 = 457486033U;
static int32_t t97 = -21026;
volatile uint32_t x765 = UINT32_MAX;
int16_t x767 = -21;
static int8_t x768 = 0;


void f0(void) {
	static int32_t x5 = -1;
	int64_t x6 = INT64_MAX;
	static int8_t x7 = 6;

	t0 = ((x5%(x6/x7))&x8);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x25 = 61U;
	static volatile int8_t x26 = 6;
	volatile int8_t x27 = -1;
	uint32_t x28 = 306U;
	volatile uint32_t t1 = 1676634U;

	t1 = ((x25%(x26/x27))&x28);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x34 = INT16_MAX;
	static int8_t x35 = INT8_MIN;
	int16_t x36 = -7403;
	static volatile int32_t t2 = -273;

	t2 = ((x33%(x34/x35))&x36);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x37 = -6011619LL;
	uint32_t x39 = 3340U;
	static volatile int64_t x40 = INT64_MIN;
	uint64_t t3 = 9217747959231752280LLU;

	t3 = ((x37%(x38/x39))&x40);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x53 = INT8_MAX;
	int16_t x54 = INT16_MIN;
	uint32_t x55 = 1479723U;
	static int64_t x56 = INT64_MIN;

	t4 = ((x53%(x54/x55))&x56);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x57 = INT8_MIN;
	volatile uint32_t x58 = 105874428U;
	int32_t x60 = INT32_MAX;

	t5 = ((x57%(x58/x59))&x60);

	if (t5 != 7052834U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x61 = 158;
	static int32_t x62 = INT32_MAX;
	int16_t x63 = INT16_MIN;
	static int64_t x64 = -1LL;

	t6 = ((x61%(x62/x63))&x64);

	if (t6 != 158LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x69 = INT16_MAX;
	static uint64_t x70 = UINT64_MAX;
	int16_t x71 = 1844;
	volatile uint64_t t7 = 19146635LLU;

	t7 = ((x69%(x70/x71))&x72);

	if (t7 != 32767LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x80 = INT8_MAX;
	uint64_t t8 = 510887710669041LLU;

	t8 = ((x77%(x78/x79))&x80);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x81 = INT64_MAX;
	int32_t x82 = -1;
	int8_t x83 = -1;
	static int64_t t9 = -3714709580253079LL;

	t9 = ((x81%(x82/x83))&x84);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x93 = INT8_MAX;
	int64_t x94 = INT64_MIN;
	volatile uint64_t x95 = 41650970LLU;
	volatile uint64_t t10 = 2228249781411LLU;

	t10 = ((x93%(x94/x95))&x96);

	if (t10 != 62LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x106 = INT32_MIN;
	static int64_t x108 = -1LL;
	volatile int64_t t11 = -7133868LL;

	t11 = ((x105%(x106/x107))&x108);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x110 = INT16_MAX;
	static volatile int8_t x112 = INT8_MIN;
	volatile int64_t t12 = 8396LL;

	t12 = ((x109%(x110/x111))&x112);

	if (t12 != -22528LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x114 = INT64_MIN;
	static uint32_t x115 = 799720350U;
	static uint64_t x116 = 32640785487478448LLU;

	t13 = ((x113%(x114/x115))&x116);

	if (t13 != 32640785081958400LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x121 = INT64_MIN;
	uint32_t x122 = UINT32_MAX;
	volatile int64_t x123 = -9LL;
	int32_t x124 = INT32_MIN;
	static int64_t t14 = 175375219459384LL;

	t14 = ((x121%(x122/x123))&x124);

	if (t14 != -2147483648LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x125 = INT64_MAX;
	int32_t x126 = 741;
	uint32_t x128 = 2699U;
	volatile int64_t t15 = 227530343268826LL;

	t15 = ((x125%(x126/x127))&x128);

	if (t15 != 137LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x133 = INT64_MIN;
	static uint16_t x134 = UINT16_MAX;
	int16_t x135 = 15906;
	int64_t x136 = INT64_MIN;
	volatile int64_t t16 = 1151163847LL;

	t16 = ((x133%(x134/x135))&x136);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x150 = INT32_MAX;
	int8_t x152 = 50;
	int32_t t17 = 2;

	t17 = ((x149%(x150/x151))&x152);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x159 = INT16_MIN;
	int64_t x160 = 127905639LL;
	int64_t t18 = -323490891900504LL;

	t18 = ((x157%(x158/x159))&x160);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x169 = UINT8_MAX;
	int8_t x171 = -1;
	volatile int64_t x172 = INT64_MIN;
	volatile int64_t t19 = -3636534932259600475LL;

	t19 = ((x169%(x170/x171))&x172);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x177 = UINT16_MAX;
	static int64_t x178 = -4037479526058LL;
	int16_t x180 = -10270;
	static volatile int64_t t20 = 12LL;

	t20 = ((x177%(x178/x179))&x180);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x193 = 4372U;
	static int64_t x194 = 4135579208LL;
	int32_t x196 = INT32_MIN;
	volatile int64_t t21 = -66111LL;

	t21 = ((x193%(x194/x195))&x196);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x197 = 4956U;
	uint64_t x198 = UINT64_MAX;
	static uint8_t x199 = 21U;
	int8_t x200 = -1;
	volatile uint64_t t22 = 160LLU;

	t22 = ((x197%(x198/x199))&x200);

	if (t22 != 4956LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x205 = INT8_MAX;
	int64_t x206 = 4099747820936244392LL;
	static int8_t x207 = INT8_MIN;
	uint16_t x208 = 423U;
	int64_t t23 = 2068691753LL;

	t23 = ((x205%(x206/x207))&x208);

	if (t23 != 39LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x209 = UINT32_MAX;
	int64_t x210 = INT64_MIN;
	uint16_t x211 = 26679U;

	t24 = ((x209%(x210/x211))&x212);

	if (t24 != 4294967256LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x214 = -1;
	uint32_t x215 = 150061U;
	volatile int8_t x216 = -1;
	volatile uint32_t t25 = 6325665U;

	t25 = ((x213%(x214/x215))&x216);

	if (t25 != 14172U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x217 = -1;
	uint32_t x218 = 194803U;
	int64_t x219 = -1LL;
	static int8_t x220 = INT8_MAX;
	static int64_t t26 = -1113149479LL;

	t26 = ((x217%(x218/x219))&x220);

	if (t26 != 127LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x221 = 13U;
	static volatile int16_t x222 = INT16_MIN;
	uint64_t x223 = 1976886519LLU;
	int32_t x224 = INT32_MAX;
	uint64_t t27 = 952100107911LLU;

	t27 = ((x221%(x222/x223))&x224);

	if (t27 != 13LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x233 = 990143308;
	static int16_t x235 = -1;
	int32_t x236 = INT32_MAX;
	int32_t t28 = -5686;

	t28 = ((x233%(x234/x235))&x236);

	if (t28 != 24) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x245 = -9099430LL;
	static uint64_t x246 = 16286045LLU;
	uint32_t x247 = 288404U;

	t29 = ((x245%(x246/x247))&x248);

	if (t29 != 26LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x249 = 170U;
	int64_t x250 = 1146LL;
	int8_t x251 = -1;
	volatile int64_t t30 = 0LL;

	t30 = ((x249%(x250/x251))&x252);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x253 = INT32_MIN;
	int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MIN;
	static uint16_t x256 = 238U;
	volatile int64_t t31 = -6300000502614795LL;

	t31 = ((x253%(x254/x255))&x256);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x257 = INT32_MIN;
	int16_t x258 = -54;
	int64_t x259 = -1LL;
	int16_t x260 = -1;
	volatile int64_t t32 = -4011527LL;

	t32 = ((x257%(x258/x259))&x260);

	if (t32 != -38LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x265 = UINT64_MAX;
	static int16_t x267 = 95;
	volatile int8_t x268 = 1;
	volatile uint64_t t33 = 274761591LLU;

	t33 = ((x265%(x266/x267))&x268);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x269 = INT64_MIN;
	int16_t x270 = INT16_MIN;
	int8_t x271 = -1;
	static int64_t x272 = 566549025679LL;
	int64_t t34 = -1LL;

	t34 = ((x269%(x270/x271))&x272);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x289 = 29707U;
	uint64_t x290 = UINT64_MAX;
	int32_t x291 = INT32_MAX;
	volatile int32_t x292 = INT32_MIN;

	t35 = ((x289%(x290/x291))&x292);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x301 = INT16_MIN;
	volatile int8_t x302 = -3;
	uint64_t x303 = 1007LLU;
	static uint64_t x304 = 1162054023764508LLU;
	uint64_t t36 = 41261LLU;

	t36 = ((x301%(x302/x303))&x304);

	if (t36 != 556219252760LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x305 = INT32_MIN;
	static uint16_t x306 = UINT16_MAX;
	volatile int64_t x307 = -1LL;
	volatile int64_t t37 = 3776287663LL;

	t37 = ((x305%(x306/x307))&x308);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x313 = UINT32_MAX;
	volatile int16_t x314 = INT16_MIN;
	uint16_t x315 = 1U;
	static int16_t x316 = 5;

	t38 = ((x313%(x314/x315))&x316);

	if (t38 != 5U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x317 = INT16_MIN;
	int16_t x318 = -1;
	int16_t x319 = -1;
	int32_t x320 = INT32_MAX;
	int32_t t39 = -2058301;

	t39 = ((x317%(x318/x319))&x320);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x325 = 6348;
	static int64_t x326 = -6007952950019LL;
	uint16_t x327 = UINT16_MAX;
	volatile uint64_t x328 = UINT64_MAX;

	t40 = ((x325%(x326/x327))&x328);

	if (t40 != 6348LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x329 = INT8_MIN;
	uint64_t x330 = UINT64_MAX;
	int8_t x331 = INT8_MIN;
	static volatile int16_t x332 = INT16_MAX;
	uint64_t t41 = 39826133594254LLU;

	t41 = ((x329%(x330/x331))&x332);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x333 = -1;
	static int16_t x334 = INT16_MIN;
	int32_t x335 = -25049;
	uint64_t t42 = 50240598LLU;

	t42 = ((x333%(x334/x335))&x336);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x337 = INT8_MIN;
	uint16_t x338 = UINT16_MAX;
	int32_t x339 = -1;
	static int64_t x340 = INT64_MIN;
	static int64_t t43 = INT64_MIN;

	t43 = ((x337%(x338/x339))&x340);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x341 = INT64_MIN;
	uint8_t x342 = 2U;
	int64_t x343 = -1LL;
	static int32_t x344 = INT32_MIN;
	volatile int64_t t44 = 2818217579925LL;

	t44 = ((x341%(x342/x343))&x344);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x349 = INT16_MIN;
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = INT64_MIN;
	volatile int8_t x352 = INT8_MAX;

	t45 = ((x349%(x350/x351))&x352);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MAX;
	uint16_t x356 = 758U;

	t46 = ((x353%(x354/x355))&x356);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x361 = 119U;
	static int32_t x362 = INT32_MIN;
	uint16_t x363 = UINT16_MAX;
	uint64_t x364 = 25380048828LLU;

	t47 = ((x361%(x362/x363))&x364);

	if (t47 != 52LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x365 = 10946U;
	static volatile int64_t x367 = -1LL;
	static volatile int64_t x368 = INT64_MAX;
	int64_t t48 = -3076901344LL;

	t48 = ((x365%(x366/x367))&x368);

	if (t48 != 2LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x373 = -4;
	static int32_t x374 = INT32_MIN;
	int16_t x375 = 1377;
	int32_t t49 = 0;

	t49 = ((x373%(x374/x375))&x376);

	if (t49 != 32764) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x377 = UINT16_MAX;
	int64_t x378 = 52574301862LL;
	int8_t x379 = -1;
	int64_t x380 = INT64_MAX;
	int64_t t50 = -130901495503404LL;

	t50 = ((x377%(x378/x379))&x380);

	if (t50 != 65535LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x381 = INT8_MIN;
	static uint16_t x383 = 10U;
	int8_t x384 = INT8_MIN;
	volatile int32_t t51 = 83;

	t51 = ((x381%(x382/x383))&x384);

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x385 = -1;
	int8_t x387 = INT8_MAX;
	int8_t x388 = INT8_MIN;
	uint64_t t52 = 259085490214516652LLU;

	t52 = ((x385%(x386/x387))&x388);

	if (t52 != 4587369344LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x389 = 237U;
	static int8_t x390 = INT8_MAX;
	static int8_t x391 = INT8_MAX;
	uint32_t x392 = 4164966U;
	volatile uint32_t t53 = 20U;

	t53 = ((x389%(x390/x391))&x392);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x397 = INT32_MIN;
	int32_t x398 = INT32_MAX;
	int64_t x400 = 3LL;

	t54 = ((x397%(x398/x399))&x400);

	if (t54 != 2LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x405 = 3436647296114381LLU;
	volatile int64_t x406 = 7231860596099908LL;
	volatile uint64_t t55 = 106396384512LLU;

	t55 = ((x405%(x406/x407))&x408);

	if (t55 != 3436647296114381LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x414 = UINT8_MAX;
	uint16_t x415 = 239U;
	int16_t x416 = 0;
	static uint32_t t56 = 913650U;

	t56 = ((x413%(x414/x415))&x416);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x421 = INT64_MIN;
	int64_t x422 = INT64_MIN;
	int32_t x423 = INT32_MIN;
	volatile int64_t t57 = -12211736001183091LL;

	t57 = ((x421%(x422/x423))&x424);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x445 = -1;
	int64_t x447 = 89446LL;
	int32_t x448 = INT32_MAX;
	volatile int64_t t58 = 7906123300563686LL;

	t58 = ((x445%(x446/x447))&x448);

	if (t58 != 2147483647LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x449 = UINT16_MAX;
	static volatile int32_t x450 = INT32_MAX;
	static int64_t x452 = -3998152210LL;
	int64_t t59 = 2847263480396LL;

	t59 = ((x449%(x450/x451))&x452);

	if (t59 != 2542LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x466 = UINT64_MAX;
	int16_t x468 = INT16_MIN;
	uint64_t t60 = 17127863615819026LLU;

	t60 = ((x465%(x466/x467))&x468);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x469 = INT32_MAX;
	volatile uint16_t x471 = 28U;
	volatile uint8_t x472 = 1U;
	static uint32_t t61 = 1U;

	t61 = ((x469%(x470/x471))&x472);

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x481 = 3U;
	uint16_t x484 = 41U;
	int32_t t62 = -23470;

	t62 = ((x481%(x482/x483))&x484);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x489 = INT64_MIN;
	int64_t x490 = INT64_MIN;
	int16_t x491 = INT16_MIN;
	int64_t x492 = INT64_MAX;
	volatile int64_t t63 = -26LL;

	t63 = ((x489%(x490/x491))&x492);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x498 = -1;
	static int16_t x499 = -1;
	int64_t x500 = INT64_MIN;
	volatile int64_t t64 = 7482972937522LL;

	t64 = ((x497%(x498/x499))&x500);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x501 = INT32_MIN;
	static uint64_t x502 = 2512844LLU;
	int64_t x503 = 1LL;
	volatile uint8_t x504 = 80U;
	uint64_t t65 = 2551483LLU;

	t65 = ((x501%(x502/x503))&x504);

	if (t65 != 64LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x505 = UINT16_MAX;
	static int64_t x506 = INT64_MIN;
	int32_t x507 = 910;
	int64_t t66 = 459901254LL;

	t66 = ((x505%(x506/x507))&x508);

	if (t66 != 65535LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x509 = INT64_MIN;
	static int16_t x511 = INT16_MAX;
	static uint16_t x512 = 6U;
	static int64_t t67 = -13LL;

	t67 = ((x509%(x510/x511))&x512);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x513 = 346U;
	uint8_t x514 = UINT8_MAX;
	int8_t x515 = INT8_MIN;
	int8_t x516 = 1;

	t68 = ((x513%(x514/x515))&x516);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x518 = 8202394601243545091LLU;
	uint8_t x519 = 6U;
	uint64_t x520 = 153669203978232141LLU;
	static uint64_t t69 = 116032107297939LLU;

	t69 = ((x517%(x518/x519))&x520);

	if (t69 != 475060092018944LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t t70 = 16827989011LLU;

	t70 = ((x529%(x530/x531))&x532);

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x537 = INT16_MAX;
	int16_t x539 = 16;
	int8_t x540 = INT8_MIN;

	t71 = ((x537%(x538/x539))&x540);

	if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x541 = 1U;
	uint32_t x542 = UINT32_MAX;
	static uint16_t x543 = UINT16_MAX;
	volatile int64_t x544 = INT64_MIN;
	int64_t t72 = -10691518218799642LL;

	t72 = ((x541%(x542/x543))&x544);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x549 = INT32_MIN;
	volatile int64_t x550 = -6967902076959107LL;
	static int64_t x551 = -1LL;
	int8_t x552 = INT8_MIN;

	t73 = ((x549%(x550/x551))&x552);

	if (t73 != -2147483648LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x553 = INT64_MAX;
	uint64_t x554 = 646137807138719861LLU;
	volatile uint64_t t74 = 151918485794387LLU;

	t74 = ((x553%(x554/x555))&x556);

	if (t74 != 51LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x564 = UINT32_MAX;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = ((x561%(x562/x563))&x564);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x565 = 1U;
	uint8_t x567 = 89U;
	static uint16_t x568 = UINT16_MAX;
	int32_t t76 = 934310;

	t76 = ((x565%(x566/x567))&x568);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x569 = UINT8_MAX;
	int8_t x570 = INT8_MIN;
	int8_t x571 = INT8_MIN;
	int64_t x572 = -34234304173LL;
	volatile int64_t t77 = 122674945644108LL;

	t77 = ((x569%(x570/x571))&x572);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x593 = UINT32_MAX;
	static int32_t x594 = -6224318;
	uint8_t x595 = UINT8_MAX;
	static uint32_t t78 = 105197U;

	t78 = ((x593%(x594/x595))&x596);

	if (t78 != 24U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x597 = 23U;
	volatile int64_t x598 = 879596982381428LL;
	volatile int64_t x599 = 19631648915687LL;
	volatile int64_t x600 = INT64_MIN;
	static int64_t t79 = 1621233LL;

	t79 = ((x597%(x598/x599))&x600);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x606 = -1;
	int32_t x608 = -109647941;
	int32_t t80 = -222042098;

	t80 = ((x605%(x606/x607))&x608);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x610 = INT8_MIN;
	int8_t x611 = INT8_MAX;
	static int32_t x612 = INT32_MAX;
	int32_t t81 = -78945;

	t81 = ((x609%(x610/x611))&x612);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x625 = 47455880418923LLU;
	static volatile int64_t x626 = INT64_MIN;
	int16_t x627 = INT16_MIN;
	uint32_t x628 = UINT32_MAX;
	static uint64_t t82 = 31LLU;

	t82 = ((x625%(x626/x627))&x628);

	if (t82 != 786765419LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x633 = INT64_MIN;
	int64_t x634 = INT64_MIN;
	int8_t x636 = INT8_MAX;

	t83 = ((x633%(x634/x635))&x636);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x637 = -1;
	volatile int16_t x639 = 2;
	int16_t x640 = INT16_MAX;

	t84 = ((x637%(x638/x639))&x640);

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x653 = 0;
	int8_t x654 = INT8_MIN;
	int8_t x656 = INT8_MIN;
	uint64_t t85 = 127318611637098957LLU;

	t85 = ((x653%(x654/x655))&x656);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x657 = 3881U;
	int16_t x659 = INT16_MIN;

	t86 = ((x657%(x658/x659))&x660);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x665 = UINT32_MAX;
	volatile int32_t x666 = INT32_MIN;
	int32_t x667 = -867;
	uint64_t x668 = 248382580983LLU;
	uint64_t t87 = 480LLU;

	t87 = ((x665%(x666/x667))&x668);

	if (t87 != 145LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x673 = INT64_MIN;
	uint16_t x674 = 5U;
	int64_t x675 = -1LL;
	volatile uint16_t x676 = UINT16_MAX;
	volatile int64_t t88 = -68LL;

	t88 = ((x673%(x674/x675))&x676);

	if (t88 != 65533LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x677 = INT64_MAX;
	int64_t x680 = -466LL;
	volatile uint64_t t89 = 8407537415131476LLU;

	t89 = ((x677%(x678/x679))&x680);

	if (t89 != 4588943610770478LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x685 = -15;
	static int32_t x686 = -96359759;
	int64_t x687 = -1LL;
	volatile int64_t t90 = 53272328759LL;

	t90 = ((x685%(x686/x687))&x688);

	if (t90 != -15LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x705 = UINT8_MAX;
	int16_t x707 = -1;
	int32_t x708 = -1;
	static int32_t t91 = -761007;

	t91 = ((x705%(x706/x707))&x708);

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x709 = -1;
	static int16_t x710 = -2;
	volatile int8_t x711 = -1;
	int32_t x712 = INT32_MAX;
	static int32_t t92 = INT32_MAX;

	t92 = ((x709%(x710/x711))&x712);

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x714 = INT32_MIN;
	int32_t t93 = 4161;

	t93 = ((x713%(x714/x715))&x716);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x717 = UINT16_MAX;
	int16_t x719 = INT16_MAX;
	volatile uint16_t x720 = 20U;
	int32_t t94 = 500640133;

	t94 = ((x717%(x718/x719))&x720);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x743 = INT8_MAX;
	volatile uint64_t t95 = 2598LLU;

	t95 = ((x741%(x742/x743))&x744);

	if (t95 != 2849LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x757 = 2U;
	static volatile int8_t x758 = INT8_MIN;
	volatile uint32_t x759 = 20363U;

	t96 = ((x757%(x758/x759))&x760);

	if (t96 != 2U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x761 = INT16_MIN;
	int16_t x762 = -35;
	static int8_t x763 = -2;
	int16_t x764 = INT16_MAX;

	t97 = ((x761%(x762/x763))&x764);

	if (t97 != 32759) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x766 = -3534652916LL;
	volatile int64_t t98 = 217147067614031340LL;

	t98 = ((x765%(x766/x767))&x768);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x769 = UINT8_MAX;
	volatile int16_t x770 = -510;
	int16_t x771 = -1;
	uint8_t x772 = 0U;
	volatile int32_t t99 = -950218568;

	t99 = ((x769%(x770/x771))&x772);

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

