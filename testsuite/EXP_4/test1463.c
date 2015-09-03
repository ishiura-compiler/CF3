#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = 49;
int64_t x7 = INT64_MIN;
static int8_t x15 = INT8_MIN;
volatile int64_t x21 = 149468LL;
static int64_t t3 = -16260LL;
uint8_t x32 = UINT8_MAX;
static volatile int32_t t5 = 7;
static int16_t x33 = 1;
int8_t x36 = 11;
static int32_t t6 = -100574877;
int8_t x45 = INT8_MAX;
int32_t t7 = -160030056;
uint64_t x79 = UINT64_MAX;
uint32_t t11 = 360U;
int64_t x89 = 908062288151207581LL;
int16_t x91 = INT16_MIN;
int32_t x93 = 58;
uint32_t x154 = 1629251U;
int32_t x158 = -1;
static uint32_t x167 = 4U;
int64_t t21 = -7945885988619891LL;
uint64_t x177 = 62863196014845LLU;
static uint64_t t22 = 463899773834430173LLU;
volatile int8_t x184 = INT8_MIN;
uint16_t x199 = 0U;
static int8_t x219 = INT8_MIN;
uint32_t x220 = 2994U;
static uint8_t x228 = 92U;
uint32_t x229 = UINT32_MAX;
uint32_t t30 = 10U;
int16_t x256 = 16;
int16_t x278 = INT16_MAX;
int64_t x283 = -24799827LL;
int64_t x286 = INT64_MAX;
int16_t x288 = INT16_MIN;
volatile uint64_t t34 = UINT64_MAX;
uint32_t x297 = 194438522U;
uint8_t x301 = UINT8_MAX;
int64_t x306 = INT64_MIN;
int16_t x307 = -909;
uint16_t x320 = 16U;
int32_t t42 = 0;
uint64_t x353 = 11LLU;
uint64_t x356 = UINT64_MAX;
int32_t x358 = 133854;
uint16_t x360 = 14046U;
int16_t x361 = 503;
volatile int32_t x362 = INT32_MIN;
volatile int32_t t45 = 1086765;
uint64_t x366 = 600912LLU;
volatile int32_t t49 = 66360474;
uint8_t x409 = 4U;
int64_t x413 = INT64_MAX;
volatile int8_t x415 = -1;
int64_t x419 = -55LL;
volatile uint32_t x432 = 20U;
int32_t x439 = INT32_MIN;
uint8_t x444 = 30U;
int64_t x454 = INT64_MIN;
static int16_t x466 = INT16_MIN;
int32_t t64 = 3325205;
static int8_t x490 = INT8_MIN;
int16_t x498 = -1;
volatile int16_t x506 = INT16_MIN;
volatile int32_t t68 = 103069459;
int16_t x509 = INT16_MAX;
static int8_t x510 = INT8_MAX;
volatile int32_t x511 = INT32_MIN;
volatile int32_t t70 = -19904311;
static volatile int32_t x523 = INT32_MIN;
uint32_t x533 = 68U;
int16_t x538 = -1;
int64_t x554 = 33381LL;
uint16_t x570 = UINT16_MAX;
static volatile int32_t t79 = -87726;
int16_t x580 = INT16_MIN;
int16_t x601 = INT16_MAX;
int16_t x604 = INT16_MIN;
static int32_t x629 = INT32_MAX;
volatile uint16_t x636 = UINT16_MAX;
static uint16_t x641 = 122U;
int8_t x663 = -60;
int16_t x664 = INT16_MIN;
uint8_t x687 = UINT8_MAX;
volatile int32_t t96 = 111510;
uint64_t x689 = 109LLU;
uint32_t x698 = 0U;


