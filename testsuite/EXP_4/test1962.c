#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
uint16_t x4 = UINT16_MAX;
int16_t x8 = 3269;
int64_t x10 = INT64_MIN;
int32_t x11 = INT32_MAX;
int32_t x20 = INT32_MIN;
static int32_t x21 = -1;
int32_t x24 = -16291;
volatile int32_t t5 = -1;
volatile uint16_t x29 = 806U;
int32_t t7 = 19328;
int64_t x40 = INT64_MAX;
int8_t x43 = INT8_MIN;
int16_t x48 = -20;
int32_t t11 = INT32_MAX;
volatile uint8_t x52 = UINT8_MAX;
volatile int32_t t12 = -66255114;
int16_t x57 = INT16_MIN;
int8_t x62 = INT8_MIN;
int32_t t15 = INT32_MAX;
volatile int32_t t18 = 25977791;
volatile uint32_t x78 = 45846156U;
static int64_t x84 = INT64_MIN;
int32_t x86 = -52163;
volatile int16_t x87 = INT16_MIN;
int8_t x89 = 4;
static int64_t x90 = -1616972582863374824LL;
uint64_t x95 = 9348528589870LLU;
int8_t x96 = -1;
uint8_t x99 = 22U;
int8_t x103 = INT8_MIN;
volatile uint32_t x127 = 1448215U;
int64_t x132 = INT64_MAX;
static volatile uint32_t x135 = 1660223128U;
uint64_t t33 = 2194437841512LLU;
int16_t x143 = INT16_MAX;
int8_t x144 = INT8_MAX;
int32_t x146 = INT32_MIN;
volatile int64_t x147 = -11664LL;
volatile int16_t x149 = 1;
uint32_t x150 = 3271U;
volatile uint64_t x153 = 461LLU;
int64_t x161 = -1LL;
uint16_t x164 = 687U;
int8_t x165 = INT8_MAX;
uint64_t x169 = UINT64_MAX;
int8_t x172 = INT8_MAX;
uint32_t x182 = UINT32_MAX;
int16_t x197 = INT16_MAX;
int32_t x199 = -1;
int32_t x203 = -2710506;
int64_t x207 = INT64_MIN;
int8_t x208 = INT8_MIN;
static int32_t t52 = -49;
int8_t x215 = INT8_MIN;
int32_t x218 = INT32_MIN;
volatile int16_t x219 = INT16_MIN;
volatile int8_t x222 = INT8_MAX;
int32_t x227 = -1;
int8_t x233 = INT8_MAX;
int64_t x234 = INT64_MIN;
volatile int32_t t58 = -10423;
volatile uint64_t x239 = 7806262LLU;
volatile int32_t t60 = -29;
volatile uint8_t x247 = 0U;
uint32_t x251 = 11070U;
volatile int8_t x254 = INT8_MAX;
volatile int8_t x258 = INT8_MIN;
uint32_t t65 = 173U;
static int64_t x266 = INT64_MIN;
int32_t t66 = 2;
static volatile int8_t x271 = 6;
int64_t t67 = -128860LL;
int16_t x273 = -82;
int16_t x280 = INT16_MAX;
static volatile int32_t t72 = 1142921;
static uint16_t x300 = 98U;
volatile uint16_t x303 = 222U;
int64_t x305 = INT64_MAX;
int8_t x314 = 42;
uint32_t x315 = 2439059U;
volatile uint32_t x321 = UINT32_MAX;
int8_t x329 = 1;
static uint32_t x330 = 118701641U;
volatile int32_t t83 = -7905144;
static volatile int32_t t85 = 0;
volatile int8_t x345 = INT8_MIN;
volatile int32_t t86 = 21595429;
static int64_t x349 = INT64_MIN;
uint32_t x352 = UINT32_MAX;
uint64_t x354 = 765LLU;
int16_t x355 = -1;
static uint64_t x356 = 171LLU;
int64_t x362 = 12LL;
int16_t x368 = INT16_MIN;
uint16_t x381 = 7356U;
volatile int64_t x394 = -1LL;


