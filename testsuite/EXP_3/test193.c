#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x9 = 2U;
static int32_t x17 = INT32_MIN;
int64_t x27 = -1LL;
static volatile uint16_t x29 = 5115U;
uint8_t x47 = 2U;
uint16_t x48 = 15398U;
int16_t x53 = 618;
static int16_t x54 = INT16_MIN;
int8_t x72 = INT8_MIN;
int16_t x89 = INT16_MIN;
uint32_t x106 = 245366U;
int8_t x107 = INT8_MIN;
static int32_t x120 = INT32_MIN;
static volatile uint32_t x130 = 123U;
volatile int64_t x135 = 889379700LL;
static volatile int64_t t22 = -62239969LL;
volatile int16_t x138 = INT16_MIN;
volatile uint16_t x143 = UINT16_MAX;
int8_t x146 = INT8_MIN;
int8_t x155 = INT8_MIN;
int16_t x175 = INT16_MIN;
static uint8_t x178 = UINT8_MAX;
int8_t x191 = 39;
uint16_t x198 = 20737U;
uint64_t t36 = 3LLU;
volatile int32_t t39 = -2724982;
static int64_t x217 = -1LL;
static volatile int64_t t40 = -30554118478LL;
uint32_t x223 = UINT32_MAX;
static int32_t t45 = -1;
volatile int64_t t46 = -14454243LL;
uint8_t x263 = 1U;
int64_t t49 = INT64_MIN;
int64_t x267 = -1LL;
int64_t x273 = INT64_MAX;
int32_t x276 = INT32_MIN;
volatile uint64_t x287 = 331386542891LLU;
int32_t t55 = 7;
uint16_t x303 = 71U;
uint32_t x304 = UINT32_MAX;
uint16_t x305 = UINT16_MAX;
uint16_t x307 = 9U;
int16_t x308 = -1;
int8_t x310 = INT8_MIN;
int16_t x313 = -1;
volatile uint16_t x315 = 270U;
volatile int64_t t62 = 84LL;
static int8_t x324 = INT8_MAX;
uint64_t x328 = 12LLU;
int16_t x331 = INT16_MIN;
int8_t x344 = INT8_MIN;
uint8_t x351 = UINT8_MAX;
int16_t x355 = INT16_MIN;
volatile int16_t x357 = INT16_MIN;
int8_t x358 = INT8_MIN;
int32_t x380 = -162857611;
volatile uint8_t x382 = 50U;
int64_t x388 = INT64_MAX;
uint32_t x392 = 20744U;
int64_t t77 = 6506677150544265LL;
static int32_t x404 = INT32_MIN;
uint32_t x408 = UINT32_MAX;
static volatile int8_t x420 = -1;
volatile int32_t x422 = -1;
static int32_t x424 = INT32_MAX;
int64_t x429 = INT64_MIN;
uint64_t x443 = 190020561357391LLU;
uint64_t t88 = 432690791LLU;
volatile int8_t x455 = -1;
uint8_t x466 = 5U;
uint64_t x467 = 4521112384392LLU;
int8_t x481 = -1;
int32_t x483 = -1;
int64_t x484 = -1LL;
static volatile int64_t t94 = 927621570258855LL;
int32_t x488 = INT32_MIN;
uint64_t t95 = 31199554156205659LLU;


