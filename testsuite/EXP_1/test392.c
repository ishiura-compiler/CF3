#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
volatile int16_t x27 = INT16_MIN;
int8_t x31 = INT8_MIN;
uint64_t x49 = UINT64_MAX;
int32_t x51 = -1;
volatile int8_t x54 = INT8_MIN;
int32_t x55 = INT32_MAX;
volatile int8_t x56 = -12;
int8_t x61 = INT8_MAX;
int16_t x70 = INT16_MAX;
int64_t t11 = 15082005285LL;
int32_t x79 = INT32_MAX;
uint8_t x85 = UINT8_MAX;
int16_t x86 = INT16_MIN;
volatile int32_t t14 = 130951;
int8_t x89 = -1;
static int64_t t15 = 39900631170012LL;
volatile uint64_t t16 = 10010473644919382LLU;
volatile uint64_t x97 = 442689605487LLU;
uint64_t x110 = 317348969859237LLU;
uint16_t x117 = UINT16_MAX;
int64_t x120 = INT64_MIN;
static int32_t x135 = INT32_MAX;
int32_t x147 = INT32_MIN;
int64_t t30 = 1192832703082131692LL;
volatile int32_t t34 = 9;
int64_t x207 = INT64_MIN;
int8_t x216 = INT8_MAX;
volatile int64_t t38 = 71738883LL;
volatile uint32_t t39 = 3400U;
uint32_t x232 = UINT32_MAX;
int8_t x237 = -1;
int16_t x256 = INT16_MIN;
volatile int32_t t45 = -32;
static int32_t x270 = INT32_MAX;
static uint64_t x278 = 490277536LLU;
static volatile uint16_t x312 = UINT16_MAX;
uint32_t x324 = 52382598U;
static volatile int8_t x340 = INT8_MIN;
volatile int32_t x347 = INT32_MAX;
int16_t x365 = INT16_MIN;
volatile uint8_t x369 = 3U;
volatile int64_t x371 = -1328LL;
volatile int64_t t61 = -2256401LL;
int8_t x374 = -1;
uint64_t x388 = UINT64_MAX;
uint16_t x392 = UINT16_MAX;
int16_t x393 = INT16_MIN;
int16_t x395 = -1;
uint8_t x403 = UINT8_MAX;
static volatile int64_t x411 = 95173139821LL;
uint8_t x416 = 59U;
static volatile int32_t t68 = 11072;
volatile int64_t x422 = -706891LL;
uint16_t x426 = 590U;
uint16_t x427 = 5U;
uint32_t x428 = UINT32_MAX;
volatile uint64_t x433 = 534659295514634537LLU;
volatile int16_t x434 = INT16_MAX;
volatile int8_t x437 = INT8_MAX;
static int16_t x441 = -1;
static int64_t x444 = INT64_MAX;
uint64_t x451 = UINT64_MAX;
volatile uint64_t t77 = 305112515262114579LLU;
int32_t x460 = INT32_MAX;
int64_t t78 = 494750655LL;
volatile uint64_t x464 = 715951LLU;
volatile int32_t x468 = -35786;
volatile uint32_t t82 = 5110200U;
int64_t x481 = -9298LL;
volatile int64_t x491 = INT64_MIN;
uint64_t x501 = UINT64_MAX;
int8_t x526 = 62;
int16_t x527 = INT16_MIN;
uint64_t x531 = UINT64_MAX;
int8_t x532 = INT8_MAX;
volatile int32_t x533 = -1;
int32_t x534 = -370170;
int64_t x544 = -1LL;
volatile int16_t x550 = INT16_MIN;
int64_t t97 = 1264218773116LL;
int16_t x553 = -1;


