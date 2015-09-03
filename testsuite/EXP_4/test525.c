#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
int64_t x8 = -1LL;
uint32_t x16 = 1983004U;
int8_t x17 = -1;
int32_t x19 = -1;
int8_t x27 = 0;
int32_t x31 = INT32_MIN;
static int16_t x33 = INT16_MIN;
static uint32_t x37 = UINT32_MAX;
uint16_t x39 = 354U;
static uint64_t x46 = 1190264334072LLU;
uint8_t x48 = 2U;
uint64_t t12 = 214LLU;
int32_t x59 = -1;
static volatile uint64_t x61 = 500804755772439571LLU;
uint64_t x64 = UINT64_MAX;
volatile int16_t x68 = INT16_MAX;
volatile int8_t x74 = 1;
volatile uint32_t t18 = 523936409U;
int32_t x95 = 0;
uint64_t x110 = UINT64_MAX;
int8_t x113 = -1;
static uint64_t x114 = 1LLU;
volatile uint32_t x116 = 28784232U;
uint16_t x119 = UINT16_MAX;
static int32_t x124 = -3029134;
uint32_t x126 = 6365U;
volatile uint32_t t27 = 15603U;
volatile int64_t x136 = 60061107442LL;
volatile uint64_t t30 = 0LLU;
volatile int16_t x142 = -1;
volatile int8_t x144 = -54;
int64_t t31 = 6815129993558420LL;
int32_t x146 = -10865;
static uint64_t x150 = UINT64_MAX;
static int64_t x152 = 231073986470LL;
int16_t x154 = 88;
uint64_t x156 = UINT64_MAX;
static uint8_t x160 = UINT8_MAX;
int32_t x174 = INT32_MIN;
int32_t x177 = -2064950;
static uint16_t x178 = 17U;
static volatile int8_t x181 = INT8_MAX;
uint64_t x194 = UINT64_MAX;
uint16_t x205 = 0U;
static int32_t x206 = -21725246;
uint8_t x219 = 0U;
uint16_t x222 = 12U;
int64_t x223 = INT64_MAX;
uint64_t x224 = UINT64_MAX;
static int32_t x226 = -1;
static int8_t x231 = -1;
int32_t t50 = -264523195;
static int16_t x233 = INT16_MAX;
int64_t x235 = INT64_MIN;
uint64_t x236 = 4282336623391502593LLU;
volatile int32_t t52 = 23552023;
int32_t x241 = INT32_MIN;
volatile int64_t t53 = -817947910LL;
uint64_t t55 = 24914427126618LLU;
int64_t x257 = 23LL;
volatile uint64_t x261 = 833145LLU;
volatile uint64_t t58 = 2228943812406801772LLU;
static int8_t x270 = -25;
static volatile int32_t t59 = -19305;
uint32_t x273 = 6274585U;
int16_t x284 = 117;
volatile int32_t x290 = INT32_MAX;
int32_t x292 = -1;
static uint16_t x302 = 0U;
volatile int32_t x306 = 418199;
static int16_t x316 = -1;
int32_t x322 = INT32_MAX;
static uint8_t x323 = UINT8_MAX;
static int16_t x328 = -1;
int8_t x330 = INT8_MIN;
volatile int64_t t72 = -17LL;
int32_t x338 = INT32_MAX;
uint32_t x339 = 667U;
volatile int8_t x351 = INT8_MIN;
static int16_t x354 = INT16_MAX;
volatile int16_t x359 = INT16_MAX;
int64_t t80 = 4258408LL;
int32_t x370 = 530654557;
uint8_t x376 = UINT8_MAX;
volatile int32_t t82 = 20770553;
static int32_t x378 = 536590611;
uint16_t x388 = 692U;
static volatile int8_t x389 = INT8_MIN;
uint16_t x390 = UINT16_MAX;
static int32_t x393 = INT32_MIN;
uint64_t x400 = UINT64_MAX;
static uint8_t x402 = 9U;
volatile int64_t x404 = INT64_MAX;
int64_t x407 = INT64_MIN;
int32_t x408 = -17588873;
int64_t t90 = 338660837826LL;
volatile uint8_t x411 = UINT8_MAX;
volatile int16_t x412 = 409;
int64_t t91 = -2803676519LL;
static int32_t t92 = 201509;
uint32_t t93 = 2745842U;
int64_t x421 = -492441927453LL;
int64_t t94 = -6191268517709095LL;
uint32_t x437 = UINT32_MAX;
int32_t x443 = INT32_MAX;


