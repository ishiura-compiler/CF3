#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = -1LL;
uint64_t x8 = 545776442630LLU;
static int8_t x9 = INT8_MAX;
uint8_t x10 = UINT8_MAX;
int8_t x15 = INT8_MIN;
int32_t x16 = INT32_MAX;
volatile int32_t t3 = 39985;
volatile uint32_t x24 = 127961385U;
int64_t x25 = -1LL;
int16_t x28 = INT16_MIN;
int16_t x30 = INT16_MIN;
int16_t x34 = INT16_MIN;
volatile int32_t t8 = -10942;
static int32_t x47 = INT32_MAX;
int16_t x67 = INT16_MAX;
volatile int32_t t15 = -1645;
static int16_t x73 = INT16_MIN;
int32_t x83 = -1;
int64_t x85 = INT64_MIN;
volatile int64_t x86 = INT64_MAX;
int16_t x89 = 8796;
int8_t x91 = -1;
int64_t x96 = INT64_MIN;
int32_t x110 = 495998;
volatile int64_t t24 = -204883LL;
int32_t x113 = -5835357;
int16_t x114 = INT16_MIN;
static int32_t x119 = INT32_MAX;
static int8_t x120 = -1;
uint64_t t26 = 16833LLU;
volatile int64_t t27 = 388814394164LL;
int32_t x130 = -1;
volatile int64_t x131 = INT64_MIN;
static uint64_t x134 = UINT64_MAX;
int64_t x136 = -10616370287799071LL;
int16_t x139 = -1;
volatile int32_t x143 = INT32_MAX;
uint16_t x144 = 1247U;
volatile int32_t t32 = -450245018;
int8_t x157 = 1;
static int16_t x160 = INT16_MAX;
int64_t t38 = 17715654164605LL;
int16_t x185 = -164;
static uint8_t x194 = UINT8_MAX;
uint8_t x195 = UINT8_MAX;
volatile int32_t t44 = 0;
volatile int8_t x198 = -1;
int64_t x200 = INT64_MAX;
volatile int64_t x201 = INT64_MIN;
uint64_t x203 = 2936493716LLU;
int32_t x212 = INT32_MIN;
int8_t x214 = 20;
uint32_t x217 = UINT32_MAX;
volatile int64_t x225 = INT64_MAX;
int8_t x227 = -2;
int32_t x229 = INT32_MAX;
static int16_t x232 = INT16_MIN;
uint32_t t52 = UINT32_MAX;
int32_t x233 = INT32_MIN;
int8_t x242 = INT8_MIN;
uint8_t x243 = UINT8_MAX;
int8_t x244 = 42;
uint64_t x252 = 257LLU;
static int64_t x253 = 0LL;
int16_t x256 = INT16_MIN;
int16_t x261 = INT16_MIN;
volatile uint64_t x263 = 62052LLU;
uint64_t t60 = 116942845121LLU;
uint8_t x269 = 2U;
static int8_t x276 = 27;
static int32_t t63 = 5;
uint32_t x277 = UINT32_MAX;
volatile uint8_t x279 = 0U;
volatile int16_t x282 = 104;
static volatile uint8_t x284 = 4U;
volatile uint32_t x292 = UINT32_MAX;
volatile uint32_t t67 = 2U;
int16_t x293 = INT16_MIN;
static int64_t t69 = INT64_MAX;
int16_t x302 = INT16_MAX;
int8_t x303 = INT8_MIN;
volatile int32_t x308 = -1;
static int32_t t71 = -203351;
int32_t x325 = INT32_MIN;
int32_t t76 = -2;
int32_t x330 = 141270693;
int16_t x334 = 21;
int8_t x336 = -1;
volatile int16_t x347 = 2009;
static volatile int16_t x350 = -353;
uint16_t x352 = UINT16_MAX;
uint64_t x360 = UINT64_MAX;
volatile uint64_t x365 = 401639286936516LLU;
int64_t x371 = 5LL;
int64_t t87 = 76900LL;
static int64_t x374 = INT64_MIN;
int16_t x376 = 1;
int8_t x379 = INT8_MIN;
int64_t t89 = -195351294LL;
int64_t x384 = -3982LL;
static volatile int64_t t90 = -395472365025315LL;
uint64_t x392 = 1458761117LLU;
int32_t x397 = 26;
int64_t x401 = -1LL;
static int64_t x402 = 3269660002152148390LL;
uint32_t x409 = UINT32_MAX;
int16_t x413 = INT16_MIN;
static int32_t x414 = INT32_MIN;
int8_t x420 = INT8_MIN;