void f0(void) {
	volatile uint16_t x1 = 2U;
	int8_t x3 = INT8_MIN;
	uint32_t x4 = 689109372U;
	volatile uint32_t t0 = 2238U;

	t0 = (((x1*x2)%x3)-x4);

	if (t0 != 3605858050U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	static uint64_t x6 = 16327159535LLU;
	static int16_t x7 = INT16_MIN;
	static volatile int32_t x8 = INT32_MIN;
	static volatile uint64_t t1 = 2552674749196553LLU;

	t1 = (((x5*x6)%x7)-x8);

	if (t1 != 16615564031810556177LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	int8_t x10 = INT8_MIN;
	static volatile uint8_t x11 = 24U;
	uint8_t x12 = 2U;
	volatile int32_t t2 = -21352246;

	t2 = (((x9*x10)%x11)-x12);

	if (t2 != 6) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 19964U;
	uint32_t x14 = 4688U;
	int16_t x15 = INT16_MIN;
	volatile int32_t x16 = INT32_MIN;
	uint32_t t3 = 13719U;

	t3 = (((x13*x14)%x15)-x16);

	if (t3 != 2241074880U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MIN;
	static uint64_t x28 = 10667514782LLU;
	uint64_t t4 = 1471411592LLU;

	t4 = (((x25*x26)%x27)-x28);

	if (t4 != 18446744063042036834LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x29 = UINT16_MAX;
	int8_t x30 = 0;
	uint8_t x32 = 1U;
	int32_t t5 = -80085801;

	t5 = (((x29*x30)%x31)-x32);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = 578;
	uint64_t x42 = 3189131427664256LLU;
	uint16_t x43 = 142U;
	int64_t x44 = INT64_MIN;
	uint64_t t6 = 40445963463LLU;

	t6 = (((x41*x42)%x43)-x44);

	if (t6 != 9223372036854775836LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x45 = INT32_MIN;
	volatile uint32_t x46 = UINT32_MAX;
	static int64_t x47 = -135593737268629LL;
	uint64_t x48 = 119338LLU;
	volatile uint64_t t7 = 3037132240LLU;

	t7 = (((x45*x46)%x47)-x48);

	if (t7 != 2147364310LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x50 = 118U;
	int16_t x52 = INT16_MIN;
	uint64_t t8 = 17119732504977158LLU;

	t8 = (((x49*x50)%x51)-x52);

	if (t8 != 32650LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = UINT32_MAX;
	volatile uint32_t t9 = 50580834U;

	t9 = (((x53*x54)%x55)-x56);

	if (t9 != 140U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x62 = -12302;
	int64_t x63 = INT64_MIN;
	volatile int32_t x64 = INT32_MAX;
	volatile int64_t t10 = -7368348047LL;

	t10 = (((x61*x62)%x63)-x64);

	if (t10 != -2149046001LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x69 = INT16_MIN;
	uint32_t x71 = 6U;
	int64_t x72 = 11LL;

	t11 = (((x69*x70)%x71)-x72);

	if (t11 != -9LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x73 = INT16_MIN;
	uint16_t x74 = 2U;
	uint64_t x75 = 961436LLU;
	int8_t x76 = INT8_MIN;
	volatile uint64_t t12 = 59602633813323LLU;

	t12 = (((x73*x74)%x75)-x76);

	if (t12 != 432980LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = -1;
	int16_t x78 = 52;
	int8_t x80 = INT8_MIN;
	int32_t t13 = -159978680;

	t13 = (((x77*x78)%x79)-x80);

	if (t13 != 76) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x87 = INT8_MIN;
	volatile uint16_t x88 = 10U;

	t14 = (((x85*x86)%x87)-x88);

	if (t14 != -10) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x90 = INT64_MAX;
	volatile int16_t x91 = INT16_MIN;
	volatile uint16_t x92 = 9U;

	t15 = (((x89*x90)%x91)-x92);

	if (t15 != -32776LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x93 = 1123922038LLU;
	static int64_t x94 = INT64_MAX;
	volatile int32_t x95 = INT32_MAX;
	int64_t x96 = INT64_MAX;

	t16 = (((x93*x94)%x95)-x96);

	if (t16 != 9223372037878337422LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x98 = 1U;
	static volatile int32_t x99 = -1;
	uint32_t x100 = UINT32_MAX;
	volatile uint64_t t17 = 85LLU;

	t17 = (((x97*x98)%x99)-x100);

	if (t17 != 438394638192LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x101 = INT8_MAX;
	static uint8_t x102 = 3U;
	uint32_t x103 = 64473772U;
	static uint8_t x104 = UINT8_MAX;
	uint32_t t18 = 8U;

	t18 = (((x101*x102)%x103)-x104);

	if (t18 != 126U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = INT16_MIN;
	int8_t x106 = -1;
	int32_t x107 = -1;
	static uint8_t x108 = 1U;
	int32_t t19 = -490018521;

	t19 = (((x105*x106)%x107)-x108);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = INT32_MIN;
	static uint64_t x111 = 184969269LLU;
	uint16_t x112 = 27U;
	volatile uint64_t t20 = 38385634330144LLU;

	t20 = (((x109*x110)%x111)-x112);

	if (t20 != 171141150LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = INT16_MIN;
	int64_t x114 = -1LL;
	volatile int32_t x115 = INT32_MAX;
	static int16_t x116 = 4507;
	volatile int64_t t21 = -10784501292405LL;

	t21 = (((x113*x114)%x115)-x116);

	if (t21 != 28261LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x118 = -1;
	int32_t x119 = -2248;
	int64_t t22 = 342337LL;

	t22 = (((x117*x118)%x119)-x120);

	if (t22 != 9223372036854775465LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x125 = 0;
	static int32_t x126 = -3550;
	uint64_t x127 = 100719401480020854LLU;
	volatile int8_t x128 = INT8_MAX;
	volatile uint64_t t23 = 572036294950218770LLU;

	t23 = (((x125*x126)%x127)-x128);

	if (t23 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x129 = 51LLU;
	static int32_t x130 = -7712;
	volatile int16_t x131 = -1;
	static uint16_t x132 = 29U;
	volatile uint64_t t24 = 3544088LLU;

	t24 = (((x129*x130)%x131)-x132);

	if (t24 != 18446744073709158275LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x133 = -504;
	int32_t x134 = -1;
	int16_t x136 = INT16_MIN;
	int32_t t25 = -252;

	t25 = (((x133*x134)%x135)-x136);

	if (t25 != 33272) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x141 = -1LL;
	int16_t x142 = INT16_MAX;
	static volatile int64_t x143 = -39248052LL;
	int8_t x144 = 2;
	volatile int64_t t26 = -284LL;

	t26 = (((x141*x142)%x143)-x144);

	if (t26 != -32769LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x145 = UINT8_MAX;
	static int16_t x146 = 0;
	int16_t x148 = INT16_MAX;
	volatile int32_t t27 = 87079815;

	t27 = (((x145*x146)%x147)-x148);

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x149 = INT16_MIN;
	volatile uint8_t x150 = 15U;
	int32_t x151 = -92362828;
	static uint32_t x152 = 1154400186U;
	uint32_t t28 = 594658778U;

	t28 = (((x149*x150)%x151)-x152);

	if (t28 != 3140075590U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x157 = 6U;
	int16_t x158 = INT16_MIN;
	uint64_t x159 = 31LLU;
	uint64_t x160 = 31997230665LLU;
	volatile uint64_t t29 = 10252LLU;

	t29 = (((x157*x158)%x159)-x160);

	if (t29 != 18446744041712320961LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x161 = INT32_MAX;
	static int64_t x162 = 1577LL;
	int8_t x163 = 31;
	static int8_t x164 = INT8_MIN;

	t30 = (((x161*x162)%x163)-x164);

	if (t30 != 155LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x169 = 1233895528LLU;
	volatile uint32_t x170 = 3833994U;
	int32_t x171 = -1;
	int32_t x172 = INT32_MIN;
	uint64_t t31 = 443346LLU;

	t31 = (((x169*x170)%x171)-x172);

	if (t31 != 4730750198462480LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x181 = 7717878805378707LLU;
	volatile int16_t x182 = INT16_MIN;
	int64_t x183 = 1LL;
	uint8_t x184 = 60U;
	static uint64_t t32 = 58LLU;

	t32 = (((x181*x182)%x183)-x184);

	if (t32 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x185 = 119666662U;
	int8_t x186 = INT8_MIN;
	volatile uint16_t x187 = UINT16_MAX;
	uint16_t x188 = 20825U;
	volatile uint32_t t33 = 107122080U;

	t33 = (((x185*x186)%x187)-x188);

	if (t33 != 10923U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x189 = INT32_MAX;
	int32_t x190 = -1;
	uint8_t x191 = UINT8_MAX;
	int16_t x192 = 1316;

	t34 = (((x189*x190)%x191)-x192);

	if (t34 != -1443) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x197 = 19580U;
	int8_t x198 = -1;
	volatile uint16_t x199 = 11U;
	int32_t x200 = INT32_MIN;
	uint32_t t35 = 3U;

	t35 = (((x197*x198)%x199)-x200);

	if (t35 != 2147483652U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x205 = -1;
	static uint8_t x206 = UINT8_MAX;
	static int8_t x208 = 21;
	volatile int64_t t36 = -1472482115691236LL;

	t36 = (((x205*x206)%x207)-x208);

	if (t36 != -276LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x213 = INT32_MAX;
	int64_t x214 = 101973794LL;
	int16_t x215 = INT16_MIN;
	int64_t t37 = 1LL;

	t37 = (((x213*x214)%x215)-x216);

	if (t37 != 95LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x217 = 733LL;
	volatile uint32_t x218 = UINT32_MAX;
	uint32_t x219 = 843643368U;
	int16_t x220 = 6;

	t38 = (((x217*x218)%x219)-x220);

	if (t38 != 577621221LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x221 = INT32_MIN;
	uint32_t x222 = 87505U;
	volatile uint32_t x223 = 99709U;
	static int32_t x224 = INT32_MIN;

	t39 = (((x221*x222)%x223)-x224);

	if (t39 != 2147534563U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x225 = 2859;
	static int64_t x226 = -46647LL;
	uint64_t x227 = 17514264734753281LLU;
	int32_t x228 = INT32_MAX;
	static volatile uint64_t t40 = 64508517410LLU;

	t40 = (((x225*x226)%x227)-x228);

	if (t40 != 4223305733499303LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x229 = INT16_MIN;
	int64_t x230 = 4074LL;
	uint32_t x231 = 1U;
	int64_t t41 = -11530252233071610LL;

	t41 = (((x229*x230)%x231)-x232);

	if (t41 != -4294967295LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x233 = -6853;
	static uint16_t x234 = 414U;
	volatile uint32_t x235 = UINT32_MAX;
	uint16_t x236 = 988U;
	uint32_t t42 = 274387321U;

	t42 = (((x233*x234)%x235)-x236);

	if (t42 != 4292129166U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x238 = 2341U;
	int16_t x239 = -1;
	volatile uint16_t x240 = UINT16_MAX;
	static volatile int32_t t43 = 1255653;

	t43 = (((x237*x238)%x239)-x240);

	if (t43 != -65535) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x253 = 3U;
	static uint8_t x254 = 116U;
	volatile uint32_t x255 = 191350U;
	volatile uint32_t t44 = 5U;

	t44 = (((x253*x254)%x255)-x256);

	if (t44 != 33116U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x257 = -380;
	uint16_t x258 = 25U;
	int8_t x259 = -1;
	int8_t x260 = 43;

	t45 = (((x257*x258)%x259)-x260);

	if (t45 != -43) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x265 = UINT16_MAX;
	volatile uint32_t x266 = 1U;
	int32_t x267 = -1;
	volatile int64_t x268 = INT64_MAX;
	int64_t t46 = 731LL;

	t46 = (((x265*x266)%x267)-x268);

	if (t46 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x269 = 6211LLU;
	static int32_t x271 = INT32_MAX;
	static int64_t x272 = -1LL;
	volatile uint64_t t47 = 2LLU;

	t47 = (((x269*x270)%x271)-x272);

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x277 = UINT32_MAX;
	int8_t x279 = -1;
	volatile uint8_t x280 = 16U;
	uint64_t t48 = 29LLU;

	t48 = (((x277*x278)%x279)-x280);

	if (t48 != 2105725982593185104LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x289 = -1;
	static volatile int16_t x290 = INT16_MAX;
	int16_t x291 = -1;
	int32_t x292 = 26916117;
	int32_t t49 = -85262;

	t49 = (((x289*x290)%x291)-x292);

	if (t49 != -26916117) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x293 = UINT32_MAX;
	volatile int32_t x294 = INT32_MIN;
	int64_t x295 = -1LL;
	int16_t x296 = INT16_MAX;
	static int64_t t50 = -8934268946842391LL;

	t50 = (((x293*x294)%x295)-x296);

	if (t50 != -32767LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x297 = -22;
	uint8_t x298 = UINT8_MAX;
	volatile int32_t x299 = INT32_MIN;
	volatile uint32_t x300 = 38U;
	static volatile uint32_t t51 = 3802U;

	t51 = (((x297*x298)%x299)-x300);

	if (t51 != 4294961648U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x309 = 14U;
	static int64_t x310 = -90464025LL;
	int32_t x311 = -1;
	int64_t t52 = 915579541509825396LL;

	t52 = (((x309*x310)%x311)-x312);

	if (t52 != -65535LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x321 = 7595308506318045LL;
	int16_t x322 = 0;
	volatile int8_t x323 = -1;
	int64_t t53 = -187560545987522LL;

	t53 = (((x321*x322)%x323)-x324);

	if (t53 != -52382598LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x325 = -1;
	static uint64_t x326 = UINT64_MAX;
	static volatile int32_t x327 = INT32_MIN;
	int32_t x328 = -1;
	static uint64_t t54 = 114685911LLU;

	t54 = (((x325*x326)%x327)-x328);

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x333 = 26U;
	volatile uint64_t x334 = 57829932383679LLU;
	static int32_t x335 = -1066453137;
	uint64_t x336 = UINT64_MAX;
	static uint64_t t55 = 75303182221LLU;

	t55 = (((x333*x334)%x335)-x336);

	if (t55 != 1503578241975655LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x337 = 487U;
	uint8_t x338 = UINT8_MAX;
	int8_t x339 = INT8_MAX;
	int32_t t56 = 170;

	t56 = (((x337*x338)%x339)-x340);

	if (t56 != 234) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x345 = 3U;
	int32_t x346 = 315974;
	uint64_t x348 = 0LLU;
	uint64_t t57 = 27790LLU;

	t57 = (((x345*x346)%x347)-x348);

	if (t57 != 947922LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x353 = INT8_MAX;
	uint32_t x354 = 1U;
	int64_t x355 = -213862359873LL;
	int32_t x356 = INT32_MIN;
	static int64_t t58 = 56LL;

	t58 = (((x353*x354)%x355)-x356);

	if (t58 != 2147483775LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x361 = 400632U;
	uint32_t x362 = 283268U;
	uint16_t x363 = 2U;
	volatile uint8_t x364 = UINT8_MAX;
	uint32_t t59 = 28U;

	t59 = (((x361*x362)%x363)-x364);

	if (t59 != 4294967041U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x366 = 1277927198465LL;
	uint64_t x367 = UINT64_MAX;
	int16_t x368 = INT16_MIN;
	uint64_t t60 = 66926483LLU;

	t60 = (((x365*x366)%x367)-x368);

	if (t60 != 18404868955270283264LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x370 = 353259LL;
	uint32_t x372 = 25U;

	t61 = (((x369*x370)%x371)-x372);

	if (t61 != 8LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x373 = 270;
	int8_t x375 = INT8_MIN;
	int8_t x376 = INT8_MIN;
	volatile int32_t t62 = -24;

	t62 = (((x373*x374)%x375)-x376);

	if (t62 != 114) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x385 = 261428LL;
	uint32_t x386 = 16832813U;
	volatile int32_t x387 = -1;
	static uint64_t t63 = 215626915941LLU;

	t63 = (((x385*x386)%x387)-x388);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x389 = INT8_MIN;
	int8_t x390 = -1;
	uint8_t x391 = 1U;
	volatile int32_t t64 = -271;

	t64 = (((x389*x390)%x391)-x392);

	if (t64 != -65535) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x394 = -1LL;
	volatile uint32_t x396 = 22118074U;
	static volatile int64_t t65 = -444178487095472LL;

	t65 = (((x393*x394)%x395)-x396);

	if (t65 != -22118074LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x401 = UINT8_MAX;
	static uint64_t x402 = 38341377605020LLU;
	uint32_t x404 = UINT32_MAX;
	volatile uint64_t t66 = 2165392745222160262LLU;

	t66 = (((x401*x402)%x403)-x404);

	if (t66 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x409 = -1016;
	static volatile uint32_t x410 = UINT32_MAX;
	int32_t x412 = INT32_MIN;
	int64_t t67 = 1087LL;

	t67 = (((x409*x410)%x411)-x412);

	if (t67 != 2147484664LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x413 = UINT16_MAX;
	volatile int8_t x414 = INT8_MAX;
	int32_t x415 = INT32_MIN;

	t68 = (((x413*x414)%x415)-x416);

	if (t68 != 8322886) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x417 = INT16_MAX;
	volatile uint32_t x418 = 6054259U;
	int32_t x419 = -1;
	int16_t x420 = INT16_MIN;
	uint32_t t69 = 10U;

	t69 = (((x417*x418)%x419)-x420);

	if (t69 != 811441805U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x421 = UINT8_MAX;
	uint8_t x423 = 16U;
	uint16_t x424 = 0U;
	int64_t t70 = -26575790LL;

	t70 = (((x421*x422)%x423)-x424);

	if (t70 != -5LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x425 = INT16_MAX;
	uint32_t t71 = 134716421U;

	t71 = (((x425*x426)%x427)-x428);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x429 = -1LL;
	int16_t x430 = INT16_MAX;
	static uint64_t x431 = UINT64_MAX;
	static uint16_t x432 = 23U;
	volatile uint64_t t72 = 1891375840764197238LLU;

	t72 = (((x429*x430)%x431)-x432);

	if (t72 != 18446744073709518826LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x435 = INT32_MIN;
	static uint32_t x436 = UINT32_MAX;
	uint64_t t73 = 5222320220LLU;

	t73 = (((x433*x434)%x435)-x436);

	if (t73 != 13221010173370423000LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x438 = 5590U;
	int16_t x439 = INT16_MAX;
	volatile uint64_t x440 = UINT64_MAX;
	uint64_t t74 = 560419673134LLU;

	t74 = (((x437*x438)%x439)-x440);

	if (t74 != 21824LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x442 = -205897813;
	int8_t x443 = -1;
	volatile int64_t t75 = 332165911LL;

	t75 = (((x441*x442)%x443)-x444);

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x445 = 15801LLU;
	uint64_t x446 = UINT64_MAX;
	int64_t x447 = INT64_MAX;
	int8_t x448 = 3;
	uint64_t t76 = 2587453876945LLU;

	t76 = (((x445*x446)%x447)-x448);

	if (t76 != 9223372036854760005LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x449 = INT32_MIN;
	int64_t x450 = 315557521LL;
	static int32_t x452 = -1;

	t77 = (((x449*x450)%x451)-x452);

	if (t77 != 17769089457358635009LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x457 = -1LL;
	static uint16_t x458 = 227U;
	int32_t x459 = -1;

	t78 = (((x457*x458)%x459)-x460);

	if (t78 != -2147483647LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x461 = UINT64_MAX;
	static uint64_t x462 = UINT64_MAX;
	int16_t x463 = INT16_MIN;
	volatile uint64_t t79 = 27231991LLU;

	t79 = (((x461*x462)%x463)-x464);

	if (t79 != 18446744073708835666LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x465 = UINT16_MAX;
	int64_t x466 = -1LL;
	int16_t x467 = -1;
	volatile int64_t t80 = -1787153468104LL;

	t80 = (((x465*x466)%x467)-x468);

	if (t80 != 35786LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x469 = 15418U;
	static int16_t x470 = INT16_MIN;
	int8_t x471 = 37;
	volatile uint8_t x472 = UINT8_MAX;
	volatile int32_t t81 = 29867;

	t81 = (((x469*x470)%x471)-x472);

	if (t81 != -261) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x473 = UINT8_MAX;
	int32_t x474 = 3386046;
	int16_t x475 = 14;
	uint32_t x476 = 1171197119U;

	t82 = (((x473*x474)%x475)-x476);

	if (t82 != 3123770181U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x482 = 34;
	int32_t x483 = -1;
	uint32_t x484 = UINT32_MAX;
	volatile int64_t t83 = -872060LL;

	t83 = (((x481*x482)%x483)-x484);

	if (t83 != -4294967295LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x489 = INT8_MIN;
	uint64_t x490 = 247LLU;
	static int8_t x492 = -15;
	uint64_t t84 = 8294258LLU;

	t84 = (((x489*x490)%x491)-x492);

	if (t84 != 9223372036854744207LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x493 = INT8_MIN;
	int32_t x494 = 13;
	uint64_t x495 = UINT64_MAX;
	int8_t x496 = -3;
	uint64_t t85 = 56538584420653996LLU;

	t85 = (((x493*x494)%x495)-x496);

	if (t85 != 18446744073709549955LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x497 = -1;
	static int16_t x498 = 7;
	static int16_t x499 = INT16_MAX;
	int16_t x500 = INT16_MIN;
	static int32_t t86 = -2;

	t86 = (((x497*x498)%x499)-x500);

	if (t86 != 32761) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x502 = UINT64_MAX;
	uint16_t x503 = 7U;
	int16_t x504 = -1;
	uint64_t t87 = 7923749LLU;

	t87 = (((x501*x502)%x503)-x504);

	if (t87 != 2LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x505 = 112U;
	volatile int8_t x506 = INT8_MAX;
	static int16_t x507 = INT16_MIN;
	int32_t x508 = INT32_MAX;
	static volatile int32_t t88 = -69;

	t88 = (((x505*x506)%x507)-x508);

	if (t88 != -2147469423) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x513 = INT8_MIN;
	uint64_t x514 = UINT64_MAX;
	int64_t x515 = 48234LL;
	int8_t x516 = 9;
	uint64_t t89 = 33896037132LLU;

	t89 = (((x513*x514)%x515)-x516);

	if (t89 != 119LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x517 = -1LL;
	int64_t x518 = 68301765822911LL;
	int8_t x519 = 20;
	uint8_t x520 = 0U;
	static int64_t t90 = -2290111143LL;

	t90 = (((x517*x518)%x519)-x520);

	if (t90 != -11LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x525 = 199316876007726LL;
	int32_t x528 = INT32_MAX;
	int64_t t91 = -30953701LL;

	t91 = (((x525*x526)%x527)-x528);

	if (t91 != -2147477211LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x529 = 60U;
	uint8_t x530 = 0U;
	uint64_t t92 = 5LLU;

	t92 = (((x529*x530)%x531)-x532);

	if (t92 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x535 = INT64_MAX;
	uint16_t x536 = 0U;
	static volatile int64_t t93 = 11517020212LL;

	t93 = (((x533*x534)%x535)-x536);

	if (t93 != 370170LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x537 = UINT16_MAX;
	int32_t x538 = -1;
	int8_t x539 = INT8_MAX;
	uint32_t x540 = 46219438U;
	static uint32_t t94 = 52U;

	t94 = (((x537*x538)%x539)-x540);

	if (t94 != 4248747855U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x541 = 31U;
	static uint16_t x542 = 10U;
	int64_t x543 = -31LL;
	volatile int64_t t95 = -66372870772LL;

	t95 = (((x541*x542)%x543)-x544);

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x545 = -1;
	static volatile int16_t x546 = INT16_MIN;
	int8_t x547 = INT8_MIN;
	volatile int16_t x548 = INT16_MAX;
	volatile int32_t t96 = -45;

	t96 = (((x545*x546)%x547)-x548);

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x549 = 228U;
	int64_t x551 = -1LL;
	int8_t x552 = -1;

	t97 = (((x549*x550)%x551)-x552);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x554 = 53312;
	uint32_t x555 = 405U;
	uint8_t x556 = 33U;
	static volatile uint32_t t98 = 62U;

	t98 = (((x553*x554)%x555)-x556);

	if (t98 != 326U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x561 = -1;
	int64_t x562 = 8LL;
	int32_t x563 = -394992184;
	int8_t x564 = INT8_MAX;
	int64_t t99 = -25525949LL;

	t99 = (((x561*x562)%x563)-x564);

	if (t99 != -135LL) { NG(); } else { ; }
	
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

