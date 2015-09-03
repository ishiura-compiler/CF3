#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -1;
int32_t t0 = 883649;
volatile int8_t x5 = -1;
static int8_t x7 = INT8_MIN;
volatile int32_t x9 = 343;
int64_t x10 = INT64_MIN;
volatile int32_t t4 = 1721;
int16_t x27 = -38;
int8_t x31 = -1;
int64_t t7 = 2506492606898805173LL;
int64_t x37 = INT64_MAX;
static uint64_t x41 = UINT64_MAX;
uint64_t x45 = 6818395434540857957LLU;
int8_t x46 = INT8_MAX;
static int32_t x47 = 1;
volatile uint8_t x54 = 20U;
uint8_t x60 = UINT8_MAX;
int32_t x62 = INT32_MAX;
int8_t x68 = -39;
volatile uint64_t x71 = UINT64_MAX;
volatile int16_t x72 = -1;
volatile uint64_t t17 = 13998135215827LLU;
static int32_t x75 = INT32_MIN;
int64_t x77 = INT64_MIN;
uint8_t x81 = UINT8_MAX;
volatile uint16_t x82 = 20376U;
static volatile int16_t x84 = INT16_MIN;
uint64_t t20 = 1768810529742LLU;
int64_t x91 = -87012173LL;
int64_t t22 = 172035458402461LL;
uint8_t x95 = 3U;
uint64_t x105 = UINT64_MAX;
int64_t x109 = -1LL;
static int16_t x110 = -273;
int32_t t27 = 3;
int64_t x114 = INT64_MIN;
static uint8_t x126 = 97U;
static volatile int64_t x129 = 77276LL;
static int32_t t34 = -19;
uint32_t x145 = 42U;
uint16_t x146 = UINT16_MAX;
static uint16_t x151 = 5U;
int8_t x157 = 4;
volatile int32_t t39 = -35618;
int64_t x161 = INT64_MIN;
uint32_t t42 = 258U;
volatile int8_t x175 = 52;
int8_t x177 = 13;
static uint64_t x178 = UINT64_MAX;
int16_t x192 = INT16_MIN;
static uint16_t x193 = 0U;
volatile int16_t x201 = INT16_MAX;
static volatile int32_t t50 = 11;
volatile int8_t x207 = -18;
uint64_t t52 = 39771864819LLU;
uint32_t x215 = 1285084856U;
volatile uint8_t x219 = 99U;
int16_t x220 = INT16_MIN;
static volatile uint16_t x236 = UINT16_MAX;
int8_t x240 = INT8_MIN;
uint8_t x246 = 75U;
static volatile uint64_t t61 = 6344181917399LLU;
uint16_t x249 = 50U;
volatile int8_t x250 = 53;
static volatile int16_t x254 = INT16_MIN;
int32_t t66 = 8353826;
static uint16_t x269 = UINT16_MAX;
int16_t x272 = INT16_MIN;
int32_t t67 = -18325;
int8_t x277 = INT8_MIN;
static int8_t x283 = -1;
volatile int32_t t70 = 7761;
int16_t x287 = 1;
int32_t x288 = INT32_MIN;
int32_t t71 = -38;
volatile uint64_t x289 = 8617824227941LLU;
uint16_t x300 = 246U;
static int64_t x301 = 4856415979595LL;
static int8_t x311 = INT8_MAX;
int32_t t77 = 251052433;
int32_t x318 = INT32_MIN;
int32_t x323 = INT32_MIN;
int16_t x324 = 0;
volatile int16_t x328 = INT16_MIN;
static int32_t t81 = -130978029;
volatile uint16_t x331 = UINT16_MAX;
int32_t t82 = 893110079;
int32_t x334 = INT32_MIN;
uint32_t x343 = 1562844476U;
static volatile uint32_t t85 = 98706U;
int64_t x346 = -551256083669755LL;
volatile int32_t t87 = 33841282;
uint16_t x354 = 26U;
static int32_t x375 = INT32_MAX;
int64_t x386 = INT64_MAX;
uint32_t t96 = 3U;
volatile uint16_t x396 = UINT16_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint32_t x2 = 11229U;
	int32_t x3 = INT32_MIN;

	t0 = ((x1<=x2)*(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	volatile int16_t x8 = 8;
	int32_t t1 = 1304684;

	t1 = ((x5<=x6)*(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x11 = -1;
	uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = 40196;

	t2 = ((x9<=x10)*(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int8_t x14 = -1;
	int16_t x15 = -1;
	uint32_t x16 = 49866464U;
	uint32_t t3 = 1U;

	t3 = ((x13<=x14)*(x15&x16));

	if (t3 != 49866464U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	volatile int64_t x18 = -1LL;
	volatile int16_t x19 = -1;
	int16_t x20 = 0;

	t4 = ((x17<=x18)*(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	volatile int64_t x22 = INT64_MIN;
	static volatile int16_t x23 = 1429;
	int16_t x24 = -1;
	int32_t t5 = 4751;

	t5 = ((x21<=x22)*(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	int16_t x26 = INT16_MIN;
	uint64_t x28 = UINT64_MAX;
	static volatile uint64_t t6 = 528814691LLU;

	t6 = ((x25<=x26)*(x27&x28));

	if (t6 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int16_t x30 = INT16_MIN;
	int64_t x32 = INT64_MIN;

	t7 = ((x29<=x30)*(x31&x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	volatile int32_t x34 = -1;
	static uint8_t x35 = 104U;
	int8_t x36 = 0;
	int32_t t8 = 316;

	t8 = ((x33<=x34)*(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x38 = 0U;
	int8_t x39 = -42;
	static int32_t x40 = INT32_MAX;
	volatile int32_t t9 = -122;

	t9 = ((x37<=x38)*(x39&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x42 = INT64_MIN;
	static int64_t x43 = -31351293940319417LL;
	int64_t x44 = INT64_MAX;
	int64_t t10 = 12303663LL;

	t10 = ((x41<=x42)*(x43&x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x48 = 589065LLU;
	uint64_t t11 = 13742362LLU;

	t11 = ((x45<=x46)*(x47&x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	static int8_t x50 = -1;
	int32_t x51 = INT32_MAX;
	int32_t x52 = 1047771;
	volatile int32_t t12 = -482;

	t12 = ((x49<=x50)*(x51&x52));

	if (t12 != 1047771) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x53 = INT16_MIN;
	int16_t x55 = INT16_MAX;
	int32_t x56 = -2763010;
	static volatile int32_t t13 = -998;

	t13 = ((x53<=x54)*(x55&x56));

	if (t13 != 22270) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = 2;
	int8_t x58 = 37;
	volatile int64_t x59 = 1LL;
	volatile int64_t t14 = -35275052835152889LL;

	t14 = ((x57<=x58)*(x59&x60));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = UINT16_MAX;
	int32_t x63 = INT32_MIN;
	int8_t x64 = 1;
	volatile int32_t t15 = 5455;

	t15 = ((x61<=x62)*(x63&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	int64_t x66 = -8377LL;
	volatile int32_t x67 = INT32_MIN;
	int32_t t16 = 224;

	t16 = ((x65<=x66)*(x67&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	int16_t x70 = INT16_MIN;

	t17 = ((x69<=x70)*(x71&x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 23U;
	volatile int16_t x74 = 1719;
	static volatile int8_t x76 = -31;
	int32_t t18 = INT32_MIN;

	t18 = ((x73<=x74)*(x75&x76));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x78 = 3U;
	static volatile uint16_t x79 = UINT16_MAX;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 0;

	t19 = ((x77<=x78)*(x79&x80));

	if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x83 = UINT64_MAX;

	t20 = ((x81<=x82)*(x83&x84));

	if (t20 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -206340LL;
	int32_t x86 = INT32_MAX;
	static int64_t x87 = INT64_MAX;
	static volatile int64_t x88 = INT64_MIN;
	static volatile int64_t t21 = -706LL;

	t21 = ((x85<=x86)*(x87&x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = 84U;
	uint16_t x90 = 11191U;
	static int64_t x92 = -1LL;

	t22 = ((x89<=x90)*(x91&x92));

	if (t22 != -87012173LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	int16_t x94 = INT16_MIN;
	static uint32_t x96 = 50335959U;
	uint32_t t23 = 27269104U;

	t23 = ((x93<=x94)*(x95&x96));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 3197648LLU;
	int16_t x98 = INT16_MIN;
	static uint8_t x99 = 13U;
	uint8_t x100 = 1U;
	int32_t t24 = 5;

	t24 = ((x97<=x98)*(x99&x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 7U;
	volatile int32_t x102 = 372010676;
	volatile int64_t x103 = -1LL;
	volatile uint32_t x104 = UINT32_MAX;
	int64_t t25 = 258141878834512523LL;

	t25 = ((x101<=x102)*(x103&x104));

	if (t25 != 4294967295LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x106 = 2949;
	int8_t x107 = -11;
	uint16_t x108 = UINT16_MAX;
	int32_t t26 = -49303;

	t26 = ((x105<=x106)*(x107&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x111 = INT32_MIN;
	int16_t x112 = -1;

	t27 = ((x109<=x110)*(x111&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 3U;
	int64_t x115 = 67547874602LL;
	static int64_t x116 = -746078LL;
	int64_t t28 = 1036277980260757LL;

	t28 = ((x113<=x114)*(x115&x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	int64_t x118 = INT64_MAX;
	volatile int16_t x119 = 3511;
	int16_t x120 = INT16_MIN;
	int32_t t29 = 326;

	t29 = ((x117<=x118)*(x119&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 1;
	int64_t x122 = -1LL;
	static int16_t x123 = INT16_MIN;
	static uint16_t x124 = 3U;
	int32_t t30 = -1;

	t30 = ((x121<=x122)*(x123&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x125 = 34;
	uint8_t x127 = 27U;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = 1;

	t31 = ((x125<=x126)*(x127&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x130 = 208U;
	volatile int64_t x131 = INT64_MIN;
	uint16_t x132 = 7295U;
	volatile int64_t t32 = 3LL;

	t32 = ((x129<=x130)*(x131&x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	int16_t x134 = -1701;
	volatile uint32_t x135 = 7U;
	volatile uint16_t x136 = 13U;
	uint32_t t33 = 65284U;

	t33 = ((x133<=x134)*(x135&x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 34U;
	int32_t x138 = INT32_MIN;
	volatile int16_t x139 = INT16_MAX;
	uint16_t x140 = UINT16_MAX;

	t34 = ((x137<=x138)*(x139&x140));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int8_t x142 = -1;
	int32_t x143 = -1;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = -14738919;

	t35 = ((x141<=x142)*(x143&x144));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x147 = -1;
	int64_t x148 = INT64_MAX;
	volatile int64_t t36 = INT64_MAX;

	t36 = ((x145<=x146)*(x147&x148));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = UINT8_MAX;
	int8_t x150 = INT8_MIN;
	volatile int32_t x152 = -1;
	static int32_t t37 = 1;

	t37 = ((x149<=x150)*(x151&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	static int16_t x154 = INT16_MIN;
	uint16_t x155 = 9U;
	static int8_t x156 = -1;
	int32_t t38 = 27090679;

	t38 = ((x153<=x154)*(x155&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x158 = UINT16_MAX;
	int32_t x159 = 200902512;
	uint16_t x160 = UINT16_MAX;

	t39 = ((x157<=x158)*(x159&x160));

	if (t39 != 34672) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x162 = 5770U;
	int16_t x163 = -1047;
	static int64_t x164 = -51067364542LL;
	int64_t t40 = -9LL;

	t40 = ((x161<=x162)*(x163&x164));

	if (t40 != -51067364544LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 4030;
	uint64_t x166 = UINT64_MAX;
	static volatile uint64_t x167 = 3681014444587844296LLU;
	int32_t x168 = INT32_MAX;
	uint64_t t41 = 78452822LLU;

	t41 = ((x165<=x166)*(x167&x168));

	if (t41 != 1857913544LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	int64_t x170 = -45LL;
	int16_t x171 = INT16_MAX;
	static uint32_t x172 = UINT32_MAX;

	t42 = ((x169<=x170)*(x171&x172));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int32_t x174 = INT32_MIN;
	int16_t x176 = INT16_MAX;
	static volatile int32_t t43 = -5731290;

	t43 = ((x173<=x174)*(x175&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x179 = 13094469U;
	int8_t x180 = -15;
	volatile uint32_t t44 = 168142U;

	t44 = ((x177<=x178)*(x179&x180));

	if (t44 != 13094465U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 57U;
	int8_t x182 = -25;
	int16_t x183 = INT16_MIN;
	static int8_t x184 = 1;
	volatile int32_t t45 = 29478;

	t45 = ((x181<=x182)*(x183&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 122910271357527719LLU;
	int8_t x186 = INT8_MAX;
	int8_t x187 = -24;
	volatile int32_t x188 = -1;
	volatile int32_t t46 = -1;

	t46 = ((x185<=x186)*(x187&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MIN;
	int32_t x190 = INT32_MAX;
	int8_t x191 = -1;
	int32_t t47 = 386245;

	t47 = ((x189<=x190)*(x191&x192));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x194 = 2285U;
	uint8_t x195 = 5U;
	uint64_t x196 = UINT64_MAX;
	static volatile uint64_t t48 = 3625651016142835LLU;

	t48 = ((x193<=x194)*(x195&x196));

	if (t48 != 5LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	int16_t x198 = 15;
	uint32_t x199 = 1U;
	int32_t x200 = INT32_MIN;
	volatile uint32_t t49 = 8980120U;

	t49 = ((x197<=x198)*(x199&x200));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x202 = 114U;
	int16_t x203 = INT16_MAX;
	int32_t x204 = INT32_MAX;

	t50 = ((x201<=x202)*(x203&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	uint32_t x206 = 14752790U;
	int8_t x208 = INT8_MIN;
	static volatile int32_t t51 = 262229193;

	t51 = ((x205<=x206)*(x207&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	volatile int8_t x210 = INT8_MIN;
	uint64_t x211 = 1046LLU;
	int64_t x212 = INT64_MIN;

	t52 = ((x209<=x210)*(x211&x212));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x213 = UINT32_MAX;
	int32_t x214 = -43161;
	volatile int16_t x216 = INT16_MIN;
	volatile uint32_t t53 = 14020222U;

	t53 = ((x213<=x214)*(x215&x216));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = -1;
	volatile int32_t x218 = INT32_MAX;
	static int32_t t54 = -124;

	t54 = ((x217<=x218)*(x219&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = INT32_MAX;
	static int64_t x222 = -1LL;
	static int32_t x223 = INT32_MIN;
	uint64_t x224 = 8664549999133565LLU;
	volatile uint64_t t55 = 1454LLU;

	t55 = ((x221<=x222)*(x223&x224));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = 7;
	static uint8_t x226 = UINT8_MAX;
	int16_t x227 = -1;
	volatile int32_t x228 = INT32_MIN;
	int32_t t56 = INT32_MIN;

	t56 = ((x225<=x226)*(x227&x228));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 11669039;
	volatile int16_t x230 = INT16_MIN;
	volatile int16_t x231 = -1;
	volatile int32_t x232 = INT32_MIN;
	static volatile int32_t t57 = -6404015;

	t57 = ((x229<=x230)*(x231&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MIN;
	int8_t x234 = INT8_MIN;
	static uint8_t x235 = 12U;
	int32_t t58 = -4180076;

	t58 = ((x233<=x234)*(x235&x236));

	if (t58 != 12) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 0;
	int16_t x238 = -1;
	uint64_t x239 = UINT64_MAX;
	uint64_t t59 = 95165676681811LLU;

	t59 = ((x237<=x238)*(x239&x240));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = INT64_MAX;
	volatile uint64_t x243 = 6114297064LLU;
	int32_t x244 = -1;
	static uint64_t t60 = 160839LLU;

	t60 = ((x241<=x242)*(x243&x244));

	if (t60 != 6114297064LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	uint64_t x247 = 1095LLU;
	uint32_t x248 = 1U;

	t61 = ((x245<=x246)*(x247&x248));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x251 = INT16_MIN;
	volatile int32_t x252 = INT32_MAX;
	volatile int32_t t62 = -4645946;

	t62 = ((x249<=x250)*(x251&x252));

	if (t62 != 2147450880) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = UINT8_MAX;
	static uint32_t x255 = UINT32_MAX;
	int16_t x256 = -1;
	volatile uint32_t t63 = 223880U;

	t63 = ((x253<=x254)*(x255&x256));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -3707;
	static volatile uint64_t x258 = UINT64_MAX;
	int64_t x259 = -1LL;
	uint32_t x260 = UINT32_MAX;
	volatile int64_t t64 = 16110571481LL;

	t64 = ((x257<=x258)*(x259&x260));

	if (t64 != 4294967295LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x261 = 0U;
	int16_t x262 = INT16_MAX;
	int32_t x263 = INT32_MAX;
	int16_t x264 = 15;
	volatile int32_t t65 = -33258712;

	t65 = ((x261<=x262)*(x263&x264));

	if (t65 != 15) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x265 = UINT16_MAX;
	volatile int16_t x266 = INT16_MIN;
	volatile int16_t x267 = -1;
	uint16_t x268 = 20970U;

	t66 = ((x265<=x266)*(x267&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x270 = 3U;
	static int8_t x271 = 58;

	t67 = ((x269<=x270)*(x271&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	int16_t x274 = 45;
	uint32_t x275 = UINT32_MAX;
	static uint16_t x276 = UINT16_MAX;
	static volatile uint32_t t68 = 12U;

	t68 = ((x273<=x274)*(x275&x276));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = 13U;
	static volatile int16_t x279 = INT16_MIN;
	int64_t x280 = -432898650LL;
	int64_t t69 = -1008088724LL;

	t69 = ((x277<=x278)*(x279&x280));

	if (t69 != -432930816LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 5690U;
	uint64_t x282 = UINT64_MAX;
	int16_t x284 = -1;

	t70 = ((x281<=x282)*(x283&x284));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -49;
	uint16_t x286 = 247U;

	t71 = ((x285<=x286)*(x287&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x290 = UINT8_MAX;
	volatile int64_t x291 = INT64_MIN;
	uint16_t x292 = UINT16_MAX;
	int64_t t72 = 8920067143741LL;

	t72 = ((x289<=x290)*(x291&x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 84545861722770LLU;
	int64_t x294 = INT64_MIN;
	int64_t x295 = -1LL;
	uint16_t x296 = 5448U;
	int64_t t73 = 6684496LL;

	t73 = ((x293<=x294)*(x295&x296));

	if (t73 != 5448LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 2693;
	int8_t x298 = 14;
	static int8_t x299 = INT8_MAX;
	volatile int32_t t74 = 406;

	t74 = ((x297<=x298)*(x299&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = 201;
	volatile int64_t x303 = INT64_MIN;
	int8_t x304 = INT8_MIN;
	int64_t t75 = 32905891LL;

	t75 = ((x301<=x302)*(x303&x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = INT64_MIN;
	volatile int8_t x306 = INT8_MIN;
	uint8_t x307 = 29U;
	uint16_t x308 = 4U;
	int32_t t76 = -1;

	t76 = ((x305<=x306)*(x307&x308));

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = 552132862840460LL;
	int32_t x310 = 23;
	int16_t x312 = -7;

	t77 = ((x309<=x310)*(x311&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	volatile uint8_t x314 = 0U;
	uint32_t x315 = 219U;
	int8_t x316 = 1;
	uint32_t t78 = 1U;

	t78 = ((x313<=x314)*(x315&x316));

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	uint32_t x319 = UINT32_MAX;
	volatile int64_t x320 = 123900544081487LL;
	int64_t t79 = 62287817481269962LL;

	t79 = ((x317<=x318)*(x319&x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x321 = -413791;
	uint64_t x322 = UINT64_MAX;
	int32_t t80 = -3;

	t80 = ((x321<=x322)*(x323&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	int8_t x326 = 1;
	uint8_t x327 = 14U;

	t81 = ((x325<=x326)*(x327&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	int8_t x330 = -1;
	volatile uint16_t x332 = 10960U;

	t82 = ((x329<=x330)*(x331&x332));

	if (t82 != 10960) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	static uint64_t x335 = UINT64_MAX;
	static volatile int64_t x336 = INT64_MAX;
	uint64_t t83 = 4043276489LLU;

	t83 = ((x333<=x334)*(x335&x336));

	if (t83 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MAX;
	uint32_t x338 = 55992U;
	static int16_t x339 = -1;
	int32_t x340 = INT32_MIN;
	static int32_t t84 = INT32_MIN;

	t84 = ((x337<=x338)*(x339&x340));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = INT16_MIN;
	uint16_t x342 = 2553U;
	volatile uint32_t x344 = 3203U;

	t85 = ((x341<=x342)*(x343&x344));

	if (t85 != 3072U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 0;
	static int8_t x347 = INT8_MIN;
	int32_t x348 = INT32_MAX;
	int32_t t86 = -5524;

	t86 = ((x345<=x346)*(x347&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MAX;
	uint16_t x350 = UINT16_MAX;
	int16_t x351 = -1;
	volatile uint16_t x352 = 13398U;

	t87 = ((x349<=x350)*(x351&x352));

	if (t87 != 13398) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 29U;
	static int64_t x355 = INT64_MIN;
	volatile uint32_t x356 = 460U;
	static volatile int64_t t88 = 46404105045978LL;

	t88 = ((x353<=x354)*(x355&x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = INT32_MAX;
	static int32_t x358 = INT32_MIN;
	uint64_t x359 = 1582710LLU;
	static uint32_t x360 = UINT32_MAX;
	uint64_t t89 = 1715980498473246442LLU;

	t89 = ((x357<=x358)*(x359&x360));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = INT32_MIN;
	uint32_t x362 = 8184078U;
	static int8_t x363 = -1;
	int64_t x364 = 19477602001141LL;
	volatile int64_t t90 = 1LL;

	t90 = ((x361<=x362)*(x363&x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -5;
	static uint16_t x366 = 45U;
	int32_t x367 = INT32_MAX;
	uint64_t x368 = 310405639566LLU;
	volatile uint64_t t91 = 243290292193091LLU;

	t91 = ((x365<=x366)*(x367&x368));

	if (t91 != 1167994254LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	int16_t x370 = INT16_MIN;
	volatile int16_t x371 = INT16_MAX;
	int32_t x372 = 232;
	int32_t t92 = 5078;

	t92 = ((x369<=x370)*(x371&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x373 = 1029378921LLU;
	static int8_t x374 = 10;
	volatile int32_t x376 = -45384629;
	volatile int32_t t93 = -206636988;

	t93 = ((x373<=x374)*(x375&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x377 = UINT8_MAX;
	int8_t x378 = -1;
	int64_t x379 = -339477663371336639LL;
	int8_t x380 = INT8_MIN;
	volatile int64_t t94 = -503LL;

	t94 = ((x377<=x378)*(x379&x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x381 = UINT32_MAX;
	volatile int64_t x382 = INT64_MIN;
	int32_t x383 = -464906421;
	static volatile int32_t x384 = INT32_MAX;
	volatile int32_t t95 = 1;

	t95 = ((x381<=x382)*(x383&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 3877U;
	uint32_t x387 = 308U;
	uint16_t x388 = 8U;

	t96 = ((x385<=x386)*(x387&x388));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 604;
	volatile uint16_t x390 = 23377U;
	static volatile uint16_t x391 = UINT16_MAX;
	static int8_t x392 = INT8_MIN;
	int32_t t97 = -1;

	t97 = ((x389<=x390)*(x391&x392));

	if (t97 != 65408) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	volatile uint32_t x394 = UINT32_MAX;
	int8_t x395 = INT8_MIN;
	volatile int32_t t98 = 4451;

	t98 = ((x393<=x394)*(x395&x396));

	if (t98 != 65408) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x397 = 504065U;
	static uint32_t x398 = 151973U;
	uint64_t x399 = UINT64_MAX;
	int64_t x400 = -5LL;
	static uint64_t t99 = 1457LLU;

	t99 = ((x397<=x398)*(x399&x400));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

