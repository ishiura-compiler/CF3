#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -345597738LL;
volatile int64_t x6 = INT64_MIN;
int64_t t1 = 41LL;
static volatile int32_t x10 = -472;
volatile int64_t t2 = 41307696317177984LL;
uint16_t x16 = UINT16_MAX;
uint8_t x17 = 1U;
uint16_t x19 = 9240U;
static uint16_t x20 = UINT16_MAX;
volatile int32_t t4 = 31;
int16_t x27 = -114;
static int64_t t6 = -1714968503LL;
int8_t x35 = -7;
static int8_t x36 = INT8_MIN;
uint16_t x39 = 0U;
volatile int64_t t8 = -479113516924LL;
int16_t x43 = INT16_MAX;
int32_t t9 = -1321;
int64_t x47 = INT64_MIN;
static int32_t x49 = 2091;
int64_t x55 = -139184LL;
static volatile uint32_t x57 = UINT32_MAX;
volatile int16_t x66 = INT16_MIN;
uint8_t x69 = 12U;
static int16_t x74 = INT16_MIN;
static int16_t x89 = -1;
static uint16_t x91 = UINT16_MAX;
volatile int32_t t19 = -17256;
int8_t x98 = -8;
int64_t t20 = -6654LL;
static uint16_t x102 = UINT16_MAX;
int16_t x103 = INT16_MAX;
volatile int32_t x104 = INT32_MIN;
volatile uint64_t t21 = 155225LLU;
uint64_t x108 = 495007LLU;
static volatile int64_t x109 = -63LL;
uint8_t x110 = 47U;
uint64_t x111 = 4683223263120605LLU;
int64_t x122 = -407LL;
volatile uint16_t x130 = 26U;
int8_t x138 = INT8_MIN;
volatile int64_t x140 = -113LL;
int32_t x144 = INT32_MIN;
int64_t t30 = 6337878015741LL;
uint8_t x153 = UINT8_MAX;
static int64_t x157 = INT64_MAX;
volatile uint64_t x158 = 1797423379LLU;
uint64_t x164 = 6766LLU;
static int16_t x166 = INT16_MIN;
static uint32_t x176 = UINT32_MAX;
uint64_t t38 = 628170491777LLU;
int64_t x179 = INT64_MAX;
volatile uint16_t x197 = UINT16_MAX;
volatile int16_t x204 = INT16_MIN;
volatile int64_t x206 = -19716040LL;
int32_t x209 = 26;
static int64_t x214 = 680322911645LL;
int64_t x216 = INT64_MIN;
uint32_t t47 = 15628481U;
uint64_t x221 = 2114344LLU;
volatile uint64_t t48 = 315122766703LLU;
int8_t x231 = -1;
int64_t x239 = INT64_MAX;
int8_t x240 = -1;
uint64_t t52 = 11669200463LLU;
int32_t x253 = 225643;
int8_t x256 = 23;
uint32_t t58 = 130955U;
uint8_t x267 = UINT8_MAX;
static int32_t x271 = 1353;
volatile uint32_t t61 = 1944U;
static int64_t x283 = -1LL;
static uint32_t x302 = 282448152U;
int8_t x303 = -1;
uint64_t t66 = 78080LLU;
uint64_t x305 = 29565LLU;
uint16_t x308 = UINT16_MAX;
int8_t x313 = INT8_MIN;
static uint16_t x328 = 13601U;
uint64_t t71 = 5LLU;
int64_t x334 = -100344805839454LL;
static int64_t x335 = -1LL;
int16_t x338 = INT16_MIN;
uint8_t x341 = 2U;
volatile uint16_t x343 = 184U;
static uint32_t t75 = 5U;
volatile int64_t t78 = 412858197830853LL;
uint8_t x361 = 24U;
static uint8_t x364 = 32U;
int32_t t80 = 28;
static volatile uint64_t t82 = 41931858816LLU;
uint64_t t83 = 220210614LLU;
int32_t x388 = INT32_MIN;
volatile int32_t t84 = 1;
uint16_t x392 = 19578U;
volatile uint16_t x402 = 496U;
int16_t x407 = -1;
uint8_t x408 = UINT8_MAX;
static volatile uint32_t t89 = 19030919U;
int64_t x409 = INT64_MAX;
int64_t x431 = INT64_MAX;
int32_t x433 = -1;
int32_t x435 = -1;
int64_t x438 = 5616729265539LL;
static volatile int64_t t95 = 1306LL;
volatile uint64_t x443 = 812077021519059801LLU;
volatile uint16_t x447 = 6U;
uint64_t x451 = 2332506377771540078LLU;
int8_t x452 = INT8_MAX;


