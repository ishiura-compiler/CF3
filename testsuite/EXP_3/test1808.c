#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x12 = 370036405439856456LL;
volatile int64_t t3 = -56997994251676LL;
int64_t x26 = 26247705534320LL;
uint16_t x27 = UINT16_MAX;
volatile uint32_t t8 = 428949U;
int16_t x40 = INT16_MIN;
static int32_t x44 = 741;
volatile int8_t x46 = INT8_MIN;
static volatile uint32_t x50 = 9536U;
static volatile int8_t x52 = INT8_MIN;
uint64_t x54 = UINT64_MAX;
static int16_t x60 = INT16_MIN;
static int8_t x71 = INT8_MAX;
volatile int32_t t18 = 1;
int64_t x77 = -1LL;
int64_t x84 = INT64_MIN;
int64_t x89 = 242LL;
volatile int32_t x91 = -1;
volatile int32_t t22 = 709;
volatile int32_t t23 = 1483826;
int32_t x98 = INT32_MIN;
int64_t x99 = INT64_MIN;
int64_t x100 = 120163LL;
uint64_t x102 = 33803402866104LLU;
volatile int32_t t26 = 6518;
static volatile int8_t x112 = INT8_MIN;
int64_t x119 = 106510678LL;
static int64_t x120 = INT64_MAX;
int16_t x121 = INT16_MIN;
static int32_t t30 = -1008;
volatile uint8_t x126 = UINT8_MAX;
static int16_t x127 = -918;
volatile int32_t t31 = -26501145;
static int8_t x131 = INT8_MAX;
volatile uint16_t x133 = 453U;
static volatile int8_t x136 = 1;
static volatile int32_t t33 = 1;
uint16_t x139 = 11563U;
int8_t x140 = INT8_MIN;
static int64_t t35 = -568370554978561LL;
volatile int8_t x148 = -7;
int8_t x150 = -11;
static volatile int32_t t37 = INT32_MIN;
static int64_t x155 = INT64_MAX;
static int8_t x159 = INT8_MIN;
volatile int64_t t42 = 622LL;
int8_t x178 = -1;
uint8_t x184 = 7U;
volatile int64_t t45 = -26999077538LL;
uint8_t x187 = UINT8_MAX;
uint8_t x188 = 41U;
static uint8_t x192 = UINT8_MAX;
int32_t t47 = -167;
uint8_t x195 = 55U;
volatile int32_t t48 = 1;
uint64_t x199 = 1780506844628620LLU;
int8_t x203 = INT8_MIN;
uint32_t x205 = 560U;
uint8_t x206 = 31U;
static int32_t t51 = -31711263;
static volatile uint64_t t52 = 208881050684994569LLU;
int64_t x216 = INT64_MAX;
volatile int16_t x226 = INT16_MIN;
int8_t x227 = 26;
volatile int32_t x228 = -89885532;
volatile int8_t x229 = 18;
uint8_t x238 = 8U;
int8_t x241 = -1;
volatile int64_t x246 = INT64_MIN;
volatile int32_t x247 = -422;
uint32_t x248 = 3U;
volatile uint16_t x250 = 29211U;
int8_t x252 = INT8_MIN;
volatile int32_t t62 = -3593201;
int64_t x256 = 1865329540945225LL;
uint32_t t65 = 41U;
int8_t x268 = -1;
int32_t x276 = -1;
static int8_t x279 = INT8_MIN;
int16_t x280 = 401;
static int32_t x281 = -1;
volatile int32_t t69 = -172913014;
int16_t x285 = INT16_MIN;
volatile int8_t x289 = INT8_MIN;
volatile int16_t x290 = INT16_MIN;
volatile uint8_t x309 = 14U;
volatile int32_t t76 = 123;
int64_t t78 = 12386666728639534LL;
int8_t x323 = 0;
static volatile uint64_t x332 = UINT64_MAX;
static int32_t x338 = 10;
int64_t t82 = -1532036121LL;
int32_t x346 = -1041894;
int64_t x347 = 28041154581LL;
volatile uint32_t x350 = 15657U;
static int32_t x360 = -1;
volatile uint32_t t87 = 7662U;
int64_t x361 = INT64_MAX;
uint8_t x363 = 1U;
volatile uint8_t x373 = 31U;
volatile int64_t x374 = -1LL;
static volatile uint32_t t91 = 108228U;
uint16_t x392 = 1020U;
uint32_t t97 = 107740532U;
int64_t x405 = INT64_MIN;
int8_t x408 = -1;
int32_t t98 = -399205;


