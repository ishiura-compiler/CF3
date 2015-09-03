#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 63867;
int8_t x9 = -11;
static uint64_t x10 = UINT64_MAX;
volatile int16_t x13 = -1;
uint8_t x15 = 0U;
int32_t x22 = -102;
int32_t t5 = 535772652;
uint64_t x25 = UINT64_MAX;
uint8_t x30 = UINT8_MAX;
volatile int32_t t7 = -17016;
int32_t x34 = -1;
int32_t t8 = -375401;
int8_t x44 = 30;
static int8_t x52 = -1;
int32_t x55 = INT32_MIN;
uint16_t x57 = UINT16_MAX;
static volatile int16_t x58 = 1;
uint8_t x60 = 1U;
static int64_t x63 = -1LL;
int64_t x66 = -1LL;
int32_t x67 = -1;
int8_t x69 = 1;
volatile int32_t t17 = -546;
volatile int64_t x82 = -1LL;
volatile int64_t t20 = -2513022242135LL;
uint16_t x85 = UINT16_MAX;
uint32_t x92 = 516920U;
int64_t x97 = -1LL;
volatile uint64_t x99 = 0LLU;
int8_t x103 = -62;
int32_t t25 = 60767730;
int32_t x106 = -1;
int32_t x109 = -36;
volatile int32_t x111 = INT32_MIN;
uint32_t x117 = UINT32_MAX;
volatile int32_t x118 = INT32_MIN;
static volatile uint32_t t28 = 478359U;
volatile int16_t x129 = 27;
int64_t t31 = -3814LL;
volatile int16_t x133 = INT16_MAX;
static volatile int8_t x139 = INT8_MAX;
int16_t x144 = INT16_MIN;
volatile int16_t x146 = -3249;
int16_t x154 = INT16_MIN;
uint32_t x155 = 813080447U;
int64_t x156 = 5585187591LL;
int16_t x165 = -1;
static int8_t x171 = 1;
int32_t x176 = -1;
volatile int32_t x183 = INT32_MIN;
volatile int32_t x186 = INT32_MIN;
static int16_t x188 = -6472;
int16_t x193 = -1;
int8_t x194 = 2;
int16_t x197 = INT16_MIN;
int8_t x200 = INT8_MIN;
volatile int32_t t46 = 74797426;
uint16_t x202 = 48U;
int64_t t47 = 430950818299687LL;
int64_t x205 = INT64_MIN;
uint32_t x207 = 1323520U;
int8_t x228 = INT8_MIN;
int32_t t53 = 3297387;
uint8_t x230 = 0U;
int32_t t54 = -3;
uint64_t x236 = UINT64_MAX;
int8_t x244 = INT8_MIN;
int64_t x245 = 957495508518LL;
int32_t x250 = -1;
int8_t x257 = -26;
uint32_t x267 = 14U;
uint8_t x269 = 0U;
uint16_t x270 = 10267U;
static int8_t x277 = -1;
uint16_t x278 = 14U;
int64_t x283 = -1LL;
int16_t x292 = INT16_MAX;
volatile uint64_t t69 = 4141004LLU;
int64_t x297 = INT64_MIN;
volatile int64_t t70 = 212049170LL;
static uint8_t x304 = 0U;
volatile int32_t t71 = 109467;
uint16_t x305 = UINT16_MAX;
int8_t x307 = INT8_MAX;
int32_t x314 = INT32_MAX;
volatile int32_t t74 = -25;
volatile uint8_t x318 = UINT8_MAX;
int64_t x320 = INT64_MIN;
int16_t x325 = INT16_MIN;
uint8_t x336 = 4U;
uint32_t t82 = 26U;
int32_t t83 = -2473;
int8_t x354 = 3;
volatile uint64_t t84 = 18127881344068LLU;
uint64_t x358 = 60766LLU;
int8_t x365 = INT8_MIN;
static int32_t x366 = INT32_MAX;
int32_t t87 = 349231;
static volatile int16_t x373 = -28;
static volatile int64_t t90 = 332977982LL;
static int16_t x384 = 3617;
volatile int8_t x390 = INT8_MIN;
int16_t x396 = 0;
static int32_t x400 = -19191;
int64_t x405 = -16567LL;
int64_t x407 = INT64_MIN;
volatile int64_t t97 = 109872040457757LL;
volatile int16_t x409 = -15486;
volatile int8_t x412 = INT8_MAX;
int64_t x416 = 1107408300585408364LL;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint8_t x2 = UINT8_MAX;
	static int8_t x3 = 8;
	static volatile uint64_t x4 = 2693719989513734LLU;

	t0 = (x1/(x2^(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	int64_t x6 = -9298697879391LL;
	volatile int16_t x7 = -1;
	int8_t x8 = INT8_MIN;
	static int64_t t1 = -1839371659LL;

	t1 = (x5/(x6^(x7<=x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = -128625;
	int16_t x12 = -1;
	static volatile uint64_t t2 = 714857247899LLU;

	t2 = (x9/(x10^(x11<=x12)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -1;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 1211;

	t3 = (x13/(x14^(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 517;
	static int16_t x18 = INT16_MIN;
	volatile int32_t x19 = -1;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 51392944;

	t4 = (x17/(x18^(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	static uint64_t x23 = UINT64_MAX;
	int8_t x24 = 0;

	t5 = (x21/(x22^(x23<=x24)));

	if (t5 != -21053761) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	volatile int8_t x27 = -51;
	uint8_t x28 = UINT8_MAX;
	static uint64_t t6 = 117889LLU;

	t6 = (x25/(x26^(x27<=x28)));

	if (t6 != 4294967298LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int8_t x31 = INT8_MAX;
	static int16_t x32 = INT16_MIN;

	t7 = (x29/(x30^(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static uint64_t x35 = 32292LLU;
	uint32_t x36 = UINT32_MAX;

	t8 = (x33/(x34^(x35<=x36)));

	if (t8 != 1073741824) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = INT16_MAX;
	volatile int8_t x38 = INT8_MAX;
	int32_t x39 = -1;
	static volatile uint8_t x40 = UINT8_MAX;
	int32_t t9 = 30;

	t9 = (x37/(x38^(x39<=x40)));

	if (t9 != 260) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int32_t x42 = -1;
	uint8_t x43 = 87U;
	static int32_t t10 = -13313;

	t10 = (x41/(x42^(x43<=x44)));

	if (t10 != 32768) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 3549U;
	uint64_t x46 = 1438648890730LLU;
	int16_t x47 = INT16_MAX;
	uint64_t x48 = 23233904838278LLU;
	uint64_t t11 = 4041900598009705381LLU;

	t11 = (x45/(x46^(x47<=x48)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int64_t x50 = INT64_MIN;
	int32_t x51 = 105145;
	int64_t t12 = -223533860171297152LL;

	t12 = (x49/(x50^(x51<=x52)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -44340;
	static int32_t x54 = INT32_MIN;
	int64_t x56 = -402361559686116241LL;
	static volatile int32_t t13 = -1;

	t13 = (x53/(x54^(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x59 = 55;
	int32_t t14 = 3361;

	t14 = (x57/(x58^(x59<=x60)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = -1LL;
	int64_t x62 = 951344880363356348LL;
	uint64_t x64 = 26LLU;
	volatile int64_t t15 = 387063765424LL;

	t15 = (x61/(x62^(x63<=x64)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 3U;
	static int32_t x68 = INT32_MAX;
	volatile int64_t t16 = -128929LL;

	t16 = (x65/(x66^(x67<=x68)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = UINT16_MAX;
	int32_t x71 = 50327;
	uint32_t x72 = 3486U;

	t17 = (x69/(x70^(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1001875566790523LL;
	uint32_t x74 = UINT32_MAX;
	int64_t x75 = INT64_MIN;
	static int64_t x76 = INT64_MAX;
	static volatile int64_t t18 = -119229721302292LL;

	t18 = (x73/(x74^(x75<=x76)));

	if (t18 != -233267LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	static int8_t x78 = INT8_MAX;
	static uint64_t x79 = 5650037LLU;
	uint8_t x80 = 1U;
	int32_t t19 = 25;

	t19 = (x77/(x78^(x79<=x80)));

	if (t19 != -258) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 277U;
	int16_t x83 = INT16_MIN;
	uint32_t x84 = UINT32_MAX;

	t20 = (x81/(x82^(x83<=x84)));

	if (t20 != -138LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x86 = 3U;
	uint32_t x87 = 48U;
	int64_t x88 = INT64_MIN;
	int32_t t21 = -1105;

	t21 = (x85/(x86^(x87<=x88)));

	if (t21 != 21845) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 4;
	uint8_t x90 = 19U;
	uint64_t x91 = 13408LLU;
	int32_t t22 = -282045;

	t22 = (x89/(x90^(x91<=x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = UINT32_MAX;
	uint8_t x94 = 0U;
	int8_t x95 = -12;
	int8_t x96 = -3;
	static volatile uint32_t t23 = UINT32_MAX;

	t23 = (x93/(x94^(x95<=x96)));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = -7880LL;
	volatile uint16_t x100 = 3043U;
	int64_t t24 = 124LL;

	t24 = (x97/(x98^(x99<=x100)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 0U;
	int32_t x102 = INT32_MAX;
	volatile int16_t x104 = INT16_MAX;

	t25 = (x101/(x102^(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 16914U;
	int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MIN;
	int32_t t26 = 1;

	t26 = (x105/(x106^(x107<=x108)));

	if (t26 != -8457) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = INT16_MIN;
	volatile uint16_t x112 = 7332U;
	volatile int32_t t27 = 65635573;

	t27 = (x109/(x110^(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x119 = INT8_MIN;
	uint8_t x120 = 63U;

	t28 = (x117/(x118^(x119<=x120)));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = -1;
	static uint32_t x122 = UINT32_MAX;
	int16_t x123 = 418;
	int64_t x124 = INT64_MAX;
	static volatile uint32_t t29 = 10003U;

	t29 = (x121/(x122^(x123<=x124)));

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 9U;
	int32_t x126 = INT32_MAX;
	volatile uint32_t x127 = 31U;
	int8_t x128 = 0;
	static int32_t t30 = 11;

	t30 = (x125/(x126^(x127<=x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x130 = INT64_MIN;
	uint32_t x131 = 551490U;
	uint16_t x132 = UINT16_MAX;

	t31 = (x129/(x130^(x131<=x132)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x134 = 0U;
	uint64_t x135 = 319655LLU;
	volatile int32_t x136 = INT32_MAX;
	uint32_t t32 = 24415298U;

	t32 = (x133/(x134^(x135<=x136)));

	if (t32 != 32767U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x137 = INT32_MIN;
	volatile int16_t x138 = -3059;
	int16_t x140 = INT16_MIN;
	volatile int32_t t33 = -402882022;

	t33 = (x137/(x138^(x139<=x140)));

	if (t33 != 702021) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -1LL;
	uint16_t x142 = 81U;
	int16_t x143 = 22;
	static volatile int64_t t34 = -8256409853LL;

	t34 = (x141/(x142^(x143<=x144)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x145 = INT8_MIN;
	uint64_t x147 = 96692697560317LLU;
	int16_t x148 = -1;
	volatile int32_t t35 = 1;

	t35 = (x145/(x146^(x147<=x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = 65U;
	volatile uint32_t t36 = 329541U;

	t36 = (x153/(x154^(x155<=x156)));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x157 = 705LLU;
	static int64_t x158 = INT64_MIN;
	int32_t x159 = INT32_MIN;
	int32_t x160 = -477;
	static volatile uint64_t t37 = 4215LLU;

	t37 = (x157/(x158^(x159<=x160)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = UINT8_MAX;
	int16_t x162 = INT16_MIN;
	int32_t x163 = INT32_MIN;
	int8_t x164 = INT8_MAX;
	int32_t t38 = 0;

	t38 = (x161/(x162^(x163<=x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x166 = 338722981303439LLU;
	uint64_t x167 = 40316043577583LLU;
	int8_t x168 = -1;
	uint64_t t39 = 27461741205826255LLU;

	t39 = (x165/(x166^(x167<=x168)));

	if (t39 != 54459LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = INT32_MIN;
	static int32_t x170 = -4080;
	int64_t x172 = -1LL;
	volatile int32_t t40 = 4399;

	t40 = (x169/(x170^(x171<=x172)));

	if (t40 != 526344) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MAX;
	int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MIN;
	volatile int64_t t41 = -325817117975149LL;

	t41 = (x173/(x174^(x175<=x176)));

	if (t41 != -281483566907400LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x181 = 12260U;
	static uint64_t x182 = 1876791LLU;
	int16_t x184 = INT16_MAX;
	volatile uint64_t t42 = 13064561266243LLU;

	t42 = (x181/(x182^(x183<=x184)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = UINT32_MAX;
	static int64_t x187 = -120750334LL;
	volatile uint32_t t43 = 2U;

	t43 = (x185/(x186^(x187<=x188)));

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x189 = INT32_MIN;
	int64_t x190 = 574998108235722LL;
	static uint8_t x191 = 22U;
	static int8_t x192 = -1;
	int64_t t44 = 400906680LL;

	t44 = (x189/(x190^(x191<=x192)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x195 = INT32_MIN;
	int32_t x196 = -22518514;
	int32_t t45 = 1;

	t45 = (x193/(x194^(x195<=x196)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x198 = INT8_MIN;
	int8_t x199 = -1;

	t46 = (x197/(x198^(x199<=x200)));

	if (t46 != 256) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x201 = -1LL;
	volatile int16_t x203 = -22;
	volatile int8_t x204 = -1;

	t47 = (x201/(x202^(x203<=x204)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x206 = 329LLU;
	int32_t x208 = INT32_MIN;
	volatile uint64_t t48 = 575LLU;

	t48 = (x205/(x206^(x207<=x208)));

	if (t48 != 28120036697727975LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = 1;
	int64_t x210 = INT64_MIN;
	static int64_t x211 = -1LL;
	uint8_t x212 = 3U;
	int64_t t49 = -70342107106178136LL;

	t49 = (x209/(x210^(x211<=x212)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x213 = -809769;
	int64_t x214 = -1LL;
	uint32_t x215 = 14U;
	uint64_t x216 = 6527433969709586LLU;
	volatile int64_t t50 = -235633885236590340LL;

	t50 = (x213/(x214^(x215<=x216)));

	if (t50 != 404884LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MIN;
	int32_t x218 = INT32_MIN;
	static int64_t x219 = -1LL;
	int64_t x220 = 247LL;
	static int64_t t51 = 6LL;

	t51 = (x217/(x218^(x219<=x220)));

	if (t51 != 4294967298LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = INT16_MIN;
	uint64_t x222 = 468775802LLU;
	uint16_t x223 = 5596U;
	uint8_t x224 = 3U;
	uint64_t t52 = 710768345709610852LLU;

	t52 = (x221/(x222^(x223<=x224)));

	if (t52 != 39350887983LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x225 = -1;
	int16_t x226 = -97;
	int8_t x227 = -1;

	t53 = (x225/(x226^(x227<=x228)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = INT16_MIN;
	static int16_t x231 = INT16_MIN;
	int32_t x232 = -1;

	t54 = (x229/(x230^(x231<=x232)));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = 54;
	static int64_t x234 = -129536LL;
	int8_t x235 = -1;
	volatile int64_t t55 = 1LL;

	t55 = (x233/(x234^(x235<=x236)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = INT16_MIN;
	int8_t x238 = -1;
	int32_t x239 = INT32_MAX;
	volatile int64_t x240 = INT64_MAX;
	int32_t t56 = 0;

	t56 = (x237/(x238^(x239<=x240)));

	if (t56 != 16384) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = INT32_MIN;
	volatile int8_t x242 = INT8_MIN;
	uint32_t x243 = UINT32_MAX;
	volatile int32_t t57 = 1991;

	t57 = (x241/(x242^(x243<=x244)));

	if (t57 != 16777216) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x246 = -1;
	uint8_t x247 = 21U;
	volatile int16_t x248 = INT16_MIN;
	int64_t t58 = 8603338423853LL;

	t58 = (x245/(x246^(x247<=x248)));

	if (t58 != -957495508518LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x249 = 5642904159132264428LLU;
	int16_t x251 = -1;
	volatile uint32_t x252 = 423631800U;
	volatile uint64_t t59 = 23LLU;

	t59 = (x249/(x250^(x251<=x252)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = INT32_MAX;
	static int64_t x254 = 12310LL;
	int8_t x255 = 5;
	uint32_t x256 = 30U;
	int64_t t60 = 15LL;

	t60 = (x253/(x254^(x255<=x256)));

	if (t60 != 174436LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x258 = UINT32_MAX;
	volatile int8_t x259 = INT8_MIN;
	int32_t x260 = INT32_MIN;
	uint32_t t61 = 243282621U;

	t61 = (x257/(x258^(x259<=x260)));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x261 = 6086U;
	int8_t x262 = 1;
	uint64_t x263 = UINT64_MAX;
	uint32_t x264 = 14198U;
	uint32_t t62 = 3U;

	t62 = (x261/(x262^(x263<=x264)));

	if (t62 != 6086U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = -1;
	int32_t x266 = -1;
	uint32_t x268 = UINT32_MAX;
	int32_t t63 = 120142;

	t63 = (x265/(x266^(x267<=x268)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x271 = -1LL;
	volatile int8_t x272 = INT8_MIN;
	static int32_t t64 = -3457257;

	t64 = (x269/(x270^(x271<=x272)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = -1LL;
	int64_t x274 = INT64_MIN;
	int16_t x275 = INT16_MIN;
	volatile int64_t x276 = INT64_MIN;
	volatile int64_t t65 = 318LL;

	t65 = (x273/(x274^(x275<=x276)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x279 = INT64_MIN;
	static uint64_t x280 = 27161675416779964LLU;
	volatile int32_t t66 = -511;

	t66 = (x277/(x278^(x279<=x280)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x281 = -14653;
	int16_t x282 = INT16_MIN;
	static uint16_t x284 = 142U;
	int32_t t67 = 0;

	t67 = (x281/(x282^(x283<=x284)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x285 = UINT64_MAX;
	int16_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	uint8_t x288 = UINT8_MAX;
	uint64_t t68 = 863720765269LLU;

	t68 = (x285/(x286^(x287<=x288)));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x289 = UINT64_MAX;
	volatile int8_t x290 = INT8_MIN;
	volatile int64_t x291 = -4013968599LL;

	t69 = (x289/(x290^(x291<=x292)));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x298 = 84294U;
	int32_t x299 = -1;
	static int16_t x300 = -1320;

	t70 = (x297/(x298^(x299<=x300)));

	if (t70 != -109419081273338LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x301 = INT8_MIN;
	volatile int32_t x302 = -1;
	uint8_t x303 = 3U;

	t71 = (x301/(x302^(x303<=x304)));

	if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x306 = INT64_MIN;
	int64_t x308 = INT64_MIN;
	int64_t t72 = -13008675360LL;

	t72 = (x305/(x306^(x307<=x308)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = -1LL;
	int64_t x310 = INT64_MIN;
	int32_t x311 = 913;
	uint8_t x312 = UINT8_MAX;
	volatile int64_t t73 = 797270LL;

	t73 = (x309/(x310^(x311<=x312)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x313 = INT32_MIN;
	int64_t x315 = -1LL;
	static int32_t x316 = INT32_MIN;

	t74 = (x313/(x314^(x315<=x316)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x317 = 14U;
	uint8_t x319 = 4U;
	static volatile int32_t t75 = 99188835;

	t75 = (x317/(x318^(x319<=x320)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x321 = 1781325U;
	volatile int32_t x322 = INT32_MAX;
	uint32_t x323 = 710671104U;
	volatile int8_t x324 = -44;
	uint32_t t76 = 1896987216U;

	t76 = (x321/(x322^(x323<=x324)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x326 = INT32_MIN;
	int8_t x327 = -56;
	static volatile int64_t x328 = INT64_MIN;
	int32_t t77 = 220207;

	t77 = (x325/(x326^(x327<=x328)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x329 = INT64_MIN;
	volatile int64_t x330 = INT64_MIN;
	static uint16_t x331 = UINT16_MAX;
	uint64_t x332 = 220LLU;
	volatile int64_t t78 = 42512599LL;

	t78 = (x329/(x330^(x331<=x332)));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = 319262LL;
	static uint64_t x334 = 31632272LLU;
	uint8_t x335 = 1U;
	uint64_t t79 = 130437587837927LLU;

	t79 = (x333/(x334^(x335<=x336)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x337 = -7186530LL;
	static volatile uint64_t x338 = UINT64_MAX;
	uint16_t x339 = 0U;
	static int64_t x340 = INT64_MIN;
	uint64_t t80 = 3814745622074170LLU;

	t80 = (x337/(x338^(x339<=x340)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = 5LL;
	int8_t x342 = 10;
	static uint32_t x343 = 506730300U;
	static volatile int8_t x344 = INT8_MIN;
	int64_t t81 = 2066773605767423712LL;

	t81 = (x341/(x342^(x343<=x344)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x345 = -2091;
	uint32_t x346 = UINT32_MAX;
	uint64_t x347 = UINT64_MAX;
	uint64_t x348 = UINT64_MAX;

	t82 = (x345/(x346^(x347<=x348)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = INT8_MIN;
	uint8_t x350 = 1U;
	int64_t x351 = INT64_MAX;
	uint64_t x352 = 4835835LLU;

	t83 = (x349/(x350^(x351<=x352)));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x353 = 688361LLU;
	uint8_t x355 = UINT8_MAX;
	uint16_t x356 = UINT16_MAX;

	t84 = (x353/(x354^(x355<=x356)));

	if (t84 != 344180LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x357 = 3U;
	int32_t x359 = INT32_MIN;
	volatile int32_t x360 = INT32_MIN;
	volatile uint64_t t85 = 1172452339338872249LLU;

	t85 = (x357/(x358^(x359<=x360)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = 32464LL;
	uint8_t x362 = UINT8_MAX;
	uint16_t x363 = 14011U;
	volatile uint8_t x364 = 1U;
	volatile int64_t t86 = 9062313330364LL;

	t86 = (x361/(x362^(x363<=x364)));

	if (t86 != 127LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x367 = 21771102LL;
	static int64_t x368 = -462LL;

	t87 = (x365/(x366^(x367<=x368)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = INT16_MIN;
	uint16_t x370 = UINT16_MAX;
	volatile uint32_t x371 = 1732U;
	volatile int16_t x372 = INT16_MAX;
	volatile int32_t t88 = 926227;

	t88 = (x369/(x370^(x371<=x372)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x374 = 314093235;
	volatile int8_t x375 = 5;
	uint32_t x376 = UINT32_MAX;
	int32_t t89 = -53;

	t89 = (x373/(x374^(x375<=x376)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = INT64_MIN;
	static int32_t x378 = INT32_MIN;
	int8_t x379 = 2;
	static int64_t x380 = -1LL;

	t90 = (x377/(x378^(x379<=x380)));

	if (t90 != 4294967296LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x381 = 13U;
	volatile int8_t x382 = INT8_MIN;
	int64_t x383 = 786664LL;
	int32_t t91 = -23578179;

	t91 = (x381/(x382^(x383<=x384)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x385 = UINT8_MAX;
	int16_t x386 = INT16_MIN;
	static int64_t x387 = INT64_MIN;
	int16_t x388 = INT16_MAX;
	int32_t t92 = 286645342;

	t92 = (x385/(x386^(x387<=x388)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x389 = 216U;
	static uint16_t x391 = 14U;
	volatile int64_t x392 = INT64_MAX;
	volatile uint32_t t93 = 35220152U;

	t93 = (x389/(x390^(x391<=x392)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x393 = INT16_MAX;
	static uint64_t x394 = UINT64_MAX;
	int64_t x395 = -1LL;
	volatile uint64_t t94 = 2743023LLU;

	t94 = (x393/(x394^(x395<=x396)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = -1;
	int32_t x398 = -1;
	static int64_t x399 = INT64_MAX;
	volatile int32_t t95 = 132438495;

	t95 = (x397/(x398^(x399<=x400)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x401 = 13U;
	uint8_t x402 = UINT8_MAX;
	int64_t x403 = INT64_MAX;
	int16_t x404 = 0;
	int32_t t96 = 100;

	t96 = (x401/(x402^(x403<=x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x406 = -40;
	int64_t x408 = INT64_MIN;

	t97 = (x405/(x406^(x407<=x408)));

	if (t97 != 424LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x410 = 59U;
	static uint32_t x411 = 114U;
	volatile int32_t t98 = 10;

	t98 = (x409/(x410^(x411<=x412)));

	if (t98 != -267) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x413 = 7286031323801LLU;
	static volatile int16_t x414 = -1;
	int64_t x415 = -295LL;
	volatile uint64_t t99 = 1290353365962442LLU;

	t99 = (x413/(x414^(x415<=x416)));

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

