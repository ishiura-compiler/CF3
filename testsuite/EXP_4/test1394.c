#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = -61;
int16_t x7 = INT16_MIN;
uint64_t x14 = 28781189354LLU;
int32_t x28 = INT32_MAX;
uint8_t x55 = 2U;
uint16_t x59 = 27U;
int64_t x62 = -1LL;
static int32_t x63 = INT32_MIN;
uint32_t x66 = 16U;
int64_t x68 = -1LL;
uint64_t t7 = 655628460169078307LLU;
int8_t x81 = INT8_MIN;
uint16_t x82 = UINT16_MAX;
uint64_t x94 = UINT64_MAX;
static volatile uint64_t t9 = 3904614LLU;
int32_t x101 = 20;
static volatile int8_t x103 = INT8_MIN;
int32_t t10 = -27386266;
static uint64_t x108 = 37580300213257LLU;
volatile int32_t x145 = INT32_MIN;
int32_t x147 = INT32_MIN;
volatile int32_t x165 = INT32_MAX;
volatile uint16_t x180 = 1036U;
volatile int8_t x183 = INT8_MIN;
int64_t x185 = 16876712LL;
static int32_t x190 = 1597000;
int8_t x220 = INT8_MIN;
uint32_t t25 = 735442430U;
int16_t x237 = INT16_MIN;
int16_t x246 = -1;
int8_t x248 = -30;
int64_t x264 = 261785327267796LL;
volatile int8_t x285 = INT8_MAX;
int8_t x312 = -1;
uint8_t x335 = 11U;
volatile int8_t x342 = INT8_MIN;
int8_t x349 = -46;
int16_t x350 = INT16_MIN;
volatile int64_t x353 = 699LL;
volatile uint64_t x354 = 22818989LLU;
int32_t x356 = INT32_MIN;
volatile uint64_t x365 = 41831214495299LLU;
int32_t x368 = -1;
static uint64_t x370 = UINT64_MAX;
static int32_t x372 = INT32_MIN;
int8_t x377 = -55;
static uint32_t x380 = UINT32_MAX;
int32_t x425 = -1;
int64_t x428 = -1LL;
volatile int32_t t46 = 1;
static volatile int64_t x441 = -1LL;
volatile int32_t x458 = -2463;
static int8_t x459 = 40;
volatile int8_t x537 = INT8_MIN;
volatile uint16_t x543 = 1U;
int16_t x544 = INT16_MAX;
volatile int16_t x554 = INT16_MIN;
int16_t x577 = -1;
int16_t x581 = 6;
volatile int64_t x583 = INT64_MIN;
volatile int32_t x607 = INT32_MIN;
volatile int64_t x677 = -154LL;
int8_t x678 = INT8_MIN;
int32_t x679 = INT32_MIN;
static int8_t x719 = 7;
int64_t x742 = INT64_MIN;
int64_t x744 = 1LL;
uint64_t t67 = 19374LLU;
volatile int32_t t68 = -79989084;
static uint16_t x753 = 24U;
int8_t x768 = -5;
static int16_t x777 = -1;
uint16_t x781 = 5U;
int64_t x782 = 5803877348969942LL;
int8_t x791 = -53;
int32_t x799 = INT32_MIN;
int8_t x808 = INT8_MAX;
int32_t t77 = INT32_MIN;
static volatile uint32_t t78 = 222791159U;
volatile uint64_t x829 = 153765LLU;
int64_t x832 = 97599385859LL;
uint64_t x857 = 40741882553LLU;
uint32_t x868 = UINT32_MAX;
int32_t t83 = 3063;
uint64_t x904 = 18469451426160LLU;
volatile int16_t x937 = -1;
uint32_t x939 = 6009U;
uint16_t x950 = UINT16_MAX;
int64_t x951 = -918LL;
static int8_t x971 = INT8_MAX;
uint64_t t89 = 15141737099LLU;
int64_t x978 = -33104272723398506LL;
static int8_t x1051 = INT8_MIN;
static int32_t x1059 = INT32_MIN;
int64_t x1061 = 1435747310465715LL;
volatile int32_t x1064 = INT32_MIN;
int64_t t95 = -19LL;
volatile int16_t x1112 = -1;
volatile uint32_t t98 = 1303023177U;
static volatile uint32_t t99 = 1U;


