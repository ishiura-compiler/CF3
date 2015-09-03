#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x23 = INT8_MAX;
volatile int8_t x24 = -41;
volatile int16_t x31 = INT16_MAX;
uint16_t x32 = 6371U;
int64_t t3 = -11841247110155850LL;
int8_t x35 = INT8_MIN;
volatile int32_t x46 = 17540;
int64_t x53 = -1LL;
uint64_t x59 = UINT64_MAX;
static volatile uint64_t t9 = 92LLU;
int16_t x65 = INT16_MIN;
volatile int32_t t11 = -6477386;
int32_t x70 = 1972;
uint64_t x73 = 6766210799052537LLU;
static int16_t x77 = INT16_MIN;
uint32_t x78 = 10936U;
uint32_t x80 = 2540U;
static int16_t x86 = INT16_MIN;
int16_t x91 = INT16_MAX;
static int32_t x92 = -32;
uint64_t x102 = 24664999918LLU;
int32_t x112 = -412692;
int64_t x114 = -38723465530451LL;
int64_t x116 = -1787284231058LL;
volatile uint64_t x119 = 11817677496423LLU;
int32_t x142 = 759;
volatile int64_t x154 = -1LL;
volatile int64_t x155 = INT64_MAX;
int64_t t28 = -10928511LL;
uint16_t x166 = UINT16_MAX;
uint64_t x167 = 126272314615983LLU;
uint8_t x171 = UINT8_MAX;
volatile int8_t x178 = INT8_MAX;
uint64_t x194 = UINT64_MAX;
int8_t x196 = INT8_MAX;
uint64_t t36 = 6758LLU;
volatile uint32_t t37 = 2133719960U;
static uint8_t x209 = UINT8_MAX;
uint32_t t39 = 68939U;
int64_t t40 = -89687375LL;
int8_t x226 = INT8_MIN;
volatile uint32_t t42 = 124299669U;
uint16_t x229 = 45U;
static volatile int16_t x248 = 3939;
int16_t x250 = -1;
uint64_t x251 = 4053392948889LLU;
volatile int64_t x253 = 318LL;
volatile uint32_t x254 = UINT32_MAX;
static int16_t x270 = INT16_MIN;
uint8_t x277 = 7U;
volatile uint64_t x279 = UINT64_MAX;
static uint32_t x289 = UINT32_MAX;
int32_t x292 = 1;
int8_t x293 = INT8_MIN;
static volatile uint32_t t54 = 690759240U;
volatile uint16_t x299 = 3U;
uint32_t x302 = 69U;
uint32_t x303 = 1U;
int16_t x305 = 542;
volatile uint32_t x308 = 1273977U;
static volatile uint32_t t57 = 12720483U;
static uint8_t x323 = 1U;
static int64_t t61 = 4586638879579104LL;
uint32_t x330 = UINT32_MAX;
int64_t x342 = 439725281LL;
uint32_t t66 = 9783U;
int64_t x362 = INT64_MAX;
volatile int32_t x363 = 845957678;
int16_t x366 = INT16_MAX;
int64_t x368 = -20047885055827683LL;
int64_t t68 = 14LL;
volatile int8_t x370 = -1;
uint8_t x384 = 1U;
int32_t t71 = -552;
int32_t x391 = INT32_MIN;
volatile int64_t x392 = -1LL;
static uint64_t t73 = 166474LLU;
int16_t x399 = INT16_MIN;
int8_t x416 = INT8_MIN;
static int64_t t77 = 239LL;
int32_t x423 = INT32_MIN;
volatile uint32_t x435 = 11578280U;
int16_t x436 = INT16_MAX;
uint64_t t80 = 6213434510LLU;
int8_t x437 = INT8_MAX;
int8_t x438 = INT8_MAX;
uint32_t x449 = 16733132U;
int16_t x454 = -1;
int16_t x455 = INT16_MIN;
static volatile uint64_t t84 = 6162547LLU;
int32_t x458 = 8;
uint32_t x460 = 15997510U;
volatile int8_t x461 = INT8_MAX;
volatile int64_t t88 = -34LL;
int16_t x478 = INT16_MAX;
int64_t x480 = 1097153693639053LL;
static int32_t x484 = -479;
int8_t x493 = INT8_MAX;
int32_t x495 = -4252950;
int32_t t92 = 241;
volatile int32_t t95 = 60494;
uint32_t x515 = UINT32_MAX;
static volatile uint32_t x521 = 0U;
volatile int8_t x522 = INT8_MIN;
int32_t x528 = INT32_MIN;
static int32_t t98 = -389712;
static int16_t x529 = INT16_MAX;
uint8_t x530 = 7U;
uint8_t x532 = 1U;
volatile int32_t t99 = 1;


