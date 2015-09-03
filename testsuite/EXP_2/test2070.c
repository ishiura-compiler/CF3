#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 48U;
static int64_t x7 = -1LL;
uint32_t x9 = 108831U;
static int64_t x10 = INT64_MIN;
uint8_t x14 = 9U;
int8_t x15 = INT8_MIN;
volatile uint8_t x17 = 2U;
uint8_t x24 = 1U;
int64_t t5 = -16264847833LL;
static int8_t x29 = -1;
int8_t x36 = 2;
static volatile int64_t x49 = -251434071951LL;
int64_t x55 = INT64_MAX;
int64_t x60 = INT64_MIN;
uint64_t t13 = 266725513551LLU;
int32_t x70 = 117927;
uint64_t x75 = 1361460080021LLU;
volatile uint64_t t16 = 4418672301LLU;
int8_t x78 = -1;
uint64_t x80 = 47649373371357LLU;
int32_t x86 = INT32_MIN;
uint16_t x87 = UINT16_MAX;
volatile int32_t x94 = -1;
int32_t x99 = INT32_MIN;
static volatile uint32_t t21 = 2678961U;
int32_t x101 = -309506095;
static volatile uint32_t x102 = 1U;
static volatile uint64_t x106 = 102LLU;
int64_t x114 = INT64_MAX;
int16_t x116 = 326;
int64_t t27 = -1833795LL;
static volatile int64_t t28 = -56202102613862LL;
uint64_t x133 = UINT64_MAX;
int8_t x136 = INT8_MAX;
static uint16_t x142 = 22U;
int32_t t31 = 423922526;
volatile int32_t t33 = 476565;
volatile int8_t x164 = INT8_MIN;
int8_t x165 = INT8_MIN;
int16_t x166 = -10647;
int8_t x168 = -1;
uint8_t x169 = UINT8_MAX;
uint32_t x172 = 387671U;
int64_t x176 = INT64_MIN;
uint16_t x178 = UINT16_MAX;
volatile int8_t x179 = -27;
volatile int32_t t39 = -56813846;
static int16_t x182 = INT16_MIN;
volatile uint64_t x184 = 133393930731334LLU;
uint64_t t40 = 3554500LLU;
uint32_t x187 = 527946151U;
static int32_t x191 = INT32_MAX;
uint16_t x195 = UINT16_MAX;
volatile uint64_t t43 = 25LLU;
static int8_t x202 = 44;
uint8_t x206 = UINT8_MAX;
volatile int32_t t47 = -7810;
volatile int16_t x219 = -2842;
int16_t x220 = -1;
int64_t x239 = 464313LL;
static volatile int64_t t53 = -38LL;
uint16_t x259 = 18U;
volatile uint64_t t60 = 5141239088987LLU;
uint16_t x283 = 7U;
uint8_t x285 = 1U;
static int32_t x290 = INT32_MIN;
int64_t x292 = 1286853LL;
int16_t x306 = 1767;
static int32_t x312 = 1;
int8_t x315 = 43;
uint32_t x316 = 97U;
int8_t x322 = -1;
volatile int32_t t70 = 2;
static volatile int32_t t71 = -3;
volatile int64_t x334 = 475220696742290LL;
static uint8_t x340 = 5U;
volatile int64_t x344 = INT64_MIN;
int32_t x352 = INT32_MAX;
static int16_t x358 = INT16_MIN;
volatile int32_t t80 = 701125;
uint8_t x383 = 1U;
static volatile uint64_t t85 = 16LLU;
volatile uint8_t x386 = UINT8_MAX;
static volatile int64_t t86 = 452604LL;
uint32_t x391 = 4U;
volatile uint32_t t87 = 954U;
volatile int64_t t89 = 257052LL;
int8_t x404 = 58;
static int64_t x406 = INT64_MAX;
uint8_t x408 = 0U;
int8_t x424 = INT8_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int32_t x3 = INT32_MAX;
	uint32_t x4 = 3304U;
	volatile uint32_t t0 = 97U;

	t0 = ((x1/(x2^x3))*x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int64_t x6 = 1072204153278029LL;
	int8_t x8 = INT8_MIN;
	int64_t t1 = 2161828619206LL;

	t1 = ((x5/(x6^x7))*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = INT32_MAX;
	volatile int32_t x12 = 26;
	static int64_t t2 = 190LL;

	t2 = ((x9/(x10^x11))*x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 163582;
	static uint8_t x16 = 11U;
	int32_t t3 = -11;

	t3 = ((x13/(x14^x15))*x16);

	if (t3 != -15114) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	int64_t x20 = 54578789741154LL;
	volatile int64_t t4 = -2LL;

	t4 = ((x17/(x18^x19))*x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 46U;
	volatile int64_t x22 = -1LL;
	uint8_t x23 = 1U;

	t5 = ((x21/(x22^x23))*x24);

	if (t5 != -23LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -27;
	int32_t x26 = -1;
	uint32_t x27 = 2400U;
	static uint32_t x28 = 0U;
	static uint32_t t6 = 3301290U;

	t6 = ((x25/(x26^x27))*x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x30 = UINT8_MAX;
	static int64_t x31 = 8LL;
	uint64_t x32 = 250107403602738731LLU;
	uint64_t t7 = 5783996757794617LLU;

	t7 = ((x29/(x30^x31))*x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = 18;
	uint8_t x34 = UINT8_MAX;
	static int8_t x35 = 2;
	volatile int32_t t8 = 291828656;

	t8 = ((x33/(x34^x35))*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 1U;
	int16_t x38 = 5;
	int64_t x39 = INT64_MAX;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = -36098217006245859LL;

	t9 = ((x37/(x38^x39))*x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	int64_t x46 = INT64_MIN;
	uint32_t x47 = 6913U;
	int16_t x48 = INT16_MIN;
	int64_t t10 = -8835660LL;

	t10 = ((x45/(x46^x47))*x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x50 = INT32_MIN;
	static uint32_t x51 = 189U;
	static int16_t x52 = INT16_MIN;
	int64_t t11 = 649269798776079LL;

	t11 = ((x49/(x50^x51))*x52);

	if (t11 != 3833856LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	int32_t x54 = -37689;
	int8_t x56 = INT8_MIN;
	int64_t t12 = -4997344910865602LL;

	t12 = ((x53/(x54^x55))*x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = UINT64_MAX;
	uint64_t x58 = UINT64_MAX;
	volatile uint32_t x59 = UINT32_MAX;

	t13 = ((x57/(x58^x59))*x60);

	if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = -1;
	uint8_t x66 = 0U;
	uint64_t x67 = 42LLU;
	int64_t x68 = -20726001345481771LL;
	uint64_t t14 = 28833399LLU;

	t14 = ((x65/(x66^x67))*x68);

	if (t14 != 4839185734103161336LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -470LL;
	volatile int64_t x71 = -718207431809LL;
	uint8_t x72 = 1U;
	volatile int64_t t15 = -6682191239876031LL;

	t15 = ((x69/(x70^x71))*x72);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MAX;
	int16_t x74 = INT16_MAX;
	static volatile uint32_t x76 = UINT32_MAX;

	t16 = ((x73/(x74^x75))*x76);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = 7321117494278249LL;
	static int16_t x79 = -41;
	static volatile uint64_t t17 = 93385191LLU;

	t17 = ((x77/(x78^x79))*x80);

	if (t17 != 11513178751932888748LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MAX;
	uint64_t x88 = 0LLU;
	uint64_t t18 = 1988LLU;

	t18 = ((x85/(x86^x87))*x88);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MAX;
	int32_t x90 = -307441514;
	static int64_t x91 = INT64_MIN;
	uint8_t x92 = 91U;
	volatile int64_t t19 = 68403187801549392LL;

	t19 = ((x89/(x90^x91))*x92);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x93 = -1LL;
	int8_t x95 = INT8_MIN;
	int8_t x96 = -1;
	volatile int64_t t20 = 1872120LL;

	t20 = ((x93/(x94^x95))*x96);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x97 = 6173305U;
	volatile int8_t x98 = 59;
	int16_t x100 = -1;

	t21 = ((x97/(x98^x99))*x100);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x103 = UINT64_MAX;
	volatile int8_t x104 = -1;
	volatile uint64_t t22 = 36LLU;

	t22 = ((x101/(x102^x103))*x104);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = UINT16_MAX;
	static int64_t x107 = -26400243769470LL;
	int64_t x108 = INT64_MIN;
	volatile uint64_t t23 = 90763428LLU;

	t23 = ((x105/(x106^x107))*x108);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = INT64_MIN;
	int64_t x110 = INT64_MIN;
	int64_t x111 = -1LL;
	int16_t x112 = INT16_MAX;
	int64_t t24 = 180423LL;

	t24 = ((x109/(x110^x111))*x112);

	if (t24 != -32767LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = INT64_MIN;
	volatile uint64_t x115 = UINT64_MAX;
	static uint64_t t25 = 198012683803794431LLU;

	t25 = ((x113/(x114^x115))*x116);

	if (t25 != 326LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = INT64_MIN;
	static int64_t x118 = INT64_MIN;
	uint16_t x119 = 273U;
	uint16_t x120 = 800U;
	volatile int64_t t26 = -100341LL;

	t26 = ((x117/(x118^x119))*x120);

	if (t26 != 800LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x125 = INT64_MIN;
	static int8_t x126 = INT8_MAX;
	static int64_t x127 = -4201051183LL;
	int16_t x128 = INT16_MIN;

	t27 = ((x125/(x126^x127))*x128);

	if (t27 != -71941863866368LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MIN;
	int16_t x130 = 0;
	volatile uint32_t x131 = 8U;
	volatile int64_t x132 = -1LL;

	t28 = ((x129/(x130^x131))*x132);

	if (t28 != -536866816LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x134 = -1;
	int16_t x135 = INT16_MIN;
	uint64_t t29 = 382922021LLU;

	t29 = ((x133/(x134^x135))*x136);

	if (t29 != 71496825994479600LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = 29U;
	static int16_t x138 = INT16_MAX;
	int8_t x139 = INT8_MAX;
	uint16_t x140 = 237U;
	static uint32_t t30 = 62749U;

	t30 = ((x137/(x138^x139))*x140);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x141 = 1U;
	static int32_t x143 = INT32_MIN;
	int8_t x144 = INT8_MAX;

	t31 = ((x141/(x142^x143))*x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = INT32_MAX;
	volatile uint64_t x150 = 6LLU;
	volatile uint16_t x151 = 19423U;
	int8_t x152 = INT8_MIN;
	static volatile uint64_t t32 = 451LLU;

	t32 = ((x149/(x150^x151))*x152);

	if (t32 != 18446744073695395072LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x153 = -1;
	uint16_t x154 = 139U;
	uint8_t x155 = 38U;
	static volatile uint16_t x156 = UINT16_MAX;

	t33 = ((x153/(x154^x155))*x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = INT32_MIN;
	volatile int16_t x158 = -2;
	static uint32_t x159 = 396861U;
	static uint8_t x160 = UINT8_MAX;
	static uint32_t t34 = 140164074U;

	t34 = ((x157/(x158^x159))*x160);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x161 = -1;
	static int16_t x162 = INT16_MAX;
	uint64_t x163 = UINT64_MAX;
	uint64_t t35 = 34246049LLU;

	t35 = ((x161/(x162^x163))*x164);

	if (t35 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x167 = INT16_MIN;
	volatile int32_t t36 = 21;

	t36 = ((x165/(x166^x167))*x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x170 = -45;
	volatile int64_t x171 = 30495626360326LL;
	static int64_t t37 = 744LL;

	t37 = ((x169/(x170^x171))*x172);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x173 = 33840069320902037LLU;
	static uint16_t x174 = 15964U;
	int64_t x175 = 177917182432090LL;
	volatile uint64_t t38 = 227421758785484104LLU;

	t38 = ((x173/(x174^x175))*x176);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x177 = 2082U;
	volatile uint8_t x180 = 122U;

	t39 = ((x177/(x178^x179))*x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = INT8_MIN;
	int32_t x183 = INT32_MIN;

	t40 = ((x181/(x182^x183))*x184);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = 14;
	int32_t x186 = -60843;
	int8_t x188 = 0;
	uint32_t t41 = 131639U;

	t41 = ((x185/(x186^x187))*x188);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x189 = 5U;
	uint8_t x190 = 5U;
	int16_t x192 = -2062;
	volatile int32_t t42 = 272337;

	t42 = ((x189/(x190^x191))*x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = INT16_MIN;
	uint64_t x194 = 350LLU;
	int16_t x196 = INT16_MIN;

	t43 = ((x193/(x194^x195))*x196);

	if (t43 != 9173707181674397696LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x197 = 36U;
	uint8_t x198 = 7U;
	int16_t x199 = INT16_MAX;
	volatile int16_t x200 = INT16_MIN;
	int32_t t44 = 2542;

	t44 = ((x197/(x198^x199))*x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = 5017U;
	uint16_t x203 = 24398U;
	int8_t x204 = -1;
	int32_t t45 = 1;

	t45 = ((x201/(x202^x203))*x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x205 = 18U;
	uint8_t x207 = 74U;
	static int64_t x208 = -1LL;
	int64_t t46 = 47416721455584LL;

	t46 = ((x205/(x206^x207))*x208);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x209 = -1;
	volatile uint8_t x210 = 13U;
	int32_t x211 = INT32_MIN;
	static volatile uint8_t x212 = 32U;

	t47 = ((x209/(x210^x211))*x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = -6;
	int8_t x218 = INT8_MIN;
	volatile int32_t t48 = 98764304;

	t48 = ((x217/(x218^x219))*x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x221 = 539866463106LLU;
	volatile int16_t x222 = 7;
	uint8_t x223 = 78U;
	int64_t x224 = -15910583287LL;
	volatile uint64_t t49 = 7605LLU;

	t49 = ((x221/(x222^x223))*x224);

	if (t49 != 11461587631294581025LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x225 = 1U;
	uint32_t x226 = 1816728U;
	int64_t x227 = -1LL;
	int64_t x228 = 630LL;
	volatile int64_t t50 = 7653LL;

	t50 = ((x225/(x226^x227))*x228);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x229 = INT8_MIN;
	uint32_t x230 = 63U;
	static volatile int64_t x231 = -1LL;
	uint32_t x232 = UINT32_MAX;
	int64_t t51 = -6LL;

	t51 = ((x229/(x230^x231))*x232);

	if (t51 != 8589934590LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x237 = -1;
	uint64_t x238 = 29LLU;
	uint64_t x240 = UINT64_MAX;
	static uint64_t t52 = 46LLU;

	t52 = ((x237/(x238^x239))*x240);

	if (t52 != 18446704342798672882LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x241 = -1;
	int64_t x242 = -4378051479513LL;
	int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MAX;

	t53 = ((x241/(x242^x243))*x244);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x245 = 0;
	uint8_t x246 = 1U;
	volatile int64_t x247 = -7855176LL;
	volatile int8_t x248 = 1;
	volatile int64_t t54 = -6150580991LL;

	t54 = ((x245/(x246^x247))*x248);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x249 = INT32_MIN;
	static volatile uint64_t x250 = UINT64_MAX;
	uint16_t x251 = 32U;
	int64_t x252 = -1LL;
	uint64_t t55 = 527744LLU;

	t55 = ((x249/(x250^x251))*x252);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x253 = 1176U;
	uint8_t x254 = 0U;
	int16_t x255 = -60;
	static int8_t x256 = 7;
	volatile int32_t t56 = -39;

	t56 = ((x253/(x254^x255))*x256);

	if (t56 != -133) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = -1;
	int16_t x258 = INT16_MIN;
	int64_t x260 = INT64_MAX;
	int64_t t57 = 4041LL;

	t57 = ((x257/(x258^x259))*x260);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MAX;
	uint16_t x263 = 2U;
	static uint8_t x264 = UINT8_MAX;
	int32_t t58 = -12081559;

	t58 = ((x261/(x262^x263))*x264);

	if (t58 != -255) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x265 = 7957490609940140LL;
	static int16_t x266 = 0;
	static volatile uint64_t x267 = 38217737119LLU;
	volatile uint64_t x268 = 179427068LLU;
	volatile uint64_t t59 = 2058484196LLU;

	t59 = ((x265/(x266^x267))*x268);

	if (t59 != 37359227536552LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = INT16_MAX;
	int32_t x274 = INT32_MIN;
	uint8_t x275 = 4U;
	uint64_t x276 = 3959663262867283LLU;

	t60 = ((x273/(x274^x275))*x276);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x281 = 15944U;
	static volatile int32_t x282 = INT32_MIN;
	static uint8_t x284 = UINT8_MAX;
	static volatile int32_t t61 = -80;

	t61 = ((x281/(x282^x283))*x284);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x286 = -1LL;
	uint32_t x287 = UINT32_MAX;
	int64_t x288 = INT64_MIN;
	int64_t t62 = 520555117099LL;

	t62 = ((x285/(x286^x287))*x288);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x289 = 1628U;
	uint16_t x291 = 6667U;
	int64_t t63 = -18918LL;

	t63 = ((x289/(x290^x291))*x292);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = -30;
	static int32_t x298 = -1;
	volatile int8_t x299 = -12;
	static uint64_t x300 = UINT64_MAX;
	uint64_t t64 = 2LLU;

	t64 = ((x297/(x298^x299))*x300);

	if (t64 != 2LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = INT64_MIN;
	int64_t x302 = INT64_MAX;
	int8_t x303 = -2;
	int64_t x304 = -349949LL;
	int64_t t65 = 698018670111LL;

	t65 = ((x301/(x302^x303))*x304);

	if (t65 != -349949LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x305 = 1LLU;
	int8_t x307 = -23;
	volatile int32_t x308 = INT32_MAX;
	static uint64_t t66 = 4448701LLU;

	t66 = ((x305/(x306^x307))*x308);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x309 = -1;
	static uint64_t x310 = 10010408117197LLU;
	int32_t x311 = INT32_MAX;
	volatile uint64_t t67 = 137538LLU;

	t67 = ((x309/(x310^x311))*x312);

	if (t67 != 1842724LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x313 = 1824;
	static int32_t x314 = -232519;
	volatile uint32_t t68 = 2276499U;

	t68 = ((x313/(x314^x315))*x316);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x317 = UINT16_MAX;
	int16_t x318 = INT16_MAX;
	uint16_t x319 = 28U;
	static uint64_t x320 = UINT64_MAX;
	uint64_t t69 = 487009290566060LLU;

	t69 = ((x317/(x318^x319))*x320);

	if (t69 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x321 = 569U;
	int32_t x323 = 1;
	int32_t x324 = -116;

	t70 = ((x321/(x322^x323))*x324);

	if (t70 != 32944) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x325 = -546136580;
	volatile int32_t x326 = INT32_MAX;
	int16_t x327 = 72;
	int32_t x328 = -233705;

	t71 = ((x325/(x326^x327))*x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x329 = 4164U;
	int64_t x330 = -3503655863164195546LL;
	int8_t x331 = -1;
	volatile int16_t x332 = INT16_MIN;
	int64_t t72 = -64LL;

	t72 = ((x329/(x330^x331))*x332);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = INT64_MAX;
	uint64_t x335 = 156LLU;
	volatile uint32_t x336 = 1291U;
	uint64_t t73 = 71608992276LLU;

	t73 = ((x333/(x334^x335))*x336);

	if (t73 != 25055728LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x337 = 60U;
	static int64_t x338 = -1LL;
	volatile uint8_t x339 = UINT8_MAX;
	int64_t t74 = -887LL;

	t74 = ((x337/(x338^x339))*x340);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x341 = INT64_MAX;
	int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MIN;
	volatile int64_t t75 = INT64_MIN;

	t75 = ((x341/(x342^x343))*x344);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x345 = 894588048U;
	int32_t x346 = INT32_MIN;
	int32_t x347 = -1;
	volatile int64_t x348 = -42699LL;
	volatile int64_t t76 = -27153820102284118LL;

	t76 = ((x345/(x346^x347))*x348);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x349 = 12796LLU;
	static int16_t x350 = -58;
	int64_t x351 = 5LL;
	static uint64_t t77 = 0LLU;

	t77 = ((x349/(x350^x351))*x352);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = INT16_MAX;
	uint64_t x354 = UINT64_MAX;
	static int32_t x355 = INT32_MAX;
	int64_t x356 = INT64_MAX;
	volatile uint64_t t78 = 1360648224LLU;

	t78 = ((x353/(x354^x355))*x356);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x357 = -1;
	int64_t x359 = -3626462302103864LL;
	volatile int64_t x360 = INT64_MIN;
	volatile int64_t t79 = -1848LL;

	t79 = ((x357/(x358^x359))*x360);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x361 = 0U;
	int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MIN;
	static volatile uint16_t x364 = 1400U;

	t80 = ((x361/(x362^x363))*x364);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x365 = 228U;
	static int64_t x366 = -1LL;
	uint8_t x367 = 5U;
	int16_t x368 = INT16_MIN;
	volatile int64_t t81 = -328414LL;

	t81 = ((x365/(x366^x367))*x368);

	if (t81 != 1245184LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = -1;
	static uint32_t x370 = 990991U;
	int64_t x371 = 1892314887LL;
	volatile int8_t x372 = INT8_MIN;
	int64_t t82 = 30884689LL;

	t82 = ((x369/(x370^x371))*x372);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = -1822LL;
	volatile uint16_t x374 = 29668U;
	static int32_t x375 = -52467;
	static int16_t x376 = INT16_MAX;
	volatile int64_t t83 = -23894727968909447LL;

	t83 = ((x373/(x374^x375))*x376);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x377 = UINT32_MAX;
	uint8_t x378 = 116U;
	static int16_t x379 = 1274;
	static uint16_t x380 = UINT16_MAX;
	static uint32_t t84 = 34596887U;

	t84 = ((x377/(x378^x379))*x380);

	if (t84 != 880331599U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x381 = 2U;
	static volatile uint64_t x382 = 56996124806LLU;
	uint8_t x384 = UINT8_MAX;

	t85 = ((x381/(x382^x383))*x384);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x385 = INT16_MAX;
	int64_t x387 = -1381451708313LL;
	int32_t x388 = 245090;

	t86 = ((x385/(x386^x387))*x388);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x389 = -1;
	static int8_t x390 = -47;
	volatile int16_t x392 = INT16_MAX;

	t87 = ((x389/(x390^x391))*x392);

	if (t87 != 32767U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x393 = INT16_MIN;
	int32_t x394 = INT32_MIN;
	int64_t x395 = INT64_MAX;
	static volatile uint8_t x396 = 4U;
	volatile int64_t t88 = 492980748176497LL;

	t88 = ((x393/(x394^x395))*x396);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x397 = INT8_MIN;
	static volatile int32_t x398 = -1;
	volatile int64_t x399 = -6537LL;
	int32_t x400 = -1;

	t89 = ((x397/(x398^x399))*x400);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = INT16_MIN;
	static volatile int32_t x402 = INT32_MIN;
	int64_t x403 = INT64_MIN;
	static int64_t t90 = -3867LL;

	t90 = ((x401/(x402^x403))*x404);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x405 = -1;
	static int16_t x407 = 102;
	static int64_t t91 = 4860735952157LL;

	t91 = ((x405/(x406^x407))*x408);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x417 = 0;
	int16_t x418 = 7276;
	int16_t x419 = -1;
	int64_t x420 = 252464595489617453LL;
	volatile int64_t t92 = -15046LL;

	t92 = ((x417/(x418^x419))*x420);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x421 = 49763U;
	static int64_t x422 = -1LL;
	uint64_t x423 = 3712435821949LLU;
	volatile uint64_t t93 = 110LLU;

	t93 = ((x421/(x422^x423))*x424);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x425 = 26U;
	static int16_t x426 = 3291;
	volatile int16_t x427 = INT16_MAX;
	uint16_t x428 = UINT16_MAX;
	static int32_t t94 = 545802;

	t94 = ((x425/(x426^x427))*x428);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x429 = 3367984LL;
	uint16_t x430 = 1U;
	uint16_t x431 = 20016U;
	uint8_t x432 = 6U;
	static int64_t t95 = 763543667880LL;

	t95 = ((x429/(x430^x431))*x432);

	if (t95 != 1008LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x433 = 5U;
	uint8_t x434 = 24U;
	uint64_t x435 = UINT64_MAX;
	static int16_t x436 = INT16_MIN;
	static uint64_t t96 = 43897827245LLU;

	t96 = ((x433/(x434^x435))*x436);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x437 = INT32_MIN;
	int32_t x438 = INT32_MIN;
	int8_t x439 = INT8_MIN;
	uint8_t x440 = 15U;
	volatile int32_t t97 = 11895;

	t97 = ((x437/(x438^x439))*x440);

	if (t97 != -15) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x441 = UINT8_MAX;
	int64_t x442 = -1LL;
	int64_t x443 = INT64_MIN;
	static int16_t x444 = 128;
	static volatile int64_t t98 = -543590861553712LL;

	t98 = ((x441/(x442^x443))*x444);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x445 = -1879;
	int32_t x446 = INT32_MIN;
	volatile uint8_t x447 = 1U;
	int16_t x448 = INT16_MIN;
	volatile int32_t t99 = 456;

	t99 = ((x445/(x446^x447))*x448);

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

