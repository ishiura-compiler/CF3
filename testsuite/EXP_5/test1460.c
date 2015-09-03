#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x24 = 4720U;
volatile uint8_t x33 = 26U;
int64_t x34 = INT64_MIN;
uint16_t x35 = 2878U;
volatile int32_t t3 = -544037389;
volatile uint16_t x69 = UINT16_MAX;
int16_t x77 = -3206;
int16_t x99 = -1;
volatile int8_t x113 = INT8_MIN;
int32_t t12 = 1;
int64_t x122 = INT64_MAX;
uint8_t x137 = UINT8_MAX;
int32_t t15 = -1381;
int16_t x146 = -1;
uint8_t x165 = UINT8_MAX;
uint8_t x181 = UINT8_MAX;
int64_t x190 = -1LL;
static volatile int64_t x191 = INT64_MIN;
int16_t x193 = 122;
uint16_t x201 = 18338U;
uint16_t x203 = 3U;
volatile uint8_t x205 = 2U;
int16_t x206 = -1;
uint32_t x208 = 114461914U;
volatile int16_t x210 = -1;
int8_t x225 = INT8_MIN;
int16_t x226 = INT16_MAX;
uint32_t x229 = 2U;
int64_t x232 = 49394475LL;
volatile uint32_t t28 = 0U;
static int32_t x246 = INT32_MIN;
static uint64_t x255 = UINT64_MAX;
static volatile int32_t x258 = 3917200;
int32_t x259 = 58108;
uint32_t x260 = UINT32_MAX;
int64_t x262 = INT64_MIN;
volatile uint32_t t34 = 1785U;
static volatile int32_t t36 = 229;
volatile int8_t x291 = -1;
uint8_t x302 = UINT8_MAX;
static int32_t t40 = -1;
uint8_t x310 = UINT8_MAX;
int64_t x311 = 390358059LL;
volatile int32_t t41 = -219704;
int64_t x319 = -555635980521188LL;
static volatile int32_t t43 = INT32_MIN;
int8_t x334 = 50;
volatile uint8_t x338 = 14U;
int8_t x339 = 56;
volatile int32_t t45 = -1;
int32_t x343 = INT32_MIN;
int8_t x344 = 39;
volatile int32_t t47 = 2;
static int16_t x397 = INT16_MIN;
int16_t x399 = INT16_MIN;
uint8_t x405 = 71U;
volatile uint16_t x413 = 6U;
int8_t x414 = -7;
int32_t t53 = -11;
int16_t x433 = -6503;
int64_t x439 = -3195LL;
int8_t x446 = INT8_MAX;
volatile uint16_t x477 = 31U;
static uint8_t x478 = 20U;
volatile int32_t t63 = 0;
volatile int64_t x492 = 1341810424794852964LL;
static volatile uint64_t t65 = UINT64_MAX;
int8_t x493 = 3;
uint16_t x515 = UINT16_MAX;
int64_t x516 = 1831080200136567789LL;
uint32_t x520 = UINT32_MAX;
volatile int32_t t70 = 4671105;
static volatile int32_t x528 = 15141;
int32_t x539 = INT32_MAX;
static uint8_t x540 = 18U;
int32_t x542 = -1;
static int16_t x543 = INT16_MAX;
int32_t x544 = 61077925;
int32_t t73 = -16367842;
uint32_t x545 = UINT32_MAX;
uint32_t x548 = 2967U;
int32_t t75 = -2034949;
int32_t x574 = -215;
uint16_t x575 = 13U;
int16_t x581 = INT16_MIN;
uint16_t x593 = 0U;
int16_t x595 = -427;
int32_t t80 = -248977;
int32_t x598 = INT32_MAX;
int32_t x605 = -1;
int32_t x606 = 60;
volatile uint64_t x613 = 0LLU;
int32_t x614 = INT32_MIN;
uint32_t x617 = 8098376U;
volatile uint16_t x622 = 1U;
static uint8_t x637 = 0U;
int64_t t87 = -912LL;
int32_t x649 = INT32_MAX;
static uint64_t x650 = 3815161564531958LLU;
int32_t x661 = 229;
int8_t x664 = INT8_MAX;
volatile int32_t t89 = -180343;
int32_t x667 = INT32_MIN;
volatile int64_t t90 = -339771917928805564LL;
int32_t x669 = -1;
int64_t x677 = -12620179251183LL;
int64_t x679 = INT64_MAX;
volatile int32_t t93 = INT32_MIN;
int32_t x708 = INT32_MAX;
static int8_t x711 = INT8_MIN;
uint8_t x724 = UINT8_MAX;
int16_t x736 = 11;


