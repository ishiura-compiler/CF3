#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x12 = 13398U;
int32_t x15 = INT32_MIN;
volatile int32_t t1 = -23;
static uint64_t x34 = UINT64_MAX;
int32_t t3 = 227;
static int32_t x37 = INT32_MIN;
int64_t x47 = -162371599840LL;
int32_t t5 = 258491365;
uint64_t x74 = UINT64_MAX;
uint32_t x85 = 87219184U;
static volatile int32_t x101 = -23782;
static uint64_t x102 = 4776249762991418947LLU;
int8_t x104 = INT8_MAX;
static volatile int32_t t11 = -14672;
int32_t t12 = -1638;
int16_t x118 = -1;
int8_t x142 = INT8_MIN;
int16_t x157 = 1;
int8_t x170 = -1;
volatile int32_t t20 = -13;
uint16_t x185 = 8U;
volatile int16_t x190 = -1;
volatile int32_t t23 = 65529923;
volatile int8_t x201 = 1;
static volatile int32_t t26 = 55401139;
volatile uint32_t x215 = 775400974U;
int32_t t27 = -7522131;
uint64_t x220 = 4119825870985316LLU;
uint16_t x221 = 29U;
int32_t t29 = -101;
int64_t x234 = INT64_MIN;
int32_t x249 = INT32_MIN;
int16_t x252 = -17;
static int32_t t32 = -197115;
volatile int8_t x261 = INT8_MIN;
static int16_t x263 = 0;
int16_t x277 = 4461;
uint64_t x279 = 929418304242LLU;
volatile int32_t t35 = -10298;
static uint32_t x342 = UINT32_MAX;
static int16_t x344 = INT16_MAX;
uint16_t x351 = 133U;
int32_t x353 = -32560537;
int32_t x367 = -11;
volatile int32_t t43 = 310;
int16_t x370 = INT16_MIN;
int16_t x389 = INT16_MAX;
volatile int64_t x397 = 3892119441451LL;
static int32_t x400 = 22848;
static int32_t t46 = -507645979;
static int8_t x410 = INT8_MIN;
static int32_t t48 = 11426254;
static int16_t x418 = 10169;
int32_t x424 = -1;
int32_t t52 = 4074250;
volatile int16_t x432 = INT16_MIN;
static int16_t x440 = INT16_MAX;
uint32_t x443 = 132483U;
static int32_t x447 = 0;
volatile int32_t t56 = -60560140;
int16_t x452 = 1;
uint8_t x454 = 13U;
volatile int32_t x455 = INT32_MAX;
volatile int32_t t58 = -80;
volatile int64_t x459 = -225550064914LL;
int8_t x463 = 54;
int64_t x469 = INT64_MIN;
int32_t x473 = INT32_MAX;
int32_t t64 = -1;
static int64_t x493 = INT64_MIN;
static int32_t t67 = 53051;
int32_t x523 = INT32_MIN;
static int32_t t69 = -3;
int64_t x581 = INT64_MAX;
uint64_t x589 = 8279877845470110LLU;
volatile int64_t x599 = INT64_MIN;
volatile uint8_t x600 = 39U;
int32_t t75 = 26895;
int64_t x613 = -31355164822000LL;
uint16_t x615 = 44U;
static int16_t x629 = 14957;
int64_t x632 = INT64_MAX;
int32_t t78 = 28245;
static volatile uint32_t x641 = 9U;
int32_t x657 = INT32_MAX;
int8_t x662 = INT8_MIN;
volatile int16_t x663 = -6397;
int32_t t82 = -1491;
uint32_t x666 = 14U;
volatile int8_t x688 = -1;
int64_t x717 = INT64_MAX;
int64_t x726 = INT64_MAX;
volatile uint64_t x728 = UINT64_MAX;
static int8_t x729 = INT8_MIN;
int32_t x747 = 1;
static int32_t t91 = -2202;
int64_t x758 = INT64_MIN;
uint8_t x765 = UINT8_MAX;
static uint16_t x766 = 107U;
int16_t x767 = INT16_MAX;
static volatile uint16_t x776 = UINT16_MAX;
uint16_t x786 = 5411U;
volatile uint8_t x788 = UINT8_MAX;
int16_t x790 = -47;
uint32_t x800 = 242443U;


