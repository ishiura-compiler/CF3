#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 11705LL;
int16_t x3 = INT16_MAX;
int8_t x8 = 0;
uint16_t x12 = 37U;
int64_t x25 = INT64_MAX;
int8_t x26 = -1;
int8_t x27 = INT8_MAX;
uint64_t x28 = 14LLU;
uint64_t x35 = 7LLU;
int8_t x39 = 0;
volatile uint64_t t9 = 9117903503088419224LLU;
volatile int16_t x41 = -614;
volatile int64_t t11 = 0LL;
volatile int64_t x49 = -1LL;
int32_t x51 = -261;
volatile int8_t x54 = INT8_MIN;
int32_t x59 = -1;
volatile int64_t t14 = 789438280LL;
int64_t x61 = INT64_MIN;
volatile int32_t x66 = INT32_MIN;
int16_t x67 = -105;
uint16_t x68 = UINT16_MAX;
uint32_t x72 = 902U;
volatile int64_t t18 = 381804528112LL;
int16_t x78 = INT16_MIN;
uint8_t x84 = 6U;
uint8_t x85 = 3U;
int32_t x86 = -5;
int8_t x102 = INT8_MAX;
volatile int8_t x104 = INT8_MIN;
int32_t t25 = -7522;
int64_t x111 = INT64_MIN;
int32_t t30 = 40505;
uint8_t x127 = 10U;
int16_t x131 = 442;
static volatile uint64_t x140 = UINT64_MAX;
static volatile uint64_t t34 = 4391335393595868270LLU;
uint64_t x141 = 6489383869687705887LLU;
int32_t x154 = 951287;
volatile int64_t t39 = 96LL;
uint32_t x168 = 5731582U;
int64_t x181 = INT64_MIN;
int32_t x184 = -59;
static int32_t x187 = INT32_MIN;
static volatile int32_t t47 = -1834925;
volatile uint64_t t48 = 5305558236759LLU;
int16_t x201 = 0;
int8_t x213 = 1;
volatile int8_t x227 = INT8_MAX;
int8_t x228 = 48;
volatile int64_t x229 = INT64_MIN;
static int64_t x235 = INT64_MAX;
volatile int64_t t58 = -3758261965LL;
static uint8_t x237 = UINT8_MAX;
static int32_t t59 = INT32_MIN;
static uint32_t x242 = 64000229U;
uint16_t x244 = 10868U;
static volatile uint32_t t60 = 3U;
static volatile uint64_t t61 = 6040369729225947148LLU;
uint16_t x253 = 6756U;
uint16_t x258 = 7U;
int32_t x260 = INT32_MAX;
int32_t x264 = INT32_MIN;
int32_t t66 = 222;
static uint32_t x271 = 2707U;
volatile int64_t x277 = -1LL;
int8_t x278 = INT8_MAX;
int64_t t69 = 1169072169LL;
static int8_t x282 = INT8_MIN;
uint32_t x283 = UINT32_MAX;
int16_t x285 = -1118;
int64_t x296 = INT64_MIN;
int16_t x303 = -1;
uint8_t x305 = UINT8_MAX;
uint64_t x306 = UINT64_MAX;
int16_t x311 = -1;
int16_t x312 = -1;
static uint64_t x313 = 100153575383284LLU;
int16_t x315 = -115;
volatile int32_t t78 = 13;
uint64_t x317 = UINT64_MAX;
int32_t x321 = -104;
int32_t x322 = INT32_MIN;
volatile int16_t x323 = -1;
volatile uint32_t t83 = 3U;
uint64_t t84 = 7LLU;
static int16_t x349 = 2;
int64_t x353 = INT64_MIN;
int32_t x355 = INT32_MIN;
int8_t x366 = 1;
volatile int64_t t91 = -13728796475885294LL;
int64_t x374 = INT64_MAX;
volatile uint32_t t94 = 55837U;
int16_t x381 = INT16_MIN;
volatile int32_t t95 = -42270097;
static int8_t x388 = 13;
uint8_t x396 = 3U;
int32_t t98 = -31697351;
volatile int32_t t99 = INT32_MIN;


