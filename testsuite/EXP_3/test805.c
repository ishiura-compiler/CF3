#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = INT64_MIN;
static int64_t t1 = 8LL;
int16_t x11 = INT16_MIN;
static int16_t x14 = INT16_MAX;
static int16_t x15 = INT16_MAX;
uint16_t x20 = 773U;
int32_t x22 = INT32_MIN;
volatile uint64_t t6 = 108521130LLU;
uint8_t x30 = 5U;
int64_t t8 = 1269824391430LL;
int64_t x44 = -66057113175822LL;
int8_t x47 = INT8_MAX;
int32_t x52 = -223183826;
int64_t x55 = INT64_MIN;
int32_t x56 = 243;
volatile int16_t x63 = 62;
uint16_t x65 = 13886U;
int16_t x67 = INT16_MAX;
int32_t x68 = INT32_MAX;
volatile int32_t t16 = -493037;
uint64_t x71 = UINT64_MAX;
int64_t x72 = 7622LL;
uint64_t t17 = 132LLU;
volatile int64_t t18 = -209LL;
int8_t x77 = 0;
uint32_t x79 = 1U;
static uint16_t x81 = UINT16_MAX;
static int32_t x89 = 5952;
static volatile uint16_t x92 = 4018U;
uint64_t t22 = 807273351293491500LLU;
int8_t x93 = INT8_MIN;
int64_t x94 = INT64_MIN;
static int32_t x95 = INT32_MIN;
uint16_t x98 = 1097U;
uint32_t x101 = 5336U;
int8_t x112 = INT8_MIN;
uint8_t x123 = 1U;
volatile int32_t t32 = 871718;
static volatile int16_t x133 = -3;
int32_t x139 = INT32_MIN;
static uint16_t x142 = 525U;
uint8_t x144 = 3U;
uint8_t x150 = 50U;
uint64_t x152 = 7LLU;
int64_t x153 = INT64_MAX;
int16_t x157 = 4030;
int8_t x158 = INT8_MIN;
uint16_t x160 = 1U;
static volatile int64_t t38 = 27LL;
int64_t x161 = 121427LL;
int64_t x162 = -1LL;
int64_t x170 = -29LL;
volatile int64_t t41 = -1852LL;
uint16_t x182 = 29645U;
uint8_t x191 = 6U;
int32_t x195 = INT32_MIN;
uint32_t x200 = UINT32_MAX;
volatile uint32_t t47 = 33U;
volatile int16_t x201 = 745;
volatile int16_t x206 = INT16_MAX;
int32_t x210 = INT32_MIN;
int64_t x214 = 7967100477477242LL;
static uint16_t x216 = 29U;
uint32_t t52 = 12U;
uint64_t x222 = UINT64_MAX;
static int32_t t54 = 436324;
uint16_t x231 = 3084U;
static uint64_t x237 = 16644704098502LLU;
volatile int16_t x239 = 126;
uint8_t x243 = UINT8_MAX;
int64_t x245 = INT64_MIN;
int8_t x253 = -1;
static int8_t x254 = -28;
static volatile int8_t x255 = INT8_MAX;
static uint32_t x260 = UINT32_MAX;
int32_t x264 = INT32_MIN;
volatile uint8_t x265 = 3U;
uint32_t t64 = 114515749U;
int16_t x271 = INT16_MIN;
uint16_t x278 = UINT16_MAX;
volatile uint16_t x297 = 863U;
int16_t x300 = 1;
static volatile int32_t t73 = 8308998;
uint8_t x305 = 62U;
volatile int16_t x307 = 178;
static uint8_t x308 = 56U;
int16_t x309 = 146;
volatile int16_t x311 = 1;
int64_t x313 = 110LL;
uint32_t x314 = 758U;
int8_t x315 = INT8_MAX;
volatile int32_t t76 = -10766161;
static int64_t x322 = INT64_MIN;
uint16_t x324 = 6588U;
static int32_t t77 = 3;
volatile int8_t x325 = 0;
int8_t x331 = INT8_MIN;
static volatile int16_t x332 = 1;
static volatile int64_t t80 = -951849942LL;
volatile uint32_t x343 = 46841U;
int8_t x344 = -3;
uint32_t t82 = 996U;
volatile int8_t x345 = -1;
int16_t x347 = -1;
static int8_t x353 = -1;
int32_t x356 = 141989524;
uint64_t t87 = 592LLU;
uint16_t x368 = 24768U;
uint16_t x373 = 72U;
int64_t x379 = INT64_MAX;
int8_t x383 = -1;
uint64_t t91 = 16568872357489LLU;
uint32_t x388 = 800895816U;
static volatile uint32_t t92 = 30U;
int16_t x393 = -1;
volatile uint32_t t94 = 3801U;
int16_t x398 = INT16_MIN;
static int64_t x400 = -1LL;
static int16_t x410 = 1;
int32_t x412 = INT32_MIN;
volatile int32_t t97 = 900253;
int64_t x413 = -10299848769804666LL;
volatile int32_t x416 = INT32_MIN;
uint32_t x419 = 7188573U;


