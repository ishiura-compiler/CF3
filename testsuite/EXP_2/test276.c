#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MAX;
int64_t x8 = -1LL;
volatile int64_t t1 = -1LL;
int32_t x10 = INT32_MIN;
volatile int16_t x16 = -79;
uint8_t x17 = UINT8_MAX;
uint64_t x25 = 30101017LLU;
volatile int8_t x32 = 2;
volatile uint32_t x34 = 10541U;
static int8_t x40 = INT8_MIN;
int32_t t9 = 101262172;
volatile int32_t t10 = -332;
int32_t x57 = INT32_MAX;
int16_t x61 = -1;
volatile uint32_t x63 = UINT32_MAX;
static int32_t x66 = -1;
int8_t x77 = INT8_MAX;
volatile int64_t x80 = -9371553196201463LL;
volatile int64_t t17 = 38LL;
int32_t x81 = INT32_MIN;
uint64_t x85 = 318394497LLU;
static uint8_t x93 = UINT8_MAX;
static uint16_t x99 = UINT16_MAX;
volatile int32_t t22 = -474;
static volatile int32_t x107 = -3287;
static uint8_t x108 = 0U;
uint16_t x117 = UINT16_MAX;
int8_t x119 = INT8_MIN;
volatile uint16_t x123 = UINT16_MAX;
static int16_t x124 = -4946;
volatile int32_t t28 = 12140;
int8_t x130 = INT8_MIN;
volatile int32_t t29 = -917681693;
volatile int32_t t30 = -51666234;
int16_t x150 = INT16_MIN;
volatile int64_t x172 = INT64_MAX;
volatile uint64_t x178 = 105430486790506LLU;
uint64_t x180 = 7422088454643731LLU;
int64_t t40 = -13658758518225LL;
int32_t x197 = INT32_MAX;
volatile int32_t t44 = -26694396;
static volatile int64_t t45 = INT64_MIN;
volatile int32_t x214 = INT32_MIN;
int16_t x218 = -1;
volatile int32_t t47 = -1;
int32_t x226 = INT32_MIN;
int32_t x229 = -1;
static int8_t x230 = INT8_MIN;
volatile int32_t t50 = -1963882;
int8_t x233 = -1;
int32_t t51 = 43;
uint32_t t52 = UINT32_MAX;
int8_t x241 = INT8_MIN;
volatile int32_t t53 = 7154;
int16_t x245 = INT16_MIN;
static int32_t x256 = 1378810;
static int64_t x262 = INT64_MIN;
int8_t x274 = 18;
int16_t x281 = 1705;
int8_t x285 = -11;
int16_t x287 = INT16_MIN;
volatile int32_t t63 = 3478;
volatile uint16_t x301 = UINT16_MAX;
int8_t x303 = INT8_MIN;
volatile int32_t t67 = -19207;
int16_t x324 = -1;
uint8_t x329 = 13U;
int32_t x339 = INT32_MAX;
static int32_t t72 = 25204525;
volatile uint8_t x341 = 2U;
volatile int32_t x353 = INT32_MAX;
int8_t x360 = INT8_MIN;
volatile int64_t x369 = -1LL;
int64_t x371 = 1873711108018LL;
int64_t x374 = -523940085779LL;
volatile int32_t x380 = 1619;
static volatile int8_t x382 = -1;
static volatile int16_t x396 = INT16_MAX;
int64_t x398 = 1913731LL;
static uint64_t x402 = UINT64_MAX;
int16_t x403 = -2;
uint64_t x422 = 819253154916426LLU;
int32_t x425 = INT32_MIN;
int32_t t93 = -3694033;
int16_t x430 = INT16_MIN;
int32_t x431 = 111844321;
int64_t x443 = 9393LL;
int8_t x445 = -63;


