#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 496;
volatile int8_t x3 = 0;
static int8_t x8 = -3;
static int32_t x10 = INT32_MAX;
static int64_t x21 = INT64_MAX;
int8_t x22 = INT8_MAX;
volatile int32_t t5 = -2577;
uint8_t x39 = 1U;
uint32_t t8 = 21U;
static volatile int64_t t9 = 216561LL;
uint32_t x51 = 11U;
uint8_t x53 = UINT8_MAX;
int16_t x54 = -1;
static volatile int16_t x56 = INT16_MAX;
volatile int32_t t12 = 173660819;
static int16_t x59 = 10390;
volatile int8_t x62 = 1;
uint32_t x66 = UINT32_MAX;
int16_t x67 = -1;
int8_t x72 = INT8_MIN;
static uint8_t x74 = 109U;
int64_t x75 = -1LL;
int64_t x76 = -146LL;
static int8_t x83 = INT8_MAX;
static volatile uint16_t x89 = UINT16_MAX;
int32_t x93 = -1;
uint64_t x94 = 7812LLU;
volatile int64_t t22 = -48598LL;
volatile int16_t x108 = INT16_MIN;
volatile int64_t t26 = 15674768LL;
uint8_t x131 = 29U;
int8_t x137 = INT8_MAX;
int16_t x157 = INT16_MIN;
uint32_t x158 = UINT32_MAX;
volatile int16_t x159 = -25;
volatile uint32_t t32 = 427261538U;
static int8_t x181 = -1;
int32_t x185 = 1716;
int8_t x193 = -1;
volatile uint64_t x197 = UINT64_MAX;
uint64_t t38 = 48189599292302LLU;
volatile uint32_t t41 = 2U;
volatile int64_t t42 = 1977LL;
static volatile uint64_t x223 = UINT64_MAX;
int32_t x230 = 4;
int32_t x231 = INT32_MIN;
int64_t t44 = 10859961219920LL;
volatile int8_t x243 = -1;
volatile uint64_t t50 = 118752854LLU;
uint8_t x273 = 63U;
uint64_t t51 = 882LLU;
volatile int64_t x285 = INT64_MIN;
uint8_t x287 = 92U;
int16_t x302 = 1;
uint64_t t57 = 35630LLU;
uint32_t x311 = 26498644U;
static int8_t x313 = INT8_MIN;
uint64_t x316 = 3094712631389LLU;
int32_t x319 = INT32_MIN;
volatile uint8_t x330 = UINT8_MAX;
int16_t x341 = -15;
int64_t x342 = INT64_MIN;
volatile int64_t t65 = 5318221906672LL;
int16_t x345 = INT16_MIN;
static int32_t x346 = INT32_MIN;
static volatile int64_t x347 = -252527LL;
volatile int64_t t66 = 1LL;
int8_t x353 = INT8_MIN;
static uint8_t x371 = UINT8_MAX;
int32_t x378 = INT32_MAX;
volatile int32_t x389 = 2;
static int16_t x391 = INT16_MIN;
int8_t x409 = 22;
static uint16_t x413 = 8U;
uint64_t x420 = 302704338LLU;
volatile uint64_t t77 = 1566LLU;
int16_t x423 = INT16_MIN;
uint8_t x424 = 0U;
uint64_t x426 = UINT64_MAX;
int8_t x432 = 1;
volatile uint32_t t81 = 1745143683U;
static uint64_t x444 = 20520854386912LLU;
static volatile uint32_t t83 = 53U;
uint16_t x450 = 1548U;
int8_t x451 = INT8_MIN;
volatile int32_t t84 = 260235799;
int64_t t85 = -5558399949338LL;
uint16_t x464 = UINT16_MAX;
volatile uint64_t t87 = 359099654605607436LLU;
uint32_t x470 = UINT32_MAX;
static int32_t x475 = -1;
volatile uint64_t t91 = 15727841720347LLU;
static int32_t t92 = 3;
uint32_t x485 = 13456U;
static volatile int16_t x486 = INT16_MAX;
int8_t x489 = 2;
int16_t x495 = -1;
volatile uint64_t t96 = 393LLU;
volatile int8_t x501 = -28;
uint32_t x504 = 17U;


