#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
uint16_t x6 = UINT16_MAX;
uint64_t t1 = 25107780790050LLU;
static int8_t x9 = -1;
int64_t x20 = INT64_MIN;
uint16_t x23 = 5U;
uint64_t x24 = 636508326905LLU;
uint32_t x32 = 222531U;
static int32_t x44 = INT32_MIN;
static int32_t x62 = -683497;
volatile uint64_t t12 = 1388268736461469631LLU;
int64_t x73 = -1LL;
static uint8_t x74 = UINT8_MAX;
uint8_t x88 = 19U;
uint32_t t17 = 7U;
int8_t x93 = -1;
static int64_t x94 = -7829093LL;
int32_t x107 = 5682891;
int16_t x108 = -12;
static int16_t x109 = INT16_MIN;
uint8_t x110 = 0U;
static uint8_t x117 = UINT8_MAX;
int8_t x121 = INT8_MAX;
int8_t x126 = INT8_MIN;
volatile int64_t x128 = INT64_MIN;
int32_t x137 = INT32_MIN;
uint32_t t29 = 249U;
int8_t x142 = 47;
uint32_t x166 = 515U;
int64_t x168 = 474160834784LL;
int64_t t32 = 25823807695LL;
uint64_t x169 = 344800821506008817LLU;
uint8_t x170 = UINT8_MAX;
volatile uint64_t t33 = 991631906963205LLU;
int16_t x175 = -1;
static uint8_t x185 = 86U;
static uint32_t x188 = 119682U;
static int64_t x190 = -33609237711LL;
int16_t x195 = -107;
uint16_t x200 = UINT16_MAX;
int32_t x214 = 204262814;
uint64_t x215 = 204838795LLU;
uint8_t x218 = UINT8_MAX;
volatile uint32_t t43 = 200261U;
int64_t x228 = -1LL;
int8_t x231 = INT8_MAX;
uint32_t x234 = 1U;
volatile uint64_t t47 = 92674LLU;
uint16_t x238 = 4U;
static int64_t x248 = -16114969294914LL;
int8_t x254 = INT8_MAX;
int8_t x258 = 3;
int64_t x262 = -15161060212LL;
static uint64_t x264 = 137489447167450042LLU;
static uint16_t x275 = UINT16_MAX;
uint32_t x276 = UINT32_MAX;
volatile uint16_t x281 = 1U;
static int64_t x286 = INT64_MAX;
uint16_t x287 = 612U;
volatile int32_t x289 = INT32_MIN;
volatile int32_t x290 = INT32_MAX;
volatile uint8_t x293 = 11U;
int32_t x296 = INT32_MAX;
volatile uint64_t x308 = 6218LLU;
uint16_t x310 = 3U;
volatile int64_t t65 = 26203936811914LL;
int16_t x314 = INT16_MAX;
volatile int64_t x315 = -11654790515505741LL;
uint32_t x321 = UINT32_MAX;
int16_t x323 = INT16_MIN;
volatile int64_t x324 = 81302657LL;
volatile uint64_t t69 = 618033LLU;
uint8_t x357 = 5U;
int64_t x360 = INT64_MAX;
int16_t x363 = INT16_MIN;
static int32_t t73 = 1477115;
volatile uint64_t x375 = UINT64_MAX;
uint8_t x386 = UINT8_MAX;
int64_t x414 = 2230015LL;
volatile uint64_t x425 = 11719330826256030LLU;
volatile uint16_t x433 = 1U;
volatile uint64_t x434 = UINT64_MAX;
int8_t x435 = INT8_MIN;
int32_t t87 = -51949033;
int8_t x448 = INT8_MIN;
int64_t x453 = INT64_MIN;
static int16_t x455 = -1;
uint32_t x458 = 2U;
int64_t t92 = -7LL;
volatile int64_t t94 = -4433LL;
volatile int64_t x479 = INT64_MAX;
volatile int32_t x484 = -1;
uint8_t x486 = 7U;
volatile int8_t x489 = -63;
uint32_t x492 = 2877311U;


