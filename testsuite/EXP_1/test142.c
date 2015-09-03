#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MAX;
uint16_t x3 = UINT16_MAX;
volatile int8_t x8 = -28;
int64_t x14 = INT64_MAX;
uint8_t x16 = 8U;
volatile int64_t t3 = -33997350044243LL;
volatile int32_t x17 = 6991;
static int16_t x28 = -5;
static uint8_t x31 = 4U;
volatile int64_t t7 = -2675065954820LL;
int32_t x35 = INT32_MAX;
volatile int64_t x52 = INT64_MIN;
uint32_t x54 = 80401821U;
uint32_t x60 = UINT32_MAX;
volatile int8_t x70 = -1;
int8_t x76 = 6;
int64_t t18 = -50568LL;
volatile int64_t x88 = INT64_MIN;
static volatile uint64_t t19 = 815810235082345LLU;
volatile int64_t x90 = -48550582883LL;
uint8_t x91 = UINT8_MAX;
uint64_t x92 = 101552596402751LLU;
int16_t x100 = -1;
volatile int32_t t21 = -200;
uint64_t x104 = 11367221633041832LLU;
uint64_t x111 = 53161751LLU;
static int8_t x130 = INT8_MAX;
volatile int32_t x136 = INT32_MAX;
uint16_t x153 = 1797U;
uint16_t x156 = 6U;
volatile int32_t t33 = -251;
static volatile int32_t t34 = 72535265;
int64_t x172 = -1LL;
volatile int64_t t37 = -105587040LL;
uint32_t x179 = UINT32_MAX;
volatile int16_t x181 = -1;
static uint64_t x184 = 302637940210149LLU;
uint16_t x191 = UINT16_MAX;
int32_t x192 = INT32_MAX;
static volatile int64_t t42 = 1533517498847851587LL;
int32_t x194 = -69031;
static int32_t x196 = INT32_MIN;
uint64_t x197 = UINT64_MAX;
int16_t x200 = -1;
uint64_t t44 = UINT64_MAX;
int32_t x202 = -17491161;
static uint64_t x208 = 4147413844LLU;
uint64_t t46 = 135510628106299342LLU;
int32_t x210 = -29978;
volatile uint8_t x229 = 111U;
uint32_t x231 = 318827225U;
int64_t x237 = -1LL;
volatile uint8_t x238 = 4U;
int32_t x239 = INT32_MAX;
int8_t x243 = INT8_MIN;
uint64_t x250 = UINT64_MAX;
uint64_t x251 = 7779414LLU;
volatile int32_t x256 = -1;
int8_t x261 = 2;
int32_t x262 = 6578564;
int16_t x284 = INT16_MIN;
uint32_t x285 = UINT32_MAX;
uint64_t x286 = UINT64_MAX;
int16_t x287 = INT16_MAX;
volatile uint32_t x303 = 138912U;
uint8_t x305 = UINT8_MAX;
int16_t x307 = INT16_MAX;
int16_t x315 = -3;
int32_t x332 = INT32_MIN;
volatile int64_t x337 = INT64_MIN;
static int16_t x341 = INT16_MIN;
int64_t x343 = 11LL;
uint16_t x345 = UINT16_MAX;
static int16_t x349 = INT16_MIN;
volatile uint64_t t79 = 11478339730172LLU;
static uint32_t x366 = UINT32_MAX;
volatile int16_t x370 = -1245;
int32_t x384 = INT32_MIN;
volatile int64_t x390 = 488LL;
static int64_t t86 = 384944246387LL;
static uint64_t x397 = 195469LLU;
uint64_t t88 = 503015543777391LLU;
int64_t t89 = INT64_MAX;
int64_t x413 = -1LL;
int32_t x415 = INT32_MAX;
static int32_t x416 = -1;
int64_t t91 = 13794579007154LL;
static volatile int32_t t92 = -4307;
uint16_t x422 = UINT16_MAX;
int16_t x424 = -171;
int16_t x425 = -1;
static int32_t x428 = 24;
static int16_t x439 = 0;
static int16_t x444 = INT16_MIN;
volatile uint32_t x446 = 1878U;
int64_t t99 = 138228898433188444LL;


