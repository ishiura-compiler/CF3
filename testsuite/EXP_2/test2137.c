#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x15 = INT16_MAX;
int8_t x17 = INT8_MIN;
int32_t x18 = INT32_MIN;
volatile int32_t t4 = -246586;
int16_t x26 = -14;
static int32_t t6 = 42201;
uint32_t t7 = 26801646U;
static int8_t x35 = 2;
int32_t t9 = 125411;
static volatile int32_t t11 = -44100;
volatile uint32_t x50 = 1855U;
volatile int32_t t12 = -664;
volatile uint64_t x65 = UINT64_MAX;
volatile int64_t t16 = -4957308LL;
volatile int8_t x71 = 0;
int64_t t18 = -147746587847LL;
static uint64_t x83 = 48026LLU;
volatile uint8_t x85 = 2U;
int32_t x87 = -2240;
int64_t x88 = INT64_MIN;
volatile int8_t x91 = INT8_MAX;
int32_t x92 = INT32_MIN;
volatile int32_t t22 = -300;
int16_t x104 = INT16_MIN;
static uint8_t x105 = 3U;
int32_t t26 = 15330478;
int64_t x113 = INT64_MIN;
int8_t x128 = -1;
int32_t x135 = 7;
uint16_t x136 = UINT16_MAX;
static volatile int32_t t32 = 64;
volatile uint8_t x138 = UINT8_MAX;
int8_t x139 = INT8_MAX;
uint32_t x140 = UINT32_MAX;
volatile uint32_t t33 = 969389U;
static uint64_t x145 = 58217048LLU;
int16_t x149 = INT16_MIN;
uint32_t x156 = 22343184U;
static volatile uint32_t t37 = 19165U;
static uint8_t x159 = 2U;
int32_t t38 = 1538054;
static uint16_t x162 = 500U;
int32_t x163 = INT32_MAX;
static volatile int8_t x169 = INT8_MIN;
int8_t x170 = INT8_MIN;
int8_t x172 = -1;
volatile uint32_t x174 = UINT32_MAX;
static volatile int64_t t42 = -650709237081512LL;
int32_t x181 = -79139981;
uint32_t x182 = 447473U;
static int64_t x183 = -102LL;
uint32_t x184 = 8338193U;
int64_t x186 = INT64_MIN;
int64_t x192 = INT64_MAX;
int64_t t46 = -88LL;
static int16_t x201 = INT16_MIN;
uint64_t x202 = 210581LLU;
uint8_t x204 = 50U;
volatile int32_t t48 = 50;
uint32_t x205 = 241U;
static int32_t x209 = 66862683;
static int32_t x211 = 124583866;
volatile uint8_t x214 = 2U;
volatile int8_t x219 = -5;
volatile int64_t t53 = -3136499748LL;
static volatile int32_t t56 = -3;
int64_t x237 = -1LL;
uint32_t x239 = 2627286U;
uint64_t x241 = UINT64_MAX;
int32_t t58 = -237313;
static int16_t x245 = INT16_MIN;
uint8_t x246 = 12U;
int64_t x249 = -1LL;
int32_t t60 = -14;
volatile int16_t x261 = INT16_MIN;
static uint8_t x274 = 2U;
uint64_t x276 = UINT64_MAX;
uint32_t x278 = UINT32_MAX;
uint32_t x281 = 64646731U;
uint32_t t66 = 1U;
uint32_t x288 = UINT32_MAX;
int32_t t69 = 4528;
int64_t x298 = INT64_MIN;
int32_t x299 = INT32_MIN;
volatile int32_t t70 = 63136175;
int64_t x302 = -1LL;
uint16_t x310 = 19397U;
int32_t x317 = -6787;
static uint16_t x318 = 4960U;
int32_t t75 = -254658;
volatile int32_t t76 = 57;
int32_t x331 = INT32_MIN;
volatile uint64_t x337 = 463159323284297949LLU;
static int32_t x338 = 5174275;
int8_t x339 = 1;
int32_t t80 = 841722252;
static int8_t x342 = INT8_MIN;
volatile int32_t t81 = 0;
int8_t x345 = -13;
uint32_t x354 = 120U;
static int32_t x358 = -13;
static int64_t x359 = INT64_MAX;
volatile int64_t t84 = -2086165257LL;
int32_t t85 = -1414034;
static uint16_t x365 = 0U;
int16_t x368 = -1792;
static int32_t t86 = -3140759;
int8_t x371 = INT8_MAX;
volatile int32_t t87 = 135;
int64_t x378 = 5530962909459695LL;
uint16_t x382 = UINT16_MAX;
int16_t x389 = INT16_MIN;
int64_t x391 = -1LL;
static volatile int32_t t92 = 1;
uint32_t t94 = 190U;
uint16_t x402 = 14U;
volatile int64_t x407 = INT64_MIN;
volatile int64_t x409 = -1631530230510LL;
volatile int64_t x410 = INT64_MAX;
static volatile int32_t t98 = 16216878;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint64_t x2 = 319LLU;
	uint32_t x3 = 35U;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -1;

	t0 = ((x1<(x2^x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = INT8_MIN;
	int16_t x7 = INT16_MIN;
	volatile uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 115952827722276830LLU;

	t1 = ((x5<(x6^x7))%x8);

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile int64_t x10 = INT64_MAX;
	static int32_t x11 = INT32_MAX;
	int16_t x12 = INT16_MAX;
	int32_t t2 = 146;

	t2 = ((x9<(x10^x11))%x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 1;
	volatile int32_t x14 = INT32_MIN;
	static int64_t x16 = -758201LL;
	volatile int64_t t3 = -219741791575163576LL;

	t3 = ((x13<(x14^x15))%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x19 = -1;
	volatile uint8_t x20 = UINT8_MAX;

	t4 = ((x17<(x18^x19))%x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	int64_t x22 = INT64_MIN;
	volatile uint64_t x23 = 863656694LLU;
	static int32_t x24 = -1;
	int32_t t5 = -17899739;

	t5 = ((x21<(x22^x23))%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	static int16_t x27 = INT16_MIN;
	static int8_t x28 = INT8_MAX;

	t6 = ((x25<(x26^x27))%x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	uint64_t x30 = UINT64_MAX;
	volatile int32_t x31 = INT32_MAX;
	uint32_t x32 = 16U;

	t7 = ((x29<(x30^x31))%x32);

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 0;
	int64_t x34 = INT64_MAX;
	int16_t x36 = INT16_MIN;
	static volatile int32_t t8 = -23;

	t8 = ((x33<(x34^x35))%x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 3U;
	int8_t x38 = INT8_MIN;
	static volatile int16_t x39 = INT16_MIN;
	int8_t x40 = INT8_MAX;

	t9 = ((x37<(x38^x39))%x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = -14;
	int64_t x42 = INT64_MIN;
	static int8_t x43 = INT8_MAX;
	static int8_t x44 = -22;
	int32_t t10 = -11791;

	t10 = ((x41<(x42^x43))%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 6U;
	int32_t x46 = -1;
	static uint8_t x47 = 7U;
	static int16_t x48 = INT16_MIN;

	t11 = ((x45<(x46^x47))%x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x49 = 2202U;
	uint8_t x51 = 46U;
	uint16_t x52 = 2000U;

	t12 = ((x49<(x50^x51))%x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -1;
	static int16_t x54 = INT16_MIN;
	int64_t x55 = -1LL;
	volatile int64_t x56 = INT64_MIN;
	int64_t t13 = 6LL;

	t13 = ((x53<(x54^x55))%x56);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -7;
	static volatile int16_t x58 = 63;
	uint32_t x59 = UINT32_MAX;
	int32_t x60 = -211;
	volatile int32_t t14 = 1;

	t14 = ((x57<(x58^x59))%x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1700;
	int16_t x62 = INT16_MIN;
	volatile int32_t x63 = INT32_MIN;
	int64_t x64 = INT64_MIN;
	volatile int64_t t15 = 12636686862537LL;

	t15 = ((x61<(x62^x63))%x64);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	int8_t x67 = 3;
	static int64_t x68 = INT64_MIN;

	t16 = ((x65<(x66^x67))%x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 8492;
	static int64_t x70 = INT64_MAX;
	static uint32_t x72 = 4215221U;
	uint32_t t17 = 25969U;

	t17 = ((x69<(x70^x71))%x72);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	uint16_t x74 = 3454U;
	uint16_t x75 = UINT16_MAX;
	static int64_t x76 = -1987766630807LL;

	t18 = ((x73<(x74^x75))%x76);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = -1;
	volatile uint16_t x78 = 7U;
	uint32_t x79 = UINT32_MAX;
	uint8_t x80 = 68U;
	static int32_t t19 = 43394607;

	t19 = ((x77<(x78^x79))%x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int64_t x82 = INT64_MAX;
	uint64_t x84 = 6LLU;
	static volatile uint64_t t20 = 30727329394LLU;

	t20 = ((x81<(x82^x83))%x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = -16889624;
	volatile int64_t t21 = 125589045527045390LL;

	t21 = ((x85<(x86^x87))%x88);

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MIN;
	int64_t x90 = -1605758LL;

	t22 = ((x89<(x90^x91))%x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 0U;
	int16_t x98 = INT16_MIN;
	uint64_t x99 = 18893575793736LLU;
	int32_t x100 = 468;
	volatile int32_t t23 = -12;

	t23 = ((x97<(x98^x99))%x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -2;
	static uint8_t x102 = UINT8_MAX;
	static uint64_t x103 = UINT64_MAX;
	int32_t t24 = -1;

	t24 = ((x101<(x102^x103))%x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x106 = -1;
	int8_t x107 = 1;
	static volatile int16_t x108 = INT16_MAX;
	int32_t t25 = -28696680;

	t25 = ((x105<(x106^x107))%x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -1;
	static volatile int8_t x110 = -1;
	volatile int8_t x111 = -50;
	volatile int8_t x112 = -1;

	t26 = ((x109<(x110^x111))%x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x114 = 3U;
	static uint32_t x115 = 0U;
	int32_t x116 = -81;
	volatile int32_t t27 = -1;

	t27 = ((x113<(x114^x115))%x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = -1LL;
	int32_t x118 = INT32_MIN;
	volatile uint32_t x119 = 116531009U;
	volatile int32_t x120 = 1;
	volatile int32_t t28 = 169;

	t28 = ((x117<(x118^x119))%x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	int16_t x122 = INT16_MAX;
	static uint16_t x123 = UINT16_MAX;
	int64_t x124 = 118545454257687143LL;
	static volatile int64_t t29 = 630458865LL;

	t29 = ((x121<(x122^x123))%x124);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	int64_t x126 = 467567619LL;
	int64_t x127 = INT64_MIN;
	static volatile int32_t t30 = -94353;

	t30 = ((x125<(x126^x127))%x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 203U;
	int64_t x130 = INT64_MIN;
	static volatile int32_t x131 = -1;
	volatile int8_t x132 = 1;
	volatile int32_t t31 = 66462455;

	t31 = ((x129<(x130^x131))%x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MIN;
	static int64_t x134 = -52162997828234LL;

	t32 = ((x133<(x134^x135))%x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = -1;

	t33 = ((x137<(x138^x139))%x140);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x141 = UINT64_MAX;
	static uint64_t x142 = 3028440LLU;
	volatile int64_t x143 = 222807LL;
	static int64_t x144 = 351152535338LL;
	int64_t t34 = -251LL;

	t34 = ((x141<(x142^x143))%x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x146 = INT16_MIN;
	int32_t x147 = -1;
	static int8_t x148 = INT8_MIN;
	static volatile int32_t t35 = -6148809;

	t35 = ((x145<(x146^x147))%x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x150 = UINT16_MAX;
	int32_t x151 = INT32_MIN;
	static int32_t x152 = -1;
	volatile int32_t t36 = -1009324698;

	t36 = ((x149<(x150^x151))%x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x153 = INT32_MIN;
	int32_t x154 = -499571;
	int16_t x155 = -9;

	t37 = ((x153<(x154^x155))%x156);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -25;
	int32_t x158 = -43;
	volatile uint16_t x160 = 449U;

	t38 = ((x157<(x158^x159))%x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	static int32_t x164 = INT32_MIN;
	int32_t t39 = 19477467;

	t39 = ((x161<(x162^x163))%x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = 22U;
	int8_t x166 = 13;
	int64_t x167 = INT64_MIN;
	int64_t x168 = 163489345LL;
	int64_t t40 = -1LL;

	t40 = ((x165<(x166^x167))%x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x171 = UINT8_MAX;
	volatile int32_t t41 = -2318304;

	t41 = ((x169<(x170^x171))%x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -1;
	static int32_t x175 = INT32_MAX;
	static volatile int64_t x176 = 484LL;

	t42 = ((x173<(x174^x175))%x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	uint8_t x178 = 37U;
	static int32_t x179 = INT32_MAX;
	volatile int32_t x180 = 1;
	volatile int32_t t43 = -3;

	t43 = ((x177<(x178^x179))%x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t t44 = 5923U;

	t44 = ((x181<(x182^x183))%x184);

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = 1;
	int8_t x187 = 6;
	int8_t x188 = 26;
	int32_t t45 = -852358135;

	t45 = ((x185<(x186^x187))%x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = UINT16_MAX;
	int64_t x190 = INT64_MAX;
	uint32_t x191 = UINT32_MAX;

	t46 = ((x189<(x190^x191))%x192);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MIN;
	int16_t x198 = INT16_MIN;
	uint16_t x199 = UINT16_MAX;
	volatile uint16_t x200 = 13U;
	static volatile int32_t t47 = 3;

	t47 = ((x197<(x198^x199))%x200);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x203 = 29;

	t48 = ((x201<(x202^x203))%x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x206 = 54U;
	int8_t x207 = 6;
	int8_t x208 = 3;
	volatile int32_t t49 = 14222500;

	t49 = ((x205<(x206^x207))%x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x210 = 1427119086827313607LLU;
	uint32_t x212 = UINT32_MAX;
	static uint32_t t50 = 30885129U;

	t50 = ((x209<(x210^x211))%x212);

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x213 = UINT8_MAX;
	static int64_t x215 = INT64_MIN;
	uint16_t x216 = 13U;
	volatile int32_t t51 = 9;

	t51 = ((x213<(x214^x215))%x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x217 = UINT64_MAX;
	static volatile int8_t x218 = 24;
	int64_t x220 = INT64_MIN;
	int64_t t52 = -141407683149255193LL;

	t52 = ((x217<(x218^x219))%x220);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x221 = INT8_MAX;
	int16_t x222 = -1;
	int32_t x223 = -1;
	static int64_t x224 = -64327435235344LL;

	t53 = ((x221<(x222^x223))%x224);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = 493499;
	static uint16_t x226 = UINT16_MAX;
	volatile int64_t x227 = 725768493832842LL;
	volatile int64_t x228 = -84409LL;
	volatile int64_t t54 = 230LL;

	t54 = ((x225<(x226^x227))%x228);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = INT8_MAX;
	int64_t x230 = -1LL;
	static int64_t x231 = -1LL;
	static uint64_t x232 = 243LLU;
	static volatile uint64_t t55 = 128344988864LLU;

	t55 = ((x229<(x230^x231))%x232);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x233 = INT16_MIN;
	uint8_t x234 = UINT8_MAX;
	static uint16_t x235 = 2U;
	int16_t x236 = -1;

	t56 = ((x233<(x234^x235))%x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x238 = 784841LLU;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t57 = -15252638;

	t57 = ((x237<(x238^x239))%x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x242 = UINT8_MAX;
	int8_t x243 = 7;
	volatile int8_t x244 = INT8_MIN;

	t58 = ((x241<(x242^x243))%x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x247 = 0;
	volatile int32_t x248 = -1;
	int32_t t59 = 796;

	t59 = ((x245<(x246^x247))%x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x250 = 25791U;
	int8_t x251 = INT8_MIN;
	uint16_t x252 = UINT16_MAX;

	t60 = ((x249<(x250^x251))%x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x253 = INT64_MAX;
	int16_t x254 = -1;
	static int32_t x255 = 708;
	int64_t x256 = INT64_MIN;
	static volatile int64_t t61 = 10367403226719937LL;

	t61 = ((x253<(x254^x255))%x256);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x262 = INT64_MAX;
	int32_t x263 = INT32_MIN;
	static int64_t x264 = INT64_MAX;
	volatile int64_t t62 = 62318795LL;

	t62 = ((x261<(x262^x263))%x264);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = 8;
	uint16_t x266 = 53U;
	static int8_t x267 = INT8_MIN;
	volatile int32_t x268 = 865454;
	int32_t t63 = 610120933;

	t63 = ((x265<(x266^x267))%x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x273 = 996U;
	int16_t x275 = INT16_MIN;
	volatile uint64_t t64 = 426LLU;

	t64 = ((x273<(x274^x275))%x276);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = -1;
	static int32_t x279 = INT32_MIN;
	int16_t x280 = -896;
	volatile int32_t t65 = 2;

	t65 = ((x277<(x278^x279))%x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x282 = -1LL;
	int64_t x283 = INT64_MAX;
	uint32_t x284 = 10962U;

	t66 = ((x281<(x282^x283))%x284);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = INT8_MAX;
	volatile uint32_t x286 = 154673384U;
	volatile uint8_t x287 = 11U;
	uint32_t t67 = 102507U;

	t67 = ((x285<(x286^x287))%x288);

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = INT32_MIN;
	static int8_t x290 = INT8_MIN;
	int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MIN;
	volatile int32_t t68 = -1;

	t68 = ((x289<(x290^x291))%x292);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x293 = INT32_MIN;
	int16_t x294 = INT16_MIN;
	int16_t x295 = -1;
	volatile int8_t x296 = INT8_MAX;

	t69 = ((x293<(x294^x295))%x296);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MAX;
	static int32_t x300 = 35;

	t70 = ((x297<(x298^x299))%x300);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = INT16_MAX;
	uint64_t x303 = UINT64_MAX;
	uint16_t x304 = 4U;
	volatile int32_t t71 = -922;

	t71 = ((x301<(x302^x303))%x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = 900985698546685357LL;
	uint32_t x306 = 3U;
	uint64_t x307 = UINT64_MAX;
	int64_t x308 = -743960LL;
	volatile int64_t t72 = 119620191LL;

	t72 = ((x305<(x306^x307))%x308);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x309 = 0U;
	int8_t x311 = -4;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t73 = -186037264;

	t73 = ((x309<(x310^x311))%x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x313 = 31U;
	int64_t x314 = -4LL;
	int64_t x315 = -1LL;
	volatile uint32_t x316 = UINT32_MAX;
	uint32_t t74 = 3878U;

	t74 = ((x313<(x314^x315))%x316);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x319 = 1479;
	static volatile uint16_t x320 = 8622U;

	t75 = ((x317<(x318^x319))%x320);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = INT8_MAX;
	int16_t x322 = -1;
	uint8_t x323 = UINT8_MAX;
	uint8_t x324 = 4U;

	t76 = ((x321<(x322^x323))%x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = -1LL;
	uint16_t x326 = UINT16_MAX;
	int8_t x327 = -1;
	static int32_t x328 = INT32_MAX;
	volatile int32_t t77 = 125891;

	t77 = ((x325<(x326^x327))%x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x329 = INT8_MIN;
	uint32_t x330 = UINT32_MAX;
	int64_t x332 = -8LL;
	volatile int64_t t78 = -394450673957519747LL;

	t78 = ((x329<(x330^x331))%x332);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x333 = -4;
	int16_t x334 = INT16_MIN;
	int16_t x335 = 1874;
	int64_t x336 = -11582576935686LL;
	int64_t t79 = 614336489LL;

	t79 = ((x333<(x334^x335))%x336);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x340 = INT16_MAX;

	t80 = ((x337<(x338^x339))%x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x341 = 0U;
	uint8_t x343 = UINT8_MAX;
	int32_t x344 = -1004073;

	t81 = ((x341<(x342^x343))%x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x346 = INT32_MAX;
	static int32_t x347 = -1;
	int64_t x348 = INT64_MIN;
	static volatile int64_t t82 = 683016339173LL;

	t82 = ((x345<(x346^x347))%x348);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x353 = 37U;
	uint64_t x355 = 330LLU;
	uint8_t x356 = UINT8_MAX;
	int32_t t83 = 10214;

	t83 = ((x353<(x354^x355))%x356);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x357 = 206U;
	volatile int64_t x360 = INT64_MAX;

	t84 = ((x357<(x358^x359))%x360);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = INT32_MAX;
	uint64_t x362 = UINT64_MAX;
	int64_t x363 = INT64_MAX;
	int16_t x364 = 1;

	t85 = ((x361<(x362^x363))%x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x366 = INT16_MAX;
	uint64_t x367 = 23534449LLU;

	t86 = ((x365<(x366^x367))%x368);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x369 = UINT16_MAX;
	uint64_t x370 = 392455745443LLU;
	int32_t x372 = 22126129;

	t87 = ((x369<(x370^x371))%x372);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x373 = INT64_MAX;
	static int16_t x374 = -744;
	uint8_t x375 = 1U;
	volatile uint32_t x376 = 28932244U;
	volatile uint32_t t88 = 85141409U;

	t88 = ((x373<(x374^x375))%x376);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = -7;
	int8_t x379 = -1;
	int8_t x380 = 1;
	int32_t t89 = -80579;

	t89 = ((x377<(x378^x379))%x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = 3870U;
	uint64_t x383 = 656931572LLU;
	int16_t x384 = INT16_MIN;
	volatile int32_t t90 = 46;

	t90 = ((x381<(x382^x383))%x384);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x385 = -1;
	int64_t x386 = 3642944943620LL;
	volatile int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t91 = 1;

	t91 = ((x385<(x386^x387))%x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x390 = 8275843U;
	int8_t x392 = INT8_MIN;

	t92 = ((x389<(x390^x391))%x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x393 = 1091844272U;
	int64_t x394 = -1LL;
	int8_t x395 = INT8_MIN;
	int64_t x396 = INT64_MIN;
	static volatile int64_t t93 = 1723LL;

	t93 = ((x393<(x394^x395))%x396);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = INT32_MAX;
	int32_t x398 = -1;
	static uint64_t x399 = 362086LLU;
	uint32_t x400 = 4551960U;

	t94 = ((x397<(x398^x399))%x400);

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x401 = 1;
	uint8_t x403 = 57U;
	uint16_t x404 = UINT16_MAX;
	int32_t t95 = -2307;

	t95 = ((x401<(x402^x403))%x404);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = INT8_MAX;
	static volatile int8_t x406 = -1;
	static uint16_t x408 = 275U;
	int32_t t96 = -143;

	t96 = ((x405<(x406^x407))%x408);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x411 = INT32_MAX;
	static uint8_t x412 = 2U;
	volatile int32_t t97 = 23;

	t97 = ((x409<(x410^x411))%x412);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x413 = 24LL;
	int64_t x414 = 64248308LL;
	int32_t x415 = -1844;
	int32_t x416 = INT32_MIN;

	t98 = ((x413<(x414^x415))%x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x417 = UINT32_MAX;
	static int32_t x418 = -49;
	static uint16_t x419 = UINT16_MAX;
	int32_t x420 = -1;
	volatile int32_t t99 = 96479417;

	t99 = ((x417<(x418^x419))%x420);

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

