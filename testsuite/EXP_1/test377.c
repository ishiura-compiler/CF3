#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x9 = INT8_MAX;
volatile uint32_t x14 = 101061U;
uint16_t x15 = 1U;
static uint32_t x17 = 89060464U;
volatile uint32_t x27 = UINT32_MAX;
int8_t x32 = -1;
int16_t x33 = INT16_MAX;
int8_t x42 = 0;
static volatile int32_t x44 = INT32_MAX;
int32_t x45 = INT32_MIN;
static int8_t x68 = INT8_MIN;
volatile int8_t x71 = -1;
static int32_t x76 = -1;
uint16_t x81 = UINT16_MAX;
static int8_t x83 = INT8_MIN;
volatile int32_t t17 = -1;
static int8_t x94 = INT8_MIN;
uint8_t x97 = UINT8_MAX;
uint64_t x99 = 2262591336285647597LLU;
static int64_t x100 = 303890431400550429LL;
int64_t x109 = -351LL;
int32_t x110 = INT32_MIN;
uint32_t x111 = 3156U;
uint8_t x112 = UINT8_MAX;
uint64_t x126 = 6639534LLU;
static uint16_t x130 = 0U;
uint32_t x145 = 123317747U;
int8_t x147 = INT8_MIN;
volatile int32_t x148 = -2;
volatile uint16_t x157 = UINT16_MAX;
int64_t x160 = -10433107LL;
int32_t x175 = -1;
static int32_t x199 = 54304963;
uint32_t t32 = 66092157U;
int16_t x261 = 0;
static volatile int32_t t39 = -99;
int64_t x275 = 20304761321343783LL;
uint32_t x306 = 950U;
uint32_t t45 = 61U;
uint16_t x310 = 2572U;
static int32_t x321 = 3;
uint16_t x323 = UINT16_MAX;
uint32_t x326 = UINT32_MAX;
volatile int64_t x328 = INT64_MAX;
static int64_t t49 = -417230224LL;
int64_t x331 = 772367708423686757LL;
int8_t x338 = INT8_MIN;
static uint64_t x339 = UINT64_MAX;
volatile int8_t x341 = INT8_MIN;
int8_t x344 = INT8_MIN;
int8_t x352 = -2;
int32_t x361 = -7;
volatile int16_t x364 = -1;
static int64_t x369 = -1LL;
int32_t x382 = INT32_MIN;
uint32_t t60 = 3600U;
volatile int32_t t62 = -237;
uint64_t t63 = 32633099526461801LLU;
static int32_t x421 = INT32_MIN;
static volatile int8_t x429 = -1;
int8_t x433 = INT8_MAX;
int16_t x435 = INT16_MAX;
int8_t x436 = -1;
static uint8_t x446 = 26U;
static volatile int32_t x448 = INT32_MIN;
int64_t x462 = -1LL;
volatile int8_t x468 = 0;
volatile uint32_t t75 = 1361753U;
static volatile int32_t x503 = -1;
static uint16_t x510 = 5U;
int64_t x512 = -1LL;
static int8_t x520 = -14;
uint32_t x523 = 221145392U;
uint64_t t85 = 82919922LLU;
uint16_t x557 = UINT16_MAX;
int8_t x558 = INT8_MIN;
int8_t x559 = INT8_MIN;
int64_t x560 = 4LL;
int64_t x567 = INT64_MAX;
uint64_t x568 = 13LLU;
volatile int16_t x592 = -1;
uint32_t t91 = 63U;
int32_t x597 = INT32_MIN;
volatile int32_t t93 = 225988;
int32_t x610 = -1;
uint64_t x623 = UINT64_MAX;
uint32_t x635 = UINT32_MAX;
uint16_t x639 = UINT16_MAX;
volatile int64_t t98 = -2190021632288LL;
uint16_t x647 = 6383U;
volatile uint64_t t99 = 26425108LLU;


