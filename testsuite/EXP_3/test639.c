#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int16_t x13 = 7140;
int16_t x17 = 1;
volatile int32_t t4 = -169;
volatile int64_t t5 = 256994456LL;
volatile uint64_t x25 = UINT64_MAX;
uint64_t x28 = 3661760855LLU;
uint16_t x31 = 1668U;
uint8_t x34 = UINT8_MAX;
volatile int64_t t9 = -9902LL;
volatile int32_t x44 = INT32_MAX;
uint32_t x47 = UINT32_MAX;
static int16_t x49 = -1;
volatile int32_t x52 = INT32_MIN;
volatile int32_t t12 = -21;
uint32_t x59 = UINT32_MAX;
int64_t x63 = INT64_MIN;
uint64_t x68 = 7937310LLU;
int16_t x78 = -1;
int32_t x81 = -1;
int16_t x88 = -1;
int16_t x89 = INT16_MAX;
int16_t x95 = INT16_MIN;
int16_t x97 = -1066;
uint8_t x99 = UINT8_MAX;
int64_t x109 = -1LL;
volatile int64_t x110 = -534572LL;
static uint8_t x117 = 57U;
int32_t x118 = -1;
static int16_t x125 = 5470;
int64_t x133 = 1122807LL;
static int64_t x135 = -461686369229914LL;
static volatile int64_t t33 = INT64_MIN;
uint16_t x155 = 105U;
int64_t x157 = INT64_MAX;
static int8_t x160 = 2;
int32_t x165 = INT32_MIN;
volatile int64_t x169 = -53374956216393394LL;
int8_t x170 = INT8_MAX;
static int8_t x186 = -1;
volatile uint64_t x187 = UINT64_MAX;
int64_t x188 = -1105708610006160LL;
int64_t x189 = INT64_MAX;
static int16_t x191 = -15;
uint64_t t47 = 1026341295LLU;
int32_t x199 = 225534;
int8_t x200 = -1;
static uint16_t x209 = UINT16_MAX;
volatile int64_t x213 = -4330401748561313790LL;
static int8_t x218 = INT8_MAX;
uint16_t x219 = 2991U;
static volatile int32_t t54 = -1666237;
volatile int64_t x226 = INT64_MIN;
volatile uint64_t t56 = 193LLU;
uint64_t x237 = UINT64_MAX;
int16_t x239 = INT16_MIN;
uint64_t x241 = UINT64_MAX;
int8_t x242 = -61;
uint16_t x244 = UINT16_MAX;
volatile int8_t x250 = INT8_MAX;
int32_t x252 = INT32_MAX;
volatile uint32_t x264 = UINT32_MAX;
static int64_t t65 = 175228LL;
static uint64_t t66 = 111077270654514LLU;
volatile uint8_t x276 = 7U;
static int32_t x282 = INT32_MAX;
int8_t x283 = INT8_MAX;
static int64_t t69 = 150344LL;
static int32_t x286 = INT32_MIN;
int32_t x287 = -8;
int8_t x293 = INT8_MIN;
uint16_t x295 = UINT16_MAX;
int32_t x297 = INT32_MAX;
uint64_t t74 = 5662357038558366LLU;
uint16_t x306 = 0U;
int64_t t77 = 19555256997217LL;
static int8_t x321 = -1;
int32_t t81 = -52;
int16_t x344 = -1;
volatile int64_t x346 = INT64_MAX;
int64_t t84 = -220058871LL;
volatile uint16_t x356 = UINT16_MAX;
uint32_t x361 = UINT32_MAX;
volatile int32_t x363 = -1;
volatile int8_t x371 = 11;
static uint64_t t92 = 2139918071929468062LLU;
uint16_t x385 = 0U;
static volatile int32_t t95 = -1339;
int32_t x398 = INT32_MIN;
uint8_t x399 = UINT8_MAX;
static uint8_t x402 = 64U;
int8_t x403 = INT8_MIN;


