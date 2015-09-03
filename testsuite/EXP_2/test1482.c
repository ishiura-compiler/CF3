#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = 15167377571LLU;
static int64_t x3 = INT64_MIN;
int8_t x4 = 0;
volatile uint8_t x5 = UINT8_MAX;
static volatile int8_t x8 = INT8_MIN;
static int64_t x11 = 0LL;
int8_t x19 = -6;
int64_t x39 = INT64_MIN;
static uint16_t x40 = UINT16_MAX;
int16_t x43 = INT16_MAX;
int8_t x45 = INT8_MIN;
int8_t x46 = 61;
int32_t t11 = -257;
static int32_t t12 = -1549;
volatile uint32_t t13 = 10U;
static int8_t x58 = INT8_MIN;
volatile uint32_t t14 = 893U;
int16_t x66 = 0;
int16_t x67 = -13207;
static int32_t t16 = -6;
static int64_t x70 = INT64_MIN;
uint32_t x72 = 122325U;
int8_t x73 = INT8_MAX;
int64_t x75 = INT64_MIN;
uint64_t x76 = 51338913274LLU;
int16_t x77 = -4439;
int64_t x89 = INT64_MIN;
int8_t x92 = -16;
static int32_t x93 = INT32_MAX;
volatile int32_t t24 = 457159364;
volatile int16_t x106 = 3;
static int8_t x108 = 2;
volatile uint8_t x109 = UINT8_MAX;
volatile int32_t t27 = -664;
static uint8_t x113 = 6U;
int8_t x119 = 0;
int64_t x126 = INT64_MAX;
uint8_t x130 = 0U;
volatile uint64_t x134 = UINT64_MAX;
int64_t x138 = INT64_MIN;
int32_t t35 = -112365;
static uint64_t x146 = 343698LLU;
volatile int64_t x147 = INT64_MIN;
static uint32_t t36 = 911U;
volatile int16_t x151 = 0;
static int8_t x158 = -1;
static volatile uint16_t x161 = 71U;
uint16_t x169 = 4U;
uint32_t x172 = 578U;
uint32_t t42 = 70U;
int32_t t43 = 0;
static int8_t x177 = -1;
uint16_t x180 = 2U;
int64_t x182 = -101998LL;
uint32_t x187 = UINT32_MAX;
uint8_t x189 = 113U;
volatile int64_t t48 = 325LL;
static volatile uint32_t x199 = 250567U;
uint64_t x202 = 1611LLU;
int8_t x206 = INT8_MAX;
static volatile int16_t x207 = -4;
uint64_t x210 = 646567363052360052LLU;
int8_t x213 = -1;
int32_t x219 = INT32_MAX;
int8_t x226 = INT8_MIN;
int64_t t57 = -11LL;
volatile int32_t t58 = -43820;
volatile int8_t x241 = INT8_MAX;
int32_t x243 = -1;
volatile int32_t t60 = -1076;
int64_t x247 = INT64_MAX;
int16_t x249 = -1;
static uint8_t x252 = 0U;
uint8_t x254 = 3U;
int64_t t63 = 615321943934LL;
int8_t x260 = INT8_MIN;
int64_t t65 = INT64_MIN;
int32_t x271 = -1;
volatile int64_t x284 = INT64_MAX;
int64_t x288 = 51595LL;
int32_t x289 = INT32_MAX;
volatile int8_t x294 = INT8_MIN;
volatile int64_t x296 = -21659LL;
int8_t x298 = INT8_MIN;
static int8_t x299 = 34;
volatile int16_t x306 = INT16_MIN;
static int32_t x307 = INT32_MIN;
int32_t t77 = 204921;
int16_t x317 = -1;
uint8_t x318 = 111U;
int8_t x334 = INT8_MAX;
int32_t x344 = INT32_MIN;
uint64_t x346 = 32108317529LLU;
uint8_t x348 = 66U;
int32_t x355 = INT32_MIN;
uint32_t x367 = UINT32_MAX;
static uint16_t x369 = UINT16_MAX;
int32_t x372 = INT32_MIN;
static int16_t x374 = INT16_MIN;
int32_t x376 = -1;
volatile int32_t x377 = -7;
int64_t x381 = INT64_MIN;
int8_t x383 = INT8_MIN;
uint32_t x387 = 4144869U;
volatile uint16_t x392 = 6317U;
int64_t x393 = INT64_MAX;
int64_t t98 = INT64_MAX;
volatile int32_t x397 = INT32_MAX;