void f0(void) {
	uint16_t x1 = 18180U;
	volatile int16_t x2 = INT16_MAX;
	int32_t x3 = INT32_MAX;
	static int8_t x4 = INT8_MIN;
	static int32_t t0 = 865921;

	t0 = ((x1<=x2)|(x3%x4));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	static uint16_t x6 = 14U;
	volatile uint16_t x8 = 2700U;

	t1 = ((x5<=x6)|(x7%x8));

	if (t1 != -1807LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	volatile uint8_t x10 = 89U;
	int32_t x12 = -1;
	int32_t t2 = 6427849;

	t2 = ((x9<=x10)|(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 0;
	static int8_t x16 = 1;
	int32_t t3 = -463387;

	t3 = ((x13<=x14)|(x15%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 60;
	uint32_t x18 = 1427485U;
	static volatile int32_t x19 = INT32_MAX;
	int32_t t4 = 1023483001;

	t4 = ((x17<=x18)|(x19%x20));

	if (t4 != 753) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 7;
	int16_t x23 = -2005;
	int64_t x24 = INT64_MAX;
	volatile int64_t t5 = 1875450LL;

	t5 = ((x21<=x22)|(x23%x24));

	if (t5 != -2005LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -2589161204804028LL;
	uint64_t x26 = 2LLU;
	uint64_t x27 = 16244LLU;
	static int16_t x28 = INT16_MIN;

	t6 = ((x25<=x26)|(x27%x28));

	if (t6 != 16244LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	static uint8_t x31 = 6U;
	int64_t x32 = 3LL;
	int64_t t7 = 0LL;

	t7 = ((x29<=x30)|(x31%x32));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	static int64_t x34 = INT64_MIN;
	uint16_t x35 = UINT16_MAX;
	volatile int64_t x36 = INT64_MIN;

	t8 = ((x33<=x34)|(x35%x36));

	if (t8 != 65535LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = 83620638;
	static int8_t x38 = INT8_MIN;
	volatile int8_t x39 = INT8_MIN;
	volatile int32_t x40 = INT32_MAX;
	int32_t t9 = 258255;

	t9 = ((x37<=x38)|(x39%x40));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	volatile int32_t x42 = 534;
	volatile int16_t x43 = INT16_MIN;
	int64_t t10 = -1322301234242940LL;

	t10 = ((x41<=x42)|(x43%x44));

	if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = UINT8_MAX;
	int8_t x46 = -1;
	int64_t x48 = INT64_MAX;
	volatile int64_t t11 = -983473LL;

	t11 = ((x45<=x46)|(x47%x48));

	if (t11 != 127LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = 661;
	volatile int64_t x50 = INT64_MAX;
	static int32_t x51 = INT32_MAX;
	int32_t t12 = -4;

	t12 = ((x49<=x50)|(x51%x52));

	if (t12 != 138829213) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1LL;
	uint64_t x54 = 16970164626107LLU;
	int64_t t13 = 6645537874LL;

	t13 = ((x53<=x54)|(x55%x56));

	if (t13 != -188LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 22U;
	static int8_t x58 = 1;
	static int32_t x59 = INT32_MIN;
	int64_t x60 = INT64_MIN;
	static int64_t t14 = 21912141571LL;

	t14 = ((x57<=x58)|(x59%x60));

	if (t14 != -2147483648LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int64_t x62 = INT64_MIN;
	uint32_t x64 = 1317244U;
	static uint32_t t15 = 35U;

	t15 = ((x61<=x62)|(x63%x64));

	if (t15 != 62U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 6U;

	t16 = ((x65<=x66)|(x67%x68));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	uint16_t x70 = UINT16_MAX;

	t17 = ((x69<=x70)|(x71%x72));

	if (t17 != 4895LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = UINT64_MAX;
	static int64_t x74 = INT64_MIN;
	volatile int64_t x75 = 54417847LL;
	volatile int32_t x76 = -989;

	t18 = ((x73<=x74)|(x75%x76));

	if (t18 != 100LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = -1LL;
	uint32_t x80 = 25U;
	volatile uint32_t t19 = 11345U;

	t19 = ((x77<=x78)|(x79%x80));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = INT64_MIN;
	int32_t x83 = -3;
	int64_t x84 = INT64_MIN;
	volatile int64_t t20 = 423LL;

	t20 = ((x81<=x82)|(x83%x84));

	if (t20 != -3LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	static uint8_t x86 = UINT8_MAX;
	static int8_t x87 = INT8_MAX;
	int8_t x88 = -1;
	int32_t t21 = -64951794;

	t21 = ((x85<=x86)|(x87%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = INT32_MIN;
	uint64_t x91 = 13729782378832LLU;

	t22 = ((x89<=x90)|(x91%x92));

	if (t22 != 702LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x96 = 857U;
	volatile uint32_t t23 = 1061U;

	t23 = ((x93<=x94)|(x95%x96));

	if (t23 != 193U) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MIN;
	int8_t x99 = 3;
	uint32_t x100 = 947282003U;
	uint32_t t24 = 0U;

	t24 = ((x97<=x98)|(x99%x100));

	if (t24 != 3U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = 1U;
	int8_t x103 = 9;
	uint16_t x104 = UINT16_MAX;
	int32_t t25 = -25236912;

	t25 = ((x101<=x102)|(x103%x104));

	if (t25 != 9) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	uint16_t x106 = UINT16_MAX;
	uint32_t x107 = 82200742U;
	static int64_t x108 = INT64_MAX;
	int64_t t26 = -1LL;

	t26 = ((x105<=x106)|(x107%x108));

	if (t26 != 82200743LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	uint16_t x110 = 31191U;
	static uint8_t x111 = 2U;
	int32_t t27 = -3604714;

	t27 = ((x109<=x110)|(x111%x112));

	if (t27 != 3) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 52916507LLU;
	static uint16_t x114 = 5U;
	static int32_t x115 = INT32_MAX;
	volatile uint16_t x116 = UINT16_MAX;
	int32_t t28 = 552736111;

	t28 = ((x113<=x114)|(x115%x116));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	static int64_t x118 = INT64_MAX;
	int16_t x119 = INT16_MIN;
	volatile uint16_t x120 = UINT16_MAX;
	int32_t t29 = 11840;

	t29 = ((x117<=x118)|(x119%x120));

	if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 43385LLU;
	int8_t x122 = INT8_MIN;
	static int32_t x124 = -74;
	int32_t t30 = 2494;

	t30 = ((x121<=x122)|(x123%x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	uint8_t x126 = 0U;
	int16_t x127 = INT16_MAX;
	volatile int16_t x128 = -256;
	volatile int32_t t31 = -315598808;

	t31 = ((x125<=x126)|(x127%x128));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	int16_t x130 = -1018;
	int32_t x131 = -384188;
	int32_t x132 = -23;

	t32 = ((x129<=x130)|(x131%x132));

	if (t32 != -19) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x134 = 10355648U;
	uint32_t x135 = UINT32_MAX;
	int32_t x136 = -1;
	static volatile uint32_t t33 = 19352049U;

	t33 = ((x133<=x134)|(x135%x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	int64_t x138 = INT64_MIN;
	volatile uint8_t x140 = UINT8_MAX;
	int32_t t34 = 1;

	t34 = ((x137<=x138)|(x139%x140));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 0U;
	int32_t x143 = INT32_MIN;
	static int32_t t35 = 260650245;

	t35 = ((x141<=x142)|(x143%x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = 1;
	volatile uint32_t x151 = 18511132U;
	volatile uint64_t t36 = 1523988713155498285LLU;

	t36 = ((x149<=x150)|(x151%x152));

	if (t36 != 3LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x154 = INT64_MIN;
	volatile int64_t x155 = -1LL;
	int16_t x156 = 4;
	int64_t t37 = -27503506950LL;

	t37 = ((x153<=x154)|(x155%x156));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x159 = INT64_MIN;

	t38 = ((x157<=x158)|(x159%x160));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x163 = UINT8_MAX;
	volatile uint32_t x164 = UINT32_MAX;
	volatile uint32_t t39 = 0U;

	t39 = ((x161<=x162)|(x163%x164));

	if (t39 != 255U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x169 = 0;
	int16_t x171 = 4108;
	int64_t x172 = INT64_MIN;
	volatile int64_t t40 = 107781922394706949LL;

	t40 = ((x169<=x170)|(x171%x172));

	if (t40 != 4108LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = UINT32_MAX;
	int64_t x174 = 3295915795921273458LL;
	int64_t x175 = INT64_MIN;
	int64_t x176 = INT64_MIN;

	t41 = ((x173<=x174)|(x175%x176));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = INT16_MIN;
	int64_t x178 = INT64_MAX;
	int64_t x179 = -126LL;
	int16_t x180 = INT16_MIN;
	int64_t t42 = -399823LL;

	t42 = ((x177<=x178)|(x179%x180));

	if (t42 != -125LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = INT32_MIN;
	static int32_t x183 = -1;
	int16_t x184 = -1;
	volatile int32_t t43 = -176232;

	t43 = ((x181<=x182)|(x183%x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x185 = UINT8_MAX;
	static uint32_t x186 = UINT32_MAX;
	uint32_t x187 = 210234094U;
	int32_t x188 = INT32_MIN;
	volatile uint32_t t44 = 1444U;

	t44 = ((x185<=x186)|(x187%x188));

	if (t44 != 210234095U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = 8072831;
	int64_t x190 = -1LL;
	int8_t x192 = INT8_MIN;
	int32_t t45 = -2;

	t45 = ((x189<=x190)|(x191%x192));

	if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = -432;
	int64_t x194 = 0LL;
	int16_t x196 = -1;
	static int32_t t46 = 1;

	t46 = ((x193<=x194)|(x195%x196));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MAX;
	int32_t x198 = INT32_MIN;
	volatile int8_t x199 = INT8_MIN;

	t47 = ((x197<=x198)|(x199%x200));

	if (t47 != 4294967168U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x202 = INT16_MIN;
	uint8_t x203 = UINT8_MAX;
	static int16_t x204 = -1;
	static int32_t t48 = 1;

	t48 = ((x201<=x202)|(x203%x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x205 = 0;
	int16_t x207 = INT16_MIN;
	int8_t x208 = -11;
	int32_t t49 = 55806984;

	t49 = ((x205<=x206)|(x207%x208));

	if (t49 != -9) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x209 = 36103195319LLU;
	uint8_t x211 = 11U;
	static int16_t x212 = INT16_MIN;
	volatile int32_t t50 = -927841669;

	t50 = ((x209<=x210)|(x211%x212));

	if (t50 != 11) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MIN;
	int8_t x215 = 14;
	volatile int32_t t51 = -966238;

	t51 = ((x213<=x214)|(x215%x216));

	if (t51 != 15) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x217 = 0U;
	uint8_t x218 = 31U;
	uint32_t x219 = 147255U;
	volatile int8_t x220 = -61;

	t52 = ((x217<=x218)|(x219%x220));

	if (t52 != 147255U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x221 = UINT64_MAX;
	int64_t x223 = 1640141217643367155LL;
	volatile uint64_t x224 = UINT64_MAX;
	volatile uint64_t t53 = 1LLU;

	t53 = ((x221<=x222)|(x223%x224));

	if (t53 != 1640141217643367155LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = -1;
	volatile uint8_t x226 = 0U;
	int32_t x227 = INT32_MIN;
	static uint16_t x228 = 22U;

	t54 = ((x225<=x226)|(x227%x228));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MAX;
	int16_t x230 = INT16_MIN;
	static uint64_t x232 = UINT64_MAX;
	volatile uint64_t t55 = 1220452625LLU;

	t55 = ((x229<=x230)|(x231%x232));

	if (t55 != 3084LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = UINT32_MAX;
	uint16_t x234 = 0U;
	int16_t x235 = 24;
	uint64_t x236 = 1009335LLU;
	static volatile uint64_t t56 = 14569LLU;

	t56 = ((x233<=x234)|(x235%x236));

	if (t56 != 24LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x238 = -9042809753LL;
	volatile uint32_t x240 = UINT32_MAX;
	uint32_t t57 = 7418859U;

	t57 = ((x237<=x238)|(x239%x240));

	if (t57 != 127U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = UINT64_MAX;
	static uint64_t x242 = 1316969220LLU;
	uint32_t x244 = UINT32_MAX;
	static uint32_t t58 = 44185870U;

	t58 = ((x241<=x242)|(x243%x244));

	if (t58 != 255U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x246 = UINT64_MAX;
	int8_t x247 = INT8_MIN;
	uint8_t x248 = 119U;
	static volatile int32_t t59 = -23956641;

	t59 = ((x245<=x246)|(x247%x248));

	if (t59 != -9) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x249 = 1;
	volatile int64_t x250 = INT64_MIN;
	int16_t x251 = -1;
	uint32_t x252 = 1444U;
	volatile uint32_t t60 = 52U;

	t60 = ((x249<=x250)|(x251%x252));

	if (t60 != 119U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x256 = INT16_MIN;
	int32_t t61 = 325814584;

	t61 = ((x253<=x254)|(x255%x256));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = -13;
	static int32_t x258 = INT32_MAX;
	int32_t x259 = -1;
	uint32_t t62 = 2863U;

	t62 = ((x257<=x258)|(x259%x260));

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = 80U;
	int8_t x262 = INT8_MAX;
	volatile int8_t x263 = -1;
	volatile int32_t t63 = -21223541;

	t63 = ((x261<=x262)|(x263%x264));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x266 = UINT8_MAX;
	uint32_t x267 = 4195U;
	int32_t x268 = INT32_MIN;

	t64 = ((x265<=x266)|(x267%x268));

	if (t64 != 4195U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = 4669U;
	int8_t x270 = INT8_MIN;
	uint8_t x272 = 2U;
	volatile int32_t t65 = 302302;

	t65 = ((x269<=x270)|(x271%x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x273 = 1302;
	int8_t x274 = 0;
	uint16_t x275 = 6856U;
	int16_t x276 = INT16_MIN;
	static int32_t t66 = 0;

	t66 = ((x273<=x274)|(x275%x276));

	if (t66 != 6856) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = -1;
	uint16_t x279 = 3232U;
	uint16_t x280 = 6U;
	int32_t t67 = 0;

	t67 = ((x277<=x278)|(x279%x280));

	if (t67 != 5) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = INT32_MIN;
	uint8_t x282 = 3U;
	static int32_t x283 = INT32_MAX;
	int16_t x284 = INT16_MAX;
	int32_t t68 = 2727;

	t68 = ((x281<=x282)|(x283%x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x285 = INT64_MAX;
	int64_t x286 = 349800LL;
	volatile int8_t x287 = INT8_MIN;
	static uint8_t x288 = UINT8_MAX;
	static volatile int32_t t69 = -18;

	t69 = ((x285<=x286)|(x287%x288));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = INT16_MAX;
	uint64_t x290 = 2LLU;
	volatile int64_t x291 = -10996495LL;
	uint32_t x292 = UINT32_MAX;
	static volatile int64_t t70 = -6103744151LL;

	t70 = ((x289<=x290)|(x291%x292));

	if (t70 != -10996495LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = -1;
	int8_t x294 = INT8_MIN;
	int16_t x295 = INT16_MAX;
	volatile int32_t x296 = INT32_MIN;
	int32_t t71 = -219586;

	t71 = ((x293<=x294)|(x295%x296));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x298 = INT8_MAX;
	int16_t x299 = INT16_MIN;
	int32_t t72 = -347470952;

	t72 = ((x297<=x298)|(x299%x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = -90369333792768LL;
	static int64_t x302 = 1056LL;
	int8_t x303 = INT8_MIN;
	volatile int16_t x304 = -2;

	t73 = ((x301<=x302)|(x303%x304));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x306 = UINT8_MAX;
	int32_t t74 = 24;

	t74 = ((x305<=x306)|(x307%x308));

	if (t74 != 11) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x310 = INT16_MAX;
	static int64_t x312 = 99536065344836LL;
	volatile int64_t t75 = -996531316955LL;

	t75 = ((x309<=x310)|(x311%x312));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x316 = 1;

	t76 = ((x313<=x314)|(x315%x316));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x321 = UINT8_MAX;
	volatile int16_t x323 = 273;

	t77 = ((x321<=x322)|(x323%x324));

	if (t77 != 273) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x326 = 1941061865358LL;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MAX;
	int32_t t78 = -18;

	t78 = ((x325<=x326)|(x327%x328));

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x329 = INT64_MIN;
	uint64_t x330 = 136258271693406LLU;
	volatile int32_t t79 = -172480;

	t79 = ((x329<=x330)|(x331%x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = INT64_MIN;
	int64_t x334 = INT64_MIN;
	volatile int16_t x335 = INT16_MAX;
	int64_t x336 = INT64_MAX;

	t80 = ((x333<=x334)|(x335%x336));

	if (t80 != 32767LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x337 = INT32_MIN;
	uint64_t x338 = 11060607874676LLU;
	int16_t x339 = INT16_MIN;
	int8_t x340 = -1;
	volatile int32_t t81 = -48;

	t81 = ((x337<=x338)|(x339%x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = INT8_MIN;
	volatile int16_t x342 = 0;

	t82 = ((x341<=x342)|(x343%x344));

	if (t82 != 46841U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x346 = -1;
	int16_t x348 = -1;
	static int32_t t83 = -861456175;

	t83 = ((x345<=x346)|(x347%x348));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x349 = INT16_MIN;
	static uint32_t x350 = 186U;
	static int8_t x351 = 1;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t84 = 8139;

	t84 = ((x349<=x350)|(x351%x352));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x354 = 260534282641LL;
	volatile int32_t x355 = 0;
	int32_t t85 = 3443;

	t85 = ((x353<=x354)|(x355%x356));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x357 = -45;
	int64_t x358 = INT64_MIN;
	volatile int8_t x359 = -1;
	static uint64_t x360 = 1386181490LLU;
	volatile uint64_t t86 = 7LLU;

	t86 = ((x357<=x358)|(x359%x360));

	if (t86 != 105888045LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = INT64_MIN;
	static uint32_t x362 = 932U;
	int16_t x363 = INT16_MIN;
	uint64_t x364 = 48853760692LLU;

	t87 = ((x361<=x362)|(x363%x364));

	if (t87 != 7370734257LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = 161;
	volatile int32_t x366 = INT32_MAX;
	uint16_t x367 = 27465U;
	volatile int32_t t88 = 1692783;

	t88 = ((x365<=x366)|(x367%x368));

	if (t88 != 2697) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x374 = 1;
	static int16_t x375 = -1;
	int16_t x376 = -3920;
	static volatile int32_t t89 = -36438;

	t89 = ((x373<=x374)|(x375%x376));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x377 = UINT64_MAX;
	uint64_t x378 = 2347299897014LLU;
	static int16_t x380 = INT16_MIN;
	int64_t t90 = 29927020425LL;

	t90 = ((x377<=x378)|(x379%x380));

	if (t90 != 32767LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x381 = -1LL;
	uint32_t x382 = 6661060U;
	uint64_t x384 = UINT64_MAX;

	t91 = ((x381<=x382)|(x383%x384));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = -236142490;
	static volatile uint32_t x386 = 1004847U;
	int32_t x387 = INT32_MIN;

	t92 = ((x385<=x386)|(x387%x388));

	if (t92 != 545692016U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = -1;
	int16_t x390 = -1;
	int16_t x391 = -1;
	static int8_t x392 = INT8_MAX;
	volatile int32_t t93 = -55820;

	t93 = ((x389<=x390)|(x391%x392));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x394 = INT32_MIN;
	uint32_t x395 = UINT32_MAX;
	volatile int8_t x396 = -1;

	t94 = ((x393<=x394)|(x395%x396));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = INT8_MAX;
	int16_t x399 = INT16_MIN;
	static int64_t t95 = -1802LL;

	t95 = ((x397<=x398)|(x399%x400));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = 1;
	int8_t x402 = -1;
	static int32_t x403 = INT32_MIN;
	int16_t x404 = INT16_MAX;
	int32_t t96 = -1107781;

	t96 = ((x401<=x402)|(x403%x404));

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x409 = -1;
	int32_t x411 = INT32_MIN;

	t97 = ((x409<=x410)|(x411%x412));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x414 = UINT16_MAX;
	static volatile int32_t x415 = -1;
	int32_t t98 = 1;

	t98 = ((x413<=x414)|(x415%x416));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x417 = 2U;
	uint32_t x418 = 118U;
	volatile uint32_t x420 = UINT32_MAX;
	volatile uint32_t t99 = 1327871015U;

	t99 = ((x417<=x418)|(x419%x420));

	if (t99 != 7188573U) { NG(); } else { ; }
	
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