void f0(void) {
	int32_t x9 = INT32_MAX;
	static uint32_t x10 = UINT32_MAX;
	static int8_t x11 = 28;
	volatile int32_t t0 = 2715168;

	t0 = (x9<(x10%(x11<=x12)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = INT64_MAX;
	int32_t x14 = -1;
	int32_t x16 = INT32_MIN;

	t1 = (x13<(x14%(x15<=x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x21 = -1;
	uint8_t x22 = UINT8_MAX;
	static volatile int64_t x23 = -1LL;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t2 = 446150324;

	t2 = (x21<(x22%(x23<=x24)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x33 = UINT32_MAX;
	int16_t x35 = -1;
	int64_t x36 = -1LL;

	t3 = (x33<(x34%(x35<=x36)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x38 = -620003;
	static int64_t x39 = INT64_MIN;
	volatile int8_t x40 = INT8_MIN;
	int32_t t4 = 4116;

	t4 = (x37<(x38%(x39<=x40)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x45 = INT16_MIN;
	int32_t x46 = INT32_MIN;
	volatile int64_t x48 = -1LL;

	t5 = (x45<(x46%(x47<=x48)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x57 = 32944U;
	int8_t x58 = -18;
	int64_t x59 = -3855495634742933LL;
	volatile uint8_t x60 = UINT8_MAX;
	volatile int32_t t6 = 215;

	t6 = (x57<(x58%(x59<=x60)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x73 = INT32_MAX;
	uint8_t x75 = 62U;
	static uint32_t x76 = 21024954U;
	int32_t t7 = 17;

	t7 = (x73<(x74%(x75<=x76)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x77 = INT16_MAX;
	uint32_t x78 = 146080U;
	uint64_t x79 = UINT64_MAX;
	int8_t x80 = -1;
	volatile int32_t t8 = 28;

	t8 = (x77<(x78%(x79<=x80)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x86 = -207LL;
	static int8_t x87 = -17;
	uint16_t x88 = UINT16_MAX;
	static int32_t t9 = -127136;

	t9 = (x85<(x86%(x87<=x88)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x89 = INT32_MIN;
	int32_t x90 = 1635;
	int8_t x91 = -34;
	uint16_t x92 = 4894U;
	volatile int32_t t10 = 51235;

	t10 = (x89<(x90%(x91<=x92)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x103 = INT8_MIN;

	t11 = (x101<(x102%(x103<=x104)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x109 = 89U;
	int8_t x110 = INT8_MIN;
	uint32_t x111 = 87975959U;
	uint64_t x112 = UINT64_MAX;

	t12 = (x109<(x110%(x111<=x112)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x113 = -16339817;
	int64_t x114 = INT64_MIN;
	uint64_t x115 = 33062351LLU;
	int32_t x116 = -1;
	int32_t t13 = 6068223;

	t13 = (x113<(x114%(x115<=x116)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x117 = INT8_MIN;
	int16_t x119 = -1;
	volatile int32_t x120 = -1;
	int32_t t14 = 3008;

	t14 = (x117<(x118%(x119<=x120)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x133 = 1U;
	int8_t x134 = INT8_MIN;
	int64_t x135 = -25971025963LL;
	volatile int16_t x136 = INT16_MIN;
	volatile int32_t t15 = -383;

	t15 = (x133<(x134%(x135<=x136)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x141 = INT64_MAX;
	uint64_t x143 = 1LLU;
	static int32_t x144 = 231528;
	volatile int32_t t16 = -32546692;

	t16 = (x141<(x142%(x143<=x144)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x158 = 1LL;
	uint32_t x159 = 994U;
	uint16_t x160 = UINT16_MAX;
	int32_t t17 = 15;

	t17 = (x157<(x158%(x159<=x160)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x162 = INT64_MIN;
	volatile int16_t x163 = INT16_MIN;
	static uint32_t x164 = UINT32_MAX;
	int32_t t18 = 31055;

	t18 = (x161<(x162%(x163<=x164)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x165 = 178U;
	static uint8_t x166 = 0U;
	uint8_t x167 = UINT8_MAX;
	volatile uint16_t x168 = UINT16_MAX;
	volatile int32_t t19 = 0;

	t19 = (x165<(x166%(x167<=x168)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x169 = -1;
	int64_t x171 = INT64_MIN;
	static int64_t x172 = -9684411666376994LL;

	t20 = (x169<(x170%(x171<=x172)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x181 = -1LL;
	static int32_t x182 = INT32_MAX;
	int16_t x183 = INT16_MIN;
	static volatile int16_t x184 = 0;
	volatile int32_t t21 = 15;

	t21 = (x181<(x182%(x183<=x184)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x186 = 521517383U;
	static int8_t x187 = 42;
	uint16_t x188 = 55U;
	int32_t t22 = -300070;

	t22 = (x185<(x186%(x187<=x188)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x189 = INT8_MAX;
	uint32_t x191 = 0U;
	int16_t x192 = INT16_MAX;

	t23 = (x189<(x190%(x191<=x192)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x197 = INT64_MIN;
	int8_t x198 = INT8_MIN;
	static uint8_t x199 = UINT8_MAX;
	uint64_t x200 = 27229933222LLU;
	int32_t t24 = -272217388;

	t24 = (x197<(x198%(x199<=x200)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x202 = 3954LLU;
	int32_t x203 = -389658;
	uint64_t x204 = UINT64_MAX;
	volatile int32_t t25 = -422;

	t25 = (x201<(x202%(x203<=x204)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x205 = 478084LL;
	int16_t x206 = -1653;
	static int64_t x207 = -1LL;
	int64_t x208 = -1LL;

	t26 = (x205<(x206%(x207<=x208)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x213 = INT8_MAX;
	int16_t x214 = 2835;
	int16_t x216 = -12;

	t27 = (x213<(x214%(x215<=x216)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x217 = UINT32_MAX;
	volatile uint16_t x218 = 3132U;
	static uint32_t x219 = 11364628U;
	volatile int32_t t28 = 784107463;

	t28 = (x217<(x218%(x219<=x220)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x222 = -1;
	int16_t x223 = INT16_MIN;
	uint64_t x224 = UINT64_MAX;

	t29 = (x221<(x222%(x223<=x224)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x233 = INT16_MAX;
	int32_t x235 = -133029;
	int16_t x236 = 0;
	static int32_t t30 = -79;

	t30 = (x233<(x234%(x235<=x236)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x250 = -1;
	int16_t x251 = -482;
	static int32_t t31 = -489066886;

	t31 = (x249<(x250%(x251<=x252)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x257 = 7U;
	uint16_t x258 = UINT16_MAX;
	uint32_t x259 = 16758074U;
	int64_t x260 = 227331438LL;

	t32 = (x257<(x258%(x259<=x260)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x262 = INT32_MAX;
	static uint32_t x264 = UINT32_MAX;
	static volatile int32_t t33 = 106;

	t33 = (x261<(x262%(x263<=x264)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x278 = INT8_MAX;
	int64_t x280 = -1LL;
	int32_t t34 = 0;

	t34 = (x277<(x278%(x279<=x280)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x281 = -257;
	uint8_t x282 = 10U;
	static uint16_t x283 = 1U;
	uint16_t x284 = 784U;

	t35 = (x281<(x282%(x283<=x284)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = INT32_MAX;
	int64_t x295 = INT64_MIN;
	uint16_t x296 = UINT16_MAX;
	static volatile int32_t t36 = -115833298;

	t36 = (x293<(x294%(x295<=x296)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x317 = -1;
	int32_t x318 = INT32_MIN;
	int64_t x319 = -521641125882LL;
	uint16_t x320 = 0U;
	int32_t t37 = 94400;

	t37 = (x317<(x318%(x319<=x320)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x325 = INT64_MAX;
	uint64_t x326 = 7331433LLU;
	static int8_t x327 = INT8_MIN;
	int8_t x328 = 49;
	int32_t t38 = -474868;

	t38 = (x325<(x326%(x327<=x328)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x329 = 98221693;
	int64_t x330 = INT64_MAX;
	int8_t x331 = INT8_MAX;
	uint8_t x332 = UINT8_MAX;
	int32_t t39 = -92;

	t39 = (x329<(x330%(x331<=x332)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x341 = INT8_MIN;
	int8_t x343 = INT8_MAX;
	int32_t t40 = -1817;

	t40 = (x341<(x342%(x343<=x344)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x349 = 150206197;
	int64_t x350 = INT64_MIN;
	static int64_t x352 = 507966134739LL;
	volatile int32_t t41 = 1;

	t41 = (x349<(x350%(x351<=x352)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x354 = -684LL;
	int32_t x355 = 3082;
	static uint16_t x356 = UINT16_MAX;
	int32_t t42 = -1;

	t42 = (x353<(x354%(x355<=x356)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x365 = INT32_MAX;
	int8_t x366 = 11;
	uint16_t x368 = 288U;

	t43 = (x365<(x366%(x367<=x368)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x369 = 3912U;
	int8_t x371 = -1;
	int8_t x372 = 0;
	static volatile int32_t t44 = -3;

	t44 = (x369<(x370%(x371<=x372)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x390 = UINT64_MAX;
	uint32_t x391 = 18U;
	static volatile uint8_t x392 = UINT8_MAX;
	volatile int32_t t45 = -272917;

	t45 = (x389<(x390%(x391<=x392)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x398 = INT32_MAX;
	uint16_t x399 = 284U;

	t46 = (x397<(x398%(x399<=x400)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x401 = UINT16_MAX;
	static uint8_t x402 = UINT8_MAX;
	static int8_t x403 = INT8_MIN;
	int8_t x404 = INT8_MIN;
	volatile int32_t t47 = -31;

	t47 = (x401<(x402%(x403<=x404)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x409 = INT32_MIN;
	int64_t x411 = -1LL;
	uint8_t x412 = 23U;

	t48 = (x409<(x410%(x411<=x412)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x413 = -1;
	static int64_t x414 = -1LL;
	volatile int64_t x415 = INT64_MIN;
	static int8_t x416 = INT8_MIN;
	int32_t t49 = 0;

	t49 = (x413<(x414%(x415<=x416)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x417 = UINT64_MAX;
	int16_t x419 = -49;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t50 = 419176;

	t50 = (x417<(x418%(x419<=x420)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x421 = INT16_MAX;
	static int16_t x422 = -1;
	int8_t x423 = INT8_MIN;
	int32_t t51 = 3509764;

	t51 = (x421<(x422%(x423<=x424)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x425 = 17922515U;
	static uint8_t x426 = 0U;
	volatile int8_t x427 = 0;
	uint16_t x428 = 36U;

	t52 = (x425<(x426%(x427<=x428)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x429 = INT8_MAX;
	uint64_t x430 = 124585LLU;
	int32_t x431 = INT32_MIN;
	int32_t t53 = 2;

	t53 = (x429<(x430%(x431<=x432)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x437 = INT16_MIN;
	int64_t x438 = -31418LL;
	int32_t x439 = INT32_MIN;
	volatile int32_t t54 = -26;

	t54 = (x437<(x438%(x439<=x440)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x441 = INT32_MIN;
	static volatile int16_t x442 = -1;
	int32_t x444 = INT32_MIN;
	volatile int32_t t55 = 14841;

	t55 = (x441<(x442%(x443<=x444)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x445 = 48U;
	volatile int8_t x446 = INT8_MIN;
	volatile uint32_t x448 = UINT32_MAX;

	t56 = (x445<(x446%(x447<=x448)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x449 = 14;
	int8_t x450 = -6;
	volatile int16_t x451 = -1;
	volatile int32_t t57 = 358;

	t57 = (x449<(x450%(x451<=x452)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x453 = INT16_MIN;
	volatile int64_t x456 = 488659700734LL;

	t58 = (x453<(x454%(x455<=x456)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x457 = INT64_MAX;
	volatile int8_t x458 = 0;
	int8_t x460 = 1;
	int32_t t59 = -2529;

	t59 = (x457<(x458%(x459<=x460)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x461 = INT32_MAX;
	int64_t x462 = INT64_MIN;
	int64_t x464 = INT64_MAX;
	static volatile int32_t t60 = -15779656;

	t60 = (x461<(x462%(x463<=x464)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x465 = -1LL;
	int64_t x466 = 2029168661LL;
	int32_t x467 = 580379;
	uint32_t x468 = UINT32_MAX;
	int32_t t61 = -8202683;

	t61 = (x465<(x466%(x467<=x468)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x470 = INT16_MIN;
	int16_t x471 = 10481;
	uint64_t x472 = 67407013888LLU;
	int32_t t62 = -1;

	t62 = (x469<(x470%(x471<=x472)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x474 = INT8_MIN;
	int16_t x475 = -744;
	static uint8_t x476 = UINT8_MAX;
	static volatile int32_t t63 = 4147987;

	t63 = (x473<(x474%(x475<=x476)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x481 = 2579LLU;
	int64_t x482 = INT64_MAX;
	int16_t x483 = INT16_MIN;
	static volatile int16_t x484 = -2147;

	t64 = (x481<(x482%(x483<=x484)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x489 = -6679LL;
	int8_t x490 = 21;
	static int32_t x491 = -6452;
	static int8_t x492 = INT8_MIN;
	int32_t t65 = 0;

	t65 = (x489<(x490%(x491<=x492)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x494 = INT16_MIN;
	uint16_t x495 = 3708U;
	int64_t x496 = INT64_MAX;
	int32_t t66 = -13338664;

	t66 = (x493<(x494%(x495<=x496)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x505 = 7LLU;
	uint32_t x506 = 6U;
	int32_t x507 = -434114;
	volatile int64_t x508 = 10910413445211LL;

	t67 = (x505<(x506%(x507<=x508)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x517 = INT64_MAX;
	uint32_t x518 = UINT32_MAX;
	int16_t x519 = -278;
	volatile int16_t x520 = -1;
	static volatile int32_t t68 = 2;

	t68 = (x517<(x518%(x519<=x520)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x521 = 19619U;
	static int8_t x522 = INT8_MIN;
	int64_t x524 = INT64_MAX;

	t69 = (x521<(x522%(x523<=x524)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x525 = INT16_MAX;
	int32_t x526 = -1;
	int64_t x527 = -1LL;
	int8_t x528 = -1;
	static int32_t t70 = -97;

	t70 = (x525<(x526%(x527<=x528)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x582 = -13LL;
	volatile uint64_t x583 = UINT64_MAX;
	int32_t x584 = -1;
	volatile int32_t t71 = 1;

	t71 = (x581<(x582%(x583<=x584)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x590 = INT8_MAX;
	int32_t x591 = INT32_MIN;
	int8_t x592 = INT8_MAX;
	volatile int32_t t72 = -25400115;

	t72 = (x589<(x590%(x591<=x592)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x593 = INT32_MIN;
	uint32_t x594 = UINT32_MAX;
	uint8_t x595 = UINT8_MAX;
	int16_t x596 = 5730;
	int32_t t73 = 53010884;

	t73 = (x593<(x594%(x595<=x596)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x597 = 13036U;
	volatile int64_t x598 = INT64_MAX;
	static volatile int32_t t74 = -788;

	t74 = (x597<(x598%(x599<=x600)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x601 = -10;
	volatile int8_t x602 = INT8_MIN;
	uint32_t x603 = 1399U;
	int32_t x604 = 433374;

	t75 = (x601<(x602%(x603<=x604)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x614 = -828;
	uint8_t x616 = UINT8_MAX;
	int32_t t76 = 28745061;

	t76 = (x613<(x614%(x615<=x616)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x630 = 124U;
	int64_t x631 = INT64_MIN;
	int32_t t77 = 1643203;

	t77 = (x629<(x630%(x631<=x632)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x637 = INT16_MIN;
	int16_t x638 = -1;
	volatile int8_t x639 = INT8_MAX;
	uint64_t x640 = 108213056LLU;

	t78 = (x637<(x638%(x639<=x640)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x642 = INT32_MAX;
	int8_t x643 = -6;
	int32_t x644 = -1;
	int32_t t79 = 61313;

	t79 = (x641<(x642%(x643<=x644)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x653 = -1;
	uint8_t x654 = UINT8_MAX;
	int32_t x655 = -17374354;
	int32_t x656 = INT32_MAX;
	volatile int32_t t80 = -205946151;

	t80 = (x653<(x654%(x655<=x656)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x658 = 30252484795686743LLU;
	int32_t x659 = -200436478;
	volatile int8_t x660 = 1;
	volatile int32_t t81 = -7;

	t81 = (x657<(x658%(x659<=x660)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x661 = -1LL;
	uint64_t x664 = UINT64_MAX;

	t82 = (x661<(x662%(x663<=x664)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x665 = UINT64_MAX;
	static int16_t x667 = 26;
	static uint16_t x668 = 3338U;
	int32_t t83 = 31;

	t83 = (x665<(x666%(x667<=x668)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x685 = -1;
	int16_t x686 = INT16_MAX;
	volatile int64_t x687 = INT64_MIN;
	static volatile int32_t t84 = -1;

	t84 = (x685<(x686%(x687<=x688)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x689 = 53U;
	uint64_t x690 = 10199790236947451LLU;
	uint32_t x691 = 463519U;
	int8_t x692 = -1;
	int32_t t85 = 1310191;

	t85 = (x689<(x690%(x691<=x692)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x718 = -1;
	int16_t x719 = 0;
	int32_t x720 = 6537595;
	int32_t t86 = -112851;

	t86 = (x717<(x718%(x719<=x720)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x725 = 1643LL;
	int32_t x727 = INT32_MIN;
	int32_t t87 = 725;

	t87 = (x725<(x726%(x727<=x728)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x730 = INT8_MAX;
	static uint8_t x731 = 10U;
	int8_t x732 = INT8_MAX;
	static int32_t t88 = -657886259;

	t88 = (x729<(x730%(x731<=x732)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x745 = 460056001LLU;
	int16_t x746 = INT16_MIN;
	volatile uint64_t x748 = 60177LLU;
	int32_t t89 = -2791295;

	t89 = (x745<(x746%(x747<=x748)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x749 = 7;
	static uint64_t x750 = 2774151341LLU;
	static volatile int64_t x751 = -5431523140141364LL;
	int16_t x752 = -11;
	volatile int32_t t90 = -1401;

	t90 = (x749<(x750%(x751<=x752)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x753 = -1057;
	static volatile uint16_t x754 = 255U;
	int64_t x755 = -1LL;
	uint16_t x756 = 8133U;

	t91 = (x753<(x754%(x755<=x756)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x757 = INT64_MIN;
	static uint8_t x759 = 87U;
	int16_t x760 = INT16_MAX;
	static volatile int32_t t92 = -79566636;

	t92 = (x757<(x758%(x759<=x760)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x768 = 36351682683246282LL;
	volatile int32_t t93 = -206900359;

	t93 = (x765<(x766%(x767<=x768)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x773 = 0U;
	int8_t x774 = -1;
	volatile uint8_t x775 = 2U;
	static int32_t t94 = 57;

	t94 = (x773<(x774%(x775<=x776)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x785 = UINT16_MAX;
	int64_t x787 = -6789872LL;
	volatile int32_t t95 = -27;

	t95 = (x785<(x786%(x787<=x788)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x789 = INT8_MIN;
	int64_t x791 = -5069447453357370LL;
	static int16_t x792 = INT16_MIN;
	volatile int32_t t96 = 4497;

	t96 = (x789<(x790%(x791<=x792)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x797 = -1;
	int16_t x798 = -1;
	int16_t x799 = INT16_MAX;
	static volatile int32_t t97 = 2;

	t97 = (x797<(x798%(x799<=x800)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x801 = UINT32_MAX;
	volatile int32_t x802 = 173318691;
	int64_t x803 = INT64_MIN;
	int32_t x804 = 34;
	volatile int32_t t98 = 396434;

	t98 = (x801<(x802%(x803<=x804)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x805 = 7;
	int32_t x806 = INT32_MIN;
	uint8_t x807 = UINT8_MAX;
	static volatile uint16_t x808 = 1000U;
	static int32_t t99 = -690;

	t99 = (x805<(x806%(x807<=x808)));

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

