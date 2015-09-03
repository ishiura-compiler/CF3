#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MIN;
int32_t t0 = 502344003;
int8_t x15 = -1;
volatile uint16_t x17 = 15850U;
volatile uint16_t x21 = 10935U;
uint64_t x31 = UINT64_MAX;
static uint32_t x35 = 1058U;
volatile uint32_t t8 = 30921231U;
uint64_t x72 = 196674506LLU;
volatile int32_t x73 = INT32_MAX;
int32_t x95 = -1;
int64_t x98 = -3098539108207647LL;
int32_t x101 = 112548878;
static int32_t t18 = -1;
int64_t x128 = INT64_MIN;
volatile int16_t x164 = 2157;
int32_t x172 = INT32_MIN;
int64_t x174 = 307943LL;
uint16_t x195 = 2604U;
uint32_t x198 = UINT32_MAX;
static uint8_t x215 = 37U;
int64_t x223 = -1675681963201530LL;
int32_t t33 = 102;
uint8_t x253 = UINT8_MAX;
int64_t x254 = INT64_MIN;
static int64_t x291 = -42024165914566LL;
int8_t x292 = INT8_MIN;
int32_t x294 = -1062147;
static uint64_t x306 = 1674255LLU;
uint64_t t43 = 2725LLU;
uint16_t x325 = UINT16_MAX;
int32_t x328 = -1;
uint64_t x348 = UINT64_MAX;
int64_t x360 = 11813LL;
int8_t x362 = INT8_MAX;
static int16_t x363 = INT16_MIN;
static uint32_t x375 = 8U;
uint16_t x381 = 1U;
uint16_t x401 = 7554U;
volatile int32_t t52 = 1;
volatile uint32_t x409 = 7446U;
uint8_t x410 = UINT8_MAX;
volatile uint32_t t53 = 290516261U;
static volatile uint8_t x414 = 12U;
int32_t x416 = INT32_MIN;
static uint32_t t54 = 26549751U;
static volatile int16_t x420 = INT16_MIN;
int8_t x427 = INT8_MIN;
uint16_t x432 = 23U;
int32_t x448 = INT32_MIN;
int16_t x451 = -391;
static int32_t x466 = -3;
static uint16_t x467 = 1066U;
uint32_t x468 = 4843608U;
int32_t x471 = INT32_MIN;
volatile int8_t x482 = INT8_MAX;
uint64_t t68 = UINT64_MAX;
static int16_t x534 = INT16_MAX;
int64_t x548 = INT64_MIN;
uint8_t x555 = UINT8_MAX;
static uint32_t x557 = UINT32_MAX;
int64_t x560 = 27274LL;
volatile uint32_t t76 = 236506399U;
int64_t x566 = 647LL;
volatile uint64_t t77 = 58LLU;
uint16_t x594 = 46U;
static int32_t x598 = 1;
int32_t t82 = 1;
int16_t x604 = INT16_MIN;
uint32_t t83 = 219767U;
uint64_t x632 = 961963904LLU;
volatile uint32_t x645 = 12403U;
int8_t x648 = INT8_MIN;
int16_t x651 = INT16_MIN;
int8_t x652 = -1;
int8_t x655 = -1;
uint64_t x660 = UINT64_MAX;
volatile uint64_t x663 = UINT64_MAX;
uint8_t x671 = 3U;
volatile int8_t x682 = -3;
int32_t t95 = -6383;
int32_t x689 = 30371356;
int8_t x693 = 1;
uint64_t x695 = UINT64_MAX;
int32_t x706 = INT32_MIN;
static uint32_t x707 = 136009650U;
volatile int32_t t98 = -56904;
uint32_t x711 = UINT32_MAX;


