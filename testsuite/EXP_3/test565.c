#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = -3366;
static int8_t x14 = 18;
int64_t x17 = INT64_MIN;
int32_t x35 = 1;
int16_t x37 = INT16_MIN;
int32_t t5 = -63048471;
uint32_t t6 = 7100U;
int32_t x73 = INT32_MIN;
static int8_t x76 = INT8_MIN;
uint8_t x85 = UINT8_MAX;
volatile uint8_t x93 = 6U;
volatile uint16_t x118 = 7U;
volatile int16_t x122 = -1;
int8_t x137 = -1;
static int64_t x139 = -1LL;
int32_t x140 = 1610112;
volatile uint64_t t14 = 6LLU;
uint16_t x146 = UINT16_MAX;
int32_t x147 = -1;
static uint32_t x158 = 16506559U;
uint32_t x159 = 313U;
int8_t x164 = INT8_MIN;
volatile int32_t t22 = 6;
int64_t t23 = -8167306691821LL;
static int16_t x212 = INT16_MIN;
int32_t x238 = INT32_MIN;
static int16_t x241 = INT16_MIN;
volatile int16_t x252 = -1;
int16_t x255 = 330;
int8_t x286 = 8;
volatile uint8_t x287 = 9U;
static int8_t x288 = 1;
uint16_t x301 = UINT16_MAX;
static int32_t t34 = -5;
uint64_t x316 = UINT64_MAX;
uint32_t t35 = 820U;
uint32_t x323 = UINT32_MAX;
volatile int8_t x324 = -1;
int16_t x349 = 355;
uint8_t x361 = 125U;
int16_t x367 = INT16_MIN;
static volatile uint64_t x389 = 268239323461LLU;
uint64_t t40 = 574023LLU;
int8_t x398 = -1;
int16_t x412 = INT16_MIN;
volatile uint32_t t42 = 1488U;
static volatile int8_t x413 = INT8_MIN;
int64_t x414 = -1LL;
int16_t x428 = 12;
volatile int16_t x429 = INT16_MAX;
static volatile uint32_t t45 = 138655627U;
uint64_t t46 = 96437LLU;
volatile int8_t x457 = INT8_MAX;
static int32_t x460 = INT32_MIN;
volatile uint32_t t50 = 71505627U;
uint64_t x488 = UINT64_MAX;
volatile int64_t t51 = -157558744185558LL;
uint32_t x517 = 45463U;
int64_t x519 = -1LL;
static uint64_t x538 = 15462950682985012LLU;
uint16_t x548 = UINT16_MAX;
volatile int32_t t57 = -4641875;
uint16_t x561 = 1477U;
int8_t x562 = -38;
static int8_t x563 = INT8_MIN;
volatile int32_t t59 = 833268;
int8_t x566 = INT8_MAX;
int32_t t63 = -5;
uint32_t t65 = 156129660U;
int32_t x618 = -1;
static volatile int8_t x639 = INT8_MIN;
static uint8_t x644 = UINT8_MAX;
static volatile int32_t t68 = 7037;
static volatile uint32_t x648 = UINT32_MAX;
int32_t x661 = 2;
static int32_t t71 = 49;
static volatile int16_t x669 = 1326;
static int32_t t73 = 13;
volatile int8_t x691 = -4;
volatile int32_t t74 = -1;
int32_t x723 = 0;
uint32_t t75 = 507603786U;
static int32_t x730 = -1;
volatile uint8_t x745 = 4U;
int64_t x746 = -1LL;
static int64_t t77 = 30696742572LL;
uint8_t x759 = UINT8_MAX;
uint16_t x767 = UINT16_MAX;
int32_t t80 = 2632;
volatile int64_t x782 = -1LL;
int32_t t82 = 22501538;
volatile uint16_t x794 = 1U;
volatile int32_t t83 = -186251;
static int32_t x797 = 32815162;
int32_t t84 = 3950765;
int32_t x808 = 122;
volatile uint32_t x817 = 20029738U;
int32_t x818 = -1;
uint32_t x819 = 52349U;
int16_t x820 = -3;
volatile int32_t t87 = -244;
int64_t x825 = INT64_MAX;
uint16_t x826 = 152U;
static int16_t x827 = -1;
static int64_t t88 = -3550195LL;
uint8_t x862 = 8U;
static uint64_t x877 = 33412910509LLU;
uint8_t x878 = UINT8_MAX;
int16_t x880 = -124;
static int32_t t93 = 96964907;
volatile int64_t x925 = 9LL;
int64_t t97 = -3010288012LL;
volatile int64_t t98 = 110614019LL;
static volatile int32_t t99 = 2244074;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static volatile int32_t x2 = 10003195;
	uint16_t x3 = 538U;
	int8_t x4 = INT8_MAX;

	t0 = ((x1%x2)<<(x3/x4));

	if (t0 != 2032) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	uint32_t x10 = 43903181U;
	static uint16_t x11 = 2U;
	volatile int32_t x12 = INT32_MIN;
	volatile uint32_t t1 = 55844682U;

	t1 = ((x9%x10)<<(x11/x12));

	if (t1 != 36358611U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = INT64_MAX;
	uint32_t x15 = UINT32_MAX;
	static int8_t x16 = -6;
	volatile int64_t t2 = -562801711426229LL;

	t2 = ((x13%x14)<<(x15/x16));

	if (t2 != 14LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MIN;
	static int8_t x19 = -1;
	static int64_t x20 = -32327345LL;
	volatile int64_t t3 = 173072LL;

	t3 = ((x17%x18)<<(x19/x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x33 = 4U;
	static int32_t x34 = -5079;
	uint16_t x36 = 2U;
	static uint32_t t4 = 0U;

	t4 = ((x33%x34)<<(x35/x36));

	if (t4 != 4U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x38 = 1;
	volatile int16_t x39 = -1;
	uint8_t x40 = 2U;

	t5 = ((x37%x38)<<(x39/x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x65 = 3U;
	int32_t x66 = INT32_MAX;
	int64_t x67 = 122906LL;
	int64_t x68 = INT64_MIN;

	t6 = ((x65%x66)<<(x67/x68));

	if (t6 != 3U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x74 = 338550758662LLU;
	int8_t x75 = INT8_MAX;
	volatile uint64_t t7 = 26384360127646LLU;

	t7 = ((x73%x74)<<(x75/x76));

	if (t7 != 235057382408LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x77 = INT16_MAX;
	int32_t x78 = -1;
	volatile int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MIN;
	volatile int32_t t8 = 285787439;

	t8 = ((x77%x78)<<(x79/x80));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x86 = UINT8_MAX;
	int8_t x87 = INT8_MIN;
	int16_t x88 = INT16_MAX;
	int32_t t9 = -723412;

	t9 = ((x85%x86)<<(x87/x88));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x94 = UINT64_MAX;
	static int8_t x95 = -1;
	int8_t x96 = INT8_MIN;
	volatile uint64_t t10 = 19358097009776LLU;

	t10 = ((x93%x94)<<(x95/x96));

	if (t10 != 6LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x117 = UINT32_MAX;
	int32_t x119 = -1;
	int32_t x120 = -41423978;
	volatile uint32_t t11 = 10U;

	t11 = ((x117%x118)<<(x119/x120));

	if (t11 != 3U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x121 = INT8_MAX;
	static int16_t x123 = -2;
	int32_t x124 = INT32_MAX;
	volatile int32_t t12 = 71306;

	t12 = ((x121%x122)<<(x123/x124));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x129 = 1;
	uint64_t x130 = 131930950165215LLU;
	int8_t x131 = INT8_MIN;
	uint32_t x132 = UINT32_MAX;
	volatile uint64_t t13 = 5311592622388102950LLU;

	t13 = ((x129%x130)<<(x131/x132));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x138 = UINT64_MAX;

	t14 = ((x137%x138)<<(x139/x140));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x145 = 27U;
	volatile uint8_t x148 = 47U;
	volatile int32_t t15 = -40818;

	t15 = ((x145%x146)<<(x147/x148));

	if (t15 != 27) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x157 = -13152;
	volatile int16_t x160 = -1;
	static volatile uint32_t t16 = 204U;

	t16 = ((x157%x158)<<(x159/x160));

	if (t16 != 3248804U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x161 = UINT8_MAX;
	static int16_t x162 = INT16_MAX;
	volatile uint32_t x163 = 5U;
	volatile int32_t t17 = -526131917;

	t17 = ((x161%x162)<<(x163/x164));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x169 = INT8_MIN;
	int8_t x170 = -1;
	uint32_t x171 = UINT32_MAX;
	int8_t x172 = -1;
	volatile int32_t t18 = -28339104;

	t18 = ((x169%x170)<<(x171/x172));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x177 = INT16_MAX;
	int8_t x178 = -1;
	static int16_t x179 = INT16_MAX;
	int64_t x180 = 315741785132558LL;
	int32_t t19 = -2;

	t19 = ((x177%x178)<<(x179/x180));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x181 = UINT16_MAX;
	volatile int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	static int32_t x184 = 12901861;
	static volatile int32_t t20 = -575369002;

	t20 = ((x181%x182)<<(x183/x184));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x185 = INT64_MAX;
	uint8_t x186 = 1U;
	static volatile uint64_t x187 = 5509104600296608LLU;
	static int8_t x188 = -39;
	volatile int64_t t21 = 10908912652577024LL;

	t21 = ((x185%x186)<<(x187/x188));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x189 = -1;
	int8_t x190 = -1;
	volatile uint16_t x191 = UINT16_MAX;
	uint32_t x192 = 601875U;

	t22 = ((x189%x190)<<(x191/x192));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x193 = INT8_MAX;
	int64_t x194 = 13917273222LL;
	int64_t x195 = 15380500LL;
	static volatile int64_t x196 = INT64_MIN;

	t23 = ((x193%x194)<<(x195/x196));

	if (t23 != 127LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x209 = 6510LLU;
	static int32_t x210 = INT32_MAX;
	int8_t x211 = 17;
	static volatile uint64_t t24 = 18600382900574LLU;

	t24 = ((x209%x210)<<(x211/x212));

	if (t24 != 6510LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x217 = INT8_MIN;
	volatile int32_t x218 = -1;
	uint8_t x219 = 0U;
	int32_t x220 = -862514519;
	volatile int32_t t25 = 2274773;

	t25 = ((x217%x218)<<(x219/x220));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x233 = INT8_MIN;
	uint32_t x234 = UINT32_MAX;
	static uint8_t x235 = 3U;
	static int64_t x236 = 84242383LL;
	volatile uint32_t t26 = 77450U;

	t26 = ((x233%x234)<<(x235/x236));

	if (t26 != 4294967168U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x237 = 78U;
	int32_t x239 = 31;
	int32_t x240 = 42276;
	static volatile int32_t t27 = 476;

	t27 = ((x237%x238)<<(x239/x240));

	if (t27 != 78) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x242 = -1;
	uint32_t x243 = UINT32_MAX;
	volatile int64_t x244 = 95337354433583LL;
	static int32_t t28 = -2112131;

	t28 = ((x241%x242)<<(x243/x244));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x249 = INT16_MAX;
	uint32_t x250 = UINT32_MAX;
	int64_t x251 = -1LL;
	uint32_t t29 = 186930656U;

	t29 = ((x249%x250)<<(x251/x252));

	if (t29 != 65534U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x253 = 215926036732694761LL;
	uint16_t x254 = 1U;
	volatile uint32_t x256 = 828730993U;
	volatile int64_t t30 = -63952597952321394LL;

	t30 = ((x253%x254)<<(x255/x256));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x269 = INT32_MAX;
	int32_t x270 = INT32_MIN;
	int8_t x271 = 8;
	volatile int16_t x272 = INT16_MIN;
	volatile int32_t t31 = INT32_MAX;

	t31 = ((x269%x270)<<(x271/x272));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x281 = 6U;
	static int16_t x282 = -1;
	int16_t x283 = 0;
	uint32_t x284 = 1010136571U;
	volatile uint32_t t32 = 387U;

	t32 = ((x281%x282)<<(x283/x284));

	if (t32 != 6U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x285 = INT8_MAX;
	static volatile int32_t t33 = -43;

	t33 = ((x285%x286)<<(x287/x288));

	if (t33 != 3584) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x302 = INT16_MIN;
	int32_t x303 = INT32_MIN;
	static uint32_t x304 = 423806827U;

	t34 = ((x301%x302)<<(x303/x304));

	if (t34 != 1048544) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x313 = 14656U;
	uint32_t x314 = 109U;
	volatile int64_t x315 = INT64_MAX;

	t35 = ((x313%x314)<<(x315/x316));

	if (t35 != 50U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x321 = UINT32_MAX;
	static int64_t x322 = INT64_MAX;
	int64_t t36 = 4858379260964LL;

	t36 = ((x321%x322)<<(x323/x324));

	if (t36 != 8589934590LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x350 = 2U;
	volatile uint32_t x351 = UINT32_MAX;
	static int8_t x352 = INT8_MIN;
	volatile int32_t t37 = -778;

	t37 = ((x349%x350)<<(x351/x352));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x362 = 957635U;
	int8_t x363 = 1;
	volatile int32_t x364 = INT32_MAX;
	volatile uint32_t t38 = 186572786U;

	t38 = ((x361%x362)<<(x363/x364));

	if (t38 != 125U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x365 = 280;
	volatile int64_t x366 = INT64_MAX;
	static int32_t x368 = 538038;
	int64_t t39 = -5635126899LL;

	t39 = ((x365%x366)<<(x367/x368));

	if (t39 != 280LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x390 = INT8_MAX;
	volatile int16_t x391 = INT16_MIN;
	int16_t x392 = INT16_MIN;

	t40 = ((x389%x390)<<(x391/x392));

	if (t40 != 44LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x397 = -54;
	static uint16_t x399 = 84U;
	int64_t x400 = -683045663LL;
	int32_t t41 = -1197340;

	t41 = ((x397%x398)<<(x399/x400));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x409 = INT8_MIN;
	static uint32_t x410 = UINT32_MAX;
	int8_t x411 = -2;

	t42 = ((x409%x410)<<(x411/x412));

	if (t42 != 4294967168U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x415 = 22U;
	volatile uint64_t x416 = 269603869076LLU;
	int64_t t43 = 1351099809LL;

	t43 = ((x413%x414)<<(x415/x416));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x425 = 7360759;
	int64_t x426 = 31107074LL;
	uint64_t x427 = 123LLU;
	int64_t t44 = 23LL;

	t44 = ((x425%x426)<<(x427/x428));

	if (t44 != 7537417216LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x430 = UINT32_MAX;
	uint16_t x431 = 148U;
	int16_t x432 = INT16_MAX;

	t45 = ((x429%x430)<<(x431/x432));

	if (t45 != 32767U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x433 = UINT64_MAX;
	int32_t x434 = INT32_MAX;
	int8_t x435 = 3;
	uint64_t x436 = 9LLU;

	t46 = ((x433%x434)<<(x435/x436));

	if (t46 != 3LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x437 = INT64_MIN;
	uint32_t x438 = 2U;
	int32_t x439 = INT32_MAX;
	volatile int64_t x440 = INT64_MIN;
	volatile int64_t t47 = 0LL;

	t47 = ((x437%x438)<<(x439/x440));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x441 = INT16_MAX;
	int32_t x442 = INT32_MIN;
	static int8_t x443 = INT8_MIN;
	int64_t x444 = INT64_MAX;
	volatile int32_t t48 = -3;

	t48 = ((x441%x442)<<(x443/x444));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x458 = 9U;
	int32_t x459 = INT32_MIN;
	int32_t t49 = -3;

	t49 = ((x457%x458)<<(x459/x460));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x481 = UINT32_MAX;
	static volatile uint16_t x482 = 972U;
	int64_t x483 = INT64_MIN;
	static uint64_t x484 = UINT64_MAX;

	t50 = ((x481%x482)<<(x483/x484));

	if (t50 != 615U) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x485 = INT64_MAX;
	int8_t x486 = -1;
	int8_t x487 = -1;

	t51 = ((x485%x486)<<(x487/x488));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x493 = INT8_MIN;
	int32_t x494 = -1;
	uint16_t x495 = 0U;
	int16_t x496 = INT16_MIN;
	volatile int32_t t52 = -29816;

	t52 = ((x493%x494)<<(x495/x496));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x501 = 0;
	int16_t x502 = 11724;
	int16_t x503 = -61;
	volatile uint32_t x504 = UINT32_MAX;
	volatile int32_t t53 = 44416092;

	t53 = ((x501%x502)<<(x503/x504));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x518 = UINT16_MAX;
	volatile int64_t x520 = -165LL;
	volatile uint32_t t54 = 191318U;

	t54 = ((x517%x518)<<(x519/x520));

	if (t54 != 45463U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x537 = 28U;
	int8_t x539 = INT8_MIN;
	uint64_t x540 = 3981559055882122987LLU;
	volatile uint64_t t55 = 63424290806LLU;

	t55 = ((x537%x538)<<(x539/x540));

	if (t55 != 448LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x545 = 1U;
	uint32_t x546 = 15U;
	uint16_t x547 = 1716U;
	volatile uint32_t t56 = 35U;

	t56 = ((x545%x546)<<(x547/x548));

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x549 = INT32_MAX;
	int8_t x550 = -31;
	int8_t x551 = INT8_MIN;
	volatile int16_t x552 = INT16_MIN;

	t57 = ((x549%x550)<<(x551/x552));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x557 = 783;
	uint32_t x558 = 14710129U;
	uint32_t x559 = UINT32_MAX;
	uint32_t x560 = UINT32_MAX;
	static volatile uint32_t t58 = 6892U;

	t58 = ((x557%x558)<<(x559/x560));

	if (t58 != 1566U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x564 = UINT8_MAX;

	t59 = ((x561%x562)<<(x563/x564));

	if (t59 != 33) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x565 = 7;
	static int16_t x567 = -105;
	uint32_t x568 = UINT32_MAX;
	volatile int32_t t60 = -423085;

	t60 = ((x565%x566)<<(x567/x568));

	if (t60 != 7) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x581 = INT16_MIN;
	uint64_t x582 = UINT64_MAX;
	int16_t x583 = -1;
	uint64_t x584 = UINT64_MAX;
	volatile uint64_t t61 = 1734LLU;

	t61 = ((x581%x582)<<(x583/x584));

	if (t61 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x585 = 2596029803479LLU;
	int16_t x586 = -3;
	static int8_t x587 = INT8_MIN;
	volatile uint16_t x588 = UINT16_MAX;
	static uint64_t t62 = 72LLU;

	t62 = ((x585%x586)<<(x587/x588));

	if (t62 != 2596029803479LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x597 = 5U;
	volatile int32_t x598 = INT32_MIN;
	uint8_t x599 = 0U;
	uint64_t x600 = UINT64_MAX;

	t63 = ((x597%x598)<<(x599/x600));

	if (t63 != 5) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x601 = 20393915LLU;
	uint16_t x602 = 325U;
	int16_t x603 = 1963;
	uint64_t x604 = 8591597968771LLU;
	volatile uint64_t t64 = 226824LLU;

	t64 = ((x601%x602)<<(x603/x604));

	if (t64 != 165LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x613 = 209U;
	uint8_t x614 = 11U;
	int32_t x615 = -1;
	int8_t x616 = INT8_MAX;

	t65 = ((x613%x614)<<(x615/x616));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x617 = INT8_MIN;
	static uint16_t x619 = 124U;
	uint8_t x620 = 6U;
	int32_t t66 = 16;

	t66 = ((x617%x618)<<(x619/x620));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x637 = INT16_MIN;
	uint32_t x638 = 109275151U;
	int32_t x640 = INT32_MAX;
	uint32_t t67 = 222696U;

	t67 = ((x637%x638)<<(x639/x640));

	if (t67 != 33203639U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x641 = 8207U;
	uint8_t x642 = 16U;
	int16_t x643 = -1;

	t68 = ((x641%x642)<<(x643/x644));

	if (t68 != 15) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x645 = UINT64_MAX;
	static uint8_t x646 = UINT8_MAX;
	static int16_t x647 = INT16_MAX;
	uint64_t t69 = 89LLU;

	t69 = ((x645%x646)<<(x647/x648));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x649 = 1U;
	int64_t x650 = -1LL;
	int16_t x651 = -1;
	static int32_t x652 = INT32_MAX;
	volatile int64_t t70 = 56265543431LL;

	t70 = ((x649%x650)<<(x651/x652));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x662 = INT16_MAX;
	uint64_t x663 = 6LLU;
	static int16_t x664 = -59;

	t71 = ((x661%x662)<<(x663/x664));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x670 = INT64_MAX;
	static volatile uint64_t x671 = 63854LLU;
	volatile int8_t x672 = INT8_MIN;
	volatile int64_t t72 = 1LL;

	t72 = ((x669%x670)<<(x671/x672));

	if (t72 != 1326LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x685 = INT8_MAX;
	volatile int16_t x686 = -1;
	static uint8_t x687 = 47U;
	static int32_t x688 = INT32_MIN;

	t73 = ((x685%x686)<<(x687/x688));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x689 = -1;
	int16_t x690 = -1;
	int16_t x692 = INT16_MIN;

	t74 = ((x689%x690)<<(x691/x692));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x721 = UINT8_MAX;
	uint32_t x722 = 1991896472U;
	int8_t x724 = -5;

	t75 = ((x721%x722)<<(x723/x724));

	if (t75 != 255U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x729 = INT16_MAX;
	int8_t x731 = 6;
	uint16_t x732 = 897U;
	int32_t t76 = -1;

	t76 = ((x729%x730)<<(x731/x732));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x747 = UINT8_MAX;
	uint32_t x748 = UINT32_MAX;

	t77 = ((x745%x746)<<(x747/x748));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x757 = INT8_MAX;
	uint16_t x758 = UINT16_MAX;
	int16_t x760 = INT16_MAX;
	volatile int32_t t78 = 438367068;

	t78 = ((x757%x758)<<(x759/x760));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x765 = 47U;
	uint32_t x766 = 5579U;
	int64_t x768 = INT64_MIN;
	uint32_t t79 = 5688847U;

	t79 = ((x765%x766)<<(x767/x768));

	if (t79 != 47U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x777 = 175U;
	int8_t x778 = INT8_MIN;
	static int16_t x779 = 6;
	volatile uint32_t x780 = 176816U;

	t80 = ((x777%x778)<<(x779/x780));

	if (t80 != 47) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x781 = UINT8_MAX;
	volatile uint32_t x783 = 33U;
	int8_t x784 = INT8_MAX;
	volatile int64_t t81 = 220443645234LL;

	t81 = ((x781%x782)<<(x783/x784));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x789 = 0;
	int32_t x790 = 68;
	uint32_t x791 = UINT32_MAX;
	int64_t x792 = INT64_MIN;

	t82 = ((x789%x790)<<(x791/x792));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x793 = -9;
	static uint16_t x795 = UINT16_MAX;
	int16_t x796 = INT16_MAX;

	t83 = ((x793%x794)<<(x795/x796));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x798 = -1;
	uint64_t x799 = 15346744976697LLU;
	int64_t x800 = -56593075412LL;

	t84 = ((x797%x798)<<(x799/x800));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x805 = 0;
	volatile int64_t x806 = INT64_MIN;
	uint8_t x807 = UINT8_MAX;
	volatile int64_t t85 = -1LL;

	t85 = ((x805%x806)<<(x807/x808));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t t86 = 1546U;

	t86 = ((x817%x818)<<(x819/x820));

	if (t86 != 20029738U) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x821 = INT8_MAX;
	int8_t x822 = INT8_MAX;
	int64_t x823 = -1LL;
	volatile int8_t x824 = 35;

	t87 = ((x821%x822)<<(x823/x824));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x828 = 19;

	t88 = ((x825%x826)<<(x827/x828));

	if (t88 != 55LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x857 = 487U;
	static int16_t x858 = -1;
	static int32_t x859 = -1;
	int16_t x860 = -1;
	volatile int32_t t89 = 232;

	t89 = ((x857%x858)<<(x859/x860));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x861 = 10;
	volatile int16_t x863 = -454;
	volatile int8_t x864 = -17;
	volatile int32_t t90 = 302464442;

	t90 = ((x861%x862)<<(x863/x864));

	if (t90 != 134217728) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x879 = 1078993730U;
	volatile uint64_t t91 = 74508LLU;

	t91 = ((x877%x878)<<(x879/x880));

	if (t91 != 154LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x885 = 671;
	int8_t x886 = INT8_MIN;
	uint64_t x887 = 1818096LLU;
	int8_t x888 = -3;
	volatile int32_t t92 = 31551;

	t92 = ((x885%x886)<<(x887/x888));

	if (t92 != 31) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x897 = INT32_MAX;
	int16_t x898 = INT16_MIN;
	int8_t x899 = INT8_MIN;
	int64_t x900 = INT64_MIN;

	t93 = ((x897%x898)<<(x899/x900));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x909 = INT8_MAX;
	uint64_t x910 = 54180639980LLU;
	static volatile int16_t x911 = INT16_MIN;
	static volatile int64_t x912 = -430025515619LL;
	uint64_t t94 = 18308931900764261LLU;

	t94 = ((x909%x910)<<(x911/x912));

	if (t94 != 127LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x913 = -1LL;
	static volatile int16_t x914 = -1;
	volatile int64_t x915 = -1LL;
	int8_t x916 = 16;
	int64_t t95 = 34642722154230045LL;

	t95 = ((x913%x914)<<(x915/x916));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x921 = INT32_MIN;
	static int8_t x922 = INT8_MIN;
	uint32_t x923 = 12801U;
	int16_t x924 = INT16_MAX;
	volatile int32_t t96 = 1;

	t96 = ((x921%x922)<<(x923/x924));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x926 = INT32_MIN;
	volatile uint8_t x927 = 78U;
	static volatile int8_t x928 = INT8_MAX;

	t97 = ((x925%x926)<<(x927/x928));

	if (t97 != 9LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x929 = 122;
	int64_t x930 = INT64_MIN;
	int8_t x931 = -1;
	uint16_t x932 = UINT16_MAX;

	t98 = ((x929%x930)<<(x931/x932));

	if (t98 != 122LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x937 = 0;
	static int8_t x938 = 52;
	static uint16_t x939 = UINT16_MAX;
	int64_t x940 = INT64_MIN;

	t99 = ((x937%x938)<<(x939/x940));

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

