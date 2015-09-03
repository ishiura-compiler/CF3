#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = -1;
static int16_t x4 = INT16_MIN;
volatile int32_t t0 = -8552;
static int8_t x8 = -1;
int64_t t1 = 2732443360LL;
static uint16_t x14 = 27U;
int16_t x15 = INT16_MAX;
volatile uint8_t x16 = 2U;
int8_t x19 = INT8_MIN;
uint16_t x23 = 0U;
int8_t x28 = INT8_MAX;
uint64_t x29 = 447246583294084610LLU;
volatile int8_t x30 = -1;
volatile int16_t x37 = -10864;
static uint16_t x38 = UINT16_MAX;
int8_t x41 = INT8_MAX;
static int64_t x51 = -1LL;
uint16_t x53 = 2U;
static uint32_t x71 = UINT32_MAX;
volatile int64_t x73 = INT64_MIN;
static volatile uint64_t x75 = UINT64_MAX;
int8_t x80 = INT8_MIN;
static int64_t t19 = 256799LL;
int32_t x89 = -3;
uint16_t x96 = 1036U;
uint64_t x103 = 227LLU;
static uint64_t t22 = 1618067227961376680LLU;
uint16_t x107 = 26359U;
int64_t x108 = INT64_MIN;
int8_t x110 = INT8_MIN;
int16_t x112 = -1;
static int16_t x125 = INT16_MIN;
int16_t x127 = INT16_MIN;
volatile int32_t x128 = 400170;
uint64_t t26 = 4753947364424351302LLU;
uint16_t x134 = 0U;
int32_t x139 = INT32_MIN;
volatile int16_t x140 = -7;
int32_t t33 = 3247936;
int16_t x158 = INT16_MAX;
int8_t x160 = 54;
int16_t x162 = INT16_MIN;
volatile uint64_t x163 = 3357115521473991LLU;
static int32_t x170 = INT32_MAX;
int64_t x172 = 1479463299LL;
int8_t x177 = INT8_MIN;
uint8_t x187 = 6U;
uint8_t x190 = UINT8_MAX;
int16_t x194 = INT16_MAX;
int16_t x196 = INT16_MAX;
volatile int32_t x204 = INT32_MAX;
static volatile int64_t x208 = -33537862LL;
volatile uint64_t t47 = 9027506LLU;
uint32_t x215 = UINT32_MAX;
int8_t x220 = INT8_MIN;
uint16_t x228 = UINT16_MAX;
volatile int64_t t51 = 1707428054LL;
uint8_t x235 = UINT8_MAX;
int8_t x240 = 0;
int64_t t54 = -4863LL;
uint32_t x242 = 232103U;
int64_t t56 = 686593002LL;
int8_t x249 = -1;
static volatile int64_t x251 = -1LL;
int8_t x252 = INT8_MIN;
int64_t t57 = 696886782792LL;
int64_t x253 = 132LL;
uint32_t x254 = 56125U;
int32_t x255 = INT32_MIN;
uint8_t x259 = 12U;
int32_t x260 = 25;
int32_t x261 = INT32_MAX;
static int32_t x267 = -560;
int64_t x272 = INT64_MIN;
int16_t x274 = INT16_MIN;
int16_t x280 = -14;
volatile uint32_t t65 = 128U;
uint16_t x292 = 55U;
int32_t x293 = -33;
static volatile int64_t x306 = -1LL;
int16_t x308 = 2;
volatile uint64_t t70 = 5670LLU;
uint16_t x317 = 11U;
static uint64_t x319 = UINT64_MAX;
volatile uint32_t x320 = UINT32_MAX;
volatile uint64_t t72 = 101345920389LLU;
uint64_t x322 = UINT64_MAX;
static uint8_t x324 = UINT8_MAX;
static volatile uint32_t t75 = 0U;
volatile int64_t x334 = 395764344LL;
uint64_t x338 = 114808117LLU;
uint8_t x343 = 3U;
int32_t x353 = INT32_MIN;
volatile int8_t x354 = INT8_MAX;
int16_t x356 = INT16_MAX;
uint64_t x358 = UINT64_MAX;
int32_t x363 = 0;
static int8_t x367 = INT8_MAX;
int16_t x369 = -1;
uint16_t x374 = 3678U;
uint16_t x377 = 1901U;
volatile int64_t t87 = -7002711183LL;
static int16_t x383 = INT16_MIN;
static uint16_t x384 = 21U;
static uint32_t x387 = 11U;
int64_t x390 = -771456452LL;
static int8_t x392 = INT8_MIN;
int32_t t91 = -9;
static int32_t x404 = -1;
uint64_t t93 = 493187968LLU;
int32_t x406 = INT32_MAX;
volatile int64_t x407 = INT64_MAX;
static int64_t t94 = 3495322711050LL;
int64_t t96 = -714271207969084LL;