void f0(void) {
	uint32_t x1 = 128550U;
	int16_t x2 = INT16_MIN;
	volatile int64_t x3 = INT64_MAX;
	static int8_t x4 = INT8_MAX;

	t0 = ((x1^(x2+x3))/x4);

	if (t0 != 72624976668147086LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 24;
	int64_t x7 = INT64_MAX;
	volatile int8_t x8 = -1;

	t1 = ((x5^(x6+x7))/x8);

	if (t1 != 25LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -105408399206678LL;
	int8_t x11 = INT8_MIN;
	uint16_t x12 = 332U;

	t2 = ((x9^(x10+x11))/x12);

	if (t2 != 317495178335LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	volatile int16_t x14 = INT16_MAX;
	int8_t x15 = -10;
	volatile int32_t t3 = 158590;

	t3 = ((x13^(x14+x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -326772;

	t4 = ((x17^(x18+x19))/x20);

	if (t4 != -4) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	uint8_t x22 = 82U;
	int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MAX;
	volatile int32_t t5 = -5;

	t5 = ((x21^(x22+x23))/x24);

	if (t5 != 65537) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	volatile uint8_t x26 = UINT8_MAX;
	int64_t x28 = INT64_MIN;

	t6 = ((x25^(x26+x27))/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -1;
	static volatile uint32_t x34 = 2864U;
	volatile uint32_t t7 = 5U;

	t7 = ((x33^(x34+x35))/x36);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	int64_t x38 = INT64_MAX;
	int16_t x40 = INT16_MIN;

	t8 = ((x37^(x38+x39))/x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	int32_t x42 = -1;
	int8_t x44 = -8;

	t9 = ((x41^(x42+x43))/x44);

	if (t9 != 4095) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MAX;
	uint8_t x46 = 0U;
	static uint16_t x48 = 6U;
	int64_t t10 = -504792949030LL;

	t10 = ((x45^(x46+x47))/x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x50 = -4;
	int64_t x51 = -118LL;
	int16_t x52 = INT16_MIN;
	volatile int64_t t11 = 31146LL;

	t11 = ((x49^(x50+x51))/x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 12759793U;
	int8_t x54 = INT8_MIN;
	uint64_t x56 = 16465LLU;
	volatile uint64_t t12 = 3110277278LLU;

	t12 = ((x53^(x54+x55))/x56);

	if (t12 != 1120361012675185LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x58 = INT64_MAX;
	static int8_t x59 = INT8_MIN;
	uint64_t x60 = 13573126388214LLU;
	volatile uint64_t t13 = 27707269LLU;

	t13 = ((x57^(x58+x59))/x60);

	if (t13 != 679531LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = UINT32_MAX;
	uint64_t x67 = 310LLU;
	int16_t x68 = 1475;
	volatile uint64_t t14 = 3LLU;

	t14 = ((x65^(x66+x67))/x68);

	if (t14 != 12506267165704824LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x70 = -19347;
	int16_t x71 = -1;
	int32_t x72 = INT32_MIN;
	int32_t t15 = -5454;

	t15 = ((x69^(x70+x71))/x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = 0;
	volatile int16_t x75 = INT16_MIN;
	uint32_t x76 = 14513U;
	volatile uint32_t t16 = 186U;

	t16 = ((x73^(x74+x75))/x76);

	if (t16 != 295934U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = -1;
	int8_t x79 = INT8_MAX;
	uint64_t x80 = UINT64_MAX;
	static uint64_t t17 = 7853817822374LLU;

	t17 = ((x77^(x78+x79))/x80);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MIN;
	int32_t x87 = 116;
	uint64_t x88 = 242849236291LLU;
	uint64_t t18 = 9797LLU;

	t18 = ((x85^(x86+x87))/x88);

	if (t18 != 37979827LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x90 = INT32_MIN;
	uint16_t x92 = 2U;

	t19 = ((x89^(x90+x91))/x92);

	if (t19 != 1073709056) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x97 = 3713137U;
	static volatile int64_t x99 = -1LL;
	int8_t x100 = -1;

	t20 = ((x97^(x98+x99))/x100);

	if (t20 != 3713146LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x101 = 442262LLU;

	t21 = ((x101^(x102+x103))/x104);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x105 = 8U;
	int8_t x106 = 11;
	int16_t x107 = INT16_MIN;
	uint64_t t22 = 7380LLU;

	t22 = ((x105^(x106+x107))/x108);

	if (t22 != 37265622655254LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x112 = INT64_MAX;
	static uint64_t t23 = 8039090937952606390LLU;

	t23 = ((x109^(x110+x111))/x112);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = -2;
	int32_t x118 = INT32_MIN;
	static int16_t x119 = 234;
	volatile uint8_t x120 = UINT8_MAX;
	volatile int32_t t24 = 0;

	t24 = ((x117^(x118+x119))/x120);

	if (t24 != 8421503) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = INT16_MIN;
	int8_t x123 = INT8_MIN;
	uint32_t x124 = 81U;
	volatile int64_t t25 = 22794812317LL;

	t25 = ((x121^(x122+x123))/x124);

	if (t25 != 397LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x125 = 22U;
	volatile uint64_t x126 = UINT64_MAX;
	int8_t x127 = -32;
	uint8_t x128 = 11U;
	static uint64_t t26 = 21379623690586197LLU;

	t26 = ((x125^(x126+x127))/x128);

	if (t26 != 1676976733973595596LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x129 = INT16_MIN;
	uint32_t x131 = 8052438U;
	int64_t x132 = 242LL;
	int64_t t27 = 0LL;

	t27 = ((x129^(x130+x131))/x132);

	if (t27 != 17714589LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x133 = INT32_MAX;
	int8_t x134 = INT8_MIN;
	uint8_t x135 = 100U;
	int64_t x136 = INT64_MAX;
	volatile int64_t t28 = -62695944654256271LL;

	t28 = ((x133^(x134+x135))/x136);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x137 = -275LL;
	volatile uint64_t x139 = 12761LLU;
	uint64_t t29 = 328542090LLU;

	t29 = ((x137^(x138+x139))/x140);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = INT64_MIN;
	volatile int8_t x142 = 13;
	int8_t x143 = 7;

	t30 = ((x141^(x142+x143))/x144);

	if (t30 != 4294967295LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MAX;
	int16_t x146 = INT16_MIN;
	int16_t x147 = INT16_MIN;
	int64_t x148 = INT64_MIN;
	volatile int64_t t31 = -9LL;

	t31 = ((x145^(x146+x147))/x148);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x149 = 9LLU;
	int32_t x150 = 17;
	int16_t x151 = 169;
	int32_t x152 = INT32_MIN;
	static volatile uint64_t t32 = 10602826245465LLU;

	t32 = ((x149^(x150+x151))/x152);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x154 = -1;
	volatile int64_t x155 = 168LL;
	int64_t x156 = INT64_MIN;
	int64_t t33 = -13439LL;

	t33 = ((x153^(x154+x155))/x156);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x159 = -1;
	volatile int8_t x160 = INT8_MIN;
	volatile uint64_t t34 = 99570LLU;

	t34 = ((x157^(x158+x159))/x160);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = 120527736086LLU;
	int32_t x162 = INT32_MAX;
	int32_t x163 = -3025;
	uint64_t t35 = 1094218352821843LLU;

	t35 = ((x161^(x162+x163))/x164);

	if (t35 != 18051717LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = 14318U;
	int16_t x167 = INT16_MIN;
	static volatile int64_t x168 = -1LL;
	static volatile int64_t t36 = -250593LL;

	t36 = ((x165^(x166+x167))/x168);

	if (t36 != 51218LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = INT64_MAX;
	static uint16_t x170 = 10U;
	uint64_t x171 = 29202238801420LLU;
	volatile int8_t x172 = INT8_MIN;
	volatile uint64_t t37 = 8861430045LLU;

	t37 = ((x169^(x170+x171))/x172);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x173 = 1723U;
	int32_t x174 = -1;
	uint64_t x175 = UINT64_MAX;

	t38 = ((x173^(x174+x175))/x176);

	if (t38 != 4294967296LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = 148359LL;
	int8_t x178 = -1;
	static int32_t x180 = INT32_MAX;
	volatile int64_t t39 = -53352678792787364LL;

	t39 = ((x177^(x178+x179))/x180);

	if (t39 != 4294967297LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = INT16_MAX;
	static volatile uint32_t x182 = UINT32_MAX;
	int8_t x183 = INT8_MIN;
	volatile int32_t x184 = -1;
	volatile uint32_t t40 = 17958U;

	t40 = ((x181^(x182+x183))/x184);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = INT16_MIN;
	static uint32_t x194 = UINT32_MAX;
	static int16_t x195 = INT16_MAX;
	uint64_t x196 = 32381678683LLU;
	volatile uint64_t t41 = 1863117256292349LLU;

	t41 = ((x193^(x194+x195))/x196);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x198 = UINT64_MAX;
	volatile int32_t x199 = -1;
	static volatile int32_t x200 = INT32_MIN;
	volatile uint64_t t42 = 11218522LLU;

	t42 = ((x197^(x198+x199))/x200);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = -1;
	uint32_t x202 = UINT32_MAX;
	uint16_t x203 = UINT16_MAX;
	uint32_t t43 = 0U;

	t43 = ((x201^(x202+x203))/x204);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x205 = 2629;
	volatile uint64_t x207 = UINT64_MAX;
	int32_t x208 = INT32_MIN;
	volatile uint64_t t44 = 2645680LLU;

	t44 = ((x205^(x206+x207))/x208);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x210 = UINT64_MAX;
	int16_t x211 = INT16_MIN;
	int32_t x212 = -18319;
	static volatile uint64_t t45 = 478308LLU;

	t45 = ((x209^(x210+x211))/x212);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = INT32_MIN;
	static uint16_t x215 = 80U;
	volatile int64_t t46 = -109778693LL;

	t46 = ((x213^(x214+x215))/x216);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x217 = INT32_MIN;
	static uint32_t x218 = 116U;
	int16_t x219 = 67;
	int8_t x220 = -27;

	t47 = ((x217^(x218+x219))/x220);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x222 = -1;
	int8_t x223 = -15;
	int64_t x224 = 24LL;

	t48 = ((x221^(x222+x223))/x224);

	if (t48 != 768614336404476553LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = -71905LL;
	uint64_t x226 = 1973LLU;
	static int16_t x227 = INT16_MIN;
	int8_t x228 = -1;
	uint64_t t49 = 671559190259LLU;

	t49 = ((x225^(x226+x227))/x228);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = 2;
	static uint32_t x230 = 8858086U;
	volatile int8_t x232 = INT8_MIN;
	uint32_t t50 = 372U;

	t50 = ((x229^(x230+x231))/x232);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x233 = 3;
	volatile int64_t x234 = -1LL;
	uint16_t x235 = 2543U;
	uint64_t x236 = 292123LLU;
	static volatile uint64_t t51 = 23LLU;

	t51 = ((x233^(x234+x235))/x236);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x237 = UINT32_MAX;
	uint64_t x238 = UINT64_MAX;

	t52 = ((x237^(x238+x239))/x240);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int16_t x242 = INT16_MIN;
	int16_t x243 = 16;
	volatile uint16_t x244 = 20955U;
	volatile uint64_t t53 = 1885LLU;

	t53 = ((x241^(x242+x243))/x244);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = -1;
	int16_t x246 = INT16_MIN;
	volatile uint32_t x247 = UINT32_MAX;
	static uint16_t x248 = 336U;
	volatile uint32_t t54 = 10176184U;

	t54 = ((x245^(x246+x247))/x248);

	if (t54 != 97U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = INT32_MIN;
	volatile int64_t x250 = -490LL;
	int16_t x251 = INT16_MIN;
	int32_t x252 = INT32_MIN;
	static int64_t t55 = -2LL;

	t55 = ((x249^(x250+x251))/x252);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x254 = 0U;
	static int8_t x255 = INT8_MAX;
	int32_t t56 = 190;

	t56 = ((x253^(x254+x255))/x256);

	if (t56 != 9806) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x257 = -1LL;
	uint8_t x258 = 25U;
	int64_t x259 = INT64_MIN;
	uint16_t x260 = 1900U;
	static int64_t t57 = -31609576004114066LL;

	t57 = ((x257^(x258+x259))/x260);

	if (t57 != 4854406335186724LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x261 = 863U;
	uint8_t x262 = 30U;
	int32_t x263 = -1;
	static int32_t x264 = -22;

	t58 = ((x261^(x262+x263))/x264);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = INT8_MIN;
	volatile int32_t x266 = INT32_MIN;
	int16_t x268 = -1;
	static int32_t t59 = -2935;

	t59 = ((x265^(x266+x267))/x268);

	if (t59 != -2147483519) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = INT8_MAX;
	volatile uint32_t x270 = 65661941U;
	int8_t x272 = 3;
	uint32_t t60 = 124293U;

	t60 = ((x269^(x270+x271))/x272);

	if (t60 != 21887765U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x273 = INT8_MIN;
	uint32_t x274 = UINT32_MAX;
	int32_t x275 = -1;
	int8_t x276 = 1;

	t61 = ((x273^(x274+x275))/x276);

	if (t61 != 126U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x277 = INT64_MIN;
	static uint64_t x278 = UINT64_MAX;
	static volatile int64_t x279 = INT64_MIN;
	uint32_t x280 = UINT32_MAX;
	volatile uint64_t t62 = 20689901LLU;

	t62 = ((x277^(x278+x279))/x280);

	if (t62 != 4294967297LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x281 = -1;
	int8_t x282 = INT8_MAX;
	static uint16_t x284 = UINT16_MAX;
	int64_t t63 = -11088622581LL;

	t63 = ((x281^(x282+x283))/x284);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x285 = INT8_MAX;
	int16_t x286 = INT16_MIN;
	volatile uint8_t x287 = UINT8_MAX;
	uint64_t x288 = 3869049700LLU;
	volatile uint64_t t64 = 12435308833425LLU;

	t64 = ((x285^(x286+x287))/x288);

	if (t64 != 4767771288LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x289 = 127U;
	volatile int16_t x290 = -1;
	int8_t x291 = INT8_MIN;
	uint16_t x292 = 43U;
	int32_t t65 = -8;

	t65 = ((x289^(x290+x291))/x292);

	if (t65 != -5) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x301 = 2U;
	uint64_t x304 = UINT64_MAX;

	t66 = ((x301^(x302+x303))/x304);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x306 = -8;
	int16_t x307 = -1;
	volatile uint64_t t67 = 2941363030863332LLU;

	t67 = ((x305^(x306+x307))/x308);

	if (t67 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x314 = -1;
	uint8_t x315 = 23U;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t68 = 27418100U;

	t68 = ((x313^(x314+x315))/x316);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x317 = -1206457;
	int64_t x318 = INT64_MIN;
	volatile int16_t x319 = INT16_MAX;
	uint32_t x320 = 1452595779U;
	volatile int64_t t69 = 1103919788LL;

	t69 = ((x317^(x318+x319))/x320);

	if (t69 != 6349579263LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x325 = 2335;
	static volatile int8_t x326 = 1;
	int8_t x327 = INT8_MIN;
	int32_t t70 = -7150257;

	t70 = ((x325^(x326+x327))/x328);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x329 = 363980221121403LLU;
	int32_t x330 = INT32_MAX;
	static int64_t x331 = INT64_MIN;
	uint8_t x332 = UINT8_MAX;

	t71 = ((x329^(x330+x331))/x332);

	if (t71 != 36171513792482762LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x333 = -55807;
	uint64_t x336 = 4335354LLU;
	uint64_t t72 = 39LLU;

	t72 = ((x333^(x334+x335))/x336);

	if (t72 != 23145700LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x337 = 1U;
	int32_t x339 = 2339597;
	uint32_t x340 = 8U;
	static uint32_t t73 = 10U;

	t73 = ((x337^(x338+x339))/x340);

	if (t73 != 288353U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x342 = 0U;
	int32_t x344 = 2858;
	static volatile int32_t t74 = 162;

	t74 = ((x341^(x342+x343))/x344);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x346 = -86;
	int16_t x347 = INT16_MIN;
	int8_t x348 = -1;

	t75 = ((x345^(x346+x347))/x348);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x349 = -3;
	int8_t x350 = INT8_MIN;
	uint16_t x351 = 246U;
	int8_t x352 = 5;
	static volatile int32_t t76 = -62212;

	t76 = ((x349^(x350+x351))/x352);

	if (t76 != -23) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x353 = UINT16_MAX;
	uint64_t x354 = 56375512928LLU;
	static int64_t x355 = 0LL;
	int8_t x356 = INT8_MIN;
	static uint64_t t77 = 2LLU;

	t77 = ((x353^(x354+x355))/x356);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x357 = -1;
	int8_t x358 = INT8_MAX;
	int64_t x359 = -92LL;
	int16_t x360 = -1;

	t78 = ((x357^(x358+x359))/x360);

	if (t78 != 36LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x362 = -1906;
	static int64_t x363 = INT64_MAX;
	static volatile int64_t t79 = -284280935653LL;

	t79 = ((x361^(x362+x363))/x364);

	if (t79 != 288230376151711684LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x365 = 6U;
	uint16_t x366 = 32058U;
	static uint16_t x367 = 336U;
	static int16_t x368 = INT16_MIN;

	t80 = ((x365^(x366+x367))/x368);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x369 = INT16_MIN;
	volatile int16_t x370 = INT16_MIN;
	int16_t x371 = 4785;
	int16_t x372 = -6682;
	volatile int32_t t81 = -856;

	t81 = ((x369^(x370+x371))/x372);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x373 = 219762683205578406LLU;
	volatile uint32_t x374 = 0U;
	uint64_t x375 = 145340337LLU;
	volatile uint64_t x376 = 264012LLU;

	t82 = ((x373^(x374+x375))/x376);

	if (t82 != 832396569403LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x381 = UINT16_MAX;
	int64_t x382 = -65LL;
	uint64_t x383 = 230LLU;
	int32_t x384 = INT32_MIN;

	t83 = ((x381^(x382+x383))/x384);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x385 = UINT8_MAX;
	int8_t x386 = INT8_MIN;
	int32_t x387 = -4546;

	t84 = ((x385^(x386+x387))/x388);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = UINT64_MAX;
	int8_t x391 = -1;
	static volatile uint64_t t85 = 977562980101151585LLU;

	t85 = ((x389^(x390+x391))/x392);

	if (t85 != 109688LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x393 = -11859LL;
	int16_t x394 = INT16_MIN;
	volatile int16_t x395 = INT16_MAX;
	volatile int64_t x396 = INT64_MIN;
	volatile int64_t t86 = 28619LL;

	t86 = ((x393^(x394+x395))/x396);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x397 = INT64_MAX;
	int32_t x398 = 77;
	int64_t x399 = -1LL;
	int64_t x400 = 14007517LL;
	int64_t t87 = 753544102292626LL;

	t87 = ((x397^(x398+x399))/x400);

	if (t87 != 658458743034LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x401 = -5407407397LL;
	int16_t x403 = INT16_MAX;
	int64_t x404 = 9565138LL;
	volatile int64_t t88 = 5625LL;

	t88 = ((x401^(x402+x403))/x404);

	if (t88 != -565LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x405 = -1;
	uint32_t x406 = 58108U;

	t89 = ((x405^(x406+x407))/x408);

	if (t89 != 16842781U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x410 = INT8_MAX;
	int16_t x411 = -1;
	int16_t x412 = 870;
	static volatile int64_t t90 = 1LL;

	t90 = ((x409^(x410+x411))/x412);

	if (t90 != 10601577053856064LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x417 = 29;
	static int8_t x418 = INT8_MAX;
	uint64_t x419 = 85934LLU;
	int32_t x420 = INT32_MIN;
	static volatile uint64_t t91 = 6794098765122629LLU;

	t91 = ((x417^(x418+x419))/x420);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x421 = -1;
	volatile int16_t x422 = INT16_MAX;
	uint16_t x423 = 31635U;
	static int16_t x424 = 15157;
	int32_t t92 = -22;

	t92 = ((x421^(x422+x423))/x424);

	if (t92 != -4) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x429 = 537U;
	int32_t x430 = INT32_MIN;
	int64_t x432 = INT64_MAX;
	volatile int64_t t93 = 18329299113186LL;

	t93 = ((x429^(x430+x431))/x432);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x434 = 2758002;
	int8_t x436 = 5;
	volatile int32_t t94 = -15346005;

	t94 = ((x433^(x434+x435))/x436);

	if (t94 != -551600) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x437 = 7;
	int64_t x439 = -11LL;
	volatile uint16_t x440 = 7U;

	t95 = ((x437^(x438+x439))/x440);

	if (t95 != 802389895076LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x441 = INT8_MAX;
	int16_t x442 = -1;
	int32_t x444 = INT32_MIN;
	volatile uint64_t t96 = 2153543160317LLU;

	t96 = ((x441^(x442+x443))/x444);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x445 = 683LL;
	int64_t x446 = -1562057888LL;
	int64_t x448 = INT64_MIN;
	static volatile int64_t t97 = 921808962026LL;

	t97 = ((x445^(x446+x447))/x448);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x449 = 26444LL;
	volatile int16_t x450 = INT16_MIN;
	uint64_t t98 = 1227940092589627LLU;

	t98 = ((x449^(x450+x451))/x452);

	if (t98 != 18366191950956675LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x453 = 3U;
	int32_t x454 = INT32_MIN;
	int64_t x455 = INT64_MAX;
	int64_t x456 = INT64_MIN;
	volatile int64_t t99 = 308663213LL;

	t99 = ((x453^(x454+x455))/x456);

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

