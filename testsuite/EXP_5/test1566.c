#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = UINT32_MAX;
int32_t t2 = -1;
volatile uint64_t x33 = UINT64_MAX;
uint64_t x57 = UINT64_MAX;
volatile int32_t x58 = -1;
uint8_t x67 = UINT8_MAX;
volatile int16_t x70 = 422;
static volatile int32_t t8 = 1;
volatile uint16_t x85 = UINT16_MAX;
int32_t x90 = INT32_MIN;
static int8_t x93 = INT8_MAX;
int8_t x96 = INT8_MAX;
static uint32_t x125 = 10246826U;
uint32_t t15 = 84U;
volatile int8_t x151 = 3;
int64_t x154 = INT64_MIN;
static int32_t x155 = INT32_MIN;
int8_t x156 = INT8_MIN;
volatile int32_t t20 = -7;
int16_t x167 = INT16_MAX;
static uint64_t x180 = UINT64_MAX;
static int8_t x191 = INT8_MAX;
int64_t x195 = INT64_MIN;
int32_t x198 = 8029580;
static uint16_t x210 = UINT16_MAX;
int32_t t29 = -875894237;
volatile int32_t x223 = -3080;
static uint8_t x229 = 72U;
int64_t x271 = INT64_MIN;
volatile int32_t t34 = 697981248;
uint32_t x291 = UINT32_MAX;
int8_t x309 = INT8_MAX;
int8_t x312 = INT8_MIN;
int64_t x316 = INT64_MIN;
int16_t x337 = 117;
int16_t x340 = INT16_MAX;
uint32_t x346 = UINT32_MAX;
int64_t x363 = -50905264LL;
int64_t x364 = INT64_MIN;
volatile uint32_t x371 = UINT32_MAX;
int8_t x378 = INT8_MIN;
static int64_t t48 = 456361LL;
int8_t x399 = 1;
volatile int32_t x402 = INT32_MAX;
volatile uint32_t x405 = 18993475U;
int64_t x407 = INT64_MIN;
int64_t x409 = 269513057LL;
volatile int64_t t53 = 0LL;
int64_t x417 = 1675313307831043518LL;
uint8_t x422 = 7U;
uint64_t x437 = 281927650135648LLU;
volatile int64_t x438 = INT64_MIN;
uint64_t t60 = 84404304972LLU;
int16_t x461 = 44;
uint16_t x469 = 1U;
int16_t x472 = -1;
uint8_t x489 = 24U;
uint64_t x511 = 3789381679528678LLU;
static int16_t x517 = 3486;
int16_t x526 = INT16_MIN;
uint64_t x529 = 5065LLU;
static uint32_t x541 = UINT32_MAX;
int8_t x542 = INT8_MAX;
static int8_t x545 = INT8_MAX;
int8_t x546 = INT8_MAX;
int16_t x562 = INT16_MIN;
uint32_t x567 = UINT32_MAX;
uint8_t x576 = 14U;
uint16_t x577 = 7U;
uint16_t x578 = UINT16_MAX;
volatile int64_t x580 = -3110807040LL;
int32_t x596 = INT32_MIN;
static uint64_t x615 = 0LLU;
uint8_t x618 = UINT8_MAX;
uint8_t x625 = 15U;
int32_t t84 = 517669414;
volatile int64_t x636 = INT64_MIN;
volatile uint64_t t88 = 30LLU;
uint16_t x654 = 8U;
uint64_t x655 = 326LLU;
uint32_t t90 = 48022U;
int16_t x676 = INT16_MAX;
volatile uint64_t t91 = UINT64_MAX;
int32_t x690 = INT32_MIN;
volatile uint32_t x691 = 222U;
uint16_t x695 = 889U;
uint32_t t93 = 354461U;
int64_t x707 = INT64_MAX;
uint32_t x717 = UINT32_MAX;
int32_t t98 = INT32_MAX;
int32_t t99 = 1691525;


