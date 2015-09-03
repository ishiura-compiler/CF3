#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x6 = INT16_MIN;
uint64_t x8 = UINT64_MAX;
int8_t x14 = -1;
int8_t x27 = INT8_MIN;
int16_t x28 = INT16_MIN;
volatile int8_t x29 = 1;
int32_t t7 = 3;
static volatile uint8_t x34 = UINT8_MAX;
volatile int64_t x36 = -1LL;
uint16_t x40 = UINT16_MAX;
int64_t x50 = 129052304435413493LL;
int8_t x52 = INT8_MIN;
volatile int32_t t12 = -993960;
int64_t x57 = -1LL;
static uint64_t x64 = 59383570386487784LLU;
int16_t x69 = INT16_MIN;
static volatile int64_t x73 = INT64_MIN;
uint16_t x75 = 414U;
volatile int32_t x78 = -1;
int64_t x97 = -1LL;
volatile int8_t x104 = INT8_MAX;
int8_t x112 = INT8_MAX;
uint32_t x118 = 1U;
int32_t x121 = INT32_MIN;
int64_t x122 = INT64_MIN;
static int64_t t30 = -22476097385973589LL;
int32_t t35 = 89347916;
static int64_t x150 = INT64_MAX;
static uint64_t x154 = 14218222112LLU;
uint16_t x156 = 925U;
uint16_t x160 = UINT16_MAX;
int32_t t39 = -3;
int64_t x162 = 1075917769810LL;
int8_t x165 = INT8_MAX;
int32_t x172 = INT32_MIN;
volatile int16_t x174 = INT16_MAX;
int16_t x176 = INT16_MIN;
static volatile int8_t x181 = INT8_MIN;
static int64_t x183 = INT64_MAX;
int32_t x184 = -1;
volatile int32_t t45 = -46;
int64_t x186 = -1LL;
uint8_t x192 = 38U;
int32_t t48 = 7;
uint16_t x202 = 1292U;
volatile uint32_t x203 = 10588221U;
volatile uint32_t t50 = 1767U;
int32_t x205 = -511;
volatile int64_t x207 = INT64_MIN;
int8_t x208 = INT8_MIN;
int64_t x212 = -1LL;
int64_t x218 = -1LL;
uint64_t x225 = UINT64_MAX;
volatile int32_t x234 = -213047;
uint64_t x236 = UINT64_MAX;
static volatile uint64_t t58 = 4455363427LLU;
static volatile int16_t x237 = -1;
int16_t x242 = INT16_MIN;
uint8_t x243 = UINT8_MAX;
int64_t x250 = INT64_MIN;
int32_t x252 = INT32_MAX;
int64_t x257 = INT64_MAX;
int64_t x258 = 12LL;
static int32_t x260 = INT32_MIN;
int8_t x266 = -1;
static int32_t x267 = INT32_MIN;
uint64_t x270 = UINT64_MAX;
int8_t x276 = INT8_MIN;
volatile int64_t x277 = -1171051039305860467LL;
volatile int8_t x280 = -1;
int32_t x283 = -79978662;
volatile int64_t t70 = 51841806283024972LL;
int64_t x288 = INT64_MIN;
int64_t t71 = -1LL;
static uint32_t x289 = 24U;
int32_t x290 = -686;
volatile int32_t t72 = -2283;
uint8_t x304 = UINT8_MAX;
int16_t x308 = 4;
volatile uint16_t x316 = 12U;
int16_t x323 = INT16_MIN;
static volatile uint32_t t80 = 1039007U;
int32_t x338 = 4162561;
int8_t x348 = INT8_MIN;
uint16_t x351 = 10597U;
volatile int32_t x353 = INT32_MAX;
static volatile uint64_t x361 = 512928454LLU;
static int8_t x363 = INT8_MIN;
uint64_t x364 = 338225980749769000LLU;
uint64_t t90 = 163LLU;
volatile int8_t x365 = -1;
volatile int8_t x371 = -1;
uint32_t t92 = 3U;
uint16_t x373 = 2U;
static volatile int8_t x374 = -1;
static volatile int32_t t94 = -29523;
uint8_t x384 = UINT8_MAX;
uint16_t x386 = 26U;
volatile int32_t x393 = 0;
static volatile int32_t t98 = 750314069;
uint8_t x398 = 34U;
int32_t x399 = INT32_MAX;
volatile int32_t x400 = INT32_MIN;


