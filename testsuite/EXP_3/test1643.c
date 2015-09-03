#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = 1U;
int32_t t1 = -3989796;
int64_t x45 = INT64_MAX;
uint8_t x47 = 59U;
static volatile uint32_t x48 = 60820U;
volatile int32_t t4 = 8636486;
volatile int16_t x74 = INT16_MIN;
static uint16_t x92 = UINT16_MAX;
uint64_t x99 = 855921LLU;
uint64_t x103 = 2LLU;
int8_t x104 = INT8_MIN;
static volatile uint32_t x157 = 2U;
static int64_t x159 = INT64_MIN;
int8_t x182 = 7;
int64_t x195 = INT64_MIN;
int16_t x196 = -1;
uint16_t x202 = UINT16_MAX;
volatile int32_t t18 = 2185;
int16_t x212 = -1;
static uint8_t x214 = 3U;
volatile int16_t x216 = -1;
volatile uint32_t x218 = 296242054U;
uint64_t x219 = 89445LLU;
int64_t x220 = -1LL;
int16_t x230 = -14326;
int32_t x231 = INT32_MIN;
uint32_t x248 = 2519922U;
volatile int32_t t28 = -11;
uint64_t x305 = UINT64_MAX;
volatile uint64_t x306 = UINT64_MAX;
int64_t x312 = 26208365838602LL;
int8_t x324 = -19;
int16_t x342 = INT16_MAX;
static volatile int32_t t37 = -128;
uint16_t x368 = UINT16_MAX;
static int32_t t40 = -12364018;
int32_t t41 = 60;
int32_t t42 = -9;
uint8_t x412 = 1U;
volatile int32_t t44 = -1;
static int32_t t45 = 102555474;
int16_t x439 = INT16_MIN;
uint8_t x447 = 3U;
int32_t t49 = 43;
static volatile int32_t t51 = -327157;
int64_t x478 = -214505LL;
int64_t x495 = 15977LL;
int8_t x505 = 7;
int8_t x517 = INT8_MIN;
int64_t x522 = -46133LL;
static int32_t x526 = INT32_MIN;
static int64_t x528 = -1LL;
int32_t t61 = -1676823;
int64_t x533 = -54LL;
volatile int8_t x542 = 0;
static uint32_t x545 = 36U;
int8_t x547 = -1;
static int16_t x563 = -11917;
static int32_t t67 = 2451;
int32_t x575 = INT32_MIN;
int32_t x576 = -1;
int32_t t68 = -7;
int16_t x577 = INT16_MIN;
volatile int32_t t69 = 893990981;
volatile uint8_t x583 = 6U;
int16_t x594 = INT16_MAX;
uint32_t x618 = 12685283U;
int32_t x619 = INT32_MIN;
static volatile int64_t x620 = -1LL;
static uint32_t x644 = 1210609912U;
volatile int32_t t76 = 1687;
uint16_t x649 = UINT16_MAX;
volatile uint16_t x657 = 96U;
static volatile int32_t t78 = -85942;
int32_t x674 = -6661;
int32_t x676 = -1;
int32_t t79 = 768570;
int32_t x683 = INT32_MIN;
int32_t t81 = 2321514;
volatile uint16_t x698 = 1U;
volatile int32_t t82 = 152402;
volatile uint8_t x723 = UINT8_MAX;
static uint8_t x740 = UINT8_MAX;
int32_t t85 = 32189;
volatile int8_t x745 = -1;
volatile int8_t x746 = INT8_MAX;
volatile uint8_t x748 = 1U;
int32_t x750 = -4;
volatile int32_t t87 = -1;
uint32_t x753 = 115U;
uint32_t x770 = 81U;
volatile int64_t x771 = INT64_MIN;
int32_t t90 = -172;
volatile uint64_t x773 = UINT64_MAX;
int8_t x782 = INT8_MIN;
static int16_t x784 = 1;
int8_t x791 = INT8_MIN;
volatile int32_t x799 = -9582;
int32_t t95 = -1;
int8_t x818 = -23;
uint32_t x819 = 426470U;
int64_t x821 = INT64_MIN;
static uint64_t x822 = UINT64_MAX;
volatile int32_t t98 = 87;
volatile int64_t x831 = INT64_MIN;


