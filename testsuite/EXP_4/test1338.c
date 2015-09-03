#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x2 = UINT16_MAX;
uint64_t x3 = UINT64_MAX;
uint64_t x4 = 7454847759461643LLU;
volatile int32_t t1 = 3647;
int16_t x10 = INT16_MAX;
uint32_t x12 = 124U;
int64_t x14 = INT64_MIN;
int32_t x22 = INT32_MIN;
volatile int64_t x29 = INT64_MIN;
int32_t x35 = -1;
static uint64_t x41 = 1846LLU;
uint16_t x43 = UINT16_MAX;
static volatile int16_t x48 = INT16_MIN;
uint32_t x49 = UINT32_MAX;
volatile int8_t x55 = INT8_MAX;
int32_t x60 = 407499694;
int64_t x64 = INT64_MAX;
uint64_t t15 = UINT64_MAX;
uint32_t x65 = 16630838U;
static int64_t x68 = INT64_MIN;
static volatile int64_t x70 = INT64_MIN;
volatile int32_t x72 = INT32_MIN;
int16_t x73 = -9;
int32_t x77 = INT32_MIN;
int64_t x78 = INT64_MIN;
uint64_t x81 = 9700571465LLU;
volatile uint8_t x87 = 100U;
static volatile uint32_t t21 = 7109546U;
int8_t x89 = 14;
volatile uint8_t x94 = 1U;
int32_t x100 = INT32_MIN;
static uint64_t x103 = 3332052143931121395LLU;
uint32_t t30 = 1U;
uint8_t x127 = UINT8_MAX;
int64_t t32 = 1276LL;
volatile uint32_t x139 = 4288484U;
int8_t x150 = 36;
volatile uint16_t x153 = 2U;
int8_t x161 = -11;
int32_t t40 = 6;
int64_t x170 = -1192LL;
static int32_t x173 = INT32_MIN;
uint64_t t43 = 4970281981612458LLU;
int8_t x178 = 0;
volatile int32_t x179 = -1;
int8_t x183 = -1;
static int64_t x188 = INT64_MIN;
static volatile int8_t x192 = 33;
static int32_t t47 = 2074146;
int8_t x199 = INT8_MAX;
volatile int8_t x206 = 0;
int32_t x208 = -1;
int64_t x210 = -1384LL;
int32_t x211 = -4;
volatile uint64_t t52 = UINT64_MAX;
uint32_t x219 = 414929947U;
volatile int32_t t55 = -1169;
static volatile uint8_t x226 = 2U;
volatile int32_t t56 = -1148416;
uint32_t x240 = 75047U;
int32_t x242 = -14;
volatile uint16_t x244 = UINT16_MAX;
static int32_t t60 = 743537;
int8_t x249 = INT8_MIN;
volatile uint32_t x260 = 1531692U;
uint8_t x261 = UINT8_MAX;
int16_t x269 = 5225;
int32_t t69 = -32285512;
static volatile int64_t t70 = INT64_MAX;
uint32_t x286 = 389U;
int32_t x287 = 0;
static int32_t x288 = INT32_MIN;
volatile uint64_t t71 = 193LLU;
int32_t x295 = INT32_MIN;
volatile uint32_t t73 = UINT32_MAX;
int64_t x301 = -1LL;
volatile uint64_t t76 = UINT64_MAX;
volatile int64_t t77 = 9813808228LL;
volatile int32_t t78 = 1;
uint32_t x320 = UINT32_MAX;
static volatile int64_t x321 = INT64_MAX;
uint32_t x326 = 22140U;
int16_t x331 = INT16_MIN;
static uint32_t t82 = 26U;
uint16_t x333 = 3U;
uint32_t x338 = 65188377U;
volatile uint16_t x350 = 78U;
int32_t x352 = -13719;
int32_t t87 = -33470;
uint64_t x357 = 3754LLU;
int16_t x363 = 9;
int16_t x367 = -1;
int16_t x374 = INT16_MAX;
volatile int8_t x375 = INT8_MAX;
int32_t x376 = 1330;
uint32_t x377 = 981U;
uint16_t x384 = 1U;
volatile uint16_t x387 = 2U;
int32_t t96 = 481824;
uint32_t x393 = 10019U;
volatile uint32_t t98 = 88192U;
uint16_t x399 = UINT16_MAX;
uint8_t x400 = UINT8_MAX;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint64_t t0 = UINT64_MAX;

	t0 = (x1|(x2|(x3==x4)));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -531;
	int32_t x6 = INT32_MIN;
	int8_t x7 = -12;
	static uint16_t x8 = UINT16_MAX;

	t1 = (x5|(x6|(x7==x8)));

	if (t1 != -531) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 8U;
	volatile int64_t x11 = -1LL;
	int32_t t2 = -49;

	t2 = (x9|(x10|(x11==x12)));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int8_t x15 = 1;
	int16_t x16 = -240;
	volatile int64_t t3 = -5LL;

	t3 = (x13|(x14|(x15==x16)));

	if (t3 != -32768LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 20116;
	int32_t x18 = INT32_MAX;
	volatile uint64_t x19 = 10LLU;
	uint32_t x20 = UINT32_MAX;
	volatile int32_t t4 = INT32_MAX;

	t4 = (x17|(x18|(x19==x20)));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 12U;
	int32_t x23 = INT32_MAX;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = 1742526;

	t5 = (x21|(x22|(x23==x24)));

	if (t5 != -2147483636) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -2579512265860039336LL;
	int8_t x26 = INT8_MIN;
	int8_t x27 = INT8_MAX;
	int64_t x28 = INT64_MIN;
	int64_t t6 = -4277090156LL;

	t6 = (x25|(x26|(x27==x28)));

	if (t6 != -40LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = 14114206850LL;
	uint64_t x31 = 262926459214609LLU;
	int8_t x32 = INT8_MIN;
	volatile int64_t t7 = -3444683622891LL;

	t7 = (x29|(x30|(x31==x32)));

	if (t7 != -9223372022740568958LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = UINT64_MAX;
	uint8_t x34 = UINT8_MAX;
	int16_t x36 = -1;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = (x33|(x34|(x35==x36)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x37 = UINT8_MAX;
	int16_t x38 = -1;
	static int16_t x39 = INT16_MIN;
	int64_t x40 = INT64_MIN;
	int32_t t9 = 5;

	t9 = (x37|(x38|(x39==x40)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x42 = 50U;
	uint32_t x44 = 1927815U;
	uint64_t t10 = 4664309107LLU;

	t10 = (x41|(x42|(x43==x44)));

	if (t10 != 1846LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	static int16_t x46 = INT16_MAX;
	uint32_t x47 = 228854334U;
	static int64_t t11 = INT64_MAX;

	t11 = (x45|(x46|(x47==x48)));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 93878538U;
	volatile uint8_t x51 = 24U;
	volatile uint32_t x52 = UINT32_MAX;
	uint32_t t12 = UINT32_MAX;

	t12 = (x49|(x50|(x51==x52)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 514036;
	int8_t x54 = -15;
	static volatile uint8_t x56 = UINT8_MAX;
	int32_t t13 = 0;

	t13 = (x53|(x54|(x55==x56)));

	if (t13 != -11) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -70594020;
	int64_t x58 = -1LL;
	static int64_t x59 = INT64_MIN;
	int64_t t14 = -169094934176397864LL;

	t14 = (x57|(x58|(x59==x60)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 126;
	uint64_t x62 = UINT64_MAX;
	static int64_t x63 = -1641740754LL;

	t15 = (x61|(x62|(x63==x64)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MAX;
	int8_t x67 = 3;
	uint32_t t16 = 32U;

	t16 = (x65|(x66|(x67==x68)));

	if (t16 != 16630911U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 1U;
	int8_t x71 = INT8_MIN;
	int64_t t17 = 57LL;

	t17 = (x69|(x70|(x71==x72)));

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = -1;
	int8_t x75 = INT8_MIN;
	volatile int8_t x76 = -1;
	volatile int32_t t18 = -40880547;

	t18 = (x73|(x74|(x75==x76)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x79 = 353804395;
	int64_t x80 = INT64_MIN;
	volatile int64_t t19 = -134226113LL;

	t19 = (x77|(x78|(x79==x80)));

	if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 558242U;
	static volatile int16_t x83 = INT16_MIN;
	static int64_t x84 = INT64_MIN;
	uint64_t t20 = 0LLU;

	t20 = (x81|(x82|(x83==x84)));

	if (t20 != 9701096939LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	uint32_t x86 = 1336U;
	static int32_t x88 = -1;

	t21 = (x85|(x86|(x87==x88)));

	if (t21 != 4294967224U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = INT32_MIN;
	uint32_t x91 = UINT32_MAX;
	static uint32_t x92 = 319U;
	volatile int32_t t22 = -1567;

	t22 = (x89|(x90|(x91==x92)));

	if (t22 != -2147483634) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = 76192407150LL;
	int16_t x95 = -1;
	static int64_t x96 = -16218096LL;
	volatile int64_t t23 = 51LL;

	t23 = (x93|(x94|(x95==x96)));

	if (t23 != 76192407151LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 2043U;
	static int8_t x98 = INT8_MIN;
	static volatile int16_t x99 = -1;
	volatile uint32_t t24 = 528663648U;

	t24 = (x97|(x98|(x99==x100)));

	if (t24 != 4294967291U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	int64_t x102 = 43196886175LL;
	int64_t x104 = INT64_MIN;
	int64_t t25 = INT64_MAX;

	t25 = (x101|(x102|(x103==x104)));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 30583U;
	uint8_t x106 = 19U;
	volatile uint64_t x107 = 8422230318937LLU;
	int8_t x108 = INT8_MIN;
	int32_t t26 = -1;

	t26 = (x105|(x106|(x107==x108)));

	if (t26 != 30583) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -8232;
	volatile int8_t x110 = 1;
	int64_t x111 = -194960953LL;
	volatile int64_t x112 = -1LL;
	volatile int32_t t27 = 202;

	t27 = (x109|(x110|(x111==x112)));

	if (t27 != -8231) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 69U;
	int8_t x114 = INT8_MIN;
	int16_t x115 = 15448;
	static uint16_t x116 = 8U;
	int32_t t28 = 13018;

	t28 = (x113|(x114|(x115==x116)));

	if (t28 != -59) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = -804;
	int8_t x118 = 0;
	int8_t x119 = INT8_MIN;
	static volatile int64_t x120 = INT64_MIN;
	static volatile int32_t t29 = -1616;

	t29 = (x117|(x118|(x119==x120)));

	if (t29 != -804) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	uint32_t x122 = 248825U;
	int16_t x123 = INT16_MIN;
	static int16_t x124 = INT16_MIN;

	t30 = (x121|(x122|(x123==x124)));

	if (t30 != 2147732473U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	int64_t x126 = -1LL;
	int16_t x128 = 25;
	volatile int64_t t31 = -6316171040996LL;

	t31 = (x125|(x126|(x127==x128)));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	int64_t x130 = -1LL;
	int32_t x131 = INT32_MIN;
	volatile int64_t x132 = -1LL;

	t32 = (x129|(x130|(x131==x132)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	static uint8_t x134 = 64U;
	uint32_t x135 = 16659573U;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = 41601996;

	t33 = (x133|(x134|(x135==x136)));

	if (t33 != -64) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x137 = -45;
	uint16_t x138 = 436U;
	volatile int16_t x140 = -1;
	volatile int32_t t34 = 206;

	t34 = (x137|(x138|(x139==x140)));

	if (t34 != -9) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -310;
	int32_t x142 = -21;
	static int32_t x143 = -1;
	int16_t x144 = INT16_MIN;
	int32_t t35 = -8341989;

	t35 = (x141|(x142|(x143==x144)));

	if (t35 != -21) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 2U;
	int16_t x146 = -153;
	int64_t x147 = INT64_MIN;
	int16_t x148 = INT16_MAX;
	int32_t t36 = -69595;

	t36 = (x145|(x146|(x147==x148)));

	if (t36 != -153) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	uint32_t x151 = 35577U;
	int8_t x152 = INT8_MIN;
	int32_t t37 = INT32_MAX;

	t37 = (x149|(x150|(x151==x152)));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x154 = UINT64_MAX;
	int64_t x155 = -1LL;
	int16_t x156 = INT16_MAX;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (x153|(x154|(x155==x156)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 815U;
	int8_t x158 = INT8_MIN;
	int32_t x159 = INT32_MIN;
	volatile int16_t x160 = -14464;
	volatile int32_t t39 = 14;

	t39 = (x157|(x158|(x159==x160)));

	if (t39 != -81) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = -1;
	volatile int64_t x163 = -1LL;
	int8_t x164 = 3;

	t40 = (x161|(x162|(x163==x164)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MIN;
	int32_t x166 = INT32_MIN;
	uint16_t x167 = UINT16_MAX;
	static volatile int64_t x168 = -1LL;
	int32_t t41 = INT32_MIN;

	t41 = (x165|(x166|(x167==x168)));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = 28739U;
	volatile int32_t x171 = -1;
	int8_t x172 = INT8_MAX;
	static volatile int64_t t42 = -147263439033LL;

	t42 = (x169|(x170|(x171==x172)));

	if (t42 != -1189LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x174 = 80417873864852LLU;
	static volatile uint64_t x175 = UINT64_MAX;
	int16_t x176 = -1;

	t43 = (x173|(x174|(x175==x176)));

	if (t43 != 18446744072615766165LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = INT64_MIN;
	int32_t x180 = -1290587;
	volatile int64_t t44 = INT64_MIN;

	t44 = (x177|(x178|(x179==x180)));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 91404U;
	int64_t x182 = INT64_MAX;
	uint8_t x184 = 0U;
	int64_t t45 = INT64_MAX;

	t45 = (x181|(x182|(x183==x184)));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	volatile int8_t x186 = 39;
	int64_t x187 = -1LL;
	static uint64_t t46 = UINT64_MAX;

	t46 = (x185|(x186|(x187==x188)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 11;
	int8_t x190 = 10;
	uint16_t x191 = 19U;

	t47 = (x189|(x190|(x191==x192)));

	if (t47 != 11) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	uint16_t x194 = 4U;
	volatile int8_t x195 = 1;
	uint32_t x196 = 2069533926U;
	uint64_t t48 = UINT64_MAX;

	t48 = (x193|(x194|(x195==x196)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = UINT8_MAX;
	static uint8_t x198 = UINT8_MAX;
	static int8_t x200 = -1;
	volatile int32_t t49 = 684380;

	t49 = (x197|(x198|(x199==x200)));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 289;
	int8_t x202 = -2;
	static uint64_t x203 = 52759683096592LLU;
	uint8_t x204 = 1U;
	volatile int32_t t50 = -3;

	t50 = (x201|(x202|(x203==x204)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x205 = -1;
	int8_t x207 = INT8_MAX;
	static int32_t t51 = 0;

	t51 = (x205|(x206|(x207==x208)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	static int64_t x212 = INT64_MIN;

	t52 = (x209|(x210|(x211==x212)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	uint64_t x214 = 51938140757LLU;
	int32_t x215 = INT32_MIN;
	uint64_t x216 = UINT64_MAX;
	uint64_t t53 = 239711437LLU;

	t53 = (x213|(x214|(x215==x216)));

	if (t53 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = INT64_MIN;
	volatile int64_t x218 = -1004LL;
	uint32_t x220 = 1753491U;
	static int64_t t54 = 7580679341LL;

	t54 = (x217|(x218|(x219==x220)));

	if (t54 != -1004LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -465302;
	static int8_t x222 = -45;
	volatile int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MAX;

	t55 = (x221|(x222|(x223==x224)));

	if (t55 != -5) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	int64_t x227 = INT64_MAX;
	static int16_t x228 = INT16_MAX;

	t56 = (x225|(x226|(x227==x228)));

	if (t56 != -2147483646) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 213;
	volatile int64_t x230 = INT64_MIN;
	uint8_t x231 = 0U;
	int8_t x232 = -33;
	volatile int64_t t57 = 1622954182221993LL;

	t57 = (x229|(x230|(x231==x232)));

	if (t57 != -9223372036854775595LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	int16_t x234 = INT16_MIN;
	uint8_t x235 = 52U;
	int32_t x236 = INT32_MIN;
	volatile int32_t t58 = 28514;

	t58 = (x233|(x234|(x235==x236)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = -3;
	uint16_t x239 = 68U;
	int64_t t59 = -897502676LL;

	t59 = (x237|(x238|(x239==x240)));

	if (t59 != -3LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = -15;
	int64_t x243 = -1065457305419LL;

	t60 = (x241|(x242|(x243==x244)));

	if (t60 != -13) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	uint8_t x246 = 2U;
	int64_t x247 = 30LL;
	static int16_t x248 = 0;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = (x245|(x246|(x247==x248)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = -1;
	volatile int16_t x251 = INT16_MIN;
	uint64_t x252 = 548491212362LLU;
	static int32_t t62 = 1;

	t62 = (x249|(x250|(x251==x252)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MIN;
	uint32_t x254 = 1952341898U;
	uint32_t x255 = 23U;
	int8_t x256 = 1;
	uint32_t t63 = 27867U;

	t63 = (x253|(x254|(x255==x256)));

	if (t63 != 4099825546U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 27904703U;
	uint8_t x258 = UINT8_MAX;
	volatile uint32_t x259 = 241495U;
	uint32_t t64 = 1105985873U;

	t64 = (x257|(x258|(x259==x260)));

	if (t64 != 27904767U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x262 = 19606U;
	uint8_t x263 = 3U;
	uint8_t x264 = UINT8_MAX;
	static int32_t t65 = -1076;

	t65 = (x261|(x262|(x263==x264)));

	if (t65 != 19711) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = INT32_MIN;
	uint16_t x266 = UINT16_MAX;
	uint16_t x267 = UINT16_MAX;
	volatile int8_t x268 = 0;
	volatile int32_t t66 = 1;

	t66 = (x265|(x266|(x267==x268)));

	if (t66 != -2147418113) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x270 = 0U;
	int16_t x271 = 60;
	uint16_t x272 = 354U;
	int32_t t67 = 128373479;

	t67 = (x269|(x270|(x271==x272)));

	if (t67 != 5225) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = INT32_MIN;
	int8_t x274 = INT8_MIN;
	static uint16_t x275 = UINT16_MAX;
	volatile int8_t x276 = INT8_MIN;
	volatile int32_t t68 = -3228;

	t68 = (x273|(x274|(x275==x276)));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	volatile int32_t x278 = -1;
	int32_t x279 = 79660943;
	static int16_t x280 = INT16_MAX;

	t69 = (x277|(x278|(x279==x280)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	uint8_t x282 = UINT8_MAX;
	int32_t x283 = -1;
	int8_t x284 = -1;

	t70 = (x281|(x282|(x283==x284)));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 333927LLU;

	t71 = (x285|(x286|(x287==x288)));

	if (t71 != 334311LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MIN;
	int32_t x290 = 358988;
	static int16_t x291 = -1;
	static int32_t x292 = -1;
	volatile int32_t t72 = 6537121;

	t72 = (x289|(x290|(x291==x292)));

	if (t72 != -2147124659) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x293 = 72237424U;
	int32_t x294 = -1;
	int16_t x296 = INT16_MIN;

	t73 = (x293|(x294|(x295==x296)));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 8U;
	uint64_t x298 = 406999009LLU;
	uint32_t x299 = 8253596U;
	static int32_t x300 = -11228049;
	static volatile uint64_t t74 = 633804948301638LLU;

	t74 = (x297|(x298|(x299==x300)));

	if (t74 != 406999017LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = INT32_MAX;
	uint64_t x303 = 1212208371910500193LLU;
	volatile int64_t x304 = INT64_MAX;
	volatile int64_t t75 = -6LL;

	t75 = (x301|(x302|(x303==x304)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	volatile uint64_t x306 = UINT64_MAX;
	uint64_t x307 = UINT64_MAX;
	static int32_t x308 = -5;

	t76 = (x305|(x306|(x307==x308)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MIN;
	volatile uint8_t x311 = 107U;
	volatile int8_t x312 = INT8_MIN;

	t77 = (x309|(x310|(x311==x312)));

	if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 8U;
	uint16_t x314 = 3U;
	int64_t x315 = 49LL;
	uint32_t x316 = 635272U;

	t78 = (x313|(x314|(x315==x316)));

	if (t78 != 11) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = INT16_MIN;
	uint64_t x318 = 2257314839LLU;
	int8_t x319 = -1;
	volatile uint64_t t79 = 1490773808034736LLU;

	t79 = (x317|(x318|(x319==x320)));

	if (t79 != 18446744073709544471LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = INT8_MIN;
	volatile int32_t x323 = -1;
	int64_t x324 = INT64_MIN;
	static volatile int64_t t80 = -534610231LL;

	t80 = (x321|(x322|(x323==x324)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 929936U;
	volatile int16_t x327 = -93;
	uint8_t x328 = 3U;
	static uint32_t t81 = 516109183U;

	t81 = (x325|(x326|(x327==x328)));

	if (t81 != 947964U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = UINT8_MAX;
	static uint32_t x330 = 1972172U;
	int32_t x332 = INT32_MIN;

	t82 = (x329|(x330|(x331==x332)));

	if (t82 != 1972223U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = INT32_MIN;
	int32_t x335 = -1;
	int32_t x336 = INT32_MIN;
	static volatile int32_t t83 = -44923;

	t83 = (x333|(x334|(x335==x336)));

	if (t83 != -2147483645) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MIN;
	static int16_t x339 = -9408;
	static int16_t x340 = INT16_MAX;
	uint32_t t84 = 1U;

	t84 = (x337|(x338|(x339==x340)));

	if (t84 != 4294967193U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x341 = 125U;
	int64_t x342 = -1LL;
	int8_t x343 = INT8_MIN;
	int64_t x344 = -12579027LL;
	int64_t t85 = 3874744456386469921LL;

	t85 = (x341|(x342|(x343==x344)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x345 = UINT8_MAX;
	uint64_t x346 = 3972112067060309199LLU;
	volatile int8_t x347 = INT8_MIN;
	int32_t x348 = INT32_MAX;
	volatile uint64_t t86 = 7LLU;

	t86 = (x345|(x346|(x347==x348)));

	if (t86 != 3972112067060309247LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	uint64_t x351 = UINT64_MAX;

	t87 = (x349|(x350|(x351==x352)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = 1;
	int32_t x354 = -1;
	int16_t x355 = -1;
	volatile int16_t x356 = INT16_MAX;
	static volatile int32_t t88 = -443;

	t88 = (x353|(x354|(x355==x356)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x358 = INT32_MIN;
	int8_t x359 = 13;
	volatile int8_t x360 = -43;
	uint64_t t89 = 30400203LLU;

	t89 = (x357|(x358|(x359==x360)));

	if (t89 != 18446744071562071722LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x361 = 11LLU;
	int8_t x362 = -1;
	static int64_t x364 = -1LL;
	uint64_t t90 = UINT64_MAX;

	t90 = (x361|(x362|(x363==x364)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	uint16_t x366 = UINT16_MAX;
	int16_t x368 = INT16_MAX;
	int32_t t91 = 34071003;

	t91 = (x365|(x366|(x367==x368)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 0;
	uint32_t x370 = UINT32_MAX;
	static int16_t x371 = INT16_MAX;
	int8_t x372 = 23;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = (x369|(x370|(x371==x372)));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x373 = UINT16_MAX;
	static int32_t t93 = 305;

	t93 = (x373|(x374|(x375==x376)));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x378 = INT32_MIN;
	int64_t x379 = -1LL;
	static uint16_t x380 = 28065U;
	static uint32_t t94 = 24U;

	t94 = (x377|(x378|(x379==x380)));

	if (t94 != 2147484629U) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = -14831;
	uint64_t x382 = 1853487173LLU;
	int8_t x383 = -19;
	uint64_t t95 = 294844881009240343LLU;

	t95 = (x381|(x382|(x383==x384)));

	if (t95 != 18446744073709551189LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = INT8_MIN;
	int32_t x386 = INT32_MAX;
	int8_t x388 = INT8_MIN;

	t96 = (x385|(x386|(x387==x388)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	static volatile uint64_t x390 = 7LLU;
	int16_t x391 = INT16_MIN;
	int64_t x392 = INT64_MIN;
	volatile uint64_t t97 = 572781523843LLU;

	t97 = (x389|(x390|(x391==x392)));

	if (t97 != 18446744071562067975LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = -1555;
	uint64_t x395 = 94938893027LLU;
	int64_t x396 = 57897457432554LL;

	t98 = (x393|(x394|(x395==x396)));

	if (t98 != 4294967279U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 9725U;
	int32_t x398 = -1;
	volatile int32_t t99 = -340;

	t99 = (x397|(x398|(x399==x400)));

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

