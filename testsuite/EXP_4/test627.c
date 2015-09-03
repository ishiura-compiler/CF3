#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x3 = UINT64_MAX;
static int32_t t1 = 471;
volatile int16_t x9 = -1;
int32_t x13 = 2217102;
int32_t x14 = -1;
int32_t x38 = INT32_MAX;
volatile int8_t x54 = INT8_MIN;
volatile uint16_t x56 = 1U;
volatile int32_t t10 = 26;
int8_t x63 = -4;
int32_t x67 = INT32_MIN;
volatile uint32_t t16 = 29701U;
static volatile int32_t t17 = 7;
uint32_t x97 = 112571U;
int32_t x102 = INT32_MAX;
volatile uint16_t x104 = 560U;
static int64_t x109 = -3038232LL;
int8_t x111 = INT8_MIN;
volatile uint64_t x112 = UINT64_MAX;
int64_t x123 = INT64_MAX;
uint16_t x128 = 598U;
uint32_t x136 = 1468U;
volatile int32_t x160 = -87898;
static int16_t x161 = -2;
int8_t x162 = -1;
uint8_t x164 = 2U;
volatile int32_t t35 = -15;
static int64_t x175 = -25119531262LL;
int64_t x176 = INT64_MIN;
volatile int8_t x183 = -1;
int16_t x184 = INT16_MAX;
int8_t x189 = -1;
uint16_t x198 = 582U;
static int16_t x200 = INT16_MAX;
static int32_t t44 = 498;
volatile int32_t x205 = -1;
uint8_t x208 = UINT8_MAX;
int8_t x212 = -1;
volatile int32_t t46 = -987033;
static int8_t x216 = -1;
int64_t x222 = 28404518LL;
int16_t x231 = 1;
int32_t t51 = -502994;
int16_t x239 = 66;
uint8_t x241 = 15U;
volatile int8_t x243 = INT8_MIN;
volatile int64_t x245 = INT64_MIN;
uint32_t x248 = 1U;
volatile int64_t t55 = INT64_MIN;
static int32_t x249 = -603;
static volatile uint16_t x252 = 5116U;
volatile int32_t t56 = 53494931;
int64_t x256 = -1LL;
int64_t x258 = -759208656754LL;
int16_t x260 = 973;
uint64_t x263 = 162599488LLU;
volatile int16_t x264 = INT16_MAX;
static int32_t x267 = -9953;
int16_t x269 = -1;
volatile int32_t t61 = 3134104;
uint8_t x274 = UINT8_MAX;
volatile int64_t t63 = 493551LL;
uint8_t x291 = 1U;
volatile int64_t t65 = -10094722548673LL;
static uint8_t x294 = 26U;
uint64_t x300 = 2LLU;
static int16_t x303 = INT16_MAX;
volatile int64_t x308 = INT64_MIN;
volatile uint32_t t71 = 679743U;
static volatile int64_t x317 = -1LL;
int16_t x318 = -195;
int16_t x319 = INT16_MIN;
int64_t x330 = INT64_MIN;
volatile int16_t x333 = INT16_MIN;
uint16_t x342 = 6082U;
int32_t t77 = 0;
volatile uint8_t x345 = UINT8_MAX;
int16_t x347 = -1;
int64_t x349 = -1LL;
volatile int32_t x358 = -851430;
volatile uint16_t x359 = 70U;
uint16_t x365 = 5U;
static uint64_t x371 = 8042651381LLU;
static uint32_t t85 = UINT32_MAX;
int32_t t87 = 2001329;
uint8_t x389 = 1U;
int64_t x390 = -189LL;
int16_t x398 = INT16_MIN;
int16_t x402 = 130;
int8_t x404 = 26;
int32_t t90 = 248;
static int32_t x418 = INT32_MIN;
int16_t x423 = INT16_MIN;
uint8_t x427 = 2U;
int32_t x434 = -1;
volatile uint8_t x436 = UINT8_MAX;