void f0(void) {
	int8_t x6 = INT8_MAX;
	int16_t x7 = INT16_MIN;
	static uint16_t x8 = UINT16_MAX;
	volatile uint32_t t0 = UINT32_MAX;

	t0 = (x5<<((x6<=x7)/x8));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x17 = 252;
	int32_t x18 = INT32_MAX;
	volatile int32_t x19 = INT32_MIN;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t1 = 497;

	t1 = (x17<<((x18<=x19)/x20));

	if (t1 != 252) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = UINT16_MAX;
	uint64_t x22 = 921440LLU;
	int32_t x23 = -1;
	uint64_t x24 = 55905738209469LLU;

	t2 = (x21<<((x22<=x23)/x24));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x29 = 139638521655365604LLU;
	int32_t x30 = 60259587;
	int16_t x31 = -1;
	int32_t x32 = -2247551;
	volatile uint64_t t3 = 23773457232564068LLU;

	t3 = (x29<<((x30<=x31)/x32));

	if (t3 != 139638521655365604LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x34 = INT16_MIN;
	int8_t x35 = INT8_MIN;
	int64_t x36 = 6172659762575LL;
	uint64_t t4 = UINT64_MAX;

	t4 = (x33<<((x34<=x35)/x36));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x49 = 844988;
	int8_t x50 = -2;
	int32_t x51 = INT32_MIN;
	static int16_t x52 = INT16_MIN;
	static int32_t t5 = 46080140;

	t5 = (x49<<((x50<=x51)/x52));

	if (t5 != 844988) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x59 = -2280174;
	static int64_t x60 = 1LL;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x57<<((x58<=x59)/x60));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x65 = 1901641258U;
	static volatile int16_t x66 = INT16_MAX;
	volatile uint16_t x68 = 888U;
	uint32_t t7 = 41U;

	t7 = (x65<<((x66<=x67)/x68));

	if (t7 != 1901641258U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x69 = 13U;
	int64_t x71 = 4LL;
	int16_t x72 = -1;

	t8 = (x69<<((x70<=x71)/x72));

	if (t8 != 13) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x86 = -6;
	int32_t x87 = INT32_MIN;
	int16_t x88 = 3523;
	volatile int32_t t9 = -8657216;

	t9 = (x85<<((x86<=x87)/x88));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x89 = 0;
	int16_t x91 = INT16_MIN;
	volatile int16_t x92 = INT16_MIN;
	int32_t t10 = 172;

	t10 = (x89<<((x90<=x91)/x92));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x94 = 1699372055926926315LLU;
	uint8_t x95 = 62U;
	volatile int32_t t11 = 467284;

	t11 = (x93<<((x94<=x95)/x96));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x97 = 2;
	uint64_t x98 = UINT64_MAX;
	uint64_t x99 = UINT64_MAX;
	static uint64_t x100 = UINT64_MAX;
	static volatile int32_t t12 = -32656;

	t12 = (x97<<((x98<=x99)/x100));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x105 = UINT64_MAX;
	static int8_t x106 = INT8_MAX;
	static uint8_t x107 = 0U;
	static int64_t x108 = -1LL;
	uint64_t t13 = UINT64_MAX;

	t13 = (x105<<((x106<=x107)/x108));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x113 = UINT8_MAX;
	int8_t x114 = INT8_MIN;
	int16_t x115 = 7;
	static volatile uint16_t x116 = 1398U;
	volatile int32_t t14 = 423;

	t14 = (x113<<((x114<=x115)/x116));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x126 = INT8_MAX;
	int32_t x127 = INT32_MIN;
	int8_t x128 = INT8_MIN;

	t15 = (x125<<((x126<=x127)/x128));

	if (t15 != 10246826U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x129 = 10U;
	volatile int16_t x130 = INT16_MAX;
	int64_t x131 = INT64_MAX;
	uint16_t x132 = 74U;
	volatile int32_t t16 = 163;

	t16 = (x129<<((x130<=x131)/x132));

	if (t16 != 10) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x133 = 65775569LL;
	int8_t x134 = -1;
	int32_t x135 = INT32_MAX;
	int64_t x136 = INT64_MIN;
	static int64_t t17 = -80502LL;

	t17 = (x133<<((x134<=x135)/x136));

	if (t17 != 65775569LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x145 = 24U;
	uint32_t x146 = 0U;
	static int8_t x147 = INT8_MIN;
	volatile int8_t x148 = 3;
	int32_t t18 = 1872241;

	t18 = (x145<<((x146<=x147)/x148));

	if (t18 != 24) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x149 = INT64_MAX;
	volatile int8_t x150 = 0;
	static int8_t x152 = INT8_MAX;
	static volatile int64_t t19 = INT64_MAX;

	t19 = (x149<<((x150<=x151)/x152));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x153 = 3;

	t20 = (x153<<((x154<=x155)/x156));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x157 = INT8_MAX;
	uint16_t x158 = 393U;
	int8_t x159 = -1;
	int32_t x160 = -1;
	volatile int32_t t21 = 458736790;

	t21 = (x157<<((x158<=x159)/x160));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x161 = UINT32_MAX;
	int8_t x162 = INT8_MIN;
	uint16_t x163 = 57U;
	uint32_t x164 = 34772U;
	uint32_t t22 = UINT32_MAX;

	t22 = (x161<<((x162<=x163)/x164));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x165 = INT8_MAX;
	volatile int64_t x166 = 1686034LL;
	static int8_t x168 = -1;
	int32_t t23 = -1016343;

	t23 = (x165<<((x166<=x167)/x168));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x177 = 13711U;
	int64_t x178 = -138586707LL;
	volatile int32_t x179 = -1;
	volatile int32_t t24 = -199766680;

	t24 = (x177<<((x178<=x179)/x180));

	if (t24 != 13711) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x189 = 953U;
	static uint64_t x190 = 5861519364371042LLU;
	volatile int64_t x192 = INT64_MIN;
	uint32_t t25 = 564513U;

	t25 = (x189<<((x190<=x191)/x192));

	if (t25 != 953U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x193 = 1U;
	static int64_t x194 = 34967839801215LL;
	int16_t x196 = INT16_MAX;
	static int32_t t26 = -931907343;

	t26 = (x193<<((x194<=x195)/x196));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x197 = 1U;
	uint8_t x199 = 2U;
	int8_t x200 = INT8_MIN;
	int32_t t27 = -1068;

	t27 = (x197<<((x198<=x199)/x200));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x209 = 36810LLU;
	int32_t x211 = INT32_MIN;
	static volatile uint16_t x212 = 21034U;
	static uint64_t t28 = 94946878029LLU;

	t28 = (x209<<((x210<=x211)/x212));

	if (t28 != 36810LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x213 = UINT16_MAX;
	uint8_t x214 = 9U;
	int32_t x215 = INT32_MIN;
	volatile int64_t x216 = -1007LL;

	t29 = (x213<<((x214<=x215)/x216));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x221 = 2113U;
	uint64_t x222 = UINT64_MAX;
	static uint8_t x224 = 2U;
	int32_t t30 = 1;

	t30 = (x221<<((x222<=x223)/x224));

	if (t30 != 2113) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x230 = UINT16_MAX;
	static int32_t x231 = INT32_MAX;
	int64_t x232 = INT64_MIN;
	int32_t t31 = -47692555;

	t31 = (x229<<((x230<=x231)/x232));

	if (t31 != 72) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x261 = 3;
	uint8_t x262 = UINT8_MAX;
	static int16_t x263 = INT16_MIN;
	volatile int64_t x264 = INT64_MIN;
	volatile int32_t t32 = -360;

	t32 = (x261<<((x262<=x263)/x264));

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x269 = 2LLU;
	uint32_t x270 = UINT32_MAX;
	int32_t x272 = INT32_MIN;
	static volatile uint64_t t33 = 0LLU;

	t33 = (x269<<((x270<=x271)/x272));

	if (t33 != 2LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x281 = 104U;
	static uint8_t x282 = UINT8_MAX;
	int16_t x283 = -1;
	int64_t x284 = INT64_MAX;

	t34 = (x281<<((x282<=x283)/x284));

	if (t34 != 104) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x285 = 4U;
	uint64_t x286 = 3809799763943554LLU;
	int8_t x287 = INT8_MIN;
	uint32_t x288 = 6625996U;
	uint32_t t35 = 7545105U;

	t35 = (x285<<((x286<=x287)/x288));

	if (t35 != 4U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x289 = 0U;
	int64_t x290 = 0LL;
	volatile int32_t x292 = INT32_MAX;
	volatile int32_t t36 = -929367;

	t36 = (x289<<((x290<=x291)/x292));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x293 = UINT16_MAX;
	int64_t x294 = -63LL;
	int64_t x295 = 3152492031684960LL;
	uint16_t x296 = 108U;
	static int32_t t37 = -16344;

	t37 = (x293<<((x294<=x295)/x296));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x310 = -6;
	int8_t x311 = -1;
	volatile int32_t t38 = -34066588;

	t38 = (x309<<((x310<=x311)/x312));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x313 = INT32_MAX;
	int8_t x314 = INT8_MAX;
	int64_t x315 = -1LL;
	int32_t t39 = INT32_MAX;

	t39 = (x313<<((x314<=x315)/x316));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x317 = INT8_MAX;
	int32_t x318 = INT32_MIN;
	int8_t x319 = INT8_MIN;
	static uint32_t x320 = 1490290U;
	volatile int32_t t40 = -3543390;

	t40 = (x317<<((x318<=x319)/x320));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x329 = 0U;
	static int64_t x330 = -1LL;
	uint64_t x331 = 720639902382029717LLU;
	int16_t x332 = INT16_MIN;
	int32_t t41 = 65;

	t41 = (x329<<((x330<=x331)/x332));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MIN;
	int32_t t42 = -89004;

	t42 = (x337<<((x338<=x339)/x340));

	if (t42 != 117) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x345 = 7U;
	int16_t x347 = -6;
	uint32_t x348 = 623U;
	volatile int32_t t43 = 1676186;

	t43 = (x345<<((x346<=x347)/x348));

	if (t43 != 7) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x357 = 653U;
	uint32_t x358 = 6847U;
	static int16_t x359 = -197;
	int8_t x360 = INT8_MAX;
	int32_t t44 = 250250087;

	t44 = (x357<<((x358<=x359)/x360));

	if (t44 != 653) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x361 = 114LLU;
	int8_t x362 = INT8_MAX;
	uint64_t t45 = 2698827984751139952LLU;

	t45 = (x361<<((x362<=x363)/x364));

	if (t45 != 114LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x369 = 6;
	static uint32_t x370 = 13U;
	static int64_t x372 = INT64_MAX;
	volatile int32_t t46 = -1;

	t46 = (x369<<((x370<=x371)/x372));

	if (t46 != 6) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x373 = 15;
	uint8_t x374 = 1U;
	volatile int8_t x375 = INT8_MIN;
	uint8_t x376 = 3U;
	int32_t t47 = 562932;

	t47 = (x373<<((x374<=x375)/x376));

	if (t47 != 15) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x377 = 28056910LL;
	static int8_t x379 = 0;
	volatile int16_t x380 = -337;

	t48 = (x377<<((x378<=x379)/x380));

	if (t48 != 28056910LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x389 = 71738872;
	int8_t x390 = -1;
	int16_t x391 = INT16_MIN;
	int32_t x392 = INT32_MIN;
	int32_t t49 = -1690;

	t49 = (x389<<((x390<=x391)/x392));

	if (t49 != 71738872) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x397 = 1580U;
	uint8_t x398 = 11U;
	int64_t x400 = 243584151LL;
	volatile int32_t t50 = -1971046;

	t50 = (x397<<((x398<=x399)/x400));

	if (t50 != 1580) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x401 = INT32_MAX;
	volatile int16_t x403 = INT16_MIN;
	int32_t x404 = INT32_MIN;
	volatile int32_t t51 = INT32_MAX;

	t51 = (x401<<((x402<=x403)/x404));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x406 = INT32_MAX;
	volatile int32_t x408 = INT32_MIN;
	static uint32_t t52 = 440U;

	t52 = (x405<<((x406<=x407)/x408));

	if (t52 != 18993475U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x410 = 19113316900LL;
	static uint16_t x411 = 866U;
	static int8_t x412 = -1;

	t53 = (x409<<((x410<=x411)/x412));

	if (t53 != 269513057LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x413 = 1U;
	volatile int16_t x414 = -1;
	int64_t x415 = INT64_MIN;
	static int16_t x416 = INT16_MIN;
	int32_t t54 = 125688;

	t54 = (x413<<((x414<=x415)/x416));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x418 = 5U;
	int16_t x419 = INT16_MIN;
	static uint8_t x420 = 84U;
	volatile int64_t t55 = 47617294LL;

	t55 = (x417<<((x418<=x419)/x420));

	if (t55 != 1675313307831043518LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x421 = 2U;
	static int16_t x423 = -1;
	int64_t x424 = -1LL;
	static volatile int32_t t56 = 8653827;

	t56 = (x421<<((x422<=x423)/x424));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x425 = 49U;
	static int64_t x426 = 15024883LL;
	volatile int16_t x427 = INT16_MIN;
	uint8_t x428 = 14U;
	int32_t t57 = -59811533;

	t57 = (x425<<((x426<=x427)/x428));

	if (t57 != 49) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x429 = 12U;
	int8_t x430 = 0;
	static int16_t x431 = -77;
	int32_t x432 = INT32_MIN;
	int32_t t58 = -1899;

	t58 = (x429<<((x430<=x431)/x432));

	if (t58 != 12) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x439 = UINT64_MAX;
	uint8_t x440 = 51U;
	uint64_t t59 = 5387637458433LLU;

	t59 = (x437<<((x438<=x439)/x440));

	if (t59 != 281927650135648LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x453 = 191819281LLU;
	uint8_t x454 = 68U;
	int8_t x455 = -1;
	volatile int32_t x456 = INT32_MIN;

	t60 = (x453<<((x454<=x455)/x456));

	if (t60 != 191819281LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x462 = INT64_MIN;
	uint16_t x463 = 1347U;
	static int32_t x464 = -1333;
	int32_t t61 = 229999033;

	t61 = (x461<<((x462<=x463)/x464));

	if (t61 != 44) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x470 = INT32_MAX;
	int16_t x471 = -1;
	volatile int32_t t62 = 88752;

	t62 = (x469<<((x470<=x471)/x472));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x477 = INT32_MAX;
	uint32_t x478 = UINT32_MAX;
	int32_t x479 = INT32_MIN;
	int64_t x480 = INT64_MIN;
	volatile int32_t t63 = INT32_MAX;

	t63 = (x477<<((x478<=x479)/x480));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x481 = INT16_MAX;
	int32_t x482 = INT32_MIN;
	volatile int64_t x483 = 14LL;
	int32_t x484 = INT32_MIN;
	int32_t t64 = 521221;

	t64 = (x481<<((x482<=x483)/x484));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x490 = INT16_MIN;
	uint64_t x491 = 7459036289386LLU;
	static uint64_t x492 = UINT64_MAX;
	volatile int32_t t65 = -29;

	t65 = (x489<<((x490<=x491)/x492));

	if (t65 != 24) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x497 = 0U;
	int32_t x498 = -101249482;
	int16_t x499 = INT16_MIN;
	int16_t x500 = -88;
	int32_t t66 = 867445490;

	t66 = (x497<<((x498<=x499)/x500));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x505 = 112415855762994102LLU;
	int16_t x506 = INT16_MIN;
	uint8_t x507 = 31U;
	static volatile int32_t x508 = INT32_MIN;
	static uint64_t t67 = 345558736908472157LLU;

	t67 = (x505<<((x506<=x507)/x508));

	if (t67 != 112415855762994102LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x509 = 11868127405388LL;
	int16_t x510 = -1;
	int8_t x512 = -1;
	static int64_t t68 = 7846701LL;

	t68 = (x509<<((x510<=x511)/x512));

	if (t68 != 11868127405388LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x518 = INT64_MAX;
	uint16_t x519 = 744U;
	int32_t x520 = -1;
	volatile int32_t t69 = -3755;

	t69 = (x517<<((x518<=x519)/x520));

	if (t69 != 3486) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x525 = 0;
	volatile int64_t x527 = INT64_MAX;
	int32_t x528 = 1;
	static int32_t t70 = -5086123;

	t70 = (x525<<((x526<=x527)/x528));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x530 = INT16_MIN;
	static uint32_t x531 = 35215832U;
	int64_t x532 = INT64_MIN;
	volatile uint64_t t71 = 50LLU;

	t71 = (x529<<((x530<=x531)/x532));

	if (t71 != 5065LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x543 = -1;
	int64_t x544 = INT64_MIN;
	uint32_t t72 = UINT32_MAX;

	t72 = (x541<<((x542<=x543)/x544));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x547 = 28007U;
	int64_t x548 = INT64_MIN;
	int32_t t73 = 0;

	t73 = (x545<<((x546<=x547)/x548));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x553 = INT64_MAX;
	volatile int32_t x554 = INT32_MIN;
	static int16_t x555 = INT16_MIN;
	int32_t x556 = INT32_MAX;
	volatile int64_t t74 = INT64_MAX;

	t74 = (x553<<((x554<=x555)/x556));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x561 = INT64_MAX;
	volatile int8_t x563 = INT8_MIN;
	volatile uint8_t x564 = UINT8_MAX;
	volatile int64_t t75 = INT64_MAX;

	t75 = (x561<<((x562<=x563)/x564));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x565 = INT32_MAX;
	int8_t x566 = INT8_MIN;
	static int16_t x568 = INT16_MIN;
	volatile int32_t t76 = INT32_MAX;

	t76 = (x565<<((x566<=x567)/x568));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x573 = 940486147429LLU;
	volatile uint8_t x574 = UINT8_MAX;
	static int8_t x575 = -1;
	static uint64_t t77 = 123338544LLU;

	t77 = (x573<<((x574<=x575)/x576));

	if (t77 != 940486147429LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x579 = -1055075378746214LL;
	int32_t t78 = 0;

	t78 = (x577<<((x578<=x579)/x580));

	if (t78 != 7) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x585 = INT16_MAX;
	static int8_t x586 = INT8_MIN;
	int8_t x587 = 5;
	uint64_t x588 = 14260710429834275LLU;
	volatile int32_t t79 = 26154;

	t79 = (x585<<((x586<=x587)/x588));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x589 = INT8_MAX;
	static volatile uint32_t x590 = 35U;
	volatile int64_t x591 = INT64_MIN;
	static uint16_t x592 = 159U;
	volatile int32_t t80 = -486888;

	t80 = (x589<<((x590<=x591)/x592));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x593 = INT8_MAX;
	int16_t x594 = INT16_MIN;
	static uint8_t x595 = 24U;
	volatile int32_t t81 = -1753050;

	t81 = (x593<<((x594<=x595)/x596));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x613 = INT8_MAX;
	static int16_t x614 = INT16_MAX;
	int32_t x616 = -1;
	int32_t t82 = -147;

	t82 = (x613<<((x614<=x615)/x616));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x617 = UINT8_MAX;
	int32_t x619 = INT32_MAX;
	int32_t x620 = -4885;
	volatile int32_t t83 = -28685;

	t83 = (x617<<((x618<=x619)/x620));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x626 = -7;
	int64_t x627 = 61019471443923280LL;
	int16_t x628 = INT16_MIN;

	t84 = (x625<<((x626<=x627)/x628));

	if (t84 != 15) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x629 = 4441835313888647448LLU;
	volatile uint16_t x630 = UINT16_MAX;
	uint32_t x631 = 11354U;
	int32_t x632 = -962398;
	volatile uint64_t t85 = 29LLU;

	t85 = (x629<<((x630<=x631)/x632));

	if (t85 != 4441835313888647448LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x633 = 27689LLU;
	int64_t x634 = -1LL;
	static int16_t x635 = INT16_MAX;
	volatile uint64_t t86 = 2361894730LLU;

	t86 = (x633<<((x634<=x635)/x636));

	if (t86 != 27689LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x637 = 254520LL;
	static int64_t x638 = INT64_MIN;
	int8_t x639 = -1;
	static uint64_t x640 = UINT64_MAX;
	int64_t t87 = -1833089876897LL;

	t87 = (x637<<((x638<=x639)/x640));

	if (t87 != 254520LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x645 = 114015LLU;
	int32_t x646 = INT32_MIN;
	volatile uint16_t x647 = 1686U;
	uint16_t x648 = 193U;

	t88 = (x645<<((x646<=x647)/x648));

	if (t88 != 114015LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x653 = UINT16_MAX;
	static uint8_t x656 = 10U;
	static int32_t t89 = 37742;

	t89 = (x653<<((x654<=x655)/x656));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x665 = 2035U;
	uint8_t x666 = 58U;
	static int8_t x667 = 3;
	volatile int64_t x668 = -14837879513078LL;

	t90 = (x665<<((x666<=x667)/x668));

	if (t90 != 2035U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x673 = UINT64_MAX;
	int32_t x674 = 544636894;
	uint16_t x675 = 13U;

	t91 = (x673<<((x674<=x675)/x676));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x689 = INT8_MAX;
	int16_t x692 = -7970;
	volatile int32_t t92 = -45675;

	t92 = (x689<<((x690<=x691)/x692));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x693 = 4425484U;
	int16_t x694 = INT16_MIN;
	int64_t x696 = INT64_MIN;

	t93 = (x693<<((x694<=x695)/x696));

	if (t93 != 4425484U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x697 = UINT8_MAX;
	int64_t x698 = INT64_MAX;
	int16_t x699 = INT16_MIN;
	uint32_t x700 = 9022U;
	volatile int32_t t94 = -24403169;

	t94 = (x697<<((x698<=x699)/x700));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x705 = UINT32_MAX;
	volatile int32_t x706 = -49270;
	volatile int64_t x708 = INT64_MIN;
	volatile uint32_t t95 = UINT32_MAX;

	t95 = (x705<<((x706<=x707)/x708));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x709 = 45;
	volatile int32_t x710 = INT32_MIN;
	uint16_t x711 = UINT16_MAX;
	uint8_t x712 = 72U;
	volatile int32_t t96 = 1454923;

	t96 = (x709<<((x710<=x711)/x712));

	if (t96 != 45) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x718 = -16;
	static volatile int32_t x719 = 6;
	int8_t x720 = -17;
	uint32_t t97 = UINT32_MAX;

	t97 = (x717<<((x718<=x719)/x720));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x721 = INT32_MAX;
	int32_t x722 = INT32_MIN;
	int64_t x723 = INT64_MAX;
	int8_t x724 = INT8_MAX;

	t98 = (x721<<((x722<=x723)/x724));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x725 = UINT8_MAX;
	uint64_t x726 = 33899904237378LLU;
	static uint8_t x727 = 3U;
	int16_t x728 = 13;

	t99 = (x725<<((x726<=x727)/x728));

	if (t99 != 255) { NG(); } else { ; }
	
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