void f0(void) {
	int8_t x2 = INT8_MIN;
	volatile uint64_t x3 = 30969675424LLU;
	int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 2921LLU;

	t0 = ((x1&x2)-(x3/x4));

	if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -801564LL;
	int8_t x6 = -1;
	uint32_t x7 = 70650103U;
	int64_t x8 = -404670546412547402LL;
	int64_t t1 = -15843248768400582LL;

	t1 = ((x5&x6)-(x7/x8));

	if (t1 != -801564LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	uint32_t x10 = UINT32_MAX;
	int16_t x11 = INT16_MIN;
	uint32_t x12 = 168545U;
	uint32_t t2 = 53370285U;

	t2 = ((x9&x10)-(x11/x12));

	if (t2 != 4294941813U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x14 = INT64_MIN;
	static uint32_t x15 = UINT32_MAX;
	int64_t x16 = 390426237219317LL;
	volatile int64_t t3 = 731329669805780804LL;

	t3 = ((x13&x14)-(x15/x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x18 = -1;
	int8_t x19 = 7;
	uint16_t x20 = UINT16_MAX;

	t4 = ((x17&x18)-(x19/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	uint16_t x22 = 1U;
	volatile int32_t x23 = -356250;
	int64_t x24 = INT64_MAX;

	t5 = ((x21&x22)-(x23/x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 3183497054445LLU;
	int16_t x27 = -1;
	uint64_t t6 = 3967419683797419976LLU;

	t6 = ((x25&x26)-(x27/x28));

	if (t6 != 3178459384099LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	int32_t x30 = INT32_MAX;
	int16_t x32 = 93;
	volatile int64_t t7 = -2927072LL;

	t7 = ((x29&x30)-(x31/x32));

	if (t7 != -17LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 6272446840880LLU;
	int8_t x35 = 0;
	int64_t x36 = 1134963914392LL;
	static volatile uint64_t t8 = 2155766976LLU;

	t8 = ((x33&x34)-(x35/x36));

	if (t8 != 48LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 1;
	int32_t x38 = -1;
	uint16_t x39 = UINT16_MAX;
	int64_t x40 = INT64_MIN;

	t9 = ((x37&x38)-(x39/x40));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	uint64_t x42 = 22LLU;
	uint32_t x43 = 111751589U;
	uint64_t t10 = 4180LLU;

	t10 = ((x41&x42)-(x43/x44));

	if (t10 != 22LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -388LL;
	volatile uint16_t x46 = UINT16_MAX;
	static volatile int32_t x48 = INT32_MAX;
	static int64_t t11 = -11140413LL;

	t11 = ((x45&x46)-(x47/x48));

	if (t11 != 65146LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -1;
	int8_t x51 = -1;

	t12 = ((x49&x50)-(x51/x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static uint32_t x54 = UINT32_MAX;
	static uint32_t x55 = UINT32_MAX;
	int16_t x56 = 46;
	volatile uint32_t t13 = 1346009U;

	t13 = ((x53&x54)-(x55/x56));

	if (t13 != 2054114794U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 41U;
	volatile uint64_t x58 = 40896123LLU;
	uint16_t x60 = UINT16_MAX;
	volatile uint64_t t14 = 2397544600823854840LLU;

	t14 = ((x57&x58)-(x59/x60));

	if (t14 != 18446744073709486120LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -901;
	uint16_t x62 = 12U;
	int8_t x64 = -3;
	int64_t t15 = -162LL;

	t15 = ((x61&x62)-(x63/x64));

	if (t15 != -3074457345618258594LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int32_t x66 = INT32_MIN;
	int8_t x67 = -1;
	volatile uint64_t t16 = 467497137813910LLU;

	t16 = ((x65&x66)-(x67/x68));

	if (t16 != 18446741747507183668LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	volatile int16_t x70 = 2288;
	volatile uint16_t x71 = UINT16_MAX;
	int8_t x72 = INT8_MAX;
	static uint32_t t17 = 0U;

	t17 = ((x69&x70)-(x71/x72));

	if (t17 != 1772U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 12;
	uint32_t x74 = UINT32_MAX;
	volatile int16_t x75 = -1;
	int8_t x76 = INT8_MAX;
	static volatile uint32_t t18 = 727674488U;

	t18 = ((x73&x74)-(x75/x76));

	if (t18 != 12U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int16_t x79 = INT16_MIN;
	static int32_t x80 = -299;
	int32_t t19 = -22562;

	t19 = ((x77&x78)-(x79/x80));

	if (t19 != -32877) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x82 = INT8_MAX;
	volatile uint16_t x83 = 1904U;
	static uint64_t x84 = UINT64_MAX;
	uint64_t t20 = 413215571681679LLU;

	t20 = ((x81&x82)-(x83/x84));

	if (t20 != 127LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 0U;
	int64_t x86 = -1LL;
	static volatile int8_t x87 = INT8_MIN;
	int64_t t21 = 26LL;

	t21 = ((x85&x86)-(x87/x88));

	if (t21 != -128LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MIN;
	static uint16_t x91 = 171U;
	int32_t x92 = INT32_MIN;
	int32_t t22 = -801481361;

	t22 = ((x89&x90)-(x91/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int16_t x94 = 2;
	uint32_t x96 = 1U;
	uint32_t t23 = 2028116463U;

	t23 = ((x93&x94)-(x95/x96));

	if (t23 != 32768U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = -1;
	static uint32_t x100 = UINT32_MAX;
	uint32_t t24 = 5U;

	t24 = ((x97&x98)-(x99/x100));

	if (t24 != 4294966230U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	static int32_t x102 = INT32_MAX;
	static volatile int16_t x103 = INT16_MIN;
	volatile int8_t x104 = INT8_MAX;
	volatile int64_t t25 = 815LL;

	t25 = ((x101&x102)-(x103/x104));

	if (t25 != 258LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x111 = UINT8_MAX;
	static int16_t x112 = -121;
	static int64_t t26 = 4077479LL;

	t26 = ((x109&x110)-(x111/x112));

	if (t26 != -534570LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x113 = -1;
	static uint16_t x114 = UINT16_MAX;
	static volatile int32_t x115 = INT32_MIN;
	static uint32_t x116 = 531587101U;
	uint32_t t27 = 34861693U;

	t27 = ((x113&x114)-(x115/x116));

	if (t27 != 65531U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x119 = INT64_MIN;
	uint16_t x120 = 23U;
	int64_t t28 = 18207561115LL;

	t28 = ((x117&x118)-(x119/x120));

	if (t28 != 401016175515425092LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -1;
	int64_t x122 = 12214LL;
	uint64_t x123 = 180751LLU;
	uint16_t x124 = UINT16_MAX;
	uint64_t t29 = 24LLU;

	t29 = ((x121&x122)-(x123/x124));

	if (t29 != 12212LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x126 = INT8_MIN;
	int8_t x127 = -63;
	static volatile uint32_t x128 = UINT32_MAX;
	uint32_t t30 = 0U;

	t30 = ((x125&x126)-(x127/x128));

	if (t30 != 5376U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = UINT16_MAX;
	uint32_t x130 = 162U;
	volatile int16_t x131 = -1;
	uint16_t x132 = UINT16_MAX;
	static volatile uint32_t t31 = 269280532U;

	t31 = ((x129&x130)-(x131/x132));

	if (t31 != 162U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x134 = -1;
	uint64_t x136 = 328726240956062LLU;
	uint64_t t32 = 21LLU;

	t32 = ((x133&x134)-(x135/x136));

	if (t32 != 1066693LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	static int8_t x138 = -1;
	static volatile int8_t x139 = -1;
	int16_t x140 = INT16_MIN;

	t33 = ((x137&x138)-(x139/x140));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 14471U;
	volatile uint64_t x142 = 71322190943004142LLU;
	int16_t x143 = -1;
	uint32_t x144 = 83426U;
	volatile uint64_t t34 = 34043282466475LLU;

	t34 = ((x141&x142)-(x143/x144));

	if (t34 != 18446744073709508460LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 3U;
	static int64_t x146 = -619908438113LL;
	int64_t x147 = -1316934LL;
	volatile int16_t x148 = -100;
	volatile int64_t t35 = 1LL;

	t35 = ((x145&x146)-(x147/x148));

	if (t35 != -13166LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 112U;
	int32_t x150 = INT32_MIN;
	int64_t x151 = INT64_MAX;
	static uint64_t x152 = UINT64_MAX;
	uint64_t t36 = 60578LLU;

	t36 = ((x149&x150)-(x151/x152));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x153 = INT16_MIN;
	int64_t x154 = INT64_MIN;
	uint8_t x156 = UINT8_MAX;
	volatile int64_t t37 = INT64_MIN;

	t37 = ((x153&x154)-(x155/x156));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x158 = INT8_MIN;
	uint16_t x159 = 11U;
	static volatile int64_t t38 = -5934231464LL;

	t38 = ((x157&x158)-(x159/x160));

	if (t38 != 9223372036854775675LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MAX;
	static volatile uint64_t x162 = 3863LLU;
	static int64_t x163 = 54974729209385LL;
	int64_t x164 = INT64_MAX;
	volatile uint64_t t39 = 14764685LLU;

	t39 = ((x161&x162)-(x163/x164));

	if (t39 != 23LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x166 = 8U;
	static int64_t x167 = -574117545224289LL;
	int16_t x168 = INT16_MIN;
	int64_t t40 = 15249182206692542LL;

	t40 = ((x165&x166)-(x167/x168));

	if (t40 != -17520677039LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x171 = UINT16_MAX;
	int32_t x172 = 685;
	static volatile int64_t t41 = -117194229LL;

	t41 = ((x169&x170)-(x171/x172));

	if (t41 != -17LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -13;
	volatile int64_t x174 = -1LL;
	uint32_t x175 = UINT32_MAX;
	volatile uint32_t x176 = 412U;
	int64_t t42 = -91495330938695384LL;

	t42 = ((x173&x174)-(x175/x176));

	if (t42 != -10424690LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x177 = -1;
	volatile int8_t x178 = -1;
	int32_t x179 = INT32_MIN;
	static int64_t x180 = -1LL;
	volatile int64_t t43 = 204556380454873794LL;

	t43 = ((x177&x178)-(x179/x180));

	if (t43 != -2147483649LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MIN;
	int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MIN;
	static uint8_t x184 = 17U;
	static volatile int64_t t44 = -897864478202357LL;

	t44 = ((x181&x182)-(x183/x184));

	if (t44 != -9223372036854773881LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = 42U;
	volatile uint64_t t45 = 1018591421LLU;

	t45 = ((x185&x186)-(x187/x188));

	if (t45 != 41LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x190 = -723719704;
	static int8_t x192 = -1;
	int64_t t46 = -44654348LL;

	t46 = ((x189&x190)-(x191/x192));

	if (t46 != 9223372036131056089LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x193 = INT32_MIN;
	static int8_t x194 = 3;
	int16_t x195 = -2835;
	volatile uint64_t x196 = UINT64_MAX;

	t47 = ((x193&x194)-(x195/x196));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x197 = INT64_MIN;
	int32_t x198 = INT32_MIN;
	int64_t t48 = 63247910433140LL;

	t48 = ((x197&x198)-(x199/x200));

	if (t48 != -9223372036854550274LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x201 = INT64_MAX;
	static int64_t x202 = -1318968207498152LL;
	uint16_t x203 = 3595U;
	int64_t x204 = -1LL;
	int64_t t49 = 26140LL;

	t49 = ((x201&x202)-(x203/x204));

	if (t49 != 9222053068647281251LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x205 = 3U;
	int64_t x206 = INT64_MIN;
	uint64_t x207 = UINT64_MAX;
	uint64_t x208 = 6373225446065966LLU;
	uint64_t t50 = 3461185206505940736LLU;

	t50 = ((x205&x206)-(x207/x208));

	if (t50 != 18446744073709548722LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x210 = 23476339;
	static uint16_t x211 = UINT16_MAX;
	int64_t x212 = INT64_MIN;
	int64_t t51 = -1949193487868309663LL;

	t51 = ((x209&x210)-(x211/x212));

	if (t51 != 14451LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x214 = 543784306611810LLU;
	int16_t x215 = INT16_MIN;
	int64_t x216 = -1LL;
	uint64_t t52 = 562330150LLU;

	t52 = ((x213&x214)-(x215/x216));

	if (t52 != 354598980386818LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x217 = 47134U;
	volatile int64_t x220 = INT64_MIN;
	int64_t t53 = -1048783577346869LL;

	t53 = ((x217&x218)-(x219/x220));

	if (t53 != 30LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MIN;
	uint16_t x223 = UINT16_MAX;
	int16_t x224 = INT16_MIN;

	t54 = ((x221&x222)-(x223/x224));

	if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x225 = UINT32_MAX;
	int32_t x227 = INT32_MIN;
	static volatile int32_t x228 = 461550135;
	int64_t t55 = -2316500730480LL;

	t55 = ((x225&x226)-(x227/x228));

	if (t55 != 4LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = INT8_MIN;
	uint16_t x230 = UINT16_MAX;
	int16_t x231 = INT16_MAX;
	uint64_t x232 = 12407LLU;

	t56 = ((x229&x230)-(x231/x232));

	if (t56 != 65406LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = -1;
	int16_t x234 = INT16_MIN;
	static int8_t x235 = 18;
	int64_t x236 = -930186655120391LL;
	volatile int64_t t57 = -4146360898LL;

	t57 = ((x233&x234)-(x235/x236));

	if (t57 != -32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x238 = 1;
	int8_t x240 = 1;
	volatile uint64_t t58 = 11308229LLU;

	t58 = ((x237&x238)-(x239/x240));

	if (t58 != 32769LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x243 = UINT16_MAX;
	volatile uint64_t t59 = 13933018LLU;

	t59 = ((x241&x242)-(x243/x244));

	if (t59 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = INT64_MAX;
	volatile uint8_t x246 = 102U;
	volatile int16_t x247 = INT16_MIN;
	static volatile int16_t x248 = INT16_MIN;
	volatile int64_t t60 = -2LL;

	t60 = ((x245&x246)-(x247/x248));

	if (t60 != 101LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x249 = UINT32_MAX;
	uint32_t x251 = UINT32_MAX;
	volatile uint32_t t61 = 556U;

	t61 = ((x249&x250)-(x251/x252));

	if (t61 != 125U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = -1;
	uint16_t x254 = 1U;
	int8_t x255 = -1;
	int64_t x256 = -1LL;
	volatile int64_t t62 = 577262603461614LL;

	t62 = ((x253&x254)-(x255/x256));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x257 = INT8_MIN;
	uint16_t x258 = 73U;
	uint16_t x259 = 185U;
	int8_t x260 = INT8_MIN;
	static volatile int32_t t63 = -137;

	t63 = ((x257&x258)-(x259/x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = UINT32_MAX;
	static volatile int16_t x262 = INT16_MAX;
	volatile uint32_t x263 = 1296536U;
	uint32_t t64 = 1521619U;

	t64 = ((x261&x262)-(x263/x264));

	if (t64 != 32767U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x265 = -13285;
	static int32_t x266 = 5854057;
	int8_t x267 = INT8_MAX;
	int64_t x268 = INT64_MIN;

	t65 = ((x265&x266)-(x267/x268));

	if (t65 != 5849097LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x269 = 22515221662072LLU;
	volatile uint16_t x270 = 2502U;
	int64_t x271 = -1LL;
	uint64_t x272 = 515887LLU;

	t66 = ((x269&x270)-(x271/x272));

	if (t66 != 18446708316374956079LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x273 = INT32_MIN;
	int8_t x274 = 10;
	volatile int64_t x275 = INT64_MIN;
	static volatile int64_t t67 = 84423LL;

	t67 = ((x273&x274)-(x275/x276));

	if (t67 != 1317624576693539401LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = 3875514931955LL;
	uint32_t x278 = 140U;
	volatile uint16_t x279 = 17U;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t68 = 29409655937LLU;

	t68 = ((x277&x278)-(x279/x280));

	if (t68 != 128LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x281 = INT16_MIN;
	int64_t x284 = INT64_MAX;

	t69 = ((x281&x282)-(x283/x284));

	if (t69 != 2147450880LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x285 = 4U;
	int64_t x288 = -1LL;
	volatile int64_t t70 = -1LL;

	t70 = ((x285&x286)-(x287/x288));

	if (t70 != -8LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = INT64_MAX;
	int16_t x290 = 0;
	static int16_t x291 = INT16_MIN;
	uint8_t x292 = 78U;
	volatile int64_t t71 = 26981831756LL;

	t71 = ((x289&x290)-(x291/x292));

	if (t71 != 420LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x294 = 135;
	int32_t x296 = 1227;
	static int32_t t72 = 49579982;

	t72 = ((x293&x294)-(x295/x296));

	if (t72 != 75) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x298 = INT8_MIN;
	uint64_t x299 = UINT64_MAX;
	volatile uint16_t x300 = 88U;
	static volatile uint64_t t73 = 2659462485LLU;

	t73 = ((x297&x298)-(x299/x300));

	if (t73 != 18237121984110335686LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MAX;
	static uint16_t x302 = 0U;
	volatile uint64_t x303 = 19LLU;
	static int32_t x304 = -1;

	t74 = ((x301&x302)-(x303/x304));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = -7;
	uint8_t x307 = 6U;
	volatile int8_t x308 = INT8_MIN;
	volatile int32_t t75 = 628;

	t75 = ((x305&x306)-(x307/x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = -610490994526902LL;
	int64_t x310 = INT64_MAX;
	int32_t x311 = 8231;
	int8_t x312 = INT8_MIN;
	volatile int64_t t76 = -20235384506324121LL;

	t76 = ((x309&x310)-(x311/x312));

	if (t76 != 9222761545860248970LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x313 = 412U;
	int64_t x314 = INT64_MIN;
	volatile int32_t x315 = INT32_MIN;
	int16_t x316 = INT16_MAX;

	t77 = ((x313&x314)-(x315/x316));

	if (t77 != 65538LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = INT64_MIN;
	int16_t x318 = -1;
	int16_t x319 = INT16_MIN;
	int64_t x320 = INT64_MAX;
	int64_t t78 = INT64_MIN;

	t78 = ((x317&x318)-(x319/x320));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x322 = 814472535U;
	int64_t x323 = -49345214LL;
	int8_t x324 = -1;
	volatile int64_t t79 = -14583326LL;

	t79 = ((x321&x322)-(x323/x324));

	if (t79 != 765127321LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x325 = 932U;
	uint16_t x326 = 3514U;
	int8_t x327 = INT8_MAX;
	static uint8_t x328 = UINT8_MAX;
	volatile uint32_t t80 = 5101U;

	t80 = ((x325&x326)-(x327/x328));

	if (t80 != 416U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = INT8_MAX;
	int32_t x334 = 11289;
	int16_t x335 = -500;
	int8_t x336 = 25;

	t81 = ((x333&x334)-(x335/x336));

	if (t81 != 45) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = 1;
	int64_t x338 = 1LL;
	int64_t x339 = INT64_MIN;
	volatile int64_t x340 = 627901554584459981LL;
	static volatile int64_t t82 = -2069473LL;

	t82 = ((x337&x338)-(x339/x340));

	if (t82 != 15LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x341 = 33;
	int16_t x342 = INT16_MIN;
	uint8_t x343 = UINT8_MAX;
	volatile int32_t t83 = 1;

	t83 = ((x341&x342)-(x343/x344));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MIN;
	static int32_t x347 = -1;
	volatile int64_t x348 = -355317121815790292LL;

	t84 = ((x345&x346)-(x347/x348));

	if (t84 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x349 = UINT8_MAX;
	int64_t x350 = INT64_MAX;
	volatile int64_t x351 = -6468609LL;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t85 = 1551764LLU;

	t85 = ((x349&x350)-(x351/x352));

	if (t85 != 255LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = INT16_MAX;
	static int8_t x354 = 3;
	int32_t x355 = INT32_MAX;
	int32_t t86 = -13743;

	t86 = ((x353&x354)-(x355/x356));

	if (t86 != -32765) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x357 = UINT32_MAX;
	static int8_t x358 = -1;
	int8_t x359 = -1;
	volatile int16_t x360 = -1524;
	uint32_t t87 = UINT32_MAX;

	t87 = ((x357&x358)-(x359/x360));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x362 = 650517080708LL;
	static int64_t x364 = -1LL;
	volatile int64_t t88 = 641983510938LL;

	t88 = ((x361&x362)-(x363/x364));

	if (t88 != 1977019011LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = 65790103402828LLU;
	int32_t x366 = INT32_MIN;
	int8_t x367 = INT8_MAX;
	int8_t x368 = INT8_MIN;
	static volatile uint64_t t89 = 0LLU;

	t89 = ((x365&x366)-(x367/x368));

	if (t89 != 65788161556480LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x369 = UINT16_MAX;
	uint64_t x370 = 2538599180013LLU;
	uint32_t x372 = 488202U;
	volatile uint64_t t90 = 1496108383028202LLU;

	t90 = ((x369&x370)-(x371/x372));

	if (t90 != 26349LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x373 = 0U;
	int8_t x374 = INT8_MAX;
	static int16_t x375 = 96;
	volatile int32_t x376 = INT32_MAX;
	int32_t t91 = -120;

	t91 = ((x373&x374)-(x375/x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x377 = 4U;
	uint64_t x378 = UINT64_MAX;
	uint64_t x379 = UINT64_MAX;
	int32_t x380 = INT32_MIN;

	t92 = ((x377&x378)-(x379/x380));

	if (t92 != 3LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x381 = 3U;
	static int64_t x382 = INT64_MIN;
	static volatile int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;
	static int64_t t93 = 1472146719555LL;

	t93 = ((x381&x382)-(x383/x384));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x386 = -4;
	int64_t x387 = -2189464938692LL;
	int16_t x388 = 1534;
	volatile int64_t t94 = 7LL;

	t94 = ((x385&x386)-(x387/x388));

	if (t94 != 1427291355LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x389 = 0;
	uint8_t x390 = 3U;
	int16_t x391 = INT16_MAX;
	volatile int32_t x392 = -1;

	t95 = ((x389&x390)-(x391/x392));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x393 = 36U;
	int8_t x394 = -4;
	static uint32_t x395 = 409U;
	uint8_t x396 = UINT8_MAX;
	volatile uint32_t t96 = 448022507U;

	t96 = ((x393&x394)-(x395/x396));

	if (t96 != 35U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x397 = 27U;
	int64_t x400 = 44134491357611LL;
	int64_t t97 = 158011987LL;

	t97 = ((x397&x398)-(x399/x400));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = -308794024LL;
	int16_t x404 = -135;
	volatile int64_t t98 = 1300585508LL;

	t98 = ((x401&x402)-(x403/x404));

	if (t98 != 64LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x405 = 81U;
	int32_t x406 = -387078639;
	volatile uint32_t x407 = UINT32_MAX;
	volatile uint32_t x408 = 3623U;
	uint32_t t99 = 0U;

	t99 = ((x405&x406)-(x407/x408));

	if (t99 != 4293781841U) { NG(); } else { ; }
	
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

