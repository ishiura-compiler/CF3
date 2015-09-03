#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
static int8_t x4 = -1;
int32_t x25 = 16511163;
uint16_t x26 = 8523U;
volatile uint32_t t3 = 47629717U;
static volatile int32_t x30 = INT32_MIN;
int16_t x32 = INT16_MIN;
static uint8_t x39 = 78U;
volatile int8_t x40 = -1;
uint16_t x44 = UINT16_MAX;
volatile uint8_t x46 = 11U;
volatile int8_t x54 = INT8_MIN;
uint16_t x55 = 2U;
uint16_t x66 = 6260U;
uint16_t x69 = 7658U;
uint32_t x78 = UINT32_MAX;
int64_t x79 = -1LL;
uint16_t x85 = UINT16_MAX;
int64_t x88 = INT64_MAX;
volatile uint64_t t14 = 13LLU;
uint8_t x97 = UINT8_MAX;
static uint32_t x100 = 606391U;
int64_t t16 = -38336178LL;
int8_t x105 = -1;
volatile int8_t x108 = INT8_MIN;
static uint16_t x118 = 233U;
uint32_t t19 = 12739203U;
int64_t x127 = -470279155637147560LL;
int16_t x142 = -7;
static volatile int32_t x150 = 15036;
volatile int32_t x167 = 10356;
int8_t x168 = -1;
volatile int64_t x191 = -1LL;
static uint16_t x199 = 251U;
volatile int64_t x211 = -7LL;
volatile uint64_t t32 = 1646LLU;
uint32_t x229 = UINT32_MAX;
uint8_t x230 = 7U;
int64_t x237 = INT64_MIN;
int64_t t35 = 6823705182LL;
volatile int16_t x247 = -1822;
uint32_t x279 = 8U;
volatile int16_t x283 = INT16_MAX;
int32_t t39 = -26062;
volatile uint32_t t40 = 840436U;
int64_t x294 = 308905581LL;
static int16_t x310 = INT16_MIN;
uint8_t x313 = 52U;
int64_t x317 = INT64_MIN;
volatile uint64_t t47 = 7397970LLU;
volatile int64_t t49 = 14708488LL;
uint8_t x347 = 39U;
int16_t x353 = 118;
int32_t x356 = -1;
int8_t x359 = INT8_MAX;
static uint64_t x364 = 229240565LLU;
uint64_t t54 = 279597789712LLU;
uint64_t x383 = 770566LLU;
static uint16_t x389 = 22U;
uint64_t x390 = 12029915145895143LLU;
uint8_t x391 = 98U;
static int32_t x398 = INT32_MIN;
uint32_t t61 = 30U;
uint16_t x415 = UINT16_MAX;
static uint8_t x416 = 5U;
int32_t x417 = 43;
uint64_t x419 = UINT64_MAX;
uint64_t x421 = UINT64_MAX;
int64_t x427 = 4221LL;
int64_t t65 = 50885LL;
uint8_t x429 = UINT8_MAX;
static uint8_t x431 = 19U;
int32_t t66 = 180257;
uint8_t x434 = 45U;
volatile int64_t x437 = INT64_MAX;
uint32_t x441 = 24U;
volatile int64_t x442 = -1LL;
static volatile int64_t t69 = 5337164308LL;
uint64_t x459 = 917212LLU;
volatile uint64_t t70 = 37148188250LLU;
uint16_t x465 = 6059U;
volatile uint64_t t71 = 2072509118LLU;
uint8_t x471 = 22U;
int16_t x483 = 15;
volatile uint64_t t75 = 349929584586837LLU;
int32_t t76 = 43126;
uint32_t x493 = 88U;
int8_t x494 = -1;
uint8_t x497 = 65U;
int16_t x498 = -978;
static int8_t x499 = -25;
int32_t t78 = 3847;
static int64_t t80 = -554774919102409LL;
uint64_t t81 = 652200231LLU;
int8_t x523 = INT8_MIN;
int16_t x538 = -18;
uint16_t x541 = 3U;
static int64_t x545 = INT64_MIN;
static int32_t x546 = INT32_MAX;
int8_t x561 = INT8_MIN;
int8_t x562 = 44;
uint64_t x567 = 4239276LLU;
int16_t x573 = -62;
static int32_t x575 = 0;
int64_t x588 = INT64_MAX;
uint32_t x590 = 1062U;
int8_t x605 = INT8_MAX;
uint64_t x606 = 3LLU;
volatile uint32_t t97 = 2556U;
int8_t x617 = 1;
static uint32_t x619 = 7487U;
uint8_t x620 = UINT8_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint8_t x2 = UINT8_MAX;
	int32_t t0 = 19411;

	t0 = (x1%((x2^x3)*x4));

	if (t0 != -32511) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MAX;
	int16_t x10 = INT16_MIN;
	uint32_t x11 = UINT32_MAX;
	int8_t x12 = 7;
	int64_t t1 = -204634163LL;

	t1 = (x9%((x10^x11)*x12));

	if (t1 != 131075LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x21 = 7U;
	int32_t x22 = INT32_MAX;
	int8_t x23 = INT8_MIN;
	uint32_t x24 = 104789209U;
	uint32_t t2 = 2523497U;

	t2 = (x21%((x22^x23)*x24));

	if (t2 != 7U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x27 = 327847U;
	uint16_t x28 = 1U;

	t3 = (x25%((x26^x27)*x28));

	if (t3 != 29327U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x29 = 1;
	uint32_t x31 = 1619U;
	static uint32_t t4 = 412103U;

	t4 = (x29%((x30^x31)*x32));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MAX;
	volatile int32_t t5 = 26;

	t5 = (x37%((x38^x39)*x40));

	if (t5 != -79) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x41 = INT8_MAX;
	volatile int16_t x42 = -1;
	uint16_t x43 = 0U;
	static volatile int32_t t6 = 20239310;

	t6 = (x41%((x42^x43)*x44));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = 426LLU;
	uint64_t x47 = 2456339567LLU;
	uint32_t x48 = 24508U;
	volatile uint64_t t7 = 105225820LLU;

	t7 = (x45%((x46^x47)*x48));

	if (t7 != 426LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = UINT16_MAX;
	int8_t x50 = INT8_MIN;
	uint16_t x51 = 5939U;
	static volatile int16_t x52 = 1;
	volatile int32_t t8 = -1;

	t8 = (x49%((x50^x51)*x52));

	if (t8 != 5885) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x53 = INT64_MIN;
	volatile int16_t x56 = 1888;
	volatile int64_t t9 = -193600890118174315LL;

	t9 = (x53%((x54^x55)*x56));

	if (t9 != -141632LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x61 = 346U;
	static volatile int32_t x62 = -1126550;
	int16_t x63 = 765;
	static int8_t x64 = INT8_MAX;
	uint32_t t10 = 162U;

	t10 = (x61%((x62^x63)*x64));

	if (t10 != 346U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x65 = 9;
	int8_t x67 = -1;
	uint32_t x68 = UINT32_MAX;
	volatile uint32_t t11 = 2129084006U;

	t11 = (x65%((x66^x67)*x68));

	if (t11 != 9U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x70 = -2;
	uint8_t x71 = UINT8_MAX;
	int32_t x72 = -9;
	int32_t t12 = 112029902;

	t12 = (x69%((x70^x71)*x72));

	if (t12 != 773) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = INT8_MIN;
	uint16_t x80 = 13U;
	int64_t t13 = -16046433LL;

	t13 = (x77%((x78^x79)*x80));

	if (t13 != -128LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x86 = 0U;
	uint64_t x87 = 1444771LLU;

	t14 = (x85%((x86^x87)*x88));

	if (t14 != 65535LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x89 = -370016663LL;
	volatile uint32_t x90 = 2U;
	volatile int8_t x91 = -17;
	int32_t x92 = -1;
	static volatile int64_t t15 = -38538LL;

	t15 = (x89%((x90^x91)*x92));

	if (t15 != -4LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x98 = INT32_MAX;
	static int64_t x99 = 393154478364LL;

	t16 = (x97%((x98^x99)*x100));

	if (t16 != 255LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x106 = -20;
	volatile int8_t x107 = 54;
	volatile int32_t t17 = -190;

	t17 = (x105%((x106^x107)*x108));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x117 = -1LL;
	volatile uint8_t x119 = UINT8_MAX;
	uint8_t x120 = 26U;
	volatile int64_t t18 = 1683971730098LL;

	t18 = (x117%((x118^x119)*x120));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x121 = 5U;
	uint32_t x122 = 217709913U;
	int8_t x123 = 0;
	volatile uint8_t x124 = 1U;

	t19 = (x121%((x122^x123)*x124));

	if (t19 != 5U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x125 = INT16_MIN;
	volatile int16_t x126 = -1;
	uint8_t x128 = 15U;
	volatile int64_t t20 = -391687772LL;

	t20 = (x125%((x126^x127)*x128));

	if (t20 != -32768LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x133 = -1;
	uint8_t x134 = 12U;
	int8_t x135 = INT8_MIN;
	int32_t x136 = 82541;
	volatile int32_t t21 = 31930037;

	t21 = (x133%((x134^x135)*x136));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x141 = INT32_MIN;
	int8_t x143 = 1;
	static volatile uint8_t x144 = UINT8_MAX;
	int32_t t22 = 3710549;

	t22 = (x141%((x142^x143)*x144));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x145 = 176U;
	static uint32_t x146 = 399568U;
	uint32_t x147 = 44499U;
	static int64_t x148 = 8518634LL;
	int64_t t23 = -111608178LL;

	t23 = (x145%((x146^x147)*x148));

	if (t23 != 176LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x149 = 2429193U;
	uint32_t x151 = UINT32_MAX;
	uint16_t x152 = 957U;
	volatile uint32_t t24 = 3972912U;

	t24 = (x149%((x150^x151)*x152));

	if (t24 != 2429193U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x161 = -1;
	static volatile int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MAX;
	volatile int8_t x164 = 2;
	int32_t t25 = -8289;

	t25 = (x161%((x162^x163)*x164));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x165 = INT8_MAX;
	uint32_t x166 = 2031U;
	volatile uint32_t t26 = 5U;

	t26 = (x165%((x166^x167)*x168));

	if (t26 != 127U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x185 = 16U;
	int8_t x186 = 1;
	uint16_t x187 = 177U;
	static uint32_t x188 = UINT32_MAX;
	static uint32_t t27 = 542151U;

	t27 = (x185%((x186^x187)*x188));

	if (t27 != 16U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x189 = 216LLU;
	uint32_t x190 = 698483363U;
	int32_t x192 = 594831;
	uint64_t t28 = 8716527949LLU;

	t28 = (x189%((x190^x191)*x192));

	if (t28 != 216LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x197 = INT8_MAX;
	static volatile int64_t x198 = -1LL;
	uint8_t x200 = 105U;
	volatile int64_t t29 = -399LL;

	t29 = (x197%((x198^x199)*x200));

	if (t29 != 127LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x201 = -1;
	static uint16_t x202 = 2U;
	int32_t x203 = 328903;
	int8_t x204 = INT8_MAX;
	int32_t t30 = -6724;

	t30 = (x201%((x202^x203)*x204));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x209 = INT32_MIN;
	uint32_t x210 = 193U;
	static uint16_t x212 = UINT16_MAX;
	volatile int64_t t31 = 96365846694781543LL;

	t31 = (x209%((x210^x211)*x212));

	if (t31 != -11042648LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x221 = 12LLU;
	static uint16_t x222 = 244U;
	static int16_t x223 = -12;
	static int8_t x224 = -1;

	t32 = (x221%((x222^x223)*x224));

	if (t32 != 12LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x231 = 6;
	int8_t x232 = -6;
	static volatile uint32_t t33 = 2105U;

	t33 = (x229%((x230^x231)*x232));

	if (t33 != 5U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x233 = INT8_MIN;
	uint32_t x234 = 428984U;
	uint64_t x235 = 6LLU;
	int32_t x236 = -45;
	uint64_t t34 = 445958199109LLU;

	t34 = (x233%((x234^x235)*x236));

	if (t34 != 19304422LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x238 = INT32_MAX;
	uint32_t x239 = 12002U;
	static volatile uint16_t x240 = UINT16_MAX;

	t35 = (x237%((x238^x239)*x240));

	if (t35 != -299557424LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x241 = UINT8_MAX;
	int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	int16_t x244 = -1;
	static volatile int32_t t36 = -6594289;

	t36 = (x241%((x242^x243)*x244));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x245 = 843U;
	volatile int64_t x246 = -1LL;
	int16_t x248 = INT16_MIN;
	static int64_t t37 = 69089821245413778LL;

	t37 = (x245%((x246^x247)*x248));

	if (t37 != 843LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x277 = -1;
	int32_t x278 = -1;
	volatile uint8_t x280 = UINT8_MAX;
	uint32_t t38 = 757069U;

	t38 = (x277%((x278^x279)*x280));

	if (t38 != 2294U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x281 = -1563;
	static int16_t x282 = -1;
	int8_t x284 = -14;

	t39 = (x281%((x282^x283)*x284));

	if (t39 != -1563) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = 31;
	int16_t x287 = -13387;
	static uint32_t x288 = 105U;

	t40 = (x285%((x286^x287)*x288));

	if (t40 != 1406662U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x293 = -124;
	static int32_t x295 = INT32_MIN;
	int32_t x296 = -37193;
	static int64_t t41 = -2864081461LL;

	t41 = (x293%((x294^x295)*x296));

	if (t41 != -124LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x297 = INT16_MIN;
	volatile uint16_t x298 = 545U;
	static volatile uint64_t x299 = 34075871939613909LLU;
	uint16_t x300 = UINT16_MAX;
	volatile uint64_t t42 = 1445540617LLU;

	t42 = (x297%((x298^x299)*x300));

	if (t42 != 746989773271658304LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x301 = 2U;
	uint64_t x302 = 366218265419148205LLU;
	int8_t x303 = INT8_MIN;
	int32_t x304 = -187;
	volatile uint64_t t43 = 3329778LLU;

	t43 = (x301%((x302^x303)*x304));

	if (t43 != 2LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x309 = INT8_MAX;
	uint8_t x311 = 2U;
	int64_t x312 = 82LL;
	volatile int64_t t44 = -22989749010564LL;

	t44 = (x309%((x310^x311)*x312));

	if (t44 != 127LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x314 = 98U;
	uint64_t x315 = 2LLU;
	volatile uint64_t x316 = 49730LLU;
	static uint64_t t45 = 753399694LLU;

	t45 = (x313%((x314^x315)*x316));

	if (t45 != 52LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x318 = 26574753737954847LLU;
	uint64_t x319 = 36324651874534LLU;
	uint32_t x320 = UINT32_MAX;
	static uint64_t t46 = 855470768816239LLU;

	t46 = (x317%((x318^x319)*x320));

	if (t46 != 498309215890435833LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x333 = INT32_MAX;
	uint64_t x334 = 13845LLU;
	static int8_t x335 = -1;
	int8_t x336 = -1;

	t47 = (x333%((x334^x335)*x336));

	if (t47 != 10585LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x337 = 3U;
	uint64_t x338 = 10422710247LLU;
	uint8_t x339 = 10U;
	static uint16_t x340 = 10483U;
	uint64_t t48 = 1618320826901375LLU;

	t48 = (x337%((x338^x339)*x340));

	if (t48 != 3LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x341 = 347650513471LL;
	volatile int32_t x342 = INT32_MIN;
	uint16_t x343 = 50U;
	static int64_t x344 = -1LL;

	t49 = (x341%((x342^x343)*x344));

	if (t49 != 1905654193LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x345 = INT8_MIN;
	static volatile int32_t x346 = -12092;
	int64_t x348 = -49543665LL;
	volatile int64_t t50 = 413LL;

	t50 = (x345%((x346^x347)*x348));

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x349 = INT8_MAX;
	uint16_t x350 = 4187U;
	int32_t x351 = INT32_MIN;
	int16_t x352 = -1;
	volatile int32_t t51 = 177659717;

	t51 = (x349%((x350^x351)*x352));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x354 = INT16_MIN;
	uint64_t x355 = UINT64_MAX;
	static volatile uint64_t t52 = 23865940171110LLU;

	t52 = (x353%((x354^x355)*x356));

	if (t52 != 118LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x357 = -1;
	int32_t x358 = -1;
	volatile uint8_t x360 = UINT8_MAX;
	volatile int32_t t53 = -885434477;

	t53 = (x357%((x358^x359)*x360));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x361 = 28U;
	volatile int8_t x362 = -6;
	uint64_t x363 = 980617019195508LLU;

	t54 = (x361%((x362^x363)*x364));

	if (t54 != 28LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x365 = INT8_MIN;
	int8_t x366 = INT8_MIN;
	volatile int8_t x367 = INT8_MAX;
	volatile int16_t x368 = -58;
	volatile int32_t t55 = -1500257;

	t55 = (x365%((x366^x367)*x368));

	if (t55 != -12) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x381 = 243;
	uint16_t x382 = 110U;
	uint32_t x384 = UINT32_MAX;
	volatile uint64_t t56 = 28316758585386LLU;

	t56 = (x381%((x382^x383)*x384));

	if (t56 != 243LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x385 = 5U;
	uint16_t x386 = 0U;
	static int8_t x387 = INT8_MAX;
	static int16_t x388 = INT16_MIN;
	int32_t t57 = 3219;

	t57 = (x385%((x386^x387)*x388));

	if (t57 != 5) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x392 = 456231600U;
	volatile uint64_t t58 = 3003LLU;

	t58 = (x389%((x390^x391)*x392));

	if (t58 != 22LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x393 = INT32_MIN;
	volatile uint64_t x394 = UINT64_MAX;
	int8_t x395 = INT8_MIN;
	static uint16_t x396 = 2U;
	volatile uint64_t t59 = 54205741721973LLU;

	t59 = (x393%((x394^x395)*x396));

	if (t59 != 248LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x397 = -5223253LL;
	uint32_t x399 = 397163U;
	int32_t x400 = INT32_MAX;
	static int64_t t60 = 11132057462LL;

	t60 = (x397%((x398^x399)*x400));

	if (t60 != -5223253LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x405 = -193;
	volatile int32_t x406 = 126957;
	uint32_t x407 = UINT32_MAX;
	int32_t x408 = INT32_MAX;

	t61 = (x405%((x406^x407)*x408));

	if (t61 != 104921U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x413 = 122U;
	int8_t x414 = INT8_MAX;
	volatile int32_t t62 = 6;

	t62 = (x413%((x414^x415)*x416));

	if (t62 != 122) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x418 = INT8_MIN;
	volatile uint8_t x420 = 12U;
	static uint64_t t63 = 142937599LLU;

	t63 = (x417%((x418^x419)*x420));

	if (t63 != 43LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x422 = 124U;
	volatile int16_t x423 = INT16_MAX;
	uint64_t x424 = 74607693758166626LLU;
	volatile uint64_t t64 = 648237LLU;

	t64 = (x421%((x422^x423)*x424));

	if (t64 != 48829728642824169LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x425 = 1;
	volatile int32_t x426 = -302;
	volatile int64_t x428 = 28283911837078LL;

	t65 = (x425%((x426^x427)*x428));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x430 = 1U;
	uint16_t x432 = 446U;

	t66 = (x429%((x430^x431)*x432));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x433 = INT64_MIN;
	uint64_t x435 = 220038286783979LLU;
	static volatile int16_t x436 = -1;
	static uint64_t t67 = 32LLU;

	t67 = (x433%((x434^x435)*x436));

	if (t67 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x438 = -192957085798213358LL;
	volatile int16_t x439 = -781;
	volatile uint8_t x440 = 10U;
	volatile int64_t t68 = -251LL;

	t68 = (x437%((x438^x439)*x440));

	if (t68 != 1505088604926252247LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x443 = -26655093;
	static volatile int8_t x444 = INT8_MIN;

	t69 = (x441%((x442^x443)*x444));

	if (t69 != 24LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x457 = INT8_MAX;
	int64_t x458 = INT64_MAX;
	static volatile uint32_t x460 = 15056772U;

	t70 = (x457%((x458^x459)*x460));

	if (t70 != 127LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x466 = 5U;
	uint64_t x467 = UINT64_MAX;
	int64_t x468 = 1519LL;

	t71 = (x465%((x466^x467)*x468));

	if (t71 != 6059LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x469 = INT16_MAX;
	int64_t x470 = INT64_MIN;
	int64_t x472 = -1LL;
	int64_t t72 = 10594867369LL;

	t72 = (x469%((x470^x471)*x472));

	if (t72 != 32767LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x477 = INT64_MAX;
	volatile int32_t x478 = INT32_MIN;
	int8_t x479 = INT8_MAX;
	int64_t x480 = -1LL;
	int64_t t73 = -231369897779623436LL;

	t73 = (x477%((x478^x479)*x480));

	if (t73 != 32257LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x481 = INT8_MIN;
	uint16_t x482 = 12U;
	static int32_t x484 = 1041916;
	int32_t t74 = -1;

	t74 = (x481%((x482^x483)*x484));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x485 = -1;
	uint64_t x486 = 511447499LLU;
	static volatile int64_t x487 = -22266767006LL;
	int16_t x488 = -14;

	t75 = (x485%((x486^x487)*x488));

	if (t75 != 111878458553LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x489 = 0U;
	int32_t x490 = 128;
	int8_t x491 = INT8_MIN;
	int16_t x492 = INT16_MAX;

	t76 = (x489%((x490^x491)*x492));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x495 = 2898330;
	static int64_t x496 = -1LL;
	static volatile int64_t t77 = -245LL;

	t77 = (x493%((x494^x495)*x496));

	if (t77 != 88LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x500 = INT16_MIN;

	t78 = (x497%((x498^x499)*x500));

	if (t78 != 65) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x509 = -1;
	int16_t x510 = INT16_MIN;
	int32_t x511 = -1;
	int64_t x512 = -1LL;
	static volatile int64_t t79 = 1260LL;

	t79 = (x509%((x510^x511)*x512));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x513 = 0LL;
	int16_t x514 = INT16_MAX;
	uint16_t x515 = 1U;
	uint8_t x516 = 1U;

	t80 = (x513%((x514^x515)*x516));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x517 = 2U;
	uint64_t x518 = UINT64_MAX;
	int32_t x519 = -109902;
	int32_t x520 = -1;

	t81 = (x517%((x518^x519)*x520));

	if (t81 != 2LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x521 = INT8_MIN;
	int32_t x522 = INT32_MIN;
	volatile int16_t x524 = -1;
	int32_t t82 = 47;

	t82 = (x521%((x522^x523)*x524));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x525 = UINT32_MAX;
	int8_t x526 = -2;
	volatile uint64_t x527 = 99550592LLU;
	uint32_t x528 = 11313406U;
	uint64_t t83 = 3703827LLU;

	t83 = (x525%((x526^x527)*x528));

	if (t83 != 4294967295LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x537 = 922875227183LL;
	int32_t x539 = -1;
	int16_t x540 = INT16_MIN;
	int64_t t84 = 27769427LL;

	t84 = (x537%((x538^x539)*x540));

	if (t84 != 551983LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x542 = 10LLU;
	uint16_t x543 = UINT16_MAX;
	uint16_t x544 = 1U;
	volatile uint64_t t85 = 4LLU;

	t85 = (x541%((x542^x543)*x544));

	if (t85 != 3LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x547 = -1;
	static uint64_t x548 = UINT64_MAX;
	uint64_t t86 = 1562LLU;

	t86 = (x545%((x546^x547)*x548));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x553 = INT32_MIN;
	int8_t x554 = -1;
	int32_t x555 = 1022958;
	int64_t x556 = -1LL;
	volatile int64_t t87 = 699LL;

	t87 = (x553%((x554^x555)*x556));

	if (t87 != -292707LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x563 = 0U;
	int8_t x564 = INT8_MIN;
	static uint32_t t88 = 14U;

	t88 = (x561%((x562^x563)*x564));

	if (t88 != 5504U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x565 = 0;
	static int16_t x566 = -1;
	int64_t x568 = -40LL;
	static uint64_t t89 = 5744590983421LLU;

	t89 = (x565%((x566^x567)*x568));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x574 = -228192185495142LL;
	static int16_t x576 = INT16_MAX;
	int64_t t90 = -105378920LL;

	t90 = (x573%((x574^x575)*x576));

	if (t90 != -62LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x581 = 7U;
	int8_t x582 = INT8_MIN;
	static volatile uint8_t x583 = 10U;
	static int8_t x584 = INT8_MIN;
	volatile int32_t t91 = 153235952;

	t91 = (x581%((x582^x583)*x584));

	if (t91 != 7) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x585 = INT64_MIN;
	int8_t x586 = -1;
	uint64_t x587 = 58399672367LLU;
	uint64_t t92 = 11994149678948513LLU;

	t92 = (x585%((x586^x587)*x588));

	if (t92 != 42325435424LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x589 = 350LL;
	volatile uint8_t x591 = 2U;
	uint16_t x592 = 30U;
	int64_t t93 = 0LL;

	t93 = (x589%((x590^x591)*x592));

	if (t93 != 350LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x597 = UINT64_MAX;
	uint32_t x598 = UINT32_MAX;
	static uint64_t x599 = 5871LLU;
	int32_t x600 = 57328;
	uint64_t t94 = 1946175682620LLU;

	t94 = (x597%((x598^x599)*x600));

	if (t94 != 71880508872447LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x601 = 3967420444450LL;
	uint16_t x602 = 7U;
	static int8_t x603 = 11;
	int8_t x604 = INT8_MAX;
	static volatile int64_t t95 = -115606279569988566LL;

	t95 = (x601%((x602^x603)*x604));

	if (t95 != 1354LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x607 = UINT8_MAX;
	int32_t x608 = -2070827;
	uint64_t t96 = 129627477989LLU;

	t96 = (x605%((x606^x607)*x608));

	if (t96 != 127LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x613 = -2;
	uint32_t x614 = 14653362U;
	volatile int8_t x615 = -1;
	int16_t x616 = INT16_MAX;

	t97 = (x613%((x614^x615)*x616));

	if (t97 != 736600370U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x618 = -1;
	uint32_t t98 = 61567560U;

	t98 = (x617%((x618^x619)*x620));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x621 = INT8_MIN;
	uint8_t x622 = UINT8_MAX;
	static volatile int8_t x623 = 2;
	static volatile int8_t x624 = INT8_MIN;
	static int32_t t99 = 23;

	t99 = (x621%((x622^x623)*x624));

	if (t99 != -128) { NG(); } else { ; }
	
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

