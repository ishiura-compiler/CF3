#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t1 = 1793220U;
int8_t x13 = INT8_MAX;
volatile int64_t t3 = -3285LL;
int32_t x21 = INT32_MIN;
static volatile int8_t x29 = -1;
uint8_t x41 = UINT8_MAX;
uint16_t x64 = 68U;
volatile uint32_t t8 = 24510U;
static volatile int32_t x66 = INT32_MIN;
uint64_t x67 = 4164114379LLU;
volatile uint64_t t9 = 1942920893514363LLU;
uint64_t x71 = 1537LLU;
int64_t t11 = -123138LL;
int8_t x85 = INT8_MIN;
uint64_t x87 = UINT64_MAX;
int32_t x91 = INT32_MIN;
static volatile uint8_t x99 = UINT8_MAX;
volatile int32_t t14 = -8014919;
int64_t t15 = -22882593678565934LL;
static uint16_t x114 = 1664U;
static volatile uint64_t x117 = 35606721LLU;
int16_t x135 = INT16_MIN;
uint32_t x145 = 58899009U;
int32_t x147 = -1;
int8_t x168 = -1;
int32_t x170 = INT32_MIN;
uint16_t x173 = 5U;
static int64_t t27 = 306743LL;
volatile uint64_t t29 = UINT64_MAX;
volatile uint64_t x203 = UINT64_MAX;
volatile int64_t x204 = 927432902432LL;
static uint8_t x206 = 0U;
static volatile int64_t t33 = 229136582372LL;
uint32_t x252 = 267U;
uint64_t x273 = UINT64_MAX;
static uint64_t x276 = 31535665210295960LLU;
int64_t x279 = -2969600361412LL;
volatile uint16_t x288 = UINT16_MAX;
volatile uint64_t t43 = 88107LLU;
uint32_t x289 = 1730U;
int32_t x290 = 12;
int64_t x302 = -2308560329823830LL;
volatile int8_t x319 = -1;
uint32_t x320 = UINT32_MAX;
uint32_t t46 = 171258901U;
uint64_t x332 = UINT64_MAX;
uint64_t t48 = 2810707700293604LLU;
int16_t x337 = INT16_MIN;
volatile int8_t x350 = INT8_MIN;
volatile uint64_t t51 = 1LLU;
static int32_t x359 = 1;
int8_t x362 = INT8_MIN;
uint64_t t55 = 132073915860982503LLU;
int64_t x390 = INT64_MIN;
volatile uint32_t x395 = 101074U;
int32_t x399 = -1;
int16_t x400 = -15038;
int16_t x404 = INT16_MIN;
volatile uint64_t t61 = 22LLU;
uint32_t x417 = 0U;
static uint64_t x438 = UINT64_MAX;
static uint64_t t64 = 305854820191016LLU;
int8_t x442 = INT8_MIN;
static uint16_t x443 = UINT16_MAX;
volatile int64_t t66 = -27LL;
volatile uint64_t t67 = 320425948366391LLU;
int16_t x477 = INT16_MIN;
static int32_t t69 = -922;
static uint32_t x494 = UINT32_MAX;
int16_t x496 = INT16_MAX;
uint16_t x501 = 346U;
int32_t x504 = -1;
static uint64_t t73 = 3763594833LLU;
volatile uint32_t t74 = 2060308U;
int64_t x525 = -1LL;
int8_t x532 = -1;
uint16_t x537 = 5964U;
int16_t x538 = -112;
uint64_t t79 = 1LLU;
static uint32_t x543 = 11114U;
uint8_t x544 = UINT8_MAX;
volatile uint32_t t80 = 102384188U;
int8_t x546 = INT8_MIN;
volatile int64_t t81 = -1050898856515LL;
uint16_t x555 = 0U;
int32_t t82 = 17;
int32_t x561 = 1799408;
volatile uint64_t x564 = 34054283309LLU;
volatile int16_t x568 = -1;
static int8_t x584 = INT8_MIN;
uint32_t x600 = 258U;
volatile uint64_t t89 = 947LLU;
volatile uint8_t x601 = UINT8_MAX;
uint64_t x608 = UINT64_MAX;
static volatile uint64_t t91 = 8277493085141LLU;
static volatile uint32_t x609 = UINT32_MAX;
volatile int32_t x610 = 13509218;
uint8_t x612 = 0U;
uint64_t x616 = 1677076863830LLU;
uint16_t x629 = 202U;
volatile int32_t t96 = 157195;
static volatile int32_t x634 = -17774121;
uint16_t x638 = 2U;
int8_t x639 = INT8_MIN;
int8_t x649 = -1;
static int16_t x651 = INT16_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static int8_t x2 = -1;
	uint32_t x3 = UINT32_MAX;
	int16_t x4 = -4090;
	uint32_t t0 = 507377030U;

	t0 = (x1+(x2*(x3*x4)));

	if (t0 != 4294963333U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = INT8_MIN;
	volatile uint32_t x10 = 70967U;
	static int32_t x11 = -131;
	uint16_t x12 = UINT16_MAX;

	t1 = (x9+(x10*(x11*x12)));

	if (t1 != 627628709U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x14 = 3U;
	volatile int32_t x15 = -1;
	int64_t x16 = 483030478112584683LL;
	volatile int64_t t2 = 42820567LL;

	t2 = (x13+(x14*(x15*x16)));

	if (t2 != -1449091434337753922LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = 0LL;
	uint32_t x19 = 15142307U;
	volatile int32_t x20 = INT32_MIN;

	t3 = (x17+(x18*(x19*x20)));

	if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = INT16_MIN;
	uint16_t x23 = 1U;
	static int16_t x24 = -1;
	static int32_t t4 = 65437727;

	t4 = (x21+(x22*(x23*x24)));

	if (t4 != -2147450880) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x30 = 42567U;
	uint32_t x31 = 101321304U;
	uint16_t x32 = 6U;
	static uint32_t t5 = 86267550U;

	t5 = (x29+(x30*(x31*x32)));

	if (t5 != 485725807U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x42 = 17U;
	static int16_t x43 = INT16_MAX;
	volatile int16_t x44 = 629;
	volatile int32_t t6 = -13713;

	t6 = (x41+(x42*(x43*x44)));

	if (t6 != 350377786) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = INT8_MIN;
	uint64_t x46 = 3832LLU;
	int8_t x47 = -1;
	int8_t x48 = INT8_MIN;
	uint64_t t7 = 14810746767LLU;

	t7 = (x45+(x46*(x47*x48)));

	if (t7 != 490368LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x61 = 58U;
	static volatile int8_t x62 = 0;
	static volatile uint32_t x63 = 1U;

	t8 = (x61+(x62*(x63*x64)));

	if (t8 != 58U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x65 = INT8_MIN;
	int16_t x68 = -1;

	t9 = (x65+(x66*(x67*x68)));

	if (t9 != 8942367537304174464LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x69 = 1;
	uint8_t x70 = 127U;
	int8_t x72 = INT8_MAX;
	static volatile uint64_t t10 = 2LLU;

	t10 = (x69+(x70*(x71*x72)));

	if (t10 != 24790274LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x77 = -1LL;
	uint8_t x78 = 0U;
	volatile int8_t x79 = -51;
	int8_t x80 = -1;

	t11 = (x77+(x78*(x79*x80)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x86 = 391721U;
	uint32_t x88 = 1423U;
	volatile uint64_t t12 = 1107418621119095LLU;

	t12 = (x85+(x86*(x87*x88)));

	if (t12 != 18446744073152132505LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x89 = -1LL;
	int16_t x90 = -100;
	volatile int64_t x92 = -1LL;
	volatile int64_t t13 = -2785403742539438LL;

	t13 = (x89+(x90*(x91*x92)));

	if (t13 != -214748364801LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x97 = 21U;
	int8_t x98 = -1;
	int8_t x100 = 35;

	t14 = (x97+(x98*(x99*x100)));

	if (t14 != -8904) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x101 = UINT16_MAX;
	int8_t x102 = INT8_MIN;
	int16_t x103 = -1;
	volatile int64_t x104 = -235LL;

	t15 = (x101+(x102*(x103*x104)));

	if (t15 != 35455LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x105 = INT16_MAX;
	int32_t x106 = 652374190;
	volatile uint64_t x107 = UINT64_MAX;
	uint8_t x108 = 2U;
	static uint64_t t16 = 41796343783LLU;

	t16 = (x105+(x106*(x107*x108)));

	if (t16 != 18446744072404836003LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x113 = UINT32_MAX;
	static volatile uint16_t x115 = 10U;
	uint32_t x116 = UINT32_MAX;
	uint32_t t17 = 31651U;

	t17 = (x113+(x114*(x115*x116)));

	if (t17 != 4294950655U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x118 = INT16_MAX;
	int32_t x119 = 1191137;
	static int8_t x120 = 0;
	volatile uint64_t t18 = 5887385862616346470LLU;

	t18 = (x117+(x118*(x119*x120)));

	if (t18 != 35606721LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x121 = UINT16_MAX;
	volatile int64_t x122 = 138126LL;
	int8_t x123 = INT8_MAX;
	volatile uint32_t x124 = 103556U;
	static volatile int64_t t19 = -53531659756LL;

	t19 = (x121+(x122*(x123*x124)));

	if (t19 != 1816579624647LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x133 = INT16_MIN;
	uint64_t x134 = 9085LLU;
	static uint64_t x136 = UINT64_MAX;
	uint64_t t20 = 176085063958688LLU;

	t20 = (x133+(x134*(x135*x136)));

	if (t20 != 297664512LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MIN;
	static int8_t x143 = INT8_MAX;
	int8_t x144 = -1;
	int32_t t21 = -3150492;

	t21 = (x141+(x142*(x143*x144)));

	if (t21 != 16128) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x146 = UINT64_MAX;
	int8_t x148 = 39;
	uint64_t t22 = 51879157837366660LLU;

	t22 = (x145+(x146*(x147*x148)));

	if (t22 != 58899048LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x153 = -767552552235897694LL;
	int8_t x154 = 6;
	volatile int64_t x155 = INT64_MAX;
	uint64_t x156 = UINT64_MAX;
	static uint64_t t23 = 11938558738644801LLU;

	t23 = (x153+(x154*(x155*x156)));

	if (t23 != 17679191521473653928LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x161 = 3091;
	volatile uint32_t x162 = UINT32_MAX;
	int16_t x163 = INT16_MAX;
	int16_t x164 = INT16_MIN;
	volatile uint32_t t24 = 145U;

	t24 = (x161+(x162*(x163*x164)));

	if (t24 != 1073712147U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x165 = -1;
	uint64_t x166 = 13140058334124LLU;
	int8_t x167 = -4;
	volatile uint64_t t25 = 164785LLU;

	t25 = (x165+(x166*(x167*x168)));

	if (t25 != 52560233336495LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x169 = INT8_MIN;
	int32_t x171 = 323044;
	uint32_t x172 = 13844958U;
	uint32_t t26 = 28370301U;

	t26 = (x169+(x170*(x171*x172)));

	if (t26 != 4294967168U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x174 = -589LL;
	static int16_t x175 = INT16_MIN;
	volatile int64_t x176 = -466LL;

	t27 = (x173+(x174*(x175*x176)));

	if (t27 != -8993964027LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x177 = -3061LL;
	uint64_t x178 = 7438294088458114706LLU;
	static int8_t x179 = INT8_MAX;
	uint64_t x180 = UINT64_MAX;
	static volatile uint64_t t28 = 62232LLU;

	t28 = (x177+(x178*(x179*x180)));

	if (t28 != 14567342598716113309LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x181 = INT32_MIN;
	volatile int32_t x182 = INT32_MAX;
	static volatile int32_t x183 = -1;
	uint64_t x184 = UINT64_MAX;

	t29 = (x181+(x182*(x183*x184)));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x197 = 1U;
	volatile int32_t x198 = 3380351;
	int16_t x199 = -49;
	int32_t x200 = -1;
	volatile int32_t t30 = -3;

	t30 = (x197+(x198*(x199*x200)));

	if (t30 != 165637200) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x201 = -1;
	int8_t x202 = 3;
	uint64_t t31 = 1173LLU;

	t31 = (x201+(x202*(x203*x204)));

	if (t31 != 18446741291410844319LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x205 = -1;
	int32_t x207 = INT32_MIN;
	static uint32_t x208 = 23049213U;
	uint32_t t32 = UINT32_MAX;

	t32 = (x205+(x206*(x207*x208)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x209 = INT16_MAX;
	int16_t x210 = INT16_MAX;
	int64_t x211 = 34LL;
	volatile uint8_t x212 = 4U;

	t33 = (x209+(x210*(x211*x212)));

	if (t33 != 4489079LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x217 = UINT8_MAX;
	uint16_t x218 = UINT16_MAX;
	uint32_t x219 = 38869U;
	int16_t x220 = INT16_MIN;
	uint32_t t34 = 239919349U;

	t34 = (x217+(x218*(x219*x220)));

	if (t34 != 3421143295U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x221 = INT16_MAX;
	uint32_t x222 = UINT32_MAX;
	volatile int16_t x223 = INT16_MAX;
	volatile uint16_t x224 = 2283U;
	static uint32_t t35 = 117522U;

	t35 = (x221+(x222*(x223*x224)));

	if (t35 != 4220193002U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x229 = 99;
	volatile int32_t x230 = -1;
	uint16_t x231 = 24U;
	volatile int8_t x232 = -57;
	static volatile int32_t t36 = 6;

	t36 = (x229+(x230*(x231*x232)));

	if (t36 != 1467) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x237 = UINT16_MAX;
	int8_t x238 = -1;
	static volatile int16_t x239 = -1;
	int32_t x240 = -1;
	volatile int32_t t37 = 5923;

	t37 = (x237+(x238*(x239*x240)));

	if (t37 != 65534) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x241 = -1;
	uint64_t x242 = 12615908LLU;
	int16_t x243 = INT16_MAX;
	int32_t x244 = 376;
	uint64_t t38 = 859298395343LLU;

	t38 = (x241+(x242*(x243*x244)));

	if (t38 != 155432931995935LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x249 = 14;
	static int32_t x250 = -1;
	static int32_t x251 = -1;
	static volatile uint32_t t39 = 9U;

	t39 = (x249+(x250*(x251*x252)));

	if (t39 != 281U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x261 = INT64_MIN;
	volatile uint16_t x262 = 0U;
	static volatile int64_t x263 = -1LL;
	int32_t x264 = INT32_MIN;
	int64_t t40 = INT64_MIN;

	t40 = (x261+(x262*(x263*x264)));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x274 = UINT64_MAX;
	int64_t x275 = INT64_MIN;
	uint64_t t41 = UINT64_MAX;

	t41 = (x273+(x274*(x275*x276)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x277 = 3035644;
	uint64_t x278 = UINT64_MAX;
	int16_t x280 = -1;
	volatile uint64_t t42 = 466736416552893LLU;

	t42 = (x277+(x278*(x279*x280)));

	if (t42 != 18446741104112225848LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x285 = INT32_MIN;
	static volatile uint64_t x286 = 2117140114LLU;
	static int16_t x287 = -879;

	t43 = (x285+(x286*(x287*x288)));

	if (t43 != 18324785654252967758LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x291 = 64253683;
	uint64_t x292 = UINT64_MAX;
	static uint64_t t44 = 2259LLU;

	t44 = (x289+(x290*(x291*x292)));

	if (t44 != 18446744072938509150LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x301 = INT64_MIN;
	uint8_t x303 = UINT8_MAX;
	static uint64_t x304 = 1797189088940057158LLU;
	uint64_t t45 = 1186975096727LLU;

	t45 = (x301+(x302*(x303*x304)));

	if (t45 != 11291137188987339652LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x317 = UINT8_MAX;
	int16_t x318 = 52;

	t46 = (x317+(x318*(x319*x320)));

	if (t46 != 307U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x325 = 12U;
	static int16_t x326 = -6;
	int16_t x327 = INT16_MIN;
	int8_t x328 = -2;
	volatile uint32_t t47 = 704553964U;

	t47 = (x325+(x326*(x327*x328)));

	if (t47 != 4294574092U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x329 = -1;
	volatile int8_t x330 = INT8_MAX;
	int32_t x331 = INT32_MAX;

	t48 = (x329+(x330*(x331*x332)));

	if (t48 != 18446743800979128446LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x333 = 7715224LLU;
	uint64_t x334 = 312968489344LLU;
	uint8_t x335 = 34U;
	uint8_t x336 = UINT8_MAX;
	volatile uint64_t t49 = 71480971209551962LLU;

	t49 = (x333+(x334*(x335*x336)));

	if (t49 != 2713436810327704LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x338 = 72;
	int16_t x339 = INT16_MAX;
	int16_t x340 = 13;
	int32_t t50 = 245097;

	t50 = (x337+(x338*(x339*x340)));

	if (t50 != 30637144) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x349 = 17512108175828526LLU;
	uint64_t x351 = 362421578LLU;
	uint64_t x352 = UINT64_MAX;

	t51 = (x349+(x350*(x351*x352)));

	if (t51 != 17512154565790510LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x353 = -1LL;
	int16_t x354 = -1;
	static int32_t x355 = -2268;
	uint64_t x356 = UINT64_MAX;
	uint64_t t52 = 38560794LLU;

	t52 = (x353+(x354*(x355*x356)));

	if (t52 != 18446744073709549347LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x357 = INT8_MAX;
	int8_t x358 = -1;
	static int32_t x360 = -1;
	static int32_t t53 = 0;

	t53 = (x357+(x358*(x359*x360)));

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x361 = INT32_MAX;
	volatile int16_t x363 = INT16_MIN;
	uint32_t x364 = 183049647U;
	uint32_t t54 = 4U;

	t54 = (x361+(x362*(x363*x364)));

	if (t54 != 3955228671U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x373 = INT8_MAX;
	uint64_t x374 = UINT64_MAX;
	uint8_t x375 = UINT8_MAX;
	volatile uint16_t x376 = 2U;

	t55 = (x373+(x374*(x375*x376)));

	if (t55 != 18446744073709551233LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x381 = INT16_MIN;
	int16_t x382 = INT16_MIN;
	int64_t x383 = -1LL;
	uint8_t x384 = 0U;
	int64_t t56 = 241495LL;

	t56 = (x381+(x382*(x383*x384)));

	if (t56 != -32768LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x389 = 886391378LLU;
	uint64_t x391 = 10LLU;
	static volatile uint8_t x392 = 3U;
	static volatile uint64_t t57 = 9191061408110572LLU;

	t57 = (x389+(x390*(x391*x392)));

	if (t57 != 886391378LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x393 = -1;
	volatile uint16_t x394 = 6292U;
	uint8_t x396 = 7U;
	volatile uint32_t t58 = 5603573U;

	t58 = (x393+(x394*(x395*x396)));

	if (t58 != 156735959U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x397 = 4U;
	int64_t x398 = 5771057497955LL;
	int64_t t59 = -67695407788285LL;

	t59 = (x397+(x398*(x399*x400)));

	if (t59 != 86785162654247294LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x401 = 6U;
	int8_t x402 = -16;
	static int16_t x403 = -1;
	volatile int32_t t60 = 1;

	t60 = (x401+(x402*(x403*x404)));

	if (t60 != -524282) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x409 = INT8_MAX;
	int16_t x410 = INT16_MIN;
	volatile uint64_t x411 = UINT64_MAX;
	uint16_t x412 = 39U;

	t61 = (x409+(x410*(x411*x412)));

	if (t61 != 1278079LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x413 = INT16_MAX;
	int8_t x414 = -1;
	volatile int16_t x415 = -2650;
	uint8_t x416 = 5U;
	int32_t t62 = 115940;

	t62 = (x413+(x414*(x415*x416)));

	if (t62 != 46017) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x418 = INT8_MAX;
	uint64_t x419 = 3LLU;
	int64_t x420 = -1LL;
	uint64_t t63 = 4LLU;

	t63 = (x417+(x418*(x419*x420)));

	if (t63 != 18446744073709551235LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x437 = INT64_MIN;
	int16_t x439 = 974;
	volatile int8_t x440 = INT8_MIN;

	t64 = (x437+(x438*(x439*x440)));

	if (t64 != 9223372036854900480LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x441 = INT8_MIN;
	uint8_t x444 = 1U;
	int32_t t65 = 55277;

	t65 = (x441+(x442*(x443*x444)));

	if (t65 != -8388608) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x449 = -32222;
	int8_t x450 = INT8_MIN;
	volatile int64_t x451 = -1LL;
	int16_t x452 = INT16_MAX;

	t66 = (x449+(x450*(x451*x452)));

	if (t66 != 4161954LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x457 = 3247042;
	uint64_t x458 = 0LLU;
	int8_t x459 = INT8_MAX;
	int8_t x460 = INT8_MIN;

	t67 = (x457+(x458*(x459*x460)));

	if (t67 != 3247042LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x478 = 262396498LL;
	int8_t x479 = INT8_MIN;
	static int16_t x480 = -904;
	int64_t t68 = 8398LL;

	t68 = (x477+(x478*(x479*x480)));

	if (t68 != 30362423543808LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x489 = INT32_MAX;
	int8_t x490 = INT8_MIN;
	int8_t x491 = -1;
	int16_t x492 = -1;

	t69 = (x489+(x490*(x491*x492)));

	if (t69 != 2147483519) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x493 = -1;
	uint64_t x495 = 545014765566348667LLU;
	uint64_t t70 = 6895620501857902827LLU;

	t70 = (x493+(x494*(x495*x496)));

	if (t70 != 11482953202847927674LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x502 = INT8_MIN;
	volatile int16_t x503 = -200;
	int32_t t71 = 21379;

	t71 = (x501+(x502*(x503*x504)));

	if (t71 != -25254) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x505 = INT16_MAX;
	uint16_t x506 = UINT16_MAX;
	volatile int8_t x507 = 0;
	volatile uint8_t x508 = 107U;
	int32_t t72 = 26527435;

	t72 = (x505+(x506*(x507*x508)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x509 = 50LL;
	static int8_t x510 = INT8_MIN;
	static int64_t x511 = -1LL;
	uint64_t x512 = UINT64_MAX;

	t73 = (x509+(x510*(x511*x512)));

	if (t73 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x513 = UINT32_MAX;
	int8_t x514 = INT8_MIN;
	int32_t x515 = 63;
	static int32_t x516 = -11091;

	t74 = (x513+(x514*(x515*x516)));

	if (t74 != 89437823U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x517 = 2418130U;
	int16_t x518 = -9;
	int16_t x519 = INT16_MAX;
	int16_t x520 = -1;
	volatile uint32_t t75 = 4936086U;

	t75 = (x517+(x518*(x519*x520)));

	if (t75 != 2713033U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x521 = UINT64_MAX;
	static volatile int8_t x522 = INT8_MIN;
	uint8_t x523 = 1U;
	uint64_t x524 = UINT64_MAX;
	uint64_t t76 = 1496LLU;

	t76 = (x521+(x522*(x523*x524)));

	if (t76 != 127LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x526 = 7325843294870993822LLU;
	int16_t x527 = INT16_MAX;
	uint8_t x528 = UINT8_MAX;
	volatile uint64_t t77 = 156732433828LLU;

	t77 = (x525+(x526*(x527*x528)));

	if (t77 != 4614392763753684381LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x529 = UINT8_MAX;
	int64_t x530 = 1LL;
	uint32_t x531 = 9U;
	static int64_t t78 = -182391LL;

	t78 = (x529+(x530*(x531*x532)));

	if (t78 != 4294967542LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x539 = -1;
	uint64_t x540 = 44726LLU;

	t79 = (x537+(x538*(x539*x540)));

	if (t79 != 5015276LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x541 = INT32_MAX;
	volatile int16_t x542 = 2;

	t80 = (x541+(x542*(x543*x544)));

	if (t80 != 2153151787U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x545 = INT16_MIN;
	static uint16_t x547 = 82U;
	int64_t x548 = -246581LL;

	t81 = (x545+(x546*(x547*x548)));

	if (t81 != 2588081408LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x553 = -1;
	uint16_t x554 = 920U;
	static int16_t x556 = -1;

	t82 = (x553+(x554*(x555*x556)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x562 = INT8_MIN;
	volatile int64_t x563 = -194238775314828LL;
	static volatile uint64_t t83 = 475724947761284273LLU;

	t83 = (x561+(x562*(x563*x564)));

	if (t83 != 14757267234155021040LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x565 = INT32_MIN;
	int64_t x566 = 545LL;
	volatile int32_t x567 = INT32_MAX;
	volatile int64_t t84 = 0LL;

	t84 = (x565+(x566*(x567*x568)));

	if (t84 != -1172526071263LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x569 = -1;
	uint64_t x570 = 6698502875535LLU;
	volatile int8_t x571 = -1;
	uint16_t x572 = 0U;
	uint64_t t85 = UINT64_MAX;

	t85 = (x569+(x570*(x571*x572)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x573 = -5014490LL;
	uint64_t x574 = 3224965127242LLU;
	int8_t x575 = -1;
	uint64_t x576 = UINT64_MAX;
	static volatile uint64_t t86 = 8702705LLU;

	t86 = (x573+(x574*(x575*x576)));

	if (t86 != 3224960112752LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x581 = 38U;
	static int32_t x582 = -652060;
	uint32_t x583 = 101U;
	uint32_t t87 = 13U;

	t87 = (x581+(x582*(x583*x584)));

	if (t87 != 4134864422U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x585 = 1400;
	uint32_t x586 = 111431U;
	int16_t x587 = -11067;
	static volatile int16_t x588 = INT16_MAX;
	uint32_t t88 = 22U;

	t88 = (x585+(x586*(x587*x588)));

	if (t88 != 2857550805U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x597 = 2692686191LLU;
	int16_t x598 = INT16_MIN;
	uint64_t x599 = 2922207594380029LLU;

	t89 = (x597+(x598*(x599*x600)));

	if (t89 != 13873257991135961455LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x602 = 1U;
	int64_t x603 = INT64_MIN;
	static volatile uint64_t x604 = 32602489145770546LLU;
	volatile uint64_t t90 = 32427773LLU;

	t90 = (x601+(x602*(x603*x604)));

	if (t90 != 255LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x605 = INT32_MAX;
	static int16_t x606 = -1;
	uint8_t x607 = 13U;

	t91 = (x605+(x606*(x607*x608)));

	if (t91 != 2147483660LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x611 = INT64_MIN;
	volatile int64_t t92 = -13444584494735388LL;

	t92 = (x609+(x610*(x611*x612)));

	if (t92 != 4294967295LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x613 = INT8_MIN;
	uint32_t x614 = 4217U;
	uint8_t x615 = UINT8_MAX;
	volatile uint64_t t93 = 18132LLU;

	t93 = (x613+(x614*(x615*x616)));

	if (t93 != 1803419449366632922LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x617 = 13U;
	volatile int64_t x618 = -13606101841648LL;
	int64_t x619 = -1LL;
	static uint64_t x620 = 1244239LLU;
	volatile uint64_t t94 = 136971480LLU;

	t94 = (x617+(x618*(x619*x620)));

	if (t94 != 16929242549350265885LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x625 = -3;
	static int32_t x626 = 1;
	static uint32_t x627 = UINT32_MAX;
	int16_t x628 = -20;
	static uint32_t t95 = 31077U;

	t95 = (x625+(x626*(x627*x628)));

	if (t95 != 17U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x630 = 60U;
	uint16_t x631 = 28U;
	static uint8_t x632 = 9U;

	t96 = (x629+(x630*(x631*x632)));

	if (t96 != 15322) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x633 = INT64_MIN;
	static volatile int64_t x635 = -1LL;
	uint32_t x636 = 165391917U;
	volatile int64_t t97 = -19173234996780704LL;

	t97 = (x633+(x634*(x635*x636)));

	if (t97 != -9220432340909595851LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x637 = INT16_MAX;
	uint64_t x640 = UINT64_MAX;
	static uint64_t t98 = 4202101128LLU;

	t98 = (x637+(x638*(x639*x640)));

	if (t98 != 33023LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x650 = 0U;
	volatile uint32_t x652 = 90967850U;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = (x649+(x650*(x651*x652)));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

