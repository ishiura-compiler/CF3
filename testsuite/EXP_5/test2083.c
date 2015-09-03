#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
uint16_t x3 = UINT16_MAX;
static volatile uint32_t x12 = UINT32_MAX;
static volatile uint16_t x14 = 0U;
uint64_t t3 = 343526797876527LLU;
static int16_t x19 = INT16_MIN;
int64_t x24 = -505619LL;
uint32_t x27 = UINT32_MAX;
int8_t x28 = INT8_MAX;
volatile uint32_t t6 = 2U;
volatile int64_t t7 = 615LL;
int8_t x33 = -1;
int16_t x41 = 3571;
int16_t x43 = INT16_MIN;
uint32_t x44 = 98825U;
int32_t x47 = -257363;
uint16_t x62 = 209U;
uint16_t x69 = UINT16_MAX;
int64_t t16 = 2702633376972875LL;
volatile int32_t x75 = INT32_MAX;
int64_t x81 = INT64_MIN;
int32_t x87 = -1;
int64_t x88 = INT64_MIN;
int32_t x89 = -1;
volatile int16_t x91 = INT16_MAX;
static uint64_t x93 = 19167815962799019LLU;
uint32_t x100 = 4076833U;
volatile int64_t t23 = 3739213148LL;
uint64_t x116 = 1522LLU;
volatile uint32_t x117 = 3U;
int8_t x122 = -1;
static volatile uint8_t x129 = 11U;
int32_t x130 = INT32_MAX;
static uint64_t x136 = 1062388890LLU;
volatile uint64_t x151 = 18782232166507824LLU;
uint64_t x152 = 15LLU;
uint64_t t34 = 1328149777556897810LLU;
uint16_t x155 = UINT16_MAX;
int64_t x156 = -153815846LL;
uint32_t x168 = UINT32_MAX;
static uint16_t x174 = 4646U;
volatile int16_t x177 = -1;
int8_t x192 = -1;
int64_t x198 = INT64_MIN;
volatile int64_t t43 = 5704LL;
int64_t x201 = 1LL;
int16_t x204 = INT16_MIN;
static int64_t t44 = 27919508LL;
int32_t x211 = INT32_MIN;
uint32_t t46 = 1078U;
int16_t x219 = -1;
int32_t x222 = 738;
volatile uint64_t x228 = 240LLU;
int32_t x232 = 1;
volatile int64_t t51 = -65946889LL;
static int8_t x242 = INT8_MIN;
volatile int32_t x255 = -1;
volatile uint32_t x269 = 77U;
volatile int16_t x284 = INT16_MIN;
int64_t x285 = -12LL;
int16_t x291 = INT16_MIN;
int8_t x297 = INT8_MIN;
int64_t t67 = 291567666365106LL;
int64_t x311 = 833LL;
volatile uint16_t x323 = 872U;
volatile uint64_t t70 = 30964LLU;
static uint32_t x325 = 53U;
int16_t x328 = -27;
volatile uint32_t x334 = 9U;
int64_t x339 = INT64_MAX;
int32_t x341 = INT32_MAX;
volatile int32_t t76 = 5814;
int32_t x365 = INT32_MIN;
int8_t x366 = -1;
static uint8_t x374 = 3U;
volatile uint16_t x378 = 0U;
uint32_t x380 = 855854866U;
uint16_t x383 = 940U;
uint64_t t87 = 564274LLU;
static uint64_t t88 = 56079342634LLU;
int16_t x401 = -1;
uint16_t x402 = UINT16_MAX;
volatile int64_t x410 = 7186610601360LL;
uint64_t x411 = 17572575865326LLU;
static volatile int8_t x415 = -1;
volatile uint64_t t92 = 122901598462LLU;
uint32_t x417 = 12594U;
int8_t x418 = INT8_MAX;
static uint8_t x425 = 0U;
uint8_t x435 = 0U;
int8_t x439 = -1;
int8_t x443 = 1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int32_t x4 = -21;
	static volatile int32_t t0 = 125;

	t0 = (x1*((x2^x3)%x4));

	if (t0 != 1920) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	int16_t x6 = 1;
	volatile uint16_t x7 = UINT16_MAX;
	static int64_t x8 = 93236LL;
	volatile int64_t t1 = 64601781098544LL;

	t1 = (x5*((x6^x7)%x8));

	if (t1 != -65534LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint16_t x10 = UINT16_MAX;
	volatile int32_t x11 = 10814473;
	volatile uint32_t t2 = 129526639U;

	t2 = (x9*((x10^x11)%x12));

	if (t2 != 2902590720U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	volatile int8_t x15 = -1;
	uint64_t x16 = 15302396701095LLU;

	t3 = (x13*((x14^x15)%x16));

	if (t3 != 714231464165768025LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	static int64_t x18 = INT64_MAX;
	volatile uint8_t x20 = 13U;
	int64_t t4 = 14158191873LL;

	t4 = (x17*((x18^x19)%x20));

	if (t4 != -255LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 26;
	int64_t x22 = INT64_MIN;
	int32_t x23 = -8431;
	int64_t t5 = 299638LL;

	t5 = (x21*((x22^x23)%x24));

	if (t5 != 6827756LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	static volatile int16_t x26 = -1;

	t6 = (x25*((x26^x27)%x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 14U;
	int64_t x30 = -1LL;
	int64_t x31 = INT64_MAX;
	int16_t x32 = INT16_MIN;

	t7 = (x29*((x30^x31)%x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MIN;
	uint64_t x35 = UINT64_MAX;
	static volatile int32_t x36 = -1;
	uint64_t t8 = 989916LLU;

	t8 = (x33*((x34^x35)%x36));

	if (t8 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int8_t x38 = INT8_MIN;
	uint8_t x39 = 92U;
	int64_t x40 = -1LL;
	static volatile int64_t t9 = 3429982LL;

	t9 = (x37*((x38^x39)%x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x42 = INT8_MAX;
	volatile uint32_t t10 = 109591660U;

	t10 = (x41*((x42^x43)%x44));

	if (t10 != 553505U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	volatile int64_t x46 = 2096LL;
	static int16_t x48 = INT16_MAX;
	int64_t t11 = 736LL;

	t11 = (x45*((x46^x47)%x48));

	if (t11 != 850722816LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = UINT32_MAX;
	int64_t x50 = INT64_MAX;
	uint32_t x51 = 113624U;
	int32_t x52 = -66939898;
	volatile int64_t t12 = 701334LL;

	t12 = (x49*((x50^x51)%x52));

	if (t12 != 18858707471106075LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 32;
	int64_t x54 = INT64_MIN;
	volatile uint8_t x55 = UINT8_MAX;
	int32_t x56 = INT32_MIN;
	volatile int64_t t13 = 16353981645349098LL;

	t13 = (x53*((x54^x55)%x56));

	if (t13 != -68719468576LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = 24755U;
	int32_t x63 = INT32_MIN;
	int64_t x64 = 681444LL;
	int64_t t14 = 19236LL;

	t14 = (x61*((x62^x63)%x64));

	if (t14 != -6272793225LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	static int16_t x66 = INT16_MIN;
	static int8_t x67 = INT8_MAX;
	uint8_t x68 = 23U;
	int32_t t15 = -3611;

	t15 = (x65*((x66^x67)%x68));

	if (t15 != 512) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = INT8_MIN;
	int64_t x71 = 14729965LL;
	volatile int32_t x72 = -5338;

	t16 = (x69*((x70^x71)%x72));

	if (t16 != -152893155LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MIN;
	volatile int32_t x74 = INT32_MIN;
	static uint16_t x76 = UINT16_MAX;
	int32_t t17 = -10303;

	t17 = (x73*((x74^x75)%x76));

	if (t17 != 32768) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = INT16_MIN;
	volatile int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MIN;
	uint8_t x80 = 61U;
	int64_t t18 = -2792849LL;

	t18 = (x77*((x78^x79)%x80));

	if (t18 != -327680LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x82 = 7;
	volatile int16_t x83 = -39;
	volatile int8_t x84 = -1;
	volatile int64_t t19 = -4983399396LL;

	t19 = (x81*((x82^x83)%x84));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 405137LLU;
	uint8_t x86 = 1U;
	static uint64_t t20 = 2LLU;

	t20 = (x85*((x86^x87)%x88));

	if (t20 != 18446744073708741342LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x90 = 461LLU;
	volatile int32_t x92 = INT32_MAX;
	static uint64_t t21 = 0LLU;

	t21 = (x89*((x90^x91)%x92));

	if (t21 != 18446744073709519310LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = -262738356;
	uint8_t x95 = 41U;
	static volatile int16_t x96 = INT16_MIN;
	uint64_t t22 = 476742470735058172LLU;

	t22 = (x93*((x94^x95)%x96));

	if (t22 != 5844373824212579447LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 547U;
	uint8_t x98 = 14U;
	int64_t x99 = INT64_MAX;

	t23 = (x97*((x98^x99)%x100));

	if (t23 != 2097226444LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x101 = UINT16_MAX;
	static int64_t x102 = 11277236436991LL;
	int16_t x103 = -1;
	uint8_t x104 = 19U;
	volatile int64_t t24 = 20757LL;

	t24 = (x101*((x102^x103)%x104));

	if (t24 != -851955LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = INT8_MIN;
	uint8_t x106 = 1U;
	int16_t x107 = INT16_MIN;
	static int32_t x108 = INT32_MIN;
	int32_t t25 = 178;

	t25 = (x105*((x106^x107)%x108));

	if (t25 != 4194176) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = 3600;
	int64_t x114 = 30LL;
	volatile uint16_t x115 = UINT16_MAX;
	uint64_t t26 = 2871LLU;

	t26 = (x113*((x114^x115)%x116));

	if (t26 != 212400LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x118 = INT8_MAX;
	int16_t x119 = -4;
	static uint64_t x120 = 58925408146LLU;
	volatile uint64_t t27 = 68LLU;

	t27 = (x117*((x118^x119)%x120));

	if (t27 != 114524412555LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x121 = UINT32_MAX;
	uint64_t x123 = 449781977419261627LLU;
	static int64_t x124 = INT64_MAX;
	uint64_t t28 = 667052239992LLU;

	t28 = (x121*((x122^x123)%x124));

	if (t28 != 4020390209881548475LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x125 = UINT64_MAX;
	uint16_t x126 = UINT16_MAX;
	volatile uint16_t x127 = UINT16_MAX;
	int32_t x128 = INT32_MAX;
	uint64_t t29 = 103769059395LLU;

	t29 = (x125*((x126^x127)%x128));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x131 = INT16_MAX;
	static uint64_t x132 = 15471724LLU;
	static uint64_t t30 = 33230313LLU;

	t30 = (x129*((x130^x131)%x132));

	if (t30 != 135882648LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 93LLU;
	uint64_t x134 = 70423347453700903LLU;
	int8_t x135 = -23;
	volatile uint64_t t31 = 4048LLU;

	t31 = (x133*((x134^x135)%x136));

	if (t31 != 76595431656LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x137 = UINT8_MAX;
	uint8_t x138 = 60U;
	int32_t x139 = INT32_MIN;
	volatile int32_t x140 = 17;
	volatile int32_t t32 = -12716;

	t32 = (x137*((x138^x139)%x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = 21U;
	volatile uint16_t x146 = 4871U;
	volatile int64_t x147 = INT64_MIN;
	int32_t x148 = INT32_MIN;
	volatile int64_t t33 = -41067086LL;

	t33 = (x145*((x146^x147)%x148));

	if (t33 != -45097054317LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x149 = 0U;
	int64_t x150 = 16100075930802126LL;

	t34 = (x149*((x150^x151)%x152));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MIN;
	static uint32_t x154 = 237115U;
	volatile int64_t t35 = -744LL;

	t35 = (x153*((x154^x155)%x156));

	if (t35 != -28369408LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MIN;
	int8_t x158 = -1;
	static int8_t x159 = INT8_MAX;
	int8_t x160 = INT8_MIN;
	int32_t t36 = 2;

	t36 = (x157*((x158^x159)%x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x161 = UINT8_MAX;
	volatile uint32_t x162 = 1595410U;
	int8_t x163 = INT8_MIN;
	uint16_t x164 = 6475U;
	uint32_t t37 = 1491214U;

	t37 = (x161*((x162^x163)%x164));

	if (t37 != 4845U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x165 = UINT32_MAX;
	int16_t x166 = -15437;
	int8_t x167 = INT8_MAX;
	static uint32_t t38 = 1U;

	t38 = (x165*((x166^x167)%x168));

	if (t38 != 15412U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = 6755LL;
	static volatile int64_t x175 = -1381535463235622LL;
	int16_t x176 = 45;
	volatile int64_t t39 = -2256840568008057119LL;

	t39 = (x173*((x174^x175)%x176));

	if (t39 != -108080LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x178 = INT64_MIN;
	static int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MIN;
	int64_t t40 = 90308545820462242LL;

	t40 = (x177*((x178^x179)%x180));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x185 = UINT8_MAX;
	static int8_t x186 = INT8_MAX;
	static volatile int16_t x187 = INT16_MIN;
	int64_t x188 = 552094091874776109LL;
	volatile int64_t t41 = 44953LL;

	t41 = (x185*((x186^x187)%x188));

	if (t41 != -8323455LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x189 = 16220U;
	static int16_t x190 = -1;
	static int32_t x191 = -72869662;
	int32_t t42 = 14;

	t42 = (x189*((x190^x191)%x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x197 = INT8_MAX;
	static int64_t x199 = INT64_MAX;
	int32_t x200 = INT32_MIN;

	t43 = (x197*((x198^x199)%x200));

	if (t43 != -127LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x202 = 38U;
	int16_t x203 = INT16_MAX;

	t44 = (x201*((x202^x203)%x204));

	if (t44 != 32729LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x209 = 0;
	uint64_t x210 = 43641450452LLU;
	uint64_t x212 = 4986771738LLU;
	uint64_t t45 = 819600699365LLU;

	t45 = (x209*((x210^x211)%x212));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x213 = -308;
	int32_t x214 = INT32_MIN;
	int32_t x215 = 6;
	volatile uint32_t x216 = 63U;

	t46 = (x213*((x214^x215)%x216));

	if (t46 != 4294964832U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x217 = UINT16_MAX;
	volatile int32_t x218 = -486241;
	static volatile int64_t x220 = INT64_MIN;
	int64_t t47 = -58LL;

	t47 = (x217*((x218^x219)%x220));

	if (t47 != 31865738400LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x221 = 6364U;
	int16_t x223 = INT16_MIN;
	static int32_t x224 = INT32_MAX;
	volatile int32_t t48 = 14066;

	t48 = (x221*((x222^x223)%x224));

	if (t48 != -203838920) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x225 = 0;
	uint8_t x226 = 4U;
	static int16_t x227 = INT16_MIN;
	uint64_t t49 = 365991759721978565LLU;

	t49 = (x225*((x226^x227)%x228));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x229 = -10159836;
	int64_t x230 = INT64_MAX;
	int64_t x231 = -1LL;
	int64_t t50 = -278193LL;

	t50 = (x229*((x230^x231)%x232));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x233 = UINT8_MAX;
	int64_t x234 = INT64_MIN;
	int16_t x235 = INT16_MIN;
	static int64_t x236 = -747965906945254LL;

	t51 = (x233*((x234^x235)%x236));

	if (t51 != 52131769768071330LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x237 = -1;
	int32_t x238 = -54179;
	int64_t x239 = -1LL;
	int16_t x240 = -79;
	volatile int64_t t52 = 1240021999624LL;

	t52 = (x237*((x238^x239)%x240));

	if (t52 != -63LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = INT16_MIN;
	int64_t x243 = -1LL;
	int8_t x244 = INT8_MAX;
	volatile int64_t t53 = -13363232399786589LL;

	t53 = (x241*((x242^x243)%x244));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x245 = 373U;
	volatile uint16_t x246 = 78U;
	int8_t x247 = -1;
	static int32_t x248 = 43935;
	volatile uint32_t t54 = 1U;

	t54 = (x245*((x246^x247)%x248));

	if (t54 != 4294937829U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MIN;
	uint16_t x250 = 52U;
	int8_t x251 = INT8_MAX;
	uint8_t x252 = UINT8_MAX;
	int32_t t55 = -21;

	t55 = (x249*((x250^x251)%x252));

	if (t55 != -9600) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = UINT64_MAX;
	static uint32_t x254 = UINT32_MAX;
	static uint64_t x256 = 926109LLU;
	volatile uint64_t t56 = 18218798421390LLU;

	t56 = (x253*((x254^x255)%x256));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x257 = 1U;
	int32_t x258 = INT32_MAX;
	int64_t x259 = -18059934209LL;
	int16_t x260 = -1;
	volatile int64_t t57 = 60181903294293290LL;

	t57 = (x257*((x258^x259)%x260));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x261 = -1;
	volatile int16_t x262 = INT16_MIN;
	static uint32_t x263 = UINT32_MAX;
	uint32_t x264 = 4153U;
	uint32_t t58 = 501322360U;

	t58 = (x261*((x262^x263)%x264));

	if (t58 != 4294963600U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x265 = 80U;
	uint8_t x266 = 48U;
	int8_t x267 = INT8_MIN;
	static volatile int64_t x268 = 2716763986LL;
	int64_t t59 = -323LL;

	t59 = (x265*((x266^x267)%x268));

	if (t59 != -6400LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x270 = 3U;
	uint8_t x271 = 7U;
	int8_t x272 = -3;
	static uint32_t t60 = 615U;

	t60 = (x269*((x270^x271)%x272));

	if (t60 != 308U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x273 = 28;
	int64_t x274 = INT64_MAX;
	volatile int32_t x275 = -1;
	int32_t x276 = -361704641;
	volatile int64_t t61 = -94873768LL;

	t61 = (x273*((x274^x275)%x276));

	if (t61 != -7820596896LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x277 = UINT16_MAX;
	uint64_t x278 = 76LLU;
	int64_t x279 = INT64_MAX;
	static volatile uint32_t x280 = UINT32_MAX;
	uint64_t t62 = 33LLU;

	t62 = (x277*((x278^x279)%x280));

	if (t62 != 140735335825485LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = 0;
	int32_t x282 = -1;
	static volatile uint32_t x283 = 7432121U;
	volatile uint32_t t63 = 14381U;

	t63 = (x281*((x282^x283)%x284));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x286 = 19U;
	int64_t x287 = -1LL;
	int8_t x288 = -1;
	volatile int64_t t64 = 4476LL;

	t64 = (x285*((x286^x287)%x288));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x289 = UINT16_MAX;
	int8_t x290 = INT8_MIN;
	int32_t x292 = -1;
	volatile int32_t t65 = -348350899;

	t65 = (x289*((x290^x291)%x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x298 = 0;
	int8_t x299 = INT8_MAX;
	static uint8_t x300 = 3U;
	volatile int32_t t66 = -20;

	t66 = (x297*((x298^x299)%x300));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = 19LL;
	volatile int16_t x302 = INT16_MAX;
	int16_t x303 = INT16_MAX;
	static int64_t x304 = -381629348408LL;

	t67 = (x301*((x302^x303)%x304));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = INT16_MIN;
	int8_t x312 = -1;
	volatile int64_t t68 = -11282863710LL;

	t68 = (x309*((x310^x311)%x312));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x317 = 76299347LLU;
	int64_t x318 = -1LL;
	int32_t x319 = INT32_MIN;
	int8_t x320 = -2;
	volatile uint64_t t69 = 186236808593470LLU;

	t69 = (x317*((x318^x319)%x320));

	if (t69 != 76299347LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x321 = INT64_MIN;
	uint64_t x322 = UINT64_MAX;
	uint32_t x324 = UINT32_MAX;

	t70 = (x321*((x322^x323)%x324));

	if (t70 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x326 = 3;
	static volatile int32_t x327 = INT32_MIN;
	static uint32_t t71 = 3U;

	t71 = (x325*((x326^x327)%x328));

	if (t71 != 4294966872U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x329 = UINT32_MAX;
	int16_t x330 = -1;
	uint16_t x331 = UINT16_MAX;
	volatile uint32_t x332 = 87390U;
	volatile uint32_t t72 = 13195564U;

	t72 = (x329*((x330^x331)%x332));

	if (t72 != 4294934476U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x333 = 336LLU;
	volatile int32_t x335 = INT32_MIN;
	int8_t x336 = INT8_MAX;
	uint64_t t73 = 25117148430568LLU;

	t73 = (x333*((x334^x335)%x336));

	if (t73 != 5712LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x337 = UINT16_MAX;
	int16_t x338 = -1;
	int32_t x340 = -184354;
	volatile int64_t t74 = 19127709LL;

	t74 = (x337*((x338^x339)%x340));

	if (t74 != -8234341680LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x342 = 12;
	static int32_t x343 = -1;
	uint32_t x344 = 3U;
	static volatile uint32_t t75 = 13229344U;

	t75 = (x341*((x342^x343)%x344));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = UINT8_MAX;
	int8_t x346 = -5;
	static uint16_t x347 = 184U;
	int32_t x348 = -1;

	t76 = (x345*((x346^x347)%x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x349 = 0;
	static int32_t x350 = 93868;
	static uint32_t x351 = 58411U;
	uint64_t x352 = 48376LLU;
	volatile uint64_t t77 = 1500540774233777095LLU;

	t77 = (x349*((x350^x351)%x352));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x353 = 8578726;
	int8_t x354 = INT8_MAX;
	uint16_t x355 = 4U;
	int32_t x356 = -1;
	static volatile int32_t t78 = -59;

	t78 = (x353*((x354^x355)%x356));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x357 = -1;
	int8_t x358 = 1;
	volatile int8_t x359 = 1;
	int16_t x360 = INT16_MAX;
	static volatile int32_t t79 = -134037;

	t79 = (x357*((x358^x359)%x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x361 = 0LLU;
	int64_t x362 = INT64_MIN;
	int8_t x363 = INT8_MIN;
	volatile int32_t x364 = -1;
	volatile uint64_t t80 = 580072396634LLU;

	t80 = (x361*((x362^x363)%x364));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x367 = UINT64_MAX;
	int32_t x368 = -9;
	uint64_t t81 = 1660301894492538LLU;

	t81 = (x365*((x366^x367)%x368));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x369 = 3366053U;
	static int64_t x370 = -1LL;
	int32_t x371 = -1;
	static int32_t x372 = INT32_MAX;
	volatile int64_t t82 = 156382710867377LL;

	t82 = (x369*((x370^x371)%x372));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x373 = INT8_MIN;
	volatile int32_t x375 = -1;
	volatile int8_t x376 = -1;
	volatile int32_t t83 = 419511;

	t83 = (x373*((x374^x375)%x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x377 = INT16_MIN;
	volatile uint16_t x379 = 0U;
	volatile uint32_t t84 = 4U;

	t84 = (x377*((x378^x379)%x380));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x381 = UINT8_MAX;
	int8_t x382 = INT8_MIN;
	uint32_t x384 = 28508519U;
	uint32_t t85 = 11U;

	t85 = (x381*((x382^x383)%x384));

	if (t85 != 470591534U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x385 = 14U;
	static int16_t x386 = -1;
	int8_t x387 = INT8_MIN;
	volatile int32_t x388 = INT32_MIN;
	volatile int32_t t86 = 0;

	t86 = (x385*((x386^x387)%x388));

	if (t86 != 1778) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x393 = 609191;
	static uint32_t x394 = 24422U;
	uint32_t x395 = UINT32_MAX;
	uint64_t x396 = 67876310352LLU;

	t87 = (x393*((x394^x395)%x396));

	if (t87 != 2616440543745743LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x397 = -1;
	uint64_t x398 = 2169515739703114LLU;
	int64_t x399 = -1LL;
	static volatile uint32_t x400 = UINT32_MAX;

	t88 = (x397*((x398^x399)%x400));

	if (t88 != 18446744072619531380LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x403 = INT8_MAX;
	int32_t x404 = INT32_MIN;
	int32_t t89 = -1;

	t89 = (x401*((x402^x403)%x404));

	if (t89 != -65408) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x405 = 90U;
	static uint32_t x406 = 206U;
	uint16_t x407 = UINT16_MAX;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t90 = 234915088LLU;

	t90 = (x405*((x406^x407)%x408));

	if (t90 != 5879610LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x409 = INT8_MAX;
	static int16_t x412 = 36;
	static volatile uint64_t t91 = 4115LLU;

	t91 = (x409*((x410^x411)%x412));

	if (t91 != 1778LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x413 = UINT64_MAX;
	uint8_t x414 = 19U;
	uint16_t x416 = 1536U;

	t92 = (x413*((x414^x415)%x416));

	if (t92 != 20LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x419 = INT32_MAX;
	static volatile int32_t x420 = 13;
	volatile uint32_t t93 = 30125734U;

	t93 = (x417*((x418^x419)%x420));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x421 = INT16_MIN;
	uint64_t x422 = 458305828697722301LLU;
	int8_t x423 = -3;
	uint16_t x424 = 21U;
	uint64_t t94 = 12406878400094781LLU;

	t94 = (x421*((x422^x423)%x424));

	if (t94 != 18446744073709191168LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x426 = 21U;
	volatile uint32_t x427 = 819U;
	int16_t x428 = -1;
	static uint32_t t95 = 9027668U;

	t95 = (x425*((x426^x427)%x428));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x429 = 3U;
	int64_t x430 = -651334299064570179LL;
	uint8_t x431 = 0U;
	uint32_t x432 = 671000U;
	volatile int64_t t96 = -456129892021336LL;

	t96 = (x429*((x430^x431)%x432));

	if (t96 != -1815537LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = INT8_MAX;
	int16_t x434 = INT16_MAX;
	int8_t x436 = INT8_MIN;
	static int32_t t97 = -89601;

	t97 = (x433*((x434^x435)%x436));

	if (t97 != 16129) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x437 = 3;
	volatile uint16_t x438 = UINT16_MAX;
	int32_t x440 = INT32_MIN;
	static volatile int32_t t98 = -934194;

	t98 = (x437*((x438^x439)%x440));

	if (t98 != -196608) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x441 = INT32_MAX;
	uint64_t x442 = UINT64_MAX;
	volatile uint16_t x444 = 1U;
	volatile uint64_t t99 = 269540828593982616LLU;

	t99 = (x441*((x442^x443)%x444));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

