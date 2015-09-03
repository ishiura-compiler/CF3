#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x10 = -156;
static int64_t x39 = INT64_MAX;
volatile int32_t t4 = -29;
uint32_t x51 = UINT32_MAX;
volatile int64_t t5 = 28384751045345LL;
static int16_t x58 = INT16_MAX;
uint8_t x67 = UINT8_MAX;
int32_t x69 = INT32_MIN;
uint16_t x71 = 6U;
int64_t x72 = INT64_MIN;
int16_t x83 = -1;
int8_t x84 = INT8_MIN;
volatile int8_t x92 = INT8_MIN;
int32_t x115 = INT32_MAX;
int32_t x132 = INT32_MAX;
volatile int8_t x145 = INT8_MAX;
volatile uint64_t t17 = 13446050475LLU;
int32_t x168 = INT32_MIN;
int64_t t19 = 257378LL;
volatile int16_t x183 = INT16_MAX;
volatile int64_t t21 = 1912781233LL;
static int64_t x211 = INT64_MAX;
int32_t x215 = 34397;
int16_t x239 = -1;
uint8_t x241 = 7U;
uint32_t x243 = UINT32_MAX;
int16_t x244 = INT16_MIN;
volatile int8_t x276 = 17;
int64_t t29 = 1LL;
int16_t x278 = INT16_MAX;
volatile int8_t x280 = INT8_MIN;
uint16_t x288 = UINT16_MAX;
int16_t x292 = -26;
volatile int32_t t32 = -240;
int16_t x298 = -11;
int64_t x299 = INT64_MAX;
int32_t x303 = INT32_MAX;
volatile uint64_t x313 = 113114LLU;
uint64_t t35 = 8015756484769988583LLU;
int8_t x329 = 4;
int32_t x332 = INT32_MIN;
static int8_t x347 = 1;
static volatile int8_t x362 = INT8_MIN;
uint16_t x363 = UINT16_MAX;
uint64_t x364 = 2934123864692975370LLU;
volatile uint32_t t42 = 13178U;
uint64_t t45 = 24271760306919LLU;
int16_t x405 = INT16_MIN;
uint32_t x408 = 16596429U;
int64_t x419 = 4260829631151LL;
volatile int64_t t49 = -375780254598404LL;
int8_t x448 = INT8_MIN;
int16_t x455 = -1;
static uint16_t x514 = 18U;
static int16_t x529 = INT16_MIN;
int16_t x536 = INT16_MIN;
uint32_t t57 = 210683U;
static volatile int8_t x546 = INT8_MIN;
static volatile int64_t x556 = 6286109745LL;
int64_t t60 = 154LL;
volatile uint8_t x562 = UINT8_MAX;
volatile uint32_t x569 = UINT32_MAX;
volatile int8_t x571 = INT8_MAX;
static int64_t x574 = 4148262170854818423LL;
static uint16_t x577 = UINT16_MAX;
volatile uint8_t x579 = 19U;
volatile int64_t t66 = 277060222LL;
uint8_t x601 = UINT8_MAX;
int16_t x610 = -4;
static int64_t x629 = INT64_MIN;
uint16_t x637 = 4U;
uint8_t x640 = UINT8_MAX;
volatile int64_t x643 = INT64_MIN;
int32_t x663 = INT32_MAX;
volatile int64_t t76 = 816386087664LL;
volatile int32_t t79 = 0;
int32_t x699 = INT32_MIN;
int8_t x725 = -1;
int32_t x728 = -42402;
uint64_t x755 = UINT64_MAX;
uint16_t x762 = UINT16_MAX;
int32_t t90 = -875398301;
volatile uint64_t t91 = 39546256094LLU;
int64_t x774 = -987054302876959LL;
int64_t x775 = -1LL;
static int32_t x776 = -12;
int64_t x790 = -3713897143164LL;
volatile uint32_t x802 = 1267440105U;
volatile int64_t t94 = -12477937285938LL;
int64_t x818 = 3326023523345791LL;
int16_t x841 = INT16_MIN;
static volatile int16_t x842 = INT16_MAX;
static uint8_t x843 = 1U;
uint32_t x852 = 17681244U;