void f0(void) {
	int8_t x1 = -4;
	static int32_t t0 = -1079427;

	t0 = ((x1<=(x2<x3))^x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 1409526884172LLU;
	static volatile int8_t x7 = 0;
	static int32_t t1 = 198897;

	t1 = ((x5<=(x6<x7))^x8);

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int64_t x10 = -1LL;
	static uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = 212543U;

	t2 = ((x9<=(x10<x11))^x12);

	if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int32_t x14 = INT32_MIN;
	int64_t x15 = 3078102874542LL;
	volatile int8_t x16 = 16;
	volatile int32_t t3 = 547;

	t3 = ((x13<=(x14<x15))^x16);

	if (t3 != 17) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 0U;
	uint8_t x18 = 85U;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -70467;

	t4 = ((x17<=(x18<x19))^x20);

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	int64_t x22 = INT64_MIN;
	int8_t x23 = INT8_MIN;
	volatile int32_t x24 = INT32_MIN;
	volatile int32_t t5 = INT32_MIN;

	t5 = ((x21<=(x22<x23))^x24);

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int16_t x26 = -1;
	uint16_t x27 = UINT16_MAX;
	int32_t x28 = -1;
	int32_t t6 = 6006979;

	t6 = ((x25<=(x26<x27))^x28);

	if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -12371;
	static volatile int16_t x30 = INT16_MIN;
	int8_t x31 = -35;
	uint8_t x32 = 6U;
	static int32_t t7 = 4;

	t7 = ((x29<=(x30<x31))^x32);

	if (t7 != 7) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	static int16_t x34 = INT16_MIN;
	volatile int8_t x35 = INT8_MIN;
	int32_t x36 = -43718072;
	int32_t t8 = -77573;

	t8 = ((x33<=(x34<x35))^x36);

	if (t8 != -43718072) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	int64_t x38 = INT64_MIN;
	int32_t t9 = 1396781;

	t9 = ((x37<=(x38<x39))^x40);

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	static volatile int16_t x42 = -1;
	int32_t x44 = -1;
	volatile int32_t t10 = -271231483;

	t10 = ((x41<=(x42<x43))^x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x47 = -1014;
	int32_t x48 = INT32_MIN;

	t11 = ((x45<=(x46<x47))^x48);

	if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -1;
	volatile int8_t x50 = -1;
	int64_t x51 = -230746LL;
	static uint8_t x52 = 11U;

	t12 = ((x49<=(x50<x51))^x52);

	if (t12 != 10) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x53 = UINT64_MAX;
	int64_t x54 = 37710522167955LL;
	uint16_t x55 = 1U;
	uint32_t x56 = 338U;

	t13 = ((x53<=(x54<x55))^x56);

	if (t13 != 338U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 15U;
	static int16_t x59 = INT16_MIN;
	uint32_t x60 = 554U;

	t14 = ((x57<=(x58<x59))^x60);

	if (t14 != 554U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -429;
	volatile int32_t x62 = INT32_MIN;
	int8_t x63 = -1;
	uint64_t x64 = 0LLU;
	uint64_t t15 = 7946496667918LLU;

	t15 = ((x61<=(x62<x63))^x64);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	int16_t x68 = -1;

	t16 = ((x65<=(x66<x67))^x68);

	if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -1;
	static int8_t x71 = INT8_MIN;
	uint32_t t17 = 21797U;

	t17 = ((x69<=(x70<x71))^x72);

	if (t17 != 122324U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x74 = 340074LLU;
	volatile uint64_t t18 = 6842421886LLU;

	t18 = ((x73<=(x74<x75))^x76);

	if (t18 != 51338913274LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = 0U;
	uint64_t x79 = UINT64_MAX;
	uint32_t x80 = 98U;
	volatile uint32_t t19 = 31314493U;

	t19 = ((x77<=(x78<x79))^x80);

	if (t19 != 99U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = UINT8_MAX;
	volatile int64_t x82 = INT64_MAX;
	volatile int8_t x83 = -1;
	int8_t x84 = INT8_MIN;
	int32_t t20 = -77670022;

	t20 = ((x81<=(x82<x83))^x84);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	int16_t x86 = -134;
	uint32_t x87 = 360U;
	int16_t x88 = -1;
	int32_t t21 = 41;

	t21 = ((x85<=(x86<x87))^x88);

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = -1LL;
	static int64_t x91 = INT64_MAX;
	volatile int32_t t22 = 203;

	t22 = ((x89<=(x90<x91))^x92);

	if (t22 != -15) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = -1;
	static int16_t x95 = -1;
	uint8_t x96 = 43U;
	volatile int32_t t23 = 60;

	t23 = ((x93<=(x94<x95))^x96);

	if (t23 != 43) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int8_t x98 = -1;
	int32_t x99 = INT32_MIN;
	int8_t x100 = 2;

	t24 = ((x97<=(x98<x99))^x100);

	if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	volatile uint8_t x102 = 30U;
	volatile uint8_t x103 = 6U;
	static int32_t x104 = -53208;
	static int32_t t25 = -455;

	t25 = ((x101<=(x102<x103))^x104);

	if (t25 != -53208) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MIN;
	int16_t x107 = INT16_MIN;
	volatile int32_t t26 = 0;

	t26 = ((x105<=(x106<x107))^x108);

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = INT64_MAX;
	int8_t x111 = INT8_MIN;
	static int8_t x112 = 0;

	t27 = ((x109<=(x110<x111))^x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x114 = 698U;
	int32_t x115 = INT32_MAX;
	uint16_t x116 = 102U;
	static volatile int32_t t28 = -176466026;

	t28 = ((x113<=(x114<x115))^x116);

	if (t28 != 102) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	int8_t x118 = -15;
	int8_t x120 = -1;
	int32_t t29 = 6;

	t29 = ((x117<=(x118<x119))^x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = INT8_MAX;
	int8_t x122 = -1;
	int32_t x123 = -420400;
	int32_t x124 = INT32_MIN;
	int32_t t30 = INT32_MIN;

	t30 = ((x121<=(x122<x123))^x124);

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int32_t x127 = -42;
	int64_t x128 = INT64_MIN;
	static int64_t t31 = 1790458816894487376LL;

	t31 = ((x125<=(x126<x127))^x128);

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	int32_t x131 = -1;
	int8_t x132 = INT8_MAX;
	int32_t t32 = 81;

	t32 = ((x129<=(x130<x131))^x132);

	if (t32 != 126) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = UINT8_MAX;
	uint32_t x135 = 13U;
	int8_t x136 = -1;
	static int32_t t33 = -109;

	t33 = ((x133<=(x134<x135))^x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 10784U;
	static int16_t x139 = INT16_MAX;
	int32_t x140 = 209038;
	volatile int32_t t34 = 229416656;

	t34 = ((x137<=(x138<x139))^x140);

	if (t34 != 209038) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = 829U;
	volatile int16_t x142 = -1;
	uint16_t x143 = 9U;
	int8_t x144 = INT8_MIN;

	t35 = ((x141<=(x142<x143))^x144);

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	volatile uint32_t x148 = 636848623U;

	t36 = ((x145<=(x146<x147))^x148);

	if (t36 != 636848623U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MAX;
	uint32_t x152 = 5652U;
	volatile uint32_t t37 = 92332311U;

	t37 = ((x149<=(x150<x151))^x152);

	if (t37 != 5653U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	int8_t x154 = INT8_MIN;
	uint64_t x155 = UINT64_MAX;
	uint32_t x156 = UINT32_MAX;
	volatile uint32_t t38 = 4892603U;

	t38 = ((x153<=(x154<x155))^x156);

	if (t38 != 4294967294U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 1409;
	volatile int16_t x159 = 1;
	volatile uint64_t x160 = UINT64_MAX;
	static uint64_t t39 = UINT64_MAX;

	t39 = ((x157<=(x158<x159))^x160);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x162 = 4015215617751LL;
	volatile uint64_t x163 = 7865323724864LLU;
	uint16_t x164 = 585U;
	volatile int32_t t40 = 3;

	t40 = ((x161<=(x162<x163))^x164);

	if (t40 != 585) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	int8_t x166 = INT8_MAX;
	uint32_t x167 = 206564188U;
	static int8_t x168 = -1;
	static int32_t t41 = -5916686;

	t41 = ((x165<=(x166<x167))^x168);

	if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = 38112093;
	static int8_t x171 = INT8_MIN;

	t42 = ((x169<=(x170<x171))^x172);

	if (t42 != 578U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 461U;
	uint32_t x174 = 1996243U;
	int32_t x175 = INT32_MAX;
	int32_t x176 = -51346420;

	t43 = ((x173<=(x174<x175))^x176);

	if (t43 != -51346420) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = -1;
	int8_t x179 = 59;
	static int32_t t44 = -1305;

	t44 = ((x177<=(x178<x179))^x180);

	if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 709;
	volatile int64_t x183 = 1585864602710624LL;
	int64_t x184 = INT64_MAX;
	volatile int64_t t45 = INT64_MAX;

	t45 = ((x181<=(x182<x183))^x184);

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x185 = 9U;
	static int64_t x186 = -1LL;
	uint8_t x188 = UINT8_MAX;
	int32_t t46 = 0;

	t46 = ((x185<=(x186<x187))^x188);

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x190 = 2U;
	uint32_t x191 = UINT32_MAX;
	static volatile int32_t x192 = 37568;
	volatile int32_t t47 = 379665;

	t47 = ((x189<=(x190<x191))^x192);

	if (t47 != 37568) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	uint64_t x194 = 107284079LLU;
	int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MIN;

	t48 = ((x193<=(x194<x195))^x196);

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MIN;
	volatile int32_t x198 = 278;
	uint8_t x200 = 1U;
	int32_t t49 = 0;

	t49 = ((x197<=(x198<x199))^x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	volatile int64_t x203 = INT64_MIN;
	uint8_t x204 = 0U;
	volatile int32_t t50 = -21369387;

	t50 = ((x201<=(x202<x203))^x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	int16_t x208 = 15;
	volatile int32_t t51 = 209;

	t51 = ((x205<=(x206<x207))^x208);

	if (t51 != 14) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 4U;
	volatile int16_t x211 = INT16_MAX;
	volatile uint32_t x212 = UINT32_MAX;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = ((x209<=(x210<x211))^x212);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x214 = 133862822656741LLU;
	static int64_t x215 = INT64_MAX;
	int64_t x216 = INT64_MIN;
	volatile int64_t t53 = 2291238517LL;

	t53 = ((x213<=(x214<x215))^x216);

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	uint8_t x218 = 26U;
	static int64_t x220 = INT64_MAX;
	int64_t t54 = INT64_MAX;

	t54 = ((x217<=(x218<x219))^x220);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -24495073;
	uint16_t x222 = 574U;
	volatile uint16_t x223 = 354U;
	uint32_t x224 = UINT32_MAX;
	uint32_t t55 = 86817709U;

	t55 = ((x221<=(x222<x223))^x224);

	if (t55 != 4294967294U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = INT32_MIN;
	int32_t x227 = INT32_MIN;
	uint8_t x228 = 6U;
	int32_t t56 = -1;

	t56 = ((x225<=(x226<x227))^x228);

	if (t56 != 7) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -403551248;
	volatile uint64_t x230 = UINT64_MAX;
	volatile int16_t x231 = INT16_MIN;
	volatile int64_t x232 = INT64_MIN;

	t57 = ((x229<=(x230<x231))^x232);

	if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 0U;
	volatile int16_t x234 = INT16_MAX;
	int16_t x235 = INT16_MIN;
	int16_t x236 = INT16_MIN;

	t58 = ((x233<=(x234<x235))^x236);

	if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = INT32_MIN;
	static int8_t x238 = INT8_MIN;
	static int16_t x239 = INT16_MAX;
	static int64_t x240 = -1LL;
	static volatile int64_t t59 = -11691864944008LL;

	t59 = ((x237<=(x238<x239))^x240);

	if (t59 != -2LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x242 = 23925U;
	uint8_t x244 = 0U;

	t60 = ((x241<=(x242<x243))^x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MAX;
	static uint16_t x246 = 442U;
	volatile uint8_t x248 = UINT8_MAX;
	int32_t t61 = 35;

	t61 = ((x245<=(x246<x247))^x248);

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = 58U;
	volatile uint64_t x251 = 73931615098LLU;
	int32_t t62 = 27;

	t62 = ((x249<=(x250<x251))^x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1861;
	int8_t x255 = -1;
	int64_t x256 = -774LL;

	t63 = ((x253<=(x254<x255))^x256);

	if (t63 != -773LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	static uint16_t x258 = 0U;
	uint8_t x259 = 1U;
	int32_t t64 = 1261;

	t64 = ((x257<=(x258<x259))^x260);

	if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = INT16_MAX;
	static int8_t x262 = INT8_MIN;
	uint8_t x263 = UINT8_MAX;
	int64_t x264 = INT64_MIN;

	t65 = ((x261<=(x262<x263))^x264);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	uint64_t x266 = 7617074813LLU;
	uint8_t x267 = 5U;
	int16_t x268 = INT16_MAX;
	int32_t t66 = -17020;

	t66 = ((x265<=(x266<x267))^x268);

	if (t66 != 32766) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 2U;
	static uint8_t x270 = UINT8_MAX;
	int32_t x272 = -5104667;
	volatile int32_t t67 = 64571;

	t67 = ((x269<=(x270<x271))^x272);

	if (t67 != -5104667) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	static int16_t x274 = -10190;
	uint64_t x275 = 129480718324260201LLU;
	volatile int64_t x276 = 3LL;
	int64_t t68 = 60366LL;

	t68 = ((x273<=(x274<x275))^x276);

	if (t68 != 2LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -1;
	int32_t x278 = INT32_MIN;
	uint8_t x279 = 59U;
	uint8_t x280 = 67U;
	static volatile int32_t t69 = 153;

	t69 = ((x277<=(x278<x279))^x280);

	if (t69 != 66) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 124949LL;
	static int64_t x282 = -26802185992569LL;
	static volatile int8_t x283 = INT8_MAX;
	volatile int64_t t70 = INT64_MAX;

	t70 = ((x281<=(x282<x283))^x284);

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -37;
	int64_t x286 = INT64_MIN;
	int64_t x287 = INT64_MAX;
	int64_t t71 = -121151LL;

	t71 = ((x285<=(x286<x287))^x288);

	if (t71 != 51594LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x290 = 125324;
	int64_t x291 = INT64_MIN;
	volatile int8_t x292 = INT8_MIN;
	int32_t t72 = 5046199;

	t72 = ((x289<=(x290<x291))^x292);

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x293 = UINT64_MAX;
	uint64_t x295 = UINT64_MAX;
	volatile int64_t t73 = 3151675802243LL;

	t73 = ((x293<=(x294<x295))^x296);

	if (t73 != -21659LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t74 = 0;

	t74 = ((x297<=(x298<x299))^x300);

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 1U;
	int32_t x302 = -1;
	int32_t x303 = -1;
	int8_t x304 = -1;
	int32_t t75 = 45;

	t75 = ((x301<=(x302<x303))^x304);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = 7;
	int32_t x308 = -1;
	volatile int32_t t76 = 256;

	t76 = ((x305<=(x306<x307))^x308);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = 804U;
	static int16_t x310 = INT16_MIN;
	volatile uint8_t x311 = 2U;
	int16_t x312 = INT16_MAX;

	t77 = ((x309<=(x310<x311))^x312);

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 0U;
	uint64_t x314 = UINT64_MAX;
	int32_t x315 = -148;
	static uint32_t x316 = UINT32_MAX;
	static volatile uint32_t t78 = 696623126U;

	t78 = ((x313<=(x314<x315))^x316);

	if (t78 != 4294967294U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x319 = INT32_MIN;
	int64_t x320 = INT64_MAX;
	int64_t t79 = 307417224898LL;

	t79 = ((x317<=(x318<x319))^x320);

	if (t79 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = -1480;
	static int32_t x322 = 15229861;
	int64_t x323 = INT64_MAX;
	int32_t x324 = 68371536;
	int32_t t80 = 43062617;

	t80 = ((x321<=(x322<x323))^x324);

	if (t80 != 68371537) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 12;
	int8_t x326 = -1;
	int64_t x327 = 68175LL;
	static int8_t x328 = INT8_MIN;
	int32_t t81 = 59;

	t81 = ((x325<=(x326<x327))^x328);

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = -3404549LL;
	int16_t x330 = -31;
	int16_t x331 = 327;
	static uint32_t x332 = UINT32_MAX;
	static volatile uint32_t t82 = 420U;

	t82 = ((x329<=(x330<x331))^x332);

	if (t82 != 4294967294U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 2U;
	static uint32_t x335 = 309548974U;
	uint8_t x336 = 0U;
	volatile int32_t t83 = -653012503;

	t83 = ((x333<=(x334<x335))^x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	volatile uint64_t x338 = 7035LLU;
	uint32_t x339 = UINT32_MAX;
	volatile uint64_t x340 = UINT64_MAX;
	volatile uint64_t t84 = 185281241LLU;

	t84 = ((x337<=(x338<x339))^x340);

	if (t84 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	int16_t x342 = -1;
	int16_t x343 = INT16_MIN;
	static volatile int32_t t85 = -9;

	t85 = ((x341<=(x342<x343))^x344);

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	int16_t x347 = INT16_MIN;
	volatile int32_t t86 = 202530699;

	t86 = ((x345<=(x346<x347))^x348);

	if (t86 != 66) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MIN;
	int32_t x351 = INT32_MIN;
	int64_t x352 = -727LL;
	volatile int64_t t87 = 11799LL;

	t87 = ((x349<=(x350<x351))^x352);

	if (t87 != -728LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = INT16_MIN;
	uint64_t x354 = 180696803436LLU;
	int16_t x356 = INT16_MIN;
	int32_t t88 = 197955;

	t88 = ((x353<=(x354<x355))^x356);

	if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	int64_t x358 = INT64_MIN;
	volatile int16_t x359 = INT16_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = -1207597;

	t89 = ((x357<=(x358<x359))^x360);

	if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 3U;
	static int32_t x362 = -1;
	int32_t x363 = INT32_MIN;
	int64_t x364 = INT64_MIN;
	int64_t t90 = INT64_MIN;

	t90 = ((x361<=(x362<x363))^x364);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	int64_t x366 = -1LL;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = INT32_MIN;

	t91 = ((x365<=(x366<x367))^x368);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x370 = UINT16_MAX;
	volatile int64_t x371 = -142LL;
	volatile int32_t t92 = INT32_MIN;

	t92 = ((x369<=(x370<x371))^x372);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = -1;
	int8_t x375 = INT8_MIN;
	int32_t t93 = -39767308;

	t93 = ((x373<=(x374<x375))^x376);

	if (t93 != -2) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = -1;
	int16_t x379 = -106;
	volatile int64_t x380 = INT64_MIN;
	int64_t t94 = -125LL;

	t94 = ((x377<=(x378<x379))^x380);

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x382 = 175361282551LLU;
	uint16_t x384 = UINT16_MAX;
	int32_t t95 = -2046;

	t95 = ((x381<=(x382<x383))^x384);

	if (t95 != 65534) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int64_t x386 = 251817305705LL;
	uint64_t x388 = UINT64_MAX;
	uint64_t t96 = 7276136889611LLU;

	t96 = ((x385<=(x386<x387))^x388);

	if (t96 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = INT16_MAX;
	static int8_t x390 = -43;
	int64_t x391 = -1LL;
	int32_t t97 = -687369;

	t97 = ((x389<=(x390<x391))^x392);

	if (t97 != 6317) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x394 = INT32_MIN;
	static int64_t x395 = -1318894743LL;
	int64_t x396 = INT64_MAX;

	t98 = ((x393<=(x394<x395))^x396);

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x398 = INT64_MIN;
	int64_t x399 = INT64_MIN;
	volatile int64_t x400 = 873296LL;
	volatile int64_t t99 = 10020LL;

	t99 = ((x397<=(x398<x399))^x400);

	if (t99 != 873296LL) { NG(); } else { ; }
	
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

