#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t0 = -4258957984199473LL;
uint32_t x12 = 47U;
volatile uint64_t t2 = 881751208487LLU;
volatile uint32_t x37 = UINT32_MAX;
static volatile uint32_t x40 = 2900U;
static int32_t x55 = -1;
int32_t t6 = -106747948;
int16_t x88 = INT16_MIN;
volatile uint64_t t8 = 1853459130902701762LLU;
int8_t x93 = INT8_MAX;
int32_t x102 = INT32_MIN;
int64_t x114 = INT64_MAX;
volatile int64_t t12 = 5267630517490031LL;
volatile uint16_t x122 = 20640U;
int16_t x123 = INT16_MAX;
int64_t x124 = INT64_MIN;
uint32_t t14 = 107U;
uint32_t x136 = UINT32_MAX;
volatile int32_t x142 = INT32_MIN;
uint32_t x147 = UINT32_MAX;
volatile int32_t t19 = 397568411;
volatile int64_t t21 = 72965710911065661LL;
uint8_t x173 = UINT8_MAX;
int32_t t22 = 6218;
volatile int8_t x197 = -1;
uint64_t x198 = 2099113363LLU;
int64_t x199 = INT64_MIN;
uint64_t x200 = UINT64_MAX;
static uint64_t t23 = 3095291LLU;
uint16_t x206 = 1U;
volatile int32_t t24 = -28145036;
int8_t x213 = INT8_MAX;
int64_t x228 = -16659624531281LL;
int64_t x254 = -1LL;
int32_t x258 = INT32_MAX;
int8_t x287 = -1;
int64_t x288 = INT64_MIN;
int64_t x304 = -1LL;
static volatile int8_t x310 = 49;
int64_t x320 = INT64_MIN;
volatile int8_t x322 = INT8_MIN;
int16_t x323 = -1;
int64_t x325 = -3154820469818496822LL;
int64_t x335 = -1LL;
static volatile uint16_t x357 = 14U;
int64_t x366 = INT64_MIN;
int32_t x368 = 6327;
static uint64_t t40 = 383LLU;
volatile int8_t x401 = INT8_MIN;
int64_t x402 = INT64_MIN;
volatile int64_t t47 = -13487419351LL;
int16_t x442 = INT16_MIN;
int64_t x444 = -6689698LL;
int64_t x453 = INT64_MIN;
static volatile int64_t t49 = -956LL;
int32_t x460 = 56467;
uint32_t t50 = 433409926U;
int16_t x461 = -1;
uint16_t x462 = 1957U;
uint32_t x473 = UINT32_MAX;
volatile uint64_t x479 = UINT64_MAX;
static uint8_t x486 = UINT8_MAX;
volatile int16_t x513 = -1;
volatile int32_t t58 = 1333;
int64_t x529 = INT64_MAX;
uint32_t x532 = 51682178U;
static volatile int64_t t60 = 60471881191LL;
uint64_t x537 = 12LLU;
volatile uint16_t x545 = 2U;
static int32_t x564 = INT32_MIN;
int32_t t66 = 198;
volatile int64_t x573 = -16133LL;
volatile int8_t x574 = -1;
static int32_t x594 = INT32_MIN;
int64_t x601 = -3827704LL;
int8_t x605 = INT8_MAX;
uint8_t x611 = 118U;
static uint8_t x613 = 1U;
uint64_t x614 = UINT64_MAX;
int32_t x615 = INT32_MIN;
volatile int64_t x619 = -1LL;
int64_t x632 = INT64_MIN;
int32_t t77 = 970050423;
static int32_t x641 = INT32_MIN;
static int32_t t80 = -1147222;
uint16_t x661 = 4078U;
int8_t x691 = 8;
uint16_t x709 = 1U;
volatile int32_t t83 = -49837;
int32_t x714 = INT32_MIN;
uint16_t x715 = 66U;
uint16_t x746 = UINT16_MAX;
static int32_t x762 = 1129428;
static int32_t t89 = -2;
static uint32_t t90 = 3715222U;
int16_t x777 = INT16_MIN;
static int64_t t91 = 226LL;
uint64_t x785 = 14463588066808677LLU;
uint16_t x786 = 3070U;
int16_t x797 = INT16_MIN;
static int16_t x800 = INT16_MIN;
uint32_t x802 = UINT32_MAX;
volatile int32_t x816 = -363349;
uint64_t x817 = 115060840LLU;
volatile int32_t x820 = INT32_MIN;
volatile int16_t x827 = INT16_MIN;
int32_t x833 = -182341;


