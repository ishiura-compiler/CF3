#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = 1596;
int64_t x15 = 71980LL;
int16_t x24 = -1264;
uint8_t x29 = UINT8_MAX;
static int64_t t7 = 54928757178940LL;
int32_t x35 = INT32_MAX;
int8_t x40 = INT8_MIN;
static volatile int64_t x46 = INT64_MIN;
int32_t x53 = 1332208;
int16_t x61 = -47;
volatile int32_t x62 = INT32_MAX;
int64_t x76 = INT64_MAX;
volatile int64_t t15 = INT64_MAX;
static int64_t t16 = -7384331054198LL;
int64_t x98 = INT64_MIN;
int64_t t20 = -131355673670913LL;
static volatile uint8_t x112 = UINT8_MAX;
static uint8_t x119 = 8U;
uint16_t x121 = UINT16_MAX;
int8_t x125 = -1;
static int16_t x126 = INT16_MAX;
static volatile uint32_t x127 = 727U;
uint64_t t26 = 48039LLU;
static int32_t x136 = -1;
volatile int64_t t28 = 11298945LL;
static uint64_t x143 = UINT64_MAX;
uint64_t t29 = 418302906LLU;
int64_t x145 = -1LL;
int16_t x149 = 0;
static volatile int64_t t32 = 4377343747166399LL;
static volatile int8_t x157 = INT8_MIN;
int32_t x160 = -1;
volatile int64_t t33 = 113LL;
int16_t x171 = INT16_MAX;
static int64_t x172 = INT64_MIN;
uint16_t x174 = UINT16_MAX;
uint64_t t36 = UINT64_MAX;
uint8_t x202 = 6U;
int64_t x208 = -1LL;
static volatile int64_t t41 = -303173751990883LL;
volatile int64_t t45 = 292921107683883999LL;
static int32_t x233 = 1;
static uint32_t x235 = 74172512U;
int64_t x240 = INT64_MIN;
int64_t t47 = 243477081LL;
volatile int64_t t49 = 80971933LL;
static volatile int8_t x253 = -43;
uint32_t x257 = UINT32_MAX;
int8_t x258 = -5;
int16_t x260 = INT16_MIN;
int8_t x271 = INT8_MAX;
int32_t x278 = 1188;
int64_t t56 = INT64_MIN;
int16_t x282 = 1586;
int16_t x293 = INT16_MAX;
uint64_t t60 = 0LLU;
int32_t x297 = INT32_MIN;
int16_t x306 = INT16_MAX;
int8_t x311 = -2;
static uint16_t x312 = 7990U;
volatile uint16_t x315 = 916U;
volatile uint32_t t64 = UINT32_MAX;
volatile int64_t t65 = -3339887068LL;
static volatile int64_t t66 = 37001LL;
volatile int32_t x326 = INT32_MAX;
int16_t x328 = INT16_MAX;
uint16_t x332 = UINT16_MAX;
int8_t x334 = -1;
volatile int32_t t69 = -23018;
int16_t x337 = 1;
uint8_t x345 = 21U;
volatile uint16_t x346 = UINT16_MAX;
volatile int64_t t73 = 100310758683LL;
int32_t x365 = -114307;
uint64_t x371 = 68662197046655203LLU;
uint16_t x376 = 1U;
volatile int64_t x394 = -8310398LL;
uint8_t x406 = 4U;
int64_t x415 = -1LL;
int64_t x422 = INT64_MIN;
int16_t x432 = INT16_MIN;
volatile int64_t t88 = 35215879471228203LL;
static int32_t x446 = -1;
int32_t x447 = INT32_MAX;
int8_t x451 = INT8_MIN;
volatile int64_t x452 = INT64_MAX;
int64_t t93 = 538507LL;
uint8_t x453 = 6U;
static uint16_t x471 = 8693U;
uint8_t x472 = 6U;
int16_t x475 = 72;
int32_t t98 = 3;
int64_t x478 = INT64_MAX;
volatile int8_t x479 = 29;
uint16_t x480 = 11U;


