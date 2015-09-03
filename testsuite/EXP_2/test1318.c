#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 43U;
volatile uint32_t t0 = 7324U;
int32_t t1 = -16;
volatile int32_t x14 = INT32_MAX;
int32_t x15 = -1;
uint64_t t3 = 8124609641194379757LLU;
static int8_t x19 = -1;
int16_t x24 = -1;
int8_t x29 = INT8_MIN;
volatile int64_t x32 = -1LL;
int32_t t7 = 33;
int16_t x37 = INT16_MIN;
int8_t x46 = INT8_MIN;
int64_t x52 = 2164460LL;
static int32_t x56 = INT32_MAX;
static int16_t x59 = -1;
static volatile int32_t x63 = 6061392;
static int32_t x76 = INT32_MIN;
int64_t x78 = -50072053649LL;
static int8_t x84 = 1;
static volatile int32_t t19 = -4;
static uint64_t x89 = 6420386244695252127LLU;
volatile int8_t x91 = -17;
int32_t x94 = -210;
static uint32_t x96 = 5849894U;
uint32_t t22 = 0U;
int8_t x98 = INT8_MIN;
int8_t x102 = 0;
int8_t x103 = INT8_MAX;
uint8_t x115 = 75U;
static volatile uint64_t t26 = 42954114LLU;
uint64_t t27 = 324853050716LLU;
static uint64_t x128 = UINT64_MAX;
static int64_t x134 = -28904LL;
int64_t x135 = INT64_MAX;
int16_t x137 = -3030;
int16_t x140 = 126;
int16_t x141 = 7;
uint16_t x148 = 4U;
uint64_t x150 = 979592943812944LLU;
uint8_t x151 = 111U;
uint16_t x152 = 1792U;
int32_t t35 = -84;
int16_t x153 = INT16_MAX;
uint8_t x155 = UINT8_MAX;
int64_t x160 = -1LL;
int64_t x162 = INT64_MIN;
volatile uint64_t t39 = 68398514019776LLU;
uint16_t x173 = 22U;
volatile int8_t x175 = INT8_MAX;
int32_t x179 = INT32_MAX;
int16_t x183 = INT16_MAX;
uint64_t x189 = 203668LLU;
uint64_t x202 = 3977222137LLU;
int32_t x203 = -9710;
int32_t x207 = -3124079;
static int64_t x213 = -1653284732LL;
uint32_t x225 = 825U;
volatile uint32_t t54 = 139U;
static uint32_t x239 = 2U;
int16_t x240 = 165;
uint32_t x244 = UINT32_MAX;
int16_t x246 = -1;
static volatile int64_t t58 = -5003583158537LL;
static volatile int32_t t60 = -17;
static uint8_t x260 = 35U;
static int64_t x268 = -1LL;
volatile uint64_t x269 = 2302491216LLU;
uint64_t x272 = UINT64_MAX;
volatile int32_t x274 = INT32_MAX;
volatile int16_t x276 = INT16_MAX;
uint64_t x278 = 7985749734743LLU;
int16_t x280 = INT16_MIN;
int64_t t68 = -796406370750207LL;
int64_t t70 = 27633LL;
int8_t x298 = INT8_MIN;
int64_t x305 = -1014936505998499LL;
volatile int64_t t73 = 49LL;
int8_t x312 = INT8_MIN;
int8_t x315 = -1;
volatile int32_t x320 = INT32_MIN;
uint16_t x325 = 633U;
int32_t x334 = -1;
int16_t x336 = INT16_MAX;
int16_t x340 = INT16_MIN;
static volatile int16_t x344 = INT16_MIN;
int32_t t84 = 2031;
int8_t x356 = -1;
static volatile int32_t t85 = 1;
uint16_t x359 = 75U;
uint16_t x366 = UINT16_MAX;
int16_t x368 = -104;
volatile uint64_t t88 = 29786LLU;
uint16_t x372 = 3U;
static volatile int64_t t89 = -44483673798514378LL;
static uint32_t x376 = 3383249U;
static int64_t t92 = 768787430627LL;
volatile uint64_t t93 = 15375LLU;


