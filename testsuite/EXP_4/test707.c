#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
int64_t x8 = 31LL;
uint8_t x12 = UINT8_MAX;
static uint32_t t2 = 14U;
int8_t x28 = INT8_MAX;
volatile int16_t x51 = 1;
int64_t t8 = 3227666LL;
int16_t x57 = -39;
int16_t x58 = INT16_MAX;
static int32_t x64 = INT32_MAX;
volatile int16_t x70 = INT16_MIN;
uint64_t x75 = 1568334846739LLU;
int16_t x76 = -590;
int8_t x78 = INT8_MAX;
volatile int32_t t13 = -170547666;
uint16_t x82 = 12337U;
int8_t x83 = -2;
uint32_t t14 = 1580427216U;
int32_t x94 = INT32_MIN;
static int32_t t15 = INT32_MAX;
volatile int64_t t17 = -2950273906LL;
static uint64_t x116 = UINT64_MAX;
int16_t x118 = INT16_MIN;
uint32_t x121 = UINT32_MAX;
static int32_t x122 = -1;
static volatile int64_t x126 = INT64_MAX;
int64_t x127 = -1LL;
uint64_t x130 = 60406952257LLU;
uint8_t x138 = 39U;
int64_t x140 = -81052LL;
uint32_t x154 = UINT32_MAX;
volatile int16_t x156 = 2298;
volatile int64_t t25 = -67LL;
volatile int32_t t26 = 10406;
static uint16_t x184 = 1912U;
int32_t t27 = -151781354;
static int32_t x204 = -70;
int32_t x236 = 1679;
volatile uint64_t x243 = 126006564LLU;
static int32_t x249 = -89575;
static volatile uint64_t x252 = UINT64_MAX;
uint32_t x261 = 636289U;
volatile uint32_t t40 = 4124U;
volatile int8_t x267 = INT8_MAX;
int16_t x285 = INT16_MIN;
int32_t t45 = -259564179;
static uint32_t t46 = 212597219U;
uint8_t x301 = UINT8_MAX;
uint32_t x313 = 8171151U;
int16_t x315 = INT16_MIN;
static uint64_t x317 = 197938977644LLU;
int64_t t51 = 175872959LL;
uint64_t x330 = UINT64_MAX;
uint64_t t52 = 34403642221LLU;
int8_t x335 = INT8_MIN;
uint32_t x352 = UINT32_MAX;
static uint16_t x362 = UINT16_MAX;
uint32_t x374 = 16402189U;
volatile uint16_t x375 = 1U;
static int32_t x386 = 159006;
int64_t x392 = INT64_MIN;
uint64_t x402 = UINT64_MAX;
uint64_t x406 = 45355645575077569LLU;
int64_t x409 = INT64_MAX;
volatile uint8_t x414 = 1U;
volatile uint32_t x416 = 9405U;
static int32_t x421 = -1;
int64_t t67 = 3900LL;
int64_t x436 = INT64_MIN;
volatile int64_t t69 = 1081759LL;
static volatile int64_t t70 = 2727581045LL;
static volatile int16_t x453 = 26;
uint64_t x463 = UINT64_MAX;
static uint64_t t72 = 711749LLU;
uint64_t x467 = 14206267LLU;
int64_t x474 = INT64_MIN;
uint8_t x477 = 54U;
uint64_t x478 = 26913512873743LLU;
static volatile int16_t x496 = -1;
uint32_t t77 = 2345U;
uint16_t x499 = UINT16_MAX;
volatile int8_t x500 = INT8_MAX;
uint16_t x501 = 9U;
int32_t x505 = INT32_MIN;
uint32_t t80 = 17U;
int64_t x512 = INT64_MIN;
uint64_t t82 = 12742LLU;
static uint16_t x530 = 5827U;
int16_t x537 = -1;
volatile uint16_t x538 = UINT16_MAX;
int8_t x545 = -1;
static uint64_t x552 = 55384497099707LLU;
static int8_t x559 = 1;
uint64_t x564 = 388170470180LLU;
uint64_t t88 = 1244LLU;
uint64_t x579 = 69351412348104LLU;
int16_t x580 = INT16_MAX;
uint64_t x585 = 2170115LLU;
uint16_t x613 = 61U;
int32_t t95 = 31;
int16_t x623 = INT16_MAX;
static int16_t x624 = INT16_MIN;
int64_t x638 = INT64_MAX;
static int32_t x639 = -1;
volatile int16_t x641 = -864;
int64_t x651 = INT64_MAX;


