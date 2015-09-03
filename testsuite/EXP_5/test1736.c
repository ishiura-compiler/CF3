#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x25 = UINT8_MAX;
uint16_t x41 = 2U;
int8_t x80 = -1;
uint16_t x85 = UINT16_MAX;
uint16_t x118 = 11U;
static int16_t x119 = INT16_MIN;
static int32_t x124 = -1;
volatile uint64_t x142 = 12LLU;
volatile int32_t t8 = -680315;
int32_t x151 = INT32_MIN;
static int32_t t9 = 1;
int32_t t13 = 513;
uint16_t x189 = 705U;
static int8_t x192 = INT8_MIN;
static uint64_t x209 = 1843LLU;
int64_t x211 = INT64_MIN;
volatile int8_t x212 = INT8_MAX;
volatile uint64_t t16 = 31956189160LLU;
uint64_t x213 = UINT64_MAX;
volatile uint64_t t17 = UINT64_MAX;
uint64_t x235 = 1545160LLU;
int64_t x240 = 34344457248777LL;
int32_t t20 = 3093;
int32_t x274 = INT32_MIN;
uint8_t x281 = UINT8_MAX;
static int16_t x283 = INT16_MAX;
int8_t x294 = INT8_MIN;
int8_t x295 = INT8_MIN;
volatile int16_t x322 = -1;
int16_t x326 = 3;
uint64_t x346 = 528158338185LLU;
volatile uint64_t x372 = 12026806498128500LLU;
int64_t x373 = 66LL;
uint8_t x375 = UINT8_MAX;
int64_t t34 = 241438832590911LL;
static uint8_t x385 = 0U;
int8_t x387 = INT8_MIN;
int64_t x398 = -1LL;
volatile int32_t t36 = -3992;
volatile int16_t x401 = 80;
static volatile uint32_t x403 = 5U;
volatile int32_t t37 = 25353916;
volatile uint8_t x407 = 1U;
static uint32_t x415 = UINT32_MAX;
volatile uint32_t t39 = 109U;
uint32_t x421 = 4208818U;
int32_t x424 = INT32_MIN;
volatile int32_t x442 = -13052324;
uint32_t x461 = 2U;
uint32_t x463 = 48U;
uint32_t x464 = 109U;
uint32_t x466 = UINT32_MAX;
int64_t x474 = -1LL;
int64_t x476 = INT64_MIN;
int8_t x481 = 5;
int16_t x486 = 0;
static int16_t x489 = 2219;
uint32_t x512 = UINT32_MAX;
int64_t x524 = -265256857918354LL;
int16_t x527 = -1;
volatile int32_t t52 = 26205;
int64_t x547 = 554801955LL;
uint64_t x594 = 4LLU;
uint32_t x595 = 644429470U;
volatile uint32_t x596 = 28639U;
static int8_t x628 = INT8_MAX;
uint32_t x629 = UINT32_MAX;
uint16_t x632 = UINT16_MAX;
uint64_t t61 = UINT64_MAX;
uint64_t x653 = UINT64_MAX;
int8_t x688 = -2;
volatile int16_t x699 = 0;
volatile int32_t t67 = 15457876;
volatile uint8_t x726 = UINT8_MAX;
int8_t x728 = -15;
uint16_t x731 = 1U;
uint32_t x744 = 175140U;
int8_t x749 = 0;
static uint64_t x751 = UINT64_MAX;
uint16_t x772 = UINT16_MAX;
volatile int32_t t73 = 45076512;
int16_t x789 = INT16_MAX;
volatile int8_t x790 = INT8_MIN;
int8_t x791 = INT8_MAX;
static uint32_t x815 = 89187U;
int32_t x823 = INT32_MIN;
int8_t x840 = INT8_MIN;
int32_t t79 = 2012199;
uint16_t x849 = 1U;
int8_t x852 = INT8_MAX;
uint64_t t82 = 35117504827810943LLU;
volatile int64_t x874 = INT64_MAX;
uint32_t x876 = 982U;
int32_t t83 = 26144;
volatile int32_t t84 = 5821;
uint64_t x882 = 170790610LLU;
int64_t t85 = 18964447140LL;
volatile uint16_t x885 = 62U;
int8_t x886 = -1;
int32_t t86 = -119747533;
volatile int8_t x890 = INT8_MIN;
int64_t t88 = INT64_MAX;
int32_t x914 = INT32_MIN;
uint32_t x917 = 0U;
static volatile uint32_t t90 = 414701019U;
volatile int32_t t91 = 475607056;
uint64_t x945 = UINT64_MAX;
int32_t x955 = 1;
static uint64_t t93 = UINT64_MAX;
volatile int32_t x958 = INT32_MIN;
int32_t t94 = -378385;
int64_t x988 = INT64_MIN;
int32_t t98 = -177;
static volatile uint8_t x1010 = UINT8_MAX;
int32_t x1011 = 30356;
uint32_t x1012 = 1793333U;


