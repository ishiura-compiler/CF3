#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x11 = 0;
int64_t x12 = -409537175203926535LL;
volatile int32_t t4 = 763;
volatile uint8_t x26 = UINT8_MAX;
static uint32_t x36 = 7366388U;
int8_t x38 = 1;
volatile int16_t x39 = 0;
int64_t t9 = -53830LL;
int16_t x47 = INT16_MIN;
int32_t t12 = -17020155;
int16_t x60 = 10;
static int64_t x62 = -9469LL;
uint64_t x64 = 9797741359096456LLU;
static int16_t x68 = INT16_MIN;
volatile int32_t t16 = -226;
int16_t x69 = INT16_MAX;
int8_t x70 = -7;
static volatile int32_t t20 = 4263143;
static int16_t x86 = -1;
volatile int64_t x89 = INT64_MAX;
uint8_t x91 = 0U;
uint64_t x94 = 52964204598443LLU;
int64_t x95 = INT64_MIN;
int64_t x101 = INT64_MAX;
uint8_t x104 = 9U;
int32_t x111 = INT32_MIN;
static uint32_t t28 = 1328U;
uint64_t x122 = UINT64_MAX;
int64_t x124 = -1LL;
uint64_t x127 = UINT64_MAX;
int64_t x131 = -283747847129245600LL;
uint8_t x133 = 1U;
static int16_t x153 = 6944;
static volatile uint64_t x156 = 4617276719359812075LLU;
volatile uint64_t t38 = 239363059LLU;
int8_t x157 = INT8_MIN;
int16_t x160 = -7;
volatile uint32_t x163 = UINT32_MAX;
int64_t x166 = -1LL;
volatile uint8_t x170 = 28U;
volatile int64_t x175 = INT64_MAX;
int32_t x179 = INT32_MIN;
static int8_t x184 = -7;
static uint16_t x186 = 1U;
int64_t x188 = 537313691LL;
static volatile int8_t x192 = INT8_MIN;
int8_t x193 = INT8_MIN;
uint64_t x194 = UINT64_MAX;
uint32_t t49 = 1280U;
int16_t x203 = 166;
volatile int8_t x206 = INT8_MIN;
int64_t x209 = -1LL;
static uint16_t x211 = 3835U;
volatile int32_t t52 = 20;
int16_t x215 = 20;
static int8_t x217 = -13;
int8_t x225 = -1;
static volatile int8_t x227 = 0;
volatile int32_t x228 = 26;
volatile int16_t x229 = INT16_MAX;
uint16_t x243 = 0U;
int8_t x244 = INT8_MIN;
int32_t t60 = -1;
volatile int32_t x253 = INT32_MIN;
volatile uint64_t x254 = 878572507836858LLU;
int64_t x259 = -1LL;
uint32_t x264 = UINT32_MAX;
volatile uint32_t t65 = 184U;
static int64_t x271 = INT64_MIN;
uint64_t x274 = 3038LLU;
int64_t x275 = INT64_MAX;
int64_t t68 = -939873493945LL;
uint64_t x280 = UINT64_MAX;
volatile int32_t t70 = 2434;
volatile int32_t t73 = 22;
static int64_t x308 = INT64_MAX;
static int32_t x312 = -15;
uint16_t x315 = 9194U;
uint64_t x320 = UINT64_MAX;
int32_t x328 = INT32_MIN;
volatile uint64_t x337 = UINT64_MAX;
uint64_t x342 = 16459030702LLU;
int32_t x364 = -751;
volatile int16_t x376 = INT16_MIN;
int8_t x385 = -1;
int8_t x391 = INT8_MAX;
int32_t t98 = -6;
volatile int32_t t99 = -1786;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int8_t x2 = -1;
	int64_t x3 = 2620375LL;
	static int64_t x4 = INT64_MIN;
	static int64_t t0 = 1LL;

	t0 = ((x1<=(x2<=x3))%x4);

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static volatile uint64_t x6 = 6LLU;
	static uint8_t x7 = 1U;
	int32_t x8 = INT32_MAX;
	volatile int32_t t1 = -488;

	t1 = ((x5<=(x6<=x7))%x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 0;
	volatile int32_t x10 = INT32_MIN;
	volatile int64_t t2 = 1623021LL;

	t2 = ((x9<=(x10<=x11))%x12);

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 1;
	uint8_t x14 = 0U;
	int8_t x15 = INT8_MIN;
	uint32_t x16 = 103718U;
	uint32_t t3 = 865U;

	t3 = ((x13<=(x14<=x15))%x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	static int32_t x18 = -1;
	static int8_t x19 = 1;
	volatile int32_t x20 = -129393;

	t4 = ((x17<=(x18<=x19))%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int8_t x22 = INT8_MAX;
	static int16_t x23 = 1;
	int32_t x24 = INT32_MIN;
	int32_t t5 = 4533;

	t5 = ((x21<=(x22<=x23))%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	static uint16_t x27 = 835U;
	volatile uint64_t x28 = UINT64_MAX;
	static volatile uint64_t t6 = 78749329655LLU;

	t6 = ((x25<=(x26<=x27))%x28);

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	static int32_t x30 = -1;
	uint64_t x31 = UINT64_MAX;
	static uint8_t x32 = 1U;
	static int32_t t7 = 474;

	t7 = ((x29<=(x30<=x31))%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 226U;
	uint8_t x34 = 8U;
	uint64_t x35 = 19419291LLU;
	static uint32_t t8 = 1605861450U;

	t8 = ((x33<=(x34<=x35))%x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 5463316LL;
	volatile int64_t x40 = INT64_MIN;

	t9 = ((x37<=(x38<=x39))%x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = 434158;
	uint32_t x42 = 269U;
	uint8_t x43 = 12U;
	volatile int64_t x44 = 38088491LL;
	int64_t t10 = 4923147802LL;

	t10 = ((x41<=(x42<=x43))%x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int8_t x46 = INT8_MAX;
	static uint64_t x48 = 5628243026832LLU;
	uint64_t t11 = 11478207137353LLU;

	t11 = ((x45<=(x46<=x47))%x48);

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 18567LLU;
	static volatile int64_t x50 = -1LL;
	static uint32_t x51 = UINT32_MAX;
	volatile int16_t x52 = INT16_MIN;

	t12 = ((x49<=(x50<=x51))%x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	uint16_t x54 = 13124U;
	static uint64_t x55 = 11162579084595LLU;
	int64_t x56 = INT64_MAX;
	static volatile int64_t t13 = -17156816349610LL;

	t13 = ((x53<=(x54<=x55))%x56);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 1U;
	volatile int8_t x58 = INT8_MIN;
	int32_t x59 = -1;
	volatile int32_t t14 = -1;

	t14 = ((x57<=(x58<=x59))%x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = 14564682;
	int64_t x63 = -1LL;
	uint64_t t15 = 1935361030566912LLU;

	t15 = ((x61<=(x62<=x63))%x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	static int16_t x66 = -9;
	uint16_t x67 = UINT16_MAX;

	t16 = ((x65<=(x66<=x67))%x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x71 = 24U;
	static int8_t x72 = INT8_MIN;
	volatile int32_t t17 = 9335963;

	t17 = ((x69<=(x70<=x71))%x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	uint32_t x74 = UINT32_MAX;
	uint16_t x75 = 295U;
	static int32_t x76 = INT32_MAX;
	volatile int32_t t18 = 1307559;

	t18 = ((x73<=(x74<=x75))%x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MAX;
	volatile int32_t x78 = INT32_MAX;
	volatile int64_t x79 = INT64_MIN;
	static int8_t x80 = INT8_MAX;
	volatile int32_t t19 = 27;

	t19 = ((x77<=(x78<=x79))%x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 28322055280466LL;
	static uint8_t x82 = 87U;
	uint32_t x83 = 1025914U;
	int8_t x84 = INT8_MAX;

	t20 = ((x81<=(x82<=x83))%x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 1;
	int16_t x87 = 1;
	int8_t x88 = 28;
	int32_t t21 = 401;

	t21 = ((x85<=(x86<=x87))%x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x90 = 0U;
	int64_t x92 = INT64_MIN;
	static int64_t t22 = 1LL;

	t22 = ((x89<=(x90<=x91))%x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = -2037LL;
	int8_t x96 = -1;
	static int32_t t23 = 237070736;

	t23 = ((x93<=(x94<=x95))%x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	static int64_t x98 = 26790LL;
	static uint32_t x99 = 245U;
	uint8_t x100 = 78U;
	int32_t t24 = 86;

	t24 = ((x97<=(x98<=x99))%x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = -1;
	uint16_t x103 = UINT16_MAX;
	volatile int32_t t25 = -19;

	t25 = ((x101<=(x102<=x103))%x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int8_t x106 = -1;
	int32_t x107 = INT32_MIN;
	int32_t x108 = INT32_MIN;
	volatile int32_t t26 = 1069092292;

	t26 = ((x105<=(x106<=x107))%x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int8_t x110 = INT8_MAX;
	int32_t x112 = 2875291;
	volatile int32_t t27 = -888;

	t27 = ((x109<=(x110<=x111))%x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	volatile int32_t x114 = INT32_MIN;
	volatile uint32_t x115 = UINT32_MAX;
	static uint32_t x116 = UINT32_MAX;

	t28 = ((x113<=(x114<=x115))%x116);

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	uint32_t x118 = UINT32_MAX;
	uint64_t x119 = UINT64_MAX;
	int64_t x120 = 26LL;
	int64_t t29 = -1913680LL;

	t29 = ((x117<=(x118<=x119))%x120);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	uint16_t x123 = 1U;
	int64_t t30 = -34590073742458LL;

	t30 = ((x121<=(x122<=x123))%x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	volatile int64_t x126 = INT64_MIN;
	volatile int8_t x128 = INT8_MIN;
	volatile int32_t t31 = 1;

	t31 = ((x125<=(x126<=x127))%x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MIN;
	static int32_t x132 = INT32_MIN;
	volatile int32_t t32 = -11;

	t32 = ((x129<=(x130<=x131))%x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x134 = 5255774U;
	static uint16_t x135 = UINT16_MAX;
	int64_t x136 = -4377054526642015LL;
	volatile int64_t t33 = -972997534528973433LL;

	t33 = ((x133<=(x134<=x135))%x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	uint8_t x138 = 18U;
	volatile uint8_t x139 = 43U;
	volatile uint64_t x140 = UINT64_MAX;
	volatile uint64_t t34 = 1LLU;

	t34 = ((x137<=(x138<=x139))%x140);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	uint32_t x142 = UINT32_MAX;
	int32_t x143 = 1734709;
	uint64_t x144 = 766607762966LLU;
	uint64_t t35 = 25797587299400843LLU;

	t35 = ((x141<=(x142<=x143))%x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MIN;
	int64_t x146 = -1192194993966LL;
	int32_t x147 = INT32_MIN;
	int32_t x148 = INT32_MAX;
	int32_t t36 = 28397418;

	t36 = ((x145<=(x146<=x147))%x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 18U;
	uint8_t x150 = UINT8_MAX;
	static uint16_t x151 = UINT16_MAX;
	int16_t x152 = INT16_MAX;
	int32_t t37 = 393;

	t37 = ((x149<=(x150<=x151))%x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x154 = -1;
	int32_t x155 = -357;

	t38 = ((x153<=(x154<=x155))%x156);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x158 = 5U;
	static uint64_t x159 = 344412240255836LLU;
	int32_t t39 = 17299;

	t39 = ((x157<=(x158<=x159))%x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	uint8_t x162 = 0U;
	int16_t x164 = INT16_MIN;
	volatile int32_t t40 = -379;

	t40 = ((x161<=(x162<=x163))%x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 14;
	volatile int16_t x167 = -772;
	int64_t x168 = INT64_MIN;
	static volatile int64_t t41 = -75787LL;

	t41 = ((x165<=(x166<=x167))%x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 3;
	int8_t x171 = 0;
	static int64_t x172 = -1LL;
	volatile int64_t t42 = -396644617824252359LL;

	t42 = ((x169<=(x170<=x171))%x172);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x174 = 43005496398LLU;
	static int16_t x176 = -1;
	volatile int32_t t43 = 1;

	t43 = ((x173<=(x174<=x175))%x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 1044LLU;
	volatile uint16_t x178 = 1307U;
	uint16_t x180 = 2033U;
	static int32_t t44 = -2;

	t44 = ((x177<=(x178<=x179))%x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 143U;
	volatile int8_t x182 = -5;
	uint16_t x183 = UINT16_MAX;
	volatile int32_t t45 = -1824356;

	t45 = ((x181<=(x182<=x183))%x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 117U;
	int64_t x187 = -1LL;
	volatile int64_t t46 = -25118770111297LL;

	t46 = ((x185<=(x186<=x187))%x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = 2042;
	volatile uint64_t x190 = 27LLU;
	uint16_t x191 = 90U;
	static int32_t t47 = -54537;

	t47 = ((x189<=(x190<=x191))%x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x195 = UINT8_MAX;
	int32_t x196 = INT32_MIN;
	int32_t t48 = 59229626;

	t48 = ((x193<=(x194<=x195))%x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = 13;
	int16_t x198 = INT16_MIN;
	static uint64_t x199 = 25715241255LLU;
	uint32_t x200 = UINT32_MAX;

	t49 = ((x197<=(x198<=x199))%x200);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	static volatile uint16_t x202 = UINT16_MAX;
	int16_t x204 = INT16_MIN;
	volatile int32_t t50 = -2;

	t50 = ((x201<=(x202<=x203))%x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int16_t x207 = -3;
	static int64_t x208 = -1LL;
	volatile int64_t t51 = 272364181751LL;

	t51 = ((x205<=(x206<=x207))%x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = INT8_MIN;
	static int16_t x212 = INT16_MAX;

	t52 = ((x209<=(x210<=x211))%x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	volatile int8_t x214 = -1;
	volatile int16_t x216 = 58;
	volatile int32_t t53 = 1;

	t53 = ((x213<=(x214<=x215))%x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = 158LL;
	int16_t x219 = 12014;
	int8_t x220 = -1;
	volatile int32_t t54 = -560;

	t54 = ((x217<=(x218<=x219))%x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	int32_t x222 = -1;
	int64_t x223 = 32204LL;
	int8_t x224 = -1;
	int32_t t55 = 11;

	t55 = ((x221<=(x222<=x223))%x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x226 = 14571616731LLU;
	volatile int32_t t56 = 6207334;

	t56 = ((x225<=(x226<=x227))%x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = -1LL;
	int16_t x231 = -3;
	static uint8_t x232 = 29U;
	volatile int32_t t57 = 4;

	t57 = ((x229<=(x230<=x231))%x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	int8_t x234 = -1;
	int8_t x235 = -1;
	int64_t x236 = INT64_MAX;
	volatile int64_t t58 = -175162531501386495LL;

	t58 = ((x233<=(x234<=x235))%x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x237 = 806U;
	int16_t x238 = -1;
	int32_t x239 = -1;
	uint32_t x240 = UINT32_MAX;
	volatile uint32_t t59 = 5031275U;

	t59 = ((x237<=(x238<=x239))%x240);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	volatile int32_t x242 = INT32_MIN;

	t60 = ((x241<=(x242<=x243))%x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	uint64_t x246 = UINT64_MAX;
	int16_t x247 = INT16_MIN;
	int16_t x248 = INT16_MAX;
	volatile int32_t t61 = 2;

	t61 = ((x245<=(x246<=x247))%x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 18038U;
	uint64_t x250 = 8134360576281849LLU;
	volatile int64_t x251 = INT64_MIN;
	volatile int8_t x252 = INT8_MIN;
	static volatile int32_t t62 = 449;

	t62 = ((x249<=(x250<=x251))%x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x255 = -479;
	uint64_t x256 = UINT64_MAX;
	static volatile uint64_t t63 = 309477409902746193LLU;

	t63 = ((x253<=(x254<=x255))%x256);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 48;
	static int32_t x258 = INT32_MIN;
	uint32_t x260 = 12827U;
	volatile uint32_t t64 = 4U;

	t64 = ((x257<=(x258<=x259))%x260);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 44794U;
	static volatile int32_t x262 = -2234606;
	uint64_t x263 = 413159557LLU;

	t65 = ((x261<=(x262<=x263))%x264);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	uint64_t x266 = UINT64_MAX;
	static int8_t x267 = INT8_MAX;
	static volatile uint64_t x268 = UINT64_MAX;
	static uint64_t t66 = 3936255LLU;

	t66 = ((x265<=(x266<=x267))%x268);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	volatile int16_t x270 = 24;
	static uint64_t x272 = UINT64_MAX;
	uint64_t t67 = 868217157LLU;

	t67 = ((x269<=(x270<=x271))%x272);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = 369;
	volatile int64_t x276 = -1LL;

	t68 = ((x273<=(x274<=x275))%x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	int32_t x278 = 144736108;
	int64_t x279 = 74976939804463LL;
	volatile uint64_t t69 = 2993LLU;

	t69 = ((x277<=(x278<=x279))%x280);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = UINT8_MAX;
	static uint16_t x282 = 3U;
	int64_t x283 = -1LL;
	volatile int8_t x284 = -1;

	t70 = ((x281<=(x282<=x283))%x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	uint8_t x286 = 0U;
	int8_t x287 = INT8_MIN;
	int64_t x288 = -2432LL;
	int64_t t71 = -44639LL;

	t71 = ((x285<=(x286<=x287))%x288);

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 90;
	uint64_t x290 = UINT64_MAX;
	uint16_t x291 = 61U;
	static int64_t x292 = INT64_MAX;
	int64_t t72 = 165380114070578876LL;

	t72 = ((x289<=(x290<=x291))%x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MIN;
	uint64_t x294 = 1949006289113413LLU;
	int16_t x295 = -1;
	int16_t x296 = -1;

	t73 = ((x293<=(x294<=x295))%x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	int16_t x298 = -420;
	int16_t x299 = -183;
	uint8_t x300 = 29U;
	int32_t t74 = -191;

	t74 = ((x297<=(x298<=x299))%x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	static int16_t x302 = -143;
	volatile int64_t x303 = -3956LL;
	volatile int32_t x304 = INT32_MIN;
	volatile int32_t t75 = -10913086;

	t75 = ((x301<=(x302<=x303))%x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 22101;
	int64_t x306 = 181164193LL;
	static volatile int16_t x307 = INT16_MIN;
	int64_t t76 = -1493999LL;

	t76 = ((x305<=(x306<=x307))%x308);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	static uint64_t x310 = 82115385407LLU;
	uint8_t x311 = UINT8_MAX;
	int32_t t77 = -269040;

	t77 = ((x309<=(x310<=x311))%x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x313 = UINT32_MAX;
	volatile uint64_t x314 = 42298728227LLU;
	int16_t x316 = -1;
	volatile int32_t t78 = 50424;

	t78 = ((x313<=(x314<=x315))%x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 83966112U;
	uint8_t x318 = 67U;
	uint8_t x319 = 13U;
	uint64_t t79 = 256LLU;

	t79 = ((x317<=(x318<=x319))%x320);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 1605834U;
	static int8_t x322 = INT8_MIN;
	uint64_t x323 = UINT64_MAX;
	uint32_t x324 = 7706U;
	volatile uint32_t t80 = 57661U;

	t80 = ((x321<=(x322<=x323))%x324);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = -1;
	uint32_t x326 = 7U;
	int64_t x327 = INT64_MIN;
	volatile int32_t t81 = 45;

	t81 = ((x325<=(x326<=x327))%x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	int16_t x330 = INT16_MIN;
	static int8_t x331 = -1;
	static int32_t x332 = -1;
	int32_t t82 = -41;

	t82 = ((x329<=(x330<=x331))%x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = -1LL;
	static uint8_t x334 = 4U;
	uint64_t x335 = 422LLU;
	int64_t x336 = INT64_MIN;
	int64_t t83 = 5921835729LL;

	t83 = ((x333<=(x334<=x335))%x336);

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = -1;
	static int32_t x339 = INT32_MIN;
	uint32_t x340 = 252466U;
	volatile uint32_t t84 = 11U;

	t84 = ((x337<=(x338<=x339))%x340);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	int8_t x343 = INT8_MIN;
	int16_t x344 = -4378;
	int32_t t85 = 0;

	t85 = ((x341<=(x342<=x343))%x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x349 = 3LLU;
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = -1LL;
	int8_t x352 = INT8_MIN;
	int32_t t86 = 5;

	t86 = ((x349<=(x350<=x351))%x352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x353 = 1U;
	volatile int8_t x354 = INT8_MIN;
	static int8_t x355 = -1;
	uint64_t x356 = UINT64_MAX;
	uint64_t t87 = 183605801658597LLU;

	t87 = ((x353<=(x354<=x355))%x356);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x357 = INT16_MIN;
	static int16_t x358 = INT16_MIN;
	int8_t x359 = -1;
	int64_t x360 = 555141612165980LL;
	int64_t t88 = -3548190376047LL;

	t88 = ((x357<=(x358<=x359))%x360);

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x361 = INT8_MAX;
	volatile int32_t x362 = INT32_MAX;
	static int8_t x363 = INT8_MIN;
	static volatile int32_t t89 = 1;

	t89 = ((x361<=(x362<=x363))%x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x365 = -7774976;
	int32_t x366 = INT32_MIN;
	int16_t x367 = INT16_MIN;
	volatile int32_t x368 = 28;
	int32_t t90 = -1213;

	t90 = ((x365<=(x366<=x367))%x368);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = INT32_MAX;
	int64_t x370 = 1LL;
	static volatile int8_t x371 = INT8_MIN;
	uint8_t x372 = 10U;
	volatile int32_t t91 = 40655368;

	t91 = ((x369<=(x370<=x371))%x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x373 = 0U;
	int16_t x374 = INT16_MAX;
	volatile int64_t x375 = -1LL;
	volatile int32_t t92 = 42753451;

	t92 = ((x373<=(x374<=x375))%x376);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = -1735;
	uint8_t x379 = 28U;
	static int64_t x380 = -1LL;
	volatile int64_t t93 = 218035150LL;

	t93 = ((x377<=(x378<=x379))%x380);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x381 = INT8_MAX;
	int16_t x382 = -677;
	int64_t x383 = -1LL;
	static int16_t x384 = INT16_MIN;
	volatile int32_t t94 = -45;

	t94 = ((x381<=(x382<=x383))%x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x386 = 7U;
	int64_t x387 = -1LL;
	uint32_t x388 = 9577U;
	volatile uint32_t t95 = 6308U;

	t95 = ((x385<=(x386<=x387))%x388);

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x389 = -1LL;
	volatile int32_t x390 = INT32_MAX;
	static int8_t x392 = -4;
	int32_t t96 = 1412095;

	t96 = ((x389<=(x390<=x391))%x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x393 = -1;
	uint32_t x394 = UINT32_MAX;
	int64_t x395 = 698LL;
	static volatile uint8_t x396 = 8U;
	volatile int32_t t97 = -2412;

	t97 = ((x393<=(x394<=x395))%x396);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x397 = 13720091U;
	int8_t x398 = INT8_MIN;
	int8_t x399 = INT8_MIN;
	static int16_t x400 = INT16_MIN;

	t98 = ((x397<=(x398<=x399))%x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x401 = 966482018LLU;
	int32_t x402 = INT32_MIN;
	int64_t x403 = INT64_MIN;
	int16_t x404 = INT16_MAX;

	t99 = ((x401<=(x402<=x403))%x404);

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

