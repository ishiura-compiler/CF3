#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MAX;
volatile int64_t t1 = 1342061476782LL;
int8_t x9 = -1;
int16_t x20 = INT16_MIN;
volatile int32_t x24 = INT32_MIN;
static volatile int64_t t4 = -8059221144308LL;
volatile uint64_t t6 = 56695726776284659LLU;
uint16_t x43 = 7469U;
static int64_t x44 = INT64_MIN;
static volatile uint32_t x47 = UINT32_MAX;
static int16_t x52 = -185;
volatile int32_t t9 = 1;
uint64_t x58 = 632LLU;
int8_t x65 = INT8_MAX;
uint64_t x66 = UINT64_MAX;
int32_t x69 = INT32_MAX;
int16_t x74 = INT16_MIN;
static uint8_t x91 = 3U;
int64_t x98 = -1LL;
int32_t x99 = -1;
static uint32_t x103 = 10983637U;
int8_t x108 = INT8_MIN;
int64_t x116 = -1LL;
uint32_t x125 = 122967954U;
int64_t t22 = 5246796449930LL;
int32_t x159 = -1919202;
int16_t x160 = -6510;
int32_t t26 = 7355415;
static uint64_t t27 = 115LLU;
volatile int64_t t28 = -215943923818667179LL;
static int16_t x170 = INT16_MAX;
int64_t t29 = 0LL;
int64_t x173 = 43041431LL;
uint16_t x176 = UINT16_MAX;
volatile int64_t x178 = INT64_MIN;
int16_t x186 = INT16_MIN;
volatile uint64_t x191 = 505685797LLU;
int16_t x193 = -5557;
uint32_t t37 = 73768U;
static uint32_t x212 = 850033610U;
int16_t x214 = INT16_MAX;
static volatile int8_t x217 = INT8_MAX;
int8_t x219 = INT8_MIN;
static volatile int16_t x221 = INT16_MAX;
int64_t x228 = 156604LL;
int32_t x234 = -13488558;
int64_t x237 = INT64_MAX;
uint64_t x238 = 92LLU;
int8_t x239 = -2;
uint64_t x242 = 4974373861504LLU;
volatile int32_t t47 = -365;
volatile uint32_t x263 = UINT32_MAX;
int8_t x275 = INT8_MIN;
volatile int16_t x276 = -1;
int64_t x277 = INT64_MIN;
static volatile uint16_t x280 = 633U;
int32_t x287 = 124;
static volatile int32_t x293 = 247530;
static uint64_t x295 = 9110123643964LLU;
int32_t x301 = INT32_MIN;
uint8_t x326 = 2U;
volatile int64_t t62 = 19013LL;
static volatile uint32_t x329 = 3U;
volatile int8_t x330 = INT8_MIN;
int16_t x347 = 996;
uint32_t t70 = 27233U;
volatile int32_t x375 = -1;
static int64_t t72 = 25LL;
uint8_t x377 = UINT8_MAX;
int32_t x390 = INT32_MAX;
uint64_t x395 = 4209939137420480LLU;
volatile uint8_t x399 = UINT8_MAX;
uint64_t t77 = 221689643LLU;
static uint64_t x417 = UINT64_MAX;
uint64_t x418 = 5940626914472031LLU;
int8_t x419 = -52;
uint64_t t82 = 360228499162341033LLU;
volatile int16_t x430 = INT16_MIN;
int8_t x437 = INT8_MIN;
static volatile uint64_t t85 = 4536037623234313LLU;
static volatile int16_t x453 = -1;
volatile uint64_t x459 = UINT64_MAX;
uint64_t t89 = 2371951061LLU;
volatile uint64_t x462 = UINT64_MAX;
uint8_t x463 = 7U;
int64_t x470 = -1LL;
volatile int8_t x475 = INT8_MIN;
volatile int64_t t95 = -160LL;
uint64_t x489 = 148031007127026LLU;
uint64_t x504 = 1625531LLU;


