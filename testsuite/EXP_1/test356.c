#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = UINT32_MAX;
uint8_t x9 = 22U;
uint16_t x10 = UINT16_MAX;
volatile int8_t x14 = INT8_MIN;
int16_t x15 = INT16_MIN;
static int32_t t3 = 50281725;
int64_t x30 = 56435172LL;
int64_t x32 = INT64_MIN;
int16_t x38 = INT16_MAX;
int32_t t7 = 2;
uint64_t x56 = UINT64_MAX;
volatile uint16_t x59 = 4137U;
int64_t t10 = 25LL;
volatile int64_t x75 = -1606305935690023LL;
volatile uint64_t t11 = 17LLU;
uint32_t x78 = 106U;
int16_t x96 = 13036;
volatile int8_t x103 = 15;
int8_t x104 = INT8_MIN;
volatile uint8_t x116 = UINT8_MAX;
int32_t x125 = -1;
int8_t x130 = 37;
uint16_t x137 = UINT16_MAX;
int16_t x138 = -1;
uint64_t x142 = 2606422LLU;
int32_t x143 = 627385476;
volatile uint8_t x144 = 45U;
static int8_t x155 = 24;
uint8_t x156 = 22U;
uint64_t x161 = UINT64_MAX;
static uint64_t t25 = 110935022LLU;
uint32_t x173 = UINT32_MAX;
int8_t x181 = INT8_MAX;
volatile uint16_t x208 = 12198U;
uint16_t x210 = 2U;
int64_t x212 = 203470238221756473LL;
volatile uint16_t x213 = 2458U;
int32_t x215 = -1;
uint64_t t34 = 3795744433LLU;
int64_t x221 = -1244133917LL;
uint32_t x224 = UINT32_MAX;
int8_t x228 = INT8_MAX;
volatile int64_t t37 = -56LL;
int8_t x234 = 0;
volatile uint16_t x240 = 6946U;
volatile int32_t x242 = 2544;
static int64_t x263 = 1LL;
uint16_t x264 = 25513U;
static volatile uint32_t x274 = UINT32_MAX;
volatile uint32_t x276 = UINT32_MAX;
uint32_t t45 = 1032179U;
int64_t x283 = INT64_MIN;
uint64_t t47 = 65732141024468910LLU;
uint8_t x293 = UINT8_MAX;
int32_t x294 = -3384;
uint16_t x301 = 23U;
int16_t x305 = INT16_MIN;
int64_t x308 = INT64_MIN;
volatile uint32_t x319 = 6U;
uint16_t x321 = 406U;
static volatile int64_t x323 = -182867479963LL;
volatile uint8_t x332 = 62U;
uint32_t x341 = 7758357U;
int8_t x347 = INT8_MIN;
uint32_t x348 = 54U;
volatile uint32_t t57 = 779132U;
uint64_t x353 = UINT64_MAX;
uint16_t x357 = 76U;
int16_t x358 = 65;
uint64_t x364 = 276869703479226LLU;
int64_t x365 = INT64_MIN;
int64_t x378 = -1LL;
int16_t x379 = INT16_MIN;
int32_t x384 = -1;
uint16_t x387 = 87U;
static int32_t x405 = -1;
int32_t x406 = INT32_MAX;
int16_t x407 = INT16_MIN;
uint16_t x412 = UINT16_MAX;
uint8_t x430 = 2U;
static int8_t x431 = -1;
int64_t x435 = -3332246221831245LL;
static int64_t x448 = -1LL;
int32_t x456 = INT32_MAX;
static volatile int16_t x458 = INT16_MIN;
uint32_t x462 = 87187U;
uint32_t t76 = 2873345U;
int16_t x479 = INT16_MIN;
int64_t x484 = INT64_MIN;
volatile int64_t t79 = 627517801192452LL;
static uint16_t x488 = 82U;
int32_t x497 = -1;
int64_t x503 = 6LL;
static volatile int8_t x513 = -1;
int8_t x516 = -1;
int32_t t86 = 59557692;
static int8_t x520 = INT8_MIN;
volatile uint64_t t89 = 13325063352812823LLU;
volatile uint16_t x541 = 2U;
uint8_t x548 = 4U;
static volatile uint32_t t92 = 326695193U;
volatile uint64_t t93 = 1095146902195101LLU;
int64_t x553 = -761474558LL;
uint8_t x559 = 1U;
uint32_t x563 = 527628U;
int32_t x567 = -12806442;
int8_t x568 = -1;
volatile int32_t t98 = 202990;
int16_t x574 = -7;
int8_t x576 = INT8_MAX;


