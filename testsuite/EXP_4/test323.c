#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x4 = 0U;
static uint64_t x8 = UINT64_MAX;
uint16_t x9 = 8833U;
int16_t x10 = -1;
uint32_t x12 = UINT32_MAX;
int32_t t5 = -20450;
int64_t t6 = -248109309849LL;
static int64_t x30 = INT64_MIN;
int16_t x32 = -1;
int64_t t9 = 18093642717276477LL;
uint32_t x61 = 1028U;
static volatile int32_t x70 = INT32_MIN;
uint64_t t13 = 211241LLU;
static int16_t x75 = INT16_MAX;
uint64_t t15 = 0LLU;
uint16_t x87 = UINT16_MAX;
static int64_t t17 = -291233LL;
uint16_t x89 = 9U;
uint8_t x98 = 1U;
uint64_t x101 = 14550LLU;
uint16_t x104 = 1U;
uint32_t x115 = 8355121U;
int16_t x125 = INT16_MIN;
volatile uint64_t t26 = 339328457LLU;
static volatile uint64_t x132 = 253LLU;
volatile int64_t t29 = -40LL;
int64_t x145 = 3819430003899LL;
static int64_t x150 = 8725697096LL;
uint64_t x152 = UINT64_MAX;
uint32_t t34 = 35917U;
uint16_t x167 = 251U;
int32_t t36 = 2145726;
static int64_t x177 = INT64_MIN;
int16_t x191 = INT16_MIN;
volatile uint64_t t41 = UINT64_MAX;
volatile int16_t x197 = INT16_MAX;
int64_t t43 = INT64_MIN;
uint32_t t44 = 68U;
uint64_t x209 = UINT64_MAX;
int8_t x210 = INT8_MIN;
uint16_t x212 = 8987U;
int16_t x218 = -203;
int8_t x219 = INT8_MIN;
int32_t x234 = INT32_MAX;
static int32_t x240 = -27;
static uint64_t t51 = 34776259723LLU;
int16_t x245 = 29;
volatile uint64_t x249 = UINT64_MAX;
int16_t x256 = 31;
int16_t x269 = INT16_MAX;
int32_t x271 = INT32_MIN;
int8_t x274 = -1;
uint16_t x275 = 23810U;
int64_t x279 = 5LL;
int16_t x280 = INT16_MAX;
uint8_t x283 = 0U;
volatile int16_t x286 = 1211;
int16_t x295 = -5078;
static int8_t x301 = INT8_MAX;
uint64_t t67 = 41599LLU;
static int64_t t69 = 154LL;
int8_t x319 = INT8_MIN;
volatile int8_t x320 = -1;
int8_t x321 = 0;
int16_t x326 = 0;
int32_t x328 = -100066419;
volatile int32_t t73 = -417;
int8_t x337 = INT8_MIN;
volatile int32_t x339 = INT32_MAX;
int32_t t74 = 0;
int32_t x343 = -5;
static volatile uint64_t t75 = 101LLU;
int16_t x345 = INT16_MAX;
int64_t x346 = INT64_MAX;
int16_t x348 = 13492;
volatile int64_t t76 = 184LL;
int64_t x350 = INT64_MIN;
uint64_t x351 = 7959956LLU;
int8_t x352 = -1;
volatile uint64_t t77 = 47476128885325LLU;
volatile uint64_t t78 = 1448702582904624LLU;
static int8_t x368 = -61;
volatile int32_t t80 = 0;
volatile int32_t x378 = INT32_MIN;
int16_t x382 = -11422;
static int64_t x383 = -106424LL;
int16_t x394 = 2;
uint32_t x395 = 783336094U;
volatile int32_t x396 = -1;
static uint64_t x401 = UINT64_MAX;
volatile uint64_t t88 = 389828354LLU;
int16_t x408 = -4682;
volatile uint8_t x416 = UINT8_MAX;
int32_t x418 = INT32_MIN;
static uint32_t x421 = 144503273U;
int32_t x423 = -1;
volatile uint32_t x424 = 230347739U;
int64_t t92 = -5LL;
static volatile int64_t x428 = -1LL;
static uint16_t x429 = 2U;
uint16_t x431 = 29U;
int8_t x436 = -1;
int8_t x448 = INT8_MAX;
int32_t x451 = 0;
static volatile int64_t t99 = -62202LL;


