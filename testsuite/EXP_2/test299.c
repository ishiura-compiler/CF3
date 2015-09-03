#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = -1;
int8_t x3 = -13;
int32_t t0 = 471732894;
int32_t x13 = 30333;
volatile int16_t x18 = INT16_MIN;
int8_t x19 = INT8_MIN;
static int8_t x24 = INT8_MIN;
volatile int32_t t5 = -1;
int32_t x27 = 845140291;
int8_t x32 = INT8_MAX;
static int32_t t7 = 3959448;
int32_t x33 = INT32_MIN;
int64_t x40 = INT64_MAX;
int32_t x41 = -115;
uint32_t x47 = 24440770U;
uint16_t x48 = 176U;
uint8_t x49 = 5U;
static int8_t x58 = -10;
static int16_t x62 = INT16_MAX;
int32_t x64 = INT32_MIN;
volatile int32_t t14 = INT32_MIN;
uint8_t x66 = 6U;
static volatile uint64_t t15 = UINT64_MAX;
volatile int8_t x74 = -1;
int32_t x77 = -1;
uint32_t x81 = 1235529289U;
volatile int8_t x95 = INT8_MIN;
int16_t x110 = -1;
int8_t x112 = INT8_MIN;
int32_t t25 = -1;
uint8_t x126 = UINT8_MAX;
uint16_t x131 = 172U;
volatile int32_t t31 = 629651152;
int32_t t32 = -192725682;
int16_t x141 = -1;
int32_t t34 = 44968;
int64_t x150 = -464003246183737168LL;
static int64_t x151 = -1LL;
volatile int8_t x153 = 13;
int8_t x162 = -27;
int8_t x166 = -1;
int32_t x179 = INT32_MIN;
volatile int32_t t42 = -1879223;
static volatile int32_t t43 = -4008;
static int32_t t45 = 80;
volatile int8_t x198 = -1;
static int32_t t46 = 89427;
volatile int32_t x203 = -2038583;
static uint32_t t47 = 14083339U;
int16_t x205 = INT16_MIN;
static volatile int32_t x206 = -1;
static uint32_t x207 = UINT32_MAX;
int32_t t48 = INT32_MIN;
int8_t x215 = -1;
int32_t t50 = -138164;
int16_t x223 = 121;
int8_t x228 = 0;
volatile int32_t t54 = INT32_MIN;
volatile int64_t x241 = INT64_MAX;
uint64_t x242 = 801449668863LLU;
volatile int8_t x243 = -14;
uint16_t x244 = 7646U;
int32_t x245 = INT32_MIN;
uint8_t x247 = 0U;
int64_t x250 = INT64_MIN;
int8_t x251 = -1;
int16_t x260 = INT16_MIN;
uint8_t x265 = 33U;
uint16_t x278 = UINT16_MAX;
int8_t x283 = 36;
uint32_t x289 = UINT32_MAX;
int16_t x293 = 1;
volatile int32_t x297 = INT32_MAX;
uint8_t x308 = 5U;
volatile uint8_t x311 = 65U;
int32_t t73 = 7362;
int32_t t76 = -10;
int64_t x333 = INT64_MIN;
volatile int64_t x337 = INT64_MIN;
volatile uint32_t x346 = 1134U;
volatile int32_t t79 = 503875;
int32_t x349 = 1;
uint8_t x361 = 45U;
int16_t x372 = -1;
volatile int32_t x386 = -32210171;
int32_t t92 = 189;
volatile int16_t x404 = -10829;
int32_t x406 = 2431;
int16_t x414 = -1;
static uint8_t x431 = 12U;
int8_t x432 = INT8_MAX;
volatile int32_t t97 = -75623217;
int32_t x435 = -1;
volatile uint64_t x436 = 581677275LLU;
volatile uint64_t t98 = 64070732979403LLU;


