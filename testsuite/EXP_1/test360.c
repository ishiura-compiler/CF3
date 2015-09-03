#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
int32_t x3 = -1;
int32_t t1 = 18537;
int16_t x10 = INT16_MAX;
int8_t x34 = INT8_MIN;
volatile int16_t x50 = 0;
int16_t x53 = -1;
uint8_t x54 = UINT8_MAX;
int32_t t9 = -6106218;
int32_t t10 = 1420;
int64_t x66 = 109652720421944LL;
int32_t t11 = -657295;
int32_t x76 = -62;
uint64_t x77 = UINT64_MAX;
uint32_t x79 = 194U;
uint8_t x80 = 2U;
static volatile int32_t t14 = 279;
int16_t x85 = -2303;
uint8_t x92 = 53U;
static uint16_t x115 = UINT16_MAX;
static int8_t x118 = -1;
static int8_t x130 = 7;
uint8_t x134 = 10U;
int16_t x135 = -12;
uint64_t x145 = 3312LLU;
int8_t x148 = -1;
int8_t x154 = 19;
volatile int64_t x156 = INT64_MAX;
uint16_t x157 = UINT16_MAX;
static int8_t x158 = INT8_MAX;
uint8_t x159 = UINT8_MAX;
int32_t x161 = 1;
static uint64_t x163 = 99683778417305090LLU;
int64_t x164 = -94564490LL;
int8_t x165 = -16;
static int16_t x166 = INT16_MIN;
uint8_t x173 = UINT8_MAX;
volatile int32_t t35 = -1912;
int32_t x179 = INT32_MIN;
static uint32_t x182 = UINT32_MAX;
int32_t t37 = -35147;
int32_t x186 = -159;
int8_t x190 = 9;
int16_t x193 = INT16_MAX;
int32_t t41 = 17899880;
int8_t x217 = -1;
static uint8_t x218 = 57U;
uint8_t x232 = UINT8_MAX;
static volatile int16_t x236 = -1;
int16_t x251 = INT16_MAX;
int64_t x256 = -1LL;
volatile int32_t t51 = 9212;
static int32_t t52 = 1152;
volatile int8_t x265 = INT8_MIN;
int64_t x267 = INT64_MAX;
int32_t x270 = -1;
static int32_t x278 = 45;
volatile uint64_t x289 = 135881137200LLU;
int8_t x292 = INT8_MAX;
int64_t x304 = 2136918309336759072LL;
volatile int32_t t59 = 26998;
uint8_t x311 = UINT8_MAX;
int8_t x314 = INT8_MIN;
static volatile int32_t t61 = 5;
int32_t x329 = 1;
volatile uint32_t x330 = 1U;
static uint32_t x337 = UINT32_MAX;
static volatile int16_t x340 = INT16_MIN;
volatile int32_t t65 = -80755550;
uint16_t x404 = 256U;
static uint8_t x419 = UINT8_MAX;
int32_t t77 = 10328796;
volatile int64_t x425 = 414579LL;
volatile int8_t x426 = INT8_MIN;
static uint8_t x427 = UINT8_MAX;
static int64_t x442 = 22720LL;
static volatile uint64_t x446 = UINT64_MAX;
int16_t x455 = INT16_MAX;
volatile int32_t t83 = 775;
volatile int32_t t84 = -45576;
static uint64_t x477 = 7031310022204347LLU;
int16_t x478 = 45;
volatile uint32_t x480 = 11047U;
int64_t x496 = -44445225LL;
uint64_t x499 = UINT64_MAX;
volatile int64_t x501 = -1LL;
int32_t t89 = -15;
static volatile int32_t x514 = -1;
int64_t x524 = INT64_MAX;
volatile uint64_t x527 = 3592168270406766LLU;
static uint8_t x528 = 27U;
static uint16_t x532 = UINT16_MAX;
static uint32_t x541 = UINT32_MAX;
volatile int16_t x547 = 2;
int8_t x552 = INT8_MIN;
volatile int32_t t96 = -62480;
volatile uint64_t x560 = 85634LLU;
uint64_t x566 = 5132013030LLU;
uint8_t x568 = 1U;
volatile uint8_t x571 = 97U;
int8_t x572 = -1;
volatile int32_t t99 = 751753711;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int64_t x4 = INT64_MAX;
	int32_t t0 = 14350;

	t0 = (((x1*x2)-x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint32_t x6 = UINT32_MAX;
	int64_t x7 = 1376552274417827LL;
	int32_t x8 = 63985;

	t1 = (((x5*x6)-x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	static volatile int8_t x11 = INT8_MAX;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 203380228;

	t2 = (((x9*x10)-x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = 0;
	uint16_t x22 = 116U;
	int64_t x23 = -27985LL;
	static int32_t x24 = INT32_MAX;
	static int32_t t3 = -776;

	t3 = (((x21*x22)-x23)<x24);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x25 = UINT8_MAX;
	volatile int8_t x26 = 4;
	volatile int32_t x27 = -11679848;
	uint8_t x28 = 4U;
	int32_t t4 = 248012673;

	t4 = (((x25*x26)-x27)<x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = 18;
	volatile int64_t x35 = 564590LL;
	int64_t x36 = 463165300111966LL;
	volatile int32_t t5 = -14099444;

	t5 = (((x33*x34)-x35)<x36);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x41 = -1LL;
	uint64_t x42 = 77647899675452LLU;
	volatile uint8_t x43 = 1U;
	static int64_t x44 = -1LL;
	volatile int32_t t6 = -1489;

	t6 = (((x41*x42)-x43)<x44);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = 4;
	int64_t x51 = INT64_MAX;
	static int32_t x52 = -40365;
	volatile int32_t t7 = 1608746;

	t7 = (((x49*x50)-x51)<x52);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MIN;
	int32_t t8 = -23658;

	t8 = (((x53*x54)-x55)<x56);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = INT16_MIN;
	int16_t x58 = -368;
	uint8_t x59 = UINT8_MAX;
	int8_t x60 = 0;

	t9 = (((x57*x58)-x59)<x60);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x61 = 700523033U;
	uint8_t x62 = UINT8_MAX;
	int16_t x63 = -637;
	int32_t x64 = -1;

	t10 = (((x61*x62)-x63)<x64);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = 126U;
	int32_t x67 = INT32_MIN;
	int16_t x68 = -209;

	t11 = (((x65*x66)-x67)<x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x69 = 125U;
	volatile int8_t x70 = -1;
	int16_t x71 = -1;
	static int8_t x72 = 63;
	int32_t t12 = -995683603;

	t12 = (((x69*x70)-x71)<x72);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x73 = UINT8_MAX;
	volatile int8_t x74 = -1;
	volatile int32_t x75 = 1;
	volatile int32_t t13 = -389;

	t13 = (((x73*x74)-x75)<x76);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x78 = 1172803147LL;

	t14 = (((x77*x78)-x79)<x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x81 = 34230591980LLU;
	int16_t x82 = INT16_MAX;
	int16_t x83 = INT16_MIN;
	int64_t x84 = -25LL;
	int32_t t15 = 71095;

	t15 = (((x81*x82)-x83)<x84);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x86 = UINT16_MAX;
	int16_t x87 = -1;
	int32_t x88 = INT32_MIN;
	static int32_t t16 = 7698082;

	t16 = (((x85*x86)-x87)<x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x89 = 977U;
	uint64_t x90 = 7731498688767LLU;
	int8_t x91 = -1;
	volatile int32_t t17 = 7950852;

	t17 = (((x89*x90)-x91)<x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = -5;
	uint32_t x94 = UINT32_MAX;
	volatile int8_t x95 = INT8_MAX;
	volatile int64_t x96 = 42760799LL;
	volatile int32_t t18 = 8888076;

	t18 = (((x93*x94)-x95)<x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = -1;
	int8_t x98 = 1;
	static volatile uint16_t x99 = 26U;
	volatile uint16_t x100 = UINT16_MAX;
	static int32_t t19 = -23;

	t19 = (((x97*x98)-x99)<x100);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = 1;
	volatile uint8_t x103 = UINT8_MAX;
	static uint8_t x104 = 3U;
	volatile int32_t t20 = 2839517;

	t20 = (((x101*x102)-x103)<x104);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x105 = INT8_MIN;
	uint16_t x106 = 14854U;
	uint64_t x107 = UINT64_MAX;
	int64_t x108 = -1LL;
	int32_t t21 = -16148503;

	t21 = (((x105*x106)-x107)<x108);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x109 = 15026325181LLU;
	static int32_t x110 = -1;
	int32_t x111 = -39590;
	int8_t x112 = -1;
	int32_t t22 = 820496;

	t22 = (((x109*x110)-x111)<x112);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x113 = UINT16_MAX;
	volatile uint32_t x114 = 3140U;
	int16_t x116 = INT16_MIN;
	volatile int32_t t23 = 114;

	t23 = (((x113*x114)-x115)<x116);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x117 = 13U;
	static int8_t x119 = INT8_MIN;
	uint64_t x120 = 468242375038LLU;
	volatile int32_t t24 = -379;

	t24 = (((x117*x118)-x119)<x120);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x125 = 1791;
	uint16_t x126 = UINT16_MAX;
	uint64_t x127 = UINT64_MAX;
	int16_t x128 = INT16_MIN;
	volatile int32_t t25 = 0;

	t25 = (((x125*x126)-x127)<x128);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = -232989LL;
	volatile uint64_t x131 = UINT64_MAX;
	static volatile int64_t x132 = -1045378645LL;
	volatile int32_t t26 = 27;

	t26 = (((x129*x130)-x131)<x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x133 = -1;
	int16_t x136 = INT16_MIN;
	volatile int32_t t27 = -62265186;

	t27 = (((x133*x134)-x135)<x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = -1;
	volatile int8_t x138 = INT8_MAX;
	uint32_t x139 = UINT32_MAX;
	int64_t x140 = INT64_MIN;
	int32_t t28 = 23;

	t28 = (((x137*x138)-x139)<x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x146 = -1;
	volatile int32_t x147 = INT32_MIN;
	volatile int32_t t29 = -409;

	t29 = (((x145*x146)-x147)<x148);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x153 = -3LL;
	static uint64_t x155 = UINT64_MAX;
	int32_t t30 = -406569688;

	t30 = (((x153*x154)-x155)<x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x160 = 232223635;
	int32_t t31 = 1;

	t31 = (((x157*x158)-x159)<x160);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x162 = INT8_MIN;
	volatile int32_t t32 = -1341659;

	t32 = (((x161*x162)-x163)<x164);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x167 = -1;
	uint8_t x168 = 17U;
	volatile int32_t t33 = -1349;

	t33 = (((x165*x166)-x167)<x168);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x169 = -1;
	static int64_t x170 = 145LL;
	int32_t x171 = -1;
	static uint16_t x172 = 8606U;
	int32_t t34 = -132390049;

	t34 = (((x169*x170)-x171)<x172);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x174 = INT16_MAX;
	int32_t x175 = INT32_MAX;
	int16_t x176 = INT16_MAX;

	t35 = (((x173*x174)-x175)<x176);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = -987252;
	volatile uint8_t x178 = 67U;
	static uint8_t x180 = UINT8_MAX;
	volatile int32_t t36 = -5783;

	t36 = (((x177*x178)-x179)<x180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = INT16_MIN;
	int32_t x183 = -413472464;
	uint16_t x184 = 14U;

	t37 = (((x181*x182)-x183)<x184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = INT16_MAX;
	static int8_t x187 = INT8_MIN;
	volatile int8_t x188 = INT8_MAX;
	volatile int32_t t38 = 1;

	t38 = (((x185*x186)-x187)<x188);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x189 = -16;
	static int16_t x191 = INT16_MAX;
	volatile int32_t x192 = INT32_MAX;
	static int32_t t39 = -3675245;

	t39 = (((x189*x190)-x191)<x192);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x194 = 594;
	uint64_t x195 = 16208360541104115LLU;
	int64_t x196 = INT64_MIN;
	volatile int32_t t40 = 395278;

	t40 = (((x193*x194)-x195)<x196);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x201 = -11;
	int64_t x202 = 448100737LL;
	int32_t x203 = INT32_MIN;
	int8_t x204 = INT8_MAX;

	t41 = (((x201*x202)-x203)<x204);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x209 = INT16_MIN;
	volatile int16_t x210 = INT16_MAX;
	int16_t x211 = INT16_MIN;
	uint64_t x212 = UINT64_MAX;
	static int32_t t42 = 0;

	t42 = (((x209*x210)-x211)<x212);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x219 = UINT32_MAX;
	int32_t x220 = -54948742;
	int32_t t43 = -1379;

	t43 = (((x217*x218)-x219)<x220);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x229 = UINT8_MAX;
	int8_t x230 = -1;
	uint16_t x231 = UINT16_MAX;
	int32_t t44 = -30;

	t44 = (((x229*x230)-x231)<x232);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x233 = 25U;
	int8_t x234 = INT8_MAX;
	uint32_t x235 = 59309U;
	int32_t t45 = -196;

	t45 = (((x233*x234)-x235)<x236);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x237 = -1;
	static uint64_t x238 = UINT64_MAX;
	static int16_t x239 = INT16_MAX;
	int16_t x240 = -1;
	int32_t t46 = -3603;

	t46 = (((x237*x238)-x239)<x240);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x241 = -132424652730LL;
	uint8_t x242 = 25U;
	int16_t x243 = INT16_MIN;
	volatile int64_t x244 = INT64_MIN;
	int32_t t47 = -118456057;

	t47 = (((x241*x242)-x243)<x244);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x245 = INT8_MAX;
	static int64_t x246 = -16716604084LL;
	int16_t x247 = -1;
	uint32_t x248 = UINT32_MAX;
	static volatile int32_t t48 = 4087227;

	t48 = (((x245*x246)-x247)<x248);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x249 = UINT16_MAX;
	volatile int32_t x250 = -1;
	uint64_t x252 = UINT64_MAX;
	int32_t t49 = 30056;

	t49 = (((x249*x250)-x251)<x252);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x253 = INT64_MAX;
	static uint64_t x254 = UINT64_MAX;
	int16_t x255 = -439;
	volatile int32_t t50 = 2;

	t50 = (((x253*x254)-x255)<x256);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x257 = INT32_MIN;
	int8_t x258 = 0;
	static uint8_t x259 = 11U;
	uint32_t x260 = 1802U;

	t51 = (((x257*x258)-x259)<x260);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x261 = 1;
	int32_t x262 = INT32_MAX;
	volatile int16_t x263 = 1;
	int16_t x264 = -51;

	t52 = (((x261*x262)-x263)<x264);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x266 = -2747;
	int32_t x268 = -1;
	int32_t t53 = 28227057;

	t53 = (((x265*x266)-x267)<x268);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x269 = UINT32_MAX;
	volatile int64_t x271 = -1LL;
	int32_t x272 = INT32_MIN;
	int32_t t54 = 1305;

	t54 = (((x269*x270)-x271)<x272);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x277 = 22;
	volatile uint8_t x279 = 0U;
	uint16_t x280 = UINT16_MAX;
	int32_t t55 = -84;

	t55 = (((x277*x278)-x279)<x280);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x290 = -1;
	int16_t x291 = -1;
	volatile int32_t t56 = -113039373;

	t56 = (((x289*x290)-x291)<x292);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x297 = 1U;
	volatile int32_t x298 = -6;
	static uint32_t x299 = UINT32_MAX;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t57 = 385;

	t57 = (((x297*x298)-x299)<x300);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x301 = -1;
	uint32_t x302 = UINT32_MAX;
	int32_t x303 = -1;
	volatile int32_t t58 = -179898245;

	t58 = (((x301*x302)-x303)<x304);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x305 = 193320639U;
	static uint32_t x306 = 7849462U;
	static uint16_t x307 = 0U;
	uint32_t x308 = 73437668U;

	t59 = (((x305*x306)-x307)<x308);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x309 = -222;
	int32_t x310 = -1;
	static uint64_t x312 = UINT64_MAX;
	volatile int32_t t60 = -1625395;

	t60 = (((x309*x310)-x311)<x312);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x313 = UINT32_MAX;
	int64_t x315 = INT64_MAX;
	int64_t x316 = INT64_MAX;

	t61 = (((x313*x314)-x315)<x316);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x317 = 282891U;
	int32_t x318 = 49977;
	int64_t x319 = INT64_MAX;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t62 = -11;

	t62 = (((x317*x318)-x319)<x320);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x331 = -1;
	int64_t x332 = -43880LL;
	static volatile int32_t t63 = -958920;

	t63 = (((x329*x330)-x331)<x332);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x338 = 1153120625U;
	static int32_t x339 = -1;
	int32_t t64 = -464886;

	t64 = (((x337*x338)-x339)<x340);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x341 = 915U;
	int16_t x342 = INT16_MAX;
	int8_t x343 = INT8_MIN;
	static int32_t x344 = -453794;

	t65 = (((x341*x342)-x343)<x344);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x349 = UINT16_MAX;
	int8_t x350 = -1;
	static uint32_t x351 = 58U;
	uint8_t x352 = 14U;
	volatile int32_t t66 = 6763;

	t66 = (((x349*x350)-x351)<x352);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x353 = -4133;
	int16_t x354 = INT16_MIN;
	int16_t x355 = INT16_MAX;
	static int16_t x356 = INT16_MIN;
	int32_t t67 = 110780159;

	t67 = (((x353*x354)-x355)<x356);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x357 = 1U;
	int16_t x358 = INT16_MIN;
	static int8_t x359 = INT8_MAX;
	int8_t x360 = INT8_MIN;
	static int32_t t68 = 9604;

	t68 = (((x357*x358)-x359)<x360);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x361 = -1;
	int8_t x362 = 62;
	static uint16_t x363 = UINT16_MAX;
	volatile uint16_t x364 = 3299U;
	int32_t t69 = -2837637;

	t69 = (((x361*x362)-x363)<x364);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x369 = -46;
	static uint32_t x370 = UINT32_MAX;
	uint32_t x371 = 14U;
	static int32_t x372 = 250066736;
	volatile int32_t t70 = 1;

	t70 = (((x369*x370)-x371)<x372);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x373 = INT8_MIN;
	int32_t x374 = 0;
	int16_t x375 = -530;
	static int16_t x376 = INT16_MIN;
	static volatile int32_t t71 = -3329216;

	t71 = (((x373*x374)-x375)<x376);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x377 = -1;
	uint16_t x378 = 1848U;
	volatile int32_t x379 = -1;
	uint8_t x380 = 27U;
	volatile int32_t t72 = 3676180;

	t72 = (((x377*x378)-x379)<x380);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x397 = 6938U;
	static uint32_t x398 = UINT32_MAX;
	static uint64_t x399 = 27223157921523LLU;
	uint8_t x400 = 89U;
	static volatile int32_t t73 = 989712;

	t73 = (((x397*x398)-x399)<x400);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x401 = -1;
	uint64_t x402 = 870759LLU;
	static int64_t x403 = INT64_MIN;
	int32_t t74 = -260274;

	t74 = (((x401*x402)-x403)<x404);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x405 = 4U;
	uint16_t x406 = 5U;
	int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MIN;
	static int32_t t75 = -106;

	t75 = (((x405*x406)-x407)<x408);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x413 = INT8_MAX;
	int16_t x414 = INT16_MAX;
	static int64_t x415 = 0LL;
	int8_t x416 = INT8_MIN;
	int32_t t76 = 15962055;

	t76 = (((x413*x414)-x415)<x416);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x417 = -43;
	uint8_t x418 = UINT8_MAX;
	int16_t x420 = INT16_MAX;

	t77 = (((x417*x418)-x419)<x420);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x428 = -1LL;
	volatile int32_t t78 = -1013;

	t78 = (((x425*x426)-x427)<x428);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x437 = 13;
	uint64_t x438 = 0LLU;
	volatile uint32_t x439 = UINT32_MAX;
	static uint16_t x440 = 3U;
	int32_t t79 = 1;

	t79 = (((x437*x438)-x439)<x440);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x441 = INT32_MAX;
	uint16_t x443 = 5238U;
	int8_t x444 = 1;
	volatile int32_t t80 = -13328;

	t80 = (((x441*x442)-x443)<x444);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x445 = -371821556LL;
	int32_t x447 = 217;
	static int32_t x448 = -1;
	static int32_t t81 = 13658370;

	t81 = (((x445*x446)-x447)<x448);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x449 = UINT16_MAX;
	uint8_t x450 = UINT8_MAX;
	int8_t x451 = 4;
	uint32_t x452 = 28803599U;
	static volatile int32_t t82 = 229;

	t82 = (((x449*x450)-x451)<x452);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x453 = -1LL;
	int16_t x454 = -2;
	uint8_t x456 = 0U;

	t83 = (((x453*x454)-x455)<x456);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x457 = 1;
	volatile int32_t x458 = 10;
	uint16_t x459 = 871U;
	static volatile int8_t x460 = INT8_MIN;

	t84 = (((x457*x458)-x459)<x460);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x465 = INT16_MAX;
	int8_t x466 = -1;
	uint64_t x467 = UINT64_MAX;
	int64_t x468 = -1LL;
	int32_t t85 = 1;

	t85 = (((x465*x466)-x467)<x468);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x479 = -1;
	int32_t t86 = -13;

	t86 = (((x477*x478)-x479)<x480);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x493 = INT8_MIN;
	static uint64_t x494 = 21152867LLU;
	static int32_t x495 = INT32_MAX;
	volatile int32_t t87 = -6758;

	t87 = (((x493*x494)-x495)<x496);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x497 = UINT64_MAX;
	static volatile uint64_t x498 = UINT64_MAX;
	static int16_t x500 = -1;
	int32_t t88 = 6730821;

	t88 = (((x497*x498)-x499)<x500);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x502 = 13726LL;
	uint8_t x503 = 1U;
	volatile int8_t x504 = -1;

	t89 = (((x501*x502)-x503)<x504);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x513 = 250U;
	uint32_t x515 = 356609282U;
	int8_t x516 = 10;
	volatile int32_t t90 = -42520;

	t90 = (((x513*x514)-x515)<x516);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x521 = 230271U;
	int32_t x522 = INT32_MIN;
	int64_t x523 = INT64_MAX;
	int32_t t91 = 5;

	t91 = (((x521*x522)-x523)<x524);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x525 = UINT8_MAX;
	static int8_t x526 = 1;
	int32_t t92 = 884389757;

	t92 = (((x525*x526)-x527)<x528);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x529 = 248U;
	int64_t x530 = -25422970665495473LL;
	uint64_t x531 = 6LLU;
	volatile int32_t t93 = 90;

	t93 = (((x529*x530)-x531)<x532);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x542 = 14;
	uint32_t x543 = UINT32_MAX;
	uint32_t x544 = 239299322U;
	volatile int32_t t94 = 3;

	t94 = (((x541*x542)-x543)<x544);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x545 = 120U;
	int32_t x546 = -1;
	int8_t x548 = -1;
	static int32_t t95 = 48;

	t95 = (((x545*x546)-x547)<x548);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x549 = -215;
	uint8_t x550 = 0U;
	uint16_t x551 = UINT16_MAX;

	t96 = (((x549*x550)-x551)<x552);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x557 = -1LL;
	int16_t x558 = INT16_MIN;
	int8_t x559 = INT8_MIN;
	int32_t t97 = 319773606;

	t97 = (((x557*x558)-x559)<x560);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x565 = INT16_MAX;
	static int32_t x567 = 0;
	static int32_t t98 = -107102;

	t98 = (((x565*x566)-x567)<x568);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x569 = UINT8_MAX;
	volatile int16_t x570 = -2455;

	t99 = (((x569*x570)-x571)<x572);

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

