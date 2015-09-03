#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 11U;
int16_t x4 = INT16_MAX;
volatile uint16_t x7 = UINT16_MAX;
int64_t x8 = INT64_MAX;
static volatile int64_t t1 = INT64_MAX;
static volatile int8_t x18 = INT8_MIN;
uint16_t x23 = 171U;
static int32_t x28 = -427;
uint64_t x29 = 7636717334LLU;
static int64_t t7 = -8LL;
volatile uint64_t x38 = UINT64_MAX;
int64_t x40 = INT64_MAX;
int8_t x42 = INT8_MIN;
volatile int32_t x45 = 37;
static int32_t x48 = -1;
int32_t x51 = 29782182;
int32_t t12 = -1069766;
int32_t t13 = 30815359;
int8_t x57 = INT8_MIN;
uint32_t x60 = 54966U;
static uint64_t x62 = UINT64_MAX;
int16_t x63 = INT16_MIN;
volatile uint64_t t15 = 603744854664723219LLU;
uint8_t x73 = 0U;
static uint64_t x79 = 1563058LLU;
int8_t x84 = INT8_MIN;
int16_t x90 = INT16_MIN;
int8_t x104 = 0;
int64_t x105 = -1LL;
uint64_t x106 = UINT64_MAX;
static uint8_t x108 = UINT8_MAX;
uint8_t x111 = 1U;
int32_t x117 = -1;
volatile int16_t x120 = -29;
static int32_t t29 = 15661;
int8_t x122 = INT8_MIN;
int8_t x123 = INT8_MIN;
static int8_t x125 = INT8_MAX;
static int64_t x129 = -101LL;
uint8_t x136 = 94U;
uint16_t x137 = UINT16_MAX;
uint16_t x142 = UINT16_MAX;
static uint64_t x145 = 235225006222051312LLU;
static int64_t x146 = INT64_MIN;
int32_t t37 = 1605;
int64_t x153 = -44LL;
static uint16_t x159 = 16U;
uint16_t x161 = UINT16_MAX;
int16_t x165 = INT16_MIN;
int16_t x169 = INT16_MIN;
uint16_t x170 = 386U;
int64_t x171 = -1LL;
volatile int32_t t42 = 1934;
int16_t x179 = INT16_MIN;
static int16_t x181 = 14147;
int16_t x183 = INT16_MIN;
volatile uint32_t x185 = 35U;
uint16_t x191 = UINT16_MAX;
int32_t t48 = -121;
int16_t x197 = -1;
volatile uint64_t t49 = 326LLU;
uint16_t x204 = 25U;
int32_t x207 = -1;
int8_t x209 = -5;
uint16_t x210 = UINT16_MAX;
uint64_t x216 = UINT64_MAX;
volatile int32_t t54 = 175;
int16_t x221 = -1;
uint8_t x224 = 16U;
uint16_t x225 = UINT16_MAX;
uint64_t x227 = 1202542955777320LLU;
int32_t x230 = INT32_MIN;
int64_t x237 = -121463LL;
uint8_t x240 = 116U;
int8_t x241 = INT8_MIN;
volatile int32_t x250 = INT32_MAX;
int8_t x252 = INT8_MIN;
static volatile int32_t t63 = -4947076;
int32_t t65 = -40;
uint32_t x277 = UINT32_MAX;
int32_t t70 = -137;
uint16_t x290 = UINT16_MAX;
int16_t x296 = INT16_MIN;
int16_t x300 = INT16_MAX;
volatile int16_t x305 = -1;
int16_t x307 = -1;
uint64_t x308 = UINT64_MAX;
static uint64_t t76 = 7366262356125539LLU;
static int64_t x311 = INT64_MIN;
int64_t x315 = -7823LL;
volatile uint8_t x317 = 19U;
uint32_t x320 = 2026683U;
int32_t x327 = 7847979;
int16_t x328 = -1;
volatile int32_t x329 = -633;
volatile int32_t t82 = 622005868;
static volatile uint64_t x338 = 1487841LLU;
static volatile int8_t x341 = INT8_MIN;
int64_t t88 = 177LL;
volatile uint32_t t92 = 22U;
volatile uint8_t x374 = 14U;
static uint16_t x381 = UINT16_MAX;
volatile int32_t t95 = -127;
int8_t x388 = -1;
int32_t t98 = 1;


