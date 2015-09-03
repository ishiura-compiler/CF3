#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = -1;
volatile int16_t x11 = -1;
int32_t t3 = -1964181;
uint32_t x18 = 16U;
int32_t x21 = INT32_MIN;
static int16_t x24 = INT16_MIN;
static int8_t x26 = INT8_MIN;
static int32_t x35 = -294306;
int16_t x36 = -1;
volatile int32_t t8 = 150;
uint8_t x39 = 54U;
volatile uint8_t x56 = 0U;
volatile int16_t x58 = 715;
int16_t x61 = -14;
int16_t x75 = -1;
int16_t x77 = -1;
volatile int32_t t17 = -18857;
int8_t x92 = INT8_MIN;
int64_t x96 = -171738423401LL;
static uint32_t x98 = 24U;
int64_t x100 = INT64_MIN;
uint16_t x107 = UINT16_MAX;
static uint16_t x114 = 10U;
uint16_t x130 = UINT16_MAX;
static uint64_t x136 = 6047436LLU;
static int32_t x138 = INT32_MIN;
int16_t x141 = INT16_MAX;
int64_t x143 = 24975567628729754LL;
static volatile int16_t x152 = -19;
volatile int64_t x155 = -1LL;
volatile int64_t t36 = -906LL;
static uint32_t t38 = 172U;
static volatile int64_t t43 = 44977556LL;
int16_t x221 = -1;
int8_t x224 = 12;
int8_t x231 = 3;
volatile int64_t x232 = INT64_MIN;
uint16_t x237 = 42U;
int64_t x241 = INT64_MIN;
volatile uint16_t x243 = 5U;
static uint8_t x244 = UINT8_MAX;
int32_t x246 = INT32_MIN;
int16_t x250 = INT16_MIN;
static volatile uint16_t x251 = UINT16_MAX;
uint64_t x253 = 2LLU;
int16_t x254 = -1;
uint16_t x256 = UINT16_MAX;
int32_t x257 = INT32_MAX;
int64_t x259 = -1LL;
int8_t x260 = INT8_MIN;
static int32_t x267 = -1;
int32_t t55 = -50150;
volatile int64_t t57 = 117002544382961971LL;
volatile int8_t x280 = -1;
uint64_t x300 = 279LLU;
int16_t x301 = -5787;
static int8_t x309 = INT8_MAX;
static int64_t t65 = -3233LL;
static volatile uint64_t t67 = 188868605LLU;
static int64_t x334 = 52949160006426LL;
int64_t x344 = -15LL;
static volatile uint64_t x368 = UINT64_MAX;
int8_t x373 = INT8_MIN;
uint16_t x374 = UINT16_MAX;
int64_t x377 = INT64_MIN;
uint16_t x387 = 3U;
uint32_t x396 = UINT32_MAX;
int64_t x400 = -16043652392LL;
int16_t x411 = INT16_MAX;
uint16_t x412 = 1U;
uint64_t x422 = 4790161579093010LLU;
int8_t x430 = INT8_MIN;
int64_t t84 = -970174129309946LL;
uint32_t x434 = 15640U;
int16_t x436 = INT16_MIN;
int16_t x441 = -1;
uint16_t x446 = 7181U;
volatile uint64_t t88 = 811193378126LLU;
int8_t x464 = -1;
int8_t x478 = -1;
volatile int64_t x486 = -69789607LL;
int16_t x489 = 11;
uint32_t x494 = 6907275U;
int16_t x498 = INT16_MAX;
int64_t x499 = -2497189737308826919LL;
static volatile int64_t x502 = 2825133325LL;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int8_t x2 = -1;
	static volatile uint16_t x3 = UINT16_MAX;
	uint16_t x4 = UINT16_MAX;
	volatile uint64_t t0 = 392LLU;

	t0 = (x1-((x2-x3)^x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = -1;
	volatile uint64_t x7 = UINT64_MAX;
	volatile int16_t x8 = -1;
	uint64_t t1 = 30408199974LLU;

	t1 = (x5-((x6-x7)^x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint8_t x10 = UINT8_MAX;
	uint32_t x12 = UINT32_MAX;
	static volatile uint32_t t2 = 54U;

	t2 = (x9-((x10-x11)^x12));

	if (t2 != 256U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MAX;
	volatile uint8_t x14 = 11U;
	static uint16_t x15 = 26651U;
	int32_t x16 = -1;

	t3 = (x13-((x14-x15)^x16));

	if (t3 != -26512) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 11U;
	uint16_t x19 = 0U;
	volatile uint32_t x20 = 51U;
	volatile uint32_t t4 = 6U;

	t4 = (x17-((x18-x19)^x20));

	if (t4 != 4294967272U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -434620050LL;
	static int16_t x23 = 0;
	volatile int64_t t5 = 12761LL;

	t5 = (x21-((x22-x23)^x24));

	if (t5 != -2582100334LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	volatile int16_t x27 = -199;
	int16_t x28 = 569;
	volatile int32_t t6 = -6;

	t6 = (x25-((x26-x27)^x28));

	if (t6 != -383) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 94LLU;
	uint32_t x30 = 10968138U;
	uint8_t x31 = 3U;
	int32_t x32 = INT32_MAX;
	volatile uint64_t t7 = 422LLU;

	t7 = (x29-((x30-x31)^x32));

	if (t7 != 18446744071573036198LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = UINT16_MAX;
	int16_t x34 = INT16_MIN;

	t8 = (x33-((x34-x35)^x36));

	if (t8 != 327074) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 73283;
	int32_t x38 = -1;
	volatile uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = -697372306;

	t9 = (x37-((x38-x39)^x40));

	if (t9 != 138765) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	volatile int16_t x42 = 90;
	int8_t x43 = INT8_MAX;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = 212;

	t10 = (x41-((x42-x43)^x44));

	if (t10 != -92) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x53 = INT32_MIN;
	volatile uint32_t x54 = UINT32_MAX;
	volatile int32_t x55 = INT32_MIN;
	volatile uint32_t t11 = 1000193265U;

	t11 = (x53-((x54-x55)^x56));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -1LL;
	uint16_t x59 = UINT16_MAX;
	int32_t x60 = INT32_MAX;
	volatile int64_t t12 = 66366437616LL;

	t12 = (x57-((x58-x59)^x60));

	if (t12 != 2147418828LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x62 = INT8_MIN;
	static int16_t x63 = INT16_MAX;
	uint64_t x64 = 1974627437018626LLU;
	volatile uint64_t t13 = 499140LLU;

	t13 = (x61-((x62-x63)^x64));

	if (t13 != 1974627437051503LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x65 = UINT64_MAX;
	uint32_t x66 = 55047U;
	int64_t x67 = -62616313464LL;
	volatile int64_t x68 = INT64_MIN;
	uint64_t t14 = 13224LLU;

	t14 = (x65-((x66-x67)^x68));

	if (t14 != 9223371974238407296LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = UINT8_MAX;
	static uint32_t x74 = 433108213U;
	uint64_t x76 = 5975565LLU;
	volatile uint64_t t15 = 67215335117565LLU;

	t15 = (x73-((x74-x75)^x76));

	if (t15 != 18446744073280972292LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x78 = -1LL;
	static int16_t x79 = 16;
	int16_t x80 = 0;
	int64_t t16 = -451506141452893LL;

	t16 = (x77-((x78-x79)^x80));

	if (t16 != 16LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MAX;
	int8_t x82 = 1;
	uint16_t x83 = 22U;
	int16_t x84 = INT16_MAX;

	t17 = (x81-((x82-x83)^x84));

	if (t17 != 65515) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 6U;
	uint32_t x86 = 12303U;
	volatile uint8_t x87 = 0U;
	int8_t x88 = INT8_MIN;
	uint32_t t18 = 1U;

	t18 = (x85-((x86-x87)^x88));

	if (t18 != 12407U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 265LLU;
	static volatile uint32_t x90 = UINT32_MAX;
	volatile int16_t x91 = -1;
	uint64_t t19 = 216847910295467LLU;

	t19 = (x89-((x90-x91)^x92));

	if (t19 != 18446744069414584713LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x93 = -1;
	int16_t x94 = 1;
	static int16_t x95 = 1;
	static volatile int64_t t20 = 262548LL;

	t20 = (x93-((x94-x95)^x96));

	if (t20 != 171738423400LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = 0;
	volatile uint16_t x99 = 781U;
	int64_t t21 = -4091252069763022LL;

	t21 = (x97-((x98-x99)^x100));

	if (t21 != 9223372032559809269LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	volatile int8_t x102 = -1;
	uint64_t x103 = 124407386196937683LLU;
	static int8_t x104 = INT8_MIN;
	static volatile uint64_t t22 = 1231584144330LLU;

	t22 = (x101-((x102-x103)^x104));

	if (t22 != 9098964650657838164LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 47U;
	static int64_t x106 = 919229LL;
	int16_t x108 = -1;
	int64_t t23 = -2195595LL;

	t23 = (x105-((x106-x107)^x108));

	if (t23 != 853742LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = -108;
	uint16_t x110 = 73U;
	int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MAX;
	static int32_t t24 = -283080676;

	t24 = (x109-((x110-x111)^x112));

	if (t24 != -290) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x113 = 59341U;
	volatile int16_t x115 = INT16_MIN;
	uint8_t x116 = 4U;
	uint32_t t25 = 42U;

	t25 = (x113-((x114-x115)^x116));

	if (t25 != 26559U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = -7;
	volatile int16_t x122 = INT16_MIN;
	static uint16_t x123 = UINT16_MAX;
	uint32_t x124 = UINT32_MAX;
	uint32_t t26 = 282U;

	t26 = (x121-((x122-x123)^x124));

	if (t26 != 4294868987U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MIN;
	uint32_t x126 = UINT32_MAX;
	uint32_t x127 = 5090U;
	int64_t x128 = -686LL;
	volatile int64_t t27 = -952575371779LL;

	t27 = (x125-((x126-x127)^x128));

	if (t27 != 4294930097LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x129 = INT16_MIN;
	int16_t x131 = INT16_MIN;
	int32_t x132 = INT32_MAX;
	volatile int32_t t28 = 8;

	t28 = (x129-((x130-x131)^x132));

	if (t28 != -2147418112) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = UINT16_MAX;
	int32_t x134 = 19399285;
	uint16_t x135 = 30U;
	uint64_t t29 = 31922859278198LLU;

	t29 = (x133-((x134-x135)^x136));

	if (t29 != 18446744073685220196LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MIN;
	static uint32_t x139 = 103883U;
	int16_t x140 = INT16_MAX;
	static uint32_t t30 = 141758U;

	t30 = (x137-((x138-x139)^x140));

	if (t30 != 125494U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x142 = INT8_MIN;
	uint64_t x144 = 3LLU;
	static uint64_t t31 = 23261066LLU;

	t31 = (x141-((x142-x143)^x144));

	if (t31 != 24975567628762650LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x149 = 4303286312001517086LLU;
	uint32_t x150 = 6U;
	static int64_t x151 = INT64_MAX;
	uint64_t t32 = 512578570789660LLU;

	t32 = (x149-((x150-x151)^x152));

	if (t32 != 13526658348856292916LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x153 = 34U;
	int64_t x154 = INT64_MIN;
	int64_t x156 = -1LL;
	int64_t t33 = 17545193900444LL;

	t33 = (x153-((x154-x155)^x156));

	if (t33 != -9223372036854775772LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x157 = INT32_MIN;
	uint8_t x158 = UINT8_MAX;
	int8_t x159 = INT8_MAX;
	volatile int64_t x160 = 5310LL;
	volatile int64_t t34 = 182738468710252LL;

	t34 = (x157-((x158-x159)^x160));

	if (t34 != -2147488830LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x165 = UINT32_MAX;
	int64_t x166 = -1LL;
	int32_t x167 = INT32_MIN;
	volatile int16_t x168 = INT16_MIN;
	int64_t t35 = -1875263LL;

	t35 = (x165-((x166-x167)^x168));

	if (t35 != 6442418176LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = INT8_MIN;
	int16_t x174 = INT16_MIN;
	static int64_t x175 = INT64_MIN;
	volatile int16_t x176 = -528;

	t36 = (x173-((x174-x175)^x176));

	if (t36 != 9223372036854743440LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x177 = 2U;
	static int16_t x178 = INT16_MAX;
	volatile uint8_t x179 = 3U;
	static volatile int16_t x180 = INT16_MIN;
	volatile int32_t t37 = 0;

	t37 = (x177-((x178-x179)^x180));

	if (t37 != 6) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x189 = -1;
	uint32_t x190 = 7U;
	int32_t x191 = INT32_MAX;
	volatile int32_t x192 = INT32_MAX;

	t38 = (x189-((x190-x191)^x192));

	if (t38 != 8U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x193 = UINT8_MAX;
	int8_t x194 = INT8_MIN;
	static int16_t x195 = 14421;
	int32_t x196 = INT32_MAX;
	volatile int32_t t39 = -23574099;

	t39 = (x193-((x194-x195)^x196));

	if (t39 != 2147469355) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x197 = -1;
	int64_t x198 = -41041510049LL;
	int16_t x199 = 13766;
	static uint32_t x200 = 3146814U;
	volatile int64_t t40 = -228203LL;

	t40 = (x197-((x198-x199)^x200));

	if (t40 != 41044668504LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MIN;
	static uint32_t x207 = 16159U;
	int8_t x208 = INT8_MIN;
	volatile uint32_t t41 = 395U;

	t41 = (x205-((x206-x207)^x208));

	if (t41 != 4294918175U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x209 = 168762221448LLU;
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MIN;
	int64_t x212 = -1LL;
	volatile uint64_t t42 = 349605LLU;

	t42 = (x209-((x210-x211)^x212));

	if (t42 != 9223372205616997129LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x213 = -1LL;
	uint8_t x214 = UINT8_MAX;
	static uint16_t x215 = UINT16_MAX;
	int64_t x216 = INT64_MAX;

	t43 = (x213-((x214-x215)^x216));

	if (t43 != 9223372036854710528LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x222 = UINT32_MAX;
	int16_t x223 = 748;
	volatile uint32_t t44 = 803350331U;

	t44 = (x221-((x222-x223)^x224));

	if (t44 != 736U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x225 = INT16_MAX;
	int16_t x226 = 0;
	int32_t x227 = 424098294;
	int64_t x228 = 3465695037003808407LL;
	static int64_t t45 = -44608LL;

	t45 = (x225-((x226-x227)^x228));

	if (t45 != 3465695037150824290LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x229 = -1;
	int16_t x230 = -1;
	volatile int64_t t46 = -13654940117027564LL;

	t46 = (x229-((x230-x231)^x232));

	if (t46 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x233 = 765740LLU;
	int8_t x234 = -1;
	volatile uint64_t x235 = UINT64_MAX;
	uint8_t x236 = 5U;
	static volatile uint64_t t47 = 4411094804279433LLU;

	t47 = (x233-((x234-x235)^x236));

	if (t47 != 765735LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x238 = -3;
	uint32_t x239 = 3463U;
	int32_t x240 = 446699;
	uint32_t t48 = 147U;

	t48 = (x237-((x238-x239)^x240));

	if (t48 != 449933U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x242 = UINT64_MAX;
	uint64_t t49 = 98479LLU;

	t49 = (x241-((x242-x243)^x244));

	if (t49 != 9223372036854776059LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x245 = -163LL;
	uint32_t x247 = UINT32_MAX;
	volatile int32_t x248 = -1;
	volatile int64_t t50 = 182493LL;

	t50 = (x245-((x246-x247)^x248));

	if (t50 != -2147483809LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x249 = -427965;
	uint32_t x252 = 10608U;
	volatile uint32_t t51 = 203U;

	t51 = (x249-((x250-x251)^x252));

	if (t51 != 4294627026U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x255 = INT32_MIN;
	volatile uint64_t t52 = 181429LLU;

	t52 = (x253-((x254-x255)^x256));

	if (t52 != 18446744071562133506LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x258 = INT8_MIN;
	volatile int64_t t53 = 20040525231999071LL;

	t53 = (x257-((x258-x259)^x260));

	if (t53 != 2147483646LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x261 = 15;
	uint16_t x262 = UINT16_MAX;
	int8_t x263 = INT8_MIN;
	uint64_t x264 = 21419878617105910LLU;
	uint64_t t54 = 585LLU;

	t54 = (x261-((x262-x263)^x264));

	if (t54 != 18425324195092380294LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x265 = 34U;
	static volatile int16_t x266 = -1;
	int8_t x268 = INT8_MIN;

	t55 = (x265-((x266-x267)^x268));

	if (t55 != 162) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = -6403;
	static int8_t x270 = -1;
	volatile int8_t x271 = 0;
	static volatile uint64_t x272 = UINT64_MAX;
	volatile uint64_t t56 = 523006825LLU;

	t56 = (x269-((x270-x271)^x272));

	if (t56 != 18446744073709545213LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = -1LL;
	int16_t x274 = -1519;
	static uint16_t x275 = 25068U;
	static volatile int32_t x276 = INT32_MIN;

	t57 = (x273-((x274-x275)^x276));

	if (t57 != -2147457062LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x277 = UINT8_MAX;
	static uint64_t x278 = UINT64_MAX;
	static int64_t x279 = 1LL;
	static volatile uint64_t t58 = 428362242177LLU;

	t58 = (x277-((x278-x279)^x280));

	if (t58 != 254LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x289 = -2513;
	int64_t x290 = -1LL;
	volatile int64_t x291 = INT64_MAX;
	uint64_t x292 = 2605956LLU;
	volatile uint64_t t59 = 76660LLU;

	t59 = (x289-((x290-x291)^x292));

	if (t59 != 9223372036852167339LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x293 = 1062226LL;
	int16_t x294 = INT16_MIN;
	static uint8_t x295 = 2U;
	static volatile uint16_t x296 = 0U;
	volatile int64_t t60 = 43426267LL;

	t60 = (x293-((x294-x295)^x296));

	if (t60 != 1094996LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x297 = INT16_MAX;
	int32_t x298 = INT32_MIN;
	int64_t x299 = -1LL;
	static volatile uint64_t t61 = 3069124655575866559LLU;

	t61 = (x297-((x298-x299)^x300));

	if (t61 != 2147516137LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x302 = -1;
	uint16_t x303 = UINT16_MAX;
	int8_t x304 = -1;
	volatile int32_t t62 = -218372;

	t62 = (x301-((x302-x303)^x304));

	if (t62 != -71322) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x305 = 99U;
	int16_t x306 = INT16_MIN;
	static int8_t x307 = INT8_MIN;
	int32_t x308 = 15259;
	volatile uint32_t t63 = 3U;

	t63 = (x305-((x306-x307)^x308));

	if (t63 != 17736U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x310 = 2984LLU;
	uint32_t x311 = 2U;
	uint32_t x312 = 54U;
	volatile uint64_t t64 = 5LLU;

	t64 = (x309-((x310-x311)^x312));

	if (t64 != 18446744073709548783LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x313 = 0;
	int8_t x314 = -1;
	static int64_t x315 = INT64_MIN;
	static volatile int32_t x316 = -277;

	t65 = (x313-((x314-x315)^x316));

	if (t65 != 9223372036854775532LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x317 = INT8_MIN;
	static int16_t x318 = INT16_MIN;
	int64_t x319 = 0LL;
	static int64_t x320 = INT64_MIN;
	volatile int64_t t66 = -263940238030LL;

	t66 = (x317-((x318-x319)^x320));

	if (t66 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x325 = INT16_MAX;
	uint32_t x326 = UINT32_MAX;
	uint64_t x327 = 1598LLU;
	int32_t x328 = INT32_MAX;

	t67 = (x325-((x326-x327)^x328));

	if (t67 != 18446744071562099137LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x329 = -1;
	int32_t x330 = 13889323;
	uint16_t x331 = UINT16_MAX;
	uint16_t x332 = 11U;
	int32_t t68 = -20263;

	t68 = (x329-((x330-x331)^x332));

	if (t68 != -13823784) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x333 = INT32_MIN;
	uint32_t x335 = 211U;
	static uint16_t x336 = 13455U;
	int64_t t69 = -24LL;

	t69 = (x333-((x334-x335)^x336));

	if (t69 != -52951307495112LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x337 = -88961591;
	int8_t x338 = 1;
	volatile int64_t x339 = -1LL;
	int8_t x340 = -41;
	volatile int64_t t70 = -8588450LL;

	t70 = (x337-((x338-x339)^x340));

	if (t70 != -88961548LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x341 = 10;
	int32_t x342 = -12326688;
	uint16_t x343 = 186U;
	volatile int64_t t71 = 0LL;

	t71 = (x341-((x342-x343)^x344));

	if (t71 != -12326861LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x353 = 32151U;
	volatile int16_t x354 = -1;
	int32_t x355 = -1;
	volatile int16_t x356 = INT16_MIN;
	volatile int32_t t72 = 0;

	t72 = (x353-((x354-x355)^x356));

	if (t72 != 64919) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x361 = 899804185LLU;
	static volatile int64_t x362 = 739876LL;
	int32_t x363 = INT32_MIN;
	static int64_t x364 = 4463146937980143418LL;
	static uint64_t t73 = 8889712015LLU;

	t73 = (x361-((x362-x363)^x364));

	if (t73 != 13983597134482202363LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x365 = 2;
	static int64_t x366 = 1911012049190429LL;
	static volatile int8_t x367 = -1;
	uint64_t t74 = 67085062521LLU;

	t74 = (x365-((x366-x367)^x368));

	if (t74 != 1911012049190433LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x375 = 357U;
	static int64_t x376 = INT64_MIN;
	volatile int64_t t75 = 0LL;

	t75 = (x373-((x374-x375)^x376));

	if (t75 != 9223372036854710502LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x378 = UINT64_MAX;
	uint8_t x379 = 111U;
	uint16_t x380 = 1U;
	static volatile uint64_t t76 = 0LLU;

	t76 = (x377-((x378-x379)^x380));

	if (t76 != 9223372036854775919LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x385 = INT32_MAX;
	volatile uint16_t x386 = UINT16_MAX;
	uint64_t x388 = 38868165303215857LLU;
	uint64_t t77 = 129930LLU;

	t77 = (x385-((x386-x387)^x388));

	if (t77 != 18407875910553773810LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x389 = INT32_MIN;
	int64_t x390 = -1LL;
	volatile uint64_t x391 = 652116458012490286LLU;
	int16_t x392 = INT16_MAX;
	static volatile uint64_t t78 = 263181159422693629LLU;

	t78 = (x389-((x390-x391)^x392));

	if (t78 != 652116455865009618LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x393 = UINT32_MAX;
	int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	volatile uint32_t t79 = 129576U;

	t79 = (x393-((x394-x395)^x396));

	if (t79 != 32640U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x397 = INT32_MIN;
	int16_t x398 = INT16_MAX;
	int8_t x399 = -5;
	volatile int64_t t80 = -690615LL;

	t80 = (x397-((x398-x399)^x400));

	if (t80 != 13896135972LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x405 = INT32_MIN;
	static int32_t x406 = -23;
	int32_t x407 = -1;
	int16_t x408 = INT16_MAX;
	static volatile int32_t t81 = -126949945;

	t81 = (x405-((x406-x407)^x408));

	if (t81 != -2147450901) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x409 = 170;
	int8_t x410 = INT8_MIN;
	int32_t t82 = -32229143;

	t82 = (x409-((x410-x411)^x412));

	if (t82 != 33066) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x421 = -1;
	volatile int64_t x423 = INT64_MIN;
	int32_t x424 = INT32_MIN;
	static uint64_t t83 = 156017736882834LLU;

	t83 = (x421-((x422-x423)^x424));

	if (t83 != 9228162197113885677LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x429 = -643337113124LL;
	int8_t x431 = 11;
	volatile int16_t x432 = -1411;

	t84 = (x429-((x430-x431)^x432));

	if (t84 != -643337114412LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x433 = 5U;
	int8_t x435 = INT8_MIN;
	static volatile uint32_t t85 = 28U;

	t85 = (x433-((x434-x435)^x436));

	if (t85 != 17005U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x442 = 18199U;
	static int32_t x443 = INT32_MAX;
	int64_t x444 = INT64_MAX;
	volatile int64_t t86 = 73884LL;

	t86 = (x441-((x442-x443)^x444));

	if (t86 != 9223372034707310360LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x445 = 1278189;
	static int64_t x447 = -602167756451313487LL;
	static int32_t x448 = -1;
	static int64_t t87 = -11783066037907391LL;

	t87 = (x445-((x446-x447)^x448));

	if (t87 != 602167756452598858LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x449 = UINT64_MAX;
	static uint32_t x450 = UINT32_MAX;
	uint32_t x451 = UINT32_MAX;
	static int16_t x452 = INT16_MIN;

	t88 = (x449-((x450-x451)^x452));

	if (t88 != 18446744069414617087LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x453 = INT16_MIN;
	static uint32_t x454 = UINT32_MAX;
	static int32_t x455 = 14;
	int16_t x456 = INT16_MAX;
	static volatile uint32_t t89 = 41894711U;

	t89 = (x453-((x454-x455)^x456));

	if (t89 != 4294967282U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x457 = 3U;
	int8_t x458 = INT8_MAX;
	volatile uint64_t x459 = 97324245369LLU;
	int16_t x460 = INT16_MIN;
	uint64_t t90 = 1776976818001336513LLU;

	t90 = (x457-((x458-x459)^x460));

	if (t90 != 18446743976385290493LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x461 = -1LL;
	int64_t x462 = -31618071034002226LL;
	static int32_t x463 = -161;
	volatile int64_t t91 = 42908451204464680LL;

	t91 = (x461-((x462-x463)^x464));

	if (t91 != -31618071034002065LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x465 = INT32_MIN;
	int8_t x466 = -1;
	uint32_t x467 = 0U;
	uint8_t x468 = 1U;
	volatile uint32_t t92 = 199795U;

	t92 = (x465-((x466-x467)^x468));

	if (t92 != 2147483650U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x473 = 26;
	volatile int8_t x474 = 1;
	int32_t x475 = -1;
	int8_t x476 = 3;
	int32_t t93 = 155;

	t93 = (x473-((x474-x475)^x476));

	if (t93 != 25) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x477 = 65197304LLU;
	int64_t x479 = INT64_MIN;
	int8_t x480 = INT8_MIN;
	volatile uint64_t t94 = 1761345934LLU;

	t94 = (x477-((x478-x479)^x480));

	if (t94 != 9223372036919972985LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x485 = INT32_MIN;
	int32_t x487 = -2;
	static int8_t x488 = -1;
	static int64_t t95 = 244LL;

	t95 = (x485-((x486-x487)^x488));

	if (t95 != -2217273252LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x490 = -1;
	static int64_t x491 = INT64_MIN;
	int8_t x492 = INT8_MAX;
	int64_t t96 = 107828636424LL;

	t96 = (x489-((x490-x491)^x492));

	if (t96 != -9223372036854775669LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x493 = UINT8_MAX;
	static uint8_t x495 = 41U;
	int8_t x496 = 3;
	uint32_t t97 = 6U;

	t97 = (x493-((x494-x495)^x496));

	if (t97 != 4288060318U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x497 = INT16_MIN;
	volatile int32_t x500 = INT32_MIN;
	int64_t t98 = 5826LL;

	t98 = (x497-((x498-x499)^x500));

	if (t98 != 2497189736334217946LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x501 = 2U;
	uint16_t x503 = UINT16_MAX;
	volatile uint16_t x504 = 7U;
	int64_t t99 = -264977255928037258LL;

	t99 = (x501-((x502-x503)^x504));

	if (t99 != -2825067783LL) { NG(); } else { ; }
	
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

