#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x41 = -101774645947LL;
uint32_t x52 = 60714U;
volatile int32_t t8 = -9380564;
static uint64_t x85 = UINT64_MAX;
volatile int32_t t9 = -5338;
int16_t x90 = INT16_MIN;
uint64_t x96 = 1097982646918981347LLU;
volatile int32_t t11 = 729;
uint32_t x103 = 799138945U;
uint64_t x127 = 107801LLU;
uint32_t x130 = 37U;
static int8_t x149 = -1;
volatile int64_t x152 = 5766855883LL;
int64_t x154 = INT64_MAX;
int32_t t21 = 689485893;
int64_t x161 = -16880582686LL;
int8_t x162 = -1;
uint8_t x163 = UINT8_MAX;
uint64_t x165 = 999LLU;
int16_t x179 = INT16_MIN;
uint32_t x180 = 29U;
int32_t t26 = -209;
int32_t x183 = 29;
volatile int8_t x184 = 18;
volatile int32_t t27 = 50;
uint32_t x185 = 17113U;
static int32_t t29 = 3650;
int8_t x203 = INT8_MAX;
int16_t x204 = 2209;
volatile int32_t t31 = -11487832;
volatile uint8_t x205 = UINT8_MAX;
volatile int32_t t33 = -687394;
int8_t x234 = INT8_MAX;
int32_t t39 = -305;
uint64_t x245 = 295672406LLU;
volatile int16_t x254 = -1;
int32_t x275 = INT32_MIN;
uint16_t x290 = 225U;
volatile int32_t t48 = -170;
int16_t x294 = INT16_MIN;
volatile uint32_t x302 = 28801U;
int32_t t51 = -897799125;
static uint64_t x314 = 56274LLU;
int16_t x321 = INT16_MIN;
static int64_t x324 = INT64_MAX;
int8_t x328 = -1;
static uint32_t x333 = UINT32_MAX;
int32_t t59 = 215616;
volatile uint32_t x347 = 48724964U;
int32_t t60 = -12041675;
int16_t x365 = INT16_MIN;
static int32_t t64 = 1147551;
uint16_t x377 = 36U;
int64_t x379 = 156LL;
volatile int32_t t70 = 11064;
uint32_t x417 = UINT32_MAX;
volatile uint32_t x421 = 32752497U;
static volatile int32_t t72 = 0;
int16_t x425 = INT16_MIN;
uint64_t x427 = 182788606139LLU;
static int32_t t73 = 213917;
static int8_t x443 = INT8_MIN;
int32_t t75 = 0;
volatile int16_t x454 = INT16_MIN;
volatile int32_t t76 = 327;
volatile int32_t x460 = INT32_MAX;
volatile uint16_t x474 = 1U;
static uint16_t x484 = 4798U;
static int64_t x486 = -120LL;
int32_t t81 = 25;
uint16_t x493 = 1974U;
static volatile uint32_t x496 = 262272908U;
static int8_t x499 = -1;
int64_t x508 = INT64_MAX;
static int32_t t85 = 3548;
uint32_t x510 = 1648833U;
int8_t x523 = 1;
int16_t x528 = INT16_MAX;
uint64_t x536 = 2006843701305904LLU;
static uint32_t x538 = 5911514U;
volatile uint8_t x549 = UINT8_MAX;
uint32_t x550 = 1676069U;
int16_t x553 = 1;
static uint8_t x556 = 2U;
int16_t x560 = INT16_MIN;
static uint16_t x570 = 5U;
uint32_t x572 = 38292692U;
uint64_t x574 = 115149589098680LLU;
uint64_t x578 = 4093256LLU;