void f0(void) {
	uint8_t x9 = 1U;
	volatile uint32_t x11 = UINT32_MAX;
	int8_t x12 = -7;
	uint32_t t0 = 12127389U;

	t0 = (x9/(x10/(x11%x12)));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x13 = INT32_MAX;
	volatile int32_t x14 = INT32_MIN;
	int64_t x15 = INT64_MAX;
	int32_t x16 = INT32_MAX;
	volatile int64_t t1 = -15LL;

	t1 = (x13/(x14/(x15%x16)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x33 = INT8_MAX;
	volatile uint64_t x34 = UINT64_MAX;
	uint8_t x35 = 21U;
	volatile int64_t x36 = INT64_MIN;
	volatile uint64_t t2 = 2LLU;

	t2 = (x33/(x34/(x35%x36)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x37 = -24;
	int8_t x38 = INT8_MIN;
	static uint64_t x40 = 56040106445LLU;
	volatile uint64_t t3 = 0LLU;

	t3 = (x37/(x38/(x39%x40)));

	if (t3 != 21663374699LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x41 = INT32_MIN;
	volatile int8_t x42 = INT8_MIN;
	int8_t x43 = -1;
	static volatile int32_t x44 = 184031233;

	t4 = (x41/(x42/(x43%x44)));

	if (t4 != -16777216) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x49 = 50;
	int64_t x50 = 442776794LL;
	int64_t x52 = -386659LL;

	t5 = (x49/(x50/(x51%x52)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x57 = UINT8_MAX;
	volatile int64_t x59 = -1LL;
	int32_t x60 = -44366954;
	static int64_t t6 = -11211711LL;

	t6 = (x57/(x58/(x59%x60)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x65 = -1;
	uint16_t x66 = UINT16_MAX;
	uint64_t x68 = UINT64_MAX;
	volatile uint64_t t7 = 250113LLU;

	t7 = (x65/(x66/(x67%x68)));

	if (t7 != 71777214294589695LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x70 = 270699145839LLU;
	volatile uint64_t t8 = 6870525LLU;

	t8 = (x69/(x70/(x71%x72)));

	if (t8 != 408868909LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	int32_t t9 = -51863;

	t9 = (x81/(x82/(x83%x84)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x89 = -255;
	volatile uint16_t x90 = UINT16_MAX;
	int16_t x91 = 7112;
	int32_t t10 = -33358572;

	t10 = (x89/(x90/(x91%x92)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x93 = -1;
	uint64_t x94 = UINT64_MAX;
	int16_t x95 = INT16_MIN;
	uint32_t x96 = UINT32_MAX;
	volatile uint64_t t11 = 764LLU;

	t11 = (x93/(x94/(x95%x96)));

	if (t11 != 4294934528LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x109 = 0U;
	volatile int32_t x110 = INT32_MIN;
	static int64_t x111 = INT64_MIN;
	uint16_t x112 = UINT16_MAX;
	int64_t t12 = 26239371971LL;

	t12 = (x109/(x110/(x111%x112)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x113 = INT8_MAX;
	static int8_t x114 = INT8_MIN;
	static uint64_t x116 = 4354515960689LLU;
	static volatile uint64_t t13 = 530580LLU;

	t13 = (x113/(x114/(x115%x116)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x129 = INT32_MIN;
	int16_t x130 = INT16_MIN;
	static volatile int8_t x131 = -1;
	static volatile int32_t t14 = 0;

	t14 = (x129/(x130/(x131%x132)));

	if (t14 != -65536) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x137 = -1;
	uint32_t x138 = UINT32_MAX;
	int64_t x139 = -1LL;
	static int16_t x140 = -44;
	int64_t t15 = 2068803449988331892LL;

	t15 = (x137/(x138/(x139%x140)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x141 = 1;
	int64_t x142 = 417172LL;
	int64_t x143 = -1LL;
	uint16_t x144 = 18630U;
	static int64_t t16 = 9924764815079LL;

	t16 = (x141/(x142/(x143%x144)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x146 = -1;
	int32_t x147 = INT32_MAX;
	static uint64_t x148 = 11992977LLU;

	t17 = (x145/(x146/(x147%x148)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x165 = 32U;
	uint8_t x166 = UINT8_MAX;
	int8_t x167 = INT8_MIN;
	int32_t t18 = 695;

	t18 = (x165/(x166/(x167%x168)));

	if (t18 != -32) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x173 = INT16_MIN;
	static volatile int64_t x174 = 7892021LL;
	int8_t x175 = -1;
	int16_t x176 = -255;

	t19 = (x173/(x174/(x175%x176)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x177 = INT8_MAX;
	static int16_t x178 = 731;
	uint64_t x179 = UINT64_MAX;
	int64_t x180 = INT64_MAX;
	static volatile uint64_t t20 = 381LLU;

	t20 = (x177/(x178/(x179%x180)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x181 = INT64_MIN;
	volatile int64_t x182 = INT64_MIN;
	static int16_t x184 = 103;

	t21 = (x181/(x182/(x183%x184)));

	if (t21 != 13LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x209 = 3U;
	static volatile int8_t x210 = INT8_MAX;
	uint16_t x212 = 2U;
	int64_t t22 = -31426375310724LL;

	t22 = (x209/(x210/(x211%x212)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x213 = 577U;
	uint8_t x214 = 38U;
	uint8_t x216 = 2U;
	volatile int32_t t23 = -378693;

	t23 = (x213/(x214/(x215%x216)));

	if (t23 != 15) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x217 = -1;
	int64_t x218 = INT64_MIN;
	int64_t x219 = 42928842LL;
	uint16_t x220 = UINT16_MAX;
	int64_t t24 = 106573321383254LL;

	t24 = (x217/(x218/(x219%x220)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x221 = 48;
	int32_t x222 = INT32_MAX;
	static uint8_t x223 = UINT8_MAX;
	static int64_t x224 = INT64_MIN;
	int64_t t25 = 304440418683601207LL;

	t25 = (x221/(x222/(x223%x224)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x237 = 26U;
	int32_t x238 = 15806;
	int16_t x240 = INT16_MIN;
	volatile int32_t t26 = -6;

	t26 = (x237/(x238/(x239%x240)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x242 = -2;
	uint32_t t27 = 235U;

	t27 = (x241/(x242/(x243%x244)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x257 = UINT8_MAX;
	int64_t x258 = 8826270673666580LL;
	uint16_t x259 = UINT16_MAX;
	volatile int32_t x260 = -2134634;
	volatile int64_t t28 = -9LL;

	t28 = (x257/(x258/(x259%x260)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x273 = UINT8_MAX;
	int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MAX;

	t29 = (x273/(x274/(x275%x276)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x277 = INT16_MIN;
	int16_t x279 = -581;
	int32_t t30 = -314234;

	t30 = (x277/(x278/(x279%x280)));

	if (t30 != 69) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x285 = 4143862LLU;
	int8_t x286 = -38;
	uint64_t x287 = 76484462538742472LLU;
	static volatile uint64_t t31 = 293727578LLU;

	t31 = (x285/(x286/(x287%x288)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x289 = INT32_MIN;
	int32_t x290 = -981444135;
	int8_t x291 = -1;

	t32 = (x289/(x290/(x291%x292)));

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x297 = 1;
	uint8_t x300 = 3U;
	volatile int64_t t33 = 1589411LL;

	t33 = (x297/(x298/(x299%x300)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x301 = 31;
	int64_t x302 = 39833982653097855LL;
	int32_t x304 = INT32_MIN;
	int64_t t34 = -540LL;

	t34 = (x301/(x302/(x303%x304)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x314 = 196U;
	int32_t x315 = -1;
	uint16_t x316 = 828U;

	t35 = (x313/(x314/(x315%x316)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x321 = -543LL;
	uint64_t x322 = UINT64_MAX;
	static uint64_t x323 = 225416827390584LLU;
	uint8_t x324 = 115U;
	static volatile uint64_t t36 = 7246108065522LLU;

	t36 = (x321/(x322/(x323%x324)));

	if (t36 != 58LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x325 = 5590U;
	int32_t x326 = INT32_MAX;
	static int16_t x327 = -303;
	int16_t x328 = INT16_MIN;
	volatile int32_t t37 = -1524142;

	t37 = (x325/(x326/(x327%x328)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x330 = INT64_MIN;
	static uint32_t x331 = UINT32_MAX;
	volatile int64_t t38 = 145011802703LL;

	t38 = (x329/(x330/(x331%x332)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x345 = -1;
	uint32_t x346 = 350344U;
	int32_t x348 = INT32_MIN;
	uint32_t t39 = 42120746U;

	t39 = (x345/(x346/(x347%x348)));

	if (t39 != 12259U) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x349 = INT32_MIN;
	volatile int16_t x350 = -1;
	uint64_t x351 = UINT64_MAX;
	int8_t x352 = INT8_MIN;
	volatile uint64_t t40 = 12LLU;

	t40 = (x349/(x350/(x351%x352)));

	if (t40 != 126LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x361 = -1;
	volatile uint64_t t41 = 27LLU;

	t41 = (x361/(x362/(x363%x364)));

	if (t41 != 65535LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x377 = 1;
	static int16_t x378 = INT16_MIN;
	uint32_t x379 = 439074U;
	int8_t x380 = -7;

	t42 = (x377/(x378/(x379%x380)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x389 = INT32_MIN;
	int8_t x390 = INT8_MIN;
	static int8_t x391 = INT8_MAX;
	volatile int32_t x392 = -51;
	int32_t t43 = 875;

	t43 = (x389/(x390/(x391%x392)));

	if (t43 != 429496729) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x393 = 343267554821LLU;
	uint64_t x394 = 15LLU;
	int8_t x395 = 1;
	int64_t x396 = INT64_MIN;
	uint64_t t44 = 4203LLU;

	t44 = (x393/(x394/(x395%x396)));

	if (t44 != 22884503654LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x401 = 1;
	int32_t x402 = INT32_MAX;
	int64_t x403 = -192LL;
	uint64_t x404 = 7212324LLU;

	t45 = (x401/(x402/(x403%x404)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x406 = -1;
	uint32_t x407 = 39172U;
	uint32_t t46 = 9U;

	t46 = (x405/(x406/(x407%x408)));

	if (t46 != 39171U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x413 = -140;
	static uint32_t x414 = 43517U;
	uint16_t x415 = 2U;
	int16_t x416 = -82;
	volatile uint32_t t47 = 223423U;

	t47 = (x413/(x414/(x415%x416)));

	if (t47 != 197397U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x417 = -1;
	static uint32_t x418 = UINT32_MAX;
	volatile uint32_t x420 = 1971251U;
	int64_t t48 = 91413LL;

	t48 = (x417/(x418/(x419%x420)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x441 = 129354U;
	uint32_t x442 = UINT32_MAX;
	volatile int32_t x443 = INT32_MIN;
	int64_t x444 = INT64_MIN;

	t49 = (x441/(x442/(x443%x444)));

	if (t49 != -129354LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x445 = INT8_MIN;
	int64_t x446 = INT64_MAX;
	int16_t x447 = 59;
	volatile int64_t t50 = 1308LL;

	t50 = (x445/(x446/(x447%x448)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x453 = INT8_MIN;
	static int16_t x454 = INT16_MIN;
	static volatile int32_t x456 = -50169;
	volatile int32_t t51 = 1;

	t51 = (x453/(x454/(x455%x456)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x469 = -34257156272636529LL;
	volatile int16_t x470 = -1;
	volatile int64_t x471 = -1LL;
	static volatile int16_t x472 = 94;
	int64_t t52 = -160912701694846LL;

	t52 = (x469/(x470/(x471%x472)));

	if (t52 != -34257156272636529LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x497 = 65360LL;
	int64_t x498 = INT64_MIN;
	volatile uint8_t x499 = UINT8_MAX;
	uint16_t x500 = 93U;
	int64_t t53 = 11165046133438639LL;

	t53 = (x497/(x498/(x499%x500)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x501 = INT8_MAX;
	uint32_t x502 = UINT32_MAX;
	int32_t x503 = INT32_MAX;
	static volatile int8_t x504 = -30;
	volatile uint32_t t54 = 64U;

	t54 = (x501/(x502/(x503%x504)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x513 = -1;
	int32_t x515 = INT32_MIN;
	static uint8_t x516 = 3U;
	volatile int32_t t55 = -1481865;

	t55 = (x513/(x514/(x515%x516)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x530 = 2010727;
	static int32_t x531 = -1;
	volatile int16_t x532 = INT16_MAX;
	int32_t t56 = -49463583;

	t56 = (x529/(x530/(x531%x532)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x533 = INT32_MIN;
	volatile uint32_t x534 = UINT32_MAX;
	static uint32_t x535 = 19492U;

	t57 = (x533/(x534/(x535%x536)));

	if (t57 != 9746U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x537 = INT32_MAX;
	int32_t x538 = 196435802;
	uint32_t x539 = 266U;
	uint8_t x540 = 32U;
	volatile uint32_t t58 = 38171905U;

	t58 = (x537/(x538/(x539%x540)));

	if (t58 != 109U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x545 = -1LL;
	int64_t x547 = INT64_MIN;
	uint16_t x548 = 21U;
	volatile int64_t t59 = -14915960854127703LL;

	t59 = (x545/(x546/(x547%x548)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x553 = 4123449U;
	int16_t x554 = -443;
	uint8_t x555 = 18U;

	t60 = (x553/(x554/(x555%x556)));

	if (t60 != -171810LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x557 = 127U;
	static int16_t x558 = 974;
	volatile int8_t x559 = INT8_MIN;
	volatile uint32_t x560 = 106U;
	volatile uint32_t t61 = 871813698U;

	t61 = (x557/(x558/(x559%x560)));

	if (t61 != 2U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x561 = INT32_MIN;
	int8_t x563 = INT8_MAX;
	int64_t x564 = 689841302967LL;
	static int64_t t62 = 6686088359449078LL;

	t62 = (x561/(x562/(x563%x564)));

	if (t62 != -1073741824LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x570 = INT8_MIN;
	int32_t x572 = -73;
	uint32_t t63 = 11U;

	t63 = (x569/(x570/(x571%x572)));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x573 = INT32_MIN;
	volatile int64_t x575 = -1LL;
	uint8_t x576 = 57U;
	volatile int64_t t64 = -172877664139LL;

	t64 = (x573/(x574/(x575%x576)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x578 = 957874;
	int8_t x580 = 15;
	volatile int32_t t65 = -1215;

	t65 = (x577/(x578/(x579%x580)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x589 = INT64_MIN;
	uint16_t x590 = 462U;
	int64_t x591 = -1LL;
	int64_t x592 = -209558167592LL;

	t66 = (x589/(x590/(x591%x592)));

	if (t66 != 19964008737780900LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x593 = 8579540208376605LLU;
	int64_t x594 = INT64_MIN;
	int16_t x595 = INT16_MAX;
	int8_t x596 = INT8_MIN;
	volatile uint64_t t67 = 431401109082019492LLU;

	t67 = (x593/(x594/(x595%x596)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x597 = INT8_MAX;
	int32_t x598 = INT32_MIN;
	volatile uint32_t x599 = 1822U;
	int32_t x600 = INT32_MIN;
	volatile uint32_t t68 = 492007605U;

	t68 = (x597/(x598/(x599%x600)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x602 = INT64_MIN;
	int64_t x603 = 246866796497442958LL;
	volatile int16_t x604 = 10;
	int64_t t69 = 274239486626697197LL;

	t69 = (x601/(x602/(x603%x604)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x609 = -1LL;
	int32_t x611 = -1;
	uint8_t x612 = 37U;
	int64_t t70 = -9636294LL;

	t70 = (x609/(x610/(x611%x612)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x617 = INT16_MIN;
	int32_t x618 = -67975736;
	int8_t x619 = INT8_MIN;
	int32_t x620 = -7988104;
	volatile int32_t t71 = -1;

	t71 = (x617/(x618/(x619%x620)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x630 = 141350006894510LLU;
	int32_t x631 = 175;
	uint8_t x632 = 58U;
	static volatile uint64_t t72 = 1LLU;

	t72 = (x629/(x630/(x631%x632)));

	if (t72 != 65252LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x638 = INT16_MIN;
	static uint32_t x639 = 2861U;
	uint32_t t73 = 8U;

	t73 = (x637/(x638/(x639%x640)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x641 = -1;
	int64_t x642 = -27344281928535LL;
	uint64_t x644 = 2029537619LLU;
	volatile uint64_t t74 = 8694614278978LLU;

	t74 = (x641/(x642/(x643%x644)));

	if (t74 != 113777793LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x649 = 488396904U;
	static volatile int64_t x650 = -221103LL;
	static int32_t x651 = INT32_MAX;
	int8_t x652 = INT8_MAX;
	volatile int64_t t75 = 293LL;

	t75 = (x649/(x650/(x651%x652)));

	if (t75 != -15462LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x661 = INT32_MAX;
	int64_t x662 = INT64_MAX;
	volatile int16_t x664 = INT16_MIN;

	t76 = (x661/(x662/(x663%x664)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x669 = INT8_MAX;
	volatile int64_t x670 = INT64_MIN;
	int8_t x671 = INT8_MAX;
	volatile int32_t x672 = 11;
	volatile int64_t t77 = 74602LL;

	t77 = (x669/(x670/(x671%x672)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x673 = -352728961;
	int16_t x674 = INT16_MAX;
	uint16_t x675 = 835U;
	static int32_t x676 = 22283411;
	volatile int32_t t78 = -2;

	t78 = (x673/(x674/(x675%x676)));

	if (t78 != -9044332) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x677 = 53013187;
	int16_t x678 = -2;
	uint16_t x679 = 2U;
	int16_t x680 = INT16_MIN;

	t79 = (x677/(x678/(x679%x680)));

	if (t79 != -53013187) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x681 = 0U;
	int8_t x682 = 10;
	static int16_t x683 = -1;
	int16_t x684 = INT16_MAX;
	volatile int32_t t80 = -331052032;

	t80 = (x681/(x682/(x683%x684)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x689 = INT8_MAX;
	volatile int64_t x690 = INT64_MIN;
	int64_t x691 = INT64_MAX;
	volatile uint8_t x692 = 22U;
	volatile int64_t t81 = 3LL;

	t81 = (x689/(x690/(x691%x692)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x697 = 19U;
	static uint64_t x698 = UINT64_MAX;
	uint16_t x700 = 1413U;
	uint64_t t82 = 116980537127921769LLU;

	t82 = (x697/(x698/(x699%x700)));

	if (t82 != 19LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x701 = INT32_MIN;
	uint32_t x702 = UINT32_MAX;
	int8_t x703 = INT8_MIN;
	int8_t x704 = INT8_MAX;
	static uint32_t t83 = 206533819U;

	t83 = (x701/(x702/(x703%x704)));

	if (t83 != 2147483648U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x709 = -4;
	volatile uint32_t x710 = 2659U;
	uint8_t x711 = 2U;
	uint8_t x712 = UINT8_MAX;
	uint32_t t84 = 167U;

	t84 = (x709/(x710/(x711%x712)));

	if (t84 != 3231728U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x726 = INT32_MIN;
	int16_t x727 = INT16_MIN;
	int32_t t85 = -45447067;

	t85 = (x725/(x726/(x727%x728)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x745 = -1LL;
	volatile int16_t x746 = -143;
	uint8_t x747 = 2U;
	uint64_t x748 = UINT64_MAX;
	uint64_t t86 = 19241902861LLU;

	t86 = (x745/(x746/(x747%x748)));

	if (t86 != 2LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x749 = 711574301421LLU;
	volatile int8_t x750 = -28;
	volatile int64_t x751 = -1LL;
	volatile uint8_t x752 = 69U;
	uint64_t t87 = 177LLU;

	t87 = (x749/(x750/(x751%x752)));

	if (t87 != 25413367907LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x753 = INT16_MIN;
	int16_t x754 = INT16_MIN;
	volatile int8_t x756 = INT8_MAX;
	uint64_t t88 = 46890LLU;

	t88 = (x753/(x754/(x755%x756)));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x757 = INT32_MAX;
	static uint32_t x758 = 161646U;
	static int32_t x759 = 3964;
	uint64_t x760 = UINT64_MAX;
	uint64_t t89 = 16650752LLU;

	t89 = (x757/(x758/(x759%x760)));

	if (t89 != 53687091LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x761 = INT8_MIN;
	uint16_t x763 = 13954U;
	volatile int16_t x764 = INT16_MIN;

	t90 = (x761/(x762/(x763%x764)));

	if (t90 != -32) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x769 = -4;
	int32_t x770 = 252309646;
	static uint64_t x771 = 16971LLU;
	int32_t x772 = INT32_MIN;

	t91 = (x769/(x770/(x771%x772)));

	if (t91 != 1240784561358011LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x773 = INT64_MIN;
	volatile int64_t t92 = 0LL;

	t92 = (x773/(x774/(x775%x776)));

	if (t92 != -9344LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x789 = 0;
	static int16_t x791 = 79;
	int8_t x792 = INT8_MIN;
	int64_t t93 = -7195696906022LL;

	t93 = (x789/(x790/(x791%x792)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x801 = INT16_MIN;
	static int64_t x803 = -1LL;
	volatile int64_t x804 = INT64_MIN;

	t94 = (x801/(x802/(x803%x804)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x809 = -31285162113636207LL;
	int8_t x810 = INT8_MIN;
	uint16_t x811 = UINT16_MAX;
	static int8_t x812 = 12;
	volatile int64_t t95 = 166416224624LL;

	t95 = (x809/(x810/(x811%x812)));

	if (t95 != 744884812229433LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x817 = 31U;
	int8_t x819 = 5;
	int32_t x820 = INT32_MIN;
	volatile int64_t t96 = 251002217674296906LL;

	t96 = (x817/(x818/(x819%x820)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x833 = 0U;
	volatile int8_t x834 = INT8_MAX;
	int64_t x835 = -1LL;
	int64_t x836 = INT64_MIN;
	int64_t t97 = 40409767810LL;

	t97 = (x833/(x834/(x835%x836)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x844 = 5U;
	static int32_t t98 = -35984;

	t98 = (x841/(x842/(x843%x844)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x849 = -1LL;
	int8_t x850 = -1;
	static volatile int16_t x851 = -107;
	volatile int64_t t99 = 1924111987526635114LL;

	t99 = (x849/(x850/(x851%x852)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

