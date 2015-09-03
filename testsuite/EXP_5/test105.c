#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 55;
int64_t x20 = INT64_MIN;
volatile int64_t x21 = -1023651403465339LL;
int64_t x28 = INT64_MIN;
int8_t x32 = INT8_MAX;
volatile int32_t x34 = 692216892;
volatile uint16_t x37 = 71U;
uint64_t x45 = 997696LLU;
int16_t x47 = INT16_MAX;
uint64_t t10 = 1321135669598314024LLU;
volatile int32_t t14 = 1;
int16_t x66 = 0;
uint8_t x68 = 62U;
uint16_t x76 = 3U;
int16_t x79 = 1513;
int8_t x87 = -1;
uint8_t x88 = 3U;
uint32_t x89 = 11756400U;
int32_t x90 = -3880853;
static int16_t x91 = -156;
int64_t x93 = -264289LL;
static int32_t x99 = -9444;
int32_t x107 = -1;
int32_t t25 = -237878440;
int8_t x109 = 0;
uint64_t x111 = 0LLU;
static int32_t t26 = 829358;
static volatile int32_t x130 = INT32_MAX;
volatile int32_t t31 = -3;
volatile uint16_t x152 = UINT16_MAX;
volatile uint64_t x160 = UINT64_MAX;
uint8_t x166 = 6U;
int16_t x170 = -1;
int64_t t37 = 9859987121LL;
static int8_t x187 = -1;
int32_t x203 = 121461;
static int32_t t46 = 120;
volatile uint8_t x213 = 3U;
int16_t x216 = -1;
static int16_t x228 = INT16_MIN;
static volatile int32_t x230 = 13;
uint16_t x232 = UINT16_MAX;
volatile int32_t t49 = 56;
uint32_t x244 = UINT32_MAX;
int32_t t51 = -11406855;
int64_t t52 = -1LL;
int16_t x249 = INT16_MIN;
static uint32_t x250 = 1039U;
int16_t x251 = -1;
volatile int16_t x258 = INT16_MIN;
int8_t x265 = -15;
int16_t x266 = INT16_MIN;
int64_t x268 = INT64_MAX;
volatile int32_t t57 = -338840656;
volatile int32_t x269 = INT32_MIN;
uint16_t x274 = 1U;
int8_t x282 = INT8_MIN;
int64_t x283 = INT64_MAX;
static uint16_t x286 = 1U;
uint16_t x288 = UINT16_MAX;
static int32_t t63 = -6169;
int8_t x301 = -1;
uint8_t x302 = 60U;
volatile int8_t x311 = 20;
static uint16_t x312 = 3U;
int32_t x314 = 1;
volatile int64_t x320 = -401260110100506959LL;
uint64_t x322 = UINT64_MAX;
static uint8_t x333 = UINT8_MAX;
int64_t x338 = INT64_MAX;
int32_t x340 = 1;
int32_t t74 = INT32_MAX;
static int32_t x347 = INT32_MIN;
static uint64_t x348 = 515178586490LLU;
volatile int16_t x378 = INT16_MIN;
static uint32_t x382 = 110U;
int8_t x391 = 0;
uint16_t x394 = 198U;
static int64_t x396 = INT64_MIN;
static volatile uint8_t x399 = 59U;
int16_t x415 = INT16_MAX;
uint8_t x416 = 5U;
static volatile int32_t x417 = -583;
int16_t x420 = INT16_MAX;
int32_t t89 = -4055;
uint32_t x424 = 842409U;
static volatile uint8_t x435 = 72U;
int16_t x438 = INT16_MIN;
volatile uint64_t x439 = 60LLU;
int32_t x452 = INT32_MAX;
int64_t t97 = -422391283138579004LL;
uint32_t x454 = 84857039U;


