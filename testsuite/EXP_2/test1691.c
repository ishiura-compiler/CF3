#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 63U;
uint16_t x4 = 113U;
volatile int16_t x13 = INT16_MAX;
static uint32_t x16 = UINT32_MAX;
static volatile int64_t x25 = -9083205095589LL;
uint8_t x33 = 15U;
uint32_t t6 = 1U;
int8_t x37 = -39;
int8_t x38 = 37;
int16_t x42 = INT16_MIN;
uint32_t x50 = UINT32_MAX;
static volatile uint64_t t11 = 1981476142961635900LLU;
volatile uint32_t x57 = 111751U;
volatile uint64_t t13 = 150221378042LLU;
int64_t x75 = INT64_MIN;
volatile int64_t t16 = INT64_MIN;
int16_t x81 = INT16_MAX;
int16_t x82 = INT16_MIN;
int16_t x88 = INT16_MIN;
static int8_t x92 = -7;
int32_t t20 = 15994;
int8_t x93 = -2;
static int32_t x95 = -471659016;
int32_t x100 = 15;
volatile uint8_t x122 = 21U;
static int32_t t27 = 789824;
uint64_t x125 = UINT64_MAX;
uint8_t x126 = 1U;
static volatile int32_t t29 = -401994;
int64_t t30 = 10LL;
int16_t x150 = -2865;
volatile uint64_t t32 = 62987380LLU;
static uint8_t x157 = 82U;
int8_t x160 = INT8_MAX;
static uint32_t x162 = 1U;
static int8_t x179 = INT8_MIN;
int16_t x183 = -1;
static int64_t x188 = INT64_MAX;
int64_t t40 = -471367LL;
volatile int32_t x192 = INT32_MAX;
static int64_t t41 = -407LL;
uint8_t x195 = 29U;
uint16_t x204 = 511U;
static int8_t x217 = INT8_MIN;
int32_t x227 = -171921775;
int32_t t49 = 2068722;
int16_t x233 = -50;
int8_t x234 = -1;
volatile uint64_t t54 = 495703507LLU;
int8_t x257 = 0;
int32_t x262 = -1;
int8_t x264 = -1;
volatile uint64_t t57 = 385205LLU;
uint64_t x273 = 7LLU;
static uint64_t t59 = 14084524526076LLU;
int8_t x282 = -1;
uint64_t t64 = 37516433LLU;
volatile uint8_t x316 = UINT8_MAX;
static volatile uint64_t t68 = 5LLU;
int8_t x321 = -1;
static uint8_t x326 = 3U;
int64_t t71 = -16451899148LL;
int64_t x343 = -1588732686199700LL;
int32_t x346 = INT32_MAX;
int64_t x359 = 25471086LL;
uint16_t x370 = 300U;
static volatile uint16_t x372 = 4U;
volatile uint64_t x376 = 62822534401LLU;
static int32_t x377 = INT32_MAX;
static uint64_t x382 = 3818503203416837LLU;
uint16_t x391 = UINT16_MAX;
int16_t x399 = -857;
static int16_t x400 = -1118;
uint32_t x414 = UINT32_MAX;
volatile int64_t t89 = -3711263297LL;
int32_t x425 = -1;
uint32_t x426 = 0U;
uint32_t t91 = 308116U;
static volatile uint8_t x438 = 1U;
static int8_t x441 = INT8_MIN;
volatile uint32_t x443 = 260U;
uint16_t x445 = 26U;
int16_t x449 = INT16_MIN;
uint32_t x455 = UINT32_MAX;
static volatile uint16_t x458 = 1330U;
volatile uint32_t x461 = 0U;
int8_t x464 = INT8_MIN;
int64_t x466 = 9025703308326LL;
int64_t x467 = INT64_MIN;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	static int64_t x2 = -1LL;
	volatile int64_t t0 = 7087322811381315LL;

	t0 = ((x1+(x2&x3))+x4);

	if (t0 != 65711LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = INT32_MIN;
	int64_t x10 = INT64_MAX;
	int8_t x11 = 1;
	volatile uint16_t x12 = UINT16_MAX;
	int64_t t1 = 1038109442LL;

	t1 = ((x9+(x10&x11))+x12);

	if (t1 != -2147418112LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = 1;
	int64_t x15 = INT64_MIN;
	volatile int64_t t2 = -6LL;

	t2 = ((x13+(x14&x15))+x16);

	if (t2 != 4295000062LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x17 = UINT8_MAX;
	int64_t x18 = -151249971LL;
	volatile int8_t x19 = INT8_MIN;
	int32_t x20 = -7;
	int64_t t3 = 6051771245LL;

	t3 = ((x17+(x18&x19))+x20);

	if (t3 != -151249800LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x26 = -1;
	volatile int64_t x27 = -864301978546486445LL;
	static uint8_t x28 = 0U;
	int64_t t4 = -152543290LL;

	t4 = ((x25+(x26&x27))+x28);

	if (t4 != -864311061751582034LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MIN;
	int64_t x30 = -14959LL;
	int16_t x31 = -1;
	static int16_t x32 = INT16_MAX;
	volatile int64_t t5 = 6LL;

	t5 = ((x29+(x30&x31))+x32);

	if (t5 != -2147465840LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x34 = 1839661832U;
	int16_t x35 = -1234;
	static uint16_t x36 = 1605U;

	t6 = ((x33+(x34&x35))+x36);

	if (t6 != 1839663452U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MAX;
	int64_t t7 = -24507473561135LL;

	t7 = ((x37+(x38&x39))+x40);

	if (t7 != 9223372036854775768LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = 116;
	volatile int16_t x43 = 789;
	int16_t x44 = INT16_MAX;
	static int32_t t8 = -38549968;

	t8 = ((x41+(x42&x43))+x44);

	if (t8 != 32883) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 53U;
	volatile int32_t x46 = INT32_MIN;
	uint8_t x47 = 0U;
	int16_t x48 = -1;
	static int32_t t9 = 7780372;

	t9 = ((x45+(x46&x47))+x48);

	if (t9 != 52) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	uint16_t x51 = 587U;
	volatile int16_t x52 = 3;
	static uint32_t t10 = 2749U;

	t10 = ((x49+(x50&x51))+x52);

	if (t10 != 462U) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = INT8_MAX;
	static int16_t x54 = INT16_MIN;
	static volatile uint64_t x55 = 36755822225145366LLU;
	static uint16_t x56 = 196U;

	t11 = ((x53+(x54&x55))+x56);

	if (t11 != 36755822225129795LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x58 = -1LL;
	int32_t x59 = -1;
	volatile uint16_t x60 = 5U;
	int64_t t12 = 1299LL;

	t12 = ((x57+(x58&x59))+x60);

	if (t12 != 111755LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x61 = 2U;
	static uint64_t x62 = UINT64_MAX;
	volatile uint8_t x63 = 37U;
	int8_t x64 = 3;

	t13 = ((x61+(x62&x63))+x64);

	if (t13 != 42LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	uint16_t x66 = UINT16_MAX;
	uint8_t x67 = UINT8_MAX;
	static int16_t x68 = INT16_MIN;
	static volatile int32_t t14 = -1;

	t14 = ((x65+(x66&x67))+x68);

	if (t14 != -65281) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x69 = INT16_MIN;
	int32_t x70 = INT32_MIN;
	volatile uint8_t x71 = UINT8_MAX;
	volatile uint64_t x72 = UINT64_MAX;
	uint64_t t15 = 22122328916LLU;

	t15 = ((x69+(x70&x71))+x72);

	if (t15 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = 1U;
	int32_t x74 = -1;
	int16_t x76 = -1;

	t16 = ((x73+(x74&x75))+x76);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = 6;
	int8_t x79 = -1;
	static uint16_t x80 = 13265U;
	volatile int32_t t17 = 4075;

	t17 = ((x77+(x78&x79))+x80);

	if (t17 != -19497) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x83 = -619LL;
	int16_t x84 = INT16_MIN;
	int64_t t18 = -172463806708LL;

	t18 = ((x81+(x82&x83))+x84);

	if (t18 != -32769LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -1;
	int16_t x86 = -1;
	int32_t x87 = -1;
	int32_t t19 = -22117;

	t19 = ((x85+(x86&x87))+x88);

	if (t19 != -32770) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -1;
	int32_t x90 = -39;
	int8_t x91 = -1;

	t20 = ((x89+(x90&x91))+x92);

	if (t20 != -47) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x94 = -13;
	static int8_t x96 = -1;
	int32_t t21 = -6746;

	t21 = ((x93+(x94&x95))+x96);

	if (t21 != -471659027) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 1LLU;
	static uint16_t x98 = 3U;
	int32_t x99 = -1;
	uint64_t t22 = 79822LLU;

	t22 = ((x97+(x98&x99))+x100);

	if (t22 != 19LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	static int8_t x102 = INT8_MAX;
	uint16_t x103 = 2512U;
	volatile uint8_t x104 = UINT8_MAX;
	volatile int32_t t23 = -426;

	t23 = ((x101+(x102&x103))+x104);

	if (t23 != -2147483313) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = UINT64_MAX;
	int16_t x106 = -92;
	volatile int64_t x107 = INT64_MIN;
	int64_t x108 = -122195483LL;
	volatile uint64_t t24 = 28234550LLU;

	t24 = ((x105+(x106&x107))+x108);

	if (t24 != 9223372036732580324LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x109 = INT8_MIN;
	int32_t x110 = INT32_MIN;
	uint32_t x111 = 5U;
	static uint64_t x112 = 2583LLU;
	static uint64_t t25 = 6334LLU;

	t25 = ((x109+(x110&x111))+x112);

	if (t25 != 4294969751LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = 921U;
	uint32_t x118 = UINT32_MAX;
	int8_t x119 = 39;
	int64_t x120 = -1LL;
	volatile int64_t t26 = 1493218501LL;

	t26 = ((x117+(x118&x119))+x120);

	if (t26 != 959LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = 52;
	int16_t x123 = -5;
	static uint8_t x124 = 90U;

	t27 = ((x121+(x122&x123))+x124);

	if (t27 != 159) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x127 = INT8_MIN;
	static uint16_t x128 = 1U;
	volatile uint64_t t28 = 61847568LLU;

	t28 = ((x125+(x126&x127))+x128);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x137 = 25482067;
	static int8_t x138 = INT8_MIN;
	uint8_t x139 = 1U;
	int16_t x140 = INT16_MIN;

	t29 = ((x137+(x138&x139))+x140);

	if (t29 != 25449299) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MAX;
	static uint8_t x143 = 87U;
	int64_t x144 = 3727112LL;

	t30 = ((x141+(x142&x143))+x144);

	if (t30 != -9223372036851048609LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = -3;
	int16_t x146 = -404;
	volatile int16_t x147 = INT16_MAX;
	volatile int16_t x148 = INT16_MIN;
	int32_t t31 = -13499105;

	t31 = ((x145+(x146&x147))+x148);

	if (t31 != -407) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x149 = 8072336630527LLU;
	uint16_t x151 = UINT16_MAX;
	static int64_t x152 = -85489158792361885LL;

	t32 = ((x149+(x150&x151))+x152);

	if (t32 != 18361262987253882929LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x153 = 108U;
	static volatile uint32_t x154 = 1U;
	uint32_t x155 = 254U;
	volatile uint64_t x156 = UINT64_MAX;
	volatile uint64_t t33 = 8LLU;

	t33 = ((x153+(x154&x155))+x156);

	if (t33 != 107LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x158 = INT64_MIN;
	volatile uint16_t x159 = 12546U;
	int64_t t34 = -2565463827934294LL;

	t34 = ((x157+(x158&x159))+x160);

	if (t34 != 209LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = INT64_MIN;
	int64_t x163 = 57009421967LL;
	int32_t x164 = INT32_MAX;
	volatile int64_t t35 = -15977722213947LL;

	t35 = ((x161+(x162&x163))+x164);

	if (t35 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = INT16_MAX;
	int32_t x166 = INT32_MAX;
	int64_t x167 = -1922064654909LL;
	volatile int32_t x168 = 597694710;
	volatile int64_t t36 = -137974735385607LL;

	t36 = ((x165+(x166&x167))+x168);

	if (t36 != 2678421176LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x169 = -1LL;
	uint32_t x170 = 64098946U;
	volatile int32_t x171 = INT32_MIN;
	int32_t x172 = INT32_MAX;
	int64_t t37 = -3LL;

	t37 = ((x169+(x170&x171))+x172);

	if (t37 != 2147483646LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = 20;
	volatile uint32_t x178 = 23735U;
	uint16_t x180 = UINT16_MAX;
	volatile uint32_t t38 = 3058U;

	t38 = ((x177+(x178&x179))+x180);

	if (t38 != 89235U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x181 = UINT64_MAX;
	uint64_t x182 = 226LLU;
	static volatile int16_t x184 = INT16_MIN;
	uint64_t t39 = 72916LLU;

	t39 = ((x181+(x182&x183))+x184);

	if (t39 != 18446744073709519073LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x185 = -1;
	int32_t x186 = INT32_MIN;
	int32_t x187 = 96;

	t40 = ((x185+(x186&x187))+x188);

	if (t40 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = -2LL;
	static uint8_t x190 = UINT8_MAX;
	int16_t x191 = INT16_MIN;

	t41 = ((x189+(x190&x191))+x192);

	if (t41 != 2147483645LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x193 = -1;
	int32_t x194 = INT32_MIN;
	static volatile int16_t x196 = -1;
	volatile int32_t t42 = -16007;

	t42 = ((x193+(x194&x195))+x196);

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x197 = 1;
	uint8_t x198 = 98U;
	int64_t x199 = INT64_MIN;
	static volatile uint8_t x200 = 38U;
	int64_t t43 = -88280659LL;

	t43 = ((x197+(x198&x199))+x200);

	if (t43 != 39LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = -1;
	int8_t x202 = 17;
	volatile uint64_t x203 = 53LLU;
	static uint64_t t44 = 0LLU;

	t44 = ((x201+(x202&x203))+x204);

	if (t44 != 527LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x205 = INT64_MIN;
	int32_t x206 = 22912906;
	uint8_t x207 = UINT8_MAX;
	uint16_t x208 = 71U;
	int64_t t45 = 179965603159LL;

	t45 = ((x205+(x206&x207))+x208);

	if (t45 != -9223372036854775599LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x213 = INT8_MAX;
	volatile int8_t x214 = INT8_MAX;
	static int8_t x215 = -1;
	int16_t x216 = INT16_MAX;
	int32_t t46 = 111050462;

	t46 = ((x213+(x214&x215))+x216);

	if (t46 != 33021) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x218 = -81865LL;
	uint32_t x219 = UINT32_MAX;
	uint64_t x220 = 1798923197LLU;
	volatile uint64_t t47 = 268553423225251LLU;

	t47 = ((x217+(x218&x219))+x220);

	if (t47 != 6093808500LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x221 = 12;
	uint8_t x222 = 3U;
	int64_t x223 = -1LL;
	uint16_t x224 = 109U;
	volatile int64_t t48 = -26573985631842033LL;

	t48 = ((x221+(x222&x223))+x224);

	if (t48 != 124LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x225 = INT16_MIN;
	uint16_t x226 = 7525U;
	int32_t x228 = -3467;

	t49 = ((x225+(x226&x227))+x228);

	if (t49 != -33162) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x229 = 19U;
	int8_t x230 = -1;
	static int16_t x231 = 6;
	uint16_t x232 = UINT16_MAX;
	int32_t t50 = -17547366;

	t50 = ((x229+(x230&x231))+x232);

	if (t50 != 65560) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x235 = UINT32_MAX;
	int16_t x236 = INT16_MIN;
	uint32_t t51 = 1074U;

	t51 = ((x233+(x234&x235))+x236);

	if (t51 != 4294934477U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = -1LL;
	uint8_t x242 = UINT8_MAX;
	uint8_t x243 = 13U;
	volatile int8_t x244 = -1;
	static int64_t t52 = 8711910049232372LL;

	t52 = ((x241+(x242&x243))+x244);

	if (t52 != 11LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = INT16_MIN;
	int64_t x246 = INT64_MAX;
	uint16_t x247 = UINT16_MAX;
	int8_t x248 = INT8_MIN;
	volatile int64_t t53 = 275LL;

	t53 = ((x245+(x246&x247))+x248);

	if (t53 != 32639LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x253 = -1;
	int32_t x254 = -143950;
	volatile int32_t x255 = -963525;
	volatile uint64_t x256 = 6544791838525790887LLU;

	t54 = ((x253+(x254&x255))+x256);

	if (t54 != 6544791838524827352LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x258 = INT8_MAX;
	static uint16_t x259 = 1022U;
	int8_t x260 = 5;
	volatile int32_t t55 = 0;

	t55 = ((x257+(x258&x259))+x260);

	if (t55 != 131) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x261 = INT16_MIN;
	volatile int16_t x263 = 4;
	int32_t t56 = -1;

	t56 = ((x261+(x262&x263))+x264);

	if (t56 != -32765) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x265 = INT64_MIN;
	uint64_t x266 = 3129314816LLU;
	static int32_t x267 = INT32_MIN;
	static int32_t x268 = -2021;

	t57 = ((x265+(x266&x267))+x268);

	if (t57 != 9223372039002257435LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x274 = INT64_MIN;
	volatile int64_t x275 = INT64_MIN;
	static uint8_t x276 = 58U;
	volatile uint64_t t58 = 1611973693886157024LLU;

	t58 = ((x273+(x274&x275))+x276);

	if (t58 != 9223372036854775873LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x277 = 12120199416351LLU;
	int8_t x278 = INT8_MIN;
	static volatile int32_t x279 = INT32_MIN;
	int32_t x280 = INT32_MIN;

	t59 = ((x277+(x278&x279))+x280);

	if (t59 != 12115904449055LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x281 = -46;
	static uint16_t x283 = 1864U;
	static uint64_t x284 = 9727246766719LLU;
	uint64_t t60 = 13LLU;

	t60 = ((x281+(x282&x283))+x284);

	if (t60 != 9727246768537LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x285 = -158;
	uint16_t x286 = 4109U;
	int16_t x287 = -1;
	volatile int8_t x288 = -1;
	static volatile int32_t t61 = 949130416;

	t61 = ((x285+(x286&x287))+x288);

	if (t61 != 3950) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = 413869LL;
	int32_t x290 = -97;
	volatile int64_t x291 = 510235664LL;
	int32_t x292 = 0;
	volatile int64_t t62 = 194224319771LL;

	t62 = ((x289+(x290&x291))+x292);

	if (t62 != 510649533LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x293 = 237915162LLU;
	int32_t x294 = INT32_MIN;
	int64_t x295 = INT64_MIN;
	int64_t x296 = INT64_MAX;
	uint64_t t63 = 157326851947447LLU;

	t63 = ((x293+(x294&x295))+x296);

	if (t63 != 237915161LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x301 = 3643068452LLU;
	static uint8_t x302 = 31U;
	static int64_t x303 = -1LL;
	uint64_t x304 = 762420720379LLU;

	t64 = ((x301+(x302&x303))+x304);

	if (t64 != 766063788862LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x305 = 16340U;
	static int64_t x306 = INT64_MIN;
	int64_t x307 = -6346LL;
	int64_t x308 = 1738649LL;
	int64_t t65 = -12282838720298LL;

	t65 = ((x305+(x306&x307))+x308);

	if (t65 != -9223372036853020819LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x309 = -49085046;
	int64_t x310 = INT64_MIN;
	int64_t x311 = INT64_MAX;
	int8_t x312 = -3;
	int64_t t66 = 6805LL;

	t66 = ((x309+(x310&x311))+x312);

	if (t66 != -49085049LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = -1LL;
	uint8_t x314 = 14U;
	volatile uint16_t x315 = 132U;
	static volatile int64_t t67 = 1893LL;

	t67 = ((x313+(x314&x315))+x316);

	if (t67 != 258LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x317 = -1;
	uint64_t x318 = 11390520809183919LLU;
	uint16_t x319 = UINT16_MAX;
	uint64_t x320 = UINT64_MAX;

	t68 = ((x317+(x318&x319))+x320);

	if (t68 != 23213LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x322 = -122864;
	int32_t x323 = -577220284;
	uint8_t x324 = 0U;
	int32_t t69 = 198669294;

	t69 = ((x321+(x322&x323))+x324);

	if (t69 != -577241089) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = -1;
	static int32_t x327 = INT32_MIN;
	int32_t x328 = INT32_MAX;
	static int32_t t70 = 16686;

	t70 = ((x325+(x326&x327))+x328);

	if (t70 != 2147483646) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x329 = UINT32_MAX;
	static int64_t x330 = INT64_MIN;
	static int32_t x331 = INT32_MIN;
	static int32_t x332 = -1;

	t71 = ((x329+(x330&x331))+x332);

	if (t71 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x333 = 28U;
	static int64_t x334 = INT64_MIN;
	static int64_t x335 = INT64_MIN;
	static int16_t x336 = -1;
	volatile int64_t t72 = 1105159962453289839LL;

	t72 = ((x333+(x334&x335))+x336);

	if (t72 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x337 = INT8_MAX;
	volatile int64_t x338 = -1LL;
	volatile uint64_t x339 = 35895035271553556LLU;
	static uint64_t x340 = 6013LLU;
	uint64_t t73 = 7LLU;

	t73 = ((x337+(x338&x339))+x340);

	if (t73 != 35895035271559696LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x341 = INT8_MIN;
	uint8_t x342 = UINT8_MAX;
	int8_t x344 = -46;
	int64_t t74 = -1362943925795035624LL;

	t74 = ((x341+(x342&x343))+x344);

	if (t74 != -66LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x345 = INT8_MAX;
	uint8_t x347 = UINT8_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t75 = 904366121;

	t75 = ((x345+(x346&x347))+x348);

	if (t75 != 254) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x353 = -1;
	int32_t x354 = -1;
	int16_t x355 = -993;
	int8_t x356 = INT8_MIN;
	volatile int32_t t76 = -1934794;

	t76 = ((x353+(x354&x355))+x356);

	if (t76 != -1122) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x357 = UINT8_MAX;
	uint32_t x358 = 1012546U;
	uint16_t x360 = 422U;
	volatile int64_t t77 = -233643LL;

	t77 = ((x357+(x358&x359))+x360);

	if (t77 != 271079LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = INT16_MAX;
	int32_t x362 = 547;
	static volatile int32_t x363 = -248;
	uint64_t x364 = 55568342254337LLU;
	uint64_t t78 = 1189949326LLU;

	t78 = ((x361+(x362&x363))+x364);

	if (t78 != 55568342287616LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x365 = 136971160493406LLU;
	volatile int8_t x366 = -17;
	uint64_t x367 = 9LLU;
	int32_t x368 = INT32_MIN;
	static uint64_t t79 = 231328626980903394LLU;

	t79 = ((x365+(x366&x367))+x368);

	if (t79 != 136969013009767LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x369 = INT8_MAX;
	uint32_t x371 = UINT32_MAX;
	uint32_t t80 = 78807U;

	t80 = ((x369+(x370&x371))+x372);

	if (t80 != 431U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x373 = 8U;
	int8_t x374 = -1;
	int64_t x375 = -1LL;
	uint64_t t81 = 1517310397155861640LLU;

	t81 = ((x373+(x374&x375))+x376);

	if (t81 != 62822534408LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x378 = -520;
	uint32_t x379 = UINT32_MAX;
	int16_t x380 = INT16_MIN;
	volatile uint32_t t82 = 15390218U;

	t82 = ((x377+(x378&x379))+x380);

	if (t82 != 2147450359U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x381 = 3U;
	uint64_t x383 = 12767211527LLU;
	uint32_t x384 = UINT32_MAX;
	volatile uint64_t t83 = 239435346LLU;

	t83 = ((x381+(x382&x383))+x384);

	if (t83 != 6576676871LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x385 = INT32_MAX;
	int16_t x386 = 0;
	volatile int16_t x387 = -1;
	static volatile int8_t x388 = 0;
	int32_t t84 = INT32_MAX;

	t84 = ((x385+(x386&x387))+x388);

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x389 = 11U;
	int32_t x390 = 0;
	uint64_t x392 = 492LLU;
	volatile uint64_t t85 = 715971495384731458LLU;

	t85 = ((x389+(x390&x391))+x392);

	if (t85 != 503LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x397 = -1;
	int8_t x398 = 7;
	int32_t t86 = -58885918;

	t86 = ((x397+(x398&x399))+x400);

	if (t86 != -1112) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x401 = INT16_MIN;
	static int8_t x402 = INT8_MIN;
	int8_t x403 = INT8_MIN;
	uint8_t x404 = 16U;
	volatile int32_t t87 = -1;

	t87 = ((x401+(x402&x403))+x404);

	if (t87 != -32880) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x409 = -1;
	int32_t x410 = INT32_MIN;
	volatile uint32_t x411 = 26U;
	int8_t x412 = -24;
	uint32_t t88 = 2206U;

	t88 = ((x409+(x410&x411))+x412);

	if (t88 != 4294967271U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = -1;
	volatile int16_t x415 = -1;
	int64_t x416 = INT64_MIN;

	t89 = ((x413+(x414&x415))+x416);

	if (t89 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x421 = 4366129LLU;
	volatile uint16_t x422 = 19657U;
	int64_t x423 = INT64_MIN;
	int32_t x424 = 214361219;
	static uint64_t t90 = 14117257LLU;

	t90 = ((x421+(x422&x423))+x424);

	if (t90 != 218727348LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x427 = INT8_MAX;
	static int32_t x428 = INT32_MIN;

	t91 = ((x425+(x426&x427))+x428);

	if (t91 != 2147483647U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x437 = INT64_MIN;
	volatile uint8_t x439 = 0U;
	int8_t x440 = INT8_MAX;
	int64_t t92 = -21LL;

	t92 = ((x437+(x438&x439))+x440);

	if (t92 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x442 = INT8_MIN;
	static uint16_t x444 = UINT16_MAX;
	uint32_t t93 = 2U;

	t93 = ((x441+(x442&x443))+x444);

	if (t93 != 65663U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x446 = -1382;
	int16_t x447 = INT16_MIN;
	volatile uint16_t x448 = 2044U;
	static int32_t t94 = 971735415;

	t94 = ((x445+(x446&x447))+x448);

	if (t94 != -30698) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x450 = UINT64_MAX;
	static uint16_t x451 = 3U;
	static volatile uint32_t x452 = 8U;
	uint64_t t95 = 153803LLU;

	t95 = ((x449+(x450&x451))+x452);

	if (t95 != 18446744073709518859LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x453 = 156762LLU;
	int8_t x454 = -1;
	volatile int32_t x456 = INT32_MIN;
	volatile uint64_t t96 = 25585001932274192LLU;

	t96 = ((x453+(x454&x455))+x456);

	if (t96 != 2147640409LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x457 = 1366U;
	int64_t x459 = 1352602071791LL;
	uint64_t x460 = 78216165334422043LLU;
	uint64_t t97 = 2123875540223589LLU;

	t97 = ((x457+(x458&x459))+x460);

	if (t97 != 78216165334423443LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x462 = INT16_MAX;
	uint64_t x463 = UINT64_MAX;
	volatile uint64_t t98 = 7293LLU;

	t98 = ((x461+(x462&x463))+x464);

	if (t98 != 32639LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x465 = 2U;
	volatile int8_t x468 = INT8_MIN;
	int64_t t99 = -6LL;

	t99 = ((x465+(x466&x467))+x468);

	if (t99 != -126LL) { NG(); } else { ; }
	
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