void f0(void) {
	uint32_t x1 = 9142U;
	volatile uint8_t x2 = 0U;
	static int16_t x4 = INT16_MIN;

	t0 = ((x1&(x2==x3))%x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 5U;
	int16_t x6 = 1;
	static uint64_t x7 = 468890192784839LLU;
	static int16_t x8 = INT16_MIN;

	t1 = ((x5&(x6==x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int64_t x10 = 9239LL;
	uint32_t x11 = 1U;
	static volatile uint64_t x12 = 15626965593974367LLU;
	uint64_t t2 = 1271080830LLU;

	t2 = ((x9&(x10==x11))%x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 12LLU;
	static int8_t x16 = INT8_MIN;

	t3 = ((x13&(x14==x15))%x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 59U;
	int16_t x18 = -1;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = 6905950LLU;

	t4 = ((x17&(x18==x19))%x20);

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MAX;
	int8_t x22 = 14;
	volatile int8_t x23 = -1;
	int32_t t5 = 311;

	t5 = ((x21&(x22==x23))%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x30 = UINT8_MAX;
	uint32_t x31 = UINT32_MAX;
	volatile int64_t t6 = -1LL;

	t6 = ((x29&(x30==x31))%x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	int64_t x34 = 2070150195392023LL;
	int64_t x35 = INT64_MIN;
	static int8_t x36 = -1;

	t7 = ((x33&(x34==x35))%x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x38 = -1;
	int32_t x39 = INT32_MAX;
	int32_t x40 = INT32_MIN;
	static volatile int32_t t8 = -1;

	t8 = ((x37&(x38==x39))%x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 1U;
	int16_t x42 = -1;
	int32_t x43 = 10585956;
	volatile int16_t x44 = -1;
	uint32_t t9 = 1U;

	t9 = ((x41&(x42==x43))%x44);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	static uint64_t x47 = 61826492896119LLU;
	uint16_t x48 = 1U;
	int32_t t10 = 9821;

	t10 = ((x45&(x46==x47))%x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x49 = INT64_MIN;
	volatile uint64_t x50 = UINT64_MAX;
	static int64_t x51 = 287154317LL;
	int64_t t11 = 11LL;

	t11 = ((x49&(x50==x51))%x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	int8_t x54 = -1;
	volatile int64_t x55 = INT64_MIN;
	static volatile int64_t t12 = -4670284153LL;

	t12 = ((x53&(x54==x55))%x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x57 = INT8_MAX;
	uint32_t x58 = 15784U;
	int32_t x60 = INT32_MIN;
	volatile int32_t t13 = -805057;

	t13 = ((x57&(x58==x59))%x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 86U;
	int64_t x62 = -1LL;
	static uint16_t x64 = 20U;
	int32_t t14 = 6;

	t14 = ((x61&(x62==x63))%x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x65 = 5177907U;
	int16_t x66 = -78;
	static uint8_t x67 = 15U;
	int16_t x68 = 1;
	uint32_t t15 = 136U;

	t15 = ((x65&(x66==x67))%x68);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x69 = INT16_MIN;
	uint8_t x70 = UINT8_MAX;
	volatile int64_t x71 = -72676807LL;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t16 = 4;

	t16 = ((x69&(x70==x71))%x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	uint8_t x74 = 16U;
	int16_t x75 = INT16_MIN;
	volatile int64_t t17 = -1508391942LL;

	t17 = ((x73&(x74==x75))%x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x77 = UINT32_MAX;
	uint16_t x79 = 1409U;
	uint8_t x80 = 26U;
	uint32_t t18 = 421404478U;

	t18 = ((x77&(x78==x79))%x80);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x81 = 1594U;
	int8_t x82 = INT8_MIN;
	int64_t x83 = 3294LL;

	t19 = ((x81&(x82==x83))%x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x85 = UINT8_MAX;
	int32_t x86 = 64631;
	static int64_t x87 = INT64_MIN;
	int32_t x88 = -1;
	static volatile int32_t t20 = 8827859;

	t20 = ((x85&(x86==x87))%x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x90 = UINT32_MAX;
	int8_t x92 = INT8_MIN;
	volatile uint64_t t21 = 41534511823261LLU;

	t21 = ((x89&(x90==x91))%x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x93 = 59U;
	uint64_t x95 = 28LLU;

	t22 = ((x93&(x94==x95))%x96);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = UINT32_MAX;
	uint16_t x99 = 3U;
	volatile int32_t x100 = INT32_MIN;
	uint32_t t23 = 3425U;

	t23 = ((x97&(x98==x99))%x100);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -11;
	static uint32_t x104 = 203282U;
	static uint32_t t24 = 340U;

	t24 = ((x101&(x102==x103))%x104);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x109 = UINT32_MAX;
	int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MIN;
	volatile uint16_t x112 = 11783U;
	uint32_t t25 = 1732379U;

	t25 = ((x109&(x110==x111))%x112);

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -1LL;
	static int32_t x114 = -1;
	static uint64_t x116 = 109390669723LLU;

	t26 = ((x113&(x114==x115))%x116);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = UINT16_MAX;
	static uint32_t x118 = UINT32_MAX;
	int16_t x119 = INT16_MIN;
	uint64_t x120 = 1517719663979274LLU;

	t27 = ((x117&(x118==x119))%x120);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -1;
	static int32_t x122 = INT32_MIN;
	uint64_t x123 = 424639127478156450LLU;
	volatile uint32_t x124 = UINT32_MAX;
	uint32_t t28 = 763644U;

	t28 = ((x121&(x122==x123))%x124);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MIN;
	int32_t x126 = -349242;
	static uint32_t x127 = 27548821U;
	volatile uint64_t t29 = 72372486LLU;

	t29 = ((x125&(x126==x127))%x128);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x129 = 632LLU;
	int64_t x130 = INT64_MAX;
	static uint64_t x131 = 2LLU;
	static volatile uint32_t x132 = 212988U;
	volatile uint64_t t30 = 1461199436267LLU;

	t30 = ((x129&(x130==x131))%x132);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x133 = INT32_MIN;
	static int64_t x136 = INT64_MIN;
	volatile int64_t t31 = -6596638852891LL;

	t31 = ((x133&(x134==x135))%x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x138 = INT8_MAX;
	int8_t x139 = INT8_MAX;
	int32_t t32 = -1;

	t32 = ((x137&(x138==x139))%x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x142 = -1LL;
	uint8_t x143 = UINT8_MAX;
	volatile int32_t x144 = 48;
	int32_t t33 = 5;

	t33 = ((x141&(x142==x143))%x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = 26U;
	int32_t x146 = -154574733;
	int16_t x147 = 3;
	static volatile int32_t t34 = -74;

	t34 = ((x145&(x146==x147))%x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MIN;

	t35 = ((x149&(x150==x151))%x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x154 = INT64_MIN;
	volatile int32_t x156 = INT32_MAX;
	volatile int32_t t36 = -3783;

	t36 = ((x153&(x154==x155))%x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = 356263U;
	uint16_t x158 = 30U;
	uint32_t x159 = UINT32_MAX;
	int64_t t37 = -491267LL;

	t37 = ((x157&(x158==x159))%x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MIN;
	volatile int64_t x163 = INT64_MIN;
	static int64_t x164 = INT64_MIN;
	int64_t t38 = -885212013833522LL;

	t38 = ((x161&(x162==x163))%x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	uint32_t x166 = 40906U;
	int32_t x167 = INT32_MAX;
	uint64_t x168 = 10412978700595147LLU;

	t39 = ((x165&(x166==x167))%x168);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = 68481956249LLU;
	int16_t x170 = INT16_MIN;
	int32_t x171 = -1990854;
	int8_t x172 = 13;
	uint64_t t40 = 3641346848354308744LLU;

	t40 = ((x169&(x170==x171))%x172);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x174 = INT8_MIN;
	static int16_t x176 = -704;
	int32_t t41 = 253;

	t41 = ((x173&(x174==x175))%x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x177 = INT64_MIN;
	uint8_t x178 = 0U;
	volatile uint64_t x180 = UINT64_MAX;
	volatile uint64_t t42 = 3526904170374LLU;

	t42 = ((x177&(x178==x179))%x180);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MIN;
	uint8_t x182 = 12U;
	static volatile int8_t x184 = -61;
	volatile int64_t t43 = -24499589380678LL;

	t43 = ((x181&(x182==x183))%x184);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x185 = -1;
	uint32_t x186 = 335066936U;
	int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MIN;
	volatile int32_t t44 = 1689079;

	t44 = ((x185&(x186==x187))%x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x190 = -1;
	uint64_t x191 = 0LLU;
	int32_t x192 = -1;
	uint64_t t45 = 37400615869LLU;

	t45 = ((x189&(x190==x191))%x192);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x193 = INT32_MIN;
	static uint64_t x194 = 10110086LLU;
	uint32_t x195 = 0U;
	volatile int64_t x196 = INT64_MIN;
	int64_t t46 = -1426668141775652LL;

	t46 = ((x193&(x194==x195))%x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x197 = -1LL;
	int64_t x198 = INT64_MAX;
	int32_t x199 = INT32_MIN;
	volatile int64_t x200 = INT64_MAX;
	volatile int64_t t47 = 6088LL;

	t47 = ((x197&(x198==x199))%x200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x201 = INT64_MIN;
	int16_t x204 = INT16_MIN;
	int64_t t48 = 13471230289LL;

	t48 = ((x201&(x202==x203))%x204);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x205 = 33851607706270758LLU;
	uint8_t x206 = 21U;
	volatile int64_t x208 = INT64_MIN;
	volatile uint64_t t49 = 12462950883942LLU;

	t49 = ((x205&(x206==x207))%x208);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MAX;
	static int16_t x210 = INT16_MIN;
	uint64_t x211 = UINT64_MAX;
	uint16_t x212 = 34U;
	volatile int32_t t50 = 237365460;

	t50 = ((x209&(x210==x211))%x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x214 = UINT8_MAX;
	uint64_t x215 = 574526LLU;
	int16_t x216 = -1;
	int64_t t51 = -38LL;

	t51 = ((x213&(x214==x215))%x216);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MAX;
	int16_t x218 = -1;
	static int32_t x219 = INT32_MIN;
	int8_t x220 = INT8_MIN;
	static volatile int32_t t52 = -448364;

	t52 = ((x217&(x218==x219))%x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = -62;
	uint32_t x222 = 955412030U;
	int16_t x223 = -1;
	int64_t x224 = 15851622209113LL;
	volatile int64_t t53 = 1042851LL;

	t53 = ((x221&(x222==x223))%x224);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x226 = UINT16_MAX;
	int32_t x227 = -1;
	int16_t x228 = INT16_MIN;

	t54 = ((x225&(x226==x227))%x228);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x229 = INT8_MIN;
	int32_t x230 = INT32_MIN;
	uint32_t x231 = 19U;
	volatile uint32_t x232 = 461179607U;
	volatile uint32_t t55 = 4754453U;

	t55 = ((x229&(x230==x231))%x232);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x237 = 341U;
	int32_t x238 = INT32_MIN;
	volatile uint32_t t56 = 21062933U;

	t56 = ((x237&(x238==x239))%x240);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x241 = 10637;
	int64_t x242 = INT64_MAX;
	static int8_t x243 = 1;
	static volatile uint32_t t57 = 1811U;

	t57 = ((x241&(x242==x243))%x244);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MAX;
	int16_t x247 = -1;
	static volatile int16_t x248 = INT16_MAX;

	t58 = ((x245&(x246==x247))%x248);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x249 = UINT64_MAX;
	static volatile uint64_t x250 = UINT64_MAX;
	volatile int16_t x251 = 227;
	int16_t x252 = INT16_MAX;
	volatile uint64_t t59 = 3345747523650062606LLU;

	t59 = ((x249&(x250==x251))%x252);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = UINT16_MAX;
	static volatile int16_t x254 = INT16_MIN;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MAX;

	t60 = ((x253&(x254==x255))%x256);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x257 = UINT64_MAX;
	int8_t x258 = INT8_MAX;
	int64_t x259 = -1LL;
	volatile uint64_t t61 = 262476452134597428LLU;

	t61 = ((x257&(x258==x259))%x260);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = INT16_MIN;
	volatile int8_t x262 = -1;
	int32_t x263 = -5677134;
	static int32_t x264 = 1369321;
	static int32_t t62 = 0;

	t62 = ((x261&(x262==x263))%x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MIN;
	static uint16_t x266 = UINT16_MAX;
	static volatile int32_t x267 = INT32_MIN;
	volatile int64_t t63 = 1LL;

	t63 = ((x265&(x266==x267))%x268);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x270 = 6;
	int8_t x271 = -2;
	uint64_t t64 = 11155208888LLU;

	t64 = ((x269&(x270==x271))%x272);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = -1;
	volatile uint32_t x275 = 1U;
	volatile int32_t t65 = -86349;

	t65 = ((x273&(x274==x275))%x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = -1LL;
	int64_t x279 = 142050LL;
	int64_t t66 = 23607400599016368LL;

	t66 = ((x277&(x278==x279))%x280);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x281 = UINT64_MAX;
	static uint8_t x282 = UINT8_MAX;
	volatile int64_t x283 = INT64_MIN;
	int32_t x284 = INT32_MIN;
	volatile uint64_t t67 = 802896LLU;

	t67 = ((x281&(x282==x283))%x284);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x285 = 2702598237086824601LL;
	uint8_t x286 = UINT8_MAX;
	int32_t x287 = 12776;
	int32_t x288 = INT32_MIN;

	t68 = ((x285&(x286==x287))%x288);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = INT16_MAX;
	int8_t x290 = INT8_MAX;
	uint16_t x291 = 1U;
	int16_t x292 = -2929;
	int32_t t69 = 428755802;

	t69 = ((x289&(x290==x291))%x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x293 = INT8_MIN;
	uint8_t x294 = 30U;
	uint8_t x295 = 7U;
	int64_t x296 = -28143809389663688LL;

	t70 = ((x293&(x294==x295))%x296);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x297 = INT32_MIN;
	int16_t x299 = -1;
	uint64_t x300 = 54055710253LLU;
	volatile uint64_t t71 = 709376LLU;

	t71 = ((x297&(x298==x299))%x300);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x301 = UINT8_MAX;
	volatile int16_t x302 = INT16_MIN;
	int64_t x303 = INT64_MIN;
	volatile uint16_t x304 = UINT16_MAX;
	int32_t t72 = -502126;

	t72 = ((x301&(x302==x303))%x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x306 = 4U;
	int32_t x307 = INT32_MIN;
	uint8_t x308 = 6U;

	t73 = ((x305&(x306==x307))%x308);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = INT64_MAX;
	int8_t x311 = -1;
	int32_t t74 = -147798537;

	t74 = ((x309&(x310==x311))%x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = INT64_MIN;
	int64_t x314 = 26735492LL;
	volatile int32_t x316 = INT32_MAX;
	int64_t t75 = 1LL;

	t75 = ((x313&(x314==x315))%x316);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = 1054;
	int32_t x318 = -1;
	static int16_t x319 = INT16_MIN;
	volatile int32_t t76 = 5078;

	t76 = ((x317&(x318==x319))%x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = -1LL;
	int64_t x322 = INT64_MIN;
	static int8_t x323 = INT8_MAX;
	int16_t x324 = INT16_MIN;
	volatile int64_t t77 = 4675740195226LL;

	t77 = ((x321&(x322==x323))%x324);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x326 = INT16_MIN;
	uint8_t x327 = 70U;
	int32_t x328 = INT32_MIN;
	static volatile int32_t t78 = 59611;

	t78 = ((x325&(x326==x327))%x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x329 = 62;
	static int32_t x330 = -51947;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = INT8_MIN;
	int32_t t79 = 108877408;

	t79 = ((x329&(x330==x331))%x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x333 = 472U;
	volatile int64_t x335 = INT64_MIN;
	volatile int32_t t80 = -9540;

	t80 = ((x333&(x334==x335))%x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x337 = 0U;
	int16_t x338 = -1;
	int16_t x339 = 3;
	volatile int32_t t81 = -36319;

	t81 = ((x337&(x338==x339))%x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x341 = 16U;
	static uint8_t x342 = 91U;
	int8_t x343 = 1;
	static int32_t t82 = -50;

	t82 = ((x341&(x342==x343))%x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = -1LL;
	int8_t x346 = INT8_MAX;
	int64_t x347 = INT64_MIN;
	int64_t x348 = INT64_MIN;
	int64_t t83 = 30777904351LL;

	t83 = ((x345&(x346==x347))%x348);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = INT32_MIN;
	uint32_t x350 = UINT32_MAX;
	static uint32_t x351 = 7U;
	static uint16_t x352 = 7U;

	t84 = ((x349&(x350==x351))%x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x353 = UINT8_MAX;
	int32_t x354 = INT32_MAX;
	int16_t x355 = 0;

	t85 = ((x353&(x354==x355))%x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x357 = UINT32_MAX;
	uint16_t x358 = 13U;
	uint8_t x360 = 30U;
	volatile uint32_t t86 = 104948U;

	t86 = ((x357&(x358==x359))%x360);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x361 = -1;
	int16_t x362 = INT16_MAX;
	int8_t x363 = INT8_MIN;
	int8_t x364 = 41;
	volatile int32_t t87 = 0;

	t87 = ((x361&(x362==x363))%x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x365 = 6869447258LLU;
	uint64_t x367 = 5552724716659431500LLU;

	t88 = ((x365&(x366==x367))%x368);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = INT64_MIN;
	int32_t x370 = -1;
	int32_t x371 = INT32_MIN;

	t89 = ((x369&(x370==x371))%x372);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = -1LL;
	volatile uint64_t x374 = 4186592464LLU;
	int32_t x375 = INT32_MAX;
	volatile int64_t t90 = 359LL;

	t90 = ((x373&(x374==x375))%x376);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = -1;
	int16_t x378 = -105;
	int32_t x379 = INT32_MIN;
	volatile uint16_t x380 = UINT16_MAX;
	int32_t t91 = -111189;

	t91 = ((x377&(x378==x379))%x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x381 = -154805668206336LL;
	int64_t x382 = INT64_MAX;
	int32_t x383 = -501913356;
	int8_t x384 = INT8_MIN;

	t92 = ((x381&(x382==x383))%x384);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x385 = 39145808954LLU;
	uint64_t x386 = 2074LLU;
	int64_t x387 = -3420LL;
	int64_t x388 = INT64_MIN;

	t93 = ((x385&(x386==x387))%x388);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x389 = -1LL;
	int16_t x390 = INT16_MIN;
	int32_t x391 = INT32_MAX;
	int64_t x392 = 679710851035608189LL;
	volatile int64_t t94 = -112LL;

	t94 = ((x389&(x390==x391))%x392);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x393 = 53U;
	uint8_t x394 = 52U;
	int32_t x395 = 1;
	uint64_t x396 = 16532263LLU;
	volatile uint64_t t95 = 508937LLU;

	t95 = ((x393&(x394==x395))%x396);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x397 = 6374444685793LLU;
	int16_t x398 = INT16_MIN;
	static volatile uint32_t x399 = 62782982U;
	uint16_t x400 = 7U;
	volatile uint64_t t96 = 36230LLU;

	t96 = ((x397&(x398==x399))%x400);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x401 = -1;
	volatile int8_t x402 = 0;
	uint64_t x403 = 9430522009312759LLU;
	int32_t x404 = INT32_MAX;
	volatile int32_t t97 = -5914981;

	t97 = ((x401&(x402==x403))%x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x405 = -1116;
	int64_t x406 = -1LL;
	int32_t x407 = 4;
	int64_t x408 = INT64_MIN;
	static volatile int64_t t98 = 28427232285LL;

	t98 = ((x405&(x406==x407))%x408);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x409 = 21249U;
	uint8_t x410 = 30U;
	volatile int32_t x411 = INT32_MIN;
	uint32_t x412 = UINT32_MAX;
	volatile uint32_t t99 = 63099U;

	t99 = ((x409&(x410==x411))%x412);

	if (t99 != 0U) { NG(); } else { ; }
	
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

