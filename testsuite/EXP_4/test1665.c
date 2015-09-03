#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
static int16_t x2 = INT16_MIN;
volatile int8_t x6 = -19;
int32_t x8 = 0;
static int32_t x20 = 4868;
int32_t x28 = INT32_MIN;
int16_t x31 = -15;
volatile int16_t x34 = -1;
volatile int8_t x40 = -1;
static int16_t x48 = INT16_MIN;
volatile int32_t x50 = -81227;
int32_t x52 = INT32_MAX;
int16_t x56 = INT16_MAX;
int8_t x65 = INT8_MAX;
int64_t x70 = INT64_MAX;
int64_t x75 = INT64_MAX;
int8_t x76 = 15;
volatile int32_t t16 = -39;
uint16_t x80 = 610U;
uint8_t x82 = 10U;
int8_t x84 = -1;
static uint32_t x86 = UINT32_MAX;
static uint16_t x87 = 0U;
int16_t x88 = -1;
volatile uint64_t x91 = UINT64_MAX;
static int64_t x102 = -1LL;
volatile int64_t t23 = -1300024417260LL;
uint64_t x107 = UINT64_MAX;
uint64_t x109 = 98989547584LLU;
int64_t x115 = INT64_MIN;
uint32_t x116 = UINT32_MAX;
uint16_t x120 = UINT16_MAX;
int32_t x124 = -1;
int32_t x138 = INT32_MAX;
uint16_t x140 = 66U;
volatile int32_t x144 = -1;
volatile int8_t x145 = INT8_MIN;
volatile int32_t t33 = 13558;
int8_t x151 = INT8_MAX;
static int32_t x154 = INT32_MAX;
volatile uint64_t x162 = 737222670702086906LLU;
int8_t x167 = -1;
int16_t x169 = -1;
static uint32_t x172 = 898U;
volatile int8_t x175 = INT8_MIN;
static uint64_t x176 = UINT64_MAX;
uint8_t x177 = 16U;
volatile int32_t t41 = 0;
int16_t x187 = 10;
int32_t x188 = 3988;
uint16_t x190 = 93U;
int64_t x192 = INT64_MIN;
static int64_t x195 = -1LL;
volatile int32_t x197 = -1442;
int32_t x199 = INT32_MIN;
int16_t x201 = INT16_MIN;
static int8_t x203 = 1;
int16_t x210 = 1;
int8_t x213 = 2;
static uint64_t x214 = 8376938176195292LLU;
static uint64_t t49 = 4010532185350LLU;
int8_t x225 = -8;
int64_t x226 = 13754417508LL;
static int64_t x236 = INT64_MAX;
int32_t x237 = -194952;
int8_t x244 = 0;
uint64_t t56 = 5493784450LLU;
uint8_t x248 = UINT8_MAX;
uint8_t x251 = UINT8_MAX;
uint8_t x254 = 2U;
uint8_t x258 = 3U;
volatile uint32_t x259 = UINT32_MAX;
int16_t x274 = INT16_MIN;
static volatile int8_t x276 = -1;
int32_t t62 = 479794;
int8_t x289 = -31;
int16_t x292 = 19;
static int8_t x293 = INT8_MAX;
int16_t x296 = 2426;
int64_t x303 = -2LL;
int16_t x305 = INT16_MIN;
static volatile int32_t t70 = 13;
static volatile uint32_t x314 = 0U;
uint8_t x316 = 0U;
uint32_t x323 = UINT32_MAX;
int8_t x324 = INT8_MAX;
int8_t x326 = INT8_MIN;
int16_t x328 = INT16_MIN;
int16_t x332 = INT16_MIN;
int8_t x338 = INT8_MAX;
uint64_t x340 = 320756113359281843LLU;
volatile int32_t t76 = -4438;
static uint8_t x346 = 37U;
static int32_t x355 = -23735227;
static int32_t t80 = -3577;
int64_t x362 = INT64_MAX;
uint16_t x367 = 17U;
uint16_t x370 = UINT16_MAX;
int64_t x372 = INT64_MIN;
volatile uint64_t t84 = 1705570LLU;
static int8_t x381 = -43;
int64_t x383 = -1LL;
volatile int64_t x385 = -43805105452LL;
uint16_t x386 = UINT16_MAX;
volatile int64_t t88 = -107111865660860LL;
int32_t x390 = INT32_MIN;
int8_t x391 = INT8_MIN;
volatile uint16_t x394 = 3652U;
uint16_t x398 = 7318U;
int16_t x400 = INT16_MAX;
int8_t x401 = INT8_MIN;
static int8_t x408 = INT8_MIN;
int32_t x409 = -2;
int8_t x411 = INT8_MIN;
int64_t x415 = -1LL;
static int8_t x418 = INT8_MIN;
uint8_t x419 = 4U;
int8_t x421 = INT8_MAX;
int16_t x423 = INT16_MIN;
volatile int64_t x432 = -5568053LL;


