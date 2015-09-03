#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MAX;
int16_t x8 = 1226;
uint32_t x13 = 7028113U;
static uint16_t x17 = 15U;
uint16_t x23 = 137U;
volatile uint32_t t5 = UINT32_MAX;
static int64_t x25 = INT64_MAX;
int64_t t6 = -5317152891502722LL;
volatile int64_t t7 = INT64_MIN;
int32_t x33 = -4072;
static int8_t x35 = INT8_MIN;
int64_t x39 = -1LL;
int16_t x40 = 8;
uint32_t x49 = UINT32_MAX;
int8_t x52 = INT8_MIN;
uint64_t x53 = 10LLU;
int8_t x66 = INT8_MIN;
uint32_t x71 = UINT32_MAX;
volatile int8_t x76 = INT8_MIN;
uint8_t x88 = UINT8_MAX;
int32_t x92 = INT32_MIN;
volatile int32_t t21 = INT32_MIN;
static int64_t x98 = INT64_MIN;
static volatile int8_t x99 = -2;
int32_t x105 = INT32_MIN;
int8_t x108 = INT8_MAX;
volatile int32_t t25 = -76142;
uint16_t x109 = 22U;
volatile int32_t x110 = INT32_MAX;
volatile int32_t t27 = -4583;
int64_t x130 = INT64_MIN;
static uint16_t x133 = 1U;
int32_t t31 = -1096;
uint32_t x137 = 63545U;
uint32_t x139 = UINT32_MAX;
volatile uint32_t x142 = 2354U;
volatile int64_t x147 = INT64_MAX;
int64_t t34 = 3230601LL;
int16_t x156 = INT16_MIN;
volatile int64_t x158 = -1LL;
static int32_t x159 = -394055;
static int8_t x169 = INT8_MIN;
static int8_t x172 = INT8_MIN;
static volatile int32_t x179 = 332731567;
static int8_t x185 = INT8_MIN;
volatile int32_t x202 = -7983;
static volatile int16_t x216 = -1;
static int32_t t49 = 119;
int64_t x226 = -1LL;
uint8_t x228 = UINT8_MAX;
int16_t x229 = -250;
static uint64_t x234 = 7733708820192LLU;
static volatile int64_t x240 = INT64_MAX;
int16_t x242 = INT16_MIN;
int32_t t56 = 405836765;
volatile int32_t x245 = INT32_MIN;
int32_t x252 = INT32_MIN;
int32_t t61 = -373880;
int16_t x267 = 122;
static volatile int32_t t62 = -331;
static int16_t x281 = INT16_MIN;
uint16_t x282 = 8263U;
uint32_t t67 = UINT32_MAX;
static int8_t x289 = -1;
int32_t x295 = 239;
volatile int64_t x298 = INT64_MAX;
int32_t x305 = INT32_MAX;
int32_t x313 = INT32_MIN;
uint8_t x317 = 49U;
static int16_t x318 = -104;
static int32_t t75 = -1;
uint32_t x321 = 389U;
int32_t x323 = -15;
static volatile uint32_t t77 = UINT32_MAX;
volatile int16_t x330 = -1;
static int64_t x334 = INT64_MIN;
int16_t x349 = INT16_MAX;
uint8_t x352 = UINT8_MAX;
int32_t x353 = INT32_MAX;
static int16_t x354 = -116;
int32_t x358 = INT32_MIN;
int32_t t87 = -2525325;
uint64_t x371 = 137006644979449LLU;
volatile int32_t t90 = -21844573;
int32_t x384 = -1;
int32_t x386 = 76;
int32_t x399 = INT32_MIN;
static volatile int16_t x400 = INT16_MIN;
int8_t x403 = INT8_MIN;
volatile uint32_t t96 = 1360577315U;
static int64_t t97 = -7648LL;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = -1;
	uint16_t x3 = 8353U;
	static uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 933U;

	t0 = (((x1<x2)*x3)+x4);

	if (t0 != 8352U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	static volatile uint32_t x6 = UINT32_MAX;
	int32_t t1 = -2412158;

	t1 = (((x5<x6)*x7)+x8);

	if (t1 != 33993) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int8_t x10 = 1;
	volatile int32_t x11 = INT32_MAX;
	volatile int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -58346548;

	t2 = (((x9<x10)*x11)+x12);

	if (t2 != 2147450879) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = INT64_MAX;
	static int8_t x15 = INT8_MIN;
	uint16_t x16 = 25332U;
	int32_t t3 = -2001271;

	t3 = (((x13<x14)*x15)+x16);

	if (t3 != 25204) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x18 = -3;
	int64_t x19 = -8LL;
	int8_t x20 = 1;
	int64_t t4 = -58267639LL;

	t4 = (((x17<x18)*x19)+x20);

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	uint32_t x24 = UINT32_MAX;

	t5 = (((x21<x22)*x23)+x24);

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x26 = INT32_MAX;
	int64_t x27 = INT64_MIN;
	uint16_t x28 = 5U;

	t6 = (((x25<x26)*x27)+x28);

	if (t6 != 5LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	static int32_t x30 = INT32_MIN;
	volatile int16_t x31 = -1;
	int64_t x32 = INT64_MIN;

	t7 = (((x29<x30)*x31)+x32);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = UINT16_MAX;
	int16_t x36 = 0;
	int32_t t8 = 1033314663;

	t8 = (((x33<x34)*x35)+x36);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -5185093126LL;
	uint32_t x38 = UINT32_MAX;
	static volatile int64_t t9 = 35866029LL;

	t9 = (((x37<x38)*x39)+x40);

	if (t9 != 7LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	volatile int32_t x42 = -6405;
	static volatile int16_t x43 = 1;
	static uint8_t x44 = 19U;
	int32_t t10 = -175766;

	t10 = (((x41<x42)*x43)+x44);

	if (t10 != 19) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x50 = 560845458154LL;
	int32_t x51 = 13478989;
	int32_t t11 = -3658667;

	t11 = (((x49<x50)*x51)+x52);

	if (t11 != 13478861) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x54 = INT16_MIN;
	static int64_t x55 = INT64_MIN;
	uint8_t x56 = 29U;
	int64_t t12 = -3660726513352969526LL;

	t12 = (((x53<x54)*x55)+x56);

	if (t12 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 0U;
	int16_t x58 = INT16_MIN;
	volatile int32_t x59 = INT32_MIN;
	int32_t x60 = -11574;
	int32_t t13 = -217766;

	t13 = (((x57<x58)*x59)+x60);

	if (t13 != -11574) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 129157285022LLU;
	int32_t x62 = INT32_MIN;
	uint8_t x63 = 30U;
	uint64_t x64 = 11441400695281613LLU;
	volatile uint64_t t14 = 3180593423LLU;

	t14 = (((x61<x62)*x63)+x64);

	if (t14 != 11441400695281643LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MIN;
	volatile int32_t t15 = 6916;

	t15 = (((x65<x66)*x67)+x68);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = 2;
	uint8_t x70 = 10U;
	volatile int32_t x72 = INT32_MIN;
	volatile uint32_t t16 = 2U;

	t16 = (((x69<x70)*x71)+x72);

	if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	volatile uint64_t x74 = 871410671286LLU;
	int64_t x75 = INT64_MIN;
	int64_t t17 = 15556567935LL;

	t17 = (((x73<x74)*x75)+x76);

	if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -189563641063663615LL;
	int64_t x78 = -1LL;
	int16_t x79 = 45;
	int64_t x80 = 1864227439977LL;
	int64_t t18 = -13LL;

	t18 = (((x77<x78)*x79)+x80);

	if (t18 != 1864227440022LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = -1334062821LL;
	static uint32_t x82 = 56U;
	static int64_t x83 = INT64_MIN;
	static int8_t x84 = 0;
	volatile int64_t t19 = INT64_MIN;

	t19 = (((x81<x82)*x83)+x84);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x85 = INT64_MIN;
	int16_t x86 = INT16_MIN;
	int64_t x87 = -356255066524838618LL;
	int64_t t20 = 523LL;

	t20 = (((x85<x86)*x87)+x88);

	if (t20 != -356255066524838363LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x89 = UINT8_MAX;
	int32_t x90 = INT32_MIN;
	static uint16_t x91 = 2U;

	t21 = (((x89<x90)*x91)+x92);

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 214U;
	volatile int8_t x94 = -1;
	int32_t x95 = INT32_MAX;
	int32_t x96 = INT32_MIN;
	volatile int32_t t22 = 62961;

	t22 = (((x93<x94)*x95)+x96);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 1U;
	uint64_t x100 = 3LLU;
	static volatile uint64_t t23 = 20LLU;

	t23 = (((x97<x98)*x99)+x100);

	if (t23 != 3LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MAX;
	int8_t x102 = INT8_MAX;
	int8_t x103 = 5;
	static int8_t x104 = INT8_MIN;
	int32_t t24 = 988;

	t24 = (((x101<x102)*x103)+x104);

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x106 = -506LL;
	int8_t x107 = INT8_MIN;

	t25 = (((x105<x106)*x107)+x108);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x111 = INT8_MAX;
	volatile uint64_t x112 = UINT64_MAX;
	uint64_t t26 = 12598LLU;

	t26 = (((x109<x110)*x111)+x112);

	if (t26 != 126LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MIN;
	int8_t x114 = -1;
	volatile uint16_t x115 = 35U;
	int8_t x116 = -1;

	t27 = (((x113<x114)*x115)+x116);

	if (t27 != 34) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MAX;
	uint16_t x122 = 26478U;
	int32_t x123 = -90033;
	uint8_t x124 = 1U;
	volatile int32_t t28 = -287;

	t28 = (((x121<x122)*x123)+x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MAX;
	int8_t x126 = INT8_MIN;
	uint32_t x127 = 3099U;
	static int16_t x128 = -1;
	static volatile uint32_t t29 = UINT32_MAX;

	t29 = (((x125<x126)*x127)+x128);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x129 = 148331009U;
	int16_t x131 = INT16_MAX;
	int8_t x132 = INT8_MIN;
	int32_t t30 = 3933206;

	t30 = (((x129<x130)*x131)+x132);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x134 = UINT16_MAX;
	int8_t x135 = INT8_MAX;
	int32_t x136 = INT32_MIN;

	t31 = (((x133<x134)*x135)+x136);

	if (t31 != -2147483521) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x138 = UINT32_MAX;
	uint16_t x140 = 0U;
	uint32_t t32 = UINT32_MAX;

	t32 = (((x137<x138)*x139)+x140);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = 0;
	static int8_t x143 = INT8_MIN;
	uint32_t x144 = 178806U;
	uint32_t t33 = 249952519U;

	t33 = (((x141<x142)*x143)+x144);

	if (t33 != 178678U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x145 = INT32_MAX;
	int32_t x146 = 230;
	uint8_t x148 = 36U;

	t34 = (((x145<x146)*x147)+x148);

	if (t34 != 36LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = 765549759LL;
	static int32_t x150 = INT32_MAX;
	static volatile int32_t x151 = 2129900;
	int16_t x152 = INT16_MAX;
	volatile int32_t t35 = -7187;

	t35 = (((x149<x150)*x151)+x152);

	if (t35 != 2162667) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MIN;
	uint64_t x154 = 15LLU;
	int8_t x155 = INT8_MIN;
	volatile int32_t t36 = -1720799;

	t36 = (((x153<x154)*x155)+x156);

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MAX;
	volatile uint8_t x160 = UINT8_MAX;
	static volatile int32_t t37 = 33574715;

	t37 = (((x157<x158)*x159)+x160);

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = 4;
	uint8_t x162 = 111U;
	uint8_t x163 = UINT8_MAX;
	volatile uint16_t x164 = 181U;
	int32_t t38 = -25334469;

	t38 = (((x161<x162)*x163)+x164);

	if (t38 != 436) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MAX;
	uint32_t x166 = UINT32_MAX;
	volatile uint8_t x167 = 1U;
	static int32_t x168 = 188288648;
	volatile int32_t t39 = 8447247;

	t39 = (((x165<x166)*x167)+x168);

	if (t39 != 188288648) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x170 = INT16_MIN;
	static int16_t x171 = -123;
	volatile int32_t t40 = -417538;

	t40 = (((x169<x170)*x171)+x172);

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = INT8_MIN;
	volatile int8_t x174 = 3;
	int64_t x175 = -1LL;
	int16_t x176 = -1;
	int64_t t41 = 30082496LL;

	t41 = (((x173<x174)*x175)+x176);

	if (t41 != -2LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = UINT16_MAX;
	int64_t x178 = INT64_MIN;
	uint8_t x180 = 48U;
	static int32_t t42 = -51935;

	t42 = (((x177<x178)*x179)+x180);

	if (t42 != 48) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x181 = -1;
	int8_t x182 = 1;
	static uint64_t x183 = 49LLU;
	volatile int32_t x184 = -36;
	uint64_t t43 = 8917638946891598LLU;

	t43 = (((x181<x182)*x183)+x184);

	if (t43 != 13LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x186 = INT16_MIN;
	int8_t x187 = -1;
	volatile int64_t x188 = -1LL;
	volatile int64_t t44 = 131756833865LL;

	t44 = (((x185<x186)*x187)+x188);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = 1281427U;
	uint16_t x198 = 413U;
	static int8_t x199 = -1;
	int64_t x200 = 306763186148566893LL;
	int64_t t45 = -13LL;

	t45 = (((x197<x198)*x199)+x200);

	if (t45 != 306763186148566893LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = 3513326161LLU;
	uint8_t x203 = UINT8_MAX;
	volatile int32_t x204 = INT32_MIN;
	int32_t t46 = -1;

	t46 = (((x201<x202)*x203)+x204);

	if (t46 != -2147483393) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x205 = UINT32_MAX;
	uint64_t x206 = 4LLU;
	int64_t x207 = -1LL;
	uint16_t x208 = 3963U;
	int64_t t47 = -501840LL;

	t47 = (((x205<x206)*x207)+x208);

	if (t47 != 3963LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x209 = 3234733956813639LLU;
	volatile int16_t x210 = 1;
	int16_t x211 = -3;
	int8_t x212 = 3;
	int32_t t48 = -3391133;

	t48 = (((x209<x210)*x211)+x212);

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = UINT32_MAX;
	static int64_t x214 = -17426160703044190LL;
	static int8_t x215 = 0;

	t49 = (((x213<x214)*x215)+x216);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x217 = INT8_MIN;
	uint16_t x218 = UINT16_MAX;
	uint32_t x219 = 1130012885U;
	int32_t x220 = -179251;
	volatile uint32_t t50 = 35122353U;

	t50 = (((x217<x218)*x219)+x220);

	if (t50 != 1129833634U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = 1;
	int16_t x222 = INT16_MAX;
	uint8_t x223 = 67U;
	uint32_t x224 = UINT32_MAX;
	volatile uint32_t t51 = 12U;

	t51 = (((x221<x222)*x223)+x224);

	if (t51 != 66U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x225 = 361860903U;
	uint64_t x227 = 1629802638806170LLU;
	uint64_t t52 = 3621390LLU;

	t52 = (((x225<x226)*x227)+x228);

	if (t52 != 255LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x230 = -1;
	volatile int64_t x231 = 1642001048404947LL;
	static int8_t x232 = 7;
	int64_t t53 = 246421364820328LL;

	t53 = (((x229<x230)*x231)+x232);

	if (t53 != 1642001048404954LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = 1;
	int32_t x235 = -53;
	uint8_t x236 = 2U;
	static int32_t t54 = 5776;

	t54 = (((x233<x234)*x235)+x236);

	if (t54 != -51) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = -1;
	int16_t x238 = -266;
	int64_t x239 = INT64_MIN;
	static int64_t t55 = INT64_MAX;

	t55 = (((x237<x238)*x239)+x240);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = 14680778636854755LLU;
	uint8_t x243 = 40U;
	int8_t x244 = INT8_MIN;

	t56 = (((x241<x242)*x243)+x244);

	if (t56 != -88) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x246 = UINT64_MAX;
	static int32_t x247 = -69020;
	volatile int32_t x248 = -439705927;
	static volatile int32_t t57 = -464280072;

	t57 = (((x245<x246)*x247)+x248);

	if (t57 != -439774947) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x249 = UINT32_MAX;
	uint16_t x250 = 2U;
	static int16_t x251 = 220;
	volatile int32_t t58 = INT32_MIN;

	t58 = (((x249<x250)*x251)+x252);

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x253 = INT16_MIN;
	uint64_t x254 = 25147427LLU;
	static int8_t x255 = INT8_MIN;
	uint8_t x256 = UINT8_MAX;
	int32_t t59 = 20;

	t59 = (((x253<x254)*x255)+x256);

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x257 = 20;
	int8_t x258 = -1;
	int32_t x259 = -224119;
	uint32_t x260 = 640457U;
	static volatile uint32_t t60 = 53U;

	t60 = (((x257<x258)*x259)+x260);

	if (t60 != 640457U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x261 = 531782280105458358LLU;
	int32_t x262 = -4939;
	volatile int32_t x263 = -1;
	static int32_t x264 = 463415192;

	t61 = (((x261<x262)*x263)+x264);

	if (t61 != 463415191) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = INT16_MIN;
	int16_t x266 = INT16_MAX;
	int8_t x268 = INT8_MIN;

	t62 = (((x265<x266)*x267)+x268);

	if (t62 != -6) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = INT16_MIN;
	volatile uint64_t x270 = 194452607455512LLU;
	uint16_t x271 = UINT16_MAX;
	int16_t x272 = 575;
	int32_t t63 = 19671065;

	t63 = (((x269<x270)*x271)+x272);

	if (t63 != 575) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = -3981596474196424798LL;
	uint64_t x274 = 2605764197798LLU;
	int64_t x275 = INT64_MAX;
	uint32_t x276 = 2U;
	static int64_t t64 = -324759LL;

	t64 = (((x273<x274)*x275)+x276);

	if (t64 != 2LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x277 = INT64_MIN;
	int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MIN;
	int8_t x280 = 10;
	int32_t t65 = 1044676455;

	t65 = (((x277<x278)*x279)+x280);

	if (t65 != 10) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x283 = 25;
	int8_t x284 = INT8_MIN;
	int32_t t66 = 10324;

	t66 = (((x281<x282)*x283)+x284);

	if (t66 != -103) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = INT16_MIN;
	int32_t x286 = INT32_MIN;
	uint32_t x287 = 115789U;
	volatile int8_t x288 = -1;

	t67 = (((x285<x286)*x287)+x288);

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x290 = 9U;
	static uint64_t x291 = 3656379440363622LLU;
	uint64_t x292 = 80085235808328LLU;
	volatile uint64_t t68 = 3LLU;

	t68 = (((x289<x290)*x291)+x292);

	if (t68 != 3736464676171950LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x293 = 1446627445649LLU;
	uint32_t x294 = 6U;
	int32_t x296 = 2854516;
	int32_t t69 = -1732;

	t69 = (((x293<x294)*x295)+x296);

	if (t69 != 2854516) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = 5;
	static volatile int16_t x299 = -1;
	uint32_t x300 = UINT32_MAX;
	volatile uint32_t t70 = 5657085U;

	t70 = (((x297<x298)*x299)+x300);

	if (t70 != 4294967294U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x301 = INT8_MIN;
	static uint64_t x302 = 89699LLU;
	uint8_t x303 = 15U;
	int16_t x304 = INT16_MIN;
	static volatile int32_t t71 = -1956316;

	t71 = (((x301<x302)*x303)+x304);

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x306 = INT16_MAX;
	int32_t x307 = 20053;
	static int32_t x308 = -1;
	int32_t t72 = 248;

	t72 = (((x305<x306)*x307)+x308);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x309 = INT16_MIN;
	int32_t x310 = INT32_MAX;
	int64_t x311 = 7697917398279LL;
	static uint8_t x312 = 2U;
	int64_t t73 = 2341588824648388217LL;

	t73 = (((x309<x310)*x311)+x312);

	if (t73 != 7697917398281LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x314 = INT32_MIN;
	uint16_t x315 = 657U;
	uint16_t x316 = 30U;
	volatile int32_t t74 = -532031;

	t74 = (((x313<x314)*x315)+x316);

	if (t74 != 30) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x319 = 4183192;
	static int8_t x320 = INT8_MIN;

	t75 = (((x317<x318)*x319)+x320);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x322 = 85255U;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t76 = -842816399;

	t76 = (((x321<x322)*x323)+x324);

	if (t76 != 65520) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = -1;
	int8_t x326 = INT8_MIN;
	uint32_t x327 = UINT32_MAX;
	uint32_t x328 = UINT32_MAX;

	t77 = (((x325<x326)*x327)+x328);

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = 2;
	uint32_t x331 = UINT32_MAX;
	static int8_t x332 = -4;
	volatile uint32_t t78 = 34017U;

	t78 = (((x329<x330)*x331)+x332);

	if (t78 != 4294967292U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = -1;
	int32_t x335 = 845688;
	int16_t x336 = INT16_MAX;
	int32_t t79 = -159188;

	t79 = (((x333<x334)*x335)+x336);

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x337 = 2U;
	volatile int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MIN;
	static volatile uint32_t x340 = 6330U;
	volatile uint32_t t80 = 329U;

	t80 = (((x337<x338)*x339)+x340);

	if (t80 != 6330U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = -1;
	uint32_t x342 = 118669375U;
	volatile int8_t x343 = -1;
	uint32_t x344 = 111946790U;
	uint32_t t81 = 838073705U;

	t81 = (((x341<x342)*x343)+x344);

	if (t81 != 111946790U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x345 = UINT8_MAX;
	int32_t x346 = -6;
	int64_t x347 = INT64_MIN;
	uint8_t x348 = UINT8_MAX;
	int64_t t82 = -301634307087780283LL;

	t82 = (((x345<x346)*x347)+x348);

	if (t82 != 255LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x350 = -4;
	int8_t x351 = INT8_MIN;
	volatile int32_t t83 = -4310276;

	t83 = (((x349<x350)*x351)+x352);

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x355 = INT16_MIN;
	int64_t x356 = 937989980697909823LL;
	int64_t t84 = -16742836LL;

	t84 = (((x353<x354)*x355)+x356);

	if (t84 != 937989980697909823LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x357 = 52U;
	int64_t x359 = 389652LL;
	static uint32_t x360 = 128093U;
	int64_t t85 = -19474855LL;

	t85 = (((x357<x358)*x359)+x360);

	if (t85 != 128093LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = INT16_MIN;
	int64_t x362 = INT64_MIN;
	volatile int64_t x363 = -1237LL;
	static volatile int64_t x364 = INT64_MAX;
	volatile int64_t t86 = INT64_MAX;

	t86 = (((x361<x362)*x363)+x364);

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x365 = UINT16_MAX;
	int16_t x366 = -1;
	static int32_t x367 = INT32_MIN;
	int16_t x368 = -5556;

	t87 = (((x365<x366)*x367)+x368);

	if (t87 != -5556) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = INT64_MIN;
	int64_t x370 = 4345150227321LL;
	static uint32_t x372 = 721694U;
	volatile uint64_t t88 = 147407538629LLU;

	t88 = (((x369<x370)*x371)+x372);

	if (t88 != 137006645701143LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x373 = 8007U;
	static int16_t x374 = 0;
	int32_t x375 = INT32_MAX;
	int32_t x376 = INT32_MAX;
	volatile int32_t t89 = INT32_MAX;

	t89 = (((x373<x374)*x375)+x376);

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x377 = INT32_MIN;
	int64_t x378 = INT64_MAX;
	volatile int16_t x379 = INT16_MIN;
	uint16_t x380 = 9625U;

	t90 = (((x377<x378)*x379)+x380);

	if (t90 != -23143) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x381 = 34U;
	uint16_t x382 = 101U;
	int16_t x383 = -1;
	static volatile int32_t t91 = 96163;

	t91 = (((x381<x382)*x383)+x384);

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x385 = INT8_MIN;
	int64_t x387 = 580LL;
	volatile uint64_t x388 = 58935857185081LLU;
	volatile uint64_t t92 = 170362370LLU;

	t92 = (((x385<x386)*x387)+x388);

	if (t92 != 58935857185661LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = INT64_MIN;
	uint64_t x390 = UINT64_MAX;
	static int8_t x391 = 2;
	static uint8_t x392 = 23U;
	volatile int32_t t93 = 434;

	t93 = (((x389<x390)*x391)+x392);

	if (t93 != 25) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = 70492;
	int32_t x394 = -1;
	static volatile int8_t x395 = INT8_MIN;
	volatile uint16_t x396 = 1525U;
	volatile int32_t t94 = 329883;

	t94 = (((x393<x394)*x395)+x396);

	if (t94 != 1525) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x397 = 1LL;
	int64_t x398 = -124525LL;
	int32_t t95 = -220785663;

	t95 = (((x397<x398)*x399)+x400);

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MIN;
	int8_t x402 = INT8_MIN;
	uint32_t x404 = 89130U;

	t96 = (((x401<x402)*x403)+x404);

	if (t96 != 89130U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x405 = 22U;
	volatile int32_t x406 = INT32_MIN;
	int64_t x407 = INT64_MIN;
	int32_t x408 = INT32_MIN;

	t97 = (((x405<x406)*x407)+x408);

	if (t97 != -2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x409 = INT8_MAX;
	uint32_t x410 = 95970U;
	static int16_t x411 = -1;
	int8_t x412 = INT8_MAX;
	volatile int32_t t98 = -2;

	t98 = (((x409<x410)*x411)+x412);

	if (t98 != 126) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x413 = UINT8_MAX;
	int8_t x414 = INT8_MIN;
	int64_t x415 = -23735LL;
	static volatile uint8_t x416 = 6U;
	volatile int64_t t99 = 1611869953LL;

	t99 = (((x413<x414)*x415)+x416);

	if (t99 != 6LL) { NG(); } else { ; }
	
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

