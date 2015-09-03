#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = UINT32_MAX;
volatile int32_t x8 = 0;
int64_t x13 = 14298961917805LL;
int32_t t3 = -34;
uint32_t x21 = 65449U;
int8_t x32 = -1;
uint64_t x33 = 8320869676440597728LLU;
volatile uint64_t t6 = 3916085646368LLU;
uint16_t x47 = UINT16_MAX;
uint32_t x49 = 1789521111U;
uint16_t x65 = 3003U;
volatile int64_t x103 = INT64_MAX;
volatile int64_t x104 = 82969095596591LL;
uint32_t x105 = 5314830U;
static int8_t x108 = INT8_MIN;
volatile uint16_t x111 = 18U;
volatile int8_t x112 = -1;
volatile int64_t x118 = INT64_MIN;
static int8_t x119 = 19;
uint32_t t18 = 125U;
int32_t x139 = -1;
int64_t x155 = INT64_MIN;
static volatile uint64_t t21 = 1646936958174013LLU;
volatile int32_t t22 = -69;
int8_t x169 = 10;
static int32_t t23 = 53941;
uint64_t x196 = 14766089641798275LLU;
int64_t x198 = INT64_MAX;
uint8_t x212 = UINT8_MAX;
uint32_t t28 = UINT32_MAX;
volatile uint8_t x235 = 10U;
uint64_t x256 = UINT64_MAX;
static uint16_t x269 = 79U;
volatile int16_t x272 = -1;
int8_t x281 = 2;
int8_t x282 = -1;
int16_t x283 = INT16_MIN;
volatile int32_t t36 = -11423414;
int32_t t38 = 25;
int16_t x315 = INT16_MIN;
int16_t x320 = 141;
static int64_t x347 = INT64_MIN;
int32_t t46 = -13;
uint32_t x357 = UINT32_MAX;
int16_t x358 = INT16_MIN;
volatile int16_t x359 = -1;
int16_t x374 = 469;
volatile uint16_t x387 = 5132U;
int16_t x430 = INT16_MIN;
static int8_t x432 = INT8_MIN;
static uint16_t x447 = UINT16_MAX;
volatile int16_t x454 = INT16_MIN;
volatile int16_t x455 = INT16_MIN;
uint32_t t60 = 78U;
volatile int32_t t61 = 229299;
int16_t x466 = -1;
int16_t x486 = -1;
int8_t x492 = -1;
uint32_t t68 = 5U;
int8_t x567 = INT8_MAX;
volatile uint16_t x570 = UINT16_MAX;
int16_t x593 = 2;
int8_t x595 = -3;
volatile int16_t x596 = -1293;
int32_t t73 = 10124722;
int8_t x598 = INT8_MIN;
uint32_t x605 = 9U;
static int8_t x606 = INT8_MIN;
int8_t x610 = INT8_MAX;
volatile int32_t t77 = 1304913;
uint8_t x621 = 10U;
int32_t x624 = -498911;
volatile uint64_t t80 = 237079LLU;
uint32_t x645 = 18337U;
int64_t x668 = INT64_MIN;
volatile int64_t x694 = INT64_MIN;
uint8_t x698 = 68U;
volatile uint32_t x699 = 1U;
volatile uint32_t t90 = 1262085023U;
volatile int16_t x713 = INT16_MAX;
static uint64_t x748 = 6993593617LLU;
int32_t x749 = 7315605;
uint8_t x751 = UINT8_MAX;
volatile int32_t t98 = -93655997;
static uint32_t x757 = 1945U;
volatile uint16_t x758 = 5368U;