void f0(void) {
	int64_t x1 = -1LL;
	static int8_t x2 = 8;
	uint32_t x3 = 27883U;
	int16_t x4 = -1;
	volatile uint32_t t0 = 36012U;

	t0 = ((x1<=x2)+(x3&x4));

	if (t0 != 27884U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	volatile int64_t x6 = INT64_MIN;
	int8_t x7 = 56;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = 0;

	t1 = ((x5<=x6)+(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 7;
	int16_t x10 = -1;
	int8_t x11 = INT8_MAX;
	volatile int64_t t2 = 16LL;

	t2 = ((x9<=x10)+(x11&x12));

	if (t2 != 72LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int8_t x14 = -16;
	int64_t x15 = INT64_MAX;
	static uint32_t x16 = 55351761U;

	t3 = ((x13<=x14)+(x15&x16));

	if (t3 != 55351761LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	static uint16_t x18 = 4U;
	int8_t x19 = INT8_MIN;
	int32_t x20 = INT32_MAX;
	static int32_t t4 = -4256465;

	t4 = ((x17<=x18)+(x19&x20));

	if (t4 != 2147483520) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = UINT8_MAX;
	int32_t x22 = INT32_MIN;
	int64_t x23 = 3531LL;
	volatile int16_t x24 = INT16_MIN;
	volatile int64_t t5 = 670981458571582104LL;

	t5 = ((x21<=x22)+(x23&x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -105125400;

	t6 = ((x25<=x26)+(x27&x28));

	if (t6 != 65409) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	uint64_t x30 = 294679743361255478LLU;
	int32_t x31 = -1;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -7205374;

	t7 = ((x29<=x30)+(x31&x32));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int16_t x34 = 13;
	static int32_t x35 = -62522716;
	uint32_t x36 = 429U;

	t8 = ((x33<=x34)+(x35&x36));

	if (t8 != 165U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 194537028236365805LLU;
	int64_t x38 = -1LL;
	static uint32_t x39 = 9854U;
	volatile uint32_t t9 = 4038U;

	t9 = ((x37<=x38)+(x39&x40));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = 2;
	int64_t x43 = INT64_MIN;
	int64_t t10 = 90717691LL;

	t10 = ((x41<=x42)+(x43&x44));

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 50U;
	int64_t x47 = 1LL;
	int8_t x48 = 1;
	int64_t t11 = 261751253779651147LL;

	t11 = ((x45<=x46)+(x47&x48));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MIN;
	int16_t x51 = INT16_MAX;
	int32_t t12 = -673410435;

	t12 = ((x49<=x50)+(x51&x52));

	if (t12 != 32640) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = 2768019938LL;
	static volatile int8_t x55 = INT8_MIN;
	volatile uint16_t x56 = 39U;
	volatile int32_t t13 = 56;

	t13 = ((x53<=x54)+(x55&x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -4328LL;
	uint16_t x58 = 598U;
	uint64_t x59 = UINT64_MAX;
	uint64_t t14 = 838476515771LLU;

	t14 = ((x57<=x58)+(x59&x60));

	if (t14 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = UINT64_MAX;
	uint64_t x62 = UINT64_MAX;
	volatile int64_t x63 = -1LL;
	volatile uint16_t x64 = 117U;
	volatile int64_t t15 = 273178LL;

	t15 = ((x61<=x62)+(x63&x64));

	if (t15 != 118LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = -1;
	static volatile int64_t x66 = INT64_MIN;
	uint32_t x67 = UINT32_MAX;
	static uint64_t x68 = 19004400755LLU;
	static uint64_t t16 = 919691916LLU;

	t16 = ((x65<=x66)+(x67&x68));

	if (t16 != 1824531571LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 5U;
	int8_t x70 = -15;
	int64_t x72 = INT64_MAX;
	volatile int64_t t17 = 39025639LL;

	t17 = ((x69<=x70)+(x71&x72));

	if (t17 != 127LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int32_t x74 = INT32_MIN;
	static int16_t x75 = INT16_MAX;
	int32_t x76 = -27;

	t18 = ((x73<=x74)+(x75&x76));

	if (t18 != 32742) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = 162698104LL;
	uint16_t x79 = UINT16_MAX;
	int32_t x80 = INT32_MIN;
	int32_t t19 = -1;

	t19 = ((x77<=x78)+(x79&x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	static int32_t x82 = -417;
	int32_t x83 = INT32_MIN;
	static volatile int64_t t20 = INT64_MIN;

	t20 = ((x81<=x82)+(x83&x84));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	uint8_t x86 = 0U;
	uint8_t x87 = UINT8_MAX;
	uint32_t x88 = UINT32_MAX;
	static volatile uint32_t t21 = 66273U;

	t21 = ((x85<=x86)+(x87&x88));

	if (t21 != 256U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x90 = 304477758U;
	static int8_t x92 = 45;

	t22 = ((x89<=x90)+(x91&x92));

	if (t22 != 46) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	int32_t x94 = INT32_MIN;
	int32_t x95 = -1;
	int16_t x96 = -1;

	t23 = ((x93<=x94)+(x95&x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x97 = 11U;
	int64_t t24 = -30LL;

	t24 = ((x97<=x98)+(x99&x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 2941U;
	int32_t x103 = INT32_MIN;
	uint16_t x104 = 3670U;
	static volatile int32_t t25 = 106414771;

	t25 = ((x101<=x102)+(x103&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int32_t x106 = -22774007;
	static volatile uint8_t x107 = 19U;
	int16_t x108 = -1;

	t26 = ((x105<=x106)+(x107&x108));

	if (t26 != 19) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 4338U;
	static uint32_t x110 = 1853735U;
	int32_t x111 = -1;
	int32_t t27 = -117216654;

	t27 = ((x109<=x110)+(x111&x112));

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	int32_t x114 = INT32_MAX;
	int32_t x115 = -718546615;
	int16_t x116 = 3;
	int32_t t28 = -73;

	t28 = ((x113<=x114)+(x115&x116));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int8_t x118 = INT8_MIN;
	int64_t t29 = 531231330706536576LL;

	t29 = ((x117<=x118)+(x119&x120));

	if (t29 != 106510678LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x122 = 2036U;
	volatile int8_t x123 = INT8_MAX;
	volatile uint8_t x124 = 1U;

	t30 = ((x121<=x122)+(x123&x124));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MIN;
	uint8_t x128 = 12U;

	t31 = ((x125<=x126)+(x127&x128));

	if (t31 != 9) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 1U;
	volatile uint8_t x130 = 12U;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t32 = -31207;

	t32 = ((x129<=x130)+(x131&x132));

	if (t32 != 128) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x134 = 485885538192670LLU;
	static volatile int8_t x135 = -9;

	t33 = ((x133<=x134)+(x135&x136));

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x137 = 8;
	int64_t x138 = -1LL;
	int32_t t34 = 218842;

	t34 = ((x137<=x138)+(x139&x140));

	if (t34 != 11520) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 0U;
	int64_t x142 = -1LL;
	int32_t x143 = -860;
	int64_t x144 = 7536275LL;

	t35 = ((x141<=x142)+(x143&x144));

	if (t35 != 7535744LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = 5U;
	static uint64_t x146 = 13659992852374LLU;
	volatile uint32_t x147 = 7U;
	volatile uint32_t t36 = 33000201U;

	t36 = ((x145<=x146)+(x147&x148));

	if (t36 != 2U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = UINT16_MAX;
	int8_t x151 = INT8_MIN;
	static int32_t x152 = INT32_MIN;

	t37 = ((x149<=x150)+(x151&x152));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	static volatile int64_t x154 = 21645788759357LL;
	int32_t x156 = 859;
	static int64_t t38 = 1395912356LL;

	t38 = ((x153<=x154)+(x155&x156));

	if (t38 != 860LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	int8_t x158 = -1;
	int64_t x160 = INT64_MAX;
	static int64_t t39 = 360860379032662531LL;

	t39 = ((x157<=x158)+(x159&x160));

	if (t39 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = -31607879289124017LL;
	int64_t x162 = -148461443944378741LL;
	volatile int64_t x163 = -1LL;
	int32_t x164 = -2;
	int64_t t40 = 3LL;

	t40 = ((x161<=x162)+(x163&x164));

	if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int16_t x166 = -95;
	int64_t x167 = INT64_MIN;
	static uint64_t x168 = UINT64_MAX;
	static uint64_t t41 = 3107937284LLU;

	t41 = ((x165<=x166)+(x167&x168));

	if (t41 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	static int32_t x170 = INT32_MIN;
	int32_t x171 = INT32_MIN;
	int64_t x172 = INT64_MAX;

	t42 = ((x169<=x170)+(x171&x172));

	if (t42 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MAX;
	volatile uint16_t x175 = 73U;
	static int32_t x176 = INT32_MAX;
	volatile int32_t t43 = 4152923;

	t43 = ((x173<=x174)+(x175&x176));

	if (t43 != 74) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	uint8_t x179 = 8U;
	volatile int16_t x180 = INT16_MAX;
	volatile int32_t t44 = 314;

	t44 = ((x177<=x178)+(x179&x180));

	if (t44 != 9) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	uint64_t x182 = 1906460291LLU;
	int64_t x183 = -1LL;

	t45 = ((x181<=x182)+(x183&x184));

	if (t45 != 8LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 2477LL;
	static int32_t x186 = 16600577;
	volatile int32_t t46 = -2089;

	t46 = ((x185<=x186)+(x187&x188));

	if (t46 != 42) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	volatile int32_t x190 = INT32_MAX;
	int16_t x191 = INT16_MIN;

	t47 = ((x189<=x190)+(x191&x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	uint32_t x194 = UINT32_MAX;
	int8_t x196 = -1;

	t48 = ((x193<=x194)+(x195&x196));

	if (t48 != 56) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	static uint64_t x198 = 1817450LLU;
	uint32_t x200 = 1542U;
	volatile uint64_t t49 = 27559LLU;

	t49 = ((x197<=x198)+(x199&x200));

	if (t49 != 1540LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	static volatile uint32_t x202 = 911327U;
	uint64_t x204 = 3416377792855780577LLU;
	volatile uint64_t t50 = 2051747419640LLU;

	t50 = ((x201<=x202)+(x203&x204));

	if (t50 != 3416377792855780480LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x207 = 9397U;
	uint8_t x208 = 3U;

	t51 = ((x205<=x206)+(x207&x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -2888;
	int8_t x210 = INT8_MIN;
	volatile int32_t x211 = INT32_MAX;
	uint64_t x212 = UINT64_MAX;

	t52 = ((x209<=x210)+(x211&x212));

	if (t52 != 2147483648LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	static uint16_t x214 = UINT16_MAX;
	static int16_t x215 = INT16_MIN;
	int64_t t53 = -12LL;

	t53 = ((x213<=x214)+(x215&x216));

	if (t53 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x217 = -1;
	uint64_t x218 = 67090356LLU;
	volatile int8_t x219 = INT8_MAX;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 15505709;

	t54 = ((x217<=x218)+(x219&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = -1;
	uint16_t x222 = 1195U;
	static int16_t x223 = INT16_MIN;
	static int32_t x224 = 60545;
	int32_t t55 = -32153934;

	t55 = ((x221<=x222)+(x223&x224));

	if (t55 != 32769) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	int32_t t56 = -112737247;

	t56 = ((x225<=x226)+(x227&x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MIN;
	int32_t x231 = 48755088;
	volatile int64_t x232 = INT64_MIN;
	static volatile int64_t t57 = -794127LL;

	t57 = ((x229<=x230)+(x231&x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	uint32_t x234 = 14766U;
	static int64_t x235 = 35541876258537387LL;
	int16_t x236 = INT16_MAX;
	int64_t t58 = 473480416633LL;

	t58 = ((x233<=x234)+(x235&x236));

	if (t58 != 32683LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	uint8_t x239 = 11U;
	uint8_t x240 = UINT8_MAX;
	int32_t t59 = -122316270;

	t59 = ((x237<=x238)+(x239&x240));

	if (t59 != 12) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = INT8_MIN;
	static uint8_t x243 = 1U;
	int64_t x244 = 373LL;
	volatile int64_t t60 = -97538272408LL;

	t60 = ((x241<=x242)+(x243&x244));

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 62U;
	volatile uint32_t t61 = 281015U;

	t61 = ((x245<=x246)+(x247&x248));

	if (t61 != 2U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = -1;
	volatile int8_t x251 = INT8_MIN;

	t62 = ((x249<=x250)+(x251&x252));

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = -1;
	volatile int8_t x254 = -19;
	int8_t x255 = INT8_MIN;
	int64_t t63 = -308614601LL;

	t63 = ((x253<=x254)+(x255&x256));

	if (t63 != 1865329540945152LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = 1;
	int64_t x258 = 26185245737LL;
	int8_t x259 = 30;
	int64_t x260 = 2225781634146078390LL;
	volatile int64_t t64 = -14848LL;

	t64 = ((x257<=x258)+(x259&x260));

	if (t64 != 23LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	volatile uint8_t x262 = UINT8_MAX;
	int16_t x263 = INT16_MAX;
	volatile uint32_t x264 = 6U;

	t65 = ((x261<=x262)+(x263&x264));

	if (t65 != 7U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	uint8_t x266 = 29U;
	uint16_t x267 = 2326U;
	volatile int32_t t66 = -4752495;

	t66 = ((x265<=x266)+(x267&x268));

	if (t66 != 2326) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = -1;
	int8_t x274 = INT8_MIN;
	int16_t x275 = INT16_MAX;
	int32_t t67 = 57153277;

	t67 = ((x273<=x274)+(x275&x276));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x277 = -1721;
	int64_t x278 = INT64_MIN;
	static volatile int32_t t68 = -3276;

	t68 = ((x277<=x278)+(x279&x280));

	if (t68 != 384) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x282 = 241U;
	int8_t x283 = -1;
	int8_t x284 = 0;

	t69 = ((x281<=x282)+(x283&x284));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x286 = -1;
	uint8_t x287 = 0U;
	int32_t x288 = INT32_MIN;
	int32_t t70 = 1565;

	t70 = ((x285<=x286)+(x287&x288));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x291 = 65334937LL;
	int8_t x292 = INT8_MIN;
	volatile int64_t t71 = -89520935074030218LL;

	t71 = ((x289<=x290)+(x291&x292));

	if (t71 != 65334912LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x293 = UINT16_MAX;
	int32_t x294 = 68411649;
	volatile int8_t x295 = INT8_MIN;
	int64_t x296 = INT64_MIN;
	volatile int64_t t72 = -31877LL;

	t72 = ((x293<=x294)+(x295&x296));

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x297 = 13U;
	int16_t x298 = -605;
	int16_t x299 = INT16_MAX;
	int16_t x300 = -1;
	volatile int32_t t73 = -1;

	t73 = ((x297<=x298)+(x299&x300));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = INT16_MIN;
	int16_t x302 = -1;
	int32_t x303 = -3509320;
	int32_t x304 = INT32_MAX;
	int32_t t74 = 1155751;

	t74 = ((x301<=x302)+(x303&x304));

	if (t74 != 2143974329) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = INT64_MAX;
	int64_t x306 = 3820571818398LL;
	uint64_t x307 = UINT64_MAX;
	static uint64_t x308 = UINT64_MAX;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = ((x305<=x306)+(x307&x308));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x310 = 166U;
	static int16_t x311 = 50;
	int32_t x312 = -1;

	t76 = ((x309<=x310)+(x311&x312));

	if (t76 != 51) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x313 = INT64_MAX;
	uint8_t x314 = 2U;
	static volatile int64_t x315 = -1LL;
	static int32_t x316 = INT32_MIN;
	volatile int64_t t77 = 110409LL;

	t77 = ((x313<=x314)+(x315&x316));

	if (t77 != -2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = 1;
	uint16_t x318 = 5821U;
	static uint8_t x319 = 20U;
	int64_t x320 = 13757159165056510LL;

	t78 = ((x317<=x318)+(x319&x320));

	if (t78 != 21LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x321 = INT64_MIN;
	static int64_t x322 = 31241284LL;
	uint8_t x324 = UINT8_MAX;
	int32_t t79 = 95521689;

	t79 = ((x321<=x322)+(x323&x324));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = 3867;
	int32_t x330 = INT32_MAX;
	uint64_t x331 = 4384683647914427LLU;
	static uint64_t t80 = 3694278594346843444LLU;

	t80 = ((x329<=x330)+(x331&x332));

	if (t80 != 4384683647914428LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = INT64_MIN;
	static int16_t x334 = INT16_MIN;
	static uint32_t x335 = 2U;
	int8_t x336 = -1;
	uint32_t t81 = 4U;

	t81 = ((x333<=x334)+(x335&x336));

	if (t81 != 3U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = 15;
	uint32_t x339 = UINT32_MAX;
	int64_t x340 = INT64_MAX;

	t82 = ((x337<=x338)+(x339&x340));

	if (t82 != 4294967295LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x341 = INT64_MIN;
	volatile int64_t x342 = INT64_MIN;
	uint64_t x343 = 548100LLU;
	int8_t x344 = -1;
	volatile uint64_t t83 = 477879968874099LLU;

	t83 = ((x341<=x342)+(x343&x344));

	if (t83 != 548101LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = -24;
	int8_t x348 = -1;
	int64_t t84 = 20LL;

	t84 = ((x345<=x346)+(x347&x348));

	if (t84 != 28041154581LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = 321264729691LL;
	volatile int8_t x351 = 9;
	int8_t x352 = 51;
	volatile int32_t t85 = -43;

	t85 = ((x349<=x350)+(x351&x352));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = -34;
	uint32_t x354 = 2748831U;
	uint16_t x355 = UINT16_MAX;
	int16_t x356 = INT16_MIN;
	static int32_t t86 = -1923879;

	t86 = ((x353<=x354)+(x355&x356));

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = 62100752759302974LL;
	static uint64_t x358 = 78LLU;
	uint32_t x359 = 205U;

	t87 = ((x357<=x358)+(x359&x360));

	if (t87 != 205U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x362 = -131;
	static int64_t x364 = INT64_MIN;
	int64_t t88 = 189772755843442LL;

	t88 = ((x361<=x362)+(x363&x364));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = 0LLU;
	static int8_t x366 = -1;
	uint8_t x367 = 0U;
	int64_t x368 = INT64_MIN;
	int64_t t89 = -45844LL;

	t89 = ((x365<=x366)+(x367&x368));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x369 = INT64_MIN;
	static int8_t x370 = -27;
	static int16_t x371 = 2;
	int16_t x372 = INT16_MAX;
	static volatile int32_t t90 = -173;

	t90 = ((x369<=x370)+(x371&x372));

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x375 = 20521563U;
	uint16_t x376 = UINT16_MAX;

	t91 = ((x373<=x374)+(x375&x376));

	if (t91 != 8795U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x381 = UINT16_MAX;
	static volatile int32_t x382 = -1;
	int8_t x383 = INT8_MIN;
	int32_t x384 = 4;
	static int32_t t92 = 1;

	t92 = ((x381<=x382)+(x383&x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x385 = UINT32_MAX;
	int32_t x386 = INT32_MIN;
	uint8_t x387 = 7U;
	int8_t x388 = -51;
	volatile int32_t t93 = 2;

	t93 = ((x385<=x386)+(x387&x388));

	if (t93 != 5) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x389 = 3U;
	int16_t x390 = INT16_MIN;
	static volatile int32_t x391 = INT32_MIN;
	static int32_t t94 = 442159459;

	t94 = ((x389<=x390)+(x391&x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x393 = INT16_MIN;
	int16_t x394 = INT16_MAX;
	int8_t x395 = INT8_MIN;
	int8_t x396 = 0;
	volatile int32_t t95 = -283;

	t95 = ((x393<=x394)+(x395&x396));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x397 = 1U;
	static int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MIN;
	volatile int64_t x400 = INT64_MIN;
	volatile int64_t t96 = INT64_MIN;

	t96 = ((x397<=x398)+(x399&x400));

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = INT64_MIN;
	uint32_t x402 = 4U;
	uint32_t x403 = 13U;
	volatile int16_t x404 = 1;

	t97 = ((x401<=x402)+(x403&x404));

	if (t97 != 2U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x406 = INT64_MIN;
	uint16_t x407 = 4677U;

	t98 = ((x405<=x406)+(x407&x408));

	if (t98 != 4678) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = INT64_MIN;
	int16_t x410 = INT16_MIN;
	int32_t x411 = 554;
	int64_t x412 = INT64_MIN;
	volatile int64_t t99 = 136LL;

	t99 = ((x409<=x410)+(x411&x412));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