void f0(void) {
	int8_t x1 = 15;
	static int64_t x2 = 1004793968654832LL;
	uint64_t x3 = 11411LLU;
	static int32_t x4 = 471;

	t0 = ((x1/x2)<<(x3/x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = UINT16_MAX;
	static volatile int64_t x10 = INT64_MIN;
	uint8_t x11 = UINT8_MAX;
	int64_t t1 = 63LL;

	t1 = ((x9/x10)<<(x11/x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	static int16_t x14 = INT16_MAX;
	static int16_t x15 = 0;
	uint64_t x16 = UINT64_MAX;

	t2 = ((x13/x14)<<(x15/x16));

	if (t2 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x38 = -1;
	uint8_t x39 = 1U;
	uint32_t t3 = 1U;

	t3 = ((x37/x38)<<(x39/x40));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x53 = 2U;
	volatile int64_t x54 = INT64_MAX;
	uint8_t x56 = UINT8_MAX;
	volatile int64_t t4 = 64050628389065412LL;

	t4 = ((x53/x54)<<(x55/x56));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x57 = UINT64_MAX;
	int16_t x58 = INT16_MAX;
	volatile int8_t x59 = 0;
	int16_t x60 = INT16_MAX;
	uint64_t t5 = 657675573422LLU;

	t5 = ((x57/x58)<<(x59/x60));

	if (t5 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x77 = INT8_MIN;
	int32_t x78 = 937;
	volatile int8_t x79 = 4;
	volatile uint16_t x80 = 450U;

	t6 = ((x77/x78)<<(x79/x80));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x81 = 2U;
	static uint8_t x82 = 57U;
	uint16_t x83 = 5U;
	int16_t x84 = -31;
	volatile int32_t t7 = 116239;

	t7 = ((x81/x82)<<(x83/x84));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x85 = 211867440833918806LLU;
	int64_t x86 = -1LL;
	int8_t x87 = INT8_MIN;

	t8 = ((x85/x86)<<(x87/x88));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x94 = UINT64_MAX;
	uint8_t x95 = 9U;
	static uint64_t x96 = 186062549814LLU;
	uint64_t t9 = 38895945996LLU;

	t9 = ((x93/x94)<<(x95/x96));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x101 = UINT64_MAX;
	int16_t x103 = 5;
	volatile uint16_t x104 = 9191U;
	volatile uint64_t t10 = 2253645LLU;

	t10 = ((x101/x102)<<(x103/x104));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x105 = -11;
	volatile int64_t x106 = INT64_MAX;
	int16_t x107 = -6;
	int32_t x108 = INT32_MIN;
	volatile int64_t t11 = -16987LL;

	t11 = ((x105/x106)<<(x107/x108));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x113 = UINT32_MAX;
	uint8_t x115 = 1U;
	uint16_t x116 = 1U;

	t12 = ((x113/x114)<<(x115/x116));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x121 = 7U;
	static volatile int32_t t13 = 34;

	t13 = ((x121/x122)<<(x123/x124));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x129 = UINT32_MAX;
	static volatile int8_t x130 = INT8_MAX;
	volatile uint32_t x131 = UINT32_MAX;
	int64_t x132 = INT64_MIN;

	t14 = ((x129/x130)<<(x131/x132));

	if (t14 != 33818640U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x133 = 0U;
	static uint64_t x134 = UINT64_MAX;
	static int16_t x135 = 0;
	static uint64_t t15 = 198354754725LLU;

	t15 = ((x133/x134)<<(x135/x136));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x141 = 3;
	static int32_t x143 = INT32_MIN;
	static int64_t x144 = INT64_MIN;
	volatile int32_t t16 = -1562128;

	t16 = ((x141/x142)<<(x143/x144));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x145 = 14;
	static int8_t x146 = INT8_MIN;
	int8_t x148 = INT8_MIN;
	int32_t t17 = 1;

	t17 = ((x145/x146)<<(x147/x148));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x149 = UINT32_MAX;
	int64_t x150 = -724744531591096779LL;
	static volatile uint8_t x151 = 2U;
	uint16_t x152 = 77U;
	volatile int64_t t18 = -3908045481004941LL;

	t18 = ((x149/x150)<<(x151/x152));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x157 = -10259447;
	int16_t x158 = -1;
	int16_t x159 = INT16_MIN;
	int32_t x160 = 92982;

	t19 = ((x157/x158)<<(x159/x160));

	if (t19 != 10259447) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x165 = 1075LL;
	uint32_t x166 = 4616U;
	uint8_t x167 = 121U;
	uint8_t x168 = UINT8_MAX;
	static int64_t t20 = -121978291141LL;

	t20 = ((x165/x166)<<(x167/x168));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x169 = 0U;
	int64_t x170 = INT64_MIN;
	static uint16_t x171 = UINT16_MAX;
	int32_t x172 = INT32_MIN;

	t21 = ((x169/x170)<<(x171/x172));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x174 = 3U;
	uint16_t x175 = 1U;
	int8_t x176 = -15;

	t22 = ((x173/x174)<<(x175/x176));

	if (t22 != 85) { NG(); } else { ; }
	
}

void f23(void) {


	t23 = ((x197/x198)<<(x199/x200));

	if (t23 != 8787874156LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x205 = INT16_MAX;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MIN;

	t24 = ((x205/x206)<<(x207/x208));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x214 = UINT16_MAX;
	static uint32_t x215 = 80816U;
	int8_t x216 = INT8_MIN;
	volatile int32_t t25 = 130485;

	t25 = ((x213/x214)<<(x215/x216));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x225 = 10U;
	int32_t x226 = INT32_MAX;
	volatile int64_t x227 = -1LL;
	static int32_t t26 = -10;

	t26 = ((x225/x226)<<(x227/x228));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x253 = -1;
	static uint32_t x255 = 5425U;
	volatile uint16_t x256 = 26609U;
	int64_t t27 = 406521090LL;

	t27 = ((x253/x254)<<(x255/x256));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x257 = -1;
	static uint32_t x259 = UINT32_MAX;
	volatile int16_t x260 = INT16_MIN;
	int32_t t28 = 4419169;

	t28 = ((x257/x258)<<(x259/x260));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x277 = -1;
	int32_t x278 = INT32_MAX;
	int32_t x279 = 2868;
	static int64_t x280 = 12217LL;
	volatile int32_t t29 = -4;

	t29 = ((x277/x278)<<(x279/x280));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x281 = 63LL;
	uint16_t x282 = 30768U;
	uint16_t x283 = UINT16_MAX;
	uint16_t x284 = UINT16_MAX;
	int64_t t30 = -12332LL;

	t30 = ((x281/x282)<<(x283/x284));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x285 = -1;
	int8_t x286 = -6;
	int32_t t31 = 1090;

	t31 = ((x285/x286)<<(x287/x288));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x301 = INT8_MAX;
	uint32_t x302 = UINT32_MAX;
	int8_t x303 = -1;
	uint32_t t32 = 1056006739U;

	t32 = ((x301/x302)<<(x303/x304));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x309 = INT16_MAX;
	static int8_t x311 = INT8_MIN;
	static volatile int16_t x312 = 7151;
	int32_t t33 = 482835830;

	t33 = ((x309/x310)<<(x311/x312));

	if (t33 != 668) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x317 = -62LL;
	volatile int8_t x318 = -1;
	static int64_t x319 = -1LL;
	int64_t t34 = 104725028661LL;

	t34 = ((x317/x318)<<(x319/x320));

	if (t34 != 62LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x321 = INT8_MIN;
	int32_t x324 = INT32_MIN;
	int32_t t35 = 29805985;

	t35 = ((x321/x322)<<(x323/x324));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x326 = 303542963542LLU;
	static int16_t x327 = 1;
	int32_t x328 = INT32_MIN;
	uint64_t t36 = 516686LLU;

	t36 = ((x325/x326)<<(x327/x328));

	if (t36 != 50378119LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x333 = 1949098371LL;
	int8_t x334 = INT8_MAX;
	volatile int32_t x336 = -1;
	volatile int64_t t37 = -498240LL;

	t37 = ((x333/x334)<<(x335/x336));

	if (t37 != 30694462LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x358 = INT16_MIN;
	volatile int8_t x359 = 1;
	int8_t x360 = INT8_MAX;
	int32_t t38 = -31087;

	t38 = ((x357/x358)<<(x359/x360));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x365 = INT16_MIN;
	int64_t x367 = -1LL;
	int64_t t39 = -14164693264567LL;

	t39 = ((x365/x366)<<(x367/x368));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x369 = UINT64_MAX;
	int16_t x370 = INT16_MIN;
	int32_t x371 = -1;
	uint32_t x372 = UINT32_MAX;

	t40 = ((x369/x370)<<(x371/x372));

	if (t40 != 2LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x373 = 438U;
	int8_t x374 = -1;
	static int8_t x375 = 1;
	static int32_t x376 = -6288548;
	volatile uint32_t t41 = 0U;

	t41 = ((x373/x374)<<(x375/x376));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x385 = INT16_MAX;
	static uint32_t x386 = UINT32_MAX;
	volatile uint16_t x387 = UINT16_MAX;
	volatile int64_t x388 = INT64_MAX;
	volatile uint32_t t42 = 31U;

	t42 = ((x385/x386)<<(x387/x388));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x403 = 39U;
	volatile int32_t x404 = INT32_MIN;
	volatile int64_t t43 = -5LL;

	t43 = ((x401/x402)<<(x403/x404));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x409 = INT32_MIN;
	uint64_t x410 = 1409548320129452LLU;
	volatile uint64_t x411 = 306LLU;
	int16_t x412 = INT16_MIN;
	uint64_t t44 = 1700000LLU;

	t44 = ((x409/x410)<<(x411/x412));

	if (t44 != 13086LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x413 = UINT32_MAX;
	static int32_t x414 = 19335;
	uint16_t x415 = 122U;
	int16_t x416 = INT16_MIN;
	volatile uint32_t t45 = 617829215U;

	t45 = ((x413/x414)<<(x415/x416));

	if (t45 != 222134U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x429 = UINT64_MAX;
	int64_t x430 = 125199113666610LL;
	uint16_t x431 = 232U;
	int64_t x432 = INT64_MIN;
	uint64_t t46 = 988076127365375LLU;

	t46 = ((x429/x430)<<(x431/x432));

	if (t46 != 147339LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x437 = INT8_MIN;
	static int64_t x438 = -30945853832740524LL;
	int8_t x439 = INT8_MAX;
	int64_t x440 = INT64_MIN;

	t47 = ((x437/x438)<<(x439/x440));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x441 = -1;
	static int8_t x443 = INT8_MAX;
	int32_t t48 = 425;

	t48 = ((x441/x442)<<(x443/x444));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x454 = -216887654543139434LL;
	static volatile int16_t x455 = 1;
	uint32_t x456 = 10U;

	t49 = ((x453/x454)<<(x455/x456));

	if (t49 != 42LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x457 = 186736U;
	static volatile int32_t x458 = INT32_MIN;
	static int32_t x459 = -6;

	t50 = ((x457/x458)<<(x459/x460));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x463 = UINT8_MAX;
	uint8_t x464 = 65U;
	volatile int32_t t51 = 116941;

	t51 = ((x461/x462)<<(x463/x464));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x465 = 1;
	volatile int8_t x466 = 2;
	int8_t x467 = INT8_MAX;
	int16_t x468 = INT16_MIN;
	volatile int32_t t52 = -521578;

	t52 = ((x465/x466)<<(x467/x468));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x474 = 21U;
	int8_t x475 = INT8_MIN;
	uint64_t x476 = 3692465445602119251LLU;
	uint32_t t53 = 25073451U;

	t53 = ((x473/x474)<<(x475/x476));

	if (t53 != 3272356032U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x477 = 19U;
	int32_t x478 = INT32_MIN;
	int64_t x480 = -1LL;
	static int32_t t54 = -68106;

	t54 = ((x477/x478)<<(x479/x480));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x485 = 3U;
	static int8_t x487 = INT8_MIN;
	volatile int8_t x488 = INT8_MIN;
	static int32_t t55 = 60;

	t55 = ((x485/x486)<<(x487/x488));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x501 = UINT8_MAX;
	int32_t x502 = INT32_MIN;
	int8_t x503 = INT8_MAX;
	uint32_t x504 = UINT32_MAX;
	volatile int32_t t56 = -67;

	t56 = ((x501/x502)<<(x503/x504));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x505 = 2720737LL;
	uint32_t x506 = 2U;
	int16_t x507 = 153;
	uint32_t x508 = 2545U;
	int64_t t57 = 506588552936427LL;

	t57 = ((x505/x506)<<(x507/x508));

	if (t57 != 1360368LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x514 = INT16_MIN;
	volatile uint16_t x515 = 2621U;
	static int64_t x516 = INT64_MIN;

	t58 = ((x513/x514)<<(x515/x516));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x521 = 20968U;
	static uint64_t x522 = UINT64_MAX;
	uint32_t x523 = 71039303U;
	uint64_t x524 = 76172060978909861LLU;
	uint64_t t59 = 231447728LLU;

	t59 = ((x521/x522)<<(x523/x524));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x530 = INT64_MAX;
	volatile uint64_t x531 = 11876687LLU;

	t60 = ((x529/x530)<<(x531/x532));

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x538 = -3517LL;
	int16_t x539 = 126;
	volatile int64_t x540 = INT64_MIN;
	volatile uint64_t t61 = 946734758486LLU;

	t61 = ((x537/x538)<<(x539/x540));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x546 = INT64_MAX;
	volatile uint8_t x547 = 1U;
	int32_t x548 = INT32_MIN;
	volatile int64_t t62 = 2408309204LL;

	t62 = ((x545/x546)<<(x547/x548));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x549 = UINT32_MAX;
	static volatile uint64_t x550 = 115573536817656LLU;
	int16_t x551 = INT16_MIN;
	int32_t x552 = 292376344;
	uint64_t t63 = 936443549LLU;

	t63 = ((x549/x550)<<(x551/x552));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x561 = UINT64_MAX;
	uint16_t x562 = 110U;
	uint8_t x563 = 18U;
	uint64_t t64 = 0LLU;

	t64 = ((x561/x562)<<(x563/x564));

	if (t64 != 167697673397359560LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x565 = -1LL;
	uint32_t x566 = 500U;
	int16_t x567 = INT16_MIN;
	uint32_t x568 = UINT32_MAX;
	static int64_t t65 = 1963678043176LL;

	t65 = ((x565/x566)<<(x567/x568));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x569 = UINT16_MAX;
	uint8_t x570 = 84U;
	int64_t x571 = 3LL;
	volatile int16_t x572 = -30;

	t66 = ((x569/x570)<<(x571/x572));

	if (t66 != 780) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x575 = -1;
	int8_t x576 = -38;
	volatile int64_t t67 = -928058856616478LL;

	t67 = ((x573/x574)<<(x575/x576));

	if (t67 != 16133LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x577 = INT16_MIN;
	volatile int64_t x578 = -4051569760597830980LL;
	int16_t x579 = -1;
	int32_t x580 = INT32_MIN;
	volatile int64_t t68 = 429502192637LL;

	t68 = ((x577/x578)<<(x579/x580));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x581 = INT8_MIN;
	volatile int16_t x582 = INT16_MAX;
	int16_t x583 = -120;
	uint64_t x584 = UINT64_MAX;
	volatile int32_t t69 = 17319;

	t69 = ((x581/x582)<<(x583/x584));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x589 = 4U;
	int64_t x590 = INT64_MIN;
	static int8_t x591 = INT8_MIN;
	int16_t x592 = INT16_MAX;
	static volatile int64_t t70 = 525245604LL;

	t70 = ((x589/x590)<<(x591/x592));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x593 = 5285;
	volatile int16_t x595 = 6032;
	int64_t x596 = INT64_MIN;
	volatile int32_t t71 = 11;

	t71 = ((x593/x594)<<(x595/x596));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x602 = INT8_MIN;
	volatile uint8_t x603 = 0U;
	static uint16_t x604 = UINT16_MAX;
	static volatile int64_t t72 = 15833881003955148LL;

	t72 = ((x601/x602)<<(x603/x604));

	if (t72 != 29903LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x606 = 100U;
	int64_t x607 = 72103LL;
	static int32_t x608 = 50367736;
	volatile int32_t t73 = 0;

	t73 = ((x605/x606)<<(x607/x608));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x609 = -1;
	int64_t x610 = INT64_MIN;
	int16_t x612 = INT16_MAX;
	static volatile int64_t t74 = 674243298725LL;

	t74 = ((x609/x610)<<(x611/x612));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x616 = UINT32_MAX;
	uint64_t t75 = 5827012790LLU;

	t75 = ((x613/x614)<<(x615/x616));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x617 = UINT16_MAX;
	static volatile int8_t x618 = 10;
	volatile uint8_t x620 = 16U;
	int32_t t76 = 1;

	t76 = ((x617/x618)<<(x619/x620));

	if (t76 != 6553) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x629 = -1;
	uint16_t x630 = 35U;
	volatile int16_t x631 = INT16_MIN;

	t77 = ((x629/x630)<<(x631/x632));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x642 = -1LL;
	static int16_t x643 = INT16_MIN;
	volatile int64_t x644 = 2938734660148LL;
	volatile int64_t t78 = -4863532593LL;

	t78 = ((x641/x642)<<(x643/x644));

	if (t78 != 2147483648LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x645 = -1;
	volatile int16_t x646 = INT16_MIN;
	static volatile int8_t x647 = -1;
	static int16_t x648 = INT16_MAX;
	volatile int32_t t79 = 842692449;

	t79 = ((x645/x646)<<(x647/x648));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x649 = 2U;
	int16_t x650 = INT16_MAX;
	uint64_t x651 = 261960131282284LLU;
	static int64_t x652 = -14430426237752LL;

	t80 = ((x649/x650)<<(x651/x652));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x662 = 22U;
	int8_t x663 = INT8_MIN;
	int8_t x664 = INT8_MIN;
	volatile int32_t t81 = -647914;

	t81 = ((x661/x662)<<(x663/x664));

	if (t81 != 370) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x689 = 237587;
	static int32_t x690 = INT32_MAX;
	volatile uint32_t x692 = 483727U;
	int32_t t82 = 0;

	t82 = ((x689/x690)<<(x691/x692));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x710 = 18;
	uint16_t x711 = 0U;
	int16_t x712 = INT16_MIN;

	t83 = ((x709/x710)<<(x711/x712));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x713 = -863;
	static int64_t x716 = INT64_MIN;
	static int32_t t84 = 117;

	t84 = ((x713/x714)<<(x715/x716));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x717 = 1411U;
	uint16_t x718 = 21055U;
	uint16_t x719 = UINT16_MAX;
	int64_t x720 = INT64_MAX;
	static volatile int32_t t85 = 0;

	t85 = ((x717/x718)<<(x719/x720));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x725 = INT32_MIN;
	int16_t x726 = INT16_MIN;
	int8_t x727 = -1;
	static int16_t x728 = -1;
	int32_t t86 = 12;

	t86 = ((x725/x726)<<(x727/x728));

	if (t86 != 131072) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x729 = 2U;
	static volatile uint64_t x730 = 1829747146194142LLU;
	uint8_t x731 = 32U;
	volatile int64_t x732 = INT64_MAX;
	volatile uint64_t t87 = 4228508172LLU;

	t87 = ((x729/x730)<<(x731/x732));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x745 = -1846LL;
	uint8_t x747 = 11U;
	uint64_t x748 = 277051572923LLU;
	int64_t t88 = 21597LL;

	t88 = ((x745/x746)<<(x747/x748));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x761 = 1U;
	uint64_t x763 = 23301LLU;
	int32_t x764 = INT32_MIN;

	t89 = ((x761/x762)<<(x763/x764));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x765 = 1038500211U;
	uint16_t x766 = 86U;
	static volatile int32_t x767 = -1;
	int16_t x768 = INT16_MIN;

	t90 = ((x765/x766)<<(x767/x768));

	if (t90 != 12075583U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x778 = INT64_MIN;
	static uint64_t x779 = UINT64_MAX;
	volatile int32_t x780 = -1873471;

	t91 = ((x777/x778)<<(x779/x780));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x787 = 1;
	int32_t x788 = -14;
	volatile uint64_t t92 = 64909111409356604LLU;

	t92 = ((x785/x786)<<(x787/x788));

	if (t92 != 4711266471273LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x798 = -1;
	uint8_t x799 = 2U;
	int32_t t93 = -82;

	t93 = ((x797/x798)<<(x799/x800));

	if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x801 = UINT8_MAX;
	int64_t x803 = -1LL;
	int8_t x804 = INT8_MAX;
	volatile uint32_t t94 = 44922084U;

	t94 = ((x801/x802)<<(x803/x804));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x813 = 2269573;
	volatile uint8_t x814 = UINT8_MAX;
	static uint64_t x815 = UINT64_MAX;
	volatile int32_t t95 = -156;

	t95 = ((x813/x814)<<(x815/x816));

	if (t95 != 17800) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x818 = INT32_MAX;
	int32_t x819 = INT32_MIN;
	volatile uint64_t t96 = 69LLU;

	t96 = ((x817/x818)<<(x819/x820));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x825 = -1;
	int8_t x826 = INT8_MAX;
	int64_t x828 = INT64_MAX;
	int32_t t97 = 908862;

	t97 = ((x825/x826)<<(x827/x828));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x829 = 0;
	uint32_t x830 = 670190U;
	int8_t x831 = -1;
	int16_t x832 = -1;
	static uint32_t t98 = 58769U;

	t98 = ((x829/x830)<<(x831/x832));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x834 = INT64_MIN;
	int16_t x835 = -1;
	volatile int8_t x836 = INT8_MIN;
	int64_t t99 = -14632287792LL;

	t99 = ((x833/x834)<<(x835/x836));

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

