#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = -1LL;
volatile uint64_t x19 = 2386618LLU;
volatile int64_t x24 = -1LL;
uint32_t x25 = 1337U;
int32_t x28 = 206791;
static volatile uint64_t t6 = 937234555777LLU;
volatile uint64_t x39 = UINT64_MAX;
volatile int16_t x40 = INT16_MIN;
uint8_t x44 = 1U;
static int16_t x52 = INT16_MAX;
volatile int64_t t11 = -19900122LL;
int16_t x53 = INT16_MIN;
int64_t x57 = INT64_MAX;
int8_t x58 = 1;
int8_t x62 = INT8_MAX;
int64_t x63 = INT64_MIN;
static int8_t x64 = INT8_MAX;
uint8_t x76 = 40U;
int8_t x78 = -3;
static uint64_t x84 = UINT64_MAX;
volatile int64_t x91 = -1LL;
uint8_t x96 = 1U;
static uint8_t x99 = 1U;
uint8_t x106 = UINT8_MAX;
uint64_t x109 = 757171691307LLU;
int16_t x115 = INT16_MIN;
uint8_t x116 = UINT8_MAX;
int32_t x119 = -1;
int8_t x120 = INT8_MAX;
int64_t x129 = -159585826729325LL;
volatile uint8_t x133 = 3U;
uint32_t x134 = 10421U;
volatile int64_t t31 = -595LL;
volatile uint64_t t33 = 52989373LLU;
int8_t x150 = INT8_MIN;
uint64_t x155 = 8034204203845028768LLU;
volatile int32_t x163 = INT32_MAX;
uint32_t x169 = 3178U;
static uint64_t t38 = 680105LLU;
int8_t x180 = -1;
uint8_t x184 = 37U;
volatile int32_t x188 = INT32_MIN;
volatile uint64_t x189 = 810LLU;
volatile uint64_t t43 = 0LLU;
uint8_t x194 = 8U;
int16_t x197 = INT16_MAX;
volatile uint64_t t45 = 7003478864107353LLU;
int32_t x206 = -749232613;
int32_t t51 = 3;
int32_t x238 = INT32_MAX;
volatile int32_t t52 = -2533;
static volatile int16_t x245 = -1;
volatile uint32_t t54 = 59631182U;
uint32_t x257 = 535298675U;
int64_t x259 = -21LL;
uint8_t x260 = 11U;
static int16_t x261 = -95;
volatile int32_t t60 = -197;
uint32_t x279 = 710U;
static int8_t x283 = INT8_MAX;
int32_t x291 = 9371663;
static uint16_t x307 = UINT16_MAX;
static volatile int64_t x314 = -3184288LL;
static int16_t x318 = 7;
static int64_t x320 = INT64_MAX;
int64_t x322 = INT64_MAX;
int8_t x329 = INT8_MIN;
volatile int64_t t74 = -3LL;
uint16_t x342 = 36U;
volatile int64_t x343 = INT64_MAX;
uint64_t x350 = 310667649612LLU;
volatile int16_t x351 = -1;
int64_t x359 = 2774666523419349970LL;
volatile uint64_t t80 = 3692310LLU;
uint64_t x368 = 25LLU;
volatile uint64_t t81 = 354LLU;
static int32_t x369 = INT32_MIN;
static volatile int64_t x370 = -1LL;
static int64_t x379 = INT64_MIN;
static int64_t x386 = -349593790643385LL;
volatile int8_t x389 = 1;
uint64_t t87 = 5674761615261LLU;
int64_t x401 = INT64_MAX;
int32_t x402 = 3185170;
int8_t x403 = INT8_MAX;
uint32_t x405 = 20U;
int32_t x413 = -1;
static int32_t x418 = INT32_MIN;
int16_t x419 = -1;
uint8_t x421 = 0U;
int32_t x430 = INT32_MIN;
uint64_t x432 = 0LLU;
uint8_t x436 = UINT8_MAX;
volatile int64_t x437 = 3295234686430LL;
int64_t x438 = INT64_MAX;
int32_t x441 = 224;
volatile int32_t t99 = 376192274;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	uint32_t x2 = UINT32_MAX;
	static int64_t x3 = -1LL;
	uint8_t x4 = 0U;
	int64_t t0 = -440429307300LL;

	t0 = (x1%(x2&(x3|x4)));

	if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 63434304U;
	uint32_t x10 = UINT32_MAX;
	volatile int32_t x12 = 16;
	volatile int64_t t1 = 7372849006172571LL;

	t1 = (x9%(x10&(x11|x12)));

	if (t1 != 63434304LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	static int8_t x14 = INT8_MIN;
	int8_t x15 = 1;
	int32_t x16 = INT32_MIN;
	volatile int64_t t2 = -113LL;

	t2 = (x13%(x14&(x15|x16)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	volatile int8_t x18 = INT8_MAX;
	static int8_t x20 = 6;
	uint64_t t3 = 945446385553351LLU;

	t3 = (x17%(x18&(x19|x20)));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 3745U;
	int8_t x22 = INT8_MIN;
	uint16_t x23 = 619U;
	volatile int64_t t4 = -218LL;

	t4 = (x21%(x22&(x23|x24)));

	if (t4 != 33LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x26 = -53421901;
	uint16_t x27 = 6U;
	uint32_t t5 = 396922U;

	t5 = (x25%(x26&(x27|x28)));

	if (t5 != 27U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 8U;
	uint64_t x30 = 40LLU;
	int64_t x31 = 23455348844LL;
	uint64_t x32 = UINT64_MAX;

	t6 = (x29%(x30&(x31|x32)));

	if (t6 != 8LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x33 = INT64_MAX;
	static uint32_t x34 = 372U;
	volatile uint64_t x35 = UINT64_MAX;
	uint8_t x36 = 47U;
	volatile uint64_t t7 = 903580LLU;

	t7 = (x33%(x34&(x35|x36)));

	if (t7 != 7LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 249U;
	int8_t x38 = 3;
	uint64_t t8 = 2903439584LLU;

	t8 = (x37%(x38&(x39|x40)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x41 = 114034739680011LLU;
	int32_t x42 = INT32_MIN;
	int8_t x43 = -1;
	volatile uint64_t t9 = 57LLU;

	t9 = (x41%(x42&(x43|x44)));

	if (t9 != 114034739680011LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MIN;
	int64_t x47 = -1559818742089085019LL;
	static uint16_t x48 = 2U;
	int64_t t10 = -1077925796277LL;

	t10 = (x45%(x46&(x47|x48)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = INT16_MIN;
	int32_t x50 = -17945;
	int64_t x51 = 875857LL;

	t11 = (x49%(x50&(x51|x52)));

	if (t11 != -32768LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x54 = INT32_MIN;
	static volatile int32_t x55 = -304;
	uint8_t x56 = 0U;
	volatile int32_t t12 = -2441;

	t12 = (x53%(x54&(x55|x56)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x59 = 25U;
	int8_t x60 = -4;
	static int64_t t13 = 120118243576257316LL;

	t13 = (x57%(x58&(x59|x60)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = 48366LL;
	static int64_t t14 = -1036472914052LL;

	t14 = (x61%(x62&(x63|x64)));

	if (t14 != 106LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = 96705958867674LL;
	int16_t x66 = 15;
	volatile int16_t x67 = 7815;
	int8_t x68 = INT8_MAX;
	static int64_t t15 = -10910761015LL;

	t15 = (x65%(x66&(x67|x68)));

	if (t15 != 9LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x69 = INT64_MAX;
	static uint64_t x70 = 33087018353LLU;
	static int16_t x71 = INT16_MAX;
	int32_t x72 = INT32_MIN;
	uint64_t t16 = 1418254262730188976LLU;

	t16 = (x69%(x70&(x71|x72)));

	if (t16 != 20620109713LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MAX;
	int16_t x74 = -1;
	volatile int8_t x75 = -1;
	int32_t t17 = 128705;

	t17 = (x73%(x74&(x75|x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x77 = UINT32_MAX;
	static uint8_t x79 = 43U;
	uint8_t x80 = 71U;
	uint32_t t18 = 1U;

	t18 = (x77%(x78&(x79|x80)));

	if (t18 != 74U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = 113802U;
	volatile uint64_t x82 = 1LLU;
	static int32_t x83 = -28282;
	volatile uint64_t t19 = 15289521LLU;

	t19 = (x81%(x82&(x83|x84)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x89 = INT64_MIN;
	int16_t x90 = -1;
	int64_t x92 = INT64_MIN;
	volatile int64_t t20 = -3260264487009LL;

	t20 = (x89%(x90&(x91|x92)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = 1;
	uint64_t x94 = 3304918LLU;
	static uint32_t x95 = 900U;
	uint64_t t21 = 8536LLU;

	t21 = (x93%(x94&(x95|x96)));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = -1LL;
	int64_t x98 = INT64_MIN;
	uint64_t x100 = UINT64_MAX;
	volatile uint64_t t22 = 3LLU;

	t22 = (x97%(x98&(x99|x100)));

	if (t22 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x101 = 25771987180LL;
	uint32_t x102 = 467059856U;
	int16_t x103 = INT16_MAX;
	int64_t x104 = -1032975074474467LL;
	static int64_t t23 = 59724816LL;

	t23 = (x101%(x102&(x103|x104)));

	if (t23 != 314381820LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MIN;
	uint64_t x107 = 5LLU;
	static int32_t x108 = 6;
	uint64_t t24 = 25451684628790LLU;

	t24 = (x105%(x106&(x107|x108)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x110 = 474;
	int64_t x111 = INT64_MIN;
	static uint32_t x112 = 2U;
	uint64_t t25 = 236LLU;

	t25 = (x109%(x110&(x111|x112)));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x113 = UINT32_MAX;
	int64_t x114 = -1LL;
	int64_t t26 = 49225427159517384LL;

	t26 = (x113%(x114&(x115|x116)));

	if (t26 != 32508LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = 6U;
	uint64_t x118 = 1101LLU;
	volatile uint64_t t27 = 71814484052966599LLU;

	t27 = (x117%(x118&(x119|x120)));

	if (t27 != 6LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x121 = 147U;
	static int32_t x122 = -1;
	int64_t x123 = INT64_MIN;
	int16_t x124 = INT16_MAX;
	volatile int64_t t28 = 116341161LL;

	t28 = (x121%(x122&(x123|x124)));

	if (t28 != 147LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x125 = -1LL;
	static int64_t x126 = 438955608LL;
	uint32_t x127 = 13U;
	volatile int8_t x128 = INT8_MAX;
	int64_t t29 = -6499LL;

	t29 = (x125%(x126&(x127|x128)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x130 = UINT32_MAX;
	static int32_t x131 = INT32_MIN;
	int32_t x132 = INT32_MAX;
	int64_t t30 = -123862567348800722LL;

	t30 = (x129%(x130&(x131|x132)));

	if (t30 != -2021916305LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x135 = INT64_MAX;
	uint16_t x136 = UINT16_MAX;

	t31 = (x133%(x134&(x135|x136)));

	if (t31 != 3LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = INT32_MAX;
	int16_t x142 = INT16_MAX;
	int32_t x143 = INT32_MAX;
	int64_t x144 = INT64_MIN;
	volatile int64_t t32 = 3766027491LL;

	t32 = (x141%(x142&(x143|x144)));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = -1;
	uint64_t x146 = UINT64_MAX;
	int16_t x147 = INT16_MAX;
	static int8_t x148 = -1;

	t33 = (x145%(x146&(x147|x148)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = INT32_MIN;
	int8_t x151 = INT8_MIN;
	int16_t x152 = INT16_MIN;
	volatile int32_t t34 = -18390902;

	t34 = (x149%(x150&(x151|x152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = 1185;
	static uint32_t x154 = 2966358U;
	uint64_t x156 = UINT64_MAX;
	uint64_t t35 = 339031608098LLU;

	t35 = (x153%(x154&(x155|x156)));

	if (t35 != 1185LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MAX;
	int64_t x159 = -23717365497586LL;
	static int64_t x160 = -1LL;
	volatile int64_t t36 = -28245048601479127LL;

	t36 = (x157%(x158&(x159|x160)));

	if (t36 != -8LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x161 = 508851;
	volatile int8_t x162 = INT8_MIN;
	uint8_t x164 = 2U;
	volatile int32_t t37 = 537152;

	t37 = (x161%(x162&(x163|x164)));

	if (t37 != 508851) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x170 = INT8_MIN;
	uint64_t x171 = 322199LLU;
	int8_t x172 = -1;

	t38 = (x169%(x170&(x171|x172)));

	if (t38 != 3178LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = -87689705003LL;
	int64_t x174 = -19469836084664LL;
	int32_t x175 = 1003205;
	int8_t x176 = -1;
	static int64_t t39 = 51726296084171LL;

	t39 = (x173%(x174&(x175|x176)));

	if (t39 != -87689705003LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x177 = 0U;
	int16_t x178 = 2863;
	static int32_t x179 = INT32_MIN;
	volatile int32_t t40 = 39;

	t40 = (x177%(x178&(x179|x180)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x181 = 3512213257453254LLU;
	int8_t x182 = 14;
	uint64_t x183 = UINT64_MAX;
	uint64_t t41 = 1826469575875485LLU;

	t41 = (x181%(x182&(x183|x184)));

	if (t41 != 4LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = -13564;
	int8_t x186 = INT8_MIN;
	static uint16_t x187 = UINT16_MAX;
	static int32_t t42 = 378;

	t42 = (x185%(x186&(x187|x188)));

	if (t42 != -13564) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x190 = 1900U;
	static int64_t x191 = INT64_MAX;
	int16_t x192 = INT16_MIN;

	t43 = (x189%(x190&(x191|x192)));

	if (t43 != 810LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x193 = 66LLU;
	static uint8_t x195 = UINT8_MAX;
	static int16_t x196 = 113;
	uint64_t t44 = 323599380407330414LLU;

	t44 = (x193%(x194&(x195|x196)));

	if (t44 != 2LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x198 = 6641601294245806230LLU;
	int8_t x199 = -1;
	volatile uint8_t x200 = UINT8_MAX;

	t45 = (x197%(x198&(x199|x200)));

	if (t45 != 32767LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = INT8_MAX;
	uint32_t x202 = 208310939U;
	static volatile int32_t x203 = INT32_MIN;
	volatile int8_t x204 = INT8_MIN;
	volatile uint32_t t46 = 183891756U;

	t46 = (x201%(x202&(x203|x204)));

	if (t46 != 127U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MAX;
	volatile int32_t x207 = -1;
	int8_t x208 = 2;
	static int32_t t47 = -3646;

	t47 = (x205%(x206&(x207|x208)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x209 = 55578722U;
	int64_t x210 = INT64_MIN;
	static int8_t x211 = 10;
	int16_t x212 = INT16_MIN;
	static int64_t t48 = 186965528570LL;

	t48 = (x209%(x210&(x211|x212)));

	if (t48 != 55578722LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = INT64_MAX;
	int32_t x222 = -840;
	int32_t x223 = INT32_MAX;
	int32_t x224 = INT32_MAX;
	int64_t t49 = 61170977LL;

	t49 = (x221%(x222&(x223|x224)));

	if (t49 != 1411199LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x225 = 2603U;
	uint8_t x226 = UINT8_MAX;
	uint32_t x227 = 49321U;
	uint16_t x228 = 4617U;
	uint32_t t50 = 89817526U;

	t50 = (x225%(x226&(x227|x228)));

	if (t50 != 68U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = INT8_MAX;
	int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;
	volatile int8_t x236 = INT8_MIN;

	t51 = (x233%(x234&(x235|x236)));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x237 = -4;
	int8_t x239 = INT8_MIN;
	int8_t x240 = INT8_MIN;

	t52 = (x237%(x238&(x239|x240)));

	if (t52 != -4) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = INT8_MAX;
	volatile uint64_t x242 = UINT64_MAX;
	static int64_t x243 = INT64_MAX;
	int16_t x244 = INT16_MIN;
	volatile uint64_t t53 = 4015031125LLU;

	t53 = (x241%(x242&(x243|x244)));

	if (t53 != 127LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x246 = 25622848U;
	int8_t x247 = 48;
	static int16_t x248 = -1;

	t54 = (x245%(x246&(x247|x248)));

	if (t54 != 15951679U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = -468307761LL;
	int8_t x250 = -8;
	int8_t x251 = -1;
	static uint32_t x252 = UINT32_MAX;
	volatile int64_t t55 = 80750LL;

	t55 = (x249%(x250&(x251|x252)));

	if (t55 != -468307761LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x253 = INT8_MIN;
	int64_t x254 = INT64_MAX;
	int8_t x255 = INT8_MAX;
	int64_t x256 = INT64_MIN;
	volatile int64_t t56 = -255LL;

	t56 = (x253%(x254&(x255|x256)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x258 = INT32_MIN;
	int64_t t57 = 26LL;

	t57 = (x257%(x258&(x259|x260)));

	if (t57 != 535298675LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x262 = INT8_MIN;
	volatile int8_t x263 = -2;
	int16_t x264 = INT16_MIN;
	volatile int32_t t58 = 86078;

	t58 = (x261%(x262&(x263|x264)));

	if (t58 != -95) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x265 = INT8_MIN;
	int32_t x266 = INT32_MIN;
	int16_t x267 = INT16_MIN;
	int32_t x268 = 0;
	int32_t t59 = -1327525;

	t59 = (x265%(x266&(x267|x268)));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = INT8_MAX;
	int8_t x270 = 19;
	static uint8_t x271 = 3U;
	static uint16_t x272 = 28U;

	t60 = (x269%(x270&(x271|x272)));

	if (t60 != 13) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x273 = 6LLU;
	int8_t x274 = -1;
	uint16_t x275 = UINT16_MAX;
	uint16_t x276 = 199U;
	static uint64_t t61 = 29641593534LLU;

	t61 = (x273%(x274&(x275|x276)));

	if (t61 != 6LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = INT8_MIN;
	uint32_t x278 = 15435350U;
	uint64_t x280 = 1360848479994281086LLU;
	volatile uint64_t t62 = 28936967142281LLU;

	t62 = (x277%(x278&(x279|x280)));

	if (t62 != 1126034LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x281 = 187635206LLU;
	volatile int8_t x282 = -1;
	uint16_t x284 = UINT16_MAX;
	uint64_t t63 = 27960340857391LLU;

	t63 = (x281%(x282&(x283|x284)));

	if (t63 != 8501LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x289 = 1380U;
	volatile uint8_t x290 = 2U;
	volatile int16_t x292 = INT16_MIN;
	int32_t t64 = 261939052;

	t64 = (x289%(x290&(x291|x292)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x297 = 1U;
	uint8_t x298 = 16U;
	int16_t x299 = -1;
	int64_t x300 = -2LL;
	int64_t t65 = -466079074136242LL;

	t65 = (x297%(x298&(x299|x300)));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = INT8_MAX;
	int64_t x302 = INT64_MIN;
	volatile int64_t x303 = INT64_MIN;
	volatile uint32_t x304 = 52118184U;
	int64_t t66 = 10388710666134544LL;

	t66 = (x301%(x302&(x303|x304)));

	if (t66 != 127LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x305 = 188174LL;
	static int16_t x306 = 3;
	int32_t x308 = INT32_MIN;
	int64_t t67 = 2LL;

	t67 = (x305%(x306&(x307|x308)));

	if (t67 != 2LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x309 = 0LL;
	volatile uint32_t x310 = UINT32_MAX;
	volatile uint32_t x311 = UINT32_MAX;
	int16_t x312 = -1;
	int64_t t68 = 1870122LL;

	t68 = (x309%(x310&(x311|x312)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x313 = 29U;
	int32_t x315 = -1;
	uint8_t x316 = 17U;
	volatile int64_t t69 = -2898348542LL;

	t69 = (x313%(x314&(x315|x316)));

	if (t69 != 29LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x317 = 120856LL;
	int16_t x319 = INT16_MIN;
	static volatile int64_t t70 = 1030918291401256LL;

	t70 = (x317%(x318&(x319|x320)));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x321 = UINT64_MAX;
	volatile int64_t x323 = -233LL;
	volatile int64_t x324 = 431336582013896369LL;
	static volatile uint64_t t71 = 119111646LLU;

	t71 = (x321%(x322&(x323|x324)));

	if (t71 != 145LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = INT8_MIN;
	int8_t x326 = -3;
	uint32_t x327 = 122485175U;
	int64_t x328 = 17388032999119LL;
	volatile int64_t t72 = 377529246481LL;

	t72 = (x325%(x326&(x327|x328)));

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x330 = 5U;
	int32_t x331 = INT32_MIN;
	uint8_t x332 = 117U;
	volatile int32_t t73 = -1;

	t73 = (x329%(x330&(x331|x332)));

	if (t73 != -3) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = INT64_MIN;
	volatile int32_t x334 = INT32_MIN;
	uint32_t x335 = 1093201044U;
	int16_t x336 = INT16_MIN;

	t74 = (x333%(x334&(x335|x336)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x341 = 526071969U;
	static uint32_t x344 = 415940U;
	static volatile int64_t t75 = 84895055835428238LL;

	t75 = (x341%(x342&(x343|x344)));

	if (t75 != 9LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x345 = INT32_MIN;
	int64_t x346 = INT64_MIN;
	int64_t x347 = -10LL;
	uint8_t x348 = UINT8_MAX;
	int64_t t76 = -3LL;

	t76 = (x345%(x346&(x347|x348)));

	if (t76 != -2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x349 = INT32_MIN;
	uint8_t x352 = UINT8_MAX;
	volatile uint64_t t77 = 5LLU;

	t77 = (x349%(x350&(x351|x352)));

	if (t77 != 214486682252LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x353 = -1;
	int16_t x354 = INT16_MIN;
	int64_t x355 = -1LL;
	volatile int64_t x356 = 13163290359LL;
	volatile int64_t t78 = -303231310595LL;

	t78 = (x353%(x354&(x355|x356)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x357 = -1759;
	static volatile int8_t x358 = -22;
	static int8_t x360 = INT8_MAX;
	static volatile int64_t t79 = -61858LL;

	t79 = (x357%(x358&(x359|x360)));

	if (t79 != -1759LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x361 = UINT8_MAX;
	static uint64_t x362 = UINT64_MAX;
	static volatile int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MAX;

	t80 = (x361%(x362&(x363|x364)));

	if (t80 != 255LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x365 = UINT32_MAX;
	int8_t x366 = -1;
	static uint16_t x367 = UINT16_MAX;

	t81 = (x365%(x366&(x367|x368)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MIN;
	volatile int64_t t82 = -5423137455631LL;

	t82 = (x369%(x370&(x371|x372)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = INT64_MIN;
	int32_t x374 = INT32_MIN;
	static int8_t x375 = -1;
	volatile int16_t x376 = 398;
	static volatile int64_t t83 = -993009614352LL;

	t83 = (x373%(x374&(x375|x376)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x377 = 3U;
	int16_t x378 = INT16_MIN;
	uint16_t x380 = 260U;
	static volatile int64_t t84 = -22111LL;

	t84 = (x377%(x378&(x379|x380)));

	if (t84 != 3LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x385 = 2U;
	volatile int64_t x387 = -1LL;
	int64_t x388 = INT64_MIN;
	volatile int64_t t85 = 124154LL;

	t85 = (x385%(x386&(x387|x388)));

	if (t85 != 2LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x390 = UINT64_MAX;
	uint16_t x391 = 3U;
	int16_t x392 = INT16_MIN;
	volatile uint64_t t86 = 8401420514685756LLU;

	t86 = (x389%(x390&(x391|x392)));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x393 = 40898LLU;
	volatile int64_t x394 = -1LL;
	int16_t x395 = INT16_MIN;
	uint8_t x396 = 77U;

	t87 = (x393%(x394&(x395|x396)));

	if (t87 != 40898LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x397 = 9U;
	int8_t x398 = INT8_MIN;
	volatile int32_t x399 = INT32_MIN;
	int32_t x400 = INT32_MIN;
	volatile int32_t t88 = 68;

	t88 = (x397%(x398&(x399|x400)));

	if (t88 != 9) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x404 = 15416731896637129LLU;
	volatile uint64_t t89 = 119863013393654LLU;

	t89 = (x401%(x402&(x403|x404)));

	if (t89 != 2797LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x406 = INT64_MAX;
	volatile uint64_t x407 = 6520993651899975886LLU;
	int64_t x408 = INT64_MAX;
	uint64_t t90 = 25LLU;

	t90 = (x405%(x406&(x407|x408)));

	if (t90 != 20LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x409 = -1;
	int32_t x410 = -2846281;
	int32_t x411 = INT32_MIN;
	int8_t x412 = INT8_MIN;
	int32_t t91 = -40;

	t91 = (x409%(x410&(x411|x412)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x414 = 51U;
	volatile int32_t x415 = -67;
	uint16_t x416 = 0U;
	volatile uint32_t t92 = 6U;

	t92 = (x413%(x414&(x415|x416)));

	if (t92 != 38U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x417 = UINT8_MAX;
	int8_t x420 = INT8_MAX;
	static int32_t t93 = 1;

	t93 = (x417%(x418&(x419|x420)));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x422 = 352U;
	volatile uint64_t x423 = 120560961344LLU;
	int16_t x424 = INT16_MIN;
	static volatile uint64_t t94 = 134489442359LLU;

	t94 = (x421%(x422&(x423|x424)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x425 = 30U;
	uint16_t x426 = UINT16_MAX;
	volatile int8_t x427 = INT8_MIN;
	int8_t x428 = -1;
	int32_t t95 = -18;

	t95 = (x425%(x426&(x427|x428)));

	if (t95 != 30) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x429 = INT32_MAX;
	int8_t x431 = INT8_MIN;
	volatile uint64_t t96 = 913484355LLU;

	t96 = (x429%(x430&(x431|x432)));

	if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x433 = 1345;
	volatile int64_t x434 = -920649510LL;
	int32_t x435 = INT32_MIN;
	int64_t t97 = -92499696104838231LL;

	t97 = (x433%(x434&(x435|x436)));

	if (t97 != 1345LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x439 = 1498;
	uint64_t x440 = UINT64_MAX;
	static uint64_t t98 = 5243837912681LLU;

	t98 = (x437%(x438&(x439|x440)));

	if (t98 != 3295234686430LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x442 = INT8_MIN;
	uint8_t x443 = 12U;
	static int32_t x444 = -1;

	t99 = (x441%(x442&(x443|x444)));

	if (t99 != 96) { NG(); } else { ; }
	
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

