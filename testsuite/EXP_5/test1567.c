#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -89351;
int16_t x5 = INT16_MAX;
int32_t x8 = INT32_MIN;
volatile uint16_t x25 = 45U;
static uint64_t x27 = 178272472644929LLU;
int64_t x28 = INT64_MIN;
uint32_t x73 = 4254673U;
volatile int64_t x75 = INT64_MAX;
int32_t x77 = INT32_MAX;
int64_t x79 = INT64_MAX;
int8_t x87 = -1;
int16_t x88 = -99;
static int8_t x89 = 14;
int32_t x103 = -1;
volatile uint64_t t9 = 6LLU;
static int8_t x130 = INT8_MIN;
volatile int8_t x132 = 26;
uint64_t x133 = UINT64_MAX;
uint16_t x134 = 37U;
int8_t x148 = INT8_MIN;
uint64_t t14 = 1417LLU;
static volatile int32_t t15 = -1062043;
uint32_t x178 = 18283287U;
int64_t x179 = INT64_MIN;
static uint32_t t16 = 1563U;
uint16_t x192 = UINT16_MAX;
int8_t x196 = INT8_MAX;
volatile int32_t t21 = 1;
int64_t x209 = INT64_MAX;
int64_t x224 = 3LL;
static volatile uint32_t x234 = 15370U;
uint32_t x235 = 109U;
int32_t x236 = -733;
int16_t x267 = INT16_MAX;
uint32_t x272 = 10928974U;
uint64_t x273 = UINT64_MAX;
volatile int16_t x274 = INT16_MAX;
volatile uint16_t x281 = UINT16_MAX;
int8_t x282 = 2;
int8_t x283 = 16;
volatile int32_t t33 = 1974;
int64_t x290 = INT64_MIN;
static uint32_t x305 = 33794U;
int16_t x308 = -1;
uint32_t x309 = 55124987U;
uint8_t x315 = 13U;
int32_t t40 = -22645858;
uint16_t x345 = 2U;
uint32_t t43 = 174551391U;
uint16_t x365 = UINT16_MAX;
static uint8_t x372 = 21U;
uint16_t x377 = UINT16_MAX;
int32_t t46 = 96255;
static int16_t x397 = 6414;
int64_t x402 = 6860959116707LL;
volatile uint32_t t48 = 15461433U;
uint32_t x415 = UINT32_MAX;
static int64_t x427 = INT64_MIN;
int8_t x428 = INT8_MIN;
uint8_t x443 = 5U;
int64_t x446 = -806841472962547LL;
uint64_t x458 = 125LLU;
int64_t x460 = INT64_MIN;
uint64_t x463 = 11632LLU;
int64_t x464 = -7117LL;
volatile uint16_t x478 = 2U;
int8_t x479 = INT8_MAX;
int32_t t58 = 51;
uint32_t x489 = 26U;
int32_t x496 = INT32_MIN;
volatile int32_t t62 = 0;
static uint8_t x501 = 10U;
uint16_t x507 = UINT16_MAX;
uint32_t x508 = 242U;
static uint8_t x529 = UINT8_MAX;
static int16_t x543 = 116;
int16_t x544 = INT16_MAX;
uint32_t x554 = UINT32_MAX;
volatile int8_t x558 = INT8_MIN;
uint64_t x560 = 604083434LLU;
int8_t x563 = INT8_MIN;
int64_t x564 = -397640074032LL;
uint32_t x570 = 31891U;
int64_t x578 = INT64_MIN;
int16_t x579 = INT16_MAX;
uint8_t x587 = 22U;
static volatile uint32_t x597 = UINT32_MAX;
static int64_t x615 = -443865683673298586LL;
static uint16_t x622 = 1866U;
volatile int32_t x623 = INT32_MIN;
volatile int64_t x634 = INT64_MAX;
int32_t t81 = -1205;
volatile int32_t t82 = -337787778;
int16_t x652 = -1;
static uint64_t x661 = 96LLU;
volatile uint64_t x666 = 2664748509LLU;
int16_t x684 = INT16_MAX;
int64_t x688 = -67215LL;
volatile uint64_t x699 = UINT64_MAX;
static uint16_t x700 = 1843U;
static int32_t x705 = INT32_MAX;
int16_t x718 = INT16_MIN;
static int8_t x720 = INT8_MIN;
int64_t x721 = 194859858168851LL;
int64_t x722 = -24756023876096579LL;
uint32_t x724 = UINT32_MAX;
int32_t x735 = -1;
uint64_t x749 = 373182622110LLU;
int64_t x773 = INT64_MAX;


