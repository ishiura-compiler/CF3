#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 76U;
volatile uint32_t t0 = 1799150542U;
int32_t x5 = INT32_MAX;
int16_t x6 = INT16_MAX;
volatile int32_t x10 = INT32_MAX;
int64_t t4 = -5588138953LL;
uint32_t x28 = 1772026872U;
volatile int64_t t5 = 1260397563LL;
uint64_t t6 = 12LLU;
int64_t x36 = -18706148078LL;
int8_t x44 = INT8_MIN;
int8_t x45 = INT8_MAX;
int64_t x50 = INT64_MIN;
int8_t x54 = -1;
int8_t x59 = 51;
volatile int16_t x60 = 1;
int16_t x61 = INT16_MIN;
uint32_t x74 = 159U;
int8_t x88 = -42;
int16_t x96 = INT16_MAX;
int64_t x104 = 1LL;
uint8_t x105 = UINT8_MAX;
volatile int16_t x107 = -2;
int16_t x113 = INT16_MIN;
static int16_t x120 = -245;
volatile int16_t x124 = -62;
static volatile int32_t t26 = -11937;
static int8_t x127 = 5;
static uint64_t x134 = UINT64_MAX;
uint64_t x140 = 1541906218555LLU;
volatile uint64_t t30 = 46LLU;
int32_t x145 = INT32_MIN;
int32_t x146 = -81492;
uint32_t x152 = 395612U;
volatile int32_t t34 = 0;
int32_t x166 = 103709;
uint8_t x172 = 0U;
uint64_t x177 = 190826443724961431LLU;
uint64_t x179 = 9265714LLU;
uint16_t x182 = 2U;
volatile int8_t x183 = -1;
uint64_t x186 = UINT64_MAX;
int8_t x192 = -23;
uint32_t t42 = 399064798U;
uint8_t x199 = UINT8_MAX;
int32_t x205 = -26755470;
volatile int8_t x220 = INT8_MIN;
static int64_t x221 = -1207048915975312LL;
int32_t x225 = INT32_MIN;
static volatile int64_t x237 = INT64_MIN;
int16_t x239 = -80;
static uint32_t x242 = UINT32_MAX;
static uint64_t x247 = UINT64_MAX;
uint64_t t57 = 76726829241581142LLU;
uint32_t x255 = UINT32_MAX;
uint64_t x259 = 349580LLU;
int8_t x260 = INT8_MIN;
uint32_t x261 = UINT32_MAX;
volatile int8_t x263 = -35;
int64_t t61 = 1LL;
volatile int32_t t64 = -146923;
static int64_t x299 = -1LL;
static uint32_t x300 = UINT32_MAX;
int32_t x309 = -18155;
int64_t x310 = 217519602LL;
int8_t x312 = INT8_MIN;
volatile uint64_t x313 = UINT64_MAX;
uint64_t t69 = 28705619LLU;
int16_t x319 = -1;
static int64_t x320 = 331811540754LL;
volatile uint64_t t71 = 20217227LLU;
int16_t x326 = -1;
volatile int64_t t72 = 13248LL;
volatile uint8_t x329 = 30U;
uint64_t x334 = 1918LLU;
uint8_t x336 = UINT8_MAX;
volatile uint64_t t74 = 21753271766217946LLU;
int8_t x344 = INT8_MIN;
uint8_t x353 = 3U;
int32_t x356 = INT32_MIN;
int16_t x370 = 30;
int8_t x372 = 41;
int32_t x375 = 62;
static int16_t x380 = -1;
uint64_t x387 = 108831573185385817LLU;
uint64_t x388 = 1527LLU;
static uint8_t x393 = UINT8_MAX;
volatile uint32_t x398 = UINT32_MAX;
int16_t x399 = -1;
int8_t x404 = -18;
static int32_t x413 = INT32_MAX;
volatile int64_t t90 = INT64_MAX;
int8_t x419 = INT8_MIN;
int32_t t92 = 2;
volatile int8_t x430 = INT8_MIN;
volatile int8_t x431 = -1;
uint64_t x433 = 3763589836172880LLU;
int32_t x436 = 202401253;
int16_t x442 = -1;
uint8_t x445 = 0U;
int16_t x451 = INT16_MIN;
uint64_t t98 = 5100197LLU;
static volatile uint32_t x454 = 39251418U;
uint64_t x455 = 10127268LLU;


