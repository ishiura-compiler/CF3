#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MAX;
volatile int32_t x3 = 447;
static int64_t t1 = -186264622448LL;
int32_t x24 = INT32_MAX;
static uint16_t x55 = 4U;
int8_t x59 = INT8_MIN;
uint8_t x66 = UINT8_MAX;
volatile int16_t x68 = -1;
int16_t x69 = -1;
int32_t x71 = -1;
volatile uint64_t t11 = UINT64_MAX;
volatile uint64_t t14 = 406580996784982032LLU;
uint64_t x92 = 20127680153860LLU;
uint64_t t15 = 59647722LLU;
int16_t x115 = -1;
uint8_t x116 = 60U;
static uint32_t x124 = 493U;
int32_t t24 = 169;
int16_t x131 = INT16_MIN;
volatile int64_t t25 = 547LL;
int8_t x138 = 11;
int32_t x140 = INT32_MIN;
volatile int32_t t27 = -36;
static uint16_t x143 = UINT16_MAX;
volatile uint8_t x144 = UINT8_MAX;
static int32_t t28 = 0;
int16_t x150 = -1;
int16_t x151 = INT16_MIN;
int32_t t29 = -945718842;
int16_t x160 = -498;
int16_t x164 = INT16_MIN;
volatile uint32_t t32 = 438027922U;
int32_t x174 = INT32_MIN;
int64_t t35 = -10729640847LL;
static int8_t x177 = -1;
uint32_t t36 = UINT32_MAX;
uint8_t x181 = 69U;
int64_t t37 = 494LL;
int32_t x190 = 78166561;
static uint8_t x191 = 5U;
int8_t x199 = INT8_MIN;
int8_t x200 = 1;
uint8_t x205 = 27U;
volatile int32_t x206 = -13673;
int16_t x208 = INT16_MAX;
int8_t x219 = -26;
volatile int32_t x232 = INT32_MIN;
volatile int16_t x234 = INT16_MIN;
int16_t x236 = 134;
volatile int64_t t47 = -6260LL;
int16_t x246 = INT16_MIN;
static volatile int16_t x247 = INT16_MAX;
volatile int64_t t52 = 48419130LL;
static uint32_t t55 = 130U;
int64_t t56 = -34365644398976886LL;
int8_t x284 = -1;
volatile int32_t t58 = 943382;
volatile int64_t x285 = INT64_MIN;
int64_t x291 = -1LL;
static int8_t x295 = 33;
volatile int32_t x302 = INT32_MIN;
volatile int16_t x315 = INT16_MIN;
volatile int64_t t68 = 0LL;
volatile uint64_t x329 = 902LLU;
uint8_t x332 = 17U;
volatile int64_t x333 = -1LL;
static uint64_t x334 = 2189312270433835LLU;
int8_t x335 = -1;
volatile uint64_t t70 = UINT64_MAX;
int16_t x338 = 1067;
volatile int32_t x351 = 288857877;
static int16_t x352 = INT16_MIN;
uint8_t x353 = 32U;
int16_t x356 = INT16_MIN;
volatile int8_t x365 = 28;
int8_t x366 = 2;
uint32_t x374 = 829U;
uint64_t x376 = 191177297490LLU;
uint16_t x382 = 17380U;
static int64_t x383 = -1LL;
uint8_t x384 = 0U;
int32_t x386 = INT32_MIN;
uint32_t x389 = 29253703U;
volatile uint32_t t81 = 4755053U;
volatile uint64_t x395 = 53LLU;
volatile uint64_t t82 = 553782065557214LLU;
uint8_t x400 = UINT8_MAX;
uint8_t x405 = UINT8_MAX;
volatile int8_t x407 = -3;
int16_t x409 = INT16_MIN;
int64_t x415 = -1LL;
volatile int64_t x420 = INT64_MIN;
volatile uint8_t x426 = 2U;
volatile int64_t x438 = 3058611LL;
int64_t t90 = 1684356LL;
volatile uint8_t x445 = UINT8_MAX;
static volatile uint16_t x448 = 5U;
volatile uint32_t t93 = 461742U;
int64_t x455 = -5LL;
volatile int8_t x456 = INT8_MIN;
int64_t t94 = -19167LL;
static int64_t t95 = 538035675173258050LL;
uint64_t t96 = 5216274354LLU;


