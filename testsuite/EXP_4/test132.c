#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 104U;
volatile int8_t x7 = -8;
uint16_t x13 = 19335U;
int16_t x21 = INT16_MAX;
volatile uint32_t x22 = UINT32_MAX;
int8_t x29 = -1;
int32_t x39 = -1;
int64_t x46 = INT64_MAX;
static uint64_t x48 = 9522335630978LLU;
int32_t x50 = -34424;
uint16_t x58 = UINT16_MAX;
volatile uint64_t t12 = 767LLU;
uint64_t t14 = 121975LLU;
int64_t x86 = -17352LL;
int8_t x97 = 6;
int32_t x99 = -1;
volatile int32_t x102 = INT32_MIN;
static uint64_t x108 = 6416687563962229976LLU;
volatile uint64_t t20 = 241341124LLU;
static int8_t x112 = INT8_MAX;
int64_t x118 = -90043021LL;
static int32_t x121 = 558389;
volatile uint8_t x131 = 1U;
int32_t x135 = -220;
int8_t x136 = INT8_MIN;
volatile int16_t x148 = INT16_MAX;
volatile uint64_t t30 = 1LLU;
uint64_t x150 = 17LLU;
volatile int16_t x161 = 7;
volatile int8_t x163 = INT8_MIN;
uint32_t x169 = UINT32_MAX;
int16_t x170 = INT16_MAX;
int8_t x174 = -1;
int16_t x175 = 352;
uint64_t x178 = UINT64_MAX;
volatile uint64_t t37 = 796519819453602LLU;
volatile int32_t x194 = -1;
int32_t x203 = -983483;
static int64_t x204 = -1LL;
int64_t x213 = -1LL;
static int8_t x218 = -8;
volatile int32_t t44 = -4766966;
uint32_t x227 = UINT32_MAX;
uint8_t x250 = UINT8_MAX;
static uint32_t x258 = 1U;
volatile uint32_t t51 = 1281408U;
int64_t x265 = -1LL;
static int8_t x269 = 1;
volatile int8_t x272 = INT8_MAX;
volatile int64_t t54 = -416530LL;
uint16_t x280 = UINT16_MAX;
int8_t x285 = -1;
uint32_t x286 = UINT32_MAX;
uint64_t x290 = 701513253580987LLU;
int16_t x297 = INT16_MIN;
int16_t x308 = INT16_MIN;
static int16_t x309 = -1;
int8_t x310 = -1;
int32_t x311 = 1739280;
volatile uint32_t x314 = 1647608907U;
uint64_t x318 = UINT64_MAX;
volatile int8_t x320 = INT8_MAX;
uint16_t x330 = 20859U;
volatile uint64_t t67 = 16149037LLU;
volatile uint16_t x333 = UINT16_MAX;
int16_t x334 = -298;
volatile int16_t x336 = 15;
int8_t x337 = -1;
uint64_t x340 = 3317022048LLU;
uint16_t x343 = 8401U;
volatile int32_t x344 = 112;
volatile int64_t t70 = -1932255LL;
int32_t x345 = INT32_MAX;
volatile int64_t t71 = 5083668025LL;
uint32_t x350 = UINT32_MAX;
uint16_t x361 = 11924U;
volatile int32_t x362 = -1;
int16_t x364 = INT16_MIN;
int32_t x369 = -1;
int8_t x370 = INT8_MIN;
int64_t x373 = INT64_MIN;
uint64_t x375 = 3826644077863389LLU;
uint16_t x376 = 32566U;
int8_t x377 = INT8_MAX;
int64_t x383 = INT64_MIN;
volatile int8_t x386 = INT8_MIN;
uint32_t x394 = 322849377U;
uint64_t x397 = UINT64_MAX;
uint64_t t82 = 1456416170696LLU;
int64_t x418 = -1LL;
uint16_t x419 = 7U;
uint64_t x426 = 241LLU;
int16_t x441 = 4;
volatile int32_t x444 = 123308978;
int16_t x445 = INT16_MIN;
int8_t x453 = -3;
static uint32_t x456 = 28U;
int64_t t93 = -2473LL;
int32_t x477 = -461763;
volatile int32_t t98 = -1061997;
static volatile uint16_t x481 = 2908U;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int8_t x2 = INT8_MIN;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 716502LLU;

	t0 = (x1-(x2&(x3+x4)));

	if (t0 != 2147483647LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = INT16_MAX;
	static volatile int32_t x6 = -1;
	volatile int32_t x8 = -1;
	volatile int32_t t1 = 121845;

	t1 = (x5-(x6&(x7+x8)));

	if (t1 != 32776) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint64_t x10 = 6261LLU;
	int64_t x11 = 13898625681765LL;
	static int64_t x12 = 21916617884713531LL;
	uint64_t t2 = 59015680LLU;

	t2 = (x9-(x10&(x11+x12)));

	if (t2 != 18446744073709549408LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 5U;
	static int32_t x15 = -2016;
	static uint8_t x16 = UINT8_MAX;
	uint32_t t3 = 973U;

	t3 = (x13-(x14&(x15+x16)));

	if (t3 != 19330U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x23 = -1;
	volatile uint32_t x24 = UINT32_MAX;
	volatile uint32_t t4 = 116U;

	t4 = (x21-(x22&(x23+x24)));

	if (t4 != 32769U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = 53941062LL;
	volatile uint64_t x26 = 20127194363958642LLU;
	int32_t x27 = 422030;
	volatile uint32_t x28 = 98108U;
	uint64_t t5 = 66727LLU;

	t5 = (x25-(x26&(x27+x28)));

	if (t5 != 53710340LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x30 = 137784446422420LL;
	int16_t x31 = INT16_MIN;
	int16_t x32 = -1;
	volatile int64_t t6 = -84493LL;

	t6 = (x29-(x30&(x31+x32)));

	if (t6 != -137784446422421LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x33 = 7U;
	int16_t x34 = INT16_MIN;
	static int64_t x35 = -92463361706932484LL;
	int32_t x36 = INT32_MIN;
	volatile int64_t t7 = 21137122616629687LL;

	t7 = (x33-(x34&(x35+x36)));

	if (t7 != 92463363854434311LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = INT8_MIN;
	uint64_t x38 = UINT64_MAX;
	int32_t x40 = -40;
	uint64_t t8 = 76964053079986LLU;

	t8 = (x37-(x38&(x39+x40)));

	if (t8 != 18446744073709551529LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	int32_t x42 = -1;
	int64_t x43 = INT64_MIN;
	uint8_t x44 = UINT8_MAX;
	volatile int64_t t9 = 2LL;

	t9 = (x41-(x42&(x43+x44)));

	if (t9 != 9223372034707291905LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = INT32_MAX;
	volatile int8_t x47 = INT8_MIN;
	uint64_t t10 = 806LLU;

	t10 = (x45-(x46&(x47+x48)));

	if (t10 != 18446734553521404413LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	volatile uint64_t x51 = 6832334711929725LLU;
	int8_t x52 = INT8_MAX;
	volatile uint64_t t11 = 125630LLU;

	t11 = (x49-(x50&(x51+x52)));

	if (t11 != 18439911741145138807LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = UINT64_MAX;
	uint8_t x59 = 6U;
	int16_t x60 = -1;

	t12 = (x57-(x58&(x59+x60)));

	if (t12 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = -2;
	static int16_t x70 = 211;
	uint64_t x71 = 1LLU;
	int64_t x72 = INT64_MIN;
	volatile uint64_t t13 = 103LLU;

	t13 = (x69-(x70&(x71+x72)));

	if (t13 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x73 = INT64_MIN;
	static uint64_t x74 = UINT64_MAX;
	volatile int32_t x75 = 474188873;
	volatile int16_t x76 = 9986;

	t14 = (x73-(x74&(x75+x76)));

	if (t14 != 9223372036380576949LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = UINT8_MAX;
	static int16_t x78 = -1;
	static int32_t x79 = -481946;
	uint32_t x80 = 63273U;
	volatile uint32_t t15 = 209U;

	t15 = (x77-(x78&(x79+x80)));

	if (t15 != 418928U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = -1;
	int8_t x87 = -5;
	static int64_t x88 = -322705025LL;
	int64_t t16 = 716758LL;

	t16 = (x85-(x86&(x87+x88)));

	if (t16 != 322721735LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x93 = INT16_MIN;
	int8_t x94 = 0;
	uint8_t x95 = UINT8_MAX;
	int32_t x96 = -33516;
	int32_t t17 = -392226114;

	t17 = (x93-(x94&(x95+x96)));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x98 = INT32_MAX;
	uint8_t x100 = 2U;
	volatile int32_t t18 = 5374184;

	t18 = (x97-(x98&(x99+x100)));

	if (t18 != 5) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = INT32_MIN;
	static volatile uint8_t x103 = 28U;
	static int64_t x104 = -1LL;
	int64_t t19 = 1095LL;

	t19 = (x101-(x102&(x103+x104)));

	if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x105 = 1537LL;
	volatile int8_t x106 = INT8_MIN;
	uint32_t x107 = UINT32_MAX;

	t20 = (x105-(x106&(x107+x108)));

	if (t20 != 12030056505452355969LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x109 = INT16_MIN;
	int64_t x110 = INT64_MIN;
	uint8_t x111 = 1U;
	volatile int64_t t21 = -591876LL;

	t21 = (x109-(x110&(x111+x112)));

	if (t21 != -32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MAX;
	uint8_t x114 = 3U;
	int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MAX;
	volatile int64_t t22 = -6562060668343958LL;

	t22 = (x113-(x114&(x115+x116)));

	if (t22 != 32764LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x117 = UINT64_MAX;
	volatile uint16_t x119 = UINT16_MAX;
	uint32_t x120 = UINT32_MAX;
	volatile uint64_t t23 = 29033759987055LLU;

	t23 = (x117-(x118&(x119+x120)));

	if (t23 != 18446744073709548173LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x122 = 864U;
	uint8_t x123 = 1U;
	int8_t x124 = 25;
	volatile uint32_t t24 = 24346535U;

	t24 = (x121-(x122&(x123+x124)));

	if (t24 != 558389U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x125 = -108;
	volatile uint16_t x126 = 31168U;
	int8_t x127 = INT8_MIN;
	uint64_t x128 = 81LLU;
	volatile uint64_t t25 = 3347393111176512LLU;

	t25 = (x125-(x126&(x127+x128)));

	if (t25 != 18446744073709520340LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x129 = 0;
	int64_t x130 = 56LL;
	static int32_t x132 = INT32_MIN;
	static volatile int64_t t26 = 5LL;

	t26 = (x129-(x130&(x131+x132)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x133 = -18833984934095829LL;
	static uint32_t x134 = UINT32_MAX;
	static int64_t t27 = -3901LL;

	t27 = (x133-(x134&(x135+x136)));

	if (t27 != -18833989229062777LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x137 = 1341U;
	volatile int64_t x138 = 115396097991LL;
	volatile int64_t x139 = -932151535479LL;
	volatile int8_t x140 = -1;
	volatile int64_t t28 = 52285259LL;

	t28 = (x137-(x138&(x139+x140)));

	if (t28 != -12182358851LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x141 = 16984734363624952LLU;
	int32_t x142 = INT32_MIN;
	static int16_t x143 = -297;
	int16_t x144 = 0;
	static volatile uint64_t t29 = 1213LLU;

	t29 = (x141-(x142&(x143+x144)));

	if (t29 != 16984736511108600LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = 0;
	int32_t x146 = INT32_MAX;
	uint64_t x147 = 19930297853LLU;

	t30 = (x145-(x146&(x147+x148)));

	if (t30 != 18446744073106573828LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = INT8_MAX;
	static int8_t x151 = INT8_MAX;
	uint8_t x152 = 7U;
	static volatile uint64_t t31 = 9LLU;

	t31 = (x149-(x150&(x151+x152)));

	if (t31 != 127LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x153 = 1777U;
	static int16_t x154 = INT16_MIN;
	int8_t x155 = -21;
	volatile int32_t x156 = -1;
	volatile int32_t t32 = -9467132;

	t32 = (x153-(x154&(x155+x156)));

	if (t32 != 34545) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = -3;
	int8_t x158 = INT8_MIN;
	uint64_t x159 = 527116509LLU;
	volatile uint8_t x160 = 9U;
	uint64_t t33 = 15340313845LLU;

	t33 = (x157-(x158&(x159+x160)));

	if (t33 != 18446744073182435197LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x162 = 2516;
	volatile int32_t x164 = -1;
	int32_t t34 = 119600014;

	t34 = (x161-(x162&(x163+x164)));

	if (t34 != -2381) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x171 = -1LL;
	volatile uint32_t x172 = UINT32_MAX;
	int64_t t35 = -1LL;

	t35 = (x169-(x170&(x171+x172)));

	if (t35 != 4294934529LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x173 = 2U;
	int64_t x176 = INT64_MIN;
	volatile int64_t t36 = -28035578025LL;

	t36 = (x173-(x174&(x175+x176)));

	if (t36 != 9223372036854775458LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = INT16_MIN;
	static int16_t x179 = INT16_MIN;
	uint8_t x180 = UINT8_MAX;

	t37 = (x177-(x178&(x179+x180)));

	if (t37 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MAX;
	uint8_t x187 = 55U;
	int16_t x188 = -1;
	volatile int32_t t38 = -25834700;

	t38 = (x185-(x186&(x187+x188)));

	if (t38 != -32822) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x193 = 122U;
	static int8_t x195 = INT8_MIN;
	static int8_t x196 = -1;
	volatile int32_t t39 = -6;

	t39 = (x193-(x194&(x195+x196)));

	if (t39 != 251) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x197 = 7098003;
	volatile int64_t x198 = INT64_MAX;
	int16_t x199 = 4682;
	int16_t x200 = INT16_MAX;
	int64_t t40 = 23056207563851LL;

	t40 = (x197-(x198&(x199+x200)));

	if (t40 != 7060554LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x201 = -31;
	uint16_t x202 = 53U;
	volatile int64_t t41 = -35571716356LL;

	t41 = (x201-(x202&(x203+x204)));

	if (t41 != -35LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = INT8_MAX;
	static int64_t x210 = INT64_MIN;
	volatile int16_t x211 = -1;
	uint32_t x212 = UINT32_MAX;
	static volatile int64_t t42 = 269781129317265192LL;

	t42 = (x209-(x210&(x211+x212)));

	if (t42 != 127LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x214 = INT8_MIN;
	int16_t x215 = 345;
	static volatile uint16_t x216 = 2423U;
	int64_t t43 = 7223486433LL;

	t43 = (x213-(x214&(x215+x216)));

	if (t43 != -2689LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x217 = 20U;
	int16_t x219 = -1;
	uint8_t x220 = 33U;

	t44 = (x217-(x218&(x219+x220)));

	if (t44 != -12) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x225 = INT8_MIN;
	static int16_t x226 = 0;
	static int64_t x228 = INT64_MIN;
	volatile int64_t t45 = -57375LL;

	t45 = (x225-(x226&(x227+x228)));

	if (t45 != -128LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x229 = UINT8_MAX;
	uint8_t x230 = 15U;
	uint16_t x231 = 2933U;
	int64_t x232 = INT64_MIN;
	int64_t t46 = -382945745543599LL;

	t46 = (x229-(x230&(x231+x232)));

	if (t46 != 250LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x241 = -1;
	int64_t x242 = INT64_MIN;
	volatile int8_t x243 = -1;
	static int8_t x244 = INT8_MIN;
	int64_t t47 = INT64_MAX;

	t47 = (x241-(x242&(x243+x244)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x245 = 1;
	int32_t x246 = -782202422;
	int16_t x247 = INT16_MAX;
	int32_t x248 = -1;
	volatile int32_t t48 = -490256;

	t48 = (x245-(x246&(x247+x248)));

	if (t48 != -2505) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x249 = INT32_MAX;
	int64_t x251 = -1391LL;
	uint32_t x252 = UINT32_MAX;
	volatile int64_t t49 = -531792LL;

	t49 = (x249-(x250&(x251+x252)));

	if (t49 != 2147483503LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x253 = 162986637U;
	static volatile uint16_t x254 = 1290U;
	int8_t x255 = INT8_MIN;
	uint8_t x256 = UINT8_MAX;
	uint32_t t50 = 1071824032U;

	t50 = (x253-(x254&(x255+x256)));

	if (t50 != 162986627U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x257 = 4028607;
	int8_t x259 = INT8_MIN;
	int16_t x260 = 0;

	t51 = (x257-(x258&(x259+x260)));

	if (t51 != 4028607U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x266 = 1U;
	uint16_t x267 = 7812U;
	int64_t x268 = INT64_MIN;
	int64_t t52 = 1801034399LL;

	t52 = (x265-(x266&(x267+x268)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x270 = -1;
	static volatile int64_t x271 = -1LL;
	volatile int64_t t53 = 227234434948920LL;

	t53 = (x269-(x270&(x271+x272)));

	if (t53 != -125LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x273 = -1;
	volatile int64_t x274 = -14472204083147LL;
	uint8_t x275 = UINT8_MAX;
	uint8_t x276 = 62U;

	t54 = (x273-(x274&(x275+x276)));

	if (t54 != -54LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x277 = INT8_MAX;
	static int32_t x278 = INT32_MAX;
	int16_t x279 = -1;
	volatile int32_t t55 = 53;

	t55 = (x277-(x278&(x279+x280)));

	if (t55 != -65407) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x281 = 0U;
	uint8_t x282 = UINT8_MAX;
	int8_t x283 = INT8_MIN;
	uint16_t x284 = 188U;
	int32_t t56 = 535;

	t56 = (x281-(x282&(x283+x284)));

	if (t56 != -60) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x287 = 186U;
	int16_t x288 = INT16_MIN;
	uint32_t t57 = 9U;

	t57 = (x285-(x286&(x287+x288)));

	if (t57 != 32581U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x289 = INT16_MAX;
	uint8_t x291 = UINT8_MAX;
	int16_t x292 = INT16_MIN;
	uint64_t t58 = 0LLU;

	t58 = (x289-(x290&(x291+x292)));

	if (t58 != 18446042560456032068LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x293 = -1;
	uint32_t x294 = 2044U;
	volatile int16_t x295 = INT16_MIN;
	static int16_t x296 = INT16_MAX;
	static volatile uint32_t t59 = 1205446344U;

	t59 = (x293-(x294&(x295+x296)));

	if (t59 != 4294965251U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x298 = -1;
	int8_t x299 = 1;
	int16_t x300 = INT16_MIN;
	volatile int32_t t60 = -14381259;

	t60 = (x297-(x298&(x299+x300)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x301 = -1620;
	uint16_t x302 = 2548U;
	static int64_t x303 = INT64_MIN;
	volatile uint16_t x304 = 3702U;
	static volatile int64_t t61 = 185884LL;

	t61 = (x301-(x302&(x303+x304)));

	if (t61 != -3784LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x305 = INT64_MAX;
	int32_t x306 = -1;
	static int64_t x307 = INT64_MAX;
	volatile int64_t t62 = -230853LL;

	t62 = (x305-(x306&(x307+x308)));

	if (t62 != 32768LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x312 = 1U;
	int32_t t63 = 3415;

	t63 = (x309-(x310&(x311+x312)));

	if (t63 != -1739282) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x313 = -1;
	uint16_t x315 = UINT16_MAX;
	uint8_t x316 = UINT8_MAX;
	volatile uint32_t t64 = 5771U;

	t64 = (x313-(x314&(x315+x316)));

	if (t64 != 4294967221U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x317 = 11U;
	int64_t x319 = INT64_MIN;
	volatile uint64_t t65 = 3LLU;

	t65 = (x317-(x318&(x319+x320)));

	if (t65 != 9223372036854775692LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MIN;
	static int64_t x327 = 2731979582509307LL;
	int8_t x328 = INT8_MAX;
	int64_t t66 = -2645859010038593275LL;

	t66 = (x325-(x326&(x327+x328)));

	if (t66 != -2731981729988608LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x329 = UINT64_MAX;
	volatile uint64_t x331 = 32LLU;
	int32_t x332 = 226629810;

	t67 = (x329-(x330&(x331+x332)));

	if (t67 != 18446744073709547437LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x335 = INT16_MIN;
	int32_t t68 = -87432300;

	t68 = (x333-(x334&(x335+x336)));

	if (t68 != 98297) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x338 = 8233U;
	uint64_t x339 = 344510437LLU;
	uint64_t t69 = 482036LLU;

	t69 = (x337-(x338&(x339+x340)));

	if (t69 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x341 = INT64_MAX;
	int8_t x342 = -13;

	t70 = (x341-(x342&(x343+x344)));

	if (t70 != 9223372036854767294LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x346 = INT32_MAX;
	int64_t x347 = INT64_MIN;
	volatile uint8_t x348 = 1U;

	t71 = (x345-(x346&(x347+x348)));

	if (t71 != 2147483646LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x349 = INT64_MAX;
	int8_t x351 = INT8_MIN;
	volatile int16_t x352 = INT16_MAX;
	static int64_t t72 = -7653531311149928LL;

	t72 = (x349-(x350&(x351+x352)));

	if (t72 != 9223372036854743168LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x363 = INT8_MAX;
	int32_t t73 = -193826;

	t73 = (x361-(x362&(x363+x364)));

	if (t73 != 44565) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x365 = -8436452580466LL;
	uint16_t x366 = 2U;
	int16_t x367 = -2831;
	volatile uint64_t x368 = UINT64_MAX;
	static volatile uint64_t t74 = 1335497LLU;

	t74 = (x365-(x366&(x367+x368)));

	if (t74 != 18446735637256971150LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x371 = 556195209LLU;
	volatile int32_t x372 = -331676383;
	volatile uint64_t t75 = 25651LLU;

	t75 = (x369-(x370&(x371+x372)));

	if (t75 != 18446744073485032831LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x374 = INT16_MIN;
	uint64_t t76 = 15398962265LLU;

	t76 = (x373-(x374&(x375+x376)));

	if (t76 != 9219545392776904704LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x378 = UINT32_MAX;
	uint8_t x379 = 0U;
	int8_t x380 = 1;
	volatile uint32_t t77 = 37633U;

	t77 = (x377-(x378&(x379+x380)));

	if (t77 != 126U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x381 = 54;
	volatile int64_t x382 = -1LL;
	int64_t x384 = INT64_MAX;
	int64_t t78 = 1192106LL;

	t78 = (x381-(x382&(x383+x384)));

	if (t78 != 55LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x385 = INT16_MIN;
	uint64_t x387 = UINT64_MAX;
	uint16_t x388 = 753U;
	uint64_t t79 = 11693581108LLU;

	t79 = (x385-(x386&(x387+x388)));

	if (t79 != 18446744073709518208LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x389 = 5U;
	int64_t x390 = -803756955LL;
	int32_t x391 = -236;
	int8_t x392 = INT8_MAX;
	int64_t t80 = -57393539LL;

	t80 = (x389-(x390&(x391+x392)));

	if (t80 != 803757060LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x393 = 83730U;
	static int8_t x395 = 24;
	static int64_t x396 = INT64_MIN;
	static int64_t t81 = -19709559464369LL;

	t81 = (x393-(x394&(x395+x396)));

	if (t81 != 83730LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x398 = 911704107;
	int64_t x399 = 6799574585LL;
	uint32_t x400 = 55U;

	t82 = (x397-(x398&(x399+x400)));

	if (t82 != 18446744073369747423LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x405 = -1LL;
	int32_t x406 = INT32_MIN;
	static int8_t x407 = INT8_MIN;
	int64_t x408 = -1LL;
	volatile int64_t t83 = 449115LL;

	t83 = (x405-(x406&(x407+x408)));

	if (t83 != 2147483647LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x409 = INT64_MAX;
	static int64_t x410 = INT64_MIN;
	int16_t x411 = INT16_MAX;
	volatile int32_t x412 = 368489;
	int64_t t84 = INT64_MAX;

	t84 = (x409-(x410&(x411+x412)));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x413 = INT32_MIN;
	uint64_t x414 = 13418356902LLU;
	volatile int64_t x415 = INT64_MAX;
	uint64_t x416 = 122214780LLU;
	volatile uint64_t t85 = 1784622477599LLU;

	t85 = (x413-(x414&(x415+x416)));

	if (t85 != 18446744071439859678LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x417 = 0;
	uint64_t x420 = 2512115LLU;
	volatile uint64_t t86 = 999378LLU;

	t86 = (x417-(x418&(x419+x420)));

	if (t86 != 18446744073707039494LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x421 = INT8_MIN;
	int8_t x422 = INT8_MAX;
	static int32_t x423 = INT32_MAX;
	int16_t x424 = -3809;
	static volatile int32_t t87 = 940795081;

	t87 = (x421-(x422&(x423+x424)));

	if (t87 != -158) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x425 = 3154968851984423570LLU;
	uint8_t x427 = UINT8_MAX;
	int8_t x428 = 50;
	volatile uint64_t t88 = 6596616LLU;

	t88 = (x425-(x426&(x427+x428)));

	if (t88 != 3154968851984423521LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x433 = 211715U;
	int8_t x434 = 0;
	volatile uint16_t x435 = UINT16_MAX;
	int16_t x436 = -1;
	volatile uint32_t t89 = 285U;

	t89 = (x433-(x434&(x435+x436)));

	if (t89 != 211715U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x442 = INT8_MAX;
	uint32_t x443 = 1116U;
	uint32_t t90 = 3154U;

	t90 = (x441-(x442&(x443+x444)));

	if (t90 != 4294967286U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x446 = INT32_MIN;
	uint64_t x447 = UINT64_MAX;
	int8_t x448 = 0;
	volatile uint64_t t91 = 2092061151190397715LLU;

	t91 = (x445-(x446&(x447+x448)));

	if (t91 != 2147450880LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x449 = INT16_MAX;
	int16_t x450 = -6;
	volatile int64_t x451 = -1LL;
	static int32_t x452 = INT32_MIN;
	int64_t t92 = -45191652831899814LL;

	t92 = (x449-(x450&(x451+x452)));

	if (t92 != 2147516421LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x454 = -875;
	int64_t x455 = -12297689387425412LL;

	t93 = (x453-(x454&(x455+x456)));

	if (t93 != 12297689387425645LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x461 = -1;
	static volatile uint8_t x462 = 39U;
	uint64_t x463 = 29993199540090LLU;
	volatile int64_t x464 = -1LL;
	volatile uint64_t t94 = 452947496LLU;

	t94 = (x461-(x462&(x463+x464)));

	if (t94 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x465 = UINT16_MAX;
	int64_t x466 = INT64_MIN;
	int32_t x467 = INT32_MAX;
	int16_t x468 = -1;
	int64_t t95 = -3766706268433559LL;

	t95 = (x465-(x466&(x467+x468)));

	if (t95 != 65535LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x469 = -1;
	int16_t x470 = INT16_MIN;
	volatile int64_t x471 = INT64_MIN;
	uint32_t x472 = 201U;
	int64_t t96 = INT64_MAX;

	t96 = (x469-(x470&(x471+x472)));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x473 = UINT32_MAX;
	int32_t x474 = INT32_MIN;
	volatile int8_t x475 = INT8_MIN;
	static volatile int32_t x476 = INT32_MAX;
	volatile uint32_t t97 = UINT32_MAX;

	t97 = (x473-(x474&(x475+x476)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x478 = INT16_MAX;
	int16_t x479 = 4;
	int8_t x480 = INT8_MIN;

	t98 = (x477-(x478&(x479+x480)));

	if (t98 != -494407) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x482 = INT64_MIN;
	uint32_t x483 = 43150U;
	static uint32_t x484 = UINT32_MAX;
	int64_t t99 = -7516575303LL;

	t99 = (x481-(x482&(x483+x484)));

	if (t99 != 2908LL) { NG(); } else { ; }
	
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

