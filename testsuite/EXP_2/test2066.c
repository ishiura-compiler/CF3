#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t t0 = UINT32_MAX;
volatile uint64_t x6 = UINT64_MAX;
static uint8_t x15 = 63U;
uint64_t x21 = 50LLU;
static volatile int32_t t6 = 14161;
volatile int16_t x56 = INT16_MIN;
int8_t x65 = INT8_MAX;
volatile uint64_t x77 = 1030288867LLU;
uint64_t t18 = 116LLU;
uint32_t x99 = 106627643U;
volatile uint64_t x107 = UINT64_MAX;
uint64_t x122 = 237497740249009007LLU;
int64_t x130 = INT64_MIN;
uint64_t x132 = 3042011895LLU;
volatile uint64_t t25 = 31745401LLU;
static int16_t x138 = -12067;
int32_t x140 = INT32_MAX;
static uint32_t x151 = 3U;
uint16_t x153 = 21U;
int64_t t33 = -186LL;
static int8_t x175 = INT8_MIN;
uint64_t t34 = 0LLU;
int8_t x179 = -1;
volatile int16_t x184 = -12488;
static int32_t t38 = -4124136;
volatile uint32_t x195 = UINT32_MAX;
static int16_t x212 = 11;
int32_t x217 = 1;
uint16_t x221 = 189U;
uint16_t x223 = UINT16_MAX;
int64_t x228 = -1LL;
uint64_t t47 = 0LLU;
int16_t x267 = -764;
int32_t x272 = INT32_MIN;
int16_t x275 = INT16_MAX;
uint8_t x277 = 3U;
static volatile int32_t x280 = INT32_MIN;
static uint16_t x285 = 7970U;
int8_t x288 = -1;
static volatile uint8_t x295 = 75U;
int64_t t56 = INT64_MAX;
volatile uint16_t x302 = 6781U;
int8_t x307 = -1;
int64_t x309 = -1LL;
uint8_t x318 = UINT8_MAX;
int16_t x319 = INT16_MIN;
int16_t x321 = INT16_MIN;
int16_t x324 = -1;
int8_t x326 = INT8_MAX;
uint32_t x327 = 1254U;
uint32_t t62 = 27542153U;
int64_t x338 = -1LL;
static volatile int8_t x340 = INT8_MIN;
static int64_t t64 = 1LL;
uint64_t x351 = 1804695615806219LLU;
volatile uint64_t t65 = 497230LLU;
int8_t x357 = INT8_MAX;
int8_t x361 = 0;
int64_t x363 = INT64_MIN;
volatile int64_t t68 = INT64_MAX;
int16_t x370 = -1;
int32_t x371 = -1;
static volatile int16_t x374 = -1011;
static uint32_t x375 = UINT32_MAX;
static uint16_t x383 = 2U;
volatile int32_t t71 = 5;
int64_t x391 = -16566345184LL;
int64_t x405 = 6043632119709011LL;
uint64_t x406 = 533769227241LLU;
static uint64_t t74 = 2957067863397616LLU;
int64_t x410 = -1LL;
static uint8_t x412 = UINT8_MAX;
int64_t t76 = -101032378879845015LL;
volatile int64_t x424 = -1LL;
uint64_t t78 = 30856218161LLU;
static int32_t x440 = INT32_MAX;
int32_t x445 = -1;
volatile uint64_t x484 = UINT64_MAX;
volatile uint64_t t87 = UINT64_MAX;
static int32_t x486 = 5925;
uint32_t t88 = 126U;
volatile uint32_t t89 = 3859U;
static int8_t x497 = 5;
int32_t x503 = -1;
volatile uint8_t x505 = 1U;
int64_t x508 = INT64_MIN;
int32_t x509 = -53988;
int64_t x522 = -1LL;
uint16_t x527 = 232U;
int8_t x530 = INT8_MAX;
volatile int32_t x545 = -2453822;
uint64_t x548 = UINT64_MAX;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	int32_t x2 = 122;
	static int16_t x3 = INT16_MAX;
	uint32_t x4 = UINT32_MAX;

	t0 = ((x1*(x2^x3))|x4);

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x7 = INT16_MAX;
	int16_t x8 = -1;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = ((x5*(x6^x7))|x8);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MAX;
	uint32_t x10 = UINT32_MAX;
	static volatile uint16_t x11 = 63U;
	int64_t x12 = 2523494078958853LL;
	int64_t t2 = -6463516LL;

	t2 = ((x9*(x10^x11))|x12);

	if (t2 != 2523495149858117LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 65395436U;
	uint32_t x14 = 334606266U;
	volatile uint32_t x16 = UINT32_MAX;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = ((x13*(x14^x15))|x16);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -27;
	int8_t x18 = -6;
	static volatile int16_t x19 = INT16_MIN;
	static volatile int32_t x20 = -1;
	int32_t t4 = 558076869;

	t4 = ((x17*(x18^x19))|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MIN;
	uint16_t x23 = 1U;
	static volatile uint16_t x24 = 894U;
	volatile uint64_t t5 = 11738988940324LLU;

	t5 = ((x21*(x22^x23))|x24);

	if (t5 != 18446743966335370110LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 11U;
	int8_t x26 = INT8_MIN;
	int16_t x27 = -1;
	volatile uint8_t x28 = 58U;

	t6 = ((x25*(x26^x27))|x28);

	if (t6 != 1407) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint16_t x30 = 12262U;
	static uint64_t x31 = 4353238LLU;
	uint32_t x32 = 52209U;
	static volatile uint64_t t7 = 24863543LLU;

	t7 = ((x29*(x30^x31))|x32);

	if (t7 != 52209LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -1;
	int16_t x34 = INT16_MIN;
	volatile uint8_t x35 = UINT8_MAX;
	volatile int64_t x36 = 3121914760225096915LL;
	volatile int64_t t8 = -300016503289LL;

	t8 = ((x33*(x34^x35))|x36);

	if (t8 != 3121914760225128403LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	volatile uint64_t x38 = 10302789755978LLU;
	int16_t x39 = -13608;
	int16_t x40 = -6;
	uint64_t t9 = 17295017LLU;

	t9 = ((x37*(x38^x39))|x40);

	if (t9 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x49 = INT16_MIN;
	int64_t x50 = -1LL;
	uint8_t x51 = 17U;
	volatile uint32_t x52 = 7525U;
	int64_t t10 = -375530LL;

	t10 = ((x49*(x50^x51))|x52);

	if (t10 != 597349LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = 62U;
	uint32_t x54 = 3458032U;
	uint64_t x55 = UINT64_MAX;
	volatile uint64_t t11 = 451904553137854747LLU;

	t11 = ((x53*(x54^x55))|x56);

	if (t11 != 18446744073709521826LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x61 = 12U;
	int64_t x62 = -1LL;
	int32_t x63 = INT32_MIN;
	volatile uint16_t x64 = UINT16_MAX;
	int64_t t12 = -43632879948LL;

	t12 = ((x61*(x62^x63))|x64);

	if (t12 != 25769803775LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x66 = UINT64_MAX;
	int16_t x67 = INT16_MIN;
	int64_t x68 = 22905LL;
	volatile uint64_t t13 = 47901534LLU;

	t13 = ((x65*(x66^x67))|x68);

	if (t13 != 4161529LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x69 = 24235265LLU;
	int64_t x70 = 102432317355945LL;
	uint16_t x71 = UINT16_MAX;
	int32_t x72 = INT32_MAX;
	static uint64_t t14 = 346020653622860LLU;

	t14 = ((x69*(x70^x71))|x72);

	if (t14 != 10610649119162630143LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = UINT32_MAX;
	uint64_t x74 = 3267653604176LLU;
	uint32_t x75 = 51U;
	volatile int8_t x76 = 13;
	static uint64_t t15 = 447LLU;

	t15 = ((x73*(x74^x75))|x76);

	if (t15 != 14939865387140574365LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x78 = INT64_MIN;
	static int32_t x79 = -1;
	volatile uint64_t x80 = 885LLU;
	uint64_t t16 = 34003537601588489LLU;

	t16 = ((x77*(x78^x79))|x80);

	if (t16 != 9223372035824487293LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = -11680;
	uint16_t x86 = UINT16_MAX;
	static uint8_t x87 = UINT8_MAX;
	volatile uint16_t x88 = 470U;
	int32_t t17 = -5595;

	t17 = ((x85*(x86^x87))|x88);

	if (t17 != -762469930) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = 17LLU;
	int8_t x94 = INT8_MIN;
	int64_t x95 = 2531391964306279798LL;
	static volatile int64_t x96 = INT64_MIN;

	t18 = ((x93*(x94^x95))|x96);

	if (t18 != 12306568827921900118LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x97 = 9530259LLU;
	int64_t x98 = INT64_MIN;
	int8_t x100 = -1;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = ((x97*(x98^x99))|x100);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x105 = UINT16_MAX;
	uint32_t x106 = 1720893U;
	uint32_t x108 = UINT32_MAX;
	volatile uint64_t t20 = 23798981853134LLU;

	t20 = ((x105*(x106^x107))|x108);

	if (t20 != 18446743962040401919LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x113 = INT8_MIN;
	int8_t x114 = INT8_MIN;
	uint64_t x115 = 39450228074LLU;
	int8_t x116 = INT8_MAX;
	uint64_t t21 = 1LLU;

	t21 = ((x113*(x114^x115))|x116);

	if (t21 != 5049629182847LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x117 = 3372076783LLU;
	static volatile uint32_t x118 = 319781U;
	volatile int32_t x119 = -212;
	static int16_t x120 = 1;
	uint64_t t22 = 18266452633LLU;

	t22 = ((x117*(x118^x119))|x120);

	if (t22 != 14481880468364019815LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x121 = INT64_MIN;
	int64_t x123 = 74318770732895865LL;
	int8_t x124 = INT8_MIN;
	uint64_t t23 = 5364312LLU;

	t23 = ((x121*(x122^x123))|x124);

	if (t23 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = INT16_MAX;
	static int64_t x126 = -615LL;
	int32_t x127 = 5618989;
	int16_t x128 = INT16_MAX;
	static int64_t t24 = 141558716470118667LL;

	t24 = ((x125*(x126^x127))|x128);

	if (t24 != -184135188481LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x129 = UINT64_MAX;
	static uint8_t x131 = UINT8_MAX;

	t25 = ((x129*(x130^x131))|x132);

	if (t25 != 9223372036854775799LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = -1;
	static int32_t x139 = INT32_MIN;
	int32_t t26 = 23615;

	t26 = ((x137*(x138^x139))|x140);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x141 = 1;
	int8_t x142 = INT8_MIN;
	int64_t x143 = 2616501927593233871LL;
	int8_t x144 = INT8_MIN;
	int64_t t27 = -172151943585LL;

	t27 = ((x141*(x142^x143))|x144);

	if (t27 != -49LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x149 = UINT16_MAX;
	int32_t x150 = -1;
	volatile uint8_t x152 = 117U;
	uint32_t t28 = 32671U;

	t28 = ((x149*(x150^x151))|x152);

	if (t28 != 4294705269U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x154 = UINT8_MAX;
	int16_t x155 = 0;
	static uint32_t x156 = 0U;
	volatile uint32_t t29 = 90U;

	t29 = ((x153*(x154^x155))|x156);

	if (t29 != 5355U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = -1;
	uint64_t x158 = UINT64_MAX;
	int8_t x159 = INT8_MIN;
	static int8_t x160 = INT8_MAX;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = ((x157*(x158^x159))|x160);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x161 = 0;
	int16_t x162 = -60;
	volatile int16_t x163 = INT16_MAX;
	static int32_t x164 = INT32_MAX;
	static volatile int32_t t31 = INT32_MAX;

	t31 = ((x161*(x162^x163))|x164);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x165 = INT16_MIN;
	int64_t x166 = 5623474721303LL;
	uint32_t x167 = 331333164U;
	volatile uint8_t x168 = 31U;
	int64_t t32 = 3227LL;

	t32 = ((x165*(x166^x167))|x168);

	if (t32 != -184261950717132769LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = 106577LL;
	int64_t x171 = 880330327624871LL;
	volatile int16_t x172 = INT16_MAX;

	t33 = ((x169*(x170^x171))|x172);

	if (t33 != -112682281941204993LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x173 = 0;
	static uint64_t x174 = 39931020587LLU;
	uint16_t x176 = 1U;

	t34 = ((x173*(x174^x175))|x176);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x177 = INT8_MIN;
	uint32_t x178 = 2091897U;
	int8_t x180 = INT8_MIN;
	uint32_t t35 = 212U;

	t35 = ((x177*(x178^x179))|x180);

	if (t35 != 4294967168U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x181 = 11U;
	static volatile int8_t x182 = INT8_MIN;
	volatile uint16_t x183 = 26U;
	int32_t t36 = 14436416;

	t36 = ((x181*(x182^x183))|x184);

	if (t36 != -66) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = INT16_MIN;
	int64_t x186 = 160LL;
	volatile uint16_t x187 = 27782U;
	int32_t x188 = INT32_MAX;
	static volatile int64_t t37 = 43LL;

	t37 = ((x185*(x186^x187))|x188);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x189 = INT8_MIN;
	static volatile int8_t x190 = 15;
	int8_t x191 = INT8_MIN;
	int8_t x192 = -1;

	t38 = ((x189*(x190^x191))|x192);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x193 = 2228;
	int64_t x194 = -1LL;
	static volatile uint64_t x196 = 2069521211109LLU;
	uint64_t t39 = 1448445869LLU;

	t39 = ((x193*(x194^x195))|x196);

	if (t39 != 18446735199654092517LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x197 = 59LLU;
	uint64_t x198 = 1523458LLU;
	volatile int8_t x199 = -1;
	int64_t x200 = INT64_MIN;
	volatile uint64_t t40 = 3438LLU;

	t40 = ((x197*(x198^x199))|x200);

	if (t40 != 18446744073619667535LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x201 = 1;
	int8_t x202 = INT8_MAX;
	static uint32_t x203 = 0U;
	volatile int8_t x204 = INT8_MAX;
	volatile uint32_t t41 = 1804U;

	t41 = ((x201*(x202^x203))|x204);

	if (t41 != 127U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x209 = 21;
	uint8_t x210 = 1U;
	static volatile uint64_t x211 = 237357869LLU;
	volatile uint64_t t42 = 63LLU;

	t42 = ((x209*(x210^x211))|x212);

	if (t42 != 4984515231LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x213 = 30;
	uint64_t x214 = 146LLU;
	static int8_t x215 = INT8_MIN;
	volatile uint32_t x216 = 46880U;
	volatile uint64_t t43 = 9299LLU;

	t43 = ((x213*(x214^x215))|x216);

	if (t43 != 18446744073709549372LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x218 = INT16_MIN;
	int16_t x219 = INT16_MAX;
	static int8_t x220 = INT8_MIN;
	static volatile int32_t t44 = 396800348;

	t44 = ((x217*(x218^x219))|x220);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x222 = UINT64_MAX;
	int16_t x224 = -1;
	uint64_t t45 = UINT64_MAX;

	t45 = ((x221*(x222^x223))|x224);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x225 = UINT16_MAX;
	int8_t x226 = -1;
	uint64_t x227 = 182244159485LLU;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = ((x225*(x226^x227))|x228);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x233 = -1LL;
	int64_t x234 = INT64_MAX;
	uint64_t x235 = UINT64_MAX;
	uint32_t x236 = UINT32_MAX;

	t47 = ((x233*(x234^x235))|x236);

	if (t47 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x245 = INT16_MIN;
	uint32_t x246 = 2U;
	uint16_t x247 = 6U;
	int16_t x248 = INT16_MIN;
	static uint32_t t48 = 2215513U;

	t48 = ((x245*(x246^x247))|x248);

	if (t48 != 4294934528U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x261 = -1;
	int64_t x262 = INT64_MIN;
	uint8_t x263 = UINT8_MAX;
	volatile uint32_t x264 = 1249938U;
	static int64_t t49 = -1857511LL;

	t49 = ((x261*(x262^x263))|x264);

	if (t49 != 9223372036854775699LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x265 = INT16_MAX;
	int8_t x266 = 0;
	uint16_t x268 = 22U;
	static volatile int32_t t50 = 34;

	t50 = ((x265*(x266^x267))|x268);

	if (t50 != -25033986) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = INT16_MIN;
	uint32_t x271 = 29U;
	uint32_t t51 = 96495334U;

	t51 = ((x269*(x270^x271))|x272);

	if (t51 != 3220275200U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x273 = UINT16_MAX;
	uint16_t x274 = 1801U;
	static uint8_t x276 = UINT8_MAX;
	int32_t t52 = -272550264;

	t52 = ((x273*(x274^x275))|x276);

	if (t52 != 2029357055) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x278 = 4U;
	int16_t x279 = 2;
	static volatile int32_t t53 = -4;

	t53 = ((x277*(x278^x279))|x280);

	if (t53 != -2147483630) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x281 = -7;
	static int32_t x282 = -180;
	static int8_t x283 = INT8_MAX;
	static int8_t x284 = INT8_MIN;
	int32_t t54 = 52529;

	t54 = ((x281*(x282^x283))|x284);

	if (t54 != -101) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x286 = 7LL;
	volatile int64_t x287 = -1448814313LL;
	int64_t t55 = 62401751932545LL;

	t55 = ((x285*(x286^x287))|x288);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x293 = UINT8_MAX;
	uint32_t x294 = UINT32_MAX;
	static volatile int64_t x296 = INT64_MAX;

	t56 = ((x293*(x294^x295))|x296);

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x301 = -1;
	int64_t x303 = INT64_MAX;
	int64_t x304 = -1LL;
	volatile int64_t t57 = -5388337343LL;

	t57 = ((x301*(x302^x303))|x304);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x305 = INT32_MIN;
	volatile uint32_t x306 = 810U;
	static uint16_t x308 = 1322U;
	volatile uint32_t t58 = 23357481U;

	t58 = ((x305*(x306^x307))|x308);

	if (t58 != 2147484970U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x310 = 1063U;
	int8_t x311 = -3;
	volatile int32_t x312 = INT32_MAX;
	volatile int64_t t59 = -51LL;

	t59 = ((x309*(x310^x311))|x312);

	if (t59 != 2147483647LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x317 = 13301U;
	int64_t x320 = -1LL;
	static int64_t t60 = 71162LL;

	t60 = ((x317*(x318^x319))|x320);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x322 = 1486105078689903LLU;
	int32_t x323 = INT32_MIN;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = ((x321*(x322^x323))|x324);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x325 = INT16_MIN;
	int16_t x328 = -213;

	t62 = ((x325*(x326^x327))|x328);

	if (t62 != 4294967083U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x329 = 1033LL;
	uint8_t x330 = 17U;
	uint64_t x331 = 25896860017759LLU;
	int8_t x332 = -1;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = ((x329*(x330^x331))|x332);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x337 = UINT8_MAX;
	int32_t x339 = INT32_MIN;

	t64 = ((x337*(x338^x339))|x340);

	if (t64 != -127LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x349 = 1U;
	int64_t x350 = INT64_MIN;
	volatile int16_t x352 = 842;

	t65 = ((x349*(x350^x351))|x352);

	if (t65 != 9225176732470582091LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x358 = -1LL;
	int64_t x359 = 29509496397762LL;
	int32_t x360 = 43;
	volatile int64_t t66 = 17475940680742942LL;

	t66 = ((x357*(x358^x359))|x360);

	if (t66 != -3747706042515861LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x362 = INT32_MIN;
	int32_t x364 = -1;
	volatile int64_t t67 = -11LL;

	t67 = ((x361*(x362^x363))|x364);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x365 = -1;
	static volatile int8_t x366 = INT8_MIN;
	volatile int8_t x367 = 0;
	volatile int64_t x368 = INT64_MAX;

	t68 = ((x365*(x366^x367))|x368);

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x369 = 7;
	int16_t x372 = INT16_MIN;
	int32_t t69 = -245893104;

	t69 = ((x369*(x370^x371))|x372);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x373 = -1;
	static int8_t x376 = 0;
	uint32_t t70 = 6280685U;

	t70 = ((x373*(x374^x375))|x376);

	if (t70 != 4294966286U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x381 = INT16_MIN;
	uint8_t x382 = UINT8_MAX;
	int8_t x384 = INT8_MIN;

	t71 = ((x381*(x382^x383))|x384);

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x389 = INT8_MIN;
	uint64_t x390 = 61433183927LLU;
	uint32_t x392 = 75U;
	uint64_t t72 = 88738611LLU;

	t72 = ((x389*(x390^x391))|x392);

	if (t72 != 7470807364811LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x397 = INT64_MIN;
	volatile uint64_t x398 = UINT64_MAX;
	uint64_t x399 = 23095652LLU;
	static int8_t x400 = 1;
	uint64_t t73 = 11LLU;

	t73 = ((x397*(x398^x399))|x400);

	if (t73 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x407 = 38U;
	volatile int64_t x408 = -1304267884204LL;

	t74 = ((x405*(x406^x407))|x408);

	if (t74 != 18446743929693634397LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x409 = 4U;
	uint16_t x411 = UINT16_MAX;
	int64_t t75 = -362242113998LL;

	t75 = ((x409*(x410^x411))|x412);

	if (t75 != -261889LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x417 = INT8_MIN;
	uint16_t x418 = UINT16_MAX;
	volatile int8_t x419 = -1;
	volatile int64_t x420 = -1LL;

	t76 = ((x417*(x418^x419))|x420);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x421 = INT32_MIN;
	int16_t x422 = -1;
	volatile int8_t x423 = -1;
	int64_t t77 = 164383436LL;

	t77 = ((x421*(x422^x423))|x424);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x429 = 134;
	int16_t x430 = INT16_MAX;
	static uint64_t x431 = 50585315672677LLU;
	uint64_t x432 = 393420LLU;

	t78 = ((x429*(x430^x431))|x432);

	if (t78 != 6778432304627420LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x433 = -7974;
	int16_t x434 = -22;
	int16_t x435 = -1;
	int16_t x436 = INT16_MIN;
	int32_t t79 = -12497187;

	t79 = ((x433*(x434^x435))|x436);

	if (t79 != -3614) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x437 = -1;
	int32_t x438 = 2181;
	int8_t x439 = INT8_MIN;
	static int32_t t80 = INT32_MAX;

	t80 = ((x437*(x438^x439))|x440);

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x441 = -1LL;
	static volatile int16_t x442 = INT16_MIN;
	volatile int32_t x443 = 24473277;
	int8_t x444 = -1;
	volatile int64_t t81 = -730171887313705951LL;

	t81 = ((x441*(x442^x443))|x444);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x446 = -925150007709LL;
	int16_t x447 = 5;
	static uint32_t x448 = 2U;
	volatile int64_t t82 = 7033LL;

	t82 = ((x445*(x446^x447))|x448);

	if (t82 != 925150007706LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x449 = UINT8_MAX;
	uint32_t x450 = 4U;
	int16_t x451 = INT16_MAX;
	int64_t x452 = INT64_MAX;
	int64_t t83 = INT64_MAX;

	t83 = ((x449*(x450^x451))|x452);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x457 = INT16_MIN;
	int16_t x458 = -2;
	int8_t x459 = INT8_MIN;
	static int8_t x460 = INT8_MAX;
	int32_t t84 = 297;

	t84 = ((x457*(x458^x459))|x460);

	if (t84 != -4128641) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x465 = 7;
	static int8_t x466 = 2;
	uint8_t x467 = UINT8_MAX;
	int16_t x468 = INT16_MIN;
	static int32_t t85 = 56;

	t85 = ((x465*(x466^x467))|x468);

	if (t85 != -30997) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x469 = INT16_MAX;
	volatile uint8_t x470 = 1U;
	static volatile uint8_t x471 = 6U;
	int16_t x472 = -1;
	static int32_t t86 = -27126715;

	t86 = ((x469*(x470^x471))|x472);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x481 = -1LL;
	int16_t x482 = 636;
	int16_t x483 = -1;

	t87 = ((x481*(x482^x483))|x484);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x485 = 760U;
	int32_t x487 = INT32_MIN;
	uint16_t x488 = 18U;

	t88 = ((x485*(x486^x487))|x488);

	if (t88 != 4503002U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x489 = 427346U;
	volatile uint32_t x490 = 70U;
	int8_t x491 = 13;
	int16_t x492 = INT16_MIN;

	t89 = ((x489*(x490^x491))|x492);

	if (t89 != 4294938374U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x498 = -1;
	int8_t x499 = INT8_MIN;
	volatile int32_t x500 = INT32_MIN;
	int32_t t90 = -14480118;

	t90 = ((x497*(x498^x499))|x500);

	if (t90 != -2147483013) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x501 = -23212355657195LL;
	int8_t x502 = -1;
	int16_t x504 = -2590;
	static int64_t t91 = 6266227136134838LL;

	t91 = ((x501*(x502^x503))|x504);

	if (t91 != -2590LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x506 = 29109337151381LLU;
	volatile int32_t x507 = -1;
	static volatile uint64_t t92 = 1LLU;

	t92 = ((x505*(x506^x507))|x508);

	if (t92 != 18446714964372400234LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x510 = UINT64_MAX;
	uint32_t x511 = 8922753U;
	static volatile uint64_t x512 = UINT64_MAX;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = ((x509*(x510^x511))|x512);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x521 = 195;
	int64_t x523 = -1LL;
	uint8_t x524 = UINT8_MAX;
	volatile int64_t t94 = 3070LL;

	t94 = ((x521*(x522^x523))|x524);

	if (t94 != 255LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x525 = 5;
	volatile int32_t x526 = -1;
	volatile uint8_t x528 = 6U;
	volatile int32_t t95 = -2390;

	t95 = ((x525*(x526^x527))|x528);

	if (t95 != -1161) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x529 = -1;
	static volatile int32_t x531 = INT32_MIN;
	static int64_t x532 = INT64_MIN;
	int64_t t96 = 15917478581092LL;

	t96 = ((x529*(x530^x531))|x532);

	if (t96 != -9223372034707292287LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x533 = 230555LLU;
	int16_t x534 = 140;
	uint16_t x535 = UINT16_MAX;
	uint16_t x536 = 19U;
	uint64_t t97 = 21LLU;

	t97 = ((x533*(x534^x535))|x536);

	if (t97 != 15077144243LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x541 = INT16_MAX;
	int16_t x542 = INT16_MIN;
	uint8_t x543 = UINT8_MAX;
	uint16_t x544 = 16957U;
	static volatile int32_t t98 = -3623823;

	t98 = ((x541*(x542^x543))|x544);

	if (t98 != -1065353411) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x546 = -1;
	volatile int64_t x547 = -3630LL;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = ((x545*(x546^x547))|x548);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

