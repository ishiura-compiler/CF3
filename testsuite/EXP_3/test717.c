#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = UINT64_MAX;
uint16_t x8 = UINT16_MAX;
int8_t x9 = -1;
int8_t x10 = INT8_MIN;
int8_t x16 = INT8_MIN;
uint64_t t3 = 631LLU;
uint16_t x23 = UINT16_MAX;
static int8_t x25 = -1;
uint32_t x29 = UINT32_MAX;
int32_t x30 = -4171143;
uint64_t t9 = 1122661150506784071LLU;
static int16_t x55 = INT16_MAX;
static volatile uint64_t x57 = UINT64_MAX;
int8_t x60 = -1;
volatile int32_t x62 = INT32_MAX;
int64_t x64 = INT64_MAX;
volatile int64_t t14 = -92356081636110LL;
volatile int32_t x71 = -1;
int32_t x74 = 2348493;
uint64_t t18 = 31292818114516467LLU;
static volatile int32_t x87 = INT32_MIN;
volatile int16_t x89 = 3630;
uint8_t x106 = UINT8_MAX;
int32_t x108 = 426357;
volatile int64_t x113 = 68806409028299LL;
int64_t x114 = 1152563187LL;
int64_t x116 = 446314LL;
static int32_t x117 = -25;
volatile uint32_t x120 = UINT32_MAX;
uint16_t x128 = 30866U;
volatile int64_t t29 = 831812840201359977LL;
volatile int64_t t30 = 6789908385702608LL;
int8_t x138 = 1;
static int8_t x144 = -5;
int16_t x147 = -1;
int32_t x153 = -55992148;
int32_t x157 = INT32_MIN;
int16_t x158 = -106;
static int16_t x159 = INT16_MIN;
static int8_t x162 = -1;
int64_t x163 = -18869537445699LL;
uint32_t x165 = 62146U;
uint64_t t39 = 849470830170LLU;
volatile uint16_t x173 = UINT16_MAX;
int16_t x174 = INT16_MIN;
volatile int8_t x179 = 0;
int8_t x182 = -26;
volatile int16_t x183 = INT16_MIN;
volatile int64_t t42 = -21347LL;
int32_t x194 = 5296;
int16_t x196 = INT16_MIN;
static volatile int32_t t44 = -22;
int8_t x206 = INT8_MIN;
int16_t x208 = -9000;
uint8_t x215 = 18U;
uint64_t x217 = UINT64_MAX;
int8_t x220 = -1;
uint16_t x222 = UINT16_MAX;
int16_t x223 = 6;
int32_t t50 = 118225;
volatile uint8_t x232 = 27U;
int64_t x234 = -54LL;
static int64_t x235 = INT64_MIN;
volatile int64_t t53 = 316033LL;
uint64_t x243 = 168226242LLU;
volatile uint64_t t56 = 3329440LLU;
int16_t x253 = INT16_MIN;
int32_t x259 = INT32_MIN;
static volatile int64_t x263 = INT64_MIN;
uint64_t x270 = UINT64_MAX;
volatile uint64_t t62 = 364564209896898LLU;
uint16_t x273 = 3U;
static int64_t x297 = INT64_MIN;
int64_t t69 = -829477478238LL;
uint8_t x303 = 1U;
int32_t x304 = -226084;
static int16_t x308 = -9863;
int64_t x317 = -1LL;
int64_t t75 = -37734LL;
uint32_t x329 = 7U;
volatile int64_t x338 = -1LL;
uint64_t x341 = 822499LLU;
volatile int16_t x345 = INT16_MIN;
uint16_t x352 = UINT16_MAX;
volatile uint32_t t84 = 9189U;
int8_t x370 = INT8_MIN;
uint64_t x374 = 19776LLU;
int64_t x379 = 622LL;
int16_t x380 = 1;
int8_t x383 = -1;
static int16_t x385 = INT16_MIN;
uint64_t t92 = 508832810205815529LLU;
int16_t x400 = -1;
uint64_t x406 = 125082837LLU;
uint16_t x409 = UINT16_MAX;
volatile uint16_t x410 = UINT16_MAX;
uint64_t x411 = UINT64_MAX;
volatile uint8_t x414 = 18U;
volatile int16_t x415 = -1062;


