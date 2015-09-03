#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MIN;
volatile int64_t x7 = -1LL;
uint64_t x11 = 32508295LLU;
static volatile int32_t x12 = INT32_MIN;
static uint64_t t2 = 141798LLU;
static uint32_t x13 = 68402873U;
uint32_t x14 = UINT32_MAX;
static volatile int8_t x20 = -1;
int64_t t5 = -14LL;
int16_t x25 = INT16_MAX;
static uint32_t t6 = 30U;
uint64_t x31 = UINT64_MAX;
static volatile int16_t x32 = -1;
volatile int16_t x33 = -25;
int64_t x34 = -233660913465819731LL;
volatile int16_t x35 = -1;
int64_t t8 = 961015227640124279LL;
uint64_t x40 = 69582500179974689LLU;
volatile int32_t x41 = -1;
volatile int32_t t10 = -2;
uint64_t t11 = 216063LLU;
int64_t x56 = -280307LL;
int64_t x62 = INT64_MIN;
uint16_t x78 = UINT16_MAX;
volatile int64_t t17 = 22323LL;
volatile uint32_t x91 = 3U;
uint32_t x92 = 2545976U;
uint64_t t19 = 13826667LLU;
uint16_t x98 = 17705U;
int16_t x103 = -1;
uint16_t x106 = 4U;
uint64_t x114 = 70064837446985LLU;
uint64_t t23 = 151647435166LLU;
static int32_t x117 = 19135004;
int8_t x119 = -1;
uint32_t x121 = 1U;
int16_t x124 = INT16_MAX;
static volatile uint32_t t25 = 28426296U;
int64_t x127 = 59377911346757LL;
uint32_t x138 = UINT32_MAX;
uint8_t x146 = 1U;
int64_t x147 = 4501LL;
volatile uint64_t t30 = 560LLU;
volatile uint8_t x149 = UINT8_MAX;
uint8_t x154 = 0U;
uint8_t x159 = 5U;
static uint32_t t35 = 1U;
int64_t x185 = 80621025LL;
static volatile int16_t x187 = INT16_MIN;
uint64_t x189 = 1705471231472LLU;
int8_t x193 = INT8_MIN;
static volatile int8_t x198 = INT8_MIN;
int8_t x202 = -1;
int32_t x204 = INT32_MIN;
volatile int64_t x205 = INT64_MIN;
int8_t x225 = INT8_MIN;
int16_t x237 = INT16_MIN;
static volatile int32_t x253 = INT32_MAX;
int8_t x261 = -1;
volatile int8_t x266 = INT8_MAX;
int32_t x269 = INT32_MIN;
static uint16_t x271 = UINT16_MAX;
int8_t x277 = 15;
static volatile int32_t x280 = INT32_MIN;
int8_t x281 = 52;
volatile uint8_t x300 = 1U;
uint16_t x309 = 0U;
static int8_t x311 = INT8_MIN;
static uint16_t x313 = 1782U;
int64_t x314 = INT64_MAX;
volatile uint64_t t66 = 3242811622384937469LLU;
static uint16_t x331 = UINT16_MAX;
static uint8_t x340 = UINT8_MAX;
uint64_t x346 = 32711817261300660LLU;
volatile int32_t x349 = 211394062;
int32_t x351 = -198663690;
static uint64_t x352 = UINT64_MAX;
volatile int64_t t74 = 129156LL;
volatile uint32_t t76 = 1527619410U;
uint64_t t77 = 335090126917LLU;
static volatile uint64_t t79 = 47327013984LLU;
volatile int8_t x386 = -1;
uint64_t x387 = UINT64_MAX;
volatile int64_t x395 = INT64_MIN;
static uint64_t x396 = 3541752574907847900LLU;
volatile int32_t x406 = -791365;
static volatile int64_t t84 = INT64_MIN;
static uint8_t x423 = 123U;
uint32_t x424 = UINT32_MAX;
uint16_t x426 = 853U;
int16_t x432 = -1;
static int8_t x433 = INT8_MAX;
static int32_t x437 = INT32_MIN;
int64_t x441 = INT64_MIN;
uint16_t x446 = UINT16_MAX;
int64_t t94 = 12329359667643LL;
volatile int16_t x472 = INT16_MIN;
int8_t x475 = -1;


