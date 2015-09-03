#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MAX;
int32_t x3 = -1;
int32_t x29 = INT32_MIN;
static int32_t x30 = -128;
int32_t t2 = -60;
static int32_t t6 = 2544672;
int8_t x66 = 29;
uint64_t t7 = 27556053544LLU;
volatile int64_t x102 = INT64_MIN;
volatile int32_t t12 = -343229;
uint32_t x114 = 705327U;
int32_t t15 = 1536;
int8_t x129 = INT8_MIN;
volatile uint16_t x131 = 9282U;
int32_t t20 = INT32_MIN;
int32_t x161 = INT32_MIN;
int32_t x164 = -1;
static uint64_t x170 = 1558LLU;
uint64_t t22 = 12452LLU;
int64_t x218 = -1LL;
static int64_t x220 = INT64_MIN;
int16_t x223 = -1;
uint8_t x224 = UINT8_MAX;
uint64_t x231 = UINT64_MAX;
int16_t x232 = -1;
uint8_t x246 = 77U;
uint16_t x248 = 17807U;
static int16_t x257 = 16;
int8_t x258 = INT8_MIN;
static int32_t t32 = -124979;
volatile int64_t x265 = INT64_MAX;
int8_t x286 = 13;
static int64_t x301 = -3891859LL;
uint8_t x303 = 8U;
uint64_t x307 = UINT64_MAX;
int16_t x308 = INT16_MIN;
uint8_t x318 = 11U;
static int8_t x330 = -1;
static volatile int64_t x333 = INT64_MAX;
static uint16_t x334 = 0U;
volatile int16_t x410 = -13;
uint32_t x411 = UINT32_MAX;
uint64_t x420 = 66850355732279206LLU;
int8_t x429 = 3;
static uint64_t x437 = UINT64_MAX;
int64_t x442 = -1LL;
uint8_t x445 = 1U;
int32_t x453 = INT32_MIN;
uint32_t x456 = UINT32_MAX;
volatile uint64_t x459 = UINT64_MAX;
volatile uint32_t t58 = 16904131U;
int64_t x462 = INT64_MIN;
static int64_t x464 = -1LL;
uint32_t x472 = UINT32_MAX;
int32_t t60 = -16657236;
uint64_t x499 = 809977960342LLU;
volatile int32_t t63 = -241572;
int32_t x514 = 2028;
int8_t x516 = 17;
static volatile int32_t t64 = 43970;
static uint16_t x523 = UINT16_MAX;
static uint64_t x524 = UINT64_MAX;
int64_t t67 = 2355438LL;
static volatile int16_t x548 = 1;
int8_t x549 = INT8_MAX;
volatile int8_t x573 = INT8_MAX;
static int8_t x575 = INT8_MIN;
int16_t x577 = INT16_MIN;
int32_t x588 = INT32_MAX;
int64_t x625 = INT64_MIN;
static volatile int32_t x628 = -61;
int64_t x629 = INT64_MAX;
volatile int64_t x647 = INT64_MAX;
uint64_t x648 = UINT64_MAX;
int64_t x653 = INT64_MIN;
volatile int8_t x657 = INT8_MIN;
volatile uint16_t x660 = 2212U;
int8_t x664 = -51;
volatile int16_t x668 = -1;
volatile int64_t x673 = INT64_MIN;
int16_t x676 = INT16_MIN;
int32_t x681 = INT32_MIN;
uint16_t x689 = 6U;
uint64_t x692 = UINT64_MAX;
uint16_t x694 = 5421U;
int64_t t88 = -49832485LL;
static int16_t x721 = 49;
volatile int64_t x722 = INT64_MIN;
int32_t t91 = -94;
static uint32_t x747 = 0U;
volatile int32_t t92 = -3725;
volatile int16_t x749 = 6519;
int32_t x750 = INT32_MIN;
int8_t x757 = -1;
uint32_t t95 = UINT32_MAX;
static int16_t x771 = INT16_MIN;
int16_t x772 = INT16_MIN;
volatile int32_t t96 = -440038;
uint32_t x793 = 1U;
volatile uint32_t t97 = 156U;