void f0(void) {
	int32_t x2 = -1;
	uint64_t x3 = 231113115LLU;
	volatile int64_t x4 = -7894665658971LL;
	volatile uint64_t t0 = 818093018912LLU;

	t0 = (x1*((x2-x3)/x4));

	if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 890925614845LLU;
	int16_t x7 = INT16_MAX;
	uint8_t x8 = UINT8_MAX;

	t1 = (x5*((x6-x7)/x8));

	if (t1 != 114038478700160LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x10 = 4972620LLU;
	uint16_t x11 = 37U;
	uint16_t x12 = 15U;
	volatile uint64_t t2 = 54547874958LLU;

	t2 = (x9*((x10-x11)/x12));

	if (t2 != 18446744073709220111LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MAX;
	volatile int8_t x18 = -6;
	static uint64_t x19 = 59778424LLU;
	volatile uint64_t t3 = 11450202LLU;

	t3 = (x17*((x18-x19)/x20));

	if (t3 != 32767LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = -1;
	uint32_t x22 = 19138U;
	volatile uint64_t t4 = 141713406134928LLU;

	t4 = (x21*((x22-x23)/x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = INT8_MIN;
	int8_t x26 = -39;
	uint32_t x27 = 375U;
	uint8_t x28 = 8U;
	uint32_t t5 = 55390U;

	t5 = (x25*((x26-x27)/x28));

	if (t5 != 6656U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = 7534;
	uint32_t x30 = 477U;
	uint8_t x31 = 9U;
	volatile uint32_t t6 = 1195823U;

	t6 = (x29*((x30-x31)/x32));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	int16_t x34 = 859;
	uint64_t x35 = 199661062100629042LLU;
	int64_t x36 = INT64_MIN;
	volatile uint64_t t7 = 712924137LLU;

	t7 = (x33*((x34-x35)/x36));

	if (t7 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = INT64_MIN;
	volatile int64_t x38 = -1LL;
	int8_t x39 = INT8_MIN;
	static volatile uint16_t x40 = UINT16_MAX;
	int64_t t8 = 5LL;

	t8 = (x37*((x38-x39)/x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -6202094;
	static volatile int32_t x42 = 2;
	int8_t x43 = INT8_MIN;
	volatile int32_t t9 = 16106112;

	t9 = (x41*((x42-x43)/x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -1;
	static int16_t x50 = 22;
	static int8_t x51 = -1;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t10 = 12;

	t10 = (x49*((x50-x51)/x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x57 = 50300LLU;
	int8_t x58 = -1;
	volatile int16_t x59 = 1118;
	static volatile int16_t x60 = 706;
	uint64_t t11 = 3702013647431LLU;

	t11 = (x57*((x58-x59)/x60));

	if (t11 != 18446744073709501316LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x61 = INT32_MAX;
	static uint64_t x63 = 2193580041662982LLU;
	volatile int16_t x64 = 4;

	t12 = (x61*((x62-x63)/x64));

	if (t12 != 3106136588439877628LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MAX;
	static int64_t x66 = -1LL;
	int16_t x67 = INT16_MIN;
	uint16_t x68 = UINT16_MAX;
	volatile int64_t t13 = 7504LL;

	t13 = (x65*((x66-x67)/x68));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x69 = 28973U;
	static int32_t x70 = -1;
	uint16_t x71 = 43U;
	int8_t x72 = INT8_MIN;
	static int32_t t14 = 50782;

	t14 = (x69*((x70-x71)/x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x75 = UINT32_MAX;
	uint32_t x76 = UINT32_MAX;
	volatile int64_t t15 = 785722029LL;

	t15 = (x73*((x74-x75)/x76));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = UINT32_MAX;
	uint8_t x82 = 101U;
	int8_t x83 = 3;
	volatile int64_t x84 = INT64_MIN;
	int64_t t16 = -39LL;

	t16 = (x81*((x82-x83)/x84));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x85 = 3U;
	int16_t x86 = INT16_MIN;
	static int16_t x87 = -2;

	t17 = (x85*((x86-x87)/x88));

	if (t17 != 4294962124U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MIN;
	int8_t x90 = INT8_MIN;
	int16_t x91 = -1;
	int16_t x92 = -59;
	volatile int32_t t18 = -435132243;

	t18 = (x89*((x90-x91)/x92));

	if (t18 != -256) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x95 = 45179957981LLU;
	int8_t x96 = -1;
	volatile uint64_t t19 = 5675LLU;

	t19 = (x93*((x94-x95)/x96));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = -185484209;
	int16_t x98 = 2045;
	static volatile int32_t x99 = 1812;
	volatile int64_t x100 = -1LL;
	static int64_t t20 = 2597100078278LL;

	t20 = (x97*((x98-x99)/x100));

	if (t20 != 43217820697LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = UINT32_MAX;
	static int32_t x102 = 1964295;
	int16_t x103 = INT16_MIN;
	static uint32_t x104 = UINT32_MAX;
	volatile uint32_t t21 = 3U;

	t21 = (x101*((x102-x103)/x104));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x105 = UINT64_MAX;
	int16_t x106 = 6774;
	volatile uint64_t t22 = 548143530025139LLU;

	t22 = (x105*((x106-x107)/x108));

	if (t22 != 18446744073709078607LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x111 = 1875700276960LL;
	volatile int32_t x112 = -1;
	int64_t t23 = -8979LL;

	t23 = (x109*((x110-x111)/x112));

	if (t23 != -61462946675425280LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x113 = -1838801858LL;
	uint8_t x114 = UINT8_MAX;
	int8_t x115 = -1;
	uint8_t x116 = 1U;
	volatile int64_t t24 = 6337761759230533LL;

	t24 = (x113*((x114-x115)/x116));

	if (t24 != -470733275648LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x118 = INT8_MIN;
	int64_t x119 = -6LL;
	volatile int32_t x120 = INT32_MIN;
	volatile int64_t t25 = 2261695LL;

	t25 = (x117*((x118-x119)/x120));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x122 = INT8_MIN;
	int32_t x123 = -1;
	volatile int32_t x124 = -21960658;
	volatile int32_t t26 = -1;

	t26 = (x121*((x122-x123)/x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x125 = INT16_MIN;
	volatile int64_t x127 = -28397194731626LL;
	static volatile int64_t t27 = -990404LL;

	t27 = (x125*((x126-x127)/x128));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x129 = UINT32_MAX;
	int64_t x130 = -1LL;
	volatile int16_t x131 = 2;
	int64_t x132 = -602723544063313LL;
	volatile int64_t t28 = -64343LL;

	t28 = (x129*((x130-x131)/x132));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x138 = -1065258179;
	static int16_t x139 = INT16_MIN;
	uint32_t x140 = 1U;

	t29 = (x137*((x138-x139)/x140));

	if (t29 != 2147483648U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x141 = 5U;
	int8_t x143 = -2;
	int16_t x144 = INT16_MAX;
	volatile int32_t t30 = -629;

	t30 = (x141*((x142-x143)/x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = -34;
	uint16_t x158 = 3612U;
	int8_t x159 = 2;
	volatile int64_t x160 = INT64_MIN;
	int64_t t31 = -1344681645644LL;

	t31 = (x157*((x158-x159)/x160));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x165 = 16252U;
	uint16_t x167 = 0U;

	t32 = (x165*((x166-x167)/x168));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x171 = 14U;
	uint8_t x172 = UINT8_MAX;

	t33 = (x169*((x170-x171)/x172));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x173 = 0;
	uint16_t x174 = 273U;
	int64_t x176 = 2LL;
	static volatile int64_t t34 = -518524LL;

	t34 = (x173*((x174-x175)/x176));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x181 = 18;
	static int8_t x182 = 1;
	volatile int16_t x183 = INT16_MAX;
	static uint32_t x184 = 32009U;
	volatile uint32_t t35 = 56782U;

	t35 = (x181*((x182-x183)/x184));

	if (t35 != 2415204U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x186 = 19LLU;
	int8_t x187 = INT8_MIN;
	uint64_t t36 = 4316905871240661209LLU;

	t36 = (x185*((x186-x187)/x188));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x189 = INT32_MIN;
	uint32_t x191 = 329356587U;
	int8_t x192 = INT8_MIN;
	volatile int64_t t37 = 8792037473240650LL;

	t37 = (x189*((x190-x191)/x192));

	if (t37 != -569395125227094016LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x193 = -1;
	uint8_t x194 = 75U;
	static int16_t x196 = -1;
	static volatile int32_t t38 = -19;

	t38 = (x193*((x194-x195)/x196));

	if (t38 != 182) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x197 = INT64_MIN;
	uint8_t x198 = UINT8_MAX;
	int16_t x199 = 1;
	int64_t t39 = 1419701061480152300LL;

	t39 = (x197*((x198-x199)/x200));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x205 = 26011890225334018LL;
	int16_t x206 = 2852;
	int8_t x207 = -14;
	volatile int64_t x208 = 62728482347LL;
	volatile int64_t t40 = 332831LL;

	t40 = (x205*((x206-x207)/x208));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x209 = INT16_MIN;
	uint32_t x210 = 18U;
	volatile int8_t x211 = -1;
	static uint64_t x212 = UINT64_MAX;
	uint64_t t41 = 9416246044048LLU;

	t41 = (x209*((x210-x211)/x212));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x213 = 645105858;
	int64_t x216 = INT64_MIN;
	uint64_t t42 = 4723LLU;

	t42 = (x213*((x214-x215)/x216));

	if (t42 != 645105858LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x217 = -1;
	volatile uint32_t x219 = UINT32_MAX;
	uint32_t x220 = 32453163U;

	t43 = (x217*((x218-x219)/x220));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = -1;
	static volatile int64_t x223 = -1LL;
	int32_t x224 = INT32_MIN;
	int64_t t44 = -9397794460133563LL;

	t44 = (x221*((x222-x223)/x224));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x225 = UINT16_MAX;
	int16_t x226 = -3411;
	int64_t x227 = 95LL;
	int64_t t45 = -5479LL;

	t45 = (x225*((x226-x227)/x228));

	if (t45 != 229765710LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x229 = 8632U;
	uint16_t x230 = 12522U;
	static uint64_t x232 = 18144581907464601LLU;
	static volatile uint64_t t46 = 1266757726662090LLU;

	t46 = (x229*((x230-x231)/x232));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x233 = INT8_MAX;
	int32_t x235 = -161;
	uint64_t x236 = 8002774699672LLU;

	t47 = (x233*((x234-x235)/x236));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x237 = INT8_MIN;
	static int32_t x239 = INT32_MAX;
	int16_t x240 = 1450;
	int32_t t48 = -82597;

	t48 = (x237*((x238-x239)/x240));

	if (t48 != 189570944) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x245 = INT64_MAX;
	uint64_t x246 = UINT64_MAX;
	int16_t x247 = INT16_MIN;
	static uint64_t t49 = 47584133720159305LLU;

	t49 = (x245*((x246-x247)/x248));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x249 = 35994358176230325LLU;
	static uint8_t x250 = UINT8_MAX;
	volatile int8_t x251 = -24;
	volatile uint32_t x252 = 3669U;
	uint64_t t50 = 7002692LLU;

	t50 = (x249*((x250-x251)/x252));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x253 = -1;
	static int32_t x255 = -1;
	int8_t x256 = INT8_MAX;
	int32_t t51 = 10;

	t51 = (x253*((x254-x255)/x256));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x257 = INT64_MIN;
	int64_t x259 = -1LL;
	static uint8_t x260 = UINT8_MAX;
	volatile int64_t t52 = 117774LL;

	t52 = (x257*((x258-x259)/x260));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x261 = INT64_MIN;
	uint32_t x263 = 3U;
	uint64_t t53 = 2849333761523991247LLU;

	t53 = (x261*((x262-x263)/x264));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x265 = INT8_MAX;
	int8_t x266 = INT8_MIN;
	uint32_t x267 = 1090U;
	int32_t x268 = INT32_MIN;
	uint32_t t54 = 21983070U;

	t54 = (x265*((x266-x267)/x268));

	if (t54 != 127U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x269 = 0LL;
	static uint16_t x270 = 65U;
	int32_t x271 = -1;
	int16_t x272 = -33;
	int64_t t55 = -15298770LL;

	t55 = (x269*((x270-x271)/x272));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x273 = 112U;
	static uint8_t x274 = 18U;
	uint32_t t56 = 3039975U;

	t56 = (x273*((x274-x275)/x276));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x277 = 17289021633344LLU;
	uint32_t x278 = 40717U;
	int64_t x279 = INT64_MAX;
	uint64_t x280 = UINT64_MAX;
	volatile uint64_t t57 = 356718922044270LLU;

	t57 = (x277*((x278-x279)/x280));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x282 = 6756497766630760449LLU;
	static int8_t x283 = -1;
	uint32_t x284 = 5781105U;
	volatile uint64_t t58 = 5576369479993553LLU;

	t58 = (x281*((x282-x283)/x284));

	if (t58 != 1168720818360LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x285 = 43U;
	int64_t x288 = INT64_MIN;
	static int64_t t59 = 30799711354115LL;

	t59 = (x285*((x286-x287)/x288));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x291 = 627159U;
	static volatile int16_t x292 = INT16_MIN;
	static volatile uint32_t t60 = 6U;

	t60 = (x289*((x290-x291)/x292));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x294 = 1447119428U;
	uint8_t x295 = 12U;
	volatile uint32_t t61 = 112139U;

	t61 = (x293*((x294-x295)/x296));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x297 = INT16_MIN;
	static uint64_t x298 = UINT64_MAX;
	int8_t x299 = -1;
	int8_t x300 = -2;
	volatile uint64_t t62 = 2002349LLU;

	t62 = (x297*((x298-x299)/x300));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x301 = -3719471;
	uint16_t x302 = 839U;
	int32_t x303 = -1;
	int8_t x304 = INT8_MIN;
	int32_t t63 = -3;

	t63 = (x301*((x302-x303)/x304));

	if (t63 != 22316826) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x305 = -657676;
	volatile uint64_t x306 = 324607771969597LLU;
	uint64_t x307 = UINT64_MAX;
	volatile uint64_t t64 = 282251LLU;

	t64 = (x305*((x306-x307)/x308));

	if (t64 != 18412410406769006304LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x309 = -813260076;
	static volatile int32_t x311 = INT32_MAX;
	int64_t x312 = INT64_MIN;

	t65 = (x309*((x310-x311)/x312));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = -1;
	static int32_t x316 = -1;
	int64_t t66 = 5568207428749LL;

	t66 = (x313*((x314-x315)/x316));

	if (t66 != 11654790515538508LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x322 = 14112U;
	static int64_t t67 = -1093960102371080408LL;

	t67 = (x321*((x322-x323)/x324));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x325 = INT64_MIN;
	static int8_t x326 = 25;
	int16_t x327 = INT16_MAX;
	uint32_t x328 = UINT32_MAX;
	volatile int64_t t68 = -12783LL;

	t68 = (x325*((x326-x327)/x328));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x333 = 61877LLU;
	int32_t x334 = -53457;
	int16_t x335 = INT16_MIN;
	int32_t x336 = -1;

	t69 = (x333*((x334-x335)/x336));

	if (t69 != 1280173253LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x341 = 3U;
	int8_t x342 = INT8_MAX;
	volatile int64_t x343 = -1LL;
	uint64_t x344 = 1568479053LLU;
	uint64_t t70 = 51270LLU;

	t70 = (x341*((x342-x343)/x344));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x349 = -1;
	uint16_t x350 = UINT16_MAX;
	int8_t x351 = -24;
	int8_t x352 = 2;
	volatile int32_t t71 = -1;

	t71 = (x349*((x350-x351)/x352));

	if (t71 != -32779) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x358 = 17U;
	static volatile uint8_t x359 = 14U;
	static volatile int64_t t72 = -16275584LL;

	t72 = (x357*((x358-x359)/x360));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x361 = 76U;
	uint8_t x362 = 3U;
	int32_t x364 = -395743471;

	t73 = (x361*((x362-x363)/x364));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x369 = INT8_MIN;
	uint32_t x370 = UINT32_MAX;
	volatile int8_t x371 = -17;
	int64_t x372 = INT64_MAX;
	int64_t t74 = 42685210285493LL;

	t74 = (x369*((x370-x371)/x372));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x373 = 13926U;
	volatile uint32_t x374 = 532676U;
	int64_t x376 = 85LL;
	volatile uint64_t t75 = 22173621LLU;

	t75 = (x373*((x374-x375)/x376));

	if (t75 != 87260316LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x377 = UINT32_MAX;
	uint8_t x378 = UINT8_MAX;
	volatile int16_t x379 = -9608;
	int16_t x380 = 1273;
	volatile uint32_t t76 = 1560U;

	t76 = (x377*((x378-x379)/x380));

	if (t76 != 4294967289U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x381 = -1;
	volatile int32_t x382 = 31561;
	volatile uint32_t x383 = 44388U;
	int64_t x384 = INT64_MIN;
	static volatile int64_t t77 = 17049194835095LL;

	t77 = (x381*((x382-x383)/x384));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x385 = INT64_MAX;
	volatile int8_t x387 = -45;
	static volatile int64_t x388 = INT64_MIN;
	volatile int64_t t78 = 207048955771LL;

	t78 = (x385*((x386-x387)/x388));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x389 = INT16_MIN;
	int8_t x390 = INT8_MIN;
	volatile uint32_t x391 = 1U;
	uint8_t x392 = 125U;
	uint32_t t79 = 364882391U;

	t79 = (x389*((x390-x391)/x392));

	if (t79 != 3676536832U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x401 = INT8_MAX;
	uint32_t x402 = 0U;
	int16_t x403 = INT16_MIN;
	volatile int16_t x404 = INT16_MIN;
	volatile uint32_t t80 = 398U;

	t80 = (x401*((x402-x403)/x404));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x405 = 1297LLU;
	int64_t x406 = 52477LL;
	int16_t x407 = INT16_MAX;
	int32_t x408 = 1127;
	static uint64_t t81 = 3357794933641021293LLU;

	t81 = (x405*((x406-x407)/x408));

	if (t81 != 22049LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x413 = -5;
	volatile int16_t x415 = -7836;
	static int16_t x416 = INT16_MIN;
	static volatile int64_t t82 = -11163373556257LL;

	t82 = (x413*((x414-x415)/x416));

	if (t82 != 340LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x421 = 468U;
	int8_t x422 = -6;
	int8_t x423 = -1;
	uint8_t x424 = 54U;
	int32_t t83 = 8072587;

	t83 = (x421*((x422-x423)/x424));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x426 = 1U;
	volatile int64_t x427 = -1LL;
	static volatile uint16_t x428 = 6459U;
	volatile uint64_t t84 = 19695296313465LLU;

	t84 = (x425*((x426-x427)/x428));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x429 = INT8_MIN;
	static int16_t x430 = 6670;
	volatile uint16_t x431 = 24U;
	int16_t x432 = -43;
	int32_t t85 = 553573049;

	t85 = (x429*((x430-x431)/x432));

	if (t85 != 19712) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x436 = 523261903LL;
	uint64_t t86 = 1LLU;

	t86 = (x433*((x434-x435)/x436));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x437 = -44;
	static int8_t x438 = INT8_MAX;
	volatile int32_t x439 = -1;
	uint16_t x440 = 7U;

	t87 = (x437*((x438-x439)/x440));

	if (t87 != -792) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x441 = INT32_MIN;
	uint64_t x442 = 4785922595033LLU;
	int16_t x443 = INT16_MAX;
	uint8_t x444 = 47U;
	uint64_t t88 = 2LLU;

	t88 = (x441*((x442-x443)/x444));

	if (t88 != 2686664140008718336LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x445 = -3;
	int32_t x446 = INT32_MAX;
	static uint32_t x447 = UINT32_MAX;
	volatile uint32_t t89 = 107039421U;

	t89 = (x445*((x446-x447)/x448));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x449 = 442776U;
	uint32_t x450 = 470U;
	int32_t x451 = 5;
	int32_t x452 = 4294341;
	volatile uint32_t t90 = 7U;

	t90 = (x449*((x450-x451)/x452));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x454 = 2958951160421505375LLU;
	static int16_t x456 = INT16_MAX;
	volatile uint64_t t91 = 1LLU;

	t91 = (x453*((x454-x455)/x456));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x457 = -1;
	uint8_t x459 = 84U;
	int64_t x460 = INT64_MIN;

	t92 = (x457*((x458-x459)/x460));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x461 = -1;
	volatile int8_t x462 = -1;
	int64_t x463 = -1LL;
	int16_t x464 = -1;
	int64_t t93 = -2960235757LL;

	t93 = (x461*((x462-x463)/x464));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x469 = 2U;
	int32_t x470 = -1;
	uint32_t x471 = 91376453U;
	int64_t x472 = -1LL;

	t94 = (x469*((x470-x471)/x472));

	if (t94 != -8407181684LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x473 = INT32_MIN;
	uint8_t x474 = 5U;
	static int32_t x475 = 0;
	volatile uint8_t x476 = 29U;
	volatile int32_t t95 = -33;

	t95 = (x473*((x474-x475)/x476));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x477 = 15;
	uint64_t x478 = UINT64_MAX;
	static uint64_t x480 = 715208706212LLU;
	static uint64_t t96 = 7835221LLU;

	t96 = (x477*((x478-x479)/x480));

	if (t96 != 193440840LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x481 = 459243;
	uint64_t x482 = 2057175LLU;
	static int16_t x483 = INT16_MAX;
	uint64_t t97 = 13769111887814LLU;

	t97 = (x481*((x482-x483)/x484));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x485 = INT8_MIN;
	int16_t x487 = 10;
	int16_t x488 = INT16_MAX;
	int32_t t98 = -78519343;

	t98 = (x485*((x486-x487)/x488));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x490 = 27U;
	uint32_t x491 = 13432U;
	uint32_t t99 = 1977U;

	t99 = (x489*((x490-x491)/x492));

	if (t99 != 4294873300U) { NG(); } else { ; }
	
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

