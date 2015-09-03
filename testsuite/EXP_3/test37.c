#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x16 = INT32_MIN;
static int64_t t2 = 1765396436721497LL;
uint16_t x18 = 8757U;
int64_t x19 = 1274970677396240LL;
uint32_t x29 = UINT32_MAX;
uint64_t x33 = 5328083LLU;
static volatile int16_t x61 = INT16_MIN;
static volatile uint64_t t9 = 588807354LLU;
int8_t x67 = INT8_MAX;
uint32_t x68 = 2U;
volatile int8_t x70 = -1;
int16_t x82 = -3;
uint32_t x90 = 19720484U;
int64_t x91 = INT64_MIN;
uint64_t x97 = 84107074LLU;
int16_t x100 = INT16_MAX;
static volatile int8_t x117 = 5;
uint16_t x118 = 5230U;
uint32_t x132 = 712U;
uint32_t x159 = 505U;
int8_t x164 = INT8_MAX;
int64_t t26 = -2973070110LL;
uint32_t x173 = 101922U;
int64_t x175 = INT64_MIN;
int8_t x181 = INT8_MAX;
uint64_t x184 = 17889722337LLU;
uint64_t t28 = 299030089072687LLU;
static volatile uint64_t x192 = 428683257766834499LLU;
volatile uint16_t x194 = 20187U;
uint32_t x207 = 30224775U;
volatile uint64_t t38 = 28384156069LLU;
int16_t x246 = 2;
volatile int64_t t41 = 40803LL;
uint8_t x253 = UINT8_MAX;
uint64_t t42 = 24117910141LLU;
int32_t x258 = -1;
int64_t x259 = INT64_MAX;
uint64_t x263 = 145128359812657200LLU;
static uint8_t x289 = 0U;
static int8_t x293 = 1;
volatile uint8_t x306 = 1U;
volatile int32_t x317 = 246;
static uint32_t x320 = UINT32_MAX;
uint32_t x322 = 191537U;
static volatile uint64_t t54 = 1110951LLU;
int64_t t55 = -64237828LL;
int16_t x343 = 473;
int16_t x349 = INT16_MIN;
int32_t x359 = INT32_MAX;
static uint64_t x367 = 12295185998252547LLU;
int8_t x372 = -16;
volatile uint64_t t61 = 50661892LLU;
static uint64_t t63 = 294805976117496LLU;
int64_t x394 = 1LL;
uint8_t x395 = UINT8_MAX;
int16_t x408 = 5;
int32_t x413 = -1;
int32_t x414 = INT32_MAX;
static int8_t x416 = 29;
int8_t x418 = INT8_MAX;
static int32_t x420 = -1;
uint16_t x421 = UINT16_MAX;
volatile int8_t x426 = INT8_MIN;
volatile int64_t t70 = 2477763258092LL;
uint8_t x433 = 46U;
volatile uint8_t x448 = UINT8_MAX;
volatile int64_t x452 = -17LL;
volatile int64_t t73 = 63LL;
uint32_t x456 = 71U;
uint32_t x468 = 1886488U;
static int32_t t79 = -16038623;
static uint8_t x489 = 110U;
int8_t x491 = INT8_MIN;
static uint64_t x496 = 28205576827807412LLU;
uint64_t x499 = 61853099LLU;
uint16_t x517 = 25920U;
static volatile int16_t x518 = INT16_MIN;
volatile uint16_t x520 = 41U;
volatile uint16_t x533 = UINT16_MAX;
uint64_t t87 = 29818796LLU;
int16_t x551 = INT16_MIN;
static volatile uint8_t x552 = 19U;
volatile int8_t x557 = INT8_MIN;
int64_t x559 = -1LL;
static int32_t x561 = -3;
int64_t t92 = -87670213131LL;
int32_t x572 = INT32_MIN;
static uint32_t x576 = 6U;
uint8_t x579 = 1U;
uint32_t t97 = 2U;
int8_t x588 = INT8_MIN;
int8_t x592 = INT8_MIN;
uint64_t t99 = 64LLU;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	uint64_t x2 = 121192784382LLU;
	uint16_t x3 = 16U;
	int64_t x4 = -1LL;
	static uint64_t t0 = 41250236628919546LLU;

	t0 = ((x1*x2)&(x3+x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x9 = 5646LLU;
	uint64_t x10 = 25903868981LLU;
	int64_t x11 = -1LL;
	static volatile int8_t x12 = 3;
	static volatile uint64_t t1 = 28512445686593LLU;

	t1 = ((x9*x10)&(x11+x12));

	if (t1 != 2LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = -1;
	volatile int64_t x14 = -3209261108229LL;
	uint8_t x15 = 43U;

	t2 = ((x13*x14)&(x15+x16));

	if (t2 != 3208340570113LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 3217524U;
	uint16_t x20 = 202U;
	volatile int64_t t3 = 1827677520676880580LL;

	t3 = ((x17*x18)&(x19+x20));

	if (t3 != 239157248LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x30 = 106593060958LLU;
	volatile int16_t x31 = 0;
	static volatile uint32_t x32 = UINT32_MAX;
	uint64_t t4 = 142817521912524530LLU;

	t4 = ((x29*x30)&(x31+x32));

	if (t4 != 781121442LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x34 = -1;
	static int32_t x35 = -1;
	static int64_t x36 = -43LL;
	volatile uint64_t t5 = 205337LLU;

	t5 = ((x33*x34)&(x35+x36));

	if (t5 != 18446744073704223492LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = 153081687231403LL;
	uint8_t x38 = 1U;
	int32_t x39 = INT32_MAX;
	volatile int32_t x40 = -9901;
	int64_t t6 = -45000605032LL;

	t6 = ((x37*x38)&(x39+x40));

	if (t6 != 462866690LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = -1;
	uint8_t x46 = 17U;
	int64_t x47 = INT64_MIN;
	uint16_t x48 = UINT16_MAX;
	static int64_t t7 = 18629742988LL;

	t7 = ((x45*x46)&(x47+x48));

	if (t7 != -9223372036854710289LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = 13U;
	static uint16_t x50 = 3635U;
	int64_t x51 = INT64_MIN;
	uint32_t x52 = 148150797U;
	int64_t t8 = -8542423465LL;

	t8 = ((x49*x50)&(x51+x52));

	if (t8 != 38917LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x62 = 39114484890LLU;
	int8_t x63 = INT8_MIN;
	static volatile uint32_t x64 = 7338U;

	t9 = ((x61*x62)&(x63+x64));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x65 = 736486752U;
	int32_t x66 = INT32_MIN;
	uint32_t t10 = 5857U;

	t10 = ((x65*x66)&(x67+x68));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x69 = -1;
	static int16_t x71 = INT16_MIN;
	uint64_t x72 = UINT64_MAX;
	volatile uint64_t t11 = 49LLU;

	t11 = ((x69*x70)&(x71+x72));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x81 = -1;
	uint64_t x83 = 401562LLU;
	static volatile int64_t x84 = -581630354490454429LL;
	uint64_t t12 = 139493596923LLU;

	t12 = ((x81*x82)&(x83+x84));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x89 = INT16_MIN;
	int8_t x92 = 0;
	int64_t t13 = 277137729102371LL;

	t13 = ((x89*x90)&(x91+x92));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x93 = UINT64_MAX;
	uint64_t x94 = 54282122520951688LLU;
	volatile int64_t x95 = INT64_MIN;
	static int64_t x96 = 4911682213LL;
	uint64_t t14 = 464903489922305994LLU;

	t14 = ((x93*x94)&(x95+x96));

	if (t14 != 9223372037395841056LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x98 = 1U;
	uint64_t x99 = 204038268655205521LLU;
	uint64_t t15 = 102505502026062LLU;

	t15 = ((x97*x98)&(x99+x100));

	if (t15 != 16997376LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x105 = 10U;
	int8_t x106 = 6;
	int64_t x107 = -67054173681LL;
	int64_t x108 = -5416LL;
	static volatile int64_t t16 = 2179681024935220LL;

	t16 = ((x105*x106)&(x107+x108));

	if (t16 != 36LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x113 = -1LL;
	static int64_t x114 = -1LL;
	static int32_t x115 = INT32_MIN;
	volatile uint16_t x116 = UINT16_MAX;
	volatile int64_t t17 = -8988451017661961LL;

	t17 = ((x113*x114)&(x115+x116));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x119 = INT64_MAX;
	int64_t x120 = INT64_MIN;
	static volatile int64_t t18 = -27LL;

	t18 = ((x117*x118)&(x119+x120));

	if (t18 != 26150LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x121 = 74633033LLU;
	int64_t x122 = 8690817973LL;
	uint32_t x123 = UINT32_MAX;
	volatile int8_t x124 = INT8_MAX;
	volatile uint64_t t19 = 1249269169LLU;

	t19 = ((x121*x122)&(x123+x124));

	if (t19 != 28LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x125 = -1;
	static int64_t x126 = -275LL;
	volatile uint32_t x127 = 2U;
	volatile uint32_t x128 = 158U;
	volatile int64_t t20 = -761035945469LL;

	t20 = ((x125*x126)&(x127+x128));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x129 = -1;
	int8_t x130 = INT8_MAX;
	static int32_t x131 = INT32_MIN;
	uint32_t t21 = 48757280U;

	t21 = ((x129*x130)&(x131+x132));

	if (t21 != 2147484288U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x141 = 138460269U;
	static int8_t x142 = 1;
	volatile int8_t x143 = INT8_MAX;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t22 = 5030895357028LLU;

	t22 = ((x141*x142)&(x143+x144));

	if (t22 != 108LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x145 = 0;
	int16_t x146 = 13743;
	int8_t x147 = INT8_MIN;
	static volatile int8_t x148 = INT8_MAX;
	volatile int32_t t23 = -83;

	t23 = ((x145*x146)&(x147+x148));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x157 = 32U;
	uint32_t x158 = UINT32_MAX;
	int32_t x160 = INT32_MAX;
	volatile uint32_t t24 = 752U;

	t24 = ((x157*x158)&(x159+x160));

	if (t24 != 2147484128U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x161 = 357340U;
	int32_t x162 = INT32_MIN;
	uint32_t x163 = UINT32_MAX;
	uint32_t t25 = 2061U;

	t25 = ((x161*x162)&(x163+x164));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x165 = 7U;
	volatile int32_t x166 = -1;
	int32_t x167 = -8;
	int64_t x168 = 1624767460976413LL;

	t26 = ((x165*x166)&(x167+x168));

	if (t26 != 1624767460976401LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x174 = UINT8_MAX;
	uint32_t x176 = UINT32_MAX;
	int64_t t27 = -19304459114LL;

	t27 = ((x173*x174)&(x175+x176));

	if (t27 != 25990110LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x182 = 4434039013587954453LLU;
	uint16_t x183 = 11U;

	t28 = ((x181*x182)&(x183+x184));

	if (t28 != 17352056680LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x185 = 1;
	static volatile int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MIN;
	int8_t x188 = -1;
	int64_t t29 = INT64_MIN;

	t29 = ((x185*x186)&(x187+x188));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x189 = 52U;
	static int32_t x190 = -1;
	volatile int64_t x191 = -64373LL;
	static uint64_t t30 = 16LLU;

	t30 = ((x189*x190)&(x191+x192));

	if (t30 != 428683257766770124LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x193 = 53;
	int16_t x195 = INT16_MAX;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t31 = -498851;

	t31 = ((x193*x194)&(x195+x196));

	if (t31 != 21334) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x197 = -1;
	int8_t x198 = INT8_MIN;
	uint8_t x199 = UINT8_MAX;
	int32_t x200 = 6;
	int32_t t32 = -9609689;

	t32 = ((x197*x198)&(x199+x200));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x201 = 5U;
	volatile int32_t x202 = -204797017;
	int8_t x203 = -14;
	volatile int8_t x204 = -1;
	int32_t t33 = 9;

	t33 = ((x201*x202)&(x203+x204));

	if (t33 != -1023985087) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x205 = -1LL;
	uint64_t x206 = UINT64_MAX;
	int64_t x208 = INT64_MIN;
	volatile uint64_t t34 = 558292843583LLU;

	t34 = ((x205*x206)&(x207+x208));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x213 = UINT64_MAX;
	static uint64_t x214 = 290257LLU;
	static uint32_t x215 = UINT32_MAX;
	uint32_t x216 = UINT32_MAX;
	uint64_t t35 = 107457250273108158LLU;

	t35 = ((x213*x214)&(x215+x216));

	if (t35 != 4294677038LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x221 = -1;
	int32_t x222 = INT32_MAX;
	int8_t x223 = INT8_MAX;
	uint64_t x224 = 397191094LLU;
	volatile uint64_t t36 = 60322754LLU;

	t36 = ((x221*x222)&(x223+x224));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x229 = -174542575LL;
	int16_t x230 = 2171;
	int64_t x231 = 11LL;
	uint64_t x232 = 41035721LLU;
	volatile uint64_t t37 = 14LLU;

	t37 = ((x229*x230)&(x231+x232));

	if (t37 != 6292224LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x237 = 72080080100136LLU;
	static int64_t x238 = INT64_MIN;
	volatile int32_t x239 = INT32_MIN;
	static volatile int32_t x240 = INT32_MAX;

	t38 = ((x237*x238)&(x239+x240));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x241 = 16087U;
	int16_t x242 = -1;
	int64_t x243 = -638628208873331LL;
	int8_t x244 = INT8_MIN;
	volatile int64_t t39 = -29055164LL;

	t39 = ((x241*x242)&(x243+x244));

	if (t39 != -638628208885751LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x245 = INT8_MIN;
	int8_t x247 = -4;
	int32_t x248 = 32884;
	volatile int32_t t40 = 209577;

	t40 = ((x245*x246)&(x247+x248));

	if (t40 != 32768) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x249 = INT8_MAX;
	volatile uint32_t x250 = UINT32_MAX;
	int32_t x251 = -503331;
	static int64_t x252 = INT64_MAX;

	t41 = ((x249*x250)&(x251+x252));

	if (t41 != 4294463872LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x254 = -16608377LL;
	uint64_t x255 = 0LLU;
	uint16_t x256 = UINT16_MAX;

	t42 = ((x253*x254)&(x255+x256));

	if (t42 != 62329LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x257 = -1;
	static int32_t x260 = -1;
	static volatile int64_t t43 = 287047145101578LL;

	t43 = ((x257*x258)&(x259+x260));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x261 = INT16_MIN;
	int64_t x262 = -1LL;
	int32_t x264 = 11830;
	volatile uint64_t t44 = 14961LLU;

	t44 = ((x261*x262)&(x263+x264));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x277 = 0U;
	static volatile int16_t x278 = 0;
	static uint64_t x279 = 9526LLU;
	volatile int32_t x280 = -71877900;
	uint64_t t45 = 8575801LLU;

	t45 = ((x277*x278)&(x279+x280));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x281 = 764U;
	int8_t x282 = -1;
	uint64_t x283 = 2160166356656LLU;
	uint64_t x284 = 215746LLU;
	uint64_t t46 = 108954591LLU;

	t46 = ((x281*x282)&(x283+x284));

	if (t46 != 2160166572288LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x285 = 2;
	static uint32_t x286 = UINT32_MAX;
	uint16_t x287 = UINT16_MAX;
	int16_t x288 = INT16_MIN;
	volatile uint32_t t47 = 10U;

	t47 = ((x285*x286)&(x287+x288));

	if (t47 != 32766U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x290 = -38;
	int16_t x291 = INT16_MAX;
	int8_t x292 = INT8_MIN;
	volatile int32_t t48 = -127258;

	t48 = ((x289*x290)&(x291+x292));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x294 = 2429;
	static int8_t x295 = -1;
	static int64_t x296 = INT64_MAX;
	int64_t t49 = 1187043304673LL;

	t49 = ((x293*x294)&(x295+x296));

	if (t49 != 2428LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x297 = UINT16_MAX;
	int8_t x298 = INT8_MIN;
	int32_t x299 = -16542410;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t50 = 1;

	t50 = ((x297*x298)&(x299+x300));

	if (t50 != -16777216) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x305 = INT32_MAX;
	static int8_t x307 = 0;
	int8_t x308 = INT8_MAX;
	volatile int32_t t51 = -11056597;

	t51 = ((x305*x306)&(x307+x308));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x318 = 2;
	int64_t x319 = INT64_MIN;
	volatile int64_t t52 = 6286935LL;

	t52 = ((x317*x318)&(x319+x320));

	if (t52 != 492LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x321 = 2012601993366737LLU;
	static uint64_t x323 = 23800860LLU;
	int16_t x324 = INT16_MIN;
	volatile uint64_t t53 = 113469146000002388LLU;

	t53 = ((x321*x322)&(x323+x324));

	if (t53 != 16818176LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x325 = -1;
	uint64_t x326 = 2758675916550224108LLU;
	static uint16_t x327 = UINT16_MAX;
	uint8_t x328 = 2U;

	t54 = ((x325*x326)&(x327+x328));

	if (t54 != 65536LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x333 = 4U;
	static volatile int8_t x334 = INT8_MAX;
	int64_t x335 = INT64_MAX;
	int64_t x336 = -1LL;

	t55 = ((x333*x334)&(x335+x336));

	if (t55 != 508LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x341 = -1;
	uint8_t x342 = 0U;
	volatile int16_t x344 = INT16_MAX;
	int32_t t56 = 149;

	t56 = ((x341*x342)&(x343+x344));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x350 = UINT64_MAX;
	volatile int16_t x351 = INT16_MAX;
	int16_t x352 = INT16_MIN;
	volatile uint64_t t57 = 900LLU;

	t57 = ((x349*x350)&(x351+x352));

	if (t57 != 32768LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x357 = INT32_MAX;
	int8_t x358 = -1;
	volatile int64_t x360 = 751LL;
	int64_t t58 = -259651LL;

	t58 = ((x357*x358)&(x359+x360));

	if (t58 != 2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x365 = 0U;
	uint8_t x366 = 0U;
	int32_t x368 = -1;
	volatile uint64_t t59 = 3151273358698616LLU;

	t59 = ((x365*x366)&(x367+x368));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x369 = -1;
	uint16_t x370 = UINT16_MAX;
	int64_t x371 = -1LL;
	int64_t t60 = -3949920287793LL;

	t60 = ((x369*x370)&(x371+x372));

	if (t60 != -65535LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x373 = -69224903656LL;
	int16_t x374 = -7;
	uint64_t x375 = 467881830000LLU;
	int8_t x376 = INT8_MIN;

	t61 = ((x373*x374)&(x375+x376));

	if (t61 != 415586328912LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x385 = -1;
	volatile uint16_t x386 = 31U;
	volatile int64_t x387 = INT64_MIN;
	uint8_t x388 = 2U;
	volatile int64_t t62 = INT64_MIN;

	t62 = ((x385*x386)&(x387+x388));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x389 = -1;
	int8_t x390 = INT8_MIN;
	static int64_t x391 = -148871648323593223LL;
	uint64_t x392 = UINT64_MAX;

	t63 = ((x389*x390)&(x391+x392));

	if (t63 != 128LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x393 = 312415855;
	int8_t x396 = INT8_MIN;
	volatile int64_t t64 = 341694202249168066LL;

	t64 = ((x393*x394)&(x395+x396));

	if (t64 != 111LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x405 = INT8_MAX;
	volatile uint64_t x406 = 45708935LLU;
	int16_t x407 = 843;
	uint64_t t65 = 444392LLU;

	t65 = ((x405*x406)&(x407+x408));

	if (t65 != 80LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x409 = UINT16_MAX;
	int32_t x410 = -1;
	int32_t x411 = -234184836;
	int8_t x412 = 0;
	int32_t t66 = -329643478;

	t66 = ((x409*x410)&(x411+x412));

	if (t66 != -234225664) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x415 = INT8_MAX;
	int32_t t67 = -1016180;

	t67 = ((x413*x414)&(x415+x416));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x417 = -1;
	int16_t x419 = INT16_MIN;
	volatile int32_t t68 = -390;

	t68 = ((x417*x418)&(x419+x420));

	if (t68 != -32895) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x422 = UINT32_MAX;
	int16_t x423 = 536;
	uint16_t x424 = UINT16_MAX;
	volatile uint32_t t69 = 559U;

	t69 = ((x421*x422)&(x423+x424));

	if (t69 != 65537U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x425 = 661050U;
	uint16_t x427 = UINT16_MAX;
	int64_t x428 = -1LL;

	t70 = ((x425*x426)&(x427+x428));

	if (t70 != 58112LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x434 = 1;
	int64_t x435 = INT64_MIN;
	uint8_t x436 = 6U;
	int64_t t71 = -116461LL;

	t71 = ((x433*x434)&(x435+x436));

	if (t71 != 6LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x445 = INT8_MIN;
	uint16_t x446 = 1408U;
	int16_t x447 = INT16_MIN;
	volatile int32_t t72 = -2;

	t72 = ((x445*x446)&(x447+x448));

	if (t72 != -196608) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x449 = -1;
	int16_t x450 = -1624;
	static int16_t x451 = -203;

	t73 = ((x449*x450)&(x451+x452));

	if (t73 != 1536LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x453 = 402;
	int32_t x454 = 1;
	static int64_t x455 = 83007800629489877LL;
	int64_t t74 = -11057957LL;

	t74 = ((x453*x454)&(x455+x456));

	if (t74 != 272LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x461 = 1;
	int16_t x462 = INT16_MIN;
	int16_t x463 = -27;
	int64_t x464 = -23839081102017350LL;
	volatile int64_t t75 = -12806931LL;

	t75 = ((x461*x462)&(x463+x464));

	if (t75 != -23839081102049280LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x465 = 826LL;
	volatile int8_t x466 = INT8_MIN;
	volatile int16_t x467 = -393;
	int64_t t76 = -3263009LL;

	t76 = ((x465*x466)&(x467+x468));

	if (t76 != 1852160LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x469 = INT8_MIN;
	int16_t x470 = INT16_MIN;
	int32_t x471 = INT32_MIN;
	volatile int64_t x472 = 206658481LL;
	int64_t t77 = 541521551875289641LL;

	t77 = ((x469*x470)&(x471+x472));

	if (t77 != 4194304LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x473 = 12114U;
	uint16_t x474 = 3455U;
	int8_t x475 = INT8_MAX;
	volatile int32_t x476 = INT32_MIN;
	int32_t t78 = 3;

	t78 = ((x473*x474)&(x475+x476));

	if (t78 != 46) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x477 = UINT16_MAX;
	uint8_t x478 = UINT8_MAX;
	uint8_t x479 = 1U;
	static int32_t x480 = -1;

	t79 = ((x477*x478)&(x479+x480));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x481 = INT16_MIN;
	volatile int16_t x482 = 5636;
	static int64_t x483 = -1LL;
	uint32_t x484 = 1164U;
	static int64_t t80 = -4074060553357183115LL;

	t80 = ((x481*x482)&(x483+x484));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x490 = 33U;
	int64_t x492 = -1LL;
	static int64_t t81 = -2090927457800LL;

	t81 = ((x489*x490)&(x491+x492));

	if (t81 != 3630LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x493 = -1;
	uint16_t x494 = UINT16_MAX;
	int64_t x495 = INT64_MIN;
	static volatile uint64_t t82 = 35755LLU;

	t82 = ((x493*x494)&(x495+x496));

	if (t82 != 9251577613682540544LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x497 = UINT16_MAX;
	static int64_t x498 = -3842307LL;
	volatile int64_t x500 = 249224611LL;
	static uint64_t t83 = 567644808LLU;

	t83 = ((x497*x498)&(x499+x500));

	if (t83 != 302162178LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x513 = INT8_MIN;
	int64_t x514 = -551120718937500LL;
	uint16_t x515 = 35U;
	int16_t x516 = 1017;
	int64_t t84 = 1675595522761492LL;

	t84 = ((x513*x514)&(x515+x516));

	if (t84 != 1024LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x519 = -17;
	static volatile int32_t t85 = -1782;

	t85 = ((x517*x518)&(x519+x520));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x521 = 1U;
	int16_t x522 = 0;
	uint64_t x523 = 73992610832LLU;
	static uint32_t x524 = 1U;
	static uint64_t t86 = 434LLU;

	t86 = ((x521*x522)&(x523+x524));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x534 = INT16_MIN;
	uint64_t x535 = UINT64_MAX;
	static int32_t x536 = INT32_MIN;

	t87 = ((x533*x534)&(x535+x536));

	if (t87 != 18446744069414617088LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x545 = UINT64_MAX;
	static int64_t x546 = -1LL;
	static int64_t x547 = -3320LL;
	uint64_t x548 = 3641774749681957682LLU;
	static volatile uint64_t t88 = 65LLU;

	t88 = ((x545*x546)&(x547+x548));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x549 = INT8_MAX;
	int64_t x550 = -600437010092LL;
	int64_t t89 = -17813404624114347LL;

	t89 = ((x549*x550)&(x551+x552));

	if (t89 != -76255500304384LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x553 = UINT64_MAX;
	uint32_t x554 = 1U;
	int8_t x555 = INT8_MIN;
	static int16_t x556 = INT16_MIN;
	uint64_t t90 = 192171LLU;

	t90 = ((x553*x554)&(x555+x556));

	if (t90 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x558 = UINT32_MAX;
	int32_t x560 = -1;
	static int64_t t91 = -28897996495549980LL;

	t91 = ((x557*x558)&(x559+x560));

	if (t91 != 128LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x562 = 14U;
	uint8_t x563 = 2U;
	int64_t x564 = -1LL;

	t92 = ((x561*x562)&(x563+x564));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x565 = -1LL;
	static int8_t x566 = INT8_MIN;
	int8_t x567 = INT8_MAX;
	int32_t x568 = 7029;
	static int64_t t93 = 2567916462144702LL;

	t93 = ((x565*x566)&(x567+x568));

	if (t93 != 128LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x569 = 49U;
	int8_t x570 = 1;
	uint16_t x571 = UINT16_MAX;
	int32_t t94 = 61;

	t94 = ((x569*x570)&(x571+x572));

	if (t94 != 49) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x573 = 381LLU;
	int16_t x574 = INT16_MAX;
	int64_t x575 = INT64_MIN;
	uint64_t t95 = 309994652701662156LLU;

	t95 = ((x573*x574)&(x575+x576));

	if (t95 != 2LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x577 = 29U;
	volatile int8_t x578 = 1;
	static volatile uint64_t x580 = 1LLU;
	volatile uint64_t t96 = 6273264247907870911LLU;

	t96 = ((x577*x578)&(x579+x580));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x581 = 46081U;
	uint32_t x582 = 1033163U;
	int8_t x583 = 0;
	int32_t x584 = INT32_MIN;

	t97 = ((x581*x582)&(x583+x584));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x585 = INT16_MAX;
	volatile uint8_t x586 = 1U;
	volatile int8_t x587 = INT8_MIN;
	volatile int32_t t98 = -1;

	t98 = ((x585*x586)&(x587+x588));

	if (t98 != 32512) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x589 = UINT64_MAX;
	int16_t x590 = -9;
	volatile int16_t x591 = INT16_MIN;

	t99 = ((x589*x590)&(x591+x592));

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

