#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x8 = 57961069445646120LLU;
int8_t x9 = -1;
int64_t t3 = -23871LL;
uint64_t x22 = 17114455718775LLU;
static volatile int8_t x32 = -15;
int16_t x37 = -1;
volatile uint8_t x44 = 7U;
int64_t x48 = 14461971199420LL;
uint64_t x53 = UINT64_MAX;
uint64_t t12 = 624927842719523LLU;
int64_t x61 = 4117891LL;
int64_t x74 = INT64_MAX;
static uint64_t x75 = 2LLU;
int64_t x83 = -1LL;
int64_t x84 = 43132933962746647LL;
uint16_t x89 = 1270U;
int8_t x90 = INT8_MIN;
int16_t x105 = 6682;
volatile uint64_t t25 = 58650644LLU;
int64_t x113 = -1LL;
int8_t x114 = INT8_MAX;
uint16_t x117 = UINT16_MAX;
int32_t x124 = -1;
int16_t x127 = -1;
uint32_t x131 = 737U;
uint32_t t30 = 14852U;
int8_t x151 = -1;
static volatile int64_t x152 = -1LL;
volatile int32_t t34 = 565828635;
volatile uint32_t x160 = 248U;
volatile int64_t t35 = -6349167LL;
int32_t x162 = -3490;
int8_t x166 = INT8_MAX;
int16_t x172 = INT16_MIN;
int64_t t38 = 5035508544792446LL;
uint16_t x173 = UINT16_MAX;
static int8_t x176 = 11;
uint16_t x180 = UINT16_MAX;
uint64_t x181 = 84209LLU;
uint64_t t41 = 114356493905LLU;
uint64_t x187 = 288322349130687731LLU;
uint64_t x190 = UINT64_MAX;
static uint64_t x192 = 13326312871175601LLU;
int32_t x196 = INT32_MIN;
int32_t t44 = 23;
int64_t x199 = 833954492311LL;
int32_t x201 = INT32_MIN;
uint16_t x204 = 1U;
int16_t x205 = -5623;
volatile int64_t x206 = 1637082078997249LL;
int64_t t47 = 144706353LL;
uint64_t t48 = 367780LLU;
int64_t x213 = INT64_MIN;
volatile uint32_t t51 = 15U;
static uint32_t x225 = 51140U;
volatile int16_t x227 = 1;
static volatile int64_t t53 = -9228900701LL;
int64_t x237 = -1LL;
int64_t x240 = 136LL;
static int8_t x243 = INT8_MAX;
int16_t x244 = INT16_MAX;
volatile int64_t x245 = INT64_MIN;
static int16_t x249 = -137;
static volatile int8_t x250 = 0;
static volatile int16_t x252 = -1;
static volatile int16_t x256 = INT16_MIN;
static uint8_t x264 = 95U;
uint64_t x267 = UINT64_MAX;
uint64_t x272 = 16LLU;
static uint16_t x278 = 412U;
uint64_t x281 = 201LLU;
uint64_t x287 = 1LLU;
uint8_t x297 = UINT8_MAX;
volatile uint64_t t71 = 402LLU;
volatile uint8_t x320 = 40U;
int64_t t72 = -49LL;
int8_t x324 = -1;
int8_t x331 = -1;
volatile int64_t t75 = 1LL;
volatile int8_t x337 = -1;
volatile uint8_t x352 = UINT8_MAX;
volatile int64_t t80 = -28023772276LL;
int8_t x359 = INT8_MAX;
volatile uint64_t x363 = UINT64_MAX;
int64_t t83 = -8488984115927834LL;
static volatile int32_t x375 = -1;
uint32_t t85 = 7U;
int16_t x379 = INT16_MAX;
uint32_t x380 = 604245U;
uint32_t x381 = 2752U;
static uint8_t x388 = 22U;
int64_t t90 = 209939416102525740LL;
uint8_t x402 = 0U;
volatile int64_t t91 = -11919367LL;
uint32_t x406 = 6614U;
uint32_t x409 = UINT32_MAX;
static uint32_t t94 = 0U;
static volatile int8_t x420 = -1;
int16_t x421 = -1;
int32_t x432 = INT32_MAX;
int16_t x433 = -1;
int64_t x435 = 1757236623541176115LL;


