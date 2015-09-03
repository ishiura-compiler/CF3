#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MIN;
uint32_t x8 = 1715998142U;
int32_t x11 = 1010511;
volatile int32_t x13 = -1;
uint32_t x18 = 412071813U;
int64_t x25 = 7419188199LL;
int32_t t6 = -48414;
static int8_t x30 = INT8_MAX;
static int32_t t7 = 2678691;
volatile uint64_t x33 = UINT64_MAX;
volatile uint64_t x35 = 15988LLU;
int32_t x36 = INT32_MIN;
static uint8_t x38 = UINT8_MAX;
int64_t x59 = 1LL;
static int8_t x74 = -2;
int64_t x76 = INT64_MIN;
volatile int16_t x77 = -1;
int64_t x78 = 3806565999LL;
uint8_t x79 = 2U;
static uint32_t x85 = UINT32_MAX;
uint8_t x87 = UINT8_MAX;
volatile int32_t t19 = 20;
int64_t x89 = INT64_MIN;
volatile int32_t x93 = -1;
int64_t x98 = -94605971437655LL;
int32_t t22 = INT32_MAX;
int16_t x102 = INT16_MAX;
volatile int8_t x114 = -42;
volatile int32_t t25 = -286;
int8_t x121 = -1;
volatile int64_t x126 = -1LL;
volatile int8_t x127 = INT8_MIN;
uint8_t x129 = 2U;
int32_t x130 = INT32_MIN;
static uint8_t x132 = UINT8_MAX;
uint32_t x137 = 168U;
int64_t x139 = -1LL;
static int16_t x144 = INT16_MIN;
volatile int32_t t32 = 144244483;
uint64_t x147 = 72002511291154652LLU;
int8_t x155 = INT8_MAX;
static int64_t x156 = -29394LL;
volatile int32_t x170 = INT32_MIN;
static volatile int32_t t38 = 85976011;
int8_t x173 = INT8_MIN;
int16_t x177 = -1;
int8_t x186 = -12;
static int16_t x188 = INT16_MIN;
int32_t t42 = 2;
int64_t x190 = -6088LL;
volatile int32_t x198 = INT32_MIN;
uint16_t x200 = 99U;
static int16_t x204 = INT16_MIN;
static volatile int32_t t46 = 431645642;
int32_t x207 = -1;
uint16_t x220 = 7U;
static volatile int32_t x224 = INT32_MIN;
int32_t t49 = INT32_MIN;
static int64_t x229 = 17055LL;
static volatile int16_t x233 = 0;
int32_t x241 = INT32_MIN;
int64_t x242 = INT64_MAX;
int64_t x244 = -1LL;
uint64_t x246 = 86892495LLU;
volatile int32_t t54 = -2417135;
uint32_t x254 = 10965U;
uint16_t x257 = UINT16_MAX;
static volatile uint8_t x264 = 28U;
int64_t x265 = 490LL;
volatile int32_t t59 = 384;
uint64_t x274 = 43040518313743LLU;
uint16_t x278 = 1U;
int32_t x291 = -1;
volatile int16_t x306 = INT16_MAX;
int64_t t67 = -386041971LL;
uint32_t x323 = 2002214035U;
uint8_t x328 = UINT8_MAX;
static uint32_t x329 = 44248718U;
int64_t x332 = INT64_MIN;
int16_t x336 = -1654;
int16_t x350 = -1;
volatile int64_t t77 = 409531901LL;
uint16_t x358 = 2U;
volatile int8_t x364 = 5;
int32_t x369 = 56;
uint64_t x370 = 3859674025335797LLU;
uint64_t x381 = 18090553LLU;
static int8_t x383 = -1;
int32_t t83 = 46;
int16_t x385 = -1;
static int32_t x387 = -1;
uint32_t x392 = UINT32_MAX;
uint64_t x402 = UINT64_MAX;
int32_t x406 = -1;
static volatile int64_t t87 = -1LL;
int32_t x409 = INT32_MAX;
static uint8_t x414 = UINT8_MAX;
volatile int64_t t89 = -5926296545LL;
static uint64_t x419 = 291633069080204LLU;
volatile int8_t x425 = 25;
uint16_t x426 = 13308U;
int32_t t92 = INT32_MAX;
static uint32_t x429 = 407U;
static uint8_t x431 = 21U;
int16_t x438 = INT16_MAX;
static int16_t x446 = 134;
static uint64_t x451 = 15376883LLU;
int16_t x454 = INT16_MAX;
int64_t x458 = INT64_MIN;
uint32_t x460 = 6U;
volatile uint32_t t98 = 27U;
int64_t x461 = INT64_MIN;
int64_t x463 = -1LL;
static int64_t x464 = INT64_MIN;
volatile int64_t t99 = INT64_MIN;