void f0(void) {
	static volatile int16_t x1 = -318;
	static uint8_t x2 = UINT8_MAX;
	int16_t x3 = 58;
	volatile int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 87793;

	t0 = (((x1*x2)*x3)^x4);

	if (t0 != 4701196) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x10 = -1;
	volatile int8_t x11 = 1;
	int16_t x12 = INT16_MIN;
	static volatile int32_t t1 = -56760;

	t1 = (((x9*x10)*x11)^x12);

	if (t1 != 32641) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 7U;
	static uint16_t x16 = UINT16_MAX;
	volatile uint32_t t2 = 1613285U;

	t2 = (((x13*x14)*x15)^x16);

	if (t2 != 668828U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MAX;
	int32_t x19 = -329717;
	int32_t x20 = -33073;
	uint32_t t3 = 32388623U;

	t3 = (((x17*x18)*x19)^x20);

	if (t3 != 3020954111U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 991324U;
	uint64_t x22 = UINT64_MAX;
	static uint8_t x23 = 7U;
	volatile uint32_t x24 = 78512U;
	volatile uint64_t t4 = 1LLU;

	t4 = (((x21*x22)*x23)^x24);

	if (t4 != 18446744073702682572LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = INT16_MAX;
	int32_t x26 = -5865;
	volatile int64_t x28 = INT64_MAX;
	int64_t t5 = -3478388402352170LL;

	t5 = (((x25*x26)*x27)^x28);

	if (t5 != 9223372036662597352LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x29 = 1336U;
	int16_t x30 = -1;
	static int16_t x31 = -43;
	volatile int32_t t6 = -115;

	t6 = (((x29*x30)*x31)^x32);

	if (t6 != -57449) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x34 = 12LLU;
	int32_t x35 = INT32_MIN;
	static uint64_t x36 = UINT64_MAX;
	volatile uint64_t t7 = 28518LLU;

	t7 = (((x33*x34)*x35)^x36);

	if (t7 != 844399160328191LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = INT64_MAX;
	static int64_t x38 = -1LL;
	uint64_t x39 = 1977324538973392878LLU;
	int16_t x40 = -5;
	uint64_t t8 = 32593158LLU;

	t8 = (((x37*x38)*x39)^x40);

	if (t8 != 16469419534736158741LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	uint32_t x43 = UINT32_MAX;
	volatile int64_t t9 = -7LL;

	t9 = (((x41*x42)*x43)^x44);

	if (t9 != 2147483647LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x46 = -11449006LL;
	int8_t x47 = INT8_MIN;
	int32_t x48 = 2;
	int64_t t10 = -1149706187717186470LL;

	t10 = (((x45*x46)*x47)^x48);

	if (t10 != -3147078805869297662LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = 9907U;
	static uint8_t x58 = 5U;
	uint64_t x59 = 114823LLU;
	int64_t x60 = -36715594065LL;
	uint64_t t11 = 596725LLU;

	t11 = (((x57*x58)*x59)^x60);

	if (t11 != 18446744031306200918LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x61 = 124723U;
	int32_t x62 = INT32_MIN;
	volatile uint8_t x63 = UINT8_MAX;
	int8_t x64 = 34;
	volatile uint32_t t12 = 7U;

	t12 = (((x61*x62)*x63)^x64);

	if (t12 != 2147483682U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = INT8_MIN;
	uint8_t x66 = 1U;
	static volatile int8_t x67 = 12;
	static volatile int32_t t13 = 27008;

	t13 = (((x65*x66)*x67)^x68);

	if (t13 != 1408) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -1LL;
	static volatile int32_t x70 = -490698872;
	int16_t x72 = 40;
	static volatile int64_t t14 = -1950437LL;

	t14 = (((x69*x70)*x71)^x72);

	if (t14 != -490698848LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x73 = 191705206315060473LL;
	static uint8_t x74 = 7U;
	int8_t x75 = -1;
	volatile int64_t t15 = -4LL;

	t15 = (((x73*x74)*x75)^x76);

	if (t15 != 1341936444205423310LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = 3767;
	static volatile int16_t x78 = INT16_MIN;
	static uint32_t x79 = 2U;
	uint64_t x80 = UINT64_MAX;
	uint64_t t16 = 113266228572LLU;

	t16 = (((x77*x78)*x79)^x80);

	if (t16 != 18446744069661458431LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x82 = UINT8_MAX;
	uint8_t x84 = 21U;

	t17 = (((x81*x82)*x83)^x84);

	if (t17 != -2139062379) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x93 = INT8_MIN;
	int8_t x95 = INT8_MAX;
	int64_t x96 = INT64_MIN;
	volatile int64_t t18 = -46768195LL;

	t18 = (((x93*x94)*x95)^x96);

	if (t18 != -9223372036852695040LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x98 = INT8_MIN;
	static uint64_t t19 = 138965282381175152LLU;

	t19 = (((x97*x98)*x99)^x100);

	if (t19 != 9509196958651635357LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t t20 = 8251891793930LL;

	t20 = (((x109*x110)*x111)^x112);

	if (t20 != 2378887895974143LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x117 = INT8_MIN;
	static int8_t x118 = -2;
	int8_t x119 = 3;
	int32_t x120 = -155;
	int32_t t21 = -3;

	t21 = (((x117*x118)*x119)^x120);

	if (t21 != -923) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x125 = UINT32_MAX;
	volatile uint16_t x127 = UINT16_MAX;
	int16_t x128 = 6;
	uint64_t t22 = 5199963LLU;

	t22 = (((x125*x126)*x127)^x128);

	if (t22 != 5713009558431420328LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x129 = -1;
	int64_t x131 = 563634274113790003LL;
	volatile uint32_t x132 = 11U;
	volatile int64_t t23 = 5LL;

	t23 = (((x129*x130)*x131)^x132);

	if (t23 != 11LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x137 = INT32_MIN;
	static uint64_t x138 = 23530811288293LLU;
	int32_t x139 = INT32_MAX;
	static int64_t x140 = 95LL;
	uint64_t t24 = 2964LLU;

	t24 = (((x137*x138)*x139)^x140);

	if (t24 != 1788761874142068831LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x146 = 470258206344025054LLU;
	uint64_t t25 = 16684LLU;

	t25 = (((x145*x146)*x147)^x148);

	if (t25 != 15328745292374793470LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x149 = 14991;
	uint8_t x150 = 12U;
	int64_t x151 = -1LL;
	uint64_t x152 = 312855860544492LLU;
	volatile uint64_t t26 = 9867111145000LLU;

	t26 = (((x149*x150)*x151)^x152);

	if (t26 != 18446431217849090720LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x158 = -52;
	int8_t x159 = -1;
	int64_t t27 = 7636742421053LL;

	t27 = (((x157*x158)*x159)^x160);

	if (t27 != -11324831LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x169 = 37U;
	static int8_t x170 = -1;
	volatile uint64_t x171 = UINT64_MAX;
	int64_t x172 = INT64_MAX;
	uint64_t t28 = 113875922LLU;

	t28 = (((x169*x170)*x171)^x172);

	if (t28 != 9223372041149743066LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x173 = INT16_MIN;
	static uint8_t x174 = UINT8_MAX;
	uint32_t x176 = UINT32_MAX;
	volatile uint32_t t29 = 144695016U;

	t29 = (((x173*x174)*x175)^x176);

	if (t29 != 4286611455U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x193 = 9;
	int16_t x194 = INT16_MIN;
	static volatile uint64_t x195 = 4LLU;
	volatile uint16_t x196 = UINT16_MAX;
	uint64_t t30 = 85436233824392LLU;

	t30 = (((x193*x194)*x195)^x196);

	if (t30 != 18446744073708437503LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x197 = 0;
	int16_t x198 = -1;
	uint32_t x200 = UINT32_MAX;
	static uint32_t t31 = UINT32_MAX;

	t31 = (((x197*x198)*x199)^x200);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x217 = -2;
	uint8_t x218 = UINT8_MAX;
	uint32_t x219 = UINT32_MAX;
	uint8_t x220 = 0U;

	t32 = (((x217*x218)*x219)^x220);

	if (t32 != 510U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x225 = INT32_MIN;
	static volatile uint32_t x226 = UINT32_MAX;
	int64_t x227 = -1LL;
	int32_t x228 = -11;
	static int64_t t33 = 1621506982327LL;

	t33 = (((x225*x226)*x227)^x228);

	if (t33 != 2147483637LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x237 = -33772649738171LL;
	static uint64_t x238 = UINT64_MAX;
	uint64_t x239 = 2650364245595058245LLU;
	volatile int8_t x240 = -28;
	uint64_t t34 = 24741LLU;

	t34 = (((x237*x238)*x239)^x240);

	if (t34 != 17553093271291335299LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x245 = 7;
	uint8_t x246 = UINT8_MAX;
	uint16_t x247 = 7687U;
	int8_t x248 = INT8_MAX;
	int32_t t35 = -154;

	t35 = (((x245*x246)*x247)^x248);

	if (t35 != 13721264) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x249 = UINT8_MAX;
	int32_t x250 = 2694743;
	static uint64_t x251 = 22980257LLU;
	static uint32_t x252 = UINT32_MAX;
	uint64_t t36 = 940189327065LLU;

	t36 = (((x249*x250)*x251)^x252);

	if (t36 != 15791103386830774LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x262 = -1LL;
	int64_t x263 = INT64_MIN;
	int32_t x264 = -29;
	static int64_t t37 = 8468570959185106LL;

	t37 = (((x261*x262)*x263)^x264);

	if (t37 != -29LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x265 = -639047600461050748LL;
	static volatile uint8_t x266 = 7U;
	static volatile uint8_t x267 = 1U;
	uint32_t x268 = 1912U;
	int64_t t38 = 270884208504047LL;

	t38 = (((x265*x266)*x267)^x268);

	if (t38 != -4473333203227356956LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x269 = 0U;
	int8_t x270 = INT8_MAX;
	static int32_t x271 = INT32_MIN;
	int16_t x272 = -420;

	t39 = (((x269*x270)*x271)^x272);

	if (t39 != -420) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x273 = INT16_MAX;
	volatile uint64_t x274 = 23861446498LLU;
	int32_t x276 = INT32_MIN;
	uint64_t t40 = 20898575648448138LLU;

	t40 = (((x273*x274)*x275)^x276);

	if (t40 != 177533479916005906LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x277 = -33;
	int64_t x278 = 19201974LL;
	uint32_t x279 = 15187840U;
	uint64_t x280 = UINT64_MAX;
	uint64_t t41 = 3LLU;

	t41 = (((x277*x278)*x279)^x280);

	if (t41 != 9624004790273279LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x285 = -1;
	int8_t x286 = INT8_MIN;
	int32_t x287 = -11;
	uint64_t x288 = 32701543970117LLU;
	static uint64_t t42 = 1607528327LLU;

	t42 = (((x285*x286)*x287)^x288);

	if (t42 != 18446711372165582789LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x293 = 242U;
	int64_t x294 = 5391LL;
	volatile uint8_t x295 = 0U;
	uint16_t x296 = 8U;
	volatile int64_t t43 = 16374336058LL;

	t43 = (((x293*x294)*x295)^x296);

	if (t43 != 8LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x301 = -1LL;
	int32_t x302 = -6;
	uint64_t x303 = 6738597417782LLU;
	uint64_t x304 = 272299LLU;
	static volatile uint64_t t44 = 0LLU;

	t44 = (((x301*x302)*x303)^x304);

	if (t44 != 40431584761071LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x305 = UINT32_MAX;
	int32_t x307 = 1;
	int16_t x308 = INT16_MIN;

	t45 = (((x305*x306)*x307)^x308);

	if (t45 != 31818U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x309 = 53LLU;
	volatile int32_t x311 = -1;
	uint32_t x312 = 43800U;
	uint64_t t46 = 929626660954LLU;

	t46 = (((x309*x310)*x311)^x312);

	if (t46 != 18446744073709371548LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x313 = INT32_MAX;
	uint64_t x314 = 19176617475777084LLU;
	int8_t x315 = -1;
	int16_t x316 = -2;
	volatile uint64_t t47 = 6LLU;

	t47 = (((x313*x314)*x315)^x316);

	if (t47 != 1733164670583102914LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x322 = -8059;
	static int64_t x324 = -1LL;
	volatile int64_t t48 = -157889327LL;

	t48 = (((x321*x322)*x323)^x324);

	if (t48 != 1584439694LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x325 = 161;
	int8_t x327 = INT8_MIN;

	t49 = (((x325*x326)*x327)^x328);

	if (t49 != 9223372036854755199LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x329 = -1;
	static uint64_t x330 = 2195416057LLU;
	int32_t x332 = INT32_MIN;
	uint64_t t50 = 6927203615LLU;

	t50 = (((x329*x330)*x331)^x332);

	if (t50 != 16496075313538815171LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x337 = -4;
	static int64_t x340 = INT64_MIN;
	uint64_t t51 = 372995055LLU;

	t51 = (((x337*x338)*x339)^x340);

	if (t51 != 9223372036854775296LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x342 = INT8_MAX;
	int8_t x343 = 25;
	int32_t t52 = 1292;

	t52 = (((x341*x342)*x343)^x344);

	if (t52 != 406272) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x349 = INT8_MIN;
	uint16_t x350 = 350U;
	volatile int8_t x351 = -1;
	int32_t t53 = 0;

	t53 = (((x349*x350)*x351)^x352);

	if (t53 != -44802) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x353 = INT32_MIN;
	uint64_t x354 = 246369369092788929LLU;
	static uint64_t x355 = UINT64_MAX;
	int64_t x356 = INT64_MAX;
	static volatile uint64_t t54 = 64287841LLU;

	t54 = (((x353*x354)*x355)^x356);

	if (t54 != 2006343323924561919LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x357 = 1U;
	int16_t x358 = -2;
	static int8_t x359 = INT8_MIN;
	volatile int32_t x360 = -1;
	volatile int32_t t55 = -45550660;

	t55 = (((x357*x358)*x359)^x360);

	if (t55 != -257) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x362 = -1LL;
	int8_t x363 = INT8_MIN;
	volatile int64_t t56 = 504LL;

	t56 = (((x361*x362)*x363)^x364);

	if (t56 != 895LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x370 = 0;
	volatile uint8_t x371 = 2U;
	int64_t x372 = INT64_MIN;
	volatile int64_t t57 = INT64_MIN;

	t57 = (((x369*x370)*x371)^x372);

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x373 = 159;
	int16_t x374 = INT16_MAX;
	int8_t x375 = INT8_MIN;
	int32_t x376 = INT32_MAX;
	int32_t t58 = 18357;

	t58 = (((x373*x374)*x375)^x376);

	if (t58 != -1480609665) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x381 = UINT32_MAX;
	static volatile uint16_t x383 = 1U;
	static volatile uint32_t x384 = 404647465U;
	volatile uint32_t t59 = 36014765U;

	t59 = (((x381*x382)*x383)^x384);

	if (t59 != 2552131113U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x397 = 1090651U;
	int32_t x398 = -1;
	uint8_t x399 = UINT8_MAX;
	uint16_t x400 = 17U;

	t60 = (((x397*x398)*x399)^x400);

	if (t60 != 4016851274U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x401 = -1;
	int8_t x402 = -1;
	volatile int16_t x403 = -1;
	int32_t x404 = 0;
	volatile int32_t t61 = 252442;

	t61 = (((x401*x402)*x403)^x404);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x405 = INT8_MAX;
	int16_t x406 = INT16_MIN;
	int8_t x407 = -1;
	int16_t x408 = -1;

	t62 = (((x405*x406)*x407)^x408);

	if (t62 != -4161537) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x413 = 17252585410706LLU;
	volatile uint32_t x414 = 122587174U;
	int16_t x415 = 1;
	int16_t x416 = -1;

	t63 = (((x413*x414)*x415)^x416);

	if (t63 != 6429878784520550995LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x417 = UINT16_MAX;
	int16_t x418 = -1;
	int8_t x419 = -1;
	int32_t x420 = INT32_MAX;
	int32_t t64 = 115;

	t64 = (((x417*x418)*x419)^x420);

	if (t64 != 2147418112) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x422 = 0U;
	int64_t x423 = INT64_MIN;
	uint16_t x424 = UINT16_MAX;
	int64_t t65 = 437LL;

	t65 = (((x421*x422)*x423)^x424);

	if (t65 != 65535LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x425 = -1;
	int32_t x426 = -1;
	uint32_t x427 = 1682548203U;
	static int8_t x428 = INT8_MIN;
	static uint32_t t66 = 74850502U;

	t66 = (((x425*x426)*x427)^x428);

	if (t66 != 2612419179U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x430 = UINT16_MAX;
	int8_t x431 = INT8_MIN;
	int8_t x432 = INT8_MIN;
	static int32_t t67 = -25288760;

	t67 = (((x429*x430)*x431)^x432);

	if (t67 != -8388608) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x434 = 42U;
	volatile uint32_t t68 = 12603880U;

	t68 = (((x433*x434)*x435)^x436);

	if (t68 != 4120188117U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x437 = UINT64_MAX;
	int32_t x438 = INT32_MAX;
	uint64_t x439 = UINT64_MAX;
	static int8_t x440 = 1;
	static volatile uint64_t t69 = 40971778903955398LLU;

	t69 = (((x437*x438)*x439)^x440);

	if (t69 != 2147483646LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x445 = -2997135;
	int16_t x447 = -1;
	int32_t t70 = 721985;

	t70 = (((x445*x446)*x447)^x448);

	if (t70 != -2069558138) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x449 = INT8_MIN;
	static uint64_t x450 = 580947045718211799LLU;
	int16_t x451 = -3;
	uint32_t x452 = 42840513U;
	volatile uint64_t t71 = 5LLU;

	t71 = (((x449*x450)*x451)^x452);

	if (t71 != 1722736671320372033LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x457 = INT8_MAX;
	uint64_t x458 = 2LLU;
	static uint16_t x459 = 0U;
	static uint64_t x460 = UINT64_MAX;
	uint64_t t72 = UINT64_MAX;

	t72 = (((x457*x458)*x459)^x460);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x461 = INT8_MAX;
	uint16_t x463 = 17907U;
	volatile uint64_t x464 = UINT64_MAX;
	uint64_t t73 = 488552484401482LLU;

	t73 = (((x461*x462)*x463)^x464);

	if (t73 != 2274188LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x465 = 131869248U;
	int16_t x466 = -6361;
	uint8_t x467 = UINT8_MAX;
	uint32_t t74 = 647874U;

	t74 = (((x465*x466)*x467)^x468);

	if (t74 != 3083178048U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x481 = 505;
	uint32_t x482 = 12U;
	int8_t x483 = -1;
	static volatile uint32_t x484 = 62993U;

	t75 = (((x481*x482)*x483)^x484);

	if (t75 != 4294909509U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x485 = -1;
	static int16_t x486 = -3;
	int8_t x487 = INT8_MAX;
	uint16_t x488 = 11U;
	volatile int32_t t76 = 777776679;

	t76 = (((x485*x486)*x487)^x488);

	if (t76 != 374) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x489 = 9069980007001363947LLU;
	volatile int32_t x490 = INT32_MIN;
	int8_t x491 = INT8_MIN;
	int8_t x492 = INT8_MAX;
	static volatile uint64_t t77 = 1864LLU;

	t77 = (((x489*x490)*x491)^x492);

	if (t77 != 5586005877875277951LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x501 = 0;
	int32_t x502 = 619934;
	int16_t x504 = -1;
	static volatile int32_t t78 = -803;

	t78 = (((x501*x502)*x503)^x504);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x505 = INT8_MAX;
	int8_t x506 = -1;
	int64_t x507 = -1LL;
	uint16_t x508 = UINT16_MAX;
	static volatile int64_t t79 = 822653500505LL;

	t79 = (((x505*x506)*x507)^x508);

	if (t79 != 65408LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x509 = -2081;
	uint64_t x511 = 1742043808240491776LLU;
	uint64_t t80 = 668596322208082913LLU;

	t80 = (((x509*x510)*x511)^x512);

	if (t80 != 11263144359537242367LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x517 = 705U;
	static volatile int16_t x518 = -1;
	volatile int8_t x519 = INT8_MAX;
	volatile uint32_t t81 = 35930U;

	t81 = (((x517*x518)*x519)^x520);

	if (t81 != 89523U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x521 = -1;
	int64_t x522 = -2026LL;
	volatile uint64_t x524 = 155794LLU;
	uint64_t t82 = 873LLU;

	t82 = (((x521*x522)*x523)^x524);

	if (t82 != 448040670578LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x529 = -1;
	int16_t x530 = INT16_MIN;
	static int32_t x531 = 0;
	int32_t x532 = INT32_MIN;
	volatile int32_t t83 = INT32_MIN;

	t83 = (((x529*x530)*x531)^x532);

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x537 = 863733109700876690LLU;
	uint8_t x538 = 7U;
	volatile int64_t x539 = INT64_MIN;
	int32_t x540 = INT32_MIN;
	static uint64_t t84 = 3990621647191469317LLU;

	t84 = (((x537*x538)*x539)^x540);

	if (t84 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x545 = -1;
	volatile uint64_t x546 = 590450LLU;
	uint16_t x547 = 2U;
	uint64_t x548 = UINT64_MAX;

	t85 = (((x545*x546)*x547)^x548);

	if (t85 != 1180899LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x549 = -968;
	static uint32_t x550 = 30723U;
	static uint16_t x551 = UINT16_MAX;
	int8_t x552 = INT8_MAX;
	uint32_t t86 = 15638U;

	t86 = (((x549*x550)*x551)^x552);

	if (t86 != 913165095U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t t87 = 249528672856905451LL;

	t87 = (((x557*x558)*x559)^x560);

	if (t87 != 1073725444LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x561 = 11839U;
	int8_t x562 = INT8_MIN;
	static int16_t x563 = -162;
	int64_t x564 = -39LL;
	volatile int64_t t88 = 906LL;

	t88 = (((x561*x562)*x563)^x564);

	if (t88 != -245493543LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x565 = 1564771;
	int8_t x566 = 0;
	uint64_t t89 = 17712107313081394LLU;

	t89 = (((x565*x566)*x567)^x568);

	if (t89 != 13LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x589 = -1;
	int16_t x590 = 60;
	int8_t x591 = INT8_MIN;
	volatile int32_t t90 = -2;

	t90 = (((x589*x590)*x591)^x592);

	if (t90 != -7681) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x593 = INT16_MIN;
	static volatile int16_t x594 = 1;
	int16_t x595 = INT16_MAX;
	uint32_t x596 = 390774U;

	t91 = (((x593*x594)*x595)^x596);

	if (t91 != 3221583478U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x598 = 423473U;
	static int16_t x599 = 47;
	static int64_t x600 = INT64_MIN;
	volatile int64_t t92 = 3571635LL;

	t92 = (((x597*x598)*x599)^x600);

	if (t92 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x601 = -1;
	int16_t x602 = 3190;
	int32_t x603 = 461855;
	int32_t x604 = INT32_MIN;

	t93 = (((x601*x602)*x603)^x604);

	if (t93 != 674166198) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x609 = 107U;
	int8_t x611 = INT8_MIN;
	int64_t x612 = INT64_MIN;
	int64_t t94 = 1919864485423LL;

	t94 = (((x609*x610)*x611)^x612);

	if (t94 != -9223372036854762112LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x621 = INT16_MAX;
	uint8_t x622 = 11U;
	int64_t x624 = -90709LL;
	uint64_t t95 = 36390496962LLU;

	t95 = (((x621*x622)*x623)^x624);

	if (t95 != 269728LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x629 = -1;
	int8_t x630 = -16;
	int8_t x631 = INT8_MAX;
	static int8_t x632 = 9;
	static int32_t t96 = 62502187;

	t96 = (((x629*x630)*x631)^x632);

	if (t96 != 2041) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x633 = -1918173;
	volatile int8_t x634 = -2;
	uint16_t x636 = UINT16_MAX;
	volatile uint32_t t97 = 4089797U;

	t97 = (((x633*x634)*x635)^x636);

	if (t97 != 4291135929U) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x637 = 1;
	volatile int8_t x638 = -1;
	int64_t x640 = INT64_MAX;

	t98 = (((x637*x638)*x639)^x640);

	if (t98 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x645 = UINT64_MAX;
	uint64_t x646 = UINT64_MAX;
	volatile int32_t x648 = INT32_MIN;

	t99 = (((x645*x646)*x647)^x648);

	if (t99 != 18446744071562074351LLU) { NG(); } else { ; }
	
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

