#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t1 = -31754603190059625LL;
int64_t x14 = 13LL;
volatile uint64_t x18 = UINT64_MAX;
uint16_t x24 = 473U;
volatile uint64_t t4 = 203965LLU;
int64_t x25 = INT64_MIN;
uint64_t x26 = 1LLU;
static uint8_t x32 = 3U;
volatile int16_t x41 = -83;
int16_t x43 = INT16_MIN;
volatile int32_t t9 = 0;
uint8_t x71 = 3U;
static int32_t x91 = 428;
int32_t x96 = INT32_MAX;
int16_t x114 = -1;
int16_t x115 = INT16_MIN;
int64_t x119 = 121065033126LL;
volatile uint8_t x120 = UINT8_MAX;
static uint64_t x122 = 362514779182219LLU;
static int8_t x129 = INT8_MIN;
uint32_t x130 = 4U;
int16_t x132 = -15861;
int64_t x136 = INT64_MIN;
volatile int64_t x146 = -1LL;
uint16_t x155 = 0U;
static int64_t x156 = INT64_MIN;
int64_t x159 = 21847875LL;
uint64_t x171 = UINT64_MAX;
uint16_t x172 = 36U;
volatile uint64_t t29 = 3LLU;
int8_t x181 = INT8_MIN;
volatile int64_t t32 = -2097668158LL;
uint8_t x191 = 0U;
int64_t x194 = -1LL;
int64_t t34 = -6LL;
int32_t x197 = INT32_MIN;
int8_t x206 = INT8_MAX;
uint16_t x209 = 7506U;
volatile int16_t x211 = -1;
uint32_t x216 = 4894U;
volatile uint64_t t38 = 10LLU;
volatile int32_t x219 = -1;
uint64_t x225 = 171619LLU;
int32_t x226 = -1;
int16_t x227 = 12;
volatile int64_t x228 = -1LL;
volatile int32_t t42 = 1010871941;
uint64_t x242 = 15379230100212LLU;
int16_t x243 = INT16_MIN;
uint64_t x244 = 1366989496797LLU;
int32_t x262 = 294560642;
uint64_t x268 = UINT64_MAX;
volatile uint32_t x269 = UINT32_MAX;
int8_t x272 = 2;
int8_t x274 = INT8_MAX;
int64_t x282 = 0LL;
static int64_t x293 = INT64_MIN;
static uint32_t x299 = 9036166U;
volatile uint64_t t53 = 84772578705LLU;
int16_t x319 = INT16_MAX;
int8_t x324 = INT8_MIN;
volatile int64_t x325 = -1LL;
volatile int32_t t59 = -7704;
int8_t x337 = INT8_MAX;
int64_t x355 = 10018011454797074LL;
static int64_t x357 = INT64_MAX;
uint64_t t63 = 373LLU;
int32_t x363 = -6;
volatile int8_t x364 = -28;
uint16_t x365 = 5U;
uint64_t t66 = 22087797133375549LLU;
uint16_t x373 = UINT16_MAX;
volatile int16_t x375 = -1;
int32_t x378 = INT32_MAX;
uint32_t x379 = UINT32_MAX;
static uint64_t x386 = 2249942370318644LLU;
volatile uint64_t t69 = 617014LLU;
volatile int8_t x390 = INT8_MAX;
int8_t x395 = INT8_MIN;
int8_t x400 = -1;
int16_t x410 = INT16_MAX;
volatile int32_t x413 = -1;
volatile int8_t x416 = 34;
uint64_t x421 = UINT64_MAX;
int16_t x430 = 15808;
int32_t x432 = -224185;
volatile uint64_t x434 = 3070394964056741617LLU;
uint32_t x453 = UINT32_MAX;
uint64_t x455 = UINT64_MAX;
int8_t x456 = -26;
static int64_t x478 = INT64_MAX;
volatile int32_t x497 = INT32_MIN;
volatile uint64_t t88 = 1LLU;
volatile int32_t x501 = INT32_MAX;
static uint32_t x502 = 5210U;
uint32_t x504 = UINT32_MAX;
static uint32_t x508 = 3U;
volatile uint32_t t90 = 3844897U;
volatile uint64_t t91 = 383LLU;
int16_t x517 = -1;
uint64_t t92 = 20512678670LLU;
static int8_t x529 = 2;
volatile int16_t x535 = -1;
static uint64_t x546 = 166506088970363563LLU;
static uint32_t t98 = 3U;


