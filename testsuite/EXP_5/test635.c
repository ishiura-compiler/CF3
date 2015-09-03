#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = -1;
uint32_t x13 = 14U;
volatile int32_t t3 = 14;
int64_t x21 = INT64_MIN;
volatile int64_t t4 = 601257348303LL;
volatile int8_t x27 = 1;
int32_t x28 = 1623;
uint8_t x32 = 6U;
static volatile int32_t t6 = -14;
static int32_t x34 = -1;
int8_t x35 = -1;
volatile int32_t t7 = 1;
int32_t x37 = 13543;
static uint64_t x43 = 23LLU;
volatile uint32_t t11 = 1U;
static int32_t t12 = -2025;
static int16_t x59 = INT16_MIN;
int32_t t15 = 1510600;
volatile int8_t x88 = -1;
uint32_t x89 = 89735612U;
int64_t x91 = INT64_MIN;
int32_t x92 = -1;
int16_t x94 = 1;
int16_t x102 = -56;
int32_t x105 = -2760845;
static int64_t x109 = -1LL;
int32_t x111 = INT32_MIN;
static int32_t t25 = 75376;
int8_t x126 = INT8_MIN;
uint16_t x128 = 9129U;
int8_t x131 = -1;
int8_t x132 = INT8_MIN;
volatile int32_t t30 = -2;
static int32_t x137 = -1;
uint16_t x139 = 952U;
volatile int64_t x140 = -1LL;
static volatile uint16_t x142 = UINT16_MAX;
uint32_t x143 = 4421U;
int8_t x150 = -1;
int16_t x153 = INT16_MIN;
static int64_t x154 = 1084LL;
int8_t x163 = -1;
volatile int32_t t36 = 19905;
static uint16_t x170 = 3558U;
static int8_t x173 = INT8_MAX;
int64_t x175 = INT64_MAX;
static int8_t x182 = 10;
volatile int16_t x183 = INT16_MIN;
volatile int16_t x188 = INT16_MIN;
uint64_t x190 = 1857886890159402448LLU;
static volatile int64_t x203 = INT64_MIN;
volatile uint32_t t45 = 356586U;
static volatile uint32_t x205 = UINT32_MAX;
static int8_t x210 = INT8_MIN;
static volatile uint8_t x213 = 3U;
volatile uint8_t x217 = UINT8_MAX;
int16_t x220 = INT16_MAX;
static int16_t x223 = INT16_MIN;
static volatile int8_t x226 = -1;
volatile uint32_t t51 = 790536U;
volatile int8_t x230 = -1;
int16_t x231 = -1;
int32_t t52 = 7;
volatile uint8_t x234 = UINT8_MAX;
volatile int32_t t53 = 173;
int8_t x239 = -9;
volatile uint32_t x241 = UINT32_MAX;
int32_t x244 = INT32_MAX;
static uint64_t t56 = 13475423LLU;
int64_t x260 = INT64_MIN;
int32_t t59 = 4744;
volatile int64_t t60 = 23444LL;
static volatile int64_t x275 = -1LL;
volatile uint16_t x276 = UINT16_MAX;
static int16_t x283 = -1;
int32_t t64 = 2658;
int8_t x287 = INT8_MAX;
volatile int32_t t65 = 0;
static int8_t x294 = INT8_MIN;
int32_t x297 = INT32_MIN;
static int32_t t68 = -106;
static int32_t t69 = 146236;
int32_t t70 = -44;
volatile int32_t t71 = -1084323;
volatile uint32_t t75 = 659U;
int16_t x330 = INT16_MIN;
int8_t x332 = INT8_MIN;
volatile uint8_t x335 = 124U;
volatile int8_t x344 = INT8_MIN;
int8_t x347 = 1;
int64_t x353 = INT64_MAX;
int16_t x358 = 1;
int16_t x364 = INT16_MIN;
uint16_t x366 = UINT16_MAX;
volatile int32_t t85 = -154563765;
uint16_t x370 = UINT16_MAX;
static uint32_t x371 = 31560U;
static int32_t x373 = -1;
uint16_t x374 = UINT16_MAX;
int16_t x375 = -1;
int32_t t87 = -301;
int8_t x379 = INT8_MIN;
volatile int32_t t91 = 3437;
int32_t x394 = 144793373;
int16_t x396 = -1;
int32_t t93 = 8;
int64_t x405 = INT64_MIN;
uint32_t x411 = 14U;