void f0(void) {
	volatile uint16_t x1 = 307U;
	int32_t x2 = -3890;
	uint64_t x3 = 377651777182203747LLU;
	int32_t t0 = -9184;

	t0 = (x1<<((x2/x3)<=x4));

	if (t0 != 614) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static int64_t x6 = -1LL;
	int32_t x7 = -2667;
	int32_t t1 = -298886762;

	t1 = (x5<<((x6/x7)<=x8));

	if (t1 != 254) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = INT64_MIN;
	uint64_t x15 = 7657304427LLU;
	static uint32_t x16 = 1U;
	int64_t t2 = 27121388LL;

	t2 = (x13<<((x14/x15)<=x16));

	if (t2 != 14298961917805LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x17 = 4U;
	uint64_t x18 = UINT64_MAX;
	int32_t x19 = 67733519;
	volatile int32_t x20 = INT32_MIN;

	t3 = (x17<<((x18/x19)<=x20));

	if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x22 = -3605;
	int32_t x23 = INT32_MIN;
	static int64_t x24 = INT64_MAX;
	static uint32_t t4 = 4305U;

	t4 = (x21<<((x22/x23)<=x24));

	if (t4 != 130898U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 8945LLU;
	int16_t x30 = -2001;
	uint32_t x31 = 712053U;
	volatile uint64_t t5 = 9993147037643LLU;

	t5 = (x29<<((x30/x31)<=x32));

	if (t5 != 17890LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x34 = 0U;
	uint32_t x35 = UINT32_MAX;
	volatile int32_t x36 = INT32_MIN;

	t6 = (x33<<((x34/x35)<=x36));

	if (t6 != 16641739352881195456LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = 52;
	int8_t x46 = INT8_MAX;
	int16_t x48 = INT16_MAX;
	volatile int32_t t7 = 2;

	t7 = (x45<<((x46/x47)<=x48));

	if (t7 != 104) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x50 = -6LL;
	int32_t x51 = -36;
	volatile int32_t x52 = 1;
	uint32_t t8 = 24U;

	t8 = (x49<<((x50/x51)<=x52));

	if (t8 != 3579042222U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x53 = 3703373LLU;
	int64_t x54 = INT64_MIN;
	uint16_t x55 = UINT16_MAX;
	int32_t x56 = -1;
	uint64_t t9 = 784512614LLU;

	t9 = (x53<<((x54/x55)<=x56));

	if (t9 != 7406746LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x57 = 5847U;
	int16_t x58 = INT16_MIN;
	uint16_t x59 = 49U;
	volatile int16_t x60 = -1;
	static int32_t t10 = 53571177;

	t10 = (x57<<((x58/x59)<=x60));

	if (t10 != 11694) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x66 = INT16_MIN;
	int16_t x67 = 9;
	uint8_t x68 = UINT8_MAX;
	int32_t t11 = -67;

	t11 = (x65<<((x66/x67)<=x68));

	if (t11 != 6006) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x73 = INT64_MAX;
	static int8_t x74 = -7;
	int32_t x75 = INT32_MIN;
	int64_t x76 = -167602681503LL;
	volatile int64_t t12 = INT64_MAX;

	t12 = (x73<<((x74/x75)<=x76));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x81 = INT8_MAX;
	static int64_t x82 = -22578862518LL;
	volatile int8_t x83 = -1;
	int16_t x84 = INT16_MIN;
	static int32_t t13 = 1470;

	t13 = (x81<<((x82/x83)<=x84));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x97 = 1U;
	static volatile int64_t x98 = INT64_MIN;
	int16_t x99 = INT16_MIN;
	volatile int32_t x100 = INT32_MAX;
	volatile uint32_t t14 = 99779761U;

	t14 = (x97<<((x98/x99)<=x100));

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x101 = 124;
	int16_t x102 = -1;
	int32_t t15 = 193735;

	t15 = (x101<<((x102/x103)<=x104));

	if (t15 != 248) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x106 = UINT64_MAX;
	uint16_t x107 = 483U;
	uint32_t t16 = 1814568653U;

	t16 = (x105<<((x106/x107)<=x108));

	if (t16 != 10629660U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x109 = UINT8_MAX;
	uint8_t x110 = 8U;
	int32_t t17 = 406000650;

	t17 = (x109<<((x110/x111)<=x112));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x117 = UINT32_MAX;
	volatile int8_t x120 = INT8_MIN;

	t18 = (x117<<((x118/x119)<=x120));

	if (t18 != 4294967294U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x137 = 31833;
	int16_t x138 = INT16_MAX;
	static volatile uint16_t x140 = 53U;
	int32_t t19 = 258138744;

	t19 = (x137<<((x138/x139)<=x140));

	if (t19 != 63666) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x141 = 12220U;
	volatile int8_t x142 = -1;
	static int16_t x143 = -11791;
	int16_t x144 = INT16_MAX;
	volatile uint32_t t20 = 7U;

	t20 = (x141<<((x142/x143)<=x144));

	if (t20 != 24440U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x153 = UINT64_MAX;
	static uint32_t x154 = 3U;
	static int64_t x156 = INT64_MAX;

	t21 = (x153<<((x154/x155)<=x156));

	if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x157 = 0U;
	int32_t x158 = INT32_MIN;
	volatile uint16_t x159 = 3553U;
	int8_t x160 = INT8_MAX;

	t22 = (x157<<((x158/x159)<=x160));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x170 = 28U;
	static volatile uint8_t x171 = 125U;
	volatile uint32_t x172 = 1043829U;

	t23 = (x169<<((x170/x171)<=x172));

	if (t23 != 20) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x193 = 3987U;
	static int16_t x194 = INT16_MIN;
	uint8_t x195 = 1U;
	volatile uint32_t t24 = 148U;

	t24 = (x193<<((x194/x195)<=x196));

	if (t24 != 3987U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x197 = UINT16_MAX;
	volatile uint32_t x199 = UINT32_MAX;
	uint64_t x200 = 20LLU;
	int32_t t25 = -3747307;

	t25 = (x197<<((x198/x199)<=x200));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x201 = 204U;
	static volatile int8_t x202 = INT8_MIN;
	static int32_t x203 = -29596039;
	int32_t x204 = INT32_MAX;
	int32_t t26 = 1024451;

	t26 = (x201<<((x202/x203)<=x204));

	if (t26 != 408) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x209 = 26;
	int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MAX;
	volatile int32_t t27 = -204209519;

	t27 = (x209<<((x210/x211)<=x212));

	if (t27 != 52) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x217 = UINT32_MAX;
	volatile uint16_t x218 = UINT16_MAX;
	int8_t x219 = 2;
	uint8_t x220 = 3U;

	t28 = (x217<<((x218/x219)<=x220));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x225 = 1;
	volatile uint8_t x226 = UINT8_MAX;
	static int64_t x227 = -1LL;
	uint64_t x228 = 182253261109LLU;
	static int32_t t29 = 4;

	t29 = (x225<<((x226/x227)<=x228));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x233 = UINT16_MAX;
	int64_t x234 = INT64_MIN;
	int32_t x236 = INT32_MAX;
	int32_t t30 = -15;

	t30 = (x233<<((x234/x235)<=x236));

	if (t30 != 131070) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x241 = 359903520LL;
	int64_t x242 = INT64_MIN;
	static int32_t x243 = 501023;
	static int16_t x244 = -414;
	int64_t t31 = 15691859LL;

	t31 = (x241<<((x242/x243)<=x244));

	if (t31 != 719807040LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x245 = 10U;
	volatile int8_t x246 = INT8_MAX;
	volatile int8_t x247 = -14;
	volatile int64_t x248 = -1LL;
	int32_t t32 = 21;

	t32 = (x245<<((x246/x247)<=x248));

	if (t32 != 20) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x253 = 150497717U;
	int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MIN;
	volatile uint32_t t33 = 263359U;

	t33 = (x253<<((x254/x255)<=x256));

	if (t33 != 300995434U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x270 = 489668LLU;
	int16_t x271 = -1;
	volatile int32_t t34 = 98446;

	t34 = (x269<<((x270/x271)<=x272));

	if (t34 != 158) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x273 = 18U;
	volatile int32_t x274 = 54809575;
	uint64_t x275 = 125928LLU;
	uint32_t x276 = 395162575U;
	int32_t t35 = -3241;

	t35 = (x273<<((x274/x275)<=x276));

	if (t35 != 36) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x284 = 2827;

	t36 = (x281<<((x282/x283)<=x284));

	if (t36 != 4) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x285 = 99573149U;
	uint64_t x286 = 70LLU;
	int32_t x287 = -1;
	int16_t x288 = 2771;
	uint32_t t37 = 1122506855U;

	t37 = (x285<<((x286/x287)<=x288));

	if (t37 != 199146298U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x289 = 13283U;
	int32_t x290 = INT32_MIN;
	uint8_t x291 = UINT8_MAX;
	uint8_t x292 = 7U;

	t38 = (x289<<((x290/x291)<=x292));

	if (t38 != 26566) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x293 = UINT64_MAX;
	int32_t x294 = -60697642;
	int16_t x295 = INT16_MAX;
	int32_t x296 = INT32_MIN;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = (x293<<((x294/x295)<=x296));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x301 = 0U;
	static int64_t x302 = 3LL;
	static volatile uint64_t x303 = 331959376240LLU;
	int32_t x304 = 20305;
	volatile int32_t t40 = -339548307;

	t40 = (x301<<((x302/x303)<=x304));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x309 = UINT8_MAX;
	int32_t x310 = INT32_MAX;
	int8_t x311 = 2;
	static volatile uint8_t x312 = 6U;
	static volatile int32_t t41 = 0;

	t41 = (x309<<((x310/x311)<=x312));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x313 = INT8_MAX;
	volatile int16_t x314 = INT16_MIN;
	volatile uint8_t x316 = UINT8_MAX;
	int32_t t42 = 961;

	t42 = (x313<<((x314/x315)<=x316));

	if (t42 != 254) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x317 = UINT8_MAX;
	static volatile uint16_t x318 = 47U;
	int32_t x319 = -32677827;
	volatile int32_t t43 = 206678;

	t43 = (x317<<((x318/x319)<=x320));

	if (t43 != 510) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x321 = 1U;
	int16_t x322 = INT16_MIN;
	uint8_t x323 = UINT8_MAX;
	int32_t x324 = -4933;
	volatile int32_t t44 = -9;

	t44 = (x321<<((x322/x323)<=x324));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x329 = UINT32_MAX;
	int32_t x330 = INT32_MIN;
	volatile int8_t x331 = INT8_MIN;
	static int8_t x332 = -10;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = (x329<<((x330/x331)<=x332));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x345 = UINT8_MAX;
	int16_t x346 = INT16_MIN;
	uint8_t x348 = 20U;

	t46 = (x345<<((x346/x347)<=x348));

	if (t46 != 510) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x353 = 1257364628566946561LL;
	uint16_t x354 = UINT16_MAX;
	static int32_t x355 = -1;
	uint16_t x356 = 0U;
	static volatile int64_t t47 = -403269437614636LL;

	t47 = (x353<<((x354/x355)<=x356));

	if (t47 != 2514729257133893122LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x360 = 1877578U;
	volatile uint32_t t48 = 103677U;

	t48 = (x357<<((x358/x359)<=x360));

	if (t48 != 4294967294U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x361 = 0U;
	int64_t x362 = INT64_MIN;
	uint8_t x363 = 59U;
	int8_t x364 = -56;
	volatile int32_t t49 = -3941;

	t49 = (x361<<((x362/x363)<=x364));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x369 = INT8_MAX;
	uint8_t x370 = 0U;
	int64_t x371 = -1LL;
	static uint32_t x372 = UINT32_MAX;
	static volatile int32_t t50 = 219721607;

	t50 = (x369<<((x370/x371)<=x372));

	if (t50 != 254) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x373 = 347331833U;
	int8_t x375 = -3;
	static uint8_t x376 = 0U;
	static uint32_t t51 = 393254471U;

	t51 = (x373<<((x374/x375)<=x376));

	if (t51 != 694663666U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x385 = 0U;
	int16_t x386 = -1;
	static int64_t x388 = INT64_MIN;
	int32_t t52 = 4909251;

	t52 = (x385<<((x386/x387)<=x388));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x397 = 1U;
	static int16_t x398 = INT16_MIN;
	volatile int32_t x399 = -1;
	volatile int32_t x400 = INT32_MIN;
	int32_t t53 = 3417073;

	t53 = (x397<<((x398/x399)<=x400));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x405 = 1;
	int8_t x406 = 1;
	int16_t x407 = INT16_MAX;
	uint16_t x408 = 0U;
	int32_t t54 = -571222;

	t54 = (x405<<((x406/x407)<=x408));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x413 = UINT64_MAX;
	uint8_t x414 = UINT8_MAX;
	static uint32_t x415 = UINT32_MAX;
	int8_t x416 = -1;
	volatile uint64_t t55 = 27157531918442175LLU;

	t55 = (x413<<((x414/x415)<=x416));

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x417 = 53U;
	static volatile int32_t x418 = INT32_MAX;
	static int16_t x419 = INT16_MAX;
	int64_t x420 = INT64_MIN;
	volatile int32_t t56 = 339780;

	t56 = (x417<<((x418/x419)<=x420));

	if (t56 != 53) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x429 = INT16_MAX;
	volatile int8_t x431 = INT8_MIN;
	int32_t t57 = 3620525;

	t57 = (x429<<((x430/x431)<=x432));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x445 = UINT64_MAX;
	int16_t x446 = INT16_MIN;
	static volatile int8_t x448 = 21;
	static uint64_t t58 = 12399104LLU;

	t58 = (x445<<((x446/x447)<=x448));

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x453 = INT16_MAX;
	volatile int16_t x456 = -1;
	volatile int32_t t59 = -1480856;

	t59 = (x453<<((x454/x455)<=x456));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x457 = 1338364U;
	uint32_t x458 = 138U;
	int16_t x459 = INT16_MAX;
	int16_t x460 = -1;

	t60 = (x457<<((x458/x459)<=x460));

	if (t60 != 2676728U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x461 = 105U;
	uint64_t x462 = 1049775718878782LLU;
	int16_t x463 = INT16_MIN;
	volatile int32_t x464 = INT32_MIN;

	t61 = (x461<<((x462/x463)<=x464));

	if (t61 != 210) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x465 = INT8_MAX;
	volatile int32_t x467 = -1;
	static int64_t x468 = 4369796239LL;
	volatile int32_t t62 = 202546758;

	t62 = (x465<<((x466/x467)<=x468));

	if (t62 != 254) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x485 = 27;
	static int16_t x487 = INT16_MAX;
	uint16_t x488 = 14U;
	int32_t t63 = -61;

	t63 = (x485<<((x486/x487)<=x488));

	if (t63 != 54) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x489 = 8U;
	uint32_t x490 = 3179403U;
	int32_t x491 = -1;
	volatile uint32_t t64 = 1308767U;

	t64 = (x489<<((x490/x491)<=x492));

	if (t64 != 16U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x497 = UINT32_MAX;
	int8_t x498 = INT8_MIN;
	uint16_t x499 = UINT16_MAX;
	volatile int8_t x500 = 1;
	volatile uint32_t t65 = 693U;

	t65 = (x497<<((x498/x499)<=x500));

	if (t65 != 4294967294U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x513 = UINT16_MAX;
	int8_t x514 = 2;
	static uint64_t x515 = 45LLU;
	int32_t x516 = -1;
	int32_t t66 = -224147;

	t66 = (x513<<((x514/x515)<=x516));

	if (t66 != 131070) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x537 = 0;
	uint64_t x538 = 2574165437466LLU;
	int16_t x539 = INT16_MIN;
	int8_t x540 = INT8_MAX;
	int32_t t67 = -176;

	t67 = (x537<<((x538/x539)<=x540));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x557 = 1003052U;
	volatile int8_t x558 = INT8_MIN;
	static volatile int8_t x559 = INT8_MAX;
	int16_t x560 = 0;

	t68 = (x557<<((x558/x559)<=x560));

	if (t68 != 2006104U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x565 = 1;
	int8_t x566 = INT8_MIN;
	uint64_t x568 = 47550571LLU;
	int32_t t69 = -43;

	t69 = (x565<<((x566/x567)<=x568));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x569 = 75905;
	static volatile int64_t x571 = INT64_MIN;
	int32_t x572 = -1;
	static volatile int32_t t70 = 33250;

	t70 = (x569<<((x570/x571)<=x572));

	if (t70 != 75905) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x581 = UINT64_MAX;
	int32_t x582 = INT32_MIN;
	uint16_t x583 = 10730U;
	uint16_t x584 = UINT16_MAX;
	volatile uint64_t t71 = 13773067LLU;

	t71 = (x581<<((x582/x583)<=x584));

	if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x589 = 4U;
	static int16_t x590 = -1319;
	int64_t x591 = 181000LL;
	int16_t x592 = INT16_MIN;
	static int32_t t72 = -178;

	t72 = (x589<<((x590/x591)<=x592));

	if (t72 != 4) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x594 = INT8_MIN;

	t73 = (x593<<((x594/x595)<=x596));

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x597 = INT8_MAX;
	volatile int16_t x599 = INT16_MAX;
	uint64_t x600 = 83628413LLU;
	volatile int32_t t74 = 892;

	t74 = (x597<<((x598/x599)<=x600));

	if (t74 != 254) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x607 = UINT8_MAX;
	int8_t x608 = -15;
	uint32_t t75 = 927U;

	t75 = (x605<<((x606/x607)<=x608));

	if (t75 != 9U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x609 = INT32_MAX;
	volatile uint8_t x611 = 119U;
	volatile int32_t x612 = -1;
	volatile int32_t t76 = INT32_MAX;

	t76 = (x609<<((x610/x611)<=x612));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x613 = INT8_MAX;
	uint8_t x614 = 55U;
	int32_t x615 = INT32_MAX;
	int32_t x616 = 46025768;

	t77 = (x613<<((x614/x615)<=x616));

	if (t77 != 254) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x617 = 119446936;
	int32_t x618 = INT32_MIN;
	uint16_t x619 = 2017U;
	uint64_t x620 = UINT64_MAX;
	volatile int32_t t78 = 19583;

	t78 = (x617<<((x618/x619)<=x620));

	if (t78 != 238893872) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x622 = INT32_MIN;
	volatile int16_t x623 = INT16_MIN;
	volatile int32_t t79 = -5;

	t79 = (x621<<((x622/x623)<=x624));

	if (t79 != 10) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x629 = 197365236807125LLU;
	uint16_t x630 = UINT16_MAX;
	int32_t x631 = -17146341;
	volatile uint16_t x632 = 32U;

	t80 = (x629<<((x630/x631)<=x632));

	if (t80 != 394730473614250LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x646 = UINT16_MAX;
	volatile int64_t x647 = INT64_MAX;
	int64_t x648 = INT64_MIN;
	volatile uint32_t t81 = 4538843U;

	t81 = (x645<<((x646/x647)<=x648));

	if (t81 != 18337U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x649 = UINT32_MAX;
	int64_t x650 = -1LL;
	uint16_t x651 = UINT16_MAX;
	static volatile int32_t x652 = INT32_MIN;
	static volatile uint32_t t82 = UINT32_MAX;

	t82 = (x649<<((x650/x651)<=x652));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x657 = UINT16_MAX;
	static uint8_t x658 = 8U;
	uint16_t x659 = 670U;
	static volatile uint64_t x660 = UINT64_MAX;
	int32_t t83 = 245710;

	t83 = (x657<<((x658/x659)<=x660));

	if (t83 != 131070) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x665 = 273582072270687912LLU;
	int32_t x666 = INT32_MIN;
	int8_t x667 = 3;
	uint64_t t84 = 1583637676708849LLU;

	t84 = (x665<<((x666/x667)<=x668));

	if (t84 != 273582072270687912LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x677 = 5207U;
	static int64_t x678 = INT64_MAX;
	int8_t x679 = INT8_MIN;
	uint64_t x680 = 6013088086506794763LLU;
	static int32_t t85 = -155586;

	t85 = (x677<<((x678/x679)<=x680));

	if (t85 != 5207) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x681 = 32083U;
	int32_t x682 = 58;
	int8_t x683 = INT8_MIN;
	static volatile uint16_t x684 = 48U;
	volatile int32_t t86 = -3098;

	t86 = (x681<<((x682/x683)<=x684));

	if (t86 != 64166) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x685 = 35478540234LLU;
	volatile int32_t x686 = INT32_MIN;
	int64_t x687 = INT64_MAX;
	volatile uint16_t x688 = 17270U;
	uint64_t t87 = 6297909407LLU;

	t87 = (x685<<((x686/x687)<=x688));

	if (t87 != 70957080468LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x689 = INT8_MAX;
	int64_t x690 = INT64_MIN;
	int8_t x691 = INT8_MAX;
	static int32_t x692 = INT32_MIN;
	static int32_t t88 = 80224380;

	t88 = (x689<<((x690/x691)<=x692));

	if (t88 != 254) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x693 = 10U;
	int8_t x695 = INT8_MAX;
	int32_t x696 = INT32_MIN;
	int32_t t89 = -813879;

	t89 = (x693<<((x694/x695)<=x696));

	if (t89 != 20) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x697 = 3U;
	uint8_t x700 = 101U;

	t90 = (x697<<((x698/x699)<=x700));

	if (t90 != 6U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x714 = -791811026643274LL;
	static volatile int64_t x715 = INT64_MIN;
	volatile uint64_t x716 = 1LLU;
	static volatile int32_t t91 = -481915;

	t91 = (x713<<((x714/x715)<=x716));

	if (t91 != 65534) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x721 = 33789U;
	int8_t x722 = INT8_MIN;
	static uint32_t x723 = 7339248U;
	volatile int16_t x724 = INT16_MAX;
	uint32_t t92 = 36U;

	t92 = (x721<<((x722/x723)<=x724));

	if (t92 != 67578U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x725 = 92793451LLU;
	static int8_t x726 = -1;
	int8_t x727 = -1;
	int64_t x728 = -1LL;
	static volatile uint64_t t93 = 2236228850990044LLU;

	t93 = (x725<<((x726/x727)<=x728));

	if (t93 != 92793451LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x729 = 233;
	int8_t x730 = -1;
	static volatile int64_t x731 = INT64_MIN;
	int64_t x732 = INT64_MAX;
	int32_t t94 = 1570269;

	t94 = (x729<<((x730/x731)<=x732));

	if (t94 != 466) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x733 = 0;
	int8_t x734 = INT8_MIN;
	volatile int32_t x735 = -6420;
	int8_t x736 = INT8_MAX;
	int32_t t95 = 30512;

	t95 = (x733<<((x734/x735)<=x736));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x741 = INT8_MAX;
	int32_t x742 = INT32_MIN;
	int16_t x743 = 1;
	volatile uint64_t x744 = 415622664LLU;
	int32_t t96 = -7;

	t96 = (x741<<((x742/x743)<=x744));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x745 = 1;
	int64_t x746 = 1542747199199113LL;
	static int64_t x747 = -69072LL;
	int32_t t97 = -771;

	t97 = (x745<<((x746/x747)<=x748));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x750 = INT32_MIN;
	static volatile int64_t x752 = 739436367053749538LL;

	t98 = (x749<<((x750/x751)<=x752));

	if (t98 != 14631210) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x759 = 1932924461U;
	static int16_t x760 = INT16_MIN;
	uint32_t t99 = 1362382593U;

	t99 = (x757<<((x758/x759)<=x760));

	if (t99 != 3890U) { NG(); } else { ; }
	
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

