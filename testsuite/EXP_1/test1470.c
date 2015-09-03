#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
volatile int8_t x4 = -1;
int32_t x11 = 2145159;
uint64_t x25 = UINT64_MAX;
volatile uint16_t x28 = 5428U;
static int8_t x29 = INT8_MIN;
int64_t x31 = -7998LL;
volatile int32_t t6 = -856323005;
static uint64_t x35 = UINT64_MAX;
static int64_t x38 = INT64_MIN;
int32_t t8 = -56;
int32_t x44 = INT32_MIN;
int16_t x52 = -11868;
static int16_t x56 = 13;
uint32_t x63 = 24U;
uint32_t x67 = 389U;
static int64_t x83 = INT64_MAX;
uint64_t x85 = 1069867781446975306LLU;
int16_t x97 = INT16_MIN;
uint8_t x98 = UINT8_MAX;
int64_t x102 = INT64_MAX;
int8_t x116 = -1;
static int32_t x122 = 936253594;
static int32_t t30 = 0;
uint16_t x133 = 856U;
int64_t x134 = -1LL;
int16_t x138 = -1;
int16_t x140 = INT16_MIN;
static volatile int32_t t33 = -1053;
uint16_t x145 = 23083U;
uint16_t x157 = UINT16_MAX;
static int32_t x159 = INT32_MIN;
int16_t x163 = INT16_MIN;
uint64_t t39 = UINT64_MAX;
uint64_t x172 = 0LLU;
int32_t t42 = -6;
int64_t x178 = -1LL;
static volatile uint32_t x186 = 7U;
int64_t x189 = INT64_MAX;
int64_t x191 = -4097745082364107LL;
static uint8_t x194 = 6U;
int64_t x196 = INT64_MIN;
static volatile int64_t t47 = 105365806LL;
volatile int32_t t49 = INT32_MAX;
volatile uint64_t x208 = 1LLU;
uint64_t x210 = 72476LLU;
volatile int16_t x215 = -1;
static int16_t x218 = INT16_MIN;
volatile int32_t t53 = -8;
static int32_t x221 = 365449;
uint32_t x223 = 126U;
int32_t x224 = -6;
int32_t t57 = 141993604;
static int16_t x238 = -1;
static uint16_t x250 = 6922U;
int32_t t61 = 0;
int64_t x256 = -1LL;
volatile int64_t t62 = 16567815LL;
uint16_t x265 = 199U;
int32_t x273 = INT32_MAX;
static volatile int64_t t66 = INT64_MIN;
volatile int64_t x284 = -6214884989028LL;
static volatile int64_t t68 = 65205854887LL;
uint8_t x285 = 62U;
int32_t t69 = 155523522;
int64_t x293 = -1LL;
uint16_t x298 = UINT16_MAX;
uint64_t x300 = 93LLU;
static uint64_t x307 = 32911912325274076LLU;
int64_t t74 = 260LL;
int32_t x310 = INT32_MAX;
volatile int8_t x312 = INT8_MIN;
volatile int32_t t75 = 7150796;
static int32_t x313 = INT32_MAX;
int16_t x332 = -1;
volatile uint16_t x335 = 2U;
static int32_t t81 = -294;
int8_t x337 = 44;
int32_t t82 = 409961;
volatile uint32_t x341 = 61U;
static int16_t x343 = 13356;
volatile int32_t t85 = 0;
volatile uint32_t x355 = UINT32_MAX;
uint64_t x357 = UINT64_MAX;
int64_t t88 = 0LL;
int64_t x367 = INT64_MAX;
int8_t x370 = 11;
static volatile uint32_t t90 = UINT32_MAX;
static volatile uint16_t x379 = 0U;
int32_t x383 = INT32_MIN;
static int64_t x388 = INT64_MAX;
volatile uint16_t x396 = UINT16_MAX;
uint32_t x403 = UINT32_MAX;
int64_t x404 = INT64_MIN;