void f0(void) {
	int16_t x2 = INT16_MAX;
	int32_t x3 = 54950357;
	int32_t t0 = -1376531;

	t0 = (x1|(x2==(x3|x4)));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 10344;
	uint16_t x6 = 4U;
	int64_t x7 = INT64_MAX;
	static int32_t t1 = -6152;

	t1 = (x5|(x6==(x7|x8)));

	if (t1 != 10344) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x12 = -106743109124LL;
	volatile int32_t t2 = 3749;

	t2 = (x9|(x10==(x11|x12)));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static int64_t x14 = INT64_MAX;
	int16_t x15 = INT16_MAX;
	volatile int32_t x16 = -3390347;
	int32_t t3 = -76253;

	t3 = (x13|(x14==(x15|x16)));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 2;
	static uint16_t x18 = 0U;
	int16_t x19 = -1;
	volatile int32_t t4 = 31390;

	t4 = (x17|(x18==(x19|x20)));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MAX;
	uint16_t x23 = UINT16_MAX;

	t5 = (x21|(x22==(x23|x24)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 593298743LLU;
	uint8_t x26 = 61U;
	uint64_t x27 = 48709LLU;
	int8_t x28 = -1;
	volatile uint64_t t6 = 105215066LLU;

	t6 = (x25|(x26==(x27|x28)));

	if (t6 != 593298743LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x30 = UINT8_MAX;
	volatile uint8_t x31 = 3U;
	int32_t x32 = -1;

	t7 = (x29|(x30==(x31|x32)));

	if (t7 != 806) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 1947506;
	int32_t x34 = INT32_MAX;
	volatile int32_t x35 = INT32_MAX;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = 10562;

	t8 = (x33|(x34==(x35|x36)));

	if (t8 != 1947506) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	int64_t x38 = INT64_MIN;
	static uint16_t x39 = UINT16_MAX;
	static volatile int32_t t9 = 1509;

	t9 = (x37|(x38==(x39|x40)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 1563837564U;
	int64_t x42 = INT64_MAX;
	int8_t x44 = INT8_MIN;
	static uint32_t t10 = 969U;

	t10 = (x41|(x42==(x43|x44)));

	if (t10 != 1563837564U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MAX;
	uint16_t x46 = 928U;
	int64_t x47 = INT64_MIN;

	t11 = (x45|(x46==(x47|x48)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = UINT8_MAX;
	int8_t x50 = 1;
	int32_t x51 = -1;

	t12 = (x49|(x50==(x51|x52)));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MAX;
	volatile int32_t x54 = -23;
	static volatile uint16_t x55 = UINT16_MAX;
	int64_t x56 = 268354659LL;
	int32_t t13 = INT32_MAX;

	t13 = (x53|(x54==(x55|x56)));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MIN;
	uint8_t x59 = 96U;
	int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -442689;

	t14 = (x57|(x58==(x59|x60)));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MAX;
	int16_t x63 = 10;
	int8_t x64 = -1;

	t15 = (x61|(x62==(x63|x64)));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	uint32_t x66 = 96956552U;
	int32_t x67 = INT32_MIN;
	int64_t x68 = -24774044220750325LL;
	uint32_t t16 = UINT32_MAX;

	t16 = (x65|(x66==(x67|x68)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x69 = UINT16_MAX;
	int32_t x70 = -57768;
	uint16_t x71 = 718U;
	int16_t x72 = INT16_MIN;
	int32_t t17 = 5230699;

	t17 = (x69|(x70==(x71|x72)));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	static int8_t x74 = 10;
	uint16_t x75 = 14567U;
	uint8_t x76 = 1U;

	t18 = (x73|(x74==(x75|x76)));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 56U;
	uint8_t x79 = 1U;
	int64_t x80 = 3638451793361352LL;
	static volatile int32_t t19 = 2555;

	t19 = (x77|(x78==(x79|x80)));

	if (t19 != 56) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 1800762044984743LL;
	volatile int32_t x82 = INT32_MIN;
	int16_t x83 = -1;
	volatile int64_t t20 = 13676LL;

	t20 = (x81|(x82==(x83|x84)));

	if (t20 != 1800762044984743LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 3U;
	uint64_t x88 = UINT64_MAX;
	static int32_t t21 = -1;

	t21 = (x85|(x86==(x87|x88)));

	if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x91 = -1LL;
	uint8_t x92 = 2U;
	volatile int32_t t22 = -1849861;

	t22 = (x89|(x90==(x91|x92)));

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	int8_t x94 = INT8_MIN;
	static volatile int64_t t23 = 210493181961644203LL;

	t23 = (x93|(x94==(x95|x96)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x97 = 1U;
	uint8_t x98 = 1U;
	int16_t x100 = -1;
	int32_t t24 = 11427598;

	t24 = (x97|(x98==(x99|x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	uint16_t x102 = 0U;
	uint16_t x104 = 1984U;
	static volatile int32_t t25 = -18835677;

	t25 = (x101|(x102==(x103|x104)));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 24103LLU;
	uint16_t x106 = UINT16_MAX;
	static volatile int8_t x107 = -1;
	int8_t x108 = INT8_MIN;
	volatile uint64_t t26 = 33841LLU;

	t26 = (x105|(x106==(x107|x108)));

	if (t26 != 24103LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 1;
	int64_t x110 = INT64_MIN;
	int32_t x111 = -609631;
	uint64_t x112 = 9554055LLU;
	volatile int32_t t27 = -6394952;

	t27 = (x109|(x110==(x111|x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -22;
	static uint64_t x114 = 187338663879LLU;
	int32_t x115 = INT32_MIN;
	volatile int64_t x116 = INT64_MAX;
	int32_t t28 = -252;

	t28 = (x113|(x114==(x115|x116)));

	if (t28 != -22) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	uint8_t x118 = 6U;
	volatile uint8_t x119 = UINT8_MAX;
	int8_t x120 = -2;
	volatile int32_t t29 = 1;

	t29 = (x117|(x118==(x119|x120)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 0U;
	static int32_t x122 = INT32_MAX;
	static int8_t x123 = -1;
	static int8_t x124 = INT8_MIN;
	int32_t t30 = -530;

	t30 = (x121|(x122==(x123|x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = 509456907U;
	static volatile int64_t x126 = -1047016462134LL;
	uint32_t x128 = 176914U;
	volatile uint32_t t31 = 217261862U;

	t31 = (x125|(x126==(x127|x128)));

	if (t31 != 509456907U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = 101389976056LL;
	volatile uint16_t x130 = 109U;
	int16_t x131 = -2792;
	int64_t t32 = 57LL;

	t32 = (x129|(x130==(x131|x132)));

	if (t32 != 101389976056LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 458544433897LLU;
	static int8_t x134 = -1;
	int64_t x136 = INT64_MIN;

	t33 = (x133|(x134==(x135|x136)));

	if (t33 != 458544433897LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MAX;
	int64_t x139 = 1082LL;
	int32_t x140 = 16655;
	volatile int32_t t34 = -6;

	t34 = (x137|(x138==(x139|x140)));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = UINT8_MAX;
	static int32_t x142 = -1;
	volatile int32_t t35 = -56;

	t35 = (x141|(x142==(x143|x144)));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 15U;
	static int32_t x148 = 6;
	volatile int32_t t36 = 18221;

	t36 = (x145|(x146==(x147|x148)));

	if (t36 != 15) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x151 = INT64_MIN;
	int16_t x152 = INT16_MAX;
	int32_t t37 = 74;

	t37 = (x149|(x150==(x151|x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = 4U;
	int16_t x155 = INT16_MIN;
	uint64_t x156 = 43224180687LLU;
	volatile uint64_t t38 = 0LLU;

	t38 = (x153|(x154==(x155|x156)));

	if (t38 != 461LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	uint32_t x158 = 1308927850U;
	int16_t x159 = -1;
	int8_t x160 = 1;
	volatile int32_t t39 = -3;

	t39 = (x157|(x158==(x159|x160)));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x162 = UINT16_MAX;
	int32_t x163 = INT32_MIN;
	static int64_t t40 = 1119848LL;

	t40 = (x161|(x162==(x163|x164)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x166 = 24U;
	uint64_t x167 = 42494211LLU;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t41 = 0;

	t41 = (x165|(x166==(x167|x168)));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = 4683;
	int16_t x171 = INT16_MIN;
	static uint64_t t42 = UINT64_MAX;

	t42 = (x169|(x170==(x171|x172)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = -1;
	static uint16_t x174 = 1U;
	static uint8_t x175 = 63U;
	uint8_t x176 = 2U;
	int32_t t43 = 245712;

	t43 = (x173|(x174==(x175|x176)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int64_t x178 = INT64_MIN;
	uint8_t x179 = UINT8_MAX;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = 4509020;

	t44 = (x177|(x178==(x179|x180)));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 3983331U;
	int64_t x183 = 384430367132847297LL;
	static int8_t x184 = -32;
	volatile uint32_t t45 = 0U;

	t45 = (x181|(x182==(x183|x184)));

	if (t45 != 3983331U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	static uint64_t x186 = 5794968169434LLU;
	static volatile uint64_t x187 = 3716306083327LLU;
	int8_t x188 = INT8_MIN;
	uint32_t t46 = UINT32_MAX;

	t46 = (x185|(x186==(x187|x188)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int8_t x190 = INT8_MIN;
	uint16_t x191 = UINT16_MAX;
	uint16_t x192 = 19U;
	volatile int64_t t47 = INT64_MIN;

	t47 = (x189|(x190==(x191|x192)));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = 1U;
	static int16_t x194 = INT16_MAX;
	volatile int32_t x195 = INT32_MIN;
	volatile int16_t x196 = INT16_MAX;
	int32_t t48 = 78857;

	t48 = (x193|(x194==(x195|x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = 29253970;
	int16_t x200 = -3324;
	static int32_t t49 = -1041237922;

	t49 = (x197|(x198==(x199|x200)));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 4U;
	static int8_t x202 = INT8_MAX;
	int32_t x204 = -6;
	int32_t t50 = 14716;

	t50 = (x201|(x202==(x203|x204)));

	if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x205 = 24057U;
	int32_t x206 = -1;
	uint32_t t51 = 21412U;

	t51 = (x205|(x206==(x207|x208)));

	if (t51 != 24057U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	static int16_t x210 = INT16_MIN;
	int32_t x211 = INT32_MAX;
	int32_t x212 = INT32_MIN;

	t52 = (x209|(x210==(x211|x212)));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x213 = 5;
	static int16_t x214 = INT16_MIN;
	static int16_t x216 = INT16_MIN;
	static volatile int32_t t53 = 14;

	t53 = (x213|(x214==(x215|x216)));

	if (t53 != 5) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 31332U;
	int32_t x220 = INT32_MAX;
	volatile uint32_t t54 = 10283605U;

	t54 = (x217|(x218==(x219|x220)));

	if (t54 != 31332U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 25U;
	int8_t x223 = INT8_MAX;
	int64_t x224 = -1LL;
	int32_t t55 = -4166325;

	t55 = (x221|(x222==(x223|x224)));

	if (t55 != 25) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -3296151838LL;
	int8_t x226 = 0;
	int8_t x228 = INT8_MIN;
	volatile int64_t t56 = 1LL;

	t56 = (x225|(x226==(x227|x228)));

	if (t56 != -3296151838LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = INT64_MIN;
	static volatile int8_t x230 = INT8_MIN;
	volatile int64_t x231 = INT64_MAX;
	int32_t x232 = -1;
	int64_t t57 = INT64_MIN;

	t57 = (x229|(x230==(x231|x232)));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x235 = 12313939LL;
	int32_t x236 = INT32_MAX;

	t58 = (x233|(x234==(x235|x236)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = 1U;
	static uint64_t x238 = 0LLU;
	uint16_t x240 = UINT16_MAX;
	int32_t t59 = 2050138;

	t59 = (x237|(x238==(x239|x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 2U;
	int16_t x242 = -65;
	volatile int16_t x243 = 11;
	int64_t x244 = -1LL;

	t60 = (x241|(x242==(x243|x244)));

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -23;
	uint64_t x246 = 21LLU;
	volatile int32_t x248 = INT32_MIN;
	volatile int32_t t61 = -3536247;

	t61 = (x245|(x246==(x247|x248)));

	if (t61 != -23) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 21U;
	int32_t x250 = 101802756;
	uint64_t x252 = 56581229201047264LLU;
	uint32_t t62 = 133186877U;

	t62 = (x249|(x250==(x251|x252)));

	if (t62 != 21U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 2113925LLU;
	static volatile uint32_t x255 = 332793720U;
	int16_t x256 = INT16_MIN;
	uint64_t t63 = 7772391714LLU;

	t63 = (x253|(x254==(x255|x256)));

	if (t63 != 2113925LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	volatile int32_t x259 = -1;
	uint64_t x260 = 66094174157689200LLU;
	volatile int64_t t64 = INT64_MIN;

	t64 = (x257|(x258==(x259|x260)));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x261 = 306U;
	static int64_t x262 = INT64_MAX;
	int16_t x263 = INT16_MIN;
	int64_t x264 = INT64_MAX;

	t65 = (x261|(x262==(x263|x264)));

	if (t65 != 306U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 768;
	static int8_t x267 = -5;
	uint32_t x268 = 1541822390U;

	t66 = (x265|(x266==(x267|x268)));

	if (t66 != 768) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = -3350397LL;
	volatile uint64_t x270 = 0LLU;
	int8_t x272 = 33;

	t67 = (x269|(x270==(x271|x272)));

	if (t67 != -3350397LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x274 = INT64_MIN;
	int32_t x275 = -1;
	int64_t x276 = -1LL;
	int32_t t68 = 2440993;

	t68 = (x273|(x274==(x275|x276)));

	if (t68 != -82) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 97;
	int64_t x278 = -115483125535LL;
	uint64_t x279 = 2522386425LLU;
	static int32_t t69 = -32714956;

	t69 = (x277|(x278==(x279|x280)));

	if (t69 != 97) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x281 = 1409322LL;
	uint64_t x282 = UINT64_MAX;
	int32_t x283 = INT32_MIN;
	uint32_t x284 = UINT32_MAX;
	volatile int64_t t70 = 15478325908481763LL;

	t70 = (x281|(x282==(x283|x284)));

	if (t70 != 1409322LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 58851;
	uint64_t x286 = 18076601511LLU;
	int32_t x287 = -1;
	volatile int8_t x288 = 22;
	int32_t t71 = 229950;

	t71 = (x285|(x286==(x287|x288)));

	if (t71 != 58851) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 0;
	int16_t x290 = -1265;
	volatile uint16_t x291 = 4U;
	volatile int32_t x292 = INT32_MAX;

	t72 = (x289|(x290==(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = 561U;
	static uint16_t x294 = UINT16_MAX;
	volatile int64_t x295 = INT64_MIN;
	static volatile int16_t x296 = -3;
	static volatile uint32_t t73 = 675526U;

	t73 = (x293|(x294==(x295|x296)));

	if (t73 != 561U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 111U;
	int32_t x298 = INT32_MAX;
	uint16_t x299 = 170U;
	volatile int32_t t74 = -23545;

	t74 = (x297|(x298==(x299|x300)));

	if (t74 != 111) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	uint32_t x302 = UINT32_MAX;
	static int64_t x304 = INT64_MAX;
	volatile int64_t t75 = INT64_MAX;

	t75 = (x301|(x302==(x303|x304)));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = -17394;
	int8_t x307 = 1;
	int64_t x308 = -558346LL;
	static int64_t t76 = INT64_MAX;

	t76 = (x305|(x306==(x307|x308)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 0;
	uint16_t x310 = 181U;
	int16_t x311 = INT16_MIN;
	volatile int32_t x312 = INT32_MAX;
	int32_t t77 = -7454716;

	t77 = (x309|(x310==(x311|x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = INT64_MAX;
	static int64_t x316 = INT64_MAX;
	int64_t t78 = INT64_MAX;

	t78 = (x313|(x314==(x315|x316)));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 43983849LLU;
	int64_t x318 = INT64_MIN;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = -1;
	static volatile uint64_t t79 = 9083931LLU;

	t79 = (x317|(x318==(x319|x320)));

	if (t79 != 43983849LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = INT16_MIN;
	volatile uint32_t x323 = 78390864U;
	int64_t x324 = -1LL;
	uint32_t t80 = UINT32_MAX;

	t80 = (x321|(x322==(x323|x324)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = 4;
	static uint32_t x326 = UINT32_MAX;
	static int16_t x327 = -7;
	uint16_t x328 = UINT16_MAX;
	int32_t t81 = 132605;

	t81 = (x325|(x326==(x327|x328)));

	if (t81 != 5) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x331 = -484805LL;
	int16_t x332 = 0;
	volatile int32_t t82 = 2;

	t82 = (x329|(x330==(x331|x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MIN;
	uint64_t x335 = 254998991LLU;
	uint8_t x336 = 19U;

	t83 = (x333|(x334==(x335|x336)));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x337 = 664U;
	int8_t x338 = INT8_MAX;
	int8_t x339 = INT8_MIN;
	int64_t x340 = INT64_MAX;
	int32_t t84 = 1;

	t84 = (x337|(x338==(x339|x340)));

	if (t84 != 664) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = -378;
	int16_t x342 = INT16_MAX;
	static uint16_t x343 = 101U;
	static int16_t x344 = -1;

	t85 = (x341|(x342==(x343|x344)));

	if (t85 != -378) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = 52701733;
	int64_t x347 = 546899020LL;
	static int8_t x348 = -1;

	t86 = (x345|(x346==(x347|x348)));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = 23LL;
	int64_t x351 = 4114535108LL;
	volatile int64_t t87 = INT64_MIN;

	t87 = (x349|(x350==(x351|x352)));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = 119250467;
	volatile int32_t t88 = 217964319;

	t88 = (x353|(x354==(x355|x356)));

	if (t88 != 119250467) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = -1;
	int8_t x358 = INT8_MIN;
	int16_t x359 = -1935;
	static int8_t x360 = -1;
	volatile int32_t t89 = 39;

	t89 = (x357|(x358==(x359|x360)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 1;
	int8_t x363 = 1;
	int64_t x364 = INT64_MAX;
	volatile int32_t t90 = 9909;

	t90 = (x361|(x362==(x363|x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	uint64_t x366 = 48695LLU;
	uint64_t x367 = 6716340629LLU;
	static volatile int32_t t91 = -1;

	t91 = (x365|(x366==(x367|x368)));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	int32_t x370 = INT32_MIN;
	static int16_t x371 = INT16_MIN;
	int8_t x372 = INT8_MIN;
	int32_t t92 = 11;

	t92 = (x369|(x370==(x371|x372)));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x373 = 6U;
	int32_t x374 = INT32_MIN;
	int8_t x375 = 24;
	volatile int16_t x376 = -1;
	int32_t t93 = 558585;

	t93 = (x373|(x374==(x375|x376)));

	if (t93 != 6) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 25017826000861LLU;
	static int64_t x378 = -1LL;
	static int8_t x379 = INT8_MIN;
	static uint8_t x380 = UINT8_MAX;
	volatile uint64_t t94 = 101978230561410170LLU;

	t94 = (x377|(x378==(x379|x380)));

	if (t94 != 25017826000861LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = INT16_MAX;
	int64_t x383 = -1LL;
	volatile int32_t x384 = INT32_MIN;
	volatile int32_t t95 = 0;

	t95 = (x381|(x382==(x383|x384)));

	if (t95 != 7356) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1;
	int32_t x386 = INT32_MIN;
	int8_t x387 = INT8_MAX;
	uint32_t x388 = 57U;
	int32_t t96 = -21375751;

	t96 = (x385|(x386==(x387|x388)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 12U;
	volatile int16_t x390 = 4501;
	uint16_t x391 = UINT16_MAX;
	int8_t x392 = INT8_MIN;
	int32_t t97 = -213807902;

	t97 = (x389|(x390==(x391|x392)));

	if (t97 != 12) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	uint32_t x395 = 1627758U;
	volatile uint8_t x396 = 3U;
	int32_t t98 = -406;

	t98 = (x393|(x394==(x395|x396)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -11109316;
	int32_t x398 = INT32_MIN;
	uint64_t x399 = 295679499LLU;
	int64_t x400 = INT64_MIN;
	int32_t t99 = 5;

	t99 = (x397|(x398==(x399|x400)));

	if (t99 != -11109316) { NG(); } else { ; }
	
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

