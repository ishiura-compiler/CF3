#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 4603854989466236LLU;
int8_t x9 = 0;
uint32_t x14 = 64558151U;
static int16_t x20 = INT16_MAX;
volatile int64_t t4 = 6607237LL;
volatile int8_t x27 = INT8_MIN;
volatile int64_t x39 = INT64_MIN;
uint16_t x41 = 39U;
static uint32_t x44 = 14683U;
static int32_t x65 = 88812430;
volatile int32_t t11 = 9225622;
int64_t x81 = -1LL;
int8_t x82 = INT8_MIN;
volatile int64_t t14 = 2351929246LL;
uint16_t x91 = 4U;
int32_t x100 = INT32_MIN;
int32_t x101 = -1;
uint64_t x122 = 1293530LLU;
int16_t x126 = INT16_MAX;
static uint64_t x133 = 1716506494LLU;
volatile uint64_t x135 = UINT64_MAX;
int32_t t24 = 11499;
static int64_t x160 = -215LL;
uint32_t x164 = UINT32_MAX;
int8_t x166 = INT8_MIN;
static int64_t x172 = -219976818594844LL;
uint64_t x177 = UINT64_MAX;
volatile int32_t x178 = -1;
static volatile uint8_t x179 = 10U;
uint64_t x182 = 1827038705858403102LLU;
int8_t x184 = -1;
int64_t x196 = 107931720811129LL;
volatile int16_t x202 = INT16_MIN;
int32_t x203 = INT32_MIN;
static int64_t t35 = 1011073241400LL;
int64_t x206 = INT64_MIN;
int32_t x222 = -12441;
int32_t x223 = 238970960;
static int16_t x232 = 30;
volatile int64_t x234 = INT64_MIN;
int16_t x248 = -1;
int32_t x252 = -69771;
uint8_t x254 = 1U;
uint32_t x256 = UINT32_MAX;
static int64_t x258 = -202264757265710239LL;
uint64_t x267 = UINT64_MAX;
static int64_t x281 = INT64_MIN;
int64_t x289 = -1LL;
static uint16_t x290 = 284U;
int64_t t54 = 308LL;
int16_t x300 = -8312;
int8_t x303 = 58;
int8_t x318 = INT8_MIN;
uint32_t x333 = UINT32_MAX;
int16_t x339 = INT16_MIN;
uint16_t x342 = 122U;
int64_t x347 = INT64_MIN;
static int32_t x348 = INT32_MIN;
uint64_t t67 = 7543146914481LLU;
int16_t x369 = INT16_MIN;
volatile int32_t x384 = -57557;
static volatile int64_t t69 = -535753889LL;
volatile uint32_t x391 = 3356U;
static int8_t x393 = 0;
static int64_t x396 = 642533546085LL;
static volatile uint64_t t71 = 4061LLU;
int16_t x397 = INT16_MAX;
static int8_t x400 = -1;
static volatile int8_t x411 = INT8_MIN;
int64_t x415 = INT64_MIN;
int8_t x416 = INT8_MIN;
static int64_t t79 = 15905653LL;
uint16_t x430 = 8129U;
static int64_t x433 = -1LL;
int32_t x434 = INT32_MAX;
static int8_t x435 = INT8_MIN;
volatile uint8_t x442 = 32U;
static int8_t x443 = 1;
static uint64_t x451 = 101306717241707LLU;
static volatile int16_t x463 = -1;
static int8_t x470 = -22;
int16_t x471 = -1;
static volatile int64_t x472 = 1952460936937LL;
volatile int8_t x473 = INT8_MIN;
volatile uint64_t x476 = 6029LLU;
int64_t x479 = INT64_MIN;
static volatile int32_t t91 = 117619152;
int32_t t92 = 88;
static int8_t x501 = INT8_MIN;
int32_t x507 = -1;
static int16_t x509 = INT16_MIN;
uint32_t x511 = 29698656U;


