#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 1U;
uint16_t x25 = UINT16_MAX;
uint8_t x29 = UINT8_MAX;
uint64_t x33 = 179379279LLU;
int64_t x37 = -1LL;
static int8_t x49 = -2;
static uint8_t x54 = UINT8_MAX;
volatile uint32_t t13 = 48549225U;
uint16_t x57 = 16303U;
volatile int16_t x62 = INT16_MIN;
uint64_t x63 = 15541LLU;
volatile int64_t x78 = INT64_MIN;
uint8_t x79 = 32U;
static volatile int32_t x82 = -127890;
volatile int64_t x83 = 260438LL;
uint32_t t21 = 248050U;
uint8_t x89 = UINT8_MAX;
uint16_t x91 = 3323U;
uint32_t x98 = UINT32_MAX;
static int32_t x99 = INT32_MIN;
int8_t x100 = 1;
volatile int16_t x101 = -3;
volatile int8_t x103 = -1;
int32_t t25 = -378454577;
uint32_t x105 = 16843U;
uint64_t x106 = UINT64_MAX;
volatile int64_t t29 = -1LL;
static uint32_t x125 = UINT32_MAX;
volatile int64_t t31 = 0LL;
static int16_t x129 = 5247;
uint8_t x130 = UINT8_MAX;
volatile int32_t x132 = INT32_MAX;
int32_t x136 = INT32_MIN;
static int8_t x137 = INT8_MIN;
int16_t x138 = INT16_MAX;
int8_t x140 = INT8_MIN;
volatile int32_t x142 = 283621;
int8_t x143 = 19;
static int32_t x147 = INT32_MIN;
int32_t t37 = 85;
uint32_t t38 = 1602U;
static int64_t x157 = INT64_MAX;
uint8_t x168 = UINT8_MAX;
int8_t x172 = -3;
volatile int32_t t42 = -55555924;
volatile uint64_t t44 = 159309282607445LLU;
volatile int32_t t45 = 47796;
volatile int16_t x189 = -1;
int64_t x195 = INT64_MIN;
static volatile int64_t t48 = -2LL;
int8_t x198 = INT8_MAX;
int16_t x205 = INT16_MAX;
int8_t x216 = INT8_MAX;
static int8_t x231 = -1;
uint8_t x233 = 1U;
static uint8_t x237 = 1U;
int32_t x240 = INT32_MIN;
uint8_t x241 = 48U;
volatile int16_t x244 = INT16_MAX;
static volatile uint64_t t60 = 6024LLU;
int64_t t62 = 2986327626LL;
uint8_t x255 = 47U;
int8_t x264 = INT8_MIN;
int64_t x277 = -1066400LL;
uint32_t x281 = 83U;
volatile uint32_t t70 = 191754U;
volatile int8_t x292 = INT8_MIN;
int8_t x293 = -1;
volatile int16_t x297 = INT16_MIN;
volatile uint32_t x300 = 48532749U;
int8_t x301 = INT8_MAX;
volatile int8_t x305 = INT8_MAX;
volatile uint64_t x310 = 301LLU;
int32_t x313 = INT32_MIN;
volatile int8_t x317 = INT8_MIN;
int64_t x318 = -127789178533LL;
int32_t x319 = 16301;
static int8_t x321 = INT8_MIN;
volatile int32_t x324 = INT32_MAX;
volatile int32_t t80 = 9;
int8_t x326 = 13;
int32_t t81 = -77084;
volatile int64_t x331 = 49LL;
int64_t x348 = -1LL;
int64_t x359 = INT64_MIN;
static volatile uint64_t t90 = 114019034983LLU;
uint64_t x376 = 29696404182LLU;
int32_t x378 = 253520734;
static uint16_t x379 = 2U;
static uint64_t x383 = 53820309023657457LLU;
uint64_t t95 = 60931LLU;
int32_t t97 = -2;
static uint32_t x399 = 24839141U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x2 = -1;
	int64_t x3 = -559746059LL;
	int64_t x4 = INT64_MAX;
	static volatile int64_t t0 = 262548167906LL;

	t0 = ((x1<=x2)&(x3&x4));

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint8_t x7 = 27U;
	uint32_t x8 = 5392U;
	volatile uint32_t t1 = 4621U;

	t1 = ((x5<=x6)&(x7&x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 141552LLU;
	uint8_t x10 = 60U;
	volatile int8_t x11 = INT8_MIN;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 2;

	t2 = ((x9<=x10)&(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -24859112991649541LL;
	int8_t x14 = INT8_MAX;
	int64_t x15 = INT64_MIN;
	static int64_t x16 = -482292479786592LL;
	volatile int64_t t3 = -161042LL;

	t3 = ((x13<=x14)&(x15&x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	static uint8_t x18 = 32U;
	int64_t x19 = -1LL;
	uint16_t x20 = 5U;
	volatile int64_t t4 = 6918597LL;

	t4 = ((x17<=x18)&(x19&x20));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MAX;
	int32_t x22 = INT32_MIN;
	uint32_t x23 = 334106714U;
	int32_t x24 = INT32_MAX;
	uint32_t t5 = 386591U;

	t5 = ((x21<=x22)&(x23&x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x26 = INT64_MIN;
	uint32_t x27 = 5U;
	int8_t x28 = -14;
	uint32_t t6 = 5U;

	t6 = ((x25<=x26)&(x27&x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x30 = INT16_MAX;
	volatile uint8_t x31 = 102U;
	static int64_t x32 = 107185910544389610LL;
	int64_t t7 = -1711LL;

	t7 = ((x29<=x30)&(x31&x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = 1U;
	uint32_t x35 = 6940U;
	int16_t x36 = -7890;
	volatile uint32_t t8 = 19710U;

	t8 = ((x33<=x34)&(x35&x36));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x38 = 6476208486860215649LLU;
	int8_t x39 = INT8_MIN;
	volatile int64_t x40 = -6941491064066LL;
	volatile int64_t t9 = -7279160201LL;

	t9 = ((x37<=x38)&(x39&x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	static int8_t x42 = INT8_MIN;
	volatile int32_t x43 = INT32_MIN;
	int64_t x44 = -5206100503039LL;
	volatile int64_t t10 = -120814931440LL;

	t10 = ((x41<=x42)&(x43&x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	int32_t x46 = 2;
	int16_t x47 = INT16_MAX;
	static int64_t x48 = -1LL;
	volatile int64_t t11 = -24713LL;

	t11 = ((x45<=x46)&(x47&x48));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x50 = INT8_MIN;
	int64_t x51 = INT64_MAX;
	volatile int8_t x52 = 1;
	static int64_t t12 = 2966494166LL;

	t12 = ((x49<=x50)&(x51&x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 916U;
	volatile uint32_t x55 = 127219740U;
	volatile uint32_t x56 = 29611376U;

	t13 = ((x53<=x54)&(x55&x56));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = 1448;
	int16_t x59 = INT16_MIN;
	uint64_t x60 = 2092919LLU;
	uint64_t t14 = 509627528077289LLU;

	t14 = ((x57<=x58)&(x59&x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int32_t x64 = -1;
	uint64_t t15 = 701878583LLU;

	t15 = ((x61<=x62)&(x63&x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	int64_t x66 = INT64_MAX;
	int8_t x67 = INT8_MIN;
	volatile int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 738682;

	t16 = ((x65<=x66)&(x67&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = UINT64_MAX;
	static int16_t x70 = INT16_MAX;
	int8_t x71 = INT8_MAX;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 86;

	t17 = ((x69<=x70)&(x71&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = 7675641U;
	uint64_t x74 = UINT64_MAX;
	int8_t x75 = 1;
	uint8_t x76 = UINT8_MAX;
	int32_t t18 = -27;

	t18 = ((x73<=x74)&(x75&x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = -1394826;

	t19 = ((x77<=x78)&(x79&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = 14427U;
	uint16_t x84 = 259U;
	volatile int64_t t20 = 552LL;

	t20 = ((x81<=x82)&(x83&x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 93;
	int16_t x86 = INT16_MIN;
	uint32_t x87 = 1709U;
	int16_t x88 = INT16_MIN;

	t21 = ((x85<=x86)&(x87&x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 2LLU;
	int16_t x92 = INT16_MAX;
	static int32_t t22 = 13936523;

	t22 = ((x89<=x90)&(x91&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 2884U;
	int8_t x94 = -1;
	int8_t x95 = -2;
	uint64_t x96 = 1325538LLU;
	volatile uint64_t t23 = 3782459772887689LLU;

	t23 = ((x93<=x94)&(x95&x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 1U;
	int32_t t24 = -30;

	t24 = ((x97<=x98)&(x99&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = 46U;
	int32_t x104 = -1;

	t25 = ((x101<=x102)&(x103&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x107 = 7201U;
	int32_t x108 = INT32_MAX;
	volatile int32_t t26 = -102594226;

	t26 = ((x105<=x106)&(x107&x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 29315220571LL;
	int8_t x110 = 0;
	volatile int32_t x111 = INT32_MAX;
	int32_t x112 = -1;
	int32_t t27 = 201746711;

	t27 = ((x109<=x110)&(x111&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -20LL;
	static int8_t x114 = INT8_MIN;
	volatile int16_t x115 = INT16_MAX;
	int16_t x116 = -2;
	volatile int32_t t28 = -195532354;

	t28 = ((x113<=x114)&(x115&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 494974179;
	int64_t x118 = INT64_MIN;
	static int16_t x119 = 1;
	int64_t x120 = INT64_MAX;

	t29 = ((x117<=x118)&(x119&x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = -1;
	uint32_t x122 = UINT32_MAX;
	static int16_t x123 = INT16_MAX;
	uint32_t x124 = 1U;
	volatile uint32_t t30 = 3U;

	t30 = ((x121<=x122)&(x123&x124));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x126 = INT8_MIN;
	int64_t x127 = INT64_MIN;
	int32_t x128 = 268922363;

	t31 = ((x125<=x126)&(x127&x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x131 = 1098240505LLU;
	uint64_t t32 = 47582929106191290LLU;

	t32 = ((x129<=x130)&(x131&x132));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = UINT64_MAX;
	static int16_t x134 = INT16_MAX;
	int16_t x135 = 1;
	volatile int32_t t33 = 384077;

	t33 = ((x133<=x134)&(x135&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x139 = 2;
	int32_t t34 = 137;

	t34 = ((x137<=x138)&(x139&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	static int16_t x144 = -3135;
	volatile int32_t t35 = -11;

	t35 = ((x141<=x142)&(x143&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	int8_t x146 = 0;
	int16_t x148 = INT16_MAX;
	volatile int32_t t36 = 1305;

	t36 = ((x145<=x146)&(x147&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	static volatile int32_t x150 = -16804701;
	uint8_t x151 = UINT8_MAX;
	volatile int16_t x152 = 105;

	t37 = ((x149<=x150)&(x151&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MAX;
	uint16_t x154 = UINT16_MAX;
	uint32_t x155 = 12593888U;
	int8_t x156 = -42;

	t38 = ((x153<=x154)&(x155&x156));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = -1;
	volatile uint16_t x159 = 2U;
	static volatile uint8_t x160 = 1U;
	volatile int32_t t39 = 419;

	t39 = ((x157<=x158)&(x159&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	uint16_t x162 = UINT16_MAX;
	volatile uint64_t x163 = 2714538736207588938LLU;
	static int32_t x164 = INT32_MIN;
	static volatile uint64_t t40 = 80444791LLU;

	t40 = ((x161<=x162)&(x163&x164));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	int16_t x166 = INT16_MIN;
	int8_t x167 = INT8_MAX;
	int32_t t41 = 0;

	t41 = ((x165<=x166)&(x167&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 21667380U;
	int64_t x170 = INT64_MIN;
	volatile uint8_t x171 = 5U;

	t42 = ((x169<=x170)&(x171&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 633970;
	volatile int8_t x174 = INT8_MIN;
	volatile int64_t x175 = INT64_MAX;
	uint32_t x176 = 17384277U;
	volatile int64_t t43 = 41283406647432191LL;

	t43 = ((x173<=x174)&(x175&x176));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = -1LL;
	int32_t x178 = INT32_MAX;
	int8_t x179 = INT8_MIN;
	volatile uint64_t x180 = 367521399LLU;

	t44 = ((x177<=x178)&(x179&x180));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MIN;
	static int16_t x182 = INT16_MIN;
	static int16_t x183 = INT16_MIN;
	int8_t x184 = INT8_MIN;

	t45 = ((x181<=x182)&(x183&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int32_t x186 = -1;
	uint64_t x187 = 1046856819764474456LLU;
	static uint64_t x188 = 3172707LLU;
	volatile uint64_t t46 = 186868231LLU;

	t46 = ((x185<=x186)&(x187&x188));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x190 = 2023U;
	uint8_t x191 = UINT8_MAX;
	static volatile int32_t x192 = -1;
	int32_t t47 = 1;

	t47 = ((x189<=x190)&(x191&x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = UINT8_MAX;
	uint8_t x194 = UINT8_MAX;
	int16_t x196 = -1;

	t48 = ((x193<=x194)&(x195&x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = UINT32_MAX;
	int32_t x199 = -1;
	int32_t x200 = -85561;
	volatile int32_t t49 = 11;

	t49 = ((x197<=x198)&(x199&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = -1;
	static uint64_t x202 = 1LLU;
	uint32_t x203 = 4240U;
	uint8_t x204 = 56U;
	volatile uint32_t t50 = 944818308U;

	t50 = ((x201<=x202)&(x203&x204));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x206 = 1394U;
	uint8_t x207 = 0U;
	int8_t x208 = -9;
	int32_t t51 = -1;

	t51 = ((x205<=x206)&(x207&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -50985952;
	volatile int64_t x210 = -272314541007032340LL;
	static uint8_t x211 = UINT8_MAX;
	uint64_t x212 = 418762007LLU;
	volatile uint64_t t52 = 827498892393LLU;

	t52 = ((x209<=x210)&(x211&x212));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	uint16_t x214 = 15U;
	uint8_t x215 = 4U;
	int32_t t53 = -225151;

	t53 = ((x213<=x214)&(x215&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	volatile int64_t x218 = -1LL;
	static int16_t x219 = 38;
	static uint32_t x220 = 9863197U;
	uint32_t t54 = 11223U;

	t54 = ((x217<=x218)&(x219&x220));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = -22;
	volatile uint64_t x222 = UINT64_MAX;
	int16_t x223 = INT16_MIN;
	static volatile uint8_t x224 = 1U;
	static volatile int32_t t55 = 479198;

	t55 = ((x221<=x222)&(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -187;
	uint64_t x226 = 126386115482LLU;
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MAX;
	int32_t t56 = 965;

	t56 = ((x225<=x226)&(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 3;
	int32_t x230 = INT32_MIN;
	int64_t x232 = -1LL;
	int64_t t57 = 139992LL;

	t57 = ((x229<=x230)&(x231&x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x234 = INT16_MAX;
	int64_t x235 = INT64_MIN;
	int64_t x236 = INT64_MIN;
	int64_t t58 = -181002571971701LL;

	t58 = ((x233<=x234)&(x235&x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x238 = UINT64_MAX;
	static int8_t x239 = INT8_MIN;
	volatile int32_t t59 = 19111702;

	t59 = ((x237<=x238)&(x239&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = INT32_MIN;
	uint64_t x243 = UINT64_MAX;

	t60 = ((x241<=x242)&(x243&x244));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 64;
	int32_t x246 = -903685381;
	uint32_t x247 = 114U;
	int32_t x248 = -1;
	volatile uint32_t t61 = 33U;

	t61 = ((x245<=x246)&(x247&x248));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = INT64_MIN;
	volatile uint64_t x250 = 1704301585519795526LLU;
	int8_t x251 = -7;
	int64_t x252 = INT64_MIN;

	t62 = ((x249<=x250)&(x251&x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	volatile uint64_t x254 = UINT64_MAX;
	volatile int64_t x256 = -1LL;
	volatile int64_t t63 = 1LL;

	t63 = ((x253<=x254)&(x255&x256));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	volatile int8_t x258 = INT8_MIN;
	int8_t x259 = -1;
	uint16_t x260 = UINT16_MAX;
	int32_t t64 = 13826185;

	t64 = ((x257<=x258)&(x259&x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = -6;
	volatile int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MIN;
	volatile int64_t t65 = -19112600LL;

	t65 = ((x261<=x262)&(x263&x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -60;
	int16_t x266 = -27;
	int8_t x267 = -22;
	uint32_t x268 = UINT32_MAX;
	volatile uint32_t t66 = 8167603U;

	t66 = ((x265<=x266)&(x267&x268));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MAX;
	int8_t x270 = INT8_MIN;
	int16_t x271 = -839;
	uint64_t x272 = UINT64_MAX;
	static uint64_t t67 = 7701LLU;

	t67 = ((x269<=x270)&(x271&x272));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -4;
	static uint32_t x274 = 635U;
	int64_t x275 = INT64_MIN;
	volatile int8_t x276 = INT8_MAX;
	int64_t t68 = -3686331291LL;

	t68 = ((x273<=x274)&(x275&x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = -1LL;
	int32_t x279 = INT32_MIN;
	static int64_t x280 = INT64_MIN;
	static int64_t t69 = 6261371050285285LL;

	t69 = ((x277<=x278)&(x279&x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = -1;
	int8_t x283 = 1;
	uint32_t x284 = UINT32_MAX;

	t70 = ((x281<=x282)&(x283&x284));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -10;
	uint16_t x286 = 3161U;
	int64_t x287 = -1LL;
	uint16_t x288 = 67U;
	volatile int64_t t71 = -2LL;

	t71 = ((x285<=x286)&(x287&x288));

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 167466LL;
	int32_t x290 = 0;
	int16_t x291 = INT16_MAX;
	int32_t t72 = 888;

	t72 = ((x289<=x290)&(x291&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = INT16_MIN;
	int32_t x295 = 4899275;
	int16_t x296 = INT16_MIN;
	volatile int32_t t73 = -28239;

	t73 = ((x293<=x294)&(x295&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = INT8_MIN;
	uint8_t x299 = 0U;
	uint32_t t74 = 1061672713U;

	t74 = ((x297<=x298)&(x299&x300));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = INT32_MIN;
	int16_t x303 = 143;
	uint8_t x304 = 36U;
	volatile int32_t t75 = 19948310;

	t75 = ((x301<=x302)&(x303&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MIN;
	int16_t x307 = INT16_MIN;
	uint8_t x308 = 1U;
	volatile int32_t t76 = -3845;

	t76 = ((x305<=x306)&(x307&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 14LLU;
	static int8_t x311 = 1;
	static int64_t x312 = -1LL;
	volatile int64_t t77 = 1684923273LL;

	t77 = ((x309<=x310)&(x311&x312));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x314 = 1882LLU;
	int32_t x315 = INT32_MIN;
	uint64_t x316 = 2591149075LLU;
	static uint64_t t78 = 246368049933843349LLU;

	t78 = ((x313<=x314)&(x315&x316));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x320 = 3U;
	int32_t t79 = 1;

	t79 = ((x317<=x318)&(x319&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x322 = 6U;
	int16_t x323 = 1;

	t80 = ((x321<=x322)&(x323&x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MIN;

	t81 = ((x325<=x326)&(x327&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	static int16_t x330 = -5110;
	static int32_t x332 = INT32_MIN;
	static volatile int64_t t82 = -239425090061952LL;

	t82 = ((x329<=x330)&(x331&x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 34U;
	static uint8_t x334 = 0U;
	static int32_t x335 = INT32_MAX;
	static int64_t x336 = INT64_MIN;
	static int64_t t83 = 216165552556202961LL;

	t83 = ((x333<=x334)&(x335&x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 3U;
	static int16_t x338 = -4766;
	uint32_t x339 = 21086U;
	int16_t x340 = 54;
	static uint32_t t84 = 0U;

	t84 = ((x337<=x338)&(x339&x340));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	uint8_t x342 = UINT8_MAX;
	volatile uint64_t x343 = 477633932554LLU;
	static int64_t x344 = -1LL;
	volatile uint64_t t85 = 2637491119844470086LLU;

	t85 = ((x341<=x342)&(x343&x344));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	static volatile uint16_t x346 = UINT16_MAX;
	int32_t x347 = INT32_MAX;
	int64_t t86 = -21714670026385728LL;

	t86 = ((x345<=x346)&(x347&x348));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = INT8_MIN;
	uint64_t x350 = UINT64_MAX;
	int32_t x351 = -1;
	uint16_t x352 = 6U;
	int32_t t87 = 62674;

	t87 = ((x349<=x350)&(x351&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = -1;
	volatile int16_t x354 = INT16_MAX;
	static int16_t x355 = -1;
	uint16_t x356 = 21098U;
	int32_t t88 = 229360;

	t88 = ((x353<=x354)&(x355&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = 10U;
	uint16_t x358 = UINT16_MAX;
	volatile uint8_t x360 = UINT8_MAX;
	int64_t t89 = 7268LL;

	t89 = ((x357<=x358)&(x359&x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	uint64_t x362 = 0LLU;
	static uint64_t x363 = 15713087LLU;
	volatile uint16_t x364 = UINT16_MAX;

	t90 = ((x361<=x362)&(x363&x364));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 215U;
	uint64_t x366 = 72264276504333LLU;
	uint32_t x367 = 71U;
	int8_t x368 = INT8_MIN;
	volatile uint32_t t91 = 0U;

	t91 = ((x365<=x366)&(x367&x368));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	int16_t x370 = INT16_MAX;
	uint32_t x371 = 1319872857U;
	static uint64_t x372 = UINT64_MAX;
	static volatile uint64_t t92 = 182248LLU;

	t92 = ((x369<=x370)&(x371&x372));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = 1;
	int32_t x374 = INT32_MAX;
	uint8_t x375 = 4U;
	volatile uint64_t t93 = 105537129699918428LLU;

	t93 = ((x373<=x374)&(x375&x376));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 1U;
	static int8_t x380 = INT8_MIN;
	volatile int32_t t94 = 0;

	t94 = ((x377<=x378)&(x379&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MIN;
	static int32_t x384 = INT32_MIN;

	t95 = ((x381<=x382)&(x383&x384));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = INT16_MIN;
	static uint32_t x386 = 6544U;
	uint16_t x387 = 2U;
	int64_t x388 = -1LL;
	int64_t t96 = 20388686203LL;

	t96 = ((x385<=x386)&(x387&x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = INT64_MIN;
	volatile int16_t x390 = 11;
	volatile uint8_t x391 = 87U;
	uint8_t x392 = 69U;

	t97 = ((x389<=x390)&(x391&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	int64_t x394 = -1LL;
	static int8_t x395 = 0;
	int64_t x396 = -1LL;
	volatile int64_t t98 = -2300126847LL;

	t98 = ((x393<=x394)&(x395&x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x397 = 66LLU;
	static volatile int16_t x398 = -1;
	volatile int8_t x400 = INT8_MIN;
	uint32_t t99 = 16266762U;

	t99 = ((x397<=x398)&(x399&x400));

	if (t99 != 0U) { NG(); } else { ; }
	
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

