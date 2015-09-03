#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -53261357;
volatile int32_t x5 = INT32_MIN;
int32_t x13 = -8977;
int64_t x16 = INT64_MIN;
volatile int32_t t3 = -1139;
int16_t x18 = 1886;
volatile int16_t x28 = INT16_MIN;
static int8_t x29 = -1;
uint8_t x35 = UINT8_MAX;
uint8_t x42 = 0U;
volatile uint64_t t10 = 219635800453749091LLU;
static int64_t x45 = INT64_MAX;
int32_t x46 = -34152857;
uint32_t x49 = UINT32_MAX;
int8_t x52 = 6;
uint8_t x53 = UINT8_MAX;
volatile int32_t t13 = 92925950;
volatile uint64_t x58 = 3LLU;
volatile int32_t t16 = -9;
int8_t x76 = INT8_MIN;
int64_t x79 = INT64_MIN;
static volatile uint32_t x80 = UINT32_MAX;
uint32_t x82 = 3U;
uint32_t x83 = 6182695U;
volatile int16_t x84 = 0;
uint64_t x94 = 114251106136277611LLU;
int16_t x101 = 2;
int8_t x103 = -1;
static int64_t t23 = 326981601LL;
uint8_t x112 = UINT8_MAX;
static volatile int32_t t26 = 11;
uint32_t x122 = 1U;
int64_t x126 = INT64_MIN;
static int32_t x127 = 0;
int16_t x128 = -1;
static uint64_t x130 = 24726LLU;
uint32_t x144 = UINT32_MAX;
int32_t t31 = -9740;
static uint8_t x168 = 56U;
int8_t x170 = INT8_MIN;
int8_t x171 = INT8_MIN;
uint16_t x173 = UINT16_MAX;
static int8_t x174 = INT8_MIN;
uint32_t x176 = 57258U;
uint16_t x178 = 1U;
uint16_t x182 = 6U;
static volatile int64_t x183 = -41699699956274LL;
int64_t x189 = INT64_MIN;
static int32_t x190 = INT32_MAX;
uint32_t x192 = 2728587U;
int64_t x193 = -248491469341642319LL;
int64_t x203 = INT64_MAX;
volatile int16_t x208 = INT16_MIN;
int64_t x210 = INT64_MIN;
int8_t x213 = 0;
static int16_t x214 = INT16_MIN;
static uint16_t x220 = UINT16_MAX;
static int16_t x222 = INT16_MAX;
static int8_t x225 = INT8_MIN;
static int16_t x234 = -1;
int16_t x240 = INT16_MIN;
uint64_t t53 = 6891752LLU;
int32_t x243 = -1;
int64_t x248 = INT64_MIN;
volatile int16_t x251 = INT16_MIN;
int32_t x253 = 127967;
volatile uint32_t x263 = UINT32_MAX;
static uint32_t t59 = 3802U;
uint16_t x276 = 1U;
volatile int64_t t64 = 88758LL;
int64_t x290 = -3862584LL;
int16_t x294 = INT16_MAX;
int8_t x299 = 2;
int32_t x306 = INT32_MIN;
int8_t x317 = -1;
int32_t t74 = 13;
int64_t x325 = 97176517695114470LL;
volatile uint8_t x328 = UINT8_MAX;
uint16_t x332 = 1U;
int16_t x335 = INT16_MIN;
int32_t x337 = INT32_MAX;
int16_t x344 = INT16_MIN;
static volatile uint8_t x351 = UINT8_MAX;
uint64_t x354 = 229109690917966408LLU;
volatile int8_t x360 = 1;
volatile uint32_t x367 = UINT32_MAX;
int32_t x374 = INT32_MAX;
int64_t x376 = INT64_MIN;
volatile int32_t t87 = 15082244;
int16_t x378 = -3;
static volatile uint32_t t88 = 13703U;
static int64_t x382 = -62409458448374LL;
int32_t x388 = INT32_MAX;
uint64_t t90 = 3372437408241560789LLU;
volatile int64_t x395 = INT64_MAX;
int32_t t92 = -97;
static uint32_t x400 = 56010666U;
uint64_t x402 = 12173LLU;
uint64_t x408 = UINT64_MAX;
int64_t x414 = 2032182810564540LL;