void f0(void) {
	static uint64_t x26 = 1761659551297057LLU;
	static uint64_t x27 = 736LLU;
	uint64_t x28 = 2065138386706542770LLU;
	volatile int32_t t0 = -5578333;

	t0 = (x25>>((x26&x27)/x28));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x42 = INT8_MIN;
	uint32_t x43 = 3U;
	int8_t x44 = 3;
	volatile int32_t t1 = 33204;

	t1 = (x41>>((x42&x43)/x44));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x69 = 11329665800781LLU;
	uint8_t x70 = 30U;
	uint32_t x71 = 31U;
	static int8_t x72 = INT8_MIN;
	uint64_t t2 = 14741105086LLU;

	t2 = (x69>>((x70&x71)/x72));

	if (t2 != 11329665800781LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x77 = 36936U;
	int64_t x78 = 8LL;
	int16_t x79 = INT16_MIN;
	volatile uint32_t t3 = 1944766U;

	t3 = (x77>>((x78&x79)/x80));

	if (t3 != 36936U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x86 = UINT8_MAX;
	int64_t x87 = -3874433LL;
	static uint32_t x88 = 529U;
	int32_t t4 = 177;

	t4 = (x85>>((x86&x87)/x88));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x117 = 1U;
	static int32_t x120 = INT32_MIN;
	volatile uint32_t t5 = 999084U;

	t5 = (x117>>((x118&x119)/x120));

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x121 = 6129643LLU;
	int64_t x122 = -1LL;
	int8_t x123 = -15;
	volatile uint64_t t6 = 14LLU;

	t6 = (x121>>((x122&x123)/x124));

	if (t6 != 187LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x129 = 2;
	static volatile int32_t x130 = INT32_MAX;
	uint8_t x131 = 14U;
	int8_t x132 = 3;
	volatile int32_t t7 = 0;

	t7 = (x129>>((x130&x131)/x132));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x141 = 846U;
	uint32_t x143 = 1142992U;
	static uint32_t x144 = UINT32_MAX;

	t8 = (x141>>((x142&x143)/x144));

	if (t8 != 846) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x149 = INT8_MAX;
	int8_t x150 = -26;
	volatile int64_t x152 = INT64_MIN;

	t9 = (x149>>((x150&x151)/x152));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x161 = INT16_MAX;
	int8_t x162 = 1;
	int8_t x163 = INT8_MIN;
	uint64_t x164 = 2211118893961LLU;
	int32_t t10 = 29993284;

	t10 = (x161>>((x162&x163)/x164));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x165 = 8000U;
	static uint64_t x166 = 279310261LLU;
	static int64_t x167 = -158129340LL;
	int16_t x168 = INT16_MIN;
	int32_t t11 = -19;

	t11 = (x165>>((x166&x167)/x168));

	if (t11 != 8000) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x173 = INT32_MAX;
	static int8_t x174 = 2;
	int8_t x175 = INT8_MIN;
	volatile int64_t x176 = -1LL;
	volatile int32_t t12 = INT32_MAX;

	t12 = (x173>>((x174&x175)/x176));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x185 = UINT16_MAX;
	volatile uint64_t x186 = 6288122237149LLU;
	static uint32_t x187 = UINT32_MAX;
	int32_t x188 = -1;

	t13 = (x185>>((x186&x187)/x188));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x190 = INT8_MAX;
	int16_t x191 = -1;
	int32_t t14 = -7333318;

	t14 = (x189>>((x190&x191)/x192));

	if (t14 != 705) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x205 = 1;
	int16_t x206 = 0;
	int8_t x207 = -1;
	uint16_t x208 = UINT16_MAX;
	int32_t t15 = -386;

	t15 = (x205>>((x206&x207)/x208));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x210 = UINT32_MAX;

	t16 = (x209>>((x210&x211)/x212));

	if (t16 != 1843LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x214 = 15U;
	int16_t x215 = -34;
	volatile uint16_t x216 = 1970U;

	t17 = (x213>>((x214&x215)/x216));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x233 = 836;
	int32_t x234 = -1;
	volatile uint32_t x236 = UINT32_MAX;
	volatile int32_t t18 = -7;

	t18 = (x233>>((x234&x235)/x236));

	if (t18 != 836) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x237 = INT8_MAX;
	int16_t x238 = 1;
	uint16_t x239 = 18U;
	int32_t t19 = -1247572;

	t19 = (x237>>((x238&x239)/x240));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x241 = 5U;
	volatile int8_t x242 = -1;
	int16_t x243 = INT16_MIN;
	volatile int64_t x244 = 857284535395030438LL;

	t20 = (x241>>((x242&x243)/x244));

	if (t20 != 5) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x249 = UINT32_MAX;
	uint64_t x250 = 1175975680LLU;
	int32_t x251 = -537;
	static int64_t x252 = INT64_MIN;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x249>>((x250&x251)/x252));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x253 = 7U;
	static int16_t x254 = INT16_MIN;
	int32_t x255 = INT32_MIN;
	int32_t x256 = INT32_MIN;
	static int32_t t22 = -5;

	t22 = (x253>>((x254&x255)/x256));

	if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x273 = 10U;
	static uint8_t x275 = 63U;
	int64_t x276 = INT64_MIN;
	volatile int32_t t23 = 858;

	t23 = (x273>>((x274&x275)/x276));

	if (t23 != 10) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x282 = INT16_MIN;
	int16_t x284 = -1;
	int32_t t24 = 119;

	t24 = (x281>>((x282&x283)/x284));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x293 = INT16_MAX;
	int16_t x296 = INT16_MIN;
	volatile int32_t t25 = -562231;

	t25 = (x293>>((x294&x295)/x296));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x297 = UINT64_MAX;
	volatile int64_t x298 = 0LL;
	volatile uint16_t x299 = 1U;
	int8_t x300 = INT8_MIN;
	uint64_t t26 = UINT64_MAX;

	t26 = (x297>>((x298&x299)/x300));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x301 = INT32_MAX;
	uint8_t x302 = 43U;
	int64_t x303 = INT64_MIN;
	uint8_t x304 = 1U;
	volatile int32_t t27 = INT32_MAX;

	t27 = (x301>>((x302&x303)/x304));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x305 = UINT16_MAX;
	static uint32_t x306 = 3844U;
	int32_t x307 = -53345148;
	int64_t x308 = -118041LL;
	volatile int32_t t28 = 39666082;

	t28 = (x305>>((x306&x307)/x308));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x321 = 1687514LL;
	int32_t x323 = -1;
	static int32_t x324 = INT32_MAX;
	int64_t t29 = 85144339830LL;

	t29 = (x321>>((x322&x323)/x324));

	if (t29 != 1687514LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x325 = 2U;
	uint8_t x327 = 104U;
	volatile int16_t x328 = -11;
	int32_t t30 = -122;

	t30 = (x325>>((x326&x327)/x328));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x345 = 35LLU;
	int16_t x347 = -1;
	static int64_t x348 = INT64_MIN;
	uint64_t t31 = 57501LLU;

	t31 = (x345>>((x346&x347)/x348));

	if (t31 != 35LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x353 = 26U;
	int32_t x354 = INT32_MIN;
	volatile int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MAX;
	int32_t t32 = 8198233;

	t32 = (x353>>((x354&x355)/x356));

	if (t32 != 26) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x369 = INT32_MAX;
	uint64_t x370 = UINT64_MAX;
	int32_t x371 = 679734634;
	static volatile int32_t t33 = INT32_MAX;

	t33 = (x369>>((x370&x371)/x372));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x374 = UINT32_MAX;
	volatile int16_t x376 = INT16_MAX;

	t34 = (x373>>((x374&x375)/x376));

	if (t34 != 66LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x386 = 1U;
	int16_t x388 = 111;
	int32_t t35 = -100;

	t35 = (x385>>((x386&x387)/x388));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x397 = 7U;
	uint8_t x399 = 101U;
	static uint16_t x400 = UINT16_MAX;

	t36 = (x397>>((x398&x399)/x400));

	if (t36 != 7) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x402 = -1;
	uint8_t x404 = UINT8_MAX;

	t37 = (x401>>((x402&x403)/x404));

	if (t37 != 80) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x405 = 12U;
	int16_t x406 = INT16_MIN;
	uint16_t x408 = UINT16_MAX;
	static volatile int32_t t38 = -1041062;

	t38 = (x405>>((x406&x407)/x408));

	if (t38 != 12) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x413 = 1753743215U;
	int16_t x414 = 57;
	uint32_t x416 = UINT32_MAX;

	t39 = (x413>>((x414&x415)/x416));

	if (t39 != 1753743215U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x422 = INT8_MAX;
	int8_t x423 = -1;
	uint32_t t40 = 2800U;

	t40 = (x421>>((x422&x423)/x424));

	if (t40 != 4208818U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x437 = UINT32_MAX;
	int32_t x438 = INT32_MIN;
	volatile uint16_t x439 = UINT16_MAX;
	int16_t x440 = -109;
	volatile uint32_t t41 = UINT32_MAX;

	t41 = (x437>>((x438&x439)/x440));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x441 = 6U;
	uint64_t x443 = 9696569LLU;
	uint64_t x444 = 18263083LLU;
	volatile int32_t t42 = -31464284;

	t42 = (x441>>((x442&x443)/x444));

	if (t42 != 6) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x445 = 0LLU;
	static int32_t x446 = -199;
	int8_t x447 = -1;
	int16_t x448 = INT16_MIN;
	uint64_t t43 = 2342592797LLU;

	t43 = (x445>>((x446&x447)/x448));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x462 = INT64_MIN;
	uint32_t t44 = 436497U;

	t44 = (x461>>((x462&x463)/x464));

	if (t44 != 2U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x465 = 6767U;
	uint16_t x467 = 80U;
	uint8_t x468 = 41U;
	int32_t t45 = -131253;

	t45 = (x465>>((x466&x467)/x468));

	if (t45 != 3383) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x473 = UINT32_MAX;
	int8_t x475 = 1;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = (x473>>((x474&x475)/x476));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x482 = INT16_MAX;
	uint64_t x483 = 6LLU;
	int64_t x484 = INT64_MAX;
	volatile int32_t t47 = -3850041;

	t47 = (x481>>((x482&x483)/x484));

	if (t47 != 5) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x485 = 43U;
	int8_t x487 = -55;
	static int16_t x488 = -1;
	int32_t t48 = 156507;

	t48 = (x485>>((x486&x487)/x488));

	if (t48 != 43) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x490 = -2;
	uint32_t x491 = 472U;
	int32_t x492 = 217;
	volatile int32_t t49 = -239;

	t49 = (x489>>((x490&x491)/x492));

	if (t49 != 554) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x509 = 1;
	uint8_t x510 = 1U;
	int32_t x511 = INT32_MAX;
	int32_t t50 = -13822;

	t50 = (x509>>((x510&x511)/x512));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x521 = 485;
	static int8_t x522 = INT8_MAX;
	int32_t x523 = -2126;
	volatile int32_t t51 = -1;

	t51 = (x521>>((x522&x523)/x524));

	if (t51 != 485) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x525 = 1U;
	int64_t x526 = 683295854LL;
	int64_t x528 = -2130748808LL;

	t52 = (x525>>((x526&x527)/x528));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x545 = 335U;
	uint32_t x546 = 6U;
	int16_t x548 = INT16_MIN;
	int32_t t53 = 30;

	t53 = (x545>>((x546&x547)/x548));

	if (t53 != 335) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x553 = 0;
	int8_t x554 = INT8_MAX;
	volatile int64_t x555 = INT64_MAX;
	uint8_t x556 = 62U;
	int32_t t54 = 8107;

	t54 = (x553>>((x554&x555)/x556));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x561 = 3239937U;
	int64_t x562 = -1LL;
	uint8_t x563 = 0U;
	volatile uint8_t x564 = 2U;
	uint32_t t55 = 25867U;

	t55 = (x561>>((x562&x563)/x564));

	if (t55 != 3239937U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x565 = 3U;
	uint64_t x566 = UINT64_MAX;
	int16_t x567 = INT16_MIN;
	int8_t x568 = -1;
	volatile int32_t t56 = 1134599;

	t56 = (x565>>((x566&x567)/x568));

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x593 = 7370562LL;
	int64_t t57 = 4989016549753918LL;

	t57 = (x593>>((x594&x595)/x596));

	if (t57 != 7370562LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x621 = INT32_MAX;
	uint8_t x622 = 125U;
	uint16_t x623 = 45U;
	uint64_t x624 = UINT64_MAX;
	int32_t t58 = INT32_MAX;

	t58 = (x621>>((x622&x623)/x624));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x625 = UINT32_MAX;
	uint16_t x626 = 3U;
	uint32_t x627 = 56298433U;
	volatile uint32_t t59 = UINT32_MAX;

	t59 = (x625>>((x626&x627)/x628));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x630 = INT16_MIN;
	int8_t x631 = 38;
	uint32_t t60 = UINT32_MAX;

	t60 = (x629>>((x630&x631)/x632));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x641 = UINT64_MAX;
	int64_t x642 = INT64_MIN;
	volatile int64_t x643 = 1419734LL;
	int32_t x644 = -1;

	t61 = (x641>>((x642&x643)/x644));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x645 = 779926020782LLU;
	volatile int32_t x646 = INT32_MIN;
	static uint8_t x647 = 6U;
	static uint8_t x648 = 27U;
	static volatile uint64_t t62 = 7064677LLU;

	t62 = (x645>>((x646&x647)/x648));

	if (t62 != 779926020782LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x654 = 18U;
	static volatile uint64_t x655 = 5097174LLU;
	uint64_t x656 = 54355295LLU;
	uint64_t t63 = UINT64_MAX;

	t63 = (x653>>((x654&x655)/x656));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x677 = 7335946LLU;
	uint8_t x678 = UINT8_MAX;
	volatile int64_t x679 = -124612LL;
	int8_t x680 = INT8_MAX;
	uint64_t t64 = 5LLU;

	t64 = (x677>>((x678&x679)/x680));

	if (t64 != 7335946LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x685 = 13247464077180762LLU;
	int64_t x686 = INT64_MIN;
	uint64_t x687 = 5389LLU;
	static uint64_t t65 = 135130245688686263LLU;

	t65 = (x685>>((x686&x687)/x688));

	if (t65 != 13247464077180762LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x693 = INT64_MAX;
	volatile uint32_t x694 = UINT32_MAX;
	uint16_t x695 = 7U;
	volatile int16_t x696 = 106;
	volatile int64_t t66 = INT64_MAX;

	t66 = (x693>>((x694&x695)/x696));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x697 = 123U;
	static uint64_t x698 = 28652992616LLU;
	int32_t x700 = INT32_MAX;

	t67 = (x697>>((x698&x699)/x700));

	if (t67 != 123) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x721 = 1983120073411LL;
	int32_t x722 = 55949127;
	uint64_t x723 = 52590LLU;
	static uint32_t x724 = 803250U;
	volatile int64_t t68 = 5269997LL;

	t68 = (x721>>((x722&x723)/x724));

	if (t68 != 1983120073411LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x725 = UINT8_MAX;
	static volatile uint32_t x727 = 739U;
	int32_t t69 = -29786;

	t69 = (x725>>((x726&x727)/x728));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x729 = 0;
	int64_t x730 = INT64_MIN;
	int8_t x732 = INT8_MAX;
	volatile int32_t t70 = -307;

	t70 = (x729>>((x730&x731)/x732));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x741 = 8805U;
	uint16_t x742 = 2133U;
	uint16_t x743 = 5134U;
	int32_t t71 = -65181335;

	t71 = (x741>>((x742&x743)/x744));

	if (t71 != 8805) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x750 = 57U;
	int16_t x752 = -1281;
	volatile int32_t t72 = 50;

	t72 = (x749>>((x750&x751)/x752));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x769 = 223U;
	volatile int32_t x770 = INT32_MIN;
	uint8_t x771 = UINT8_MAX;

	t73 = (x769>>((x770&x771)/x772));

	if (t73 != 223) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x777 = 3;
	static uint8_t x778 = 41U;
	static int16_t x779 = INT16_MIN;
	uint32_t x780 = 351718U;
	static int32_t t74 = -136371452;

	t74 = (x777>>((x778&x779)/x780));

	if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x792 = -1LL;
	volatile int32_t t75 = 5;

	t75 = (x789>>((x790&x791)/x792));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x813 = 15459755LLU;
	int64_t x814 = INT64_MIN;
	uint32_t x816 = UINT32_MAX;
	static uint64_t t76 = 116013047424552696LLU;

	t76 = (x813>>((x814&x815)/x816));

	if (t76 != 15459755LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x821 = 45U;
	int32_t x822 = 900424;
	int8_t x824 = INT8_MAX;
	volatile int32_t t77 = -10485572;

	t77 = (x821>>((x822&x823)/x824));

	if (t77 != 45) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x829 = UINT32_MAX;
	static int16_t x830 = -93;
	int32_t x831 = -50;
	static uint32_t x832 = UINT32_MAX;
	uint32_t t78 = UINT32_MAX;

	t78 = (x829>>((x830&x831)/x832));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x837 = 1264585;
	static int64_t x838 = 54711842856389LL;
	static uint64_t x839 = 2063890951LLU;

	t79 = (x837>>((x838&x839)/x840));

	if (t79 != 1264585) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x841 = 27U;
	uint8_t x842 = UINT8_MAX;
	int16_t x843 = INT16_MIN;
	uint16_t x844 = 42U;
	int32_t t80 = 38;

	t80 = (x841>>((x842&x843)/x844));

	if (t80 != 27) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x850 = 55U;
	static uint64_t x851 = 853755769LLU;
	int32_t t81 = -495812;

	t81 = (x849>>((x850&x851)/x852));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x865 = 37465007442LLU;
	uint16_t x866 = 6678U;
	int64_t x867 = -14248803253LL;
	uint32_t x868 = 26079U;

	t82 = (x865>>((x866&x867)/x868));

	if (t82 != 37465007442LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x873 = 1U;
	int16_t x875 = 5765;

	t83 = (x873>>((x874&x875)/x876));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x877 = 42U;
	uint16_t x878 = 14U;
	static uint32_t x879 = 48U;
	int16_t x880 = INT16_MIN;

	t84 = (x877>>((x878&x879)/x880));

	if (t84 != 42) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x881 = 9754653867LL;
	static uint64_t x883 = 6LLU;
	uint8_t x884 = 94U;

	t85 = (x881>>((x882&x883)/x884));

	if (t85 != 9754653867LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x887 = 82935614;
	int64_t x888 = INT64_MAX;

	t86 = (x885>>((x886&x887)/x888));

	if (t86 != 62) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x889 = 1013U;
	int16_t x891 = INT16_MIN;
	int16_t x892 = INT16_MIN;
	static int32_t t87 = -8281257;

	t87 = (x889>>((x890&x891)/x892));

	if (t87 != 506) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x905 = INT64_MAX;
	volatile uint64_t x906 = UINT64_MAX;
	static int16_t x907 = INT16_MIN;
	int8_t x908 = INT8_MIN;

	t88 = (x905>>((x906&x907)/x908));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x913 = 8U;
	int8_t x915 = 0;
	int32_t x916 = -1;
	static int32_t t89 = 448;

	t89 = (x913>>((x914&x915)/x916));

	if (t89 != 8) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x918 = -1;
	volatile int16_t x919 = INT16_MAX;
	int16_t x920 = INT16_MAX;

	t90 = (x917>>((x918&x919)/x920));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x925 = 0;
	uint8_t x926 = 59U;
	int8_t x927 = INT8_MIN;
	int32_t x928 = INT32_MIN;

	t91 = (x925>>((x926&x927)/x928));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x946 = 5;
	uint64_t x947 = UINT64_MAX;
	int16_t x948 = INT16_MAX;
	static uint64_t t92 = UINT64_MAX;

	t92 = (x945>>((x946&x947)/x948));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x953 = UINT64_MAX;
	int16_t x954 = INT16_MAX;
	static uint8_t x956 = 66U;

	t93 = (x953>>((x954&x955)/x956));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x957 = 23U;
	uint64_t x959 = 493LLU;
	static uint64_t x960 = UINT64_MAX;

	t94 = (x957>>((x958&x959)/x960));

	if (t94 != 23) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x961 = INT64_MAX;
	uint16_t x962 = 27U;
	uint64_t x963 = UINT64_MAX;
	static volatile int32_t x964 = 43055167;
	volatile int64_t t95 = INT64_MAX;

	t95 = (x961>>((x962&x963)/x964));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x969 = 803559670552LL;
	volatile int64_t x970 = 1LL;
	int16_t x971 = INT16_MIN;
	int64_t x972 = -16520623749LL;
	static int64_t t96 = -103983153726480LL;

	t96 = (x969>>((x970&x971)/x972));

	if (t96 != 803559670552LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x985 = 28018U;
	int64_t x986 = 3717923LL;
	uint16_t x987 = UINT16_MAX;
	uint32_t t97 = 868U;

	t97 = (x985>>((x986&x987)/x988));

	if (t97 != 28018U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1001 = 1;
	int8_t x1002 = 1;
	static int8_t x1003 = INT8_MIN;
	uint64_t x1004 = 689166809653837245LLU;

	t98 = (x1001>>((x1002&x1003)/x1004));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x1009 = UINT32_MAX;
	static volatile uint32_t t99 = UINT32_MAX;

	t99 = (x1009>>((x1010&x1011)/x1012));

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