void f0(void) {
	volatile int16_t x1 = 138;
	static int32_t x2 = INT32_MIN;
	int64_t x4 = INT64_MIN;
	static int32_t t0 = 49256;

	t0 = (x1*(x2<=(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint32_t x6 = UINT32_MAX;
	uint8_t x7 = 5U;
	volatile int8_t x8 = INT8_MIN;

	t1 = (x5*(x6<=(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = INT64_MIN;
	int8_t x11 = -11;
	int64_t x12 = INT64_MAX;
	static int32_t t2 = 422448;

	t2 = (x9*(x10<=(x11/x12)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x15 = 507;
	volatile int16_t x16 = -1;
	static volatile int32_t t3 = -14814436;

	t3 = (x13*(x14<=(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	static volatile uint32_t x18 = 143961U;
	uint8_t x19 = UINT8_MAX;
	int16_t x20 = INT16_MAX;
	int32_t t4 = 86121535;

	t4 = (x17*(x18<=(x19/x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	volatile int64_t x22 = 62082159759842LL;
	int16_t x23 = 1;
	uint8_t x24 = 8U;
	volatile int32_t t5 = -589506101;

	t5 = (x21*(x22<=(x23/x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x37 = 4;
	static uint16_t x39 = 662U;
	static volatile int32_t x40 = INT32_MIN;
	int32_t t6 = -7261;

	t6 = (x37*(x38<=(x39/x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = UINT32_MAX;
	int64_t x42 = -101458016385LL;
	volatile uint32_t x43 = 1806U;
	uint8_t x44 = UINT8_MAX;
	static uint32_t t7 = UINT32_MAX;

	t7 = (x41*(x42<=(x43/x44)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = 1;
	int32_t x50 = -29644;
	static uint8_t x51 = 17U;
	static int8_t x52 = INT8_MIN;
	int32_t t8 = -21876933;

	t8 = (x49*(x50<=(x51/x52)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x53 = 8506885LLU;
	static int16_t x55 = INT16_MIN;
	volatile uint64_t t9 = 178520536258512LLU;

	t9 = (x53*(x54<=(x55/x56)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = 58;
	int16_t x58 = -1;
	int32_t x59 = INT32_MAX;
	int8_t x60 = INT8_MIN;

	t10 = (x57*(x58<=(x59/x60)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x61 = -1;
	int8_t x62 = -1;
	uint32_t x64 = 82U;
	volatile int32_t t11 = 28;

	t11 = (x61*(x62<=(x63/x64)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = UINT8_MAX;
	int16_t x66 = INT16_MIN;
	uint8_t x68 = 3U;
	int32_t t12 = 122338;

	t12 = (x65*(x66<=(x67/x68)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x73 = UINT8_MAX;
	uint16_t x74 = 13928U;
	volatile uint32_t x75 = UINT32_MAX;
	volatile int16_t x76 = 52;
	int32_t t13 = -67972;

	t13 = (x73*(x74<=(x75/x76)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = INT32_MIN;
	static volatile int8_t x78 = INT8_MAX;
	uint16_t x79 = 5U;
	uint64_t x80 = 7254129171326592LLU;
	static int32_t t14 = -1722129;

	t14 = (x77*(x78<=(x79/x80)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MIN;
	int64_t x82 = INT64_MAX;
	int8_t x83 = -1;
	volatile int8_t x84 = -2;
	int32_t t15 = 31267237;

	t15 = (x81*(x82<=(x83/x84)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x85 = 13569086U;
	int64_t x86 = INT64_MIN;
	volatile int8_t x87 = INT8_MIN;
	static uint16_t x88 = 25U;

	t16 = (x85*(x86<=(x87/x88)));

	if (t16 != 13569086U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x89 = INT16_MAX;
	int16_t x90 = -6367;
	uint64_t x91 = 418LLU;
	int16_t x92 = -12495;

	t17 = (x89*(x90<=(x91/x92)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MIN;
	static volatile uint16_t x95 = 1U;
	int64_t x96 = -1LL;
	int32_t t18 = -45411;

	t18 = (x93*(x94<=(x95/x96)));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x98 = UINT16_MAX;
	static int64_t x99 = 0LL;
	static int32_t x100 = -1;
	static uint32_t t19 = 77993U;

	t19 = (x97*(x98<=(x99/x100)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = INT8_MIN;
	int16_t x103 = INT16_MAX;
	volatile int32_t t20 = -6208327;

	t20 = (x101*(x102<=(x103/x104)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = INT16_MIN;
	int8_t x106 = -1;
	static int8_t x107 = INT8_MAX;
	uint8_t x108 = 73U;
	volatile int32_t t21 = 2;

	t21 = (x105*(x106<=(x107/x108)));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x110 = UINT64_MAX;
	volatile int64_t t22 = 708321292957LL;

	t22 = (x109*(x110<=(x111/x112)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x113 = 1U;
	int32_t x114 = 1671301;
	static int64_t x115 = 88080011LL;
	volatile int8_t x116 = 1;
	volatile int32_t t23 = -44214;

	t23 = (x113*(x114<=(x115/x116)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x117 = 0U;
	int16_t x118 = 345;
	static uint64_t x119 = UINT64_MAX;
	int16_t x120 = 19;
	int32_t t24 = -5657;

	t24 = (x117*(x118<=(x119/x120)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = INT16_MAX;
	static volatile int64_t x122 = 205784751905LL;
	int8_t x124 = INT8_MIN;
	int32_t t25 = 1;

	t25 = (x121*(x122<=(x123/x124)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = -1LL;
	int32_t x126 = INT32_MAX;
	uint8_t x127 = 1U;
	static volatile int64_t t26 = 227044668997553507LL;

	t26 = (x125*(x126<=(x127/x128)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x129 = 129LLU;
	int64_t x130 = 18615888698LL;
	uint32_t x131 = 64U;
	int32_t x132 = INT32_MIN;
	static volatile uint64_t t27 = 1435962LLU;

	t27 = (x129*(x130<=(x131/x132)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = -1;
	int8_t x134 = INT8_MIN;
	static volatile int16_t x135 = 2774;
	static volatile int32_t t28 = 252;

	t28 = (x133*(x134<=(x135/x136)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x137 = 123376594;
	int64_t x138 = INT64_MIN;
	volatile int8_t x139 = 5;
	uint16_t x140 = 740U;
	volatile int32_t t29 = -5938;

	t29 = (x137*(x138<=(x139/x140)));

	if (t29 != 123376594) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = -806240350247764932LL;
	int16_t x142 = -1;
	uint32_t x143 = UINT32_MAX;
	volatile uint64_t x144 = UINT64_MAX;
	static int64_t t30 = -11145724LL;

	t30 = (x141*(x142<=(x143/x144)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x145 = 5U;
	static int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MAX;
	int64_t x148 = INT64_MIN;
	int32_t t31 = 969036187;

	t31 = (x145*(x146<=(x147/x148)));

	if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = 2050;
	int16_t x150 = -1;
	uint64_t x151 = 21962501LLU;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t32 = 544;

	t32 = (x149*(x150<=(x151/x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x153 = UINT64_MAX;
	int8_t x154 = -1;
	int32_t x155 = 54463;
	int8_t x156 = -15;
	static uint64_t t33 = 25132230770940820LLU;

	t33 = (x153*(x154<=(x155/x156)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x157 = INT64_MAX;
	int16_t x158 = INT16_MAX;
	int16_t x159 = 685;
	static int64_t t34 = 291210LL;

	t34 = (x157*(x158<=(x159/x160)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x163 = UINT8_MAX;

	t35 = (x161*(x162<=(x163/x164)));

	if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = -1;
	int64_t x166 = INT64_MIN;
	volatile uint8_t x167 = UINT8_MAX;
	uint16_t x168 = 112U;
	volatile int32_t t36 = 2;

	t36 = (x165*(x166<=(x167/x168)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = 7;
	static int32_t x170 = INT32_MIN;
	uint64_t x171 = UINT64_MAX;
	static int16_t x172 = -199;
	static volatile int32_t t37 = 20104638;

	t37 = (x169*(x170<=(x171/x172)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = 5;
	volatile int16_t x174 = -1;
	volatile int32_t t38 = -18391743;

	t38 = (x173*(x174<=(x175/x176)));

	if (t38 != 5) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MIN;
	int16_t x178 = INT16_MIN;
	int32_t x179 = -1;
	int32_t x180 = INT32_MAX;
	int64_t t39 = INT64_MIN;

	t39 = (x177*(x178<=(x179/x180)));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = INT32_MIN;
	uint16_t x182 = UINT16_MAX;
	volatile int32_t t40 = 6760977;

	t40 = (x181*(x182<=(x183/x184)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = 87511LL;
	static int8_t x186 = -1;
	int16_t x187 = 2;
	int32_t x188 = INT32_MAX;
	volatile int64_t t41 = -2071060685LL;

	t41 = (x185*(x186<=(x187/x188)));

	if (t41 != 87511LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x190 = 1055569645408LLU;
	static int16_t x191 = -1;
	static volatile int16_t x192 = -13618;
	static int32_t t42 = 8686;

	t42 = (x189*(x190<=(x191/x192)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x193 = -39695534LL;
	uint32_t x194 = 107300U;
	uint64_t x195 = 1970LLU;
	int8_t x196 = -1;
	static volatile int64_t t43 = 3997324553918825LL;

	t43 = (x193*(x194<=(x195/x196)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = 3;
	int8_t x199 = 1;

	t44 = (x197*(x198<=(x199/x200)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x206 = 1715;
	static uint16_t x207 = UINT16_MAX;
	static volatile int32_t t45 = 9;

	t45 = (x205*(x206<=(x207/x208)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = -1;
	volatile uint16_t x210 = 1U;
	int64_t x211 = -345261878321LL;

	t46 = (x209*(x210<=(x211/x212)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x213 = INT64_MIN;
	volatile int8_t x214 = -1;
	int64_t x215 = -1LL;
	int64_t t47 = INT64_MIN;

	t47 = (x213*(x214<=(x215/x216)));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x217 = 14U;
	static uint8_t x218 = UINT8_MAX;
	int64_t x219 = -1LL;
	int16_t x220 = 1;
	int32_t t48 = -3;

	t48 = (x217*(x218<=(x219/x220)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x221 = UINT8_MAX;
	int8_t x223 = INT8_MIN;
	int32_t x224 = -8361011;
	static int32_t t49 = -1;

	t49 = (x221*(x222<=(x223/x224)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = -1;
	int16_t x226 = 2098;
	int64_t x227 = INT64_MAX;
	int16_t x228 = -1;
	volatile int32_t t50 = 1;

	t50 = (x225*(x226<=(x227/x228)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = -1;
	int16_t x230 = -1;
	static uint64_t x232 = 116859478236980LLU;

	t51 = (x229*(x230<=(x231/x232)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = 11310793LL;
	int8_t x234 = -1;
	volatile int8_t x235 = INT8_MIN;
	int32_t x236 = 13;
	volatile int64_t t52 = 478185879852682249LL;

	t52 = (x233*(x234<=(x235/x236)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x237 = -9956LL;
	uint8_t x238 = 93U;
	static int8_t x240 = -1;
	volatile int64_t t53 = 1590348442LL;

	t53 = (x237*(x238<=(x239/x240)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x242 = -1;
	volatile int32_t x244 = -69345;
	int32_t t54 = -7954493;

	t54 = (x241*(x242<=(x243/x244)));

	if (t54 != 15) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x246 = -15207LL;
	int32_t x247 = INT32_MIN;

	t55 = (x245*(x246<=(x247/x248)));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x250 = 496U;
	int8_t x251 = INT8_MAX;

	t56 = (x249*(x250<=(x251/x252)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x253 = -359434LL;
	static uint8_t x254 = 3U;
	int16_t x255 = INT16_MAX;
	volatile int64_t t57 = 7419439651041235LL;

	t57 = (x253*(x254<=(x255/x256)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = 4301535782293722917LL;
	int8_t x259 = -21;
	volatile int64_t t58 = 873010628422870973LL;

	t58 = (x257*(x258<=(x259/x260)));

	if (t58 != 4301535782293722917LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = INT64_MIN;
	uint8_t x262 = UINT8_MAX;
	volatile int64_t t59 = INT64_MIN;

	t59 = (x261*(x262<=(x263/x264)));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x265 = INT64_MIN;
	volatile int16_t x266 = -1;
	static int16_t x268 = INT16_MIN;
	static int64_t t60 = INT64_MIN;

	t60 = (x265*(x266<=(x267/x268)));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x270 = INT32_MIN;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = -1094422;

	t61 = (x269*(x270<=(x271/x272)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x273 = 12U;
	static uint16_t x275 = 3081U;
	static volatile int64_t x276 = -35249LL;
	int32_t t62 = 26368971;

	t62 = (x273*(x274<=(x275/x276)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x277 = INT64_MIN;
	uint64_t x278 = 2911344562507443LLU;
	static int16_t x279 = INT16_MIN;
	int16_t x280 = INT16_MIN;

	t63 = (x277*(x278<=(x279/x280)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = -1;
	volatile uint8_t x282 = 0U;
	int32_t x283 = 35;
	int64_t x284 = INT64_MIN;
	int32_t t64 = 2372;

	t64 = (x281*(x282<=(x283/x284)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = -1LL;
	uint16_t x290 = 4118U;
	int8_t x292 = INT8_MIN;

	t65 = (x289*(x290<=(x291/x292)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x293 = -54;
	uint16_t x295 = 2U;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t66 = -13234;

	t66 = (x293*(x294<=(x295/x296)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x297 = 11U;
	int16_t x298 = INT16_MAX;
	static int16_t x299 = INT16_MAX;
	static volatile int32_t t67 = 60746;

	t67 = (x297*(x298<=(x299/x300)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x301 = -3528030;
	int16_t x302 = 17;
	int8_t x304 = 1;
	volatile int32_t t68 = -16198;

	t68 = (x301*(x302<=(x303/x304)));

	if (t68 != -3528030) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x305 = 3166;
	volatile uint8_t x306 = UINT8_MAX;
	uint16_t x307 = 6U;
	volatile int32_t t69 = -41;

	t69 = (x305*(x306<=(x307/x308)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = -1LL;
	static int32_t x311 = 293;
	uint16_t x312 = 140U;
	volatile int32_t t70 = 263404662;

	t70 = (x309*(x310<=(x311/x312)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x313 = 1240190U;
	static int32_t x314 = INT32_MAX;
	uint8_t x315 = 3U;
	static volatile int64_t x316 = -1LL;

	t71 = (x313*(x314<=(x315/x316)));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x320 = INT8_MIN;
	int64_t t72 = 1244564063451LL;

	t72 = (x317*(x318<=(x319/x320)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x321 = 104888LLU;
	int32_t x322 = INT32_MIN;
	volatile uint8_t x323 = 7U;
	static int64_t x324 = INT64_MAX;
	static uint64_t t73 = 124100042LLU;

	t73 = (x321*(x322<=(x323/x324)));

	if (t73 != 104888LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x329 = INT8_MIN;
	static int16_t x331 = INT16_MIN;
	volatile uint16_t x332 = 15025U;
	static volatile int32_t t74 = -26;

	t74 = (x329*(x330<=(x331/x332)));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x334 = INT8_MIN;
	uint32_t x335 = UINT32_MAX;
	static int8_t x336 = INT8_MIN;
	static volatile int32_t t75 = 121390920;

	t75 = (x333*(x334<=(x335/x336)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = INT32_MAX;
	uint32_t x338 = 647532316U;
	uint8_t x339 = UINT8_MAX;
	uint64_t x340 = 15528611365LLU;
	int32_t t76 = 3488196;

	t76 = (x337*(x338<=(x339/x340)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x341 = 1;
	uint8_t x343 = 53U;
	static uint64_t x344 = 8LLU;

	t77 = (x341*(x342<=(x343/x344)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x346 = 1U;
	uint8_t x348 = 120U;
	volatile int32_t t78 = 9740;

	t78 = (x345*(x346<=(x347/x348)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x350 = 57U;
	static uint8_t x351 = UINT8_MAX;
	volatile int8_t x352 = -1;
	volatile int64_t t79 = -465LL;

	t79 = (x349*(x350<=(x351/x352)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = -1LL;
	volatile int16_t x354 = -1;
	int16_t x355 = -1;
	int8_t x356 = INT8_MIN;
	int64_t t80 = 476990614678157976LL;

	t80 = (x353*(x354<=(x355/x356)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x357 = 330135LLU;
	int16_t x360 = 8;
	volatile uint64_t t81 = 10LLU;

	t81 = (x357*(x358<=(x359/x360)));

	if (t81 != 330135LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = INT32_MAX;
	volatile int32_t x362 = INT32_MIN;
	volatile uint8_t x363 = 2U;
	int64_t x364 = INT64_MAX;
	static int32_t t82 = INT32_MAX;

	t82 = (x361*(x362<=(x363/x364)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x366 = 38387;
	volatile int32_t x367 = INT32_MIN;
	volatile int64_t x368 = -1LL;
	int32_t t83 = -204031;

	t83 = (x365*(x366<=(x367/x368)));

	if (t83 != 5) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x369 = 16813LLU;
	int16_t x370 = INT16_MIN;
	static uint16_t x372 = 23U;
	uint64_t t84 = 68576LLU;

	t84 = (x369*(x370<=(x371/x372)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x373 = UINT32_MAX;
	int16_t x374 = -1;
	volatile int16_t x375 = -1;
	int16_t x376 = -106;

	t85 = (x373*(x374<=(x375/x376)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x377 = UINT32_MAX;
	int16_t x378 = INT16_MIN;
	uint64_t x379 = 199401545LLU;
	uint8_t x380 = UINT8_MAX;
	uint32_t t86 = 1U;

	t86 = (x377*(x378<=(x379/x380)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = -1;
	int32_t x382 = INT32_MIN;
	int16_t x383 = -1;
	uint32_t x384 = 70U;

	t87 = (x381*(x382<=(x383/x384)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x391 = UINT16_MAX;
	int32_t x392 = 507984;
	static int32_t t88 = -853;

	t88 = (x389*(x390<=(x391/x392)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x397 = INT64_MIN;
	int16_t x399 = 6687;
	static int32_t x400 = -1;
	volatile int64_t t89 = INT64_MIN;

	t89 = (x397*(x398<=(x399/x400)));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = 84;
	int16_t x403 = 0;

	t90 = (x401*(x402<=(x403/x404)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x405 = UINT32_MAX;
	uint64_t x406 = 397754LLU;
	volatile int16_t x407 = -1860;
	uint16_t x408 = UINT16_MAX;
	volatile uint32_t t91 = 10524132U;

	t91 = (x405*(x406<=(x407/x408)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x409 = 3U;
	int64_t x410 = INT64_MIN;
	static int8_t x411 = INT8_MIN;
	static int64_t x412 = -1LL;
	volatile int32_t t92 = -377958632;

	t92 = (x409*(x410<=(x411/x412)));

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x413 = INT32_MAX;
	static volatile int32_t x414 = -1;
	uint16_t x415 = 51U;
	int8_t x416 = INT8_MAX;
	static volatile int32_t t93 = INT32_MAX;

	t93 = (x413*(x414<=(x415/x416)));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = INT8_MIN;
	volatile int64_t x419 = -1LL;
	uint8_t x420 = 79U;
	int32_t t94 = 75;

	t94 = (x417*(x418<=(x419/x420)));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x421 = 22;
	uint64_t x422 = 474473974891367632LLU;
	volatile int16_t x424 = -255;
	int32_t t95 = 7;

	t95 = (x421*(x422<=(x423/x424)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x425 = INT16_MIN;
	int16_t x426 = 224;
	static volatile int16_t x428 = -16;
	static int32_t t96 = 195407;

	t96 = (x425*(x426<=(x427/x428)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x429 = INT64_MIN;
	int8_t x430 = INT8_MAX;
	int32_t x431 = 8029128;
	static int16_t x432 = 31;
	volatile int64_t t97 = INT64_MIN;

	t97 = (x429*(x430<=(x431/x432)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x433 = 1U;
	volatile uint64_t x435 = 2075619440535LLU;
	int32_t t98 = 22;

	t98 = (x433*(x434<=(x435/x436)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x437 = 16719LLU;
	int32_t x438 = INT32_MIN;
	int16_t x439 = INT16_MAX;
	int8_t x440 = INT8_MIN;
	uint64_t t99 = 5030013160117691LLU;

	t99 = (x437*(x438<=(x439/x440)));

	if (t99 != 16719LLU) { NG(); } else { ; }
	
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

