#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x11 = 189U;
uint64_t t3 = 16636802341423LLU;
int8_t x17 = INT8_MAX;
int64_t x19 = -1LL;
int64_t t4 = 586999782453224893LL;
static uint8_t x29 = UINT8_MAX;
int64_t x35 = INT64_MAX;
int64_t t8 = 46256603706751LL;
static volatile uint32_t x38 = 127719505U;
uint64_t x39 = 221LLU;
uint8_t x42 = UINT8_MAX;
static int32_t x60 = INT32_MIN;
int32_t t13 = 73;
static int64_t x61 = 112204746272LL;
int32_t x62 = INT32_MIN;
static volatile int32_t x68 = -1;
volatile int8_t x75 = INT8_MIN;
uint16_t x76 = 31U;
int32_t x79 = INT32_MAX;
static int8_t x80 = -1;
int32_t x93 = INT32_MIN;
volatile int64_t t22 = -1233LL;
uint64_t t23 = 4064LLU;
int64_t x103 = INT64_MAX;
uint64_t x105 = UINT64_MAX;
static volatile int32_t x107 = -1;
uint64_t x110 = UINT64_MAX;
int16_t x112 = 2270;
uint32_t x114 = 921710524U;
static uint32_t x117 = 643U;
int16_t x120 = -458;
static volatile int64_t t28 = -8602132498222LL;
int32_t x121 = 0;
static uint16_t x130 = 268U;
uint32_t t31 = 891U;
int64_t t32 = -196667474LL;
uint8_t x138 = 3U;
static uint32_t x154 = 3641962U;
uint64_t x156 = 1103856959830LLU;
uint8_t x157 = 8U;
int64_t t38 = 3LL;
uint64_t t40 = 54168707701LLU;
static uint32_t x173 = UINT32_MAX;
uint16_t x177 = UINT16_MAX;
static int8_t x183 = -1;
int16_t x187 = 16243;
static int64_t x190 = 200499LL;
int16_t x205 = -1;
volatile uint32_t t50 = 199459592U;
static int16_t x213 = -7280;
static int16_t x223 = INT16_MAX;
static uint8_t x228 = UINT8_MAX;
int32_t x231 = -1;
int64_t t59 = -24640LL;
int32_t x252 = INT32_MIN;
volatile uint64_t t60 = 48999LLU;
uint64_t x254 = 691548551049LLU;
volatile uint16_t x261 = 1604U;
int64_t x270 = -149681916896LL;
int32_t x272 = -25;
static uint16_t x275 = UINT16_MAX;
volatile int32_t t66 = -2709;
int8_t x279 = 1;
uint16_t x288 = 109U;
volatile int64_t x297 = INT64_MIN;
static int16_t x298 = 928;
volatile int64_t t73 = 3LL;
volatile int16_t x312 = INT16_MIN;
int8_t x313 = -1;
int16_t x320 = -2121;
int16_t x322 = 8;
int32_t x324 = INT32_MIN;
int64_t x328 = -932LL;
uint8_t x330 = 41U;
static volatile int64_t t80 = -50457553378LL;
int64_t x339 = INT64_MIN;
int64_t x340 = INT64_MIN;
volatile uint16_t x342 = 122U;
uint32_t x348 = UINT32_MAX;
uint8_t x349 = 0U;
int32_t x358 = 315695372;
int8_t x359 = INT8_MIN;
int32_t x363 = -1;
uint8_t x365 = 1U;
int32_t x376 = -2588140;
volatile uint64_t t90 = 475930514LLU;
volatile int8_t x382 = 39;
int64_t x384 = INT64_MIN;
static volatile int16_t x385 = INT16_MIN;
int16_t x390 = -2;
int8_t x396 = -1;
int64_t x399 = INT64_MIN;
static int64_t t95 = 6LL;
volatile int16_t x401 = INT16_MIN;
int64_t x404 = INT64_MAX;
int16_t x405 = INT16_MIN;
static int8_t x408 = 0;
int64_t x409 = INT64_MIN;
volatile int32_t x412 = 19606;
int64_t t99 = -4173463332LL;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int16_t x2 = INT16_MIN;
	int32_t x3 = -1;
	static int8_t x4 = 0;
	static uint32_t t0 = 2U;

	t0 = (x1/(x2|(x3|x4)));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 0U;
	int8_t x6 = 1;
	uint16_t x7 = 2U;
	int8_t x8 = -1;
	volatile int32_t t1 = -48870697;

	t1 = (x5/(x6|(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int64_t x10 = 44364LL;
	volatile uint16_t x12 = 1602U;
	int64_t t2 = 58624891605447LL;

	t2 = (x9/(x10|(x11|x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint64_t x14 = 1679811513LLU;
	int64_t x15 = -1LL;
	static int32_t x16 = -1;

	t3 = (x13/(x14|(x15|x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 2U;
	static uint32_t x20 = 68U;

	t4 = (x17/(x18|(x19|x20)));

	if (t4 != -127LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int64_t x22 = -4LL;
	int8_t x23 = -1;
	uint32_t x24 = UINT32_MAX;
	int64_t t5 = 1LL;

	t5 = (x21/(x22|(x23|x24)));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = 1;
	int8_t x26 = -1;
	int32_t x27 = -1;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -271;

	t6 = (x25/(x26|(x27|x28)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MAX;
	int64_t x31 = INT64_MIN;
	int16_t x32 = 2168;
	int64_t t7 = 816152579LL;

	t7 = (x29/(x30|(x31|x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	static uint32_t x34 = 975147U;
	volatile uint32_t x36 = 16106774U;

	t8 = (x33/(x34|(x35|x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = 1;
	int32_t x40 = -6;
	static uint64_t t9 = 201LLU;

	t9 = (x37/(x38|(x39|x40)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int32_t x43 = -1;
	volatile int16_t x44 = INT16_MIN;
	static int32_t t10 = 11285;

	t10 = (x41/(x42|(x43|x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -14;
	int32_t x46 = -1;
	static int16_t x47 = INT16_MAX;
	int8_t x48 = INT8_MIN;
	int32_t t11 = -21884;

	t11 = (x45/(x46|(x47|x48)));

	if (t11 != 14) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	volatile int64_t x50 = INT64_MAX;
	uint8_t x51 = 0U;
	int32_t x52 = -1;
	static volatile int64_t t12 = -744205946661482936LL;

	t12 = (x49/(x50|(x51|x52)));

	if (t12 != -4294967295LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = -4;
	int8_t x59 = 53;

	t13 = (x57/(x58|(x59|x60)));

	if (t13 != 715827882) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x63 = INT16_MAX;
	int8_t x64 = INT8_MAX;
	volatile int64_t t14 = 4353904463130083LL;

	t14 = (x61/(x62|(x63|x64)));

	if (t14 != -52LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MAX;
	int8_t x66 = -1;
	static uint16_t x67 = UINT16_MAX;
	static int64_t t15 = -68563852922693891LL;

	t15 = (x65/(x66|(x67|x68)));

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x69 = -421283297406LL;
	uint64_t x70 = UINT64_MAX;
	uint16_t x71 = 19U;
	int16_t x72 = 348;
	volatile uint64_t t16 = 0LLU;

	t16 = (x69/(x70|(x71|x72)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MAX;
	int16_t x74 = 1494;
	int32_t t17 = 248974;

	t17 = (x73/(x74|(x75|x76)));

	if (t17 != -992) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 244733894U;
	int16_t x78 = INT16_MIN;
	volatile uint32_t t18 = 716744U;

	t18 = (x77/(x78|(x79|x80)));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MAX;
	static int64_t x82 = INT64_MIN;
	int16_t x83 = INT16_MIN;
	volatile int32_t x84 = INT32_MAX;
	volatile int64_t t19 = 11378026940LL;

	t19 = (x81/(x82|(x83|x84)));

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x85 = 2393U;
	int8_t x86 = INT8_MIN;
	int16_t x87 = INT16_MIN;
	uint16_t x88 = UINT16_MAX;
	int32_t t20 = 0;

	t20 = (x85/(x86|(x87|x88)));

	if (t20 != -2393) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	static volatile uint16_t x90 = UINT16_MAX;
	int16_t x91 = INT16_MIN;
	uint16_t x92 = 3989U;
	int32_t t21 = 19;

	t21 = (x89/(x90|(x91|x92)));

	if (t21 != 128) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x94 = UINT8_MAX;
	int32_t x95 = -961;
	int64_t x96 = INT64_MIN;

	t22 = (x93/(x94|(x95|x96)));

	if (t22 != 2792566LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 13902855340830LLU;
	int32_t x98 = -20558;
	int16_t x99 = INT16_MAX;
	int16_t x100 = -1;

	t23 = (x97/(x98|(x99|x100)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = 6130123492LL;
	int16_t x102 = 5040;
	uint8_t x104 = UINT8_MAX;
	int64_t t24 = 2356324782400211635LL;

	t24 = (x101/(x102|(x103|x104)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x106 = UINT32_MAX;
	volatile int8_t x108 = INT8_MAX;
	static volatile uint64_t t25 = 77LLU;

	t25 = (x105/(x106|(x107|x108)));

	if (t25 != 4294967297LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x109 = UINT8_MAX;
	static int16_t x111 = INT16_MIN;
	uint64_t t26 = 205923087480LLU;

	t26 = (x109/(x110|(x111|x112)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 3U;
	int16_t x115 = INT16_MIN;
	static volatile int8_t x116 = INT8_MIN;
	uint32_t t27 = 3100U;

	t27 = (x113/(x114|(x115|x116)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x118 = 8LL;
	int64_t x119 = -1LL;

	t28 = (x117/(x118|(x119|x120)));

	if (t28 != -643LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x122 = INT16_MIN;
	int64_t x123 = INT64_MIN;
	static int64_t x124 = -1LL;
	volatile int64_t t29 = 94524LL;

	t29 = (x121/(x122|(x123|x124)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x125 = INT64_MAX;
	uint8_t x126 = 109U;
	static volatile uint64_t x127 = 236LLU;
	int32_t x128 = INT32_MIN;
	uint64_t t30 = 225392000LLU;

	t30 = (x125/(x126|(x127|x128)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = 27U;
	int8_t x131 = INT8_MIN;
	volatile uint32_t x132 = 348664U;

	t31 = (x129/(x130|(x131|x132)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	uint32_t x134 = 28373439U;
	int32_t x135 = 62268;
	int8_t x136 = -1;

	t32 = (x133/(x134|(x135|x136)));

	if (t32 != -2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = -1LL;
	int8_t x139 = -1;
	int32_t x140 = INT32_MAX;
	volatile int64_t t33 = -47LL;

	t33 = (x137/(x138|(x139|x140)));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x141 = INT64_MAX;
	static int64_t x142 = -16LL;
	static volatile int64_t x143 = INT64_MIN;
	int32_t x144 = INT32_MIN;
	int64_t t34 = 12821203736953646LL;

	t34 = (x141/(x142|(x143|x144)));

	if (t34 != -576460752303423487LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	uint8_t x146 = UINT8_MAX;
	volatile uint32_t x147 = 4U;
	static int64_t x148 = -49865585374363414LL;
	static int64_t t35 = 506391485LL;

	t35 = (x145/(x146|(x147|x148)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = -25;
	int32_t x150 = 7;
	static uint8_t x151 = UINT8_MAX;
	int16_t x152 = INT16_MIN;
	volatile int32_t t36 = -5303;

	t36 = (x149/(x150|(x151|x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = -1;
	static volatile int8_t x155 = INT8_MIN;
	uint64_t t37 = 245787630LLU;

	t37 = (x153/(x154|(x155|x156)));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x158 = INT64_MIN;
	int64_t x159 = 29507LL;
	uint16_t x160 = 3004U;

	t38 = (x157/(x158|(x159|x160)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x161 = INT8_MIN;
	static uint16_t x162 = 3U;
	static int16_t x163 = INT16_MAX;
	int8_t x164 = INT8_MIN;
	volatile int32_t t39 = -93103472;

	t39 = (x161/(x162|(x163|x164)));

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x165 = -1;
	int64_t x166 = -222374LL;
	static int8_t x167 = INT8_MIN;
	uint64_t x168 = 4065019LLU;

	t40 = (x165/(x166|(x167|x168)));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = INT32_MIN;
	uint8_t x170 = UINT8_MAX;
	int8_t x171 = -3;
	uint32_t x172 = 9U;
	volatile uint32_t t41 = 626627736U;

	t41 = (x169/(x170|(x171|x172)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x174 = 66U;
	int16_t x175 = 10;
	int32_t x176 = -323030;
	uint32_t t42 = 3478U;

	t42 = (x173/(x174|(x175|x176)));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x178 = 49626195LL;
	volatile uint16_t x179 = 137U;
	volatile uint32_t x180 = UINT32_MAX;
	volatile int64_t t43 = 796LL;

	t43 = (x177/(x178|(x179|x180)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = 41815620201962434LLU;
	int16_t x182 = INT16_MIN;
	int8_t x184 = INT8_MIN;
	volatile uint64_t t44 = 152293LLU;

	t44 = (x181/(x182|(x183|x184)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x185 = UINT32_MAX;
	uint16_t x186 = UINT16_MAX;
	int32_t x188 = INT32_MIN;
	volatile uint32_t t45 = 197516U;

	t45 = (x185/(x186|(x187|x188)));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = -20471269803LL;
	int32_t x191 = INT32_MIN;
	uint8_t x192 = 12U;
	volatile int64_t t46 = 333655286693521559LL;

	t46 = (x189/(x190|(x191|x192)));

	if (t46 != 9LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = UINT32_MAX;
	int16_t x194 = 282;
	int32_t x195 = INT32_MAX;
	int16_t x196 = -3;
	uint32_t t47 = 18U;

	t47 = (x193/(x194|(x195|x196)));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x201 = 1002U;
	static uint64_t x202 = 104879528111691LLU;
	int32_t x203 = INT32_MAX;
	volatile int8_t x204 = INT8_MIN;
	uint64_t t48 = 12227017392984LLU;

	t48 = (x201/(x202|(x203|x204)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x206 = INT8_MAX;
	uint32_t x207 = UINT32_MAX;
	volatile int16_t x208 = 5528;
	static volatile uint32_t t49 = 558U;

	t49 = (x205/(x206|(x207|x208)));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = -1;
	static int8_t x210 = -1;
	static uint32_t x211 = UINT32_MAX;
	int32_t x212 = INT32_MIN;

	t50 = (x209/(x210|(x211|x212)));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x214 = 2762225103LLU;
	int8_t x215 = INT8_MAX;
	static uint32_t x216 = 229048622U;
	uint64_t t51 = 3095LLU;

	t51 = (x213/(x214|(x215|x216)));

	if (t51 != 6331653159LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x217 = INT64_MIN;
	int16_t x218 = 0;
	volatile int8_t x219 = INT8_MIN;
	int64_t x220 = INT64_MIN;
	volatile int64_t t52 = 156089LL;

	t52 = (x217/(x218|(x219|x220)));

	if (t52 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x221 = -3062;
	int64_t x222 = INT64_MAX;
	int32_t x224 = INT32_MAX;
	volatile int64_t t53 = -96LL;

	t53 = (x221/(x222|(x223|x224)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x225 = INT16_MAX;
	static volatile int8_t x226 = -1;
	int32_t x227 = INT32_MIN;
	volatile int32_t t54 = 21777;

	t54 = (x225/(x226|(x227|x228)));

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x229 = 246769646;
	int32_t x230 = INT32_MIN;
	int16_t x232 = INT16_MAX;
	static int32_t t55 = -49;

	t55 = (x229/(x230|(x231|x232)));

	if (t55 != -246769646) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = -1;
	int32_t x234 = INT32_MIN;
	int32_t x235 = 74588;
	static int32_t x236 = INT32_MAX;
	int32_t t56 = 46;

	t56 = (x233/(x234|(x235|x236)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x237 = UINT8_MAX;
	uint32_t x238 = UINT32_MAX;
	uint16_t x239 = 43U;
	uint32_t x240 = UINT32_MAX;
	static volatile uint32_t t57 = 19041U;

	t57 = (x237/(x238|(x239|x240)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x241 = 0U;
	volatile uint8_t x242 = UINT8_MAX;
	static volatile uint64_t x243 = UINT64_MAX;
	int8_t x244 = -52;
	volatile uint64_t t58 = 266592706576764172LLU;

	t58 = (x241/(x242|(x243|x244)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = -1;
	uint8_t x246 = UINT8_MAX;
	static uint8_t x247 = 18U;
	static int64_t x248 = -1LL;

	t59 = (x245/(x246|(x247|x248)));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = UINT16_MAX;
	uint32_t x250 = 317861903U;
	uint64_t x251 = 1999048LLU;

	t60 = (x249/(x250|(x251|x252)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x253 = 223554637295LLU;
	static int8_t x255 = 0;
	volatile uint32_t x256 = 3808U;
	volatile uint64_t t61 = 137205878704701411LLU;

	t61 = (x253/(x254|(x255|x256)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x257 = -100006;
	static volatile int32_t x258 = INT32_MIN;
	static int32_t x259 = -1;
	int32_t x260 = INT32_MIN;
	int32_t t62 = -1;

	t62 = (x257/(x258|(x259|x260)));

	if (t62 != 100006) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x262 = INT8_MIN;
	static int64_t x263 = INT64_MIN;
	int8_t x264 = INT8_MIN;
	int64_t t63 = 982047LL;

	t63 = (x261/(x262|(x263|x264)));

	if (t63 != -12LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x265 = INT16_MAX;
	int64_t x266 = 1564956LL;
	int8_t x267 = 0;
	volatile uint64_t x268 = 226712LLU;
	volatile uint64_t t64 = 71823385447LLU;

	t64 = (x265/(x266|(x267|x268)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x269 = 14U;
	volatile uint8_t x271 = 1U;
	int64_t t65 = -21464581393179008LL;

	t65 = (x269/(x270|(x271|x272)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x273 = 80U;
	int16_t x274 = -3868;
	uint16_t x276 = 225U;

	t66 = (x273/(x274|(x275|x276)));

	if (t66 != -80) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x277 = INT16_MIN;
	volatile uint64_t x278 = UINT64_MAX;
	volatile uint16_t x280 = 6U;
	uint64_t t67 = 324606187957403354LLU;

	t67 = (x277/(x278|(x279|x280)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x285 = 43U;
	uint64_t x286 = UINT64_MAX;
	int8_t x287 = -1;
	volatile uint64_t t68 = 15170LLU;

	t68 = (x285/(x286|(x287|x288)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x289 = 14105U;
	int32_t x290 = INT32_MIN;
	int16_t x291 = INT16_MIN;
	uint16_t x292 = UINT16_MAX;
	static uint32_t t69 = 891561U;

	t69 = (x289/(x290|(x291|x292)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x293 = 48;
	static int16_t x294 = INT16_MAX;
	uint32_t x295 = UINT32_MAX;
	static uint32_t x296 = 7015U;
	uint32_t t70 = 198U;

	t70 = (x293/(x294|(x295|x296)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x299 = 70880139255052225LLU;
	uint8_t x300 = UINT8_MAX;
	uint64_t t71 = 2991223888LLU;

	t71 = (x297/(x298|(x299|x300)));

	if (t71 != 130LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x301 = 19129689658073232LLU;
	int32_t x302 = INT32_MIN;
	uint16_t x303 = UINT16_MAX;
	int32_t x304 = INT32_MAX;
	uint64_t t72 = 54289LLU;

	t72 = (x301/(x302|(x303|x304)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x305 = INT64_MIN;
	uint32_t x306 = 1870U;
	int16_t x307 = INT16_MIN;
	uint8_t x308 = UINT8_MAX;

	t73 = (x305/(x306|(x307|x308)));

	if (t73 != -2147499008LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = -1;
	static int32_t x310 = -1;
	int32_t x311 = INT32_MAX;
	volatile int32_t t74 = -856;

	t74 = (x309/(x310|(x311|x312)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x314 = 822534769U;
	static int8_t x315 = -1;
	uint16_t x316 = 11826U;
	static uint32_t t75 = 515859114U;

	t75 = (x313/(x314|(x315|x316)));

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = -140;
	int8_t x318 = 8;
	int32_t x319 = 17;
	int32_t t76 = 618693906;

	t76 = (x317/(x318|(x319|x320)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = -6;
	int32_t x323 = -1;
	volatile int32_t t77 = 1;

	t77 = (x321/(x322|(x323|x324)));

	if (t77 != 6) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x325 = -180;
	static int64_t x326 = -1LL;
	uint32_t x327 = UINT32_MAX;
	static volatile int64_t t78 = 2358586120456LL;

	t78 = (x325/(x326|(x327|x328)));

	if (t78 != 180LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x329 = INT8_MAX;
	int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MAX;
	int32_t t79 = -218;

	t79 = (x329/(x330|(x331|x332)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x333 = INT16_MIN;
	volatile uint16_t x334 = 1119U;
	int64_t x335 = INT64_MAX;
	volatile int16_t x336 = INT16_MAX;

	t80 = (x333/(x334|(x335|x336)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = INT16_MAX;
	int8_t x338 = -1;
	volatile int64_t t81 = -1023LL;

	t81 = (x337/(x338|(x339|x340)));

	if (t81 != -32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = UINT64_MAX;
	int16_t x343 = -1;
	uint8_t x344 = 42U;
	static volatile uint64_t t82 = 915960232064352753LLU;

	t82 = (x341/(x342|(x343|x344)));

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x345 = 2621LLU;
	uint32_t x346 = 0U;
	static volatile int16_t x347 = -1;
	volatile uint64_t t83 = 2124542061LLU;

	t83 = (x345/(x346|(x347|x348)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x350 = INT64_MIN;
	uint32_t x351 = 75275U;
	uint8_t x352 = 2U;
	static volatile int64_t t84 = -14119220539448143LL;

	t84 = (x349/(x350|(x351|x352)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = -1;
	uint8_t x354 = UINT8_MAX;
	uint32_t x355 = 1458505U;
	volatile int32_t x356 = INT32_MIN;
	volatile uint32_t t85 = 644U;

	t85 = (x353/(x354|(x355|x356)));

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x357 = 3268510U;
	static uint8_t x360 = 0U;
	uint32_t t86 = 0U;

	t86 = (x357/(x358|(x359|x360)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x361 = UINT16_MAX;
	uint64_t x362 = 322753LLU;
	int16_t x364 = -1;
	volatile uint64_t t87 = 591594376095479LLU;

	t87 = (x361/(x362|(x363|x364)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x366 = 0;
	uint32_t x367 = UINT32_MAX;
	volatile int32_t x368 = INT32_MIN;
	static uint32_t t88 = 1609803138U;

	t88 = (x365/(x366|(x367|x368)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = -18;
	static int16_t x374 = -1;
	int32_t x375 = INT32_MIN;
	volatile int32_t t89 = -152;

	t89 = (x373/(x374|(x375|x376)));

	if (t89 != 18) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x377 = 50037741635LLU;
	int8_t x378 = -34;
	uint16_t x379 = UINT16_MAX;
	int8_t x380 = 1;

	t90 = (x377/(x378|(x379|x380)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = -1;
	uint8_t x383 = UINT8_MAX;
	volatile int64_t t91 = -474282419LL;

	t91 = (x381/(x382|(x383|x384)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x386 = INT8_MIN;
	uint8_t x387 = UINT8_MAX;
	int32_t x388 = 166107838;
	volatile int32_t t92 = 374;

	t92 = (x385/(x386|(x387|x388)));

	if (t92 != 32768) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = 6325866495665950LL;
	volatile int32_t x391 = 519273356;
	static int16_t x392 = INT16_MIN;
	volatile int64_t t93 = -24775750647443480LL;

	t93 = (x389/(x390|(x391|x392)));

	if (t93 != -3162933247832975LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x393 = UINT16_MAX;
	static uint32_t x394 = 765U;
	uint16_t x395 = UINT16_MAX;
	volatile uint32_t t94 = 1712U;

	t94 = (x393/(x394|(x395|x396)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x397 = UINT8_MAX;
	uint32_t x398 = 3340U;
	int8_t x400 = 0;

	t95 = (x397/(x398|(x399|x400)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x402 = 9U;
	int16_t x403 = INT16_MIN;
	volatile int64_t t96 = 1937541LL;

	t96 = (x401/(x402|(x403|x404)));

	if (t96 != 32768LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x406 = INT64_MIN;
	uint64_t x407 = 1041581862LLU;
	uint64_t t97 = 742LLU;

	t97 = (x405/(x406|(x407|x408)));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x410 = -2571;
	uint32_t x411 = UINT32_MAX;
	static int64_t t98 = 1525LL;

	t98 = (x409/(x410|(x411|x412)));

	if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x413 = 132927390LL;
	uint32_t x414 = 3005160U;
	volatile int8_t x415 = INT8_MAX;
	int8_t x416 = INT8_MIN;

	t99 = (x413/(x414|(x415|x416)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