void f0(void) {
	int8_t x1 = 1;
	static volatile int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 2989LL;

	t0 = (x1|((x2+x3)^x4));

	if (t0 != 9223372036854742593LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -2;
	int32_t x6 = -1;
	volatile int16_t x7 = INT16_MIN;
	int64_t x8 = -1LL;

	t1 = (x5|((x6+x7)^x8));

	if (t1 != -2LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 1568068358LLU;
	volatile int64_t x10 = 2LL;
	int16_t x11 = -1;
	static int8_t x12 = -1;
	uint64_t t2 = 8661625823848445LLU;

	t2 = (x9|((x10+x11)^x12));

	if (t2 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -5650772LL;
	uint32_t x14 = UINT32_MAX;
	uint32_t x15 = 4U;
	int64_t x16 = INT64_MAX;
	volatile int64_t t3 = 25LL;

	t3 = (x13|((x14+x15)^x16));

	if (t3 != -4LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 54996U;
	static uint16_t x18 = 4759U;
	int32_t x19 = -1;
	static uint64_t x20 = 2892LLU;
	volatile uint64_t t4 = 16LLU;

	t4 = (x17|((x18+x19)^x20));

	if (t4 != 57310LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int16_t x22 = INT16_MIN;
	int8_t x23 = -1;
	volatile int32_t t5 = 7033375;

	t5 = (x21|((x22+x23)^x24));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -7;
	static int16_t x30 = -1;
	int16_t x31 = INT16_MIN;
	int64_t x32 = INT64_MIN;
	volatile int64_t t6 = -1LL;

	t6 = (x29|((x30+x31)^x32));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = -1;
	static volatile uint32_t x42 = UINT32_MAX;
	int8_t x43 = -15;
	uint64_t x44 = 6LLU;
	uint64_t t7 = UINT64_MAX;

	t7 = (x41|((x42+x43)^x44));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x53 = 13U;
	static int64_t x54 = -1LL;
	int64_t x56 = INT64_MAX;
	static int64_t t8 = 8113LL;

	t8 = (x53|((x54+x55)^x56));

	if (t8 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x57 = UINT8_MAX;
	int8_t x58 = INT8_MIN;
	volatile int64_t x60 = -1LL;
	static volatile int64_t t9 = 31608937370LL;

	t9 = (x57|((x58+x59)^x60));

	if (t9 != 255LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x65 = 52U;
	uint64_t x67 = UINT64_MAX;
	volatile uint64_t t10 = 133509043928LLU;

	t10 = (x65|((x66+x67)^x68));

	if (t10 != 18446744073709551413LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x70 = 1868318;
	static uint64_t x72 = UINT64_MAX;

	t11 = (x69|((x70+x71)^x72));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = 0;
	int8_t x74 = INT8_MIN;
	int8_t x75 = 12;
	static int32_t x76 = 60;
	volatile int32_t t12 = -1323299;

	t12 = (x73|((x74+x75)^x76));

	if (t12 != -80) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = -1;
	int16_t x78 = -1;
	volatile int8_t x79 = INT8_MAX;
	static int8_t x80 = INT8_MIN;
	int32_t t13 = -19160;

	t13 = (x77|((x78+x79)^x80));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x85 = 30973U;
	static int64_t x86 = -288718LL;
	static volatile uint64_t x87 = UINT64_MAX;
	int16_t x88 = 4;

	t14 = (x85|((x86+x87)^x88));

	if (t14 != 18446744073709287677LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x89 = 0LLU;
	int16_t x90 = 32;
	int8_t x91 = -1;

	t15 = (x89|((x90+x91)^x92));

	if (t15 != 20127680153883LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = INT16_MAX;
	int8_t x94 = 53;
	static int8_t x95 = -1;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t16 = -39670559;

	t16 = (x93|((x94+x95)^x96));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = -1;
	int16_t x98 = INT16_MIN;
	uint32_t x99 = 209647150U;
	int64_t x100 = INT64_MAX;
	int64_t t17 = 7LL;

	t17 = (x97|((x98+x99)^x100));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = INT16_MIN;
	uint64_t x102 = 14373LLU;
	int8_t x103 = 14;
	static int16_t x104 = -1;
	volatile uint64_t t18 = 4458537809839382932LLU;

	t18 = (x101|((x102+x103)^x104));

	if (t18 != 18446744073709537228LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x105 = INT32_MIN;
	int8_t x106 = INT8_MIN;
	volatile uint8_t x107 = 2U;
	static volatile int16_t x108 = 0;
	static int32_t t19 = -17327101;

	t19 = (x105|((x106+x107)^x108));

	if (t19 != -126) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x109 = UINT16_MAX;
	volatile int8_t x110 = INT8_MIN;
	uint16_t x111 = 2U;
	volatile int16_t x112 = INT16_MIN;
	volatile int32_t t20 = -1;

	t20 = (x109|((x110+x111)^x112));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x113 = 223U;
	int16_t x114 = INT16_MIN;
	int32_t t21 = 862800;

	t21 = (x113|((x114+x115)^x116));

	if (t21 != -32801) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MIN;
	int32_t x119 = -1;
	int8_t x120 = INT8_MAX;
	volatile int32_t t22 = 1;

	t22 = (x117|((x118+x119)^x120));

	if (t22 != -32896) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = INT64_MAX;
	volatile uint64_t x122 = 500LLU;
	uint32_t x123 = 62920U;
	static uint64_t t23 = 9LLU;

	t23 = (x121|((x122+x123)^x124));

	if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x125 = -1;
	static int16_t x126 = -1;
	static int32_t x127 = INT32_MAX;
	int32_t x128 = -25865;

	t24 = (x125|((x126+x127)^x128));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MIN;
	volatile int32_t x132 = INT32_MIN;

	t25 = (x129|((x130+x131)^x132));

	if (t25 != -9223372034707357696LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = -47;
	int8_t x134 = INT8_MIN;
	static int32_t x135 = -507066379;
	volatile uint64_t x136 = UINT64_MAX;
	volatile uint64_t t26 = 2LLU;

	t26 = (x133|((x134+x135)^x136));

	if (t26 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x137 = 12U;
	int32_t x139 = -1;

	t27 = (x137|((x138+x139)^x140));

	if (t27 != -2147483634) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x141 = 10U;
	static int16_t x142 = -29;

	t28 = (x141|((x142+x143)^x144));

	if (t28 != 65311) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = 1;
	volatile int32_t x152 = 3926563;

	t29 = (x149|((x150+x151)^x152));

	if (t29 != -3893795) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x153 = 4;
	volatile int16_t x154 = 6823;
	int64_t x155 = INT64_MIN;
	int16_t x156 = INT16_MIN;
	volatile int64_t t30 = 8393284575043LL;

	t30 = (x153|((x154+x155)^x156));

	if (t30 != 9223372036854749863LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x157 = INT32_MAX;
	volatile int64_t x158 = INT64_MIN;
	uint32_t x159 = 2740522U;
	int64_t t31 = INT64_MAX;

	t31 = (x157|((x158+x159)^x160));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = 0;
	static uint32_t x162 = 0U;
	int8_t x163 = INT8_MAX;

	t32 = (x161|((x162+x163)^x164));

	if (t32 != 4294934655U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x165 = INT32_MAX;
	volatile int64_t x166 = INT64_MIN;
	uint16_t x167 = 1U;
	static int64_t x168 = -659LL;
	int64_t t33 = INT64_MAX;

	t33 = (x165|((x166+x167)^x168));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x169 = UINT32_MAX;
	static uint16_t x170 = 0U;
	uint8_t x171 = 1U;
	uint32_t x172 = 2349U;
	volatile uint32_t t34 = UINT32_MAX;

	t34 = (x169|((x170+x171)^x172));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x173 = 54U;
	int64_t x175 = 450LL;
	int8_t x176 = -24;

	t35 = (x173|((x174+x175)^x176));

	if (t35 != 2147483198LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x178 = -1;
	static uint32_t x179 = UINT32_MAX;
	int8_t x180 = INT8_MIN;

	t36 = (x177|((x178+x179)^x180));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x182 = INT8_MIN;
	int64_t x183 = 103370589993LL;
	int8_t x184 = 28;

	t37 = (x181|((x182+x183)^x184));

	if (t37 != 103370589941LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x189 = INT8_MAX;
	int64_t x192 = INT64_MIN;
	static volatile int64_t t38 = -2084759109829679LL;

	t38 = (x189|((x190+x191)^x192));

	if (t38 != -9223372036776609153LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x197 = INT16_MAX;
	int16_t x198 = 172;
	volatile int32_t t39 = 0;

	t39 = (x197|((x198+x199)^x200));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x201 = -169578017698699LL;
	int16_t x202 = -187;
	int64_t x203 = -78708423495LL;
	int32_t x204 = -116;
	volatile int64_t t40 = -2386LL;

	t40 = (x201|((x202+x203)^x204));

	if (t40 != -169499349255049LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x207 = 3U;
	int32_t t41 = -177824;

	t41 = (x205|((x206+x207)^x208));

	if (t41 != -19073) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = INT32_MAX;
	int16_t x211 = -1;
	int32_t x212 = INT32_MIN;
	int32_t t42 = 30;

	t42 = (x209|((x210+x211)^x212));

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x213 = 1354017282U;
	int64_t x214 = -4018LL;
	uint16_t x215 = UINT16_MAX;
	int16_t x216 = 4;
	int64_t t43 = -6049015735LL;

	t43 = (x213|((x214+x215)^x216));

	if (t43 != 1354037835LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x217 = INT8_MAX;
	int16_t x218 = INT16_MIN;
	int32_t x220 = 228;
	int32_t t44 = -693799007;

	t44 = (x217|((x218+x219)^x220));

	if (t44 != -32897) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x221 = 1286389746U;
	int64_t x222 = INT64_MIN;
	volatile uint32_t x223 = 4187723U;
	int64_t x224 = -1129094122LL;
	static int64_t t45 = 5776045032332165LL;

	t45 = (x221|((x222+x223)^x224));

	if (t45 != 9223372036798988287LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x229 = INT32_MAX;
	volatile int32_t x230 = INT32_MAX;
	uint32_t x231 = UINT32_MAX;
	static volatile uint32_t t46 = UINT32_MAX;

	t46 = (x229|((x230+x231)^x232));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x233 = INT64_MIN;
	uint16_t x235 = UINT16_MAX;

	t47 = (x233|((x234+x235)^x236));

	if (t47 != -9223372036854743175LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x237 = -1;
	static volatile int8_t x238 = INT8_MAX;
	static int16_t x239 = -1;
	static int64_t x240 = INT64_MIN;
	int64_t t48 = -760965755762738LL;

	t48 = (x237|((x238+x239)^x240));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x241 = UINT8_MAX;
	volatile int8_t x242 = -1;
	uint8_t x243 = 2U;
	static int64_t x244 = INT64_MAX;
	volatile int64_t t49 = INT64_MAX;

	t49 = (x241|((x242+x243)^x244));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x245 = -881LL;
	int16_t x248 = -2;
	volatile int64_t t50 = 96965757113LL;

	t50 = (x245|((x246+x247)^x248));

	if (t50 != -881LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x249 = INT16_MIN;
	int64_t x250 = 5136737489611853LL;
	int8_t x251 = INT8_MAX;
	static int32_t x252 = INT32_MAX;
	volatile int64_t t51 = 1LL;

	t51 = (x249|((x250+x251)^x252));

	if (t51 != -27853LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x257 = 2U;
	volatile int32_t x258 = INT32_MAX;
	volatile int64_t x259 = 172575LL;
	static uint8_t x260 = 41U;

	t52 = (x257|((x258+x259)^x260));

	if (t52 != 2147656247LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x261 = 4225U;
	int8_t x262 = -1;
	uint64_t x263 = 889238780LLU;
	volatile int32_t x264 = INT32_MIN;
	volatile uint64_t t53 = 56901LLU;

	t53 = (x261|((x262+x263)^x264));

	if (t53 != 18446744072451306747LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x265 = 0U;
	static uint64_t x266 = 3LLU;
	static int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MIN;
	volatile uint64_t t54 = 64634LLU;

	t54 = (x265|((x266+x267)^x268));

	if (t54 != 9223372036854743043LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x269 = 14U;
	uint32_t x270 = 97U;
	uint32_t x271 = UINT32_MAX;
	int16_t x272 = -5798;

	t55 = (x269|((x270+x271)^x272));

	if (t55 != 4294961470U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x273 = 35;
	int32_t x274 = -1;
	int64_t x275 = 961LL;
	static int64_t x276 = INT64_MIN;

	t56 = (x273|((x274+x275)^x276));

	if (t56 != -9223372036854774813LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x277 = 140309832100999263LL;
	volatile uint8_t x278 = 1U;
	int16_t x279 = INT16_MAX;
	volatile uint8_t x280 = UINT8_MAX;
	volatile int64_t t57 = 526976LL;

	t57 = (x277|((x278+x279)^x280));

	if (t57 != 140309832100999423LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = INT8_MIN;
	volatile uint8_t x282 = 1U;
	volatile int8_t x283 = INT8_MIN;

	t58 = (x281|((x282+x283)^x284));

	if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x286 = INT8_MIN;
	uint32_t x287 = UINT32_MAX;
	volatile int64_t x288 = 715748LL;
	volatile int64_t t59 = 135148005871LL;

	t59 = (x285|((x286+x287)^x288));

	if (t59 != -9223372032560524133LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x289 = 4U;
	static int16_t x290 = -1;
	static int16_t x292 = INT16_MAX;
	int64_t t60 = 403599574601217264LL;

	t60 = (x289|((x290+x291)^x292));

	if (t60 != -32763LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x293 = 9U;
	int8_t x294 = -5;
	int16_t x296 = 1;
	int32_t t61 = 6286276;

	t61 = (x293|((x294+x295)^x296));

	if (t61 != 29) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x297 = INT64_MAX;
	int8_t x298 = 0;
	int32_t x299 = 1876428;
	int32_t x300 = INT32_MIN;
	int64_t t62 = 2193LL;

	t62 = (x297|((x298+x299)^x300));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = -1;
	int32_t x303 = INT32_MAX;
	static int8_t x304 = INT8_MIN;
	int32_t t63 = 132;

	t63 = (x301|((x302+x303)^x304));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = 0;
	volatile uint64_t x306 = 50600661748LLU;
	static uint8_t x307 = 11U;
	static int32_t x308 = INT32_MIN;
	static volatile uint64_t t64 = 1638454207LLU;

	t64 = (x305|((x306+x307)^x308));

	if (t64 != 18446744023378481919LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x309 = INT8_MIN;
	static uint64_t x310 = UINT64_MAX;
	int64_t x311 = INT64_MAX;
	uint16_t x312 = 1009U;
	uint64_t t65 = 736LLU;

	t65 = (x309|((x310+x311)^x312));

	if (t65 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = -1;
	uint8_t x314 = 47U;
	static uint16_t x316 = 537U;
	volatile int32_t t66 = 92023976;

	t66 = (x313|((x314+x315)^x316));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x317 = -1LL;
	uint8_t x318 = UINT8_MAX;
	int16_t x319 = INT16_MAX;
	int16_t x320 = -851;
	int64_t t67 = 990337220552118LL;

	t67 = (x317|((x318+x319)^x320));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x325 = INT8_MIN;
	int8_t x326 = INT8_MAX;
	int16_t x327 = 6653;
	int64_t x328 = INT64_MAX;

	t68 = (x325|((x326+x327)^x328));

	if (t68 != -125LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x330 = UINT64_MAX;
	int8_t x331 = INT8_MIN;
	static volatile uint64_t t69 = 488396587963347LLU;

	t69 = (x329|((x330+x331)^x332));

	if (t69 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x336 = INT16_MIN;

	t70 = (x333|((x334+x335)^x336));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x337 = -7963534;
	volatile uint8_t x339 = 1U;
	int16_t x340 = INT16_MIN;
	int32_t t71 = -5;

	t71 = (x337|((x338+x339)^x340));

	if (t71 != -898) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = INT32_MIN;
	uint8_t x346 = 28U;
	static int64_t x347 = INT64_MIN;
	int64_t x348 = -3LL;
	int64_t t72 = 169784888192886LL;

	t72 = (x345|((x346+x347)^x348));

	if (t72 != -31LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x349 = INT64_MAX;
	static int64_t x350 = INT64_MIN;
	int64_t t73 = INT64_MAX;

	t73 = (x349|((x350+x351)^x352));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x354 = INT64_MIN;
	static uint8_t x355 = UINT8_MAX;
	volatile int64_t t74 = 3165LL;

	t74 = (x353|((x354+x355)^x356));

	if (t74 != 9223372036854743295LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x357 = UINT32_MAX;
	int16_t x358 = INT16_MIN;
	static uint32_t x359 = 21U;
	volatile int64_t x360 = INT64_MIN;
	int64_t t75 = 392980358475LL;

	t75 = (x357|((x358+x359)^x360));

	if (t75 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x367 = -16354;
	volatile int32_t x368 = INT32_MIN;
	volatile int32_t t76 = 129338;

	t76 = (x365|((x366+x367)^x368));

	if (t76 != 2147467324) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x373 = INT16_MIN;
	int32_t x375 = -127539;
	static volatile uint64_t t77 = 172034265412068364LLU;

	t77 = (x373|((x374+x375)^x376));

	if (t77 != 18446744073709526872LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x377 = 48U;
	uint64_t x378 = 3716262291LLU;
	int32_t x379 = -74137290;
	int32_t x380 = INT32_MIN;
	uint64_t t78 = 3LLU;

	t78 = (x377|((x378+x379)^x380));

	if (t78 != 18446744070909225721LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x381 = 760144380LLU;
	volatile uint64_t t79 = 491947951318958536LLU;

	t79 = (x381|((x382+x383)^x384));

	if (t79 != 760144895LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x385 = INT64_MIN;
	uint16_t x387 = 15U;
	int64_t x388 = -1LL;
	volatile int64_t t80 = -2713LL;

	t80 = (x385|((x386+x387)^x388));

	if (t80 != -9223372034707292176LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x390 = -1;
	uint16_t x391 = 183U;
	volatile uint32_t x392 = 9U;

	t81 = (x389|((x390+x391)^x392));

	if (t81 != 29253887U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x393 = 4237285061840LL;
	uint16_t x394 = 92U;
	int16_t x396 = INT16_MIN;

	t82 = (x393|((x394+x395)^x396));

	if (t82 != 18446744073709548753LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x397 = INT16_MIN;
	uint8_t x398 = UINT8_MAX;
	int8_t x399 = -1;
	static int32_t t83 = 3;

	t83 = (x397|((x398+x399)^x400));

	if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x406 = UINT8_MAX;
	volatile int64_t x408 = -1LL;
	volatile int64_t t84 = 2101839656046785769LL;

	t84 = (x405|((x406+x407)^x408));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x410 = INT32_MAX;
	int64_t x411 = INT64_MIN;
	int32_t x412 = -1;
	int64_t t85 = 833713601405661LL;

	t85 = (x409|((x410+x411)^x412));

	if (t85 != -32768LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x413 = UINT8_MAX;
	int64_t x414 = -62LL;
	volatile int8_t x416 = -1;
	int64_t t86 = -3306416472694845LL;

	t86 = (x413|((x414+x415)^x416));

	if (t86 != 255LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x417 = 142617555LLU;
	static int8_t x418 = -1;
	uint16_t x419 = 4690U;
	static uint64_t t87 = 367LLU;

	t87 = (x417|((x418+x419)^x420));

	if (t87 != 9223372036997397459LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x425 = 208859177U;
	uint32_t x427 = 14442U;
	uint64_t x428 = 1534857LLU;
	static uint64_t t88 = 4LLU;

	t88 = (x425|((x426+x427)^x428));

	if (t88 != 209187821LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x429 = UINT64_MAX;
	volatile uint32_t x430 = 59254U;
	static int32_t x431 = -14;
	static int16_t x432 = INT16_MAX;
	static uint64_t t89 = UINT64_MAX;

	t89 = (x429|((x430+x431)^x432));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x437 = 6U;
	int64_t x439 = -1LL;
	int32_t x440 = -26410;

	t90 = (x437|((x438+x439)^x440));

	if (t90 != -3067034LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x441 = 14;
	int16_t x442 = INT16_MAX;
	int32_t x443 = -1;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t91 = -116;

	t91 = (x441|((x442+x443)^x444));

	if (t91 != 32783) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x446 = INT64_MAX;
	int64_t x447 = INT64_MIN;
	static int64_t t92 = -22462584501843204LL;

	t92 = (x445|((x446+x447)^x448));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x449 = 1222U;
	volatile int8_t x450 = INT8_MIN;
	static int8_t x451 = -1;
	int16_t x452 = -218;

	t93 = (x449|((x450+x451)^x452));

	if (t93 != 1247U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x453 = 3U;
	volatile uint32_t x454 = UINT32_MAX;

	t94 = (x453|((x454+x455)^x456));

	if (t94 != -4294967173LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x461 = INT64_MIN;
	uint8_t x462 = UINT8_MAX;
	uint16_t x463 = 394U;
	int32_t x464 = 3;

	t95 = (x461|((x462+x463)^x464));

	if (t95 != -9223372036854775158LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x465 = 19565U;
	static int64_t x466 = INT64_MAX;
	uint64_t x467 = 4624068072125332210LLU;
	volatile int16_t x468 = 0;

	t96 = (x465|((x466+x467)^x468));

	if (t96 != 13847440108980109053LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x469 = 1690U;
	uint32_t x470 = 342U;
	int32_t x471 = 53309;
	static int16_t x472 = 0;
	uint32_t t97 = 14U;

	t97 = (x469|((x470+x471)^x472));

	if (t97 != 55195U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x481 = 23491U;
	static volatile int8_t x482 = -1;
	int8_t x483 = -1;
	int64_t x484 = INT64_MIN;
	int64_t t98 = INT64_MAX;

	t98 = (x481|((x482+x483)^x484));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x485 = INT16_MAX;
	int64_t x486 = INT64_MAX;
	volatile uint64_t x487 = UINT64_MAX;
	int16_t x488 = -6;
	uint64_t t99 = 42402282LLU;

	t99 = (x485|((x486+x487)^x488));

	if (t99 != 9223372036854808575LLU) { NG(); } else { ; }
	
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

