#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x29 = 1756243968U;
int32_t t3 = 3;
int64_t x43 = 1311LL;
volatile int8_t x51 = 14;
uint16_t x52 = 12712U;
uint64_t x57 = UINT64_MAX;
uint32_t x58 = 579200751U;
int32_t t9 = 1;
volatile uint16_t x66 = 4625U;
uint8_t x70 = 30U;
static uint16_t x74 = UINT16_MAX;
static int32_t x76 = -226189;
int16_t x84 = INT16_MIN;
int8_t x86 = INT8_MAX;
int32_t t17 = 23;
uint32_t x105 = 106U;
int8_t x108 = INT8_MIN;
uint32_t x109 = UINT32_MAX;
uint64_t x112 = UINT64_MAX;
int32_t t20 = -227466;
int32_t x114 = INT32_MAX;
uint8_t x115 = 3U;
static int16_t x122 = -1;
volatile int32_t t24 = 0;
int32_t t25 = -2404387;
static volatile uint16_t x156 = UINT16_MAX;
volatile int32_t t27 = 12926340;
uint64_t x164 = UINT64_MAX;
static int16_t x174 = INT16_MIN;
int8_t x176 = INT8_MIN;
volatile int32_t t33 = 70450139;
volatile int64_t x206 = 62191952LL;
volatile int32_t t37 = 144306720;
int16_t x215 = 70;
int64_t x219 = 4074152350761165127LL;
int8_t x221 = INT8_MIN;
uint16_t x222 = 0U;
volatile int32_t t40 = 34;
int8_t x230 = INT8_MIN;
int32_t x231 = INT32_MIN;
static uint64_t x232 = 27879447128LLU;
int32_t t41 = -14150;
int16_t x242 = INT16_MIN;
int64_t x247 = -978171402267LL;
int16_t x248 = INT16_MIN;
uint16_t x250 = UINT16_MAX;
static int32_t t45 = -13364573;
int32_t x254 = -1;
int32_t t46 = 29540;
uint16_t x259 = 2265U;
uint8_t x264 = UINT8_MAX;
uint8_t x266 = 17U;
int32_t t49 = 29375824;
volatile int64_t x273 = -1LL;
int64_t x274 = INT64_MAX;
int32_t t50 = -168697475;
int32_t t54 = 1906;
volatile uint64_t x310 = UINT64_MAX;
static int16_t x311 = INT16_MIN;
int8_t x315 = INT8_MIN;
int32_t x319 = 10;
int8_t x325 = INT8_MIN;
uint32_t x326 = 500504U;
static int64_t x328 = -1LL;
int8_t x333 = INT8_MIN;
volatile int16_t x347 = INT16_MIN;
int32_t t65 = -2396;
uint32_t x349 = 5U;
int32_t t66 = -58;
int32_t t68 = 122;
static int32_t x361 = -3;
volatile int32_t x364 = 67;
int64_t x367 = INT64_MAX;
int32_t t70 = -1;
volatile uint32_t x369 = 862647273U;
static uint8_t x370 = 1U;
volatile int32_t t71 = -4050;
int16_t x375 = INT16_MAX;
int32_t t73 = -1080448;
int32_t x382 = -1;
uint32_t x399 = UINT32_MAX;
static int32_t x409 = 245819;
static uint8_t x414 = UINT8_MAX;
volatile int32_t t78 = -31966967;
uint8_t x425 = 29U;
int32_t t80 = -77594;
uint32_t x439 = 5596U;
uint32_t x455 = 512723056U;
uint64_t x457 = 21316LLU;
int32_t t85 = -43804348;
int8_t x473 = 1;
uint32_t x477 = 71370U;
static int32_t t88 = -28350786;
volatile int32_t t89 = -3638413;
static int16_t x494 = INT16_MIN;
int32_t x498 = -1;
static uint64_t x499 = 3796381002722191LLU;
uint16_t x503 = UINT16_MAX;
uint32_t x534 = 433166674U;
uint32_t x537 = UINT32_MAX;
uint8_t x538 = UINT8_MAX;
static int64_t x545 = INT64_MIN;
static int8_t x546 = 0;
uint8_t x550 = 48U;
static int32_t t99 = -100184743;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	int8_t x2 = -1;
	uint8_t x3 = 1U;
	uint16_t x4 = 14U;
	int32_t t0 = 362638314;

	t0 = ((x1*x2)<=(x3%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static volatile int16_t x6 = 7141;
	int8_t x7 = INT8_MIN;
	uint32_t x8 = UINT32_MAX;
	int32_t t1 = -2696;

	t1 = ((x5*x6)<=(x7%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MAX;
	int64_t x19 = 16686042914027299LL;
	volatile uint16_t x20 = 7289U;
	int32_t t2 = -1460;

	t2 = ((x17*x18)<=(x19%x20));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x30 = UINT64_MAX;
	static int32_t x31 = INT32_MIN;
	int32_t x32 = INT32_MAX;

	t3 = ((x29*x30)<=(x31%x32));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x33 = -11582LL;
	volatile int32_t x34 = INT32_MAX;
	static int8_t x35 = INT8_MIN;
	int64_t x36 = 1762797964054LL;
	volatile int32_t t4 = -14661021;

	t4 = ((x33*x34)<=(x35%x36));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MIN;
	static int64_t x39 = INT64_MIN;
	int16_t x40 = -1;
	static int32_t t5 = 0;

	t5 = ((x37*x38)<=(x39%x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x41 = 611626325LL;
	uint16_t x42 = 0U;
	static volatile uint16_t x44 = 199U;
	volatile int32_t t6 = -842711555;

	t6 = ((x41*x42)<=(x43%x44));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MAX;
	uint64_t x47 = 114LLU;
	static int32_t x48 = -14300722;
	static volatile int32_t t7 = 28256;

	t7 = ((x45*x46)<=(x47%x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x49 = -1;
	static uint8_t x50 = 5U;
	static int32_t t8 = 408;

	t8 = ((x49*x50)<=(x51%x52));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x59 = INT8_MIN;
	int16_t x60 = INT16_MIN;

	t9 = ((x57*x58)<=(x59%x60));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x65 = 174274LL;
	uint16_t x67 = UINT16_MAX;
	uint8_t x68 = UINT8_MAX;
	volatile int32_t t10 = 255894;

	t10 = ((x65*x66)<=(x67%x68));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = -1;
	volatile int8_t x71 = INT8_MIN;
	int32_t x72 = INT32_MIN;
	volatile int32_t t11 = -1;

	t11 = ((x69*x70)<=(x71%x72));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x73 = INT8_MIN;
	volatile uint8_t x75 = 59U;
	static volatile int32_t t12 = 16;

	t12 = ((x73*x74)<=(x75%x76));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x77 = 873679829354094277LLU;
	uint16_t x78 = 17361U;
	volatile int16_t x79 = 1;
	int64_t x80 = -133811LL;
	int32_t t13 = -11447659;

	t13 = ((x77*x78)<=(x79%x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x81 = INT8_MAX;
	int64_t x82 = 29312LL;
	uint16_t x83 = 412U;
	volatile int32_t t14 = -96547914;

	t14 = ((x81*x82)<=(x83%x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x85 = 175107937U;
	uint64_t x87 = UINT64_MAX;
	int8_t x88 = INT8_MIN;
	int32_t t15 = 1022;

	t15 = ((x85*x86)<=(x87%x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x89 = 8825LL;
	int8_t x90 = INT8_MAX;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = -23LL;
	volatile int32_t t16 = -6812;

	t16 = ((x89*x90)<=(x91%x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = INT16_MIN;
	uint8_t x94 = UINT8_MAX;
	int64_t x95 = INT64_MIN;
	uint32_t x96 = 1171362U;

	t17 = ((x93*x94)<=(x95%x96));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x97 = UINT64_MAX;
	uint16_t x98 = 123U;
	int64_t x99 = -5075LL;
	uint16_t x100 = 231U;
	volatile int32_t t18 = 9563;

	t18 = ((x97*x98)<=(x99%x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x106 = -45130LL;
	static uint64_t x107 = 6389360932216LLU;
	static int32_t t19 = -50819524;

	t19 = ((x105*x106)<=(x107%x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x110 = INT8_MAX;
	static int32_t x111 = INT32_MAX;

	t20 = ((x109*x110)<=(x111%x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x113 = 94116337U;
	static int64_t x116 = INT64_MIN;
	static int32_t t21 = -22100062;

	t21 = ((x113*x114)<=(x115%x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x121 = INT8_MIN;
	int8_t x123 = INT8_MIN;
	volatile int8_t x124 = INT8_MIN;
	int32_t t22 = -9;

	t22 = ((x121*x122)<=(x123%x124));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = -38;
	uint16_t x130 = 120U;
	static int16_t x131 = -14350;
	int16_t x132 = INT16_MAX;
	volatile int32_t t23 = 79761068;

	t23 = ((x129*x130)<=(x131%x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x137 = INT32_MAX;
	uint32_t x138 = UINT32_MAX;
	volatile int8_t x139 = INT8_MIN;
	uint8_t x140 = 74U;

	t24 = ((x137*x138)<=(x139%x140));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x149 = 3312;
	volatile int8_t x150 = 0;
	int16_t x151 = INT16_MIN;
	volatile int16_t x152 = INT16_MAX;

	t25 = ((x149*x150)<=(x151%x152));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x153 = -1LL;
	uint64_t x154 = UINT64_MAX;
	int64_t x155 = INT64_MIN;
	int32_t t26 = -4454073;

	t26 = ((x153*x154)<=(x155%x156));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x157 = 3408LL;
	uint32_t x158 = UINT32_MAX;
	uint8_t x159 = 1U;
	uint32_t x160 = 3485364U;

	t27 = ((x157*x158)<=(x159%x160));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x161 = 29;
	uint64_t x162 = 97LLU;
	int16_t x163 = INT16_MIN;
	volatile int32_t t28 = -6397;

	t28 = ((x161*x162)<=(x163%x164));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x165 = UINT64_MAX;
	int32_t x166 = INT32_MIN;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = -1;
	int32_t t29 = 0;

	t29 = ((x165*x166)<=(x167%x168));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x169 = -1;
	volatile uint8_t x170 = UINT8_MAX;
	int16_t x171 = 3310;
	uint16_t x172 = 1755U;
	static volatile int32_t t30 = 4938;

	t30 = ((x169*x170)<=(x171%x172));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x173 = 962U;
	int8_t x175 = INT8_MIN;
	static volatile int32_t t31 = 4160;

	t31 = ((x173*x174)<=(x175%x176));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x177 = 63109U;
	int8_t x178 = -3;
	uint8_t x179 = 1U;
	int16_t x180 = INT16_MIN;
	int32_t t32 = 7177;

	t32 = ((x177*x178)<=(x179%x180));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x181 = -1;
	static uint64_t x182 = 4357LLU;
	volatile int64_t x183 = 10913035120922839LL;
	int32_t x184 = INT32_MIN;

	t33 = ((x181*x182)<=(x183%x184));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x193 = 1244;
	uint64_t x194 = 27822LLU;
	uint16_t x195 = UINT16_MAX;
	uint32_t x196 = UINT32_MAX;
	volatile int32_t t34 = 0;

	t34 = ((x193*x194)<=(x195%x196));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x197 = -1;
	static int16_t x198 = 288;
	int32_t x199 = -6;
	static int8_t x200 = INT8_MIN;
	static int32_t t35 = -1838;

	t35 = ((x197*x198)<=(x199%x200));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x205 = 1U;
	uint32_t x207 = 8815976U;
	volatile uint16_t x208 = 1U;
	int32_t t36 = 1;

	t36 = ((x205*x206)<=(x207%x208));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x209 = 122U;
	int32_t x210 = -4548568;
	int8_t x211 = 0;
	uint8_t x212 = 19U;

	t37 = ((x209*x210)<=(x211%x212));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x213 = INT16_MIN;
	int8_t x214 = INT8_MIN;
	volatile int8_t x216 = INT8_MIN;
	volatile int32_t t38 = -1570149;

	t38 = ((x213*x214)<=(x215%x216));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x217 = 0LL;
	uint32_t x218 = 97773U;
	uint8_t x220 = 1U;
	int32_t t39 = -44;

	t39 = ((x217*x218)<=(x219%x220));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x223 = 23236U;
	uint32_t x224 = UINT32_MAX;

	t40 = ((x221*x222)<=(x223%x224));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x229 = UINT32_MAX;

	t41 = ((x229*x230)<=(x231%x232));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x237 = INT16_MIN;
	volatile int64_t x238 = 23LL;
	int8_t x239 = INT8_MAX;
	volatile int64_t x240 = INT64_MIN;
	int32_t t42 = 882522;

	t42 = ((x237*x238)<=(x239%x240));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x241 = -11;
	static uint64_t x243 = UINT64_MAX;
	static uint8_t x244 = 51U;
	int32_t t43 = -5;

	t43 = ((x241*x242)<=(x243%x244));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x245 = 15U;
	uint64_t x246 = 6949515093379483LLU;
	int32_t t44 = -2552;

	t44 = ((x245*x246)<=(x247%x248));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x249 = 2598U;
	static int64_t x251 = INT64_MIN;
	int8_t x252 = INT8_MIN;

	t45 = ((x249*x250)<=(x251%x252));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x253 = 30;
	int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MIN;

	t46 = ((x253*x254)<=(x255%x256));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x257 = -188;
	static int16_t x258 = INT16_MIN;
	int8_t x260 = 22;
	int32_t t47 = 14369404;

	t47 = ((x257*x258)<=(x259%x260));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x261 = -1LL;
	int16_t x262 = -38;
	volatile uint64_t x263 = 1402919LLU;
	volatile int32_t t48 = 60782;

	t48 = ((x261*x262)<=(x263%x264));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x265 = UINT64_MAX;
	volatile int32_t x267 = -1;
	int32_t x268 = -1;

	t49 = ((x265*x266)<=(x267%x268));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x275 = 1680U;
	static int16_t x276 = INT16_MAX;

	t50 = ((x273*x274)<=(x275%x276));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x277 = INT8_MAX;
	int32_t x278 = -293;
	int16_t x279 = -15;
	int64_t x280 = INT64_MAX;
	volatile int32_t t51 = -2;

	t51 = ((x277*x278)<=(x279%x280));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x281 = INT32_MIN;
	static uint32_t x282 = 2123453145U;
	int16_t x283 = -3004;
	static volatile int32_t x284 = -178774;
	int32_t t52 = -29;

	t52 = ((x281*x282)<=(x283%x284));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x285 = -1;
	int16_t x286 = -1;
	uint32_t x287 = 14886U;
	int32_t x288 = 1427;
	static int32_t t53 = 34051173;

	t53 = ((x285*x286)<=(x287%x288));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x297 = -30682;
	volatile uint8_t x298 = 26U;
	static int64_t x299 = INT64_MIN;
	int16_t x300 = INT16_MAX;

	t54 = ((x297*x298)<=(x299%x300));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = 7;
	uint8_t x303 = 98U;
	static uint16_t x304 = 3U;
	int32_t t55 = 42739734;

	t55 = ((x301*x302)<=(x303%x304));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MAX;
	volatile int16_t x307 = -1302;
	int16_t x308 = -1;
	int32_t t56 = -778605854;

	t56 = ((x305*x306)<=(x307%x308));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x309 = 124;
	int16_t x312 = INT16_MIN;
	volatile int32_t t57 = -93809319;

	t57 = ((x309*x310)<=(x311%x312));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x313 = 261434367U;
	uint8_t x314 = 33U;
	static int32_t x316 = -257355470;
	static int32_t t58 = -203;

	t58 = ((x313*x314)<=(x315%x316));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x317 = INT32_MIN;
	volatile uint32_t x318 = 281275983U;
	uint16_t x320 = 4U;
	volatile int32_t t59 = -1571236;

	t59 = ((x317*x318)<=(x319%x320));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x321 = INT16_MIN;
	static int32_t x322 = -1;
	int64_t x323 = INT64_MIN;
	static volatile uint64_t x324 = 249667270512613933LLU;
	int32_t t60 = 52;

	t60 = ((x321*x322)<=(x323%x324));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x327 = INT32_MAX;
	volatile int32_t t61 = 36066452;

	t61 = ((x325*x326)<=(x327%x328));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x329 = 3840LLU;
	uint16_t x330 = 427U;
	int32_t x331 = INT32_MIN;
	uint32_t x332 = UINT32_MAX;
	volatile int32_t t62 = -71;

	t62 = ((x329*x330)<=(x331%x332));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x334 = -14799;
	int8_t x335 = -1;
	int16_t x336 = -232;
	int32_t t63 = 376424775;

	t63 = ((x333*x334)<=(x335%x336));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x337 = 1;
	uint64_t x338 = 129823252994LLU;
	static int8_t x339 = 3;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t64 = -245548761;

	t64 = ((x337*x338)<=(x339%x340));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x345 = INT16_MIN;
	volatile uint32_t x346 = UINT32_MAX;
	static volatile uint16_t x348 = UINT16_MAX;

	t65 = ((x345*x346)<=(x347%x348));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x350 = 78U;
	int16_t x351 = INT16_MIN;
	static uint8_t x352 = UINT8_MAX;

	t66 = ((x349*x350)<=(x351%x352));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x353 = 2519694;
	static int8_t x354 = 0;
	volatile uint8_t x355 = 73U;
	volatile int16_t x356 = -1;
	volatile int32_t t67 = 1;

	t67 = ((x353*x354)<=(x355%x356));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x357 = 144075698436196728LLU;
	static uint32_t x358 = UINT32_MAX;
	uint64_t x359 = UINT64_MAX;
	int64_t x360 = -1LL;

	t68 = ((x357*x358)<=(x359%x360));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x362 = 951304881LLU;
	int64_t x363 = 13571298256LL;
	int32_t t69 = 6;

	t69 = ((x361*x362)<=(x363%x364));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x365 = -1LL;
	static uint16_t x366 = 1359U;
	int32_t x368 = INT32_MAX;

	t70 = ((x365*x366)<=(x367%x368));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x371 = INT64_MIN;
	volatile int64_t x372 = -1LL;

	t71 = ((x369*x370)<=(x371%x372));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x373 = UINT16_MAX;
	int32_t x374 = 241;
	int64_t x376 = INT64_MIN;
	int32_t t72 = -205;

	t72 = ((x373*x374)<=(x375%x376));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x377 = -1;
	volatile int32_t x378 = 14347899;
	static uint16_t x379 = UINT16_MAX;
	volatile uint64_t x380 = 279683109885LLU;

	t73 = ((x377*x378)<=(x379%x380));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x381 = -1LL;
	int64_t x383 = 3229035LL;
	int32_t x384 = -5;
	volatile int32_t t74 = -421914550;

	t74 = ((x381*x382)<=(x383%x384));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x385 = -112183166925172032LL;
	int8_t x386 = -1;
	uint16_t x387 = 52U;
	int16_t x388 = -2;
	int32_t t75 = -2115;

	t75 = ((x385*x386)<=(x387%x388));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x397 = INT8_MIN;
	uint64_t x398 = 1166053788953911LLU;
	int16_t x400 = INT16_MIN;
	int32_t t76 = -30435;

	t76 = ((x397*x398)<=(x399%x400));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x410 = 25;
	int64_t x411 = INT64_MAX;
	int64_t x412 = -88272443558LL;
	int32_t t77 = -114;

	t77 = ((x409*x410)<=(x411%x412));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x413 = 1422U;
	int32_t x415 = INT32_MIN;
	uint16_t x416 = UINT16_MAX;

	t78 = ((x413*x414)<=(x415%x416));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x417 = -1;
	static uint64_t x418 = UINT64_MAX;
	uint32_t x419 = 17699253U;
	int8_t x420 = -1;
	int32_t t79 = -5649;

	t79 = ((x417*x418)<=(x419%x420));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x426 = 632;
	int64_t x427 = -1LL;
	volatile int16_t x428 = 492;

	t80 = ((x425*x426)<=(x427%x428));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x433 = INT8_MIN;
	int16_t x434 = INT16_MAX;
	volatile uint64_t x435 = 7882731268428418236LLU;
	int32_t x436 = -1;
	int32_t t81 = 1;

	t81 = ((x433*x434)<=(x435%x436));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x437 = 378U;
	int32_t x438 = INT32_MIN;
	static int8_t x440 = INT8_MAX;
	volatile int32_t t82 = -236264392;

	t82 = ((x437*x438)<=(x439%x440));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x449 = -38;
	uint64_t x450 = UINT64_MAX;
	int16_t x451 = INT16_MAX;
	int32_t x452 = -1;
	volatile int32_t t83 = -151046;

	t83 = ((x449*x450)<=(x451%x452));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x453 = UINT32_MAX;
	int32_t x454 = -1;
	int64_t x456 = -7097772LL;
	volatile int32_t t84 = 13;

	t84 = ((x453*x454)<=(x455%x456));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x458 = 7;
	volatile int16_t x459 = -174;
	static int32_t x460 = 2151;

	t85 = ((x457*x458)<=(x459%x460));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x474 = 522436LL;
	int16_t x475 = -1;
	volatile int8_t x476 = INT8_MIN;
	static volatile int32_t t86 = -1;

	t86 = ((x473*x474)<=(x475%x476));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x478 = -1;
	int8_t x479 = INT8_MIN;
	int8_t x480 = INT8_MAX;
	int32_t t87 = -142402;

	t87 = ((x477*x478)<=(x479%x480));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x481 = 12679;
	uint16_t x482 = 0U;
	int8_t x483 = INT8_MIN;
	int64_t x484 = 1240582LL;

	t88 = ((x481*x482)<=(x483%x484));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x485 = 4U;
	int8_t x486 = INT8_MAX;
	int32_t x487 = 7;
	int32_t x488 = 129;

	t89 = ((x485*x486)<=(x487%x488));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x493 = INT16_MIN;
	int8_t x495 = -1;
	uint64_t x496 = 87291331213868LLU;
	volatile int32_t t90 = 22065;

	t90 = ((x493*x494)<=(x495%x496));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x497 = 14324U;
	static int16_t x500 = INT16_MIN;
	int32_t t91 = 3770;

	t91 = ((x497*x498)<=(x499%x500));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x501 = INT8_MIN;
	volatile int16_t x502 = -1;
	static int64_t x504 = -1LL;
	int32_t t92 = 65547085;

	t92 = ((x501*x502)<=(x503%x504));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x517 = 1;
	uint32_t x518 = 245393U;
	int8_t x519 = -1;
	uint32_t x520 = UINT32_MAX;
	static volatile int32_t t93 = -174819;

	t93 = ((x517*x518)<=(x519%x520));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x521 = 245677783411LLU;
	int64_t x522 = 13449326235LL;
	volatile int32_t x523 = -1;
	int16_t x524 = INT16_MIN;
	int32_t t94 = -8;

	t94 = ((x521*x522)<=(x523%x524));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x525 = INT8_MIN;
	uint32_t x526 = UINT32_MAX;
	int32_t x527 = INT32_MIN;
	int64_t x528 = INT64_MIN;
	int32_t t95 = 978677047;

	t95 = ((x525*x526)<=(x527%x528));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x533 = INT8_MAX;
	int16_t x535 = -1;
	uint32_t x536 = 991570U;
	int32_t t96 = -269591;

	t96 = ((x533*x534)<=(x535%x536));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x539 = 34059470396314LLU;
	int32_t x540 = INT32_MIN;
	volatile int32_t t97 = 1562734;

	t97 = ((x537*x538)<=(x539%x540));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x547 = INT16_MIN;
	static uint8_t x548 = UINT8_MAX;
	int32_t t98 = -1;

	t98 = ((x545*x546)<=(x547%x548));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x549 = UINT64_MAX;
	int64_t x551 = 130320732424LL;
	volatile int64_t x552 = -1LL;

	t99 = ((x549*x550)<=(x551%x552));

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

