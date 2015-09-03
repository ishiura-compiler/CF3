#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = 0;
int64_t x5 = -1LL;
static uint64_t x6 = 568278960187LLU;
static volatile int64_t x10 = -1LL;
static uint16_t x12 = 8U;
volatile int64_t t3 = 906734245934056LL;
int16_t x18 = -1;
int8_t x27 = 15;
static int16_t x39 = INT16_MIN;
int16_t x47 = -11;
volatile int64_t x49 = INT64_MAX;
static uint8_t x54 = 31U;
volatile int8_t x56 = -1;
int16_t x60 = INT16_MIN;
static int16_t x61 = 1;
int8_t x63 = 1;
volatile int8_t x72 = 1;
uint64_t x81 = 433705743710109LLU;
uint16_t x84 = 2U;
static int64_t x90 = 47857834LL;
volatile uint32_t x104 = 1513957U;
uint32_t t23 = 876795986U;
int64_t t24 = 51891LL;
uint64_t t26 = 24980407267LLU;
volatile int8_t x118 = INT8_MAX;
int8_t x136 = -1;
int64_t t29 = -508612745299511LL;
int16_t x137 = INT16_MAX;
static volatile uint16_t x140 = 41U;
static uint16_t x144 = UINT16_MAX;
uint8_t x147 = 2U;
int8_t x157 = INT8_MIN;
volatile int32_t t37 = -5;
static int32_t x169 = INT32_MIN;
static int8_t x172 = INT8_MIN;
int64_t x179 = 12677815LL;
uint8_t x181 = 0U;
volatile uint32_t x182 = UINT32_MAX;
int64_t x188 = INT64_MIN;
volatile int32_t t44 = 106581;
int8_t x198 = 35;
uint8_t x210 = UINT8_MAX;
int8_t x212 = INT8_MIN;
uint16_t x217 = 10644U;
uint64_t x219 = UINT64_MAX;
int32_t x220 = INT32_MIN;
volatile uint32_t x223 = UINT32_MAX;
static volatile int32_t x233 = -1;
volatile uint32_t x234 = 942U;
uint8_t x240 = 16U;
static int16_t x245 = -1396;
int64_t t56 = 7031058054469567LL;
uint8_t x250 = 14U;
volatile int32_t t57 = 3380;
static int32_t x255 = 10082;
int32_t x260 = INT32_MIN;
static volatile uint64_t t59 = 154LLU;
uint32_t x261 = UINT32_MAX;
int16_t x262 = -992;
uint64_t x264 = 6LLU;
uint64_t x275 = 1283620LLU;
int32_t x277 = INT32_MIN;
volatile uint8_t x279 = 8U;
int16_t x280 = -1;
int16_t x281 = INT16_MIN;
int8_t x284 = -2;
int64_t t65 = 1041663914554649288LL;
uint64_t t66 = 1460574LLU;
volatile int64_t x294 = INT64_MAX;
static int32_t x296 = -1;
static int16_t x304 = INT16_MIN;
static int64_t t69 = -1052532705813LL;
int32_t x305 = -1;
uint32_t x309 = 132126096U;
static int64_t x312 = -1LL;
volatile int64_t t71 = 33144921658521804LL;
int8_t x314 = INT8_MIN;
uint64_t t72 = 1874LLU;
uint64_t x317 = 676296992450LLU;
int16_t x320 = INT16_MAX;
uint16_t x322 = UINT16_MAX;
volatile uint32_t t74 = 344U;
int32_t x325 = -959725951;
static volatile uint64_t x332 = 7487685996LLU;
static int32_t x336 = INT32_MIN;
int64_t t78 = 58997946130516LL;
uint8_t x341 = 0U;
int16_t x346 = -1;
static int64_t x347 = 221986991838812479LL;
volatile int64_t t80 = 88354145318614206LL;
int8_t x351 = -1;
volatile int64_t t81 = -1011LL;
int32_t x354 = INT32_MIN;
volatile uint64_t x358 = 1022801LLU;
int64_t x363 = -920821097152279059LL;
int8_t x366 = -1;
static uint32_t x371 = 192128U;
int16_t x372 = -2626;
static volatile uint64_t t87 = 7150965139LLU;
static int8_t x396 = INT8_MAX;
int64_t t89 = 973591LL;
volatile int32_t x400 = 0;
uint8_t x403 = 116U;
static uint64_t x404 = UINT64_MAX;
volatile int8_t x407 = -1;
int64_t t92 = -7327462170LL;
int32_t t93 = -1188;
int32_t x413 = INT32_MIN;
int64_t x416 = -1LL;
static uint64_t x418 = 1827624LLU;
uint16_t x423 = 3120U;
static uint64_t t96 = 3124824352840337668LLU;
uint64_t x427 = UINT64_MAX;
uint64_t t97 = 2613120963615LLU;
int16_t x433 = INT16_MIN;
uint16_t x434 = 5U;
static uint32_t x436 = UINT32_MAX;


