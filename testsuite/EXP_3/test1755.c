#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = UINT16_MAX;
static int32_t x3 = 5;
volatile int32_t x7 = INT32_MIN;
uint8_t x15 = UINT8_MAX;
int32_t x17 = -112945833;
volatile int64_t x18 = INT64_MIN;
int16_t x20 = INT16_MIN;
int64_t x29 = INT64_MAX;
int64_t x31 = 913742LL;
volatile uint64_t t7 = 91264812LLU;
int64_t x40 = -303735146777693LL;
volatile int64_t t9 = -1874013158LL;
int32_t x41 = -1;
int64_t x53 = INT64_MAX;
uint8_t x64 = UINT8_MAX;
static uint64_t x73 = 526889865089LLU;
int32_t x77 = -30293324;
uint64_t x83 = UINT64_MAX;
int16_t x87 = INT16_MIN;
static volatile int64_t x96 = 302687021655124LL;
static int32_t x101 = INT32_MAX;
volatile int64_t t25 = -14500009LL;
int64_t x105 = -1LL;
static volatile int64_t t26 = 202322595249734LL;
volatile int64_t t28 = 12924884838258LL;
int8_t x117 = INT8_MIN;
int8_t x124 = INT8_MIN;
static int32_t x131 = INT32_MIN;
uint64_t x133 = 6156438248LLU;
uint64_t t33 = 68379626LLU;
int64_t t34 = -24080646509LL;
int32_t x141 = 103161;
int32_t x144 = INT32_MAX;
int8_t x148 = INT8_MAX;
static uint32_t x155 = UINT32_MAX;
volatile int8_t x156 = INT8_MIN;
int8_t x162 = -1;
int32_t t39 = -14671;
static int8_t x166 = -1;
volatile int8_t x168 = INT8_MAX;
volatile int32_t t40 = 699857879;
static int16_t x171 = 1160;
static int64_t t42 = -55899LL;
static int16_t x179 = INT16_MAX;
int32_t x181 = -48496367;
static uint16_t x198 = UINT16_MAX;
uint8_t x199 = 31U;
volatile int16_t x205 = -1;
volatile uint16_t x209 = 6U;
volatile uint32_t t52 = 72093U;
int32_t x220 = INT32_MIN;
int32_t t54 = -1;
int16_t x233 = INT16_MIN;
static int64_t x245 = 4761717524415LL;
int8_t x246 = INT8_MIN;
uint64_t x258 = 12358888490LLU;
volatile int16_t x259 = -1;
volatile uint64_t x260 = UINT64_MAX;
volatile uint16_t x261 = UINT16_MAX;
int32_t x265 = -1;
int64_t x268 = INT64_MAX;
volatile uint32_t x272 = 12200U;
int32_t x278 = -13452779;
uint8_t x280 = UINT8_MAX;
int8_t x281 = -14;
static uint32_t x289 = 217318U;
volatile int32_t x291 = -1;
uint16_t x293 = 5312U;
int32_t x294 = INT32_MIN;
int32_t x296 = -1;
volatile int32_t t71 = -6920;
int16_t x302 = INT16_MAX;
uint64_t x303 = UINT64_MAX;
uint64_t t74 = 18167242830543215LLU;
int64_t x309 = -1LL;
int16_t x316 = -12;
uint8_t x319 = UINT8_MAX;
volatile int64_t x320 = -1LL;
static uint64_t t77 = 56902717462LLU;
static uint16_t x321 = UINT16_MAX;
static int16_t x322 = 15534;
volatile uint8_t x323 = 0U;
static int8_t x332 = -6;
uint64_t x336 = 12117084458552963LLU;
int64_t x345 = INT64_MIN;
uint16_t x357 = 30578U;
uint8_t x364 = 12U;
static volatile int8_t x370 = INT8_MIN;
volatile int64_t t89 = 6LL;
int32_t x373 = INT32_MIN;
static int32_t x383 = -72;
uint64_t x384 = 1501139LLU;
int8_t x385 = -22;
uint16_t x386 = UINT16_MAX;
int8_t x387 = 1;
int64_t x395 = INT64_MIN;
volatile uint8_t x397 = 2U;
volatile int8_t x399 = INT8_MIN;
volatile int64_t t96 = 12739LL;
int16_t x404 = INT16_MIN;


