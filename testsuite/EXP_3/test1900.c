#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 6169600240680845LLU;
int64_t x17 = -1LL;
int16_t x19 = INT16_MIN;
volatile int32_t x21 = -1;
int16_t x25 = 2091;
static int32_t t6 = -670220009;
volatile int64_t t7 = 776LL;
int32_t x37 = INT32_MAX;
int32_t x42 = 30345;
int8_t x43 = INT8_MIN;
static int8_t x44 = -1;
volatile int32_t t9 = -5;
uint16_t x49 = 1U;
int32_t x50 = INT32_MIN;
int32_t t11 = -5451;
uint64_t x57 = 24741LLU;
static int16_t x63 = INT16_MIN;
volatile int32_t x65 = 12;
volatile int32_t t15 = 227660;
volatile uint8_t x79 = 36U;
int32_t x88 = INT32_MIN;
volatile int64_t t20 = 639830LL;
int8_t x99 = INT8_MIN;
int32_t t21 = 165233;
int64_t x106 = INT64_MAX;
static int32_t x112 = 947;
uint16_t x114 = 1981U;
volatile uint64_t t25 = 14020024LLU;
uint32_t x121 = 1518049U;
uint64_t x126 = 148114209256533606LLU;
volatile int16_t x130 = INT16_MIN;
int32_t t29 = 455295;
static uint32_t t31 = 1385464456U;
int16_t x143 = INT16_MIN;
uint8_t x144 = 16U;
uint8_t x145 = 60U;
static uint8_t x146 = 2U;
static volatile int32_t t35 = -4207;
volatile int8_t x158 = INT8_MIN;
int8_t x164 = -31;
volatile uint32_t x166 = 244U;
int32_t x169 = -168;
int64_t x180 = INT64_MIN;
int32_t x184 = 185280999;
uint16_t x198 = 1U;
static int64_t x202 = INT64_MIN;
int8_t x203 = -3;
volatile int64_t t46 = 51845892656LL;
volatile int16_t x215 = -1;
static uint32_t x218 = 76U;
uint32_t x232 = 72U;
int16_t x233 = 328;
uint64_t x235 = UINT64_MAX;
int64_t x236 = 1992115LL;
int64_t x237 = -22686072LL;
int64_t x238 = INT64_MAX;
static uint16_t x243 = 27U;
int64_t t54 = -395771744LL;
int16_t x246 = INT16_MIN;
int8_t x251 = INT8_MIN;
static int32_t t56 = 12408;
uint64_t t57 = 60107LLU;
static int32_t t58 = 9363134;
uint64_t x267 = 2016772LLU;
int16_t x271 = INT16_MIN;
volatile uint64_t t61 = 278049090840424912LLU;
int8_t x286 = INT8_MIN;
uint8_t x287 = UINT8_MAX;
static int32_t x288 = 224388;
static volatile int64_t t66 = 426LL;
uint16_t x296 = UINT16_MAX;
int8_t x298 = INT8_MIN;
uint32_t x304 = UINT32_MAX;
volatile int64_t t69 = 324113483866LL;
static int8_t x308 = 6;
int32_t x333 = INT32_MAX;
volatile int16_t x335 = INT16_MIN;
int16_t x338 = 2906;
volatile int64_t t78 = 128353132793932212LL;
int64_t x348 = INT64_MIN;
static int64_t x369 = -1LL;
static int64_t t85 = -1010820472849986541LL;
int16_t x382 = -1;
int64_t t88 = 214488LL;
uint16_t x396 = 7U;
int8_t x397 = INT8_MIN;
int64_t x403 = -1LL;
volatile int64_t t92 = -1319484375LL;
int64_t x409 = 92399331LL;
int8_t x415 = -1;
volatile uint32_t x419 = 1872U;
uint32_t x433 = 7484U;