void f0(void) {
	static int8_t x2 = INT8_MAX;
	static int16_t x4 = INT16_MAX;

	t0 = ((x1<=(x2-x3))^x4);

	if (t0 != 32766) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static int32_t x6 = INT32_MIN;
	uint64_t x7 = 198581796036324LLU;
	int16_t x8 = INT16_MIN;
	int32_t t1 = 133;

	t1 = ((x5<=(x6-x7))^x8);

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 4739515068LLU;
	volatile uint16_t x10 = UINT16_MAX;
	uint16_t x11 = 0U;
	int8_t x12 = -1;
	volatile int32_t t2 = -68779;

	t2 = ((x9<=(x10-x11))^x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = UINT16_MAX;
	uint32_t x15 = 98U;
	volatile int32_t x16 = -1;
	int32_t t3 = 104;

	t3 = ((x13<=(x14-x15))^x16);

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int32_t x20 = INT32_MAX;
	int32_t t4 = INT32_MAX;

	t4 = ((x17<=(x18-x19))^x20);

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 27U;
	uint16_t x22 = UINT16_MAX;
	int16_t x23 = 58;

	t5 = ((x21<=(x22-x23))^x24);

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 6U;
	int8_t x26 = INT8_MIN;
	int64_t x28 = 1LL;
	volatile int64_t t6 = -3759LL;

	t6 = ((x25<=(x26-x27))^x28);

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	int64_t x30 = -551645803357941LL;
	uint64_t x31 = 4112700LLU;

	t7 = ((x29<=(x30-x31))^x32);

	if (t7 != 126) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x34 = INT8_MIN;
	uint8_t x35 = 13U;
	int16_t x36 = INT16_MIN;
	int32_t t8 = -1;

	t8 = ((x33<=(x34-x35))^x36);

	if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	static uint16_t x38 = 173U;
	volatile int8_t x39 = -6;
	int64_t t9 = -455067600LL;

	t9 = ((x37<=(x38-x39))^x40);

	if (t9 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 62U;
	volatile int64_t x43 = INT64_MAX;
	uint32_t x44 = 28662568U;
	volatile uint32_t t10 = 0U;

	t10 = ((x41<=(x42-x43))^x44);

	if (t10 != 28662568U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	static uint16_t x46 = UINT16_MAX;
	int32_t t11 = 730637934;

	t11 = ((x45<=(x46-x47))^x48);

	if (t11 != 177) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 139309LLU;
	uint32_t x51 = 1034575195U;
	static int32_t x52 = 36010;
	int32_t t12 = 5;

	t12 = ((x49<=(x50-x51))^x52);

	if (t12 != 36011) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = 106805597425084516LL;
	int8_t x59 = -1;
	int64_t x60 = INT64_MIN;
	static volatile int64_t t13 = INT64_MIN;

	t13 = ((x57<=(x58-x59))^x60);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	uint32_t x63 = UINT32_MAX;

	t14 = ((x61<=(x62-x63))^x64);

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	uint8_t x67 = UINT8_MAX;
	uint64_t x68 = UINT64_MAX;

	t15 = ((x65<=(x66-x67))^x68);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MAX;
	volatile int16_t x75 = INT16_MIN;
	static volatile int64_t x76 = 2013805353228578LL;
	int64_t t16 = 52601579273232LL;

	t16 = ((x73<=(x74-x75))^x76);

	if (t16 != 2013805353228578LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x78 = INT32_MIN;
	int64_t x79 = -1LL;
	uint32_t x80 = UINT32_MAX;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = ((x77<=(x78-x79))^x80);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x82 = UINT32_MAX;
	static int16_t x83 = -1;
	volatile int64_t x84 = INT64_MIN;
	int64_t t18 = INT64_MIN;

	t18 = ((x81<=(x82-x83))^x84);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 485U;
	uint16_t x86 = UINT16_MAX;
	static uint8_t x87 = UINT8_MAX;
	volatile uint64_t x88 = 787310079LLU;
	static uint64_t t19 = 7444LLU;

	t19 = ((x85<=(x86-x87))^x88);

	if (t19 != 787310078LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x89 = 160U;
	int32_t x90 = INT32_MIN;
	int64_t x91 = INT64_MIN;
	int16_t x92 = INT16_MIN;
	static int32_t t20 = 44845577;

	t20 = ((x89<=(x90-x91))^x92);

	if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MAX;
	uint64_t x94 = UINT64_MAX;
	uint64_t x96 = UINT64_MAX;
	uint64_t t21 = 536633243947978LLU;

	t21 = ((x93<=(x94-x95))^x96);

	if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x97 = 1412172;
	int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	uint16_t x100 = 172U;
	int32_t t22 = 2393;

	t22 = ((x97<=(x98-x99))^x100);

	if (t22 != 172) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x101 = INT64_MIN;
	uint16_t x102 = UINT16_MAX;
	volatile uint32_t x103 = UINT32_MAX;
	static uint8_t x104 = UINT8_MAX;
	volatile int32_t t23 = 1;

	t23 = ((x101<=(x102-x103))^x104);

	if (t23 != 254) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x105 = 57520081LLU;
	uint64_t x106 = 10210LLU;
	int32_t x107 = INT32_MIN;
	int64_t x108 = INT64_MIN;
	static int64_t t24 = -112279920LL;

	t24 = ((x105<=(x106-x107))^x108);

	if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 1U;
	int32_t x111 = INT32_MAX;

	t25 = ((x109<=(x110-x111))^x112);

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MIN;
	int32_t x115 = -2604;
	static int64_t x116 = 3351421221125716507LL;
	static int64_t t26 = -1431228481423362713LL;

	t26 = ((x113<=(x114-x115))^x116);

	if (t26 != 3351421221125716506LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x117 = -1;
	uint32_t x118 = 71445092U;
	uint16_t x119 = 177U;
	int16_t x120 = -10;
	int32_t t27 = -4629388;

	t27 = ((x117<=(x118-x119))^x120);

	if (t27 != -10) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = 7802730U;
	uint16_t x122 = 25U;
	static int16_t x123 = -1;
	volatile uint64_t x124 = UINT64_MAX;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = ((x121<=(x122-x123))^x124);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -1;
	uint16_t x127 = UINT16_MAX;
	static uint64_t x128 = UINT64_MAX;
	uint64_t t29 = UINT64_MAX;

	t29 = ((x125<=(x126-x127))^x128);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x129 = INT32_MAX;
	static int8_t x130 = -36;
	volatile int64_t x132 = INT64_MIN;
	int64_t t30 = INT64_MIN;

	t30 = ((x129<=(x130-x131))^x132);

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = INT32_MIN;
	static int8_t x134 = INT8_MIN;
	int32_t x135 = -1;
	uint16_t x136 = 2960U;

	t31 = ((x133<=(x134-x135))^x136);

	if (t31 != 2961) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x137 = INT8_MIN;
	volatile int64_t x138 = -104555646LL;
	uint64_t x139 = 7923212422926LLU;
	int8_t x140 = INT8_MIN;

	t32 = ((x137<=(x138-x139))^x140);

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x142 = 9574LL;
	volatile uint64_t x143 = 159490420563LLU;
	int32_t x144 = INT32_MIN;
	volatile int32_t t33 = INT32_MIN;

	t33 = ((x141<=(x142-x143))^x144);

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x145 = INT32_MIN;
	int64_t x146 = 738LL;
	uint8_t x147 = UINT8_MAX;
	static int32_t x148 = -1;

	t34 = ((x145<=(x146-x147))^x148);

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = 0U;
	uint16_t x152 = 1U;
	int32_t t35 = -364275;

	t35 = ((x149<=(x150-x151))^x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x154 = UINT64_MAX;
	uint8_t x155 = 1U;
	volatile int32_t x156 = -1;
	volatile int32_t t36 = 7800;

	t36 = ((x153<=(x154-x155))^x156);

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MAX;
	int8_t x158 = -3;
	uint64_t x159 = 23LLU;
	int64_t x160 = INT64_MAX;
	volatile int64_t t37 = -39649151976LL;

	t37 = ((x157<=(x158-x159))^x160);

	if (t37 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = 111U;
	int8_t x163 = -1;
	uint64_t x164 = 49LLU;
	static volatile uint64_t t38 = 97789LLU;

	t38 = ((x161<=(x162-x163))^x164);

	if (t38 != 49LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = UINT64_MAX;
	volatile int16_t x167 = -54;
	static int8_t x168 = INT8_MIN;
	volatile int32_t t39 = 3291;

	t39 = ((x165<=(x166-x167))^x168);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = 0;
	uint64_t x170 = 864LLU;
	int64_t x171 = -1LL;
	volatile int32_t x172 = 63586;
	int32_t t40 = -41922250;

	t40 = ((x169<=(x170-x171))^x172);

	if (t40 != 63587) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	uint16_t x174 = 1U;
	uint32_t x175 = UINT32_MAX;
	static volatile int16_t x176 = INT16_MAX;
	int32_t t41 = 0;

	t41 = ((x173<=(x174-x175))^x176);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x177 = 341480120LLU;
	static int64_t x178 = INT64_MIN;
	static int16_t x180 = 101;

	t42 = ((x177<=(x178-x179))^x180);

	if (t42 != 100) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MIN;
	volatile uint64_t x186 = UINT64_MAX;
	volatile int16_t x187 = -279;
	volatile uint8_t x188 = 1U;

	t43 = ((x185<=(x186-x187))^x188);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	uint8_t x192 = 5U;
	volatile int32_t t44 = -3;

	t44 = ((x189<=(x190-x191))^x192);

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x193 = INT32_MAX;
	uint8_t x194 = UINT8_MAX;
	uint32_t x195 = 1457511U;
	volatile uint8_t x196 = UINT8_MAX;

	t45 = ((x193<=(x194-x195))^x196);

	if (t45 != 254) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x197 = 21;
	int64_t x199 = INT64_MIN;
	int16_t x200 = -1;

	t46 = ((x197<=(x198-x199))^x200);

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MIN;
	int32_t x202 = -264660;
	uint32_t x204 = UINT32_MAX;

	t47 = ((x201<=(x202-x203))^x204);

	if (t47 != 4294967294U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x208 = INT32_MIN;

	t48 = ((x205<=(x206-x207))^x208);

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MIN;
	static int32_t x210 = INT32_MIN;
	static int64_t x211 = INT64_MIN;
	static uint8_t x212 = 5U;
	volatile int32_t t49 = 31594;

	t49 = ((x209<=(x210-x211))^x212);

	if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = INT64_MIN;
	uint16_t x214 = 5U;
	int32_t x216 = INT32_MIN;

	t50 = ((x213<=(x214-x215))^x216);

	if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = -1;
	int32_t x218 = -1847;
	volatile int16_t x219 = 3064;
	int32_t x220 = INT32_MIN;
	volatile int32_t t51 = INT32_MIN;

	t51 = ((x217<=(x218-x219))^x220);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x221 = -6846412;
	volatile uint32_t x222 = 1U;
	static int16_t x224 = 1;
	int32_t t52 = 12409645;

	t52 = ((x221<=(x222-x223))^x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x225 = INT16_MIN;
	int8_t x226 = INT8_MIN;
	uint64_t x227 = 14LLU;
	volatile int32_t t53 = 35;

	t53 = ((x225<=(x226-x227))^x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x229 = -1LL;
	uint16_t x230 = 1U;
	static uint16_t x231 = UINT16_MAX;
	static int32_t x232 = INT32_MIN;

	t54 = ((x229<=(x230-x231))^x232);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = INT32_MIN;
	static volatile uint16_t x234 = 230U;
	uint16_t x235 = 5160U;
	uint64_t x236 = 1672LLU;
	volatile uint64_t t55 = 944LLU;

	t55 = ((x233<=(x234-x235))^x236);

	if (t55 != 1673LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x237 = INT32_MIN;
	volatile int32_t x238 = -1;
	int8_t x239 = INT8_MIN;
	int16_t x240 = -1;
	volatile int32_t t56 = -219650082;

	t56 = ((x237<=(x238-x239))^x240);

	if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t t57 = -260134931;

	t57 = ((x241<=(x242-x243))^x244);

	if (t57 != 7646) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x246 = 9U;
	int32_t x248 = INT32_MIN;
	static int32_t t58 = -207;

	t58 = ((x245<=(x246-x247))^x248);

	if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = INT32_MIN;
	volatile int8_t x252 = -1;
	int32_t t59 = -642635512;

	t59 = ((x249<=(x250-x251))^x252);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x253 = INT16_MIN;
	int64_t x254 = -1LL;
	static int64_t x255 = INT64_MIN;
	static volatile int64_t x256 = INT64_MIN;
	static volatile int64_t t60 = 2597027517605111LL;

	t60 = ((x253<=(x254-x255))^x256);

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = INT8_MAX;
	static int32_t x258 = INT32_MIN;
	volatile int8_t x259 = -1;
	volatile int32_t t61 = -5;

	t61 = ((x257<=(x258-x259))^x260);

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = INT32_MAX;
	volatile uint16_t x262 = 9U;
	uint32_t x263 = UINT32_MAX;
	int16_t x264 = 126;
	volatile int32_t t62 = 389;

	t62 = ((x261<=(x262-x263))^x264);

	if (t62 != 126) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x266 = 843U;
	int32_t x267 = INT32_MAX;
	int16_t x268 = INT16_MIN;
	volatile int32_t t63 = -944;

	t63 = ((x265<=(x266-x267))^x268);

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = -1LL;
	static uint64_t x274 = 3756172587104396045LLU;
	int32_t x275 = -826608;
	int8_t x276 = INT8_MIN;
	volatile int32_t t64 = -15499;

	t64 = ((x273<=(x274-x275))^x276);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x277 = 0LLU;
	int32_t x279 = -1;
	uint16_t x280 = 383U;
	volatile int32_t t65 = 12;

	t65 = ((x277<=(x278-x279))^x280);

	if (t65 != 382) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = 28LL;
	volatile int64_t x282 = -1LL;
	volatile int16_t x284 = INT16_MAX;
	static volatile int32_t t66 = 11270;

	t66 = ((x281<=(x282-x283))^x284);

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x285 = 6U;
	volatile int32_t x286 = -12;
	volatile int32_t x287 = INT32_MIN;
	int8_t x288 = INT8_MIN;
	int32_t t67 = -2618;

	t67 = ((x285<=(x286-x287))^x288);

	if (t67 != -127) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x290 = -1;
	static int8_t x291 = 11;
	int8_t x292 = INT8_MIN;
	volatile int32_t t68 = 712;

	t68 = ((x289<=(x290-x291))^x292);

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x294 = 787U;
	volatile uint64_t x295 = 320708LLU;
	static uint16_t x296 = 401U;
	volatile int32_t t69 = -1222788;

	t69 = ((x293<=(x294-x295))^x296);

	if (t69 != 400) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x298 = UINT8_MAX;
	int8_t x299 = -43;
	int8_t x300 = 13;
	int32_t t70 = 971059431;

	t70 = ((x297<=(x298-x299))^x300);

	if (t70 != 13) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int8_t x302 = 1;
	int16_t x303 = INT16_MIN;
	volatile uint64_t x304 = UINT64_MAX;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = ((x301<=(x302-x303))^x304);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x305 = 61LLU;
	static int32_t x306 = -5549;
	static int8_t x307 = -10;
	volatile int32_t t72 = 859818;

	t72 = ((x305<=(x306-x307))^x308);

	if (t72 != 4) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x309 = UINT16_MAX;
	int8_t x310 = -1;
	volatile uint8_t x312 = UINT8_MAX;

	t73 = ((x309<=(x310-x311))^x312);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x317 = UINT16_MAX;
	int8_t x318 = INT8_MAX;
	int16_t x319 = -34;
	int32_t x320 = 45288239;
	volatile int32_t t74 = -3315970;

	t74 = ((x317<=(x318-x319))^x320);

	if (t74 != 45288239) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x321 = 93U;
	static int8_t x322 = -1;
	int16_t x323 = -1;
	static int32_t x324 = INT32_MIN;
	volatile int32_t t75 = INT32_MIN;

	t75 = ((x321<=(x322-x323))^x324);

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x325 = 1517910828U;
	int16_t x326 = -2640;
	int8_t x327 = INT8_MAX;
	int32_t x328 = INT32_MAX;

	t76 = ((x325<=(x326-x327))^x328);

	if (t76 != 2147483646) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x334 = 0;
	static int16_t x335 = 133;
	uint32_t x336 = 81247428U;
	static uint32_t t77 = 66672U;

	t77 = ((x333<=(x334-x335))^x336);

	if (t77 != 81247429U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x338 = INT32_MIN;
	int64_t x339 = INT64_MIN;
	uint8_t x340 = UINT8_MAX;
	int32_t t78 = -1;

	t78 = ((x337<=(x338-x339))^x340);

	if (t78 != 254) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x345 = 3U;
	static int16_t x347 = -273;
	uint8_t x348 = 1U;

	t79 = ((x345<=(x346-x347))^x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x350 = 1866778LLU;
	int32_t x351 = 63721181;
	int8_t x352 = INT8_MIN;
	volatile int32_t t80 = 15827;

	t80 = ((x349<=(x350-x351))^x352);

	if (t80 != -127) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x353 = INT8_MAX;
	volatile int8_t x354 = INT8_MAX;
	uint64_t x355 = 0LLU;
	uint8_t x356 = 12U;
	int32_t t81 = -665621022;

	t81 = ((x353<=(x354-x355))^x356);

	if (t81 != 13) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x357 = 339U;
	int8_t x358 = INT8_MIN;
	int8_t x359 = 1;
	static int8_t x360 = INT8_MIN;
	volatile int32_t t82 = 1;

	t82 = ((x357<=(x358-x359))^x360);

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x362 = 12504U;
	int64_t x363 = 153697754320LL;
	volatile int8_t x364 = INT8_MIN;
	volatile int32_t t83 = -11;

	t83 = ((x361<=(x362-x363))^x364);

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x365 = INT8_MIN;
	uint32_t x366 = 2429110U;
	volatile int32_t x367 = -449842;
	static int8_t x368 = -1;
	int32_t t84 = -11451;

	t84 = ((x365<=(x366-x367))^x368);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x369 = INT8_MIN;
	int16_t x370 = INT16_MAX;
	static int32_t x371 = -1;
	volatile int32_t t85 = 3885;

	t85 = ((x369<=(x370-x371))^x372);

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x373 = 989561LL;
	uint16_t x374 = UINT16_MAX;
	uint32_t x375 = 1482458766U;
	uint16_t x376 = 20212U;
	int32_t t86 = -4167981;

	t86 = ((x373<=(x374-x375))^x376);

	if (t86 != 20213) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x377 = 219956U;
	int64_t x378 = -6602520LL;
	static uint64_t x379 = UINT64_MAX;
	uint16_t x380 = 29U;
	int32_t t87 = -7;

	t87 = ((x377<=(x378-x379))^x380);

	if (t87 != 28) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x381 = 3651U;
	int64_t x382 = -7960287LL;
	int8_t x383 = -19;
	int64_t x384 = 0LL;
	volatile int64_t t88 = 49444LL;

	t88 = ((x381<=(x382-x383))^x384);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x385 = INT16_MIN;
	volatile uint32_t x387 = UINT32_MAX;
	int64_t x388 = INT64_MIN;
	volatile int64_t t89 = INT64_MIN;

	t89 = ((x385<=(x386-x387))^x388);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x389 = -68;
	int16_t x390 = -1;
	static int32_t x391 = INT32_MIN;
	int8_t x392 = -2;
	volatile int32_t t90 = 147691865;

	t90 = ((x389<=(x390-x391))^x392);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x393 = INT64_MIN;
	volatile uint16_t x394 = UINT16_MAX;
	int16_t x395 = 199;
	uint64_t x396 = 93262240LLU;
	volatile uint64_t t91 = 5LLU;

	t91 = ((x393<=(x394-x395))^x396);

	if (t91 != 93262241LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x397 = INT16_MAX;
	static uint16_t x398 = UINT16_MAX;
	volatile int32_t x399 = -1;
	int8_t x400 = INT8_MAX;

	t92 = ((x397<=(x398-x399))^x400);

	if (t92 != 126) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x401 = -1;
	static volatile int32_t x402 = INT32_MIN;
	volatile uint32_t x403 = UINT32_MAX;
	static int32_t t93 = -92010264;

	t93 = ((x401<=(x402-x403))^x404);

	if (t93 != -10829) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = 1;
	uint32_t x407 = UINT32_MAX;
	int32_t x408 = -4;
	static int32_t t94 = 3;

	t94 = ((x405<=(x406-x407))^x408);

	if (t94 != -3) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x413 = INT16_MAX;
	int64_t x415 = INT64_MIN;
	uint16_t x416 = 28U;
	volatile int32_t t95 = -1285315;

	t95 = ((x413<=(x414-x415))^x416);

	if (t95 != 29) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x417 = 87131098U;
	int32_t x418 = 974304;
	uint32_t x419 = UINT32_MAX;
	int8_t x420 = -1;
	static int32_t t96 = -20;

	t96 = ((x417<=(x418-x419))^x420);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x429 = 16U;
	int32_t x430 = -15518603;

	t97 = ((x429<=(x430-x431))^x432);

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x433 = -1;
	int32_t x434 = 154583615;

	t98 = ((x433<=(x434-x435))^x436);

	if (t98 != 581677274LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x437 = -1;
	volatile int64_t x438 = INT64_MIN;
	volatile int32_t x439 = -1;
	uint8_t x440 = UINT8_MAX;
	volatile int32_t t99 = -6908;

	t99 = ((x437<=(x438-x439))^x440);

	if (t99 != 255) { NG(); } else { ; }
	
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

