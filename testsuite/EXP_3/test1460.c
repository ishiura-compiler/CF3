#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x9 = INT16_MAX;
int8_t x10 = INT8_MIN;
int8_t x11 = 0;
volatile int32_t t0 = 0;
static int64_t x17 = INT64_MIN;
uint8_t x21 = 15U;
uint8_t x23 = 48U;
static int8_t x26 = INT8_MIN;
int8_t x28 = -1;
volatile int32_t t3 = 2849058;
volatile int16_t x38 = -662;
static volatile int32_t t4 = 1;
uint64_t x44 = 398802950617589244LLU;
int64_t x63 = -262784300501227736LL;
uint8_t x83 = 4U;
static int16_t x86 = INT16_MIN;
int8_t x109 = INT8_MIN;
int32_t t12 = -539;
static int64_t x130 = INT64_MIN;
int8_t x134 = -1;
static volatile int32_t t16 = 1;
volatile int32_t x143 = 1;
static int64_t x156 = 354055324LL;
volatile uint64_t x157 = 10LLU;
uint16_t x183 = 23U;
static int16_t x193 = INT16_MAX;
int32_t x211 = INT32_MIN;
volatile int32_t t26 = 0;
int64_t x226 = INT64_MAX;
static int8_t x236 = 30;
int8_t x273 = INT8_MIN;
int64_t x276 = INT64_MAX;
volatile int32_t t34 = 0;
uint32_t x322 = UINT32_MAX;
volatile int16_t x323 = -433;
int32_t x329 = 343;
uint16_t x332 = 11U;
static int8_t x337 = INT8_MAX;
static int32_t x339 = INT32_MIN;
int32_t x348 = 92913222;
volatile int8_t x353 = INT8_MAX;
int32_t x354 = -1;
volatile int32_t x357 = -1;
int16_t x409 = INT16_MAX;
static int32_t t46 = -3915;
static int64_t x413 = INT64_MIN;
static uint16_t x415 = UINT16_MAX;
static int32_t x417 = INT32_MIN;
uint16_t x420 = UINT16_MAX;
static int32_t x439 = INT32_MIN;
int32_t x442 = INT32_MAX;
int32_t x466 = INT32_MIN;
volatile int32_t t53 = 190;
int32_t x474 = 121;
uint32_t x476 = UINT32_MAX;
static int8_t x480 = -20;
int64_t x501 = -1LL;
static volatile int16_t x504 = -1449;
volatile uint8_t x517 = UINT8_MAX;
int32_t x519 = -3434;
int32_t t57 = -109;
uint64_t x531 = 123LLU;
int64_t x533 = -6465239LL;
int16_t x536 = INT16_MAX;
volatile int32_t t61 = 56;
static int32_t x577 = -1;
int16_t x598 = -3;
static volatile int64_t x599 = INT64_MIN;
int32_t x617 = INT32_MIN;
static int32_t x635 = -19675;
int32_t x636 = -1;
static int32_t t70 = -608079;
uint16_t x645 = UINT16_MAX;
int32_t x653 = 7;
static int64_t x654 = 52150461432203600LL;
int8_t x655 = INT8_MIN;
static uint8_t x657 = 22U;
int32_t x658 = 267865286;
uint64_t x667 = 47464896LLU;
uint64_t x668 = 6632493237LLU;
uint64_t x679 = 75927136857LLU;
int16_t x683 = INT16_MIN;
int32_t x687 = INT32_MIN;
uint8_t x694 = UINT8_MAX;
int16_t x719 = -1;
int32_t t83 = 56540;
int16_t x747 = -1;
int16_t x766 = -7;
int16_t x775 = INT16_MAX;
int64_t x795 = INT64_MIN;
volatile int64_t x822 = INT64_MIN;
int32_t x823 = INT32_MIN;
volatile int32_t t95 = -2854;
volatile int32_t t97 = -180928349;
int16_t x857 = -1;
volatile int8_t x858 = INT8_MAX;
static int16_t x860 = INT16_MAX;


