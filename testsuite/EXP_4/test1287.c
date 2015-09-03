#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x5 = INT64_MIN;
int64_t x6 = 12LL;
int64_t x9 = -1LL;
volatile int16_t x12 = INT16_MAX;
int64_t x20 = INT64_MIN;
int32_t x22 = 1;
int32_t t5 = 945;
int32_t x26 = INT32_MIN;
static int32_t t7 = -1069448095;
int16_t x33 = -1;
int32_t x36 = INT32_MAX;
uint16_t x40 = 78U;
uint64_t x42 = UINT64_MAX;
volatile int32_t t12 = INT32_MIN;
int32_t x54 = INT32_MIN;
int8_t x59 = INT8_MAX;
volatile uint64_t x60 = 789457948451LLU;
int8_t x62 = INT8_MIN;
int64_t t15 = INT64_MAX;
int16_t x69 = INT16_MIN;
int64_t x71 = INT64_MIN;
int16_t x80 = INT16_MAX;
int8_t x83 = 0;
int64_t x84 = -18016615643057307LL;
static int16_t x91 = INT16_MIN;
static uint16_t x92 = UINT16_MAX;
volatile int32_t t22 = -7305369;
static volatile int32_t t23 = -474502650;
int8_t x97 = 2;
int8_t x102 = 1;
static int16_t x106 = INT16_MIN;
int16_t x108 = 1;
int64_t t27 = 53570133780822LL;
int64_t x115 = INT64_MIN;
int32_t x116 = INT32_MIN;
int8_t x124 = 1;
int64_t x127 = INT64_MIN;
uint32_t x131 = UINT32_MAX;
static volatile int64_t t33 = INT64_MIN;
static int16_t x138 = INT16_MIN;
uint8_t x139 = 2U;
uint32_t x144 = 16U;
int8_t x149 = -1;
volatile int32_t t38 = 647;
volatile uint64_t x159 = UINT64_MAX;
uint32_t x160 = 860261U;
int16_t x171 = INT16_MAX;
volatile int32_t t42 = -52;
static volatile int32_t t45 = 7;
int16_t x185 = INT16_MAX;
int64_t x200 = 13965488226847LL;
volatile int32_t t50 = -25252648;
volatile int8_t x206 = -1;
int32_t x207 = -1086158;
int32_t x212 = INT32_MAX;
int8_t x222 = -1;
int8_t x223 = INT8_MIN;
volatile uint8_t x224 = 6U;
int32_t t56 = 278841;
static int32_t x231 = INT32_MIN;
volatile uint8_t x232 = 68U;
volatile int64_t t58 = INT64_MIN;
int32_t t59 = 550;
int8_t x244 = INT8_MIN;
int32_t t64 = INT32_MIN;
int16_t x263 = INT16_MIN;
int32_t t66 = 893633960;
volatile int8_t x270 = INT8_MIN;
volatile int32_t t68 = -12721;
int8_t x282 = -1;
static int32_t x285 = INT32_MAX;
int8_t x288 = INT8_MIN;
int8_t x290 = -59;
int16_t x302 = INT16_MIN;
volatile uint64_t t75 = 38844117LLU;
uint64_t x308 = UINT64_MAX;
static volatile int64_t x317 = INT64_MIN;
static int8_t x326 = 1;
uint64_t x329 = 189LLU;
static volatile uint64_t x332 = UINT64_MAX;
int16_t x333 = INT16_MIN;
int64_t x337 = INT64_MIN;
int32_t x341 = INT32_MIN;
static int32_t x342 = INT32_MIN;
volatile uint32_t x351 = UINT32_MAX;
volatile int32_t x353 = -1;
static int32_t t88 = 20088;
int64_t x359 = 380LL;
int32_t t89 = INT32_MAX;
uint64_t x364 = 6LLU;
static int8_t x369 = INT8_MIN;
uint16_t x375 = 1133U;
uint64_t x377 = 767709701LLU;
int16_t x379 = -1;
int32_t x383 = INT32_MIN;
volatile int8_t x386 = INT8_MAX;
static int16_t x394 = -278;
int8_t x396 = INT8_MAX;
int64_t x397 = 65076LL;
uint32_t x399 = 59783523U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint16_t x2 = 14U;
	uint8_t x3 = 13U;
	uint32_t x4 = 2415631U;
	static volatile int64_t t0 = INT64_MIN;

	t0 = (x1^(x2==(x3==x4)));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x7 = UINT16_MAX;
	static uint16_t x8 = UINT16_MAX;
	volatile int64_t t1 = INT64_MIN;

	t1 = (x5^(x6==(x7==x8)));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = INT8_MIN;
	int16_t x11 = -390;
	int64_t t2 = -6LL;

	t2 = (x9^(x10==(x11==x12)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int32_t x14 = -1;
	static uint8_t x15 = 3U;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 14373;

	t3 = (x13^(x14==(x15==x16)));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1;
	int32_t x18 = 559639;
	static int32_t x19 = -16153;
	volatile int32_t t4 = 4435;

	t4 = (x17^(x18==(x19==x20)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -30;
	static uint64_t x23 = UINT64_MAX;
	static int8_t x24 = -1;

	t5 = (x21^(x22==(x23==x24)));

	if (t5 != -29) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 804;
	volatile uint16_t x27 = UINT16_MAX;
	static uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = -76125332;

	t6 = (x25^(x26==(x27==x28)));

	if (t6 != 804) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint16_t x30 = UINT16_MAX;
	int8_t x31 = -1;
	static volatile int8_t x32 = 3;

	t7 = (x29^(x30==(x31==x32)));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x34 = INT8_MIN;
	int64_t x35 = -1LL;
	volatile int32_t t8 = -56;

	t8 = (x33^(x34==(x35==x36)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1354;
	uint64_t x38 = 192008277292LLU;
	uint16_t x39 = 4792U;
	int32_t t9 = -416388;

	t9 = (x37^(x38==(x39==x40)));

	if (t9 != -1354) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 175;
	uint64_t x43 = 424566619343453LLU;
	static volatile int8_t x44 = -1;
	volatile int32_t t10 = -15735;

	t10 = (x41^(x42==(x43==x44)));

	if (t10 != 175) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MIN;
	volatile int8_t x47 = INT8_MIN;
	int8_t x48 = 1;
	volatile int32_t t11 = 2738955;

	t11 = (x45^(x46==(x47==x48)));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	static volatile int32_t x50 = INT32_MIN;
	int8_t x51 = INT8_MIN;
	int64_t x52 = -1LL;

	t12 = (x49^(x50==(x51==x52)));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -2;
	uint32_t x55 = UINT32_MAX;
	volatile int8_t x56 = 2;
	static int32_t t13 = 1;

	t13 = (x53^(x54==(x55==x56)));

	if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MAX;
	uint32_t x58 = 141748921U;
	static volatile int32_t t14 = -2;

	t14 = (x57^(x58==(x59==x60)));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	static int64_t x63 = -1LL;
	int64_t x64 = INT64_MIN;

	t15 = (x61^(x62==(x63==x64)));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	uint64_t x66 = 193818889965LLU;
	int16_t x67 = -1;
	uint32_t x68 = 28705589U;
	volatile int32_t t16 = 27;

	t16 = (x65^(x66==(x67==x68)));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = 41121;
	int8_t x72 = INT8_MAX;
	static volatile int32_t t17 = 23;

	t17 = (x69^(x70==(x71==x72)));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -1110949;
	volatile int64_t x74 = INT64_MAX;
	uint32_t x75 = 330U;
	uint32_t x76 = UINT32_MAX;
	volatile int32_t t18 = -2145061;

	t18 = (x73^(x74==(x75==x76)));

	if (t18 != -1110949) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MIN;
	int32_t t19 = -1905611;

	t19 = (x77^(x78==(x79==x80)));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 0;
	int64_t x82 = -109318390225352267LL;
	int32_t t20 = 2;

	t20 = (x81^(x82==(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int8_t x86 = INT8_MAX;
	static volatile int64_t x87 = INT64_MIN;
	static volatile int8_t x88 = -1;
	volatile int32_t t21 = 24439;

	t21 = (x85^(x86==(x87==x88)));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -62;
	int8_t x90 = -1;

	t22 = (x89^(x90==(x91==x92)));

	if (t22 != -62) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	int16_t x94 = INT16_MIN;
	int32_t x95 = 417888690;
	volatile int32_t x96 = INT32_MIN;

	t23 = (x93^(x94==(x95==x96)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x98 = INT64_MIN;
	uint32_t x99 = 1977181U;
	static volatile uint32_t x100 = UINT32_MAX;
	volatile int32_t t24 = 4;

	t24 = (x97^(x98==(x99==x100)));

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = -9033;
	volatile uint32_t x103 = UINT32_MAX;
	int16_t x104 = 0;
	int32_t t25 = -506565550;

	t25 = (x101^(x102==(x103==x104)));

	if (t25 != -9033) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	int32_t x107 = -1;
	static int64_t t26 = INT64_MAX;

	t26 = (x105^(x106==(x107==x108)));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = 16643LL;
	static uint32_t x110 = 119831223U;
	int32_t x111 = -1;
	static volatile uint8_t x112 = UINT8_MAX;

	t27 = (x109^(x110==(x111==x112)));

	if (t27 != 16643LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 3019129U;
	uint16_t x114 = 421U;
	static volatile uint32_t t28 = 2U;

	t28 = (x113^(x114==(x115==x116)));

	if (t28 != 3019129U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	volatile int64_t x118 = -1LL;
	volatile uint64_t x119 = 9644LLU;
	uint8_t x120 = 1U;
	volatile int32_t t29 = INT32_MAX;

	t29 = (x117^(x118==(x119==x120)));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 261906491221LLU;
	int64_t x122 = -67331508538421520LL;
	uint64_t x123 = 1008543LLU;
	uint64_t t30 = 1519849LLU;

	t30 = (x121^(x122==(x123==x124)));

	if (t30 != 261906491221LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 3300U;
	int32_t x126 = 122;
	int64_t x128 = 1717LL;
	static uint32_t t31 = 719831084U;

	t31 = (x125^(x126==(x127==x128)));

	if (t31 != 3300U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 12275934989LL;
	static uint8_t x130 = 120U;
	int64_t x132 = 77200483559793074LL;
	static volatile int64_t t32 = -12815032851LL;

	t32 = (x129^(x130==(x131==x132)));

	if (t32 != 12275934989LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MIN;
	volatile int8_t x134 = INT8_MIN;
	volatile int8_t x135 = -1;
	int64_t x136 = INT64_MAX;

	t33 = (x133^(x134==(x135==x136)));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MIN;
	int8_t x140 = INT8_MIN;
	int32_t t34 = 1231;

	t34 = (x137^(x138==(x139==x140)));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 18U;
	static volatile int8_t x142 = INT8_MAX;
	int16_t x143 = INT16_MAX;
	int32_t t35 = -24;

	t35 = (x141^(x142==(x143==x144)));

	if (t35 != 18) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = 1;
	static uint64_t x146 = UINT64_MAX;
	volatile int32_t x147 = INT32_MIN;
	int32_t x148 = 1272;
	static int32_t t36 = -1;

	t36 = (x145^(x146==(x147==x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x150 = INT8_MIN;
	uint32_t x151 = 519312U;
	volatile uint8_t x152 = 6U;
	static int32_t t37 = -2733831;

	t37 = (x149^(x150==(x151==x152)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = 75;
	uint64_t x154 = 182490727427838411LLU;
	uint64_t x155 = 53693435228764474LLU;
	static volatile int64_t x156 = 2373LL;

	t38 = (x153^(x154==(x155==x156)));

	if (t38 != 75) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 526665078U;
	volatile int16_t x158 = -1;
	volatile uint32_t t39 = 307594586U;

	t39 = (x157^(x158==(x159==x160)));

	if (t39 != 526665078U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	uint16_t x162 = UINT16_MAX;
	uint8_t x163 = UINT8_MAX;
	int16_t x164 = INT16_MIN;
	int32_t t40 = -445;

	t40 = (x161^(x162==(x163==x164)));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = UINT8_MAX;
	volatile int64_t x166 = -18057971714487LL;
	volatile int8_t x167 = INT8_MIN;
	uint16_t x168 = 10U;
	static volatile int32_t t41 = 81;

	t41 = (x165^(x166==(x167==x168)));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	static int8_t x170 = 54;
	int16_t x172 = 263;

	t42 = (x169^(x170==(x171==x172)));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MIN;
	volatile int16_t x174 = INT16_MAX;
	volatile uint16_t x175 = UINT16_MAX;
	int64_t x176 = -2629440846878820722LL;
	volatile int32_t t43 = -4698222;

	t43 = (x173^(x174==(x175==x176)));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 4U;
	volatile uint16_t x178 = 1882U;
	uint16_t x179 = 4692U;
	volatile uint32_t x180 = UINT32_MAX;
	int32_t t44 = 856836768;

	t44 = (x177^(x178==(x179==x180)));

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1115681;
	int16_t x182 = -1;
	volatile int32_t x183 = 715165;
	int8_t x184 = -1;

	t45 = (x181^(x182==(x183==x184)));

	if (t45 != -1115681) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x186 = INT64_MAX;
	volatile int64_t x187 = INT64_MIN;
	int16_t x188 = INT16_MAX;
	volatile int32_t t46 = -6704077;

	t46 = (x185^(x186==(x187==x188)));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	uint32_t x190 = 172U;
	int16_t x191 = INT16_MIN;
	uint64_t x192 = 12651332871820835LLU;
	int32_t t47 = 113021;

	t47 = (x189^(x190==(x191==x192)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = 4437257292482258615LL;
	static int32_t x194 = -1;
	int16_t x195 = INT16_MAX;
	int32_t x196 = INT32_MIN;
	static volatile int64_t t48 = -3643229949LL;

	t48 = (x193^(x194==(x195==x196)));

	if (t48 != 4437257292482258615LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x197 = 6U;
	static uint8_t x198 = 3U;
	uint64_t x199 = 5273LLU;
	volatile uint32_t t49 = 49804U;

	t49 = (x197^(x198==(x199==x200)));

	if (t49 != 6U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 550U;
	volatile int8_t x202 = INT8_MIN;
	int32_t x203 = -1;
	int32_t x204 = 4290718;

	t50 = (x201^(x202==(x203==x204)));

	if (t50 != 550) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 7;
	int8_t x208 = INT8_MIN;
	int32_t t51 = -54346;

	t51 = (x205^(x206==(x207==x208)));

	if (t51 != 7) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	static uint8_t x210 = UINT8_MAX;
	int32_t x211 = INT32_MIN;
	int32_t t52 = -776010348;

	t52 = (x209^(x210==(x211==x212)));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	uint32_t x214 = 321887708U;
	int32_t x215 = -1;
	static volatile int32_t x216 = -1;
	volatile int32_t t53 = 4;

	t53 = (x213^(x214==(x215==x216)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 0U;
	int32_t x218 = 59;
	uint64_t x219 = 12038LLU;
	uint32_t x220 = UINT32_MAX;
	static volatile int32_t t54 = 1049798464;

	t54 = (x217^(x218==(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	static uint32_t t55 = UINT32_MAX;

	t55 = (x221^(x222==(x223==x224)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	volatile int64_t x226 = -1LL;
	int64_t x227 = -1LL;
	int16_t x228 = INT16_MIN;

	t56 = (x225^(x226==(x227==x228)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 2U;
	static int16_t x230 = INT16_MIN;
	volatile int32_t t57 = -225834;

	t57 = (x229^(x230==(x231==x232)));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MIN;
	volatile uint64_t x234 = UINT64_MAX;
	uint16_t x235 = 1029U;
	int64_t x236 = INT64_MAX;

	t58 = (x233^(x234==(x235==x236)));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = 770;
	int32_t x238 = INT32_MIN;
	uint64_t x239 = 148804997695LLU;
	int32_t x240 = 976167704;

	t59 = (x237^(x238==(x239==x240)));

	if (t59 != 770) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = -1;
	int32_t x242 = INT32_MIN;
	volatile int32_t x243 = INT32_MAX;
	volatile int32_t t60 = -1016793872;

	t60 = (x241^(x242==(x243==x244)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 1U;
	volatile int64_t x246 = INT64_MAX;
	uint8_t x247 = 1U;
	int64_t x248 = INT64_MIN;
	static int32_t t61 = -226863;

	t61 = (x245^(x246==(x247==x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	int16_t x250 = INT16_MAX;
	volatile uint16_t x251 = UINT16_MAX;
	volatile int64_t x252 = 17150850LL;
	static int64_t t62 = INT64_MAX;

	t62 = (x249^(x250==(x251==x252)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -6;
	uint32_t x254 = UINT32_MAX;
	volatile int64_t x255 = INT64_MAX;
	int16_t x256 = -6555;
	int32_t t63 = -122419878;

	t63 = (x253^(x254==(x255==x256)));

	if (t63 != -6) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	static uint32_t x258 = UINT32_MAX;
	static int64_t x259 = INT64_MAX;
	uint64_t x260 = 11780LLU;

	t64 = (x257^(x258==(x259==x260)));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	uint32_t x262 = 87152248U;
	uint32_t x264 = UINT32_MAX;
	int32_t t65 = 266635;

	t65 = (x261^(x262==(x263==x264)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	uint64_t x266 = 2949371753608266983LLU;
	int64_t x267 = -1LL;
	uint16_t x268 = 0U;

	t66 = (x265^(x266==(x267==x268)));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	uint16_t x271 = 68U;
	uint32_t x272 = UINT32_MAX;
	int32_t t67 = -9;

	t67 = (x269^(x270==(x271==x272)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	uint8_t x274 = 1U;
	static uint64_t x275 = 302LLU;
	int8_t x276 = 17;

	t68 = (x273^(x274==(x275==x276)));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 47440LL;
	uint64_t x278 = UINT64_MAX;
	int8_t x279 = -1;
	int8_t x280 = 5;
	volatile int64_t t69 = 1LL;

	t69 = (x277^(x278==(x279==x280)));

	if (t69 != 47440LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x281 = 7362393LLU;
	int32_t x283 = INT32_MIN;
	int32_t x284 = 564718894;
	static volatile uint64_t t70 = 1LLU;

	t70 = (x281^(x282==(x283==x284)));

	if (t70 != 7362393LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x286 = 999780733U;
	int16_t x287 = -1;
	static int32_t t71 = INT32_MAX;

	t71 = (x285^(x286==(x287==x288)));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	uint32_t x291 = 7247486U;
	uint16_t x292 = 538U;
	volatile int32_t t72 = 317582907;

	t72 = (x289^(x290==(x291==x292)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	volatile int32_t x294 = -1;
	volatile int64_t x295 = INT64_MIN;
	uint32_t x296 = 18427U;
	volatile int32_t t73 = 126676774;

	t73 = (x293^(x294==(x295==x296)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	static int64_t x298 = INT64_MAX;
	uint32_t x299 = 6717401U;
	static int8_t x300 = 0;
	volatile int32_t t74 = -116242;

	t74 = (x297^(x298==(x299==x300)));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 286711837760LLU;
	int16_t x303 = 2;
	volatile uint16_t x304 = 3588U;

	t75 = (x301^(x302==(x303==x304)));

	if (t75 != 286711837760LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -37;
	static int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MIN;
	volatile int32_t t76 = -31631989;

	t76 = (x305^(x306==(x307==x308)));

	if (t76 != -37) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	static int8_t x310 = INT8_MIN;
	static int8_t x311 = INT8_MAX;
	int32_t x312 = INT32_MAX;
	int32_t t77 = 11;

	t77 = (x309^(x310==(x311==x312)));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x313 = INT16_MIN;
	uint16_t x314 = 436U;
	volatile int64_t x315 = -324616990352143LL;
	volatile int32_t x316 = INT32_MAX;
	static volatile int32_t t78 = -2;

	t78 = (x313^(x314==(x315==x316)));

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = INT16_MAX;
	uint32_t x319 = UINT32_MAX;
	int16_t x320 = 199;
	volatile int64_t t79 = INT64_MIN;

	t79 = (x317^(x318==(x319==x320)));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	volatile int32_t x322 = 58140;
	int8_t x323 = -1;
	volatile int16_t x324 = INT16_MAX;
	volatile int32_t t80 = 4;

	t80 = (x321^(x322==(x323==x324)));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 3U;
	int16_t x327 = -3;
	int64_t x328 = INT64_MAX;
	static int32_t t81 = -903404;

	t81 = (x325^(x326==(x327==x328)));

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = 59;
	int32_t x331 = INT32_MAX;
	static volatile uint64_t t82 = 518354512763771432LLU;

	t82 = (x329^(x330==(x331==x332)));

	if (t82 != 189LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = -950;
	static int32_t x335 = -1;
	int8_t x336 = -2;
	volatile int32_t t83 = -516;

	t83 = (x333^(x334==(x335==x336)));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = -3LL;
	volatile int64_t x339 = -1LL;
	uint32_t x340 = 176962U;
	int64_t t84 = INT64_MIN;

	t84 = (x337^(x338==(x339==x340)));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x343 = INT16_MIN;
	volatile int8_t x344 = INT8_MIN;
	static int32_t t85 = INT32_MIN;

	t85 = (x341^(x342==(x343==x344)));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 116307359432427LL;
	int16_t x346 = INT16_MIN;
	static int8_t x347 = INT8_MAX;
	int32_t x348 = INT32_MIN;
	volatile int64_t t86 = 35471126097806559LL;

	t86 = (x345^(x346==(x347==x348)));

	if (t86 != 116307359432427LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = -1;
	int16_t x350 = INT16_MAX;
	int64_t x352 = 47481866517719472LL;
	volatile int32_t t87 = -450;

	t87 = (x349^(x350==(x351==x352)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = -192;
	int64_t x355 = INT64_MAX;
	int16_t x356 = -1;

	t88 = (x353^(x354==(x355==x356)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	int8_t x358 = INT8_MAX;
	static volatile int16_t x360 = -1;

	t89 = (x357^(x358==(x359==x360)));

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 1881U;
	int32_t x362 = 306975;
	int32_t x363 = INT32_MIN;
	volatile int32_t t90 = -1719;

	t90 = (x361^(x362==(x363==x364)));

	if (t90 != 1881) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = -1;
	volatile int32_t x366 = INT32_MAX;
	static int64_t x367 = -4295242368LL;
	int64_t x368 = -375LL;
	int32_t t91 = -4115147;

	t91 = (x365^(x366==(x367==x368)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = INT16_MIN;
	int8_t x371 = 0;
	volatile int16_t x372 = -1;
	int32_t t92 = 169150288;

	t92 = (x369^(x370==(x371==x372)));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = 47763;
	int8_t x374 = INT8_MAX;
	int64_t x376 = -1LL;
	volatile int32_t t93 = -219;

	t93 = (x373^(x374==(x375==x376)));

	if (t93 != 47763) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x378 = 19950U;
	uint16_t x380 = 767U;
	uint64_t t94 = 3369059690LLU;

	t94 = (x377^(x378==(x379==x380)));

	if (t94 != 767709701LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 1U;
	int16_t x382 = INT16_MIN;
	uint16_t x384 = 5494U;
	static volatile int32_t t95 = -60;

	t95 = (x381^(x382==(x383==x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	uint32_t x387 = 0U;
	int32_t x388 = INT32_MIN;
	static volatile uint64_t t96 = UINT64_MAX;

	t96 = (x385^(x386==(x387==x388)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -13;
	static uint16_t x390 = UINT16_MAX;
	int32_t x391 = INT32_MIN;
	static int32_t x392 = -16;
	volatile int32_t t97 = -8325016;

	t97 = (x389^(x390==(x391==x392)));

	if (t97 != -13) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	uint64_t x395 = UINT64_MAX;
	volatile int32_t t98 = -7845;

	t98 = (x393^(x394==(x395==x396)));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x398 = INT8_MAX;
	int64_t x400 = -41302511843687LL;
	int64_t t99 = 25997LL;

	t99 = (x397^(x398==(x399==x400)));

	if (t99 != 65076LL) { NG(); } else { ; }
	
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