void f0(void) {
	uint64_t x1 = 61LLU;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 45071501;

	t0 = (((x1<x2)^x3)&x4);

	if (t0 != 32766) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int64_t x6 = INT64_MAX;
	uint32_t x7 = UINT32_MAX;
	static uint32_t t1 = 0U;

	t1 = (((x5<x6)^x7)&x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = 68;
	static uint16_t x10 = UINT16_MAX;
	uint32_t x11 = UINT32_MAX;
	static volatile uint32_t t2 = 4U;

	t2 = (((x9<x10)^x11)&x12);

	if (t2 != 36U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int64_t x14 = -1LL;
	static uint16_t x15 = 1015U;
	int32_t x16 = INT32_MAX;
	volatile int32_t t3 = 10;

	t3 = (((x13<x14)^x15)&x16);

	if (t3 != 1015) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 1402444967U;
	int8_t x18 = -1;
	int16_t x19 = -1;
	int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = 1;

	t4 = (((x17<x18)^x19)&x20);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = 9;
	int16_t x22 = INT16_MAX;
	int16_t x23 = 6180;
	volatile int8_t x24 = INT8_MAX;
	static volatile int32_t t5 = -892;

	t5 = (((x21<x22)^x23)&x24);

	if (t5 != 37) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t t6 = 28LLU;

	t6 = (((x25<x26)^x27)&x28);

	if (t6 != 14LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	int8_t x30 = -15;
	uint8_t x31 = UINT8_MAX;
	volatile int8_t x32 = INT8_MIN;
	int32_t t7 = -121390;

	t7 = (((x29<x30)^x31)&x32);

	if (t7 != 128) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 165625820U;
	volatile int32_t x34 = -1;
	int32_t x36 = INT32_MIN;
	uint64_t t8 = 7LLU;

	t8 = (((x33<x34)^x35)&x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MIN;
	static volatile uint64_t x40 = UINT64_MAX;

	t9 = (((x37<x38)^x39)&x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = -1;
	int8_t x43 = 14;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = -401954;

	t10 = (((x41<x42)^x43)&x44);

	if (t10 != 15) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MIN;
	int32_t x46 = 26677642;
	int64_t x47 = INT64_MIN;
	int32_t x48 = -1;

	t11 = (((x45<x46)^x47)&x48);

	if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x50 = INT8_MIN;
	static int16_t x52 = 2871;
	volatile int32_t t12 = 1;

	t12 = (((x49<x50)^x51)&x52);

	if (t12 != 2611) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	static uint64_t x55 = UINT64_MAX;
	static uint64_t x56 = 15534155LLU;
	volatile uint64_t t13 = 2370352562920494LLU;

	t13 = (((x53<x54)^x55)&x56);

	if (t13 != 15534154LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 224U;
	static int16_t x58 = -1;
	int64_t x60 = -1LL;

	t14 = (((x57<x58)^x59)&x60);

	if (t14 != -2LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = UINT64_MAX;
	int64_t x63 = 2941173195703457LL;
	static int32_t x64 = INT32_MIN;
	volatile int64_t t15 = 2049563447LL;

	t15 = (((x61<x62)^x63)&x64);

	if (t15 != 2941172129464320LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	volatile int32_t t16 = -2;

	t16 = (((x65<x66)^x67)&x68);

	if (t16 != 65431) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MIN;
	int32_t x70 = INT32_MIN;
	int16_t x71 = INT16_MIN;
	static uint32_t t17 = 355413076U;

	t17 = (((x69<x70)^x71)&x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int64_t x74 = 1028092832039LL;
	static int32_t x75 = -723080593;
	int64_t x76 = INT64_MAX;

	t18 = (((x73<x74)^x75)&x76);

	if (t18 != 9223372036131695214LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = 1U;
	int8_t x79 = INT8_MIN;
	uint64_t x80 = UINT64_MAX;
	uint64_t t19 = 3518472118158849LLU;

	t19 = (((x77<x78)^x79)&x80);

	if (t19 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 5;
	uint64_t x82 = UINT64_MAX;
	static int32_t x83 = -1;
	int32_t t20 = 1033256351;

	t20 = (((x81<x82)^x83)&x84);

	if (t20 != 6) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x87 = INT8_MIN;
	int32_t x88 = INT32_MAX;
	volatile int32_t t21 = 212;

	t21 = (((x85<x86)^x87)&x88);

	if (t21 != 2147483520) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int16_t x90 = -1;
	uint64_t x91 = 16406271794403892LLU;
	volatile int8_t x92 = INT8_MIN;
	volatile uint64_t t22 = 25182460026LLU;

	t22 = (((x89<x90)^x91)&x92);

	if (t22 != 16406271794403840LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 482U;
	uint64_t x94 = 630286506604727LLU;
	static uint16_t x95 = UINT16_MAX;
	uint32_t x96 = 4982U;
	volatile uint32_t t23 = 1631221U;

	t23 = (((x93<x94)^x95)&x96);

	if (t23 != 4982U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	uint8_t x98 = 33U;
	static volatile int64_t x99 = INT64_MIN;
	int64_t x100 = INT64_MIN;
	int64_t t24 = INT64_MIN;

	t24 = (((x97<x98)^x99)&x100);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MIN;
	uint8_t x103 = UINT8_MAX;

	t25 = (((x101<x102)^x103)&x104);

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int32_t x106 = INT32_MIN;
	int16_t x107 = INT16_MIN;
	int32_t x108 = INT32_MAX;
	int32_t t26 = 2417609;

	t26 = (((x105<x106)^x107)&x108);

	if (t26 != 2147450880) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -66514762921353469LL;
	static int16_t x110 = INT16_MAX;
	int64_t x112 = INT64_MAX;
	volatile int64_t t27 = -190LL;

	t27 = (((x109<x110)^x111)&x112);

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -32;
	uint32_t x114 = UINT32_MAX;
	int8_t x115 = INT8_MIN;
	int16_t x116 = INT16_MIN;
	int32_t t28 = 895273;

	t28 = (((x113<x114)^x115)&x116);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int8_t x118 = 1;
	int8_t x119 = INT8_MAX;
	int64_t x120 = INT64_MIN;
	volatile int64_t t29 = 9LL;

	t29 = (((x117<x118)^x119)&x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	static volatile int32_t x122 = 72;
	int32_t x123 = INT32_MIN;
	int16_t x124 = 15;

	t30 = (((x121<x122)^x123)&x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 7794889637977LLU;
	static uint16_t x126 = 5131U;
	int64_t x128 = -1LL;
	volatile int64_t t31 = 200381209331153442LL;

	t31 = (((x125<x126)^x127)&x128);

	if (t31 != 10LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = UINT32_MAX;
	int32_t x130 = INT32_MIN;
	int64_t x132 = 25915543LL;
	int64_t t32 = 376216606LL;

	t32 = (((x129<x130)^x131)&x132);

	if (t32 != 146LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	int8_t x134 = 23;
	volatile int64_t x135 = 326304LL;
	static int8_t x136 = INT8_MAX;
	static volatile int64_t t33 = -450535056598901LL;

	t33 = (((x133<x134)^x135)&x136);

	if (t33 != 33LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = UINT32_MAX;
	uint8_t x138 = 4U;
	int64_t x139 = 16871551850LL;

	t34 = (((x137<x138)^x139)&x140);

	if (t34 != 16871551850LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x142 = 10;
	static int32_t x143 = -1;
	uint32_t x144 = UINT32_MAX;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = (((x141<x142)^x143)&x144);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = -218;
	int64_t x146 = -1LL;
	int32_t x147 = INT32_MIN;
	uint8_t x148 = 0U;
	int32_t t36 = -213380;

	t36 = (((x145<x146)^x147)&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	static uint8_t x150 = 82U;
	uint32_t x151 = 13906U;
	volatile int32_t x152 = -1;
	uint32_t t37 = 1U;

	t37 = (((x149<x150)^x151)&x152);

	if (t37 != 13907U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = 33472719712LLU;
	int16_t x155 = INT16_MIN;
	volatile uint16_t x156 = 434U;
	int32_t t38 = 1772367;

	t38 = (((x153<x154)^x155)&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	uint64_t x158 = UINT64_MAX;
	volatile int16_t x159 = INT16_MIN;
	static int64_t x160 = INT64_MAX;

	t39 = (((x157<x158)^x159)&x160);

	if (t39 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MIN;
	int64_t x162 = 482055949LL;
	static volatile int8_t x163 = 0;
	int16_t x164 = 6;
	int32_t t40 = -524259280;

	t40 = (((x161<x162)^x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	volatile uint32_t x166 = 10U;
	uint32_t x167 = UINT32_MAX;
	static uint32_t t41 = 16840234U;

	t41 = (((x165<x166)^x167)&x168);

	if (t41 != 5731582U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 2;
	static volatile int16_t x170 = INT16_MAX;
	static int16_t x171 = INT16_MAX;
	int8_t x172 = INT8_MAX;
	int32_t t42 = -1018126200;

	t42 = (((x169<x170)^x171)&x172);

	if (t42 != 126) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x173 = 1U;
	static uint64_t x174 = 10421233773045004LLU;
	uint16_t x175 = UINT16_MAX;
	volatile int8_t x176 = INT8_MIN;
	volatile int32_t t43 = 6;

	t43 = (((x173<x174)^x175)&x176);

	if (t43 != 65408) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = 41915756U;
	int64_t x178 = INT64_MAX;
	volatile int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MIN;
	volatile int64_t t44 = INT64_MIN;

	t44 = (((x177<x178)^x179)&x180);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x182 = 1U;
	int8_t x183 = INT8_MIN;
	int32_t t45 = 145601779;

	t45 = (((x181<x182)^x183)&x184);

	if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = INT16_MIN;
	static int32_t x186 = -1;
	int16_t x188 = -1;
	int32_t t46 = 119950;

	t46 = (((x185<x186)^x187)&x188);

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	int64_t x190 = INT64_MIN;
	int8_t x191 = -1;
	uint8_t x192 = UINT8_MAX;

	t47 = (((x189<x190)^x191)&x192);

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = -1;
	static uint16_t x194 = UINT16_MAX;
	volatile int8_t x195 = -25;
	uint64_t x196 = UINT64_MAX;

	t48 = (((x193<x194)^x195)&x196);

	if (t48 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = -81;
	int64_t x198 = 779026LL;
	static volatile uint16_t x199 = 4U;
	volatile int16_t x200 = -1;
	volatile int32_t t49 = -2727;

	t49 = (((x197<x198)^x199)&x200);

	if (t49 != 5) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x202 = 105429913738147871LLU;
	int8_t x203 = INT8_MAX;
	static int16_t x204 = INT16_MAX;
	volatile int32_t t50 = -23519;

	t50 = (((x201<x202)^x203)&x204);

	if (t50 != 126) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	uint32_t x206 = 8766873U;
	static int32_t x207 = INT32_MIN;
	volatile uint16_t x208 = 7828U;
	volatile int32_t t51 = 98497256;

	t51 = (((x205<x206)^x207)&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -20130005;
	int64_t x210 = INT64_MAX;
	int64_t x211 = INT64_MIN;
	static uint16_t x212 = 0U;
	static int64_t t52 = -294713LL;

	t52 = (((x209<x210)^x211)&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x214 = 487U;
	static int16_t x215 = INT16_MIN;
	uint64_t x216 = 3329313738075641LLU;
	uint64_t t53 = 27283048696409937LLU;

	t53 = (((x213<x214)^x215)&x216);

	if (t53 != 3329313738063873LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 317034425U;
	int64_t x218 = INT64_MIN;
	int8_t x219 = -1;
	int16_t x220 = -1;
	static int32_t t54 = 16295302;

	t54 = (((x217<x218)^x219)&x220);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 2056196457U;
	volatile int8_t x222 = -1;
	uint8_t x223 = 65U;
	int16_t x224 = -14135;
	static volatile int32_t t55 = -524960;

	t55 = (((x221<x222)^x223)&x224);

	if (t55 != 64) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	int16_t x226 = INT16_MIN;
	int32_t t56 = 679;

	t56 = (((x225<x226)^x227)&x228);

	if (t56 != 48) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x230 = 1;
	int64_t x231 = 801LL;
	uint32_t x232 = 6U;
	static volatile int64_t t57 = 1933947LL;

	t57 = (((x229<x230)^x231)&x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 2450568U;
	int16_t x234 = -3;
	static int16_t x236 = INT16_MIN;

	t58 = (((x233<x234)^x235)&x236);

	if (t58 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = 4;
	int32_t x239 = INT32_MIN;
	int32_t x240 = INT32_MIN;

	t59 = (((x237<x238)^x239)&x240);

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MAX;
	uint32_t x243 = 4349U;

	t60 = (((x241<x242)^x243)&x244);

	if (t60 != 116U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	uint8_t x246 = 18U;
	volatile int64_t x247 = -5738LL;
	uint64_t x248 = 4271LLU;

	t61 = (((x245<x246)^x247)&x248);

	if (t61 != 135LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 61927909U;
	int8_t x250 = INT8_MIN;
	int16_t x251 = -979;
	int64_t x252 = 1861068973LL;
	int64_t t62 = -10594578417LL;

	t62 = (((x249<x250)^x251)&x252);

	if (t62 != 1861068844LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x254 = INT64_MIN;
	int8_t x255 = INT8_MIN;
	static int64_t x256 = INT64_MAX;
	int64_t t63 = 201871569316LL;

	t63 = (((x253<x254)^x255)&x256);

	if (t63 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x257 = 48U;
	int64_t x259 = -1LL;
	static volatile int64_t t64 = 241624LL;

	t64 = (((x257<x258)^x259)&x260);

	if (t64 != 2147483647LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	int16_t x262 = INT16_MIN;
	int8_t x263 = -1;
	volatile int32_t t65 = INT32_MIN;

	t65 = (((x261<x262)^x263)&x264);

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 18276U;
	volatile int32_t x266 = INT32_MAX;
	volatile int32_t x267 = -2;
	uint8_t x268 = UINT8_MAX;

	t66 = (((x265<x266)^x267)&x268);

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	int64_t x270 = -1720199019660790LL;
	int32_t x272 = INT32_MAX;
	uint32_t t67 = 1026264400U;

	t67 = (((x269<x270)^x271)&x272);

	if (t67 != 2707U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	int16_t x274 = -1;
	volatile int64_t x275 = INT64_MAX;
	static uint16_t x276 = 71U;
	volatile int64_t t68 = -32375598550291701LL;

	t68 = (((x273<x274)^x275)&x276);

	if (t68 != 70LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x279 = INT64_MIN;
	int8_t x280 = 13;

	t69 = (((x277<x278)^x279)&x280);

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = 6U;
	volatile int8_t x284 = 3;
	uint32_t t70 = 28411384U;

	t70 = (((x281<x282)^x283)&x284);

	if (t70 != 3U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x286 = UINT64_MAX;
	uint32_t x287 = 3437971U;
	int8_t x288 = INT8_MAX;
	uint32_t t71 = 12U;

	t71 = (((x285<x286)^x287)&x288);

	if (t71 != 18U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 801U;
	volatile uint32_t x290 = UINT32_MAX;
	int16_t x291 = -56;
	uint8_t x292 = 95U;
	volatile int32_t t72 = -20;

	t72 = (((x289<x290)^x291)&x292);

	if (t72 != 73) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MAX;
	volatile uint8_t x294 = 0U;
	static int64_t x295 = INT64_MIN;
	static int64_t t73 = INT64_MIN;

	t73 = (((x293<x294)^x295)&x296);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	int8_t x298 = INT8_MIN;
	uint8_t x299 = 0U;
	int32_t x300 = INT32_MAX;
	int32_t t74 = 27499;

	t74 = (((x297<x298)^x299)&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = UINT64_MAX;
	uint16_t x302 = 1991U;
	volatile uint32_t x304 = UINT32_MAX;
	static uint32_t t75 = UINT32_MAX;

	t75 = (((x301<x302)^x303)&x304);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x307 = INT8_MIN;
	static uint64_t x308 = 1965898310LLU;
	volatile uint64_t t76 = 431354LLU;

	t76 = (((x305<x306)^x307)&x308);

	if (t76 != 1965898240LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	volatile int16_t x310 = 71;
	volatile int32_t t77 = 37;

	t77 = (((x309<x310)^x311)&x312);

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = INT64_MIN;
	int32_t x316 = -367738599;

	t78 = (((x313<x314)^x315)&x316);

	if (t78 != -367738616) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = 17;
	int8_t x319 = INT8_MAX;
	static int32_t x320 = 425;
	volatile int32_t t79 = -111566749;

	t79 = (((x317<x318)^x319)&x320);

	if (t79 != 41) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = INT32_MAX;

	t80 = (((x321<x322)^x323)&x324);

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MIN;
	int32_t x326 = INT32_MIN;
	static int16_t x327 = -1;
	uint32_t x328 = 0U;
	uint32_t t81 = 213U;

	t81 = (((x325<x326)^x327)&x328);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	uint16_t x330 = 3U;
	uint64_t x331 = UINT64_MAX;
	static int16_t x332 = INT16_MIN;
	volatile uint64_t t82 = 29610787LLU;

	t82 = (((x329<x330)^x331)&x332);

	if (t82 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x333 = 56705LLU;
	uint64_t x334 = 1090114587329765629LLU;
	volatile int16_t x335 = -1;
	uint32_t x336 = 597949270U;

	t83 = (((x333<x334)^x335)&x336);

	if (t83 != 597949270U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 14;
	int32_t x338 = INT32_MAX;
	static int32_t x339 = INT32_MIN;
	uint64_t x340 = 1771163033127793637LLU;

	t84 = (((x337<x338)^x339)&x340);

	if (t84 != 1771163033045827585LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = UINT32_MAX;
	int16_t x342 = -11;
	static uint16_t x343 = 1U;
	uint64_t x344 = 28755927LLU;
	volatile uint64_t t85 = 327128LLU;

	t85 = (((x341<x342)^x343)&x344);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MIN;
	volatile uint32_t x347 = 48113U;
	int8_t x348 = 9;
	uint32_t t86 = 171370753U;

	t86 = (((x345<x346)^x347)&x348);

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = INT64_MIN;
	uint32_t x351 = UINT32_MAX;
	int8_t x352 = 5;
	uint32_t t87 = 416197U;

	t87 = (((x349<x350)^x351)&x352);

	if (t87 != 5U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = INT64_MIN;
	int64_t x356 = 1584389153LL;
	static int64_t t88 = 413154LL;

	t88 = (((x353<x354)^x355)&x356);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	uint8_t x358 = 83U;
	int64_t x359 = INT64_MAX;
	int16_t x360 = 29;
	int64_t t89 = -7266015954LL;

	t89 = (((x357<x358)^x359)&x360);

	if (t89 != 28LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	uint8_t x362 = 1U;
	int8_t x363 = -1;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t90 = 39886897LLU;

	t90 = (((x361<x362)^x363)&x364);

	if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	int64_t x367 = -1LL;
	static uint16_t x368 = 9487U;

	t91 = (((x365<x366)^x367)&x368);

	if (t91 != 9486LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = -1;
	static int16_t x370 = 1658;
	int64_t x371 = -123087487824795LL;
	uint16_t x372 = 4144U;
	volatile int64_t t92 = -803881898574LL;

	t92 = (((x369<x370)^x371)&x372);

	if (t92 != 32LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	int8_t x375 = -1;
	int32_t x376 = INT32_MIN;
	int32_t t93 = INT32_MIN;

	t93 = (((x373<x374)^x375)&x376);

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MIN;
	int32_t x378 = 39579;
	uint32_t x379 = 119307U;
	int16_t x380 = INT16_MIN;

	t94 = (((x377<x378)^x379)&x380);

	if (t94 != 98304U) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x382 = INT32_MIN;
	int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MIN;

	t95 = (((x381<x382)^x383)&x384);

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	int16_t x386 = -160;
	int8_t x387 = -1;
	static int32_t t96 = 0;

	t96 = (((x385<x386)^x387)&x388);

	if (t96 != 13) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	int32_t x390 = INT32_MIN;
	int64_t x391 = INT64_MAX;
	volatile uint64_t x392 = 12465911LLU;
	static volatile uint64_t t97 = 5185752852287LLU;

	t97 = (((x389<x390)^x391)&x392);

	if (t97 != 12465911LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	uint16_t x394 = 2001U;
	uint8_t x395 = 7U;

	t98 = (((x393<x394)^x395)&x396);

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	int64_t x398 = 0LL;
	int16_t x399 = INT16_MIN;
	static int32_t x400 = INT32_MIN;

	t99 = (((x397<x398)^x399)&x400);

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

