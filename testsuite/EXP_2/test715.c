#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x8 = UINT8_MAX;
uint32_t x28 = 15U;
volatile uint8_t x34 = 48U;
int8_t x36 = INT8_MAX;
int32_t t5 = -8386;
volatile int32_t x40 = 539;
volatile uint16_t x43 = 454U;
static volatile uint8_t x44 = UINT8_MAX;
int16_t x46 = -1;
volatile int8_t x47 = -1;
volatile int32_t t8 = -20507329;
int64_t x52 = -38147911LL;
volatile uint32_t t10 = 1347614U;
static int16_t x65 = -4242;
volatile int32_t x67 = INT32_MAX;
int8_t x69 = INT8_MIN;
uint64_t t14 = 74LLU;
static int8_t x74 = -1;
int32_t x75 = INT32_MIN;
uint64_t t16 = 34142182377LLU;
volatile int64_t x82 = 1104LL;
int64_t t17 = -9290512941LL;
uint32_t t19 = 237U;
uint16_t x104 = UINT16_MAX;
static uint8_t x105 = 1U;
uint32_t t22 = 4064864U;
int8_t x115 = INT8_MAX;
uint64_t x119 = 198623588LLU;
static volatile int8_t x120 = -1;
int8_t x125 = INT8_MIN;
static uint64_t x128 = 343000695859638384LLU;
static int8_t x129 = INT8_MIN;
uint32_t x130 = 11620364U;
uint64_t x131 = 3098577831205LLU;
static uint64_t x134 = 32LLU;
volatile int32_t x138 = INT32_MIN;
int32_t x141 = INT32_MIN;
int32_t x143 = INT32_MIN;
static int64_t t32 = -2952591344195LL;
volatile int8_t x149 = -2;
uint64_t t33 = 114707493LLU;
uint16_t x153 = 5837U;
volatile int8_t x154 = -1;
volatile uint32_t t34 = 6363933U;
static volatile uint16_t x157 = 83U;
static uint32_t x161 = 2U;
volatile uint64_t t36 = 430158LLU;
uint16_t x170 = 15U;
int32_t x171 = INT32_MIN;
static int64_t x175 = INT64_MAX;
int8_t x176 = -1;
static uint8_t x178 = 1U;
uint32_t x179 = UINT32_MAX;
uint16_t x183 = UINT16_MAX;
static int16_t x185 = -2;
static int32_t t41 = -1974;
volatile int8_t x195 = INT8_MIN;
static int8_t x211 = INT8_MAX;
int32_t t46 = -3557;
uint16_t x214 = 8449U;
volatile int32_t t47 = -3908499;
int8_t x227 = 10;
static int64_t t50 = 9445LL;
uint8_t x238 = 6U;
uint16_t x241 = 3216U;
uint8_t x243 = 55U;
volatile int64_t x247 = INT64_MAX;
int8_t x251 = -1;
uint64_t t55 = 87828518898572LLU;
uint8_t x255 = 7U;
uint64_t x258 = UINT64_MAX;
static int32_t x260 = INT32_MIN;
int32_t x265 = 2;
int64_t t59 = -505624891707136LL;
static int64_t t62 = 785718421667LL;
int16_t x289 = INT16_MAX;
static volatile int64_t t63 = -2044779LL;
int8_t x297 = INT8_MIN;
uint64_t t65 = 2532583614293LLU;
volatile int32_t t66 = -51243628;
int32_t x307 = -1;
uint64_t x309 = 7359084LLU;
uint8_t x311 = UINT8_MAX;
int64_t x312 = INT64_MAX;
int16_t x316 = INT16_MAX;
volatile uint64_t t69 = 9013349LLU;
volatile uint32_t x323 = UINT32_MAX;
int16_t x327 = INT16_MAX;
static int8_t x329 = -1;
volatile int64_t t74 = -474980500922260744LL;
int16_t x340 = -57;
uint32_t x358 = 382814004U;
uint32_t t79 = 47695251U;
volatile uint32_t x366 = UINT32_MAX;
uint8_t x368 = UINT8_MAX;
volatile int64_t t81 = 665562262779LL;
uint64_t t82 = 126LLU;
uint16_t x379 = 3609U;
int8_t x384 = 1;
static volatile int32_t t86 = -120;
uint64_t x404 = 12525160147742LLU;
uint64_t t91 = 131452610386679LLU;
uint64_t t92 = 273470806992780037LLU;
uint16_t x424 = 3705U;
uint16_t x426 = 3018U;
uint16_t x428 = UINT16_MAX;
static int16_t x431 = INT16_MIN;
volatile int8_t x432 = 1;
int64_t x438 = INT64_MIN;
int32_t x440 = 59;
volatile uint64_t t97 = 50174LLU;
volatile uint32_t x443 = 145U;