void f0(void) {
	uint16_t x1 = 361U;
	static int64_t x2 = -1LL;
	volatile int16_t x3 = -1;
	int64_t x4 = -10491144160723731LL;
	int64_t t0 = -1LL;

	t0 = ((x1==(x2+x3))^x4);

	if (t0 != -10491144160723731LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	volatile uint16_t x7 = UINT16_MAX;
	static uint32_t t1 = 37863203U;

	t1 = ((x5==(x6+x7))^x8);

	if (t1 != 1715998142U) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	volatile uint32_t x10 = UINT32_MAX;
	volatile int16_t x12 = INT16_MIN;
	static volatile int32_t t2 = 220005457;

	t2 = ((x9==(x10+x11))^x12);

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x14 = INT64_MIN;
	int16_t x15 = INT16_MAX;
	int64_t x16 = -1LL;
	static volatile int64_t t3 = -1828629339506LL;

	t3 = ((x13==(x14+x15))^x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -11;
	uint64_t x19 = 565357LLU;
	int8_t x20 = -60;
	volatile int32_t t4 = -16810;

	t4 = ((x17==(x18+x19))^x20);

	if (t4 != -60) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	static int8_t x22 = -2;
	static int16_t x23 = INT16_MAX;
	static int16_t x24 = -1;
	volatile int32_t t5 = 2026031;

	t5 = ((x21==(x22+x23))^x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MAX;
	int8_t x27 = -1;
	static volatile int32_t x28 = 8195;

	t6 = ((x25==(x26+x27))^x28);

	if (t6 != 8195) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -1LL;
	volatile uint16_t x31 = UINT16_MAX;
	volatile int8_t x32 = -1;

	t7 = ((x29==(x30+x31))^x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 53717254LLU;
	int32_t t8 = INT32_MIN;

	t8 = ((x33==(x34+x35))^x36);

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -96;
	uint64_t x39 = 938119993227334075LLU;
	int64_t x40 = -488049402190LL;
	static int64_t t9 = -293079681062632960LL;

	t9 = ((x37==(x38+x39))^x40);

	if (t9 != -488049402190LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int8_t x42 = INT8_MAX;
	uint64_t x43 = 1377693609LLU;
	uint8_t x44 = 26U;
	static volatile int32_t t10 = -21;

	t10 = ((x41==(x42+x43))^x44);

	if (t10 != 26) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint8_t x46 = 0U;
	int16_t x47 = 44;
	int64_t x48 = INT64_MIN;
	static volatile int64_t t11 = INT64_MIN;

	t11 = ((x45==(x46+x47))^x48);

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	static uint8_t x50 = UINT8_MAX;
	volatile uint16_t x51 = 20343U;
	volatile int16_t x52 = 20;
	volatile int32_t t12 = -92;

	t12 = ((x49==(x50+x51))^x52);

	if (t12 != 20) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = 180U;
	int32_t x58 = -1;
	volatile int64_t x60 = INT64_MAX;
	volatile int64_t t13 = INT64_MAX;

	t13 = ((x57==(x58+x59))^x60);

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 4;
	static volatile uint16_t x62 = UINT16_MAX;
	int32_t x63 = INT32_MIN;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t14 = -283040815;

	t14 = ((x61==(x62+x63))^x64);

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MIN;
	int8_t x70 = -1;
	int8_t x71 = INT8_MIN;
	volatile uint8_t x72 = 1U;
	volatile int32_t t15 = 428287652;

	t15 = ((x69==(x70+x71))^x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x73 = INT16_MIN;
	int8_t x75 = -25;
	volatile int64_t t16 = INT64_MIN;

	t16 = ((x73==(x74+x75))^x76);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x80 = 19U;
	volatile int32_t t17 = -453912432;

	t17 = ((x77==(x78+x79))^x80);

	if (t17 != 19) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x81 = 89;
	int32_t x82 = -1;
	uint8_t x83 = UINT8_MAX;
	static int32_t x84 = -1;
	int32_t t18 = -28;

	t18 = ((x81==(x82+x83))^x84);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x86 = INT64_MIN;
	int8_t x88 = -1;

	t19 = ((x85==(x86+x87))^x88);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x90 = 2;
	uint32_t x91 = UINT32_MAX;
	volatile int8_t x92 = INT8_MAX;
	volatile int32_t t20 = -53290146;

	t20 = ((x89==(x90+x91))^x92);

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x94 = 641778U;
	volatile int64_t x95 = 13388416102317326LL;
	uint8_t x96 = 4U;
	int32_t t21 = 532929462;

	t21 = ((x93==(x94+x95))^x96);

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -1;
	int8_t x99 = INT8_MIN;
	int32_t x100 = INT32_MAX;

	t22 = ((x97==(x98+x99))^x100);

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x101 = 507U;
	uint8_t x103 = 23U;
	uint64_t x104 = 1776522342275426LLU;
	uint64_t t23 = 8633363492683566LLU;

	t23 = ((x101==(x102+x103))^x104);

	if (t23 != 1776522342275426LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 0U;
	static uint8_t x106 = 1U;
	uint64_t x107 = 1001705383689696148LLU;
	int32_t x108 = -4218;
	volatile int32_t t24 = -10373969;

	t24 = ((x105==(x106+x107))^x108);

	if (t24 != -4218) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -1;
	uint64_t x115 = UINT64_MAX;
	uint16_t x116 = 2U;

	t25 = ((x113==(x114+x115))^x116);

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = INT64_MIN;
	uint64_t x118 = 825208664LLU;
	uint16_t x119 = 499U;
	uint32_t x120 = UINT32_MAX;
	uint32_t t26 = UINT32_MAX;

	t26 = ((x117==(x118+x119))^x120);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x122 = INT16_MAX;
	int32_t x123 = INT32_MIN;
	volatile int32_t x124 = -42;
	volatile int32_t t27 = -2599;

	t27 = ((x121==(x122+x123))^x124);

	if (t27 != -42) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MAX;
	int32_t x128 = INT32_MAX;
	volatile int32_t t28 = INT32_MAX;

	t28 = ((x125==(x126+x127))^x128);

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x131 = UINT32_MAX;
	volatile int32_t t29 = 215135;

	t29 = ((x129==(x130+x131))^x132);

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = INT16_MIN;
	static uint16_t x134 = 4U;
	int8_t x135 = -1;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t30 = -1180196;

	t30 = ((x133==(x134+x135))^x136);

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x138 = 91459;
	uint64_t x140 = 4729405075930LLU;
	static volatile uint64_t t31 = 34297601898402566LLU;

	t31 = ((x137==(x138+x139))^x140);

	if (t31 != 4729405075930LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x141 = 2945729503LLU;
	int8_t x142 = -1;
	int8_t x143 = -1;

	t32 = ((x141==(x142+x143))^x144);

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = INT8_MIN;
	int16_t x146 = -1672;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = ((x145==(x146+x147))^x148);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = INT8_MIN;
	uint64_t x150 = UINT64_MAX;
	volatile int16_t x151 = -145;
	int32_t x152 = INT32_MIN;
	int32_t t34 = INT32_MIN;

	t34 = ((x149==(x150+x151))^x152);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x153 = -1;
	int16_t x154 = 6;
	volatile int64_t t35 = -10473550748903665LL;

	t35 = ((x153==(x154+x155))^x156);

	if (t35 != -29394LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = 10;
	uint16_t x162 = UINT16_MAX;
	int8_t x163 = -1;
	uint32_t x164 = 9U;
	volatile uint32_t t36 = 217U;

	t36 = ((x161==(x162+x163))^x164);

	if (t36 != 9U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = INT16_MIN;
	uint16_t x166 = 3U;
	uint8_t x167 = 3U;
	volatile int8_t x168 = INT8_MAX;
	static volatile int32_t t37 = -1057719;

	t37 = ((x165==(x166+x167))^x168);

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = 1U;
	int16_t x171 = INT16_MAX;
	uint16_t x172 = 1754U;

	t38 = ((x169==(x170+x171))^x172);

	if (t38 != 1754) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x174 = UINT8_MAX;
	static uint16_t x175 = 0U;
	uint16_t x176 = 1U;
	int32_t t39 = 20;

	t39 = ((x173==(x174+x175))^x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x178 = INT16_MIN;
	int8_t x179 = -1;
	int16_t x180 = INT16_MAX;
	volatile int32_t t40 = -41721897;

	t40 = ((x177==(x178+x179))^x180);

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = -1LL;
	volatile uint64_t x182 = 219678LLU;
	uint8_t x183 = 1U;
	volatile uint32_t x184 = UINT32_MAX;
	uint32_t t41 = UINT32_MAX;

	t41 = ((x181==(x182+x183))^x184);

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x185 = INT8_MIN;
	int8_t x187 = 0;

	t42 = ((x185==(x186+x187))^x188);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = -92;
	int32_t x191 = -1;
	int16_t x192 = INT16_MAX;
	static volatile int32_t t43 = -1;

	t43 = ((x189==(x190+x191))^x192);

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x193 = 6787095288LL;
	static int8_t x194 = -1;
	int32_t x195 = 12748739;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t44 = 1;

	t44 = ((x193==(x194+x195))^x196);

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MAX;
	uint32_t x199 = 620U;
	int32_t t45 = 910188;

	t45 = ((x197==(x198+x199))^x200);

	if (t45 != 99) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = -1;
	uint64_t x202 = 10LLU;
	volatile int8_t x203 = -1;

	t46 = ((x201==(x202+x203))^x204);

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x205 = 35U;
	static int32_t x206 = 134509390;
	int8_t x208 = -49;
	int32_t t47 = 277671;

	t47 = ((x205==(x206+x207))^x208);

	if (t47 != -49) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x217 = 2452LL;
	int32_t x218 = INT32_MAX;
	static volatile uint32_t x219 = 469U;
	static int32_t t48 = -259397;

	t48 = ((x217==(x218+x219))^x220);

	if (t48 != 7) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x221 = UINT8_MAX;
	static volatile int32_t x222 = 164;
	uint32_t x223 = UINT32_MAX;

	t49 = ((x221==(x222+x223))^x224);

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x230 = 0;
	uint8_t x231 = 2U;
	int16_t x232 = 1;
	static volatile int32_t t50 = -45391142;

	t50 = ((x229==(x230+x231))^x232);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x234 = INT8_MAX;
	int32_t x235 = INT32_MIN;
	uint32_t x236 = 27282431U;
	uint32_t t51 = 6804U;

	t51 = ((x233==(x234+x235))^x236);

	if (t51 != 27282431U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x237 = 1U;
	int32_t x238 = INT32_MAX;
	int16_t x239 = -1;
	int64_t x240 = INT64_MAX;
	int64_t t52 = INT64_MAX;

	t52 = ((x237==(x238+x239))^x240);

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x243 = -1;
	static volatile int64_t t53 = 23106LL;

	t53 = ((x241==(x242+x243))^x244);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = INT32_MAX;
	int16_t x247 = INT16_MAX;
	int8_t x248 = INT8_MAX;

	t54 = ((x245==(x246+x247))^x248);

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = INT16_MAX;
	int16_t x250 = -1;
	uint8_t x251 = 9U;
	uint32_t x252 = 430281U;
	static uint32_t t55 = 181U;

	t55 = ((x249==(x250+x251))^x252);

	if (t55 != 430281U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x253 = -1;
	static uint32_t x255 = UINT32_MAX;
	volatile uint16_t x256 = 15474U;
	volatile int32_t t56 = 60073;

	t56 = ((x253==(x254+x255))^x256);

	if (t56 != 15474) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x258 = -1;
	int16_t x259 = -256;
	uint32_t x260 = UINT32_MAX;
	static uint32_t t57 = UINT32_MAX;

	t57 = ((x257==(x258+x259))^x260);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x261 = 14786803LLU;
	int16_t x262 = INT16_MIN;
	uint32_t x263 = UINT32_MAX;
	int32_t t58 = -503281339;

	t58 = ((x261==(x262+x263))^x264);

	if (t58 != 28) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x266 = INT16_MAX;
	int16_t x267 = INT16_MIN;
	int32_t x268 = -165530;

	t59 = ((x265==(x266+x267))^x268);

	if (t59 != -165530) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = INT8_MIN;
	uint8_t x270 = 29U;
	int16_t x271 = -4904;
	int16_t x272 = 4244;
	int32_t t60 = 424087273;

	t60 = ((x269==(x270+x271))^x272);

	if (t60 != 4244) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x273 = INT64_MAX;
	int64_t x275 = -1LL;
	volatile uint16_t x276 = 21U;
	static int32_t t61 = -5803;

	t61 = ((x273==(x274+x275))^x276);

	if (t61 != 21) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x277 = 5U;
	uint32_t x279 = UINT32_MAX;
	volatile int16_t x280 = -1;
	int32_t t62 = 781514651;

	t62 = ((x277==(x278+x279))^x280);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = -28;
	int8_t x286 = -53;
	int64_t x287 = INT64_MAX;
	static uint32_t x288 = 18985U;
	volatile uint32_t t63 = 13783U;

	t63 = ((x285==(x286+x287))^x288);

	if (t63 != 18985U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x289 = 7U;
	volatile int64_t x290 = 319LL;
	int8_t x292 = -1;
	static int32_t t64 = 673;

	t64 = ((x289==(x290+x291))^x292);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x297 = -3;
	uint16_t x298 = 3042U;
	static volatile uint16_t x299 = UINT16_MAX;
	int32_t x300 = INT32_MAX;
	int32_t t65 = INT32_MAX;

	t65 = ((x297==(x298+x299))^x300);

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MIN;
	int8_t x303 = INT8_MAX;
	uint64_t x304 = UINT64_MAX;
	uint64_t t66 = UINT64_MAX;

	t66 = ((x301==(x302+x303))^x304);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = INT8_MAX;
	int64_t x307 = -1LL;
	volatile int64_t x308 = -1LL;

	t67 = ((x305==(x306+x307))^x308);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x313 = INT8_MAX;
	int16_t x314 = 262;
	int8_t x315 = INT8_MIN;
	static int64_t x316 = -1LL;
	int64_t t68 = 2158479445491584112LL;

	t68 = ((x313==(x314+x315))^x316);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x317 = 349LL;
	int64_t x318 = INT64_MAX;
	int32_t x319 = INT32_MIN;
	uint32_t x320 = 6U;
	uint32_t t69 = 1359866U;

	t69 = ((x317==(x318+x319))^x320);

	if (t69 != 6U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x321 = 26764U;
	int16_t x322 = -1;
	int16_t x324 = -2;
	static int32_t t70 = -144406;

	t70 = ((x321==(x322+x323))^x324);

	if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x325 = 77U;
	int8_t x326 = INT8_MAX;
	int8_t x327 = INT8_MAX;
	volatile int32_t t71 = -64425;

	t71 = ((x325==(x326+x327))^x328);

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x330 = INT8_MIN;
	uint64_t x331 = 34247455682LLU;
	int64_t t72 = INT64_MIN;

	t72 = ((x329==(x330+x331))^x332);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x333 = INT8_MAX;
	static int16_t x334 = 174;
	int32_t x335 = INT32_MIN;
	int32_t t73 = -1;

	t73 = ((x333==(x334+x335))^x336);

	if (t73 != -1654) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x337 = UINT64_MAX;
	uint16_t x338 = 221U;
	volatile int32_t x339 = -1;
	volatile uint16_t x340 = UINT16_MAX;
	int32_t t74 = -36352700;

	t74 = ((x337==(x338+x339))^x340);

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x341 = -1LL;
	static int16_t x342 = INT16_MIN;
	int32_t x343 = INT32_MAX;
	uint32_t x344 = 7325107U;
	uint32_t t75 = 32575730U;

	t75 = ((x341==(x342+x343))^x344);

	if (t75 != 7325107U) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x349 = 8123315866451LL;
	int8_t x351 = INT8_MIN;
	static int8_t x352 = -1;
	volatile int32_t t76 = 2;

	t76 = ((x349==(x350+x351))^x352);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x353 = -14;
	uint8_t x354 = UINT8_MAX;
	uint8_t x355 = 124U;
	int64_t x356 = 615105LL;

	t77 = ((x353==(x354+x355))^x356);

	if (t77 != 615105LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x357 = INT32_MIN;
	int64_t x359 = INT64_MIN;
	volatile int64_t x360 = INT64_MIN;
	volatile int64_t t78 = INT64_MIN;

	t78 = ((x357==(x358+x359))^x360);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x361 = INT16_MAX;
	static int32_t x362 = 0;
	static uint8_t x363 = 2U;
	static int32_t t79 = -764;

	t79 = ((x361==(x362+x363))^x364);

	if (t79 != 5) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x371 = 3814542LLU;
	int8_t x372 = -50;
	int32_t t80 = -639617;

	t80 = ((x369==(x370+x371))^x372);

	if (t80 != -50) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x373 = INT64_MIN;
	int32_t x374 = -84607696;
	int16_t x375 = INT16_MAX;
	volatile uint8_t x376 = UINT8_MAX;
	static int32_t t81 = -4365;

	t81 = ((x373==(x374+x375))^x376);

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = -871271LL;
	int16_t x378 = -5002;
	volatile uint16_t x379 = UINT16_MAX;
	static uint8_t x380 = 71U;
	volatile int32_t t82 = 36;

	t82 = ((x377==(x378+x379))^x380);

	if (t82 != 71) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x382 = 2380U;
	volatile int8_t x384 = -5;

	t83 = ((x381==(x382+x383))^x384);

	if (t83 != -5) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x386 = 7U;
	int64_t x388 = INT64_MIN;
	volatile int64_t t84 = INT64_MIN;

	t84 = ((x385==(x386+x387))^x388);

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x389 = 0U;
	uint64_t x390 = 4LLU;
	uint8_t x391 = 0U;
	uint32_t t85 = UINT32_MAX;

	t85 = ((x389==(x390+x391))^x392);

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x401 = INT16_MIN;
	int64_t x403 = -18209180128829LL;
	int64_t x404 = INT64_MAX;
	int64_t t86 = INT64_MAX;

	t86 = ((x401==(x402+x403))^x404);

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x405 = 18U;
	uint32_t x407 = 3U;
	static int64_t x408 = 1LL;

	t87 = ((x405==(x406+x407))^x408);

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x410 = -1585;
	volatile int16_t x411 = -2051;
	int8_t x412 = INT8_MIN;
	volatile int32_t t88 = 278;

	t88 = ((x409==(x410+x411))^x412);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x413 = 948967546899LLU;
	volatile int32_t x415 = INT32_MIN;
	static int64_t x416 = -1LL;

	t89 = ((x413==(x414+x415))^x416);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x417 = INT16_MIN;
	uint64_t x418 = 370681999LLU;
	int16_t x420 = -1;
	static volatile int32_t t90 = 72665239;

	t90 = ((x417==(x418+x419))^x420);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x421 = 16271;
	int64_t x422 = -1360045558692334LL;
	int8_t x423 = INT8_MAX;
	int64_t x424 = INT64_MIN;
	static int64_t t91 = INT64_MIN;

	t91 = ((x421==(x422+x423))^x424);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x427 = -386962;
	int32_t x428 = INT32_MAX;

	t92 = ((x425==(x426+x427))^x428);

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x430 = -78822297LL;
	int8_t x432 = INT8_MAX;
	int32_t t93 = -72161;

	t93 = ((x429==(x430+x431))^x432);

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x437 = 233023747LL;
	uint32_t x439 = 0U;
	uint32_t x440 = 9159130U;
	static volatile uint32_t t94 = 984882U;

	t94 = ((x437==(x438+x439))^x440);

	if (t94 != 9159130U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x445 = -27LL;
	uint32_t x447 = UINT32_MAX;
	uint32_t x448 = 1843U;
	static volatile uint32_t t95 = 3014979U;

	t95 = ((x445==(x446+x447))^x448);

	if (t95 != 1843U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x449 = -2623;
	volatile uint16_t x450 = 7U;
	volatile int16_t x452 = -1;
	int32_t t96 = -5;

	t96 = ((x449==(x450+x451))^x452);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x453 = 0LLU;
	int16_t x455 = INT16_MIN;
	int32_t x456 = -17629;
	volatile int32_t t97 = 442;

	t97 = ((x453==(x454+x455))^x456);

	if (t97 != -17629) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x457 = 6U;
	static uint8_t x459 = 0U;

	t98 = ((x457==(x458+x459))^x460);

	if (t98 != 6U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x462 = 0U;

	t99 = ((x461==(x462+x463))^x464);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

