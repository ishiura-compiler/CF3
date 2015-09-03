#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
uint16_t x4 = 2U;
static int16_t x7 = INT16_MIN;
int16_t x12 = -1;
int8_t x24 = 1;
int64_t x26 = 187LL;
volatile uint64_t x32 = 43987664669LLU;
int64_t x38 = -7352310751LL;
int16_t x40 = -1;
uint64_t x55 = 1966707896464LLU;
int64_t x57 = INT64_MIN;
uint8_t x62 = 27U;
volatile uint8_t x64 = 0U;
int64_t t11 = -129378015957759494LL;
uint64_t x67 = 6914LLU;
volatile int8_t x68 = INT8_MIN;
static volatile uint64_t t12 = 38522784305869790LLU;
uint8_t x69 = 1U;
int32_t x71 = -886548187;
uint16_t x73 = 222U;
static uint64_t t14 = 101812653151565599LLU;
int16_t x78 = -1;
static int16_t x79 = -1;
int32_t t18 = 1839327;
int32_t x125 = -27;
uint64_t x137 = 309LLU;
uint16_t x142 = UINT16_MAX;
int16_t x151 = 2222;
volatile int64_t x154 = 14680036001972LL;
int8_t x156 = INT8_MIN;
int64_t x158 = INT64_MIN;
int8_t x162 = INT8_MIN;
volatile int16_t x171 = -137;
volatile int8_t x175 = INT8_MIN;
volatile int32_t x192 = -1;
volatile int64_t t34 = -278LL;
uint64_t x193 = 320611972LLU;
static volatile uint32_t t35 = 538U;
int32_t t38 = -2968;
volatile int64_t x216 = -1LL;
volatile uint64_t x217 = 780581234996LLU;
volatile uint64_t x218 = 155366437276484231LLU;
int64_t x219 = 553140154287363LL;
static int8_t x220 = -1;
int64_t t40 = 16788206094268LL;
static int8_t x224 = -1;
int64_t x236 = -41LL;
static int16_t x238 = INT16_MIN;
uint32_t x239 = 0U;
int8_t x240 = 12;
volatile int64_t t45 = -138LL;
int32_t x249 = INT32_MAX;
int32_t x254 = -9662966;
int8_t x261 = INT8_MIN;
int32_t t50 = -26083490;
static int16_t x273 = -1;
uint32_t x279 = 664079U;
volatile uint32_t t52 = 2038U;
static int32_t x287 = -24689;
uint64_t x297 = 13219674324814384LLU;
int8_t x300 = INT8_MIN;
uint8_t x303 = 40U;
int32_t t57 = 178087;
static volatile int8_t x305 = -1;
int64_t x306 = -968224741083LL;
static volatile int8_t x308 = INT8_MAX;
uint16_t x310 = 177U;
int64_t x312 = INT64_MAX;
volatile int8_t x319 = INT8_MAX;
static volatile uint16_t x321 = 7319U;
volatile uint64_t t62 = 236959814LLU;
int32_t x329 = INT32_MAX;
int64_t t63 = -35280140067399815LL;
static uint32_t x333 = 225519U;
uint8_t x338 = 24U;
volatile int64_t x345 = 17085LL;
uint8_t x347 = 93U;
int16_t x351 = INT16_MIN;
uint32_t x363 = 0U;
int16_t x371 = INT16_MIN;
uint16_t x381 = 0U;
static volatile int8_t x384 = INT8_MIN;
volatile int64_t x386 = INT64_MAX;
int8_t x387 = INT8_MAX;
static uint8_t x399 = 0U;
int32_t x416 = -1;
uint16_t x422 = UINT16_MAX;
static volatile int64_t t76 = 2LL;
static volatile uint64_t x427 = 972405007LLU;
volatile uint64_t t77 = 15805782LLU;
uint64_t x440 = 91770681009LLU;
volatile uint32_t x447 = 47963U;
int16_t x448 = -1;
uint16_t x457 = 1U;
int64_t x459 = 41902LL;
volatile uint8_t x478 = 69U;
volatile int32_t t86 = -372369636;
int8_t x483 = 50;
volatile int32_t t87 = 26226418;
uint32_t t89 = 10U;
volatile uint32_t t90 = 24936843U;
int8_t x505 = INT8_MIN;
static int8_t x516 = INT8_MIN;
int64_t x525 = 573435508355644LL;
uint64_t x527 = 14249567LLU;
volatile uint64_t t97 = 4176034615841005LLU;
int64_t x530 = INT64_MIN;
volatile uint64_t x531 = 232734699763250463LLU;
int16_t x533 = INT16_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x3 = 0;
	int32_t t0 = -469478;

	t0 = ((x1==x2)+(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 735241738U;
	int32_t x6 = -1;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = 10616390;

	t1 = ((x5==x6)+(x7*x8));

	if (t1 != -4161536) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 30220805LLU;
	static int32_t x10 = 12;
	int32_t x11 = -1;
	int32_t t2 = 224;

	t2 = ((x9==x10)+(x11*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	uint16_t x18 = UINT16_MAX;
	volatile int32_t x19 = INT32_MIN;
	static volatile uint32_t x20 = UINT32_MAX;
	static uint32_t t3 = 4U;

	t3 = ((x17==x18)+(x19*x20));

	if (t3 != 2147483649U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = -1;
	volatile int8_t x23 = INT8_MIN;
	static int32_t t4 = -106751067;

	t4 = ((x21==x22)+(x23*x24));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = 19;
	int16_t x27 = INT16_MAX;
	int16_t x28 = 16;
	static volatile int32_t t5 = 98;

	t5 = ((x25==x26)+(x27*x28));

	if (t5 != 524272) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 8702824328922LL;
	volatile int8_t x30 = -1;
	volatile uint64_t x31 = 109LLU;
	static volatile uint64_t t6 = 789LLU;

	t6 = ((x29==x30)+(x31*x32));

	if (t6 != 4794655448921LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 13077LLU;
	volatile int64_t x39 = -1LL;
	int64_t t7 = 10650207052LL;

	t7 = ((x37==x38)+(x39*x40));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = UINT64_MAX;
	int16_t x42 = INT16_MAX;
	int32_t x43 = -1;
	static int32_t x44 = INT32_MAX;
	int32_t t8 = -1464;

	t8 = ((x41==x42)+(x43*x44));

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x53 = 446U;
	uint16_t x54 = UINT16_MAX;
	int16_t x56 = -38;
	uint64_t t9 = 571997300LLU;

	t9 = ((x53==x54)+(x55*x56));

	if (t9 != 18446669338809485984LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x58 = INT8_MAX;
	int8_t x59 = -1;
	int64_t x60 = 270147498165134LL;
	volatile int64_t t10 = -13741142618452804LL;

	t10 = ((x57==x58)+(x59*x60));

	if (t10 != -270147498165134LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x61 = INT64_MIN;
	int64_t x63 = -1LL;

	t11 = ((x61==x62)+(x63*x64));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x65 = INT32_MIN;
	int64_t x66 = INT64_MIN;

	t12 = ((x65==x66)+(x67*x68));

	if (t12 != 18446744073708666624LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x70 = 24U;
	int16_t x72 = -1;
	static volatile int32_t t13 = -36;

	t13 = ((x69==x70)+(x71*x72));

	if (t13 != 886548187) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x74 = -1;
	uint64_t x75 = UINT64_MAX;
	static int64_t x76 = 362226018446382LL;

	t14 = ((x73==x74)+(x75*x76));

	if (t14 != 18446381847691105234LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x77 = INT16_MAX;
	int64_t x80 = INT64_MAX;
	volatile int64_t t15 = 21536284482139LL;

	t15 = ((x77==x78)+(x79*x80));

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = -231919;
	int16_t x90 = -1;
	static int16_t x91 = INT16_MIN;
	static uint8_t x92 = UINT8_MAX;
	int32_t t16 = 201862577;

	t16 = ((x89==x90)+(x91*x92));

	if (t16 != -8355840) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x93 = INT32_MIN;
	static int8_t x94 = INT8_MIN;
	volatile int16_t x95 = -7158;
	int8_t x96 = 8;
	int32_t t17 = 45972;

	t17 = ((x93==x94)+(x95*x96));

	if (t17 != -57264) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x113 = 1U;
	volatile int16_t x114 = 109;
	static int8_t x115 = INT8_MIN;
	uint16_t x116 = UINT16_MAX;

	t18 = ((x113==x114)+(x115*x116));

	if (t18 != -8388480) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x117 = -1;
	uint8_t x118 = 22U;
	uint64_t x119 = 1717012791762LLU;
	int8_t x120 = INT8_MIN;
	uint64_t t19 = 3005LLU;

	t19 = ((x117==x118)+(x119*x120));

	if (t19 != 18446524296072206080LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x126 = -425841120832LL;
	static int32_t x127 = 54311;
	static uint16_t x128 = 24139U;
	int32_t t20 = -128639331;

	t20 = ((x125==x126)+(x127*x128));

	if (t20 != 1311013229) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x129 = INT16_MIN;
	static uint8_t x130 = 2U;
	volatile uint64_t x131 = 1LLU;
	int8_t x132 = -7;
	uint64_t t21 = 1931781LLU;

	t21 = ((x129==x130)+(x131*x132));

	if (t21 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x133 = UINT32_MAX;
	int64_t x134 = INT64_MAX;
	uint8_t x135 = UINT8_MAX;
	static volatile int16_t x136 = -1;
	static volatile int32_t t22 = 52311;

	t22 = ((x133==x134)+(x135*x136));

	if (t22 != -255) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x138 = 51U;
	static volatile uint8_t x139 = 0U;
	int64_t x140 = INT64_MAX;
	static int64_t t23 = -6779LL;

	t23 = ((x137==x138)+(x139*x140));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x141 = 3;
	static uint8_t x143 = 1U;
	uint8_t x144 = 2U;
	int32_t t24 = -9866273;

	t24 = ((x141==x142)+(x143*x144));

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x149 = 5;
	static int8_t x150 = INT8_MIN;
	static volatile int64_t x152 = 1912563569195LL;
	int64_t t25 = -55193378108276946LL;

	t25 = ((x149==x150)+(x151*x152));

	if (t25 != 4249716250751290LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x153 = INT8_MIN;
	volatile uint8_t x155 = 34U;
	int32_t t26 = 4899;

	t26 = ((x153==x154)+(x155*x156));

	if (t26 != -4352) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x157 = INT64_MIN;
	int8_t x159 = -1;
	int64_t x160 = INT64_MAX;
	volatile int64_t t27 = 74051LL;

	t27 = ((x157==x158)+(x159*x160));

	if (t27 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x161 = 3U;
	static uint16_t x163 = 8U;
	int32_t x164 = 2;
	volatile int32_t t28 = 4799737;

	t28 = ((x161==x162)+(x163*x164));

	if (t28 != 16) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x165 = -1;
	static int64_t x166 = INT64_MIN;
	uint8_t x167 = 3U;
	int16_t x168 = -1;
	int32_t t29 = 2420843;

	t29 = ((x165==x166)+(x167*x168));

	if (t29 != -3) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x169 = INT16_MIN;
	int16_t x170 = 845;
	uint16_t x172 = 9677U;
	volatile int32_t t30 = -1;

	t30 = ((x169==x170)+(x171*x172));

	if (t30 != -1325749) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x173 = INT32_MIN;
	uint16_t x174 = 506U;
	int8_t x176 = 0;
	int32_t t31 = 41190;

	t31 = ((x173==x174)+(x175*x176));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x181 = -1LL;
	volatile uint8_t x182 = UINT8_MAX;
	volatile int64_t x183 = 1200LL;
	volatile int16_t x184 = INT16_MAX;
	int64_t t32 = 6956LL;

	t32 = ((x181==x182)+(x183*x184));

	if (t32 != 39320400LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x185 = INT64_MAX;
	uint16_t x186 = 111U;
	int32_t x187 = 3;
	static volatile int16_t x188 = 2;
	volatile int32_t t33 = -5171;

	t33 = ((x185==x186)+(x187*x188));

	if (t33 != 6) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x189 = 1LLU;
	int32_t x190 = INT32_MIN;
	int64_t x191 = INT64_MAX;

	t34 = ((x189==x190)+(x191*x192));

	if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x194 = 15897;
	static uint32_t x195 = 3U;
	volatile uint8_t x196 = UINT8_MAX;

	t35 = ((x193==x194)+(x195*x196));

	if (t35 != 765U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x197 = UINT32_MAX;
	volatile int16_t x198 = -36;
	int32_t x199 = INT32_MIN;
	volatile int64_t x200 = -1LL;
	static int64_t t36 = -270LL;

	t36 = ((x197==x198)+(x199*x200));

	if (t36 != 2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x201 = -1;
	volatile uint64_t x202 = 17460360LLU;
	int8_t x203 = INT8_MIN;
	int16_t x204 = INT16_MAX;
	volatile int32_t t37 = 143;

	t37 = ((x201==x202)+(x203*x204));

	if (t37 != -4194176) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x209 = INT8_MAX;
	volatile int8_t x210 = -6;
	int8_t x211 = -1;
	static volatile int16_t x212 = -2;

	t38 = ((x209==x210)+(x211*x212));

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x213 = INT64_MIN;
	static uint16_t x214 = UINT16_MAX;
	volatile int64_t x215 = -1LL;
	volatile int64_t t39 = -3863609LL;

	t39 = ((x213==x214)+(x215*x216));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {


	t40 = ((x217==x218)+(x219*x220));

	if (t40 != -553140154287363LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x221 = INT16_MIN;
	int8_t x222 = -1;
	int16_t x223 = INT16_MAX;
	int32_t t41 = 1431;

	t41 = ((x221==x222)+(x223*x224));

	if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x229 = INT64_MIN;
	int16_t x230 = -1062;
	int32_t x231 = INT32_MIN;
	volatile uint32_t x232 = UINT32_MAX;
	volatile uint32_t t42 = 78451547U;

	t42 = ((x229==x230)+(x231*x232));

	if (t42 != 2147483648U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x233 = 4;
	static volatile uint8_t x234 = 0U;
	int32_t x235 = INT32_MAX;
	volatile int64_t t43 = 3921LL;

	t43 = ((x233==x234)+(x235*x236));

	if (t43 != -88046829527LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x237 = 151034LL;
	uint32_t t44 = 15824U;

	t44 = ((x237==x238)+(x239*x240));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x241 = INT64_MIN;
	volatile int8_t x242 = INT8_MIN;
	int64_t x243 = -39LL;
	static int32_t x244 = 239;

	t45 = ((x241==x242)+(x243*x244));

	if (t45 != -9321LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x250 = INT32_MIN;
	int16_t x251 = 502;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t46 = 2720988;

	t46 = ((x249==x250)+(x251*x252));

	if (t46 != 32898570) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x253 = INT16_MIN;
	volatile int16_t x255 = -1;
	static int32_t x256 = INT32_MAX;
	int32_t t47 = 10296;

	t47 = ((x253==x254)+(x255*x256));

	if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x262 = INT32_MIN;
	uint16_t x263 = 34U;
	static int16_t x264 = INT16_MAX;
	int32_t t48 = 14954;

	t48 = ((x261==x262)+(x263*x264));

	if (t48 != 1114078) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x265 = 0;
	uint32_t x266 = UINT32_MAX;
	int64_t x267 = 59630675LL;
	int8_t x268 = 1;
	volatile int64_t t49 = 4747512324LL;

	t49 = ((x265==x266)+(x267*x268));

	if (t49 != 59630675LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x269 = INT16_MIN;
	int64_t x270 = -145882720326729157LL;
	int16_t x271 = -1;
	int16_t x272 = -1;

	t50 = ((x269==x270)+(x271*x272));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x274 = 1982573400568LL;
	int32_t x275 = INT32_MIN;
	static uint64_t x276 = UINT64_MAX;
	volatile uint64_t t51 = 86041043LLU;

	t51 = ((x273==x274)+(x275*x276));

	if (t51 != 2147483648LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x277 = -127455201;
	static uint64_t x278 = 932321504LLU;
	volatile int32_t x280 = -1001931067;

	t52 = ((x277==x278)+(x279*x280));

	if (t52 != 2067552139U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x285 = 96U;
	uint16_t x286 = 13990U;
	int8_t x288 = INT8_MIN;
	int32_t t53 = 257;

	t53 = ((x285==x286)+(x287*x288));

	if (t53 != 3160192) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x289 = INT64_MIN;
	volatile int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MIN;
	int8_t x292 = 0;
	int32_t t54 = -24;

	t54 = ((x289==x290)+(x291*x292));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x293 = INT8_MIN;
	int16_t x294 = INT16_MIN;
	volatile int8_t x295 = -10;
	int16_t x296 = -102;
	volatile int32_t t55 = 1;

	t55 = ((x293==x294)+(x295*x296));

	if (t55 != 1020) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x298 = UINT64_MAX;
	uint16_t x299 = 23445U;
	static volatile int32_t t56 = 64702561;

	t56 = ((x297==x298)+(x299*x300));

	if (t56 != -3000960) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x301 = 1;
	int8_t x302 = INT8_MIN;
	uint8_t x304 = 3U;

	t57 = ((x301==x302)+(x303*x304));

	if (t57 != 120) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x307 = -1;
	int32_t t58 = 39;

	t58 = ((x305==x306)+(x307*x308));

	if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x309 = 1546U;
	uint64_t x311 = 79438LLU;
	volatile uint64_t t59 = 2LLU;

	t59 = ((x309==x310)+(x311*x312));

	if (t59 != 18446744073709472178LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x317 = INT16_MIN;
	static volatile uint32_t x318 = 336U;
	uint32_t x320 = 3024131U;
	uint32_t t60 = 49633059U;

	t60 = ((x317==x318)+(x319*x320));

	if (t60 != 384064637U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x322 = 0;
	static int16_t x323 = INT16_MAX;
	uint8_t x324 = UINT8_MAX;
	int32_t t61 = -20;

	t61 = ((x321==x322)+(x323*x324));

	if (t61 != 8355585) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x325 = 218472;
	volatile int8_t x326 = INT8_MAX;
	uint16_t x327 = UINT16_MAX;
	uint64_t x328 = UINT64_MAX;

	t62 = ((x325==x326)+(x327*x328));

	if (t62 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x330 = -1LL;
	static uint8_t x331 = 1U;
	volatile int64_t x332 = -1LL;

	t63 = ((x329==x330)+(x331*x332));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x334 = 10674502U;
	uint64_t x335 = 3822172527638759LLU;
	int32_t x336 = -1;
	uint64_t t64 = 13762068926LLU;

	t64 = ((x333==x334)+(x335*x336));

	if (t64 != 18442921901181912857LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x337 = INT8_MIN;
	volatile int16_t x339 = INT16_MIN;
	int64_t x340 = -1LL;
	int64_t t65 = -244069LL;

	t65 = ((x337==x338)+(x339*x340));

	if (t65 != 32768LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x346 = INT8_MIN;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t66 = 9815516687740294LLU;

	t66 = ((x345==x346)+(x347*x348));

	if (t66 != 18446744073709551523LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x349 = 461006407U;
	static volatile int8_t x350 = -1;
	int16_t x352 = INT16_MIN;
	int32_t t67 = -1;

	t67 = ((x349==x350)+(x351*x352));

	if (t67 != 1073741824) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x353 = INT64_MIN;
	static uint64_t x354 = UINT64_MAX;
	int64_t x355 = -1LL;
	uint16_t x356 = 9631U;
	int64_t t68 = -235LL;

	t68 = ((x353==x354)+(x355*x356));

	if (t68 != -9631LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x361 = 16U;
	volatile uint16_t x362 = UINT16_MAX;
	static volatile int8_t x364 = INT8_MIN;
	uint32_t t69 = 11303U;

	t69 = ((x361==x362)+(x363*x364));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x369 = 2649U;
	int32_t x370 = 5;
	int8_t x372 = INT8_MIN;
	int32_t t70 = 654;

	t70 = ((x369==x370)+(x371*x372));

	if (t70 != 4194304) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x382 = INT32_MAX;
	int16_t x383 = 1;
	volatile int32_t t71 = -4465318;

	t71 = ((x381==x382)+(x383*x384));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x385 = UINT8_MAX;
	uint32_t x388 = 119U;
	static volatile uint32_t t72 = 283U;

	t72 = ((x385==x386)+(x387*x388));

	if (t72 != 15113U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x397 = 28U;
	volatile int64_t x398 = INT64_MAX;
	static int16_t x400 = INT16_MIN;
	volatile int32_t t73 = 230;

	t73 = ((x397==x398)+(x399*x400));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x409 = 2LLU;
	int8_t x410 = INT8_MIN;
	uint32_t x411 = 7U;
	uint64_t x412 = 18LLU;
	volatile uint64_t t74 = 40376002795LLU;

	t74 = ((x409==x410)+(x411*x412));

	if (t74 != 126LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x413 = INT8_MIN;
	volatile int16_t x414 = INT16_MIN;
	static uint32_t x415 = 1903652329U;
	volatile uint32_t t75 = 3494U;

	t75 = ((x413==x414)+(x415*x416));

	if (t75 != 2391314967U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x421 = INT64_MIN;
	int64_t x423 = -35390518288914LL;
	volatile int64_t x424 = -1LL;

	t76 = ((x421==x422)+(x423*x424));

	if (t76 != 35390518288914LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x425 = -8LL;
	int16_t x426 = 847;
	static volatile uint32_t x428 = 465712U;

	t77 = ((x425==x426)+(x427*x428));

	if (t77 != 452860680619984LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x429 = -39;
	static int16_t x430 = -1;
	static volatile int64_t x431 = -1LL;
	volatile int16_t x432 = INT16_MIN;
	volatile int64_t t78 = 373LL;

	t78 = ((x429==x430)+(x431*x432));

	if (t78 != 32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x433 = 9U;
	static volatile int32_t x434 = -1;
	int64_t x435 = -9389991081618LL;
	int16_t x436 = INT16_MIN;
	static volatile int64_t t79 = -28788971603LL;

	t79 = ((x433==x434)+(x435*x436));

	if (t79 != 307691227762458624LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x437 = 1;
	volatile int32_t x438 = INT32_MAX;
	int32_t x439 = INT32_MAX;
	volatile uint64_t t80 = 16956184228LLU;

	t80 = ((x437==x438)+(x439*x440));

	if (t80 != 12608596003785443663LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x445 = -1;
	int16_t x446 = INT16_MIN;
	uint32_t t81 = 117280U;

	t81 = ((x445==x446)+(x447*x448));

	if (t81 != 4294919333U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x449 = INT64_MAX;
	int32_t x450 = -1;
	int16_t x451 = INT16_MIN;
	volatile int32_t x452 = 60386;
	int32_t t82 = -34652;

	t82 = ((x449==x450)+(x451*x452));

	if (t82 != -1978728448) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x458 = INT8_MAX;
	int8_t x460 = INT8_MAX;
	volatile int64_t t83 = -15142839LL;

	t83 = ((x457==x458)+(x459*x460));

	if (t83 != 5321554LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x465 = -873311122;
	int32_t x466 = INT32_MAX;
	uint16_t x467 = UINT16_MAX;
	uint8_t x468 = 1U;
	static int32_t t84 = -109995732;

	t84 = ((x465==x466)+(x467*x468));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x473 = 12;
	static uint16_t x474 = 36U;
	uint32_t x475 = 1131U;
	static uint8_t x476 = UINT8_MAX;
	volatile uint32_t t85 = 65094U;

	t85 = ((x473==x474)+(x475*x476));

	if (t85 != 288405U) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x477 = INT8_MIN;
	int8_t x479 = INT8_MIN;
	int16_t x480 = 5;

	t86 = ((x477==x478)+(x479*x480));

	if (t86 != -640) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x481 = 0U;
	static uint8_t x482 = 1U;
	int8_t x484 = INT8_MAX;

	t87 = ((x481==x482)+(x483*x484));

	if (t87 != 6350) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x489 = INT64_MIN;
	volatile uint8_t x490 = 71U;
	uint8_t x491 = 0U;
	volatile int8_t x492 = 7;
	volatile int32_t t88 = 1;

	t88 = ((x489==x490)+(x491*x492));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x493 = UINT32_MAX;
	int32_t x494 = INT32_MAX;
	volatile uint32_t x495 = UINT32_MAX;
	int32_t x496 = 495909178;

	t89 = ((x493==x494)+(x495*x496));

	if (t89 != 3799058118U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x497 = 235;
	int64_t x498 = INT64_MIN;
	uint32_t x499 = UINT32_MAX;
	int8_t x500 = INT8_MIN;

	t90 = ((x497==x498)+(x499*x500));

	if (t90 != 128U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x501 = -15;
	int16_t x502 = INT16_MIN;
	uint32_t x503 = 11U;
	volatile int16_t x504 = -2;
	static volatile uint32_t t91 = 10867186U;

	t91 = ((x501==x502)+(x503*x504));

	if (t91 != 4294967274U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x506 = INT16_MIN;
	uint64_t x507 = 64LLU;
	static int8_t x508 = INT8_MIN;
	uint64_t t92 = 2LLU;

	t92 = ((x505==x506)+(x507*x508));

	if (t92 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x509 = 1U;
	volatile int8_t x510 = 6;
	uint8_t x511 = 1U;
	int32_t x512 = -1;
	volatile int32_t t93 = 265407896;

	t93 = ((x509==x510)+(x511*x512));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x513 = INT32_MIN;
	static int64_t x514 = INT64_MIN;
	uint64_t x515 = 55571291815677LLU;
	uint64_t t94 = 1758796357098LLU;

	t94 = ((x513==x514)+(x515*x516));

	if (t94 != 18439630948357144960LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x517 = 2746LLU;
	uint16_t x518 = 988U;
	int8_t x519 = INT8_MIN;
	volatile int32_t x520 = -1;
	static int32_t t95 = -370497088;

	t95 = ((x517==x518)+(x519*x520));

	if (t95 != 128) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x521 = INT16_MIN;
	uint32_t x522 = 4527U;
	uint64_t x523 = UINT64_MAX;
	volatile uint64_t x524 = 276134630909LLU;
	uint64_t t96 = 300738121407076814LLU;

	t96 = ((x521==x522)+(x523*x524));

	if (t96 != 18446743797574920707LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x526 = INT32_MIN;
	int8_t x528 = -1;

	t97 = ((x525==x526)+(x527*x528));

	if (t97 != 18446744073695302049LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x529 = -1114631833051502LL;
	uint32_t x532 = 295024U;
	volatile uint64_t t98 = 3995071020LLU;

	t98 = ((x529==x530)+(x531*x532));

	if (t98 != 3540620606253481360LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x534 = -1;
	int16_t x535 = -2;
	uint16_t x536 = UINT16_MAX;
	volatile int32_t t99 = 354;

	t99 = ((x533==x534)+(x535*x536));

	if (t99 != -131070) { NG(); } else { ; }
	
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

