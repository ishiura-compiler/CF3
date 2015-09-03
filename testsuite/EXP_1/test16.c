#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x11 = -1;
int8_t x12 = 6;
uint64_t x13 = UINT64_MAX;
int16_t x18 = INT16_MIN;
int8_t x20 = 1;
volatile uint64_t t4 = 119675094739640632LLU;
volatile int16_t x31 = -11;
uint8_t x32 = UINT8_MAX;
uint64_t x33 = UINT64_MAX;
volatile uint8_t x34 = 1U;
uint8_t x38 = UINT8_MAX;
int32_t x44 = INT32_MIN;
volatile uint64_t x49 = 97868218960060LLU;
static uint64_t x51 = UINT64_MAX;
int8_t x53 = INT8_MIN;
static uint64_t x55 = UINT64_MAX;
int8_t x56 = 4;
static volatile uint32_t t13 = 130661335U;
int16_t x73 = INT16_MIN;
uint16_t x86 = 219U;
uint16_t x87 = 377U;
uint8_t x90 = 1U;
uint64_t x93 = UINT64_MAX;
int8_t x95 = INT8_MIN;
uint32_t x113 = 2U;
int64_t t22 = 1419286432105146LL;
uint64_t x119 = 31LLU;
int64_t x131 = -1LL;
uint64_t x134 = 20LLU;
static int32_t x135 = -9;
static int8_t x136 = 2;
static uint16_t x137 = 1U;
uint16_t x138 = UINT16_MAX;
volatile uint32_t x148 = UINT32_MAX;
uint32_t x153 = 781U;
volatile uint32_t t30 = 1111681279U;
int32_t x158 = 360797;
int64_t x159 = -1LL;
int8_t x167 = INT8_MIN;
static volatile uint64_t x176 = UINT64_MAX;
int32_t x182 = 15;
int16_t x184 = INT16_MAX;
int16_t x185 = 0;
int8_t x186 = INT8_MAX;
int64_t x199 = -1763865622LL;
uint16_t x220 = 1304U;
static uint32_t t39 = 94U;
uint64_t x242 = 0LLU;
volatile uint64_t t44 = 166890887LLU;
uint16_t x245 = 4778U;
uint8_t x246 = UINT8_MAX;
int8_t x256 = INT8_MIN;
int16_t x259 = INT16_MIN;
int32_t x260 = INT32_MIN;
uint32_t x261 = 93024235U;
static int64_t x263 = INT64_MAX;
int32_t x274 = INT32_MAX;
uint8_t x281 = UINT8_MAX;
volatile uint16_t x282 = 7U;
int16_t x284 = 2;
static int32_t t52 = -1;
int8_t x299 = -1;
int8_t x310 = INT8_MAX;
volatile int8_t x315 = INT8_MAX;
uint32_t x316 = UINT32_MAX;
int8_t x327 = -46;
static int16_t x337 = INT16_MIN;
uint64_t t61 = 3683382223314649LLU;
int64_t x363 = INT64_MIN;
uint16_t x366 = 80U;
int16_t x368 = 960;
static int32_t t64 = 0;
volatile int64_t t66 = 101984588119233593LL;
int8_t x385 = 0;
int64_t x386 = 1132LL;
int8_t x400 = -1;
uint8_t x411 = 102U;
uint32_t t72 = 76656697U;
uint8_t x433 = 4U;
uint32_t t74 = 175944U;
uint8_t x445 = 63U;
int8_t x447 = INT8_MAX;
uint32_t t77 = 73U;
int64_t x454 = 8641936580967LL;
int32_t x460 = -1;
static int8_t x467 = INT8_MIN;
volatile int16_t x472 = INT16_MIN;
uint16_t x475 = 0U;
int16_t x493 = 4606;
static volatile int32_t x498 = INT32_MAX;
int8_t x501 = -1;
volatile int32_t t87 = 16038849;
static volatile uint32_t t88 = 12631640U;
int16_t x509 = INT16_MIN;
static uint16_t x512 = UINT16_MAX;
static volatile int8_t x515 = INT8_MIN;
int8_t x518 = INT8_MIN;
volatile int64_t x521 = -1LL;
static int64_t t92 = 201035LL;
uint8_t x525 = 68U;
static int8_t x526 = INT8_MIN;
static volatile uint64_t t98 = 484951LLU;
int32_t x565 = 3990222;


