#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = 302;
int8_t x4 = -1;
int8_t x5 = -1;
volatile int8_t x7 = 22;
int32_t x10 = -1;
static volatile uint64_t t4 = 3931205222138523198LLU;
volatile uint32_t x32 = 169049U;
uint64_t x35 = UINT64_MAX;
int8_t x51 = 2;
int16_t x52 = INT16_MAX;
static int8_t x63 = -6;
uint64_t x64 = UINT64_MAX;
uint64_t t10 = UINT64_MAX;
static int8_t x66 = INT8_MAX;
uint64_t x68 = UINT64_MAX;
uint64_t t11 = UINT64_MAX;
int8_t x70 = 61;
volatile int16_t x74 = -3;
static uint64_t x75 = 490LLU;
uint16_t x76 = 383U;
static int32_t x81 = -7803842;
int32_t x83 = INT32_MIN;
static int32_t x86 = -1;
static volatile uint16_t x87 = UINT16_MAX;
static uint16_t x89 = UINT16_MAX;
int8_t x98 = -33;
int32_t x99 = -1;
static volatile int32_t t18 = -8133943;
static volatile int64_t t19 = -139LL;
int32_t x110 = -1;
int32_t x114 = INT32_MIN;
uint8_t x119 = UINT8_MAX;
uint8_t x133 = UINT8_MAX;
int8_t x134 = -1;
volatile int8_t x135 = INT8_MIN;
int64_t t25 = 4036998LL;
volatile int8_t x138 = 12;
volatile uint64_t t27 = 334125916006466LLU;
static uint64_t x153 = UINT64_MAX;
static int64_t x154 = 26253LL;
static int64_t x182 = -23LL;
uint16_t x183 = UINT16_MAX;
static int8_t x193 = INT8_MIN;
static uint8_t x198 = UINT8_MAX;
volatile uint64_t x202 = 166877LLU;
uint64_t t39 = 536845209908502054LLU;
uint32_t x208 = 21953243U;
uint32_t x211 = UINT32_MAX;
uint64_t x215 = 8026LLU;
int16_t x223 = 358;
uint32_t x224 = 1804U;
uint16_t x230 = 1U;
static int64_t t44 = 203085334886647609LL;
uint32_t x240 = UINT32_MAX;
static uint16_t x241 = UINT16_MAX;
int8_t x244 = 1;
int16_t x247 = 6834;
volatile int64_t t49 = 45567LL;
static uint32_t x258 = UINT32_MAX;
int8_t x266 = INT8_MIN;
volatile uint32_t t52 = 313580U;
static int64_t t56 = -140234592843945971LL;
static uint64_t t57 = 1113843858094811985LLU;
volatile int8_t x299 = 40;
int64_t t60 = -2LL;
volatile uint8_t x303 = UINT8_MAX;
volatile int32_t t61 = -475;
int64_t x319 = INT64_MAX;
int64_t x321 = INT64_MAX;
uint64_t x323 = 20374100282227771LLU;
int32_t x324 = INT32_MIN;
volatile int8_t x332 = -28;
uint8_t x337 = 103U;
int64_t t70 = 660696255LL;
static int64_t x349 = 56741424637475520LL;
static uint8_t x352 = 5U;
static volatile int64_t t72 = -2017535208264787LL;
uint8_t x367 = UINT8_MAX;
static int16_t x373 = -1;
uint8_t x376 = 22U;
volatile int32_t x378 = -5567;
static int8_t x387 = -1;
uint16_t x391 = 24748U;
static uint32_t t79 = 3U;
uint16_t x397 = 8U;
uint64_t x411 = 9565LLU;
uint16_t x417 = 122U;
int64_t x420 = INT64_MAX;
volatile uint64_t t84 = 49553330260LLU;
volatile uint16_t x424 = 26U;
uint8_t x435 = 2U;
int16_t x442 = -1;
static uint32_t x444 = UINT32_MAX;
int32_t x447 = 1;
volatile uint32_t t91 = 1076146U;
int8_t x449 = -1;
uint32_t t93 = 53U;
volatile uint8_t x457 = UINT8_MAX;
uint8_t x459 = UINT8_MAX;
static uint32_t x460 = 744970U;
int8_t x472 = -27;
int16_t x478 = INT16_MIN;
uint8_t x479 = UINT8_MAX;
int16_t x480 = 1;
volatile int32_t t98 = 30;
volatile int8_t x481 = INT8_MIN;
int64_t x482 = INT64_MIN;
static uint64_t x484 = 95078773127LLU;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int8_t x2 = INT8_MIN;
	int32_t t0 = 22902402;

	t0 = ((x1&(x2-x3))+x4);

	if (t0 != 2147483217) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -1LL;
	static int16_t x8 = 8776;
	volatile int64_t t1 = 171LL;

	t1 = ((x5&(x6-x7))+x8);

	if (t1 != 8753LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = 12;
	uint64_t x11 = UINT64_MAX;
	int64_t x12 = INT64_MAX;
	uint64_t t2 = 456114223224465LLU;

	t2 = ((x9&(x10-x11))+x12);

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MAX;
	int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MIN;
	uint16_t x20 = 2U;
	static volatile int64_t t3 = 2734342725840LL;

	t3 = ((x17&(x18-x19))+x20);

	if (t3 != 9223372036854743042LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 114;
	static uint8_t x22 = 58U;
	static uint64_t x23 = UINT64_MAX;
	volatile int8_t x24 = INT8_MAX;

	t4 = ((x21&(x22-x23))+x24);

	if (t4 != 177LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = -323666;
	int8_t x30 = INT8_MIN;
	uint16_t x31 = 1619U;
	volatile uint32_t t5 = 5753U;

	t5 = ((x29&(x30-x31))+x32);

	if (t5 != 4294811013U) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x33 = INT64_MAX;
	static uint64_t x34 = 236568088LLU;
	static int32_t x36 = INT32_MIN;
	uint64_t t6 = 33868601635338LLU;

	t6 = ((x33&(x34-x35))+x36);

	if (t6 != 18446744071798636057LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = -2987227;
	int32_t x38 = -1;
	uint16_t x39 = 62U;
	int8_t x40 = -1;
	int32_t t7 = 1039;

	t7 = ((x37&(x38-x39))+x40);

	if (t7 != -2987264) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x41 = -4309475662LL;
	int32_t x42 = INT32_MIN;
	static uint32_t x43 = 67534220U;
	static uint16_t x44 = UINT16_MAX;
	int64_t t8 = -7660488LL;

	t8 = ((x41&(x42-x43))+x44);

	if (t8 != 2065793583LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = 79U;
	uint64_t x50 = 3792084256276011LLU;
	static uint64_t t9 = 1535488LLU;

	t9 = ((x49&(x50-x51))+x52);

	if (t9 != 32776LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x61 = 818;
	int8_t x62 = 3;

	t10 = ((x61&(x62-x63))+x64);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x65 = 0U;
	uint64_t x67 = UINT64_MAX;

	t11 = ((x65&(x66-x67))+x68);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x69 = 13U;
	uint16_t x71 = 1188U;
	static int8_t x72 = INT8_MIN;
	int32_t t12 = 178;

	t12 = ((x69&(x70-x71))+x72);

	if (t12 != -119) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = INT8_MAX;
	volatile uint64_t t13 = 192549577321508LLU;

	t13 = ((x73&(x74-x75))+x76);

	if (t13 != 402LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = INT32_MIN;
	int8_t x78 = -1;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = INT16_MIN;
	uint32_t t14 = 1829257345U;

	t14 = ((x77&(x78-x79))+x80);

	if (t14 != 4294934528U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x82 = -1;
	int32_t x84 = 858930;
	int32_t t15 = -28;

	t15 = ((x81&(x82-x83))+x84);

	if (t15 != 2140538736) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x85 = UINT32_MAX;
	uint8_t x88 = 23U;
	uint32_t t16 = 2223U;

	t16 = ((x85&(x86-x87))+x88);

	if (t16 != 4294901783U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x90 = INT16_MAX;
	int8_t x91 = -1;
	volatile uint64_t x92 = UINT64_MAX;
	uint64_t t17 = 312705211973725LLU;

	t17 = ((x89&(x90-x91))+x92);

	if (t17 != 32767LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MAX;
	static int8_t x100 = INT8_MIN;

	t18 = ((x97&(x98-x99))+x100);

	if (t18 != -32) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x101 = 3U;
	static int64_t x102 = INT64_MAX;
	int16_t x103 = 172;
	static int16_t x104 = INT16_MIN;

	t19 = ((x101&(x102-x103))+x104);

	if (t19 != -32765LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x109 = 0U;
	static int8_t x111 = 1;
	int32_t x112 = 0;
	volatile int32_t t20 = 2;

	t20 = ((x109&(x110-x111))+x112);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x113 = 1U;
	int16_t x115 = INT16_MIN;
	static int64_t x116 = -16042295039775LL;
	volatile int64_t t21 = 7808LL;

	t21 = ((x113&(x114-x115))+x116);

	if (t21 != -16042295039775LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = INT8_MIN;
	int8_t x118 = 0;
	int32_t x120 = -1;
	static int32_t t22 = -181728;

	t22 = ((x117&(x118-x119))+x120);

	if (t22 != -257) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = INT64_MIN;
	uint8_t x122 = 110U;
	int8_t x123 = -1;
	uint64_t x124 = 432434280206382227LLU;
	uint64_t t23 = 733886LLU;

	t23 = ((x121&(x122-x123))+x124);

	if (t23 != 432434280206382227LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x125 = UINT32_MAX;
	uint8_t x126 = 6U;
	static volatile int32_t x127 = -4740687;
	volatile uint16_t x128 = UINT16_MAX;
	volatile uint32_t t24 = 4384U;

	t24 = ((x125&(x126-x127))+x128);

	if (t24 != 4806228U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x136 = INT64_MIN;

	t25 = ((x133&(x134-x135))+x136);

	if (t25 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x137 = 60897082363639749LLU;
	static volatile int16_t x139 = INT16_MIN;
	uint32_t x140 = 359641U;
	uint64_t t26 = 293372619227928598LLU;

	t26 = ((x137&(x138-x139))+x140);

	if (t26 != 359645LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x145 = UINT8_MAX;
	int64_t x146 = INT64_MIN;
	uint64_t x147 = 587235LLU;
	int32_t x148 = -3569;

	t27 = ((x145&(x146-x147))+x148);

	if (t27 != 18446744073709548076LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x149 = -8484542774479LL;
	int32_t x150 = INT32_MIN;
	int8_t x151 = INT8_MIN;
	uint32_t x152 = UINT32_MAX;
	int64_t t28 = -1043177459637947LL;

	t28 = ((x149&(x150-x151))+x152);

	if (t28 != -8480412925953LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x155 = INT16_MAX;
	volatile int32_t x156 = INT32_MIN;
	static volatile uint64_t t29 = 10865LLU;

	t29 = ((x153&(x154-x155))+x156);

	if (t29 != 18446744071562061454LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x157 = 12286U;
	static uint64_t x158 = UINT64_MAX;
	static int32_t x159 = INT32_MIN;
	uint64_t x160 = UINT64_MAX;
	static uint64_t t30 = 389617LLU;

	t30 = ((x157&(x158-x159))+x160);

	if (t30 != 12285LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x161 = 325;
	uint64_t x162 = UINT64_MAX;
	int32_t x163 = INT32_MAX;
	volatile int32_t x164 = -1;
	uint64_t t31 = UINT64_MAX;

	t31 = ((x161&(x162-x163))+x164);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x169 = -1;
	int64_t x170 = INT64_MAX;
	int32_t x171 = INT32_MAX;
	static uint64_t x172 = 1809388704LLU;
	static uint64_t t32 = 19280491077LLU;

	t32 = ((x169&(x170-x171))+x172);

	if (t32 != 9223372036516680864LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x173 = 0U;
	static uint64_t x174 = UINT64_MAX;
	volatile int16_t x175 = INT16_MAX;
	volatile uint64_t x176 = 66886024634LLU;
	uint64_t t33 = 554813023821897LLU;

	t33 = ((x173&(x174-x175))+x176);

	if (t33 != 66886024634LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x177 = -1LL;
	uint32_t x178 = UINT32_MAX;
	int32_t x179 = -1;
	uint32_t x180 = UINT32_MAX;
	volatile int64_t t34 = -1640914903916553LL;

	t34 = ((x177&(x178-x179))+x180);

	if (t34 != 4294967295LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x181 = 0U;
	volatile int64_t x184 = INT64_MIN;
	volatile int64_t t35 = INT64_MIN;

	t35 = ((x181&(x182-x183))+x184);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x189 = -1;
	int8_t x190 = INT8_MIN;
	uint16_t x191 = 2U;
	uint16_t x192 = UINT16_MAX;
	int32_t t36 = 12;

	t36 = ((x189&(x190-x191))+x192);

	if (t36 != 65405) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x194 = -1LL;
	static uint32_t x195 = 110834U;
	int32_t x196 = -788997;
	int64_t t37 = -108342383371187901LL;

	t37 = ((x193&(x194-x195))+x196);

	if (t37 != -899845LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x197 = INT32_MAX;
	int16_t x199 = 92;
	volatile uint32_t x200 = 5758U;
	uint32_t t38 = 1743729490U;

	t38 = ((x197&(x198-x199))+x200);

	if (t38 != 5921U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x201 = 15U;
	int8_t x203 = -26;
	int16_t x204 = INT16_MIN;

	t39 = ((x201&(x202-x203))+x204);

	if (t39 != 18446744073709518855LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x205 = -1;
	static volatile int32_t x206 = -94812;
	int16_t x207 = -1;
	volatile uint32_t t40 = 922U;

	t40 = ((x205&(x206-x207))+x208);

	if (t40 != 21858432U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = INT8_MIN;
	uint64_t x210 = UINT64_MAX;
	int32_t x212 = 1;
	uint64_t t41 = 12700427837LLU;

	t41 = ((x209&(x210-x211))+x212);

	if (t41 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x213 = -1409;
	int32_t x214 = 221849974;
	static uint64_t x216 = 102561LLU;
	volatile uint64_t t42 = 8845802LLU;

	t42 = ((x213&(x214-x215))+x216);

	if (t42 != 221944509LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x221 = 17052U;
	static uint16_t x222 = UINT16_MAX;
	volatile uint32_t t43 = 1U;

	t43 = ((x221&(x222-x223))+x224);

	if (t43 != 18852U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x229 = INT8_MIN;
	int8_t x231 = INT8_MIN;
	volatile int64_t x232 = -1LL;

	t44 = ((x229&(x230-x231))+x232);

	if (t44 != 127LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x237 = -1;
	static volatile uint32_t x238 = 10441140U;
	int32_t x239 = -1;
	volatile uint32_t t45 = 19U;

	t45 = ((x237&(x238-x239))+x240);

	if (t45 != 10441140U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x242 = 8U;
	static uint16_t x243 = UINT16_MAX;
	int32_t t46 = 3802;

	t46 = ((x241&(x242-x243))+x244);

	if (t46 != 10) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x245 = 6740;
	uint64_t x246 = UINT64_MAX;
	int32_t x248 = -1;
	uint64_t t47 = 10478849913LLU;

	t47 = ((x245&(x246-x247))+x248);

	if (t47 != 67LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x249 = -908;
	static int16_t x250 = -1;
	int8_t x251 = -1;
	int32_t x252 = -787863010;
	int32_t t48 = 31555142;

	t48 = ((x249&(x250-x251))+x252);

	if (t48 != -787863010) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x253 = -1;
	int64_t x254 = -32607736887418LL;
	volatile int8_t x255 = 4;
	int8_t x256 = INT8_MIN;

	t49 = ((x253&(x254-x255))+x256);

	if (t49 != -32607736887550LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x257 = INT32_MIN;
	int64_t x259 = -1LL;
	int64_t x260 = INT64_MIN;
	volatile int64_t t50 = 246470LL;

	t50 = ((x257&(x258-x259))+x260);

	if (t50 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x261 = 61;
	int32_t x262 = INT32_MAX;
	volatile int64_t x263 = INT64_MAX;
	volatile uint64_t x264 = 0LLU;
	volatile uint64_t t51 = 112862LLU;

	t51 = ((x261&(x262-x263))+x264);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x265 = 7686U;
	static int32_t x267 = -972857;
	int8_t x268 = 3;

	t52 = ((x265&(x266-x267))+x268);

	if (t52 != 5635U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x269 = -1;
	uint16_t x270 = 26U;
	int64_t x271 = INT64_MAX;
	volatile uint32_t x272 = UINT32_MAX;
	volatile int64_t t53 = -1402LL;

	t53 = ((x269&(x270-x271))+x272);

	if (t53 != -9223372032559808486LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x273 = 1186473LLU;
	volatile uint32_t x274 = 107U;
	int64_t x275 = -1LL;
	uint16_t x276 = UINT16_MAX;
	uint64_t t54 = 68104392LLU;

	t54 = ((x273&(x274-x275))+x276);

	if (t54 != 65575LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x277 = 32730;
	int16_t x278 = 0;
	int32_t x279 = -1;
	volatile uint64_t x280 = 62783977155715753LLU;
	volatile uint64_t t55 = 1LLU;

	t55 = ((x277&(x278-x279))+x280);

	if (t55 != 62783977155715753LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x281 = INT64_MAX;
	int32_t x282 = 256826102;
	uint16_t x283 = 187U;
	int8_t x284 = INT8_MAX;

	t56 = ((x281&(x282-x283))+x284);

	if (t56 != 256826042LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x285 = INT8_MIN;
	static int64_t x286 = -880383738410896LL;
	uint64_t x287 = 6009LLU;
	int8_t x288 = 1;

	t57 = ((x285&(x286-x287))+x288);

	if (t57 != 18445863689971134593LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x289 = INT8_MAX;
	int16_t x290 = INT16_MAX;
	volatile int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t58 = -23;

	t58 = ((x289&(x290-x291))+x292);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x293 = INT64_MIN;
	int8_t x294 = 1;
	int16_t x295 = -1;
	uint64_t x296 = 37442301745718146LLU;
	static uint64_t t59 = 810142682457731450LLU;

	t59 = ((x293&(x294-x295))+x296);

	if (t59 != 37442301745718146LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x297 = INT16_MIN;
	static int64_t x298 = 13031803286259LL;
	static int16_t x300 = -3478;

	t60 = ((x297&(x298-x299))+x300);

	if (t60 != 13031803253354LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x301 = INT16_MIN;
	int16_t x302 = 0;
	int8_t x304 = INT8_MAX;

	t61 = ((x301&(x302-x303))+x304);

	if (t61 != -32641) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x305 = INT32_MIN;
	volatile uint32_t x306 = UINT32_MAX;
	volatile int32_t x307 = INT32_MIN;
	volatile uint32_t x308 = UINT32_MAX;
	volatile uint32_t t62 = UINT32_MAX;

	t62 = ((x305&(x306-x307))+x308);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x309 = 13005427983LLU;
	int32_t x310 = -208;
	static uint32_t x311 = UINT32_MAX;
	static uint16_t x312 = 22U;
	volatile uint64_t t63 = 382206226LLU;

	t63 = ((x309&(x310-x311))+x312);

	if (t63 != 120526103LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x313 = INT8_MIN;
	uint16_t x314 = UINT16_MAX;
	static int16_t x315 = INT16_MAX;
	volatile int16_t x316 = INT16_MIN;
	int32_t t64 = -971920943;

	t64 = ((x313&(x314-x315))+x316);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x317 = 19LL;
	static int32_t x318 = -1;
	static uint64_t x320 = UINT64_MAX;
	uint64_t t65 = UINT64_MAX;

	t65 = ((x317&(x318-x319))+x320);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x322 = -41373;
	uint64_t t66 = 113175074152441736LLU;

	t66 = ((x321&(x322-x323))+x324);

	if (t66 != 9202997934425023016LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x329 = INT16_MIN;
	volatile int16_t x330 = 224;
	uint16_t x331 = UINT16_MAX;
	static volatile int32_t t67 = -256241962;

	t67 = ((x329&(x330-x331))+x332);

	if (t67 != -65564) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x338 = -21374;
	uint32_t x339 = 0U;
	int16_t x340 = -1;
	static uint32_t t68 = 8U;

	t68 = ((x337&(x338-x339))+x340);

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x341 = -1LL;
	volatile int16_t x342 = -1;
	int8_t x343 = -3;
	uint8_t x344 = 126U;
	volatile int64_t t69 = -999313349745LL;

	t69 = ((x341&(x342-x343))+x344);

	if (t69 != 128LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x345 = 89;
	static volatile int32_t x346 = -15;
	int64_t x347 = 11477608547LL;
	volatile int64_t x348 = 3507271986926002LL;

	t70 = ((x345&(x346-x347))+x348);

	if (t70 != 3507271986926010LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x350 = UINT32_MAX;
	int8_t x351 = INT8_MIN;
	volatile int64_t t71 = 192204690LL;

	t71 = ((x349&(x350-x351))+x352);

	if (t71 != 69LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x353 = INT32_MIN;
	int8_t x354 = INT8_MIN;
	volatile int64_t x355 = 107228900662710LL;
	int64_t x356 = -1LL;

	t72 = ((x353&(x354-x355))+x356);

	if (t72 != -107230300995585LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x361 = 1462563088U;
	volatile int8_t x362 = 42;
	int16_t x363 = INT16_MAX;
	int16_t x364 = INT16_MIN;
	static uint32_t t73 = 15964934U;

	t73 = ((x361&(x362-x363))+x364);

	if (t73 != 1462501376U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x365 = UINT64_MAX;
	volatile int16_t x366 = INT16_MIN;
	int16_t x368 = INT16_MIN;
	volatile uint64_t t74 = 2385621282795444LLU;

	t74 = ((x365&(x366-x367))+x368);

	if (t74 != 18446744073709485825LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x374 = UINT16_MAX;
	volatile uint32_t x375 = 126102U;
	volatile uint32_t t75 = 261561U;

	t75 = ((x373&(x374-x375))+x376);

	if (t75 != 4294906751U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x377 = INT32_MAX;
	volatile uint8_t x379 = 2U;
	uint8_t x380 = 57U;
	int32_t t76 = -1;

	t76 = ((x377&(x378-x379))+x380);

	if (t76 != 2147478136) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x381 = UINT64_MAX;
	static uint64_t x382 = 3580799986408LLU;
	static int8_t x383 = INT8_MIN;
	static int32_t x384 = INT32_MIN;
	static uint64_t t77 = 1556137392693LLU;

	t77 = ((x381&(x382-x383))+x384);

	if (t77 != 3578652502888LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x385 = INT8_MIN;
	uint64_t x386 = UINT64_MAX;
	uint64_t x388 = 2949751165LLU;
	uint64_t t78 = 1021LLU;

	t78 = ((x385&(x386-x387))+x388);

	if (t78 != 2949751165LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x389 = UINT32_MAX;
	int8_t x390 = INT8_MIN;
	int16_t x392 = INT16_MIN;

	t79 = ((x389&(x390-x391))+x392);

	if (t79 != 4294909652U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x398 = -1511;
	int64_t x399 = -1LL;
	uint64_t x400 = UINT64_MAX;
	static uint64_t t80 = 1934652112067267LLU;

	t80 = ((x397&(x398-x399))+x400);

	if (t80 != 7LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x405 = INT8_MAX;
	static int32_t x406 = -1;
	static int16_t x407 = INT16_MIN;
	int32_t x408 = 7769;
	volatile int32_t t81 = -157812;

	t81 = ((x405&(x406-x407))+x408);

	if (t81 != 7896) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x409 = INT8_MIN;
	int64_t x410 = 48185122LL;
	int64_t x412 = -1LL;
	uint64_t t82 = 108747564410563015LLU;

	t82 = ((x409&(x410-x411))+x412);

	if (t82 != 48175487LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x413 = INT32_MAX;
	int8_t x414 = -1;
	volatile uint64_t x415 = 96397791789159LLU;
	volatile int8_t x416 = -1;
	volatile uint64_t t83 = 804275LLU;

	t83 = ((x413&(x414-x415))+x416);

	if (t83 != 601685911LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x418 = 1LLU;
	static int16_t x419 = INT16_MIN;

	t84 = ((x417&(x418-x419))+x420);

	if (t84 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x421 = 18084526LLU;
	volatile int64_t x422 = INT64_MIN;
	static int8_t x423 = -1;
	volatile uint64_t t85 = 7875282LLU;

	t85 = ((x421&(x422-x423))+x424);

	if (t85 != 26LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x425 = 0U;
	volatile uint64_t x426 = UINT64_MAX;
	uint16_t x427 = UINT16_MAX;
	int16_t x428 = INT16_MAX;
	volatile uint64_t t86 = 481LLU;

	t86 = ((x425&(x426-x427))+x428);

	if (t86 != 32767LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x429 = -1;
	int32_t x430 = -1;
	volatile int16_t x431 = -341;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t87 = 1344;

	t87 = ((x429&(x430-x431))+x432);

	if (t87 != 65875) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x433 = 62794056203LLU;
	int8_t x434 = INT8_MAX;
	int32_t x436 = INT32_MIN;
	volatile uint64_t t88 = 55947440311LLU;

	t88 = ((x433&(x434-x435))+x436);

	if (t88 != 18446744071562067977LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x437 = 5119697147565119LL;
	volatile uint8_t x438 = 3U;
	static int64_t x439 = 90892082950LL;
	uint16_t x440 = UINT16_MAX;
	int64_t t89 = -1018495071573765635LL;

	t89 = ((x437&(x438-x439))+x440);

	if (t89 != 5119610684801084LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x441 = -15268659470672LL;
	int16_t x443 = 635;
	int64_t t90 = 9195599099LL;

	t90 = ((x441&(x442-x443))+x444);

	if (t90 != -15264364503937LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x445 = 1U;
	volatile int32_t x446 = 2088;
	uint32_t x448 = 6356U;

	t91 = ((x445&(x446-x447))+x448);

	if (t91 != 6357U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x450 = INT32_MIN;
	uint64_t x451 = 55532693897271LLU;
	static uint32_t x452 = 58035421U;
	volatile uint64_t t92 = 25698721692LLU;

	t92 = ((x449&(x450-x451))+x452);

	if (t92 != 18446688538926206118LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x453 = INT32_MIN;
	static uint32_t x454 = UINT32_MAX;
	uint8_t x455 = UINT8_MAX;
	volatile int16_t x456 = INT16_MAX;

	t93 = ((x453&(x454-x455))+x456);

	if (t93 != 2147516415U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x458 = -1;
	uint32_t t94 = 10372U;

	t94 = ((x457&(x458-x459))+x460);

	if (t94 != 744970U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x465 = INT32_MIN;
	volatile int8_t x466 = INT8_MIN;
	int16_t x467 = 5089;
	uint32_t x468 = UINT32_MAX;
	uint32_t t95 = 473U;

	t95 = ((x465&(x466-x467))+x468);

	if (t95 != 2147483647U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x469 = INT8_MIN;
	int64_t x470 = INT64_MAX;
	static int16_t x471 = INT16_MAX;
	volatile int64_t t96 = 121630624453582480LL;

	t96 = ((x469&(x470-x471))+x472);

	if (t96 != 9223372036854743013LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x473 = INT32_MIN;
	volatile uint8_t x474 = UINT8_MAX;
	volatile int8_t x475 = 1;
	int8_t x476 = 29;
	static int32_t t97 = 0;

	t97 = ((x473&(x474-x475))+x476);

	if (t97 != 29) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x477 = -79;

	t98 = ((x477&(x478-x479))+x480);

	if (t98 != -33022) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x483 = -5;
	uint64_t t99 = 8911317978843493452LLU;

	t99 = ((x481&(x482-x483))+x484);

	if (t99 != 9223372131933548935LLU) { NG(); } else { ; }
	
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

