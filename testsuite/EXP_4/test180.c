#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x13 = -172;
int32_t x14 = -1;
int16_t x15 = INT16_MAX;
volatile uint64_t t4 = 3266082672087LLU;
uint32_t t5 = 59U;
uint32_t x28 = 9U;
int16_t x45 = INT16_MAX;
volatile int64_t t9 = 435820192LL;
volatile int64_t t10 = -3433LL;
uint8_t x55 = 81U;
static int32_t x58 = INT32_MIN;
volatile uint64_t t12 = 1240766153499305LLU;
uint32_t x61 = 4U;
volatile uint32_t t13 = 102395U;
static int16_t x69 = 28;
uint32_t x73 = 9622809U;
uint16_t x76 = 111U;
int64_t x89 = -8198327532LL;
int16_t x94 = INT16_MIN;
static int64_t x99 = INT64_MAX;
volatile uint8_t x104 = 0U;
static int64_t t23 = -66938682935422243LL;
int32_t x124 = INT32_MAX;
int32_t x137 = -98451;
static uint64_t t27 = 0LLU;
int16_t x144 = -7;
static volatile uint32_t t28 = 327303540U;
int8_t x149 = INT8_MIN;
int8_t x150 = INT8_MIN;
int32_t x157 = INT32_MAX;
volatile int32_t x169 = 52896;
int32_t x181 = INT32_MAX;
uint32_t x182 = UINT32_MAX;
uint16_t x185 = UINT16_MAX;
int32_t x193 = 306617212;
uint64_t x196 = UINT64_MAX;
static int8_t x199 = INT8_MAX;
uint8_t x201 = 8U;
int8_t x215 = 12;
static uint64_t x217 = UINT64_MAX;
volatile uint64_t x218 = 224410800LLU;
int8_t x219 = 6;
uint64_t t44 = 326LLU;
int8_t x221 = -58;
int16_t x222 = 1;
uint8_t x223 = 3U;
int32_t x226 = -1;
int16_t x227 = INT16_MIN;
uint8_t x230 = UINT8_MAX;
static int16_t x232 = -1;
volatile int32_t t47 = -8;
int64_t x233 = 3896LL;
int8_t x235 = 57;
int64_t x237 = INT64_MIN;
volatile uint64_t t49 = 1432LLU;
volatile uint64_t t50 = 12204LLU;
volatile uint8_t x266 = 14U;
uint32_t t52 = 17699973U;
static int32_t x273 = -1840382;
int8_t x281 = INT8_MAX;
static int16_t x286 = -1;
volatile int64_t t56 = 1633LL;
static int16_t x292 = INT16_MAX;
static uint64_t t57 = 453175957300703244LLU;
uint16_t x293 = UINT16_MAX;
int16_t x301 = -7;
static uint16_t x303 = 6U;
int64_t t60 = 185371802259132388LL;
static int64_t x318 = 2401037LL;
volatile int64_t t61 = 223515719562546919LL;
uint32_t x321 = 127654854U;
uint64_t x335 = UINT64_MAX;
volatile int32_t t68 = 0;
uint64_t x360 = 14182988691008LLU;
int32_t x362 = -1;
int32_t t70 = 2;
volatile int16_t x369 = INT16_MIN;
int16_t x372 = -1;
static int64_t x390 = -1LL;
uint64_t x412 = UINT64_MAX;
int64_t x415 = INT64_MAX;
int64_t x421 = INT64_MIN;
int8_t x423 = -54;
int64_t x424 = INT64_MIN;
uint8_t x427 = 126U;
static int32_t t82 = -343;
int8_t x437 = 22;
volatile int32_t x438 = INT32_MIN;
static int16_t x443 = -71;
uint16_t x450 = UINT16_MAX;
int32_t x457 = 28271620;
static int64_t x463 = INT64_MIN;
int32_t x464 = -454776278;
static volatile int64_t x467 = -1LL;
volatile int64_t t92 = -288145412293433LL;
int32_t x473 = INT32_MIN;
static int8_t x490 = INT8_MAX;
static volatile int8_t x493 = 43;
int32_t x495 = INT32_MIN;
int16_t x500 = -1;
int16_t x504 = 1;
volatile int32_t t98 = 1;
int8_t x507 = 38;