void f0(void) {
	uint16_t x5 = 107U;
	uint64_t x6 = 280LLU;
	static uint16_t x7 = UINT16_MAX;
	volatile uint16_t x8 = UINT16_MAX;
	volatile uint64_t t0 = 30505976LLU;

	t0 = (((x5+x6)-x7)*x8);

	if (t0 != 18446744069440077436LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = UINT8_MAX;
	static int8_t x10 = -1;
	static volatile int32_t t1 = -149252;

	t1 = (((x9+x10)-x11)*x12);

	if (t1 != 1530) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = 5;
	volatile int64_t x15 = -1LL;
	uint64_t x16 = 7869503318808461LLU;
	static volatile uint64_t t2 = 46707LLU;

	t2 = (((x13+x14)-x15)*x16);

	if (t2 != 39347516594042305LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 27U;
	uint32_t x19 = 13U;
	static uint32_t t3 = 363U;

	t3 = (((x17+x18)-x19)*x20);

	if (t3 != 4294934542U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 124U;
	static volatile uint32_t x22 = 19U;
	int8_t x23 = 30;
	uint64_t x24 = UINT64_MAX;

	t4 = (((x21+x22)-x23)*x24);

	if (t4 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = -4085;
	uint64_t x26 = 40663LLU;
	int32_t x27 = 15;
	static int16_t x28 = -504;
	uint64_t t5 = 332083093926558LLU;

	t5 = (((x25+x26)-x27)*x28);

	if (t5 != 18446744073691123864LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 7;
	uint16_t x30 = 101U;
	static int32_t t6 = -1051167;

	t6 = (((x29+x30)-x31)*x32);

	if (t6 != 30345) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x35 = 214196LLU;
	static int32_t x36 = INT32_MAX;
	volatile uint64_t t7 = 1347562372755848LLU;

	t7 = (((x33+x34)-x35)*x36);

	if (t7 != 18446284091302298804LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	int64_t x39 = INT64_MIN;
	uint32_t x40 = UINT32_MAX;
	int64_t t8 = -657660LL;

	t8 = (((x37+x38)-x39)*x40);

	if (t8 != 1095216660225LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x41 = -7;
	uint64_t x42 = UINT64_MAX;
	uint32_t x43 = UINT32_MAX;
	uint64_t t9 = 13LLU;

	t9 = (((x41+x42)-x43)*x44);

	if (t9 != 9223372051887161344LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x45 = 223U;
	int16_t x46 = INT16_MIN;
	volatile uint8_t x47 = 0U;
	uint32_t x48 = 2437214U;
	static uint32_t t10 = 584U;

	t10 = (((x45+x46)-x47)*x48);

	if (t10 != 2285248994U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = 129902524;
	static int32_t x52 = -1;
	static volatile uint64_t t11 = 15040535376LLU;

	t11 = (((x49+x50)-x51)*x52);

	if (t11 != 18446646205360689031LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = 48355515;
	uint64_t t12 = 91LLU;

	t12 = (((x53+x54)-x55)*x56);

	if (t12 != 193421552LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 115U;
	static int16_t x58 = -1;
	uint32_t x59 = 855U;
	volatile uint16_t x60 = 1U;

	t13 = (((x57+x58)-x59)*x60);

	if (t13 != 4294966555U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = UINT64_MAX;
	uint16_t x62 = 58U;
	int16_t x63 = 13;
	int64_t x64 = -1LL;
	volatile uint64_t t14 = 29LLU;

	t14 = (((x61+x62)-x63)*x64);

	if (t14 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x65 = 27130U;
	static volatile uint8_t x66 = 4U;
	int16_t x67 = INT16_MIN;
	uint64_t x68 = 85990LLU;
	uint64_t t15 = 8425363662LLU;

	t15 = (((x65+x66)-x67)*x68);

	if (t15 != 5150972980LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x74 = UINT16_MAX;
	static int8_t x75 = INT8_MIN;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t16 = 1283665839LLU;

	t16 = (((x73+x74)-x75)*x76);

	if (t16 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	volatile int32_t x78 = -1;
	static uint16_t x79 = UINT16_MAX;
	static int64_t x80 = 7904319LL;
	int64_t t17 = -458400347728926690LL;

	t17 = (((x77+x78)-x79)*x80);

	if (t17 != -777026174976LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = -51;
	uint32_t x88 = 1618075U;
	uint32_t t18 = 47506U;

	t18 = (((x85+x86)-x87)*x88);

	if (t18 != 3956789621U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x89 = 1049244901775433381LLU;
	static int32_t x91 = INT32_MAX;
	int64_t x92 = -12190LL;
	volatile uint64_t t19 = 18651LLU;

	t19 = (((x89+x90)-x91)*x92);

	if (t19 != 11745060689721551854LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x94 = INT64_MAX;
	static int16_t x96 = INT16_MIN;
	uint64_t t20 = 6512593545527LLU;

	t20 = (((x93+x94)-x95)*x96);

	if (t20 != 18446744073705422848LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = INT8_MIN;
	uint32_t x106 = 227U;
	uint32_t x107 = UINT32_MAX;
	int16_t x108 = -1;
	volatile uint32_t t21 = 111068987U;

	t21 = (((x105+x106)-x107)*x108);

	if (t21 != 4294967196U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x114 = -1;
	volatile int64_t x115 = 0LL;
	int8_t x116 = INT8_MAX;

	t22 = (((x113+x114)-x115)*x116);

	if (t22 != 127LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x117 = 82802;
	int64_t x118 = -1LL;
	static uint32_t x120 = 32493U;
	uint64_t t23 = 159LLU;

	t23 = (((x117+x118)-x119)*x120);

	if (t23 != 2689445610LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x121 = UINT32_MAX;
	volatile int32_t x122 = 27007259;
	int32_t x123 = INT32_MIN;
	int8_t x124 = INT8_MIN;
	volatile uint32_t t24 = 886681809U;

	t24 = (((x121+x122)-x123)*x124);

	if (t24 != 838038272U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x125 = INT64_MIN;
	uint8_t x126 = 114U;
	int16_t x127 = INT16_MIN;
	volatile uint64_t x128 = 35164068111LLU;
	volatile uint64_t t25 = 4238471548501334722LLU;

	t25 = (((x125+x126)-x127)*x128);

	if (t25 != 9224528301742401710LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = -1;
	uint64_t x130 = 7309931LLU;
	static int8_t x132 = -1;
	volatile uint64_t t26 = 550370060001643LLU;

	t26 = (((x129+x130)-x131)*x132);

	if (t26 != 18446744073702241685LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MIN;
	volatile uint64_t t27 = 9121LLU;

	t27 = (((x133+x134)-x135)*x136);

	if (t27 != 18446744069414584378LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x139 = 217U;
	int16_t x140 = -1;
	volatile int32_t t28 = 6;

	t28 = (((x137+x138)-x139)*x140);

	if (t28 != -65319) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = -34;
	int8_t x146 = -1;
	int8_t x147 = -1;
	static uint32_t t29 = 149U;

	t29 = (((x145+x146)-x147)*x148);

	if (t29 != 34U) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x154 = -1;
	int8_t x155 = 30;
	static int16_t x156 = INT16_MIN;

	t30 = (((x153+x154)-x155)*x156);

	if (t30 != 4270391296U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x157 = INT8_MIN;
	int32_t x160 = 4152;
	volatile int64_t t31 = 12LL;

	t31 = (((x157+x158)-x159)*x160);

	if (t31 != 1497501840LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x165 = 64U;
	uint8_t x166 = 1U;
	static uint16_t x168 = 277U;
	static volatile int32_t t32 = -1681234;

	t32 = (((x165+x166)-x167)*x168);

	if (t32 != 53461) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x173 = 54650167183LLU;
	uint16_t x174 = UINT16_MAX;
	volatile uint32_t x175 = UINT32_MAX;
	uint64_t t33 = 6187709107LLU;

	t33 = (((x173+x174)-x175)*x176);

	if (t33 != 18446744023354286193LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x177 = INT8_MAX;
	int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MIN;
	uint8_t x180 = 125U;
	static int32_t t34 = 1;

	t34 = (((x177+x178)-x179)*x180);

	if (t34 != 15875) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x181 = UINT16_MAX;
	static uint32_t x183 = 11U;
	static volatile uint32_t t35 = 368U;

	t35 = (((x181+x182)-x183)*x184);

	if (t35 != 2147516413U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x187 = 15862LLU;
	static int32_t x188 = INT32_MIN;
	static volatile uint64_t t36 = 9191LLU;

	t36 = (((x185+x186)-x187)*x188);

	if (t36 != 33790655201280LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x197 = UINT32_MAX;
	uint64_t x198 = 383365867304586LLU;
	static int8_t x200 = INT8_MIN;
	volatile uint64_t t37 = 40573993LLU;

	t37 = (((x197+x198)-x199)*x200);

	if (t37 != 18397672467163951232LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x205 = UINT8_MAX;
	volatile int8_t x206 = -1;
	uint32_t x207 = 116580U;
	uint32_t x208 = 844311U;
	volatile uint32_t t38 = 22899906U;

	t38 = (((x205+x206)-x207)*x208);

	if (t38 != 568926422U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x217 = -1;
	uint32_t x218 = 822649203U;
	static volatile uint8_t x219 = 1U;

	t39 = (((x217+x218)-x219)*x220);

	if (t39 != 3287701400U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x225 = 36U;
	static volatile int8_t x226 = -3;
	uint16_t x227 = 8806U;
	int16_t x228 = INT16_MAX;
	int32_t t40 = -16579;

	t40 = (((x225+x226)-x227)*x228);

	if (t40 != -287464891) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x229 = INT16_MAX;
	int8_t x230 = -1;
	static uint32_t x231 = 5395362U;
	int16_t x232 = 44;
	volatile uint32_t t41 = 11476U;

	t41 = (((x229+x230)-x231)*x232);

	if (t41 != 4059013072U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x233 = INT8_MIN;
	static uint32_t x234 = UINT32_MAX;
	int64_t x235 = -14646LL;
	int16_t x236 = 169;
	volatile int64_t t42 = -3116342080LL;

	t42 = (((x233+x234)-x235)*x236);

	if (t42 != 725851926397LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = 13034670947263098LL;
	uint32_t x239 = 154067U;
	int32_t x240 = -1;
	int64_t t43 = 59275266319549LL;

	t43 = (((x237+x238)-x239)*x240);

	if (t43 != -13034668799625383LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x241 = -1;
	int32_t x243 = INT32_MIN;
	volatile int16_t x244 = INT16_MIN;

	t44 = (((x241+x242)-x243)*x244);

	if (t44 != 18446673704965406720LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x247 = -1;
	uint32_t x248 = 1376205U;
	uint32_t t45 = 41176774U;

	t45 = (((x245+x246)-x247)*x248);

	if (t45 != 2632848674U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x253 = 586;
	int16_t x254 = INT16_MAX;
	uint16_t x255 = UINT16_MAX;
	int32_t t46 = 239334668;

	t46 = (((x253+x254)-x255)*x256);

	if (t46 != 4119296) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x257 = -1LL;
	static uint8_t x258 = 8U;
	int64_t t47 = 3LL;

	t47 = (((x257+x258)-x259)*x260);

	if (t47 != -70383776563200LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x262 = INT32_MIN;
	static uint16_t x264 = 1U;
	static int64_t t48 = -268215758LL;

	t48 = (((x261+x262)-x263)*x264);

	if (t48 != -9223372034614267924LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x273 = 11302LLU;
	int16_t x275 = INT16_MIN;
	static int64_t x276 = INT64_MIN;
	uint64_t t49 = 202081702597125359LLU;

	t49 = (((x273+x274)-x275)*x276);

	if (t49 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x277 = INT16_MIN;
	volatile int16_t x278 = -1;
	volatile int16_t x279 = INT16_MIN;
	int16_t x280 = INT16_MIN;
	volatile int32_t t50 = 4467;

	t50 = (((x277+x278)-x279)*x280);

	if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x283 = 2U;
	int32_t t51 = 10790;

	t51 = (((x281+x282)-x283)*x284);

	if (t51 != 520) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x285 = -4;
	int32_t x286 = INT32_MAX;
	uint8_t x287 = UINT8_MAX;
	int8_t x288 = -1;

	t52 = (((x285+x286)-x287)*x288);

	if (t52 != -2147483388) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x293 = -95251;
	int8_t x294 = -48;
	uint64_t x295 = 402569361733461451LLU;
	uint8_t x296 = 1U;
	uint64_t t53 = 1487003LLU;

	t53 = (((x293+x294)-x295)*x296);

	if (t53 != 18044174711975994866LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x297 = -1LL;
	int32_t x298 = INT32_MIN;
	int32_t x300 = INT32_MIN;
	int64_t t54 = -125598712501418LL;

	t54 = (((x297+x298)-x299)*x300);

	if (t54 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x301 = UINT64_MAX;
	volatile int64_t x302 = -76521LL;
	int32_t x303 = -730;
	int16_t x304 = -796;
	uint64_t t55 = 49LLU;

	t55 = (((x301+x302)-x303)*x304);

	if (t55 != 60330432LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x309 = 2856979U;
	int32_t x311 = INT32_MIN;
	int8_t x312 = INT8_MIN;
	volatile uint32_t t56 = 10969U;

	t56 = (((x309+x310)-x311)*x312);

	if (t56 != 3929257728U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x313 = -1;
	volatile uint8_t x314 = 25U;
	static uint32_t t57 = 351265U;

	t57 = (((x313+x314)-x315)*x316);

	if (t57 != 103U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x325 = 32123U;
	static uint64_t x326 = UINT64_MAX;
	volatile int16_t x328 = INT16_MIN;
	volatile uint64_t t58 = 367072091940LLU;

	t58 = (((x325+x326)-x327)*x328);

	if (t58 != 18446744072655470592LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x338 = -1LL;
	volatile uint16_t x339 = UINT16_MAX;
	int32_t x340 = INT32_MAX;
	static volatile int64_t t59 = -83297016366LL;

	t59 = (((x337+x338)-x339)*x340);

	if (t59 != -211106232434688LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x341 = UINT32_MAX;
	int32_t x342 = INT32_MIN;
	volatile int16_t x343 = INT16_MIN;
	int16_t x344 = -1;
	volatile uint32_t t60 = 457U;

	t60 = (((x341+x342)-x343)*x344);

	if (t60 != 2147450881U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x349 = 42091007112954LLU;
	volatile int32_t x350 = 330981;
	static int32_t x351 = INT32_MIN;
	int16_t x352 = -2895;

	t61 = (((x349+x350)-x351)*x352);

	if (t61 != 18324884390194198831LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x361 = -489;
	int32_t x362 = -1;
	int32_t x364 = -1;
	static int64_t t62 = -3LL;

	t62 = (((x361+x362)-x363)*x364);

	if (t62 != -9223372036854775318LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x365 = INT32_MIN;
	int64_t x367 = 1928855671277LL;
	static int64_t t63 = 9491667197589374LL;

	t63 = (((x365+x366)-x367)*x368);

	if (t63 != -1853763028651200LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x369 = -1;
	int8_t x370 = INT8_MIN;
	uint16_t x371 = UINT16_MAX;
	volatile int8_t x372 = 61;

	t64 = (((x369+x370)-x371)*x372);

	if (t64 != -4005504) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x373 = UINT64_MAX;
	volatile uint32_t x374 = UINT32_MAX;
	uint16_t x375 = 116U;
	int8_t x376 = INT8_MIN;
	volatile uint64_t t65 = 7LLU;

	t65 = (((x373+x374)-x375)*x376);

	if (t65 != 18446743523953752832LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x381 = 3U;
	volatile int64_t x382 = -1LL;
	static uint16_t x383 = 24092U;
	int8_t x384 = INT8_MIN;

	t66 = (((x381+x382)-x383)*x384);

	if (t66 != 3083520LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x387 = 193;
	volatile int16_t x388 = -248;
	volatile int64_t t67 = -4535093308LL;

	t67 = (((x385+x386)-x387)*x388);

	if (t67 != -232872LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x393 = UINT32_MAX;
	int8_t x394 = INT8_MAX;
	int16_t x395 = -1;
	volatile int32_t x396 = -759;
	uint32_t t68 = 884253368U;

	t68 = (((x393+x394)-x395)*x396);

	if (t68 != 4294870903U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x397 = 0;
	static int32_t x398 = INT32_MIN;
	static volatile int32_t x399 = INT32_MIN;
	int32_t t69 = 113823;

	t69 = (((x397+x398)-x399)*x400);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x401 = INT16_MIN;
	uint64_t x402 = 197563816810LLU;
	uint64_t x403 = UINT64_MAX;
	uint8_t x404 = UINT8_MAX;
	static uint64_t t70 = 32190761LLU;

	t70 = (((x401+x402)-x403)*x404);

	if (t70 != 50378764930965LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x405 = 87U;
	int32_t x406 = -687097090;
	int64_t x407 = -1LL;
	static int8_t x408 = INT8_MIN;
	int64_t t71 = 670277814656620842LL;

	t71 = (((x405+x406)-x407)*x408);

	if (t71 != 87948416256LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x409 = 2;
	uint32_t x410 = 26U;
	int16_t x412 = INT16_MAX;

	t72 = (((x409+x410)-x411)*x412);

	if (t72 != 4292542538U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x425 = UINT64_MAX;
	uint64_t x426 = UINT64_MAX;
	uint64_t x427 = 7669259542673LLU;
	int64_t x428 = 14175557153064415LL;
	volatile uint64_t t73 = 228590LLU;

	t73 = (((x425+x426)-x427)*x428);

	if (t73 != 15083892642477523187LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x434 = UINT8_MAX;
	volatile int8_t x435 = -3;
	volatile uint32_t x436 = UINT32_MAX;

	t74 = (((x433+x434)-x435)*x436);

	if (t74 != 4294967034U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x441 = UINT64_MAX;
	uint64_t x442 = 22448330292LLU;
	uint16_t x443 = 7272U;
	int8_t x444 = -48;
	uint64_t t75 = 1017562LLU;

	t75 = (((x441+x442)-x443)*x444);

	if (t75 != 18446742996190046704LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x446 = -1;
	int8_t x448 = INT8_MAX;
	volatile int32_t t76 = 2;

	t76 = (((x445+x446)-x447)*x448);

	if (t76 != -8255) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x449 = 11;
	static uint16_t x450 = 407U;
	static volatile uint32_t x451 = 368375686U;
	uint8_t x452 = 17U;

	t77 = (((x449+x450)-x451)*x452);

	if (t77 != 2327555036U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x453 = UINT64_MAX;
	int8_t x455 = INT8_MIN;
	static volatile int16_t x456 = -1;
	uint64_t t78 = 422347LLU;

	t78 = (((x453+x454)-x455)*x456);

	if (t78 != 18446735431772970522LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x457 = -1;
	volatile int16_t x458 = INT16_MIN;
	int8_t x459 = INT8_MAX;
	int32_t t79 = 171318;

	t79 = (((x457+x458)-x459)*x460);

	if (t79 != 32896) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x465 = -1;
	int8_t x466 = INT8_MIN;
	uint8_t x468 = UINT8_MAX;
	static volatile int32_t t80 = 3510178;

	t80 = (((x465+x466)-x467)*x468);

	if (t80 != -255) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x469 = 3LLU;
	int16_t x470 = INT16_MAX;
	uint64_t x471 = 37LLU;
	volatile uint64_t t81 = 3290148096LLU;

	t81 = (((x469+x470)-x471)*x472);

	if (t81 != 18446744072636956672LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x473 = 4LL;
	int8_t x474 = INT8_MIN;
	volatile int64_t x476 = 15LL;
	static volatile int64_t t82 = -13075022774379LL;

	t82 = (((x473+x474)-x475)*x476);

	if (t82 != -1860LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x485 = 2U;
	static uint32_t x486 = 3597U;
	int16_t x487 = -3407;
	uint16_t x488 = 75U;
	volatile uint32_t t83 = 878U;

	t83 = (((x485+x486)-x487)*x488);

	if (t83 != 525450U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x489 = 14;
	uint8_t x490 = 17U;
	int16_t x491 = -360;
	static uint32_t x492 = UINT32_MAX;
	volatile uint32_t t84 = 519688384U;

	t84 = (((x489+x490)-x491)*x492);

	if (t84 != 4294966905U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x494 = 19583290LLU;
	volatile int64_t x495 = -135910378195540LL;
	int16_t x496 = 1106;
	static uint64_t t85 = 7612217LLU;

	t85 = (((x493+x494)-x495)*x496);

	if (t85 != 150316899948480216LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x497 = 2708350LL;
	int8_t x499 = 22;
	uint64_t x500 = UINT64_MAX;
	static volatile uint64_t t86 = 183764730452721708LLU;

	t86 = (((x497+x498)-x499)*x500);

	if (t86 != 18446744071559359641LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x502 = 1U;
	int16_t x503 = 0;
	volatile int16_t x504 = 119;

	t87 = (((x501+x502)-x503)*x504);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x505 = UINT32_MAX;
	uint8_t x506 = UINT8_MAX;
	volatile int16_t x507 = -2736;
	volatile int32_t x508 = INT32_MIN;

	t88 = (((x505+x506)-x507)*x508);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x510 = 555U;
	volatile int64_t x511 = -1LL;
	volatile int64_t t89 = 143703866LL;

	t89 = (((x509+x510)-x511)*x512);

	if (t89 != 281468570729940LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x513 = 86266U;
	uint64_t x514 = UINT64_MAX;
	int16_t x516 = -186;
	static uint64_t t90 = 194579LLU;

	t90 = (((x513+x514)-x515)*x516);

	if (t90 != 18446744073693482518LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x517 = -1;
	uint64_t x519 = UINT64_MAX;
	int8_t x520 = -26;
	volatile uint64_t t91 = 133389165374932918LLU;

	t91 = (((x517+x518)-x519)*x520);

	if (t91 != 3328LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x522 = 268059663U;
	int32_t x523 = -3586723;
	int8_t x524 = -1;

	t92 = (((x521+x522)-x523)*x524);

	if (t92 != -271646385LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x527 = 2;
	uint8_t x528 = 58U;
	int32_t t93 = 220521;

	t93 = (((x525+x526)-x527)*x528);

	if (t93 != -3596) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x537 = 41U;
	volatile int32_t x538 = -10352;
	int8_t x539 = 7;
	static int16_t x540 = INT16_MAX;
	static int32_t t94 = 1;

	t94 = (((x537+x538)-x539)*x540);

	if (t94 != -338089906) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x545 = 6431;
	volatile int16_t x546 = INT16_MIN;
	static int8_t x547 = INT8_MIN;
	static int8_t x548 = INT8_MIN;
	int32_t t95 = -1;

	t95 = (((x545+x546)-x547)*x548);

	if (t95 != 3354752) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x549 = INT16_MIN;
	static int64_t x550 = -428638108769933250LL;
	static uint64_t x551 = 2223077711421LLU;
	int32_t x552 = 10;
	uint64_t t96 = 237599563LLU;

	t96 = (((x549+x550)-x551)*x552);

	if (t96 != 14160340755232777226LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x553 = INT16_MIN;
	int16_t x554 = -11;
	static volatile uint8_t x555 = 44U;
	int8_t x556 = -3;
	volatile int32_t t97 = -4810;

	t97 = (((x553+x554)-x555)*x556);

	if (t97 != 98469) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x557 = 1190171U;
	uint64_t x558 = UINT64_MAX;
	int64_t x559 = INT64_MAX;
	volatile int16_t x560 = INT16_MIN;

	t98 = (((x557+x558)-x559)*x560);

	if (t98 != 18446744034710028288LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x566 = INT16_MAX;
	int32_t x567 = -1;
	volatile int64_t x568 = -1LL;
	static int64_t t99 = 664182916620053017LL;

	t99 = (((x565+x566)-x567)*x568);

	if (t99 != -4022990LL) { NG(); } else { ; }
	
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

