#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
static int64_t x4 = -899192372466LL;
static int64_t x10 = INT64_MIN;
volatile uint8_t x12 = 5U;
static int32_t t2 = -3;
volatile int16_t x23 = -12;
static int16_t x35 = 3;
int32_t t7 = 5945;
static volatile int16_t x41 = -1;
int32_t x43 = -59;
volatile int32_t t8 = -1044;
int32_t t9 = 822959;
int32_t x49 = 307;
int32_t x53 = -1;
static volatile int32_t t11 = 56285420;
int8_t x62 = INT8_MAX;
int16_t x66 = INT16_MIN;
int8_t x68 = INT8_MIN;
int8_t x83 = -1;
uint8_t x85 = 0U;
static int16_t x87 = -2559;
uint32_t x88 = UINT32_MAX;
static int32_t t19 = -149365239;
uint16_t x94 = 1372U;
static volatile int32_t t22 = -2;
int16_t x111 = -1;
uint16_t x123 = 491U;
int8_t x128 = 0;
static volatile int64_t t27 = 48LL;
int64_t x131 = 919LL;
int64_t x132 = -2099554196124331LL;
static volatile uint8_t x139 = 33U;
static int32_t t30 = 21687017;
int16_t x151 = INT16_MAX;
static uint64_t x153 = UINT64_MAX;
static uint64_t t32 = 18195429931116LLU;
uint64_t x165 = 3503510172173533LLU;
int64_t x166 = INT64_MIN;
uint64_t x167 = 1773776LLU;
static int32_t t35 = 256;
static volatile uint8_t x188 = 5U;
volatile int64_t x193 = INT64_MIN;
volatile int32_t x195 = -1563;
int64_t t38 = INT64_MIN;
volatile uint32_t x200 = 98830U;
int8_t x205 = INT8_MIN;
volatile uint16_t x215 = UINT16_MAX;
static int8_t x228 = INT8_MIN;
uint16_t x237 = 11393U;
static uint8_t x246 = UINT8_MAX;
volatile int64_t t49 = INT64_MIN;
static uint32_t x249 = 272U;
volatile uint8_t x252 = UINT8_MAX;
int8_t x264 = INT8_MIN;
uint32_t x267 = UINT32_MAX;
uint16_t x273 = UINT16_MAX;
int16_t x280 = INT16_MIN;
int32_t t56 = INT32_MIN;
uint16_t x287 = 30193U;
static int32_t t58 = -714775;
int8_t x292 = -47;
static int8_t x293 = INT8_MIN;
int8_t x313 = INT8_MIN;
volatile int32_t t66 = 10;
int16_t x324 = 7;
int64_t x327 = INT64_MAX;
int8_t x333 = 0;
int64_t x337 = INT64_MAX;
static int64_t x347 = -1LL;
uint16_t x359 = UINT16_MAX;
int32_t t77 = INT32_MIN;
static int16_t x365 = INT16_MIN;
volatile uint8_t x366 = UINT8_MAX;
int64_t x372 = -4379LL;
int8_t x376 = -1;
int16_t x381 = -96;
uint16_t x385 = 98U;
int16_t x389 = INT16_MAX;
int32_t x390 = INT32_MIN;
uint64_t x393 = UINT64_MAX;
uint64_t t85 = UINT64_MAX;
volatile uint64_t x400 = 150418177660LLU;
uint32_t x429 = 784U;
int16_t x433 = INT16_MAX;
volatile int32_t t98 = 237;
int16_t x455 = INT16_MIN;


