#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = INT8_MAX;
int32_t t0 = -15195;
int64_t t2 = 7264315814584LL;
static uint64_t x20 = 224589585919LLU;
int16_t x24 = INT16_MIN;
static uint64_t x28 = 0LLU;
uint8_t x33 = 29U;
volatile int8_t x35 = -1;
int64_t x47 = INT64_MIN;
static int64_t x49 = 35945LL;
int8_t x51 = -23;
int16_t x73 = -1;
int16_t x75 = INT16_MIN;
static uint64_t t13 = 3834LLU;
static int64_t x84 = -1LL;
volatile uint64_t t14 = 277004262131996LLU;
uint16_t x91 = 5122U;
uint16_t x92 = 1U;
volatile uint64_t t18 = 13236503074LLU;
static int64_t x106 = INT64_MAX;
int32_t x108 = INT32_MIN;
uint64_t t20 = 728961503235394858LLU;
static int32_t x113 = 450434;
uint16_t x115 = 2739U;
volatile int32_t x128 = -3962;
uint64_t t29 = 1116923970940545530LLU;
volatile int64_t x173 = -1LL;
uint8_t x175 = 102U;
int16_t x176 = INT16_MAX;
int32_t x178 = 16;
int64_t x179 = -801653073350LL;
int32_t x197 = 2;
static volatile uint32_t t36 = 691846972U;
uint16_t x205 = 32U;
int8_t x222 = INT8_MIN;
static int64_t x223 = -1LL;
int64_t t40 = 1LL;
int16_t x228 = -1;
volatile int32_t x236 = 1;
int32_t x238 = -170;
uint16_t x240 = UINT16_MAX;
static volatile int64_t t44 = 204228LL;
uint8_t x261 = 18U;
static volatile uint8_t x263 = 2U;
static volatile int32_t t46 = 73581;
volatile uint64_t x267 = UINT64_MAX;
int32_t x271 = INT32_MIN;
int8_t x272 = -1;
static int8_t x277 = INT8_MIN;
uint64_t x278 = 2206322802603374863LLU;
int64_t x279 = -197497658351513791LL;
int64_t x283 = INT64_MAX;
uint8_t x289 = 25U;
int16_t x291 = INT16_MIN;
int16_t x295 = 0;
static int32_t x315 = -22169;
volatile int32_t x326 = 108;
uint64_t x328 = UINT64_MAX;
int8_t x330 = 1;
volatile int16_t x336 = 3099;
volatile int32_t t63 = -3566;
volatile int64_t x344 = INT64_MIN;
int8_t x345 = INT8_MAX;
int16_t x346 = INT16_MIN;
uint32_t x355 = 12U;
uint32_t t68 = UINT32_MAX;
volatile uint64_t x364 = 5922140LLU;
uint16_t x372 = 727U;
static uint64_t x373 = 2925585138407277436LLU;
int16_t x376 = -1;
uint64_t t72 = UINT64_MAX;
int32_t t76 = 3534;
static int32_t x400 = -1;
int32_t x402 = -1;
static int16_t x404 = -1;
volatile int8_t x414 = -1;
static int8_t x418 = INT8_MAX;
volatile int64_t t82 = -131428007LL;
volatile int32_t x425 = 10;
int32_t x427 = INT32_MAX;
volatile uint32_t t84 = 16U;
volatile uint16_t x447 = 13088U;
int16_t x452 = 2;
int16_t x453 = INT16_MIN;
int64_t x455 = INT64_MIN;
int64_t t88 = -2992LL;
int64_t x480 = INT64_MIN;
int64_t x485 = INT64_MIN;
volatile int8_t x494 = -6;
static int16_t x505 = 5937;
volatile uint64_t t99 = 1LLU;


