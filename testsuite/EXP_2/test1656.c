#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = -147192304325598LL;
int16_t x4 = INT16_MIN;
int8_t x9 = 12;
uint16_t x28 = 577U;
static int16_t x38 = INT16_MIN;
volatile int32_t t9 = 93727863;
int16_t x42 = -1;
static int64_t x45 = INT64_MIN;
uint32_t x46 = UINT32_MAX;
int32_t x53 = 170873686;
uint8_t x55 = 3U;
volatile int32_t t13 = 197;
static uint16_t x65 = 6U;
int64_t x67 = -18684LL;
volatile uint8_t x72 = 72U;
int32_t t17 = 257092;
int16_t x84 = 1815;
uint32_t x86 = UINT32_MAX;
int64_t x88 = -729354148161LL;
volatile uint64_t x89 = 2465165960575843LLU;
int64_t x90 = -3517545529LL;
volatile int16_t x91 = INT16_MAX;
static volatile uint64_t t22 = 49936LLU;
uint8_t x93 = 34U;
int32_t x94 = -282467881;
volatile int32_t t23 = -15;
int16_t x102 = -1;
uint8_t x103 = 28U;
volatile int32_t t26 = -3301911;
int32_t x113 = INT32_MAX;
uint32_t x115 = 105802436U;
int8_t x117 = -1;
volatile int8_t x120 = -10;
int8_t x121 = INT8_MIN;
int64_t x124 = 16662660483003LL;
volatile int64_t t30 = 1075672736781LL;
int16_t x134 = 0;
int8_t x138 = 4;
int8_t x146 = INT8_MIN;
static int16_t x148 = INT16_MAX;
volatile uint64_t x149 = 1618921LLU;
int64_t x155 = -1LL;
uint16_t x162 = 13267U;
volatile int8_t x163 = 1;
int64_t x164 = -31933455758LL;
volatile int32_t x168 = INT32_MAX;
int64_t t41 = 12LL;
int32_t x187 = -1;
uint8_t x190 = 8U;
static volatile int32_t t46 = 354817566;
int16_t x196 = INT16_MAX;
static int64_t t47 = 56542168LL;
uint64_t x197 = 206LLU;
uint16_t x198 = 1491U;
int32_t x199 = -1;
uint64_t t48 = 17440809621129426LLU;
static volatile int8_t x214 = -1;
int64_t x216 = -1LL;
volatile int32_t x217 = 127399705;
int64_t x218 = 20LL;
int64_t x224 = INT64_MIN;
static volatile int64_t t54 = 689865204LL;
uint16_t x225 = 5719U;
uint16_t x227 = 24U;
volatile uint32_t x228 = UINT32_MAX;
volatile uint32_t t55 = 1226470U;
uint32_t t56 = 31U;
volatile int32_t x234 = INT32_MIN;
uint8_t x236 = UINT8_MAX;
uint32_t t57 = 5153655U;
int32_t x246 = INT32_MIN;
volatile uint8_t x247 = 6U;
int32_t x251 = INT32_MAX;
volatile int64_t x256 = 38LL;
uint8_t x257 = 116U;
int32_t x258 = INT32_MIN;
int32_t x259 = INT32_MIN;
static int32_t x261 = INT32_MIN;
int8_t x290 = INT8_MIN;
int32_t x300 = INT32_MIN;
int32_t x302 = INT32_MAX;
int64_t x303 = INT64_MIN;
int64_t x304 = -1LL;
static int64_t x307 = -3656681590231814LL;
int32_t x309 = -1;
int16_t x315 = 3;
static volatile int32_t x316 = -201266;
uint32_t t76 = 112032U;
volatile uint64_t x317 = 21052467750LLU;
int32_t x318 = -1;
uint8_t x324 = UINT8_MAX;
int64_t x330 = INT64_MIN;
volatile int32_t t81 = -3043;
int16_t x344 = 9145;
uint16_t x346 = 1501U;
int64_t x356 = -12450362973001LL;
static int64_t t85 = 108801577LL;
volatile int32_t x358 = INT32_MIN;
static int16_t x359 = -1;
static volatile uint16_t x360 = 69U;
volatile int32_t x361 = INT32_MIN;
static volatile int32_t x362 = -3141;
int16_t x368 = INT16_MIN;
uint16_t x371 = UINT16_MAX;
static volatile int16_t x373 = INT16_MAX;
int64_t x375 = -654060706132LL;
int8_t x376 = INT8_MIN;
volatile int32_t t90 = -58369533;
volatile uint32_t x377 = UINT32_MAX;
volatile uint32_t t91 = 15664809U;
int16_t x386 = INT16_MIN;
uint32_t t94 = 153546U;
static int64_t x399 = -1LL;
uint32_t x403 = UINT32_MAX;
volatile uint32_t t97 = 721U;
int32_t t98 = 426243820;
static int64_t x414 = -1LL;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	volatile int32_t x2 = -1;
	static int32_t t0 = -28887189;

	t0 = ((x1&(x2<=x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int8_t x6 = 1;
	static int64_t x7 = INT64_MAX;
	int16_t x8 = INT16_MIN;
	static int64_t t1 = 325190676236141874LL;

	t1 = ((x5&(x6<=x7))%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -1;
	static uint32_t x11 = 6U;
	int32_t x12 = INT32_MIN;
	int32_t t2 = 3111;

	t2 = ((x9&(x10<=x11))%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = UINT8_MAX;
	static int8_t x14 = INT8_MIN;
	int64_t x15 = INT64_MIN;
	uint32_t x16 = UINT32_MAX;
	uint32_t t3 = 1U;

	t3 = ((x13&(x14<=x15))%x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	volatile int16_t x18 = INT16_MIN;
	uint32_t x19 = 3395U;
	volatile int64_t x20 = INT64_MIN;
	int64_t t4 = -129716559LL;

	t4 = ((x17&(x18<=x19))%x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int16_t x22 = -18;
	uint32_t x23 = 57193U;
	uint64_t x24 = 665716LLU;
	static uint64_t t5 = 314562936LLU;

	t5 = ((x21&(x22<=x23))%x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MIN;
	uint8_t x27 = UINT8_MAX;
	int32_t t6 = -12038208;

	t6 = ((x25&(x26<=x27))%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -1;
	int8_t x30 = -1;
	uint16_t x31 = UINT16_MAX;
	int64_t x32 = INT64_MIN;
	int64_t t7 = 80788LL;

	t7 = ((x29&(x30<=x31))%x32);

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 9U;
	int8_t x34 = -1;
	static int16_t x35 = -1;
	uint64_t x36 = UINT64_MAX;
	static volatile uint64_t t8 = 210525027146LLU;

	t8 = ((x33&(x34<=x35))%x36);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -651981220;
	volatile int16_t x39 = 69;
	volatile int8_t x40 = -1;

	t9 = ((x37&(x38<=x39))%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	uint32_t x43 = UINT32_MAX;
	static volatile uint64_t x44 = UINT64_MAX;
	uint64_t t10 = 3728LLU;

	t10 = ((x41&(x42<=x43))%x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x47 = INT8_MIN;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t11 = 41127482038818LLU;

	t11 = ((x45&(x46<=x47))%x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -20LL;
	volatile int32_t x50 = -2;
	int16_t x51 = INT16_MAX;
	uint64_t x52 = UINT64_MAX;
	uint64_t t12 = 8LLU;

	t12 = ((x49&(x50<=x51))%x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = INT64_MIN;
	uint16_t x56 = UINT16_MAX;

	t13 = ((x53&(x54<=x55))%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 1;
	int16_t x58 = -1;
	int32_t x59 = INT32_MIN;
	int64_t x60 = INT64_MIN;
	volatile int64_t t14 = -2085886281LL;

	t14 = ((x57&(x58<=x59))%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	int64_t x62 = -6971172945585LL;
	int8_t x63 = INT8_MAX;
	int64_t x64 = INT64_MIN;
	int64_t t15 = 551LL;

	t15 = ((x61&(x62<=x63))%x64);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = 214;
	volatile int32_t x68 = INT32_MAX;
	int32_t t16 = 80611;

	t16 = ((x65&(x66<=x67))%x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	static volatile int32_t x70 = INT32_MAX;
	uint16_t x71 = UINT16_MAX;

	t17 = ((x69&(x70<=x71))%x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 7U;
	static volatile int64_t x74 = -367956807074970550LL;
	int8_t x75 = INT8_MIN;
	int64_t x76 = INT64_MIN;
	volatile int64_t t18 = 27744257183LL;

	t18 = ((x73&(x74<=x75))%x76);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int64_t x78 = INT64_MIN;
	int8_t x79 = INT8_MAX;
	int32_t x80 = INT32_MAX;
	volatile int64_t t19 = -31228937LL;

	t19 = ((x77&(x78<=x79))%x80);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -62;
	int16_t x82 = INT16_MAX;
	volatile uint16_t x83 = 5U;
	int32_t t20 = 315;

	t20 = ((x81&(x82<=x83))%x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	static volatile int8_t x87 = -1;
	uint64_t t21 = 1017564LLU;

	t21 = ((x85&(x86<=x87))%x88);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x92 = INT8_MIN;

	t22 = ((x89&(x90<=x91))%x92);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x95 = INT16_MIN;
	static int16_t x96 = INT16_MIN;

	t23 = ((x93&(x94<=x95))%x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = -196;
	static volatile int64_t x98 = 1041841785418011LL;
	static int16_t x99 = 2876;
	int64_t x100 = 228455LL;
	volatile int64_t t24 = -1244539LL;

	t24 = ((x97&(x98<=x99))%x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int32_t x104 = -1;
	volatile int32_t t25 = 0;

	t25 = ((x101&(x102<=x103))%x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	volatile uint16_t x106 = 174U;
	int32_t x107 = INT32_MIN;
	int16_t x108 = INT16_MIN;

	t26 = ((x105&(x106<=x107))%x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int8_t x110 = INT8_MIN;
	int32_t x111 = INT32_MAX;
	static int64_t x112 = 189117LL;
	int64_t t27 = -51260LL;

	t27 = ((x109&(x110<=x111))%x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = -1;
	static int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 1;

	t28 = ((x113&(x114<=x115))%x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = -986943;
	int64_t x119 = INT64_MIN;
	static int32_t t29 = 489576193;

	t29 = ((x117&(x118<=x119))%x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MIN;
	static int16_t x123 = -1;

	t30 = ((x121&(x122<=x123))%x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x125 = -1;
	int64_t x126 = INT64_MIN;
	int32_t x127 = -1;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = -37;

	t31 = ((x125&(x126<=x127))%x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x133 = INT16_MAX;
	volatile int8_t x135 = 0;
	int32_t x136 = INT32_MIN;
	volatile int32_t t32 = -366467;

	t32 = ((x133&(x134<=x135))%x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	static int32_t x139 = -13983907;
	int64_t x140 = -1LL;
	volatile int64_t t33 = -128601474LL;

	t33 = ((x137&(x138<=x139))%x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x141 = -1;
	int16_t x142 = INT16_MIN;
	uint16_t x143 = UINT16_MAX;
	static uint64_t x144 = UINT64_MAX;
	static volatile uint64_t t34 = 6572629095188128LLU;

	t34 = ((x141&(x142<=x143))%x144);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = INT16_MIN;
	uint32_t x147 = 113798240U;
	volatile int32_t t35 = -916102124;

	t35 = ((x145&(x146<=x147))%x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x150 = INT8_MIN;
	int64_t x151 = INT64_MIN;
	int32_t x152 = INT32_MIN;
	uint64_t t36 = 927LLU;

	t36 = ((x149&(x150<=x151))%x152);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -1;
	uint16_t x154 = 21U;
	int8_t x156 = INT8_MIN;
	static int32_t t37 = 510744;

	t37 = ((x153&(x154<=x155))%x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MAX;
	int16_t x158 = 1;
	int64_t x159 = 82980679LL;
	static int32_t x160 = -79967000;
	static int32_t t38 = 29;

	t38 = ((x157&(x158<=x159))%x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -26;
	volatile int64_t t39 = 1176152081LL;

	t39 = ((x161&(x162<=x163))%x164);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x165 = INT64_MIN;
	int64_t x166 = -1LL;
	static int16_t x167 = 4;
	int64_t t40 = -72LL;

	t40 = ((x165&(x166<=x167))%x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = -1;
	uint8_t x170 = 0U;
	uint16_t x171 = 1U;
	volatile int64_t x172 = INT64_MIN;

	t41 = ((x169&(x170<=x171))%x172);

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x173 = 0;
	volatile uint32_t x174 = 332581U;
	int16_t x175 = 1681;
	static int64_t x176 = INT64_MIN;
	int64_t t42 = 4958718LL;

	t42 = ((x173&(x174<=x175))%x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -32035212LL;
	uint8_t x178 = 7U;
	static int8_t x179 = -1;
	int8_t x180 = INT8_MAX;
	int64_t t43 = -190516772LL;

	t43 = ((x177&(x178<=x179))%x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x181 = 2LLU;
	uint16_t x182 = 2706U;
	static int16_t x183 = 14895;
	static int64_t x184 = -1LL;
	uint64_t t44 = 10198763486LLU;

	t44 = ((x181&(x182<=x183))%x184);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = 4U;
	uint16_t x186 = 3U;
	uint64_t x188 = 10743121992511977LLU;
	static uint64_t t45 = 73728LLU;

	t45 = ((x185&(x186<=x187))%x188);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = -1;
	static volatile int64_t x191 = INT64_MAX;
	int8_t x192 = -3;

	t46 = ((x189&(x190<=x191))%x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = INT64_MAX;
	uint64_t x194 = UINT64_MAX;
	int16_t x195 = INT16_MIN;

	t47 = ((x193&(x194<=x195))%x196);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x200 = -4490;

	t48 = ((x197&(x198<=x199))%x200);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x201 = UINT64_MAX;
	static uint16_t x202 = 6U;
	uint8_t x203 = 0U;
	uint16_t x204 = UINT16_MAX;
	volatile uint64_t t49 = 637465240600LLU;

	t49 = ((x201&(x202<=x203))%x204);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = 35U;
	volatile int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MIN;
	uint32_t x208 = UINT32_MAX;
	static uint32_t t50 = 1U;

	t50 = ((x205&(x206<=x207))%x208);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = -1;
	int32_t x210 = INT32_MAX;
	uint8_t x211 = 7U;
	int32_t x212 = INT32_MIN;
	volatile int32_t t51 = 108873309;

	t51 = ((x209&(x210<=x211))%x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x213 = 3U;
	uint32_t x215 = 89U;
	volatile int64_t t52 = -1606912411LL;

	t52 = ((x213&(x214<=x215))%x216);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x219 = -9;
	uint64_t x220 = 28887729590107LLU;
	uint64_t t53 = 1013167LLU;

	t53 = ((x217&(x218<=x219))%x220);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = 32U;
	volatile int64_t x222 = INT64_MIN;
	volatile int8_t x223 = 15;

	t54 = ((x221&(x222<=x223))%x224);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x226 = INT8_MIN;

	t55 = ((x225&(x226<=x227))%x228);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x229 = 27U;
	static int16_t x230 = INT16_MAX;
	volatile uint16_t x231 = 1985U;
	uint32_t x232 = UINT32_MAX;

	t56 = ((x229&(x230<=x231))%x232);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = 19823542U;
	int64_t x235 = INT64_MIN;

	t57 = ((x233&(x234<=x235))%x236);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x237 = 1942U;
	int8_t x238 = -11;
	static volatile int8_t x239 = INT8_MAX;
	uint8_t x240 = 8U;
	int32_t t58 = -3420;

	t58 = ((x237&(x238<=x239))%x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MIN;
	uint64_t x242 = 182153642644233LLU;
	uint32_t x243 = 1920U;
	int8_t x244 = -7;
	static int32_t t59 = 0;

	t59 = ((x241&(x242<=x243))%x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x245 = UINT16_MAX;
	uint16_t x248 = 14759U;
	int32_t t60 = -5395024;

	t60 = ((x245&(x246<=x247))%x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x249 = 184321946U;
	uint64_t x250 = 603525161591968LLU;
	int32_t x252 = INT32_MIN;
	volatile uint32_t t61 = 240U;

	t61 = ((x249&(x250<=x251))%x252);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x253 = UINT16_MAX;
	uint8_t x254 = UINT8_MAX;
	volatile int64_t x255 = INT64_MAX;
	static int64_t t62 = -633257LL;

	t62 = ((x253&(x254<=x255))%x256);

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x260 = UINT16_MAX;
	int32_t t63 = 407909;

	t63 = ((x257&(x258<=x259))%x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x262 = UINT64_MAX;
	uint32_t x263 = 3U;
	static int16_t x264 = -3;
	int32_t t64 = 56672378;

	t64 = ((x261&(x262<=x263))%x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x265 = 1LLU;
	int16_t x266 = INT16_MIN;
	int32_t x267 = 29845249;
	uint8_t x268 = 99U;
	volatile uint64_t t65 = 2095059714867611053LLU;

	t65 = ((x265&(x266<=x267))%x268);

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MAX;
	int8_t x270 = INT8_MIN;
	int16_t x271 = -1;
	uint64_t x272 = 17776986358286LLU;
	uint64_t t66 = 48535058965021LLU;

	t66 = ((x269&(x270<=x271))%x272);

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x273 = INT16_MIN;
	int16_t x274 = -1;
	int8_t x275 = INT8_MIN;
	static volatile int32_t x276 = INT32_MAX;
	volatile int32_t t67 = -13929;

	t67 = ((x273&(x274<=x275))%x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x277 = INT64_MAX;
	volatile int8_t x278 = INT8_MAX;
	uint8_t x279 = 1U;
	int16_t x280 = INT16_MIN;
	int64_t t68 = 14051090LL;

	t68 = ((x277&(x278<=x279))%x280);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x285 = UINT32_MAX;
	volatile int8_t x286 = INT8_MIN;
	uint8_t x287 = UINT8_MAX;
	int16_t x288 = 342;
	uint32_t t69 = 177688U;

	t69 = ((x285&(x286<=x287))%x288);

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x289 = 409904401933364872LLU;
	int16_t x291 = INT16_MAX;
	volatile int32_t x292 = INT32_MAX;
	static volatile uint64_t t70 = 37663615091793691LLU;

	t70 = ((x289&(x290<=x291))%x292);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x293 = 9422906U;
	static uint16_t x294 = 475U;
	static volatile int16_t x295 = -1;
	volatile uint32_t x296 = 102434289U;
	uint32_t t71 = 1116U;

	t71 = ((x293&(x294<=x295))%x296);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x297 = 0;
	uint16_t x298 = 4U;
	int16_t x299 = INT16_MAX;
	int32_t t72 = -402352;

	t72 = ((x297&(x298<=x299))%x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x301 = -126228LL;
	volatile int64_t t73 = 128939677602942489LL;

	t73 = ((x301&(x302<=x303))%x304);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x305 = 1;
	int64_t x306 = INT64_MAX;
	uint8_t x308 = 1U;
	int32_t t74 = 1;

	t74 = ((x305&(x306<=x307))%x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x310 = UINT32_MAX;
	static int8_t x311 = 2;
	int32_t x312 = 458370;
	volatile int32_t t75 = 2;

	t75 = ((x309&(x310<=x311))%x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x313 = UINT32_MAX;
	int64_t x314 = 1LL;

	t76 = ((x313&(x314<=x315))%x316);

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x319 = INT32_MIN;
	uint16_t x320 = UINT16_MAX;
	uint64_t t77 = 1371888559824345LLU;

	t77 = ((x317&(x318<=x319))%x320);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x321 = UINT64_MAX;
	int32_t x322 = 17478435;
	volatile int32_t x323 = INT32_MAX;
	volatile uint64_t t78 = 62401272743936381LLU;

	t78 = ((x321&(x322<=x323))%x324);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x329 = UINT8_MAX;
	volatile int8_t x331 = -1;
	volatile int64_t x332 = 217867702LL;
	static volatile int64_t t79 = 182526LL;

	t79 = ((x329&(x330<=x331))%x332);

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = 1;
	static volatile uint32_t x334 = 18259221U;
	uint16_t x335 = 5281U;
	int16_t x336 = INT16_MIN;
	static int32_t t80 = 7470317;

	t80 = ((x333&(x334<=x335))%x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = INT8_MAX;
	int8_t x338 = -1;
	int32_t x339 = INT32_MAX;
	uint8_t x340 = UINT8_MAX;

	t81 = ((x337&(x338<=x339))%x340);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x341 = UINT32_MAX;
	int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MIN;
	uint32_t t82 = 1874388743U;

	t82 = ((x341&(x342<=x343))%x344);

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x345 = -1;
	static uint8_t x347 = UINT8_MAX;
	int8_t x348 = -5;
	int32_t t83 = 7177;

	t83 = ((x345&(x346<=x347))%x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x349 = UINT8_MAX;
	uint8_t x350 = UINT8_MAX;
	uint16_t x351 = 2U;
	uint64_t x352 = 1248927LLU;
	volatile uint64_t t84 = 56LLU;

	t84 = ((x349&(x350<=x351))%x352);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = -1;
	int8_t x354 = 3;
	int8_t x355 = 35;

	t85 = ((x353&(x354<=x355))%x356);

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x357 = -1;
	static int32_t t86 = -48;

	t86 = ((x357&(x358<=x359))%x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x363 = INT16_MAX;
	volatile uint64_t x364 = 70802684440375469LLU;
	uint64_t t87 = 53252140752044LLU;

	t87 = ((x361&(x362<=x363))%x364);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = INT8_MIN;
	uint64_t x366 = 195509357168721775LLU;
	uint8_t x367 = 26U;
	static volatile int32_t t88 = -38;

	t88 = ((x365&(x366<=x367))%x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x369 = UINT16_MAX;
	static int64_t x370 = INT64_MAX;
	uint8_t x372 = UINT8_MAX;
	int32_t t89 = 427153;

	t89 = ((x369&(x370<=x371))%x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x374 = 29;

	t90 = ((x373&(x374<=x375))%x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x378 = 60;
	static uint64_t x379 = 138803128133LLU;
	int8_t x380 = -1;

	t91 = ((x377&(x378<=x379))%x380);

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = INT16_MIN;
	volatile int8_t x382 = INT8_MIN;
	static volatile int16_t x383 = -1;
	static int32_t x384 = INT32_MAX;
	volatile int32_t t92 = -2;

	t92 = ((x381&(x382<=x383))%x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = -369;
	uint16_t x387 = 162U;
	int32_t x388 = INT32_MIN;
	static volatile int32_t t93 = 2474;

	t93 = ((x385&(x386<=x387))%x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = -1;
	int16_t x394 = INT16_MAX;
	int32_t x395 = INT32_MAX;
	uint32_t x396 = 917U;

	t94 = ((x393&(x394<=x395))%x396);

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = INT64_MIN;
	uint32_t x398 = 57528U;
	int32_t x400 = INT32_MIN;
	static volatile int64_t t95 = -4678707940LL;

	t95 = ((x397&(x398<=x399))%x400);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = -8LL;
	volatile int64_t x402 = 587377093746615133LL;
	uint16_t x404 = 420U;
	int64_t t96 = -13818805675886073LL;

	t96 = ((x401&(x402<=x403))%x404);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x405 = 1731U;
	int8_t x406 = INT8_MAX;
	uint32_t x407 = 1417820802U;
	int16_t x408 = -9952;

	t97 = ((x405&(x406<=x407))%x408);

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = INT16_MIN;
	uint32_t x410 = 810012798U;
	volatile int16_t x411 = INT16_MAX;
	int16_t x412 = INT16_MIN;

	t98 = ((x409&(x410<=x411))%x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x413 = INT32_MIN;
	static volatile int32_t x415 = INT32_MAX;
	uint8_t x416 = 13U;
	volatile int32_t t99 = -1;

	t99 = ((x413&(x414<=x415))%x416);

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

