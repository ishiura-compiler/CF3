#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = INT16_MAX;
uint64_t x5 = 43775755887LLU;
static int32_t x15 = INT32_MIN;
volatile uint16_t x16 = UINT16_MAX;
int16_t x19 = INT16_MIN;
int32_t t4 = 14458561;
uint8_t x26 = 100U;
volatile uint32_t x33 = 28975U;
volatile uint16_t x35 = 8U;
volatile uint8_t x37 = UINT8_MAX;
static int8_t x38 = 0;
int8_t x39 = 1;
int32_t x42 = -55692;
static uint16_t x44 = UINT16_MAX;
static volatile int32_t t10 = INT32_MAX;
static int64_t t12 = -370LL;
uint16_t x57 = 63U;
uint16_t x60 = 168U;
int32_t x61 = -9;
int8_t x64 = INT8_MAX;
int8_t x78 = INT8_MIN;
int64_t t17 = INT64_MIN;
int64_t x81 = INT64_MIN;
uint16_t x82 = UINT16_MAX;
uint16_t x85 = UINT16_MAX;
static int32_t x88 = INT32_MIN;
uint64_t x91 = UINT64_MAX;
volatile int8_t x92 = INT8_MIN;
volatile int64_t t20 = INT64_MIN;
int64_t t21 = INT64_MIN;
volatile int16_t x99 = INT16_MIN;
int32_t t23 = 12420107;
static volatile int16_t x107 = -2;
uint64_t t24 = UINT64_MAX;
volatile uint8_t x109 = UINT8_MAX;
uint8_t x111 = 24U;
int8_t x112 = -3;
uint32_t x113 = 1475957U;
uint64_t x118 = UINT64_MAX;
int64_t x126 = -518294686667LL;
int8_t x128 = -1;
static uint8_t x132 = 3U;
int8_t x133 = INT8_MIN;
volatile int8_t x137 = INT8_MAX;
int32_t x140 = 866517081;
uint32_t x143 = 10U;
int32_t x144 = -1;
uint64_t x150 = 5405554705807996LLU;
static int8_t x151 = INT8_MIN;
volatile int32_t t36 = 12;
int32_t x166 = INT32_MAX;
int64_t x168 = 208974134LL;
int32_t x170 = INT32_MAX;
uint8_t x174 = 12U;
int8_t x182 = INT8_MAX;
int64_t x183 = INT64_MIN;
int32_t t43 = 150518;
uint16_t x190 = UINT16_MAX;
volatile int32_t t44 = 0;
int8_t x193 = INT8_MAX;
int32_t t45 = 1309;
int64_t t46 = -507921716653LL;
int8_t x207 = -1;
uint16_t x212 = UINT16_MAX;
int32_t x219 = INT32_MAX;
int32_t t53 = -698317;
volatile int8_t x233 = -40;
static int64_t x235 = 476LL;
static int64_t x236 = -18505277179162861LL;
static int64_t x241 = INT64_MIN;
int16_t x244 = INT16_MIN;
static volatile int32_t t59 = 4709;
uint32_t x257 = 30000U;
static int64_t x259 = INT64_MIN;
volatile int32_t t63 = -5049;
int32_t x273 = INT32_MAX;
static int8_t x275 = INT8_MIN;
int8_t x280 = INT8_MIN;
int16_t x286 = INT16_MIN;
static int16_t x292 = -1;
static int8_t x302 = -4;
uint32_t x309 = UINT32_MAX;
static int32_t x335 = INT32_MIN;
uint64_t t77 = UINT64_MAX;
int16_t x340 = -1013;
int64_t x342 = INT64_MIN;
int64_t x349 = INT64_MIN;
int64_t x350 = 7188397LL;
int16_t x352 = 11;
int8_t x362 = 3;
uint64_t x363 = UINT64_MAX;
int8_t x368 = -1;
static int8_t x371 = 2;
int16_t x384 = -1;
volatile uint32_t t86 = UINT32_MAX;
volatile int8_t x385 = INT8_MAX;
int16_t x386 = 767;
int16_t x392 = INT16_MIN;
static uint64_t x405 = 150475763LLU;
uint32_t x411 = UINT32_MAX;
int32_t x421 = 6229649;
int8_t x427 = 21;
uint16_t x428 = 0U;
int16_t x429 = INT16_MIN;
uint64_t x430 = 206260582482076LLU;
static int8_t x431 = -46;