void f0(void) {
	static volatile int64_t x2 = 7550871639652989LL;
	static uint32_t x3 = 6349762U;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 589451554;

	t0 = ((x1<=x2)%(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -326723;
	int8_t x6 = INT8_MAX;
	static int16_t x7 = 41;
	uint8_t x8 = 41U;

	t1 = ((x5<=x6)%(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x33 = 47122;
	int8_t x34 = 0;
	volatile int16_t x35 = INT16_MIN;
	uint8_t x36 = UINT8_MAX;
	int32_t t2 = 454109;

	t2 = ((x33<=x34)%(x35<=x36));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x41 = -28006641;
	int16_t x42 = -5;
	static int64_t x43 = -1LL;
	int32_t x44 = INT32_MAX;
	volatile int32_t t3 = 0;

	t3 = ((x41<=x42)%(x43<=x44));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x46 = INT16_MIN;

	t4 = ((x45<=x46)%(x47<=x48));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x61 = 1;
	static uint32_t x62 = UINT32_MAX;
	uint64_t x63 = 44181424724LLU;
	int64_t x64 = -2226LL;
	volatile int32_t t5 = 588568911;

	t5 = ((x61<=x62)%(x63<=x64));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x73 = 356U;
	int16_t x75 = INT16_MIN;
	uint8_t x76 = 1U;
	volatile int32_t t6 = -252;

	t6 = ((x73<=x74)%(x75<=x76));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x89 = INT64_MAX;
	int8_t x90 = -1;
	int8_t x91 = INT8_MAX;
	int32_t t7 = -2932;

	t7 = ((x89<=x90)%(x91<=x92));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x97 = INT8_MAX;
	uint32_t x98 = UINT32_MAX;
	int64_t x100 = INT64_MAX;
	volatile int32_t t8 = -245584342;

	t8 = ((x97<=x98)%(x99<=x100));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x101 = INT16_MAX;
	int32_t x102 = -1;
	int32_t t9 = 203024302;

	t9 = ((x101<=x102)%(x103<=x104));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x125 = UINT32_MAX;
	int8_t x126 = 14;
	static int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MIN;
	volatile int32_t t10 = -789874;

	t10 = ((x125<=x126)%(x127<=x128));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x129 = 1U;
	int32_t x130 = INT32_MAX;
	int8_t x131 = -63;
	volatile int32_t x132 = INT32_MAX;
	volatile int32_t t11 = 187318;

	t11 = ((x129<=x130)%(x131<=x132));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x133 = 0U;
	int16_t x134 = INT16_MIN;
	uint16_t x135 = 31U;
	volatile uint16_t x136 = UINT16_MAX;
	static volatile int32_t t12 = 24;

	t12 = ((x133<=x134)%(x135<=x136));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x145 = -57;
	uint16_t x146 = 272U;
	int64_t x147 = INT64_MIN;
	volatile int8_t x148 = -1;
	static int32_t t13 = -1961;

	t13 = ((x145<=x146)%(x147<=x148));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x153 = -1LL;
	static volatile uint64_t x154 = 1191233LLU;
	static volatile int32_t x155 = INT32_MIN;
	int64_t x156 = 148668011LL;
	volatile int32_t t14 = 70523868;

	t14 = ((x153<=x154)%(x155<=x156));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x158 = UINT16_MAX;
	int32_t x160 = INT32_MAX;
	int32_t t15 = 0;

	t15 = ((x157<=x158)%(x159<=x160));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x181 = INT8_MAX;
	int8_t x183 = INT8_MIN;
	volatile int64_t x184 = -1LL;
	int32_t t16 = -268588;

	t16 = ((x181<=x182)%(x183<=x184));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x193 = INT64_MIN;
	int32_t x194 = INT32_MIN;
	int32_t t17 = -44051;

	t17 = ((x193<=x194)%(x195<=x196));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x201 = -3;
	int8_t x203 = -1;
	int64_t x204 = INT64_MAX;

	t18 = ((x201<=x202)%(x203<=x204));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x205 = 0U;
	int32_t x206 = INT32_MIN;
	uint8_t x207 = UINT8_MAX;
	uint32_t x208 = 613894U;
	int32_t t19 = -72084699;

	t19 = ((x205<=x206)%(x207<=x208));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x209 = 0;
	int8_t x210 = -3;
	uint32_t x211 = UINT32_MAX;
	int32_t t20 = -7;

	t20 = ((x209<=x210)%(x211<=x212));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x213 = -1LL;
	uint32_t x215 = UINT32_MAX;
	int32_t t21 = -18593;

	t21 = ((x213<=x214)%(x215<=x216));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x217 = -1;
	volatile int32_t t22 = 3082;

	t22 = ((x217<=x218)%(x219<=x220));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x225 = 830U;
	int64_t x226 = INT64_MIN;
	static int64_t x227 = INT64_MIN;
	int32_t x228 = INT32_MAX;
	static volatile int32_t t23 = -12595;

	t23 = ((x225<=x226)%(x227<=x228));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x229 = 946942U;
	int32_t x232 = -3140285;
	volatile int32_t t24 = -284514800;

	t24 = ((x229<=x230)%(x231<=x232));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x233 = -3;
	volatile int16_t x234 = INT16_MIN;
	static int8_t x235 = INT8_MAX;
	static int8_t x236 = INT8_MAX;
	int32_t t25 = -37241;

	t25 = ((x233<=x234)%(x235<=x236));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x245 = 170838277LLU;
	int8_t x246 = -1;
	int16_t x247 = 411;
	int32_t t26 = 1738046;

	t26 = ((x245<=x246)%(x247<=x248));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x281 = 1770508944814273104LLU;
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MIN;
	static int64_t x284 = INT64_MAX;
	int32_t t27 = 300467;

	t27 = ((x281<=x282)%(x283<=x284));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x285 = INT16_MAX;
	int32_t x286 = 441;
	int16_t x287 = -1324;
	static uint16_t x288 = 118U;

	t28 = ((x285<=x286)%(x287<=x288));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x297 = -1;
	uint8_t x298 = 111U;
	int64_t x299 = -55576LL;
	static int32_t x300 = -1;
	static volatile int32_t t29 = 2145;

	t29 = ((x297<=x298)%(x299<=x300));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x301 = UINT16_MAX;
	int32_t x302 = 1125;
	uint64_t x303 = 1609048993059LLU;
	int16_t x304 = INT16_MIN;
	int32_t t30 = 19137879;

	t30 = ((x301<=x302)%(x303<=x304));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x307 = -1;
	static uint8_t x308 = 12U;
	volatile int32_t t31 = -1;

	t31 = ((x305<=x306)%(x307<=x308));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = INT8_MAX;
	volatile int16_t x311 = INT16_MIN;
	static volatile int32_t t32 = 186047648;

	t32 = ((x309<=x310)%(x311<=x312));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x321 = 2U;
	static int8_t x322 = 2;
	uint64_t x323 = 281575932353736LLU;
	volatile int32_t t33 = -2;

	t33 = ((x321<=x322)%(x323<=x324));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x341 = 4038234U;
	int64_t x343 = INT64_MIN;
	static int64_t x344 = -1LL;
	int32_t t34 = 104575;

	t34 = ((x341<=x342)%(x343<=x344));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x349 = 1;
	uint64_t x350 = 0LLU;
	int16_t x351 = -498;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t35 = -115725561;

	t35 = ((x349<=x350)%(x351<=x352));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x357 = -1;
	int32_t x358 = INT32_MIN;
	static int64_t x359 = INT64_MIN;
	int8_t x360 = -1;
	static volatile int32_t t36 = -220296;

	t36 = ((x357<=x358)%(x359<=x360));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x361 = 32653;
	int32_t x362 = INT32_MIN;
	int16_t x363 = -1;
	static volatile uint32_t x364 = UINT32_MAX;

	t37 = ((x361<=x362)%(x363<=x364));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x365 = -259;
	int16_t x366 = 11004;
	uint8_t x367 = 54U;
	int32_t t38 = 165053766;

	t38 = ((x365<=x366)%(x367<=x368));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x369 = INT8_MAX;
	volatile uint32_t x370 = 193837682U;
	static int8_t x371 = INT8_MIN;
	static int32_t x372 = -1;
	volatile int32_t t39 = -3702008;

	t39 = ((x369<=x370)%(x371<=x372));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x381 = 5127;
	volatile int8_t x382 = 0;
	int8_t x383 = 0;
	volatile int32_t x384 = INT32_MAX;

	t40 = ((x381<=x382)%(x383<=x384));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x385 = INT64_MIN;
	uint64_t x386 = 1399476142325701732LLU;
	static int64_t x387 = -14105711LL;
	uint8_t x388 = 2U;

	t41 = ((x385<=x386)%(x387<=x388));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x401 = INT32_MIN;
	static volatile uint16_t x402 = 1U;
	int8_t x403 = INT8_MAX;
	volatile uint64_t x404 = UINT64_MAX;

	t42 = ((x401<=x402)%(x403<=x404));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x405 = INT32_MIN;
	static uint64_t x406 = 922828741286108220LLU;
	int64_t x407 = -15966841220LL;
	int64_t x408 = INT64_MAX;
	static int32_t t43 = -128076474;

	t43 = ((x405<=x406)%(x407<=x408));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x409 = -1;
	static volatile uint8_t x410 = UINT8_MAX;
	int16_t x411 = -1;

	t44 = ((x409<=x410)%(x411<=x412));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x417 = INT8_MIN;
	int32_t x418 = INT32_MIN;
	uint64_t x419 = 746770205736889200LLU;
	int64_t x420 = INT64_MAX;

	t45 = ((x417<=x418)%(x419<=x420));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x425 = INT32_MIN;
	uint32_t x426 = 487U;
	static int8_t x427 = INT8_MIN;
	uint8_t x428 = 10U;
	volatile int32_t t46 = -1307874;

	t46 = ((x425<=x426)%(x427<=x428));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x437 = -1;
	uint32_t x438 = 4110776U;
	int8_t x440 = 1;
	int32_t t47 = -1698058;

	t47 = ((x437<=x438)%(x439<=x440));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x441 = -199;
	static int32_t x442 = INT32_MAX;
	uint64_t x443 = 315783619433LLU;
	static uint64_t x444 = UINT64_MAX;
	volatile int32_t t48 = -12182317;

	t48 = ((x441<=x442)%(x443<=x444));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x445 = UINT64_MAX;
	volatile uint32_t x446 = UINT32_MAX;
	volatile uint64_t x448 = 47896006154294LLU;

	t49 = ((x445<=x446)%(x447<=x448));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x449 = 12U;
	static int8_t x450 = INT8_MAX;
	int16_t x451 = 6;
	int32_t x452 = 3295;
	static volatile int32_t t50 = 9;

	t50 = ((x449<=x450)%(x451<=x452));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x457 = INT64_MIN;
	uint64_t x458 = 260LLU;
	int64_t x459 = INT64_MIN;
	int8_t x460 = -1;

	t51 = ((x457<=x458)%(x459<=x460));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x465 = INT64_MIN;
	static int32_t x466 = -617508;
	static int16_t x467 = INT16_MIN;
	int64_t x468 = 102LL;
	volatile int32_t t52 = 0;

	t52 = ((x465<=x466)%(x467<=x468));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x469 = -7529575LL;
	int8_t x470 = -1;
	int64_t x471 = -1LL;
	uint16_t x472 = 1U;
	static volatile int32_t t53 = -5;

	t53 = ((x469<=x470)%(x471<=x472));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x473 = 2982U;
	int16_t x474 = INT16_MAX;
	uint8_t x475 = 55U;
	int8_t x476 = INT8_MAX;
	volatile int32_t t54 = -244;

	t54 = ((x473<=x474)%(x475<=x476));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x477 = INT16_MIN;
	volatile int8_t x479 = -1;
	static int64_t x480 = INT64_MAX;
	volatile int32_t t55 = 57420293;

	t55 = ((x477<=x478)%(x479<=x480));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x493 = INT16_MIN;
	static uint32_t x494 = 682747U;
	uint64_t x496 = UINT64_MAX;
	int32_t t56 = 127357;

	t56 = ((x493<=x494)%(x495<=x496));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x506 = -1;
	int32_t x507 = -1;
	int64_t x508 = 2880530LL;
	int32_t t57 = 28;

	t57 = ((x505<=x506)%(x507<=x508));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x513 = -1;
	static int16_t x514 = INT16_MIN;
	int16_t x515 = INT16_MIN;
	int32_t x516 = 35837;
	int32_t t58 = -162027;

	t58 = ((x513<=x514)%(x515<=x516));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x518 = 1767602023LLU;
	int16_t x519 = INT16_MIN;
	uint16_t x520 = 32215U;
	volatile int32_t t59 = -26746;

	t59 = ((x517<=x518)%(x519<=x520));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x521 = 1393039399218LLU;
	volatile int32_t x523 = INT32_MIN;
	uint8_t x524 = 52U;
	volatile int32_t t60 = 195099451;

	t60 = ((x521<=x522)%(x523<=x524));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x525 = -1LL;
	volatile int16_t x527 = INT16_MIN;

	t61 = ((x525<=x526)%(x527<=x528));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x534 = UINT32_MAX;
	static uint64_t x535 = 1LLU;
	volatile uint32_t x536 = 988591971U;
	int32_t t62 = 44;

	t62 = ((x533<=x534)%(x535<=x536));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x541 = INT16_MAX;
	static uint16_t x543 = UINT16_MAX;
	volatile int64_t x544 = 806630479LL;
	int32_t t63 = -7585;

	t63 = ((x541<=x542)%(x543<=x544));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x546 = UINT32_MAX;
	static volatile int16_t x548 = -1;
	static volatile int32_t t64 = 2;

	t64 = ((x545<=x546)%(x547<=x548));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x549 = INT16_MAX;
	volatile uint64_t x550 = 4453923211345767361LLU;
	uint32_t x551 = 477014378U;
	uint64_t x552 = 29705393524212LLU;
	int32_t t65 = -1039876449;

	t65 = ((x549<=x550)%(x551<=x552));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x561 = 422;
	volatile int16_t x562 = INT16_MAX;
	int8_t x564 = -1;
	int32_t t66 = 42413098;

	t66 = ((x561<=x562)%(x563<=x564));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x569 = 1;
	int32_t x570 = -1;
	int32_t x571 = INT32_MAX;
	int64_t x572 = 152080573469950LL;

	t67 = ((x569<=x570)%(x571<=x572));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x573 = -6;
	uint32_t x574 = 3402395U;

	t68 = ((x573<=x574)%(x575<=x576));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x578 = 1;
	int8_t x579 = INT8_MIN;
	uint16_t x580 = 110U;

	t69 = ((x577<=x578)%(x579<=x580));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x581 = UINT16_MAX;
	int8_t x582 = 7;
	uint64_t x584 = 9565LLU;
	int32_t t70 = 14;

	t70 = ((x581<=x582)%(x583<=x584));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x593 = INT8_MIN;
	int32_t x595 = INT32_MIN;
	uint64_t x596 = UINT64_MAX;
	volatile int32_t t71 = -1925965;

	t71 = ((x593<=x594)%(x595<=x596));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x609 = -1;
	int64_t x610 = 169702034LL;
	int32_t x611 = INT32_MIN;
	int8_t x612 = INT8_MIN;
	int32_t t72 = 53;

	t72 = ((x609<=x610)%(x611<=x612));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x617 = 2299U;
	volatile int32_t t73 = 179054;

	t73 = ((x617<=x618)%(x619<=x620));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x621 = INT8_MAX;
	int64_t x622 = INT64_MIN;
	int64_t x623 = -1LL;
	volatile uint16_t x624 = UINT16_MAX;
	volatile int32_t t74 = 161776;

	t74 = ((x621<=x622)%(x623<=x624));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x637 = 1207523LLU;
	int16_t x638 = -1;
	uint8_t x639 = 54U;
	volatile int64_t x640 = 4026934139827LL;
	int32_t t75 = -2;

	t75 = ((x637<=x638)%(x639<=x640));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x641 = UINT16_MAX;
	int64_t x642 = INT64_MAX;
	int32_t x643 = 447;

	t76 = ((x641<=x642)%(x643<=x644));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x650 = INT32_MIN;
	uint32_t x651 = 117072U;
	uint64_t x652 = UINT64_MAX;
	static int32_t t77 = -12950783;

	t77 = ((x649<=x650)%(x651<=x652));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x658 = INT16_MIN;
	uint32_t x659 = 107591U;
	static uint32_t x660 = 420826378U;

	t78 = ((x657<=x658)%(x659<=x660));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x673 = INT16_MIN;
	int64_t x675 = -30LL;

	t79 = ((x673<=x674)%(x675<=x676));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x681 = 106055030345LLU;
	uint32_t x682 = UINT32_MAX;
	int64_t x684 = -1LL;
	volatile int32_t t80 = 15955080;

	t80 = ((x681<=x682)%(x683<=x684));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x689 = INT64_MAX;
	uint32_t x690 = UINT32_MAX;
	int64_t x691 = INT64_MIN;
	int64_t x692 = INT64_MIN;

	t81 = ((x689<=x690)%(x691<=x692));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x697 = 941LLU;
	volatile int32_t x699 = INT32_MIN;
	volatile int64_t x700 = INT64_MAX;

	t82 = ((x697<=x698)%(x699<=x700));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x709 = -894;
	int64_t x710 = -1LL;
	static int8_t x711 = INT8_MAX;
	int64_t x712 = 11783214LL;
	static int32_t t83 = -41970;

	t83 = ((x709<=x710)%(x711<=x712));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x721 = 2477U;
	int8_t x722 = -28;
	volatile uint16_t x724 = UINT16_MAX;
	volatile int32_t t84 = -1;

	t84 = ((x721<=x722)%(x723<=x724));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x737 = UINT8_MAX;
	uint8_t x738 = UINT8_MAX;
	int8_t x739 = INT8_MAX;

	t85 = ((x737<=x738)%(x739<=x740));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x747 = 1U;
	static int32_t t86 = 0;

	t86 = ((x745<=x746)%(x747<=x748));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x749 = INT32_MIN;
	volatile int16_t x751 = INT16_MIN;
	int8_t x752 = INT8_MAX;

	t87 = ((x749<=x750)%(x751<=x752));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x754 = -885;
	int32_t x755 = INT32_MIN;
	int64_t x756 = INT64_MAX;
	static volatile int32_t t88 = 1;

	t88 = ((x753<=x754)%(x755<=x756));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x757 = -139273063LL;
	uint32_t x758 = UINT32_MAX;
	int16_t x759 = INT16_MIN;
	uint32_t x760 = UINT32_MAX;
	int32_t t89 = 140061563;

	t89 = ((x757<=x758)%(x759<=x760));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x769 = -1LL;
	int32_t x772 = -1;

	t90 = ((x769<=x770)%(x771<=x772));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x774 = 18U;
	static int16_t x775 = INT16_MIN;
	static int64_t x776 = 3731025548113687672LL;
	static volatile int32_t t91 = -30161645;

	t91 = ((x773<=x774)%(x775<=x776));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x777 = 99212120LL;
	volatile int8_t x778 = -15;
	volatile int8_t x779 = 0;
	int16_t x780 = 0;
	int32_t t92 = 124220;

	t92 = ((x777<=x778)%(x779<=x780));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x781 = UINT32_MAX;
	int8_t x783 = INT8_MIN;
	int32_t t93 = 0;

	t93 = ((x781<=x782)%(x783<=x784));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x789 = INT8_MIN;
	static int64_t x790 = INT64_MIN;
	static volatile int64_t x792 = -1LL;
	int32_t t94 = 27664800;

	t94 = ((x789<=x790)%(x791<=x792));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x797 = -15077;
	static int32_t x798 = -6826095;
	static int16_t x800 = -1;

	t95 = ((x797<=x798)%(x799<=x800));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x813 = -100866234LL;
	int16_t x814 = -20;
	uint16_t x815 = 1844U;
	int64_t x816 = 4340424742713975440LL;
	volatile int32_t t96 = 43231;

	t96 = ((x813<=x814)%(x815<=x816));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x817 = UINT32_MAX;
	static int64_t x820 = INT64_MAX;
	volatile int32_t t97 = -172608;

	t97 = ((x817<=x818)%(x819<=x820));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x823 = -1;
	int16_t x824 = 1;

	t98 = ((x821<=x822)%(x823<=x824));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x829 = INT16_MAX;
	int16_t x830 = INT16_MAX;
	static int16_t x832 = 0;
	static int32_t t99 = 77566411;

	t99 = ((x829<=x830)%(x831<=x832));

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