void f0(void) {
	static volatile int8_t x2 = -4;
	uint16_t x3 = 0U;
	int32_t t0 = 16;

	t0 = (x1*(x2<(x3-x4)));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	static int8_t x6 = -1;
	volatile int16_t x7 = INT16_MIN;
	volatile int16_t x8 = -124;
	static volatile int32_t t1 = 52865890;

	t1 = (x5*(x6<(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int16_t x11 = INT16_MIN;

	t2 = (x9*(x10<(x11-x12)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = 21;
	int64_t x14 = -25695815364199082LL;
	int32_t x15 = INT32_MAX;
	uint16_t x16 = 0U;
	volatile int32_t t3 = 127016561;

	t3 = (x13*(x14<(x15-x16)));

	if (t3 != 21) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 1;
	static uint16_t x18 = 39U;
	int8_t x19 = -8;
	int16_t x20 = -1;
	static volatile int32_t t4 = -2996335;

	t4 = (x17*(x18<(x19-x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 53LLU;
	static int32_t x22 = 14;
	uint16_t x24 = 3U;
	uint64_t t5 = 2338539593917550LLU;

	t5 = (x21*(x22<(x23-x24)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 12476;
	volatile int16_t x30 = INT16_MIN;
	uint8_t x31 = 59U;
	int32_t x32 = -1;
	static int32_t t6 = 26941538;

	t6 = (x29*(x30<(x31-x32)));

	if (t6 != 12476) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -222;
	volatile int16_t x34 = -3;
	uint16_t x36 = UINT16_MAX;

	t7 = (x33*(x34<(x35-x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x42 = 27678955633LL;
	int8_t x44 = INT8_MAX;

	t8 = (x41*(x42<(x43-x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = -477;
	static uint16_t x46 = UINT16_MAX;
	uint32_t x47 = 24U;
	volatile int32_t x48 = INT32_MIN;

	t9 = (x45*(x46<(x47-x48)));

	if (t9 != -477) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x50 = 7;
	static int32_t x51 = -1;
	int32_t x52 = INT32_MAX;
	static int32_t t10 = 723;

	t10 = (x49*(x50<(x51-x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x54 = UINT64_MAX;
	volatile int16_t x55 = 1;
	uint8_t x56 = UINT8_MAX;

	t11 = (x53*(x54<(x55-x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	int64_t x58 = -25131490709LL;
	uint16_t x59 = 2061U;
	static int8_t x60 = INT8_MIN;
	volatile int64_t t12 = INT64_MIN;

	t12 = (x57*(x58<(x59-x60)));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x61 = 4;
	int8_t x63 = -11;
	volatile int16_t x64 = INT16_MIN;
	static int32_t t13 = 99811174;

	t13 = (x61*(x62<(x63-x64)));

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -1;
	volatile int8_t x67 = INT8_MIN;
	static volatile int32_t t14 = -347767601;

	t14 = (x65*(x66<(x67-x68)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	int32_t x70 = INT32_MIN;
	int8_t x71 = -1;
	uint8_t x72 = 3U;
	volatile int64_t t15 = INT64_MIN;

	t15 = (x69*(x70<(x71-x72)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	static int16_t x74 = INT16_MIN;
	uint8_t x75 = UINT8_MAX;
	int8_t x76 = 1;
	volatile int32_t t16 = INT32_MIN;

	t16 = (x73*(x74<(x75-x76)));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x77 = -382668078970155661LL;
	volatile uint16_t x78 = 2U;
	volatile uint16_t x79 = UINT16_MAX;
	static int32_t x80 = INT32_MAX;
	static int64_t t17 = -4996282LL;

	t17 = (x77*(x78<(x79-x80)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x81 = UINT32_MAX;
	static uint64_t x82 = 12943184827LLU;
	static int64_t x84 = INT64_MIN;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = (x81*(x82<(x83-x84)));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x86 = INT16_MIN;

	t19 = (x85*(x86<(x87-x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x89 = 10766LLU;
	int32_t x90 = -4244;
	static int16_t x91 = -1;
	uint32_t x92 = 57U;
	volatile uint64_t t20 = 1244636768079674LLU;

	t20 = (x89*(x90<(x91-x92)));

	if (t20 != 10766LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = 146LLU;
	uint32_t x95 = 965518U;
	uint64_t x96 = 11LLU;
	uint64_t t21 = 336LLU;

	t21 = (x93*(x94<(x95-x96)));

	if (t21 != 146LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = UINT16_MAX;
	int8_t x98 = -1;
	int64_t x99 = INT64_MIN;
	int8_t x100 = INT8_MIN;

	t22 = (x97*(x98<(x99-x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MAX;
	volatile uint64_t x106 = UINT64_MAX;
	int16_t x107 = INT16_MIN;
	int64_t x108 = -1LL;
	volatile int32_t t23 = 9746;

	t23 = (x105*(x106<(x107-x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = UINT16_MAX;
	int8_t x110 = INT8_MIN;
	volatile int64_t x112 = 1010984533570539677LL;
	volatile int32_t t24 = 23;

	t24 = (x109*(x110<(x111-x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = 43228067545205LLU;
	uint32_t x114 = UINT32_MAX;
	uint32_t x115 = 1840510U;
	int8_t x116 = -39;
	volatile uint64_t t25 = 957147665LLU;

	t25 = (x113*(x114<(x115-x116)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x121 = INT8_MIN;
	volatile int64_t x122 = 11279309586LL;
	int8_t x124 = 1;
	volatile int32_t t26 = -35;

	t26 = (x121*(x122<(x123-x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = 342757700552LL;
	int16_t x126 = 0;
	int16_t x127 = INT16_MAX;

	t27 = (x125*(x126<(x127-x128)));

	if (t27 != 342757700552LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x129 = UINT8_MAX;
	int32_t x130 = INT32_MIN;
	int32_t t28 = 169;

	t28 = (x129*(x130<(x131-x132)));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = INT32_MAX;
	int8_t x138 = -4;
	uint8_t x140 = 6U;
	int32_t t29 = INT32_MAX;

	t29 = (x137*(x138<(x139-x140)));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x141 = 5;
	static int8_t x142 = 0;
	int32_t x143 = -1;
	int8_t x144 = INT8_MAX;

	t30 = (x141*(x142<(x143-x144)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x149 = 0U;
	int64_t x150 = INT64_MAX;
	uint64_t x152 = 165LLU;
	volatile int32_t t31 = 340;

	t31 = (x149*(x150<(x151-x152)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x154 = INT32_MIN;
	uint16_t x155 = 800U;
	int64_t x156 = INT64_MAX;

	t32 = (x153*(x154<(x155-x156)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x157 = INT32_MIN;
	static int8_t x158 = INT8_MIN;
	uint16_t x159 = 21U;
	static int8_t x160 = INT8_MAX;
	int32_t t33 = INT32_MIN;

	t33 = (x157*(x158<(x159-x160)));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x168 = UINT16_MAX;
	static uint64_t t34 = 472369768LLU;

	t34 = (x165*(x166<(x167-x168)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x173 = INT8_MIN;
	volatile int8_t x174 = -61;
	static int64_t x175 = 0LL;
	static int64_t x176 = -20348686094489LL;

	t35 = (x173*(x174<(x175-x176)));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x181 = 0;
	uint32_t x182 = 0U;
	int16_t x183 = INT16_MIN;
	uint64_t x184 = 72510LLU;
	volatile int32_t t36 = 190;

	t36 = (x181*(x182<(x183-x184)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x185 = INT64_MIN;
	static uint32_t x186 = 712U;
	int32_t x187 = -1;
	volatile int64_t t37 = INT64_MIN;

	t37 = (x185*(x186<(x187-x188)));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x194 = 1;
	static int64_t x196 = INT64_MIN;

	t38 = (x193*(x194<(x195-x196)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MIN;
	uint16_t x199 = UINT16_MAX;
	int32_t t39 = 12192660;

	t39 = (x197*(x198<(x199-x200)));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x201 = INT32_MAX;
	int8_t x202 = -4;
	int32_t x203 = -1;
	int16_t x204 = INT16_MIN;
	static volatile int32_t t40 = INT32_MAX;

	t40 = (x201*(x202<(x203-x204)));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x206 = 53U;
	uint8_t x207 = 51U;
	int16_t x208 = INT16_MIN;
	volatile int32_t t41 = -130;

	t41 = (x205*(x206<(x207-x208)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x209 = INT32_MAX;
	int32_t x210 = 0;
	int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t42 = 119527052;

	t42 = (x209*(x210<(x211-x212)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x213 = INT64_MIN;
	volatile int8_t x214 = -1;
	int64_t x216 = INT64_MAX;
	volatile int64_t t43 = 2573LL;

	t43 = (x213*(x214<(x215-x216)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x221 = -1;
	int16_t x222 = 4830;
	static uint8_t x223 = 0U;
	uint8_t x224 = 81U;
	int32_t t44 = -19128118;

	t44 = (x221*(x222<(x223-x224)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x225 = INT32_MIN;
	static volatile int32_t x226 = -6256460;
	int8_t x227 = 26;
	volatile int32_t t45 = INT32_MIN;

	t45 = (x225*(x226<(x227-x228)));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x229 = 0U;
	int32_t x230 = -347;
	int32_t x231 = -972;
	volatile uint64_t x232 = UINT64_MAX;
	volatile int32_t t46 = -313;

	t46 = (x229*(x230<(x231-x232)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MAX;
	int32_t x235 = INT32_MIN;
	static uint32_t x236 = UINT32_MAX;
	volatile int32_t t47 = -231;

	t47 = (x233*(x234<(x235-x236)));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x238 = UINT32_MAX;
	static int16_t x239 = 43;
	uint8_t x240 = UINT8_MAX;
	int32_t t48 = 1985718;

	t48 = (x237*(x238<(x239-x240)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x245 = INT64_MIN;
	int64_t x247 = 22379535697349LL;
	static int8_t x248 = INT8_MAX;

	t49 = (x245*(x246<(x247-x248)));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x250 = UINT32_MAX;
	static int64_t x251 = 4580LL;
	volatile uint32_t t50 = 2U;

	t50 = (x249*(x250<(x251-x252)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x257 = INT8_MIN;
	uint32_t x258 = 5U;
	int8_t x259 = INT8_MAX;
	int8_t x260 = INT8_MIN;
	int32_t t51 = 50630;

	t51 = (x257*(x258<(x259-x260)));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x261 = UINT64_MAX;
	int8_t x262 = -19;
	static int16_t x263 = INT16_MAX;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (x261*(x262<(x263-x264)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x265 = INT32_MIN;
	static uint32_t x266 = UINT32_MAX;
	int8_t x268 = -1;
	int32_t t53 = -6683;

	t53 = (x265*(x266<(x267-x268)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x269 = UINT32_MAX;
	int8_t x270 = INT8_MIN;
	static volatile uint16_t x271 = 12321U;
	uint8_t x272 = 46U;
	uint32_t t54 = UINT32_MAX;

	t54 = (x269*(x270<(x271-x272)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x274 = INT8_MAX;
	volatile int64_t x275 = 96209031LL;
	static uint8_t x276 = 62U;
	volatile int32_t t55 = -903452;

	t55 = (x273*(x274<(x275-x276)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x277 = INT32_MIN;
	static int16_t x278 = -266;
	static int16_t x279 = 3;

	t56 = (x277*(x278<(x279-x280)));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x281 = 88220U;
	int64_t x282 = INT64_MIN;
	uint8_t x283 = UINT8_MAX;
	volatile int8_t x284 = 3;
	volatile uint32_t t57 = 123894103U;

	t57 = (x281*(x282<(x283-x284)));

	if (t57 != 88220U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x285 = 0;
	volatile int16_t x286 = -1;
	static uint8_t x288 = 5U;

	t58 = (x285*(x286<(x287-x288)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x289 = -55;
	uint8_t x290 = 6U;
	static uint16_t x291 = 12U;
	static volatile int32_t t59 = 1;

	t59 = (x289*(x290<(x291-x292)));

	if (t59 != -55) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x294 = INT16_MIN;
	static int16_t x295 = INT16_MIN;
	volatile int8_t x296 = 6;
	volatile int32_t t60 = 133;

	t60 = (x293*(x294<(x295-x296)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x297 = UINT8_MAX;
	int8_t x298 = INT8_MIN;
	static int16_t x299 = -12129;
	uint32_t x300 = UINT32_MAX;
	static volatile int32_t t61 = -2085681;

	t61 = (x297*(x298<(x299-x300)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = INT16_MAX;
	int8_t x302 = -1;
	volatile int8_t x303 = INT8_MIN;
	static int8_t x304 = INT8_MAX;
	static volatile int32_t t62 = 993953340;

	t62 = (x301*(x302<(x303-x304)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x305 = -1;
	volatile int16_t x306 = INT16_MAX;
	int8_t x307 = INT8_MAX;
	int16_t x308 = INT16_MIN;
	int32_t t63 = 7;

	t63 = (x305*(x306<(x307-x308)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x309 = INT64_MIN;
	static int16_t x310 = INT16_MIN;
	int16_t x311 = -1;
	uint8_t x312 = UINT8_MAX;
	int64_t t64 = INT64_MIN;

	t64 = (x309*(x310<(x311-x312)));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x314 = -61;
	uint8_t x315 = 16U;
	uint32_t x316 = 1821878U;
	int32_t t65 = -174057153;

	t65 = (x313*(x314<(x315-x316)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x317 = -1;
	volatile uint32_t x318 = UINT32_MAX;
	int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MIN;

	t66 = (x317*(x318<(x319-x320)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x321 = 90611759LLU;
	static int16_t x322 = INT16_MAX;
	int8_t x323 = INT8_MIN;
	uint64_t t67 = 46583237584071LLU;

	t67 = (x321*(x322<(x323-x324)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x325 = INT32_MIN;
	int32_t x326 = -1;
	uint8_t x328 = 75U;
	volatile int32_t t68 = INT32_MIN;

	t68 = (x325*(x326<(x327-x328)));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x329 = -148;
	volatile int16_t x330 = -1;
	int64_t x331 = 648234462401LL;
	uint16_t x332 = 0U;
	int32_t t69 = -30440;

	t69 = (x329*(x330<(x331-x332)));

	if (t69 != -148) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x334 = INT8_MAX;
	volatile uint64_t x335 = UINT64_MAX;
	static volatile int64_t x336 = INT64_MIN;
	int32_t t70 = 12;

	t70 = (x333*(x334<(x335-x336)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x338 = 7378;
	int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MIN;
	static int64_t t71 = INT64_MAX;

	t71 = (x337*(x338<(x339-x340)));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MAX;
	int32_t x343 = INT32_MIN;
	volatile int32_t x344 = -1;
	static volatile int32_t t72 = -250950339;

	t72 = (x341*(x342<(x343-x344)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x345 = 52U;
	int16_t x346 = INT16_MAX;
	static int8_t x348 = INT8_MIN;
	int32_t t73 = 15555681;

	t73 = (x345*(x346<(x347-x348)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x349 = 3U;
	uint8_t x350 = 112U;
	int16_t x351 = -420;
	int64_t x352 = INT64_MIN;
	volatile int32_t t74 = -6;

	t74 = (x349*(x350<(x351-x352)));

	if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x353 = -92934789012067892LL;
	uint16_t x354 = 3030U;
	int8_t x355 = INT8_MAX;
	int8_t x356 = INT8_MIN;
	static volatile int64_t t75 = 56648912170284075LL;

	t75 = (x353*(x354<(x355-x356)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x357 = INT64_MAX;
	static int64_t x358 = -1LL;
	uint64_t x360 = 3120011LLU;
	volatile int64_t t76 = 22LL;

	t76 = (x357*(x358<(x359-x360)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x361 = INT32_MIN;
	int64_t x362 = INT64_MIN;
	static volatile int32_t x363 = INT32_MIN;
	int16_t x364 = -1;

	t77 = (x361*(x362<(x363-x364)));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x367 = INT8_MAX;
	uint16_t x368 = 1844U;
	int32_t t78 = -3072;

	t78 = (x365*(x366<(x367-x368)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x369 = -1;
	static uint32_t x370 = 112216U;
	volatile int16_t x371 = INT16_MAX;
	int32_t t79 = -34283196;

	t79 = (x369*(x370<(x371-x372)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x373 = INT8_MIN;
	static volatile int32_t x374 = INT32_MIN;
	int8_t x375 = 0;
	volatile int32_t t80 = 33268722;

	t80 = (x373*(x374<(x375-x376)));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x377 = INT64_MIN;
	int64_t x378 = INT64_MAX;
	uint32_t x379 = UINT32_MAX;
	uint32_t x380 = 32012550U;
	volatile int64_t t81 = -2454948210265LL;

	t81 = (x377*(x378<(x379-x380)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x382 = INT64_MAX;
	int32_t x383 = INT32_MAX;
	int64_t x384 = -1LL;
	volatile int32_t t82 = -1633;

	t82 = (x381*(x382<(x383-x384)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x386 = 1U;
	int8_t x387 = -1;
	static volatile int64_t x388 = INT64_MIN;
	int32_t t83 = -1176613;

	t83 = (x385*(x386<(x387-x388)));

	if (t83 != 98) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x391 = 1LLU;
	int32_t x392 = -49187992;
	int32_t t84 = 448302;

	t84 = (x389*(x390<(x391-x392)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x394 = UINT32_MAX;
	volatile uint64_t x395 = 2064695503610216LLU;
	int16_t x396 = INT16_MAX;

	t85 = (x393*(x394<(x395-x396)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x397 = 13332746488LL;
	volatile int8_t x398 = -1;
	int8_t x399 = -1;
	volatile int64_t t86 = -21748860LL;

	t86 = (x397*(x398<(x399-x400)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x401 = UINT8_MAX;
	int32_t x402 = 0;
	static uint64_t x403 = 2249964915177557459LLU;
	int32_t x404 = INT32_MIN;
	volatile int32_t t87 = 589179;

	t87 = (x401*(x402<(x403-x404)));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x405 = INT32_MIN;
	uint32_t x406 = 5996U;
	int8_t x407 = -1;
	int32_t x408 = 27;
	volatile int32_t t88 = INT32_MIN;

	t88 = (x405*(x406<(x407-x408)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = -1;
	int8_t x410 = 36;
	static volatile int16_t x411 = INT16_MIN;
	static int8_t x412 = -4;
	int32_t t89 = -108382391;

	t89 = (x409*(x410<(x411-x412)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x413 = INT32_MIN;
	static int16_t x414 = -1;
	static uint8_t x415 = 1U;
	static int8_t x416 = 0;
	volatile int32_t t90 = INT32_MIN;

	t90 = (x413*(x414<(x415-x416)));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x417 = -8939219;
	uint64_t x418 = UINT64_MAX;
	uint64_t x419 = 48397LLU;
	int8_t x420 = -3;
	volatile int32_t t91 = -10845;

	t91 = (x417*(x418<(x419-x420)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x421 = INT16_MAX;
	volatile uint32_t x422 = 521161491U;
	int16_t x423 = 5;
	int64_t x424 = INT64_MAX;
	volatile int32_t t92 = 0;

	t92 = (x421*(x422<(x423-x424)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = -1;
	int16_t x426 = -1;
	int64_t x427 = -1LL;
	uint32_t x428 = 10728496U;
	volatile int32_t t93 = 156;

	t93 = (x425*(x426<(x427-x428)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x430 = UINT8_MAX;
	static uint64_t x431 = 2661LLU;
	int32_t x432 = -4746694;
	volatile uint32_t t94 = 46329U;

	t94 = (x429*(x430<(x431-x432)));

	if (t94 != 784U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x434 = 0;
	int8_t x435 = INT8_MIN;
	volatile int32_t x436 = -1;
	volatile int32_t t95 = -28520;

	t95 = (x433*(x434<(x435-x436)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x437 = INT16_MIN;
	int32_t x438 = -1358;
	volatile int64_t x439 = -1LL;
	static int16_t x440 = -1;
	int32_t t96 = -103;

	t96 = (x437*(x438<(x439-x440)));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x441 = UINT32_MAX;
	volatile int8_t x442 = INT8_MIN;
	int8_t x443 = INT8_MIN;
	volatile uint32_t x444 = 199U;
	uint32_t t97 = 13426041U;

	t97 = (x441*(x442<(x443-x444)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x445 = INT16_MAX;
	uint64_t x446 = 10772LLU;
	uint8_t x447 = UINT8_MAX;
	volatile uint32_t x448 = 11897486U;

	t98 = (x445*(x446<(x447-x448)));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x453 = INT16_MAX;
	volatile uint64_t x454 = UINT64_MAX;
	int16_t x456 = -11729;
	int32_t t99 = 761308448;

	t99 = (x453*(x454<(x455-x456)));

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

