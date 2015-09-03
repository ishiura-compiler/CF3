#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = 3;
int16_t x8 = INT16_MIN;
int32_t x10 = -1011632714;
int32_t x12 = INT32_MIN;
volatile int32_t t2 = 976995151;
uint64_t x14 = 182LLU;
static uint16_t x16 = 1556U;
int64_t x17 = 128888288LL;
int64_t t4 = -47226656LL;
uint8_t x21 = 21U;
int16_t x32 = INT16_MAX;
uint16_t x34 = 30U;
volatile uint16_t x36 = 20U;
volatile uint32_t x37 = 251732U;
int16_t x40 = INT16_MIN;
static uint16_t x42 = 3062U;
static int16_t x48 = INT16_MIN;
int32_t x50 = INT32_MIN;
int64_t x54 = INT64_MIN;
uint16_t x55 = 0U;
int64_t x62 = -1LL;
uint32_t x66 = 13881U;
int32_t t16 = -16327688;
int64_t x69 = INT64_MAX;
static uint8_t x73 = 25U;
uint16_t x77 = 231U;
uint32_t x78 = 70386U;
static int16_t x79 = INT16_MAX;
volatile uint8_t x80 = 21U;
int32_t t19 = -42990531;
int8_t x87 = 2;
uint8_t x90 = 6U;
uint16_t x95 = 8375U;
uint32_t t24 = 1339852688U;
int8_t x103 = INT8_MIN;
volatile int32_t x111 = INT32_MAX;
volatile int64_t x112 = INT64_MAX;
int8_t x125 = INT8_MAX;
int8_t x129 = INT8_MAX;
volatile uint32_t x130 = UINT32_MAX;
int32_t x135 = INT32_MIN;
int32_t x137 = INT32_MIN;
int32_t t34 = INT32_MIN;
int32_t x142 = -1;
volatile int32_t t35 = 3350664;
int16_t x145 = -362;
static uint16_t x148 = 177U;
static int32_t t36 = 1;
int8_t x150 = INT8_MIN;
int32_t t40 = 155184981;
static uint32_t x166 = 204573U;
int8_t x169 = INT8_MIN;
static int8_t x172 = -1;
volatile int32_t t42 = 722445;
uint64_t x177 = UINT64_MAX;
uint16_t x183 = 506U;
static int32_t t46 = -3434946;
int8_t x193 = 1;
int8_t x203 = -8;
uint16_t x228 = UINT16_MAX;
int32_t x229 = -1;
volatile int32_t t57 = -7561429;
int64_t x238 = 572740907438571938LL;
volatile uint64_t x240 = 21LLU;
int8_t x262 = INT8_MIN;
uint32_t x264 = UINT32_MAX;
volatile uint32_t t65 = 24138U;
volatile uint32_t x265 = UINT32_MAX;
static int8_t x267 = INT8_MIN;
volatile uint64_t x275 = 2434212349LLU;
int32_t x278 = INT32_MIN;
uint32_t x288 = UINT32_MAX;
static int32_t t71 = -242160;
int64_t x292 = -14205580203LL;
volatile int32_t t72 = 688872599;
volatile int32_t t74 = 1;
static int32_t t77 = 556275;
volatile int64_t t80 = -10845707249384097LL;
volatile int8_t x326 = -2;
static uint32_t x329 = 1964U;
static int16_t x338 = INT16_MIN;
volatile int32_t t84 = 2437;
int64_t t85 = 96973863386LL;
int32_t x352 = INT32_MIN;
int8_t x353 = INT8_MIN;
int64_t x355 = INT64_MIN;
static int16_t x357 = INT16_MAX;
uint8_t x359 = UINT8_MAX;
int8_t x360 = -6;
int64_t x363 = INT64_MIN;
volatile int16_t x369 = -1;
int8_t x374 = INT8_MAX;
uint8_t x375 = 1U;
int32_t x377 = INT32_MAX;
int32_t x378 = INT32_MAX;
uint64_t x379 = 3732359LLU;
int64_t x380 = -238842945358463LL;
static int32_t t95 = 424353;
volatile int32_t x388 = INT32_MIN;
volatile int32_t t99 = -4;


