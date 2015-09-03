#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = 918586017432LL;
int8_t x11 = 21;
int32_t t2 = -15846;
int32_t t6 = 543613188;
uint32_t x30 = 15U;
int16_t x31 = INT16_MAX;
volatile int32_t t7 = -507677960;
int64_t x46 = -1LL;
static int16_t x56 = 0;
volatile int32_t t14 = -266271260;
static volatile int16_t x67 = -4840;
volatile uint64_t x71 = 46456982378LLU;
static int64_t x73 = INT64_MIN;
static uint64_t x75 = UINT64_MAX;
uint8_t x76 = UINT8_MAX;
static int32_t t18 = 59507251;
int32_t x77 = -3235;
int8_t x78 = INT8_MIN;
uint64_t x79 = 4798048LLU;
uint64_t x84 = UINT64_MAX;
int64_t x90 = 220303901566627936LL;
static volatile int16_t x98 = -1;
int32_t x103 = 485;
static volatile int16_t x105 = INT16_MIN;
volatile int32_t t26 = -420395906;
int64_t x110 = INT64_MIN;
static int32_t t27 = -353;
static int16_t x126 = -778;
static volatile int16_t x135 = INT16_MIN;
int32_t t33 = -843802628;
int32_t x139 = INT32_MIN;
volatile int32_t t34 = -206;
uint8_t x143 = UINT8_MAX;
int8_t x146 = -39;
int8_t x147 = INT8_MAX;
volatile int32_t t37 = 1478144;
volatile int64_t x155 = INT64_MIN;
static int32_t t38 = 7643786;
volatile uint16_t x159 = 5U;
static int16_t x164 = 15;
volatile int32_t t44 = -71;
volatile int32_t x186 = INT32_MAX;
volatile int64_t x187 = -1LL;
static volatile int32_t t46 = -7068355;
static int16_t x194 = INT16_MAX;
static volatile int32_t t49 = 233457;
volatile uint8_t x203 = UINT8_MAX;
int64_t x211 = 4774211081LL;
static volatile int64_t x221 = INT64_MIN;
uint8_t x224 = 3U;
volatile int32_t t55 = -67776;
uint32_t x226 = 958739U;
volatile int32_t t56 = 4078;
int32_t x233 = INT32_MIN;
int64_t x237 = INT64_MAX;
static int16_t x238 = -1;
int32_t t59 = 113406;
int8_t x242 = -1;
volatile int8_t x243 = INT8_MIN;
uint8_t x256 = 2U;
volatile int32_t t69 = 11;
volatile int32_t t70 = 40433760;
int8_t x289 = 31;
volatile int32_t x297 = INT32_MAX;
int16_t x300 = INT16_MIN;
int32_t t74 = -2;
static uint32_t x301 = UINT32_MAX;
volatile int32_t t76 = -5;
static volatile int64_t x310 = INT64_MAX;
int32_t t77 = 57;
int16_t x317 = -1;
int16_t x323 = INT16_MAX;
int32_t x324 = -96;
volatile uint8_t x325 = UINT8_MAX;
int64_t x330 = INT64_MAX;
static volatile int32_t t82 = -7;
int64_t x336 = 236LL;
volatile int32_t x338 = -19261018;
volatile int32_t t84 = -1;
int16_t x342 = INT16_MAX;
int8_t x349 = INT8_MIN;
int16_t x353 = INT16_MIN;
uint16_t x355 = 8154U;
int64_t x356 = INT64_MIN;
int32_t t89 = -50;
volatile int16_t x362 = INT16_MAX;
int16_t x366 = -984;
volatile int8_t x367 = INT8_MIN;
volatile int32_t t91 = 2186;
static uint32_t x370 = 56742U;
volatile int8_t x372 = -6;
static uint32_t x374 = UINT32_MAX;
uint64_t x375 = 0LLU;
static volatile int32_t t95 = 8231960;
volatile uint8_t x385 = 0U;
static int32_t x388 = 123927581;
uint32_t x391 = 3863U;
int8_t x393 = 0;
int8_t x397 = INT8_MIN;