void f0(void) {
	uint8_t x2 = 6U;
	uint8_t x3 = 3U;
	int32_t t0 = -9568764;

	t0 = ((x1<(x2<=x3))^x4);

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int16_t x6 = -447;

	t1 = ((x5<(x6<=x7))^x8);

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = 1795150762407LL;
	int16_t x11 = 3898;
	volatile int8_t x12 = INT8_MAX;
	static volatile int32_t t2 = 31;

	t2 = ((x9<(x10<=x11))^x12);

	if (t2 != 126) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int64_t x14 = -76613936062406LL;
	uint32_t x15 = UINT32_MAX;
	int16_t x16 = INT16_MIN;
	static volatile int32_t t3 = 4038015;

	t3 = ((x13<(x14<=x15))^x16);

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int32_t x19 = -642777461;
	uint64_t x20 = 19338015492871283LLU;
	volatile uint64_t t4 = 425684218604LLU;

	t4 = ((x17<(x18<=x19))^x20);

	if (t4 != 19338015492871282LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = -1;
	volatile uint64_t x22 = 23512LLU;
	int16_t x24 = -1;
	int32_t t5 = 54;

	t5 = ((x21<(x22<=x23))^x24);

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int8_t x26 = 13;
	int32_t x27 = -1;
	static volatile int32_t t6 = -1;

	t6 = ((x25<(x26<=x27))^x28);

	if (t6 != -428) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	int16_t x31 = -1;
	int64_t x32 = 0LL;

	t7 = ((x29<(x30<=x31))^x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 454;
	volatile int32_t x34 = INT32_MIN;
	int16_t x35 = INT16_MIN;
	int64_t x36 = INT64_MAX;
	int64_t t8 = INT64_MAX;

	t8 = ((x33<(x34<=x35))^x36);

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MIN;
	uint8_t x39 = 12U;
	int64_t t9 = 110051291235150LL;

	t9 = ((x37<(x38<=x39))^x40);

	if (t9 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	int8_t x43 = INT8_MIN;
	static uint64_t x44 = 1036774034LLU;
	volatile uint64_t t10 = 1280LLU;

	t10 = ((x41<(x42<=x43))^x44);

	if (t10 != 1036774035LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = 549308761;
	uint16_t x47 = UINT16_MAX;
	static volatile int32_t t11 = 0;

	t11 = ((x45<(x46<=x47))^x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -2LL;
	int16_t x50 = INT16_MAX;
	uint16_t x52 = UINT16_MAX;

	t12 = ((x49<(x50<=x51))^x52);

	if (t12 != 65534) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	uint8_t x54 = 1U;
	volatile int8_t x55 = INT8_MAX;
	int8_t x56 = -1;

	t13 = ((x53<(x54<=x55))^x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MIN;
	int64_t x59 = INT64_MIN;
	static volatile uint32_t t14 = 27158614U;

	t14 = ((x57<(x58<=x59))^x60);

	if (t14 != 54967U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x61 = INT64_MIN;
	uint64_t x64 = 46269374104854057LLU;

	t15 = ((x61<(x62<=x63))^x64);

	if (t15 != 46269374104854056LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	volatile int64_t x66 = -2742915980LL;
	volatile int16_t x67 = INT16_MAX;
	volatile uint16_t x68 = UINT16_MAX;
	static int32_t t16 = 35608;

	t16 = ((x65<(x66<=x67))^x68);

	if (t16 != 65534) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 0U;
	int16_t x70 = INT16_MAX;
	int32_t x71 = -166810;
	int32_t x72 = INT32_MIN;
	int32_t t17 = INT32_MIN;

	t17 = ((x69<(x70<=x71))^x72);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x74 = INT32_MIN;
	int16_t x75 = -546;
	int64_t x76 = INT64_MIN;
	volatile int64_t t18 = -32809211698LL;

	t18 = ((x73<(x74<=x75))^x76);

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x77 = INT32_MIN;
	uint8_t x78 = UINT8_MAX;
	int8_t x80 = INT8_MIN;
	static volatile int32_t t19 = 51;

	t19 = ((x77<(x78<=x79))^x80);

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MIN;
	int16_t x82 = -3;
	int16_t x83 = INT16_MIN;
	static int32_t t20 = 53;

	t20 = ((x81<(x82<=x83))^x84);

	if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MIN;
	int16_t x88 = 382;
	volatile int32_t t21 = -2994;

	t21 = ((x85<(x86<=x87))^x88);

	if (t21 != 383) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	volatile int64_t x91 = INT64_MAX;
	int16_t x92 = INT16_MAX;
	int32_t t22 = 1;

	t22 = ((x89<(x90<=x91))^x92);

	if (t22 != 32766) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = 501269939053LL;
	int16_t x94 = INT16_MAX;
	int16_t x95 = INT16_MAX;
	int16_t x96 = INT16_MIN;
	volatile int32_t t23 = -22934;

	t23 = ((x93<(x94<=x95))^x96);

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x97 = 1;
	volatile int32_t x98 = 10812706;
	int64_t x99 = 16434425LL;
	uint16_t x100 = 87U;
	int32_t t24 = -126929;

	t24 = ((x97<(x98<=x99))^x100);

	if (t24 != 87) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 2907U;
	int32_t x102 = INT32_MAX;
	uint32_t x103 = 34275577U;
	volatile int32_t t25 = 1003389292;

	t25 = ((x101<(x102<=x103))^x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x107 = INT16_MAX;
	volatile int32_t t26 = 1953;

	t26 = ((x105<(x106<=x107))^x108);

	if (t26 != 254) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -1;
	int32_t x110 = -1;
	static int32_t x112 = -507164;
	volatile int32_t t27 = 1884;

	t27 = ((x109<(x110<=x111))^x112);

	if (t27 != -507163) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = -1;
	int16_t x114 = -1;
	int8_t x115 = INT8_MAX;
	int32_t x116 = 46;
	volatile int32_t t28 = 129351581;

	t28 = ((x113<(x114<=x115))^x116);

	if (t28 != 47) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = INT32_MAX;
	uint64_t x119 = UINT64_MAX;

	t29 = ((x117<(x118<=x119))^x120);

	if (t29 != -30) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 1;
	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t30 = -1262343;

	t30 = ((x121<(x122<=x123))^x124);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = -1;
	volatile uint64_t x127 = UINT64_MAX;
	uint8_t x128 = UINT8_MAX;
	int32_t t31 = 650;

	t31 = ((x125<(x126<=x127))^x128);

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = 75U;
	volatile uint64_t x131 = 18LLU;
	uint16_t x132 = 366U;
	int32_t t32 = 1;

	t32 = ((x129<(x130<=x131))^x132);

	if (t32 != 367) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 6U;
	volatile uint8_t x134 = UINT8_MAX;
	volatile int32_t x135 = -1;
	static int32_t t33 = -144;

	t33 = ((x133<(x134<=x135))^x136);

	if (t33 != 94) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = INT8_MAX;
	uint32_t x139 = UINT32_MAX;
	int64_t x140 = INT64_MIN;
	int64_t t34 = INT64_MIN;

	t34 = ((x137<(x138<=x139))^x140);

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MIN;
	uint64_t x143 = 87077669230LLU;
	int64_t x144 = INT64_MAX;
	volatile int64_t t35 = -1032000173277368349LL;

	t35 = ((x141<(x142<=x143))^x144);

	if (t35 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x147 = INT8_MIN;
	static uint32_t x148 = 236602U;
	volatile uint32_t t36 = 829987809U;

	t36 = ((x145<(x146<=x147))^x148);

	if (t36 != 236602U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	int16_t x150 = INT16_MIN;
	volatile uint8_t x151 = 6U;
	static int16_t x152 = INT16_MIN;

	t37 = ((x149<(x150<=x151))^x152);

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x154 = INT8_MIN;
	int16_t x155 = -1;
	uint8_t x156 = 70U;
	int32_t t38 = 508291;

	t38 = ((x153<(x154<=x155))^x156);

	if (t38 != 71) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = 45376904U;
	int32_t x158 = INT32_MIN;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = 1;

	t39 = ((x157<(x158<=x159))^x160);

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = INT8_MAX;
	uint16_t x163 = UINT16_MAX;
	int16_t x164 = INT16_MIN;
	int32_t t40 = 3348044;

	t40 = ((x161<(x162<=x163))^x164);

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x166 = INT64_MIN;
	int32_t x167 = -13;
	uint64_t x168 = 18040201055LLU;
	volatile uint64_t t41 = 1296167400LLU;

	t41 = ((x165<(x166<=x167))^x168);

	if (t41 != 18040201054LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x172 = -784;

	t42 = ((x169<(x170<=x171))^x172);

	if (t42 != -783) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 6U;
	int16_t x174 = 421;
	volatile int64_t x175 = -941116088169777LL;
	uint64_t x176 = 314890LLU;
	volatile uint64_t t43 = 148LLU;

	t43 = ((x173<(x174<=x175))^x176);

	if (t43 != 314890LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = -1LL;
	int64_t x178 = -331097513345712LL;
	int8_t x180 = 1;
	int32_t t44 = 65;

	t44 = ((x177<(x178<=x179))^x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = INT64_MIN;
	int32_t x184 = -1;
	int32_t t45 = -1;

	t45 = ((x181<(x182<=x183))^x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = INT8_MAX;
	int8_t x187 = 7;
	int16_t x188 = INT16_MIN;
	volatile int32_t t46 = -4046427;

	t46 = ((x185<(x186<=x187))^x188);

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MIN;
	int16_t x192 = -1;
	volatile int32_t t47 = 12431;

	t47 = ((x189<(x190<=x191))^x192);

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 1U;
	static int8_t x194 = -1;
	uint32_t x195 = 132589136U;
	volatile int8_t x196 = INT8_MIN;

	t48 = ((x193<(x194<=x195))^x196);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = -6;
	static volatile int64_t x199 = 75616433176608325LL;
	uint64_t x200 = 1284007558LLU;

	t49 = ((x197<(x198<=x199))^x200);

	if (t49 != 1284007559LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	volatile int32_t x202 = -1;
	int8_t x203 = -1;
	volatile int32_t t50 = -257658;

	t50 = ((x201<(x202<=x203))^x204);

	if (t50 != 24) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 103U;
	static volatile int64_t x206 = -1LL;
	static int32_t x208 = INT32_MIN;
	static int32_t t51 = INT32_MIN;

	t51 = ((x205<(x206<=x207))^x208);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x211 = INT16_MAX;
	int32_t x212 = 305;
	static int32_t t52 = -936883;

	t52 = ((x209<(x210<=x211))^x212);

	if (t52 != 304) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 175U;
	int8_t x214 = INT8_MIN;
	static int64_t x215 = -1LL;
	static volatile uint64_t t53 = UINT64_MAX;

	t53 = ((x213<(x214<=x215))^x216);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	uint8_t x218 = 6U;
	volatile uint64_t x219 = 177593LLU;
	int8_t x220 = INT8_MAX;

	t54 = ((x217<(x218<=x219))^x220);

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MIN;
	int32_t t55 = 1;

	t55 = ((x221<(x222<=x223))^x224);

	if (t55 != 17) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x226 = 1363U;
	int8_t x228 = -1;
	int32_t t56 = 150200830;

	t56 = ((x225<(x226<=x227))^x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x229 = 3356U;
	int16_t x231 = 2;
	uint8_t x232 = 26U;
	volatile int32_t t57 = -191;

	t57 = ((x229<(x230<=x231))^x232);

	if (t57 != 26) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	int16_t x234 = -504;
	int8_t x235 = -1;
	int8_t x236 = INT8_MIN;
	static int32_t t58 = -7455;

	t58 = ((x233<(x234<=x235))^x236);

	if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x238 = -1;
	uint64_t x239 = 102411664LLU;
	volatile int32_t t59 = -185373284;

	t59 = ((x237<(x238<=x239))^x240);

	if (t59 != 117) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x242 = 1351LL;
	volatile uint8_t x243 = UINT8_MAX;
	uint64_t x244 = 1462572175267275968LLU;
	static volatile uint64_t t60 = 11757770204LLU;

	t60 = ((x241<(x242<=x243))^x244);

	if (t60 != 1462572175267275969LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 20;
	static uint64_t x246 = UINT64_MAX;
	uint32_t x247 = UINT32_MAX;
	volatile int16_t x248 = INT16_MAX;
	volatile int32_t t61 = 20403;

	t61 = ((x245<(x246<=x247))^x248);

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -11;
	static int8_t x251 = INT8_MIN;
	static volatile int32_t t62 = 26561;

	t62 = ((x249<(x250<=x251))^x252);

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x253 = UINT32_MAX;
	volatile uint8_t x254 = 1U;
	int32_t x255 = 8934202;
	int16_t x256 = -1780;

	t63 = ((x253<(x254<=x255))^x256);

	if (t63 != -1780) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1;
	int8_t x258 = INT8_MIN;
	volatile int8_t x259 = -1;
	int16_t x260 = INT16_MIN;
	int32_t t64 = 92;

	t64 = ((x257<(x258<=x259))^x260);

	if (t64 != -32767) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	uint32_t x262 = UINT32_MAX;
	uint8_t x263 = UINT8_MAX;
	volatile uint8_t x264 = UINT8_MAX;

	t65 = ((x261<(x262<=x263))^x264);

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	uint32_t x266 = 934334U;
	uint64_t x267 = UINT64_MAX;
	int16_t x268 = -1;
	int32_t t66 = 35;

	t66 = ((x265<(x266<=x267))^x268);

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = INT16_MIN;
	static uint64_t x270 = UINT64_MAX;
	volatile int32_t x271 = INT32_MAX;
	volatile int64_t x272 = 83LL;
	int64_t t67 = -415LL;

	t67 = ((x269<(x270<=x271))^x272);

	if (t67 != 82LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	int32_t x274 = -322351;
	uint64_t x275 = 3765461LLU;
	uint8_t x276 = 2U;
	volatile int32_t t68 = 339069;

	t68 = ((x273<(x274<=x275))^x276);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x278 = UINT64_MAX;
	static volatile uint64_t x279 = 10208894584388714LLU;
	int32_t x280 = -144383;
	int32_t t69 = -362;

	t69 = ((x277<(x278<=x279))^x280);

	if (t69 != -144383) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 482;
	int32_t x282 = INT32_MIN;
	static uint32_t x283 = 3464243U;
	int8_t x284 = INT8_MIN;

	t70 = ((x281<(x282<=x283))^x284);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = -44;
	uint8_t x287 = 115U;
	int32_t x288 = -1;
	volatile int32_t t71 = 13;

	t71 = ((x285<(x286<=x287))^x288);

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	static int64_t x291 = INT64_MIN;
	volatile int16_t x292 = 4423;
	volatile int32_t t72 = 2380841;

	t72 = ((x289<(x290<=x291))^x292);

	if (t72 != 4422) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	static int64_t x294 = INT64_MIN;
	int64_t x295 = INT64_MIN;
	int32_t t73 = 16569043;

	t73 = ((x293<(x294<=x295))^x296);

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = 23U;
	int16_t x298 = 477;
	uint16_t x299 = 0U;
	static int32_t t74 = 1881;

	t74 = ((x297<(x298<=x299))^x300);

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	static int16_t x302 = -1;
	uint64_t x303 = 11373100LLU;
	int16_t x304 = -1;
	volatile int32_t t75 = -717;

	t75 = ((x301<(x302<=x303))^x304);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -1;

	t76 = ((x305<(x306<=x307))^x308);

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x309 = -1LL;
	volatile uint16_t x310 = 1565U;
	volatile int8_t x312 = INT8_MAX;
	static volatile int32_t t77 = -694251482;

	t77 = ((x309<(x310<=x311))^x312);

	if (t77 != 126) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	int8_t x314 = INT8_MIN;
	static uint32_t x316 = 510418999U;
	volatile uint32_t t78 = 12U;

	t78 = ((x313<(x314<=x315))^x316);

	if (t78 != 510418999U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x318 = UINT32_MAX;
	volatile uint16_t x319 = UINT16_MAX;
	static volatile uint32_t t79 = 909641U;

	t79 = ((x317<(x318<=x319))^x320);

	if (t79 != 2026683U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = -1;
	int16_t x322 = 1;
	int32_t x323 = INT32_MIN;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t80 = 5666669U;

	t80 = ((x321<(x322<=x323))^x324);

	if (t80 != 4294967294U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 1773504496001854LLU;
	static volatile int32_t x326 = -1;
	static int32_t t81 = 3725;

	t81 = ((x325<(x326<=x327))^x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = INT32_MIN;
	static int32_t x331 = -3;
	int32_t x332 = INT32_MIN;

	t82 = ((x329<(x330<=x331))^x332);

	if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	volatile int64_t x334 = INT64_MIN;
	static int8_t x335 = INT8_MAX;
	volatile int64_t x336 = INT64_MIN;
	int64_t t83 = -168665LL;

	t83 = ((x333<(x334<=x335))^x336);

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 3;
	int64_t x339 = INT64_MAX;
	int32_t x340 = 9;
	volatile int32_t t84 = -80;

	t84 = ((x337<(x338<=x339))^x340);

	if (t84 != 9) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x342 = UINT16_MAX;
	int8_t x343 = INT8_MIN;
	volatile int32_t x344 = INT32_MIN;
	static int32_t t85 = 13;

	t85 = ((x341<(x342<=x343))^x344);

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 4747209106870766LL;
	volatile int8_t x346 = 1;
	int16_t x347 = INT16_MIN;
	static uint8_t x348 = 16U;
	volatile int32_t t86 = 73464;

	t86 = ((x345<(x346<=x347))^x348);

	if (t86 != 16) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x349 = -17;
	int64_t x350 = INT64_MIN;
	static int64_t x351 = -4692842570243425LL;
	int8_t x352 = -1;
	volatile int32_t t87 = 1527;

	t87 = ((x349<(x350<=x351))^x352);

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = -1;
	int8_t x354 = INT8_MAX;
	int8_t x355 = -5;
	int64_t x356 = -240823207588LL;

	t88 = ((x353<(x354<=x355))^x356);

	if (t88 != -240823207587LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 10LLU;
	volatile int8_t x358 = 1;
	static uint64_t x359 = 457538028139LLU;
	int64_t x360 = INT64_MIN;
	int64_t t89 = INT64_MIN;

	t89 = ((x357<(x358<=x359))^x360);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = -1;
	volatile uint64_t x362 = 29584444813086LLU;
	volatile int8_t x363 = INT8_MAX;
	static uint32_t x364 = UINT32_MAX;
	uint32_t t90 = 20220355U;

	t90 = ((x361<(x362<=x363))^x364);

	if (t90 != 4294967294U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	uint64_t x366 = 1805LLU;
	int8_t x367 = INT8_MAX;
	uint8_t x368 = 0U;
	volatile int32_t t91 = 231854;

	t91 = ((x365<(x366<=x367))^x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 939685066879LLU;
	static int16_t x370 = -1;
	int16_t x371 = 1;
	uint32_t x372 = 41U;

	t92 = ((x369<(x370<=x371))^x372);

	if (t92 != 41U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = INT64_MIN;
	int64_t x375 = 13275144614LL;
	static int8_t x376 = 63;
	volatile int32_t t93 = 1175;

	t93 = ((x373<(x374<=x375))^x376);

	if (t93 != 62) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = -1;
	volatile int32_t x378 = 0;
	int64_t x379 = INT64_MIN;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t94 = 146502834LLU;

	t94 = ((x377<(x378<=x379))^x380);

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x382 = 65011519U;
	uint16_t x383 = UINT16_MAX;
	int16_t x384 = INT16_MIN;

	t95 = ((x381<(x382<=x383))^x384);

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 291295213044LLU;
	static volatile int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	volatile int32_t t96 = -12086882;

	t96 = ((x385<(x386<=x387))^x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 63U;
	static int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MIN;
	uint8_t x392 = 7U;
	static int32_t t97 = 3;

	t97 = ((x389<(x390<=x391))^x392);

	if (t97 != 7) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -268349608350LL;
	int16_t x394 = -1;
	int32_t x395 = -1;
	static int8_t x396 = 17;

	t98 = ((x393<(x394<=x395))^x396);

	if (t98 != 16) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 19U;
	int16_t x398 = 394;
	uint16_t x399 = UINT16_MAX;
	uint16_t x400 = 738U;
	static int32_t t99 = 176139765;

	t99 = ((x397<(x398<=x399))^x400);

	if (t99 != 738) { NG(); } else { ; }
	
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

