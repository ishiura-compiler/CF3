#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 1;
static uint8_t x12 = UINT8_MAX;
volatile int32_t t2 = 23323;
int16_t x14 = INT16_MIN;
int32_t t4 = 1;
static volatile int32_t x22 = INT32_MIN;
volatile int32_t t5 = 287268;
static uint64_t x35 = 10380455780410LLU;
volatile int32_t t7 = 441426019;
static int32_t t9 = -279992731;
uint16_t x58 = 3397U;
volatile int16_t x59 = -1;
volatile int32_t t12 = 7662214;
int16_t x69 = INT16_MIN;
static volatile int32_t t17 = 387;
int32_t x88 = INT32_MAX;
int8_t x104 = -1;
uint64_t x116 = UINT64_MAX;
int32_t x131 = INT32_MAX;
uint8_t x139 = 2U;
int8_t x140 = -1;
uint16_t x161 = 11U;
volatile int32_t x172 = INT32_MIN;
static uint32_t x187 = 0U;
uint64_t x189 = UINT64_MAX;
int16_t x193 = -1;
static volatile int32_t t34 = -279949416;
uint8_t x216 = 0U;
uint8_t x221 = 50U;
int32_t t38 = -6;
uint32_t x228 = UINT32_MAX;
uint32_t x233 = 86U;
int8_t x236 = INT8_MIN;
volatile int8_t x242 = INT8_MAX;
static volatile int8_t x244 = -1;
uint8_t x248 = UINT8_MAX;
volatile int32_t t44 = 51435;
int8_t x252 = -1;
static uint32_t x254 = 210245417U;
int16_t x258 = -1;
uint16_t x260 = UINT16_MAX;
int32_t t47 = 228699200;
uint64_t x261 = UINT64_MAX;
static int16_t x263 = INT16_MIN;
uint64_t x268 = UINT64_MAX;
int32_t x269 = 317;
volatile int32_t t50 = -589799362;
int16_t x285 = -117;
int16_t x289 = -2;
uint8_t x292 = UINT8_MAX;
int64_t x300 = -1LL;
static uint64_t x301 = 15LLU;
int32_t x314 = INT32_MIN;
int32_t t57 = 92558821;
static int8_t x318 = 30;
volatile int32_t t59 = -850;
uint64_t x336 = UINT64_MAX;
volatile int32_t t60 = -258;
static int32_t t62 = 1193;
uint8_t x354 = 1U;
int64_t x356 = -304482788909949LL;
volatile uint32_t x361 = 8399U;
uint8_t x364 = 0U;
int64_t x372 = -1LL;
int16_t x376 = 3;
int64_t x381 = -522563683684LL;
static int8_t x383 = INT8_MIN;
volatile int32_t t70 = 158406274;
int16_t x390 = 91;
int32_t x392 = -140;
static int64_t x395 = -1LL;
static volatile uint8_t x396 = 47U;
uint64_t x398 = 294243640LLU;
uint8_t x399 = 17U;
volatile int32_t t74 = -168;
volatile int32_t t75 = 6;
uint16_t x407 = UINT16_MAX;
int16_t x412 = -3527;
volatile uint32_t x414 = 415771904U;
volatile int16_t x432 = 20;
volatile int8_t x437 = INT8_MIN;
int32_t t83 = -608072551;
uint64_t x454 = 2LLU;
static volatile int32_t t86 = 8231;
volatile int32_t t87 = 12331;
volatile int64_t x463 = INT64_MIN;
int32_t x464 = -44;
volatile int16_t x465 = INT16_MAX;
static int8_t x467 = 15;
static volatile uint64_t x477 = 14329538769LLU;
int64_t x479 = INT64_MAX;
static int16_t x480 = INT16_MAX;
uint32_t x486 = 117201760U;
int16_t x500 = -1;
static volatile uint64_t x510 = 1842677962LLU;
volatile int32_t t98 = -49912418;


