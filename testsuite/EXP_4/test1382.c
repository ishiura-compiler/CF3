#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x30 = 15LLU;
uint8_t x66 = 50U;
static int32_t x74 = INT32_MIN;
volatile int32_t t5 = -245627;
volatile int16_t x94 = INT16_MIN;
int32_t x103 = INT32_MIN;
int64_t x106 = INT64_MIN;
uint8_t x127 = 5U;
volatile int64_t t13 = -380LL;
volatile uint8_t x156 = 6U;
int32_t t18 = -15221378;
static int32_t x162 = INT32_MIN;
uint32_t x169 = UINT32_MAX;
static uint16_t x172 = UINT16_MAX;
volatile uint32_t t20 = 353938721U;
int32_t x185 = -87439183;
volatile int32_t x188 = 177;
int32_t x199 = -1;
volatile int32_t t24 = 5;
int32_t x203 = -1;
int8_t x208 = INT8_MIN;
static volatile int64_t t26 = 0LL;
uint16_t x218 = 4519U;
volatile int8_t x237 = -53;
int8_t x239 = INT8_MIN;
int32_t x244 = -251271;
int8_t x247 = -16;
int32_t t30 = 94781;
int16_t x254 = INT16_MIN;
volatile int64_t x256 = 51152729290LL;
volatile uint32_t t32 = 1893056U;
volatile int32_t x297 = 1480;
static uint16_t x300 = 20U;
volatile int32_t t36 = 116790564;
int64_t x319 = -2955634468LL;
volatile int32_t x320 = INT32_MIN;
static int32_t x329 = INT32_MIN;
int8_t x339 = INT8_MIN;
uint64_t x350 = UINT64_MAX;
int8_t x354 = INT8_MAX;
uint32_t x361 = 4013U;
static uint64_t x366 = 1655828891899175LLU;
int32_t x393 = -3;
static volatile int32_t t51 = -186;
uint32_t t52 = 363776U;
static volatile uint16_t x433 = 365U;
volatile int64_t x443 = INT64_MIN;
volatile int16_t x452 = INT16_MAX;
uint8_t x458 = 3U;
static int64_t x461 = INT64_MIN;
int16_t x462 = INT16_MIN;
volatile int64_t x463 = INT64_MIN;
static volatile uint32_t x480 = UINT32_MAX;
int8_t x486 = INT8_MAX;
uint8_t x488 = UINT8_MAX;
uint32_t x491 = 1515U;
static int64_t x509 = INT64_MAX;
static volatile int8_t x511 = -1;
uint32_t x533 = 5191U;
uint32_t x534 = UINT32_MAX;
int16_t x547 = INT16_MIN;
uint16_t x548 = UINT16_MAX;
volatile int32_t t65 = -42718192;
int64_t x556 = INT64_MAX;
volatile int32_t x582 = INT32_MIN;
int32_t t73 = 100;
volatile int64_t x613 = INT64_MIN;
int8_t x615 = INT8_MIN;
uint16_t x624 = 2333U;
uint8_t x628 = 55U;
int32_t t77 = -24;
int32_t x641 = INT32_MIN;
uint32_t x642 = 1573381U;
int16_t x647 = INT16_MIN;
int16_t x648 = INT16_MAX;
static int64_t x659 = INT64_MAX;
uint32_t x663 = 55U;
static int16_t x664 = INT16_MIN;
int64_t x667 = -202547273415628196LL;
volatile int64_t t83 = 86592593028529LL;
static int8_t x682 = INT8_MIN;
volatile int32_t t84 = 0;
volatile int32_t t86 = -665618;
static int8_t x707 = -1;
uint8_t x708 = 3U;
static uint32_t x726 = 17U;
int16_t x745 = -29;
int64_t x758 = -68LL;
int16_t x768 = -1;
volatile uint32_t t95 = 4967033U;
uint64_t x807 = 1391123LLU;
volatile int16_t x819 = INT16_MIN;
uint16_t x825 = UINT16_MAX;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int32_t x2 = INT32_MIN;
	static int16_t x3 = INT16_MIN;
	int8_t x4 = INT8_MIN;
	static uint64_t t0 = 134696174289064625LLU;

	t0 = (x1/(x2*(x3<x4)));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x17 = INT32_MAX;
	uint8_t x18 = UINT8_MAX;
	int32_t x19 = -1911;
	volatile int8_t x20 = -1;
	static volatile int32_t t1 = -1065560;

	t1 = (x17/(x18*(x19<x20)));

	if (t1 != 8421504) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x29 = INT32_MIN;
	int16_t x31 = INT16_MIN;
	int8_t x32 = INT8_MAX;
	static uint64_t t2 = 61258043361609578LLU;

	t2 = (x29/(x30*(x31<x32)));

	if (t2 != 1229782938104137864LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x45 = UINT16_MAX;
	static int64_t x46 = -255642780834106737LL;
	uint32_t x47 = 1420219U;
	static int32_t x48 = INT32_MIN;
	int64_t t3 = -16083825275333LL;

	t3 = (x45/(x46*(x47<x48)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x65 = 88731581069416LLU;
	static uint8_t x67 = UINT8_MAX;
	static int16_t x68 = INT16_MAX;
	uint64_t t4 = 5159080LLU;

	t4 = (x65/(x66*(x67<x68)));

	if (t4 != 1774631621388LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x73 = -1;
	uint64_t x75 = 305789LLU;
	volatile int64_t x76 = 908382047243LL;

	t5 = (x73/(x74*(x75<x76)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x77 = INT8_MIN;
	int8_t x78 = 4;
	int64_t x79 = 343126568917609LL;
	uint64_t x80 = UINT64_MAX;
	int32_t t6 = -26890;

	t6 = (x77/(x78*(x79<x80)));

	if (t6 != -32) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x81 = INT16_MAX;
	int64_t x82 = INT64_MIN;
	volatile uint8_t x83 = 1U;
	uint32_t x84 = 11146U;
	int64_t t7 = 5LL;

	t7 = (x81/(x82*(x83<x84)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x85 = UINT32_MAX;
	uint16_t x86 = UINT16_MAX;
	volatile uint8_t x87 = 27U;
	uint8_t x88 = UINT8_MAX;
	uint32_t t8 = 472U;

	t8 = (x85/(x86*(x87<x88)));

	if (t8 != 65537U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x93 = -1;
	uint16_t x95 = 9178U;
	int16_t x96 = 13996;
	static int32_t t9 = 2557;

	t9 = (x93/(x94*(x95<x96)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x101 = 7924U;
	static uint16_t x102 = UINT16_MAX;
	int64_t x104 = INT64_MAX;
	volatile uint32_t t10 = 85052275U;

	t10 = (x101/(x102*(x103<x104)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x105 = INT32_MIN;
	volatile int16_t x107 = -360;
	volatile int16_t x108 = INT16_MAX;
	int64_t t11 = 65594314908263086LL;

	t11 = (x105/(x106*(x107<x108)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x121 = 95466442453LLU;
	int64_t x122 = INT64_MIN;
	static int32_t x123 = INT32_MIN;
	static int16_t x124 = 2076;
	uint64_t t12 = 93256LLU;

	t12 = (x121/(x122*(x123<x124)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x125 = INT16_MAX;
	int64_t x126 = INT64_MIN;
	int16_t x128 = 57;

	t13 = (x125/(x126*(x127<x128)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x129 = UINT64_MAX;
	static volatile int8_t x130 = -1;
	volatile int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MIN;
	uint64_t t14 = 1851492LLU;

	t14 = (x129/(x130*(x131<x132)));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x133 = 11544U;
	int64_t x134 = INT64_MIN;
	static int64_t x135 = -878632957454592LL;
	uint32_t x136 = 0U;
	int64_t t15 = 126820178279617180LL;

	t15 = (x133/(x134*(x135<x136)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x137 = -1;
	static uint32_t x138 = UINT32_MAX;
	static int16_t x139 = -1;
	int32_t x140 = 861651151;
	volatile uint32_t t16 = 14030929U;

	t16 = (x137/(x138*(x139<x140)));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x149 = INT64_MAX;
	int8_t x150 = -1;
	int8_t x151 = -1;
	int32_t x152 = 4;
	volatile int64_t t17 = -7039321945959826LL;

	t17 = (x149/(x150*(x151<x152)));

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x153 = 8U;
	int16_t x154 = -1;
	int64_t x155 = INT64_MIN;

	t18 = (x153/(x154*(x155<x156)));

	if (t18 != -8) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x161 = INT32_MIN;
	int32_t x163 = INT32_MIN;
	uint16_t x164 = 468U;
	int32_t t19 = -12;

	t19 = (x161/(x162*(x163<x164)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x170 = -14304;
	int16_t x171 = INT16_MIN;

	t20 = (x169/(x170*(x171<x172)));

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x173 = INT32_MIN;
	int16_t x174 = -424;
	uint32_t x175 = 563869103U;
	static uint32_t x176 = UINT32_MAX;
	int32_t t21 = -783708610;

	t21 = (x173/(x174*(x175<x176)));

	if (t21 != 5064819) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x186 = INT32_MIN;
	static int8_t x187 = 11;
	volatile int32_t t22 = -2023719;

	t22 = (x185/(x186*(x187<x188)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x193 = 2310;
	int32_t x194 = INT32_MAX;
	volatile int8_t x195 = -1;
	static volatile uint16_t x196 = 3U;
	static volatile int32_t t23 = 0;

	t23 = (x193/(x194*(x195<x196)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x197 = -5629;
	static int8_t x198 = INT8_MIN;
	static int32_t x200 = 130998;

	t24 = (x197/(x198*(x199<x200)));

	if (t24 != 43) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x201 = INT32_MIN;
	static uint32_t x202 = 2672U;
	volatile int8_t x204 = 7;
	volatile uint32_t t25 = 87U;

	t25 = (x201/(x202*(x203<x204)));

	if (t25 != 803698U) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x205 = INT64_MIN;
	uint32_t x206 = 993385U;
	int64_t x207 = INT64_MIN;

	t26 = (x205/(x206*(x207<x208)));

	if (t26 != -9284790928849LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x217 = -11;
	int16_t x219 = -4060;
	uint16_t x220 = 0U;
	static volatile int32_t t27 = 123;

	t27 = (x217/(x218*(x219<x220)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x238 = INT64_MIN;
	static int32_t x240 = -1;
	volatile int64_t t28 = 1LL;

	t28 = (x237/(x238*(x239<x240)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x241 = 2929309479388LL;
	volatile int16_t x242 = 163;
	int64_t x243 = INT64_MIN;
	volatile int64_t t29 = -1353135149278932089LL;

	t29 = (x241/(x242*(x243<x244)));

	if (t29 != 17971223799LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x245 = INT32_MIN;
	int8_t x246 = INT8_MAX;
	static int8_t x248 = -1;

	t30 = (x245/(x246*(x247<x248)));

	if (t30 != -16909320) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x253 = INT32_MAX;
	int8_t x255 = -1;
	volatile int32_t t31 = -1;

	t31 = (x253/(x254*(x255<x256)));

	if (t31 != -65535) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x265 = 66082956U;
	int32_t x266 = INT32_MIN;
	static uint64_t x267 = 43LLU;
	uint32_t x268 = 2528983U;

	t32 = (x265/(x266*(x267<x268)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x273 = -1;
	volatile int8_t x274 = -1;
	uint32_t x275 = 86821687U;
	static uint32_t x276 = UINT32_MAX;
	int32_t t33 = 22834;

	t33 = (x273/(x274*(x275<x276)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x281 = INT16_MIN;
	volatile uint64_t x282 = 850236LLU;
	volatile uint16_t x283 = 7U;
	uint32_t x284 = 17086U;
	volatile uint64_t t34 = 104445451198546236LLU;

	t34 = (x281/(x282*(x283<x284)));

	if (t34 != 21696028013056LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x293 = INT8_MAX;
	uint64_t x294 = UINT64_MAX;
	int32_t x295 = INT32_MIN;
	int16_t x296 = 534;
	volatile uint64_t t35 = 645671997880877093LLU;

	t35 = (x293/(x294*(x295<x296)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x298 = 125U;
	int8_t x299 = INT8_MIN;

	t36 = (x297/(x298*(x299<x300)));

	if (t36 != 11) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x305 = -1;
	int8_t x306 = 1;
	int64_t x307 = INT64_MIN;
	int64_t x308 = -1614576LL;
	volatile int32_t t37 = -1099;

	t37 = (x305/(x306*(x307<x308)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x317 = 22U;
	int64_t x318 = INT64_MAX;
	static int64_t t38 = -48161020890LL;

	t38 = (x317/(x318*(x319<x320)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x330 = INT16_MAX;
	uint64_t x331 = 2375LLU;
	static int8_t x332 = -38;
	static volatile int32_t t39 = -346984645;

	t39 = (x329/(x330*(x331<x332)));

	if (t39 != -65538) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x333 = -456264929584520LL;
	int32_t x334 = INT32_MIN;
	static volatile int64_t x335 = 7LL;
	int64_t x336 = INT64_MAX;
	static volatile int64_t t40 = -9391149440LL;

	t40 = (x333/(x334*(x335<x336)));

	if (t40 != 212464LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x337 = UINT8_MAX;
	int16_t x338 = INT16_MAX;
	int8_t x340 = -10;
	volatile int32_t t41 = -7963;

	t41 = (x337/(x338*(x339<x340)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x341 = -1LL;
	int32_t x342 = -15725669;
	volatile int8_t x343 = INT8_MIN;
	int64_t x344 = -1LL;
	volatile int64_t t42 = -1600LL;

	t42 = (x341/(x342*(x343<x344)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x349 = UINT16_MAX;
	volatile int8_t x351 = INT8_MAX;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t43 = 71420848LLU;

	t43 = (x349/(x350*(x351<x352)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x353 = INT32_MIN;
	volatile int8_t x355 = 1;
	volatile uint64_t x356 = 1254513946405154675LLU;
	int32_t t44 = 25;

	t44 = (x353/(x354*(x355<x356)));

	if (t44 != -16909320) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x362 = -991;
	volatile int16_t x363 = INT16_MIN;
	int8_t x364 = 1;
	volatile uint32_t t45 = 492U;

	t45 = (x361/(x362*(x363<x364)));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x365 = 959333LL;
	int32_t x367 = -497;
	int64_t x368 = -1LL;
	volatile uint64_t t46 = 1350407572510025989LLU;

	t46 = (x365/(x366*(x367<x368)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x369 = 191U;
	uint16_t x370 = UINT16_MAX;
	int64_t x371 = INT64_MIN;
	static int16_t x372 = -26;
	volatile uint32_t t47 = 341557U;

	t47 = (x369/(x370*(x371<x372)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x381 = -1;
	uint64_t x382 = 76319LLU;
	static int8_t x383 = -1;
	uint16_t x384 = UINT16_MAX;
	volatile uint64_t t48 = 7657299LLU;

	t48 = (x381/(x382*(x383<x384)));

	if (t48 != 241705788515435LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x389 = 1U;
	volatile int8_t x390 = INT8_MAX;
	volatile int8_t x391 = -1;
	uint8_t x392 = 16U;
	uint32_t t49 = 43221192U;

	t49 = (x389/(x390*(x391<x392)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x394 = INT8_MIN;
	uint8_t x395 = UINT8_MAX;
	uint64_t x396 = 2161178520327LLU;
	int32_t t50 = 359731566;

	t50 = (x393/(x394*(x395<x396)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x397 = 63;
	volatile int16_t x398 = INT16_MIN;
	int64_t x399 = -1LL;
	int16_t x400 = 29;

	t51 = (x397/(x398*(x399<x400)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x413 = INT32_MIN;
	uint32_t x414 = 8726U;
	int16_t x415 = 30;
	int16_t x416 = INT16_MAX;

	t52 = (x413/(x414*(x415<x416)));

	if (t52 != 246101U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x434 = -1;
	uint64_t x435 = 885185770LLU;
	int8_t x436 = INT8_MIN;
	int32_t t53 = -254789;

	t53 = (x433/(x434*(x435<x436)));

	if (t53 != -365) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x441 = 11;
	int64_t x442 = INT64_MIN;
	static int16_t x444 = INT16_MIN;
	static int64_t t54 = -45727836LL;

	t54 = (x441/(x442*(x443<x444)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x449 = -1;
	int32_t x450 = INT32_MAX;
	static volatile int8_t x451 = INT8_MIN;
	volatile int32_t t55 = -3844975;

	t55 = (x449/(x450*(x451<x452)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x457 = INT16_MIN;
	volatile int8_t x459 = -1;
	int32_t x460 = INT32_MAX;
	int32_t t56 = 52358;

	t56 = (x457/(x458*(x459<x460)));

	if (t56 != -10922) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x464 = -1;
	static volatile int64_t t57 = 13331575LL;

	t57 = (x461/(x462*(x463<x464)));

	if (t57 != 281474976710656LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x473 = INT8_MIN;
	int32_t x474 = 15937;
	uint64_t x475 = 3LLU;
	int32_t x476 = INT32_MAX;
	static int32_t t58 = 4;

	t58 = (x473/(x474*(x475<x476)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x477 = INT32_MIN;
	static int32_t x478 = INT32_MIN;
	volatile int32_t x479 = 349;
	int32_t t59 = -119692;

	t59 = (x477/(x478*(x479<x480)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x485 = 7545150;
	int16_t x487 = INT16_MIN;
	volatile int32_t t60 = -13572801;

	t60 = (x485/(x486*(x487<x488)));

	if (t60 != 59410) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x489 = 42002275;
	int32_t x490 = INT32_MAX;
	uint32_t x492 = 1140170201U;
	int32_t t61 = 85;

	t61 = (x489/(x490*(x491<x492)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x493 = INT8_MIN;
	static uint8_t x494 = UINT8_MAX;
	int16_t x495 = 0;
	uint8_t x496 = 21U;
	int32_t t62 = 158288;

	t62 = (x493/(x494*(x495<x496)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x510 = 688252;
	int16_t x512 = 0;
	static int64_t t63 = 69663LL;

	t63 = (x509/(x510*(x511<x512)));

	if (t63 != 13401155444306LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x535 = 23092142U;
	int16_t x536 = INT16_MIN;
	volatile uint32_t t64 = 50931U;

	t64 = (x533/(x534*(x535<x536)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x545 = 6U;
	int32_t x546 = INT32_MAX;

	t65 = (x545/(x546*(x547<x548)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x549 = -17;
	static volatile uint16_t x550 = UINT16_MAX;
	volatile int64_t x551 = 126921863586101345LL;
	uint64_t x552 = UINT64_MAX;
	volatile int32_t t66 = 0;

	t66 = (x549/(x550*(x551<x552)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x553 = INT8_MAX;
	static uint8_t x554 = 3U;
	static int64_t x555 = INT64_MIN;
	volatile int32_t t67 = -255244;

	t67 = (x553/(x554*(x555<x556)));

	if (t67 != 42) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x557 = -37;
	static int64_t x558 = 7874860921422LL;
	static uint32_t x559 = 149818U;
	static uint32_t x560 = UINT32_MAX;
	static int64_t t68 = -704551287779967116LL;

	t68 = (x557/(x558*(x559<x560)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x577 = 362230U;
	static volatile int32_t x578 = INT32_MIN;
	int32_t x579 = 1;
	int32_t x580 = INT32_MAX;
	uint32_t t69 = 7919812U;

	t69 = (x577/(x578*(x579<x580)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x581 = INT8_MIN;
	uint32_t x583 = 3759U;
	static int8_t x584 = INT8_MIN;
	int32_t t70 = -4084;

	t70 = (x581/(x582*(x583<x584)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x593 = INT16_MIN;
	uint16_t x594 = UINT16_MAX;
	int16_t x595 = -7;
	uint32_t x596 = UINT32_MAX;
	volatile int32_t t71 = 458;

	t71 = (x593/(x594*(x595<x596)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x605 = -12;
	uint16_t x606 = 3427U;
	uint8_t x607 = 31U;
	uint64_t x608 = UINT64_MAX;
	volatile int32_t t72 = -875692850;

	t72 = (x605/(x606*(x607<x608)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x609 = 5;
	int16_t x610 = INT16_MIN;
	int32_t x611 = INT32_MIN;
	int16_t x612 = INT16_MIN;

	t73 = (x609/(x610*(x611<x612)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x614 = INT32_MIN;
	static uint16_t x616 = UINT16_MAX;
	int64_t t74 = -8672925103713LL;

	t74 = (x613/(x614*(x615<x616)));

	if (t74 != 4294967296LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x617 = -396139907;
	volatile uint16_t x618 = 27874U;
	uint8_t x619 = 5U;
	int64_t x620 = 1082406432239LL;
	int32_t t75 = -209;

	t75 = (x617/(x618*(x619<x620)));

	if (t75 != -14211) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x621 = 388570LLU;
	int64_t x622 = INT64_MIN;
	int16_t x623 = INT16_MIN;
	volatile uint64_t t76 = 1792LLU;

	t76 = (x621/(x622*(x623<x624)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x625 = 1;
	volatile int32_t x626 = INT32_MIN;
	int32_t x627 = INT32_MIN;

	t77 = (x625/(x626*(x627<x628)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x643 = 369355720557935489LL;
	volatile int64_t x644 = INT64_MAX;
	volatile uint32_t t78 = 5415U;

	t78 = (x641/(x642*(x643<x644)));

	if (t78 != 1364U) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x645 = INT8_MAX;
	int8_t x646 = INT8_MIN;
	volatile int32_t t79 = -35;

	t79 = (x645/(x646*(x647<x648)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x653 = 1529231133271LLU;
	int32_t x654 = -65483;
	int64_t x655 = INT64_MIN;
	static volatile int32_t x656 = INT32_MAX;
	uint64_t t80 = 573658408996180LLU;

	t80 = (x653/(x654*(x655<x656)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x657 = 2;
	uint16_t x658 = 2746U;
	uint64_t x660 = UINT64_MAX;
	int32_t t81 = -1;

	t81 = (x657/(x658*(x659<x660)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x661 = -1;
	int16_t x662 = -1;
	int32_t t82 = -131521;

	t82 = (x661/(x662*(x663<x664)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x665 = -1;
	int64_t x666 = INT64_MAX;
	uint8_t x668 = 68U;

	t83 = (x665/(x666*(x667<x668)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x681 = INT8_MAX;
	volatile uint32_t x683 = 5333U;
	uint64_t x684 = 122309456079656LLU;

	t84 = (x681/(x682*(x683<x684)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x685 = -1;
	static volatile int16_t x686 = 20;
	uint16_t x687 = 713U;
	int16_t x688 = INT16_MAX;
	int32_t t85 = -411013148;

	t85 = (x685/(x686*(x687<x688)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x689 = INT32_MIN;
	uint16_t x690 = 503U;
	static int16_t x691 = -6762;
	static int64_t x692 = -1LL;

	t86 = (x689/(x690*(x691<x692)));

	if (t86 != -4269351) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x705 = 375904U;
	int8_t x706 = INT8_MIN;
	volatile uint32_t t87 = 712U;

	t87 = (x705/(x706*(x707<x708)));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x717 = INT16_MIN;
	int8_t x718 = -1;
	int64_t x719 = -15168514375LL;
	int16_t x720 = INT16_MAX;
	int32_t t88 = -28344043;

	t88 = (x717/(x718*(x719<x720)));

	if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x725 = INT16_MAX;
	int8_t x727 = 33;
	volatile uint32_t x728 = 137U;
	volatile uint32_t t89 = 862U;

	t89 = (x725/(x726*(x727<x728)));

	if (t89 != 1927U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x746 = 942U;
	int32_t x747 = INT32_MAX;
	uint64_t x748 = 1803175704571673859LLU;
	volatile uint32_t t90 = 95U;

	t90 = (x745/(x746*(x747<x748)));

	if (t90 != 4559413U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x757 = 1U;
	int8_t x759 = -56;
	static int8_t x760 = INT8_MAX;
	static volatile int64_t t91 = -6091LL;

	t91 = (x757/(x758*(x759<x760)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x765 = 19U;
	int8_t x766 = INT8_MAX;
	volatile int16_t x767 = INT16_MIN;
	volatile int32_t t92 = -977531070;

	t92 = (x765/(x766*(x767<x768)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x773 = 509;
	static uint32_t x774 = 8257U;
	uint16_t x775 = 4U;
	int8_t x776 = 26;
	volatile uint32_t t93 = 28U;

	t93 = (x773/(x774*(x775<x776)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x777 = UINT8_MAX;
	int16_t x778 = -48;
	static int16_t x779 = 15477;
	int64_t x780 = 28652354592770802LL;
	static int32_t t94 = 90612523;

	t94 = (x777/(x778*(x779<x780)));

	if (t94 != -5) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x797 = -1;
	uint32_t x798 = 9267U;
	uint32_t x799 = 37U;
	volatile int32_t x800 = INT32_MAX;

	t95 = (x797/(x798*(x799<x800)));

	if (t95 != 463469U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x805 = INT8_MIN;
	int64_t x806 = -205LL;
	int64_t x808 = INT64_MIN;
	int64_t t96 = 4616086500219144LL;

	t96 = (x805/(x806*(x807<x808)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x817 = -21;
	static int8_t x818 = -1;
	int8_t x820 = -60;
	int32_t t97 = -1980197;

	t97 = (x817/(x818*(x819<x820)));

	if (t97 != 21) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x826 = INT64_MIN;
	int64_t x827 = INT64_MIN;
	int64_t x828 = -271972510666855LL;
	static volatile int64_t t98 = 122029201LL;

	t98 = (x825/(x826*(x827<x828)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x833 = UINT32_MAX;
	volatile uint32_t x834 = 90U;
	static int64_t x835 = INT64_MIN;
	static volatile int16_t x836 = INT16_MIN;
	uint32_t t99 = 758U;

	t99 = (x833/(x834*(x835<x836)));

	if (t99 != 47721858U) { NG(); } else { ; }
	
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

