#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
uint8_t x27 = UINT8_MAX;
static int64_t x42 = INT64_MIN;
volatile uint64_t x43 = 1827759531799LLU;
volatile int32_t t6 = INT32_MIN;
volatile int32_t x69 = -1;
int32_t x73 = INT32_MAX;
int32_t t10 = 95847890;
uint16_t x99 = 9U;
uint64_t t11 = 307497850LLU;
int8_t x106 = -1;
uint64_t x107 = 513615961LLU;
int32_t x118 = -1;
static int16_t x119 = 42;
static uint16_t x141 = UINT16_MAX;
uint8_t x144 = UINT8_MAX;
int16_t x148 = 531;
volatile int8_t x196 = 21;
uint16_t x197 = 417U;
int8_t x199 = -1;
static int32_t t22 = 1673;
volatile int32_t x207 = -122;
int32_t x208 = -1;
int64_t x213 = INT64_MIN;
uint16_t x227 = 45U;
uint64_t x241 = 258142253252LLU;
uint64_t x242 = UINT64_MAX;
volatile int64_t t29 = 823577LL;
static int64_t x253 = -70439015960308469LL;
int8_t x255 = INT8_MIN;
int8_t x256 = INT8_MAX;
static int64_t t31 = -359482551LL;
volatile uint32_t t33 = 4796U;
static uint64_t x273 = UINT64_MAX;
volatile int8_t x285 = 0;
static int64_t x287 = -1LL;
int64_t x317 = INT64_MIN;
int64_t x318 = -2178246347982114LL;
int32_t t39 = -13277;
volatile int8_t x329 = INT8_MAX;
static volatile int8_t x330 = 55;
uint32_t x349 = 10U;
int32_t x356 = INT32_MIN;
static uint32_t x362 = 496814764U;
static int8_t x367 = -23;
uint16_t x369 = UINT16_MAX;
static int8_t x385 = -1;
int8_t x434 = -1;
static volatile int64_t x442 = -1LL;
int32_t x443 = -1;
volatile int64_t t51 = -1942LL;
int16_t x452 = -1;
int16_t x458 = INT16_MIN;
int64_t x459 = INT64_MIN;
int8_t x468 = 2;
int32_t x473 = -1732;
volatile int32_t x479 = INT32_MIN;
uint32_t t58 = 434064212U;
volatile int64_t t59 = 67810037337515130LL;
int8_t x487 = INT8_MIN;
uint8_t x488 = 1U;
uint8_t x507 = 0U;
uint16_t x509 = 16120U;
int16_t x510 = INT16_MIN;
static uint32_t x530 = 2026689U;
volatile uint32_t x539 = 3U;
volatile uint16_t x542 = 522U;
volatile int8_t x547 = -30;
static int64_t x548 = -1LL;
int32_t x550 = 57;
volatile int32_t t69 = -143106;
int8_t x576 = 26;
static int16_t x585 = INT16_MIN;
int8_t x588 = INT8_MIN;
int32_t t72 = 0;
uint32_t x609 = 16110593U;
uint32_t t74 = 1U;
uint8_t x613 = 8U;
int8_t x616 = 18;
volatile int32_t t75 = 0;
static int64_t x618 = 115871LL;
static uint32_t x626 = 1835593112U;
int8_t x629 = -1;
int8_t x630 = INT8_MIN;
uint64_t x632 = UINT64_MAX;
uint16_t x637 = UINT16_MAX;
int64_t x638 = INT64_MIN;
static int32_t x640 = 34452700;
volatile int64_t t79 = 268367864904LL;
uint64_t x646 = 8587575781221878LLU;
int16_t x648 = INT16_MAX;
volatile int64_t t81 = -17663639992866106LL;
int32_t x661 = -34095;
uint32_t x668 = 4635U;
int32_t t84 = 26726794;
int32_t x688 = -1861;
int8_t x698 = INT8_MIN;
int64_t x719 = -38731714755451LL;
static uint16_t x740 = 904U;
int32_t x752 = INT32_MAX;
uint16_t x761 = 15U;
int32_t t94 = -1;
int64_t x768 = INT64_MAX;
static int8_t x789 = 6;
static uint16_t x790 = 75U;
int32_t x794 = 1;
int16_t x795 = INT16_MIN;
uint8_t x796 = 15U;
volatile int32_t t98 = 48089;


