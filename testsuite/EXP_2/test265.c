#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = 3922U;
int16_t x7 = -1;
static volatile uint64_t t1 = 113019LLU;
volatile int64_t x10 = 354248905LL;
int32_t x34 = -1;
volatile int32_t x36 = 12128128;
int16_t x38 = INT16_MIN;
static uint32_t x63 = 1624753U;
int64_t x72 = -1LL;
static int32_t x77 = 22;
int64_t x81 = -1LL;
volatile int16_t x82 = INT16_MAX;
volatile int32_t t16 = -57;
uint8_t x94 = 42U;
int64_t t19 = 0LL;
static volatile int64_t x104 = -1LL;
uint8_t x112 = 7U;
volatile uint8_t x113 = UINT8_MAX;
volatile uint16_t x119 = 14U;
int8_t x120 = INT8_MIN;
static int16_t x121 = 159;
int32_t t25 = 628;
uint32_t x127 = 9538U;
int16_t x132 = 901;
volatile int32_t t28 = 109;
uint8_t x140 = UINT8_MAX;
static int32_t t30 = 19693;
uint32_t x164 = 151277U;
int32_t x165 = 197;
uint32_t x173 = 188U;
int32_t t36 = -2334349;
uint32_t x186 = 6U;
static uint64_t x189 = UINT64_MAX;
static int64_t x204 = INT64_MIN;
static int64_t t41 = -5LL;
uint16_t x208 = 65U;
static uint16_t x230 = 17U;
int8_t x240 = INT8_MIN;
static int32_t x243 = 1;
uint64_t x244 = 8899420671860964064LLU;
int32_t t53 = -43178;
int64_t x262 = INT64_MIN;
volatile int16_t x271 = INT16_MIN;
static volatile int32_t t56 = 398088518;
static int16_t x279 = INT16_MIN;
volatile uint64_t x292 = 1253093447LLU;
volatile int8_t x295 = 49;
uint64_t x299 = UINT64_MAX;
volatile uint8_t x303 = 31U;
int16_t x319 = INT16_MIN;
volatile int64_t t67 = -426143347474375910LL;
uint64_t x332 = 99289977LLU;
volatile uint64_t t69 = 1061676705849595611LLU;
int32_t t71 = 55746;
uint64_t t72 = 2552324LLU;
uint64_t x345 = UINT64_MAX;
int64_t x352 = 173152338720549512LL;
static uint8_t x361 = 2U;
int8_t x362 = INT8_MIN;
volatile int32_t t77 = 1;
int16_t x371 = -1;
volatile uint16_t x382 = 45U;
static volatile uint64_t t80 = 1204LLU;
int16_t x389 = -1;
int32_t x394 = 3;
uint8_t x400 = UINT8_MAX;
static int16_t x420 = -1;
volatile int32_t t90 = -6871;
uint8_t x428 = 91U;
volatile int32_t t91 = 1;
static int32_t x430 = INT32_MAX;
static int64_t x431 = 1LL;
int32_t t92 = 0;
static volatile int16_t x434 = INT16_MAX;
int32_t x438 = -82545379;
int16_t x441 = -1;
int64_t x442 = -45614772692242LL;
volatile uint64_t x443 = 12278LLU;
static uint32_t x445 = UINT32_MAX;
int64_t x447 = -1LL;
static volatile uint64_t x450 = 516509244410LLU;
static volatile uint32_t t98 = 1U;
volatile int8_t x457 = 3;
int32_t t99 = 905;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static int8_t x2 = INT8_MAX;
	uint32_t x4 = 6U;
	volatile uint32_t t0 = 2302U;

	t0 = ((x1==(x2-x3))%x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 841885U;
	volatile int8_t x6 = INT8_MAX;
	static uint64_t x8 = UINT64_MAX;

	t1 = ((x5==(x6-x7))%x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int32_t x11 = INT32_MIN;
	int8_t x12 = -1;
	static int32_t t2 = -474504166;

	t2 = ((x9==(x10-x11))%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MAX;
	int16_t x26 = INT16_MAX;
	static int8_t x27 = INT8_MAX;
	uint16_t x28 = UINT16_MAX;
	int32_t t3 = 24534;

	t3 = ((x25==(x26-x27))%x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x33 = -158193;
	volatile uint16_t x35 = UINT16_MAX;
	static int32_t t4 = 11;

	t4 = ((x33==(x34-x35))%x36);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x37 = 9U;
	int32_t x39 = INT32_MIN;
	uint32_t x40 = UINT32_MAX;
	static uint32_t t5 = 1658646U;

	t5 = ((x37==(x38-x39))%x40);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = 15;
	static int64_t x42 = INT64_MIN;
	int64_t x43 = INT64_MIN;
	uint8_t x44 = 3U;
	volatile int32_t t6 = 512239;

	t6 = ((x41==(x42-x43))%x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = INT32_MAX;
	static uint16_t x46 = 14549U;
	volatile int8_t x47 = INT8_MAX;
	int64_t x48 = 9692237145940840LL;
	static int64_t t7 = -53021122686798635LL;

	t7 = ((x45==(x46-x47))%x48);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x49 = -1;
	uint32_t x50 = 168637U;
	static int32_t x51 = INT32_MIN;
	static int16_t x52 = 225;
	volatile int32_t t8 = -417040728;

	t8 = ((x49==(x50-x51))%x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MIN;
	int8_t x54 = INT8_MIN;
	volatile int32_t x55 = 145039;
	uint32_t x56 = 1547511U;
	uint32_t t9 = 105086U;

	t9 = ((x53==(x54-x55))%x56);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = INT32_MIN;
	int32_t x58 = -1;
	uint32_t x59 = 1518U;
	static int8_t x60 = INT8_MIN;
	static volatile int32_t t10 = 52;

	t10 = ((x57==(x58-x59))%x60);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x61 = UINT8_MAX;
	int32_t x62 = -115806707;
	int16_t x64 = -1;
	volatile int32_t t11 = -34928108;

	t11 = ((x61==(x62-x63))%x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x65 = INT64_MIN;
	int8_t x66 = INT8_MAX;
	int64_t x67 = 20534667931LL;
	volatile int64_t x68 = INT64_MIN;
	volatile int64_t t12 = -4331900160364969LL;

	t12 = ((x65==(x66-x67))%x68);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = -1;
	uint8_t x71 = 0U;
	static volatile int64_t t13 = 4LL;

	t13 = ((x69==(x70-x71))%x72);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	int8_t x75 = -22;
	int8_t x76 = -2;
	volatile int32_t t14 = 19;

	t14 = ((x73==(x74-x75))%x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x78 = UINT64_MAX;
	static int32_t x79 = INT32_MIN;
	uint64_t x80 = 26645114119188000LLU;
	static uint64_t t15 = 27553853141LLU;

	t15 = ((x77==(x78-x79))%x80);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x83 = 1287U;
	static volatile int32_t x84 = -1;

	t16 = ((x81==(x82-x83))%x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x85 = INT32_MIN;
	int8_t x86 = INT8_MAX;
	static uint16_t x87 = UINT16_MAX;
	int64_t x88 = INT64_MAX;
	int64_t t17 = -420301427778654279LL;

	t17 = ((x85==(x86-x87))%x88);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MIN;
	static int32_t x95 = 24;
	int16_t x96 = 1;
	int32_t t18 = 1;

	t18 = ((x93==(x94-x95))%x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = -141991;
	int64_t x98 = 1112539697982LL;
	int8_t x99 = INT8_MIN;
	int64_t x100 = -31994LL;

	t19 = ((x97==(x98-x99))%x100);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x101 = -1;
	int8_t x102 = -21;
	uint8_t x103 = 12U;
	volatile int64_t t20 = -900880LL;

	t20 = ((x101==(x102-x103))%x104);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = INT8_MIN;
	static int32_t x106 = INT32_MIN;
	uint64_t x107 = 8909769167322981LLU;
	int8_t x108 = INT8_MIN;
	volatile int32_t t21 = 0;

	t21 = ((x105==(x106-x107))%x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = -1;
	uint8_t x110 = 6U;
	volatile int8_t x111 = -1;
	static int32_t t22 = -1374129;

	t22 = ((x109==(x110-x111))%x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x114 = 1551U;
	int8_t x115 = INT8_MIN;
	int64_t x116 = -1LL;
	static int64_t t23 = -1531LL;

	t23 = ((x113==(x114-x115))%x116);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = 0U;
	int32_t x118 = 2309;
	volatile int32_t t24 = -41529102;

	t24 = ((x117==(x118-x119))%x120);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x122 = UINT16_MAX;
	volatile int32_t x123 = 1;
	volatile uint16_t x124 = 1479U;

	t25 = ((x121==(x122-x123))%x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x125 = 62U;
	int8_t x126 = INT8_MIN;
	int8_t x128 = 8;
	int32_t t26 = 1060538;

	t26 = ((x125==(x126-x127))%x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x129 = INT32_MIN;
	volatile uint64_t x130 = 35969137919790741LLU;
	uint8_t x131 = 4U;
	volatile int32_t t27 = -15189;

	t27 = ((x129==(x130-x131))%x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = INT8_MAX;
	volatile int8_t x134 = INT8_MIN;
	static int64_t x135 = -1LL;
	int16_t x136 = INT16_MIN;

	t28 = ((x133==(x134-x135))%x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x137 = 4U;
	volatile int16_t x138 = INT16_MIN;
	int8_t x139 = INT8_MIN;
	static int32_t t29 = 7;

	t29 = ((x137==(x138-x139))%x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x141 = 12709U;
	static int16_t x142 = 28;
	volatile uint64_t x143 = UINT64_MAX;
	int32_t x144 = INT32_MAX;

	t30 = ((x141==(x142-x143))%x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = -8;
	int16_t x146 = 248;
	uint64_t x147 = UINT64_MAX;
	int8_t x148 = 2;
	int32_t t31 = 6765;

	t31 = ((x145==(x146-x147))%x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x149 = 27266798428539LL;
	static int64_t x150 = -1LL;
	uint16_t x151 = UINT16_MAX;
	static int64_t x152 = -1LL;
	int64_t t32 = 344959LL;

	t32 = ((x149==(x150-x151))%x152);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x161 = INT32_MIN;
	int8_t x162 = INT8_MAX;
	int8_t x163 = INT8_MIN;
	uint32_t t33 = 14552U;

	t33 = ((x161==(x162-x163))%x164);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x166 = UINT16_MAX;
	volatile int64_t x167 = 7367435LL;
	int16_t x168 = INT16_MIN;
	int32_t t34 = -994;

	t34 = ((x165==(x166-x167))%x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = INT32_MIN;
	static int16_t x170 = INT16_MIN;
	volatile int64_t x171 = INT64_MIN;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t35 = -204343025;

	t35 = ((x169==(x170-x171))%x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MIN;
	uint8_t x176 = 28U;

	t36 = ((x173==(x174-x175))%x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x185 = INT64_MAX;
	uint32_t x187 = UINT32_MAX;
	int16_t x188 = INT16_MAX;
	int32_t t37 = 3348;

	t37 = ((x185==(x186-x187))%x188);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x190 = -1LL;
	int8_t x191 = INT8_MIN;
	static int16_t x192 = INT16_MIN;
	volatile int32_t t38 = -49843;

	t38 = ((x189==(x190-x191))%x192);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MIN;
	static int16_t x195 = -1;
	int64_t x196 = INT64_MIN;
	volatile int64_t t39 = -1LL;

	t39 = ((x193==(x194-x195))%x196);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x197 = -69;
	static int16_t x198 = -57;
	int16_t x199 = -1;
	int64_t x200 = 154LL;
	static volatile int64_t t40 = -89667498184720049LL;

	t40 = ((x197==(x198-x199))%x200);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x201 = -127;
	int16_t x202 = INT16_MAX;
	uint64_t x203 = 72LLU;

	t41 = ((x201==(x202-x203))%x204);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x205 = -1LL;
	static uint8_t x206 = 1U;
	int8_t x207 = INT8_MAX;
	volatile int32_t t42 = 302;

	t42 = ((x205==(x206-x207))%x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x209 = INT16_MIN;
	int32_t x210 = INT32_MIN;
	volatile int32_t x211 = -2702980;
	int64_t x212 = -1LL;
	int64_t t43 = 913970705327522LL;

	t43 = ((x209==(x210-x211))%x212);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x213 = INT64_MIN;
	int16_t x214 = -1;
	uint32_t x215 = UINT32_MAX;
	static int8_t x216 = INT8_MIN;
	volatile int32_t t44 = -581;

	t44 = ((x213==(x214-x215))%x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x217 = -362704839;
	uint32_t x218 = UINT32_MAX;
	uint64_t x219 = 22755915620154244LLU;
	static volatile int8_t x220 = 17;
	int32_t t45 = 2345;

	t45 = ((x217==(x218-x219))%x220);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x225 = INT32_MIN;
	int32_t x226 = INT32_MAX;
	uint8_t x227 = 1U;
	int8_t x228 = INT8_MIN;
	int32_t t46 = 913399;

	t46 = ((x225==(x226-x227))%x228);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x229 = -1;
	int64_t x231 = 809844429316LL;
	int64_t x232 = -1LL;
	int64_t t47 = -121872230LL;

	t47 = ((x229==(x230-x231))%x232);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x233 = 65U;
	int16_t x234 = INT16_MIN;
	uint64_t x235 = 291793358LLU;
	static volatile int16_t x236 = INT16_MAX;
	int32_t t48 = -39008536;

	t48 = ((x233==(x234-x235))%x236);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x237 = UINT64_MAX;
	uint32_t x238 = UINT32_MAX;
	uint8_t x239 = 15U;
	int32_t t49 = 638621;

	t49 = ((x237==(x238-x239))%x240);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x241 = INT16_MAX;
	static uint64_t x242 = 917062605445196LLU;
	volatile uint64_t t50 = 13LLU;

	t50 = ((x241==(x242-x243))%x244);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = 23589;
	volatile int8_t x246 = -7;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = -6;
	int32_t t51 = 1;

	t51 = ((x245==(x246-x247))%x248);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x253 = INT32_MIN;
	static volatile int16_t x254 = INT16_MIN;
	int16_t x255 = INT16_MAX;
	int64_t x256 = 2175623592055293515LL;
	volatile int64_t t52 = 1428889LL;

	t52 = ((x253==(x254-x255))%x256);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x257 = INT8_MIN;
	static uint64_t x258 = UINT64_MAX;
	uint16_t x259 = 5U;
	int16_t x260 = -4;

	t53 = ((x257==(x258-x259))%x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x261 = INT16_MIN;
	static int8_t x263 = -55;
	int16_t x264 = INT16_MIN;
	int32_t t54 = 1211;

	t54 = ((x261==(x262-x263))%x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x265 = INT8_MIN;
	uint64_t x266 = 5910762LLU;
	static int16_t x267 = INT16_MAX;
	int16_t x268 = -104;
	int32_t t55 = -1896889;

	t55 = ((x265==(x266-x267))%x268);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x269 = UINT32_MAX;
	int32_t x270 = INT32_MIN;
	static uint16_t x272 = 1089U;

	t56 = ((x269==(x270-x271))%x272);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x273 = -1;
	uint64_t x274 = UINT64_MAX;
	uint16_t x275 = UINT16_MAX;
	static int32_t x276 = -1;
	volatile int32_t t57 = -117;

	t57 = ((x273==(x274-x275))%x276);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x277 = INT64_MAX;
	int8_t x278 = INT8_MAX;
	uint8_t x280 = 13U;
	static volatile int32_t t58 = 47797;

	t58 = ((x277==(x278-x279))%x280);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x289 = 180U;
	static uint64_t x290 = 148LLU;
	volatile int16_t x291 = INT16_MAX;
	volatile uint64_t t59 = 116373724384533LLU;

	t59 = ((x289==(x290-x291))%x292);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x293 = 558334;
	int8_t x294 = 0;
	uint16_t x296 = UINT16_MAX;
	int32_t t60 = 999876991;

	t60 = ((x293==(x294-x295))%x296);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x297 = -53;
	uint16_t x298 = 2U;
	int16_t x300 = INT16_MIN;
	static int32_t t61 = 31249;

	t61 = ((x297==(x298-x299))%x300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x301 = 41501LLU;
	uint16_t x302 = 104U;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t62 = 7455184785758173262LLU;

	t62 = ((x301==(x302-x303))%x304);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x305 = 19810494438985LLU;
	volatile uint64_t x306 = 1302998172381022886LLU;
	static uint64_t x307 = 1LLU;
	int64_t x308 = INT64_MIN;
	int64_t t63 = -875268092LL;

	t63 = ((x305==(x306-x307))%x308);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x309 = 9;
	uint64_t x310 = UINT64_MAX;
	int64_t x311 = INT64_MIN;
	uint32_t x312 = UINT32_MAX;
	uint32_t t64 = 105382U;

	t64 = ((x309==(x310-x311))%x312);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x313 = INT16_MIN;
	int8_t x314 = INT8_MIN;
	int8_t x315 = 4;
	static uint64_t x316 = 261799993532LLU;
	volatile uint64_t t65 = 5137998983626LLU;

	t65 = ((x313==(x314-x315))%x316);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x317 = INT8_MIN;
	volatile int64_t x318 = INT64_MIN;
	static uint64_t x320 = UINT64_MAX;
	uint64_t t66 = 513184593608107333LLU;

	t66 = ((x317==(x318-x319))%x320);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x321 = INT64_MIN;
	int16_t x322 = 124;
	int16_t x323 = INT16_MIN;
	int64_t x324 = 84607182356LL;

	t67 = ((x321==(x322-x323))%x324);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x325 = 18240966541139LLU;
	uint64_t x326 = 63LLU;
	static int8_t x327 = 1;
	int32_t x328 = 1097603;
	volatile int32_t t68 = -30;

	t68 = ((x325==(x326-x327))%x328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x329 = 13;
	uint16_t x330 = 86U;
	volatile int8_t x331 = 4;

	t69 = ((x329==(x330-x331))%x332);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x333 = UINT16_MAX;
	uint8_t x334 = 78U;
	int32_t x335 = INT32_MAX;
	volatile uint32_t x336 = 1U;
	volatile uint32_t t70 = 550295U;

	t70 = ((x333==(x334-x335))%x336);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x337 = UINT32_MAX;
	uint64_t x338 = UINT64_MAX;
	volatile uint8_t x339 = UINT8_MAX;
	volatile int8_t x340 = 13;

	t71 = ((x337==(x338-x339))%x340);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x341 = INT32_MAX;
	int8_t x342 = -1;
	int64_t x343 = INT64_MIN;
	uint64_t x344 = UINT64_MAX;

	t72 = ((x341==(x342-x343))%x344);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x346 = -1LL;
	static uint64_t x347 = UINT64_MAX;
	int64_t x348 = INT64_MIN;
	volatile int64_t t73 = 37344292524766LL;

	t73 = ((x345==(x346-x347))%x348);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x349 = INT32_MIN;
	static int16_t x350 = INT16_MAX;
	volatile int16_t x351 = INT16_MIN;
	volatile int64_t t74 = 5226262758352LL;

	t74 = ((x349==(x350-x351))%x352);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x353 = 5465610LLU;
	int16_t x354 = INT16_MIN;
	uint8_t x355 = 93U;
	uint32_t x356 = 3217U;
	volatile uint32_t t75 = 23943U;

	t75 = ((x353==(x354-x355))%x356);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x357 = 93092588384505570LLU;
	static int64_t x358 = -91273756674LL;
	int32_t x359 = -1;
	int64_t x360 = -54LL;
	volatile int64_t t76 = 16473563155LL;

	t76 = ((x357==(x358-x359))%x360);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x363 = UINT64_MAX;
	int8_t x364 = -1;

	t77 = ((x361==(x362-x363))%x364);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x369 = INT32_MIN;
	static uint16_t x370 = 1U;
	int32_t x372 = INT32_MAX;
	volatile int32_t t78 = -19381504;

	t78 = ((x369==(x370-x371))%x372);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x377 = INT64_MIN;
	int64_t x378 = -1LL;
	int64_t x379 = 8340365612805587LL;
	int8_t x380 = INT8_MAX;
	static volatile int32_t t79 = -44188330;

	t79 = ((x377==(x378-x379))%x380);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x381 = 0;
	volatile uint16_t x383 = 3607U;
	uint64_t x384 = 3179559LLU;

	t80 = ((x381==(x382-x383))%x384);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x385 = -4;
	volatile uint32_t x386 = 6885U;
	volatile uint64_t x387 = 54770595LLU;
	int32_t x388 = INT32_MIN;
	static volatile int32_t t81 = 173;

	t81 = ((x385==(x386-x387))%x388);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x390 = 0U;
	volatile int16_t x391 = INT16_MIN;
	int32_t x392 = 13898;
	volatile int32_t t82 = 12752;

	t82 = ((x389==(x390-x391))%x392);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x393 = 3344418U;
	volatile uint64_t x395 = 381948811LLU;
	static int8_t x396 = -1;
	volatile int32_t t83 = -2;

	t83 = ((x393==(x394-x395))%x396);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x397 = -1;
	int16_t x398 = -1;
	volatile int32_t x399 = -164;
	int32_t t84 = 298;

	t84 = ((x397==(x398-x399))%x400);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x401 = INT8_MAX;
	static int32_t x402 = INT32_MAX;
	uint64_t x403 = 17104849625589890LLU;
	uint64_t x404 = UINT64_MAX;
	static volatile uint64_t t85 = 65387485652830206LLU;

	t85 = ((x401==(x402-x403))%x404);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x405 = -3044;
	uint8_t x406 = 11U;
	int8_t x407 = -1;
	static uint64_t x408 = 1655179036282LLU;
	uint64_t t86 = 0LLU;

	t86 = ((x405==(x406-x407))%x408);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x409 = 31245253;
	int16_t x410 = -1;
	volatile uint8_t x411 = 0U;
	uint16_t x412 = 4775U;
	static int32_t t87 = 1927143;

	t87 = ((x409==(x410-x411))%x412);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x413 = 3U;
	uint64_t x414 = UINT64_MAX;
	int8_t x415 = -1;
	static int64_t x416 = -1LL;
	static int64_t t88 = -836101872518LL;

	t88 = ((x413==(x414-x415))%x416);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x417 = 7;
	int16_t x418 = -31;
	uint32_t x419 = 637U;
	volatile int32_t t89 = 2992481;

	t89 = ((x417==(x418-x419))%x420);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x421 = -12399LL;
	uint16_t x422 = 32461U;
	int64_t x423 = -4207115371LL;
	int8_t x424 = -1;

	t90 = ((x421==(x422-x423))%x424);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x425 = 59U;
	uint8_t x426 = UINT8_MAX;
	int32_t x427 = INT32_MAX;

	t91 = ((x425==(x426-x427))%x428);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x429 = 974LLU;
	uint16_t x432 = 8165U;

	t92 = ((x429==(x430-x431))%x432);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x433 = UINT8_MAX;
	static volatile int16_t x435 = -1517;
	static uint16_t x436 = UINT16_MAX;
	int32_t t93 = 28683;

	t93 = ((x433==(x434-x435))%x436);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x437 = 819;
	int64_t x439 = INT64_MIN;
	int32_t x440 = INT32_MIN;
	volatile int32_t t94 = -81615;

	t94 = ((x437==(x438-x439))%x440);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x444 = 3U;
	volatile int32_t t95 = 15;

	t95 = ((x441==(x442-x443))%x444);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x446 = INT32_MIN;
	int16_t x448 = INT16_MAX;
	volatile int32_t t96 = 65432743;

	t96 = ((x445==(x446-x447))%x448);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x449 = 6316711228866031659LLU;
	int16_t x451 = INT16_MIN;
	int8_t x452 = -1;
	int32_t t97 = -1;

	t97 = ((x449==(x450-x451))%x452);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x453 = INT32_MIN;
	int8_t x454 = 3;
	volatile int16_t x455 = -2010;
	volatile uint32_t x456 = 27603U;

	t98 = ((x453==(x454-x455))%x456);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x458 = INT32_MIN;
	uint64_t x459 = UINT64_MAX;
	uint16_t x460 = 10854U;

	t99 = ((x457==(x458-x459))%x460);

	if (t99 != 0) { NG(); } else { ; }
	
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