void f0(void) {
	int16_t x1 = 260;
	int8_t x2 = 13;
	uint64_t x3 = 166694LLU;
	int8_t x4 = -1;
	volatile uint64_t t0 = 632490LLU;

	t0 = (x1*(x2&(x3&x4)));

	if (t0 != 1040LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x6 = INT16_MAX;
	uint32_t x7 = UINT32_MAX;
	uint64_t t1 = 222185LLU;

	t1 = (x5*(x6&(x7&x8)));

	if (t1 != 18446744073709317120LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 100;
	static int8_t x11 = 6;
	static int8_t x12 = INT8_MAX;
	static int32_t t2 = 1993793;

	t2 = (x9*(x10&(x11&x12)));

	if (t2 != -4) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 8U;
	int32_t x14 = 407;
	int64_t x15 = INT64_MIN;
	int64_t x16 = -422652045LL;

	t3 = (x13*(x14&(x15&x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 1;
	int8_t x18 = -26;
	uint16_t x19 = 9001U;
	uint32_t x20 = 129189U;
	uint32_t t4 = 28834U;

	t4 = (x17*(x18&(x19&x20)));

	if (t4 != 8224U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -1;
	uint64_t x23 = 5396878536084405LLU;
	int64_t x24 = INT64_MAX;
	uint64_t t5 = 13LLU;

	t5 = (x21*(x22&(x23&x24)));

	if (t5 != 18446730877354898635LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	uint8_t x26 = 63U;
	uint16_t x27 = UINT16_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 66519;

	t6 = (x25*(x26&(x27&x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MAX;
	volatile int16_t x30 = INT16_MIN;
	uint16_t x31 = UINT16_MAX;
	int32_t t7 = -27663;

	t7 = (x29*(x30&(x31&x32)));

	if (t7 != 1073709056) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	uint16_t x34 = UINT16_MAX;
	uint16_t x35 = 12439U;
	int32_t x36 = -1;
	volatile int32_t t8 = -372739;

	t8 = (x33*(x34&(x35&x36)));

	if (t8 != 3171945) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = 15637U;
	uint16_t x39 = 161U;
	static int8_t x40 = 1;
	uint32_t t9 = UINT32_MAX;

	t9 = (x37*(x38&(x39&x40)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 15678045LLU;
	int64_t x42 = -15626LL;
	int8_t x43 = -1;
	static uint64_t t10 = 2LLU;

	t10 = (x41*(x42&(x43&x44)));

	if (t10 != 94068270LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	volatile int16_t x46 = -63;
	int16_t x47 = INT16_MIN;
	volatile int64_t t11 = -684231LL;

	t11 = (x45*(x46&(x47&x48)));

	if (t11 != -14461971169280LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = -867345394LL;
	int64_t x55 = INT64_MIN;
	static uint8_t x56 = 6U;

	t12 = (x53*(x54&(x55&x56)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = UINT8_MAX;
	static int32_t x58 = INT32_MAX;
	int32_t x59 = 1852050;
	int8_t x60 = INT8_MIN;
	int32_t t13 = -34203503;

	t13 = (x57*(x58&(x59&x60)));

	if (t13 != 472268160) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = -1;
	uint32_t x63 = 1294768U;
	int64_t x64 = INT64_MIN;
	int64_t t14 = -108326471072925994LL;

	t14 = (x61*(x62&(x63&x64)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	static int8_t x66 = INT8_MIN;
	static uint16_t x67 = UINT16_MAX;
	volatile int64_t x68 = INT64_MAX;
	int64_t t15 = 143LL;

	t15 = (x65*(x66&(x67&x68)));

	if (t15 != 8306816LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -1LL;
	int16_t x70 = INT16_MAX;
	int8_t x71 = -1;
	volatile int8_t x72 = INT8_MIN;
	int64_t t16 = -8276450822407207LL;

	t16 = (x69*(x70&(x71&x72)));

	if (t16 != -32640LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x73 = -1;
	static int32_t x76 = INT32_MIN;
	uint64_t t17 = 7533574801171496LLU;

	t17 = (x73*(x74&(x75&x76)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x77 = UINT8_MAX;
	uint64_t x78 = 130LLU;
	uint64_t x79 = UINT64_MAX;
	int8_t x80 = INT8_MIN;
	volatile uint64_t t18 = 132951198784469400LLU;

	t18 = (x77*(x78&(x79&x80)));

	if (t18 != 32640LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -1;
	int64_t x82 = -1LL;
	volatile int64_t t19 = -432059796302791636LL;

	t19 = (x81*(x82&(x83&x84)));

	if (t19 != -43132933962746647LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MIN;
	uint16_t x86 = 20440U;
	int16_t x87 = INT16_MIN;
	volatile int16_t x88 = INT16_MIN;
	int32_t t20 = -43;

	t20 = (x85*(x86&(x87&x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x91 = INT32_MAX;
	uint32_t x92 = 54263347U;
	volatile uint32_t t21 = 790453U;

	t21 = (x89*(x90&(x91&x92)));

	if (t21 != 194909184U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x97 = -1LL;
	uint8_t x98 = UINT8_MAX;
	uint32_t x99 = UINT32_MAX;
	volatile int16_t x100 = 85;
	int64_t t22 = 6316LL;

	t22 = (x97*(x98&(x99&x100)));

	if (t22 != -85LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 1192263LLU;
	int16_t x102 = 163;
	int64_t x103 = INT64_MAX;
	static int64_t x104 = 45047284872868260LL;
	volatile uint64_t t23 = 56LLU;

	t23 = (x101*(x102&(x103&x104)));

	if (t23 != 190762080LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x106 = -1146LL;
	int8_t x107 = -1;
	int32_t x108 = INT32_MIN;
	volatile int64_t t24 = 314712445484549830LL;

	t24 = (x105*(x106&(x107&x108)));

	if (t24 != -14349485735936LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = 40620LLU;
	int16_t x110 = 400;
	int64_t x111 = INT64_MAX;
	int16_t x112 = INT16_MAX;

	t25 = (x109*(x110&(x111&x112)));

	if (t25 != 16248000LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x115 = 2LLU;
	volatile int32_t x116 = -71274042;
	static volatile uint64_t t26 = 13748411416402146LLU;

	t26 = (x113*(x114&(x115&x116)));

	if (t26 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x118 = INT8_MIN;
	static volatile int64_t x119 = 7521315614164LL;
	uint16_t x120 = 5723U;
	volatile int64_t t27 = 2902651463925344LL;

	t27 = (x117*(x118&(x119&x120)));

	if (t27 != 67107840LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = 1;
	int8_t x122 = -61;
	int8_t x123 = INT8_MIN;
	volatile int32_t t28 = -747;

	t28 = (x121*(x122&(x123&x124)));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x125 = 27LL;
	int8_t x126 = INT8_MIN;
	int16_t x128 = INT16_MIN;
	static int64_t t29 = -133820391185LL;

	t29 = (x125*(x126&(x127&x128)));

	if (t29 != -884736LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = -1;
	int32_t x130 = -1;
	volatile int32_t x132 = -1;

	t30 = (x129*(x130&(x131&x132)));

	if (t30 != 4294966559U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = 2298021LL;
	static int64_t x134 = 987090944009692925LL;
	uint32_t x135 = 609U;
	volatile int16_t x136 = INT16_MIN;
	static volatile int64_t t31 = 15253835LL;

	t31 = (x133*(x134&(x135&x136)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x141 = -45;
	int8_t x142 = INT8_MAX;
	int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MIN;
	static int32_t t32 = 59421;

	t32 = (x141*(x142&(x143&x144)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x149 = INT32_MAX;
	uint32_t x150 = UINT32_MAX;
	int64_t t33 = -95896626947253LL;

	t33 = (x149*(x150&(x151&x152)));

	if (t33 != 9223372030412324865LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x153 = INT8_MIN;
	static int8_t x154 = INT8_MAX;
	int32_t x155 = -1;
	int8_t x156 = 51;

	t34 = (x153*(x154&(x155&x156)));

	if (t34 != -6528) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = 1U;
	volatile int64_t x158 = INT64_MAX;
	int16_t x159 = -430;

	t35 = (x157*(x158&(x159&x160)));

	if (t35 != 80LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = -16286;
	int16_t x163 = INT16_MIN;
	uint8_t x164 = 11U;
	int32_t t36 = 4402;

	t36 = (x161*(x162&(x163&x164)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x165 = 32354373368LL;
	int64_t x167 = INT64_MAX;
	static uint64_t x168 = 1633278723705877LLU;
	uint64_t t37 = 118671069114615LLU;

	t37 = (x165*(x166&(x167&x168)));

	if (t37 != 679441840728LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x169 = -33303LL;
	static int16_t x170 = 1;
	uint8_t x171 = UINT8_MAX;

	t38 = (x169*(x170&(x171&x172)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x174 = -1;
	int64_t x175 = 117322555LL;
	volatile int64_t t39 = 125964LL;

	t39 = (x173*(x174&(x175&x176)));

	if (t39 != 720885LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = INT64_MAX;
	int16_t x178 = 7301;
	int64_t x179 = INT64_MIN;
	volatile int64_t t40 = 667568LL;

	t40 = (x177*(x178&(x179&x180)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x182 = 5;
	static uint32_t x183 = 279298U;
	uint8_t x184 = UINT8_MAX;

	t41 = (x181*(x182&(x183&x184)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = -1;
	uint16_t x186 = 4U;
	volatile uint32_t x188 = 13819U;
	uint64_t t42 = 785712024LLU;

	t42 = (x185*(x186&(x187&x188)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x189 = INT16_MIN;
	volatile int16_t x191 = 1;
	volatile uint64_t t43 = 1623393608803010LLU;

	t43 = (x189*(x190&(x191&x192)));

	if (t43 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x193 = 357U;
	uint16_t x194 = 5U;
	int8_t x195 = 43;

	t44 = (x193*(x194&(x195&x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x197 = 0;
	volatile int16_t x198 = 1;
	volatile uint32_t x200 = UINT32_MAX;
	volatile int64_t t45 = -209157853773LL;

	t45 = (x197*(x198&(x199&x200)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x202 = INT64_MAX;
	volatile uint16_t x203 = 126U;
	volatile int64_t t46 = -48LL;

	t46 = (x201*(x202&(x203&x204)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x207 = INT8_MAX;
	int8_t x208 = -3;

	t47 = (x205*(x206&(x207&x208)));

	if (t47 != -5623LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x209 = 2U;
	uint64_t x210 = UINT64_MAX;
	static int64_t x211 = INT64_MIN;
	static int32_t x212 = INT32_MIN;

	t48 = (x209*(x210&(x211&x212)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x214 = 721327849U;
	uint16_t x215 = 1U;
	int64_t x216 = INT64_MAX;
	int64_t t49 = INT64_MIN;

	t49 = (x213*(x214&(x215&x216)));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x217 = INT32_MIN;
	volatile uint32_t x218 = UINT32_MAX;
	static int32_t x219 = -1;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t50 = 2291637293LLU;

	t50 = (x217*(x218&(x219&x220)));

	if (t50 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x221 = UINT16_MAX;
	uint32_t x222 = 148965042U;
	static int32_t x223 = 1;
	static volatile int8_t x224 = -1;

	t51 = (x221*(x222&(x223&x224)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x226 = 0U;
	int64_t x228 = -1LL;
	int64_t t52 = 75LL;

	t52 = (x225*(x226&(x227&x228)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x229 = 104U;
	uint8_t x230 = UINT8_MAX;
	int64_t x231 = INT64_MIN;
	volatile int8_t x232 = -1;

	t53 = (x229*(x230&(x231&x232)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = INT8_MAX;
	static int8_t x234 = INT8_MAX;
	int16_t x235 = INT16_MIN;
	int8_t x236 = -37;
	int32_t t54 = 50869418;

	t54 = (x233*(x234&(x235&x236)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x238 = INT16_MAX;
	volatile uint64_t x239 = 2333379LLU;
	volatile uint64_t t55 = 16LLU;

	t55 = (x237*(x238&(x239&x240)));

	if (t55 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = -4;
	volatile int64_t x242 = -1LL;
	int64_t t56 = -59682198LL;

	t56 = (x241*(x242&(x243&x244)));

	if (t56 != -508LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x246 = 867705U;
	int8_t x247 = -1;
	int64_t x248 = INT64_MIN;
	int64_t t57 = 14214260LL;

	t57 = (x245*(x246&(x247&x248)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x251 = UINT8_MAX;
	volatile int32_t t58 = -33961;

	t58 = (x249*(x250&(x251&x252)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x253 = 5LLU;
	uint8_t x254 = UINT8_MAX;
	static int16_t x255 = -1;
	volatile uint64_t t59 = 5502821LLU;

	t59 = (x253*(x254&(x255&x256)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x257 = -1;
	uint8_t x258 = UINT8_MAX;
	volatile uint32_t x259 = 13769698U;
	static int16_t x260 = 4;
	volatile uint32_t t60 = 4U;

	t60 = (x257*(x258&(x259&x260)));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = -25171288746329637LL;
	int64_t x262 = -4695474LL;
	static volatile int16_t x263 = -103;
	static int64_t t61 = 1LL;

	t61 = (x261*(x262&(x263&x264)));

	if (t61 != -201370309970637096LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x265 = 113896454U;
	int16_t x266 = INT16_MIN;
	int32_t x268 = -1;
	volatile uint64_t t62 = 268114413926145LLU;

	t62 = (x265*(x266&(x267&x268)));

	if (t62 != 18446740341550546944LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MIN;
	int32_t x270 = -1;
	uint8_t x271 = 0U;
	volatile uint64_t t63 = 3636813360350155LLU;

	t63 = (x269*(x270&(x271&x272)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = -985046393LL;
	volatile int8_t x279 = 0;
	static int64_t x280 = 0LL;
	static int64_t t64 = 195678273539678322LL;

	t64 = (x277*(x278&(x279&x280)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x282 = 8LLU;
	uint16_t x283 = 8394U;
	int64_t x284 = 263298LL;
	volatile uint64_t t65 = 3935979458311129LLU;

	t65 = (x281*(x282&(x283&x284)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = INT64_MIN;
	int16_t x286 = INT16_MIN;
	uint64_t x288 = UINT64_MAX;
	uint64_t t66 = 14796LLU;

	t66 = (x285*(x286&(x287&x288)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x289 = 1444U;
	static int32_t x290 = -5502;
	int16_t x291 = INT16_MIN;
	uint8_t x292 = 8U;
	int32_t t67 = 17551;

	t67 = (x289*(x290&(x291&x292)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x298 = 0;
	volatile int16_t x299 = -1;
	static int64_t x300 = INT64_MIN;
	int64_t t68 = -65846LL;

	t68 = (x297*(x298&(x299&x300)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x301 = UINT32_MAX;
	int8_t x302 = INT8_MAX;
	int64_t x303 = INT64_MIN;
	uint64_t x304 = 3721LLU;
	uint64_t t69 = 3368925726634070277LLU;

	t69 = (x301*(x302&(x303&x304)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x305 = 35;
	int8_t x306 = INT8_MIN;
	uint16_t x307 = 5U;
	uint64_t x308 = 9200999305LLU;
	volatile uint64_t t70 = 11264774808477590LLU;

	t70 = (x305*(x306&(x307&x308)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = -330107310043LL;
	uint64_t x310 = 985912LLU;
	static int32_t x311 = INT32_MIN;
	static volatile int64_t x312 = INT64_MIN;

	t71 = (x309*(x310&(x311&x312)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x317 = 27LL;
	int8_t x318 = INT8_MAX;
	int16_t x319 = 107;

	t72 = (x317*(x318&(x319&x320)));

	if (t72 != 1080LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x321 = UINT32_MAX;
	int16_t x322 = INT16_MIN;
	static volatile int32_t x323 = -122369230;
	uint32_t t73 = 264311455U;

	t73 = (x321*(x322&(x323&x324)));

	if (t73 != 122388480U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x325 = 3547994610771857601LLU;
	volatile int64_t x326 = INT64_MIN;
	static uint8_t x327 = 61U;
	volatile uint16_t x328 = 394U;
	volatile uint64_t t74 = 36LLU;

	t74 = (x325*(x326&(x327&x328)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = -1LL;
	volatile int32_t x330 = INT32_MIN;
	int8_t x332 = INT8_MIN;

	t75 = (x329*(x330&(x331&x332)));

	if (t75 != 2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x333 = UINT64_MAX;
	uint8_t x334 = 0U;
	uint16_t x335 = 1U;
	int16_t x336 = 0;
	uint64_t t76 = 14079LLU;

	t76 = (x333*(x334&(x335&x336)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x338 = 60U;
	uint64_t x339 = 134209831LLU;
	uint16_t x340 = 86U;
	volatile uint64_t t77 = 487926075770533LLU;

	t77 = (x337*(x338&(x339&x340)));

	if (t77 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = INT16_MAX;
	uint64_t x346 = UINT64_MAX;
	int8_t x347 = 3;
	uint32_t x348 = 2849566U;
	volatile uint64_t t78 = 440761865537LLU;

	t78 = (x345*(x346&(x347&x348)));

	if (t78 != 65534LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = -1;
	int16_t x350 = -5413;
	static volatile uint16_t x351 = UINT16_MAX;
	int32_t t79 = 357;

	t79 = (x349*(x350&(x351&x352)));

	if (t79 != -219) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x353 = 29440339;
	int16_t x354 = -1;
	int64_t x355 = INT64_MAX;
	int32_t x356 = 334568680;

	t80 = (x353*(x354&(x355&x356)));

	if (t80 != 9849815357982520LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = -1;
	int64_t x358 = INT64_MIN;
	volatile uint32_t x360 = 2137727162U;
	volatile int64_t t81 = 721960LL;

	t81 = (x357*(x358&(x359&x360)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = INT32_MIN;
	volatile int64_t x362 = -1LL;
	static int8_t x364 = INT8_MIN;
	uint64_t t82 = 55597022LLU;

	t82 = (x361*(x362&(x363&x364)));

	if (t82 != 274877906944LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x365 = 59U;
	int64_t x366 = 1712461LL;
	uint32_t x367 = 10433809U;
	int64_t x368 = 247817LL;

	t83 = (x365*(x366&(x367&x368)));

	if (t83 != 7733307LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x369 = 2295;
	int16_t x370 = -1;
	uint32_t x371 = UINT32_MAX;
	int32_t x372 = INT32_MIN;
	static volatile uint32_t t84 = 18250727U;

	t84 = (x369*(x370&(x371&x372)));

	if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x373 = UINT32_MAX;
	uint32_t x374 = 6444U;
	uint32_t x376 = UINT32_MAX;

	t85 = (x373*(x374&(x375&x376)));

	if (t85 != 4294960852U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x377 = INT8_MAX;
	volatile uint64_t x378 = 16490471607335LLU;
	uint64_t t86 = 2763667716308LLU;

	t86 = (x377*(x378&(x379&x380)));

	if (t86 != 260731LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x382 = INT8_MIN;
	static volatile int16_t x383 = INT16_MIN;
	int64_t x384 = -16277LL;
	volatile int64_t t87 = 3757261597353836LL;

	t87 = (x381*(x382&(x383&x384)));

	if (t87 != -90177536LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x385 = 0;
	static int64_t x386 = 21LL;
	int64_t x387 = INT64_MAX;
	int64_t t88 = 2825LL;

	t88 = (x385*(x386&(x387&x388)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x389 = 29LL;
	volatile uint8_t x390 = 2U;
	uint32_t x391 = 92712637U;
	int16_t x392 = 8;
	int64_t t89 = -57320LL;

	t89 = (x389*(x390&(x391&x392)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = -1LL;
	uint16_t x394 = 796U;
	int8_t x395 = -1;
	int64_t x396 = 6641LL;

	t90 = (x393*(x394&(x395&x396)));

	if (t90 != -272LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x401 = INT32_MAX;
	int64_t x403 = INT64_MAX;
	int64_t x404 = 125LL;

	t91 = (x401*(x402&(x403&x404)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x405 = 28U;
	int64_t x407 = 95LL;
	uint64_t x408 = UINT64_MAX;
	static volatile uint64_t t92 = 1936595LLU;

	t92 = (x405*(x406&(x407&x408)));

	if (t92 != 2408LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x410 = INT32_MIN;
	volatile int32_t x411 = -15945;
	int16_t x412 = 0;
	uint32_t t93 = 1U;

	t93 = (x409*(x410&(x411&x412)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x413 = -11;
	uint32_t x414 = 59U;
	uint8_t x415 = 1U;
	static volatile int32_t x416 = INT32_MIN;

	t94 = (x413*(x414&(x415&x416)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x417 = -11;
	volatile int8_t x418 = INT8_MIN;
	int16_t x419 = INT16_MAX;
	int32_t t95 = -3716;

	t95 = (x417*(x418&(x419&x420)));

	if (t95 != -359040) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x422 = INT64_MAX;
	uint16_t x423 = 5U;
	uint8_t x424 = 16U;
	static volatile int64_t t96 = -91506LL;

	t96 = (x421*(x422&(x423&x424)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = INT16_MAX;
	static int32_t x426 = 185740537;
	uint16_t x427 = 95U;
	int32_t x428 = INT32_MAX;
	int32_t t97 = -115;

	t97 = (x425*(x426&(x427&x428)));

	if (t97 != 2916263) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x429 = UINT64_MAX;
	int8_t x430 = INT8_MIN;
	static int8_t x431 = 11;
	volatile uint64_t t98 = 1000065084LLU;

	t98 = (x429*(x430&(x431&x432)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x434 = UINT8_MAX;
	int16_t x436 = 103;
	static int64_t t99 = 953764171617LL;

	t99 = (x433*(x434&(x435&x436)));

	if (t99 != -35LL) { NG(); } else { ; }
	
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