void f0(void) {
	uint32_t x2 = 215256U;
	int32_t x3 = -148614888;
	volatile uint8_t x4 = 30U;

	t0 = ((x1%x2)|(x3-x4));

	if (t0 != 4146352382U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = INT64_MIN;
	int32_t x8 = INT32_MIN;
	volatile int64_t t1 = 1LL;

	t1 = ((x5%x6)|(x7-x8));

	if (t1 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -47416579988931LL;
	uint8_t x11 = 5U;
	int64_t x12 = 74747898LL;
	int64_t t2 = 515647751948756961LL;

	t2 = ((x9%x10)|(x11-x12));

	if (t2 != -6292481LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	volatile uint32_t x14 = UINT32_MAX;
	uint8_t x15 = UINT8_MAX;
	static volatile int16_t x16 = INT16_MIN;
	int64_t t3 = 111178LL;

	t3 = ((x13%x14)|(x15-x16));

	if (t3 != -2147450625LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	static int8_t x18 = 24;
	volatile int64_t x19 = -16556058LL;
	int16_t x20 = 4378;

	t4 = ((x17%x18)|(x19-x20));

	if (t4 != -16560433LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	static uint8_t x26 = 50U;
	volatile int64_t x27 = -3801252LL;

	t5 = ((x25%x26)|(x27-x28));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 31242U;
	int16_t x30 = -1;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = 192;

	t6 = ((x29%x30)|(x31-x32));

	if (t6 != 18446744073709551423LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = 137558805U;
	static uint64_t x34 = UINT64_MAX;
	int16_t x35 = INT16_MIN;
	volatile uint64_t t7 = 1286LLU;

	t7 = ((x33%x34)|(x35-x36));

	if (t7 != 18706267135LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 13U;
	int16_t x42 = -1;
	int8_t x43 = INT8_MAX;
	uint32_t t8 = 14669U;

	t8 = ((x41%x42)|(x43-x44));

	if (t8 != 255U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x46 = 37;
	static int16_t x47 = INT16_MIN;
	volatile int8_t x48 = INT8_MIN;
	static volatile int32_t t9 = 27639909;

	t9 = ((x45%x46)|(x47-x48));

	if (t9 != -32624) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 1U;
	uint8_t x51 = UINT8_MAX;
	int16_t x52 = INT16_MAX;
	int64_t t10 = 1586LL;

	t10 = ((x49%x50)|(x51-x52));

	if (t10 != -32511LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	volatile int8_t x55 = -1;
	volatile int64_t x56 = -440990412LL;
	volatile uint64_t t11 = 10278LLU;

	t11 = ((x53%x54)|(x55-x56));

	if (t11 != 440990411LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = UINT64_MAX;
	int8_t x58 = -1;
	uint64_t t12 = 5LLU;

	t12 = ((x57%x58)|(x59-x60));

	if (t12 != 50LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x62 = INT8_MAX;
	int32_t x63 = 275041;
	uint64_t x64 = 24641547947998654LLU;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = ((x61%x62)|(x63-x64));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = 47010LLU;
	int16_t x66 = INT16_MAX;
	static int16_t x67 = 276;
	int8_t x68 = INT8_MIN;
	volatile uint64_t t14 = 478010769567726LLU;

	t14 = ((x65%x66)|(x67-x68));

	if (t14 != 14263LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 5570U;
	uint16_t x75 = 12907U;
	uint16_t x76 = UINT16_MAX;
	uint32_t t15 = 1384U;

	t15 = ((x73%x74)|(x75-x76));

	if (t15 != 4294914669U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = UINT8_MAX;
	static int16_t x78 = -1;
	uint64_t x79 = 17LLU;
	static uint8_t x80 = 0U;
	uint64_t t16 = 611021LLU;

	t16 = ((x77%x78)|(x79-x80));

	if (t16 != 17LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = -1;
	static int64_t x82 = INT64_MAX;
	int16_t x83 = -1;
	volatile int32_t x84 = -1;
	volatile int64_t t17 = -17544314776824467LL;

	t17 = ((x81%x82)|(x83-x84));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MIN;
	uint64_t x86 = 142601959638966LLU;
	int16_t x87 = 25;
	static volatile uint64_t t18 = 321297356871LLU;

	t18 = ((x85%x86)|(x87-x88));

	if (t18 != 19889366093895LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MIN;
	static int64_t x90 = INT64_MIN;
	volatile int16_t x91 = -1;
	static int32_t x92 = 301314226;
	volatile int64_t t19 = 201234952096LL;

	t19 = ((x89%x90)|(x91-x92));

	if (t19 != -301314227LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MAX;
	uint64_t x95 = 1315196973LLU;
	volatile uint64_t t20 = 395944LLU;

	t20 = ((x93%x94)|(x95-x96));

	if (t20 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x97 = INT8_MAX;
	uint32_t x98 = 182170535U;
	int64_t x99 = -1LL;
	int16_t x100 = INT16_MIN;
	int64_t t21 = -1471650915022625LL;

	t21 = ((x97%x98)|(x99-x100));

	if (t21 != 32767LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = INT32_MAX;
	uint16_t x102 = 777U;
	uint16_t x103 = UINT16_MAX;
	int64_t t22 = 131918544352222LL;

	t22 = ((x101%x102)|(x103-x104));

	if (t22 != 65535LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x106 = 9930U;
	int16_t x108 = -12;
	static volatile uint32_t t23 = 6U;

	t23 = ((x105%x106)|(x107-x108));

	if (t23 != 255U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x114 = 498U;
	uint16_t x115 = UINT16_MAX;
	volatile int16_t x116 = INT16_MIN;
	volatile int32_t t24 = 550;

	t24 = ((x113%x114)|(x115-x116));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x117 = UINT8_MAX;
	uint64_t x118 = 2582LLU;
	volatile uint16_t x119 = 3U;
	static volatile uint64_t t25 = 6293205254609584495LLU;

	t25 = ((x117%x118)|(x119-x120));

	if (t25 != 255LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = INT16_MIN;
	uint8_t x122 = 89U;
	int32_t x123 = -2021787;

	t26 = ((x121%x122)|(x123-x124));

	if (t26 != -13) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = -1;
	int32_t x126 = -94;
	static int16_t x128 = 1;
	int32_t t27 = -37821921;

	t27 = ((x125%x126)|(x127-x128));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x129 = 7U;
	static uint32_t x130 = 1436466U;
	uint32_t x131 = 0U;
	int64_t x132 = -1LL;
	int64_t t28 = -518609LL;

	t28 = ((x129%x130)|(x131-x132));

	if (t28 != 7LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x133 = -1638;
	int16_t x135 = 1052;
	int32_t x136 = -1;
	volatile uint64_t t29 = 0LLU;

	t29 = ((x133%x134)|(x135-x136));

	if (t29 != 18446744073709551007LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = INT8_MIN;
	static uint16_t x138 = 86U;
	uint16_t x139 = 499U;

	t30 = ((x137%x138)|(x139-x140));

	if (t30 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = 26211U;
	int16_t x142 = INT16_MAX;
	uint64_t x143 = UINT64_MAX;
	static uint8_t x144 = UINT8_MAX;
	uint64_t t31 = 2998494863081LLU;

	t31 = ((x141%x142)|(x143-x144));

	if (t31 != 18446744073709551459LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x147 = 16424586371LL;
	static int8_t x148 = INT8_MIN;
	volatile int64_t t32 = 166892LL;

	t32 = ((x145%x146)|(x147-x148));

	if (t32 != -4157LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = 153867LLU;
	uint16_t x150 = UINT16_MAX;
	volatile int32_t x151 = INT32_MAX;
	uint64_t t33 = 124765208112LLU;

	t33 = ((x149%x150)|(x151-x152));

	if (t33 != 2147090351LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x153 = UINT8_MAX;
	int16_t x154 = INT16_MAX;
	volatile int16_t x155 = -1;
	static int16_t x156 = -1;

	t34 = ((x153%x154)|(x155-x156));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MIN;
	static int64_t x163 = -1LL;
	int16_t x164 = INT16_MAX;
	int64_t t35 = -27605006LL;

	t35 = ((x161%x162)|(x163-x164));

	if (t35 != -32768LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = -163339764714485318LL;
	uint64_t x167 = 3026445715987919569LLU;
	int8_t x168 = INT8_MAX;
	uint64_t t36 = 102733028LLU;

	t36 = ((x165%x166)|(x167-x168));

	if (t36 != 18446744073709518462LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = INT64_MIN;
	int32_t x170 = -268393870;
	static int16_t x171 = INT16_MIN;
	volatile int64_t t37 = -102677LL;

	t37 = ((x169%x170)|(x171-x172));

	if (t37 != -16624LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x173 = INT32_MIN;
	int64_t x174 = 769LL;
	volatile int8_t x175 = INT8_MIN;
	int32_t x176 = -1;
	volatile int64_t t38 = 278140515574069181LL;

	t38 = ((x173%x174)|(x175-x176));

	if (t38 != -9LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x178 = INT32_MAX;
	static uint16_t x180 = UINT16_MAX;
	uint64_t t39 = 14554LLU;

	t39 = ((x177%x178)|(x179-x180));

	if (t39 != 1036943359LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x181 = 43838;
	int16_t x184 = 47;
	int32_t t40 = 250942;

	t40 = ((x181%x182)|(x183-x184));

	if (t40 != -48) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x185 = UINT64_MAX;
	int16_t x187 = INT16_MIN;
	int32_t x188 = INT32_MIN;
	uint64_t t41 = 172409156LLU;

	t41 = ((x185%x186)|(x187-x188));

	if (t41 != 2147450880LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x189 = INT16_MIN;
	volatile uint32_t x190 = UINT32_MAX;
	int32_t x191 = -1;

	t42 = ((x189%x190)|(x191-x192));

	if (t42 != 4294934550U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = INT32_MAX;
	uint8_t x194 = 3U;
	uint16_t x195 = 0U;
	volatile uint8_t x196 = 0U;
	int32_t t43 = -29951;

	t43 = ((x193%x194)|(x195-x196));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = INT16_MIN;
	static uint32_t x198 = 91701914U;
	int16_t x200 = -1;
	static uint32_t t44 = 31655202U;

	t44 = ((x197%x198)|(x199-x200));

	if (t44 != 76646740U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = -1853822356933336656LL;
	int16_t x202 = -1;
	uint32_t x203 = 134U;
	volatile int16_t x204 = 56;
	int64_t t45 = -5099LL;

	t45 = ((x201%x202)|(x203-x204));

	if (t45 != 78LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x206 = UINT64_MAX;
	uint8_t x207 = 116U;
	static uint64_t x208 = 915322149361157LLU;
	uint64_t t46 = 33893655LLU;

	t46 = ((x205%x206)|(x207-x208));

	if (t46 != 18446744073683320447LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = -1;
	int64_t x210 = INT64_MIN;
	uint32_t x211 = UINT32_MAX;
	uint16_t x212 = 1079U;
	int64_t t47 = -36481904359247LL;

	t47 = ((x209%x210)|(x211-x212));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x213 = 441305826269751152LLU;
	int8_t x214 = INT8_MIN;
	uint8_t x215 = 0U;
	uint16_t x216 = 27108U;
	static volatile uint64_t t48 = 3223563340792205666LLU;

	t48 = ((x213%x214)|(x215-x216));

	if (t48 != 18446744073709549436LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x217 = -1;
	static volatile uint16_t x218 = 1983U;
	int64_t x219 = -1LL;
	int64_t t49 = -1693992082LL;

	t49 = ((x217%x218)|(x219-x220));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x222 = -1918367LL;
	uint64_t x223 = 13026LLU;
	int16_t x224 = INT16_MIN;
	volatile uint64_t t50 = 44577LLU;

	t50 = ((x221%x222)|(x223-x224));

	if (t50 != 18446744073708419827LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x226 = INT32_MIN;
	int32_t x227 = -1;
	static uint16_t x228 = 376U;
	int32_t t51 = 398768920;

	t51 = ((x225%x226)|(x227-x228));

	if (t51 != -377) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x229 = UINT32_MAX;
	int8_t x230 = INT8_MIN;
	int64_t x231 = -367010972161LL;
	uint16_t x232 = UINT16_MAX;
	int64_t t52 = 636LL;

	t52 = ((x229%x230)|(x231-x232));

	if (t52 != -367011037569LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = 52U;
	volatile int64_t x234 = INT64_MIN;
	int32_t x235 = 384;
	int32_t x236 = -1;
	int64_t t53 = 5892671386406546LL;

	t53 = ((x233%x234)|(x235-x236));

	if (t53 != 437LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x238 = INT16_MIN;
	volatile uint32_t x240 = 26U;
	int64_t t54 = 1305LL;

	t54 = ((x237%x238)|(x239-x240));

	if (t54 != 4294967190LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = 252727;
	int16_t x243 = INT16_MIN;
	int32_t x244 = INT32_MIN;
	static uint32_t t55 = 8742U;

	t55 = ((x241%x242)|(x243-x244));

	if (t55 != 2147474231U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x245 = 10886673U;
	uint64_t x246 = UINT64_MAX;
	int64_t x248 = 143297260789LL;
	volatile uint64_t t56 = 19636093101LLU;

	t56 = ((x245%x246)|(x247-x248));

	if (t56 != 18446743930414784283LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = -2;
	volatile uint64_t x250 = 2635532953LLU;
	uint64_t x251 = UINT64_MAX;
	uint8_t x252 = UINT8_MAX;

	t57 = ((x249%x250)|(x251-x252));

	if (t57 != 18446744073709551445LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = -1;
	uint16_t x254 = 5U;
	volatile int16_t x256 = INT16_MIN;
	volatile uint32_t t58 = UINT32_MAX;

	t58 = ((x253%x254)|(x255-x256));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x257 = UINT8_MAX;
	volatile int16_t x258 = INT16_MIN;
	uint64_t t59 = 546170374LLU;

	t59 = ((x257%x258)|(x259-x260));

	if (t59 != 349951LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x262 = INT64_MIN;
	uint16_t x264 = 72U;
	int64_t t60 = 11515471053986489LL;

	t60 = ((x261%x262)|(x263-x264));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = -98133461447333LL;
	int8_t x270 = -4;
	int8_t x271 = INT8_MAX;
	volatile int8_t x272 = INT8_MIN;

	t61 = ((x269%x270)|(x271-x272));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x273 = 87U;
	static int32_t x274 = -1;
	int64_t x275 = -6385665LL;
	static int64_t x276 = -1LL;
	int64_t t62 = 636434977771LL;

	t62 = ((x273%x274)|(x275-x276));

	if (t62 != -6385577LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = INT64_MIN;
	int64_t x282 = -1LL;
	int16_t x283 = INT16_MIN;
	int8_t x284 = INT8_MIN;
	int64_t t63 = -57847LL;

	t63 = ((x281%x282)|(x283-x284));

	if (t63 != -32640LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x293 = 0;
	int32_t x294 = 104011;
	volatile uint8_t x295 = 96U;
	int32_t x296 = INT32_MAX;

	t64 = ((x293%x294)|(x295-x296));

	if (t64 != -2147483551) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x297 = 1LLU;
	int32_t x298 = -648312;
	uint64_t t65 = 459927276525LLU;

	t65 = ((x297%x298)|(x299-x300));

	if (t65 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x301 = 8;
	int16_t x302 = INT16_MIN;
	volatile int8_t x303 = INT8_MIN;
	int32_t x304 = INT32_MIN;
	static volatile int32_t t66 = 6725;

	t66 = ((x301%x302)|(x303-x304));

	if (t66 != 2147483528) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x305 = -122;
	volatile int32_t x306 = INT32_MIN;
	int64_t x307 = INT64_MAX;
	int32_t x308 = INT32_MAX;
	static volatile int64_t t67 = 11872896376544184LL;

	t67 = ((x305%x306)|(x307-x308));

	if (t67 != -122LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x311 = 51303;
	static int64_t t68 = 307304332147LL;

	t68 = ((x309%x310)|(x311-x312));

	if (t68 != -1545LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x314 = -1;
	uint32_t x315 = 267U;
	uint16_t x316 = 4U;

	t69 = ((x313%x314)|(x315-x316));

	if (t69 != 263LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x317 = 2U;
	static int8_t x318 = INT8_MIN;
	static int64_t t70 = -17LL;

	t70 = ((x317%x318)|(x319-x320));

	if (t70 != -331811540753LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x321 = UINT16_MAX;
	static uint64_t x322 = 5324649415753886LLU;
	int32_t x323 = -6273935;
	static volatile int64_t x324 = 10168320809795LL;

	t71 = ((x321%x322)|(x323-x324));

	if (t71 != 18446733905382473727LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x325 = INT64_MIN;
	volatile int8_t x327 = -2;
	int32_t x328 = INT32_MIN;

	t72 = ((x325%x326)|(x327-x328));

	if (t72 != 2147483646LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x330 = 90U;
	volatile uint32_t x331 = 842910359U;
	volatile uint8_t x332 = 26U;
	volatile uint32_t t73 = 42002U;

	t73 = ((x329%x330)|(x331-x332));

	if (t73 != 842910335U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x333 = INT32_MIN;
	volatile int32_t x335 = 1;

	t74 = ((x333%x334)|(x335-x336));

	if (t74 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x341 = INT8_MIN;
	static int64_t x342 = -1LL;
	uint64_t x343 = 977LLU;
	static uint64_t t75 = 1181298802804LLU;

	t75 = ((x341%x342)|(x343-x344));

	if (t75 != 1105LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x345 = INT8_MAX;
	static volatile int16_t x346 = 4;
	volatile int16_t x347 = 6642;
	volatile uint8_t x348 = UINT8_MAX;
	static volatile int32_t t76 = 7745;

	t76 = ((x345%x346)|(x347-x348));

	if (t76 != 6387) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x349 = UINT16_MAX;
	int64_t x350 = INT64_MIN;
	static uint8_t x351 = 10U;
	int64_t x352 = 24465611361173LL;
	int64_t t77 = -11597793LL;

	t77 = ((x349%x350)|(x351-x352));

	if (t77 != -24465611358209LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x354 = UINT16_MAX;
	int64_t x355 = -1LL;
	int64_t t78 = 14616623845973LL;

	t78 = ((x353%x354)|(x355-x356));

	if (t78 != 2147483647LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x357 = 15U;
	int16_t x358 = INT16_MAX;
	static int32_t x359 = INT32_MIN;
	int64_t x360 = -1LL;
	int64_t t79 = 62347LL;

	t79 = ((x357%x358)|(x359-x360));

	if (t79 != -2147483633LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x365 = 49564LL;
	int32_t x366 = INT32_MIN;
	static uint8_t x367 = 2U;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t80 = 230LLU;

	t80 = ((x365%x366)|(x367-x368));

	if (t80 != 49567LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x369 = -1LL;
	static uint8_t x371 = 2U;
	volatile int64_t t81 = 0LL;

	t81 = ((x369%x370)|(x371-x372));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x373 = INT32_MIN;
	volatile int16_t x374 = -4;
	volatile int16_t x376 = -1;
	int32_t t82 = 0;

	t82 = ((x373%x374)|(x375-x376));

	if (t82 != 63) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x377 = INT16_MIN;
	uint32_t x378 = 158719U;
	uint64_t x379 = 22LLU;
	volatile uint64_t t83 = 464129573LLU;

	t83 = ((x377%x378)|(x379-x380));

	if (t83 != 157111LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x385 = INT16_MIN;
	int32_t x386 = -116496;
	static uint64_t t84 = 296LLU;

	t84 = ((x385%x386)|(x387-x388));

	if (t84 != 18446744073709539170LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x394 = 5463682;
	int32_t x395 = INT32_MAX;
	uint64_t x396 = 2137974479LLU;
	static volatile uint64_t t85 = 941321785020393695LLU;

	t85 = ((x393%x394)|(x395-x396));

	if (t85 != 9509375LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x397 = -1;
	int64_t x400 = INT64_MIN;
	volatile int64_t t86 = INT64_MAX;

	t86 = ((x397%x398)|(x399-x400));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x401 = INT64_MIN;
	int64_t x402 = INT64_MIN;
	uint64_t x403 = 106730830112367415LLU;
	uint64_t t87 = 354009LLU;

	t87 = ((x401%x402)|(x403-x404));

	if (t87 != 106730830112367433LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x405 = UINT8_MAX;
	static uint8_t x406 = 9U;
	int8_t x407 = -1;
	int16_t x408 = INT16_MAX;
	volatile int32_t t88 = -1;

	t88 = ((x405%x406)|(x407-x408));

	if (t88 != -32765) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x409 = 1;
	int32_t x410 = INT32_MAX;
	uint32_t x411 = 193700227U;
	static int16_t x412 = INT16_MIN;
	static volatile uint32_t t89 = 2U;

	t89 = ((x409%x410)|(x411-x412));

	if (t89 != 193732995U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x414 = INT64_MAX;
	int32_t x415 = INT32_MIN;
	static int64_t x416 = INT64_MIN;

	t90 = ((x413%x414)|(x415-x416));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x417 = INT64_MIN;
	static uint16_t x418 = UINT16_MAX;
	int16_t x420 = 848;
	int64_t t91 = -422124998238305636LL;

	t91 = ((x417%x418)|(x419-x420));

	if (t91 != -976LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x425 = INT8_MIN;
	static uint16_t x426 = UINT16_MAX;
	static int16_t x427 = INT16_MIN;
	static uint8_t x428 = UINT8_MAX;

	t92 = ((x425%x426)|(x427-x428));

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = -1;
	static volatile uint16_t x432 = 5852U;
	volatile int32_t t93 = -187;

	t93 = ((x429%x430)|(x431-x432));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x434 = INT64_MIN;
	int8_t x435 = INT8_MIN;
	uint64_t t94 = 195995204501LLU;

	t94 = ((x433%x434)|(x435-x436));

	if (t94 != 18446744073641394139LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x437 = -62;
	static int32_t x438 = -24;
	uint8_t x439 = 0U;
	uint64_t x440 = 878097LLU;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = ((x437%x438)|(x439-x440));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x441 = 4462251U;
	static int16_t x443 = 2568;
	volatile uint64_t x444 = 161376133767823175LLU;
	volatile uint64_t t96 = 124595713956251292LLU;

	t96 = ((x441%x442)|(x443-x444));

	if (t96 != 18285367939946192619LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x446 = 1215419721128152LLU;
	int64_t x447 = -14674LL;
	volatile int16_t x448 = 4092;
	uint64_t t97 = 233LLU;

	t97 = ((x445%x446)|(x447-x448));

	if (t97 != 18446744073709532850LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x449 = 7643945105895LLU;
	volatile int32_t x450 = INT32_MIN;
	static int32_t x452 = INT32_MIN;

	t98 = ((x449%x450)|(x451-x452));

	if (t98 != 7645041785319LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x453 = -1;
	static uint16_t x456 = 5U;
	static uint64_t t99 = 230789674205941LLU;

	t99 = ((x453%x454)|(x455-x456));

	if (t99 != 16695231LLU) { NG(); } else { ; }
	
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