void f0(void) {
	int8_t x2 = INT8_MIN;
	int32_t x4 = INT32_MAX;
	int32_t t0 = 7366856;

	t0 = (x1/((x2+x3)<=x4));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x31 = INT16_MIN;
	static uint16_t x32 = UINT16_MAX;
	volatile int32_t t1 = INT32_MIN;

	t1 = (x29/((x30+x31)<=x32));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x41 = INT8_MAX;
	static int16_t x42 = INT16_MIN;
	static int64_t x43 = -1826328080125105LL;
	int32_t x44 = -12;

	t2 = (x41/((x42+x43)<=x44));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x45 = UINT64_MAX;
	int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MAX;
	int16_t x48 = INT16_MAX;
	uint64_t t3 = UINT64_MAX;

	t3 = (x45/((x46+x47)<=x48));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x49 = 112;
	uint16_t x50 = 127U;
	static int8_t x51 = INT8_MIN;
	static volatile int32_t x52 = -1;
	volatile int32_t t4 = 0;

	t4 = (x49/((x50+x51)<=x52));

	if (t4 != 112) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x53 = -1;
	uint64_t x54 = 1054223LLU;
	static uint16_t x55 = UINT16_MAX;
	int8_t x56 = -15;
	int32_t t5 = -1589955;

	t5 = (x53/((x54+x55)<=x56));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x57 = INT16_MIN;
	static uint8_t x58 = 54U;
	int64_t x59 = -1LL;
	uint16_t x60 = 150U;

	t6 = (x57/((x58+x59)<=x60));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x65 = 32LLU;
	int64_t x67 = -1LL;
	int8_t x68 = INT8_MAX;

	t7 = (x65/((x66+x67)<=x68));

	if (t7 != 32LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x69 = UINT32_MAX;
	int64_t x70 = -1LL;
	static int8_t x71 = -1;
	static int32_t x72 = 146595052;
	static volatile uint32_t t8 = UINT32_MAX;

	t8 = (x69/((x70+x71)<=x72));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x85 = UINT16_MAX;
	uint32_t x86 = 2316098U;
	uint64_t x87 = UINT64_MAX;
	static int32_t x88 = -1;
	volatile int32_t t9 = -60211240;

	t9 = (x85/((x86+x87)<=x88));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = INT8_MIN;
	static int16_t x95 = -1;
	uint8_t x96 = 13U;
	int64_t t10 = INT64_MIN;

	t10 = (x93/((x94+x95)<=x96));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x97 = UINT64_MAX;
	static uint32_t x98 = 988U;
	uint32_t x99 = 2047U;
	uint64_t x100 = 711748804569232LLU;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = (x97/((x98+x99)<=x100));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x101 = -1;
	static uint32_t x103 = 15U;
	int8_t x104 = 6;

	t12 = (x101/((x102+x103)<=x104));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x105 = 60;
	static volatile int8_t x106 = 1;
	volatile int16_t x107 = -1;
	int16_t x108 = 728;
	volatile int32_t t13 = -306;

	t13 = (x105/((x106+x107)<=x108));

	if (t13 != 60) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x109 = INT64_MIN;
	uint64_t x110 = 52481425296148LLU;
	uint64_t x111 = 6840644846351LLU;
	int64_t x112 = INT64_MIN;
	int64_t t14 = INT64_MIN;

	t14 = (x109/((x110+x111)<=x112));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x113 = -1;
	static uint8_t x115 = UINT8_MAX;
	static int16_t x116 = -58;

	t15 = (x113/((x114+x115)<=x116));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x121 = UINT32_MAX;
	int64_t x122 = INT64_MIN;
	uint16_t x123 = 7U;
	int8_t x124 = INT8_MAX;
	static uint32_t t16 = UINT32_MAX;

	t16 = (x121/((x122+x123)<=x124));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x125 = INT16_MIN;
	static uint64_t x126 = 3LLU;
	static volatile int32_t x127 = INT32_MAX;
	int32_t x128 = INT32_MIN;
	int32_t t17 = 925824;

	t17 = (x125/((x126+x127)<=x128));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x130 = 13252165LLU;
	int16_t x132 = -1;
	static volatile int32_t t18 = -24;

	t18 = (x129/((x130+x131)<=x132));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x141 = 2574;
	uint8_t x142 = 10U;
	uint16_t x143 = 1U;
	uint64_t x144 = 13658428321481LLU;
	volatile int32_t t19 = 0;

	t19 = (x141/((x142+x143)<=x144));

	if (t19 != 2574) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x145 = INT32_MIN;
	volatile int8_t x146 = INT8_MIN;
	uint32_t x147 = 410393413U;
	volatile int32_t x148 = INT32_MAX;

	t20 = (x145/((x146+x147)<=x148));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x162 = 108104U;
	static int8_t x163 = -30;
	int32_t t21 = INT32_MIN;

	t21 = (x161/((x162+x163)<=x164));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x169 = 1LLU;
	volatile uint16_t x171 = 7U;
	volatile uint64_t x172 = UINT64_MAX;

	t22 = (x169/((x170+x171)<=x172));

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x189 = 28081U;
	uint64_t x190 = UINT64_MAX;
	uint16_t x191 = 16U;
	static int32_t x192 = -1;
	volatile uint32_t t23 = 3U;

	t23 = (x189/((x190+x191)<=x192));

	if (t23 != 28081U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x201 = -48082585;
	int64_t x202 = INT64_MIN;
	static uint32_t x203 = UINT32_MAX;
	int8_t x204 = 0;
	volatile int32_t t24 = -1;

	t24 = (x201/((x202+x203)<=x204));

	if (t24 != -48082585) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x217 = UINT32_MAX;
	volatile uint64_t x219 = 151LLU;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = (x217/((x218+x219)<=x220));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x221 = -11789165399285LL;
	volatile int64_t x222 = -222175879642614LL;
	volatile int64_t t26 = 0LL;

	t26 = (x221/((x222+x223)<=x224));

	if (t26 != -11789165399285LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x225 = UINT16_MAX;
	int32_t x226 = -1;
	static volatile int64_t x227 = -1LL;
	int16_t x228 = INT16_MAX;
	static int32_t t27 = -3;

	t27 = (x225/((x226+x227)<=x228));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x229 = -1;
	int32_t x230 = -21659407;
	volatile int32_t t28 = 643;

	t28 = (x229/((x230+x231)<=x232));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x237 = UINT32_MAX;
	int8_t x238 = INT8_MAX;
	static int64_t x239 = INT64_MIN;
	int64_t x240 = -1LL;
	static volatile uint32_t t29 = UINT32_MAX;

	t29 = (x237/((x238+x239)<=x240));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x245 = INT8_MIN;
	volatile uint16_t x247 = 760U;
	volatile int32_t t30 = 6998;

	t30 = (x245/((x246+x247)<=x248));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x249 = INT8_MIN;
	static uint8_t x250 = 122U;
	volatile uint16_t x251 = UINT16_MAX;
	int64_t x252 = 329827572703LL;
	int32_t t31 = -9720;

	t31 = (x249/((x250+x251)<=x252));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x259 = -1;
	int64_t x260 = 3929527820LL;

	t32 = (x257/((x258+x259)<=x260));

	if (t32 != 16) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x266 = INT8_MAX;
	static uint32_t x267 = 4U;
	volatile int32_t x268 = INT32_MIN;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x265/((x266+x267)<=x268));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x269 = -1;
	volatile int16_t x270 = -8067;
	int8_t x271 = INT8_MIN;
	int32_t x272 = INT32_MAX;
	static int32_t t34 = 29;

	t34 = (x269/((x270+x271)<=x272));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x273 = INT64_MIN;
	static int16_t x274 = -1;
	volatile int8_t x275 = -1;
	volatile int16_t x276 = INT16_MAX;
	int64_t t35 = INT64_MIN;

	t35 = (x273/((x274+x275)<=x276));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x285 = INT32_MAX;
	int64_t x287 = -1LL;
	uint8_t x288 = 13U;
	static int32_t t36 = INT32_MAX;

	t36 = (x285/((x286+x287)<=x288));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x302 = -29;
	int8_t x304 = INT8_MAX;
	static volatile int64_t t37 = -1227LL;

	t37 = (x301/((x302+x303)<=x304));

	if (t37 != -3891859LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x305 = 33U;
	int8_t x306 = INT8_MAX;
	int32_t t38 = -28483245;

	t38 = (x305/((x306+x307)<=x308));

	if (t38 != 33) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x309 = 780022LLU;
	int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MIN;
	static uint8_t x312 = UINT8_MAX;
	uint64_t t39 = 3044297113890514848LLU;

	t39 = (x309/((x310+x311)<=x312));

	if (t39 != 780022LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x317 = INT32_MIN;
	int8_t x319 = INT8_MIN;
	volatile uint32_t x320 = UINT32_MAX;
	static volatile int32_t t40 = INT32_MIN;

	t40 = (x317/((x318+x319)<=x320));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x321 = 12U;
	int16_t x322 = INT16_MIN;
	uint8_t x323 = 2U;
	int8_t x324 = INT8_MIN;
	int32_t t41 = -112570469;

	t41 = (x321/((x322+x323)<=x324));

	if (t41 != 12) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x325 = INT8_MIN;
	static volatile int16_t x326 = -1;
	int8_t x327 = -1;
	static int16_t x328 = INT16_MAX;
	static volatile int32_t t42 = 5329018;

	t42 = (x325/((x326+x327)<=x328));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x329 = INT8_MIN;
	int16_t x331 = INT16_MIN;
	uint16_t x332 = 1712U;
	volatile int32_t t43 = -34;

	t43 = (x329/((x330+x331)<=x332));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x335 = INT32_MIN;
	volatile int64_t x336 = INT64_MAX;
	int64_t t44 = INT64_MAX;

	t44 = (x333/((x334+x335)<=x336));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x357 = -4750;
	static volatile uint64_t x358 = 29888260LLU;
	uint16_t x359 = 0U;
	int64_t x360 = INT64_MIN;
	static int32_t t45 = -52;

	t45 = (x357/((x358+x359)<=x360));

	if (t45 != -4750) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x361 = 0U;
	static int16_t x362 = INT16_MIN;
	uint8_t x363 = UINT8_MAX;
	int16_t x364 = -1;
	int32_t t46 = -1969740;

	t46 = (x361/((x362+x363)<=x364));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x369 = UINT32_MAX;
	static volatile uint32_t x370 = 163112U;
	int16_t x371 = INT16_MIN;
	volatile int8_t x372 = -1;
	static uint32_t t47 = UINT32_MAX;

	t47 = (x369/((x370+x371)<=x372));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x373 = INT64_MIN;
	volatile int16_t x374 = -5822;
	int16_t x375 = -1;
	static int16_t x376 = INT16_MAX;
	volatile int64_t t48 = INT64_MIN;

	t48 = (x373/((x374+x375)<=x376));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x381 = -1;
	int32_t x382 = 78021;
	static int64_t x383 = INT64_MIN;
	uint16_t x384 = 6666U;
	volatile int32_t t49 = -476934953;

	t49 = (x381/((x382+x383)<=x384));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x409 = INT8_MAX;
	static int8_t x412 = -1;
	volatile int32_t t50 = 1;

	t50 = (x409/((x410+x411)<=x412));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x417 = INT16_MAX;
	static int16_t x418 = -1;
	int8_t x419 = 6;
	static volatile int32_t t51 = -3;

	t51 = (x417/((x418+x419)<=x420));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x430 = -2534113;
	static int16_t x431 = 13499;
	static int16_t x432 = 3;
	static int32_t t52 = -236547676;

	t52 = (x429/((x430+x431)<=x432));

	if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x433 = 58U;
	volatile uint8_t x434 = 48U;
	int16_t x435 = INT16_MIN;
	int8_t x436 = -16;
	int32_t t53 = -1017613;

	t53 = (x433/((x434+x435)<=x436));

	if (t53 != 58) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x438 = INT32_MIN;
	int64_t x439 = -307LL;
	int8_t x440 = 38;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = (x437/((x438+x439)<=x440));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x441 = 15;
	int8_t x443 = -1;
	int32_t x444 = 124;
	volatile int32_t t55 = -66655067;

	t55 = (x441/((x442+x443)<=x444));

	if (t55 != 15) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x446 = 1;
	uint32_t x447 = UINT32_MAX;
	uint32_t x448 = 298762011U;
	int32_t t56 = -454088;

	t56 = (x445/((x446+x447)<=x448));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x454 = -1LL;
	static volatile uint32_t x455 = UINT32_MAX;
	int32_t t57 = INT32_MIN;

	t57 = (x453/((x454+x455)<=x456));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x457 = 26U;
	int64_t x458 = INT64_MIN;
	static int16_t x460 = INT16_MIN;

	t58 = (x457/((x458+x459)<=x460));

	if (t58 != 26U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x461 = -1;
	uint8_t x463 = UINT8_MAX;
	int32_t t59 = -45914;

	t59 = (x461/((x462+x463)<=x464));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x469 = -1;
	static int16_t x470 = 815;
	int8_t x471 = INT8_MIN;

	t60 = (x469/((x470+x471)<=x472));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x481 = INT8_MIN;
	int32_t x482 = INT32_MIN;
	uint8_t x483 = 6U;
	int32_t x484 = -1;
	volatile int32_t t61 = 974818;

	t61 = (x481/((x482+x483)<=x484));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x493 = 958U;
	int16_t x494 = 119;
	static volatile int8_t x495 = INT8_MIN;
	uint8_t x496 = 4U;
	static int32_t t62 = 103;

	t62 = (x493/((x494+x495)<=x496));

	if (t62 != 958) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x497 = 1U;
	static uint32_t x498 = 1371U;
	int8_t x500 = -1;

	t63 = (x497/((x498+x499)<=x500));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x513 = 57;
	int32_t x515 = -62369147;

	t64 = (x513/((x514+x515)<=x516));

	if (t64 != 57) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x521 = UINT32_MAX;
	uint32_t x522 = UINT32_MAX;
	uint32_t t65 = UINT32_MAX;

	t65 = (x521/((x522+x523)<=x524));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x529 = UINT16_MAX;
	int16_t x530 = -1;
	volatile int16_t x531 = INT16_MIN;
	static int16_t x532 = 7;
	volatile int32_t t66 = -18544804;

	t66 = (x529/((x530+x531)<=x532));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x537 = -1LL;
	uint64_t x538 = UINT64_MAX;
	int64_t x539 = INT64_MAX;
	int32_t x540 = -1;

	t67 = (x537/((x538+x539)<=x540));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x545 = 1LLU;
	int32_t x546 = -13;
	static int32_t x547 = -1;
	uint64_t t68 = 710LLU;

	t68 = (x545/((x546+x547)<=x548));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x550 = UINT64_MAX;
	static uint8_t x551 = UINT8_MAX;
	volatile uint8_t x552 = UINT8_MAX;
	int32_t t69 = -64582;

	t69 = (x549/((x550+x551)<=x552));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x574 = -1;
	uint8_t x576 = 1U;
	int32_t t70 = -993;

	t70 = (x573/((x574+x575)<=x576));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x578 = 1;
	int32_t x579 = -1;
	uint16_t x580 = 1697U;
	volatile int32_t t71 = 16044610;

	t71 = (x577/((x578+x579)<=x580));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x581 = 50151U;
	uint32_t x582 = 13049814U;
	static int8_t x583 = -1;
	static volatile int16_t x584 = INT16_MIN;
	uint32_t t72 = 61526028U;

	t72 = (x581/((x582+x583)<=x584));

	if (t72 != 50151U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x585 = INT32_MIN;
	static uint16_t x586 = 4U;
	uint16_t x587 = 2U;
	volatile int32_t t73 = INT32_MIN;

	t73 = (x585/((x586+x587)<=x588));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x593 = INT8_MIN;
	int16_t x594 = 13;
	static int64_t x595 = INT64_MIN;
	static uint16_t x596 = 7U;
	static int32_t t74 = 93365722;

	t74 = (x593/((x594+x595)<=x596));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x601 = -3;
	uint8_t x602 = 2U;
	int16_t x603 = INT16_MIN;
	int32_t x604 = -3823;
	static volatile int32_t t75 = -406268349;

	t75 = (x601/((x602+x603)<=x604));

	if (t75 != -3) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x609 = INT16_MIN;
	int8_t x610 = INT8_MIN;
	volatile int64_t x611 = 3947513LL;
	volatile uint32_t x612 = UINT32_MAX;
	static volatile int32_t t76 = -2;

	t76 = (x609/((x610+x611)<=x612));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x617 = 208;
	int64_t x618 = INT64_MIN;
	volatile uint8_t x619 = 0U;
	uint64_t x620 = UINT64_MAX;
	int32_t t77 = 191690;

	t77 = (x617/((x618+x619)<=x620));

	if (t77 != 208) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x626 = INT64_MIN;
	int32_t x627 = 1865;
	volatile int64_t t78 = INT64_MIN;

	t78 = (x625/((x626+x627)<=x628));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x630 = INT64_MIN;
	uint8_t x631 = UINT8_MAX;
	static volatile int16_t x632 = -1;
	volatile int64_t t79 = INT64_MAX;

	t79 = (x629/((x630+x631)<=x632));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x645 = INT16_MIN;
	int32_t x646 = INT32_MIN;
	volatile int32_t t80 = -1019824;

	t80 = (x645/((x646+x647)<=x648));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x654 = 0U;
	int16_t x655 = INT16_MIN;
	volatile uint16_t x656 = 1957U;
	int64_t t81 = INT64_MIN;

	t81 = (x653/((x654+x655)<=x656));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x658 = -1;
	int32_t x659 = -1;
	static int32_t t82 = 275544924;

	t82 = (x657/((x658+x659)<=x660));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x661 = 0U;
	volatile int8_t x662 = INT8_MIN;
	int16_t x663 = -1;
	int32_t t83 = 98;

	t83 = (x661/((x662+x663)<=x664));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x665 = 899;
	static uint8_t x666 = 0U;
	int64_t x667 = -352321813LL;
	int32_t t84 = -7;

	t84 = (x665/((x666+x667)<=x668));

	if (t84 != 899) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x674 = 753438229U;
	int16_t x675 = 1;
	static int64_t t85 = INT64_MIN;

	t85 = (x673/((x674+x675)<=x676));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x682 = -1;
	static volatile int8_t x683 = INT8_MIN;
	volatile int8_t x684 = INT8_MIN;
	volatile int32_t t86 = INT32_MIN;

	t86 = (x681/((x682+x683)<=x684));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x690 = UINT8_MAX;
	volatile uint64_t x691 = 210108933205LLU;
	static int32_t t87 = -33506879;

	t87 = (x689/((x690+x691)<=x692));

	if (t87 != 6) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x693 = 127LL;
	int8_t x695 = 0;
	uint64_t x696 = UINT64_MAX;

	t88 = (x693/((x694+x695)<=x696));

	if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x709 = UINT64_MAX;
	uint64_t x710 = 41298732235693LLU;
	int8_t x711 = 60;
	int16_t x712 = -1;
	uint64_t t89 = UINT64_MAX;

	t89 = (x709/((x710+x711)<=x712));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x723 = 98U;
	uint32_t x724 = UINT32_MAX;
	volatile int32_t t90 = 3113;

	t90 = (x721/((x722+x723)<=x724));

	if (t90 != 49) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x725 = UINT8_MAX;
	uint64_t x726 = 107LLU;
	uint8_t x727 = 120U;
	static volatile int16_t x728 = -1;

	t91 = (x725/((x726+x727)<=x728));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x745 = UINT16_MAX;
	int32_t x746 = INT32_MIN;
	static int64_t x748 = 116968604122LL;

	t92 = (x745/((x746+x747)<=x748));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x751 = UINT8_MAX;
	int16_t x752 = -35;
	static int32_t t93 = 4413;

	t93 = (x749/((x750+x751)<=x752));

	if (t93 != 6519) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x758 = INT16_MIN;
	static int64_t x759 = -875019952LL;
	uint16_t x760 = UINT16_MAX;
	static int32_t t94 = -10963731;

	t94 = (x757/((x758+x759)<=x760));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x761 = UINT32_MAX;
	int64_t x762 = -278LL;
	int64_t x763 = -1LL;
	volatile int8_t x764 = -1;

	t95 = (x761/((x762+x763)<=x764));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x769 = -1;
	uint32_t x770 = 9680417U;

	t96 = (x769/((x770+x771)<=x772));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x794 = INT16_MIN;
	int16_t x795 = 7;
	int32_t x796 = -9;

	t97 = (x793/((x794+x795)<=x796));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x813 = INT32_MIN;
	int8_t x814 = INT8_MIN;
	volatile int16_t x815 = -2034;
	static uint32_t x816 = UINT32_MAX;
	int32_t t98 = INT32_MIN;

	t98 = (x813/((x814+x815)<=x816));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x817 = -22498762507LL;
	volatile int8_t x818 = INT8_MIN;
	static int16_t x819 = -1239;
	uint8_t x820 = UINT8_MAX;
	volatile int64_t t99 = 3968LL;

	t99 = (x817/((x818+x819)<=x820));

	if (t99 != -22498762507LL) { NG(); } else { ; }
	
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

