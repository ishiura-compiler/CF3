#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 0;
static volatile int32_t x7 = INT32_MIN;
int64_t x9 = -1LL;
static volatile uint32_t x10 = UINT32_MAX;
uint8_t x11 = UINT8_MAX;
volatile int8_t x16 = INT8_MIN;
static uint64_t x25 = UINT64_MAX;
volatile int8_t x27 = -1;
static int8_t x28 = INT8_MAX;
volatile int32_t t6 = -18;
volatile int64_t x37 = INT64_MIN;
volatile int64_t x44 = INT64_MIN;
int32_t t9 = -4314345;
uint16_t x53 = 1296U;
volatile int32_t t11 = 241;
static volatile uint64_t x57 = 980566234868259LLU;
int8_t x58 = -1;
int64_t x62 = INT64_MAX;
int64_t x69 = 133208591043095909LL;
volatile uint8_t x70 = 0U;
int8_t x72 = 1;
static volatile uint32_t x75 = 1215577991U;
volatile int32_t t16 = 116121957;
int32_t t18 = -1124;
volatile int8_t x92 = INT8_MAX;
int64_t x97 = 29172006910821LL;
uint16_t x104 = 29969U;
int32_t t24 = -258131;
int16_t x111 = 417;
int32_t t25 = 2;
volatile uint8_t x120 = 55U;
int8_t x121 = -1;
int32_t t31 = 46;
uint8_t x139 = UINT8_MAX;
int32_t t32 = -41483;
volatile int32_t x143 = -1;
int32_t x151 = INT32_MAX;
int32_t t35 = -329330;
static volatile int32_t x158 = INT32_MIN;
static volatile uint32_t x168 = 1195129U;
volatile int32_t t38 = 824902;
static int32_t t39 = 474750600;
volatile int32_t t41 = 836;
int8_t x181 = INT8_MIN;
int64_t x185 = INT64_MAX;
volatile int8_t x193 = -6;
int64_t x197 = -4760934310805124LL;
volatile int32_t x202 = INT32_MAX;
volatile int32_t t47 = 1211;
static int32_t x206 = INT32_MIN;
volatile uint16_t x213 = UINT16_MAX;
int32_t x219 = INT32_MAX;
int32_t x225 = -1;
int8_t x228 = -1;
int32_t x236 = 83;
uint8_t x245 = 97U;
volatile uint8_t x247 = 28U;
volatile int32_t t57 = 54184;
uint16_t x250 = 1U;
static int64_t x256 = INT64_MAX;
int32_t t59 = 1;
volatile int32_t t61 = 3;
static int8_t x267 = 9;
int64_t x272 = -1LL;
int8_t x274 = -1;
int16_t x282 = 1;
uint32_t x285 = 5109538U;
volatile uint32_t x288 = UINT32_MAX;
volatile uint32_t x289 = UINT32_MAX;
int16_t x304 = -9698;
int64_t x305 = INT64_MIN;
int8_t x315 = INT8_MIN;
int16_t x316 = INT16_MAX;
int16_t x327 = -1;
static int32_t x335 = -1;
int8_t x338 = INT8_MIN;
uint64_t x341 = 22798235LLU;
int16_t x348 = INT16_MIN;
volatile int32_t t80 = 208;
int32_t x352 = INT32_MIN;
int32_t t81 = 58209544;
volatile int64_t x355 = INT64_MIN;
static int64_t x356 = -3213988985LL;
int64_t x362 = INT64_MAX;
volatile uint64_t x366 = 1897530826LLU;
uint8_t x368 = UINT8_MAX;
int32_t t85 = 7;
int32_t x369 = -1;
uint8_t x372 = 43U;
static uint32_t x373 = 53306720U;
volatile int32_t x375 = INT32_MIN;
volatile uint8_t x385 = UINT8_MAX;
int8_t x388 = INT8_MAX;
volatile int32_t t90 = 38;
uint16_t x389 = 2710U;
static volatile int16_t x391 = INT16_MIN;
int32_t x392 = -1;
volatile int32_t t92 = 167098;
static int16_t x399 = INT16_MIN;
int16_t x405 = -201;
static int8_t x409 = -1;
int8_t x414 = INT8_MAX;
volatile int32_t x419 = INT32_MIN;


