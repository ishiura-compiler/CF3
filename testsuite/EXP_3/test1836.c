#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
static int8_t x2 = 0;
int8_t x5 = INT8_MIN;
uint8_t x8 = 8U;
uint64_t x13 = 1395141886883LLU;
uint64_t t3 = 3289205251LLU;
int16_t x17 = INT16_MIN;
static int32_t x18 = -1;
static int64_t x22 = INT64_MAX;
int8_t x23 = INT8_MAX;
static int64_t x26 = 820LL;
uint16_t x30 = 15U;
uint8_t x32 = 9U;
static int8_t x33 = INT8_MIN;
uint8_t x34 = UINT8_MAX;
int64_t x38 = -69412925071LL;
volatile uint64_t x39 = 3693029675035820850LLU;
static int32_t x43 = INT32_MIN;
volatile int32_t x48 = -1;
int32_t x55 = 2;
int8_t x56 = 0;
int16_t x60 = 13252;
volatile int64_t x62 = 1LL;
int16_t x68 = -1;
volatile int32_t t16 = -1;
int8_t x76 = 2;
uint32_t x86 = 2U;
int64_t t21 = -52345304582LL;
int32_t x89 = -20543;
uint8_t x96 = UINT8_MAX;
volatile int32_t t25 = -204;
static uint32_t x128 = UINT32_MAX;
int16_t x129 = INT16_MAX;
uint8_t x131 = UINT8_MAX;
volatile int64_t t32 = -19848LL;
int64_t x145 = INT64_MIN;
uint32_t x147 = UINT32_MAX;
static volatile uint64_t x152 = 8LLU;
volatile int64_t x155 = -1LL;
uint8_t x160 = 0U;
uint64_t x165 = UINT64_MAX;
volatile int16_t x172 = INT16_MIN;
int64_t t39 = -5LL;
volatile uint32_t t41 = 8038U;
int64_t x199 = 64814481434LL;
static int32_t x204 = 69;
int32_t x207 = -1;
int32_t x208 = -469927277;
volatile int8_t x212 = INT8_MIN;
static volatile int64_t t48 = 97845499909769LL;
uint16_t x219 = 29U;
static int64_t x233 = INT64_MIN;
int64_t t54 = 54075497LL;
volatile int64_t x243 = -1LL;
static int32_t x246 = 1;
volatile uint16_t x256 = 0U;
int8_t x258 = 1;
int8_t x262 = INT8_MAX;
volatile uint64_t t61 = 7810797414LLU;
int64_t x287 = INT64_MAX;
volatile int8_t x288 = INT8_MAX;
volatile int64_t x292 = -44859003033LL;
static int8_t x302 = 0;
static volatile int64_t x307 = INT64_MAX;
int32_t x308 = INT32_MAX;
int64_t x309 = 188927LL;
int64_t x310 = INT64_MIN;
uint64_t x314 = 3237361LLU;
volatile uint64_t x315 = 12LLU;
uint64_t x317 = 327043420258863266LLU;
static int64_t x323 = 526318170458LL;
static uint32_t x324 = 8354U;
volatile int32_t t73 = 1630;
volatile uint16_t x339 = 116U;
int64_t x352 = -15792532858126877LL;
static int16_t x353 = INT16_MAX;
volatile int64_t t77 = -4047LL;
int64_t x358 = -1LL;
int16_t x365 = INT16_MAX;
uint64_t x373 = 5194951233951LLU;
int64_t x374 = -15442LL;
int32_t x384 = INT32_MAX;
uint8_t x388 = UINT8_MAX;
static int64_t t86 = -3035158719901LL;
int16_t x394 = 700;
int64_t x399 = -579LL;
int16_t x405 = INT16_MIN;
static int8_t x408 = INT8_MAX;
static volatile int64_t t89 = 58642387110185LL;
uint32_t x413 = UINT32_MAX;
static int32_t x415 = INT32_MIN;
volatile int64_t x417 = -1025LL;
static int8_t x418 = INT8_MIN;
uint16_t x421 = UINT16_MAX;
int32_t x426 = 1067505;
uint32_t x429 = UINT32_MAX;
volatile uint32_t t95 = UINT32_MAX;
volatile uint64_t t98 = 9814560710965252LLU;
static int16_t x448 = INT16_MAX;


