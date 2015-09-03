#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = 9182287370LL;
uint64_t t0 = 194770637LLU;
static uint64_t t1 = 216878215222LLU;
int64_t x17 = -1LL;
static int64_t x19 = -1LL;
volatile int64_t t3 = -5136LL;
volatile uint16_t x22 = 10U;
static int8_t x23 = INT8_MIN;
uint32_t x24 = UINT32_MAX;
uint64_t t4 = 370104362117564LLU;
static int8_t x26 = -1;
int8_t x27 = -1;
volatile int64_t t6 = 225090LL;
int32_t x45 = INT32_MAX;
uint16_t x46 = 10667U;
int16_t x47 = -13005;
int32_t x52 = -2368;
int8_t x54 = 37;
uint64_t x61 = UINT64_MAX;
uint32_t x64 = 69618673U;
volatile uint32_t x68 = 52231503U;
int32_t x69 = -1;
static volatile uint64_t x83 = UINT64_MAX;
volatile uint64_t t18 = UINT64_MAX;
int16_t x86 = -1;
uint64_t t19 = 140823026LLU;
uint64_t x93 = 767LLU;
uint16_t x114 = 2U;
uint16_t x115 = 99U;
volatile uint64_t t24 = 7131LLU;
int16_t x135 = INT16_MIN;
static uint64_t x162 = UINT64_MAX;
uint8_t x166 = UINT8_MAX;
static uint16_t x199 = 102U;
volatile int64_t x200 = 456462LL;
uint8_t x204 = UINT8_MAX;
volatile uint16_t x225 = 876U;
volatile int64_t t43 = -503501869071537959LL;
static uint64_t x235 = 4489072190700767LLU;
static int8_t x236 = INT8_MAX;
volatile uint16_t x240 = UINT16_MAX;
volatile int8_t x250 = -1;
int16_t x255 = -1;
static volatile int64_t t49 = INT64_MAX;
volatile int32_t x265 = INT32_MIN;
uint8_t x273 = 71U;
int64_t x275 = INT64_MAX;
static int16_t x281 = INT16_MIN;
uint64_t x284 = UINT64_MAX;
uint32_t x300 = 259984633U;
int32_t x305 = INT32_MAX;
uint16_t x308 = 16U;
volatile uint32_t t57 = 8708U;
int32_t x338 = INT32_MAX;
int8_t x340 = INT8_MIN;
int32_t t60 = -117406;
static int8_t x357 = INT8_MAX;
volatile uint64_t t62 = 2374LLU;
int8_t x364 = -1;
volatile uint64_t x366 = 8539999734044272LLU;
static int8_t x367 = INT8_MAX;
volatile uint64_t t64 = 1LLU;
int16_t x371 = -213;
uint8_t x375 = 15U;
int32_t t66 = -95;
uint64_t t67 = 471LLU;
int16_t x388 = -1946;
volatile int64_t t69 = 1145388LL;
static int16_t x389 = -2984;
volatile uint64_t t70 = 41138015LLU;
volatile int64_t x400 = -1LL;
int64_t t71 = -3584421374520LL;
uint64_t t75 = UINT64_MAX;
int64_t t77 = -24853LL;
uint32_t x433 = UINT32_MAX;
uint32_t x434 = 121617U;
int64_t x436 = INT64_MAX;
uint8_t x439 = 0U;
uint64_t x442 = 16386677LLU;
int32_t x443 = INT32_MAX;
int8_t x446 = INT8_MAX;
static uint64_t x457 = 146711LLU;
int32_t x458 = 600491;
int64_t x467 = INT64_MAX;
int32_t x469 = -6000667;
volatile int16_t x473 = INT16_MIN;
int32_t x474 = INT32_MIN;
int64_t x475 = -1LL;
uint8_t x479 = 40U;
volatile int64_t x481 = INT64_MAX;
static int16_t x482 = 1;
int64_t x484 = -4073596749887715LL;
int16_t x487 = 2;
int16_t x489 = -3;
uint64_t x497 = UINT64_MAX;
static volatile int64_t x507 = -1LL;
static volatile int64_t t97 = 101721890953474LL;