void f0(void) {
	uint16_t x5 = 176U;
	int8_t x8 = INT8_MIN;
	volatile int32_t t0 = -2428;

	t0 = (x5*(x6/(x7<x8)));

	if (t0 != -10736) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = 251679;
	int16_t x15 = -1655;
	uint8_t x16 = 5U;
	uint64_t t1 = 4LLU;

	t1 = (x13*(x14/(x15<x16)));

	if (t1 != 7243620955425366LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x25 = 1LLU;
	static int16_t x26 = -1;
	int16_t x27 = INT16_MIN;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (x25*(x26/(x27<x28)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x53 = -1;
	int16_t x54 = INT16_MIN;
	volatile int16_t x56 = INT16_MAX;
	int32_t t3 = 1561683;

	t3 = (x53*(x54/(x55<x56)));

	if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x57 = 1557276U;
	int16_t x58 = INT16_MIN;
	static uint64_t x60 = 1348691790LLU;
	volatile uint32_t t4 = 395214214U;

	t4 = (x57*(x58/(x59<x60)));

	if (t4 != 510787584U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x61 = INT8_MAX;
	static int16_t x64 = -1;
	int64_t t5 = 26LL;

	t5 = (x61*(x62/(x63<x64)));

	if (t5 != -127LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x65 = -321;
	static int16_t x67 = INT16_MIN;
	uint32_t t6 = 3108910U;

	t6 = (x65*(x66/(x67<x68)));

	if (t6 != 4294962160U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x77 = -1;
	static volatile uint64_t x78 = 517LLU;
	volatile int32_t x79 = -989552677;
	static int16_t x80 = -1;

	t7 = (x77*(x78/(x79<x80)));

	if (t7 != 18446744073709551099LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x83 = -13760;
	uint8_t x84 = 65U;
	volatile int32_t t8 = -60;

	t8 = (x81*(x82/(x83<x84)));

	if (t8 != -8388480) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x93 = INT32_MAX;
	static int8_t x95 = -57;
	volatile int8_t x96 = -3;

	t9 = (x93*(x94/(x95<x96)));

	if (t9 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x102 = 1U;
	static int16_t x104 = 15;

	t10 = (x101*(x102/(x103<x104)));

	if (t10 != 20) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x105 = INT64_MIN;
	uint64_t x106 = 22826LLU;
	int16_t x107 = INT16_MAX;
	volatile uint64_t t11 = 305939LLU;

	t11 = (x105*(x106/(x107<x108)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x109 = 5375882587LLU;
	static int8_t x110 = INT8_MAX;
	int16_t x111 = -10634;
	int8_t x112 = 0;
	uint64_t t12 = 18593664082102965LLU;

	t12 = (x109*(x110/(x111<x112)));

	if (t12 != 682737088549LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x133 = INT64_MAX;
	int32_t x134 = 0;
	uint64_t x135 = 2LLU;
	int64_t x136 = INT64_MIN;
	volatile int64_t t13 = -54304LL;

	t13 = (x133*(x134/(x135<x136)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x137 = -1LL;
	uint16_t x138 = 1640U;
	int8_t x139 = INT8_MAX;
	volatile int64_t x140 = 145349408295565456LL;
	int64_t t14 = -492939860LL;

	t14 = (x137*(x138/(x139<x140)));

	if (t14 != -1640LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x146 = 608791479U;
	volatile int8_t x148 = INT8_MIN;
	uint32_t t15 = 105U;

	t15 = (x145*(x146/(x147<x148)));

	if (t15 != 2147483648U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x149 = INT32_MIN;
	static uint32_t x150 = 1392274768U;
	static uint16_t x151 = 13U;
	uint32_t x152 = UINT32_MAX;
	uint32_t t16 = 169U;

	t16 = (x149*(x150/(x151<x152)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x153 = -1;
	int32_t x154 = -1;
	int64_t x155 = INT64_MIN;
	int16_t x156 = 3487;
	volatile int32_t t17 = -85;

	t17 = (x153*(x154/(x155<x156)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x161 = 7796839905822027LLU;
	int8_t x162 = INT8_MIN;
	uint8_t x163 = 20U;
	uint8_t x164 = UINT8_MAX;
	static uint64_t t18 = 573183151LLU;

	t18 = (x161*(x162/(x163<x164)));

	if (t18 != 17448748565764332160LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x166 = 0;
	uint16_t x167 = 5891U;
	static uint64_t x168 = 8468569228557594LLU;
	int32_t t19 = 334915;

	t19 = (x165*(x166/(x167<x168)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x177 = UINT8_MAX;
	int8_t x178 = INT8_MIN;
	int16_t x179 = -6008;
	int32_t t20 = -1594;

	t20 = (x177*(x178/(x179<x180)));

	if (t20 != -32640) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x181 = 1;
	static int64_t x182 = -1LL;
	int16_t x184 = -1;
	int64_t t21 = 52458576861238LL;

	t21 = (x181*(x182/(x183<x184)));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x186 = 6487U;
	volatile int8_t x187 = INT8_MIN;
	int16_t x188 = 827;
	int64_t t22 = 996456546LL;

	t22 = (x185*(x186/(x187<x188)));

	if (t22 != 109479230744LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x189 = 89U;
	int32_t x191 = 56;
	static uint32_t x192 = 281U;
	uint32_t t23 = 68803U;

	t23 = (x189*(x190/(x191<x192)));

	if (t23 != 142133000U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x209 = -1;
	static uint64_t x210 = UINT64_MAX;
	static int32_t x211 = -1;
	int32_t x212 = INT32_MAX;
	static uint64_t t24 = 200383738140LLU;

	t24 = (x209*(x210/(x211<x212)));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x217 = 146520082U;
	static uint32_t x218 = 941095U;
	static uint32_t x219 = 17632U;

	t25 = (x217*(x218/(x219<x220)));

	if (t25 != 3686499006U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x221 = UINT32_MAX;
	int16_t x222 = INT16_MIN;
	static volatile int64_t x223 = INT64_MIN;
	uint8_t x224 = 1U;
	uint32_t t26 = 59U;

	t26 = (x221*(x222/(x223<x224)));

	if (t26 != 32768U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x225 = UINT64_MAX;
	static int8_t x226 = 3;
	volatile uint32_t x227 = 4U;
	static uint64_t x228 = UINT64_MAX;
	static volatile uint64_t t27 = 183LLU;

	t27 = (x225*(x226/(x227<x228)));

	if (t27 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x238 = 422U;
	volatile int8_t x239 = 0;
	uint16_t x240 = 242U;
	int32_t t28 = 503;

	t28 = (x237*(x238/(x239<x240)));

	if (t28 != -13828096) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x241 = UINT8_MAX;
	static uint16_t x242 = 650U;
	int8_t x243 = INT8_MIN;
	int16_t x244 = 1;
	int32_t t29 = -1387;

	t29 = (x241*(x242/(x243<x244)));

	if (t29 != 165750) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x245 = INT8_MIN;
	static int64_t x247 = -578992LL;
	int32_t t30 = 1;

	t30 = (x245*(x246/(x247<x248)));

	if (t30 != 128) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x261 = UINT8_MAX;
	uint16_t x262 = UINT16_MAX;
	static uint8_t x263 = 1U;
	volatile int32_t t31 = -2768;

	t31 = (x261*(x262/(x263<x264)));

	if (t31 != 16711425) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x269 = -30;
	uint64_t x270 = 573641742710LLU;
	int64_t x271 = INT64_MIN;
	int8_t x272 = INT8_MAX;
	uint64_t t32 = 2021850181716445299LLU;

	t32 = (x269*(x270/(x271<x272)));

	if (t32 != 18446726864457270316LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x277 = INT8_MAX;
	uint32_t x278 = UINT32_MAX;
	uint64_t x279 = 335401LLU;
	static volatile int64_t x280 = INT64_MIN;
	volatile uint32_t t33 = 117951238U;

	t33 = (x277*(x278/(x279<x280)));

	if (t33 != 4294967169U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x286 = 7LLU;
	int8_t x287 = INT8_MAX;
	uint64_t x288 = UINT64_MAX;
	volatile uint64_t t34 = 574625141880233686LLU;

	t34 = (x285*(x286/(x287<x288)));

	if (t34 != 889LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x309 = UINT8_MAX;
	int16_t x310 = -15428;
	int16_t x311 = -5;
	volatile int32_t t35 = -1;

	t35 = (x309*(x310/(x311<x312)));

	if (t35 != -3934140) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x333 = INT8_MAX;
	int16_t x334 = -7;
	uint32_t x336 = 24002762U;
	static int32_t t36 = -2;

	t36 = (x333*(x334/(x335<x336)));

	if (t36 != -889) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x341 = 6005LL;
	volatile uint8_t x343 = 0U;
	static uint8_t x344 = 3U;
	int64_t t37 = -456749LL;

	t37 = (x341*(x342/(x343<x344)));

	if (t37 != -768640LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x351 = -1LL;
	uint16_t x352 = 9494U;
	int32_t t38 = -12685919;

	t38 = (x349*(x350/(x351<x352)));

	if (t38 != 1507328) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x355 = 16122298208401422LLU;
	static uint64_t t39 = 987001672LLU;

	t39 = (x353*(x354/(x355<x356)));

	if (t39 != 15950473311LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x366 = INT8_MIN;
	static volatile int16_t x367 = INT16_MIN;
	uint64_t t40 = 18626020LLU;

	t40 = (x365*(x366/(x367<x368)));

	if (t40 != 18441389678254153344LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x369 = INT64_MAX;
	volatile int64_t x371 = -401603074460LL;
	volatile uint64_t t41 = 1747671LLU;

	t41 = (x369*(x370/(x371<x372)));

	if (t41 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x378 = -1;
	int8_t x379 = INT8_MAX;
	static int32_t t42 = 57698;

	t42 = (x377*(x378/(x379<x380)));

	if (t42 != 55) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x385 = 93U;
	int16_t x386 = 3872;
	uint32_t x387 = 4437237U;
	int16_t x388 = -150;
	volatile uint32_t t43 = 0U;

	t43 = (x385*(x386/(x387<x388)));

	if (t43 != 360096U) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x401 = -1LL;
	int64_t x402 = -62547227601LL;
	volatile int8_t x403 = INT8_MIN;
	uint8_t x404 = 60U;
	int64_t t44 = -760LL;

	t44 = (x401*(x402/(x403<x404)));

	if (t44 != 62547227601LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x421 = 0LLU;
	uint16_t x422 = 0U;
	uint64_t x423 = 493055492LLU;
	uint32_t x424 = UINT32_MAX;
	uint64_t t45 = 168329265LLU;

	t45 = (x421*(x422/(x423<x424)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x426 = INT8_MAX;
	uint64_t x427 = 7LLU;

	t46 = (x425*(x426/(x427<x428)));

	if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x442 = -24;
	static int32_t x443 = -18;
	static volatile int32_t x444 = -1;
	int64_t t47 = -283577140928440LL;

	t47 = (x441*(x442/(x443<x444)));

	if (t47 != 24LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x457 = UINT16_MAX;
	static uint8_t x460 = UINT8_MAX;
	int32_t t48 = -5415034;

	t48 = (x457*(x458/(x459<x460)));

	if (t48 != -161412705) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x469 = 0;
	int8_t x470 = INT8_MIN;
	static int32_t x471 = 112993;
	int64_t x472 = 1477521325946666180LL;
	static int32_t t49 = 292107;

	t49 = (x469*(x470/(x471<x472)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x481 = INT32_MIN;
	static int64_t x482 = -123737664LL;
	int8_t x483 = 2;
	int64_t x484 = INT64_MAX;
	int64_t t50 = 105057631LL;

	t50 = (x481*(x482/(x483<x484)));

	if (t50 != 265724610081718272LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x485 = INT64_MAX;
	int8_t x486 = 0;
	uint8_t x487 = 0U;
	uint8_t x488 = UINT8_MAX;
	static int64_t t51 = 5LL;

	t51 = (x485*(x486/(x487<x488)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x489 = UINT64_MAX;
	uint32_t x490 = 407944673U;
	volatile uint8_t x491 = 2U;
	uint32_t x492 = 376020159U;
	static uint64_t t52 = 393303LLU;

	t52 = (x489*(x490/(x491<x492)));

	if (t52 != 18446744073301606943LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x497 = 421438555LLU;
	int8_t x498 = -12;
	static volatile uint16_t x499 = 2U;
	static uint16_t x500 = 9U;
	static uint64_t t53 = 8860677902882494LLU;

	t53 = (x497*(x498/(x499<x500)));

	if (t53 != 18446744068652288956LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x538 = INT16_MIN;
	int64_t x539 = INT64_MIN;
	int32_t x540 = 48647;
	static int32_t t54 = 2419;

	t54 = (x537*(x538/(x539<x540)));

	if (t54 != 4194304) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x541 = 7364446;
	int8_t x542 = INT8_MIN;
	volatile int32_t t55 = 1002;

	t55 = (x541*(x542/(x543<x544)));

	if (t55 != -942649088) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x545 = INT32_MIN;
	static uint32_t x546 = UINT32_MAX;
	int64_t x547 = -5300082LL;
	int8_t x548 = INT8_MIN;
	static volatile uint32_t t56 = 0U;

	t56 = (x545*(x546/(x547<x548)));

	if (t56 != 2147483648U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x553 = 0;
	uint64_t x555 = 7842845656857LLU;
	int64_t x556 = -2131361614258326LL;
	int32_t t57 = 14847118;

	t57 = (x553*(x554/(x555<x556)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x578 = INT8_MIN;
	int16_t x579 = INT16_MIN;
	uint8_t x580 = 18U;
	volatile int32_t t58 = 52;

	t58 = (x577*(x578/(x579<x580)));

	if (t58 != 128) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x582 = 9168944277406LLU;
	uint8_t x584 = 80U;
	uint64_t t59 = 1114316284829899177LLU;

	t59 = (x581*(x582/(x583<x584)));

	if (t59 != 55013665664436LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x605 = -1;
	volatile int8_t x606 = -1;
	int8_t x608 = 0;
	static volatile int32_t t60 = -556184982;

	t60 = (x605*(x606/(x607<x608)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x621 = UINT32_MAX;
	static uint8_t x622 = UINT8_MAX;
	int8_t x623 = INT8_MIN;
	static volatile int16_t x624 = INT16_MAX;
	uint32_t t61 = 14U;

	t61 = (x621*(x622/(x623<x624)));

	if (t61 != 4294967041U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x645 = -1;
	int8_t x646 = INT8_MIN;
	static volatile uint16_t x647 = 0U;
	uint32_t x648 = 252537U;
	static int32_t t62 = -62490569;

	t62 = (x645*(x646/(x647<x648)));

	if (t62 != 128) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x673 = INT8_MAX;
	int16_t x674 = -161;
	static volatile int16_t x675 = -1;
	int32_t x676 = 668;
	int32_t t63 = 39;

	t63 = (x673*(x674/(x675<x676)));

	if (t63 != -20447) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x680 = INT8_MAX;
	int64_t t64 = -3379019740743LL;

	t64 = (x677*(x678/(x679<x680)));

	if (t64 != 19712LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x685 = INT8_MIN;
	uint32_t x686 = 197308U;
	int8_t x687 = INT8_MAX;
	uint8_t x688 = UINT8_MAX;
	uint32_t t65 = 273681962U;

	t65 = (x685*(x686/(x687<x688)));

	if (t65 != 4269711872U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x717 = UINT32_MAX;
	static uint8_t x718 = UINT8_MAX;
	int64_t x720 = INT64_MAX;
	uint32_t t66 = 1U;

	t66 = (x717*(x718/(x719<x720)));

	if (t66 != 4294967041U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x741 = 1588604LLU;
	int8_t x743 = INT8_MIN;

	t67 = (x741*(x742/(x743<x744)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x749 = INT16_MAX;
	uint16_t x750 = 63U;
	int16_t x751 = -1;
	int8_t x752 = 0;

	t68 = (x749*(x750/(x751<x752)));

	if (t68 != 2064321) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x754 = 3;
	int64_t x755 = -1875LL;
	int16_t x756 = INT16_MAX;
	int32_t t69 = -11;

	t69 = (x753*(x754/(x755<x756)));

	if (t69 != 72) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x765 = -1;
	static int64_t x766 = INT64_MAX;
	uint32_t x767 = 28637415U;
	int64_t t70 = 931738148543343077LL;

	t70 = (x765*(x766/(x767<x768)));

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x769 = UINT8_MAX;
	volatile uint8_t x770 = 9U;
	static int8_t x771 = INT8_MAX;
	uint8_t x772 = UINT8_MAX;
	volatile int32_t t71 = 0;

	t71 = (x769*(x770/(x771<x772)));

	if (t71 != 2295) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x773 = -1;
	volatile int8_t x774 = INT8_MIN;
	int64_t x775 = -409LL;
	int8_t x776 = 3;
	volatile int32_t t72 = 38;

	t72 = (x773*(x774/(x775<x776)));

	if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x778 = -45;
	int64_t x779 = -232083LL;
	int16_t x780 = 22;
	static volatile int32_t t73 = 588870;

	t73 = (x777*(x778/(x779<x780)));

	if (t73 != 45) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x783 = 1U;
	int64_t x784 = 55335094028283501LL;
	static int64_t t74 = -1801370927848020386LL;

	t74 = (x781*(x782/(x783<x784)));

	if (t74 != 29019386744849710LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x789 = 83LLU;
	int8_t x790 = INT8_MIN;
	static int16_t x792 = 2;
	static uint64_t t75 = 130130179903067420LLU;

	t75 = (x789*(x790/(x791<x792)));

	if (t75 != 18446744073709540992LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x797 = INT8_MIN;
	volatile int64_t x798 = -1LL;
	int64_t x800 = 2369877LL;
	int64_t t76 = 416142326293172912LL;

	t76 = (x797*(x798/(x799<x800)));

	if (t76 != 128LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x805 = 1U;
	volatile int32_t x806 = INT32_MIN;
	int32_t x807 = INT32_MIN;

	t77 = (x805*(x806/(x807<x808)));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x825 = 61658939U;
	int32_t x826 = 126058622;
	static volatile int8_t x827 = 0;
	volatile uint64_t x828 = 32664974179857297LLU;

	t78 = (x825*(x826/(x827<x828)));

	if (t78 != 4209012490U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x830 = 1536407457428LLU;
	int16_t x831 = INT16_MIN;
	volatile uint64_t t79 = 13996928225LLU;

	t79 = (x829*(x830/(x831<x832)));

	if (t79 != 236245692691416420LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x849 = 32U;
	int16_t x850 = 88;
	int16_t x851 = 0;
	static uint16_t x852 = 26803U;
	int32_t t80 = -3128;

	t80 = (x849*(x850/(x851<x852)));

	if (t80 != 2816) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x858 = -1;
	volatile int32_t x859 = -19;
	int32_t x860 = 43;
	volatile uint64_t t81 = 5208622453LLU;

	t81 = (x857*(x858/(x859<x860)));

	if (t81 != 18446744032967669063LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x865 = 7105014492LLU;
	uint32_t x866 = 498U;
	int32_t x867 = 132894;
	volatile uint64_t t82 = 183606203867LLU;

	t82 = (x865*(x866/(x867<x868)));

	if (t82 != 3538297217016LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x893 = -1;
	static int32_t x894 = -533;
	volatile int64_t x895 = -421LL;
	static uint32_t x896 = 1U;

	t83 = (x893*(x894/(x895<x896)));

	if (t83 != 533) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x901 = INT64_MIN;
	uint8_t x902 = 0U;
	uint16_t x903 = UINT16_MAX;
	volatile int64_t t84 = 2433191590388001LL;

	t84 = (x901*(x902/(x903<x904)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x921 = 47U;
	static int8_t x922 = INT8_MIN;
	int64_t x923 = -13618LL;
	uint64_t x924 = UINT64_MAX;
	uint32_t t85 = 1U;

	t85 = (x921*(x922/(x923<x924)));

	if (t85 != 4294961280U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x938 = UINT32_MAX;
	int8_t x940 = -1;
	volatile uint32_t t86 = 10U;

	t86 = (x937*(x938/(x939<x940)));

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x949 = UINT64_MAX;
	int32_t x952 = -1;
	uint64_t t87 = 7605074102364LLU;

	t87 = (x949*(x950/(x951<x952)));

	if (t87 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x969 = INT8_MAX;
	int8_t x970 = -1;
	uint8_t x972 = UINT8_MAX;
	volatile int32_t t88 = -166050361;

	t88 = (x969*(x970/(x971<x972)));

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x973 = INT16_MIN;
	uint64_t x974 = 207LLU;
	int8_t x975 = -3;
	uint8_t x976 = 1U;

	t89 = (x973*(x974/(x975<x976)));

	if (t89 != 18446744073702768640LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x977 = 29LLU;
	uint16_t x979 = UINT16_MAX;
	uint32_t x980 = 44295511U;
	uint64_t t90 = 59LLU;

	t90 = (x977*(x978/(x979<x980)));

	if (t90 != 17486720164730994942LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x1013 = 6U;
	uint32_t x1014 = 1U;
	static volatile uint64_t x1015 = 733753207549LLU;
	int16_t x1016 = INT16_MIN;
	static volatile uint32_t t91 = 6872058U;

	t91 = (x1013*(x1014/(x1015<x1016)));

	if (t91 != 6U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x1017 = -1;
	static int32_t x1018 = -1;
	int8_t x1019 = INT8_MAX;
	int16_t x1020 = 396;
	int32_t t92 = -1;

	t92 = (x1017*(x1018/(x1019<x1020)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x1049 = 10U;
	static uint32_t x1050 = 2327209U;
	int64_t x1052 = 1320461005707942505LL;
	uint32_t t93 = 217019186U;

	t93 = (x1049*(x1050/(x1051<x1052)));

	if (t93 != 23272090U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x1057 = INT16_MAX;
	static uint16_t x1058 = 6511U;
	int64_t x1060 = -11992LL;
	volatile int32_t t94 = 852;

	t94 = (x1057*(x1058/(x1059<x1060)));

	if (t94 != 213345937) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x1062 = -191;
	int64_t x1063 = INT64_MIN;

	t95 = (x1061*(x1062/(x1063<x1064)));

	if (t95 != -274227736298951565LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1081 = -1;
	int8_t x1082 = 14;
	volatile uint32_t x1083 = 15U;
	volatile int16_t x1084 = INT16_MIN;
	int32_t t96 = -488;

	t96 = (x1081*(x1082/(x1083<x1084)));

	if (t96 != -14) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x1105 = UINT8_MAX;
	int16_t x1106 = 2677;
	static int64_t x1107 = INT64_MIN;
	int64_t x1108 = 27253940800LL;
	int32_t t97 = 24236638;

	t97 = (x1105*(x1106/(x1107<x1108)));

	if (t97 != 682635) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x1109 = UINT32_MAX;
	int8_t x1110 = INT8_MIN;
	int32_t x1111 = -599063855;

	t98 = (x1109*(x1110/(x1111<x1112)));

	if (t98 != 128U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x1121 = 101058264U;
	uint32_t x1122 = 999625942U;
	uint64_t x1123 = 24191883626285142LLU;
	int16_t x1124 = INT16_MIN;

	t99 = (x1121*(x1122/(x1123<x1124)));

	if (t99 != 1162516624U) { NG(); } else { ; }
	
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

