#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x7 = 7;
uint8_t x20 = 58U;
int8_t x22 = INT8_MIN;
int16_t x24 = INT16_MIN;
volatile int16_t x27 = INT16_MIN;
int64_t x28 = INT64_MAX;
static int8_t x30 = INT8_MIN;
static int32_t x39 = INT32_MIN;
static uint8_t x46 = 2U;
int32_t x51 = INT32_MAX;
static volatile uint64_t x52 = UINT64_MAX;
uint16_t x63 = 0U;
int32_t x64 = 3332;
volatile int64_t t14 = 339106941322010836LL;
static uint64_t t15 = 182647LLU;
int32_t x82 = -15;
volatile uint32_t t20 = UINT32_MAX;
volatile int64_t t22 = -18LL;
int16_t x132 = INT16_MAX;
uint8_t x137 = UINT8_MAX;
volatile uint64_t x140 = 354079195574194LLU;
uint16_t x143 = 11U;
int16_t x144 = 2;
static uint64_t x146 = 3LLU;
volatile uint64_t x148 = UINT64_MAX;
int8_t x149 = INT8_MIN;
uint64_t x159 = UINT64_MAX;
volatile uint32_t x171 = 0U;
static int16_t x179 = INT16_MIN;
int16_t x181 = INT16_MIN;
int8_t x198 = -1;
int8_t x199 = 21;
volatile int8_t x201 = INT8_MAX;
uint16_t x208 = 66U;
uint8_t x211 = UINT8_MAX;
static int16_t x213 = -1;
int16_t x219 = 11218;
uint16_t x220 = 1562U;
int8_t x224 = -1;
int16_t x225 = INT16_MAX;
volatile int64_t t45 = 4019714LL;
volatile int64_t x229 = INT64_MIN;
volatile uint64_t x232 = 135LLU;
int16_t x235 = 13454;
int8_t x236 = 0;
volatile int64_t t47 = 37163905656053030LL;
static int8_t x249 = INT8_MIN;
uint8_t x259 = UINT8_MAX;
int64_t x262 = INT64_MIN;
static volatile int32_t x263 = -254774084;
int8_t x280 = INT8_MIN;
uint16_t x283 = 3689U;
int16_t x288 = INT16_MIN;
volatile uint8_t x294 = 30U;
static volatile uint64_t t57 = 15775273LLU;
int32_t x301 = INT32_MIN;
int64_t x305 = INT64_MIN;
uint64_t x306 = 30299LLU;
static int8_t x309 = 15;
static uint16_t x311 = 95U;
static int8_t x314 = INT8_MIN;
int64_t x316 = INT64_MIN;
int64_t x321 = 56LL;
uint16_t x332 = 13U;
int32_t x353 = INT32_MIN;
int16_t x356 = INT16_MIN;
int8_t x365 = -2;
int32_t x375 = -2335309;
static uint8_t x380 = 11U;
volatile int64_t t72 = 53501950735513LL;
int8_t x393 = 31;
uint16_t x394 = 172U;
int64_t x399 = -1LL;
uint16_t x400 = UINT16_MAX;
int16_t x402 = INT16_MIN;
uint64_t x405 = 9812895LLU;
uint32_t x406 = 35U;
static int16_t x422 = 6154;
int16_t x423 = -1;
int16_t x424 = -1;
int8_t x427 = INT8_MAX;
uint8_t x428 = 1U;
int32_t t81 = 17034565;
uint16_t x430 = 0U;
static uint32_t x433 = UINT32_MAX;
volatile uint16_t x437 = UINT16_MAX;
int16_t x439 = INT16_MAX;
volatile uint32_t x446 = 1933889U;
volatile uint32_t t85 = 54243980U;
int16_t x456 = 258;
volatile uint64_t x458 = UINT64_MAX;
int8_t x461 = INT8_MAX;
int16_t x465 = -1;
int8_t x471 = INT8_MIN;
volatile int16_t x474 = INT16_MIN;
static uint64_t x480 = 6761430LLU;
static uint16_t x483 = UINT16_MAX;
volatile int8_t x485 = INT8_MIN;
int32_t x497 = -547;
int64_t x498 = 3164409349870382963LL;
int16_t x504 = INT16_MAX;
int32_t x505 = -130135256;
int8_t x507 = INT8_MIN;


