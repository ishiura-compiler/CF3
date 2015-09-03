#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 176330;
int64_t x7 = -1LL;
int32_t x8 = INT32_MIN;
uint16_t x9 = 18U;
volatile int16_t x17 = -496;
volatile int32_t t3 = 1;
static int64_t x21 = 30895453540032878LL;
static int16_t x22 = INT16_MIN;
uint32_t x25 = 8163U;
uint32_t x28 = 7263U;
volatile int16_t x30 = INT16_MAX;
static uint64_t t6 = 2LLU;
volatile int32_t t7 = 3;
static int64_t x58 = INT64_MIN;
int32_t x59 = -3515;
static int32_t t11 = 0;
volatile int8_t x65 = 1;
int8_t x66 = 8;
volatile uint16_t x69 = UINT16_MAX;
int16_t x74 = INT16_MIN;
int64_t x76 = INT64_MIN;
int32_t x84 = 482;
int16_t x87 = INT16_MIN;
int8_t x95 = -46;
static volatile int64_t x96 = INT64_MIN;
int64_t x100 = INT64_MIN;
int16_t x103 = INT16_MAX;
uint32_t t21 = 24U;
uint16_t x107 = 2567U;
uint32_t t22 = 3U;
int8_t x110 = INT8_MIN;
volatile int64_t t23 = INT64_MIN;
static int64_t t24 = INT64_MIN;
static int8_t x119 = 56;
volatile uint16_t x120 = UINT16_MAX;
volatile uint8_t x123 = 38U;
static uint32_t x126 = UINT32_MAX;
int32_t t27 = -1000939;
uint16_t x129 = UINT16_MAX;
uint16_t x131 = 948U;
static uint16_t x132 = UINT16_MAX;
volatile uint64_t x141 = UINT64_MAX;
int32_t t31 = INT32_MIN;
int16_t x155 = 14754;
static int16_t x159 = -1060;
volatile int32_t t37 = 59737322;
uint32_t x179 = 95824938U;
volatile int32_t t38 = -1;
static uint8_t x193 = 18U;
uint32_t x195 = UINT32_MAX;
int8_t x199 = -1;
static int16_t x202 = INT16_MIN;
static uint16_t x218 = 3794U;
volatile int32_t t48 = -1;
int32_t x225 = INT32_MAX;
volatile uint64_t x227 = 891115250LLU;
volatile int16_t x229 = INT16_MIN;
int32_t x241 = -84088929;
int32_t t53 = -4357526;
int64_t t54 = INT64_MIN;
static int32_t x258 = 27964;
int16_t x262 = -3;
uint8_t x269 = 69U;
int64_t x271 = INT64_MAX;
uint32_t x274 = UINT32_MAX;
int32_t t60 = -32162;
uint16_t x293 = 0U;
volatile int32_t x294 = INT32_MIN;
static volatile int16_t x307 = INT16_MIN;
volatile uint64_t x322 = 1755268599LLU;
int64_t x323 = INT64_MIN;
int64_t t74 = INT64_MAX;
static int16_t x337 = INT16_MIN;
int32_t x340 = INT32_MAX;
uint8_t x341 = 13U;
uint16_t x343 = UINT16_MAX;
uint16_t x355 = UINT16_MAX;
static volatile int32_t t79 = 1;
volatile int32_t x359 = INT32_MIN;
uint8_t x360 = 1U;
int32_t t80 = 367907;
int64_t x361 = 376727250966033LL;
int16_t x364 = INT16_MIN;
int16_t x366 = INT16_MIN;
static volatile int32_t t83 = INT32_MIN;
int8_t x377 = INT8_MIN;
static uint32_t x380 = 107U;
volatile uint16_t x385 = 376U;
uint64_t x391 = 5367870016LLU;
int32_t x393 = -1;
int8_t x396 = 1;
int32_t t89 = -207059354;
static int64_t x399 = 247383LL;
int32_t t90 = 2311861;
uint64_t x403 = 27129627751707LLU;
volatile uint64_t x404 = 533345770635849LLU;
static volatile uint64_t x406 = 5373416349793911528LLU;
int16_t x407 = 0;
int8_t x408 = INT8_MIN;
volatile int32_t x410 = INT32_MAX;
uint16_t x416 = 76U;
volatile int64_t x417 = INT64_MAX;
uint32_t x422 = 96679U;
volatile int32_t t96 = -4582904;
static volatile uint8_t x444 = UINT8_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint64_t x2 = 6LLU;
	uint32_t x4 = 116962655U;
	uint32_t t0 = 68U;

	t0 = (x1*((x2-x3)<x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 4493358;
	uint32_t x6 = UINT32_MAX;
	volatile int32_t t1 = 104971;

	t1 = (x5*((x6-x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -2630974563252313431LL;
	int8_t x11 = INT8_MIN;
	uint32_t x12 = UINT32_MAX;
	static volatile int32_t t2 = -134506540;

	t2 = (x9*((x10-x11)<x12));

	if (t2 != 18) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x18 = -1;
	int32_t x19 = -38;
	static int32_t x20 = INT32_MAX;

	t3 = (x17*((x18-x19)<x20));

	if (t3 != -496) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x23 = INT16_MIN;
	int64_t x24 = -48LL;
	int64_t t4 = -5134LL;

	t4 = (x21*((x22-x23)<x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x26 = 10U;
	static volatile uint32_t x27 = 875301594U;
	static uint32_t t5 = 466245626U;

	t5 = (x25*((x26-x27)<x28));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 52619LLU;
	int32_t x31 = -2847;
	uint64_t x32 = 3674937286571LLU;

	t6 = (x29*((x30-x31)<x32));

	if (t6 != 52619LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MAX;
	uint16_t x34 = UINT16_MAX;
	volatile int16_t x35 = 0;
	int64_t x36 = -6758017361134096LL;

	t7 = (x33*((x34-x35)<x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = -1;
	int8_t x46 = -1;
	int32_t x47 = 0;
	static uint8_t x48 = UINT8_MAX;
	volatile int32_t t8 = -364270;

	t8 = (x45*((x46-x47)<x48));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x49 = INT64_MAX;
	volatile int8_t x50 = INT8_MIN;
	volatile uint64_t x51 = 4271712664107237014LLU;
	uint64_t x52 = UINT64_MAX;
	int64_t t9 = INT64_MAX;

	t9 = (x49*((x50-x51)<x52));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = INT8_MIN;
	static volatile int32_t x60 = INT32_MIN;
	volatile int32_t t10 = 13337036;

	t10 = (x57*((x58-x59)<x60));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = -393575470;
	int8_t x62 = -56;
	int8_t x63 = -47;
	volatile int8_t x64 = INT8_MAX;

	t11 = (x61*((x62-x63)<x64));

	if (t11 != -393575470) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x67 = 232008851046346541LLU;
	int64_t x68 = INT64_MIN;
	int32_t t12 = 194736620;

	t12 = (x65*((x66-x67)<x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x70 = 3834705LLU;
	static int64_t x71 = 7660431265430LL;
	int16_t x72 = INT16_MIN;
	int32_t t13 = -9113126;

	t13 = (x69*((x70-x71)<x72));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = -2;
	static int8_t x75 = 49;
	volatile int32_t t14 = -17675645;

	t14 = (x73*((x74-x75)<x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x77 = INT8_MAX;
	volatile uint8_t x78 = 13U;
	uint16_t x79 = 0U;
	static int16_t x80 = INT16_MIN;
	int32_t t15 = 1866880;

	t15 = (x77*((x78-x79)<x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = INT64_MAX;
	int8_t x82 = INT8_MAX;
	int8_t x83 = 0;
	int64_t t16 = INT64_MAX;

	t16 = (x81*((x82-x83)<x84));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x85 = 6495U;
	static int32_t x86 = -603;
	int32_t x88 = 89395174;
	static volatile uint32_t t17 = 1U;

	t17 = (x85*((x86-x87)<x88));

	if (t17 != 6495U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = 7985073U;
	volatile uint64_t x90 = 510LLU;
	int32_t x91 = INT32_MIN;
	int64_t x92 = INT64_MIN;
	static uint32_t t18 = 222U;

	t18 = (x89*((x90-x91)<x92));

	if (t18 != 7985073U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x93 = INT8_MIN;
	static int8_t x94 = INT8_MAX;
	int32_t t19 = 19677;

	t19 = (x93*((x94-x95)<x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x97 = -464726;
	uint16_t x98 = 4511U;
	uint32_t x99 = 1019U;
	static int32_t t20 = 440526;

	t20 = (x97*((x98-x99)<x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x101 = UINT32_MAX;
	int32_t x102 = 3641;
	int64_t x104 = INT64_MIN;

	t21 = (x101*((x102-x103)<x104));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = 27422U;
	int8_t x106 = INT8_MAX;
	static uint64_t x108 = UINT64_MAX;

	t22 = (x105*((x106-x107)<x108));

	if (t22 != 27422U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = INT64_MIN;
	volatile int8_t x111 = -1;
	int64_t x112 = INT64_MAX;

	t23 = (x109*((x110-x111)<x112));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x113 = INT64_MIN;
	uint64_t x114 = UINT64_MAX;
	int16_t x115 = INT16_MIN;
	int16_t x116 = INT16_MIN;

	t24 = (x113*((x114-x115)<x116));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = 1U;
	int32_t x118 = INT32_MAX;
	int32_t t25 = -759916325;

	t25 = (x117*((x118-x119)<x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x121 = INT64_MIN;
	uint64_t x122 = UINT64_MAX;
	int8_t x124 = 19;
	static int64_t t26 = 4377026609293LL;

	t26 = (x121*((x122-x123)<x124));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x125 = UINT16_MAX;
	uint32_t x127 = UINT32_MAX;
	volatile int16_t x128 = INT16_MAX;

	t27 = (x125*((x126-x127)<x128));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x130 = 54LLU;
	volatile int32_t t28 = 665667;

	t28 = (x129*((x130-x131)<x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x137 = 120U;
	static int8_t x138 = INT8_MIN;
	int8_t x139 = 0;
	static int64_t x140 = INT64_MAX;
	volatile int32_t t29 = -198;

	t29 = (x137*((x138-x139)<x140));

	if (t29 != 120) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x142 = INT16_MIN;
	int64_t x143 = -69225105LL;
	int16_t x144 = INT16_MIN;
	uint64_t t30 = 6714689231566LLU;

	t30 = (x141*((x142-x143)<x144));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = INT32_MIN;
	uint16_t x146 = 1U;
	int64_t x147 = INT64_MAX;
	uint16_t x148 = UINT16_MAX;

	t31 = (x145*((x146-x147)<x148));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x149 = 169600LLU;
	volatile int32_t x150 = -1;
	uint8_t x151 = 83U;
	uint64_t x152 = 2924LLU;
	volatile uint64_t t32 = 150792LLU;

	t32 = (x149*((x150-x151)<x152));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = INT64_MIN;
	uint32_t x154 = 186307579U;
	volatile uint8_t x156 = 3U;
	int64_t t33 = 4945734889232LL;

	t33 = (x153*((x154-x155)<x156));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = INT8_MIN;
	uint32_t x160 = 59U;
	int64_t t34 = 343LL;

	t34 = (x157*((x158-x159)<x160));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = 603737230152LL;
	volatile uint32_t x162 = 34U;
	volatile int8_t x163 = 1;
	static volatile int8_t x164 = -1;
	volatile int64_t t35 = 6LL;

	t35 = (x161*((x162-x163)<x164));

	if (t35 != 603737230152LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = INT8_MIN;
	uint64_t x166 = 2453726450524LLU;
	static int8_t x167 = INT8_MAX;
	static int8_t x168 = -1;
	int32_t t36 = 8596709;

	t36 = (x165*((x166-x167)<x168));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = -1;
	static volatile int16_t x170 = INT16_MAX;
	uint8_t x171 = 82U;
	uint8_t x172 = UINT8_MAX;

	t37 = (x169*((x170-x171)<x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x177 = UINT16_MAX;
	static uint8_t x178 = 113U;
	int16_t x180 = 345;

	t38 = (x177*((x178-x179)<x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x185 = UINT32_MAX;
	int64_t x186 = INT64_MIN;
	static int32_t x187 = INT32_MIN;
	uint8_t x188 = UINT8_MAX;
	volatile uint32_t t39 = UINT32_MAX;

	t39 = (x185*((x186-x187)<x188));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x189 = 52U;
	int32_t x190 = INT32_MIN;
	volatile uint32_t x191 = 56U;
	int64_t x192 = -596LL;
	static volatile int32_t t40 = -22458159;

	t40 = (x189*((x190-x191)<x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x194 = -1;
	static int32_t x196 = -98466600;
	volatile int32_t t41 = 13076144;

	t41 = (x193*((x194-x195)<x196));

	if (t41 != 18) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x197 = UINT32_MAX;
	static int32_t x198 = -119;
	int64_t x200 = -1LL;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = (x197*((x198-x199)<x200));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x201 = -1;
	volatile uint16_t x203 = UINT16_MAX;
	int16_t x204 = INT16_MAX;
	int32_t t43 = 22;

	t43 = (x201*((x202-x203)<x204));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x205 = UINT64_MAX;
	int16_t x206 = -1;
	static int8_t x207 = INT8_MIN;
	int64_t x208 = -3895715610LL;
	volatile uint64_t t44 = 1862583108711369LLU;

	t44 = (x205*((x206-x207)<x208));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x209 = 20534796U;
	uint16_t x210 = UINT16_MAX;
	volatile int16_t x211 = INT16_MIN;
	static uint64_t x212 = 749299193LLU;
	volatile uint32_t t45 = 2U;

	t45 = (x209*((x210-x211)<x212));

	if (t45 != 20534796U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x213 = 4U;
	int64_t x214 = INT64_MIN;
	int16_t x215 = -1;
	uint8_t x216 = 1U;
	int32_t t46 = 106601029;

	t46 = (x213*((x214-x215)<x216));

	if (t46 != 4) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x217 = INT8_MIN;
	int64_t x219 = -338052LL;
	int32_t x220 = 430153;
	volatile int32_t t47 = 25707;

	t47 = (x217*((x218-x219)<x220));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x221 = 9U;
	volatile uint16_t x222 = 143U;
	int64_t x223 = -1LL;
	volatile int8_t x224 = -1;

	t48 = (x221*((x222-x223)<x224));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x226 = -1LL;
	int32_t x228 = -7;
	int32_t t49 = INT32_MAX;

	t49 = (x225*((x226-x227)<x228));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x230 = -683892031339057LL;
	int32_t x231 = 1;
	uint16_t x232 = 5U;
	volatile int32_t t50 = -224;

	t50 = (x229*((x230-x231)<x232));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x242 = INT32_MIN;
	static int8_t x243 = -19;
	uint64_t x244 = UINT64_MAX;
	int32_t t51 = 256205;

	t51 = (x241*((x242-x243)<x244));

	if (t51 != -84088929) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = -1;
	uint8_t x247 = 36U;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t52 = -48;

	t52 = (x245*((x246-x247)<x248));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = INT16_MIN;
	static volatile int16_t x250 = -1;
	static volatile int32_t x251 = INT32_MIN;
	int16_t x252 = 993;

	t53 = (x249*((x250-x251)<x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x253 = INT64_MIN;
	static int16_t x254 = -1;
	static volatile int8_t x255 = INT8_MAX;
	int8_t x256 = 1;

	t54 = (x253*((x254-x255)<x256));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x257 = INT32_MIN;
	uint16_t x259 = 3714U;
	volatile int16_t x260 = INT16_MIN;
	static volatile int32_t t55 = 298971;

	t55 = (x257*((x258-x259)<x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x261 = UINT8_MAX;
	int64_t x263 = INT64_MIN;
	int16_t x264 = -22;
	int32_t t56 = 14;

	t56 = (x261*((x262-x263)<x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x265 = 522946LLU;
	static uint32_t x266 = UINT32_MAX;
	static int32_t x267 = -21775431;
	static int32_t x268 = INT32_MAX;
	volatile uint64_t t57 = 3059179LLU;

	t57 = (x265*((x266-x267)<x268));

	if (t57 != 522946LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x270 = 29;
	static uint8_t x272 = 7U;
	volatile int32_t t58 = -51664242;

	t58 = (x269*((x270-x271)<x272));

	if (t58 != 69) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = 1926;
	volatile uint32_t x275 = 12227U;
	int8_t x276 = INT8_MAX;
	volatile int32_t t59 = 29;

	t59 = (x273*((x274-x275)<x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x277 = INT8_MIN;
	static int32_t x278 = -1;
	int32_t x279 = INT32_MAX;
	static int16_t x280 = INT16_MIN;

	t60 = (x277*((x278-x279)<x280));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = INT16_MIN;
	uint16_t x282 = 74U;
	uint32_t x283 = 325U;
	int16_t x284 = -1;
	int32_t t61 = 104846267;

	t61 = (x281*((x282-x283)<x284));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x285 = INT32_MIN;
	static uint32_t x286 = 861393U;
	int16_t x287 = INT16_MIN;
	int16_t x288 = -1840;
	int32_t t62 = INT32_MIN;

	t62 = (x285*((x286-x287)<x288));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = INT16_MIN;
	static int64_t x290 = INT64_MIN;
	uint64_t x291 = 37LLU;
	int16_t x292 = INT16_MAX;
	int32_t t63 = 597785;

	t63 = (x289*((x290-x291)<x292));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x295 = -5725;
	uint32_t x296 = UINT32_MAX;
	static volatile int32_t t64 = 133118;

	t64 = (x293*((x294-x295)<x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x297 = INT32_MAX;
	volatile uint32_t x298 = UINT32_MAX;
	int16_t x299 = -1;
	static int64_t x300 = INT64_MIN;
	int32_t t65 = -2814;

	t65 = (x297*((x298-x299)<x300));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x301 = 2852U;
	int8_t x302 = INT8_MAX;
	volatile int64_t x303 = -1LL;
	int8_t x304 = -3;
	volatile int32_t t66 = 499566356;

	t66 = (x301*((x302-x303)<x304));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x305 = 26U;
	uint64_t x306 = UINT64_MAX;
	int16_t x308 = -172;
	static volatile int32_t t67 = -20;

	t67 = (x305*((x306-x307)<x308));

	if (t67 != 26) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x309 = 1378253364LLU;
	int32_t x310 = 2571950;
	int64_t x311 = 428223135114946786LL;
	int32_t x312 = INT32_MAX;
	volatile uint64_t t68 = 82663530LLU;

	t68 = (x309*((x310-x311)<x312));

	if (t68 != 1378253364LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = INT16_MIN;
	static int32_t x314 = INT32_MIN;
	static int32_t x315 = INT32_MIN;
	uint8_t x316 = 0U;
	volatile int32_t t69 = -963;

	t69 = (x313*((x314-x315)<x316));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x317 = UINT8_MAX;
	static int32_t x318 = -31175;
	static int8_t x319 = INT8_MAX;
	int16_t x320 = INT16_MIN;
	int32_t t70 = -237;

	t70 = (x317*((x318-x319)<x320));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x321 = UINT16_MAX;
	int16_t x324 = INT16_MIN;
	int32_t t71 = -2836;

	t71 = (x321*((x322-x323)<x324));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x325 = 5U;
	int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MIN;
	int64_t x328 = -2319108LL;
	volatile int32_t t72 = 1597;

	t72 = (x325*((x326-x327)<x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x329 = UINT8_MAX;
	uint32_t x330 = 290U;
	uint32_t x331 = 1446639261U;
	int16_t x332 = INT16_MIN;
	volatile int32_t t73 = 72;

	t73 = (x329*((x330-x331)<x332));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = INT64_MAX;
	uint16_t x334 = UINT16_MAX;
	int32_t x335 = 121213857;
	int64_t x336 = -1LL;

	t74 = (x333*((x334-x335)<x336));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x338 = UINT8_MAX;
	static uint8_t x339 = 1U;
	volatile int32_t t75 = -7466;

	t75 = (x337*((x338-x339)<x340));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x342 = -1;
	uint64_t x344 = 41982336323440569LLU;
	volatile int32_t t76 = -25653;

	t76 = (x341*((x342-x343)<x344));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = -19;
	uint32_t x347 = 14U;
	int16_t x348 = INT16_MIN;
	volatile int32_t t77 = -188112;

	t77 = (x345*((x346-x347)<x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x349 = -1;
	uint8_t x350 = 1U;
	uint32_t x351 = UINT32_MAX;
	int16_t x352 = -6325;
	int32_t t78 = 749;

	t78 = (x349*((x350-x351)<x352));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = INT8_MIN;
	uint32_t x354 = 129268805U;
	int8_t x356 = -7;

	t79 = (x353*((x354-x355)<x356));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x357 = -1;
	static volatile uint64_t x358 = UINT64_MAX;

	t80 = (x357*((x358-x359)<x360));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x362 = -396528339718162LL;
	static int64_t x363 = 410998259LL;
	volatile int64_t t81 = 12378LL;

	t81 = (x361*((x362-x363)<x364));

	if (t81 != 376727250966033LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x365 = 2U;
	volatile uint64_t x367 = 30631726237492276LLU;
	int32_t x368 = INT32_MIN;
	int32_t t82 = 237955335;

	t82 = (x365*((x366-x367)<x368));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x369 = INT32_MIN;
	static uint64_t x370 = 207644LLU;
	static int16_t x371 = -71;
	static int16_t x372 = INT16_MIN;

	t83 = (x369*((x370-x371)<x372));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x373 = -1;
	volatile int32_t x374 = INT32_MIN;
	static int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MIN;
	volatile int32_t t84 = 27;

	t84 = (x373*((x374-x375)<x376));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x378 = UINT64_MAX;
	volatile uint16_t x379 = 4U;
	int32_t t85 = -2645;

	t85 = (x377*((x378-x379)<x380));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x381 = 2100112980LLU;
	static int32_t x382 = -1;
	static int32_t x383 = 0;
	int16_t x384 = -1973;
	volatile uint64_t t86 = 44482718064831873LLU;

	t86 = (x381*((x382-x383)<x384));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x386 = -1580;
	int64_t x387 = INT64_MIN;
	int16_t x388 = -1;
	int32_t t87 = -3;

	t87 = (x385*((x386-x387)<x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x389 = 342LLU;
	volatile int16_t x390 = -170;
	int16_t x392 = 3816;
	volatile uint64_t t88 = 398924014170022LLU;

	t88 = (x389*((x390-x391)<x392));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x394 = UINT32_MAX;
	static int32_t x395 = -407943814;

	t89 = (x393*((x394-x395)<x396));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x397 = UINT16_MAX;
	volatile int16_t x398 = INT16_MAX;
	int64_t x400 = -1LL;

	t90 = (x397*((x398-x399)<x400));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x401 = INT32_MIN;
	int64_t x402 = -525252395LL;
	int32_t t91 = 52617455;

	t91 = (x401*((x402-x403)<x404));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x405 = UINT64_MAX;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = (x405*((x406-x407)<x408));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x409 = INT64_MAX;
	uint64_t x411 = 1629LLU;
	uint16_t x412 = 107U;
	volatile int64_t t93 = 68314904652917823LL;

	t93 = (x409*((x410-x411)<x412));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x413 = -163;
	uint64_t x414 = 462240321788LLU;
	volatile uint32_t x415 = 0U;
	volatile int32_t t94 = 1;

	t94 = (x413*((x414-x415)<x416));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x418 = 27U;
	volatile int32_t x419 = -1;
	int64_t x420 = INT64_MIN;
	int64_t t95 = 2LL;

	t95 = (x417*((x418-x419)<x420));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x421 = INT32_MAX;
	static int64_t x423 = -1LL;
	int64_t x424 = -12LL;

	t96 = (x421*((x422-x423)<x424));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x433 = -1;
	int16_t x434 = INT16_MIN;
	static volatile uint32_t x435 = UINT32_MAX;
	int32_t x436 = INT32_MIN;
	volatile int32_t t97 = -6711971;

	t97 = (x433*((x434-x435)<x436));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = INT64_MIN;
	static uint16_t x438 = 0U;
	static int8_t x439 = INT8_MIN;
	int16_t x440 = 5;
	int64_t t98 = -12847175667511LL;

	t98 = (x437*((x438-x439)<x440));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x441 = INT64_MIN;
	static uint64_t x442 = 1815668405861277LLU;
	uint8_t x443 = 13U;
	int64_t t99 = 76LL;

	t99 = (x441*((x442-x443)<x444));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

