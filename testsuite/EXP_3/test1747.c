#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x1 = 295990207631063LLU;
static int64_t x4 = 3106LL;
static volatile int32_t x6 = 8;
uint64_t x7 = 125555734458LLU;
static uint64_t t1 = 410725175790152319LLU;
int64_t x13 = -1LL;
int32_t x17 = 2;
uint16_t x20 = 18772U;
volatile uint8_t x31 = 6U;
int16_t x32 = -1;
volatile uint64_t x33 = 29850678169101LLU;
volatile int64_t x35 = -1LL;
uint64_t t5 = 403447079888445LLU;
static volatile int16_t x46 = INT16_MIN;
uint32_t x54 = 12200U;
int32_t x55 = 975812;
int8_t x57 = INT8_MIN;
uint32_t x73 = 28741U;
int16_t x77 = -1;
int32_t x81 = INT32_MIN;
int64_t x87 = INT64_MAX;
uint32_t x88 = UINT32_MAX;
static volatile uint64_t x90 = UINT64_MAX;
int64_t x94 = INT64_MAX;
int32_t x95 = INT32_MIN;
int8_t x96 = -1;
static uint64_t x105 = 17281281953269041LLU;
int16_t x137 = -1;
int32_t x139 = INT32_MAX;
int64_t x141 = INT64_MIN;
int8_t x145 = -55;
uint16_t x146 = 40U;
static int64_t t27 = 59895045451480241LL;
int64_t x150 = INT64_MIN;
int16_t x155 = -5;
volatile int8_t x174 = INT8_MIN;
uint8_t x175 = UINT8_MAX;
int32_t t32 = -21;
int64_t t33 = -510230LL;
int8_t x216 = 1;
int64_t x239 = INT64_MAX;
int8_t x251 = INT8_MAX;
int8_t x252 = 4;
uint32_t x254 = UINT32_MAX;
int8_t x256 = -2;
int32_t x262 = INT32_MIN;
static int32_t x264 = INT32_MIN;
int8_t x271 = -6;
volatile int64_t t43 = -5168367275831477LL;
int64_t x300 = -1LL;
uint16_t x311 = 1081U;
int64_t t52 = -364348LL;
int16_t x321 = INT16_MIN;
volatile int32_t x338 = INT32_MIN;
int64_t x339 = INT64_MIN;
int8_t x342 = -3;
int32_t x344 = -1;
int8_t x346 = -1;
int16_t x347 = 15;
uint16_t x350 = 6257U;
int16_t x360 = 1483;
static uint32_t x361 = 1139U;
int32_t x362 = -245697;
uint8_t x365 = 2U;
volatile int64_t t61 = -125014LL;
static int16_t x369 = INT16_MIN;
int8_t x370 = INT8_MIN;
uint64_t x376 = 1010493082941370816LLU;
int8_t x380 = INT8_MIN;
int8_t x382 = -1;
volatile int64_t t66 = 257145535LL;
int16_t x393 = INT16_MIN;
int8_t x399 = INT8_MAX;
int32_t x402 = INT32_MAX;
int64_t x412 = INT64_MAX;
int16_t x417 = -1;
int16_t x434 = -1;
int16_t x435 = -9694;
uint64_t x438 = UINT64_MAX;
uint64_t t78 = 15111973745618322LLU;
static uint64_t x461 = UINT64_MAX;
uint16_t x462 = 13648U;
uint64_t t82 = 88809605LLU;
int32_t x469 = -1;
static int32_t x475 = INT32_MIN;
static int64_t t86 = 10860082353060LL;
uint32_t x506 = 1U;
int64_t x508 = INT64_MAX;
uint16_t x519 = 331U;
static int8_t x520 = 6;
static volatile uint64_t t92 = 3182332LLU;
static int16_t x542 = 2;
uint16_t x552 = 80U;
static int16_t x557 = INT16_MIN;
int64_t x558 = INT64_MAX;
uint16_t x562 = 2U;
volatile uint16_t x564 = 1U;