void f0(void) {
	volatile uint8_t x3 = UINT8_MAX;
	volatile int64_t x4 = -54982LL;
	int64_t t0 = 28566LL;

	t0 = ((x1|x2)*(x3&x4));

	if (t0 != -7424LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 112U;
	int32_t x7 = INT32_MIN;
	volatile int32_t t1 = 1941088;

	t1 = ((x5|x6)*(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int16_t x10 = 3265;
	static volatile int64_t x11 = INT64_MIN;
	int8_t x12 = INT8_MAX;
	volatile int64_t t2 = -13LL;

	t2 = ((x9|x10)*(x11&x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = 197317;
	int64_t x15 = 3899918LL;
	volatile int64_t x16 = INT64_MAX;

	t3 = ((x13|x14)*(x15&x16));

	if (t3 != 5440938957474170018LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x19 = INT8_MAX;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -1;

	t4 = ((x17|x18)*(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 15;
	static volatile int32_t x24 = INT32_MIN;
	volatile int64_t t5 = 3504LL;

	t5 = ((x21|x22)*(x23&x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = 19493436999733LL;
	static uint64_t x27 = UINT64_MAX;
	static volatile int8_t x28 = INT8_MIN;
	volatile uint64_t t6 = 3200492776926LLU;

	t6 = ((x25|x26)*(x27&x28));

	if (t6 != 18444248913773487488LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MAX;
	int64_t x31 = -1947824739106259374LL;
	volatile int64_t t7 = -8229963736LL;

	t7 = ((x29|x30)*(x31&x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x35 = 76;
	int8_t x36 = INT8_MAX;
	int32_t t8 = 28477;

	t8 = ((x33|x34)*(x35&x36));

	if (t8 != -76) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -7;
	static uint64_t x40 = 661378702830LLU;
	volatile uint64_t t9 = 3873890LLU;

	t9 = ((x37|x38)*(x39&x40));

	if (t9 != 18446739976769763346LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 7U;
	int64_t x42 = INT64_MAX;
	volatile uint16_t x44 = 17U;
	int64_t t10 = 7LL;

	t10 = ((x41|x42)*(x43&x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -350;
	volatile int32_t x46 = -23493317;
	int16_t x47 = -1047;
	volatile int32_t t11 = -2544;

	t11 = ((x45|x46)*(x47&x48));

	if (t11 != 72243) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 1U;
	uint64_t x50 = 48390980664241LLU;
	int16_t x51 = INT16_MIN;
	int64_t x52 = -1LL;
	static uint64_t t12 = 816452LLU;

	t12 = ((x49|x50)*(x51&x52));

	if (t12 != 16861068419303702528LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1LL;
	int16_t x54 = 0;
	static volatile int64_t t13 = -172048530086617LL;

	t13 = ((x53|x54)*(x55&x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	uint16_t x58 = 1U;
	int32_t x59 = -2353036;
	volatile int64_t t14 = 3838293097031469LL;

	t14 = ((x57|x58)*(x59&x60));

	if (t14 != -4164LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	int8_t x63 = -14;
	uint64_t x64 = UINT64_MAX;
	uint64_t t15 = 474041LLU;

	t15 = ((x61|x62)*(x63&x64));

	if (t15 != 30064771058LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -27;
	int32_t x66 = INT32_MIN;
	static int16_t x67 = INT16_MAX;

	t16 = ((x65|x66)*(x67&x68));

	if (t16 != -884709) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -2906022;
	int64_t x70 = INT64_MIN;
	int64_t x71 = -3LL;
	static uint16_t x72 = 17U;
	static int64_t t17 = 98053412247LL;

	t17 = ((x69|x70)*(x71&x72));

	if (t17 != -49402374LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -1LL;
	volatile uint16_t x74 = UINT16_MAX;
	int8_t x75 = -1;
	int64_t t18 = 5LL;

	t18 = ((x73|x74)*(x75&x76));

	if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	int8_t x78 = -1;
	uint16_t x79 = 7U;
	static int8_t x80 = -1;
	int32_t t19 = 10;

	t19 = ((x77|x78)*(x79&x80));

	if (t19 != -7) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = 9183U;
	volatile int64_t x82 = -1LL;
	uint8_t x83 = 4U;
	uint16_t x84 = UINT16_MAX;
	int64_t t20 = -373622988LL;

	t20 = ((x81|x82)*(x83&x84));

	if (t20 != -4LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 4530535U;
	int64_t x87 = -986785836294544986LL;
	uint8_t x88 = 0U;

	t21 = ((x85|x86)*(x87&x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MIN;
	int32_t x91 = -1;
	volatile int16_t x92 = INT16_MAX;
	int32_t t22 = -7419059;

	t22 = ((x89|x90)*(x91&x92));

	if (t22 != -2064321) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	static int16_t x94 = INT16_MIN;
	uint8_t x95 = UINT8_MAX;
	static volatile int64_t t23 = -5995490401674LL;

	t23 = ((x93|x94)*(x95&x96));

	if (t23 != -255LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	uint16_t x98 = UINT16_MAX;
	uint32_t x99 = 349979U;
	uint8_t x100 = 4U;
	uint32_t t24 = 8782U;

	t24 = ((x97|x98)*(x99&x100));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 32U;
	int8_t x102 = -1;
	uint8_t x103 = 33U;
	int16_t x104 = -1;

	t25 = ((x101|x102)*(x103&x104));

	if (t25 != -33) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = -2;
	int64_t x106 = -1LL;
	uint8_t x107 = 34U;
	uint16_t x108 = 15U;
	volatile int64_t t26 = -408428333LL;

	t26 = ((x105|x106)*(x107&x108));

	if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 6LLU;
	static int32_t x110 = INT32_MIN;
	int32_t x111 = -1;
	static uint32_t x112 = 223U;
	uint64_t t27 = 2665LLU;

	t27 = ((x109|x110)*(x111&x112));

	if (t27 != 18446743594820699450LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MAX;
	int16_t x118 = INT16_MAX;
	int8_t x119 = -1;
	static int16_t x120 = INT16_MIN;
	int32_t t28 = 7678039;

	t28 = ((x117|x118)*(x119&x120));

	if (t28 != -1073709056) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x121 = INT32_MAX;
	volatile uint32_t x122 = 2893580U;
	int8_t x123 = INT8_MIN;
	uint16_t x124 = UINT16_MAX;
	static uint32_t t29 = 202541U;

	t29 = ((x121|x122)*(x123&x124));

	if (t29 != 4294901888U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 21U;
	uint16_t x126 = 8342U;
	int16_t x127 = -1;
	uint32_t t30 = 301U;

	t30 = ((x125|x126)*(x127&x128));

	if (t30 != 4294958953U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = INT16_MIN;
	volatile uint64_t x132 = UINT64_MAX;
	uint64_t t31 = 1871004949288LLU;

	t31 = ((x129|x130)*(x131&x132));

	if (t31 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = 2;
	int64_t x134 = INT64_MIN;
	int64_t x135 = INT64_MAX;
	int64_t x136 = INT64_MIN;

	t32 = ((x133|x134)*(x135&x136));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = UINT8_MAX;
	uint64_t x138 = 2321146720536LLU;
	uint32_t x139 = 168005210U;
	static int32_t x140 = INT32_MIN;
	uint64_t t33 = 2016218650LLU;

	t33 = ((x137|x138)*(x139&x140));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x146 = -1420;
	int32_t x148 = INT32_MIN;
	volatile int64_t t34 = -11LL;

	t34 = ((x145|x146)*(x147&x148));

	if (t34 != -3049426780160LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MIN;
	static int32_t x150 = INT32_MIN;
	static int8_t x151 = INT8_MAX;
	uint64_t t35 = 2576588605278749LLU;

	t35 = ((x149|x150)*(x151&x152));

	if (t35 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = UINT8_MAX;
	uint16_t x154 = 402U;
	volatile int8_t x156 = INT8_MIN;
	static int64_t t36 = -2304563290LL;

	t36 = ((x153|x154)*(x155&x156));

	if (t36 != -65408LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MAX;
	int64_t x158 = INT64_MAX;
	int32_t x159 = INT32_MIN;
	static int64_t t37 = 0LL;

	t37 = ((x157|x158)*(x159&x160));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x166 = INT8_MIN;
	uint32_t x167 = UINT32_MAX;
	static int64_t x168 = INT64_MIN;
	uint64_t t38 = 1843556461LLU;

	t38 = ((x165|x166)*(x167&x168));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = -1LL;
	int8_t x170 = 2;
	volatile uint8_t x171 = 19U;

	t39 = ((x169|x170)*(x171&x172));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = 1;
	uint32_t x174 = 1190437U;
	uint64_t x175 = UINT64_MAX;
	uint32_t x176 = 1977785356U;
	static uint64_t t40 = 122LLU;

	t40 = ((x173|x174)*(x175&x176));

	if (t40 != 2354428865840572LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = UINT16_MAX;
	uint16_t x178 = UINT16_MAX;
	uint32_t x179 = 26485580U;
	int32_t x180 = INT32_MIN;

	t41 = ((x177|x178)*(x179&x180));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = UINT32_MAX;
	static int32_t x186 = -1;
	int16_t x187 = INT16_MAX;
	uint16_t x188 = 4U;
	volatile uint32_t t42 = 15466220U;

	t42 = ((x185|x186)*(x187&x188));

	if (t42 != 4294967292U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = 30U;
	static uint8_t x190 = 1U;
	uint16_t x191 = 47U;
	volatile int32_t x192 = INT32_MAX;
	int32_t t43 = 57865280;

	t43 = ((x189|x190)*(x191&x192));

	if (t43 != 1457) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x193 = 4022LL;
	uint16_t x194 = 1U;
	volatile int8_t x195 = INT8_MIN;
	int16_t x196 = -237;
	volatile int64_t t44 = -185LL;

	t44 = ((x193|x194)*(x195&x196));

	if (t44 != -1029888LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x197 = -1;
	static volatile uint32_t x198 = 481117U;
	int8_t x200 = 7;
	volatile int64_t t45 = 256352025088823288LL;

	t45 = ((x197|x198)*(x199&x200));

	if (t45 != 8589934590LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x201 = UINT32_MAX;
	int64_t x202 = INT64_MIN;
	uint64_t x203 = UINT64_MAX;
	volatile uint64_t t46 = 1069583293399269735LLU;

	t46 = ((x201|x202)*(x203&x204));

	if (t46 != 9223372333207519163LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = -1;
	volatile int16_t x206 = INT16_MAX;
	static int32_t t47 = 12652992;

	t47 = ((x205|x206)*(x207&x208));

	if (t47 != 469927277) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = -1LL;
	int64_t x210 = INT64_MAX;
	volatile int8_t x211 = 31;

	t48 = ((x209|x210)*(x211&x212));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = -1LL;
	uint32_t x214 = 1790115313U;
	int16_t x215 = -1;
	uint32_t x216 = 35U;
	int64_t t49 = -2LL;

	t49 = ((x213|x214)*(x215&x216));

	if (t49 != -35LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x217 = INT64_MIN;
	volatile uint64_t x218 = 9818164LLU;
	int32_t x220 = INT32_MIN;
	volatile uint64_t t50 = 7263723284063LLU;

	t50 = ((x217|x218)*(x219&x220));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x221 = 0U;
	int32_t x222 = -809795;
	uint64_t x223 = 925172LLU;
	int64_t x224 = INT64_MAX;
	uint64_t t51 = 151218772956483810LLU;

	t51 = ((x221|x222)*(x223&x224));

	if (t51 != 18446743324509891876LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x229 = UINT16_MAX;
	uint32_t x230 = 5839U;
	uint64_t x231 = 172408764766328097LLU;
	int32_t x232 = -1;
	uint64_t t52 = 2460057653913903LLU;

	t52 = ((x229|x230)*(x231&x232));

	if (t52 != 9401025851066247903LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x234 = INT32_MIN;
	int64_t x235 = 113437611403LL;
	uint64_t x236 = UINT64_MAX;
	uint64_t t53 = 722417539950299818LLU;

	t53 = ((x233|x234)*(x235&x236));

	if (t53 != 14649001475812884480LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x237 = UINT8_MAX;
	static uint16_t x238 = 16607U;
	int16_t x239 = 10;
	volatile int64_t x240 = -1LL;

	t54 = ((x237|x238)*(x239&x240));

	if (t54 != 166390LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x241 = INT16_MAX;
	int32_t x242 = INT32_MAX;
	int32_t x244 = 1385774;
	int64_t t55 = -47984LL;

	t55 = ((x241|x242)*(x243&x244));

	if (t55 != 2975927003437778LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = INT32_MIN;
	int32_t x247 = INT32_MIN;
	uint16_t x248 = UINT16_MAX;
	static volatile int32_t t56 = -126451757;

	t56 = ((x245|x246)*(x247&x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = INT64_MIN;
	int64_t x250 = INT64_MAX;
	int8_t x251 = -9;
	int64_t x252 = 183LL;
	int64_t t57 = -470LL;

	t57 = ((x249|x250)*(x251&x252));

	if (t57 != -183LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = 2429U;
	int64_t x254 = INT64_MIN;
	static int16_t x255 = INT16_MAX;
	int64_t t58 = -1283220702LL;

	t58 = ((x253|x254)*(x255&x256));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x257 = UINT8_MAX;
	volatile int32_t x259 = INT32_MAX;
	volatile int16_t x260 = 201;
	int32_t t59 = 4062;

	t59 = ((x257|x258)*(x259&x260));

	if (t59 != 51255) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x261 = 25U;
	static uint64_t x263 = 2361647727LLU;
	static int64_t x264 = INT64_MIN;
	static uint64_t t60 = 36317322LLU;

	t60 = ((x261|x262)*(x263&x264));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x265 = INT8_MAX;
	uint8_t x266 = 10U;
	static int32_t x267 = -1301561;
	uint64_t x268 = 33848229878297LLU;

	t61 = ((x265|x266)*(x267&x268));

	if (t61 != 4298725029379711LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x277 = 422U;
	int64_t x278 = 15LL;
	int8_t x279 = 27;
	volatile uint32_t x280 = UINT32_MAX;
	volatile int64_t t62 = -93963084191LL;

	t62 = ((x277|x278)*(x279&x280));

	if (t62 != 11637LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = -1LL;
	int16_t x282 = 19;
	int32_t x283 = INT32_MAX;
	uint8_t x284 = 1U;
	int64_t t63 = 20031414176642947LL;

	t63 = ((x281|x282)*(x283&x284));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x285 = 68937976530024LLU;
	volatile uint32_t x286 = 2U;
	static volatile uint64_t t64 = 23142818278659969LLU;

	t64 = ((x285|x286)*(x287&x288));

	if (t64 != 8755123019313302LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = 671;
	volatile uint64_t x290 = 142394936686106LLU;
	int16_t x291 = INT16_MIN;
	static volatile uint64_t t65 = 45716742426400012LLU;

	t65 = ((x289|x290)*(x291&x292));

	if (t65 != 2686702958489272320LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = 0;
	static int8_t x303 = INT8_MIN;
	volatile int16_t x304 = -1622;
	static int32_t t66 = 8889952;

	t66 = ((x301|x302)*(x303&x304));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x305 = INT16_MAX;
	int32_t x306 = INT32_MIN;
	int64_t t67 = -1852605788844521500LL;

	t67 = ((x305|x306)*(x307&x308));

	if (t67 != -4611615649683243007LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x311 = 0;
	int32_t x312 = -7528;
	static volatile int64_t t68 = 3866327667062060137LL;

	t68 = ((x309|x310)*(x311&x312));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = INT32_MAX;
	static uint32_t x316 = 54710U;
	volatile uint64_t t69 = 39561110719691528LLU;

	t69 = ((x313|x314)*(x315&x316));

	if (t69 != 8589934588LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x318 = INT8_MAX;
	uint16_t x319 = 23105U;
	static int64_t x320 = 122913494594680417LL;
	uint64_t t70 = 1031344292752LLU;

	t70 = ((x317|x318)*(x319&x320));

	if (t70 != 5917760897222997695LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x321 = 4634U;
	int8_t x322 = 1;
	int64_t t71 = -630010330LL;

	t71 = ((x321|x322)*(x323&x324));

	if (t71 != 37979190LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x325 = 2LL;
	volatile int32_t x326 = -1;
	uint64_t x327 = UINT64_MAX;
	volatile int64_t x328 = INT64_MAX;
	uint64_t t72 = 56681LLU;

	t72 = ((x325|x326)*(x327&x328));

	if (t72 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x333 = -1;
	int32_t x334 = INT32_MAX;
	int8_t x335 = -1;
	int8_t x336 = INT8_MIN;

	t73 = ((x333|x334)*(x335&x336));

	if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x337 = INT16_MIN;
	uint16_t x338 = 143U;
	static int32_t x340 = -1;
	volatile int32_t t74 = -316;

	t74 = ((x337|x338)*(x339&x340));

	if (t74 != -3784500) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x345 = UINT32_MAX;
	static uint32_t x346 = UINT32_MAX;
	static int32_t x347 = INT32_MIN;
	volatile int32_t x348 = INT32_MIN;
	uint32_t t75 = 264U;

	t75 = ((x345|x346)*(x347&x348));

	if (t75 != 2147483648U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = 44;
	static int32_t x351 = INT32_MIN;
	int64_t t76 = -555358669356679LL;

	t76 = ((x349|x350)*(x351&x352));

	if (t76 != 1326572907899387904LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x354 = INT32_MAX;
	int64_t x355 = INT64_MIN;
	int16_t x356 = 1749;

	t77 = ((x353|x354)*(x355&x356));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x357 = 122U;
	int32_t x359 = -11;
	uint8_t x360 = 14U;
	volatile int64_t t78 = -2144333130LL;

	t78 = ((x357|x358)*(x359&x360));

	if (t78 != -4LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x361 = INT32_MIN;
	int32_t x362 = INT32_MAX;
	static uint64_t x363 = 166581721LLU;
	volatile uint8_t x364 = UINT8_MAX;
	uint64_t t79 = 749699950402055768LLU;

	t79 = ((x361|x362)*(x363&x364));

	if (t79 != 18446744073709551399LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x366 = INT64_MIN;
	uint64_t x367 = 50094928786LLU;
	uint64_t x368 = UINT64_MAX;
	uint64_t t80 = 310LLU;

	t80 = ((x365|x366)*(x367&x368));

	if (t80 != 1641460531530862LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x369 = UINT16_MAX;
	int32_t x370 = -258314;
	int16_t x371 = -1;
	uint64_t x372 = 8189546930LLU;
	volatile uint64_t t81 = 459007LLU;

	t81 = ((x369|x370)*(x371&x372));

	if (t81 != 18445133935077191246LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x375 = -69LL;
	static volatile int16_t x376 = -348;
	volatile uint64_t t82 = 8602783486306330891LLU;

	t82 = ((x373|x374)*(x375&x376));

	if (t82 != 3987808LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x377 = 39LLU;
	uint16_t x378 = 20015U;
	uint64_t x379 = UINT64_MAX;
	int8_t x380 = INT8_MIN;
	volatile uint64_t t83 = 230245879139058LLU;

	t83 = ((x377|x378)*(x379&x380));

	if (t83 != 18446744073706989696LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x381 = 850;
	int64_t x382 = 672074173555LL;
	int8_t x383 = INT8_MAX;
	int64_t t84 = -51699LL;

	t84 = ((x381|x382)*(x383&x384));

	if (t84 != 85353420139021LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x385 = 507504717778LLU;
	volatile uint16_t x386 = 21882U;
	static int16_t x387 = -1;
	volatile uint64_t t85 = 18472981491045687LLU;

	t85 = ((x385|x386)*(x387&x388));

	if (t85 != 129413704088070LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x389 = 50U;
	int32_t x390 = -1;
	int8_t x391 = -1;
	volatile int64_t x392 = -261495758LL;

	t86 = ((x389|x390)*(x391&x392));

	if (t86 != 261495758LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x393 = 19047LL;
	int16_t x395 = 13027;
	int64_t x396 = INT64_MIN;
	int64_t t87 = -595919041029828811LL;

	t87 = ((x393|x394)*(x395&x396));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x397 = 3;
	int32_t x398 = INT32_MIN;
	uint32_t x400 = 48U;
	int64_t t88 = 582600813LL;

	t88 = ((x397|x398)*(x399&x400));

	if (t88 != -103079214960LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x406 = INT64_MIN;
	uint32_t x407 = 83249U;

	t89 = ((x405|x406)*(x407&x408));

	if (t89 != -1605632LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x409 = -1;
	uint32_t x410 = 5822U;
	int16_t x411 = -1;
	static int8_t x412 = -1;
	volatile uint32_t t90 = 227U;

	t90 = ((x409|x410)*(x411&x412));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x414 = UINT8_MAX;
	uint16_t x416 = UINT16_MAX;
	static uint32_t t91 = 2948U;

	t91 = ((x413|x414)*(x415&x416));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x419 = 73U;
	volatile int32_t x420 = INT32_MAX;
	int64_t t92 = -8230879LL;

	t92 = ((x417|x418)*(x419&x420));

	if (t92 != -73LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x422 = -1LL;
	static int8_t x423 = INT8_MIN;
	static int16_t x424 = INT16_MIN;
	volatile int64_t t93 = -1LL;

	t93 = ((x421|x422)*(x423&x424));

	if (t93 != 32768LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x425 = UINT32_MAX;
	volatile uint64_t x427 = UINT64_MAX;
	volatile int32_t x428 = -1;
	volatile uint64_t t94 = 131318015346LLU;

	t94 = ((x425|x426)*(x427&x428));

	if (t94 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x430 = -1;
	volatile uint16_t x431 = 1U;
	int32_t x432 = INT32_MAX;

	t95 = ((x429|x430)*(x431&x432));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x433 = 12730638LLU;
	static uint16_t x434 = 168U;
	uint16_t x435 = 863U;
	volatile uint16_t x436 = 14152U;
	uint64_t t96 = 99304LLU;

	t96 = ((x433|x434)*(x435&x436));

	if (t96 != 10693870320LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x437 = UINT64_MAX;
	int16_t x438 = INT16_MIN;
	int64_t x439 = -1LL;
	int8_t x440 = -1;
	volatile uint64_t t97 = 3LLU;

	t97 = ((x437|x438)*(x439&x440));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x441 = 12;
	int8_t x442 = -3;
	uint64_t x443 = 805LLU;
	uint16_t x444 = 0U;

	t98 = ((x441|x442)*(x443&x444));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x445 = 1937825670088359LLU;
	uint16_t x446 = 1U;
	uint16_t x447 = UINT16_MAX;
	uint64_t t99 = 4316641189139996378LLU;

	t99 = ((x445|x446)*(x447&x448));

	if (t99 != 8156501510656604505LLU) { NG(); } else { ; }
	
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

