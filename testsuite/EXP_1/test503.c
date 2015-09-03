#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x12 = INT16_MIN;
static int8_t x19 = -1;
int16_t x26 = -605;
int16_t x31 = 280;
volatile int32_t t5 = 42663;
int8_t x39 = -1;
int8_t x40 = INT8_MIN;
int16_t x48 = 1;
int32_t x52 = INT32_MIN;
volatile uint16_t x53 = 38U;
int32_t t10 = 125984389;
int8_t x61 = INT8_MIN;
int32_t x64 = INT32_MAX;
static volatile int32_t t12 = -408781;
int32_t x76 = -1;
int32_t x85 = -5800584;
volatile uint64_t x86 = 304854LLU;
uint64_t x93 = UINT64_MAX;
int64_t x124 = -3441LL;
int32_t x139 = 15;
volatile uint8_t x161 = 0U;
int32_t t28 = 25872;
int32_t x175 = INT32_MIN;
static int64_t x183 = INT64_MIN;
int16_t x184 = INT16_MIN;
volatile int64_t x189 = 29983LL;
int32_t x196 = INT32_MAX;
static int32_t x198 = 37;
int16_t x202 = INT16_MIN;
int16_t x203 = INT16_MAX;
uint16_t x208 = 27342U;
uint16_t x209 = UINT16_MAX;
int32_t t39 = -1;
volatile int8_t x228 = INT8_MIN;
int64_t x234 = -1LL;
static int32_t t42 = -386;
int64_t x238 = INT64_MAX;
int16_t x240 = INT16_MIN;
int8_t x260 = 1;
volatile int32_t t49 = 1;
int8_t x266 = INT8_MAX;
uint8_t x268 = UINT8_MAX;
static uint8_t x277 = 28U;
int64_t x279 = INT64_MIN;
static int16_t x286 = INT16_MIN;
static int32_t t53 = -15533678;
int32_t t54 = 751333568;
int16_t x303 = INT16_MAX;
int32_t x305 = -1;
volatile int16_t x306 = INT16_MIN;
static int32_t t56 = -1;
static volatile int32_t x316 = INT32_MAX;
int16_t x318 = 20;
int8_t x321 = INT8_MIN;
int64_t x325 = INT64_MAX;
int32_t t62 = 7;
static volatile uint32_t x334 = 459752U;
uint16_t x336 = 1366U;
uint16_t x338 = 630U;
volatile uint64_t x340 = UINT64_MAX;
volatile int64_t x348 = -3847903175086158753LL;
uint16_t x351 = 9230U;
uint32_t x361 = 3400U;
uint16_t x379 = 1687U;
int64_t x384 = INT64_MIN;
int8_t x394 = 13;
static int32_t x404 = 3975405;
volatile int64_t x405 = -1086360790542LL;
static int8_t x408 = -1;
int32_t t78 = 2465685;
int8_t x410 = -1;
int8_t x411 = INT8_MIN;
uint16_t x432 = 2U;
volatile int16_t x433 = INT16_MIN;
static volatile int16_t x434 = -6;
int16_t x439 = INT16_MIN;
int64_t x456 = INT64_MAX;
int16_t x466 = INT16_MIN;
int32_t t89 = -72992119;
int16_t x471 = INT16_MIN;
int32_t x472 = -6;
static int32_t x476 = INT32_MIN;
uint16_t x477 = 227U;
int8_t x481 = -1;
volatile int32_t t93 = 94;
int16_t x489 = 1;
static uint8_t x497 = 8U;
uint32_t x498 = 3888450U;
volatile uint16_t x509 = 1436U;
int8_t x511 = 15;
uint64_t x523 = UINT64_MAX;