void f0(void) {
	static volatile int32_t x1 = INT32_MAX;
	int16_t x2 = 0;
	uint32_t x3 = 15307518U;
	static uint16_t x4 = 75U;
	volatile int32_t t0 = INT32_MAX;

	t0 = (x1/((x2<x3)<x4));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static int16_t x6 = -1;
	int64_t x7 = INT64_MIN;
	uint32_t x8 = UINT32_MAX;
	int32_t t1 = -254084;

	t1 = (x5/((x6<x7)<x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x21 = 499U;
	static int16_t x22 = INT16_MIN;
	static int64_t x23 = INT64_MIN;
	volatile int32_t t2 = -124349716;

	t2 = (x21/((x22<x23)<x24));

	if (t2 != 499) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x36 = 106533238U;

	t3 = (x33/((x34<x35)<x36));

	if (t3 != 26) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x45 = INT64_MIN;
	uint8_t x46 = UINT8_MAX;
	volatile uint64_t x47 = 38800307LLU;
	int8_t x48 = INT8_MAX;
	int64_t t4 = INT64_MIN;

	t4 = (x45/((x46<x47)<x48));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x61 = 6890004313739433LLU;
	uint8_t x62 = UINT8_MAX;
	volatile uint16_t x63 = 7396U;
	volatile uint32_t x64 = UINT32_MAX;
	volatile uint64_t t5 = 43428316838LLU;

	t5 = (x61/((x62<x63)<x64));

	if (t5 != 6890004313739433LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x70 = INT8_MIN;
	int8_t x71 = -30;
	uint16_t x72 = 73U;
	int32_t t6 = 2;

	t6 = (x69/((x70<x71)<x72));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x73 = 3;
	int32_t x74 = INT32_MIN;
	static int8_t x75 = -1;
	uint64_t x76 = 788576435LLU;
	volatile int32_t t7 = -2582927;

	t7 = (x73/((x74<x75)<x76));

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x78 = UINT32_MAX;
	uint64_t x79 = 0LLU;
	volatile uint64_t x80 = UINT64_MAX;
	volatile int32_t t8 = -918790139;

	t8 = (x77/((x78<x79)<x80));

	if (t8 != -3206) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x93 = 7U;
	int64_t x94 = -1LL;
	uint16_t x95 = 23U;
	volatile uint64_t x96 = UINT64_MAX;
	volatile int32_t t9 = -477118;

	t9 = (x93/((x94<x95)<x96));

	if (t9 != 7) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x97 = UINT64_MAX;
	int32_t x98 = INT32_MIN;
	uint32_t x100 = 20182592U;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x97/((x98<x99)<x100));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x109 = 0;
	uint32_t x110 = 437U;
	static int16_t x111 = INT16_MIN;
	static volatile int64_t x112 = INT64_MAX;
	volatile int32_t t11 = 3851;

	t11 = (x109/((x110<x111)<x112));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x114 = INT16_MAX;
	volatile uint64_t x115 = 64848548306LLU;
	int8_t x116 = 3;

	t12 = (x113/((x114<x115)<x116));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x121 = -1LL;
	int8_t x123 = -7;
	uint16_t x124 = 94U;
	volatile int64_t t13 = 87704395793579549LL;

	t13 = (x121/((x122<x123)<x124));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x129 = UINT64_MAX;
	static int32_t x130 = INT32_MIN;
	static int32_t x131 = INT32_MAX;
	uint8_t x132 = 112U;
	uint64_t t14 = UINT64_MAX;

	t14 = (x129/((x130<x131)<x132));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x138 = 16673294U;
	static int64_t x139 = -87764785464297459LL;
	int64_t x140 = 55326LL;

	t15 = (x137/((x138<x139)<x140));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x145 = -1712966810LL;
	volatile int32_t x147 = -1;
	int64_t x148 = INT64_MAX;
	int64_t t16 = -2680LL;

	t16 = (x145/((x146<x147)<x148));

	if (t16 != -1712966810LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x157 = 1765647U;
	uint64_t x158 = 34542067012LLU;
	int64_t x159 = -772081330129LL;
	uint32_t x160 = 44372358U;
	uint32_t t17 = 219U;

	t17 = (x157/((x158<x159)<x160));

	if (t17 != 1765647U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x166 = 0;
	int8_t x167 = INT8_MIN;
	static uint16_t x168 = 869U;
	int32_t t18 = 29447;

	t18 = (x165/((x166<x167)<x168));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int32_t x174 = INT32_MIN;
	int32_t x175 = INT32_MIN;
	uint64_t x176 = UINT64_MAX;
	volatile int32_t t19 = -32839;

	t19 = (x173/((x174<x175)<x176));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x177 = 13U;
	int32_t x178 = -1;
	int32_t x179 = -453;
	uint64_t x180 = 523370712715446408LLU;
	static int32_t t20 = 1646257;

	t20 = (x177/((x178<x179)<x180));

	if (t20 != 13) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x182 = INT64_MIN;
	static volatile int32_t x183 = INT32_MAX;
	static uint16_t x184 = 14932U;
	static volatile int32_t t21 = -1006902347;

	t21 = (x181/((x182<x183)<x184));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x189 = 3397262U;
	static int64_t x192 = INT64_MAX;
	volatile uint32_t t22 = 8062916U;

	t22 = (x189/((x190<x191)<x192));

	if (t22 != 3397262U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x194 = INT32_MIN;
	uint64_t x195 = 1LLU;
	volatile uint32_t x196 = 1823770153U;
	static int32_t t23 = 12;

	t23 = (x193/((x194<x195)<x196));

	if (t23 != 122) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x202 = INT64_MIN;
	volatile uint64_t x204 = 736846562811804812LLU;
	int32_t t24 = -2234;

	t24 = (x201/((x202<x203)<x204));

	if (t24 != 18338) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x207 = 7842U;
	int32_t t25 = 933;

	t25 = (x205/((x206<x207)<x208));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x209 = 19711U;
	int8_t x211 = -1;
	static int16_t x212 = 26;
	static volatile int32_t t26 = 370353884;

	t26 = (x209/((x210<x211)<x212));

	if (t26 != 19711) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x227 = 0U;
	int8_t x228 = 34;
	volatile int32_t t27 = -187977487;

	t27 = (x225/((x226<x227)<x228));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x230 = INT32_MAX;
	uint32_t x231 = UINT32_MAX;

	t28 = (x229/((x230<x231)<x232));

	if (t28 != 2U) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x233 = 1211LL;
	int8_t x234 = INT8_MIN;
	static int8_t x235 = INT8_MIN;
	volatile uint32_t x236 = UINT32_MAX;
	int64_t t29 = 14639796454LL;

	t29 = (x233/((x234<x235)<x236));

	if (t29 != 1211LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x237 = -122;
	static uint32_t x238 = 608319320U;
	int16_t x239 = -1;
	volatile uint64_t x240 = 188318620951047LLU;
	static int32_t t30 = 256376538;

	t30 = (x237/((x238<x239)<x240));

	if (t30 != -122) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x245 = INT8_MIN;
	uint8_t x247 = 38U;
	uint16_t x248 = 679U;
	static volatile int32_t t31 = -39484;

	t31 = (x245/((x246<x247)<x248));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x253 = -1;
	uint16_t x254 = UINT16_MAX;
	int16_t x256 = 29;
	static volatile int32_t t32 = 106350458;

	t32 = (x253/((x254<x255)<x256));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x257 = INT64_MIN;
	static int64_t t33 = INT64_MIN;

	t33 = (x257/((x258<x259)<x260));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x261 = 3U;
	uint32_t x263 = 2197888U;
	uint64_t x264 = 72728631LLU;

	t34 = (x261/((x262<x263)<x264));

	if (t34 != 3U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x273 = -1;
	int32_t x274 = INT32_MIN;
	uint16_t x275 = UINT16_MAX;
	int32_t x276 = INT32_MAX;
	volatile int32_t t35 = 34740;

	t35 = (x273/((x274<x275)<x276));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x277 = UINT8_MAX;
	int64_t x278 = 5412776973397699LL;
	int8_t x279 = -1;
	uint32_t x280 = UINT32_MAX;

	t36 = (x277/((x278<x279)<x280));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x281 = -1;
	volatile int16_t x282 = 1;
	volatile int16_t x283 = INT16_MIN;
	uint64_t x284 = UINT64_MAX;
	static int32_t t37 = 30916;

	t37 = (x281/((x282<x283)<x284));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x289 = -25;
	volatile int8_t x290 = INT8_MIN;
	volatile int16_t x292 = 14789;
	volatile int32_t t38 = -184;

	t38 = (x289/((x290<x291)<x292));

	if (t38 != -25) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x301 = 869549909U;
	int16_t x303 = INT16_MIN;
	int16_t x304 = INT16_MAX;
	static uint32_t t39 = 764039U;

	t39 = (x301/((x302<x303)<x304));

	if (t39 != 869549909U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x305 = -13;
	volatile int8_t x306 = -33;
	int16_t x307 = -531;
	uint8_t x308 = 25U;

	t40 = (x305/((x306<x307)<x308));

	if (t40 != -13) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x309 = -1;
	int32_t x312 = INT32_MAX;

	t41 = (x309/((x310<x311)<x312));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x317 = INT32_MIN;
	static uint32_t x318 = 39U;
	int64_t x320 = INT64_MAX;
	int32_t t42 = INT32_MIN;

	t42 = (x317/((x318<x319)<x320));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MAX;
	volatile int8_t x323 = -1;
	volatile uint64_t x324 = UINT64_MAX;

	t43 = (x321/((x322<x323)<x324));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x333 = -2;
	int64_t x335 = -1LL;
	int32_t x336 = 15;
	int32_t t44 = 619633593;

	t44 = (x333/((x334<x335)<x336));

	if (t44 != -2) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x337 = 2U;
	uint64_t x340 = 408697901936LLU;

	t45 = (x337/((x338<x339)<x340));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x341 = UINT8_MAX;
	int8_t x342 = INT8_MIN;
	volatile int32_t t46 = -6775525;

	t46 = (x341/((x342<x343)<x344));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x353 = 5;
	int8_t x354 = INT8_MIN;
	int8_t x355 = -1;
	volatile uint8_t x356 = 14U;

	t47 = (x353/((x354<x355)<x356));

	if (t47 != 5) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x361 = 129U;
	uint32_t x362 = 2U;
	int8_t x363 = INT8_MAX;
	static uint16_t x364 = 7910U;
	uint32_t t48 = 60767U;

	t48 = (x361/((x362<x363)<x364));

	if (t48 != 129U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x385 = UINT8_MAX;
	static int32_t x386 = 1653118;
	int32_t x387 = -1;
	volatile uint64_t x388 = UINT64_MAX;
	volatile int32_t t49 = 32675377;

	t49 = (x385/((x386<x387)<x388));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x398 = INT64_MIN;
	volatile int32_t x400 = INT32_MAX;
	volatile int32_t t50 = 0;

	t50 = (x397/((x398<x399)<x400));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x406 = -1LL;
	static int16_t x407 = -998;
	uint32_t x408 = 40U;
	int32_t t51 = -4305;

	t51 = (x405/((x406<x407)<x408));

	if (t51 != 71) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x415 = -1;
	uint64_t x416 = UINT64_MAX;
	volatile int32_t t52 = -24;

	t52 = (x413/((x414<x415)<x416));

	if (t52 != 6) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x417 = -1;
	int64_t x418 = 155921896LL;
	int8_t x419 = -1;
	int64_t x420 = 1925750LL;

	t53 = (x417/((x418<x419)<x420));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x425 = 3067246074029LLU;
	static uint16_t x426 = UINT16_MAX;
	uint64_t x427 = UINT64_MAX;
	uint64_t x428 = 29924LLU;
	uint64_t t54 = 706455358883742466LLU;

	t54 = (x425/((x426<x427)<x428));

	if (t54 != 3067246074029LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x434 = 8679264852LL;
	uint32_t x435 = 5868U;
	volatile int8_t x436 = 3;
	int32_t t55 = -1538;

	t55 = (x433/((x434<x435)<x436));

	if (t55 != -6503) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x437 = 5;
	uint8_t x438 = 38U;
	static uint16_t x440 = 36U;
	volatile int32_t t56 = 0;

	t56 = (x437/((x438<x439)<x440));

	if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x441 = INT16_MAX;
	int32_t x442 = INT32_MAX;
	static volatile int32_t x443 = INT32_MAX;
	int64_t x444 = INT64_MAX;
	int32_t t57 = 98296;

	t57 = (x441/((x442<x443)<x444));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x445 = INT8_MAX;
	int32_t x447 = 77007;
	volatile uint64_t x448 = UINT64_MAX;
	static volatile int32_t t58 = 174420250;

	t58 = (x445/((x446<x447)<x448));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x449 = INT64_MAX;
	int8_t x450 = -18;
	uint32_t x451 = 21336U;
	uint8_t x452 = 110U;
	int64_t t59 = INT64_MAX;

	t59 = (x449/((x450<x451)<x452));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x453 = INT32_MIN;
	volatile int16_t x454 = -71;
	int32_t x455 = -254850065;
	uint8_t x456 = 60U;
	volatile int32_t t60 = INT32_MIN;

	t60 = (x453/((x454<x455)<x456));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x457 = 0U;
	int16_t x458 = INT16_MIN;
	static int8_t x459 = -1;
	int16_t x460 = INT16_MAX;
	int32_t t61 = -151087689;

	t61 = (x457/((x458<x459)<x460));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x465 = 15U;
	static volatile int64_t x466 = INT64_MAX;
	int16_t x467 = -1;
	uint8_t x468 = 7U;
	int32_t t62 = 508;

	t62 = (x465/((x466<x467)<x468));

	if (t62 != 15) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x479 = -1;
	uint16_t x480 = 96U;

	t63 = (x477/((x478<x479)<x480));

	if (t63 != 31) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x485 = UINT64_MAX;
	volatile int32_t x486 = INT32_MAX;
	int8_t x487 = -1;
	static int8_t x488 = INT8_MAX;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x485/((x486<x487)<x488));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x489 = UINT64_MAX;
	int8_t x490 = 9;
	static int16_t x491 = -1;

	t65 = (x489/((x490<x491)<x492));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x494 = -1;
	volatile int64_t x495 = INT64_MIN;
	uint64_t x496 = 1262740416935893LLU;
	static int32_t t66 = 226570294;

	t66 = (x493/((x494<x495)<x496));

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x505 = UINT8_MAX;
	volatile uint64_t x506 = UINT64_MAX;
	int8_t x507 = INT8_MAX;
	uint16_t x508 = UINT16_MAX;
	int32_t t67 = -964691150;

	t67 = (x505/((x506<x507)<x508));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x509 = 1;
	volatile uint16_t x510 = 3007U;
	int64_t x511 = INT64_MAX;
	uint64_t x512 = UINT64_MAX;
	int32_t t68 = -468509;

	t68 = (x509/((x510<x511)<x512));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x513 = UINT16_MAX;
	uint8_t x514 = 5U;
	static volatile int32_t t69 = 397;

	t69 = (x513/((x514<x515)<x516));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x517 = INT16_MAX;
	static int32_t x518 = INT32_MIN;
	volatile int32_t x519 = -19118;

	t70 = (x517/((x518<x519)<x520));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x525 = 4U;
	int8_t x526 = INT8_MIN;
	uint16_t x527 = 3931U;
	int32_t t71 = -1;

	t71 = (x525/((x526<x527)<x528));

	if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x537 = -8566844269LL;
	int8_t x538 = -1;
	volatile int64_t t72 = 22036LL;

	t72 = (x537/((x538<x539)<x540));

	if (t72 != -8566844269LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x541 = 95;

	t73 = (x541/((x542<x543)<x544));

	if (t73 != 95) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x546 = 1LL;
	uint8_t x547 = 12U;
	uint32_t t74 = UINT32_MAX;

	t74 = (x545/((x546<x547)<x548));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x561 = INT16_MIN;
	int8_t x562 = -6;
	int16_t x563 = 7;
	int16_t x564 = INT16_MAX;

	t75 = (x561/((x562<x563)<x564));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x565 = -6;
	int8_t x566 = -1;
	int16_t x567 = INT16_MIN;
	int8_t x568 = INT8_MAX;
	static volatile int32_t t76 = 522156427;

	t76 = (x565/((x566<x567)<x568));

	if (t76 != -6) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x573 = 346;
	static uint32_t x576 = UINT32_MAX;
	int32_t t77 = -812;

	t77 = (x573/((x574<x575)<x576));

	if (t77 != 346) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x577 = 21U;
	uint16_t x578 = 284U;
	volatile uint8_t x579 = 47U;
	volatile uint64_t x580 = UINT64_MAX;
	volatile int32_t t78 = -1;

	t78 = (x577/((x578<x579)<x580));

	if (t78 != 21) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x582 = -3;
	volatile int64_t x583 = -1LL;
	uint64_t x584 = UINT64_MAX;
	int32_t t79 = 186855558;

	t79 = (x581/((x582<x583)<x584));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x594 = INT16_MIN;
	static uint64_t x596 = UINT64_MAX;

	t80 = (x593/((x594<x595)<x596));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x597 = -2;
	int16_t x599 = 1;
	static uint16_t x600 = UINT16_MAX;
	volatile int32_t t81 = -403220;

	t81 = (x597/((x598<x599)<x600));

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x607 = -438818243;
	volatile int32_t x608 = 7791732;
	int32_t t82 = 0;

	t82 = (x605/((x606<x607)<x608));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x615 = INT16_MIN;
	uint16_t x616 = 454U;
	uint64_t t83 = 297572535LLU;

	t83 = (x613/((x614<x615)<x616));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x618 = INT16_MIN;
	uint16_t x619 = 0U;
	uint8_t x620 = 5U;
	uint32_t t84 = 498U;

	t84 = (x617/((x618<x619)<x620));

	if (t84 != 8098376U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x621 = INT64_MAX;
	int8_t x623 = -1;
	uint64_t x624 = 331581047402LLU;
	static volatile int64_t t85 = INT64_MAX;

	t85 = (x621/((x622<x623)<x624));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x638 = -1LL;
	uint64_t x639 = 200531LLU;
	int8_t x640 = INT8_MAX;
	static volatile int32_t t86 = 6;

	t86 = (x637/((x638<x639)<x640));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x645 = -1LL;
	static uint8_t x646 = 0U;
	uint64_t x647 = 40653196LLU;
	int8_t x648 = 6;

	t87 = (x645/((x646<x647)<x648));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x651 = 1317U;
	static uint8_t x652 = UINT8_MAX;
	volatile int32_t t88 = INT32_MAX;

	t88 = (x649/((x650<x651)<x652));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x662 = 26U;
	int32_t x663 = -1;

	t89 = (x661/((x662<x663)<x664));

	if (t89 != 229) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x665 = -5724465409LL;
	int8_t x666 = -3;
	uint16_t x668 = 142U;

	t90 = (x665/((x666<x667)<x668));

	if (t90 != -5724465409LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x670 = -1LL;
	int32_t x671 = -102;
	int8_t x672 = INT8_MAX;
	volatile int32_t t91 = -11440036;

	t91 = (x669/((x670<x671)<x672));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x678 = INT16_MAX;
	uint16_t x680 = UINT16_MAX;
	volatile int64_t t92 = -601293519019620LL;

	t92 = (x677/((x678<x679)<x680));

	if (t92 != -12620179251183LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x681 = INT32_MIN;
	uint16_t x682 = 31U;
	uint64_t x683 = UINT64_MAX;
	static volatile uint8_t x684 = 4U;

	t93 = (x681/((x682<x683)<x684));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x689 = -1;
	int16_t x690 = INT16_MIN;
	int16_t x691 = 1;
	int8_t x692 = INT8_MAX;
	int32_t t94 = -1;

	t94 = (x689/((x690<x691)<x692));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x701 = INT32_MAX;
	volatile int64_t x702 = INT64_MIN;
	uint64_t x703 = 74856045232LLU;
	int8_t x704 = 1;
	int32_t t95 = INT32_MAX;

	t95 = (x701/((x702<x703)<x704));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x705 = INT32_MIN;
	uint64_t x706 = 25505891LLU;
	static volatile uint32_t x707 = 135U;
	int32_t t96 = INT32_MIN;

	t96 = (x705/((x706<x707)<x708));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x709 = 8648U;
	volatile int32_t x710 = 0;
	uint64_t x712 = 206527797LLU;
	static int32_t t97 = -60210003;

	t97 = (x709/((x710<x711)<x712));

	if (t97 != 8648) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x721 = -117212857LL;
	static int32_t x722 = -1;
	static uint64_t x723 = 104102LLU;
	int64_t t98 = 41499709623304779LL;

	t98 = (x721/((x722<x723)<x724));

	if (t98 != -117212857LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x733 = 51LL;
	static volatile uint16_t x734 = 0U;
	static uint32_t x735 = 1669560U;
	int64_t t99 = 1741302752LL;

	t99 = (x733/((x734<x735)<x736));

	if (t99 != 51LL) { NG(); } else { ; }
	
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