void f0(void) {
	uint32_t x1 = 119U;
	int8_t x4 = INT8_MIN;
	volatile uint32_t t0 = 24654U;

	t0 = (((x1%x2)*x3)*x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -5220LL;
	int8_t x6 = INT8_MIN;
	volatile int8_t x7 = INT8_MIN;
	static volatile int64_t t1 = -138527509LL;

	t1 = (((x5%x6)*x7)*x8);

	if (t1 != -38400LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int8_t x11 = INT8_MAX;
	int16_t x12 = INT16_MIN;
	static volatile int64_t t2 = -212814088501LL;

	t2 = (((x9%x10)*x11)*x12);

	if (t2 != 8323072LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = -1;
	int64_t x18 = INT64_MAX;
	static int32_t x19 = -1;
	int8_t x20 = -54;
	static volatile int64_t t3 = -264696520LL;

	t3 = (((x17%x18)*x19)*x20);

	if (t3 != -54LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x23 = -4962;
	int64_t x24 = 185718992928LL;
	static int64_t t4 = -14633834897LL;

	t4 = (((x21%x22)*x23)*x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x25 = 0U;
	int8_t x26 = 17;
	uint8_t x27 = UINT8_MAX;
	int8_t x28 = -1;

	t5 = (((x25%x26)*x27)*x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	int8_t x30 = INT8_MIN;
	int32_t x31 = INT32_MAX;
	static int64_t x32 = 1073739120376LL;
	volatile int64_t t6 = -10998210176LL;

	t6 = (((x29%x30)*x31)*x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = INT16_MAX;
	int64_t x34 = 39844LL;
	int64_t x35 = 373936886146LL;
	int16_t x36 = -1;
	volatile int64_t t7 = 60LL;

	t7 = (((x33%x34)*x35)*x36);

	if (t7 != -12252789948345982LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 3134204U;
	int8_t x38 = INT8_MIN;
	volatile int32_t x40 = INT32_MAX;

	t8 = (((x37%x38)*x39)*x40);

	if (t8 != 4291833092U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	volatile int32_t x42 = INT32_MIN;
	int8_t x43 = INT8_MIN;
	int16_t x44 = INT16_MIN;

	t9 = (((x41%x42)*x43)*x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	uint8_t x46 = UINT8_MAX;
	int64_t x47 = INT64_MAX;
	int16_t x48 = 1;
	uint64_t t10 = 30938847LLU;

	t10 = (((x45%x46)*x47)*x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x49 = INT8_MAX;
	int16_t x50 = 1737;
	int32_t x52 = INT32_MIN;
	uint32_t t11 = 929729U;

	t11 = (((x49%x50)*x51)*x52);

	if (t11 != 2147483648U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x55 = -1;

	t12 = (((x53%x54)*x55)*x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -1;
	uint64_t x58 = 2414530062378180LLU;
	int64_t x60 = -1LL;
	uint64_t t13 = 7967361307950LLU;

	t13 = (((x57%x58)*x59)*x60);

	if (t13 != 14566134512045661182LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = UINT16_MAX;
	uint8_t x63 = 68U;
	static uint64_t x64 = UINT64_MAX;
	uint64_t t14 = 1049025014962660979LLU;

	t14 = (((x61%x62)*x63)*x64);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	uint64_t x68 = 3LLU;
	static volatile uint64_t t15 = 1518LLU;

	t15 = (((x65%x66)*x67)*x68);

	if (t15 != 98304LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = -643;
	int8_t x70 = INT8_MAX;
	static volatile int64_t x71 = -1LL;
	int64_t t16 = -1LL;

	t16 = (((x69%x70)*x71)*x72);

	if (t16 != -1024LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x73 = INT64_MIN;
	volatile int64_t t17 = -28487770234574LL;

	t17 = (((x73%x74)*x75)*x76);

	if (t17 != -4818LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x77 = 96667493673LLU;
	int16_t x78 = INT16_MIN;
	int32_t x79 = 132679;
	int64_t x80 = 8617LL;
	volatile uint64_t t18 = 4053046768428844LLU;

	t18 = (((x77%x78)*x79)*x80);

	if (t18 != 18285736300277637559LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -5;
	int16_t x82 = -1;
	static int8_t x84 = INT8_MIN;
	volatile int32_t t19 = 10458;

	t19 = (((x81%x82)*x83)*x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x90 = INT8_MAX;
	static volatile int8_t x91 = -2;
	static int64_t x92 = -1LL;
	volatile int64_t t20 = -11LL;

	t20 = (((x89%x90)*x91)*x92);

	if (t20 != 6LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x95 = -1;
	int64_t x96 = 8057511375LL;
	static volatile uint64_t t21 = 382249539552361LLU;

	t21 = (((x93%x94)*x95)*x96);

	if (t21 != 18446743952846880991LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x101 = -1LL;
	volatile int32_t x102 = INT32_MIN;
	int32_t x103 = 1277;
	volatile int8_t x104 = INT8_MIN;

	t22 = (((x101%x102)*x103)*x104);

	if (t22 != 163456LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	volatile int16_t x106 = INT16_MIN;
	int64_t x107 = INT64_MIN;
	int64_t t23 = 3386LL;

	t23 = (((x105%x106)*x107)*x108);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x117 = 620U;
	int16_t x118 = INT16_MIN;
	volatile uint16_t x119 = 4417U;
	int16_t x120 = -1;
	int32_t t24 = -751;

	t24 = (((x117%x118)*x119)*x120);

	if (t24 != -2738540) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = INT8_MIN;
	uint64_t x122 = 86272LLU;
	int16_t x123 = -1;
	uint8_t x124 = UINT8_MAX;
	volatile uint64_t t25 = 702885101LLU;

	t25 = (((x121%x122)*x123)*x124);

	if (t25 != 18446744073696006016LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x125 = INT64_MIN;
	static int64_t x126 = -1LL;
	int32_t x127 = -1;
	uint32_t x128 = 4U;

	t26 = (((x125%x126)*x127)*x128);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = INT32_MIN;
	volatile uint32_t x130 = 1835283U;
	static uint8_t x132 = 83U;
	volatile uint32_t t27 = 134227945U;

	t27 = (((x129%x130)*x131)*x132);

	if (t27 != 487508966U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x138 = -8361121452396684LL;
	int32_t x139 = INT32_MIN;
	int16_t x140 = INT16_MAX;
	int64_t t28 = -91002193660LL;

	t28 = (((x137%x138)*x139)*x140);

	if (t28 != -8936557780140032LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x141 = INT64_MAX;
	volatile uint8_t x142 = 65U;
	static uint16_t x143 = UINT16_MAX;
	uint64_t x144 = UINT64_MAX;
	uint64_t t29 = 3LLU;

	t29 = (((x141%x142)*x143)*x144);

	if (t29 != 18446744073709092871LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x149 = UINT64_MAX;
	int16_t x150 = INT16_MIN;
	volatile uint64_t x151 = 56814169104LLU;
	volatile int8_t x152 = INT8_MIN;
	static volatile uint64_t t30 = 1152411876419174LLU;

	t30 = (((x149%x150)*x151)*x152);

	if (t30 != 18208455449193613312LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x153 = UINT64_MAX;
	static volatile int16_t x154 = 2;
	int8_t x155 = 3;
	int16_t x156 = INT16_MAX;
	uint64_t t31 = 7138LLU;

	t31 = (((x153%x154)*x155)*x156);

	if (t31 != 98301LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x160 = 1U;

	t32 = (((x157%x158)*x159)*x160);

	if (t32 != 819200U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x165 = INT64_MIN;
	uint8_t x166 = UINT8_MAX;
	static int16_t x167 = INT16_MIN;
	int16_t x168 = 1;
	int64_t t33 = 25723011313511397LL;

	t33 = (((x165%x166)*x167)*x168);

	if (t33 != 4194304LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x169 = INT32_MAX;
	volatile uint8_t x170 = UINT8_MAX;
	static int8_t x171 = -1;
	int64_t x172 = -45030LL;
	int64_t t34 = 1648883088LL;

	t34 = (((x169%x170)*x171)*x172);

	if (t34 != 5718810LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x182 = UINT64_MAX;
	static int16_t x183 = -1;
	int16_t x184 = INT16_MAX;
	uint64_t t35 = 8033LLU;

	t35 = (((x181%x182)*x183)*x184);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x186 = 7028U;
	volatile uint8_t x187 = 1U;
	int16_t x188 = INT16_MAX;
	int32_t t36 = -3571;

	t36 = (((x185%x186)*x187)*x188);

	if (t36 != 56228172) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x194 = INT8_MIN;
	int32_t x195 = -1;
	uint32_t x196 = 63547158U;
	uint32_t t37 = 288U;

	t37 = (((x193%x194)*x195)*x196);

	if (t37 != 63547158U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x198 = INT32_MIN;
	volatile int32_t x199 = -17604;
	static int64_t x200 = -1LL;

	t38 = (((x197%x198)*x199)*x200);

	if (t38 != 37804302121788LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MIN;
	int64_t x203 = -32041362860LL;
	int64_t x204 = INT64_MIN;
	int64_t t39 = 3912LL;

	t39 = (((x201%x202)*x203)*x204);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x209 = UINT16_MAX;
	int8_t x210 = INT8_MAX;
	int8_t x211 = INT8_MAX;
	static volatile int8_t x212 = 0;
	volatile int32_t t40 = -289850;

	t40 = (((x209%x210)*x211)*x212);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x213 = UINT8_MAX;
	static uint32_t x214 = 3079969U;
	volatile int8_t x215 = INT8_MIN;
	volatile uint32_t x216 = UINT32_MAX;

	t41 = (((x213%x214)*x215)*x216);

	if (t41 != 32640U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x217 = -1LL;
	static int8_t x218 = INT8_MIN;
	volatile int16_t x219 = -9562;
	uint8_t x220 = 99U;

	t42 = (((x217%x218)*x219)*x220);

	if (t42 != 946638LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x221 = 3479U;
	static int16_t x222 = INT16_MIN;
	static int64_t x224 = -1LL;
	volatile uint64_t t43 = 73225LLU;

	t43 = (((x221%x222)*x223)*x224);

	if (t43 != 3479LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x229 = INT64_MIN;
	int8_t x232 = INT8_MAX;

	t44 = (((x229%x230)*x231)*x232);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x237 = 246004699U;
	uint64_t x238 = UINT64_MAX;
	volatile uint16_t x239 = 129U;
	int64_t x240 = INT64_MIN;
	static volatile uint64_t t45 = 6558450LLU;

	t45 = (((x237%x238)*x239)*x240);

	if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x241 = 1;
	uint8_t x242 = 1U;
	int64_t x244 = INT64_MAX;
	int64_t t46 = 226LL;

	t46 = (((x241%x242)*x243)*x244);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MIN;
	static int32_t x255 = -1;
	uint8_t x256 = 83U;
	int32_t t47 = 104;

	t47 = (((x253%x254)*x255)*x256);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x257 = 1LLU;
	static int8_t x258 = INT8_MIN;
	int16_t x259 = 11899;
	int8_t x260 = 8;
	static volatile uint64_t t48 = 1033473341195684100LLU;

	t48 = (((x257%x258)*x259)*x260);

	if (t48 != 95192LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x265 = UINT32_MAX;
	volatile uint32_t x266 = 207485341U;
	static int16_t x267 = INT16_MAX;
	int8_t x268 = -1;
	uint32_t t49 = 1490667U;

	t49 = (((x265%x266)*x267)*x268);

	if (t49 != 3368746939U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x269 = UINT64_MAX;
	uint8_t x270 = 107U;
	uint8_t x271 = 39U;
	int64_t x272 = -229LL;

	t50 = (((x269%x270)*x271)*x272);

	if (t50 != 18446744073708738895LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x274 = 3146185459LLU;
	uint8_t x275 = 0U;
	uint8_t x276 = 24U;

	t51 = (((x273%x274)*x275)*x276);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x277 = 3158;
	static uint64_t x278 = 1889LLU;
	int64_t x279 = INT64_MIN;
	int8_t x280 = INT8_MIN;
	uint64_t t52 = 15729766784931995LLU;

	t52 = (((x277%x278)*x279)*x280);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x281 = INT8_MAX;
	int64_t x282 = INT64_MIN;
	int64_t x283 = -18454696LL;
	uint16_t x284 = 375U;
	int64_t t53 = -39395LL;

	t53 = (((x281%x282)*x283)*x284);

	if (t53 != -878904897000LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x286 = -1LL;
	int32_t x288 = 0;
	volatile int64_t t54 = 31381598080LL;

	t54 = (((x285%x286)*x287)*x288);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x289 = 1;
	uint8_t x290 = UINT8_MAX;
	volatile uint8_t x291 = UINT8_MAX;
	static uint8_t x292 = 87U;
	volatile int32_t t55 = -1203488;

	t55 = (((x289%x290)*x291)*x292);

	if (t55 != 22185) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x297 = INT64_MIN;
	static uint16_t x298 = 3U;
	int16_t x299 = -1;
	int32_t x300 = -1;
	volatile int64_t t56 = 358LL;

	t56 = (((x297%x298)*x299)*x300);

	if (t56 != -2LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x301 = 1050442788243742360LLU;
	static volatile int64_t x303 = INT64_MIN;
	uint64_t x304 = UINT64_MAX;

	t57 = (((x301%x302)*x303)*x304);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x305 = UINT32_MAX;
	static int8_t x306 = INT8_MAX;
	int32_t x307 = 861607640;
	volatile uint8_t x308 = 0U;
	static uint32_t t58 = 1261973565U;

	t58 = (((x305%x306)*x307)*x308);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = 4074183LL;
	int32_t x312 = INT32_MIN;
	int64_t t59 = -7918872LL;

	t59 = (((x309%x310)*x311)*x312);

	if (t59 != 7283891799574183936LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x314 = 2359U;
	int16_t x315 = INT16_MIN;
	volatile uint64_t t60 = 282158551773992436LLU;

	t60 = (((x313%x314)*x315)*x316);

	if (t60 != 12980165568685408256LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x317 = INT16_MIN;
	int8_t x318 = INT8_MIN;
	int16_t x320 = 2;
	static volatile int32_t t61 = -1;

	t61 = (((x317%x318)*x319)*x320);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x321 = UINT8_MAX;
	volatile int32_t x322 = INT32_MIN;
	uint16_t x323 = UINT16_MAX;
	uint32_t x324 = 43569U;
	volatile uint32_t t62 = 443082192U;

	t62 = (((x321%x322)*x323)*x324);

	if (t62 != 2250602801U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x329 = 2U;
	static int16_t x331 = -170;
	volatile uint16_t x332 = 5U;
	int32_t t63 = 1382;

	t63 = (((x329%x330)*x331)*x332);

	if (t63 != -1700) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x333 = 47U;
	static int64_t x334 = INT64_MIN;
	volatile int8_t x335 = 10;
	int16_t x336 = -199;
	int64_t t64 = -30363LL;

	t64 = (((x333%x334)*x335)*x336);

	if (t64 != -93530LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x343 = 12U;
	int32_t x344 = -1;

	t65 = (((x341%x342)*x343)*x344);

	if (t65 != 180LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x348 = 10660U;

	t66 = (((x345%x346)*x347)*x348);

	if (t66 != 88209418485760LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x354 = UINT64_MAX;
	volatile int8_t x355 = INT8_MAX;
	int8_t x356 = -1;
	volatile uint64_t t67 = 853198075LLU;

	t67 = (((x353%x354)*x355)*x356);

	if (t67 != 16256LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x361 = INT8_MIN;
	uint8_t x362 = UINT8_MAX;
	int16_t x363 = 1;
	static int16_t x364 = INT16_MAX;
	int32_t t68 = -1;

	t68 = (((x361%x362)*x363)*x364);

	if (t68 != -4194176) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x369 = INT8_MIN;
	uint8_t x370 = 8U;
	static int8_t x372 = -1;
	volatile int32_t t69 = 28064554;

	t69 = (((x369%x370)*x371)*x372);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x373 = -1;
	int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MAX;
	uint32_t x376 = 23888969U;
	static volatile uint32_t t70 = 20565045U;

	t70 = (((x373%x374)*x375)*x376);

	if (t70 != 3209167945U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x377 = INT32_MAX;
	int32_t x379 = -649745129;
	int16_t x380 = INT16_MIN;
	volatile int32_t t71 = -24;

	t71 = (((x377%x378)*x379)*x380);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x381 = 657LLU;
	uint32_t x382 = UINT32_MAX;
	uint64_t x383 = UINT64_MAX;
	static int8_t x384 = INT8_MAX;
	static volatile uint64_t t72 = 13718048994050334LLU;

	t72 = (((x381%x382)*x383)*x384);

	if (t72 != 18446744073709468177LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x390 = -5;
	static uint16_t x392 = 20U;
	int32_t t73 = 4260;

	t73 = (((x389%x390)*x391)*x392);

	if (t73 != -1310720) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x393 = UINT32_MAX;
	uint32_t x394 = 40151366U;
	int32_t x395 = INT32_MIN;
	static int16_t x396 = -1;
	uint32_t t74 = 935460399U;

	t74 = (((x393%x394)*x395)*x396);

	if (t74 != 2147483648U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x410 = UINT64_MAX;
	volatile int32_t x411 = -68;
	int16_t x412 = -131;
	uint64_t t75 = 290289562LLU;

	t75 = (((x409%x410)*x411)*x412);

	if (t75 != 195976LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x414 = INT64_MIN;
	static int8_t x415 = -1;
	int8_t x416 = INT8_MIN;
	int64_t t76 = -16LL;

	t76 = (((x413%x414)*x415)*x416);

	if (t76 != 1024LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x417 = -134411;
	uint64_t x418 = 43202231462185192LLU;
	int32_t x419 = -40912447;

	t77 = (((x417%x418)*x419)*x420);

	if (t77 != 9021933943336314714LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x421 = -1LL;
	static int32_t x422 = INT32_MIN;
	static volatile int64_t t78 = -14578473590863LL;

	t78 = (((x421%x422)*x423)*x424);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x425 = UINT32_MAX;
	volatile int64_t x427 = -1LL;
	uint16_t x428 = 6495U;
	uint64_t t79 = 230195204892779LLU;

	t79 = (((x425%x426)*x427)*x428);

	if (t79 != 18446716177896970591LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x429 = 750970434;
	static volatile uint8_t x430 = 7U;
	uint16_t x431 = UINT16_MAX;
	volatile int32_t t80 = -22;

	t80 = (((x429%x430)*x431)*x432);

	if (t80 != 262140) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x437 = INT8_MIN;
	int32_t x438 = INT32_MAX;
	uint32_t x439 = UINT32_MAX;
	uint8_t x440 = 6U;

	t81 = (((x437%x438)*x439)*x440);

	if (t81 != 768U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x441 = INT8_MAX;
	int16_t x442 = -4;
	int16_t x443 = INT16_MIN;
	static uint64_t t82 = 65073LLU;

	t82 = (((x441%x442)*x443)*x444);

	if (t82 != 16429462004058554368LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x445 = 41U;
	static int32_t x446 = -36;
	static uint32_t x447 = 19674U;
	volatile int32_t x448 = INT32_MAX;

	t83 = (((x445%x446)*x447)*x448);

	if (t83 != 4294868926U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x449 = INT8_MIN;
	volatile int8_t x452 = -1;

	t84 = (((x449%x450)*x451)*x452);

	if (t84 != -16384) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x453 = INT64_MAX;
	int8_t x454 = -16;
	int64_t x455 = -1LL;
	int8_t x456 = 15;

	t85 = (((x453%x454)*x455)*x456);

	if (t85 != -225LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x457 = 3743522U;
	uint16_t x458 = UINT16_MAX;
	int32_t x459 = -1;
	uint32_t x460 = 14U;
	uint32_t t86 = 103804U;

	t86 = (((x457%x458)*x459)*x460);

	if (t86 != 4294854918U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x461 = INT16_MAX;
	uint64_t x462 = UINT64_MAX;
	static int8_t x463 = -1;

	t87 = (((x461%x462)*x463)*x464);

	if (t87 != 18446744071562166271LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x465 = UINT8_MAX;
	static int64_t x466 = -355LL;
	int32_t x467 = -1;
	uint32_t x468 = 6737416U;
	volatile int64_t t88 = 1727LL;

	t88 = (((x465%x466)*x467)*x468);

	if (t88 != -1718041080LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x469 = INT32_MIN;
	volatile int8_t x471 = 1;
	int32_t x472 = INT32_MAX;
	static volatile uint32_t t89 = 39558102U;

	t89 = (((x469%x470)*x471)*x472);

	if (t89 != 2147483648U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x473 = UINT8_MAX;
	static uint8_t x474 = 3U;
	static volatile uint16_t x476 = 1659U;
	static int32_t t90 = -1039720;

	t90 = (((x473%x474)*x475)*x476);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x477 = -1;
	volatile uint64_t x478 = UINT64_MAX;
	uint8_t x479 = 49U;
	volatile int32_t x480 = INT32_MIN;

	t91 = (((x477%x478)*x479)*x480);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x481 = 987965973;
	volatile int8_t x482 = -1;
	int32_t x483 = INT32_MIN;
	int32_t x484 = -1216834;

	t92 = (((x481%x482)*x483)*x484);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x487 = 7U;
	int32_t x488 = INT32_MIN;
	uint32_t t93 = 33U;

	t93 = (((x485%x486)*x487)*x488);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x490 = 523262792;
	static int32_t x491 = -1;
	volatile int8_t x492 = 34;
	int32_t t94 = 0;

	t94 = (((x489%x490)*x491)*x492);

	if (t94 != -68) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x493 = 1;
	volatile int8_t x494 = INT8_MAX;
	static int64_t x496 = INT64_MAX;
	static volatile int64_t t95 = 27216LL;

	t95 = (((x493%x494)*x495)*x496);

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x497 = 330652077726525836LLU;
	int64_t x498 = INT64_MAX;
	int32_t x499 = -1;
	static int16_t x500 = -1;

	t96 = (((x497%x498)*x499)*x500);

	if (t96 != 330652077726525836LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x502 = -132202LL;
	uint64_t x503 = 2654244LLU;
	volatile uint64_t t97 = 3540847524LLU;

	t97 = (((x501%x502)*x503)*x504);

	if (t97 != 18446744072446131472LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x505 = 1053500907;
	int64_t x506 = 3LL;
	volatile uint8_t x507 = UINT8_MAX;
	volatile int64_t x508 = INT64_MAX;
	int64_t t98 = 15725147434884LL;

	t98 = (((x505%x506)*x507)*x508);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x509 = -1;
	volatile int64_t x510 = -1LL;
	int8_t x511 = INT8_MAX;
	int32_t x512 = INT32_MAX;
	static int64_t t99 = -685574957525296LL;

	t99 = (((x509%x510)*x511)*x512);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

