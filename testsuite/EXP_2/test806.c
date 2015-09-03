#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x4 = 938U;
static int64_t x5 = 2514817678030912LL;
static int16_t x6 = 1242;
int16_t x8 = 66;
volatile uint64_t x9 = 1256LLU;
static int32_t t2 = -575478357;
volatile int32_t t5 = 111316750;
uint16_t x35 = 2U;
uint32_t x37 = UINT32_MAX;
uint64_t x40 = 210016290LLU;
int16_t x43 = INT16_MIN;
uint8_t x48 = UINT8_MAX;
int32_t x49 = -16120100;
int16_t x56 = INT16_MIN;
volatile int32_t t13 = -30416206;
int32_t x64 = 30;
int32_t x72 = INT32_MAX;
int32_t t17 = INT32_MAX;
volatile uint32_t x73 = UINT32_MAX;
int8_t x75 = INT8_MAX;
int32_t t18 = -106;
uint64_t x77 = 146115LLU;
volatile uint8_t x78 = UINT8_MAX;
volatile int32_t t20 = -6;
int32_t x85 = INT32_MIN;
int32_t t21 = 2705;
volatile uint64_t t22 = 46714LLU;
int64_t x97 = 342593LL;
volatile int16_t x101 = -40;
int64_t x105 = -1LL;
int64_t x107 = INT64_MIN;
static int32_t t28 = -22;
volatile uint64_t t32 = 123961075702129LLU;
volatile uint64_t t33 = 6939762816042465LLU;
int32_t x138 = 0;
static int64_t t34 = -4711258806LL;
int32_t t35 = -13;
static int32_t x146 = -1;
volatile int32_t x150 = 973003571;
static volatile uint32_t t37 = 89U;
static volatile int8_t x157 = -1;
int16_t x161 = INT16_MIN;
volatile int32_t t40 = 0;
volatile uint16_t x165 = 15363U;
int64_t x171 = INT64_MIN;
int16_t x184 = 1;
volatile int32_t t45 = -3;
volatile int32_t x190 = -1;
static int32_t x191 = 14429;
int8_t x192 = INT8_MIN;
uint16_t x194 = 1U;
int32_t t47 = -11;
volatile int64_t t49 = -17367048504LL;
volatile uint16_t x211 = 54U;
volatile uint32_t x212 = UINT32_MAX;
volatile uint32_t t51 = 151062U;
volatile int16_t x218 = -1070;
int8_t x219 = INT8_MIN;
uint16_t x221 = 93U;
uint16_t x223 = UINT16_MAX;
int8_t x230 = INT8_MIN;
volatile int32_t t56 = 4400551;
int8_t x234 = 13;
volatile int32_t x246 = -16827;
uint8_t x247 = 85U;
int16_t x248 = -5709;
volatile int8_t x249 = -1;
volatile int16_t x250 = INT16_MIN;
int32_t x255 = INT32_MIN;
int16_t x268 = -1;
int64_t x277 = 34103639292LL;
int16_t x283 = 13081;
volatile int32_t t71 = 216;
static uint16_t x301 = UINT16_MAX;
int32_t t73 = -212291104;
uint32_t x305 = UINT32_MAX;
int16_t x312 = INT16_MAX;
int8_t x313 = INT8_MIN;
int64_t x315 = INT64_MIN;
int64_t t76 = INT64_MIN;
volatile int32_t t78 = 281;
int32_t x331 = INT32_MIN;
int8_t x351 = INT8_MIN;
int64_t x356 = INT64_MAX;
static int8_t x362 = -1;
int64_t x363 = 4071609829LL;
uint16_t x366 = 1653U;
volatile uint64_t t89 = 7014114048389549LLU;
int16_t x372 = INT16_MIN;
volatile int64_t x376 = -1LL;
int64_t t91 = 43274611075LL;
volatile int8_t x384 = INT8_MIN;
int64_t t96 = -123077LL;
uint64_t x401 = 6577483839LLU;
static volatile int32_t t97 = 1;
uint64_t x406 = UINT64_MAX;


