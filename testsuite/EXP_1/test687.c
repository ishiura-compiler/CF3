#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 15531097LLU;
int64_t x9 = INT64_MIN;
static int8_t x12 = INT8_MIN;
int64_t x13 = INT64_MIN;
int8_t x20 = -1;
volatile uint16_t x21 = 29980U;
int32_t x28 = INT32_MIN;
static int16_t x29 = INT16_MIN;
uint64_t x31 = 408108748909LLU;
static uint32_t x34 = 25101U;
static volatile int32_t x36 = INT32_MIN;
static int64_t x40 = INT64_MAX;
int64_t t9 = 0LL;
volatile uint32_t x44 = 930120919U;
volatile int32_t x47 = 1816;
volatile uint16_t x58 = 14U;
int8_t x63 = INT8_MAX;
int64_t x73 = INT64_MIN;
uint64_t x81 = 22658711545068LLU;
int16_t x82 = -156;
uint8_t x86 = 1U;
int32_t t21 = INT32_MAX;
volatile int64_t t23 = 17604508LL;
int16_t x97 = -1;
int8_t x100 = -1;
static int16_t x104 = -1;
static int64_t x110 = INT64_MAX;
int64_t x114 = -1LL;
uint16_t x117 = 12630U;
int32_t x131 = INT32_MAX;
int32_t x132 = 135;
volatile int16_t x146 = -1;
int64_t x147 = INT64_MIN;
static int64_t t35 = -209721480638252LL;
int32_t x166 = INT32_MIN;
uint64_t x168 = 673382462940866LLU;
int64_t x169 = INT64_MIN;
uint64_t x170 = UINT64_MAX;
uint64_t x172 = 6LLU;
uint8_t x176 = UINT8_MAX;
uint64_t x185 = 3LLU;
volatile int64_t x188 = INT64_MIN;
static int8_t x192 = INT8_MAX;
int32_t x194 = -1;
static int64_t t46 = 165LL;
volatile uint32_t x213 = 766844667U;
volatile uint32_t t48 = 4852183U;
volatile int32_t x217 = INT32_MIN;
uint8_t x219 = 1U;
int8_t x223 = INT8_MIN;
volatile int64_t x224 = INT64_MIN;
volatile int64_t t50 = -33227254116LL;
uint32_t x227 = UINT32_MAX;
int64_t x229 = INT64_MAX;
volatile int64_t t52 = 6980754540809LL;
int64_t x235 = INT64_MIN;
int32_t x236 = -1;
static int64_t t53 = -3143359100334LL;
uint64_t x243 = 797220LLU;
int16_t x247 = 3928;
uint16_t x249 = 1336U;
volatile int64_t t58 = -1555159695LL;
static volatile int32_t x257 = -43;
static int8_t x258 = -2;
uint8_t x261 = 43U;
static int32_t x263 = INT32_MIN;
static int32_t t60 = INT32_MIN;
int16_t x266 = INT16_MIN;
uint32_t t61 = 15U;
volatile int16_t x273 = INT16_MAX;
int8_t x276 = 1;
uint64_t x277 = 6594930296LLU;
int64_t x278 = -1LL;
int64_t x280 = INT64_MIN;
volatile uint8_t x282 = 12U;
uint64_t t66 = 1410774LLU;
volatile uint64_t x312 = UINT64_MAX;
int64_t x313 = 86LL;
int32_t x314 = INT32_MAX;
static volatile int64_t t75 = 2454849390006996LL;
uint16_t x329 = UINT16_MAX;
volatile int64_t t77 = -14LL;
volatile uint32_t x333 = UINT32_MAX;
volatile uint64_t t78 = 264116LLU;
uint64_t x338 = UINT64_MAX;
int16_t x339 = INT16_MAX;
volatile int64_t x340 = -1LL;
int16_t x342 = -2598;
volatile int32_t t80 = 36818;
static int64_t x356 = 1LL;
volatile uint64_t t83 = 23223LLU;
uint8_t x366 = 11U;
volatile uint32_t x370 = UINT32_MAX;
static volatile uint64_t x371 = UINT64_MAX;
static int64_t x379 = INT64_MAX;
int16_t x393 = 1;
volatile uint64_t t90 = 1972850LLU;
volatile int8_t x399 = 30;
volatile int32_t x410 = -138200;
static int64_t t94 = -434872169498926LL;
int8_t x423 = 1;
uint8_t x425 = UINT8_MAX;
int8_t x426 = INT8_MIN;
uint8_t x437 = UINT8_MAX;
int64_t t99 = -620262498LL;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	volatile int64_t x2 = INT64_MIN;
	volatile int16_t x3 = INT16_MIN;
	int64_t x4 = INT64_MAX;
	int64_t t0 = 57LL;

	t0 = (((x1%x2)+x3)&x4);

	if (t0 != 9223372034707259392LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	volatile int32_t x6 = -563;
	uint8_t x7 = 39U;
	static uint64_t x8 = 3024375211052LLU;

	t1 = (((x5%x6)+x7)&x8);

	if (t1 != 36LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 22U;
	int16_t x11 = INT16_MIN;
	static int64_t t2 = 5645866839LL;

	t2 = (((x9%x10)+x11)&x12);

	if (t2 != -32896LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x14 = 5U;
	int32_t x15 = INT32_MIN;
	volatile int64_t x16 = INT64_MIN;
	static int64_t t3 = INT64_MIN;

	t3 = (((x13%x14)+x15)&x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	static uint8_t x18 = UINT8_MAX;
	uint16_t x19 = 2U;
	volatile int32_t t4 = -183;

	t4 = (((x17%x18)+x19)&x20);

	if (t4 != -126) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = INT64_MAX;
	int64_t x23 = 55079128013871LL;
	int64_t x24 = -1LL;
	int64_t t5 = 1465628712915936LL;

	t5 = (((x21%x22)+x23)&x24);

	if (t5 != 55079128043851LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 22618U;
	int8_t x26 = 2;
	int8_t x27 = 0;
	int32_t t6 = 157982;

	t6 = (((x25%x26)+x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x30 = INT8_MAX;
	volatile uint8_t x32 = 16U;
	static uint64_t t7 = 1223262617LLU;

	t7 = (((x29%x30)+x31)&x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 4146U;
	int16_t x35 = -1;
	volatile uint32_t t8 = 288U;

	t8 = (((x33%x34)+x35)&x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MAX;
	int32_t x38 = 20560214;
	volatile int64_t x39 = INT64_MIN;

	t9 = (((x37%x38)+x39)&x40);

	if (t9 != 32767LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	uint64_t x42 = 253697LLU;
	uint8_t x43 = 23U;
	volatile uint64_t t10 = 22365LLU;

	t10 = (((x41%x42)+x43)&x44);

	if (t10 != 213LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	uint64_t x46 = UINT64_MAX;
	static uint8_t x48 = 40U;
	static uint64_t t11 = 47LLU;

	t11 = (((x45%x46)+x47)&x48);

	if (t11 != 8LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	volatile int16_t x50 = -433;
	int8_t x51 = INT8_MIN;
	uint8_t x52 = 4U;
	static volatile int32_t t12 = 143955578;

	t12 = (((x49%x50)+x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	int32_t x54 = -41;
	uint16_t x55 = UINT16_MAX;
	int16_t x56 = -293;
	static int32_t t13 = -335310527;

	t13 = (((x53%x54)+x55)&x56);

	if (t13 != 65242) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	uint32_t x59 = UINT32_MAX;
	uint32_t x60 = 7U;
	volatile int64_t t14 = 32766566409817LL;

	t14 = (((x57%x58)+x59)&x60);

	if (t14 != 6LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	int16_t x62 = INT16_MIN;
	int32_t x64 = INT32_MIN;
	volatile int64_t t15 = 175989233996027LL;

	t15 = (((x61%x62)+x63)&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 0;
	int8_t x66 = 2;
	static uint32_t x67 = 26U;
	static uint16_t x68 = UINT16_MAX;
	static volatile uint32_t t16 = 2324U;

	t16 = (((x65%x66)+x67)&x68);

	if (t16 != 26U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	uint8_t x70 = 2U;
	int32_t x71 = -1;
	static volatile int64_t x72 = 0LL;
	int64_t t17 = -32061819958471368LL;

	t17 = (((x69%x70)+x71)&x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = 497809640461974501LLU;
	static int32_t x75 = INT32_MIN;
	volatile uint32_t x76 = 45122133U;
	uint64_t t18 = 22307689LLU;

	t18 = (((x73%x74)+x75)&x76);

	if (t18 != 11567172LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	volatile int64_t x78 = -1LL;
	static int16_t x79 = 6388;
	volatile uint32_t x80 = 653029U;
	static volatile int64_t t19 = -103LL;

	t19 = (((x77%x78)+x79)&x80);

	if (t19 != 4324LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x83 = -43;
	int32_t x84 = INT32_MAX;
	static volatile uint64_t t20 = 737402818558LLU;

	t20 = (((x81%x82)+x83)&x84);

	if (t20 != 611574977LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = -46;
	int32_t x87 = -1;
	int32_t x88 = INT32_MAX;

	t21 = (((x85%x86)+x87)&x88);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = 5;
	int32_t x90 = INT32_MIN;
	static uint64_t x91 = UINT64_MAX;
	int16_t x92 = INT16_MIN;
	uint64_t t22 = 1991LLU;

	t22 = (((x89%x90)+x91)&x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = 15549660300LL;
	uint8_t x94 = UINT8_MAX;
	volatile uint32_t x95 = 612996717U;
	uint8_t x96 = 8U;

	t23 = (((x93%x94)+x95)&x96);

	if (t23 != 8LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = -1;
	int64_t x99 = 13785424546LL;
	int64_t t24 = -12358002LL;

	t24 = (((x97%x98)+x99)&x100);

	if (t24 != 13785424546LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 9631;
	int16_t x102 = INT16_MIN;
	int16_t x103 = INT16_MIN;
	int32_t t25 = -1404695;

	t25 = (((x101%x102)+x103)&x104);

	if (t25 != -23137) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	uint32_t x106 = 3614050U;
	int8_t x107 = INT8_MIN;
	int16_t x108 = 971;
	volatile uint32_t t26 = 765727396U;

	t26 = (((x105%x106)+x107)&x108);

	if (t26 != 971U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	int8_t x111 = INT8_MIN;
	int16_t x112 = -1;
	int64_t t27 = 55LL;

	t27 = (((x109%x110)+x111)&x112);

	if (t27 != 32639LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int64_t x115 = 164121974700LL;
	static volatile int32_t x116 = INT32_MAX;
	volatile int64_t t28 = -74726535LL;

	t28 = (((x113%x114)+x115)&x116);

	if (t28 != 913217452LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x118 = 27482230LLU;
	volatile uint16_t x119 = 54U;
	int16_t x120 = INT16_MIN;
	volatile uint64_t t29 = 1596LLU;

	t29 = (((x117%x118)+x119)&x120);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	int64_t x126 = -494LL;
	volatile uint16_t x127 = 18U;
	uint32_t x128 = 403308870U;
	volatile int64_t t30 = -17LL;

	t30 = (((x125%x126)+x127)&x128);

	if (t30 != 403308870LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = 536;
	int64_t x130 = -1LL;
	int64_t t31 = -12LL;

	t31 = (((x129%x130)+x131)&x132);

	if (t31 != 135LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x133 = 65U;
	int32_t x134 = -260;
	int16_t x135 = INT16_MIN;
	static int16_t x136 = INT16_MAX;
	volatile int32_t t32 = 0;

	t32 = (((x133%x134)+x135)&x136);

	if (t32 != 65) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MIN;
	int64_t x143 = INT64_MIN;
	int64_t x144 = INT64_MIN;
	volatile int64_t t33 = INT64_MIN;

	t33 = (((x141%x142)+x143)&x144);

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -1390LL;
	static volatile int8_t x148 = INT8_MAX;
	volatile int64_t t34 = -1652941916781LL;

	t34 = (((x145%x146)+x147)&x148);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = 213561270831LL;
	uint8_t x150 = 11U;
	static uint32_t x151 = UINT32_MAX;
	int32_t x152 = -1;

	t35 = (((x149%x150)+x151)&x152);

	if (t35 != 4294967302LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x153 = 226966136234783LL;
	volatile uint64_t x154 = 295526675LLU;
	int8_t x155 = INT8_MIN;
	int32_t x156 = INT32_MAX;
	static uint64_t t36 = 1016004954454LLU;

	t36 = (((x153%x154)+x155)&x156);

	if (t36 != 172201280LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x157 = -1LL;
	volatile int16_t x158 = INT16_MAX;
	uint8_t x159 = 91U;
	uint16_t x160 = 1016U;
	volatile int64_t t37 = -152318104791092LL;

	t37 = (((x157%x158)+x159)&x160);

	if (t37 != 88LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x165 = 2514U;
	static uint64_t x167 = 17041167342LLU;
	uint64_t t38 = 3LLU;

	t38 = (((x165%x166)+x167)&x168);

	if (t38 != 310379712LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x171 = 14038037U;
	static volatile uint64_t t39 = 402534620LLU;

	t39 = (((x169%x170)+x171)&x172);

	if (t39 != 4LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = -1LL;
	static volatile int16_t x174 = INT16_MIN;
	static int16_t x175 = INT16_MIN;
	int64_t t40 = 3781LL;

	t40 = (((x173%x174)+x175)&x176);

	if (t40 != 255LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x177 = -6402;
	int8_t x178 = INT8_MIN;
	int64_t x179 = -7008955784LL;
	int64_t x180 = 40868LL;
	volatile int64_t t41 = 4165LL;

	t41 = (((x177%x178)+x179)&x180);

	if (t41 != 37412LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x186 = INT32_MIN;
	volatile uint16_t x187 = 222U;
	uint64_t t42 = 458561673214425799LLU;

	t42 = (((x185%x186)+x187)&x188);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x189 = -3;
	uint64_t x190 = 561506LLU;
	static volatile int8_t x191 = 1;
	volatile uint64_t t43 = 304697461889916633LLU;

	t43 = (((x189%x190)+x191)&x192);

	if (t43 != 4LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = 0;
	uint32_t x195 = 2530693U;
	volatile uint64_t x196 = UINT64_MAX;
	uint64_t t44 = 2344LLU;

	t44 = (((x193%x194)+x195)&x196);

	if (t44 != 2530693LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = INT64_MIN;
	static int8_t x202 = INT8_MAX;
	static uint16_t x203 = 31U;
	int64_t x204 = INT64_MIN;
	int64_t t45 = 413092322457821261LL;

	t45 = (((x201%x202)+x203)&x204);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = INT64_MIN;
	uint32_t x206 = UINT32_MAX;
	uint8_t x207 = 0U;
	uint32_t x208 = 3950U;

	t46 = (((x205%x206)+x207)&x208);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x209 = UINT16_MAX;
	uint32_t x210 = 106772776U;
	static uint64_t x211 = 62168126608281LLU;
	int8_t x212 = INT8_MIN;
	uint64_t t47 = 183601LLU;

	t47 = (((x209%x210)+x211)&x212);

	if (t47 != 62168126673792LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x214 = 7;
	volatile int8_t x215 = INT8_MIN;
	int32_t x216 = INT32_MIN;

	t48 = (((x213%x214)+x215)&x216);

	if (t48 != 2147483648U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x218 = INT32_MAX;
	uint8_t x220 = UINT8_MAX;
	int32_t t49 = 29176650;

	t49 = (((x217%x218)+x219)&x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = 1445;
	uint8_t x222 = UINT8_MAX;

	t50 = (((x221%x222)+x223)&x224);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = -1LL;
	uint16_t x226 = UINT16_MAX;
	static uint8_t x228 = 1U;
	volatile int64_t t51 = 171781779515516458LL;

	t51 = (((x225%x226)+x227)&x228);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x230 = UINT16_MAX;
	int16_t x231 = -1;
	static uint8_t x232 = 27U;

	t52 = (((x229%x230)+x231)&x232);

	if (t52 != 26LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x233 = 2U;
	int64_t x234 = -2836968529171280LL;

	t53 = (((x233%x234)+x235)&x236);

	if (t53 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x237 = 27388245LLU;
	uint64_t x238 = 135278599382937738LLU;
	int64_t x239 = 802463382438664LL;
	int16_t x240 = INT16_MIN;
	volatile uint64_t t54 = 802305LLU;

	t54 = (((x237%x238)+x239)&x240);

	if (t54 != 802463409799168LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = 638;
	static uint32_t x242 = 23569U;
	volatile int64_t x244 = 187331LL;
	uint64_t t55 = 9LLU;

	t55 = (((x241%x242)+x243)&x244);

	if (t55 != 2178LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = -1;
	int16_t x246 = -1;
	static int8_t x248 = 16;
	int32_t t56 = -28612427;

	t56 = (((x245%x246)+x247)&x248);

	if (t56 != 16) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x250 = -1LL;
	int16_t x251 = INT16_MIN;
	static volatile uint8_t x252 = 0U;
	volatile int64_t t57 = 770LL;

	t57 = (((x249%x250)+x251)&x252);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = UINT16_MAX;
	static volatile int32_t x254 = 1306;
	volatile int16_t x255 = -223;
	int64_t x256 = INT64_MAX;

	t58 = (((x253%x254)+x255)&x256);

	if (t58 != 12LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x259 = 738172521473195856LLU;
	static uint16_t x260 = 17U;
	volatile uint64_t t59 = 12843923803LLU;

	t59 = (((x257%x258)+x259)&x260);

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x262 = -3;
	int8_t x264 = INT8_MIN;

	t60 = (((x261%x262)+x263)&x264);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = INT16_MAX;
	uint32_t x267 = UINT32_MAX;
	volatile uint8_t x268 = 2U;

	t61 = (((x265%x266)+x267)&x268);

	if (t61 != 2U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = 26294088LLU;
	int8_t x270 = -1;
	int32_t x271 = 289;
	uint32_t x272 = 109816U;
	volatile uint64_t t62 = 66613466204LLU;

	t62 = (((x269%x270)+x271)&x272);

	if (t62 != 75880LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x274 = INT16_MIN;
	uint32_t x275 = 3220473U;
	uint32_t t63 = 401U;

	t63 = (((x273%x274)+x275)&x276);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x279 = INT8_MAX;
	volatile uint64_t t64 = 4LLU;

	t64 = (((x277%x278)+x279)&x280);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x281 = 1112U;
	uint64_t x283 = 509111154LLU;
	int64_t x284 = INT64_MIN;
	uint64_t t65 = 232244127331637LLU;

	t65 = (((x281%x282)+x283)&x284);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x285 = INT64_MAX;
	volatile int8_t x286 = -3;
	volatile int8_t x287 = -21;
	uint64_t x288 = 471578393346850941LLU;

	t66 = (((x285%x286)+x287)&x288);

	if (t66 != 471578393346850924LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x289 = INT32_MAX;
	uint8_t x290 = 6U;
	volatile int8_t x291 = -1;
	int16_t x292 = -1;
	static volatile int32_t t67 = -2364870;

	t67 = (((x289%x290)+x291)&x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x293 = -1;
	int64_t x294 = INT64_MAX;
	static uint32_t x295 = UINT32_MAX;
	static int16_t x296 = -1;
	int64_t t68 = -243206374472672242LL;

	t68 = (((x293%x294)+x295)&x296);

	if (t68 != 4294967294LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x297 = INT32_MIN;
	int8_t x298 = INT8_MIN;
	int16_t x299 = INT16_MIN;
	int64_t x300 = INT64_MIN;
	int64_t t69 = INT64_MIN;

	t69 = (((x297%x298)+x299)&x300);

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x301 = -23;
	volatile int64_t x302 = INT64_MIN;
	static int16_t x303 = INT16_MAX;
	uint16_t x304 = UINT16_MAX;
	static int64_t t70 = 5838LL;

	t70 = (((x301%x302)+x303)&x304);

	if (t70 != 32744LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x305 = UINT32_MAX;
	volatile int32_t x306 = INT32_MIN;
	int64_t x307 = 80969084LL;
	static int8_t x308 = INT8_MIN;
	int64_t t71 = -18943676990740363LL;

	t71 = (((x305%x306)+x307)&x308);

	if (t71 != 2228452608LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x309 = 1168U;
	static int32_t x310 = -550;
	int32_t x311 = -123221;
	volatile uint64_t t72 = 372876499011515LLU;

	t72 = (((x309%x310)+x311)&x312);

	if (t72 != 18446744073709428463LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x315 = 16816922434340LLU;
	static int64_t x316 = INT64_MAX;
	static volatile uint64_t t73 = 2086357072243605632LLU;

	t73 = (((x313%x314)+x315)&x316);

	if (t73 != 16816922434426LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = -1;
	uint32_t x318 = 12208U;
	int64_t x319 = -394628590591956848LL;
	int8_t x320 = INT8_MIN;
	volatile int64_t t74 = -32350262768050LL;

	t74 = (((x317%x318)+x319)&x320);

	if (t74 != -394628590591947136LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = INT8_MAX;
	int64_t x322 = INT64_MIN;
	int64_t x323 = 305LL;
	static uint8_t x324 = UINT8_MAX;

	t75 = (((x321%x322)+x323)&x324);

	if (t75 != 176LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = INT64_MAX;
	int16_t x327 = -1;
	int32_t x328 = INT32_MIN;
	int64_t t76 = 0LL;

	t76 = (((x325%x326)+x327)&x328);

	if (t76 != -4294967296LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x330 = INT64_MIN;
	static int64_t x331 = -312141161773LL;
	uint16_t x332 = UINT16_MAX;

	t77 = (((x329%x330)+x331)&x332);

	if (t77 != 56018LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x334 = INT32_MIN;
	volatile int64_t x335 = INT64_MIN;
	static uint64_t x336 = 6988595586894148845LLU;

	t78 = (((x333%x334)+x335)&x336);

	if (t78 != 1001403629LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x337 = 219615941U;
	static volatile uint64_t t79 = 15568659417220LLU;

	t79 = (((x337%x338)+x339)&x340);

	if (t79 != 219648708LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = -1;
	volatile int16_t x343 = INT16_MIN;
	int8_t x344 = 3;

	t80 = (((x341%x342)+x343)&x344);

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x345 = 3099U;
	volatile uint32_t x346 = UINT32_MAX;
	static int32_t x347 = -802990;
	int8_t x348 = 1;
	volatile uint32_t t81 = 1282U;

	t81 = (((x345%x346)+x347)&x348);

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x353 = INT64_MIN;
	volatile uint16_t x354 = 3U;
	uint64_t x355 = 12647245673LLU;
	static uint64_t t82 = 64011LLU;

	t82 = (((x353%x354)+x355)&x356);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x361 = 14616613657211LLU;
	uint32_t x362 = 255548832U;
	int32_t x363 = INT32_MAX;
	int16_t x364 = -1;

	t83 = (((x361%x362)+x363)&x364);

	if (t83 != 2390145786LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x365 = INT32_MIN;
	int64_t x367 = -115892566855892865LL;
	uint16_t x368 = 41U;
	volatile int64_t t84 = 60801398327439LL;

	t84 = (((x365%x366)+x367)&x368);

	if (t84 != 41LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x369 = UINT64_MAX;
	volatile int16_t x372 = -19;
	volatile uint64_t t85 = 12LLU;

	t85 = (((x369%x370)+x371)&x372);

	if (t85 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x373 = -1;
	int8_t x374 = -1;
	int32_t x375 = INT32_MAX;
	uint32_t x376 = 163696U;
	static uint32_t t86 = 1512U;

	t86 = (((x373%x374)+x375)&x376);

	if (t86 != 163696U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x377 = INT32_MIN;
	int16_t x378 = INT16_MAX;
	static volatile uint32_t x380 = 3U;
	int64_t t87 = -7LL;

	t87 = (((x377%x378)+x379)&x380);

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x381 = 5992043324232181809LLU;
	int16_t x382 = INT16_MAX;
	uint64_t x383 = UINT64_MAX;
	uint8_t x384 = 9U;
	volatile uint64_t t88 = 50533779918458236LLU;

	t88 = (((x381%x382)+x383)&x384);

	if (t88 != 9LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x385 = INT8_MAX;
	uint16_t x386 = 8U;
	int32_t x387 = -1654;
	static uint32_t x388 = 829276584U;
	static uint32_t t89 = 9543U;

	t89 = (((x385%x386)+x387)&x388);

	if (t89 != 829276544U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x394 = UINT8_MAX;
	volatile uint64_t x395 = 11273LLU;
	int32_t x396 = INT32_MIN;

	t90 = (((x393%x394)+x395)&x396);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x397 = 421U;
	uint64_t x398 = 16LLU;
	uint32_t x400 = 4872517U;
	volatile uint64_t t91 = 11714LLU;

	t91 = (((x397%x398)+x399)&x400);

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x405 = UINT16_MAX;
	static int16_t x406 = -251;
	static volatile uint32_t x407 = 55800U;
	int32_t x408 = INT32_MAX;
	uint32_t t92 = 63950019U;

	t92 = (((x405%x406)+x407)&x408);

	if (t92 != 55824U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x409 = UINT8_MAX;
	volatile int8_t x411 = INT8_MAX;
	volatile int16_t x412 = INT16_MAX;
	volatile int32_t t93 = 52385;

	t93 = (((x409%x410)+x411)&x412);

	if (t93 != 382) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x413 = 89U;
	static int8_t x414 = 7;
	static uint32_t x415 = UINT32_MAX;
	static volatile int64_t x416 = -1LL;

	t94 = (((x413%x414)+x415)&x416);

	if (t94 != 4LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x417 = 547U;
	static uint8_t x418 = 37U;
	int8_t x419 = INT8_MIN;
	int32_t x420 = INT32_MIN;
	int32_t t95 = INT32_MIN;

	t95 = (((x417%x418)+x419)&x420);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x421 = INT32_MIN;
	int8_t x422 = 1;
	volatile int16_t x424 = INT16_MIN;
	static int32_t t96 = -64153;

	t96 = (((x421%x422)+x423)&x424);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x427 = UINT32_MAX;
	static int8_t x428 = -1;
	volatile uint32_t t97 = 26U;

	t97 = (((x425%x426)+x427)&x428);

	if (t97 != 126U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x433 = INT64_MIN;
	volatile int16_t x434 = INT16_MIN;
	int8_t x435 = INT8_MIN;
	int16_t x436 = 21;
	int64_t t98 = 2018803976099377255LL;

	t98 = (((x433%x434)+x435)&x436);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x438 = -141;
	int64_t x439 = INT64_MIN;
	int8_t x440 = 25;

	t99 = (((x437%x438)+x439)&x440);

	if (t99 != 16LL) { NG(); } else { ; }
	
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