void f0(void) {
	uint16_t x1 = 4905U;
	int16_t x2 = INT16_MIN;

	t0 = ((x1&x2)-(x3|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x5 = -1;
	static int16_t x6 = 0;
	int64_t x7 = INT64_MIN;

	t1 = ((x5&x6)-(x7|x8));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 112U;
	int16_t x10 = INT16_MAX;
	volatile int8_t x11 = INT8_MIN;
	static uint16_t x12 = UINT16_MAX;
	int32_t t2 = -5836643;

	t2 = ((x9&x10)-(x11|x12));

	if (t2 != 113) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 201;
	int32_t t3 = -487431441;

	t3 = ((x13&x14)-(x15|x16));

	if (t3 != -32758) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 3086906163473217771LLU;
	int64_t x18 = INT64_MIN;
	int64_t x20 = INT64_MAX;
	uint64_t t4 = 4257845704990925083LLU;

	t4 = ((x17&x18)-(x19|x20));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = INT64_MAX;
	uint16_t x24 = UINT16_MAX;
	volatile int64_t t5 = 14412868LL;

	t5 = ((x21&x22)-(x23|x24));

	if (t5 != 9223372036854677505LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 1U;
	uint16_t x26 = 56U;
	uint32_t x27 = 3418596U;
	volatile uint32_t t6 = 75U;

	t6 = ((x25&x26)-(x27|x28));

	if (t6 != 4291548673U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x31 = 56U;
	int16_t x32 = 11307;
	uint64_t t7 = 116151703LLU;

	t7 = ((x29&x30)-(x31|x32));

	if (t7 != 447246583294073287LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x39 = 1LL;
	uint16_t x40 = 2495U;
	volatile int64_t t8 = -1921LL;

	t8 = ((x37&x38)-(x39|x40));

	if (t8 != 52177LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x42 = 74;
	volatile uint64_t x43 = 5900925140717737712LLU;
	static int16_t x44 = 1;
	volatile uint64_t t9 = 1266574059210347901LLU;

	t9 = ((x41&x42)-(x43|x44));

	if (t9 != 12545818932991813977LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 420304238002739118LLU;
	static int64_t x46 = -1LL;
	uint16_t x47 = UINT16_MAX;
	static uint8_t x48 = 1U;
	static uint64_t t10 = 76447925LLU;

	t10 = ((x45&x46)-(x47|x48));

	if (t10 != 420304238002673583LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 234;
	int32_t x50 = INT32_MIN;
	int64_t x52 = INT64_MIN;
	volatile int64_t t11 = -1LL;

	t11 = ((x49&x50)-(x51|x52));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = -34883895;
	volatile int16_t x55 = INT16_MIN;
	static uint16_t x56 = UINT16_MAX;
	volatile int32_t t12 = 1166;

	t12 = ((x53&x54)-(x55|x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = 5;
	int32_t x58 = -336984;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = 6647U;
	int32_t t13 = 65060189;

	t13 = ((x57&x58)-(x59|x60));

	if (t13 != 26121) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -18832;
	int8_t x62 = INT8_MIN;
	static int64_t x63 = INT64_MIN;
	volatile uint16_t x64 = 4U;
	volatile int64_t t14 = 156054668LL;

	t14 = ((x61&x62)-(x63|x64));

	if (t14 != 9223372036854756860LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = 91;
	uint8_t x66 = 65U;
	int8_t x67 = INT8_MAX;
	static int8_t x68 = 34;
	int32_t t15 = -108278955;

	t15 = ((x65&x66)-(x67|x68));

	if (t15 != -62) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = 189852230263409LL;
	volatile uint16_t x70 = UINT16_MAX;
	int32_t x72 = -48023;
	int64_t t16 = 858956138391530LL;

	t16 = ((x69&x70)-(x71|x72));

	if (t16 != -4294925710LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = -1LL;
	static uint16_t x76 = 10U;
	uint64_t t17 = 1LLU;

	t17 = ((x73&x74)-(x75|x76));

	if (t17 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = UINT8_MAX;
	uint32_t x78 = UINT32_MAX;
	static int32_t x79 = INT32_MIN;
	uint32_t t18 = 2U;

	t18 = ((x77&x78)-(x79|x80));

	if (t18 != 383U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = 28LL;
	int64_t x86 = -77LL;
	int16_t x87 = -1;
	uint8_t x88 = UINT8_MAX;

	t19 = ((x85&x86)-(x87|x88));

	if (t19 != 17LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x90 = -1;
	static uint32_t x91 = 16563U;
	volatile int16_t x92 = INT16_MIN;
	volatile uint32_t t20 = 42707U;

	t20 = ((x89&x90)-(x91|x92));

	if (t20 != 16202U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = INT16_MIN;
	uint64_t x94 = 738102078352LLU;
	int16_t x95 = INT16_MIN;
	volatile uint64_t t21 = 2795990012704835504LLU;

	t21 = ((x93&x94)-(x95|x96));

	if (t21 != 738102082548LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x101 = INT32_MAX;
	int8_t x102 = 3;
	int8_t x104 = INT8_MIN;

	t22 = ((x101&x102)-(x103|x104));

	if (t22 != 32LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = -3;
	int64_t t23 = 6942935LL;

	t23 = ((x105&x106)-(x107|x108));

	if (t23 != -26359LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MAX;
	int8_t x111 = INT8_MAX;
	volatile int32_t t24 = -22531;

	t24 = ((x109&x110)-(x111|x112));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x113 = -1;
	uint16_t x114 = 24U;
	uint8_t x115 = UINT8_MAX;
	int8_t x116 = 3;
	static volatile int32_t t25 = 410;

	t25 = ((x113&x114)-(x115|x116));

	if (t25 != -231) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x126 = 239836411376LLU;

	t26 = ((x125&x126)-(x127|x128));

	if (t26 != 239836423382LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = 63149415236LL;
	volatile uint32_t x130 = UINT32_MAX;
	static uint64_t x131 = 370161960339LLU;
	int8_t x132 = INT8_MIN;
	volatile uint64_t t27 = 50090865265LLU;

	t27 = ((x129&x130)-(x131|x132));

	if (t27 != 3019873201LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x133 = 337;
	uint64_t x135 = UINT64_MAX;
	uint64_t x136 = 908598367147LLU;
	uint64_t t28 = 64575310931854LLU;

	t28 = ((x133&x134)-(x135|x136));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x137 = INT8_MIN;
	int16_t x138 = -1;
	static int32_t t29 = 8;

	t29 = ((x137&x138)-(x139|x140));

	if (t29 != -121) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = -1;
	int64_t x142 = 3298LL;
	uint8_t x143 = 20U;
	uint64_t x144 = 102441LLU;
	static uint64_t t30 = 108338738412112LLU;

	t30 = ((x141&x142)-(x143|x144));

	if (t30 != 18446744073709452453LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x145 = 49U;
	uint8_t x146 = 37U;
	int64_t x147 = INT64_MIN;
	static uint64_t x148 = 3297377881476227932LLU;
	uint64_t t31 = 1799981319463362354LLU;

	t31 = ((x145&x146)-(x147|x148));

	if (t31 != 5925994155378547909LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x149 = UINT16_MAX;
	static int32_t x150 = INT32_MIN;
	static int16_t x151 = 53;
	volatile int8_t x152 = INT8_MIN;
	static int32_t t32 = -450124489;

	t32 = ((x149&x150)-(x151|x152));

	if (t32 != 75) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = INT16_MAX;
	int16_t x154 = -1;
	volatile int8_t x155 = INT8_MAX;
	int8_t x156 = INT8_MIN;

	t33 = ((x153&x154)-(x155|x156));

	if (t33 != 32768) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = -14;
	int16_t x159 = INT16_MIN;
	volatile int32_t t34 = 3082856;

	t34 = ((x157&x158)-(x159|x160));

	if (t34 != 65468) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = 17850LLU;
	int16_t x164 = 42;
	uint64_t t35 = 8201002LLU;

	t35 = ((x161&x162)-(x163|x164));

	if (t35 != 18443386958188077585LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = 22U;
	uint16_t x166 = UINT16_MAX;
	uint16_t x167 = UINT16_MAX;
	int8_t x168 = INT8_MIN;
	volatile int32_t t36 = 930821222;

	t36 = ((x165&x166)-(x167|x168));

	if (t36 != 23) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = -1;
	static int8_t x171 = INT8_MIN;
	int64_t t37 = -5211069LL;

	t37 = ((x169&x170)-(x171|x172));

	if (t37 != 2147483772LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x173 = -1548372436044LL;
	uint8_t x174 = 1U;
	int32_t x175 = INT32_MAX;
	static uint16_t x176 = UINT16_MAX;
	int64_t t38 = 1LL;

	t38 = ((x173&x174)-(x175|x176));

	if (t38 != -2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x178 = INT8_MIN;
	static int32_t x179 = INT32_MIN;
	int64_t x180 = INT64_MIN;
	volatile int64_t t39 = 173627287445LL;

	t39 = ((x177&x178)-(x179|x180));

	if (t39 != 2147483520LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x181 = UINT8_MAX;
	int64_t x182 = -1234342011196655LL;
	int64_t x183 = INT64_MIN;
	int64_t x184 = INT64_MAX;
	int64_t t40 = 19889LL;

	t40 = ((x181&x182)-(x183|x184));

	if (t40 != 18LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MAX;
	int16_t x186 = -15;
	uint8_t x188 = UINT8_MAX;
	int32_t t41 = -456925;

	t41 = ((x185&x186)-(x187|x188));

	if (t41 != -142) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x189 = INT8_MIN;
	uint64_t x191 = 183946LLU;
	static int64_t x192 = INT64_MIN;
	uint64_t t42 = 4226LLU;

	t42 = ((x189&x190)-(x191|x192));

	if (t42 != 9223372036854591990LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x193 = -1LL;
	uint8_t x195 = 83U;
	int64_t t43 = -13881885025641422LL;

	t43 = ((x193&x194)-(x195|x196));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x197 = 195890685558951014LLU;
	volatile int16_t x198 = -9354;
	uint32_t x199 = UINT32_MAX;
	int32_t x200 = INT32_MAX;
	static volatile uint64_t t44 = 2075389492367679965LLU;

	t44 = ((x197&x198)-(x199|x200));

	if (t44 != 195890681263982695LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x201 = 1820U;
	int32_t x202 = -68512;
	uint16_t x203 = UINT16_MAX;
	int32_t t45 = -409;

	t45 = ((x201&x202)-(x203|x204));

	if (t45 != -2147482623) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = INT64_MIN;
	int32_t x206 = INT32_MAX;
	uint32_t x207 = UINT32_MAX;
	volatile int64_t t46 = 0LL;

	t46 = ((x205&x206)-(x207|x208));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = INT8_MAX;
	uint64_t x210 = 4LLU;
	int8_t x211 = INT8_MIN;
	int8_t x212 = INT8_MAX;

	t47 = ((x209&x210)-(x211|x212));

	if (t47 != 5LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = INT32_MAX;
	static uint32_t x214 = UINT32_MAX;
	int16_t x216 = INT16_MIN;
	volatile uint32_t t48 = 47013363U;

	t48 = ((x213&x214)-(x215|x216));

	if (t48 != 2147483648U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x217 = INT8_MIN;
	uint64_t x218 = 139440835LLU;
	int16_t x219 = -1;
	volatile uint64_t t49 = 27106409690142LLU;

	t49 = ((x217&x218)-(x219|x220));

	if (t49 != 139440769LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x221 = -782086624838LL;
	uint32_t x222 = 111924U;
	static int16_t x223 = 3059;
	volatile uint64_t x224 = 2692571106122LLU;
	volatile uint64_t t50 = 8124328586616197635LLU;

	t50 = ((x221&x222)-(x223|x224));

	if (t50 != 18446741381138519349LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = 0;
	int64_t x226 = -48122234326183LL;
	int64_t x227 = -13LL;

	t51 = ((x225&x226)-(x227|x228));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = INT32_MAX;
	static uint32_t x230 = 65824U;
	static int32_t x231 = 7277066;
	volatile int32_t x232 = -1;
	volatile uint32_t t52 = 191U;

	t52 = ((x229&x230)-(x231|x232));

	if (t52 != 65825U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x233 = 3346LLU;
	int16_t x234 = INT16_MIN;
	static volatile int32_t x236 = INT32_MAX;
	uint64_t t53 = 1447LLU;

	t53 = ((x233&x234)-(x235|x236));

	if (t53 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x237 = -1LL;
	int32_t x238 = -454894;
	int16_t x239 = -1;

	t54 = ((x237&x238)-(x239|x240));

	if (t54 != -454893LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = -1;
	uint8_t x243 = UINT8_MAX;
	volatile int64_t x244 = -37208LL;
	int64_t t55 = 8129LL;

	t55 = ((x241&x242)-(x243|x244));

	if (t55 != 269224LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x245 = 58712090024152847LL;
	int16_t x246 = -1;
	int16_t x247 = -1;
	static int16_t x248 = INT16_MIN;

	t56 = ((x245&x246)-(x247|x248));

	if (t56 != 58712090024152848LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x250 = INT32_MIN;

	t57 = ((x249&x250)-(x251|x252));

	if (t57 != -2147483647LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x256 = 3667299140502380LL;
	volatile int64_t t58 = 1420116LL;

	t58 = ((x253&x254)-(x255|x256));

	if (t58 != 1634860184LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x257 = INT64_MIN;
	uint16_t x258 = 0U;
	volatile int64_t t59 = 1505805047677061LL;

	t59 = ((x257&x258)-(x259|x260));

	if (t59 != -29LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x262 = 996507762013021LLU;
	int16_t x263 = -8744;
	volatile int64_t x264 = -1LL;
	volatile uint64_t t60 = 1719452574LLU;

	t60 = ((x261&x262)-(x263|x264));

	if (t60 != 187413342LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x265 = -1013639;
	static int8_t x266 = -1;
	static volatile uint8_t x268 = 1U;
	volatile int32_t t61 = -212;

	t61 = ((x265&x266)-(x267|x268));

	if (t61 != -1013080) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = -1;
	volatile int8_t x270 = 7;
	volatile int64_t x271 = INT64_MAX;
	volatile int64_t t62 = 48788677LL;

	t62 = ((x269&x270)-(x271|x272));

	if (t62 != 8LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = INT16_MIN;
	uint8_t x275 = UINT8_MAX;
	volatile int16_t x276 = 2081;
	volatile int32_t t63 = 2507290;

	t63 = ((x273&x274)-(x275|x276));

	if (t63 != -35071) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = 2116133210230837LL;
	static volatile int16_t x278 = INT16_MIN;
	volatile int8_t x279 = 26;
	int64_t t64 = 114452849LL;

	t64 = ((x277&x278)-(x279|x280));

	if (t64 != 2116133210226694LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x285 = 332161249U;
	uint32_t x286 = 17U;
	int16_t x287 = INT16_MIN;
	uint32_t x288 = 1U;

	t65 = ((x285&x286)-(x287|x288));

	if (t65 != 32768U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x289 = -15507;
	int8_t x290 = INT8_MAX;
	int8_t x291 = INT8_MIN;
	int32_t t66 = 1;

	t66 = ((x289&x290)-(x291|x292));

	if (t66 != 182) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x294 = INT32_MIN;
	uint64_t x295 = UINT64_MAX;
	volatile int32_t x296 = -1;
	volatile uint64_t t67 = 7827LLU;

	t67 = ((x293&x294)-(x295|x296));

	if (t67 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x297 = UINT64_MAX;
	uint64_t x298 = 247293842537LLU;
	volatile uint16_t x299 = 7U;
	volatile int8_t x300 = INT8_MIN;
	volatile uint64_t t68 = 13LLU;

	t68 = ((x297&x298)-(x299|x300));

	if (t68 != 247293842658LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x305 = INT64_MAX;
	volatile int8_t x307 = 0;
	volatile int64_t t69 = -11316899147LL;

	t69 = ((x305&x306)-(x307|x308));

	if (t69 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x309 = -280;
	static volatile int32_t x310 = -1;
	int8_t x311 = -6;
	volatile uint64_t x312 = UINT64_MAX;

	t70 = ((x309&x310)-(x311|x312));

	if (t70 != 18446744073709551337LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x313 = -2;
	int8_t x314 = 41;
	static int8_t x315 = -1;
	static volatile uint64_t x316 = 0LLU;
	volatile uint64_t t71 = 2535494203001887LLU;

	t71 = ((x313&x314)-(x315|x316));

	if (t71 != 41LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x318 = 2U;

	t72 = ((x317&x318)-(x319|x320));

	if (t72 != 3LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x321 = 34LLU;
	int8_t x323 = 2;
	volatile uint64_t t73 = 36595041707350LLU;

	t73 = ((x321&x322)-(x323|x324));

	if (t73 != 18446744073709551395LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x325 = UINT32_MAX;
	uint8_t x326 = UINT8_MAX;
	volatile uint64_t x327 = 282LLU;
	static int64_t x328 = -1LL;
	volatile uint64_t t74 = 172176503562642LLU;

	t74 = ((x325&x326)-(x327|x328));

	if (t74 != 256LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x329 = 7615U;
	int16_t x330 = -1;
	volatile int32_t x331 = -28738061;
	static uint16_t x332 = UINT16_MAX;

	t75 = ((x329&x330)-(x331|x332));

	if (t75 != 28712384U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x333 = 411U;
	static int32_t x335 = 445029165;
	static uint64_t x336 = 388126112036LLU;
	volatile uint64_t t76 = 211014945482318LLU;

	t76 = ((x333&x334)-(x335|x336));

	if (t76 != 18446743685575017707LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = INT32_MIN;
	static int8_t x339 = INT8_MAX;
	static uint16_t x340 = 11229U;
	volatile uint64_t t77 = 5388418013437593LLU;

	t77 = ((x337&x338)-(x339|x340));

	if (t77 != 18446744073709540353LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x341 = INT16_MIN;
	uint64_t x342 = 111144LLU;
	static uint64_t x344 = 16018751256LLU;
	volatile uint64_t t78 = 14830084478LLU;

	t78 = ((x341&x342)-(x343|x344));

	if (t78 != 18446744057690898661LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x345 = 1031U;
	int32_t x346 = 800348;
	uint16_t x347 = 11289U;
	uint16_t x348 = 11209U;
	int32_t t79 = -68621;

	t79 = ((x345&x346)-(x347|x348));

	if (t79 != -11221) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x349 = INT8_MIN;
	int16_t x350 = 413;
	static int64_t x351 = 392LL;
	static uint64_t x352 = UINT64_MAX;
	static uint64_t t80 = 5LLU;

	t80 = ((x349&x350)-(x351|x352));

	if (t80 != 385LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x355 = INT16_MAX;
	volatile int32_t t81 = -199529;

	t81 = ((x353&x354)-(x355|x356));

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x357 = 14324;
	int8_t x359 = 25;
	int32_t x360 = -5;
	volatile uint64_t t82 = 16248684149423LLU;

	t82 = ((x357&x358)-(x359|x360));

	if (t82 != 14329LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x361 = 132345679LLU;
	int64_t x362 = INT64_MIN;
	uint32_t x364 = UINT32_MAX;
	volatile uint64_t t83 = 148LLU;

	t83 = ((x361&x362)-(x363|x364));

	if (t83 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x365 = 1U;
	int16_t x366 = -50;
	uint8_t x368 = 92U;
	static volatile int32_t t84 = -1;

	t84 = ((x365&x366)-(x367|x368));

	if (t84 != -127) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x370 = -1355073;
	uint64_t x371 = 12364456002500LLU;
	static int64_t x372 = -1LL;
	volatile uint64_t t85 = 54227367LLU;

	t85 = ((x369&x370)-(x371|x372));

	if (t85 != 18446744073708196544LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x373 = INT32_MAX;
	static int32_t x375 = INT32_MIN;
	static int32_t x376 = -1;
	volatile int32_t t86 = -40310800;

	t86 = ((x373&x374)-(x375|x376));

	if (t86 != 3679) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x378 = INT16_MAX;
	int64_t x379 = INT64_MIN;
	int16_t x380 = INT16_MIN;

	t87 = ((x377&x378)-(x379|x380));

	if (t87 != 34669LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x381 = -1;
	uint8_t x382 = UINT8_MAX;
	int32_t t88 = 122198;

	t88 = ((x381&x382)-(x383|x384));

	if (t88 != 33002) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x385 = 689072;
	static uint8_t x386 = UINT8_MAX;
	uint64_t x388 = 233LLU;
	static uint64_t t89 = 18829LLU;

	t89 = ((x385&x386)-(x387|x388));

	if (t89 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x389 = INT32_MIN;
	int8_t x391 = INT8_MIN;
	volatile int64_t t90 = 33835597422175LL;

	t90 = ((x389&x390)-(x391|x392));

	if (t90 != -2147483520LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x393 = -1;
	static int32_t x394 = INT32_MIN;
	int16_t x395 = INT16_MIN;
	static uint8_t x396 = 50U;

	t91 = ((x393&x394)-(x395|x396));

	if (t91 != -2147450930) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x397 = -1;
	uint64_t x398 = 2502423866435LLU;
	int64_t x399 = 169330689215LL;
	int64_t x400 = 3844605LL;
	uint64_t t92 = 60273596293781LLU;

	t92 = ((x397&x398)-(x399|x400));

	if (t92 != 2333091429956LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x401 = UINT64_MAX;
	int16_t x402 = INT16_MIN;
	int32_t x403 = INT32_MIN;

	t93 = ((x401&x402)-(x403|x404));

	if (t93 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x405 = -22023902270566LL;
	static volatile int32_t x408 = -961109;

	t94 = ((x405&x406)-(x407|x408));

	if (t94 != 690023323LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x409 = 3246318276LLU;
	static volatile int16_t x410 = 1;
	int32_t x411 = 3330278;
	uint32_t x412 = UINT32_MAX;
	static uint64_t t95 = 12158LLU;

	t95 = ((x409&x410)-(x411|x412));

	if (t95 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x413 = -1;
	int32_t x414 = -1;
	int16_t x415 = INT16_MIN;
	volatile int64_t x416 = -1LL;

	t96 = ((x413&x414)-(x415|x416));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x417 = INT8_MAX;
	uint64_t x418 = UINT64_MAX;
	volatile uint64_t x419 = 43334LLU;
	uint8_t x420 = 3U;
	static volatile uint64_t t97 = 576861035LLU;

	t97 = ((x417&x418)-(x419|x420));

	if (t97 != 18446744073709508408LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x421 = 2U;
	int8_t x422 = INT8_MIN;
	uint64_t x423 = 1410246194LLU;
	static int64_t x424 = INT64_MIN;
	uint64_t t98 = 2912LLU;

	t98 = ((x421&x422)-(x423|x424));

	if (t98 != 9223372035444529614LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x425 = 95U;
	int8_t x426 = INT8_MAX;
	static uint32_t x427 = UINT32_MAX;
	int64_t x428 = -7622LL;
	static int64_t t99 = 42LL;

	t99 = ((x425&x426)-(x427|x428));

	if (t99 != 96LL) { NG(); } else { ; }
	
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