void f0(void) {
	int32_t x1 = -1;
	int32_t x3 = INT32_MAX;
	volatile int32_t x4 = 41;
	volatile int32_t t0 = 59700;

	t0 = (x1|((x2/x3)==x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	uint8_t x7 = 5U;
	volatile int16_t x8 = INT16_MAX;
	static uint64_t t1 = 1754643022284LLU;

	t1 = (x5|((x6/x7)==x8));

	if (t1 != 43775755887LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	volatile int16_t x10 = INT16_MIN;
	int8_t x11 = INT8_MIN;
	volatile uint8_t x12 = 11U;
	volatile int32_t t2 = 16417433;

	t2 = (x9|((x10/x11)==x12));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -2062;
	uint8_t x14 = UINT8_MAX;
	static int32_t t3 = 95200;

	t3 = (x13|((x14/x15)==x16));

	if (t3 != -2062) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x17 = 1;
	uint64_t x18 = 7385237567106765LLU;
	static volatile int64_t x20 = INT64_MIN;

	t4 = (x17|((x18/x19)==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	volatile int8_t x22 = 7;
	int8_t x23 = INT8_MIN;
	static int64_t x24 = -1LL;
	volatile int32_t t5 = 77698011;

	t5 = (x21|((x22/x23)==x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static uint64_t x27 = UINT64_MAX;
	uint32_t x28 = UINT32_MAX;
	static volatile int32_t t6 = 11454098;

	t6 = (x25|((x26/x27)==x28));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = 3679945190LL;
	static volatile uint32_t x36 = 1U;
	uint32_t t7 = 6875U;

	t7 = (x33|((x34/x35)==x36));

	if (t7 != 28975U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x40 = 28471402U;
	static volatile int32_t t8 = 1;

	t8 = (x37|((x38/x39)==x40));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MAX;
	static uint64_t x43 = 1477641LLU;
	volatile int32_t t9 = 41617097;

	t9 = (x41|((x42/x43)==x44));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MAX;
	volatile int32_t x46 = -14081212;
	volatile uint64_t x47 = 1148618117LLU;
	static int64_t x48 = -83LL;

	t10 = (x45|((x46/x47)==x48));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 260109U;
	int16_t x50 = INT16_MAX;
	static int64_t x51 = INT64_MAX;
	uint16_t x52 = 1U;
	uint32_t t11 = 35866690U;

	t11 = (x49|((x50/x51)==x52));

	if (t11 != 260109U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -23269LL;
	static volatile uint32_t x54 = 2062548U;
	uint16_t x55 = 185U;
	volatile uint8_t x56 = 0U;

	t12 = (x53|((x54/x55)==x56));

	if (t12 != -23269LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x58 = UINT16_MAX;
	uint32_t x59 = 399562785U;
	volatile int32_t t13 = 3933;

	t13 = (x57|((x58/x59)==x60));

	if (t13 != 63) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = INT16_MAX;
	uint8_t x63 = UINT8_MAX;
	volatile int32_t t14 = 2;

	t14 = (x61|((x62/x63)==x64));

	if (t14 != -9) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = 2;
	uint32_t x66 = 5U;
	int64_t x67 = INT64_MIN;
	volatile int32_t x68 = -166972335;
	int32_t t15 = 0;

	t15 = (x65|((x66/x67)==x68));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 12U;
	uint16_t x70 = 9U;
	static int16_t x71 = INT16_MIN;
	int8_t x72 = -1;
	int32_t t16 = -721977;

	t16 = (x69|((x70/x71)==x72));

	if (t16 != 12) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = INT64_MIN;
	volatile int16_t x79 = -1;
	static int16_t x80 = -1;

	t17 = (x77|((x78/x79)==x80));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x83 = INT32_MIN;
	int16_t x84 = -1;
	int64_t t18 = INT64_MIN;

	t18 = (x81|((x82/x83)==x84));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x86 = 14061U;
	uint32_t x87 = 13U;
	int32_t t19 = -19289;

	t19 = (x85|((x86/x87)==x88));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = INT64_MIN;
	uint16_t x90 = 88U;

	t20 = (x89|((x90/x91)==x92));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	int64_t x94 = 1340817992702LL;
	int16_t x95 = INT16_MAX;
	uint16_t x96 = 1888U;

	t21 = (x93|((x94/x95)==x96));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x97 = 2217347737794293LLU;
	int8_t x98 = 0;
	int64_t x100 = 14005411215221LL;
	uint64_t t22 = 9LLU;

	t22 = (x97|((x98/x99)==x100));

	if (t22 != 2217347737794293LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x101 = 5304;
	volatile uint64_t x102 = UINT64_MAX;
	int32_t x103 = -164887491;
	int32_t x104 = 74278829;

	t23 = (x101|((x102/x103)==x104));

	if (t23 != 5304) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = UINT64_MAX;
	int32_t x106 = INT32_MIN;
	volatile uint16_t x108 = 4U;

	t24 = (x105|((x106/x107)==x108));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x110 = UINT64_MAX;
	static volatile int32_t t25 = 197279;

	t25 = (x109|((x110/x111)==x112));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MAX;
	static int64_t x116 = -1LL;
	volatile uint32_t t26 = 959570U;

	t26 = (x113|((x114/x115)==x116));

	if (t26 != 1475957U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MAX;
	int8_t x119 = -1;
	uint64_t x120 = 32721344795641092LLU;
	int64_t t27 = INT64_MAX;

	t27 = (x117|((x118/x119)==x120));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x121 = 65U;
	volatile int8_t x122 = 6;
	int64_t x123 = INT64_MAX;
	int32_t x124 = INT32_MAX;
	int32_t t28 = -618343803;

	t28 = (x121|((x122/x123)==x124));

	if (t28 != 65) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = 401269562LL;
	int64_t x127 = INT64_MAX;
	int64_t t29 = -864244316552417LL;

	t29 = (x125|((x126/x127)==x128));

	if (t29 != 401269562LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x129 = 227;
	int32_t x130 = -10449;
	volatile int16_t x131 = -1;
	volatile int32_t t30 = 1;

	t30 = (x129|((x130/x131)==x132));

	if (t30 != 227) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x134 = -501;
	int64_t x135 = INT64_MAX;
	uint64_t x136 = 110723LLU;
	int32_t t31 = -12748;

	t31 = (x133|((x134/x135)==x136));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x138 = 55259726U;
	volatile uint16_t x139 = UINT16_MAX;
	volatile int32_t t32 = 43;

	t32 = (x137|((x138/x139)==x140));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x141 = 0U;
	uint64_t x142 = 106398288LLU;
	static volatile uint32_t t33 = 1611U;

	t33 = (x141|((x142/x143)==x144));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x145 = INT16_MIN;
	int8_t x146 = INT8_MIN;
	int64_t x147 = INT64_MAX;
	uint32_t x148 = UINT32_MAX;
	int32_t t34 = 192788;

	t34 = (x145|((x146/x147)==x148));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x149 = INT8_MAX;
	static volatile int16_t x152 = -282;
	volatile int32_t t35 = 0;

	t35 = (x149|((x150/x151)==x152));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 3003U;
	int16_t x154 = -51;
	uint32_t x155 = 60121U;
	int32_t x156 = INT32_MIN;

	t36 = (x153|((x154/x155)==x156));

	if (t36 != 3003) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MIN;
	int16_t x158 = 9;
	uint8_t x159 = 2U;
	int64_t x160 = INT64_MIN;
	volatile int32_t t37 = 25663216;

	t37 = (x157|((x158/x159)==x160));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = -86600705;
	volatile int32_t x162 = -1;
	uint32_t x163 = 1640341U;
	int16_t x164 = -12762;
	int32_t t38 = 4;

	t38 = (x161|((x162/x163)==x164));

	if (t38 != -86600705) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x165 = UINT16_MAX;
	int8_t x167 = INT8_MIN;
	static volatile int32_t t39 = 1;

	t39 = (x165|((x166/x167)==x168));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MIN;
	int16_t x171 = -1;
	int32_t x172 = -1;
	volatile int32_t t40 = -1906;

	t40 = (x169|((x170/x171)==x172));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = INT32_MAX;
	int16_t x175 = INT16_MIN;
	int64_t x176 = INT64_MIN;
	int32_t t41 = INT32_MAX;

	t41 = (x173|((x174/x175)==x176));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = INT16_MIN;
	uint16_t x178 = 4U;
	uint8_t x179 = UINT8_MAX;
	int8_t x180 = INT8_MAX;
	int32_t t42 = 1;

	t42 = (x177|((x178/x179)==x180));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = 19;
	static volatile uint64_t x184 = 18556957563LLU;

	t43 = (x181|((x182/x183)==x184));

	if (t43 != 19) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MAX;
	volatile int16_t x191 = -1;
	uint32_t x192 = 567U;

	t44 = (x189|((x190/x191)==x192));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x194 = -12438;
	static int8_t x195 = INT8_MIN;
	uint8_t x196 = 22U;

	t45 = (x193|((x194/x195)==x196));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x197 = -1LL;
	volatile uint8_t x198 = 7U;
	int16_t x199 = INT16_MIN;
	int32_t x200 = 736;

	t46 = (x197|((x198/x199)==x200));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = UINT32_MAX;
	uint32_t x202 = 1U;
	uint32_t x203 = UINT32_MAX;
	static int8_t x204 = INT8_MIN;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (x201|((x202/x203)==x204));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x205 = 7LLU;
	uint8_t x206 = UINT8_MAX;
	int64_t x208 = INT64_MIN;
	uint64_t t48 = 227640494550958LLU;

	t48 = (x205|((x206/x207)==x208));

	if (t48 != 7LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x209 = UINT64_MAX;
	static int32_t x210 = -1;
	int16_t x211 = INT16_MAX;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x209|((x210/x211)==x212));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x213 = 7U;
	int8_t x214 = -29;
	volatile uint32_t x215 = UINT32_MAX;
	volatile uint64_t x216 = 5958460085LLU;
	volatile int32_t t50 = -373122;

	t50 = (x213|((x214/x215)==x216));

	if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x217 = 39926651LLU;
	int64_t x218 = INT64_MIN;
	int16_t x220 = INT16_MIN;
	volatile uint64_t t51 = 631401996038LLU;

	t51 = (x217|((x218/x219)==x220));

	if (t51 != 39926651LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = UINT64_MAX;
	static uint8_t x222 = UINT8_MAX;
	int16_t x223 = -1016;
	static uint8_t x224 = 4U;
	uint64_t t52 = UINT64_MAX;

	t52 = (x221|((x222/x223)==x224));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x225 = -1;
	int8_t x226 = 6;
	volatile int64_t x227 = INT64_MIN;
	volatile int32_t x228 = INT32_MIN;

	t53 = (x225|((x226/x227)==x228));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MIN;
	uint16_t x230 = 30957U;
	static uint16_t x231 = UINT16_MAX;
	int64_t x232 = -869840396LL;
	int64_t t54 = INT64_MIN;

	t54 = (x229|((x230/x231)==x232));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x234 = INT64_MIN;
	volatile int32_t t55 = 310544;

	t55 = (x233|((x234/x235)==x236));

	if (t55 != -40) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x237 = -4192073802444594LL;
	volatile int8_t x238 = INT8_MIN;
	int64_t x239 = INT64_MIN;
	static uint32_t x240 = 2953U;
	int64_t t56 = -106LL;

	t56 = (x237|((x238/x239)==x240));

	if (t56 != -4192073802444594LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x242 = UINT8_MAX;
	int16_t x243 = -1;
	int64_t t57 = INT64_MIN;

	t57 = (x241|((x242/x243)==x244));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x245 = 38U;
	int16_t x246 = -7119;
	uint64_t x247 = UINT64_MAX;
	int8_t x248 = INT8_MIN;
	static volatile int32_t t58 = 145761127;

	t58 = (x245|((x246/x247)==x248));

	if (t58 != 38) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = INT16_MAX;
	uint64_t x250 = 395LLU;
	int32_t x251 = 40862;
	int32_t x252 = -5;

	t59 = (x249|((x250/x251)==x252));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x253 = INT8_MAX;
	volatile int8_t x254 = INT8_MAX;
	uint32_t x255 = UINT32_MAX;
	uint64_t x256 = 33482931LLU;
	int32_t t60 = 589488442;

	t60 = (x253|((x254/x255)==x256));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x258 = -1;
	int8_t x260 = INT8_MIN;
	uint32_t t61 = 4145U;

	t61 = (x257|((x258/x259)==x260));

	if (t61 != 30000U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x261 = 1425190656655LLU;
	static uint8_t x262 = 9U;
	uint16_t x263 = 4088U;
	int32_t x264 = -1;
	volatile uint64_t t62 = 46904697621LLU;

	t62 = (x261|((x262/x263)==x264));

	if (t62 != 1425190656655LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x265 = 1;
	int64_t x266 = INT64_MIN;
	static uint16_t x267 = 5U;
	uint32_t x268 = 0U;

	t63 = (x265|((x266/x267)==x268));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x274 = -12469971;
	int8_t x276 = INT8_MAX;
	int32_t t64 = INT32_MAX;

	t64 = (x273|((x274/x275)==x276));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x277 = UINT32_MAX;
	static int16_t x278 = -14624;
	int64_t x279 = INT64_MIN;
	uint32_t t65 = UINT32_MAX;

	t65 = (x277|((x278/x279)==x280));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = INT32_MIN;
	int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MIN;
	int32_t t66 = INT32_MIN;

	t66 = (x285|((x286/x287)==x288));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x289 = -1LL;
	volatile int8_t x290 = INT8_MIN;
	uint8_t x291 = UINT8_MAX;
	int64_t t67 = 458866LL;

	t67 = (x289|((x290/x291)==x292));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = 0;
	int16_t x294 = 5;
	volatile int8_t x295 = INT8_MIN;
	int64_t x296 = 5LL;
	int32_t t68 = -4300;

	t68 = (x293|((x294/x295)==x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x297 = -14;
	static volatile int16_t x298 = INT16_MAX;
	uint16_t x299 = 3U;
	int64_t x300 = INT64_MAX;
	volatile int32_t t69 = 1009;

	t69 = (x297|((x298/x299)==x300));

	if (t69 != -14) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x301 = INT16_MAX;
	volatile uint8_t x303 = 2U;
	int16_t x304 = INT16_MIN;
	int32_t t70 = -5;

	t70 = (x301|((x302/x303)==x304));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = -1;
	static volatile int16_t x307 = -1;
	int64_t x308 = -1LL;
	int32_t t71 = 6138466;

	t71 = (x305|((x306/x307)==x308));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x310 = 1;
	uint16_t x311 = 11587U;
	int64_t x312 = INT64_MIN;
	static volatile uint32_t t72 = UINT32_MAX;

	t72 = (x309|((x310/x311)==x312));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x313 = UINT32_MAX;
	static int32_t x314 = 399;
	static volatile uint16_t x315 = UINT16_MAX;
	volatile int64_t x316 = -73231301971205LL;
	uint32_t t73 = UINT32_MAX;

	t73 = (x313|((x314/x315)==x316));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x317 = INT8_MIN;
	uint64_t x318 = UINT64_MAX;
	uint64_t x319 = 442LLU;
	int16_t x320 = -6;
	volatile int32_t t74 = 819;

	t74 = (x317|((x318/x319)==x320));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x321 = 4U;
	static volatile int8_t x322 = 1;
	int16_t x323 = INT16_MIN;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t75 = -272623;

	t75 = (x321|((x322/x323)==x324));

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = INT32_MIN;
	volatile uint16_t x330 = 1U;
	int8_t x331 = -1;
	int8_t x332 = INT8_MAX;
	volatile int32_t t76 = INT32_MIN;

	t76 = (x329|((x330/x331)==x332));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x333 = UINT64_MAX;
	int16_t x334 = 141;
	int16_t x336 = -1;

	t77 = (x333|((x334/x335)==x336));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = INT32_MIN;
	static uint64_t x338 = 10815234015LLU;
	uint32_t x339 = 793830U;
	int32_t t78 = INT32_MIN;

	t78 = (x337|((x338/x339)==x340));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x341 = -1;
	int8_t x343 = INT8_MIN;
	int32_t x344 = -1;
	int32_t t79 = 3815276;

	t79 = (x341|((x342/x343)==x344));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x345 = INT32_MIN;
	int64_t x346 = -1LL;
	volatile uint8_t x347 = 1U;
	static int16_t x348 = INT16_MIN;
	int32_t t80 = INT32_MIN;

	t80 = (x345|((x346/x347)==x348));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x351 = INT8_MIN;
	int64_t t81 = INT64_MIN;

	t81 = (x349|((x350/x351)==x352));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x353 = UINT16_MAX;
	uint8_t x354 = 28U;
	int32_t x355 = INT32_MAX;
	volatile int32_t x356 = INT32_MAX;
	static int32_t t82 = 206;

	t82 = (x353|((x354/x355)==x356));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x361 = -1;
	int16_t x364 = INT16_MAX;
	volatile int32_t t83 = 804219;

	t83 = (x361|((x362/x363)==x364));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x365 = 415;
	int32_t x366 = 4;
	int32_t x367 = 1631;
	int32_t t84 = 4622;

	t84 = (x365|((x366/x367)==x368));

	if (t84 != 415) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x369 = -20832055933236LL;
	static int32_t x370 = INT32_MIN;
	int64_t x372 = -1LL;
	int64_t t85 = 8500454503LL;

	t85 = (x369|((x370/x371)==x372));

	if (t85 != -20832055933236LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x381 = UINT32_MAX;
	volatile uint64_t x382 = 1LLU;
	int32_t x383 = -1;

	t86 = (x381|((x382/x383)==x384));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x387 = 11U;
	uint32_t x388 = 200188U;
	volatile int32_t t87 = -139421;

	t87 = (x385|((x386/x387)==x388));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x389 = INT64_MIN;
	uint32_t x390 = 197352262U;
	volatile uint8_t x391 = 14U;
	int64_t t88 = INT64_MIN;

	t88 = (x389|((x390/x391)==x392));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x393 = -179837698;
	int32_t x394 = -1;
	volatile int64_t x395 = INT64_MIN;
	static volatile int64_t x396 = 9674542867892979LL;
	static int32_t t89 = -17;

	t89 = (x393|((x394/x395)==x396));

	if (t89 != -179837698) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x397 = -8062583LL;
	volatile int8_t x398 = INT8_MIN;
	uint8_t x399 = UINT8_MAX;
	static uint8_t x400 = 33U;
	static int64_t t90 = -7193480390LL;

	t90 = (x397|((x398/x399)==x400));

	if (t90 != -8062583LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x401 = 710898063U;
	int16_t x402 = 1;
	int16_t x403 = INT16_MAX;
	int32_t x404 = 161;
	static volatile uint32_t t91 = 1319018620U;

	t91 = (x401|((x402/x403)==x404));

	if (t91 != 710898063U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x406 = 18778LL;
	static volatile uint16_t x407 = 22U;
	static int32_t x408 = INT32_MIN;
	volatile uint64_t t92 = 771172415732412LLU;

	t92 = (x405|((x406/x407)==x408));

	if (t92 != 150475763LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x409 = -1661LL;
	int64_t x410 = INT64_MIN;
	uint8_t x412 = UINT8_MAX;
	int64_t t93 = -4149317272222LL;

	t93 = (x409|((x410/x411)==x412));

	if (t93 != -1661LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x413 = 26158U;
	static volatile int8_t x414 = INT8_MAX;
	volatile uint32_t x415 = 1167U;
	int16_t x416 = -1;
	volatile int32_t t94 = 2;

	t94 = (x413|((x414/x415)==x416));

	if (t94 != 26158) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x417 = UINT32_MAX;
	volatile uint64_t x418 = UINT64_MAX;
	volatile int32_t x419 = INT32_MAX;
	volatile int8_t x420 = -1;
	uint32_t t95 = UINT32_MAX;

	t95 = (x417|((x418/x419)==x420));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x422 = 1489254877889996LL;
	static int16_t x423 = INT16_MAX;
	int16_t x424 = INT16_MIN;
	volatile int32_t t96 = 1;

	t96 = (x421|((x422/x423)==x424));

	if (t96 != 6229649) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = -1;
	int8_t x426 = INT8_MIN;
	volatile int32_t t97 = -107111598;

	t97 = (x425|((x426/x427)==x428));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x432 = 37;
	static volatile int32_t t98 = 28814;

	t98 = (x429|((x430/x431)==x432));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x433 = INT32_MAX;
	uint32_t x434 = 77225U;
	int16_t x435 = -1152;
	static uint64_t x436 = UINT64_MAX;
	volatile int32_t t99 = INT32_MAX;

	t99 = (x433|((x434/x435)==x436));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

