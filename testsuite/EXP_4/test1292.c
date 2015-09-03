#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x8 = INT8_MAX;
static volatile int32_t t1 = 45208;
volatile uint32_t t3 = 173361004U;
uint16_t x29 = 11492U;
static int16_t x43 = INT16_MAX;
static uint64_t t6 = 0LLU;
volatile int16_t x57 = -1;
int64_t x58 = INT64_MIN;
int32_t t9 = -19;
uint32_t x71 = 43170832U;
int32_t t10 = -1233;
int16_t x82 = INT16_MIN;
int32_t x83 = -233;
int32_t x89 = INT32_MIN;
int32_t x90 = -1;
volatile uint32_t x92 = UINT32_MAX;
uint16_t x97 = 79U;
int64_t x98 = INT64_MIN;
static int64_t x100 = INT64_MIN;
int32_t t14 = -1;
int8_t x108 = INT8_MAX;
static uint8_t x109 = 19U;
int16_t x118 = -1;
int16_t x153 = INT16_MAX;
volatile int16_t x155 = INT16_MIN;
uint16_t x157 = UINT16_MAX;
int64_t x159 = 16640307LL;
int64_t x178 = INT64_MIN;
uint64_t x179 = 554900667115640622LLU;
static int64_t x181 = -2121814457LL;
uint16_t x213 = UINT16_MAX;
static int8_t x215 = 1;
volatile int16_t x218 = -15;
static int16_t x223 = -1;
int8_t x227 = INT8_MAX;
static volatile uint64_t t30 = 3056003161LLU;
int8_t x259 = INT8_MAX;
int8_t x264 = 36;
uint64_t x273 = 1993391321429867LLU;
int16_t x306 = INT16_MIN;
uint64_t x317 = 18551307573238091LLU;
volatile int32_t t39 = -42448855;
int32_t x339 = 1032613;
volatile int64_t x382 = INT64_MIN;
volatile int16_t x392 = INT16_MAX;
static volatile int64_t t45 = 27868570253817063LL;
volatile int64_t x402 = -40374502LL;
int64_t x411 = INT64_MIN;
int16_t x456 = -4;
int64_t x460 = INT64_MIN;
static int32_t t50 = -143;
static int64_t x478 = -4028LL;
int32_t x487 = INT32_MAX;
uint16_t x492 = 6U;
int32_t x493 = INT32_MAX;
int32_t x496 = 93597140;
int64_t x499 = -1LL;
volatile uint16_t x500 = UINT16_MAX;
int32_t t56 = 7;
volatile int32_t x523 = INT32_MIN;
uint32_t x524 = UINT32_MAX;
int32_t t59 = 107141;
uint32_t x539 = UINT32_MAX;
int8_t x549 = INT8_MIN;
int16_t x550 = INT16_MIN;
int32_t t63 = 444006;
int32_t x558 = INT32_MIN;
int32_t x560 = -1;
int32_t t64 = 7713479;
static uint32_t x573 = UINT32_MAX;
volatile int8_t x574 = INT8_MIN;
static int64_t x588 = -3585LL;
uint16_t x589 = UINT16_MAX;
volatile int32_t t69 = -43446546;
static volatile int8_t x595 = INT8_MIN;
int64_t x614 = INT64_MIN;
int64_t x649 = -51LL;
int8_t x651 = INT8_MAX;
int32_t t76 = 199625078;
int64_t x669 = -1LL;
uint32_t x671 = 17574777U;
int32_t x682 = INT32_MIN;
static volatile int16_t x737 = -1;
int8_t x740 = 1;
volatile int8_t x777 = 1;
int8_t x779 = INT8_MIN;
uint16_t x781 = 10602U;
int64_t x783 = -1LL;
int32_t t85 = 56004172;
int32_t x791 = -1;
uint64_t x801 = UINT64_MAX;
int64_t x802 = INT64_MIN;
int64_t x803 = -1LL;
int8_t x808 = 1;
int8_t x819 = -1;
static volatile uint64_t t93 = 4101161934805LLU;
static int64_t x834 = INT64_MIN;
int8_t x836 = INT8_MAX;
uint16_t x845 = UINT16_MAX;
volatile int8_t x855 = INT8_MIN;
int16_t x866 = -1;
volatile int64_t x876 = -1LL;


