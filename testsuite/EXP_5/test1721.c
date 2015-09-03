#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = 3215898LLU;
int16_t x12 = INT16_MAX;
int8_t x13 = -1;
int16_t x16 = -1;
int64_t x30 = INT64_MIN;
volatile uint64_t x32 = 1821890356627LLU;
static volatile int64_t x37 = INT64_MAX;
uint64_t x38 = 2219017155150261301LLU;
volatile uint64_t t6 = 22908752523604002LLU;
volatile int8_t x61 = 2;
uint32_t x64 = 38977156U;
int64_t t7 = 2LL;
int64_t x66 = INT64_MAX;
int16_t x67 = -1;
volatile uint16_t x89 = 166U;
static int64_t t9 = -58223LL;
static volatile uint8_t x100 = UINT8_MAX;
uint32_t x130 = 783874U;
volatile uint8_t x132 = UINT8_MAX;
static volatile uint8_t x133 = 3U;
uint32_t x134 = UINT32_MAX;
static int8_t x135 = -1;
volatile int16_t x141 = -1;
int64_t x156 = 97702286728756LL;
static uint64_t t20 = 39365938LLU;
int16_t x171 = INT16_MIN;
int64_t t21 = 17197636176501LL;
static int16_t x181 = 1854;
uint64_t x185 = 10276017540934LLU;
int8_t x190 = -1;
static uint64_t x206 = 1371634265754927LLU;
volatile uint64_t t26 = 4197542750941018LLU;
volatile int64_t x210 = -4170748389914585750LL;
static volatile uint64_t x212 = 58082090834658LLU;
int64_t x216 = -1LL;
static int64_t t28 = -7486233087LL;
int8_t x222 = INT8_MAX;
int32_t x265 = INT32_MIN;
int8_t x267 = INT8_MIN;
int32_t x275 = INT32_MIN;
int32_t x301 = -1;
uint32_t x308 = 15U;
uint64_t x312 = UINT64_MAX;
int8_t x328 = -1;
int32_t t42 = -6698;
volatile int16_t x329 = -1;
volatile int32_t t43 = -1;
uint8_t x357 = UINT8_MAX;
int8_t x392 = -1;
static volatile uint64_t x393 = 799430541585LLU;
int8_t x394 = -1;
uint32_t x396 = 9737873U;
static volatile int8_t x397 = 1;
int8_t x399 = INT8_MIN;
volatile int64_t t52 = 28497064542LL;
static int64_t x401 = -2197348218475LL;
int32_t x439 = -1;
uint32_t t56 = 743U;
volatile uint64_t x456 = 12033831954304LLU;
uint64_t x462 = 1LLU;
volatile int64_t x481 = 58167845897595097LL;
static int32_t x485 = INT32_MIN;
int8_t x487 = INT8_MAX;
uint64_t x494 = 1826519LLU;
uint32_t x495 = 3756008U;
volatile uint32_t t63 = 7440565U;
int32_t x516 = 23;
int8_t x524 = -2;
volatile uint32_t x528 = 1U;
uint32_t x529 = 8850U;
volatile uint32_t t67 = 1115146383U;
uint16_t x534 = UINT16_MAX;
int64_t x535 = -115139LL;
uint64_t t68 = 2LLU;
uint64_t x558 = 103013560LLU;
int16_t x560 = -13;
int16_t x563 = -9;
volatile uint64_t x565 = UINT64_MAX;
volatile int16_t x568 = -25;
uint32_t x571 = UINT32_MAX;
int16_t x581 = 39;
static int8_t x582 = INT8_MAX;
uint32_t x584 = 2982U;
uint8_t x586 = UINT8_MAX;
uint64_t t78 = 728710LLU;
volatile int64_t x589 = INT64_MIN;
int8_t x596 = INT8_MIN;
uint8_t x613 = 74U;
volatile uint32_t t83 = 23U;
uint16_t x629 = UINT16_MAX;
int32_t t86 = 467498305;
int8_t x661 = INT8_MIN;
static int16_t x662 = INT16_MIN;
static volatile uint16_t x663 = UINT16_MAX;
int8_t x671 = 1;
volatile uint64_t x677 = 114234LLU;
volatile int32_t x694 = INT32_MIN;
int32_t x709 = -1;
static volatile int32_t x712 = INT32_MIN;
uint64_t t99 = 3LLU;


