#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
static int16_t x10 = INT16_MIN;
uint64_t x12 = UINT64_MAX;
volatile int64_t x13 = 893804998286416LL;
volatile int8_t x21 = -1;
static int64_t t4 = 260879521LL;
int32_t t5 = -255;
volatile int64_t x51 = INT64_MIN;
uint64_t t10 = 67429180661LLU;
volatile int16_t x70 = -75;
static volatile int64_t t11 = -458701102LL;
volatile uint16_t x76 = 8089U;
int16_t x77 = INT16_MAX;
volatile int16_t x81 = INT16_MAX;
static int8_t x93 = INT8_MIN;
uint64_t x95 = 67891LLU;
int16_t x118 = INT16_MAX;
uint32_t x119 = 2099396897U;
uint8_t x127 = 6U;
int16_t x150 = -1;
int64_t x151 = -3076081145LL;
int64_t t24 = 30LL;
int64_t x155 = -1LL;
volatile int64_t t25 = 9561003596340LL;
int8_t x158 = INT8_MIN;
static int16_t x159 = -3683;
uint16_t x162 = UINT16_MAX;
uint32_t x163 = 8316343U;
static int8_t x174 = INT8_MIN;
static volatile int8_t x175 = -5;
uint64_t t29 = 762747445858LLU;
uint32_t t30 = 6460194U;
uint8_t x185 = 51U;
volatile uint32_t x187 = 3542U;
int16_t x194 = -1;
int16_t x208 = INT16_MIN;
int16_t x209 = INT16_MAX;
uint16_t x219 = 281U;
int32_t x220 = INT32_MIN;
uint32_t x221 = 399936U;
volatile uint32_t t37 = 2U;
uint16_t x226 = 32U;
uint32_t x230 = UINT32_MAX;
int64_t x231 = INT64_MIN;
int8_t x264 = INT8_MIN;
volatile uint8_t x265 = 1U;
volatile uint32_t x267 = UINT32_MAX;
int16_t x269 = 1;
int16_t x274 = -1;
int64_t x277 = 30LL;
int64_t x285 = -1LL;
uint32_t x288 = 0U;
uint64_t x297 = 1050539453LLU;
uint8_t x302 = 0U;
int8_t x303 = -1;
uint8_t x308 = UINT8_MAX;
static int32_t x316 = -2254;
uint8_t x322 = 0U;
volatile uint8_t x324 = 15U;
int64_t x330 = INT64_MAX;
uint64_t x331 = 6LLU;
static uint8_t x349 = UINT8_MAX;
uint64_t x351 = UINT64_MAX;
uint8_t x354 = 5U;
volatile uint8_t x366 = 0U;
uint64_t x369 = UINT64_MAX;
int64_t t65 = 1511LL;
int64_t x377 = -17471871308222756LL;
volatile uint8_t x380 = UINT8_MAX;
uint64_t t67 = 410767654LLU;
static volatile int64_t t69 = -1172799110LL;
uint16_t x402 = UINT16_MAX;
int16_t x405 = -1;
int32_t t76 = -30;
int64_t x440 = INT64_MIN;
int64_t x444 = INT64_MIN;
int32_t t81 = -725;
volatile uint32_t x457 = 15234U;
volatile int64_t x479 = INT64_MIN;
uint64_t t85 = 913650228527917LLU;
volatile int64_t t86 = 8612913213649774LL;
int16_t x489 = INT16_MIN;
uint8_t x496 = UINT8_MAX;
int64_t x506 = -1LL;
uint64_t t90 = 6700513LLU;
static int64_t x519 = INT64_MIN;
volatile int64_t x520 = INT64_MIN;
volatile uint32_t x528 = 218434314U;
static uint32_t x535 = 160U;
uint32_t x542 = 528758329U;
uint32_t x543 = 256365342U;
int64_t x544 = -1LL;
static volatile uint64_t t96 = 13174116993610763LLU;
int64_t t97 = -15777523555LL;
int8_t x558 = INT8_MIN;
int32_t x559 = -210623320;
volatile uint32_t t99 = 763U;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int8_t x3 = -55;
	volatile uint16_t x4 = UINT16_MAX;
	int32_t t0 = 114;

	t0 = (x1*((x2^x3)^x4));

	if (t0 != 8316087) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 64U;
	int32_t x6 = -1;
	static int16_t x7 = INT16_MAX;
	uint8_t x8 = 6U;
	volatile uint32_t t1 = 1094046037U;

	t1 = (x5*((x6^x7)^x8));

	if (t1 != 4292870528U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 52U;
	int16_t x11 = -4;
	uint64_t t2 = 1345943569138173991LLU;

	t2 = (x9*((x10^x11)^x12));

	if (t2 != 18446744073707847836LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x14 = INT16_MAX;
	static volatile int32_t x15 = INT32_MIN;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 983792214LLU;

	t3 = (x13*((x14^x15)^x16));

	if (t3 != 162505009976049664LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = INT8_MIN;
	static volatile int8_t x23 = INT8_MIN;
	int64_t x24 = INT64_MAX;

	t4 = (x21*((x22^x23)^x24));

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = INT8_MIN;
	uint16_t x26 = 89U;
	static int16_t x27 = INT16_MAX;
	int32_t x28 = 0;

	t5 = (x25*((x26^x27)^x28));

	if (t5 != -4182784) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = 70101;
	static uint16_t x42 = 9U;
	uint8_t x43 = 74U;
	uint16_t x44 = 3484U;
	volatile int32_t t6 = -12372566;

	t6 = (x41*((x42^x43)^x44));

	if (t6 != 248928651) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = INT32_MAX;
	static volatile int64_t x50 = INT64_MAX;
	static uint64_t x52 = UINT64_MAX;
	static volatile uint64_t t7 = 49887393LLU;

	t7 = (x49*((x50^x51)^x52));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = INT16_MIN;
	int8_t x54 = INT8_MIN;
	uint32_t x55 = 3U;
	uint8_t x56 = UINT8_MAX;
	uint32_t t8 = 25236U;

	t8 = (x53*((x54^x55)^x56));

	if (t8 != 4325376U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x57 = 204650576063LLU;
	int8_t x58 = INT8_MAX;
	static volatile uint8_t x59 = 52U;
	int32_t x60 = INT32_MIN;
	uint64_t t9 = 2558675187392LLU;

	t9 = (x57*((x58^x59)^x60));

	if (t9 != 3238107468749725685LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x61 = 7314713022563554708LLU;
	int16_t x62 = INT16_MIN;
	volatile int8_t x63 = -1;
	static volatile int16_t x64 = -54;

	t10 = (x61*((x62^x63)^x64));

	if (t10 != 8774335067320842148LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = -1;
	static int64_t x71 = INT64_MIN;
	int8_t x72 = INT8_MIN;

	t11 = (x69*((x70^x71)^x72));

	if (t11 != 9223372036854775755LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x73 = 75496744LLU;
	static int16_t x74 = -3;
	int32_t x75 = -6;
	volatile uint64_t t12 = 3083171LLU;

	t12 = (x73*((x74^x75)^x76));

	if (t12 != 611070645936LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x78 = INT16_MIN;
	static uint64_t x79 = 8667419LLU;
	uint8_t x80 = UINT8_MAX;
	volatile uint64_t t13 = 7068975339433249975LLU;

	t13 = (x77*((x78^x79)^x80));

	if (t13 != 18446743789729365532LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x82 = -3;
	uint8_t x83 = 47U;
	int16_t x84 = -1;
	volatile int32_t t14 = 13;

	t14 = (x81*((x82^x83)^x84));

	if (t14 != 1474515) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x85 = 1U;
	int64_t x86 = INT64_MIN;
	int8_t x87 = INT8_MAX;
	volatile int32_t x88 = INT32_MIN;
	int64_t t15 = -521LL;

	t15 = (x85*((x86^x87)^x88));

	if (t15 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = -1;
	int32_t x90 = -1;
	int64_t x91 = -1LL;
	int64_t x92 = 503796470059LL;
	volatile int64_t t16 = -18125LL;

	t16 = (x89*((x90^x91)^x92));

	if (t16 != -503796470059LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x94 = 0U;
	int16_t x96 = INT16_MAX;
	uint64_t t17 = 7342912670764287LLU;

	t17 = (x93*((x94^x95)^x96));

	if (t17 != 18446744073697270272LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x105 = -820582140114LL;
	static uint16_t x106 = 7U;
	volatile int32_t x107 = -1;
	int8_t x108 = INT8_MIN;
	volatile int64_t t18 = 54LL;

	t18 = (x105*((x106^x107)^x108));

	if (t18 != -98469856813680LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x117 = UINT32_MAX;
	uint64_t x120 = 303816039LLU;
	volatile uint64_t t19 = 144504733166LLU;

	t19 = (x117*((x118^x119)^x120));

	if (t19 != 8014687393724898375LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x125 = -9;
	static uint8_t x126 = 36U;
	static int8_t x128 = -44;
	static volatile int32_t t20 = -52042;

	t20 = (x125*((x126^x127)^x128));

	if (t20 != 90) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x133 = -6LL;
	static int16_t x134 = INT16_MIN;
	static uint16_t x135 = UINT16_MAX;
	int8_t x136 = INT8_MIN;
	static int64_t t21 = 650471160391096645LL;

	t21 = (x133*((x134^x135)^x136));

	if (t21 != -197370LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x141 = INT64_MAX;
	static int16_t x142 = INT16_MIN;
	static uint64_t x143 = 4257983717976220322LLU;
	int64_t x144 = INT64_MIN;
	static uint64_t t22 = 361100LLU;

	t22 = (x141*((x142^x143)^x144));

	if (t22 != 13481355754831011166LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x145 = 45692LL;
	int64_t x146 = -972206837436LL;
	int16_t x147 = -24;
	int64_t x148 = -317769772747LL;
	int64_t t23 = 330157LL;

	t23 = (x145*((x146^x147)^x148));

	if (t23 != -33681062825316324LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x149 = INT16_MIN;
	static int8_t x152 = INT8_MAX;

	t24 = (x149*((x150^x151)^x152));

	if (t24 != -100797023223808LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x153 = -340350;
	int16_t x154 = -11;
	int32_t x156 = -1;

	t25 = (x153*((x154^x155)^x156));

	if (t25 != 3743850LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x157 = 520148U;
	int8_t x160 = -7;
	static volatile uint32_t t26 = 51179716U;

	t26 = (x157*((x158^x159)^x160));

	if (t26 != 2416192720U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x161 = INT16_MIN;
	volatile uint8_t x164 = 3U;
	static volatile uint32_t t27 = 29U;

	t27 = (x161*((x162^x163)^x164));

	if (t27 != 4074405888U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x165 = -7058217LL;
	int32_t x166 = INT32_MIN;
	volatile int64_t x167 = 42022379LL;
	volatile int8_t x168 = 2;
	static volatile int64_t t28 = 4078920234253LL;

	t28 = (x165*((x166^x167)^x168));

	if (t28 != 14860802535813807LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x173 = 7387LLU;
	uint64_t x176 = UINT64_MAX;

	t29 = (x173*((x174^x175)^x176));

	if (t29 != 18446744073708635628LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x177 = 89435383U;
	int32_t x178 = -1;
	volatile uint16_t x179 = UINT16_MAX;
	int32_t x180 = 0;

	t30 = (x177*((x178^x179)^x180));

	if (t30 != 1393098752U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x181 = -10LL;
	uint32_t x182 = 910158764U;
	static int8_t x183 = INT8_MIN;
	static int32_t x184 = -59;
	volatile int64_t t31 = 56423894215276169LL;

	t31 = (x181*((x182^x183)^x184));

	if (t31 != -9101588250LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x186 = 3566085539080054991LLU;
	uint32_t x188 = 1U;
	static volatile uint64_t t32 = 715LLU;

	t32 = (x185*((x186^x187)^x188));

	if (t32 != 15849665829696791496LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x193 = INT32_MIN;
	volatile int16_t x195 = 2;
	int64_t x196 = -1LL;
	static volatile int64_t t33 = 74188075841579LL;

	t33 = (x193*((x194^x195)^x196));

	if (t33 != -4294967296LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x205 = 1;
	uint16_t x206 = 18331U;
	volatile int64_t x207 = INT64_MIN;
	int64_t t34 = -37233216625063227LL;

	t34 = (x205*((x206^x207)^x208));

	if (t34 != 9223372036854761371LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x210 = 20U;
	static uint16_t x211 = UINT16_MAX;
	static int8_t x212 = INT8_MIN;
	volatile int32_t t35 = 63000;

	t35 = (x209*((x210^x211)^x212));

	if (t35 != -2143912043) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x217 = UINT8_MAX;
	static uint64_t x218 = UINT64_MAX;
	uint64_t t36 = 3459050265444498LLU;

	t36 = (x217*((x218^x219)^x220));

	if (t36 != 547608258330LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x222 = -1;
	int8_t x223 = 9;
	static uint32_t x224 = 2720U;

	t37 = (x221*((x222^x223)^x224));

	if (t37 != 3203142016U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x225 = UINT64_MAX;
	static int8_t x227 = -1;
	int16_t x228 = -1;
	uint64_t t38 = 8249276851LLU;

	t38 = (x225*((x226^x227)^x228));

	if (t38 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x229 = INT32_MIN;
	static uint64_t x232 = 45429439LLU;
	volatile uint64_t t39 = 3835983681653749LLU;

	t39 = (x229*((x230^x231)^x232));

	if (t39 != 9320931016392572928LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x233 = 97U;
	volatile int32_t x234 = 202;
	uint64_t x235 = 1835816034LLU;
	int64_t x236 = INT64_MIN;
	uint64_t t40 = 15860076LLU;

	t40 = (x233*((x234^x235)^x236));

	if (t40 != 9223372214928937896LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x237 = 0U;
	uint16_t x238 = UINT16_MAX;
	uint8_t x239 = 3U;
	static uint32_t x240 = 3U;
	uint32_t t41 = 1U;

	t41 = (x237*((x238^x239)^x240));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x253 = -1LL;
	int32_t x254 = 259003;
	int32_t x255 = INT32_MIN;
	uint32_t x256 = UINT32_MAX;
	int64_t t42 = -509LL;

	t42 = (x253*((x254^x255)^x256));

	if (t42 != -2147224644LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x261 = -2670692;
	int16_t x262 = -1;
	uint64_t x263 = 53695777054LLU;
	static volatile uint64_t t43 = 6989999763367LLU;

	t43 = (x261*((x262^x263)^x264));

	if (t43 != 18303339191318713884LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x266 = INT16_MIN;
	volatile int8_t x268 = 18;
	uint32_t t44 = 48U;

	t44 = (x265*((x266^x267)^x268));

	if (t44 != 32749U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x270 = INT32_MIN;
	int8_t x271 = -1;
	int32_t x272 = INT32_MIN;
	volatile int32_t t45 = 12730;

	t45 = (x269*((x270^x271)^x272));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x273 = -1LL;
	int32_t x275 = 64390;
	int16_t x276 = INT16_MIN;
	volatile int64_t t46 = 481470539494037LL;

	t46 = (x273*((x274^x275)^x276));

	if (t46 != -33913LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x278 = INT32_MIN;
	int16_t x279 = INT16_MAX;
	volatile int8_t x280 = INT8_MIN;
	volatile int64_t t47 = 10120268910240LL;

	t47 = (x277*((x278^x279)^x280));

	if (t47 != 64423530210LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x281 = UINT8_MAX;
	uint64_t x282 = 2438LLU;
	uint64_t x283 = 557097252186796LLU;
	static int16_t x284 = -1;
	static volatile uint64_t t48 = 66033702831210LLU;

	t48 = (x281*((x282^x283)^x284));

	if (t48 != 18304684274402408491LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x286 = INT32_MAX;
	static volatile uint64_t x287 = 25LLU;
	volatile uint64_t t49 = 44374494156593704LLU;

	t49 = (x285*((x286^x287)^x288));

	if (t49 != 18446744071562067994LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x298 = INT32_MAX;
	int8_t x299 = 9;
	int64_t x300 = INT64_MIN;
	uint64_t t50 = 51774946993090369LLU;

	t50 = (x297*((x298^x299)^x300));

	if (t50 != 11479388323245745822LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x301 = UINT32_MAX;
	int8_t x304 = INT8_MIN;
	volatile uint32_t t51 = 511329U;

	t51 = (x301*((x302^x303)^x304));

	if (t51 != 4294967169U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x305 = INT8_MIN;
	volatile int64_t x306 = 14458524047971LL;
	static int8_t x307 = INT8_MIN;
	int64_t t52 = 6841LL;

	t52 = (x305*((x306^x307)^x308));

	if (t52 != 1850691078156800LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x309 = 0;
	volatile int8_t x310 = 26;
	int32_t x311 = INT32_MIN;
	uint16_t x312 = 6U;
	static int32_t t53 = 0;

	t53 = (x309*((x310^x311)^x312));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x313 = 211871699637588780LLU;
	static int64_t x314 = -17349933695519873LL;
	int32_t x315 = INT32_MIN;
	uint64_t t54 = 1528135292LLU;

	t54 = (x313*((x314^x315)^x316));

	if (t54 != 14485789142151050300LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x321 = -1;
	int32_t x323 = INT32_MAX;
	int32_t t55 = -18985;

	t55 = (x321*((x322^x323)^x324));

	if (t55 != -2147483632) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x325 = UINT64_MAX;
	int16_t x326 = INT16_MAX;
	int16_t x327 = INT16_MAX;
	volatile int8_t x328 = INT8_MAX;
	volatile uint64_t t56 = 1019LLU;

	t56 = (x325*((x326^x327)^x328));

	if (t56 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x329 = INT64_MIN;
	int32_t x332 = -1;
	uint64_t t57 = 7493976951949969890LLU;

	t57 = (x329*((x330^x331)^x332));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x333 = UINT16_MAX;
	uint32_t x334 = 3U;
	int8_t x335 = INT8_MIN;
	static int32_t x336 = INT32_MAX;
	uint32_t t58 = 104U;

	t58 = (x333*((x334^x335)^x336));

	if (t58 != 2155609988U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x350 = INT16_MAX;
	int32_t x352 = INT32_MIN;
	uint64_t t59 = 55141LLU;

	t59 = (x349*((x350^x351)^x352));

	if (t59 != 547599974400LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x353 = 4U;
	uint32_t x355 = 75U;
	int32_t x356 = -995716;
	static volatile uint32_t t60 = 776U;

	t60 = (x353*((x354^x355)^x356));

	if (t60 != 4290984136U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x357 = INT8_MIN;
	volatile int8_t x358 = 1;
	static int64_t x359 = -7825153693284059LL;
	int16_t x360 = -2739;
	int64_t t61 = -10LL;

	t61 = (x357*((x358^x359)^x360));

	if (t61 != -1001619672740541568LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x361 = INT16_MIN;
	int8_t x362 = 9;
	uint32_t x363 = 1967191U;
	uint8_t x364 = 0U;
	volatile uint32_t t62 = 460973U;

	t62 = (x361*((x362^x363)^x364));

	if (t62 != 4258332672U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x365 = -1;
	volatile int16_t x367 = INT16_MAX;
	int32_t x368 = -1;
	int32_t t63 = 412340;

	t63 = (x365*((x366^x367)^x368));

	if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x370 = -12;
	int8_t x371 = -1;
	int8_t x372 = INT8_MIN;
	volatile uint64_t t64 = 309471625LLU;

	t64 = (x369*((x370^x371)^x372));

	if (t64 != 117LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x373 = -1LL;
	volatile uint32_t x374 = 2514U;
	static volatile int64_t x375 = -4081LL;
	int8_t x376 = INT8_MIN;

	t65 = (x373*((x374^x375)^x376));

	if (t65 != -1629LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x378 = INT64_MAX;
	int64_t x379 = INT64_MIN;
	int64_t t66 = 7028LL;

	t66 = (x377*((x378^x379)^x380));

	if (t66 != 4472799054905025536LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x381 = 42044LL;
	uint64_t x382 = 80606034LLU;
	int8_t x383 = INT8_MIN;
	int32_t x384 = -1;

	t67 = (x381*((x382^x383)^x384));

	if (t67 != 3388998537868LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x385 = 1U;
	int64_t x386 = -1LL;
	int64_t x387 = 7053195997651LL;
	uint64_t x388 = UINT64_MAX;
	static volatile uint64_t t68 = 10040207717LLU;

	t68 = (x385*((x386^x387)^x388));

	if (t68 != 7053195997651LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x393 = -1;
	int16_t x394 = INT16_MIN;
	int64_t x395 = INT64_MAX;
	static int64_t x396 = -24153LL;

	t69 = (x393*((x394^x395)^x396));

	if (t69 != -9223372036854767192LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x397 = 55U;
	int64_t x398 = -1379383LL;
	volatile uint8_t x399 = 6U;
	int32_t x400 = 675914;
	static int64_t t70 = -2533307193014797054LL;

	t70 = (x397*((x398^x399)^x400));

	if (t70 != -113041005LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x401 = UINT8_MAX;
	static volatile int16_t x403 = -1;
	static volatile uint16_t x404 = 173U;
	volatile int32_t t71 = 50;

	t71 = (x401*((x402^x403)^x404));

	if (t71 != -16667565) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x406 = 5;
	volatile int8_t x407 = INT8_MAX;
	int32_t x408 = INT32_MIN;
	int32_t t72 = 2;

	t72 = (x405*((x406^x407)^x408));

	if (t72 != 2147483526) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x413 = -1576;
	int16_t x414 = -696;
	volatile uint32_t x415 = 11741U;
	uint32_t x416 = 26823870U;
	uint32_t t73 = 51734626U;

	t73 = (x413*((x414^x415)^x416));

	if (t73 != 3629029192U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x417 = -124654722;
	int8_t x418 = -12;
	int64_t x419 = INT64_MAX;
	uint64_t x420 = UINT64_MAX;
	static uint64_t t74 = 2164764707150972LLU;

	t74 = (x417*((x418^x419)^x420));

	if (t74 != 1495856664LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x421 = -1;
	int32_t x422 = -1;
	int16_t x423 = -1;
	int16_t x424 = INT16_MIN;
	static int32_t t75 = -169059;

	t75 = (x421*((x422^x423)^x424));

	if (t75 != 32768) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x425 = -1;
	int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MIN;
	int32_t x428 = -14;

	t76 = (x425*((x426^x427)^x428));

	if (t76 != 14) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x429 = 81205LL;
	uint32_t x430 = 510006506U;
	int32_t x431 = INT32_MAX;
	volatile int64_t x432 = -1580659045790LL;
	int64_t t77 = 424331LL;

	t77 = (x429*((x430^x431)^x432));

	if (t77 != -128488761943717725LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x433 = 121451U;
	int8_t x434 = 6;
	volatile int8_t x435 = -1;
	int32_t x436 = INT32_MAX;
	uint32_t t78 = 11482958U;

	t78 = (x433*((x434^x435)^x436));

	if (t78 != 2148212354U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x437 = 1;
	static uint32_t x438 = 118748U;
	uint8_t x439 = 36U;
	volatile int64_t t79 = -1036LL;

	t79 = (x437*((x438^x439)^x440));

	if (t79 != -9223372036854657032LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x441 = 2U;
	int16_t x442 = 1;
	int64_t x443 = INT64_MIN;
	volatile int64_t t80 = 95976939LL;

	t80 = (x441*((x442^x443)^x444));

	if (t80 != 2LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x445 = 28U;
	int32_t x446 = -1;
	volatile int8_t x447 = -1;
	static int8_t x448 = -1;

	t81 = (x445*((x446^x447)^x448));

	if (t81 != -28) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x458 = INT64_MAX;
	static volatile int64_t x459 = INT64_MAX;
	int8_t x460 = 12;
	int64_t t82 = -1LL;

	t82 = (x457*((x458^x459)^x460));

	if (t82 != 182808LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x461 = -6;
	volatile uint32_t x462 = UINT32_MAX;
	uint8_t x463 = UINT8_MAX;
	int64_t x464 = 14LL;
	volatile int64_t t83 = 662775224653LL;

	t83 = (x461*((x462^x463)^x464));

	if (t83 != -25769802324LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x465 = 162511542LLU;
	uint16_t x466 = UINT16_MAX;
	uint8_t x467 = 31U;
	int16_t x468 = INT16_MIN;
	volatile uint64_t t84 = 17517588412786922LLU;

	t84 = (x465*((x466^x467)^x468));

	if (t84 != 18446738743330974016LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x477 = UINT64_MAX;
	volatile int64_t x478 = -1LL;
	int8_t x480 = -1;

	t85 = (x477*((x478^x479)^x480));

	if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x485 = 9998476LL;
	int8_t x486 = INT8_MAX;
	uint8_t x487 = 0U;
	int32_t x488 = INT32_MIN;

	t86 = (x485*((x486^x487)^x488));

	if (t86 != -21471562445113996LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x490 = INT32_MIN;
	uint64_t x491 = 4090706LLU;
	int64_t x492 = -1LL;
	uint64_t t87 = 7174LLU;

	t87 = (x489*((x490^x491)^x492));

	if (t87 != 18446673839009660928LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x493 = INT8_MAX;
	static int16_t x494 = INT16_MIN;
	int16_t x495 = -1377;
	int32_t t88 = 1;

	t88 = (x493*((x494^x495)^x496));

	if (t88 != 3978656) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x505 = 16U;
	uint8_t x507 = UINT8_MAX;
	int32_t x508 = INT32_MAX;
	volatile int64_t t89 = -38937881LL;

	t89 = (x505*((x506^x507)^x508));

	if (t89 != -34359734288LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x513 = 1971563813516LLU;
	uint8_t x514 = UINT8_MAX;
	static volatile int16_t x515 = -1;
	uint16_t x516 = 3258U;

	t90 = (x513*((x514^x515)^x516));

	if (t90 != 18440549420207484344LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x517 = INT8_MIN;
	int8_t x518 = INT8_MIN;
	int64_t t91 = 0LL;

	t91 = (x517*((x518^x519)^x520));

	if (t91 != 16384LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x525 = 2612LLU;
	int16_t x526 = 268;
	int64_t x527 = INT64_MAX;
	static volatile uint64_t t92 = 36141252410LLU;

	t92 = (x525*((x526^x527)^x528));

	if (t92 != 18446743503159799956LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x529 = UINT16_MAX;
	int8_t x530 = -40;
	uint8_t x531 = UINT8_MAX;
	int16_t x532 = -21;
	volatile int32_t t93 = -61310;

	t93 = (x529*((x530^x531)^x532));

	if (t93 != 13369140) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x533 = -202811592;
	static int16_t x534 = INT16_MIN;
	int8_t x536 = 0;
	uint32_t t94 = 13307079U;

	t94 = (x533*((x534^x535)^x536));

	if (t94 != 3325723392U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x541 = 1U;
	volatile int64_t t95 = -16069658582095LL;

	t95 = (x541*((x542^x543)^x544));

	if (t95 != -281273640LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x545 = INT64_MIN;
	static uint32_t x546 = 2U;
	uint16_t x547 = 11U;
	volatile uint64_t x548 = UINT64_MAX;

	t96 = (x545*((x546^x547)^x548));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x549 = 1;
	volatile int8_t x550 = INT8_MIN;
	int32_t x551 = 9613458;
	static int64_t x552 = INT64_MAX;

	t97 = (x549*((x550^x551)^x552));

	if (t97 != -9223372036845162259LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x557 = -433467LL;
	uint16_t x560 = 29900U;
	volatile int64_t t98 = 255046261LL;

	t98 = (x557*((x558^x559)^x560));

	if (t98 != -91293436763532LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x561 = 50690630U;
	volatile int8_t x562 = 0;
	uint8_t x563 = 46U;
	int8_t x564 = INT8_MIN;

	t99 = (x561*((x562^x563)^x564));

	if (t99 != 138335636U) { NG(); } else { ; }
	
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

