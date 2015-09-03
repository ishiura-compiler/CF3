#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
uint64_t t1 = 0LLU;
volatile uint32_t x18 = 61579U;
uint16_t x20 = 13U;
static uint64_t x29 = 35204339LLU;
int32_t x31 = INT32_MAX;
uint64_t t4 = 99485860141209833LLU;
volatile int32_t t5 = -22738181;
static int8_t x38 = INT8_MIN;
int64_t x55 = -8LL;
static volatile int32_t x56 = INT32_MIN;
int32_t x60 = -20731;
uint32_t t9 = 1496862U;
static int32_t x63 = -197297713;
int16_t x64 = -467;
uint32_t t10 = 157089U;
int32_t x65 = -1;
static int16_t x68 = INT16_MIN;
int64_t t12 = 212397LL;
uint32_t x76 = 937U;
uint64_t t13 = 1838712138816LLU;
int32_t x96 = 687;
int16_t x108 = 15;
uint64_t t18 = 85LLU;
uint32_t x127 = 227U;
volatile uint32_t t19 = 3319U;
volatile int64_t t20 = -1120215086384LL;
int32_t x142 = -5;
static int32_t x143 = INT32_MIN;
uint16_t x146 = 1U;
int8_t x150 = -1;
static int16_t x157 = INT16_MIN;
int16_t x163 = 1;
static int16_t x169 = 14;
static volatile uint64_t t28 = 5680339LLU;
int16_t x177 = -1;
static uint64_t x185 = 21LLU;
int32_t x188 = -1;
volatile uint64_t t31 = 1821974476LLU;
volatile uint64_t x190 = UINT64_MAX;
static int16_t x191 = -1;
static int16_t x201 = -1;
int64_t t36 = -3507508029120LL;
uint16_t x223 = 163U;
int16_t x224 = -12;
int32_t x231 = 188;
int32_t x232 = 1020;
int32_t x236 = 2025288;
static uint8_t x245 = 2U;
int16_t x247 = -1;
static volatile int8_t x256 = -1;
static volatile uint8_t x262 = 2U;
volatile uint8_t x263 = 115U;
volatile int64_t t45 = 4155518651189LL;
uint64_t x266 = 377481425317LLU;
static int16_t x274 = INT16_MAX;
int64_t x275 = INT64_MAX;
int8_t x281 = INT8_MIN;
uint32_t x285 = UINT32_MAX;
int64_t x287 = INT64_MIN;
volatile uint64_t x289 = UINT64_MAX;
volatile int64_t x296 = INT64_MIN;
int32_t x298 = INT32_MIN;
uint64_t x302 = 11131950LLU;
uint16_t x306 = UINT16_MAX;
volatile uint32_t t56 = 3U;
static int8_t x315 = INT8_MIN;
uint64_t x319 = 174854LLU;
static uint8_t x320 = UINT8_MAX;
volatile int32_t t61 = 6;
uint64_t x352 = 23191880390758846LLU;
int8_t x354 = 2;
int8_t x359 = -1;
int8_t x366 = INT8_MIN;
volatile int16_t x368 = INT16_MAX;
int8_t x369 = INT8_MAX;
int8_t x376 = INT8_MAX;
uint64_t t67 = 2912001209495260348LLU;
volatile int64_t t68 = -1660040LL;
static volatile uint16_t x387 = UINT16_MAX;
int8_t x392 = -2;
volatile int8_t x399 = -24;
uint16_t x403 = 23U;
volatile int16_t x404 = -1;
int8_t x405 = 1;
int64_t t75 = 64LL;
volatile int8_t x409 = INT8_MAX;
uint32_t x444 = 47510274U;
int64_t t82 = -104528473641077530LL;
volatile uint8_t x455 = 3U;
static uint8_t x479 = 7U;
int64_t x480 = -731529939LL;
volatile int64_t t86 = -4026438529LL;
volatile uint32_t x485 = 1828U;
volatile int16_t x498 = INT16_MAX;
int32_t x499 = INT32_MIN;
volatile int64_t x518 = 1318539495763759893LL;
volatile uint8_t x519 = UINT8_MAX;
static volatile int64_t t94 = 116724974640LL;
int64_t x522 = -1LL;
volatile int16_t x523 = INT16_MIN;
volatile int64_t t95 = 190351891LL;
uint64_t x527 = 618864LLU;
int32_t x528 = INT32_MIN;
static int16_t x530 = INT16_MIN;
int16_t x531 = INT16_MIN;
volatile int32_t t97 = -1038164597;
int16_t x537 = INT16_MAX;