void f0(void) {
	uint8_t x5 = UINT8_MAX;
	int32_t x6 = -3;
	int64_t x7 = INT64_MIN;
	int32_t t0 = 2;

	t0 = (x5&((x6/x7)<=x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = -1;
	volatile int32_t x10 = 19010;
	uint32_t x11 = 2488U;
	int32_t x12 = -1;
	volatile int32_t t1 = -72;

	t1 = (x9&((x10/x11)<=x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x14 = UINT8_MAX;
	int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MAX;
	volatile uint32_t t2 = 7659194U;

	t2 = (x13&((x14/x15)<=x16));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int8_t x18 = INT8_MIN;
	volatile uint32_t x19 = 113960950U;
	static int16_t x20 = INT16_MIN;

	t3 = (x17&((x18/x19)<=x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = INT16_MIN;
	static volatile uint16_t x23 = 1U;
	uint8_t x24 = UINT8_MAX;

	t4 = (x21&((x22/x23)<=x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = 2LL;
	int64_t x26 = -873829940LL;
	volatile int64_t t5 = 5580651LL;

	t5 = (x25&((x26/x27)<=x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	int32_t x30 = -1;
	int16_t x31 = INT16_MAX;

	t6 = (x29&((x30/x31)<=x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = 8;
	int64_t x36 = INT64_MAX;

	t7 = (x33&((x34/x35)<=x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x38 = -1;
	static int8_t x39 = -1;
	int16_t x40 = INT16_MIN;
	int32_t t8 = -94;

	t8 = (x37&((x38/x39)<=x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 9U;
	int64_t x42 = INT64_MIN;
	static volatile uint8_t x44 = UINT8_MAX;
	static volatile int32_t t9 = 2872;

	t9 = (x41&((x42/x43)<=x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x45 = 1639U;
	volatile int8_t x46 = -1;
	static int16_t x47 = 1295;
	int64_t x48 = -1LL;
	volatile int32_t t10 = -5083;

	t10 = (x45&((x46/x47)<=x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = UINT32_MAX;
	volatile int32_t x50 = -1;
	uint64_t x51 = 2573481040504047LLU;
	int32_t x52 = INT32_MAX;

	t11 = (x49&((x50/x51)<=x52));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	uint64_t x54 = 44866648062LLU;
	uint16_t x55 = 17U;
	volatile uint16_t x56 = 1U;

	t12 = (x53&((x54/x55)<=x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	volatile int16_t x58 = 671;
	int16_t x60 = 1;
	int64_t t13 = -4148062LL;

	t13 = (x57&((x58/x59)<=x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	int16_t x62 = -1;
	int32_t x63 = INT32_MAX;
	volatile int64_t x64 = -1LL;
	volatile int32_t t14 = 9;

	t14 = (x61&((x62/x63)<=x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = 66;
	int32_t x66 = 148819950;
	int16_t x67 = INT16_MAX;
	uint32_t x68 = 16U;

	t15 = (x65&((x66/x67)<=x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MAX;
	int8_t x70 = INT8_MAX;
	static int16_t x71 = 20;
	int32_t x72 = INT32_MIN;
	int32_t t16 = -1;

	t16 = (x69&((x70/x71)<=x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x77 = -1009834087346491374LL;
	int16_t x78 = -5449;
	uint32_t x79 = 1U;
	int8_t x80 = INT8_MIN;
	volatile int64_t t17 = -3109832102LL;

	t17 = (x77&((x78/x79)<=x80));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -218;
	volatile uint16_t x86 = UINT16_MAX;
	int16_t x87 = INT16_MIN;
	int32_t t18 = -1495;

	t18 = (x85&((x86/x87)<=x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x90 = -1;
	uint32_t t19 = 1769116427U;

	t19 = (x89&((x90/x91)<=x92));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = INT16_MAX;
	int8_t x95 = INT8_MIN;
	volatile int16_t x96 = -1;
	int32_t t20 = 3562;

	t20 = (x93&((x94/x95)<=x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 6U;
	uint16_t x98 = UINT16_MAX;
	static int64_t x99 = INT64_MIN;
	uint32_t x100 = 984U;
	static volatile int32_t t21 = -205414692;

	t21 = (x97&((x98/x99)<=x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x101 = UINT32_MAX;
	int32_t x103 = -32;
	uint32_t x104 = UINT32_MAX;
	volatile uint32_t t22 = 58492996U;

	t22 = (x101&((x102/x103)<=x104));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x106 = 2U;
	uint16_t x107 = UINT16_MAX;
	int16_t x108 = 9837;
	volatile int32_t t23 = 96128;

	t23 = (x105&((x106/x107)<=x108));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x110 = INT32_MIN;
	uint32_t x112 = UINT32_MAX;
	volatile int64_t t24 = -255666081425LL;

	t24 = (x109&((x110/x111)<=x112));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 53U;
	static uint8_t x114 = UINT8_MAX;
	int8_t x115 = 2;
	static uint64_t x116 = 15LLU;

	t25 = (x113&((x114/x115)<=x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = -2;
	volatile int8_t x118 = 16;
	int32_t x119 = -3399271;
	int32_t x120 = 8850108;
	int32_t t26 = 1707835;

	t26 = (x117&((x118/x119)<=x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 9764U;
	int16_t x122 = -103;
	volatile int64_t x123 = INT64_MIN;
	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t27 = 6;

	t27 = (x121&((x122/x123)<=x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = UINT8_MAX;
	int16_t x127 = INT16_MIN;
	static int32_t t28 = 20;

	t28 = (x125&((x126/x127)<=x128));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x129 = INT8_MAX;
	uint64_t x130 = 376289747407LLU;
	volatile int32_t t29 = 2418;

	t29 = (x129&((x130/x131)<=x132));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -1;
	int64_t x134 = -94289806LL;
	int64_t x135 = -1LL;
	uint16_t x136 = UINT16_MAX;

	t30 = (x133&((x134/x135)<=x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x138 = UINT16_MAX;
	static int32_t t31 = 1;

	t31 = (x137&((x138/x139)<=x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MAX;
	volatile int8_t x144 = -1;
	static volatile int32_t t32 = 113;

	t32 = (x141&((x142/x143)<=x144));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = 0;
	uint32_t x151 = 12U;
	int32_t x152 = INT32_MIN;
	int32_t t33 = 50369;

	t33 = (x149&((x150/x151)<=x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x155 = 4231908943174636723LLU;
	int64_t x156 = INT64_MIN;
	volatile int32_t t34 = 1534;

	t34 = (x153&((x154/x155)<=x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = INT32_MIN;
	int8_t x162 = INT8_MAX;
	volatile uint8_t x164 = UINT8_MAX;
	int32_t t35 = 145440;

	t35 = (x161&((x162/x163)<=x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = 49U;
	volatile int16_t x166 = INT16_MAX;
	int8_t x167 = 1;
	static int32_t x168 = -609781;

	t36 = (x165&((x166/x167)<=x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x169 = INT64_MIN;
	volatile int64_t x171 = INT64_MIN;
	static int64_t x172 = INT64_MIN;
	static int64_t t37 = 532996391LL;

	t37 = (x169&((x170/x171)<=x172));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x174 = -1;
	int8_t x176 = INT8_MIN;
	int32_t t38 = 10006485;

	t38 = (x173&((x174/x175)<=x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = -1;
	int32_t x178 = INT32_MAX;
	uint8_t x179 = 2U;
	static uint8_t x180 = 57U;
	int32_t t39 = -6;

	t39 = (x177&((x178/x179)<=x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x181 = 253U;
	static uint8_t x184 = 0U;
	static volatile int32_t t40 = -196106;

	t40 = (x181&((x182/x183)<=x184));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x185 = INT16_MIN;
	int16_t x186 = 40;
	uint64_t x187 = UINT64_MAX;
	int32_t t41 = 24463;

	t41 = (x185&((x186/x187)<=x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x189 = -340;
	uint64_t x191 = 11617038LLU;
	int32_t x192 = -12578;
	int32_t t42 = 372913;

	t42 = (x189&((x190/x191)<=x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = 223176283LLU;
	uint64_t x194 = 1623793744LLU;
	int64_t x195 = INT64_MIN;
	int32_t x196 = INT32_MIN;
	uint64_t t43 = 56245550738LLU;

	t43 = (x193&((x194/x195)<=x196));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x197 = 179LLU;
	int32_t x198 = INT32_MIN;
	uint8_t x199 = 5U;
	volatile int8_t x200 = -7;
	uint64_t t44 = 1224592LLU;

	t44 = (x197&((x198/x199)<=x200));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x201 = UINT32_MAX;
	int8_t x202 = INT8_MIN;
	int8_t x204 = 0;

	t45 = (x201&((x202/x203)<=x204));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x206 = INT8_MIN;
	static int8_t x207 = INT8_MAX;
	static uint64_t x208 = 4675041025LLU;
	static uint32_t t46 = 269U;

	t46 = (x205&((x206/x207)<=x208));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x209 = INT8_MAX;
	int64_t x211 = -47390606LL;
	uint8_t x212 = 1U;
	volatile int32_t t47 = 22;

	t47 = (x209&((x210/x211)<=x212));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x214 = -11;
	int16_t x215 = -77;
	int16_t x216 = INT16_MIN;
	volatile int32_t t48 = -4141808;

	t48 = (x213&((x214/x215)<=x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x218 = -18;
	uint32_t x219 = 108620U;
	int32_t t49 = 26;

	t49 = (x217&((x218/x219)<=x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x221 = 2806U;
	static int64_t x222 = INT64_MIN;
	volatile int64_t x224 = -1LL;
	volatile int32_t t50 = 887;

	t50 = (x221&((x222/x223)<=x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x225 = 3455U;
	int16_t x227 = -1;
	uint16_t x228 = 1554U;

	t51 = (x225&((x226/x227)<=x228));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = -1;
	uint16_t x232 = 2088U;

	t52 = (x229&((x230/x231)<=x232));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x233 = 463;
	int32_t x235 = INT32_MIN;
	volatile int64_t x236 = -463LL;

	t53 = (x233&((x234/x235)<=x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x237 = 3U;
	int64_t x238 = -110728415824432LL;
	static uint8_t x240 = 1U;
	volatile int32_t t54 = -1;

	t54 = (x237&((x238/x239)<=x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x242 = 3U;
	static uint64_t x243 = 30992395122336345LLU;
	volatile uint32_t t55 = 14357042U;

	t55 = (x241&((x242/x243)<=x244));

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x245 = 25322LLU;
	int64_t x246 = -16414531268929LL;
	int8_t x247 = 15;
	int32_t x248 = INT32_MIN;

	t56 = (x245&((x246/x247)<=x248));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x249 = -1;
	int32_t x250 = INT32_MIN;
	int64_t x251 = -2689804551311157LL;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t57 = 59163306;

	t57 = (x249&((x250/x251)<=x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x257 = -1;
	int32_t x258 = -1;
	int32_t x259 = -2421;
	volatile int32_t t58 = -605;

	t58 = (x257&((x258/x259)<=x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x261 = 137U;
	volatile int64_t x262 = INT64_MIN;
	static volatile int16_t x263 = INT16_MAX;
	volatile int16_t x264 = INT16_MIN;

	t59 = (x261&((x262/x263)<=x264));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x265 = INT64_MIN;
	volatile uint16_t x266 = 1U;
	int8_t x267 = INT8_MIN;
	static int32_t x268 = 2426301;

	t60 = (x265&((x266/x267)<=x268));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x269 = 115U;
	uint16_t x270 = 589U;
	static int8_t x271 = INT8_MIN;
	volatile int16_t x272 = -1480;
	volatile int32_t t61 = -92;

	t61 = (x269&((x270/x271)<=x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x273 = -1;
	int8_t x274 = INT8_MIN;
	volatile int32_t t62 = 793336;

	t62 = (x273&((x274/x275)<=x276));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x277 = -1LL;
	volatile int16_t x278 = INT16_MIN;
	uint16_t x279 = 15U;
	uint8_t x280 = 38U;
	volatile int64_t t63 = 12LL;

	t63 = (x277&((x278/x279)<=x280));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x281 = -346;
	int16_t x282 = INT16_MAX;
	volatile int8_t x284 = -1;

	t64 = (x281&((x282/x283)<=x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x285 = 1U;
	int16_t x286 = INT16_MIN;
	int32_t x288 = INT32_MIN;

	t65 = (x285&((x286/x287)<=x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x289 = UINT64_MAX;
	int32_t x290 = INT32_MAX;
	uint16_t x291 = 1U;
	uint16_t x292 = 5U;
	static uint64_t t66 = 5801665499800898LLU;

	t66 = (x289&((x290/x291)<=x292));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x293 = -55501LL;
	volatile int16_t x295 = INT16_MIN;
	static uint64_t x296 = 7005LLU;
	int64_t t67 = -959895145LL;

	t67 = (x293&((x294/x295)<=x296));

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x298 = INT16_MIN;
	int8_t x299 = 10;
	int8_t x300 = -1;

	t68 = (x297&((x298/x299)<=x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x301 = UINT16_MAX;
	int32_t x302 = 249376;
	int16_t x303 = -48;
	volatile int64_t x304 = INT64_MAX;

	t69 = (x301&((x302/x303)<=x304));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = INT8_MIN;
	volatile int64_t x306 = INT64_MIN;
	static volatile int32_t x307 = INT32_MIN;
	int32_t x308 = INT32_MAX;

	t70 = (x305&((x306/x307)<=x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = INT8_MIN;
	int32_t x310 = INT32_MAX;
	uint16_t x311 = 579U;
	uint8_t x312 = 1U;

	t71 = (x309&((x310/x311)<=x312));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x313 = 8756;
	int64_t x314 = INT64_MAX;
	int8_t x315 = INT8_MIN;
	volatile uint16_t x316 = 5585U;
	volatile int32_t t72 = 63918434;

	t72 = (x313&((x314/x315)<=x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = INT8_MIN;
	int64_t x318 = 66936096721524850LL;
	int16_t x319 = 2679;
	int64_t x320 = INT64_MIN;
	volatile int32_t t73 = 0;

	t73 = (x317&((x318/x319)<=x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MIN;
	static int32_t x323 = INT32_MIN;
	int8_t x324 = INT8_MIN;
	volatile int32_t t74 = -1046349227;

	t74 = (x321&((x322/x323)<=x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x325 = 1U;
	int32_t x326 = INT32_MIN;
	int64_t x327 = INT64_MAX;
	int32_t x328 = -1;

	t75 = (x325&((x326/x327)<=x328));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = INT8_MAX;
	static uint8_t x331 = 2U;
	volatile int32_t t76 = 563899038;

	t76 = (x329&((x330/x331)<=x332));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = -1;
	int8_t x334 = INT8_MIN;
	int16_t x336 = INT16_MIN;
	int32_t t77 = 10185130;

	t77 = (x333&((x334/x335)<=x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x337 = INT16_MIN;
	volatile int32_t x338 = INT32_MIN;
	uint64_t x339 = 6000935223251789066LLU;
	int32_t x340 = INT32_MAX;
	int32_t t78 = 50858785;

	t78 = (x337&((x338/x339)<=x340));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x341 = 424354;
	static int32_t x342 = INT32_MIN;
	int16_t x343 = 1;
	volatile int32_t t79 = 111777849;

	t79 = (x341&((x342/x343)<=x344));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x345 = -1;
	int32_t x346 = INT32_MIN;
	uint64_t x348 = 8164LLU;
	int32_t t80 = -241;

	t80 = (x345&((x346/x347)<=x348));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x349 = 97695921233LLU;
	static int64_t x350 = -10536571532804321LL;
	int8_t x351 = -3;
	int32_t x352 = INT32_MAX;
	uint64_t t81 = 172902999888801LLU;

	t81 = (x349&((x350/x351)<=x352));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x354 = INT64_MAX;
	volatile int8_t x355 = -1;
	static uint16_t x356 = 992U;
	int64_t t82 = 81903915636335084LL;

	t82 = (x353&((x354/x355)<=x356));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = 1;
	int32_t x359 = INT32_MIN;
	int64_t x360 = INT64_MIN;
	int32_t t83 = 26576;

	t83 = (x357&((x358/x359)<=x360));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MAX;
	int64_t x363 = INT64_MIN;
	int32_t t84 = -1700366;

	t84 = (x361&((x362/x363)<=x364));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x365 = INT8_MIN;
	static uint16_t x367 = 3U;
	uint64_t x368 = 47LLU;

	t85 = (x365&((x366/x367)<=x368));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x369 = -62210516833LL;
	int32_t x372 = 278;
	static volatile int64_t t86 = 126LL;

	t86 = (x369&((x370/x371)<=x372));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x376 = UINT16_MAX;

	t87 = (x373&((x374/x375)<=x376));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x377 = -3979;
	uint32_t x378 = UINT32_MAX;
	int32_t x380 = INT32_MAX;
	int32_t t88 = 4;

	t88 = (x377&((x378/x379)<=x380));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x381 = 20U;
	int64_t x382 = INT64_MIN;
	static int16_t x383 = 14;
	int32_t x384 = INT32_MAX;
	int32_t t89 = -96;

	t89 = (x381&((x382/x383)<=x384));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x385 = -53175323;
	static uint32_t x386 = 1U;
	uint16_t x387 = UINT16_MAX;
	uint64_t x388 = UINT64_MAX;
	int32_t t90 = -19045;

	t90 = (x385&((x386/x387)<=x388));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x389 = 15U;
	int8_t x390 = -3;
	volatile int64_t x391 = -31LL;
	int8_t x392 = 8;

	t91 = (x389&((x390/x391)<=x392));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x393 = -1;
	int64_t x395 = INT64_MIN;
	int32_t t92 = -1;

	t92 = (x393&((x394/x395)<=x396));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x397 = 963;
	static int64_t x398 = INT64_MIN;
	int8_t x399 = -6;
	int8_t x400 = INT8_MIN;

	t93 = (x397&((x398/x399)<=x400));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x401 = INT16_MAX;
	int64_t x402 = -1LL;
	volatile int32_t x403 = INT32_MIN;
	volatile uint8_t x404 = 0U;
	int32_t t94 = -168610604;

	t94 = (x401&((x402/x403)<=x404));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x406 = 59U;
	int32_t x407 = INT32_MAX;
	volatile uint32_t x408 = UINT32_MAX;
	int64_t t95 = -630LL;

	t95 = (x405&((x406/x407)<=x408));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x409 = 57454801772771331LLU;
	volatile uint8_t x410 = 3U;
	int8_t x412 = 14;
	uint64_t t96 = 5856465312973076001LLU;

	t96 = (x409&((x410/x411)<=x412));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x413 = INT16_MAX;
	uint8_t x414 = UINT8_MAX;
	volatile int16_t x415 = -36;
	int16_t x416 = INT16_MIN;
	static int32_t t97 = 19;

	t97 = (x413&((x414/x415)<=x416));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x417 = 8021U;
	uint32_t x418 = 2264497U;
	int64_t x419 = -48LL;
	int32_t x420 = -1;
	static volatile uint32_t t98 = 2U;

	t98 = (x417&((x418/x419)<=x420));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x421 = -8033;
	int16_t x422 = INT16_MIN;
	int16_t x423 = 33;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t99 = 10894;

	t99 = (x421&((x422/x423)<=x424));

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