void f0(void) {
	static uint64_t x1 = 6636710LLU;
	static uint16_t x2 = 210U;
	uint32_t x3 = UINT32_MAX;
	static int64_t x4 = -1LL;
	int64_t t0 = 5288550193738LL;

	t0 = ((x1<(x2^x3))&x4);

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int32_t x7 = -133214968;
	volatile uint64_t t1 = 10137844915LLU;

	t1 = ((x5<(x6^x7))&x8);

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int32_t x10 = INT32_MIN;
	static volatile int8_t x11 = INT8_MIN;
	uint32_t x12 = 1881U;
	uint32_t t2 = 10632609U;

	t2 = ((x9<(x10^x11))&x12);

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int32_t x15 = 1;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 2275;

	t3 = ((x13<(x14^x15))&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 3U;
	int8_t x18 = INT8_MIN;
	int32_t x19 = 29225995;
	uint8_t x20 = 0U;
	volatile int32_t t4 = 33059507;

	t4 = ((x17<(x18^x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = UINT64_MAX;
	uint64_t x22 = 3876350015484078LLU;
	uint64_t x23 = 403358LLU;
	volatile int32_t x24 = 16;
	int32_t t5 = -12996299;

	t5 = ((x21<(x22^x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int16_t x26 = INT16_MIN;
	volatile int32_t t6 = 3759961;

	t6 = ((x25<(x26^x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x30 = 25511949LLU;
	int8_t x31 = INT8_MIN;
	static uint16_t x32 = 14812U;

	t7 = ((x29<(x30^x31))&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint8_t x35 = 14U;
	volatile int64_t t8 = 21317539660822762LL;

	t8 = ((x33<(x34^x35))&x36);

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = -15;
	int8_t x38 = -5;
	int32_t x39 = -1;
	static int32_t t9 = 1367043;

	t9 = ((x37<(x38^x39))&x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	uint8_t x42 = 5U;
	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = -116;

	t10 = ((x41<(x42^x43))&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 69U;
	int16_t x46 = INT16_MIN;
	uint8_t x47 = 1U;
	volatile int16_t x48 = INT16_MIN;
	int32_t t11 = -5;

	t11 = ((x45<(x46^x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	int16_t x51 = INT16_MIN;

	t12 = ((x49<(x50^x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int16_t x54 = -163;
	uint64_t x55 = 1549550075092LLU;
	static uint8_t x56 = UINT8_MAX;
	int32_t t13 = -13763;

	t13 = ((x53<(x54^x55))&x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	static volatile int8_t x59 = INT8_MIN;
	int64_t x60 = -1198548313587083965LL;
	volatile int64_t t14 = 535959003909728LL;

	t14 = ((x57<(x58^x59))&x60);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int8_t x62 = INT8_MIN;
	uint64_t x63 = UINT64_MAX;
	static uint64_t t15 = 894031448776934LLU;

	t15 = ((x61<(x62^x63))&x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1380;
	int8_t x66 = INT8_MIN;
	static int16_t x67 = 3889;
	int8_t x68 = 0;
	volatile int32_t t16 = -134187846;

	t16 = ((x65<(x66^x67))&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x70 = 125U;
	int16_t x71 = 1458;
	int32_t x72 = 63291226;
	volatile int32_t t17 = -10670;

	t17 = ((x69<(x70^x71))&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = -33028261190LL;
	int64_t x76 = 1LL;
	int64_t t18 = -114LL;

	t18 = ((x73<(x74^x75))&x76);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 5069240U;
	volatile int64_t x79 = 122LL;
	volatile int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 1155122;

	t19 = ((x77<(x78^x79))&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 16231;
	int16_t x82 = 704;
	uint8_t x83 = 4U;
	uint8_t x84 = 110U;
	int32_t t20 = -4084;

	t20 = ((x81<(x82^x83))&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MAX;
	int64_t x86 = INT64_MAX;
	static volatile int32_t x87 = 104564;
	static int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -1862;

	t21 = ((x85<(x86^x87))&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 4637702991LLU;
	int16_t x90 = INT16_MAX;
	volatile int64_t x91 = INT64_MIN;
	uint64_t x92 = 0LLU;
	static uint64_t t22 = 117195369423654171LLU;

	t22 = ((x89<(x90^x91))&x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = -442271951841068LL;
	static int16_t x94 = -1;
	uint8_t x95 = 2U;
	static uint32_t x96 = 27U;
	static volatile uint32_t t23 = 0U;

	t23 = ((x93<(x94^x95))&x96);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x98 = -1;
	int32_t x99 = INT32_MAX;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -421944293;

	t24 = ((x97<(x98^x99))&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int8_t x102 = INT8_MIN;
	int8_t x103 = INT8_MAX;
	int32_t t25 = 14;

	t25 = ((x101<(x102^x103))&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	int8_t x106 = INT8_MIN;
	static uint8_t x107 = UINT8_MAX;
	volatile int16_t x108 = INT16_MIN;
	int32_t t26 = -1994;

	t26 = ((x105<(x106^x107))&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	static int32_t x110 = -1;
	uint8_t x111 = 0U;
	volatile int32_t t27 = -22328159;

	t27 = ((x109<(x110^x111))&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = INT32_MIN;
	static int32_t x114 = -1;
	int64_t x115 = INT64_MAX;
	static uint8_t x116 = 59U;
	static volatile int32_t t28 = 323903187;

	t28 = ((x113<(x114^x115))&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	int8_t x119 = 2;
	static int32_t x120 = INT32_MIN;
	volatile int32_t t29 = -135721;

	t29 = ((x117<(x118^x119))&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x123 = -1;
	static int64_t x124 = INT64_MIN;

	t30 = ((x121<(x122^x123))&x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int32_t x126 = -901159872;
	uint64_t x127 = 8279331990463LLU;
	int64_t x128 = -1LL;
	static volatile int64_t t31 = 930LL;

	t31 = ((x125<(x126^x127))&x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = UINT64_MAX;
	int8_t x130 = -1;
	volatile uint32_t x131 = UINT32_MAX;
	uint16_t x132 = 21832U;
	static volatile int32_t t32 = 0;

	t32 = ((x129<(x130^x131))&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	uint32_t x134 = UINT32_MAX;
	uint32_t x135 = UINT32_MAX;
	int64_t x136 = INT64_MAX;
	int64_t t33 = 317LL;

	t33 = ((x133<(x134^x135))&x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = UINT16_MAX;
	static int32_t x138 = INT32_MIN;
	int8_t x139 = INT8_MAX;
	volatile int16_t x140 = INT16_MIN;
	volatile int32_t t34 = -45;

	t34 = ((x137<(x138^x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = -5;
	static volatile int32_t x142 = INT32_MIN;
	int32_t x143 = -1;
	uint8_t x144 = 14U;

	t35 = ((x141<(x142^x143))&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	static uint32_t x146 = UINT32_MAX;
	uint16_t x147 = 2254U;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = -54036001;

	t36 = ((x145<(x146^x147))&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	volatile uint32_t x151 = 2180U;
	static int16_t x152 = INT16_MIN;
	static volatile int32_t t37 = -252777;

	t37 = ((x149<(x150^x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 2275LLU;
	uint8_t x155 = 4U;
	int32_t t38 = -12919403;

	t38 = ((x153<(x154^x155))&x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	int16_t x158 = -9175;
	volatile int16_t x159 = INT16_MIN;

	t39 = ((x157<(x158^x159))&x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = 10618U;
	volatile int64_t x163 = INT64_MIN;
	uint32_t x164 = UINT32_MAX;
	uint32_t t40 = 2U;

	t40 = ((x161<(x162^x163))&x164);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x166 = 99999234U;
	int32_t x167 = INT32_MIN;
	volatile int8_t x168 = -1;
	volatile int32_t t41 = 15;

	t41 = ((x165<(x166^x167))&x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 6U;
	static uint16_t x170 = 217U;
	int16_t x171 = 15813;
	volatile int32_t t42 = -6596343;

	t42 = ((x169<(x170^x171))&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 5U;
	int8_t x175 = -1;
	volatile int32_t t43 = 632281;

	t43 = ((x173<(x174^x175))&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -90;
	uint8_t x178 = 1U;
	int32_t x179 = INT32_MIN;
	int8_t x180 = INT8_MIN;
	static volatile int32_t t44 = -731;

	t44 = ((x177<(x178^x179))&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x182 = -1;

	t45 = ((x181<(x182^x183))&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	uint32_t x187 = UINT32_MAX;
	uint64_t x188 = 0LLU;
	volatile uint64_t t46 = 159418037405664058LLU;

	t46 = ((x185<(x186^x187))&x188);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 599677744883LLU;
	uint8_t x190 = UINT8_MAX;
	static volatile int64_t x191 = 4482169100395LL;
	volatile int32_t t47 = 50585523;

	t47 = ((x189<(x190^x191))&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 1U;
	uint32_t x194 = 6580490U;
	volatile uint64_t x195 = UINT64_MAX;
	uint16_t x196 = 2979U;

	t48 = ((x193<(x194^x195))&x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x197 = INT64_MIN;
	int16_t x198 = -1;
	uint64_t x199 = 1327388839193044LLU;
	uint32_t x200 = 10773U;
	uint32_t t49 = 519727U;

	t49 = ((x197<(x198^x199))&x200);

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	static uint32_t x204 = 8987983U;

	t50 = ((x201<(x202^x203))&x204);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = INT32_MIN;
	int32_t t51 = 1045046;

	t51 = ((x205<(x206^x207))&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x209 = -1;
	volatile int64_t x210 = -1LL;
	int64_t x211 = INT64_MIN;
	int64_t t52 = 644824LL;

	t52 = ((x209<(x210^x211))&x212);

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = 1LL;
	int32_t x214 = INT32_MAX;
	int32_t x215 = 25885;
	int64_t x216 = -1LL;
	int64_t t53 = 648838LL;

	t53 = ((x213<(x214^x215))&x216);

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	int16_t x219 = -1;
	static volatile uint8_t x220 = 27U;
	volatile int32_t t54 = -78416632;

	t54 = ((x217<(x218^x219))&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 2U;
	volatile int32_t x222 = -1;
	uint32_t x223 = UINT32_MAX;
	volatile uint32_t x224 = UINT32_MAX;
	volatile uint32_t t55 = 244459U;

	t55 = ((x221<(x222^x223))&x224);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = INT64_MIN;
	static int16_t x227 = INT16_MAX;
	uint64_t x228 = 2512913500480766288LLU;
	static uint64_t t56 = 63792187770945229LLU;

	t56 = ((x225<(x226^x227))&x228);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 14114LLU;
	uint32_t x230 = 30U;
	static int64_t x231 = 73865LL;
	int32_t x232 = INT32_MAX;
	volatile int32_t t57 = -94125754;

	t57 = ((x229<(x230^x231))&x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 474U;
	int16_t x235 = -1;

	t58 = ((x233<(x234^x235))&x236);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = 19;
	uint64_t x239 = 3354261LLU;
	static uint8_t x240 = 4U;
	int32_t t59 = 1705;

	t59 = ((x237<(x238^x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	uint32_t x244 = UINT32_MAX;
	static uint32_t t60 = 8819U;

	t60 = ((x241<(x242^x243))&x244);

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 10U;
	int16_t x246 = INT16_MAX;
	static uint64_t x247 = 6540LLU;
	static volatile int32_t x248 = -2665533;
	static volatile int32_t t61 = 440640759;

	t61 = ((x245<(x246^x247))&x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MAX;
	int16_t x251 = INT16_MIN;
	volatile int32_t t62 = 3;

	t62 = ((x249<(x250^x251))&x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -782408569LL;
	static int32_t x254 = -1;
	static uint64_t x255 = 444784435822674559LLU;
	int16_t x256 = INT16_MIN;
	int32_t t63 = 453641960;

	t63 = ((x253<(x254^x255))&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x259 = 4159;
	volatile int32_t t64 = -77233;

	t64 = ((x257<(x258^x259))&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	int16_t x262 = INT16_MAX;
	volatile uint16_t x263 = UINT16_MAX;
	uint16_t x264 = 0U;
	int32_t t65 = -57717209;

	t65 = ((x261<(x262^x263))&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	int64_t x268 = 3LL;
	int64_t t66 = -33LL;

	t66 = ((x265<(x266^x267))&x268);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 8172U;
	static uint64_t x271 = UINT64_MAX;
	int16_t x272 = INT16_MAX;
	static volatile int32_t t67 = 56080581;

	t67 = ((x269<(x270^x271))&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = 1U;
	int16_t x274 = -1;
	static uint16_t x275 = 2791U;
	static int32_t t68 = -165414;

	t68 = ((x273<(x274^x275))&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x278 = 238U;
	int8_t x279 = INT8_MIN;
	int32_t t69 = 191022463;

	t69 = ((x277<(x278^x279))&x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	int8_t x282 = -20;
	static int64_t x284 = 279174309912193285LL;

	t70 = ((x281<(x282^x283))&x284);

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MAX;
	uint64_t x287 = 1103181234854011LLU;

	t71 = ((x285<(x286^x287))&x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x291 = 3U;
	uint16_t x292 = 432U;

	t72 = ((x289<(x290^x291))&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	int16_t x294 = -29;
	int32_t x295 = 636;
	static volatile int64_t x296 = 96940741LL;
	int64_t t73 = 6617LL;

	t73 = ((x293<(x294^x295))&x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x297 = UINT32_MAX;
	uint32_t x298 = 24143970U;
	int64_t x299 = INT64_MAX;
	volatile uint16_t x300 = 1U;
	volatile int32_t t74 = -36;

	t74 = ((x297<(x298^x299))&x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	int32_t x302 = 1205536;
	int32_t x303 = -7423555;
	int32_t t75 = -2988;

	t75 = ((x301<(x302^x303))&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = INT64_MAX;
	int16_t x306 = INT16_MIN;
	volatile int64_t x307 = INT64_MIN;
	volatile int32_t t76 = 130;

	t76 = ((x305<(x306^x307))&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 12429U;
	int64_t x310 = -1LL;
	int8_t x311 = -32;
	int16_t x312 = -23;
	volatile int32_t t77 = -43238996;

	t77 = ((x309<(x310^x311))&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	int16_t x314 = INT16_MIN;
	uint8_t x315 = UINT8_MAX;
	volatile int32_t t78 = -2426;

	t78 = ((x313<(x314^x315))&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x317 = 53170686556LLU;
	volatile int16_t x318 = INT16_MIN;
	volatile uint8_t x319 = 5U;
	int16_t x320 = INT16_MAX;
	static int32_t t79 = -6976;

	t79 = ((x317<(x318^x319))&x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x321 = 17U;
	int16_t x322 = INT16_MIN;
	uint32_t x324 = 119U;

	t80 = ((x321<(x322^x323))&x324);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	int64_t x326 = -2088242025LL;
	volatile int64_t x327 = 1372057LL;
	uint32_t x328 = UINT32_MAX;
	volatile uint32_t t81 = 5890900U;

	t81 = ((x325<(x326^x327))&x328);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = 323999675479LL;
	uint16_t x330 = UINT16_MAX;
	uint32_t x331 = 3419U;
	uint32_t x332 = 32215U;
	static uint32_t t82 = 4U;

	t82 = ((x329<(x330^x331))&x332);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	static int32_t x334 = -1;
	int8_t x335 = INT8_MAX;
	static int8_t x336 = INT8_MIN;
	int32_t t83 = 0;

	t83 = ((x333<(x334^x335))&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = 1597;
	volatile int8_t x339 = INT8_MIN;
	int16_t x340 = -3943;
	int32_t t84 = 2021967;

	t84 = ((x337<(x338^x339))&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 32;
	static int32_t x342 = INT32_MIN;
	volatile int8_t x343 = -1;
	int64_t x344 = -59856741444694LL;
	int64_t t85 = 122404591116LL;

	t85 = ((x341<(x342^x343))&x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	uint64_t x346 = UINT64_MAX;
	uint16_t x347 = UINT16_MAX;
	int32_t t86 = -5595833;

	t86 = ((x345<(x346^x347))&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	volatile uint64_t x350 = UINT64_MAX;
	int64_t x352 = -1LL;
	int64_t t87 = 28439736912LL;

	t87 = ((x349<(x350^x351))&x352);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x354 = 23LLU;
	uint32_t x355 = 59U;
	uint8_t x356 = 21U;
	static int32_t t88 = -1;

	t88 = ((x353<(x354^x355))&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -461680282LL;
	uint16_t x358 = 38U;
	int16_t x359 = INT16_MAX;
	int8_t x360 = -1;
	int32_t t89 = -392;

	t89 = ((x357<(x358^x359))&x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = 215048;

	t90 = ((x361<(x362^x363))&x364);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x366 = INT32_MAX;
	int16_t x367 = INT16_MIN;
	int16_t x368 = INT16_MIN;
	int32_t t91 = 92009;

	t91 = ((x365<(x366^x367))&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int32_t x370 = INT32_MAX;
	static uint32_t x372 = 2070929U;

	t92 = ((x369<(x370^x371))&x372);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x375 = INT32_MAX;
	int32_t x376 = INT32_MIN;
	int32_t t93 = -1;

	t93 = ((x373<(x374^x375))&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x377 = 1465859986755498613LLU;
	volatile int64_t x378 = INT64_MAX;
	int16_t x379 = -1;
	static int16_t x380 = INT16_MAX;

	t94 = ((x377<(x378^x379))&x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 67U;
	int64_t x382 = INT64_MAX;
	static int8_t x383 = -9;
	volatile int32_t t95 = -812017694;

	t95 = ((x381<(x382^x383))&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -126480LL;
	uint32_t x387 = 1773U;
	static volatile int32_t x388 = -502;
	int32_t t96 = -783168;

	t96 = ((x385<(x386^x387))&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = UINT32_MAX;
	int16_t x390 = INT16_MIN;
	int64_t x391 = 646237LL;
	uint16_t x392 = 42U;
	volatile int32_t t97 = -1615898;

	t97 = ((x389<(x390^x391))&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x394 = 50;
	uint32_t x395 = 0U;
	uint16_t x396 = 10U;

	t98 = ((x393<(x394^x395))&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	static int32_t t99 = -2481881;

	t99 = ((x397<(x398^x399))&x400);

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