void f0(void) {
	int16_t x1 = 1;
	volatile uint32_t x3 = 5587U;
	int8_t x4 = 4;
	uint32_t t0 = 4U;

	t0 = ((x1*x2)%(x3|x4));

	if (t0 != 105U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x9 = -227;
	volatile uint16_t x10 = UINT16_MAX;
	volatile uint64_t x11 = 5618460761243478841LLU;
	int64_t x12 = INT64_MAX;

	t1 = ((x9*x10)%(x11|x12));

	if (t1 != 9223372036839899364LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x13 = 4408049642LLU;
	int64_t x14 = 2471271915LL;
	int32_t x15 = INT32_MAX;
	int16_t x16 = INT16_MIN;
	uint64_t t2 = 150954843956927LLU;

	t2 = ((x13*x14)%(x15|x16));

	if (t2 != 10893489280200404430LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = -796282648;
	volatile int32_t x19 = -166;
	static volatile uint32_t t3 = 49U;

	t3 = ((x17*x18)%(x19|x20));

	if (t3 != 1352437240U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x30 = -1;
	static int32_t x32 = -381;

	t4 = ((x29*x30)%(x31|x32));

	if (t4 != 18446744073674347277LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x33 = -2137;
	volatile int16_t x34 = -1454;
	uint8_t x35 = UINT8_MAX;
	int32_t x36 = -4519;

	t5 = ((x33*x34)%(x35|x36));

	if (t5 != 3509) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = 10033298465219872LLU;
	uint16_t x39 = 9U;
	uint32_t x40 = 10385U;
	uint64_t t6 = 2419981971LLU;

	t6 = ((x37*x38)%(x39|x40));

	if (t6 != 9451LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = UINT32_MAX;
	static uint16_t x42 = 22U;
	static int16_t x43 = INT16_MIN;
	int16_t x44 = -1;
	volatile uint32_t t7 = 138302357U;

	t7 = ((x41*x42)%(x43|x44));

	if (t7 != 4294967274U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x53 = UINT64_MAX;
	int8_t x54 = INT8_MIN;
	volatile uint64_t t8 = 1280256738741309878LLU;

	t8 = ((x53*x54)%(x55|x56));

	if (t8 != 128LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x57 = 3866633U;
	static uint32_t x58 = 29936U;
	int8_t x59 = -3;

	t9 = ((x57*x58)%(x59|x60));

	if (t9 != 4082375792U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x61 = 8U;
	static uint32_t x62 = 430U;

	t10 = ((x61*x62)%(x63|x64));

	if (t10 != 3440U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MAX;
	volatile int32_t t11 = 4785;

	t11 = ((x65*x66)%(x67|x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x69 = UINT8_MAX;
	volatile int64_t x70 = 15170434589755447LL;
	int8_t x71 = INT8_MAX;
	int64_t x72 = INT64_MIN;

	t12 = ((x69*x70)%(x71|x72));

	if (t12 != 3868460820387638985LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = 219LL;
	uint64_t x74 = 65140231LLU;
	static int16_t x75 = 573;

	t13 = ((x73*x74)%(x75|x76));

	if (t13 != 603LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x93 = -3;
	static int64_t x94 = 21560LL;
	int32_t x95 = 2;
	volatile int64_t t14 = 122235656345928452LL;

	t14 = ((x93*x94)%(x95|x96));

	if (t14 != -102LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x97 = INT16_MIN;
	uint16_t x98 = UINT16_MAX;
	static uint64_t x99 = 495LLU;
	int32_t x100 = 659;
	static volatile uint64_t t15 = 4386396231088LLU;

	t15 = ((x97*x98)%(x99|x100));

	if (t15 != 46LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x105 = 1U;
	int32_t x106 = INT32_MIN;
	int64_t x107 = -1LL;
	static volatile int64_t t16 = 32655335968LL;

	t16 = ((x105*x106)%(x107|x108));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x113 = -1;
	uint32_t x114 = UINT32_MAX;
	uint64_t x115 = 35835LLU;
	uint16_t x116 = UINT16_MAX;
	uint64_t t17 = 12973717307LLU;

	t17 = ((x113*x114)%(x115|x116));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x121 = -181698211948LL;
	static int16_t x122 = INT16_MAX;
	uint64_t x123 = UINT64_MAX;
	int64_t x124 = -6057345617LL;

	t18 = ((x121*x122)%(x123|x124));

	if (t18 != 18440790368398651500LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x125 = INT8_MIN;
	volatile int32_t x126 = -17;
	uint8_t x128 = UINT8_MAX;

	t19 = ((x125*x126)%(x127|x128));

	if (t19 != 136U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x129 = 27U;
	uint8_t x130 = 0U;
	volatile int64_t x131 = INT64_MIN;
	int64_t x132 = INT64_MAX;

	t20 = ((x129*x130)%(x131|x132));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x141 = -3;
	int64_t x144 = INT64_MIN;
	static int64_t t21 = 63366665622LL;

	t21 = ((x141*x142)%(x143|x144));

	if (t21 != 15LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x145 = -1;
	int32_t x147 = INT32_MAX;
	volatile uint64_t x148 = UINT64_MAX;
	uint64_t t22 = 156698973693LLU;

	t22 = ((x145*x146)%(x147|x148));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x149 = -1;
	volatile uint16_t x151 = 337U;
	static volatile uint64_t x152 = 1515LLU;
	uint64_t t23 = 34753536363604LLU;

	t23 = ((x149*x150)%(x151|x152));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x158 = INT16_MAX;
	int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MIN;
	int32_t t24 = -15142;

	t24 = ((x157*x158)%(x159|x160));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x161 = -1;
	volatile int16_t x162 = INT16_MIN;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t25 = -6078370;

	t25 = ((x161*x162)%(x163|x164));

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x165 = 721;
	static uint64_t x166 = UINT64_MAX;
	int64_t x167 = INT64_MIN;
	int16_t x168 = 1;
	volatile uint64_t t26 = 744LLU;

	t26 = ((x165*x166)%(x167|x168));

	if (t26 != 9223372036854775086LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x170 = INT16_MAX;
	int8_t x171 = 1;
	int32_t x172 = INT32_MIN;
	volatile int32_t t27 = 13879;

	t27 = ((x169*x170)%(x171|x172));

	if (t27 != 458738) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x173 = -1;
	int8_t x174 = INT8_MIN;
	static int8_t x175 = INT8_MIN;
	uint64_t x176 = 330LLU;

	t28 = ((x173*x174)%(x175|x176));

	if (t28 != 128LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x178 = UINT16_MAX;
	static uint8_t x179 = 38U;
	volatile int32_t x180 = INT32_MAX;
	static volatile int32_t t29 = 77553;

	t29 = ((x177*x178)%(x179|x180));

	if (t29 != -65535) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x181 = UINT8_MAX;
	int16_t x182 = 556;
	static int16_t x183 = INT16_MIN;
	uint64_t x184 = 11LLU;
	volatile uint64_t t30 = 468554LLU;

	t30 = ((x181*x182)%(x183|x184));

	if (t30 != 141780LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x186 = -1;
	static int64_t x187 = -108624460010520473LL;

	t31 = ((x185*x186)%(x187|x188));

	if (t31 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x189 = INT8_MIN;
	int8_t x192 = INT8_MIN;
	volatile uint64_t t32 = 30409LLU;

	t32 = ((x189*x190)%(x191|x192));

	if (t32 != 128LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x193 = -1973593418930LL;
	static int16_t x194 = INT16_MAX;
	uint16_t x195 = UINT16_MAX;
	int32_t x196 = -12549;
	volatile int64_t t33 = -56484558299001LL;

	t33 = ((x193*x194)%(x195|x196));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x202 = -131;
	int64_t x203 = INT64_MIN;
	volatile int64_t x204 = -7370605932663LL;
	static int64_t t34 = -203LL;

	t34 = ((x201*x202)%(x203|x204));

	if (t34 != 131LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x209 = UINT64_MAX;
	static int32_t x210 = INT32_MAX;
	volatile int32_t x211 = INT32_MIN;
	volatile int16_t x212 = INT16_MIN;
	uint64_t t35 = 159469517837LLU;

	t35 = ((x209*x210)%(x211|x212));

	if (t35 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x213 = 78U;
	static int64_t x214 = 13402904LL;
	int16_t x215 = INT16_MIN;
	int32_t x216 = -33393376;

	t36 = ((x213*x214)%(x215|x216));

	if (t36 != 1104LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x221 = INT8_MIN;
	uint64_t x222 = 445974123LLU;
	static volatile uint64_t t37 = 354762490952LLU;

	t37 = ((x221*x222)%(x223|x224));

	if (t37 != 18446744016624863872LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x225 = 4363;
	int8_t x226 = 1;
	uint32_t x227 = 123600985U;
	int32_t x228 = -1;
	volatile uint32_t t38 = 580945U;

	t38 = ((x225*x226)%(x227|x228));

	if (t38 != 4363U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x229 = INT8_MIN;
	uint8_t x230 = 25U;
	int32_t t39 = 1;

	t39 = ((x229*x230)%(x231|x232));

	if (t39 != -140) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x233 = 151320734800095LLU;
	volatile uint32_t x234 = 595U;
	int8_t x235 = INT8_MAX;
	volatile uint64_t t40 = 10665386344167LLU;

	t40 = ((x233*x234)%(x235|x236));

	if (t40 != 469984LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x237 = 945;
	volatile uint16_t x238 = 4779U;
	volatile int16_t x239 = INT16_MIN;
	volatile int8_t x240 = INT8_MAX;
	int32_t t41 = -2474289;

	t41 = ((x237*x238)%(x239|x240));

	if (t41 != 11697) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x246 = INT8_MIN;
	uint32_t x248 = 6618U;
	volatile uint32_t t42 = 111860U;

	t42 = ((x245*x246)%(x247|x248));

	if (t42 != 4294967040U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x253 = 61298U;
	uint64_t x254 = UINT64_MAX;
	int8_t x255 = -2;
	uint64_t t43 = 1561181547253328634LLU;

	t43 = ((x253*x254)%(x255|x256));

	if (t43 != 18446744073709490318LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x257 = INT32_MIN;
	uint32_t x258 = 133670U;
	int8_t x259 = -1;
	uint64_t x260 = 56479142430828622LLU;
	volatile uint64_t t44 = 645955236133108LLU;

	t44 = ((x257*x258)%(x259|x260));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x261 = -546099385604LL;
	uint32_t x264 = 84448672U;

	t45 = ((x261*x262)%(x263|x264));

	if (t45 != -23022793LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x265 = INT8_MAX;
	static volatile uint16_t x267 = 5U;
	uint8_t x268 = 0U;
	uint64_t t46 = 45540478092LLU;

	t46 = ((x265*x266)%(x267|x268));

	if (t46 != 4LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x269 = -1;
	int8_t x270 = INT8_MAX;
	static volatile int8_t x271 = -2;
	int64_t x272 = INT64_MAX;
	volatile int64_t t47 = 3689304039031LL;

	t47 = ((x269*x270)%(x271|x272));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x273 = UINT64_MAX;
	int16_t x276 = INT16_MAX;
	static uint64_t t48 = 0LLU;

	t48 = ((x273*x274)%(x275|x276));

	if (t48 != 9223372036854743042LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x277 = INT8_MAX;
	int16_t x278 = INT16_MIN;
	int32_t x279 = -54;
	int32_t x280 = 65079;
	int32_t t49 = -1;

	t49 = ((x277*x278)%(x279|x280));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x282 = INT8_MAX;
	int64_t x283 = INT64_MIN;
	int32_t x284 = INT32_MIN;
	volatile int64_t t50 = -883816LL;

	t50 = ((x281*x282)%(x283|x284));

	if (t50 != -16256LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x286 = INT16_MAX;
	uint32_t x288 = 1457U;
	static volatile int64_t t51 = 1972077223617142543LL;

	t51 = ((x285*x286)%(x287|x288));

	if (t51 != 4294934529LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x290 = 3U;
	static int8_t x291 = INT8_MIN;
	volatile int16_t x292 = -356;
	uint64_t t52 = 21119241LLU;

	t52 = ((x289*x290)%(x291|x292));

	if (t52 != 97LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x293 = INT16_MIN;
	volatile uint16_t x294 = 509U;
	static uint16_t x295 = 4U;
	volatile int64_t t53 = -29582605711481138LL;

	t53 = ((x293*x294)%(x295|x296));

	if (t53 != -16678912LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x297 = UINT32_MAX;
	int8_t x299 = -1;
	int16_t x300 = 5016;
	uint32_t t54 = 660U;

	t54 = ((x297*x298)%(x299|x300));

	if (t54 != 2147483648U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x301 = -1;
	int64_t x303 = INT64_MAX;
	int16_t x304 = 513;
	uint64_t t55 = 3266683654LLU;

	t55 = ((x301*x302)%(x303|x304));

	if (t55 != 9223372036843643859LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x305 = -28;
	uint32_t x307 = 4555U;
	volatile int16_t x308 = -1;

	t56 = ((x305*x306)%(x307|x308));

	if (t56 != 4293132316U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x313 = INT32_MIN;
	static uint8_t x314 = 1U;
	uint16_t x316 = 623U;
	volatile int32_t t57 = -44;

	t57 = ((x313*x314)%(x315|x316));

	if (t57 != -9) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x317 = 9723;
	uint16_t x318 = 0U;
	static volatile uint64_t t58 = 207490LLU;

	t58 = ((x317*x318)%(x319|x320));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = INT8_MIN;
	static int8_t x322 = -39;
	int16_t x323 = -2215;
	volatile int64_t x324 = 315484315467LL;
	int64_t t59 = 100281LL;

	t59 = ((x321*x322)%(x323|x324));

	if (t59 != 42LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x325 = INT8_MIN;
	int8_t x326 = -1;
	int16_t x327 = INT16_MIN;
	static volatile int8_t x328 = INT8_MIN;
	int32_t t60 = 0;

	t60 = ((x325*x326)%(x327|x328));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x337 = INT16_MIN;
	volatile uint16_t x338 = UINT16_MAX;
	int32_t x339 = INT32_MIN;
	int32_t x340 = 475701146;

	t61 = ((x337*x338)%(x339|x340));

	if (t61 != -475668378) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x349 = 145;
	static uint16_t x350 = 9956U;
	static int64_t x351 = 57837249234716398LL;
	uint64_t t62 = 127LLU;

	t62 = ((x349*x350)%(x351|x352));

	if (t62 != 1443620LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x353 = UINT16_MAX;
	static int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MAX;
	int32_t t63 = 298770;

	t63 = ((x353*x354)%(x355|x356));

	if (t63 != 131070) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x357 = INT8_MAX;
	int16_t x358 = INT16_MIN;
	uint16_t x360 = 29U;
	volatile int32_t t64 = 388722360;

	t64 = ((x357*x358)%(x359|x360));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x365 = 5963;
	volatile int32_t x367 = -155450;
	int32_t t65 = -161148415;

	t65 = ((x365*x366)%(x367|x368));

	if (t65 != -107899) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x370 = 55U;
	uint32_t x371 = UINT32_MAX;
	uint8_t x372 = 2U;
	volatile uint32_t t66 = 1524U;

	t66 = ((x369*x370)%(x371|x372));

	if (t66 != 6985U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x373 = -1;
	uint32_t x374 = 393128958U;
	uint64_t x375 = UINT64_MAX;

	t67 = ((x373*x374)%(x375|x376));

	if (t67 != 3901838338LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x377 = 1U;
	int64_t x378 = -2551LL;
	static int16_t x379 = -1;
	uint16_t x380 = 19786U;

	t68 = ((x377*x378)%(x379|x380));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x381 = INT8_MAX;
	int16_t x382 = INT16_MAX;
	int64_t x383 = -1LL;
	volatile int64_t x384 = INT64_MIN;
	int64_t t69 = -15046LL;

	t69 = ((x381*x382)%(x383|x384));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x385 = -1;
	static int64_t x386 = -3052573218969LL;
	uint64_t x388 = 6148425311LLU;
	uint64_t t70 = 335LLU;

	t70 = ((x385*x386)%(x387|x388));

	if (t70 != 2938821257LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x389 = UINT64_MAX;
	volatile int8_t x390 = 0;
	int64_t x391 = INT64_MIN;
	uint64_t t71 = 133958940LLU;

	t71 = ((x389*x390)%(x391|x392));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x393 = 3U;
	int8_t x394 = INT8_MIN;
	int32_t x395 = 19;
	int64_t x396 = INT64_MIN;
	static volatile int64_t t72 = -702295793LL;

	t72 = ((x393*x394)%(x395|x396));

	if (t72 != -384LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x397 = 0U;
	int64_t x398 = -6LL;
	uint8_t x400 = 42U;
	volatile int64_t t73 = 1455607263758575LL;

	t73 = ((x397*x398)%(x399|x400));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x401 = 15LLU;
	volatile uint64_t x402 = UINT64_MAX;
	uint64_t t74 = 82659477449605903LLU;

	t74 = ((x401*x402)%(x403|x404));

	if (t74 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x406 = 448U;
	int64_t x407 = INT64_MIN;
	int64_t x408 = -35779975489466471LL;

	t75 = ((x405*x406)%(x407|x408));

	if (t75 != 448LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x410 = -1;
	static uint64_t x411 = 979072811LLU;
	static uint32_t x412 = UINT32_MAX;
	static uint64_t t76 = 121LLU;

	t76 = ((x409*x410)%(x411|x412));

	if (t76 != 4294967169LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x417 = INT32_MAX;
	int16_t x418 = -1;
	volatile uint16_t x419 = UINT16_MAX;
	int16_t x420 = INT16_MIN;
	volatile int32_t t77 = -2401203;

	t77 = ((x417*x418)%(x419|x420));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x421 = 66U;
	uint32_t x422 = UINT32_MAX;
	int64_t x423 = INT64_MIN;
	uint32_t x424 = 14035476U;
	static volatile int64_t t78 = -70706498134459LL;

	t78 = ((x421*x422)%(x423|x424));

	if (t78 != 4294967230LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x433 = 2695294235742LLU;
	int16_t x434 = 0;
	int16_t x435 = INT16_MIN;
	uint64_t x436 = 676560920922649LLU;
	uint64_t t79 = 175247882264960LLU;

	t79 = ((x433*x434)%(x435|x436));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x437 = 247U;
	int32_t x438 = -1;
	int32_t x439 = 1;
	static int16_t x440 = INT16_MIN;
	static int32_t t80 = 178062890;

	t80 = ((x437*x438)%(x439|x440));

	if (t80 != -247) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x441 = -158688LL;
	static int8_t x442 = INT8_MIN;
	uint16_t x443 = 1848U;
	int64_t t81 = -5710814025534874LL;

	t81 = ((x441*x442)%(x443|x444));

	if (t81 != 20312064LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x445 = -2599;
	int64_t x446 = -318801725182LL;
	uint32_t x447 = UINT32_MAX;
	volatile int32_t x448 = 11551102;

	t82 = ((x445*x446)%(x447|x448));

	if (t82 != 2068033093LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x453 = -1;
	int8_t x454 = 3;
	int8_t x456 = -1;
	int32_t t83 = 11860931;

	t83 = ((x453*x454)%(x455|x456));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x461 = -1;
	uint64_t x462 = UINT64_MAX;
	static int32_t x463 = INT32_MIN;
	volatile uint8_t x464 = UINT8_MAX;
	volatile uint64_t t84 = 1LLU;

	t84 = ((x461*x462)%(x463|x464));

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x473 = UINT64_MAX;
	volatile int16_t x474 = 27;
	int8_t x475 = INT8_MIN;
	int16_t x476 = INT16_MAX;
	uint64_t t85 = 1070854988LLU;

	t85 = ((x473*x474)%(x475|x476));

	if (t85 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x477 = -1;
	uint32_t x478 = UINT32_MAX;

	t86 = ((x477*x478)%(x479|x480));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x481 = INT8_MIN;
	int8_t x482 = INT8_MIN;
	static uint8_t x483 = 13U;
	int64_t x484 = INT64_MIN;
	static volatile int64_t t87 = 997724LL;

	t87 = ((x481*x482)%(x483|x484));

	if (t87 != 16384LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x486 = INT8_MIN;
	static uint32_t x487 = 1U;
	static int32_t x488 = -1;
	volatile uint32_t t88 = 4846U;

	t88 = ((x485*x486)%(x487|x488));

	if (t88 != 4294733312U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x489 = UINT64_MAX;
	int8_t x490 = INT8_MAX;
	uint16_t x491 = UINT16_MAX;
	int64_t x492 = -1LL;
	static uint64_t t89 = 1186609934294871113LLU;

	t89 = ((x489*x490)%(x491|x492));

	if (t89 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x493 = 237LLU;
	uint8_t x494 = UINT8_MAX;
	int16_t x495 = -1009;
	int8_t x496 = INT8_MIN;
	volatile uint64_t t90 = 17504366184709132LLU;

	t90 = ((x493*x494)%(x495|x496));

	if (t90 != 60435LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x497 = 12307LLU;
	int32_t x500 = 1021;
	volatile uint64_t t91 = 15339812986690LLU;

	t91 = ((x497*x498)%(x499|x500));

	if (t91 != 403263469LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x509 = UINT8_MAX;
	static int16_t x510 = INT16_MIN;
	uint16_t x511 = 11490U;
	int16_t x512 = 212;
	volatile int32_t t92 = -3553;

	t92 = ((x509*x510)%(x511|x512));

	if (t92 != -11090) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x513 = INT16_MIN;
	static volatile int8_t x514 = INT8_MIN;
	static int8_t x515 = -3;
	uint64_t x516 = UINT64_MAX;
	volatile uint64_t t93 = 6224282LLU;

	t93 = ((x513*x514)%(x515|x516));

	if (t93 != 4194304LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x517 = -1;
	volatile int64_t x520 = INT64_MIN;

	t94 = ((x517*x518)%(x519|x520));

	if (t94 != -1318539495763759893LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x521 = 7;
	static int32_t x524 = INT32_MIN;

	t95 = ((x521*x522)%(x523|x524));

	if (t95 != -7LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x525 = -1;
	uint64_t x526 = 887836187747947065LLU;
	volatile uint64_t t96 = 8621070350612454065LLU;

	t96 = ((x525*x526)%(x527|x528));

	if (t96 != 17558907885961604551LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x529 = 9U;
	static volatile uint16_t x532 = 55U;

	t97 = ((x529*x530)%(x531|x532));

	if (t97 != -495) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x533 = -1;
	int64_t x534 = INT64_MAX;
	int8_t x535 = INT8_MIN;
	int32_t x536 = INT32_MAX;
	static volatile int64_t t98 = -4407587533LL;

	t98 = ((x533*x534)%(x535|x536));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x538 = 88899566LLU;
	volatile uint16_t x539 = UINT16_MAX;
	int8_t x540 = -23;
	uint64_t t99 = 430448135842623453LLU;

	t99 = ((x537*x538)%(x539|x540));

	if (t99 != 2912972079122LLU) { NG(); } else { ; }
	
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