void f0(void) {
	volatile int16_t x1 = 15708;
	uint16_t x2 = UINT16_MAX;
	static uint8_t x3 = 15U;
	uint64_t t0 = 5LLU;

	t0 = ((x1-x2)/(x3&x4));

	if (t0 != 1537228672809125149LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = -1;
	int8_t x11 = INT8_MAX;
	volatile int32_t x12 = 563873668;
	int32_t t1 = 98752;

	t1 = ((x9-x10)/(x11&x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	uint16_t x15 = 159U;
	uint8_t x16 = 126U;
	volatile uint32_t t2 = 24U;

	t2 = ((x13-x14)/(x15&x16));

	if (t2 != 141013638U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = INT8_MIN;
	uint64_t x18 = UINT64_MAX;
	volatile int32_t x19 = -1;
	uint64_t t3 = 19494343223105LLU;

	t3 = ((x17-x18)/(x19&x20));

	if (t3 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = INT32_MIN;
	int64_t x22 = -1LL;
	volatile int64_t x23 = INT64_MIN;
	int32_t x24 = -427555964;

	t4 = ((x21-x22)/(x23&x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 4128U;
	int8_t x26 = INT8_MAX;
	static volatile int16_t x28 = INT16_MIN;
	int32_t t5 = 13;

	t5 = ((x25-x26)/(x27&x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x37 = INT16_MIN;
	uint64_t x38 = UINT64_MAX;
	int32_t x40 = INT32_MIN;
	static uint64_t t6 = 252863377975LLU;

	t6 = ((x37-x38)/(x39&x40));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x42 = -1;
	int16_t x43 = INT16_MAX;
	uint32_t t7 = 399107580U;

	t7 = ((x41-x42)/(x43&x44));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x45 = -21;
	volatile int8_t x46 = INT8_MAX;
	int32_t x47 = -1;
	int16_t x48 = INT16_MAX;
	static int32_t t8 = 50654;

	t8 = ((x45-x46)/(x47&x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = 11;
	volatile uint16_t x50 = 4251U;
	int8_t x51 = -30;
	static int8_t x52 = INT8_MAX;
	volatile int32_t t9 = 131;

	t9 = ((x49-x50)/(x51&x52));

	if (t9 != -43) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -1;
	int64_t x54 = -1LL;
	int32_t x55 = 41;
	static volatile int8_t x56 = -1;
	int64_t t10 = -3LL;

	t10 = ((x53-x54)/(x55&x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x66 = -236542868;
	int32_t x67 = 30943;
	volatile int32_t x68 = -10133;

	t11 = ((x65-x66)/(x67&x68));

	if (t11 != 14394) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x69 = -1;
	int16_t x70 = -1;
	static int32_t x71 = -2822;
	static int16_t x72 = INT16_MIN;
	int32_t t12 = -1;

	t12 = ((x69-x70)/(x71&x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = -1LL;
	static uint16_t x78 = 450U;
	volatile int8_t x79 = INT8_MAX;
	int32_t x80 = -281443;
	static volatile int64_t t13 = -1850LL;

	t13 = ((x77-x78)/(x79&x80));

	if (t13 != -15LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x83 = INT16_MIN;
	volatile int32_t x84 = -49;

	t14 = ((x81-x82)/(x83&x84));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x85 = INT32_MIN;
	static int64_t x86 = -16602510316LL;
	int8_t x87 = INT8_MIN;
	int32_t x88 = INT32_MIN;
	volatile int64_t t15 = -18663409776964480LL;

	t15 = ((x85-x86)/(x87&x88));

	if (t15 != -6LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x89 = INT32_MIN;
	static int64_t x90 = -123LL;
	int8_t x92 = -1;
	static int64_t t16 = -196904LL;

	t16 = ((x89-x90)/(x91&x92));

	if (t16 != -536870881LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x93 = 210U;
	uint32_t x94 = 298U;
	volatile uint32_t x95 = 72288738U;
	uint64_t x96 = 2984LLU;
	static volatile uint64_t t17 = 3479686200528557LLU;

	t17 = ((x93-x94)/(x95&x96));

	if (t17 != 1743087LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x97 = -1LL;
	volatile int32_t x98 = -1;
	int16_t x99 = INT16_MIN;
	int64_t t18 = 4LL;

	t18 = ((x97-x98)/(x99&x100));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x102 = INT32_MIN;
	uint64_t x103 = 9LLU;
	int32_t x104 = 24336267;
	volatile uint64_t t19 = 23979448058483LLU;

	t19 = ((x101-x102)/(x103&x104));

	if (t19 != 238609294LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x121 = -1;
	int8_t x123 = INT8_MIN;
	volatile int16_t x124 = INT16_MAX;
	uint64_t t20 = 2060133LLU;

	t20 = ((x121-x122)/(x123&x124));

	if (t20 != 565157600297434LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x125 = -1;
	int16_t x127 = -1;
	static int8_t x128 = INT8_MAX;
	int32_t t21 = 60494553;

	t21 = ((x125-x126)/(x127&x128));

	if (t21 != -258) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x134 = INT32_MIN;
	uint32_t x136 = UINT32_MAX;
	volatile uint64_t t22 = 13075183LLU;

	t22 = ((x133-x134)/(x135&x136));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x145 = INT64_MIN;
	int8_t x146 = INT8_MIN;
	int64_t x147 = 170621477874LL;
	volatile int32_t x148 = INT32_MIN;
	volatile int64_t t23 = 19227626942393301LL;

	t23 = ((x145-x146)/(x147&x148));

	if (t23 != -54366674LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	int16_t x151 = INT16_MIN;
	static int16_t x152 = -1;

	t24 = ((x149-x150)/(x151&x152));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x157 = 0U;
	static volatile int32_t x158 = INT32_MIN;
	uint32_t x159 = 1783U;
	static volatile int64_t t25 = -3310726080690165LL;

	t25 = ((x157-x158)/(x159&x160));

	if (t25 != 1368695LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x161 = -970200237790LL;
	volatile int16_t x162 = -1;
	int8_t x163 = INT8_MAX;
	volatile int64_t t26 = -14285963986330815LL;

	t26 = ((x161-x162)/(x163&x164));

	if (t26 != -7639371951LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x165 = 540732360951LLU;
	volatile int32_t x167 = INT32_MIN;
	static int64_t x168 = 1145237763134504LL;
	volatile uint64_t t27 = 185903178283509337LLU;

	t27 = ((x165-x166)/(x167&x168));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x169 = INT8_MAX;
	int8_t x170 = 1;
	uint8_t x171 = UINT8_MAX;
	volatile int64_t t28 = -538617014718LL;

	t28 = ((x169-x170)/(x171&x172));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x180 = -1;
	uint64_t t29 = 32576602379898236LLU;

	t29 = ((x177-x178)/(x179&x180));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x181 = UINT16_MAX;
	static uint8_t x183 = 5U;
	static volatile uint64_t t30 = 309802232085911914LLU;

	t30 = ((x181-x182)/(x183&x184));

	if (t30 != 3323941073570242809LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x185 = INT64_MAX;
	static uint8_t x186 = 1U;
	int64_t x187 = 7793074LL;
	volatile int64_t x188 = -1LL;
	volatile int64_t t31 = -383LL;

	t31 = ((x185-x186)/(x187&x188));

	if (t31 != 1183534512421LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x189 = INT16_MIN;
	int32_t x190 = -1;
	int32_t x191 = -4129573;
	uint32_t x192 = UINT32_MAX;
	static uint32_t t32 = 27U;

	t32 = ((x189-x190)/(x191&x192));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x193 = 259850;
	uint16_t x194 = 1023U;
	volatile int32_t x195 = -1;
	static volatile int64_t t33 = 14LL;

	t33 = ((x193-x194)/(x195&x196));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x197 = 1U;
	uint16_t x198 = 32165U;
	uint64_t x199 = 5263920863344LLU;
	volatile int32_t x200 = -1955465;
	uint64_t t34 = 45256LLU;

	t34 = ((x197-x198)/(x199&x200));

	if (t34 != 3504373LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x201 = INT64_MIN;
	volatile int32_t x204 = INT32_MIN;

	t35 = ((x201-x202)/(x203&x204));

	if (t35 != 4294967295LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x205 = INT32_MIN;
	int32_t x207 = INT32_MIN;
	volatile int16_t x208 = INT16_MIN;
	int64_t t36 = -6274202002LL;

	t36 = ((x205-x206)/(x207&x208));

	if (t36 != -4294967295LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x209 = INT16_MIN;
	uint32_t x210 = UINT32_MAX;
	volatile int32_t x211 = 245;
	static uint16_t x212 = 21152U;
	uint32_t t37 = 5195U;

	t37 = ((x209-x210)/(x211&x212));

	if (t37 != 26843340U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x213 = INT32_MIN;
	volatile uint32_t x214 = UINT32_MAX;
	static int32_t x215 = 1;
	int64_t x216 = -1LL;
	volatile int64_t t38 = -180LL;

	t38 = ((x213-x214)/(x215&x216));

	if (t38 != 2147483649LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x217 = INT64_MIN;
	int16_t x218 = -1;
	uint64_t x219 = 4670380230215355775LLU;
	int32_t x220 = -470996689;
	static uint64_t t39 = 0LLU;

	t39 = ((x217-x218)/(x219&x220));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x221 = INT8_MIN;
	static volatile int64_t x224 = -1LL;
	volatile int64_t t40 = -213077414447718LL;

	t40 = ((x221-x222)/(x223&x224));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x229 = INT16_MIN;
	uint64_t x230 = 0LLU;
	int16_t x231 = -1;
	uint64_t t41 = 8245858290222LLU;

	t41 = ((x229-x230)/(x231&x232));

	if (t41 != 614891469123650628LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x233 = -527633853;
	volatile uint32_t x235 = 14274U;
	volatile uint32_t x236 = 1912122692U;
	volatile int64_t t42 = -511LL;

	t42 = ((x233-x234)/(x235&x236));

	if (t42 != 967216027299406LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x237 = 690234468774LL;
	static volatile uint32_t x238 = 1921044U;
	volatile uint64_t x239 = UINT64_MAX;
	static volatile int8_t x240 = INT8_MIN;
	volatile uint64_t t43 = 3412690930LLU;

	t43 = ((x237-x238)/(x239&x240));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x245 = UINT32_MAX;
	static int8_t x246 = -1;
	static int16_t x247 = INT16_MAX;
	volatile uint32_t t44 = 1805U;

	t44 = ((x245-x246)/(x247&x248));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x249 = -1;
	int64_t x250 = INT64_MIN;
	uint8_t x251 = 5U;
	static int64_t t45 = 23323059863853LL;

	t45 = ((x249-x250)/(x251&x252));

	if (t45 != 1844674407370955161LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x253 = -10443;
	int32_t x255 = -1;
	uint32_t t46 = 2U;

	t46 = ((x253-x254)/(x255&x256));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x257 = UINT16_MAX;
	int8_t x259 = INT8_MAX;
	int16_t x260 = INT16_MAX;
	volatile int64_t t47 = 0LL;

	t47 = ((x257-x258)/(x259&x260));

	if (t47 != 1592635883982486LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x261 = INT8_MAX;
	int32_t x262 = INT32_MAX;
	int8_t x263 = INT8_MAX;
	static int32_t x264 = 262;
	int32_t t48 = 29;

	t48 = ((x261-x262)/(x263&x264));

	if (t48 != -357913920) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x265 = INT16_MAX;
	uint8_t x266 = 94U;
	static int16_t x268 = -1;
	uint64_t t49 = 221995137135LLU;

	t49 = ((x265-x266)/(x267&x268));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x273 = INT16_MIN;
	volatile uint8_t x274 = UINT8_MAX;
	int64_t x275 = -1LL;
	volatile int16_t x276 = INT16_MIN;
	static int64_t t50 = -438932198228097442LL;

	t50 = ((x273-x274)/(x275&x276));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x277 = -5;
	static int64_t x278 = -99LL;
	int64_t x279 = -7721948LL;
	uint32_t x280 = 1969067417U;
	int64_t t51 = -601145LL;

	t51 = ((x277-x278)/(x279&x280));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x282 = -1LL;
	volatile uint32_t x283 = 183489U;
	int16_t x284 = -1;
	int64_t t52 = 10349LL;

	t52 = ((x281-x282)/(x283&x284));

	if (t52 != -50266621088211LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x285 = INT8_MAX;
	int8_t x286 = 18;
	static volatile int32_t x287 = 3;
	volatile uint64_t x288 = 965LLU;
	uint64_t t53 = 18198813LLU;

	t53 = ((x285-x286)/(x287&x288));

	if (t53 != 109LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x291 = INT32_MIN;
	static volatile int8_t x292 = -1;

	t54 = ((x289-x290)/(x291&x292));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x297 = INT8_MIN;
	uint8_t x298 = 3U;
	volatile int64_t x299 = INT64_MIN;
	volatile int64_t t55 = 15458549714LL;

	t55 = ((x297-x298)/(x299&x300));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x301 = INT32_MAX;
	static int8_t x302 = 11;
	uint8_t x304 = UINT8_MAX;
	static int32_t t56 = 2289;

	t56 = ((x301-x302)/(x303&x304));

	if (t56 != 37025579) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x305 = UINT32_MAX;
	static uint32_t x306 = 834U;
	int32_t x307 = -1;
	int64_t x308 = INT64_MAX;
	volatile int64_t t57 = -25396322342880101LL;

	t57 = ((x305-x306)/(x307&x308));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x309 = 8;
	uint8_t x310 = UINT8_MAX;
	int32_t x311 = INT32_MIN;
	uint64_t x312 = 76813231424644LLU;
	uint64_t t58 = 47540LLU;

	t58 = ((x309-x310)/(x311&x312));

	if (t58 != 240156LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x313 = 971250014483832491LLU;
	uint16_t x314 = 52U;
	int16_t x315 = INT16_MIN;
	int16_t x316 = -3709;
	uint64_t t59 = 16348989920LLU;

	t59 = ((x313-x314)/(x315&x316));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x317 = -1LL;
	int16_t x319 = -2293;
	static uint32_t x320 = 2113303264U;
	int64_t t60 = -152834723LL;

	t60 = ((x317-x318)/(x319&x320));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x321 = INT64_MIN;
	int16_t x322 = INT16_MIN;
	static int32_t x323 = INT32_MAX;
	int64_t x324 = -860928683886LL;
	int64_t t61 = -129LL;

	t61 = ((x321-x322)/(x323&x324));

	if (t61 != -43453392732LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x334 = -1LL;
	volatile int8_t x335 = 10;
	static int16_t x336 = INT16_MAX;
	volatile int64_t t62 = 240419770LL;

	t62 = ((x333-x334)/(x335&x336));

	if (t62 != 429496729LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x337 = INT16_MAX;
	int64_t x338 = INT64_MAX;
	int64_t x340 = -2435907146749560303LL;
	int64_t t63 = -319114667529LL;

	t63 = ((x337-x338)/(x339&x340));

	if (t63 != 3LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x341 = 5815U;
	int32_t x343 = INT32_MAX;
	volatile uint32_t x344 = 5286541U;
	static volatile uint32_t t64 = 36692U;

	t64 = ((x341-x342)/(x343&x344));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x345 = INT8_MIN;
	static int32_t x346 = INT32_MIN;
	int64_t t65 = 15LL;

	t65 = ((x345-x346)/(x347&x348));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x349 = -1;
	int64_t x350 = -1LL;
	static int16_t x351 = 2;
	static uint32_t x352 = 3655U;
	volatile int64_t t66 = 27402884077LL;

	t66 = ((x349-x350)/(x351&x352));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x357 = UINT64_MAX;
	uint8_t x358 = UINT8_MAX;
	uint64_t x359 = 161812LLU;
	volatile int16_t x360 = -7;

	t67 = ((x357-x358)/(x359&x360));

	if (t67 != 114003906319276LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x370 = 1416119LLU;
	static int8_t x371 = 1;
	int16_t x372 = INT16_MAX;
	uint64_t t68 = 37311832LLU;

	t68 = ((x369-x370)/(x371&x372));

	if (t68 != 18446744073708102729LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x381 = -11632124LL;
	static int16_t x382 = 11100;
	static uint16_t x383 = 1U;

	t69 = ((x381-x382)/(x383&x384));

	if (t69 != -11643224LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x389 = UINT16_MAX;
	int32_t x390 = -223454;
	volatile uint8_t x392 = 7U;
	uint32_t t70 = 14184135U;

	t70 = ((x389-x390)/(x391&x392));

	if (t70 != 72247U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x394 = 12U;
	uint64_t x395 = 285LLU;

	t71 = ((x393-x394)/(x395&x396));

	if (t71 != 858993456LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x398 = INT16_MAX;
	static int64_t x399 = INT64_MAX;
	static int64_t t72 = 45386LL;

	t72 = ((x397-x398)/(x399&x400));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x401 = 255448113LLU;
	int8_t x402 = INT8_MIN;
	volatile uint64_t x403 = 5246LLU;
	uint8_t x404 = UINT8_MAX;
	volatile uint64_t t73 = 76982493021098LLU;

	t73 = ((x401-x402)/(x403&x404));

	if (t73 != 2027366LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x405 = 1043LLU;
	int8_t x406 = -6;
	static volatile uint64_t x407 = UINT64_MAX;
	int64_t x408 = INT64_MIN;
	uint64_t t74 = 1807LLU;

	t74 = ((x405-x406)/(x407&x408));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x409 = -1;
	static volatile int32_t x410 = -1;
	int32_t x412 = -1;
	volatile int32_t t75 = -1753;

	t75 = ((x409-x410)/(x411&x412));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x413 = INT16_MIN;
	uint8_t x414 = 1U;
	int64_t t76 = 180924210321333126LL;

	t76 = ((x413-x414)/(x415&x416));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x417 = INT32_MIN;
	int64_t x418 = 6607840497792LL;
	int64_t x419 = 8396803363307LL;
	static uint8_t x420 = UINT8_MAX;
	int64_t t77 = -5LL;

	t77 = ((x417-x418)/(x419&x420));

	if (t77 != -28127608431LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x421 = 15U;
	int8_t x422 = -1;
	int8_t x423 = INT8_MIN;
	static volatile uint16_t x424 = 4631U;
	static int32_t t78 = 28263;

	t78 = ((x421-x422)/(x423&x424));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x425 = INT32_MIN;
	int64_t x426 = -849652805360136LL;
	int64_t x427 = INT64_MIN;
	static int8_t x428 = -4;

	t79 = ((x425-x426)/(x427&x428));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x429 = 2657335811395LL;
	int64_t x431 = -1LL;
	uint16_t x432 = 2157U;
	volatile int64_t t80 = -954442655442142LL;

	t80 = ((x429-x430)/(x431&x432));

	if (t80 != 1231959111LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x436 = 25892689954989446LL;
	int64_t t81 = 1626874522739188LL;

	t81 = ((x433-x434)/(x435&x436));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x441 = -1LL;
	static uint8_t x444 = 1U;
	volatile int64_t t82 = 30285741296LL;

	t82 = ((x441-x442)/(x443&x444));

	if (t82 != -33LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x445 = 32103U;
	uint64_t x446 = 8027734736LLU;
	uint32_t x447 = 114613U;
	int16_t x448 = -752;
	uint64_t t83 = 2141158547LLU;

	t83 = ((x445-x446)/(x447&x448));

	if (t83 != 161904438155471LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x449 = 108011U;
	uint64_t x450 = UINT64_MAX;
	int64_t x452 = INT64_MAX;
	static uint64_t t84 = 3LLU;

	t84 = ((x449-x450)/(x451&x452));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x457 = UINT64_MAX;
	uint8_t x458 = 1U;
	volatile uint8_t x459 = 27U;
	int16_t x460 = -1;
	volatile uint64_t t85 = 424633849048008837LLU;

	t85 = ((x457-x458)/(x459&x460));

	if (t85 != 683212743470724133LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x461 = -1LL;
	int32_t x462 = INT32_MIN;
	static volatile int8_t x464 = -5;
	static int64_t t86 = -5364LL;

	t86 = ((x461-x462)/(x463&x464));

	if (t86 != -429496729LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x465 = INT8_MAX;
	int16_t x466 = INT16_MIN;
	volatile int64_t x467 = INT64_MAX;
	static uint16_t x468 = UINT16_MAX;
	volatile int64_t t87 = -5935371265894LL;

	t87 = ((x465-x466)/(x467&x468));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x469 = INT16_MIN;
	int64_t t88 = -7735343LL;

	t88 = ((x469-x470)/(x471&x472));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x474 = -5406955;
	int64_t x475 = -17014647418224LL;
	uint64_t t89 = 10LLU;

	t89 = ((x473-x474)/(x475&x476));

	if (t89 != 1141LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x477 = 8;
	int16_t x478 = -1;
	static volatile int64_t x480 = INT64_MIN;
	int64_t t90 = -133383066681406LL;

	t90 = ((x477-x478)/(x479&x480));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x481 = INT32_MIN;
	uint8_t x482 = 0U;
	int8_t x483 = INT8_MIN;
	volatile uint16_t x484 = 2882U;

	t91 = ((x481-x482)/(x483&x484));

	if (t91 != -762600) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x485 = -1;
	int8_t x486 = INT8_MIN;
	static volatile int32_t x487 = -1;
	volatile int8_t x488 = INT8_MIN;

	t92 = ((x485-x486)/(x487&x488));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x489 = UINT32_MAX;
	int64_t x490 = -1LL;
	volatile int16_t x491 = 63;
	volatile int64_t x492 = -1LL;
	volatile int64_t t93 = 7711LL;

	t93 = ((x489-x490)/(x491&x492));

	if (t93 != 68174084LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x493 = 2705577LL;
	int32_t x494 = 1;
	uint16_t x495 = 14903U;
	int16_t x496 = INT16_MAX;
	volatile int64_t t94 = -339491LL;

	t94 = ((x493-x494)/(x495&x496));

	if (t94 != 181LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x502 = 1;
	int8_t x503 = INT8_MIN;
	int16_t x504 = INT16_MIN;
	int32_t t95 = 3922;

	t95 = ((x501-x502)/(x503&x504));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x505 = INT64_MIN;
	int8_t x506 = INT8_MIN;
	volatile int8_t x508 = INT8_MAX;
	volatile int64_t t96 = 6LL;

	t96 = ((x505-x506)/(x507&x508));

	if (t96 != -72624976668147840LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x510 = INT8_MIN;
	static uint32_t x512 = 477U;
	uint32_t t97 = 14486661U;

	t97 = ((x509-x510)/(x511&x512));

	if (t97 != 67108354U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x513 = -1LL;
	static uint16_t x514 = 9200U;
	uint32_t x515 = UINT32_MAX;
	volatile uint8_t x516 = UINT8_MAX;
	volatile int64_t t98 = -997731238764163LL;

	t98 = ((x513-x514)/(x515&x516));

	if (t98 != -36LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x517 = -557;
	int8_t x518 = INT8_MIN;
	static int16_t x519 = -2382;
	uint16_t x520 = UINT16_MAX;
	volatile int32_t t99 = 53738;

	t99 = ((x517-x518)/(x519&x520));

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

