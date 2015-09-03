#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
static uint64_t x3 = 1385689LLU;
static uint64_t x5 = UINT64_MAX;
static volatile uint16_t x9 = UINT16_MAX;
int16_t x10 = -1;
static uint32_t x12 = UINT32_MAX;
static int32_t t3 = -51221821;
uint32_t x30 = 5U;
int8_t x36 = INT8_MIN;
uint8_t x40 = 2U;
static int64_t x41 = -9702LL;
static uint64_t x43 = 59614596LLU;
int16_t x44 = -1;
uint64_t t10 = 74347327827732LLU;
uint64_t t11 = 560803014359755LLU;
int64_t x54 = INT64_MIN;
int8_t x55 = 23;
int8_t x67 = -1;
uint64_t x68 = UINT64_MAX;
uint64_t x72 = 8853518579LLU;
static uint64_t x78 = 8607395LLU;
uint64_t x79 = UINT64_MAX;
volatile int64_t x81 = -1LL;
int16_t x83 = -1;
volatile int16_t x100 = INT16_MAX;
static int32_t x117 = 206786;
int32_t x118 = -135005985;
int32_t x121 = INT32_MIN;
int32_t x123 = INT32_MIN;
static uint32_t t28 = 222U;
int8_t x172 = INT8_MAX;
volatile uint32_t t33 = 633002U;
int32_t x177 = INT32_MAX;
int32_t t35 = -106004633;
int16_t x185 = INT16_MAX;
int64_t x186 = -1LL;
uint8_t x188 = 113U;
volatile int16_t x190 = -1;
int8_t x191 = INT8_MIN;
static int64_t x194 = INT64_MIN;
volatile int64_t x197 = INT64_MAX;
int64_t t39 = 24835493660606663LL;
uint64_t x201 = 16616564447LLU;
int8_t x203 = INT8_MIN;
uint16_t x205 = 18431U;
uint32_t t41 = 597272U;
int8_t x215 = -1;
static int32_t t44 = -387319475;
volatile int32_t x241 = 3920069;
int64_t x245 = INT64_MIN;
volatile int16_t x247 = INT16_MAX;
static int8_t x248 = INT8_MAX;
int32_t t46 = -66861962;
int8_t x252 = INT8_MIN;
static uint32_t x253 = 2146764U;
volatile uint32_t x256 = 4669217U;
int32_t x262 = INT32_MIN;
volatile int8_t x268 = -1;
int64_t x298 = -1LL;
static uint16_t x310 = 0U;
int16_t x316 = INT16_MIN;
uint32_t x318 = 22736749U;
uint64_t x320 = 141LLU;
static int8_t x324 = INT8_MIN;
int64_t x325 = 422842798656955LL;
int8_t x326 = INT8_MIN;
static uint64_t t61 = 335329328485714589LLU;
static int32_t t62 = -5438;
uint16_t x344 = 1U;
uint64_t t64 = 605110328LLU;
int16_t x360 = INT16_MAX;
int16_t x361 = -1;
static uint64_t x365 = UINT64_MAX;
static int16_t x373 = -1;
static uint64_t x385 = UINT64_MAX;
uint64_t x386 = 15LLU;
int64_t t71 = 44055829556286644LL;
uint32_t t72 = 702796569U;
int8_t x395 = INT8_MAX;
int32_t t73 = 5724;
int16_t x419 = INT16_MIN;
static volatile int8_t x420 = INT8_MAX;
int8_t x423 = -1;
int8_t x430 = -1;
int16_t x434 = -1;
int64_t x437 = INT64_MIN;
uint16_t x454 = 93U;
uint64_t x461 = UINT64_MAX;
uint64_t x474 = UINT64_MAX;
int16_t x479 = INT16_MAX;
uint32_t x484 = UINT32_MAX;
uint64_t t89 = 112352LLU;
uint16_t x490 = 12U;
int64_t x494 = INT64_MIN;
static uint64_t t91 = 789844LLU;
int64_t x502 = INT64_MIN;
volatile int8_t x513 = -1;
static int16_t x517 = 3;
int16_t x518 = INT16_MIN;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	int64_t x4 = INT64_MAX;
	uint64_t t0 = 14601LLU;

	t0 = ((x1<x2)/(x3*x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x6 = UINT16_MAX;
	int32_t x7 = INT32_MAX;
	static uint64_t x8 = 3LLU;
	uint64_t t1 = 864963918LLU;

	t1 = ((x5<x6)/(x7*x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x11 = UINT64_MAX;
	static volatile uint64_t t2 = 15259203445LLU;

	t2 = ((x9<x10)/(x11*x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int16_t x14 = 26;
	volatile int16_t x15 = 1;
	int8_t x16 = INT8_MIN;

	t3 = ((x13<x14)/(x15*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -1;
	volatile int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MIN;
	uint8_t x20 = 4U;
	volatile int32_t t4 = 55628;

	t4 = ((x17<x18)/(x19*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x21 = 242U;
	volatile uint16_t x22 = 14259U;
	int16_t x23 = INT16_MAX;
	int64_t x24 = -1LL;
	volatile int64_t t5 = 2144283LL;

	t5 = ((x21<x22)/(x23*x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int64_t x26 = INT64_MIN;
	uint16_t x27 = 22573U;
	int8_t x28 = 45;
	int32_t t6 = -13359911;

	t6 = ((x25<x26)/(x27*x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -149807892948LL;
	int16_t x31 = INT16_MAX;
	static int16_t x32 = INT16_MIN;
	static int32_t t7 = -17;

	t7 = ((x29<x30)/(x31*x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	int32_t x34 = INT32_MIN;
	static int32_t x35 = 25;
	volatile int32_t t8 = 4;

	t8 = ((x33<x34)/(x35*x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	volatile int8_t x38 = INT8_MAX;
	uint32_t x39 = UINT32_MAX;
	static uint32_t t9 = 12290507U;

	t9 = ((x37<x38)/(x39*x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MIN;

	t10 = ((x41<x42)/(x43*x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 0;
	int8_t x50 = -3;
	uint64_t x51 = UINT64_MAX;
	int16_t x52 = -1;

	t11 = ((x49<x50)/(x51*x52));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x53 = UINT32_MAX;
	int8_t x56 = -1;
	volatile int32_t t12 = 17704621;

	t12 = ((x53<x54)/(x55*x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -3;
	volatile int32_t x58 = INT32_MIN;
	static volatile uint16_t x59 = UINT16_MAX;
	static uint32_t x60 = 4631U;
	uint32_t t13 = 123126124U;

	t13 = ((x57<x58)/(x59*x60));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = INT64_MAX;
	uint32_t x62 = 642U;
	volatile int8_t x63 = INT8_MIN;
	uint64_t x64 = 5353674219795LLU;
	volatile uint64_t t14 = 24712815LLU;

	t14 = ((x61<x62)/(x63*x64));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x65 = -1;
	volatile int8_t x66 = INT8_MIN;
	uint64_t t15 = 762469LLU;

	t15 = ((x65<x66)/(x67*x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x69 = UINT16_MAX;
	static int16_t x70 = INT16_MIN;
	uint8_t x71 = UINT8_MAX;
	uint64_t t16 = 44142092501LLU;

	t16 = ((x69<x70)/(x71*x72));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -1;
	int8_t x74 = -1;
	uint32_t x75 = 1713409885U;
	int8_t x76 = -1;
	volatile uint32_t t17 = 10327U;

	t17 = ((x73<x74)/(x75*x76));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -1;
	uint16_t x80 = UINT16_MAX;
	static uint64_t t18 = 103929636925979LLU;

	t18 = ((x77<x78)/(x79*x80));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x82 = INT32_MIN;
	int32_t x84 = -1;
	volatile int32_t t19 = -36;

	t19 = ((x81<x82)/(x83*x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MAX;
	uint8_t x86 = 126U;
	int16_t x87 = -103;
	static int32_t x88 = 44341;
	int32_t t20 = 170709;

	t20 = ((x85<x86)/(x87*x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x89 = -10901676467435LL;
	int64_t x90 = 330143493465LL;
	int64_t x91 = -15144928719LL;
	uint16_t x92 = 378U;
	int64_t t21 = 311214LL;

	t21 = ((x89<x90)/(x91*x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	static volatile int16_t x94 = 898;
	volatile int32_t x95 = -957334;
	uint8_t x96 = 1U;
	int32_t t22 = 169;

	t22 = ((x93<x94)/(x95*x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 13866912637808436LLU;
	int32_t x98 = -1;
	int32_t x99 = -1350;
	int32_t t23 = -3259;

	t23 = ((x97<x98)/(x99*x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = UINT16_MAX;
	static int32_t x106 = -1;
	int16_t x107 = -1;
	uint8_t x108 = 14U;
	volatile int32_t t24 = 56;

	t24 = ((x105<x106)/(x107*x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = 945856378U;
	uint64_t x110 = 59LLU;
	volatile int32_t x111 = -1;
	volatile int8_t x112 = INT8_MIN;
	int32_t t25 = -7283187;

	t25 = ((x109<x110)/(x111*x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x119 = -29;
	volatile uint8_t x120 = 1U;
	int32_t t26 = 190949121;

	t26 = ((x117<x118)/(x119*x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x122 = 4U;
	volatile uint32_t x124 = UINT32_MAX;
	uint32_t t27 = 193853071U;

	t27 = ((x121<x122)/(x123*x124));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = -1LL;
	static uint32_t x130 = 306029U;
	uint32_t x131 = 1411U;
	volatile uint16_t x132 = UINT16_MAX;

	t28 = ((x129<x130)/(x131*x132));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = INT64_MIN;
	int64_t x142 = -7835570LL;
	int8_t x143 = INT8_MIN;
	int16_t x144 = INT16_MAX;
	volatile int32_t t29 = 0;

	t29 = ((x141<x142)/(x143*x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x153 = 1632U;
	uint64_t x154 = 345104133885LLU;
	uint8_t x155 = 2U;
	uint64_t x156 = UINT64_MAX;
	volatile uint64_t t30 = 3328369272539LLU;

	t30 = ((x153<x154)/(x155*x156));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x157 = INT8_MAX;
	int32_t x158 = -1;
	volatile uint64_t x159 = UINT64_MAX;
	int8_t x160 = INT8_MIN;
	volatile uint64_t t31 = 643434LLU;

	t31 = ((x157<x158)/(x159*x160));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x165 = -1LL;
	volatile uint8_t x166 = 60U;
	volatile int64_t x167 = -179LL;
	int8_t x168 = INT8_MIN;
	int64_t t32 = 702823178403LL;

	t32 = ((x165<x166)/(x167*x168));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x169 = INT16_MAX;
	int8_t x170 = INT8_MIN;
	volatile uint32_t x171 = UINT32_MAX;

	t33 = ((x169<x170)/(x171*x172));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x173 = UINT64_MAX;
	volatile uint64_t x174 = 0LLU;
	static int8_t x175 = INT8_MIN;
	volatile uint8_t x176 = 118U;
	int32_t t34 = 1716;

	t34 = ((x173<x174)/(x175*x176));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x178 = INT8_MIN;
	int8_t x179 = -1;
	static int16_t x180 = -3;

	t35 = ((x177<x178)/(x179*x180));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x187 = 502LLU;
	volatile uint64_t t36 = 0LLU;

	t36 = ((x185<x186)/(x187*x188));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x189 = 13292U;
	volatile int16_t x192 = 1;
	int32_t t37 = -12716;

	t37 = ((x189<x190)/(x191*x192));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x193 = INT16_MIN;
	volatile uint16_t x195 = UINT16_MAX;
	int16_t x196 = INT16_MIN;
	int32_t t38 = 48219984;

	t38 = ((x193<x194)/(x195*x196));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x198 = INT64_MIN;
	volatile uint8_t x199 = 3U;
	volatile int64_t x200 = 1122793100203LL;

	t39 = ((x197<x198)/(x199*x200));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x202 = 1001669850793432LLU;
	uint32_t x204 = UINT32_MAX;
	static volatile uint32_t t40 = 5703U;

	t40 = ((x201<x202)/(x203*x204));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x206 = -2;
	uint32_t x207 = 126U;
	volatile int16_t x208 = INT16_MIN;

	t41 = ((x205<x206)/(x207*x208));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x213 = 2U;
	uint64_t x214 = 1472LLU;
	uint16_t x216 = 2193U;
	int32_t t42 = -83514;

	t42 = ((x213<x214)/(x215*x216));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = -961;
	static uint8_t x218 = UINT8_MAX;
	uint16_t x219 = UINT16_MAX;
	volatile int32_t x220 = -1;
	static int32_t t43 = 4840;

	t43 = ((x217<x218)/(x219*x220));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x233 = 1276LLU;
	int64_t x234 = 1174505117292591LL;
	volatile int16_t x235 = INT16_MIN;
	volatile int32_t x236 = -1;

	t44 = ((x233<x234)/(x235*x236));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x242 = 60LLU;
	uint64_t x243 = 51576856535690651LLU;
	static int16_t x244 = -1;
	volatile uint64_t t45 = 21544897LLU;

	t45 = ((x241<x242)/(x243*x244));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x246 = 14416U;

	t46 = ((x245<x246)/(x247*x248));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x249 = INT64_MAX;
	int16_t x250 = INT16_MIN;
	uint64_t x251 = 39530696155141LLU;
	static volatile uint64_t t47 = 11101981086915319LLU;

	t47 = ((x249<x250)/(x251*x252));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x254 = UINT16_MAX;
	uint32_t x255 = 507270U;
	static volatile uint32_t t48 = 9510U;

	t48 = ((x253<x254)/(x255*x256));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x261 = 60690353975LL;
	uint8_t x263 = 3U;
	volatile int16_t x264 = INT16_MAX;
	volatile int32_t t49 = 148681897;

	t49 = ((x261<x262)/(x263*x264));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x265 = INT64_MIN;
	static int16_t x266 = INT16_MIN;
	int16_t x267 = -1;
	volatile int32_t t50 = -197846;

	t50 = ((x265<x266)/(x267*x268));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x273 = INT16_MIN;
	int64_t x274 = -3897422366757676399LL;
	int64_t x275 = 12144598LL;
	int32_t x276 = 502;
	volatile int64_t t51 = 0LL;

	t51 = ((x273<x274)/(x275*x276));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x285 = 3634U;
	uint64_t x286 = UINT64_MAX;
	uint16_t x287 = UINT16_MAX;
	uint64_t x288 = 17916LLU;
	static uint64_t t52 = 106684LLU;

	t52 = ((x285<x286)/(x287*x288));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x289 = -991101175480LL;
	int16_t x290 = -2;
	int16_t x291 = INT16_MIN;
	volatile int8_t x292 = INT8_MAX;
	volatile int32_t t53 = 5667989;

	t53 = ((x289<x290)/(x291*x292));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x293 = 3U;
	int16_t x294 = 0;
	int8_t x295 = INT8_MIN;
	uint64_t x296 = 44329274278LLU;
	volatile uint64_t t54 = 1185LLU;

	t54 = ((x293<x294)/(x295*x296));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x297 = 193207705520590178LLU;
	static int64_t x299 = -9LL;
	static uint8_t x300 = 61U;
	volatile int64_t t55 = 208705044LL;

	t55 = ((x297<x298)/(x299*x300));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x301 = INT64_MAX;
	int64_t x302 = INT64_MAX;
	int32_t x303 = 650;
	uint32_t x304 = UINT32_MAX;
	volatile uint32_t t56 = 12704353U;

	t56 = ((x301<x302)/(x303*x304));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x309 = INT16_MIN;
	int64_t x311 = 1148489258109376387LL;
	uint8_t x312 = 1U;
	static volatile int64_t t57 = -1631545399270LL;

	t57 = ((x309<x310)/(x311*x312));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x313 = INT32_MIN;
	uint16_t x314 = 40U;
	int16_t x315 = INT16_MIN;
	static int32_t t58 = 443259531;

	t58 = ((x313<x314)/(x315*x316));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x317 = 434U;
	int8_t x319 = 5;
	static volatile uint64_t t59 = 479325499417095LLU;

	t59 = ((x317<x318)/(x319*x320));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x321 = INT32_MIN;
	uint8_t x322 = UINT8_MAX;
	int8_t x323 = -6;
	static volatile int32_t t60 = 99549044;

	t60 = ((x321<x322)/(x323*x324));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x327 = INT16_MIN;
	uint64_t x328 = 83127400270840747LLU;

	t61 = ((x325<x326)/(x327*x328));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x333 = 205U;
	uint8_t x334 = 45U;
	static uint16_t x335 = 4696U;
	static volatile uint16_t x336 = UINT16_MAX;

	t62 = ((x333<x334)/(x335*x336));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x341 = -1;
	int64_t x342 = -1LL;
	int16_t x343 = -694;
	int32_t t63 = -52687;

	t63 = ((x341<x342)/(x343*x344));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x345 = UINT64_MAX;
	int32_t x346 = INT32_MAX;
	int16_t x347 = 4;
	uint64_t x348 = 1808837182527422LLU;

	t64 = ((x345<x346)/(x347*x348));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x353 = INT32_MAX;
	static volatile int64_t x354 = INT64_MAX;
	static int32_t x355 = -1;
	int16_t x356 = INT16_MAX;
	int32_t t65 = 164611;

	t65 = ((x353<x354)/(x355*x356));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x357 = INT16_MIN;
	static int64_t x358 = 268LL;
	int64_t x359 = -1LL;
	volatile int64_t t66 = -3LL;

	t66 = ((x357<x358)/(x359*x360));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x362 = INT16_MIN;
	volatile int8_t x363 = INT8_MAX;
	int32_t x364 = -1488978;
	volatile int32_t t67 = 1;

	t67 = ((x361<x362)/(x363*x364));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x366 = 21109LLU;
	volatile uint32_t x367 = 1423U;
	int32_t x368 = 2136544;
	uint32_t t68 = 1602U;

	t68 = ((x365<x366)/(x367*x368));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x374 = 27120U;
	volatile int64_t x375 = -1LL;
	int32_t x376 = -3;
	int64_t t69 = -249LL;

	t69 = ((x373<x374)/(x375*x376));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x381 = 0;
	uint16_t x382 = UINT16_MAX;
	volatile uint32_t x383 = 2060673U;
	volatile uint8_t x384 = 30U;
	volatile uint32_t t70 = 594707483U;

	t70 = ((x381<x382)/(x383*x384));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x387 = -1LL;
	volatile int64_t x388 = INT64_MAX;

	t71 = ((x385<x386)/(x387*x388));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x389 = UINT64_MAX;
	uint32_t x390 = 495550930U;
	uint32_t x391 = 284952526U;
	static int32_t x392 = -1;

	t72 = ((x389<x390)/(x391*x392));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x393 = UINT8_MAX;
	volatile int16_t x394 = INT16_MIN;
	static int32_t x396 = -1;

	t73 = ((x393<x394)/(x395*x396));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x397 = 25;
	int64_t x398 = INT64_MIN;
	volatile int64_t x399 = INT64_MIN;
	static uint64_t x400 = 3731LLU;
	uint64_t t74 = 2LLU;

	t74 = ((x397<x398)/(x399*x400));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x409 = INT64_MAX;
	int32_t x410 = INT32_MIN;
	uint64_t x411 = 7226163980324265967LLU;
	volatile uint8_t x412 = UINT8_MAX;
	uint64_t t75 = 250238LLU;

	t75 = ((x409<x410)/(x411*x412));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x417 = -1;
	static volatile int64_t x418 = INT64_MAX;
	int32_t t76 = 6;

	t76 = ((x417<x418)/(x419*x420));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x421 = -1;
	static volatile uint8_t x422 = 37U;
	int64_t x424 = 2LL;
	int64_t t77 = -92575LL;

	t77 = ((x421<x422)/(x423*x424));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x425 = UINT8_MAX;
	volatile uint16_t x426 = UINT16_MAX;
	int32_t x427 = -1;
	int16_t x428 = 14;
	int32_t t78 = 123300729;

	t78 = ((x425<x426)/(x427*x428));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x429 = 1;
	int16_t x431 = INT16_MIN;
	static volatile uint8_t x432 = 115U;
	volatile int32_t t79 = -210255;

	t79 = ((x429<x430)/(x431*x432));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x433 = INT64_MIN;
	uint8_t x435 = UINT8_MAX;
	int8_t x436 = -1;
	static volatile int32_t t80 = -558525975;

	t80 = ((x433<x434)/(x435*x436));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x438 = 0U;
	uint32_t x439 = 6219U;
	uint16_t x440 = 62U;
	static volatile uint32_t t81 = 1873056473U;

	t81 = ((x437<x438)/(x439*x440));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x441 = 85U;
	int32_t x442 = -1;
	volatile int16_t x443 = -41;
	int8_t x444 = 22;
	volatile int32_t t82 = 0;

	t82 = ((x441<x442)/(x443*x444));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x445 = 29;
	static volatile int64_t x446 = INT64_MIN;
	int32_t x447 = -1;
	int16_t x448 = -1;
	int32_t t83 = -27;

	t83 = ((x445<x446)/(x447*x448));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x453 = 897U;
	uint16_t x455 = 6350U;
	static int8_t x456 = INT8_MIN;
	volatile int32_t t84 = 15904444;

	t84 = ((x453<x454)/(x455*x456));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x462 = 23;
	uint32_t x463 = UINT32_MAX;
	int16_t x464 = INT16_MAX;
	uint32_t t85 = 210253U;

	t85 = ((x461<x462)/(x463*x464));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x473 = 290U;
	uint8_t x475 = 4U;
	int32_t x476 = -447;
	static volatile int32_t t86 = 0;

	t86 = ((x473<x474)/(x475*x476));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x477 = 0;
	int64_t x478 = -1LL;
	static int32_t x480 = -1;
	static volatile int32_t t87 = 9715;

	t87 = ((x477<x478)/(x479*x480));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x481 = INT16_MAX;
	int8_t x482 = 1;
	volatile int8_t x483 = -30;
	uint32_t t88 = 5068U;

	t88 = ((x481<x482)/(x483*x484));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x485 = 24U;
	int32_t x486 = INT32_MAX;
	int32_t x487 = INT32_MIN;
	uint64_t x488 = 7LLU;

	t89 = ((x485<x486)/(x487*x488));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x489 = -1LL;
	int16_t x491 = -1;
	int64_t x492 = INT64_MAX;
	int64_t t90 = -1810803018458628222LL;

	t90 = ((x489<x490)/(x491*x492));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x493 = INT64_MAX;
	int16_t x495 = -1;
	uint64_t x496 = 5854017986047LLU;

	t91 = ((x493<x494)/(x495*x496));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x501 = INT64_MIN;
	static int16_t x503 = INT16_MIN;
	static volatile int32_t x504 = -1;
	volatile int32_t t92 = 153494228;

	t92 = ((x501<x502)/(x503*x504));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x509 = 0;
	static int16_t x510 = 508;
	uint64_t x511 = 369920062742LLU;
	int8_t x512 = -1;
	volatile uint64_t t93 = 62031LLU;

	t93 = ((x509<x510)/(x511*x512));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x514 = UINT32_MAX;
	uint16_t x515 = 8119U;
	int16_t x516 = -1;
	int32_t t94 = 8;

	t94 = ((x513<x514)/(x515*x516));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x519 = INT32_MAX;
	uint32_t x520 = 24173446U;
	uint32_t t95 = 107936U;

	t95 = ((x517<x518)/(x519*x520));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x525 = -1;
	volatile int8_t x526 = -1;
	int8_t x527 = INT8_MAX;
	uint8_t x528 = 4U;
	int32_t t96 = -65;

	t96 = ((x525<x526)/(x527*x528));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x529 = -295;
	int64_t x530 = -65LL;
	uint8_t x531 = 2U;
	uint64_t x532 = 2003086382988424480LLU;
	volatile uint64_t t97 = 24021635LLU;

	t97 = ((x529<x530)/(x531*x532));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x533 = INT16_MAX;
	int32_t x534 = -1;
	volatile uint32_t x535 = UINT32_MAX;
	int16_t x536 = INT16_MAX;
	volatile uint32_t t98 = 22157559U;

	t98 = ((x533<x534)/(x535*x536));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x537 = -1;
	volatile int64_t x538 = INT64_MAX;
	int16_t x539 = -3452;
	volatile int16_t x540 = INT16_MIN;
	int32_t t99 = 0;

	t99 = ((x537<x538)/(x539*x540));

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

