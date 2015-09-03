#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -675625;
volatile int64_t t0 = 2LL;
uint64_t t1 = 18364128359187LLU;
uint8_t x10 = 110U;
uint64_t x11 = 1420816122LLU;
int32_t x12 = INT32_MAX;
int8_t x14 = -12;
int64_t x15 = -158LL;
volatile int64_t t3 = 42961LL;
int32_t x30 = -1;
int8_t x46 = -1;
volatile uint8_t x48 = 1U;
static volatile int32_t t9 = 266302;
int16_t x51 = -1;
static volatile uint32_t t13 = 68U;
int64_t t14 = 132199053659448LL;
static volatile uint64_t x115 = UINT64_MAX;
static uint64_t t20 = UINT64_MAX;
volatile uint64_t x117 = 324139567116629334LLU;
int32_t x134 = -1;
int64_t x135 = INT64_MIN;
uint32_t x136 = 116U;
volatile int64_t t24 = 121438283855701LL;
volatile int64_t t25 = -1606LL;
int64_t x143 = INT64_MIN;
int64_t t26 = 10795LL;
int8_t x149 = -1;
static int64_t t27 = INT64_MAX;
static uint64_t x158 = UINT64_MAX;
volatile uint64_t t29 = 668695457951LLU;
int32_t x161 = -7391092;
uint64_t t31 = 346885520LLU;
int8_t x183 = INT8_MIN;
volatile int64_t x187 = -71659265879LL;
uint8_t x193 = 9U;
volatile uint64_t x208 = 22LLU;
uint32_t x210 = UINT32_MAX;
static uint16_t x211 = UINT16_MAX;
int8_t x220 = INT8_MIN;
static uint32_t x227 = 2569U;
volatile uint64_t t41 = 30LLU;
static volatile int16_t x233 = -1;
uint64_t x240 = 16366LLU;
volatile int8_t x246 = -1;
int8_t x255 = INT8_MIN;
int8_t x256 = -8;
volatile uint64_t t47 = 35LLU;
int32_t x271 = INT32_MAX;
int8_t x272 = INT8_MAX;
uint8_t x285 = 31U;
int32_t x291 = INT32_MIN;
int8_t x303 = -1;
uint64_t x306 = UINT64_MAX;
int32_t x308 = INT32_MIN;
int8_t x310 = -1;
volatile uint16_t x311 = 7U;
uint32_t x333 = UINT32_MAX;
int8_t x339 = INT8_MAX;
uint32_t t59 = 1536117U;
int16_t x366 = -1;
volatile uint64_t t64 = 958911LLU;
int32_t x394 = -1;
static int8_t x418 = INT8_MIN;
uint8_t x419 = 5U;
volatile int32_t x420 = INT32_MAX;
static int16_t x425 = INT16_MAX;
int16_t x437 = INT16_MIN;
int32_t x439 = 46;
int16_t x440 = INT16_MIN;
int64_t x453 = -1LL;
volatile int16_t x455 = -1;
int16_t x465 = INT16_MAX;
static int64_t x467 = INT64_MIN;
uint64_t t74 = 18LLU;
int8_t x481 = -2;
uint8_t x482 = 108U;
static int64_t x483 = INT64_MIN;
volatile int8_t x509 = INT8_MIN;
static uint64_t x510 = 2131LLU;
int64_t x516 = INT64_MAX;
static int32_t x518 = -1;
int32_t x523 = -1;
volatile int32_t x528 = INT32_MIN;
uint8_t x538 = 3U;
static int64_t x544 = -1LL;
volatile uint16_t x556 = UINT16_MAX;
int32_t t86 = -934822130;
int32_t x573 = 1025080;
static int16_t x593 = -67;
uint8_t x598 = 19U;
uint64_t t91 = 22490639LLU;
volatile uint32_t t92 = 104U;
int16_t x607 = -11;
uint64_t t93 = 32528185728866LLU;
int32_t x610 = INT32_MIN;
volatile uint32_t x611 = 2177278U;
volatile uint64_t x612 = UINT64_MAX;
static uint64_t t94 = 408245624210661130LLU;
static int16_t x613 = -1;
uint8_t x622 = 1U;
uint32_t x623 = 42495U;
int8_t x625 = 32;
int64_t x628 = INT64_MIN;
static uint16_t x639 = 32U;
static volatile uint64_t t99 = 1490654492434LLU;