void f0(void) {
	volatile int64_t x1 = -8767183LL;
	static int64_t x2 = -33129638435LL;
	uint8_t x4 = UINT8_MAX;
	int64_t t0 = -40LL;

	t0 = (x1%(x2*(x3%x4)));

	if (t0 != -8767183LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int32_t x6 = INT32_MIN;
	int8_t x7 = INT8_MIN;
	volatile int64_t t1 = -38709LL;

	t1 = (x5%(x6*(x7%x8)));

	if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static volatile uint32_t x10 = 130762751U;
	int16_t x11 = -5;

	t2 = (x9%(x10*(x11%x12)));

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x17 = INT8_MAX;
	volatile int16_t x18 = -1;
	static int16_t x19 = INT16_MIN;
	uint16_t x20 = 38U;
	int32_t t3 = 620;

	t3 = (x17%(x18*(x19%x20)));

	if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	uint64_t x26 = 10961230983LLU;
	int32_t x27 = -1;
	uint64_t t4 = 3548215997435589LLU;

	t4 = (x25%(x26*(x27%x28)));

	if (t4 != 10961198215LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -1;
	volatile uint64_t x30 = 2229546726221LLU;
	static uint32_t x31 = 10890U;
	int32_t x32 = INT32_MIN;
	uint64_t t5 = 2418807171160029LLU;

	t5 = (x29%(x30*(x31%x32)));

	if (t5 != 18403312662613905LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = -1;
	int32_t x46 = 14040588;
	static volatile int8_t x47 = -5;
	static int16_t x48 = 11621;
	int32_t t6 = -2978599;

	t6 = (x45%(x46*(x47%x48)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MIN;
	uint64_t x50 = 5042510899LLU;
	int8_t x52 = INT8_MAX;
	volatile uint64_t t7 = 58703283713028LLU;

	t7 = (x49%(x50*(x51%x52)));

	if (t7 != 3071611339LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = INT32_MIN;
	uint32_t x54 = 88024271U;
	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;

	t8 = (x53%(x54*(x55%x56)));

	if (t8 != -2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x59 = 1U;
	static volatile int64_t x60 = INT64_MIN;
	static int64_t t9 = 134098LL;

	t9 = (x57%(x58*(x59%x60)));

	if (t9 != -39LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x61 = INT32_MAX;
	static uint8_t x62 = 7U;
	uint8_t x63 = 7U;
	volatile int32_t t10 = 0;

	t10 = (x61%(x62*(x63%x64)));

	if (t10 != 43) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x69 = 12503LLU;
	uint64_t x71 = 20276619342919949LLU;
	int8_t x72 = INT8_MIN;
	static volatile uint64_t t11 = 20303551LLU;

	t11 = (x69%(x70*(x71%x72)));

	if (t11 != 12503LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = INT16_MAX;
	int32_t x74 = INT32_MIN;
	uint64_t t12 = 25549318653857LLU;

	t12 = (x73%(x74*(x75%x76)));

	if (t12 != 32767LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = INT16_MIN;
	int8_t x79 = -1;
	uint8_t x80 = 5U;

	t13 = (x77%(x78*(x79%x80)));

	if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x81 = 112U;
	int16_t x84 = 5217;

	t14 = (x81%(x82*(x83%x84)));

	if (t14 != 112U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x93 = INT32_MAX;
	volatile uint16_t x95 = UINT16_MAX;
	volatile int16_t x96 = INT16_MAX;

	t15 = (x93%(x94*(x95%x96)));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x105 = -34;
	int8_t x106 = INT8_MIN;
	static int32_t x107 = INT32_MAX;
	int8_t x108 = INT8_MIN;
	volatile int32_t t16 = 0;

	t16 = (x105%(x106*(x107%x108)));

	if (t16 != -34) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x109 = 1887U;
	int64_t x110 = -1LL;
	uint8_t x111 = 1U;
	uint8_t x112 = UINT8_MAX;

	t17 = (x109%(x110*(x111%x112)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x113 = -1;
	int8_t x114 = INT8_MIN;
	volatile int64_t x115 = INT64_MAX;
	volatile uint64_t t18 = 16413854404555LLU;

	t18 = (x113%(x114*(x115%x116)));

	if (t18 != 127LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x117 = INT16_MIN;
	uint16_t x119 = UINT16_MAX;
	volatile int16_t x120 = 2;
	int32_t t19 = 53;

	t19 = (x117%(x118*(x119%x120)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x123 = 6769LL;
	uint8_t x124 = 63U;
	volatile int64_t t20 = 378651LL;

	t20 = (x121%(x122*(x123%x124)));

	if (t20 != 3LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x125 = 150902LL;
	uint32_t x128 = 4U;
	int64_t t21 = 6378718LL;

	t21 = (x125%(x126*(x127%x128)));

	if (t21 != 150902LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x129 = -3;
	uint16_t x131 = 860U;
	static uint16_t x132 = 6262U;
	uint64_t t22 = 8135422756477LLU;

	t22 = (x129%(x130*(x131%x132)));

	if (t22 != 33851458523893LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x137 = -1LL;
	int8_t x139 = INT8_MIN;
	volatile int64_t t23 = -75LL;

	t23 = (x137%(x138*(x139%x140)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x145 = INT32_MIN;
	int32_t x146 = INT32_MAX;
	uint8_t x147 = UINT8_MAX;
	volatile uint32_t x148 = 117728976U;
	static volatile uint32_t t24 = 29050U;

	t24 = (x145%(x146*(x147%x148)));

	if (t24 != 255U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x153 = INT64_MAX;
	int8_t x155 = -1;

	t25 = (x153%(x154*(x155%x156)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x177 = -1;
	int32_t x178 = -7;
	uint8_t x179 = 62U;
	int32_t x180 = INT32_MIN;

	t26 = (x177%(x178*(x179%x180)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MAX;
	volatile int32_t x183 = 31897858;

	t27 = (x181%(x182*(x183%x184)));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x189 = 122235LLU;
	volatile int64_t x190 = INT64_MIN;
	uint64_t x191 = 2721594397902024205LLU;
	int16_t x192 = -15394;
	uint64_t t28 = 3866740066861530454LLU;

	t28 = (x189%(x190*(x191%x192)));

	if (t28 != 122235LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x197 = INT64_MAX;
	int64_t x198 = 9366009874667LL;
	uint16_t x199 = UINT16_MAX;
	int16_t x200 = 536;
	int64_t t29 = -12791580LL;

	t29 = (x197%(x198*(x199%x200)));

	if (t29 != 680845289930241LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MIN;
	static int8_t x203 = INT8_MIN;
	int32_t t30 = -3935861;

	t30 = (x201%(x202*(x203%x204)));

	if (t30 != -3072) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x205 = UINT64_MAX;
	int64_t x206 = -4071LL;
	int8_t x207 = INT8_MIN;
	static int64_t x208 = INT64_MAX;
	uint64_t t31 = 500807LLU;

	t31 = (x205%(x206*(x207%x208)));

	if (t31 != 509823LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x213 = -11626;
	uint32_t x214 = 50825901U;
	int16_t x215 = -402;
	uint16_t x216 = 26842U;
	static volatile uint32_t t32 = 6680972U;

	t32 = (x213%(x214*(x215%x216)));

	if (t32 != 123658558U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x221 = 1571;
	int8_t x222 = INT8_MIN;
	uint64_t x223 = UINT64_MAX;
	uint64_t x224 = 449497LLU;
	static uint64_t t33 = 532LLU;

	t33 = (x221%(x222*(x223%x224)));

	if (t33 != 1571LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x229 = 1731U;
	static uint32_t x230 = 533718U;
	int16_t x231 = -15445;
	volatile int64_t x232 = INT64_MAX;
	int64_t t34 = -5059750916599LL;

	t34 = (x229%(x230*(x231%x232)));

	if (t34 != 1731LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x233 = 0U;
	volatile int32_t x234 = INT32_MIN;
	uint32_t x235 = UINT32_MAX;
	volatile uint32_t t35 = 121792U;

	t35 = (x233%(x234*(x235%x236)));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x241 = 4;
	int64_t x242 = INT64_MIN;
	int8_t x244 = INT8_MAX;
	volatile uint64_t t36 = 82091955564LLU;

	t36 = (x241%(x242*(x243%x244)));

	if (t36 != 4LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x245 = UINT16_MAX;
	int32_t x246 = INT32_MAX;
	int16_t x247 = -1;
	int16_t x248 = INT16_MIN;
	int32_t t37 = -1;

	t37 = (x245%(x246*(x247%x248)));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x250 = INT16_MIN;
	uint8_t x251 = 117U;
	uint64_t t38 = 2030993788LLU;

	t38 = (x249%(x250*(x251%x252)));

	if (t38 != 3744281LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x257 = 67U;
	int64_t x258 = 3127712808LL;
	static volatile int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MAX;
	volatile int64_t t39 = 6931LL;

	t39 = (x257%(x258*(x259%x260)));

	if (t39 != 67LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x262 = 24;
	int16_t x263 = INT16_MIN;
	volatile int32_t x264 = -18;

	t40 = (x261%(x262*(x263%x264)));

	if (t40 != 636289U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x265 = -18;
	int64_t x266 = -392882057LL;
	static uint8_t x268 = UINT8_MAX;
	volatile int64_t t41 = 93841628510LL;

	t41 = (x265%(x266*(x267%x268)));

	if (t41 != -18LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x273 = INT8_MAX;
	static uint16_t x274 = 102U;
	int32_t x275 = INT32_MIN;
	uint32_t x276 = 185U;
	volatile uint32_t t42 = 321918U;

	t42 = (x273%(x274*(x275%x276)));

	if (t42 != 127U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x281 = INT16_MIN;
	int32_t x282 = 5757;
	int64_t x283 = INT64_MIN;
	uint16_t x284 = 10770U;
	int64_t t43 = -663540LL;

	t43 = (x281%(x282*(x283%x284)));

	if (t43 != -32768LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x286 = 1LLU;
	uint32_t x287 = 837134U;
	static uint64_t x288 = 5545885001451620533LLU;
	volatile uint64_t t44 = 163552235339100LLU;

	t44 = (x285%(x286*(x287%x288)));

	if (t44 != 212850LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x289 = 27203843;
	static int32_t x290 = INT32_MIN;
	volatile uint16_t x291 = 1U;
	int16_t x292 = -3;

	t45 = (x289%(x290*(x291%x292)));

	if (t45 != 27203843) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x293 = UINT16_MAX;
	volatile uint32_t x294 = 12U;
	uint16_t x295 = 468U;
	volatile uint16_t x296 = UINT16_MAX;

	t46 = (x293%(x294*(x295%x296)));

	if (t46 != 3759U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x302 = UINT64_MAX;
	static uint8_t x303 = 38U;
	int16_t x304 = INT16_MIN;
	volatile uint64_t t47 = 29534525LLU;

	t47 = (x301%(x302*(x303%x304)));

	if (t47 != 255LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x309 = INT64_MIN;
	volatile int16_t x310 = -1;
	int8_t x311 = -3;
	uint64_t x312 = UINT64_MAX;
	uint64_t t48 = 14149LLU;

	t48 = (x309%(x310*(x311%x312)));

	if (t48 != 2LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x314 = INT16_MIN;
	static volatile int32_t x316 = INT32_MAX;
	volatile uint32_t t49 = 829U;

	t49 = (x313%(x314*(x315%x316)));

	if (t49 != 8171151U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x318 = 186357022;
	uint8_t x319 = 14U;
	volatile int64_t x320 = INT64_MIN;
	uint64_t t50 = 15575431204LLU;

	t50 = (x317%(x318*(x319%x320)));

	if (t50 != 2264104544LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x325 = UINT16_MAX;
	static int8_t x326 = INT8_MIN;
	int64_t x327 = 14263568083LL;
	int8_t x328 = INT8_MIN;

	t51 = (x325%(x326*(x327%x328)));

	if (t51 != 1791LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x329 = INT16_MIN;
	int16_t x331 = INT16_MIN;
	int64_t x332 = INT64_MIN;

	t52 = (x329%(x330*(x331%x332)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x333 = UINT32_MAX;
	int16_t x334 = -12;
	static int64_t x336 = INT64_MIN;
	int64_t t53 = -4LL;

	t53 = (x333%(x334*(x335%x336)));

	if (t53 != 1023LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x341 = 11LL;
	uint32_t x342 = 10261U;
	int64_t x343 = INT64_MAX;
	uint8_t x344 = 57U;
	int64_t t54 = 138043835042707LL;

	t54 = (x341%(x342*(x343%x344)));

	if (t54 != 11LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x345 = INT64_MIN;
	uint8_t x346 = UINT8_MAX;
	volatile int32_t x347 = -1;
	static int16_t x348 = INT16_MIN;
	static volatile int64_t t55 = 0LL;

	t55 = (x345%(x346*(x347%x348)));

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x349 = 120895;
	int8_t x350 = INT8_MIN;
	volatile uint32_t x351 = 1658U;
	uint32_t t56 = 3653135U;

	t56 = (x349%(x350*(x351%x352)));

	if (t56 != 120895U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x361 = INT64_MAX;
	int16_t x363 = INT16_MIN;
	int32_t x364 = -64770620;
	int64_t t57 = 3086215817329170LL;

	t57 = (x361%(x362*(x363%x364)));

	if (t57 != 32767LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x373 = 14U;
	int16_t x376 = -3;
	uint32_t t58 = 21365U;

	t58 = (x373%(x374*(x375%x376)));

	if (t58 != 14U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x385 = UINT16_MAX;
	uint64_t x387 = 71LLU;
	static volatile uint64_t x388 = 364161034303971478LLU;
	static uint64_t t59 = 177LLU;

	t59 = (x385%(x386*(x387%x388)));

	if (t59 != 65535LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x389 = 49;
	int32_t x390 = INT32_MIN;
	int8_t x391 = -1;
	int64_t t60 = 1289LL;

	t60 = (x389%(x390*(x391%x392)));

	if (t60 != 49LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x393 = -1;
	uint64_t x394 = UINT64_MAX;
	int32_t x395 = 1;
	uint8_t x396 = UINT8_MAX;
	volatile uint64_t t61 = 488407395088136LLU;

	t61 = (x393%(x394*(x395%x396)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x401 = 930651726U;
	uint32_t x403 = 349941U;
	static int8_t x404 = -1;
	uint64_t t62 = 13390113204091854LLU;

	t62 = (x401%(x402*(x403%x404)));

	if (t62 != 930651726LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x405 = 240U;
	int16_t x407 = 925;
	int16_t x408 = INT16_MAX;
	uint64_t t63 = 2333316563970046LLU;

	t63 = (x405%(x406*(x407%x408)));

	if (t63 != 240LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x410 = -4875736LL;
	int64_t x411 = 1077652643198LL;
	static uint32_t x412 = 59U;
	volatile int64_t t64 = -22LL;

	t64 = (x409%(x410*(x411%x412)));

	if (t64 != 39765847LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x413 = -46;
	static uint32_t x415 = UINT32_MAX;
	uint32_t t65 = 61324058U;

	t65 = (x413%(x414*(x415%x416)));

	if (t65 != 3990U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x417 = INT32_MIN;
	int32_t x418 = INT32_MIN;
	volatile uint32_t x419 = 11776U;
	int64_t x420 = INT64_MIN;
	volatile int64_t t66 = -1650272LL;

	t66 = (x417%(x418*(x419%x420)));

	if (t66 != -2147483648LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x422 = 97;
	static int64_t x423 = INT64_MIN;
	static volatile int32_t x424 = -834963729;

	t67 = (x421%(x422*(x423%x424)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x433 = UINT16_MAX;
	int8_t x434 = INT8_MIN;
	uint8_t x435 = 22U;
	static volatile int64_t t68 = 128992LL;

	t68 = (x433%(x434*(x435%x436)));

	if (t68 != 767LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x437 = -11;
	volatile uint32_t x438 = UINT32_MAX;
	uint8_t x439 = UINT8_MAX;
	int64_t x440 = INT64_MIN;

	t69 = (x437%(x438*(x439%x440)));

	if (t69 != -11LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x441 = INT16_MIN;
	int32_t x442 = 28;
	int64_t x443 = -1LL;
	int32_t x444 = -544064;

	t70 = (x441%(x442*(x443%x444)));

	if (t70 != -8LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x454 = -1;
	uint16_t x455 = 12903U;
	uint16_t x456 = 3168U;
	int32_t t71 = 865204329;

	t71 = (x453%(x454*(x455%x456)));

	if (t71 != 26) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x461 = INT16_MIN;
	uint32_t x462 = UINT32_MAX;
	volatile int32_t x464 = -96986;

	t72 = (x461%(x462*(x463%x464)));

	if (t72 != 358874582235548LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x465 = INT16_MAX;
	int16_t x466 = INT16_MIN;
	volatile int16_t x468 = -1190;
	uint64_t t73 = 2654171188232477726LLU;

	t73 = (x465%(x466*(x467%x468)));

	if (t73 != 32767LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x473 = UINT32_MAX;
	uint64_t x475 = 3071140948899080729LLU;
	int16_t x476 = 1111;
	volatile uint64_t t74 = 75788025LLU;

	t74 = (x473%(x474*(x475%x476)));

	if (t74 != 4294967295LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x479 = -1LL;
	volatile int8_t x480 = INT8_MAX;
	uint64_t t75 = 6004LLU;

	t75 = (x477%(x478*(x479%x480)));

	if (t75 != 54LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x485 = 8U;
	int32_t x486 = -1;
	int32_t x487 = -3115468;
	uint64_t x488 = UINT64_MAX;
	volatile uint64_t t76 = 850LLU;

	t76 = (x485%(x486*(x487%x488)));

	if (t76 != 8LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x493 = INT16_MIN;
	int16_t x494 = 25;
	static uint32_t x495 = 9991732U;

	t77 = (x493%(x494*(x495%x496)));

	if (t77 != 48448428U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x497 = INT16_MAX;
	static int16_t x498 = INT16_MIN;
	volatile int32_t t78 = 1;

	t78 = (x497%(x498*(x499%x500)));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x502 = INT64_MAX;
	volatile uint32_t x503 = 110U;
	uint64_t x504 = UINT64_MAX;
	volatile uint64_t t79 = 1728303533LLU;

	t79 = (x501%(x502*(x503%x504)));

	if (t79 != 9LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x506 = 500U;
	int16_t x507 = INT16_MIN;
	volatile int32_t x508 = -960100111;

	t80 = (x505%(x506*(x507%x508)));

	if (t80 != 2147483648U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x509 = 5995;
	uint16_t x510 = UINT16_MAX;
	int64_t x511 = -2950927674LL;
	static int64_t t81 = 29278566843341037LL;

	t81 = (x509%(x510*(x511%x512)));

	if (t81 != 5995LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x513 = -4085631LL;
	static int32_t x514 = 102910;
	int32_t x515 = INT32_MIN;
	uint64_t x516 = 48LLU;

	t82 = (x513%(x514*(x515%x516)));

	if (t82 != 476865LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x529 = INT32_MIN;
	uint16_t x531 = UINT16_MAX;
	uint8_t x532 = 2U;
	static int32_t t83 = 1954;

	t83 = (x529%(x530*(x531%x532)));

	if (t83 != -1068) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x539 = INT64_MAX;
	int16_t x540 = INT16_MIN;
	int64_t t84 = 9LL;

	t84 = (x537%(x538*(x539%x540)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x546 = INT16_MIN;
	uint8_t x547 = 6U;
	static volatile int8_t x548 = INT8_MIN;
	int32_t t85 = -807517;

	t85 = (x545%(x546*(x547%x548)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x549 = UINT64_MAX;
	int16_t x550 = INT16_MIN;
	int32_t x551 = -1;
	volatile uint64_t t86 = 130653822898LLU;

	t86 = (x549%(x550*(x551%x552)));

	if (t86 != 1676499305757179903LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x557 = -5326;
	int64_t x558 = -2010739LL;
	uint32_t x560 = 113655953U;
	volatile int64_t t87 = 1LL;

	t87 = (x557%(x558*(x559%x560)));

	if (t87 != -5326LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x561 = INT32_MIN;
	int16_t x562 = -1;
	int64_t x563 = -4485645306159482LL;

	t88 = (x561%(x562*(x563%x564)));

	if (t88 != 293436049066LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x569 = INT8_MAX;
	uint8_t x570 = UINT8_MAX;
	uint32_t x571 = 267704U;
	uint64_t x572 = 809566021LLU;
	static uint64_t t89 = 7364721760068LLU;

	t89 = (x569%(x570*(x571%x572)));

	if (t89 != 127LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x573 = -1;
	int64_t x574 = -618885945767911508LL;
	volatile int8_t x575 = -1;
	int16_t x576 = INT16_MAX;
	int64_t t90 = -238028646816LL;

	t90 = (x573%(x574*(x575%x576)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x577 = UINT8_MAX;
	int32_t x578 = INT32_MIN;
	volatile uint64_t t91 = 8955012425950308324LLU;

	t91 = (x577%(x578*(x579%x580)));

	if (t91 != 255LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x581 = -1;
	volatile int32_t x582 = INT32_MIN;
	int8_t x583 = -1;
	volatile int64_t x584 = 495268688LL;
	volatile int64_t t92 = 1LL;

	t92 = (x581%(x582*(x583%x584)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x586 = INT32_MIN;
	static volatile int16_t x587 = -4254;
	volatile int64_t x588 = INT64_MIN;
	uint64_t t93 = 15911LLU;

	t93 = (x585%(x586*(x587%x588)));

	if (t93 != 2170115LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x589 = UINT16_MAX;
	int64_t x590 = -933219459518459LL;
	uint64_t x591 = 5243134LLU;
	static volatile uint8_t x592 = 62U;
	uint64_t t94 = 401652281584005LLU;

	t94 = (x589%(x590*(x591%x592)));

	if (t94 != 65535LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x614 = -17;
	uint8_t x615 = 52U;
	volatile int16_t x616 = INT16_MAX;

	t95 = (x613%(x614*(x615%x616)));

	if (t95 != 61) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x621 = INT64_MIN;
	uint64_t x622 = 34976LLU;
	volatile uint64_t t96 = 1955712255220LLU;

	t96 = (x621%(x622*(x623%x624)));

	if (t96 != 195291328LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x637 = -290;
	static int8_t x640 = -7;
	volatile int64_t t97 = 93746903935237173LL;

	t97 = (x637%(x638*(x639%x640)));

	if (t97 != -290LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x642 = INT8_MIN;
	uint16_t x643 = 18029U;
	volatile int64_t x644 = INT64_MIN;
	volatile int64_t t98 = 457734616477023LL;

	t98 = (x641%(x642*(x643%x644)));

	if (t98 != -864LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x649 = -1LL;
	volatile int16_t x650 = -4949;
	uint32_t x652 = UINT32_MAX;
	static volatile int64_t t99 = -97282723123733LL;

	t99 = (x649%(x650*(x651%x652)));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