void f0(void) {
	int32_t x6 = 10846;
	int16_t x8 = 0;
	volatile int32_t t0 = -853410;

	t0 = (x5>>(x6<(x7<x8)));

	if (t0 != 49) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = UINT8_MAX;
	uint8_t x10 = 75U;
	int16_t x11 = 13382;
	static volatile int64_t x12 = -1LL;
	static volatile int32_t t1 = -449237577;

	t1 = (x9>>(x10<(x11<x12)));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = 27U;
	int64_t x14 = INT64_MAX;
	static int32_t x16 = INT32_MIN;
	volatile uint32_t t2 = 103U;

	t2 = (x13>>(x14<(x15<x16)));

	if (t2 != 27U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x22 = 1U;
	uint16_t x23 = UINT16_MAX;
	int64_t x24 = INT64_MIN;

	t3 = (x21>>(x22<(x23<x24)));

	if (t3 != 149468LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = UINT32_MAX;
	uint16_t x26 = 2560U;
	int64_t x27 = -1LL;
	static int8_t x28 = 4;
	static volatile uint32_t t4 = UINT32_MAX;

	t4 = (x25>>(x26<(x27<x28)));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x29 = UINT8_MAX;
	int16_t x30 = INT16_MAX;
	volatile int64_t x31 = -1LL;

	t5 = (x29>>(x30<(x31<x32)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x34 = -1283;
	int64_t x35 = INT64_MAX;

	t6 = (x33>>(x34<(x35<x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x46 = INT32_MIN;
	static int16_t x47 = -1;
	uint64_t x48 = UINT64_MAX;

	t7 = (x45>>(x46<(x47<x48)));

	if (t7 != 63) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x57 = 113;
	int64_t x58 = 24044109LL;
	uint64_t x59 = UINT64_MAX;
	int32_t x60 = INT32_MAX;
	volatile int32_t t8 = 435508;

	t8 = (x57>>(x58<(x59<x60)));

	if (t8 != 113) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x77 = 53;
	uint64_t x78 = UINT64_MAX;
	volatile uint8_t x80 = 27U;
	int32_t t9 = -21664;

	t9 = (x77>>(x78<(x79<x80)));

	if (t9 != 53) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x81 = 62223;
	int8_t x82 = INT8_MIN;
	int16_t x83 = INT16_MAX;
	static int16_t x84 = -1709;
	int32_t t10 = -57;

	t10 = (x81>>(x82<(x83<x84)));

	if (t10 != 31111) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x85 = UINT32_MAX;
	int16_t x86 = -1;
	uint64_t x87 = UINT64_MAX;
	int8_t x88 = -1;

	t11 = (x85>>(x86<(x87<x88)));

	if (t11 != 2147483647U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x90 = INT32_MIN;
	static int16_t x92 = INT16_MIN;
	volatile int64_t t12 = 471516233169LL;

	t12 = (x89>>(x90<(x91<x92)));

	if (t12 != 454031144075603790LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x94 = INT64_MIN;
	static int64_t x95 = -1LL;
	int16_t x96 = INT16_MIN;
	int32_t t13 = -2;

	t13 = (x93>>(x94<(x95<x96)));

	if (t13 != 29) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x105 = 10462739239070LLU;
	int64_t x106 = INT64_MIN;
	uint8_t x107 = 61U;
	int64_t x108 = -1LL;
	volatile uint64_t t14 = 160724LLU;

	t14 = (x105>>(x106<(x107<x108)));

	if (t14 != 5231369619535LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x121 = 232U;
	volatile uint64_t x122 = UINT64_MAX;
	static int64_t x123 = 4161081LL;
	volatile uint16_t x124 = UINT16_MAX;
	static int32_t t15 = 123166495;

	t15 = (x121>>(x122<(x123<x124)));

	if (t15 != 232) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x125 = 2517;
	int32_t x126 = INT32_MAX;
	int16_t x127 = -1;
	int64_t x128 = INT64_MIN;
	volatile int32_t t16 = 33;

	t16 = (x125>>(x126<(x127<x128)));

	if (t16 != 2517) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x149 = INT8_MAX;
	static int64_t x150 = 14835LL;
	volatile int64_t x151 = INT64_MIN;
	int32_t x152 = -1;
	static int32_t t17 = 6871681;

	t17 = (x149>>(x150<(x151<x152)));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x153 = UINT8_MAX;
	uint16_t x155 = 0U;
	volatile int32_t x156 = -556480854;
	int32_t t18 = 1141;

	t18 = (x153>>(x154<(x155<x156)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x157 = 24U;
	volatile int8_t x159 = INT8_MAX;
	uint16_t x160 = 149U;
	static volatile int32_t t19 = -7015072;

	t19 = (x157>>(x158<(x159<x160)));

	if (t19 != 12) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x165 = 1040155;
	int16_t x166 = -1;
	int16_t x168 = INT16_MIN;
	volatile int32_t t20 = -1;

	t20 = (x165>>(x166<(x167<x168)));

	if (t20 != 520077) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x173 = 5115LL;
	uint64_t x174 = UINT64_MAX;
	static volatile int32_t x175 = INT32_MIN;
	int64_t x176 = -1LL;

	t21 = (x173>>(x174<(x175<x176)));

	if (t21 != 5115LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x178 = INT64_MAX;
	int64_t x179 = INT64_MIN;
	static int32_t x180 = INT32_MIN;

	t22 = (x177>>(x178<(x179<x180)));

	if (t22 != 62863196014845LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x181 = UINT8_MAX;
	int8_t x182 = INT8_MAX;
	int8_t x183 = -1;
	int32_t t23 = 842;

	t23 = (x181>>(x182<(x183<x184)));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x193 = 0;
	static volatile int32_t x194 = 781524553;
	int8_t x195 = -34;
	volatile int8_t x196 = INT8_MAX;
	volatile int32_t t24 = -3;

	t24 = (x193>>(x194<(x195<x196)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x197 = 118623346U;
	int64_t x198 = INT64_MIN;
	volatile uint8_t x200 = UINT8_MAX;
	volatile uint32_t t25 = 762U;

	t25 = (x197>>(x198<(x199<x200)));

	if (t25 != 59311673U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x205 = 58U;
	uint8_t x206 = 1U;
	int16_t x207 = 133;
	static int32_t x208 = 169465841;
	int32_t t26 = -8856210;

	t26 = (x205>>(x206<(x207<x208)));

	if (t26 != 58) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x217 = 227U;
	int16_t x218 = 4;
	int32_t t27 = -8077461;

	t27 = (x217>>(x218<(x219<x220)));

	if (t27 != 227) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x225 = 101;
	volatile int64_t x226 = INT64_MAX;
	uint32_t x227 = UINT32_MAX;
	static int32_t t28 = -1355;

	t28 = (x225>>(x226<(x227<x228)));

	if (t28 != 101) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x230 = INT64_MAX;
	int16_t x231 = INT16_MIN;
	uint8_t x232 = 2U;
	static uint32_t t29 = UINT32_MAX;

	t29 = (x229>>(x230<(x231<x232)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x245 = 2312110U;
	int8_t x246 = -9;
	uint8_t x247 = UINT8_MAX;
	int64_t x248 = INT64_MIN;

	t30 = (x245>>(x246<(x247<x248)));

	if (t30 != 1156055U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x253 = 31;
	volatile uint64_t x254 = 4LLU;
	int8_t x255 = INT8_MIN;
	volatile int32_t t31 = -44;

	t31 = (x253>>(x254<(x255<x256)));

	if (t31 != 31) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x277 = 15U;
	volatile int32_t x279 = INT32_MIN;
	volatile int64_t x280 = -206214610069LL;
	volatile int32_t t32 = -15;

	t32 = (x277>>(x278<(x279<x280)));

	if (t32 != 15) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x281 = 20U;
	int64_t x282 = INT64_MAX;
	int8_t x284 = 4;
	uint32_t t33 = 2129U;

	t33 = (x281>>(x282<(x283<x284)));

	if (t33 != 20U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x285 = UINT64_MAX;
	uint64_t x287 = 28034LLU;

	t34 = (x285>>(x286<(x287<x288)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x293 = INT32_MAX;
	int8_t x294 = INT8_MAX;
	uint8_t x295 = UINT8_MAX;
	int16_t x296 = 430;
	volatile int32_t t35 = INT32_MAX;

	t35 = (x293>>(x294<(x295<x296)));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x298 = INT32_MAX;
	int64_t x299 = -1LL;
	uint16_t x300 = UINT16_MAX;
	volatile uint32_t t36 = 0U;

	t36 = (x297>>(x298<(x299<x300)));

	if (t36 != 194438522U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x302 = 7036LLU;
	volatile int8_t x303 = INT8_MIN;
	volatile uint8_t x304 = 1U;
	int32_t t37 = -2019846;

	t37 = (x301>>(x302<(x303<x304)));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x305 = 2U;
	uint64_t x308 = 328LLU;
	volatile int32_t t38 = 872802921;

	t38 = (x305>>(x306<(x307<x308)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x317 = INT8_MAX;
	int8_t x318 = INT8_MIN;
	volatile int64_t x319 = 18LL;
	static int32_t t39 = 29371904;

	t39 = (x317>>(x318<(x319<x320)));

	if (t39 != 63) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x333 = 4112889642043LL;
	volatile int32_t x334 = -1;
	int8_t x335 = 9;
	volatile int64_t x336 = INT64_MIN;
	volatile int64_t t40 = -64304280659LL;

	t40 = (x333>>(x334<(x335<x336)));

	if (t40 != 2056444821021LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x337 = 19LL;
	int64_t x338 = -1LL;
	static uint64_t x339 = UINT64_MAX;
	int64_t x340 = INT64_MIN;
	volatile int64_t t41 = 51LL;

	t41 = (x337>>(x338<(x339<x340)));

	if (t41 != 9LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x349 = 1;
	static int64_t x350 = -1LL;
	int8_t x351 = INT8_MIN;
	int64_t x352 = INT64_MIN;

	t42 = (x349>>(x350<(x351<x352)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x354 = INT16_MIN;
	int64_t x355 = -73LL;
	static volatile uint64_t t43 = 1797LLU;

	t43 = (x353>>(x354<(x355<x356)));

	if (t43 != 5LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x357 = 405U;
	int64_t x359 = -159918607LL;
	int32_t t44 = 23119851;

	t44 = (x357>>(x358<(x359<x360)));

	if (t44 != 405) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x363 = 38244613U;
	static int32_t x364 = 55;

	t45 = (x361>>(x362<(x363<x364)));

	if (t45 != 251) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x365 = UINT32_MAX;
	volatile int8_t x367 = INT8_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = (x365>>(x366<(x367<x368)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x369 = INT64_MAX;
	int64_t x370 = -49229850546LL;
	int32_t x371 = -1;
	static volatile uint16_t x372 = UINT16_MAX;
	volatile int64_t t47 = 685936830875LL;

	t47 = (x369>>(x370<(x371<x372)));

	if (t47 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x385 = INT8_MAX;
	int32_t x386 = 1334439;
	static uint8_t x387 = 7U;
	uint32_t x388 = 8255756U;
	int32_t t48 = 8;

	t48 = (x385>>(x386<(x387<x388)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x393 = 12280U;
	volatile int8_t x394 = 7;
	int8_t x395 = -1;
	uint8_t x396 = 1U;

	t49 = (x393>>(x394<(x395<x396)));

	if (t49 != 12280) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x410 = INT16_MAX;
	static volatile uint32_t x411 = 23U;
	volatile int32_t x412 = -2;
	static volatile int32_t t50 = 30556;

	t50 = (x409>>(x410<(x411<x412)));

	if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x414 = 908095LLU;
	int64_t x416 = -1310506438872LL;
	volatile int64_t t51 = INT64_MAX;

	t51 = (x413>>(x414<(x415<x416)));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x417 = UINT32_MAX;
	static volatile int8_t x418 = -2;
	uint16_t x420 = UINT16_MAX;
	uint32_t t52 = 58U;

	t52 = (x417>>(x418<(x419<x420)));

	if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x429 = 104650464LLU;
	uint32_t x430 = 22222188U;
	uint32_t x431 = 1685948U;
	uint64_t t53 = 14923096LLU;

	t53 = (x429>>(x430<(x431<x432)));

	if (t53 != 104650464LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x433 = UINT16_MAX;
	volatile int64_t x434 = INT64_MIN;
	volatile int16_t x435 = INT16_MAX;
	int32_t x436 = -290908802;
	static volatile int32_t t54 = -135691;

	t54 = (x433>>(x434<(x435<x436)));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x437 = INT64_MAX;
	static int64_t x438 = INT64_MAX;
	int8_t x440 = -1;
	int64_t t55 = INT64_MAX;

	t55 = (x437>>(x438<(x439<x440)));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x441 = 254030881456161LLU;
	int16_t x442 = INT16_MAX;
	volatile int8_t x443 = -1;
	uint64_t t56 = 0LLU;

	t56 = (x441>>(x442<(x443<x444)));

	if (t56 != 254030881456161LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x449 = 344;
	int16_t x450 = 224;
	int32_t x451 = -1;
	int8_t x452 = 4;
	int32_t t57 = 53016;

	t57 = (x449>>(x450<(x451<x452)));

	if (t57 != 344) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x453 = 325U;
	int64_t x455 = INT64_MIN;
	int8_t x456 = -1;
	static int32_t t58 = 367;

	t58 = (x453>>(x454<(x455<x456)));

	if (t58 != 162) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x457 = 120U;
	int64_t x458 = -4291607270160025LL;
	int64_t x459 = -1881832228540552LL;
	static uint32_t x460 = 1167333783U;
	volatile int32_t t59 = -17397;

	t59 = (x457>>(x458<(x459<x460)));

	if (t59 != 60) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x461 = UINT64_MAX;
	int64_t x462 = INT64_MIN;
	volatile uint16_t x463 = 22368U;
	uint64_t x464 = 459698191315LLU;
	uint64_t t60 = 30315643881328230LLU;

	t60 = (x461>>(x462<(x463<x464)));

	if (t60 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x465 = INT8_MAX;
	int16_t x467 = INT16_MAX;
	volatile int32_t x468 = -1;
	volatile int32_t t61 = -487669;

	t61 = (x465>>(x466<(x467<x468)));

	if (t61 != 63) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x473 = 51U;
	uint64_t x474 = 14LLU;
	int32_t x475 = INT32_MIN;
	static uint16_t x476 = 6796U;
	volatile int32_t t62 = 773166400;

	t62 = (x473>>(x474<(x475<x476)));

	if (t62 != 51) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x477 = 133270408278LLU;
	static int16_t x478 = INT16_MIN;
	int32_t x479 = -1;
	volatile int8_t x480 = 37;
	volatile uint64_t t63 = 2586108566675604LLU;

	t63 = (x477>>(x478<(x479<x480)));

	if (t63 != 66635204139LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x481 = 1;
	int32_t x482 = INT32_MAX;
	static int8_t x483 = INT8_MAX;
	static int16_t x484 = -1;

	t64 = (x481>>(x482<(x483<x484)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x485 = 0LLU;
	int8_t x486 = INT8_MAX;
	int64_t x487 = INT64_MIN;
	uint16_t x488 = 16291U;
	uint64_t t65 = 4019380296LLU;

	t65 = (x485>>(x486<(x487<x488)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x489 = UINT16_MAX;
	volatile uint16_t x491 = 8U;
	uint64_t x492 = UINT64_MAX;
	volatile int32_t t66 = -203818;

	t66 = (x489>>(x490<(x491<x492)));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x497 = UINT32_MAX;
	int32_t x499 = INT32_MAX;
	int64_t x500 = INT64_MAX;
	volatile uint32_t t67 = 5901U;

	t67 = (x497>>(x498<(x499<x500)));

	if (t67 != 2147483647U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x505 = UINT8_MAX;
	uint8_t x507 = UINT8_MAX;
	static uint16_t x508 = 32084U;

	t68 = (x505>>(x506<(x507<x508)));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x512 = 110U;
	volatile int32_t t69 = -11517448;

	t69 = (x509>>(x510<(x511<x512)));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x513 = INT16_MAX;
	int8_t x514 = INT8_MIN;
	int32_t x515 = INT32_MAX;
	uint8_t x516 = 0U;

	t70 = (x513>>(x514<(x515<x516)));

	if (t70 != 16383) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x517 = 16124930637013456LLU;
	int16_t x518 = INT16_MAX;
	int32_t x519 = 1;
	int32_t x520 = INT32_MIN;
	static volatile uint64_t t71 = 387208536525LLU;

	t71 = (x517>>(x518<(x519<x520)));

	if (t71 != 16124930637013456LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x521 = 2;
	int32_t x522 = 7;
	int16_t x524 = -1;
	static volatile int32_t t72 = -3068;

	t72 = (x521>>(x522<(x523<x524)));

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x534 = 72665;
	static uint8_t x535 = 12U;
	volatile int32_t x536 = INT32_MIN;
	volatile uint32_t t73 = 19907U;

	t73 = (x533>>(x534<(x535<x536)));

	if (t73 != 68U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x537 = INT8_MAX;
	int16_t x539 = INT16_MIN;
	static int8_t x540 = INT8_MIN;
	volatile int32_t t74 = 1202;

	t74 = (x537>>(x538<(x539<x540)));

	if (t74 != 63) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x541 = 4229;
	int8_t x542 = -7;
	uint16_t x543 = UINT16_MAX;
	uint16_t x544 = 821U;
	static volatile int32_t t75 = -387851;

	t75 = (x541>>(x542<(x543<x544)));

	if (t75 != 2114) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x553 = 1105989;
	uint8_t x555 = 13U;
	uint16_t x556 = 13U;
	volatile int32_t t76 = -53420;

	t76 = (x553>>(x554<(x555<x556)));

	if (t76 != 1105989) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x561 = 748U;
	uint16_t x562 = 11U;
	static uint8_t x563 = 2U;
	volatile int16_t x564 = -12543;
	volatile int32_t t77 = -3153789;

	t77 = (x561>>(x562<(x563<x564)));

	if (t77 != 748) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x565 = UINT8_MAX;
	volatile int64_t x566 = INT64_MIN;
	uint16_t x567 = UINT16_MAX;
	uint8_t x568 = 34U;
	static int32_t t78 = 49;

	t78 = (x565>>(x566<(x567<x568)));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x569 = UINT8_MAX;
	int8_t x571 = 46;
	uint8_t x572 = 111U;

	t79 = (x569>>(x570<(x571<x572)));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x577 = 7U;
	int32_t x578 = INT32_MIN;
	uint64_t x579 = 4640927474104LLU;
	static int32_t t80 = 1;

	t80 = (x577>>(x578<(x579<x580)));

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x581 = 3U;
	int8_t x582 = 0;
	uint64_t x583 = 2097865975581672372LLU;
	int16_t x584 = 9;
	int32_t t81 = 517634654;

	t81 = (x581>>(x582<(x583<x584)));

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x593 = UINT32_MAX;
	volatile uint64_t x594 = UINT64_MAX;
	int32_t x595 = -1;
	int32_t x596 = -1;
	volatile uint32_t t82 = UINT32_MAX;

	t82 = (x593>>(x594<(x595<x596)));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x602 = INT32_MAX;
	volatile uint64_t x603 = 919182334LLU;
	static int32_t t83 = 0;

	t83 = (x601>>(x602<(x603<x604)));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x609 = 60434598LLU;
	volatile uint16_t x610 = 4U;
	static uint8_t x611 = UINT8_MAX;
	volatile int16_t x612 = INT16_MAX;
	uint64_t t84 = 27572LLU;

	t84 = (x609>>(x610<(x611<x612)));

	if (t84 != 60434598LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x621 = 89;
	int32_t x622 = INT32_MIN;
	static int64_t x623 = INT64_MAX;
	volatile int32_t x624 = INT32_MIN;
	volatile int32_t t85 = -247668709;

	t85 = (x621>>(x622<(x623<x624)));

	if (t85 != 44) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x630 = INT64_MIN;
	int16_t x631 = INT16_MIN;
	static volatile int64_t x632 = INT64_MIN;
	int32_t t86 = 0;

	t86 = (x629>>(x630<(x631<x632)));

	if (t86 != 1073741823) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x633 = 24;
	static volatile uint16_t x634 = UINT16_MAX;
	volatile int64_t x635 = -77050709LL;
	volatile int32_t t87 = -1093437;

	t87 = (x633>>(x634<(x635<x636)));

	if (t87 != 24) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x637 = 44U;
	static uint16_t x638 = 25U;
	static int16_t x639 = INT16_MAX;
	static volatile uint32_t x640 = UINT32_MAX;
	int32_t t88 = 441896;

	t88 = (x637>>(x638<(x639<x640)));

	if (t88 != 44) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x642 = INT64_MAX;
	int64_t x643 = INT64_MIN;
	uint32_t x644 = 39250U;
	int32_t t89 = -6928;

	t89 = (x641>>(x642<(x643<x644)));

	if (t89 != 122) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x649 = UINT8_MAX;
	int32_t x650 = INT32_MAX;
	static int8_t x651 = 0;
	volatile uint16_t x652 = UINT16_MAX;
	volatile int32_t t90 = -1;

	t90 = (x649>>(x650<(x651<x652)));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x661 = 25U;
	static volatile int64_t x662 = -54LL;
	int32_t t91 = -149;

	t91 = (x661>>(x662<(x663<x664)));

	if (t91 != 12) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x669 = 1107U;
	static volatile int32_t x670 = INT32_MIN;
	int64_t x671 = INT64_MIN;
	uint16_t x672 = 2U;
	static uint32_t t92 = 747U;

	t92 = (x669>>(x670<(x671<x672)));

	if (t92 != 553U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x673 = 207U;
	volatile int32_t x674 = INT32_MAX;
	int32_t x675 = -49;
	static uint8_t x676 = 21U;
	int32_t t93 = 3934096;

	t93 = (x673>>(x674<(x675<x676)));

	if (t93 != 207) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x677 = 41378354U;
	uint64_t x678 = UINT64_MAX;
	volatile int8_t x679 = -1;
	int64_t x680 = INT64_MIN;
	uint32_t t94 = 4370212U;

	t94 = (x677>>(x678<(x679<x680)));

	if (t94 != 41378354U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x681 = 14U;
	uint16_t x682 = 0U;
	uint8_t x683 = 0U;
	static int16_t x684 = 4008;
	volatile int32_t t95 = -27844629;

	t95 = (x681>>(x682<(x683<x684)));

	if (t95 != 7) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x685 = INT16_MAX;
	int16_t x686 = INT16_MIN;
	static int32_t x688 = 239605;

	t96 = (x685>>(x686<(x687<x688)));

	if (t96 != 16383) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x690 = 26425LLU;
	volatile int16_t x691 = INT16_MIN;
	int8_t x692 = -1;
	static uint64_t t97 = 1186401040930LLU;

	t97 = (x689>>(x690<(x691<x692)));

	if (t97 != 109LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x697 = UINT64_MAX;
	volatile int16_t x699 = -61;
	uint16_t x700 = 7U;
	volatile uint64_t t98 = 118116LLU;

	t98 = (x697>>(x698<(x699<x700)));

	if (t98 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x701 = 0;
	int8_t x702 = INT8_MIN;
	uint32_t x703 = 1092350222U;
	int16_t x704 = INT16_MIN;
	int32_t t99 = -834;

	t99 = (x701>>(x702<(x703<x704)));

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