void f0(void) {
	int64_t x1 = -5673LL;
	uint64_t x3 = UINT64_MAX;
	static int32_t x4 = -310306;

	t0 = (x1|((x2*x3)%x4));

	if (t0 != 18446744073709545975LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint64_t x6 = UINT64_MAX;
	static volatile uint8_t x7 = UINT8_MAX;
	uint16_t x8 = 7356U;

	t1 = (x5|((x6*x7)%x8));

	if (t1 != 65535LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	int16_t x10 = INT16_MIN;
	uint32_t x11 = 2332361U;
	int8_t x12 = INT8_MIN;
	uint32_t t2 = UINT32_MAX;

	t2 = (x9|((x10*x11)%x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x18 = -9153;
	int32_t x20 = INT32_MIN;

	t3 = (x17|((x18*x19)%x20));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 530711624LLU;

	t4 = (x21|((x22*x23)%x24));

	if (t4 != 4294967112LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int16_t x28 = INT16_MIN;
	static volatile int32_t t5 = -22473;

	t5 = (x25|((x26*x27)%x28));

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 105U;
	int8_t x30 = INT8_MIN;
	int64_t x31 = 5937765242435LL;
	int32_t x32 = INT32_MIN;

	t6 = (x29|((x30*x31)%x32));

	if (t6 != -833298711LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	uint64_t x34 = 9LLU;
	static int32_t x35 = 131438;
	uint16_t x36 = 9U;
	volatile uint64_t t7 = 219632LLU;

	t7 = (x33|((x34*x35)%x36));

	if (t7 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x41 = 0;
	int16_t x42 = -1;
	int32_t x43 = 514650983;
	uint16_t x44 = 1U;
	volatile int32_t t8 = 3682;

	t8 = (x41|((x42*x43)%x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x48 = 3290LLU;
	uint64_t t9 = 11601658132LLU;

	t9 = (x45|((x46*x47)%x48));

	if (t9 != 2147483647LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	int16_t x50 = INT16_MAX;
	volatile int16_t x51 = 16325;
	int64_t t10 = -19178LL;

	t10 = (x49|((x50*x51)%x52));

	if (t10 != -9223372036854773893LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 8072LLU;
	int32_t x55 = -1;
	int64_t x56 = -1LL;
	uint64_t t11 = 23799182614259133LLU;

	t11 = (x53|((x54*x55)%x56));

	if (t11 != 8072LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x57 = 1062445299LL;
	volatile uint16_t x58 = 43U;
	int8_t x59 = -1;
	int16_t x60 = INT16_MIN;
	int64_t t12 = 3LL;

	t12 = (x57|((x58*x59)%x60));

	if (t12 != -9LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x62 = UINT32_MAX;
	static volatile int64_t x63 = 1392LL;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = (x61|((x62*x63)%x64));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = 0LL;
	int16_t x66 = INT16_MIN;
	int8_t x67 = 1;
	int64_t t14 = 204LL;

	t14 = (x65|((x66*x67)%x68));

	if (t14 != 11951282LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x70 = UINT16_MAX;
	uint32_t x71 = 281U;
	volatile int8_t x72 = -1;
	static uint32_t t15 = UINT32_MAX;

	t15 = (x69|((x70*x71)%x72));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x73 = INT16_MAX;
	int16_t x74 = INT16_MIN;
	static int16_t x75 = -1;
	uint64_t x76 = 282539009748LLU;
	volatile uint64_t t16 = 3363744150636026833LLU;

	t16 = (x73|((x74*x75)%x76));

	if (t16 != 65535LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = 227;
	uint8_t x78 = 14U;
	uint8_t x79 = 13U;
	static uint16_t x80 = 1049U;
	volatile int32_t t17 = -3167337;

	t17 = (x77|((x78*x79)%x80));

	if (t17 != 247) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MAX;
	uint32_t x82 = UINT32_MAX;
	int8_t x84 = -20;

	t18 = (x81|((x82*x83)%x84));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x85 = INT8_MIN;
	volatile uint64_t x87 = 169LLU;
	uint32_t x88 = 29U;

	t19 = (x85|((x86*x87)%x88));

	if (t19 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x94 = INT32_MAX;
	volatile int32_t x95 = -1;
	static int64_t x96 = -1LL;
	static uint64_t t20 = 1923475565054LLU;

	t20 = (x93|((x94*x95)%x96));

	if (t20 != 767LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x105 = UINT32_MAX;
	int16_t x106 = INT16_MAX;
	int16_t x107 = 175;
	uint16_t x108 = 5203U;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x105|((x106*x107)%x108));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = -1;
	uint32_t x116 = UINT32_MAX;
	uint32_t t22 = UINT32_MAX;

	t22 = (x113|((x114*x115)%x116));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x117 = UINT32_MAX;
	int64_t x118 = -13129LL;
	int16_t x119 = INT16_MIN;
	volatile int8_t x120 = INT8_MIN;
	int64_t t23 = 930LL;

	t23 = (x117|((x118*x119)%x120));

	if (t23 != 4294967295LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = INT16_MIN;
	uint64_t x122 = 17442534171391LLU;
	int32_t x123 = 865;
	uint64_t x124 = 39332739060863670LLU;

	t24 = (x121|((x122*x123)%x124));

	if (t24 != 18446744073709535135LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x125 = INT64_MAX;
	static uint16_t x126 = UINT16_MAX;
	int64_t x127 = -106567LL;
	uint64_t x128 = UINT64_MAX;
	uint64_t t25 = UINT64_MAX;

	t25 = (x125|((x126*x127)%x128));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x129 = -1;
	uint8_t x130 = 0U;
	uint32_t x131 = UINT32_MAX;
	static int16_t x132 = INT16_MIN;
	static uint32_t t26 = UINT32_MAX;

	t26 = (x129|((x130*x131)%x132));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x133 = UINT8_MAX;
	volatile int8_t x134 = -15;
	volatile int64_t x136 = INT64_MAX;
	volatile int64_t t27 = 817LL;

	t27 = (x133|((x134*x135)%x136));

	if (t27 != 491775LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = INT8_MIN;
	uint64_t x142 = 436660LLU;
	static uint32_t x143 = UINT32_MAX;
	uint8_t x144 = UINT8_MAX;
	uint64_t t28 = 868754765041LLU;

	t28 = (x141|((x142*x143)%x144));

	if (t28 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x145 = 1;
	int16_t x146 = INT16_MIN;
	uint64_t x147 = 282798370LLU;
	int32_t x148 = -130631;
	uint64_t t29 = 39768463LLU;

	t29 = (x145|((x146*x147)%x148));

	if (t29 != 18446734806972563457LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x149 = UINT32_MAX;
	int64_t x150 = -1LL;
	int32_t x151 = INT32_MIN;
	volatile uint32_t x152 = UINT32_MAX;
	int64_t t30 = -2LL;

	t30 = (x149|((x150*x151)%x152));

	if (t30 != 4294967295LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x153 = INT16_MIN;
	uint8_t x154 = 34U;
	uint32_t x155 = UINT32_MAX;
	int16_t x156 = -1;
	volatile uint32_t t31 = 11U;

	t31 = (x153|((x154*x155)%x156));

	if (t31 != 4294967262U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x161 = INT16_MIN;
	volatile int32_t x163 = -1;
	uint64_t x164 = 1834272094LLU;
	static volatile uint64_t t32 = 2919621LLU;

	t32 = (x161|((x162*x163)%x164));

	if (t32 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x165 = -1047LL;
	int8_t x167 = INT8_MIN;
	uint32_t x168 = 1530470U;
	int64_t t33 = 6913LL;

	t33 = (x165|((x166*x167)%x168));

	if (t33 != -3LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x169 = -1LL;
	static uint64_t x170 = 609136145LLU;
	uint64_t x171 = 13573753189676LLU;
	volatile int16_t x172 = INT16_MIN;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (x169|((x170*x171)%x172));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x185 = -1LL;
	int8_t x186 = 9;
	volatile int64_t x187 = 563409617LL;
	uint32_t x188 = 1324373337U;
	int64_t t35 = 31663LL;

	t35 = (x185|((x186*x187)%x188));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x189 = -1;
	uint32_t x190 = 28U;
	static uint8_t x191 = 112U;
	int64_t x192 = INT64_MIN;
	int64_t t36 = -54447454LL;

	t36 = (x189|((x190*x191)%x192));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x193 = UINT32_MAX;
	int32_t x194 = 2201;
	int16_t x195 = -252;
	volatile int16_t x196 = 15186;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = (x193|((x194*x195)%x196));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x197 = -16326405666212LL;
	volatile int8_t x198 = INT8_MIN;
	int64_t t38 = 49LL;

	t38 = (x197|((x198*x199)%x200));

	if (t38 != -12452LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x201 = INT32_MAX;
	static uint64_t x202 = 2933032035LLU;
	uint8_t x203 = 3U;
	volatile uint64_t t39 = 366177919510601465LLU;

	t39 = (x201|((x202*x203)%x204));

	if (t39 != 2147483647LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x209 = INT16_MIN;
	static volatile uint32_t x210 = UINT32_MAX;
	int32_t x211 = 346;
	uint8_t x212 = 1U;
	volatile uint32_t t40 = 2U;

	t40 = (x209|((x210*x211)%x212));

	if (t40 != 4294934528U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x213 = 14818162700LL;
	int16_t x214 = INT16_MIN;
	volatile int64_t x215 = -1LL;
	volatile int32_t x216 = INT32_MAX;
	int64_t t41 = 1300053776064394LL;

	t41 = (x213|((x214*x215)%x216));

	if (t41 != 14818195468LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x217 = -465395526105LL;
	volatile int64_t x218 = 563LL;
	volatile uint64_t x219 = 4355579898830750679LLU;
	int32_t x220 = -1;
	volatile uint64_t t42 = 245839LLU;

	t42 = (x217|((x218*x219)%x220));

	if (t42 != 18446743659913934839LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x226 = -1LL;
	volatile uint8_t x227 = UINT8_MAX;
	volatile int32_t x228 = INT32_MAX;

	t43 = (x225|((x226*x227)%x228));

	if (t43 != -147LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x233 = -1LL;
	int64_t x234 = INT64_MIN;
	static volatile uint64_t t44 = UINT64_MAX;

	t44 = (x233|((x234*x235)%x236));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x237 = UINT8_MAX;
	uint32_t x238 = 267U;
	static int32_t x239 = -1;
	static uint32_t t45 = 46U;

	t45 = (x237|((x238*x239)%x240));

	if (t45 != 65279U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x241 = -29;
	static int64_t x242 = 846LL;
	uint32_t x243 = 289489142U;
	int32_t x244 = -1;
	int64_t t46 = 3LL;

	t46 = (x241|((x242*x243)%x244));

	if (t46 != -29LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x245 = UINT32_MAX;
	static volatile int8_t x246 = INT8_MAX;
	int32_t x247 = -1;
	int64_t x248 = INT64_MIN;
	int64_t t47 = -1191239085411758648LL;

	t47 = (x245|((x246*x247)%x248));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x249 = 5636U;
	int8_t x251 = -1;
	int16_t x252 = INT16_MAX;
	volatile int32_t t48 = -77292359;

	t48 = (x249|((x250*x251)%x252));

	if (t48 != 5637) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x253 = INT64_MAX;
	volatile int32_t x254 = -1;
	int8_t x256 = 13;

	t49 = (x253|((x254*x255)%x256));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x266 = UINT64_MAX;
	int8_t x267 = 10;
	uint16_t x268 = 9U;
	static uint64_t t50 = 5LLU;

	t50 = (x265|((x266*x267)%x268));

	if (t50 != 18446744071562067974LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x269 = INT16_MIN;
	uint64_t x270 = UINT64_MAX;
	static int8_t x271 = 57;
	int64_t x272 = INT64_MIN;
	volatile uint64_t t51 = 71LLU;

	t51 = (x269|((x270*x271)%x272));

	if (t51 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x274 = -1;
	uint64_t x276 = 1560640700564273503LLU;
	volatile uint64_t t52 = 854097199LLU;

	t52 = (x273|((x274*x275)%x276));

	if (t52 != 1420168534033408359LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x277 = -1358;
	volatile int64_t x278 = -1LL;
	uint32_t x279 = 52699322U;
	volatile uint8_t x280 = UINT8_MAX;
	static int64_t t53 = -1018LL;

	t53 = (x277|((x278*x279)%x280));

	if (t53 != -2LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x282 = 0U;
	int8_t x283 = -1;
	uint64_t t54 = 49326535873164LLU;

	t54 = (x281|((x282*x283)%x284));

	if (t54 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x297 = UINT32_MAX;
	uint64_t x298 = 16795LLU;
	volatile int32_t x299 = -1;
	static volatile uint64_t t55 = 20062216LLU;

	t55 = (x297|((x298*x299)%x300));

	if (t55 != 4294967295LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MIN;
	int32_t t56 = INT32_MAX;

	t56 = (x305|((x306*x307)%x308));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x321 = INT16_MIN;
	int8_t x322 = INT8_MIN;
	uint32_t x323 = UINT32_MAX;
	int16_t x324 = -1;

	t57 = (x321|((x322*x323)%x324));

	if (t57 != 4294934656U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x329 = UINT16_MAX;
	int8_t x330 = INT8_MIN;
	int16_t x331 = 503;
	volatile int64_t x332 = -3725197601795LL;
	int64_t t58 = -6150099LL;

	t58 = (x329|((x330*x331)%x332));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x337 = INT64_MIN;
	uint32_t x339 = UINT32_MAX;
	static volatile int64_t t59 = 373LL;

	t59 = (x337|((x338*x339)%x340));

	if (t59 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x341 = 90U;
	static int16_t x342 = 0;
	uint8_t x343 = 10U;
	uint16_t x344 = UINT16_MAX;

	t60 = (x341|((x342*x343)%x344));

	if (t60 != 90) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x349 = INT8_MIN;
	uint8_t x350 = UINT8_MAX;
	int8_t x351 = -1;
	static int32_t x352 = -1;
	int32_t t61 = 80588871;

	t61 = (x349|((x350*x351)%x352));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x358 = 12747482431LLU;
	volatile uint64_t x359 = 33223087495652LLU;
	volatile int32_t x360 = INT32_MIN;

	t62 = (x357|((x358*x359)%x360));

	if (t62 != 10373710175772889983LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x361 = -1;
	uint16_t x362 = UINT16_MAX;
	uint8_t x363 = 13U;
	int32_t t63 = -25507254;

	t63 = (x361|((x362*x363)%x364));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x365 = INT16_MIN;
	int64_t x368 = INT64_MAX;

	t64 = (x365|((x366*x367)%x368));

	if (t64 != 18446744073709527440LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x369 = -44;
	int16_t x370 = -1;
	uint64_t x372 = UINT64_MAX;
	static uint64_t t65 = 50851031090469436LLU;

	t65 = (x369|((x370*x371)%x372));

	if (t65 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x373 = 1;
	uint8_t x374 = 111U;
	int8_t x376 = INT8_MIN;

	t66 = (x373|((x374*x375)%x376));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x377 = 3147454094939LLU;
	volatile uint8_t x378 = 22U;
	uint64_t x379 = 113216490LLU;
	volatile int8_t x380 = INT8_MIN;

	t67 = (x377|((x378*x379)%x380));

	if (t67 != 3147522514527LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x381 = UINT16_MAX;
	int8_t x382 = 0;
	int64_t x383 = 9138852961794621LL;
	int8_t x384 = -44;
	static int64_t t68 = 1222684995081016973LL;

	t68 = (x381|((x382*x383)%x384));

	if (t68 != 65535LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x385 = 1U;
	volatile int32_t x386 = 3083;
	static volatile int64_t x387 = 1LL;

	t69 = (x385|((x386*x387)%x388));

	if (t69 != 1137LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x390 = UINT16_MAX;
	static volatile uint64_t x391 = UINT64_MAX;
	static volatile int8_t x392 = INT8_MIN;

	t70 = (x389|((x390*x391)%x392));

	if (t70 != 18446744073709548633LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x397 = -1;
	volatile int16_t x398 = -1;
	uint16_t x399 = UINT16_MAX;

	t71 = (x397|((x398*x399)%x400));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x401 = 5458U;
	volatile uint8_t x402 = 95U;
	int8_t x403 = INT8_MIN;
	static int64_t x404 = -101542793LL;
	volatile int64_t t72 = 252692709136LL;

	t72 = (x401|((x402*x403)%x404));

	if (t72 != -10798LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x405 = UINT8_MAX;
	int16_t x406 = -1;
	int64_t x407 = -3019923LL;
	uint16_t x408 = 45U;
	int64_t t73 = 268744407577LL;

	t73 = (x405|((x406*x407)%x408));

	if (t73 != 255LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x409 = INT64_MAX;
	volatile uint64_t x410 = 465582LLU;
	uint64_t x411 = UINT64_MAX;
	int64_t x412 = -1LL;
	uint64_t t74 = UINT64_MAX;

	t74 = (x409|((x410*x411)%x412));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x413 = UINT64_MAX;
	uint8_t x414 = 29U;
	volatile int8_t x415 = INT8_MAX;
	uint64_t x416 = 3589630529542910LLU;

	t75 = (x413|((x414*x415)%x416));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x421 = -1;
	int32_t x422 = -943;
	int64_t x423 = -1LL;
	uint64_t x424 = 104642LLU;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x421|((x422*x423)%x424));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x425 = -1LL;
	static uint32_t x426 = UINT32_MAX;
	int8_t x427 = -1;
	int16_t x428 = INT16_MIN;

	t77 = (x425|((x426*x427)%x428));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x435 = 6046U;
	static volatile int64_t t78 = 0LL;

	t78 = (x433|((x434*x435)%x436));

	if (t78 != 4294967295LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x437 = 233U;
	volatile uint8_t x438 = UINT8_MAX;
	volatile uint16_t x440 = 805U;
	volatile int32_t t79 = 79;

	t79 = (x437|((x438*x439)%x440));

	if (t79 != 233) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x441 = UINT8_MAX;
	static uint8_t x444 = UINT8_MAX;
	uint64_t t80 = 17349289477173664LLU;

	t80 = (x441|((x442*x443)%x444));

	if (t80 != 255LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x445 = INT16_MAX;
	static int64_t x447 = -1LL;
	int32_t x448 = -1;
	static volatile int64_t t81 = 7909521679063LL;

	t81 = (x445|((x446*x447)%x448));

	if (t81 != 32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x449 = INT16_MAX;
	int32_t x450 = -1;
	static int32_t x451 = INT32_MAX;
	volatile int32_t x452 = -1227;
	static volatile int32_t t82 = -687511;

	t82 = (x449|((x450*x451)%x452));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x453 = 4U;
	int8_t x454 = INT8_MAX;
	int8_t x455 = 0;
	int32_t x456 = INT32_MAX;
	int32_t t83 = 9;

	t83 = (x453|((x454*x455)%x456));

	if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x459 = INT8_MIN;
	int32_t x460 = -4406;
	static uint64_t t84 = 3894114052468LLU;

	t84 = (x457|((x458*x459)%x460));

	if (t84 != 18446744073709551455LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x461 = -154275;
	static int8_t x462 = INT8_MIN;
	static int16_t x463 = -1;
	uint8_t x464 = 14U;
	static volatile int32_t t85 = -1;

	t85 = (x461|((x462*x463)%x464));

	if (t85 != -154273) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x465 = -1;
	uint8_t x466 = 0U;
	int16_t x468 = INT16_MIN;
	int64_t t86 = -419488906LL;

	t86 = (x465|((x466*x467)%x468));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x470 = UINT8_MAX;
	int64_t x471 = -18481243LL;
	int32_t x472 = INT32_MIN;
	volatile int64_t t87 = -1860LL;

	t87 = (x469|((x470*x471)%x472));

	if (t87 != -4329473LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x476 = INT64_MIN;
	int64_t t88 = -3865521941091LL;

	t88 = (x473|((x474*x475)%x476));

	if (t88 != -32768LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x477 = INT8_MIN;
	int8_t x478 = INT8_MAX;
	int64_t x480 = 40LL;
	static int64_t t89 = 1557881490497186LL;

	t89 = (x477|((x478*x479)%x480));

	if (t89 != -128LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x483 = INT64_MAX;
	volatile int64_t t90 = INT64_MAX;

	t90 = (x481|((x482*x483)%x484));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x485 = 2835U;
	static int64_t x486 = 1LL;
	int8_t x488 = INT8_MIN;
	int64_t t91 = 1938082503785989009LL;

	t91 = (x485|((x486*x487)%x488));

	if (t91 != 2835LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x490 = -1;
	static uint32_t x491 = 39U;
	static uint8_t x492 = UINT8_MAX;
	volatile uint32_t t92 = 18157U;

	t92 = (x489|((x490*x491)%x492));

	if (t92 != 4294967293U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x493 = 1515152205517497LL;
	volatile uint8_t x494 = 100U;
	volatile int8_t x495 = INT8_MIN;
	int32_t x496 = -1;
	volatile int64_t t93 = 10573802906699494LL;

	t93 = (x493|((x494*x495)%x496));

	if (t93 != 1515152205517497LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x498 = -1653;
	uint64_t x499 = 797736897LLU;
	int32_t x500 = -16;
	static uint64_t t94 = UINT64_MAX;

	t94 = (x497|((x498*x499)%x500));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x501 = -1;
	static uint64_t x502 = UINT64_MAX;
	int16_t x503 = 19;
	uint32_t x504 = 911U;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (x501|((x502*x503)%x504));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x505 = INT8_MIN;
	int64_t x506 = -1LL;
	uint8_t x508 = UINT8_MAX;
	volatile int64_t t96 = 111LL;

	t96 = (x505|((x506*x507)%x508));

	if (t96 != -127LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x509 = -1;
	int64_t x510 = 3977370LL;
	static volatile uint16_t x511 = 74U;
	static uint16_t x512 = 662U;

	t97 = (x509|((x510*x511)%x512));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x513 = 2U;
	int16_t x514 = 15;
	int8_t x515 = INT8_MIN;
	volatile uint8_t x516 = UINT8_MAX;
	int32_t t98 = -1849062;

	t98 = (x513|((x514*x515)%x516));

	if (t98 != -133) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x517 = UINT8_MAX;
	static uint16_t x518 = 75U;
	int8_t x519 = INT8_MIN;
	int8_t x520 = INT8_MIN;
	volatile int32_t t99 = 18;

	t99 = (x517|((x518*x519)%x520));

	if (t99 != 255) { NG(); } else { ; }
	
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

