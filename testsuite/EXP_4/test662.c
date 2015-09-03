#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = 77U;
int64_t x18 = INT64_MIN;
volatile int64_t t4 = -37367LL;
static volatile uint16_t x29 = 1U;
volatile uint64_t t6 = 531728LLU;
static int32_t x39 = -1;
int32_t x48 = INT32_MIN;
uint64_t t11 = 8925652889356827LLU;
int32_t t12 = -105319775;
volatile uint32_t t13 = UINT32_MAX;
int16_t x62 = -152;
int8_t x64 = 13;
static int32_t x67 = INT32_MAX;
uint64_t x70 = 2423302816947LLU;
int64_t x72 = 52LL;
int64_t x74 = -525794269401862510LL;
volatile int32_t x90 = -1443773;
static volatile int32_t t20 = 164;
int8_t x93 = INT8_MIN;
int64_t t21 = -87103781983909820LL;
int32_t t22 = -27801;
int8_t x104 = -3;
uint32_t x108 = UINT32_MAX;
uint32_t x120 = 132777U;
volatile int16_t x129 = -1;
volatile uint32_t x132 = 5166U;
static uint32_t x133 = 1952446U;
volatile int64_t x134 = 0LL;
volatile int16_t x135 = 1462;
int64_t x136 = INT64_MAX;
static uint16_t x138 = 234U;
int16_t x139 = 0;
int8_t x144 = INT8_MIN;
volatile int32_t t33 = -44;
static uint16_t x154 = UINT16_MAX;
int64_t x155 = -1LL;
int64_t x158 = -1LL;
int8_t x160 = INT8_MIN;
uint64_t x164 = 883LLU;
int8_t x165 = 1;
uint16_t x166 = UINT16_MAX;
static uint8_t x170 = 54U;
int64_t x174 = -52047LL;
int32_t t42 = -547;
int32_t x197 = 3;
int64_t x200 = -200103830230128394LL;
int32_t x202 = INT32_MAX;
int32_t x210 = INT32_MIN;
static volatile uint16_t x211 = 0U;
volatile int64_t x217 = INT64_MAX;
int32_t x241 = -1793;
int8_t x242 = 6;
uint16_t x243 = UINT16_MAX;
int16_t x251 = -1;
static int64_t x254 = INT64_MIN;
static uint64_t x258 = UINT64_MAX;
uint32_t x266 = 3836597U;
int64_t t61 = -356LL;
static int8_t x271 = 1;
static int8_t x275 = -1;
uint16_t x284 = 10244U;
volatile int64_t t65 = 529258428751LL;
uint32_t x288 = UINT32_MAX;
int64_t x293 = -4LL;
uint32_t x296 = 1153U;
volatile int64_t t68 = 779LL;
volatile uint8_t x301 = UINT8_MAX;
int16_t x302 = INT16_MIN;
uint16_t x306 = UINT16_MAX;
volatile int8_t x309 = -1;
static volatile uint64_t t75 = UINT64_MAX;
int64_t x329 = INT64_MIN;
static uint16_t x330 = 7U;
uint8_t x334 = 19U;
int64_t x339 = INT64_MAX;
volatile int32_t x341 = 938;
static int64_t x352 = INT64_MIN;
uint64_t x355 = 38514LLU;
int16_t x364 = INT16_MIN;
uint64_t x372 = 1LLU;
uint32_t t88 = UINT32_MAX;
int32_t x381 = INT32_MIN;
volatile int64_t x382 = 232609LL;
volatile int64_t x390 = 109862957670455115LL;
uint64_t x396 = 686842899726388LLU;
static volatile int16_t x400 = INT16_MIN;
int32_t x401 = INT32_MIN;
uint32_t x402 = 14615U;
int8_t x406 = INT8_MIN;
uint8_t x412 = 1U;
int8_t x416 = 1;
static int16_t x422 = INT16_MIN;