void f0(void) {
	int32_t x1 = -3;
	int32_t x2 = 1;
	int16_t x3 = INT16_MIN;
	volatile int16_t x4 = INT16_MIN;
	static int32_t t0 = -374942935;

	t0 = ((x1*(x2+x3))%x4);

	if (t0 != 32765) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 70U;
	static int64_t x10 = -1LL;
	uint16_t x11 = UINT16_MAX;
	static int8_t x12 = -34;

	t1 = ((x9*(x10+x11))%x12);

	if (t1 != 32LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MAX;
	volatile int16_t x15 = INT16_MIN;
	int32_t x16 = 13998360;
	volatile int64_t t2 = 12352754157037525LL;

	t2 = ((x13*(x14+x15))%x16);

	if (t2 != -5747605LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x17 = INT64_MAX;
	int32_t x19 = INT32_MAX;
	int8_t x20 = INT8_MIN;
	volatile uint64_t t3 = 6LLU;

	t3 = ((x17*(x18+x19))%x20);

	if (t3 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 1383479;
	uint64_t x22 = 224113366069979282LLU;
	int32_t x23 = -108193;

	t4 = ((x21*(x22+x23))%x24);

	if (t4 != 4LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x27 = UINT32_MAX;
	int8_t x28 = INT8_MIN;
	volatile uint64_t t5 = 445293243859708623LLU;

	t5 = ((x25*(x26+x27))%x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = 57U;
	volatile uint64_t x30 = 27465616784LLU;
	static uint64_t x31 = UINT64_MAX;
	uint64_t t6 = 5076565720LLU;

	t6 = ((x29*(x30+x31))%x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x42 = 1U;
	volatile int32_t x44 = INT32_MIN;
	volatile int32_t t7 = 1;

	t7 = ((x41*(x42+x43))%x44);

	if (t7 != 2719661) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = -1;
	int16_t x54 = INT16_MAX;
	volatile uint16_t x55 = 11U;
	uint32_t x56 = 1773770U;
	volatile uint32_t t8 = 53U;

	t8 = ((x53*(x54+x55))%x56);

	if (t8 != 637348U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x65 = INT8_MAX;
	static uint16_t x66 = 213U;
	uint8_t x67 = UINT8_MAX;
	int8_t x68 = INT8_MAX;

	t9 = ((x65*(x66+x67))%x68);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x69 = 1U;
	int64_t x70 = -12657LL;
	volatile int16_t x72 = 3;
	volatile int64_t t10 = 191LL;

	t10 = ((x69*(x70+x71))%x72);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x85 = INT32_MIN;
	int8_t x86 = INT8_MAX;
	static int64_t x87 = -1LL;
	volatile uint16_t x88 = UINT16_MAX;
	int64_t t11 = 182136757944LL;

	t11 = ((x85*(x86+x87))%x88);

	if (t11 != -63LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x89 = UINT32_MAX;
	volatile int8_t x90 = 0;
	int16_t x92 = -1;
	uint32_t t12 = 649828U;

	t12 = ((x89*(x90+x91))%x92);

	if (t12 != 4294966868U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x93 = 28479952160464805LLU;
	int32_t x94 = 1;
	uint8_t x95 = UINT8_MAX;
	uint64_t t13 = 59936LLU;

	t13 = ((x93*(x94+x95))%x96);

	if (t13 != 150757425LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x97 = 1;
	static int16_t x98 = -1;
	int64_t x99 = -1LL;
	uint8_t x100 = UINT8_MAX;
	volatile int64_t t14 = -17155645LL;

	t14 = ((x97*(x98+x99))%x100);

	if (t14 != -2LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x101 = 0U;
	int64_t x102 = INT64_MIN;
	volatile int64_t x103 = 62282180949LL;
	uint32_t x104 = UINT32_MAX;
	static volatile int64_t t15 = -3579170614650LL;

	t15 = ((x101*(x102+x103))%x104);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x113 = -195639654234LL;
	int32_t x116 = INT32_MIN;
	int64_t t16 = -2867430385575724LL;

	t16 = ((x113*(x114+x115))%x116);

	if (t16 != 682964826LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x117 = INT8_MAX;
	int8_t x118 = 11;
	volatile int64_t t17 = -12LL;

	t17 = ((x117*(x118+x119))%x120);

	if (t17 != 149LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x121 = INT16_MIN;
	int64_t x123 = INT64_MAX;
	int16_t x124 = INT16_MIN;
	volatile uint64_t t18 = 1748724933LLU;

	t18 = ((x121*(x122+x123))%x124);

	if (t18 != 6567859789466632192LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x125 = UINT8_MAX;
	int8_t x126 = 2;
	volatile int8_t x127 = 1;
	int32_t x128 = -1;
	volatile int32_t t19 = 1101097;

	t19 = ((x125*(x126+x127))%x128);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x131 = INT16_MIN;
	uint32_t t20 = 1434U;

	t20 = ((x129*(x130+x131))%x132);

	if (t20 != 4193792U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x133 = 0;
	int64_t x134 = 2406972808951873LL;
	volatile uint32_t x135 = 67U;
	int64_t t21 = 135939463720366LL;

	t21 = ((x133*(x134+x135))%x136);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x137 = UINT32_MAX;
	static int32_t x138 = INT32_MIN;
	int16_t x139 = INT16_MAX;
	int16_t x140 = INT16_MIN;
	volatile uint32_t t22 = 2U;

	t22 = ((x137*(x138+x139))%x140);

	if (t22 != 2147450881U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x141 = -1;
	uint64_t x142 = UINT64_MAX;
	int32_t x143 = INT32_MAX;
	uint16_t x144 = 2146U;
	volatile uint64_t t23 = 14486985923LLU;

	t23 = ((x141*(x142+x143))%x144);

	if (t23 != 1990LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x145 = 5U;
	uint64_t x147 = 11675801414LLU;
	volatile int64_t x148 = INT64_MIN;
	uint64_t t24 = 27444561198922LLU;

	t24 = ((x145*(x146+x147))%x148);

	if (t24 != 58379007065LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x149 = 7;
	uint16_t x150 = 77U;
	int8_t x151 = INT8_MIN;
	uint32_t x152 = 252U;
	uint32_t t25 = 125U;

	t25 = ((x149*(x150+x151))%x152);

	if (t25 != 151U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x153 = 0U;
	uint16_t x154 = 4U;
	static volatile int64_t t26 = 0LL;

	t26 = ((x153*(x154+x155))%x156);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x157 = 2018;
	int8_t x158 = INT8_MAX;
	static int64_t x160 = -1LL;
	volatile int64_t t27 = 1715410885312560812LL;

	t27 = ((x157*(x158+x159))%x160);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x161 = UINT16_MAX;
	int8_t x162 = -1;
	volatile uint16_t x163 = 1U;
	static uint64_t x164 = 7590202419561321008LLU;
	static volatile uint64_t t28 = 36395LLU;

	t28 = ((x161*(x162+x163))%x164);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x169 = 3U;
	int32_t x170 = 213;

	t29 = ((x169*(x170+x171))%x172);

	if (t29 != 24LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x173 = 102315474;
	static uint8_t x174 = UINT8_MAX;
	static volatile uint32_t x175 = 88671U;
	int64_t x176 = -1LL;
	int64_t t30 = 30142LL;

	t30 = ((x173*(x174+x175))%x176);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x182 = INT8_MIN;
	uint64_t x183 = 3LLU;
	int16_t x184 = -8998;
	uint64_t t31 = 4039774LLU;

	t31 = ((x181*(x182+x183))%x184);

	if (t31 != 16000LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x185 = 4083U;
	int16_t x186 = -3;
	volatile int64_t x187 = -1LL;
	volatile int8_t x188 = 9;

	t32 = ((x185*(x186+x187))%x188);

	if (t32 != -6LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x189 = -197091;
	static uint16_t x190 = 1U;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t33 = -13512;

	t33 = ((x189*(x190+x191))%x192);

	if (t33 != -99) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x193 = -1;
	uint8_t x195 = 41U;
	static uint32_t x196 = UINT32_MAX;

	t34 = ((x193*(x194+x195))%x196);

	if (t34 != -40LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x198 = 54U;
	uint64_t x199 = 17927691352534LLU;
	int16_t x200 = INT16_MIN;
	uint64_t t35 = 54795536732614726LLU;

	t35 = ((x197*(x198+x199))%x200);

	if (t35 != 17377599831811293184LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x205 = INT8_MAX;
	int64_t x207 = -1LL;
	int8_t x208 = INT8_MAX;
	volatile int64_t t36 = 128498550688090674LL;

	t36 = ((x205*(x206+x207))%x208);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x210 = -957;
	static uint8_t x212 = UINT8_MAX;
	int32_t t37 = 7508071;

	t37 = ((x209*(x210+x211))%x212);

	if (t37 != -3) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x213 = 3U;
	static uint64_t x214 = 1430280949LLU;
	int16_t x215 = -1;

	t38 = ((x213*(x214+x215))%x216);

	if (t38 != 3874LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x217 = INT8_MAX;
	static volatile uint8_t x218 = 5U;
	int64_t x220 = INT64_MIN;
	volatile int64_t t39 = -16LL;

	t39 = ((x217*(x218+x219))%x220);

	if (t39 != 508LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t t40 = 88LLU;

	t40 = ((x225*(x226+x227))%x228);

	if (t40 != 1887809LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x229 = 4135;
	int8_t x230 = INT8_MIN;
	volatile int32_t x231 = -214;
	volatile int64_t x232 = INT64_MAX;
	int64_t t41 = -1077874992270LL;

	t41 = ((x229*(x230+x231))%x232);

	if (t41 != -1414170LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x233 = -1;
	int16_t x234 = INT16_MIN;
	int8_t x235 = 2;
	static uint8_t x236 = UINT8_MAX;

	t42 = ((x233*(x234+x235))%x236);

	if (t42 != 126) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x237 = 0;
	static int16_t x238 = INT16_MIN;
	int16_t x239 = 3266;
	volatile int8_t x240 = -1;
	volatile int32_t t43 = -369;

	t43 = ((x237*(x238+x239))%x240);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x241 = 1;
	uint64_t t44 = 51LLU;

	t44 = ((x241*(x242+x243))%x244);

	if (t44 != 342345602677LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x253 = INT8_MAX;
	uint8_t x254 = UINT8_MAX;
	int8_t x255 = -1;
	volatile int16_t x256 = INT16_MAX;
	int32_t t45 = -1;

	t45 = ((x253*(x254+x255))%x256);

	if (t45 != 32258) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x257 = 6117210U;
	uint8_t x258 = 28U;
	int32_t x259 = INT32_MIN;
	static volatile int16_t x260 = 6;
	uint32_t t46 = 1584380052U;

	t46 = ((x257*(x258+x259))%x260);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x261 = -4;
	uint16_t x263 = 160U;
	int64_t x264 = 11919666830360881LL;
	volatile int64_t t47 = -144537LL;

	t47 = ((x261*(x262+x263))%x264);

	if (t47 != -1178243208LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x265 = 19U;
	int8_t x266 = -22;
	static uint16_t x267 = 9U;
	static volatile uint64_t t48 = 2869272162LLU;

	t48 = ((x265*(x266+x267))%x268);

	if (t48 != 4294967049LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x270 = 14U;
	static int8_t x271 = INT8_MAX;
	volatile uint32_t t49 = 10692U;

	t49 = ((x269*(x270+x271))%x272);

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x273 = 0U;
	int8_t x275 = -1;
	volatile uint8_t x276 = 1U;
	static int32_t t50 = -9;

	t50 = ((x273*(x274+x275))%x276);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x281 = UINT16_MAX;
	int8_t x283 = -1;
	volatile int64_t x284 = INT64_MIN;
	static volatile int64_t t51 = -687958LL;

	t51 = ((x281*(x282+x283))%x284);

	if (t51 != -65535LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x294 = UINT16_MAX;
	uint64_t x295 = UINT64_MAX;
	int16_t x296 = -1;
	static uint64_t t52 = 889797162260LLU;

	t52 = ((x293*(x294+x295))%x296);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x297 = UINT64_MAX;
	int16_t x298 = INT16_MIN;
	int32_t x300 = -123985;

	t53 = ((x297*(x298+x299))%x300);

	if (t53 != 18446744073700548218LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x301 = 0;
	int64_t x302 = 861348378LL;
	static uint16_t x303 = UINT16_MAX;
	uint64_t x304 = 2082596779LLU;
	static volatile uint64_t t54 = 3521377LLU;

	t54 = ((x301*(x302+x303))%x304);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x305 = 5LLU;
	uint16_t x306 = 1U;
	uint64_t x307 = UINT64_MAX;
	int64_t x308 = INT64_MAX;
	volatile uint64_t t55 = 196LLU;

	t55 = ((x305*(x306+x307))%x308);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x317 = UINT64_MAX;
	int16_t x318 = -1;
	volatile int32_t x320 = -162039048;
	uint64_t t56 = 8559227054251110704LLU;

	t56 = ((x317*(x318+x319))%x320);

	if (t56 != 162006282LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x321 = -961;
	static int32_t x322 = INT32_MAX;
	volatile int32_t x323 = INT32_MIN;
	int32_t t57 = 21;

	t57 = ((x321*(x322+x323))%x324);

	if (t57 != 65) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x326 = 30U;
	int8_t x327 = -1;
	int64_t x328 = INT64_MIN;
	volatile int64_t t58 = 16252551281533LL;

	t58 = ((x325*(x326+x327))%x328);

	if (t58 != -29LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x329 = INT16_MIN;
	uint16_t x330 = UINT16_MAX;
	int8_t x331 = INT8_MIN;
	volatile int8_t x332 = 60;

	t59 = ((x329*(x330+x331))%x332);

	if (t59 != -56) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x333 = UINT8_MAX;
	int16_t x334 = INT16_MAX;
	static int8_t x335 = -1;
	volatile int64_t x336 = INT64_MAX;
	int64_t t60 = -207402661781LL;

	t60 = ((x333*(x334+x335))%x336);

	if (t60 != 8355330LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x338 = 2371826873166968LL;
	uint8_t x339 = 22U;
	uint8_t x340 = UINT8_MAX;
	int64_t t61 = -101603LL;

	t61 = ((x337*(x338+x339))%x340);

	if (t61 != 150LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x353 = 20;
	int32_t x354 = INT32_MAX;
	volatile int16_t x356 = INT16_MAX;
	static volatile int64_t t62 = 1232804059LL;

	t62 = ((x353*(x354+x355))%x356);

	if (t62 != 15041LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x358 = -3;
	volatile uint64_t x359 = UINT64_MAX;
	int64_t x360 = 50093651LL;

	t63 = ((x357*(x358+x359))%x360);

	if (t63 != 4LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x361 = INT8_MAX;
	static uint32_t x362 = 2053154070U;
	static volatile uint32_t t64 = 492674148U;

	t64 = ((x361*(x362+x363))%x364);

	if (t64 != 3052528368U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x366 = -1;
	uint16_t x367 = 1593U;
	int8_t x368 = -1;
	int32_t t65 = -2798461;

	t65 = ((x365*(x366+x367))%x368);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x369 = -13719;
	int64_t x370 = INT64_MIN;
	uint64_t x371 = UINT64_MAX;
	int64_t x372 = -280LL;

	t66 = ((x369*(x370+x371))%x372);

	if (t66 != 9223372036854789527LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x374 = 113U;
	uint16_t x376 = 24856U;
	volatile int32_t t67 = 125256789;

	t67 = ((x373*(x374+x375))%x376);

	if (t67 != 7400) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x377 = 1;
	int64_t x380 = -1LL;
	int64_t t68 = 2486LL;

	t68 = ((x377*(x378+x379))%x380);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x385 = 287035502U;
	static int32_t x387 = 226801;
	int8_t x388 = 17;

	t69 = ((x385*(x386+x387))%x388);

	if (t69 != 10LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x389 = INT16_MIN;
	uint32_t x391 = 1457582801U;
	int8_t x392 = INT8_MIN;
	static uint32_t t70 = 13184U;

	t70 = ((x389*(x390+x391))%x392);

	if (t70 != 2253914112U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x393 = 2U;
	uint64_t x394 = 2LLU;
	int16_t x396 = INT16_MIN;
	volatile uint64_t t71 = 144457469928625LLU;

	t71 = ((x393*(x394+x395))%x396);

	if (t71 != 32516LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x397 = -1;
	static volatile int8_t x398 = INT8_MAX;
	static volatile uint64_t x399 = UINT64_MAX;
	volatile uint64_t t72 = 143106225LLU;

	t72 = ((x397*(x398+x399))%x400);

	if (t72 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x405 = -1;
	volatile int32_t x406 = -1;
	static uint8_t x407 = UINT8_MAX;
	int64_t x408 = 248666LL;
	int64_t t73 = 31LL;

	t73 = ((x405*(x406+x407))%x408);

	if (t73 != -254LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x409 = 2;
	volatile int8_t x411 = 12;
	int16_t x412 = INT16_MIN;
	int32_t t74 = -332865;

	t74 = ((x409*(x410+x411))%x412);

	if (t74 != 22) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x414 = UINT16_MAX;
	int8_t x415 = INT8_MIN;
	int32_t t75 = 249423;

	t75 = ((x413*(x414+x415))%x416);

	if (t75 != -25) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x422 = 9164667U;
	static int8_t x423 = -1;
	static int8_t x424 = INT8_MAX;
	uint64_t t76 = 368460059134LLU;

	t76 = ((x421*(x422+x423))%x424);

	if (t76 != 37LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x429 = 3590LL;
	static int64_t x431 = -128255541208893LL;
	volatile int64_t t77 = -1LL;

	t77 = ((x429*(x430+x431))%x432);

	if (t77 != -161045LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x433 = 1U;
	volatile uint16_t x435 = 4U;
	volatile uint8_t x436 = UINT8_MAX;
	uint64_t t78 = 750735598705139389LLU;

	t78 = ((x433*(x434+x435))%x436);

	if (t78 != 131LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x437 = 9U;
	volatile uint32_t x438 = UINT32_MAX;
	int8_t x439 = 4;
	int16_t x440 = INT16_MIN;
	static uint32_t t79 = 41U;

	t79 = ((x437*(x438+x439))%x440);

	if (t79 != 27U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x441 = -1;
	int32_t x442 = -1;
	int8_t x443 = INT8_MAX;
	int8_t x444 = 1;
	volatile int32_t t80 = -61;

	t80 = ((x441*(x442+x443))%x444);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x445 = -1LL;
	int8_t x446 = INT8_MIN;
	int8_t x447 = -1;
	uint8_t x448 = 50U;
	int64_t t81 = -1795369904663LL;

	t81 = ((x445*(x446+x447))%x448);

	if (t81 != 29LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x454 = INT8_MAX;
	volatile uint64_t t82 = 1096965LLU;

	t82 = ((x453*(x454+x455))%x456);

	if (t82 != 541165879170LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x465 = 181;
	uint32_t x466 = UINT32_MAX;
	int8_t x467 = -2;
	int16_t x468 = -1;
	uint32_t t83 = 32U;

	t83 = ((x465*(x466+x467))%x468);

	if (t83 != 4294966753U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x469 = INT32_MAX;
	int8_t x470 = INT8_MAX;
	int8_t x471 = INT8_MIN;
	volatile int32_t x472 = INT32_MIN;
	static int32_t t84 = -15065847;

	t84 = ((x469*(x470+x471))%x472);

	if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x477 = -1LL;
	static volatile int64_t x479 = INT64_MIN;
	volatile int64_t x480 = INT64_MIN;
	volatile int64_t t85 = -3569LL;

	t85 = ((x477*(x478+x479))%x480);

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x485 = -1;
	static uint8_t x486 = UINT8_MAX;
	static int64_t x487 = INT64_MIN;
	int64_t x488 = 350LL;
	volatile int64_t t86 = -2061811441681138339LL;

	t86 = ((x485*(x486+x487))%x488);

	if (t86 != 103LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x489 = -1;
	int8_t x490 = INT8_MIN;
	int8_t x491 = INT8_MAX;
	int64_t x492 = -9169LL;
	volatile int64_t t87 = 1LL;

	t87 = ((x489*(x490+x491))%x492);

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x498 = 85;
	uint64_t x499 = 44LLU;
	volatile int32_t x500 = INT32_MIN;

	t88 = ((x497*(x498+x499))%x500);

	if (t88 != 18446743796684161024LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x503 = UINT16_MAX;
	volatile uint32_t t89 = 2942U;

	t89 = ((x501*(x502+x503))%x504);

	if (t89 != 2147412903U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x505 = INT8_MIN;
	int32_t x506 = -1;
	int8_t x507 = INT8_MAX;

	t90 = ((x505*(x506+x507))%x508);

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x513 = 5752;
	uint64_t x514 = 753365489LLU;
	int64_t x515 = INT64_MIN;
	int16_t x516 = INT16_MIN;

	t91 = ((x513*(x514+x515))%x516);

	if (t91 != 4333358292728LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x518 = UINT64_MAX;
	int32_t x519 = INT32_MAX;
	volatile int64_t x520 = INT64_MAX;

	t92 = ((x517*(x518+x519))%x520);

	if (t92 != 9223372034707292163LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x525 = 1035U;
	static uint32_t x526 = 42012U;
	int16_t x527 = INT16_MAX;
	volatile int64_t x528 = 490789520LL;
	int64_t t93 = 4240711993LL;

	t93 = ((x525*(x526+x527))%x528);

	if (t93 != 77396265LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x530 = INT16_MIN;
	int32_t x531 = 163;
	volatile int16_t x532 = INT16_MAX;
	static int32_t t94 = 5615083;

	t94 = ((x529*(x530+x531))%x532);

	if (t94 != -32443) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x533 = UINT32_MAX;
	int8_t x534 = -1;
	volatile uint32_t x536 = 1123117373U;
	uint32_t t95 = 2497U;

	t95 = ((x533*(x534+x535))%x536);

	if (t95 != 2U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x541 = UINT8_MAX;
	int16_t x542 = INT16_MAX;
	int8_t x543 = -1;
	int16_t x544 = INT16_MIN;
	static volatile int32_t t96 = -1;

	t96 = ((x541*(x542+x543))%x544);

	if (t96 != 32258) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x545 = UINT64_MAX;
	volatile uint32_t x547 = 29050U;
	int8_t x548 = -7;
	volatile uint64_t t97 = 239148698253697LLU;

	t97 = ((x545*(x546+x547))%x548);

	if (t97 != 18280237984739159003LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x553 = 1815254388U;
	int16_t x554 = -7;
	int16_t x555 = INT16_MAX;
	static int16_t x556 = INT16_MIN;

	t98 = ((x553*(x554+x555))%x556);

	if (t98 != 3911537760U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x557 = 1;
	static int64_t x558 = -64426LL;
	volatile int8_t x559 = INT8_MAX;
	int64_t x560 = 3574LL;
	int64_t t99 = 2737136LL;

	t99 = ((x557*(x558+x559))%x560);

	if (t99 != -3541LL) { NG(); } else { ; }
	
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