void f0(void) {
	uint8_t x12 = 6U;

	t0 = ((x9<x10)/(x11<x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x18 = 1U;
	int8_t x19 = -1;
	int16_t x20 = INT16_MAX;
	int32_t t1 = 0;

	t1 = ((x17<x18)/(x19<x20));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x22 = 2625955447325063LLU;
	uint8_t x24 = UINT8_MAX;
	static int32_t t2 = 6815688;

	t2 = ((x21<x22)/(x23<x24));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = INT16_MAX;
	static uint64_t x27 = 21433679030LLU;

	t3 = ((x25<x26)/(x27<x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x37 = -3;
	volatile uint16_t x39 = 0U;
	volatile int16_t x40 = INT16_MAX;

	t4 = ((x37<x38)/(x39<x40));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MAX;
	volatile int16_t x43 = INT16_MAX;
	static volatile int32_t t5 = -4;

	t5 = ((x41<x42)/(x43<x44));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x49 = INT8_MIN;
	uint8_t x50 = 0U;
	uint16_t x51 = 125U;
	uint32_t x52 = 20639U;
	static int32_t t6 = -7845;

	t6 = ((x49<x50)/(x51<x52));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x57 = INT8_MAX;
	static volatile int8_t x58 = -1;
	int8_t x59 = INT8_MIN;
	static uint8_t x60 = 6U;
	int32_t t7 = -1357342;

	t7 = ((x57<x58)/(x59<x60));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x61 = 58964185LL;
	static int32_t x62 = INT32_MIN;
	static volatile int16_t x64 = INT16_MAX;
	int32_t t8 = 0;

	t8 = ((x61<x62)/(x63<x64));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x81 = 56U;
	int32_t x82 = 2;
	uint16_t x84 = 2643U;
	int32_t t9 = -740;

	t9 = ((x81<x82)/(x83<x84));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x85 = 1054;
	static int32_t x87 = -1;
	static int32_t x88 = 1787556;
	volatile int32_t t10 = -27363511;

	t10 = ((x85<x86)/(x87<x88));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x93 = -1LL;
	static int16_t x94 = -1;
	int8_t x95 = INT8_MIN;
	volatile int16_t x96 = -26;
	static int32_t t11 = -372293653;

	t11 = ((x93<x94)/(x95<x96));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x110 = 409368U;
	int64_t x111 = -1LL;
	uint16_t x112 = UINT16_MAX;

	t12 = ((x109<x110)/(x111<x112));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x125 = UINT8_MAX;
	int16_t x126 = INT16_MAX;
	int16_t x127 = INT16_MIN;
	int8_t x128 = 0;
	volatile int32_t t13 = 4;

	t13 = ((x125<x126)/(x127<x128));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x129 = UINT8_MAX;
	static int64_t x131 = INT64_MIN;
	static int16_t x132 = -1;
	volatile int32_t t14 = 3566;

	t14 = ((x129<x130)/(x131<x132));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x133 = -1;
	int16_t x135 = INT16_MIN;
	int32_t x136 = -1;
	int32_t t15 = 0;

	t15 = ((x133<x134)/(x135<x136));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x137 = INT32_MIN;
	int64_t x138 = -1LL;
	int8_t x139 = -42;
	int64_t x140 = INT64_MAX;

	t16 = ((x137<x138)/(x139<x140));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x141 = 5U;
	int32_t x142 = INT32_MIN;
	uint64_t x144 = 106278955LLU;
	int32_t t17 = 186414;

	t17 = ((x141<x142)/(x143<x144));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x145 = -2441066LL;
	int16_t x146 = INT16_MAX;
	static uint32_t x147 = 1U;
	uint32_t x148 = UINT32_MAX;
	static int32_t t18 = 24364;

	t18 = ((x145<x146)/(x147<x148));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x153 = -1;
	volatile int64_t x154 = 2382117LL;
	uint16_t x155 = 7471U;
	int32_t t19 = -162;

	t19 = ((x153<x154)/(x155<x156));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x158 = INT64_MAX;
	int64_t x159 = INT64_MIN;
	int64_t x160 = 1LL;
	static volatile int32_t t20 = 42007;

	t20 = ((x157<x158)/(x159<x160));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x169 = 5327U;
	int32_t x170 = INT32_MAX;
	static int32_t x171 = INT32_MAX;
	uint32_t x172 = UINT32_MAX;
	static int32_t t21 = 349969486;

	t21 = ((x169<x170)/(x171<x172));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x181 = -35135038;
	int32_t x182 = INT32_MAX;
	int64_t x184 = INT64_MAX;
	int32_t t22 = 6;

	t22 = ((x181<x182)/(x183<x184));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x189 = INT8_MIN;
	volatile int64_t x190 = -14LL;
	uint64_t x191 = 1209097897143240LLU;
	uint64_t x192 = UINT64_MAX;
	int32_t t23 = -129814756;

	t23 = ((x189<x190)/(x191<x192));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x194 = 232LLU;
	uint16_t x195 = 732U;
	static uint16_t x196 = UINT16_MAX;
	volatile int32_t t24 = 4146;

	t24 = ((x193<x194)/(x195<x196));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x209 = INT8_MIN;
	static int64_t x210 = INT64_MIN;
	uint32_t x212 = UINT32_MAX;
	static volatile int32_t t25 = 271;

	t25 = ((x209<x210)/(x211<x212));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x213 = INT32_MIN;
	static int8_t x214 = INT8_MAX;
	int32_t x215 = INT32_MIN;
	int16_t x216 = -1;

	t26 = ((x213<x214)/(x215<x216));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x225 = -1;
	int16_t x227 = -1;
	uint8_t x228 = 88U;
	volatile int32_t t27 = -5093;

	t27 = ((x225<x226)/(x227<x228));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x233 = INT8_MIN;
	volatile int8_t x234 = -61;
	volatile int8_t x235 = 1;
	volatile int32_t t28 = -45673817;

	t28 = ((x233<x234)/(x235<x236));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x265 = UINT16_MAX;
	volatile int8_t x266 = INT8_MIN;
	volatile int8_t x267 = -28;
	uint64_t x268 = UINT64_MAX;
	int32_t t29 = 167;

	t29 = ((x265<x266)/(x267<x268));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x274 = 2;
	volatile int16_t x275 = 12;
	int32_t t30 = 31;

	t30 = ((x273<x274)/(x275<x276));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x285 = 129819U;
	int8_t x286 = -1;
	static int8_t x287 = -5;
	static int16_t x288 = INT16_MAX;
	volatile int32_t t31 = 0;

	t31 = ((x285<x286)/(x287<x288));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x301 = 233U;
	uint16_t x302 = 27U;
	int32_t x303 = INT32_MIN;
	int32_t x304 = INT32_MAX;
	volatile int32_t t32 = -125;

	t32 = ((x301<x302)/(x303<x304));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x313 = INT64_MAX;
	volatile int32_t x314 = INT32_MIN;
	static int32_t x315 = -215;
	volatile int8_t x316 = 1;
	static volatile int32_t t33 = -39;

	t33 = ((x313<x314)/(x315<x316));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x317 = -10;
	static uint64_t x318 = UINT64_MAX;
	volatile int64_t x319 = -1LL;
	int64_t x320 = INT64_MAX;

	t34 = ((x317<x318)/(x319<x320));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x321 = 47;
	uint8_t x324 = UINT8_MAX;
	int32_t t35 = 801;

	t35 = ((x321<x322)/(x323<x324));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x330 = UINT8_MAX;
	int32_t x331 = INT32_MIN;
	int32_t t36 = -21620;

	t36 = ((x329<x330)/(x331<x332));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x333 = -60871612;
	volatile uint8_t x334 = 0U;
	int16_t x335 = -1;
	int32_t x336 = INT32_MAX;
	volatile int32_t t37 = -809;

	t37 = ((x333<x334)/(x335<x336));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x338 = INT64_MAX;
	volatile int16_t x340 = -1;
	int32_t t38 = -5;

	t38 = ((x337<x338)/(x339<x340));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x345 = INT32_MIN;
	volatile uint64_t x346 = 122967704755362LLU;
	int64_t x347 = INT64_MIN;
	int32_t t39 = -1050002;

	t39 = ((x345<x346)/(x347<x348));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x355 = INT16_MIN;
	static int32_t x356 = 4;
	volatile int32_t t40 = 5155198;

	t40 = ((x353<x354)/(x355<x356));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x358 = -106068771;
	static int32_t x359 = INT32_MIN;
	uint8_t x360 = 38U;
	volatile int32_t t41 = 306137432;

	t41 = ((x357<x358)/(x359<x360));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x361 = 31;
	volatile uint16_t x362 = 26153U;
	volatile int16_t x363 = INT16_MIN;
	static int16_t x364 = -13;
	int32_t t42 = -11;

	t42 = ((x361<x362)/(x363<x364));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x385 = INT64_MAX;
	int32_t x386 = INT32_MIN;
	static int32_t x387 = INT32_MIN;
	uint16_t x388 = UINT16_MAX;
	static volatile int32_t t43 = -299015;

	t43 = ((x385<x386)/(x387<x388));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x389 = -1;
	int16_t x390 = INT16_MIN;
	int64_t x391 = INT64_MIN;
	volatile uint16_t x392 = 888U;
	volatile int32_t t44 = 86378;

	t44 = ((x389<x390)/(x391<x392));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x405 = INT64_MAX;
	int64_t x406 = -1189992249013LL;
	int16_t x407 = -108;
	int16_t x408 = INT16_MAX;
	int32_t t45 = 56;

	t45 = ((x405<x406)/(x407<x408));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x410 = -1;
	int32_t x411 = INT32_MIN;
	int8_t x412 = -1;

	t46 = ((x409<x410)/(x411<x412));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x414 = 206526984213321LLU;
	static uint64_t x416 = 3275717679768284230LLU;
	int32_t t47 = 40;

	t47 = ((x413<x414)/(x415<x416));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x418 = INT16_MAX;
	int8_t x419 = 2;
	int32_t t48 = -228;

	t48 = ((x417<x418)/(x419<x420));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x421 = 508656U;
	uint64_t x422 = UINT64_MAX;
	static int32_t x423 = -15804754;
	static int8_t x424 = INT8_MIN;
	int32_t t49 = 3;

	t49 = ((x421<x422)/(x423<x424));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x437 = INT32_MIN;
	int32_t x438 = INT32_MAX;
	static volatile int32_t x440 = -1;
	int32_t t50 = -7062;

	t50 = ((x437<x438)/(x439<x440));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x441 = UINT8_MAX;
	uint8_t x443 = UINT8_MAX;
	volatile int32_t x444 = INT32_MAX;
	volatile int32_t t51 = 8505391;

	t51 = ((x441<x442)/(x443<x444));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x453 = -1LL;
	volatile uint64_t x454 = 95348770700406620LLU;
	int32_t x455 = -2013;
	uint16_t x456 = 80U;
	int32_t t52 = 269;

	t52 = ((x453<x454)/(x455<x456));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x465 = UINT64_MAX;
	volatile int8_t x467 = -1;
	int16_t x468 = INT16_MAX;

	t53 = ((x465<x466)/(x467<x468));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x473 = 7;
	int8_t x475 = 13;
	int32_t t54 = -2423;

	t54 = ((x473<x474)/(x475<x476));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x477 = INT64_MIN;
	int16_t x478 = -1;
	uint64_t x479 = 467573LLU;
	int32_t t55 = 1;

	t55 = ((x477<x478)/(x479<x480));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x502 = -1;
	int16_t x503 = INT16_MIN;
	static volatile int32_t t56 = 992083391;

	t56 = ((x501<x502)/(x503<x504));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x518 = -3;
	int16_t x520 = -931;

	t57 = ((x517<x518)/(x519<x520));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x521 = INT64_MIN;
	volatile int16_t x522 = -3;
	int8_t x523 = INT8_MIN;
	uint64_t x524 = UINT64_MAX;
	static int32_t t58 = 86197;

	t58 = ((x521<x522)/(x523<x524));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x529 = 17843221693060LLU;
	uint64_t x530 = UINT64_MAX;
	uint64_t x532 = 84200346959129525LLU;
	volatile int32_t t59 = -61;

	t59 = ((x529<x530)/(x531<x532));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x534 = UINT32_MAX;
	volatile uint64_t x535 = 3655LLU;
	int32_t t60 = 7;

	t60 = ((x533<x534)/(x535<x536));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x545 = 7;
	uint16_t x546 = UINT16_MAX;
	uint8_t x547 = 8U;
	int64_t x548 = INT64_MAX;

	t61 = ((x545<x546)/(x547<x548));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x569 = 1;
	int16_t x570 = -1;
	int32_t x571 = -1;
	static uint8_t x572 = 121U;
	volatile int32_t t62 = -180;

	t62 = ((x569<x570)/(x571<x572));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x573 = 3U;
	volatile uint32_t x574 = 128241U;
	int8_t x575 = INT8_MIN;
	uint8_t x576 = 3U;
	volatile int32_t t63 = 82612;

	t63 = ((x573<x574)/(x575<x576));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x578 = 915342741001LLU;
	static volatile int16_t x579 = INT16_MAX;
	volatile uint32_t x580 = 695847328U;
	int32_t t64 = -103499660;

	t64 = ((x577<x578)/(x579<x580));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x581 = 2745;
	int32_t x582 = 62259730;
	uint64_t x583 = 9752631967318LLU;
	int16_t x584 = -1;
	int32_t t65 = -1;

	t65 = ((x581<x582)/(x583<x584));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x589 = 5U;
	uint64_t x590 = 24773766943711LLU;
	uint16_t x591 = UINT16_MAX;
	uint32_t x592 = UINT32_MAX;
	volatile int32_t t66 = 229577006;

	t66 = ((x589<x590)/(x591<x592));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x597 = INT16_MIN;
	int8_t x600 = -22;
	int32_t t67 = 688218;

	t67 = ((x597<x598)/(x599<x600));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x605 = INT16_MIN;
	volatile uint32_t x606 = 2145843828U;
	int8_t x607 = INT8_MIN;
	uint8_t x608 = 10U;
	volatile int32_t t68 = -1899515;

	t68 = ((x605<x606)/(x607<x608));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x618 = 39U;
	int64_t x619 = INT64_MIN;
	int16_t x620 = -5559;
	int32_t t69 = -221796247;

	t69 = ((x617<x618)/(x619<x620));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x633 = INT16_MIN;
	int32_t x634 = INT32_MIN;

	t70 = ((x633<x634)/(x635<x636));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x646 = -25;
	volatile uint16_t x647 = UINT16_MAX;
	uint32_t x648 = 11177707U;
	static int32_t t71 = -12731891;

	t71 = ((x645<x646)/(x647<x648));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x656 = UINT16_MAX;
	int32_t t72 = -13;

	t72 = ((x653<x654)/(x655<x656));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x659 = INT8_MIN;
	uint8_t x660 = 15U;
	int32_t t73 = -431841226;

	t73 = ((x657<x658)/(x659<x660));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x665 = 222;
	static uint8_t x666 = 60U;
	volatile int32_t t74 = -39727034;

	t74 = ((x665<x666)/(x667<x668));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x669 = INT64_MAX;
	static uint32_t x670 = 0U;
	uint32_t x671 = 20031240U;
	uint64_t x672 = 12098698101704LLU;
	volatile int32_t t75 = 291;

	t75 = ((x669<x670)/(x671<x672));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x673 = -83661LL;
	volatile int16_t x674 = -6995;
	int8_t x675 = -1;
	uint16_t x676 = 5U;
	int32_t t76 = 986605;

	t76 = ((x673<x674)/(x675<x676));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x677 = UINT64_MAX;
	volatile int32_t x678 = INT32_MAX;
	uint64_t x680 = UINT64_MAX;
	int32_t t77 = -831112;

	t77 = ((x677<x678)/(x679<x680));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x681 = INT32_MIN;
	int32_t x682 = INT32_MIN;
	int64_t x684 = -1LL;
	int32_t t78 = 0;

	t78 = ((x681<x682)/(x683<x684));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x685 = INT64_MIN;
	int8_t x686 = -1;
	int8_t x688 = 0;
	static volatile int32_t t79 = -1;

	t79 = ((x685<x686)/(x687<x688));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x693 = INT32_MAX;
	volatile int16_t x695 = INT16_MIN;
	int8_t x696 = INT8_MIN;
	static int32_t t80 = -1600;

	t80 = ((x693<x694)/(x695<x696));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x697 = UINT16_MAX;
	static int8_t x698 = -1;
	int64_t x699 = INT64_MIN;
	static uint8_t x700 = 3U;
	volatile int32_t t81 = 284141118;

	t81 = ((x697<x698)/(x699<x700));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x717 = -1;
	uint16_t x718 = 3552U;
	int8_t x720 = INT8_MAX;
	static int32_t t82 = -110540;

	t82 = ((x717<x718)/(x719<x720));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x725 = -1;
	volatile uint8_t x726 = 8U;
	static uint8_t x727 = 3U;
	static uint32_t x728 = 391498U;

	t83 = ((x725<x726)/(x727<x728));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x733 = 472507969425859450LL;
	static int32_t x734 = INT32_MAX;
	uint16_t x735 = 2979U;
	uint32_t x736 = 26657U;
	volatile int32_t t84 = 4759;

	t84 = ((x733<x734)/(x735<x736));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x745 = INT64_MIN;
	static int16_t x746 = INT16_MAX;
	uint8_t x748 = 3U;
	static int32_t t85 = 1603752;

	t85 = ((x745<x746)/(x747<x748));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x753 = -1;
	volatile int8_t x754 = 0;
	static int32_t x755 = INT32_MIN;
	int64_t x756 = -1LL;
	volatile int32_t t86 = 3966;

	t86 = ((x753<x754)/(x755<x756));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x761 = INT16_MIN;
	static int16_t x762 = -1;
	int64_t x763 = -1LL;
	uint16_t x764 = UINT16_MAX;
	volatile int32_t t87 = 122;

	t87 = ((x761<x762)/(x763<x764));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x765 = -2;
	static uint32_t x767 = 88063052U;
	volatile int8_t x768 = -1;
	int32_t t88 = 428355775;

	t88 = ((x765<x766)/(x767<x768));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x773 = -1LL;
	int32_t x774 = -1;
	uint32_t x776 = UINT32_MAX;
	int32_t t89 = 8;

	t89 = ((x773<x774)/(x775<x776));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x793 = 7924402U;
	int64_t x794 = -2LL;
	volatile uint16_t x796 = 4U;
	volatile int32_t t90 = 1010588472;

	t90 = ((x793<x794)/(x795<x796));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x805 = -1;
	int8_t x806 = INT8_MIN;
	int64_t x807 = 14887LL;
	int32_t x808 = INT32_MAX;
	static volatile int32_t t91 = -62954893;

	t91 = ((x805<x806)/(x807<x808));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x817 = -1;
	int8_t x818 = INT8_MIN;
	static int16_t x819 = -1;
	uint8_t x820 = UINT8_MAX;
	int32_t t92 = 1271;

	t92 = ((x817<x818)/(x819<x820));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x821 = INT8_MIN;
	int64_t x824 = -1LL;
	static volatile int32_t t93 = 459001;

	t93 = ((x821<x822)/(x823<x824));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x825 = INT64_MIN;
	int64_t x826 = INT64_MAX;
	int32_t x827 = INT32_MIN;
	int32_t x828 = INT32_MAX;
	static int32_t t94 = -31146726;

	t94 = ((x825<x826)/(x827<x828));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x829 = -7;
	static volatile int64_t x830 = 1089080LL;
	volatile int8_t x831 = 12;
	int8_t x832 = INT8_MAX;

	t95 = ((x829<x830)/(x831<x832));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x833 = INT8_MAX;
	static uint8_t x834 = 5U;
	uint32_t x835 = 1490935U;
	uint32_t x836 = 89371050U;
	int32_t t96 = -2264117;

	t96 = ((x833<x834)/(x835<x836));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x849 = INT32_MAX;
	volatile int8_t x850 = 2;
	volatile int16_t x851 = -1;
	volatile uint16_t x852 = 3958U;

	t97 = ((x849<x850)/(x851<x852));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x859 = INT8_MIN;
	volatile int32_t t98 = -618921357;

	t98 = ((x857<x858)/(x859<x860));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x865 = 6099U;
	uint32_t x866 = 28804051U;
	uint16_t x867 = 167U;
	static volatile uint64_t x868 = 64599325LLU;
	static volatile int32_t t99 = -8692;

	t99 = ((x865<x866)/(x867<x868));

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