void f0(void) {
	uint32_t x1 = 340U;
	int8_t x2 = 0;
	int16_t x3 = INT16_MIN;
	int64_t x4 = -473551479394422LL;
	static uint32_t t0 = 20944U;

	t0 = (x1+((x2+x3)<x4));

	if (t0 != 340U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = UINT16_MAX;
	volatile int16_t x10 = INT16_MIN;
	int32_t x11 = -1;
	uint32_t x12 = 489808U;

	t1 = (x9+((x10+x11)<x12));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -422902646LL;
	volatile uint64_t x14 = UINT64_MAX;
	int8_t x15 = -32;
	int8_t x16 = INT8_MIN;
	static volatile int64_t t2 = 203484LL;

	t2 = (x13+((x14+x15)<x16));

	if (t2 != -422902646LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	int16_t x18 = INT16_MAX;
	int32_t x19 = INT32_MIN;
	volatile int32_t t3 = INT32_MIN;

	t3 = (x17+((x18+x19)<x20));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x22 = -1;
	volatile int32_t x23 = 435002760;
	uint16_t x24 = 9U;
	static int64_t t4 = 515224494583453130LL;

	t4 = (x21+((x22+x23)<x24));

	if (t4 != -1023651403465339LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x25 = 7259210LLU;
	int32_t x26 = INT32_MAX;
	volatile int8_t x27 = INT8_MIN;
	uint64_t t5 = 80LLU;

	t5 = (x25+((x26+x27)<x28));

	if (t5 != 7259210LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x29 = 83U;
	uint8_t x30 = 4U;
	volatile int32_t x31 = -1;
	static int32_t t6 = 1609;

	t6 = (x29+((x30+x31)<x32));

	if (t6 != 84) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	int32_t x35 = -99653;
	int32_t x36 = INT32_MIN;
	int64_t t7 = -62280999LL;

	t7 = (x33+((x34+x35)<x36));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x38 = 36U;
	int32_t x39 = -1;
	static int32_t x40 = INT32_MAX;
	int32_t t8 = -482374;

	t8 = (x37+((x38+x39)<x40));

	if (t8 != 72) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 1823U;
	volatile int8_t x42 = INT8_MAX;
	uint8_t x43 = UINT8_MAX;
	static int64_t x44 = -124258217333315848LL;
	static uint32_t t9 = 204970U;

	t9 = (x41+((x42+x43)<x44));

	if (t9 != 1823U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x46 = 290;
	uint8_t x48 = 14U;

	t10 = (x45+((x46+x47)<x48));

	if (t10 != 997696LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MAX;
	int8_t x50 = INT8_MIN;
	uint64_t x51 = 598121329900815LLU;
	uint32_t x52 = 4U;
	volatile int32_t t11 = -1;

	t11 = (x49+((x50+x51)<x52));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = -13414390LL;
	int64_t x54 = 387972LL;
	static uint64_t x55 = UINT64_MAX;
	int8_t x56 = INT8_MAX;
	int64_t t12 = -6LL;

	t12 = (x53+((x54+x55)<x56));

	if (t12 != -13414390LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = UINT64_MAX;
	int64_t x58 = 59143552267LL;
	volatile uint64_t x59 = 10794443126928LLU;
	static int32_t x60 = INT32_MIN;
	static uint64_t t13 = 1LLU;

	t13 = (x57+((x58+x59)<x60));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = 3837;
	static volatile uint32_t x62 = UINT32_MAX;
	int64_t x63 = -1LL;
	int8_t x64 = INT8_MAX;

	t14 = (x61+((x62+x63)<x64));

	if (t14 != 3837) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	static uint16_t x67 = 12U;
	volatile int32_t t15 = 53662845;

	t15 = (x65+((x66+x67)<x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x69 = -1LL;
	uint32_t x70 = 1U;
	volatile int8_t x71 = INT8_MAX;
	static int8_t x72 = INT8_MAX;
	volatile int64_t t16 = -490668LL;

	t16 = (x69+((x70+x71)<x72));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x73 = 14U;
	uint8_t x74 = 1U;
	volatile int32_t x75 = -1;
	int32_t t17 = -32470;

	t17 = (x73+((x74+x75)<x76));

	if (t17 != 15) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	static int32_t x78 = INT32_MIN;
	int32_t x80 = INT32_MIN;
	int32_t t18 = INT32_MIN;

	t18 = (x77+((x78+x79)<x80));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MIN;
	volatile int32_t x83 = INT32_MAX;
	int32_t x84 = -1;
	static volatile int64_t t19 = 0LL;

	t19 = (x81+((x82+x83)<x84));

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	int64_t x86 = -1LL;
	volatile int64_t t20 = -197798681LL;

	t20 = (x85+((x86+x87)<x88));

	if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x92 = INT16_MIN;
	uint32_t t21 = 3972542U;

	t21 = (x89+((x90+x91)<x92));

	if (t21 != 11756401U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x94 = INT16_MAX;
	int8_t x95 = INT8_MIN;
	static int32_t x96 = 124781934;
	static int64_t t22 = 1663679LL;

	t22 = (x93+((x94+x95)<x96));

	if (t22 != -264288LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = 434711215;
	volatile uint32_t x98 = 511U;
	uint64_t x100 = 117463018LLU;
	int32_t t23 = 837;

	t23 = (x97+((x98+x99)<x100));

	if (t23 != 434711215) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x101 = UINT16_MAX;
	volatile int16_t x102 = -1;
	int64_t x103 = 27618LL;
	volatile int8_t x104 = INT8_MIN;
	static int32_t t24 = -13940;

	t24 = (x101+((x102+x103)<x104));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x105 = 22U;
	static int8_t x106 = -5;
	uint64_t x108 = UINT64_MAX;

	t25 = (x105+((x106+x107)<x108));

	if (t25 != 23) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x110 = 23701127;
	static int8_t x112 = 0;

	t26 = (x109+((x110+x111)<x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = -52;
	static uint64_t x114 = 207102LLU;
	uint32_t x115 = UINT32_MAX;
	int32_t x116 = INT32_MIN;
	int32_t t27 = 28855590;

	t27 = (x113+((x114+x115)<x116));

	if (t27 != -51) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MIN;
	uint64_t x118 = UINT64_MAX;
	volatile int32_t x119 = INT32_MIN;
	volatile int64_t x120 = INT64_MIN;
	int32_t t28 = 5675829;

	t28 = (x117+((x118+x119)<x120));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = UINT32_MAX;
	int8_t x131 = -33;
	static int64_t x132 = INT64_MIN;
	uint32_t t29 = UINT32_MAX;

	t29 = (x129+((x130+x131)<x132));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x133 = 5U;
	int32_t x134 = 2;
	int64_t x135 = INT64_MIN;
	int8_t x136 = INT8_MIN;
	volatile int32_t t30 = -10;

	t30 = (x133+((x134+x135)<x136));

	if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 73U;
	int64_t x138 = -1LL;
	static volatile int8_t x139 = INT8_MAX;
	int64_t x140 = INT64_MAX;

	t31 = (x137+((x138+x139)<x140));

	if (t31 != 74) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x149 = INT32_MAX;
	int16_t x150 = INT16_MIN;
	static volatile int64_t x151 = 1586106775361979549LL;
	volatile int32_t t32 = INT32_MAX;

	t32 = (x149+((x150+x151)<x152));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = INT16_MIN;
	static uint64_t x154 = UINT64_MAX;
	static int32_t x155 = INT32_MIN;
	int32_t x156 = -1;
	static int32_t t33 = 219809;

	t33 = (x153+((x154+x155)<x156));

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = INT8_MIN;
	static int32_t x158 = INT32_MAX;
	uint32_t x159 = 1178149U;
	static int32_t t34 = -1;

	t34 = (x157+((x158+x159)<x160));

	if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = INT32_MIN;
	volatile int16_t x162 = 1;
	int16_t x163 = INT16_MIN;
	volatile uint32_t x164 = 8009U;
	volatile int32_t t35 = INT32_MIN;

	t35 = (x161+((x162+x163)<x164));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = 1;
	volatile int64_t x167 = -2684578LL;
	volatile uint32_t x168 = UINT32_MAX;
	int32_t t36 = 37;

	t36 = (x165+((x166+x167)<x168));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = -1LL;
	static volatile uint64_t x171 = 11022304076LLU;
	volatile uint8_t x172 = 12U;

	t37 = (x169+((x170+x171)<x172));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x173 = UINT32_MAX;
	int8_t x174 = INT8_MIN;
	int8_t x175 = INT8_MAX;
	static int32_t x176 = 4336;
	volatile uint32_t t38 = 14507U;

	t38 = (x173+((x174+x175)<x176));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = 26;
	uint8_t x178 = UINT8_MAX;
	int16_t x179 = INT16_MIN;
	uint32_t x180 = 878U;
	volatile int32_t t39 = -32051;

	t39 = (x177+((x178+x179)<x180));

	if (t39 != 26) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = -1;
	volatile uint16_t x182 = 6U;
	int32_t x183 = INT32_MIN;
	uint32_t x184 = 1770538U;
	int32_t t40 = 10293;

	t40 = (x181+((x182+x183)<x184));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MIN;
	uint8_t x186 = 12U;
	uint32_t x188 = 0U;
	int32_t t41 = -260589;

	t41 = (x185+((x186+x187)<x188));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x193 = INT16_MAX;
	int16_t x194 = -3904;
	volatile uint32_t x195 = 28668U;
	int64_t x196 = 17236LL;
	int32_t t42 = -1951981;

	t42 = (x193+((x194+x195)<x196));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x197 = INT8_MIN;
	static uint16_t x198 = UINT16_MAX;
	static uint32_t x199 = 219011U;
	volatile uint16_t x200 = 44U;
	int32_t t43 = 4396686;

	t43 = (x197+((x198+x199)<x200));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x201 = 2U;
	uint32_t x202 = 1U;
	uint16_t x204 = UINT16_MAX;
	int32_t t44 = -8070210;

	t44 = (x201+((x202+x203)<x204));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x205 = UINT8_MAX;
	static volatile uint16_t x206 = 2675U;
	uint8_t x207 = UINT8_MAX;
	volatile int32_t x208 = 19;
	volatile int32_t t45 = 4;

	t45 = (x205+((x206+x207)<x208));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x209 = INT16_MIN;
	int16_t x210 = INT16_MIN;
	uint8_t x211 = UINT8_MAX;
	int16_t x212 = INT16_MIN;

	t46 = (x209+((x210+x211)<x212));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x214 = 53009LLU;
	int64_t x215 = INT64_MIN;
	volatile int32_t t47 = -15;

	t47 = (x213+((x214+x215)<x216));

	if (t47 != 4) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = -46;
	static int8_t x226 = INT8_MIN;
	uint16_t x227 = 1U;
	int32_t t48 = 11269308;

	t48 = (x225+((x226+x227)<x228));

	if (t48 != -46) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x229 = INT16_MIN;
	static int64_t x231 = 206746LL;

	t49 = (x229+((x230+x231)<x232));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x233 = 85U;
	static int64_t x234 = -1LL;
	int64_t x235 = INT64_MAX;
	int16_t x236 = INT16_MAX;
	int32_t t50 = 1217217;

	t50 = (x233+((x234+x235)<x236));

	if (t50 != 85) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = INT16_MAX;
	static int16_t x242 = INT16_MIN;
	static uint64_t x243 = 6503LLU;

	t51 = (x241+((x242+x243)<x244));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x245 = 26LL;
	static int8_t x246 = INT8_MAX;
	uint64_t x247 = UINT64_MAX;
	volatile int64_t x248 = INT64_MAX;

	t52 = (x245+((x246+x247)<x248));

	if (t52 != 27LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x252 = UINT32_MAX;
	int32_t t53 = -1;

	t53 = (x249+((x250+x251)<x252));

	if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x253 = -17519LL;
	int16_t x254 = 495;
	int32_t x255 = 646851803;
	int32_t x256 = -1;
	int64_t t54 = 21637892183887976LL;

	t54 = (x253+((x254+x255)<x256));

	if (t54 != -17519LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x257 = 35256799LL;
	int16_t x259 = INT16_MIN;
	static uint8_t x260 = UINT8_MAX;
	volatile int64_t t55 = 1LL;

	t55 = (x257+((x258+x259)<x260));

	if (t55 != 35256800LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x261 = 5LL;
	volatile uint64_t x262 = 3979289LLU;
	int8_t x263 = INT8_MIN;
	volatile uint32_t x264 = 114U;
	volatile int64_t t56 = -543558151433LL;

	t56 = (x261+((x262+x263)<x264));

	if (t56 != 5LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x267 = UINT64_MAX;

	t57 = (x265+((x266+x267)<x268));

	if (t57 != -15) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x270 = 6940543LLU;
	uint32_t x271 = 7U;
	static int8_t x272 = -2;
	volatile int32_t t58 = -110;

	t58 = (x269+((x270+x271)<x272));

	if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = INT16_MIN;
	static int8_t x275 = -1;
	int64_t x276 = 1025089102767963929LL;
	volatile int32_t t59 = -892533023;

	t59 = (x273+((x274+x275)<x276));

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MIN;
	uint32_t x279 = UINT32_MAX;
	int8_t x280 = INT8_MIN;
	volatile int64_t t60 = 3LL;

	t60 = (x277+((x278+x279)<x280));

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = -1;
	uint64_t x284 = 3949813124524664741LLU;
	volatile int32_t t61 = 2946;

	t61 = (x281+((x282+x283)<x284));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x285 = -4;
	int16_t x287 = -1;
	volatile int32_t t62 = -712541051;

	t62 = (x285+((x286+x287)<x288));

	if (t62 != -3) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x293 = 59U;
	int64_t x294 = INT64_MIN;
	static int32_t x295 = INT32_MAX;
	static uint8_t x296 = 8U;

	t63 = (x293+((x294+x295)<x296));

	if (t63 != 60) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x297 = INT32_MIN;
	uint16_t x298 = UINT16_MAX;
	int64_t x299 = 177682821652155LL;
	int32_t x300 = 102;
	int32_t t64 = INT32_MIN;

	t64 = (x297+((x298+x299)<x300));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x303 = 4;
	uint8_t x304 = 59U;
	int32_t t65 = -65071;

	t65 = (x301+((x302+x303)<x304));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x309 = UINT8_MAX;
	static int32_t x310 = 28537;
	int32_t t66 = 4631;

	t66 = (x309+((x310+x311)<x312));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = -557547LL;
	static uint16_t x315 = UINT16_MAX;
	static uint32_t x316 = 1827U;
	volatile int64_t t67 = 517298071516187069LL;

	t67 = (x313+((x314+x315)<x316));

	if (t67 != -557547LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x317 = 251094531986845344LLU;
	int8_t x318 = 1;
	int64_t x319 = INT64_MIN;
	static volatile uint64_t t68 = 3487580LLU;

	t68 = (x317+((x318+x319)<x320));

	if (t68 != 251094531986845345LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x321 = -1LL;
	uint16_t x323 = 489U;
	volatile int16_t x324 = INT16_MIN;
	int64_t t69 = 8791828109982457LL;

	t69 = (x321+((x322+x323)<x324));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = INT8_MAX;
	int32_t x326 = 2;
	int32_t x327 = -1;
	uint32_t x328 = UINT32_MAX;
	static volatile int32_t t70 = -50182;

	t70 = (x325+((x326+x327)<x328));

	if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = 13670;
	static uint64_t x330 = UINT64_MAX;
	int64_t x331 = INT64_MIN;
	int8_t x332 = INT8_MAX;
	volatile int32_t t71 = -410;

	t71 = (x329+((x330+x331)<x332));

	if (t71 != 13670) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x334 = 46;
	int8_t x335 = INT8_MIN;
	static volatile uint16_t x336 = 1U;
	int32_t t72 = 257970350;

	t72 = (x333+((x334+x335)<x336));

	if (t72 != 256) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x337 = 203;
	static int16_t x339 = INT16_MIN;
	volatile int32_t t73 = -398;

	t73 = (x337+((x338+x339)<x340));

	if (t73 != 203) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = INT32_MAX;
	volatile uint64_t x342 = UINT64_MAX;
	int64_t x343 = -1625LL;
	int8_t x344 = 0;

	t74 = (x341+((x342+x343)<x344));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x345 = INT16_MAX;
	static int16_t x346 = 20;
	volatile int32_t t75 = -11;

	t75 = (x345+((x346+x347)<x348));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x349 = INT64_MIN;
	static uint8_t x350 = 53U;
	int64_t x351 = INT64_MIN;
	int32_t x352 = -1;
	volatile int64_t t76 = -171LL;

	t76 = (x349+((x350+x351)<x352));

	if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x353 = 33275406U;
	int8_t x354 = INT8_MAX;
	static int16_t x355 = 1;
	int8_t x356 = 1;
	volatile uint32_t t77 = 471392U;

	t77 = (x353+((x354+x355)<x356));

	if (t77 != 33275406U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x361 = 185;
	uint64_t x362 = 12730289LLU;
	int16_t x363 = -13;
	volatile int8_t x364 = INT8_MIN;
	static int32_t t78 = 139;

	t78 = (x361+((x362+x363)<x364));

	if (t78 != 186) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x365 = INT32_MAX;
	uint64_t x366 = 129003759332LLU;
	uint64_t x367 = UINT64_MAX;
	uint8_t x368 = 1U;
	static volatile int32_t t79 = INT32_MAX;

	t79 = (x365+((x366+x367)<x368));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x373 = 9U;
	uint16_t x374 = UINT16_MAX;
	int16_t x375 = -1;
	volatile int8_t x376 = INT8_MAX;
	static uint32_t t80 = 10U;

	t80 = (x373+((x374+x375)<x376));

	if (t80 != 9U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x377 = 9605U;
	int8_t x379 = -2;
	int16_t x380 = 4;
	int32_t t81 = 1;

	t81 = (x377+((x378+x379)<x380));

	if (t81 != 9606) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x381 = INT64_MAX;
	uint64_t x383 = 9050184959878LLU;
	uint8_t x384 = 120U;
	int64_t t82 = INT64_MAX;

	t82 = (x381+((x382+x383)<x384));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x385 = -1;
	uint16_t x386 = UINT16_MAX;
	static uint64_t x387 = 159222360004866133LLU;
	int8_t x388 = INT8_MAX;
	volatile int32_t t83 = -1;

	t83 = (x385+((x386+x387)<x388));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x389 = INT16_MAX;
	uint8_t x390 = 1U;
	uint16_t x392 = 0U;
	int32_t t84 = 1;

	t84 = (x389+((x390+x391)<x392));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x393 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	volatile int32_t t85 = -111145466;

	t85 = (x393+((x394+x395)<x396));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x397 = INT32_MIN;
	static int16_t x398 = INT16_MIN;
	int16_t x400 = INT16_MAX;
	volatile int32_t t86 = -530033;

	t86 = (x397+((x398+x399)<x400));

	if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x405 = 13230092816LLU;
	int32_t x406 = 108;
	volatile uint32_t x407 = 184640U;
	static int32_t x408 = INT32_MIN;
	static uint64_t t87 = 33912184288048803LLU;

	t87 = (x405+((x406+x407)<x408));

	if (t87 != 13230092817LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x413 = INT32_MIN;
	static int8_t x414 = INT8_MIN;
	int32_t t88 = INT32_MIN;

	t88 = (x413+((x414+x415)<x416));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x418 = 5U;
	uint16_t x419 = 27U;

	t89 = (x417+((x418+x419)<x420));

	if (t89 != -582) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x421 = -1LL;
	volatile uint64_t x422 = UINT64_MAX;
	int64_t x423 = INT64_MAX;
	int64_t t90 = 32880691364LL;

	t90 = (x421+((x422+x423)<x424));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x425 = 48636U;
	static int64_t x426 = 844795150450LL;
	static volatile int8_t x427 = INT8_MIN;
	int16_t x428 = INT16_MIN;
	volatile uint32_t t91 = 94U;

	t91 = (x425+((x426+x427)<x428));

	if (t91 != 48636U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x429 = 0;
	int64_t x430 = -25540LL;
	int32_t x431 = INT32_MAX;
	int32_t x432 = INT32_MIN;
	int32_t t92 = 1519356;

	t92 = (x429+((x430+x431)<x432));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x433 = 1;
	volatile uint8_t x434 = 9U;
	static int64_t x436 = INT64_MIN;
	static volatile int32_t t93 = 788;

	t93 = (x433+((x434+x435)<x436));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x437 = INT64_MIN;
	int32_t x440 = 45722;
	volatile int64_t t94 = INT64_MIN;

	t94 = (x437+((x438+x439)<x440));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x441 = -1426;
	int32_t x442 = INT32_MIN;
	uint32_t x443 = 15043349U;
	int16_t x444 = 0;
	volatile int32_t t95 = 1639;

	t95 = (x441+((x442+x443)<x444));

	if (t95 != -1426) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x445 = UINT32_MAX;
	int16_t x446 = INT16_MIN;
	static int8_t x447 = -1;
	volatile int16_t x448 = INT16_MAX;
	volatile uint32_t t96 = 63U;

	t96 = (x445+((x446+x447)<x448));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x449 = -1LL;
	static int8_t x450 = INT8_MIN;
	static int32_t x451 = INT32_MAX;

	t97 = (x449+((x450+x451)<x452));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x453 = -28906;
	int8_t x455 = 27;
	int8_t x456 = INT8_MIN;
	volatile int32_t t98 = -109962;

	t98 = (x453+((x454+x455)<x456));

	if (t98 != -28905) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x457 = UINT16_MAX;
	static uint8_t x458 = 19U;
	int16_t x459 = INT16_MIN;
	int8_t x460 = 1;
	volatile int32_t t99 = 12;

	t99 = (x457+((x458+x459)<x460));

	if (t99 != 65536) { NG(); } else { ; }
	
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