void f0(void) {
	int16_t x2 = INT16_MIN;
	static int8_t x3 = -1;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -1295876;

	t0 = (x1%(x2-(x3/x4)));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 2U;
	uint8_t x6 = 7U;
	volatile int32_t x7 = INT32_MAX;
	volatile int64_t t1 = 1645LL;

	t1 = (x5%(x6-(x7/x8)));

	if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	volatile uint32_t x10 = 117U;
	static int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MAX;
	uint32_t t2 = 26U;

	t2 = (x9%(x10-(x11/x12)));

	if (t2 != 21U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint8_t x14 = UINT8_MAX;
	uint16_t x15 = 822U;
	volatile int64_t t3 = -6480827560LL;

	t3 = (x13%(x14-(x15/x16)));

	if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	uint8_t x20 = 3U;
	volatile int64_t t4 = -516333980LL;

	t4 = (x17%(x18-(x19/x20)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = UINT32_MAX;
	volatile int32_t x22 = INT32_MAX;
	uint64_t x23 = UINT64_MAX;
	int8_t x24 = 1;
	volatile uint64_t t5 = 631LLU;

	t5 = (x21%(x22-(x23/x24)));

	if (t5 != 2147483647LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 1407U;
	int16_t x26 = 190;
	int32_t x28 = INT32_MIN;
	static int32_t t6 = 1;

	t6 = (x25%(x26-(x27/x28)));

	if (t6 != 77) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MAX;
	uint16_t x30 = 17U;
	uint32_t x32 = 2642026U;
	static volatile uint32_t t7 = 3657U;

	t7 = (x29%(x30-(x31/x32)));

	if (t7 != 32767U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x34 = 102220128;
	volatile int64_t x35 = -1LL;
	int64_t x36 = INT64_MIN;
	int64_t t8 = 402817278233LL;

	t8 = (x33%(x34-(x35/x36)));

	if (t8 != -32768LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = 25U;
	uint32_t x40 = 27352U;
	uint32_t t9 = 747U;

	t9 = (x37%(x38-(x39/x40)));

	if (t9 != 20U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x45 = 5899486864998LLU;
	uint64_t x47 = 39720213475292168LLU;
	uint64_t t10 = 1609583384142LLU;

	t10 = (x45%(x46-(x47/x48)));

	if (t10 != 5899486864998LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = UINT32_MAX;
	volatile int8_t x50 = -1;
	static int64_t x51 = INT64_MIN;
	int32_t x52 = INT32_MIN;
	volatile int64_t t11 = -17619716LL;

	t11 = (x49%(x50-(x51/x52)));

	if (t11 != 4294967295LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = INT64_MIN;
	uint64_t x54 = UINT64_MAX;
	volatile int8_t x55 = -34;
	int32_t x56 = INT32_MAX;

	t12 = (x53%(x54-(x55/x56)));

	if (t12 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = UINT8_MAX;
	int16_t x58 = -1;
	int8_t x60 = -1;
	int32_t t13 = 481831;

	t13 = (x57%(x58-(x59/x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x62 = 417973604LL;
	volatile int64_t x63 = 41512345599405LL;
	volatile uint64_t t14 = 83362893570LLU;

	t14 = (x61%(x62-(x63/x64)));

	if (t14 != 199276515LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x65 = -1LL;
	static int16_t x66 = INT16_MAX;
	int16_t x67 = INT16_MIN;
	static int64_t t15 = 240625314LL;

	t15 = (x65%(x66-(x67/x68)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = UINT64_MAX;
	int16_t x70 = -1;
	int8_t x71 = INT8_MIN;
	static uint64_t x72 = UINT64_MAX;
	volatile uint64_t t16 = 4504835LLU;

	t16 = (x69%(x70-(x71/x72)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -1LL;
	volatile uint64_t x75 = 454732LLU;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t17 = 2052098LLU;

	t17 = (x73%(x74-(x75/x76)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = INT16_MAX;
	uint8_t x87 = 10U;
	uint32_t x88 = UINT32_MAX;

	t18 = (x85%(x86-(x87/x88)));

	if (t18 != 3U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MIN;
	volatile int8_t x90 = INT8_MAX;
	int16_t x91 = INT16_MIN;
	volatile int16_t x92 = -1;
	static int32_t t19 = 5;

	t19 = (x89%(x90-(x91/x92)));

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MIN;
	uint16_t x94 = 1641U;
	int64_t x96 = -1LL;
	int64_t t20 = 1190LL;

	t20 = (x93%(x94-(x95/x96)));

	if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x97 = -1;
	int8_t x98 = INT8_MIN;
	static int32_t x99 = INT32_MAX;
	uint64_t x100 = 66656343401584LLU;
	static volatile uint64_t t21 = 64258485LLU;

	t21 = (x97%(x98-(x99/x100)));

	if (t21 != 127LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x105 = 234535668U;
	volatile int16_t x106 = INT16_MIN;
	int16_t x107 = 6;
	int32_t x108 = -1;
	volatile uint32_t t22 = 119066U;

	t22 = (x105%(x106-(x107/x108)));

	if (t22 != 234535668U) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x109 = INT8_MIN;
	int8_t x111 = -1;
	uint32_t x112 = UINT32_MAX;
	uint64_t t23 = 14250662418563LLU;

	t23 = (x109%(x110-(x111/x112)));

	if (t23 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x115 = INT8_MAX;
	uint64_t t24 = 1168667312LLU;

	t24 = (x113%(x114-(x115/x116)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = 612687LL;
	int8_t x118 = 0;
	volatile int32_t x120 = -26392;
	static int64_t t25 = 94759579LL;

	t25 = (x117%(x118-(x119/x120)));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	volatile int16_t x122 = INT16_MIN;
	int16_t x123 = -29;
	volatile int32_t t26 = -10930959;

	t26 = (x121%(x122-(x123/x124)));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x125 = 103;
	uint32_t x127 = 1356343346U;
	uint16_t x128 = 427U;

	t27 = (x125%(x126-(x127/x128)));

	if (t27 != 103U) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x129 = INT8_MIN;
	int32_t x130 = INT32_MIN;
	int32_t x131 = INT32_MIN;
	static int32_t x132 = 2510008;
	volatile int32_t t28 = 387964668;

	t28 = (x129%(x130-(x131/x132)));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x133 = 3U;
	int8_t x134 = -11;
	uint16_t x135 = UINT16_MAX;
	volatile int64_t t29 = -56408LL;

	t29 = (x133%(x134-(x135/x136)));

	if (t29 != 3LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x137 = UINT32_MAX;
	int16_t x138 = 58;
	uint64_t x139 = UINT64_MAX;
	int8_t x140 = -1;

	t30 = (x137%(x138-(x139/x140)));

	if (t30 != 24LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = -1LL;
	static int32_t x143 = INT32_MIN;

	t31 = (x141%(x142-(x143/x144)));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x145 = -2;
	int8_t x147 = -1;
	int8_t x148 = -1;
	volatile int32_t t32 = 1;

	t32 = (x145%(x146-(x147/x148)));

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x149 = INT8_MIN;
	int16_t x151 = -1;
	static uint64_t t33 = 152932951428LLU;

	t33 = (x149%(x150-(x151/x152)));

	if (t33 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x153 = 0;
	int8_t x155 = -1;
	static volatile uint64_t t34 = 212LLU;

	t34 = (x153%(x154-(x155/x156)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = -15;
	static int64_t x158 = -22285009444246LL;
	volatile uint8_t x159 = UINT8_MAX;
	volatile int64_t t35 = 28LL;

	t35 = (x157%(x158-(x159/x160)));

	if (t35 != -15LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = -9266378512710095LL;
	int16_t x166 = 60;
	int8_t x167 = INT8_MIN;
	uint8_t x168 = 109U;
	volatile int64_t t36 = -12894209301LL;

	t36 = (x165%(x166-(x167/x168)));

	if (t36 != -18LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x173 = 5;
	int16_t x175 = INT16_MIN;
	int8_t x176 = 6;
	volatile int32_t t37 = 28470418;

	t37 = (x173%(x174-(x175/x176)));

	if (t37 != 5) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x179 = 617U;
	int16_t x180 = -1;
	uint32_t t38 = 17U;

	t38 = (x177%(x178-(x179/x180)));

	if (t38 != 7U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x182 = 0;
	int64_t x183 = INT64_MAX;
	static int32_t x184 = INT32_MAX;
	int64_t t39 = 259762022480248323LL;

	t39 = (x181%(x182-(x183/x184)));

	if (t39 != 127LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x189 = 123908857U;
	int32_t x190 = -1;
	static uint32_t x191 = 0U;
	static int32_t x192 = 53137;
	uint32_t t40 = 681U;

	t40 = (x189%(x190-(x191/x192)));

	if (t40 != 123908857U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = -1;
	uint64_t x195 = 94LLU;
	static volatile int64_t x196 = INT64_MIN;
	uint64_t t41 = 1286606LLU;

	t41 = (x193%(x194-(x195/x196)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = INT32_MIN;
	uint16_t x198 = 29U;
	volatile uint16_t x199 = 384U;
	int16_t x200 = -77;
	int32_t t42 = 755;

	t42 = (x197%(x198-(x199/x200)));

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x201 = 548333382219531427LLU;
	static int8_t x202 = -1;
	int16_t x203 = -5341;
	static int16_t x204 = -1519;
	volatile uint64_t t43 = 25307LLU;

	t43 = (x201%(x202-(x203/x204)));

	if (t43 != 548333382219531427LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x207 = INT64_MIN;
	int64_t x208 = -4LL;
	int64_t t44 = -520LL;

	t44 = (x205%(x206-(x207/x208)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x209 = UINT8_MAX;
	static int32_t x210 = 1226751;
	uint32_t x211 = 31924U;
	static int16_t x212 = 12;
	uint32_t t45 = 127U;

	t45 = (x209%(x210-(x211/x212)));

	if (t45 != 255U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x213 = -1;
	static int8_t x214 = INT8_MIN;
	int32_t x215 = -15993;
	static volatile int16_t x216 = -34;
	int32_t t46 = -24;

	t46 = (x213%(x214-(x215/x216)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x217 = UINT16_MAX;
	int32_t x218 = 1;
	uint8_t x220 = 40U;
	volatile int32_t t47 = -487452;

	t47 = (x217%(x218-(x219/x220)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x221 = INT32_MAX;
	uint64_t t48 = 6562175129797823865LLU;

	t48 = (x221%(x222-(x223/x224)));

	if (t48 != 7LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = 1;
	volatile int64_t x227 = -1LL;
	static uint8_t x228 = 4U;
	volatile int64_t t49 = 332LL;

	t49 = (x225%(x226-(x227/x228)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x229 = INT32_MIN;
	static uint8_t x230 = 30U;
	int16_t x232 = -519;

	t50 = (x229%(x230-(x231/x232)));

	if (t50 != -8) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x234 = INT32_MIN;
	static volatile uint64_t t51 = 29341185209968LLU;

	t51 = (x233%(x234-(x235/x236)));

	if (t51 != 32767LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x237 = INT16_MIN;
	int32_t x238 = INT32_MIN;
	uint8_t x239 = 4U;
	uint8_t x240 = UINT8_MAX;

	t52 = (x237%(x238-(x239/x240)));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x242 = -1118665732225997074LL;
	uint8_t x243 = 0U;
	volatile int64_t x244 = -1649240376LL;

	t53 = (x241%(x242-(x243/x244)));

	if (t53 != -2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x245 = UINT8_MAX;
	uint8_t x246 = UINT8_MAX;
	uint32_t x247 = 19U;
	uint8_t x248 = 8U;
	uint32_t t54 = 3197438U;

	t54 = (x245%(x246-(x247/x248)));

	if (t54 != 2U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = INT32_MIN;
	uint64_t x250 = UINT64_MAX;
	volatile int8_t x251 = -1;
	static uint8_t x252 = 83U;

	t55 = (x249%(x250-(x251/x252)));

	if (t55 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = 1615235723054753LLU;
	volatile uint32_t x254 = 180207603U;
	int32_t x255 = -58944022;
	static int32_t x256 = -1;
	volatile uint64_t t56 = 195596781947767488LLU;

	t56 = (x253%(x254-(x255/x256)));

	if (t56 != 94855094LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x258 = INT64_MIN;
	int32_t x259 = INT32_MIN;
	static int32_t x260 = 6738;
	static volatile int64_t t57 = -134836746450LL;

	t57 = (x257%(x258-(x259/x260)));

	if (t57 != 23LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x262 = 561;
	uint64_t x263 = 3099783463175991759LLU;
	int8_t x264 = INT8_MIN;

	t58 = (x261%(x262-(x263/x264)));

	if (t58 != 60LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x269 = -5916189;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = INT32_MIN;

	t59 = (x269%(x270-(x271/x272)));

	if (t59 != -14) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x274 = -1;
	uint16_t x275 = 0U;
	volatile int8_t x276 = -5;
	static volatile uint32_t t60 = 65506979U;

	t60 = (x273%(x274-(x275/x276)));

	if (t60 != 6274585U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = INT32_MAX;
	int64_t x278 = -1LL;
	static int8_t x279 = INT8_MIN;
	uint32_t x280 = UINT32_MAX;
	static int64_t t61 = -103713672973502LL;

	t61 = (x277%(x278-(x279/x280)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = -1;
	volatile uint64_t x282 = UINT64_MAX;
	uint16_t x283 = 1550U;
	uint64_t t62 = 134065842952203LLU;

	t62 = (x281%(x282-(x283/x284)));

	if (t62 != 13LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x289 = INT64_MIN;
	int64_t x291 = 0LL;
	volatile int64_t t63 = -217LL;

	t63 = (x289%(x290-(x291/x292)));

	if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = INT16_MIN;
	int8_t x294 = 0;
	int16_t x295 = INT16_MAX;
	volatile uint32_t x296 = 436U;
	uint32_t t64 = 31364868U;

	t64 = (x293%(x294-(x295/x296)));

	if (t64 != 4294934528U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x297 = -1LL;
	int64_t x298 = -1LL;
	static volatile int16_t x299 = 13482;
	int64_t x300 = INT64_MIN;
	volatile int64_t t65 = 3LL;

	t65 = (x297%(x298-(x299/x300)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x301 = -1;
	int64_t x303 = 897LL;
	int16_t x304 = 1;
	int64_t t66 = -1139888061895LL;

	t66 = (x301%(x302-(x303/x304)));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x305 = 6LLU;
	volatile int32_t x307 = -45;
	static int32_t x308 = INT32_MIN;
	volatile uint64_t t67 = 131974913LLU;

	t67 = (x305%(x306-(x307/x308)));

	if (t67 != 6LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x313 = 745275LLU;
	volatile int8_t x314 = -54;
	int8_t x315 = INT8_MIN;
	uint64_t t68 = 25LLU;

	t68 = (x313%(x314-(x315/x316)));

	if (t68 != 745275LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x317 = -1;
	uint32_t x318 = 47U;
	uint16_t x319 = UINT16_MAX;
	int32_t x320 = 1447;
	uint32_t t69 = 888U;

	t69 = (x317%(x318-(x319/x320)));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x321 = -2200103;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t70 = 37712;

	t70 = (x321%(x322-(x323/x324)));

	if (t70 != -2200103) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = INT64_MAX;
	static volatile int8_t x326 = 3;
	volatile int16_t x327 = INT16_MIN;
	static int64_t t71 = 1LL;

	t71 = (x325%(x326-(x327/x328)));

	if (t71 != 647LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x329 = UINT8_MAX;
	volatile int32_t x331 = INT32_MIN;
	int64_t x332 = 2787317LL;

	t72 = (x329%(x330-(x331/x332)));

	if (t72 != 255LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = INT64_MAX;
	int32_t x334 = 9;
	static volatile uint32_t x335 = 6U;
	static volatile uint16_t x336 = 4U;
	volatile int64_t t73 = -4546263454LL;

	t73 = (x333%(x334-(x335/x336)));

	if (t73 != 7LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x337 = 346;
	int32_t x340 = 124;
	uint32_t t74 = 150232U;

	t74 = (x337%(x338-(x339/x340)));

	if (t74 != 346U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x341 = 31U;
	static volatile int16_t x342 = INT16_MAX;
	int64_t x343 = -1LL;
	uint64_t x344 = 1831059142528591947LLU;
	uint64_t t75 = 1461946754LLU;

	t75 = (x341%(x342-(x343/x344)));

	if (t75 != 31LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = INT16_MAX;
	static volatile int64_t x346 = INT64_MIN;
	static volatile uint8_t x347 = 5U;
	volatile uint64_t x348 = 33880274LLU;
	volatile uint64_t t76 = 15046145LLU;

	t76 = (x345%(x346-(x347/x348)));

	if (t76 != 32767LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x349 = INT64_MIN;
	uint64_t x350 = 5LLU;
	static uint16_t x352 = UINT16_MAX;
	uint64_t t77 = 103065LLU;

	t77 = (x349%(x350-(x351/x352)));

	if (t77 != 3LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x353 = 1;
	int16_t x355 = INT16_MIN;
	int8_t x356 = -1;
	volatile int32_t t78 = -12301409;

	t78 = (x353%(x354-(x355/x356)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x357 = 1U;
	static int64_t x358 = 1LL;
	int64_t x360 = -109987257264LL;
	int64_t t79 = 788480LL;

	t79 = (x357%(x358-(x359/x360)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x365 = 240U;
	volatile int16_t x366 = INT16_MIN;
	static int16_t x367 = INT16_MIN;
	int64_t x368 = INT64_MIN;

	t80 = (x365%(x366-(x367/x368)));

	if (t80 != 240LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x369 = INT64_MIN;
	int32_t x371 = INT32_MAX;
	int32_t x372 = INT32_MIN;
	volatile int64_t t81 = 124770173058540LL;

	t81 = (x369%(x370-(x371/x372)));

	if (t81 != -277230384LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x373 = 31;
	static int16_t x374 = 1850;
	uint8_t x375 = 1U;

	t82 = (x373%(x374-(x375/x376)));

	if (t82 != 31) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x377 = INT32_MAX;
	static uint32_t x379 = UINT32_MAX;
	volatile int32_t x380 = -1;
	static volatile uint32_t t83 = 299670U;

	t83 = (x377%(x378-(x379/x380)));

	if (t83 != 1121207U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x381 = 1U;
	int64_t x382 = 8713LL;
	int16_t x383 = -1;
	static volatile int32_t x384 = 75137238;
	static int64_t t84 = -69014736457591LL;

	t84 = (x381%(x382-(x383/x384)));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x385 = -14343915552032LL;
	volatile int32_t x386 = 204;
	int32_t x387 = -6212191;
	static volatile int64_t t85 = 2242152842358446LL;

	t85 = (x385%(x386-(x387/x388)));

	if (t85 != -5449LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x391 = INT32_MIN;
	int64_t x392 = -1LL;
	int64_t t86 = 7942313LL;

	t86 = (x389%(x390-(x391/x392)));

	if (t86 != -128LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x394 = UINT64_MAX;
	uint64_t x395 = UINT64_MAX;
	volatile uint64_t x396 = UINT64_MAX;
	static volatile uint64_t t87 = 118LLU;

	t87 = (x393%(x394-(x395/x396)));

	if (t87 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x397 = INT16_MAX;
	static uint32_t x398 = 33U;
	volatile int16_t x399 = -106;
	static uint64_t t88 = 15LLU;

	t88 = (x397%(x398-(x399/x400)));

	if (t88 != 31LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x401 = 19;
	int16_t x403 = 47;
	static int64_t t89 = 1880336LL;

	t89 = (x401%(x402-(x403/x404)));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x405 = INT16_MIN;
	int32_t x406 = -1;

	t90 = (x405%(x406-(x407/x408)));

	if (t90 != -32768LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x409 = -7;
	int64_t x410 = INT64_MAX;

	t91 = (x409%(x410-(x411/x412)));

	if (t91 != -7LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x413 = -28;
	volatile int8_t x414 = 6;
	volatile uint16_t x415 = UINT16_MAX;
	uint16_t x416 = 1452U;

	t92 = (x413%(x414-(x415/x416)));

	if (t92 != -28) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x417 = 3647U;
	uint16_t x418 = 4334U;
	volatile int32_t x419 = INT32_MAX;
	static int16_t x420 = INT16_MAX;

	t93 = (x417%(x418-(x419/x420)));

	if (t93 != 3647U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x422 = 13U;
	int8_t x423 = INT8_MIN;
	static volatile uint32_t x424 = 154564539U;

	t94 = (x421%(x422-(x423/x424)));

	if (t94 != -2815657305LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x425 = INT16_MIN;
	static int8_t x426 = -1;
	int8_t x427 = -1;
	volatile int64_t x428 = INT64_MIN;
	int64_t t95 = -12627281210555LL;

	t95 = (x425%(x426-(x427/x428)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x429 = -244;
	int8_t x430 = INT8_MAX;
	uint8_t x431 = 2U;
	static int16_t x432 = -1;
	volatile int32_t t96 = 49;

	t96 = (x429%(x430-(x431/x432)));

	if (t96 != -115) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x433 = UINT16_MAX;
	static int64_t x434 = 85LL;
	int32_t x435 = INT32_MAX;
	int16_t x436 = -1298;
	volatile int64_t t97 = 2699816LL;

	t97 = (x433%(x434-(x435/x436)));

	if (t97 != 65535LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x438 = UINT64_MAX;
	static int64_t x439 = INT64_MIN;
	int8_t x440 = 28;
	static volatile uint64_t t98 = 1029999LLU;

	t98 = (x437%(x438-(x439/x440)));

	if (t98 != 4294967295LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x441 = INT8_MIN;
	int32_t x442 = INT32_MIN;
	volatile uint32_t x444 = 24426U;
	uint32_t t99 = 16452832U;

	t99 = (x441%(x442-(x443/x444)));

	if (t99 != 175706U) { NG(); } else { ; }
	
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

