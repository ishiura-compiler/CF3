#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x4 = UINT8_MAX;
volatile int16_t x8 = 2508;
static int32_t x15 = INT32_MIN;
int16_t x17 = INT16_MAX;
uint64_t x25 = UINT64_MAX;
uint32_t x26 = 161482587U;
uint32_t x27 = 4U;
static volatile int32_t t7 = -4972014;
int16_t x38 = -1;
int8_t x56 = -1;
volatile int32_t t10 = 58951902;
static int64_t x59 = -12LL;
uint32_t x84 = UINT32_MAX;
volatile int64_t t14 = 1476010830221557LL;
static int8_t x87 = INT8_MIN;
uint64_t t15 = 370126660935225746LLU;
int16_t x97 = INT16_MAX;
static uint8_t x99 = 7U;
volatile int32_t t16 = -99910747;
volatile uint32_t t17 = 3U;
uint64_t x113 = 27225490671927LLU;
uint32_t t20 = 1421U;
volatile uint32_t x137 = 8755U;
int16_t x138 = INT16_MAX;
int32_t x139 = 498;
int8_t x145 = INT8_MIN;
int64_t x146 = -1LL;
uint64_t t24 = 991197935053224LLU;
static uint8_t x155 = 10U;
uint64_t t25 = 406LLU;
int16_t x160 = -60;
volatile uint16_t x165 = 1340U;
int16_t x174 = 1151;
volatile int32_t x176 = INT32_MIN;
uint32_t x177 = 4860694U;
uint16_t x185 = UINT16_MAX;
volatile int64_t x187 = INT64_MIN;
int16_t x193 = INT16_MAX;
volatile uint32_t x198 = 9U;
volatile uint64_t t35 = 271395757338LLU;
volatile int64_t t36 = 6145226LL;
volatile int16_t x206 = INT16_MIN;
static uint64_t t37 = 1978250208113LLU;
int32_t x212 = -75670210;
static int64_t x222 = 9854560271032LL;
int64_t t40 = 46367LL;
volatile uint32_t x231 = UINT32_MAX;
uint32_t x241 = UINT32_MAX;
int8_t x249 = INT8_MAX;
int16_t x251 = -14634;
volatile uint16_t x256 = UINT16_MAX;
static int8_t x258 = -1;
int64_t t47 = -3748455LL;
volatile uint32_t x266 = 8U;
static int32_t x277 = -1;
static volatile int64_t t52 = -188516320464LL;
volatile int16_t x289 = -1;
static int32_t x291 = INT32_MIN;
int8_t x299 = INT8_MIN;
uint32_t x303 = 5029U;
int16_t x305 = INT16_MIN;
int16_t x316 = -645;
volatile int64_t x320 = 12284620557044LL;
int16_t x331 = INT16_MIN;
int8_t x336 = INT8_MAX;
volatile int64_t x342 = -1LL;
int8_t x347 = 13;
volatile uint64_t t67 = 51518736687674764LLU;
int16_t x350 = 2;
int8_t x352 = 16;
volatile uint8_t x356 = UINT8_MAX;
uint64_t t69 = 15981LLU;
int64_t x358 = -3408057LL;
int64_t t70 = -39755710063548000LL;
int64_t t73 = -111618463795371584LL;
volatile uint32_t x383 = UINT32_MAX;
int64_t t74 = -231789788820521LL;
static volatile uint64_t t77 = 587994253LLU;
volatile int32_t t82 = -80124984;
int16_t x441 = INT16_MIN;
uint16_t x443 = 12U;
uint32_t x444 = 37U;
int32_t x455 = INT32_MAX;
int32_t x457 = -144932025;
uint8_t x460 = UINT8_MAX;
int64_t t87 = -2504309475LL;
uint32_t x465 = 183U;
int8_t x472 = 21;
uint32_t x488 = UINT32_MAX;
static volatile int64_t x491 = INT64_MAX;
int64_t x493 = -1LL;
int8_t x504 = INT8_MIN;
static int16_t x506 = -1;
int32_t x514 = -1204;
int32_t x515 = INT32_MIN;
uint32_t t99 = 27815U;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	uint16_t x2 = 2U;
	uint8_t x3 = 2U;
	int32_t t0 = 1344856;

	t0 = ((x1*x2)+(x3%x4));

	if (t0 != -254) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -6;
	static int16_t x6 = INT16_MAX;
	int64_t x7 = 0LL;
	volatile int64_t t1 = -144523565333921LL;

	t1 = ((x5*x6)+(x7%x8));

	if (t1 != -196602LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 596U;
	static int32_t x10 = -1;
	int16_t x11 = -1;
	int64_t x12 = -1LL;
	int64_t t2 = 286947213139038561LL;

	t2 = ((x9*x10)+(x11%x12));

	if (t2 != -596LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 64688612852211LLU;
	int8_t x14 = INT8_MIN;
	uint16_t x16 = 25294U;
	volatile uint64_t t3 = 1151454013753591006LLU;

	t3 = ((x13*x14)+(x15%x16));

	if (t3 != 18438463931264445560LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1;
	static volatile uint64_t x19 = 3874953547741LLU;
	int64_t x20 = -2LL;
	uint64_t t4 = 1027263532385LLU;

	t4 = ((x17*x18)+(x19%x20));

	if (t4 != 3874953514974LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	static volatile uint16_t x22 = UINT16_MAX;
	int16_t x23 = 1075;
	uint16_t x24 = 25173U;
	volatile int32_t t5 = -259243;

	t5 = ((x21*x22)+(x23%x24));

	if (t5 != -64460) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x28 = 5652LLU;
	uint64_t t6 = 3662150575896263LLU;

	t6 = ((x25*x26)+(x27%x28));

	if (t6 != 18446744073548069033LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = 100;
	static uint8_t x30 = 0U;
	static int16_t x31 = INT16_MIN;
	int32_t x32 = INT32_MAX;

	t7 = ((x29*x30)+(x31%x32));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 46U;
	int8_t x39 = INT8_MIN;
	uint16_t x40 = UINT16_MAX;
	int32_t t8 = 403;

	t8 = ((x37*x38)+(x39%x40));

	if (t8 != -174) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -69;
	uint16_t x46 = UINT16_MAX;
	uint32_t x47 = 5612U;
	int16_t x48 = 431;
	volatile uint32_t t9 = 1759U;

	t9 = ((x45*x46)+(x47%x48));

	if (t9 != 4290445390U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MIN;
	int16_t x54 = INT16_MIN;
	static int32_t x55 = INT32_MAX;

	t10 = ((x53*x54)+(x55%x56));

	if (t10 != 1073741824) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = -1;
	int32_t x58 = -1;
	int32_t x60 = 46412;
	volatile int64_t t11 = -279355716274LL;

	t11 = ((x57*x58)+(x59%x60));

	if (t11 != -11LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x61 = 2906LL;
	static int8_t x62 = INT8_MIN;
	uint16_t x63 = 40U;
	uint16_t x64 = 30U;
	int64_t t12 = 6186917LL;

	t12 = ((x61*x62)+(x63%x64));

	if (t12 != -371958LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = 0;
	int32_t x74 = INT32_MAX;
	int8_t x75 = INT8_MIN;
	static int16_t x76 = -388;
	static int32_t t13 = -37012;

	t13 = ((x73*x74)+(x75%x76));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = 37023812319146LL;
	int8_t x82 = INT8_MIN;
	static int16_t x83 = -1;

	t14 = ((x81*x82)+(x83%x84));

	if (t14 != -4739047976850688LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x85 = UINT64_MAX;
	static int8_t x86 = -15;
	uint64_t x88 = 2227261743132665LLU;

	t15 = ((x85*x86)+(x87%x88));

	if (t15 != 562317084819973LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x98 = 1;
	int8_t x100 = 8;

	t16 = ((x97*x98)+(x99%x100));

	if (t16 != 32774) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x101 = INT16_MIN;
	int16_t x102 = INT16_MIN;
	uint32_t x103 = 515547379U;
	int16_t x104 = -11630;

	t17 = ((x101*x102)+(x103%x104));

	if (t17 != 1589289203U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x114 = INT32_MIN;
	int64_t x115 = INT64_MAX;
	uint32_t x116 = 1U;
	uint64_t t18 = 52LLU;

	t18 = ((x113*x114)+(x115%x116));

	if (t18 != 9882686919513473024LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x121 = UINT64_MAX;
	uint8_t x122 = 20U;
	volatile uint32_t x123 = 4693U;
	static volatile uint8_t x124 = 5U;
	uint64_t t19 = 2651381159LLU;

	t19 = ((x121*x122)+(x123%x124));

	if (t19 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x125 = UINT16_MAX;
	uint32_t x126 = 131U;
	int16_t x127 = -1;
	int32_t x128 = -1;

	t20 = ((x125*x126)+(x127%x128));

	if (t20 != 8585085U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x133 = INT32_MIN;
	uint8_t x134 = 0U;
	volatile int32_t x135 = 894043740;
	int8_t x136 = INT8_MAX;
	static volatile int32_t t21 = 540;

	t21 = ((x133*x134)+(x135%x136));

	if (t21 != 62) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x140 = INT64_MIN;
	int64_t t22 = -22382334598492025LL;

	t22 = ((x137*x138)+(x139%x140));

	if (t22 != 286875583LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x147 = INT16_MIN;
	int32_t x148 = -66770589;
	int64_t t23 = 684546582815LL;

	t23 = ((x145*x146)+(x147%x148));

	if (t23 != -32640LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x149 = UINT16_MAX;
	int8_t x150 = -1;
	uint64_t x151 = 1756406453572671869LLU;
	int64_t x152 = -1LL;

	t24 = ((x149*x150)+(x151%x152));

	if (t24 != 1756406453572606334LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x153 = 62487;
	static int64_t x154 = -305390145LL;
	uint64_t x156 = 3110770475498273738LLU;

	t25 = ((x153*x154)+(x155%x156));

	if (t25 != 18446724990795561011LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x157 = -1;
	int8_t x158 = INT8_MIN;
	uint8_t x159 = 2U;
	int32_t t26 = -3686238;

	t26 = ((x157*x158)+(x159%x160));

	if (t26 != 130) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x161 = UINT64_MAX;
	int64_t x162 = -1LL;
	static uint8_t x163 = UINT8_MAX;
	static int8_t x164 = INT8_MIN;
	static uint64_t t27 = 24856093LLU;

	t27 = ((x161*x162)+(x163%x164));

	if (t27 != 128LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x166 = 29LLU;
	uint32_t x167 = UINT32_MAX;
	volatile uint32_t x168 = 2668U;
	volatile uint64_t t28 = 27435203LLU;

	t28 = ((x165*x166)+(x167%x168));

	if (t28 != 41079LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x169 = -1LL;
	volatile uint64_t x170 = 10946564006419LLU;
	uint32_t x171 = 59U;
	int64_t x172 = INT64_MIN;
	volatile uint64_t t29 = 3519551899468614559LLU;

	t29 = ((x169*x170)+(x171%x172));

	if (t29 != 18446733127145545256LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x173 = UINT32_MAX;
	volatile int8_t x175 = 57;
	volatile uint32_t t30 = 83U;

	t30 = ((x173*x174)+(x175%x176));

	if (t30 != 4294966202U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x178 = 1050667035499360867LLU;
	int32_t x179 = -1;
	uint64_t x180 = UINT64_MAX;
	uint64_t t31 = 33876708226LLU;

	t31 = ((x177*x178)+(x179%x180));

	if (t31 != 8305387114714723714LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x181 = 0U;
	static uint64_t x182 = 14074479741249113LLU;
	volatile int32_t x183 = INT32_MAX;
	volatile int8_t x184 = 15;
	volatile uint64_t t32 = 39443412292LLU;

	t32 = ((x181*x182)+(x183%x184));

	if (t32 != 7LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x186 = 1;
	int64_t x188 = 24705LL;
	static volatile int64_t t33 = -54LL;

	t33 = ((x185*x186)+(x187%x188));

	if (t33 != 46312LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x194 = 4335U;
	volatile uint64_t x195 = UINT64_MAX;
	int32_t x196 = INT32_MIN;
	volatile uint64_t t34 = 35354735400623LLU;

	t34 = ((x193*x194)+(x195%x196));

	if (t34 != 2289528592LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x197 = -3571;
	uint64_t x199 = 282032383533LLU;
	int16_t x200 = -1;

	t35 = ((x197*x198)+(x199%x200));

	if (t35 != 286327318690LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x201 = INT8_MIN;
	uint8_t x202 = 1U;
	volatile int64_t x203 = INT64_MAX;
	int8_t x204 = INT8_MIN;

	t36 = ((x201*x202)+(x203%x204));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x205 = 13U;
	volatile uint64_t x207 = 2LLU;
	int64_t x208 = -18145634738691LL;

	t37 = ((x205*x206)+(x207%x208));

	if (t37 != 18446744073709125634LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x209 = INT64_MAX;
	static int16_t x210 = -1;
	int8_t x211 = 0;
	volatile int64_t t38 = 414LL;

	t38 = ((x209*x210)+(x211%x212));

	if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x221 = UINT64_MAX;
	int32_t x223 = INT32_MIN;
	int16_t x224 = -1;
	volatile uint64_t t39 = 13LLU;

	t39 = ((x221*x222)+(x223%x224));

	if (t39 != 18446734219149280584LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x225 = -1LL;
	uint8_t x226 = UINT8_MAX;
	volatile int8_t x227 = -1;
	int16_t x228 = INT16_MAX;

	t40 = ((x225*x226)+(x227%x228));

	if (t40 != -256LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x229 = 776751700;
	volatile uint64_t x230 = 474644926906010LLU;
	uint64_t x232 = 5798665876185776LLU;
	uint64_t t41 = 90LLU;

	t41 = ((x229*x230)+(x231%x232));

	if (t41 != 4626813464204086919LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x233 = INT64_MAX;
	uint8_t x234 = 0U;
	int8_t x235 = 1;
	volatile uint64_t x236 = UINT64_MAX;
	uint64_t t42 = 178357104269635LLU;

	t42 = ((x233*x234)+(x235%x236));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x242 = -1;
	int32_t x243 = -1;
	int8_t x244 = INT8_MIN;
	uint32_t t43 = 1988372501U;

	t43 = ((x241*x242)+(x243%x244));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x245 = 16;
	volatile uint32_t x246 = 0U;
	int16_t x247 = -1;
	int8_t x248 = 2;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = ((x245*x246)+(x247%x248));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x250 = 6U;
	static volatile int8_t x252 = INT8_MIN;
	volatile int32_t t45 = -41018;

	t45 = ((x249*x250)+(x251%x252));

	if (t45 != 720) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x253 = 34707953U;
	volatile int16_t x254 = INT16_MAX;
	int64_t x255 = 113682095061LL;
	int64_t t46 = -439165230692LL;

	t46 = ((x253*x254)+(x255%x256));

	if (t46 != 3404167673LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x257 = -1;
	int64_t x259 = INT64_MIN;
	int16_t x260 = 1175;

	t47 = ((x257*x258)+(x259%x260));

	if (t47 != -82LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x261 = -10;
	int32_t x262 = -1854986;
	int64_t x263 = -7502LL;
	static int8_t x264 = INT8_MAX;
	int64_t t48 = 85958LL;

	t48 = ((x261*x262)+(x263%x264));

	if (t48 != 18549851LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x265 = 6U;
	volatile uint16_t x267 = 525U;
	volatile uint16_t x268 = UINT16_MAX;
	uint32_t t49 = 1664U;

	t49 = ((x265*x266)+(x267%x268));

	if (t49 != 573U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x273 = 2773547168471LLU;
	uint16_t x274 = 946U;
	static uint64_t x275 = 956171755453LLU;
	int8_t x276 = INT8_MIN;
	uint64_t t50 = 58493435996677LLU;

	t50 = ((x273*x274)+(x275%x276));

	if (t50 != 2624731793129019LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x278 = INT8_MIN;
	volatile int32_t x279 = 24183084;
	uint32_t x280 = UINT32_MAX;
	uint32_t t51 = 443U;

	t51 = ((x277*x278)+(x279%x280));

	if (t51 != 24183212U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x281 = -1;
	static uint16_t x282 = UINT16_MAX;
	int64_t x283 = INT64_MIN;
	static int32_t x284 = -414751920;

	t52 = ((x281*x282)+(x283%x284));

	if (t52 != -197699903LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x285 = 39U;
	volatile uint8_t x286 = 59U;
	static int32_t x287 = INT32_MIN;
	int64_t x288 = 3561065LL;
	volatile int64_t t53 = -511142LL;

	t53 = ((x285*x286)+(x287%x288));

	if (t53 != -159152LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x290 = -1;
	int8_t x292 = INT8_MIN;
	int32_t t54 = -78878930;

	t54 = ((x289*x290)+(x291%x292));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x293 = -2457;
	int8_t x294 = -4;
	static uint32_t x295 = UINT32_MAX;
	static int16_t x296 = 25;
	uint32_t t55 = 1U;

	t55 = ((x293*x294)+(x295%x296));

	if (t55 != 9848U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x297 = -1LL;
	int32_t x298 = INT32_MIN;
	uint16_t x300 = 2U;
	int64_t t56 = 12054968325183LL;

	t56 = ((x297*x298)+(x299%x300));

	if (t56 != 2147483648LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x301 = INT16_MIN;
	volatile uint16_t x302 = UINT16_MAX;
	int32_t x304 = INT32_MIN;
	uint32_t t57 = 96564U;

	t57 = ((x301*x302)+(x303%x304));

	if (t57 != 2147521445U) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x306 = INT16_MIN;
	volatile int32_t x307 = -228;
	static int32_t x308 = -1;
	static int32_t t58 = -833198;

	t58 = ((x305*x306)+(x307%x308));

	if (t58 != 1073741824) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x313 = 58U;
	volatile int64_t x314 = -1LL;
	int8_t x315 = INT8_MIN;
	volatile int64_t t59 = -1LL;

	t59 = ((x313*x314)+(x315%x316));

	if (t59 != -186LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x317 = INT16_MIN;
	static uint64_t x318 = 110LLU;
	int32_t x319 = -1;
	uint64_t t60 = 7812040984042539LLU;

	t60 = ((x317*x318)+(x319%x320));

	if (t60 != 18446744073705947135LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x321 = 7645;
	uint32_t x322 = UINT32_MAX;
	static int32_t x323 = -481947;
	volatile int16_t x324 = INT16_MIN;
	uint32_t t61 = 216080059U;

	t61 = ((x321*x322)+(x323%x324));

	if (t61 != 4294936456U) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x325 = INT32_MIN;
	static int64_t x326 = -1LL;
	int64_t x327 = INT64_MAX;
	int8_t x328 = INT8_MIN;
	static int64_t t62 = 7413LL;

	t62 = ((x325*x326)+(x327%x328));

	if (t62 != 2147483775LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x329 = UINT32_MAX;
	int16_t x330 = 4;
	int64_t x332 = INT64_MIN;
	volatile int64_t t63 = -2591266653564808029LL;

	t63 = ((x329*x330)+(x331%x332));

	if (t63 != 4294934524LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x333 = UINT64_MAX;
	int16_t x334 = 5;
	int16_t x335 = -1;
	volatile uint64_t t64 = 526239940932950678LLU;

	t64 = ((x333*x334)+(x335%x336));

	if (t64 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x337 = 2255U;
	volatile int32_t x338 = 101;
	static volatile int64_t x339 = INT64_MIN;
	int32_t x340 = -7608;
	volatile int64_t t65 = 16240474545LL;

	t65 = ((x337*x338)+(x339%x340));

	if (t65 != 223667LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x341 = INT16_MIN;
	static int16_t x343 = 1;
	int64_t x344 = 41983274LL;
	volatile int64_t t66 = -234818396746088408LL;

	t66 = ((x341*x342)+(x343%x344));

	if (t66 != 32769LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x345 = UINT32_MAX;
	volatile int16_t x346 = -1;
	uint64_t x348 = UINT64_MAX;

	t67 = ((x345*x346)+(x347%x348));

	if (t67 != 14LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x349 = UINT8_MAX;
	uint8_t x351 = 13U;
	volatile int32_t t68 = -406973;

	t68 = ((x349*x350)+(x351%x352));

	if (t68 != 523) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x353 = UINT8_MAX;
	static uint64_t x354 = 1243166267924518499LLU;
	int8_t x355 = INT8_MAX;

	t69 = ((x353*x354)+(x355%x356));

	if (t69 != 3412749067689839900LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x357 = -1;
	int16_t x359 = 1;
	static int16_t x360 = INT16_MIN;

	t70 = ((x357*x358)+(x359%x360));

	if (t70 != 3408058LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x361 = INT8_MIN;
	uint16_t x362 = UINT16_MAX;
	static int32_t x363 = INT32_MIN;
	static int32_t x364 = INT32_MAX;
	volatile int32_t t71 = -1671973;

	t71 = ((x361*x362)+(x363%x364));

	if (t71 != -8388481) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x369 = 7716144921415522686LLU;
	uint32_t x370 = UINT32_MAX;
	int16_t x371 = -1;
	static int8_t x372 = -14;
	uint64_t t72 = 756745416414573LLU;

	t72 = ((x369*x370)+(x371%x372));

	if (t72 != 2977680422732293761LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x373 = 7U;
	uint8_t x374 = 0U;
	int16_t x375 = 2399;
	volatile int64_t x376 = INT64_MIN;

	t73 = ((x373*x374)+(x375%x376));

	if (t73 != 2399LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x381 = -1LL;
	int64_t x382 = 9800097644880067LL;
	static volatile int8_t x384 = INT8_MIN;

	t74 = ((x381*x382)+(x383%x384));

	if (t74 != -9800097644879940LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x393 = UINT8_MAX;
	int8_t x394 = -1;
	int8_t x395 = 0;
	volatile uint32_t x396 = 8032U;
	static uint32_t t75 = 38983U;

	t75 = ((x393*x394)+(x395%x396));

	if (t75 != 4294967041U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	uint16_t x399 = 173U;
	static uint64_t x400 = 388620LLU;
	volatile uint64_t t76 = 267036163234LLU;

	t76 = ((x397*x398)+(x399%x400));

	if (t76 != 1073741997LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x405 = INT32_MAX;
	uint32_t x406 = UINT32_MAX;
	uint64_t x407 = 466724510875552579LLU;
	static uint8_t x408 = 105U;

	t77 = ((x405*x406)+(x407%x408));

	if (t77 != 2147483683LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x409 = INT16_MIN;
	static int16_t x410 = INT16_MIN;
	static volatile uint64_t x411 = 3816LLU;
	int32_t x412 = INT32_MAX;
	uint64_t t78 = 0LLU;

	t78 = ((x409*x410)+(x411%x412));

	if (t78 != 1073745640LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x413 = -1LL;
	uint64_t x414 = 28892LLU;
	static volatile int8_t x415 = -1;
	int32_t x416 = INT32_MAX;
	volatile uint64_t t79 = 5623339354LLU;

	t79 = ((x413*x414)+(x415%x416));

	if (t79 != 18446744073709522723LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x421 = INT16_MAX;
	volatile int64_t x422 = 64880832LL;
	uint16_t x423 = UINT16_MAX;
	int64_t x424 = 65834675393669LL;
	volatile int64_t t80 = -209LL;

	t80 = ((x421*x422)+(x423%x424));

	if (t80 != 2125950287679LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x425 = INT8_MIN;
	int16_t x426 = -8305;
	int32_t x427 = INT32_MAX;
	volatile int16_t x428 = 16;
	volatile int32_t t81 = 281447;

	t81 = ((x425*x426)+(x427%x428));

	if (t81 != 1063055) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x429 = 24U;
	int16_t x430 = INT16_MIN;
	int16_t x431 = 12;
	uint8_t x432 = UINT8_MAX;

	t82 = ((x429*x430)+(x431%x432));

	if (t82 != -786420) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x442 = UINT32_MAX;
	volatile uint32_t t83 = 15U;

	t83 = ((x441*x442)+(x443%x444));

	if (t83 != 32780U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x445 = 20937570832121LLU;
	volatile int64_t x446 = -1LL;
	uint32_t x447 = UINT32_MAX;
	static uint8_t x448 = 3U;
	static uint64_t t84 = 24628033LLU;

	t84 = ((x445*x446)+(x447%x448));

	if (t84 != 18446723136138719495LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x449 = INT16_MIN;
	int64_t x450 = 505266900LL;
	int8_t x451 = -1;
	static int32_t x452 = INT32_MIN;
	volatile int64_t t85 = -29041258818665819LL;

	t85 = ((x449*x450)+(x451%x452));

	if (t85 != -16556585779201LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x453 = INT16_MAX;
	uint32_t x454 = 251U;
	static int8_t x456 = INT8_MIN;
	static volatile uint32_t t86 = 10542U;

	t86 = ((x453*x454)+(x455%x456));

	if (t86 != 8224644U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x458 = -1LL;
	static int16_t x459 = -27;

	t87 = ((x457*x458)+(x459%x460));

	if (t87 != 144931998LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x461 = 32135LLU;
	volatile int32_t x462 = -1;
	int64_t x463 = INT64_MIN;
	int16_t x464 = -1;
	uint64_t t88 = 15208LLU;

	t88 = ((x461*x462)+(x463%x464));

	if (t88 != 18446744073709519481LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x466 = UINT64_MAX;
	int8_t x467 = INT8_MIN;
	int64_t x468 = -76275799669LL;
	volatile uint64_t t89 = 988291234878LLU;

	t89 = ((x465*x466)+(x467%x468));

	if (t89 != 18446744073709551305LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x469 = 6LLU;
	int64_t x470 = -1LL;
	static uint16_t x471 = 26660U;
	volatile uint64_t t90 = 59121LLU;

	t90 = ((x469*x470)+(x471%x472));

	if (t90 != 5LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x473 = 16595U;
	int8_t x474 = -1;
	static volatile int64_t x475 = -21506578814345LL;
	int8_t x476 = INT8_MIN;
	volatile int64_t t91 = 52444896LL;

	t91 = ((x473*x474)+(x475%x476));

	if (t91 != 4294950692LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x477 = INT8_MIN;
	int32_t x478 = -29114;
	int64_t x479 = INT64_MIN;
	volatile uint8_t x480 = UINT8_MAX;
	int64_t t92 = 123317511LL;

	t92 = ((x477*x478)+(x479%x480));

	if (t92 != 3726464LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x485 = INT8_MIN;
	int32_t x486 = 35;
	volatile int16_t x487 = 104;
	static volatile uint32_t t93 = 495587U;

	t93 = ((x485*x486)+(x487%x488));

	if (t93 != 4294962920U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x489 = -1;
	static int8_t x490 = INT8_MIN;
	static volatile uint16_t x492 = UINT16_MAX;
	int64_t t94 = 184837LL;

	t94 = ((x489*x490)+(x491%x492));

	if (t94 != 32895LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x494 = 0;
	uint16_t x495 = 27U;
	static int32_t x496 = INT32_MAX;
	int64_t t95 = -3668LL;

	t95 = ((x493*x494)+(x495%x496));

	if (t95 != 27LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x501 = INT16_MIN;
	uint8_t x502 = 93U;
	static int32_t x503 = INT32_MIN;
	volatile int32_t t96 = 497333984;

	t96 = ((x501*x502)+(x503%x504));

	if (t96 != -3047424) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x505 = 14960324;
	static int32_t x507 = -136445466;
	int16_t x508 = INT16_MAX;
	int32_t t97 = -1916;

	t97 = ((x505*x506)+(x507%x508));

	if (t97 != -14964002) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x509 = 1238734143U;
	int32_t x510 = INT32_MAX;
	uint32_t x511 = UINT32_MAX;
	volatile int64_t x512 = 471428918878500857LL;
	int64_t t98 = -920091932256LL;

	t98 = ((x509*x510)+(x511%x512));

	if (t98 != 5203716800LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x513 = UINT32_MAX;
	static int16_t x516 = INT16_MIN;

	t99 = ((x513*x514)+(x515%x516));

	if (t99 != 1204U) { NG(); } else { ; }
	
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