void f0(void) {
	uint8_t x1 = 2U;
	static uint64_t x2 = 212447LLU;
	int16_t x3 = INT16_MIN;
	int8_t x4 = -1;
	int32_t t0 = 9;

	t0 = (((x1*x2)^x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = -1;
	volatile int32_t x10 = INT32_MAX;
	volatile uint64_t x11 = 27241587LLU;
	static int32_t t1 = -43435;

	t1 = (((x9*x10)^x11)<x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x17 = -1;
	int64_t x18 = 69954482835139608LL;
	volatile uint8_t x20 = 1U;
	int32_t t2 = 72358391;

	t2 = (((x17*x18)^x19)<x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = -1;
	int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MIN;
	static int32_t x24 = INT32_MAX;
	volatile int32_t t3 = 13360078;

	t3 = (((x21*x22)^x23)<x24);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	int32_t x27 = INT32_MAX;
	int64_t x28 = -1LL;
	int32_t t4 = 63298416;

	t4 = (((x25*x26)^x27)<x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x29 = -1;
	uint32_t x30 = 19U;
	int8_t x32 = INT8_MIN;

	t5 = (((x29*x30)^x31)<x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x33 = 6U;
	int16_t x34 = INT16_MIN;
	uint8_t x35 = 2U;
	int64_t x36 = 44655087903591LL;
	volatile int32_t t6 = 574244;

	t6 = (((x33*x34)^x35)<x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -1LL;
	static int32_t x38 = -273;
	int32_t t7 = 914960;

	t7 = (((x37*x38)^x39)<x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x45 = INT16_MAX;
	static uint64_t x46 = 17700511LLU;
	int32_t x47 = 746775;
	volatile int32_t t8 = -60289556;

	t8 = (((x45*x46)^x47)<x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = -2;
	int64_t x50 = 33932LL;
	uint16_t x51 = 3867U;
	volatile int32_t t9 = -14001539;

	t9 = (((x49*x50)^x51)<x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x54 = 166LLU;
	int8_t x55 = INT8_MIN;
	int32_t x56 = -1;

	t10 = (((x53*x54)^x55)<x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x57 = INT8_MIN;
	int8_t x58 = INT8_MIN;
	static volatile int8_t x59 = INT8_MAX;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t11 = 163177283;

	t11 = (((x57*x58)^x59)<x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x62 = INT8_MIN;
	int8_t x63 = INT8_MIN;

	t12 = (((x61*x62)^x63)<x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x65 = INT16_MIN;
	volatile int16_t x66 = 0;
	static int8_t x67 = 1;
	int16_t x68 = -1041;
	static int32_t t13 = -26958;

	t13 = (((x65*x66)^x67)<x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MIN;
	uint32_t x74 = UINT32_MAX;
	int16_t x75 = -27;
	volatile int32_t t14 = 1;

	t14 = (((x73*x74)^x75)<x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x87 = 22594;
	int64_t x88 = INT64_MIN;
	int32_t t15 = -7;

	t15 = (((x85*x86)^x87)<x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = UINT64_MAX;
	int32_t x90 = INT32_MAX;
	int16_t x91 = -1;
	int32_t x92 = INT32_MIN;
	int32_t t16 = 30;

	t16 = (((x89*x90)^x91)<x92);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MIN;
	static uint32_t x96 = UINT32_MAX;
	volatile int32_t t17 = -12710823;

	t17 = (((x93*x94)^x95)<x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = INT16_MIN;
	int8_t x98 = INT8_MAX;
	int16_t x99 = -1414;
	int16_t x100 = -1;
	volatile int32_t t18 = -159;

	t18 = (((x97*x98)^x99)<x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x101 = -1;
	int64_t x102 = INT64_MAX;
	volatile uint16_t x103 = 10988U;
	volatile uint32_t x104 = 153107U;
	static int32_t t19 = 2;

	t19 = (((x101*x102)^x103)<x104);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = INT32_MAX;
	int64_t x106 = -1LL;
	int64_t x107 = -273104291748438818LL;
	int16_t x108 = -422;
	volatile int32_t t20 = 3277;

	t20 = (((x105*x106)^x107)<x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = -44085;
	static int8_t x110 = INT8_MIN;
	uint64_t x111 = UINT64_MAX;
	int32_t x112 = INT32_MAX;
	int32_t t21 = -149442415;

	t21 = (((x109*x110)^x111)<x112);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MAX;
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = INT8_MAX;
	volatile int8_t x116 = 25;
	volatile int32_t t22 = 3847;

	t22 = (((x113*x114)^x115)<x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x121 = INT16_MIN;
	int16_t x122 = -1;
	uint16_t x123 = UINT16_MAX;
	volatile int32_t t23 = -44;

	t23 = (((x121*x122)^x123)<x124);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = -1;
	uint16_t x126 = 13U;
	static uint8_t x127 = UINT8_MAX;
	static uint64_t x128 = 96543LLU;
	int32_t t24 = -14651;

	t24 = (((x125*x126)^x127)<x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x137 = 50495U;
	static uint64_t x138 = UINT64_MAX;
	volatile int32_t x140 = INT32_MAX;
	volatile int32_t t25 = -5494;

	t25 = (((x137*x138)^x139)<x140);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x153 = 4872;
	int16_t x154 = -1914;
	static int64_t x155 = 361144LL;
	int32_t x156 = INT32_MIN;
	int32_t t26 = 992974592;

	t26 = (((x153*x154)^x155)<x156);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x157 = UINT8_MAX;
	int32_t x158 = 5385035;
	static int32_t x159 = INT32_MIN;
	int8_t x160 = INT8_MIN;
	int32_t t27 = 1893;

	t27 = (((x157*x158)^x159)<x160);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x162 = INT64_MAX;
	uint32_t x163 = 8U;
	static int64_t x164 = INT64_MIN;

	t28 = (((x161*x162)^x163)<x164);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x169 = -1;
	int64_t x170 = 4301609231563382358LL;
	volatile uint32_t x171 = UINT32_MAX;
	uint64_t x172 = 13875293062337LLU;
	volatile int32_t t29 = -1023394;

	t29 = (((x169*x170)^x171)<x172);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x173 = INT8_MAX;
	uint16_t x174 = 28U;
	int64_t x176 = -313567325299741LL;
	static volatile int32_t t30 = 63282773;

	t30 = (((x173*x174)^x175)<x176);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x177 = 345879029166LL;
	uint8_t x178 = UINT8_MAX;
	volatile uint32_t x179 = 4108U;
	uint16_t x180 = UINT16_MAX;
	int32_t t31 = -1;

	t31 = (((x177*x178)^x179)<x180);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x181 = 20641927LL;
	uint64_t x182 = 4897071236408192LLU;
	static int32_t t32 = 91662081;

	t32 = (((x181*x182)^x183)<x184);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x185 = -11;
	uint8_t x186 = 48U;
	uint16_t x187 = UINT16_MAX;
	volatile uint16_t x188 = 48U;
	int32_t t33 = 850;

	t33 = (((x185*x186)^x187)<x188);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x190 = INT8_MAX;
	uint8_t x191 = 75U;
	static int32_t x192 = -1;
	int32_t t34 = 4089113;

	t34 = (((x189*x190)^x191)<x192);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x193 = -1;
	static int16_t x194 = -1;
	int8_t x195 = -1;
	volatile int32_t t35 = 53;

	t35 = (((x193*x194)^x195)<x196);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x197 = 6;
	int8_t x199 = -1;
	static volatile int64_t x200 = 129060LL;
	volatile int32_t t36 = -1;

	t36 = (((x197*x198)^x199)<x200);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x201 = -14;
	int8_t x204 = 0;
	int32_t t37 = -3723;

	t37 = (((x201*x202)^x203)<x204);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x205 = -2968;
	int16_t x206 = -1;
	volatile int32_t x207 = INT32_MAX;
	volatile int32_t t38 = -44511;

	t38 = (((x205*x206)^x207)<x208);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x210 = -8;
	int8_t x211 = 0;
	int16_t x212 = INT16_MIN;

	t39 = (((x209*x210)^x211)<x212);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x225 = -9LL;
	int8_t x226 = -1;
	int8_t x227 = INT8_MAX;
	static volatile int32_t t40 = -2490;

	t40 = (((x225*x226)^x227)<x228);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x229 = INT16_MAX;
	int8_t x230 = INT8_MAX;
	int16_t x231 = INT16_MAX;
	uint32_t x232 = UINT32_MAX;
	int32_t t41 = -49;

	t41 = (((x229*x230)^x231)<x232);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x233 = UINT64_MAX;
	static int64_t x235 = INT64_MAX;
	int16_t x236 = INT16_MIN;

	t42 = (((x233*x234)^x235)<x236);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x237 = 1;
	int8_t x239 = 2;
	static volatile int32_t t43 = -1306742;

	t43 = (((x237*x238)^x239)<x240);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x241 = INT16_MAX;
	volatile int16_t x242 = -1;
	static uint64_t x243 = 41029440LLU;
	static volatile int64_t x244 = INT64_MIN;
	static int32_t t44 = 1;

	t44 = (((x241*x242)^x243)<x244);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x245 = 22826;
	int16_t x246 = INT16_MAX;
	int16_t x247 = 9;
	int64_t x248 = -363LL;
	volatile int32_t t45 = -24992;

	t45 = (((x245*x246)^x247)<x248);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x249 = INT8_MAX;
	volatile int8_t x250 = -1;
	int16_t x251 = INT16_MIN;
	uint32_t x252 = UINT32_MAX;
	volatile int32_t t46 = 2;

	t46 = (((x249*x250)^x251)<x252);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x253 = 305901877LLU;
	static int16_t x254 = -352;
	int16_t x255 = INT16_MIN;
	uint16_t x256 = 3746U;
	volatile int32_t t47 = 3;

	t47 = (((x253*x254)^x255)<x256);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x257 = -72181699;
	int64_t x258 = -1LL;
	int8_t x259 = 24;
	volatile int32_t t48 = -8668;

	t48 = (((x257*x258)^x259)<x260);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x261 = 228U;
	static int8_t x262 = -1;
	static int16_t x263 = INT16_MIN;
	uint16_t x264 = 60U;

	t49 = (((x261*x262)^x263)<x264);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x265 = 0;
	static int64_t x267 = -14927678749LL;
	static volatile int32_t t50 = 0;

	t50 = (((x265*x266)^x267)<x268);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x273 = INT8_MIN;
	int16_t x274 = -25;
	int32_t x275 = INT32_MIN;
	volatile int32_t x276 = INT32_MAX;
	int32_t t51 = -588256;

	t51 = (((x273*x274)^x275)<x276);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x278 = -1590872572532LL;
	static int32_t x280 = INT32_MAX;
	int32_t t52 = -335446;

	t52 = (((x277*x278)^x279)<x280);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x285 = 20U;
	uint64_t x287 = 134922LLU;
	int32_t x288 = INT32_MAX;

	t53 = (((x285*x286)^x287)<x288);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x289 = 503152369855LL;
	static uint16_t x290 = 16U;
	int8_t x291 = -1;
	volatile int64_t x292 = -1LL;

	t54 = (((x289*x290)^x291)<x292);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = INT8_MAX;
	static volatile int64_t x304 = INT64_MIN;
	volatile int32_t t55 = -15130146;

	t55 = (((x301*x302)^x303)<x304);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x307 = INT8_MIN;
	int64_t x308 = 3738630585507374LL;

	t56 = (((x305*x306)^x307)<x308);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x309 = -1;
	volatile int16_t x310 = INT16_MAX;
	int32_t x311 = -384930576;
	int64_t x312 = -122998764LL;
	int32_t t57 = -15771;

	t57 = (((x309*x310)^x311)<x312);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x313 = UINT8_MAX;
	static uint8_t x314 = 32U;
	int16_t x315 = INT16_MAX;
	volatile int32_t t58 = 197160;

	t58 = (((x313*x314)^x315)<x316);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x317 = -1;
	static int8_t x319 = -1;
	static uint8_t x320 = 3U;
	int32_t t59 = 102445;

	t59 = (((x317*x318)^x319)<x320);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x322 = 221222643U;
	static int16_t x323 = -476;
	int16_t x324 = 4994;
	volatile int32_t t60 = 2046;

	t60 = (((x321*x322)^x323)<x324);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x326 = 897402589LLU;
	static uint16_t x327 = UINT16_MAX;
	int32_t x328 = -99;
	int32_t t61 = 873057;

	t61 = (((x325*x326)^x327)<x328);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x329 = 2U;
	uint8_t x330 = 4U;
	uint16_t x331 = UINT16_MAX;
	volatile uint16_t x332 = 10U;

	t62 = (((x329*x330)^x331)<x332);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x333 = INT8_MAX;
	uint64_t x335 = 1LLU;
	int32_t t63 = 14247140;

	t63 = (((x333*x334)^x335)<x336);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x337 = 19772238LL;
	uint16_t x339 = 20U;
	int32_t t64 = 119403037;

	t64 = (((x337*x338)^x339)<x340);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x341 = 234686965LLU;
	int8_t x342 = INT8_MAX;
	uint16_t x343 = UINT16_MAX;
	int16_t x344 = -2767;
	static volatile int32_t t65 = -187849;

	t65 = (((x341*x342)^x343)<x344);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x345 = INT16_MIN;
	static uint32_t x346 = 3955387U;
	int32_t x347 = INT32_MAX;
	int32_t t66 = -294300;

	t66 = (((x345*x346)^x347)<x348);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x349 = -1;
	volatile uint64_t x350 = 3817796740LLU;
	static uint32_t x352 = 98210U;
	volatile int32_t t67 = -4;

	t67 = (((x349*x350)^x351)<x352);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x353 = -29;
	uint8_t x354 = 14U;
	int64_t x355 = -1LL;
	uint8_t x356 = UINT8_MAX;
	static volatile int32_t t68 = -30692402;

	t68 = (((x353*x354)^x355)<x356);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x357 = 4;
	static uint8_t x358 = 15U;
	static uint32_t x359 = UINT32_MAX;
	volatile int64_t x360 = INT64_MAX;
	int32_t t69 = 702442;

	t69 = (((x357*x358)^x359)<x360);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x362 = 10U;
	volatile int32_t x363 = -1153;
	uint16_t x364 = 964U;
	int32_t t70 = -1;

	t70 = (((x361*x362)^x363)<x364);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x373 = -248903041LL;
	int32_t x374 = INT32_MIN;
	uint64_t x375 = 21596586537LLU;
	int32_t x376 = INT32_MIN;
	int32_t t71 = 55330822;

	t71 = (((x373*x374)^x375)<x376);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x377 = 282LL;
	static int32_t x378 = INT32_MIN;
	uint32_t x380 = 606302016U;
	volatile int32_t t72 = 14659796;

	t72 = (((x377*x378)^x379)<x380);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x381 = INT16_MIN;
	int32_t x382 = -1;
	int8_t x383 = -11;
	volatile int32_t t73 = -537224749;

	t73 = (((x381*x382)^x383)<x384);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x385 = 287942;
	static uint32_t x386 = 3U;
	uint32_t x387 = UINT32_MAX;
	int64_t x388 = 31311LL;
	volatile int32_t t74 = -1038196;

	t74 = (((x385*x386)^x387)<x388);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x393 = 177218548116858LLU;
	volatile int64_t x395 = INT64_MIN;
	static uint16_t x396 = UINT16_MAX;
	int32_t t75 = 1668506;

	t75 = (((x393*x394)^x395)<x396);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x397 = -1;
	uint32_t x398 = 68251754U;
	int32_t x399 = 458410973;
	volatile int32_t x400 = 10015;
	int32_t t76 = -756494;

	t76 = (((x397*x398)^x399)<x400);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x401 = 2761U;
	static volatile uint32_t x402 = 83U;
	int32_t x403 = -1;
	volatile int32_t t77 = 8;

	t77 = (((x401*x402)^x403)<x404);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x406 = 6875U;
	static int16_t x407 = INT16_MIN;

	t78 = (((x405*x406)^x407)<x408);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x409 = 136100935661LLU;
	int8_t x412 = INT8_MAX;
	int32_t t79 = 112;

	t79 = (((x409*x410)^x411)<x412);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x413 = 2246319336124070763LLU;
	int8_t x414 = 4;
	static uint64_t x415 = 706352LLU;
	uint16_t x416 = 166U;
	int32_t t80 = -201;

	t80 = (((x413*x414)^x415)<x416);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x417 = UINT8_MAX;
	uint16_t x418 = UINT16_MAX;
	int8_t x419 = -1;
	int64_t x420 = -1LL;
	volatile int32_t t81 = 1040;

	t81 = (((x417*x418)^x419)<x420);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x425 = -1;
	int8_t x426 = INT8_MAX;
	int32_t x427 = INT32_MAX;
	int8_t x428 = -4;
	int32_t t82 = 1576;

	t82 = (((x425*x426)^x427)<x428);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x429 = 30484323U;
	int32_t x430 = -1;
	int8_t x431 = 1;
	volatile int32_t t83 = 26441;

	t83 = (((x429*x430)^x431)<x432);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x435 = 0U;
	uint8_t x436 = UINT8_MAX;
	int32_t t84 = 51049;

	t84 = (((x433*x434)^x435)<x436);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x437 = 144;
	int16_t x438 = INT16_MAX;
	int32_t x440 = INT32_MAX;
	static int32_t t85 = -238867910;

	t85 = (((x437*x438)^x439)<x440);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x441 = 1U;
	uint64_t x442 = 482384710123LLU;
	uint64_t x443 = 17265944781LLU;
	int32_t x444 = INT32_MIN;
	volatile int32_t t86 = 2771922;

	t86 = (((x441*x442)^x443)<x444);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x445 = 4U;
	volatile uint16_t x446 = 8U;
	static int16_t x447 = -1;
	int64_t x448 = INT64_MIN;
	volatile int32_t t87 = 96593493;

	t87 = (((x445*x446)^x447)<x448);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x453 = 50U;
	volatile int8_t x454 = INT8_MIN;
	uint8_t x455 = 0U;
	volatile int32_t t88 = -103;

	t88 = (((x453*x454)^x455)<x456);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x465 = 29452U;
	static int8_t x467 = 29;
	uint32_t x468 = 0U;

	t89 = (((x465*x466)^x467)<x468);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x469 = 241U;
	uint16_t x470 = 1U;
	int32_t t90 = -84;

	t90 = (((x469*x470)^x471)<x472);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x473 = UINT16_MAX;
	volatile uint16_t x474 = 14034U;
	volatile int64_t x475 = INT64_MIN;
	int32_t t91 = 9078;

	t91 = (((x473*x474)^x475)<x476);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x478 = INT8_MAX;
	int64_t x479 = 206595211456LL;
	uint64_t x480 = UINT64_MAX;
	int32_t t92 = -28;

	t92 = (((x477*x478)^x479)<x480);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x482 = UINT64_MAX;
	volatile int8_t x483 = 1;
	int16_t x484 = INT16_MIN;

	t93 = (((x481*x482)^x483)<x484);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x485 = 124170737587LLU;
	int16_t x486 = -1;
	static int8_t x487 = INT8_MAX;
	uint64_t x488 = 835267354262LLU;
	volatile int32_t t94 = -113;

	t94 = (((x485*x486)^x487)<x488);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x490 = INT32_MIN;
	int16_t x491 = INT16_MIN;
	volatile int64_t x492 = INT64_MIN;
	int32_t t95 = 20;

	t95 = (((x489*x490)^x491)<x492);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x493 = 743221334LL;
	int16_t x494 = INT16_MIN;
	int16_t x495 = -16;
	int8_t x496 = -1;
	volatile int32_t t96 = 0;

	t96 = (((x493*x494)^x495)<x496);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x499 = INT64_MIN;
	int16_t x500 = 12946;
	volatile int32_t t97 = -78177;

	t97 = (((x497*x498)^x499)<x500);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x510 = -1;
	static volatile int16_t x512 = INT16_MIN;
	volatile int32_t t98 = 26;

	t98 = (((x509*x510)^x511)<x512);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x521 = 4U;
	uint8_t x522 = UINT8_MAX;
	int16_t x524 = INT16_MIN;
	static volatile int32_t t99 = -42997018;

	t99 = (((x521*x522)^x523)<x524);

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