void f0(void) {
	int32_t x1 = -35408;
	uint64_t x3 = 24726704LLU;
	uint32_t x4 = UINT32_MAX;
	volatile uint64_t t0 = 1103434120886561183LLU;

	t0 = ((x1-(x2+x3))^x4);

	if (t0 != 18446744069439379198LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int64_t x6 = -1LL;
	static uint16_t x7 = 348U;
	volatile int16_t x8 = -1;

	t1 = ((x5-(x6+x7))^x8);

	if (t1 != 33114LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x10 = 71U;
	int32_t x11 = -13;
	int32_t x12 = -1;
	int32_t t2 = -181427;

	t2 = ((x9-(x10+x11))^x12);

	if (t2 != 58) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	static int8_t x18 = 3;
	uint64_t x19 = UINT64_MAX;
	volatile uint64_t t3 = 12LLU;

	t3 = ((x17-(x18+x19))^x20);

	if (t3 != 32765LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MAX;
	int8_t x22 = INT8_MIN;
	int64_t x23 = -219760712895927LL;

	t4 = ((x21-(x22+x23))^x24);

	if (t4 != -219764765340106LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 2U;
	int64_t x26 = INT64_MIN;
	int64_t x27 = INT64_MAX;
	volatile int8_t x28 = INT8_MIN;
	volatile int64_t t5 = 652675774LL;

	t5 = ((x25-(x26+x27))^x28);

	if (t5 != -125LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = -33066076;
	static uint32_t x38 = 157088U;
	uint64_t x39 = 16039748155LLU;
	int64_t x40 = 10LL;

	t6 = ((x37-(x38+x39))^x40);

	if (t6 != 18446744057636580291LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = INT16_MAX;
	volatile int32_t x42 = 1144054;
	volatile int64_t t7 = 100385288LL;

	t7 = ((x41-(x42+x43))^x44);

	if (t7 != 9223372036853657052LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = 365LLU;
	static uint32_t x46 = UINT32_MAX;
	volatile int32_t x48 = INT32_MIN;
	volatile uint64_t t8 = 854778481418LLU;

	t8 = ((x45-(x46+x47))^x48);

	if (t8 != 2147484015LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MAX;
	int16_t x51 = 70;

	t9 = ((x49-(x50+x51))^x52);

	if (t9 != 32892) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x57 = UINT32_MAX;
	volatile uint16_t x59 = UINT16_MAX;
	uint32_t x60 = 7519U;
	uint64_t t10 = 664LLU;

	t10 = ((x57-(x58+x59))^x60);

	if (t10 != 4294893783LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x67 = INT16_MIN;
	uint8_t x68 = UINT8_MAX;
	volatile uint64_t t11 = 8086395581745403894LLU;

	t11 = ((x65-(x66+x67))^x68);

	if (t11 != 32895LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x70 = INT32_MIN;
	uint32_t x71 = 2293984U;
	volatile int8_t x72 = INT8_MIN;
	static uint32_t t12 = 2058989U;

	t12 = ((x69-(x70+x71))^x72);

	if (t12 != 2293919U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x73 = -1;
	int16_t x75 = INT16_MAX;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = ((x73-(x74+x75))^x76);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = INT32_MIN;
	int64_t x78 = 4152442600469018944LL;
	volatile uint8_t x79 = UINT8_MAX;
	int8_t x80 = INT8_MIN;
	int64_t t14 = 1044817898LL;

	t14 = ((x77-(x78+x79))^x80);

	if (t14 != 4152442602616502849LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = UINT8_MAX;
	int64_t x82 = 2813786207LL;
	static volatile int16_t x83 = 1;
	int8_t x84 = -11;
	volatile int64_t t15 = 912643021LL;

	t15 = ((x81-(x82+x83))^x84);

	if (t15 != 2813785962LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x89 = INT64_MIN;
	int16_t x90 = -3875;
	volatile int64_t x92 = -7310LL;
	volatile int64_t t16 = 2135256140637031LL;

	t16 = ((x89-(x90+x91))^x92);

	if (t16 != 9223372036854770770LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x97 = UINT16_MAX;
	int8_t x100 = INT8_MIN;
	int64_t t17 = -448339678836481LL;

	t17 = ((x97-(x98+x99))^x100);

	if (t17 != -65663LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x101 = 18588U;
	int32_t x102 = INT32_MIN;
	int8_t x104 = INT8_MAX;
	uint32_t t18 = 62893U;

	t18 = ((x101-(x102+x103))^x104);

	if (t18 != 2136518584U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MIN;
	static uint64_t x107 = 241127294LLU;
	volatile uint64_t t19 = 149316746607LLU;

	t19 = ((x105-(x106+x107))^x108);

	if (t19 != 241159810LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x113 = 202407U;
	volatile int16_t x114 = INT16_MAX;
	volatile int8_t x115 = INT8_MIN;
	int64_t t20 = -932483965645806421LL;

	t20 = ((x113-(x114+x115))^x116);

	if (t20 != -169769LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x117 = INT8_MAX;
	volatile int16_t x118 = INT16_MIN;
	int8_t x119 = 1;
	int64_t x120 = -1LL;
	volatile int64_t t21 = 26794584LL;

	t21 = ((x117-(x118+x119))^x120);

	if (t21 != -32895LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x126 = -1633985999LL;
	int16_t x127 = INT16_MAX;
	volatile int8_t x128 = INT8_MAX;

	t22 = ((x125-(x126+x127))^x128);

	if (t22 != 1756921117LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = INT16_MAX;
	int32_t x130 = -1;
	int8_t x131 = INT8_MIN;
	static volatile int16_t x132 = -1;
	int32_t t23 = -1794;

	t23 = ((x129-(x130+x131))^x132);

	if (t23 != -32897) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x133 = 0;
	volatile uint64_t x134 = 969LLU;
	int32_t x135 = INT32_MIN;
	static int16_t x136 = INT16_MIN;
	volatile uint64_t t24 = 267739982822317LLU;

	t24 = ((x133-(x134+x135))^x136);

	if (t24 != 18446744071562099767LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x153 = INT8_MIN;
	int8_t x154 = 1;
	volatile uint32_t x155 = 0U;
	volatile int64_t x156 = INT64_MIN;
	static int64_t t25 = -3LL;

	t25 = ((x153-(x154+x155))^x156);

	if (t25 != -9223372032559808641LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x157 = 1;
	static uint8_t x158 = UINT8_MAX;

	t26 = ((x157-(x158+x159))^x160);

	if (t26 != -1924746) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x161 = 17043;
	volatile int64_t x162 = 22091084266LL;
	uint64_t x163 = 478429LLU;
	int64_t x164 = -1LL;

	t27 = ((x161-(x162+x163))^x164);

	if (t27 != 22091545651LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x165 = INT16_MIN;
	volatile int64_t x166 = INT64_MAX;
	int32_t x167 = INT32_MIN;
	static int16_t x168 = INT16_MAX;

	t28 = ((x165-(x166+x167))^x168);

	if (t28 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x169 = INT64_MAX;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = 10U;

	t29 = ((x169-(x170+x171))^x172);

	if (t29 != 9223372036854743178LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x174 = 4U;
	int64_t x175 = -1LL;
	int64_t t30 = 640850373LL;

	t30 = ((x173-(x174+x175))^x176);

	if (t30 != 43007339LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x177 = INT64_MIN;
	static uint64_t x179 = 20LLU;
	int32_t x180 = INT32_MAX;
	volatile uint64_t t31 = 72985821550LLU;

	t31 = ((x177-(x178+x179))^x180);

	if (t31 != 18446744071562067987LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x181 = 0U;
	uint64_t x182 = 610834LLU;
	volatile int32_t x183 = INT32_MIN;
	static int16_t x184 = -539;
	uint64_t t32 = 1879404081LLU;

	t32 = ((x181-(x182+x183))^x184);

	if (t32 != 18446744071562678283LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x185 = -1525;
	int8_t x187 = INT8_MIN;
	int32_t x188 = -1;
	static volatile int32_t t33 = -52;

	t33 = ((x185-(x186+x187))^x188);

	if (t33 != -31372) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x189 = 0;
	int64_t x190 = -2LL;
	int64_t x192 = -1LL;
	volatile uint64_t t34 = 4405909751781512076LLU;

	t34 = ((x189-(x190+x191))^x192);

	if (t34 != 505685794LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x194 = 28136938U;
	uint32_t x195 = 371448U;
	static volatile int32_t x196 = 570;
	uint32_t t35 = 3U;

	t35 = ((x193-(x194+x195))^x196);

	if (t35 != 4266453843U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MIN;
	int64_t x199 = -3687182LL;
	uint32_t x200 = 8385U;
	int64_t t36 = 5069163804270LL;

	t36 = ((x197-(x198+x199))^x200);

	if (t36 != 3695567LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = INT32_MIN;
	int16_t x202 = -1;
	uint32_t x203 = 21U;
	volatile uint8_t x204 = 0U;

	t37 = ((x201-(x202+x203))^x204);

	if (t37 != 2147483628U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x209 = INT16_MIN;
	static uint8_t x210 = 113U;
	volatile uint64_t x211 = UINT64_MAX;
	uint64_t t38 = 57435LLU;

	t38 = ((x209-(x210+x211))^x212);

	if (t38 != 18446744072859485274LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x213 = 70446424422LLU;
	int8_t x215 = INT8_MAX;
	volatile int32_t x216 = INT32_MIN;
	uint64_t t39 = 8300274472LLU;

	t39 = ((x213-(x214+x215))^x216);

	if (t39 != 18446744004569506024LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x218 = INT16_MAX;
	int16_t x220 = INT16_MAX;
	static volatile int32_t t40 = -4364721;

	t40 = ((x217-(x218+x219))^x220);

	if (t40 != -257) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x222 = INT16_MIN;
	int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MIN;
	int32_t t41 = -10051;

	t41 = ((x221-(x222+x223))^x224);

	if (t41 != -2147385345) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x225 = 0;
	volatile int16_t x226 = INT16_MIN;
	static int16_t x227 = -1;
	int64_t t42 = -319571810498LL;

	t42 = ((x225-(x226+x227))^x228);

	if (t42 != 189373LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x229 = -12314;
	static volatile int32_t x230 = INT32_MIN;
	int32_t x231 = 48;
	int32_t x232 = INT32_MAX;
	volatile int32_t t43 = -15990050;

	t43 = ((x229-(x230+x231))^x232);

	if (t43 != 12361) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x233 = 443292U;
	uint16_t x235 = 1415U;
	int64_t x236 = INT64_MIN;
	int64_t t44 = 1912039LL;

	t44 = ((x233-(x234+x235))^x236);

	if (t44 != -9223372036840845373LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x240 = 229203324U;
	volatile uint64_t t45 = 60LLU;

	t45 = ((x237-(x238+x239))^x240);

	if (t45 != 9223372036625572569LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x241 = -1LL;
	static volatile uint8_t x243 = 34U;
	int64_t x244 = INT64_MAX;
	volatile uint64_t t46 = 1LLU;

	t46 = ((x241-(x242+x243))^x244);

	if (t46 != 9223377011228637346LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x249 = INT16_MIN;
	volatile int16_t x250 = 1754;
	volatile int16_t x251 = -67;
	volatile int8_t x252 = INT8_MIN;

	t47 = ((x249-(x250+x251))^x252);

	if (t47 != 34537) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x253 = 14U;
	static uint16_t x254 = 14U;
	volatile int32_t x255 = -138934;
	volatile uint8_t x256 = 9U;
	uint32_t t48 = 28U;

	t48 = ((x253-(x254+x255))^x256);

	if (t48 != 138943U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x257 = UINT8_MAX;
	int8_t x258 = INT8_MIN;
	uint64_t x259 = 1991LLU;
	static volatile int16_t x260 = INT16_MIN;
	uint64_t t49 = 2807868399LLU;

	t49 = ((x257-(x258+x259))^x260);

	if (t49 != 31160LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x261 = 119U;
	volatile uint8_t x262 = UINT8_MAX;
	uint32_t x264 = 3U;
	static volatile uint32_t t50 = 185U;

	t50 = ((x261-(x262+x263))^x264);

	if (t50 != 4294967162U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MIN;
	volatile uint64_t x267 = UINT64_MAX;
	int64_t x268 = INT64_MIN;
	uint64_t t51 = 3149959LLU;

	t51 = ((x265-(x266+x267))^x268);

	if (t51 != 9223372036854743169LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x273 = UINT64_MAX;
	int32_t x274 = 10722788;
	volatile uint64_t t52 = 7924769919286456LLU;

	t52 = ((x273-(x274+x275))^x276);

	if (t52 != 10722660LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x278 = UINT64_MAX;
	static uint32_t x279 = 49121398U;
	uint64_t t53 = 1LLU;

	t53 = ((x277-(x278+x279))^x280);

	if (t53 != 9223372036805654002LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x281 = INT8_MIN;
	volatile int8_t x282 = -3;
	static volatile int8_t x283 = INT8_MIN;
	static int64_t x284 = -1LL;
	static int64_t t54 = 54044778893LL;

	t54 = ((x281-(x282+x283))^x284);

	if (t54 != -4LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x285 = INT16_MIN;
	uint32_t x286 = 1815U;
	volatile int16_t x288 = -10070;
	volatile uint32_t t55 = 40U;

	t55 = ((x285-(x286+x287))^x288);

	if (t55 != 41159U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x289 = -3513594;
	volatile int16_t x290 = INT16_MIN;
	uint8_t x291 = UINT8_MAX;
	int16_t x292 = -1;
	volatile int32_t t56 = 106769;

	t56 = ((x289-(x290+x291))^x292);

	if (t56 != 3481080) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x294 = 12;
	static uint32_t x296 = 110324655U;
	volatile uint64_t t57 = 10685284942899LLU;

	t57 = ((x293-(x294+x295))^x296);

	if (t57 != 18446734963627239693LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x297 = INT16_MAX;
	int8_t x298 = INT8_MAX;
	static uint16_t x299 = 1203U;
	int32_t x300 = INT32_MIN;
	int32_t t58 = -506973;

	t58 = ((x297-(x298+x299))^x300);

	if (t58 != -2147452211) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x302 = -36599231LL;
	uint16_t x303 = UINT16_MAX;
	uint64_t x304 = UINT64_MAX;
	uint64_t t59 = 1315689668550434LLU;

	t59 = ((x301-(x302+x303))^x304);

	if (t59 != 2110949951LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x317 = UINT16_MAX;
	int8_t x318 = -36;
	uint16_t x319 = UINT16_MAX;
	int32_t x320 = -1;
	volatile int32_t t60 = -3973513;

	t60 = ((x317-(x318+x319))^x320);

	if (t60 != -37) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x321 = UINT8_MAX;
	int64_t x322 = INT64_MIN;
	int64_t x323 = 30211LL;
	int16_t x324 = -28;
	volatile int64_t t61 = 2447194902401386723LL;

	t61 = ((x321-(x322+x323))^x324);

	if (t61 != -9223372036854745832LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x325 = 1464307161315LL;
	uint16_t x327 = 4475U;
	int8_t x328 = 3;

	t62 = ((x325-(x326+x327))^x328);

	if (t62 != 1464307156837LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x331 = -3907267833809212993LL;
	int8_t x332 = -45;
	int64_t t63 = -2656128962455059LL;

	t63 = ((x329-(x330+x331))^x332);

	if (t63 != -3907267833809213161LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x333 = -1;
	uint64_t x334 = 4078419418LLU;
	int64_t x335 = -52403538LL;
	int16_t x336 = INT16_MAX;
	volatile uint64_t t64 = 889451640407LLU;

	t64 = ((x333-(x334+x335))^x336);

	if (t64 != 18446744069683519624LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x337 = 1174256396655445LLU;
	int8_t x338 = -7;
	int8_t x339 = -1;
	volatile uint16_t x340 = UINT16_MAX;
	static volatile uint64_t t65 = 1962370607LLU;

	t65 = ((x337-(x338+x339))^x340);

	if (t65 != 1174256396608674LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x345 = INT64_MAX;
	uint16_t x346 = UINT16_MAX;
	int8_t x348 = -1;
	static volatile int64_t t66 = 21377LL;

	t66 = ((x345-(x346+x347))^x348);

	if (t66 != -9223372036854709277LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x349 = -1;
	int32_t x350 = -1;
	static volatile int64_t x351 = INT64_MAX;
	int16_t x352 = INT16_MIN;
	int64_t t67 = 112686770659334LL;

	t67 = ((x349-(x350+x351))^x352);

	if (t67 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x353 = -26LL;
	uint64_t x354 = UINT64_MAX;
	volatile int64_t x355 = 52721LL;
	static int8_t x356 = -1;
	static volatile uint64_t t68 = 302862106547356227LLU;

	t68 = ((x353-(x354+x355))^x356);

	if (t68 != 52745LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x357 = 0U;
	volatile uint8_t x358 = 26U;
	int64_t x359 = -13408881623LL;
	int16_t x360 = INT16_MAX;
	static int64_t t69 = -950857048027066695LL;

	t69 = ((x357-(x358+x359))^x360);

	if (t69 != 13408875586LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x361 = UINT16_MAX;
	uint32_t x362 = 727513U;
	uint8_t x363 = UINT8_MAX;
	static volatile uint8_t x364 = 7U;

	t70 = ((x361-(x362+x363))^x364);

	if (t70 != 4294305056U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x369 = UINT32_MAX;
	int8_t x370 = -1;
	int16_t x371 = INT16_MAX;
	int64_t x372 = 133485LL;
	volatile int64_t t71 = -1742760322633676439LL;

	t71 = ((x369-(x370+x371))^x372);

	if (t71 != 4294805868LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x373 = -217;
	static uint32_t x374 = 2041U;
	int64_t x376 = INT64_MIN;

	t72 = ((x373-(x374+x375))^x376);

	if (t72 != -9223372032559810769LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x378 = 2044U;
	uint16_t x379 = 55U;
	volatile int32_t x380 = INT32_MIN;
	int32_t t73 = 3;

	t73 = ((x377-(x378+x379))^x380);

	if (t73 != 2147481804) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x381 = INT8_MIN;
	uint16_t x382 = 27993U;
	int16_t x383 = 12591;
	static int8_t x384 = -1;
	static int32_t t74 = 579088898;

	t74 = ((x381-(x382+x383))^x384);

	if (t74 != 40711) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x389 = 65U;
	static int32_t x391 = -953;
	static int16_t x392 = 25;
	int32_t t75 = -13615087;

	t75 = ((x389-(x390+x391))^x392);

	if (t75 != -2147482654) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x393 = 0;
	static uint32_t x394 = 32U;
	volatile uint32_t x396 = 60770U;
	volatile uint64_t t76 = 8078493654271LLU;

	t76 = ((x393-(x394+x395))^x396);

	if (t76 != 18442534134572174914LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x397 = INT32_MAX;
	uint64_t x398 = 838LLU;
	int8_t x400 = -1;

	t77 = ((x397-(x398+x399))^x400);

	if (t77 != 18446744071562069061LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x405 = 8U;
	uint16_t x406 = 4U;
	volatile int16_t x407 = INT16_MAX;
	uint16_t x408 = 1U;
	volatile int32_t t78 = 0;

	t78 = ((x405-(x406+x407))^x408);

	if (t78 != -32764) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x409 = 2U;
	static int16_t x410 = -1;
	int64_t x411 = -104LL;
	uint8_t x412 = 1U;
	volatile int64_t t79 = 193LL;

	t79 = ((x409-(x410+x411))^x412);

	if (t79 != 106LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x413 = -25;
	int32_t x414 = -155784;
	int32_t x415 = -105300140;
	static volatile uint16_t x416 = UINT16_MAX;
	volatile int32_t t80 = -83;

	t80 = ((x413-(x414+x415))^x416);

	if (t80 != 105504484) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x420 = INT32_MAX;
	uint64_t t81 = 245107737538113LLU;

	t81 = ((x417-(x418+x419))^x420);

	if (t81 != 18440803448841236523LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x425 = 25424740533945LLU;
	uint32_t x426 = UINT32_MAX;
	int16_t x427 = 7;
	int16_t x428 = INT16_MIN;

	t82 = ((x425-(x426+x427))^x428);

	if (t82 != 18446718648969021107LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x429 = 47191U;
	volatile int32_t x431 = -1748972;
	uint32_t x432 = 259326177U;
	volatile uint32_t t83 = 97U;

	t83 = ((x429-(x430+x431))^x432);

	if (t83 != 258926754U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x438 = -1LL;
	volatile int8_t x439 = -41;
	static uint16_t x440 = 3024U;
	static volatile int64_t t84 = 402978986434374052LL;

	t84 = ((x437-(x438+x439))^x440);

	if (t84 != -2950LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x441 = UINT16_MAX;
	static uint64_t x442 = 53LLU;
	int16_t x443 = INT16_MIN;
	volatile int16_t x444 = 2;

	t85 = ((x441-(x442+x443))^x444);

	if (t85 != 98248LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x445 = -1LL;
	volatile int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MIN;
	volatile int64_t x448 = 1098114353822981LL;
	volatile int64_t t86 = 89822456634LL;

	t86 = ((x445-(x446+x447))^x448);

	if (t86 != 1098114353855866LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x449 = 5U;
	static volatile int8_t x450 = INT8_MIN;
	static int8_t x451 = -1;
	static volatile uint32_t x452 = UINT32_MAX;
	uint32_t t87 = 57703629U;

	t87 = ((x449-(x450+x451))^x452);

	if (t87 != 4294967161U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x454 = INT16_MIN;
	int8_t x455 = 49;
	int16_t x456 = 174;
	volatile int32_t t88 = 1;

	t88 = ((x453-(x454+x455))^x456);

	if (t88 != 32608) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x457 = INT32_MIN;
	static int16_t x458 = INT16_MAX;
	volatile uint8_t x460 = 2U;

	t89 = ((x457-(x458+x459))^x460);

	if (t89 != 18446744071562035200LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x461 = UINT8_MAX;
	volatile int64_t x464 = INT64_MAX;
	volatile uint64_t t90 = 6LLU;

	t90 = ((x461-(x462+x463))^x464);

	if (t90 != 9223372036854775558LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x469 = 13U;
	int32_t x471 = 40;
	int8_t x472 = -32;
	volatile int64_t t91 = 16299182LL;

	t91 = ((x469-(x470+x471))^x472);

	if (t91 != 6LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x473 = 5LLU;
	int64_t x474 = INT64_MAX;
	static int64_t x476 = INT64_MAX;
	static volatile uint64_t t92 = 3034223721969LLU;

	t92 = ((x473-(x474+x475))^x476);

	if (t92 != 18446744073709551481LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x477 = 640356LLU;
	int64_t x478 = -3313067LL;
	static int32_t x479 = INT32_MIN;
	static int8_t x480 = -1;
	volatile uint64_t t93 = 315LLU;

	t93 = ((x477-(x478+x479))^x480);

	if (t93 != 18446744071558114544LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x481 = INT16_MIN;
	static volatile int32_t x482 = -91;
	uint16_t x483 = 60U;
	volatile uint8_t x484 = 2U;
	int32_t t94 = -439244;

	t94 = ((x481-(x482+x483))^x484);

	if (t94 != -32739) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x485 = UINT16_MAX;
	volatile int64_t x486 = -2LL;
	static uint16_t x487 = 4968U;
	int64_t x488 = -28LL;

	t95 = ((x485-(x486+x487))^x488);

	if (t95 != -60547LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x490 = UINT32_MAX;
	uint8_t x491 = UINT8_MAX;
	uint64_t x492 = 458LLU;
	static uint64_t t96 = 31559706958LLU;

	t96 = ((x489-(x490+x491))^x492);

	if (t96 != 148031007126846LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x493 = 3U;
	uint8_t x494 = 6U;
	static int8_t x495 = INT8_MIN;
	static int16_t x496 = -45;
	int32_t t97 = 834537526;

	t97 = ((x493-(x494+x495))^x496);

	if (t97 != -82) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x497 = -1;
	int16_t x498 = INT16_MIN;
	int32_t x499 = INT32_MAX;
	volatile int32_t x500 = INT32_MIN;
	volatile int32_t t98 = 10;

	t98 = ((x497-(x498+x499))^x500);

	if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x501 = -1;
	int16_t x502 = INT16_MIN;
	int64_t x503 = -1LL;
	uint64_t t99 = 564914460246872454LLU;

	t99 = ((x501-(x502+x503))^x504);

	if (t99 != 1592763LLU) { NG(); } else { ; }
	
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

