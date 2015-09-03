#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -1;
static volatile int32_t t0 = -432;
volatile uint16_t x11 = 122U;
int32_t x14 = INT32_MIN;
volatile uint64_t t3 = 184562958945LLU;
uint64_t x25 = 1470079922270280LLU;
static volatile uint8_t x27 = 26U;
int16_t x34 = -1;
uint32_t x36 = UINT32_MAX;
uint16_t x38 = UINT16_MAX;
int64_t t8 = -795437748120658LL;
volatile int64_t x44 = INT64_MIN;
static volatile int8_t x45 = -11;
uint16_t x48 = UINT16_MAX;
static volatile int8_t x49 = 7;
volatile int64_t t11 = 3193868315362095825LL;
static int8_t x56 = -40;
static int64_t t12 = -7819522LL;
static volatile uint64_t t14 = 615LLU;
volatile int16_t x65 = -1;
int64_t x76 = 59622LL;
volatile int32_t x82 = INT32_MAX;
volatile int64_t x84 = INT64_MIN;
int8_t x86 = INT8_MIN;
uint16_t x88 = 29U;
int32_t x92 = -31;
uint64_t t21 = 927305424144040LLU;
int8_t x97 = -36;
volatile uint64_t x98 = UINT64_MAX;
int64_t x105 = INT64_MIN;
volatile int16_t x106 = INT16_MIN;
int8_t x111 = -9;
uint32_t x115 = 146801285U;
int32_t t27 = -60221113;
static uint64_t x124 = UINT64_MAX;
uint16_t x137 = 9845U;
static int8_t x138 = INT8_MAX;
int8_t x140 = 43;
uint16_t x143 = 13675U;
static uint8_t x144 = 36U;
volatile int8_t x150 = 0;
static volatile int32_t x165 = INT32_MIN;
static int16_t x166 = INT16_MIN;
static volatile int32_t x170 = INT32_MIN;
static volatile int32_t t39 = -2298;
uint64_t x173 = 2153441LLU;
static uint8_t x174 = 81U;
static int8_t x175 = 9;
uint64_t t41 = 1218307453652534290LLU;
uint64_t x187 = UINT64_MAX;
volatile uint32_t x198 = 95U;
int32_t x208 = -299559;
int32_t x209 = INT32_MAX;
int32_t x217 = 42515702;
int32_t t51 = 1;
volatile int64_t x238 = INT64_MIN;
volatile int16_t x241 = INT16_MIN;
uint8_t x246 = 1U;
static int8_t x250 = INT8_MIN;
uint32_t x252 = 172U;
volatile int32_t x254 = INT32_MIN;
int64_t x255 = INT64_MIN;
int32_t x257 = INT32_MIN;
static int8_t x268 = INT8_MIN;
uint32_t x274 = UINT32_MAX;
static int64_t x279 = INT64_MAX;
int64_t t62 = 6702227911840837LL;
uint64_t t64 = 207469690236114LLU;
int64_t t65 = -130134LL;
uint8_t x295 = 27U;
uint64_t x297 = UINT64_MAX;
int32_t x302 = -1192;
volatile uint64_t t68 = 1675746878587773LLU;
uint16_t x312 = UINT16_MAX;
volatile int64_t t71 = -2LL;
static int16_t x323 = -1;
static int32_t x325 = INT32_MAX;
static volatile int8_t x329 = 1;
static int32_t x336 = -1547348;
volatile int8_t x343 = -31;
int32_t x344 = -1;
volatile uint8_t x350 = 124U;
static int16_t x351 = -1;
volatile int32_t x353 = -140857;
uint32_t t81 = 9U;
volatile int32_t x358 = -1;
volatile int8_t x363 = INT8_MIN;
volatile int32_t x364 = INT32_MIN;
volatile int64_t t89 = 1LL;
uint8_t x394 = UINT8_MAX;
int8_t x401 = -1;
int32_t x403 = -261923380;
uint8_t x418 = 7U;
int64_t t96 = 489216173511450357LL;
int32_t x422 = -1;
static int16_t x427 = -1511;
int16_t x428 = INT16_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x2 = -3;
	static int16_t x4 = -1;

	t0 = ((x1^(x2-x3))/x4);

	if (t0 != -32766) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	int32_t x6 = -34;
	static int8_t x7 = -1;
	int32_t x8 = -1;
	int32_t t1 = -2;

	t1 = ((x5^(x6-x7))/x8);

	if (t1 != 2147483616) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int16_t x10 = -1484;
	static int8_t x12 = INT8_MIN;
	int32_t t2 = -14929;

	t2 = ((x9^(x10-x11))/x12);

	if (t2 != 499) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 2938761565LLU;
	int16_t x15 = -1;
	int64_t x16 = 4313943287785LL;

	t3 = ((x13^(x14-x15))/x16);

	if (t3 != 4276074LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int32_t x18 = 116965;
	int8_t x19 = -1;
	int8_t x20 = INT8_MAX;
	int32_t t4 = -4;

	t4 = ((x17^(x18-x19))/x20);

	if (t4 != -16908399) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = INT16_MIN;
	volatile int8_t x23 = INT8_MIN;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -541932;

	t5 = ((x21^(x22-x23))/x24);

	if (t5 != -16776961) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = 190171060LL;
	uint32_t x28 = 8U;
	uint64_t t6 = 1LLU;

	t6 = ((x25^(x26-x27))/x28);

	if (t6 != 183760001394426LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	uint32_t x35 = 108195U;
	uint32_t t7 = 3169U;

	t7 = ((x33^(x34-x35))/x36);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = -27;
	int64_t x39 = INT64_MAX;
	int64_t x40 = INT64_MIN;

	t8 = ((x37^(x38-x39))/x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x41 = 14U;
	int16_t x42 = -1;
	int8_t x43 = INT8_MIN;
	int64_t t9 = 1735042760LL;

	t9 = ((x41^(x42-x43))/x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x46 = 1U;
	volatile int32_t x47 = -1;
	int32_t t10 = -574;

	t10 = ((x45^(x46-x47))/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x50 = INT64_MAX;
	static int32_t x51 = 37826374;
	volatile uint8_t x52 = 7U;

	t11 = ((x49^(x50-x51))/x52);

	if (t11 != 1317624576688135634LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	static int8_t x54 = INT8_MIN;
	volatile int32_t x55 = -1;

	t12 = ((x53^(x54-x55))/x56);

	if (t12 != -3LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = INT8_MIN;
	volatile uint8_t x58 = 56U;
	int8_t x59 = INT8_MIN;
	uint8_t x60 = 13U;
	volatile int32_t t13 = -892646353;

	t13 = ((x57^(x58-x59))/x60);

	if (t13 != -15) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 4U;
	uint64_t x62 = 4115LLU;
	int16_t x63 = INT16_MAX;
	static int32_t x64 = -5346;

	t14 = ((x61^(x62-x63))/x64);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x66 = -379;
	uint8_t x67 = 14U;
	int8_t x68 = INT8_MIN;
	int32_t t15 = 1;

	t15 = ((x65^(x66-x67))/x68);

	if (t15 != -3) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = 4;
	uint8_t x70 = 28U;
	uint32_t x71 = UINT32_MAX;
	int64_t x72 = INT64_MIN;
	volatile int64_t t16 = -12514855506LL;

	t16 = ((x69^(x70-x71))/x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -58LL;
	int8_t x74 = -1;
	int32_t x75 = -4;
	volatile int64_t t17 = 1199646903LL;

	t17 = ((x73^(x74-x75))/x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 631U;
	volatile uint8_t x78 = 7U;
	volatile int32_t x79 = -1;
	int8_t x80 = -5;
	int32_t t18 = 7632217;

	t18 = ((x77^(x78-x79))/x80);

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MAX;
	static int64_t x83 = 434555LL;
	volatile int64_t t19 = -4LL;

	t19 = ((x81^(x82-x83))/x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 2LLU;
	uint32_t x87 = UINT32_MAX;
	volatile uint64_t t20 = 103609LLU;

	t20 = ((x85^(x86-x87))/x88);

	if (t20 != 148102316LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 3269517969LLU;
	int32_t x90 = 151650;
	uint16_t x91 = UINT16_MAX;

	t21 = ((x89^(x90-x91))/x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x99 = INT16_MIN;
	int64_t x100 = -1726LL;
	uint64_t t22 = 22816LLU;

	t22 = ((x97^(x98-x99))/x100);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = UINT32_MAX;
	static volatile int16_t x102 = -2547;
	int64_t x103 = -507620LL;
	volatile uint16_t x104 = 438U;
	int64_t t23 = 6901334888LL;

	t23 = ((x101^(x102-x103))/x104);

	if (t23 != 9804708LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x107 = INT64_MIN;
	int8_t x108 = -1;
	int64_t t24 = -70343LL;

	t24 = ((x105^(x106-x107))/x108);

	if (t24 != 32768LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = 7;
	volatile int32_t x110 = INT32_MIN;
	static int16_t x112 = -10;
	static volatile int32_t t25 = 15;

	t25 = ((x109^(x110-x111))/x112);

	if (t25 != 214748363) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x113 = 0U;
	volatile int8_t x114 = 1;
	uint16_t x116 = UINT16_MAX;
	volatile uint32_t t26 = 2U;

	t26 = ((x113^(x114-x115))/x116);

	if (t26 != 63296U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MAX;
	uint8_t x118 = 3U;
	uint16_t x119 = 230U;
	int32_t x120 = 16060;

	t27 = ((x117^(x118-x119))/x120);

	if (t27 != -133716) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x121 = INT16_MIN;
	int32_t x122 = -226839;
	static int8_t x123 = 1;
	volatile uint64_t t28 = 2759741145910LLU;

	t28 = ((x121^(x122-x123))/x124);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 635LLU;
	volatile int16_t x126 = 59;
	volatile int8_t x127 = 21;
	volatile uint32_t x128 = 2007746585U;
	volatile uint64_t t29 = 4439009738377824608LLU;

	t29 = ((x125^(x126-x127))/x128);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = INT8_MIN;
	int16_t x130 = -213;
	int64_t x131 = -1LL;
	static uint64_t x132 = UINT64_MAX;
	uint64_t t30 = 1144745092477LLU;

	t30 = ((x129^(x130-x131))/x132);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x133 = -832;
	static int32_t x134 = -13;
	volatile int32_t x135 = -1;
	int64_t x136 = -1079374042018124261LL;
	int64_t t31 = -469671614941682LL;

	t31 = ((x133^(x134-x135))/x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x139 = -2085;
	int32_t t32 = 0;

	t32 = ((x137^(x138-x139))/x140);

	if (t32 != 278) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = -1;
	static volatile int8_t x142 = INT8_MIN;
	int32_t t33 = 2055822;

	t33 = ((x141^(x142-x143))/x144);

	if (t33 != 383) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = 1U;
	int16_t x146 = INT16_MAX;
	int8_t x147 = INT8_MIN;
	volatile int16_t x148 = INT16_MAX;
	int32_t t34 = -44590536;

	t34 = ((x145^(x146-x147))/x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	volatile int32_t x151 = -1;
	uint8_t x152 = 1U;
	volatile int32_t t35 = 1;

	t35 = ((x149^(x150-x151))/x152);

	if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 43U;
	int8_t x154 = INT8_MAX;
	uint64_t x155 = 1806LLU;
	static uint16_t x156 = 4U;
	static uint64_t t36 = 5065521521446LLU;

	t36 = ((x153^(x154-x155))/x156);

	if (t36 != 4611686018427387478LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x157 = 898616071630596346LLU;
	static volatile int8_t x158 = INT8_MIN;
	static uint32_t x159 = UINT32_MAX;
	int32_t x160 = -15873330;
	static volatile uint64_t t37 = 223038509LLU;

	t37 = ((x157^(x158-x159))/x160);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x167 = -257;
	volatile int8_t x168 = 1;
	int32_t t38 = -15493;

	t38 = ((x165^(x166-x167))/x168);

	if (t38 != 2147451137) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = 22;
	int32_t x171 = INT32_MIN;
	int32_t x172 = INT32_MIN;

	t39 = ((x169^(x170-x171))/x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x176 = 33U;
	volatile uint64_t t40 = 23LLU;

	t40 = ((x173^(x174-x175))/x176);

	if (t40 != 65254LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x181 = -3026802059LL;
	static uint64_t x182 = 22088421546LLU;
	int32_t x183 = INT32_MIN;
	volatile uint8_t x184 = UINT8_MAX;

	t41 = ((x181^(x182-x183))/x184);

	if (t41 != 72340172752744234LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MIN;
	int32_t x188 = INT32_MIN;
	uint64_t t42 = 39602398267680775LLU;

	t42 = ((x185^(x186-x187))/x188);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x189 = 1;
	uint32_t x190 = 152545U;
	int32_t x191 = INT32_MIN;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t43 = 589941695777885656LLU;

	t43 = ((x189^(x190-x191))/x192);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x197 = UINT32_MAX;
	int16_t x199 = INT16_MIN;
	uint32_t x200 = 668731718U;
	uint32_t t44 = 28U;

	t44 = ((x197^(x198-x199))/x200);

	if (t44 != 6U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = INT32_MIN;
	uint32_t x206 = 314U;
	int8_t x207 = 58;
	uint32_t t45 = 794366220U;

	t45 = ((x205^(x206-x207))/x208);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x210 = INT8_MAX;
	int64_t x211 = 27799190LL;
	uint16_t x212 = UINT16_MAX;
	volatile int64_t t46 = 4LL;

	t46 = ((x209^(x210-x211))/x212);

	if (t46 != -32344LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x218 = UINT16_MAX;
	uint16_t x219 = 14046U;
	int8_t x220 = INT8_MIN;
	int32_t t47 = 76;

	t47 = ((x217^(x218-x219))/x220);

	if (t47 != -332011) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x221 = 6U;
	static int8_t x222 = -1;
	int64_t x223 = -3799304721LL;
	int64_t x224 = 3023884136323011223LL;
	int64_t t48 = 995212749854716798LL;

	t48 = ((x221^(x222-x223))/x224);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = -1LL;
	static int8_t x226 = 0;
	static uint16_t x227 = 3692U;
	int64_t x228 = 531280094LL;
	int64_t t49 = -1992888874420454LL;

	t49 = ((x225^(x226-x227))/x228);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x229 = INT32_MAX;
	volatile uint64_t x230 = 3LLU;
	volatile int64_t x231 = INT64_MAX;
	uint8_t x232 = UINT8_MAX;
	volatile uint64_t t50 = 15097624552769218LLU;

	t50 = ((x229^(x230-x231))/x232);

	if (t50 != 36170086427459840LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x233 = INT16_MAX;
	int8_t x234 = 13;
	int16_t x235 = INT16_MIN;
	static int8_t x236 = INT8_MIN;

	t51 = ((x233^(x234-x235))/x236);

	if (t51 != -511) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = -2;
	int64_t x239 = INT64_MIN;
	volatile int16_t x240 = INT16_MIN;
	int64_t t52 = -57LL;

	t52 = ((x237^(x238-x239))/x240);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x242 = INT16_MIN;
	uint64_t x243 = UINT64_MAX;
	uint8_t x244 = UINT8_MAX;
	uint64_t t53 = 1325477LLU;

	t53 = ((x241^(x242-x243))/x244);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x245 = 97U;
	uint64_t x247 = UINT64_MAX;
	volatile int8_t x248 = -10;
	static volatile uint64_t t54 = 244627LLU;

	t54 = ((x245^(x246-x247))/x248);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x249 = 9189176U;
	uint64_t x251 = 6236592406141604071LLU;
	volatile uint64_t t55 = 12LLU;

	t55 = ((x249^(x250-x251))/x252);

	if (t55 != 70989253881259260LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = -1;
	uint8_t x256 = 11U;
	int64_t t56 = -5998331061229843LL;

	t56 = ((x253^(x254-x255))/x256);

	if (t56 != -838488366791572014LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x258 = INT64_MIN;
	int64_t x259 = INT64_MIN;
	int64_t x260 = -1851191LL;
	int64_t t57 = -38096LL;

	t57 = ((x257^(x258-x259))/x260);

	if (t57 != 1160LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x261 = UINT32_MAX;
	volatile int32_t x262 = -60;
	volatile int32_t x263 = 13106;
	int16_t x264 = INT16_MAX;
	volatile uint32_t t58 = 1U;

	t58 = ((x261^(x262-x263))/x264);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x265 = INT64_MIN;
	int8_t x266 = 0;
	int8_t x267 = INT8_MIN;
	int64_t t59 = -700331433LL;

	t59 = ((x265^(x266-x267))/x268);

	if (t59 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x269 = INT16_MIN;
	uint64_t x270 = 3LLU;
	uint8_t x271 = UINT8_MAX;
	int16_t x272 = INT16_MAX;
	uint64_t t60 = 398936399023055LLU;

	t60 = ((x269^(x270-x271))/x272);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x273 = 3;
	int32_t x275 = INT32_MIN;
	volatile int8_t x276 = INT8_MIN;
	static uint32_t t61 = 56U;

	t61 = ((x273^(x274-x275))/x276);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = INT8_MAX;
	static uint16_t x278 = UINT16_MAX;
	int16_t x280 = 6;

	t62 = ((x277^(x278-x279))/x280);

	if (t62 != -1537228672809118357LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x281 = 7U;
	uint32_t x282 = UINT32_MAX;
	static volatile int64_t x283 = -1LL;
	int8_t x284 = INT8_MAX;
	static int64_t t63 = -112982806787105LL;

	t63 = ((x281^(x282-x283))/x284);

	if (t63 != 33818640LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x285 = 702721U;
	static int8_t x286 = INT8_MIN;
	volatile uint64_t x287 = UINT64_MAX;
	uint8_t x288 = 3U;

	t64 = ((x285^(x286-x287))/x288);

	if (t64 != 6148914691236282922LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = -1LL;
	static int32_t x290 = -45864218;
	int32_t x291 = -1;
	int8_t x292 = 43;

	t65 = ((x289^(x290-x291))/x292);

	if (t65 != 1066609LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = -50;
	uint8_t x294 = 3U;
	uint8_t x296 = 7U;
	volatile int32_t t66 = 513612;

	t66 = ((x293^(x294-x295))/x296);

	if (t66 != 5) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x298 = -6393151LL;
	int8_t x299 = INT8_MIN;
	volatile uint16_t x300 = 126U;
	uint64_t t67 = 38453290LLU;

	t67 = ((x297^(x298-x299))/x300);

	if (t67 != 50738LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = 1LL;
	uint64_t x303 = 226LLU;
	uint32_t x304 = UINT32_MAX;

	t68 = ((x301^(x302-x303))/x304);

	if (t68 != 4294967296LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x305 = INT32_MIN;
	static int8_t x306 = INT8_MAX;
	static uint32_t x307 = 166895314U;
	static int8_t x308 = INT8_MAX;
	volatile uint32_t t69 = 22115U;

	t69 = ((x305^(x306-x307))/x308);

	if (t69 != 15595184U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x309 = INT32_MIN;
	uint16_t x310 = UINT16_MAX;
	int16_t x311 = 5025;
	static int32_t t70 = -1846;

	t70 = ((x309^(x310-x311))/x312);

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = INT64_MIN;
	static int16_t x314 = INT16_MAX;
	int8_t x315 = -1;
	static uint32_t x316 = UINT32_MAX;

	t71 = ((x313^(x314-x315))/x316);

	if (t71 != -2147483648LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x317 = 3U;
	int8_t x318 = INT8_MAX;
	volatile int16_t x319 = INT16_MAX;
	int16_t x320 = -1;
	int32_t t72 = 104517882;

	t72 = ((x317^(x318-x319))/x320);

	if (t72 != 32637) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x321 = -1414907309LL;
	static uint64_t x322 = 3928LLU;
	uint64_t x324 = 163398298LLU;
	volatile uint64_t t73 = 3510780803LLU;

	t73 = ((x321^(x322-x323))/x324);

	if (t73 != 112894346502LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x326 = UINT64_MAX;
	static uint64_t x327 = 896LLU;
	int16_t x328 = -1;
	uint64_t t74 = 132333407947LLU;

	t74 = ((x325^(x326-x327))/x328);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x330 = 23;
	static int8_t x331 = INT8_MIN;
	int64_t x332 = -2088960769289LL;
	static int64_t t75 = -7333998161688301LL;

	t75 = ((x329^(x330-x331))/x332);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x333 = 15U;
	int8_t x334 = -2;
	static uint64_t x335 = UINT64_MAX;
	static uint64_t t76 = 1296258LLU;

	t76 = ((x333^(x334-x335))/x336);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x337 = -5357LL;
	int8_t x338 = INT8_MAX;
	int8_t x339 = -1;
	uint16_t x340 = 4941U;
	volatile int64_t t77 = -2LL;

	t77 = ((x337^(x338-x339))/x340);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x341 = -1;
	volatile int32_t x342 = INT32_MIN;
	int32_t t78 = -3778;

	t78 = ((x341^(x342-x343))/x344);

	if (t78 != -2147483616) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x345 = UINT32_MAX;
	uint16_t x346 = 87U;
	int8_t x347 = 25;
	uint32_t x348 = 71895017U;
	uint32_t t79 = 7574540U;

	t79 = ((x345^(x346-x347))/x348);

	if (t79 != 59U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = INT16_MIN;
	int32_t x352 = INT32_MIN;
	volatile int32_t t80 = 94;

	t80 = ((x349^(x350-x351))/x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x354 = 749U;
	uint32_t x355 = 125114498U;
	int16_t x356 = INT16_MIN;

	t81 = ((x353^(x354-x355))/x356);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x357 = INT16_MIN;
	int8_t x359 = INT8_MIN;
	static uint64_t x360 = 8442563404108LLU;
	uint64_t t82 = 859468309301156530LLU;

	t82 = ((x357^(x358-x359))/x360);

	if (t82 != 2184969LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x361 = 3U;
	static volatile int8_t x362 = -1;
	volatile int32_t t83 = 1;

	t83 = ((x361^(x362-x363))/x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x365 = INT8_MIN;
	volatile int64_t x366 = -1LL;
	uint16_t x367 = 5192U;
	static int64_t x368 = 1566875LL;
	static volatile int64_t t84 = -1443568076599LL;

	t84 = ((x365^(x366-x367))/x368);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x369 = 27;
	int64_t x370 = -1LL;
	uint16_t x371 = 39U;
	static volatile int16_t x372 = -6;
	int64_t t85 = 1LL;

	t85 = ((x369^(x370-x371))/x372);

	if (t85 != 10LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MIN;
	uint64_t x375 = UINT64_MAX;
	static int16_t x376 = INT16_MAX;
	static uint64_t t86 = 171211875898521LLU;

	t86 = ((x373^(x374-x375))/x376);

	if (t86 != 281483566907399LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = 74107845;
	uint16_t x378 = 1319U;
	int32_t x379 = INT32_MAX;
	static volatile uint16_t x380 = UINT16_MAX;
	volatile int32_t t87 = 136580868;

	t87 = ((x377^(x378-x379))/x380);

	if (t87 != -31637) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x381 = 3U;
	static volatile int16_t x382 = INT16_MIN;
	uint64_t x383 = 31272937369694618LLU;
	int64_t x384 = INT64_MAX;
	static uint64_t t88 = 964721LLU;

	t88 = ((x381^(x382-x383))/x384);

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x385 = -1LL;
	volatile int64_t x386 = -1LL;
	int64_t x387 = INT64_MAX;
	int16_t x388 = INT16_MAX;

	t89 = ((x385^(x386-x387))/x388);

	if (t89 != 281483566907400LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x389 = 0;
	static uint64_t x390 = 2309818092686632497LLU;
	int8_t x391 = INT8_MAX;
	int32_t x392 = 934381;
	static uint64_t t90 = 50237LLU;

	t90 = ((x389^(x390-x391))/x392);

	if (t90 != 2472030245356LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x393 = 11815U;
	static uint64_t x395 = 1865895810547452976LLU;
	uint32_t x396 = 127U;
	uint64_t t91 = 77002LLU;

	t91 = ((x393^(x394-x395))/x396);

	if (t91 != 130557860339858994LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x397 = INT16_MIN;
	volatile int64_t x398 = 6191LL;
	int32_t x399 = INT32_MIN;
	int32_t x400 = INT32_MIN;
	static volatile int64_t t92 = -38784859LL;

	t92 = ((x397^(x398-x399))/x400);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x402 = 1733U;
	int64_t x404 = INT64_MIN;
	volatile int64_t t93 = -10LL;

	t93 = ((x401^(x402-x403))/x404);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x405 = INT16_MAX;
	uint64_t x406 = 19101628700LLU;
	int64_t x407 = INT64_MAX;
	volatile uint32_t x408 = 5471946U;
	static volatile uint64_t t94 = 282720555688392LLU;

	t94 = ((x405^(x406-x407))/x408);

	if (t94 != 1685574392721LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x413 = INT8_MIN;
	int8_t x414 = INT8_MIN;
	int64_t x415 = INT64_MIN;
	int8_t x416 = INT8_MIN;
	int64_t t95 = 18892590774LL;

	t95 = ((x413^(x414-x415))/x416);

	if (t95 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x417 = -1;
	int8_t x419 = -22;
	static int64_t x420 = INT64_MIN;

	t96 = ((x417^(x418-x419))/x420);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x421 = UINT64_MAX;
	static int8_t x423 = INT8_MIN;
	int8_t x424 = 27;
	static uint64_t t97 = 355589918247033707LLU;

	t97 = ((x421^(x422-x423))/x424);

	if (t97 != 683212743470724129LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x425 = UINT32_MAX;
	volatile uint16_t x426 = 25U;
	static uint32_t t98 = 328U;

	t98 = ((x425^(x426-x427))/x428);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x429 = INT32_MIN;
	uint64_t x430 = 4049673481LLU;
	int32_t x431 = INT32_MAX;
	int16_t x432 = -112;
	uint64_t t99 = 59027890689671067LLU;

	t99 = ((x429^(x430-x431))/x432);

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

