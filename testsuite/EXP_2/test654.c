#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 328983965LL;
uint8_t x12 = 3U;
uint8_t x15 = 3U;
int32_t x18 = -508501;
volatile int64_t x22 = 1887413506990LL;
int64_t t8 = -12232LL;
uint8_t x38 = UINT8_MAX;
static int8_t x44 = -1;
volatile int64_t t11 = 29926870250333LL;
volatile int32_t x52 = -1;
int64_t t12 = 12024844260LL;
int16_t x62 = INT16_MAX;
static int8_t x67 = INT8_MIN;
uint8_t x71 = 10U;
volatile int64_t t17 = -25931411536LL;
static int16_t x77 = INT16_MIN;
uint8_t x82 = 2U;
uint8_t x88 = UINT8_MAX;
uint32_t x89 = UINT32_MAX;
int16_t x92 = -1;
static volatile uint32_t t22 = 3U;
static volatile int64_t x94 = INT64_MIN;
uint64_t x95 = UINT64_MAX;
static volatile int64_t x100 = INT64_MAX;
int8_t x109 = INT8_MIN;
volatile uint64_t t27 = 14111892LLU;
volatile int8_t x124 = INT8_MIN;
int64_t x133 = 2228LL;
int32_t x136 = -249758;
volatile uint64_t x139 = 351862469260LLU;
int32_t x142 = -1;
int32_t t35 = 12391;
int16_t x146 = -1645;
int32_t x150 = -1;
int64_t x153 = INT64_MAX;
uint32_t t42 = 21346U;
int32_t x178 = -204;
volatile uint64_t t43 = 50342976225707LLU;
uint32_t x181 = 15315538U;
int16_t x184 = 238;
volatile uint32_t t44 = 26646U;
int32_t x185 = -1;
volatile uint64_t t45 = 3006474119LLU;
int8_t x189 = -14;
uint16_t x190 = 364U;
int64_t x191 = INT64_MIN;
int8_t x194 = INT8_MIN;
int64_t x204 = -1LL;
volatile int64_t t49 = 2454382944LL;
volatile int64_t x205 = INT64_MIN;
int64_t x208 = 241107586286087LL;
volatile uint32_t t52 = 37473829U;
uint16_t x219 = 120U;
int16_t x221 = 522;
static int8_t x224 = INT8_MIN;
uint64_t t54 = 0LLU;
int64_t t55 = -8343387973597835LL;
int8_t x230 = 3;
int64_t t59 = 502121614466LL;
volatile int16_t x245 = INT16_MIN;
volatile uint32_t t60 = 28690U;
int32_t x253 = INT32_MIN;
static int64_t x254 = -326225330LL;
uint32_t x255 = 286026884U;
uint8_t x265 = 64U;
uint64_t x269 = UINT64_MAX;
volatile int8_t x275 = INT8_MIN;
static int16_t x277 = INT16_MIN;
uint64_t x278 = UINT64_MAX;
int32_t x280 = INT32_MIN;
uint64_t t68 = 238LLU;
int64_t x291 = -4253702968748005LL;
volatile int32_t x293 = INT32_MAX;
uint16_t x300 = 2006U;
int32_t t72 = -541;
int64_t x301 = -1LL;
int16_t x306 = -1;
int16_t x316 = -1;
int32_t t75 = 37285;
int16_t x319 = INT16_MAX;
volatile int32_t x326 = -125448235;
int32_t x335 = INT32_MAX;
volatile int32_t t79 = 4;
int16_t x342 = INT16_MIN;
int32_t x350 = 374928477;
uint16_t x353 = 5U;
volatile int8_t x354 = -1;
volatile uint64_t t84 = 499LLU;
int64_t x365 = INT64_MAX;
uint8_t x366 = UINT8_MAX;
static uint32_t x374 = UINT32_MAX;
volatile int32_t t91 = -3491050;
int32_t x389 = 6579478;
int32_t x391 = 681;
int8_t x401 = INT8_MIN;
volatile int64_t t94 = 189505957746968LL;
int32_t x413 = -1;
int32_t x417 = -27;
uint8_t x419 = UINT8_MAX;
int32_t x422 = INT32_MIN;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	int64_t x2 = -63828LL;
	static int16_t x3 = INT16_MIN;
	static int32_t x4 = 2;

	t0 = ((x1|(x2/x3))/x4);

	if (t0 != -1073741823LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 260951U;
	int16_t x6 = INT16_MAX;
	volatile int64_t x7 = INT64_MIN;
	volatile uint16_t x8 = UINT16_MAX;
	static int64_t t1 = -4LL;

	t1 = ((x5|(x6/x7))/x8);

	if (t1 != 3LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint32_t x10 = UINT32_MAX;
	int8_t x11 = -1;
	volatile uint32_t t2 = 804676U;

	t2 = ((x9|(x10/x11))/x12);

	if (t2 != 1431655765U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 14;
	int32_t x14 = -1;
	uint32_t x16 = 3U;
	static uint32_t t3 = 29528146U;

	t3 = ((x13|(x14/x15))/x16);

	if (t3 != 4U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 76LLU;
	int16_t x19 = -1;
	volatile uint16_t x20 = 461U;
	uint64_t t4 = 424047814LLU;

	t4 = ((x17|(x18/x19))/x20);

	if (t4 != 1103LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 1U;
	volatile int16_t x23 = -652;
	static int16_t x24 = 1;
	volatile int64_t t5 = 596376734208LL;

	t5 = ((x21|(x22/x23))/x24);

	if (t5 != -2894805991LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	volatile uint16_t x26 = 96U;
	static int32_t x27 = INT32_MIN;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -13;

	t6 = ((x25|(x26/x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	volatile int64_t x30 = 340871LL;
	uint64_t x31 = 13966321026758LLU;
	volatile int16_t x32 = -1;
	uint64_t t7 = 84862LLU;

	t7 = ((x29|(x30/x31))/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -3;
	uint8_t x34 = 5U;
	volatile int64_t x35 = -1LL;
	volatile int32_t x36 = -1;

	t8 = ((x33|(x34/x35))/x36);

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -54;
	int32_t x39 = INT32_MIN;
	int32_t x40 = -1;
	int32_t t9 = -98242;

	t9 = ((x37|(x38/x39))/x40);

	if (t9 != 54) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int64_t x42 = INT64_MIN;
	uint32_t x43 = 12U;
	volatile int64_t t10 = 31456900362LL;

	t10 = ((x41|(x42/x43))/x44);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MAX;
	int32_t x46 = -1;
	int64_t x47 = INT64_MIN;
	uint32_t x48 = UINT32_MAX;

	t11 = ((x45|(x46/x47))/x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = 6744;
	int64_t x50 = 1LL;
	int16_t x51 = INT16_MAX;

	t12 = ((x49|(x50/x51))/x52);

	if (t12 != -6744LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 5749932LLU;
	int64_t x54 = INT64_MIN;
	uint16_t x55 = 3U;
	volatile int16_t x56 = INT16_MIN;
	volatile uint64_t t13 = 12521489630LLU;

	t13 = ((x53|(x54/x55))/x56);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = -1;
	int8_t x58 = INT8_MIN;
	uint16_t x59 = 939U;
	uint32_t x60 = UINT32_MAX;
	static uint32_t t14 = 257U;

	t14 = ((x57|(x58/x59))/x60);

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = 28;
	static volatile int8_t x63 = -1;
	static volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = -2430110;

	t15 = ((x61|(x62/x63))/x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	volatile uint32_t x66 = UINT32_MAX;
	uint16_t x68 = UINT16_MAX;
	volatile uint32_t t16 = 116093U;

	t16 = ((x65|(x66/x67))/x68);

	if (t16 != 65537U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -609453932753LL;
	int64_t x70 = -7105193651LL;
	uint32_t x72 = 447420U;

	t17 = ((x69|(x70/x71))/x72);

	if (t17 != -1285LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 0U;
	volatile uint16_t x74 = 1449U;
	int32_t x75 = -1;
	volatile int8_t x76 = INT8_MAX;
	int32_t t18 = 43260867;

	t18 = ((x73|(x74/x75))/x76);

	if (t18 != -11) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -1;
	volatile int32_t x79 = INT32_MAX;
	int8_t x80 = -1;
	static volatile int32_t t19 = -12537;

	t19 = ((x77|(x78/x79))/x80);

	if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 45588U;
	volatile int32_t x83 = 30457;
	uint8_t x84 = UINT8_MAX;
	volatile uint32_t t20 = 31872302U;

	t20 = ((x81|(x82/x83))/x84);

	if (t20 != 178U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = INT64_MAX;
	int8_t x86 = 4;
	int16_t x87 = -13;
	int64_t t21 = -2617950007276839LL;

	t21 = ((x85|(x86/x87))/x88);

	if (t21 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MAX;
	uint16_t x91 = 25564U;

	t22 = ((x89|(x90/x91))/x92);

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 21240314440LLU;
	int32_t x96 = INT32_MAX;
	uint64_t t23 = 82776196922221778LLU;

	t23 = ((x93|(x94/x95))/x96);

	if (t23 != 9LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -650855LL;
	static volatile int32_t x98 = INT32_MIN;
	int8_t x99 = -7;
	int64_t t24 = -39340806136LL;

	t24 = ((x97|(x98/x99))/x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 4902477U;
	uint64_t x102 = UINT64_MAX;
	int16_t x103 = -1;
	int64_t x104 = INT64_MIN;
	static uint64_t t25 = 2378236LLU;

	t25 = ((x101|(x102/x103))/x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = 854677773U;
	int8_t x106 = INT8_MIN;
	int16_t x107 = -1699;
	uint32_t x108 = UINT32_MAX;
	uint32_t t26 = 5476U;

	t26 = ((x105|(x106/x107))/x108);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = INT64_MIN;
	int8_t x111 = INT8_MIN;
	uint64_t x112 = 177251LLU;

	t27 = ((x109|(x110/x111))/x112);

	if (t27 != 104071311720157LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -480114401;
	int64_t x114 = -1LL;
	int32_t x115 = INT32_MAX;
	int32_t x116 = INT32_MAX;
	int64_t t28 = -3249172237170010LL;

	t28 = ((x113|(x114/x115))/x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -42014290LL;
	static uint16_t x118 = UINT16_MAX;
	static uint16_t x119 = 858U;
	volatile uint64_t x120 = 15443262LLU;
	volatile uint64_t t29 = 573LLU;

	t29 = ((x117|(x118/x119))/x120);

	if (t29 != 1194484952315LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = 17017886LLU;
	static uint16_t x122 = 77U;
	int32_t x123 = -1;
	uint64_t t30 = 15285819LLU;

	t30 = ((x121|(x122/x123))/x124);

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	int16_t x126 = -533;
	int32_t x127 = 424338;
	static int64_t x128 = -1LL;
	static volatile int64_t t31 = -1131816191LL;

	t31 = ((x125|(x126/x127))/x128);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MIN;
	volatile int8_t x130 = INT8_MIN;
	int32_t x131 = 288;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t32 = 0;

	t32 = ((x129|(x130/x131))/x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = 5;
	static int64_t x135 = INT64_MIN;
	volatile int64_t t33 = 20336285975LL;

	t33 = ((x133|(x134/x135))/x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 26U;
	static volatile uint16_t x138 = UINT16_MAX;
	volatile uint32_t x140 = 5906184U;
	uint64_t t34 = 409257721LLU;

	t34 = ((x137|(x138/x139))/x140);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	volatile int32_t x143 = INT32_MIN;
	int32_t x144 = -1;

	t35 = ((x141|(x142/x143))/x144);

	if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	static uint8_t x147 = UINT8_MAX;
	int64_t x148 = 9408923373LL;
	int64_t t36 = 47007354668771LL;

	t36 = ((x145|(x146/x147))/x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -472;
	static volatile int64_t x151 = INT64_MIN;
	static int8_t x152 = INT8_MIN;
	int64_t t37 = -67310557085069LL;

	t37 = ((x149|(x150/x151))/x152);

	if (t37 != 3LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = -1;
	int32_t x155 = -1;
	int32_t x156 = INT32_MAX;
	volatile int64_t t38 = -416990LL;

	t38 = ((x153|(x154/x155))/x156);

	if (t38 != 4294967298LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	int32_t x158 = INT32_MIN;
	static volatile uint64_t x159 = 3064616478018LLU;
	volatile int16_t x160 = INT16_MIN;
	uint64_t t39 = 29LLU;

	t39 = ((x157|(x158/x159))/x160);

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = INT16_MIN;
	volatile int64_t x162 = INT64_MIN;
	int32_t x163 = INT32_MIN;
	int16_t x164 = 4207;
	int64_t t40 = -494454213101LL;

	t40 = ((x161|(x162/x163))/x164);

	if (t40 != -7LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MAX;
	static int16_t x166 = -1;
	int8_t x167 = -44;
	uint8_t x168 = 3U;
	int32_t t41 = 121719049;

	t41 = ((x165|(x166/x167))/x168);

	if (t41 != 42) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MIN;
	uint32_t x174 = 6U;
	int32_t x175 = 3;
	static int32_t x176 = 54;

	t42 = ((x173|(x174/x175))/x176);

	if (t42 != 39768215U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = -609537341;
	volatile int32_t x179 = 6975220;
	volatile uint64_t x180 = UINT64_MAX;

	t43 = ((x177|(x178/x179))/x180);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x182 = INT32_MIN;
	static uint8_t x183 = 3U;

	t44 = ((x181|(x182/x183))/x184);

	if (t44 != 15084835U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x186 = 896000866LLU;
	volatile uint64_t x187 = 1080294020071362LLU;
	int8_t x188 = INT8_MIN;

	t45 = ((x185|(x186/x187))/x188);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x192 = -1;
	int64_t t46 = 1168819969721898380LL;

	t46 = ((x189|(x190/x191))/x192);

	if (t46 != 14LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x193 = 23U;
	uint32_t x195 = 274879031U;
	int32_t x196 = INT32_MIN;
	volatile uint32_t t47 = 261417U;

	t47 = ((x193|(x194/x195))/x196);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = UINT8_MAX;
	int64_t x198 = INT64_MAX;
	static uint64_t x199 = UINT64_MAX;
	uint8_t x200 = 22U;
	uint64_t t48 = 14195952875038547LLU;

	t48 = ((x197|(x198/x199))/x200);

	if (t48 != 11LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x201 = INT16_MIN;
	volatile int16_t x202 = INT16_MIN;
	int8_t x203 = -22;

	t49 = ((x201|(x202/x203))/x204);

	if (t49 != 31279LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x206 = INT32_MIN;
	volatile int64_t x207 = -8853218849261698LL;
	int64_t t50 = 4148272LL;

	t50 = ((x205|(x206/x207))/x208);

	if (t50 != -38254LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x209 = 7U;
	int32_t x210 = -24;
	static int32_t x211 = 948;
	volatile uint32_t x212 = UINT32_MAX;
	uint32_t t51 = 942420U;

	t51 = ((x209|(x210/x211))/x212);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MIN;
	uint32_t x214 = 266165U;
	static int8_t x215 = INT8_MIN;
	int16_t x216 = -1;

	t52 = ((x213|(x214/x215))/x216);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = 3766;
	volatile int64_t x218 = 18921611847647915LL;
	int32_t x220 = INT32_MIN;
	static volatile int64_t t53 = -2234LL;

	t53 = ((x217|(x218/x219))/x220);

	if (t53 != -73425LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x222 = UINT8_MAX;
	uint64_t x223 = 6258119636355064872LLU;

	t54 = ((x221|(x222/x223))/x224);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MIN;
	volatile int8_t x226 = INT8_MAX;
	int16_t x227 = INT16_MAX;
	int8_t x228 = INT8_MIN;

	t55 = ((x225|(x226/x227))/x228);

	if (t55 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x229 = 0U;
	volatile int64_t x231 = INT64_MAX;
	volatile int32_t x232 = INT32_MIN;
	int64_t t56 = 78729321998946LL;

	t56 = ((x229|(x230/x231))/x232);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x233 = 78U;
	static int16_t x234 = 11;
	int64_t x235 = -1LL;
	int32_t x236 = INT32_MAX;
	volatile int64_t t57 = 17343282023290LL;

	t57 = ((x233|(x234/x235))/x236);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x237 = 16;
	int8_t x238 = -1;
	int64_t x239 = -1LL;
	int8_t x240 = INT8_MAX;
	volatile int64_t t58 = 182913LL;

	t58 = ((x237|(x238/x239))/x240);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MIN;
	volatile int64_t x242 = -1LL;
	int8_t x243 = INT8_MIN;
	uint8_t x244 = 3U;

	t59 = ((x241|(x242/x243))/x244);

	if (t59 != -42LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x246 = 349593U;
	static uint8_t x247 = UINT8_MAX;
	int32_t x248 = INT32_MIN;

	t60 = ((x245|(x246/x247))/x248);

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x249 = UINT64_MAX;
	int8_t x250 = INT8_MAX;
	volatile uint64_t x251 = UINT64_MAX;
	static int32_t x252 = INT32_MAX;
	uint64_t t61 = 96658531432616731LLU;

	t61 = ((x249|(x250/x251))/x252);

	if (t61 != 8589934596LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x256 = INT16_MIN;
	static int64_t t62 = -481857634713530LL;

	t62 = ((x253|(x254/x255))/x256);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = INT16_MIN;
	static uint8_t x262 = UINT8_MAX;
	volatile uint64_t x263 = 110326734768LLU;
	uint32_t x264 = UINT32_MAX;
	static volatile uint64_t t63 = 1335520433350LLU;

	t63 = ((x261|(x262/x263))/x264);

	if (t63 != 4294967296LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x266 = -19678;
	int32_t x267 = -1;
	uint64_t x268 = 1721995163415LLU;
	volatile uint64_t t64 = 31351LLU;

	t64 = ((x265|(x266/x267))/x268);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x270 = -1;
	int8_t x271 = INT8_MIN;
	volatile int8_t x272 = INT8_MAX;
	uint64_t t65 = 14996392567284438LLU;

	t65 = ((x269|(x270/x271))/x272);

	if (t65 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x273 = 128LLU;
	int64_t x274 = INT64_MIN;
	static uint32_t x276 = 438U;
	uint64_t t66 = 6677216048570653726LLU;

	t66 = ((x273|(x274/x275))/x276);

	if (t66 != 164515054881114LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x279 = -1;
	uint64_t t67 = 9768820476983368LLU;

	t67 = ((x277|(x278/x279))/x280);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x281 = INT16_MIN;
	uint64_t x282 = 102838430752805619LLU;
	volatile int32_t x283 = -7160;
	int64_t x284 = -83397637LL;

	t68 = ((x281|(x282/x283))/x284);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = 200799;
	uint32_t x286 = 3598U;
	static int64_t x287 = -61625965604994574LL;
	int16_t x288 = INT16_MIN;
	int64_t t69 = -123248136873LL;

	t69 = ((x285|(x286/x287))/x288);

	if (t69 != -6LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x289 = -1;
	int64_t x290 = INT64_MIN;
	uint32_t x292 = UINT32_MAX;
	volatile int64_t t70 = -26453136LL;

	t70 = ((x289|(x290/x291))/x292);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x294 = 0;
	static int16_t x295 = INT16_MAX;
	static int32_t x296 = INT32_MAX;
	int32_t t71 = -33;

	t71 = ((x293|(x294/x295))/x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x297 = -924541215;
	int16_t x298 = 3428;
	int32_t x299 = INT32_MIN;

	t72 = ((x297|(x298/x299))/x300);

	if (t72 != -460887) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x302 = UINT64_MAX;
	uint8_t x303 = 3U;
	static int8_t x304 = 29;
	static uint64_t t73 = 106397LLU;

	t73 = ((x301|(x302/x303))/x304);

	if (t73 != 636094623231363848LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = INT8_MIN;
	static uint8_t x307 = 5U;
	int64_t x308 = INT64_MIN;
	int64_t t74 = -2033LL;

	t74 = ((x305|(x306/x307))/x308);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = INT32_MAX;
	int8_t x314 = INT8_MIN;
	uint16_t x315 = 2U;

	t75 = ((x313|(x314/x315))/x316);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x317 = UINT16_MAX;
	int16_t x318 = 389;
	int32_t x320 = -1;
	int32_t t76 = 4043;

	t76 = ((x317|(x318/x319))/x320);

	if (t76 != -65535) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = -7638;
	static volatile int8_t x327 = -63;
	int8_t x328 = 7;
	int32_t t77 = -1027786333;

	t77 = ((x325|(x326/x327))/x328);

	if (t77 != -1081) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x333 = UINT32_MAX;
	static int32_t x334 = INT32_MIN;
	static int16_t x336 = -1;
	static volatile uint32_t t78 = 8U;

	t78 = ((x333|(x334/x335))/x336);

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = -60;
	int8_t x338 = INT8_MIN;
	int8_t x339 = -1;
	static int8_t x340 = INT8_MAX;

	t79 = ((x337|(x338/x339))/x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = INT32_MIN;
	static int32_t x343 = INT32_MAX;
	int64_t x344 = INT64_MIN;
	int64_t t80 = -84575960LL;

	t80 = ((x341|(x342/x343))/x344);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x345 = 191;
	uint16_t x346 = 11U;
	volatile int32_t x347 = INT32_MIN;
	int8_t x348 = -1;
	volatile int32_t t81 = 1219164;

	t81 = ((x345|(x346/x347))/x348);

	if (t81 != -191) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x349 = 3U;
	int64_t x351 = 13360971836LL;
	int16_t x352 = -2122;
	int64_t t82 = -8641858697234LL;

	t82 = ((x349|(x350/x351))/x352);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x355 = UINT16_MAX;
	int16_t x356 = INT16_MAX;
	static volatile int32_t t83 = -20060331;

	t83 = ((x353|(x354/x355))/x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x357 = 111050819093120LLU;
	uint64_t x358 = 537451LLU;
	static int8_t x359 = INT8_MIN;
	int32_t x360 = INT32_MIN;

	t84 = ((x357|(x358/x359))/x360);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x361 = UINT64_MAX;
	static uint16_t x362 = 5U;
	uint16_t x363 = UINT16_MAX;
	static uint64_t x364 = 384LLU;
	volatile uint64_t t85 = 2LLU;

	t85 = ((x361|(x362/x363))/x364);

	if (t85 != 48038396025285290LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x367 = UINT32_MAX;
	uint32_t x368 = 439616U;
	int64_t t86 = -24851732186661LL;

	t86 = ((x365|(x366/x367))/x368);

	if (t86 != 20980519446186LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x369 = 9U;
	uint16_t x370 = 14994U;
	int32_t x371 = INT32_MAX;
	int64_t x372 = INT64_MIN;
	volatile int64_t t87 = -1372465791LL;

	t87 = ((x369|(x370/x371))/x372);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x373 = -1;
	volatile int64_t x375 = INT64_MAX;
	int32_t x376 = -1;
	static int64_t t88 = 249560LL;

	t88 = ((x373|(x374/x375))/x376);

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x377 = -1;
	uint16_t x378 = 13946U;
	uint32_t x379 = UINT32_MAX;
	static uint32_t x380 = 545U;
	uint32_t t89 = 1711436871U;

	t89 = ((x377|(x378/x379))/x380);

	if (t89 != 7880673U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x381 = -12;
	static uint64_t x382 = UINT64_MAX;
	volatile int64_t x383 = -1LL;
	static uint64_t x384 = 511660973047114LLU;
	volatile uint64_t t90 = 247809678095985736LLU;

	t90 = ((x381|(x382/x383))/x384);

	if (t90 != 36052LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x385 = UINT16_MAX;
	static int32_t x386 = INT32_MIN;
	int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MAX;

	t91 = ((x385|(x386/x387))/x388);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x390 = 1;
	int64_t x392 = INT64_MIN;
	static volatile int64_t t92 = 7864500270775117LL;

	t92 = ((x389|(x390/x391))/x392);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x393 = UINT8_MAX;
	int16_t x394 = -1;
	int8_t x395 = 9;
	int32_t x396 = -1;
	volatile int32_t t93 = -484071320;

	t93 = ((x393|(x394/x395))/x396);

	if (t93 != -255) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x402 = INT16_MIN;
	static uint8_t x403 = UINT8_MAX;
	int64_t x404 = 54796479LL;

	t94 = ((x401|(x402/x403))/x404);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x405 = INT8_MAX;
	uint64_t x406 = 2751694483493LLU;
	uint32_t x407 = UINT32_MAX;
	volatile int8_t x408 = -4;
	static volatile uint64_t t95 = 11282302475403325LLU;

	t95 = ((x405|(x406/x407))/x408);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x409 = INT64_MIN;
	static uint32_t x410 = 137U;
	int64_t x411 = INT64_MIN;
	int8_t x412 = INT8_MIN;
	volatile int64_t t96 = -1349662243LL;

	t96 = ((x409|(x410/x411))/x412);

	if (t96 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x414 = 375233938;
	static int16_t x415 = 90;
	volatile int32_t x416 = INT32_MIN;
	int32_t t97 = 8;

	t97 = ((x413|(x414/x415))/x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x418 = 3U;
	uint32_t x420 = 18047633U;
	volatile uint32_t t98 = 937U;

	t98 = ((x417|(x418/x419))/x420);

	if (t98 != 237U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x421 = -18;
	int32_t x423 = INT32_MIN;
	uint32_t x424 = 3532U;
	volatile uint32_t t99 = 12375699U;

	t99 = ((x421|(x422/x423))/x424);

	if (t99 != 1216015U) { NG(); } else { ; }
	
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

