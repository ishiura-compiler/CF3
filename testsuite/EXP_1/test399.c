#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = 1685;
int32_t x8 = -107;
volatile int32_t t1 = 81;
uint64_t x17 = 300937793139910LLU;
uint64_t x19 = UINT64_MAX;
static volatile int32_t t3 = 1040;
uint8_t x22 = 19U;
volatile int32_t t4 = -36;
int8_t x25 = INT8_MAX;
int64_t x32 = -162171535547620700LL;
int8_t x35 = -52;
int32_t t9 = -6922;
int32_t x58 = -1;
volatile uint32_t x67 = 24590880U;
int64_t x68 = INT64_MAX;
uint16_t x70 = UINT16_MAX;
volatile int32_t x71 = -1;
int32_t t17 = 72480;
uint8_t x91 = UINT8_MAX;
uint64_t x104 = 1425506559601LLU;
int32_t t21 = -12;
int8_t x118 = -3;
volatile int64_t x119 = INT64_MIN;
static uint64_t x121 = 1925579930650LLU;
int32_t x122 = 34832362;
int32_t t23 = -213118;
volatile int8_t x137 = INT8_MIN;
static int32_t t28 = 64;
uint8_t x162 = 81U;
static volatile int16_t x165 = -1;
int8_t x166 = INT8_MAX;
uint16_t x169 = UINT16_MAX;
static uint8_t x173 = 124U;
int8_t x177 = INT8_MIN;
int16_t x178 = -1;
int32_t t33 = -173607;
static uint64_t x198 = 1297015565LLU;
volatile int32_t t36 = -1;
static uint64_t x205 = UINT64_MAX;
uint64_t x207 = 6735LLU;
uint32_t x217 = 4699U;
static int16_t x218 = INT16_MIN;
int8_t x221 = INT8_MAX;
int32_t x223 = INT32_MIN;
static volatile int32_t t42 = 6030301;
int8_t x233 = INT8_MAX;
int32_t x237 = INT32_MAX;
int8_t x244 = INT8_MIN;
static int32_t t46 = 3109;
static uint64_t x255 = UINT64_MAX;
int16_t x259 = -16101;
volatile uint8_t x260 = 43U;
uint32_t x269 = 2025156U;
uint32_t x273 = 274521606U;
static int32_t t50 = 94;
int16_t x280 = -1;
int32_t t51 = -898;
volatile uint32_t x301 = 230466351U;
int16_t x302 = INT16_MAX;
uint32_t x307 = UINT32_MAX;
int8_t x312 = INT8_MAX;
volatile int32_t t56 = 461149;
volatile int32_t t57 = -85;
int16_t x325 = INT16_MIN;
static uint32_t x326 = 6U;
uint32_t x344 = UINT32_MAX;
volatile uint8_t x352 = 2U;
static int32_t x353 = -1;
static int64_t x360 = INT64_MIN;
volatile int32_t t66 = -1215925;
volatile int32_t t67 = -1;
uint8_t x381 = 1U;
volatile int64_t x382 = INT64_MIN;
volatile int8_t x386 = INT8_MAX;
volatile uint16_t x406 = 1242U;
int32_t x409 = 247;
volatile int32_t t78 = 0;
uint8_t x418 = 17U;
int32_t t79 = -22474349;
volatile int8_t x425 = INT8_MAX;
static int32_t t82 = -39;
static int8_t x439 = 1;
volatile int32_t t83 = 1648101;
int32_t t84 = -1;
int32_t x456 = INT32_MIN;
int32_t t85 = -7895;
static int8_t x465 = 0;
int8_t x467 = INT8_MAX;
int32_t x470 = -2;
int32_t t90 = -2034846;
int32_t x486 = INT32_MIN;
volatile uint32_t x501 = UINT32_MAX;
uint32_t x502 = 103U;
static int64_t x507 = INT64_MAX;
int64_t x508 = INT64_MAX;
int8_t x509 = INT8_MIN;
int32_t t97 = 2673171;
uint8_t x514 = UINT8_MAX;
int32_t x515 = INT32_MAX;
static int64_t x516 = INT64_MIN;
uint8_t x517 = 0U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint64_t x2 = UINT64_MAX;
	int16_t x3 = INT16_MAX;
	uint64_t x4 = 825999162622LLU;

	t0 = (((x1*x2)%x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -6693395759LL;
	static int16_t x6 = INT16_MIN;
	static int32_t x7 = INT32_MIN;

	t1 = (((x5*x6)%x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	volatile int32_t x10 = -2479;
	int64_t x11 = -1LL;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -62343479;

	t2 = (((x9*x10)%x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x18 = -3863454LL;
	uint16_t x20 = 7282U;

	t3 = (((x17*x18)%x19)<x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -4;
	uint64_t x23 = 22011LLU;
	int8_t x24 = INT8_MAX;

	t4 = (((x21*x22)%x23)<x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = 79;
	uint32_t x27 = 474144U;
	int64_t x28 = INT64_MAX;
	int32_t t5 = 823155556;

	t5 = (((x25*x26)%x27)<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x29 = 4U;
	uint16_t x30 = 3879U;
	static int16_t x31 = INT16_MAX;
	volatile int32_t t6 = 7103;

	t6 = (((x29*x30)%x31)<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 14702440001LLU;
	uint8_t x34 = 0U;
	static volatile int32_t x36 = -29762;
	static volatile int32_t t7 = 0;

	t7 = (((x33*x34)%x35)<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 33256168408412LLU;
	uint8_t x42 = UINT8_MAX;
	static uint8_t x43 = 6U;
	int32_t x44 = -1;
	volatile int32_t t8 = -505930646;

	t8 = (((x41*x42)%x43)<x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 1353382U;
	static int32_t x46 = -15234;
	uint8_t x47 = 1U;
	uint16_t x48 = 3U;

	t9 = (((x45*x46)%x47)<x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x53 = 308129964LL;
	int8_t x54 = -1;
	volatile int64_t x55 = 62274217587271830LL;
	volatile int16_t x56 = INT16_MIN;
	int32_t t10 = 223214;

	t10 = (((x53*x54)%x55)<x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x57 = INT32_MAX;
	int16_t x59 = INT16_MAX;
	uint64_t x60 = UINT64_MAX;
	int32_t t11 = -5;

	t11 = (((x57*x58)%x59)<x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x61 = UINT64_MAX;
	uint64_t x62 = 203146259326066LLU;
	int16_t x63 = INT16_MIN;
	uint8_t x64 = 33U;
	volatile int32_t t12 = -334601119;

	t12 = (((x61*x62)%x63)<x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x65 = UINT64_MAX;
	static int8_t x66 = INT8_MIN;
	volatile int32_t t13 = -748565189;

	t13 = (((x65*x66)%x67)<x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x69 = 122092613LL;
	int16_t x72 = INT16_MIN;
	static int32_t t14 = -25;

	t14 = (((x69*x70)%x71)<x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -25;
	uint16_t x74 = UINT16_MAX;
	volatile int16_t x75 = -1;
	static uint8_t x76 = UINT8_MAX;
	int32_t t15 = -2018;

	t15 = (((x73*x74)%x75)<x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = INT8_MIN;
	static int8_t x78 = -35;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = -1;
	static int32_t t16 = 1754;

	t16 = (((x77*x78)%x79)<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x85 = 0;
	uint8_t x86 = 1U;
	int16_t x87 = 461;
	int32_t x88 = INT32_MAX;

	t17 = (((x85*x86)%x87)<x88);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x89 = -1LL;
	uint32_t x90 = 4924U;
	static int32_t x92 = -1;
	volatile int32_t t18 = -119890;

	t18 = (((x89*x90)%x91)<x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x97 = -43;
	static int8_t x98 = INT8_MIN;
	volatile uint32_t x99 = 376U;
	int32_t x100 = INT32_MIN;
	int32_t t19 = 1237766;

	t19 = (((x97*x98)%x99)<x100);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x102 = INT8_MIN;
	uint16_t x103 = UINT16_MAX;
	static volatile int32_t t20 = 125483717;

	t20 = (((x101*x102)%x103)<x104);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = UINT8_MAX;
	volatile int8_t x106 = INT8_MIN;
	uint64_t x107 = 50353228267973344LLU;
	volatile int32_t x108 = INT32_MIN;

	t21 = (((x105*x106)%x107)<x108);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x117 = INT16_MAX;
	int8_t x120 = -1;
	int32_t t22 = 115314;

	t22 = (((x117*x118)%x119)<x120);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x123 = 11067332U;
	static volatile int16_t x124 = INT16_MIN;

	t23 = (((x121*x122)%x123)<x124);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = INT32_MAX;
	volatile int8_t x126 = -1;
	uint32_t x127 = 28910U;
	uint16_t x128 = UINT16_MAX;
	int32_t t24 = -2;

	t24 = (((x125*x126)%x127)<x128);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x129 = UINT32_MAX;
	static int16_t x130 = -1;
	uint16_t x131 = UINT16_MAX;
	int8_t x132 = INT8_MAX;
	volatile int32_t t25 = 227;

	t25 = (((x129*x130)%x131)<x132);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x133 = 5235403LLU;
	uint64_t x134 = UINT64_MAX;
	uint64_t x135 = UINT64_MAX;
	int32_t x136 = INT32_MIN;
	volatile int32_t t26 = 0;

	t26 = (((x133*x134)%x135)<x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x138 = 7528521960LL;
	static int64_t x139 = INT64_MIN;
	int8_t x140 = INT8_MAX;
	volatile int32_t t27 = 891;

	t27 = (((x137*x138)%x139)<x140);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = 0;
	volatile int64_t x159 = 287135LL;
	int8_t x160 = 32;

	t28 = (((x157*x158)%x159)<x160);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x161 = INT8_MIN;
	volatile int8_t x163 = INT8_MAX;
	uint8_t x164 = 119U;
	volatile int32_t t29 = -1;

	t29 = (((x161*x162)%x163)<x164);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = -1;
	static int32_t t30 = 655118;

	t30 = (((x165*x166)%x167)<x168);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x170 = 10U;
	int16_t x171 = -2;
	int64_t x172 = INT64_MIN;
	int32_t t31 = 8370;

	t31 = (((x169*x170)%x171)<x172);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x174 = 8153U;
	int16_t x175 = 4388;
	static uint32_t x176 = 3394U;
	volatile int32_t t32 = 6;

	t32 = (((x173*x174)%x175)<x176);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x179 = 2;
	int32_t x180 = INT32_MAX;

	t33 = (((x177*x178)%x179)<x180);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x185 = INT8_MIN;
	static uint16_t x186 = UINT16_MAX;
	uint8_t x187 = UINT8_MAX;
	int32_t x188 = INT32_MIN;
	int32_t t34 = 994429234;

	t34 = (((x185*x186)%x187)<x188);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x197 = INT64_MAX;
	uint32_t x199 = UINT32_MAX;
	static int8_t x200 = 18;
	int32_t t35 = 0;

	t35 = (((x197*x198)%x199)<x200);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x201 = -1LL;
	uint8_t x202 = 7U;
	static int16_t x203 = INT16_MIN;
	volatile int64_t x204 = -1LL;

	t36 = (((x201*x202)%x203)<x204);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x206 = UINT16_MAX;
	static volatile uint16_t x208 = 449U;
	volatile int32_t t37 = 1;

	t37 = (((x205*x206)%x207)<x208);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x213 = -1173441296LL;
	int16_t x214 = INT16_MIN;
	int32_t x215 = INT32_MAX;
	volatile int32_t x216 = 10;
	int32_t t38 = -338;

	t38 = (((x213*x214)%x215)<x216);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x219 = UINT64_MAX;
	uint8_t x220 = 13U;
	int32_t t39 = 12262200;

	t39 = (((x217*x218)%x219)<x220);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x222 = 4420U;
	int32_t x224 = INT32_MAX;
	int32_t t40 = -619814516;

	t40 = (((x221*x222)%x223)<x224);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x225 = UINT32_MAX;
	volatile uint8_t x226 = 28U;
	uint16_t x227 = 719U;
	uint64_t x228 = 3887996LLU;
	int32_t t41 = 38876434;

	t41 = (((x225*x226)%x227)<x228);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x229 = INT16_MAX;
	static int8_t x230 = 47;
	static volatile int16_t x231 = INT16_MIN;
	int8_t x232 = INT8_MAX;

	t42 = (((x229*x230)%x231)<x232);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x234 = UINT8_MAX;
	volatile int32_t x235 = INT32_MAX;
	static volatile uint8_t x236 = 2U;
	int32_t t43 = 2967536;

	t43 = (((x233*x234)%x235)<x236);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x238 = -1;
	uint8_t x239 = UINT8_MAX;
	volatile int8_t x240 = INT8_MAX;
	volatile int32_t t44 = -21;

	t44 = (((x237*x238)%x239)<x240);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x241 = 47;
	int32_t x242 = 2007795;
	static uint16_t x243 = UINT16_MAX;
	volatile int32_t t45 = -53;

	t45 = (((x241*x242)%x243)<x244);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x249 = 4087;
	uint8_t x250 = 0U;
	int8_t x251 = INT8_MIN;
	static int64_t x252 = -1LL;

	t46 = (((x249*x250)%x251)<x252);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x253 = 415109U;
	uint32_t x254 = 4016835U;
	uint16_t x256 = 6358U;
	volatile int32_t t47 = -475;

	t47 = (((x253*x254)%x255)<x256);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x257 = 694U;
	int32_t x258 = INT32_MIN;
	int32_t t48 = -1;

	t48 = (((x257*x258)%x259)<x260);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x270 = 4;
	int32_t x271 = 27482535;
	uint16_t x272 = 28U;
	int32_t t49 = -32489071;

	t49 = (((x269*x270)%x271)<x272);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x274 = UINT32_MAX;
	static int32_t x275 = 9;
	uint32_t x276 = UINT32_MAX;

	t50 = (((x273*x274)%x275)<x276);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x277 = INT16_MIN;
	uint32_t x278 = 115773U;
	uint32_t x279 = 5U;

	t51 = (((x277*x278)%x279)<x280);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x285 = INT16_MAX;
	volatile int8_t x286 = INT8_MIN;
	int8_t x287 = INT8_MIN;
	static uint64_t x288 = 3369996LLU;
	int32_t t52 = 253395;

	t52 = (((x285*x286)%x287)<x288);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x297 = INT16_MIN;
	int16_t x298 = -21;
	uint8_t x299 = UINT8_MAX;
	int64_t x300 = INT64_MIN;
	volatile int32_t t53 = 64688;

	t53 = (((x297*x298)%x299)<x300);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x303 = 34U;
	static int32_t x304 = INT32_MIN;
	volatile int32_t t54 = 11738;

	t54 = (((x301*x302)%x303)<x304);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x305 = -1;
	static volatile int8_t x306 = INT8_MIN;
	int16_t x308 = -5;
	volatile int32_t t55 = 159385;

	t55 = (((x305*x306)%x307)<x308);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x309 = 12025U;
	static volatile uint32_t x310 = 808636701U;
	uint64_t x311 = 78185343215191889LLU;

	t56 = (((x309*x310)%x311)<x312);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x313 = -1;
	uint16_t x314 = 108U;
	uint32_t x315 = 47459U;
	static int16_t x316 = -1;

	t57 = (((x313*x314)%x315)<x316);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x327 = 22U;
	int8_t x328 = -1;
	static int32_t t58 = -6;

	t58 = (((x325*x326)%x327)<x328);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x329 = INT64_MAX;
	static volatile int8_t x330 = -1;
	static uint32_t x331 = 151463557U;
	int64_t x332 = -5710789830992327LL;
	int32_t t59 = -16738413;

	t59 = (((x329*x330)%x331)<x332);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x337 = 720691LL;
	volatile uint64_t x338 = UINT64_MAX;
	static uint8_t x339 = UINT8_MAX;
	int8_t x340 = INT8_MAX;
	volatile int32_t t60 = 30021;

	t60 = (((x337*x338)%x339)<x340);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x341 = UINT16_MAX;
	uint32_t x342 = 15397907U;
	uint16_t x343 = 36U;
	int32_t t61 = -16022;

	t61 = (((x341*x342)%x343)<x344);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x345 = 24;
	static int32_t x346 = -1;
	uint8_t x347 = UINT8_MAX;
	uint32_t x348 = UINT32_MAX;
	volatile int32_t t62 = 6457758;

	t62 = (((x345*x346)%x347)<x348);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x349 = 3U;
	int32_t x350 = -1;
	int8_t x351 = INT8_MIN;
	int32_t t63 = 25012429;

	t63 = (((x349*x350)%x351)<x352);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x354 = INT8_MAX;
	int32_t x355 = -1;
	static uint8_t x356 = UINT8_MAX;
	int32_t t64 = 0;

	t64 = (((x353*x354)%x355)<x356);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x357 = UINT64_MAX;
	int16_t x358 = INT16_MAX;
	volatile uint64_t x359 = UINT64_MAX;
	int32_t t65 = 41;

	t65 = (((x357*x358)%x359)<x360);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x361 = -35521940101LL;
	uint16_t x362 = 24U;
	static int16_t x363 = INT16_MIN;
	int16_t x364 = -1;

	t66 = (((x361*x362)%x363)<x364);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x365 = 77;
	static int8_t x366 = INT8_MAX;
	static int8_t x367 = 2;
	int64_t x368 = -454855424LL;

	t67 = (((x365*x366)%x367)<x368);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x369 = INT8_MIN;
	int8_t x370 = -1;
	int64_t x371 = 95685743673LL;
	static volatile int64_t x372 = -1LL;
	static int32_t t68 = -15;

	t68 = (((x369*x370)%x371)<x372);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x373 = 1179731367809037LLU;
	volatile uint16_t x374 = UINT16_MAX;
	uint16_t x375 = UINT16_MAX;
	uint8_t x376 = 5U;
	int32_t t69 = 44272541;

	t69 = (((x373*x374)%x375)<x376);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x377 = UINT8_MAX;
	int32_t x378 = 6;
	int32_t x379 = -1;
	uint64_t x380 = 29866173961LLU;
	volatile int32_t t70 = 101990;

	t70 = (((x377*x378)%x379)<x380);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x383 = INT16_MAX;
	int8_t x384 = 1;
	volatile int32_t t71 = -1;

	t71 = (((x381*x382)%x383)<x384);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x385 = 2U;
	int16_t x387 = -9448;
	volatile int64_t x388 = INT64_MAX;
	int32_t t72 = -52154;

	t72 = (((x385*x386)%x387)<x388);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x389 = INT32_MIN;
	static uint64_t x390 = UINT64_MAX;
	volatile int8_t x391 = -16;
	static uint16_t x392 = 5554U;
	static volatile int32_t t73 = 121;

	t73 = (((x389*x390)%x391)<x392);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x397 = 247927391LL;
	uint8_t x398 = UINT8_MAX;
	int32_t x399 = INT32_MAX;
	static uint64_t x400 = 799030528002866LLU;
	static int32_t t74 = -72727406;

	t74 = (((x397*x398)%x399)<x400);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x401 = INT8_MAX;
	int8_t x402 = INT8_MAX;
	uint16_t x403 = 3U;
	int16_t x404 = -1;
	static volatile int32_t t75 = 1230;

	t75 = (((x401*x402)%x403)<x404);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x405 = INT16_MIN;
	volatile uint32_t x407 = 406U;
	static int32_t x408 = INT32_MIN;
	static int32_t t76 = 3658114;

	t76 = (((x405*x406)%x407)<x408);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x410 = 25977LLU;
	static int32_t x411 = INT32_MIN;
	static uint16_t x412 = 97U;
	static volatile int32_t t77 = 15;

	t77 = (((x409*x410)%x411)<x412);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x413 = 757U;
	uint64_t x414 = 264320436LLU;
	int32_t x415 = 47394;
	uint16_t x416 = 2857U;

	t78 = (((x413*x414)%x415)<x416);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x417 = -1;
	int64_t x419 = INT64_MIN;
	volatile int64_t x420 = INT64_MIN;

	t79 = (((x417*x418)%x419)<x420);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x421 = 26U;
	uint64_t x422 = UINT64_MAX;
	int8_t x423 = 1;
	int8_t x424 = INT8_MIN;
	static volatile int32_t t80 = -45353106;

	t80 = (((x421*x422)%x423)<x424);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x426 = 39U;
	int32_t x427 = 199846630;
	volatile int8_t x428 = INT8_MIN;
	static int32_t t81 = 7191236;

	t81 = (((x425*x426)%x427)<x428);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x429 = INT16_MAX;
	uint16_t x430 = UINT16_MAX;
	int16_t x431 = 279;
	volatile int8_t x432 = -1;

	t82 = (((x429*x430)%x431)<x432);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x437 = 2857U;
	volatile int16_t x438 = -1;
	int8_t x440 = INT8_MAX;

	t83 = (((x437*x438)%x439)<x440);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x445 = 184535657281181748LLU;
	int8_t x446 = -1;
	int16_t x447 = INT16_MIN;
	int8_t x448 = -6;

	t84 = (((x445*x446)%x447)<x448);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x453 = 225075689;
	uint32_t x454 = 15U;
	int64_t x455 = -109120LL;

	t85 = (((x453*x454)%x455)<x456);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x457 = 13435118241LL;
	static int16_t x458 = INT16_MIN;
	int16_t x459 = INT16_MIN;
	uint64_t x460 = 289202503493074147LLU;
	int32_t t86 = -158;

	t86 = (((x457*x458)%x459)<x460);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x461 = 1602679202U;
	int8_t x462 = INT8_MIN;
	int16_t x463 = INT16_MIN;
	int64_t x464 = -1LL;
	int32_t t87 = -7949;

	t87 = (((x461*x462)%x463)<x464);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x466 = INT16_MAX;
	int32_t x468 = -1;
	int32_t t88 = -6;

	t88 = (((x465*x466)%x467)<x468);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x469 = 793U;
	int16_t x471 = INT16_MIN;
	volatile int64_t x472 = INT64_MAX;
	volatile int32_t t89 = 15563272;

	t89 = (((x469*x470)%x471)<x472);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x473 = -1;
	static int8_t x474 = -1;
	int16_t x475 = -1;
	volatile uint8_t x476 = 15U;

	t90 = (((x473*x474)%x475)<x476);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x485 = 6317LLU;
	static int32_t x487 = INT32_MIN;
	static int64_t x488 = 267301678LL;
	static int32_t t91 = 0;

	t91 = (((x485*x486)%x487)<x488);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x489 = 356LL;
	int32_t x490 = INT32_MIN;
	int16_t x491 = 9;
	uint8_t x492 = UINT8_MAX;
	int32_t t92 = -119433587;

	t92 = (((x489*x490)%x491)<x492);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x493 = UINT16_MAX;
	int16_t x494 = INT16_MAX;
	int8_t x495 = INT8_MIN;
	int16_t x496 = -2003;
	volatile int32_t t93 = 3935;

	t93 = (((x493*x494)%x495)<x496);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x497 = -1;
	uint64_t x498 = 1044752208861LLU;
	int64_t x499 = 41711LL;
	uint64_t x500 = UINT64_MAX;
	static int32_t t94 = 31;

	t94 = (((x497*x498)%x499)<x500);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x503 = -1;
	int64_t x504 = -1LL;
	volatile int32_t t95 = 84642;

	t95 = (((x501*x502)%x503)<x504);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x505 = INT16_MAX;
	static uint64_t x506 = UINT64_MAX;
	int32_t t96 = 241808487;

	t96 = (((x505*x506)%x507)<x508);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x510 = 0U;
	uint16_t x511 = UINT16_MAX;
	int8_t x512 = -1;

	t97 = (((x509*x510)%x511)<x512);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x513 = UINT16_MAX;
	volatile int32_t t98 = -107093875;

	t98 = (((x513*x514)%x515)<x516);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x518 = 11U;
	int32_t x519 = INT32_MAX;
	int16_t x520 = INT16_MIN;
	int32_t t99 = 5208;

	t99 = (((x517*x518)%x519)<x520);

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