void f0(void) {
	int32_t x6 = -3;
	volatile int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MIN;
	volatile int32_t t0 = 286;

	t0 = (x5&(x6/(x7<x8)));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x21 = INT64_MAX;
	int64_t x22 = INT64_MIN;
	int8_t x23 = -1;
	volatile int16_t x24 = INT16_MAX;
	int64_t t1 = -13973764549LL;

	t1 = (x21&(x22/(x23<x24)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = 904999018;
	uint32_t x28 = 29211287U;
	int32_t t2 = -9851903;

	t2 = (x25&(x26/(x27<x28)));

	if (t2 != 904998912) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x33 = -1;
	int16_t x34 = 7607;
	int8_t x35 = INT8_MIN;
	static uint8_t x36 = UINT8_MAX;
	volatile int32_t t3 = -204714440;

	t3 = (x33&(x34/(x35<x36)));

	if (t3 != 7607) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x37 = UINT64_MAX;
	uint32_t x38 = 24U;
	int64_t x39 = -1LL;
	uint16_t x40 = 1U;
	uint64_t t4 = 2541748904LLU;

	t4 = (x37&(x38/(x39<x40)));

	if (t4 != 24LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x41 = INT16_MAX;
	int8_t x44 = INT8_MIN;
	volatile int64_t t5 = -27308109912792649LL;

	t5 = (x41&(x42/(x43<x44)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MIN;
	int64_t x59 = -1LL;
	volatile int16_t x60 = 1;

	t6 = (x57&(x58/(x59<x60)));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x70 = INT8_MAX;
	static uint32_t x71 = 1579659U;
	uint32_t x72 = UINT32_MAX;
	volatile int32_t t7 = -1898801;

	t7 = (x69&(x70/(x71<x72)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x74 = INT64_MAX;
	static uint8_t x75 = 0U;
	volatile int8_t x76 = 3;
	int64_t t8 = 22298817050145753LL;

	t8 = (x73&(x74/(x75<x76)));

	if (t8 != 2147483647LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x77 = 25;
	static int16_t x78 = INT16_MIN;
	uint32_t x79 = 40U;
	int32_t x80 = -732;
	int32_t t9 = 7209575;

	t9 = (x77&(x78/(x79<x80)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x93 = 63;
	volatile uint8_t x94 = 50U;
	static int16_t x95 = INT16_MIN;
	uint8_t x96 = 0U;

	t10 = (x93&(x94/(x95<x96)));

	if (t10 != 50) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x97 = -3990118623932976540LL;
	uint64_t x98 = 1848458640467636155LLU;
	static int8_t x100 = 10;

	t11 = (x97&(x98/(x99<x100)));

	if (t11 != 621497023455109664LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x101 = -1;
	int64_t x102 = INT64_MAX;
	int32_t x103 = 15852;
	uint32_t x104 = 8344465U;
	volatile int64_t t12 = INT64_MAX;

	t12 = (x101&(x102/(x103<x104)));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x105 = UINT32_MAX;
	int32_t x108 = INT32_MIN;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x105&(x106/(x107<x108)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x117 = INT64_MIN;
	uint16_t x120 = 1175U;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x117&(x118/(x119<x120)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x129 = 6U;
	int32_t x130 = -270900150;
	uint64_t x131 = 60543327789887885LLU;
	int32_t x132 = -9;
	volatile int32_t t15 = 785126;

	t15 = (x129&(x130/(x131<x132)));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x137 = 846;
	volatile uint16_t x138 = 461U;
	int64_t x139 = -22LL;
	volatile int32_t x140 = 2;
	volatile int32_t t16 = -12;

	t16 = (x137&(x138/(x139<x140)));

	if (t16 != 332) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x142 = 15012U;
	int8_t x143 = INT8_MIN;
	volatile int32_t t17 = -906325171;

	t17 = (x141&(x142/(x143<x144)));

	if (t17 != 15012) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x145 = INT64_MIN;
	static int8_t x146 = INT8_MIN;
	int64_t x147 = INT64_MIN;
	static int64_t t18 = INT64_MIN;

	t18 = (x145&(x146/(x147<x148)));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x173 = 449U;
	int8_t x174 = -1;
	static volatile int8_t x175 = INT8_MIN;
	static uint16_t x176 = 4U;
	static uint32_t t19 = 298U;

	t19 = (x173&(x174/(x175<x176)));

	if (t19 != 449U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x181 = INT64_MIN;
	int8_t x182 = -4;
	static uint32_t x183 = 53858691U;
	volatile int16_t x184 = INT16_MIN;
	static int64_t t20 = INT64_MIN;

	t20 = (x181&(x182/(x183<x184)));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x193 = -10;
	uint64_t x194 = 10LLU;
	int32_t x195 = -1;
	uint64_t t21 = 31201LLU;

	t21 = (x193&(x194/(x195<x196)));

	if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x198 = 1U;
	volatile uint16_t x200 = 63U;

	t22 = (x197&(x198/(x199<x200)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x205 = -1;
	static uint16_t x206 = UINT16_MAX;
	volatile int32_t t23 = -1717889;

	t23 = (x205&(x206/(x207<x208)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x209 = 94833301564015LL;
	volatile int8_t x210 = -1;
	int64_t x211 = -1042147761632734LL;
	volatile int16_t x212 = INT16_MIN;
	volatile int64_t t24 = 1431291914LL;

	t24 = (x209&(x210/(x211<x212)));

	if (t24 != 94833301564015LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x214 = INT64_MIN;
	int8_t x215 = INT8_MIN;
	static uint16_t x216 = UINT16_MAX;
	volatile int64_t t25 = INT64_MIN;

	t25 = (x213&(x214/(x215<x216)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x217 = INT32_MIN;
	int16_t x218 = -242;
	int8_t x219 = INT8_MIN;
	uint16_t x220 = 3616U;
	int32_t t26 = INT32_MIN;

	t26 = (x217&(x218/(x219<x220)));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x225 = 4U;
	static uint64_t x226 = UINT64_MAX;
	uint32_t x228 = 64389986U;
	volatile uint64_t t27 = 57109942LLU;

	t27 = (x225&(x226/(x227<x228)));

	if (t27 != 4LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x243 = INT16_MAX;
	static uint64_t x244 = 1844403873834LLU;
	static uint64_t t28 = 331222112LLU;

	t28 = (x241&(x242/(x243<x244)));

	if (t28 != 258142253252LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x245 = 140553127U;
	int64_t x246 = INT64_MIN;
	int8_t x247 = INT8_MIN;
	uint32_t x248 = UINT32_MAX;

	t29 = (x245&(x246/(x247<x248)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x254 = 49U;
	int64_t t30 = 882838876058366LL;

	t30 = (x253&(x254/(x255<x256)));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x257 = INT16_MAX;
	int64_t x258 = -1LL;
	uint8_t x259 = 0U;
	volatile int64_t x260 = INT64_MAX;

	t31 = (x257&(x258/(x259<x260)));

	if (t31 != 32767LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x261 = 35;
	uint64_t x262 = 55020914174LLU;
	uint8_t x263 = 22U;
	uint8_t x264 = UINT8_MAX;
	uint64_t t32 = 103202089913540LLU;

	t32 = (x261&(x262/(x263<x264)));

	if (t32 != 34LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x265 = UINT32_MAX;
	int8_t x266 = INT8_MAX;
	int8_t x267 = INT8_MIN;
	static int32_t x268 = 10055;

	t33 = (x265&(x266/(x267<x268)));

	if (t33 != 127U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x269 = UINT32_MAX;
	uint64_t x270 = 232755235393815LLU;
	volatile uint64_t x271 = 43907941473742LLU;
	static volatile int16_t x272 = -1;
	volatile uint64_t t34 = 965099LLU;

	t34 = (x269&(x270/(x271<x272)));

	if (t34 != 2367688983LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x274 = UINT32_MAX;
	int32_t x275 = 106;
	uint16_t x276 = UINT16_MAX;
	uint64_t t35 = 68471299226890868LLU;

	t35 = (x273&(x274/(x275<x276)));

	if (t35 != 4294967295LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x286 = UINT16_MAX;
	int16_t x288 = 32;
	volatile int32_t t36 = 149145798;

	t36 = (x285&(x286/(x287<x288)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x301 = 989792675U;
	volatile int16_t x302 = INT16_MIN;
	int64_t x303 = -1LL;
	int8_t x304 = 35;
	uint32_t t37 = 235488927U;

	t37 = (x301&(x302/(x303<x304)));

	if (t37 != 989790208U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x319 = -1;
	int16_t x320 = 213;
	volatile int64_t t38 = INT64_MIN;

	t38 = (x317&(x318/(x319<x320)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x321 = 39;
	int16_t x322 = 3;
	int32_t x323 = INT32_MIN;
	int64_t x324 = -176041LL;

	t39 = (x321&(x322/(x323<x324)));

	if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x331 = INT16_MIN;
	volatile int64_t x332 = -1LL;
	volatile int32_t t40 = 8;

	t40 = (x329&(x330/(x331<x332)));

	if (t40 != 55) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x350 = INT64_MIN;
	volatile int64_t x351 = -56821948388468951LL;
	int8_t x352 = -1;
	volatile int64_t t41 = -1LL;

	t41 = (x349&(x350/(x351<x352)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x353 = 1001412447459636955LL;
	volatile int32_t x354 = INT32_MIN;
	uint32_t x355 = 0U;
	int64_t t42 = 54265171718267088LL;

	t42 = (x353&(x354/(x355<x356)));

	if (t42 != 1001412446579064832LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x361 = -20;
	uint32_t x363 = 610922474U;
	volatile int32_t x364 = -692789;
	uint32_t t43 = 3U;

	t43 = (x361&(x362/(x363<x364)));

	if (t43 != 496814764U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x365 = 1U;
	int8_t x366 = 1;
	uint16_t x368 = UINT16_MAX;
	int32_t t44 = 29612122;

	t44 = (x365&(x366/(x367<x368)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x370 = -1LL;
	volatile int16_t x371 = -1;
	volatile int64_t x372 = 20LL;
	int64_t t45 = 4671476578LL;

	t45 = (x369&(x370/(x371<x372)));

	if (t45 != 65535LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x377 = 125714LL;
	uint8_t x378 = 6U;
	int8_t x379 = 12;
	uint64_t x380 = 303045447080035428LLU;
	static volatile int64_t t46 = 15613622LL;

	t46 = (x377&(x378/(x379<x380)));

	if (t46 != 2LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x386 = 168779825052245LLU;
	uint32_t x387 = 53U;
	uint16_t x388 = 22406U;
	uint64_t t47 = 13758535682LLU;

	t47 = (x385&(x386/(x387<x388)));

	if (t47 != 168779825052245LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x393 = 305721527086LLU;
	uint16_t x394 = 7U;
	static int8_t x395 = INT8_MIN;
	int16_t x396 = 5982;
	volatile uint64_t t48 = 20826429411643LLU;

	t48 = (x393&(x394/(x395<x396)));

	if (t48 != 6LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x433 = -113258878LL;
	int8_t x435 = -1;
	static int64_t x436 = INT64_MAX;
	volatile int64_t t49 = 3LL;

	t49 = (x433&(x434/(x435<x436)));

	if (t49 != -113258878LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x437 = INT64_MAX;
	uint16_t x438 = UINT16_MAX;
	volatile uint64_t x439 = 69317631043LLU;
	int64_t x440 = -20872181824650LL;
	int64_t t50 = 0LL;

	t50 = (x437&(x438/(x439<x440)));

	if (t50 != 65535LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x441 = UINT32_MAX;
	int8_t x444 = 0;

	t51 = (x441&(x442/(x443<x444)));

	if (t51 != 4294967295LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x445 = UINT64_MAX;
	static int64_t x446 = 26940LL;
	static volatile int64_t x447 = INT64_MIN;
	int16_t x448 = -1;
	uint64_t t52 = 293795661870482LLU;

	t52 = (x445&(x446/(x447<x448)));

	if (t52 != 26940LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x449 = UINT16_MAX;
	uint64_t x450 = 188678906836281444LLU;
	static volatile int64_t x451 = INT64_MIN;
	volatile uint64_t t53 = 16990719LLU;

	t53 = (x449&(x450/(x451<x452)));

	if (t53 != 59492LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x457 = -363666;
	uint8_t x460 = 1U;
	int32_t t54 = 61;

	t54 = (x457&(x458/(x459<x460)));

	if (t54 != -393216) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x465 = 4;
	int32_t x466 = INT32_MIN;
	int16_t x467 = -1;
	static volatile int32_t t55 = -3;

	t55 = (x465&(x466/(x467<x468)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x469 = UINT16_MAX;
	int16_t x470 = 7;
	static int16_t x471 = INT16_MIN;
	uint16_t x472 = 0U;
	int32_t t56 = 51;

	t56 = (x469&(x470/(x471<x472)));

	if (t56 != 7) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x474 = UINT16_MAX;
	volatile int8_t x475 = -27;
	volatile int32_t x476 = -1;
	static int32_t t57 = 12713;

	t57 = (x473&(x474/(x475<x476)));

	if (t57 != 63804) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x477 = -15;
	uint32_t x478 = 212643U;
	static int32_t x480 = INT32_MAX;

	t58 = (x477&(x478/(x479<x480)));

	if (t58 != 212641U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x481 = -1;
	volatile int64_t x482 = 102LL;
	int32_t x483 = INT32_MIN;
	volatile int64_t x484 = INT64_MAX;

	t59 = (x481&(x482/(x483<x484)));

	if (t59 != 102LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x485 = INT8_MAX;
	static uint64_t x486 = 4391302532537827LLU;
	volatile uint64_t t60 = 1068LLU;

	t60 = (x485&(x486/(x487<x488)));

	if (t60 != 99LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x505 = INT16_MAX;
	int8_t x506 = INT8_MIN;
	uint32_t x508 = UINT32_MAX;
	int32_t t61 = 1566;

	t61 = (x505&(x506/(x507<x508)));

	if (t61 != 32640) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x511 = INT32_MAX;
	static uint64_t x512 = UINT64_MAX;
	int32_t t62 = -234966001;

	t62 = (x509&(x510/(x511<x512)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x521 = INT16_MIN;
	volatile int16_t x522 = INT16_MIN;
	int8_t x523 = INT8_MIN;
	int8_t x524 = INT8_MAX;
	int32_t t63 = -16211592;

	t63 = (x521&(x522/(x523<x524)));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x529 = INT8_MIN;
	static int32_t x531 = INT32_MIN;
	int32_t x532 = INT32_MAX;
	uint32_t t64 = 509230U;

	t64 = (x529&(x530/(x531<x532)));

	if (t64 != 2026624U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x537 = -1;
	static int16_t x538 = -1;
	int32_t x540 = INT32_MIN;
	volatile int32_t t65 = -107575;

	t65 = (x537&(x538/(x539<x540)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x541 = -175;
	uint32_t x543 = 26522U;
	int32_t x544 = 5622899;
	int32_t t66 = 355347;

	t66 = (x541&(x542/(x543<x544)));

	if (t66 != 512) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x545 = INT8_MIN;
	volatile uint32_t x546 = 19525U;
	static volatile uint32_t t67 = 2U;

	t67 = (x545&(x546/(x547<x548)));

	if (t67 != 19456U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x549 = INT64_MAX;
	volatile int32_t x551 = INT32_MIN;
	volatile int32_t x552 = 38034548;
	int64_t t68 = -4237525948305108LL;

	t68 = (x549&(x550/(x551<x552)));

	if (t68 != 57LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x553 = INT32_MIN;
	static volatile uint16_t x554 = 1423U;
	static volatile uint32_t x555 = 0U;
	int16_t x556 = -1;

	t69 = (x553&(x554/(x555<x556)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x573 = INT8_MIN;
	uint8_t x574 = 41U;
	volatile uint16_t x575 = 1U;
	int32_t t70 = -663;

	t70 = (x573&(x574/(x575<x576)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x581 = -5;
	int8_t x582 = INT8_MIN;
	int32_t x583 = -6919945;
	static volatile int64_t x584 = INT64_MAX;
	volatile int32_t t71 = 2036959;

	t71 = (x581&(x582/(x583<x584)));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x586 = -1;
	int16_t x587 = -270;

	t72 = (x585&(x586/(x587<x588)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x593 = 20U;
	int64_t x594 = INT64_MIN;
	uint64_t x595 = 180356935LLU;
	uint64_t x596 = 85995155830165702LLU;
	static volatile int64_t t73 = 216LL;

	t73 = (x593&(x594/(x595<x596)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x610 = 28942U;
	volatile uint8_t x611 = 3U;
	volatile int16_t x612 = INT16_MAX;

	t74 = (x609&(x610/(x611<x612)));

	if (t74 != 20480U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x614 = INT16_MIN;
	static int64_t x615 = INT64_MIN;

	t75 = (x613&(x614/(x615<x616)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x617 = INT32_MAX;
	int8_t x619 = INT8_MIN;
	int16_t x620 = INT16_MAX;
	static int64_t t76 = 244LL;

	t76 = (x617&(x618/(x619<x620)));

	if (t76 != 115871LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x625 = INT8_MIN;
	int8_t x627 = INT8_MIN;
	int64_t x628 = INT64_MAX;
	volatile uint32_t t77 = 195005634U;

	t77 = (x625&(x626/(x627<x628)));

	if (t77 != 1835593088U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x631 = INT16_MAX;
	volatile int32_t t78 = -936063;

	t78 = (x629&(x630/(x631<x632)));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x639 = INT32_MIN;

	t79 = (x637&(x638/(x639<x640)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x645 = INT16_MAX;
	volatile int32_t x647 = INT32_MIN;
	static volatile uint64_t t80 = 7155104LLU;

	t80 = (x645&(x646/(x647<x648)));

	if (t80 != 26102LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x653 = -1LL;
	static int32_t x654 = INT32_MIN;
	int8_t x655 = INT8_MIN;
	volatile int64_t x656 = 7431065LL;

	t81 = (x653&(x654/(x655<x656)));

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x662 = 3466;
	int16_t x663 = 151;
	volatile uint16_t x664 = UINT16_MAX;
	int32_t t82 = -1250;

	t82 = (x661&(x662/(x663<x664)));

	if (t82 != 2176) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x665 = -2704445269838247720LL;
	int8_t x666 = INT8_MAX;
	uint8_t x667 = 39U;
	volatile int64_t t83 = -524731624125LL;

	t83 = (x665&(x666/(x667<x668)));

	if (t83 != 88LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x681 = -4266;
	uint16_t x682 = UINT16_MAX;
	int64_t x683 = INT64_MIN;
	static volatile int32_t x684 = -1;

	t84 = (x681&(x682/(x683<x684)));

	if (t84 != 61270) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x685 = 7LLU;
	static volatile int16_t x686 = -1;
	uint64_t x687 = 111269400660377LLU;
	uint64_t t85 = 1089949842477708051LLU;

	t85 = (x685&(x686/(x687<x688)));

	if (t85 != 7LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x693 = 22017U;
	int16_t x694 = INT16_MIN;
	uint32_t x695 = UINT32_MAX;
	static volatile int64_t x696 = INT64_MAX;
	uint32_t t86 = 118U;

	t86 = (x693&(x694/(x695<x696)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x697 = INT64_MIN;
	uint32_t x699 = 6480293U;
	uint64_t x700 = 8042921LLU;
	volatile int64_t t87 = INT64_MIN;

	t87 = (x697&(x698/(x699<x700)));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x705 = UINT32_MAX;
	uint8_t x706 = UINT8_MAX;
	uint32_t x707 = 1U;
	int32_t x708 = INT32_MIN;
	static uint32_t t88 = 1233172U;

	t88 = (x705&(x706/(x707<x708)));

	if (t88 != 255U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x713 = UINT16_MAX;
	int8_t x714 = INT8_MAX;
	int8_t x715 = 0;
	volatile uint8_t x716 = 24U;
	volatile int32_t t89 = 15024;

	t89 = (x713&(x714/(x715<x716)));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x717 = INT64_MAX;
	int64_t x718 = -1LL;
	uint16_t x720 = 7210U;
	int64_t t90 = INT64_MAX;

	t90 = (x717&(x718/(x719<x720)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x729 = 228U;
	static uint16_t x730 = UINT16_MAX;
	volatile int32_t x731 = INT32_MAX;
	static uint64_t x732 = 21345909689671590LLU;
	volatile int32_t t91 = 9605;

	t91 = (x729&(x730/(x731<x732)));

	if (t91 != 228) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x737 = 635U;
	int8_t x738 = -1;
	int32_t x739 = -8910769;
	uint32_t t92 = 1047014U;

	t92 = (x737&(x738/(x739<x740)));

	if (t92 != 635U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x749 = INT32_MAX;
	static uint16_t x750 = UINT16_MAX;
	int32_t x751 = 29;
	volatile int32_t t93 = -1017;

	t93 = (x749&(x750/(x751<x752)));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x762 = INT8_MAX;
	int64_t x763 = 3078LL;
	static volatile int64_t x764 = INT64_MAX;

	t94 = (x761&(x762/(x763<x764)));

	if (t94 != 15) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x765 = 0U;
	uint8_t x766 = 27U;
	int32_t x767 = INT32_MIN;
	int32_t t95 = -51540291;

	t95 = (x765&(x766/(x767<x768)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x785 = INT32_MIN;
	static int8_t x786 = INT8_MIN;
	uint64_t x787 = 9926LLU;
	int8_t x788 = INT8_MIN;
	volatile int32_t t96 = INT32_MIN;

	t96 = (x785&(x786/(x787<x788)));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x791 = INT64_MIN;
	int8_t x792 = -11;
	volatile int32_t t97 = -3;

	t97 = (x789&(x790/(x791<x792)));

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x793 = 5U;

	t98 = (x793&(x794/(x795<x796)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x801 = INT64_MIN;
	int32_t x802 = INT32_MIN;
	static int64_t x803 = -186512977941628LL;
	uint32_t x804 = UINT32_MAX;
	volatile int64_t t99 = INT64_MIN;

	t99 = (x801&(x802/(x803<x804)));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

