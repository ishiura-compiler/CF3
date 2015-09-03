#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 1LLU;
int32_t x7 = -222017913;
static uint64_t x14 = 3319689151LLU;
int64_t x16 = -13851949LL;
uint64_t t3 = 85879561LLU;
static int8_t x19 = -7;
int64_t x23 = 4LL;
int64_t x25 = 0LL;
uint16_t x27 = 22U;
volatile uint32_t x32 = 35780U;
int8_t x38 = 1;
static uint64_t x47 = 173996132751LLU;
static uint64_t t10 = 2LLU;
uint64_t x51 = 76958LLU;
static uint64_t x52 = UINT64_MAX;
uint64_t t11 = 2655LLU;
static uint32_t t12 = 34U;
int32_t x57 = 19159699;
volatile uint32_t t13 = 51146804U;
volatile int64_t x63 = INT64_MIN;
static int64_t x84 = INT64_MIN;
static int32_t x89 = -2223;
uint32_t t22 = 21U;
static int8_t x106 = INT8_MIN;
static int16_t x107 = 6724;
volatile uint16_t x108 = UINT16_MAX;
int32_t x111 = INT32_MIN;
int32_t x114 = 6657;
uint8_t x116 = 79U;
int8_t x123 = 9;
int64_t x129 = -16231090123591LL;
uint64_t x147 = 1LLU;
uint64_t t32 = 1391244451642613LLU;
static volatile int64_t x154 = 14271665195291LL;
int32_t x157 = INT32_MIN;
static volatile int8_t x165 = -1;
uint16_t x175 = 3U;
uint32_t t38 = 6893455U;
static volatile int64_t t39 = -341237451142680281LL;
uint64_t x188 = 8144LLU;
uint32_t t43 = 412U;
static volatile int32_t t45 = 7064467;
int32_t x214 = -1;
int32_t x218 = 2;
static volatile uint64_t t48 = 650246LLU;
volatile int8_t x227 = -5;
uint32_t x230 = 6U;
volatile int32_t x233 = INT32_MIN;
volatile int8_t x235 = 15;
int8_t x239 = 2;
int64_t x241 = INT64_MIN;
uint64_t x243 = 1538860742949522LLU;
static volatile int64_t t54 = -40LL;
static int64_t x254 = INT64_MAX;
static int16_t x257 = 12;
int16_t x260 = INT16_MIN;
int32_t x263 = INT32_MIN;
uint32_t x276 = 66217756U;
static int8_t x278 = -1;
int8_t x285 = 0;
int16_t x287 = INT16_MAX;
int8_t x292 = INT8_MIN;
uint8_t x299 = 0U;
volatile int16_t x310 = -12753;
int8_t x315 = -2;
uint16_t x319 = UINT16_MAX;
volatile int32_t t69 = 34680367;
volatile int8_t x331 = INT8_MIN;
uint64_t x338 = 66178996LLU;
int8_t x355 = -1;
volatile int16_t x361 = 7;
int64_t t78 = -123747947175503319LL;
uint16_t x372 = 254U;
int64_t x382 = 0LL;
int8_t x383 = INT8_MAX;
uint32_t x396 = 14855138U;
static uint64_t t85 = 24LLU;
static int64_t x408 = -58384678658LL;
static volatile int64_t t87 = -1273021983244258LL;
static uint32_t x415 = 692493761U;
uint16_t x423 = UINT16_MAX;
uint64_t x427 = UINT64_MAX;
uint64_t x428 = 427638LLU;
uint32_t x443 = UINT32_MAX;
static int8_t x447 = -1;
volatile uint64_t x450 = UINT64_MAX;
int32_t x451 = INT32_MIN;
int8_t x454 = INT8_MIN;
int32_t t97 = INT32_MIN;
int8_t x457 = INT8_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static int32_t x2 = -1;
	static uint64_t x3 = 30LLU;
	uint64_t x4 = 11LLU;

	t0 = ((x1|(x2-x3))-x4);

	if (t0 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 86U;
	volatile int32_t x6 = 305278000;
	uint16_t x8 = 6U;
	static uint32_t t1 = 1U;

	t1 = ((x5|(x6-x7))-x8);

	if (t1 != 527295993U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 12U;
	volatile int32_t x10 = 474;
	uint64_t x11 = 94LLU;
	int8_t x12 = 2;
	volatile uint64_t t2 = 45766882LLU;

	t2 = ((x9|(x10-x11))-x12);

	if (t2 != 378LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -1;
	volatile int8_t x15 = INT8_MIN;

	t3 = ((x13|(x14-x15))-x16);

	if (t3 != 13851948LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 46;
	int8_t x18 = -1;
	static volatile int32_t x20 = -1;
	static int32_t t4 = 717;

	t4 = ((x17|(x18-x19))-x20);

	if (t4 != 47) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int8_t x22 = INT8_MAX;
	int8_t x24 = INT8_MAX;
	volatile int64_t t5 = -4553735803996126473LL;

	t5 = ((x21|(x22-x23))-x24);

	if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x26 = -6;
	int16_t x28 = INT16_MIN;
	static volatile int64_t t6 = -22034170918936LL;

	t6 = ((x25|(x26-x27))-x28);

	if (t6 != 32740LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	uint8_t x30 = 4U;
	int32_t x31 = -1;
	static volatile uint32_t t7 = 15U;

	t7 = ((x29|(x30-x31))-x32);

	if (t7 != 29755U) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	int32_t x34 = -7570377;
	int32_t x35 = INT32_MIN;
	static int32_t x36 = -1;
	int32_t t8 = 3;

	t8 = ((x33|(x34-x35))-x36);

	if (t8 != -968) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int16_t x39 = 1;
	int16_t x40 = INT16_MIN;
	int32_t t9 = 4115;

	t9 = ((x37|(x38-x39))-x40);

	if (t9 != 32895) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = INT32_MIN;
	static uint8_t x46 = 5U;
	uint64_t x48 = 8301643477863LLU;

	t10 = ((x45|(x46-x47))-x48);

	if (t10 != 18446735772016116495LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MAX;
	static int16_t x50 = 191;

	t11 = ((x49|(x50-x51))-x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x53 = 22U;
	int32_t x54 = 1;
	int32_t x55 = -1;
	int8_t x56 = INT8_MIN;

	t12 = ((x53|(x54-x55))-x56);

	if (t12 != 150U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x58 = 37U;
	int32_t x59 = 6564873;
	int16_t x60 = INT16_MIN;

	t13 = ((x57|(x58-x59))-x60);

	if (t13 != 4290797215U) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x61 = -1;
	uint64_t x62 = UINT64_MAX;
	int16_t x64 = INT16_MIN;
	static uint64_t t14 = 1LLU;

	t14 = ((x61|(x62-x63))-x64);

	if (t14 != 32767LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 0U;
	static int64_t x70 = INT64_MIN;
	int8_t x71 = INT8_MIN;
	static volatile int8_t x72 = INT8_MAX;
	static int64_t t15 = -1257901LL;

	t15 = ((x69|(x70-x71))-x72);

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = 8;
	volatile int64_t x74 = 1LL;
	static int8_t x75 = 51;
	static volatile uint8_t x76 = 1U;
	static int64_t t16 = -55345538856951400LL;

	t16 = ((x73|(x74-x75))-x76);

	if (t16 != -51LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	static int16_t x82 = 18;
	int8_t x83 = -48;
	static int64_t t17 = -29459149570476LL;

	t17 = ((x81|(x82-x83))-x84);

	if (t17 != 9223372034707292226LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MAX;
	int16_t x86 = -1;
	int32_t x87 = -16744;
	static volatile int8_t x88 = -60;
	volatile int32_t t18 = 6402275;

	t18 = ((x85|(x86-x87))-x88);

	if (t18 != 16827) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x90 = -1LL;
	volatile uint8_t x91 = UINT8_MAX;
	static int64_t x92 = -3LL;
	volatile int64_t t19 = 27673291699768313LL;

	t19 = ((x89|(x90-x91))-x92);

	if (t19 != -172LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x93 = 10U;
	uint8_t x94 = 1U;
	volatile int64_t x95 = 519327015941364LL;
	static int16_t x96 = -1;
	static int64_t t20 = 0LL;

	t20 = ((x93|(x94-x95))-x96);

	if (t20 != -519327015941360LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -1;
	int32_t x98 = INT32_MAX;
	uint8_t x99 = UINT8_MAX;
	static int16_t x100 = 0;
	int32_t t21 = 6727284;

	t21 = ((x97|(x98-x99))-x100);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x101 = UINT32_MAX;
	volatile int32_t x102 = -8915;
	uint32_t x103 = 232U;
	int16_t x104 = INT16_MIN;

	t22 = ((x101|(x102-x103))-x104);

	if (t22 != 32767U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x105 = -1LL;
	int64_t t23 = 1711173323607LL;

	t23 = ((x105|(x106-x107))-x108);

	if (t23 != -65536LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = -1;
	int16_t x110 = -1531;
	static int32_t x112 = -225;
	static volatile int32_t t24 = -158682;

	t24 = ((x109|(x110-x111))-x112);

	if (t24 != 224) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = -1;
	uint64_t x115 = 25322LLU;
	volatile uint64_t t25 = 27971959659026LLU;

	t25 = ((x113|(x114-x115))-x116);

	if (t25 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x117 = -4306074463597810LL;
	uint64_t x118 = UINT64_MAX;
	int8_t x119 = INT8_MAX;
	static uint8_t x120 = 1U;
	volatile uint64_t t26 = 14425776281014579LLU;

	t26 = ((x117|(x118-x119))-x120);

	if (t26 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = -1;
	static uint8_t x122 = 0U;
	static volatile int32_t x124 = INT32_MAX;
	volatile int32_t t27 = INT32_MIN;

	t27 = ((x121|(x122-x123))-x124);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x125 = INT64_MIN;
	int8_t x126 = 1;
	uint32_t x127 = 136U;
	int16_t x128 = INT16_MIN;
	int64_t t28 = 16568132941LL;

	t28 = ((x125|(x126-x127))-x128);

	if (t28 != -9223372032559775879LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x130 = 7U;
	int16_t x131 = INT16_MAX;
	volatile uint32_t x132 = 0U;
	volatile int64_t t29 = -136612LL;

	t29 = ((x129|(x130-x131))-x132);

	if (t29 != -29511LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = 3LLU;
	int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MIN;
	volatile uint32_t x136 = 34724U;
	uint64_t t30 = 102341LLU;

	t30 = ((x133|(x134-x135))-x136);

	if (t30 != 18446744073709516895LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x141 = INT64_MAX;
	uint64_t x142 = 17527344105LLU;
	int16_t x143 = -16;
	int32_t x144 = 23616215;
	volatile uint64_t t31 = 234LLU;

	t31 = ((x141|(x142-x143))-x144);

	if (t31 != 9223372036831159592LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = UINT64_MAX;
	static uint64_t x146 = UINT64_MAX;
	volatile int8_t x148 = -1;

	t32 = ((x145|(x146-x147))-x148);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = -1;
	int8_t x150 = -22;
	static int8_t x151 = INT8_MAX;
	int32_t x152 = 65345;
	static volatile int32_t t33 = 69010;

	t33 = ((x149|(x150-x151))-x152);

	if (t33 != -65346) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x153 = 522895661081LLU;
	uint32_t x155 = UINT32_MAX;
	uint64_t x156 = 7252328LLU;
	uint64_t t34 = 7LLU;

	t34 = ((x153|(x154-x155))-x156);

	if (t34 != 14267866427317LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x158 = INT8_MIN;
	static volatile int64_t x159 = 18489LL;
	volatile int32_t x160 = -1;
	int64_t t35 = 286532588LL;

	t35 = ((x157|(x158-x159))-x160);

	if (t35 != -18616LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x166 = -1;
	volatile uint32_t x167 = UINT32_MAX;
	uint16_t x168 = 7U;
	uint32_t t36 = 433076U;

	t36 = ((x165|(x166-x167))-x168);

	if (t36 != 4294967288U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = INT64_MIN;
	int32_t x170 = -1;
	uint32_t x171 = 225U;
	int8_t x172 = INT8_MIN;
	int64_t t37 = 4239771908447415LL;

	t37 = ((x169|(x170-x171))-x172);

	if (t37 != -9223372032559808610LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = INT8_MIN;
	uint32_t x174 = 2123215U;
	int8_t x176 = 1;

	t38 = ((x173|(x174-x175))-x176);

	if (t38 != 4294967243U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = -11;
	int32_t x182 = INT32_MIN;
	int64_t x183 = 3822025913353300LL;
	static volatile int64_t x184 = INT64_MIN;

	t39 = ((x181|(x182-x183))-x184);

	if (t39 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = INT16_MIN;
	int8_t x186 = INT8_MIN;
	static int32_t x187 = INT32_MIN;
	uint64_t t40 = 1856179LLU;

	t40 = ((x185|(x186-x187))-x188);

	if (t40 != 18446744073709543344LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = 2613;
	int8_t x194 = INT8_MIN;
	int64_t x195 = -21LL;
	static int16_t x196 = INT16_MIN;
	volatile int64_t t41 = 10LL;

	t41 = ((x193|(x194-x195))-x196);

	if (t41 != 32693LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x197 = 4;
	uint64_t x198 = UINT64_MAX;
	int32_t x199 = -1;
	uint32_t x200 = UINT32_MAX;
	static volatile uint64_t t42 = 2329LLU;

	t42 = ((x197|(x198-x199))-x200);

	if (t42 != 18446744069414584325LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = INT32_MAX;
	int32_t x202 = -1;
	volatile uint32_t x203 = 402400695U;
	static uint16_t x204 = 13184U;

	t43 = ((x201|(x202-x203))-x204);

	if (t43 != 4294954111U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x205 = INT64_MIN;
	static volatile int64_t x206 = INT64_MAX;
	volatile uint32_t x207 = UINT32_MAX;
	static int32_t x208 = INT32_MIN;
	int64_t t44 = 15589209459347LL;

	t44 = ((x205|(x206-x207))-x208);

	if (t44 != -2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x209 = INT8_MIN;
	static uint8_t x210 = 5U;
	int16_t x211 = INT16_MIN;
	int8_t x212 = -2;

	t45 = ((x209|(x210-x211))-x212);

	if (t45 != -121) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = -1;
	uint8_t x215 = 16U;
	volatile int8_t x216 = -3;
	volatile int32_t t46 = 38851;

	t46 = ((x213|(x214-x215))-x216);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x217 = 1;
	int16_t x219 = INT16_MAX;
	int32_t x220 = INT32_MIN;
	volatile int32_t t47 = -4;

	t47 = ((x217|(x218-x219))-x220);

	if (t47 != 2147450883) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x221 = UINT16_MAX;
	volatile int32_t x222 = -1;
	volatile uint64_t x223 = UINT64_MAX;
	uint8_t x224 = UINT8_MAX;

	t48 = ((x221|(x222-x223))-x224);

	if (t48 != 65280LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = 225682;
	static int32_t x228 = -1;
	volatile int32_t t49 = -19782509;

	t49 = ((x225|(x226-x227))-x228);

	if (t49 != -3688) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x229 = INT16_MIN;
	int32_t x231 = -504;
	int16_t x232 = INT16_MAX;
	volatile uint32_t t50 = 23242U;

	t50 = ((x229|(x230-x231))-x232);

	if (t50 != 4294902271U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x234 = 21663U;
	volatile uint8_t x236 = 2U;
	static volatile uint32_t t51 = 122275U;

	t51 = ((x233|(x234-x235))-x236);

	if (t51 != 2147505294U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = -1;
	int16_t x238 = INT16_MIN;
	int64_t x240 = INT64_MIN;
	int64_t t52 = INT64_MAX;

	t52 = ((x237|(x238-x239))-x240);

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x242 = INT64_MAX;
	int16_t x244 = -4925;
	static uint64_t t53 = 398012726580LLU;

	t53 = ((x241|(x242-x243))-x244);

	if (t53 != 18445205212966607018LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = INT64_MIN;
	int16_t x246 = INT16_MIN;
	int16_t x247 = 10;
	static volatile uint16_t x248 = UINT16_MAX;

	t54 = ((x245|(x246-x247))-x248);

	if (t54 != -98313LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x249 = 2U;
	int32_t x250 = INT32_MIN;
	static int8_t x251 = -1;
	uint32_t x252 = UINT32_MAX;
	uint32_t t55 = 26U;

	t55 = ((x249|(x250-x251))-x252);

	if (t55 != 2147483652U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x253 = 15U;
	static uint64_t x255 = 5719075751454986LLU;
	int64_t x256 = INT64_MIN;
	volatile uint64_t t56 = 34597641LLU;

	t56 = ((x253|(x254-x255))-x256);

	if (t56 != 18441024997958096639LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = INT8_MIN;
	volatile int32_t t57 = -119409781;

	t57 = ((x257|(x258-x259))-x260);

	if (t57 != 98431) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = -1;
	int8_t x262 = -1;
	int16_t x264 = 15;
	int32_t t58 = 578381;

	t58 = ((x261|(x262-x263))-x264);

	if (t58 != -16) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x269 = -832;
	uint16_t x270 = 295U;
	volatile int8_t x271 = 44;
	int16_t x272 = 1;
	static int32_t t59 = 29912068;

	t59 = ((x269|(x270-x271))-x272);

	if (t59 != -774) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x273 = -12;
	int16_t x274 = INT16_MAX;
	int16_t x275 = INT16_MIN;
	volatile uint32_t t60 = 34816U;

	t60 = ((x273|(x274-x275))-x276);

	if (t60 != 4228749539U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x277 = 58U;
	uint32_t x279 = 129118U;
	uint8_t x280 = 1U;
	volatile uint32_t t61 = 651476804U;

	t61 = ((x277|(x278-x279))-x280);

	if (t61 != 4294838202U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x281 = 925435703124LLU;
	int8_t x282 = -1;
	static uint64_t x283 = 451506934LLU;
	int8_t x284 = INT8_MAX;
	static volatile uint64_t t62 = 902932818LLU;

	t62 = ((x281|(x282-x283))-x284);

	if (t62 != 18446744073664900830LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x286 = 10672;
	static uint16_t x288 = 2U;
	int32_t t63 = 23;

	t63 = ((x285|(x286-x287))-x288);

	if (t63 != -22097) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = INT16_MAX;
	static int64_t x290 = 39688252LL;
	uint32_t x291 = 3739U;
	volatile int64_t t64 = -4006600257748869294LL;

	t64 = ((x289|(x290-x291))-x292);

	if (t64 != 39714943LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x297 = 24;
	static uint64_t x298 = UINT64_MAX;
	uint8_t x300 = 84U;
	volatile uint64_t t65 = 2302663853674423512LLU;

	t65 = ((x297|(x298-x299))-x300);

	if (t65 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x309 = UINT16_MAX;
	volatile uint8_t x311 = 1U;
	int32_t x312 = INT32_MIN;
	int32_t t66 = INT32_MAX;

	t66 = ((x309|(x310-x311))-x312);

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x313 = INT64_MAX;
	int8_t x314 = INT8_MIN;
	int16_t x316 = INT16_MIN;
	volatile int64_t t67 = -31188LL;

	t67 = ((x313|(x314-x315))-x316);

	if (t67 != 32767LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x317 = -1LL;
	static uint16_t x318 = UINT16_MAX;
	volatile uint16_t x320 = UINT16_MAX;
	volatile int64_t t68 = -85949128424484394LL;

	t68 = ((x317|(x318-x319))-x320);

	if (t68 != -65536LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x321 = INT16_MIN;
	int8_t x322 = -1;
	uint8_t x323 = 36U;
	static int16_t x324 = 2;

	t69 = ((x321|(x322-x323))-x324);

	if (t69 != -39) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = INT16_MAX;
	int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MIN;
	uint64_t x328 = 194238963LLU;
	uint64_t t70 = 9332211LLU;

	t70 = ((x325|(x326-x327))-x328);

	if (t70 != 9223372036660602380LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x329 = 13137730623259710LL;
	uint8_t x330 = 2U;
	int16_t x332 = -1;
	volatile int64_t t71 = 7LL;

	t71 = ((x329|(x330-x331))-x332);

	if (t71 != 13137730623259839LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x333 = -66140LL;
	int64_t x334 = 48522396LL;
	static uint16_t x335 = 9881U;
	static int32_t x336 = INT32_MIN;
	volatile int64_t t72 = 951LL;

	t72 = ((x333|(x334-x335))-x336);

	if (t72 != 2147418023LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x337 = INT8_MIN;
	int16_t x339 = -111;
	static int64_t x340 = 2LL;
	volatile uint64_t t73 = 14886518148054LLU;

	t73 = ((x337|(x338-x339))-x340);

	if (t73 != 18446744073709551521LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = INT32_MIN;
	static volatile uint64_t x342 = 37210777977972LLU;
	int32_t x343 = INT32_MIN;
	uint8_t x344 = UINT8_MAX;
	volatile uint64_t t74 = 61123487755063130LLU;

	t74 = ((x341|(x342-x343))-x344);

	if (t74 != 18446744072890876789LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x345 = 3392674620746LLU;
	static int64_t x346 = INT64_MIN;
	int16_t x347 = -1;
	static int32_t x348 = INT32_MAX;
	uint64_t t75 = 6338397115564505LLU;

	t75 = ((x345|(x346-x347))-x348);

	if (t75 != 9223375427381912908LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x353 = UINT16_MAX;
	int64_t x354 = -1LL;
	volatile int32_t x356 = -2;
	volatile int64_t t76 = -704500129713961LL;

	t76 = ((x353|(x354-x355))-x356);

	if (t76 != 65537LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x357 = 46036LLU;
	uint16_t x358 = 28591U;
	uint16_t x359 = UINT16_MAX;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t77 = 340456526LLU;

	t77 = ((x357|(x358-x359))-x360);

	if (t77 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x362 = -8;
	int64_t x363 = -68052999593606LL;
	int32_t x364 = -1;

	t78 = ((x361|(x362-x363))-x364);

	if (t78 != 68052999593600LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x365 = 3U;
	volatile int8_t x366 = -13;
	static uint64_t x367 = 999261790575412116LLU;
	int32_t x368 = INT32_MIN;
	volatile uint64_t t79 = 1796254665528718689LLU;

	t79 = ((x365|(x366-x367))-x368);

	if (t79 != 17447482285281623135LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x369 = 395810384869LLU;
	static volatile int16_t x370 = -1;
	volatile uint16_t x371 = UINT16_MAX;
	volatile uint64_t t80 = 66564752399LLU;

	t80 = ((x369|(x370-x371))-x372);

	if (t80 != 18446744073709497063LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x373 = -11139;
	volatile int8_t x374 = INT8_MIN;
	static uint16_t x375 = 3U;
	int32_t x376 = INT32_MIN;
	volatile int32_t t81 = 1;

	t81 = ((x373|(x374-x375))-x376);

	if (t81 != 2147483517) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x381 = 1U;
	int16_t x384 = INT16_MIN;
	static int64_t t82 = -748LL;

	t82 = ((x381|(x382-x383))-x384);

	if (t82 != 32641LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x389 = -199;
	int8_t x390 = -1;
	static int64_t x391 = INT64_MAX;
	uint8_t x392 = 66U;
	int64_t t83 = 2069661193546658LL;

	t83 = ((x389|(x390-x391))-x392);

	if (t83 != -265LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x393 = 43U;
	uint16_t x394 = 76U;
	int8_t x395 = INT8_MIN;
	volatile uint32_t t84 = 136062858U;

	t84 = ((x393|(x394-x395))-x396);

	if (t84 != 4280112397U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x401 = 2U;
	uint64_t x402 = UINT64_MAX;
	int8_t x403 = -3;
	int32_t x404 = -1;

	t85 = ((x401|(x402-x403))-x404);

	if (t85 != 3LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x405 = 1U;
	int64_t x406 = INT64_MAX;
	volatile int64_t x407 = INT64_MAX;
	static int64_t t86 = 3LL;

	t86 = ((x405|(x406-x407))-x408);

	if (t86 != 58384678659LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x409 = -1;
	static volatile uint32_t x410 = 369100580U;
	int32_t x411 = INT32_MIN;
	static volatile int64_t x412 = -27545494LL;

	t87 = ((x409|(x410-x411))-x412);

	if (t87 != 4322512789LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x413 = 4256U;
	int8_t x414 = 6;
	int8_t x416 = -1;
	uint32_t t88 = 4U;

	t88 = ((x413|(x414-x415))-x416);

	if (t88 != 3602477798U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x417 = INT64_MIN;
	static uint64_t x418 = UINT64_MAX;
	int16_t x419 = INT16_MIN;
	volatile int8_t x420 = INT8_MIN;
	uint64_t t89 = 34542328971LLU;

	t89 = ((x417|(x418-x419))-x420);

	if (t89 != 9223372036854808703LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x421 = 59704;
	uint16_t x422 = UINT16_MAX;
	uint64_t x424 = 4275024973413LLU;
	static uint64_t t90 = 4278LLU;

	t90 = ((x421|(x422-x423))-x424);

	if (t90 != 18446739798684637907LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x425 = -1;
	volatile uint16_t x426 = UINT16_MAX;
	static volatile uint64_t t91 = 1568LLU;

	t91 = ((x425|(x426-x427))-x428);

	if (t91 != 18446744073709123977LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x433 = -1;
	volatile int8_t x434 = 54;
	int8_t x435 = -1;
	volatile int8_t x436 = 13;
	int32_t t92 = 12003273;

	t92 = ((x433|(x434-x435))-x436);

	if (t92 != -14) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x437 = INT32_MAX;
	int32_t x438 = INT32_MIN;
	int32_t x439 = -1;
	uint8_t x440 = UINT8_MAX;
	int32_t t93 = 30;

	t93 = ((x437|(x438-x439))-x440);

	if (t93 != -256) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x441 = INT32_MIN;
	uint16_t x442 = 0U;
	volatile uint32_t x444 = 364U;
	uint32_t t94 = 3639U;

	t94 = ((x441|(x442-x443))-x444);

	if (t94 != 2147483285U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x445 = 1951;
	uint64_t x446 = 35334479247LLU;
	int8_t x448 = INT8_MAX;
	uint64_t t95 = 110LLU;

	t95 = ((x445|(x446-x447))-x448);

	if (t95 != 35334479648LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x449 = -1;
	int64_t x452 = -1LL;
	volatile uint64_t t96 = 547712018560677891LLU;

	t96 = ((x449|(x450-x451))-x452);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x453 = -1;
	int32_t x455 = 12317;
	int32_t x456 = INT32_MAX;

	t97 = ((x453|(x454-x455))-x456);

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x458 = 30U;
	int16_t x459 = INT16_MAX;
	int16_t x460 = INT16_MAX;
	static int32_t t98 = -5603426;

	t98 = ((x457|(x458-x459))-x460);

	if (t98 != -65408) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x461 = -147LL;
	int64_t x462 = -183946682024498LL;
	int16_t x463 = INT16_MAX;
	int64_t x464 = INT64_MIN;
	int64_t t99 = 17373489540166632LL;

	t99 = ((x461|(x462-x463))-x464);

	if (t99 != 9223372036854775791LL) { NG(); } else { ; }
	
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