void f0(void) {
	volatile int32_t x1 = 127;
	int32_t x2 = INT32_MIN;
	int32_t x3 = INT32_MAX;

	t0 = (x1>>((x2<=x3)%x4));

	if (t0 != 63) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = 0;
	int16_t x14 = -411;
	int64_t x16 = -1LL;
	volatile int32_t t1 = -470;

	t1 = (x13>>((x14<=x15)%x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x18 = 1370;
	volatile int32_t x19 = -1;
	volatile uint16_t x20 = UINT16_MAX;
	volatile int32_t t2 = 3434819;

	t2 = (x17>>((x18<=x19)%x20));

	if (t2 != 15850) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x22 = -184;
	static int64_t x23 = INT64_MAX;
	uint16_t x24 = 26U;
	int32_t t3 = 4;

	t3 = (x21>>((x22<=x23)%x24));

	if (t3 != 5467) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = UINT8_MAX;
	static int64_t x26 = 24280722LL;
	uint8_t x27 = 19U;
	int8_t x28 = INT8_MIN;
	volatile int32_t t4 = -11948568;

	t4 = (x25>>((x26<=x27)%x28));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = 4510424;
	volatile int64_t x30 = INT64_MIN;
	int64_t x32 = -29491797399122806LL;
	int32_t t5 = 1382247;

	t5 = (x29>>((x30<=x31)%x32));

	if (t5 != 2255212) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = 53636909;
	int64_t x34 = -11587502LL;
	uint8_t x36 = 8U;
	static int32_t t6 = -188;

	t6 = (x33>>((x34<=x35)%x36));

	if (t6 != 26818454) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 11649120U;
	static int64_t x38 = -172LL;
	int32_t x39 = INT32_MAX;
	volatile int64_t x40 = -202968863494013818LL;
	static volatile uint32_t t7 = 148839U;

	t7 = (x37>>((x38<=x39)%x40));

	if (t7 != 5824560U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 1403U;
	volatile uint64_t x42 = UINT64_MAX;
	int64_t x43 = 1048627331843463LL;
	int32_t x44 = -1;

	t8 = (x41>>((x42<=x43)%x44));

	if (t8 != 1403U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = UINT32_MAX;
	int8_t x54 = INT8_MAX;
	volatile int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MAX;
	volatile uint32_t t9 = UINT32_MAX;

	t9 = (x53>>((x54<=x55)%x56));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x65 = INT64_MAX;
	uint32_t x66 = 1748350U;
	static int64_t x67 = -14316969387LL;
	volatile int8_t x68 = -1;
	static volatile int64_t t10 = INT64_MAX;

	t10 = (x65>>((x66<=x67)%x68));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x69 = 686U;
	static volatile int32_t x70 = -3;
	int32_t x71 = -1;
	volatile int32_t t11 = 0;

	t11 = (x69>>((x70<=x71)%x72));

	if (t11 != 343) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x74 = INT16_MIN;
	static uint16_t x75 = UINT16_MAX;
	int64_t x76 = 1620701661139754388LL;
	volatile int32_t t12 = 129687948;

	t12 = (x73>>((x74<=x75)%x76));

	if (t12 != 1073741823) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x77 = UINT32_MAX;
	static uint32_t x78 = UINT32_MAX;
	int8_t x79 = 1;
	int32_t x80 = INT32_MAX;
	uint32_t t13 = UINT32_MAX;

	t13 = (x77>>((x78<=x79)%x80));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x93 = UINT64_MAX;
	static uint16_t x94 = UINT16_MAX;
	static volatile int32_t x96 = -1;
	static uint64_t t14 = UINT64_MAX;

	t14 = (x93>>((x94<=x95)%x96));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x97 = UINT32_MAX;
	int16_t x99 = -1;
	int16_t x100 = INT16_MIN;
	volatile uint32_t t15 = 126U;

	t15 = (x97>>((x98<=x99)%x100));

	if (t15 != 2147483647U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x102 = UINT8_MAX;
	int32_t x103 = INT32_MIN;
	static int64_t x104 = -1LL;
	static int32_t t16 = -6201;

	t16 = (x101>>((x102<=x103)%x104));

	if (t16 != 112548878) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x105 = 249U;
	uint16_t x106 = UINT16_MAX;
	int16_t x107 = INT16_MAX;
	uint16_t x108 = 5U;
	volatile int32_t t17 = 4450;

	t17 = (x105>>((x106<=x107)%x108));

	if (t17 != 249) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x113 = 27;
	int64_t x114 = 3302203385399820246LL;
	volatile uint64_t x115 = 39993671499483LLU;
	int64_t x116 = -1LL;

	t18 = (x113>>((x114<=x115)%x116));

	if (t18 != 27) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x117 = UINT32_MAX;
	int32_t x118 = -69949;
	static volatile uint16_t x119 = 25910U;
	volatile int32_t x120 = 60994;
	volatile uint32_t t19 = 317U;

	t19 = (x117>>((x118<=x119)%x120));

	if (t19 != 2147483647U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x125 = UINT16_MAX;
	uint32_t x126 = 64U;
	static volatile int8_t x127 = -1;
	volatile int32_t t20 = 681433663;

	t20 = (x125>>((x126<=x127)%x128));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x137 = 11U;
	int8_t x138 = INT8_MIN;
	static uint64_t x139 = 4691LLU;
	volatile int8_t x140 = 1;
	uint32_t t21 = 55U;

	t21 = (x137>>((x138<=x139)%x140));

	if (t21 != 11U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = INT8_MAX;
	static int16_t x163 = INT16_MIN;
	volatile int32_t t22 = 289948;

	t22 = (x161>>((x162<=x163)%x164));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x169 = 3885LL;
	volatile uint32_t x170 = UINT32_MAX;
	int8_t x171 = -15;
	static volatile int64_t t23 = -27500LL;

	t23 = (x169>>((x170<=x171)%x172));

	if (t23 != 3885LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x173 = UINT8_MAX;
	uint8_t x175 = UINT8_MAX;
	int32_t x176 = -1;
	volatile int32_t t24 = 1;

	t24 = (x173>>((x174<=x175)%x176));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x193 = 98334568;
	int8_t x194 = 34;
	volatile uint32_t x196 = 101431726U;
	int32_t t25 = 1338;

	t25 = (x193>>((x194<=x195)%x196));

	if (t25 != 49167284) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x197 = 9618U;
	int8_t x199 = -1;
	uint8_t x200 = 9U;
	volatile uint32_t t26 = 207415532U;

	t26 = (x197>>((x198<=x199)%x200));

	if (t26 != 4809U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x205 = 176391LLU;
	static volatile int64_t x206 = 36879635LL;
	static uint32_t x207 = UINT32_MAX;
	uint64_t x208 = 14500547LLU;
	uint64_t t27 = 1LLU;

	t27 = (x205>>((x206<=x207)%x208));

	if (t27 != 88195LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x209 = INT64_MAX;
	uint32_t x210 = 748664646U;
	static volatile uint32_t x211 = UINT32_MAX;
	uint8_t x212 = 2U;
	int64_t t28 = -234917544198926487LL;

	t28 = (x209>>((x210<=x211)%x212));

	if (t28 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x213 = 9056;
	static uint32_t x214 = UINT32_MAX;
	int32_t x216 = 113294;
	volatile int32_t t29 = -15555540;

	t29 = (x213>>((x214<=x215)%x216));

	if (t29 != 9056) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x221 = UINT32_MAX;
	static int16_t x222 = INT16_MIN;
	static volatile uint8_t x224 = UINT8_MAX;
	uint32_t t30 = UINT32_MAX;

	t30 = (x221>>((x222<=x223)%x224));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x229 = 44;
	static int32_t x230 = 14870;
	int8_t x231 = INT8_MAX;
	volatile int64_t x232 = INT64_MIN;
	volatile int32_t t31 = -2;

	t31 = (x229>>((x230<=x231)%x232));

	if (t31 != 44) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x237 = 955U;
	int16_t x238 = INT16_MAX;
	static uint8_t x239 = UINT8_MAX;
	static int32_t x240 = -1;
	volatile int32_t t32 = 68;

	t32 = (x237>>((x238<=x239)%x240));

	if (t32 != 955) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x241 = 4241U;
	volatile uint32_t x242 = 34U;
	static int32_t x243 = -1;
	int16_t x244 = -1;

	t33 = (x241>>((x242<=x243)%x244));

	if (t33 != 4241) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x249 = 520LLU;
	int64_t x250 = INT64_MIN;
	uint8_t x251 = 2U;
	int16_t x252 = 290;
	volatile uint64_t t34 = 1326889LLU;

	t34 = (x249>>((x250<=x251)%x252));

	if (t34 != 260LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x255 = -2339812LL;
	uint64_t x256 = UINT64_MAX;
	volatile int32_t t35 = 42554;

	t35 = (x253>>((x254<=x255)%x256));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x257 = INT16_MAX;
	uint16_t x258 = 5270U;
	uint32_t x259 = 76U;
	int16_t x260 = INT16_MAX;
	int32_t t36 = -18;

	t36 = (x257>>((x258<=x259)%x260));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x269 = 13;
	volatile int16_t x270 = -1;
	int64_t x271 = 165437204886283994LL;
	volatile int16_t x272 = -1;
	int32_t t37 = 12;

	t37 = (x269>>((x270<=x271)%x272));

	if (t37 != 13) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x285 = INT16_MAX;
	uint64_t x286 = 8711982174637LLU;
	volatile int64_t x287 = INT64_MIN;
	static volatile int32_t x288 = 861420;
	int32_t t38 = 239;

	t38 = (x285>>((x286<=x287)%x288));

	if (t38 != 16383) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x289 = 115604LLU;
	volatile int16_t x290 = INT16_MIN;
	volatile uint64_t t39 = 398016LLU;

	t39 = (x289>>((x290<=x291)%x292));

	if (t39 != 115604LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x293 = 89930;
	int8_t x295 = -1;
	int16_t x296 = INT16_MIN;
	static int32_t t40 = 98;

	t40 = (x293>>((x294<=x295)%x296));

	if (t40 != 44965) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x305 = INT32_MAX;
	uint16_t x307 = UINT16_MAX;
	int8_t x308 = -1;
	volatile int32_t t41 = INT32_MAX;

	t41 = (x305>>((x306<=x307)%x308));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x313 = 1U;
	int16_t x314 = 3208;
	volatile int32_t x315 = 1;
	uint32_t x316 = UINT32_MAX;
	static volatile int32_t t42 = 11245;

	t42 = (x313>>((x314<=x315)%x316));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x317 = 557LLU;
	uint8_t x318 = UINT8_MAX;
	uint8_t x319 = 26U;
	volatile uint8_t x320 = 8U;

	t43 = (x317>>((x318<=x319)%x320));

	if (t43 != 557LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x326 = UINT32_MAX;
	volatile int64_t x327 = INT64_MAX;
	volatile int32_t t44 = -2;

	t44 = (x325>>((x326<=x327)%x328));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x341 = 3222;
	static int8_t x342 = INT8_MAX;
	int16_t x343 = INT16_MIN;
	uint32_t x344 = 7U;
	volatile int32_t t45 = -29495;

	t45 = (x341>>((x342<=x343)%x344));

	if (t45 != 3222) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x345 = 2616190641288325722LLU;
	volatile int32_t x346 = INT32_MAX;
	int16_t x347 = INT16_MAX;
	volatile uint64_t t46 = 1999LLU;

	t46 = (x345>>((x346<=x347)%x348));

	if (t46 != 2616190641288325722LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x357 = INT8_MAX;
	int64_t x358 = -74167319324776852LL;
	uint16_t x359 = 1491U;
	volatile int32_t t47 = -3;

	t47 = (x357>>((x358<=x359)%x360));

	if (t47 != 63) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x361 = 1719U;
	uint64_t x364 = UINT64_MAX;
	volatile uint32_t t48 = 1197775905U;

	t48 = (x361>>((x362<=x363)%x364));

	if (t48 != 1719U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x373 = 6693624;
	int32_t x374 = 26426730;
	int8_t x376 = INT8_MIN;
	static int32_t t49 = -33824;

	t49 = (x373>>((x374<=x375)%x376));

	if (t49 != 6693624) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x382 = INT32_MIN;
	int32_t x383 = INT32_MIN;
	int8_t x384 = -1;
	int32_t t50 = -7;

	t50 = (x381>>((x382<=x383)%x384));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x385 = 510U;
	int32_t x386 = -1;
	uint32_t x387 = 154357U;
	static int64_t x388 = 9697751885LL;
	static int32_t t51 = 3360986;

	t51 = (x385>>((x386<=x387)%x388));

	if (t51 != 510) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x402 = 126U;
	uint8_t x403 = 64U;
	static uint8_t x404 = 20U;

	t52 = (x401>>((x402<=x403)%x404));

	if (t52 != 7554) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x411 = 2;
	uint16_t x412 = UINT16_MAX;

	t53 = (x409>>((x410<=x411)%x412));

	if (t53 != 7446U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x413 = 265011287U;
	uint8_t x415 = 0U;

	t54 = (x413>>((x414<=x415)%x416));

	if (t54 != 265011287U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x417 = 9998424U;
	static volatile int64_t x418 = INT64_MAX;
	static volatile int8_t x419 = 0;
	uint32_t t55 = 1521U;

	t55 = (x417>>((x418<=x419)%x420));

	if (t55 != 9998424U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x425 = INT32_MAX;
	uint32_t x426 = 235U;
	static volatile int64_t x428 = 12584LL;
	int32_t t56 = 31240;

	t56 = (x425>>((x426<=x427)%x428));

	if (t56 != 1073741823) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x429 = UINT16_MAX;
	volatile uint32_t x430 = 95350738U;
	int64_t x431 = 55871012613LL;
	int32_t t57 = -65;

	t57 = (x429>>((x430<=x431)%x432));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x437 = 0U;
	static uint32_t x438 = UINT32_MAX;
	int32_t x439 = INT32_MIN;
	static uint8_t x440 = 1U;
	volatile int32_t t58 = 1;

	t58 = (x437>>((x438<=x439)%x440));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x441 = 59U;
	int64_t x442 = INT64_MIN;
	uint32_t x443 = 425U;
	static volatile uint32_t x444 = 344098U;
	uint32_t t59 = 222U;

	t59 = (x441>>((x442<=x443)%x444));

	if (t59 != 29U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x445 = UINT16_MAX;
	int64_t x446 = INT64_MAX;
	static volatile uint32_t x447 = UINT32_MAX;
	static int32_t t60 = -1460;

	t60 = (x445>>((x446<=x447)%x448));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x449 = UINT64_MAX;
	uint16_t x450 = 737U;
	volatile int64_t x452 = -397359LL;
	uint64_t t61 = UINT64_MAX;

	t61 = (x449>>((x450<=x451)%x452));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x465 = 8020079586442117LL;
	volatile int64_t t62 = 220LL;

	t62 = (x465>>((x466<=x467)%x468));

	if (t62 != 4010039793221058LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x469 = INT64_MAX;
	static volatile uint8_t x470 = 13U;
	uint16_t x472 = 767U;
	volatile int64_t t63 = INT64_MAX;

	t63 = (x469>>((x470<=x471)%x472));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x477 = 42;
	volatile int8_t x478 = INT8_MAX;
	static int32_t x479 = 630046;
	int8_t x480 = INT8_MIN;
	int32_t t64 = -227957;

	t64 = (x477>>((x478<=x479)%x480));

	if (t64 != 21) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x481 = 216764620LLU;
	int8_t x483 = INT8_MAX;
	int64_t x484 = -1LL;
	uint64_t t65 = 1099880LLU;

	t65 = (x481>>((x482<=x483)%x484));

	if (t65 != 216764620LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x485 = INT32_MAX;
	int8_t x486 = -11;
	int16_t x487 = 137;
	int16_t x488 = INT16_MIN;
	volatile int32_t t66 = 4179;

	t66 = (x485>>((x486<=x487)%x488));

	if (t66 != 1073741823) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x493 = 1;
	static uint64_t x494 = 3LLU;
	int8_t x495 = -5;
	uint8_t x496 = 3U;
	static volatile int32_t t67 = 570;

	t67 = (x493>>((x494<=x495)%x496));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x497 = UINT64_MAX;
	int8_t x498 = 14;
	volatile int32_t x499 = 115128;
	uint8_t x500 = 1U;

	t68 = (x497>>((x498<=x499)%x500));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x517 = 1058973938U;
	int32_t x518 = -26;
	uint8_t x519 = 41U;
	int16_t x520 = -13;
	static volatile uint32_t t69 = 917555727U;

	t69 = (x517>>((x518<=x519)%x520));

	if (t69 != 529486969U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x529 = UINT64_MAX;
	static int8_t x530 = INT8_MIN;
	int32_t x531 = INT32_MIN;
	static int16_t x532 = INT16_MAX;
	uint64_t t70 = UINT64_MAX;

	t70 = (x529>>((x530<=x531)%x532));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x533 = INT16_MAX;
	uint16_t x535 = 16U;
	int8_t x536 = -36;
	volatile int32_t t71 = -73;

	t71 = (x533>>((x534<=x535)%x536));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x541 = 32378U;
	int8_t x542 = INT8_MIN;
	static int32_t x543 = 2;
	int64_t x544 = INT64_MIN;
	volatile int32_t t72 = -508584778;

	t72 = (x541>>((x542<=x543)%x544));

	if (t72 != 16189) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x545 = UINT8_MAX;
	uint16_t x546 = UINT16_MAX;
	static uint8_t x547 = 61U;
	volatile int32_t t73 = -1298601;

	t73 = (x545>>((x546<=x547)%x548));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x549 = INT8_MAX;
	volatile int8_t x550 = 8;
	volatile uint16_t x551 = 2707U;
	volatile int32_t x552 = INT32_MAX;
	static volatile int32_t t74 = -106;

	t74 = (x549>>((x550<=x551)%x552));

	if (t74 != 63) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x553 = 228296U;
	int64_t x554 = INT64_MIN;
	int16_t x556 = 5563;
	static volatile uint32_t t75 = 14U;

	t75 = (x553>>((x554<=x555)%x556));

	if (t75 != 114148U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x558 = 4U;
	static int32_t x559 = 20589;

	t76 = (x557>>((x558<=x559)%x560));

	if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x565 = 55569428747710862LLU;
	int32_t x567 = INT32_MIN;
	uint64_t x568 = 5990873870216648LLU;

	t77 = (x565>>((x566<=x567)%x568));

	if (t77 != 55569428747710862LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x569 = 7;
	static int16_t x570 = INT16_MAX;
	int64_t x571 = INT64_MAX;
	static int32_t x572 = INT32_MIN;
	int32_t t78 = 1015;

	t78 = (x569>>((x570<=x571)%x572));

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x581 = 183199818;
	static int8_t x582 = -1;
	static uint8_t x583 = UINT8_MAX;
	int64_t x584 = -726LL;
	int32_t t79 = -139126256;

	t79 = (x581>>((x582<=x583)%x584));

	if (t79 != 91599909) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x589 = UINT64_MAX;
	volatile int8_t x590 = -1;
	volatile uint32_t x591 = UINT32_MAX;
	int64_t x592 = -1444LL;
	static uint64_t t80 = 103519LLU;

	t80 = (x589>>((x590<=x591)%x592));

	if (t80 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x593 = 36;
	int8_t x595 = INT8_MAX;
	uint8_t x596 = UINT8_MAX;
	volatile int32_t t81 = -860015485;

	t81 = (x593>>((x594<=x595)%x596));

	if (t81 != 18) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x597 = 3U;
	int16_t x599 = -1;
	volatile int8_t x600 = INT8_MAX;

	t82 = (x597>>((x598<=x599)%x600));

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x601 = 300223U;
	uint16_t x602 = UINT16_MAX;
	uint8_t x603 = 11U;

	t83 = (x601>>((x602<=x603)%x604));

	if (t83 != 300223U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x621 = UINT8_MAX;
	int64_t x622 = 91385LL;
	int8_t x623 = -1;
	volatile int8_t x624 = INT8_MIN;
	volatile int32_t t84 = -5381995;

	t84 = (x621>>((x622<=x623)%x624));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x625 = 68U;
	int64_t x626 = INT64_MAX;
	volatile uint32_t x627 = 235182U;
	static uint64_t x628 = UINT64_MAX;
	uint32_t t85 = 567U;

	t85 = (x625>>((x626<=x627)%x628));

	if (t85 != 68U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x629 = INT64_MAX;
	int8_t x630 = -1;
	uint64_t x631 = 12LLU;
	static int64_t t86 = INT64_MAX;

	t86 = (x629>>((x630<=x631)%x632));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x637 = 3U;
	volatile int64_t x638 = 1660LL;
	static uint8_t x639 = UINT8_MAX;
	volatile int8_t x640 = 2;
	int32_t t87 = 98173;

	t87 = (x637>>((x638<=x639)%x640));

	if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x646 = 8439;
	uint64_t x647 = UINT64_MAX;
	uint32_t t88 = 116U;

	t88 = (x645>>((x646<=x647)%x648));

	if (t88 != 6201U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x649 = 8U;
	volatile int16_t x650 = 16023;
	volatile int32_t t89 = 2;

	t89 = (x649>>((x650<=x651)%x652));

	if (t89 != 8) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x653 = UINT32_MAX;
	uint32_t x654 = 1030735056U;
	int64_t x656 = -128848LL;
	static volatile uint32_t t90 = 8016717U;

	t90 = (x653>>((x654<=x655)%x656));

	if (t90 != 2147483647U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x657 = 25688975554518LLU;
	int16_t x658 = INT16_MIN;
	uint64_t x659 = 1867222737971LLU;
	volatile uint64_t t91 = 1LLU;

	t91 = (x657>>((x658<=x659)%x660));

	if (t91 != 25688975554518LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x661 = 162U;
	int8_t x662 = 15;
	int64_t x664 = INT64_MIN;
	int32_t t92 = 176285129;

	t92 = (x661>>((x662<=x663)%x664));

	if (t92 != 81) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x665 = 1U;
	int32_t x666 = 149;
	volatile uint64_t x667 = UINT64_MAX;
	uint8_t x668 = UINT8_MAX;
	volatile int32_t t93 = -14975585;

	t93 = (x665>>((x666<=x667)%x668));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x669 = 0;
	uint32_t x670 = 3168U;
	int16_t x672 = -47;
	int32_t t94 = -216768790;

	t94 = (x669>>((x670<=x671)%x672));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x681 = 6U;
	uint64_t x683 = 11LLU;
	int64_t x684 = 28LL;

	t95 = (x681>>((x682<=x683)%x684));

	if (t95 != 6) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x690 = 217865359LLU;
	int8_t x691 = INT8_MIN;
	int32_t x692 = -2590;
	int32_t t96 = -3827;

	t96 = (x689>>((x690<=x691)%x692));

	if (t96 != 15185678) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x694 = 2835LLU;
	static int16_t x696 = -58;
	volatile int32_t t97 = -87;

	t97 = (x693>>((x694<=x695)%x696));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x705 = INT8_MAX;
	int16_t x708 = INT16_MIN;

	t98 = (x705>>((x706<=x707)%x708));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x709 = 197912U;
	static volatile int32_t x710 = INT32_MIN;
	volatile int64_t x712 = INT64_MAX;
	volatile uint32_t t99 = 87560309U;

	t99 = (x709>>((x710<=x711)%x712));

	if (t99 != 98956U) { NG(); } else { ; }
	
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