void f0(void) {
	static int32_t x2 = -110;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 14849975384842LL;

	t0 = ((x1%x2)^(x3&x4));

	if (t0 != 80LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int8_t x6 = INT8_MIN;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = INT32_MIN;

	t1 = ((x5%x6)^(x7&x8));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -59;
	int16_t x10 = INT16_MAX;
	static int32_t x11 = -1;
	uint32_t x12 = UINT32_MAX;
	uint32_t t2 = 7794U;

	t2 = ((x9%x10)^(x11&x12));

	if (t2 != 58U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	uint32_t x14 = 87794U;
	uint8_t x16 = UINT8_MAX;
	uint32_t t3 = 211979901U;

	t3 = ((x13%x14)^(x15&x16));

	if (t3 != 128U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x19 = -60;
	volatile int64_t t4 = -51LL;

	t4 = ((x17%x18)^(x19&x20));

	if (t4 != 112923991LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x21 = INT64_MAX;
	static volatile uint64_t x22 = 1590392LLU;
	static uint64_t x23 = UINT64_MAX;
	int8_t x24 = 1;
	uint64_t t5 = 89772219499998LLU;

	t5 = ((x21%x22)^(x23&x24));

	if (t5 != 491910LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 1782U;
	uint32_t x26 = 4011U;
	volatile uint16_t x27 = UINT16_MAX;
	volatile uint32_t x28 = UINT32_MAX;
	volatile uint32_t t6 = 100175U;

	t6 = ((x25%x26)^(x27&x28));

	if (t6 != 63753U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x30 = INT32_MAX;
	static uint64_t x32 = 9428819LLU;

	t7 = ((x29%x30)^(x31&x32));

	if (t7 != 905539LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	volatile uint32_t x34 = UINT32_MAX;
	int16_t x35 = -1;
	volatile int64_t x36 = INT64_MAX;
	static int64_t t8 = INT64_MAX;

	t8 = ((x33%x34)^(x35&x36));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	volatile int8_t x38 = INT8_MAX;
	uint16_t x39 = 114U;

	t9 = ((x37%x38)^(x39&x40));

	if (t9 != -35LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x42 = -1;
	int16_t x43 = INT16_MAX;
	volatile uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = -3373;

	t10 = ((x41%x42)^(x43&x44));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	static int8_t x46 = -1;
	int16_t x47 = 0;
	int16_t x48 = -1531;
	volatile int32_t t11 = -2;

	t11 = ((x45%x46)^(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = UINT64_MAX;
	uint8_t x50 = UINT8_MAX;
	static volatile int64_t x51 = -36677791946LL;
	static int8_t x52 = INT8_MIN;
	uint64_t t12 = 6097243082LLU;

	t12 = ((x49%x50)^(x51&x52));

	if (t12 != 18446744037031759616LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = UINT64_MAX;
	static int8_t x55 = INT8_MAX;
	static int64_t x56 = -1LL;
	uint64_t t13 = 2028634894369555666LLU;

	t13 = ((x53%x54)^(x55&x56));

	if (t13 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	int32_t x58 = INT32_MIN;
	static uint64_t x59 = UINT64_MAX;
	int16_t x60 = INT16_MIN;
	volatile uint64_t t14 = 71LLU;

	t14 = ((x57%x58)^(x59&x60));

	if (t14 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	uint8_t x62 = UINT8_MAX;
	int32_t x63 = INT32_MIN;
	static volatile int32_t t15 = 7693469;

	t15 = ((x61%x62)^(x63&x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	static int8_t x66 = 13;
	static int64_t x67 = INT64_MIN;
	uint16_t x68 = UINT16_MAX;
	int64_t t16 = 280515734377949958LL;

	t16 = ((x65%x66)^(x67&x68));

	if (t16 != -11LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	static int8_t x70 = INT8_MIN;
	int32_t x71 = -1;
	uint8_t x72 = 9U;
	int32_t t17 = 12;

	t17 = ((x69%x70)^(x71&x72));

	if (t17 != 9) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = UINT16_MAX;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MAX;
	static volatile uint64_t t18 = 1960405408901659LLU;

	t18 = ((x73%x74)^(x75&x76));

	if (t18 != 33424LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x78 = 1U;
	int8_t x79 = -13;
	uint32_t x80 = UINT32_MAX;
	uint32_t t19 = 26U;

	t19 = ((x77%x78)^(x79&x80));

	if (t19 != 4294967283U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MAX;
	static uint16_t x82 = UINT16_MAX;
	volatile int16_t x84 = -1;
	volatile uint64_t t20 = 1580LLU;

	t20 = ((x81%x82)^(x83&x84));

	if (t20 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	static uint64_t x86 = 28703178982031LLU;
	static int32_t x88 = INT32_MAX;
	volatile uint64_t t21 = 5901505LLU;

	t21 = ((x85%x86)^(x87&x88));

	if (t21 != 14632789987184LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = -1;
	static int64_t x90 = INT64_MIN;
	uint16_t x91 = UINT16_MAX;
	uint64_t x92 = UINT64_MAX;
	static uint64_t t22 = 468135637737108844LLU;

	t22 = ((x89%x90)^(x91&x92));

	if (t22 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	uint32_t x94 = 2713U;
	volatile int8_t x95 = -1;
	int64_t t23 = 18867LL;

	t23 = ((x93%x94)^(x95&x96));

	if (t23 != 302687021655083LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x97 = -72LL;
	int8_t x98 = -1;
	int16_t x99 = INT16_MAX;
	int32_t x100 = INT32_MAX;
	volatile int64_t t24 = -3813611LL;

	t24 = ((x97%x98)^(x99&x100));

	if (t24 != 32767LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x102 = UINT32_MAX;
	int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MAX;

	t25 = ((x101%x102)^(x103&x104));

	if (t25 != 2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x106 = 1833;
	volatile int32_t x107 = INT32_MIN;
	static uint8_t x108 = 8U;

	t26 = ((x105%x106)^(x107&x108));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 2411;
	uint64_t x110 = 2863284899447305462LLU;
	volatile uint32_t x111 = 14653U;
	volatile int16_t x112 = INT16_MAX;
	volatile uint64_t t27 = 682637344138LLU;

	t27 = ((x109%x110)^(x111&x112));

	if (t27 != 12374LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 24386U;
	int64_t x114 = -1LL;
	static volatile int8_t x115 = 0;
	static int32_t x116 = INT32_MAX;

	t28 = ((x113%x114)^(x115&x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x118 = 22U;
	int32_t x119 = -169;
	int16_t x120 = INT16_MAX;
	int32_t t29 = -35815;

	t29 = ((x117%x118)^(x119&x120));

	if (t29 != -32583) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MAX;
	volatile uint32_t x122 = 15954958U;
	volatile int16_t x123 = INT16_MIN;
	volatile uint32_t t30 = UINT32_MAX;

	t30 = ((x121%x122)^(x123&x124));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 36941285;
	int8_t x126 = INT8_MAX;
	volatile int32_t x127 = -442692475;
	uint32_t x128 = 1168363020U;
	volatile uint32_t t31 = 910050361U;

	t31 = ((x125%x126)^(x127&x128));

	if (t31 != 1166085157U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -222;
	volatile int16_t x130 = INT16_MIN;
	int64_t x132 = 84644LL;
	static volatile int64_t t32 = -712514LL;

	t32 = ((x129%x130)^(x131&x132));

	if (t32 != -222LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MIN;
	static int16_t x135 = INT16_MIN;
	uint8_t x136 = 15U;

	t33 = ((x133%x134)^(x135&x136));

	if (t33 != 6156438248LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MAX;
	int8_t x138 = -1;
	uint32_t x139 = 42U;
	int8_t x140 = INT8_MAX;

	t34 = ((x137%x138)^(x139&x140));

	if (t34 != 42LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x142 = UINT8_MAX;
	int32_t x143 = -1;
	volatile int32_t t35 = 5;

	t35 = ((x141%x142)^(x143&x144));

	if (t35 != 2147483506) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	int32_t x146 = INT32_MIN;
	int64_t x147 = INT64_MAX;
	volatile int64_t t36 = 937842336LL;

	t36 = ((x145%x146)^(x147&x148));

	if (t36 != 128LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MIN;
	int64_t x151 = -4234464588LL;
	int16_t x152 = -478;
	int64_t t37 = 607LL;

	t37 = ((x149%x150)^(x151&x152));

	if (t37 != -4234464736LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 0;
	int32_t x154 = INT32_MIN;
	uint32_t t38 = 0U;

	t38 = ((x153%x154)^(x155&x156));

	if (t38 != 4294967168U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = -1;
	int8_t x163 = 0;
	int16_t x164 = -14;

	t39 = ((x161%x162)^(x163&x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = 66;
	int16_t x167 = INT16_MAX;

	t40 = ((x165%x166)^(x167&x168));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x169 = -1;
	int16_t x170 = 748;
	uint64_t x172 = 7289290403569LLU;
	uint64_t t41 = 22080698381722LLU;

	t41 = ((x169%x170)^(x171&x172));

	if (t41 != 18446744073709550463LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x173 = -6;
	volatile int16_t x174 = -1;
	uint32_t x175 = 1947544U;
	int64_t x176 = INT64_MIN;

	t42 = ((x173%x174)^(x175&x176));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MIN;
	int16_t x178 = -1;
	static int64_t x180 = INT64_MIN;
	static int64_t t43 = -108559666003404705LL;

	t43 = ((x177%x178)^(x179&x180));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x182 = INT32_MAX;
	uint8_t x183 = 21U;
	static int64_t x184 = INT64_MIN;
	static int64_t t44 = 36267557195LL;

	t44 = ((x181%x182)^(x183&x184));

	if (t44 != -48496367LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x185 = 243451U;
	int8_t x186 = INT8_MIN;
	int16_t x187 = INT16_MIN;
	int64_t x188 = INT64_MIN;
	static int64_t t45 = -83LL;

	t45 = ((x185%x186)^(x187&x188));

	if (t45 != -9223372036854532357LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = INT64_MAX;
	int8_t x190 = -3;
	int8_t x191 = INT8_MIN;
	uint64_t x192 = 494270563645191LLU;
	volatile uint64_t t46 = 271935270840141273LLU;

	t46 = ((x189%x190)^(x191&x192));

	if (t46 != 494270563645185LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -1;
	int16_t x194 = 912;
	int8_t x195 = INT8_MAX;
	uint32_t x196 = UINT32_MAX;
	volatile uint32_t t47 = 1148971U;

	t47 = ((x193%x194)^(x195&x196));

	if (t47 != 4294967168U) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x197 = 6998;
	int8_t x200 = INT8_MIN;
	int32_t t48 = -11;

	t48 = ((x197%x198)^(x199&x200));

	if (t48 != 6998) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MIN;
	static volatile int32_t x202 = INT32_MIN;
	static int8_t x203 = INT8_MAX;
	uint64_t x204 = UINT64_MAX;
	uint64_t t49 = 701LLU;

	t49 = ((x201%x202)^(x203&x204));

	if (t49 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x206 = -1;
	uint64_t x207 = UINT64_MAX;
	int64_t x208 = -1LL;
	static uint64_t t50 = UINT64_MAX;

	t50 = ((x205%x206)^(x207&x208));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x210 = -81;
	static int32_t x211 = -11;
	uint32_t x212 = UINT32_MAX;
	volatile uint32_t t51 = 235U;

	t51 = ((x209%x210)^(x211&x212));

	if (t51 != 4294967283U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x213 = 33687357U;
	int16_t x214 = INT16_MIN;
	static volatile uint8_t x215 = 72U;
	uint32_t x216 = 178U;

	t52 = ((x213%x214)^(x215&x216));

	if (t52 != 33687357U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MIN;
	static int8_t x219 = INT8_MAX;
	int32_t t53 = 71341;

	t53 = ((x217%x218)^(x219&x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x221 = 0;
	static volatile int16_t x222 = INT16_MAX;
	uint16_t x223 = UINT16_MAX;
	int16_t x224 = INT16_MIN;

	t54 = ((x221%x222)^(x223&x224));

	if (t54 != 32768) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MAX;
	uint8_t x226 = 1U;
	uint32_t x227 = 0U;
	uint16_t x228 = 1U;
	volatile uint32_t t55 = 5379965U;

	t55 = ((x225%x226)^(x227&x228));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x229 = 87LL;
	uint64_t x230 = UINT64_MAX;
	static uint32_t x231 = UINT32_MAX;
	static uint8_t x232 = UINT8_MAX;
	static volatile uint64_t t56 = 8675884021212856LLU;

	t56 = ((x229%x230)^(x231&x232));

	if (t56 != 168LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x234 = 865488144LL;
	static uint64_t x235 = 89086652828020232LLU;
	volatile int16_t x236 = INT16_MAX;
	volatile uint64_t t57 = 91746528551387LLU;

	t57 = ((x233%x234)^(x235&x236));

	if (t57 != 18446744073709547016LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = -2156047753444618590LL;
	volatile int64_t x238 = -418365LL;
	int8_t x239 = -1;
	static int8_t x240 = INT8_MAX;
	volatile int64_t t58 = 22LL;

	t58 = ((x237%x238)^(x239&x240));

	if (t58 != -153049LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x241 = -1;
	volatile uint16_t x242 = UINT16_MAX;
	volatile int32_t x243 = -4390;
	static int16_t x244 = -15646;
	int32_t t59 = 13;

	t59 = ((x241%x242)^(x243&x244));

	if (t59 != 15677) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x247 = -480LL;
	static volatile int32_t x248 = INT32_MIN;
	int64_t t60 = -7LL;

	t60 = ((x245%x246)^(x247&x248));

	if (t60 != -2147483585LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = INT64_MAX;
	int16_t x250 = INT16_MIN;
	uint64_t x251 = UINT64_MAX;
	int64_t x252 = 192506982LL;
	uint64_t t61 = 8LLU;

	t61 = ((x249%x250)^(x251&x252));

	if (t61 != 192484249LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = -4380;
	volatile uint64_t x254 = 123657329955124LLU;
	int32_t x255 = -3533;
	int16_t x256 = INT16_MIN;
	static volatile uint64_t t62 = 5715918529LLU;

	t62 = ((x253%x254)^(x255&x256));

	if (t62 != 18446705853385595268LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = INT16_MAX;
	volatile uint64_t t63 = 1579730LLU;

	t63 = ((x257%x258)^(x259&x260));

	if (t63 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x262 = UINT32_MAX;
	int64_t x263 = INT64_MAX;
	int16_t x264 = -1;
	volatile int64_t t64 = -13212499837130LL;

	t64 = ((x261%x262)^(x263&x264));

	if (t64 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x266 = -1;
	volatile int32_t x267 = INT32_MIN;
	volatile int64_t t65 = 210849965404360LL;

	t65 = ((x265%x266)^(x267&x268));

	if (t65 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = INT64_MIN;
	volatile int64_t x270 = -2933629867LL;
	int64_t x271 = -1LL;
	int64_t t66 = -1LL;

	t66 = ((x269%x270)^(x271&x272));

	if (t66 != -1923847344LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x273 = INT64_MIN;
	int32_t x274 = INT32_MAX;
	int16_t x275 = INT16_MAX;
	uint16_t x276 = UINT16_MAX;
	volatile int64_t t67 = 359LL;

	t67 = ((x273%x274)^(x275&x276));

	if (t67 != -32767LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x277 = -16;
	volatile int16_t x279 = -7;
	int32_t t68 = 241004507;

	t68 = ((x277%x278)^(x279&x280));

	if (t68 != -247) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x282 = INT64_MIN;
	uint32_t x283 = 6U;
	static int8_t x284 = -1;
	static volatile int64_t t69 = 1LL;

	t69 = ((x281%x282)^(x283&x284));

	if (t69 != -12LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x290 = INT64_MIN;
	int32_t x292 = INT32_MAX;
	volatile int64_t t70 = -31335078800LL;

	t70 = ((x289%x290)^(x291&x292));

	if (t70 != 2147266329LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x295 = INT8_MAX;

	t71 = ((x293%x294)^(x295&x296));

	if (t71 != 5311) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x297 = 22;
	volatile int64_t x298 = INT64_MIN;
	volatile int32_t x299 = INT32_MIN;
	int64_t x300 = -1LL;
	static int64_t t72 = 1038871457554LL;

	t72 = ((x297%x298)^(x299&x300));

	if (t72 != -2147483626LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x301 = 1804U;
	int64_t x304 = INT64_MIN;
	uint64_t t73 = 7LLU;

	t73 = ((x301%x302)^(x303&x304));

	if (t73 != 9223372036854777612LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x305 = INT8_MIN;
	uint64_t x306 = 774423315013508LLU;
	static int32_t x307 = -1;
	volatile uint8_t x308 = 0U;

	t74 = ((x305%x306)^(x307&x308));

	if (t74 != 755133402804436LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x310 = INT8_MIN;
	int32_t x311 = INT32_MAX;
	static uint16_t x312 = 2U;
	volatile int64_t t75 = 2541789LL;

	t75 = ((x309%x310)^(x311&x312));

	if (t75 != -3LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x313 = 14789LLU;
	static int16_t x314 = INT16_MAX;
	int16_t x315 = 1;
	static uint64_t t76 = 1LLU;

	t76 = ((x313%x314)^(x315&x316));

	if (t76 != 14789LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x317 = 7017815299465287LLU;
	int8_t x318 = -1;

	t77 = ((x317%x318)^(x319&x320));

	if (t77 != 7017815299465400LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x324 = INT8_MAX;
	int32_t t78 = 740;

	t78 = ((x321%x322)^(x323&x324));

	if (t78 != 3399) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x325 = -41;
	int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MIN;
	int32_t t79 = -8;

	t79 = ((x325%x326)^(x327&x328));

	if (t79 != 2147483607) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = INT64_MAX;
	uint16_t x330 = UINT16_MAX;
	static int32_t x331 = -1;
	volatile int64_t t80 = 59211417026462LL;

	t80 = ((x329%x330)^(x331&x332));

	if (t80 != -32763LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = -2;
	static volatile int64_t x334 = -15275LL;
	volatile int16_t x335 = INT16_MIN;
	volatile uint64_t t81 = 166689359LLU;

	t81 = ((x333%x334)^(x335&x336));

	if (t81 != 18434626989251002366LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x337 = 614U;
	int8_t x338 = INT8_MAX;
	int16_t x339 = 25;
	uint8_t x340 = 20U;
	volatile uint32_t t82 = 270727U;

	t82 = ((x337%x338)^(x339&x340));

	if (t82 != 122U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x341 = INT16_MIN;
	uint32_t x342 = 490433042U;
	int32_t x343 = -21964;
	int8_t x344 = INT8_MIN;
	uint32_t t83 = 759U;

	t83 = ((x341%x342)^(x343&x344));

	if (t83 != 3923477872U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x346 = -1;
	static int8_t x347 = 14;
	uint16_t x348 = UINT16_MAX;
	int64_t t84 = -77847LL;

	t84 = ((x345%x346)^(x347&x348));

	if (t84 != 14LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x353 = 14763204U;
	int32_t x354 = INT32_MAX;
	volatile int32_t x355 = INT32_MAX;
	int64_t x356 = 4333LL;
	volatile int64_t t85 = -32885052947340LL;

	t85 = ((x353%x354)^(x355&x356));

	if (t85 != 14767145LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x358 = -1;
	int64_t x359 = INT64_MIN;
	uint32_t x360 = UINT32_MAX;
	static volatile int64_t t86 = -2188032855403344LL;

	t86 = ((x357%x358)^(x359&x360));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x361 = UINT64_MAX;
	volatile uint32_t x362 = UINT32_MAX;
	volatile uint64_t x363 = 50472588391893829LLU;
	uint64_t t87 = 282452154221075017LLU;

	t87 = ((x361%x362)^(x363&x364));

	if (t87 != 4LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = -1;
	uint64_t x366 = 121532LLU;
	volatile uint8_t x367 = 23U;
	int32_t x368 = INT32_MIN;
	uint64_t t88 = 30041132343LLU;

	t88 = ((x365%x366)^(x367&x368));

	if (t88 != 89843LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x369 = INT8_MAX;
	uint32_t x371 = UINT32_MAX;
	int64_t x372 = -10LL;

	t89 = ((x369%x370)^(x371&x372));

	if (t89 != 4294967177LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x374 = INT16_MAX;
	uint32_t x375 = 109445U;
	uint8_t x376 = UINT8_MAX;
	volatile uint32_t t90 = 749307345U;

	t90 = ((x373%x374)^(x375&x376));

	if (t90 != 4294967163U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x377 = INT32_MIN;
	uint16_t x378 = 39U;
	volatile uint8_t x379 = 126U;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t91 = 58082990513LLU;

	t91 = ((x377%x378)^(x379&x380));

	if (t91 != 18446744073709551499LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x381 = 7504806;
	static int64_t x382 = INT64_MIN;
	uint64_t t92 = 3606512626LLU;

	t92 = ((x381%x382)^(x383&x384));

	if (t92 != 6579254LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x388 = UINT32_MAX;
	uint32_t t93 = 221U;

	t93 = ((x385%x386)^(x387&x388));

	if (t93 != 4294967275U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x389 = UINT16_MAX;
	int16_t x390 = INT16_MIN;
	uint32_t x391 = 943923U;
	static int64_t x392 = -10LL;
	static int64_t t94 = 59757LL;

	t94 = ((x389%x390)^(x391&x392));

	if (t94 != 923853LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x393 = INT16_MIN;
	volatile int32_t x394 = INT32_MAX;
	int16_t x396 = 6;
	static int64_t t95 = -43108LL;

	t95 = ((x393%x394)^(x395&x396));

	if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x398 = -1LL;
	static uint32_t x400 = 5475U;

	t96 = ((x397%x398)^(x399&x400));

	if (t96 != 5376LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x401 = 33U;
	int32_t x402 = -7952;
	int16_t x403 = 1;
	volatile int32_t t97 = -750771680;

	t97 = ((x401%x402)^(x403&x404));

	if (t97 != 33) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = INT64_MIN;
	static int32_t x406 = INT32_MAX;
	static int64_t x407 = INT64_MIN;
	uint8_t x408 = 53U;
	volatile int64_t t98 = -272071892113LL;

	t98 = ((x405%x406)^(x407&x408));

	if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x409 = UINT16_MAX;
	int64_t x410 = INT64_MIN;
	volatile int16_t x411 = INT16_MAX;
	uint64_t x412 = 5586325257636LLU;
	static uint64_t t99 = 10733229350LLU;

	t99 = ((x409%x410)^(x411&x412));

	if (t99 != 49755LLU) { NG(); } else { ; }
	
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