void f0(void) {
	uint16_t x1 = 0U;
	int16_t x2 = INT16_MAX;
	static uint32_t x3 = 953879U;
	int64_t x4 = -1LL;
	volatile int64_t t0 = -759533LL;

	t0 = (x1&(x2+(x3-x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x5 = 6471U;
	uint16_t x6 = 35U;
	static uint8_t x7 = 0U;
	uint64_t x8 = 288001395893849LLU;
	static uint64_t t1 = 20314034907LLU;

	t1 = (x5&(x6+(x7-x8)));

	if (t1 != 6466LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -39;
	uint32_t x10 = 30540U;
	volatile uint32_t x11 = UINT32_MAX;
	uint8_t x12 = 64U;
	volatile uint32_t t2 = 25U;

	t2 = (x9&(x10+(x11-x12)));

	if (t2 != 30473U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x16 = 14U;
	int32_t t3 = 55733194;

	t3 = (x13&(x14+(x15-x16)));

	if (t3 != 32592) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 142610714730LLU;
	int64_t x18 = 8684LL;
	uint8_t x19 = UINT8_MAX;
	int64_t x20 = 666LL;

	t4 = (x17&(x18+(x19-x20)));

	if (t4 != 64LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile int16_t x22 = 10;
	uint32_t x23 = 190523467U;
	static uint8_t x24 = 23U;

	t5 = (x21&(x22+(x23-x24)));

	if (t5 != 190523392U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	uint8_t x26 = 0U;
	uint32_t x27 = 57U;
	volatile int64_t t6 = 100886467303312LL;

	t6 = (x25&(x26+(x27-x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	volatile int8_t x30 = 1;
	volatile uint16_t x31 = UINT16_MAX;
	volatile uint16_t x32 = 14U;
	int64_t t7 = 1264028799198LL;

	t7 = (x29&(x30+(x31-x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x41 = 11U;
	int32_t x42 = -87865910;
	uint8_t x43 = 120U;
	static int32_t x44 = -1;
	int32_t t8 = 56627;

	t8 = (x41&(x42+(x43-x44)));

	if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x46 = -1LL;
	int8_t x47 = -1;
	uint32_t x48 = 858U;

	t9 = (x45&(x46+(x47-x48)));

	if (t9 != 31908LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x49 = 300548967U;
	int32_t x50 = INT32_MIN;
	static uint8_t x51 = 7U;
	int64_t x52 = 39365LL;

	t10 = (x49&(x50+(x51-x52)));

	if (t10 != 300548674LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = UINT8_MAX;
	volatile uint8_t x54 = 43U;
	int8_t x56 = 1;
	volatile int32_t t11 = 131066;

	t11 = (x53&(x54+(x55-x56)));

	if (t11 != 123) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 6;
	volatile uint64_t x59 = 8149665035LLU;
	uint8_t x60 = 25U;

	t12 = (x57&(x58+(x59-x60)));

	if (t12 != 2LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x62 = UINT32_MAX;
	volatile int32_t x63 = -519;
	int8_t x64 = 5;

	t13 = (x61&(x62+(x63-x64)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x70 = 4002104759846574930LLU;
	volatile int64_t x71 = 45033290021LL;
	uint16_t x72 = 3U;
	volatile uint64_t t14 = 18924LLU;

	t14 = (x69&(x70+(x71-x72)));

	if (t14 != 20LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x74 = INT32_MIN;
	int64_t x75 = 2749822LL;
	volatile int64_t t15 = 31373964568LL;

	t15 = (x73&(x74+(x75-x76)));

	if (t15 != 54537LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = UINT32_MAX;
	static uint32_t x82 = 4U;
	int16_t x83 = 161;
	volatile uint8_t x84 = 2U;
	volatile uint32_t t16 = 577U;

	t16 = (x81&(x82+(x83-x84)));

	if (t16 != 163U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x90 = -1;
	int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MIN;
	volatile int64_t t17 = -11030508588LL;

	t17 = (x89&(x90+(x91-x92)));

	if (t17 != 9223372028656448276LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x93 = 5090375U;
	uint64_t x95 = 27678LLU;
	volatile uint16_t x96 = 615U;
	static uint64_t t18 = 4102160666LLU;

	t18 = (x93&(x94+(x95-x96)));

	if (t18 != 5089287LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MAX;
	static uint64_t x98 = UINT64_MAX;
	int64_t x100 = INT64_MAX;
	uint64_t t19 = 1463271307424319LLU;

	t19 = (x97&(x98+(x99-x100)));

	if (t19 != 127LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x101 = 434U;
	int8_t x102 = INT8_MIN;
	uint32_t x103 = 2744U;
	uint32_t t20 = 187227947U;

	t20 = (x101&(x102+(x103-x104)));

	if (t20 != 48U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = INT32_MIN;
	uint32_t x106 = 5U;
	volatile uint32_t x107 = 983480U;
	volatile uint32_t x108 = UINT32_MAX;
	uint32_t t21 = 1U;

	t21 = (x105&(x106+(x107-x108)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = INT16_MAX;
	static int16_t x110 = INT16_MAX;
	int16_t x111 = 1;
	int32_t x112 = 14;
	volatile int32_t t22 = 16;

	t22 = (x109&(x110+(x111-x112)));

	if (t22 != 32754) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = UINT32_MAX;
	volatile int64_t x114 = 83299031LL;
	static volatile int32_t x115 = INT32_MAX;
	uint32_t x116 = 0U;

	t23 = (x113&(x114+(x115-x116)));

	if (t23 != 2230782678LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x117 = 810879U;
	static int32_t x118 = 0;
	int8_t x119 = INT8_MAX;
	volatile uint16_t x120 = 25U;
	static uint32_t t24 = 126011U;

	t24 = (x117&(x118+(x119-x120)));

	if (t24 != 102U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = -845;
	volatile int16_t x122 = INT16_MIN;
	volatile uint64_t x123 = UINT64_MAX;
	uint64_t t25 = 14949896493LLU;

	t25 = (x121&(x122+(x123-x124)));

	if (t25 != 18446744071562035200LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = INT8_MIN;
	int8_t x130 = 3;
	int8_t x131 = INT8_MAX;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t26 = 7685209LLU;

	t26 = (x129&(x130+(x131-x132)));

	if (t26 != 128LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x138 = 462243664301LLU;
	uint16_t x139 = UINT16_MAX;
	uint8_t x140 = 89U;

	t27 = (x137&(x138+(x139-x140)));

	if (t27 != 462243631425LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x141 = 11104057U;
	uint32_t x142 = 535432636U;
	uint8_t x143 = UINT8_MAX;

	t28 = (x141&(x142+(x143-x144)));

	if (t28 != 11013632U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = INT32_MAX;
	int64_t x146 = 192299LL;
	int16_t x147 = INT16_MIN;
	int64_t x148 = 1548529560LL;
	static int64_t t29 = -199074696700956LL;

	t29 = (x145&(x146+(x147-x148)));

	if (t29 != 599113619LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x151 = 0U;
	int32_t x152 = -45947739;
	volatile int32_t t30 = 136918;

	t30 = (x149&(x150+(x151-x152)));

	if (t30 != 45947520) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x158 = -1;
	int32_t x159 = -1;
	static uint64_t x160 = 246730837823LLU;
	uint64_t t31 = 34143246432LLU;

	t31 = (x157&(x158+(x159-x160)));

	if (t31 != 229781695LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x165 = 2U;
	uint8_t x166 = 3U;
	volatile uint64_t x167 = UINT64_MAX;
	int16_t x168 = INT16_MIN;
	volatile uint64_t t32 = 14717962LLU;

	t32 = (x165&(x166+(x167-x168)));

	if (t32 != 2LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x170 = -1;
	int8_t x171 = INT8_MIN;
	int8_t x172 = INT8_MIN;
	int32_t t33 = -120332461;

	t33 = (x169&(x170+(x171-x172)));

	if (t33 != 52896) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x173 = 963436409U;
	int8_t x174 = -1;
	uint32_t x175 = 3635750U;
	int16_t x176 = 754;
	static uint32_t t34 = 455901U;

	t34 = (x173&(x174+(x175-x176)));

	if (t34 != 2381617U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int16_t x178 = INT16_MAX;
	static int64_t x179 = INT64_MIN;
	volatile int32_t x180 = -1;
	static int64_t t35 = -8110710923341LL;

	t35 = (x177&(x178+(x179-x180)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x183 = UINT8_MAX;
	static int8_t x184 = INT8_MAX;
	volatile uint32_t t36 = 5903U;

	t36 = (x181&(x182+(x183-x184)));

	if (t36 != 127U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x186 = 94U;
	static int8_t x187 = INT8_MIN;
	uint8_t x188 = 0U;
	volatile int32_t t37 = -773;

	t37 = (x185&(x186+(x187-x188)));

	if (t37 != 65502) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x189 = 0U;
	uint16_t x190 = UINT16_MAX;
	int8_t x191 = INT8_MAX;
	int64_t x192 = -69905037708946027LL;
	volatile int64_t t38 = -13501003903938LL;

	t38 = (x189&(x190+(x191-x192)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x194 = -24LL;
	int16_t x195 = INT16_MIN;
	volatile uint64_t t39 = 129606610LLU;

	t39 = (x193&(x194+(x195-x196)));

	if (t39 != 306584424LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x197 = -1LL;
	volatile int8_t x198 = INT8_MIN;
	static volatile int8_t x200 = -33;
	static volatile int64_t t40 = -5504279546669LL;

	t40 = (x197&(x198+(x199-x200)));

	if (t40 != 32LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x202 = -1LL;
	uint32_t x203 = 741232224U;
	int16_t x204 = -1;
	static int64_t t41 = 263718023608LL;

	t41 = (x201&(x202+(x203-x204)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x205 = -1254;
	int16_t x206 = -42;
	int8_t x207 = 23;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t42 = 136311787LLU;

	t42 = (x205&(x206+(x207-x208)));

	if (t42 != 18446744073709550346LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x213 = -923;
	uint32_t x214 = 6U;
	int64_t x216 = INT64_MAX;
	static int64_t t43 = 356237LL;

	t43 = (x213&(x214+(x215-x216)));

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x220 = 2U;

	t44 = (x217&(x218+(x219-x220)));

	if (t44 != 224410804LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x224 = 580140U;
	volatile uint32_t t45 = 204094U;

	t45 = (x221&(x222+(x223-x224)));

	if (t45 != 4294387136U) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x225 = INT8_MAX;
	int16_t x228 = INT16_MAX;
	static int32_t t46 = -52;

	t46 = (x225&(x226+(x227-x228)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x229 = 1U;
	static uint16_t x231 = 1146U;

	t47 = (x229&(x230+(x231-x232)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x234 = 140U;
	static uint8_t x236 = 18U;
	volatile int64_t t48 = 171188LL;

	t48 = (x233&(x234+(x235-x236)));

	if (t48 != 48LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x238 = -1;
	static uint32_t x239 = 370U;
	static uint64_t x240 = 29LLU;

	t49 = (x237&(x238+(x239-x240)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x245 = UINT8_MAX;
	static int32_t x246 = INT32_MAX;
	uint64_t x247 = 8896491160269207373LLU;
	static uint8_t x248 = 34U;

	t50 = (x245&(x246+(x247-x248)));

	if (t50 != 42LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x249 = 265U;
	int8_t x250 = INT8_MIN;
	int32_t x251 = -1;
	uint64_t x252 = 800248916LLU;
	uint64_t t51 = 2096985772413184186LLU;

	t51 = (x249&(x250+(x251-x252)));

	if (t51 != 265LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x265 = UINT32_MAX;
	int8_t x267 = INT8_MAX;
	uint16_t x268 = 10620U;

	t52 = (x265&(x266+(x267-x268)));

	if (t52 != 4294956817U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x269 = INT8_MIN;
	uint8_t x270 = UINT8_MAX;
	uint32_t x271 = 21U;
	int8_t x272 = INT8_MIN;
	uint32_t t53 = 735U;

	t53 = (x269&(x270+(x271-x272)));

	if (t53 != 384U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x274 = 57332469U;
	volatile int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MIN;
	volatile uint32_t t54 = 35890701U;

	t54 = (x273&(x274+(x275-x276)));

	if (t54 != 56803840U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x282 = INT32_MIN;
	int16_t x283 = 6702;
	volatile uint32_t x284 = UINT32_MAX;
	uint32_t t55 = 2985622U;

	t55 = (x281&(x282+(x283-x284)));

	if (t55 != 47U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x285 = -267748;
	uint8_t x287 = 56U;
	int64_t x288 = 89408518971603688LL;

	t56 = (x285&(x286+(x287-x288)));

	if (t56 != -89408518971867124LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x289 = 84512853LLU;
	int32_t x290 = 8;
	uint32_t x291 = 937737U;

	t57 = (x289&(x290+(x291-x292)));

	if (t57 != 622608LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x294 = 25U;
	static volatile int16_t x295 = -1;
	static uint32_t x296 = 242U;
	volatile uint32_t t58 = 22330U;

	t58 = (x293&(x294+(x295-x296)));

	if (t58 != 65318U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x302 = 18U;
	int8_t x304 = 63;
	int32_t t59 = 16531166;

	t59 = (x301&(x302+(x303-x304)));

	if (t59 != -39) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x313 = 151;
	int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MIN;
	int64_t x316 = 0LL;

	t60 = (x313&(x314+(x315-x316)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x317 = UINT16_MAX;
	int8_t x319 = 50;
	volatile uint16_t x320 = 252U;

	t61 = (x317&(x318+(x319-x320)));

	if (t61 != 41539LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x322 = -1;
	volatile uint64_t x323 = 70LLU;
	int64_t x324 = INT64_MIN;
	volatile uint64_t t62 = 2979926383430105LLU;

	t62 = (x321&(x322+(x323-x324)));

	if (t62 != 68LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x329 = -20;
	volatile int64_t x330 = -1LL;
	uint8_t x331 = 0U;
	static uint16_t x332 = 4149U;
	volatile int64_t t63 = 1987101411817265LL;

	t63 = (x329&(x330+(x331-x332)));

	if (t63 != -4152LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x333 = -1;
	uint16_t x334 = UINT16_MAX;
	volatile int32_t x336 = -32526533;
	volatile uint64_t t64 = 48158715LLU;

	t64 = (x333&(x334+(x335-x336)));

	if (t64 != 32592067LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x337 = INT8_MIN;
	int32_t x338 = 853675726;
	uint32_t x339 = 23022U;
	static uint8_t x340 = 29U;
	volatile uint32_t t65 = 3147191U;

	t65 = (x337&(x338+(x339-x340)));

	if (t65 != 853698688U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x341 = UINT8_MAX;
	int16_t x342 = -1;
	static int32_t x343 = 0;
	volatile int64_t x344 = INT64_MAX;
	static int64_t t66 = -413658060958LL;

	t66 = (x341&(x342+(x343-x344)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x349 = 1132396LLU;
	int16_t x350 = 108;
	static uint32_t x351 = 406936U;
	static int64_t x352 = INT64_MAX;
	volatile uint64_t t67 = 3LLU;

	t67 = (x349&(x350+(x351-x352)));

	if (t67 != 1540LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x353 = 28;
	uint16_t x354 = UINT16_MAX;
	static volatile int32_t x355 = -1568519;
	uint8_t x356 = UINT8_MAX;

	t68 = (x353&(x354+(x355-x356)));

	if (t68 != 24) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x357 = INT8_MIN;
	uint64_t x358 = 222823422960511076LLU;
	volatile uint64_t x359 = UINT64_MAX;
	static volatile uint64_t t69 = 8LLU;

	t69 = (x357&(x358+(x359-x360)));

	if (t69 != 222809239971820032LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x361 = 1;
	int32_t x363 = -1;
	static int8_t x364 = -14;

	t70 = (x361&(x362+(x363-x364)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x365 = UINT8_MAX;
	uint8_t x366 = 43U;
	int16_t x367 = -6;
	volatile int8_t x368 = -4;
	static int32_t t71 = 1;

	t71 = (x365&(x366+(x367-x368)));

	if (t71 != 41) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x370 = UINT64_MAX;
	int16_t x371 = 1;
	uint64_t t72 = 129295637982669LLU;

	t72 = (x369&(x370+(x371-x372)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x373 = 1056U;
	volatile int16_t x374 = -1788;
	int32_t x375 = INT32_MAX;
	uint16_t x376 = 133U;
	int32_t t73 = -12176;

	t73 = (x373&(x374+(x375-x376)));

	if (t73 != 32) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x385 = -7;
	volatile int8_t x386 = -4;
	int16_t x387 = INT16_MIN;
	uint64_t x388 = 5844LLU;
	uint64_t t74 = 269932LLU;

	t74 = (x385&(x386+(x387-x388)));

	if (t74 != 18446744073709513000LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x389 = INT8_MAX;
	int16_t x391 = INT16_MIN;
	uint64_t x392 = 11401810871602LLU;
	static uint64_t t75 = 2574026LLU;

	t75 = (x389&(x390+(x391-x392)));

	if (t75 != 77LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x393 = 47970;
	volatile uint8_t x394 = 14U;
	uint8_t x395 = UINT8_MAX;
	uint32_t x396 = 12048U;
	static volatile uint32_t t76 = 24U;

	t76 = (x393&(x394+(x395-x396)));

	if (t76 != 37216U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x401 = INT8_MIN;
	static int32_t x402 = -38;
	uint64_t x403 = 152288511LLU;
	int32_t x404 = -11605;
	static volatile uint64_t t77 = 7769991127862684925LLU;

	t77 = (x401&(x402+(x403-x404)));

	if (t77 != 152300032LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x409 = -1;
	static volatile uint16_t x410 = UINT16_MAX;
	int32_t x411 = -837323;
	uint64_t t78 = 3169697691082893279LLU;

	t78 = (x409&(x410+(x411-x412)));

	if (t78 != 18446744073708779829LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x413 = -1;
	volatile int8_t x414 = INT8_MIN;
	static uint64_t x416 = 28626761800LLU;
	volatile uint64_t t79 = 7884405499457489LLU;

	t79 = (x413&(x414+(x415-x416)));

	if (t79 != 9223372008228013879LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x422 = INT64_MIN;
	static int64_t t80 = INT64_MIN;

	t80 = (x421&(x422+(x423-x424)));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x425 = INT8_MIN;
	int16_t x426 = 10403;
	uint16_t x428 = 3U;
	volatile int32_t t81 = 538867442;

	t81 = (x425&(x426+(x427-x428)));

	if (t81 != 10496) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x429 = INT32_MIN;
	static int8_t x430 = INT8_MIN;
	int32_t x431 = 7558609;
	int8_t x432 = -1;

	t82 = (x429&(x430+(x431-x432)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x433 = 1525588;
	uint16_t x434 = 1U;
	volatile int16_t x435 = 6808;
	uint16_t x436 = UINT16_MAX;
	int32_t t83 = -1792959;

	t83 = (x433&(x434+(x435-x436)));

	if (t83 != 1507856) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x439 = 4628U;
	uint32_t x440 = UINT32_MAX;
	volatile uint32_t t84 = 160083246U;

	t84 = (x437&(x438+(x439-x440)));

	if (t84 != 20U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x441 = INT64_MAX;
	int32_t x442 = -1;
	static int8_t x444 = -1;
	volatile int64_t t85 = 1598672338LL;

	t85 = (x441&(x442+(x443-x444)));

	if (t85 != 9223372036854775737LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x445 = INT16_MIN;
	volatile int16_t x446 = -1;
	uint16_t x447 = 10458U;
	uint16_t x448 = 0U;
	volatile int32_t t86 = 3;

	t86 = (x445&(x446+(x447-x448)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x449 = 70U;
	int64_t x451 = INT64_MAX;
	uint64_t x452 = UINT64_MAX;
	uint64_t t87 = 3381712LLU;

	t87 = (x449&(x450+(x451-x452)));

	if (t87 != 70LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x453 = 1142755U;
	volatile uint64_t x454 = 29LLU;
	int16_t x455 = 7;
	int32_t x456 = 942920;
	uint64_t t88 = 179LLU;

	t88 = (x453&(x454+(x455-x456)));

	if (t88 != 1117376LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x458 = UINT32_MAX;
	volatile int32_t x459 = INT32_MIN;
	static int8_t x460 = INT8_MIN;
	static uint32_t t89 = 1062828483U;

	t89 = (x457&(x458+(x459-x460)));

	if (t89 != 4U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x461 = INT64_MIN;
	int32_t x462 = 171578163;
	volatile int64_t t90 = INT64_MIN;

	t90 = (x461&(x462+(x463-x464)));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x465 = INT8_MIN;
	int32_t x466 = INT32_MIN;
	uint16_t x468 = 48U;
	volatile int64_t t91 = -13148680149062746LL;

	t91 = (x465&(x466+(x467-x468)));

	if (t91 != -2147483776LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x469 = -1LL;
	volatile uint16_t x470 = 6U;
	int8_t x471 = -1;
	volatile uint16_t x472 = 539U;

	t92 = (x469&(x470+(x471-x472)));

	if (t92 != -534LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x474 = -1;
	int64_t x475 = -86010848314603222LL;
	uint8_t x476 = 2U;
	static int64_t t93 = -14LL;

	t93 = (x473&(x474+(x475-x476)));

	if (t93 != -86010849713455104LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x481 = INT32_MAX;
	static uint32_t x482 = UINT32_MAX;
	int16_t x483 = -1;
	int8_t x484 = INT8_MIN;
	volatile uint32_t t94 = 1345051811U;

	t94 = (x481&(x482+(x483-x484)));

	if (t94 != 126U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x489 = UINT16_MAX;
	volatile uint64_t x491 = 22598557400080109LLU;
	int32_t x492 = -1;
	uint64_t t95 = 32945653637775LLU;

	t95 = (x489&(x490+(x491-x492)));

	if (t95 != 40813LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x494 = 1U;
	int8_t x496 = -1;
	volatile int32_t t96 = -6890136;

	t96 = (x493&(x494+(x495-x496)));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x497 = -1155224LL;
	int8_t x498 = -1;
	int8_t x499 = 2;
	int64_t t97 = 8202246931348463LL;

	t97 = (x497&(x498+(x499-x500)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x501 = -894;
	int32_t x502 = -31048000;
	int16_t x503 = -27;

	t98 = (x501&(x502+(x503-x504)));

	if (t98 != -31048576) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x505 = INT16_MIN;
	volatile int8_t x506 = INT8_MAX;
	uint64_t x508 = 200366496LLU;
	volatile uint64_t t99 = 3629176627800015LLU;

	t99 = (x505&(x506+(x507-x508)));

	if (t99 != 18446744073509175296LLU) { NG(); } else { ; }
	
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