void f0(void) {
	int16_t x6 = -12;
	int16_t x7 = INT16_MAX;
	int16_t x8 = 1271;
	uint32_t t0 = 60U;

	t0 = (((x5*x6)-x7)%x8);

	if (t0 != 574U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x11 = UINT32_MAX;
	int16_t x12 = INT16_MIN;
	volatile uint32_t t1 = 657655U;

	t1 = (((x9*x10)-x11)%x12);

	if (t1 != 1441771U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x13 = -1;
	volatile int32_t x16 = INT32_MIN;
	volatile int32_t t2 = 1;

	t2 = (((x13*x14)-x15)%x16);

	if (t2 != 32896) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = -1;
	int8_t x18 = 0;
	volatile uint16_t x19 = 3U;
	uint16_t x20 = UINT16_MAX;

	t3 = (((x17*x18)-x19)%x20);

	if (t3 != -3) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -1;
	uint16_t x26 = 3246U;
	int16_t x27 = INT16_MAX;
	int8_t x28 = INT8_MIN;
	volatile int32_t t4 = -668;

	t4 = (((x25*x26)-x27)%x28);

	if (t4 != -45) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = 0;
	volatile int64_t x31 = 3659LL;
	volatile int64_t t5 = -170877139159LL;

	t5 = (((x29*x30)-x31)%x32);

	if (t5 != -3659LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x37 = INT8_MAX;
	uint8_t x39 = 0U;
	volatile uint32_t x40 = UINT32_MAX;
	static volatile uint32_t t6 = 1062291U;

	t6 = (((x37*x38)-x39)%x40);

	if (t6 != 4161409U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = -1;
	static volatile uint8_t x42 = 126U;
	int32_t x43 = -1;
	int16_t x44 = -53;

	t7 = (((x41*x42)-x43)%x44);

	if (t7 != -19) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = 29575750LLU;
	int32_t x46 = -122;
	static int64_t x47 = -1LL;
	int64_t x48 = INT64_MIN;
	volatile uint64_t t8 = 32077669668944LLU;

	t8 = (((x45*x46)-x47)%x48);

	if (t8 != 9223372033246534309LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = -1;
	static uint8_t x54 = UINT8_MAX;
	int32_t x55 = 60;
	volatile uint64_t t9 = 201641530745762LLU;

	t9 = (((x53*x54)-x55)%x56);

	if (t9 != 18446744073709551301LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = -589LL;
	static uint16_t x58 = 7U;
	int32_t x60 = INT32_MIN;

	t10 = (((x57*x58)-x59)%x60);

	if (t10 != -8260LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x73 = UINT64_MAX;
	uint8_t x74 = 0U;
	int32_t x76 = INT32_MIN;

	t11 = (((x73*x74)-x75)%x76);

	if (t11 != 1606305935690023LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x77 = -1;
	static uint8_t x79 = 73U;
	uint16_t x80 = 1U;
	uint32_t t12 = 12990U;

	t12 = (((x77*x78)-x79)%x80);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x81 = -1;
	volatile int8_t x82 = INT8_MIN;
	int64_t x83 = INT64_MAX;
	int16_t x84 = -7065;
	volatile int64_t t13 = -8217093264LL;

	t13 = (((x81*x82)-x83)%x84);

	if (t13 != -6629LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x85 = 0;
	volatile uint32_t x86 = 246U;
	volatile uint8_t x87 = 120U;
	int64_t x88 = INT64_MIN;
	int64_t t14 = -3894973LL;

	t14 = (((x85*x86)-x87)%x88);

	if (t14 != 4294967176LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x93 = 68896291275834064LLU;
	int8_t x94 = INT8_MIN;
	volatile uint32_t x95 = 831002U;
	uint64_t t15 = 74018LLU;

	t15 = (((x93*x94)-x95)%x96);

	if (t15 != 2734LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x101 = -1;
	uint32_t x102 = UINT32_MAX;
	volatile uint32_t t16 = 7U;

	t16 = (((x101*x102)-x103)%x104);

	if (t16 != 114U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x113 = UINT64_MAX;
	volatile int8_t x114 = -1;
	uint64_t x115 = 3834471880946LLU;
	uint64_t t17 = 214020085206904645LLU;

	t17 = (((x113*x114)-x115)%x116);

	if (t17 != 216LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x117 = 0U;
	volatile uint64_t x118 = UINT64_MAX;
	int32_t x119 = -100;
	int16_t x120 = -3;
	uint64_t t18 = 1479234959LLU;

	t18 = (((x117*x118)-x119)%x120);

	if (t18 != 100LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x126 = UINT32_MAX;
	uint64_t x127 = 6408996987LLU;
	volatile uint8_t x128 = 20U;
	uint64_t t19 = 4266139999055941863LLU;

	t19 = (((x125*x126)-x127)%x128);

	if (t19 != 10LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x129 = -1;
	volatile int16_t x131 = -1;
	static uint16_t x132 = UINT16_MAX;
	int32_t t20 = 919643091;

	t20 = (((x129*x130)-x131)%x132);

	if (t20 != -36) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x139 = -1445;
	static uint64_t x140 = 19LLU;
	uint64_t t21 = 35308438979LLU;

	t21 = (((x137*x138)-x139)%x140);

	if (t21 != 14LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x141 = 13U;
	uint64_t t22 = 144165654LLU;

	t22 = (((x141*x142)-x143)%x144);

	if (t22 != 11LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x149 = 5585600864263LL;
	int32_t x150 = -1;
	uint16_t x151 = 531U;
	uint32_t x152 = UINT32_MAX;
	int64_t t23 = 20LL;

	t23 = (((x149*x150)-x151)%x152);

	if (t23 != -2143381294LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x153 = 20363692U;
	static int8_t x154 = -1;
	uint32_t t24 = 70U;

	t24 = (((x153*x154)-x155)%x156);

	if (t24 != 16U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x162 = INT64_MIN;
	static uint32_t x163 = 0U;
	uint32_t x164 = 1888U;

	t25 = (((x161*x162)-x163)%x164);

	if (t25 != 32LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x174 = UINT16_MAX;
	static uint32_t x175 = UINT32_MAX;
	uint32_t x176 = 1825U;
	uint32_t t26 = 1795949503U;

	t26 = (((x173*x174)-x175)%x176);

	if (t26 != 1512U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x182 = -1;
	int32_t x183 = -1;
	int64_t x184 = INT64_MAX;
	volatile int64_t t27 = 83151LL;

	t27 = (((x181*x182)-x183)%x184);

	if (t27 != -126LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x185 = 3U;
	int64_t x186 = -1LL;
	static int8_t x187 = INT8_MIN;
	int32_t x188 = INT32_MAX;
	volatile int64_t t28 = 447625376156750LL;

	t28 = (((x185*x186)-x187)%x188);

	if (t28 != 125LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x189 = INT16_MAX;
	int8_t x190 = -1;
	uint16_t x191 = UINT16_MAX;
	int8_t x192 = -1;
	int32_t t29 = 32;

	t29 = (((x189*x190)-x191)%x192);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x201 = INT16_MIN;
	static int16_t x202 = -31;
	volatile int32_t x203 = INT32_MAX;
	static int8_t x204 = INT8_MAX;
	volatile int32_t t30 = 14103;

	t30 = (((x201*x202)-x203)%x204);

	if (t30 != -72) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x205 = -1LL;
	uint32_t x206 = UINT32_MAX;
	int32_t x207 = 5;
	int64_t t31 = -34162953967939LL;

	t31 = (((x205*x206)-x207)%x208);

	if (t31 != -2708LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x209 = INT8_MIN;
	static volatile uint32_t x211 = 14U;
	static int64_t t32 = -413244715971284LL;

	t32 = (((x209*x210)-x211)%x212);

	if (t32 != 4294967026LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x214 = 10U;
	volatile int8_t x216 = 1;
	int32_t t33 = -12;

	t33 = (((x213*x214)-x215)%x216);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x217 = INT32_MAX;
	uint64_t x218 = 147LLU;
	volatile int32_t x219 = INT32_MIN;
	uint32_t x220 = 123U;

	t34 = (((x217*x218)-x219)%x220);

	if (t34 != 8LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x222 = INT32_MIN;
	uint8_t x223 = UINT8_MAX;
	int64_t t35 = 425LL;

	t35 = (((x221*x222)-x223)%x224);

	if (t35 != 2769550351LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x225 = -1;
	static uint8_t x226 = UINT8_MAX;
	static int16_t x227 = 42;
	volatile int32_t t36 = 684;

	t36 = (((x225*x226)-x227)%x228);

	if (t36 != -43) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x229 = -1;
	int64_t x230 = 1908LL;
	static int8_t x231 = INT8_MIN;
	int8_t x232 = -1;

	t37 = (((x229*x230)-x231)%x232);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x233 = 8648453583LLU;
	int32_t x235 = INT32_MAX;
	static int64_t x236 = INT64_MAX;
	volatile uint64_t t38 = 1955113360LLU;

	t38 = (((x233*x234)-x235)%x236);

	if (t38 != 9223372034707292162LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x237 = INT8_MAX;
	int16_t x238 = -1;
	uint8_t x239 = UINT8_MAX;
	static volatile int32_t t39 = -1;

	t39 = (((x237*x238)-x239)%x240);

	if (t39 != -382) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x241 = 51223464LLU;
	int8_t x243 = INT8_MAX;
	volatile int32_t x244 = -1;
	volatile uint64_t t40 = 16LLU;

	t40 = (((x241*x242)-x243)%x244);

	if (t40 != 130312492289LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x249 = 3;
	volatile int64_t x250 = -943365634LL;
	static uint8_t x251 = 62U;
	int32_t x252 = 8;
	static int64_t t41 = 0LL;

	t41 = (((x249*x250)-x251)%x252);

	if (t41 != -4LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x253 = INT8_MAX;
	int32_t x254 = -22;
	int8_t x255 = INT8_MAX;
	uint32_t x256 = UINT32_MAX;
	uint32_t t42 = 885357656U;

	t42 = (((x253*x254)-x255)%x256);

	if (t42 != 4294964375U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x261 = INT8_MAX;
	uint8_t x262 = 9U;
	static int64_t t43 = 243333156556238LL;

	t43 = (((x261*x262)-x263)%x264);

	if (t43 != 1142LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x265 = -1;
	int16_t x266 = INT16_MIN;
	int64_t x267 = INT64_MAX;
	int16_t x268 = INT16_MAX;
	volatile int64_t t44 = -35506LL;

	t44 = (((x265*x266)-x267)%x268);

	if (t44 != -6LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x273 = INT8_MIN;
	static int32_t x275 = INT32_MIN;

	t45 = (((x273*x274)-x275)%x276);

	if (t45 != 2147483776U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x281 = 4913514988780LL;
	volatile int32_t x282 = -1;
	int8_t x284 = INT8_MAX;
	volatile int64_t t46 = -184266LL;

	t46 = (((x281*x282)-x283)%x284);

	if (t46 != 21LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x285 = 2U;
	static int16_t x286 = INT16_MIN;
	static uint64_t x287 = 13285LLU;
	volatile int8_t x288 = -1;

	t47 = (((x285*x286)-x287)%x288);

	if (t47 != 18446744073709472795LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x295 = INT16_MAX;
	int8_t x296 = 26;
	volatile int32_t t48 = -42102080;

	t48 = (((x293*x294)-x295)%x296);

	if (t48 != -13) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x302 = -1LL;
	int8_t x303 = INT8_MIN;
	int32_t x304 = -2421413;
	volatile int64_t t49 = 49329LL;

	t49 = (((x301*x302)-x303)%x304);

	if (t49 != 105LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x306 = 4793302U;
	volatile int8_t x307 = -1;
	volatile int64_t t50 = -1LL;

	t50 = (((x305*x306)-x307)%x308);

	if (t50 != 1846870017LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x309 = -1;
	int64_t x310 = 650607372295827498LL;
	uint16_t x311 = 120U;
	uint64_t x312 = 1322338751697052LLU;
	uint64_t t51 = 14028997045LLU;

	t51 = (((x309*x310)-x311)%x312);

	if (t51 != 101781074798182LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x317 = 677608599LLU;
	int64_t x318 = -1LL;
	int8_t x320 = INT8_MAX;
	static volatile uint64_t t52 = 15357273780509195LLU;

	t52 = (((x317*x318)-x319)%x320);

	if (t52 != 24LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x322 = 0;
	int64_t x324 = -155925385789LL;
	volatile int64_t t53 = -5202347852LL;

	t53 = (((x321*x322)-x323)%x324);

	if (t53 != 26942094174LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x329 = -614;
	uint64_t x330 = UINT64_MAX;
	int32_t x331 = INT32_MIN;
	volatile uint64_t t54 = 21815364LLU;

	t54 = (((x329*x330)-x331)%x332);

	if (t54 != 58LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x333 = 38267513U;
	uint16_t x334 = UINT16_MAX;
	volatile int32_t x335 = -1;
	int64_t x336 = 6672389230857LL;
	int64_t t55 = -1LL;

	t55 = (((x333*x334)-x335)%x336);

	if (t55 != 3895530888LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x342 = 39;
	uint32_t x343 = UINT32_MAX;
	volatile int16_t x344 = INT16_MAX;
	uint32_t t56 = 340U;

	t56 = (((x341*x342)-x343)%x344);

	if (t56 != 5446U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x345 = 4067753;
	volatile int32_t x346 = -1;

	t57 = (((x345*x346)-x347)%x348);

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x354 = -22;
	int16_t x355 = INT16_MIN;
	int16_t x356 = 1;
	static uint64_t t58 = 1770009796256LLU;

	t58 = (((x353*x354)-x355)%x356);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x359 = 252U;
	static int64_t x360 = INT64_MIN;
	volatile int64_t t59 = 3550289002478827LL;

	t59 = (((x357*x358)-x359)%x360);

	if (t59 != 4688LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x361 = UINT8_MAX;
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = 17;
	uint64_t t60 = 4391LLU;

	t60 = (((x361*x362)-x363)%x364);

	if (t60 != 4294967024LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x366 = 29792293LLU;
	uint32_t x367 = UINT32_MAX;
	int16_t x368 = INT16_MAX;
	volatile uint64_t t61 = 131620LLU;

	t61 = (((x365*x366)-x367)%x368);

	if (t61 != 5LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x377 = 2;
	volatile uint32_t x380 = 11418U;
	volatile int64_t t62 = -19255018309210LL;

	t62 = (((x377*x378)-x379)%x380);

	if (t62 != 9930LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x381 = INT16_MIN;
	uint32_t x382 = 113226687U;
	int16_t x383 = INT16_MIN;
	uint32_t t63 = 28483017U;

	t63 = (((x381*x382)-x383)%x384);

	if (t63 != 639696896U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x385 = 1;
	volatile int8_t x386 = -1;
	int64_t x388 = INT64_MIN;
	volatile int64_t t64 = 4935225843373LL;

	t64 = (((x385*x386)-x387)%x388);

	if (t64 != -88LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x397 = 6082;
	volatile int8_t x398 = INT8_MAX;
	int8_t x399 = -1;
	static int64_t x400 = INT64_MIN;
	volatile int64_t t65 = -1185364340LL;

	t65 = (((x397*x398)-x399)%x400);

	if (t65 != 772415LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x408 = 39U;
	volatile int32_t t66 = 10;

	t66 = (((x405*x406)-x407)%x408);

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x409 = -1;
	int16_t x410 = -1;
	volatile uint64_t x411 = 1806LLU;
	volatile uint64_t t67 = 129410035LLU;

	t67 = (((x409*x410)-x411)%x412);

	if (t67 != 63731LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x421 = 1632U;
	uint8_t x422 = UINT8_MAX;
	volatile uint8_t x423 = 0U;
	uint16_t x424 = UINT16_MAX;
	static volatile uint32_t t68 = 14U;

	t68 = (((x421*x422)-x423)%x424);

	if (t68 != 22950U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x429 = 168187765773251LLU;
	int32_t x432 = -111300;
	uint64_t t69 = 2359499LLU;

	t69 = (((x429*x430)-x431)%x432);

	if (t69 != 336375531546503LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x433 = -289946;
	int32_t x434 = -1064;
	static int32_t x436 = -4134;
	int64_t t70 = -3840917172504756LL;

	t70 = (((x433*x434)-x435)%x436);

	if (t70 != 835LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x437 = INT16_MIN;
	uint16_t x438 = UINT16_MAX;
	int16_t x439 = INT16_MAX;
	int64_t x440 = INT64_MIN;
	static int64_t t71 = -43912184959399511LL;

	t71 = (((x437*x438)-x439)%x440);

	if (t71 != -2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x441 = -1;
	int8_t x442 = -1;
	static volatile uint16_t x443 = UINT16_MAX;
	int16_t x444 = 1507;
	int32_t t72 = 1159;

	t72 = (((x441*x442)-x443)%x444);

	if (t72 != -733) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x445 = 1694U;
	volatile uint16_t x446 = UINT16_MAX;
	uint32_t x447 = 15713U;
	static int64_t t73 = -260450756LL;

	t73 = (((x445*x446)-x447)%x448);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x453 = 862624542675784LLU;
	volatile uint16_t x454 = UINT16_MAX;
	int32_t x455 = INT32_MIN;
	volatile uint64_t t74 = 270459139513876356LLU;

	t74 = (((x453*x454)-x455)%x456);

	if (t74 != 116123264LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x457 = UINT64_MAX;
	volatile uint32_t x459 = 187670U;
	static uint32_t x460 = 12U;
	static volatile uint64_t t75 = 8LLU;

	t75 = (((x457*x458)-x459)%x460);

	if (t75 != 10LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x461 = INT16_MAX;
	int8_t x463 = 53;
	int32_t x464 = INT32_MAX;

	t76 = (((x461*x462)-x463)%x464);

	if (t76 != 709372729U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x473 = -1;
	static uint16_t x474 = UINT16_MAX;
	static volatile uint32_t x475 = 378704U;
	static int16_t x476 = 567;
	volatile uint32_t t77 = 158U;

	t77 = (((x473*x474)-x475)%x476);

	if (t77 != 419U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x477 = -1;
	uint32_t x478 = 295163U;
	int16_t x480 = -528;
	uint32_t t78 = 25U;

	t78 = (((x477*x478)-x479)%x480);

	if (t78 != 4294704901U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x481 = UINT16_MAX;
	int32_t x482 = 0;
	int64_t x483 = -3365LL;

	t79 = (((x481*x482)-x483)%x484);

	if (t79 != 3365LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x485 = -1;
	static int8_t x486 = INT8_MIN;
	static uint32_t x487 = 1718145U;
	volatile uint32_t t80 = 239U;

	t80 = (((x485*x486)-x487)%x488);

	if (t80 != 43U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x489 = UINT8_MAX;
	static int16_t x490 = INT16_MIN;
	uint8_t x491 = 83U;
	int16_t x492 = INT16_MIN;
	static int32_t t81 = -13;

	t81 = (((x489*x490)-x491)%x492);

	if (t81 != -83) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x493 = UINT64_MAX;
	int16_t x494 = INT16_MIN;
	static volatile int8_t x495 = INT8_MIN;
	uint64_t x496 = 73LLU;
	volatile uint64_t t82 = 176736979992655LLU;

	t82 = (((x493*x494)-x495)%x496);

	if (t82 != 46LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x498 = 38U;
	int8_t x499 = INT8_MIN;
	int8_t x500 = INT8_MIN;
	int32_t t83 = 97;

	t83 = (((x497*x498)-x499)%x500);

	if (t83 != 90) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x501 = 3690124153141LLU;
	volatile int64_t x502 = -1LL;
	int32_t x504 = INT32_MIN;
	volatile uint64_t t84 = 144983552LLU;

	t84 = (((x501*x502)-x503)%x504);

	if (t84 != 18446740383585398469LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x509 = 71U;
	int16_t x510 = INT16_MIN;
	int32_t x511 = INT32_MIN;
	int16_t x512 = -54;
	volatile int32_t t85 = 237905573;

	t85 = (((x509*x510)-x511)%x512);

	if (t85 != 46) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x514 = 461U;
	uint8_t x515 = 27U;

	t86 = (((x513*x514)-x515)%x516);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x517 = 26U;
	int8_t x518 = INT8_MIN;
	uint16_t x519 = 2732U;
	static uint32_t t87 = 215U;

	t87 = (((x517*x518)-x519)%x520);

	if (t87 != 4294961236U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x521 = 960806166LLU;
	volatile uint32_t x522 = 28394811U;
	static uint16_t x523 = 1262U;
	static uint8_t x524 = UINT8_MAX;
	volatile uint64_t t88 = 330LLU;

	t88 = (((x521*x522)-x523)%x524);

	if (t88 != 64LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x525 = 611836646U;
	volatile uint64_t x526 = UINT64_MAX;
	int8_t x527 = -1;
	uint16_t x528 = 15U;

	t89 = (((x525*x526)-x527)%x528);

	if (t89 != 6LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x533 = 1236653511LLU;
	static int64_t x534 = INT64_MIN;
	static volatile int16_t x535 = -1;
	uint16_t x536 = 3116U;
	static volatile uint64_t t90 = 236238262568050336LLU;

	t90 = (((x533*x534)-x535)%x536);

	if (t90 != 665LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x542 = INT8_MIN;
	static int8_t x543 = INT8_MAX;
	volatile uint64_t x544 = 2095825009363LLU;
	uint64_t t91 = 127285009329802883LLU;

	t91 = (((x541*x542)-x543)%x544);

	if (t91 != 730149589927LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x545 = INT16_MIN;
	volatile uint32_t x546 = 107U;
	volatile int32_t x547 = 494829;

	t92 = (((x545*x546)-x547)%x548);

	if (t92 != 3U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x549 = -1;
	uint64_t x550 = 62680LLU;
	volatile int8_t x551 = 5;
	int8_t x552 = INT8_MIN;

	t93 = (((x549*x550)-x551)%x552);

	if (t93 != 18446744073709488931LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x554 = -1;
	int32_t x555 = 1;
	uint8_t x556 = 4U;
	volatile int64_t t94 = 554525546866066640LL;

	t94 = (((x553*x554)-x555)%x556);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x557 = 4483836LL;
	int8_t x558 = INT8_MIN;
	int8_t x560 = INT8_MIN;
	static volatile int64_t t95 = 943528836750LL;

	t95 = (((x557*x558)-x559)%x560);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x561 = UINT32_MAX;
	volatile int8_t x562 = -48;
	int64_t x564 = -3097600347LL;
	volatile int64_t t96 = -3548723636771747182LL;

	t96 = (((x561*x562)-x563)%x564);

	if (t96 != 1196839369LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x565 = -47;
	volatile uint16_t x566 = 4763U;
	volatile int32_t t97 = -7922;

	t97 = (((x565*x566)-x567)%x568);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x569 = 1;
	int16_t x570 = -1;
	uint8_t x571 = 1U;
	int8_t x572 = -12;

	t98 = (((x569*x570)-x571)%x572);

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x573 = 6U;
	int16_t x575 = INT16_MIN;
	volatile int32_t t99 = 13106574;

	t99 = (((x573*x574)-x575)%x576);

	if (t99 != 87) { NG(); } else { ; }
	
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

