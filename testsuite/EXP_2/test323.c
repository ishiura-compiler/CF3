#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = UINT64_MAX;
int16_t x5 = INT16_MIN;
int16_t x8 = INT16_MAX;
int16_t x13 = 94;
volatile int32_t x17 = INT32_MIN;
int64_t t3 = 19LL;
uint64_t x21 = 16370080044LLU;
uint64_t t5 = UINT64_MAX;
uint16_t x29 = UINT16_MAX;
int8_t x43 = 46;
uint64_t x51 = 33613108838LLU;
uint16_t x58 = 3U;
int32_t t11 = -1;
int64_t x67 = INT64_MIN;
int32_t x68 = 278861049;
static int8_t x87 = INT8_MIN;
static int32_t t19 = -15;
int8_t x99 = 0;
int16_t x102 = -763;
int8_t x117 = -24;
static int32_t x120 = INT32_MIN;
uint64_t x121 = UINT64_MAX;
int32_t x132 = 21;
static uint64_t t28 = 9236366LLU;
volatile int32_t x134 = 1864;
static uint8_t x135 = UINT8_MAX;
int64_t x144 = INT64_MAX;
int32_t x146 = -1;
int8_t x157 = INT8_MIN;
volatile uint16_t x170 = 4137U;
volatile uint64_t x171 = 1945LLU;
uint64_t t34 = 934226LLU;
static volatile uint64_t x184 = UINT64_MAX;
static uint8_t x187 = 35U;
int64_t x188 = -1LL;
static uint8_t x191 = UINT8_MAX;
static int64_t x195 = INT64_MAX;
uint64_t x215 = UINT64_MAX;
int8_t x219 = INT8_MIN;
uint32_t x221 = 28503U;
uint16_t x226 = 335U;
uint16_t x227 = UINT16_MAX;
int16_t x230 = -1;
int8_t x232 = 1;
static volatile uint64_t t47 = 5249LLU;
static int8_t x233 = INT8_MAX;
int8_t x236 = INT8_MAX;
int16_t x237 = 40;
volatile int8_t x240 = INT8_MIN;
static int16_t x242 = INT16_MAX;
static int8_t x244 = 0;
int16_t x247 = INT16_MIN;
volatile int64_t t51 = -329258LL;
int32_t x249 = -1;
int8_t x252 = -1;
volatile int64_t x260 = INT64_MIN;
static volatile int64_t t54 = INT64_MIN;
int64_t x265 = INT64_MAX;
int16_t x269 = -1;
int64_t x274 = -1LL;
uint16_t x278 = UINT16_MAX;
uint8_t x279 = 1U;
int32_t x280 = -1;
int8_t x285 = INT8_MIN;
static volatile int32_t t60 = -217851527;
static uint64_t x291 = UINT64_MAX;
uint64_t t61 = 3962LLU;
volatile int64_t x296 = 130600LL;
uint16_t x314 = UINT16_MAX;
volatile int8_t x316 = INT8_MAX;
static int16_t x328 = INT16_MAX;
int64_t x329 = INT64_MAX;
volatile int16_t x331 = -1140;
volatile uint64_t t69 = 15LLU;
static uint16_t x337 = 7U;
int8_t x338 = 46;
static uint64_t x343 = 2724LLU;
static uint32_t x346 = 0U;
int16_t x354 = 7;
int32_t x362 = INT32_MIN;
volatile int64_t t77 = -433848LL;
static volatile int64_t x383 = -62617326LL;
uint64_t t80 = 8411985923503019LLU;
int8_t x386 = INT8_MIN;
int8_t x400 = INT8_MAX;
int32_t t82 = -507078680;
int16_t x406 = -1;
int16_t x410 = INT16_MIN;
static int32_t x412 = -725;
int8_t x413 = -1;
uint64_t t86 = 565862713LLU;
uint8_t x418 = UINT8_MAX;
int64_t x421 = INT64_MIN;
volatile int32_t x422 = INT32_MAX;
volatile int32_t t90 = 42841740;
static int32_t x436 = 0;
int64_t x437 = INT64_MAX;
int32_t x440 = INT32_MAX;
static volatile int64_t x441 = INT64_MIN;
int32_t x450 = -64142655;
uint32_t t96 = 1663537909U;
int8_t x462 = -25;
int16_t x463 = -1;
volatile int16_t x464 = INT16_MIN;
int32_t x466 = INT32_MIN;
int64_t x471 = -1LL;
int32_t x472 = -243424273;
volatile int64_t t99 = -9373322LL;