void f0(void) {
	int8_t x5 = 46;
	int32_t x7 = -1;
	volatile uint32_t x8 = 2U;
	volatile uint64_t t0 = 512180311LLU;

	t0 = (x5%((x6&x7)*x8));

	if (t0 != 46LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	int16_t x10 = INT16_MAX;
	static uint8_t x11 = UINT8_MAX;
	volatile int32_t t1 = -100;

	t1 = (x9%((x10&x11)*x12));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x14 = UINT16_MAX;
	int16_t x15 = INT16_MIN;
	int32_t t2 = 15127111;

	t2 = (x13%((x14&x15)*x16));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x29 = -1;
	volatile int8_t x31 = INT8_MIN;
	static volatile uint64_t t3 = 78549LLU;

	t3 = (x29%((x30&x31)*x32));

	if (t3 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x39 = 1U;
	uint16_t x40 = UINT16_MAX;
	static uint64_t t4 = 0LLU;

	t4 = (x37%((x38&x39)*x40));

	if (t4 != 32767LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x45 = INT8_MAX;
	uint64_t x46 = 11882LLU;
	volatile int16_t x47 = -1;
	int8_t x48 = INT8_MIN;
	volatile uint64_t t5 = 30342408259777LLU;

	t5 = (x45%((x46&x47)*x48));

	if (t5 != 127LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x57 = 0LLU;
	int16_t x58 = -1;
	int16_t x59 = -2;
	volatile int32_t x60 = 7665157;

	t6 = (x57%((x58&x59)*x60));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x62 = INT8_MAX;
	int64_t x63 = INT64_MAX;

	t7 = (x61%((x62&x63)*x64));

	if (t7 != 2LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x65 = INT16_MIN;
	volatile int8_t x68 = -1;
	static int64_t t8 = -13190458535LL;

	t8 = (x65%((x66&x67)*x68));

	if (t8 != -32768LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x90 = INT32_MAX;
	uint32_t x91 = 110U;
	int64_t x92 = 532464LL;

	t9 = (x89%((x90&x91)*x92));

	if (t9 != 166LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x93 = 301U;
	int64_t x94 = INT64_MAX;
	int16_t x95 = INT16_MAX;
	uint16_t x96 = 10864U;
	static int64_t t10 = -1LL;

	t10 = (x93%((x94&x95)*x96));

	if (t10 != 301LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x97 = -1LL;
	volatile int64_t x98 = -1836397468LL;
	uint8_t x99 = 50U;
	int64_t t11 = 100979991057892LL;

	t11 = (x97%((x98&x99)*x100));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x105 = 7340;
	volatile int32_t x106 = -1;
	static uint32_t x107 = UINT32_MAX;
	uint8_t x108 = 102U;
	uint32_t t12 = 1U;

	t12 = (x105%((x106&x107)*x108));

	if (t12 != 7340U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x121 = 245;
	uint32_t x122 = UINT32_MAX;
	static volatile int8_t x123 = INT8_MIN;
	uint16_t x124 = 1343U;
	uint32_t t13 = 1U;

	t13 = (x121%((x122&x123)*x124));

	if (t13 != 245U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x129 = 1U;
	static uint64_t x131 = UINT64_MAX;
	volatile uint64_t t14 = 458521858LLU;

	t14 = (x129%((x130&x131)*x132));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x136 = INT16_MIN;
	volatile uint32_t t15 = 13375921U;

	t15 = (x133%((x134&x135)*x136));

	if (t15 != 3U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x137 = 12U;
	int8_t x138 = -1;
	uint32_t x139 = UINT32_MAX;
	volatile int8_t x140 = INT8_MAX;
	uint32_t t16 = 13095662U;

	t16 = (x137%((x138&x139)*x140));

	if (t16 != 12U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x142 = -1;
	uint16_t x143 = UINT16_MAX;
	uint64_t x144 = 14922569776025LLU;
	uint64_t t17 = 2675305LLU;

	t17 = (x141%((x142&x143)*x144));

	if (t17 != 843633088817180865LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x145 = 138U;
	volatile uint8_t x146 = 3U;
	uint32_t x147 = 1550U;
	int64_t x148 = -241486548671LL;
	volatile int64_t t18 = 2139715216453LL;

	t18 = (x145%((x146&x147)*x148));

	if (t18 != 138LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x153 = 0;
	static int16_t x154 = INT16_MIN;
	uint64_t x155 = 66333461177208907LLU;
	static volatile uint64_t t19 = 7LLU;

	t19 = (x153%((x154&x155)*x156));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x157 = INT64_MIN;
	int8_t x158 = 30;
	uint64_t x159 = 558637LLU;
	int16_t x160 = INT16_MIN;

	t20 = (x157%((x158&x159)*x160));

	if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x169 = 1016883LL;
	static int64_t x170 = -1LL;
	volatile int32_t x172 = -10215;

	t21 = (x169%((x170&x171)*x172));

	if (t21 != 1016883LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x182 = -28515;
	volatile int64_t x183 = 23264664LL;
	static int16_t x184 = 5841;
	int64_t t22 = 7356681568319LL;

	t22 = (x181%((x182&x183)*x184));

	if (t22 != 1854LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x186 = 23209U;
	int64_t x187 = -1LL;
	static uint8_t x188 = 3U;
	uint64_t t23 = 7203407LLU;

	t23 = (x185%((x186&x187)*x188));

	if (t23 != 51082LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x189 = 1;
	int64_t x191 = -1LL;
	volatile uint64_t x192 = 493219956745675130LLU;
	uint64_t t24 = 4036LLU;

	t24 = (x189%((x190&x191)*x192));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x193 = -1LL;
	static int8_t x194 = 31;
	int8_t x195 = -1;
	int8_t x196 = INT8_MIN;
	int64_t t25 = 28916476577775914LL;

	t25 = (x193%((x194&x195)*x196));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x205 = -1LL;
	int64_t x207 = -1003LL;
	int16_t x208 = -1;

	t26 = (x205%((x206&x207)*x208));

	if (t26 != 1371634265754628LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x209 = -553272;
	static uint64_t x211 = UINT64_MAX;
	uint64_t t27 = 0LLU;

	t27 = (x209%((x210&x211)*x212));

	if (t27 != 199035576348564924LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x213 = INT32_MIN;
	static int16_t x214 = INT16_MIN;
	int32_t x215 = INT32_MAX;

	t28 = (x213%((x214&x215)*x216));

	if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x217 = UINT8_MAX;
	int16_t x218 = -1;
	int16_t x219 = INT16_MIN;
	uint32_t x220 = 55U;
	uint32_t t29 = 2664U;

	t29 = (x217%((x218&x219)*x220));

	if (t29 != 255U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x221 = 381662056LL;
	volatile int64_t x223 = -1LL;
	int32_t x224 = INT32_MIN;
	int64_t t30 = 8LL;

	t30 = (x221%((x222&x223)*x224));

	if (t30 != 381662056LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x229 = 135431U;
	uint16_t x230 = 19U;
	static uint32_t x231 = 39129898U;
	int16_t x232 = INT16_MIN;
	uint32_t t31 = 20006108U;

	t31 = (x229%((x230&x231)*x232));

	if (t31 != 135431U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x237 = INT8_MIN;
	static uint32_t x238 = UINT32_MAX;
	static volatile int32_t x239 = 299146;
	int16_t x240 = 100;
	uint32_t t32 = 279531231U;

	t32 = (x237%((x238&x239)*x240));

	if (t32 != 17179368U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x253 = -28;
	uint16_t x254 = UINT16_MAX;
	volatile int16_t x255 = -2;
	int32_t x256 = -1;
	int32_t t33 = 418515508;

	t33 = (x253%((x254&x255)*x256));

	if (t33 != -28) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x261 = UINT16_MAX;
	int8_t x262 = 63;
	volatile int32_t x263 = -1;
	int32_t x264 = 510;
	volatile int32_t t34 = -42;

	t34 = (x261%((x262&x263)*x264));

	if (t34 != 1275) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x266 = UINT16_MAX;
	static volatile int8_t x268 = 24;
	int32_t t35 = 12;

	t35 = (x265%((x266&x267)*x268));

	if (t35 != -8192) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x273 = 29U;
	int64_t x274 = -738535739139LL;
	uint64_t x276 = 1722LLU;
	uint64_t t36 = 5554795047386LLU;

	t36 = (x273%((x274&x275)*x276));

	if (t36 != 29LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x289 = INT8_MIN;
	static int64_t x290 = INT64_MAX;
	static uint64_t x291 = UINT64_MAX;
	uint32_t x292 = 3439U;
	uint64_t t37 = 9LLU;

	t37 = (x289%((x290&x291)*x292));

	if (t37 != 6750LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x302 = -25;
	volatile uint8_t x303 = 39U;
	uint16_t x304 = 20131U;
	volatile int32_t t38 = 482190633;

	t38 = (x301%((x302&x303)*x304));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x305 = 86U;
	volatile int32_t x306 = INT32_MIN;
	int8_t x307 = INT8_MIN;
	volatile uint32_t t39 = 1446U;

	t39 = (x305%((x306&x307)*x308));

	if (t39 != 86U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x309 = INT16_MIN;
	static int16_t x310 = INT16_MIN;
	int16_t x311 = -1;
	static uint64_t t40 = 69586528608932LLU;

	t40 = (x309%((x310&x311)*x312));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x321 = -1;
	int64_t x322 = INT64_MAX;
	volatile int32_t x323 = 390034;
	static uint32_t x324 = UINT32_MAX;
	int64_t t41 = 1872725982291684LL;

	t41 = (x321%((x322&x323)*x324));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x325 = UINT8_MAX;
	static int8_t x326 = INT8_MIN;
	static uint8_t x327 = UINT8_MAX;

	t42 = (x325%((x326&x327)*x328));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x330 = INT16_MIN;
	int16_t x331 = -1;
	static volatile int8_t x332 = INT8_MIN;

	t43 = (x329%((x330&x331)*x332));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x333 = -1;
	uint64_t x334 = UINT64_MAX;
	int8_t x335 = INT8_MIN;
	int64_t x336 = INT64_MAX;
	uint64_t t44 = 30594LLU;

	t44 = (x333%((x334&x335)*x336));

	if (t44 != 127LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x345 = 15U;
	uint32_t x346 = 31655U;
	volatile uint8_t x347 = 14U;
	uint8_t x348 = UINT8_MAX;
	volatile uint32_t t45 = 1046U;

	t45 = (x345%((x346&x347)*x348));

	if (t45 != 15U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x353 = UINT8_MAX;
	static uint16_t x354 = UINT16_MAX;
	uint64_t x355 = 436313466626481273LLU;
	volatile int16_t x356 = INT16_MIN;
	uint64_t t46 = 375311534475902LLU;

	t46 = (x353%((x354&x355)*x356));

	if (t46 != 255LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x358 = -1;
	uint16_t x359 = 7505U;
	uint8_t x360 = UINT8_MAX;
	static int32_t t47 = -28;

	t47 = (x357%((x358&x359)*x360));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x369 = INT16_MIN;
	int16_t x370 = -1;
	static int8_t x371 = INT8_MIN;
	int32_t x372 = -1;
	int32_t t48 = 322967;

	t48 = (x369%((x370&x371)*x372));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x381 = -1;
	int16_t x382 = INT16_MIN;
	static int16_t x383 = INT16_MIN;
	uint16_t x384 = UINT16_MAX;
	static volatile int32_t t49 = 11672902;

	t49 = (x381%((x382&x383)*x384));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x389 = -20556049227LL;
	int16_t x390 = INT16_MAX;
	uint32_t x391 = 277U;
	volatile int64_t t50 = -8138LL;

	t50 = (x389%((x390&x391)*x392));

	if (t50 != -3376181151LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x395 = 10555LLU;
	static volatile uint64_t t51 = 0LLU;

	t51 = (x393%((x394&x395)*x396));

	if (t51 != 79947794980LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x398 = -17;
	int64_t x400 = -1LL;

	t52 = (x397%((x398&x399)*x400));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x402 = 63U;
	int32_t x403 = -40;
	static volatile int16_t x404 = INT16_MAX;
	volatile int64_t t53 = -1511LL;

	t53 = (x401%((x402&x403)*x404));

	if (t53 != -14011LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x417 = -1;
	volatile int8_t x418 = -6;
	uint16_t x419 = 13U;
	int64_t x420 = -1LL;
	int64_t t54 = -330LL;

	t54 = (x417%((x418&x419)*x420));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x429 = -1;
	uint64_t x430 = 4344685662514522971LLU;
	int16_t x431 = INT16_MIN;
	uint8_t x432 = 101U;
	volatile uint64_t t55 = 1746688424615LLU;

	t55 = (x429%((x430&x431)*x432));

	if (t55 != 3908605855063539711LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x437 = -25;
	static int16_t x438 = INT16_MIN;
	uint32_t x440 = 1U;

	t56 = (x437%((x438&x439)*x440));

	if (t56 != 32743U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x453 = 230371210201LLU;
	int16_t x454 = INT16_MIN;
	uint32_t x455 = 1113378U;
	static uint64_t t57 = 3LLU;

	t57 = (x453%((x454&x455)*x456));

	if (t57 != 230371210201LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x461 = -1;
	uint16_t x463 = UINT16_MAX;
	uint32_t x464 = UINT32_MAX;
	uint64_t t58 = 530LLU;

	t58 = (x461%((x462&x463)*x464));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x482 = 3U;
	uint32_t x483 = UINT32_MAX;
	static uint64_t x484 = 8285761LLU;
	volatile uint64_t t59 = 1997LLU;

	t59 = (x481%((x482&x483)*x484));

	if (t59 != 8283334LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x486 = 2;
	static int32_t x488 = -1;
	static volatile int32_t t60 = 3239;

	t60 = (x485%((x486&x487)*x488));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x493 = INT64_MIN;
	static uint64_t x496 = 6161911517103819125LLU;
	volatile uint64_t t61 = 638509564145605LLU;

	t61 = (x493%((x494&x495)*x496));

	if (t61 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x505 = 0U;
	int32_t x506 = INT32_MAX;
	static int32_t x507 = -1;
	volatile uint32_t x508 = UINT32_MAX;
	uint32_t t62 = 639414U;

	t62 = (x505%((x506&x507)*x508));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x509 = UINT32_MAX;
	uint16_t x510 = UINT16_MAX;
	int16_t x511 = INT16_MAX;
	int8_t x512 = INT8_MAX;

	t63 = (x509%((x510&x511)*x512));

	if (t63 != 393207U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x513 = -3728369;
	int64_t x514 = -1LL;
	uint32_t x515 = 708U;
	int64_t t64 = 65094793249283LL;

	t64 = (x513%((x514&x515)*x516));

	if (t64 != -15617LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x521 = 120494LLU;
	uint16_t x522 = UINT16_MAX;
	static uint8_t x523 = 127U;
	uint64_t t65 = 1807162LLU;

	t65 = (x521%((x522&x523)*x524));

	if (t65 != 120494LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x525 = 1602252892792LLU;
	int8_t x526 = INT8_MAX;
	int8_t x527 = 4;
	volatile uint64_t t66 = 17396826305LLU;

	t66 = (x525%((x526&x527)*x528));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x530 = INT8_MAX;
	static int32_t x531 = INT32_MAX;
	static uint32_t x532 = 120004206U;

	t67 = (x529%((x530&x531)*x532));

	if (t67 != 8850U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x533 = UINT64_MAX;
	volatile uint16_t x536 = 2U;

	t68 = (x533%((x534&x535)*x536));

	if (t68 != 13137LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x537 = 3385095192765335685LL;
	int64_t x538 = -60770442LL;
	int32_t x539 = 325;
	int32_t x540 = 154354;
	int64_t t69 = 5431945916LL;

	t69 = (x537%((x538&x539)*x540));

	if (t69 != 26509629LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x541 = 1U;
	static uint64_t x542 = 14420LLU;
	uint64_t x543 = 7617410061120001795LLU;
	int8_t x544 = 2;
	volatile uint64_t t70 = 43608942LLU;

	t70 = (x541%((x542&x543)*x544));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x545 = INT64_MAX;
	int8_t x546 = INT8_MIN;
	uint32_t x547 = UINT32_MAX;
	int8_t x548 = 2;
	static int64_t t71 = -243LL;

	t71 = (x545%((x546&x547)*x548));

	if (t71 != 32767LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x557 = UINT64_MAX;
	int8_t x559 = -1;
	uint64_t t72 = 4192504217368LLU;

	t72 = (x557%((x558&x559)*x560));

	if (t72 != 1339176279LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x561 = INT8_MAX;
	uint16_t x562 = 3U;
	int32_t x564 = -7036;
	volatile int32_t t73 = 61;

	t73 = (x561%((x562&x563)*x564));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x566 = INT16_MIN;
	static int8_t x567 = -29;
	static uint64_t t74 = 527LLU;

	t74 = (x565%((x566&x567)*x568));

	if (t74 != 393215LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x569 = INT16_MIN;
	uint16_t x570 = 1306U;
	int8_t x572 = INT8_MIN;
	static volatile uint32_t t75 = 123160U;

	t75 = (x569%((x570&x571)*x572));

	if (t75 != 134400U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x577 = INT16_MIN;
	int8_t x578 = -1;
	int16_t x579 = INT16_MAX;
	uint16_t x580 = 397U;
	int32_t t76 = -30;

	t76 = (x577%((x578&x579)*x580));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x583 = -1;
	static uint32_t t77 = 88311U;

	t77 = (x581%((x582&x583)*x584));

	if (t77 != 39U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x585 = 2U;
	uint64_t x587 = UINT64_MAX;
	volatile int16_t x588 = INT16_MIN;

	t78 = (x585%((x586&x587)*x588));

	if (t78 != 2LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x590 = 3;
	int64_t x591 = -14LL;
	uint32_t x592 = 19U;
	int64_t t79 = -3LL;

	t79 = (x589%((x590&x591)*x592));

	if (t79 != -18LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x593 = UINT32_MAX;
	volatile int64_t x594 = 14711051266758LL;
	static uint8_t x595 = 26U;
	int64_t t80 = -97353637359980LL;

	t80 = (x593%((x594&x595)*x596));

	if (t80 != 255LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x601 = INT64_MIN;
	int64_t x602 = 1810706536844392849LL;
	uint16_t x603 = UINT16_MAX;
	uint32_t x604 = UINT32_MAX;
	volatile int64_t t81 = 4931272877788845LL;

	t81 = (x601%((x602&x603)*x604));

	if (t81 != -43656195070028LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x609 = INT64_MIN;
	int8_t x610 = -1;
	uint8_t x611 = 13U;
	int16_t x612 = -1;
	int64_t t82 = -23851445587LL;

	t82 = (x609%((x610&x611)*x612));

	if (t82 != -8LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x614 = INT32_MIN;
	int8_t x615 = INT8_MIN;
	uint32_t x616 = UINT32_MAX;

	t83 = (x613%((x614&x615)*x616));

	if (t83 != 74U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x617 = INT16_MIN;
	uint8_t x618 = UINT8_MAX;
	static int8_t x619 = -1;
	static int16_t x620 = INT16_MIN;
	volatile int32_t t84 = 405115;

	t84 = (x617%((x618&x619)*x620));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x625 = 37U;
	int16_t x626 = 5308;
	uint32_t x627 = 34612197U;
	static volatile int32_t x628 = -52;
	volatile uint32_t t85 = 1312U;

	t85 = (x625%((x626&x627)*x628));

	if (t85 != 37U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x630 = INT8_MAX;
	volatile uint16_t x631 = 11068U;
	int16_t x632 = 42;

	t86 = (x629%((x630&x631)*x632));

	if (t86 != 15) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x633 = 43;
	volatile uint64_t x634 = UINT64_MAX;
	uint8_t x635 = 14U;
	static uint64_t x636 = 25LLU;
	volatile uint64_t t87 = 679624707193658LLU;

	t87 = (x633%((x634&x635)*x636));

	if (t87 != 43LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x637 = 10U;
	static int16_t x638 = INT16_MIN;
	int16_t x639 = -352;
	uint16_t x640 = 11U;
	volatile int32_t t88 = 1;

	t88 = (x637%((x638&x639)*x640));

	if (t88 != 10) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x649 = -1;
	volatile int8_t x650 = -1;
	static int32_t x651 = -1;
	uint16_t x652 = UINT16_MAX;
	int32_t t89 = -143;

	t89 = (x649%((x650&x651)*x652));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x657 = INT32_MIN;
	int64_t x658 = -5310LL;
	int8_t x659 = -1;
	int32_t x660 = -1;
	volatile int64_t t90 = -26194821124905416LL;

	t90 = (x657%((x658&x659)*x660));

	if (t90 != -2828LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x664 = INT8_MAX;
	int32_t t91 = 47917;

	t91 = (x661%((x662&x663)*x664));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x669 = 201U;
	int8_t x670 = -57;
	uint32_t x672 = 9450581U;
	uint32_t t92 = 2U;

	t92 = (x669%((x670&x671)*x672));

	if (t92 != 201U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x678 = -1LL;
	static uint32_t x679 = UINT32_MAX;
	int8_t x680 = -15;
	volatile uint64_t t93 = 1556753LLU;

	t93 = (x677%((x678&x679)*x680));

	if (t93 != 114234LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x681 = UINT8_MAX;
	static uint32_t x682 = UINT32_MAX;
	int32_t x683 = INT32_MAX;
	int8_t x684 = INT8_MIN;
	volatile uint32_t t94 = 63928562U;

	t94 = (x681%((x682&x683)*x684));

	if (t94 != 127U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x685 = 42U;
	uint16_t x686 = 14615U;
	static uint16_t x687 = 7U;
	uint16_t x688 = 149U;
	static int32_t t95 = 2;

	t95 = (x685%((x686&x687)*x688));

	if (t95 != 42) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x693 = 0U;
	int32_t x695 = INT32_MIN;
	uint32_t x696 = 259319U;
	volatile uint32_t t96 = 376899U;

	t96 = (x693%((x694&x695)*x696));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x697 = INT64_MIN;
	static int32_t x698 = INT32_MIN;
	static int16_t x699 = -1;
	uint32_t x700 = 35275U;
	volatile int64_t t97 = -85884252266598LL;

	t97 = (x697%((x698&x699)*x700));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x710 = -1;
	uint32_t x711 = 1019U;
	uint32_t t98 = 106190U;

	t98 = (x709%((x710&x711)*x712));

	if (t98 != 2147483647U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x725 = -1;
	static volatile int32_t x726 = -1;
	int16_t x727 = -1;
	uint64_t x728 = UINT64_MAX;

	t99 = (x725%((x726&x727)*x728));

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

