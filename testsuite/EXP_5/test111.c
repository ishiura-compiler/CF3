#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x14 = 113436002LLU;
volatile uint64_t t0 = 112780097217327143LLU;
static volatile uint8_t x29 = UINT8_MAX;
volatile int32_t x36 = INT32_MAX;
volatile uint32_t t4 = 509609U;
volatile int64_t t5 = -1172874960612041LL;
int16_t x48 = 1;
uint16_t x61 = UINT16_MAX;
static uint16_t x66 = 54U;
volatile int64_t x82 = -27912140490LL;
int64_t x84 = 170004589LL;
int8_t x101 = 0;
uint16_t x103 = 34U;
uint64_t t12 = 39115LLU;
volatile int64_t x129 = INT64_MAX;
volatile uint64_t t17 = 766641LLU;
int32_t x172 = 142754507;
static int8_t x173 = INT8_MAX;
int16_t x176 = INT16_MIN;
volatile int16_t x204 = 7;
uint64_t x208 = 1325818LLU;
static int32_t x211 = INT32_MAX;
uint64_t x219 = UINT64_MAX;
uint16_t x226 = 5105U;
static volatile int16_t x227 = INT16_MIN;
int32_t t26 = -118769;
volatile int16_t x242 = 65;
uint64_t t27 = 193657212495LLU;
int16_t x268 = INT16_MIN;
uint32_t x277 = 10602415U;
volatile uint32_t x289 = 147093U;
static volatile int64_t x290 = -1LL;
int8_t x291 = INT8_MIN;
uint16_t x301 = 1159U;
uint16_t x311 = 14613U;
static volatile uint32_t t35 = 27476U;
int32_t x328 = -180;
volatile int8_t x331 = INT8_MIN;
volatile int64_t t39 = -2857680206241451875LL;
int16_t x346 = INT16_MIN;
int32_t x350 = INT32_MAX;
static uint16_t x357 = 7831U;
uint32_t x359 = 3U;
int32_t t42 = 58749063;
volatile int8_t x394 = INT8_MIN;
volatile uint32_t t46 = 185U;
static uint8_t x410 = 78U;
static volatile int16_t x421 = INT16_MAX;
int32_t x423 = 235280;
int32_t x424 = INT32_MAX;
volatile int32_t t49 = 719;
volatile int32_t x425 = INT32_MAX;
uint8_t x426 = UINT8_MAX;
volatile int16_t x428 = INT16_MAX;
volatile uint64_t t51 = UINT64_MAX;
int8_t x444 = -28;
uint16_t x449 = 5U;
int16_t x451 = INT16_MIN;
volatile int64_t x455 = -24869585514LL;
int64_t x458 = INT64_MAX;
uint8_t x460 = 24U;
uint64_t x461 = 11605LLU;
int64_t x462 = -1LL;
uint64_t x475 = 2LLU;
uint16_t x486 = 13329U;
volatile int64_t t60 = 291613257549433LL;
volatile int8_t x510 = -2;
int32_t x511 = -1;
uint8_t x518 = UINT8_MAX;
int16_t x522 = INT16_MIN;
int16_t x523 = INT16_MIN;
static uint16_t x526 = UINT16_MAX;
uint64_t x548 = 148419LLU;
volatile uint32_t t65 = UINT32_MAX;
uint16_t x557 = 11882U;
int16_t x559 = 72;
int8_t x586 = 32;
int64_t x587 = -1LL;
static int8_t x599 = INT8_MAX;
uint32_t x601 = UINT32_MAX;
int16_t x614 = INT16_MAX;
int32_t t75 = 0;
static int64_t t76 = 324LL;
uint64_t t77 = 2927624LLU;
int64_t x644 = INT64_MIN;
int16_t x654 = -5834;
uint8_t x656 = 9U;
volatile int8_t x675 = INT8_MIN;
volatile int32_t t82 = -62;
int8_t x729 = 55;
int64_t x731 = 731757706LL;
static uint16_t x749 = 215U;
int16_t x756 = INT16_MIN;
uint8_t x766 = 72U;
static uint32_t x769 = 4095738U;
int16_t x770 = 7;
int32_t t91 = -1583193;
uint16_t x792 = 4U;
volatile int32_t t93 = -97;
uint64_t x812 = 57611794LLU;
volatile uint16_t x837 = 12615U;
volatile uint8_t x841 = 24U;
int32_t x844 = INT32_MAX;
int64_t x846 = INT64_MIN;