void f0(void) {
	int64_t x2 = -8240172138737651LL;
	uint64_t x3 = UINT64_MAX;
	int64_t x4 = INT64_MIN;
	int32_t t0 = -2;

	t0 = (x1<(x2|(x3%x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	volatile int64_t x6 = -1LL;
	volatile int32_t x8 = -15996;
	volatile int32_t t1 = 6;

	t1 = (x5<(x6|(x7%x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x12 = INT32_MAX;
	int32_t t2 = -465745;

	t2 = (x9<(x10|(x11%x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 1197308;
	int8_t x14 = INT8_MAX;
	int16_t x15 = INT16_MIN;
	volatile int32_t t3 = -7393;

	t3 = (x13<(x14|(x15%x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 33;
	uint64_t x18 = 32777966915LLU;
	int64_t x19 = -606776856304968993LL;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 20508;

	t4 = (x17<(x18|(x19%x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 65U;
	volatile uint32_t x22 = 33358519U;
	int8_t x23 = INT8_MIN;
	int64_t x24 = -25039975019677LL;
	volatile int32_t t5 = 31;

	t5 = (x21<(x22|(x23%x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;

	t6 = (x25<(x26|(x27%x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	static volatile uint16_t x30 = 10972U;
	int16_t x31 = 100;
	volatile int8_t x32 = INT8_MIN;
	int32_t t7 = -243767;

	t7 = (x29<(x30|(x31%x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = INT64_MIN;
	static uint64_t x39 = 4065325LLU;
	static volatile int8_t x40 = 23;
	volatile int32_t t8 = -130729;

	t8 = (x37<(x38|(x39%x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	static int64_t x42 = -13778730242674372LL;
	int8_t x43 = INT8_MIN;

	t9 = (x41<(x42|(x43%x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = UINT64_MAX;
	uint32_t x50 = 4123U;
	int8_t x51 = 10;
	static volatile uint64_t x52 = 2056LLU;
	volatile int32_t t10 = -424;

	t10 = (x49<(x50|(x51%x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x54 = -2;
	int16_t x55 = -1;
	volatile int8_t x56 = INT8_MIN;

	t11 = (x53<(x54|(x55%x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x59 = INT16_MIN;
	int32_t x60 = -7;
	static int32_t t12 = -545941940;

	t12 = (x57<(x58|(x59%x60)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	volatile int8_t x63 = INT8_MAX;
	static int8_t x64 = INT8_MIN;
	int32_t t13 = 116713;

	t13 = (x61<(x62|(x63%x64)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MIN;
	volatile int8_t x66 = -5;
	int16_t x67 = -1;
	int8_t x68 = -1;
	int32_t t14 = -943569049;

	t14 = (x65<(x66|(x67%x68)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x71 = 3683U;
	static int32_t t15 = -23;

	t15 = (x69<(x70|(x71%x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x73 = INT64_MAX;
	uint16_t x74 = 36U;
	uint32_t x76 = UINT32_MAX;

	t16 = (x73<(x74|(x75%x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	int16_t x78 = INT16_MIN;
	int32_t x79 = -26180;
	volatile int8_t x80 = 1;
	int32_t t17 = -3643;

	t17 = (x77<(x78|(x79%x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MIN;
	int8_t x82 = INT8_MAX;
	int32_t x83 = INT32_MIN;
	volatile int16_t x84 = -1;

	t18 = (x81<(x82|(x83%x84)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = UINT32_MAX;
	int32_t x86 = INT32_MIN;
	volatile int32_t x87 = 26657;
	static int32_t x88 = -1;
	int32_t t19 = -58;

	t19 = (x85<(x86|(x87%x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	int8_t x90 = INT8_MIN;
	static int64_t x91 = INT64_MAX;
	volatile int32_t t20 = -68;

	t20 = (x89<(x90|(x91%x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = 277431110493367976LL;
	int16_t x94 = 5;
	uint8_t x95 = 56U;
	uint8_t x96 = 2U;
	volatile int32_t t21 = 975;

	t21 = (x93<(x94|(x95%x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x98 = -1;
	int8_t x99 = INT8_MIN;
	int16_t x100 = 54;
	int32_t t22 = 21192;

	t22 = (x97<(x98|(x99%x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 2U;
	volatile int8_t x102 = INT8_MAX;
	volatile int8_t x103 = -8;
	int32_t t23 = 28286008;

	t23 = (x101<(x102|(x103%x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x105 = 26U;
	static int32_t x106 = 27057;
	int8_t x107 = -3;
	int16_t x108 = -1;

	t24 = (x105<(x106|(x107%x108)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = -1LL;
	volatile uint32_t x110 = UINT32_MAX;
	static int32_t x112 = -116;

	t25 = (x109<(x110|(x111%x112)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -24058102LL;
	int64_t x114 = INT64_MAX;
	uint16_t x115 = UINT16_MAX;
	volatile uint64_t x116 = 1331446927838LLU;
	volatile int32_t t26 = 2366199;

	t26 = (x113<(x114|(x115%x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	int32_t x118 = 1;
	volatile int64_t x119 = INT64_MIN;
	int32_t t27 = -7;

	t27 = (x117<(x118|(x119%x120)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x122 = INT64_MIN;
	uint16_t x123 = 7168U;
	volatile uint16_t x124 = 23U;
	volatile int32_t t28 = 2714643;

	t28 = (x121<(x122|(x123%x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x125 = INT8_MIN;
	int16_t x126 = -68;
	static int64_t x127 = INT64_MIN;
	volatile int64_t x128 = -1LL;
	int32_t t29 = -959438;

	t29 = (x125<(x126|(x127%x128)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = INT16_MAX;
	uint8_t x130 = 48U;
	static uint64_t x131 = 91450415381651LLU;
	static int8_t x132 = 1;
	int32_t t30 = 1352;

	t30 = (x129<(x130|(x131%x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MAX;
	int16_t x135 = INT16_MIN;
	uint8_t x136 = UINT8_MAX;

	t31 = (x133<(x134|(x135%x136)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = 9;
	static int64_t x138 = INT64_MIN;
	uint64_t x140 = UINT64_MAX;

	t32 = (x137<(x138|(x139%x140)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x141 = 33;
	uint16_t x142 = 0U;
	static uint32_t x144 = 108007188U;
	volatile int32_t t33 = 0;

	t33 = (x141<(x142|(x143%x144)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -2147;
	uint8_t x146 = UINT8_MAX;
	static int32_t x147 = 463;
	uint64_t x148 = UINT64_MAX;
	static int32_t t34 = 290358;

	t34 = (x145<(x146|(x147%x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x149 = INT8_MIN;
	int32_t x150 = INT32_MIN;
	int16_t x152 = INT16_MIN;

	t35 = (x149<(x150|(x151%x152)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MAX;
	uint8_t x159 = 5U;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t36 = -603147;

	t36 = (x157<(x158|(x159%x160)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = -1;
	int64_t x162 = -4745836LL;
	static int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MAX;
	int32_t t37 = -10;

	t37 = (x161<(x162|(x163%x164)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x165 = 964U;
	int64_t x166 = INT64_MAX;
	int16_t x167 = INT16_MAX;

	t38 = (x165<(x166|(x167%x168)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x169 = INT8_MAX;
	static int64_t x170 = INT64_MIN;
	int32_t x171 = -215;
	volatile int8_t x172 = -1;

	t39 = (x169<(x170|(x171%x172)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x173 = INT32_MIN;
	uint8_t x174 = UINT8_MAX;
	uint16_t x175 = UINT16_MAX;
	static int64_t x176 = -4070981302LL;
	int32_t t40 = -256869710;

	t40 = (x173<(x174|(x175%x176)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = INT32_MAX;
	volatile uint8_t x178 = UINT8_MAX;
	volatile int8_t x179 = INT8_MAX;
	int64_t x180 = 4437336LL;

	t41 = (x177<(x178|(x179%x180)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x182 = UINT64_MAX;
	volatile uint16_t x183 = UINT16_MAX;
	int32_t x184 = -3877;
	int32_t t42 = -1;

	t42 = (x181<(x182|(x183%x184)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x186 = -6;
	int32_t x187 = INT32_MAX;
	int8_t x188 = INT8_MIN;
	volatile int32_t t43 = -166;

	t43 = (x185<(x186|(x187%x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x189 = UINT32_MAX;
	static volatile uint32_t x190 = 7197775U;
	uint32_t x191 = 902815665U;
	int64_t x192 = INT64_MIN;
	int32_t t44 = -676454686;

	t44 = (x189<(x190|(x191%x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x194 = INT8_MIN;
	int64_t x195 = -2365LL;
	volatile int8_t x196 = -27;
	volatile int32_t t45 = -5;

	t45 = (x193<(x194|(x195%x196)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x198 = UINT8_MAX;
	uint64_t x199 = UINT64_MAX;
	uint16_t x200 = 444U;
	volatile int32_t t46 = 81;

	t46 = (x197<(x198|(x199%x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x201 = UINT16_MAX;
	static int64_t x203 = INT64_MIN;
	volatile uint64_t x204 = 944888720LLU;

	t47 = (x201<(x202|(x203%x204)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x205 = 73U;
	int16_t x207 = INT16_MAX;
	uint16_t x208 = 5115U;
	volatile int32_t t48 = -1;

	t48 = (x205<(x206|(x207%x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x209 = UINT64_MAX;
	int64_t x210 = INT64_MIN;
	volatile int8_t x211 = -1;
	static int8_t x212 = INT8_MAX;
	int32_t t49 = 3;

	t49 = (x209<(x210|(x211%x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x214 = INT8_MIN;
	int64_t x215 = -1LL;
	int8_t x216 = -5;
	static volatile int32_t t50 = 433;

	t50 = (x213<(x214|(x215%x216)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = -9;
	static int16_t x218 = -1;
	static int32_t x220 = INT32_MIN;
	volatile int32_t t51 = -3;

	t51 = (x217<(x218|(x219%x220)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = 0U;
	int16_t x222 = 6;
	static volatile uint32_t x223 = 82U;
	int32_t x224 = INT32_MIN;
	int32_t t52 = 145;

	t52 = (x221<(x222|(x223%x224)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x226 = -1LL;
	int32_t x227 = -1;
	volatile int32_t t53 = -20;

	t53 = (x225<(x226|(x227%x228)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x229 = INT32_MIN;
	volatile uint32_t x230 = UINT32_MAX;
	uint32_t x231 = 10044U;
	static int64_t x232 = -1LL;
	int32_t t54 = 847;

	t54 = (x229<(x230|(x231%x232)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x233 = 98083423480640LLU;
	uint32_t x234 = 482938200U;
	int8_t x235 = -7;
	volatile int32_t t55 = 35731798;

	t55 = (x233<(x234|(x235%x236)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MAX;
	int32_t x238 = -1;
	static int32_t x239 = INT32_MIN;
	volatile int32_t x240 = 3435;
	volatile int32_t t56 = 422364;

	t56 = (x237<(x238|(x239%x240)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x246 = INT32_MIN;
	int64_t x248 = 221661016142463LL;

	t57 = (x245<(x246|(x247%x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x249 = UINT64_MAX;
	static int16_t x251 = -161;
	int32_t x252 = INT32_MIN;
	static int32_t t58 = -11;

	t58 = (x249<(x250|(x251%x252)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = 36U;
	static uint16_t x254 = UINT16_MAX;
	uint64_t x255 = 13778628606847LLU;

	t59 = (x253<(x254|(x255%x256)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x257 = UINT8_MAX;
	uint8_t x258 = UINT8_MAX;
	uint32_t x259 = 10U;
	volatile int16_t x260 = INT16_MIN;
	volatile int32_t t60 = 811;

	t60 = (x257<(x258|(x259%x260)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x261 = 3;
	int16_t x262 = -1;
	volatile int32_t x263 = INT32_MAX;
	int32_t x264 = 3858;

	t61 = (x261<(x262|(x263%x264)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x265 = 210;
	uint64_t x266 = 690175251821460LLU;
	int64_t x268 = -105LL;
	volatile int32_t t62 = 727186864;

	t62 = (x265<(x266|(x267%x268)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x269 = UINT16_MAX;
	int16_t x270 = INT16_MIN;
	static volatile int32_t x271 = INT32_MIN;
	volatile int32_t t63 = -8;

	t63 = (x269<(x270|(x271%x272)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x273 = -1;
	uint32_t x275 = UINT32_MAX;
	uint8_t x276 = UINT8_MAX;
	int32_t t64 = 18;

	t64 = (x273<(x274|(x275%x276)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x277 = 4U;
	int64_t x278 = INT64_MIN;
	static uint16_t x279 = 238U;
	volatile uint16_t x280 = 1402U;
	static int32_t t65 = -5323;

	t65 = (x277<(x278|(x279%x280)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x281 = INT16_MIN;
	int64_t x283 = -1LL;
	volatile int16_t x284 = INT16_MIN;
	int32_t t66 = 5;

	t66 = (x281<(x282|(x283%x284)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x286 = UINT16_MAX;
	volatile int16_t x287 = -1;
	volatile int32_t t67 = -7469328;

	t67 = (x285<(x286|(x287%x288)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x290 = -10768;
	static int16_t x291 = 105;
	int16_t x292 = INT16_MIN;
	volatile int32_t t68 = -27563;

	t68 = (x289<(x290|(x291%x292)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x293 = 911U;
	static uint32_t x294 = UINT32_MAX;
	volatile uint16_t x295 = UINT16_MAX;
	int8_t x296 = INT8_MIN;
	volatile int32_t t69 = -528754439;

	t69 = (x293<(x294|(x295%x296)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x301 = 10U;
	volatile uint64_t x302 = UINT64_MAX;
	volatile int32_t x303 = INT32_MIN;
	int32_t t70 = 666;

	t70 = (x301<(x302|(x303%x304)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x306 = 264146067LLU;
	static int32_t x307 = -1;
	volatile int64_t x308 = INT64_MIN;
	static int32_t t71 = -17;

	t71 = (x305<(x306|(x307%x308)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = 0LL;
	static volatile uint8_t x314 = UINT8_MAX;
	volatile int32_t t72 = -131190206;

	t72 = (x313<(x314|(x315%x316)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x317 = INT32_MAX;
	volatile int16_t x318 = 848;
	int16_t x319 = -5;
	uint32_t x320 = 25496834U;
	volatile int32_t t73 = -4037578;

	t73 = (x317<(x318|(x319%x320)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x321 = INT64_MAX;
	volatile int32_t x322 = -1;
	int8_t x323 = -19;
	int32_t x324 = INT32_MAX;
	volatile int32_t t74 = 41196;

	t74 = (x321<(x322|(x323%x324)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x325 = UINT32_MAX;
	int32_t x326 = -1517994;
	volatile int16_t x328 = INT16_MAX;
	volatile int32_t t75 = -120;

	t75 = (x325<(x326|(x327%x328)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = INT16_MIN;
	volatile int32_t x330 = -1;
	uint8_t x331 = 4U;
	int8_t x332 = 63;
	volatile int32_t t76 = 4564678;

	t76 = (x329<(x330|(x331%x332)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x333 = UINT64_MAX;
	int64_t x334 = INT64_MIN;
	volatile int64_t x336 = INT64_MIN;
	static int32_t t77 = 73;

	t77 = (x333<(x334|(x335%x336)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x337 = 516447310225073LLU;
	uint8_t x339 = 11U;
	static int32_t x340 = INT32_MAX;
	static volatile int32_t t78 = 4;

	t78 = (x337<(x338|(x339%x340)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x342 = 180473488;
	uint32_t x343 = UINT32_MAX;
	int32_t x344 = INT32_MAX;
	static volatile int32_t t79 = 20565527;

	t79 = (x341<(x342|(x343%x344)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x345 = INT64_MIN;
	int8_t x346 = INT8_MAX;
	volatile uint64_t x347 = UINT64_MAX;

	t80 = (x345<(x346|(x347%x348)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MIN;
	static int8_t x351 = INT8_MIN;

	t81 = (x349<(x350|(x351%x352)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x353 = UINT8_MAX;
	int16_t x354 = 32;
	static int32_t t82 = 517645738;

	t82 = (x353<(x354|(x355%x356)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x357 = 2132838LLU;
	int16_t x358 = INT16_MAX;
	int64_t x359 = INT64_MIN;
	int64_t x360 = -1LL;
	int32_t t83 = -1385866;

	t83 = (x357<(x358|(x359%x360)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x361 = INT8_MAX;
	int32_t x363 = INT32_MIN;
	static int32_t x364 = 470;
	static int32_t t84 = 1;

	t84 = (x361<(x362|(x363%x364)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x365 = INT64_MIN;
	uint16_t x367 = 273U;

	t85 = (x365<(x366|(x367%x368)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x370 = -1;
	int8_t x371 = -6;
	static int32_t t86 = 1015;

	t86 = (x369<(x370|(x371%x372)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x374 = INT16_MIN;
	uint64_t x376 = UINT64_MAX;
	volatile int32_t t87 = -93;

	t87 = (x373<(x374|(x375%x376)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x377 = INT8_MAX;
	int32_t x378 = INT32_MAX;
	int8_t x379 = -1;
	uint8_t x380 = 48U;
	volatile int32_t t88 = 75;

	t88 = (x377<(x378|(x379%x380)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x381 = 689;
	static volatile int16_t x382 = 252;
	static int16_t x383 = INT16_MIN;
	uint32_t x384 = 1511U;
	int32_t t89 = -5858429;

	t89 = (x381<(x382|(x383%x384)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x386 = UINT16_MAX;
	uint32_t x387 = UINT32_MAX;

	t90 = (x385<(x386|(x387%x388)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x390 = INT8_MIN;
	volatile int32_t t91 = 156627;

	t91 = (x389<(x390|(x391%x392)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x393 = INT32_MAX;
	volatile int8_t x394 = -1;
	int8_t x395 = INT8_MIN;
	int8_t x396 = -1;

	t92 = (x393<(x394|(x395%x396)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x397 = 25U;
	uint64_t x398 = 11382772LLU;
	int8_t x400 = -1;
	int32_t t93 = -15389;

	t93 = (x397<(x398|(x399%x400)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x401 = UINT32_MAX;
	static volatile int16_t x402 = -1;
	volatile uint8_t x403 = 15U;
	static uint8_t x404 = 86U;
	static int32_t t94 = -681711011;

	t94 = (x401<(x402|(x403%x404)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x406 = INT8_MAX;
	int16_t x407 = INT16_MIN;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t95 = -11443;

	t95 = (x405<(x406|(x407%x408)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x410 = UINT8_MAX;
	int32_t x411 = INT32_MAX;
	int16_t x412 = INT16_MIN;
	static volatile int32_t t96 = -5580;

	t96 = (x409<(x410|(x411%x412)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x413 = 54U;
	int32_t x415 = -237277;
	static volatile int64_t x416 = INT64_MAX;
	volatile int32_t t97 = 505332987;

	t97 = (x413<(x414|(x415%x416)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = INT64_MIN;
	int8_t x418 = -1;
	uint8_t x420 = 49U;
	int32_t t98 = 4983;

	t98 = (x417<(x418|(x419%x420)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x421 = 0;
	int8_t x422 = -18;
	int8_t x423 = INT8_MIN;
	uint64_t x424 = UINT64_MAX;
	volatile int32_t t99 = 48;

	t99 = (x421<(x422|(x423%x424)));

	if (t99 != 1) { NG(); } else { ; }
	
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