void f0(void) {
	static uint16_t x1 = 335U;
	uint8_t x2 = 51U;
	static int8_t x3 = -1;
	int16_t x4 = 4344;

	t0 = (x1&(x2+(x3<=x4)));

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = INT16_MIN;
	int64_t x7 = -2423363814LL;
	uint16_t x8 = 3505U;
	int32_t t1 = INT32_MIN;

	t1 = (x5&(x6+(x7<=x8)));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	int16_t x10 = -702;
	static int8_t x11 = INT8_MAX;
	int16_t x12 = INT16_MIN;
	int32_t t2 = INT32_MIN;

	t2 = (x9&(x10+(x11<=x12)));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x14 = 14892U;
	int8_t x15 = INT8_MIN;

	t3 = (x13&(x14+(x15<=x16)));

	if (t3 != 6188) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	volatile int16_t x19 = INT16_MIN;
	static int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 3037;

	t4 = (x17&(x18+(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -8;
	static uint8_t x22 = 18U;
	volatile uint16_t x23 = 8U;
	int32_t x24 = 75827090;
	volatile int32_t t5 = 296;

	t5 = (x21&(x22+(x23<=x24)));

	if (t5 != 16) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	volatile uint8_t x26 = 34U;
	volatile int16_t x27 = INT16_MAX;
	volatile int32_t t6 = -28;

	t6 = (x25&(x26+(x27<=x28)));

	if (t6 != 34) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -1LL;
	int32_t x31 = -1935967;
	static int16_t x32 = INT16_MIN;
	volatile int64_t t7 = 1248LL;

	t7 = (x29&(x30+(x31<=x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 122U;
	uint32_t x34 = UINT32_MAX;
	static int16_t x36 = INT16_MAX;
	uint32_t t8 = 230742U;

	t8 = (x33&(x34+(x35<=x36)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	uint32_t x38 = UINT32_MAX;
	volatile int16_t x39 = -9;
	uint64_t x40 = UINT64_MAX;
	int64_t t9 = -234585855LL;

	t9 = (x37&(x38+(x39<=x40)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	static int8_t x43 = INT8_MAX;
	volatile int8_t x44 = -1;

	t10 = (x41&(x42+(x43<=x44)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x47 = INT32_MIN;
	int8_t x48 = INT8_MIN;
	volatile int64_t t11 = -259033773602970LL;

	t11 = (x45&(x46+(x47<=x48)));

	if (t11 != 9223372036820622952LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x50 = UINT16_MAX;
	volatile uint16_t x51 = 2342U;
	static uint32_t t12 = 569546U;

	t12 = (x49&(x50+(x51<=x52)));

	if (t12 != 65535U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x54 = INT16_MAX;
	int16_t x55 = -1696;
	uint16_t x56 = 6U;

	t13 = (x53&(x54+(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1445;
	uint16_t x59 = 713U;
	static int64_t x60 = -1LL;
	volatile uint64_t t14 = 554904672123973LLU;

	t14 = (x57&(x58+(x59<=x60)));

	if (t14 != 3LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MAX;
	int8_t x62 = -1;
	uint64_t x63 = 2902045599689718873LLU;
	volatile int16_t x64 = -593;
	static int64_t t15 = 151007LL;

	t15 = (x61&(x62+(x63<=x64)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	int32_t x66 = 7165;
	int16_t x67 = INT16_MAX;
	static volatile int64_t x68 = -7917773929LL;

	t16 = (x65&(x66+(x67<=x68)));

	if (t16 != 253) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 42426U;
	volatile uint64_t x70 = 110131398LLU;
	volatile uint32_t x71 = 126U;
	uint16_t x72 = 24U;
	volatile uint64_t t17 = 23395LLU;

	t17 = (x69&(x70+(x71<=x72)));

	if (t17 != 8322LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x74 = INT64_MAX;
	volatile uint8_t x75 = 10U;
	volatile uint64_t t18 = 7962560863558LLU;

	t18 = (x73&(x74+(x75<=x76)));

	if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = 30;
	int32_t x78 = INT32_MIN;
	static int32_t t19 = 47375968;

	t19 = (x77&(x78+(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 14U;
	uint32_t t20 = 287U;

	t20 = (x81&(x82+(x83<=x84)));

	if (t20 != 2U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x89 = UINT8_MAX;
	static int16_t x90 = INT16_MIN;
	static int32_t x91 = INT32_MIN;
	static volatile int16_t x92 = -103;
	int32_t t21 = 43;

	t21 = (x89&(x90+(x91<=x92)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	int32_t x95 = INT32_MAX;
	int8_t x96 = 6;
	static uint64_t t22 = 2LLU;

	t22 = (x93&(x94+(x95<=x96)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x102 = -1LL;
	volatile int64_t x104 = -1LL;

	t23 = (x101&(x102+(x103<=x104)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -1LL;
	volatile uint64_t x106 = 10249460890LLU;
	uint8_t x107 = UINT8_MAX;
	int32_t x108 = 52913;
	volatile uint64_t t24 = 1034618288664LLU;

	t24 = (x105&(x106+(x107<=x108)));

	if (t24 != 10249460891LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = -1;
	int64_t x110 = INT64_MIN;
	volatile int32_t x111 = 1872;
	static int64_t t25 = INT64_MIN;

	t25 = (x109&(x110+(x111<=x112)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = 17258;
	static int32_t x114 = -11;
	uint64_t x115 = 265181461440935LLU;
	int8_t x116 = 1;

	t26 = (x113&(x114+(x115<=x116)));

	if (t26 != 17248) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = -1;
	uint16_t x118 = UINT16_MAX;
	int64_t x119 = 309042959LL;
	uint16_t x120 = 9U;
	static volatile int32_t t27 = -131648195;

	t27 = (x117&(x118+(x119<=x120)));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MAX;
	uint8_t x123 = 16U;
	static uint64_t x124 = 26828055155LLU;
	uint32_t t28 = 1426U;

	t28 = (x121&(x122+(x123<=x124)));

	if (t28 != 2U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -51;
	static int64_t t29 = INT64_MIN;

	t29 = (x125&(x126+(x127<=x128)));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	int64_t x131 = INT64_MIN;
	uint32_t x132 = 114250U;
	uint64_t t30 = 978026463362078789LLU;

	t30 = (x129&(x130+(x131<=x132)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = -1;
	volatile int32_t x142 = -1;
	uint16_t x143 = 1U;

	t31 = (x141&(x142+(x143<=x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x145 = 206070U;
	int8_t x146 = INT8_MIN;
	volatile int8_t x147 = INT8_MIN;
	int32_t x148 = -1;
	uint32_t t32 = 2852869U;

	t32 = (x145&(x146+(x147<=x148)));

	if (t32 != 205952U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = 1U;
	static int32_t x150 = INT32_MAX;
	uint64_t x151 = UINT64_MAX;
	volatile int16_t x152 = 9355;
	volatile int32_t t33 = 1017045709;

	t33 = (x149&(x150+(x151<=x152)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = INT8_MIN;
	static int32_t x162 = -1;
	uint8_t x163 = UINT8_MAX;
	static int8_t x164 = INT8_MIN;
	volatile int32_t t34 = -7702030;

	t34 = (x161&(x162+(x163<=x164)));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = INT8_MIN;
	uint32_t x166 = UINT32_MAX;
	volatile int64_t x167 = -185577939657LL;
	volatile uint32_t t35 = 19U;

	t35 = (x165&(x166+(x167<=x168)));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = -1LL;
	volatile uint64_t x172 = UINT64_MAX;
	int64_t t36 = 5472LL;

	t36 = (x169&(x170+(x171<=x172)));

	if (t36 != -127LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x175 = 3614U;
	static volatile int32_t t37 = 12;

	t37 = (x173&(x174+(x175<=x176)));

	if (t37 != 65409) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x177 = -1LL;
	volatile int8_t x179 = -2;
	int8_t x180 = INT8_MAX;
	volatile int64_t t38 = 56811995LL;

	t38 = (x177&(x178+(x179<=x180)));

	if (t38 != 2LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x181 = INT32_MIN;
	volatile uint8_t x184 = 0U;
	volatile int32_t t39 = 26320403;

	t39 = (x181&(x182+(x183<=x184)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x185 = INT32_MAX;
	uint8_t x186 = 34U;
	int8_t x187 = 0;
	uint64_t x188 = UINT64_MAX;
	int32_t t40 = 22496;

	t40 = (x185&(x186+(x187<=x188)));

	if (t40 != 35) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x191 = -1;
	volatile int64_t t41 = 133486417970780LL;

	t41 = (x189&(x190+(x191<=x192)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x194 = INT32_MIN;
	uint32_t x195 = UINT32_MAX;
	int16_t x196 = -1;
	volatile int64_t t42 = -194971078LL;

	t42 = (x193&(x194+(x195<=x196)));

	if (t42 != -248491470418345983LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x197 = -1;
	int64_t x198 = INT64_MIN;
	uint16_t x199 = 2U;
	volatile int8_t x200 = 23;
	volatile int64_t t43 = 8567370990072293LL;

	t43 = (x197&(x198+(x199<=x200)));

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = INT16_MIN;
	int8_t x202 = 1;
	int32_t x204 = -5042;
	int32_t t44 = -5192;

	t44 = (x201&(x202+(x203<=x204)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = -65950562;
	int16_t x206 = INT16_MIN;
	uint64_t x207 = 5379156LLU;
	int32_t t45 = -2008;

	t45 = (x205&(x206+(x207<=x208)));

	if (t45 != -65961984) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = -1;
	int64_t x211 = -4624653970460LL;
	uint32_t x212 = UINT32_MAX;
	int64_t t46 = 148429909215LL;

	t46 = (x209&(x210+(x211<=x212)));

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x215 = 27U;
	static int64_t x216 = -37480674LL;
	int32_t t47 = -441;

	t47 = (x213&(x214+(x215<=x216)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x217 = 0U;
	static uint8_t x218 = UINT8_MAX;
	volatile int64_t x219 = INT64_MIN;
	uint32_t t48 = 4019729U;

	t48 = (x217&(x218+(x219<=x220)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = INT16_MIN;
	static volatile int64_t x223 = INT64_MAX;
	int8_t x224 = -23;
	volatile int32_t t49 = -190305;

	t49 = (x221&(x222+(x223<=x224)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x226 = INT64_MIN;
	int64_t x227 = INT64_MIN;
	int32_t x228 = 26;
	int64_t t50 = INT64_MIN;

	t50 = (x225&(x226+(x227<=x228)));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x229 = 79U;
	int8_t x230 = INT8_MIN;
	int32_t x231 = 1;
	uint16_t x232 = 6U;
	int32_t t51 = 495;

	t51 = (x229&(x230+(x231<=x232)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x233 = INT64_MIN;
	int64_t x235 = -476718625LL;
	static volatile uint8_t x236 = UINT8_MAX;
	int64_t t52 = -815970LL;

	t52 = (x233&(x234+(x235<=x236)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x237 = UINT16_MAX;
	uint64_t x238 = UINT64_MAX;
	int32_t x239 = INT32_MIN;

	t53 = (x237&(x238+(x239<=x240)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x241 = INT8_MIN;
	int16_t x242 = INT16_MIN;
	int32_t x244 = -1;
	volatile int32_t t54 = 36547;

	t54 = (x241&(x242+(x243<=x244)));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x245 = -1;
	volatile int16_t x246 = INT16_MAX;
	int32_t x247 = -12;
	int32_t t55 = -238887004;

	t55 = (x245&(x246+(x247<=x248)));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x249 = 6U;
	uint16_t x250 = 1U;
	static int16_t x252 = 8116;
	int32_t t56 = 1;

	t56 = (x249&(x250+(x251<=x252)));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x254 = INT32_MIN;
	volatile int8_t x255 = -1;
	uint32_t x256 = 127862U;
	volatile int32_t t57 = -160;

	t57 = (x253&(x254+(x255<=x256)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = -14279184316786049LL;
	int16_t x258 = 45;
	uint16_t x259 = 375U;
	uint64_t x260 = 25LLU;
	static volatile int64_t t58 = -96808152153LL;

	t58 = (x257&(x258+(x259<=x260)));

	if (t58 != 45LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x261 = -2;
	static uint32_t x262 = 6908038U;
	volatile int16_t x264 = INT16_MIN;

	t59 = (x261&(x262+(x263<=x264)));

	if (t59 != 6908038U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x265 = 84838963U;
	static int32_t x266 = INT32_MAX;
	static int16_t x267 = INT16_MIN;
	uint64_t x268 = 1399070LLU;
	volatile uint32_t t60 = 57945U;

	t60 = (x265&(x266+(x267<=x268)));

	if (t60 != 84838963U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x269 = -3;
	int32_t x270 = INT32_MIN;
	int8_t x271 = 1;
	int64_t x272 = INT64_MIN;
	int32_t t61 = INT32_MIN;

	t61 = (x269&(x270+(x271<=x272)));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x273 = INT16_MIN;
	int64_t x274 = INT64_MIN;
	int8_t x275 = INT8_MAX;
	int64_t t62 = INT64_MIN;

	t62 = (x273&(x274+(x275<=x276)));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = INT8_MAX;
	int32_t x278 = INT32_MAX;
	uint32_t x279 = 65430989U;
	uint16_t x280 = 1U;
	int32_t t63 = -8;

	t63 = (x277&(x278+(x279<=x280)));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x281 = 1U;
	static volatile int64_t x282 = INT64_MIN;
	int32_t x283 = -1;
	int32_t x284 = 46;

	t64 = (x281&(x282+(x283<=x284)));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = -1LL;
	int32_t x286 = 1124;
	int8_t x287 = INT8_MIN;
	static uint64_t x288 = 107162LLU;
	int64_t t65 = 3LL;

	t65 = (x285&(x286+(x287<=x288)));

	if (t65 != 1124LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x289 = -240122016;
	int64_t x291 = INT64_MIN;
	volatile int16_t x292 = INT16_MIN;
	int64_t t66 = 1851717626167LL;

	t66 = (x289&(x290+(x291<=x292)));

	if (t66 != -243267776LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x293 = 10U;
	int8_t x295 = INT8_MAX;
	volatile int16_t x296 = INT16_MAX;
	int32_t t67 = -282737;

	t67 = (x293&(x294+(x295<=x296)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x297 = 6;
	uint8_t x298 = UINT8_MAX;
	int16_t x300 = INT16_MIN;
	volatile int32_t t68 = 1;

	t68 = (x297&(x298+(x299<=x300)));

	if (t68 != 6) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x301 = UINT8_MAX;
	int16_t x302 = INT16_MIN;
	volatile int8_t x303 = INT8_MIN;
	int16_t x304 = 0;
	volatile int32_t t69 = 0;

	t69 = (x301&(x302+(x303<=x304)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x305 = 9U;
	static volatile int8_t x307 = INT8_MAX;
	volatile uint16_t x308 = UINT16_MAX;
	static volatile int32_t t70 = 238106822;

	t70 = (x305&(x306+(x307<=x308)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x309 = UINT8_MAX;
	static int16_t x310 = INT16_MIN;
	int16_t x311 = INT16_MAX;
	int8_t x312 = INT8_MIN;
	int32_t t71 = 25;

	t71 = (x309&(x310+(x311<=x312)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x313 = UINT16_MAX;
	int64_t x314 = -1LL;
	uint16_t x315 = 3710U;
	static volatile int16_t x316 = -1;
	volatile int64_t t72 = 905046LL;

	t72 = (x313&(x314+(x315<=x316)));

	if (t72 != 65535LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x318 = -1LL;
	uint16_t x319 = UINT16_MAX;
	uint8_t x320 = 81U;
	static int64_t t73 = -382338LL;

	t73 = (x317&(x318+(x319<=x320)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x321 = 127U;
	int32_t x322 = INT32_MIN;
	int64_t x323 = -2489077382700086LL;
	int16_t x324 = -1;

	t74 = (x321&(x322+(x323<=x324)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x326 = -1;
	int8_t x327 = 0;
	int64_t t75 = 1509183306402LL;

	t75 = (x325&(x326+(x327<=x328)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x329 = INT16_MAX;
	int16_t x330 = -1;
	int32_t x331 = INT32_MAX;
	volatile int32_t t76 = 1731;

	t76 = (x329&(x330+(x331<=x332)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x333 = 0U;
	static volatile int8_t x334 = INT8_MAX;
	volatile uint32_t x336 = UINT32_MAX;
	volatile int32_t t77 = 0;

	t77 = (x333&(x334+(x335<=x336)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x338 = 1;
	int32_t x339 = INT32_MIN;
	volatile int64_t x340 = 5428650738LL;
	int32_t t78 = 2;

	t78 = (x337&(x338+(x339<=x340)));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x341 = 34U;
	uint16_t x342 = UINT16_MAX;
	static volatile uint32_t x343 = 102644845U;
	static uint32_t t79 = 202262U;

	t79 = (x341&(x342+(x343<=x344)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = INT8_MAX;
	static volatile int8_t x346 = -22;
	volatile int16_t x347 = -29;
	int64_t x348 = INT64_MAX;
	int32_t t80 = 1015851835;

	t80 = (x345&(x346+(x347<=x348)));

	if (t80 != 107) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x349 = 1266U;
	int8_t x350 = INT8_MAX;
	int32_t x352 = -1;
	int32_t t81 = 48;

	t81 = (x349&(x350+(x351<=x352)));

	if (t81 != 114) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x353 = -12094847097062LL;
	int64_t x355 = INT64_MAX;
	volatile int16_t x356 = INT16_MAX;
	static volatile uint64_t t82 = 227LLU;

	t82 = (x353&(x354+(x355<=x356)));

	if (t82 != 229107491676570120LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x357 = 2U;
	uint32_t x358 = 16535U;
	volatile int16_t x359 = -1;
	uint32_t t83 = 64598518U;

	t83 = (x357&(x358+(x359<=x360)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x361 = 4LLU;
	int32_t x362 = INT32_MIN;
	uint32_t x363 = UINT32_MAX;
	uint64_t x364 = 75LLU;
	volatile uint64_t t84 = 5659705167759LLU;

	t84 = (x361&(x362+(x363<=x364)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x365 = 5068U;
	static int8_t x366 = INT8_MIN;
	int32_t x368 = 32412;
	static int32_t t85 = -75680474;

	t85 = (x365&(x366+(x367<=x368)));

	if (t85 != 4992) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x369 = UINT16_MAX;
	static uint16_t x370 = 93U;
	int8_t x371 = 14;
	int16_t x372 = -1;
	int32_t t86 = 7819;

	t86 = (x369&(x370+(x371<=x372)));

	if (t86 != 93) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x373 = INT32_MIN;
	int32_t x375 = -247379;

	t87 = (x373&(x374+(x375<=x376)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x377 = 6U;
	static volatile int64_t x379 = -5289471336LL;
	int16_t x380 = -1;

	t88 = (x377&(x378+(x379<=x380)));

	if (t88 != 6U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x381 = UINT16_MAX;
	uint64_t x383 = 708LLU;
	uint16_t x384 = 1U;
	int64_t t89 = 20LL;

	t89 = (x381&(x382+(x383<=x384)));

	if (t89 != 2058LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x385 = 20115063797607838LLU;
	volatile int32_t x386 = INT32_MIN;
	volatile int64_t x387 = 1567532244LL;

	t90 = (x385&(x386+(x387<=x388)));

	if (t90 != 20115062718988288LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x389 = 21U;
	int16_t x390 = INT16_MIN;
	static int8_t x391 = INT8_MIN;
	volatile int32_t x392 = INT32_MAX;
	volatile int32_t t91 = 941486;

	t91 = (x389&(x390+(x391<=x392)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x393 = INT8_MAX;
	int16_t x394 = -667;
	int64_t x396 = -1LL;

	t92 = (x393&(x394+(x395<=x396)));

	if (t92 != 101) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x397 = 3U;
	volatile int64_t x398 = 124038822310606LL;
	static int8_t x399 = INT8_MAX;
	volatile int64_t t93 = 7486677631651LL;

	t93 = (x397&(x398+(x399<=x400)));

	if (t93 != 3LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x401 = -1;
	int32_t x403 = INT32_MIN;
	volatile int32_t x404 = INT32_MIN;
	volatile uint64_t t94 = 2623095722LLU;

	t94 = (x401&(x402+(x403<=x404)));

	if (t94 != 12174LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x405 = 706;
	uint64_t x406 = 4954030LLU;
	uint8_t x407 = 3U;
	volatile uint64_t t95 = 14431LLU;

	t95 = (x405&(x406+(x407<=x408)));

	if (t95 != 642LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x409 = INT16_MIN;
	int32_t x410 = INT32_MIN;
	uint8_t x411 = UINT8_MAX;
	int16_t x412 = -1;
	static int32_t t96 = INT32_MIN;

	t96 = (x409&(x410+(x411<=x412)));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = INT8_MAX;
	uint64_t x415 = UINT64_MAX;
	static uint8_t x416 = 6U;
	int64_t t97 = -107LL;

	t97 = (x413&(x414+(x415<=x416)));

	if (t97 != 60LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = 1LL;
	uint8_t x418 = UINT8_MAX;
	int8_t x419 = INT8_MIN;
	uint8_t x420 = UINT8_MAX;
	volatile int64_t t98 = 1301490254239062914LL;

	t98 = (x417&(x418+(x419<=x420)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x421 = 379412LLU;
	volatile int32_t x422 = INT32_MIN;
	int32_t x423 = -1;
	uint32_t x424 = 138U;
	uint64_t t99 = 20LLU;

	t99 = (x421&(x422+(x423<=x424)));

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