void f0(void) {
	int64_t x1 = -28754291LL;
	int16_t x2 = -71;
	static uint64_t x4 = 100144095108460965LLU;
	static uint64_t t0 = 77325LLU;

	t0 = (x1&((x2-x3)%x4));

	if (t0 != 9LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 34U;
	static int32_t x6 = INT32_MIN;
	uint8_t x8 = 99U;
	static int64_t t1 = 8132167661LL;

	t1 = (x5&((x6-x7)%x8));

	if (t1 != 34LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -115955257;
	static int8_t x10 = INT8_MAX;

	t2 = (x9&((x10-x11)%x12));

	if (t2 != 2013700288LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x15 = INT8_MIN;
	static volatile uint8_t x16 = 48U;
	volatile uint32_t t3 = 17079U;

	t3 = (x13&((x14-x15)%x16));

	if (t3 != 25U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 3U;
	int32_t x18 = INT32_MIN;
	static volatile uint64_t x19 = UINT64_MAX;
	volatile uint64_t t4 = 1231020LLU;

	t4 = (x17&((x18-x19)%x20));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static int8_t x22 = INT8_MAX;
	int64_t x23 = -1LL;
	int64_t x24 = INT64_MIN;

	t5 = (x21&((x22-x23)%x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x26 = -1;
	static volatile int32_t x27 = -13899;
	uint32_t x28 = 77U;

	t6 = (x25&((x26-x27)%x28));

	if (t6 != 38U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	int32_t x30 = -1;
	volatile uint64_t t7 = 24LLU;

	t7 = (x29&((x30-x31)%x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x36 = -1;

	t8 = (x33&((x34-x35)%x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x37 = 2061319255U;
	int16_t x38 = INT16_MAX;
	uint8_t x39 = 53U;
	uint64_t t9 = 1LLU;

	t9 = (x37&((x38-x39)%x40));

	if (t9 != 15426LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = 94973;
	static int16_t x43 = INT16_MAX;
	static int16_t x44 = -1;

	t10 = (x41&((x42-x43)%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = UINT32_MAX;
	int64_t x46 = INT64_MIN;
	uint64_t x47 = UINT64_MAX;
	uint16_t x48 = UINT16_MAX;

	t11 = (x45&((x46-x47)%x48));

	if (t11 != 32769LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -49;
	int16_t x54 = INT16_MAX;
	int16_t x55 = INT16_MIN;
	volatile int64_t t12 = -3376640979527LL;

	t12 = (x53&((x54-x55)%x56));

	if (t12 != 65487LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x57 = UINT8_MAX;
	int8_t x58 = INT8_MIN;
	static uint64_t x59 = 73635659111654LLU;
	uint64_t x60 = 2825613956LLU;
	static uint64_t t13 = 114220347LLU;

	t13 = (x57&((x58-x59)%x60));

	if (t13 != 10LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x61 = UINT16_MAX;
	volatile int8_t x63 = INT8_MIN;
	uint8_t x64 = 118U;
	static volatile int64_t t14 = 111339368LL;

	t14 = (x61&((x62-x63)%x64));

	if (t14 != 65514LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 0LLU;
	int16_t x66 = 240;
	static uint64_t x67 = 1323737LLU;
	volatile int64_t x68 = INT64_MAX;
	volatile uint64_t t15 = 9699607389332LLU;

	t15 = (x65&((x66-x67)%x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x77 = UINT16_MAX;
	uint64_t x79 = 6370139153LLU;
	uint64_t x80 = 48362841621LLU;
	volatile uint64_t t16 = 3LLU;

	t16 = (x77&((x78-x79)%x80));

	if (t16 != 41978LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MIN;
	static int8_t x87 = 0;
	static int32_t x88 = 147586;

	t17 = (x85&((x86-x87)%x88));

	if (t17 != -2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x89 = 120U;
	int8_t x90 = INT8_MIN;
	volatile uint32_t t18 = 609U;

	t18 = (x89&((x90-x91)%x92));

	if (t18 != 40U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x93 = 1U;
	int64_t x94 = -40560LL;
	uint16_t x95 = UINT16_MAX;
	uint64_t x96 = 180102683LLU;

	t19 = (x93&((x94-x95)%x96));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = -504353692LL;
	volatile uint8_t x99 = 5U;
	static uint16_t x100 = 62U;
	volatile int64_t t20 = 1LL;

	t20 = (x97&((x98-x99)%x100));

	if (t20 != 4LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = 1U;
	int8_t x102 = INT8_MAX;
	int64_t x104 = INT64_MAX;
	int64_t t21 = -362218401516LL;

	t21 = (x101&((x102-x103)%x104));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x105 = INT32_MIN;
	int32_t x107 = 123195074;
	volatile uint32_t x108 = 127360U;
	volatile uint32_t t22 = 6779701U;

	t22 = (x105&((x106-x107)%x108));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = INT64_MIN;
	int8_t x115 = -1;
	int8_t x116 = INT8_MIN;

	t23 = (x113&((x114-x115)%x116));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x118 = UINT32_MAX;
	volatile int32_t x120 = INT32_MIN;
	uint32_t t24 = 31180602U;

	t24 = (x117&((x118-x119)%x120));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x122 = UINT8_MAX;
	volatile int16_t x123 = INT16_MIN;

	t25 = (x121&((x122-x123)%x124));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x125 = 477102394820686179LLU;
	volatile int16_t x126 = INT16_MIN;
	int32_t x128 = INT32_MAX;
	uint64_t t26 = 135129848LLU;

	t26 = (x125&((x126-x127)%x128));

	if (t26 != 477102394078286114LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = INT8_MIN;
	int64_t x134 = 10274974922971776LL;
	int64_t x135 = -2048605764LL;
	static int32_t x136 = INT32_MAX;
	volatile int64_t t27 = 15LL;

	t27 = (x133&((x134-x135)%x136));

	if (t27 != 12606080LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = -28;
	static int32_t x139 = INT32_MIN;
	int8_t x140 = INT8_MIN;
	static volatile uint32_t t28 = 499U;

	t28 = (x137&((x138-x139)%x140));

	if (t28 != 2147483620U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x141 = 1011U;
	volatile uint64_t x142 = 2415611127226557085LLU;
	static uint8_t x143 = 2U;
	int16_t x144 = INT16_MIN;
	uint64_t t29 = 327809012529913LLU;

	t29 = (x141&((x142-x143)%x144));

	if (t29 != 659LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x145 = 14609767131427LLU;
	int8_t x148 = INT8_MAX;

	t30 = (x145&((x146-x147)%x148));

	if (t30 != 14609767131393LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x150 = 1103LL;
	uint64_t x151 = 15LLU;
	int8_t x152 = INT8_MAX;
	volatile uint64_t t31 = 298875LLU;

	t31 = (x149&((x150-x151)%x152));

	if (t31 != 72LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x153 = INT64_MIN;
	int16_t x155 = 1441;
	volatile int8_t x156 = -2;
	int64_t t32 = INT64_MIN;

	t32 = (x153&((x154-x155)%x156));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = -1029443;
	uint8_t x158 = 102U;
	uint16_t x160 = 12339U;
	int32_t t33 = 979864;

	t33 = (x157&((x158-x159)%x160));

	if (t33 != 33) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x165 = INT16_MAX;
	volatile uint16_t x166 = 49U;
	uint64_t x167 = 3663289442308512985LLU;
	static int8_t x168 = 6;
	volatile uint64_t t34 = 254223367289626LLU;

	t34 = (x165&((x166-x167)%x168));

	if (t34 != 4LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x173 = 9028U;
	static uint32_t x174 = 19180U;
	int16_t x175 = -1;
	volatile int8_t x176 = INT8_MAX;

	t35 = (x173&((x174-x175)%x176));

	if (t35 != 4U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x177 = 174954100301125066LL;
	int64_t x178 = -45985521LL;
	static int64_t x179 = -13410LL;
	int64_t x180 = INT64_MIN;
	int64_t t36 = 6661134381LL;

	t36 = (x177&((x178-x179)%x180));

	if (t36 != 174954100297958720LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = INT16_MAX;
	int16_t x182 = -1;
	volatile int64_t x183 = 1LL;
	int64_t x184 = INT64_MIN;
	volatile int64_t t37 = -189LL;

	t37 = (x181&((x182-x183)%x184));

	if (t37 != 32766LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x186 = 0;
	int8_t x188 = 3;
	volatile int64_t t38 = -4824704658320LL;

	t38 = (x185&((x186-x187)%x188));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x190 = INT32_MIN;
	int16_t x191 = INT16_MIN;
	uint16_t x192 = 40U;
	uint64_t t39 = 445059833007LLU;

	t39 = (x189&((x190-x191)%x192));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x194 = INT8_MAX;
	int16_t x195 = 1932;
	int32_t x196 = INT32_MIN;
	int32_t t40 = -4426;

	t40 = (x193&((x194-x195)%x196));

	if (t40 != -1920) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x197 = -519230LL;
	int32_t x199 = -25;
	volatile int8_t x200 = -1;
	volatile int64_t t41 = 4853LL;

	t41 = (x197&((x198-x199)%x200));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x201 = 344U;
	static int16_t x203 = INT16_MAX;
	int32_t t42 = 143;

	t42 = (x201&((x202-x203)%x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x206 = 13831241583LLU;
	int32_t x207 = -1;
	int64_t x208 = INT64_MIN;
	static volatile uint64_t t43 = 4370028748286556LLU;

	t43 = (x205&((x206-x207)%x208));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x213 = 130131923U;
	int8_t x214 = -1;
	uint16_t x215 = 19U;
	uint8_t x216 = 102U;
	uint32_t t44 = 1094138U;

	t44 = (x213&((x214-x215)%x216));

	if (t44 != 130131904U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x217 = 1U;
	volatile int16_t x218 = -1;
	int32_t x219 = INT32_MAX;
	volatile uint64_t x220 = 96096LLU;
	static uint64_t t45 = 5130214996849571LLU;

	t45 = (x217&((x218-x219)%x220));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x221 = UINT32_MAX;
	int16_t x222 = INT16_MAX;
	int8_t x223 = -9;
	int8_t x224 = INT8_MAX;
	static volatile uint32_t t46 = 15972U;

	t46 = (x221&((x222-x223)%x224));

	if (t46 != 10U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x226 = -8;
	int16_t x227 = INT16_MAX;
	uint64_t x228 = 334608538408714LLU;
	uint64_t t47 = 6587692885435790520LLU;

	t47 = (x225&((x226-x227)%x228));

	if (t47 != 109959775524608LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = INT32_MIN;
	int32_t x234 = -1;
	uint32_t x235 = 31025U;
	uint32_t x236 = UINT32_MAX;
	volatile uint32_t t48 = 304836U;

	t48 = (x233&((x234-x235)%x236));

	if (t48 != 2147483648U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x238 = 105958521475976668LL;
	int64_t x239 = 14638009272510LL;
	volatile int32_t x240 = -290711;
	int64_t t49 = 315814810038LL;

	t49 = (x237&((x238-x239)%x240));

	if (t49 != 163840LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x241 = -3;
	int8_t x242 = INT8_MIN;
	volatile uint64_t x243 = UINT64_MAX;
	int16_t x244 = INT16_MIN;
	uint64_t t50 = 10LLU;

	t50 = (x241&((x242-x243)%x244));

	if (t50 != 32641LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x249 = UINT8_MAX;
	static uint16_t x250 = UINT16_MAX;
	int32_t x251 = -1;
	int8_t x252 = 63;
	int32_t t51 = 238;

	t51 = (x249&((x250-x251)%x252));

	if (t51 != 16) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x254 = 382U;
	int32_t x255 = -95;
	uint16_t x256 = UINT16_MAX;
	static volatile int32_t t52 = 48728;

	t52 = (x253&((x254-x255)%x256));

	if (t52 != 477) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x262 = INT16_MIN;
	int64_t x263 = INT64_MIN;
	static int16_t x264 = INT16_MIN;
	volatile int64_t t53 = 237739411745LL;

	t53 = (x261&((x262-x263)%x264));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x265 = UINT32_MAX;
	static volatile int64_t x267 = -1LL;
	uint16_t x268 = 1U;
	static int64_t t54 = 2993608101301124194LL;

	t54 = (x265&((x266-x267)%x268));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x270 = INT8_MIN;
	static uint64_t x272 = 200690102LLU;
	static volatile uint64_t t55 = 169972243261840LLU;

	t55 = (x269&((x270-x271)%x272));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x273 = -1;
	static uint8_t x274 = 7U;
	static int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MIN;
	volatile int32_t t56 = 3455003;

	t56 = (x273&((x274-x275)%x276));

	if (t56 != 7) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x278 = -2046259;
	static uint32_t x279 = 3188688U;
	uint32_t t57 = 80935U;

	t57 = (x277&((x278-x279)%x280));

	if (t57 != 13U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x282 = INT16_MIN;
	uint8_t x283 = 15U;
	static volatile int8_t x284 = INT8_MIN;
	int32_t t58 = 29;

	t58 = (x281&((x282-x283)%x284));

	if (t58 != 48) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x289 = 340U;
	int64_t x290 = INT64_MAX;
	volatile uint32_t x291 = 265806U;
	int32_t x292 = INT32_MIN;
	int64_t t59 = -30224642635LL;

	t59 = (x289&((x290-x291)%x292));

	if (t59 != 272LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x297 = -1;
	volatile int16_t x298 = INT16_MIN;
	uint8_t x299 = UINT8_MAX;
	static volatile int32_t t60 = -384;

	t60 = (x297&((x298-x299)%x300));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x301 = INT16_MIN;
	volatile int64_t x302 = INT64_MIN;
	int64_t x303 = INT64_MIN;
	uint32_t x304 = 18U;
	int64_t t61 = 723115LL;

	t61 = (x301&((x302-x303)%x304));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x305 = UINT64_MAX;
	uint16_t x306 = 44U;
	static uint64_t x307 = 191616598473LLU;
	int32_t x308 = -1;
	uint64_t t62 = 11623355667484LLU;

	t62 = (x305&((x306-x307)%x308));

	if (t62 != 18446743882092953187LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x310 = 1999;
	int32_t x312 = 431583;
	static int32_t t63 = 910287863;

	t63 = (x309&((x310-x311)%x312));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x315 = 28161U;
	static int16_t x316 = -3;
	volatile int64_t t64 = 4553449459447896147LL;

	t64 = (x313&((x314-x315)%x316));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = INT32_MIN;
	int32_t x318 = -1;
	uint64_t x319 = 1326217307LLU;
	int32_t x320 = -4;
	static volatile uint64_t t65 = 16571332LLU;

	t65 = (x317&((x318-x319)%x320));

	if (t65 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x321 = UINT8_MAX;
	int16_t x322 = INT16_MIN;
	static volatile uint64_t x323 = 31352293LLU;
	volatile int8_t x324 = INT8_MIN;

	t66 = (x321&((x322-x323)%x324));

	if (t66 != 27LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x329 = INT32_MAX;
	static int64_t x330 = -1LL;
	static int32_t x332 = -511;
	volatile int64_t t67 = 120LL;

	t67 = (x329&((x330-x331)%x332));

	if (t67 != 2147483520LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x333 = 177U;
	static volatile int64_t x334 = INT64_MIN;
	int16_t x335 = -10;
	int16_t x336 = INT16_MAX;
	static volatile int64_t t68 = 272070598302431399LL;

	t68 = (x333&((x334-x335)%x336));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x337 = 130796471356475109LLU;
	volatile int64_t x338 = INT64_MAX;
	int16_t x339 = INT16_MAX;
	volatile uint64_t t69 = 4105407937LLU;

	t69 = (x337&((x338-x339)%x340));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x341 = -1;
	static uint16_t x342 = UINT16_MAX;
	volatile uint8_t x343 = 46U;
	volatile int16_t x344 = -1;
	int32_t t70 = 77;

	t70 = (x341&((x342-x343)%x344));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x345 = 12125U;
	int64_t x347 = 101492719505256503LL;
	int32_t x348 = INT32_MIN;
	static volatile uint64_t t71 = 6455350219093265126LLU;

	t71 = (x345&((x346-x347)%x348));

	if (t71 != 2909LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x350 = 4868U;
	static uint64_t t72 = 1009657418594031165LLU;

	t72 = (x349&((x350-x351)%x352));

	if (t72 != 143724558LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x353 = 491LLU;
	volatile uint64_t x354 = 543011LLU;
	static volatile uint64_t x355 = 10914362LLU;
	uint16_t x356 = UINT16_MAX;
	uint64_t t73 = 17831214783520LLU;

	t73 = (x353&((x354-x355)%x356));

	if (t73 != 75LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x357 = -1;
	static int8_t x358 = -4;
	static volatile int32_t x359 = 48;
	static int64_t x360 = -987146144066969LL;

	t74 = (x357&((x358-x359)%x360));

	if (t74 != -52LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x361 = 0U;
	uint32_t x362 = 51U;
	uint16_t x363 = 8U;
	int32_t x364 = INT32_MIN;
	uint32_t t75 = 545587U;

	t75 = (x361&((x362-x363)%x364));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x365 = INT32_MAX;
	volatile int8_t x366 = -1;
	int32_t x367 = INT32_MIN;
	uint32_t x368 = UINT32_MAX;

	t76 = (x365&((x366-x367)%x368));

	if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x369 = 19U;
	uint64_t x370 = UINT64_MAX;
	int16_t x371 = -1;
	volatile int8_t x372 = INT8_MAX;

	t77 = (x369&((x370-x371)%x372));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x373 = 244;
	int32_t x374 = INT32_MIN;
	int8_t x375 = INT8_MIN;
	volatile int64_t x376 = -1LL;
	volatile int64_t t78 = 4006326LL;

	t78 = (x373&((x374-x375)%x376));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x377 = INT32_MAX;
	volatile int8_t x378 = -5;
	int16_t x379 = INT16_MAX;
	uint64_t x380 = 184896471926001LLU;

	t79 = (x377&((x378-x379)%x380));

	if (t79 != 1109213877LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x381 = 85U;
	volatile int16_t x382 = INT16_MIN;
	uint64_t x383 = UINT64_MAX;
	uint8_t x384 = UINT8_MAX;
	volatile uint64_t t80 = 2710939964744144031LLU;

	t80 = (x381&((x382-x383)%x384));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x385 = -8201357;
	static int8_t x388 = INT8_MIN;
	uint64_t t81 = 50LLU;

	t81 = (x385&((x386-x387)%x388));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x393 = -1LL;
	int64_t x394 = INT64_MIN;
	volatile uint64_t t82 = 13095LLU;

	t82 = (x393&((x394-x395)%x396));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x401 = 918763U;
	int32_t x402 = INT32_MAX;
	uint32_t x403 = 0U;
	int8_t x404 = 1;
	volatile uint32_t t83 = 8367485U;

	t83 = (x401&((x402-x403)%x404));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x405 = INT64_MIN;
	int16_t x407 = INT16_MIN;
	static int16_t x408 = INT16_MIN;

	t84 = (x405&((x406-x407)%x408));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x417 = 77U;
	volatile int16_t x418 = -69;
	int64_t x419 = 1LL;
	int32_t x420 = INT32_MIN;
	int64_t t85 = -13041677792LL;

	t85 = (x417&((x418-x419)%x420));

	if (t85 != 8LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x421 = -1LL;
	int32_t x422 = INT32_MAX;
	volatile int64_t t86 = 1LL;

	t86 = (x421&((x422-x423)%x424));

	if (t86 != 2147483524LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x425 = 42U;
	static uint64_t x427 = 3LLU;
	int64_t x428 = -1LL;
	uint64_t t87 = 40LLU;

	t87 = (x425&((x426-x427)%x428));

	if (t87 != 2LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x429 = INT32_MIN;
	static int32_t x430 = INT32_MIN;
	int8_t x431 = -8;
	volatile int32_t t88 = 571031943;

	t88 = (x429&((x430-x431)%x432));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x434 = 0;
	int32_t x435 = -1;
	int32_t x436 = -1;
	int32_t t89 = 914356;

	t89 = (x433&((x434-x435)%x436));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x438 = 316501LLU;
	int32_t x439 = -1;
	int32_t x440 = INT32_MIN;
	volatile uint64_t t90 = 46943LLU;

	t90 = (x437&((x438-x439)%x440));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x442 = 150U;
	volatile int32_t x443 = 122270713;
	int32_t x444 = -1;
	volatile int64_t t91 = 203863820381123LL;

	t91 = (x441&((x442-x443)%x444));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x445 = -1;
	static int16_t x447 = INT16_MIN;
	int32_t x448 = INT32_MAX;
	static int32_t t92 = 1509;

	t92 = (x445&((x446-x447)%x448));

	if (t92 != 98303) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x449 = -39;
	static int32_t x450 = -53130;
	volatile int32_t x451 = 46512;
	int16_t x452 = INT16_MIN;
	int32_t t93 = 234;

	t93 = (x449&((x450-x451)%x452));

	if (t93 != -1344) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x453 = -1;
	static volatile int64_t x454 = INT64_MIN;
	volatile int16_t x455 = -3404;
	int64_t x456 = INT64_MIN;

	t94 = (x453&((x454-x455)%x456));

	if (t94 != -9223372036854772404LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x457 = INT8_MIN;
	volatile int8_t x458 = INT8_MIN;
	volatile int64_t x459 = 19LL;
	static int8_t x460 = INT8_MIN;
	static volatile int64_t t95 = 14353LL;

	t95 = (x457&((x458-x459)%x460));

	if (t95 != -128LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x461 = 10U;
	int64_t x462 = -539959011LL;
	uint8_t x463 = UINT8_MAX;
	int32_t x464 = 7116313;
	static int64_t t96 = 505LL;

	t96 = (x461&((x462-x463)%x464));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x465 = 2;
	int8_t x466 = INT8_MIN;
	uint16_t x467 = UINT16_MAX;
	int16_t x468 = INT16_MIN;
	static int32_t t97 = 14663;

	t97 = (x465&((x466-x467)%x468));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x469 = 149U;
	uint8_t x470 = UINT8_MAX;
	int64_t x471 = INT64_MAX;
	int64_t t98 = -3197LL;

	t98 = (x469&((x470-x471)%x472));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x473 = INT8_MIN;
	uint64_t x474 = UINT64_MAX;
	static uint32_t x476 = 12U;
	static uint64_t t99 = 7157088LLU;

	t99 = (x473&((x474-x475)%x476));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