void f0(void) {
	volatile uint16_t x2 = 0U;
	uint64_t x3 = 3LLU;
	int64_t x4 = INT64_MIN;
	static uint64_t t0 = 1LLU;

	t0 = ((x1|(x2-x3))&x4);

	if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x6 = UINT64_MAX;
	uint8_t x7 = UINT8_MAX;
	uint64_t t1 = 3934LLU;

	t1 = ((x5|(x6-x7))&x8);

	if (t1 != 32512LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = 12;
	volatile int8_t x15 = 0;
	int32_t x16 = 13288;
	int32_t t2 = 187;

	t2 = ((x13|(x14-x15))&x16);

	if (t2 != 72) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x18 = 696;
	int64_t x19 = 206LL;
	int32_t x20 = 8;

	t3 = ((x17|(x18-x19))&x20);

	if (t3 != 8LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x22 = INT16_MIN;
	int32_t x23 = 11;
	int16_t x24 = INT16_MIN;
	uint64_t t4 = 10LLU;

	t4 = ((x21|(x22-x23))&x24);

	if (t4 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	static int32_t x26 = -1;
	int8_t x27 = 18;
	uint64_t x28 = UINT64_MAX;

	t5 = ((x25|(x26-x27))&x28);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x30 = -63782861394962LL;
	static int32_t x31 = -1;
	int32_t x32 = INT32_MIN;
	static int64_t t6 = -128113LL;

	t6 = ((x29|(x30-x31))&x32);

	if (t6 != -63784559312896LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = INT32_MIN;
	int32_t x34 = 105201935;
	int16_t x35 = 0;
	int8_t x36 = -1;
	volatile int32_t t7 = -46741846;

	t7 = ((x33|(x34-x35))&x36);

	if (t7 != -2042281713) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x41 = 11435951364071878LLU;
	int32_t x42 = -1;
	uint8_t x44 = UINT8_MAX;
	volatile uint64_t t8 = 8854210684395555619LLU;

	t8 = ((x41|(x42-x43))&x44);

	if (t8 != 215LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = -1;
	volatile uint64_t x50 = UINT64_MAX;
	static int16_t x52 = INT16_MIN;
	volatile uint64_t t9 = 5LLU;

	t9 = ((x49|(x50-x51))&x52);

	if (t9 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x53 = -1172;
	int32_t x54 = INT32_MAX;
	uint16_t x55 = 6141U;
	int16_t x56 = 1;
	int32_t t10 = -2508;

	t10 = ((x53|(x54-x55))&x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	static int32_t x59 = -5775561;
	int16_t x60 = INT16_MIN;

	t11 = ((x57|(x58-x59))&x60);

	if (t11 != -2141716480) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x61 = INT16_MIN;
	uint16_t x62 = UINT16_MAX;
	volatile uint16_t x63 = 2U;
	uint16_t x64 = 2891U;
	volatile int32_t t12 = -20;

	t12 = ((x61|(x62-x63))&x64);

	if (t12 != 2889) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x65 = INT32_MIN;
	static int64_t x66 = INT64_MIN;
	static int64_t t13 = 32584563413524LL;

	t13 = ((x65|(x66-x67))&x68);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x69 = 5U;
	int32_t x70 = -3813639;
	int16_t x71 = -1;
	int32_t x72 = INT32_MIN;
	volatile int32_t t14 = INT32_MIN;

	t14 = ((x69|(x70-x71))&x72);

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = 19;
	static int8_t x78 = 4;
	int16_t x79 = INT16_MIN;
	uint64_t x80 = 107694313LLU;
	volatile uint64_t t15 = 62032026LLU;

	t15 = ((x77|(x78-x79))&x80);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x81 = INT32_MIN;
	int16_t x82 = -1;
	uint32_t x83 = 9684980U;
	uint64_t x84 = 1629068930LLU;
	volatile uint64_t t16 = 188LLU;

	t16 = ((x81|(x82-x83))&x84);

	if (t16 != 1627920386LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = -1LL;
	volatile int64_t x86 = -161LL;
	uint8_t x88 = 1U;
	int64_t t17 = -3602550187934060LL;

	t17 = ((x85|(x86-x87))&x88);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = 8206;
	static int32_t x90 = -4361;
	int64_t x91 = INT64_MIN;
	uint64_t x92 = 159LLU;
	uint64_t t18 = 717909604982068885LLU;

	t18 = ((x89|(x90-x91))&x92);

	if (t18 != 159LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = -1;
	int32_t x94 = -1;
	int8_t x95 = INT8_MIN;
	int32_t x96 = -261089750;

	t19 = ((x93|(x94-x95))&x96);

	if (t19 != -261089750) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = 24U;
	static int16_t x98 = -1;
	static int8_t x100 = -1;
	volatile int32_t t20 = 1843;

	t20 = ((x97|(x98-x99))&x100);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x101 = 1U;
	static uint16_t x103 = 36U;
	int8_t x104 = -1;
	volatile int32_t t21 = 64986;

	t21 = ((x101|(x102-x103))&x104);

	if (t21 != -799) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MIN;
	static uint32_t x106 = 10U;
	uint32_t x107 = UINT32_MAX;
	int32_t x108 = 162;
	static uint32_t t22 = 1U;

	t22 = ((x105|(x106-x107))&x108);

	if (t22 != 130U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 1453226969LLU;
	int64_t x110 = -1LL;
	int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MIN;
	static uint64_t t23 = 5170794035LLU;

	t23 = ((x109|(x110-x111))&x112);

	if (t23 != 1453226880LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x113 = -326;
	int8_t x114 = -1;
	int32_t x115 = INT32_MIN;
	uint16_t x116 = 115U;
	static volatile int32_t t24 = -5;

	t24 = ((x113|(x114-x115))&x116);

	if (t24 != 115) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x118 = INT32_MIN;
	int64_t x119 = -1LL;
	volatile int64_t t25 = -9058867488LL;

	t25 = ((x117|(x118-x119))&x120);

	if (t25 != -2147483648LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x122 = INT16_MIN;
	volatile int32_t x123 = -25804;
	uint64_t x124 = 116700LLU;
	static volatile uint64_t t26 = 414636397442LLU;

	t26 = ((x121|(x122-x123))&x124);

	if (t26 != 116700LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = -1;
	volatile int8_t x126 = -1;
	uint8_t x127 = UINT8_MAX;
	volatile int16_t x128 = -1;
	volatile int32_t t27 = 68964621;

	t27 = ((x125|(x126-x127))&x128);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = INT64_MIN;
	uint64_t x130 = 641826LLU;
	int16_t x131 = INT16_MIN;

	t28 = ((x129|(x130-x131))&x132);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = 50181367235498589LL;
	int16_t x136 = INT16_MIN;
	volatile int64_t t29 = -5129209LL;

	t29 = ((x133|(x134-x135))&x136);

	if (t29 != 50181367235477504LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = -1;
	int64_t x142 = INT64_MAX;
	uint8_t x143 = 0U;
	static int64_t t30 = INT64_MAX;

	t30 = ((x141|(x142-x143))&x144);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x145 = 6991U;
	int32_t x147 = -4047586;
	int64_t x148 = INT64_MAX;
	volatile int64_t t31 = 0LL;

	t31 = ((x145|(x146-x147))&x148);

	if (t31 != 4053999LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x153 = -1;
	static int16_t x154 = 9;
	uint32_t x155 = 88324449U;
	static int8_t x156 = INT8_MAX;
	volatile uint32_t t32 = 49224723U;

	t32 = ((x153|(x154-x155))&x156);

	if (t32 != 127U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x158 = INT8_MIN;
	uint8_t x159 = UINT8_MAX;
	uint64_t x160 = 763126402822702LLU;
	uint64_t t33 = 987045021039269LLU;

	t33 = ((x157|(x158-x159))&x160);

	if (t33 != 763126402822656LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x169 = INT8_MAX;
	static int8_t x172 = INT8_MIN;

	t34 = ((x169|(x170-x171))&x172);

	if (t34 != 2176LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = INT16_MIN;
	static uint16_t x178 = 13U;
	int8_t x179 = -1;
	static uint32_t x180 = UINT32_MAX;
	volatile uint32_t t35 = 13716U;

	t35 = ((x177|(x178-x179))&x180);

	if (t35 != 4294934542U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x181 = UINT64_MAX;
	uint8_t x182 = 47U;
	static int64_t x183 = 70338581906677LL;
	uint64_t t36 = UINT64_MAX;

	t36 = ((x181|(x182-x183))&x184);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x185 = INT8_MAX;
	int8_t x186 = -1;
	int64_t t37 = 1762LL;

	t37 = ((x185|(x186-x187))&x188);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x189 = INT16_MIN;
	uint16_t x190 = 9835U;
	static int32_t x192 = INT32_MIN;
	volatile int32_t t38 = INT32_MIN;

	t38 = ((x189|(x190-x191))&x192);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x193 = UINT32_MAX;
	uint16_t x194 = 83U;
	int8_t x196 = INT8_MIN;
	static volatile int64_t t39 = 7740629685635LL;

	t39 = ((x193|(x194-x195))&x196);

	if (t39 != -9223372032559808640LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x201 = INT16_MAX;
	uint32_t x202 = 2582752U;
	int64_t x203 = INT64_MAX;
	int8_t x204 = 2;
	static int64_t t40 = 271549070LL;

	t40 = ((x201|(x202-x203))&x204);

	if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x205 = UINT32_MAX;
	int64_t x206 = INT64_MIN;
	static volatile uint16_t x207 = 0U;
	static volatile int8_t x208 = INT8_MAX;
	int64_t t41 = 2457976LL;

	t41 = ((x205|(x206-x207))&x208);

	if (t41 != 127LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x209 = INT16_MIN;
	int8_t x210 = INT8_MAX;
	uint32_t x211 = UINT32_MAX;
	uint32_t x212 = UINT32_MAX;
	volatile uint32_t t42 = 15423U;

	t42 = ((x209|(x210-x211))&x212);

	if (t42 != 4294934656U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x213 = -6957;
	uint16_t x214 = UINT16_MAX;
	static int64_t x216 = -1247450516761181LL;
	uint64_t t43 = 32672518511361137LLU;

	t43 = ((x213|(x214-x215))&x216);

	if (t43 != 18445496623192786051LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x217 = UINT16_MAX;
	int8_t x218 = INT8_MIN;
	int32_t x220 = -1;
	volatile int32_t t44 = 5;

	t44 = ((x217|(x218-x219))&x220);

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x222 = UINT16_MAX;
	volatile uint8_t x223 = 27U;
	static int8_t x224 = INT8_MAX;
	static volatile uint32_t t45 = 77U;

	t45 = ((x221|(x222-x223))&x224);

	if (t45 != 119U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x225 = 434109056484LLU;
	int32_t x228 = 19672697;
	volatile uint64_t t46 = 4084981963LLU;

	t46 = ((x225|(x226-x227))&x228);

	if (t46 != 19661936LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x229 = 50LLU;
	uint16_t x231 = 8U;

	t47 = ((x229|(x230-x231))&x232);

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x234 = -1;
	static uint16_t x235 = 1875U;
	int32_t t48 = -5926;

	t48 = ((x233|(x234-x235))&x236);

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x238 = 9;
	uint16_t x239 = 15914U;
	volatile int32_t t49 = -4984820;

	t49 = ((x237|(x238-x239))&x240);

	if (t49 != -16000) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x241 = 11U;
	static uint8_t x243 = 4U;
	uint32_t t50 = 1006U;

	t50 = ((x241|(x242-x243))&x244);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x245 = 14747U;
	int64_t x246 = INT64_MIN;
	uint16_t x248 = UINT16_MAX;

	t51 = ((x245|(x246-x247))&x248);

	if (t51 != 47515LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x250 = 9653;
	int16_t x251 = INT16_MIN;
	static int32_t t52 = 372273;

	t52 = ((x249|(x250-x251))&x252);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x253 = 13U;
	int32_t x254 = INT32_MAX;
	volatile uint32_t x255 = UINT32_MAX;
	volatile uint64_t x256 = 35578486833224LLU;
	volatile uint64_t t53 = 87343411226LLU;

	t53 = ((x253|(x254-x255))&x256);

	if (t53 != 2147483656LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x257 = 5U;
	int64_t x258 = -707266863059761LL;
	uint32_t x259 = 857U;

	t54 = ((x257|(x258-x259))&x260);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x266 = -1;
	int8_t x267 = INT8_MIN;
	uint16_t x268 = 3942U;
	int64_t t55 = 354LL;

	t55 = ((x265|(x266-x267))&x268);

	if (t55 != 3942LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x270 = -1;
	volatile int32_t x271 = INT32_MIN;
	int32_t x272 = -1;
	int32_t t56 = 26805;

	t56 = ((x269|(x270-x271))&x272);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x273 = -1;
	int32_t x275 = 380;
	uint16_t x276 = 61U;
	int64_t t57 = 888808566823955150LL;

	t57 = ((x273|(x274-x275))&x276);

	if (t57 != 61LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = INT32_MAX;
	volatile int32_t t58 = INT32_MAX;

	t58 = ((x277|(x278-x279))&x280);

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x281 = INT32_MIN;
	int32_t x282 = INT32_MIN;
	static volatile int8_t x283 = INT8_MIN;
	static uint8_t x284 = UINT8_MAX;
	int32_t t59 = 29218771;

	t59 = ((x281|(x282-x283))&x284);

	if (t59 != 128) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x286 = INT16_MAX;
	int32_t x287 = -1;
	int32_t x288 = -15897;

	t60 = ((x285|(x286-x287))&x288);

	if (t60 != -16000) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x289 = UINT16_MAX;
	volatile int32_t x290 = INT32_MIN;
	uint8_t x292 = UINT8_MAX;

	t61 = ((x289|(x290-x291))&x292);

	if (t61 != 255LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x293 = -4;
	static volatile int64_t x294 = -2687545400LL;
	static int8_t x295 = -19;
	int64_t t62 = 3112442494214LL;

	t62 = ((x293|(x294-x295))&x296);

	if (t62 != 130600LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x297 = 815U;
	volatile int8_t x298 = INT8_MAX;
	int64_t x299 = 2LL;
	volatile int32_t x300 = -330251;
	volatile int64_t t63 = 196382198972LL;

	t63 = ((x297|(x298-x299))&x300);

	if (t63 != 373LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x305 = INT32_MAX;
	static uint8_t x306 = UINT8_MAX;
	static int64_t x307 = -1LL;
	int16_t x308 = INT16_MIN;
	volatile int64_t t64 = 89374216957LL;

	t64 = ((x305|(x306-x307))&x308);

	if (t64 != 2147450880LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x309 = -1;
	int64_t x310 = -1LL;
	static int16_t x311 = INT16_MIN;
	static uint32_t x312 = UINT32_MAX;
	volatile int64_t t65 = 1LL;

	t65 = ((x309|(x310-x311))&x312);

	if (t65 != 4294967295LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = -10758;
	volatile int32_t x315 = -1;
	static int32_t t66 = 0;

	t66 = ((x313|(x314-x315))&x316);

	if (t66 != 122) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x321 = -1;
	static int16_t x322 = 0;
	static int64_t x323 = -27005LL;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = ((x321|(x322-x323))&x324);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x325 = INT16_MIN;
	volatile uint16_t x326 = 6U;
	int8_t x327 = 0;
	int32_t t68 = -41216771;

	t68 = ((x325|(x326-x327))&x328);

	if (t68 != 6) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x330 = UINT64_MAX;
	static uint8_t x332 = 27U;

	t69 = ((x329|(x330-x331))&x332);

	if (t69 != 27LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x339 = UINT64_MAX;
	static volatile int16_t x340 = -1;
	volatile uint64_t t70 = 29955570763751488LLU;

	t70 = ((x337|(x338-x339))&x340);

	if (t70 != 47LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x341 = 249947U;
	int64_t x342 = INT64_MAX;
	int64_t x344 = INT64_MAX;
	static volatile uint64_t t71 = 63131202LLU;

	t71 = ((x341|(x342-x343))&x344);

	if (t71 != 9223372036854773083LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x345 = UINT64_MAX;
	int32_t x347 = INT32_MAX;
	int64_t x348 = INT64_MIN;
	uint64_t t72 = 267447LLU;

	t72 = ((x345|(x346-x347))&x348);

	if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x349 = INT8_MAX;
	int8_t x350 = INT8_MAX;
	static int32_t x351 = -32;
	volatile int8_t x352 = 0;
	volatile int32_t t73 = 8;

	t73 = ((x349|(x350-x351))&x352);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x353 = 1;
	int64_t x355 = 2126LL;
	int8_t x356 = INT8_MIN;
	int64_t t74 = -2647240714138LL;

	t74 = ((x353|(x354-x355))&x356);

	if (t74 != -2176LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x357 = UINT8_MAX;
	uint64_t x358 = 183893LLU;
	static uint32_t x359 = UINT32_MAX;
	int16_t x360 = -12391;
	uint64_t t75 = 28LLU;

	t75 = ((x357|(x358-x359))&x360);

	if (t75 != 18446744069414768281LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x361 = UINT16_MAX;
	int16_t x363 = INT16_MIN;
	static int16_t x364 = -1;
	volatile int32_t t76 = 191347024;

	t76 = ((x361|(x362-x363))&x364);

	if (t76 != -2147418113) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x369 = INT16_MIN;
	volatile uint32_t x370 = 16U;
	volatile int64_t x371 = -1LL;
	uint32_t x372 = UINT32_MAX;

	t77 = ((x369|(x370-x371))&x372);

	if (t77 != 4294934545LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x373 = 0;
	uint8_t x374 = 0U;
	int16_t x375 = INT16_MAX;
	static uint16_t x376 = 26U;
	volatile int32_t t78 = -634173;

	t78 = ((x373|(x374-x375))&x376);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x377 = -1;
	int64_t x378 = -39652159LL;
	int32_t x379 = INT32_MIN;
	uint16_t x380 = UINT16_MAX;
	static int64_t t79 = 609431686LL;

	t79 = ((x377|(x378-x379))&x380);

	if (t79 != 65535LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x381 = 9708541263892027LLU;
	int16_t x382 = INT16_MAX;
	int8_t x384 = INT8_MIN;

	t80 = ((x381|(x382-x383))&x384);

	if (t80 != 9708541308567168LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x385 = 9U;
	int8_t x387 = INT8_MAX;
	static uint64_t x388 = 8775761LLU;
	uint64_t t81 = 124384427LLU;

	t81 = ((x385|(x386-x387))&x388);

	if (t81 != 8775681LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x397 = INT8_MIN;
	uint16_t x398 = UINT16_MAX;
	static uint16_t x399 = UINT16_MAX;

	t82 = ((x397|(x398-x399))&x400);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x401 = INT16_MIN;
	uint16_t x402 = 1U;
	int64_t x403 = INT64_MAX;
	uint64_t x404 = UINT64_MAX;
	uint64_t t83 = 4LLU;

	t83 = ((x401|(x402-x403))&x404);

	if (t83 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x405 = UINT64_MAX;
	uint16_t x407 = 13U;
	uint32_t x408 = 24U;
	uint64_t t84 = 59650102381LLU;

	t84 = ((x405|(x406-x407))&x408);

	if (t84 != 24LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x409 = 118U;
	int16_t x411 = INT16_MIN;
	uint32_t t85 = 197789U;

	t85 = ((x409|(x410-x411))&x412);

	if (t85 != 34U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x414 = UINT64_MAX;
	static int64_t x415 = -500798LL;
	uint64_t x416 = 1017577536932LLU;

	t86 = ((x413|(x414-x415))&x416);

	if (t86 != 1017577536932LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x417 = INT16_MAX;
	uint32_t x419 = UINT32_MAX;
	int32_t x420 = INT32_MAX;
	uint32_t t87 = 36692505U;

	t87 = ((x417|(x418-x419))&x420);

	if (t87 != 32767U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x423 = 111594LL;
	static uint8_t x424 = 3U;
	int64_t t88 = -27848778LL;

	t88 = ((x421|(x422-x423))&x424);

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x425 = -1;
	volatile int64_t x426 = INT64_MAX;
	uint32_t x427 = UINT32_MAX;
	static int32_t x428 = -1;
	volatile int64_t t89 = 410694971640781210LL;

	t89 = ((x425|(x426-x427))&x428);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x429 = 1U;
	static int8_t x430 = -3;
	volatile uint8_t x431 = UINT8_MAX;
	int16_t x432 = INT16_MIN;

	t90 = ((x429|(x430-x431))&x432);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x433 = INT32_MIN;
	int64_t x434 = -4485814694LL;
	int16_t x435 = INT16_MIN;
	static int64_t t91 = 225519567652LL;

	t91 = ((x433|(x434-x435))&x436);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x438 = -2;
	int32_t x439 = 3;
	static volatile int64_t t92 = 5988729521010LL;

	t92 = ((x437|(x438-x439))&x440);

	if (t92 != 2147483647LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x442 = INT16_MAX;
	int16_t x443 = INT16_MAX;
	int64_t x444 = 5414157LL;
	int64_t t93 = -2409461141323900996LL;

	t93 = ((x441|(x442-x443))&x444);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x445 = INT8_MIN;
	int64_t x446 = 0LL;
	volatile int32_t x447 = -1;
	int8_t x448 = INT8_MIN;
	volatile int64_t t94 = -8594266419329775LL;

	t94 = ((x445|(x446-x447))&x448);

	if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x449 = 4;
	int8_t x451 = 17;
	int32_t x452 = INT32_MIN;
	int32_t t95 = INT32_MIN;

	t95 = ((x449|(x450-x451))&x452);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x453 = 0U;
	static volatile uint8_t x454 = 29U;
	uint32_t x455 = UINT32_MAX;
	uint16_t x456 = 12800U;

	t96 = ((x453|(x454-x455))&x456);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x461 = 59291979U;
	volatile uint32_t t97 = 235228578U;

	t97 = ((x461|(x462-x463))&x464);

	if (t97 != 4294934528U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x465 = INT32_MIN;
	volatile int8_t x467 = INT8_MIN;
	uint8_t x468 = 29U;
	volatile int32_t t98 = -23129677;

	t98 = ((x465|(x466-x467))&x468);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x469 = 270U;
	int64_t x470 = -1LL;

	t99 = ((x469|(x470-x471))&x472);

	if (t99 != 270LL) { NG(); } else { ; }
	
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