void f0(void) {
	int64_t x9 = 138634631LL;
	uint8_t x10 = 10U;
	uint32_t x11 = 669972U;
	uint16_t x12 = 9703U;
	volatile int64_t t0 = -194516179LL;

	t0 = (x9*((x10-x11)&x12));

	if (t0 != 173847827274LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x21 = 262U;
	int32_t x22 = -1;
	volatile uint32_t t1 = 1984467754U;

	t1 = (x21*((x22-x23)&x24));

	if (t1 != 4294933760U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x25 = 0U;
	int8_t x26 = -1;
	int8_t x27 = -1;
	int8_t x28 = INT8_MIN;
	int32_t t2 = -1;

	t2 = (x25*((x26-x27)&x28));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x29 = -18659;
	static int64_t x30 = INT64_MAX;

	t3 = (x29*((x30-x31)&x32));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x33 = 2159674LLU;
	int64_t x34 = INT64_MIN;
	uint32_t x36 = 4850377U;
	uint64_t t4 = 1027333617LLU;

	t4 = (x33*((x34-x35)&x36));

	if (t4 != 276438272LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x41 = 161488847U;
	int16_t x42 = -1;
	int32_t x43 = INT32_MIN;
	uint64_t x44 = 61968112530995963LLU;
	uint64_t t5 = 1109099746412LLU;

	t5 = (x41*((x42-x43)&x44));

	if (t5 != 18454479539836405LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = -1;
	int8_t x47 = INT8_MIN;
	volatile int16_t x48 = INT16_MIN;
	volatile int32_t t6 = 10223;

	t6 = (x45*((x46-x47)&x48));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = -401;
	int64_t x50 = -2909LL;
	static int32_t x51 = -585203566;
	uint16_t x52 = 6U;
	static int64_t t7 = -7807772LL;

	t7 = (x49*((x50-x51)&x52));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x54 = 1U;
	int32_t x55 = 0;
	int8_t x56 = INT8_MIN;
	int64_t t8 = -114452213371LL;

	t8 = (x53*((x54-x55)&x56));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = -5039889759136LL;
	uint32_t x58 = 64755023U;
	int64_t x60 = 3212696362LL;

	t9 = (x57*((x58-x59)&x60));

	if (t9 != 11072946460047335424LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x61 = UINT16_MAX;
	int8_t x62 = 1;
	uint32_t x63 = 4578864U;
	int8_t x64 = INT8_MAX;
	volatile uint32_t t10 = 172U;

	t10 = (x61*((x62-x63)&x64));

	if (t10 != 5308335U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x66 = 8U;
	int32_t x67 = -1;
	uint16_t x68 = 6221U;

	t11 = (x65*((x66-x67)&x68));

	if (t11 != -294912) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = INT8_MIN;
	volatile uint8_t x71 = UINT8_MAX;
	int16_t x72 = 1;
	int32_t t12 = -149;

	t12 = (x69*((x70-x71)&x72));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x74 = -1;
	static volatile int64_t x75 = INT64_MIN;
	volatile int8_t x76 = INT8_MIN;
	volatile uint64_t t13 = 37265547665863LLU;

	t13 = (x73*((x74-x75)&x76));

	if (t13 != 8357297054576051072LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x79 = 29U;
	uint32_t t14 = 662U;

	t14 = (x77*((x78-x79)&x80));

	if (t14 != 4223401984U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x85 = 6479709042344749LLU;
	int64_t x87 = INT64_MIN;
	static uint64_t x88 = 255284950619LLU;
	static uint64_t t15 = 104822736496LLU;

	t15 = (x85*((x86-x87)&x88));

	if (t15 != 16871914212292493312LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x89 = 6U;
	static int8_t x90 = -1;
	int32_t t16 = 578393085;

	t16 = (x89*((x90-x91)&x92));

	if (t16 != -196608) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x93 = -1LL;
	static int8_t x94 = -41;
	volatile int64_t x95 = INT64_MIN;
	static uint32_t x96 = 57903U;
	static volatile int64_t t17 = -16444773613763862LL;

	t17 = (x93*((x94-x95)&x96));

	if (t17 != -57863LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = -4520583LL;
	volatile int64_t x98 = 25176623754354LL;
	uint16_t x99 = 0U;
	int16_t x100 = 17;
	int64_t t18 = -1LL;

	t18 = (x97*((x98-x99)&x100));

	if (t18 != -72329328LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x101 = 18U;
	int16_t x103 = -1;
	int16_t x104 = INT16_MAX;
	uint64_t t19 = 72799146399838LLU;

	t19 = (x101*((x102-x103)&x104));

	if (t19 != 36558LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x105 = UINT64_MAX;
	int32_t x106 = INT32_MAX;
	uint32_t x107 = UINT32_MAX;
	volatile int64_t x108 = INT64_MIN;
	uint64_t t20 = 2LLU;

	t20 = (x105*((x106-x107)&x108));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x109 = 1;
	volatile int32_t x110 = INT32_MIN;
	uint32_t x111 = UINT32_MAX;
	uint32_t t21 = 167446607U;

	t21 = (x109*((x110-x111)&x112));

	if (t21 != 2147483648U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = 9;
	int32_t x115 = INT32_MIN;
	volatile int64_t t22 = 4605597LL;

	t22 = (x113*((x114-x115)&x116));

	if (t22 != -353444506656372LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = 33;
	uint64_t x118 = UINT64_MAX;
	volatile uint8_t x120 = 2U;
	static uint64_t t23 = 1479902858LLU;

	t23 = (x117*((x118-x119)&x120));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x121 = -1;
	int16_t x122 = INT16_MIN;
	int8_t x123 = INT8_MAX;
	int16_t x124 = INT16_MAX;
	int32_t t24 = 1;

	t24 = (x121*((x122-x123)&x124));

	if (t24 != -32641) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = INT8_MAX;
	uint16_t x130 = 1384U;
	volatile int8_t x131 = -1;
	int8_t x132 = INT8_MAX;
	volatile int32_t t25 = -3;

	t25 = (x129*((x130-x131)&x132));

	if (t25 != 13335) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = -1;
	uint64_t x143 = 1LLU;
	volatile int32_t x144 = INT32_MIN;
	static uint64_t t26 = 327252978571724748LLU;

	t26 = (x141*((x142-x143)&x144));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x149 = 2676357404120642LL;
	static int64_t x150 = -3LL;
	int8_t x151 = INT8_MIN;
	static volatile int32_t x152 = -34;
	volatile int64_t t27 = 937060717LL;

	t27 = (x149*((x150-x151)&x152));

	if (t27 != 246224881179099064LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x153 = INT16_MIN;
	uint16_t x156 = 3369U;

	t28 = (x153*((x154-x155)&x156));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x161 = INT8_MAX;
	volatile int8_t x162 = INT8_MIN;
	int32_t x163 = INT32_MIN;
	uint64_t x164 = 218833350256LLU;
	volatile uint64_t t29 = 651489377400582591LLU;

	t29 = (x161*((x162-x163)&x164));

	if (t29 != 246062715392LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x165 = -54088;
	uint8_t x168 = 126U;
	uint64_t t30 = 27737LLU;

	t30 = (x165*((x166-x167)&x168));

	if (t30 != 18446744073705224576LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x169 = 217911307843158LLU;
	int8_t x170 = 0;
	volatile uint64_t x172 = UINT64_MAX;
	volatile uint64_t t31 = 497293878645LLU;

	t31 = (x169*((x170-x171)&x172));

	if (t31 != 18391176690209546326LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x173 = INT8_MIN;
	static uint64_t x174 = UINT64_MAX;
	static int8_t x175 = -1;
	uint32_t x176 = 6U;
	volatile uint64_t t32 = 850948377655303194LLU;

	t32 = (x173*((x174-x175)&x176));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x177 = 30U;
	volatile uint64_t x179 = 22193081480686165LLU;
	uint16_t x180 = UINT16_MAX;
	volatile uint64_t t33 = 3LLU;

	t33 = (x177*((x178-x179)&x180));

	if (t33 != 661740LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x181 = 1;
	int32_t x182 = -29100144;
	int16_t x183 = -1;
	static int32_t x184 = -1;
	int32_t t34 = -14264;

	t34 = (x181*((x182-x183)&x184));

	if (t34 != -29100143) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = INT64_MIN;
	static uint64_t x190 = 1LLU;
	uint32_t x191 = 14U;
	uint16_t x192 = UINT16_MAX;
	uint64_t t35 = 9671990LLU;

	t35 = (x189*((x190-x191)&x192));

	if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x193 = -1;
	volatile uint64_t x195 = 458LLU;

	t36 = (x193*((x194-x195)&x196));

	if (t36 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x197 = 146073;
	int32_t x198 = INT32_MIN;
	uint32_t x199 = UINT32_MAX;
	volatile int8_t x200 = 0;

	t37 = (x197*((x198-x199)&x200));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x210 = INT8_MIN;
	static uint32_t x211 = 24875U;
	uint8_t x212 = 1U;
	uint32_t t38 = 722263480U;

	t38 = (x209*((x210-x211)&x212));

	if (t38 != 255U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x213 = INT8_MIN;
	static volatile int16_t x214 = -159;
	uint32_t x215 = 33627U;
	int32_t x216 = -1;

	t39 = (x213*((x214-x215)&x216));

	if (t39 != 4324608U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x217 = INT64_MIN;
	uint8_t x218 = 1U;
	int8_t x219 = -1;
	int16_t x220 = -215;

	t40 = (x217*((x218-x219)&x220));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x221 = 575U;
	int8_t x222 = -1;
	int8_t x223 = -2;
	uint8_t x224 = 1U;
	volatile uint32_t t41 = 8176039U;

	t41 = (x221*((x222-x223)&x224));

	if (t41 != 575U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x225 = INT8_MAX;
	uint32_t x227 = 449517493U;
	static volatile int8_t x228 = INT8_MAX;

	t42 = (x225*((x226-x227)&x228));

	if (t42 != 9525U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x230 = INT32_MIN;
	uint64_t x231 = UINT64_MAX;
	uint64_t x232 = 2025821908LLU;
	static uint64_t t43 = 3756804417982LLU;

	t43 = (x229*((x230-x231)&x232));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x241 = 5;
	int32_t x242 = -736;
	static volatile uint16_t x243 = UINT16_MAX;
	static int64_t x244 = -1LL;
	volatile int64_t t44 = -7LL;

	t44 = (x241*((x242-x243)&x244));

	if (t44 != -331355LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x245 = INT32_MAX;
	int64_t x246 = -1LL;
	static uint64_t x247 = UINT64_MAX;
	volatile uint64_t t45 = 4478921278846068LLU;

	t45 = (x245*((x246-x247)&x248));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x249 = INT8_MIN;
	volatile int64_t x252 = INT64_MIN;
	static volatile uint64_t t46 = 141916484855586LLU;

	t46 = (x249*((x250-x251)&x252));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x255 = INT8_MAX;
	volatile int8_t x256 = -54;
	volatile int64_t t47 = -134911561896148361LL;

	t47 = (x253*((x254-x255)&x256));

	if (t47 != 1365799559424LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x257 = 97557;
	int8_t x258 = INT8_MIN;
	volatile int16_t x259 = -1;
	uint8_t x260 = 1U;
	volatile int32_t t48 = 57145283;

	t48 = (x257*((x258-x259)&x260));

	if (t48 != 97557) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x269 = 1449U;
	static int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MAX;
	int32_t t49 = -1578;

	t49 = (x269*((x270-x271)&x272));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x278 = 1;
	int32_t x280 = INT32_MIN;
	uint64_t t50 = 271746689350331248LLU;

	t50 = (x277*((x278-x279)&x280));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x281 = INT32_MIN;
	int16_t x282 = INT16_MIN;
	static volatile int64_t x283 = INT64_MIN;
	volatile uint8_t x284 = UINT8_MAX;
	volatile int64_t t51 = 4234705LL;

	t51 = (x281*((x282-x283)&x284));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x285 = INT32_MIN;
	uint32_t x286 = 2U;
	int32_t x287 = 6442295;
	static uint16_t x288 = UINT16_MAX;
	uint32_t t52 = 1010420U;

	t52 = (x285*((x286-x287)&x288));

	if (t52 != 2147483648U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x290 = -1;
	uint64_t x291 = UINT64_MAX;
	static uint64_t t53 = 2771LLU;

	t53 = (x289*((x290-x291)&x292));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x294 = 12;
	uint32_t x295 = UINT32_MAX;
	int32_t x296 = 137;

	t54 = (x293*((x294-x295)&x296));

	if (t54 != 4294966144U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x297 = 1U;
	volatile int64_t x298 = 4015LL;
	int64_t x300 = INT64_MAX;
	volatile int64_t t55 = 35LL;

	t55 = (x297*((x298-x299)&x300));

	if (t55 != 4012LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x301 = 19U;
	int8_t x304 = 53;
	uint32_t t56 = 1153U;

	t56 = (x301*((x302-x303)&x304));

	if (t56 != 76U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x306 = INT8_MIN;
	int16_t x307 = -268;

	t57 = (x305*((x306-x307)&x308));

	if (t57 != 4336U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x309 = -2;
	int16_t x310 = INT16_MAX;
	uint8_t x311 = UINT8_MAX;
	int16_t x312 = INT16_MIN;
	static int32_t t58 = -2993;

	t58 = (x309*((x310-x311)&x312));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x313 = INT32_MAX;
	uint32_t x314 = 0U;
	int32_t x315 = INT32_MIN;
	static volatile int16_t x316 = INT16_MIN;
	static volatile uint32_t t59 = 244U;

	t59 = (x313*((x314-x315)&x316));

	if (t59 != 2147483648U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x321 = INT8_MIN;
	volatile int16_t x322 = -1;
	static int16_t x324 = INT16_MIN;
	int32_t t60 = 270667;

	t60 = (x321*((x322-x323)&x324));

	if (t60 != 4194304) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x325 = -6027;
	uint8_t x326 = 1U;
	int16_t x327 = INT16_MIN;
	static int64_t x328 = 493569511867685LL;

	t61 = (x325*((x326-x327)&x328));

	if (t61 != -6027LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x329 = UINT64_MAX;
	static uint16_t x331 = 2U;
	int64_t x332 = INT64_MIN;
	uint64_t t62 = 4LLU;

	t62 = (x329*((x330-x331)&x332));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x333 = -1;
	int32_t x334 = -1;
	uint64_t x335 = 526824551468239LLU;
	static volatile int8_t x336 = -1;
	static volatile uint64_t t63 = 226LLU;

	t63 = (x333*((x334-x335)&x336));

	if (t63 != 526824551468240LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x341 = -1LL;
	int64_t x343 = 3695911928009362417LL;
	uint8_t x344 = 2U;
	int64_t t64 = -2878113783LL;

	t64 = (x341*((x342-x343)&x344));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x349 = -1;
	volatile int64_t x350 = -3887437961LL;
	int8_t x351 = INT8_MAX;
	uint8_t x352 = 3U;
	int64_t t65 = 2692451245LL;

	t65 = (x349*((x350-x351)&x352));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x353 = 14457038;
	int8_t x354 = INT8_MIN;
	int16_t x355 = -1;
	uint32_t x356 = 7234314U;

	t66 = (x353*((x354-x355)&x356));

	if (t66 != 4154173952U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x361 = 8351;
	int8_t x364 = INT8_MAX;
	volatile int64_t t67 = -3646LL;

	t67 = (x361*((x362-x363)&x364));

	if (t67 != 676431LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x365 = INT32_MAX;
	int64_t x367 = 3LL;

	t68 = (x365*((x366-x367)&x368));

	if (t68 != 53386443464420LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x369 = 0;
	int64_t x371 = -10688871627717948LL;
	int32_t x372 = INT32_MAX;
	int64_t t69 = 18940105750401876LL;

	t69 = (x369*((x370-x371)&x372));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x377 = -184LL;
	int64_t x378 = -59LL;
	int64_t x379 = -1LL;
	static int8_t x380 = -1;
	int64_t t70 = -69177645264903LL;

	t70 = (x377*((x378-x379)&x380));

	if (t70 != 10672LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x381 = INT16_MAX;
	int8_t x382 = INT8_MIN;
	int32_t x383 = INT32_MIN;

	t71 = (x381*((x382-x383)&x384));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x389 = -1;
	int64_t x390 = INT64_MIN;
	int64_t t72 = 65017062669292614LL;

	t72 = (x389*((x390-x391)&x392));

	if (t72 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x393 = 68689524LL;
	uint64_t x394 = 2309542839317997681LLU;
	uint32_t x395 = 2809135U;
	static int64_t x396 = INT64_MIN;

	t73 = (x393*((x394-x395)&x396));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x397 = -1;
	uint32_t x398 = UINT32_MAX;
	uint8_t x400 = 6U;
	volatile uint32_t t74 = 11U;

	t74 = (x397*((x398-x399)&x400));

	if (t74 != 4294967290U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x401 = INT32_MAX;
	uint64_t x402 = 142939712000628911LLU;
	int64_t x403 = -3340700617937647998LL;
	int8_t x404 = INT8_MIN;
	volatile uint64_t t75 = 12LLU;

	t75 = (x401*((x402-x403)&x404));

	if (t75 != 17528195102140132864LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x405 = INT32_MAX;
	uint32_t x406 = 961831U;
	volatile int16_t x407 = INT16_MAX;
	int16_t x408 = INT16_MIN;
	volatile uint32_t t76 = 8251405U;

	t76 = (x405*((x406-x407)&x408));

	if (t76 != 4294049792U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x413 = 38U;
	int64_t x414 = INT64_MIN;
	int64_t x415 = INT64_MIN;

	t77 = (x413*((x414-x415)&x416));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x421 = 0LL;
	uint64_t x422 = 9368LLU;
	static int8_t x424 = INT8_MAX;
	volatile uint64_t t78 = 734163723642782LLU;

	t78 = (x421*((x422-x423)&x424));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x425 = 0;
	volatile uint32_t x426 = 931217473U;
	uint32_t x427 = UINT32_MAX;
	int32_t x428 = -1;
	volatile uint32_t t79 = 162586U;

	t79 = (x425*((x426-x427)&x428));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x433 = INT64_MAX;
	static uint64_t x434 = UINT64_MAX;

	t80 = (x433*((x434-x435)&x436));

	if (t80 != 9223372036854754217LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x439 = INT16_MIN;
	uint64_t x440 = 3090566LLU;
	volatile uint64_t t81 = 899384000LLU;

	t81 = (x437*((x438-x439)&x440));

	if (t81 != 762LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x445 = 3275805235292848565LLU;
	int32_t x446 = INT32_MIN;
	uint32_t x447 = 1255162U;
	int8_t x448 = -2;
	volatile uint64_t t82 = 43521LLU;

	t82 = (x445*((x446-x447)&x448));

	if (t82 != 15401103108881184574LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x450 = INT64_MAX;
	int16_t x451 = INT16_MAX;
	uint16_t x452 = 149U;
	volatile int64_t t83 = -2750680LL;

	t83 = (x449*((x450-x451)&x452));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x453 = 1;
	uint64_t x456 = 4489609103143520646LLU;

	t84 = (x453*((x454-x455)&x456));

	if (t84 != 18822LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x457 = INT64_MAX;
	volatile int8_t x459 = INT8_MIN;
	volatile int64_t t85 = 11249LL;

	t85 = (x457*((x458-x459)&x460));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x462 = INT16_MAX;
	static volatile int64_t x463 = INT64_MAX;
	uint32_t x464 = 7U;
	static int64_t t86 = -1130454642738785LL;

	t86 = (x461*((x462-x463)&x464));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x465 = 4;
	static uint16_t x466 = 246U;
	volatile int64_t x467 = -1480LL;
	uint16_t x468 = 988U;
	volatile int64_t t87 = 286091309409963260LL;

	t87 = (x465*((x466-x467)&x468));

	if (t87 != 2672LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x469 = 3U;
	int32_t x470 = INT32_MIN;
	int64_t x471 = INT64_MIN;
	volatile uint8_t x472 = 70U;

	t88 = (x469*((x470-x471)&x472));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x473 = 2U;
	int32_t x474 = INT32_MIN;
	volatile uint32_t x475 = 532901U;
	volatile int32_t x476 = INT32_MIN;
	volatile uint32_t t89 = 105155U;

	t89 = (x473*((x474-x475)&x476));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x477 = INT16_MIN;
	int32_t x479 = -41456349;
	volatile int64_t t90 = -22779238001892LL;

	t90 = (x477*((x478-x479)&x480));

	if (t90 != -85903933440LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x481 = 32271U;
	static uint32_t x482 = 589413887U;
	int64_t x483 = -10839109013762LL;
	int64_t t91 = 17855802LL;

	t91 = (x481*((x482-x483)&x484));

	if (t91 != 349807907950399503LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x494 = INT16_MAX;
	int8_t x496 = -6;

	t92 = (x493*((x494-x495)&x496));

	if (t92 != 544285424) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x501 = 1267371011LLU;
	int16_t x502 = INT16_MIN;
	volatile uint64_t x503 = 84800LLU;
	int32_t x504 = -145062382;
	static uint64_t t93 = 387459837LLU;

	t93 = (x501*((x502-x503)&x504));

	if (t93 != 18262854015056219136LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x505 = 0;
	int64_t x506 = 16670912794291LL;
	uint16_t x507 = UINT16_MAX;
	int64_t x508 = -42LL;
	volatile int64_t t94 = -57420LL;

	t94 = (x505*((x506-x507)&x508));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x509 = 3;
	static int8_t x510 = 1;
	int8_t x511 = -1;
	static int8_t x512 = 59;

	t95 = (x509*((x510-x511)&x512));

	if (t95 != 6) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x513 = UINT16_MAX;
	static uint8_t x514 = UINT8_MAX;
	int8_t x516 = -1;
	uint32_t t96 = 32555U;

	t96 = (x513*((x514-x515)&x516));

	if (t96 != 16776960U) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x523 = INT8_MIN;
	uint64_t x524 = 113380774284998928LLU;
	uint64_t t97 = 5330217471606636870LLU;

	t97 = (x521*((x522-x523)&x524));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x525 = -1;
	volatile uint16_t x526 = UINT16_MAX;
	uint8_t x527 = 2U;

	t98 = (x525*((x526-x527)&x528));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x531 = UINT8_MAX;

	t99 = (x529*((x530-x531)&x532));

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

