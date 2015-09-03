#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = INT64_MAX;
int16_t x14 = INT16_MIN;
int64_t t4 = -7146492847LL;
volatile uint32_t x34 = 181740963U;
uint32_t x39 = 6U;
int16_t x46 = -1;
int64_t x57 = -1LL;
volatile int8_t x59 = -3;
static int16_t x60 = -1;
int32_t x62 = -90585;
uint16_t x63 = UINT16_MAX;
static uint8_t x84 = UINT8_MAX;
int16_t x95 = -1;
volatile int16_t x96 = INT16_MIN;
int8_t x102 = 0;
int32_t x106 = -1;
static int16_t x110 = INT16_MIN;
static int16_t x111 = INT16_MAX;
static volatile int8_t x122 = -2;
static int16_t x124 = -86;
int64_t x126 = -1LL;
volatile uint16_t x129 = UINT16_MAX;
int16_t x131 = 188;
int32_t x140 = 3671895;
volatile uint32_t t30 = 20187514U;
uint16_t x144 = UINT16_MAX;
volatile int32_t t31 = -20868243;
uint16_t x145 = 17587U;
int16_t x149 = INT16_MIN;
static volatile int8_t x155 = INT8_MIN;
uint32_t x156 = 19606U;
uint32_t x158 = 65485991U;
int8_t x164 = 27;
volatile int64_t t37 = -7389621LL;
static int32_t x169 = -2;
int64_t x171 = -1LL;
int16_t x173 = -1;
static volatile int64_t x176 = -6LL;
int16_t x189 = 6;
static uint16_t x190 = 14U;
int16_t x209 = INT16_MIN;
int8_t x211 = INT8_MIN;
volatile int32_t t47 = 367222784;
int32_t x214 = INT32_MAX;
static volatile uint8_t x218 = 17U;
static int8_t x219 = INT8_MIN;
int32_t t54 = 1176;
uint8_t x246 = 31U;
int16_t x264 = INT16_MIN;
int16_t x268 = INT16_MIN;
uint32_t x269 = UINT32_MAX;
uint16_t x270 = 1U;
int64_t x272 = 203LL;
static int8_t x273 = INT8_MIN;
int16_t x278 = -1;
uint8_t x288 = 1U;
static int16_t x298 = INT16_MAX;
int64_t x300 = INT64_MIN;
uint8_t x310 = 1U;
volatile int32_t x313 = INT32_MIN;
static volatile uint32_t t74 = 1U;
int16_t x334 = -203;
static int32_t t75 = -12;
int32_t x337 = INT32_MIN;
int64_t x339 = -31LL;
volatile uint8_t x340 = 46U;
int16_t x374 = INT16_MIN;
volatile int32_t t85 = -399;
uint16_t x379 = UINT16_MAX;
uint16_t x380 = 13U;
static volatile int32_t t88 = -265831365;
uint16_t x389 = UINT16_MAX;
int8_t x394 = -5;
int64_t x397 = -23284848065139181LL;
int32_t x398 = -1;
volatile int64_t x399 = INT64_MIN;
volatile uint16_t x402 = 3493U;
int64_t x406 = INT64_MAX;
volatile int32_t t93 = -450;
int32_t t95 = 37835;
static int32_t t96 = 140446639;
volatile uint32_t x428 = UINT32_MAX;
volatile int32_t t98 = -31;
int64_t x432 = 1695976795588945955LL;


