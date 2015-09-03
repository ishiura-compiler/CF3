#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MAX;
volatile int16_t x10 = INT16_MIN;
static int8_t x11 = INT8_MIN;
volatile uint32_t x13 = 39651268U;
volatile uint64_t x15 = 77307464809234LLU;
uint64_t x16 = 208LLU;
int8_t x22 = -1;
int16_t x45 = INT16_MIN;
static int64_t x47 = 57781727787555LL;
uint32_t x55 = 10102U;
static uint16_t x61 = UINT16_MAX;
uint16_t x63 = 0U;
int64_t x65 = 4LL;
uint64_t t10 = 3576LLU;
uint32_t x72 = UINT32_MAX;
volatile int8_t x89 = INT8_MAX;
volatile int8_t x94 = INT8_MIN;
volatile uint32_t x95 = 25779080U;
int32_t x97 = -1;
int16_t x101 = INT16_MIN;
static volatile int8_t x103 = -1;
int16_t x105 = -1;
volatile int8_t x107 = INT8_MIN;
uint16_t x125 = 19160U;
int8_t x126 = INT8_MAX;
volatile int64_t x127 = -1LL;
uint32_t x131 = UINT32_MAX;
int64_t t24 = 7404LL;
volatile int8_t x133 = 3;
uint16_t x140 = 69U;
volatile uint32_t t26 = 478166214U;
int64_t x150 = -1905LL;
uint8_t x152 = 11U;
int32_t x155 = INT32_MIN;
volatile uint32_t x163 = 0U;
int32_t x166 = INT32_MIN;
uint64_t x167 = 446LLU;
static int32_t x169 = INT32_MIN;
volatile int8_t x171 = -1;
static int16_t x172 = INT16_MIN;
volatile int32_t t32 = -820;
int16_t x179 = INT16_MAX;
static volatile uint64_t t34 = 739LLU;
static int8_t x182 = INT8_MIN;
int64_t x186 = 45612LL;
static int64_t x187 = -276121116294688LL;
int64_t t36 = 10012017628218531LL;
int32_t x206 = -46539;
int16_t x208 = INT16_MIN;
volatile uint64_t t40 = 608012866LLU;
uint32_t x224 = 19U;
uint64_t t43 = 560LLU;
int16_t x230 = -1;
int64_t x235 = INT64_MAX;
uint64_t x236 = 40567308461LLU;
int16_t x238 = 0;
int8_t x242 = -1;
uint16_t x248 = 26572U;
static volatile int64_t t49 = 2456646361LL;
int16_t x254 = 2;
volatile uint32_t x257 = UINT32_MAX;
static volatile int16_t x260 = -1;
uint16_t x268 = 25U;
int8_t x269 = INT8_MIN;
uint16_t x275 = 1U;
volatile int64_t t55 = 5LL;
volatile int64_t t56 = 95101426162373LL;
int32_t x285 = INT32_MIN;
int8_t x290 = INT8_MAX;
uint64_t t58 = 4020317542356985LLU;
int16_t x295 = INT16_MIN;
int64_t x296 = -1LL;
static volatile int64_t x299 = 3182968302527311LL;
int16_t x300 = INT16_MAX;
int16_t x301 = INT16_MIN;
uint32_t x303 = 16068U;
uint16_t x306 = 42U;
int32_t x309 = INT32_MAX;
uint64_t x314 = 722696678935LLU;
static int16_t x316 = 12481;
int32_t t66 = -711;
uint16_t x330 = 80U;
int16_t x332 = -1;
uint64_t t67 = UINT64_MAX;
uint16_t x333 = 33U;
uint8_t x337 = 10U;
volatile int64_t x342 = 1LL;
uint8_t x347 = 2U;
static volatile uint64_t t71 = 188844487453LLU;
int8_t x349 = INT8_MAX;
int16_t x354 = INT16_MIN;
volatile int64_t t73 = -4126280453037LL;
uint32_t x361 = 232779U;
volatile uint64_t t76 = 3321293035533040LLU;
uint8_t x369 = 13U;
volatile int32_t t77 = 12030;
int16_t x382 = INT16_MAX;
int32_t x389 = -1;
volatile int64_t t83 = 2328LL;
static int32_t t84 = 23200;
volatile int32_t x414 = INT32_MAX;
int8_t x426 = 56;
int8_t x439 = INT8_MIN;
volatile uint32_t x446 = 496U;
int32_t x453 = -822032;
volatile int64_t t95 = 3484790673LL;
int64_t x457 = -90403986LL;
int8_t x461 = -1;
int32_t x462 = -1;
volatile uint64_t x467 = 2862688LLU;