void f0(void) {
	volatile int64_t x2 = 0LL;
	int16_t x3 = -1;
	int8_t x4 = -38;
	volatile int64_t t0 = -736064960538LL;

	t0 = (x1*((x2%x3)&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = -1LL;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 2526LLU;

	t1 = (x5*((x6%x7)&x8));

	if (t1 != 18446743505430591429LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 14495U;
	static int16_t x11 = 4597;
	volatile int64_t t2 = -7521827977983725LL;

	t2 = (x9*((x10%x11)&x12));

	if (t2 != 115960LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = 28294123LL;
	int64_t x14 = -1LL;
	uint32_t x15 = 14U;
	static volatile uint16_t x16 = 5U;

	t3 = (x13*((x14%x15)&x16));

	if (t3 != 141470615LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 0U;
	int16_t x19 = INT16_MIN;
	int8_t x20 = INT8_MAX;
	int32_t t4 = 11409601;

	t4 = (x17*((x18%x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 45U;
	volatile int64_t x22 = INT64_MIN;
	int64_t x23 = INT64_MIN;
	volatile int8_t x24 = -1;
	volatile int64_t t5 = -586814251560460LL;

	t5 = (x21*((x22%x23)&x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = INT8_MAX;
	uint8_t x26 = 42U;
	int64_t x28 = INT64_MAX;
	int64_t t6 = -843LL;

	t6 = (x25*((x26%x27)&x28));

	if (t6 != 1524LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 10U;
	int64_t x30 = INT64_MAX;
	int16_t x31 = INT16_MIN;
	volatile int64_t x32 = 1858844LL;
	int64_t t7 = -24452LL;

	t7 = (x29*((x30%x31)&x32));

	if (t7 != 238360LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	int8_t x34 = -59;
	volatile int8_t x35 = INT8_MIN;
	uint64_t x36 = UINT64_MAX;
	static volatile uint64_t t8 = 7209787LLU;

	t8 = (x33*((x34%x35)&x36));

	if (t8 != 18446744073709536571LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	uint64_t x38 = UINT64_MAX;
	int32_t x40 = 235330096;
	volatile uint64_t t9 = 16907LLU;

	t9 = (x37*((x38%x39)&x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = 14;
	volatile int32_t x46 = INT32_MIN;
	int32_t x48 = -40;
	int32_t t10 = 1;

	t10 = (x45*((x46%x47)&x48));

	if (t10 != -560) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x50 = 63209248299LL;
	int64_t x51 = -1LL;
	int16_t x52 = INT16_MIN;
	int64_t t11 = 926LL;

	t11 = (x49*((x50%x51)&x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 860439U;
	int32_t x55 = -1;
	volatile uint32_t t12 = 300944U;

	t12 = (x53*((x54%x55)&x56));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -25;
	volatile int16_t x58 = 91;
	uint8_t x59 = UINT8_MAX;
	volatile int32_t t13 = -176;

	t13 = (x57*((x58%x59)&x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x62 = UINT16_MAX;
	static int8_t x64 = INT8_MAX;
	int32_t t14 = 81901072;

	t14 = (x61*((x62%x63)&x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	volatile uint16_t x66 = 3826U;
	volatile int64_t x67 = -12500958LL;
	uint16_t x68 = 21624U;
	int64_t t15 = 639LL;

	t15 = (x65*((x66%x67)&x68));

	if (t15 != 144272LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MAX;
	static int16_t x70 = -1;
	int16_t x71 = -30;
	int32_t t16 = -51966673;

	t16 = (x69*((x70%x71)&x72));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = 9;
	uint16_t x74 = UINT16_MAX;
	uint8_t x75 = 1U;
	static uint16_t x76 = 517U;
	volatile int32_t t17 = -183;

	t17 = (x73*((x74%x75)&x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = INT8_MAX;
	static volatile uint32_t x78 = UINT32_MAX;
	int32_t x79 = INT32_MIN;
	int32_t x80 = INT32_MIN;
	volatile uint32_t t18 = 284335578U;

	t18 = (x77*((x78%x79)&x80));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = 1689;
	volatile int64_t x83 = -1LL;
	volatile uint64_t t19 = 16244033896615642LLU;

	t19 = (x81*((x82%x83)&x84));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x85 = INT32_MIN;
	uint8_t x86 = UINT8_MAX;
	int64_t x87 = INT64_MIN;
	int64_t x88 = -4458427022962575312LL;
	volatile int64_t t20 = 214329LL;

	t20 = (x85*((x86%x87)&x88));

	if (t20 != -103079215104LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x89 = 38937553397202773LLU;
	volatile int64_t x91 = 2878717178LL;
	uint64_t x92 = 46511336138867198LLU;
	static volatile uint64_t t21 = 21166032269168491LLU;

	t21 = (x89*((x90%x91)&x92));

	if (t21 != 2208245471526456946LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -3140;
	static int8_t x98 = INT8_MIN;
	int16_t x99 = INT16_MIN;
	uint64_t x100 = 132753842LLU;
	static volatile uint64_t t22 = 6160177786841LLU;

	t22 = (x97*((x98%x99)&x100));

	if (t22 != 18446743656862644736LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = -3;
	int8_t x102 = INT8_MIN;
	uint8_t x103 = 1U;

	t23 = (x101*((x102%x103)&x104));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	static int64_t x106 = 4779823173699LL;
	volatile int8_t x107 = INT8_MIN;
	volatile int64_t x108 = -20677223617211195LL;

	t24 = (x105*((x106%x107)&x108));

	if (t24 != -2129920LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x109 = -1;
	uint64_t x110 = 382294330LLU;
	volatile int16_t x111 = INT16_MAX;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t25 = 450LLU;

	t25 = (x109*((x110%x111)&x112));

	if (t25 != 18446744073709549875LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x113 = UINT16_MAX;
	uint64_t x114 = 936415374LLU;
	int32_t x115 = INT32_MIN;
	int16_t x116 = 4;

	t26 = (x113*((x114%x115)&x116));

	if (t26 != 262140LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = -249;
	volatile int64_t x119 = -4658408642LL;
	volatile int8_t x120 = INT8_MIN;
	static volatile int64_t t27 = 388162946478LL;

	t27 = (x117*((x118%x119)&x120));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MIN;
	uint8_t x130 = 101U;
	static uint64_t x131 = 9LLU;
	static int32_t x132 = 387;
	static volatile uint64_t t28 = 34026597586995LLU;

	t28 = (x129*((x130%x131)&x132));

	if (t28 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = 39882923066480LL;
	int8_t x134 = 6;
	static int8_t x135 = INT8_MIN;

	t29 = (x133*((x134%x135)&x136));

	if (t29 != 239297538398880LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x138 = 660237197U;
	uint16_t x139 = 1U;
	volatile uint32_t t30 = 1U;

	t30 = (x137*((x138%x139)&x140));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MIN;
	uint32_t x142 = 18491U;
	static int32_t x143 = 526;
	uint32_t t31 = 107382U;

	t31 = (x141*((x142%x143)&x144));

	if (t31 != 4294956928U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = INT16_MIN;
	int64_t x146 = INT64_MAX;
	volatile int64_t x148 = -540137212752768LL;
	int64_t t32 = 7LL;

	t32 = (x145*((x146%x147)&x148));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = -1;
	int32_t x150 = INT32_MAX;
	int32_t x151 = -1;
	volatile int16_t x152 = INT16_MIN;
	int32_t t33 = -12640;

	t33 = (x149*((x150%x151)&x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = INT32_MIN;
	volatile uint8_t x154 = 10U;
	int8_t x155 = INT8_MIN;
	uint32_t x156 = 52060U;
	uint32_t t34 = 764311163U;

	t34 = (x153*((x154%x155)&x156));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x158 = 57U;
	int32_t x159 = -13886;
	volatile int16_t x160 = INT16_MIN;
	int32_t t35 = -5108;

	t35 = (x157*((x158%x159)&x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x161 = -37;
	static int32_t x162 = INT32_MAX;
	int64_t x163 = INT64_MAX;
	static uint16_t x164 = UINT16_MAX;
	volatile int64_t t36 = 326433725673870479LL;

	t36 = (x161*((x162%x163)&x164));

	if (t36 != -2424795LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = INT16_MIN;
	int32_t x166 = -98627155;
	int16_t x167 = -7650;
	uint16_t x168 = 38U;

	t37 = (x165*((x166%x167)&x168));

	if (t37 != -1179648) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x170 = 0;
	uint64_t x171 = 788LLU;
	volatile uint64_t t38 = 3LLU;

	t38 = (x169*((x170%x171)&x172));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x173 = -2;
	static int16_t x174 = INT16_MAX;
	int32_t x175 = INT32_MIN;
	static int64_t x176 = INT64_MIN;
	int64_t t39 = 90LL;

	t39 = (x173*((x174%x175)&x176));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int32_t x178 = 2;
	volatile int16_t x180 = 1;
	volatile int64_t t40 = 2552402LL;

	t40 = (x177*((x178%x179)&x180));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x183 = 398752170U;
	int32_t x184 = -11861806;
	uint32_t t41 = 28802688U;

	t41 = (x181*((x182%x183)&x184));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x185 = INT64_MIN;
	int32_t x186 = -11650;
	int16_t x187 = -1;
	int64_t t42 = 664710859559314825LL;

	t42 = (x185*((x186%x187)&x188));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x189 = INT64_MIN;
	int32_t x190 = INT32_MAX;
	uint8_t x191 = 7U;
	uint64_t x192 = 1574258184234089LLU;
	uint64_t t43 = 4134411870812206LLU;

	t43 = (x189*((x190%x191)&x192));

	if (t43 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x193 = INT16_MIN;
	volatile int32_t x194 = -1;
	int32_t x195 = INT32_MAX;
	int8_t x196 = 34;

	t44 = (x193*((x194%x195)&x196));

	if (t44 != -1114112) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = 32;
	uint16_t x199 = 488U;
	int64_t x200 = 4006808380LL;
	int64_t t45 = -4108523LL;

	t45 = (x197*((x198%x199)&x200));

	if (t45 != 1024LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = 1171914012LLU;
	static volatile int32_t x202 = 1006006;
	int32_t x203 = -4263707;
	int16_t x204 = INT16_MIN;
	uint64_t t46 = 769020LLU;

	t46 = (x201*((x202%x203)&x204));

	if (t46 != 1152038350356480LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MAX;
	static uint64_t x206 = 28513910496LLU;
	int32_t x207 = 956;
	uint8_t x208 = 2U;
	volatile uint64_t t47 = 7774690140837288375LLU;

	t47 = (x205*((x206%x207)&x208));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = INT16_MAX;
	int8_t x211 = INT8_MIN;
	int32_t t48 = -15613986;

	t48 = (x209*((x210%x211)&x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x218 = -1;
	static volatile uint64_t t49 = 1LLU;

	t49 = (x217*((x218%x219)&x220));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = -1;
	uint8_t x222 = 2U;
	static int8_t x224 = 19;
	uint32_t t50 = 51441U;

	t50 = (x221*((x222%x223)&x224));

	if (t50 != 4294967294U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = INT64_MIN;
	static uint64_t x226 = 2706034557398060479LLU;
	static int64_t x227 = -5847440LL;
	uint64_t x228 = 3997008LLU;
	static volatile uint64_t t51 = 5737553LLU;

	t51 = (x225*((x226%x227)&x228));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x229 = -372;
	volatile int64_t x230 = INT64_MIN;
	uint16_t x231 = UINT16_MAX;
	int64_t x232 = -1LL;
	int64_t t52 = 8938LL;

	t52 = (x229*((x230%x231)&x232));

	if (t52 != 12189696LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x235 = INT8_MIN;
	uint8_t x236 = 80U;
	static uint32_t t53 = 7689U;

	t53 = (x233*((x234%x235)&x236));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x237 = UINT16_MAX;
	int16_t x238 = -1;
	uint64_t x239 = 266757901520879195LLU;
	uint64_t t54 = 178500883016311667LLU;

	t54 = (x237*((x238%x239)&x240));

	if (t54 != 1048560LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = -12;
	uint16_t x242 = 1U;
	int8_t x243 = 27;
	volatile uint8_t x244 = 62U;
	int32_t t55 = -6;

	t55 = (x241*((x242%x243)&x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x246 = 117U;
	volatile int64_t x247 = INT64_MAX;
	uint32_t x248 = 2501U;

	t56 = (x245*((x246%x247)&x248));

	if (t56 != -96324LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x249 = -6;
	static volatile int32_t x251 = -1;
	uint8_t x252 = 107U;

	t57 = (x249*((x250%x251)&x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = 174U;
	int32_t x254 = INT32_MAX;
	int32_t x256 = 16;
	int32_t t58 = 7579;

	t58 = (x253*((x254%x255)&x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x257 = -1;
	int64_t x258 = INT64_MAX;
	uint64_t x259 = UINT64_MAX;

	t59 = (x257*((x258%x259)&x260));

	if (t59 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x263 = 16571526911876522LLU;
	static uint64_t t60 = 2033521072553LLU;

	t60 = (x261*((x262%x263)&x264));

	if (t60 != 25769803770LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x265 = 209643136959288LLU;
	int32_t x266 = -1;
	static int64_t x267 = INT64_MAX;
	int64_t x268 = -882382722341LL;
	volatile uint64_t t61 = 3LLU;

	t61 = (x265*((x266%x267)&x268));

	if (t61 != 17187417916882530536LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x269 = -1LL;
	int16_t x270 = -1;
	int8_t x271 = 1;
	uint8_t x272 = 1U;
	volatile int64_t t62 = -272746192220096979LL;

	t62 = (x269*((x270%x271)&x272));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = INT32_MIN;
	static volatile int32_t x274 = -1;
	static uint16_t x276 = UINT16_MAX;
	static uint64_t t63 = 2788859886037012191LLU;

	t63 = (x273*((x274%x275)&x276));

	if (t63 != 18446730529530183680LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x278 = INT32_MIN;
	static int32_t t64 = -3924134;

	t64 = (x277*((x278%x279)&x280));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x282 = -1;
	static int64_t x283 = INT64_MIN;

	t65 = (x281*((x282%x283)&x284));

	if (t65 != 65536LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = INT64_MIN;
	uint32_t x286 = UINT32_MAX;
	int8_t x287 = INT8_MAX;
	uint64_t x288 = 44992794368013268LLU;

	t66 = (x285*((x286%x287)&x288));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = INT32_MIN;
	uint64_t x290 = 8610176337091181362LLU;
	int8_t x291 = -1;
	int8_t x292 = INT8_MAX;
	volatile uint64_t t67 = 543625900613551606LLU;

	t67 = (x289*((x290%x291)&x292));

	if (t67 != 18446743966335369216LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x293 = 32628LLU;
	int32_t x295 = INT32_MIN;
	static uint64_t t68 = 1503239800LLU;

	t68 = (x293*((x294%x295)&x296));

	if (t68 != 70068096434316LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x301 = -1;
	static int8_t x302 = INT8_MIN;
	int64_t x303 = 3541808752780LL;

	t69 = (x301*((x302%x303)&x304));

	if (t69 != 32768LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x306 = INT16_MIN;
	uint8_t x307 = 2U;
	int16_t x308 = 0;
	volatile int32_t t70 = -17958514;

	t70 = (x305*((x306%x307)&x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x310 = -1LL;
	int16_t x311 = INT16_MIN;

	t71 = (x309*((x310%x311)&x312));

	if (t71 != -132126096LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x313 = 3LLU;
	uint16_t x315 = UINT16_MAX;
	static int8_t x316 = 63;

	t72 = (x313*((x314%x315)&x316));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x318 = INT16_MIN;
	int32_t x319 = INT32_MIN;
	uint64_t t73 = 6541537572329LLU;

	t73 = (x317*((x318%x319)&x320));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x321 = 151;
	uint32_t x323 = 14U;
	static int32_t x324 = -1;

	t74 = (x321*((x322%x323)&x324));

	if (t74 != 151U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x326 = 58001851LLU;
	int32_t x327 = -992147288;
	int16_t x328 = INT16_MIN;
	volatile uint64_t t75 = 4548624954711LLU;

	t75 = (x325*((x326%x327)&x328));

	if (t75 != 18391080582776160256LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x329 = INT8_MIN;
	uint8_t x330 = UINT8_MAX;
	int32_t x331 = 215714;
	volatile uint64_t t76 = 8106101LLU;

	t76 = (x329*((x330%x331)&x332));

	if (t76 != 18446744073709537792LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x333 = INT16_MAX;
	volatile uint16_t x334 = 42U;
	static uint8_t x335 = 1U;
	volatile int32_t t77 = 3128939;

	t77 = (x333*((x334%x335)&x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = -1;
	int16_t x338 = -1;
	int64_t x339 = INT64_MIN;
	int16_t x340 = INT16_MIN;

	t78 = (x337*((x338%x339)&x340));

	if (t78 != 32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x342 = UINT32_MAX;
	uint32_t x343 = UINT32_MAX;
	static volatile uint8_t x344 = 13U;
	volatile uint32_t t79 = 2U;

	t79 = (x341*((x342%x343)&x344));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x345 = 237U;
	volatile int32_t x348 = INT32_MIN;

	t80 = (x345*((x346%x347)&x348));

	if (t80 != -508953624576LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = INT16_MAX;
	int64_t x350 = 542113703LL;
	int64_t x352 = INT64_MIN;

	t81 = (x349*((x350%x351)&x352));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x353 = -15571;
	uint8_t x355 = 2U;
	int8_t x356 = -2;
	int32_t t82 = 786;

	t82 = (x353*((x354%x355)&x356));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x357 = INT64_MIN;
	int8_t x359 = INT8_MAX;
	int64_t x360 = INT64_MAX;
	volatile uint64_t t83 = 0LLU;

	t83 = (x357*((x358%x359)&x360));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x361 = -1LL;
	uint64_t x362 = 13937LLU;
	static uint8_t x364 = 6U;
	uint64_t t84 = 49LLU;

	t84 = (x361*((x362%x363)&x364));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x365 = 675U;
	int8_t x367 = -1;
	volatile int64_t x368 = 8512727295388LL;
	int64_t t85 = 5667LL;

	t85 = (x365*((x366%x367)&x368));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = INT8_MIN;
	int16_t x370 = -188;
	volatile uint32_t t86 = 24936U;

	t86 = (x369*((x370%x371)&x372));

	if (t86 != 4277665280U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x373 = INT16_MIN;
	int64_t x374 = -40525326401968127LL;
	int16_t x375 = -1;
	static uint64_t x376 = 7905812777898LLU;

	t87 = (x373*((x374%x375)&x376));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x381 = INT64_MIN;
	int32_t x382 = INT32_MIN;
	volatile int16_t x383 = INT16_MIN;
	uint16_t x384 = 0U;
	static volatile int64_t t88 = -996678295986749174LL;

	t88 = (x381*((x382%x383)&x384));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x393 = -1179LL;
	int8_t x394 = 5;
	static uint8_t x395 = 124U;

	t89 = (x393*((x394%x395)&x396));

	if (t89 != -5895LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x397 = INT32_MIN;
	volatile uint16_t x398 = 18586U;
	int8_t x399 = INT8_MIN;
	int32_t t90 = 4220;

	t90 = (x397*((x398%x399)&x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = -1;
	volatile uint64_t t91 = 13517LLU;

	t91 = (x401*((x402%x403)&x404));

	if (t91 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x405 = -23556436LL;
	volatile int64_t x406 = -1LL;
	static int8_t x408 = 1;

	t92 = (x405*((x406%x407)&x408));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x409 = UINT16_MAX;
	volatile int16_t x410 = -1;
	volatile int32_t x411 = -1;
	int16_t x412 = -6;

	t93 = (x409*((x410%x411)&x412));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x414 = 13477355528LLU;
	int64_t x415 = INT64_MIN;
	uint64_t t94 = 5004LLU;

	t94 = (x413*((x414%x415)&x416));

	if (t94 != 7951087532756697088LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x417 = 0U;
	int32_t x419 = INT32_MIN;
	int32_t x420 = INT32_MIN;
	volatile uint64_t t95 = 469LLU;

	t95 = (x417*((x418%x419)&x420));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x421 = -1;
	uint8_t x422 = UINT8_MAX;
	uint64_t x424 = 127810938739762LLU;

	t96 = (x421*((x422%x423)&x424));

	if (t96 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = 33;
	static uint32_t x426 = 1U;
	volatile int64_t x428 = 2LL;

	t97 = (x425*((x426%x427)&x428));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x429 = UINT8_MAX;
	int8_t x430 = -1;
	int16_t x431 = 2998;
	uint8_t x432 = 24U;
	volatile int32_t t98 = 7;

	t98 = (x429*((x430%x431)&x432));

	if (t98 != 6120) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x435 = INT32_MAX;
	uint32_t t99 = 4257U;

	t99 = (x433*((x434%x435)&x436));

	if (t99 != 4294803456U) { NG(); } else { ; }
	
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