void f0(void) {
	int32_t x9 = INT32_MIN;
	volatile uint64_t x10 = 23699154LLU;
	int16_t x11 = INT16_MIN;
	uint8_t x12 = 1U;
	volatile int32_t t0 = 7431;

	t0 = ((x9&(x10*x11))==x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = 744U;
	static uint32_t x14 = UINT32_MAX;
	int32_t x15 = -106;
	static int64_t x16 = -1LL;
	static int32_t t1 = 1664;

	t1 = ((x13&(x14*x15))==x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x37 = INT64_MAX;
	uint16_t x38 = UINT16_MAX;
	int64_t x39 = -1LL;
	int32_t x40 = INT32_MAX;
	int32_t t2 = -5909072;

	t2 = ((x37&(x38*x39))==x40);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x42 = 21LLU;
	uint32_t x43 = UINT32_MAX;
	volatile uint8_t x44 = UINT8_MAX;
	static volatile int32_t t3 = 56;

	t3 = ((x41&(x42*x43))==x44);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x45 = -1;
	static int16_t x46 = -1;
	static uint8_t x47 = 0U;
	int16_t x48 = INT16_MAX;
	int32_t t4 = 2637;

	t4 = ((x45&(x46*x47))==x48);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = INT64_MIN;
	uint64_t x51 = 0LLU;
	int32_t t5 = 55225;

	t5 = ((x49&(x50*x51))==x52);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x53 = INT16_MAX;
	static int64_t x54 = -4402085692263612266LL;
	static int8_t x55 = -1;
	int32_t x56 = INT32_MIN;
	static int32_t t6 = -169457876;

	t6 = ((x53&(x54*x55))==x56);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x69 = 184;
	uint16_t x70 = 654U;
	int16_t x71 = -188;
	uint8_t x72 = 0U;
	int32_t t7 = 1524190;

	t7 = ((x69&(x70*x71))==x72);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x73 = 3304;
	static uint32_t x74 = UINT32_MAX;
	int32_t x75 = -14;
	int32_t x76 = 15725902;

	t8 = ((x73&(x74*x75))==x76);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x86 = INT8_MIN;
	static int8_t x87 = INT8_MIN;
	int32_t x88 = -1;

	t9 = ((x85&(x86*x87))==x88);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x89 = UINT16_MAX;
	int64_t x91 = 29LL;
	uint8_t x92 = 1U;
	static int32_t t10 = -21928512;

	t10 = ((x89&(x90*x91))==x92);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x93 = INT32_MIN;
	uint32_t x94 = UINT32_MAX;
	static int8_t x95 = -1;

	t11 = ((x93&(x94*x95))==x96);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x101 = 244U;
	int32_t x102 = INT32_MAX;
	int32_t x104 = INT32_MIN;
	int32_t t12 = 1;

	t12 = ((x101&(x102*x103))==x104);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x105 = -1;
	volatile uint8_t x106 = 107U;
	int64_t x107 = -1LL;
	volatile int64_t x108 = INT64_MIN;
	int32_t t13 = -1;

	t13 = ((x105&(x106*x107))==x108);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x113 = INT64_MIN;
	int16_t x114 = INT16_MIN;
	static int64_t x115 = -14823234558LL;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t14 = -538856456;

	t14 = ((x113&(x114*x115))==x116);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x121 = 724349U;
	int8_t x122 = INT8_MIN;
	int8_t x123 = -1;
	uint32_t x124 = 38534U;
	int32_t t15 = 2058;

	t15 = ((x121&(x122*x123))==x124);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x125 = INT32_MIN;
	int16_t x126 = INT16_MIN;
	int64_t x128 = INT64_MAX;
	static int32_t t16 = 232257134;

	t16 = ((x125&(x126*x127))==x128);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x129 = INT32_MAX;
	uint16_t x131 = 680U;
	int32_t x132 = INT32_MAX;
	int32_t t17 = -216;

	t17 = ((x129&(x130*x131))==x132);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x133 = -1;
	int32_t x134 = 896556;
	static uint8_t x135 = 56U;
	volatile uint64_t x136 = UINT64_MAX;
	int32_t t18 = -21041;

	t18 = ((x133&(x134*x135))==x136);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x137 = INT8_MIN;
	int16_t x138 = -1;
	static uint16_t x139 = 15360U;
	int8_t x140 = -1;
	volatile int32_t t19 = -89;

	t19 = ((x137&(x138*x139))==x140);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x150 = -1;
	uint32_t x151 = 8818U;
	int32_t t20 = 6391267;

	t20 = ((x149&(x150*x151))==x152);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x153 = 1824;
	static uint8_t x155 = 1U;
	int8_t x156 = 22;

	t21 = ((x153&(x154*x155))==x156);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x164 = INT8_MIN;
	int32_t t22 = -190533655;

	t22 = ((x161&(x162*x163))==x164);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x166 = INT16_MIN;
	volatile int32_t x167 = -1;
	volatile int8_t x168 = INT8_MIN;
	volatile int32_t t23 = 1;

	t23 = ((x165&(x166*x167))==x168);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x169 = INT64_MAX;
	volatile int8_t x170 = 28;
	int16_t x171 = -241;
	int8_t x172 = INT8_MAX;
	int32_t t24 = 367;

	t24 = ((x169&(x170*x171))==x172);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x173 = 1010450340567927170LLU;
	uint64_t x174 = 499295LLU;
	int64_t x175 = INT64_MIN;
	static int32_t x176 = INT32_MIN;
	volatile int32_t t25 = 36078646;

	t25 = ((x173&(x174*x175))==x176);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x177 = UINT8_MAX;
	uint32_t x178 = UINT32_MAX;

	t26 = ((x177&(x178*x179))==x180);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x181 = -1;
	uint8_t x182 = UINT8_MAX;

	t27 = ((x181&(x182*x183))==x184);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x186 = INT16_MIN;
	uint32_t x187 = 116463U;
	volatile uint16_t x188 = UINT16_MAX;
	volatile int32_t t28 = -14716;

	t28 = ((x185&(x186*x187))==x188);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x189 = -120583LL;
	int64_t x190 = 59LL;
	int8_t x191 = -1;
	uint64_t x192 = 3974LLU;

	t29 = ((x189&(x190*x191))==x192);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x197 = -1;
	uint64_t x198 = 2034018920855640LLU;
	int16_t x199 = 1795;
	uint8_t x200 = 12U;
	int32_t t30 = 8930;

	t30 = ((x197&(x198*x199))==x200);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x201 = UINT32_MAX;
	uint32_t x202 = UINT32_MAX;

	t31 = ((x201&(x202*x203))==x204);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x206 = UINT16_MAX;
	int16_t x207 = INT16_MAX;
	int64_t x208 = INT64_MIN;
	int32_t t32 = 7;

	t32 = ((x205&(x206*x207))==x208);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x213 = -1;
	uint16_t x214 = UINT16_MAX;
	uint32_t x215 = 11410782U;
	int16_t x216 = INT16_MAX;

	t33 = ((x213&(x214*x215))==x216);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x217 = -93769617030586585LL;
	uint64_t x218 = 39841686371LLU;
	static int64_t x219 = INT64_MAX;
	int16_t x220 = INT16_MIN;
	int32_t t34 = 6857653;

	t34 = ((x217&(x218*x219))==x220);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x221 = INT16_MIN;
	static uint8_t x222 = 41U;
	int32_t x223 = -52;
	int16_t x224 = INT16_MIN;
	int32_t t35 = 553130231;

	t35 = ((x221&(x222*x223))==x224);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x229 = INT32_MAX;
	int8_t x230 = 0;
	int8_t x231 = INT8_MIN;
	int32_t x232 = INT32_MIN;
	int32_t t36 = -7;

	t36 = ((x229&(x230*x231))==x232);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x233 = INT16_MAX;
	volatile uint32_t x235 = 5U;
	volatile uint64_t x236 = 28724582063516LLU;
	int32_t t37 = 202;

	t37 = ((x233&(x234*x235))==x236);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x237 = INT16_MAX;
	uint8_t x238 = 3U;
	uint16_t x239 = UINT16_MAX;
	int32_t x240 = INT32_MIN;
	int32_t t38 = 211;

	t38 = ((x237&(x238*x239))==x240);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x241 = INT32_MIN;
	int32_t x242 = 7748;
	int64_t x243 = -1LL;
	static int64_t x244 = INT64_MIN;

	t39 = ((x241&(x242*x243))==x244);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x246 = -55638299;
	uint64_t x247 = 23504668726805LLU;
	static int32_t x248 = INT32_MIN;
	static int32_t t40 = 30799;

	t40 = ((x245&(x246*x247))==x248);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x249 = INT64_MAX;
	uint32_t x250 = 21254U;
	uint64_t x251 = 485015543428079LLU;
	int32_t x252 = INT32_MIN;
	int32_t t41 = 1;

	t41 = ((x249&(x250*x251))==x252);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x253 = INT8_MAX;
	static uint64_t x255 = 1500074259193945004LLU;
	int64_t x256 = INT64_MIN;
	int32_t t42 = -194275415;

	t42 = ((x253&(x254*x255))==x256);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x257 = 1756807U;
	int64_t x258 = -613277777LL;
	int64_t x259 = -1LL;
	int16_t x260 = -1899;
	int32_t t43 = -13;

	t43 = ((x257&(x258*x259))==x260);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x269 = UINT8_MAX;
	int32_t x270 = -770833254;
	uint32_t x271 = 0U;
	uint64_t x272 = 16160275409580LLU;
	volatile int32_t t44 = 1;

	t44 = ((x269&(x270*x271))==x272);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x273 = UINT8_MAX;
	uint32_t x274 = 657U;
	uint8_t x276 = UINT8_MAX;
	int32_t t45 = 2271499;

	t45 = ((x273&(x274*x275))==x276);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = -1;
	int16_t x279 = INT16_MAX;
	static volatile uint32_t x280 = 3289U;
	static int32_t t46 = 207358;

	t46 = ((x277&(x278*x279))==x280);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x281 = -1472394486LL;
	static volatile int16_t x282 = 94;
	uint16_t x283 = 551U;
	volatile int16_t x284 = INT16_MIN;
	static int32_t t47 = -745484;

	t47 = ((x281&(x282*x283))==x284);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x289 = 412265513262059LL;
	uint32_t x291 = 975300331U;
	int64_t x292 = INT64_MAX;

	t48 = ((x289&(x290*x291))==x292);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x293 = 10;
	uint32_t x295 = 263843U;
	int8_t x296 = INT8_MAX;
	int32_t t49 = 1;

	t49 = ((x293&(x294*x295))==x296);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x297 = 10LLU;
	int16_t x298 = 1044;
	volatile uint64_t x299 = 39509039LLU;
	static uint16_t x300 = 7844U;
	int32_t t50 = 192349776;

	t50 = ((x297&(x298*x299))==x300);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x301 = 1;
	uint64_t x303 = 1447530508565LLU;
	int8_t x304 = INT8_MIN;

	t51 = ((x301&(x302*x303))==x304);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x305 = INT64_MIN;
	volatile int8_t x306 = INT8_MIN;
	static uint16_t x307 = 1U;
	static int64_t x308 = INT64_MIN;
	int32_t t52 = 517;

	t52 = ((x305&(x306*x307))==x308);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x309 = 14U;
	volatile int32_t x310 = -1;
	int16_t x311 = INT16_MAX;
	int64_t x312 = 4508030597854485811LL;
	volatile int32_t t53 = 227003749;

	t53 = ((x309&(x310*x311))==x312);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x313 = INT64_MIN;
	volatile int64_t x315 = INT64_MIN;
	int32_t x316 = 3711;
	static int32_t t54 = 1;

	t54 = ((x313&(x314*x315))==x316);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x322 = -1;
	int8_t x323 = -1;
	volatile int32_t t55 = 65138263;

	t55 = ((x321&(x322*x323))==x324);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x325 = 1;
	static volatile uint32_t x326 = UINT32_MAX;
	uint16_t x327 = UINT16_MAX;
	volatile int32_t t56 = 11346;

	t56 = ((x325&(x326*x327))==x328);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x334 = INT8_MAX;
	volatile uint32_t x335 = UINT32_MAX;
	int8_t x336 = -1;
	volatile int32_t t57 = 260126;

	t57 = ((x333&(x334*x335))==x336);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x337 = UINT8_MAX;
	int16_t x338 = INT16_MAX;
	uint8_t x339 = 7U;
	int32_t x340 = 8736167;
	volatile int32_t t58 = 779;

	t58 = ((x337&(x338*x339))==x340);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x341 = UINT64_MAX;
	static uint32_t x342 = 183U;
	int8_t x343 = 1;
	uint16_t x344 = 26U;

	t59 = ((x341&(x342*x343))==x344);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x345 = 512886399U;
	int8_t x346 = INT8_MIN;
	int16_t x348 = INT16_MIN;

	t60 = ((x345&(x346*x347))==x348);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x349 = INT16_MIN;
	int64_t x350 = -1040447349241LL;
	int64_t x351 = -1LL;
	int16_t x352 = -1;
	int32_t t61 = -36080;

	t61 = ((x349&(x350*x351))==x352);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x361 = 24352U;
	static int8_t x362 = INT8_MIN;
	int16_t x363 = 0;
	static int64_t x364 = -116565234LL;
	static int32_t t62 = 3;

	t62 = ((x361&(x362*x363))==x364);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x366 = -1;
	static int8_t x367 = INT8_MIN;
	uint64_t x368 = UINT64_MAX;
	static volatile int32_t t63 = 68666792;

	t63 = ((x365&(x366*x367))==x368);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x369 = -970;
	volatile int32_t x370 = -1;
	volatile int64_t x371 = INT64_MAX;
	static int64_t x372 = INT64_MAX;

	t64 = ((x369&(x370*x371))==x372);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x378 = 493;
	int8_t x380 = -1;
	volatile int32_t t65 = -248;

	t65 = ((x377&(x378*x379))==x380);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x381 = INT8_MAX;
	int16_t x382 = -1;
	static volatile int32_t x383 = 95;
	static int8_t x384 = -5;
	int32_t t66 = 391;

	t66 = ((x381&(x382*x383))==x384);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x385 = UINT16_MAX;
	int64_t x386 = -1LL;
	volatile uint16_t x387 = 1899U;
	int16_t x388 = INT16_MIN;
	int32_t t67 = -1112;

	t67 = ((x385&(x386*x387))==x388);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x397 = INT16_MIN;
	int32_t x398 = -1;
	uint32_t x399 = UINT32_MAX;
	volatile int8_t x400 = -24;
	int32_t t68 = -17930;

	t68 = ((x397&(x398*x399))==x400);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x405 = 20254260985044LLU;
	uint32_t x406 = UINT32_MAX;
	uint32_t x407 = 29U;
	uint16_t x408 = 6218U;
	volatile int32_t t69 = 440796598;

	t69 = ((x405&(x406*x407))==x408);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x409 = -1;
	static int16_t x410 = INT16_MAX;
	int64_t x411 = 159LL;
	int32_t x412 = INT32_MIN;

	t70 = ((x409&(x410*x411))==x412);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x418 = UINT64_MAX;
	volatile uint8_t x419 = 3U;
	int64_t x420 = INT64_MAX;
	int32_t t71 = 926;

	t71 = ((x417&(x418*x419))==x420);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x422 = 7;
	uint32_t x423 = 22508058U;
	uint32_t x424 = 0U;

	t72 = ((x421&(x422*x423))==x424);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x426 = INT64_MIN;
	static uint8_t x428 = UINT8_MAX;

	t73 = ((x425&(x426*x427))==x428);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x433 = 6813LLU;
	int32_t x434 = 335486;
	int8_t x435 = -1;
	int16_t x436 = INT16_MAX;
	static int32_t t74 = -1;

	t74 = ((x433&(x434*x435))==x436);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x441 = -1;
	uint8_t x442 = 7U;
	volatile int64_t x444 = INT64_MIN;

	t75 = ((x441&(x442*x443))==x444);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x453 = INT64_MIN;
	int8_t x455 = INT8_MIN;
	int32_t x456 = -20890;

	t76 = ((x453&(x454*x455))==x456);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x457 = INT64_MAX;
	volatile uint64_t x458 = UINT64_MAX;
	int8_t x459 = INT8_MIN;
	volatile int32_t t77 = 1;

	t77 = ((x457&(x458*x459))==x460);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x465 = 540315948588031832LL;
	static int8_t x466 = 2;
	static int32_t x467 = 934;
	int32_t x468 = -1;
	static volatile int32_t t78 = -244969594;

	t78 = ((x465&(x466*x467))==x468);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x473 = 1;
	static uint16_t x475 = 141U;
	static int64_t x476 = 2410498LL;
	int32_t t79 = -10766;

	t79 = ((x473&(x474*x475))==x476);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x481 = 8024780LL;
	int8_t x482 = 15;
	int8_t x483 = -3;
	volatile int32_t t80 = -174520;

	t80 = ((x481&(x482*x483))==x484);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x485 = -90LL;
	int32_t x487 = 222711;
	volatile int16_t x488 = INT16_MIN;

	t81 = ((x485&(x486*x487))==x488);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x489 = UINT64_MAX;
	int32_t x490 = -1;
	int8_t x491 = -60;
	int8_t x492 = INT8_MIN;
	volatile int32_t t82 = 131489841;

	t82 = ((x489&(x490*x491))==x492);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x494 = -1LL;
	static volatile int32_t x495 = -18;
	volatile int32_t t83 = 5348;

	t83 = ((x493&(x494*x495))==x496);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x497 = INT32_MIN;
	volatile int8_t x498 = -7;
	uint64_t x500 = 2LLU;
	int32_t t84 = -867069811;

	t84 = ((x497&(x498*x499))==x500);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x505 = 7LLU;
	int8_t x506 = -4;
	volatile int8_t x507 = INT8_MIN;

	t85 = ((x505&(x506*x507))==x508);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x509 = 14284U;
	static uint16_t x511 = UINT16_MAX;
	static int8_t x512 = INT8_MIN;
	int32_t t86 = 109813484;

	t86 = ((x509&(x510*x511))==x512);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x513 = -1LL;
	volatile uint32_t x514 = UINT32_MAX;
	volatile int8_t x515 = 0;
	static volatile uint16_t x516 = 23U;
	volatile int32_t t87 = -291240;

	t87 = ((x513&(x514*x515))==x516);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x517 = 316U;
	uint32_t x518 = 30240U;
	int8_t x519 = INT8_MIN;
	int8_t x520 = 1;
	volatile int32_t t88 = 444;

	t88 = ((x517&(x518*x519))==x520);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x521 = UINT8_MAX;
	volatile int32_t x522 = -1;
	static int16_t x524 = -9;
	int32_t t89 = 240;

	t89 = ((x521&(x522*x523))==x524);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x525 = INT64_MIN;
	static uint32_t x526 = 32474579U;
	volatile int16_t x527 = 4;
	static int32_t t90 = -17128686;

	t90 = ((x525&(x526*x527))==x528);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x533 = 12LLU;
	uint64_t x534 = UINT64_MAX;
	int8_t x535 = 1;
	volatile int32_t t91 = -28;

	t91 = ((x533&(x534*x535))==x536);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x537 = INT8_MIN;
	volatile uint16_t x539 = 548U;
	int8_t x540 = -1;
	int32_t t92 = 202101;

	t92 = ((x537&(x538*x539))==x540);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x551 = INT32_MIN;
	static int64_t x552 = -1LL;
	int32_t t93 = -1;

	t93 = ((x549&(x550*x551))==x552);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x554 = 0;
	int16_t x555 = INT16_MIN;
	static int32_t t94 = 738;

	t94 = ((x553&(x554*x555))==x556);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x557 = 23065875136LL;
	static int8_t x558 = INT8_MIN;
	int32_t x559 = 5;
	int32_t t95 = 138;

	t95 = ((x557&(x558*x559))==x560);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x561 = -99401LL;
	static uint16_t x562 = 2093U;
	static uint32_t x563 = UINT32_MAX;
	int64_t x564 = INT64_MAX;
	static int32_t t96 = -12;

	t96 = ((x561&(x562*x563))==x564);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x569 = 1U;
	int16_t x571 = 3;
	static volatile int32_t t97 = 379;

	t97 = ((x569&(x570*x571))==x572);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x573 = INT16_MAX;
	int8_t x575 = INT8_MIN;
	volatile uint64_t x576 = UINT64_MAX;
	int32_t t98 = 3348797;

	t98 = ((x573&(x574*x575))==x576);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x577 = INT8_MAX;
	int32_t x579 = INT32_MAX;
	volatile uint8_t x580 = 1U;
	int32_t t99 = -123282;

	t99 = ((x577&(x578*x579))==x580);

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