void f0(void) {
	uint16_t x1 = 93U;
	uint32_t x2 = UINT32_MAX;
	uint32_t x3 = UINT32_MAX;
	uint32_t t0 = UINT32_MAX;

	t0 = ((x1^(x2+x3))|x4);

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = INT64_MIN;
	volatile int16_t x12 = INT16_MIN;
	volatile int64_t t1 = 111021876190LL;

	t1 = ((x9^(x10+x11))|x12);

	if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = 40;
	volatile uint64_t t2 = 291632930071024LLU;

	t2 = ((x13^(x14+x15))|x16);

	if (t2 != 77307425815806LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -1LL;
	int64_t x23 = -47461699946417932LL;
	int64_t x24 = INT64_MIN;
	volatile int64_t t3 = -31435685301LL;

	t3 = ((x21^(x22+x23))|x24);

	if (t3 != -9175910336908357876LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = -7;
	volatile int8_t x30 = -11;
	int8_t x31 = -1;
	volatile uint8_t x32 = 43U;
	int32_t t4 = 0;

	t4 = ((x29^(x30+x31))|x32);

	if (t4 != 47) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x33 = 1937329482637LLU;
	volatile int32_t x34 = INT32_MIN;
	uint64_t x35 = 110741344740LLU;
	static int16_t x36 = INT16_MIN;
	uint64_t t5 = 39628894492LLU;

	t5 = ((x33^(x34+x35))|x36);

	if (t5 != 18446744073709533801LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = -1LL;
	int64_t x38 = INT64_MIN;
	int64_t x39 = INT64_MAX;
	uint64_t x40 = 2115368LLU;
	volatile uint64_t t6 = 149557LLU;

	t6 = ((x37^(x38+x39))|x40);

	if (t6 != 2115368LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x46 = INT64_MIN;
	int32_t x48 = INT32_MIN;
	volatile int64_t t7 = -1LL;

	t7 = ((x45^(x46+x47))|x48);

	if (t7 != -1532724701LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x53 = INT16_MIN;
	int64_t x54 = INT64_MIN;
	int32_t x56 = 29;
	volatile int64_t t8 = -779237LL;

	t8 = ((x53^(x54+x55))|x56);

	if (t8 != 9223372036854753151LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x62 = -1;
	uint8_t x64 = 9U;
	int32_t t9 = -308683908;

	t9 = ((x61^(x62+x63))|x64);

	if (t9 != -65527) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x66 = -1LL;
	static uint32_t x67 = UINT32_MAX;
	static uint64_t x68 = 109043015326355LLU;

	t10 = ((x65^(x66+x67))|x68);

	if (t10 != 109044924678139LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x69 = 22480301845234806LLU;
	int8_t x70 = INT8_MIN;
	int32_t x71 = INT32_MAX;
	static uint64_t t11 = 1935LLU;

	t11 = ((x69^(x70+x71))|x72);

	if (t11 != 22480305503862783LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x73 = 4U;
	int16_t x74 = -1;
	static int16_t x75 = INT16_MAX;
	int8_t x76 = INT8_MIN;
	static volatile uint32_t t12 = 950U;

	t12 = ((x73^(x74+x75))|x76);

	if (t12 != 4294967290U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = 13716887606LL;
	int64_t x78 = -1LL;
	int16_t x79 = 6436;
	static int16_t x80 = -224;
	volatile int64_t t13 = -1515307338052051112LL;

	t13 = ((x77^(x78+x79))|x80);

	if (t13 != -203LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x81 = -738752;
	int32_t x82 = -1;
	int16_t x83 = INT16_MIN;
	volatile int32_t x84 = INT32_MIN;
	int32_t t14 = 461;

	t14 = ((x81^(x82+x83))|x84);

	if (t14 != -2146712129) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x85 = 428U;
	uint64_t x86 = 13LLU;
	volatile int16_t x87 = INT16_MIN;
	uint8_t x88 = 6U;
	volatile uint64_t t15 = 578522844439659LLU;

	t15 = ((x85^(x86+x87))|x88);

	if (t15 != 18446744073709519271LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x90 = -60395227907300LL;
	int32_t x91 = INT32_MIN;
	uint32_t x92 = UINT32_MAX;
	int64_t t16 = 17288433760874270LL;

	t16 = ((x89^(x90+x91))|x92);

	if (t16 != -60395830116353LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x93 = INT32_MIN;
	int64_t x96 = -82598LL;
	volatile int64_t t17 = -45483863048448403LL;

	t17 = ((x93^(x94+x95))|x96);

	if (t17 != -166LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x98 = 15115614019806016LLU;
	int64_t x99 = -10803508LL;
	static int32_t x100 = -1;
	uint64_t t18 = UINT64_MAX;

	t18 = ((x97^(x98+x99))|x100);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x102 = 78864;
	uint64_t x104 = UINT64_MAX;
	uint64_t t19 = UINT64_MAX;

	t19 = ((x101^(x102+x103))|x104);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x106 = INT8_MIN;
	uint16_t x108 = 7U;
	int32_t t20 = 2;

	t20 = ((x105^(x106+x107))|x108);

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x109 = INT32_MIN;
	int16_t x110 = 4;
	int16_t x111 = -1;
	int16_t x112 = INT16_MIN;
	int32_t t21 = 111;

	t21 = ((x109^(x110+x111))|x112);

	if (t21 != -32765) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = 0;
	int8_t x123 = 7;
	int32_t x124 = -453416;
	int32_t t22 = -113773;

	t22 = ((x121^(x122+x123))|x124);

	if (t22 != -33) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x128 = INT64_MAX;
	int64_t t23 = INT64_MAX;

	t23 = ((x125^(x126+x127))|x128);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x129 = INT16_MIN;
	static uint16_t x130 = 92U;
	int64_t x132 = INT64_MIN;

	t24 = ((x129^(x130+x131))|x132);

	if (t24 != -9223372032559841189LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x134 = 249040U;
	uint64_t x135 = 76815930LLU;
	uint16_t x136 = UINT16_MAX;
	uint64_t t25 = 366683906LLU;

	t25 = ((x133^(x134+x135))|x136);

	if (t25 != 77070335LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = 29380077;
	uint8_t x138 = UINT8_MAX;
	uint32_t x139 = 7076U;

	t26 = ((x137^(x138+x139))|x140);

	if (t26 != 29380943U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x141 = INT64_MIN;
	volatile uint8_t x142 = UINT8_MAX;
	int32_t x143 = -61996819;
	int8_t x144 = INT8_MIN;
	static volatile int64_t t27 = 259LL;

	t27 = ((x141^(x142+x143))|x144);

	if (t27 != -20LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x149 = INT32_MAX;
	volatile uint16_t x151 = UINT16_MAX;
	volatile int64_t t28 = 2LL;

	t28 = ((x149^(x150+x151))|x152);

	if (t28 != 2147420027LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x153 = INT16_MAX;
	static uint8_t x154 = UINT8_MAX;
	static int8_t x156 = -18;
	volatile int32_t t29 = 37295329;

	t29 = ((x153^(x154+x155))|x156);

	if (t29 != -18) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x161 = -175042729LL;
	int16_t x162 = INT16_MAX;
	int32_t x164 = 21752594;
	volatile int64_t t30 = 12LL;

	t30 = ((x161^(x162+x163))|x164);

	if (t30 != -170132550LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x165 = UINT64_MAX;
	volatile uint32_t x168 = 91U;
	volatile uint64_t t31 = 28LLU;

	t31 = ((x165^(x166+x167))|x168);

	if (t31 != 2147483227LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x170 = INT32_MAX;

	t32 = ((x169^(x170+x171))|x172);

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x173 = 10;
	int8_t x174 = INT8_MAX;
	int16_t x175 = -69;
	static int16_t x176 = 0;
	volatile int32_t t33 = -2;

	t33 = ((x173^(x174+x175))|x176);

	if (t33 != 48) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x177 = 266174840LLU;
	uint16_t x178 = 28U;
	uint16_t x180 = 726U;

	t34 = ((x177^(x178+x179))|x180);

	if (t34 != 266142711LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x181 = 0;
	uint32_t x183 = UINT32_MAX;
	volatile uint8_t x184 = 64U;
	uint32_t t35 = 40859U;

	t35 = ((x181^(x182+x183))|x184);

	if (t35 != 4294967167U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x185 = -1;
	static int8_t x188 = -1;

	t36 = ((x185^(x186+x187))|x188);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x189 = 10100U;
	volatile uint8_t x190 = 8U;
	static int8_t x191 = 0;
	static uint32_t x192 = 1760971953U;
	volatile uint32_t t37 = 251870188U;

	t37 = ((x189^(x190+x191))|x192);

	if (t37 != 1760980989U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x201 = -1;
	volatile int32_t x202 = INT32_MIN;
	int64_t x203 = 70827977785758367LL;
	int8_t x204 = INT8_MAX;
	int64_t t38 = 56818965565993LL;

	t38 = ((x201^(x202+x203))|x204);

	if (t38 != -70827975638274689LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x205 = 982765U;
	volatile int16_t x207 = INT16_MIN;
	static uint32_t t39 = 108102796U;

	t39 = ((x205^(x206+x207))|x208);

	if (t39 != 4294948056U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x209 = UINT16_MAX;
	uint32_t x210 = 24497011U;
	static uint64_t x211 = 0LLU;
	uint16_t x212 = 413U;

	t40 = ((x209^(x210+x211))|x212);

	if (t40 != 24458653LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x213 = -1;
	uint8_t x214 = 19U;
	uint32_t x215 = UINT32_MAX;
	static uint64_t x216 = UINT64_MAX;
	uint64_t t41 = UINT64_MAX;

	t41 = ((x213^(x214+x215))|x216);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x217 = -1LL;
	int16_t x218 = INT16_MAX;
	int16_t x219 = INT16_MIN;
	uint64_t x220 = 3618837LLU;
	uint64_t t42 = 5637407LLU;

	t42 = ((x217^(x218+x219))|x220);

	if (t42 != 3618837LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x221 = 225LLU;
	uint64_t x222 = 13296LLU;
	int64_t x223 = -48935814848LL;

	t43 = ((x221^(x222+x223))|x224);

	if (t43 != 18446744024773750227LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x229 = INT8_MIN;
	int32_t x231 = -4;
	static uint8_t x232 = UINT8_MAX;
	int32_t t44 = 25;

	t44 = ((x229^(x230+x231))|x232);

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x233 = -229683823407697LL;
	volatile int32_t x234 = INT32_MIN;
	static uint64_t t45 = 14131328551LLU;

	t45 = ((x233^(x234+x235))|x236);

	if (t45 != 9223601757453841149LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x237 = INT64_MIN;
	volatile int32_t x239 = -1751;
	static volatile uint64_t x240 = UINT64_MAX;
	static volatile uint64_t t46 = UINT64_MAX;

	t46 = ((x237^(x238+x239))|x240);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x241 = INT64_MIN;
	volatile int16_t x243 = -50;
	int16_t x244 = -1;
	int64_t t47 = 146LL;

	t47 = ((x241^(x242+x243))|x244);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x245 = INT32_MAX;
	static volatile int32_t x246 = INT32_MAX;
	volatile uint64_t x247 = UINT64_MAX;
	uint64_t t48 = 589580177LLU;

	t48 = ((x245^(x246+x247))|x248);

	if (t48 != 26573LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x249 = 0;
	int8_t x250 = -1;
	int8_t x251 = -1;
	static int64_t x252 = -40990788LL;

	t49 = ((x249^(x250+x251))|x252);

	if (t49 != -2LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x253 = INT32_MIN;
	uint32_t x255 = UINT32_MAX;
	uint64_t x256 = 125LLU;
	static uint64_t t50 = 97LLU;

	t50 = ((x253^(x254+x255))|x256);

	if (t50 != 2147483773LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x258 = UINT16_MAX;
	uint32_t x259 = 937460181U;
	volatile uint32_t t51 = UINT32_MAX;

	t51 = ((x257^(x258+x259))|x260);

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x265 = INT8_MAX;
	volatile uint64_t x266 = 10202191LLU;
	volatile int32_t x267 = -240;
	volatile uint64_t t52 = 686LLU;

	t52 = ((x265^(x266+x267))|x268);

	if (t52 != 10201913LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x270 = 1121U;
	static int8_t x271 = 56;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = ((x269^(x270+x271))|x272);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x273 = INT8_MAX;
	uint32_t x274 = 980U;
	int8_t x276 = -1;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = ((x273^(x274+x275))|x276);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x277 = 26937653;
	static int64_t x278 = INT64_MAX;
	int8_t x279 = 0;
	volatile int64_t x280 = -2091463251LL;

	t55 = ((x277^(x278+x279))|x280);

	if (t55 != -8978449LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x281 = INT64_MAX;
	volatile int64_t x282 = INT64_MAX;
	int32_t x283 = -71;
	static int8_t x284 = INT8_MAX;

	t56 = ((x281^(x282+x283))|x284);

	if (t56 != 127LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x286 = -30;
	int8_t x287 = -1;
	static uint16_t x288 = UINT16_MAX;
	volatile int32_t t57 = INT32_MAX;

	t57 = ((x285^(x286+x287))|x288);

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x289 = 15U;
	int32_t x291 = INT32_MIN;
	uint64_t x292 = 3348LLU;

	t58 = ((x289^(x290+x291))|x292);

	if (t58 != 2147487092LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x293 = -892;
	int8_t x294 = 0;
	volatile int64_t t59 = 2605986375800LL;

	t59 = ((x293^(x294+x295))|x296);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x297 = INT8_MIN;
	uint16_t x298 = 1U;
	volatile int64_t t60 = -2005512885LL;

	t60 = ((x297^(x298+x299))|x300);

	if (t60 != -3182968302501889LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x302 = INT64_MIN;
	int32_t x304 = 295568;
	int64_t t61 = -12029745064LL;

	t61 = ((x301^(x302+x303))|x304);

	if (t61 != 9223372036854759124LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x305 = -1;
	static uint16_t x307 = 1568U;
	volatile int64_t x308 = INT64_MIN;
	volatile int64_t t62 = -39474526308LL;

	t62 = ((x305^(x306+x307))|x308);

	if (t62 != -1611LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x310 = UINT64_MAX;
	static uint32_t x311 = 7U;
	static uint64_t x312 = UINT64_MAX;
	uint64_t t63 = UINT64_MAX;

	t63 = ((x309^(x310+x311))|x312);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x313 = UINT32_MAX;
	static int32_t x315 = INT32_MIN;
	uint64_t t64 = 1LLU;

	t64 = ((x313^(x314+x315))|x316);

	if (t64 != 718264857065LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x321 = INT64_MIN;
	static int32_t x322 = -1;
	uint8_t x323 = 79U;
	uint32_t x324 = 89U;
	int64_t t65 = 1LL;

	t65 = ((x321^(x322+x323))|x324);

	if (t65 != -9223372036854775713LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x325 = -1;
	static volatile int16_t x326 = INT16_MIN;
	static int8_t x327 = -1;
	int16_t x328 = INT16_MAX;

	t66 = ((x325^(x326+x327))|x328);

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x329 = -1;
	uint64_t x331 = 998063LLU;

	t67 = ((x329^(x330+x331))|x332);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x334 = UINT32_MAX;
	uint32_t x335 = 42534464U;
	static volatile int64_t x336 = 3423273725459060906LL;
	volatile int64_t t68 = 11650418LL;

	t68 = ((x333^(x334+x335))|x336);

	if (t68 != 3423273725459127998LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x338 = 693U;
	uint64_t x339 = 105LLU;
	volatile uint64_t x340 = 26419658061245LLU;
	static uint64_t t69 = 23109LLU;

	t69 = ((x337^(x338+x339))|x340);

	if (t69 != 26419658061757LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x341 = 35689;
	int64_t x343 = INT64_MIN;
	int64_t x344 = -745115464LL;
	volatile int64_t t70 = 513508LL;

	t70 = ((x341^(x342+x343))|x344);

	if (t70 != -745079816LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x345 = UINT64_MAX;
	int32_t x346 = INT32_MIN;
	static int64_t x348 = -261236276LL;

	t71 = ((x345^(x346+x347))|x348);

	if (t71 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x350 = 61;
	uint16_t x351 = UINT16_MAX;
	int8_t x352 = -13;
	static volatile int32_t t72 = 605782877;

	t72 = ((x349^(x350+x351))|x352);

	if (t72 != -13) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x353 = INT16_MIN;
	int8_t x355 = -1;
	int64_t x356 = 638348LL;

	t73 = ((x353^(x354+x355))|x356);

	if (t73 != 655359LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x357 = INT8_MIN;
	int32_t x358 = -1;
	static volatile int8_t x359 = INT8_MAX;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t74 = -11;

	t74 = ((x357^(x358+x359))|x360);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x362 = UINT32_MAX;
	static int64_t x363 = INT64_MIN;
	volatile int32_t x364 = 463328663;
	volatile int64_t t75 = 2219198LL;

	t75 = ((x361^(x362+x363))|x364);

	if (t75 != -9223372032559941705LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x365 = 127U;
	uint32_t x366 = 1321579U;
	volatile uint8_t x367 = 0U;
	uint64_t x368 = 51755033821347129LLU;

	t76 = ((x365^(x366+x367))|x368);

	if (t76 != 51755033822658365LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x370 = -1;
	static int32_t x371 = -1;
	int32_t x372 = INT32_MIN;

	t77 = ((x369^(x370+x371))|x372);

	if (t77 != -13) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x373 = INT16_MIN;
	uint32_t x374 = 83U;
	static int8_t x375 = INT8_MIN;
	uint64_t x376 = 109980051863899LLU;
	volatile uint64_t t78 = 1191568467LLU;

	t78 = ((x373^(x374+x375))|x376);

	if (t78 != 109980051865563LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x381 = 0;
	int64_t x383 = -1249072089LL;
	static int16_t x384 = INT16_MIN;
	volatile int64_t t79 = 134498787802279422LL;

	t79 = ((x381^(x382+x383))|x384);

	if (t79 != -21466LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x385 = 16330904;
	static int64_t x386 = 4219178LL;
	int64_t x387 = 283LL;
	int64_t x388 = -1LL;
	int64_t t80 = 0LL;

	t80 = ((x385^(x386+x387))|x388);

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x390 = -332732LL;
	static int32_t x391 = -28613;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = ((x389^(x390+x391))|x392);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x397 = INT16_MIN;
	static int32_t x398 = 16;
	static int64_t x399 = 1LL;
	volatile int16_t x400 = INT16_MIN;
	int64_t t82 = 471316LL;

	t82 = ((x397^(x398+x399))|x400);

	if (t82 != -32751LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x401 = -1;
	int64_t x402 = INT64_MIN;
	volatile uint32_t x403 = 11U;
	volatile int16_t x404 = 64;

	t83 = ((x401^(x402+x403))|x404);

	if (t83 != 9223372036854775796LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x405 = -31;
	int32_t x406 = -1;
	volatile uint8_t x407 = 118U;
	uint8_t x408 = UINT8_MAX;

	t84 = ((x405^(x406+x407))|x408);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x409 = INT8_MAX;
	int64_t x410 = -1LL;
	int16_t x411 = 2575;
	int16_t x412 = 389;
	int64_t t85 = 1LL;

	t85 = ((x409^(x410+x411))|x412);

	if (t85 != 3061LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x413 = UINT32_MAX;
	int8_t x415 = -7;
	static int8_t x416 = -1;
	uint32_t t86 = UINT32_MAX;

	t86 = ((x413^(x414+x415))|x416);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x421 = 805U;
	static uint16_t x422 = 6416U;
	int64_t x423 = 911326LL;
	static uint8_t x424 = 51U;
	static int64_t t87 = 21877211818072LL;

	t87 = ((x421^(x422+x423))|x424);

	if (t87 != 918523LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x425 = -1;
	static volatile int8_t x427 = -1;
	static uint64_t x428 = 1701660722267LLU;
	uint64_t t88 = 5LLU;

	t88 = ((x425^(x426+x427))|x428);

	if (t88 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x429 = -1LL;
	uint64_t x430 = UINT64_MAX;
	int32_t x431 = -1;
	static volatile uint32_t x432 = 38771U;
	volatile uint64_t t89 = 257364573808698609LLU;

	t89 = ((x429^(x430+x431))|x432);

	if (t89 != 38771LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x433 = 121U;
	int8_t x434 = 0;
	int16_t x435 = -1;
	volatile int64_t x436 = INT64_MIN;
	volatile int64_t t90 = -3LL;

	t90 = ((x433^(x434+x435))|x436);

	if (t90 != -122LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x437 = INT8_MIN;
	uint16_t x438 = UINT16_MAX;
	int8_t x440 = INT8_MIN;
	volatile int32_t t91 = -34412;

	t91 = ((x437^(x438+x439))|x440);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x441 = -1;
	volatile int64_t x442 = 1075856249LL;
	uint32_t x443 = UINT32_MAX;
	static uint32_t x444 = UINT32_MAX;
	int64_t t92 = -1LL;

	t92 = ((x441^(x442+x443))|x444);

	if (t92 != -4294967297LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x445 = 97950538U;
	int32_t x447 = -1;
	volatile uint32_t x448 = 4884U;
	uint32_t t93 = 459399761U;

	t93 = ((x445^(x446+x447))|x448);

	if (t93 != 97950645U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x449 = -1LL;
	static uint64_t x450 = 681830593LLU;
	volatile int16_t x451 = INT16_MIN;
	int64_t x452 = INT64_MAX;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = ((x449^(x450+x451))|x452);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x454 = -3780568014137LL;
	int64_t x455 = -196573053498LL;
	uint16_t x456 = 600U;

	t95 = ((x453^(x454+x455))|x456);

	if (t95 != 3977141294717LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x458 = 30371193U;
	static int32_t x459 = INT32_MIN;
	int8_t x460 = INT8_MIN;
	static volatile int64_t t96 = 752445311LL;

	t96 = ((x457^(x458+x459))|x460);

	if (t96 != -105LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x463 = UINT64_MAX;
	volatile uint16_t x464 = UINT16_MAX;
	volatile uint64_t t97 = 281272332955331359LLU;

	t97 = ((x461^(x462+x463))|x464);

	if (t97 != 65535LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x465 = INT32_MIN;
	int16_t x466 = -1;
	int64_t x468 = INT64_MAX;
	uint64_t t98 = UINT64_MAX;

	t98 = ((x465^(x466+x467))|x468);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x469 = INT64_MAX;
	static int8_t x470 = 1;
	uint32_t x471 = 1974U;
	uint64_t x472 = 1490607LLU;
	static uint64_t t99 = 1506424LLU;

	t99 = ((x469^(x470+x471))|x472);

	if (t99 != 9223372036854775535LLU) { NG(); } else { ; }
	
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