void f0(void) {
	int64_t x1 = -1LL;
	int8_t x3 = INT8_MIN;
	int32_t x4 = 89;
	int32_t t0 = -660284;

	t0 = (((x1*x2)&x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 46;
	static int16_t x6 = -1;
	int8_t x7 = 42;
	int64_t x8 = 170513528135892314LL;
	volatile int32_t t1 = 28134612;

	t1 = (((x5*x6)&x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = UINT32_MAX;
	uint32_t x10 = 1U;
	uint64_t x11 = UINT64_MAX;

	t2 = (((x9*x10)&x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 1741;
	volatile int64_t x15 = INT64_MIN;
	static uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -4588;

	t3 = (((x13*x14)&x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 1;
	uint64_t x18 = UINT64_MAX;
	int8_t x19 = -18;
	int8_t x20 = 1;

	t4 = (((x17*x18)&x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1043859LL;
	int8_t x23 = INT8_MAX;
	volatile int64_t x24 = INT64_MIN;

	t5 = (((x21*x22)&x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint32_t x26 = 90994595U;
	uint16_t x27 = 284U;
	volatile uint64_t x28 = UINT64_MAX;
	volatile int32_t t6 = 3225113;

	t6 = (((x25*x26)&x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = 1;
	int32_t x34 = INT32_MAX;
	int32_t x36 = 14203511;

	t7 = (((x33*x34)&x35)<x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x41 = 270U;
	static int16_t x42 = INT16_MAX;
	uint32_t x43 = 391187U;
	static uint16_t x44 = 4U;
	int32_t t8 = -128447;

	t8 = (((x41*x42)&x43)<x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	uint8_t x46 = UINT8_MAX;
	static int64_t x47 = INT64_MAX;
	uint16_t x48 = 9491U;

	t9 = (((x45*x46)&x47)<x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = -1LL;
	static volatile int8_t x50 = 1;
	static uint32_t x51 = UINT32_MAX;
	int8_t x52 = -1;
	static int32_t t10 = 62;

	t10 = (((x49*x50)&x51)<x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MAX;
	int16_t x56 = INT16_MIN;
	volatile int32_t t11 = 116316590;

	t11 = (((x53*x54)&x55)<x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;
	uint32_t x60 = 1668U;

	t12 = (((x57*x58)&x59)<x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x61 = UINT8_MAX;
	static int8_t x62 = INT8_MAX;
	int32_t x63 = -1;
	int64_t x64 = INT64_MIN;
	int32_t t13 = -109;

	t13 = (((x61*x62)&x63)<x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x65 = INT64_MIN;
	int8_t x66 = 1;
	int32_t x67 = -1977;
	int32_t x68 = 124;
	int32_t t14 = -140;

	t14 = (((x65*x66)&x67)<x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x70 = INT8_MIN;
	uint64_t x71 = UINT64_MAX;
	int64_t x72 = -2067495859137014LL;
	int32_t t15 = 99371987;

	t15 = (((x69*x70)&x71)<x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -1;
	int32_t x74 = -143;
	volatile int32_t x75 = 30651702;
	int16_t x76 = INT16_MIN;
	volatile int32_t t16 = 47;

	t16 = (((x73*x74)&x75)<x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 0U;
	int16_t x78 = -10;
	uint64_t x79 = UINT64_MAX;
	static int32_t x80 = -1;

	t17 = (((x77*x78)&x79)<x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x85 = -1LL;
	int32_t x86 = -1;
	uint64_t x87 = 29927083742005231LLU;
	int32_t t18 = -3;

	t18 = (((x85*x86)&x87)<x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x101 = 126U;
	uint32_t x102 = UINT32_MAX;
	int32_t x103 = -1;
	static volatile int32_t t19 = 0;

	t19 = (((x101*x102)&x103)<x104);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x105 = 319515457U;
	uint32_t x106 = 120865U;
	int32_t x107 = INT32_MAX;
	int16_t x108 = INT16_MIN;
	volatile int32_t t20 = -47;

	t20 = (((x105*x106)&x107)<x108);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = 3;
	volatile uint32_t x110 = 84U;
	static int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MAX;
	volatile int32_t t21 = -31426685;

	t21 = (((x109*x110)&x111)<x112);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = -1;
	int64_t x114 = INT64_MAX;
	uint8_t x115 = 18U;
	int32_t t22 = -25978;

	t22 = (((x113*x114)&x115)<x116);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x129 = -1;
	int32_t x130 = -1;
	int8_t x132 = INT8_MAX;
	int32_t t23 = -6;

	t23 = (((x129*x130)&x131)<x132);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x137 = 33U;
	int8_t x138 = -1;
	volatile int32_t t24 = 248;

	t24 = (((x137*x138)&x139)<x140);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x153 = UINT32_MAX;
	int32_t x154 = INT32_MIN;
	uint16_t x155 = 309U;
	volatile uint64_t x156 = 95906LLU;
	int32_t t25 = -47956526;

	t25 = (((x153*x154)&x155)<x156);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x157 = 1067933974786184920LL;
	uint64_t x158 = 155164822630608LLU;
	static int32_t x159 = 14256;
	int64_t x160 = 48578377536LL;
	static volatile int32_t t26 = -44532363;

	t26 = (((x157*x158)&x159)<x160);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x162 = 0U;
	uint16_t x163 = UINT16_MAX;
	int16_t x164 = INT16_MIN;
	volatile int32_t t27 = 2692;

	t27 = (((x161*x162)&x163)<x164);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x169 = 1U;
	int32_t x170 = -1;
	int16_t x171 = INT16_MAX;
	volatile int32_t t28 = 27809;

	t28 = (((x169*x170)&x171)<x172);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x173 = INT8_MAX;
	int32_t x174 = -894029;
	int32_t x175 = INT32_MAX;
	static int16_t x176 = INT16_MIN;
	int32_t t29 = 1;

	t29 = (((x173*x174)&x175)<x176);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x177 = 52888U;
	static int8_t x178 = INT8_MIN;
	int32_t x179 = -30674;
	int8_t x180 = -1;
	volatile int32_t t30 = -1159275;

	t30 = (((x177*x178)&x179)<x180);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x181 = 687155767142LLU;
	volatile int16_t x182 = INT16_MIN;
	volatile int8_t x183 = 2;
	int8_t x184 = -1;
	static volatile int32_t t31 = -80586;

	t31 = (((x181*x182)&x183)<x184);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x185 = -1944;
	static volatile uint32_t x186 = 2U;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t32 = -11;

	t32 = (((x185*x186)&x187)<x188);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x190 = UINT16_MAX;
	int64_t x191 = -50924970710967LL;
	volatile int16_t x192 = INT16_MIN;
	int32_t t33 = 75961;

	t33 = (((x189*x190)&x191)<x192);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x194 = UINT32_MAX;
	uint64_t x195 = 998953255314684LLU;
	int32_t x196 = INT32_MAX;

	t34 = (((x193*x194)&x195)<x196);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x197 = 1;
	int16_t x198 = -1;
	int64_t x199 = INT64_MAX;
	int64_t x200 = -89455793057713309LL;
	volatile int32_t t35 = 449329;

	t35 = (((x197*x198)&x199)<x200);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x205 = UINT64_MAX;
	uint16_t x206 = 27U;
	int8_t x207 = -11;
	int8_t x208 = INT8_MAX;
	volatile int32_t t36 = -503;

	t36 = (((x205*x206)&x207)<x208);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x213 = 386012U;
	uint32_t x214 = 16196U;
	int32_t x215 = 334;
	volatile int32_t t37 = 8159;

	t37 = (((x213*x214)&x215)<x216);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x222 = INT16_MIN;
	static int8_t x223 = INT8_MAX;
	int32_t x224 = INT32_MIN;

	t38 = (((x221*x222)&x223)<x224);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x225 = 4;
	int64_t x226 = -11061977227LL;
	volatile uint32_t x227 = 25516535U;
	static volatile int32_t t39 = -1295267;

	t39 = (((x225*x226)&x227)<x228);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x229 = INT8_MIN;
	uint64_t x230 = UINT64_MAX;
	int8_t x231 = -1;
	int64_t x232 = 45759LL;
	int32_t t40 = -26;

	t40 = (((x229*x230)&x231)<x232);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x234 = INT32_MIN;
	int8_t x235 = INT8_MIN;
	volatile int32_t t41 = 217;

	t41 = (((x233*x234)&x235)<x236);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x237 = INT16_MIN;
	int64_t x238 = -1LL;
	int16_t x239 = INT16_MIN;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t42 = -19257;

	t42 = (((x237*x238)&x239)<x240);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x241 = 5U;
	static int64_t x243 = INT64_MIN;
	volatile int32_t t43 = 192318441;

	t43 = (((x241*x242)&x243)<x244);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x245 = -7078824;
	static int64_t x246 = -32474LL;
	volatile int8_t x247 = INT8_MAX;

	t44 = (((x245*x246)&x247)<x248);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x249 = 20202U;
	uint8_t x250 = 104U;
	static int64_t x251 = INT64_MIN;
	int32_t t45 = 34;

	t45 = (((x249*x250)&x251)<x252);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x253 = INT32_MIN;
	int32_t x255 = -26470145;
	volatile int16_t x256 = INT16_MAX;
	static int32_t t46 = 544294;

	t46 = (((x253*x254)&x255)<x256);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x257 = 732;
	volatile int8_t x259 = 57;

	t47 = (((x257*x258)&x259)<x260);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x262 = 32820033LLU;
	int8_t x264 = INT8_MAX;
	int32_t t48 = 344838564;

	t48 = (((x261*x262)&x263)<x264);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x265 = 11U;
	uint64_t x266 = UINT64_MAX;
	uint16_t x267 = 0U;
	volatile int32_t t49 = -3590570;

	t49 = (((x265*x266)&x267)<x268);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x270 = -1;
	static int8_t x271 = -1;
	uint32_t x272 = 519154U;

	t50 = (((x269*x270)&x271)<x272);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x286 = INT8_MAX;
	uint16_t x287 = UINT16_MAX;
	uint16_t x288 = 6345U;
	volatile int32_t t51 = 1;

	t51 = (((x285*x286)&x287)<x288);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x290 = INT8_MIN;
	volatile int16_t x291 = INT16_MIN;
	int32_t t52 = 342083018;

	t52 = (((x289*x290)&x291)<x292);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x293 = 1U;
	uint16_t x294 = 1U;
	volatile uint16_t x295 = 29517U;
	uint64_t x296 = UINT64_MAX;
	int32_t t53 = 42;

	t53 = (((x293*x294)&x295)<x296);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x297 = UINT8_MAX;
	uint8_t x298 = UINT8_MAX;
	uint32_t x299 = UINT32_MAX;
	volatile int32_t t54 = -479427;

	t54 = (((x297*x298)&x299)<x300);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x302 = 55U;
	static volatile int64_t x303 = 28696634974863851LL;
	static volatile int8_t x304 = INT8_MAX;
	volatile int32_t t55 = -101895718;

	t55 = (((x301*x302)&x303)<x304);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x309 = 1073595LLU;
	uint8_t x310 = 0U;
	int16_t x311 = -1;
	static int32_t x312 = INT32_MIN;
	static int32_t t56 = -227144398;

	t56 = (((x309*x310)&x311)<x312);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x313 = 0;
	static volatile uint64_t x315 = 14747LLU;
	int32_t x316 = INT32_MAX;

	t57 = (((x313*x314)&x315)<x316);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x317 = 738398U;
	static volatile uint16_t x319 = 798U;
	int64_t x320 = -1046992802LL;
	volatile int32_t t58 = -14;

	t58 = (((x317*x318)&x319)<x320);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x329 = UINT32_MAX;
	int16_t x330 = -1;
	uint16_t x331 = 380U;
	volatile uint8_t x332 = 29U;

	t59 = (((x329*x330)&x331)<x332);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x333 = -5646200LL;
	int8_t x334 = 35;
	volatile int32_t x335 = INT32_MIN;

	t60 = (((x333*x334)&x335)<x336);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x337 = UINT8_MAX;
	static int8_t x338 = 3;
	volatile uint8_t x339 = UINT8_MAX;
	static int64_t x340 = INT64_MIN;
	int32_t t61 = 1805;

	t61 = (((x337*x338)&x339)<x340);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x341 = -1LL;
	volatile int8_t x342 = 29;
	int8_t x343 = -1;
	int32_t x344 = -1;

	t62 = (((x341*x342)&x343)<x344);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x345 = 1779228U;
	int16_t x346 = 1084;
	static volatile int16_t x347 = INT16_MAX;
	int16_t x348 = INT16_MAX;
	int32_t t63 = 57;

	t63 = (((x345*x346)&x347)<x348);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x353 = 16;
	uint64_t x355 = 455718968210949675LLU;
	volatile int32_t t64 = 7;

	t64 = (((x353*x354)&x355)<x356);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x362 = -1;
	static volatile int64_t x363 = -1LL;
	int32_t t65 = 7;

	t65 = (((x361*x362)&x363)<x364);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x365 = 746220LLU;
	volatile int16_t x366 = -1;
	uint64_t x367 = 759243474768153566LLU;
	int32_t x368 = INT32_MAX;
	volatile int32_t t66 = 5724469;

	t66 = (((x365*x366)&x367)<x368);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x369 = -2592598;
	volatile int16_t x370 = -1;
	int32_t x371 = -1028;
	int32_t t67 = 204;

	t67 = (((x369*x370)&x371)<x372);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x373 = -1LL;
	volatile uint8_t x374 = 87U;
	int32_t x375 = -3057716;
	int32_t t68 = 7;

	t68 = (((x373*x374)&x375)<x376);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x377 = INT16_MIN;
	uint32_t x378 = UINT32_MAX;
	volatile int32_t x379 = -1;
	int16_t x380 = INT16_MIN;
	int32_t t69 = 6234;

	t69 = (((x377*x378)&x379)<x380);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x382 = 5604U;
	static volatile int64_t x384 = -665063559835LL;

	t70 = (((x381*x382)&x383)<x384);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x385 = INT16_MIN;
	uint8_t x386 = 0U;
	uint32_t x387 = 1882U;
	volatile int16_t x388 = -3;
	int32_t t71 = -280621;

	t71 = (((x385*x386)&x387)<x388);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x389 = INT16_MIN;
	uint64_t x391 = 2403LLU;
	volatile int32_t t72 = 1992819;

	t72 = (((x389*x390)&x391)<x392);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x393 = 11520U;
	uint8_t x394 = UINT8_MAX;
	int32_t t73 = -5780497;

	t73 = (((x393*x394)&x395)<x396);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x397 = 588692U;
	uint16_t x400 = 253U;

	t74 = (((x397*x398)&x399)<x400);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x401 = 411641LLU;
	uint32_t x402 = 3985U;
	static uint64_t x403 = 478094747486LLU;
	int32_t x404 = INT32_MIN;

	t75 = (((x401*x402)&x403)<x404);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x405 = -1;
	int16_t x406 = -1;
	int16_t x408 = 36;
	int32_t t76 = 10;

	t76 = (((x405*x406)&x407)<x408);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x409 = 19LLU;
	uint16_t x410 = 111U;
	volatile int8_t x411 = INT8_MIN;
	int32_t t77 = -8119788;

	t77 = (((x409*x410)&x411)<x412);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x413 = 6U;
	uint16_t x415 = UINT16_MAX;
	int8_t x416 = INT8_MAX;
	int32_t t78 = 1;

	t78 = (((x413*x414)&x415)<x416);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x421 = INT32_MAX;
	int8_t x422 = -1;
	uint8_t x423 = 74U;
	volatile uint64_t x424 = UINT64_MAX;
	static volatile int32_t t79 = -49;

	t79 = (((x421*x422)&x423)<x424);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x425 = -1;
	int16_t x426 = INT16_MAX;
	uint32_t x427 = 667U;
	int8_t x428 = -1;
	volatile int32_t t80 = 394;

	t80 = (((x425*x426)&x427)<x428);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x429 = UINT16_MAX;
	int16_t x430 = -1;
	static int64_t x431 = -1LL;
	volatile int32_t t81 = -42;

	t81 = (((x429*x430)&x431)<x432);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x433 = -1;
	static uint32_t x434 = 13650016U;
	int32_t x435 = -1;
	int8_t x436 = INT8_MIN;
	volatile int32_t t82 = -11599;

	t82 = (((x433*x434)&x435)<x436);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x438 = INT8_MIN;
	uint16_t x439 = 606U;
	volatile int8_t x440 = INT8_MAX;

	t83 = (((x437*x438)&x439)<x440);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x441 = UINT16_MAX;
	volatile uint64_t x442 = UINT64_MAX;
	uint64_t x443 = 84846LLU;
	static volatile int32_t x444 = INT32_MIN;
	volatile int32_t t84 = -178927527;

	t84 = (((x441*x442)&x443)<x444);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x449 = -1892;
	static int8_t x450 = INT8_MIN;
	static int32_t x451 = -1;
	uint32_t x452 = 923U;
	int32_t t85 = -2153;

	t85 = (((x449*x450)&x451)<x452);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x453 = INT16_MIN;
	int16_t x455 = INT16_MAX;
	uint32_t x456 = UINT32_MAX;

	t86 = (((x453*x454)&x455)<x456);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x457 = INT16_MIN;
	static uint32_t x458 = 222924U;
	int32_t x459 = INT32_MIN;
	int64_t x460 = INT64_MIN;

	t87 = (((x457*x458)&x459)<x460);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x461 = -2635644LL;
	int16_t x462 = -263;
	volatile int32_t t88 = 217469;

	t88 = (((x461*x462)&x463)<x464);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x466 = UINT8_MAX;
	static int16_t x468 = INT16_MIN;
	static volatile int32_t t89 = -606;

	t89 = (((x465*x466)&x467)<x468);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x469 = INT8_MAX;
	int32_t x470 = -1;
	static int64_t x471 = INT64_MIN;
	int32_t x472 = INT32_MIN;
	int32_t t90 = 4879;

	t90 = (((x469*x470)&x471)<x472);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x473 = 90U;
	int64_t x474 = 127630327095LL;
	uint32_t x475 = UINT32_MAX;
	uint16_t x476 = 9U;
	volatile int32_t t91 = -184994297;

	t91 = (((x473*x474)&x475)<x476);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x478 = INT64_MIN;
	static int32_t t92 = -1347364;

	t92 = (((x477*x478)&x479)<x480);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x481 = -6812;
	static uint64_t x482 = UINT64_MAX;
	static uint32_t x483 = 731324164U;
	static int64_t x484 = INT64_MAX;
	int32_t t93 = -88;

	t93 = (((x481*x482)&x483)<x484);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x485 = 1;
	static int16_t x487 = INT16_MIN;
	uint64_t x488 = 5464911733022LLU;
	volatile int32_t t94 = 77639463;

	t94 = (((x485*x486)&x487)<x488);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x489 = 422U;
	int16_t x490 = INT16_MIN;
	int16_t x491 = INT16_MIN;
	int8_t x492 = INT8_MAX;
	volatile int32_t t95 = 260;

	t95 = (((x489*x490)&x491)<x492);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x493 = UINT8_MAX;
	int32_t x494 = -2453666;
	int16_t x495 = INT16_MIN;
	int8_t x496 = INT8_MIN;
	volatile int32_t t96 = 490693086;

	t96 = (((x493*x494)&x495)<x496);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x497 = UINT64_MAX;
	int32_t x498 = INT32_MAX;
	static uint32_t x499 = 1995131075U;
	volatile int32_t t97 = 1;

	t97 = (((x497*x498)&x499)<x500);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x509 = UINT8_MAX;
	int32_t x511 = -3;
	volatile int8_t x512 = 2;

	t98 = (((x509*x510)&x511)<x512);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x513 = UINT64_MAX;
	int8_t x514 = INT8_MAX;
	uint32_t x515 = UINT32_MAX;
	int8_t x516 = INT8_MIN;
	int32_t t99 = 26;

	t99 = (((x513*x514)&x515)<x516);

	if (t99 != 1) { NG(); } else { ; }
	
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

