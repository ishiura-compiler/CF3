#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 88U;
int64_t x11 = -3854749870LL;
volatile uint64_t t4 = 2LLU;
int32_t x29 = 6416;
uint32_t x32 = 837670U;
volatile int32_t x39 = -1;
volatile int64_t t6 = 138270782111245457LL;
volatile int8_t x63 = 1;
static volatile uint64_t t10 = 15LLU;
int64_t x66 = INT64_MIN;
volatile int16_t x78 = 10;
int32_t x86 = INT32_MAX;
int8_t x94 = -2;
static volatile int8_t x97 = INT8_MIN;
int64_t x98 = -2LL;
int64_t x105 = INT64_MAX;
volatile int64_t t17 = -23123695162LL;
uint64_t x118 = 86703280LLU;
static int64_t x119 = INT64_MIN;
static uint64_t x120 = UINT64_MAX;
uint16_t x130 = UINT16_MAX;
static uint64_t x132 = 313490407752LLU;
uint64_t x138 = UINT64_MAX;
int64_t x142 = INT64_MIN;
uint16_t x147 = 579U;
uint64_t x149 = 10524LLU;
uint32_t x150 = 51997U;
static int8_t x155 = 56;
volatile uint64_t t27 = 3036565118LLU;
uint64_t x173 = UINT64_MAX;
int64_t x196 = -1LL;
static int16_t x202 = -1;
static uint16_t x204 = UINT16_MAX;
int64_t x208 = -120LL;
uint32_t x211 = 90U;
static int64_t t41 = -166569575LL;
int8_t x224 = INT8_MAX;
int32_t t45 = 826;
uint8_t x239 = 0U;
uint8_t x271 = UINT8_MAX;
uint8_t x278 = 16U;
static uint8_t x282 = 5U;
int16_t x284 = -6437;
static volatile int32_t t53 = 19;
volatile uint32_t x290 = 116125287U;
uint16_t x291 = 7U;
static int32_t x292 = -1;
int32_t x293 = -1;
int32_t x297 = INT32_MIN;
volatile uint8_t x299 = 27U;
static uint32_t x300 = 2927830U;
int8_t x305 = -1;
static int64_t x316 = -1LL;
uint8_t x319 = 27U;
volatile int32_t t61 = 84311685;
static int8_t x328 = 11;
int8_t x330 = 1;
static uint32_t x333 = 56469U;
int8_t x335 = INT8_MAX;
volatile int32_t x360 = -90;
uint32_t x365 = UINT32_MAX;
int8_t x368 = INT8_MIN;
int16_t x376 = -1;
int64_t t73 = -286LL;
uint64_t x382 = UINT64_MAX;
int32_t x391 = INT32_MIN;
volatile int64_t t75 = 44081706LL;
volatile int8_t x396 = INT8_MIN;
uint8_t x404 = 1U;
volatile int16_t x407 = -1;
static int8_t x414 = -1;
int32_t x417 = INT32_MIN;
uint16_t x428 = UINT16_MAX;
volatile uint32_t t83 = 121751481U;
int32_t x431 = -1;
uint8_t x432 = 1U;
static volatile int64_t x433 = -137994LL;
int64_t x444 = -1LL;
volatile uint64_t t86 = 13233LLU;
int32_t x451 = INT32_MAX;
int16_t x456 = -3319;
volatile int64_t t88 = -27299LL;
int8_t x457 = INT8_MAX;
uint64_t t90 = 403LLU;
static int16_t x465 = -3623;
int64_t x467 = INT64_MIN;
int64_t x474 = 534875546437197268LL;
int32_t x475 = 1;
int64_t t93 = -11656880325777038LL;
uint64_t x478 = 102096744426057LLU;
static volatile uint64_t t94 = 16991264595728947LLU;
int64_t x486 = 11LL;
uint64_t t97 = 2LLU;