void f0(void) {
	int8_t x2 = -1;
	volatile int8_t x3 = INT8_MIN;
	uint64_t t0 = 1539458704307LLU;

	t0 = ((x1%x2)%(x3&x4));

	if (t0 != 1751LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 3U;
	uint16_t x8 = 8128U;

	t1 = ((x5%x6)%(x7&x8));

	if (t1 != 3LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x14 = INT8_MIN;
	int64_t x15 = INT64_MAX;
	uint64_t x16 = 966937584LLU;
	volatile uint64_t t2 = 197820660234091923LLU;

	t2 = ((x13%x14)%(x15&x16));

	if (t2 != 169469247LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x18 = 36U;
	int32_t x19 = -1;
	int32_t t3 = -5749833;

	t3 = ((x17%x18)%(x19&x20));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x29 = 45874983983159LLU;
	volatile int8_t x30 = -2;
	uint64_t t4 = 32521819LLU;

	t4 = ((x29%x30)%(x31&x32));

	if (t4 != 5LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x34 = INT64_MIN;
	static int16_t x36 = -3;

	t5 = ((x33%x34)%(x35&x36));

	if (t5 != 29850678169101LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x41 = -1;
	int32_t x42 = INT32_MAX;
	uint64_t x43 = 29187032689LLU;
	static int8_t x44 = INT8_MAX;
	volatile uint64_t t6 = 18046864LLU;

	t6 = ((x41%x42)%(x43&x44));

	if (t6 != 29LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = -1;
	uint64_t x47 = UINT64_MAX;
	static volatile int32_t x48 = INT32_MIN;
	uint64_t t7 = 29566605LLU;

	t7 = ((x45%x46)%(x47&x48));

	if (t7 != 2147483647LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x53 = INT16_MIN;
	int32_t x56 = -469475;
	uint32_t t8 = 1307509U;

	t8 = ((x53%x54)%(x55&x56));

	if (t8 != 9928U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x58 = 5141LL;
	int8_t x59 = -8;
	volatile int32_t x60 = -73711;
	volatile int64_t t9 = -153815593544037961LL;

	t9 = ((x57%x58)%(x59&x60));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x61 = 33839025LLU;
	volatile int32_t x62 = -19050808;
	int32_t x63 = -1;
	volatile int8_t x64 = INT8_MIN;
	volatile uint64_t t10 = 456006205935LLU;

	t10 = ((x61%x62)%(x63&x64));

	if (t10 != 33839025LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x74 = UINT64_MAX;
	uint64_t x75 = 71126037290303803LLU;
	int16_t x76 = INT16_MIN;
	uint64_t t11 = 14854584778201101LLU;

	t11 = ((x73%x74)%(x75&x76));

	if (t11 != 28741LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x78 = INT8_MIN;
	int8_t x79 = INT8_MIN;
	int32_t x80 = -1;
	int32_t t12 = 312743786;

	t12 = ((x77%x78)%(x79&x80));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x82 = INT32_MIN;
	int32_t x83 = -1;
	int64_t x84 = 1LL;
	static int64_t t13 = 120510LL;

	t13 = ((x81%x82)%(x83&x84));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x85 = INT16_MIN;
	uint16_t x86 = 26U;
	int64_t t14 = -14225LL;

	t14 = ((x85%x86)%(x87&x88));

	if (t14 != -8LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x89 = 3525093653LLU;
	static uint8_t x91 = UINT8_MAX;
	volatile uint16_t x92 = 4003U;
	volatile uint64_t t15 = 20407458LLU;

	t15 = ((x89%x90)%(x91&x92));

	if (t15 != 70LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x93 = INT64_MIN;
	int64_t t16 = -7313194LL;

	t16 = ((x93%x94)%(x95&x96));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x101 = 0U;
	int64_t x102 = INT64_MIN;
	volatile uint16_t x103 = 204U;
	volatile uint16_t x104 = UINT16_MAX;
	volatile int64_t t17 = 38657519397626LL;

	t17 = ((x101%x102)%(x103&x104));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x106 = -58LL;
	volatile int32_t x107 = INT32_MAX;
	static int16_t x108 = -59;
	volatile uint64_t t18 = 14011657LLU;

	t18 = ((x105%x106)%(x107&x108));

	if (t18 != 476262105LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x109 = INT64_MIN;
	int32_t x110 = INT32_MAX;
	uint16_t x111 = 2U;
	int16_t x112 = -454;
	volatile int64_t t19 = 2LL;

	t19 = ((x109%x110)%(x111&x112));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x113 = INT16_MAX;
	int16_t x114 = -11415;
	static int8_t x115 = -1;
	static int16_t x116 = -1;
	volatile int32_t t20 = 59;

	t20 = ((x113%x114)%(x115&x116));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x117 = UINT64_MAX;
	volatile uint8_t x118 = 7U;
	volatile int16_t x119 = -1;
	static int32_t x120 = -880;
	volatile uint64_t t21 = 3669566290172LLU;

	t21 = ((x117%x118)%(x119&x120));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x121 = 3U;
	static uint16_t x122 = UINT16_MAX;
	int16_t x123 = -232;
	int32_t x124 = -28;
	volatile int32_t t22 = 0;

	t22 = ((x121%x122)%(x123&x124));

	if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x129 = 1139LLU;
	uint64_t x130 = 886387395384397535LLU;
	volatile int32_t x131 = INT32_MAX;
	uint32_t x132 = 1475925431U;
	static volatile uint64_t t23 = 121787LLU;

	t23 = ((x129%x130)%(x131&x132));

	if (t23 != 1139LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x133 = 158LL;
	volatile uint8_t x134 = 80U;
	static uint64_t x135 = UINT64_MAX;
	int16_t x136 = INT16_MAX;
	uint64_t t24 = 79LLU;

	t24 = ((x133%x134)%(x135&x136));

	if (t24 != 78LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x138 = INT64_MIN;
	volatile int16_t x140 = -1;
	volatile int64_t t25 = -1445529714392702790LL;

	t25 = ((x137%x138)%(x139&x140));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x142 = 315189LL;
	uint64_t x143 = 1682267146LLU;
	uint16_t x144 = 3U;
	uint64_t t26 = 306339608LLU;

	t26 = ((x141%x142)%(x143&x144));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x147 = INT64_MIN;
	int64_t x148 = -22387792922LL;

	t27 = ((x145%x146)%(x147&x148));

	if (t27 != -15LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x149 = 1U;
	int32_t x151 = -3701;
	static uint64_t x152 = 28984LLU;
	static uint64_t t28 = 3LLU;

	t28 = ((x149%x150)%(x151&x152));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = -1;
	static uint8_t x154 = UINT8_MAX;
	uint32_t x156 = UINT32_MAX;
	static volatile uint32_t t29 = 234658U;

	t29 = ((x153%x154)%(x155&x156));

	if (t29 != 4U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x157 = 27661;
	int64_t x158 = -94000LL;
	int32_t x159 = -1;
	uint64_t x160 = 4308335LLU;
	volatile uint64_t t30 = 42775444876734LLU;

	t30 = ((x157%x158)%(x159&x160));

	if (t30 != 27661LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x161 = -1;
	uint8_t x162 = 6U;
	volatile int16_t x163 = INT16_MIN;
	volatile int64_t x164 = -1LL;
	int64_t t31 = 297601397849784143LL;

	t31 = ((x161%x162)%(x163&x164));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = INT16_MIN;
	int8_t x176 = 15;

	t32 = ((x173%x174)%(x175&x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x177 = INT16_MAX;
	int64_t x178 = INT64_MAX;
	volatile uint32_t x179 = 203498928U;
	int16_t x180 = -14670;

	t33 = ((x177%x178)%(x179&x180));

	if (t33 != 32767LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x181 = INT64_MAX;
	volatile int8_t x182 = INT8_MAX;
	int64_t x183 = -1LL;
	int8_t x184 = -31;
	int64_t t34 = 220224314895966640LL;

	t34 = ((x181%x182)%(x183&x184));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x193 = 953LL;
	uint64_t x194 = 191433091868652466LLU;
	uint16_t x195 = 18118U;
	uint8_t x196 = UINT8_MAX;
	volatile uint64_t t35 = 1LLU;

	t35 = ((x193%x194)%(x195&x196));

	if (t35 != 161LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x201 = -3122278551730LL;
	uint32_t x202 = UINT32_MAX;
	int64_t x203 = -479984LL;
	int16_t x204 = -1;
	int64_t t36 = 637450539384175LL;

	t36 = ((x201%x202)%(x203&x204));

	if (t36 != -113304LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x213 = 0U;
	static volatile uint64_t x214 = UINT64_MAX;
	int64_t x215 = INT64_MAX;
	static uint64_t t37 = 28624LLU;

	t37 = ((x213%x214)%(x215&x216));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x237 = 328911928602149LL;
	uint16_t x238 = 6815U;
	int16_t x240 = INT16_MIN;
	int64_t t38 = -7LL;

	t38 = ((x237%x238)%(x239&x240));

	if (t38 != 5464LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x249 = -23030;
	int64_t x250 = 505032LL;
	volatile int64_t t39 = -34547770549540LL;

	t39 = ((x249%x250)%(x251&x252));

	if (t39 != -2LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x253 = 0U;
	uint64_t x255 = UINT64_MAX;
	volatile uint64_t t40 = 673LLU;

	t40 = ((x253%x254)%(x255&x256));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x257 = 3274U;
	static uint64_t x258 = UINT64_MAX;
	uint64_t x259 = 19652LLU;
	int64_t x260 = -521334LL;
	uint64_t t41 = 221256068333LLU;

	t41 = ((x257%x258)%(x259&x260));

	if (t41 != 1098LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x261 = -1;
	int8_t x263 = INT8_MIN;
	int32_t t42 = -1;

	t42 = ((x261%x262)%(x263&x264));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x269 = INT64_MAX;
	static volatile int32_t x270 = -1;
	int8_t x272 = INT8_MAX;

	t43 = ((x269%x270)%(x271&x272));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x277 = UINT64_MAX;
	uint64_t x278 = 3134073142LLU;
	int32_t x279 = INT32_MIN;
	int64_t x280 = INT64_MAX;
	volatile uint64_t t44 = 2548411949503979530LLU;

	t44 = ((x277%x278)%(x279&x280));

	if (t44 != 1250301077LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x281 = 5754579U;
	uint8_t x282 = 116U;
	int8_t x283 = INT8_MIN;
	uint64_t x284 = 13583275603070391LLU;
	uint64_t t45 = 519646LLU;

	t45 = ((x281%x282)%(x283&x284));

	if (t45 != 51LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x289 = INT32_MAX;
	uint16_t x290 = 7542U;
	int8_t x291 = -1;
	static int32_t x292 = 24355;
	volatile int32_t t46 = -191478608;

	t46 = ((x289%x290)%(x291&x292));

	if (t46 != 4735) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x293 = INT32_MAX;
	uint32_t x294 = UINT32_MAX;
	uint16_t x295 = 10U;
	int32_t x296 = 2393868;
	static uint32_t t47 = 525U;

	t47 = ((x293%x294)%(x295&x296));

	if (t47 != 7U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x297 = INT8_MIN;
	int32_t x298 = -21030;
	static uint64_t x299 = 840033140210LLU;
	uint64_t t48 = 29885940070LLU;

	t48 = ((x297%x298)%(x299&x300));

	if (t48 != 209843027458LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x305 = UINT8_MAX;
	int64_t x306 = 5787LL;
	uint8_t x307 = 35U;
	int16_t x308 = INT16_MAX;
	int64_t t49 = 53LL;

	t49 = ((x305%x306)%(x307&x308));

	if (t49 != 10LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x309 = 3;
	static uint8_t x310 = UINT8_MAX;
	volatile int16_t x312 = -1;
	volatile int32_t t50 = 27045433;

	t50 = ((x309%x310)%(x311&x312));

	if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x313 = -4965;
	int8_t x314 = -1;
	static volatile uint32_t x315 = 1449982U;
	uint8_t x316 = UINT8_MAX;
	uint32_t t51 = 209578465U;

	t51 = ((x313%x314)%(x315&x316));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x317 = 0;
	int8_t x318 = -1;
	int64_t x319 = -976060LL;
	int16_t x320 = -1;

	t52 = ((x317%x318)%(x319&x320));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x322 = 54568865LLU;
	volatile int8_t x323 = INT8_MIN;
	static volatile int16_t x324 = INT16_MIN;
	uint64_t t53 = 14810897LLU;

	t53 = ((x321%x322)%(x323&x324));

	if (t53 != 46040223LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x329 = UINT16_MAX;
	volatile int32_t x330 = INT32_MIN;
	volatile int16_t x331 = -1;
	uint8_t x332 = 74U;
	int32_t t54 = -563;

	t54 = ((x329%x330)%(x331&x332));

	if (t54 != 45) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x337 = 12767613U;
	static int32_t x340 = -1;
	int64_t t55 = 4694868743433LL;

	t55 = ((x337%x338)%(x339&x340));

	if (t55 != 12767613LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x341 = 1U;
	int8_t x343 = INT8_MIN;
	volatile int32_t t56 = 83129839;

	t56 = ((x341%x342)%(x343&x344));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x345 = 56737895730LLU;
	uint16_t x348 = 14655U;
	volatile uint64_t t57 = 55LLU;

	t57 = ((x345%x346)%(x347&x348));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x349 = INT16_MIN;
	static uint32_t x351 = 608312U;
	volatile uint64_t x352 = 704540161457831LLU;
	uint64_t t58 = 2LLU;

	t58 = ((x349%x350)%(x351&x352));

	if (t58 != 124725LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x357 = -1;
	static uint16_t x358 = UINT16_MAX;
	volatile int64_t x359 = -1LL;
	static volatile int64_t t59 = -5798772804LL;

	t59 = ((x357%x358)%(x359&x360));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x363 = INT32_MIN;
	int16_t x364 = -29;
	volatile uint32_t t60 = 60786U;

	t60 = ((x361%x362)%(x363&x364));

	if (t60 != 1139U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x366 = INT16_MIN;
	int64_t x367 = -388801778LL;
	int32_t x368 = INT32_MAX;

	t61 = ((x365%x366)%(x367&x368));

	if (t61 != 2LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x371 = INT32_MIN;
	static int64_t x372 = INT64_MIN;
	volatile int64_t t62 = -5LL;

	t62 = ((x369%x370)%(x371&x372));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x373 = UINT64_MAX;
	uint16_t x374 = 3879U;
	uint16_t x375 = 3890U;
	uint64_t t63 = 3066290813LLU;

	t63 = ((x373%x374)%(x375&x376));

	if (t63 != 106LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x377 = INT8_MIN;
	static int8_t x378 = INT8_MAX;
	volatile uint64_t x379 = 1613LLU;
	volatile uint64_t t64 = 3LLU;

	t64 = ((x377%x378)%(x379&x380));

	if (t64 != 1023LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x381 = -1;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = 619729LL;
	volatile uint64_t t65 = 1975481526LLU;

	t65 = ((x381%x382)%(x383&x384));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x385 = 1207;
	int64_t x386 = INT64_MAX;
	uint16_t x387 = 13701U;
	int8_t x388 = INT8_MAX;

	t66 = ((x385%x386)%(x387&x388));

	if (t66 != 2LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x389 = INT8_MIN;
	static volatile uint16_t x390 = 120U;
	int64_t x391 = -1LL;
	volatile int16_t x392 = -4558;
	int64_t t67 = 4048287998001LL;

	t67 = ((x389%x390)%(x391&x392));

	if (t67 != -8LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x394 = 45;
	int8_t x395 = INT8_MAX;
	static volatile uint16_t x396 = 4898U;
	volatile int32_t t68 = -79257514;

	t68 = ((x393%x394)%(x395&x396));

	if (t68 != -8) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x397 = INT16_MIN;
	int32_t x398 = INT32_MIN;
	int32_t x400 = -72135;
	volatile int32_t t69 = -913307937;

	t69 = ((x397%x398)%(x399&x400));

	if (t69 != -50) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x401 = 101339843149209902LLU;
	uint16_t x403 = UINT16_MAX;
	int16_t x404 = INT16_MIN;
	volatile uint64_t t70 = 41899984147316761LLU;

	t70 = ((x401%x402)%(x403&x404));

	if (t70 != 12615LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x405 = 808482946369LL;
	int16_t x406 = -1;
	int8_t x407 = INT8_MAX;
	uint32_t x408 = 7408U;
	int64_t t71 = -3393501307LL;

	t71 = ((x405%x406)%(x407&x408));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x409 = INT32_MAX;
	uint64_t x410 = 10LLU;
	volatile int8_t x411 = INT8_MIN;
	static uint64_t t72 = 3160577850432873034LLU;

	t72 = ((x409%x410)%(x411&x412));

	if (t72 != 7LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x413 = 429;
	int8_t x414 = INT8_MAX;
	static volatile uint64_t x415 = UINT64_MAX;
	static volatile int32_t x416 = INT32_MAX;
	static uint64_t t73 = 224018560383LLU;

	t73 = ((x413%x414)%(x415&x416));

	if (t73 != 48LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x418 = -18;
	volatile int8_t x419 = INT8_MAX;
	static volatile uint64_t x420 = 897027278213612LLU;
	volatile uint64_t t74 = 2LLU;

	t74 = ((x417%x418)%(x419&x420));

	if (t74 != 51LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x421 = INT16_MIN;
	int64_t x422 = -88291633398230LL;
	int16_t x423 = -1;
	int16_t x424 = INT16_MAX;
	static int64_t t75 = -7179470282938893LL;

	t75 = ((x421%x422)%(x423&x424));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x429 = -1LL;
	int8_t x430 = -1;
	int8_t x431 = INT8_MAX;
	int8_t x432 = INT8_MAX;
	int64_t t76 = 0LL;

	t76 = ((x429%x430)%(x431&x432));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x433 = UINT8_MAX;
	int16_t x436 = 27;
	int32_t t77 = 12851;

	t77 = ((x433%x434)%(x435&x436));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x437 = 2113158U;
	int16_t x439 = -1;
	static int64_t x440 = -85326LL;

	t78 = ((x437%x438)%(x439&x440));

	if (t78 != 2113158LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x449 = 9872U;
	int16_t x450 = INT16_MIN;
	int16_t x451 = INT16_MAX;
	volatile uint8_t x452 = UINT8_MAX;
	volatile uint32_t t79 = 52U;

	t79 = ((x449%x450)%(x451&x452));

	if (t79 != 182U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x453 = -29896154;
	int64_t x454 = 454528562417376LL;
	int8_t x455 = INT8_MIN;
	volatile int32_t x456 = -1;
	int64_t t80 = 4041270LL;

	t80 = ((x453%x454)%(x455&x456));

	if (t80 != -90LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x457 = 0;
	static int32_t x458 = -73392;
	volatile int64_t x459 = 15513LL;
	uint16_t x460 = UINT16_MAX;
	volatile int64_t t81 = 0LL;

	t81 = ((x457%x458)%(x459&x460));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x463 = -2891;
	volatile uint8_t x464 = UINT8_MAX;

	t82 = ((x461%x462)%(x463&x464));

	if (t82 != 147LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x470 = INT64_MAX;
	volatile uint32_t x471 = UINT32_MAX;
	int8_t x472 = -1;
	static volatile int64_t t83 = 12819143507LL;

	t83 = ((x469%x470)%(x471&x472));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x473 = INT8_MIN;
	volatile int64_t x474 = 3712574LL;
	int64_t x476 = INT64_MIN;
	int64_t t84 = -238261027062268982LL;

	t84 = ((x473%x474)%(x475&x476));

	if (t84 != -128LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x477 = 114U;
	static int32_t x478 = -1;
	int32_t x479 = 5;
	static int64_t x480 = INT64_MAX;
	int64_t t85 = 70470893LL;

	t85 = ((x477%x478)%(x479&x480));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x481 = INT64_MIN;
	int32_t x482 = INT32_MIN;
	static int64_t x483 = -63997897874LL;
	uint32_t x484 = 5U;

	t86 = ((x481%x482)%(x483&x484));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x489 = -1;
	static volatile int8_t x490 = -1;
	static volatile int8_t x491 = INT8_MAX;
	volatile uint8_t x492 = 1U;
	static volatile int32_t t87 = -827737;

	t87 = ((x489%x490)%(x491&x492));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x505 = UINT32_MAX;
	int64_t x507 = INT64_MAX;
	volatile int64_t t88 = -361639LL;

	t88 = ((x505%x506)%(x507&x508));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x509 = 1LLU;
	uint8_t x510 = 24U;
	int16_t x511 = -1;
	int64_t x512 = INT64_MAX;
	volatile uint64_t t89 = 3253010LLU;

	t89 = ((x509%x510)%(x511&x512));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x513 = -1;
	volatile int16_t x514 = INT16_MIN;
	int8_t x515 = -1;
	uint8_t x516 = 19U;
	volatile int32_t t90 = -939002791;

	t90 = ((x513%x514)%(x515&x516));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x517 = -1;
	uint8_t x518 = 14U;
	static int32_t t91 = -236;

	t91 = ((x517%x518)%(x519&x520));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x529 = INT16_MAX;
	uint64_t x530 = UINT64_MAX;
	int32_t x531 = -1;
	uint32_t x532 = 4U;

	t92 = ((x529%x530)%(x531&x532));

	if (t92 != 3LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x533 = -1;
	int64_t x534 = -2016557LL;
	int64_t x535 = -1LL;
	int8_t x536 = INT8_MIN;
	int64_t t93 = -412154951LL;

	t93 = ((x533%x534)%(x535&x536));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x541 = 6488;
	volatile int16_t x543 = INT16_MIN;
	static int64_t x544 = INT64_MIN;
	volatile int64_t t94 = 2672342680748019LL;

	t94 = ((x541%x542)%(x543&x544));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x545 = 11U;
	int64_t x546 = INT64_MAX;
	int16_t x547 = INT16_MAX;
	static int16_t x548 = -229;
	volatile int64_t t95 = -1LL;

	t95 = ((x545%x546)%(x547&x548));

	if (t95 != 11LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x549 = -1209;
	uint8_t x550 = 1U;
	int32_t x551 = -684642;
	volatile int32_t t96 = -76604;

	t96 = ((x549%x550)%(x551&x552));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x559 = 13U;
	int32_t x560 = INT32_MAX;
	volatile int64_t t97 = 782420646442010LL;

	t97 = ((x557%x558)%(x559&x560));

	if (t97 != -8LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x561 = -7;
	uint8_t x563 = UINT8_MAX;
	volatile int32_t t98 = -29;

	t98 = ((x561%x562)%(x563&x564));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x569 = INT32_MIN;
	volatile uint64_t x570 = 55000416LLU;
	int64_t x571 = INT64_MAX;
	volatile int16_t x572 = 1761;
	volatile uint64_t t99 = 584748LLU;

	t99 = ((x569%x570)%(x571&x572));

	if (t99 != 182LLU) { NG(); } else { ; }
	
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

