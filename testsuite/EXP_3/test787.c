#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x7 = UINT32_MAX;
int8_t x11 = INT8_MAX;
volatile int32_t t1 = 3;
int64_t x18 = INT64_MIN;
volatile int8_t x20 = -7;
uint64_t x22 = 10967676835LLU;
static volatile int32_t t4 = 21;
volatile int64_t x25 = 67095103445331LL;
int16_t x26 = INT16_MAX;
int32_t t7 = -4427089;
uint16_t x80 = UINT16_MAX;
int8_t x104 = -55;
volatile uint8_t x111 = 2U;
static volatile int32_t t14 = -6478;
volatile uint8_t x144 = 1U;
uint32_t x154 = 864125U;
int8_t x176 = INT8_MIN;
volatile int32_t t18 = 503;
int32_t x186 = -1;
static int32_t x202 = -1852;
static volatile int32_t t24 = 389159;
int32_t t26 = -6624;
int16_t x292 = -1;
int16_t x333 = INT16_MIN;
static int32_t t32 = 14;
int32_t t33 = 37;
uint8_t x343 = 1U;
volatile int16_t x344 = INT16_MAX;
int16_t x355 = -7512;
int32_t t35 = -785920563;
int32_t t36 = 0;
static int64_t x381 = INT64_MAX;
static int16_t x384 = INT16_MIN;
int32_t t39 = -131;
int8_t x387 = -1;
static volatile int32_t x388 = -1;
uint32_t x392 = UINT32_MAX;
int32_t t43 = 4;
volatile int64_t x422 = INT64_MIN;
int32_t t44 = 955406;
int8_t x441 = INT8_MIN;
uint8_t x443 = 1U;
int8_t x444 = -1;
int8_t x456 = -1;
volatile int32_t t47 = 0;
uint8_t x459 = 1U;
uint32_t x460 = 182797206U;
int32_t x482 = INT32_MAX;
int64_t x487 = INT64_MIN;
uint64_t x494 = 4789917172266376112LLU;
int8_t x496 = 47;
uint32_t x506 = 9U;
int32_t x511 = INT32_MIN;
static uint32_t x531 = 9U;
uint8_t x532 = UINT8_MAX;
static volatile uint16_t x535 = 4U;
volatile int32_t t56 = -3;
uint16_t x538 = 2U;
int64_t x546 = INT64_MIN;
uint64_t x547 = UINT64_MAX;
uint8_t x550 = UINT8_MAX;
volatile int32_t t61 = 7242762;
int16_t x576 = INT16_MIN;
int32_t x580 = INT32_MIN;
uint32_t x588 = UINT32_MAX;
static volatile uint64_t x594 = UINT64_MAX;
int16_t x595 = 2150;
uint32_t x611 = 21044755U;
uint32_t x617 = UINT32_MAX;
int64_t x641 = INT64_MIN;
int32_t t70 = 38689454;
int32_t x675 = INT32_MIN;
uint16_t x677 = UINT16_MAX;
static uint64_t x684 = 412025LLU;
int16_t x705 = -1;
int64_t x706 = INT64_MIN;
int32_t x710 = INT32_MAX;
int64_t x720 = INT64_MIN;
uint64_t x721 = UINT64_MAX;
volatile int64_t x722 = -1LL;
int64_t x773 = 3811LL;
static uint64_t x774 = 98265328LLU;
uint8_t x776 = 2U;
volatile int32_t t85 = 5190;
volatile int32_t x800 = -70091944;
volatile int32_t t87 = 1;
static uint8_t x803 = 1U;
static volatile int16_t x809 = 231;
int32_t x819 = INT32_MAX;
volatile int8_t x834 = 13;
int32_t x835 = INT32_MIN;
int64_t x849 = -123209403976LL;
static uint16_t x855 = 14998U;
int32_t t94 = 20606;
volatile int16_t x865 = -12;
int64_t x868 = -1LL;
uint64_t x882 = 309670279673906LLU;
uint8_t x889 = 9U;
static volatile int8_t x900 = 1;
volatile int32_t t99 = 19;