void f0(void) {
	static int32_t x5 = INT32_MAX;
	int16_t x7 = INT16_MIN;
	int32_t x8 = 1325;
	static int32_t t0 = -15681400;

	t0 = ((x5/x6)&(x7-x8));

	if (t0 != 24401939) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 11546;
	int64_t x10 = INT64_MIN;
	volatile int32_t x12 = -1;
	int64_t t1 = 2736LL;

	t1 = ((x9/x10)&(x11-x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = 3917634207051778030LL;
	int16_t x18 = INT16_MIN;
	uint64_t x19 = 250276556LLU;
	int8_t x20 = INT8_MAX;
	volatile uint64_t t2 = 1907463LLU;

	t2 = ((x17/x18)&(x19-x20));

	if (t2 != 149086213LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = UINT16_MAX;
	int32_t x22 = -5797;
	int8_t x23 = INT8_MAX;
	uint64_t x24 = 974273056997LLU;
	uint64_t t3 = 16675452LLU;

	t3 = ((x21/x22)&(x23-x24));

	if (t3 != 18446743099436494736LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MIN;
	volatile int16_t x26 = 11256;
	volatile uint16_t x27 = 8U;
	static volatile uint64_t x28 = 157274LLU;

	t4 = ((x25/x26)&(x27-x28));

	if (t4 != 18446744073709359278LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x30 = 8998LL;
	int16_t x31 = 2;
	volatile int64_t t5 = 31032472923675362LL;

	t5 = ((x29/x30)&(x31-x32));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x37 = 1035254U;
	uint16_t x38 = 14465U;
	static int64_t x40 = 159LL;

	t6 = ((x37/x38)&(x39-x40));

	if (t6 != 64LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 1U;
	static int16_t x42 = -1;
	int16_t x43 = 1;
	uint16_t x44 = 13061U;
	volatile int32_t t7 = 1;

	t7 = ((x41/x42)&(x43-x44));

	if (t7 != -13060) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x45 = -1LL;
	uint32_t x46 = UINT32_MAX;
	int8_t x47 = INT8_MIN;
	volatile uint32_t x48 = 526866U;
	int64_t t8 = -798LL;

	t8 = ((x45/x46)&(x47-x48));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x49 = INT8_MIN;
	static uint16_t x50 = UINT16_MAX;
	static int16_t x51 = INT16_MIN;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t9 = 11485396673985827LLU;

	t9 = ((x49/x50)&(x51-x52));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x61 = -1;
	uint32_t x62 = 358U;
	uint64_t x64 = UINT64_MAX;

	t10 = ((x61/x62)&(x63-x64));

	if (t10 != 2LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = INT64_MIN;
	uint8_t x67 = 22U;
	uint16_t x68 = UINT16_MAX;
	volatile int64_t t11 = 1013230709LL;

	t11 = ((x65/x66)&(x67-x68));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x77 = 1U;
	static int8_t x79 = INT8_MIN;
	int32_t x80 = 39;
	int32_t t12 = -381;

	t12 = ((x77/x78)&(x79-x80));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x85 = INT32_MIN;
	int8_t x87 = -1;
	int8_t x88 = -3;
	int32_t t13 = -59;

	t13 = ((x85/x86)&(x87-x88));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x93 = -1;
	uint32_t x95 = 11U;
	int32_t x96 = INT32_MIN;
	static volatile uint32_t t14 = 381185U;

	t14 = ((x93/x94)&(x95-x96));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x99 = INT8_MIN;
	volatile int64_t x100 = 6209385917LL;
	int64_t t15 = 27511LL;

	t15 = ((x97/x98)&(x99-x100));

	if (t15 != 64LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x106 = INT8_MIN;
	static volatile uint16_t x107 = UINT16_MAX;
	static int32_t x108 = -1;
	volatile int64_t t16 = 1601795396LL;

	t16 = ((x105/x106)&(x107-x108));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x109 = INT64_MIN;
	int16_t x110 = 290;
	int16_t x111 = INT16_MAX;
	static volatile int64_t x112 = 8291LL;

	t17 = ((x109/x110)&(x111-x112));

	if (t17 != 7168LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x113 = -1;
	int16_t x114 = 507;
	static int32_t x115 = -1;
	static volatile int64_t x116 = INT64_MIN;
	volatile int64_t t18 = 586306693874246107LL;

	t18 = ((x113/x114)&(x115-x116));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x117 = UINT8_MAX;
	volatile uint64_t t19 = 71521065LLU;

	t19 = ((x117/x118)&(x119-x120));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x125 = 1;
	int16_t x126 = INT16_MIN;
	int8_t x127 = INT8_MIN;
	int8_t x128 = -1;
	int32_t t20 = -713673;

	t20 = ((x125/x126)&(x127-x128));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x129 = INT8_MIN;
	volatile int64_t x131 = INT64_MAX;
	volatile uint64_t t21 = 1353600894528LLU;

	t21 = ((x129/x130)&(x131-x132));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x133 = 2U;
	volatile int16_t x134 = -1;
	int8_t x135 = INT8_MIN;
	int64_t x136 = 3296751589827181LL;
	int64_t t22 = 640LL;

	t22 = ((x133/x134)&(x135-x136));

	if (t22 != -3296751589827310LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x137 = -3;
	static uint16_t x139 = UINT16_MAX;
	uint8_t x140 = 121U;
	volatile uint64_t t23 = 44923489971LLU;

	t23 = ((x137/x138)&(x139-x140));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x141 = INT64_MIN;
	static uint32_t x143 = 0U;
	static int64_t x144 = -13LL;
	int64_t t24 = -21LL;

	t24 = ((x141/x142)&(x143-x144));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x145 = 3U;
	static int64_t x146 = INT64_MIN;
	int8_t x148 = 1;
	int64_t t25 = -1861LL;

	t25 = ((x145/x146)&(x147-x148));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x151 = UINT16_MAX;
	volatile uint16_t x152 = 105U;
	static uint64_t t26 = 6196783482106128LLU;

	t26 = ((x149/x150)&(x151-x152));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x153 = 11;
	uint64_t x154 = 371037328185326016LLU;
	int16_t x156 = INT16_MIN;

	t27 = ((x153/x154)&(x155-x156));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x157 = 17886;
	uint16_t x158 = UINT16_MAX;
	int8_t x159 = INT8_MIN;
	int32_t x160 = INT32_MIN;
	int32_t t28 = 11550;

	t28 = ((x157/x158)&(x159-x160));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x161 = 525U;
	static uint32_t x162 = 22U;
	int16_t x163 = 0;
	static uint8_t x164 = 3U;
	volatile uint32_t t29 = 16U;

	t29 = ((x161/x162)&(x163-x164));

	if (t29 != 21U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x174 = 115943878530309701LLU;
	int8_t x175 = -1;
	volatile int32_t x176 = INT32_MAX;
	uint64_t t30 = 111471700878220LLU;

	t30 = ((x173/x174)&(x175-x176));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x177 = 2U;
	volatile uint32_t x178 = 2U;
	int32_t x179 = INT32_MIN;
	static uint32_t x180 = 4856139U;
	volatile uint32_t t31 = 16231200U;

	t31 = ((x177/x178)&(x179-x180));

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x181 = -1;
	int16_t x182 = INT16_MIN;
	uint64_t x183 = 271284LLU;
	int64_t x184 = -214752199028716LL;
	static volatile uint64_t t32 = 224597LLU;

	t32 = ((x181/x182)&(x183-x184));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x185 = INT8_MAX;
	static uint16_t x186 = UINT16_MAX;
	int64_t x187 = INT64_MIN;
	int64_t x188 = INT64_MIN;
	volatile int64_t t33 = -438527518LL;

	t33 = ((x185/x186)&(x187-x188));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x189 = 35U;
	static int32_t x190 = -3099;
	int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MIN;
	int64_t t34 = -94LL;

	t34 = ((x189/x190)&(x191-x192));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x193 = INT16_MIN;
	static int64_t x194 = INT64_MIN;
	int32_t x195 = -2;
	int64_t t35 = 14LL;

	t35 = ((x193/x194)&(x195-x196));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x197 = UINT64_MAX;
	int8_t x198 = -22;
	uint64_t x199 = 1248506183292LLU;
	static int32_t x200 = 28;
	uint64_t t36 = 7LLU;

	t36 = ((x197/x198)&(x199-x200));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x201 = UINT64_MAX;
	volatile int16_t x203 = INT16_MAX;
	volatile uint64_t t37 = 247642LLU;

	t37 = ((x201/x202)&(x203-x204));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x205 = -54;
	volatile int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MIN;
	int64_t t38 = -175LL;

	t38 = ((x205/x206)&(x207-x208));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x209 = 24;
	int8_t x210 = INT8_MIN;
	int8_t x212 = -1;
	volatile uint32_t t39 = 1236627U;

	t39 = ((x209/x210)&(x211-x212));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x213 = INT64_MIN;
	uint16_t x214 = UINT16_MAX;
	static uint32_t x215 = 0U;
	int16_t x216 = INT16_MIN;
	volatile int64_t t40 = -104LL;

	t40 = ((x213/x214)&(x215-x216));

	if (t40 != 32768LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x217 = -1LL;
	uint8_t x218 = 36U;
	uint32_t x219 = 6363U;
	int8_t x220 = INT8_MIN;

	t41 = ((x217/x218)&(x219-x220));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x221 = UINT64_MAX;
	volatile int64_t x222 = -1LL;
	volatile uint16_t x223 = 13793U;
	uint64_t t42 = 28122233850065819LLU;

	t42 = ((x221/x222)&(x223-x224));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x225 = 166615;
	uint8_t x226 = UINT8_MAX;
	uint16_t x227 = 10162U;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t43 = -89;

	t43 = ((x225/x226)&(x227-x228));

	if (t43 != 641) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x229 = INT16_MIN;
	volatile int16_t x230 = INT16_MIN;
	static int16_t x231 = -1376;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t44 = 206934;

	t44 = ((x229/x230)&(x231-x232));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x233 = -14331;
	int16_t x234 = INT16_MAX;
	int8_t x235 = INT8_MIN;
	volatile uint16_t x236 = UINT16_MAX;

	t45 = ((x233/x234)&(x235-x236));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x237 = INT16_MIN;
	volatile uint16_t x238 = UINT16_MAX;
	volatile int64_t x240 = INT64_MAX;
	volatile int64_t t46 = -2503887LL;

	t46 = ((x237/x238)&(x239-x240));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MIN;
	int16_t x243 = -5885;
	int16_t x244 = -1;
	volatile int32_t t47 = -12229;

	t47 = ((x241/x242)&(x243-x244));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x257 = INT32_MIN;
	int16_t x258 = INT16_MIN;
	static uint32_t x259 = 3U;
	int64_t x260 = 1657LL;
	int64_t t48 = -660412718628744LL;

	t48 = ((x257/x258)&(x259-x260));

	if (t48 != 65536LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x261 = -1;
	static int16_t x262 = INT16_MIN;
	uint16_t x263 = 15U;
	static int8_t x264 = INT8_MIN;
	int32_t t49 = -7;

	t49 = ((x261/x262)&(x263-x264));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x269 = 157U;
	int64_t x270 = 2212234219788123LL;
	volatile uint32_t x272 = UINT32_MAX;
	volatile int64_t t50 = -98145261965546374LL;

	t50 = ((x269/x270)&(x271-x272));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x273 = UINT64_MAX;
	volatile int64_t x274 = -3926369087554LL;
	static int8_t x275 = -1;
	int32_t x276 = INT32_MIN;
	volatile uint64_t t51 = 712218669040383LLU;

	t51 = ((x273/x274)&(x275-x276));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x277 = 468460800172421905LLU;
	int16_t x279 = INT16_MIN;
	int16_t x280 = -1;
	volatile uint64_t t52 = 1706545LLU;

	t52 = ((x277/x278)&(x279-x280));

	if (t52 != 29278800010772481LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x281 = UINT16_MAX;
	int16_t x283 = INT16_MIN;

	t53 = ((x281/x282)&(x283-x284));

	if (t53 != 4385) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x289 = -97;
	uint32_t t54 = 283U;

	t54 = ((x289/x290)&(x291-x292));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x294 = UINT32_MAX;
	int64_t x295 = -3364LL;
	static volatile uint32_t x296 = 212832796U;
	volatile int64_t t55 = -2724147495443LL;

	t55 = ((x293/x294)&(x295-x296));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x298 = 1U;
	uint32_t t56 = 13850554U;

	t56 = ((x297/x298)&(x299-x300));

	if (t56 != 2147483648U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x306 = 21131U;
	int32_t x307 = INT32_MAX;
	int32_t x308 = INT32_MAX;
	static volatile int32_t t57 = 611;

	t57 = ((x305/x306)&(x307-x308));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x309 = 5291LLU;
	uint64_t x310 = 3089006939178210LLU;
	uint64_t x311 = UINT64_MAX;
	uint32_t x312 = 0U;
	static uint64_t t58 = 65168361LLU;

	t58 = ((x309/x310)&(x311-x312));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x313 = 14023;
	volatile int32_t x314 = INT32_MAX;
	uint32_t x315 = 1505114U;
	volatile int64_t t59 = 12735404870220464LL;

	t59 = ((x313/x314)&(x315-x316));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x317 = 0U;
	int8_t x318 = -1;
	int8_t x320 = -1;
	int32_t t60 = 2038;

	t60 = ((x317/x318)&(x319-x320));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x321 = INT16_MIN;
	int8_t x322 = 36;
	volatile int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;

	t61 = ((x321/x322)&(x323-x324));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = 1255LL;
	uint64_t x327 = 965533446918342LLU;
	volatile uint64_t t62 = 36358143LLU;

	t62 = ((x325/x326)&(x327-x328));

	if (t62 != 965533445210266LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x329 = 51U;
	static int8_t x331 = INT8_MAX;
	int16_t x332 = -1;
	volatile int32_t t63 = 1388;

	t63 = ((x329/x330)&(x331-x332));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x334 = INT64_MIN;
	int8_t x336 = INT8_MIN;
	volatile int64_t t64 = -11505LL;

	t64 = ((x333/x334)&(x335-x336));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x337 = 122404731;
	volatile int64_t x338 = INT64_MIN;
	int16_t x339 = INT16_MIN;
	static int8_t x340 = 0;
	volatile int64_t t65 = -7LL;

	t65 = ((x337/x338)&(x339-x340));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x341 = UINT16_MAX;
	volatile int32_t x342 = INT32_MIN;
	int8_t x343 = -14;
	int8_t x344 = INT8_MAX;
	volatile int32_t t66 = -896;

	t66 = ((x341/x342)&(x343-x344));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x345 = INT16_MIN;
	uint64_t x346 = 892951507076LLU;
	uint32_t x347 = 231523654U;
	uint32_t x348 = UINT32_MAX;
	volatile uint64_t t67 = 6024815632407072LLU;

	t67 = ((x345/x346)&(x347-x348));

	if (t67 != 17302850LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x349 = 18572071LL;
	int8_t x350 = 11;
	uint32_t x351 = 430U;
	volatile uint64_t x352 = UINT64_MAX;
	uint64_t t68 = 290359038468350LLU;

	t68 = ((x349/x350)&(x351-x352));

	if (t68 != 290LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x353 = -63219002051005LL;
	volatile int16_t x354 = INT16_MIN;
	int32_t x355 = -1;
	uint16_t x356 = 0U;
	volatile int64_t t69 = 1731LL;

	t69 = ((x353/x354)&(x355-x356));

	if (t69 != 1929290834LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x357 = -2;
	int8_t x358 = INT8_MAX;
	int64_t x359 = -1LL;
	int64_t t70 = -76487837147LL;

	t70 = ((x357/x358)&(x359-x360));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x366 = UINT16_MAX;
	uint16_t x367 = 2003U;
	volatile uint32_t t71 = 776U;

	t71 = ((x365/x366)&(x367-x368));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x369 = INT8_MIN;
	int64_t x370 = 35454555641437375LL;
	int64_t x371 = -1LL;
	int32_t x372 = INT32_MAX;
	volatile int64_t t72 = -5887326348LL;

	t72 = ((x369/x370)&(x371-x372));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x373 = 69U;
	volatile int64_t x374 = -68110LL;
	uint32_t x375 = 1004988U;

	t73 = ((x373/x374)&(x375-x376));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x381 = INT16_MAX;
	int32_t x383 = -1;
	uint64_t x384 = 476580096LLU;
	uint64_t t74 = 2694977840LLU;

	t74 = ((x381/x382)&(x383-x384));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x389 = INT64_MIN;
	volatile uint8_t x390 = 13U;
	uint32_t x392 = 26461732U;

	t75 = ((x389/x390)&(x391-x392));

	if (t75 != 643837960LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x393 = 507U;
	int8_t x394 = -1;
	volatile int16_t x395 = -4;
	uint32_t t76 = 0U;

	t76 = ((x393/x394)&(x395-x396));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x397 = INT16_MAX;
	static int16_t x398 = -1;
	static uint16_t x399 = UINT16_MAX;
	volatile int16_t x400 = INT16_MIN;
	int32_t t77 = 15870771;

	t77 = ((x397/x398)&(x399-x400));

	if (t77 != 65537) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x401 = 20U;
	uint8_t x402 = UINT8_MAX;
	volatile int32_t x403 = 4;
	static int32_t t78 = 83308014;

	t78 = ((x401/x402)&(x403-x404));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x405 = 19;
	int32_t x406 = -6005;
	int64_t x408 = INT64_MAX;
	int64_t t79 = 1927872860444LL;

	t79 = ((x405/x406)&(x407-x408));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x413 = UINT8_MAX;
	volatile int32_t x415 = -1;
	int16_t x416 = 15;
	volatile int32_t t80 = 141552;

	t80 = ((x413/x414)&(x415-x416));

	if (t80 != -256) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x418 = INT64_MAX;
	static int16_t x419 = INT16_MIN;
	static uint16_t x420 = 117U;
	volatile int64_t t81 = -427354259476LL;

	t81 = ((x417/x418)&(x419-x420));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x421 = -243;
	int16_t x422 = 966;
	uint64_t x423 = UINT64_MAX;
	static int64_t x424 = -1LL;
	uint64_t t82 = 37327867994870957LLU;

	t82 = ((x421/x422)&(x423-x424));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x425 = 2U;
	int8_t x426 = INT8_MIN;
	static uint8_t x427 = 20U;

	t83 = ((x425/x426)&(x427-x428));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x429 = 6U;
	static int64_t x430 = 25094284748808622LL;
	int64_t t84 = -7307033227807LL;

	t84 = ((x429/x430)&(x431-x432));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x434 = 3517;
	volatile int64_t x435 = -1471838472LL;
	volatile int64_t x436 = 418476039204101362LL;
	int64_t t85 = 8867725399755LL;

	t85 = ((x433/x434)&(x435-x436));

	if (t85 != -418476040675939840LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x441 = -227;
	uint64_t x442 = UINT64_MAX;
	volatile int32_t x443 = INT32_MIN;

	t86 = ((x441/x442)&(x443-x444));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x449 = INT32_MAX;
	volatile int64_t x450 = INT64_MIN;
	uint8_t x452 = UINT8_MAX;
	static int64_t t87 = 127615956663293LL;

	t87 = ((x449/x450)&(x451-x452));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x453 = INT32_MAX;
	uint32_t x454 = 87550239U;
	static int64_t x455 = INT64_MIN;

	t88 = ((x453/x454)&(x455-x456));

	if (t88 != 16LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x458 = -1;
	int64_t x459 = 6718528LL;
	int64_t x460 = 0LL;
	volatile int64_t t89 = -8102LL;

	t89 = ((x457/x458)&(x459-x460));

	if (t89 != 6718464LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x461 = INT16_MIN;
	uint64_t x462 = 1126611284513559816LLU;
	int32_t x463 = 10579235;
	uint8_t x464 = 3U;

	t90 = ((x461/x462)&(x463-x464));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x466 = INT64_MIN;
	volatile int32_t x468 = -54215287;
	static int64_t t91 = -86101091698331324LL;

	t91 = ((x465/x466)&(x467-x468));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x469 = INT8_MAX;
	int64_t x470 = 3504852646LL;
	static int8_t x471 = INT8_MIN;
	int16_t x472 = -1;
	static int64_t t92 = 0LL;

	t92 = ((x469/x470)&(x471-x472));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x473 = 9;
	static int64_t x476 = -1LL;

	t93 = ((x473/x474)&(x475-x476));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x477 = -1LL;
	static int8_t x479 = INT8_MAX;
	int64_t x480 = -1LL;

	t94 = ((x477/x478)&(x479-x480));

	if (t94 != 128LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x481 = 36U;
	static int64_t x482 = 33157441099LL;
	int16_t x483 = -1;
	int64_t x484 = INT64_MIN;
	int64_t t95 = 31426234LL;

	t95 = ((x481/x482)&(x483-x484));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x485 = -153193;
	static volatile int16_t x487 = -15;
	uint16_t x488 = 24827U;
	static int64_t t96 = -75744135934LL;

	t96 = ((x485/x486)&(x487-x488));

	if (t96 != -30574LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x489 = 6U;
	int16_t x490 = 1;
	volatile uint32_t x491 = 1717037U;
	uint64_t x492 = 178796344821593LLU;

	t97 = ((x489/x490)&(x491-x492));

	if (t97 != 4LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x493 = 0U;
	int64_t x494 = 20LL;
	int16_t x495 = -1;
	int64_t x496 = 431305572934175517LL;
	int64_t t98 = 34889496272754LL;

	t98 = ((x493/x494)&(x495-x496));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x497 = 66U;
	static int32_t x498 = -1;
	uint64_t x499 = 24LLU;
	static int64_t x500 = -60272185601853LL;
	volatile uint64_t t99 = 35LLU;

	t99 = ((x497/x498)&(x499-x500));

	if (t99 != 60272185601812LLU) { NG(); } else { ; }
	
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

