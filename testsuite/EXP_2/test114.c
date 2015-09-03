#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x6 = -1;
int16_t x7 = 1;
int16_t x8 = INT16_MIN;
uint8_t x9 = UINT8_MAX;
int8_t x13 = INT8_MAX;
volatile uint64_t x21 = 11843400414500LLU;
int16_t x23 = INT16_MAX;
int32_t t4 = -17;
int8_t x31 = -1;
static int64_t x32 = -600411543056990LL;
volatile int32_t t5 = -11884558;
int8_t x33 = 7;
static uint32_t x35 = 1265U;
uint64_t x36 = 1LLU;
volatile int32_t t6 = -100;
int32_t t7 = 601969;
volatile int16_t x53 = INT16_MIN;
uint16_t x54 = 47U;
uint64_t x58 = 1258117LLU;
int32_t x60 = INT32_MIN;
static volatile int32_t t10 = -111;
static volatile int16_t x66 = -453;
static int8_t x90 = -1;
int16_t x99 = -1;
int16_t x107 = INT16_MAX;
volatile int32_t t20 = 419834;
volatile int64_t x113 = INT64_MIN;
uint32_t x123 = UINT32_MAX;
int32_t x129 = -886522685;
volatile int32_t t25 = 54;
int32_t t27 = 524;
uint8_t x145 = 55U;
volatile int8_t x158 = INT8_MAX;
static int32_t t32 = -13911;
volatile int64_t x168 = 612606129342230040LL;
int8_t x170 = 24;
volatile int64_t x173 = INT64_MIN;
int32_t x177 = -11660;
volatile int32_t x183 = INT32_MAX;
int8_t x191 = 28;
int32_t x192 = -11;
int32_t t38 = -74168;
int32_t x195 = INT32_MIN;
int32_t x196 = INT32_MAX;
int64_t x211 = -1LL;
volatile int32_t t42 = 15;
uint64_t x223 = 943504031830LLU;
static volatile int16_t x232 = INT16_MIN;
uint16_t x237 = 26711U;
volatile int64_t x240 = 1732LL;
int32_t t48 = 271384;
int64_t x243 = -1LL;
static uint64_t x255 = 1846411LLU;
static int32_t t52 = 31;
volatile uint16_t x270 = 865U;
volatile int32_t t53 = 442;
volatile int8_t x273 = -3;
int32_t t54 = -30918;
int32_t x278 = INT32_MIN;
int64_t x279 = INT64_MAX;
uint64_t x282 = 974314626038641431LLU;
int32_t x288 = 5124679;
int16_t x291 = INT16_MIN;
int32_t t58 = -2678399;
volatile uint8_t x298 = 0U;
int32_t x300 = INT32_MIN;
int32_t x302 = -1;
int64_t x303 = -461166353LL;
volatile int32_t t61 = -16359;
int16_t x305 = INT16_MAX;
static int64_t x312 = -7LL;
int32_t t63 = 3241062;
volatile uint32_t x314 = UINT32_MAX;
volatile uint32_t x317 = 522340U;
int32_t t65 = -29;
int32_t x325 = -1330548;
int32_t t67 = -204513028;
volatile uint32_t x341 = 41302544U;
uint8_t x342 = 1U;
volatile int8_t x346 = INT8_MAX;
static uint64_t x347 = 1900058019956136637LLU;
static uint32_t x348 = 429743330U;
int16_t x354 = -1;
static int32_t x357 = INT32_MIN;
int64_t x360 = 433352575127197414LL;
volatile int32_t t73 = -247100471;
static uint32_t x361 = 1073U;
static int64_t x364 = -40517LL;
uint8_t x365 = 1U;
static int32_t x366 = 133;
volatile int32_t t76 = 243421245;
int16_t x374 = INT16_MAX;
static uint16_t x378 = 29U;
int64_t x381 = 8744165299LL;
volatile int32_t x383 = -1;
int16_t x384 = -15;
int32_t t79 = -1;
uint16_t x392 = 21U;
int8_t x401 = INT8_MAX;
int32_t t87 = 1088;
int64_t x428 = INT64_MAX;
int64_t x429 = 457108019003049LL;
int32_t x448 = INT32_MIN;
int16_t x454 = -1;
volatile int32_t t95 = -16155535;
int32_t t96 = 6634;
static int32_t x466 = -1;
volatile int32_t t97 = 1;
int16_t x472 = 258;
static int32_t t98 = -792818661;
static int32_t x473 = INT32_MIN;