void f0(void) {
	static uint16_t x1 = 4U;
	uint64_t x2 = 12LLU;
	int16_t x3 = INT16_MAX;
	static int8_t x4 = 30;

	t0 = (x1>>((x2<=x3)/x4));

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = -1;
	int32_t x7 = INT32_MAX;
	int32_t t1 = 266125403;

	t1 = (x5>>((x6<=x7)/x8));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x17 = 0LL;
	int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	int32_t x20 = INT32_MIN;
	volatile int64_t t2 = -12LL;

	t2 = (x17>>((x18<=x19)/x20));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x26 = 44703586555323LLU;
	volatile int32_t t3 = 220572;

	t3 = (x25>>((x26<=x27)/x28));

	if (t3 != 45) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x74 = INT8_MIN;
	static uint64_t x76 = 57LLU;
	volatile uint32_t t4 = 823564811U;

	t4 = (x73>>((x74<=x75)/x76));

	if (t4 != 4254673U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x78 = INT8_MAX;
	static volatile uint32_t x80 = 112913945U;
	static int32_t t5 = INT32_MAX;

	t5 = (x77>>((x78<=x79)/x80));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x85 = INT16_MAX;
	int32_t x86 = INT32_MIN;
	volatile int32_t t6 = 301436057;

	t6 = (x85>>((x86<=x87)/x88));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x90 = INT32_MIN;
	static int64_t x91 = INT64_MIN;
	int16_t x92 = 1815;
	volatile int32_t t7 = 216028;

	t7 = (x89>>((x90<=x91)/x92));

	if (t7 != 14) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x101 = 2U;
	int32_t x102 = -1;
	uint64_t x104 = UINT64_MAX;
	int32_t t8 = -905501;

	t8 = (x101>>((x102<=x103)/x104));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x117 = 1392LLU;
	uint8_t x118 = 5U;
	static int16_t x119 = INT16_MAX;
	int8_t x120 = INT8_MIN;

	t9 = (x117>>((x118<=x119)/x120));

	if (t9 != 1392LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x125 = 1U;
	int32_t x126 = -1;
	int32_t x127 = 5;
	uint64_t x128 = 280516254373684831LLU;
	int32_t t10 = 334164;

	t10 = (x125>>((x126<=x127)/x128));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x129 = UINT16_MAX;
	int16_t x131 = -1;
	static volatile int32_t t11 = 35666395;

	t11 = (x129>>((x130<=x131)/x132));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x135 = 482U;
	static int64_t x136 = INT64_MAX;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x133>>((x134<=x135)/x136));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x141 = 8144880746545924845LLU;
	int16_t x142 = INT16_MAX;
	volatile int64_t x143 = INT64_MIN;
	int64_t x144 = -7225LL;
	uint64_t t13 = 8119763655LLU;

	t13 = (x141>>((x142<=x143)/x144));

	if (t13 != 8144880746545924845LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x145 = 246331220999LLU;
	volatile int32_t x146 = INT32_MIN;
	uint32_t x147 = UINT32_MAX;

	t14 = (x145>>((x146<=x147)/x148));

	if (t14 != 246331220999LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x149 = UINT8_MAX;
	int8_t x150 = -1;
	int8_t x151 = INT8_MIN;
	static volatile uint32_t x152 = 17634U;

	t15 = (x149>>((x150<=x151)/x152));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x177 = 3U;
	volatile int32_t x180 = INT32_MIN;

	t16 = (x177>>((x178<=x179)/x180));

	if (t16 != 3U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x181 = 18365LL;
	uint16_t x182 = 29992U;
	volatile int64_t x183 = INT64_MIN;
	int16_t x184 = INT16_MAX;
	int64_t t17 = 148424384430743698LL;

	t17 = (x181>>((x182<=x183)/x184));

	if (t17 != 18365LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x185 = 15U;
	int64_t x186 = INT64_MIN;
	int16_t x187 = 4;
	static uint16_t x188 = UINT16_MAX;
	volatile uint32_t t18 = 56055U;

	t18 = (x185>>((x186<=x187)/x188));

	if (t18 != 15U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x189 = INT32_MAX;
	uint16_t x190 = UINT16_MAX;
	volatile int16_t x191 = -1;
	static int32_t t19 = INT32_MAX;

	t19 = (x189>>((x190<=x191)/x192));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x193 = 1U;
	volatile uint8_t x194 = 0U;
	uint16_t x195 = 0U;
	volatile int32_t t20 = 1205;

	t20 = (x193>>((x194<=x195)/x196));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x201 = INT8_MAX;
	int16_t x202 = 64;
	int64_t x203 = INT64_MIN;
	volatile int16_t x204 = -5;

	t21 = (x201>>((x202<=x203)/x204));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x205 = UINT8_MAX;
	uint32_t x206 = 454935422U;
	int16_t x207 = -4;
	volatile int8_t x208 = 8;
	static int32_t t22 = -63862;

	t22 = (x205>>((x206<=x207)/x208));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x210 = INT16_MIN;
	volatile int32_t x211 = INT32_MIN;
	volatile uint32_t x212 = UINT32_MAX;
	volatile int64_t t23 = INT64_MAX;

	t23 = (x209>>((x210<=x211)/x212));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x217 = 311U;
	uint32_t x218 = 349468U;
	int8_t x219 = INT8_MAX;
	int64_t x220 = INT64_MAX;
	uint32_t t24 = 13713837U;

	t24 = (x217>>((x218<=x219)/x220));

	if (t24 != 311U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x221 = 730;
	int16_t x222 = -1;
	volatile int32_t x223 = 2959;
	volatile int32_t t25 = 543051;

	t25 = (x221>>((x222<=x223)/x224));

	if (t25 != 730) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x225 = UINT64_MAX;
	int8_t x226 = INT8_MIN;
	int8_t x227 = INT8_MIN;
	static uint32_t x228 = UINT32_MAX;
	uint64_t t26 = UINT64_MAX;

	t26 = (x225>>((x226<=x227)/x228));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x233 = INT8_MAX;
	int32_t t27 = 0;

	t27 = (x233>>((x234<=x235)/x236));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x245 = 4969988799LL;
	int8_t x246 = 2;
	uint8_t x247 = 1U;
	int32_t x248 = -11;
	int64_t t28 = -2283329561648905419LL;

	t28 = (x245>>((x246<=x247)/x248));

	if (t28 != 4969988799LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x261 = INT16_MAX;
	uint32_t x262 = 1U;
	uint16_t x263 = 6981U;
	int16_t x264 = -104;
	static volatile int32_t t29 = -255;

	t29 = (x261>>((x262<=x263)/x264));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x265 = 139U;
	int32_t x266 = INT32_MAX;
	volatile int8_t x268 = -1;
	static volatile uint32_t t30 = 49862U;

	t30 = (x265>>((x266<=x267)/x268));

	if (t30 != 139U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x269 = UINT32_MAX;
	int32_t x270 = 3894674;
	uint64_t x271 = 8LLU;
	uint32_t t31 = UINT32_MAX;

	t31 = (x269>>((x270<=x271)/x272));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x275 = -1;
	int32_t x276 = -1103;
	static uint64_t t32 = UINT64_MAX;

	t32 = (x273>>((x274<=x275)/x276));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x284 = -905802LL;

	t33 = (x281>>((x282<=x283)/x284));

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x289 = UINT64_MAX;
	uint32_t x291 = 1U;
	static int8_t x292 = INT8_MAX;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (x289>>((x290<=x291)/x292));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x293 = UINT16_MAX;
	static int64_t x294 = 2412008LL;
	int64_t x295 = INT64_MIN;
	int64_t x296 = -12053559012LL;
	volatile int32_t t35 = 53092;

	t35 = (x293>>((x294<=x295)/x296));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x306 = INT8_MAX;
	int64_t x307 = -1487411512741248874LL;
	volatile uint32_t t36 = 3U;

	t36 = (x305>>((x306<=x307)/x308));

	if (t36 != 33794U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x310 = UINT32_MAX;
	int16_t x311 = -22;
	volatile int64_t x312 = -1LL;
	volatile uint32_t t37 = 209U;

	t37 = (x309>>((x310<=x311)/x312));

	if (t37 != 55124987U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x313 = 2318U;
	uint8_t x314 = 6U;
	uint16_t x316 = UINT16_MAX;
	int32_t t38 = -988;

	t38 = (x313>>((x314<=x315)/x316));

	if (t38 != 2318) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x325 = 0;
	static volatile uint64_t x326 = UINT64_MAX;
	uint16_t x327 = UINT16_MAX;
	int16_t x328 = INT16_MIN;
	int32_t t39 = 25737;

	t39 = (x325>>((x326<=x327)/x328));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x341 = 0U;
	volatile uint32_t x342 = 1327894743U;
	int64_t x343 = INT64_MIN;
	uint8_t x344 = 22U;

	t40 = (x341>>((x342<=x343)/x344));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x346 = INT64_MIN;
	uint32_t x347 = 275U;
	volatile uint8_t x348 = UINT8_MAX;
	volatile int32_t t41 = -1;

	t41 = (x345>>((x346<=x347)/x348));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x353 = 7153U;
	static int16_t x354 = 15;
	volatile int64_t x355 = -1LL;
	int64_t x356 = INT64_MIN;
	volatile int32_t t42 = -138033481;

	t42 = (x353>>((x354<=x355)/x356));

	if (t42 != 7153) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x361 = 24592186U;
	volatile int16_t x362 = INT16_MIN;
	volatile uint64_t x363 = UINT64_MAX;
	volatile uint64_t x364 = UINT64_MAX;

	t43 = (x361>>((x362<=x363)/x364));

	if (t43 != 24592186U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x366 = INT32_MAX;
	volatile int64_t x367 = INT64_MIN;
	static int16_t x368 = INT16_MIN;
	volatile int32_t t44 = -751849578;

	t44 = (x365>>((x366<=x367)/x368));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x369 = 186U;
	volatile uint64_t x370 = 3237050075832059203LLU;
	static int16_t x371 = -5032;
	int32_t t45 = 5050;

	t45 = (x369>>((x370<=x371)/x372));

	if (t45 != 186) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x378 = UINT64_MAX;
	static int64_t x379 = INT64_MAX;
	int8_t x380 = 4;

	t46 = (x377>>((x378<=x379)/x380));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x398 = UINT8_MAX;
	static int64_t x399 = -118946610LL;
	static volatile int32_t x400 = -828;
	volatile int32_t t47 = -51968;

	t47 = (x397>>((x398<=x399)/x400));

	if (t47 != 6414) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x401 = 117194441U;
	static uint64_t x403 = 29487702119378LLU;
	static uint64_t x404 = 324156687716285161LLU;

	t48 = (x401>>((x402<=x403)/x404));

	if (t48 != 117194441U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x413 = INT32_MAX;
	int32_t x414 = -608;
	static volatile int64_t x416 = INT64_MAX;
	int32_t t49 = INT32_MAX;

	t49 = (x413>>((x414<=x415)/x416));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x425 = UINT32_MAX;
	uint64_t x426 = UINT64_MAX;
	volatile uint32_t t50 = UINT32_MAX;

	t50 = (x425>>((x426<=x427)/x428));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x429 = UINT64_MAX;
	int32_t x430 = -784573;
	int64_t x431 = INT64_MAX;
	int16_t x432 = INT16_MAX;
	static uint64_t t51 = UINT64_MAX;

	t51 = (x429>>((x430<=x431)/x432));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x441 = 29U;
	int32_t x442 = -1;
	int8_t x444 = INT8_MIN;
	volatile int32_t t52 = -6;

	t52 = (x441>>((x442<=x443)/x444));

	if (t52 != 29) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x445 = UINT8_MAX;
	uint8_t x447 = UINT8_MAX;
	int16_t x448 = INT16_MIN;
	volatile int32_t t53 = -4342;

	t53 = (x445>>((x446<=x447)/x448));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x453 = 1U;
	int32_t x454 = INT32_MIN;
	int64_t x455 = INT64_MIN;
	static volatile int16_t x456 = INT16_MAX;
	volatile int32_t t54 = -5712346;

	t54 = (x453>>((x454<=x455)/x456));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x457 = 33U;
	int16_t x459 = -24;
	int32_t t55 = -291;

	t55 = (x457>>((x458<=x459)/x460));

	if (t55 != 33) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x461 = INT8_MAX;
	volatile uint16_t x462 = 14U;
	volatile int32_t t56 = -29654356;

	t56 = (x461>>((x462<=x463)/x464));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x473 = 50U;
	int64_t x474 = INT64_MIN;
	int16_t x475 = INT16_MIN;
	int64_t x476 = 5000LL;
	volatile int32_t t57 = 5518;

	t57 = (x473>>((x474<=x475)/x476));

	if (t57 != 50) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x477 = INT8_MAX;
	int64_t x480 = INT64_MAX;

	t58 = (x477>>((x478<=x479)/x480));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x481 = 37U;
	static int32_t x482 = -3262;
	volatile int8_t x483 = INT8_MIN;
	int8_t x484 = -15;
	volatile int32_t t59 = 13;

	t59 = (x481>>((x482<=x483)/x484));

	if (t59 != 37) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x490 = INT64_MIN;
	int16_t x491 = INT16_MIN;
	int16_t x492 = 122;
	static volatile uint32_t t60 = 27003U;

	t60 = (x489>>((x490<=x491)/x492));

	if (t60 != 26U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x493 = 21U;
	static int16_t x494 = -388;
	int8_t x495 = INT8_MIN;
	int32_t t61 = 849;

	t61 = (x493>>((x494<=x495)/x496));

	if (t61 != 21) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x497 = 11;
	uint16_t x498 = 20U;
	int8_t x499 = -2;
	int8_t x500 = INT8_MIN;

	t62 = (x497>>((x498<=x499)/x500));

	if (t62 != 11) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x502 = -1;
	uint8_t x503 = UINT8_MAX;
	static volatile int32_t x504 = 20208;
	volatile int32_t t63 = 850460476;

	t63 = (x501>>((x502<=x503)/x504));

	if (t63 != 10) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x505 = 31548634;
	static uint64_t x506 = UINT64_MAX;
	static int32_t t64 = -55;

	t64 = (x505>>((x506<=x507)/x508));

	if (t64 != 31548634) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x513 = 88482978571567LL;
	volatile int16_t x514 = INT16_MIN;
	int16_t x515 = INT16_MAX;
	int64_t x516 = 2134996LL;
	volatile int64_t t65 = 2LL;

	t65 = (x513>>((x514<=x515)/x516));

	if (t65 != 88482978571567LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x517 = UINT64_MAX;
	int8_t x518 = INT8_MIN;
	uint16_t x519 = 200U;
	volatile uint8_t x520 = 10U;
	uint64_t t66 = UINT64_MAX;

	t66 = (x517>>((x518<=x519)/x520));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x521 = 0U;
	uint16_t x522 = 650U;
	int64_t x523 = INT64_MIN;
	volatile uint32_t x524 = UINT32_MAX;
	volatile int32_t t67 = 6108;

	t67 = (x521>>((x522<=x523)/x524));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x530 = 4U;
	uint32_t x531 = 5U;
	uint16_t x532 = 1424U;
	volatile int32_t t68 = 3;

	t68 = (x529>>((x530<=x531)/x532));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x541 = UINT32_MAX;
	uint32_t x542 = 423U;
	uint32_t t69 = UINT32_MAX;

	t69 = (x541>>((x542<=x543)/x544));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x545 = 3;
	volatile uint8_t x546 = UINT8_MAX;
	volatile uint64_t x547 = 1354607811246LLU;
	volatile uint8_t x548 = 47U;
	volatile int32_t t70 = -34;

	t70 = (x545>>((x546<=x547)/x548));

	if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x553 = 40;
	int32_t x555 = INT32_MIN;
	int16_t x556 = INT16_MAX;
	int32_t t71 = 77;

	t71 = (x553>>((x554<=x555)/x556));

	if (t71 != 40) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x557 = 390U;
	volatile int16_t x559 = 3;
	volatile int32_t t72 = -195561;

	t72 = (x557>>((x558<=x559)/x560));

	if (t72 != 390) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x561 = INT32_MAX;
	int16_t x562 = 1;
	static volatile int32_t t73 = INT32_MAX;

	t73 = (x561>>((x562<=x563)/x564));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x569 = UINT64_MAX;
	volatile int32_t x571 = 1;
	int64_t x572 = -1LL;
	uint64_t t74 = UINT64_MAX;

	t74 = (x569>>((x570<=x571)/x572));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x577 = 110U;
	int64_t x580 = INT64_MAX;
	static volatile uint32_t t75 = 33U;

	t75 = (x577>>((x578<=x579)/x580));

	if (t75 != 110U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x581 = INT8_MAX;
	uint8_t x582 = 2U;
	static int16_t x583 = 2;
	int64_t x584 = INT64_MAX;
	int32_t t76 = 3027;

	t76 = (x581>>((x582<=x583)/x584));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x585 = 30845U;
	int64_t x586 = 1270359723935558LL;
	volatile int64_t x588 = -1LL;
	int32_t t77 = -150257849;

	t77 = (x585>>((x586<=x587)/x588));

	if (t77 != 30845) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x598 = INT8_MIN;
	int16_t x599 = -94;
	static int64_t x600 = INT64_MIN;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = (x597>>((x598<=x599)/x600));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x613 = 1968U;
	int16_t x614 = INT16_MIN;
	uint8_t x616 = 17U;
	int32_t t79 = 263;

	t79 = (x613>>((x614<=x615)/x616));

	if (t79 != 1968) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x621 = INT64_MAX;
	static int64_t x624 = INT64_MIN;
	static volatile int64_t t80 = INT64_MAX;

	t80 = (x621>>((x622<=x623)/x624));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x633 = 0;
	int16_t x635 = INT16_MIN;
	int16_t x636 = INT16_MAX;

	t81 = (x633>>((x634<=x635)/x636));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x641 = 15U;
	uint64_t x642 = 137893483767LLU;
	uint32_t x643 = 502291U;
	int16_t x644 = -1;

	t82 = (x641>>((x642<=x643)/x644));

	if (t82 != 15) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x649 = UINT16_MAX;
	uint8_t x650 = 0U;
	static int16_t x651 = INT16_MIN;
	volatile int32_t t83 = 845861540;

	t83 = (x649>>((x650<=x651)/x652));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x657 = INT64_MAX;
	static uint64_t x658 = 2093557LLU;
	int16_t x659 = INT16_MIN;
	uint8_t x660 = UINT8_MAX;
	int64_t t84 = INT64_MAX;

	t84 = (x657>>((x658<=x659)/x660));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x662 = 2471966896417587773LLU;
	static uint16_t x663 = UINT16_MAX;
	static int8_t x664 = INT8_MAX;
	uint64_t t85 = 37774133707LLU;

	t85 = (x661>>((x662<=x663)/x664));

	if (t85 != 96LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x665 = 41;
	uint16_t x667 = 3U;
	static uint16_t x668 = 1U;
	volatile int32_t t86 = 432;

	t86 = (x665>>((x666<=x667)/x668));

	if (t86 != 41) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x681 = 18U;
	uint8_t x682 = UINT8_MAX;
	int32_t x683 = -5;
	int32_t t87 = 244;

	t87 = (x681>>((x682<=x683)/x684));

	if (t87 != 18) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x685 = 14500LL;
	volatile int64_t x686 = -1LL;
	int32_t x687 = -1;
	int64_t t88 = -13487LL;

	t88 = (x685>>((x686<=x687)/x688));

	if (t88 != 14500LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x689 = 57U;
	int8_t x690 = INT8_MIN;
	int32_t x691 = INT32_MIN;
	static uint16_t x692 = 11U;
	int32_t t89 = -5721410;

	t89 = (x689>>((x690<=x691)/x692));

	if (t89 != 57) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x697 = 931LLU;
	volatile uint8_t x698 = 113U;
	volatile uint64_t t90 = 48817262230227784LLU;

	t90 = (x697>>((x698<=x699)/x700));

	if (t90 != 931LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x706 = 244508008;
	uint16_t x707 = 921U;
	int32_t x708 = INT32_MIN;
	volatile int32_t t91 = INT32_MAX;

	t91 = (x705>>((x706<=x707)/x708));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x717 = INT8_MAX;
	volatile int64_t x719 = -151352550158215LL;
	int32_t t92 = -842720713;

	t92 = (x717>>((x718<=x719)/x720));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x723 = INT32_MIN;
	int64_t t93 = -23543182864256658LL;

	t93 = (x721>>((x722<=x723)/x724));

	if (t93 != 194859858168851LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x733 = UINT8_MAX;
	volatile int32_t x734 = 139169;
	int32_t x736 = INT32_MIN;
	volatile int32_t t94 = 613253;

	t94 = (x733>>((x734<=x735)/x736));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x741 = 0;
	int8_t x742 = INT8_MIN;
	volatile int8_t x743 = 14;
	static int64_t x744 = 1454537181360LL;
	int32_t t95 = -941933310;

	t95 = (x741>>((x742<=x743)/x744));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x750 = UINT32_MAX;
	int64_t x751 = INT64_MIN;
	uint64_t x752 = 12LLU;
	volatile uint64_t t96 = 3LLU;

	t96 = (x749>>((x750<=x751)/x752));

	if (t96 != 373182622110LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x769 = 1059459567300LLU;
	int16_t x770 = -549;
	int16_t x771 = -1;
	uint16_t x772 = 5U;
	uint64_t t97 = 6209140108237355797LLU;

	t97 = (x769>>((x770<=x771)/x772));

	if (t97 != 1059459567300LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x774 = INT8_MIN;
	static volatile uint8_t x775 = 20U;
	int32_t x776 = INT32_MIN;
	volatile int64_t t98 = INT64_MAX;

	t98 = (x773>>((x774<=x775)/x776));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x777 = 10U;
	int8_t x778 = INT8_MIN;
	int32_t x779 = -1;
	int8_t x780 = INT8_MAX;
	int32_t t99 = -464677;

	t99 = (x777>>((x778<=x779)/x780));

	if (t99 != 10) { NG(); } else { ; }
	
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