void f0(void) {
	int8_t x1 = -11;
	uint64_t x2 = 22LLU;
	int32_t x3 = INT32_MAX;
	uint16_t x4 = UINT16_MAX;
	volatile uint64_t t0 = 28LLU;

	t0 = (x1|((x2-x3)%x4));

	if (t0 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 66934U;
	uint64_t x6 = 97LLU;
	volatile int32_t x7 = INT32_MAX;
	int64_t x8 = INT64_MIN;
	volatile uint64_t t1 = 921873120311144541LLU;

	t1 = (x5|((x6-x7)%x8));

	if (t1 != 9223372034707359094LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	uint64_t x11 = 319407LLU;
	int16_t x12 = INT16_MAX;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (x9|((x10-x11)%x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	uint64_t x14 = 816215541090631LLU;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 191840LLU;

	t3 = (x13|((x14-x15)%x16));

	if (t3 != 18446744073709551515LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint32_t x18 = 1091U;
	static uint16_t x19 = 2681U;
	int16_t x20 = INT16_MIN;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = (x17|((x18-x19)%x20));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 1757929531U;
	uint32_t x22 = 3U;
	static volatile int32_t x23 = INT32_MIN;
	static volatile uint32_t t5 = 6918442U;

	t5 = (x21|((x22-x23)%x24));

	if (t5 != 3905413179U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -17;
	uint8_t x26 = 113U;
	volatile int16_t x27 = -7;
	volatile uint16_t x28 = 1U;
	int32_t t6 = -335556327;

	t6 = (x25|((x26-x27)%x28));

	if (t6 != -17) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = 5260316317LL;
	int8_t x31 = INT8_MAX;
	int32_t x32 = INT32_MIN;

	t7 = (x29|((x30-x31)%x32));

	if (t7 != 965349119LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	volatile int8_t x34 = INT8_MAX;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -29563;

	t8 = (x33|((x34-x35)%x36));

	if (t8 != -32640) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MAX;
	static volatile int8_t x38 = 1;
	uint64_t x39 = 145780379499LLU;
	volatile uint64_t t9 = 757765031840429LLU;

	t9 = (x37|((x38-x39)%x40));

	if (t9 != 18446743929828147199LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = 45;
	int64_t x47 = -457LL;
	int8_t x48 = 1;
	int64_t t10 = -17192644535983162LL;

	t10 = (x45|((x46-x47)%x48));

	if (t10 != 45LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	int32_t x50 = INT32_MAX;
	int64_t x51 = INT64_MAX;
	volatile int32_t x52 = -762;
	int64_t t11 = 119LL;

	t11 = (x49|((x50-x51)%x52));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x54 = 1LLU;
	static volatile uint16_t x55 = UINT16_MAX;
	int64_t x56 = -6855515LL;
	uint64_t t12 = 79960512058683793LLU;

	t12 = (x53|((x54-x55)%x56));

	if (t12 != 7855101LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x63 = 1U;
	volatile uint8_t x64 = UINT8_MAX;
	volatile int32_t t13 = 15436991;

	t13 = (x61|((x62-x63)%x64));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x69 = INT16_MIN;
	uint64_t x70 = 1499974341304987906LLU;
	uint8_t x71 = 53U;
	uint16_t x72 = 355U;
	uint64_t t14 = 1892498106LLU;

	t14 = (x69|((x70-x71)%x72));

	if (t14 != 18446744073709519066LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x73 = INT64_MAX;
	int8_t x74 = INT8_MAX;
	int16_t x75 = -1;

	t15 = (x73|((x74-x75)%x76));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MIN;
	static uint32_t x78 = UINT32_MAX;
	int32_t x79 = INT32_MAX;
	int64_t x80 = INT64_MIN;

	t16 = (x77|((x78-x79)%x80));

	if (t16 != -2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = 1;
	uint32_t x82 = 561514199U;
	uint8_t x83 = UINT8_MAX;
	int64_t x84 = 14182758318661698LL;
	volatile int64_t t17 = 6428491601322LL;

	t17 = (x81|((x82-x83)%x84));

	if (t17 != 561513945LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x85 = 214143LLU;
	int64_t x86 = INT64_MIN;
	int8_t x87 = -1;
	uint64_t x88 = 44497425211300LLU;
	uint64_t t18 = 2048250LLU;

	t18 = (x85|((x86-x87)%x88));

	if (t18 != 34733906951935LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x89 = INT16_MAX;
	volatile int32_t x90 = INT32_MAX;
	volatile uint64_t x91 = 12569LLU;
	int64_t x92 = INT64_MAX;
	volatile uint64_t t19 = 1448754LLU;

	t19 = (x89|((x90-x91)%x92));

	if (t19 != 2147483647LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = 5U;
	volatile int64_t x99 = -1LL;
	volatile uint8_t x100 = 20U;

	t20 = (x97|((x98-x99)%x100));

	if (t20 != -3LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x109 = UINT32_MAX;
	uint32_t x110 = 0U;
	int64_t x111 = -113964LL;
	static int64_t t21 = -438702065074953LL;

	t21 = (x109|((x110-x111)%x112));

	if (t21 != 4294967295LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = -1;
	int64_t x114 = -870517869781020893LL;
	int8_t x115 = INT8_MIN;
	int64_t x116 = INT64_MIN;
	volatile int64_t t22 = -216664158144727010LL;

	t22 = (x113|((x114-x115)%x116));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x117 = INT64_MAX;
	int8_t x118 = -5;
	static int64_t x120 = INT64_MIN;
	volatile int64_t t23 = -116LL;

	t23 = (x117|((x118-x119)%x120));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x122 = INT16_MIN;
	volatile uint8_t x123 = 1U;
	volatile int8_t x124 = INT8_MAX;
	int32_t t24 = -828;

	t24 = (x121|((x122-x123)%x124));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x128 = UINT8_MAX;
	static uint32_t t25 = UINT32_MAX;

	t25 = (x125|((x126-x127)%x128));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x129 = INT64_MIN;
	static int8_t x130 = INT8_MIN;
	volatile uint64_t x131 = UINT64_MAX;
	int32_t x132 = -1;

	t26 = (x129|((x130-x131)%x132));

	if (t26 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x133 = 38U;
	int16_t x134 = -1;
	volatile int64_t x135 = -1LL;
	volatile int64_t t27 = -1402240545LL;

	t27 = (x133|((x134-x135)%x136));

	if (t27 != 38LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = 0;
	int64_t x138 = -25761328LL;
	static volatile int8_t x139 = 1;
	uint16_t x140 = 13088U;

	t28 = (x137|((x138-x139)%x140));

	if (t28 != -4145LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = INT64_MAX;
	uint8_t x142 = 8U;
	int64_t x144 = INT64_MIN;

	t29 = (x141|((x142-x143)%x144));

	if (t29 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x146 = -52121343155LL;
	int64_t x147 = INT64_MIN;
	volatile uint64_t x148 = 9240480364LLU;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = (x145|((x146-x147)%x148));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x150 = -23;
	int32_t x151 = 13;
	int8_t x152 = -3;
	int32_t t31 = -5016;

	t31 = (x149|((x150-x151)%x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = INT32_MIN;
	static volatile int8_t x154 = INT8_MIN;
	int64_t x155 = INT64_MIN;
	int64_t x156 = INT64_MAX;

	t32 = (x153|((x154-x155)%x156));

	if (t32 != -128LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x158 = INT64_MIN;
	int64_t x159 = INT64_MIN;

	t33 = (x157|((x158-x159)%x160));

	if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = 1862;
	static uint8_t x162 = UINT8_MAX;
	static volatile int16_t x163 = INT16_MIN;
	int8_t x164 = -1;
	volatile int32_t t34 = 173;

	t34 = (x161|((x162-x163)%x164));

	if (t34 != 1862) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x169 = INT16_MAX;
	int16_t x170 = 27;
	int64_t t35 = -20410303LL;

	t35 = (x169|((x170-x171)%x172));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x173 = UINT64_MAX;
	int8_t x175 = -1;
	int16_t x176 = -1;

	t36 = (x173|((x174-x175)%x176));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x185 = 1;
	static int32_t x186 = -6;
	volatile int8_t x187 = INT8_MAX;
	uint32_t x188 = UINT32_MAX;
	uint32_t t37 = 3927109U;

	t37 = (x185|((x186-x187)%x188));

	if (t37 != 4294967163U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x189 = -31;
	volatile uint32_t x190 = UINT32_MAX;
	uint16_t x191 = UINT16_MAX;
	int8_t x192 = -3;
	static volatile uint32_t t38 = 51U;

	t38 = (x189|((x190-x191)%x192));

	if (t38 != 4294967265U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x197 = INT8_MIN;
	static volatile uint16_t x198 = UINT16_MAX;
	int8_t x199 = 13;
	int8_t x200 = -1;
	int32_t t39 = 3042;

	t39 = (x197|((x198-x199)%x200));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x201 = -50;
	int16_t x203 = -1;
	volatile int16_t x204 = -1;
	volatile int32_t t40 = 82519536;

	t40 = (x201|((x202-x203)%x204));

	if (t40 != -50) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x205 = -126259LL;
	static uint8_t x206 = 125U;
	volatile int64_t x207 = -1LL;

	t41 = (x205|((x206-x207)%x208));

	if (t41 != -126259LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x209 = INT16_MAX;
	uint16_t x210 = 208U;
	volatile uint64_t x211 = 16580LLU;
	static volatile int16_t x212 = INT16_MIN;
	static volatile uint64_t t42 = 59374LLU;

	t42 = (x209|((x210-x211)%x212));

	if (t42 != 32767LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x213 = 8;
	int16_t x214 = -1;
	int16_t x215 = 4123;
	static uint64_t x216 = 14LLU;
	volatile uint64_t t43 = 413958776636798LLU;

	t43 = (x213|((x214-x215)%x216));

	if (t43 != 8LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x221 = INT8_MAX;
	int8_t x222 = -34;
	int64_t x223 = INT64_MIN;
	static int32_t x224 = INT32_MAX;
	static int64_t t44 = 11261225308648560LL;

	t44 = (x221|((x222-x223)%x224));

	if (t44 != 2147483647LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x229 = -1;
	int64_t x230 = -10418LL;
	uint8_t x231 = 123U;
	int32_t x232 = INT32_MIN;

	t45 = (x229|((x230-x231)%x232));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x234 = -1;
	int32_t x236 = 1;
	uint32_t t46 = 4U;

	t46 = (x233|((x234-x235)%x236));

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x237 = -1;
	int32_t x238 = 1181;
	int32_t x239 = -1;

	t47 = (x237|((x238-x239)%x240));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x241 = 1546110268U;
	int8_t x242 = -1;
	int8_t x243 = 3;
	uint16_t x244 = 899U;
	uint32_t t48 = 3U;

	t48 = (x241|((x242-x243)%x244));

	if (t48 != 4294967292U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x245 = UINT32_MAX;
	int64_t x246 = INT64_MIN;
	int8_t x247 = INT8_MIN;
	int32_t x248 = -1;

	t49 = (x245|((x246-x247)%x248));

	if (t49 != 4294967295LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x249 = 228U;
	static volatile uint16_t x250 = 432U;
	int16_t x251 = INT16_MAX;
	uint8_t x252 = 52U;
	static int32_t t50 = 1919;

	t50 = (x249|((x250-x251)%x252));

	if (t50 != -11) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x254 = -17;
	int8_t x255 = -1;
	volatile uint8_t x256 = UINT8_MAX;
	static volatile int32_t t51 = 1773;

	t51 = (x253|((x254-x255)%x256));

	if (t51 != -11) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x259 = 468949805;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = (x257|((x258-x259)%x260));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x261 = -296;
	int16_t x262 = 175;
	uint16_t x263 = 1046U;
	uint8_t x264 = 3U;
	int32_t t53 = 3888;

	t53 = (x261|((x262-x263)%x264));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x265 = -3;
	int64_t x266 = -1LL;
	uint8_t x267 = UINT8_MAX;
	static int32_t x268 = -1;
	volatile int64_t t54 = -947092265815009021LL;

	t54 = (x265|((x266-x267)%x268));

	if (t54 != -3LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x269 = 9U;
	uint8_t x270 = 14U;
	uint16_t x272 = 91U;
	int32_t t55 = -130495;

	t55 = (x269|((x270-x271)%x272));

	if (t55 != -21) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x277 = INT64_MIN;
	volatile uint8_t x279 = 0U;
	int32_t x280 = -1;

	t56 = (x277|((x278-x279)%x280));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x281 = 936541951LLU;
	uint16_t x283 = UINT16_MAX;
	int16_t x284 = INT16_MIN;
	uint64_t t57 = 0LLU;

	t57 = (x281|((x282-x283)%x284));

	if (t57 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x285 = INT32_MIN;
	uint16_t x286 = 788U;
	static int64_t x287 = -1LL;
	static volatile uint8_t x288 = 10U;
	int64_t t58 = -114LL;

	t58 = (x285|((x286-x287)%x288));

	if (t58 != -2147483639LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x289 = -1;
	uint16_t x290 = 2U;
	volatile int64_t x291 = -1LL;
	static int32_t x292 = INT32_MAX;
	volatile int64_t t59 = 13666LL;

	t59 = (x289|((x290-x291)%x292));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x294 = 124582636453LLU;
	uint16_t x295 = UINT16_MAX;
	int32_t x296 = 252;

	t60 = (x293|((x294-x295)%x296));

	if (t60 != 32767LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x298 = 0;
	static volatile int8_t x299 = -1;
	uint64_t x300 = UINT64_MAX;
	uint64_t t61 = 656766239LLU;

	t61 = (x297|((x298-x299)%x300));

	if (t61 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x305 = 1;
	int8_t x307 = -40;
	uint16_t x308 = 3750U;
	static volatile int32_t t62 = -950;

	t62 = (x305|((x306-x307)%x308));

	if (t62 != 2807) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x309 = INT64_MIN;
	static int16_t x310 = 29;
	volatile int64_t t63 = 736LL;

	t63 = (x309|((x310-x311)%x312));

	if (t63 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x313 = UINT32_MAX;
	int32_t x314 = -12;
	int8_t x316 = INT8_MIN;

	t64 = (x313|((x314-x315)%x316));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x317 = -1LL;
	static volatile int8_t x318 = -59;
	volatile int8_t x319 = -10;
	uint32_t x320 = 82U;

	t65 = (x317|((x318-x319)%x320));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x321 = UINT32_MAX;
	static uint16_t x322 = 142U;
	volatile int8_t x323 = -1;
	int64_t x324 = -16LL;

	t66 = (x321|((x322-x323)%x324));

	if (t66 != 4294967295LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x325 = INT32_MIN;
	int64_t x327 = INT64_MAX;
	int64_t t67 = -748205231LL;

	t67 = (x325|((x326-x327)%x328));

	if (t67 != -6LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x329 = 20972746811221892LLU;
	uint16_t x330 = 1U;
	volatile int32_t x331 = -1;
	uint64_t t68 = 1LLU;

	t68 = (x329|((x330-x331)%x332));

	if (t68 != 20972746811221894LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x333 = INT8_MIN;
	uint16_t x335 = 833U;
	int32_t x336 = INT32_MIN;

	t69 = (x333|((x334-x335)%x336));

	if (t69 != -66) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x338 = -1;
	uint8_t x339 = UINT8_MAX;
	int32_t x340 = 3;
	volatile int32_t t70 = 1864;

	t70 = (x337|((x338-x339)%x340));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x347 = -1;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t71 = 259032420LLU;

	t71 = (x345|((x346-x347)%x348));

	if (t71 != 65557LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x349 = INT64_MIN;
	int16_t x350 = -1;
	static volatile uint64_t x351 = UINT64_MAX;
	int8_t x352 = INT8_MAX;
	static volatile uint64_t t72 = 8352992205953LLU;

	t72 = (x349|((x350-x351)%x352));

	if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x353 = 9U;
	uint8_t x354 = UINT8_MAX;
	volatile uint32_t x355 = 45488U;
	int64_t x356 = -22990LL;

	t73 = (x353|((x354-x355)%x356));

	if (t73 != 22223LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x357 = 528294176682481LLU;
	static volatile int32_t x358 = INT32_MIN;
	static int8_t x359 = INT8_MIN;
	uint8_t x360 = UINT8_MAX;
	volatile uint64_t t74 = 128504469195LLU;

	t74 = (x357|((x358-x359)%x360));

	if (t74 != 528294176682481LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x366 = -1;
	int16_t x367 = INT16_MIN;
	volatile int16_t x368 = INT16_MIN;
	int32_t t75 = 1;

	t75 = (x365|((x366-x367)%x368));

	if (t75 != -98305) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x369 = UINT64_MAX;
	uint16_t x370 = 1317U;
	int32_t x372 = -1;
	static uint64_t t76 = UINT64_MAX;

	t76 = (x369|((x370-x371)%x372));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x373 = -1;
	int16_t x374 = -165;
	int8_t x375 = 0;
	volatile int32_t t77 = -986880;

	t77 = (x373|((x374-x375)%x376));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x385 = -1;
	uint8_t x386 = 3U;
	volatile int32_t x387 = -3439;
	int64_t x388 = INT64_MIN;
	volatile int64_t t78 = -3875065LL;

	t78 = (x385|((x386-x387)%x388));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x389 = UINT16_MAX;
	volatile uint32_t x390 = UINT32_MAX;
	int16_t x391 = INT16_MAX;
	static volatile uint64_t x392 = 8454117247964018262LLU;
	uint64_t t79 = 5015444555871285384LLU;

	t79 = (x389|((x390-x391)%x392));

	if (t79 != 4294967295LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x393 = 47256055562952358LLU;
	static int16_t x395 = INT16_MIN;
	int16_t x396 = INT16_MIN;
	uint64_t t80 = 260082937384LLU;

	t80 = (x393|((x394-x395)%x396));

	if (t80 != 18446744073709551526LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x397 = 300U;
	static uint64_t x398 = UINT64_MAX;
	int16_t x399 = INT16_MIN;
	static int32_t x400 = -50082;
	uint64_t t81 = 34LLU;

	t81 = (x397|((x398-x399)%x400));

	if (t81 != 32767LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x405 = INT16_MIN;
	uint32_t x407 = UINT32_MAX;
	int32_t x408 = INT32_MAX;
	volatile uint32_t t82 = 242160U;

	t82 = (x405|((x406-x407)%x408));

	if (t82 != 4294934533U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x409 = 11U;
	int16_t x410 = -1;
	int32_t x411 = -8854;
	uint16_t x412 = UINT16_MAX;
	static int32_t t83 = -60334584;

	t83 = (x409|((x410-x411)%x412));

	if (t83 != 8863) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x413 = 198769909U;
	int32_t x414 = -1;
	int64_t x416 = 604319334LL;
	static volatile int64_t t84 = -4621LL;

	t84 = (x413|((x414-x415)%x416));

	if (t84 != 198769909LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x417 = INT32_MIN;
	int16_t x418 = -1;
	uint8_t x419 = 31U;
	volatile int32_t x420 = INT32_MIN;
	volatile int32_t t85 = -115942;

	t85 = (x417|((x418-x419)%x420));

	if (t85 != -32) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x421 = INT16_MIN;
	volatile int16_t x423 = INT16_MIN;
	uint32_t x424 = 6160101U;
	int64_t t86 = -11054LL;

	t86 = (x421|((x422-x423)%x424));

	if (t86 != -9626LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x425 = INT16_MIN;
	int64_t x426 = -1LL;
	static int64_t x427 = -1LL;
	int64_t x428 = -74735516486815198LL;
	static int64_t t87 = 245LL;

	t87 = (x425|((x426-x427)%x428));

	if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x429 = -1LL;
	int64_t x430 = -1LL;
	uint8_t x431 = 6U;

	t88 = (x429|((x430-x431)%x432));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x433 = -1;
	volatile int8_t x434 = INT8_MAX;
	static volatile int32_t x435 = -1;
	static volatile int8_t x436 = INT8_MIN;
	int32_t t89 = 206022114;

	t89 = (x433|((x434-x435)%x436));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x437 = 1801;
	int64_t x438 = -1LL;
	static volatile int32_t x439 = 25;
	volatile int8_t x440 = INT8_MIN;
	volatile int64_t t90 = 304714437308852LL;

	t90 = (x437|((x438-x439)%x440));

	if (t90 != -17LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x441 = 1U;
	static uint16_t x442 = 7U;
	volatile int8_t x443 = -1;
	static uint32_t x444 = 31U;
	static volatile uint32_t t91 = 58U;

	t91 = (x441|((x442-x443)%x444));

	if (t91 != 9U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x445 = INT64_MIN;
	volatile int8_t x448 = 8;
	volatile int64_t t92 = INT64_MIN;

	t92 = (x445|((x446-x447)%x448));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x449 = INT16_MIN;
	volatile int32_t x450 = INT32_MIN;

	t93 = (x449|((x450-x451)%x452));

	if (t93 != -32640LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x454 = 16204U;
	int8_t x455 = INT8_MAX;
	uint32_t x456 = UINT32_MAX;
	volatile uint32_t t94 = 1024342U;

	t94 = (x453|((x454-x455)%x456));

	if (t94 != 16079U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x457 = 12570U;
	static int32_t x458 = 326951763;
	int64_t x459 = 603LL;
	volatile uint8_t x460 = UINT8_MAX;
	static volatile int64_t t95 = -843720012LL;

	t95 = (x457|((x458-x459)%x460));

	if (t95 != 12667LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x465 = 1825U;
	uint32_t x466 = UINT32_MAX;
	uint32_t x467 = 240766U;
	uint8_t x468 = UINT8_MAX;
	volatile uint32_t t96 = 2193U;

	t96 = (x465|((x466-x467)%x468));

	if (t96 != 2033U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x469 = UINT8_MAX;
	static uint16_t x470 = 2U;
	static volatile int32_t t97 = 9307;

	t97 = (x469|((x470-x471)%x472));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x473 = UINT8_MAX;
	uint16_t x474 = 1U;
	int16_t x476 = INT16_MIN;

	t98 = (x473|((x474-x475)%x476));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x477 = INT8_MAX;
	int64_t t99 = -1LL;

	t99 = (x477|((x478-x479)%x480));

	if (t99 != 127LL) { NG(); } else { ; }
	
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