void f0(void) {
	static int32_t x1 = -1;
	int8_t x2 = INT8_MAX;
	volatile uint8_t x3 = UINT8_MAX;
	uint8_t x4 = 1U;
	volatile int32_t t0 = 1835;

	t0 = ((x1/x2)-(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = 18U;
	volatile int8_t x7 = 2;
	uint64_t t1 = 537983321486LLU;

	t1 = ((x5/x6)-(x7%x8));

	if (t1 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = 301;
	int8_t x12 = INT8_MAX;
	int32_t t2 = -149131148;

	t2 = ((x9/x10)-(x11%x12));

	if (t2 != -47) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 19LLU;
	static int8_t x14 = -1;
	static int8_t x15 = INT8_MAX;

	t3 = ((x13/x14)-(x15%x16));

	if (t3 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -1;
	int16_t x18 = INT16_MIN;
	volatile uint8_t x19 = 4U;
	static volatile int16_t x20 = INT16_MIN;
	int32_t t4 = -50;

	t4 = ((x17/x18)-(x19%x20));

	if (t4 != -4) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = UINT32_MAX;
	int32_t x22 = -11;
	static uint64_t x24 = 19695LLU;
	uint64_t t5 = 68915692577303LLU;

	t5 = ((x21/x22)-(x23%x24));

	if (t5 != 18446744073709545167LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 13949616687093441LLU;
	int32_t x27 = -233761;
	int64_t x28 = INT64_MAX;
	volatile uint64_t t6 = 584864LLU;

	t6 = ((x25/x26)-(x27%x28));

	if (t6 != 235083LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x31 = -1941297511401560LL;
	volatile int64_t x32 = INT64_MAX;
	volatile int64_t t7 = 1360LL;

	t7 = ((x29/x30)-(x31%x32));

	if (t7 != 1941297511401561LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 298U;
	volatile uint16_t x34 = UINT16_MAX;
	static int32_t x35 = -248;
	uint32_t x36 = 147794U;
	volatile uint32_t t8 = 112372U;

	t8 = ((x33/x34)-(x35%x36));

	if (t8 != 4294893888U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint64_t x38 = UINT64_MAX;
	volatile uint16_t x39 = 109U;
	int64_t x40 = INT64_MIN;

	t9 = ((x37/x38)-(x39%x40));

	if (t9 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	uint8_t x46 = 13U;
	uint8_t x47 = 0U;
	int16_t x48 = INT16_MIN;
	volatile int32_t t10 = 954808;

	t10 = ((x45/x46)-(x47%x48));

	if (t10 != -9) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = INT32_MAX;
	uint16_t x50 = 928U;
	int8_t x51 = -1;
	uint8_t x52 = 1U;
	volatile int32_t t11 = -3313;

	t11 = ((x49/x50)-(x51%x52));

	if (t11 != 2314098) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	int8_t x54 = 18;
	uint8_t x56 = 4U;
	int32_t t12 = -2640184;

	t12 = ((x53/x54)-(x55%x56));

	if (t12 != -1823) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x58 = 45664240LLU;
	uint32_t x59 = UINT32_MAX;
	uint64_t t13 = 964174593179408803LLU;

	t13 = ((x57/x58)-(x59%x60));

	if (t13 != 403964767041LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = INT32_MAX;
	static int16_t x63 = INT16_MAX;

	t14 = ((x61/x62)-(x63%x64));

	if (t14 != -32766LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -1;
	volatile int32_t x66 = INT32_MAX;
	volatile int32_t x67 = 9509273;
	volatile int32_t x68 = INT32_MIN;
	static volatile int32_t t15 = -186386;

	t15 = ((x65/x66)-(x67%x68));

	if (t15 != -9509273) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x69 = INT16_MIN;
	volatile int64_t x70 = INT64_MIN;
	int64_t x72 = -4469055656498491837LL;
	int64_t t16 = -5674LL;

	t16 = ((x69/x70)-(x71%x72));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	volatile int32_t x75 = -457412875;
	uint32_t x76 = 56631701U;
	volatile uint32_t t17 = 3778666U;

	t17 = ((x73/x74)-(x75%x76));

	if (t17 != 4251736842U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MIN;
	volatile int8_t x78 = INT8_MAX;
	uint64_t x79 = UINT64_MAX;
	int64_t x80 = INT64_MIN;

	t18 = ((x77/x78)-(x79%x80));

	if (t18 != 9150747060186627968LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MIN;
	static uint16_t x86 = 22201U;
	static int64_t x88 = INT64_MIN;
	int64_t t19 = -41484496382858241LL;

	t19 = ((x85/x86)-(x87%x88));

	if (t19 != 2147483647LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x90 = -425995607;
	volatile int8_t x91 = -33;
	int16_t x92 = INT16_MAX;
	static volatile int32_t t20 = -125432;

	t20 = ((x89/x90)-(x91%x92));

	if (t20 != 33) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 10U;
	static int8_t x94 = 21;
	uint64_t x95 = UINT64_MAX;
	volatile uint16_t x96 = 42U;
	volatile uint64_t t21 = 139680949081277LLU;

	t21 = ((x93/x94)-(x95%x96));

	if (t21 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x101 = INT32_MAX;
	int32_t x102 = -1;
	int32_t x103 = INT32_MIN;
	int32_t x104 = INT32_MIN;
	volatile int32_t t22 = -58;

	t22 = ((x101/x102)-(x103%x104));

	if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MAX;
	volatile uint16_t x107 = UINT16_MAX;
	int64_t t23 = -30362828341704LL;

	t23 = ((x105/x106)-(x107%x108));

	if (t23 != 36170086418972801LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MIN;
	uint32_t x110 = UINT32_MAX;
	static int32_t x111 = INT32_MIN;
	int64_t x112 = INT64_MAX;
	int64_t t24 = -828679LL;

	t24 = ((x109/x110)-(x111%x112));

	if (t24 != 2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x115 = UINT32_MAX;
	int64_t t25 = -621904013100182439LL;

	t25 = ((x113/x114)-(x115%x116));

	if (t25 != -27975LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x118 = INT16_MIN;
	static int8_t x119 = INT8_MIN;
	uint32_t t26 = 489421928U;

	t26 = ((x117/x118)-(x119%x120));

	if (t26 != 128U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 5626U;
	int8_t x122 = INT8_MIN;
	int16_t x123 = INT16_MIN;
	int16_t x124 = INT16_MIN;
	volatile int32_t t27 = 40049;

	t27 = ((x121/x122)-(x123%x124));

	if (t27 != -43) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = 0;
	int8_t x126 = -1;
	uint8_t x127 = 2U;
	volatile int32_t t28 = -2;

	t28 = ((x125/x126)-(x127%x128));

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MAX;
	int16_t x130 = 20;
	static volatile int64_t x131 = INT64_MIN;
	int32_t x132 = -266989;

	t29 = ((x129/x130)-(x131%x132));

	if (t29 != 461168601842897239LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -1;
	int32_t x134 = -3737;
	int8_t x135 = -1;
	int64_t x136 = INT64_MIN;

	t30 = ((x133/x134)-(x135%x136));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = -86;
	int8_t x139 = -1;
	uint8_t x140 = 54U;
	static int32_t t31 = -14;

	t31 = ((x137/x138)-(x139%x140));

	if (t31 != -85) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MAX;
	int8_t x142 = -1;
	int32_t x143 = INT32_MIN;
	int32_t t32 = -247407602;

	t32 = ((x141/x142)-(x143%x144));

	if (t32 != -32764) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = 0U;
	int8_t x146 = 7;
	int8_t x148 = -4;
	int32_t t33 = -7959;

	t33 = ((x145/x146)-(x147%x148));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x149 = 0U;
	volatile int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;
	int64_t x152 = INT64_MIN;
	static volatile int64_t t34 = -5435880LL;

	t34 = ((x149/x150)-(x151%x152));

	if (t34 != 32768LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x154 = INT64_MIN;
	uint32_t x155 = 648300U;
	uint16_t x156 = 314U;
	volatile int64_t t35 = -69LL;

	t35 = ((x153/x154)-(x155%x156));

	if (t35 != -204LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x160 = INT64_MIN;
	volatile int64_t t36 = -6999173639525LL;

	t36 = ((x157/x158)-(x159%x160));

	if (t36 != 20292047LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = INT64_MAX;
	static int8_t x164 = INT8_MIN;
	static int64_t t37 = -19487050LL;

	t37 = ((x161/x162)-(x163%x164));

	if (t37 != -9223372036854775740LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x166 = INT32_MAX;
	static uint64_t x167 = UINT64_MAX;
	uint32_t x168 = UINT32_MAX;
	volatile uint64_t t38 = 212435LLU;

	t38 = ((x165/x166)-(x167%x168));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = INT16_MAX;
	int16_t x170 = 8479;
	static volatile int32_t x171 = -1;
	uint64_t x172 = 2071291444001298LLU;

	t39 = ((x169/x170)-(x171%x172));

	if (t39 != 18444850308831558694LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x175 = 2463;
	uint32_t x176 = UINT32_MAX;
	static volatile uint32_t t40 = 18306716U;

	t40 = ((x173/x174)-(x175%x176));

	if (t40 != 4294964832U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = 5659061LL;
	static volatile int16_t x178 = INT16_MAX;
	static volatile uint16_t x180 = 2935U;
	static int64_t t41 = -142522539586636LL;

	t41 = ((x177/x178)-(x179%x180));

	if (t41 != 172LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x181 = INT64_MIN;
	static volatile int64_t x184 = -1LL;

	t42 = ((x181/x182)-(x183%x184));

	if (t42 != 354745078340568300LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MIN;
	volatile int32_t x191 = 98883;
	uint8_t x192 = UINT8_MAX;
	static int64_t t43 = -16993LL;

	t43 = ((x189/x190)-(x191%x192));

	if (t43 != -197LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x193 = INT8_MIN;
	static int16_t x195 = INT16_MIN;

	t44 = ((x193/x194)-(x195%x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MAX;
	volatile uint64_t x199 = UINT64_MAX;
	static volatile int8_t x200 = 2;
	uint64_t t45 = UINT64_MAX;

	t45 = ((x197/x198)-(x199%x200));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x201 = 8274625289LL;
	int32_t x202 = INT32_MAX;
	volatile int16_t x203 = INT16_MIN;
	int64_t x204 = -1LL;
	static volatile int64_t t46 = -39LL;

	t46 = ((x201/x202)-(x203%x204));

	if (t46 != 3LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = -1;
	int32_t x207 = INT32_MIN;
	int32_t t47 = 12864169;

	t47 = ((x205/x206)-(x207%x208));

	if (t47 != 2648) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x213 = 336U;
	volatile int64_t x214 = -1LL;
	uint32_t x216 = 3U;
	int64_t t48 = -15LL;

	t48 = ((x213/x214)-(x215%x216));

	if (t48 != -336LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x218 = -1;
	uint64_t x219 = 8066849073LLU;
	static volatile uint64_t t49 = 27821LLU;

	t49 = ((x217/x218)-(x219%x220));

	if (t49 != 18446744065642702544LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x221 = INT8_MIN;
	int16_t x224 = INT16_MAX;

	t50 = ((x221/x222)-(x223%x224));

	if (t50 != -6) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x225 = 1320U;
	static int32_t x226 = -1;
	volatile uint8_t x227 = UINT8_MAX;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t51 = 20;

	t51 = ((x225/x226)-(x227%x228));

	if (t51 != -1320) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = INT8_MIN;
	int8_t x230 = 36;
	int8_t x231 = -1;
	static int32_t t52 = -152341;

	t52 = ((x229/x230)-(x231%x232));

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = INT8_MIN;
	int8_t x236 = INT8_MIN;

	t53 = ((x233/x234)-(x235%x236));

	if (t53 != 2LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = -3;
	volatile int32_t x238 = -1;
	int16_t x239 = INT16_MIN;
	int16_t x240 = INT16_MAX;
	int32_t t54 = 48677796;

	t54 = ((x237/x238)-(x239%x240));

	if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = INT8_MIN;
	static volatile int64_t x242 = INT64_MIN;
	int64_t x244 = -27125288366033LL;
	volatile uint64_t t55 = 482LLU;

	t55 = ((x241/x242)-(x243%x244));

	if (t55 != 18446744073541325374LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x245 = UINT32_MAX;
	uint64_t x246 = UINT64_MAX;
	int64_t x247 = INT64_MAX;
	uint16_t x248 = 28706U;

	t56 = ((x245/x246)-(x247%x248));

	if (t56 != 18446744073709541069LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x249 = 0;
	static uint8_t x250 = 2U;
	static uint64_t x251 = 2221694494835LLU;
	static volatile int64_t x252 = INT64_MIN;
	uint64_t t57 = 5210973582503LLU;

	t57 = ((x249/x250)-(x251%x252));

	if (t57 != 18446741852015056781LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x254 = UINT8_MAX;
	int8_t x255 = INT8_MAX;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t58 = 99677;

	t58 = ((x253/x254)-(x255%x256));

	if (t58 != -255) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = INT8_MIN;
	static volatile uint16_t x258 = 2U;
	static int8_t x260 = INT8_MIN;
	static int32_t t59 = 62484;

	t59 = ((x257/x258)-(x259%x260));

	if (t59 != -64) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x261 = -183350130875LL;
	static int16_t x262 = 3;
	static int16_t x264 = 3;
	static volatile int64_t t60 = -182444LL;

	t60 = ((x261/x262)-(x263%x264));

	if (t60 != -61116710289LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x265 = -1LL;
	volatile int8_t x266 = INT8_MIN;
	uint64_t x267 = 15644LLU;
	static int64_t x268 = 327843862LL;
	uint64_t t61 = 3378049922200LLU;

	t61 = ((x265/x266)-(x267%x268));

	if (t61 != 18446744073709535972LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x269 = INT64_MAX;
	int8_t x271 = INT8_MIN;
	volatile int16_t x272 = INT16_MIN;

	t62 = ((x269/x270)-(x271%x272));

	if (t62 != 128LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x274 = 393680U;
	static uint8_t x275 = 81U;
	int16_t x276 = 5;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = ((x273/x274)-(x275%x276));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x277 = INT64_MIN;
	static uint32_t x278 = UINT32_MAX;
	static uint64_t x279 = 7474093728904LLU;
	volatile int64_t x280 = INT64_MIN;
	static volatile uint64_t t64 = 10440LLU;

	t64 = ((x277/x278)-(x279%x280));

	if (t64 != 18446736597468339064LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x281 = UINT64_MAX;
	int8_t x282 = INT8_MAX;
	static int32_t x283 = -1;
	uint16_t x284 = UINT16_MAX;
	uint64_t t65 = 282479LLU;

	t65 = ((x281/x282)-(x283%x284));

	if (t65 != 145249953336295683LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = 82;
	int16_t x287 = -1;
	int64_t x288 = 237592675109879LL;
	static int64_t t66 = -68775947656091LL;

	t66 = ((x285/x286)-(x287%x288));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = INT16_MIN;
	int64_t x290 = INT64_MIN;
	int16_t x291 = -120;
	int8_t x292 = INT8_MIN;
	int64_t t67 = 7597583658995817LL;

	t67 = ((x289/x290)-(x291%x292));

	if (t67 != 120LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x293 = UINT64_MAX;
	int16_t x294 = -1;
	int64_t x295 = INT64_MIN;
	int64_t x296 = INT64_MAX;
	volatile uint64_t t68 = 1549LLU;

	t68 = ((x293/x294)-(x295%x296));

	if (t68 != 2LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x298 = -28983364;
	volatile int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MAX;

	t69 = ((x297/x298)-(x299%x300));

	if (t69 != 318229865825LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x301 = 11009LLU;
	int64_t x302 = INT64_MIN;
	uint64_t t70 = UINT64_MAX;

	t70 = ((x301/x302)-(x303%x304));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = -1;
	int64_t x306 = 69617389894158LL;
	uint16_t x307 = 5U;
	volatile int64_t t71 = -71950639LL;

	t71 = ((x305/x306)-(x307%x308));

	if (t71 != -5LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x309 = UINT8_MAX;
	int16_t x310 = INT16_MIN;
	static int64_t x311 = INT64_MAX;
	int16_t x312 = INT16_MAX;
	static volatile int64_t t72 = -260LL;

	t72 = ((x309/x310)-(x311%x312));

	if (t72 != -7LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x313 = -30;
	volatile int16_t x314 = INT16_MIN;
	int16_t x315 = -1;
	int16_t x316 = INT16_MIN;
	volatile int32_t t73 = 14;

	t73 = ((x313/x314)-(x315%x316));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x318 = -1LL;
	uint8_t x319 = UINT8_MAX;
	volatile uint32_t x320 = 2U;
	int64_t t74 = 5321LL;

	t74 = ((x317/x318)-(x319%x320));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = -1;
	static int64_t x323 = 44084057307781LL;
	int8_t x324 = 47;

	t75 = ((x321/x322)-(x323%x324));

	if (t75 != 32768LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = INT16_MIN;
	int8_t x326 = INT8_MAX;
	uint16_t x327 = UINT16_MAX;
	uint8_t x328 = 60U;
	volatile int32_t t76 = 0;

	t76 = ((x325/x326)-(x327%x328));

	if (t76 != -273) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x330 = INT32_MIN;
	volatile int64_t x331 = 4099417040374100567LL;
	int8_t x332 = -1;
	int64_t t77 = -22LL;

	t77 = ((x329/x330)-(x331%x332));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x333 = -1;
	uint16_t x334 = 1086U;
	int32_t x335 = INT32_MIN;
	int8_t x336 = INT8_MIN;
	int32_t t78 = 27879;

	t78 = ((x333/x334)-(x335%x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x337 = 82U;
	int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MIN;
	int64_t t79 = -3142484178011126490LL;

	t79 = ((x337/x338)-(x339%x340));

	if (t79 != 32686LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x342 = 14860U;
	static volatile int8_t x343 = 4;
	int8_t x344 = INT8_MIN;
	uint64_t t80 = 437417LLU;

	t80 = ((x341/x342)-(x343%x344));

	if (t80 != 51LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x346 = INT8_MIN;
	int64_t x347 = INT64_MIN;
	uint64_t x348 = 41477045651248878LLU;
	static volatile uint64_t t81 = 2221LLU;

	t81 = ((x345/x346)-(x347%x348));

	if (t81 != 18431276171432026980LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = 295;
	static volatile int64_t x350 = -1LL;
	int32_t x351 = -439072;
	static int64_t t82 = -10LL;

	t82 = ((x349/x350)-(x351%x352));

	if (t82 != 45567LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x353 = 1013063U;
	int8_t x354 = -1;
	uint32_t x355 = UINT32_MAX;
	int16_t x356 = INT16_MIN;
	static volatile uint32_t t83 = 4U;

	t83 = ((x353/x354)-(x355%x356));

	if (t83 != 4294934529U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = -1;
	int8_t x358 = 39;
	uint32_t x359 = 477662U;
	int16_t x360 = -1;

	t84 = ((x357/x358)-(x359%x360));

	if (t84 != 4294489634U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x361 = 2U;
	volatile int8_t x362 = INT8_MIN;
	volatile uint64_t x363 = UINT64_MAX;
	uint16_t x364 = 107U;
	uint64_t t85 = 1643744426649433LLU;

	t85 = ((x361/x362)-(x363%x364));

	if (t85 != 18446744073709551525LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = INT8_MIN;
	int8_t x366 = INT8_MAX;
	uint16_t x367 = UINT16_MAX;
	volatile int64_t x368 = -1LL;
	volatile int64_t t86 = -10521073342106726LL;

	t86 = ((x365/x366)-(x367%x368));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x369 = 4U;
	static int16_t x371 = -1;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t87 = -113605;

	t87 = ((x369/x370)-(x371%x372));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x373 = 1U;
	int64_t x375 = INT64_MIN;
	int8_t x376 = -1;
	static volatile uint64_t t88 = 177521058575496349LLU;

	t88 = ((x373/x374)-(x375%x376));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x377 = 6U;
	int32_t x378 = 10419;
	volatile int64_t t89 = 2963833953906320233LL;

	t89 = ((x377/x378)-(x379%x380));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x381 = 5U;
	static int16_t x382 = INT16_MIN;
	int16_t x384 = INT16_MAX;
	volatile int32_t t90 = 177;

	t90 = ((x381/x382)-(x383%x384));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x386 = -1;
	uint16_t x387 = 5U;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t91 = 14851492278LLU;

	t91 = ((x385/x386)-(x387%x388));

	if (t91 != 32763LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = 40;
	int16_t x390 = 212;
	int16_t x391 = INT16_MIN;
	uint64_t x392 = UINT64_MAX;

	t92 = ((x389/x390)-(x391%x392));

	if (t92 != 32768LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x393 = UINT32_MAX;
	static uint8_t x394 = 28U;
	uint32_t x395 = 878941671U;
	static int8_t x396 = INT8_MIN;
	uint32_t t93 = 1U;

	t93 = ((x393/x394)-(x395%x396));

	if (t93 != 3569417314U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = -114388;
	static int16_t x398 = INT16_MIN;
	int32_t x399 = -1;
	int32_t t94 = -55;

	t94 = ((x397/x398)-(x399%x400));

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x401 = INT8_MIN;
	int64_t x402 = -60LL;
	int8_t x403 = 0;
	static volatile uint16_t x404 = 16U;
	volatile int64_t t95 = 242LL;

	t95 = ((x401/x402)-(x403%x404));

	if (t95 != 2LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x405 = -1;
	int64_t x407 = -1LL;
	uint32_t x408 = 55U;
	static volatile uint64_t t96 = 30889007503271LLU;

	t96 = ((x405/x406)-(x407%x408));

	if (t96 != 147476220689LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x412 = -1LL;
	volatile uint64_t t97 = 2801653177634LLU;

	t97 = ((x409/x410)-(x411%x412));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x413 = 6;
	static uint8_t x416 = 67U;
	int32_t t98 = -27935;

	t98 = ((x413/x414)-(x415%x416));

	if (t98 != 57) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = INT16_MIN;
	uint16_t x418 = 2U;
	static int8_t x419 = 2;
	static int32_t x420 = -1;
	static volatile int32_t t99 = -4465;

	t99 = ((x417/x418)-(x419%x420));

	if (t99 != -16384) { NG(); } else { ; }
	
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