void f0(void) {
	int16_t x2 = INT16_MIN;
	uint64_t x3 = 23347870069833991LLU;
	int32_t t0 = -13;

	t0 = (((x1<x2)<=x3)+x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 51;
	volatile int64_t x6 = -1LL;
	int64_t x7 = -1LL;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = INT32_MIN;

	t1 = (((x5<x6)<=x7)+x8);

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint64_t x10 = 464281617857797LLU;
	int32_t x12 = INT32_MIN;
	static int32_t t2 = -267221461;

	t2 = (((x9<x10)<=x11)+x12);

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -1;
	int8_t x14 = INT8_MAX;
	uint16_t x15 = UINT16_MAX;
	int16_t x16 = INT16_MIN;
	int32_t t3 = -703199794;

	t3 = (((x13<x14)<=x15)+x16);

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 114322686551194477LL;
	static int8_t x22 = INT8_MAX;
	volatile int16_t x23 = INT16_MAX;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t4 = -729391240;

	t4 = (((x21<x22)<=x23)+x24);

	if (t4 != 65536) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x26 = INT64_MIN;
	volatile int16_t x27 = INT16_MIN;
	int32_t t5 = -180510959;

	t5 = (((x25<x26)<=x27)+x28);

	if (t5 != 5428) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x30 = 0U;
	int8_t x32 = -1;

	t6 = (((x29<x30)<=x31)+x32);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = 29;
	static volatile int32_t x34 = -2073179;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t7 = -11;

	t7 = (((x33<x34)<=x35)+x36);

	if (t7 != 256) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int16_t x39 = INT16_MIN;
	volatile uint8_t x40 = UINT8_MAX;

	t8 = (((x37<x38)<=x39)+x40);

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	int8_t x42 = -1;
	static int32_t x43 = INT32_MIN;
	int32_t t9 = INT32_MIN;

	t9 = (((x41<x42)<=x43)+x44);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -19684118;
	int16_t x46 = -2400;
	int64_t x47 = INT64_MIN;
	uint32_t x48 = 125U;
	volatile uint32_t t10 = 35U;

	t10 = (((x45<x46)<=x47)+x48);

	if (t10 != 125U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	uint8_t x50 = 11U;
	int64_t x51 = -1LL;
	volatile int32_t t11 = 605410;

	t11 = (((x49<x50)<=x51)+x52);

	if (t11 != -11868) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	uint8_t x54 = 1U;
	int64_t x55 = INT64_MIN;
	static int32_t t12 = -1;

	t12 = (((x53<x54)<=x55)+x56);

	if (t12 != 13) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = 0;
	volatile uint16_t x58 = 231U;
	uint32_t x59 = 3U;
	int32_t x60 = INT32_MIN;
	static volatile int32_t t13 = 23532;

	t13 = (((x57<x58)<=x59)+x60);

	if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 63245U;
	uint64_t x62 = UINT64_MAX;
	uint16_t x64 = 5U;
	volatile int32_t t14 = -1002063965;

	t14 = (((x61<x62)<=x63)+x64);

	if (t14 != 6) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = -4490;
	static int8_t x68 = -1;
	volatile int32_t t15 = -15129656;

	t15 = (((x65<x66)<=x67)+x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MAX;
	int16_t x70 = INT16_MIN;
	uint64_t x71 = UINT64_MAX;
	uint32_t x72 = 0U;
	volatile uint32_t t16 = 8U;

	t16 = (((x69<x70)<=x71)+x72);

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MAX;
	uint32_t x75 = 1175U;
	static int32_t x76 = 24121;
	int32_t t17 = 0;

	t17 = (((x73<x74)<=x75)+x76);

	if (t17 != 24122) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MIN;
	volatile int8_t x78 = INT8_MIN;
	uint32_t x79 = 126U;
	static uint8_t x80 = UINT8_MAX;
	int32_t t18 = 0;

	t18 = (((x77<x78)<=x79)+x80);

	if (t18 != 256) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = UINT64_MAX;
	static int16_t x82 = INT16_MIN;
	static int16_t x84 = INT16_MIN;
	volatile int32_t t19 = -13222;

	t19 = (((x81<x82)<=x83)+x84);

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x86 = 2941421LLU;
	volatile int64_t x87 = -1875889346426LL;
	uint64_t x88 = UINT64_MAX;
	uint64_t t20 = UINT64_MAX;

	t20 = (((x85<x86)<=x87)+x88);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	int32_t x90 = 389;
	int8_t x91 = INT8_MIN;
	int16_t x92 = -1;
	int32_t t21 = -2;

	t21 = (((x89<x90)<=x91)+x92);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 22;
	static int8_t x94 = -1;
	uint32_t x95 = UINT32_MAX;
	static int64_t x96 = INT64_MIN;
	int64_t t22 = 1642LL;

	t22 = (((x93<x94)<=x95)+x96);

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x99 = -1;
	volatile uint64_t x100 = 272170582LLU;
	static volatile uint64_t t23 = 255064165517LLU;

	t23 = (((x97<x98)<=x99)+x100);

	if (t23 != 272170582LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	volatile int8_t x103 = -1;
	uint64_t x104 = 590396LLU;
	uint64_t t24 = 152LLU;

	t24 = (((x101<x102)<=x103)+x104);

	if (t24 != 590396LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x105 = UINT64_MAX;
	int64_t x106 = 1303707924276034423LL;
	int16_t x107 = INT16_MIN;
	volatile int64_t x108 = INT64_MIN;
	volatile int64_t t25 = INT64_MIN;

	t25 = (((x105<x106)<=x107)+x108);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 2U;
	uint8_t x110 = 1U;
	int8_t x111 = -1;
	int32_t x112 = INT32_MAX;
	volatile int32_t t26 = INT32_MAX;

	t26 = (((x109<x110)<=x111)+x112);

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 74U;
	volatile uint8_t x114 = UINT8_MAX;
	int64_t x115 = -1LL;
	int32_t t27 = 41502;

	t27 = (((x113<x114)<=x115)+x116);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x117 = 33U;
	int64_t x118 = INT64_MIN;
	volatile int64_t x119 = INT64_MAX;
	static int16_t x120 = 14188;
	volatile int32_t t28 = 78558;

	t28 = (((x117<x118)<=x119)+x120);

	if (t28 != 14189) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	int32_t x123 = INT32_MIN;
	uint8_t x124 = 6U;
	static volatile int32_t t29 = -1;

	t29 = (((x121<x122)<=x123)+x124);

	if (t29 != 6) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MAX;
	static uint64_t x126 = 18938911LLU;
	volatile int16_t x127 = -1;
	static volatile int32_t x128 = 1007;

	t30 = (((x125<x126)<=x127)+x128);

	if (t30 != 1007) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = UINT32_MAX;
	uint8_t x130 = 2U;
	int32_t x131 = INT32_MAX;
	int8_t x132 = 0;
	volatile int32_t t31 = -7897;

	t31 = (((x129<x130)<=x131)+x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MIN;
	volatile int32_t t32 = INT32_MIN;

	t32 = (((x133<x134)<=x135)+x136);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = UINT16_MAX;
	static volatile int64_t x139 = INT64_MIN;

	t33 = (((x137<x138)<=x139)+x140);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = -4703;
	uint32_t x142 = 8656U;
	int16_t x143 = -3864;
	uint64_t x144 = 10LLU;
	uint64_t t34 = 54473003LLU;

	t34 = (((x141<x142)<=x143)+x144);

	if (t34 != 10LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x146 = UINT64_MAX;
	static int16_t x147 = INT16_MIN;
	volatile uint8_t x148 = UINT8_MAX;
	static int32_t t35 = 1;

	t35 = (((x145<x146)<=x147)+x148);

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = 272038461798595LL;
	static uint32_t x150 = 7U;
	int8_t x151 = INT8_MAX;
	int32_t x152 = INT32_MIN;
	volatile int32_t t36 = -88;

	t36 = (((x149<x150)<=x151)+x152);

	if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x153 = INT16_MIN;
	int64_t x154 = -7005469195540057LL;
	static int8_t x155 = INT8_MIN;
	uint8_t x156 = 58U;
	static volatile int32_t t37 = 15;

	t37 = (((x153<x154)<=x155)+x156);

	if (t37 != 58) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x158 = 42U;
	volatile uint32_t x160 = 14U;
	volatile uint32_t t38 = 1974U;

	t38 = (((x157<x158)<=x159)+x160);

	if (t38 != 14U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = 79736LLU;
	int8_t x162 = 0;
	uint64_t x164 = UINT64_MAX;

	t39 = (((x161<x162)<=x163)+x164);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x165 = UINT32_MAX;
	int64_t x166 = INT64_MIN;
	static int64_t x167 = -415701LL;
	volatile uint16_t x168 = 28740U;
	volatile int32_t t40 = -68239875;

	t40 = (((x165<x166)<=x167)+x168);

	if (t40 != 28740) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = UINT32_MAX;
	uint32_t x170 = 4U;
	int32_t x171 = INT32_MAX;
	volatile uint64_t t41 = 13304LLU;

	t41 = (((x169<x170)<=x171)+x172);

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 107U;
	volatile uint16_t x174 = 1U;
	int32_t x175 = INT32_MAX;
	static uint16_t x176 = 6512U;

	t42 = (((x173<x174)<=x175)+x176);

	if (t42 != 6513) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = INT16_MIN;
	static int64_t x179 = -767740445467LL;
	int8_t x180 = -1;
	volatile int32_t t43 = 1342;

	t43 = (((x177<x178)<=x179)+x180);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = 3;
	int32_t x182 = -1;
	static uint32_t x183 = UINT32_MAX;
	int32_t x184 = INT32_MIN;
	int32_t t44 = 1;

	t44 = (((x181<x182)<=x183)+x184);

	if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x185 = -512;
	volatile int8_t x187 = -1;
	static int64_t x188 = -1LL;
	volatile int64_t t45 = 9233LL;

	t45 = (((x185<x186)<=x187)+x188);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x190 = INT32_MIN;
	uint32_t x192 = 15080U;
	uint32_t t46 = 399297U;

	t46 = (((x189<x190)<=x191)+x192);

	if (t46 != 15080U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MIN;
	int8_t x195 = 1;

	t47 = (((x193<x194)<=x195)+x196);

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x197 = 1700445997643359LLU;
	uint32_t x198 = 1U;
	volatile uint32_t x199 = UINT32_MAX;
	int64_t x200 = -3845920900054824LL;
	int64_t t48 = -7541LL;

	t48 = (((x197<x198)<=x199)+x200);

	if (t48 != -3845920900054823LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x201 = -238;
	int32_t x202 = -119550;
	int64_t x203 = INT64_MIN;
	volatile int32_t x204 = INT32_MAX;

	t49 = (((x201<x202)<=x203)+x204);

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x205 = UINT64_MAX;
	volatile int16_t x206 = 11;
	int64_t x207 = INT64_MIN;
	volatile uint64_t t50 = 5364772170258LLU;

	t50 = (((x205<x206)<=x207)+x208);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = INT32_MAX;
	volatile int64_t x211 = -1LL;
	uint32_t x212 = UINT32_MAX;
	uint32_t t51 = UINT32_MAX;

	t51 = (((x209<x210)<=x211)+x212);

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = -1LL;
	int8_t x214 = INT8_MIN;
	static int16_t x216 = 1;
	int32_t t52 = -2;

	t52 = (((x213<x214)<=x215)+x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x217 = -579888984607713LL;
	int8_t x219 = INT8_MAX;
	int16_t x220 = -10;

	t53 = (((x217<x218)<=x219)+x220);

	if (t53 != -9) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x222 = -6;
	int32_t t54 = 807069165;

	t54 = (((x221<x222)<=x223)+x224);

	if (t54 != -5) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x225 = -1;
	int16_t x226 = -1;
	uint32_t x227 = UINT32_MAX;
	volatile int8_t x228 = 1;
	volatile int32_t t55 = 111;

	t55 = (((x225<x226)<=x227)+x228);

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MIN;
	uint8_t x230 = 73U;
	volatile int32_t x231 = 9;
	static int32_t x232 = -1;
	int32_t t56 = -1615;

	t56 = (((x229<x230)<=x231)+x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = 19251208099LLU;
	volatile int16_t x234 = -469;
	volatile uint8_t x235 = 17U;
	int8_t x236 = INT8_MIN;

	t57 = (((x233<x234)<=x235)+x236);

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = -1LL;
	int64_t x239 = INT64_MAX;
	int16_t x240 = -1;
	volatile int32_t t58 = 20;

	t58 = (((x237<x238)<=x239)+x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x241 = INT64_MIN;
	volatile int32_t x242 = INT32_MIN;
	int16_t x243 = -78;
	uint64_t x244 = 2LLU;
	static uint64_t t59 = 268990237974LLU;

	t59 = (((x241<x242)<=x243)+x244);

	if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = INT32_MIN;
	int64_t x246 = -1LL;
	int64_t x247 = -1LL;
	volatile int32_t x248 = INT32_MIN;
	volatile int32_t t60 = INT32_MIN;

	t60 = (((x245<x246)<=x247)+x248);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = -1;
	uint16_t x251 = 367U;
	int32_t x252 = INT32_MIN;

	t61 = (((x249<x250)<=x251)+x252);

	if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = INT8_MIN;
	int32_t x254 = -1;
	int8_t x255 = 1;

	t62 = (((x253<x254)<=x255)+x256);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = 3;
	uint32_t x262 = 110572983U;
	uint32_t x263 = 100U;
	int16_t x264 = -580;
	static volatile int32_t t63 = -60324017;

	t63 = (((x261<x262)<=x263)+x264);

	if (t63 != -579) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x266 = UINT32_MAX;
	int8_t x267 = -1;
	static int64_t x268 = 9763256326623475LL;
	int64_t t64 = 15LL;

	t64 = (((x265<x266)<=x267)+x268);

	if (t64 != 9763256326623475LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = UINT32_MAX;
	int16_t x270 = 13752;
	uint8_t x271 = 1U;
	int8_t x272 = INT8_MIN;
	int32_t t65 = -1;

	t65 = (((x269<x270)<=x271)+x272);

	if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x274 = INT8_MIN;
	volatile int32_t x275 = -15167994;
	int64_t x276 = INT64_MIN;

	t66 = (((x273<x274)<=x275)+x276);

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x277 = 10013LL;
	uint32_t x278 = 854U;
	volatile uint32_t x279 = UINT32_MAX;
	int32_t x280 = INT32_MIN;
	volatile int32_t t67 = 62822;

	t67 = (((x277<x278)<=x279)+x280);

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = 2323392603777LL;
	uint8_t x282 = UINT8_MAX;
	uint32_t x283 = UINT32_MAX;

	t68 = (((x281<x282)<=x283)+x284);

	if (t68 != -6214884989027LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x286 = -773LL;
	int64_t x287 = -1LL;
	volatile int32_t x288 = -10693;

	t69 = (((x285<x286)<=x287)+x288);

	if (t69 != -10693) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x289 = 3401422;
	int64_t x290 = -1LL;
	volatile int8_t x291 = -44;
	int64_t x292 = 624LL;
	int64_t t70 = 509144LL;

	t70 = (((x289<x290)<=x291)+x292);

	if (t70 != 624LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x294 = INT32_MIN;
	static volatile uint8_t x295 = 15U;
	uint32_t x296 = 12553490U;
	uint32_t t71 = 5125815U;

	t71 = (((x293<x294)<=x295)+x296);

	if (t71 != 12553491U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x297 = INT32_MIN;
	volatile int16_t x299 = INT16_MAX;
	uint64_t t72 = 113091285LLU;

	t72 = (((x297<x298)<=x299)+x300);

	if (t72 != 94LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = -1;
	uint32_t x302 = 523574U;
	static int32_t x303 = INT32_MAX;
	int8_t x304 = 36;
	static volatile int32_t t73 = -2998996;

	t73 = (((x301<x302)<=x303)+x304);

	if (t73 != 37) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x305 = INT16_MIN;
	int32_t x306 = -1;
	static int64_t x308 = INT64_MIN;

	t74 = (((x305<x306)<=x307)+x308);

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x309 = UINT64_MAX;
	static int8_t x311 = INT8_MAX;

	t75 = (((x309<x310)<=x311)+x312);

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x314 = 0U;
	int8_t x315 = INT8_MIN;
	int32_t x316 = INT32_MIN;
	volatile int32_t t76 = INT32_MIN;

	t76 = (((x313<x314)<=x315)+x316);

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = INT32_MIN;
	volatile int16_t x318 = -1;
	volatile uint8_t x319 = 7U;
	uint8_t x320 = 0U;
	static volatile int32_t t77 = -1176043;

	t77 = (((x317<x318)<=x319)+x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x321 = UINT16_MAX;
	int8_t x322 = INT8_MAX;
	int32_t x323 = 222676;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t78 = 43;

	t78 = (((x321<x322)<=x323)+x324);

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x325 = 20U;
	uint8_t x326 = 4U;
	uint8_t x327 = 0U;
	volatile int64_t x328 = INT64_MIN;
	static int64_t t79 = -27398321117LL;

	t79 = (((x325<x326)<=x327)+x328);

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x329 = 1U;
	static uint64_t x330 = UINT64_MAX;
	int32_t x331 = INT32_MIN;
	volatile int32_t t80 = 1;

	t80 = (((x329<x330)<=x331)+x332);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x333 = -1LL;
	static int16_t x334 = INT16_MIN;
	volatile int16_t x336 = INT16_MAX;

	t81 = (((x333<x334)<=x335)+x336);

	if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x338 = 9763;
	volatile int64_t x339 = -1LL;
	static int32_t x340 = -5;

	t82 = (((x337<x338)<=x339)+x340);

	if (t82 != -5) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x342 = -304902689;
	static uint8_t x344 = 30U;
	volatile int32_t t83 = 1039571815;

	t83 = (((x341<x342)<=x343)+x344);

	if (t83 != 31) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MIN;
	volatile int64_t x346 = -578817907122159LL;
	volatile int16_t x347 = INT16_MAX;
	int32_t x348 = 113;
	volatile int32_t t84 = 9184;

	t84 = (((x345<x346)<=x347)+x348);

	if (t84 != 114) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x349 = INT64_MIN;
	volatile int8_t x350 = -1;
	int32_t x351 = -7;
	int8_t x352 = INT8_MAX;

	t85 = (((x349<x350)<=x351)+x352);

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = -8;
	int64_t x354 = -1LL;
	uint64_t x356 = 21904527769102639LLU;
	volatile uint64_t t86 = 64LLU;

	t86 = (((x353<x354)<=x355)+x356);

	if (t86 != 21904527769102640LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x358 = 1751;
	uint32_t x359 = UINT32_MAX;
	uint8_t x360 = 94U;
	volatile int32_t t87 = -1131;

	t87 = (((x357<x358)<=x359)+x360);

	if (t87 != 95) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x361 = 0;
	int8_t x362 = 10;
	int32_t x363 = INT32_MAX;
	int64_t x364 = INT64_MIN;

	t88 = (((x361<x362)<=x363)+x364);

	if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = INT8_MIN;
	volatile int32_t x366 = INT32_MAX;
	volatile int8_t x368 = INT8_MIN;
	volatile int32_t t89 = -2759;

	t89 = (((x365<x366)<=x367)+x368);

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = -1;
	volatile int64_t x371 = INT64_MIN;
	uint32_t x372 = UINT32_MAX;

	t90 = (((x369<x370)<=x371)+x372);

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = -351LL;
	static int32_t x374 = 1;
	static int64_t x375 = INT64_MAX;
	int16_t x376 = -1;
	volatile int32_t t91 = 776380285;

	t91 = (((x373<x374)<=x375)+x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = INT32_MIN;
	int8_t x378 = INT8_MAX;
	int64_t x380 = INT64_MIN;
	int64_t t92 = INT64_MIN;

	t92 = (((x377<x378)<=x379)+x380);

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = 4;
	uint8_t x382 = 0U;
	volatile uint16_t x384 = UINT16_MAX;
	static int32_t t93 = 12150;

	t93 = (((x381<x382)<=x383)+x384);

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x385 = 26U;
	int64_t x386 = INT64_MIN;
	int64_t x387 = -1LL;
	volatile int64_t t94 = INT64_MAX;

	t94 = (((x385<x386)<=x387)+x388);

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x389 = INT16_MAX;
	int16_t x390 = -1;
	static int8_t x391 = INT8_MIN;
	volatile uint64_t x392 = UINT64_MAX;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (((x389<x390)<=x391)+x392);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x393 = -1LL;
	volatile int8_t x394 = 6;
	uint64_t x395 = UINT64_MAX;
	volatile int32_t t96 = -399;

	t96 = (((x393<x394)<=x395)+x396);

	if (t96 != 65536) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x397 = INT64_MAX;
	int64_t x398 = INT64_MIN;
	int8_t x399 = INT8_MIN;
	int16_t x400 = -1;
	int32_t t97 = 6;

	t97 = (((x397<x398)<=x399)+x400);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = INT32_MIN;
	uint8_t x402 = 2U;
	static int64_t t98 = 82733479LL;

	t98 = (((x401<x402)<=x403)+x404);

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x405 = 2818U;
	static int8_t x406 = -52;
	static int32_t x407 = -1;
	int8_t x408 = INT8_MIN;
	int32_t t99 = 3775088;

	t99 = (((x405<x406)<=x407)+x408);

	if (t99 != -128) { NG(); } else { ; }
	
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