void f0(void) {
	uint8_t x1 = 6U;
	int16_t x2 = INT16_MIN;
	uint16_t x3 = UINT16_MAX;
	int32_t x4 = 48725078;
	int32_t t0 = 1758765;

	t0 = ((x1<=(x2<=x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 2;
	volatile int8_t x6 = INT8_MIN;
	uint64_t x7 = 144643LLU;
	int16_t x8 = -307;
	volatile int32_t t1 = -44037;

	t1 = ((x5<=(x6<=x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int64_t x12 = -971108728458332LL;

	t2 = ((x9<=(x10<=x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int16_t x14 = -1;
	int16_t x15 = INT16_MIN;
	int8_t x16 = -1;
	static int32_t t3 = -1;

	t3 = ((x13<=(x14<=x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 38;
	int32_t x18 = INT32_MIN;
	int8_t x19 = -1;
	int32_t x20 = -1;
	volatile int32_t t4 = 3;

	t4 = ((x17<=(x18<=x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 20U;
	int32_t x22 = 0;
	int32_t x23 = -1;
	int32_t x24 = 397448377;
	volatile int32_t t5 = 399;

	t5 = ((x21<=(x22<=x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x25 = UINT8_MAX;
	int64_t x26 = INT64_MAX;
	int8_t x27 = 0;
	uint8_t x28 = 12U;

	t6 = ((x25<=(x26<=x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 147584;
	static volatile int64_t x32 = -1LL;

	t7 = ((x29<=(x30<=x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int8_t x34 = INT8_MIN;
	int64_t x35 = -1LL;
	int16_t x36 = -3;
	int32_t t8 = 459731457;

	t8 = ((x33<=(x34<=x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = 69942172U;
	int8_t x38 = 31;
	static uint64_t x39 = 2380LLU;
	static int8_t x40 = INT8_MIN;
	int32_t t9 = 49773;

	t9 = ((x37<=(x38<=x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = UINT32_MAX;
	int16_t x42 = INT16_MAX;
	volatile uint8_t x43 = 17U;
	static int16_t x44 = -3696;
	volatile int32_t t10 = 1238193;

	t10 = ((x41<=(x42<=x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MAX;
	uint16_t x47 = UINT16_MAX;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 2991;

	t11 = ((x45<=(x46<=x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	uint8_t x50 = 3U;
	volatile int8_t x51 = INT8_MIN;
	uint16_t x52 = 7U;
	volatile int32_t t12 = 502633;

	t12 = ((x49<=(x50<=x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 13;
	uint32_t x54 = UINT32_MAX;
	int32_t x55 = INT32_MIN;
	static int32_t t13 = 99703754;

	t13 = ((x53<=(x54<=x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = 13628746;
	int32_t x58 = INT32_MIN;
	int8_t x59 = INT8_MIN;
	int8_t x60 = INT8_MIN;

	t14 = ((x57<=(x58<=x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MAX;
	int8_t x64 = INT8_MAX;
	volatile int32_t t15 = -3125964;

	t15 = ((x61<=(x62<=x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 5U;
	uint32_t x66 = UINT32_MAX;
	int16_t x68 = -2584;
	volatile int32_t t16 = 0;

	t16 = ((x65<=(x66<=x67))<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	static int16_t x70 = INT16_MIN;
	int32_t x72 = -319721;
	int32_t t17 = -405;

	t17 = ((x69<=(x70<=x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = UINT32_MAX;

	t18 = ((x73<=(x74<=x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x80 = UINT8_MAX;
	volatile int32_t t19 = -528047;

	t19 = ((x77<=(x78<=x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	uint8_t x82 = 0U;
	static int16_t x83 = INT16_MIN;
	static int32_t t20 = -175285;

	t20 = ((x81<=(x82<=x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	volatile uint8_t x86 = UINT8_MAX;
	int16_t x87 = -4051;
	int16_t x88 = 3;
	volatile int32_t t21 = 33;

	t21 = ((x85<=(x86<=x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -123051;
	static int64_t x91 = 1521LL;
	volatile int16_t x92 = INT16_MAX;
	int32_t t22 = -131518140;

	t22 = ((x89<=(x90<=x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	uint64_t x94 = UINT64_MAX;
	int32_t x95 = INT32_MAX;
	uint32_t x96 = 3718975U;
	int32_t t23 = 89;

	t23 = ((x93<=(x94<=x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 854286;
	static uint32_t x99 = 18U;
	int16_t x100 = INT16_MIN;
	static int32_t t24 = 917;

	t24 = ((x97<=(x98<=x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	static int8_t x102 = INT8_MIN;
	uint32_t x104 = 5715U;
	volatile int32_t t25 = 115557004;

	t25 = ((x101<=(x102<=x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x106 = 12728U;
	int64_t x107 = INT64_MIN;
	int8_t x108 = 0;

	t26 = ((x105<=(x106<=x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int64_t x111 = 0LL;
	int64_t x112 = INT64_MAX;

	t27 = ((x109<=(x110<=x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	uint16_t x114 = UINT16_MAX;
	volatile uint64_t x115 = 73LLU;
	static int64_t x116 = 26099962749731218LL;
	volatile int32_t t28 = -59834;

	t28 = ((x113<=(x114<=x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x117 = 1U;
	int64_t x118 = INT64_MAX;
	int16_t x119 = 15;
	static volatile int8_t x120 = 26;
	int32_t t29 = 1585;

	t29 = ((x117<=(x118<=x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MIN;
	uint32_t x122 = UINT32_MAX;
	uint32_t x123 = 4809086U;
	int16_t x124 = -2;
	int32_t t30 = 9;

	t30 = ((x121<=(x122<=x123))<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MIN;
	int8_t x127 = INT8_MAX;
	static int64_t x128 = INT64_MIN;
	int32_t t31 = -51;

	t31 = ((x125<=(x126<=x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 38U;
	volatile uint8_t x130 = UINT8_MAX;
	uint64_t x131 = 285LLU;
	uint8_t x132 = 6U;
	volatile int32_t t32 = 866580;

	t32 = ((x129<=(x130<=x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -30826;
	uint8_t x134 = 31U;
	static int8_t x136 = INT8_MIN;

	t33 = ((x133<=(x134<=x135))<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 8149;
	static int64_t x138 = INT64_MIN;
	int64_t x140 = INT64_MAX;

	t34 = ((x137<=(x138<=x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	volatile int8_t x142 = INT8_MIN;
	uint8_t x144 = 0U;
	static int32_t t35 = -63;

	t35 = ((x141<=(x142<=x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	uint8_t x148 = 9U;
	int32_t t36 = 880;

	t36 = ((x145<=(x146<=x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 959U;
	int32_t x150 = 3;
	volatile int16_t x151 = -1;
	uint16_t x152 = 11939U;

	t37 = ((x149<=(x150<=x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = -1;
	static int64_t x154 = 35081426505LL;
	uint32_t x156 = UINT32_MAX;

	t38 = ((x153<=(x154<=x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x157 = INT16_MAX;
	volatile int16_t x158 = 2;
	static int8_t x160 = INT8_MIN;
	int32_t t39 = -955735;

	t39 = ((x157<=(x158<=x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 211521298;
	int16_t x162 = 7328;
	static int64_t x163 = INT64_MIN;
	int32_t t40 = 1706;

	t40 = ((x161<=(x162<=x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -15;
	uint8_t x166 = 1U;
	volatile int64_t x167 = INT64_MAX;
	static uint64_t x168 = 470640682947578LLU;
	static int32_t t41 = 6100;

	t41 = ((x165<=(x166<=x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 11291141460695LL;
	int8_t x170 = INT8_MIN;
	int8_t x171 = -1;
	int32_t x172 = INT32_MIN;
	volatile int32_t t42 = 249880;

	t42 = ((x169<=(x170<=x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 24U;
	uint64_t x174 = 2335655378225486926LLU;
	int64_t x175 = INT64_MAX;
	int16_t x176 = -1;
	int32_t t43 = 242;

	t43 = ((x173<=(x174<=x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	static int64_t x178 = INT64_MIN;
	volatile int32_t x179 = INT32_MIN;
	static int32_t x180 = -1;

	t44 = ((x177<=(x178<=x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x181 = 12LLU;
	int16_t x182 = -1;
	static uint16_t x183 = UINT16_MAX;
	static int16_t x184 = INT16_MAX;
	int32_t t45 = 823625;

	t45 = ((x181<=(x182<=x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x185 = 3U;
	uint32_t x188 = 243816895U;

	t46 = ((x185<=(x186<=x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x189 = INT16_MIN;
	uint32_t x190 = 22509U;
	uint16_t x191 = 30U;
	int32_t x192 = 1;
	static int32_t t47 = 1;

	t47 = ((x189<=(x190<=x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x193 = UINT16_MAX;
	static uint32_t x195 = 191U;
	uint64_t x196 = UINT64_MAX;
	int32_t t48 = 21506;

	t48 = ((x193<=(x194<=x195))<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = 2812;
	int16_t x198 = -1;
	int32_t x199 = -1;
	static uint16_t x200 = UINT16_MAX;

	t49 = ((x197<=(x198<=x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = -1;
	int32_t x202 = -577510;
	int8_t x204 = 1;
	static int32_t t50 = 29;

	t50 = ((x201<=(x202<=x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	int16_t x206 = 0;
	volatile int32_t x207 = INT32_MAX;
	uint64_t x208 = 59860692LLU;
	int32_t t51 = -1482;

	t51 = ((x205<=(x206<=x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = 538098697067748721LL;
	int8_t x210 = 2;
	uint32_t x212 = 69000U;
	volatile int32_t t52 = -2115171;

	t52 = ((x209<=(x210<=x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = 88U;
	static uint32_t x214 = 1074U;
	static uint64_t x215 = 517298061568941LLU;
	static uint64_t x216 = 913507LLU;
	volatile int32_t t53 = -6;

	t53 = ((x213<=(x214<=x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 3U;
	static uint32_t x218 = UINT32_MAX;
	volatile int32_t x219 = -1;
	int16_t x220 = -1;
	volatile int32_t t54 = 3615;

	t54 = ((x217<=(x218<=x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x222 = 18U;
	int64_t x223 = INT64_MIN;

	t55 = ((x221<=(x222<=x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 6LLU;
	int16_t x227 = -13;
	uint16_t x228 = 98U;

	t56 = ((x225<=(x226<=x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MIN;
	int16_t x230 = INT16_MIN;
	volatile int8_t x231 = -1;
	int16_t x232 = INT16_MIN;
	int32_t t57 = -1;

	t57 = ((x229<=(x230<=x231))<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = 22U;
	int8_t x235 = -3;
	volatile uint16_t x236 = 2980U;
	static volatile int32_t t58 = 619245213;

	t58 = ((x233<=(x234<=x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x239 = 3U;
	uint32_t x240 = 56U;

	t59 = ((x237<=(x238<=x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 19324969287506042LLU;
	uint16_t x244 = 0U;
	volatile int32_t t60 = 61;

	t60 = ((x241<=(x242<=x243))<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = 26U;
	int64_t x246 = INT64_MAX;
	static volatile uint8_t x247 = 2U;
	int16_t x248 = INT16_MIN;
	int32_t t61 = 45;

	t61 = ((x245<=(x246<=x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MAX;
	uint32_t x250 = UINT32_MAX;
	volatile int16_t x251 = 236;
	uint32_t x252 = 122362316U;
	int32_t t62 = -19;

	t62 = ((x249<=(x250<=x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	volatile int64_t x254 = INT64_MIN;
	int64_t x255 = -1LL;
	volatile int32_t t63 = 1;

	t63 = ((x253<=(x254<=x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = 55507094LLU;
	uint32_t x258 = 30852U;
	int8_t x259 = INT8_MAX;
	static int64_t x260 = INT64_MAX;
	int32_t t64 = -25319;

	t64 = ((x257<=(x258<=x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x261 = UINT8_MAX;
	int32_t x262 = INT32_MAX;
	uint64_t x263 = UINT64_MAX;
	static int8_t x264 = INT8_MAX;
	int32_t t65 = -91809688;

	t65 = ((x261<=(x262<=x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	int32_t x266 = INT32_MIN;
	volatile uint32_t x267 = 41148U;
	static int64_t x268 = INT64_MIN;
	volatile int32_t t66 = 71614;

	t66 = ((x265<=(x266<=x267))<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	static int8_t x270 = INT8_MIN;
	static int16_t x271 = INT16_MAX;
	int16_t x272 = -1;
	volatile int32_t t67 = 1256670;

	t67 = ((x269<=(x270<=x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 6573071913404379516LLU;
	int32_t x274 = -1;
	static volatile uint64_t x275 = 16026988LLU;
	uint8_t x276 = 50U;
	volatile int32_t t68 = 1018898500;

	t68 = ((x273<=(x274<=x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 0U;
	static int64_t x278 = INT64_MIN;
	int8_t x279 = -1;
	int8_t x280 = INT8_MIN;

	t69 = ((x277<=(x278<=x279))<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	uint32_t x282 = UINT32_MAX;
	int16_t x283 = INT16_MIN;
	int64_t x284 = INT64_MAX;

	t70 = ((x281<=(x282<=x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	volatile int8_t x286 = INT8_MIN;
	volatile int8_t x287 = INT8_MAX;
	int16_t x288 = INT16_MIN;
	int32_t t71 = 829;

	t71 = ((x285<=(x286<=x287))<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x290 = UINT16_MAX;
	static int64_t x291 = INT64_MIN;
	int8_t x292 = -1;
	int32_t t72 = 2230;

	t72 = ((x289<=(x290<=x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MAX;
	volatile uint32_t x294 = 8475178U;
	int64_t x295 = INT64_MAX;
	int8_t x296 = INT8_MIN;
	volatile int32_t t73 = -28780;

	t73 = ((x293<=(x294<=x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x298 = 1128LLU;
	int8_t x299 = 2;

	t74 = ((x297<=(x298<=x299))<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x302 = 23956028133636271LLU;
	int64_t x303 = -9846442030238LL;
	volatile int8_t x304 = 1;
	int32_t t75 = -28526;

	t75 = ((x301<=(x302<=x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x305 = UINT16_MAX;
	int32_t x306 = INT32_MIN;
	int8_t x307 = INT8_MIN;
	int8_t x308 = INT8_MIN;

	t76 = ((x305<=(x306<=x307))<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 1927415U;
	static int8_t x311 = 42;
	volatile uint64_t x312 = 2LLU;

	t77 = ((x309<=(x310<=x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 18U;
	volatile int64_t x314 = -1LL;
	int8_t x315 = INT8_MIN;
	static int64_t x316 = INT64_MAX;
	static int32_t t78 = 155408188;

	t78 = ((x313<=(x314<=x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x318 = INT8_MIN;
	int32_t x319 = -1;
	int8_t x320 = 1;
	int32_t t79 = 63262;

	t79 = ((x317<=(x318<=x319))<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	static int32_t x322 = 0;
	int32_t t80 = -89;

	t80 = ((x321<=(x322<=x323))<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MAX;
	uint8_t x327 = 118U;
	int16_t x328 = -1;
	volatile int32_t t81 = 165;

	t81 = ((x325<=(x326<=x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	int16_t x331 = -1;
	volatile int8_t x332 = INT8_MAX;

	t82 = ((x329<=(x330<=x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 49;
	int16_t x334 = INT16_MIN;
	static uint64_t x335 = 1116395LLU;
	int32_t t83 = 381005469;

	t83 = ((x333<=(x334<=x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 0U;
	static volatile int32_t x339 = INT32_MAX;
	int16_t x340 = -1;

	t84 = ((x337<=(x338<=x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -12;
	uint8_t x343 = UINT8_MAX;
	int32_t x344 = INT32_MAX;
	static int32_t t85 = 782679;

	t85 = ((x341<=(x342<=x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MAX;
	int64_t x347 = INT64_MIN;
	static volatile int64_t x348 = -1LL;
	static volatile int32_t t86 = 1876;

	t86 = ((x345<=(x346<=x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = UINT16_MAX;
	volatile uint16_t x351 = UINT16_MAX;
	static int32_t x352 = INT32_MIN;
	volatile int32_t t87 = -24;

	t87 = ((x349<=(x350<=x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = 3U;
	volatile int32_t t88 = 56303015;

	t88 = ((x353<=(x354<=x355))<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = -30444174967LL;
	uint8_t x358 = UINT8_MAX;
	static volatile uint64_t x359 = 5563975LLU;
	uint8_t x360 = 3U;

	t89 = ((x357<=(x358<=x359))<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	int64_t x363 = -1LL;
	int64_t x364 = -80LL;
	volatile int32_t t90 = -25115;

	t90 = ((x361<=(x362<=x363))<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x365 = 2U;
	int32_t x368 = INT32_MAX;

	t91 = ((x365<=(x366<=x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	volatile int16_t x371 = INT16_MIN;
	int32_t t92 = 1711846;

	t92 = ((x369<=(x370<=x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 5U;
	uint32_t x376 = 27U;
	volatile int32_t t93 = 519247;

	t93 = ((x373<=(x374<=x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 42;
	int8_t x378 = INT8_MAX;
	int32_t x379 = -4132807;
	int8_t x380 = -31;
	int32_t t94 = -1708890;

	t94 = ((x377<=(x378<=x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = 33250208LL;
	int32_t x382 = INT32_MIN;
	int64_t x383 = INT64_MAX;
	uint64_t x384 = 34868033082236LLU;

	t95 = ((x381<=(x382<=x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x386 = INT64_MAX;
	static volatile int16_t x387 = INT16_MAX;
	volatile int32_t t96 = -478631;

	t96 = ((x385<=(x386<=x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	int8_t x390 = INT8_MAX;
	volatile int64_t x392 = -1LL;
	int32_t t97 = 65341852;

	t97 = ((x389<=(x390<=x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = 2627341230986LLU;
	uint8_t x395 = 4U;
	static int8_t x396 = -60;
	int32_t t98 = -1;

	t98 = ((x393<=(x394<=x395))<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = -1589189261789390486LL;
	int8_t x399 = INT8_MIN;
	uint64_t x400 = 4906345504109974LLU;
	volatile int32_t t99 = -335;

	t99 = ((x397<=(x398<=x399))<=x400);

	if (t99 != 1) { NG(); } else { ; }
	
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