void f0(void) {
	int16_t x1 = -10;
	int8_t x2 = 1;
	static int32_t x3 = 719468101;
	volatile uint32_t t0 = 100U;

	t0 = ((x1<=(x2%x3))^x4);

	if (t0 != 939U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x7 = INT32_MAX;
	volatile int32_t t1 = -5762;

	t1 = ((x5<=(x6%x7))^x8);

	if (t1 != 66) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -48;
	int32_t x11 = -1;
	int32_t x12 = -1;

	t2 = ((x9<=(x10%x11))^x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int8_t x14 = INT8_MAX;
	int8_t x15 = -1;
	volatile int32_t x16 = INT32_MIN;
	volatile int32_t t3 = INT32_MIN;

	t3 = ((x13<=(x14%x15))^x16);

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -369902LL;
	static int64_t x18 = -68LL;
	int64_t x19 = -277164996365LL;
	int32_t x20 = INT32_MIN;
	int32_t t4 = 0;

	t4 = ((x17<=(x18%x19))^x20);

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -18;
	int64_t x22 = -1LL;
	static volatile uint32_t x23 = 1011U;
	uint8_t x24 = UINT8_MAX;

	t5 = ((x21<=(x22%x23))^x24);

	if (t5 != 254) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 1921U;
	static uint16_t x26 = UINT16_MAX;
	static uint8_t x27 = UINT8_MAX;
	uint16_t x28 = 2352U;
	volatile int32_t t6 = -346343;

	t6 = ((x25<=(x26%x27))^x28);

	if (t6 != 2352) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	volatile uint32_t x30 = UINT32_MAX;
	uint16_t x31 = 28U;
	int32_t x32 = -1087;
	int32_t t7 = -5;

	t7 = ((x29<=(x30%x31))^x32);

	if (t7 != -1088) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 1;
	int8_t x34 = INT8_MAX;
	int8_t x36 = -1;
	static int32_t t8 = -2;

	t8 = ((x33<=(x34%x35))^x36);

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	uint16_t x39 = 8675U;
	volatile uint64_t t9 = 14959135LLU;

	t9 = ((x37<=(x38%x39))^x40);

	if (t9 != 210016290LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x41 = -13308;
	int16_t x42 = INT16_MIN;
	int16_t x44 = INT16_MIN;
	int32_t t10 = 40;

	t10 = ((x41<=(x42%x43))^x44);

	if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = 2066626409823577LL;
	int32_t x46 = INT32_MIN;
	static int8_t x47 = -12;
	int32_t t11 = 3788;

	t11 = ((x45<=(x46%x47))^x48);

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MAX;
	int64_t x51 = INT64_MIN;
	static int32_t x52 = INT32_MIN;
	static volatile int32_t t12 = 235694;

	t12 = ((x49<=(x50%x51))^x52);

	if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = 872LL;
	uint16_t x54 = 92U;
	int32_t x55 = -2221;

	t13 = ((x53<=(x54%x55))^x56);

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 1U;
	int32_t x58 = -254;
	uint8_t x59 = 1U;
	static volatile int8_t x60 = INT8_MIN;
	int32_t t14 = 106;

	t14 = ((x57<=(x58%x59))^x60);

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 4264U;
	uint16_t x62 = 3U;
	uint16_t x63 = 9U;
	volatile int32_t t15 = 20510;

	t15 = ((x61<=(x62%x63))^x64);

	if (t15 != 30) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -4;
	static uint32_t x66 = UINT32_MAX;
	int16_t x67 = 466;
	uint16_t x68 = UINT16_MAX;
	static volatile int32_t t16 = -5;

	t16 = ((x65<=(x66%x67))^x68);

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	int8_t x70 = 0;
	int64_t x71 = INT64_MIN;

	t17 = ((x69<=(x70%x71))^x72);

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MIN;
	uint16_t x76 = 5U;

	t18 = ((x73<=(x74%x75))^x76);

	if (t18 != 5) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x79 = INT32_MIN;
	static int64_t x80 = -1LL;
	static volatile int64_t t19 = -3189805847276LL;

	t19 = ((x77<=(x78%x79))^x80);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -53461112;
	volatile int32_t x82 = INT32_MIN;
	static int32_t x83 = INT32_MIN;
	volatile int8_t x84 = INT8_MIN;

	t20 = ((x81<=(x82%x83))^x84);

	if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MIN;
	int8_t x87 = INT8_MIN;
	int32_t x88 = INT32_MIN;

	t21 = ((x85<=(x86%x87))^x88);

	if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x89 = -28LL;
	uint64_t x90 = UINT64_MAX;
	int8_t x91 = -1;
	volatile uint64_t x92 = 2643689397791768LLU;

	t22 = ((x89<=(x90%x91))^x92);

	if (t22 != 2643689397791768LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	static int16_t x94 = INT16_MIN;
	int8_t x95 = 17;
	int16_t x96 = INT16_MAX;
	int32_t t23 = 68;

	t23 = ((x93<=(x94%x95))^x96);

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = 238959884577962415LLU;
	uint16_t x99 = 4010U;
	int32_t x100 = INT32_MIN;
	int32_t t24 = INT32_MIN;

	t24 = ((x97<=(x98%x99))^x100);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = 1U;
	int16_t x103 = -1;
	volatile int64_t x104 = INT64_MIN;
	int64_t t25 = -80LL;

	t25 = ((x101<=(x102%x103))^x104);

	if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = INT16_MAX;
	int16_t x108 = 3596;
	volatile int32_t t26 = -2911;

	t26 = ((x105<=(x106%x107))^x108);

	if (t26 != 3597) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 330;
	volatile int16_t x110 = -230;
	static uint64_t x111 = 6LLU;
	volatile int64_t x112 = INT64_MAX;
	volatile int64_t t27 = INT64_MAX;

	t27 = ((x109<=(x110%x111))^x112);

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 5U;
	int64_t x114 = -63418087LL;
	uint16_t x115 = 2994U;
	int16_t x116 = INT16_MAX;

	t28 = ((x113<=(x114%x115))^x116);

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 155449019195LL;
	volatile int64_t x118 = 368417365015LL;
	int32_t x119 = -39325;
	volatile int64_t x120 = -462LL;
	volatile int64_t t29 = 3343297LL;

	t29 = ((x117<=(x118%x119))^x120);

	if (t29 != -462LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	volatile int16_t x122 = -103;
	static int64_t x123 = INT64_MIN;
	volatile int8_t x124 = 0;
	volatile int32_t t30 = 14058591;

	t30 = ((x121<=(x122%x123))^x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = 1;
	int64_t x127 = 175LL;
	int32_t x128 = -1;
	volatile int32_t t31 = 9;

	t31 = ((x125<=(x126%x127))^x128);

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 33U;
	static uint8_t x130 = 1U;
	static uint8_t x131 = 81U;
	static uint64_t x132 = 1LLU;

	t32 = ((x129<=(x130%x131))^x132);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -1;
	int32_t x134 = INT32_MAX;
	static uint16_t x135 = 14U;
	uint64_t x136 = 452008LLU;

	t33 = ((x133<=(x134%x135))^x136);

	if (t33 != 452009LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 0U;
	static volatile int8_t x139 = INT8_MIN;
	static int64_t x140 = 44466797288LL;

	t34 = ((x137<=(x138%x139))^x140);

	if (t34 != 44466797289LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int8_t x142 = 30;
	volatile int16_t x143 = INT16_MIN;
	volatile int8_t x144 = INT8_MAX;

	t35 = ((x141<=(x142%x143))^x144);

	if (t35 != 126) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 472544315669665LL;
	static volatile int16_t x147 = INT16_MAX;
	static int16_t x148 = -12911;
	volatile int32_t t36 = -2850154;

	t36 = ((x145<=(x146%x147))^x148);

	if (t36 != -12911) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -3916666;
	uint8_t x151 = 1U;
	volatile uint32_t x152 = 1185420281U;

	t37 = ((x149<=(x150%x151))^x152);

	if (t37 != 1185420280U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	static uint32_t x154 = 49977299U;
	int8_t x155 = INT8_MAX;
	int32_t x156 = INT32_MIN;
	volatile int32_t t38 = INT32_MIN;

	t38 = ((x153<=(x154%x155))^x156);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x158 = INT16_MIN;
	volatile int8_t x159 = 47;
	int8_t x160 = -2;
	int32_t t39 = -37833341;

	t39 = ((x157<=(x158%x159))^x160);

	if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = INT16_MIN;
	int32_t x163 = INT32_MIN;
	uint8_t x164 = UINT8_MAX;

	t40 = ((x161<=(x162%x163))^x164);

	if (t40 != 254) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x166 = -2291402;
	volatile int16_t x167 = INT16_MAX;
	int8_t x168 = INT8_MIN;
	int32_t t41 = 0;

	t41 = ((x165<=(x166%x167))^x168);

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	uint32_t x170 = 3873U;
	int32_t x172 = -1;
	volatile int32_t t42 = 3806763;

	t42 = ((x169<=(x170%x171))^x172);

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 2U;
	volatile int32_t x174 = INT32_MIN;
	static uint16_t x175 = UINT16_MAX;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = 3308;

	t43 = ((x173<=(x174%x175))^x176);

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x181 = -1669871;
	int32_t x182 = -1;
	uint32_t x183 = UINT32_MAX;
	volatile int32_t t44 = 642;

	t44 = ((x181<=(x182%x183))^x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x185 = INT8_MIN;
	uint32_t x186 = 772983U;
	int32_t x187 = INT32_MIN;
	uint16_t x188 = UINT16_MAX;

	t45 = ((x185<=(x186%x187))^x188);

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x189 = 2180;
	volatile int32_t t46 = 5;

	t46 = ((x189<=(x190%x191))^x192);

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = UINT64_MAX;
	uint8_t x195 = 43U;
	int16_t x196 = -2;

	t47 = ((x193<=(x194%x195))^x196);

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MIN;
	static uint16_t x198 = UINT16_MAX;
	uint8_t x199 = 83U;
	volatile int32_t x200 = -1;
	volatile int32_t t48 = 591141234;

	t48 = ((x197<=(x198%x199))^x200);

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = UINT64_MAX;
	int8_t x202 = -1;
	int32_t x203 = INT32_MIN;
	static int64_t x204 = -1LL;

	t49 = ((x201<=(x202%x203))^x204);

	if (t49 != -2LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = 0U;
	int8_t x206 = INT8_MIN;
	uint16_t x207 = 1931U;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t50 = 6992;

	t50 = ((x205<=(x206%x207))^x208);

	if (t50 != 65534) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = UINT32_MAX;
	volatile int16_t x210 = -1;

	t51 = ((x209<=(x210%x211))^x212);

	if (t51 != 4294967294U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = -3388668511978284LL;
	volatile int8_t x214 = -1;
	int16_t x215 = -14;
	static int16_t x216 = -1;
	static volatile int32_t t52 = 182;

	t52 = ((x213<=(x214%x215))^x216);

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = 1;
	int16_t x220 = INT16_MAX;
	volatile int32_t t53 = 2026;

	t53 = ((x217<=(x218%x219))^x220);

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x222 = INT32_MAX;
	uint8_t x224 = 0U;
	int32_t t54 = 417;

	t54 = ((x221<=(x222%x223))^x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x225 = 10215U;
	static uint64_t x226 = 5657341LLU;
	int32_t x227 = 77682;
	int16_t x228 = 1;
	volatile int32_t t55 = -162932561;

	t55 = ((x225<=(x226%x227))^x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = UINT16_MAX;
	int32_t x231 = 2942095;
	uint8_t x232 = UINT8_MAX;

	t56 = ((x229<=(x230%x231))^x232);

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x233 = 43727407095LL;
	uint32_t x235 = 339U;
	int8_t x236 = -1;
	volatile int32_t t57 = 5;

	t57 = ((x233<=(x234%x235))^x236);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x237 = 4196424246LLU;
	static int16_t x238 = INT16_MIN;
	static uint64_t x239 = 203217848LLU;
	static int8_t x240 = -39;
	static int32_t t58 = -321038;

	t58 = ((x237<=(x238%x239))^x240);

	if (t58 != -39) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x241 = 4417854503488LLU;
	uint64_t x242 = 265647LLU;
	static int16_t x243 = 2;
	static volatile int64_t x244 = INT64_MIN;
	int64_t t59 = INT64_MIN;

	t59 = ((x241<=(x242%x243))^x244);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x245 = 1963;
	volatile int32_t t60 = -74533681;

	t60 = ((x245<=(x246%x247))^x248);

	if (t60 != -5709) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x251 = INT32_MAX;
	int64_t x252 = INT64_MIN;
	static int64_t t61 = INT64_MIN;

	t61 = ((x249<=(x250%x251))^x252);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = UINT64_MAX;
	volatile int16_t x254 = -1720;
	int8_t x256 = 13;
	static volatile int32_t t62 = -216;

	t62 = ((x253<=(x254%x255))^x256);

	if (t62 != 13) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x257 = INT64_MIN;
	static volatile uint64_t x258 = 2LLU;
	uint64_t x259 = 118LLU;
	int64_t x260 = -7331LL;
	int64_t t63 = -1288268615998LL;

	t63 = ((x257<=(x258%x259))^x260);

	if (t63 != -7331LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = -2;
	uint8_t x262 = 0U;
	uint32_t x263 = UINT32_MAX;
	volatile int8_t x264 = INT8_MAX;
	int32_t t64 = -1;

	t64 = ((x261<=(x262%x263))^x264);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x265 = INT32_MAX;
	int32_t x266 = INT32_MIN;
	int64_t x267 = -2014235LL;
	int32_t t65 = -1865935;

	t65 = ((x265<=(x266%x267))^x268);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x269 = 1255U;
	uint32_t x270 = 5350U;
	static uint8_t x271 = 87U;
	volatile int8_t x272 = -1;
	volatile int32_t t66 = -7;

	t66 = ((x269<=(x270%x271))^x272);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x278 = 88210U;
	volatile int32_t x279 = INT32_MIN;
	int64_t x280 = 2LL;
	static volatile int64_t t67 = 29931381539LL;

	t67 = ((x277<=(x278%x279))^x280);

	if (t67 != 2LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x281 = 12500349245929LLU;
	int16_t x282 = 4995;
	volatile int64_t x284 = -35521LL;
	int64_t t68 = 932576728722024LL;

	t68 = ((x281<=(x282%x283))^x284);

	if (t68 != -35521LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = INT8_MIN;
	volatile int32_t x286 = INT32_MIN;
	uint32_t x287 = 127119U;
	uint8_t x288 = UINT8_MAX;
	int32_t t69 = -97305;

	t69 = ((x285<=(x286%x287))^x288);

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = 0U;
	volatile int16_t x290 = 27;
	int8_t x291 = INT8_MIN;
	int16_t x292 = INT16_MAX;
	volatile int32_t t70 = 660551;

	t70 = ((x289<=(x290%x291))^x292);

	if (t70 != 32766) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x293 = UINT32_MAX;
	uint16_t x294 = UINT16_MAX;
	int8_t x295 = 44;
	int16_t x296 = -2349;

	t71 = ((x293<=(x294%x295))^x296);

	if (t71 != -2349) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MIN;
	static uint8_t x298 = 85U;
	static volatile uint64_t x299 = 2169LLU;
	uint32_t x300 = 7045U;
	uint32_t t72 = 14840U;

	t72 = ((x297<=(x298%x299))^x300);

	if (t72 != 7045U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x302 = INT32_MIN;
	static uint64_t x303 = UINT64_MAX;
	int16_t x304 = 314;

	t73 = ((x301<=(x302%x303))^x304);

	if (t73 != 315) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x306 = UINT32_MAX;
	uint64_t x307 = 1716963878677945LLU;
	int16_t x308 = INT16_MIN;
	volatile int32_t t74 = -5;

	t74 = ((x305<=(x306%x307))^x308);

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MIN;
	volatile int64_t x310 = INT64_MIN;
	uint8_t x311 = 9U;
	int32_t t75 = 16;

	t75 = ((x309<=(x310%x311))^x312);

	if (t75 != 32766) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x314 = INT16_MIN;
	int64_t x316 = INT64_MIN;

	t76 = ((x313<=(x314%x315))^x316);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = -4651740;
	int64_t x318 = -1697374LL;
	int8_t x319 = INT8_MIN;
	uint8_t x320 = 105U;
	volatile int32_t t77 = 0;

	t77 = ((x317<=(x318%x319))^x320);

	if (t77 != 104) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = -397;
	volatile int64_t x322 = INT64_MIN;
	int16_t x323 = INT16_MIN;
	int8_t x324 = 2;

	t78 = ((x321<=(x322%x323))^x324);

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = 7;
	uint32_t x326 = 615U;
	volatile int64_t x327 = -6973859034LL;
	int8_t x328 = INT8_MIN;
	static int32_t t79 = -16302750;

	t79 = ((x325<=(x326%x327))^x328);

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x329 = 53;
	int8_t x330 = -3;
	uint16_t x332 = 1U;
	volatile int32_t t80 = -162695;

	t80 = ((x329<=(x330%x331))^x332);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x333 = INT8_MIN;
	static uint32_t x334 = UINT32_MAX;
	int8_t x335 = 1;
	int64_t x336 = INT64_MIN;
	int64_t t81 = INT64_MIN;

	t81 = ((x333<=(x334%x335))^x336);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x337 = 12U;
	int64_t x338 = INT64_MIN;
	static uint16_t x339 = 59U;
	volatile uint32_t x340 = UINT32_MAX;
	static volatile uint32_t t82 = UINT32_MAX;

	t82 = ((x337<=(x338%x339))^x340);

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = UINT16_MAX;
	volatile int8_t x342 = 36;
	volatile int64_t x343 = 16892342043538259LL;
	uint8_t x344 = UINT8_MAX;
	int32_t t83 = 43;

	t83 = ((x341<=(x342%x343))^x344);

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x345 = UINT16_MAX;
	uint8_t x346 = UINT8_MAX;
	uint64_t x347 = 10765234972870447LLU;
	uint8_t x348 = 23U;
	int32_t t84 = 1;

	t84 = ((x345<=(x346%x347))^x348);

	if (t84 != 23) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x349 = UINT32_MAX;
	int16_t x350 = INT16_MIN;
	volatile int8_t x352 = INT8_MIN;
	volatile int32_t t85 = -338092;

	t85 = ((x349<=(x350%x351))^x352);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x353 = UINT64_MAX;
	int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MIN;
	static volatile int64_t t86 = INT64_MAX;

	t86 = ((x353<=(x354%x355))^x356);

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x357 = INT16_MIN;
	uint8_t x358 = 0U;
	volatile int64_t x359 = 42027LL;
	uint32_t x360 = 1U;
	volatile uint32_t t87 = 113U;

	t87 = ((x357<=(x358%x359))^x360);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x361 = UINT32_MAX;
	volatile int64_t x364 = INT64_MIN;
	int64_t t88 = INT64_MIN;

	t88 = ((x361<=(x362%x363))^x364);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = INT32_MAX;
	int64_t x367 = INT64_MAX;
	uint64_t x368 = 4131345217186258LLU;

	t89 = ((x365<=(x366%x367))^x368);

	if (t89 != 4131345217186258LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = 537580386258714LL;
	volatile int8_t x370 = INT8_MIN;
	volatile int16_t x371 = INT16_MIN;
	static volatile int32_t t90 = -9581;

	t90 = ((x369<=(x370%x371))^x372);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x373 = 10428U;
	uint16_t x374 = 14U;
	uint8_t x375 = 1U;

	t91 = ((x373<=(x374%x375))^x376);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = INT16_MIN;
	uint16_t x378 = UINT16_MAX;
	int32_t x379 = INT32_MIN;
	static uint32_t x380 = UINT32_MAX;
	static volatile uint32_t t92 = 1160584U;

	t92 = ((x377<=(x378%x379))^x380);

	if (t92 != 4294967294U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x381 = 608820807854457LLU;
	static int64_t x382 = -1LL;
	int32_t x383 = INT32_MAX;
	volatile int32_t t93 = -455416898;

	t93 = ((x381<=(x382%x383))^x384);

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x385 = 9780845835357123LL;
	volatile int64_t x386 = INT64_MIN;
	int64_t x387 = -30397LL;
	static volatile uint64_t x388 = 173585279LLU;
	volatile uint64_t t94 = 1215700168482485LLU;

	t94 = ((x385<=(x386%x387))^x388);

	if (t94 != 173585279LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x389 = UINT8_MAX;
	uint32_t x390 = 29600532U;
	int8_t x391 = INT8_MIN;
	static volatile int8_t x392 = INT8_MIN;
	volatile int32_t t95 = 360338;

	t95 = ((x389<=(x390%x391))^x392);

	if (t95 != -127) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x397 = 8536U;
	uint64_t x398 = 60LLU;
	uint8_t x399 = UINT8_MAX;
	int64_t x400 = -1LL;

	t96 = ((x397<=(x398%x399))^x400);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x402 = INT64_MIN;
	static int16_t x403 = INT16_MIN;
	int8_t x404 = INT8_MIN;

	t97 = ((x401<=(x402%x403))^x404);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x405 = 6U;
	volatile int16_t x407 = 19;
	int32_t x408 = 1;
	volatile int32_t t98 = -1177766;

	t98 = ((x405<=(x406%x407))^x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = INT8_MIN;
	int16_t x410 = INT16_MAX;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = -4;
	static int32_t t99 = -27153;

	t99 = ((x409<=(x410%x411))^x412);

	if (t99 != -3) { NG(); } else { ; }
	
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