void f0(void) {
	uint32_t x3 = UINT32_MAX;
	int16_t x4 = -158;
	int32_t t0 = 557667039;

	t0 = (x1+(x2|(x3<=x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -4299407LL;
	int16_t x7 = INT16_MIN;
	int64_t t1 = -66753LL;

	t1 = (x5+(x6|(x7<=x8)));

	if (t1 != -4299426LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = UINT64_MAX;
	static uint16_t x10 = 1U;
	static uint64_t x11 = 13407897946038LLU;
	int16_t x12 = INT16_MIN;
	uint64_t t2 = 5451LLU;

	t2 = (x9+(x10|(x11<=x12)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 0U;
	uint16_t x14 = 3U;
	volatile uint16_t x15 = 4549U;
	int64_t x16 = INT64_MIN;
	volatile int32_t t3 = 0;

	t3 = (x13+(x14|(x15<=x16)));

	if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	uint16_t x18 = 6311U;
	int32_t x19 = -254225932;
	int32_t t4 = 790057;

	t4 = (x17+(x18|(x19<=x20)));

	if (t4 != 6310) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	uint32_t x26 = UINT32_MAX;
	int64_t x27 = INT64_MIN;
	volatile int64_t t5 = 1752336877761514354LL;

	t5 = (x25+(x26|(x27<=x28)));

	if (t5 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = 575;
	static uint32_t x30 = 803627U;
	static volatile int8_t x32 = INT8_MIN;
	volatile uint32_t t6 = 303U;

	t6 = (x29+(x30|(x31<=x32)));

	if (t6 != 804202U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 80U;
	int32_t x35 = INT32_MIN;
	volatile uint16_t x36 = 438U;
	int32_t t7 = -3116;

	t7 = (x33+(x34|(x35<=x36)));

	if (t7 != 79) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;
	int8_t x38 = INT8_MIN;
	uint16_t x39 = UINT16_MAX;
	volatile uint32_t t8 = 353368U;

	t8 = (x37+(x38|(x39<=x40)));

	if (t8 != 4294967167U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 3U;
	uint32_t x42 = UINT32_MAX;
	volatile uint16_t x43 = 2U;
	uint64_t x44 = 1824046LLU;
	static uint32_t t9 = 1331473259U;

	t9 = (x41+(x42|(x43<=x44)));

	if (t9 != 2U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x45 = 0U;
	uint32_t x46 = UINT32_MAX;
	static int16_t x47 = INT16_MIN;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x45+(x46|(x47<=x48)));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 15045U;
	static uint8_t x51 = 58U;
	uint32_t t11 = 40338U;

	t11 = (x49+(x50|(x51<=x52)));

	if (t11 != 4294901114U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = INT64_MAX;
	volatile int16_t x54 = INT16_MIN;
	static uint16_t x55 = 11U;
	volatile int64_t t12 = 1098195958024LL;

	t12 = (x53+(x54|(x55<=x56)));

	if (t12 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = UINT8_MAX;
	static int16_t x62 = INT16_MAX;
	static int8_t x63 = INT8_MIN;
	static int32_t x64 = INT32_MAX;
	int32_t t13 = 5652054;

	t13 = (x61+(x62|(x63<=x64)));

	if (t13 != 33022) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x66 = INT64_MIN;
	volatile uint32_t x67 = 3U;
	int64_t x68 = -1LL;
	volatile int64_t t14 = -9821726446473LL;

	t14 = (x65+(x66|(x67<=x68)));

	if (t14 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x69 = INT64_MIN;
	uint32_t x71 = 284U;
	int32_t x72 = INT32_MIN;
	volatile int64_t t15 = 134LL;

	t15 = (x69+(x70|(x71<=x72)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	uint8_t x74 = UINT8_MAX;

	t16 = (x73+(x74|(x75<=x76)));

	if (t16 != -32513) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 0U;
	static int8_t x78 = 0;
	int16_t x79 = INT16_MAX;
	static volatile int32_t t17 = 14474;

	t17 = (x77+(x78|(x79<=x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 1U;
	uint32_t x83 = 846U;
	int32_t t18 = 7762584;

	t18 = (x81+(x82|(x83<=x84)));

	if (t18 != 12) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -1;
	volatile uint32_t t19 = 1782944U;

	t19 = (x85+(x86|(x87<=x88)));

	if (t19 != 4294967294U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x89 = 9426LLU;
	volatile int32_t x90 = INT32_MIN;
	int16_t x92 = INT16_MAX;
	uint64_t t20 = 125474887LLU;

	t20 = (x89+(x90|(x91<=x92)));

	if (t20 != 18446744071562077394LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MAX;
	uint16_t x94 = 3818U;
	volatile int32_t x95 = 114483296;
	int32_t x96 = INT32_MAX;
	volatile int32_t t21 = -956;

	t21 = (x93+(x94|(x95<=x96)));

	if (t21 != 3946) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x97 = -28;
	int8_t x98 = -1;
	int32_t x99 = INT32_MIN;
	int8_t x100 = -1;
	int32_t t22 = -32078486;

	t22 = (x97+(x98|(x99<=x100)));

	if (t22 != -29) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x101 = 25U;
	int32_t x103 = -3;
	volatile uint64_t x104 = UINT64_MAX;

	t23 = (x101+(x102|(x103<=x104)));

	if (t23 != 24LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x105 = 563LL;
	int32_t x106 = INT32_MIN;
	int8_t x108 = INT8_MIN;
	volatile int64_t t24 = 250524624LL;

	t24 = (x105+(x106|(x107<=x108)));

	if (t24 != -2147483085LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x110 = -24172667467LL;
	uint8_t x111 = 82U;
	static int64_t x112 = 166606290858LL;
	uint64_t t25 = 4LLU;

	t25 = (x109+(x110|(x111<=x112)));

	if (t25 != 74816880117LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = -1;
	volatile int32_t x114 = -1033;
	int32_t t26 = -11;

	t26 = (x113+(x114|(x115<=x116)));

	if (t26 != -1034) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 2397669917476LLU;
	uint8_t x118 = UINT8_MAX;
	uint64_t x119 = 6LLU;
	uint64_t t27 = 7LLU;

	t27 = (x117+(x118|(x119<=x120)));

	if (t27 != 2397669917731LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	uint32_t x122 = 28749077U;
	uint16_t x123 = 9U;
	volatile int64_t t28 = -323942447LL;

	t28 = (x121+(x122|(x123<=x124)));

	if (t28 != -9223372036826026731LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x125 = 260;
	int8_t x126 = 1;
	static int8_t x127 = 33;
	static uint32_t x128 = 380903275U;
	static int32_t t29 = -503;

	t29 = (x125+(x126|(x127<=x128)));

	if (t29 != 261) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = -50;
	static int64_t x130 = INT64_MAX;
	static int8_t x131 = INT8_MAX;
	volatile int64_t x132 = 306563770723037LL;
	volatile int64_t t30 = 37952654704733LL;

	t30 = (x129+(x130|(x131<=x132)));

	if (t30 != 9223372036854775757LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = -1;
	int8_t x139 = INT8_MIN;
	int32_t t31 = 787108;

	t31 = (x137+(x138|(x139<=x140)));

	if (t31 != 2147483646) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = -15240875626LL;
	int8_t x142 = INT8_MAX;
	static uint64_t x143 = 278LLU;
	int64_t t32 = -1306322188860LL;

	t32 = (x141+(x142|(x143<=x144)));

	if (t32 != -15240875499LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x146 = 29876U;
	int64_t x147 = 411238LL;
	uint8_t x148 = 116U;

	t33 = (x145+(x146|(x147<=x148)));

	if (t33 != 29748) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x149 = -1;
	int64_t x150 = INT64_MIN;
	uint8_t x152 = UINT8_MAX;
	volatile int64_t t34 = INT64_MIN;

	t34 = (x149+(x150|(x151<=x152)));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MIN;
	int8_t x155 = -1;
	int32_t x156 = INT32_MAX;
	int32_t t35 = 4758261;

	t35 = (x153+(x154|(x155<=x156)));

	if (t35 != 2147483519) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x157 = 0U;
	volatile int16_t x158 = 319;
	static int8_t x159 = -1;
	static int64_t x160 = 1LL;
	static volatile int32_t t36 = -90;

	t36 = (x157+(x158|(x159<=x160)));

	if (t36 != 319) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	uint64_t x163 = UINT64_MAX;
	int64_t x164 = 22426173LL;
	uint64_t t37 = 236223187886551038LLU;

	t37 = (x161+(x162|(x163<=x164)));

	if (t37 != 737222670702054138LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x165 = 1750U;
	int32_t x166 = INT32_MIN;
	uint32_t x168 = 137415535U;
	volatile uint32_t t38 = 2707U;

	t38 = (x165+(x166|(x167<=x168)));

	if (t38 != 2147485398U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x170 = 770U;
	volatile uint16_t x171 = 764U;
	static uint32_t t39 = 3070U;

	t39 = (x169+(x170|(x171<=x172)));

	if (t39 != 770U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = INT8_MIN;
	uint8_t x174 = UINT8_MAX;
	volatile int32_t t40 = -1893056;

	t40 = (x173+(x174|(x175<=x176)));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x178 = -7093;
	static uint8_t x179 = UINT8_MAX;
	uint16_t x180 = UINT16_MAX;

	t41 = (x177+(x178|(x179<=x180)));

	if (t41 != -7077) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = 66964531U;
	volatile uint16_t x186 = UINT16_MAX;
	static volatile uint32_t t42 = 23U;

	t42 = (x185+(x186|(x187<=x188)));

	if (t42 != 67030066U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = 40;
	uint16_t x191 = UINT16_MAX;
	volatile int32_t t43 = -361462;

	t43 = (x189+(x190|(x191<=x192)));

	if (t43 != 133) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x193 = 210855691LLU;
	int16_t x194 = -1;
	int64_t x196 = INT64_MAX;
	volatile uint64_t t44 = 34790LLU;

	t44 = (x193+(x194|(x195<=x196)));

	if (t44 != 210855690LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x198 = -1;
	int64_t x200 = -1LL;
	int32_t t45 = -1;

	t45 = (x197+(x198|(x199<=x200)));

	if (t45 != -1443) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x202 = -25;
	uint32_t x204 = 2575U;
	volatile int32_t t46 = -1154124;

	t46 = (x201+(x202|(x203<=x204)));

	if (t46 != -32793) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = 1403U;
	uint64_t x206 = 44191LLU;
	uint8_t x207 = 41U;
	int64_t x208 = INT64_MIN;
	volatile uint64_t t47 = 9606959842056526LLU;

	t47 = (x205+(x206|(x207<=x208)));

	if (t47 != 45594LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = 984;
	int16_t x211 = -504;
	uint8_t x212 = 0U;
	int32_t t48 = -30484;

	t48 = (x209+(x210|(x211<=x212)));

	if (t48 != 985) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x215 = 278970612431887LLU;
	int64_t x216 = INT64_MIN;

	t49 = (x213+(x214|(x215<=x216)));

	if (t49 != 8376938176195295LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = -1LL;
	int16_t x218 = 3;
	int64_t x219 = 85494137598699072LL;
	int16_t x220 = INT16_MIN;
	int64_t t50 = 14700LL;

	t50 = (x217+(x218|(x219<=x220)));

	if (t50 != 2LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = -57;
	uint64_t x222 = UINT64_MAX;
	int64_t x223 = INT64_MIN;
	int64_t x224 = 2139178805507164LL;
	volatile uint64_t t51 = 53362773214038LLU;

	t51 = (x221+(x222|(x223<=x224)));

	if (t51 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x227 = -1;
	uint16_t x228 = UINT16_MAX;
	int64_t t52 = -61279896LL;

	t52 = (x225+(x226|(x227<=x228)));

	if (t52 != 13754417501LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x229 = INT32_MAX;
	uint32_t x230 = 1U;
	volatile uint32_t x231 = 56600521U;
	int32_t x232 = -3063;
	uint32_t t53 = 15797U;

	t53 = (x229+(x230|(x231<=x232)));

	if (t53 != 2147483648U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = 1;
	int16_t x234 = 292;
	int64_t x235 = INT64_MIN;
	volatile int32_t t54 = -208760;

	t54 = (x233+(x234|(x235<=x236)));

	if (t54 != 294) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x238 = INT16_MIN;
	static int16_t x239 = -321;
	int64_t x240 = -75LL;
	static int32_t t55 = 5;

	t55 = (x237+(x238|(x239<=x240)));

	if (t55 != -227719) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x241 = 26837U;
	static uint64_t x242 = 8807062592535LLU;
	static int32_t x243 = -1;

	t56 = (x241+(x242|(x243<=x244)));

	if (t56 != 8807062619372LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x245 = UINT8_MAX;
	int8_t x246 = INT8_MIN;
	int64_t x247 = -1LL;
	volatile int32_t t57 = -3278022;

	t57 = (x245+(x246|(x247<=x248)));

	if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x249 = UINT64_MAX;
	int32_t x250 = -6415;
	int8_t x252 = -1;
	uint64_t t58 = 47714415528LLU;

	t58 = (x249+(x250|(x251<=x252)));

	if (t58 != 18446744073709545200LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = 52634816LL;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MAX;
	int64_t t59 = 93475LL;

	t59 = (x253+(x254|(x255<=x256)));

	if (t59 != 52634819LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x257 = 3721182895553365819LL;
	int8_t x260 = INT8_MIN;
	int64_t t60 = -11107272185412LL;

	t60 = (x257+(x258|(x259<=x260)));

	if (t60 != 3721182895553365822LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x261 = INT64_MIN;
	int16_t x262 = INT16_MAX;
	uint32_t x263 = 1708678U;
	uint16_t x264 = UINT16_MAX;
	volatile int64_t t61 = 23038LL;

	t61 = (x261+(x262|(x263<=x264)));

	if (t61 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x273 = 3U;
	int8_t x275 = INT8_MIN;

	t62 = (x273+(x274|(x275<=x276)));

	if (t62 != -32764) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x277 = -1;
	int8_t x278 = INT8_MIN;
	int8_t x279 = INT8_MIN;
	static int32_t x280 = INT32_MIN;
	int32_t t63 = -60713727;

	t63 = (x277+(x278|(x279<=x280)));

	if (t63 != -129) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x281 = 1;
	static uint64_t x282 = 350808027366004897LLU;
	volatile int32_t x283 = -1;
	volatile int8_t x284 = INT8_MIN;
	uint64_t t64 = 6448935LLU;

	t64 = (x281+(x282|(x283<=x284)));

	if (t64 != 350808027366004898LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x285 = UINT16_MAX;
	static volatile int16_t x286 = 12602;
	uint64_t x287 = 10105385416807302LLU;
	uint64_t x288 = UINT64_MAX;
	int32_t t65 = 4;

	t65 = (x285+(x286|(x287<=x288)));

	if (t65 != 78138) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x290 = 0U;
	uint32_t x291 = 5591U;
	volatile int32_t t66 = 57283710;

	t66 = (x289+(x290|(x291<=x292)));

	if (t66 != -31) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x294 = INT16_MAX;
	uint32_t x295 = 960214U;
	int32_t t67 = -57;

	t67 = (x293+(x294|(x295<=x296)));

	if (t67 != 32894) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x301 = 0U;
	uint32_t x302 = UINT32_MAX;
	int64_t x304 = INT64_MAX;
	static volatile uint32_t t68 = UINT32_MAX;

	t68 = (x301+(x302|(x303<=x304)));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x306 = -14;
	int8_t x307 = INT8_MIN;
	int8_t x308 = 1;
	static int32_t t69 = -400320366;

	t69 = (x305+(x306|(x307<=x308)));

	if (t69 != -32781) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x309 = INT16_MAX;
	int32_t x310 = -1;
	volatile int16_t x311 = 0;
	int64_t x312 = INT64_MIN;

	t70 = (x309+(x310|(x311<=x312)));

	if (t70 != 32766) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x313 = -1790LL;
	uint64_t x315 = 7131266466236LLU;
	volatile int64_t t71 = -1328LL;

	t71 = (x313+(x314|(x315<=x316)));

	if (t71 != -1790LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = 8970478484798061LL;
	int16_t x318 = INT16_MIN;
	volatile uint16_t x319 = 73U;
	int16_t x320 = -1;
	int64_t t72 = 2067160972046537313LL;

	t72 = (x317+(x318|(x319<=x320)));

	if (t72 != 8970478484765293LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x321 = INT32_MIN;
	static int8_t x322 = 0;
	static volatile int32_t t73 = INT32_MIN;

	t73 = (x321+(x322|(x323<=x324)));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x325 = 32376278;
	int8_t x327 = -1;
	volatile int32_t t74 = 56758;

	t74 = (x325+(x326|(x327<=x328)));

	if (t74 != 32376150) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x329 = INT8_MIN;
	int8_t x330 = 1;
	uint32_t x331 = 1490U;
	volatile int32_t t75 = -3060;

	t75 = (x329+(x330|(x331<=x332)));

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = -354;
	int32_t x339 = INT32_MAX;

	t76 = (x337+(x338|(x339<=x340)));

	if (t76 != -227) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x341 = 231754LLU;
	static volatile int32_t x342 = -31;
	int32_t x343 = -1;
	static uint32_t x344 = 7085694U;
	volatile uint64_t t77 = 71846708947585351LLU;

	t77 = (x341+(x342|(x343<=x344)));

	if (t77 != 231723LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x345 = INT32_MIN;
	int8_t x347 = INT8_MAX;
	static int64_t x348 = -1LL;
	volatile int32_t t78 = 971086205;

	t78 = (x345+(x346|(x347<=x348)));

	if (t78 != -2147483611) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x349 = INT16_MIN;
	static int64_t x350 = 5768862257LL;
	int16_t x351 = INT16_MIN;
	uint8_t x352 = 15U;
	static int64_t t79 = -26LL;

	t79 = (x349+(x350|(x351<=x352)));

	if (t79 != 5768829489LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x353 = 52U;
	int8_t x354 = 1;
	int64_t x356 = 78796224LL;

	t80 = (x353+(x354|(x355<=x356)));

	if (t80 != 53) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x357 = 1452930;
	int16_t x358 = -10442;
	uint32_t x359 = 709615542U;
	int64_t x360 = 13LL;
	int32_t t81 = 16;

	t81 = (x357+(x358|(x359<=x360)));

	if (t81 != 1442488) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = -2116400;
	int64_t x363 = INT64_MAX;
	uint32_t x364 = 31U;
	volatile int64_t t82 = -184509781355180163LL;

	t82 = (x361+(x362|(x363<=x364)));

	if (t82 != 9223372036852659407LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = -2;
	uint8_t x366 = 26U;
	int64_t x368 = INT64_MAX;
	int32_t t83 = -67355024;

	t83 = (x365+(x366|(x367<=x368)));

	if (t83 != 25) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x369 = 4323477403LLU;
	int64_t x371 = INT64_MIN;

	t84 = (x369+(x370|(x371<=x372)));

	if (t84 != 4323542938LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x373 = INT32_MAX;
	int16_t x374 = INT16_MIN;
	int64_t x375 = -345429414LL;
	static int16_t x376 = INT16_MIN;
	static int32_t t85 = 143836906;

	t85 = (x373+(x374|(x375<=x376)));

	if (t85 != 2147450880) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x377 = INT32_MIN;
	int16_t x378 = INT16_MAX;
	int16_t x379 = INT16_MIN;
	int8_t x380 = 5;
	static int32_t t86 = -57090985;

	t86 = (x377+(x378|(x379<=x380)));

	if (t86 != -2147450881) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x382 = INT8_MIN;
	volatile int32_t x384 = INT32_MIN;
	static int32_t t87 = 3;

	t87 = (x381+(x382|(x383<=x384)));

	if (t87 != -171) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x387 = -1;
	int64_t x388 = -1053921839800484LL;

	t88 = (x385+(x386|(x387<=x388)));

	if (t88 != -43805039917LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x389 = 1841608364338654868LLU;
	int8_t x392 = INT8_MIN;
	volatile uint64_t t89 = 2074365495LLU;

	t89 = (x389+(x390|(x391<=x392)));

	if (t89 != 1841608362191171221LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x393 = INT32_MIN;
	uint64_t x395 = 2110933370897564LLU;
	volatile uint16_t x396 = 2018U;
	int32_t t90 = -244770006;

	t90 = (x393+(x394|(x395<=x396)));

	if (t90 != -2147479996) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x397 = INT64_MIN;
	uint8_t x399 = 47U;
	int64_t t91 = -55353200324184508LL;

	t91 = (x397+(x398|(x399<=x400)));

	if (t91 != -9223372036854768489LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x402 = INT8_MIN;
	volatile int16_t x403 = -62;
	int32_t x404 = INT32_MAX;
	int32_t t92 = 7039;

	t92 = (x401+(x402|(x403<=x404)));

	if (t92 != -255) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x405 = UINT64_MAX;
	int64_t x406 = 9195601408LL;
	int8_t x407 = -12;
	volatile uint64_t t93 = 14590470244401015LLU;

	t93 = (x405+(x406|(x407<=x408)));

	if (t93 != 9195601407LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x410 = INT16_MIN;
	int32_t x412 = INT32_MAX;
	volatile int32_t t94 = 12187554;

	t94 = (x409+(x410|(x411<=x412)));

	if (t94 != -32769) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x413 = INT8_MIN;
	int16_t x414 = -1;
	volatile int64_t x416 = -1LL;
	int32_t t95 = -341854725;

	t95 = (x413+(x414|(x415<=x416)));

	if (t95 != -129) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x417 = UINT32_MAX;
	int32_t x420 = 955676847;
	static volatile uint32_t t96 = 3U;

	t96 = (x417+(x418|(x419<=x420)));

	if (t96 != 4294967168U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x422 = 5573407535740LLU;
	volatile uint32_t x424 = 261U;
	uint64_t t97 = 272512962131LLU;

	t97 = (x421+(x422|(x423<=x424)));

	if (t97 != 5573407535867LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x425 = 86;
	static int64_t x426 = -1LL;
	static volatile int32_t x427 = 3539;
	int8_t x428 = INT8_MAX;
	volatile int64_t t98 = -1835151121LL;

	t98 = (x425+(x426|(x427<=x428)));

	if (t98 != 85LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x429 = -1046200876934LL;
	int32_t x430 = -1;
	int32_t x431 = INT32_MIN;
	int64_t t99 = -1875263898077518027LL;

	t99 = (x429+(x430|(x431<=x432)));

	if (t99 != -1046200876935LL) { NG(); } else { ; }
	
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

