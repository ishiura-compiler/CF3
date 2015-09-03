#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = -1;
static int16_t x10 = -1;
volatile int32_t x17 = -1;
int32_t x26 = -1;
uint32_t x28 = 177681994U;
uint32_t t6 = 5189U;
int16_t x29 = INT16_MIN;
int64_t x34 = INT64_MAX;
int64_t x35 = INT64_MAX;
volatile uint32_t x36 = 1505405U;
uint16_t x38 = 98U;
uint64_t x48 = 2426044630626LLU;
int16_t x53 = -44;
int16_t x59 = -1;
volatile int64_t x60 = INT64_MIN;
static int64_t x68 = -1LL;
int32_t x72 = 78395;
int16_t x73 = -649;
static uint16_t x96 = 250U;
uint32_t x100 = 84137U;
uint64_t t25 = 200567806634LLU;
int64_t x105 = INT64_MIN;
static volatile uint64_t t26 = 6649483294596LLU;
int32_t x112 = -305;
volatile uint64_t t27 = UINT64_MAX;
int64_t t29 = -23LL;
static int32_t x126 = INT32_MIN;
int16_t x127 = -1;
static int32_t x128 = 711;
int16_t x130 = 1;
int64_t t32 = -3080500594711LL;
uint32_t x133 = 2967U;
int32_t x134 = -4;
uint16_t x142 = UINT16_MAX;
volatile uint32_t x145 = UINT32_MAX;
uint32_t t36 = 123U;
uint32_t x151 = 138045U;
volatile uint64_t t37 = 3466033121600254988LLU;
int64_t x156 = -1LL;
uint32_t x162 = 49431518U;
int64_t x164 = 268497522573720LL;
int8_t x165 = 22;
volatile uint64_t t45 = 41918444295381704LLU;
static int8_t x186 = INT8_MIN;
volatile uint16_t x187 = UINT16_MAX;
static int64_t x188 = INT64_MIN;
int8_t x189 = INT8_MAX;
uint8_t x198 = 126U;
int8_t x211 = INT8_MAX;
static int32_t x218 = INT32_MIN;
static uint64_t t55 = 33992420206361LLU;
int8_t x225 = 0;
int32_t x231 = -1;
volatile int64_t t59 = 81866377392LL;
static uint16_t x241 = 3474U;
int64_t x242 = 2146592588133366305LL;
int32_t x244 = INT32_MIN;
static int32_t x249 = INT32_MIN;
int8_t x250 = INT8_MIN;
volatile int64_t x254 = INT64_MAX;
volatile int8_t x258 = INT8_MIN;
int32_t x260 = INT32_MAX;
int32_t x261 = INT32_MIN;
uint64_t x273 = 20373LLU;
static int8_t x278 = INT8_MIN;
volatile int32_t x300 = INT32_MAX;
uint8_t x303 = 26U;
int8_t x304 = INT8_MIN;
int32_t t74 = INT32_MIN;
int64_t x306 = 4146634446483160382LL;
uint64_t x313 = 472385LLU;
uint64_t x324 = 386270658510942050LLU;
volatile uint64_t t78 = 47LLU;
int64_t x327 = 2LL;
int64_t x329 = INT64_MAX;
int64_t x335 = 182384836LL;
volatile int64_t t81 = 10730238135647LL;
int64_t t83 = 12140307LL;
int64_t t84 = -23LL;
static uint64_t x349 = UINT64_MAX;
int8_t x358 = INT8_MIN;
static volatile uint16_t x360 = 115U;
static volatile int64_t x364 = INT64_MIN;
int8_t x365 = INT8_MIN;
static int8_t x368 = INT8_MAX;
static int16_t x370 = INT16_MIN;
volatile int64_t t90 = 3935754036499197959LL;
int8_t x384 = -1;
int64_t t92 = -982675084938194LL;
static uint8_t x396 = 3U;
int8_t x402 = -1;
int64_t x405 = -1LL;
int8_t x406 = INT8_MIN;
int8_t x412 = INT8_MIN;
uint64_t x415 = 1309LLU;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int16_t x2 = -1;
	volatile int32_t x3 = INT32_MAX;
	int32_t x4 = 10027074;
	volatile int32_t t0 = -7365;

	t0 = ((x1&x2)|(x3/x4));

	if (t0 != -42) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	static int8_t x6 = INT8_MIN;
	int8_t x8 = INT8_MAX;
	int32_t t1 = INT32_MIN;

	t1 = ((x5&x6)|(x7/x8));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 11U;
	uint64_t x11 = 325373845515080LLU;
	int64_t x12 = -1LL;
	volatile uint64_t t2 = 3353725858635225107LLU;

	t2 = ((x9&x10)|(x11/x12));

	if (t2 != 11LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 1;
	uint8_t x14 = 2U;
	uint64_t x15 = UINT64_MAX;
	int64_t x16 = INT64_MIN;
	static uint64_t t3 = 1LLU;

	t3 = ((x13&x14)|(x15/x16));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 4134495U;
	int32_t x19 = -1;
	int64_t x20 = INT64_MAX;
	static volatile int64_t t4 = 3464181050241818LL;

	t4 = ((x17&x18)|(x19/x20));

	if (t4 != 4134495LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int32_t x22 = INT32_MIN;
	int64_t x23 = INT64_MIN;
	int16_t x24 = INT16_MIN;
	volatile int64_t t5 = 12082026LL;

	t5 = ((x21&x22)|(x23/x24));

	if (t5 != -2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	volatile uint32_t x27 = 3839U;

	t6 = ((x25&x26)|(x27/x28));

	if (t6 != 65535U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x30 = 19544U;
	static int64_t x31 = INT64_MIN;
	static uint32_t x32 = 970U;
	static volatile int64_t t7 = -15484002539051828LL;

	t7 = ((x29&x30)|(x31/x32));

	if (t7 != -9508630965829665LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	int64_t t8 = -1600LL;

	t8 = ((x33&x34)|(x35/x36));

	if (t8 != 9223372036854767005LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 170205904LL;
	uint32_t x39 = 5U;
	int8_t x40 = -1;
	volatile int64_t t9 = 7971425770LL;

	t9 = ((x37&x38)|(x39/x40));

	if (t9 != 64LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MAX;
	int64_t x42 = -769771139LL;
	uint32_t x43 = UINT32_MAX;
	int32_t x44 = INT32_MIN;
	static int64_t t10 = 564091198LL;

	t10 = ((x41&x42)|(x43/x44));

	if (t10 != 9223372036085004669LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	static int64_t x46 = INT64_MAX;
	int8_t x47 = 0;
	volatile uint64_t t11 = 2328073343LLU;

	t11 = ((x45&x46)|(x47/x48));

	if (t11 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -1;
	static int64_t x50 = INT64_MIN;
	int8_t x51 = INT8_MIN;
	int8_t x52 = -1;
	static volatile int64_t t12 = -2154571172LL;

	t12 = ((x49&x50)|(x51/x52));

	if (t12 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x54 = UINT8_MAX;
	int8_t x55 = 19;
	static int8_t x56 = -1;
	int32_t t13 = -807062;

	t13 = ((x53&x54)|(x55/x56));

	if (t13 != -3) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 4;
	int32_t x58 = -1;
	int64_t t14 = -964626157654LL;

	t14 = ((x57&x58)|(x59/x60));

	if (t14 != 4LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	volatile int16_t x62 = -189;
	static uint8_t x63 = UINT8_MAX;
	uint64_t x64 = UINT64_MAX;
	uint64_t t15 = 475715477366289LLU;

	t15 = ((x61&x62)|(x63/x64));

	if (t15 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 23462768LLU;
	int16_t x66 = INT16_MIN;
	int16_t x67 = INT16_MIN;
	static uint64_t t16 = 27453509245302092LLU;

	t16 = ((x65&x66)|(x67/x68));

	if (t16 != 23494656LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	int64_t x70 = INT64_MIN;
	int64_t x71 = INT64_MIN;
	static volatile int64_t t17 = 23002541303LL;

	t17 = ((x69&x70)|(x71/x72));

	if (t17 != -117652554842206LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = 190834206U;
	static int16_t x75 = -1;
	int32_t x76 = INT32_MAX;
	volatile uint32_t t18 = 0U;

	t18 = ((x73&x74)|(x75/x76));

	if (t18 != 190833686U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -2;
	int8_t x78 = INT8_MIN;
	int8_t x79 = INT8_MAX;
	static volatile int32_t x80 = -1;
	int32_t t19 = -4398303;

	t19 = ((x77&x78)|(x79/x80));

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	uint64_t x82 = UINT64_MAX;
	static uint8_t x83 = 39U;
	int32_t x84 = INT32_MIN;
	uint64_t t20 = UINT64_MAX;

	t20 = ((x81&x82)|(x83/x84));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	static volatile uint16_t x86 = 3129U;
	static uint32_t x87 = UINT32_MAX;
	volatile int64_t x88 = INT64_MAX;
	int64_t t21 = 126759232LL;

	t21 = ((x85&x86)|(x87/x88));

	if (t21 != 3129LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	int64_t x90 = 55092LL;
	uint64_t x91 = 40179369714LLU;
	static int32_t x92 = INT32_MAX;
	static uint64_t t22 = 10608LLU;

	t22 = ((x89&x90)|(x91/x92));

	if (t22 != 55058LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -1;
	int8_t x94 = -1;
	int64_t x95 = -355582159276LL;
	volatile int64_t t23 = -3526132160375788LL;

	t23 = ((x93&x94)|(x95/x96));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	int64_t x98 = 1LL;
	volatile int32_t x99 = -1;
	int64_t t24 = 4122922LL;

	t24 = ((x97&x98)|(x99/x100));

	if (t24 != 51047LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	static uint8_t x102 = 1U;
	int8_t x103 = INT8_MIN;
	uint64_t x104 = UINT64_MAX;

	t25 = ((x101&x102)|(x103/x104));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x106 = 266620976725LLU;
	int8_t x107 = INT8_MAX;
	static int32_t x108 = -1081;

	t26 = ((x105&x106)|(x107/x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -1;
	static int64_t x110 = -1LL;
	volatile uint64_t x111 = 120LLU;

	t27 = ((x109&x110)|(x111/x112));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 0;
	static int8_t x114 = 1;
	int32_t x115 = 311;
	static uint32_t x116 = UINT32_MAX;
	volatile uint32_t t28 = 47U;

	t28 = ((x113&x114)|(x115/x116));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	int16_t x118 = INT16_MIN;
	int64_t x119 = INT64_MAX;
	static int32_t x120 = INT32_MIN;

	t29 = ((x117&x118)|(x119/x120));

	if (t29 != -4294934527LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -1;
	volatile uint16_t x122 = 13073U;
	volatile int32_t x123 = INT32_MIN;
	int64_t x124 = INT64_MAX;
	static int64_t t30 = -12LL;

	t30 = ((x121&x122)|(x123/x124));

	if (t30 != 13073LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 31U;
	volatile int32_t t31 = 1;

	t31 = ((x125&x126)|(x127/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MAX;
	uint8_t x131 = 28U;
	volatile int64_t x132 = INT64_MIN;

	t32 = ((x129&x130)|(x131/x132));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x135 = -12;
	static int8_t x136 = INT8_MIN;
	uint32_t t33 = 783220U;

	t33 = ((x133&x134)|(x135/x136));

	if (t33 != 2964U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 1375LL;
	static uint32_t x138 = 1U;
	uint32_t x139 = UINT32_MAX;
	int32_t x140 = -3522736;
	volatile int64_t t34 = 164LL;

	t34 = ((x137&x138)|(x139/x140));

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 4018U;
	int16_t x143 = INT16_MAX;
	uint64_t x144 = 13468LLU;
	uint64_t t35 = 135982010162878LLU;

	t35 = ((x141&x142)|(x143/x144));

	if (t35 != 4018LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = -772;
	static volatile int32_t x147 = -1;
	int16_t x148 = INT16_MAX;

	t36 = ((x145&x146)|(x147/x148));

	if (t36 != 4294966524U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 106U;
	volatile uint64_t x150 = UINT64_MAX;
	uint8_t x152 = UINT8_MAX;

	t37 = ((x149&x150)|(x151/x152));

	if (t37 != 639LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	int32_t x154 = INT32_MIN;
	static volatile int32_t x155 = 3198;
	volatile int64_t t38 = -4LL;

	t38 = ((x153&x154)|(x155/x156));

	if (t38 != -3198LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = INT16_MAX;
	int64_t x158 = INT64_MIN;
	int16_t x159 = 4843;
	static int16_t x160 = 45;
	volatile int64_t t39 = -7884170LL;

	t39 = ((x157&x158)|(x159/x160));

	if (t39 != 107LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = INT8_MIN;
	volatile int32_t x163 = INT32_MIN;
	volatile int64_t t40 = -109162444479143048LL;

	t40 = ((x161&x162)|(x163/x164));

	if (t40 != 49431424LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = 3319;
	static int8_t x167 = INT8_MAX;
	uint16_t x168 = 1372U;
	int32_t t41 = 993944;

	t41 = ((x165&x166)|(x167/x168));

	if (t41 != 22) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x169 = -1;
	int32_t x170 = -1360115;
	int64_t x171 = -221688LL;
	static int64_t x172 = INT64_MIN;
	int64_t t42 = 6271095537849500LL;

	t42 = ((x169&x170)|(x171/x172));

	if (t42 != -1360115LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MIN;
	volatile uint32_t x174 = 765424812U;
	static volatile int16_t x175 = -1;
	int64_t x176 = INT64_MIN;
	int64_t t43 = -3686644424539LL;

	t43 = ((x173&x174)|(x175/x176));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MAX;
	int8_t x178 = INT8_MIN;
	volatile int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MAX;
	int32_t t44 = 1;

	t44 = ((x177&x178)|(x179/x180));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x181 = 10;
	int64_t x182 = INT64_MAX;
	uint64_t x183 = 2014830769LLU;
	volatile uint32_t x184 = UINT32_MAX;

	t45 = ((x181&x182)|(x183/x184));

	if (t45 != 10LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -6;
	volatile int64_t t46 = -73421267LL;

	t46 = ((x185&x186)|(x187/x188));

	if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = INT8_MIN;
	uint8_t x191 = 46U;
	int32_t x192 = -1;
	volatile int32_t t47 = -53952;

	t47 = ((x189&x190)|(x191/x192));

	if (t47 != -46) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x193 = 149U;
	volatile int64_t x194 = INT64_MAX;
	static int16_t x195 = INT16_MIN;
	static int8_t x196 = INT8_MAX;
	int64_t t48 = -767292601114809323LL;

	t48 = ((x193&x194)|(x195/x196));

	if (t48 != -257LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 15U;
	uint8_t x199 = UINT8_MAX;
	int8_t x200 = -1;
	int32_t t49 = -162;

	t49 = ((x197&x198)|(x199/x200));

	if (t49 != -241) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 4391663U;
	int32_t x202 = -1;
	volatile uint32_t x203 = 3905090U;
	int16_t x204 = INT16_MIN;
	volatile uint32_t t50 = 1214U;

	t50 = ((x201&x202)|(x203/x204));

	if (t50 != 4391663U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	volatile int16_t x206 = -1;
	uint64_t x207 = 185689559950552759LLU;
	int32_t x208 = INT32_MAX;
	static uint64_t t51 = 8384931607210381LLU;

	t51 = ((x205&x206)|(x207/x208));

	if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	volatile int32_t x210 = -1;
	int64_t x212 = INT64_MAX;
	static volatile int64_t t52 = 985611416011LL;

	t52 = ((x209&x210)|(x211/x212));

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	int8_t x214 = INT8_MIN;
	static uint8_t x215 = UINT8_MAX;
	static int32_t x216 = -1;
	static volatile int32_t t53 = -6299;

	t53 = ((x213&x214)|(x215/x216));

	if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	int32_t x219 = 12884158;
	int16_t x220 = -1;
	volatile uint32_t t54 = 262026301U;

	t54 = ((x217&x218)|(x219/x220));

	if (t54 != 4282083138U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	int64_t x222 = INT64_MIN;
	int32_t x223 = -1;
	int8_t x224 = -1;

	t55 = ((x221&x222)|(x223/x224));

	if (t55 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x226 = 790457545U;
	int16_t x227 = INT16_MAX;
	int32_t x228 = INT32_MAX;
	uint32_t t56 = 54U;

	t56 = ((x225&x226)|(x227/x228));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	uint8_t x230 = 72U;
	volatile int64_t x232 = INT64_MIN;
	volatile int64_t t57 = 4054396179617624LL;

	t57 = ((x229&x230)|(x231/x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 63259;
	static int16_t x234 = -95;
	int8_t x235 = -3;
	static volatile int16_t x236 = 835;
	int32_t t58 = 188613;

	t58 = ((x233&x234)|(x235/x236));

	if (t58 != 63233) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = UINT8_MAX;
	int64_t x238 = 7325873169635LL;
	uint8_t x239 = 14U;
	int8_t x240 = 49;

	t59 = ((x237&x238)|(x239/x240));

	if (t59 != 227LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x243 = 43U;
	int64_t t60 = -1419213980396LL;

	t60 = ((x241&x242)|(x243/x244));

	if (t60 != 2048LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = -1;
	int32_t x246 = INT32_MAX;
	uint64_t x247 = UINT64_MAX;
	int32_t x248 = -1;
	volatile uint64_t t61 = 197445769LLU;

	t61 = ((x245&x246)|(x247/x248));

	if (t61 != 2147483647LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x251 = UINT8_MAX;
	int8_t x252 = -1;
	static int32_t t62 = 91970301;

	t62 = ((x249&x250)|(x251/x252));

	if (t62 != -255) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	volatile uint16_t x255 = 346U;
	uint8_t x256 = UINT8_MAX;
	int64_t t63 = -1LL;

	t63 = ((x253&x254)|(x255/x256));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = UINT32_MAX;
	int64_t x259 = INT64_MAX;
	volatile int64_t t64 = 33701LL;

	t64 = ((x257&x258)|(x259/x260));

	if (t64 != 8589934466LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = INT16_MAX;
	int8_t x263 = -1;
	volatile uint64_t x264 = 37079LLU;
	volatile uint64_t t65 = 65259514LLU;

	t65 = ((x261&x262)|(x263/x264));

	if (t65 != 497498424275453LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 14U;
	int32_t x266 = -1;
	volatile int16_t x267 = INT16_MIN;
	volatile int64_t x268 = INT64_MAX;
	static volatile int64_t t66 = -94234592229666LL;

	t66 = ((x265&x266)|(x267/x268));

	if (t66 != 14LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x274 = INT32_MIN;
	int16_t x275 = -197;
	int64_t x276 = -30LL;
	uint64_t t67 = 41087618351647LLU;

	t67 = ((x273&x274)|(x275/x276));

	if (t67 != 6LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = 97U;
	int8_t x279 = INT8_MIN;
	int64_t x280 = INT64_MIN;
	static int64_t t68 = 3522372582404319550LL;

	t68 = ((x277&x278)|(x279/x280));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = -1;
	int8_t x282 = INT8_MAX;
	static int16_t x283 = 421;
	static int64_t x284 = INT64_MIN;
	volatile int64_t t69 = -467127894470060265LL;

	t69 = ((x281&x282)|(x283/x284));

	if (t69 != 127LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = INT16_MAX;
	uint16_t x286 = UINT16_MAX;
	static uint32_t x287 = 31U;
	int16_t x288 = 52;
	uint32_t t70 = 1905155U;

	t70 = ((x285&x286)|(x287/x288));

	if (t70 != 32767U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MIN;
	int8_t x290 = -1;
	int8_t x291 = -2;
	static int8_t x292 = INT8_MAX;
	volatile int32_t t71 = -25;

	t71 = ((x289&x290)|(x291/x292));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = 19;
	uint32_t x294 = UINT32_MAX;
	uint64_t x295 = 10681032704046257LLU;
	int64_t x296 = INT64_MIN;
	uint64_t t72 = 1748484029LLU;

	t72 = ((x293&x294)|(x295/x296));

	if (t72 != 19LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x297 = 9U;
	static int64_t x298 = INT64_MIN;
	uint64_t x299 = 3890LLU;
	volatile uint64_t t73 = 1103397837437706LLU;

	t73 = ((x297&x298)|(x299/x300));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MIN;

	t74 = ((x301&x302)|(x303/x304));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x305 = INT32_MIN;
	int16_t x307 = -2871;
	volatile int32_t x308 = 4599;
	volatile int64_t t75 = 47LL;

	t75 = ((x305&x306)|(x307/x308));

	if (t75 != 4146634445744504832LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = INT8_MIN;
	uint16_t x310 = 1U;
	static uint8_t x311 = 1U;
	int16_t x312 = -127;
	volatile int32_t t76 = -138;

	t76 = ((x309&x310)|(x311/x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x314 = 7;
	volatile int64_t x315 = 4660879LL;
	static int32_t x316 = INT32_MIN;
	uint64_t t77 = 425LLU;

	t77 = ((x313&x314)|(x315/x316));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = INT16_MIN;
	int64_t x322 = INT64_MAX;
	volatile int8_t x323 = 1;

	t78 = ((x321&x322)|(x323/x324));

	if (t78 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x325 = 4333U;
	int64_t x326 = INT64_MIN;
	volatile int16_t x328 = INT16_MIN;
	static int64_t t79 = 0LL;

	t79 = ((x325&x326)|(x327/x328));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x330 = INT16_MIN;
	volatile int16_t x331 = -1;
	volatile int16_t x332 = -1;
	int64_t t80 = 4736528383006764LL;

	t80 = ((x329&x330)|(x331/x332));

	if (t80 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x333 = 7U;
	static uint8_t x334 = UINT8_MAX;
	volatile int64_t x336 = 55LL;

	t81 = ((x333&x334)|(x335/x336));

	if (t81 != 3316087LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = -1LL;
	uint8_t x338 = UINT8_MAX;
	static volatile int8_t x339 = -1;
	static int32_t x340 = INT32_MAX;
	int64_t t82 = -295755174651LL;

	t82 = ((x337&x338)|(x339/x340));

	if (t82 != 255LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = 168U;
	uint8_t x342 = 0U;
	uint8_t x343 = 5U;
	int64_t x344 = -475843LL;

	t83 = ((x341&x342)|(x343/x344));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = -5837;
	uint8_t x346 = 0U;
	int8_t x347 = INT8_MIN;
	int64_t x348 = INT64_MIN;

	t84 = ((x345&x346)|(x347/x348));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x350 = 167414534685610LLU;
	int64_t x351 = -1LL;
	volatile int8_t x352 = INT8_MIN;
	static uint64_t t85 = 12169849LLU;

	t85 = ((x349&x350)|(x351/x352));

	if (t85 != 167414534685610LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = INT64_MIN;
	static uint32_t x354 = UINT32_MAX;
	static volatile int16_t x355 = INT16_MIN;
	static int16_t x356 = 20;
	volatile int64_t t86 = 1497000901942546950LL;

	t86 = ((x353&x354)|(x355/x356));

	if (t86 != -1638LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = -73LL;
	uint32_t x359 = 60U;
	volatile int64_t t87 = -50388110682202474LL;

	t87 = ((x357&x358)|(x359/x360));

	if (t87 != -128LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = -1LL;
	volatile int16_t x362 = -6620;
	int32_t x363 = INT32_MIN;
	volatile int64_t t88 = 8LL;

	t88 = ((x361&x362)|(x363/x364));

	if (t88 != -6620LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x366 = INT32_MIN;
	static int8_t x367 = INT8_MAX;
	int32_t t89 = 25;

	t89 = ((x365&x366)|(x367/x368));

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x369 = 2592753U;
	uint16_t x371 = 3334U;
	int64_t x372 = INT64_MIN;

	t90 = ((x369&x370)|(x371/x372));

	if (t90 != 2588672LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x373 = 120970U;
	int16_t x374 = INT16_MIN;
	int32_t x375 = INT32_MAX;
	volatile int8_t x376 = INT8_MAX;
	volatile uint32_t t91 = 627732U;

	t91 = ((x373&x374)|(x375/x376));

	if (t91 != 17007624U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x381 = 1U;
	uint16_t x382 = 3U;
	volatile int64_t x383 = -1LL;

	t92 = ((x381&x382)|(x383/x384));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x389 = INT16_MIN;
	uint8_t x390 = 3U;
	static int32_t x391 = -1;
	uint8_t x392 = UINT8_MAX;
	int32_t t93 = -1015770;

	t93 = ((x389&x390)|(x391/x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x393 = INT64_MAX;
	int16_t x394 = INT16_MIN;
	uint8_t x395 = 0U;
	volatile int64_t t94 = 190LL;

	t94 = ((x393&x394)|(x395/x396));

	if (t94 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = INT64_MIN;
	uint32_t x398 = UINT32_MAX;
	static int32_t x399 = INT32_MAX;
	int32_t x400 = INT32_MIN;
	volatile int64_t t95 = -2135070106530939LL;

	t95 = ((x397&x398)|(x399/x400));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x401 = UINT64_MAX;
	int16_t x403 = -1;
	uint32_t x404 = 3U;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = ((x401&x402)|(x403/x404));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x407 = 3U;
	int16_t x408 = INT16_MIN;
	volatile int64_t t97 = 148390LL;

	t97 = ((x405&x406)|(x407/x408));

	if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = -1;
	int64_t x410 = INT64_MIN;
	int8_t x411 = INT8_MIN;
	int64_t t98 = 166994408251969785LL;

	t98 = ((x409&x410)|(x411/x412));

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = 9514117026LL;
	int64_t x414 = INT64_MAX;
	int16_t x416 = INT16_MIN;
	uint64_t t99 = 36LLU;

	t99 = ((x413&x414)|(x415/x416));

	if (t99 != 9514117026LLU) { NG(); } else { ; }
	
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