void f0(void) {
	volatile uint64_t x5 = 1892382779032LLU;
	int32_t t0 = -67583;

	t0 = ((x5<(x6+x7))<=x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x10 = 1U;
	int32_t x11 = INT32_MIN;
	static int64_t x12 = 155024546096813LL;
	int32_t t1 = 962159403;

	t1 = ((x9<(x10+x11))<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = -64824426583LL;
	static volatile uint16_t x15 = 15223U;
	static int8_t x16 = INT8_MIN;
	volatile int32_t t2 = -7836;

	t2 = ((x13<(x14+x15))<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = 14;
	uint16_t x18 = 223U;
	volatile uint16_t x19 = 927U;
	uint64_t x20 = 6984LLU;
	int32_t t3 = -516102;

	t3 = ((x17<(x18+x19))<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x22 = 1707282645537934231LLU;
	int64_t x24 = INT64_MAX;

	t4 = ((x21<(x22+x23))<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -8161LL;
	int32_t x30 = INT32_MAX;

	t5 = ((x29<(x30+x31))<=x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x34 = -1LL;

	t6 = ((x33<(x34+x35))<=x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 27438U;
	static volatile int8_t x38 = -1;
	int16_t x39 = 76;
	int64_t x40 = -3395427151666858LL;

	t7 = ((x37<(x38+x39))<=x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x55 = 1U;
	volatile uint64_t x56 = 10155954LLU;
	static volatile int32_t t8 = 3;

	t8 = ((x53<(x54+x55))<=x56);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x57 = 1U;
	int16_t x59 = INT16_MAX;
	static int32_t t9 = 68538;

	t9 = ((x57<(x58+x59))<=x60);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x61 = INT8_MAX;
	volatile int8_t x62 = -1;
	int64_t x63 = -1788491LL;
	static int32_t x64 = -1;

	t10 = ((x61<(x62+x63))<=x64);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = INT8_MIN;
	volatile int16_t x67 = 2;
	int8_t x68 = INT8_MAX;
	int32_t t11 = 11;

	t11 = ((x65<(x66+x67))<=x68);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x69 = 510629689LL;
	uint64_t x70 = UINT64_MAX;
	static volatile int16_t x71 = -1;
	static int8_t x72 = INT8_MAX;
	int32_t t12 = -566;

	t12 = ((x69<(x70+x71))<=x72);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x77 = 21192U;
	uint16_t x78 = UINT16_MAX;
	uint32_t x79 = 52U;
	int64_t x80 = INT64_MAX;
	int32_t t13 = 15;

	t13 = ((x77<(x78+x79))<=x80);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x81 = 7U;
	static int64_t x82 = INT64_MIN;
	volatile uint64_t x83 = 16647990LLU;
	uint16_t x84 = 3U;
	volatile int32_t t14 = 0;

	t14 = ((x81<(x82+x83))<=x84);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = INT8_MIN;
	static int16_t x87 = -10426;
	int8_t x88 = INT8_MIN;
	volatile int32_t t15 = 26445;

	t15 = ((x85<(x86+x87))<=x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x89 = -1;
	static uint64_t x91 = 898274LLU;
	static int16_t x92 = INT16_MIN;
	volatile int32_t t16 = -52857;

	t16 = ((x89<(x90+x91))<=x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x93 = INT16_MIN;
	int64_t x94 = -6094896985889LL;
	int32_t x95 = 46;
	static int32_t x96 = INT32_MIN;
	volatile int32_t t17 = -2905;

	t17 = ((x93<(x94+x95))<=x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = -1;
	uint64_t x98 = 5179383128440791LLU;
	int32_t x100 = INT32_MIN;
	int32_t t18 = 5271280;

	t18 = ((x97<(x98+x99))<=x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x101 = 561094783916556857LLU;
	volatile uint8_t x102 = 10U;
	volatile int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MIN;
	int32_t t19 = -73474942;

	t19 = ((x101<(x102+x103))<=x104);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x105 = UINT16_MAX;
	int32_t x106 = 576632;
	int8_t x108 = -1;

	t20 = ((x105<(x106+x107))<=x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x109 = 4370U;
	uint64_t x110 = UINT64_MAX;
	volatile int32_t x111 = -1;
	volatile int8_t x112 = 2;
	int32_t t21 = 75653;

	t21 = ((x109<(x110+x111))<=x112);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x114 = 37U;
	uint16_t x115 = 31701U;
	volatile int64_t x116 = -135380921704072LL;
	volatile int32_t t22 = 2379;

	t22 = ((x113<(x114+x115))<=x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x121 = INT64_MIN;
	uint8_t x122 = 7U;
	static volatile uint32_t x124 = UINT32_MAX;
	volatile int32_t t23 = 26638620;

	t23 = ((x121<(x122+x123))<=x124);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x125 = INT16_MIN;
	uint16_t x126 = 1U;
	int16_t x127 = -1;
	volatile uint32_t x128 = 91760797U;
	static volatile int32_t t24 = -91;

	t24 = ((x125<(x126+x127))<=x128);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x130 = 16693201143LLU;
	int32_t x131 = -49838;
	volatile int32_t x132 = INT32_MIN;

	t25 = ((x129<(x130+x131))<=x132);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x133 = 299;
	static int8_t x134 = -1;
	static int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MIN;
	static int32_t t26 = 132551025;

	t26 = ((x133<(x134+x135))<=x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x137 = 104LLU;
	uint8_t x138 = 3U;
	int32_t x139 = -1;
	int32_t x140 = 1;

	t27 = ((x137<(x138+x139))<=x140);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x146 = UINT16_MAX;
	int32_t x147 = INT32_MIN;
	static int32_t x148 = INT32_MIN;
	int32_t t28 = 155800;

	t28 = ((x145<(x146+x147))<=x148);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x149 = INT32_MAX;
	volatile int32_t x150 = -1;
	static uint64_t x151 = UINT64_MAX;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t29 = 307358241;

	t29 = ((x149<(x150+x151))<=x152);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x153 = 2830U;
	int16_t x154 = INT16_MIN;
	int32_t x155 = -1;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t30 = -82881;

	t30 = ((x153<(x154+x155))<=x156);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x157 = 1U;
	int64_t x159 = INT64_MIN;
	int8_t x160 = INT8_MIN;
	volatile int32_t t31 = -77141510;

	t31 = ((x157<(x158+x159))<=x160);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x161 = INT8_MIN;
	int16_t x162 = INT16_MAX;
	int32_t x163 = INT32_MIN;
	static int64_t x164 = -1LL;

	t32 = ((x161<(x162+x163))<=x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x165 = 4U;
	volatile uint64_t x166 = 1421LLU;
	volatile int16_t x167 = INT16_MIN;
	volatile int32_t t33 = 220;

	t33 = ((x165<(x166+x167))<=x168);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x169 = 15U;
	volatile uint8_t x171 = 9U;
	static uint64_t x172 = UINT64_MAX;
	int32_t t34 = -3055;

	t34 = ((x169<(x170+x171))<=x172);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x174 = INT8_MAX;
	static int32_t x175 = -1;
	static int16_t x176 = INT16_MAX;
	volatile int32_t t35 = -3755594;

	t35 = ((x173<(x174+x175))<=x176);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x178 = 90079331LLU;
	volatile int8_t x179 = -1;
	static int16_t x180 = 21;
	int32_t t36 = 5192;

	t36 = ((x177<(x178+x179))<=x180);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MIN;
	int16_t x184 = -1;
	volatile int32_t t37 = 86289;

	t37 = ((x181<(x182+x183))<=x184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;

	t38 = ((x189<(x190+x191))<=x192);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x193 = 94;
	static int8_t x194 = INT8_MAX;
	volatile int32_t t39 = -3366930;

	t39 = ((x193<(x194+x195))<=x196);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x197 = -792703626924468172LL;
	uint16_t x198 = 1379U;
	int16_t x199 = INT16_MIN;
	int32_t x200 = -1;
	volatile int32_t t40 = 65374;

	t40 = ((x197<(x198+x199))<=x200);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x201 = INT64_MIN;
	int8_t x202 = -1;
	static int64_t x203 = -11423738458LL;
	volatile int32_t x204 = 12118;
	int32_t t41 = -165875259;

	t41 = ((x201<(x202+x203))<=x204);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x209 = UINT16_MAX;
	static uint8_t x210 = 0U;
	int16_t x212 = INT16_MIN;

	t42 = ((x209<(x210+x211))<=x212);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x213 = UINT32_MAX;
	int32_t x214 = INT32_MIN;
	volatile uint32_t x215 = UINT32_MAX;
	uint16_t x216 = 5U;
	static int32_t t43 = 6063054;

	t43 = ((x213<(x214+x215))<=x216);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x217 = 29245;
	uint8_t x218 = 116U;
	static volatile uint16_t x219 = UINT16_MAX;
	int8_t x220 = INT8_MAX;
	int32_t t44 = 4626468;

	t44 = ((x217<(x218+x219))<=x220);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x221 = UINT16_MAX;
	static volatile int64_t x222 = -1LL;
	uint32_t x224 = UINT32_MAX;
	int32_t t45 = 770;

	t45 = ((x221<(x222+x223))<=x224);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x225 = 5745LLU;
	uint64_t x226 = 3143770718407LLU;
	int32_t x227 = INT32_MAX;
	volatile int32_t x228 = -1;
	int32_t t46 = -91895;

	t46 = ((x225<(x226+x227))<=x228);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x229 = -1;
	volatile uint32_t x230 = 379570734U;
	int8_t x231 = 0;
	volatile int32_t t47 = 1030140;

	t47 = ((x229<(x230+x231))<=x232);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x238 = UINT32_MAX;
	int16_t x239 = INT16_MIN;

	t48 = ((x237<(x238+x239))<=x240);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x241 = INT8_MIN;
	volatile uint32_t x242 = UINT32_MAX;
	uint16_t x244 = 81U;
	volatile int32_t t49 = 7417832;

	t49 = ((x241<(x242+x243))<=x244);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MAX;
	int32_t x247 = -1;
	int16_t x248 = INT16_MIN;
	int32_t t50 = -1;

	t50 = ((x245<(x246+x247))<=x248);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x253 = -6582050831306LL;
	uint32_t x254 = UINT32_MAX;
	volatile int16_t x256 = -1;
	int32_t t51 = -11;

	t51 = ((x253<(x254+x255))<=x256);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x265 = 80;
	int16_t x266 = 538;
	int32_t x267 = -1;
	uint32_t x268 = UINT32_MAX;

	t52 = ((x265<(x266+x267))<=x268);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x269 = INT64_MAX;
	int32_t x271 = INT32_MIN;
	volatile int32_t x272 = INT32_MAX;

	t53 = ((x269<(x270+x271))<=x272);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x274 = -1;
	int16_t x275 = INT16_MIN;
	volatile uint32_t x276 = 22031768U;

	t54 = ((x273<(x274+x275))<=x276);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x277 = 1U;
	int32_t x280 = 1;
	int32_t t55 = 3554308;

	t55 = ((x277<(x278+x279))<=x280);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x281 = -13273779826741LL;
	uint8_t x283 = UINT8_MAX;
	static uint16_t x284 = 17U;
	int32_t t56 = -357;

	t56 = ((x281<(x282+x283))<=x284);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x285 = UINT8_MAX;
	uint8_t x286 = 3U;
	volatile int16_t x287 = INT16_MAX;
	int32_t t57 = 11082658;

	t57 = ((x285<(x286+x287))<=x288);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x289 = UINT64_MAX;
	int8_t x290 = -1;
	static int64_t x292 = INT64_MIN;

	t58 = ((x289<(x290+x291))<=x292);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x293 = INT32_MAX;
	volatile int32_t x294 = -10513700;
	int8_t x295 = INT8_MIN;
	int16_t x296 = INT16_MAX;
	volatile int32_t t59 = -8372;

	t59 = ((x293<(x294+x295))<=x296);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x297 = INT16_MIN;
	int64_t x299 = 452LL;
	volatile int32_t t60 = -22;

	t60 = ((x297<(x298+x299))<=x300);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x301 = 67766832810LLU;
	static int64_t x304 = INT64_MAX;

	t61 = ((x301<(x302+x303))<=x304);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x306 = INT32_MAX;
	volatile uint64_t x307 = 2910070877166668LLU;
	int16_t x308 = 0;
	int32_t t62 = 164058112;

	t62 = ((x305<(x306+x307))<=x308);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x309 = INT64_MIN;
	uint16_t x310 = 36U;
	uint32_t x311 = 1334240437U;

	t63 = ((x309<(x310+x311))<=x312);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x313 = 2096;
	volatile int64_t x315 = -1LL;
	int16_t x316 = INT16_MAX;
	static volatile int32_t t64 = 22;

	t64 = ((x313<(x314+x315))<=x316);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x318 = -1;
	int16_t x319 = -1;
	int32_t x320 = -1;

	t65 = ((x317<(x318+x319))<=x320);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x321 = 22;
	static uint16_t x322 = 6257U;
	static volatile int32_t x323 = 27646;
	int32_t x324 = INT32_MIN;
	volatile int32_t t66 = 184427067;

	t66 = ((x321<(x322+x323))<=x324);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x326 = INT16_MAX;
	int16_t x327 = 0;
	static int64_t x328 = INT64_MIN;

	t67 = ((x325<(x326+x327))<=x328);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x329 = 93486274058LL;
	static int64_t x330 = -1LL;
	int8_t x331 = -24;
	uint64_t x332 = UINT64_MAX;
	static int32_t t68 = 0;

	t68 = ((x329<(x330+x331))<=x332);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x338 = INT8_MIN;
	static uint32_t x339 = 0U;
	volatile int8_t x340 = INT8_MIN;
	static int32_t t69 = 435194;

	t69 = ((x337<(x338+x339))<=x340);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x343 = UINT32_MAX;
	int8_t x344 = -1;
	int32_t t70 = 267480;

	t70 = ((x341<(x342+x343))<=x344);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x345 = 4083020603LLU;
	int32_t t71 = 298244303;

	t71 = ((x345<(x346+x347))<=x348);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x353 = UINT64_MAX;
	static uint32_t x355 = UINT32_MAX;
	static int8_t x356 = INT8_MAX;
	int32_t t72 = 82161;

	t72 = ((x353<(x354+x355))<=x356);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x358 = -566;
	int8_t x359 = -1;

	t73 = ((x357<(x358+x359))<=x360);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x362 = INT16_MAX;
	uint64_t x363 = UINT64_MAX;
	volatile int32_t t74 = -6;

	t74 = ((x361<(x362+x363))<=x364);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x367 = INT64_MIN;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t75 = 1882;

	t75 = ((x365<(x366+x367))<=x368);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x369 = UINT16_MAX;
	int32_t x370 = INT32_MIN;
	int16_t x371 = 4334;
	volatile int64_t x372 = INT64_MIN;

	t76 = ((x369<(x370+x371))<=x372);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x373 = UINT32_MAX;
	uint8_t x375 = 2U;
	int16_t x376 = INT16_MIN;
	int32_t t77 = 94391565;

	t77 = ((x373<(x374+x375))<=x376);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x377 = INT8_MIN;
	int64_t x379 = INT64_MIN;
	int32_t x380 = INT32_MIN;
	int32_t t78 = 23745;

	t78 = ((x377<(x378+x379))<=x380);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x382 = -62214671348035784LL;

	t79 = ((x381<(x382+x383))<=x384);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x385 = 961021U;
	uint8_t x386 = 0U;
	int64_t x387 = INT64_MIN;
	uint16_t x388 = 83U;
	int32_t t80 = -1400929;

	t80 = ((x385<(x386+x387))<=x388);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x389 = INT64_MIN;
	static int8_t x390 = -15;
	uint64_t x391 = 5064662439122895101LLU;
	volatile int32_t t81 = 0;

	t81 = ((x389<(x390+x391))<=x392);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x393 = 45;
	static int16_t x394 = INT16_MIN;
	int32_t x395 = 7;
	volatile uint32_t x396 = 68U;
	volatile int32_t t82 = -366913;

	t82 = ((x393<(x394+x395))<=x396);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x397 = UINT8_MAX;
	int64_t x398 = 2429689440LL;
	int64_t x399 = 13481403550463LL;
	static int32_t x400 = 360136;
	volatile int32_t t83 = 1379206;

	t83 = ((x397<(x398+x399))<=x400);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x402 = -1LL;
	int32_t x403 = INT32_MIN;
	int64_t x404 = INT64_MIN;
	int32_t t84 = 1142;

	t84 = ((x401<(x402+x403))<=x404);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x409 = -1;
	static uint16_t x410 = 44U;
	int16_t x411 = INT16_MAX;
	int8_t x412 = INT8_MIN;
	static int32_t t85 = 1056;

	t85 = ((x409<(x410+x411))<=x412);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x413 = 122U;
	int8_t x414 = INT8_MAX;
	volatile uint16_t x415 = UINT16_MAX;
	static uint16_t x416 = 1725U;
	volatile int32_t t86 = 1046178702;

	t86 = ((x413<(x414+x415))<=x416);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x417 = UINT64_MAX;
	uint8_t x418 = UINT8_MAX;
	static uint64_t x419 = 18660540933594620LLU;
	int64_t x420 = -1LL;

	t87 = ((x417<(x418+x419))<=x420);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x421 = -1;
	int32_t x422 = INT32_MIN;
	uint64_t x423 = 102701607845880LLU;
	int16_t x424 = INT16_MIN;
	volatile int32_t t88 = -109;

	t88 = ((x421<(x422+x423))<=x424);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x425 = INT32_MIN;
	int64_t x426 = 465415301855LL;
	int8_t x427 = -1;
	int32_t t89 = -112;

	t89 = ((x425<(x426+x427))<=x428);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x430 = INT16_MIN;
	int8_t x431 = 0;
	int64_t x432 = -1LL;
	int32_t t90 = -4193847;

	t90 = ((x429<(x430+x431))<=x432);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x433 = 49340217LL;
	static int16_t x434 = 1;
	volatile int64_t x435 = -1900761212704LL;
	int8_t x436 = 0;
	int32_t t91 = 231844;

	t91 = ((x433<(x434+x435))<=x436);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x441 = -1;
	volatile uint8_t x442 = UINT8_MAX;
	static int16_t x443 = INT16_MAX;
	volatile int32_t x444 = -6009;
	volatile int32_t t92 = 0;

	t92 = ((x441<(x442+x443))<=x444);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x445 = 91756;
	uint8_t x446 = 94U;
	int64_t x447 = -27393LL;
	int32_t t93 = -7939382;

	t93 = ((x445<(x446+x447))<=x448);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x449 = INT16_MAX;
	int32_t x450 = -90085;
	int8_t x451 = 19;
	int8_t x452 = 1;
	int32_t t94 = -2080;

	t94 = ((x449<(x450+x451))<=x452);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x453 = -1566LL;
	int16_t x455 = INT16_MIN;
	volatile int32_t x456 = -1;

	t95 = ((x453<(x454+x455))<=x456);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x457 = -15;
	int8_t x458 = INT8_MAX;
	int64_t x459 = -30LL;
	volatile uint64_t x460 = 443094LLU;

	t96 = ((x457<(x458+x459))<=x460);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x465 = INT64_MIN;
	int8_t x467 = INT8_MAX;
	volatile uint16_t x468 = 37U;

	t97 = ((x465<(x466+x467))<=x468);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x469 = -1;
	int64_t x470 = INT64_MIN;
	uint8_t x471 = 58U;

	t98 = ((x469<(x470+x471))<=x472);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x474 = INT64_MIN;
	volatile int16_t x475 = INT16_MAX;
	int8_t x476 = INT8_MAX;
	volatile int32_t t99 = 456638557;

	t99 = ((x473<(x474+x475))<=x476);

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