void f0(void) {
	uint8_t x2 = 15U;
	uint8_t x4 = 2U;
	volatile int32_t t0 = -170193794;

	t0 = (((x1+x2)&x3)|x4);

	if (t0 != 142) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int32_t x6 = INT32_MIN;
	static int8_t x7 = INT8_MIN;
	volatile int64_t t1 = -285581790938765LL;

	t1 = (((x5+x6)&x7)|x8);

	if (t1 != -28LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 26U;
	uint8_t x10 = 3U;
	int8_t x11 = INT8_MIN;
	int16_t x12 = -18;
	volatile int32_t t2 = -153380;

	t2 = (((x9+x10)&x11)|x12);

	if (t2 != -18) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int8_t x15 = INT8_MIN;

	t3 = (((x13+x14)&x15)|x16);

	if (t3 != 9223372036854775688LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = -211868;
	volatile int32_t x19 = -1;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -921537;

	t4 = (((x17+x18)&x19)|x20);

	if (t4 != -8269) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 11U;
	int16_t x22 = INT16_MIN;
	static uint32_t x23 = 7U;
	int8_t x24 = -27;
	static uint32_t t5 = 21U;

	t5 = (((x21+x22)&x23)|x24);

	if (t5 != 4294967271U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 4;
	int16_t x26 = -1;
	volatile int64_t x27 = -1LL;
	volatile int64_t t6 = 16143LL;

	t6 = (((x25+x26)&x27)|x28);

	if (t6 != -5LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 129869879265LL;
	static int32_t x30 = -1;
	volatile int16_t x32 = -28;

	t7 = (((x29+x30)&x31)|x32);

	if (t7 != -28LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = INT8_MIN;
	int16_t x34 = INT16_MIN;
	static int16_t x36 = 35;
	static volatile int32_t t8 = 11;

	t8 = (((x33+x34)&x35)|x36);

	if (t8 != 2147450787) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 44941LLU;
	int32_t x38 = INT32_MIN;
	int16_t x39 = -2943;
	static int32_t x40 = INT32_MIN;
	volatile uint64_t t9 = 240461506581LLU;

	t9 = (((x37+x38)&x39)|x40);

	if (t9 != 18446744071562110081LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	static uint64_t x42 = UINT64_MAX;
	int64_t x43 = -1LL;
	int16_t x44 = INT16_MIN;
	static volatile uint64_t t10 = 9972117828322LLU;

	t10 = (((x41+x42)&x43)|x44);

	if (t10 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int64_t x46 = 315635618LL;
	int32_t x47 = -1;
	uint16_t x48 = UINT16_MAX;
	volatile int64_t t11 = -133LL;

	t11 = (((x45+x46)&x47)|x48);

	if (t11 != 315686911LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile uint16_t x50 = UINT16_MAX;
	uint8_t x51 = 3U;
	int64_t t12 = -6LL;

	t12 = (((x49+x50)&x51)|x52);

	if (t12 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 304509890LLU;
	int8_t x55 = INT8_MIN;
	int64_t x56 = INT64_MAX;
	volatile uint64_t t13 = 26133222433566LLU;

	t13 = (((x53+x54)&x55)|x56);

	if (t13 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int32_t x58 = INT32_MIN;
	int8_t x59 = INT8_MIN;
	static int64_t t14 = INT64_MAX;

	t14 = (((x57+x58)&x59)|x60);

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 0U;
	static int8_t x66 = INT8_MIN;
	static uint32_t x67 = 101905462U;
	volatile uint16_t x68 = 1856U;
	volatile uint32_t t15 = 2167U;

	t15 = (((x65+x66)&x67)|x68);

	if (t15 != 101906240U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 342U;
	volatile uint32_t x71 = UINT32_MAX;
	volatile int32_t x72 = INT32_MIN;
	uint32_t t16 = 438U;

	t16 = (((x69+x70)&x71)|x72);

	if (t16 != 2147483989U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = UINT64_MAX;
	static uint16_t x74 = 0U;
	uint8_t x75 = 3U;
	uint64_t t17 = 11449059598507159LLU;

	t17 = (((x73+x74)&x75)|x76);

	if (t17 != 7LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x77 = 0U;
	static int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MIN;
	static int16_t x80 = INT16_MIN;

	t18 = (((x77+x78)&x79)|x80);

	if (t18 != -32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = 159249LLU;
	uint32_t x86 = UINT32_MAX;
	int32_t x87 = INT32_MAX;

	t19 = (((x85+x86)&x87)|x88);

	if (t19 != 9223372036854935056LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MAX;
	uint64_t t20 = 98745697512405LLU;

	t20 = (((x89+x90)&x91)|x92);

	if (t20 != 101552596402879LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x97 = INT32_MIN;
	uint8_t x98 = UINT8_MAX;
	int8_t x99 = INT8_MAX;

	t21 = (((x97+x98)&x99)|x100);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = -1;
	int8_t x102 = INT8_MIN;
	int16_t x103 = -1;
	uint64_t t22 = UINT64_MAX;

	t22 = (((x101+x102)&x103)|x104);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x105 = 219U;
	uint32_t x106 = UINT32_MAX;
	int32_t x107 = INT32_MIN;
	int32_t x108 = INT32_MIN;
	volatile uint32_t t23 = 8992166U;

	t23 = (((x105+x106)&x107)|x108);

	if (t23 != 2147483648U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x109 = 966947637056135780LLU;
	uint64_t x110 = 42652207LLU;
	static int8_t x112 = 5;
	static volatile uint64_t t24 = 132010163909508563LLU;

	t24 = (((x109+x110)&x111)|x112);

	if (t24 != 19473431LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = 1755;
	static uint16_t x114 = UINT16_MAX;
	int64_t x115 = INT64_MIN;
	uint8_t x116 = UINT8_MAX;
	int64_t t25 = 21554743126737435LL;

	t25 = (((x113+x114)&x115)|x116);

	if (t25 != 255LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = INT64_MIN;
	static int32_t x118 = INT32_MAX;
	uint16_t x119 = UINT16_MAX;
	int64_t x120 = INT64_MAX;
	int64_t t26 = INT64_MAX;

	t26 = (((x117+x118)&x119)|x120);

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = 2U;
	uint32_t x126 = 385913U;
	int8_t x127 = 0;
	volatile int32_t x128 = -144598;
	volatile uint32_t t27 = 624427399U;

	t27 = (((x125+x126)&x127)|x128);

	if (t27 != 4294822698U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = UINT64_MAX;
	volatile int32_t x131 = -16354;
	uint8_t x132 = 49U;
	volatile uint64_t t28 = 93530261152415154LLU;

	t28 = (((x129+x130)&x131)|x132);

	if (t28 != 63LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = 3425662;
	int16_t x134 = 295;
	int8_t x135 = -1;
	int32_t t29 = INT32_MAX;

	t29 = (((x133+x134)&x135)|x136);

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = 1;
	int16_t x138 = INT16_MAX;
	int64_t x139 = INT64_MAX;
	static volatile uint8_t x140 = 0U;
	volatile int64_t t30 = -39LL;

	t30 = (((x137+x138)&x139)|x140);

	if (t30 != 32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x141 = UINT8_MAX;
	int64_t x142 = INT64_MIN;
	volatile uint64_t x143 = 12544571864544LLU;
	int16_t x144 = INT16_MIN;
	volatile uint64_t t31 = 2696LLU;

	t31 = (((x141+x142)&x143)|x144);

	if (t31 != 18446744073709519072LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x149 = INT8_MAX;
	uint16_t x150 = 58U;
	uint32_t x151 = UINT32_MAX;
	uint32_t x152 = 454U;
	uint32_t t32 = 103947567U;

	t32 = (((x149+x150)&x151)|x152);

	if (t32 != 511U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x154 = INT8_MIN;
	int8_t x155 = -2;

	t33 = (((x153+x154)&x155)|x156);

	if (t33 != 1670) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x157 = 47;
	static volatile uint16_t x158 = UINT16_MAX;
	int32_t x159 = INT32_MAX;
	int32_t x160 = INT32_MIN;

	t34 = (((x157+x158)&x159)|x160);

	if (t34 != -2147418066) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = 9;
	int8_t x162 = INT8_MIN;
	volatile uint8_t x163 = 4U;
	static uint64_t x164 = 1709807165421400LLU;
	static uint64_t t35 = 132LLU;

	t35 = (((x161+x162)&x163)|x164);

	if (t35 != 1709807165421400LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = 0;
	int8_t x166 = INT8_MIN;
	static int16_t x167 = 0;
	int16_t x168 = -1;
	int32_t t36 = -1951;

	t36 = (((x165+x166)&x167)|x168);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = -1;
	static int16_t x170 = INT16_MIN;
	int64_t x171 = -1LL;

	t37 = (((x169+x170)&x171)|x172);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x173 = 1U;
	static int8_t x174 = INT8_MIN;
	uint32_t x175 = UINT32_MAX;
	volatile int32_t x176 = INT32_MAX;
	uint32_t t38 = UINT32_MAX;

	t38 = (((x173+x174)&x175)|x176);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x177 = 5717536;
	volatile int16_t x178 = 265;
	int32_t x180 = 8482;
	uint32_t t39 = 25U;

	t39 = (((x177+x178)&x179)|x180);

	if (t39 != 5717803U) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x182 = 4;
	uint8_t x183 = 43U;
	uint64_t t40 = 3549643LLU;

	t40 = (((x181+x182)&x183)|x184);

	if (t40 != 302637940210151LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x185 = 34U;
	static int8_t x186 = INT8_MIN;
	volatile int64_t x187 = -7183683LL;
	volatile uint8_t x188 = 2U;
	volatile int64_t t41 = 1984220862140912268LL;

	t41 = (((x185+x186)&x187)|x188);

	if (t41 != -7183710LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = INT64_MIN;
	static int32_t x190 = INT32_MAX;

	t42 = (((x189+x190)&x191)|x192);

	if (t42 != 2147483647LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = INT32_MAX;
	volatile uint8_t x195 = 115U;
	int32_t t43 = -192;

	t43 = (((x193+x194)&x195)|x196);

	if (t43 != -2147483568) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x198 = UINT32_MAX;
	int32_t x199 = INT32_MIN;

	t44 = (((x197+x198)&x199)|x200);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x201 = 519196U;
	uint16_t x203 = UINT16_MAX;
	int8_t x204 = -1;
	static uint32_t t45 = UINT32_MAX;

	t45 = (((x201+x202)&x203)|x204);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MAX;
	int64_t x206 = -1LL;
	int16_t x207 = 9782;

	t46 = (((x205+x206)&x207)|x208);

	if (t46 != 4147423094LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = -1;
	uint32_t x211 = UINT32_MAX;
	static int8_t x212 = INT8_MIN;
	uint32_t t47 = 7379U;

	t47 = (((x209+x210)&x211)|x212);

	if (t47 != 4294967269U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = -3545539617866384389LL;
	int32_t x214 = 1985;
	int16_t x215 = INT16_MIN;
	uint16_t x216 = 25187U;
	static int64_t t48 = -22526370LL;

	t48 = (((x213+x214)&x215)|x216);

	if (t48 != -3545539617866358173LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x225 = 2366928U;
	int32_t x226 = -16243;
	int64_t x227 = -1LL;
	uint64_t x228 = 51714856235941063LLU;
	static volatile uint64_t t49 = 112537585044LLU;

	t49 = (((x225+x226)&x227)|x228);

	if (t49 != 51714856238186207LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x230 = 65U;
	int8_t x232 = 0;
	volatile uint32_t t50 = 1361799018U;

	t50 = (((x229+x230)&x231)|x232);

	if (t50 != 144U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = -18821;
	int16_t x234 = INT16_MAX;
	int32_t x235 = INT32_MIN;
	int32_t x236 = -1;
	static int32_t t51 = 1;

	t51 = (((x233+x234)&x235)|x236);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x240 = INT16_MIN;
	volatile int64_t t52 = 603173857122568LL;

	t52 = (((x237+x238)&x239)|x240);

	if (t52 != -32765LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = -1;
	int8_t x242 = INT8_MAX;
	uint64_t x244 = 526769LLU;
	volatile uint64_t t53 = 64458819193987403LLU;

	t53 = (((x241+x242)&x243)|x244);

	if (t53 != 526769LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x249 = INT16_MIN;
	uint8_t x252 = UINT8_MAX;
	uint64_t t54 = 37498535845937018LLU;

	t54 = (((x249+x250)&x251)|x252);

	if (t54 != 7746815LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = -1;
	static int16_t x254 = INT16_MIN;
	uint32_t x255 = 8021U;
	static uint32_t t55 = UINT32_MAX;

	t55 = (((x253+x254)&x255)|x256);

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x263 = UINT64_MAX;
	int64_t x264 = -689348498981LL;
	static volatile uint64_t t56 = 0LLU;

	t56 = (((x261+x262)&x263)|x264);

	if (t56 != 18446743384365525471LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x265 = -1487;
	int8_t x266 = -1;
	volatile uint8_t x267 = 20U;
	int64_t x268 = -1LL;
	volatile int64_t t57 = 19079165843155963LL;

	t57 = (((x265+x266)&x267)|x268);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x269 = 2825964182733645609LLU;
	int8_t x270 = 0;
	int16_t x271 = INT16_MIN;
	volatile uint32_t x272 = 476424548U;
	uint64_t t58 = 3120723691679890LLU;

	t58 = (((x269+x270)&x271)|x272);

	if (t58 != 2825964182803163492LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = INT16_MIN;
	uint64_t x274 = 306LLU;
	static volatile int16_t x275 = INT16_MIN;
	int64_t x276 = -1LL;
	uint64_t t59 = UINT64_MAX;

	t59 = (((x273+x274)&x275)|x276);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x277 = 1;
	int8_t x278 = 1;
	volatile int64_t x279 = 34819LL;
	volatile int32_t x280 = INT32_MIN;
	volatile int64_t t60 = 2100890859845LL;

	t60 = (((x277+x278)&x279)|x280);

	if (t60 != -2147483646LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x281 = UINT16_MAX;
	static uint32_t x282 = 142638U;
	static volatile uint64_t x283 = UINT64_MAX;
	uint64_t t61 = 2771429188LLU;

	t61 = (((x281+x282)&x283)|x284);

	if (t61 != 18446744073709530413LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x288 = 31U;
	volatile uint64_t t62 = 707570888354322LLU;

	t62 = (((x285+x286)&x287)|x288);

	if (t62 != 32767LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x293 = -1;
	int16_t x294 = -1;
	int8_t x295 = INT8_MIN;
	int32_t x296 = INT32_MAX;
	volatile int32_t t63 = -310077;

	t63 = (((x293+x294)&x295)|x296);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x297 = 93U;
	uint64_t x298 = UINT64_MAX;
	static uint8_t x299 = 2U;
	volatile int16_t x300 = INT16_MAX;
	volatile uint64_t t64 = 117610555LLU;

	t64 = (((x297+x298)&x299)|x300);

	if (t64 != 32767LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = 122LL;
	int32_t x302 = INT32_MIN;
	int16_t x304 = INT16_MIN;
	volatile int64_t t65 = 464276246340925759LL;

	t65 = (((x301+x302)&x303)|x304);

	if (t65 != -32736LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x306 = INT16_MAX;
	int32_t x308 = INT32_MAX;
	int32_t t66 = INT32_MAX;

	t66 = (((x305+x306)&x307)|x308);

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x309 = INT8_MIN;
	volatile int32_t x310 = 56;
	uint16_t x311 = 15256U;
	volatile int8_t x312 = -1;
	static int32_t t67 = -7086411;

	t67 = (((x309+x310)&x311)|x312);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x313 = 1037U;
	uint8_t x314 = UINT8_MAX;
	uint8_t x316 = 0U;
	volatile int32_t t68 = -9731855;

	t68 = (((x313+x314)&x315)|x316);

	if (t68 != 1292) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x321 = INT8_MAX;
	int8_t x322 = INT8_MAX;
	uint64_t x323 = UINT64_MAX;
	uint32_t x324 = UINT32_MAX;
	uint64_t t69 = 142654749660148LLU;

	t69 = (((x321+x322)&x323)|x324);

	if (t69 != 4294967295LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x325 = -2795334732664150616LL;
	int8_t x326 = -31;
	int16_t x327 = INT16_MAX;
	int8_t x328 = INT8_MAX;
	volatile int64_t t70 = 16690829284411LL;

	t70 = (((x325+x326)&x327)|x328);

	if (t70 != 26111LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x329 = INT8_MIN;
	static int64_t x330 = -1LL;
	static uint32_t x331 = 3U;
	volatile int64_t t71 = 134663878126349671LL;

	t71 = (((x329+x330)&x331)|x332);

	if (t71 != -2147483645LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x333 = 1683759U;
	int8_t x334 = INT8_MIN;
	volatile int64_t x335 = -1LL;
	volatile int64_t x336 = INT64_MAX;
	volatile int64_t t72 = INT64_MAX;

	t72 = (((x333+x334)&x335)|x336);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x338 = 2LLU;
	int64_t x339 = -1LL;
	int32_t x340 = INT32_MIN;
	static uint64_t t73 = 1255514LLU;

	t73 = (((x337+x338)&x339)|x340);

	if (t73 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x342 = 2;
	uint16_t x344 = 479U;
	int64_t t74 = -98740773138649676LL;

	t74 = (((x341+x342)&x343)|x344);

	if (t74 != 479LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x346 = INT8_MIN;
	uint16_t x347 = UINT16_MAX;
	int8_t x348 = -1;
	int32_t t75 = -8839;

	t75 = (((x345+x346)&x347)|x348);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x350 = 108333U;
	int16_t x351 = INT16_MAX;
	int32_t x352 = INT32_MIN;
	static volatile uint32_t t76 = 253338U;

	t76 = (((x349+x350)&x351)|x352);

	if (t76 != 2147493677U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x353 = INT32_MAX;
	int16_t x354 = -12689;
	static int8_t x355 = INT8_MIN;
	static volatile int16_t x356 = -1;
	volatile int32_t t77 = -1213902;

	t77 = (((x353+x354)&x355)|x356);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x357 = INT64_MIN;
	volatile int32_t x358 = 133;
	int32_t x359 = INT32_MIN;
	uint8_t x360 = UINT8_MAX;
	static int64_t t78 = -3565529253566407LL;

	t78 = (((x357+x358)&x359)|x360);

	if (t78 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x361 = 31LLU;
	static int32_t x362 = INT32_MAX;
	int16_t x363 = INT16_MIN;
	uint16_t x364 = UINT16_MAX;

	t79 = (((x361+x362)&x363)|x364);

	if (t79 != 2147549183LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x365 = -6;
	volatile int16_t x367 = INT16_MIN;
	uint32_t x368 = 77U;
	static uint32_t t80 = 237417U;

	t80 = (((x365+x366)&x367)|x368);

	if (t80 != 4294934605U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x369 = INT16_MIN;
	uint16_t x371 = UINT16_MAX;
	static int32_t x372 = INT32_MIN;
	static int32_t t81 = -105916667;

	t81 = (((x369+x370)&x371)|x372);

	if (t81 != -2147452125) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x373 = 1U;
	uint64_t x374 = 27195125235321335LLU;
	volatile int32_t x375 = -1;
	static uint16_t x376 = 18U;
	static volatile uint64_t t82 = 0LLU;

	t82 = (((x373+x374)&x375)|x376);

	if (t82 != 27195125235321338LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x377 = INT64_MIN;
	int32_t x378 = 15660;
	int32_t x379 = INT32_MIN;
	int8_t x380 = INT8_MAX;
	volatile int64_t t83 = -30LL;

	t83 = (((x377+x378)&x379)|x380);

	if (t83 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x381 = -1;
	int8_t x382 = INT8_MIN;
	uint8_t x383 = 15U;
	static volatile int32_t t84 = 2;

	t84 = (((x381+x382)&x383)|x384);

	if (t84 != -2147483633) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x389 = -1;
	uint64_t x391 = 1LLU;
	int64_t x392 = INT64_MIN;
	static volatile uint64_t t85 = 136163880814569384LLU;

	t85 = (((x389+x390)&x391)|x392);

	if (t85 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x393 = INT32_MAX;
	static volatile int16_t x394 = INT16_MIN;
	static int64_t x395 = 5396LL;
	static int32_t x396 = -1;

	t86 = (((x393+x394)&x395)|x396);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x398 = INT64_MIN;
	volatile int16_t x399 = -1803;
	uint16_t x400 = 3U;
	uint64_t t87 = 31030150555LLU;

	t87 = (((x397+x398)&x399)|x400);

	if (t87 != 9223372036854970503LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x401 = UINT64_MAX;
	volatile uint8_t x402 = UINT8_MAX;
	uint64_t x403 = 89043LLU;
	uint8_t x404 = 20U;

	t88 = (((x401+x402)&x403)|x404);

	if (t88 != 214LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = INT32_MAX;
	int32_t x406 = INT32_MIN;
	static volatile int64_t x407 = INT64_MAX;
	uint32_t x408 = 51390U;

	t89 = (((x405+x406)&x407)|x408);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x409 = 8U;
	static int64_t x410 = 12428LL;
	static int64_t x411 = 455875015735215LL;
	uint64_t x412 = 3822585LLU;
	uint64_t t90 = 19901LLU;

	t90 = (((x409+x410)&x411)|x412);

	if (t90 != 3830781LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x414 = INT16_MAX;

	t91 = (((x413+x414)&x415)|x416);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x417 = 0U;
	volatile uint16_t x418 = 0U;
	int8_t x419 = INT8_MIN;
	int8_t x420 = 5;

	t92 = (((x417+x418)&x419)|x420);

	if (t92 != 5) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = -1;
	volatile int32_t x423 = -1;
	volatile int32_t t93 = 64946456;

	t93 = (((x421+x422)&x423)|x424);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x426 = 6265U;
	static volatile int16_t x427 = 8257;
	volatile int32_t t94 = 0;

	t94 = (((x425+x426)&x427)|x428);

	if (t94 != 88) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x429 = -85109761;
	int16_t x430 = -1;
	int64_t x431 = -1LL;
	uint16_t x432 = UINT16_MAX;
	static volatile int64_t t95 = 841722258647LL;

	t95 = (((x429+x430)&x431)|x432);

	if (t95 != -85065729LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x433 = UINT64_MAX;
	volatile int32_t x434 = INT32_MIN;
	int32_t x435 = INT32_MIN;
	uint8_t x436 = 30U;
	volatile uint64_t t96 = 840595LLU;

	t96 = (((x433+x434)&x435)|x436);

	if (t96 != 18446744069414584350LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x437 = UINT32_MAX;
	static uint32_t x438 = UINT32_MAX;
	uint64_t x440 = 320890734894LLU;
	volatile uint64_t t97 = 4241753452554206561LLU;

	t97 = (((x437+x438)&x439)|x440);

	if (t97 != 320890734894LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x441 = -1LL;
	volatile int16_t x442 = 445;
	uint16_t x443 = 207U;
	int64_t t98 = -7659LL;

	t98 = (((x441+x442)&x443)|x444);

	if (t98 != -32628LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x445 = INT64_MIN;
	int64_t x447 = INT64_MIN;
	uint32_t x448 = UINT32_MAX;

	t99 = (((x445+x446)&x447)|x448);

	if (t99 != -9223372032559808513LL) { NG(); } else { ; }
	
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