void f0(void) {
	volatile int64_t x5 = -1LL;
	uint32_t x6 = 326963438U;
	int32_t x8 = -3;
	static int32_t t0 = -1988241;

	t0 = ((x5<x6)>>(x7%x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1;
	uint64_t x10 = 616712LLU;
	int32_t x12 = -1;

	t1 = ((x9<x10)>>(x11%x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = UINT32_MAX;
	uint64_t x14 = 196169725214LLU;
	volatile uint16_t x15 = UINT16_MAX;
	int64_t x16 = 10LL;
	int32_t t2 = 201259;

	t2 = ((x13<x14)>>(x15%x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	static volatile int32_t x19 = INT32_MAX;
	volatile int32_t t3 = 0;

	t3 = ((x17<x18)>>(x19%x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -1LL;
	volatile int16_t x23 = 7;
	uint16_t x24 = UINT16_MAX;

	t4 = ((x21<x22)>>(x23%x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x27 = -2;
	int16_t x28 = -1;
	static int32_t t5 = -416381538;

	t5 = ((x25<x26)>>(x27%x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x37 = INT8_MAX;
	int16_t x38 = INT16_MAX;
	static uint64_t x39 = UINT64_MAX;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t6 = 74;

	t6 = ((x37<x38)>>(x39%x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x41 = 103935699;
	static volatile uint32_t x42 = 1U;
	int8_t x43 = 7;
	volatile int16_t x44 = -11611;

	t7 = ((x41<x42)>>(x43%x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x69 = 60LL;
	int8_t x70 = -23;
	int8_t x71 = 29;
	volatile uint16_t x72 = 1U;
	int32_t t8 = -28;

	t8 = ((x69<x70)>>(x71%x72));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x73 = INT32_MIN;
	static uint32_t x74 = UINT32_MAX;
	uint64_t x75 = 13367936LLU;
	static volatile int8_t x76 = 19;
	volatile int32_t t9 = -4;

	t9 = ((x73<x74)>>(x75%x76));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x77 = 115U;
	int16_t x78 = 1491;
	int8_t x79 = 30;
	int32_t t10 = -3746;

	t10 = ((x77<x78)>>(x79%x80));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x81 = 17536U;
	int32_t x82 = -20280;
	static uint8_t x83 = 1U;
	int8_t x84 = INT8_MAX;
	static volatile int32_t t11 = -82333320;

	t11 = ((x81<x82)>>(x83%x84));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x101 = UINT64_MAX;
	uint16_t x102 = 1U;
	uint8_t x103 = 3U;
	static volatile int32_t t12 = -19;

	t12 = ((x101<x102)>>(x103%x104));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x109 = UINT16_MAX;
	int16_t x110 = INT16_MIN;
	int16_t x112 = INT16_MAX;
	int32_t t13 = -2017771;

	t13 = ((x109<x110)>>(x111%x112));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x113 = UINT32_MAX;
	static uint64_t x114 = 15222838862LLU;
	volatile int32_t x115 = INT32_MIN;
	static int32_t x116 = INT32_MIN;

	t14 = ((x113<x114)>>(x115%x116));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x117 = 21U;
	int64_t x118 = INT64_MIN;
	int8_t x119 = 0;
	volatile int64_t x120 = -1LL;
	volatile int32_t t15 = -3975711;

	t15 = ((x117<x118)>>(x119%x120));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x141 = -1;
	uint16_t x142 = 30U;
	int8_t x143 = -1;
	int32_t t16 = 23328803;

	t16 = ((x141<x142)>>(x143%x144));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x153 = -3;
	int32_t x155 = -168914;
	int64_t x156 = -1LL;
	volatile int32_t t17 = 1;

	t17 = ((x153<x154)>>(x155%x156));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x173 = -49;
	static int8_t x174 = -1;
	int64_t x175 = INT64_MIN;

	t18 = ((x173<x174)>>(x175%x176));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x185 = UINT64_MAX;
	volatile uint8_t x187 = UINT8_MAX;
	int32_t x188 = -1;
	int32_t t19 = -1931719;

	t19 = ((x185<x186)>>(x187%x188));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x193 = INT32_MIN;
	int16_t x194 = INT16_MAX;
	int32_t x195 = 18;
	static int32_t x196 = -1;
	int32_t t20 = -6712767;

	t20 = ((x193<x194)>>(x195%x196));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x201 = INT64_MIN;
	int16_t x203 = INT16_MIN;
	uint32_t x204 = 3U;
	int32_t t21 = 5;

	t21 = ((x201<x202)>>(x203%x204));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x217 = INT32_MAX;
	volatile int64_t x218 = INT64_MIN;
	static uint16_t x219 = UINT16_MAX;
	int8_t x220 = -1;
	int32_t t22 = -2984645;

	t22 = ((x217<x218)>>(x219%x220));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x221 = INT8_MAX;
	int8_t x222 = INT8_MAX;
	uint8_t x223 = 4U;
	static int64_t x224 = -1LL;
	int32_t t23 = 28928;

	t23 = ((x221<x222)>>(x223%x224));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x233 = UINT8_MAX;
	int64_t x234 = -1LL;
	uint16_t x235 = 219U;
	int64_t x236 = -1LL;

	t24 = ((x233<x234)>>(x235%x236));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = -1LL;
	uint8_t x243 = 3U;
	static uint16_t x244 = UINT16_MAX;
	static volatile int32_t t25 = -94218103;

	t25 = ((x241<x242)>>(x243%x244));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x253 = INT32_MIN;
	volatile uint32_t x254 = UINT32_MAX;
	uint8_t x255 = 6U;
	volatile int8_t x256 = INT8_MAX;

	t26 = ((x253<x254)>>(x255%x256));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x261 = INT64_MAX;
	volatile int64_t x262 = INT64_MIN;
	int64_t x263 = -94143418870LL;
	static int16_t x264 = -1;
	int32_t t27 = -5627641;

	t27 = ((x261<x262)>>(x263%x264));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x273 = 1LL;
	volatile int16_t x274 = INT16_MIN;
	int16_t x275 = INT16_MAX;
	int16_t x276 = INT16_MAX;
	volatile int32_t t28 = -965726364;

	t28 = ((x273<x274)>>(x275%x276));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x289 = INT32_MIN;
	int16_t x290 = INT16_MIN;
	int16_t x291 = -10;
	int32_t t29 = 5282215;

	t29 = ((x289<x290)>>(x291%x292));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x305 = INT64_MIN;
	static uint64_t x306 = 1073825366097106198LLU;
	uint8_t x307 = 1U;
	uint32_t x308 = 689U;
	static int32_t t30 = 306;

	t30 = ((x305<x306)>>(x307%x308));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x309 = INT8_MIN;
	uint64_t x310 = 78544729LLU;
	uint32_t x311 = UINT32_MAX;
	uint16_t x312 = 5U;
	volatile int32_t t31 = -305761;

	t31 = ((x309<x310)>>(x311%x312));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x334 = 1LL;
	int32_t x335 = INT32_MIN;
	int8_t x336 = INT8_MIN;

	t32 = ((x333<x334)>>(x335%x336));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x337 = -1;
	int8_t x338 = 1;
	uint16_t x339 = 3U;
	int64_t x340 = -467604LL;

	t33 = ((x337<x338)>>(x339%x340));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x341 = 26702720U;
	int32_t x342 = -157327862;
	static volatile int32_t t34 = 9;

	t34 = ((x341<x342)>>(x343%x344));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x353 = 100455156U;
	volatile int8_t x354 = INT8_MIN;
	static int8_t x356 = -1;

	t35 = ((x353<x354)>>(x355%x356));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x357 = -3;
	volatile int16_t x358 = 4570;
	uint8_t x359 = 0U;
	int16_t x360 = 1;

	t36 = ((x357<x358)>>(x359%x360));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x361 = 118294680692708854LLU;
	volatile uint8_t x362 = UINT8_MAX;
	volatile int16_t x363 = INT16_MIN;
	int64_t x364 = -1LL;
	int32_t t37 = 242227;

	t37 = ((x361<x362)>>(x363%x364));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x377 = INT64_MAX;
	int16_t x378 = -712;
	volatile int64_t x379 = 235645LL;
	static uint16_t x380 = 60U;
	volatile int32_t t38 = -105341689;

	t38 = ((x377<x378)>>(x379%x380));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x382 = 450U;
	int64_t x383 = INT64_MIN;

	t39 = ((x381<x382)>>(x383%x384));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x385 = 1796714633379LLU;
	static uint64_t x386 = 93114650LLU;
	static volatile int32_t t40 = 299;

	t40 = ((x385<x386)>>(x387%x388));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x389 = -1;
	int16_t x390 = -85;
	static int32_t x391 = 0;
	static int32_t t41 = -493354;

	t41 = ((x389<x390)>>(x391%x392));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x405 = 700400U;
	int32_t x406 = 13;
	int32_t x407 = -93;
	int32_t x408 = -1;
	static int32_t t42 = 65520163;

	t42 = ((x405<x406)>>(x407%x408));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x413 = -690;
	uint16_t x414 = UINT16_MAX;
	uint8_t x415 = UINT8_MAX;
	volatile int32_t x416 = -1;

	t43 = ((x413<x414)>>(x415%x416));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x421 = INT16_MAX;
	uint16_t x423 = 87U;
	int8_t x424 = -1;

	t44 = ((x421<x422)>>(x423%x424));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x442 = INT16_MIN;
	volatile int32_t t45 = -27170;

	t45 = ((x441<x442)>>(x443%x444));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x445 = -1;
	uint8_t x446 = 3U;
	volatile int16_t x447 = INT16_MAX;
	volatile int32_t x448 = -1;
	volatile int32_t t46 = -460713614;

	t46 = ((x445<x446)>>(x447%x448));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x453 = 495785223630184637LL;
	volatile int8_t x454 = -47;
	volatile uint16_t x455 = 423U;

	t47 = ((x453<x454)>>(x455%x456));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x457 = -14;
	uint32_t x458 = UINT32_MAX;
	volatile int32_t t48 = -2692;

	t48 = ((x457<x458)>>(x459%x460));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x481 = 3497U;
	int8_t x483 = -1;
	static int16_t x484 = -1;
	int32_t t49 = -87505634;

	t49 = ((x481<x482)>>(x483%x484));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x485 = UINT32_MAX;
	uint8_t x486 = 0U;
	static int64_t x488 = INT64_MIN;
	volatile int32_t t50 = 6;

	t50 = ((x485<x486)>>(x487%x488));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x493 = 83292;
	static int8_t x495 = 3;
	volatile int32_t t51 = 7234263;

	t51 = ((x493<x494)>>(x495%x496));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x505 = 412451680LL;
	uint64_t x507 = 125916722076LLU;
	uint16_t x508 = 27U;
	int32_t t52 = 8233677;

	t52 = ((x505<x506)>>(x507%x508));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x509 = INT16_MIN;
	int16_t x510 = INT16_MAX;
	volatile uint32_t x512 = 3U;
	static int32_t t53 = -411;

	t53 = ((x509<x510)>>(x511%x512));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x521 = INT8_MAX;
	static uint16_t x522 = 1283U;
	volatile uint8_t x523 = 0U;
	int64_t x524 = INT64_MIN;
	int32_t t54 = 273;

	t54 = ((x521<x522)>>(x523%x524));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x529 = UINT64_MAX;
	volatile int32_t x530 = -339;
	int32_t t55 = 928093;

	t55 = ((x529<x530)>>(x531%x532));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x533 = INT8_MIN;
	int32_t x534 = -1;
	static int8_t x536 = 1;

	t56 = ((x533<x534)>>(x535%x536));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x537 = 84593124518018933LLU;
	uint32_t x539 = 3U;
	uint16_t x540 = 23926U;
	volatile int32_t t57 = -819270;

	t57 = ((x537<x538)>>(x539%x540));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x545 = INT8_MIN;
	static volatile int32_t x548 = -26;
	int32_t t58 = -7478;

	t58 = ((x545<x546)>>(x547%x548));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x549 = -1036477786;
	int8_t x551 = INT8_MIN;
	int8_t x552 = INT8_MIN;
	int32_t t59 = 1063698580;

	t59 = ((x549<x550)>>(x551%x552));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x557 = 5U;
	int64_t x558 = -1LL;
	static volatile uint64_t x559 = UINT64_MAX;
	int16_t x560 = -1;
	int32_t t60 = -464;

	t60 = ((x557<x558)>>(x559%x560));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x561 = 1U;
	int64_t x562 = 2476602981469LL;
	uint8_t x563 = UINT8_MAX;
	int32_t x564 = -4;

	t61 = ((x561<x562)>>(x563%x564));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x573 = -1;
	uint32_t x574 = UINT32_MAX;
	int64_t x575 = INT64_MIN;
	int32_t t62 = 1;

	t62 = ((x573<x574)>>(x575%x576));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x577 = INT64_MIN;
	static uint64_t x578 = UINT64_MAX;
	int32_t x579 = INT32_MIN;
	static volatile int32_t t63 = -3;

	t63 = ((x577<x578)>>(x579%x580));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x585 = 34U;
	volatile uint8_t x586 = 6U;
	uint32_t x587 = 3U;
	int32_t t64 = 9;

	t64 = ((x585<x586)>>(x587%x588));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x589 = INT16_MIN;
	volatile int32_t x590 = INT32_MAX;
	int32_t x591 = INT32_MAX;
	static int8_t x592 = -33;
	int32_t t65 = 347145799;

	t65 = ((x589<x590)>>(x591%x592));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x593 = -234;
	volatile int8_t x596 = 1;
	volatile int32_t t66 = -8152141;

	t66 = ((x593<x594)>>(x595%x596));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x609 = INT16_MAX;
	int8_t x610 = INT8_MIN;
	static uint16_t x612 = 1U;
	volatile int32_t t67 = -324101;

	t67 = ((x609<x610)>>(x611%x612));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x618 = 3;
	volatile int8_t x619 = 1;
	int16_t x620 = INT16_MIN;
	volatile int32_t t68 = -391;

	t68 = ((x617<x618)>>(x619%x620));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x642 = 0;
	uint8_t x643 = 6U;
	volatile uint32_t x644 = 7380U;
	int32_t t69 = 413;

	t69 = ((x641<x642)>>(x643%x644));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x645 = 30U;
	uint16_t x646 = 1U;
	int16_t x647 = INT16_MAX;
	int8_t x648 = 16;

	t70 = ((x645<x646)>>(x647%x648));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x649 = 36852240;
	int32_t x650 = INT32_MIN;
	volatile int64_t x651 = INT64_MIN;
	int8_t x652 = INT8_MIN;
	static volatile int32_t t71 = -7128913;

	t71 = ((x649<x650)>>(x651%x652));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x661 = INT16_MIN;
	uint64_t x662 = UINT64_MAX;
	static volatile uint8_t x663 = 0U;
	int32_t x664 = -18;
	volatile int32_t t72 = 105384358;

	t72 = ((x661<x662)>>(x663%x664));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x665 = INT64_MIN;
	int8_t x666 = INT8_MIN;
	int32_t x667 = INT32_MAX;
	int16_t x668 = -1;
	volatile int32_t t73 = -15;

	t73 = ((x665<x666)>>(x667%x668));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x673 = UINT32_MAX;
	int32_t x674 = INT32_MAX;
	int16_t x676 = INT16_MIN;
	volatile int32_t t74 = -192477;

	t74 = ((x673<x674)>>(x675%x676));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x678 = 0U;
	int8_t x679 = INT8_MIN;
	static int16_t x680 = -1;
	volatile int32_t t75 = 273474989;

	t75 = ((x677<x678)>>(x679%x680));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x681 = 6139;
	int16_t x682 = -1;
	int8_t x683 = 1;
	volatile int32_t t76 = 14;

	t76 = ((x681<x682)>>(x683%x684));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x689 = INT16_MAX;
	volatile int8_t x690 = 14;
	volatile uint16_t x691 = UINT16_MAX;
	static int16_t x692 = -1;
	volatile int32_t t77 = 7;

	t77 = ((x689<x690)>>(x691%x692));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x707 = -16LL;
	volatile int16_t x708 = -1;
	int32_t t78 = -212027930;

	t78 = ((x705<x706)>>(x707%x708));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x709 = INT8_MIN;
	static int64_t x711 = INT64_MIN;
	int64_t x712 = -1LL;
	int32_t t79 = 449;

	t79 = ((x709<x710)>>(x711%x712));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x713 = -1;
	static int8_t x714 = INT8_MIN;
	uint8_t x715 = 4U;
	int8_t x716 = INT8_MAX;
	volatile int32_t t80 = 25;

	t80 = ((x713<x714)>>(x715%x716));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x717 = UINT16_MAX;
	int64_t x718 = INT64_MAX;
	static uint8_t x719 = 1U;
	volatile int32_t t81 = 3841;

	t81 = ((x717<x718)>>(x719%x720));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x723 = UINT64_MAX;
	int32_t x724 = -1;
	int32_t t82 = 117;

	t82 = ((x721<x722)>>(x723%x724));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x741 = 1;
	uint16_t x742 = 1U;
	uint64_t x743 = 6824813165636LLU;
	uint16_t x744 = 13U;
	int32_t t83 = 0;

	t83 = ((x741<x742)>>(x743%x744));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x765 = -17;
	int8_t x766 = INT8_MIN;
	static int64_t x767 = INT64_MAX;
	int64_t x768 = -1LL;
	volatile int32_t t84 = 7;

	t84 = ((x765<x766)>>(x767%x768));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x775 = INT64_MIN;

	t85 = ((x773<x774)>>(x775%x776));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x781 = INT8_MAX;
	int32_t x782 = 11;
	volatile uint32_t x783 = UINT32_MAX;
	int8_t x784 = INT8_MAX;
	volatile int32_t t86 = 406959291;

	t86 = ((x781<x782)>>(x783%x784));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x797 = -3288443213979LL;
	static int8_t x798 = INT8_MAX;
	uint16_t x799 = 0U;

	t87 = ((x797<x798)>>(x799%x800));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x801 = 2U;
	int64_t x802 = 8175LL;
	uint16_t x804 = 45U;
	volatile int32_t t88 = 182214061;

	t88 = ((x801<x802)>>(x803%x804));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x810 = 2;
	static uint8_t x811 = 0U;
	int64_t x812 = INT64_MAX;
	int32_t t89 = -820911089;

	t89 = ((x809<x810)>>(x811%x812));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x817 = INT16_MAX;
	static volatile uint64_t x818 = 15LLU;
	int16_t x820 = INT16_MAX;
	volatile int32_t t90 = 1;

	t90 = ((x817<x818)>>(x819%x820));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x833 = INT16_MIN;
	volatile int8_t x836 = INT8_MIN;
	int32_t t91 = -29089164;

	t91 = ((x833<x834)>>(x835%x836));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x850 = 1;
	volatile uint64_t x851 = UINT64_MAX;
	static int32_t x852 = -1;
	int32_t t92 = 907858533;

	t92 = ((x849<x850)>>(x851%x852));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x853 = -1;
	uint16_t x854 = UINT16_MAX;
	static int8_t x856 = INT8_MIN;
	int32_t t93 = -33172585;

	t93 = ((x853<x854)>>(x855%x856));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x861 = INT16_MAX;
	static uint8_t x862 = 57U;
	int64_t x863 = INT64_MIN;
	static int32_t x864 = INT32_MIN;

	t94 = ((x861<x862)>>(x863%x864));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x866 = -36050474LL;
	uint64_t x867 = UINT64_MAX;
	volatile int32_t t95 = 72419832;

	t95 = ((x865<x866)>>(x867%x868));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x881 = 6;
	volatile int64_t x883 = INT64_MIN;
	static int32_t x884 = INT32_MIN;
	int32_t t96 = -3968;

	t96 = ((x881<x882)>>(x883%x884));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x890 = 192398317U;
	int16_t x891 = INT16_MAX;
	int8_t x892 = INT8_MAX;
	int32_t t97 = -1160;

	t97 = ((x889<x890)>>(x891%x892));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x897 = -488LL;
	volatile int32_t x898 = -143;
	uint16_t x899 = 6207U;
	static int32_t t98 = 5;

	t98 = ((x897<x898)>>(x899%x900));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x901 = INT32_MIN;
	int8_t x902 = INT8_MAX;
	static int8_t x903 = INT8_MAX;
	int16_t x904 = -1;

	t99 = ((x901<x902)>>(x903%x904));

	if (t99 != 1) { NG(); } else { ; }
	
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