void f0(void) {
	uint64_t x1 = 93667631938LLU;
	int32_t x2 = 38222;
	static int16_t x3 = 6318;
	int64_t x4 = INT64_MIN;
	static uint64_t t0 = 82932154756LLU;

	t0 = (x1+(x2==(x3&x4)));

	if (t0 != 93667631938LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 22U;
	int64_t x7 = INT64_MIN;
	volatile int32_t t1 = 4000;

	t1 = (x5+(x6==(x7&x8)));

	if (t1 != 22) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	int16_t x11 = -14;

	t2 = (x9+(x10==(x11&x12)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	volatile int32_t x15 = INT32_MIN;
	volatile int32_t t3 = 2643;

	t3 = (x13+(x14==(x15&x16)));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 22794U;
	volatile int16_t x19 = -2;
	static volatile int64_t x20 = INT64_MIN;

	t4 = (x17+(x18==(x19&x20)));

	if (t4 != 128888288LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x22 = UINT8_MAX;
	int16_t x23 = INT16_MIN;
	static uint32_t x24 = 88750U;
	int32_t t5 = -1334065;

	t5 = (x21+(x22==(x23&x24)));

	if (t5 != 21) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MAX;
	volatile int16_t x26 = INT16_MIN;
	uint8_t x27 = 0U;
	int64_t x28 = -139896159691322019LL;
	int32_t t6 = 99;

	t6 = (x25+(x26==(x27&x28)));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = UINT32_MAX;
	uint32_t x30 = 4914U;
	int16_t x31 = INT16_MIN;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = (x29+(x30==(x31&x32)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int8_t x35 = INT8_MAX;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = (x33+(x34==(x35&x36)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x38 = 320LLU;
	int16_t x39 = -2;
	volatile uint32_t t9 = 479550966U;

	t9 = (x37+(x38==(x39&x40)));

	if (t9 != 251732U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = 101;
	uint8_t x43 = 30U;
	int32_t x44 = -134;
	int32_t t10 = 4390080;

	t10 = (x41+(x42==(x43&x44)));

	if (t10 != 101) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int16_t x46 = -1;
	uint32_t x47 = 3333U;
	volatile int32_t t11 = -4574738;

	t11 = (x45+(x46==(x47&x48)));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 26677U;
	uint32_t x51 = 4U;
	int16_t x52 = INT16_MIN;
	int32_t t12 = 173076759;

	t12 = (x49+(x50==(x51&x52)));

	if (t12 != 26677) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = 41071;

	t13 = (x53+(x54==(x55&x56)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -4;
	int32_t x58 = -6071;
	static int64_t x59 = -1LL;
	static int8_t x60 = INT8_MIN;
	int32_t t14 = 404404;

	t14 = (x57+(x58==(x59&x60)));

	if (t14 != -4) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MAX;
	int16_t x63 = 1459;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 2773;

	t15 = (x61+(x62==(x63&x64)));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -62;
	static volatile int32_t x67 = INT32_MIN;
	static int64_t x68 = INT64_MIN;

	t16 = (x65+(x66==(x67&x68)));

	if (t16 != -62) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x70 = UINT64_MAX;
	int8_t x71 = INT8_MAX;
	int32_t x72 = -1;
	int64_t t17 = INT64_MAX;

	t17 = (x69+(x70==(x71&x72)));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MIN;
	static int16_t x75 = INT16_MIN;
	volatile int32_t x76 = -1;
	int32_t t18 = -27196;

	t18 = (x73+(x74==(x75&x76)));

	if (t18 != 26) { NG(); } else { ; }
	
}

void f19(void) {


	t19 = (x77+(x78==(x79&x80)));

	if (t19 != 231) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	uint8_t x82 = UINT8_MAX;
	volatile int64_t x83 = INT64_MAX;
	int64_t x84 = INT64_MAX;
	volatile int32_t t20 = -113895;

	t20 = (x81+(x82==(x83&x84)));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -61021;
	static uint16_t x86 = UINT16_MAX;
	int32_t x88 = -125;
	int32_t t21 = -953;

	t21 = (x85+(x86==(x87&x88)));

	if (t21 != -61021) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 2U;
	static int64_t x91 = INT64_MAX;
	static int64_t x92 = INT64_MIN;
	volatile int32_t t22 = 1698;

	t22 = (x89+(x90==(x91&x92)));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 570U;
	uint16_t x94 = UINT16_MAX;
	int32_t x96 = -7534;
	static int32_t t23 = 1677;

	t23 = (x93+(x94==(x95&x96)));

	if (t23 != 570) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 1U;
	volatile uint8_t x98 = 0U;
	int64_t x99 = INT64_MIN;
	uint16_t x100 = UINT16_MAX;

	t24 = (x97+(x98==(x99&x100)));

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = 1300U;
	volatile int64_t x102 = -1LL;
	int32_t x104 = INT32_MAX;
	volatile uint32_t t25 = 13283U;

	t25 = (x101+(x102==(x103&x104)));

	if (t25 != 1300U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	int64_t x106 = 35LL;
	int64_t x107 = INT64_MIN;
	int32_t x108 = INT32_MAX;
	int32_t t26 = 12633;

	t26 = (x105+(x106==(x107&x108)));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	uint32_t x110 = 36843721U;
	static volatile int32_t t27 = 43;

	t27 = (x109+(x110==(x111&x112)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -13;
	static int16_t x114 = 1;
	int64_t x115 = 104002928729528LL;
	uint32_t x116 = 4785U;
	static volatile int32_t t28 = -1;

	t28 = (x113+(x114==(x115&x116)));

	if (t28 != -13) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = 61;
	int16_t x118 = 51;
	uint64_t x119 = UINT64_MAX;
	uint64_t x120 = UINT64_MAX;
	volatile int32_t t29 = -31256;

	t29 = (x117+(x118==(x119&x120)));

	if (t29 != 61) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static uint32_t x122 = 6151307U;
	int8_t x123 = 1;
	int16_t x124 = INT16_MIN;
	int32_t t30 = 956;

	t30 = (x121+(x122==(x123&x124)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x126 = UINT32_MAX;
	uint16_t x127 = 54U;
	int32_t x128 = 11848;
	int32_t t31 = 177403891;

	t31 = (x125+(x126==(x127&x128)));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x131 = INT64_MAX;
	uint32_t x132 = 14898U;
	volatile int32_t t32 = 87419;

	t32 = (x129+(x130==(x131&x132)));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 3U;
	uint8_t x134 = UINT8_MAX;
	volatile uint8_t x136 = 4U;
	static int32_t t33 = 56124;

	t33 = (x133+(x134==(x135&x136)));

	if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x138 = 1582;
	int8_t x139 = -1;
	volatile uint16_t x140 = 2U;

	t34 = (x137+(x138==(x139&x140)));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x141 = UINT8_MAX;
	uint8_t x143 = 2U;
	volatile int32_t x144 = INT32_MIN;

	t35 = (x141+(x142==(x143&x144)));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x146 = INT32_MAX;
	uint64_t x147 = UINT64_MAX;

	t36 = (x145+(x146==(x147&x148)));

	if (t36 != -362) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 489061311U;
	int8_t x151 = INT8_MAX;
	static int16_t x152 = INT16_MAX;
	volatile uint32_t t37 = 30624990U;

	t37 = (x149+(x150==(x151&x152)));

	if (t37 != 489061311U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	static volatile int16_t x154 = 62;
	uint8_t x155 = UINT8_MAX;
	volatile int16_t x156 = INT16_MIN;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (x153+(x154==(x155&x156)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MAX;
	int16_t x158 = INT16_MIN;
	volatile uint8_t x159 = 3U;
	uint16_t x160 = UINT16_MAX;
	int64_t t39 = INT64_MAX;

	t39 = (x157+(x158==(x159&x160)));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x161 = 194U;
	int32_t x162 = INT32_MAX;
	static int8_t x163 = 8;
	int32_t x164 = INT32_MAX;

	t40 = (x161+(x162==(x163&x164)));

	if (t40 != 194) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int8_t x167 = INT8_MIN;
	static int64_t x168 = INT64_MIN;
	int32_t t41 = INT32_MIN;

	t41 = (x165+(x166==(x167&x168)));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x170 = 30U;
	static volatile int8_t x171 = 3;

	t42 = (x169+(x170==(x171&x172)));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -473;
	static volatile int64_t x174 = -223LL;
	int64_t x175 = -3108LL;
	uint16_t x176 = 157U;
	static int32_t t43 = 0;

	t43 = (x173+(x174==(x175&x176)));

	if (t43 != -473) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = UINT64_MAX;
	int16_t x179 = 6;
	int16_t x180 = INT16_MAX;
	volatile uint64_t t44 = UINT64_MAX;

	t44 = (x177+(x178==(x179&x180)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 15U;
	uint16_t x182 = 496U;
	int32_t x184 = INT32_MAX;
	uint32_t t45 = 5675677U;

	t45 = (x181+(x182==(x183&x184)));

	if (t45 != 15U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x185 = UINT8_MAX;
	int64_t x186 = -4LL;
	uint64_t x187 = 32918753802025449LLU;
	int16_t x188 = INT16_MIN;

	t46 = (x185+(x186==(x187&x188)));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x189 = INT32_MIN;
	int64_t x190 = INT64_MIN;
	int32_t x191 = INT32_MIN;
	volatile int32_t x192 = INT32_MIN;
	volatile int32_t t47 = INT32_MIN;

	t47 = (x189+(x190==(x191&x192)));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = INT16_MIN;
	uint32_t x195 = 22089426U;
	static volatile uint64_t x196 = 624890LLU;
	int32_t t48 = 5;

	t48 = (x193+(x194==(x195&x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	static int16_t x198 = INT16_MAX;
	int64_t x199 = INT64_MIN;
	int32_t x200 = -1;
	volatile int32_t t49 = -1142059;

	t49 = (x197+(x198==(x199&x200)));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = 124U;
	int32_t x202 = -1;
	int32_t x204 = -24524418;
	volatile uint32_t t50 = 1968252U;

	t50 = (x201+(x202==(x203&x204)));

	if (t50 != 124U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	static uint8_t x206 = 8U;
	int16_t x207 = INT16_MIN;
	int64_t x208 = -627913644937020373LL;
	volatile int64_t t51 = INT64_MAX;

	t51 = (x205+(x206==(x207&x208)));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	int8_t x210 = INT8_MIN;
	static int16_t x211 = INT16_MAX;
	uint8_t x212 = UINT8_MAX;
	int32_t t52 = 0;

	t52 = (x209+(x210==(x211&x212)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = 3U;
	uint8_t x214 = UINT8_MAX;
	int16_t x215 = 1;
	static int8_t x216 = INT8_MIN;
	volatile int32_t t53 = -25;

	t53 = (x213+(x214==(x215&x216)));

	if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	uint64_t x218 = 28866555055917LLU;
	static volatile uint8_t x219 = UINT8_MAX;
	volatile uint8_t x220 = 44U;
	int32_t t54 = 1;

	t54 = (x217+(x218==(x219&x220)));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	volatile uint32_t x222 = UINT32_MAX;
	volatile uint16_t x223 = UINT16_MAX;
	static int8_t x224 = INT8_MIN;
	static volatile int32_t t55 = 77;

	t55 = (x221+(x222==(x223&x224)));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = -1LL;
	static int64_t x226 = INT64_MIN;
	static int64_t x227 = -268703754LL;
	volatile int64_t t56 = -1372949852LL;

	t56 = (x225+(x226==(x227&x228)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = -1;
	int64_t x231 = INT64_MIN;
	int32_t x232 = 3681;

	t57 = (x229+(x230==(x231&x232)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = 9;
	int64_t x235 = INT64_MIN;
	static uint64_t x236 = UINT64_MAX;
	int32_t t58 = 158829;

	t58 = (x233+(x234==(x235&x236)));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	static int16_t x239 = INT16_MAX;
	static volatile int64_t t59 = INT64_MIN;

	t59 = (x237+(x238==(x239&x240)));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MIN;
	static int8_t x243 = -3;
	static int8_t x244 = 18;
	int32_t t60 = 263671355;

	t60 = (x241+(x242==(x243&x244)));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = -1;
	uint8_t x246 = UINT8_MAX;
	int8_t x247 = -2;
	int16_t x248 = INT16_MIN;
	static int32_t t61 = -131599129;

	t61 = (x245+(x246==(x247&x248)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MIN;
	static uint32_t x250 = UINT32_MAX;
	int16_t x251 = INT16_MAX;
	volatile int16_t x252 = 1;
	static volatile int32_t t62 = 268373;

	t62 = (x249+(x250==(x251&x252)));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	volatile int16_t x254 = INT16_MIN;
	volatile uint64_t x255 = 55360901063LLU;
	static int64_t x256 = -11153438989LL;
	volatile int32_t t63 = INT32_MAX;

	t63 = (x253+(x254==(x255&x256)));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	uint32_t x258 = 147315879U;
	static int16_t x259 = -1;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t64 = INT32_MIN;

	t64 = (x257+(x258==(x259&x260)));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 455U;
	uint64_t x263 = UINT64_MAX;

	t65 = (x261+(x262==(x263&x264)));

	if (t65 != 455U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x266 = -14;
	uint32_t x268 = 4080U;
	uint32_t t66 = UINT32_MAX;

	t66 = (x265+(x266==(x267&x268)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 372U;
	uint16_t x270 = 1024U;
	int64_t x271 = INT64_MIN;
	int32_t x272 = INT32_MAX;
	static volatile int32_t t67 = -335302;

	t67 = (x269+(x270==(x271&x272)));

	if (t67 != 372) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	int32_t x274 = 69171;
	static int8_t x276 = INT8_MIN;
	volatile int32_t t68 = -2609;

	t68 = (x273+(x274==(x275&x276)));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = 45261382;
	int8_t x279 = INT8_MIN;
	volatile int16_t x280 = INT16_MAX;
	int32_t t69 = -679663;

	t69 = (x277+(x278==(x279&x280)));

	if (t69 != 45261382) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x281 = INT32_MIN;
	uint64_t x282 = UINT64_MAX;
	int32_t x283 = INT32_MIN;
	uint64_t x284 = UINT64_MAX;
	volatile int32_t t70 = INT32_MIN;

	t70 = (x281+(x282==(x283&x284)));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	volatile int32_t x286 = INT32_MIN;
	int64_t x287 = 348099463667281LL;

	t71 = (x285+(x286==(x287&x288)));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x289 = UINT16_MAX;
	static int16_t x290 = INT16_MAX;
	int8_t x291 = 40;

	t72 = (x289+(x290==(x291&x292)));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	static uint8_t x294 = 3U;
	int32_t x295 = -140;
	int32_t x296 = INT32_MAX;
	static int32_t t73 = -10718;

	t73 = (x293+(x294==(x295&x296)));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x297 = 0U;
	int32_t x298 = INT32_MAX;
	static uint64_t x299 = UINT64_MAX;
	int16_t x300 = -1;

	t74 = (x297+(x298==(x299&x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x301 = INT64_MIN;
	int32_t x302 = 936004510;
	int16_t x303 = INT16_MIN;
	uint8_t x304 = 1U;
	int64_t t75 = INT64_MIN;

	t75 = (x301+(x302==(x303&x304)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	int32_t x306 = -1;
	int16_t x307 = -1;
	int64_t x308 = 5146LL;
	volatile int64_t t76 = INT64_MAX;

	t76 = (x305+(x306==(x307&x308)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 1;
	static int64_t x310 = INT64_MIN;
	static volatile int8_t x311 = INT8_MIN;
	int16_t x312 = -8;

	t77 = (x309+(x310==(x311&x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	uint16_t x314 = 37U;
	volatile uint8_t x315 = 15U;
	static volatile uint16_t x316 = UINT16_MAX;
	int64_t t78 = INT64_MIN;

	t78 = (x313+(x314==(x315&x316)));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x317 = 2U;
	int32_t x318 = INT32_MAX;
	uint16_t x319 = 4U;
	int32_t x320 = INT32_MIN;
	uint32_t t79 = 42088090U;

	t79 = (x317+(x318==(x319&x320)));

	if (t79 != 2U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = -1LL;
	uint64_t x322 = UINT64_MAX;
	static int32_t x323 = -566408681;
	volatile int32_t x324 = -1;

	t80 = (x321+(x322==(x323&x324)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	int16_t x327 = -1565;
	static int64_t x328 = INT64_MIN;
	volatile int64_t t81 = -196639LL;

	t81 = (x325+(x326==(x327&x328)));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x330 = -2;
	int32_t x331 = INT32_MIN;
	int16_t x332 = INT16_MIN;
	volatile uint32_t t82 = 101U;

	t82 = (x329+(x330==(x331&x332)));

	if (t82 != 1964U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -5;
	uint8_t x334 = 83U;
	volatile int8_t x335 = -1;
	static uint16_t x336 = UINT16_MAX;
	volatile int32_t t83 = 0;

	t83 = (x333+(x334==(x335&x336)));

	if (t83 != -5) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	volatile int32_t x339 = INT32_MAX;
	uint32_t x340 = 254465416U;

	t84 = (x337+(x338==(x339&x340)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = -1LL;
	uint64_t x342 = 2620880192385LLU;
	int16_t x343 = INT16_MAX;
	volatile uint8_t x344 = 74U;

	t85 = (x341+(x342==(x343&x344)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	int8_t x346 = 3;
	volatile uint64_t x347 = 3023428LLU;
	static int16_t x348 = 13376;
	int64_t t86 = INT64_MAX;

	t86 = (x345+(x346==(x347&x348)));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = 3LL;
	uint64_t x350 = 25228761307988LLU;
	int8_t x351 = -7;
	volatile int64_t t87 = -26311043442329LL;

	t87 = (x349+(x350==(x351&x352)));

	if (t87 != 3LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x354 = -1;
	int64_t x356 = INT64_MIN;
	volatile int32_t t88 = -53639;

	t88 = (x353+(x354==(x355&x356)));

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x358 = UINT8_MAX;
	volatile int32_t t89 = -8;

	t89 = (x357+(x358==(x359&x360)));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 1U;
	volatile int32_t x362 = -1;
	volatile uint16_t x364 = 78U;
	volatile int32_t t90 = -1874;

	t90 = (x361+(x362==(x363&x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = INT8_MIN;
	int64_t x366 = INT64_MIN;
	uint64_t x367 = 60124LLU;
	volatile int64_t x368 = INT64_MIN;
	volatile int32_t t91 = -1722;

	t91 = (x365+(x366==(x367&x368)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = INT32_MIN;
	uint32_t x371 = UINT32_MAX;
	int16_t x372 = INT16_MIN;
	int32_t t92 = 40814;

	t92 = (x369+(x370==(x371&x372)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x373 = UINT16_MAX;
	uint8_t x376 = 0U;
	static int32_t t93 = 109030;

	t93 = (x373+(x374==(x375&x376)));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t t94 = INT32_MAX;

	t94 = (x377+(x378==(x379&x380)));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = -7;
	volatile int16_t x382 = -12;
	uint16_t x383 = UINT16_MAX;
	int32_t x384 = 3369;

	t95 = (x381+(x382==(x383&x384)));

	if (t95 != -7) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = INT64_MAX;
	volatile int16_t x386 = INT16_MIN;
	uint32_t x387 = UINT32_MAX;
	int64_t t96 = INT64_MAX;

	t96 = (x385+(x386==(x387&x388)));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = INT32_MIN;
	volatile int64_t x390 = INT64_MIN;
	static volatile uint32_t x391 = UINT32_MAX;
	volatile int8_t x392 = -1;
	int32_t t97 = INT32_MIN;

	t97 = (x389+(x390==(x391&x392)));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 5420690U;
	int16_t x394 = INT16_MIN;
	uint8_t x395 = UINT8_MAX;
	static int8_t x396 = 8;
	uint32_t t98 = 199250819U;

	t98 = (x393+(x394==(x395&x396)));

	if (t98 != 5420690U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = -1;
	int16_t x398 = 208;
	int16_t x399 = -1287;
	uint16_t x400 = 4U;

	t99 = (x397+(x398==(x399&x400)));

	if (t99 != -1) { NG(); } else { ; }
	
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

