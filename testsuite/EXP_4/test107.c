#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -3964663;
volatile int16_t x14 = INT16_MIN;
volatile int64_t t2 = INT64_MAX;
volatile int16_t x17 = 0;
int32_t t3 = -2338484;
volatile int32_t x26 = INT32_MIN;
volatile int64_t x27 = -1317503101079377LL;
int64_t x29 = -1LL;
uint64_t t6 = 46623113826LLU;
uint64_t x41 = UINT64_MAX;
int8_t x44 = INT8_MAX;
volatile int8_t x50 = -9;
int8_t x52 = INT8_MIN;
static volatile int64_t t11 = INT64_MIN;
uint32_t x69 = UINT32_MAX;
int8_t x71 = INT8_MIN;
volatile uint64_t x74 = UINT64_MAX;
int8_t x81 = INT8_MIN;
int32_t t17 = 49;
volatile int64_t x96 = INT64_MIN;
int32_t t18 = 1033130;
int8_t x110 = INT8_MIN;
uint8_t x111 = 7U;
int8_t x114 = -1;
static int16_t x115 = INT16_MAX;
static uint64_t t22 = UINT64_MAX;
uint8_t x118 = UINT8_MAX;
int8_t x119 = -1;
static int32_t x127 = 643218;
int32_t t24 = 76709;
int32_t t25 = 147322597;
uint8_t x134 = 1U;
uint32_t x136 = 838745200U;
volatile int64_t t26 = INT64_MAX;
int8_t x138 = -1;
int64_t x146 = INT64_MIN;
uint32_t x147 = 54895993U;
static int64_t x149 = -3LL;
static int64_t x150 = INT64_MIN;
static uint16_t x151 = UINT16_MAX;
uint64_t x152 = 252172997LLU;
int64_t x153 = -440LL;
int32_t x176 = 469;
uint32_t x177 = UINT32_MAX;
uint16_t x178 = UINT16_MAX;
int8_t x179 = 36;
int16_t x181 = -5358;
int16_t x185 = -1;
int64_t x191 = 572556939LL;
volatile int64_t t39 = -55LL;
int8_t x194 = INT8_MAX;
int8_t x195 = INT8_MIN;
int32_t t42 = 1206;
volatile int32_t x211 = INT32_MIN;
volatile int16_t x212 = 883;
volatile int32_t t43 = 171604;
int64_t x215 = INT64_MIN;
static uint64_t x216 = UINT64_MAX;
int32_t x217 = -1;
int32_t x221 = INT32_MIN;
volatile int16_t x226 = INT16_MIN;
int32_t t47 = INT32_MIN;
int16_t x231 = -1;
uint64_t x232 = 29799052LLU;
int32_t t49 = -1423275;
int32_t t50 = 147754;
static int16_t x241 = INT16_MAX;
uint64_t x245 = 1160723LLU;
static int16_t x251 = INT16_MAX;
int32_t x264 = -26760;
volatile uint64_t t55 = 33915187073264840LLU;
static volatile int64_t x270 = -57144638695LL;
uint32_t x275 = 8636U;
int64_t x276 = 22LL;
int8_t x287 = INT8_MIN;
int64_t x290 = INT64_MIN;
uint16_t x295 = 24U;
int32_t t61 = 5937789;
static int8_t x297 = INT8_MIN;
static int16_t x299 = INT16_MIN;
static volatile int8_t x303 = INT8_MIN;
volatile int16_t x304 = -1;
volatile int8_t x307 = INT8_MAX;
volatile int32_t t64 = 124;
int32_t x311 = -1;
static uint32_t x317 = 1037670U;
int32_t t68 = 63546;
int8_t x339 = 59;
int16_t x344 = INT16_MIN;
int64_t x347 = 25974790LL;
volatile int32_t t72 = -237596423;
uint8_t x351 = 6U;
uint16_t x353 = 163U;
static volatile int32_t t74 = -11240774;
int8_t x370 = -50;
int16_t x371 = INT16_MAX;
static uint16_t x373 = UINT16_MAX;
int32_t t78 = -84666979;
int8_t x385 = INT8_MIN;
static uint8_t x389 = UINT8_MAX;
static int16_t x390 = INT16_MIN;
static int8_t x391 = -1;
uint8_t x402 = 3U;
static volatile int32_t x407 = 355405401;
static volatile uint32_t x414 = UINT32_MAX;
int64_t x417 = -1LL;
uint8_t x427 = 73U;
static volatile int32_t x435 = -57525935;
int64_t t88 = -13087765LL;
uint8_t x442 = UINT8_MAX;
int16_t x443 = 256;
int64_t x449 = INT64_MAX;
static volatile int16_t x452 = 1340;
uint16_t x462 = UINT16_MAX;
volatile int32_t t95 = 30;
int32_t x478 = INT32_MIN;
int8_t x481 = INT8_MAX;
int64_t x484 = -1LL;
int8_t x486 = INT8_MIN;
int32_t x488 = 11;
int32_t t99 = -523675850;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x2 = INT32_MIN;
	volatile int64_t x3 = -1LL;
	int32_t x4 = -1;
	static volatile int32_t t0 = -150;

	t0 = (x1*(x2<(x3+x4)));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint16_t x6 = 13U;
	int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MAX;

	t1 = (x5*(x6<(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MAX;
	int16_t x15 = INT16_MIN;
	volatile uint16_t x16 = 394U;

	t2 = (x13*(x14<(x15+x16)));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x18 = INT64_MIN;
	int8_t x19 = -1;
	uint64_t x20 = UINT64_MAX;

	t3 = (x17*(x18<(x19+x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -1;
	uint32_t x28 = UINT32_MAX;
	int32_t t4 = -6;

	t4 = (x25*(x26<(x27+x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x30 = 828U;
	int32_t x31 = -1;
	volatile int8_t x32 = INT8_MAX;
	int64_t t5 = -170461044232LL;

	t5 = (x29*(x30<(x31+x32)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 216432203LLU;
	int64_t x34 = -1LL;
	int8_t x35 = INT8_MAX;
	uint8_t x36 = UINT8_MAX;

	t6 = (x33*(x34<(x35+x36)));

	if (t6 != 216432203LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x42 = 5U;
	uint32_t x43 = UINT32_MAX;
	uint64_t t7 = UINT64_MAX;

	t7 = (x41*(x42<(x43+x44)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = UINT16_MAX;
	static int64_t x46 = INT64_MIN;
	int32_t x47 = INT32_MIN;
	uint32_t x48 = 309637U;
	int32_t t8 = 37396626;

	t8 = (x45*(x46<(x47+x48)));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = 32U;
	static uint16_t x51 = 3904U;
	volatile int32_t t9 = 0;

	t9 = (x49*(x50<(x51+x52)));

	if (t9 != 32) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = 5;
	static uint64_t x54 = 93466928449LLU;
	volatile int64_t x55 = INT64_MAX;
	static int32_t x56 = -702;
	volatile int32_t t10 = -7071;

	t10 = (x53*(x54<(x55+x56)));

	if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x61 = INT64_MIN;
	uint16_t x62 = 140U;
	uint32_t x63 = UINT32_MAX;
	uint64_t x64 = 3610261134LLU;

	t11 = (x61*(x62<(x63+x64)));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = INT8_MAX;
	int32_t x66 = 47;
	volatile int32_t x67 = 28060;
	int8_t x68 = INT8_MAX;
	volatile int32_t t12 = 2;

	t12 = (x65*(x66<(x67+x68)));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x70 = -1;
	int64_t x72 = INT64_MAX;
	uint32_t t13 = UINT32_MAX;

	t13 = (x69*(x70<(x71+x72)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x73 = 73U;
	static int8_t x75 = -1;
	static int8_t x76 = INT8_MIN;
	volatile int32_t t14 = 264828205;

	t14 = (x73*(x74<(x75+x76)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = 24905U;
	int16_t x78 = -1;
	uint64_t x79 = 2LLU;
	int16_t x80 = -899;
	uint32_t t15 = 1U;

	t15 = (x77*(x78<(x79+x80)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x82 = 61U;
	uint16_t x83 = UINT16_MAX;
	uint16_t x84 = 5U;
	static volatile int32_t t16 = -3574;

	t16 = (x81*(x82<(x83+x84)));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x85 = 17U;
	int64_t x86 = -1LL;
	uint32_t x87 = 209196189U;
	int16_t x88 = INT16_MAX;

	t17 = (x85*(x86<(x87+x88)));

	if (t17 != 17) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x93 = 2U;
	int32_t x94 = INT32_MIN;
	int64_t x95 = 971LL;

	t18 = (x93*(x94<(x95+x96)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x101 = 138269U;
	int32_t x102 = -1;
	static int32_t x103 = -1;
	int8_t x104 = -7;
	volatile uint32_t t19 = 30U;

	t19 = (x101*(x102<(x103+x104)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x105 = -5;
	int64_t x106 = 1LL;
	static uint16_t x107 = UINT16_MAX;
	int32_t x108 = INT32_MIN;
	static volatile int32_t t20 = 645976105;

	t20 = (x105*(x106<(x107+x108)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = 3943LL;
	static int32_t x112 = INT32_MIN;
	int64_t t21 = 553346522LL;

	t21 = (x109*(x110<(x111+x112)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x113 = UINT64_MAX;
	int8_t x116 = -59;

	t22 = (x113*(x114<(x115+x116)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x117 = INT64_MIN;
	int16_t x120 = INT16_MIN;
	static volatile int64_t t23 = 4403275176LL;

	t23 = (x117*(x118<(x119+x120)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x125 = INT16_MIN;
	uint8_t x126 = UINT8_MAX;
	static int16_t x128 = -275;

	t24 = (x125*(x126<(x127+x128)));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x129 = -2382;
	uint8_t x130 = UINT8_MAX;
	static volatile int16_t x131 = INT16_MIN;
	int8_t x132 = -1;

	t25 = (x129*(x130<(x131+x132)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x133 = INT64_MAX;
	int32_t x135 = INT32_MAX;

	t26 = (x133*(x134<(x135+x136)));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x137 = UINT8_MAX;
	uint16_t x139 = 4007U;
	int64_t x140 = 7907069147LL;
	static volatile int32_t t27 = -5;

	t27 = (x137*(x138<(x139+x140)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x145 = 15U;
	volatile int16_t x148 = INT16_MIN;
	static int32_t t28 = -16117;

	t28 = (x145*(x146<(x147+x148)));

	if (t28 != 15) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t t29 = -25552LL;

	t29 = (x149*(x150<(x151+x152)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x154 = INT32_MIN;
	uint8_t x155 = 1U;
	int16_t x156 = 1;
	int64_t t30 = -264446696087LL;

	t30 = (x153*(x154<(x155+x156)));

	if (t30 != -440LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = -1;
	uint16_t x158 = 0U;
	int16_t x159 = INT16_MIN;
	int32_t x160 = -101;
	volatile int32_t t31 = -489;

	t31 = (x157*(x158<(x159+x160)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x161 = UINT16_MAX;
	static int8_t x162 = 0;
	int16_t x163 = -1;
	volatile uint8_t x164 = 1U;
	volatile int32_t t32 = 5124957;

	t32 = (x161*(x162<(x163+x164)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x165 = 5U;
	static uint8_t x166 = UINT8_MAX;
	int32_t x167 = -98085;
	int32_t x168 = 24110;
	int32_t t33 = -481409999;

	t33 = (x165*(x166<(x167+x168)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x169 = INT32_MAX;
	uint32_t x170 = UINT32_MAX;
	static uint64_t x171 = 4984554LLU;
	int16_t x172 = -1;
	volatile int32_t t34 = 673;

	t34 = (x169*(x170<(x171+x172)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x173 = INT32_MIN;
	int32_t x174 = 208641;
	static volatile int32_t x175 = 2;
	int32_t t35 = -20;

	t35 = (x173*(x174<(x175+x176)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x180 = UINT64_MAX;
	volatile uint32_t t36 = 0U;

	t36 = (x177*(x178<(x179+x180)));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MAX;
	volatile uint16_t x184 = 16U;
	int32_t t37 = 41006888;

	t37 = (x181*(x182<(x183+x184)));

	if (t37 != -5358) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x186 = 9;
	static int16_t x187 = 934;
	volatile int8_t x188 = INT8_MIN;
	volatile int32_t t38 = 42;

	t38 = (x185*(x186<(x187+x188)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = 671583LL;
	static volatile int64_t x190 = -1869354284101372411LL;
	uint8_t x192 = 1U;

	t39 = (x189*(x190<(x191+x192)));

	if (t39 != 671583LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x193 = INT32_MIN;
	int64_t x196 = -1LL;
	static volatile int32_t t40 = 589577957;

	t40 = (x193*(x194<(x195+x196)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x197 = 0U;
	int16_t x198 = -4;
	int64_t x199 = INT64_MIN;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t41 = -51121;

	t41 = (x197*(x198<(x199+x200)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = INT8_MAX;
	int16_t x202 = 118;
	int32_t x203 = INT32_MIN;
	uint16_t x204 = UINT16_MAX;

	t42 = (x201*(x202<(x203+x204)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x209 = UINT8_MAX;
	uint8_t x210 = 38U;

	t43 = (x209*(x210<(x211+x212)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x213 = INT32_MAX;
	static uint8_t x214 = 0U;
	static volatile int32_t t44 = INT32_MAX;

	t44 = (x213*(x214<(x215+x216)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x218 = INT64_MIN;
	int32_t x219 = 117446732;
	int32_t x220 = -1;
	int32_t t45 = 1204;

	t45 = (x217*(x218<(x219+x220)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x222 = INT32_MAX;
	int8_t x223 = INT8_MIN;
	int64_t x224 = -212713LL;
	int32_t t46 = -14569;

	t46 = (x221*(x222<(x223+x224)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x225 = INT32_MIN;
	int8_t x227 = -9;
	volatile int32_t x228 = INT32_MAX;

	t47 = (x225*(x226<(x227+x228)));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x229 = -6;
	volatile uint8_t x230 = 7U;
	volatile int32_t t48 = -11089313;

	t48 = (x229*(x230<(x231+x232)));

	if (t48 != -6) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x233 = UINT8_MAX;
	int64_t x234 = INT64_MIN;
	int8_t x235 = 5;
	int16_t x236 = -1978;

	t49 = (x233*(x234<(x235+x236)));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x237 = -1214674;
	int16_t x238 = -1;
	uint16_t x239 = 0U;
	static uint32_t x240 = UINT32_MAX;

	t50 = (x237*(x238<(x239+x240)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x242 = 0LL;
	uint32_t x243 = 516527144U;
	uint64_t x244 = 1332LLU;
	volatile int32_t t51 = 13;

	t51 = (x241*(x242<(x243+x244)));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x246 = 269U;
	static volatile int8_t x247 = 1;
	static int64_t x248 = INT64_MIN;
	uint64_t t52 = 94648883946197LLU;

	t52 = (x245*(x246<(x247+x248)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x249 = INT32_MIN;
	int32_t x250 = INT32_MIN;
	int64_t x252 = -1LL;
	static int32_t t53 = INT32_MIN;

	t53 = (x249*(x250<(x251+x252)));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x253 = INT64_MIN;
	int64_t x254 = -2780207438LL;
	volatile int8_t x255 = 0;
	uint64_t x256 = 15429220647129LLU;
	volatile int64_t t54 = -35814LL;

	t54 = (x253*(x254<(x255+x256)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x261 = 5831953171278947540LLU;
	int16_t x262 = -1;
	static uint64_t x263 = UINT64_MAX;

	t55 = (x261*(x262<(x263+x264)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x269 = -5401;
	uint16_t x271 = 1U;
	static volatile int16_t x272 = INT16_MAX;
	int32_t t56 = 1075234;

	t56 = (x269*(x270<(x271+x272)));

	if (t56 != -5401) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x273 = -1;
	uint8_t x274 = UINT8_MAX;
	int32_t t57 = -47226;

	t57 = (x273*(x274<(x275+x276)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = INT16_MIN;
	volatile int16_t x282 = -117;
	static int8_t x283 = -1;
	static uint64_t x284 = 17941820498053985LLU;
	volatile int32_t t58 = -104434;

	t58 = (x281*(x282<(x283+x284)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x285 = INT64_MIN;
	int32_t x286 = INT32_MIN;
	int64_t x288 = INT64_MAX;
	volatile int64_t t59 = INT64_MIN;

	t59 = (x285*(x286<(x287+x288)));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x289 = -12119965;
	int64_t x291 = -1LL;
	int16_t x292 = INT16_MIN;
	volatile int32_t t60 = 3037;

	t60 = (x289*(x290<(x291+x292)));

	if (t60 != -12119965) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x293 = -1;
	uint16_t x294 = 0U;
	static volatile int64_t x296 = -1088274LL;

	t61 = (x293*(x294<(x295+x296)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x298 = -1;
	int16_t x300 = INT16_MIN;
	int32_t t62 = -901040;

	t62 = (x297*(x298<(x299+x300)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x301 = INT32_MIN;
	uint8_t x302 = UINT8_MAX;
	int32_t t63 = -20;

	t63 = (x301*(x302<(x303+x304)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x305 = INT8_MIN;
	static int32_t x306 = INT32_MIN;
	uint64_t x308 = 134199583LLU;

	t64 = (x305*(x306<(x307+x308)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x309 = 4427;
	volatile int16_t x310 = 1;
	int8_t x312 = INT8_MIN;
	volatile int32_t t65 = -11334366;

	t65 = (x309*(x310<(x311+x312)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x313 = -7;
	static volatile uint64_t x314 = 5878504488LLU;
	uint64_t x315 = 50830779LLU;
	int16_t x316 = INT16_MIN;
	volatile int32_t t66 = -9;

	t66 = (x313*(x314<(x315+x316)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x318 = -5808792920284LL;
	int8_t x319 = 1;
	int16_t x320 = -1;
	volatile uint32_t t67 = 399722011U;

	t67 = (x317*(x318<(x319+x320)));

	if (t67 != 1037670U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x321 = -1;
	static int8_t x322 = INT8_MIN;
	static int32_t x323 = -32;
	int64_t x324 = -1LL;

	t68 = (x321*(x322<(x323+x324)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x329 = -111419LL;
	static int8_t x330 = INT8_MAX;
	uint16_t x331 = UINT16_MAX;
	static int8_t x332 = 3;
	int64_t t69 = -14LL;

	t69 = (x329*(x330<(x331+x332)));

	if (t69 != -111419LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x337 = UINT64_MAX;
	uint8_t x338 = 0U;
	int16_t x340 = INT16_MAX;
	static volatile uint64_t t70 = UINT64_MAX;

	t70 = (x337*(x338<(x339+x340)));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x341 = UINT8_MAX;
	int16_t x342 = INT16_MIN;
	static volatile uint32_t x343 = 38U;
	static int32_t t71 = -2330;

	t71 = (x341*(x342<(x343+x344)));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x345 = INT16_MAX;
	int16_t x346 = 18;
	static volatile uint16_t x348 = 17U;

	t72 = (x345*(x346<(x347+x348)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x349 = 11134385;
	static volatile uint64_t x350 = 144769529613512LLU;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t73 = -105548;

	t73 = (x349*(x350<(x351+x352)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x354 = 28;
	static volatile int8_t x355 = -1;
	uint16_t x356 = 19359U;

	t74 = (x353*(x354<(x355+x356)));

	if (t74 != 163) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x357 = INT8_MAX;
	int16_t x358 = INT16_MIN;
	static int8_t x359 = INT8_MAX;
	int64_t x360 = -1LL;
	volatile int32_t t75 = 155186;

	t75 = (x357*(x358<(x359+x360)));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x365 = INT8_MIN;
	int32_t x366 = -1;
	static int16_t x367 = -1;
	int64_t x368 = 4431747996740342LL;
	int32_t t76 = -9;

	t76 = (x365*(x366<(x367+x368)));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x369 = -1;
	uint16_t x372 = 85U;
	volatile int32_t t77 = 0;

	t77 = (x369*(x370<(x371+x372)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x374 = 125555LL;
	uint16_t x375 = 2205U;
	volatile int8_t x376 = INT8_MIN;

	t78 = (x373*(x374<(x375+x376)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x381 = 2U;
	volatile uint16_t x382 = 26755U;
	uint32_t x383 = 1582U;
	int8_t x384 = -1;
	static volatile uint32_t t79 = 669527374U;

	t79 = (x381*(x382<(x383+x384)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x386 = 29117207LLU;
	int8_t x387 = INT8_MIN;
	volatile uint64_t x388 = 285182408LLU;
	int32_t t80 = -7062;

	t80 = (x385*(x386<(x387+x388)));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x392 = 28;
	volatile int32_t t81 = -847395;

	t81 = (x389*(x390<(x391+x392)));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x401 = UINT8_MAX;
	uint32_t x403 = 635218U;
	int16_t x404 = INT16_MIN;
	volatile int32_t t82 = 5583248;

	t82 = (x401*(x402<(x403+x404)));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x405 = 21634424;
	static int16_t x406 = -1;
	volatile int8_t x408 = -1;
	int32_t t83 = 21548650;

	t83 = (x405*(x406<(x407+x408)));

	if (t83 != 21634424) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x413 = INT16_MAX;
	int8_t x415 = -6;
	uint64_t x416 = 1150442608184178173LLU;
	volatile int32_t t84 = 761083;

	t84 = (x413*(x414<(x415+x416)));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x418 = 29;
	int8_t x419 = 0;
	volatile uint32_t x420 = 10218U;
	volatile int64_t t85 = -18748556469055LL;

	t85 = (x417*(x418<(x419+x420)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x421 = -4;
	static int8_t x422 = -1;
	uint16_t x423 = 1450U;
	static uint32_t x424 = 0U;
	int32_t t86 = 257;

	t86 = (x421*(x422<(x423+x424)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x425 = 0;
	uint16_t x426 = UINT16_MAX;
	uint32_t x428 = 340941893U;
	static volatile int32_t t87 = -1644;

	t87 = (x425*(x426<(x427+x428)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x433 = -1LL;
	static int16_t x434 = INT16_MIN;
	static uint32_t x436 = UINT32_MAX;

	t88 = (x433*(x434<(x435+x436)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x437 = UINT16_MAX;
	uint16_t x438 = UINT16_MAX;
	volatile uint64_t x439 = 662562524105LLU;
	static volatile int32_t x440 = -32627;
	int32_t t89 = -74;

	t89 = (x437*(x438<(x439+x440)));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x441 = UINT8_MAX;
	volatile uint64_t x444 = 3996792LLU;
	int32_t t90 = -1;

	t90 = (x441*(x442<(x443+x444)));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x445 = 106207U;
	volatile int16_t x446 = -1;
	int16_t x447 = INT16_MAX;
	uint32_t x448 = UINT32_MAX;
	static uint32_t t91 = 837U;

	t91 = (x445*(x446<(x447+x448)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x450 = 1763LLU;
	uint64_t x451 = 180LLU;
	volatile int64_t t92 = 1LL;

	t92 = (x449*(x450<(x451+x452)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x453 = 1U;
	int16_t x454 = INT16_MIN;
	int64_t x455 = -7595LL;
	static int8_t x456 = -41;
	static int32_t t93 = 1262;

	t93 = (x453*(x454<(x455+x456)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x457 = INT64_MIN;
	static uint64_t x458 = 916025562304LLU;
	static volatile uint32_t x459 = 13553U;
	volatile int16_t x460 = INT16_MAX;
	int64_t t94 = -57985128850900LL;

	t94 = (x457*(x458<(x459+x460)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x461 = -1;
	int64_t x463 = -3945691578631284794LL;
	int32_t x464 = INT32_MIN;

	t95 = (x461*(x462<(x463+x464)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x465 = INT32_MIN;
	int64_t x466 = 15756782LL;
	int16_t x467 = INT16_MIN;
	static uint16_t x468 = 77U;
	volatile int32_t t96 = -599807;

	t96 = (x465*(x466<(x467+x468)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x477 = UINT16_MAX;
	static int64_t x479 = INT64_MIN;
	uint8_t x480 = 26U;
	static volatile int32_t t97 = 4095283;

	t97 = (x477*(x478<(x479+x480)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x482 = INT64_MIN;
	static volatile int64_t x483 = -324385502161959094LL;
	int32_t t98 = -17893361;

	t98 = (x481*(x482<(x483+x484)));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x485 = INT32_MIN;
	uint64_t x487 = UINT64_MAX;

	t99 = (x485*(x486<(x487+x488)));

	if (t99 != 0) { NG(); } else { ; }
	
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