void f0(void) {
	int32_t x5 = -1;
	static int32_t x6 = INT32_MIN;
	int16_t x7 = -1;
	uint32_t x8 = 1014U;
	uint32_t t0 = 3884U;

	t0 = ((x5/x6)-(x7|x8));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = INT8_MAX;
	volatile uint64_t x10 = 1024369040LLU;
	int32_t x11 = INT32_MIN;
	static volatile int32_t x12 = -603;

	t1 = ((x9/x10)-(x11|x12));

	if (t1 != 603LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 24;
	int16_t x14 = INT16_MAX;
	volatile int64_t x15 = INT64_MIN;
	uint64_t x16 = UINT64_MAX;
	uint64_t t2 = 2090594366028019288LLU;

	t2 = ((x13/x14)-(x15|x16));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = INT16_MIN;
	int16_t x20 = INT16_MAX;
	int64_t t3 = 46467129912LL;

	t3 = ((x17/x18)-(x19|x20));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = INT64_MIN;
	static int32_t x23 = -373;
	int8_t x24 = -1;
	static volatile int64_t t4 = -1LL;

	t4 = ((x21/x22)-(x23|x24));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = INT16_MAX;
	static volatile uint16_t x27 = UINT16_MAX;
	static int32_t x28 = 6876761;
	volatile int32_t t5 = -24809;

	t5 = ((x25/x26)-(x27|x28));

	if (t5 != -6881279) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = -1;
	int8_t x30 = -12;
	int32_t x31 = -3;
	int16_t x32 = -1;

	t6 = ((x29/x30)-(x31|x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	int64_t x34 = INT64_MIN;
	uint16_t x35 = 944U;
	int8_t x36 = INT8_MAX;

	t7 = ((x33/x34)-(x35|x36));

	if (t7 != -1023LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x38 = -1;
	volatile uint32_t x39 = 31988U;
	uint8_t x40 = 9U;
	volatile uint32_t t8 = 3433U;

	t8 = ((x37/x38)-(x39|x40));

	if (t8 != 2147451652U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 11;

	t9 = ((x41/x42)-(x43|x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	int32_t x46 = INT32_MIN;
	volatile int64_t x47 = INT64_MIN;
	volatile uint32_t x48 = 362U;
	volatile int64_t t10 = 155805423LL;

	t10 = ((x45/x46)-(x47|x48));

	if (t10 != 9223372036854775446LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x51 = -1;
	static uint16_t x52 = 0U;

	t11 = ((x49/x50)-(x51|x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x58 = 49675067U;
	uint32_t x59 = UINT32_MAX;
	volatile int32_t x60 = -136644629;
	volatile uint64_t t12 = 26LLU;

	t12 = ((x57/x58)-(x59|x60));

	if (t12 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 43U;
	int32_t x62 = -35;
	static int8_t x64 = -1;
	int32_t t13 = 320618;

	t13 = ((x61/x62)-(x63|x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x66 = UINT64_MAX;
	static int8_t x67 = INT8_MAX;
	uint16_t x68 = 0U;
	uint64_t t14 = 1058796209299520848LLU;

	t14 = ((x65/x66)-(x67|x68));

	if (t14 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x69 = 73U;
	static int32_t x70 = 3;
	int16_t x71 = INT16_MIN;
	static int32_t x72 = -1;

	t15 = ((x69/x70)-(x71|x72));

	if (t15 != 25) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = 4180742U;
	uint32_t x74 = 253482U;
	int32_t x75 = -1;
	volatile uint16_t x76 = 3U;
	uint32_t t16 = 1234514U;

	t16 = ((x73/x74)-(x75|x76));

	if (t16 != 17U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MIN;
	volatile int64_t x78 = -37LL;
	static uint64_t x80 = 25561176978492451LLU;
	volatile uint64_t t17 = 33170926466LLU;

	t17 = ((x77/x78)-(x79|x80));

	if (t17 != 223719148341906891LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MAX;
	uint16_t x82 = UINT16_MAX;
	uint8_t x83 = UINT8_MAX;
	int8_t x84 = INT8_MIN;
	volatile int32_t t18 = -21;

	t18 = ((x81/x82)-(x83|x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = 0U;
	int8_t x86 = INT8_MAX;
	int8_t x87 = INT8_MIN;
	volatile int32_t t19 = -117808431;

	t19 = ((x85/x86)-(x87|x88));

	if (t19 != 128) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x93 = -1;
	int64_t x94 = 23539232LL;
	volatile int8_t x95 = INT8_MAX;
	uint32_t x96 = UINT32_MAX;

	t20 = ((x93/x94)-(x95|x96));

	if (t20 != -4294967295LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -776125319;
	int32_t x98 = -7;
	int8_t x100 = -1;

	t21 = ((x97/x98)-(x99|x100));

	if (t21 != 110875046) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MAX;
	static int64_t x102 = INT64_MAX;
	static int32_t x103 = INT32_MAX;
	volatile int32_t x104 = INT32_MIN;
	static int64_t t22 = 3324649LL;

	t22 = ((x101/x102)-(x103|x104));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x105 = -1;
	static int32_t x107 = -1;
	uint32_t x108 = 2U;
	int64_t t23 = -266025237LL;

	t23 = ((x105/x106)-(x107|x108));

	if (t23 != -4294967295LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = 42;
	int8_t x110 = 6;
	uint32_t x111 = 21U;
	static volatile uint32_t t24 = 46U;

	t24 = ((x109/x110)-(x111|x112));

	if (t24 != 4294966352U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x113 = -56LL;
	volatile uint64_t x115 = 62LLU;
	uint32_t x116 = UINT32_MAX;

	t25 = ((x113/x114)-(x115|x116));

	if (t25 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = -255;
	int8_t x118 = -1;
	static volatile uint32_t x119 = 48U;
	uint16_t x120 = 13915U;
	uint32_t t26 = 21283U;

	t26 = ((x117/x118)-(x119|x120));

	if (t26 != 4294953604U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x122 = 567LLU;
	static int32_t x123 = INT32_MIN;
	int32_t x124 = -1;
	volatile uint64_t t27 = 626LLU;

	t27 = ((x121/x122)-(x123|x124));

	if (t27 != 2678LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = 23;
	uint16_t x127 = 101U;
	static uint8_t x128 = 13U;
	uint64_t t28 = 264135983077866LLU;

	t28 = ((x125/x126)-(x127|x128));

	if (t28 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 4U;
	int32_t x131 = INT32_MAX;
	uint16_t x132 = 535U;

	t29 = ((x129/x130)-(x131|x132));

	if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = INT64_MIN;
	int8_t x134 = 1;
	int32_t x135 = -1;
	static int16_t x136 = 1;
	volatile int64_t t30 = 1951631368LL;

	t30 = ((x133/x134)-(x135|x136));

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x137 = INT8_MAX;
	uint16_t x138 = 474U;
	int32_t x139 = -1497382;
	uint32_t x140 = 11164923U;

	t31 = ((x137/x138)-(x139|x140));

	if (t31 != 1343749U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x141 = 4813U;
	static uint16_t x142 = 6707U;
	int32_t t32 = -3;

	t32 = ((x141/x142)-(x143|x144));

	if (t32 != 32752) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x147 = UINT16_MAX;
	volatile uint8_t x148 = UINT8_MAX;
	int32_t t33 = 444086;

	t33 = ((x145/x146)-(x147|x148));

	if (t33 != -65505) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = 146LLU;
	int16_t x150 = -398;
	int64_t x151 = -1LL;
	volatile int32_t x152 = INT32_MIN;
	uint64_t t34 = 273177789425044490LLU;

	t34 = ((x149/x150)-(x151|x152));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = 0U;
	int32_t x154 = INT32_MIN;
	uint8_t x155 = UINT8_MAX;
	int16_t x156 = INT16_MIN;

	t35 = ((x153/x154)-(x155|x156));

	if (t35 != 32513) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = 250;
	volatile int64_t x159 = INT64_MIN;
	int64_t x160 = -30521498LL;
	static int64_t t36 = -382210LL;

	t36 = ((x157/x158)-(x159|x160));

	if (t36 != 30521497LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x161 = UINT16_MAX;
	static int16_t x162 = 1;
	int32_t x163 = INT32_MAX;
	volatile int32_t t37 = 4;

	t37 = ((x161/x162)-(x163|x164));

	if (t37 != 65536) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x165 = 994571765U;
	int32_t x167 = 0;
	static uint8_t x168 = 16U;
	volatile uint32_t t38 = 19235891U;

	t38 = ((x165/x166)-(x167|x168));

	if (t38 != 4076097U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x170 = -1;
	volatile int16_t x171 = INT16_MAX;
	int32_t x172 = -786;
	int32_t t39 = -6469;

	t39 = ((x169/x170)-(x171|x172));

	if (t39 != 169) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = -99;
	uint8_t x174 = 11U;
	int16_t x175 = INT16_MAX;
	uint64_t x176 = 443010LLU;
	uint64_t t40 = 12493799704821346LLU;

	t40 = ((x173/x174)-(x175|x176));

	if (t40 != 18446744073709092856LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MIN;
	static int64_t x178 = INT64_MAX;
	volatile int16_t x179 = 1;
	int64_t t41 = -1LL;

	t41 = ((x177/x178)-(x179|x180));

	if (t41 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x181 = UINT64_MAX;
	volatile int8_t x182 = INT8_MIN;
	int16_t x183 = -7;
	volatile uint64_t t42 = 2526623611126533144LLU;

	t42 = ((x181/x182)-(x183|x184));

	if (t42 != 2LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = 25U;
	int8_t x190 = 1;
	int32_t x191 = INT32_MIN;
	int8_t x192 = -1;
	int32_t t43 = -4;

	t43 = ((x189/x190)-(x191|x192));

	if (t43 != 26) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = -1;
	volatile uint16_t x199 = 28299U;
	int32_t x200 = INT32_MIN;
	int32_t t44 = 265;

	t44 = ((x197/x198)-(x199|x200));

	if (t44 != 2147455348) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x201 = -1;
	uint16_t x204 = 0U;
	int64_t t45 = -4555952758702620LL;

	t45 = ((x201/x202)-(x203|x204));

	if (t45 != 3LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x205 = UINT32_MAX;
	int64_t x206 = 269229725149170LL;
	volatile int16_t x207 = INT16_MIN;
	static volatile int16_t x208 = -1;

	t46 = ((x205/x206)-(x207|x208));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MIN;
	int64_t x210 = INT64_MIN;
	int16_t x211 = -893;
	uint64_t x212 = UINT64_MAX;
	uint64_t t47 = 7257LLU;

	t47 = ((x209/x210)-(x211|x212));

	if (t47 != 2LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = INT16_MIN;
	int64_t x214 = INT64_MIN;
	uint32_t x216 = 4U;
	int64_t t48 = -619449927758068LL;

	t48 = ((x213/x214)-(x215|x216));

	if (t48 != -4294967295LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x217 = -1;
	static int32_t x219 = -1;
	volatile int32_t x220 = INT32_MAX;
	uint32_t t49 = 226083763U;

	t49 = ((x217/x218)-(x219|x220));

	if (t49 != 56512728U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x225 = INT16_MAX;
	uint16_t x226 = 3040U;
	volatile int32_t x227 = -1;
	int16_t x228 = INT16_MIN;
	int32_t t50 = -1123;

	t50 = ((x225/x226)-(x227|x228));

	if (t50 != 11) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x229 = 447272252LL;
	int32_t x230 = -201663;
	int8_t x231 = INT8_MAX;
	volatile int64_t t51 = -22653836833LL;

	t51 = ((x229/x230)-(x231|x232));

	if (t51 != -2344LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x234 = INT32_MIN;
	uint64_t t52 = 16357164821436938LLU;

	t52 = ((x233/x234)-(x235|x236));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x239 = UINT16_MAX;
	int32_t x240 = INT32_MIN;
	volatile int64_t t53 = -22672380322031192LL;

	t53 = ((x237/x238)-(x239|x240));

	if (t53 != 2147418113LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = 137427128032LL;
	int32_t x242 = -1;
	int32_t x244 = 9;

	t54 = ((x241/x242)-(x243|x244));

	if (t54 != -137427128059LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x245 = UINT16_MAX;
	int64_t x247 = INT64_MIN;
	static int16_t x248 = -48;
	static volatile int64_t t55 = -719666499LL;

	t55 = ((x245/x246)-(x247|x248));

	if (t55 != 47LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x249 = -81130740;
	int32_t x250 = INT32_MAX;
	int8_t x252 = INT8_MIN;

	t56 = ((x249/x250)-(x251|x252));

	if (t56 != 128) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x253 = 5403LLU;
	uint32_t x254 = 3050U;
	int16_t x255 = INT16_MAX;
	volatile int8_t x256 = -1;

	t57 = ((x253/x254)-(x255|x256));

	if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x257 = 0U;
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = INT8_MIN;
	int16_t x260 = -492;

	t58 = ((x257/x258)-(x259|x260));

	if (t58 != 108) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x261 = -1LL;
	uint32_t x262 = UINT32_MAX;
	int8_t x263 = INT8_MIN;
	volatile int64_t x264 = INT64_MIN;
	volatile int64_t t59 = -971407512362758527LL;

	t59 = ((x261/x262)-(x263|x264));

	if (t59 != 128LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x265 = INT16_MIN;
	uint64_t x266 = 3239333LLU;
	volatile uint16_t x268 = UINT16_MAX;
	uint64_t t60 = 66923LLU;

	t60 = ((x265/x266)-(x267|x268));

	if (t60 != 5694609814005LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = INT64_MAX;
	uint64_t x270 = UINT64_MAX;
	int32_t x272 = 1920815;

	t61 = ((x269/x270)-(x271|x272));

	if (t61 != 12497LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x273 = -1LL;
	uint16_t x274 = UINT16_MAX;
	int32_t x275 = INT32_MAX;
	static int16_t x276 = INT16_MAX;
	int64_t t62 = -1280LL;

	t62 = ((x273/x274)-(x275|x276));

	if (t62 != -2147483647LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x277 = -1;
	uint8_t x278 = UINT8_MAX;
	volatile int32_t x279 = INT32_MAX;
	static int64_t x280 = INT64_MIN;
	int64_t t63 = -1LL;

	t63 = ((x277/x278)-(x279|x280));

	if (t63 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x281 = UINT32_MAX;
	int32_t x282 = INT32_MIN;
	static int16_t x283 = 211;
	int8_t x284 = INT8_MAX;
	volatile uint32_t t64 = 3U;

	t64 = ((x281/x282)-(x283|x284));

	if (t64 != 4294967042U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = INT64_MIN;
	volatile int64_t t65 = -982801873LL;

	t65 = ((x285/x286)-(x287|x288));

	if (t65 != 72057594037703425LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x289 = INT32_MIN;
	volatile uint32_t x290 = 129800U;
	int64_t x291 = 836LL;
	int8_t x292 = -3;

	t66 = ((x289/x290)-(x291|x292));

	if (t66 != 16547LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x293 = INT32_MIN;
	uint64_t x294 = 1060LLU;
	int32_t x295 = INT32_MAX;
	static volatile uint64_t t67 = 131LLU;

	t67 = ((x293/x294)-(x295|x296));

	if (t67 != 17402586599273020LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x297 = -15;
	int16_t x299 = INT16_MAX;
	int64_t x300 = -995519893LL;
	int64_t t68 = 101787LL;

	t68 = ((x297/x298)-(x299|x300));

	if (t68 != 995491841LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x301 = -78;
	int8_t x302 = -1;
	int64_t x303 = -2187LL;

	t69 = ((x301/x302)-(x303|x304));

	if (t69 != 79LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x305 = 0;
	int16_t x306 = INT16_MIN;
	int32_t x307 = INT32_MIN;
	static int32_t t70 = 7996733;

	t70 = ((x305/x306)-(x307|x308));

	if (t70 != 2147483642) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x309 = -11;
	volatile int16_t x310 = INT16_MIN;
	static volatile uint16_t x311 = 30005U;
	volatile int64_t x312 = INT64_MIN;
	volatile int64_t t71 = -409020777LL;

	t71 = ((x309/x310)-(x311|x312));

	if (t71 != 9223372036854745803LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x313 = 1U;
	uint32_t x314 = 4472U;
	static uint64_t x315 = 1088165802578LLU;
	int32_t x316 = 1;
	volatile uint64_t t72 = 21LLU;

	t72 = ((x313/x314)-(x315|x316));

	if (t72 != 18446742985543749037LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x321 = INT64_MIN;
	int32_t x322 = INT32_MAX;
	int16_t x323 = -364;
	int64_t x324 = -1950039177700286101LL;
	volatile int64_t t73 = -3LL;

	t73 = ((x321/x322)-(x323|x324));

	if (t73 != -4294967297LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x325 = -1;
	int64_t x326 = 20904LL;
	uint8_t x327 = 27U;
	int8_t x328 = -1;
	volatile int64_t t74 = -4572664570046LL;

	t74 = ((x325/x326)-(x327|x328));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x329 = INT32_MAX;
	volatile uint16_t x330 = 2851U;
	int8_t x331 = -1;
	uint16_t x332 = 196U;
	volatile int32_t t75 = -46316798;

	t75 = ((x329/x330)-(x331|x332));

	if (t75 != 753239) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x334 = 486U;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t76 = 54293329392LLU;

	t76 = ((x333/x334)-(x335|x336));

	if (t76 != 4418691LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x337 = UINT32_MAX;
	static volatile int32_t x339 = 0;
	volatile int64_t x340 = -1LL;
	volatile int64_t t77 = -264031LL;

	t77 = ((x337/x338)-(x339|x340));

	if (t77 != 1477966LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x341 = 126U;
	volatile int16_t x342 = -1;
	volatile int64_t x343 = -1LL;
	uint8_t x344 = 6U;

	t78 = ((x341/x342)-(x343|x344));

	if (t78 != -125LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x345 = 3;
	uint8_t x346 = UINT8_MAX;
	static volatile int16_t x347 = -1;
	int64_t t79 = -34354048441214LL;

	t79 = ((x345/x346)-(x347|x348));

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = 1;
	int64_t x350 = INT64_MAX;
	uint16_t x351 = 7U;
	static volatile int64_t x352 = INT64_MAX;
	static volatile int64_t t80 = 137472319540831LL;

	t80 = ((x349/x350)-(x351|x352));

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = -1601952;
	volatile int8_t x354 = INT8_MAX;
	static int64_t x355 = INT64_MIN;
	volatile int32_t x356 = INT32_MIN;
	volatile int64_t t81 = -41LL;

	t81 = ((x353/x354)-(x355|x356));

	if (t81 != 2147471035LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = INT64_MAX;
	volatile uint8_t x358 = 4U;
	uint8_t x359 = UINT8_MAX;
	static int8_t x360 = INT8_MIN;
	int64_t t82 = -31413935LL;

	t82 = ((x357/x358)-(x359|x360));

	if (t82 != 2305843009213693952LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = INT8_MIN;
	int32_t x362 = 54877;
	uint64_t x363 = 218500019720LLU;
	volatile uint32_t x364 = 3848U;
	uint64_t t83 = 423541894454113836LLU;

	t83 = ((x361/x362)-(x363|x364));

	if (t83 != 18446743855209529592LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x365 = INT16_MIN;
	volatile int16_t x366 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t84 = 86LLU;

	t84 = ((x365/x366)-(x367|x368));

	if (t84 != 2LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x370 = UINT8_MAX;
	int32_t x371 = 87841;
	int32_t x372 = -272;

	t85 = ((x369/x370)-(x371|x372));

	if (t85 != 15LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x373 = 0U;
	static volatile int16_t x374 = -3972;
	int16_t x375 = INT16_MAX;
	uint64_t x376 = 19933890369994192LLU;
	uint64_t t86 = 423152583031322111LLU;

	t86 = ((x373/x374)-(x375|x376));

	if (t86 != 18426810183339540481LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x377 = 5949U;
	int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MIN;
	int32_t x380 = -1;
	static volatile int64_t t87 = 24897976183LL;

	t87 = ((x377/x378)-(x379|x380));

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = 871165717LL;
	uint32_t x383 = UINT32_MAX;
	int8_t x384 = -1;

	t88 = ((x381/x382)-(x383|x384));

	if (t88 != -5166133012LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x385 = INT64_MAX;
	int16_t x386 = INT16_MIN;
	static uint32_t x387 = UINT32_MAX;
	int32_t x388 = 1;
	static volatile int64_t t89 = 5119593LL;

	t89 = ((x385/x386)-(x387|x388));

	if (t89 != -281479271677950LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x393 = 15349551U;
	int32_t x394 = INT32_MAX;
	uint32_t x395 = UINT32_MAX;
	uint32_t t90 = 226U;

	t90 = ((x393/x394)-(x395|x396));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MAX;
	volatile uint64_t x400 = UINT64_MAX;
	uint64_t t91 = 124140049211LLU;

	t91 = ((x397/x398)-(x399|x400));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x401 = 171315634389LL;
	uint32_t x402 = UINT32_MAX;
	int16_t x404 = 1407;

	t92 = ((x401/x402)-(x403|x404));

	if (t92 != 40LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x405 = -6;
	uint64_t x406 = UINT64_MAX;
	int32_t x407 = INT32_MIN;
	volatile int64_t x408 = -1LL;
	static volatile uint64_t t93 = 4929544328997LLU;

	t93 = ((x405/x406)-(x407|x408));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x410 = 3568254;
	volatile int8_t x411 = INT8_MIN;
	volatile int8_t x412 = INT8_MIN;
	volatile int64_t t94 = -154100LL;

	t94 = ((x409/x410)-(x411|x412));

	if (t94 != 153LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x413 = 55U;
	uint8_t x414 = 4U;
	static int32_t x416 = INT32_MIN;
	volatile uint32_t t95 = 39U;

	t95 = ((x413/x414)-(x415|x416));

	if (t95 != 14U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x417 = INT32_MIN;
	static int16_t x418 = 6;
	int16_t x420 = INT16_MAX;
	uint32_t t96 = 3711U;

	t96 = ((x417/x418)-(x419|x420));

	if (t96 != 3937020588U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x421 = UINT16_MAX;
	int8_t x422 = -17;
	int8_t x423 = 0;
	uint16_t x424 = 7065U;
	static volatile int32_t t97 = -50335684;

	t97 = ((x421/x422)-(x423|x424));

	if (t97 != -10920) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x429 = -1;
	int64_t x430 = INT64_MIN;
	volatile int8_t x431 = -1;
	static int16_t x432 = INT16_MAX;
	volatile int64_t t98 = -3034248853425449LL;

	t98 = ((x429/x430)-(x431|x432));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x434 = -5885;
	uint8_t x435 = 43U;
	int32_t x436 = INT32_MIN;
	volatile uint32_t t99 = 14358U;

	t99 = ((x433/x434)-(x435|x436));

	if (t99 != 2147483605U) { NG(); } else { ; }
	
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