void f0(void) {
	int16_t x1 = -232;
	static int8_t x2 = -1;
	volatile int16_t x3 = INT16_MIN;
	int32_t x4 = 32322193;
	volatile int32_t t0 = -3870422;

	t0 = (x1*((x2^x3)&x4));

	if (t0 != -3003240) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint8_t x6 = UINT8_MAX;
	static volatile uint16_t x8 = 13U;
	volatile int32_t t1 = 44116;

	t1 = (x5*((x6^x7)&x8));

	if (t1 != 524280) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 2U;
	uint8_t x14 = 11U;
	int8_t x15 = INT8_MIN;
	static int16_t x16 = INT16_MAX;
	volatile int32_t t2 = -200622;

	t2 = (x13*((x14^x15)&x16));

	if (t2 != 65302) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x17 = 26184858LLU;
	volatile int64_t x18 = INT64_MIN;
	int64_t x19 = INT64_MAX;
	uint64_t t3 = 6LLU;

	t3 = (x17*((x18^x19)&x20));

	if (t3 != 1518721764LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 97U;
	uint64_t x23 = 77864LLU;
	volatile uint64_t t4 = 188555LLU;

	t4 = (x21*((x22^x23)&x24));

	if (t4 != 18446744073700016128LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 1298205U;
	static int16_t x26 = -9582;
	volatile int64_t t5 = 56596992LL;

	t5 = (x25*((x26^x27)&x28));

	if (t5 != 30100181130LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = INT16_MAX;
	static int64_t x31 = -253731044LL;
	static volatile int64_t x32 = -1LL;
	volatile int64_t t6 = -32001122290379LL;

	t6 = (x29*((x30^x31)&x32));

	if (t6 != 8314002759524LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = -1LL;
	uint8_t x34 = UINT8_MAX;
	int64_t x35 = 0LL;
	volatile int8_t x36 = -1;
	int64_t t7 = -19736477682688869LL;

	t7 = (x33*((x34^x35)&x36));

	if (t7 != -255LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	uint8_t x38 = 12U;
	int8_t x40 = -1;
	volatile int32_t t8 = 96466;

	t8 = (x37*((x38^x39)&x40));

	if (t8 != 2147483636) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MIN;
	volatile uint32_t x42 = 1709U;
	volatile int8_t x43 = -1;
	int8_t x44 = INT8_MAX;
	static volatile uint32_t t9 = 65211U;

	t9 = (x41*((x42^x43)&x44));

	if (t9 != 4292280320U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	int16_t x47 = -1;
	int32_t x48 = -1;
	int32_t t10 = -21;

	t10 = (x45*((x46^x47)&x48));

	if (t10 != -765) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -194177LL;
	int8_t x50 = -1;
	volatile uint64_t t11 = 430897414887LLU;

	t11 = (x49*((x50^x51)&x52));

	if (t11 != 416991932317696LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	uint16_t x54 = UINT16_MAX;
	uint16_t x55 = 664U;
	int32_t x56 = INT32_MAX;
	uint64_t t12 = 282032LLU;

	t12 = (x53*((x54^x55)&x56));

	if (t12 != 18446744073709486745LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = -1;
	static uint32_t x58 = UINT32_MAX;
	uint16_t x59 = UINT16_MAX;
	uint32_t x60 = 1341128U;
	uint32_t t13 = 19080525U;

	t13 = (x57*((x58^x59)&x60));

	if (t13 != 4293656576U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = -1;
	int64_t x62 = INT64_MIN;

	t14 = (x61*((x62^x63)&x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x69 = 69;
	uint64_t x70 = 134617080293LLU;
	uint64_t x71 = 103143504LLU;
	int16_t x72 = INT16_MIN;

	t15 = (x69*((x70^x71)&x72));

	if (t15 != 9281752006656LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x81 = INT16_MIN;
	int32_t x83 = -1;
	int64_t x84 = 9826151619078LL;
	static int64_t t16 = -719712LL;

	t16 = (x81*((x82^x83)&x84));

	if (t16 != -196608LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = INT8_MIN;
	int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MAX;
	uint32_t x88 = 117U;
	static uint32_t t17 = 141968317U;

	t17 = (x85*((x86^x87)&x88));

	if (t17 != 4294952320U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x97 = 13U;
	int16_t x98 = 0;
	static volatile int16_t x99 = INT16_MIN;
	uint8_t x100 = UINT8_MAX;
	static int32_t t18 = -2;

	t18 = (x97*((x98^x99)&x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x109 = 24U;
	uint8_t x110 = UINT8_MAX;
	volatile int16_t x111 = INT16_MAX;
	uint8_t x112 = 96U;
	volatile int32_t t19 = 271881;

	t19 = (x109*((x110^x111)&x112));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x113 = -1;
	int16_t x114 = 0;
	uint32_t x115 = 29230165U;
	volatile uint8_t x116 = 3U;

	t20 = (x113*((x114^x115)&x116));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x121 = 13375;
	int16_t x122 = -1;
	int32_t x123 = INT32_MAX;
	static uint16_t x124 = UINT16_MAX;
	volatile int32_t t21 = 4977;

	t21 = (x121*((x122^x123)&x124));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x125 = -1LL;
	int8_t x126 = INT8_MAX;
	int64_t x127 = INT64_MAX;
	int64_t x128 = 5LL;

	t22 = (x125*((x126^x127)&x128));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x129 = 0U;
	volatile int32_t x130 = INT32_MIN;
	int16_t x131 = 1101;
	int32_t t23 = -363145721;

	t23 = (x129*((x130^x131)&x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x133 = INT64_MAX;
	int8_t x134 = -1;
	int8_t x135 = -5;
	int64_t x136 = INT64_MIN;
	int64_t t24 = 560916834215547172LL;

	t24 = (x133*((x134^x135)&x136));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x138 = 612021LLU;
	int32_t x139 = 470;
	uint64_t t25 = 446326445651009LLU;

	t25 = (x137*((x138^x139)&x140));

	if (t25 != 134159070LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x141 = -1;
	static int16_t x142 = INT16_MIN;
	int32_t t26 = -981634;

	t26 = (x141*((x142^x143)&x144));

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x145 = 3134LLU;
	static uint8_t x147 = 7U;
	static volatile uint64_t t27 = 426894500LLU;

	t27 = (x145*((x146^x147)&x148));

	if (t27 != 12536LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x150 = 1;
	uint8_t x151 = 6U;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t28 = 13954878;

	t28 = (x149*((x150^x151)&x152));

	if (t28 != -896) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x157 = INT64_MAX;
	volatile int8_t x158 = INT8_MAX;
	volatile int8_t x160 = 1;
	volatile uint64_t t29 = 2036094887714386LLU;

	t29 = (x157*((x158^x159)&x160));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x161 = 4037;
	int8_t x162 = INT8_MIN;
	volatile int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MAX;
	int32_t t30 = -1;

	t30 = (x161*((x162^x163)&x164));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x165 = -980402LL;
	uint64_t x166 = 123806582LLU;
	uint16_t x167 = 10061U;
	uint16_t x168 = UINT16_MAX;
	volatile uint64_t t31 = 0LLU;

	t31 = (x165*((x166^x167)&x168));

	if (t31 != 18446744072647776250LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x169 = -7;
	volatile int32_t x170 = -325201;
	volatile int64_t x172 = INT64_MIN;
	int64_t t32 = -87147121115312LL;

	t32 = (x169*((x170^x171)&x172));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x177 = INT16_MIN;
	int64_t x178 = -1LL;
	int64_t x180 = 2558696272530088LL;
	volatile int64_t t33 = 31628232768904898LL;

	t33 = (x177*((x178^x179)&x180));

	if (t33 != -89391104LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x182 = INT8_MIN;
	int64_t x183 = INT64_MAX;
	int16_t x184 = 0;
	volatile int64_t t34 = -4LL;

	t34 = (x181*((x182^x183)&x184));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x185 = -19018620;
	uint8_t x186 = UINT8_MAX;
	static volatile int16_t x187 = -1;
	volatile uint64_t x188 = UINT64_MAX;
	uint64_t t35 = 49LLU;

	t35 = (x185*((x186^x187)&x188));

	if (t35 != 4868766720LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x189 = 6U;
	uint64_t x190 = UINT64_MAX;
	int8_t x191 = -1;
	volatile int64_t x192 = -1LL;
	uint64_t t36 = 3254LLU;

	t36 = (x189*((x190^x191)&x192));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x193 = UINT16_MAX;
	int64_t x194 = INT64_MIN;
	int16_t x195 = INT16_MAX;
	static int64_t x196 = 1LL;
	volatile int64_t t37 = 2LL;

	t37 = (x193*((x194^x195)&x196));

	if (t37 != 65535LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x197 = 34415545;
	static int8_t x200 = -1;
	static volatile int32_t t38 = 14472;

	t38 = (x197*((x198^x199)&x200));

	if (t38 != -757141990) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x202 = INT16_MIN;
	int32_t x203 = -224256;
	int8_t x204 = 2;
	int32_t t39 = -3;

	t39 = (x201*((x202^x203)&x204));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x205 = -3035015;
	int16_t x206 = -127;
	static int64_t x207 = INT64_MIN;
	int64_t t40 = -12207681289832406LL;

	t40 = (x205*((x206^x207)&x208));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x209 = -497448314;
	volatile uint32_t x210 = 88U;
	int16_t x212 = INT16_MAX;
	volatile uint32_t t41 = 21298110U;

	t41 = (x209*((x210^x211)&x212));

	if (t41 != 2825477482U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x214 = 83337882596880788LL;
	uint64_t x215 = 45675158099770LLU;
	uint64_t x216 = 515416559LLU;
	volatile uint64_t t42 = 79480710727410964LLU;

	t42 = (x213*((x214^x215)&x216));

	if (t42 != 18446744073540689746LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x217 = -1LL;
	static uint16_t x218 = 4U;
	int64_t t43 = 72638365885396LL;

	t43 = (x217*((x218^x219)&x220));

	if (t43 != -530LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x221 = 8248U;
	static int64_t x222 = -1LL;
	int32_t x223 = -126;
	int64_t t44 = 371377838099LL;

	t44 = (x221*((x222^x223)&x224));

	if (t44 != 1031000LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x226 = INT32_MAX;
	volatile int64_t x227 = 14860LL;
	volatile uint8_t x228 = UINT8_MAX;

	t45 = (x225*((x226^x227)&x228));

	if (t45 != 7962381LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x230 = 21U;
	int16_t x231 = INT16_MAX;
	uint64_t t46 = 400496851889LLU;

	t46 = (x229*((x230^x231)&x232));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x233 = INT16_MAX;
	volatile int64_t x234 = -4180590LL;

	t47 = (x233*((x234^x235)&x236));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x245 = INT16_MIN;
	volatile int8_t x246 = -5;
	int16_t x247 = 1182;
	uint32_t x248 = UINT32_MAX;
	volatile uint32_t t48 = 189U;

	t48 = (x245*((x246^x247)&x248));

	if (t48 != 38633472U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x250 = UINT32_MAX;
	static int64_t x251 = 6791585122747498LL;
	volatile int32_t x252 = -71006061;
	volatile int64_t t49 = -11762516436LL;

	t49 = (x249*((x250^x251)&x252));

	if (t49 != -869323287732439168LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x257 = -2787;
	volatile int64_t x258 = -1LL;
	int8_t x260 = INT8_MIN;
	volatile int64_t t50 = 739795LL;

	t50 = (x257*((x258^x259)&x260));

	if (t50 != 713472LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x261 = INT32_MIN;
	int32_t x264 = INT32_MAX;
	int64_t t51 = 15333785403898LL;

	t51 = (x261*((x262^x263)&x264));

	if (t51 != -4064562839103209472LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x269 = UINT16_MAX;
	uint16_t x270 = 45U;
	static uint16_t x271 = 24958U;
	static uint16_t x272 = 4899U;
	volatile int32_t t52 = 8828;

	t52 = (x269*((x270^x271)&x272));

	if (t52 != 16973565) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x273 = INT8_MIN;
	int32_t x274 = INT32_MAX;
	int32_t x275 = INT32_MAX;
	static int64_t x276 = -377957317LL;
	int64_t t53 = 13739838LL;

	t53 = (x273*((x274^x275)&x276));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x277 = -1;
	static uint16_t x278 = 56U;
	int8_t x279 = 22;
	int32_t t54 = 87;

	t54 = (x277*((x278^x279)&x280));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = -1;
	int8_t x284 = -1;
	int32_t t55 = -356434886;

	t55 = (x281*((x282^x283)&x284));

	if (t55 != 120913920) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x285 = -1;
	uint32_t x286 = UINT32_MAX;
	int64_t x287 = INT64_MIN;
	static int64_t t56 = -25232LL;

	t56 = (x285*((x286^x287)&x288));

	if (t56 != 9223372032559841280LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x293 = 708U;
	int8_t x295 = 0;
	uint64_t x296 = 390033974055562156LLU;

	t57 = (x293*((x294^x295)&x296));

	if (t57 != 8496LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x302 = INT32_MAX;
	int8_t x303 = -1;
	static volatile uint32_t x304 = 98U;
	volatile uint32_t t58 = 1710887562U;

	t58 = (x301*((x302^x303)&x304));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x307 = INT64_MAX;
	volatile uint8_t x308 = UINT8_MAX;
	uint64_t t59 = 164919735017071LLU;

	t59 = (x305*((x306^x307)&x308));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x310 = -1LL;
	static int8_t x312 = -1;
	int64_t t60 = 1922LL;

	t60 = (x309*((x310^x311)&x312));

	if (t60 != -1440LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x313 = 4U;
	volatile int64_t x315 = INT64_MIN;
	static int64_t t61 = 25738735LL;

	t61 = (x313*((x314^x315)&x316));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x322 = 1221;
	uint32_t x323 = 6098U;
	volatile int64_t x324 = INT64_MAX;
	static int64_t t62 = 0LL;

	t62 = (x321*((x322^x323)&x324));

	if (t62 != 273672LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x325 = -1;
	int16_t x326 = INT16_MAX;
	int16_t x327 = -864;
	uint8_t x328 = 16U;
	int32_t t63 = -29;

	t63 = (x325*((x326^x327)&x328));

	if (t63 != -16) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x329 = 8095547385812470LLU;
	static int8_t x330 = INT8_MAX;
	uint16_t x331 = 118U;
	volatile uint64_t t64 = 226LLU;

	t64 = (x329*((x330^x331)&x332));

	if (t64 != 72859926472312230LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x333 = 926LLU;
	int64_t x334 = INT64_MAX;
	static int8_t x335 = 12;
	static int32_t x336 = -15;
	uint64_t t65 = 379484154965LLU;

	t65 = (x333*((x334^x335)&x336));

	if (t65 != 18446744073709537726LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x337 = 498646557734124LLU;
	volatile uint16_t x338 = 0U;
	static uint32_t x339 = 1U;
	static int16_t x340 = -1;
	static uint64_t t66 = 365086278906LLU;

	t66 = (x337*((x338^x339)&x340));

	if (t66 != 498646557734124LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x345 = 185361934LLU;
	volatile int8_t x346 = INT8_MIN;
	int8_t x347 = 0;
	static volatile uint8_t x348 = 7U;
	volatile uint64_t t67 = 9037367LLU;

	t67 = (x345*((x346^x347)&x348));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x354 = 0U;
	int32_t x355 = -1;
	uint32_t t68 = 5317104U;

	t68 = (x353*((x354^x355)&x356));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x357 = 0;
	uint16_t x358 = UINT16_MAX;
	static volatile int64_t x359 = INT64_MIN;
	int8_t x360 = INT8_MAX;
	int64_t t69 = 75471LL;

	t69 = (x357*((x358^x359)&x360));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x366 = UINT64_MAX;
	int64_t x367 = 2LL;
	static int16_t x368 = INT16_MAX;
	volatile uint64_t t70 = 43872226614LLU;

	t70 = (x365*((x366^x367)&x368));

	if (t70 != 18446744073709486086LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x373 = INT8_MIN;
	volatile int32_t x374 = INT32_MIN;
	int64_t x376 = 133023904795LL;
	int64_t t71 = -145417593LL;

	t71 = (x373*((x374^x375)&x376));

	if (t71 != -259477080448LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x377 = -234;
	int32_t x378 = INT32_MAX;
	int64_t x379 = INT64_MIN;

	t72 = (x377*((x378^x379)&x380));

	if (t72 != -2574LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x385 = -1;
	uint8_t x386 = UINT8_MAX;
	uint8_t x387 = 0U;
	uint32_t x388 = 706243755U;
	uint32_t t73 = 1783398U;

	t73 = (x385*((x386^x387)&x388));

	if (t73 != 4294967125U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x395 = 663U;
	static volatile int32_t x396 = 1250023;
	static uint32_t t74 = 11315905U;

	t74 = (x393*((x394^x395)&x396));

	if (t74 != 16957U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x397 = 126832787;
	int8_t x398 = INT8_MIN;
	volatile int64_t t75 = 496468409172453LL;

	t75 = (x397*((x398^x399)&x400));

	if (t75 != 16107763949LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x401 = -1;
	uint16_t x403 = 6U;
	int16_t x404 = -1;
	static volatile int32_t t76 = 410;

	t76 = (x401*((x402^x403)&x404));

	if (t76 != 32762) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x407 = UINT32_MAX;
	int64_t x408 = INT64_MIN;
	static volatile uint64_t t77 = 99744882190LLU;

	t77 = (x405*((x406^x407)&x408));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x413 = -1LL;
	uint16_t x414 = 46U;
	static int16_t x415 = -1;
	int16_t x416 = 66;
	int64_t t78 = 1315408LL;

	t78 = (x413*((x414^x415)&x416));

	if (t78 != -64LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x417 = -1LL;
	int64_t x418 = INT64_MIN;
	uint32_t x419 = 184U;
	uint64_t x420 = 18LLU;
	static volatile uint64_t t79 = 179566LLU;

	t79 = (x417*((x418^x419)&x420));

	if (t79 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x421 = INT16_MIN;
	int32_t t80 = 8;

	t80 = (x421*((x422^x423)&x424));

	if (t80 != 201687040) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x425 = -1;
	int16_t x426 = INT16_MIN;

	t81 = (x425*((x426^x427)&x428));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x429 = INT32_MIN;
	volatile uint32_t x431 = UINT32_MAX;
	int8_t x432 = INT8_MIN;
	uint32_t t82 = 926U;

	t82 = (x429*((x430^x431)&x432));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x434 = -1LL;
	int64_t x435 = INT64_MIN;
	int8_t x436 = 6;
	volatile int64_t t83 = 4641235LL;

	t83 = (x433*((x434^x435)&x436));

	if (t83 != 25769803770LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x438 = 1264957462250574736LLU;
	int16_t x440 = -1796;
	volatile uint64_t t84 = 19LLU;

	t84 = (x437*((x438^x439)&x440));

	if (t84 != 17766165413676144532LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x445 = 1;
	static uint32_t x447 = 1046273U;
	volatile int16_t x448 = INT16_MIN;

	t85 = (x445*((x446^x447)&x448));

	if (t85 != 1179648U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x449 = -1;
	uint16_t x450 = UINT16_MAX;
	int64_t x451 = -60669573942LL;
	uint32_t x452 = UINT32_MAX;
	volatile int64_t t86 = 547LL;

	t86 = (x449*((x450^x451)&x452));

	if (t86 != -3754900277LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x453 = 155623091LLU;
	volatile int16_t x454 = 1673;
	volatile int8_t x455 = 12;
	uint64_t t87 = 3559342655990560LLU;

	t87 = (x453*((x454^x455)&x456));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x457 = 1491523643906LL;
	static int32_t x459 = INT32_MAX;
	uint16_t x460 = UINT16_MAX;
	uint64_t t88 = 16LLU;

	t88 = (x457*((x458^x459)&x460));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x462 = UINT32_MAX;
	static uint8_t x463 = 10U;
	int32_t x464 = -1;
	uint32_t t89 = 26893117U;

	t89 = (x461*((x462^x463)&x464));

	if (t89 != 4294965899U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x466 = UINT64_MAX;
	static uint8_t x467 = UINT8_MAX;
	volatile int8_t x468 = INT8_MAX;
	static volatile uint64_t t90 = 59559478455LLU;

	t90 = (x465*((x466^x467)&x468));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x469 = -1;
	uint8_t x470 = 3U;
	volatile int8_t x472 = INT8_MIN;
	volatile int32_t t91 = 3;

	t91 = (x469*((x470^x471)&x472));

	if (t91 != 128) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x473 = 1;
	int8_t x475 = INT8_MIN;
	static int16_t x476 = INT16_MIN;
	volatile int32_t t92 = 12677374;

	t92 = (x473*((x474^x475)&x476));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x477 = 7524013LLU;
	int32_t x478 = INT32_MAX;
	uint32_t x479 = 10U;
	static volatile uint64_t t93 = 410582642LLU;

	t93 = (x477*((x478^x479)&x480));

	if (t93 != 50873072170564LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x481 = 619U;
	uint8_t x482 = 37U;
	int64_t x484 = -2232864LL;
	int64_t t94 = -68945356546759LL;

	t94 = (x481*((x482^x483)&x484));

	if (t94 != 37674816LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x486 = 6851U;
	uint32_t x487 = 0U;
	int64_t x488 = -217025156527LL;
	static volatile int64_t t95 = -139689620235316LL;

	t95 = (x485*((x486^x487)&x488));

	if (t95 != -336000LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x489 = 0;
	int16_t x490 = INT16_MAX;
	int8_t x491 = INT8_MIN;
	uint32_t x492 = UINT32_MAX;
	volatile uint32_t t96 = 1610781U;

	t96 = (x489*((x490^x491)&x492));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x499 = INT32_MAX;
	static uint32_t x500 = 24U;
	volatile int64_t t97 = -242576997567LL;

	t97 = (x497*((x498^x499)&x500));

	if (t97 != -4376LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x501 = UINT64_MAX;
	int64_t x502 = INT64_MAX;
	uint64_t x503 = 1838464780LLU;
	volatile uint64_t t98 = 42172038LLU;

	t98 = (x501*((x502^x503)&x504));

	if (t98 != 18446744073709534989LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x506 = -1LL;
	static uint8_t x508 = UINT8_MAX;
	static int64_t t99 = 33336448232LL;

	t99 = (x505*((x506^x507)&x508));

	if (t99 != -16527177512LL) { NG(); } else { ; }
	
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