void f0(void) {
	static int64_t x5 = INT64_MAX;
	volatile int32_t x6 = -955425846;
	int32_t x7 = INT32_MIN;
	volatile int64_t t0 = -19LL;

	t0 = (x5%(x6<(x7==x8)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	int16_t x10 = INT16_MIN;
	int32_t x11 = INT32_MIN;
	int16_t x12 = INT16_MIN;

	t1 = (x9%(x10<(x11==x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -3545;
	int64_t x14 = -106196640LL;
	uint8_t x15 = 0U;
	uint16_t x16 = UINT16_MAX;
	static volatile int32_t t2 = 4652;

	t2 = (x13%(x14<(x15==x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = 160U;
	volatile int8_t x26 = INT8_MIN;
	int64_t x27 = INT64_MIN;
	volatile int32_t x28 = INT32_MIN;

	t3 = (x25%(x26<(x27==x28)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x30 = -7;
	int32_t x31 = -1;
	static int16_t x32 = INT16_MIN;
	volatile int32_t t4 = -576360005;

	t4 = (x29%(x30<(x31==x32)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MIN;
	int16_t x35 = 21;
	volatile int32_t x36 = -8076556;
	volatile int32_t t5 = -1;

	t5 = (x33%(x34<(x35==x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x41 = 42330031542818LLU;
	int16_t x42 = INT16_MIN;
	static int32_t x44 = INT32_MAX;

	t6 = (x41%(x42<(x43==x44)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = -37993571477LL;
	static int64_t x46 = -51LL;
	int8_t x47 = INT8_MIN;
	static int32_t x48 = -174113930;
	int64_t t7 = -2LL;

	t7 = (x45%(x46<(x47==x48)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = -3;
	volatile int64_t x54 = INT64_MIN;
	uint16_t x55 = 125U;
	volatile int32_t x56 = -3155755;
	volatile int32_t t8 = 426528;

	t8 = (x53%(x54<(x55==x56)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x59 = -5;
	volatile int16_t x60 = INT16_MIN;

	t9 = (x57%(x58<(x59==x60)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x69 = -1;
	int8_t x70 = -27;
	uint8_t x72 = UINT8_MAX;

	t10 = (x69%(x70<(x71==x72)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x77 = 1U;
	int32_t x78 = -1;
	volatile int32_t x79 = -576;
	int64_t x80 = INT64_MIN;
	static volatile int32_t t11 = -6;

	t11 = (x77%(x78<(x79==x80)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x81 = 38352U;
	static uint32_t x84 = UINT32_MAX;
	volatile uint32_t t12 = 581588005U;

	t12 = (x81%(x82<(x83==x84)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x91 = -1LL;
	volatile int32_t t13 = -26;

	t13 = (x89%(x90<(x91==x92)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x99 = 1;

	t14 = (x97%(x98<(x99==x100)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x105 = 44;
	int32_t x106 = -1;
	static int32_t x107 = 29526555;
	volatile int32_t t15 = -447041650;

	t15 = (x105%(x106<(x107==x108)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x110 = -1LL;
	volatile int8_t x111 = 35;
	int8_t x112 = INT8_MAX;
	volatile int32_t t16 = -3;

	t16 = (x109%(x110<(x111==x112)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x117 = 1;
	uint8_t x119 = 18U;
	int16_t x120 = INT16_MIN;
	int32_t t17 = 2;

	t17 = (x117%(x118<(x119==x120)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x121 = -1;
	int64_t x122 = INT64_MIN;
	uint32_t x123 = UINT32_MAX;
	uint8_t x124 = 20U;
	int32_t t18 = 11546211;

	t18 = (x121%(x122<(x123==x124)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x145 = 211740747U;
	int64_t x146 = INT64_MIN;
	uint8_t x147 = UINT8_MAX;
	int64_t x148 = INT64_MIN;
	uint32_t t19 = 3U;

	t19 = (x145%(x146<(x147==x148)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x154 = -106328;
	volatile int32_t x156 = INT32_MIN;
	int32_t t20 = 30037;

	t20 = (x153%(x154<(x155==x156)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x158 = INT32_MIN;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t21 = -984785246;

	t21 = (x157%(x158<(x159==x160)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x165 = 24U;
	static int64_t x166 = -1LL;
	int16_t x167 = -1;
	volatile uint32_t x168 = UINT32_MAX;
	volatile int32_t t22 = 192;

	t22 = (x165%(x166<(x167==x168)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x177 = 197083419U;
	int64_t x180 = INT64_MIN;
	volatile uint32_t t23 = 647778U;

	t23 = (x177%(x178<(x179==x180)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x182 = -1;
	static volatile int8_t x183 = INT8_MAX;
	volatile int8_t x184 = INT8_MIN;
	int64_t t24 = -426290153520LL;

	t24 = (x181%(x182<(x183==x184)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x197 = -461;
	volatile int16_t x198 = INT16_MIN;
	static int32_t x199 = -1;
	static int8_t x200 = INT8_MIN;
	volatile int32_t t25 = 3559;

	t25 = (x197%(x198<(x199==x200)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x205 = 40;
	int8_t x206 = INT8_MIN;
	int32_t x207 = 8939;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t26 = 6750563;

	t26 = (x205%(x206<(x207==x208)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x214 = INT32_MIN;
	volatile uint8_t x216 = UINT8_MAX;
	int32_t t27 = 16099;

	t27 = (x213%(x214<(x215==x216)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x217 = INT16_MAX;
	int32_t x219 = INT32_MAX;
	int8_t x220 = INT8_MIN;
	static int32_t t28 = 2916;

	t28 = (x217%(x218<(x219==x220)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x221 = -56;
	volatile int16_t x222 = -29;
	int32_t x224 = INT32_MIN;
	int32_t t29 = 0;

	t29 = (x221%(x222<(x223==x224)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x225 = 412042411164LLU;
	int16_t x226 = INT16_MIN;
	static int64_t x228 = 34LL;

	t30 = (x225%(x226<(x227==x228)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x257 = 616792515U;
	int8_t x258 = INT8_MIN;
	static int16_t x260 = -3;
	volatile uint32_t t31 = 853U;

	t31 = (x257%(x258<(x259==x260)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x261 = 53U;
	int16_t x262 = -1;
	int32_t x263 = INT32_MAX;
	int32_t t32 = 305155;

	t32 = (x261%(x262<(x263==x264)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MAX;
	int32_t x276 = -1;
	static uint64_t t33 = 6399897LLU;

	t33 = (x273%(x274<(x275==x276)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x277 = -1;
	int8_t x278 = -1;
	static uint64_t x279 = UINT64_MAX;
	volatile int16_t x280 = INT16_MAX;
	volatile int32_t t34 = 2;

	t34 = (x277%(x278<(x279==x280)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x293 = UINT16_MAX;
	int32_t x294 = -1;
	uint64_t x295 = 27170LLU;
	int64_t x296 = 47LL;
	static int32_t t35 = 611;

	t35 = (x293%(x294<(x295==x296)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x305 = INT8_MIN;
	int32_t x307 = INT32_MIN;
	volatile int64_t x308 = INT64_MIN;
	static volatile int32_t t36 = 3638144;

	t36 = (x305%(x306<(x307==x308)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x309 = -1;
	int32_t x310 = -1;
	static int16_t x311 = INT16_MIN;
	int16_t x312 = -14422;
	int32_t t37 = 4167723;

	t37 = (x309%(x310<(x311==x312)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x318 = -117LL;
	int8_t x319 = -1;
	int32_t x320 = 84449;
	volatile uint64_t t38 = 153061555737430LLU;

	t38 = (x317%(x318<(x319==x320)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x321 = INT8_MIN;
	int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MIN;
	int16_t x324 = 1486;

	t39 = (x321%(x322<(x323==x324)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x325 = INT16_MIN;
	static int64_t x326 = -1LL;
	volatile int8_t x327 = -1;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t40 = -16386;

	t40 = (x325%(x326<(x327==x328)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x337 = -1;
	volatile int32_t x338 = -16374;
	uint64_t x340 = 4744324LLU;
	static volatile int32_t t41 = -27188161;

	t41 = (x337%(x338<(x339==x340)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x369 = INT64_MIN;
	int32_t x370 = -604;
	int16_t x371 = 4266;
	uint16_t x372 = UINT16_MAX;
	int64_t t42 = -790567LL;

	t42 = (x369%(x370<(x371==x372)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = -1LL;
	uint8_t x379 = UINT8_MAX;
	uint32_t x380 = 29470125U;
	volatile int32_t t43 = -638;

	t43 = (x377%(x378<(x379==x380)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x381 = 5465;
	int16_t x383 = INT16_MIN;
	uint64_t x384 = UINT64_MAX;
	static volatile int32_t t44 = -3930848;

	t44 = (x381%(x382<(x383==x384)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x389 = INT64_MIN;
	int64_t x390 = INT64_MIN;
	int16_t x391 = INT16_MIN;

	t45 = (x389%(x390<(x391==x392)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x401 = INT16_MIN;
	int64_t x403 = INT64_MAX;
	int16_t x404 = 13392;
	int32_t t46 = -5642345;

	t46 = (x401%(x402<(x403==x404)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x409 = -1;
	static volatile int16_t x410 = -1;
	uint8_t x412 = 2U;
	static volatile int32_t t47 = -37412;

	t47 = (x409%(x410<(x411==x412)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x413 = -1;
	int32_t x414 = INT32_MIN;
	int16_t x415 = INT16_MAX;
	volatile int8_t x416 = 38;
	int32_t t48 = 1;

	t48 = (x413%(x414<(x415==x416)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x453 = INT16_MAX;
	static int8_t x454 = -1;
	static volatile int8_t x455 = 3;
	int32_t t49 = 364;

	t49 = (x453%(x454<(x455==x456)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x457 = -1;
	int64_t x458 = INT64_MIN;
	static int8_t x459 = -1;

	t50 = (x457%(x458<(x459==x460)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x465 = 490U;
	int16_t x466 = -47;
	static volatile int32_t x467 = INT32_MAX;
	int32_t x468 = -1;
	volatile int32_t t51 = 768396108;

	t51 = (x465%(x466<(x467==x468)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x477 = INT8_MAX;
	uint32_t x479 = UINT32_MAX;
	uint16_t x480 = 2U;
	int32_t t52 = -754529113;

	t52 = (x477%(x478<(x479==x480)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x485 = 5112302756LL;
	volatile int64_t x486 = INT64_MIN;
	int8_t x488 = -61;
	static int64_t t53 = -18613514279411LL;

	t53 = (x485%(x486<(x487==x488)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x489 = 7182U;
	static int8_t x490 = INT8_MIN;
	int8_t x491 = -7;
	uint32_t t54 = 2252001U;

	t54 = (x489%(x490<(x491==x492)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x494 = INT16_MIN;
	int16_t x495 = -267;
	volatile int32_t t55 = 4;

	t55 = (x493%(x494<(x495==x496)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x497 = 566;
	int16_t x498 = -104;

	t56 = (x497%(x498<(x499==x500)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x521 = INT16_MAX;
	int8_t x522 = -1;
	volatile int32_t t57 = -304254;

	t57 = (x521%(x522<(x523==x524)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x525 = INT32_MIN;
	int32_t x526 = -16693245;
	int32_t x527 = INT32_MIN;
	volatile int32_t x528 = INT32_MIN;
	volatile int32_t t58 = 106097328;

	t58 = (x525%(x526<(x527==x528)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x533 = 13U;
	static int16_t x534 = INT16_MIN;
	uint16_t x535 = 10761U;
	static uint64_t x536 = 451442955082428LLU;

	t59 = (x533%(x534<(x535==x536)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x537 = -1LL;
	int8_t x538 = INT8_MIN;
	int32_t x540 = -1;
	volatile int64_t t60 = -19459137547LL;

	t60 = (x537%(x538<(x539==x540)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x541 = -54878261;
	static int32_t x542 = -1;
	uint8_t x543 = 0U;
	int64_t x544 = INT64_MAX;
	static int32_t t61 = 17760;

	t61 = (x541%(x542<(x543==x544)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x545 = INT64_MIN;
	static int32_t x546 = -11566;
	uint16_t x547 = 659U;
	uint32_t x548 = 233587U;
	static int64_t t62 = 55769503LL;

	t62 = (x545%(x546<(x547==x548)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x551 = INT8_MIN;
	int16_t x552 = 793;

	t63 = (x549%(x550<(x551==x552)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x557 = -1;
	int32_t x559 = INT32_MIN;

	t64 = (x557%(x558<(x559==x560)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x565 = INT8_MIN;
	int8_t x566 = -1;
	uint64_t x567 = 192172332411LLU;
	static volatile int16_t x568 = -2715;
	volatile int32_t t65 = -1;

	t65 = (x565%(x566<(x567==x568)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x575 = INT8_MIN;
	static volatile uint16_t x576 = 3U;
	uint32_t t66 = 130U;

	t66 = (x573%(x574<(x575==x576)));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x577 = UINT16_MAX;
	int64_t x578 = INT64_MIN;
	uint64_t x579 = 3962456254LLU;
	int16_t x580 = INT16_MIN;
	int32_t t67 = 0;

	t67 = (x577%(x578<(x579==x580)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x585 = INT8_MAX;
	int16_t x586 = -1;
	int8_t x587 = INT8_MIN;
	int32_t t68 = -374492;

	t68 = (x585%(x586<(x587==x588)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x590 = -1;
	volatile int8_t x591 = INT8_MIN;
	static int16_t x592 = INT16_MAX;

	t69 = (x589%(x590<(x591==x592)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x593 = INT32_MAX;
	int16_t x594 = -1;
	volatile int16_t x596 = -1;
	volatile int32_t t70 = -805804;

	t70 = (x593%(x594<(x595==x596)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x613 = 5U;
	volatile uint16_t x615 = 15639U;
	int32_t x616 = INT32_MAX;
	static int32_t t71 = 0;

	t71 = (x613%(x614<(x615==x616)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x625 = INT64_MIN;
	static int8_t x626 = -1;
	volatile int32_t x627 = -368;
	uint32_t x628 = 434U;
	static volatile int64_t t72 = 7581751925567LL;

	t72 = (x625%(x626<(x627==x628)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x629 = -63LL;
	int64_t x630 = INT64_MIN;
	volatile uint8_t x631 = UINT8_MAX;
	uint8_t x632 = 102U;
	int64_t t73 = 70745LL;

	t73 = (x629%(x630<(x631==x632)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x641 = 1212;
	volatile int16_t x642 = -1;
	volatile int16_t x643 = INT16_MIN;
	volatile int32_t x644 = INT32_MAX;
	volatile int32_t t74 = -2117;

	t74 = (x641%(x642<(x643==x644)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x650 = INT64_MIN;
	static int32_t x652 = 2269;
	int64_t t75 = 23LL;

	t75 = (x649%(x650<(x651==x652)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x661 = INT16_MIN;
	int16_t x662 = -1;
	uint32_t x663 = UINT32_MAX;
	volatile int64_t x664 = 0LL;

	t76 = (x661%(x662<(x663==x664)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x665 = 13U;
	int8_t x666 = INT8_MIN;
	int64_t x667 = INT64_MAX;
	int8_t x668 = -1;
	volatile int32_t t77 = -15421;

	t77 = (x665%(x666<(x667==x668)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x670 = -2209574399181325179LL;
	volatile int64_t x672 = INT64_MIN;
	static volatile int64_t t78 = -836062LL;

	t78 = (x669%(x670<(x671==x672)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x681 = 0;
	int64_t x683 = 303280958LL;
	uint8_t x684 = 39U;
	int32_t t79 = -3;

	t79 = (x681%(x682<(x683==x684)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x697 = UINT16_MAX;
	volatile int32_t x698 = -11914132;
	static uint8_t x699 = 11U;
	volatile int8_t x700 = INT8_MIN;
	static volatile int32_t t80 = -115078283;

	t80 = (x697%(x698<(x699==x700)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x738 = -151;
	static int32_t x739 = 3;
	static int32_t t81 = -777;

	t81 = (x737%(x738<(x739==x740)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x757 = 934;
	int32_t x758 = INT32_MIN;
	uint8_t x759 = 11U;
	static uint8_t x760 = UINT8_MAX;
	volatile int32_t t82 = 430679494;

	t82 = (x757%(x758<(x759==x760)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x769 = 64386397LLU;
	volatile int32_t x770 = -24;
	int32_t x771 = INT32_MIN;
	uint64_t x772 = 48792075471988684LLU;
	static volatile uint64_t t83 = 6233571LLU;

	t83 = (x769%(x770<(x771==x772)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x778 = INT8_MIN;
	int64_t x780 = INT64_MIN;
	volatile int32_t t84 = -98548948;

	t84 = (x777%(x778<(x779==x780)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x782 = -26;
	int8_t x784 = -1;

	t85 = (x781%(x782<(x783==x784)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x785 = 382653U;
	int8_t x786 = INT8_MIN;
	static volatile int8_t x787 = -1;
	uint8_t x788 = UINT8_MAX;
	uint32_t t86 = 7661U;

	t86 = (x785%(x786<(x787==x788)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x789 = INT64_MIN;
	int16_t x790 = -7262;
	uint8_t x792 = 3U;
	int64_t t87 = -216736448204574LL;

	t87 = (x789%(x790<(x791==x792)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x797 = UINT32_MAX;
	int16_t x798 = INT16_MIN;
	static int16_t x799 = INT16_MIN;
	int8_t x800 = -4;
	static volatile uint32_t t88 = 19860476U;

	t88 = (x797%(x798<(x799==x800)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x804 = 15805U;
	static uint64_t t89 = 45LLU;

	t89 = (x801%(x802<(x803==x804)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x805 = INT16_MAX;
	int8_t x806 = INT8_MIN;
	static uint32_t x807 = UINT32_MAX;
	volatile int32_t t90 = 8651;

	t90 = (x805%(x806<(x807==x808)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x809 = INT16_MAX;
	static int32_t x810 = -1;
	uint32_t x811 = 25U;
	volatile int32_t x812 = INT32_MAX;
	static int32_t t91 = -1;

	t91 = (x809%(x810<(x811==x812)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x817 = INT32_MAX;
	int64_t x818 = -271LL;
	int32_t x820 = INT32_MAX;
	volatile int32_t t92 = -10;

	t92 = (x817%(x818<(x819==x820)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x829 = 7894078165LLU;
	int32_t x830 = -1;
	int32_t x831 = INT32_MIN;
	static volatile int8_t x832 = INT8_MAX;

	t93 = (x829%(x830<(x831==x832)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x833 = 198571LL;
	int16_t x835 = 26;
	volatile int64_t t94 = 7991429112LL;

	t94 = (x833%(x834<(x835==x836)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x841 = INT64_MIN;
	volatile int64_t x842 = -158465034762LL;
	volatile int32_t x843 = INT32_MIN;
	static volatile int64_t x844 = -1LL;
	int64_t t95 = -3890998243706586360LL;

	t95 = (x841%(x842<(x843==x844)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x846 = INT64_MIN;
	uint64_t x847 = 534078535LLU;
	static uint16_t x848 = 1U;
	volatile int32_t t96 = 28614;

	t96 = (x845%(x846<(x847==x848)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x853 = 297;
	int64_t x854 = INT64_MIN;
	int8_t x856 = -58;
	int32_t t97 = 10195816;

	t97 = (x853%(x854<(x855==x856)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x865 = 3043U;
	int32_t x867 = INT32_MAX;
	int64_t x868 = -1LL;
	int32_t t98 = 24752;

	t98 = (x865%(x866<(x867==x868)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x873 = UINT8_MAX;
	int64_t x874 = -117361LL;
	volatile int64_t x875 = INT64_MIN;
	int32_t t99 = -113;

	t99 = (x873%(x874<(x875==x876)));

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