void f0(void) {
	uint16_t x1 = 3619U;
	int32_t x2 = -1;
	volatile int32_t x3 = INT32_MAX;
	volatile int32_t t0 = 61373;

	t0 = (x1&(x2|(x3-x4)));

	if (t0 != 3619) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 58U;
	int32_t x6 = INT32_MIN;
	int32_t x7 = 5;
	static volatile uint64_t t1 = 131098163238LLU;

	t1 = (x5&(x6|(x7-x8)));

	if (t1 != 2LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x11 = 32453068383512729LL;
	volatile int64_t t2 = 70876431502LL;

	t2 = (x9&(x10|(x11-x12)));

	if (t2 != 8833LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = 52;
	volatile uint32_t x14 = UINT32_MAX;
	static int16_t x15 = -3480;
	volatile uint32_t x16 = 5113U;
	uint32_t t3 = 195U;

	t3 = (x13&(x14|(x15-x16)));

	if (t3 != 52U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 34U;
	static uint16_t x18 = 112U;
	uint8_t x19 = 20U;
	uint32_t x20 = 116429U;
	static uint32_t t4 = 483940U;

	t4 = (x17&(x18|(x19-x20)));

	if (t4 != 34U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int8_t x22 = INT8_MAX;
	uint8_t x23 = 25U;
	int8_t x24 = -62;

	t5 = (x21&(x22|(x23-x24)));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 675LL;
	static int64_t x26 = INT64_MAX;
	int64_t x27 = 6LL;
	uint8_t x28 = UINT8_MAX;

	t6 = (x25&(x26|(x27-x28)));

	if (t6 != 675LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 2U;
	uint64_t x31 = UINT64_MAX;
	volatile uint64_t t7 = 381750362342LLU;

	t7 = (x29&(x30|(x31-x32)));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 3246055043288LLU;
	uint64_t x38 = 1053243780844984LLU;
	int64_t x39 = INT64_MAX;
	volatile int8_t x40 = 1;
	static volatile uint64_t t8 = 199LLU;

	t8 = (x37&(x38|(x39-x40)));

	if (t8 != 3246055043288LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x41 = INT64_MAX;
	uint32_t x42 = 59U;
	static uint32_t x43 = 4U;
	int8_t x44 = INT8_MIN;

	t9 = (x41&(x42|(x43-x44)));

	if (t9 != 191LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = UINT8_MAX;
	int8_t x58 = INT8_MIN;
	uint16_t x59 = 32595U;
	int16_t x60 = INT16_MIN;
	volatile int32_t t10 = -14932017;

	t10 = (x57&(x58|(x59-x60)));

	if (t10 != 211) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x62 = UINT16_MAX;
	int16_t x63 = INT16_MIN;
	uint16_t x64 = 2768U;
	volatile uint32_t t11 = 508297142U;

	t11 = (x61&(x62|(x63-x64)));

	if (t11 != 1028U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x65 = 199618304U;
	volatile int16_t x66 = INT16_MAX;
	volatile uint32_t x67 = 3288U;
	static uint32_t x68 = UINT32_MAX;
	uint32_t t12 = 45242U;

	t12 = (x65&(x66|(x67-x68)));

	if (t12 != 28416U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x69 = UINT8_MAX;
	uint64_t x71 = 436912035346050665LLU;
	static volatile int32_t x72 = 15050;

	t13 = (x69&(x70|(x71-x72)));

	if (t13 != 159LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = INT32_MIN;
	static int16_t x74 = INT16_MIN;
	int32_t x76 = -1;
	static volatile int32_t t14 = INT32_MIN;

	t14 = (x73&(x74|(x75-x76)));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = -1;
	uint64_t x78 = 1099135603887778LLU;
	int8_t x79 = INT8_MIN;
	int32_t x80 = -1;

	t15 = (x77&(x78|(x79-x80)));

	if (t15 != 18446744073709551523LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x81 = UINT8_MAX;
	volatile uint64_t x82 = UINT64_MAX;
	volatile uint16_t x83 = 7977U;
	int32_t x84 = 38103377;
	uint64_t t16 = 7959883LLU;

	t16 = (x81&(x82|(x83-x84)));

	if (t16 != 255LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x85 = 0U;
	volatile uint8_t x86 = 2U;
	volatile int64_t x88 = -1LL;

	t17 = (x85&(x86|(x87-x88)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x90 = UINT8_MAX;
	int16_t x91 = 221;
	int8_t x92 = 0;
	int32_t t18 = 20931;

	t18 = (x89&(x90|(x91-x92)));

	if (t18 != 9) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MAX;
	int64_t x94 = INT64_MIN;
	static volatile int32_t x95 = INT32_MIN;
	volatile uint32_t x96 = UINT32_MAX;
	volatile int64_t t19 = 2600456862LL;

	t19 = (x93&(x94|(x95-x96)));

	if (t19 != 2147483649LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = -1;
	volatile uint32_t x99 = 59559993U;
	int8_t x100 = INT8_MAX;
	uint32_t t20 = 71U;

	t20 = (x97&(x98|(x99-x100)));

	if (t20 != 59559867U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x102 = 62520;
	int64_t x103 = 26939674145LL;
	volatile uint64_t t21 = 1520LLU;

	t21 = (x101&(x102|(x103-x104)));

	if (t21 != 14352LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x109 = UINT8_MAX;
	int64_t x110 = INT64_MIN;
	volatile int16_t x111 = INT16_MIN;
	static volatile int8_t x112 = INT8_MIN;
	int64_t t22 = -2130731254979037404LL;

	t22 = (x109&(x110|(x111-x112)));

	if (t22 != 128LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x113 = INT32_MAX;
	uint8_t x114 = UINT8_MAX;
	static int8_t x116 = INT8_MAX;
	volatile uint32_t t23 = 369116U;

	t23 = (x113&(x114|(x115-x116)));

	if (t23 != 8355071U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x117 = INT32_MIN;
	static volatile int8_t x118 = -1;
	int64_t x119 = INT64_MIN;
	int8_t x120 = INT8_MIN;
	int64_t t24 = 383018568529481912LL;

	t24 = (x117&(x118|(x119-x120)));

	if (t24 != -2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x121 = 65;
	int8_t x122 = INT8_MIN;
	int8_t x123 = INT8_MAX;
	uint8_t x124 = 104U;
	volatile int32_t t25 = -1;

	t25 = (x121&(x122|(x123-x124)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x126 = UINT64_MAX;
	volatile int64_t x127 = -1LL;
	uint8_t x128 = 1U;

	t26 = (x125&(x126|(x127-x128)));

	if (t26 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = 17;
	int16_t x130 = -1;
	static volatile int32_t x131 = INT32_MIN;
	volatile uint64_t t27 = 7851838012855LLU;

	t27 = (x129&(x130|(x131-x132)));

	if (t27 != 17LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x133 = 26;
	int32_t x134 = INT32_MIN;
	uint8_t x135 = UINT8_MAX;
	int16_t x136 = -61;
	static volatile int32_t t28 = 1;

	t28 = (x133&(x134|(x135-x136)));

	if (t28 != 24) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x137 = 25U;
	static int64_t x138 = INT64_MAX;
	volatile int8_t x139 = INT8_MIN;
	static int8_t x140 = -1;

	t29 = (x137&(x138|(x139-x140)));

	if (t29 != 25LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = -1;
	static uint64_t x142 = UINT64_MAX;
	uint64_t x143 = 363741759LLU;
	int8_t x144 = -1;
	uint64_t t30 = UINT64_MAX;

	t30 = (x141&(x142|(x143-x144)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x146 = UINT64_MAX;
	volatile uint16_t x147 = 20313U;
	int8_t x148 = -1;
	uint64_t t31 = 241LLU;

	t31 = (x145&(x146|(x147-x148)));

	if (t31 != 3819430003899LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x149 = UINT32_MAX;
	uint32_t x151 = 158933U;
	uint64_t t32 = 10310646LLU;

	t32 = (x149&(x150|(x151-x152)));

	if (t32 != 135790302LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x153 = -1;
	int8_t x154 = INT8_MIN;
	static int16_t x155 = INT16_MIN;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t33 = 2;

	t33 = (x153&(x154|(x155-x156)));

	if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x157 = 0U;
	uint32_t x158 = UINT32_MAX;
	uint16_t x159 = 5533U;
	static int32_t x160 = INT32_MAX;

	t34 = (x157&(x158|(x159-x160)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = INT8_MIN;
	int32_t x162 = 992398;
	uint64_t x163 = 250148862LLU;
	volatile uint8_t x164 = 3U;
	volatile uint64_t t35 = 26649328724LLU;

	t35 = (x161&(x162|(x163-x164)));

	if (t35 != 250607488LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x165 = -1;
	int8_t x166 = 24;
	int8_t x168 = INT8_MIN;

	t36 = (x165&(x166|(x167-x168)));

	if (t36 != 379) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = -1;
	int16_t x170 = 6;
	uint16_t x171 = UINT16_MAX;
	int16_t x172 = INT16_MIN;
	volatile int32_t t37 = -37;

	t37 = (x169&(x170|(x171-x172)));

	if (t37 != 98303) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x178 = INT32_MAX;
	int8_t x179 = INT8_MIN;
	int32_t x180 = 218664150;
	int64_t t38 = INT64_MIN;

	t38 = (x177&(x178|(x179-x180)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x185 = -46474270;
	uint16_t x186 = 7435U;
	static uint32_t x187 = 1691U;
	uint32_t x188 = 63U;
	uint32_t t39 = 198998613U;

	t39 = (x185&(x186|(x187-x188)));

	if (t39 != 6978U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x189 = UINT64_MAX;
	volatile int16_t x190 = INT16_MAX;
	static volatile int32_t x192 = 457;
	uint64_t t40 = 30072LLU;

	t40 = (x189&(x190|(x191-x192)));

	if (t40 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x193 = UINT64_MAX;
	static int32_t x194 = -1;
	uint16_t x195 = 78U;
	int32_t x196 = -2090;

	t41 = (x193&(x194|(x195-x196)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x198 = INT64_MIN;
	static volatile int16_t x199 = INT16_MAX;
	uint8_t x200 = 39U;
	static volatile int64_t t42 = -1275LL;

	t42 = (x197&(x198|(x199-x200)));

	if (t42 != 32728LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x201 = INT64_MIN;
	static int8_t x202 = INT8_MIN;
	int32_t x203 = -1;
	volatile int64_t x204 = -1LL;

	t43 = (x201&(x202|(x203-x204)));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x205 = -1;
	int8_t x206 = 16;
	uint8_t x207 = 2U;
	static uint32_t x208 = 10U;

	t44 = (x205&(x206|(x207-x208)));

	if (t44 != 4294967288U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x211 = 214840003296LLU;
	volatile uint64_t t45 = 123001072469830LLU;

	t45 = (x209&(x210|(x211-x212)));

	if (t45 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = INT64_MIN;
	static volatile int8_t x220 = INT8_MAX;
	static volatile int64_t t46 = INT64_MIN;

	t46 = (x217&(x218|(x219-x220)));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x221 = 62U;
	int16_t x222 = -1;
	int8_t x223 = INT8_MAX;
	volatile int32_t x224 = INT32_MAX;
	int32_t t47 = -962376;

	t47 = (x221&(x222|(x223-x224)));

	if (t47 != 62) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x225 = -21;
	volatile uint8_t x226 = 16U;
	static volatile uint64_t x227 = 297309LLU;
	int64_t x228 = INT64_MIN;
	volatile uint64_t t48 = 1872981626516966300LLU;

	t48 = (x225&(x226|(x227-x228)));

	if (t48 != 9223372036855073097LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x229 = -14262;
	volatile uint64_t x230 = 6LLU;
	uint32_t x231 = 1447491U;
	uint64_t x232 = 3117529LLU;
	uint64_t t49 = 33169217598534685LLU;

	t49 = (x229&(x230|(x231-x232)));

	if (t49 != 18446744073707880522LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	int64_t x236 = -2737996136364796LL;
	volatile int64_t t50 = 20243591115LL;

	t50 = (x233&(x234|(x235-x236)));

	if (t50 != 2737996554043264LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = INT8_MIN;
	static volatile uint64_t x238 = UINT64_MAX;
	uint32_t x239 = 114056140U;

	t51 = (x237&(x238|(x239-x240)));

	if (t51 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x241 = -1LL;
	static uint64_t x242 = UINT64_MAX;
	int16_t x243 = INT16_MIN;
	uint8_t x244 = 31U;
	static uint64_t t52 = UINT64_MAX;

	t52 = (x241&(x242|(x243-x244)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x246 = 5955226029LLU;
	int64_t x247 = -1LL;
	volatile int64_t x248 = -1LL;
	volatile uint64_t t53 = 9LLU;

	t53 = (x245&(x246|(x247-x248)));

	if (t53 != 13LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x250 = INT32_MAX;
	int64_t x251 = INT64_MIN;
	int32_t x252 = INT32_MIN;
	uint64_t t54 = 3134LLU;

	t54 = (x249&(x250|(x251-x252)));

	if (t54 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x253 = INT64_MIN;
	int32_t x254 = 1;
	int64_t x255 = INT64_MAX;
	static volatile int64_t t55 = -101581LL;

	t55 = (x253&(x254|(x255-x256)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x261 = UINT32_MAX;
	static int8_t x262 = 10;
	volatile uint64_t x263 = UINT64_MAX;
	uint16_t x264 = 6970U;
	uint64_t t56 = 2014334346848015LLU;

	t56 = (x261&(x262|(x263-x264)));

	if (t56 != 4294960335LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x265 = INT64_MIN;
	int32_t x266 = INT32_MIN;
	int32_t x267 = -8693902;
	uint64_t x268 = 269802000365229LLU;
	static uint64_t t57 = 273976772011590LLU;

	t57 = (x265&(x266|(x267-x268)));

	if (t57 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x270 = -1;
	int8_t x272 = -39;
	int32_t t58 = 7242;

	t58 = (x269&(x270|(x271-x272)));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x273 = 817U;
	volatile uint16_t x276 = 1U;
	static int32_t t59 = 5525432;

	t59 = (x273&(x274|(x275-x276)));

	if (t59 != 817) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x277 = 63;
	int16_t x278 = INT16_MAX;
	int64_t t60 = -486LL;

	t60 = (x277&(x278|(x279-x280)));

	if (t60 != 63LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x281 = INT32_MIN;
	int64_t x282 = -63596055535129209LL;
	uint64_t x284 = 1397664261LLU;
	uint64_t t61 = 2571036966637267LLU;

	t61 = (x281&(x282|(x283-x284)));

	if (t61 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x285 = UINT32_MAX;
	int64_t x287 = -3724LL;
	volatile uint8_t x288 = 24U;
	int64_t t62 = 3LL;

	t62 = (x285&(x286|(x287-x288)));

	if (t62 != 4294964735LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x289 = INT64_MIN;
	int32_t x290 = INT32_MIN;
	uint64_t x291 = 5639307774LLU;
	uint8_t x292 = 1U;
	uint64_t t63 = 2018318083079575434LLU;

	t63 = (x289&(x290|(x291-x292)));

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x293 = 2815004438378241LLU;
	static int16_t x294 = 1;
	int16_t x296 = -1;
	volatile uint64_t t64 = 22146983LLU;

	t64 = (x293&(x294|(x295-x296)));

	if (t64 != 2815004438373377LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x297 = -1;
	int16_t x298 = INT16_MIN;
	volatile uint64_t x299 = 4782788531733011032LLU;
	int16_t x300 = -1236;
	static volatile uint64_t t65 = 23820893319820LLU;

	t65 = (x297&(x298|(x299-x300)));

	if (t65 != 18446744073709526828LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x302 = INT64_MIN;
	uint8_t x303 = UINT8_MAX;
	static int64_t x304 = -4539LL;
	volatile int64_t t66 = -1265LL;

	t66 = (x301&(x302|(x303-x304)));

	if (t66 != 58LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x305 = 1;
	uint64_t x306 = UINT64_MAX;
	uint32_t x307 = 123533U;
	volatile int32_t x308 = -1;

	t67 = (x305&(x306|(x307-x308)));

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x309 = INT64_MIN;
	uint32_t x310 = 1223974U;
	int16_t x311 = -1;
	uint32_t x312 = 52232773U;
	static volatile int64_t t68 = -180002880LL;

	t68 = (x309&(x310|(x311-x312)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x313 = -695LL;
	static int16_t x314 = -1;
	int32_t x315 = INT32_MAX;
	volatile int32_t x316 = 7080;

	t69 = (x313&(x314|(x315-x316)));

	if (t69 != -695LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x317 = 2U;
	volatile int16_t x318 = -1;
	int32_t t70 = 2235;

	t70 = (x317&(x318|(x319-x320)));

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x322 = 1590U;
	static int8_t x323 = -1;
	static uint8_t x324 = 0U;
	volatile int32_t t71 = 6978529;

	t71 = (x321&(x322|(x323-x324)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = INT8_MAX;
	volatile int32_t x327 = -2;
	int32_t t72 = -2444341;

	t72 = (x325&(x326|(x327-x328)));

	if (t72 != 113) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x329 = 56U;
	uint16_t x330 = UINT16_MAX;
	volatile int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MAX;

	t73 = (x329&(x330|(x331-x332)));

	if (t73 != 56) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x338 = 3U;
	int16_t x340 = 11547;

	t74 = (x337&(x338|(x339-x340)));

	if (t74 != 2147472000) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x341 = 1;
	volatile int32_t x342 = INT32_MIN;
	static uint64_t x344 = 23581029537104LLU;

	t75 = (x341&(x342|(x343-x344)));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x347 = 6;

	t76 = (x345&(x346|(x347-x348)));

	if (t76 != 32767LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x349 = -67;

	t77 = (x349&(x350|(x351-x352)));

	if (t77 != 9223372036862735765LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x353 = 73615052033545337LLU;
	static uint8_t x354 = 3U;
	int64_t x355 = INT64_MIN;
	volatile int16_t x356 = -1;

	t78 = (x353&(x354|(x355-x356)));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = INT16_MIN;
	int8_t x358 = -1;
	int16_t x359 = INT16_MAX;
	volatile int64_t x360 = INT64_MAX;
	int64_t t79 = -188557603LL;

	t79 = (x357&(x358|(x359-x360)));

	if (t79 != -32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x365 = -125282;
	static int8_t x366 = 0;
	int16_t x367 = 58;

	t80 = (x365&(x366|(x367-x368)));

	if (t80 != 22) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x369 = INT64_MAX;
	int64_t x370 = INT64_MIN;
	uint8_t x371 = 0U;
	int64_t x372 = -1LL;
	static int64_t t81 = -36384LL;

	t81 = (x369&(x370|(x371-x372)));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x373 = 27U;
	int16_t x374 = INT16_MIN;
	int16_t x375 = -1;
	uint8_t x376 = UINT8_MAX;
	static int32_t t82 = 982175;

	t82 = (x373&(x374|(x375-x376)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x377 = INT8_MIN;
	int64_t x379 = 36845LL;
	uint32_t x380 = UINT32_MAX;
	int64_t t83 = -785345356LL;

	t83 = (x377&(x378|(x379-x380)));

	if (t83 != -2147446912LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x381 = -1;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t84 = 13313401969622LLU;

	t84 = (x381&(x382|(x383-x384)));

	if (t84 != 18446744073709548395LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x385 = 241U;
	static int16_t x386 = -5174;
	int64_t x387 = 35054375464LL;
	uint64_t x388 = 66613445813LLU;
	volatile uint64_t t85 = 48492237LLU;

	t85 = (x385&(x386|(x387-x388)));

	if (t85 != 241LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x393 = INT64_MIN;
	static volatile int64_t t86 = 2LL;

	t86 = (x393&(x394|(x395-x396)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x397 = 22109766LL;
	int64_t x398 = INT64_MIN;
	int16_t x399 = -1;
	volatile uint8_t x400 = 2U;
	volatile int64_t t87 = -1984547626LL;

	t87 = (x397&(x398|(x399-x400)));

	if (t87 != 22109764LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x402 = INT8_MAX;
	uint8_t x403 = 90U;
	int64_t x404 = 19LL;

	t88 = (x401&(x402|(x403-x404)));

	if (t88 != 127LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x405 = INT32_MAX;
	uint16_t x406 = UINT16_MAX;
	int8_t x407 = -1;
	int32_t t89 = 3;

	t89 = (x405&(x406|(x407-x408)));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x413 = -248418854;
	static int64_t x414 = -1812855612686408LL;
	uint16_t x415 = 256U;
	volatile int64_t t90 = -1LL;

	t90 = (x413&(x414|(x415-x416)));

	if (t90 != -1812855747695208LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x417 = INT32_MIN;
	uint8_t x419 = 7U;
	uint16_t x420 = 1506U;
	volatile int32_t t91 = INT32_MIN;

	t91 = (x417&(x418|(x419-x420)));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x422 = 65131LL;

	t92 = (x421&(x422|(x423-x424)));

	if (t92 != 323689LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = -1;
	int8_t x426 = -1;
	int16_t x427 = -1;
	int64_t t93 = 53471500LL;

	t93 = (x425&(x426|(x427-x428)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x430 = 342267870LLU;
	int8_t x432 = INT8_MIN;
	volatile uint64_t t94 = 3266LLU;

	t94 = (x429&(x430|(x431-x432)));

	if (t94 != 2LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x433 = INT64_MAX;
	int32_t x434 = INT32_MIN;
	int16_t x435 = -1;
	int64_t t95 = -9350LL;

	t95 = (x433&(x434|(x435-x436)));

	if (t95 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x437 = 2627;
	volatile int64_t x438 = -87155807LL;
	static uint32_t x439 = 746011U;
	int8_t x440 = INT8_MIN;
	int64_t t96 = 4787LL;

	t96 = (x437&(x438|(x439-x440)));

	if (t96 != 2563LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x441 = INT8_MIN;
	volatile uint32_t x442 = UINT32_MAX;
	int16_t x443 = INT16_MAX;
	volatile uint16_t x444 = 4U;
	uint32_t t97 = 85804U;

	t97 = (x441&(x442|(x443-x444)));

	if (t97 != 4294967168U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x445 = 7U;
	uint16_t x446 = 1194U;
	int64_t x447 = -1068204348674534453LL;
	int64_t t98 = -49846LL;

	t98 = (x445&(x446|(x447-x448)));

	if (t98 != 6LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x449 = UINT16_MAX;
	static int64_t x450 = INT64_MIN;
	int8_t x452 = 0;

	t99 = (x449&(x450|(x451-x452)));

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