void f0(void) {
	volatile int16_t x1 = -283;
	uint8_t x2 = 11U;
	static int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 19152368575LL;

	t0 = ((x1<(x2-x3))*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int32_t x6 = -1;
	int32_t x7 = INT32_MAX;

	t1 = ((x5<(x6-x7))*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -1LL;
	uint64_t x11 = UINT64_MAX;
	static int32_t x12 = INT32_MIN;
	int32_t t2 = 6408955;

	t2 = ((x9<(x10-x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -3596269085769254LL;
	uint8_t x14 = 0U;
	volatile int16_t x15 = 1202;
	volatile int32_t t3 = 123218;

	t3 = ((x13<(x14-x15))*x16);

	if (t3 != -79) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -23;
	static int8_t x19 = INT8_MIN;
	int8_t x20 = -1;
	int32_t t4 = -33426418;

	t4 = ((x17<(x18-x19))*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int64_t x22 = 763729LL;
	uint8_t x23 = 7U;
	int32_t x24 = 826632;
	static int32_t t5 = -465322;

	t5 = ((x21<(x22-x23))*x24);

	if (t5 != 826632) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MAX;
	volatile int32_t x27 = INT32_MAX;
	volatile uint8_t x28 = 20U;
	static int32_t t6 = 35504;

	t6 = ((x25<(x26-x27))*x28);

	if (t6 != 20) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 95749LLU;
	uint32_t x30 = 104U;
	int16_t x31 = INT16_MIN;
	volatile int32_t t7 = 126100546;

	t7 = ((x29<(x30-x31))*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 57U;
	int8_t x35 = INT8_MIN;
	static int32_t x36 = INT32_MIN;
	int32_t t8 = INT32_MIN;

	t8 = ((x33<(x34-x35))*x36);

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MAX;
	static int8_t x38 = 11;
	int8_t x39 = 1;

	t9 = ((x37<(x38-x39))*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 5;
	int64_t x42 = INT64_MIN;
	uint64_t x43 = UINT64_MAX;
	uint16_t x44 = 7U;

	t10 = ((x41<(x42-x43))*x44);

	if (t10 != 7) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = 44;
	int8_t x46 = 3;
	static uint32_t x47 = UINT32_MAX;
	uint32_t x48 = 18555U;
	uint32_t t11 = 30213849U;

	t11 = ((x45<(x46-x47))*x48);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = INT32_MIN;
	volatile uint16_t x54 = 17U;
	int8_t x55 = INT8_MAX;
	int8_t x56 = 9;
	volatile int32_t t12 = 948303;

	t12 = ((x53<(x54-x55))*x56);

	if (t12 != 9) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x58 = UINT16_MAX;
	uint16_t x59 = UINT16_MAX;
	uint64_t x60 = 97888391508776496LLU;
	uint64_t t13 = 43590820LLU;

	t13 = ((x57<(x58-x59))*x60);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x62 = 1LLU;
	static int64_t x64 = INT64_MAX;
	static int64_t t14 = -22312172094074LL;

	t14 = ((x61<(x62-x63))*x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = INT16_MIN;
	uint64_t x67 = 2968004868LLU;
	uint8_t x68 = UINT8_MAX;
	int32_t t15 = 396;

	t15 = ((x65<(x66-x67))*x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MAX;
	static uint16_t x70 = 15050U;
	static int16_t x71 = INT16_MIN;
	static uint32_t x72 = 34U;
	static volatile uint32_t t16 = 96U;

	t16 = ((x69<(x70-x71))*x72);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x78 = -507955038LL;
	int8_t x79 = INT8_MIN;

	t17 = ((x77<(x78-x79))*x80);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x82 = INT8_MIN;
	int8_t x83 = 19;
	int16_t x84 = INT16_MIN;
	int32_t t18 = -7;

	t18 = ((x81<(x82-x83))*x84);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = INT32_MAX;
	uint16_t x87 = 3885U;
	int32_t x88 = INT32_MIN;
	int32_t t19 = INT32_MIN;

	t19 = ((x85<(x86-x87))*x88);

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	volatile int8_t x90 = INT8_MAX;
	int64_t x91 = 697LL;
	int32_t x92 = -1;
	volatile int32_t t20 = 1;

	t20 = ((x89<(x90-x91))*x92);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x94 = 62U;
	uint32_t x95 = UINT32_MAX;
	volatile int64_t x96 = -506532318025LL;
	int64_t t21 = 1044293571585976070LL;

	t21 = ((x93<(x94-x95))*x96);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -9449;
	int32_t x98 = -274933246;
	int32_t x100 = -1;

	t22 = ((x97<(x98-x99))*x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 3U;
	int64_t x106 = INT64_MIN;
	int32_t t23 = -301861;

	t23 = ((x105<(x106-x107))*x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -125962307312702LL;
	int64_t x110 = 543153030336745234LL;
	int32_t x111 = INT32_MIN;
	int64_t x112 = 29454814779693465LL;
	volatile int64_t t24 = 1884339077LL;

	t24 = ((x109<(x110-x111))*x112);

	if (t24 != 29454814779693465LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = INT64_MIN;
	static volatile int8_t x114 = INT8_MIN;
	volatile uint64_t x115 = UINT64_MAX;
	static uint16_t x116 = 227U;
	volatile int32_t t25 = -1;

	t25 = ((x113<(x114-x115))*x116);

	if (t25 != 227) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x118 = 1371U;
	volatile uint8_t x120 = 24U;
	int32_t t26 = 11;

	t26 = ((x117<(x118-x119))*x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = UINT16_MAX;
	uint16_t x122 = UINT16_MAX;
	int32_t t27 = -492251443;

	t27 = ((x121<(x122-x123))*x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MIN;
	int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MIN;
	static uint16_t x128 = 1U;

	t28 = ((x125<(x126-x127))*x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x129 = -1;
	uint32_t x131 = 279U;
	int16_t x132 = INT16_MAX;

	t29 = ((x129<(x130-x131))*x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x133 = INT16_MIN;
	int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MAX;
	static int8_t x136 = INT8_MAX;

	t30 = ((x133<(x134-x135))*x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = 177;
	int16_t x138 = INT16_MIN;
	int16_t x139 = -1;
	int32_t x140 = 565;
	static volatile int32_t t31 = 313241;

	t31 = ((x137<(x138-x139))*x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = -1LL;
	static int16_t x142 = INT16_MAX;
	uint64_t x143 = 2LLU;
	uint64_t x144 = UINT64_MAX;
	static volatile uint64_t t32 = 2073939692843LLU;

	t32 = ((x141<(x142-x143))*x144);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = UINT16_MAX;
	int8_t x146 = -17;
	int32_t x147 = 227446758;
	volatile int32_t x148 = 32568076;
	volatile int32_t t33 = 6;

	t33 = ((x145<(x146-x147))*x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x149 = UINT8_MAX;
	uint16_t x151 = UINT16_MAX;
	volatile uint64_t x152 = 0LLU;
	volatile uint64_t t34 = 74790054773139080LLU;

	t34 = ((x149<(x150-x151))*x152);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x157 = 76105362U;
	int64_t x158 = -114196LL;
	uint8_t x159 = 119U;
	uint16_t x160 = UINT16_MAX;
	static volatile int32_t t35 = 977;

	t35 = ((x157<(x158-x159))*x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = -53911LL;
	static volatile uint8_t x162 = 9U;
	volatile uint32_t x163 = 30U;
	int16_t x164 = INT16_MIN;
	int32_t t36 = 99;

	t36 = ((x161<(x162-x163))*x164);

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = INT32_MIN;
	int16_t x166 = -1;
	static uint32_t x167 = UINT32_MAX;
	volatile uint64_t x168 = 1878175LLU;
	volatile uint64_t t37 = 678LLU;

	t37 = ((x165<(x166-x167))*x168);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x169 = 3857361905890247192LL;
	int8_t x170 = INT8_MIN;
	int8_t x171 = INT8_MIN;
	int64_t t38 = 69055546309872679LL;

	t38 = ((x169<(x170-x171))*x172);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = -9;
	int64_t x179 = -1LL;
	volatile uint64_t t39 = 308LLU;

	t39 = ((x177<(x178-x179))*x180);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = -120319098;
	static uint64_t x182 = 2929178346355LLU;
	int16_t x183 = INT16_MIN;
	static int64_t x184 = 91162LL;

	t40 = ((x181<(x182-x183))*x184);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = -2;
	static volatile int8_t x186 = -6;
	int8_t x187 = -2;
	uint32_t x188 = UINT32_MAX;
	static volatile uint32_t t41 = 93U;

	t41 = ((x185<(x186-x187))*x188);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = INT16_MIN;
	int64_t x190 = -1LL;
	int64_t x191 = INT64_MIN;
	int16_t x192 = INT16_MIN;
	static int32_t t42 = 929863787;

	t42 = ((x189<(x190-x191))*x192);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x198 = INT8_MIN;
	volatile int16_t x199 = INT16_MIN;
	int32_t x200 = INT32_MIN;
	static int32_t t43 = 35709;

	t43 = ((x197<(x198-x199))*x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x205 = UINT8_MAX;
	int32_t x206 = INT32_MAX;
	volatile uint32_t x207 = 257930837U;
	int16_t x208 = INT16_MAX;

	t44 = ((x205<(x206-x207))*x208);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x209 = 629231424U;
	int32_t x210 = INT32_MIN;
	static int64_t x211 = INT64_MIN;
	int64_t x212 = INT64_MIN;

	t45 = ((x209<(x210-x211))*x212);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = 60;
	volatile int32_t x215 = -843196842;
	int8_t x216 = -57;
	int32_t t46 = -7676713;

	t46 = ((x213<(x214-x215))*x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = INT8_MAX;
	static volatile int8_t x219 = -1;
	static volatile int16_t x220 = -136;

	t47 = ((x217<(x218-x219))*x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x221 = INT64_MAX;
	static int8_t x222 = -1;
	int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	volatile int64_t t48 = 4341LL;

	t48 = ((x221<(x222-x223))*x224);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x225 = 1U;
	static uint64_t x227 = 2414374911474LLU;
	uint16_t x228 = 7U;
	static int32_t t49 = -7360;

	t49 = ((x225<(x226-x227))*x228);

	if (t49 != 7) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x231 = UINT8_MAX;
	volatile uint16_t x232 = 2U;

	t50 = ((x229<(x230-x231))*x232);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x234 = INT32_MIN;
	int32_t x235 = INT32_MIN;
	int8_t x236 = INT8_MAX;

	t51 = ((x233<(x234-x235))*x236);

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x237 = 29294784U;
	int8_t x238 = INT8_MAX;
	uint64_t x239 = 48921975399LLU;
	uint32_t x240 = UINT32_MAX;

	t52 = ((x237<(x238-x239))*x240);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x242 = -1;
	static uint16_t x243 = 0U;
	volatile uint16_t x244 = UINT16_MAX;

	t53 = ((x241<(x242-x243))*x244);

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x246 = INT16_MAX;
	uint8_t x247 = 1U;
	uint8_t x248 = 5U;
	static int32_t t54 = 73290607;

	t54 = ((x245<(x246-x247))*x248);

	if (t54 != 5) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = INT8_MAX;
	volatile int64_t x254 = INT64_MIN;
	volatile uint64_t x255 = UINT64_MAX;
	volatile int32_t t55 = 235;

	t55 = ((x253<(x254-x255))*x256);

	if (t55 != 1378810) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = -1LL;
	static uint32_t x258 = 366U;
	int8_t x259 = INT8_MIN;
	uint64_t x260 = UINT64_MAX;
	uint64_t t56 = UINT64_MAX;

	t56 = ((x257<(x258-x259))*x260);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x261 = INT32_MIN;
	static int16_t x263 = INT16_MIN;
	int8_t x264 = 0;
	volatile int32_t t57 = -13;

	t57 = ((x261<(x262-x263))*x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x265 = 2050832325637810LLU;
	int8_t x266 = INT8_MIN;
	volatile int32_t x267 = INT32_MIN;
	int16_t x268 = -1;
	int32_t t58 = -378928;

	t58 = ((x265<(x266-x267))*x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x269 = UINT8_MAX;
	int32_t x270 = INT32_MAX;
	static int64_t x271 = 490LL;
	uint8_t x272 = 1U;
	int32_t t59 = -7652358;

	t59 = ((x269<(x270-x271))*x272);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x273 = 114U;
	static uint8_t x275 = UINT8_MAX;
	uint32_t x276 = UINT32_MAX;
	uint32_t t60 = 1600U;

	t60 = ((x273<(x274-x275))*x276);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = -16724;
	int32_t x278 = INT32_MIN;
	int64_t x279 = 21LL;
	int32_t x280 = INT32_MIN;
	int32_t t61 = -22;

	t61 = ((x277<(x278-x279))*x280);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x282 = INT32_MAX;
	volatile uint64_t x283 = 569214470879LLU;
	int16_t x284 = -13;
	volatile int32_t t62 = -12595;

	t62 = ((x281<(x282-x283))*x284);

	if (t62 != -13) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x286 = -1;
	uint8_t x288 = UINT8_MAX;

	t63 = ((x285<(x286-x287))*x288);

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x289 = -31;
	uint32_t x290 = 223714U;
	static int64_t x291 = -1LL;
	volatile int16_t x292 = INT16_MIN;
	int32_t t64 = 13115;

	t64 = ((x289<(x290-x291))*x292);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x302 = -1LL;
	volatile uint8_t x304 = 20U;
	volatile int32_t t65 = 5368004;

	t65 = ((x301<(x302-x303))*x304);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = -1;
	uint8_t x310 = 37U;
	uint16_t x311 = 0U;
	static int8_t x312 = 1;
	static int32_t t66 = 18;

	t66 = ((x309<(x310-x311))*x312);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x313 = 579U;
	int16_t x314 = -41;
	uint8_t x315 = 1U;
	int32_t x316 = INT32_MIN;

	t67 = ((x313<(x314-x315))*x316);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x317 = INT32_MIN;
	static volatile uint16_t x318 = UINT16_MAX;
	uint32_t x319 = 194859904U;
	int64_t x320 = INT64_MIN;
	int64_t t68 = INT64_MIN;

	t68 = ((x317<(x318-x319))*x320);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x321 = 3610494U;
	int16_t x322 = -1;
	uint64_t x323 = 99946LLU;
	volatile int32_t t69 = -546763;

	t69 = ((x321<(x322-x323))*x324);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = -1;
	static int32_t x326 = -1;
	static int8_t x327 = INT8_MAX;
	int8_t x328 = INT8_MIN;
	static int32_t t70 = 271;

	t70 = ((x325<(x326-x327))*x328);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x330 = INT8_MAX;
	int16_t x331 = INT16_MAX;
	int16_t x332 = -48;
	static volatile int32_t t71 = 14;

	t71 = ((x329<(x330-x331))*x332);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x337 = 14503585191204158LL;
	uint32_t x338 = 7U;
	static uint16_t x340 = 2785U;

	t72 = ((x337<(x338-x339))*x340);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x342 = 127225LL;
	static int8_t x343 = INT8_MIN;
	int16_t x344 = INT16_MIN;
	volatile int32_t t73 = 2;

	t73 = ((x341<(x342-x343))*x344);

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x345 = UINT64_MAX;
	int8_t x346 = INT8_MIN;
	uint8_t x347 = 6U;
	int16_t x348 = -21;
	int32_t t74 = -267513;

	t74 = ((x345<(x346-x347))*x348);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x349 = 35274692108LLU;
	static int64_t x350 = 95257813490423037LL;
	int16_t x351 = -4930;
	static int16_t x352 = INT16_MIN;
	int32_t t75 = -1;

	t75 = ((x349<(x350-x351))*x352);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x354 = 10U;
	uint64_t x355 = 60LLU;
	volatile uint8_t x356 = 15U;
	volatile int32_t t76 = 128885882;

	t76 = ((x353<(x354-x355))*x356);

	if (t76 != 15) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x357 = 9;
	uint32_t x358 = 2099U;
	int8_t x359 = INT8_MAX;
	int32_t t77 = -9;

	t77 = ((x357<(x358-x359))*x360);

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x365 = INT16_MAX;
	int8_t x366 = 7;
	int8_t x367 = -10;
	volatile int64_t x368 = -1LL;
	static volatile int64_t t78 = 8021738344945898LL;

	t78 = ((x365<(x366-x367))*x368);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x370 = INT16_MIN;
	static volatile int64_t x372 = INT64_MAX;
	static volatile int64_t t79 = 23338695145LL;

	t79 = ((x369<(x370-x371))*x372);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x373 = INT64_MAX;
	static int16_t x375 = -431;
	volatile int8_t x376 = -1;
	int32_t t80 = -7124;

	t80 = ((x373<(x374-x375))*x376);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x377 = UINT8_MAX;
	uint8_t x378 = 15U;
	int16_t x379 = 267;
	volatile int32_t t81 = -242;

	t81 = ((x377<(x378-x379))*x380);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x381 = 283851656338250110LL;
	int16_t x383 = -1;
	int64_t x384 = INT64_MIN;
	int64_t t82 = -2269940LL;

	t82 = ((x381<(x382-x383))*x384);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x385 = -713LL;
	int64_t x386 = -7368114357LL;
	uint8_t x387 = UINT8_MAX;
	volatile int64_t x388 = INT64_MAX;
	int64_t t83 = -277866560LL;

	t83 = ((x385<(x386-x387))*x388);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x389 = INT16_MIN;
	int8_t x390 = INT8_MAX;
	int16_t x391 = INT16_MAX;
	static volatile uint32_t x392 = UINT32_MAX;
	static volatile uint32_t t84 = UINT32_MAX;

	t84 = ((x389<(x390-x391))*x392);

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x393 = -39523;
	uint8_t x394 = 2U;
	volatile uint64_t x395 = 7907176311439LLU;
	int32_t t85 = -11456;

	t85 = ((x393<(x394-x395))*x396);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x397 = -118930359LL;
	int16_t x399 = INT16_MIN;
	int32_t x400 = 19185;
	volatile int32_t t86 = -1605375;

	t86 = ((x397<(x398-x399))*x400);

	if (t86 != 19185) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x401 = 101U;
	static uint64_t x404 = 2136933554882484989LLU;
	volatile uint64_t t87 = 4008772LLU;

	t87 = ((x401<(x402-x403))*x404);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x405 = 6U;
	volatile int64_t x406 = -393LL;
	uint16_t x407 = 31U;
	volatile int16_t x408 = INT16_MIN;
	int32_t t88 = 37;

	t88 = ((x405<(x406-x407))*x408);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x409 = UINT64_MAX;
	uint16_t x410 = 7U;
	static int16_t x411 = -1785;
	int16_t x412 = 1;
	volatile int32_t t89 = -61;

	t89 = ((x409<(x410-x411))*x412);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x413 = -7866213;
	int32_t x414 = 3;
	static uint32_t x415 = 13001U;
	static volatile int8_t x416 = -1;
	int32_t t90 = 2099510;

	t90 = ((x413<(x414-x415))*x416);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x417 = -83475366376LL;
	volatile int32_t x418 = -239531;
	int16_t x419 = INT16_MAX;
	int16_t x420 = -7;
	int32_t t91 = 4478;

	t91 = ((x417<(x418-x419))*x420);

	if (t91 != -7) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x421 = -1;
	int8_t x423 = -1;
	int32_t x424 = INT32_MAX;
	volatile int32_t t92 = 60726868;

	t92 = ((x421<(x422-x423))*x424);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x426 = 0U;
	int16_t x427 = INT16_MAX;
	int8_t x428 = INT8_MIN;

	t93 = ((x425<(x426-x427))*x428);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x429 = 104U;
	int8_t x432 = INT8_MIN;
	volatile int32_t t94 = -179318974;

	t94 = ((x429<(x430-x431))*x432);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x433 = -1;
	int64_t x434 = 0LL;
	volatile int8_t x435 = INT8_MIN;
	uint64_t x436 = 2784135083825LLU;
	uint64_t t95 = 19855586LLU;

	t95 = ((x433<(x434-x435))*x436);

	if (t95 != 2784135083825LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x437 = INT8_MAX;
	int16_t x438 = INT16_MIN;
	uint16_t x439 = 0U;
	int16_t x440 = -6791;
	volatile int32_t t96 = -20;

	t96 = ((x437<(x438-x439))*x440);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = INT32_MIN;
	int64_t x442 = -1LL;
	static int64_t x444 = INT64_MIN;
	volatile int64_t t97 = INT64_MIN;

	t97 = ((x441<(x442-x443))*x444);

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x446 = -1;
	int32_t x447 = INT32_MIN;
	uint32_t x448 = 995404192U;
	volatile uint32_t t98 = 918631U;

	t98 = ((x445<(x446-x447))*x448);

	if (t98 != 995404192U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x449 = UINT8_MAX;
	static int64_t x450 = 4541882LL;
	int8_t x451 = -5;
	uint8_t x452 = 24U;
	volatile int32_t t99 = -12740955;

	t99 = ((x449<(x450-x451))*x452);

	if (t99 != 24) { NG(); } else { ; }
	
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

