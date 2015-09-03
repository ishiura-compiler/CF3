#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x16 = -1;
int32_t x17 = INT32_MIN;
int32_t t2 = 3580;
static int8_t x23 = INT8_MIN;
volatile uint64_t t3 = 6LLU;
int8_t x29 = -1;
static int8_t x43 = -1;
volatile uint64_t x46 = 3508106999793992051LLU;
static uint32_t x48 = 214199U;
volatile int32_t t9 = 71569;
static int32_t x65 = 26457321;
int32_t x72 = -897303354;
volatile int32_t x77 = -1;
volatile int8_t x84 = INT8_MAX;
volatile int8_t x85 = INT8_MAX;
uint16_t x86 = 1078U;
int64_t x88 = INT64_MAX;
volatile int32_t t16 = 2452;
volatile uint8_t x97 = UINT8_MAX;
uint8_t x99 = 43U;
int8_t x104 = -1;
volatile int64_t x108 = -299903LL;
uint32_t x123 = 1497U;
int32_t x124 = INT32_MAX;
int64_t x129 = -1LL;
uint8_t x131 = UINT8_MAX;
int32_t x133 = -13195620;
int64_t x135 = -1LL;
static int16_t x138 = INT16_MIN;
uint64_t x139 = 5123292187LLU;
int16_t x149 = -198;
int32_t x152 = -1;
uint8_t x153 = 110U;
int16_t x157 = -1;
int64_t x158 = -1LL;
uint64_t t28 = 243LLU;
uint8_t x169 = 111U;
volatile int16_t x173 = INT16_MAX;
volatile int64_t t30 = 163377LL;
uint16_t x180 = 1U;
int32_t t31 = 463;
int16_t x183 = INT16_MAX;
volatile uint64_t t32 = 209069983LLU;
static volatile int32_t x186 = -7406;
static int16_t x187 = -12;
int16_t x192 = INT16_MAX;
static int8_t x228 = -22;
volatile int8_t x229 = INT8_MAX;
uint8_t x230 = 0U;
uint16_t x232 = UINT16_MAX;
static uint64_t t42 = 19691LLU;
volatile int16_t x239 = 248;
uint32_t x240 = 1111139U;
volatile uint32_t t44 = 6U;
int8_t x251 = INT8_MIN;
uint64_t x265 = 494507LLU;
volatile int16_t x267 = INT16_MIN;
volatile int8_t x277 = -14;
volatile int16_t x279 = INT16_MIN;
volatile int16_t x281 = INT16_MAX;
uint16_t x294 = 1U;
static int64_t x308 = 1106LL;
int32_t x312 = 449143517;
static uint16_t x342 = UINT16_MAX;
int8_t x343 = INT8_MIN;
int32_t t61 = -51;
static volatile int64_t t64 = -2085102LL;
int64_t x363 = -1LL;
int32_t x369 = -1;
int64_t x371 = -1LL;
int64_t x372 = -1LL;
uint32_t x376 = 50606U;
int64_t x385 = -1LL;
int32_t x386 = 1;
int64_t t69 = 262368LL;
int16_t x392 = INT16_MAX;
volatile uint64_t t70 = 1719LLU;
int32_t x393 = INT32_MIN;
volatile int32_t t71 = 4048633;
int32_t t72 = -56034;
uint16_t x409 = 7786U;
int32_t t73 = 675044282;
uint32_t x414 = UINT32_MAX;
static uint16_t x416 = UINT16_MAX;
static volatile int16_t x417 = INT16_MIN;
uint32_t x419 = 6595096U;
volatile int64_t t75 = 115288469LL;
volatile int8_t x426 = 0;
int8_t x427 = 1;
volatile uint32_t t77 = 1430U;
static uint32_t x434 = 3U;
static uint64_t x435 = 68588761525LLU;
volatile int8_t x444 = 1;
int32_t t80 = 1698;
int16_t x445 = -1;
uint32_t x447 = UINT32_MAX;
volatile int8_t x450 = -1;
int8_t x452 = INT8_MAX;
volatile int32_t t84 = -513423;
int32_t x466 = -1;
uint64_t t86 = 81638535LLU;
int8_t x474 = INT8_MIN;
int16_t x477 = 17;
uint32_t x491 = 374205812U;
uint32_t x494 = 1325U;
int64_t x500 = INT64_MAX;
volatile int64_t t92 = 260601LL;
int16_t x502 = -31;
volatile int32_t x513 = -1;
uint16_t x527 = 1U;
uint16_t x530 = 1U;
int16_t x535 = INT16_MIN;
uint32_t t97 = 6455U;
volatile uint64_t t98 = 827LLU;
int16_t x555 = -80;