void f0(void) {
	static int32_t x1 = -1;
	uint16_t x2 = UINT16_MAX;
	int16_t x3 = -37;
	static int64_t x4 = -20638855335521LL;
	static volatile int64_t t0 = 1647272LL;

	t0 = ((x1-x2)&(x3-x4));

	if (t0 != 20638855331840LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -3;
	int16_t x6 = INT16_MAX;
	int32_t x7 = INT32_MIN;
	int64_t x8 = -3486LL;
	int64_t t1 = 0LL;

	t1 = ((x5-x6)&(x7-x8));

	if (t1 != -2147480162LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x10 = UINT8_MAX;
	int8_t x11 = 1;
	static uint8_t x12 = 0U;
	volatile int32_t t2 = 12831;

	t2 = ((x9-x10)&(x11-x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MIN;
	static uint32_t x19 = 2209U;
	volatile uint16_t x20 = 41U;
	volatile uint32_t t3 = 305U;

	t3 = ((x17-x18)&(x19-x20));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = 77333328;
	int16_t x26 = INT16_MIN;
	uint64_t x28 = 4008220LLU;
	uint64_t t4 = 125149LLU;

	t4 = ((x25-x26)&(x27-x28));

	if (t4 != 75530816LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x30 = -9;
	uint32_t x31 = 0U;
	int32_t x32 = INT32_MIN;
	volatile uint32_t t5 = 3504899U;

	t5 = ((x29-x30)&(x31-x32));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x41 = 0U;
	static int16_t x42 = INT16_MIN;
	uint64_t x43 = UINT64_MAX;
	uint16_t x44 = 11337U;
	uint64_t t6 = 65610345068LLU;

	t6 = ((x41-x42)&(x43-x44));

	if (t6 != 32768LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = INT8_MIN;
	int8_t x46 = INT8_MIN;
	static int32_t t7 = 5066;

	t7 = ((x45-x46)&(x47-x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = -1;
	int8_t x50 = INT8_MIN;
	int8_t x51 = INT8_MIN;
	static uint32_t x52 = UINT32_MAX;
	volatile uint32_t t8 = 3493934U;

	t8 = ((x49-x50)&(x51-x52));

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x55 = 72U;
	static int32_t x56 = 5;
	volatile int32_t t9 = 1;

	t9 = ((x53-x54)&(x55-x56));

	if (t9 != 66) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = 21;
	static int32_t x58 = -1;
	uint16_t x59 = 85U;
	static int16_t x60 = INT16_MIN;
	volatile int32_t t10 = 57;

	t10 = ((x57-x58)&(x59-x60));

	if (t10 != 20) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = INT16_MIN;
	static int16_t x62 = INT16_MAX;
	static int64_t x63 = -1LL;
	int64_t x64 = -1LL;
	int64_t t11 = 2529875390477110LL;

	t11 = ((x61-x62)&(x63-x64));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x65 = UINT64_MAX;
	int64_t x66 = INT64_MAX;
	volatile int32_t x67 = -1;
	static int8_t x68 = INT8_MIN;
	uint64_t t12 = 3379944114252920414LLU;

	t12 = ((x65-x66)&(x67-x68));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = INT8_MAX;
	uint32_t x70 = 17U;
	int8_t x71 = INT8_MAX;
	uint32_t t13 = 172U;

	t13 = ((x69-x70)&(x71-x72));

	if (t13 != 110U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x73 = -1;
	uint32_t x74 = 93266748U;
	volatile int64_t x75 = -1LL;
	int32_t x76 = 2;
	int64_t t14 = 0LL;

	t14 = ((x73-x74)&(x75-x76));

	if (t14 != 4201700545LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x81 = INT16_MAX;
	int32_t x82 = -1;
	int8_t x83 = INT8_MIN;
	int16_t x84 = INT16_MAX;
	static volatile int32_t t15 = 41977223;

	t15 = ((x81-x82)&(x83-x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x85 = 89754U;
	uint16_t x86 = 1U;
	int8_t x87 = INT8_MAX;
	uint32_t x88 = 1U;
	uint32_t t16 = 42232U;

	t16 = ((x85-x86)&(x87-x88));

	if (t16 != 24U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x90 = -1;
	uint32_t x91 = 190U;
	int16_t x92 = INT16_MAX;
	uint32_t t17 = 375440U;

	t17 = ((x89-x90)&(x91-x92));

	if (t17 != 4294934529U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x105 = 0;
	static int16_t x108 = INT16_MIN;
	uint32_t t18 = 6223512U;

	t18 = ((x105-x106)&(x107-x108));

	if (t18 != 16768U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = INT8_MIN;
	int32_t x110 = -329090;
	static int64_t x111 = 203461628141146LL;
	volatile uint16_t x112 = 3U;
	int64_t t19 = -113LL;

	t19 = ((x109-x110)&(x111-x112));

	if (t19 != 1026LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x117 = -1;
	static int16_t x118 = INT16_MIN;
	int16_t x119 = INT16_MIN;
	volatile int32_t t20 = 431;

	t20 = ((x117-x118)&(x119-x120));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x129 = UINT16_MAX;
	uint64_t x131 = UINT64_MAX;
	static int8_t x132 = INT8_MIN;
	uint64_t t21 = 405214649065974129LLU;

	t21 = ((x129-x130)&(x131-x132));

	if (t21 != 4LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x133 = 6516994U;
	static int64_t x134 = -215375570LL;
	uint32_t x136 = UINT32_MAX;

	t22 = ((x133-x134)&(x135-x136));

	if (t22 != 83938132LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x137 = INT16_MIN;
	volatile int32_t x139 = -357;
	uint16_t x140 = 3U;
	static volatile int32_t t23 = -39812323;

	t23 = ((x137-x138)&(x139-x140));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x141 = 1LL;
	static uint32_t x142 = 80194076U;
	int32_t x144 = INT32_MAX;
	int64_t t24 = -3136999LL;

	t24 = ((x141-x142)&(x143-x144));

	if (t24 != -2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x145 = INT64_MIN;
	int8_t x147 = INT8_MIN;
	volatile int16_t x148 = 5052;
	volatile int64_t t25 = -3779991LL;

	t25 = ((x145-x146)&(x147-x148));

	if (t25 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x149 = 23651;
	uint32_t x150 = 33612U;
	static int16_t x151 = -1068;
	static uint8_t x152 = 3U;
	static volatile uint32_t t26 = 6089U;

	t26 = ((x149-x150)&(x151-x152));

	if (t26 != 4294957329U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x153 = UINT64_MAX;
	int32_t x154 = INT32_MAX;
	int8_t x156 = -7;
	volatile uint64_t t27 = 12LLU;

	t27 = ((x153-x154)&(x155-x156));

	if (t27 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x157 = 35U;
	int16_t x158 = INT16_MAX;
	volatile int64_t x159 = INT64_MIN;
	uint64_t x160 = 2075185052LLU;
	uint64_t t28 = 396661813245427990LLU;

	t28 = ((x157-x158)&(x159-x160));

	if (t28 != 9223372034779578404LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x165 = INT8_MAX;
	int64_t x166 = INT64_MAX;
	uint8_t x167 = 1U;
	int8_t x168 = -1;
	volatile int64_t t29 = 967218486492LL;

	t29 = ((x165-x166)&(x167-x168));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x173 = -916;
	static int8_t x174 = INT8_MAX;
	static int64_t x176 = -1LL;
	static volatile int64_t t30 = 223917615871LL;

	t30 = ((x173-x174)&(x175-x176));

	if (t30 != -32767LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x177 = UINT16_MAX;
	uint32_t x179 = 10114U;
	uint8_t x180 = 38U;
	volatile uint32_t t31 = 392854U;

	t31 = ((x177-x178)&(x179-x180));

	if (t31 != 9984U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x181 = 1LL;
	volatile uint8_t x182 = 94U;
	int64_t x183 = -1LL;
	int8_t x184 = INT8_MAX;
	volatile int64_t t32 = -832301866LL;

	t32 = ((x181-x182)&(x183-x184));

	if (t32 != -128LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x185 = 7U;
	int8_t x186 = INT8_MIN;
	static uint32_t x187 = UINT32_MAX;
	static int16_t x188 = INT16_MAX;
	static uint32_t t33 = 5U;

	t33 = ((x185-x186)&(x187-x188));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x189 = INT16_MIN;
	uint8_t x190 = 2U;
	uint32_t x192 = UINT32_MAX;
	volatile uint32_t t34 = 12U;

	t34 = ((x189-x190)&(x191-x192));

	if (t34 != 40U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x193 = INT64_MIN;
	volatile int64_t x194 = INT64_MIN;
	int32_t x195 = 0;
	uint16_t x196 = UINT16_MAX;
	int64_t t35 = -30231603839LL;

	t35 = ((x193-x194)&(x195-x196));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x197 = 1753LLU;
	uint16_t x199 = 243U;
	uint16_t x200 = 1U;

	t36 = ((x197-x198)&(x199-x200));

	if (t36 != 208LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x201 = 153U;
	int16_t x202 = INT16_MAX;
	uint8_t x203 = 120U;
	volatile int32_t x204 = -47;
	int32_t t37 = -1002;

	t37 = ((x201-x202)&(x203-x204));

	if (t37 != 130) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x209 = -1;
	int32_t x210 = INT32_MIN;
	int8_t x211 = -1;
	int64_t x212 = -2839876955LL;
	static int64_t t38 = 1984LL;

	t38 = ((x209-x210)&(x211-x212));

	if (t38 != 692393306LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x213 = -1;
	static uint16_t x214 = 219U;
	volatile int16_t x215 = -1;
	int16_t x216 = 2537;

	t39 = ((x213-x214)&(x215-x216));

	if (t39 != -2556) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MIN;
	int8_t x220 = -1;

	t40 = ((x217-x218)&(x219-x220));

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x221 = 11701U;
	int64_t x222 = -1LL;
	static volatile int8_t x224 = INT8_MIN;
	volatile int64_t t41 = -55601LL;

	t41 = ((x221-x222)&(x223-x224));

	if (t41 != 54LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x229 = -1LL;
	static int32_t x230 = 6;
	uint64_t x231 = 1429254192LLU;
	static int8_t x232 = -1;
	volatile uint64_t t42 = 96019387609LLU;

	t42 = ((x229-x230)&(x231-x232));

	if (t42 != 1429254193LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x233 = INT32_MIN;
	uint32_t x234 = 336246834U;
	static volatile uint64_t x235 = 1714405799825017LLU;
	int32_t x236 = INT32_MIN;
	uint64_t t43 = 2070618985415383LLU;

	t43 = ((x233-x234)&(x235-x236));

	if (t43 != 548472392LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x237 = INT16_MIN;
	uint8_t x238 = UINT8_MAX;
	uint64_t x239 = 132020022377511593LLU;
	static int8_t x240 = -1;
	uint64_t t44 = 7627996940LLU;

	t44 = ((x237-x238)&(x239-x240));

	if (t44 != 132020022377478656LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x245 = 45;
	int32_t x246 = -51578081;
	static int16_t x247 = INT16_MIN;
	static uint8_t x248 = 2U;

	t45 = ((x245-x246)&(x247-x248));

	if (t45 != 51578126) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x249 = 282U;
	int64_t x250 = 272000773767785LL;
	int8_t x251 = INT8_MIN;
	uint32_t x252 = 10844U;

	t46 = ((x249-x250)&(x251-x252));

	if (t46 != 3800044576LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x253 = 109443;
	int32_t x254 = INT32_MAX;
	static volatile uint16_t x255 = 2U;
	int8_t x256 = INT8_MIN;
	static int32_t t47 = -240;

	t47 = ((x253-x254)&(x255-x256));

	if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x257 = 12692661U;
	static uint64_t x258 = 245573LLU;
	static volatile uint16_t x259 = 391U;
	volatile int16_t x260 = 0;
	volatile uint64_t t48 = 16002029956600471LLU;

	t48 = ((x257-x258)&(x259-x260));

	if (t48 != 256LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x261 = INT16_MAX;
	int64_t x262 = INT64_MAX;
	uint16_t x264 = UINT16_MAX;

	t49 = ((x261-x262)&(x263-x264));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x265 = 146;
	volatile int16_t x266 = INT16_MIN;
	uint64_t x268 = 1426LLU;
	uint64_t t50 = 820809594607862822LLU;

	t50 = ((x265-x266)&(x267-x268));

	if (t50 != 32768LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x269 = -594;
	int64_t x270 = INT64_MIN;
	uint8_t x271 = 13U;
	int8_t x272 = INT8_MIN;
	int64_t t51 = -4LL;

	t51 = ((x269-x270)&(x271-x272));

	if (t51 != 140LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x274 = INT16_MAX;
	int32_t x275 = INT32_MIN;
	int64_t t52 = -787107835LL;

	t52 = ((x273-x274)&(x275-x276));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = -1;
	uint8_t x283 = 2U;
	volatile uint8_t x284 = 5U;
	volatile int32_t t53 = 0;

	t53 = ((x281-x282)&(x283-x284));

	if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x285 = -271461920366662087LL;
	uint32_t x286 = 173542216U;
	volatile uint32_t x288 = 4U;
	uint64_t t54 = 31258801LLU;

	t54 = ((x285-x286)&(x287-x288));

	if (t54 != 274880348705LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x289 = UINT8_MAX;
	int32_t x290 = INT32_MAX;
	int8_t x291 = INT8_MIN;
	int16_t x292 = INT16_MIN;

	t55 = ((x289-x290)&(x291-x292));

	if (t55 != 256) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x293 = UINT8_MAX;
	int8_t x294 = INT8_MIN;
	int16_t x295 = 9;
	volatile int8_t x296 = INT8_MIN;
	int32_t t56 = -79547;

	t56 = ((x293-x294)&(x295-x296));

	if (t56 != 9) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x297 = INT64_MIN;
	static volatile int64_t x298 = INT64_MIN;
	uint16_t x299 = 7989U;
	int64_t x300 = 0LL;
	int64_t t57 = -808561LL;

	t57 = ((x297-x298)&(x299-x300));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x301 = 112;
	static volatile int64_t x302 = 134741523622LL;
	int64_t t58 = -179LL;

	t58 = ((x301-x302)&(x303-x304));

	if (t58 != 72LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x306 = UINT8_MAX;
	static volatile int32_t t59 = 2561;

	t59 = ((x305-x306)&(x307-x308));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x309 = INT8_MIN;
	int16_t x311 = INT16_MAX;
	uint64_t x312 = UINT64_MAX;
	static volatile uint64_t t60 = 117535LLU;

	t60 = ((x309-x310)&(x311-x312));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x314 = -1;
	int8_t x316 = INT8_MIN;
	int32_t t61 = -48035;

	t61 = ((x313-x314)&(x315-x316));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x317 = 3647;
	static int64_t x318 = -2015760697LL;
	volatile uint8_t x319 = 14U;
	int16_t x320 = INT16_MAX;

	t62 = ((x317-x318)&(x319-x320));

	if (t62 != 2015756296LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x321 = UINT8_MAX;
	volatile int64_t x322 = -1LL;
	int64_t x323 = -3190LL;
	int64_t t63 = 361942LL;

	t63 = ((x321-x322)&(x323-x324));

	if (t63 != 256LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x325 = 4U;
	uint64_t x326 = 277717LLU;
	uint32_t x327 = 316U;
	volatile uint64_t t64 = 29735304524LLU;

	t64 = ((x325-x326)&(x327-x328));

	if (t64 != 288LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x329 = -1184;
	uint8_t x330 = UINT8_MAX;
	int8_t x332 = INT8_MIN;
	volatile int32_t t65 = -122981;

	t65 = ((x329-x330)&(x331-x332));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x333 = UINT64_MAX;
	int8_t x334 = INT8_MIN;
	uint8_t x335 = 38U;
	int64_t x336 = 54946896834065LL;
	uint64_t t66 = 811328444064LLU;

	t66 = ((x333-x334)&(x335-x336));

	if (t66 != 21LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x337 = -1;
	int64_t x338 = INT64_MAX;
	uint16_t x339 = 0U;
	volatile int16_t x340 = INT16_MAX;
	volatile int64_t t67 = INT64_MIN;

	t67 = ((x337-x338)&(x339-x340));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x341 = -1;
	uint8_t x342 = 4U;
	uint16_t x343 = 294U;
	static int32_t t68 = 100;

	t68 = ((x341-x342)&(x343-x344));

	if (t68 != 418) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x345 = UINT8_MAX;
	int32_t x346 = 2;
	uint8_t x347 = 17U;
	volatile int8_t x348 = -25;
	volatile int32_t t69 = -2876;

	t69 = ((x345-x346)&(x347-x348));

	if (t69 != 40) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x349 = INT16_MAX;
	int16_t x350 = INT16_MIN;
	static int16_t x352 = INT16_MIN;
	int32_t t70 = 6;

	t70 = ((x349-x350)&(x351-x352));

	if (t70 != 33023) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x353 = UINT64_MAX;
	volatile uint16_t x354 = 3229U;
	int8_t x356 = INT8_MIN;
	uint64_t t71 = 2263958766502LLU;

	t71 = ((x353-x354)&(x355-x356));

	if (t71 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x359 = -1;
	static int8_t x360 = INT8_MIN;
	int32_t t72 = -26332617;

	t72 = ((x357-x358)&(x359-x360));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x373 = 1041031LL;
	uint64_t x374 = UINT64_MAX;
	volatile int64_t x375 = INT64_MIN;
	int32_t x376 = -352778;
	volatile uint64_t t73 = 35822413LLU;

	t73 = ((x373-x374)&(x375-x376));

	if (t73 != 352776LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x377 = 313159013U;
	int32_t x378 = -1;
	int8_t x379 = 15;
	volatile uint32_t t74 = 1089802181U;

	t74 = ((x377-x378)&(x379-x380));

	if (t74 != 10485762U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x381 = 1217LL;
	uint64_t x383 = 69360053LLU;
	int8_t x384 = -1;
	static uint64_t t75 = 2252LLU;

	t75 = ((x381-x382)&(x383-x384));

	if (t75 != 134LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x385 = INT16_MIN;
	int32_t x386 = 643518;
	volatile int64_t x387 = 404730LL;
	volatile int64_t t76 = 1LL;

	t76 = ((x385-x386)&(x387-x388));

	if (t76 != -9223372036854502334LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x389 = 2043039U;
	static int64_t x390 = -1LL;
	int16_t x391 = 1050;

	t77 = ((x389-x390)&(x391-x392));

	if (t77 != 2039808LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x393 = 10706745368480854LLU;
	static int16_t x394 = INT16_MIN;
	int8_t x395 = INT8_MAX;
	int64_t x396 = -859478361LL;
	static volatile uint64_t t78 = 12983890127LLU;

	t78 = ((x393-x394)&(x395-x396));

	if (t78 != 572524624LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x401 = INT16_MAX;
	int16_t x402 = -3;
	uint64_t x403 = UINT64_MAX;
	uint64_t t79 = 5LLU;

	t79 = ((x401-x402)&(x403-x404));

	if (t79 != 32770LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x405 = INT16_MAX;
	int64_t x406 = -179438423841600LL;
	volatile int8_t x407 = INT8_MIN;
	int64_t t80 = -164552967022LL;

	t80 = ((x405-x406)&(x407-x408));

	if (t80 != 3280182017LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x413 = 1870U;
	int32_t x414 = 1875889;
	static int32_t x415 = INT32_MAX;
	int32_t x416 = 16855283;
	volatile uint32_t t81 = 10U;

	t81 = ((x413-x414)&(x415-x416));

	if (t81 != 2128758540U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x417 = 409U;
	int32_t x418 = INT32_MIN;
	int32_t x419 = -610740;
	volatile uint32_t t82 = 3326894U;

	t82 = ((x417-x418)&(x419-x420));

	if (t82 != 2147483657U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x421 = -351838604260LL;
	static volatile int64_t x423 = 5LL;
	int64_t t83 = -5065480500LL;

	t83 = ((x421-x422)&(x423-x424));

	if (t83 != -352187318268LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x425 = 6U;
	uint16_t x426 = 615U;
	uint8_t x427 = 1U;
	int16_t x428 = INT16_MIN;
	volatile int32_t t84 = 0;

	t84 = ((x425-x426)&(x427-x428));

	if (t84 != 32769) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x430 = 16593765LLU;
	int64_t x431 = INT64_MIN;
	volatile uint64_t x432 = 20LLU;
	static uint64_t t85 = 37LLU;

	t85 = ((x429-x430)&(x431-x432));

	if (t85 != 9223372036838182024LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x433 = INT16_MIN;
	static int8_t x434 = -2;
	int16_t x435 = INT16_MAX;
	static int8_t x436 = INT8_MIN;
	int32_t t86 = -114416;

	t86 = ((x433-x434)&(x435-x436));

	if (t86 != 32770) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x437 = UINT16_MAX;
	int8_t x438 = INT8_MAX;
	static uint8_t x439 = 124U;
	int16_t x440 = -1;
	static int32_t t87 = 2616580;

	t87 = ((x437-x438)&(x439-x440));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x441 = 1;
	int64_t x442 = 296133488163LL;
	int8_t x444 = -1;

	t88 = ((x441-x442)&(x443-x444));

	if (t88 != 189743266594896LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x453 = -1027994117434942LL;
	uint32_t x454 = UINT32_MAX;
	uint8_t x456 = UINT8_MAX;
	int64_t t89 = 610LL;

	t89 = ((x453-x454)&(x455-x456));

	if (t89 != -1027998412402432LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x457 = INT8_MAX;
	int64_t x458 = -1LL;
	uint64_t x459 = 6895LLU;
	int8_t x460 = INT8_MIN;
	static uint64_t t90 = 483LLU;

	t90 = ((x457-x458)&(x459-x460));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x461 = INT16_MAX;
	uint16_t x462 = UINT16_MAX;
	static volatile int64_t x463 = -1LL;
	static uint16_t x464 = 691U;
	int64_t t91 = -5909964LL;

	t91 = ((x461-x462)&(x463-x464));

	if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x465 = 6U;
	int8_t x468 = INT8_MAX;
	uint64_t t92 = 362931LLU;

	t92 = ((x465-x466)&(x467-x468));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x473 = UINT8_MAX;
	uint16_t x474 = UINT16_MAX;
	int32_t x475 = INT32_MIN;
	static volatile int16_t x476 = INT16_MIN;
	int32_t t93 = INT32_MIN;

	t93 = ((x473-x474)&(x475-x476));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x482 = 0U;

	t94 = ((x481-x482)&(x483-x484));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x485 = UINT64_MAX;
	int64_t x486 = 527867920547618LL;
	static int32_t x487 = INT32_MIN;

	t95 = ((x485-x486)&(x487-x488));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x489 = -3;
	static int8_t x490 = INT8_MAX;
	uint8_t x491 = 1U;
	int8_t x492 = INT8_MIN;
	int32_t t96 = -456365666;

	t96 = ((x489-x490)&(x491-x492));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x493 = 6305640961LLU;
	static uint16_t x494 = UINT16_MAX;
	int32_t x495 = INT32_MIN;
	uint32_t x496 = UINT32_MAX;
	uint64_t t97 = 5210204890725542571LLU;

	t97 = ((x493-x494)&(x495-x496));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x497 = UINT64_MAX;
	static volatile int16_t x498 = 1;
	uint8_t x499 = 72U;
	volatile uint8_t x500 = 9U;
	volatile uint64_t t98 = 594LLU;

	t98 = ((x497-x498)&(x499-x500));

	if (t98 != 62LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x501 = INT64_MIN;
	int32_t x502 = -1;
	volatile uint16_t x503 = UINT16_MAX;
	uint8_t x504 = 3U;
	volatile int64_t t99 = -42LL;

	t99 = ((x501-x502)&(x503-x504));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