void f0(void) {
	uint64_t x13 = 99LLU;
	uint8_t x15 = UINT8_MAX;
	volatile int8_t x16 = -1;

	t0 = (x13>>((x14+x15)<x16));

	if (t0 != 49LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x21 = INT8_MAX;
	static int16_t x22 = INT16_MAX;
	static int8_t x23 = INT8_MIN;
	static int16_t x24 = -1;
	int32_t t1 = -200088;

	t1 = (x21>>((x22+x23)<x24));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x25 = 1870775;
	volatile uint16_t x26 = UINT16_MAX;
	int8_t x27 = 0;
	int8_t x28 = INT8_MIN;
	int32_t t2 = 8118;

	t2 = (x25>>((x26+x27)<x28));

	if (t2 != 1870775) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x30 = UINT64_MAX;
	int8_t x31 = -15;
	int64_t x32 = INT64_MAX;
	static volatile int32_t t3 = -1475;

	t3 = (x29>>((x30+x31)<x32));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x33 = 22063922U;
	uint16_t x34 = 20U;
	volatile int8_t x35 = 0;

	t4 = (x33>>((x34+x35)<x36));

	if (t4 != 11031961U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x41 = 68963198LL;
	uint8_t x42 = 21U;
	uint16_t x43 = 1U;
	int8_t x44 = 63;

	t5 = (x41>>((x42+x43)<x44));

	if (t5 != 34481599LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x45 = 223312U;
	int64_t x46 = INT64_MIN;
	int16_t x47 = 4829;
	volatile uint32_t t6 = 291073759U;

	t6 = (x45>>((x46+x47)<x48));

	if (t6 != 111656U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x62 = -626368;
	static uint64_t x63 = 30093256783792LLU;
	uint16_t x64 = UINT16_MAX;
	static int32_t t7 = -221;

	t7 = (x61>>((x62+x63)<x64));

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x65 = UINT16_MAX;
	uint16_t x67 = 7U;
	int64_t x68 = -1LL;
	static int32_t t8 = 914650689;

	t8 = (x65>>((x66+x67)<x68));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x81 = 70198899554605LLU;
	uint16_t x83 = 1U;
	static uint64_t t9 = 2594950594241855LLU;

	t9 = (x81>>((x82+x83)<x84));

	if (t9 != 35099449777302LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x97 = 539744LL;
	static int8_t x98 = 1;
	int8_t x99 = 1;
	int32_t x100 = INT32_MIN;
	int64_t t10 = -575494LL;

	t10 = (x97>>((x98+x99)<x100));

	if (t10 != 539744LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x102 = 35U;
	int16_t x104 = INT16_MIN;
	int32_t t11 = 23;

	t11 = (x101>>((x102+x103)<x104));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x105 = 49LLU;
	static int32_t x106 = INT32_MIN;
	static uint16_t x107 = UINT16_MAX;
	static int32_t x108 = -1;

	t12 = (x105>>((x106+x107)<x108));

	if (t12 != 24LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x113 = 1U;
	int16_t x114 = -1;
	uint8_t x115 = 16U;
	int16_t x116 = INT16_MAX;
	int32_t t13 = -1416258;

	t13 = (x113>>((x114+x115)<x116));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x117 = UINT64_MAX;
	static int64_t x118 = -1LL;
	uint8_t x119 = 3U;
	volatile int64_t x120 = INT64_MIN;
	uint64_t t14 = UINT64_MAX;

	t14 = (x117>>((x118+x119)<x120));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x125 = 3736094U;
	static uint8_t x126 = 3U;
	uint8_t x127 = UINT8_MAX;
	int16_t x128 = 255;
	volatile uint32_t t15 = 5U;

	t15 = (x125>>((x126+x127)<x128));

	if (t15 != 3736094U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x130 = 982386942LL;
	static uint32_t x131 = 422U;
	uint8_t x132 = 4U;
	static volatile int64_t t16 = INT64_MAX;

	t16 = (x129>>((x130+x131)<x132));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x145 = 800324LLU;
	uint32_t x146 = 1434U;
	static uint16_t x147 = 11295U;
	uint32_t x148 = UINT32_MAX;

	t17 = (x145>>((x146+x147)<x148));

	if (t17 != 400162LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x157 = 25648364U;
	static volatile uint8_t x158 = UINT8_MAX;
	uint16_t x159 = 4U;
	volatile int32_t x160 = -2874243;
	uint32_t t18 = 636897U;

	t18 = (x157>>((x158+x159)<x160));

	if (t18 != 25648364U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x161 = 24;
	int16_t x162 = -875;
	volatile uint64_t x163 = 16430409153LLU;
	uint16_t x164 = 0U;
	volatile int32_t t19 = 73;

	t19 = (x161>>((x162+x163)<x164));

	if (t19 != 24) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x169 = 0U;
	uint8_t x170 = 6U;
	int64_t x171 = INT64_MIN;
	volatile int32_t t20 = 204;

	t20 = (x169>>((x170+x171)<x172));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x174 = INT32_MAX;
	int32_t x175 = -1;
	volatile int32_t t21 = -76532071;

	t21 = (x173>>((x174+x175)<x176));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x201 = 1LL;
	volatile int32_t x202 = -1588;
	uint32_t x203 = 758347049U;
	static volatile int64_t t22 = -199472754LL;

	t22 = (x201>>((x202+x203)<x204));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x205 = 14729547847LLU;
	volatile int64_t x206 = -3853535768763165LL;
	uint32_t x207 = 54U;
	uint64_t t23 = 24LLU;

	t23 = (x205>>((x206+x207)<x208));

	if (t23 != 14729547847LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x209 = INT32_MAX;
	int8_t x210 = INT8_MIN;
	uint32_t x212 = 1156686U;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x209>>((x210+x211)<x212));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x217 = 2LLU;
	uint8_t x218 = UINT8_MAX;
	int64_t x220 = -28556738459456210LL;
	uint64_t t25 = 6127893194LLU;

	t25 = (x217>>((x218+x219)<x220));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x225 = INT8_MAX;
	int16_t x228 = INT16_MIN;

	t26 = (x225>>((x226+x227)<x228));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x241 = 461871LLU;
	static volatile int64_t x243 = -2111890941LL;
	uint8_t x244 = 3U;

	t27 = (x241>>((x242+x243)<x244));

	if (t27 != 230935LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x253 = 152338;
	int32_t x254 = -12;
	uint32_t x255 = UINT32_MAX;
	uint32_t x256 = 29916U;
	int32_t t28 = 80217;

	t28 = (x253>>((x254+x255)<x256));

	if (t28 != 152338) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x261 = 9U;
	static int16_t x262 = -1;
	uint32_t x263 = 82U;
	int32_t x264 = -1;
	volatile int32_t t29 = 57609412;

	t29 = (x261>>((x262+x263)<x264));

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x265 = UINT16_MAX;
	static int16_t x266 = INT16_MIN;
	int16_t x267 = INT16_MIN;
	int32_t t30 = -2;

	t30 = (x265>>((x266+x267)<x268));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x269 = INT32_MAX;
	int16_t x270 = INT16_MIN;
	static int8_t x271 = INT8_MIN;
	int16_t x272 = 1;
	int32_t t31 = -6;

	t31 = (x269>>((x270+x271)<x272));

	if (t31 != 1073741823) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x278 = 526857626;
	int16_t x279 = -19;
	int64_t x280 = INT64_MIN;
	volatile uint32_t t32 = 3U;

	t32 = (x277>>((x278+x279)<x280));

	if (t32 != 10602415U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x292 = 7U;
	uint32_t t33 = 3678U;

	t33 = (x289>>((x290+x291)<x292));

	if (t33 != 73546U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x302 = 8062896LLU;
	volatile int16_t x303 = INT16_MIN;
	int16_t x304 = INT16_MAX;
	volatile int32_t t34 = 99;

	t34 = (x301>>((x302+x303)<x304));

	if (t34 != 1159) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x309 = 7U;
	int8_t x310 = -9;
	static int64_t x312 = -236736638LL;

	t35 = (x309>>((x310+x311)<x312));

	if (t35 != 7U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x317 = 18U;
	uint64_t x318 = 538422LLU;
	int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MAX;
	int32_t t36 = 10927;

	t36 = (x317>>((x318+x319)<x320));

	if (t36 != 18) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x325 = 192U;
	volatile int8_t x326 = 3;
	uint8_t x327 = 20U;
	volatile uint32_t t37 = 0U;

	t37 = (x325>>((x326+x327)<x328));

	if (t37 != 192U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x329 = INT16_MAX;
	int32_t x330 = -1;
	int16_t x332 = -5498;
	int32_t t38 = 403001409;

	t38 = (x329>>((x330+x331)<x332));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x337 = 95727LL;
	int8_t x338 = 1;
	static volatile int16_t x339 = 6397;
	uint16_t x340 = 64U;

	t39 = (x337>>((x338+x339)<x340));

	if (t39 != 95727LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x345 = 8;
	int32_t x347 = 104955;
	int8_t x348 = INT8_MIN;
	int32_t t40 = 0;

	t40 = (x345>>((x346+x347)<x348));

	if (t40 != 8) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x349 = INT16_MAX;
	static uint32_t x351 = 7U;
	static int8_t x352 = INT8_MIN;
	volatile int32_t t41 = 47711;

	t41 = (x349>>((x350+x351)<x352));

	if (t41 != 16383) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x358 = 9U;
	int64_t x360 = 63833LL;

	t42 = (x357>>((x358+x359)<x360));

	if (t42 != 3915) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x365 = 1879158;
	static uint16_t x366 = 5192U;
	int16_t x367 = INT16_MAX;
	volatile int8_t x368 = INT8_MAX;
	volatile int32_t t43 = -38;

	t43 = (x365>>((x366+x367)<x368));

	if (t43 != 1879158) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x381 = 7LLU;
	uint16_t x382 = UINT16_MAX;
	uint16_t x383 = 3U;
	int16_t x384 = INT16_MIN;
	volatile uint64_t t44 = 647831LLU;

	t44 = (x381>>((x382+x383)<x384));

	if (t44 != 7LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x385 = INT8_MAX;
	int32_t x386 = INT32_MAX;
	int32_t x387 = INT32_MIN;
	volatile int8_t x388 = INT8_MIN;
	int32_t t45 = -60;

	t45 = (x385>>((x386+x387)<x388));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x393 = 3U;
	int32_t x395 = 499531;
	int32_t x396 = INT32_MIN;

	t46 = (x393>>((x394+x395)<x396));

	if (t46 != 3U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x401 = 18U;
	int16_t x402 = 1;
	int32_t x403 = 32729;
	uint8_t x404 = 0U;
	static int32_t t47 = 834478;

	t47 = (x401>>((x402+x403)<x404));

	if (t47 != 18) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x409 = UINT8_MAX;
	volatile uint8_t x411 = 82U;
	static int8_t x412 = -1;
	static volatile int32_t t48 = 143;

	t48 = (x409>>((x410+x411)<x412));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x422 = -14LL;

	t49 = (x421>>((x422+x423)<x424));

	if (t49 != 16383) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x427 = -14;
	int32_t t50 = -727897556;

	t50 = (x425>>((x426+x427)<x428));

	if (t50 != 1073741823) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x437 = UINT64_MAX;
	int64_t x438 = 5470LL;
	int8_t x439 = INT8_MIN;
	static int32_t x440 = -30;

	t51 = (x437>>((x438+x439)<x440));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x441 = 1;
	int16_t x442 = 10;
	volatile int16_t x443 = INT16_MIN;
	int32_t t52 = 2;

	t52 = (x441>>((x442+x443)<x444));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x450 = INT16_MIN;
	int8_t x452 = INT8_MAX;
	int32_t t53 = -90447624;

	t53 = (x449>>((x450+x451)<x452));

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x453 = 0U;
	volatile uint32_t x454 = 1U;
	static uint8_t x456 = 11U;
	static volatile int32_t t54 = 508429854;

	t54 = (x453>>((x454+x455)<x456));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x457 = UINT8_MAX;
	int32_t x459 = INT32_MIN;
	int32_t t55 = -3374405;

	t55 = (x457>>((x458+x459)<x460));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x463 = UINT64_MAX;
	static int64_t x464 = INT64_MAX;
	uint64_t t56 = 4445347448952115747LLU;

	t56 = (x461>>((x462+x463)<x464));

	if (t56 != 11605LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x473 = UINT16_MAX;
	static volatile int64_t x474 = INT64_MIN;
	int32_t x476 = 7666012;
	volatile int32_t t57 = -5872257;

	t57 = (x473>>((x474+x475)<x476));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x481 = 20U;
	uint64_t x482 = UINT64_MAX;
	int16_t x483 = INT16_MIN;
	int32_t x484 = INT32_MIN;
	volatile int32_t t58 = -508653;

	t58 = (x481>>((x482+x483)<x484));

	if (t58 != 20) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x485 = UINT16_MAX;
	static int16_t x487 = INT16_MAX;
	static uint16_t x488 = UINT16_MAX;
	volatile int32_t t59 = 85;

	t59 = (x485>>((x486+x487)<x488));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x505 = 5LL;
	int8_t x506 = 25;
	int16_t x507 = -890;
	static int8_t x508 = 29;

	t60 = (x505>>((x506+x507)<x508));

	if (t60 != 2LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x509 = 28U;
	uint32_t x512 = UINT32_MAX;
	int32_t t61 = -17;

	t61 = (x509>>((x510+x511)<x512));

	if (t61 != 14) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x517 = UINT16_MAX;
	int8_t x519 = -1;
	volatile uint8_t x520 = 21U;
	static volatile int32_t t62 = -4;

	t62 = (x517>>((x518+x519)<x520));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x521 = 260136410;
	int64_t x524 = INT64_MIN;
	int32_t t63 = 224834;

	t63 = (x521>>((x522+x523)<x524));

	if (t63 != 260136410) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x525 = INT8_MAX;
	int64_t x527 = INT64_MIN;
	volatile uint8_t x528 = 111U;
	volatile int32_t t64 = 0;

	t64 = (x525>>((x526+x527)<x528));

	if (t64 != 63) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x545 = UINT32_MAX;
	volatile int16_t x546 = -1090;
	int64_t x547 = 5039363473LL;

	t65 = (x545>>((x546+x547)<x548));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x553 = INT64_MAX;
	uint32_t x554 = 45435U;
	volatile int8_t x555 = -1;
	int64_t x556 = -1LL;
	volatile int64_t t66 = INT64_MAX;

	t66 = (x553>>((x554+x555)<x556));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x558 = -1;
	uint32_t x560 = 182412U;
	volatile int32_t t67 = 190679769;

	t67 = (x557>>((x558+x559)<x560));

	if (t67 != 5941) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x565 = INT64_MAX;
	int8_t x566 = 10;
	uint16_t x567 = 9708U;
	int32_t x568 = -1626964;
	static volatile int64_t t68 = INT64_MAX;

	t68 = (x565>>((x566+x567)<x568));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x569 = INT64_MAX;
	uint16_t x570 = 55U;
	static int32_t x571 = INT32_MIN;
	static int8_t x572 = -4;
	int64_t t69 = -26696730LL;

	t69 = (x569>>((x570+x571)<x572));

	if (t69 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x585 = 2;
	int64_t x588 = INT64_MAX;
	int32_t t70 = -18199;

	t70 = (x585>>((x586+x587)<x588));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x593 = 51579438U;
	int16_t x594 = 268;
	int64_t x595 = -1LL;
	uint32_t x596 = UINT32_MAX;
	volatile uint32_t t71 = 405U;

	t71 = (x593>>((x594+x595)<x596));

	if (t71 != 25789719U) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x597 = INT32_MAX;
	int8_t x598 = -7;
	uint32_t x600 = 12U;
	static int32_t t72 = INT32_MAX;

	t72 = (x597>>((x598+x599)<x600));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x602 = 843175533U;
	volatile int64_t x603 = INT64_MIN;
	int16_t x604 = INT16_MAX;
	static uint32_t t73 = 395600U;

	t73 = (x601>>((x602+x603)<x604));

	if (t73 != 2147483647U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x609 = 2U;
	volatile uint8_t x610 = 36U;
	int8_t x611 = INT8_MAX;
	uint64_t x612 = 31101782981125LLU;
	uint32_t t74 = 377242U;

	t74 = (x609>>((x610+x611)<x612));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x613 = 0;
	uint16_t x615 = 0U;
	static uint8_t x616 = 77U;

	t75 = (x613>>((x614+x615)<x616));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x621 = 64430705937LL;
	uint64_t x622 = 493259740866241LLU;
	int64_t x623 = 0LL;
	int64_t x624 = 0LL;

	t76 = (x621>>((x622+x623)<x624));

	if (t76 != 64430705937LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x633 = 1032680801118740LLU;
	static int64_t x634 = 170438482810808999LL;
	static int8_t x635 = -1;
	volatile int64_t x636 = INT64_MAX;

	t77 = (x633>>((x634+x635)<x636));

	if (t77 != 516340400559370LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x641 = 2263;
	volatile int8_t x642 = INT8_MAX;
	int8_t x643 = -19;
	int32_t t78 = 3414093;

	t78 = (x641>>((x642+x643)<x644));

	if (t78 != 2263) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x653 = INT32_MAX;
	uint8_t x655 = 0U;
	volatile int32_t t79 = 86757;

	t79 = (x653>>((x654+x655)<x656));

	if (t79 != 1073741823) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x673 = INT8_MAX;
	static volatile uint8_t x674 = 41U;
	static uint64_t x676 = 1046244LLU;
	int32_t t80 = 257424;

	t80 = (x673>>((x674+x675)<x676));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x685 = 450696;
	volatile int8_t x686 = -1;
	int64_t x687 = -96857186506795075LL;
	int32_t x688 = INT32_MAX;
	int32_t t81 = -2017956;

	t81 = (x685>>((x686+x687)<x688));

	if (t81 != 225348) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x693 = INT16_MAX;
	uint16_t x694 = 8U;
	int16_t x695 = INT16_MIN;
	uint16_t x696 = 587U;

	t82 = (x693>>((x694+x695)<x696));

	if (t82 != 16383) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x697 = 6496;
	volatile int8_t x698 = 1;
	int64_t x699 = -1LL;
	int64_t x700 = INT64_MIN;
	int32_t t83 = -2242324;

	t83 = (x697>>((x698+x699)<x700));

	if (t83 != 6496) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x730 = 1U;
	int16_t x732 = INT16_MIN;
	int32_t t84 = -135957;

	t84 = (x729>>((x730+x731)<x732));

	if (t84 != 55) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x737 = UINT8_MAX;
	int32_t x738 = INT32_MIN;
	uint8_t x739 = UINT8_MAX;
	int32_t x740 = INT32_MAX;
	int32_t t85 = 3629;

	t85 = (x737>>((x738+x739)<x740));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x750 = -1;
	static int64_t x751 = -1LL;
	int64_t x752 = 14868522367901LL;
	static volatile int32_t t86 = 0;

	t86 = (x749>>((x750+x751)<x752));

	if (t86 != 107) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x753 = 57696U;
	int8_t x754 = INT8_MIN;
	static int16_t x755 = INT16_MAX;
	uint32_t t87 = 2U;

	t87 = (x753>>((x754+x755)<x756));

	if (t87 != 57696U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x765 = INT32_MAX;
	uint32_t x767 = 1066239842U;
	static int32_t x768 = INT32_MAX;
	int32_t t88 = -469115;

	t88 = (x765>>((x766+x767)<x768));

	if (t88 != 1073741823) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x771 = 1;
	int8_t x772 = INT8_MIN;
	static volatile uint32_t t89 = 422U;

	t89 = (x769>>((x770+x771)<x772));

	if (t89 != 4095738U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x773 = 1U;
	volatile int16_t x774 = INT16_MIN;
	int32_t x775 = -35579697;
	int64_t x776 = INT64_MAX;
	int32_t t90 = -74631;

	t90 = (x773>>((x774+x775)<x776));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x777 = INT16_MAX;
	static int16_t x778 = -1;
	static int8_t x779 = -1;
	int16_t x780 = INT16_MIN;

	t91 = (x777>>((x778+x779)<x780));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x785 = INT64_MAX;
	uint8_t x786 = 2U;
	uint64_t x787 = 359LLU;
	static int64_t x788 = -13918LL;
	int64_t t92 = 169259252LL;

	t92 = (x785>>((x786+x787)<x788));

	if (t92 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x789 = 24;
	static volatile int32_t x790 = -1;
	static uint16_t x791 = 617U;

	t93 = (x789>>((x790+x791)<x792));

	if (t93 != 24) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x809 = UINT16_MAX;
	static int8_t x810 = 0;
	int16_t x811 = INT16_MAX;
	static volatile int32_t t94 = -22363;

	t94 = (x809>>((x810+x811)<x812));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x821 = INT16_MAX;
	uint32_t x822 = 3890U;
	int16_t x823 = INT16_MIN;
	static volatile int64_t x824 = 25414386701942LL;
	int32_t t95 = -57;

	t95 = (x821>>((x822+x823)<x824));

	if (t95 != 16383) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x825 = 464595793U;
	volatile int32_t x826 = INT32_MAX;
	volatile uint64_t x827 = 3LLU;
	int8_t x828 = INT8_MIN;
	uint32_t t96 = 507U;

	t96 = (x825>>((x826+x827)<x828));

	if (t96 != 232297896U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x838 = 227LLU;
	int8_t x839 = -11;
	int32_t x840 = 0;
	int32_t t97 = 365;

	t97 = (x837>>((x838+x839)<x840));

	if (t97 != 12615) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x842 = UINT64_MAX;
	volatile int64_t x843 = INT64_MIN;
	int32_t t98 = 4378604;

	t98 = (x841>>((x842+x843)<x844));

	if (t98 != 24) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x845 = 9217LLU;
	uint32_t x847 = 799202U;
	volatile uint16_t x848 = UINT16_MAX;
	volatile uint64_t t99 = 3LLU;

	t99 = (x845>>((x846+x847)<x848));

	if (t99 != 4608LLU) { NG(); } else { ; }
	
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

