#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 663498;
int32_t t2 = 6;
volatile int16_t x28 = -184;
int32_t x39 = -1;
volatile int8_t x41 = INT8_MIN;
uint8_t x48 = 51U;
uint64_t t9 = 22LLU;
volatile int32_t t10 = 29776474;
int64_t x62 = 442788LL;
int16_t x68 = INT16_MAX;
int8_t x70 = 7;
volatile int16_t x72 = INT16_MIN;
volatile uint16_t x73 = UINT16_MAX;
uint16_t x76 = 0U;
static int64_t x83 = 14626211005LL;
int64_t x85 = INT64_MIN;
static int64_t t17 = 35370515380LL;
int32_t x106 = -1;
int32_t x110 = 3244;
int8_t x111 = -1;
int64_t x114 = -1LL;
int32_t x117 = -1;
int32_t x121 = -1;
uint32_t t27 = 251U;
volatile int32_t t30 = 816;
static volatile int64_t t32 = -3813616768LL;
volatile int8_t x154 = 2;
int64_t x164 = -1LL;
int16_t x171 = INT16_MIN;
volatile uint64_t t37 = 507LLU;
uint32_t x191 = UINT32_MAX;
uint16_t x193 = UINT16_MAX;
int64_t x211 = -877984481LL;
uint16_t x220 = 354U;
uint16_t x221 = 24U;
static int8_t x225 = 0;
volatile int32_t t46 = 958853;
volatile int16_t x232 = INT16_MIN;
static volatile int64_t x235 = 146270632877738LL;
volatile int64_t t48 = -92623544575LL;
int16_t x237 = -789;
static uint8_t x240 = 58U;
static int16_t x241 = INT16_MIN;
int32_t x243 = INT32_MIN;
int64_t t51 = 9527960746LL;
int16_t x264 = INT16_MIN;
volatile uint32_t t54 = 5451222U;
volatile int16_t x266 = INT16_MIN;
int64_t x268 = 44032164LL;
static int16_t x278 = -1;
static int64_t x280 = -206327LL;
volatile int16_t x296 = INT16_MIN;
static int32_t x297 = -1;
int64_t t63 = -3883LL;
int32_t x305 = 137;
int16_t x311 = INT16_MIN;
int32_t t67 = 533731;
uint64_t x343 = UINT64_MAX;
int32_t x345 = INT32_MAX;
uint8_t x355 = UINT8_MAX;
static volatile int32_t t73 = 27;
volatile int16_t x365 = -1;
static int32_t x376 = -471003652;
volatile int64_t t78 = 3832144126976086430LL;
int64_t x383 = -2466974044377LL;
static int32_t x384 = INT32_MIN;
int16_t x399 = INT16_MIN;
volatile int16_t x406 = INT16_MIN;
int8_t x417 = INT8_MIN;
uint32_t x419 = 247566U;
int8_t x423 = -11;
static uint8_t x430 = 0U;
uint64_t t90 = 78416943740607LLU;
static int32_t t91 = 0;
uint32_t x445 = 5431425U;
int8_t x452 = -1;
static int32_t t94 = 21886;
int16_t x464 = 46;
int64_t t96 = -6514152085528LL;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	int32_t x2 = INT32_MIN;
	int8_t x3 = -1;
	int16_t x4 = INT16_MIN;

	t0 = ((x1<=x2)*(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x13 = 1;
	int16_t x14 = 3599;
	uint64_t x15 = 241619008027494LLU;
	static int16_t x16 = INT16_MAX;
	volatile uint64_t t1 = 457LLU;

	t1 = ((x13<=x14)*(x15-x16));

	if (t1 != 241619007994727LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = 706U;
	uint8_t x18 = 77U;
	int16_t x19 = INT16_MIN;
	static int32_t x20 = INT32_MIN;

	t2 = ((x17<=x18)*(x19-x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x21 = INT32_MIN;
	int16_t x22 = INT16_MIN;
	uint16_t x23 = UINT16_MAX;
	int8_t x24 = 3;
	volatile int32_t t3 = 4;

	t3 = ((x21<=x22)*(x23-x24));

	if (t3 != 65532) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MIN;
	int16_t x26 = 2824;
	int16_t x27 = INT16_MIN;
	volatile int32_t t4 = 2792;

	t4 = ((x25<=x26)*(x27-x28));

	if (t4 != -32584) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -7692;
	int32_t x30 = INT32_MIN;
	static int64_t x31 = 113LL;
	static uint32_t x32 = UINT32_MAX;
	volatile int64_t t5 = 223291840LL;

	t5 = ((x29<=x30)*(x31-x32));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = INT64_MIN;
	uint8_t x38 = UINT8_MAX;
	uint64_t x40 = 74LLU;
	uint64_t t6 = 5224445521LLU;

	t6 = ((x37<=x38)*(x39-x40));

	if (t6 != 18446744073709551541LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x42 = UINT16_MAX;
	int64_t x43 = -1LL;
	int64_t x44 = -5076LL;
	volatile int64_t t7 = -25109398LL;

	t7 = ((x41<=x42)*(x43-x44));

	if (t7 != 5075LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = INT64_MIN;
	uint8_t x46 = 1U;
	uint16_t x47 = 15U;
	volatile int32_t t8 = -115365030;

	t8 = ((x45<=x46)*(x47-x48));

	if (t8 != -36) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = -1LL;
	int64_t x54 = 15LL;
	uint64_t x55 = UINT64_MAX;
	volatile int32_t x56 = INT32_MAX;

	t9 = ((x53<=x54)*(x55-x56));

	if (t9 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x57 = UINT32_MAX;
	uint16_t x58 = 3U;
	int16_t x59 = INT16_MIN;
	volatile uint16_t x60 = 1U;

	t10 = ((x57<=x58)*(x59-x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = -1LL;
	static int32_t x63 = INT32_MAX;
	volatile uint32_t x64 = 2969602U;
	uint32_t t11 = 1802316164U;

	t11 = ((x61<=x62)*(x63-x64));

	if (t11 != 2144514045U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = 2292U;
	uint16_t x66 = 386U;
	int32_t x67 = -1;
	volatile int32_t t12 = 26894;

	t12 = ((x65<=x66)*(x67-x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = INT32_MIN;
	uint16_t x71 = UINT16_MAX;
	static volatile int32_t t13 = -2095;

	t13 = ((x69<=x70)*(x71-x72));

	if (t13 != 98303) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x74 = 78206176967668LL;
	int64_t x75 = INT64_MIN;
	volatile int64_t t14 = INT64_MIN;

	t14 = ((x73<=x74)*(x75-x76));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x77 = -1;
	uint32_t x78 = 287303491U;
	uint16_t x79 = 4U;
	int16_t x80 = -71;
	int32_t t15 = -4;

	t15 = ((x77<=x78)*(x79-x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = -1;
	static int16_t x82 = -4400;
	int8_t x84 = INT8_MAX;
	int64_t t16 = 54715356491541024LL;

	t16 = ((x81<=x82)*(x83-x84));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x86 = 28323U;
	int16_t x87 = INT16_MIN;
	volatile int64_t x88 = 7527950650482172LL;

	t17 = ((x85<=x86)*(x87-x88));

	if (t17 != -7527950650514940LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MIN;
	int16_t x90 = INT16_MAX;
	uint64_t x91 = UINT64_MAX;
	int16_t x92 = INT16_MIN;
	static uint64_t t18 = 3708254787904LLU;

	t18 = ((x89<=x90)*(x91-x92));

	if (t18 != 32767LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MAX;
	int32_t x94 = INT32_MIN;
	int64_t x95 = 13363LL;
	static volatile uint32_t x96 = UINT32_MAX;
	volatile int64_t t19 = -423LL;

	t19 = ((x93<=x94)*(x95-x96));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = 6;
	uint16_t x98 = 15U;
	volatile int16_t x99 = INT16_MAX;
	uint64_t x100 = 161595600709947085LLU;
	uint64_t t20 = 157050LLU;

	t20 = ((x97<=x98)*(x99-x100));

	if (t20 != 18285148472999637298LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = 645945056U;
	int16_t x102 = INT16_MIN;
	int8_t x103 = INT8_MAX;
	int16_t x104 = INT16_MIN;
	int32_t t21 = 0;

	t21 = ((x101<=x102)*(x103-x104));

	if (t21 != 32895) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x105 = -15055;
	int8_t x107 = 1;
	int64_t x108 = INT64_MAX;
	static volatile int64_t t22 = -1555520LL;

	t22 = ((x105<=x106)*(x107-x108));

	if (t22 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = 54U;
	uint16_t x112 = 12U;
	int32_t t23 = -4;

	t23 = ((x109<=x110)*(x111-x112));

	if (t23 != -13) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -1LL;
	int8_t x115 = INT8_MIN;
	uint32_t x116 = UINT32_MAX;
	uint32_t t24 = 26U;

	t24 = ((x113<=x114)*(x115-x116));

	if (t24 != 4294967169U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x118 = INT32_MIN;
	int16_t x119 = -1;
	volatile int8_t x120 = INT8_MIN;
	int32_t t25 = 721956463;

	t25 = ((x117<=x118)*(x119-x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x122 = 2;
	volatile int64_t x123 = 0LL;
	volatile int64_t x124 = -1LL;
	int64_t t26 = -155632372643LL;

	t26 = ((x121<=x122)*(x123-x124));

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x125 = INT8_MIN;
	volatile uint8_t x126 = 48U;
	int32_t x127 = -4;
	uint32_t x128 = UINT32_MAX;

	t27 = ((x125<=x126)*(x127-x128));

	if (t27 != 4294967293U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = 1;
	int64_t x134 = INT64_MAX;
	int64_t x135 = 1503428611LL;
	uint8_t x136 = UINT8_MAX;
	int64_t t28 = -553147988654LL;

	t28 = ((x133<=x134)*(x135-x136));

	if (t28 != 1503428356LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = 0LLU;
	uint16_t x138 = 14U;
	volatile uint64_t x139 = 88LLU;
	int32_t x140 = -1;
	uint64_t t29 = 21674592763LLU;

	t29 = ((x137<=x138)*(x139-x140));

	if (t29 != 89LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = -1;
	int64_t x142 = -1LL;
	volatile int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MIN;

	t30 = ((x141<=x142)*(x143-x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = -2831055802LL;
	volatile uint64_t x146 = UINT64_MAX;
	static int32_t x147 = -1;
	volatile uint8_t x148 = 20U;
	static volatile int32_t t31 = -7;

	t31 = ((x145<=x146)*(x147-x148));

	if (t31 != -21) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x149 = INT32_MAX;
	uint16_t x150 = 22U;
	int64_t x151 = -110762LL;
	uint8_t x152 = 23U;

	t32 = ((x149<=x150)*(x151-x152));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = -10;
	volatile int16_t x155 = -1;
	int8_t x156 = INT8_MIN;
	static volatile int32_t t33 = 19052268;

	t33 = ((x153<=x154)*(x155-x156));

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = INT32_MIN;
	static int64_t x158 = 750724536LL;
	static int64_t x159 = -891626061665964LL;
	int32_t x160 = INT32_MIN;
	volatile int64_t t34 = -19449197802LL;

	t34 = ((x157<=x158)*(x159-x160));

	if (t34 != -891623914182316LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = 3100567238LLU;
	int16_t x162 = INT16_MAX;
	volatile int32_t x163 = -1;
	int64_t t35 = 1913746585LL;

	t35 = ((x161<=x162)*(x163-x164));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = INT64_MAX;
	static uint32_t x166 = 60141U;
	uint8_t x167 = 1U;
	static volatile int64_t x168 = 22146499157LL;
	static volatile int64_t t36 = -548484938920260LL;

	t36 = ((x165<=x166)*(x167-x168));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x169 = INT8_MAX;
	uint8_t x170 = 1U;
	uint64_t x172 = 434798368269891110LLU;

	t37 = ((x169<=x170)*(x171-x172));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x177 = -1LL;
	volatile int8_t x178 = -1;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t38 = 375548;

	t38 = ((x177<=x178)*(x179-x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x185 = 84621022482161LL;
	volatile int64_t x186 = INT64_MIN;
	uint32_t x187 = 5405593U;
	uint64_t x188 = 425LLU;
	volatile uint64_t t39 = 2083404611881149227LLU;

	t39 = ((x185<=x186)*(x187-x188));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x189 = 1;
	volatile uint16_t x190 = UINT16_MAX;
	volatile int64_t x192 = -4248290820614509192LL;
	int64_t t40 = -7732705LL;

	t40 = ((x189<=x190)*(x191-x192));

	if (t40 != 4248290824909476487LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x194 = -1772828397LL;
	static volatile int64_t x195 = 12LL;
	int8_t x196 = INT8_MAX;
	volatile int64_t t41 = 503978448235861846LL;

	t41 = ((x193<=x194)*(x195-x196));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = INT32_MAX;
	int64_t x210 = INT64_MIN;
	static int32_t x212 = -1;
	volatile int64_t t42 = -84LL;

	t42 = ((x209<=x210)*(x211-x212));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x213 = -322400LL;
	volatile uint64_t x214 = UINT64_MAX;
	static volatile int32_t x215 = INT32_MIN;
	volatile int64_t x216 = INT64_MIN;
	int64_t t43 = -56056LL;

	t43 = ((x213<=x214)*(x215-x216));

	if (t43 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x217 = 173546479LLU;
	int8_t x218 = -1;
	volatile int32_t x219 = -1;
	int32_t t44 = -263105;

	t44 = ((x217<=x218)*(x219-x220));

	if (t44 != -355) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x222 = INT32_MAX;
	static int16_t x223 = INT16_MIN;
	uint64_t x224 = UINT64_MAX;
	uint64_t t45 = 1312LLU;

	t45 = ((x221<=x222)*(x223-x224));

	if (t45 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x226 = 1425602516LLU;
	uint16_t x227 = 112U;
	int16_t x228 = -1;

	t46 = ((x225<=x226)*(x227-x228));

	if (t46 != 113) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = INT32_MIN;
	static int8_t x230 = 1;
	int64_t x231 = INT64_MIN;
	int64_t t47 = 40796091949LL;

	t47 = ((x229<=x230)*(x231-x232));

	if (t47 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x233 = INT8_MAX;
	static uint64_t x234 = UINT64_MAX;
	static int64_t x236 = INT64_MAX;

	t48 = ((x233<=x234)*(x235-x236));

	if (t48 != -9223225766221898069LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x238 = 450U;
	int16_t x239 = 64;
	int32_t t49 = 604172;

	t49 = ((x237<=x238)*(x239-x240));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x242 = INT8_MIN;
	static int32_t x244 = INT32_MIN;
	static int32_t t50 = 5;

	t50 = ((x241<=x242)*(x243-x244));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = INT32_MIN;
	int64_t x246 = 29090LL;
	static uint8_t x247 = UINT8_MAX;
	static int64_t x248 = -798401309087484LL;

	t51 = ((x245<=x246)*(x247-x248));

	if (t51 != 798401309087739LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x253 = UINT64_MAX;
	int8_t x254 = INT8_MIN;
	int32_t x255 = INT32_MAX;
	static volatile int32_t x256 = 9;
	static int32_t t52 = -261362;

	t52 = ((x253<=x254)*(x255-x256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x257 = 46U;
	int8_t x258 = INT8_MIN;
	static int64_t x259 = -1LL;
	volatile int16_t x260 = -104;
	volatile int64_t t53 = -1336833682444789135LL;

	t53 = ((x257<=x258)*(x259-x260));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x261 = UINT8_MAX;
	uint32_t x262 = 199284770U;
	uint32_t x263 = 11U;

	t54 = ((x261<=x262)*(x263-x264));

	if (t54 != 32779U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x265 = 3U;
	static int8_t x267 = INT8_MAX;
	volatile int64_t t55 = -1015683101832372729LL;

	t55 = ((x265<=x266)*(x267-x268));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x269 = 20U;
	static int32_t x270 = -1;
	int16_t x271 = INT16_MIN;
	uint8_t x272 = 0U;
	static volatile int32_t t56 = -32533147;

	t56 = ((x269<=x270)*(x271-x272));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x273 = INT8_MIN;
	volatile int64_t x274 = INT64_MIN;
	static volatile int32_t x275 = INT32_MIN;
	int8_t x276 = INT8_MIN;
	static int32_t t57 = 1;

	t57 = ((x273<=x274)*(x275-x276));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = INT32_MIN;
	uint32_t x279 = UINT32_MAX;
	int64_t t58 = 332969365LL;

	t58 = ((x277<=x278)*(x279-x280));

	if (t58 != 4295173622LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x285 = 29516970319897133LLU;
	uint8_t x286 = UINT8_MAX;
	volatile uint32_t x287 = 50832U;
	int8_t x288 = INT8_MIN;
	uint32_t t59 = 102U;

	t59 = ((x285<=x286)*(x287-x288));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x289 = 16989165278LL;
	static uint16_t x290 = 14949U;
	volatile int8_t x291 = INT8_MIN;
	static int16_t x292 = INT16_MIN;
	int32_t t60 = -850;

	t60 = ((x289<=x290)*(x291-x292));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x293 = 3955849LL;
	int64_t x294 = -1LL;
	static volatile int8_t x295 = INT8_MIN;
	int32_t t61 = -1026002571;

	t61 = ((x293<=x294)*(x295-x296));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x298 = 47373;
	int8_t x299 = INT8_MIN;
	uint64_t x300 = UINT64_MAX;
	static volatile uint64_t t62 = 15253LLU;

	t62 = ((x297<=x298)*(x299-x300));

	if (t62 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = -102;
	volatile int16_t x302 = 18;
	int64_t x303 = INT64_MIN;
	volatile int64_t x304 = -42801088144LL;

	t63 = ((x301<=x302)*(x303-x304));

	if (t63 != -9223371994053687664LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x306 = 239U;
	int64_t x307 = -83LL;
	volatile int32_t x308 = -1;
	volatile int64_t t64 = 49444LL;

	t64 = ((x305<=x306)*(x307-x308));

	if (t64 != -82LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x309 = 5338016140LLU;
	volatile uint32_t x310 = 228496U;
	int8_t x312 = INT8_MIN;
	volatile int32_t t65 = -3798;

	t65 = ((x309<=x310)*(x311-x312));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = -1;
	int64_t x314 = -579372470LL;
	static int32_t x315 = -1;
	int32_t x316 = INT32_MIN;
	int32_t t66 = -81;

	t66 = ((x313<=x314)*(x315-x316));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x329 = -1449831637484LL;
	static uint64_t x330 = 37LLU;
	static int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MIN;

	t67 = ((x329<=x330)*(x331-x332));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x333 = -12;
	int64_t x334 = INT64_MIN;
	int16_t x335 = INT16_MIN;
	volatile int16_t x336 = -614;
	int32_t t68 = -605551;

	t68 = ((x333<=x334)*(x335-x336));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x337 = UINT8_MAX;
	static int64_t x338 = INT64_MIN;
	uint64_t x339 = 11438463105595LLU;
	int16_t x340 = INT16_MIN;
	uint64_t t69 = 8173056149793LLU;

	t69 = ((x337<=x338)*(x339-x340));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x341 = 77969586LL;
	int32_t x342 = INT32_MAX;
	volatile int16_t x344 = 367;
	static volatile uint64_t t70 = 29364183744LLU;

	t70 = ((x341<=x342)*(x343-x344));

	if (t70 != 18446744073709551248LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x346 = 1643539699U;
	static int64_t x347 = INT64_MAX;
	uint8_t x348 = UINT8_MAX;
	int64_t t71 = 41650356610619LL;

	t71 = ((x345<=x346)*(x347-x348));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x349 = -1922;
	int32_t x350 = 725409;
	volatile uint32_t x351 = 27U;
	int8_t x352 = -1;
	uint32_t t72 = 11642U;

	t72 = ((x349<=x350)*(x351-x352));

	if (t72 != 28U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x353 = -24;
	volatile int16_t x354 = -1;
	int16_t x356 = 5;

	t73 = ((x353<=x354)*(x355-x356));

	if (t73 != 250) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x357 = INT32_MIN;
	int64_t x358 = INT64_MIN;
	int8_t x359 = -1;
	int32_t x360 = 14787;
	static volatile int32_t t74 = 20;

	t74 = ((x357<=x358)*(x359-x360));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x361 = 414LL;
	volatile int16_t x362 = INT16_MAX;
	int32_t x363 = INT32_MAX;
	int64_t x364 = INT64_MAX;
	volatile int64_t t75 = -40749967974550LL;

	t75 = ((x361<=x362)*(x363-x364));

	if (t75 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x366 = -1LL;
	uint16_t x367 = UINT16_MAX;
	int32_t x368 = -12;
	static int32_t t76 = 1;

	t76 = ((x365<=x366)*(x367-x368));

	if (t76 != 65547) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x369 = 139699710476468037LLU;
	int64_t x370 = INT64_MIN;
	int32_t x371 = INT32_MIN;
	uint64_t x372 = UINT64_MAX;
	volatile uint64_t t77 = 119336LLU;

	t77 = ((x369<=x370)*(x371-x372));

	if (t77 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x373 = -1;
	int32_t x374 = -858562;
	int64_t x375 = -1LL;

	t78 = ((x373<=x374)*(x375-x376));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x377 = 534111516851321470LL;
	uint32_t x378 = 1133U;
	int32_t x379 = INT32_MAX;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t79 = -62;

	t79 = ((x377<=x378)*(x379-x380));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x381 = UINT64_MAX;
	uint16_t x382 = 360U;
	volatile int64_t t80 = -717010490358855LL;

	t80 = ((x381<=x382)*(x383-x384));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x389 = -1LL;
	int32_t x390 = INT32_MAX;
	int8_t x391 = INT8_MIN;
	int64_t x392 = 7369510LL;
	volatile int64_t t81 = -5LL;

	t81 = ((x389<=x390)*(x391-x392));

	if (t81 != -7369638LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x393 = INT64_MIN;
	static int32_t x394 = INT32_MAX;
	static volatile int64_t x395 = -36216037LL;
	int16_t x396 = INT16_MAX;
	volatile int64_t t82 = 194156608584183LL;

	t82 = ((x393<=x394)*(x395-x396));

	if (t82 != -36248804LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x397 = 2;
	int16_t x398 = -1;
	volatile uint16_t x400 = 61U;
	int32_t t83 = 33907;

	t83 = ((x397<=x398)*(x399-x400));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x405 = 12U;
	uint8_t x407 = 83U;
	int32_t x408 = INT32_MAX;
	static volatile int32_t t84 = -454383831;

	t84 = ((x405<=x406)*(x407-x408));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x409 = INT8_MAX;
	uint16_t x410 = 2655U;
	uint8_t x411 = 79U;
	uint8_t x412 = UINT8_MAX;
	volatile int32_t t85 = 1804;

	t85 = ((x409<=x410)*(x411-x412));

	if (t85 != -176) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x413 = INT32_MAX;
	int8_t x414 = 3;
	int32_t x415 = -605697;
	uint64_t x416 = 32980417495LLU;
	volatile uint64_t t86 = 61047321LLU;

	t86 = ((x413<=x414)*(x415-x416));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x418 = -1LL;
	static uint32_t x420 = 666029096U;
	volatile uint32_t t87 = 2990351U;

	t87 = ((x417<=x418)*(x419-x420));

	if (t87 != 3629185766U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x421 = INT64_MIN;
	int8_t x422 = -1;
	static int16_t x424 = INT16_MAX;
	static int32_t t88 = -342811;

	t88 = ((x421<=x422)*(x423-x424));

	if (t88 != -32778) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x425 = -42930232233591909LL;
	int8_t x426 = INT8_MAX;
	int16_t x427 = INT16_MIN;
	volatile int16_t x428 = INT16_MIN;
	int32_t t89 = 6;

	t89 = ((x425<=x426)*(x427-x428));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x429 = INT8_MIN;
	int32_t x431 = -1;
	uint64_t x432 = 3908LLU;

	t90 = ((x429<=x430)*(x431-x432));

	if (t90 != 18446744073709547707LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x437 = INT64_MAX;
	static int16_t x438 = INT16_MIN;
	static int32_t x439 = -1;
	int32_t x440 = -1;

	t91 = ((x437<=x438)*(x439-x440));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x446 = 101253;
	volatile uint8_t x447 = 4U;
	volatile uint64_t x448 = 232286159LLU;
	volatile uint64_t t92 = 30202787451574742LLU;

	t92 = ((x445<=x446)*(x447-x448));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x449 = 2U;
	uint32_t x450 = 10U;
	static int8_t x451 = -1;
	int32_t t93 = 209641;

	t93 = ((x449<=x450)*(x451-x452));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x453 = -1;
	int8_t x454 = INT8_MIN;
	uint16_t x455 = UINT16_MAX;
	static volatile uint16_t x456 = UINT16_MAX;

	t94 = ((x453<=x454)*(x455-x456));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x457 = -4042;
	static uint16_t x458 = 11463U;
	uint8_t x459 = 1U;
	volatile int32_t x460 = -1896134;
	int32_t t95 = -1;

	t95 = ((x457<=x458)*(x459-x460));

	if (t95 != 1896135) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x461 = UINT16_MAX;
	volatile uint32_t x462 = 16185092U;
	int64_t x463 = -265677654LL;

	t96 = ((x461<=x462)*(x463-x464));

	if (t96 != -265677700LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x465 = 0;
	int32_t x466 = -184806242;
	uint8_t x467 = 61U;
	volatile int32_t x468 = -1;
	int32_t t97 = 1358106;

	t97 = ((x465<=x466)*(x467-x468));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x469 = -252;
	uint64_t x470 = UINT64_MAX;
	int16_t x471 = -1;
	int16_t x472 = -1;
	volatile int32_t t98 = -17025956;

	t98 = ((x469<=x470)*(x471-x472));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x477 = -1;
	int32_t x478 = -121;
	int8_t x479 = 1;
	uint16_t x480 = UINT16_MAX;
	static volatile int32_t t99 = -34;

	t99 = ((x477<=x478)*(x479-x480));

	if (t99 != 0) { NG(); } else { ; }
	
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