void f0(void) {
	int16_t x5 = -1;
	static volatile uint8_t x6 = 0U;
	uint8_t x7 = UINT8_MAX;

	t0 = (((x5*x6)&x7)^x8);

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 1U;
	int8_t x10 = INT8_MIN;
	static int8_t x11 = 0;
	int8_t x12 = INT8_MIN;
	volatile int32_t t1 = -12;

	t1 = (((x9*x10)&x11)^x12);

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 19U;
	volatile int32_t x14 = -11125121;
	uint32_t x15 = 1U;
	int64_t x16 = -1LL;

	t2 = (((x13*x14)&x15)^x16);

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 11;
	int16_t x18 = INT16_MAX;
	uint64_t x19 = 0LLU;
	uint64_t t3 = 10483LLU;

	t3 = (((x17*x18)&x19)^x20);

	if (t3 != 224589585919LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 0U;
	static int32_t x22 = INT32_MAX;
	int32_t x23 = INT32_MIN;
	int32_t t4 = -5900;

	t4 = (((x21*x22)&x23)^x24);

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 117260988LLU;
	volatile uint32_t x26 = 54U;
	static int16_t x27 = 1563;
	static uint64_t t5 = 62227667742625687LLU;

	t5 = (((x25*x26)&x27)^x28);

	if (t5 != 520LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -197201115993LL;
	volatile int8_t x30 = -4;
	int32_t x31 = -783;
	volatile uint16_t x32 = UINT16_MAX;
	int64_t t6 = -333429104065LL;

	t6 = (((x29*x30)&x31)^x32);

	if (t6 != 788804408223LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = 9536361;
	volatile int16_t x36 = INT16_MIN;
	volatile int32_t t7 = -1022;

	t7 = (((x33*x34)&x35)^x36);

	if (t7 != -276536603) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 0U;
	int64_t x42 = INT64_MIN;
	int64_t x43 = -1LL;
	int8_t x44 = -1;
	int64_t t8 = -2419863LL;

	t8 = (((x41*x42)&x43)^x44);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 69U;
	volatile uint16_t x46 = 73U;
	int8_t x48 = -3;
	static int64_t t9 = 638LL;

	t9 = (((x45*x46)&x47)^x48);

	if (t9 != -3LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x50 = 423U;
	int64_t x52 = INT64_MIN;
	volatile int64_t t10 = 5LL;

	t10 = (((x49*x50)&x51)^x52);

	if (t10 != -9223372036839571095LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = -1;
	int16_t x62 = -2;
	int16_t x63 = INT16_MIN;
	int64_t x64 = -1LL;
	volatile int64_t t11 = -13947415148219LL;

	t11 = (((x61*x62)&x63)^x64);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x69 = INT64_MAX;
	uint64_t x70 = UINT64_MAX;
	int64_t x71 = 1LL;
	volatile int8_t x72 = -24;
	volatile uint64_t t12 = 12413754LLU;

	t12 = (((x69*x70)&x71)^x72);

	if (t12 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x74 = 504673680078681LLU;
	int32_t x76 = -1;

	t13 = (((x73*x74)&x75)^x76);

	if (t13 != 504673680097279LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x81 = UINT32_MAX;
	uint64_t x82 = UINT64_MAX;
	static uint32_t x83 = 67U;

	t14 = (((x81*x82)&x83)^x84);

	if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x89 = 68U;
	static int8_t x90 = 1;
	volatile int32_t t15 = 3487249;

	t15 = (((x89*x90)&x91)^x92);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x93 = INT8_MIN;
	uint64_t x94 = 43261LLU;
	uint16_t x95 = 80U;
	uint32_t x96 = 41914U;
	uint64_t t16 = 602242180849LLU;

	t16 = (((x93*x94)&x95)^x96);

	if (t16 != 41914LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x97 = 364941356U;
	int16_t x98 = -541;
	static uint32_t x99 = 94142U;
	uint32_t x100 = 1058757464U;
	volatile uint32_t t17 = 210341U;

	t17 = (((x97*x98)&x99)^x100);

	if (t17 != 1058674780U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x101 = 232113LLU;
	int8_t x102 = INT8_MIN;
	int8_t x103 = 3;
	uint32_t x104 = UINT32_MAX;

	t18 = (((x101*x102)&x103)^x104);

	if (t18 != 4294967295LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x105 = UINT64_MAX;
	static int64_t x107 = -19LL;
	static volatile uint64_t t19 = 4434831934033171LLU;

	t19 = (((x105*x106)&x107)^x108);

	if (t19 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x109 = UINT64_MAX;
	static int32_t x110 = INT32_MIN;
	int16_t x111 = -671;
	uint8_t x112 = UINT8_MAX;

	t20 = (((x109*x110)&x111)^x112);

	if (t20 != 2147483903LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x114 = UINT8_MAX;
	volatile int32_t x116 = INT32_MAX;
	int32_t t21 = 11765309;

	t21 = (((x113*x114)&x115)^x116);

	if (t21 != 2147483085) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x117 = -1LL;
	volatile uint64_t x118 = 22382419LLU;
	static int8_t x119 = -1;
	static uint16_t x120 = 172U;
	static volatile uint64_t t22 = 21821713792984546LLU;

	t22 = (((x117*x118)&x119)^x120);

	if (t22 != 18446744073687169025LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x125 = 32U;
	uint16_t x126 = 4108U;
	static int32_t x127 = 1383;
	static int32_t t23 = -41;

	t23 = (((x125*x126)&x127)^x128);

	if (t23 != -3706) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x137 = -107223802LL;
	int16_t x138 = INT16_MIN;
	uint16_t x139 = UINT16_MAX;
	volatile int32_t x140 = -12459;
	int64_t t24 = 49981270861LL;

	t24 = (((x137*x138)&x139)^x140);

	if (t24 != -12459LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x145 = 109295144LLU;
	int16_t x146 = INT16_MIN;
	uint16_t x147 = 3U;
	int64_t x148 = INT64_MIN;
	uint64_t t25 = 36LLU;

	t25 = (((x145*x146)&x147)^x148);

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x149 = -1LL;
	volatile uint8_t x150 = UINT8_MAX;
	uint32_t x151 = 12075U;
	int32_t x152 = INT32_MAX;
	volatile int64_t t26 = -148614711LL;

	t26 = (((x149*x150)&x151)^x152);

	if (t26 != 2147471614LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x153 = UINT16_MAX;
	uint32_t x154 = 31U;
	int8_t x155 = INT8_MIN;
	uint64_t x156 = 3596026965LLU;
	uint64_t t27 = 12997859764721360LLU;

	t27 = (((x153*x154)&x155)^x156);

	if (t27 != 3595172821LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x161 = UINT64_MAX;
	int64_t x162 = INT64_MIN;
	int32_t x163 = -912;
	int16_t x164 = INT16_MIN;
	static volatile uint64_t t28 = 4LLU;

	t28 = (((x161*x162)&x163)^x164);

	if (t28 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x169 = 13253263LLU;
	static int8_t x170 = 4;
	uint32_t x171 = 201174247U;
	volatile uint16_t x172 = UINT16_MAX;

	t29 = (((x169*x170)&x171)^x172);

	if (t29 != 52975579LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x174 = 7013622974541399899LLU;
	volatile uint64_t t30 = 8853687282095342302LLU;

	t30 = (((x173*x174)&x175)^x176);

	if (t30 != 32731LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x177 = INT16_MAX;
	uint16_t x180 = UINT16_MAX;
	volatile int64_t t31 = -237271573LL;

	t31 = (((x177*x178)&x179)^x180);

	if (t31 != 9679LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x181 = UINT64_MAX;
	static int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MIN;
	volatile int8_t x184 = INT8_MIN;
	volatile uint64_t t32 = 97940370639072LLU;

	t32 = (((x181*x182)&x183)^x184);

	if (t32 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x189 = INT16_MIN;
	int32_t x190 = 7;
	int32_t x191 = INT32_MIN;
	int32_t x192 = INT32_MIN;
	int32_t t33 = 54;

	t33 = (((x189*x190)&x191)^x192);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x193 = UINT32_MAX;
	int16_t x194 = INT16_MIN;
	uint16_t x195 = 689U;
	volatile uint32_t x196 = UINT32_MAX;
	static uint32_t t34 = UINT32_MAX;

	t34 = (((x193*x194)&x195)^x196);

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x198 = 136424535U;
	int64_t x199 = INT64_MAX;
	volatile int32_t x200 = 2009;
	int64_t t35 = 150830330279748006LL;

	t35 = (((x197*x198)&x199)^x200);

	if (t35 != 272850807LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x201 = 208521U;
	volatile int32_t x202 = INT32_MIN;
	int8_t x203 = INT8_MAX;
	static int8_t x204 = INT8_MAX;

	t36 = (((x201*x202)&x203)^x204);

	if (t36 != 127U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x206 = -2;
	volatile uint32_t x207 = UINT32_MAX;
	static volatile int64_t x208 = INT64_MIN;
	volatile int64_t t37 = -3004LL;

	t37 = (((x205*x206)&x207)^x208);

	if (t37 != -9223372032559808576LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x213 = 1U;
	static int64_t x214 = -28LL;
	int16_t x215 = INT16_MAX;
	uint32_t x216 = 338U;
	volatile int64_t t38 = -2483141LL;

	t38 = (((x213*x214)&x215)^x216);

	if (t38 != 32438LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x217 = INT8_MIN;
	uint8_t x218 = UINT8_MAX;
	static int8_t x219 = INT8_MAX;
	int16_t x220 = 7090;
	static volatile int32_t t39 = 266311123;

	t39 = (((x217*x218)&x219)^x220);

	if (t39 != 7090) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x221 = 5U;
	int64_t x224 = -1LL;

	t40 = (((x221*x222)&x223)^x224);

	if (t40 != 639LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x225 = 615606;
	uint32_t x226 = UINT32_MAX;
	int16_t x227 = -1;
	volatile uint32_t t41 = 489828U;

	t41 = (((x225*x226)&x227)^x228);

	if (t41 != 615605U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x233 = 263U;
	int8_t x234 = -50;
	int16_t x235 = -432;
	static volatile int32_t t42 = 306536985;

	t42 = (((x233*x234)&x235)^x236);

	if (t42 != -13311) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x237 = 1U;
	uint16_t x239 = UINT16_MAX;
	volatile int32_t t43 = 100943186;

	t43 = (((x237*x238)&x239)^x240);

	if (t43 != 169) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x241 = 4LL;
	uint32_t x242 = UINT32_MAX;
	int8_t x243 = -1;
	int8_t x244 = INT8_MIN;

	t44 = (((x241*x242)&x243)^x244);

	if (t44 != -17179869060LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x249 = -391166078838LL;
	int8_t x250 = INT8_MIN;
	volatile int64_t x251 = -1LL;
	int8_t x252 = -1;
	volatile int64_t t45 = 141072823197LL;

	t45 = (((x249*x250)&x251)^x252);

	if (t45 != -50069258091265LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x262 = 53U;
	volatile int16_t x264 = 15069;

	t46 = (((x261*x262)&x263)^x264);

	if (t46 != 15071) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x265 = 15915U;
	int16_t x266 = -3735;
	uint16_t x268 = 4U;
	uint64_t t47 = 216LLU;

	t47 = (((x265*x266)&x267)^x268);

	if (t47 != 4235524775LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x269 = 93LLU;
	uint64_t x270 = 2LLU;
	uint64_t t48 = UINT64_MAX;

	t48 = (((x269*x270)&x271)^x272);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x273 = INT8_MAX;
	volatile int8_t x274 = -1;
	int32_t x275 = INT32_MIN;
	int16_t x276 = -1845;
	int32_t t49 = 4;

	t49 = (((x273*x274)&x275)^x276);

	if (t49 != 2147481803) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x280 = 525810057U;
	uint64_t t50 = 246904779206LLU;

	t50 = (((x277*x278)&x279)^x280);

	if (t50 != 12700160711829434761LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x281 = 956U;
	int16_t x282 = -1;
	int16_t x284 = INT16_MIN;
	int64_t t51 = -6991465104LL;

	t51 = (((x281*x282)&x283)^x284);

	if (t51 != -9223372036854743996LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x285 = 0U;
	static int16_t x286 = INT16_MIN;
	int16_t x287 = -1;
	int32_t x288 = -17;
	volatile int32_t t52 = -3667721;

	t52 = (((x285*x286)&x287)^x288);

	if (t52 != -17) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x290 = 15068362675LLU;
	int16_t x292 = 1;
	volatile uint64_t t53 = 1010187056331244401LLU;

	t53 = (((x289*x290)&x291)^x292);

	if (t53 != 376709054465LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x293 = -1;
	int64_t x294 = -345853LL;
	uint8_t x296 = 92U;
	volatile int64_t t54 = -61195LL;

	t54 = (((x293*x294)&x295)^x296);

	if (t54 != 92LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x297 = -37;
	volatile int8_t x298 = 60;
	static int8_t x299 = INT8_MIN;
	uint64_t x300 = UINT64_MAX;
	volatile uint64_t t55 = 166211700466332366LLU;

	t55 = (((x297*x298)&x299)^x300);

	if (t55 != 2303LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x301 = -1;
	int64_t x302 = 90909191231375LL;
	int32_t x303 = -1;
	static volatile int32_t x304 = 1634;
	int64_t t56 = -227883LL;

	t56 = (((x301*x302)&x303)^x304);

	if (t56 != -90909191229933LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x305 = INT8_MIN;
	volatile int32_t x306 = -16;
	volatile int64_t x307 = INT64_MAX;
	static int64_t x308 = -263259810555033LL;
	volatile int64_t t57 = 659401750601LL;

	t57 = (((x305*x306)&x307)^x308);

	if (t57 != -263259810557081LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x313 = -1;
	uint64_t x314 = UINT64_MAX;
	int64_t x316 = INT64_MAX;
	static volatile uint64_t t58 = 495183222249233LLU;

	t58 = (((x313*x314)&x315)^x316);

	if (t58 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x317 = INT64_MIN;
	static int8_t x318 = 0;
	int64_t x319 = INT64_MAX;
	uint64_t x320 = UINT64_MAX;
	uint64_t t59 = UINT64_MAX;

	t59 = (((x317*x318)&x319)^x320);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x321 = -3LL;
	int16_t x322 = -128;
	volatile int32_t x323 = INT32_MIN;
	uint16_t x324 = 313U;
	int64_t t60 = 11582626144LL;

	t60 = (((x321*x322)&x323)^x324);

	if (t60 != 313LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x325 = UINT16_MAX;
	uint64_t x327 = 115331672250173940LLU;
	volatile uint64_t t61 = 315258488040873LLU;

	t61 = (((x325*x326)&x327)^x328);

	if (t61 != 18446744073705174635LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x329 = INT32_MIN;
	int64_t x331 = -1LL;
	static int8_t x332 = INT8_MIN;
	volatile int64_t t62 = -6990077LL;

	t62 = (((x329*x330)&x331)^x332);

	if (t62 != 2147483520LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x333 = -1;
	int16_t x334 = -8882;
	int16_t x335 = -695;

	t63 = (((x333*x334)&x335)^x336);

	if (t63 != 11291) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x337 = INT64_MIN;
	volatile int8_t x338 = 0;
	static uint32_t x339 = UINT32_MAX;
	int8_t x340 = INT8_MIN;
	static volatile int64_t t64 = -5209213408539LL;

	t64 = (((x337*x338)&x339)^x340);

	if (t64 != -128LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x341 = INT16_MIN;
	int16_t x342 = -139;
	uint16_t x343 = 215U;
	int64_t t65 = INT64_MIN;

	t65 = (((x341*x342)&x343)^x344);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x347 = INT8_MIN;
	volatile uint16_t x348 = 2U;
	int32_t t66 = -269663883;

	t66 = (((x345*x346)&x347)^x348);

	if (t66 != -4161534) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x349 = INT32_MIN;
	uint16_t x350 = 0U;
	int32_t x351 = INT32_MIN;
	int16_t x352 = INT16_MAX;
	int32_t t67 = 136480;

	t67 = (((x349*x350)&x351)^x352);

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x353 = INT8_MIN;
	static uint16_t x354 = UINT16_MAX;
	int16_t x356 = -1;

	t68 = (((x353*x354)&x355)^x356);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x357 = UINT16_MAX;
	int32_t x358 = -1;
	int16_t x359 = INT16_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t69 = 1;

	t69 = (((x357*x358)&x359)^x360);

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x361 = 5U;
	int8_t x362 = -1;
	int16_t x363 = 1;
	static volatile uint64_t t70 = 224788689230LLU;

	t70 = (((x361*x362)&x363)^x364);

	if (t70 != 5922141LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x369 = -11203281043794LL;
	int32_t x370 = -7182;
	int64_t x371 = INT64_MIN;
	static volatile int64_t t71 = 7888668107LL;

	t71 = (((x369*x370)&x371)^x372);

	if (t71 != 727LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x374 = INT32_MIN;
	volatile uint16_t x375 = 10U;

	t72 = (((x373*x374)&x375)^x376);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x377 = 5U;
	static int8_t x378 = -1;
	static int8_t x379 = INT8_MIN;
	volatile int16_t x380 = -2;
	int32_t t73 = 5552;

	t73 = (((x377*x378)&x379)^x380);

	if (t73 != 126) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x381 = -1;
	volatile uint64_t x382 = 640812535464006LLU;
	uint8_t x383 = UINT8_MAX;
	int16_t x384 = -15;
	uint64_t t74 = 1248545788546LLU;

	t74 = (((x381*x382)&x383)^x384);

	if (t74 != 18446744073709551435LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x385 = INT16_MAX;
	int32_t x386 = -1;
	int16_t x387 = -1;
	uint8_t x388 = 1U;
	volatile int32_t t75 = -1718;

	t75 = (((x385*x386)&x387)^x388);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x393 = INT8_MAX;
	volatile uint16_t x394 = 105U;
	int8_t x395 = INT8_MAX;
	volatile int16_t x396 = INT16_MIN;

	t76 = (((x393*x394)&x395)^x396);

	if (t76 != -32745) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x397 = -1LL;
	int32_t x398 = INT32_MIN;
	static uint8_t x399 = 62U;
	int64_t t77 = 3088331581LL;

	t77 = (((x397*x398)&x399)^x400);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x401 = UINT32_MAX;
	int16_t x403 = -1;
	volatile uint32_t t78 = 56266466U;

	t78 = (((x401*x402)&x403)^x404);

	if (t78 != 4294967294U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x409 = INT64_MIN;
	static int8_t x410 = 0;
	uint8_t x411 = UINT8_MAX;
	uint32_t x412 = 119092U;
	volatile int64_t t79 = -34537831LL;

	t79 = (((x409*x410)&x411)^x412);

	if (t79 != 119092LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x413 = 345723142;
	uint8_t x415 = UINT8_MAX;
	static int64_t x416 = INT64_MAX;
	int64_t t80 = -540135208147LL;

	t80 = (((x413*x414)&x415)^x416);

	if (t80 != 9223372036854775557LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x417 = -1;
	static uint16_t x419 = 6U;
	int32_t x420 = 28772;
	int32_t t81 = -27;

	t81 = (((x417*x418)&x419)^x420);

	if (t81 != 28772) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x421 = INT64_MIN;
	uint8_t x422 = 0U;
	int64_t x423 = -1LL;
	uint16_t x424 = 8034U;

	t82 = (((x421*x422)&x423)^x424);

	if (t82 != 8034LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x426 = -477758503559LL;
	static volatile uint8_t x428 = 92U;
	volatile int64_t t83 = -2976914662742757LL;

	t83 = (((x425*x426)&x427)^x428);

	if (t83 != 566081254LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x429 = UINT32_MAX;
	int8_t x430 = INT8_MIN;
	static int16_t x431 = INT16_MAX;
	static int32_t x432 = 758432;

	t84 = (((x429*x430)&x431)^x432);

	if (t84 != 758304U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x445 = -1LL;
	volatile int16_t x446 = -11;
	int32_t x448 = 7990;
	volatile int64_t t85 = 9LL;

	t85 = (((x445*x446)&x447)^x448);

	if (t85 != 7990LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x449 = INT16_MIN;
	int16_t x450 = -4010;
	uint8_t x451 = 15U;
	volatile int32_t t86 = 1907;

	t86 = (((x449*x450)&x451)^x452);

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x454 = UINT32_MAX;
	static volatile int8_t x456 = -1;
	static int64_t t87 = 180374477546LL;

	t87 = (((x453*x454)&x455)^x456);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x457 = 3290470U;
	int8_t x458 = 26;
	int32_t x459 = -106345027;
	int64_t x460 = -1LL;

	t88 = (((x457*x458)&x459)^x460);

	if (t88 != -17386525LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x477 = -1;
	uint32_t x478 = 5U;
	int32_t x479 = INT32_MAX;
	volatile int64_t t89 = -734891225538546LL;

	t89 = (((x477*x478)&x479)^x480);

	if (t89 != -9223372034707292165LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x481 = -1;
	volatile int32_t x482 = -7;
	int8_t x483 = INT8_MIN;
	static uint32_t x484 = UINT32_MAX;
	uint32_t t90 = UINT32_MAX;

	t90 = (((x481*x482)&x483)^x484);

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x486 = 0;
	volatile int64_t x487 = INT64_MAX;
	uint64_t x488 = UINT64_MAX;
	static volatile uint64_t t91 = UINT64_MAX;

	t91 = (((x485*x486)&x487)^x488);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x489 = UINT32_MAX;
	static uint8_t x490 = 0U;
	volatile int64_t x491 = 2063LL;
	int16_t x492 = INT16_MIN;
	volatile int64_t t92 = -507691776371459LL;

	t92 = (((x489*x490)&x491)^x492);

	if (t92 != -32768LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x493 = -1LL;
	static volatile uint32_t x495 = UINT32_MAX;
	uint64_t x496 = UINT64_MAX;
	volatile uint64_t t93 = 11653LLU;

	t93 = (((x493*x494)&x495)^x496);

	if (t93 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x497 = INT8_MIN;
	int16_t x498 = -15;
	int64_t x499 = INT64_MIN;
	volatile int32_t x500 = 468427999;
	volatile int64_t t94 = 2982900598518LL;

	t94 = (((x497*x498)&x499)^x500);

	if (t94 != 468427999LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x506 = INT8_MIN;
	uint16_t x507 = 12916U;
	uint32_t x508 = 124U;
	volatile uint32_t t95 = 419702189U;

	t95 = (((x505*x506)&x507)^x508);

	if (t95 != 8828U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x509 = INT8_MAX;
	volatile uint16_t x510 = 496U;
	uint8_t x511 = 73U;
	static int8_t x512 = INT8_MIN;
	volatile int32_t t96 = 1;

	t96 = (((x509*x510)&x511)^x512);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x513 = UINT32_MAX;
	static uint8_t x514 = 3U;
	static volatile int32_t x515 = -1;
	volatile int64_t x516 = -128760216272683LL;
	int64_t t97 = 349060161762581LL;

	t97 = (((x513*x514)&x515)^x516);

	if (t97 != -128761727828184LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x521 = INT16_MIN;
	static volatile int16_t x522 = INT16_MAX;
	int8_t x523 = -1;
	static int64_t x524 = INT64_MIN;
	volatile int64_t t98 = -76090293977690152LL;

	t98 = (((x521*x522)&x523)^x524);

	if (t98 != 9223372035781066752LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x525 = 4530648068232026333LLU;
	int8_t x526 = -1;
	int8_t x527 = -7;
	int8_t x528 = -1;

	t99 = (((x525*x526)&x527)^x528);

	if (t99 != 4530648068232026334LLU) { NG(); } else { ; }
	
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