void f0(void) {
	int16_t x1 = 318;
	volatile int32_t x2 = -1;
	volatile int32_t x3 = -1;
	volatile uint16_t x4 = UINT16_MAX;
	int32_t t0 = -42;

	t0 = ((x1%x2)|(x3&x4));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 699373307;
	volatile int32_t x6 = -13077;
	uint64_t t1 = 5550420822558LLU;

	t1 = ((x5%x6)|(x7&x8));

	if (t1 != 545776442846LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = INT32_MIN;
	static uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 120396543701117LLU;

	t2 = ((x9%x10)|(x11&x12));

	if (t2 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -3779;
	int32_t x14 = INT32_MAX;

	t3 = ((x13%x14)|(x15&x16));

	if (t3 != -67) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 11;
	int64_t x18 = 521087LL;
	volatile int16_t x19 = INT16_MIN;
	volatile uint32_t x20 = 6U;
	int64_t t4 = 133882878LL;

	t4 = ((x17%x18)|(x19&x20));

	if (t4 != 11LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int16_t x22 = INT16_MAX;
	uint64_t x23 = 3025272099LLU;
	volatile uint64_t t5 = 1989943LLU;

	t5 = ((x21%x22)|(x23&x24));

	if (t5 != 67143969LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 1U;
	int8_t x27 = -54;
	int64_t t6 = 24185188797LL;

	t6 = ((x25%x26)|(x27&x28));

	if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static volatile uint32_t x31 = UINT32_MAX;
	int8_t x32 = -1;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = ((x29%x30)|(x31&x32));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile int16_t x35 = INT16_MIN;
	static volatile uint8_t x36 = 53U;

	t8 = ((x33%x34)|(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	static int16_t x38 = INT16_MAX;
	int16_t x39 = INT16_MIN;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 19832;

	t9 = ((x37%x38)|(x39&x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	static int64_t x42 = -51659LL;
	uint8_t x43 = 45U;
	int32_t x44 = -7;
	volatile int64_t t10 = -58630500526516LL;

	t10 = ((x41%x42)|(x43&x44));

	if (t10 != 255LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint16_t x46 = 6U;
	volatile uint32_t x48 = 17U;
	static volatile uint32_t t11 = UINT32_MAX;

	t11 = ((x45%x46)|(x47&x48));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 769725367;
	static volatile int64_t x54 = INT64_MIN;
	int32_t x55 = INT32_MAX;
	int8_t x56 = INT8_MAX;
	int64_t t12 = -1078775403235746372LL;

	t12 = ((x53%x54)|(x55&x56));

	if (t12 != 769725439LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	uint8_t x58 = 27U;
	int32_t x59 = 120992126;
	int8_t x60 = 6;
	volatile int32_t t13 = -25;

	t13 = ((x57%x58)|(x59&x60));

	if (t13 != -9) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	int64_t x62 = INT64_MAX;
	static uint8_t x63 = UINT8_MAX;
	static uint8_t x64 = UINT8_MAX;
	volatile int64_t t14 = -291866LL;

	t14 = ((x61%x62)|(x63&x64));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MAX;
	int32_t x66 = -1;
	int32_t x68 = -6516;

	t15 = ((x65%x66)|(x67&x68));

	if (t15 != 26252) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x69 = 22U;
	volatile int16_t x70 = 44;
	uint16_t x71 = 5227U;
	volatile int8_t x72 = -2;
	volatile int32_t t16 = -31246;

	t16 = ((x69%x70)|(x71&x72));

	if (t16 != 5246) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = INT64_MAX;
	int32_t x75 = -1;
	volatile uint8_t x76 = 62U;
	volatile int64_t t17 = -4044657973166358LL;

	t17 = ((x73%x74)|(x75&x76));

	if (t17 != -32706LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 6U;
	uint32_t x78 = UINT32_MAX;
	int16_t x79 = -1;
	int64_t x80 = INT64_MIN;
	int64_t t18 = 392753167LL;

	t18 = ((x77%x78)|(x79&x80));

	if (t18 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	uint32_t x82 = 1233336U;
	static int8_t x84 = INT8_MIN;
	volatile int64_t t19 = 269607232898243LL;

	t19 = ((x81%x82)|(x83&x84));

	if (t19 != -128LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x87 = INT8_MIN;
	uint32_t x88 = 8380797U;
	volatile int64_t t20 = 323632213817LL;

	t20 = ((x85%x86)|(x87&x88));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x90 = INT32_MIN;
	static int8_t x92 = 6;
	int32_t t21 = 232618619;

	t21 = ((x89%x90)|(x91&x92));

	if (t21 != 8798) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x93 = 99;
	int16_t x94 = -1;
	volatile int16_t x95 = INT16_MIN;
	int64_t t22 = INT64_MIN;

	t22 = ((x93%x94)|(x95&x96));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x105 = 30U;
	static int16_t x106 = -1;
	static int16_t x107 = INT16_MAX;
	int32_t x108 = -1;
	static volatile uint32_t t23 = 4259739U;

	t23 = ((x105%x106)|(x107&x108));

	if (t23 != 32767U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x109 = INT64_MAX;
	volatile uint8_t x111 = UINT8_MAX;
	uint16_t x112 = 96U;

	t24 = ((x109%x110)|(x111&x112));

	if (t24 != 57827LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x115 = INT8_MAX;
	static volatile int8_t x116 = INT8_MAX;
	int32_t t25 = -66059;

	t25 = ((x113%x114)|(x115&x116));

	if (t25 != -2561) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x117 = 215911LLU;
	uint8_t x118 = UINT8_MAX;

	t26 = ((x117%x118)|(x119&x120));

	if (t26 != 2147483647LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x121 = INT16_MAX;
	static int64_t x122 = -1LL;
	int32_t x123 = INT32_MIN;
	volatile int8_t x124 = -1;

	t27 = ((x121%x122)|(x123&x124));

	if (t27 != -2147483648LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MIN;
	int8_t x126 = -1;
	uint8_t x127 = UINT8_MAX;
	uint64_t x128 = 0LLU;
	static uint64_t t28 = 264986106258176LLU;

	t28 = ((x125%x126)|(x127&x128));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = -28289257958540LL;
	int8_t x132 = 35;
	volatile int64_t t29 = -54757LL;

	t29 = ((x129%x130)|(x131&x132));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x133 = INT16_MIN;
	uint32_t x135 = 1U;
	volatile uint64_t t30 = 957484LLU;

	t30 = ((x133%x134)|(x135&x136));

	if (t30 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MAX;
	uint32_t x138 = 13931197U;
	uint32_t x140 = 0U;
	volatile uint32_t t31 = 3680U;

	t31 = ((x137%x138)|(x139&x140));

	if (t31 != 127U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MIN;
	int8_t x142 = 19;

	t32 = ((x141%x142)|(x143&x144));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x145 = -1;
	int32_t x146 = -72;
	static uint64_t x147 = UINT64_MAX;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = ((x145%x146)|(x147&x148));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = 40855472375LLU;
	int64_t x150 = -31584368626200LL;
	int32_t x151 = 0;
	int8_t x152 = INT8_MIN;
	volatile uint64_t t34 = 163956842168LLU;

	t34 = ((x149%x150)|(x151&x152));

	if (t34 != 40855472375LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MIN;
	int64_t x154 = INT64_MIN;
	static uint32_t x155 = UINT32_MAX;
	int8_t x156 = INT8_MIN;
	volatile int64_t t35 = -142886340LL;

	t35 = ((x153%x154)|(x155&x156));

	if (t35 != -128LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x158 = INT8_MAX;
	static int8_t x159 = -1;
	int32_t t36 = 0;

	t36 = ((x157%x158)|(x159&x160));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = UINT32_MAX;
	int8_t x162 = -1;
	volatile int16_t x163 = INT16_MAX;
	uint64_t x164 = UINT64_MAX;
	volatile uint64_t t37 = 37255864981480LLU;

	t37 = ((x161%x162)|(x163&x164));

	if (t37 != 32767LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = 1U;
	volatile int64_t x170 = 4589LL;
	int16_t x171 = -1;
	static int8_t x172 = INT8_MAX;

	t38 = ((x169%x170)|(x171&x172));

	if (t38 != 127LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MAX;
	int16_t x174 = 3628;
	volatile int16_t x175 = INT16_MAX;
	static uint32_t x176 = UINT32_MAX;
	uint32_t t39 = 1493U;

	t39 = ((x173%x174)|(x175&x176));

	if (t39 != 32767U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x177 = -1;
	static int8_t x178 = -1;
	static volatile uint64_t x179 = UINT64_MAX;
	uint32_t x180 = 1465247467U;
	uint64_t t40 = 1534LLU;

	t40 = ((x177%x178)|(x179&x180));

	if (t40 != 1465247467LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x181 = -115413345832LL;
	int32_t x182 = 1;
	uint16_t x183 = 115U;
	volatile int16_t x184 = INT16_MIN;
	volatile int64_t t41 = -2795548LL;

	t41 = ((x181%x182)|(x183&x184));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x186 = INT8_MAX;
	static int16_t x187 = 64;
	static int32_t x188 = -2;
	int32_t t42 = -1;

	t42 = ((x185%x186)|(x187&x188));

	if (t42 != -37) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = 27U;
	int16_t x190 = INT16_MIN;
	uint8_t x191 = 26U;
	static volatile int64_t x192 = INT64_MIN;
	volatile int64_t t43 = -5LL;

	t43 = ((x189%x190)|(x191&x192));

	if (t43 != 27LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = -944;
	uint8_t x196 = 58U;

	t44 = ((x193%x194)|(x195&x196));

	if (t44 != -129) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x197 = INT8_MIN;
	static uint16_t x199 = UINT16_MAX;
	volatile int64_t t45 = 3024742593LL;

	t45 = ((x197%x198)|(x199&x200));

	if (t45 != 65535LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x202 = 7214627271153346LLU;
	int64_t x204 = 21460903387LL;
	volatile uint64_t t46 = 428905445074323LLU;

	t46 = ((x201%x202)|(x203&x204));

	if (t46 != 3078386669807508LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = -39;
	uint8_t x211 = UINT8_MAX;
	int32_t t47 = 7;

	t47 = ((x209%x210)|(x211&x212));

	if (t47 != -8) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x213 = -1;
	int64_t x215 = 10481LL;
	static uint32_t x216 = UINT32_MAX;
	int64_t t48 = 285LL;

	t48 = ((x213%x214)|(x215&x216));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x218 = -621;
	static int16_t x219 = INT16_MIN;
	uint16_t x220 = UINT16_MAX;
	uint32_t t49 = 81842U;

	t49 = ((x217%x218)|(x219&x220));

	if (t49 != 33388U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = INT64_MIN;
	int16_t x222 = INT16_MIN;
	volatile int16_t x223 = -497;
	static int64_t x224 = INT64_MAX;
	volatile int64_t t50 = -2561391333112899068LL;

	t50 = ((x221%x222)|(x223&x224));

	if (t50 != 9223372036854775311LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x226 = 14U;
	volatile int16_t x228 = -1546;
	int64_t t51 = -94LL;

	t51 = ((x225%x226)|(x227&x228));

	if (t51 != -1545LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x230 = UINT32_MAX;
	volatile int32_t x231 = INT32_MIN;

	t52 = ((x229%x230)|(x231&x232));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x234 = -1;
	static int16_t x235 = INT16_MAX;
	static uint16_t x236 = 968U;
	volatile int32_t t53 = 2054697;

	t53 = ((x233%x234)|(x235&x236));

	if (t53 != 968) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x237 = UINT64_MAX;
	static volatile int32_t x238 = -1;
	static uint64_t x239 = UINT64_MAX;
	uint64_t x240 = 147LLU;
	volatile uint64_t t54 = 7322232176LLU;

	t54 = ((x237%x238)|(x239&x240));

	if (t54 != 147LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = INT16_MIN;
	static int32_t t55 = 1;

	t55 = ((x241%x242)|(x243&x244));

	if (t55 != 42) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x245 = 7470910U;
	volatile int32_t x246 = INT32_MIN;
	static int8_t x247 = -40;
	uint64_t x248 = UINT64_MAX;
	uint64_t t56 = 2866351005420LLU;

	t56 = ((x245%x246)|(x247&x248));

	if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x249 = INT64_MIN;
	int16_t x250 = 263;
	uint16_t x251 = 425U;
	volatile uint64_t t57 = 952717028LLU;

	t57 = ((x249%x250)|(x251&x252));

	if (t57 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x254 = INT32_MIN;
	static int64_t x255 = INT64_MAX;
	volatile int64_t t58 = -1028375008867903629LL;

	t58 = ((x253%x254)|(x255&x256));

	if (t58 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x257 = 4144U;
	int16_t x258 = -65;
	int8_t x259 = 1;
	int8_t x260 = INT8_MAX;
	volatile uint32_t t59 = 1699867028U;

	t59 = ((x257%x258)|(x259&x260));

	if (t59 != 4145U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x262 = INT32_MAX;
	int32_t x264 = INT32_MAX;

	t60 = ((x261%x262)|(x263&x264));

	if (t60 != 18446744073709548132LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x265 = 3U;
	volatile int16_t x266 = INT16_MIN;
	uint8_t x267 = UINT8_MAX;
	uint8_t x268 = 15U;
	volatile int32_t t61 = -888560;

	t61 = ((x265%x266)|(x267&x268));

	if (t61 != 15) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x270 = 2212173907LLU;
	int32_t x271 = INT32_MAX;
	static uint64_t x272 = 3LLU;
	uint64_t t62 = 832720LLU;

	t62 = ((x269%x270)|(x271&x272));

	if (t62 != 3LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = -1;
	uint16_t x274 = UINT16_MAX;
	int32_t x275 = -1;

	t63 = ((x273%x274)|(x275&x276));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x278 = 1744299541009802LL;
	int16_t x280 = -1;
	int64_t t64 = 59078424286542666LL;

	t64 = ((x277%x278)|(x279&x280));

	if (t64 != 4294967295LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x281 = INT64_MIN;
	int8_t x283 = -1;
	int64_t t65 = -8203571436LL;

	t65 = ((x281%x282)|(x283&x284));

	if (t65 != -4LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x285 = INT64_MIN;
	static int64_t x286 = INT64_MIN;
	static int64_t x287 = INT64_MIN;
	int16_t x288 = 2145;
	int64_t t66 = 23418506414742083LL;

	t66 = ((x285%x286)|(x287&x288));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x289 = 7677;
	static uint32_t x290 = UINT32_MAX;
	uint8_t x291 = 36U;

	t67 = ((x289%x290)|(x291&x292));

	if (t67 != 7677U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x294 = -1;
	volatile int32_t x295 = INT32_MIN;
	volatile uint16_t x296 = 28646U;
	volatile int32_t t68 = -257937598;

	t68 = ((x293%x294)|(x295&x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x297 = UINT32_MAX;
	int64_t x298 = INT64_MIN;
	int64_t x299 = -1LL;
	int64_t x300 = INT64_MAX;

	t69 = ((x297%x298)|(x299&x300));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x301 = 1U;
	uint32_t x304 = UINT32_MAX;
	uint32_t t70 = 0U;

	t70 = ((x301%x302)|(x303&x304));

	if (t70 != 4294967169U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = -1;
	uint16_t x306 = 2U;
	uint8_t x307 = UINT8_MAX;

	t71 = ((x305%x306)|(x307&x308));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x309 = 6U;
	int8_t x310 = INT8_MIN;
	int64_t x311 = INT64_MIN;
	static uint32_t x312 = 747970U;
	static int64_t t72 = 8077183LL;

	t72 = ((x309%x310)|(x311&x312));

	if (t72 != 6LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x313 = 1U;
	int8_t x314 = -4;
	static int32_t x315 = 0;
	int32_t x316 = -1;
	static volatile int32_t t73 = -235;

	t73 = ((x313%x314)|(x315&x316));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x317 = INT32_MAX;
	volatile int64_t x318 = 4395441LL;
	int64_t x319 = -1LL;
	int64_t x320 = INT64_MAX;
	static volatile int64_t t74 = INT64_MAX;

	t74 = ((x317%x318)|(x319&x320));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x321 = INT64_MIN;
	volatile uint64_t x322 = 1491475138LLU;
	static uint8_t x323 = UINT8_MAX;
	static uint8_t x324 = UINT8_MAX;
	volatile uint64_t t75 = 7563LLU;

	t75 = ((x321%x322)|(x323&x324));

	if (t75 != 1133893631LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MAX;
	int32_t x328 = 771105;

	t76 = ((x325%x326)|(x327&x328));

	if (t76 != 17441) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x329 = -136770656LL;
	static uint16_t x331 = 2359U;
	int8_t x332 = 24;
	int64_t t77 = 2199690399272770722LL;

	t77 = ((x329%x330)|(x331&x332));

	if (t77 != -136770640LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x333 = -32;
	static int8_t x335 = INT8_MAX;
	int32_t t78 = 80868;

	t78 = ((x333%x334)|(x335&x336));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = -1;
	int64_t x338 = INT64_MIN;
	uint16_t x339 = UINT16_MAX;
	int16_t x340 = INT16_MIN;
	int64_t t79 = -30571459191374569LL;

	t79 = ((x337%x338)|(x339&x340));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = -1;
	uint64_t x342 = UINT64_MAX;
	int16_t x343 = INT16_MIN;
	int64_t x344 = INT64_MIN;
	static uint64_t t80 = 21LLU;

	t80 = ((x341%x342)|(x343&x344));

	if (t80 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x345 = -1LL;
	int16_t x346 = -1;
	int32_t x348 = -68;
	int64_t t81 = -12LL;

	t81 = ((x345%x346)|(x347&x348));

	if (t81 != 1944LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x349 = 4;
	static volatile int32_t x351 = -1;
	volatile int32_t t82 = 166479171;

	t82 = ((x349%x350)|(x351&x352));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x353 = 0U;
	static uint8_t x354 = UINT8_MAX;
	int16_t x355 = INT16_MIN;
	uint16_t x356 = 3U;
	volatile int32_t t83 = -496;

	t83 = ((x353%x354)|(x355&x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x357 = UINT64_MAX;
	static int16_t x358 = INT16_MAX;
	int64_t x359 = -1LL;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = ((x357%x358)|(x359&x360));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = INT32_MAX;
	static int32_t x362 = 10;
	static int16_t x363 = -1;
	int32_t x364 = -1;
	volatile int32_t t85 = -5440;

	t85 = ((x361%x362)|(x363&x364));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x366 = UINT32_MAX;
	static int8_t x367 = 42;
	int64_t x368 = INT64_MIN;
	uint64_t t86 = 64LLU;

	t86 = ((x365%x366)|(x367&x368));

	if (t86 != 4010279181LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x369 = UINT8_MAX;
	int64_t x370 = 3094532710197LL;
	int32_t x372 = INT32_MIN;

	t87 = ((x369%x370)|(x371&x372));

	if (t87 != 255LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x373 = INT8_MIN;
	static int64_t x375 = -25LL;
	int64_t t88 = 8375740353810981LL;

	t88 = ((x373%x374)|(x375&x376));

	if (t88 != -127LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x377 = UINT32_MAX;
	volatile int64_t x378 = INT64_MIN;
	uint32_t x380 = 389502U;

	t89 = ((x377%x378)|(x379&x380));

	if (t89 != 4294967295LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = UINT32_MAX;
	int64_t x382 = -1987LL;
	static volatile int8_t x383 = -2;

	t90 = ((x381%x382)|(x383&x384));

	if (t90 != -2822LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x385 = 1147397962U;
	int64_t x386 = 29745LL;
	uint8_t x387 = UINT8_MAX;
	int8_t x388 = INT8_MAX;
	int64_t t91 = 554833931586211LL;

	t91 = ((x385%x386)|(x387&x388));

	if (t91 != 14335LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x389 = -1;
	static uint64_t x390 = 4494292105901318LLU;
	int32_t x391 = INT32_MAX;
	volatile uint64_t t92 = 16LLU;

	t92 = ((x389%x390)|(x391&x392));

	if (t92 != 2169271462920159LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x393 = -1;
	volatile int8_t x394 = -4;
	int8_t x395 = -8;
	int8_t x396 = -2;
	int32_t t93 = 6928245;

	t93 = ((x393%x394)|(x395&x396));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x398 = -62;
	int8_t x399 = -1;
	static volatile int32_t x400 = 65725150;
	volatile int32_t t94 = 905;

	t94 = ((x397%x398)|(x399&x400));

	if (t94 != 65725150) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x403 = 0U;
	volatile int8_t x404 = -18;
	volatile int64_t t95 = 21846083505449LL;

	t95 = ((x401%x402)|(x403&x404));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x405 = 19U;
	volatile int64_t x406 = -4414201176173246317LL;
	volatile int8_t x407 = INT8_MIN;
	static int64_t x408 = -2187476993580LL;
	int64_t t96 = -3709651LL;

	t96 = ((x405%x406)|(x407&x408));

	if (t96 != -2187476993645LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x410 = INT32_MIN;
	int64_t x411 = INT64_MIN;
	uint8_t x412 = 26U;
	static volatile int64_t t97 = -43395021LL;

	t97 = ((x409%x410)|(x411&x412));

	if (t97 != 2147483647LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x415 = UINT64_MAX;
	int32_t x416 = -1;
	uint64_t t98 = UINT64_MAX;

	t98 = ((x413%x414)|(x415&x416));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x417 = 163379230LLU;
	static volatile int64_t x418 = INT64_MIN;
	int64_t x419 = INT64_MIN;
	uint64_t t99 = 24986006073LLU;

	t99 = ((x417%x418)|(x419&x420));

	if (t99 != 9223372037018155038LLU) { NG(); } else { ; }
	
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