void f0(void) {
	int8_t x5 = -23;
	int32_t x6 = 440496;
	volatile int32_t x8 = INT32_MIN;
	volatile int32_t t0 = 7;

	t0 = (x5|(x6|(x7/x8)));

	if (t0 != -7) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 976141918405LLU;
	int8_t x10 = 40;
	int8_t x11 = -3;
	int16_t x12 = -1;
	volatile uint64_t t1 = 36994620LLU;

	t1 = (x9|(x10|(x11/x12)));

	if (t1 != 976141918447LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MAX;
	int64_t x14 = INT64_MIN;
	volatile int32_t x15 = -1;
	uint32_t x16 = 5U;
	volatile int64_t t2 = -205521286429223937LL;

	t2 = (x13|(x14|(x15/x16)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MAX;
	int64_t x19 = 4119439774146406LL;
	int16_t x20 = INT16_MAX;
	static int64_t t3 = -193820118LL;

	t3 = (x17|(x18|(x19/x20)));

	if (t3 != -9223371911135592449LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	uint16_t x22 = 11U;
	int64_t x23 = -1LL;
	static uint8_t x24 = UINT8_MAX;

	t4 = (x21|(x22|(x23/x24)));

	if (t4 != -32757LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = UINT16_MAX;
	int8_t x26 = -19;
	int32_t x27 = 188681036;
	int8_t x28 = INT8_MAX;
	static int32_t t5 = 81601;

	t5 = (x25|(x26|(x27/x28)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x30 = 134;
	uint64_t x31 = 6198LLU;
	static int32_t x32 = -689;

	t6 = (x29|(x30|(x31/x32)));

	if (t6 != 135LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	int64_t x34 = INT64_MIN;
	int8_t x35 = INT8_MAX;
	static uint64_t x36 = UINT64_MAX;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (x33|(x34|(x35/x36)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 418LL;
	uint8_t x38 = UINT8_MAX;
	int64_t x40 = -36591054440247274LL;
	int64_t t8 = -1241980660LL;

	t8 = (x37|(x38|(x39/x40)));

	if (t8 != 511LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	uint32_t x42 = UINT32_MAX;
	uint16_t x43 = UINT16_MAX;
	uint16_t x44 = UINT16_MAX;
	volatile int64_t t9 = -85717058877118LL;

	t9 = (x41|(x42|(x43/x44)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MAX;
	int16_t x46 = -1;
	int64_t x47 = INT64_MIN;
	int64_t t10 = -1098317081297144063LL;

	t10 = (x45|(x46|(x47/x48)));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x49 = 3445718185074882LLU;
	int32_t x50 = INT32_MIN;
	static int16_t x51 = INT16_MAX;
	int64_t x52 = INT64_MIN;

	t11 = (x49|(x50|(x51/x52)));

	if (t11 != 18446744072777031874LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x53 = UINT8_MAX;
	static int16_t x54 = INT16_MIN;
	int32_t x55 = INT32_MIN;
	uint8_t x56 = UINT8_MAX;

	t12 = (x53|(x54|(x55/x56)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	static volatile uint32_t x58 = UINT32_MAX;
	static int16_t x59 = INT16_MIN;
	int16_t x60 = 1;

	t13 = (x57|(x58|(x59/x60)));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	volatile int8_t x63 = INT8_MIN;
	volatile int32_t t14 = 72162;

	t14 = (x61|(x62|(x63/x64)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x65 = UINT32_MAX;
	uint64_t x66 = 116250LLU;
	uint8_t x68 = UINT8_MAX;
	volatile uint64_t t15 = 619888LLU;

	t15 = (x65|(x66|(x67/x68)));

	if (t15 != 4294967295LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x69 = 11475854025724LLU;
	int16_t x71 = -1;
	volatile uint64_t t16 = 3406176LLU;

	t16 = (x69|(x70|(x71/x72)));

	if (t16 != 11544842463231LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	int64_t x75 = 1087256645006LL;
	int8_t x76 = 1;
	int64_t t17 = 0LL;

	t17 = (x73|(x74|(x75/x76)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x81 = 0;
	uint16_t x82 = 550U;
	static uint64_t x83 = 1499625864981LLU;
	uint32_t x84 = UINT32_MAX;
	static uint64_t t18 = 3337795825239LLU;

	t18 = (x81|(x82|(x83/x84)));

	if (t18 != 895LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = 1;
	uint8_t x86 = 79U;
	uint32_t x87 = 15U;
	int32_t x88 = INT32_MAX;
	uint32_t t19 = 91806559U;

	t19 = (x85|(x86|(x87/x88)));

	if (t19 != 79U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 2U;
	int16_t x91 = -1;
	int8_t x92 = INT8_MIN;

	t20 = (x89|(x90|(x91/x92)));

	if (t20 != -1443773) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x94 = INT32_MIN;
	int16_t x95 = INT16_MIN;
	int64_t x96 = 17317167257LL;

	t21 = (x93|(x94|(x95/x96)));

	if (t21 != -128LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MAX;
	int8_t x98 = 6;
	static uint16_t x99 = 1956U;
	static int16_t x100 = INT16_MIN;

	t22 = (x97|(x98|(x99/x100)));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x101 = INT64_MAX;
	volatile uint32_t x102 = UINT32_MAX;
	int64_t x103 = INT64_MIN;
	static int64_t t23 = INT64_MAX;

	t23 = (x101|(x102|(x103/x104)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	uint64_t x106 = UINT64_MAX;
	static uint64_t x107 = UINT64_MAX;
	static volatile uint64_t t24 = UINT64_MAX;

	t24 = (x105|(x106|(x107/x108)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x109 = 857U;
	static volatile int32_t x110 = INT32_MIN;
	int64_t x111 = INT64_MIN;
	int32_t x112 = 740188160;
	volatile int64_t t25 = -423387032110147LL;

	t25 = (x109|(x110|(x111/x112)));

	if (t25 != -1723429025LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = -1;
	int64_t x114 = -2026146678511LL;
	uint16_t x115 = UINT16_MAX;
	uint8_t x116 = 1U;
	int64_t t26 = 3561723LL;

	t26 = (x113|(x114|(x115/x116)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MIN;
	int16_t x118 = INT16_MIN;
	static int64_t x119 = INT64_MIN;
	volatile int64_t t27 = 276LL;

	t27 = (x117|(x118|(x119/x120)));

	if (t27 != -31380LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x121 = 4922U;
	int64_t x122 = -2584112146682174LL;
	static int16_t x123 = INT16_MIN;
	int64_t x124 = 7353528LL;
	static int64_t t28 = 1582247784LL;

	t28 = (x121|(x122|(x123/x124)));

	if (t28 != -2584112146677766LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -53;
	volatile uint32_t x126 = 4700U;
	int32_t x127 = -1;
	volatile int16_t x128 = INT16_MIN;
	uint32_t t29 = 18U;

	t29 = (x125|(x126|(x127/x128)));

	if (t29 != 4294967263U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x130 = INT8_MAX;
	int8_t x131 = INT8_MIN;
	uint32_t t30 = UINT32_MAX;

	t30 = (x129|(x130|(x131/x132)));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t t31 = 688482662LL;

	t31 = (x133|(x134|(x135/x136)));

	if (t31 != 1952446LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MIN;
	int64_t x140 = -1LL;
	volatile int64_t t32 = 3505538LL;

	t32 = (x137|(x138|(x139/x140)));

	if (t32 != -32534LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = -1;
	static int16_t x142 = INT16_MIN;
	int16_t x143 = -1;

	t33 = (x141|(x142|(x143/x144)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = UINT32_MAX;
	static int16_t x146 = INT16_MIN;
	int8_t x147 = -1;
	static uint16_t x148 = 4464U;
	volatile uint32_t t34 = UINT32_MAX;

	t34 = (x145|(x146|(x147/x148)));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = 12034417025158LLU;
	uint16_t x150 = UINT16_MAX;
	int64_t x151 = -1LL;
	int32_t x152 = INT32_MAX;
	volatile uint64_t t35 = 5LLU;

	t35 = (x149|(x150|(x151/x152)));

	if (t35 != 12034417033215LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MIN;
	uint64_t x156 = 7388210630LLU;
	volatile uint64_t t36 = 245LLU;

	t36 = (x153|(x154|(x155/x156)));

	if (t36 != 18446744071911374847LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x157 = UINT64_MAX;
	int32_t x159 = -4225;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (x157|(x158|(x159/x160)));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = 4351;
	static int32_t x162 = 2695;
	int16_t x163 = -32;
	volatile uint64_t t38 = 2070907679LLU;

	t38 = (x161|(x162|(x163/x164)));

	if (t38 != 20890989890952959LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x167 = 1;
	volatile int16_t x168 = INT16_MIN;
	volatile int32_t t39 = 190976;

	t39 = (x165|(x166|(x167/x168)));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x169 = -938991691841LL;
	int64_t x171 = INT64_MAX;
	volatile int8_t x172 = 1;
	int64_t t40 = 8103350651203085LL;

	t40 = (x169|(x170|(x171/x172)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -3;
	volatile int16_t x175 = INT16_MAX;
	volatile uint32_t x176 = UINT32_MAX;
	int64_t t41 = -5236LL;

	t41 = (x173|(x174|(x175/x176)));

	if (t41 != -3LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MIN;
	int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MIN;
	int16_t x180 = 803;

	t42 = (x177|(x178|(x179/x180)));

	if (t42 != -40) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = -13;
	volatile uint64_t x182 = UINT64_MAX;
	uint8_t x183 = 61U;
	static int16_t x184 = -1;
	uint64_t t43 = UINT64_MAX;

	t43 = (x181|(x182|(x183/x184)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x185 = 0U;
	int32_t x186 = 1802554;
	volatile int8_t x187 = 0;
	static int8_t x188 = 11;
	static volatile int32_t t44 = -3997037;

	t44 = (x185|(x186|(x187/x188)));

	if (t44 != 1802554) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x189 = INT64_MIN;
	volatile int8_t x190 = INT8_MIN;
	uint32_t x191 = 123U;
	uint8_t x192 = 4U;
	volatile int64_t t45 = -1487298742553993LL;

	t45 = (x189|(x190|(x191/x192)));

	if (t45 != -9223372032559808610LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x198 = 468;
	uint32_t x199 = 1714904U;
	int64_t t46 = 9585635LL;

	t46 = (x197|(x198|(x199/x200)));

	if (t46 != 471LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = INT8_MAX;
	int8_t x203 = INT8_MIN;
	volatile int32_t x204 = -3;
	int32_t t47 = INT32_MAX;

	t47 = (x201|(x202|(x203/x204)));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = UINT16_MAX;
	uint32_t x206 = 193U;
	int32_t x207 = -1;
	volatile uint64_t x208 = UINT64_MAX;
	static volatile uint64_t t48 = 193LLU;

	t48 = (x205|(x206|(x207/x208)));

	if (t48 != 65535LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = INT32_MAX;
	int8_t x212 = 1;
	volatile int32_t t49 = 3653108;

	t49 = (x209|(x210|(x211/x212)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x213 = INT8_MAX;
	uint64_t x214 = 12413727148374357LLU;
	uint64_t x215 = UINT64_MAX;
	volatile int8_t x216 = 15;
	volatile uint64_t t50 = 104684LLU;

	t50 = (x213|(x214|(x215/x216)));

	if (t50 != 1242179004204939647LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x218 = INT16_MIN;
	static int16_t x219 = -1;
	int32_t x220 = -1;
	int64_t t51 = 36LL;

	t51 = (x217|(x218|(x219/x220)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x221 = 323193757LL;
	int32_t x222 = -1;
	static int16_t x223 = -13;
	volatile int32_t x224 = 2;
	volatile int64_t t52 = 17288357619617113LL;

	t52 = (x221|(x222|(x223/x224)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = 6;
	int16_t x230 = INT16_MAX;
	int16_t x231 = -1007;
	int32_t x232 = 33;
	volatile int32_t t53 = -39893150;

	t53 = (x229|(x230|(x231/x232)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x237 = UINT64_MAX;
	int16_t x238 = INT16_MAX;
	int64_t x239 = INT64_MAX;
	int8_t x240 = INT8_MIN;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = (x237|(x238|(x239/x240)));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x244 = 11364597920LLU;
	volatile uint64_t t55 = 6464488638841742199LLU;

	t55 = (x241|(x242|(x243/x244)));

	if (t55 != 18446744073709549823LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x245 = INT8_MIN;
	uint64_t x246 = 375095697195LLU;
	static int8_t x247 = -24;
	int8_t x248 = 1;
	uint64_t t56 = 11958847580LLU;

	t56 = (x245|(x246|(x247/x248)));

	if (t56 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x249 = -1LL;
	uint8_t x250 = UINT8_MAX;
	uint64_t x252 = 13629157604157503LLU;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (x249|(x250|(x251/x252)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = INT64_MIN;
	int16_t x255 = INT16_MIN;
	uint16_t x256 = 25U;
	static volatile int64_t t58 = -35282436780226LL;

	t58 = (x253|(x254|(x255/x256)));

	if (t58 != -1310LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x257 = INT8_MIN;
	volatile int16_t x259 = INT16_MIN;
	int16_t x260 = -9;
	uint64_t t59 = UINT64_MAX;

	t59 = (x257|(x258|(x259/x260)));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x261 = 23U;
	int16_t x262 = 2;
	int32_t x263 = -1;
	int16_t x264 = INT16_MIN;
	volatile int32_t t60 = -49;

	t60 = (x261|(x262|(x263/x264)));

	if (t60 != 23) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x265 = 20U;
	int64_t x267 = -1944LL;
	static volatile int16_t x268 = -171;

	t61 = (x265|(x266|(x267/x268)));

	if (t61 != 3836607LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x269 = -1LL;
	uint32_t x270 = 1025251556U;
	volatile int8_t x272 = -15;
	volatile int64_t t62 = 1215172075180087LL;

	t62 = (x269|(x270|(x271/x272)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = 1;
	int64_t x274 = INT64_MIN;
	uint8_t x276 = UINT8_MAX;
	int64_t t63 = 276481060320239LL;

	t63 = (x273|(x274|(x275/x276)));

	if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x277 = 462U;
	volatile int16_t x278 = INT16_MAX;
	int16_t x279 = 0;
	int32_t x280 = -1;
	volatile uint32_t t64 = 11U;

	t64 = (x277|(x278|(x279/x280)));

	if (t64 != 32767U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = -16375;
	uint8_t x282 = 0U;
	int64_t x283 = -2449LL;

	t65 = (x281|(x282|(x283/x284)));

	if (t65 != -16375LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x285 = 117U;
	int8_t x286 = INT8_MAX;
	uint8_t x287 = UINT8_MAX;
	static volatile uint32_t t66 = 183536U;

	t66 = (x285|(x286|(x287/x288)));

	if (t66 != 127U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x289 = UINT8_MAX;
	uint64_t x290 = UINT64_MAX;
	volatile int32_t x291 = 362199018;
	int32_t x292 = INT32_MIN;
	static volatile uint64_t t67 = UINT64_MAX;

	t67 = (x289|(x290|(x291/x292)));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x294 = 11788928;
	volatile int8_t x295 = -1;

	t68 = (x293|(x294|(x295/x296)));

	if (t68 != -4LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = 57;
	volatile int8_t x298 = INT8_MAX;
	int32_t x299 = 0;
	volatile uint32_t x300 = UINT32_MAX;
	volatile uint32_t t69 = 7057321U;

	t69 = (x297|(x298|(x299/x300)));

	if (t69 != 127U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x303 = INT64_MAX;
	static volatile int32_t x304 = INT32_MIN;
	int64_t t70 = 1LL;

	t70 = (x301|(x302|(x303/x304)));

	if (t70 != -32513LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x305 = 20;
	uint64_t x307 = 9LLU;
	int32_t x308 = -1;
	volatile uint64_t t71 = 12448835LLU;

	t71 = (x305|(x306|(x307/x308)));

	if (t71 != 65535LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x310 = INT64_MIN;
	uint32_t x311 = 925U;
	volatile uint8_t x312 = UINT8_MAX;
	static int64_t t72 = 3LL;

	t72 = (x309|(x310|(x311/x312)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = INT16_MIN;
	int64_t x314 = INT64_MIN;
	uint64_t x315 = UINT64_MAX;
	uint32_t x316 = 82179007U;
	static uint64_t t73 = 1526026802LLU;

	t73 = (x313|(x314|(x315/x316)));

	if (t73 != 18446744073709521136LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x321 = 3636576LLU;
	int64_t x322 = 12056137LL;
	uint8_t x323 = UINT8_MAX;
	volatile uint16_t x324 = 226U;
	static uint64_t t74 = 1383029368LLU;

	t74 = (x321|(x322|(x323/x324)));

	if (t74 != 12058473LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x325 = 29LL;
	uint64_t x326 = UINT64_MAX;
	volatile uint32_t x327 = UINT32_MAX;
	int64_t x328 = -3910275109960542850LL;

	t75 = (x325|(x326|(x327/x328)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x331 = 14;
	uint64_t x332 = 55254215982368667LLU;
	uint64_t t76 = 2LLU;

	t76 = (x329|(x330|(x331/x332)));

	if (t76 != 9223372036854775815LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = INT8_MIN;
	static int32_t x335 = -1;
	int64_t x336 = INT64_MIN;
	int64_t t77 = 41875LL;

	t77 = (x333|(x334|(x335/x336)));

	if (t77 != -109LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x337 = INT32_MAX;
	volatile uint8_t x338 = 0U;
	int32_t x340 = INT32_MAX;
	int64_t t78 = -41LL;

	t78 = (x337|(x338|(x339/x340)));

	if (t78 != 6442450943LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x342 = UINT64_MAX;
	int8_t x343 = INT8_MIN;
	volatile int8_t x344 = INT8_MAX;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (x341|(x342|(x343/x344)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x345 = UINT16_MAX;
	int16_t x346 = -205;
	volatile int64_t x347 = -1LL;
	uint64_t x348 = UINT64_MAX;
	uint64_t t80 = UINT64_MAX;

	t80 = (x345|(x346|(x347/x348)));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x349 = INT64_MAX;
	static int64_t x350 = INT64_MIN;
	uint8_t x351 = UINT8_MAX;
	int64_t t81 = -7361412557LL;

	t81 = (x349|(x350|(x351/x352)));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x353 = -1;
	int32_t x354 = INT32_MIN;
	int8_t x356 = -32;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (x353|(x354|(x355/x356)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x357 = UINT32_MAX;
	volatile int16_t x358 = INT16_MAX;
	uint16_t x359 = UINT16_MAX;
	int32_t x360 = 241541;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = (x357|(x358|(x359/x360)));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x361 = 0U;
	static int32_t x362 = INT32_MIN;
	uint16_t x363 = 1U;
	volatile uint32_t t84 = 51560170U;

	t84 = (x361|(x362|(x363/x364)));

	if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x365 = -7LL;
	int16_t x366 = INT16_MIN;
	int8_t x367 = INT8_MIN;
	uint8_t x368 = 7U;
	int64_t t85 = 730160LL;

	t85 = (x365|(x366|(x367/x368)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x369 = 1;
	static int32_t x370 = INT32_MAX;
	static uint16_t x371 = 102U;
	volatile uint64_t t86 = 680599LLU;

	t86 = (x369|(x370|(x371/x372)));

	if (t86 != 2147483647LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = INT64_MIN;
	static int8_t x374 = -20;
	int16_t x375 = -1;
	int32_t x376 = INT32_MIN;
	volatile int64_t t87 = 57361311LL;

	t87 = (x373|(x374|(x375/x376)));

	if (t87 != -20LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x377 = UINT32_MAX;
	static int32_t x378 = INT32_MAX;
	int16_t x379 = INT16_MIN;
	static volatile int8_t x380 = INT8_MIN;

	t88 = (x377|(x378|(x379/x380)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x383 = INT32_MIN;
	volatile int64_t x384 = INT64_MIN;
	int64_t t89 = -165305LL;

	t89 = (x381|(x382|(x383/x384)));

	if (t89 != -2147251039LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x385 = -2728558;
	int16_t x386 = INT16_MIN;
	static int16_t x387 = -499;
	static uint8_t x388 = 40U;
	volatile int32_t t90 = 1810128;

	t90 = (x385|(x386|(x387/x388)));

	if (t90 != -10) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x389 = 18;
	int8_t x391 = -1;
	uint32_t x392 = 118971460U;
	static int64_t t91 = -62726684251579LL;

	t91 = (x389|(x390|(x391/x392)));

	if (t91 != 109862957670455167LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x393 = INT16_MIN;
	static int64_t x394 = INT64_MIN;
	static uint64_t x395 = UINT64_MAX;
	uint64_t t92 = 52973LLU;

	t92 = (x393|(x394|(x395/x396)));

	if (t92 != 18446744073709545705LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x397 = INT8_MIN;
	uint16_t x398 = UINT16_MAX;
	static uint64_t x399 = UINT64_MAX;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (x397|(x398|(x399/x400)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x403 = 79678112073LLU;
	volatile int16_t x404 = 1065;
	uint64_t t94 = 1824140794028717LLU;

	t94 = (x401|(x402|(x403/x404)));

	if (t94 != 18446744071636893599LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x405 = UINT8_MAX;
	static int64_t x407 = INT64_MAX;
	int64_t x408 = -59359564027LL;
	int64_t t95 = -3813463540856LL;

	t95 = (x405|(x406|(x407/x408)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = INT8_MIN;
	uint32_t x410 = UINT32_MAX;
	int64_t x411 = INT64_MAX;
	int64_t t96 = 315779486300005538LL;

	t96 = (x409|(x410|(x411/x412)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x413 = 1U;
	uint64_t x414 = 3LLU;
	static int8_t x415 = INT8_MIN;
	volatile uint64_t t97 = 232727639LLU;

	t97 = (x413|(x414|(x415/x416)));

	if (t97 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x417 = INT8_MIN;
	uint8_t x418 = 0U;
	int8_t x419 = 7;
	int8_t x420 = INT8_MAX;
	volatile int32_t t98 = -1069;

	t98 = (x417|(x418|(x419/x420)));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x421 = -1;
	uint64_t x423 = 126507452LLU;
	uint16_t x424 = 368U;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = (x421|(x422|(x423/x424)));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