void f0(void) {
	uint32_t x1 = 724792U;
	int8_t x2 = 0;
	int8_t x3 = INT8_MIN;
	int32_t x4 = -111;
	volatile uint32_t t0 = 126026U;

	t0 = (x1&((x2-x3)<x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = INT16_MAX;
	int32_t x11 = INT32_MAX;
	static int64_t x12 = INT64_MAX;
	static volatile int32_t t1 = 120859196;

	t1 = (x9&((x10-x11)<x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	int32_t x15 = INT32_MIN;
	static int32_t x16 = -1;
	static int32_t t2 = -112618;

	t2 = (x13&((x14-x15)<x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = INT64_MAX;
	int64_t x18 = INT64_MIN;
	int8_t x19 = -23;
	int64_t x20 = INT64_MIN;
	int64_t t3 = 68319415LL;

	t3 = (x17&((x18-x19)<x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	volatile int16_t x22 = INT16_MIN;
	volatile int8_t x23 = -5;
	uint8_t x24 = 1U;

	t4 = (x21&((x22-x23)<x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MAX;
	static int8_t x26 = -1;
	int8_t x27 = INT8_MIN;
	uint64_t x28 = UINT64_MAX;
	int32_t t5 = 23;

	t5 = (x25&((x26-x27)<x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MAX;
	uint64_t x30 = 1384909069718528426LLU;
	volatile int16_t x31 = INT16_MIN;
	int32_t x32 = -1;
	static int64_t t6 = 11862LL;

	t6 = (x29&((x30-x31)<x32));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -352759740;
	int8_t x35 = INT8_MIN;
	uint8_t x36 = 43U;
	static int32_t t7 = -307;

	t7 = (x33&((x34-x35)<x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = INT64_MIN;
	int16_t x38 = INT16_MIN;
	int16_t x40 = INT16_MIN;
	int64_t t8 = -91673LL;

	t8 = (x37&((x38-x39)<x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = UINT64_MAX;
	int64_t x42 = -1LL;
	int32_t x43 = 0;
	int8_t x44 = INT8_MIN;
	uint64_t t9 = 83268103756LLU;

	t9 = (x41&((x42-x43)<x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x45 = 3549847LLU;
	volatile uint32_t x47 = UINT32_MAX;
	int64_t x48 = INT64_MIN;
	uint64_t t10 = 1327409241059450261LLU;

	t10 = (x45&((x46-x47)<x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x49 = 30U;
	uint32_t x50 = UINT32_MAX;
	uint64_t x51 = 4747953609705LLU;
	int64_t x52 = INT64_MAX;
	static volatile int32_t t11 = 6;

	t11 = (x49&((x50-x51)<x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = 115288LL;
	uint64_t x54 = 3532070LLU;
	volatile int16_t x55 = INT16_MIN;
	volatile int64_t x56 = -1LL;
	int64_t t12 = -1153301241067835LL;

	t12 = (x53&((x54-x55)<x56));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x58 = -1;
	volatile int64_t t13 = -7685LL;

	t13 = (x57&((x58-x59)<x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	static int16_t x64 = 24;
	int32_t t14 = -5710;

	t14 = (x61&((x62-x63)<x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 2;
	static int32_t x66 = INT32_MIN;
	int32_t x67 = INT32_MIN;
	int64_t x68 = INT64_MIN;
	int32_t t15 = -823;

	t15 = (x65&((x66-x67)<x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	volatile int8_t x70 = INT8_MAX;
	int16_t x71 = INT16_MAX;
	int64_t x72 = -15377160494LL;
	int32_t t16 = -11872195;

	t16 = (x69&((x70-x71)<x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -18;
	int32_t x74 = INT32_MIN;
	int8_t x75 = -1;
	uint64_t x76 = 3767012056994LLU;
	int32_t t17 = -9282;

	t17 = (x73&((x74-x75)<x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MIN;
	uint16_t x82 = UINT16_MAX;
	int32_t x83 = 79368;
	volatile int32_t t18 = -1;

	t18 = (x81&((x82-x83)<x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -1;
	int64_t x86 = 3652346025825569715LL;
	uint8_t x87 = 30U;
	static uint64_t x88 = 11252861LLU;
	volatile int32_t t19 = 345729472;

	t19 = (x85&((x86-x87)<x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x89 = INT64_MIN;
	uint16_t x90 = 28U;
	uint8_t x91 = 1U;
	int64_t x92 = INT64_MIN;
	int64_t t20 = 1782LL;

	t20 = (x89&((x90-x91)<x92));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = INT8_MIN;
	volatile uint8_t x94 = 61U;
	volatile int32_t t21 = -436068760;

	t21 = (x93&((x94-x95)<x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	volatile int32_t x103 = 72746841;
	int32_t x104 = INT32_MIN;
	int32_t t22 = 6070571;

	t22 = (x101&((x102-x103)<x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = 9275LLU;
	uint32_t x107 = 7317U;
	uint16_t x108 = UINT16_MAX;
	volatile uint64_t t23 = 2379191LLU;

	t23 = (x105&((x106-x107)<x108));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x109 = INT8_MAX;
	volatile int64_t x112 = -1LL;
	static int32_t t24 = -1;

	t24 = (x109&((x110-x111)<x112));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x117 = 3;
	int16_t x118 = INT16_MIN;
	int16_t x119 = -19;
	volatile int8_t x120 = -1;
	volatile int32_t t25 = -295;

	t25 = (x117&((x118-x119)<x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x121 = INT8_MAX;
	int8_t x123 = INT8_MIN;
	volatile int32_t t26 = 52;

	t26 = (x121&((x122-x123)<x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = 7U;
	int32_t x127 = INT32_MIN;
	int32_t x128 = -1;
	int32_t t27 = 64033017;

	t27 = (x125&((x126-x127)<x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x130 = 1004597857U;
	volatile int32_t x132 = INT32_MAX;
	static int32_t t28 = 190;

	t28 = (x129&((x130-x131)<x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = UINT32_MAX;
	uint16_t x134 = 4U;
	static int16_t x135 = 2190;
	volatile int64_t x136 = INT64_MIN;
	volatile uint32_t t29 = 15U;

	t29 = (x133&((x134-x135)<x136));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = 111378U;
	int32_t x138 = INT32_MIN;
	static int16_t x139 = INT16_MIN;

	t30 = (x137&((x138-x139)<x140));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x141 = 9;
	static int32_t x142 = -452585088;
	static int64_t x143 = -1LL;

	t31 = (x141&((x142-x143)<x144));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x146 = 4774U;
	int16_t x147 = 32;
	volatile int32_t x148 = INT32_MIN;
	int32_t t32 = 1236799;

	t32 = (x145&((x146-x147)<x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x150 = UINT64_MAX;
	static int64_t x151 = -13474LL;
	int32_t x152 = INT32_MIN;
	volatile int32_t t33 = 47920;

	t33 = (x149&((x150-x151)<x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = 1;
	uint64_t x154 = UINT64_MAX;
	volatile int32_t t34 = -4712325;

	t34 = (x153&((x154-x155)<x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MIN;
	static volatile uint32_t x159 = 209U;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t35 = 6639;

	t35 = (x157&((x158-x159)<x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = -186094326LL;
	static uint8_t x162 = 1U;
	volatile int16_t x163 = -1;
	int64_t t36 = -131474510019098LL;

	t36 = (x161&((x162-x163)<x164));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = INT64_MAX;
	volatile int16_t x166 = INT16_MIN;
	int32_t x167 = 1;
	uint32_t x168 = UINT32_MAX;

	t37 = (x165&((x166-x167)<x168));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x170 = INT16_MIN;
	static int64_t x172 = -460LL;
	int32_t t38 = 0;

	t38 = (x169&((x170-x171)<x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x174 = INT8_MAX;
	int8_t x175 = INT8_MIN;
	volatile int32_t t39 = 411;

	t39 = (x173&((x174-x175)<x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x177 = 13631LLU;
	static volatile uint32_t x178 = 14U;
	uint64_t x179 = UINT64_MAX;
	int64_t x180 = -484947111636752LL;
	volatile uint64_t t40 = 12612LLU;

	t40 = (x177&((x178-x179)<x180));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 444145707U;
	int16_t x182 = INT16_MIN;
	volatile int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MIN;
	uint32_t t41 = 418751U;

	t41 = (x181&((x182-x183)<x184));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = 406742941;
	int8_t x186 = INT8_MAX;
	int8_t x187 = -1;
	int16_t x188 = -1;
	int32_t t42 = -3349916;

	t42 = (x185&((x186-x187)<x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x191 = 36424441;
	static uint32_t x192 = 134U;
	volatile int32_t t43 = -405021;

	t43 = (x189&((x190-x191)<x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = 29269U;
	uint8_t x194 = UINT8_MAX;
	uint16_t x195 = 25136U;
	static int8_t x196 = 14;
	uint32_t t44 = 5329U;

	t44 = (x193&((x194-x195)<x196));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = INT16_MIN;
	uint32_t x202 = 85923927U;
	int64_t x203 = -1LL;
	volatile int16_t x204 = 0;
	int32_t t45 = 13466668;

	t45 = (x201&((x202-x203)<x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x205 = 127U;
	static int64_t x206 = INT64_MIN;
	int32_t x207 = -1;
	volatile uint16_t x208 = 37U;
	volatile int32_t t46 = 25720380;

	t46 = (x205&((x206-x207)<x208));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x210 = INT16_MAX;
	static uint8_t x212 = 96U;

	t47 = (x209&((x210-x211)<x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = INT32_MIN;
	int8_t x215 = INT8_MAX;
	int8_t x216 = INT8_MAX;
	static volatile int32_t t48 = -568;

	t48 = (x213&((x214-x215)<x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = INT8_MAX;
	int64_t x220 = 350701503655LL;
	int32_t t49 = 975;

	t49 = (x217&((x218-x219)<x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = 1;
	static uint64_t x222 = UINT64_MAX;
	uint8_t x223 = 89U;
	static int16_t x224 = INT16_MIN;
	static int32_t t50 = 2;

	t50 = (x221&((x222-x223)<x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x225 = UINT16_MAX;
	int64_t x226 = INT64_MAX;
	int32_t x227 = 25;
	int32_t x228 = -884495456;
	int32_t t51 = -2893618;

	t51 = (x225&((x226-x227)<x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x229 = -60;
	int16_t x230 = -3395;
	static volatile uint16_t x231 = 0U;
	int32_t x232 = 5;
	int32_t t52 = -108748;

	t52 = (x229&((x230-x231)<x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x237 = 242203U;
	int16_t x238 = -1;
	uint16_t x239 = UINT16_MAX;
	static int64_t x240 = INT64_MIN;
	uint32_t t53 = 62630U;

	t53 = (x237&((x238-x239)<x240));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x241 = UINT16_MAX;
	volatile uint64_t x242 = 13667LLU;
	static volatile int64_t x243 = INT64_MIN;
	uint32_t x244 = 8911486U;

	t54 = (x241&((x242-x243)<x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = 24;
	static uint32_t x247 = UINT32_MAX;
	uint32_t x248 = UINT32_MAX;
	int32_t t55 = -1408251;

	t55 = (x245&((x246-x247)<x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = INT8_MIN;
	static volatile int16_t x250 = -1;
	volatile int64_t x251 = -1LL;
	int16_t x252 = 359;
	volatile int32_t t56 = 16869051;

	t56 = (x249&((x250-x251)<x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = INT32_MIN;
	uint8_t x254 = 1U;
	int64_t x255 = 0LL;
	static int16_t x256 = -1;
	volatile int32_t t57 = 1954525;

	t57 = (x253&((x254-x255)<x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x261 = -1;
	static volatile uint64_t x262 = 3981366LLU;
	volatile int16_t x263 = -100;
	static volatile int32_t t58 = 6121698;

	t58 = (x261&((x262-x263)<x264));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x265 = 4937U;
	static int8_t x266 = INT8_MIN;
	int16_t x267 = -1;
	int32_t t59 = -2;

	t59 = (x265&((x266-x267)<x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x271 = UINT8_MAX;
	volatile uint32_t t60 = 30735U;

	t60 = (x269&((x270-x271)<x272));

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x274 = INT8_MIN;
	int64_t x275 = 72137044623LL;
	int64_t x276 = 11LL;
	volatile int32_t t61 = -46768;

	t61 = (x273&((x274-x275)<x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = INT32_MIN;
	static int64_t x279 = -2420907124387253328LL;
	int16_t x280 = 1957;
	int32_t t62 = -326;

	t62 = (x277&((x278-x279)<x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x281 = INT8_MIN;
	uint32_t x282 = 10026910U;
	int64_t x283 = 5236192LL;
	int32_t x284 = -1;
	volatile int32_t t63 = -68118;

	t63 = (x281&((x282-x283)<x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = INT8_MIN;
	uint32_t x286 = 316303910U;
	int32_t x287 = INT32_MIN;
	int32_t t64 = -4;

	t64 = (x285&((x286-x287)<x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = INT64_MIN;
	static uint32_t x290 = 0U;
	int32_t x291 = INT32_MAX;
	volatile int8_t x292 = INT8_MAX;
	volatile int64_t t65 = 52806123LL;

	t65 = (x289&((x290-x291)<x292));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x293 = INT16_MIN;
	static int16_t x294 = INT16_MAX;
	int64_t x295 = 53527LL;
	int8_t x296 = 0;
	volatile int32_t t66 = -73456300;

	t66 = (x293&((x294-x295)<x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x297 = 4300U;
	uint16_t x299 = 1822U;
	int32_t t67 = 1208;

	t67 = (x297&((x298-x299)<x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = 107413;
	int16_t x302 = INT16_MAX;
	int32_t x303 = -1;
	static volatile int32_t x304 = -10;
	int32_t t68 = 2;

	t68 = (x301&((x302-x303)<x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x305 = UINT32_MAX;
	volatile int8_t x306 = INT8_MIN;
	static int16_t x307 = -1;
	uint32_t x308 = UINT32_MAX;
	static uint32_t t69 = 220727811U;

	t69 = (x305&((x306-x307)<x308));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x309 = UINT32_MAX;
	int8_t x311 = 9;
	static uint32_t x312 = UINT32_MAX;
	volatile uint32_t t70 = 26484235U;

	t70 = (x309&((x310-x311)<x312));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x314 = UINT64_MAX;
	static int16_t x315 = INT16_MIN;
	uint32_t x316 = UINT32_MAX;
	int32_t t71 = 14;

	t71 = (x313&((x314-x315)<x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = -1;
	static int8_t x322 = INT8_MIN;
	int64_t x323 = -2910418LL;
	int16_t x324 = INT16_MIN;
	volatile int32_t t72 = -63;

	t72 = (x321&((x322-x323)<x324));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MIN;
	uint16_t x327 = UINT16_MAX;
	int64_t x328 = INT64_MAX;
	int64_t t73 = 19859869886LL;

	t73 = (x325&((x326-x327)<x328));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x329 = 165886U;
	int8_t x330 = 46;
	static uint64_t x331 = 45469013LLU;
	static uint8_t x332 = 112U;

	t74 = (x329&((x330-x331)<x332));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x333 = -164;
	volatile uint64_t x335 = UINT64_MAX;
	uint16_t x336 = 74U;

	t75 = (x333&((x334-x335)<x336));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x338 = INT16_MAX;
	int32_t t76 = 1;

	t76 = (x337&((x338-x339)<x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x341 = INT8_MIN;
	int8_t x342 = 7;
	static int8_t x343 = -1;
	static uint64_t x344 = UINT64_MAX;
	volatile int32_t t77 = 173622;

	t77 = (x341&((x342-x343)<x344));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x345 = 11U;
	int8_t x346 = 1;
	int8_t x347 = -1;
	int8_t x348 = INT8_MIN;
	volatile int32_t t78 = 470669139;

	t78 = (x345&((x346-x347)<x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x349 = 380458696037LLU;
	static uint64_t x350 = 28976620LLU;
	static int16_t x351 = INT16_MAX;
	uint64_t x352 = 11086482953LLU;
	uint64_t t79 = 2827772710903459LLU;

	t79 = (x349&((x350-x351)<x352));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x353 = 987;
	volatile uint16_t x354 = 18U;
	uint8_t x355 = 3U;
	static volatile int16_t x356 = INT16_MIN;
	static int32_t t80 = -2718613;

	t80 = (x353&((x354-x355)<x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x357 = -1;
	static uint64_t x358 = 3193LLU;
	static int32_t x359 = 184514;
	volatile uint32_t x360 = 537707U;
	int32_t t81 = -1;

	t81 = (x357&((x358-x359)<x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = -1;
	uint8_t x362 = 0U;
	uint64_t x363 = 30LLU;
	int8_t x364 = INT8_MAX;
	int32_t t82 = -597334198;

	t82 = (x361&((x362-x363)<x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x365 = UINT16_MAX;
	int16_t x366 = -1;
	int16_t x367 = -20;
	uint32_t x368 = UINT32_MAX;
	int32_t t83 = -99;

	t83 = (x365&((x366-x367)<x368));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x369 = -1;
	int8_t x370 = -1;
	int32_t x371 = -16957;
	uint8_t x372 = 1U;
	int32_t t84 = -229;

	t84 = (x369&((x370-x371)<x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x373 = INT32_MAX;
	uint32_t x375 = UINT32_MAX;
	int16_t x376 = INT16_MIN;

	t85 = (x373&((x374-x375)<x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x377 = INT32_MAX;
	int16_t x378 = INT16_MIN;
	static int32_t t86 = 41723743;

	t86 = (x377&((x378-x379)<x380));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x381 = 1524562785891LLU;
	volatile uint32_t x382 = UINT32_MAX;
	uint16_t x383 = UINT16_MAX;
	static int8_t x384 = INT8_MIN;
	uint64_t t87 = 222LLU;

	t87 = (x381&((x382-x383)<x384));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = -2150;
	int32_t x386 = INT32_MAX;
	int32_t x387 = 92761;
	volatile int8_t x388 = INT8_MIN;

	t88 = (x385&((x386-x387)<x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x390 = INT32_MIN;
	int16_t x391 = -1;
	int32_t x392 = INT32_MIN;
	int32_t t89 = 1;

	t89 = (x389&((x390-x391)<x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x393 = 1148U;
	volatile uint8_t x395 = 21U;
	int32_t x396 = -1;
	static volatile uint32_t t90 = 13541241U;

	t90 = (x393&((x394-x395)<x396));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x400 = 1U;
	volatile int64_t t91 = -112911LL;

	t91 = (x397&((x398-x399)<x400));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x401 = 1090U;
	int64_t x403 = 1387LL;
	static int64_t x404 = -1LL;
	uint32_t t92 = 506645275U;

	t92 = (x401&((x402-x403)<x404));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x405 = -1;
	volatile uint32_t x407 = 3003615U;
	int8_t x408 = INT8_MIN;

	t93 = (x405&((x406-x407)<x408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = INT64_MAX;
	int16_t x410 = INT16_MIN;
	static volatile int16_t x411 = -120;
	int32_t x412 = INT32_MAX;
	int64_t t94 = -14979954139288905LL;

	t94 = (x409&((x410-x411)<x412));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x413 = UINT16_MAX;
	volatile int32_t x414 = 56404;
	volatile uint32_t x415 = 2154U;
	volatile int16_t x416 = INT16_MIN;

	t95 = (x413&((x414-x415)<x416));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = INT8_MAX;
	volatile int32_t x418 = -1;
	int16_t x419 = INT16_MIN;
	volatile uint64_t x420 = UINT64_MAX;

	t96 = (x417&((x418-x419)<x420));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x421 = INT8_MIN;
	volatile uint64_t x422 = 32665961LLU;
	static volatile int64_t x423 = INT64_MIN;
	volatile int32_t x424 = INT32_MIN;
	volatile int32_t t97 = -2;

	t97 = (x421&((x422-x423)<x424));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x425 = 25;
	static volatile int8_t x426 = -1;
	volatile uint32_t x427 = UINT32_MAX;

	t98 = (x425&((x426-x427)<x428));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x429 = 55947U;
	static volatile int32_t x430 = INT32_MIN;
	int32_t x431 = INT32_MIN;
	uint32_t t99 = 90U;

	t99 = (x429&((x430-x431)<x432));

	if (t99 != 1U) { NG(); } else { ; }
	
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