void f0(void) {
	int8_t x5 = INT8_MIN;
	volatile uint32_t x6 = 87650U;
	int64_t x7 = INT64_MIN;
	int64_t t0 = 1604656119394LL;

	t0 = ((x5*(x6%x7))^x8);

	if (t0 != -11218945LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = -1LL;
	int32_t x14 = -19058;
	volatile int32_t x15 = INT32_MIN;
	static int32_t x16 = -1;
	int64_t t1 = 115711579LL;

	t1 = ((x13*(x14%x15))^x16);

	if (t1 != -19059LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MIN;
	int8_t x18 = INT8_MIN;
	volatile int16_t x19 = -14;
	volatile int8_t x20 = INT8_MAX;
	volatile int32_t t2 = -38793969;

	t2 = ((x17*(x18%x19))^x20);

	if (t2 != 383) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = -7736905259518163LL;
	uint64_t x23 = UINT64_MAX;
	uint32_t x24 = UINT32_MAX;
	volatile uint64_t t3 = 59922LLU;

	t3 = ((x21*(x22%x23))^x24);

	if (t3 != 13715238583371464703LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x25 = -1;
	uint32_t x26 = 4097U;
	static int16_t x27 = 1;
	volatile uint32_t t4 = 8691U;

	t4 = ((x25*(x26%x27))^x28);

	if (t4 != 15U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x33 = -36;
	static int16_t x35 = INT16_MIN;

	t5 = ((x33*(x34%x35))^x36);

	if (t5 != -1729) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = 27;
	int8_t x38 = INT8_MIN;
	int16_t x39 = INT16_MAX;
	volatile int32_t t6 = 0;

	t6 = ((x37*(x38%x39))^x40);

	if (t6 != -3941) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = 3226612U;
	uint32_t x42 = UINT32_MAX;
	uint32_t t7 = 696500U;

	t7 = ((x41*(x42%x43))^x44);

	if (t7 != 564656947U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x45 = -7;
	int16_t x48 = INT16_MIN;

	t8 = ((x45*(x46%x47))^x48);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x49 = INT8_MAX;
	volatile int16_t x50 = INT16_MIN;
	uint64_t x51 = 13753343111684052LLU;
	static uint64_t t9 = 10318943LLU;

	t9 = ((x49*(x50%x51))^x52);

	if (t9 != 18000852034138627901LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MAX;
	static uint32_t x54 = 3U;
	volatile int32_t x55 = INT32_MIN;
	uint32_t x56 = 0U;

	t10 = ((x53*(x54%x55))^x56);

	if (t10 != 381U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x57 = -23603247106236LL;
	volatile int64_t x58 = -7LL;
	int32_t x59 = INT32_MIN;
	volatile int16_t x60 = -1;
	int64_t t11 = -71756522835LL;

	t11 = ((x57*(x58%x59))^x60);

	if (t11 != -165222729743653LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x61 = INT8_MAX;
	volatile int8_t x62 = 4;
	int16_t x63 = -6;
	volatile int32_t x64 = INT32_MIN;
	int32_t t12 = -105040417;

	t12 = ((x61*(x62%x63))^x64);

	if (t12 != -2147483140) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x66 = UINT8_MAX;
	int32_t x68 = 6307;
	volatile int32_t t13 = -218124;

	t13 = ((x65*(x66%x67))^x68);

	if (t13 != -1087951) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x70 = 20454420270166843LL;
	volatile uint32_t x71 = 13238U;
	static volatile uint64_t x72 = UINT64_MAX;

	t14 = ((x69*(x70%x71))^x72);

	if (t14 != 1034367LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x73 = 0;
	uint64_t x76 = 895961128657157110LLU;
	static uint64_t t15 = 1LLU;

	t15 = ((x73*(x74%x75))^x76);

	if (t15 != 895961128657157110LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = INT8_MIN;
	int64_t x78 = 8063LL;
	volatile uint64_t x79 = UINT64_MAX;
	int64_t x80 = INT64_MIN;

	t16 = ((x77*(x78%x79))^x80);

	if (t16 != 9223372036853743744LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MAX;
	int16_t x83 = INT16_MIN;
	int64_t x84 = -56752614014801477LL;

	t17 = ((x81*(x82%x83))^x84);

	if (t17 != -56754678604672501LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x85 = INT16_MIN;
	static int8_t x86 = INT8_MAX;
	volatile int32_t x87 = -1;
	volatile int16_t x88 = -1;
	int32_t t18 = 14358;

	t18 = ((x85*(x86%x87))^x88);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = -1;
	uint8_t x90 = UINT8_MAX;
	uint32_t x91 = 6950571U;
	int8_t x92 = -2;

	t19 = ((x89*(x90%x91))^x92);

	if (t19 != 255U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x97 = INT16_MIN;
	int16_t x98 = -13593;
	volatile int16_t x99 = 6802;
	static uint64_t x100 = 67518788892816LLU;
	static uint64_t t20 = 344LLU;

	t20 = ((x97*(x98%x99))^x100);

	if (t20 != 67518969346192LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x101 = -1;
	int32_t x102 = -357059816;
	uint16_t x103 = 37U;
	volatile int32_t t21 = 813191241;

	t21 = ((x101*(x102%x103))^x104);

	if (t21 != 65524) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x106 = 1U;
	uint8_t x107 = UINT8_MAX;
	static int16_t x108 = INT16_MIN;

	t22 = ((x105*(x106%x107))^x108);

	if (t22 != 4294934529U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MAX;
	uint64_t x110 = UINT64_MAX;
	int32_t x111 = INT32_MAX;
	int64_t x112 = 10838113LL;
	uint64_t t23 = 112198172868250334LLU;

	t23 = ((x109*(x110%x111))^x112);

	if (t23 != 6431612828LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = 1;
	static uint32_t x114 = 121536U;
	uint64_t x116 = UINT64_MAX;
	uint64_t t24 = 905056527517LLU;

	t24 = ((x113*(x114%x115))^x116);

	if (t24 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x117 = 37U;
	volatile int16_t x118 = -151;
	volatile uint64_t t25 = 34373508621932693LLU;

	t25 = ((x117*(x118%x119))^x120);

	if (t25 != 18446744066420979890LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x121 = INT16_MAX;
	int8_t x122 = -1;
	uint32_t x123 = 614886319U;
	int64_t x124 = -113239640419862383LL;
	volatile int64_t t26 = -2LL;

	t26 = ((x121*(x122%x123))^x124);

	if (t26 != -113239642158989686LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x126 = -1479LL;
	int32_t x127 = 549;
	uint64_t t27 = 25068LLU;

	t27 = ((x125*(x126%x127))^x128);

	if (t27 != 343000695859597040LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x132 = 1;
	uint64_t t28 = 286LLU;

	t28 = ((x129*(x130%x131))^x132);

	if (t28 != 18446744072222145025LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x133 = 75U;
	uint16_t x135 = 187U;
	int64_t x136 = 64169585LL;
	static uint64_t t29 = 362899078676811LLU;

	t29 = ((x133*(x134%x135))^x136);

	if (t29 != 64171793LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x137 = -1LL;
	uint64_t x139 = 56141602872LLU;
	static volatile int32_t x140 = INT32_MAX;
	volatile uint64_t t30 = 7864601365161431118LLU;

	t30 = ((x137*(x138%x139))^x140);

	if (t30 != 18446744063654402279LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x142 = INT64_MAX;
	int32_t x144 = INT32_MAX;
	volatile int64_t t31 = 2321763959150836LL;

	t31 = ((x141*(x142%x143))^x144);

	if (t31 != -4611686014132420609LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x145 = 28U;
	static volatile int64_t x146 = -1LL;
	static uint16_t x147 = 13728U;
	int16_t x148 = 7625;

	t32 = ((x145*(x146%x147))^x148);

	if (t32 != -7635LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x150 = 1820LL;
	static int8_t x151 = INT8_MIN;
	volatile uint64_t x152 = 1700614LLU;

	t33 = ((x149*(x150%x151))^x152);

	if (t33 != 18446744073707850958LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x155 = INT8_MAX;
	static uint32_t x156 = 6725U;

	t34 = ((x153*(x154%x155))^x156);

	if (t34 != 4294964086U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x158 = INT8_MIN;
	static uint64_t x159 = 5618LLU;
	static int64_t x160 = -1LL;
	uint64_t t35 = 8LLU;

	t35 = ((x157*(x158%x159))^x160);

	if (t35 != 18446744073709178281LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x162 = UINT64_MAX;
	static int8_t x163 = -1;
	volatile int8_t x164 = INT8_MIN;

	t36 = ((x161*(x162%x163))^x164);

	if (t36 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x169 = 1906U;
	uint64_t x172 = 2501LLU;
	static volatile uint64_t t37 = 538433LLU;

	t37 = ((x169*(x170%x171))^x172);

	if (t37 != 26219LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = INT8_MIN;
	int32_t x174 = INT32_MIN;
	volatile int64_t t38 = 5207LL;

	t38 = ((x173*(x174%x175))^x176);

	if (t38 != -274877906945LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x177 = UINT64_MAX;
	int32_t x180 = INT32_MIN;
	volatile uint64_t t39 = 34057182932LLU;

	t39 = ((x177*(x178%x179))^x180);

	if (t39 != 2147483647LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = 243914LL;
	int16_t x182 = INT16_MIN;
	int32_t x184 = -1;
	volatile int64_t t40 = 8329LL;

	t40 = ((x181*(x182%x183))^x184);

	if (t40 != 7992573951LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x186 = INT32_MAX;
	int32_t x187 = -14;
	static int32_t x188 = INT32_MIN;

	t41 = ((x185*(x186%x187))^x188);

	if (t41 != 2147483646) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = INT16_MIN;
	int64_t x190 = INT64_MIN;
	volatile int32_t x191 = INT32_MIN;
	int32_t x192 = INT32_MIN;
	int64_t t42 = 250LL;

	t42 = ((x189*(x190%x191))^x192);

	if (t42 != -2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x193 = 11U;
	int16_t x194 = -1;
	int8_t x196 = -16;
	int32_t t43 = 12;

	t43 = ((x193*(x194%x195))^x196);

	if (t43 != 5) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x197 = 168U;
	volatile int8_t x198 = INT8_MIN;
	volatile uint32_t x199 = 477U;
	static int16_t x200 = INT16_MIN;
	static volatile uint32_t t44 = 7396544U;

	t44 = ((x197*(x198%x199))^x200);

	if (t44 != 4294937888U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x201 = UINT32_MAX;
	static int32_t x202 = -1;
	static uint8_t x203 = 36U;
	uint8_t x204 = 31U;
	uint32_t t45 = 421961996U;

	t45 = ((x201*(x202%x203))^x204);

	if (t45 != 30U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x209 = 3432U;
	int8_t x210 = -1;
	int32_t x212 = -1;

	t46 = ((x209*(x210%x211))^x212);

	if (t46 != 3431) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = 2022;
	int16_t x215 = -1;
	int16_t x216 = 953;

	t47 = ((x213*(x214%x215))^x216);

	if (t47 != 953) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x217 = 101U;
	volatile int32_t x218 = INT32_MAX;
	int8_t x219 = INT8_MIN;
	uint64_t x220 = 58LLU;
	uint64_t t48 = 528489406739LLU;

	t48 = ((x217*(x218%x219))^x220);

	if (t48 != 12833LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = -1LL;
	static volatile uint32_t x222 = 23U;
	int16_t x223 = 6902;
	uint8_t x224 = 0U;
	int64_t t49 = 1110821100581948LL;

	t49 = ((x221*(x222%x223))^x224);

	if (t49 != -23LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x225 = 13731U;
	int64_t x226 = -1LL;
	int64_t x228 = INT64_MAX;

	t50 = ((x225*(x226%x227))^x228);

	if (t50 != -9223372036854762078LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x233 = UINT64_MAX;
	static uint64_t x234 = UINT64_MAX;
	uint64_t x235 = UINT64_MAX;
	uint32_t x236 = 1746369U;
	uint64_t t51 = 3864382390586LLU;

	t51 = ((x233*(x234%x235))^x236);

	if (t51 != 1746369LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x237 = -1;
	int16_t x239 = -1;
	int32_t x240 = -1;
	static int32_t t52 = 384578;

	t52 = ((x237*(x238%x239))^x240);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x242 = -1;
	int8_t x244 = -1;
	static volatile int32_t t53 = -30922;

	t53 = ((x241*(x242%x243))^x244);

	if (t53 != 3215) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x245 = -1;
	static int64_t x246 = -1LL;
	uint8_t x248 = 1U;
	volatile int64_t t54 = 56852126904523192LL;

	t54 = ((x245*(x246%x247))^x248);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x249 = UINT32_MAX;
	static uint64_t x250 = 35989280373228552LLU;
	int32_t x252 = -1;

	t55 = ((x249*(x250%x251))^x252);

	if (t55 != 12691592382087316487LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = 466642118LLU;
	uint32_t x254 = 31U;
	uint64_t x256 = UINT64_MAX;
	volatile uint64_t t56 = 431514277234LLU;

	t56 = ((x253*(x254%x255))^x256);

	if (t56 != 18446744072309625261LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x257 = 194U;
	static int32_t x259 = 974595526;
	static volatile uint64_t t57 = 786232LLU;

	t57 = ((x257*(x258%x259))^x260);

	if (t57 != 18446743922565003282LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x266 = -1LL;
	static int8_t x267 = -1;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t58 = UINT64_MAX;

	t58 = ((x265*(x266%x267))^x268);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x269 = -1;
	int64_t x270 = INT64_MAX;
	int16_t x271 = INT16_MAX;
	static uint16_t x272 = UINT16_MAX;

	t59 = ((x269*(x270%x271))^x272);

	if (t59 != -65530LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x277 = 27101LL;
	int64_t x278 = INT64_MIN;
	volatile int32_t x279 = -11915542;
	uint8_t x280 = 54U;
	volatile int64_t t60 = 2915057777726153841LL;

	t60 = ((x277*(x278%x279))^x280);

	if (t60 != -298031323014LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x281 = 44U;
	int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MIN;
	uint16_t x284 = UINT16_MAX;
	static int32_t t61 = -206741446;

	t61 = ((x281*(x282%x283))^x284);

	if (t61 != -59905) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x285 = 31U;
	int64_t x286 = -1LL;
	int32_t x287 = INT32_MIN;
	int64_t x288 = -3309LL;

	t62 = ((x285*(x286%x287))^x288);

	if (t62 != 3314LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x290 = INT64_MIN;
	uint8_t x291 = UINT8_MAX;
	volatile int64_t x292 = -1LL;

	t63 = ((x289*(x290%x291))^x292);

	if (t63 != 4194175LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x293 = -1LL;
	int8_t x294 = INT8_MIN;
	volatile int32_t x295 = 169612;
	int16_t x296 = -25;
	int64_t t64 = 4200213408858552LL;

	t64 = ((x293*(x294%x295))^x296);

	if (t64 != -153LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x298 = 43229U;
	uint64_t x299 = 655LLU;
	int8_t x300 = INT8_MAX;

	t65 = ((x297*(x298%x299))^x300);

	if (t65 != 18446744073709468031LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x301 = 14123U;
	static int16_t x302 = INT16_MIN;
	uint16_t x303 = 14864U;
	volatile int32_t x304 = INT32_MAX;

	t66 = ((x301*(x302%x303))^x304);

	if (t66 != -2104549729) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = 55;
	int64_t x306 = INT64_MAX;
	volatile int16_t x308 = 0;
	volatile int64_t t67 = -1151274797465203LL;

	t67 = ((x305*(x306%x307))^x308);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x310 = INT64_MAX;
	static volatile uint64_t t68 = 11454002459202666LLU;

	t68 = ((x309*(x310%x311))^x312);

	if (t68 != 9223372035920172139LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x313 = -1;
	uint16_t x314 = 3173U;
	static uint64_t x315 = 47LLU;

	t69 = ((x313*(x314%x315))^x316);

	if (t69 != 18446744073709518871LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x317 = INT8_MIN;
	int64_t x318 = 135091924281442LL;
	uint16_t x319 = 7772U;
	uint16_t x320 = UINT16_MAX;
	int64_t t70 = -892000129LL;

	t70 = ((x317*(x318%x319))^x320);

	if (t70 != -574209LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x321 = UINT16_MAX;
	int16_t x322 = -2;
	volatile int8_t x324 = INT8_MIN;
	uint32_t t71 = 763U;

	t71 = ((x321*(x322%x323))^x324);

	if (t71 != 130946U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = -2;
	static uint16_t x326 = 1120U;
	int32_t x328 = 102293555;
	volatile int32_t t72 = -193067890;

	t72 = ((x325*(x326%x327))^x328);

	if (t72 != -102295693) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x330 = INT8_MIN;
	static int32_t x331 = INT32_MAX;
	uint32_t x332 = UINT32_MAX;
	uint32_t t73 = 1171773965U;

	t73 = ((x329*(x330%x331))^x332);

	if (t73 != 4294967167U) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x333 = -1LL;
	int32_t x334 = -1;
	static int64_t x335 = INT64_MIN;
	volatile uint16_t x336 = UINT16_MAX;

	t74 = ((x333*(x334%x335))^x336);

	if (t74 != 65534LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x337 = 6106;
	int16_t x338 = 231;
	static int16_t x339 = -1;
	static int32_t t75 = 3676;

	t75 = ((x337*(x338%x339))^x340);

	if (t75 != -57) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x341 = UINT8_MAX;
	int8_t x342 = -1;
	uint16_t x343 = 4646U;
	int64_t x344 = INT64_MIN;
	volatile int64_t t76 = -7LL;

	t76 = ((x341*(x342%x343))^x344);

	if (t76 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x349 = INT8_MIN;
	uint32_t x350 = 130139116U;
	int64_t x351 = INT64_MAX;
	volatile int32_t x352 = -966114372;
	int64_t t77 = 1896679686726LL;

	t77 = ((x349*(x350%x351))^x352);

	if (t77 != 16533178812LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x353 = -1;
	uint8_t x354 = 124U;
	int32_t x355 = -1;
	uint64_t x356 = 632254865LLU;
	volatile uint64_t t78 = 453126559588478LLU;

	t78 = ((x353*(x354%x355))^x356);

	if (t78 != 632254865LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x357 = 22999522;
	uint8_t x359 = 83U;
	static uint32_t x360 = UINT32_MAX;

	t79 = ((x357*(x358%x359))^x360);

	if (t79 != 2547003623U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = -1;
	int64_t x362 = 1467LL;
	uint16_t x363 = 3401U;
	static int8_t x364 = -27;
	static volatile int64_t t80 = -1703709628654LL;

	t80 = ((x361*(x362%x363))^x364);

	if (t80 != 1440LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = INT16_MAX;
	int64_t x367 = INT64_MAX;

	t81 = ((x365*(x366%x367))^x368);

	if (t81 != 140733193355518LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x369 = INT64_MIN;
	static uint64_t x370 = 3730882334886LLU;
	int8_t x371 = INT8_MIN;
	int16_t x372 = 0;

	t82 = ((x369*(x370%x371))^x372);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x373 = INT16_MIN;
	static int32_t x374 = INT32_MAX;
	uint64_t x375 = 501814562326LLU;
	int8_t x376 = INT8_MAX;
	volatile uint64_t t83 = 524807LLU;

	t83 = ((x373*(x374%x375))^x376);

	if (t83 != 18446673704965406847LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x377 = INT32_MAX;
	int64_t x378 = 28754742LL;
	uint16_t x380 = UINT16_MAX;
	int64_t t84 = -8897047147796387LL;

	t84 = ((x377*(x378%x379))^x380);

	if (t84 != 3949222364974LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x381 = 26;
	volatile int8_t x382 = 0;
	int8_t x383 = INT8_MAX;
	volatile int32_t t85 = 80;

	t85 = ((x381*(x382%x383))^x384);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x385 = -1;
	int16_t x386 = INT16_MIN;
	int16_t x387 = -14;
	uint8_t x388 = UINT8_MAX;

	t86 = ((x385*(x386%x387))^x388);

	if (t86 != 247) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x389 = INT16_MAX;
	uint64_t x390 = UINT64_MAX;
	int16_t x391 = INT16_MIN;
	volatile int32_t x392 = INT32_MIN;
	volatile uint64_t t87 = 9360970233139243LLU;

	t87 = ((x389*(x390%x391))^x392);

	if (t87 != 18446744072635744257LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x393 = -779240784251101813LL;
	uint8_t x394 = 25U;
	uint8_t x395 = 3U;
	uint8_t x396 = 10U;
	volatile int64_t t88 = 14635LL;

	t88 = ((x393*(x394%x395))^x396);

	if (t88 != -779240784251101823LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x397 = 51708818LLU;
	static uint16_t x398 = UINT16_MAX;
	int64_t x399 = INT64_MIN;
	volatile int8_t x400 = INT8_MIN;
	volatile uint64_t t89 = 1925775LLU;

	t89 = ((x397*(x398%x399))^x400);

	if (t89 != 18446740684972164078LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x401 = 990;
	static int32_t x402 = INT32_MIN;
	int8_t x403 = INT8_MIN;
	static uint64_t t90 = 232LLU;

	t90 = ((x401*(x402%x403))^x404);

	if (t90 != 12525160147742LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x405 = -1;
	uint8_t x406 = 2U;
	int8_t x407 = -1;
	uint64_t x408 = 2366104LLU;

	t91 = ((x405*(x406%x407))^x408);

	if (t91 != 2366104LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x413 = -35;
	volatile uint64_t x414 = UINT64_MAX;
	int16_t x415 = INT16_MIN;
	uint64_t x416 = 1270557714270016LLU;

	t92 = ((x413*(x414%x415))^x416);

	if (t92 != 18445473515996399459LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x421 = INT32_MAX;
	uint64_t x422 = 26333141855057306LLU;
	int16_t x423 = -31;
	volatile uint64_t t93 = 3701161878084437LLU;

	t93 = ((x421*(x422%x423))^x424);

	if (t93 != 3363640207930344479LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x425 = UINT8_MAX;
	volatile int8_t x427 = 1;
	static int32_t t94 = -164018613;

	t94 = ((x425*(x426%x427))^x428);

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x429 = 1026LLU;
	int8_t x430 = INT8_MAX;
	volatile uint64_t t95 = 4452LLU;

	t95 = ((x429*(x430%x431))^x432);

	if (t95 != 130303LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x433 = -1LL;
	static int32_t x434 = 14913;
	volatile int16_t x435 = INT16_MAX;
	int64_t x436 = INT64_MIN;
	int64_t t96 = -5290LL;

	t96 = ((x433*(x434%x435))^x436);

	if (t96 != 9223372036854760895LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x437 = 49880613346919LLU;
	static uint32_t x439 = UINT32_MAX;

	t97 = ((x437*(x438%x439))^x440);

	if (t97 != 2441321312262553659LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x441 = -1;
	volatile uint32_t x442 = 14327029U;
	volatile uint16_t x444 = UINT16_MAX;
	volatile uint32_t t98 = 418872U;

	t98 = ((x441*(x442%x443))^x444);

	if (t98 != 4294901773U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x445 = INT32_MIN;
	int64_t x446 = INT64_MIN;
	static int16_t x447 = INT16_MIN;
	int64_t x448 = 15498LL;
	int64_t t99 = 3403316282446650LL;

	t99 = ((x445*(x446%x447))^x448);

	if (t99 != 15498LL) { NG(); } else { ; }
	
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