void f0(void) {
	uint8_t x9 = UINT8_MAX;
	int16_t x10 = INT16_MIN;
	volatile uint8_t x11 = 41U;
	static volatile int8_t x12 = 3;
	volatile int32_t t0 = -11814926;

	t0 = ((x9&x10)/(x11*x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MAX;
	int32_t x14 = INT32_MIN;
	uint16_t x15 = 7567U;
	static volatile int32_t t1 = 1;

	t1 = ((x13&x14)/(x15*x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x18 = -1;
	uint8_t x19 = UINT8_MAX;
	int8_t x20 = 31;

	t2 = ((x17&x18)/(x19*x20));

	if (t2 != -271661) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 6756479155LLU;
	static int64_t x22 = INT64_MAX;
	static int64_t x24 = -21370LL;

	t3 = ((x21&x22)/(x23*x24));

	if (t3 != 2470LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = 58194080320209990LL;
	int32_t x26 = 17;
	int16_t x27 = -1;
	static uint16_t x28 = 61U;
	volatile int64_t t4 = -19437616LL;

	t4 = ((x25&x26)/(x27*x28));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x30 = INT16_MAX;
	uint16_t x31 = 3800U;
	uint32_t x32 = 12354378U;
	volatile uint32_t t5 = 45168239U;

	t5 = ((x29&x30)/(x31*x32));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x41 = -1;
	int32_t x42 = -1;
	static int8_t x44 = -3;
	static int32_t t6 = 294;

	t6 = ((x41&x42)/(x43*x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = UINT64_MAX;
	volatile int32_t x47 = -9505;
	volatile uint64_t t7 = 2134656LLU;

	t7 = ((x45&x46)/(x47*x48));

	if (t7 != 1552942891LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = 7;
	uint16_t x54 = 333U;
	uint32_t x55 = 38U;
	int16_t x56 = INT16_MIN;
	volatile uint32_t t8 = 5445U;

	t8 = ((x53&x54)/(x55*x56));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = -50;
	volatile int8_t x59 = INT8_MIN;
	int8_t x60 = -28;

	t9 = ((x57&x58)/(x59*x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x66 = INT32_MAX;
	int32_t x67 = 524;
	int32_t x68 = 93738;
	static int32_t t10 = 29338625;

	t10 = ((x65&x66)/(x67*x68));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x69 = 19160568U;
	int16_t x70 = INT16_MAX;
	int8_t x71 = -1;
	static volatile uint32_t t11 = 323385436U;

	t11 = ((x69&x70)/(x71*x72));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x73 = 5253LLU;
	uint16_t x74 = 0U;
	uint16_t x75 = UINT16_MAX;
	int64_t x76 = 471445511LL;
	static volatile uint64_t t12 = 505524LLU;

	t12 = ((x73&x74)/(x75*x76));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x78 = INT8_MIN;
	static int8_t x79 = INT8_MIN;
	static uint64_t x80 = UINT64_MAX;
	uint64_t t13 = 6LLU;

	t13 = ((x77&x78)/(x79*x80));

	if (t13 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x81 = 0U;
	static volatile uint64_t x82 = 299628592LLU;
	volatile int16_t x83 = 508;
	volatile uint64_t t14 = 31045LLU;

	t14 = ((x81&x82)/(x83*x84));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x87 = -1;
	int64_t t15 = -66304LL;

	t15 = ((x85&x86)/(x87*x88));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = 438;
	static int8_t x90 = 29;
	volatile int8_t x91 = INT8_MAX;
	int16_t x92 = 9;

	t16 = ((x89&x90)/(x91*x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x98 = INT16_MAX;
	static uint16_t x100 = 5111U;
	int32_t t17 = 23393337;

	t17 = ((x97&x98)/(x99*x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x101 = -1;
	int16_t x102 = -1;
	static uint32_t x103 = 180792U;
	uint32_t t18 = 75U;

	t18 = ((x101&x102)/(x103*x104));

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x105 = 7;
	volatile int8_t x106 = -1;
	int16_t x107 = INT16_MAX;
	volatile int64_t t19 = -43324062314LL;

	t19 = ((x105&x106)/(x107*x108));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x117 = -1;
	int16_t x118 = -1;
	volatile int32_t x119 = 24359601;
	volatile uint64_t x120 = 20042803LLU;
	volatile uint64_t t20 = 1717209082142882048LLU;

	t20 = ((x117&x118)/(x119*x120));

	if (t20 != 37782LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x121 = -1;
	uint8_t x122 = UINT8_MAX;
	static uint32_t t21 = 0U;

	t21 = ((x121&x122)/(x123*x124));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x130 = UINT32_MAX;
	volatile int64_t x132 = 30437425LL;
	volatile int64_t t22 = -529428310250182538LL;

	t22 = ((x129&x130)/(x131*x132));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x134 = 303482246LLU;
	int16_t x136 = -1;
	static volatile uint64_t t23 = 10317106608166LLU;

	t23 = ((x133&x134)/(x135*x136));

	if (t23 != 303465604LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x137 = INT16_MAX;
	int16_t x140 = -238;
	volatile uint64_t t24 = 16890802139237921LLU;

	t24 = ((x137&x138)/(x139*x140));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x150 = -4;
	uint64_t x151 = 69513184435115LLU;
	uint64_t t25 = 63LLU;

	t25 = ((x149&x150)/(x151*x152));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x154 = UINT16_MAX;
	volatile uint8_t x155 = UINT8_MAX;
	static uint8_t x156 = UINT8_MAX;
	int32_t t26 = 3;

	t26 = ((x153&x154)/(x155*x156));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x159 = -14;
	volatile int8_t x160 = -1;
	volatile int64_t t27 = 100308LL;

	t27 = ((x157&x158)/(x159*x160));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x165 = 2762340940LLU;
	static int64_t x166 = INT64_MIN;
	int8_t x167 = INT8_MIN;
	int16_t x168 = INT16_MAX;

	t28 = ((x165&x166)/(x167*x168));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x170 = 112LLU;
	uint64_t x171 = 3960152029LLU;
	int16_t x172 = INT16_MIN;
	volatile uint64_t t29 = 8523716036137LLU;

	t29 = ((x169&x170)/(x171*x172));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x174 = INT64_MAX;
	uint8_t x175 = 47U;
	uint8_t x176 = 9U;

	t30 = ((x173&x174)/(x175*x176));

	if (t30 != 77LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x177 = UINT8_MAX;
	volatile int32_t x178 = 100586;
	int16_t x179 = -6;

	t31 = ((x177&x178)/(x179*x180));

	if (t31 != -39) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x181 = 0;
	static uint64_t x182 = UINT64_MAX;
	uint8_t x184 = 14U;

	t32 = ((x181&x182)/(x183*x184));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x185 = -40;
	int16_t x188 = -1;
	volatile int32_t t33 = 1681;

	t33 = ((x185&x186)/(x187*x188));

	if (t33 != -617) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MIN;
	uint32_t x191 = 1U;
	uint32_t t34 = 1841U;

	t34 = ((x189&x190)/(x191*x192));

	if (t34 != 131075U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x193 = INT64_MAX;
	static uint8_t x194 = 86U;
	uint16_t x195 = UINT16_MAX;
	volatile int32_t x196 = -1;
	int64_t t35 = 12236640LL;

	t35 = ((x193&x194)/(x195*x196));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x201 = -1;
	static int32_t x202 = INT32_MIN;
	uint16_t x203 = 25571U;
	uint32_t x204 = 7084208U;
	uint32_t t36 = 1306825U;

	t36 = ((x201&x202)/(x203*x204));

	if (t36 != 2U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x209 = -19;
	static int64_t x210 = INT64_MIN;
	int32_t x211 = -1;
	static int32_t x212 = -9813145;
	volatile int64_t t37 = -48719986LL;

	t37 = ((x209&x210)/(x211*x212));

	if (t37 != -939899699520LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x213 = -5;
	volatile int8_t x214 = -3;
	int16_t x215 = 2;
	int64_t x216 = 173763250206634LL;
	static volatile int64_t t38 = 113241221LL;

	t38 = ((x213&x214)/(x215*x216));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x217 = -520;
	static uint16_t x218 = 239U;
	int8_t x219 = -1;
	volatile int32_t x220 = -1;
	int32_t t39 = -1;

	t39 = ((x217&x218)/(x219*x220));

	if (t39 != 232) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x221 = UINT64_MAX;
	int16_t x222 = INT16_MAX;
	uint32_t x223 = 4034U;
	int8_t x224 = 3;
	volatile uint64_t t40 = 240LLU;

	t40 = ((x221&x222)/(x223*x224));

	if (t40 != 2LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x225 = 1610U;
	volatile uint64_t x226 = 824529054963014964LLU;
	uint64_t x227 = UINT64_MAX;
	uint64_t t41 = 162LLU;

	t41 = ((x225&x226)/(x227*x228));

	if (t41 != 46LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x231 = 463770663393012817LLU;

	t42 = ((x229&x230)/(x231*x232));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x233 = UINT32_MAX;
	uint32_t x234 = UINT32_MAX;
	int64_t x235 = -10701747843LL;
	volatile uint32_t x236 = 1593U;
	int64_t t43 = 218979495459LL;

	t43 = ((x233&x234)/(x235*x236));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x237 = 335439502U;
	int16_t x238 = INT16_MIN;

	t44 = ((x237&x238)/(x239*x240));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x241 = 0U;
	int64_t x242 = INT64_MIN;
	volatile uint32_t x243 = 491754U;
	uint64_t x244 = UINT64_MAX;
	static uint64_t t45 = 9LLU;

	t45 = ((x241&x242)/(x243*x244));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x249 = INT16_MAX;
	int8_t x250 = INT8_MAX;
	uint64_t x252 = 21177LLU;
	uint64_t t46 = 66189544783410LLU;

	t46 = ((x249&x250)/(x251*x252));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x257 = 61U;
	int64_t x258 = 733717577LL;
	volatile int8_t x259 = INT8_MIN;
	int16_t x260 = -19;
	int64_t t47 = 50877254350LL;

	t47 = ((x257&x258)/(x259*x260));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x266 = INT64_MIN;
	volatile int8_t x268 = INT8_MIN;
	static volatile uint64_t t48 = 96945081408400LLU;

	t48 = ((x265&x266)/(x267*x268));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x269 = -1;
	int16_t x270 = INT16_MIN;
	volatile uint16_t x271 = 1U;
	static uint8_t x272 = 9U;
	static volatile int32_t t49 = -6;

	t49 = ((x269&x270)/(x271*x272));

	if (t49 != -3640) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x273 = INT64_MIN;
	volatile int64_t x274 = INT64_MIN;
	int16_t x275 = -722;
	static uint64_t x276 = 8699734619211LLU;
	volatile uint64_t t50 = 38913196063LLU;

	t50 = ((x273&x274)/(x275*x276));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x278 = 57U;
	uint64_t x280 = UINT64_MAX;
	uint64_t t51 = 4153617454420262551LLU;

	t51 = ((x277&x278)/(x279*x280));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x282 = -1LL;
	int16_t x283 = -1;
	uint8_t x284 = 12U;
	static volatile int64_t t52 = -1143715563345098LL;

	t52 = ((x281&x282)/(x283*x284));

	if (t52 != -2730LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x289 = 49U;
	uint64_t x290 = 15644899949145LLU;
	uint64_t x291 = UINT64_MAX;
	int64_t x292 = 42858965939592697LL;
	uint64_t t53 = 410030524511LLU;

	t53 = ((x289&x290)/(x291*x292));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x293 = -457844438063426062LL;
	uint64_t x295 = 2948950LLU;
	uint64_t x296 = UINT64_MAX;
	static volatile uint64_t t54 = 32LLU;

	t54 = ((x293&x294)/(x295*x296));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	int64_t x303 = 1LL;
	volatile uint16_t x304 = 2U;
	static volatile int64_t t55 = -14475303498034491LL;

	t55 = ((x301&x302)/(x303*x304));

	if (t55 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x305 = INT64_MAX;
	static int64_t x306 = INT64_MIN;
	int32_t x307 = 99244;
	int64_t t56 = -1280307680LL;

	t56 = ((x305&x306)/(x307*x308));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x309 = 4;
	static int8_t x310 = INT8_MAX;
	uint64_t x311 = 1LLU;
	volatile uint64_t t57 = 21LLU;

	t57 = ((x309&x310)/(x311*x312));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x317 = UINT8_MAX;
	volatile int32_t x318 = -6710;
	volatile uint16_t x319 = 3984U;
	int32_t x320 = -1;
	static int32_t t58 = -6;

	t58 = ((x317&x318)/(x319*x320));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x321 = 259206187181521179LLU;
	uint16_t x322 = UINT16_MAX;
	volatile int64_t x323 = -3605994LL;
	int16_t x324 = INT16_MAX;
	uint64_t t59 = 115786LLU;

	t59 = ((x321&x322)/(x323*x324));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x329 = 418618U;
	uint32_t x330 = 4669761U;
	int8_t x331 = -14;
	uint64_t x332 = 715093161575980086LLU;
	uint64_t t60 = 7097712536956LLU;

	t60 = ((x329&x330)/(x331*x332));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x341 = INT8_MAX;
	int16_t x344 = INT16_MIN;

	t61 = ((x341&x342)/(x343*x344));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x345 = INT16_MIN;
	static int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MAX;
	int16_t x348 = -1;
	static int32_t t62 = -1;

	t62 = ((x345&x346)/(x347*x348));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x353 = 2;
	uint32_t x354 = 3415U;
	int32_t x355 = -1;
	volatile uint64_t x356 = 3590813727696183LLU;
	volatile uint64_t t63 = 1397663861LLU;

	t63 = ((x353&x354)/(x355*x356));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x357 = -1;
	static volatile int16_t x358 = -1;
	static int8_t x359 = INT8_MAX;
	int64_t x360 = -1LL;

	t64 = ((x357&x358)/(x359*x360));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x361 = UINT64_MAX;
	int64_t x362 = INT64_MIN;
	uint32_t x364 = 12408416U;
	uint64_t t65 = 6589991919364LLU;

	t65 = ((x361&x362)/(x363*x364));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x370 = 16U;
	int64_t t66 = 31LL;

	t66 = ((x369&x370)/(x371*x372));

	if (t66 != 16LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x373 = 1029977U;
	int8_t x374 = -1;
	int32_t x375 = -1;
	static uint32_t t67 = 5041U;

	t67 = ((x373&x374)/(x375*x376));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x377 = INT32_MAX;
	int64_t x378 = INT64_MAX;
	int64_t x379 = -1LL;
	int8_t x380 = -12;
	volatile int64_t t68 = 3716815LL;

	t68 = ((x377&x378)/(x379*x380));

	if (t68 != 178956970LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x387 = -1LL;
	int8_t x388 = INT8_MIN;

	t69 = ((x385&x386)/(x387*x388));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x389 = -649;
	volatile uint32_t x390 = 3U;
	uint64_t x391 = UINT64_MAX;

	t70 = ((x389&x390)/(x391*x392));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x394 = INT16_MIN;
	int16_t x395 = INT16_MIN;
	uint8_t x396 = 3U;

	t71 = ((x393&x394)/(x395*x396));

	if (t71 != 21845) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x397 = 12U;
	static uint16_t x398 = 10U;
	volatile int8_t x399 = INT8_MAX;
	uint8_t x400 = 3U;

	t72 = ((x397&x398)/(x399*x400));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x410 = UINT16_MAX;
	static int16_t x411 = INT16_MIN;
	int8_t x412 = 8;

	t73 = ((x409&x410)/(x411*x412));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x413 = 8989114U;
	int32_t x415 = -27;
	uint32_t t74 = 140743U;

	t74 = ((x413&x414)/(x415*x416));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x418 = 16584557U;
	int64_t x420 = -342175189388LL;

	t75 = ((x417&x418)/(x419*x420));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x421 = UINT32_MAX;
	volatile int8_t x422 = -1;
	static uint64_t x423 = UINT64_MAX;
	uint8_t x424 = 7U;
	volatile uint64_t t76 = 40384LLU;

	t76 = ((x421&x422)/(x423*x424));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x425 = 564724U;
	uint32_t x428 = UINT32_MAX;

	t77 = ((x425&x426)/(x427*x428));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x433 = INT8_MIN;
	int64_t x436 = -1LL;
	uint64_t t78 = 35297LLU;

	t78 = ((x433&x434)/(x435*x436));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x437 = INT64_MAX;
	int32_t x438 = -1;
	int32_t x439 = INT32_MIN;
	uint64_t x440 = 434661704284LLU;
	uint64_t t79 = 148342LLU;

	t79 = ((x437&x438)/(x439*x440));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x441 = 0U;
	uint8_t x442 = UINT8_MAX;
	uint16_t x443 = 308U;

	t80 = ((x441&x442)/(x443*x444));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x446 = 20600U;
	int64_t x448 = -23LL;
	int64_t t81 = 43LL;

	t81 = ((x445&x446)/(x447*x448));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x449 = -39383106554042LL;
	static volatile int64_t x451 = -1986553095414LL;
	int64_t t82 = 0LL;

	t82 = ((x449&x450)/(x451*x452));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x453 = 85412280785354591LLU;
	int8_t x454 = -11;
	static uint16_t x455 = UINT16_MAX;
	int8_t x456 = INT8_MAX;
	uint64_t t83 = 304928311LLU;

	t83 = ((x453&x454)/(x455*x456));

	if (t83 != 10262266635LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x457 = INT16_MIN;
	volatile uint16_t x458 = UINT16_MAX;
	int8_t x459 = INT8_MIN;
	int32_t x460 = -48;

	t84 = ((x457&x458)/(x459*x460));

	if (t84 != 5) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x465 = UINT16_MAX;
	uint32_t x467 = 335U;
	uint32_t x468 = UINT32_MAX;
	volatile uint32_t t85 = 13000758U;

	t85 = ((x465&x466)/(x467*x468));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x469 = 17U;
	int16_t x470 = INT16_MIN;
	uint32_t x471 = UINT32_MAX;
	uint64_t x472 = 1943270508637915LLU;

	t86 = ((x469&x470)/(x471*x472));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x473 = 2021U;
	int64_t x475 = INT64_MAX;
	volatile int64_t x476 = -1LL;
	static volatile int64_t t87 = -9112656337835LL;

	t87 = ((x473&x474)/(x475*x476));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x478 = -1;
	uint8_t x479 = UINT8_MAX;
	static uint64_t x480 = UINT64_MAX;
	volatile uint64_t t88 = 84LLU;

	t88 = ((x477&x478)/(x479*x480));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x481 = INT8_MIN;
	int8_t x482 = INT8_MIN;
	uint32_t x483 = UINT32_MAX;
	static int32_t x484 = INT32_MAX;
	volatile uint32_t t89 = 1584U;

	t89 = ((x481&x482)/(x483*x484));

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x489 = 109428U;
	static int8_t x490 = INT8_MAX;
	uint64_t x492 = UINT64_MAX;
	volatile uint64_t t90 = 1474783769041LLU;

	t90 = ((x489&x490)/(x491*x492));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x493 = 2U;
	uint32_t x495 = UINT32_MAX;
	int16_t x496 = INT16_MIN;
	static volatile uint32_t t91 = 6442216U;

	t91 = ((x493&x494)/(x495*x496));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x497 = 296;
	int8_t x498 = -1;
	int8_t x499 = -1;

	t92 = ((x497&x498)/(x499*x500));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x501 = 4918U;
	int64_t x503 = 9952LL;
	static volatile int8_t x504 = INT8_MAX;
	volatile int64_t t93 = 72868145713LL;

	t93 = ((x501&x502)/(x503*x504));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x514 = -1;
	int32_t x515 = 48996;
	static volatile int8_t x516 = INT8_MAX;
	int32_t t94 = 2051;

	t94 = ((x513&x514)/(x515*x516));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x525 = INT8_MIN;
	uint8_t x526 = 0U;
	int32_t x528 = INT32_MIN;
	int32_t t95 = 12;

	t95 = ((x525&x526)/(x527*x528));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x529 = -1;
	uint64_t x531 = 167519020225899960LLU;
	static volatile int16_t x532 = INT16_MIN;
	uint64_t t96 = 9LLU;

	t96 = ((x529&x530)/(x531*x532));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x533 = INT8_MIN;
	uint32_t x534 = UINT32_MAX;
	static uint16_t x536 = 9U;

	t97 = ((x533&x534)/(x535*x536));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x549 = 353094LLU;
	uint32_t x550 = UINT32_MAX;
	static int32_t x551 = -1;
	uint32_t x552 = 930U;

	t98 = ((x549&x550)/(x551*x552));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x553 = INT16_MAX;
	uint8_t x554 = 1U;
	int32_t x556 = -716702;
	int32_t t99 = -121;

	t99 = ((x553&x554)/(x555*x556));

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