void f0(void) {
	int64_t x1 = -1LL;
	static uint8_t x2 = UINT8_MAX;
	volatile int32_t x3 = -393;

	t0 = ((x1*x2)*(x3|x4));

	if (t0 != 67575LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -14;
	static uint8_t x6 = 62U;
	static uint64_t x7 = UINT64_MAX;
	int32_t x8 = INT32_MIN;

	t1 = ((x5*x6)*(x7|x8));

	if (t1 != 868LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static uint64_t t2 = 212852612002LLU;

	t2 = ((x9*x10)*(x11|x12));

	if (t2 != 30000346548590LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x13 = 1U;
	volatile int16_t x16 = INT16_MAX;

	t3 = ((x13*x14)*(x15|x16));

	if (t3 != 12LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 44578U;
	volatile uint32_t x18 = 3355U;
	static uint64_t x19 = 493LLU;
	uint16_t x20 = UINT16_MAX;
	uint64_t t4 = 2707499999LLU;

	t4 = ((x17*x18)*(x19|x20));

	if (t4 != 9801361516650LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -270;
	int32_t x22 = -1;
	volatile int16_t x23 = -1;
	static volatile int64_t x24 = 439946022521LL;
	volatile int64_t t5 = 700188963187644146LL;

	t5 = ((x21*x22)*(x23|x24));

	if (t5 != -270LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 20659382U;
	int8_t x26 = -1;
	int8_t x27 = 0;
	volatile int32_t x28 = INT32_MAX;
	static uint32_t t6 = 3U;

	t6 = ((x25*x26)*(x27|x28));

	if (t6 != 20659382U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 3U;
	int16_t x31 = -1890;
	volatile uint32_t x32 = 117156357U;
	volatile uint32_t t7 = 7690U;

	t7 = ((x29*x30)*(x31|x32));

	if (t7 != 4131U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x37 = 238534728U;
	static uint16_t x38 = 394U;
	volatile uint64_t x39 = 244980335295LLU;
	volatile int32_t x40 = INT32_MIN;
	uint64_t t8 = 257069201292LLU;

	t8 = ((x37*x38)*(x39|x40));

	if (t8 != 10944695484675444016LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	int16_t x47 = INT16_MIN;

	t9 = ((x45*x46)*(x47|x48));

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x49 = UINT32_MAX;
	int32_t x50 = -1;
	uint16_t x52 = 194U;
	static volatile uint32_t t10 = UINT32_MAX;

	t10 = ((x49*x50)*(x51|x52));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	uint32_t x54 = 347U;
	static volatile int32_t x55 = INT32_MIN;
	uint32_t x56 = 1931U;
	volatile uint32_t t11 = 6699691U;

	t11 = ((x53*x54)*(x55|x56));

	if (t11 != 4209200000U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x57 = -1LL;
	int32_t x58 = INT32_MIN;
	uint16_t x59 = UINT16_MAX;
	int8_t x60 = INT8_MAX;
	static volatile int64_t t12 = -3348LL;

	t12 = ((x57*x58)*(x59|x60));

	if (t12 != 140735340871680LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 1U;
	volatile uint32_t x62 = UINT32_MAX;
	int16_t x63 = INT16_MAX;
	int8_t x64 = INT8_MAX;

	t13 = ((x61*x62)*(x63|x64));

	if (t13 != 4294934529U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = -1;
	int32_t x67 = -2340527;
	int64_t x68 = INT64_MIN;

	t14 = ((x65*x66)*(x67|x68));

	if (t14 != -76694388736LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = UINT64_MAX;
	int64_t x70 = INT64_MAX;
	int64_t x71 = INT64_MIN;
	volatile int8_t x72 = INT8_MIN;
	static volatile uint64_t t15 = 6LLU;

	t15 = ((x69*x70)*(x71|x72));

	if (t15 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 2U;
	int16_t x78 = 1211;
	uint8_t x79 = 0U;
	int8_t x80 = 7;
	volatile uint32_t t16 = 0U;

	t16 = ((x77*x78)*(x79|x80));

	if (t16 != 16954U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x89 = UINT64_MAX;
	uint8_t x90 = UINT8_MAX;
	volatile int8_t x91 = INT8_MIN;
	volatile int64_t x92 = INT64_MAX;
	volatile uint64_t t17 = 1608913LLU;

	t17 = ((x89*x90)*(x91|x92));

	if (t17 != 255LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = UINT64_MAX;
	static uint64_t x94 = UINT64_MAX;
	uint32_t x95 = 463705486U;
	int8_t x96 = -46;
	static volatile uint64_t t18 = 44244118085274LLU;

	t18 = ((x93*x94)*(x95|x96));

	if (t18 != 4294967262LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x105 = -344;
	uint64_t x106 = 100696256LLU;
	static int32_t x107 = INT32_MAX;
	uint32_t x108 = UINT32_MAX;
	uint64_t t19 = 92LLU;

	t19 = ((x105*x106)*(x107|x108));

	if (t19 != 17245125233748017664LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x113 = -1;
	uint32_t x114 = UINT32_MAX;
	int16_t x116 = 1;

	t20 = ((x113*x114)*(x115|x116));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x118 = INT64_MAX;
	volatile int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MAX;
	volatile uint64_t t21 = 122LLU;

	t21 = ((x117*x118)*(x119|x120));

	if (t21 != 18351667710018106710LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = UINT16_MAX;
	uint32_t x122 = 384U;
	int32_t x123 = INT32_MIN;
	int64_t x124 = -128423226641563519LL;
	int64_t t22 = -3467821LL;

	t22 = ((x121*x122)*(x123|x124));

	if (t22 != -2060312666751360LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = -1;
	static int8_t x130 = 1;
	int16_t x131 = INT16_MIN;
	static int8_t x132 = -1;
	volatile int32_t t23 = 1213;

	t23 = ((x129*x130)*(x131|x132));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x133 = 1U;

	t24 = ((x133*x134)*(x135|x136));

	if (t24 != 9223372036854775692LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = -1LL;
	uint8_t x138 = UINT8_MAX;
	int16_t x139 = INT16_MIN;
	int16_t x140 = 1;

	t25 = ((x137*x138)*(x139|x140));

	if (t25 != 8355585LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x141 = 7U;
	int64_t x142 = 987981832529583LL;
	volatile int8_t x144 = INT8_MIN;

	t26 = ((x141*x142)*(x143|x144));

	if (t26 != -885231721946506368LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x150 = -1;
	uint32_t x151 = 7579U;
	int64_t x152 = INT64_MAX;

	t27 = ((x149*x150)*(x151|x152));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x153 = INT32_MIN;
	int64_t x154 = -1LL;
	int16_t x155 = INT16_MIN;
	int64_t x156 = -3992885167524949495LL;
	volatile int64_t t28 = -96LL;

	t28 = ((x153*x154)*(x155|x156));

	if (t28 != -25269440086016LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x157 = -380337257;
	int16_t x159 = -1;
	int64_t x160 = 14180522LL;

	t29 = ((x157*x158)*(x159|x160));

	if (t29 != 18446744073329214359LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x162 = 0U;
	int64_t x163 = 42350027276538LL;
	volatile int16_t x164 = INT16_MIN;
	int64_t t30 = -1758898411305837319LL;

	t30 = ((x161*x162)*(x163|x164));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x165 = 12U;
	uint64_t x166 = 2645863LLU;
	int64_t x167 = INT64_MAX;
	int8_t x168 = -1;

	t31 = ((x165*x166)*(x167|x168));

	if (t31 != 18446744073677801260LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x181 = INT16_MIN;
	int16_t x182 = -2;
	int8_t x184 = INT8_MAX;
	int32_t t32 = 16456;

	t32 = ((x181*x182)*(x183|x184));

	if (t32 != -65536) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x185 = INT64_MIN;
	uint64_t x186 = UINT64_MAX;
	uint32_t x188 = 1506U;
	volatile uint64_t t33 = 338245929314LLU;

	t33 = ((x185*x186)*(x187|x188));

	if (t33 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x189 = -10707211LL;
	uint64_t x190 = UINT64_MAX;
	int32_t x191 = INT32_MIN;
	static int64_t x192 = -1LL;
	static volatile uint64_t t34 = 24LLU;

	t34 = ((x189*x190)*(x191|x192));

	if (t34 != 18446744073698844405LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x194 = 40656437LLU;
	volatile uint8_t x195 = 13U;
	uint16_t x196 = 13538U;
	volatile uint64_t t35 = 9012445652LLU;

	t35 = ((x193*x194)*(x195|x196));

	if (t35 != 4958418400083LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x197 = 6U;
	int16_t x198 = 393;
	int16_t x199 = 1257;
	static volatile uint64_t x200 = UINT64_MAX;
	uint64_t t36 = 93598LLU;

	t36 = ((x197*x198)*(x199|x200));

	if (t36 != 18446744073709549258LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x205 = INT8_MIN;
	static uint8_t x206 = 4U;
	uint64_t x207 = 736716573939LLU;
	uint64_t t37 = 176221418503291899LLU;

	t37 = ((x205*x206)*(x207|x208));

	if (t37 != 18446366874823692800LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x209 = -1;
	static int8_t x212 = INT8_MAX;
	volatile uint32_t t38 = 16U;

	t38 = ((x209*x210)*(x211|x212));

	if (t38 != 65535U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x217 = -1;
	uint16_t x218 = 4050U;
	int16_t x219 = INT16_MIN;
	static volatile int32_t t39 = 19;

	t39 = ((x217*x218)*(x219|x220));

	if (t39 != 518400) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x221 = INT16_MAX;
	static uint64_t x222 = 193272LLU;
	uint8_t x223 = UINT8_MAX;
	uint8_t x224 = UINT8_MAX;
	static uint64_t t40 = 8959049823LLU;

	t40 = ((x221*x222)*(x223|x224));

	if (t40 != 1614900624120LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x225 = -13;
	int16_t x226 = INT16_MIN;
	uint64_t x228 = UINT64_MAX;

	t41 = ((x225*x226)*(x227|x228));

	if (t41 != 18446744073709125632LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x234 = 2;
	static uint64_t x235 = 1870088742577142535LLU;
	static int32_t x236 = INT32_MIN;
	uint64_t t42 = 1967354LLU;

	t42 = ((x233*x234)*(x235|x236));

	if (t42 != 3229026802LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x237 = 14163U;
	volatile int64_t x238 = -1LL;
	int8_t x239 = INT8_MIN;
	uint64_t t43 = 7LLU;

	t43 = ((x237*x238)*(x239|x240));

	if (t43 != 254934LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x245 = 1U;
	static uint16_t x247 = 10681U;
	uint64_t x248 = 56LLU;
	uint64_t t44 = 92155030LLU;

	t44 = ((x245*x246)*(x247|x248));

	if (t44 != 18446744073709540935LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x249 = -1;
	int16_t x250 = INT16_MIN;
	static int32_t x251 = -1;
	int16_t x252 = INT16_MIN;
	static int32_t t45 = 729076;

	t45 = ((x249*x250)*(x251|x252));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x253 = 3362;
	volatile int16_t x254 = -93;
	volatile int32_t t46 = 979744;

	t46 = ((x253*x254)*(x255|x256));

	if (t46 != 2501328) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x261 = UINT32_MAX;
	static int16_t x262 = -1;
	uint32_t x263 = UINT32_MAX;
	static uint64_t x264 = 6795350770324738LLU;

	t47 = ((x261*x262)*(x263|x264));

	if (t47 != 6795351226843135LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x265 = -1;
	volatile int64_t x266 = INT64_MAX;
	int64_t x267 = INT64_MAX;
	static int64_t x268 = -38916989308189LL;
	int64_t t48 = INT64_MAX;

	t48 = ((x265*x266)*(x267|x268));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x269 = 15U;
	int64_t x270 = -1LL;
	int64_t t49 = -14757406762100LL;

	t49 = ((x269*x270)*(x271|x272));

	if (t49 != -32212254705LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x273 = UINT32_MAX;
	static int8_t x274 = 0;
	int64_t x275 = -1LL;
	int8_t x276 = -1;
	volatile int64_t t50 = -1LL;

	t50 = ((x273*x274)*(x275|x276));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x286 = UINT64_MAX;
	uint8_t x287 = 106U;
	int8_t x288 = -21;
	uint64_t t51 = 22535984LLU;

	t51 = ((x285*x286)*(x287|x288));

	if (t51 != 651LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x289 = 13LLU;
	int64_t x290 = 199LL;
	uint16_t x292 = 2U;
	uint64_t t52 = 250398866LLU;

	t52 = ((x289*x290)*(x291|x292));

	if (t52 != 18446738518169359414LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x301 = 3285093857991LLU;
	uint32_t x302 = 1123737U;
	int8_t x304 = INT8_MIN;
	uint64_t t53 = 180183067653724195LLU;

	t53 = ((x301*x302)*(x303|x304));

	if (t53 != 14755162557012319249LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x305 = -1;
	uint8_t x307 = 0U;
	uint64_t t54 = 905892695536304050LLU;

	t54 = ((x305*x306)*(x307|x308));

	if (t54 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x309 = -1LL;
	uint16_t x312 = 31279U;
	volatile int64_t t55 = -1356960623LL;

	t55 = ((x309*x310)*(x311|x312));

	if (t55 != 31279LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x317 = -1;
	int32_t x318 = INT32_MAX;
	int32_t x319 = -1;
	uint32_t x320 = 5654U;
	volatile uint32_t t56 = 6U;

	t56 = ((x317*x318)*(x319|x320));

	if (t56 != 2147483647U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x334 = -8;
	static uint64_t x335 = 113307712LLU;
	int32_t x336 = INT32_MIN;
	volatile uint64_t t57 = 23180043022291LLU;

	t57 = ((x333*x334)*(x335|x336));

	if (t57 != 18446744057436144128LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x337 = 61LLU;
	static uint16_t x338 = UINT16_MAX;
	int64_t x340 = -232686LL;
	static volatile uint64_t t58 = 0LLU;

	t58 = ((x337*x338)*(x339|x340));

	if (t58 != 18446743143951596221LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x341 = UINT32_MAX;
	static int32_t x342 = -1492;
	int8_t x343 = -1;
	int32_t x344 = -1;

	t59 = ((x341*x342)*(x343|x344));

	if (t59 != 4294965804U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x365 = 6U;
	static uint16_t x367 = 9U;
	uint32_t x368 = 1U;
	uint32_t t60 = 42553236U;

	t60 = ((x365*x366)*(x367|x368));

	if (t60 != 4294967242U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x369 = -1;
	int16_t x370 = INT16_MIN;
	volatile int32_t x371 = INT32_MIN;
	uint32_t x372 = UINT32_MAX;
	static uint32_t t61 = 925U;

	t61 = ((x369*x370)*(x371|x372));

	if (t61 != 4294934528U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x373 = -1LL;
	int16_t x374 = -12;
	int8_t x375 = -9;
	uint8_t x376 = 6U;
	volatile int64_t t62 = 21302261828823LL;

	t62 = ((x373*x374)*(x375|x376));

	if (t62 != -108LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x385 = 549174578962380LLU;
	int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MIN;
	volatile int32_t x388 = -1106663;
	volatile uint64_t t63 = 4246153045LLU;

	t63 = ((x385*x386)*(x387|x388));

	if (t63 != 8200689926607077376LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x389 = 1137U;
	uint32_t x390 = UINT32_MAX;
	int64_t x391 = INT64_MIN;
	volatile uint64_t x392 = 1632472759685409LLU;

	t64 = ((x389*x390)*(x391|x392));

	if (t64 != 1526733944522124399LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x393 = -1;
	int32_t x395 = -1;
	static int8_t x396 = INT8_MIN;
	volatile int32_t t65 = -5;

	t65 = ((x393*x394)*(x395|x396));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x397 = INT8_MAX;
	uint32_t x398 = 62077790U;
	int32_t x399 = INT32_MIN;
	int64_t x400 = INT64_MAX;
	volatile int64_t t66 = 6205791208463LL;

	t66 = ((x397*x398)*(x399|x400));

	if (t66 != -3588912034LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x409 = 404726699U;
	uint16_t x410 = UINT16_MAX;
	static volatile int8_t x411 = INT8_MIN;
	int8_t x412 = INT8_MIN;
	uint32_t t67 = 849U;

	t67 = ((x409*x410)*(x411|x412));

	if (t67 != 978441600U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x417 = 6964LL;
	static int64_t t68 = -390832250215331LL;

	t68 = ((x417*x418)*(x419|x420));

	if (t68 != -1914249743066624LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x426 = UINT32_MAX;
	uint32_t x427 = 6U;
	volatile uint16_t x428 = UINT16_MAX;
	static uint32_t t69 = 1190244001U;

	t69 = ((x425*x426)*(x427|x428));

	if (t69 != 2147581951U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x429 = -1;
	int64_t x430 = 2114806332LL;
	static volatile int64_t x431 = -20712635328356LL;
	int32_t x432 = -1;
	int64_t t70 = -966415030893051LL;

	t70 = ((x429*x430)*(x431|x432));

	if (t70 != 2114806332LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x438 = 4330U;
	uint32_t t71 = 2895311U;

	t71 = ((x437*x438)*(x439|x440));

	if (t71 != 4210688000U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x445 = INT16_MIN;
	uint32_t x446 = 15587234U;
	uint8_t x447 = 115U;
	volatile int16_t x448 = -8;
	uint32_t t72 = 0U;

	t72 = ((x445*x446)*(x447|x448));

	if (t72 != 2601844736U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x454 = INT8_MIN;
	uint16_t x456 = 407U;
	volatile int64_t t73 = 115LL;

	t73 = ((x453*x454)*(x455|x456));

	if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x466 = 0U;
	uint64_t x468 = 1690676016350LLU;

	t74 = ((x465*x466)*(x467|x468));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x484 = 4287599432LLU;
	volatile uint64_t t75 = 2169LLU;

	t75 = ((x481*x482)*(x483|x484));

	if (t75 != 18446743147588074304LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x501 = INT8_MIN;
	static uint8_t x502 = UINT8_MAX;
	static int32_t x503 = INT32_MIN;
	uint64_t x504 = 1290825615818616LLU;
	uint64_t t76 = 11LLU;

	t76 = ((x501*x502)*(x503|x504));

	if (t76 != 33788614917120LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x511 = 248LLU;
	int32_t x512 = -432360405;
	uint64_t t77 = 285066939LLU;

	t77 = ((x509*x510)*(x511|x512));

	if (t77 != 117934026215296LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x513 = 1U;
	static int8_t x514 = INT8_MIN;
	int8_t x515 = -1;
	static volatile int64_t t78 = 624284129437LL;

	t78 = ((x513*x514)*(x515|x516));

	if (t78 != 128LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x517 = INT16_MAX;
	static uint64_t x519 = UINT64_MAX;
	int32_t x520 = -1806;
	volatile uint64_t t79 = 5812LLU;

	t79 = ((x517*x518)*(x519|x520));

	if (t79 != 32767LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x521 = 3119;
	int16_t x522 = 36;
	uint32_t x524 = UINT32_MAX;
	static uint32_t t80 = 24U;

	t80 = ((x521*x522)*(x523|x524));

	if (t80 != 4294855012U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x525 = -124;
	static uint8_t x526 = 2U;
	int8_t x527 = -7;
	volatile int32_t t81 = 199678479;

	t81 = ((x525*x526)*(x527|x528));

	if (t81 != 1736) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x529 = 123020479LLU;
	int16_t x530 = -1495;
	uint8_t x531 = 41U;
	int32_t x532 = INT32_MIN;
	uint64_t t82 = 631108840952749759LLU;

	t82 = ((x529*x530)*(x531|x532));

	if (t82 != 7574145108892106799LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x537 = 3423575399LLU;
	static int32_t x539 = -45781879;
	int64_t x540 = INT64_MAX;
	uint64_t t83 = 11LLU;

	t83 = ((x537*x538)*(x539|x540));

	if (t83 != 18446744063438825419LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x541 = -1;
	uint64_t x542 = 3518163311532LLU;
	volatile int32_t x543 = -1;
	volatile uint64_t t84 = 460784LLU;

	t84 = ((x541*x542)*(x543|x544));

	if (t84 != 3518163311532LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x549 = INT16_MIN;
	volatile int8_t x550 = INT8_MAX;
	uint64_t x551 = UINT64_MAX;
	uint8_t x552 = UINT8_MAX;
	volatile uint64_t t85 = 2171045LLU;

	t85 = ((x549*x550)*(x551|x552));

	if (t85 != 4161536LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x553 = -61;
	int16_t x554 = INT16_MIN;
	int8_t x555 = INT8_MIN;

	t86 = ((x553*x554)*(x555|x556));

	if (t86 != -1998848) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x574 = INT8_MAX;
	static int16_t x575 = 1;
	uint32_t x576 = UINT32_MAX;
	uint32_t t87 = 49U;

	t87 = ((x573*x574)*(x575|x576));

	if (t87 != 4164782136U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x581 = -1;
	int64_t x582 = -1973103LL;
	volatile int8_t x583 = INT8_MIN;
	volatile int32_t x584 = -44008019;
	volatile int64_t t88 = 990669512683826LL;

	t88 = ((x581*x582)*(x583|x584));

	if (t88 != -163767549LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x589 = INT16_MAX;
	static uint8_t x590 = 0U;
	volatile int16_t x591 = INT16_MAX;
	static int16_t x592 = -1;
	int32_t t89 = 21;

	t89 = ((x589*x590)*(x591|x592));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x594 = -1;
	int64_t x595 = INT64_MIN;
	int64_t x596 = -118LL;
	int64_t t90 = -5949077718585LL;

	t90 = ((x593*x594)*(x595|x596));

	if (t90 != -7906LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x597 = UINT64_MAX;
	int8_t x599 = -5;
	int32_t x600 = INT32_MAX;

	t91 = ((x597*x598)*(x599|x600));

	if (t91 != 19LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x601 = INT32_MIN;
	uint32_t x602 = 3U;
	int8_t x603 = -1;
	int32_t x604 = -1;

	t92 = ((x601*x602)*(x603|x604));

	if (t92 != 2147483648U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x605 = 1U;
	int64_t x606 = INT64_MIN;
	volatile uint64_t x608 = 966177220392280LLU;

	t93 = ((x605*x606)*(x607|x608));

	if (t93 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x609 = 283645820828883449LLU;

	t94 = ((x609*x610)*(x611|x612));

	if (t94 != 9530686621297410048LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x614 = 33U;
	int64_t x615 = -1LL;
	volatile int64_t x616 = 79LL;
	volatile int64_t t95 = 23433939350LL;

	t95 = ((x613*x614)*(x615|x616));

	if (t95 != 33LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x621 = INT32_MAX;
	static int16_t x624 = 1;
	uint32_t t96 = 408227521U;

	t96 = ((x621*x622)*(x623|x624));

	if (t96 != 2147441153U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x626 = UINT64_MAX;
	uint16_t x627 = 731U;
	uint64_t t97 = 6857454765756LLU;

	t97 = ((x625*x626)*(x627|x628));

	if (t97 != 18446744073709528224LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x629 = 24362;
	int64_t x630 = -1LL;
	uint32_t x631 = 300U;
	int32_t x632 = -1099;
	static int64_t t98 = 10323250712LL;

	t98 = ((x629*x630)*(x631|x632));

	if (t98 != -104633966686210LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x637 = -1;
	int16_t x638 = INT16_MIN;
	volatile uint64_t x640 = 5822875262096LLU;

	t99 = ((x637*x638)*(x639|x640));

	if (t99 != 190803976589410304LLU) { NG(); } else { ; }
	
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

