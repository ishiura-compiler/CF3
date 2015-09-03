#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x14 = 9633;
int16_t x29 = -1;
volatile uint32_t t7 = 81680U;
int16_t x43 = -1;
int8_t x51 = -1;
static int8_t x52 = 9;
static int64_t x57 = INT64_MAX;
uint8_t x70 = 0U;
static int64_t x79 = INT64_MAX;
volatile int64_t t17 = -2271098LL;
volatile int16_t x81 = -1;
int32_t x82 = -46515;
uint64_t t19 = 18901841LLU;
static int8_t x103 = 3;
int32_t x110 = 206;
int64_t t24 = -1911816060276048905LL;
int64_t x115 = 38544LL;
int16_t x120 = -1;
int8_t x125 = 0;
static volatile uint32_t t29 = 172122309U;
int64_t x138 = -1LL;
static int64_t x139 = 25LL;
uint64_t x140 = UINT64_MAX;
static int8_t x150 = INT8_MIN;
int16_t x153 = -4;
uint8_t x154 = 1U;
uint32_t x155 = 7696U;
int32_t x168 = INT32_MIN;
int16_t x171 = 170;
int16_t x174 = 217;
int8_t x180 = INT8_MIN;
uint64_t t39 = 16LLU;
uint8_t x184 = 51U;
static int64_t x191 = INT64_MIN;
uint32_t x193 = 14962U;
int8_t x196 = INT8_MIN;
static int64_t x201 = 45129072261505LL;
volatile int64_t t46 = 8459931947LL;
static volatile uint64_t t47 = 312565557172585779LLU;
volatile int64_t x215 = -33166594669680LL;
int16_t x231 = -1;
int8_t x232 = 7;
volatile int16_t x244 = 90;
int16_t x247 = -48;
uint16_t x250 = 13U;
static volatile int64_t t57 = 3543LL;
int8_t x259 = -1;
int8_t x267 = 11;
volatile int16_t x274 = -21;
int32_t t63 = 116014753;
int64_t x281 = INT64_MIN;
int8_t x282 = -5;
int64_t t66 = -1418400832549869LL;
int32_t x297 = -1;
uint8_t x298 = 7U;
int64_t x307 = -1LL;
static int32_t x309 = INT32_MAX;
volatile uint64_t x310 = 57887409232LLU;
static uint16_t x319 = 3019U;
uint32_t x322 = UINT32_MAX;
volatile uint32_t t74 = 99408324U;
uint32_t x328 = 1U;
int32_t x331 = INT32_MIN;
int64_t x334 = -1LL;
int16_t x335 = 59;
volatile int16_t x338 = INT16_MAX;
int16_t x343 = INT16_MIN;
uint32_t x344 = UINT32_MAX;
volatile uint64_t t80 = 83537921LLU;
uint64_t x350 = UINT64_MAX;
static int8_t x358 = 0;
int32_t x359 = -7379825;
int32_t x360 = INT32_MIN;
static int8_t x364 = INT8_MIN;
volatile int64_t x366 = -13957462LL;
volatile uint64_t x367 = 10466056872406632LLU;
uint16_t x368 = 68U;
int8_t x369 = INT8_MIN;
uint16_t x370 = UINT16_MAX;
static int8_t x371 = -1;
int16_t x372 = 121;
int8_t x373 = -9;
static int16_t x384 = 392;
volatile uint64_t t89 = 362LLU;
static uint32_t x385 = UINT32_MAX;
static uint32_t x386 = UINT32_MAX;
uint32_t t90 = 868U;
int16_t x393 = INT16_MAX;
int64_t x394 = 29088LL;
uint8_t x395 = UINT8_MAX;
int32_t x402 = 16635;
static volatile int64_t x422 = INT64_MIN;
uint64_t x424 = 2LLU;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int8_t x2 = INT8_MAX;
	int32_t x3 = INT32_MIN;
	int32_t x4 = -1;
	static volatile uint64_t t0 = 7134LLU;

	t0 = (x1%(x2|(x3-x4)));

	if (t0 != 2147483520LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static int8_t x6 = -1;
	uint64_t x7 = 65995504377725LLU;
	int16_t x8 = INT16_MIN;
	uint64_t t1 = 179436212LLU;

	t1 = (x5%(x6|(x7-x8)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -2;
	int64_t x10 = INT64_MIN;
	int64_t x11 = -1LL;
	static int64_t x12 = -7LL;
	static volatile int64_t t2 = 1923365268010449LL;

	t2 = (x9%(x10|(x11-x12)));

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -10;
	static int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MIN;
	static volatile int32_t t3 = 523780;

	t3 = (x13%(x14|(x15-x16)));

	if (t3 != -10) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	static int8_t x18 = INT8_MIN;
	int8_t x19 = 48;
	int32_t x20 = 3579;
	volatile int32_t t4 = 3;

	t4 = (x17%(x18|(x19-x20)));

	if (t4 != -23) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 0U;
	int8_t x22 = -15;
	volatile int64_t x23 = INT64_MAX;
	int64_t x24 = INT64_MAX;
	volatile int64_t t5 = 56LL;

	t5 = (x21%(x22|(x23-x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x30 = -1LL;
	uint8_t x31 = 7U;
	int8_t x32 = -23;
	static int64_t t6 = 11944LL;

	t6 = (x29%(x30|(x31-x32)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = 299U;
	int16_t x34 = INT16_MAX;
	int32_t x35 = -51918348;
	uint8_t x36 = 0U;

	t7 = (x33%(x34|(x35-x36)));

	if (t7 != 299U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	volatile int64_t x38 = INT64_MAX;
	static uint8_t x39 = 50U;
	int8_t x40 = -1;
	int64_t t8 = -7261206867LL;

	t8 = (x37%(x38|(x39-x40)));

	if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = 135;
	int8_t x42 = 1;
	uint64_t x44 = 63225844LLU;
	uint64_t t9 = 92690879884684LLU;

	t9 = (x41%(x42|(x43-x44)));

	if (t9 != 135LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = 13U;
	volatile uint8_t x50 = 17U;
	volatile int32_t t10 = -2;

	t10 = (x49%(x50|(x51-x52)));

	if (t10 != 4) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -12;
	int32_t x54 = 17800;
	uint8_t x55 = 0U;
	static int32_t x56 = -1;
	static volatile int32_t t11 = 0;

	t11 = (x53%(x54|(x55-x56)));

	if (t11 != -12) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x58 = 36U;
	int16_t x59 = INT16_MIN;
	static uint64_t x60 = 133983440549213LLU;
	uint64_t t12 = 1496812LLU;

	t12 = (x57%(x58|(x59-x60)));

	if (t12 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -1;
	volatile uint32_t x62 = UINT32_MAX;
	static int16_t x63 = INT16_MIN;
	static volatile int8_t x64 = 23;
	uint32_t t13 = 287U;

	t13 = (x61%(x62|(x63-x64)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	static uint16_t x66 = 591U;
	int32_t x67 = -1;
	uint64_t x68 = UINT64_MAX;
	uint64_t t14 = 1036106161103587452LLU;

	t14 = (x65%(x66|(x67-x68)));

	if (t14 != 17LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MAX;
	uint32_t x71 = 2885U;
	uint8_t x72 = UINT8_MAX;
	int64_t t15 = 409LL;

	t15 = (x69%(x70|(x71-x72)));

	if (t15 != 577LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x73 = -479;
	int32_t x74 = -1;
	uint16_t x75 = 7930U;
	static int8_t x76 = 9;
	int32_t t16 = 22596691;

	t16 = (x73%(x74|(x75-x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = 7781;
	static int64_t x78 = INT64_MAX;
	int8_t x80 = 8;

	t17 = (x77%(x78|(x79-x80)));

	if (t17 != 7781LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x83 = 7147700LL;
	uint16_t x84 = 1799U;
	int64_t t18 = -3LL;

	t18 = (x81%(x82|(x83-x84)));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = UINT64_MAX;
	static int8_t x86 = INT8_MAX;
	uint64_t x87 = UINT64_MAX;
	int64_t x88 = INT64_MIN;

	t19 = (x85%(x86|(x87-x88)));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 5815813682LLU;
	int16_t x90 = -1;
	uint8_t x91 = 11U;
	static int16_t x92 = INT16_MIN;
	uint64_t t20 = 10317LLU;

	t20 = (x89%(x90|(x91-x92)));

	if (t20 != 5815813682LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MIN;
	uint8_t x94 = UINT8_MAX;
	int64_t x95 = INT64_MIN;
	volatile int64_t x96 = INT64_MIN;
	volatile int64_t t21 = 14124763LL;

	t21 = (x93%(x94|(x95-x96)));

	if (t21 != -128LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MIN;
	int16_t x98 = INT16_MAX;
	static uint32_t x99 = UINT32_MAX;
	static volatile int8_t x100 = 14;
	uint32_t t22 = 105U;

	t22 = (x97%(x98|(x99-x100)));

	if (t22 != 4294967168U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = UINT8_MAX;
	uint16_t x102 = 697U;
	uint8_t x104 = UINT8_MAX;
	int32_t t23 = 3132981;

	t23 = (x101%(x102|(x103-x104)));

	if (t23 != 54) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = INT64_MAX;
	int8_t x111 = -1;
	int8_t x112 = 1;

	t24 = (x109%(x110|(x111-x112)));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 7299U;
	int32_t x114 = INT32_MIN;
	int8_t x116 = 63;
	volatile int64_t t25 = -213LL;

	t25 = (x113%(x114|(x115-x116)));

	if (t25 != 7299LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x117 = UINT64_MAX;
	volatile int64_t x118 = INT64_MAX;
	static int16_t x119 = INT16_MIN;
	uint64_t t26 = 798LLU;

	t26 = (x117%(x118|(x119-x120)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MAX;
	static volatile int64_t x122 = 3405904LL;
	uint64_t x123 = 2438654LLU;
	static uint8_t x124 = 27U;
	uint64_t t27 = 1133956718169LLU;

	t27 = (x121%(x122|(x123-x124)));

	if (t27 != 32767LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x126 = INT16_MAX;
	int8_t x127 = INT8_MAX;
	int32_t x128 = 31890;
	volatile int32_t t28 = 79807;

	t28 = (x125%(x126|(x127-x128)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x129 = UINT8_MAX;
	volatile uint32_t x130 = UINT32_MAX;
	int32_t x131 = 449241667;
	uint16_t x132 = UINT16_MAX;

	t29 = (x129%(x130|(x131-x132)));

	if (t29 != 255U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = 0U;
	uint64_t t30 = 441583389089540147LLU;

	t30 = (x137%(x138|(x139-x140)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = INT16_MIN;
	int8_t x146 = -1;
	int8_t x147 = INT8_MIN;
	static int64_t x148 = -1LL;
	int64_t t31 = -87978364504LL;

	t31 = (x145%(x146|(x147-x148)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x149 = 711U;
	static uint32_t x151 = UINT32_MAX;
	static int8_t x152 = INT8_MIN;
	volatile uint32_t t32 = 26U;

	t32 = (x149%(x150|(x151-x152)));

	if (t32 != 711U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x156 = -1;
	volatile uint32_t t33 = 12U;

	t33 = (x153%(x154|(x155-x156)));

	if (t33 != 2807U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x157 = INT16_MIN;
	static volatile int32_t x158 = -2248456;
	static int16_t x159 = 15087;
	int8_t x160 = INT8_MAX;
	volatile int32_t t34 = 184055;

	t34 = (x157%(x158|(x159-x160)));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = 1045U;
	int8_t x162 = 1;
	uint8_t x163 = UINT8_MAX;
	uint8_t x164 = UINT8_MAX;
	static volatile int32_t t35 = 54623594;

	t35 = (x161%(x162|(x163-x164)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = 23797618676LL;
	int64_t x166 = 445689LL;
	int64_t x167 = -307LL;
	volatile int64_t t36 = 40111500464LL;

	t36 = (x165%(x166|(x167-x168)));

	if (t36 != 175301397LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x169 = 34U;
	int32_t x170 = INT32_MIN;
	static uint8_t x172 = 1U;
	int32_t t37 = 3311;

	t37 = (x169%(x170|(x171-x172)));

	if (t37 != 34) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = -1;
	uint16_t x175 = 222U;
	int64_t x176 = -1826185271107LL;
	int64_t t38 = -1276398046024249LL;

	t38 = (x173%(x174|(x175-x176)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x177 = 15578844707555LL;
	uint64_t x178 = 54989556310582438LLU;
	int8_t x179 = 0;

	t39 = (x177%(x178|(x179-x180)));

	if (t39 != 15578844707555LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x181 = INT16_MAX;
	static int16_t x182 = INT16_MIN;
	uint8_t x183 = UINT8_MAX;
	volatile int32_t t40 = 126469;

	t40 = (x181%(x182|(x183-x184)));

	if (t40 != 203) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MIN;
	uint64_t x187 = 157055LLU;
	uint8_t x188 = UINT8_MAX;
	uint64_t t41 = 32571219863LLU;

	t41 = (x185%(x186|(x187-x188)));

	if (t41 != 2147326720LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x189 = 105LL;
	int64_t x190 = INT64_MIN;
	volatile uint64_t x192 = 24097737773LLU;
	static volatile uint64_t t42 = 25709733LLU;

	t42 = (x189%(x190|(x191-x192)));

	if (t42 != 105LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x194 = -1;
	volatile int8_t x195 = INT8_MIN;
	uint32_t t43 = 204286U;

	t43 = (x193%(x194|(x195-x196)));

	if (t43 != 14962U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x197 = INT32_MIN;
	int8_t x198 = INT8_MIN;
	volatile int32_t x199 = -1;
	int8_t x200 = -6;
	int32_t t44 = 0;

	t44 = (x197%(x198|(x199-x200)));

	if (t44 != -80) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x202 = INT32_MAX;
	int64_t x203 = INT64_MAX;
	volatile uint8_t x204 = 119U;
	volatile int64_t t45 = -140993190340867550LL;

	t45 = (x201%(x202|(x203-x204)));

	if (t45 != 45129072261505LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x205 = INT64_MIN;
	int64_t x206 = -1LL;
	volatile int16_t x207 = INT16_MAX;
	uint8_t x208 = 6U;

	t46 = (x205%(x206|(x207-x208)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = 1;
	static uint64_t x210 = 234083162498LLU;
	volatile uint8_t x211 = 12U;
	static volatile int16_t x212 = INT16_MIN;

	t47 = (x209%(x210|(x211-x212)));

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = -1;
	int16_t x214 = 16;
	static int32_t x216 = INT32_MIN;
	volatile int64_t t48 = 498243164659984384LL;

	t48 = (x213%(x214|(x215-x216)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x217 = 16056338697773LL;
	int64_t x218 = INT64_MIN;
	int8_t x219 = INT8_MIN;
	volatile int16_t x220 = -1;
	volatile int64_t t49 = -133050979901LL;

	t49 = (x217%(x218|(x219-x220)));

	if (t49 != 126LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = INT32_MAX;
	int8_t x222 = 1;
	uint64_t x223 = 106775684609LLU;
	int16_t x224 = 1;
	static volatile uint64_t t50 = 842974700LLU;

	t50 = (x221%(x222|(x223-x224)));

	if (t50 != 2147483647LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = INT64_MAX;
	uint64_t x226 = UINT64_MAX;
	int8_t x227 = INT8_MAX;
	int32_t x228 = INT32_MAX;
	static volatile uint64_t t51 = 309974389740LLU;

	t51 = (x225%(x226|(x227-x228)));

	if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = INT16_MAX;
	int32_t x230 = INT32_MAX;
	volatile int32_t t52 = 624;

	t52 = (x229%(x230|(x231-x232)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = INT16_MIN;
	static int16_t x234 = -52;
	int8_t x235 = 1;
	static uint32_t x236 = 9691766U;
	uint32_t t53 = 108545924U;

	t53 = (x233%(x234|(x235-x236)));

	if (t53 != 4294934528U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = 57;
	uint64_t x238 = 71606974821097117LLU;
	uint64_t x239 = 610749630963LLU;
	int16_t x240 = INT16_MAX;
	volatile uint64_t t54 = 550267544857LLU;

	t54 = (x237%(x238|(x239-x240)));

	if (t54 != 57LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x241 = UINT16_MAX;
	uint64_t x242 = 124362109684054516LLU;
	uint64_t x243 = UINT64_MAX;
	volatile uint64_t t55 = 201798LLU;

	t55 = (x241%(x242|(x243-x244)));

	if (t55 != 65535LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = -4;
	volatile int8_t x246 = INT8_MIN;
	int16_t x248 = -1;
	int32_t t56 = -432;

	t56 = (x245%(x246|(x247-x248)));

	if (t56 != -4) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x249 = -256029LL;
	int32_t x251 = -6271840;
	uint32_t x252 = UINT32_MAX;

	t57 = (x249%(x250|(x251-x252)));

	if (t57 != -256029LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x253 = 52568687785709617LL;
	int8_t x254 = -4;
	uint16_t x255 = 2U;
	int16_t x256 = INT16_MIN;
	volatile int64_t t58 = -1867711LL;

	t58 = (x253%(x254|(x255-x256)));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MAX;
	int64_t x260 = 42229874239LL;
	int64_t t59 = -16411078676LL;

	t59 = (x257%(x258|(x259-x260)));

	if (t59 != -128LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x261 = UINT8_MAX;
	int32_t x262 = 0;
	static int16_t x263 = 1;
	int8_t x264 = INT8_MIN;
	volatile int32_t t60 = -267;

	t60 = (x261%(x262|(x263-x264)));

	if (t60 != 126) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MIN;
	int32_t x266 = INT32_MAX;
	int8_t x268 = INT8_MAX;
	int32_t t61 = -1;

	t61 = (x265%(x266|(x267-x268)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MAX;
	volatile int32_t x270 = -1;
	volatile uint8_t x271 = 125U;
	uint16_t x272 = 2U;
	volatile int32_t t62 = 11806;

	t62 = (x269%(x270|(x271-x272)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x273 = -7201;
	int32_t x275 = -3;
	static int8_t x276 = INT8_MAX;

	t63 = (x273%(x274|(x275-x276)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = INT8_MAX;
	uint8_t x278 = UINT8_MAX;
	uint8_t x279 = 9U;
	static uint16_t x280 = UINT16_MAX;
	volatile int32_t t64 = -174480571;

	t64 = (x277%(x278|(x279-x280)));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x283 = 194656878LLU;
	int16_t x284 = 1;
	volatile uint64_t t65 = 376709469LLU;

	t65 = (x281%(x282|(x283-x284)));

	if (t65 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x285 = INT64_MIN;
	int16_t x286 = INT16_MAX;
	static int16_t x287 = -1287;
	static int16_t x288 = INT16_MAX;

	t66 = (x285%(x286|(x287-x288)));

	if (t66 != -8LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x289 = UINT64_MAX;
	int64_t x290 = INT64_MIN;
	static uint32_t x291 = UINT32_MAX;
	volatile int16_t x292 = INT16_MAX;
	uint64_t t67 = 223LLU;

	t67 = (x289%(x290|(x291-x292)));

	if (t67 != 9223372032559841279LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x293 = INT64_MIN;
	volatile int32_t x294 = INT32_MIN;
	static volatile uint16_t x295 = 287U;
	uint32_t x296 = 3320419U;
	volatile int64_t t68 = 13831994426451054LL;

	t68 = (x293%(x294|(x295-x296)));

	if (t68 != -1163290136LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x299 = INT32_MAX;
	static uint16_t x300 = 27U;
	volatile int32_t t69 = -959;

	t69 = (x297%(x298|(x299-x300)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = INT8_MIN;
	volatile int64_t x306 = INT64_MIN;
	int16_t x308 = -16073;
	int64_t t70 = -18996904LL;

	t70 = (x305%(x306|(x307-x308)));

	if (t70 != -128LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x311 = INT32_MIN;
	int64_t x312 = 78969524483239LL;
	volatile uint64_t t71 = 2953241567493651LLU;

	t71 = (x309%(x310|(x311-x312)));

	if (t71 != 2147483647LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x313 = 7U;
	int16_t x314 = -231;
	uint32_t x315 = 33066448U;
	int8_t x316 = -1;
	static volatile uint32_t t72 = 48799U;

	t72 = (x313%(x314|(x315-x316)));

	if (t72 != 7U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x317 = INT16_MIN;
	int32_t x318 = INT32_MAX;
	int16_t x320 = INT16_MIN;
	int32_t t73 = 745023052;

	t73 = (x317%(x318|(x319-x320)));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x321 = UINT16_MAX;
	static int8_t x323 = INT8_MIN;
	int16_t x324 = -1;

	t74 = (x321%(x322|(x323-x324)));

	if (t74 != 65535U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = -10;
	volatile int16_t x326 = 164;
	volatile int16_t x327 = -740;
	static uint32_t t75 = 484U;

	t75 = (x325%(x326|(x327-x328)));

	if (t75 != 567U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x329 = UINT32_MAX;
	int32_t x330 = 305;
	uint32_t x332 = 45893967U;
	uint32_t t76 = 6U;

	t76 = (x329%(x330|(x331-x332)));

	if (t76 != 91787421U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x333 = UINT16_MAX;
	int8_t x336 = -1;
	static int64_t t77 = 1658522376301LL;

	t77 = (x333%(x334|(x335-x336)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x337 = 9074LL;
	static int64_t x339 = -1LL;
	int64_t x340 = INT64_MIN;
	int64_t t78 = 196128LL;

	t78 = (x337%(x338|(x339-x340)));

	if (t78 != 9074LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x341 = INT64_MAX;
	int16_t x342 = -1;
	static volatile int64_t t79 = -3168384406161934LL;

	t79 = (x341%(x342|(x343-x344)));

	if (t79 != 2147483647LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x345 = -1;
	volatile uint64_t x346 = 30LLU;
	int32_t x347 = INT32_MIN;
	volatile int32_t x348 = -1;

	t80 = (x345%(x346|(x347-x348)));

	if (t80 != 2147483616LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x349 = 1U;
	uint16_t x351 = 96U;
	int64_t x352 = -1LL;
	uint64_t t81 = 58006699LLU;

	t81 = (x349%(x350|(x351-x352)));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x353 = 3U;
	static int64_t x354 = INT64_MAX;
	static volatile uint64_t x355 = 2503286459901LLU;
	uint64_t x356 = 2801702286LLU;
	uint64_t t82 = 9LLU;

	t82 = (x353%(x354|(x355-x356)));

	if (t82 != 3LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x357 = INT64_MIN;
	volatile int64_t t83 = 107658LL;

	t83 = (x357%(x358|(x359-x360)));

	if (t83 != -909885842LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x361 = 163U;
	int16_t x362 = INT16_MIN;
	int64_t x363 = INT64_MIN;
	int64_t t84 = -38448875354LL;

	t84 = (x361%(x362|(x363-x364)));

	if (t84 != 163LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x365 = UINT32_MAX;
	uint64_t t85 = 8655190857194LLU;

	t85 = (x365%(x366|(x367-x368)));

	if (t85 != 4294967295LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t t86 = 3144373;

	t86 = (x369%(x370|(x371-x372)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x374 = INT64_MIN;
	uint64_t x375 = UINT64_MAX;
	static volatile int8_t x376 = -4;
	volatile uint64_t t87 = 3757LLU;

	t87 = (x373%(x374|(x375-x376)));

	if (t87 != 9223372036854775796LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x377 = -1;
	uint64_t x378 = 315541481213LLU;
	uint32_t x379 = 1883894U;
	uint16_t x380 = UINT16_MAX;
	volatile uint64_t t88 = 48LLU;

	t88 = (x377%(x378|(x379-x380)));

	if (t88 != 210114026128LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x381 = INT8_MIN;
	int8_t x382 = INT8_MAX;
	uint64_t x383 = 520LLU;

	t89 = (x381%(x382|(x383-x384)));

	if (t89 != 128LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x387 = 39U;
	int8_t x388 = INT8_MAX;

	t90 = (x385%(x386|(x387-x388)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x389 = UINT64_MAX;
	static int32_t x390 = INT32_MIN;
	uint32_t x391 = 420328U;
	int8_t x392 = -1;
	static volatile uint64_t t91 = 66107516099LLU;

	t91 = (x389%(x390|(x391-x392)));

	if (t91 != 45464530LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x396 = 1977U;
	int64_t t92 = 4939597117840LL;

	t92 = (x393%(x394|(x395-x396)));

	if (t92 != 32767LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x397 = -1;
	int32_t x398 = -75062249;
	static int64_t x399 = 201294780594LL;
	static uint16_t x400 = 141U;
	volatile int64_t t93 = -9812545323LL;

	t93 = (x397%(x398|(x399-x400)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x401 = INT16_MIN;
	uint64_t x403 = 14565046977LLU;
	int16_t x404 = INT16_MIN;
	static uint64_t t94 = 18876455955456168LLU;

	t94 = (x401%(x402|(x403-x404)));

	if (t94 != 8223772328LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x405 = -2160604099879LL;
	int16_t x406 = -92;
	int16_t x407 = INT16_MIN;
	int64_t x408 = INT64_MIN;
	int64_t t95 = -60708814568547LL;

	t95 = (x405%(x406|(x407-x408)));

	if (t95 != -55LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x409 = -187;
	int64_t x410 = INT64_MIN;
	int64_t x411 = -1LL;
	int8_t x412 = INT8_MAX;
	static int64_t t96 = -19744692022454033LL;

	t96 = (x409%(x410|(x411-x412)));

	if (t96 != -59LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x413 = -1LL;
	int8_t x414 = INT8_MIN;
	int8_t x415 = 1;
	uint8_t x416 = 38U;
	int64_t t97 = 3045105439280LL;

	t97 = (x413%(x414|(x415-x416)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = -33;
	static int8_t x423 = INT8_MIN;
	uint64_t t98 = 129778LLU;

	t98 = (x421%(x422|(x423-x424)));

	if (t98 != 97LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x425 = 293;
	volatile int32_t x426 = -780837648;
	int64_t x427 = INT64_MIN;
	uint16_t x428 = 0U;
	volatile int64_t t99 = 2555LL;

	t99 = (x425%(x426|(x427-x428)));

	if (t99 != 293LL) { NG(); } else { ; }
	
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

