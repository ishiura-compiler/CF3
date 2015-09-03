#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 19665U;
int64_t x3 = INT64_MIN;
int8_t x7 = INT8_MIN;
int32_t x9 = INT32_MIN;
uint8_t x12 = 100U;
int32_t t2 = -1928615;
uint16_t x15 = UINT16_MAX;
static int8_t x16 = -1;
static volatile int64_t x23 = -495947272638972929LL;
uint8_t x27 = 0U;
volatile int8_t x34 = -1;
int64_t x38 = -34839806054028LL;
volatile int64_t t10 = -42619357054928LL;
int16_t x46 = 6;
int8_t x47 = INT8_MIN;
int64_t x55 = INT64_MAX;
int64_t x59 = -1LL;
int16_t x71 = -1;
uint32_t x72 = 48601U;
uint32_t t17 = 384229U;
int64_t x73 = -26157618563704087LL;
int32_t x81 = 1027766;
int64_t t20 = -3304162028LL;
uint8_t x90 = UINT8_MAX;
uint32_t x91 = 164059039U;
static int32_t x92 = INT32_MIN;
volatile uint16_t x95 = 6U;
volatile int32_t t23 = 0;
volatile uint8_t x97 = 7U;
int64_t x98 = -149825145675294LL;
uint8_t x100 = UINT8_MAX;
volatile int64_t x106 = INT64_MIN;
int8_t x107 = -24;
volatile uint16_t x112 = 1555U;
int8_t x119 = -1;
int32_t x129 = -917;
volatile int8_t x132 = -2;
int16_t x133 = -3321;
int64_t x137 = INT64_MAX;
static volatile int8_t x138 = 20;
volatile int8_t x139 = INT8_MIN;
int16_t x141 = INT16_MIN;
volatile int64_t x146 = 1836734769861LL;
volatile int64_t t37 = -58211336LL;
volatile uint32_t x157 = 10180U;
volatile int32_t t38 = -1;
static int32_t t39 = -84027891;
int8_t x166 = INT8_MIN;
int8_t x169 = -1;
volatile int16_t x177 = -1;
static volatile int32_t t44 = -28683318;
uint64_t t45 = 316LLU;
static uint32_t x205 = 13761851U;
volatile int64_t x213 = INT64_MIN;
int32_t x218 = INT32_MIN;
int8_t x221 = INT8_MIN;
uint64_t x224 = 7747603LLU;
int32_t x231 = INT32_MIN;
volatile int32_t t57 = 21;
static int8_t x246 = -1;
int16_t x248 = -1;
static int32_t x249 = -1;
int16_t x252 = -1;
volatile int32_t t61 = 1488;
volatile int8_t x256 = INT8_MAX;
int32_t x258 = -1;
uint32_t x267 = 283U;
int16_t x275 = 441;
int32_t x279 = -1;
int32_t t69 = 1276488;
volatile int16_t x287 = INT16_MIN;
volatile uint64_t x290 = 1LLU;
int32_t t71 = -204597;
uint32_t x296 = UINT32_MAX;
uint16_t x300 = UINT16_MAX;
static volatile int32_t t73 = 12;
int16_t x303 = -8996;
uint8_t x306 = 59U;
uint16_t x307 = 22533U;
volatile int8_t x313 = INT8_MIN;
volatile int32_t x317 = INT32_MIN;
static uint64_t t78 = 22195042619LLU;
int16_t x324 = -7;
static int32_t t79 = -1393;
static volatile int16_t x325 = 0;
volatile int16_t x331 = 2096;
volatile int32_t x341 = INT32_MAX;
static int8_t x342 = INT8_MIN;
volatile int8_t x343 = INT8_MIN;
int32_t x348 = INT32_MAX;
static uint32_t x354 = 19U;
uint64_t t86 = 295LLU;
int8_t x371 = INT8_MAX;
int64_t x372 = INT64_MAX;
int64_t t90 = -25LL;
uint16_t x373 = 937U;
int8_t x378 = INT8_MAX;
uint16_t x380 = 1800U;
int8_t x381 = INT8_MAX;
volatile int8_t x385 = INT8_MIN;
static uint64_t x395 = UINT64_MAX;
uint32_t x402 = 10985029U;


void f0(void) {
	int8_t x2 = INT8_MIN;
	int64_t x4 = -908233LL;
	volatile int64_t t0 = 1771806LL;

	t0 = ((x1<(x2==x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int32_t x6 = -2331;
	uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 1148234U;

	t1 = ((x5<(x6==x7))/x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x10 = UINT64_MAX;
	int32_t x11 = INT32_MIN;

	t2 = ((x9<(x10==x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -445509587649091LL;
	int64_t x14 = -1LL;
	int32_t t3 = -4;

	t3 = ((x13<(x14==x15))/x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = 36;
	uint32_t x18 = UINT32_MAX;
	int8_t x19 = INT8_MIN;
	int32_t x20 = INT32_MIN;
	static int32_t t4 = -4;

	t4 = ((x17<(x18==x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 584U;
	static int8_t x22 = 31;
	int64_t x24 = -1LL;
	int64_t t5 = -133371287865436611LL;

	t5 = ((x21<(x22==x23))/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	static int8_t x26 = 15;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -8228;

	t6 = ((x25<(x26==x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	volatile uint8_t x30 = UINT8_MAX;
	uint16_t x31 = UINT16_MAX;
	int64_t x32 = -1LL;
	int64_t t7 = 1732311421LL;

	t7 = ((x29<(x30==x31))/x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1416195;
	volatile int16_t x35 = INT16_MIN;
	static int16_t x36 = -10;
	static volatile int32_t t8 = -38774988;

	t8 = ((x33<(x34==x35))/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 1;
	int64_t x39 = -1LL;
	int16_t x40 = -15933;
	volatile int32_t t9 = -15691;

	t9 = ((x37<(x38==x39))/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	static int32_t x42 = INT32_MAX;
	int64_t x43 = INT64_MIN;
	static int64_t x44 = INT64_MAX;

	t10 = ((x41<(x42==x43))/x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 3169555257LL;
	int8_t x48 = 1;
	static int32_t t11 = 14585;

	t11 = ((x45<(x46==x47))/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -1;
	int8_t x50 = 0;
	static int8_t x51 = -1;
	volatile int8_t x52 = INT8_MIN;
	static int32_t t12 = -1070428063;

	t12 = ((x49<(x50==x51))/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	int8_t x54 = 0;
	int64_t x56 = INT64_MAX;
	int64_t t13 = -524731060522LL;

	t13 = ((x53<(x54==x55))/x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x57 = 123637773064420LL;
	uint8_t x58 = 74U;
	int8_t x60 = -3;
	volatile int32_t t14 = 2889;

	t14 = ((x57<(x58==x59))/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MAX;
	int8_t x62 = -1;
	uint16_t x63 = 31162U;
	int32_t x64 = -88644096;
	volatile int32_t t15 = -110680383;

	t15 = ((x61<(x62==x63))/x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	int16_t x66 = -1;
	int64_t x67 = 791LL;
	int16_t x68 = -12057;
	volatile int32_t t16 = 6940;

	t16 = ((x65<(x66==x67))/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int64_t x70 = INT64_MAX;

	t17 = ((x69<(x70==x71))/x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = 21U;
	uint16_t x75 = 3061U;
	uint64_t x76 = 95133LLU;
	uint64_t t18 = 243088LLU;

	t18 = ((x73<(x74==x75))/x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = 1;
	static uint8_t x78 = 16U;
	static volatile int16_t x79 = INT16_MAX;
	uint8_t x80 = UINT8_MAX;
	int32_t t19 = -5466;

	t19 = ((x77<(x78==x79))/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x82 = 1;
	static uint16_t x83 = 60U;
	int64_t x84 = -1351583972LL;

	t20 = ((x81<(x82==x83))/x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	int64_t x86 = INT64_MIN;
	int8_t x87 = INT8_MIN;
	volatile int64_t x88 = -1LL;
	volatile int64_t t21 = -15LL;

	t21 = ((x85<(x86==x87))/x88);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -49LL;
	volatile int32_t t22 = -17021;

	t22 = ((x89<(x90==x91))/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	uint32_t x94 = 29758299U;
	int8_t x96 = INT8_MIN;

	t23 = ((x93<(x94==x95))/x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x99 = INT32_MIN;
	volatile int32_t t24 = 760755631;

	t24 = ((x97<(x98==x99))/x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x101 = 1U;
	static uint64_t x102 = UINT64_MAX;
	static volatile int64_t x103 = -707495716647904487LL;
	volatile int32_t x104 = INT32_MAX;
	int32_t t25 = 135;

	t25 = ((x101<(x102==x103))/x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	volatile int8_t x108 = 12;
	volatile int32_t t26 = 384;

	t26 = ((x105<(x106==x107))/x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = 4LLU;
	int16_t x110 = INT16_MAX;
	int64_t x111 = INT64_MIN;
	volatile int32_t t27 = 215418;

	t27 = ((x109<(x110==x111))/x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x117 = 949672874616965832LL;
	int16_t x118 = -203;
	uint16_t x120 = 2U;
	static int32_t t28 = -1;

	t28 = ((x117<(x118==x119))/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = -669LL;
	int16_t x122 = -2;
	static int32_t x123 = INT32_MAX;
	int32_t x124 = -10;
	int32_t t29 = -991;

	t29 = ((x121<(x122==x123))/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = -13;
	static uint32_t x126 = UINT32_MAX;
	int16_t x127 = INT16_MAX;
	uint16_t x128 = 7U;
	volatile int32_t t30 = 13;

	t30 = ((x125<(x126==x127))/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = INT16_MIN;
	static volatile uint16_t x131 = 11543U;
	volatile int32_t t31 = -96981134;

	t31 = ((x129<(x130==x131))/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x134 = INT64_MIN;
	volatile uint32_t x135 = 709127868U;
	int16_t x136 = -1;
	int32_t t32 = -2406;

	t32 = ((x133<(x134==x135))/x136);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x140 = -429;
	volatile int32_t t33 = 14;

	t33 = ((x137<(x138==x139))/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x142 = 12714U;
	volatile int32_t x143 = INT32_MIN;
	volatile int16_t x144 = INT16_MAX;
	static volatile int32_t t34 = -2783;

	t34 = ((x141<(x142==x143))/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	uint32_t x147 = 8U;
	int8_t x148 = INT8_MIN;
	volatile int32_t t35 = 333820535;

	t35 = ((x145<(x146==x147))/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = -1;
	static int64_t x150 = INT64_MIN;
	uint16_t x151 = UINT16_MAX;
	volatile int8_t x152 = -35;
	int32_t t36 = 121;

	t36 = ((x149<(x150==x151))/x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 175U;
	volatile int64_t x154 = 324LL;
	volatile int64_t x155 = INT64_MIN;
	int64_t x156 = 15LL;

	t37 = ((x153<(x154==x155))/x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x158 = -3469618390077380LL;
	uint16_t x159 = 34U;
	uint16_t x160 = 47U;

	t38 = ((x157<(x158==x159))/x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = -1;
	uint16_t x162 = UINT16_MAX;
	static uint32_t x163 = 245U;
	uint16_t x164 = 4U;

	t39 = ((x161<(x162==x163))/x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x165 = 3U;
	int64_t x167 = INT64_MAX;
	int64_t x168 = -8217374887035LL;
	int64_t t40 = -3313717LL;

	t40 = ((x165<(x166==x167))/x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x170 = INT16_MIN;
	uint64_t x171 = 50478971LLU;
	int8_t x172 = 54;
	int32_t t41 = 379830;

	t41 = ((x169<(x170==x171))/x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 14U;
	int64_t x174 = 124576248710LL;
	uint16_t x175 = 43U;
	volatile int64_t x176 = -1LL;
	int64_t t42 = 11LL;

	t42 = ((x173<(x174==x175))/x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x178 = -1;
	int64_t x179 = -1LL;
	int64_t x180 = 279272372699371166LL;
	static volatile int64_t t43 = -1658275687278465LL;

	t43 = ((x177<(x178==x179))/x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x181 = INT32_MAX;
	static int8_t x182 = -2;
	static volatile int8_t x183 = INT8_MIN;
	int16_t x184 = INT16_MAX;

	t44 = ((x181<(x182==x183))/x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MIN;
	uint32_t x186 = 0U;
	static int32_t x187 = -1;
	uint64_t x188 = 86859538LLU;

	t45 = ((x185<(x186==x187))/x188);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = INT64_MIN;
	int32_t x190 = INT32_MIN;
	static int16_t x191 = 0;
	int64_t x192 = -1LL;
	static int64_t t46 = 98631963235LL;

	t46 = ((x189<(x190==x191))/x192);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = 417699933281859LLU;
	static uint64_t x194 = 7091334695531041LLU;
	static int64_t x195 = INT64_MIN;
	int8_t x196 = INT8_MAX;
	volatile int32_t t47 = -21664504;

	t47 = ((x193<(x194==x195))/x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x197 = INT8_MIN;
	static uint32_t x198 = UINT32_MAX;
	int8_t x199 = -1;
	int8_t x200 = 31;
	volatile int32_t t48 = -1027133443;

	t48 = ((x197<(x198==x199))/x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x201 = -20;
	static int32_t x202 = INT32_MAX;
	static uint64_t x203 = 20LLU;
	uint16_t x204 = 3U;
	static int32_t t49 = -28993;

	t49 = ((x201<(x202==x203))/x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x206 = INT64_MIN;
	static uint32_t x207 = 6785311U;
	int64_t x208 = INT64_MAX;
	volatile int64_t t50 = -1590335LL;

	t50 = ((x205<(x206==x207))/x208);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = 1LLU;
	int8_t x210 = INT8_MIN;
	int8_t x211 = 0;
	static int8_t x212 = INT8_MIN;
	int32_t t51 = -373;

	t51 = ((x209<(x210==x211))/x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x214 = 1611162556466LLU;
	static volatile int32_t x215 = INT32_MAX;
	int32_t x216 = 2103;
	volatile int32_t t52 = 1007;

	t52 = ((x213<(x214==x215))/x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x217 = 88U;
	uint32_t x219 = UINT32_MAX;
	int64_t x220 = INT64_MIN;
	int64_t t53 = -13027971306693454LL;

	t53 = ((x217<(x218==x219))/x220);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x222 = INT32_MIN;
	uint32_t x223 = UINT32_MAX;
	uint64_t t54 = 1060980LLU;

	t54 = ((x221<(x222==x223))/x224);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x225 = INT32_MIN;
	static int16_t x226 = 8;
	int32_t x227 = -1;
	int32_t x228 = -12727149;
	static int32_t t55 = 4872208;

	t55 = ((x225<(x226==x227))/x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	int8_t x230 = -13;
	volatile uint16_t x232 = 49U;
	int32_t t56 = 0;

	t56 = ((x229<(x230==x231))/x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x233 = 53601319623LLU;
	static int16_t x234 = INT16_MIN;
	uint8_t x235 = 23U;
	int32_t x236 = 6749;

	t57 = ((x233<(x234==x235))/x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = 138307991LLU;
	uint64_t x238 = UINT64_MAX;
	int64_t x239 = -262734551250409735LL;
	static int64_t x240 = INT64_MAX;
	volatile int64_t t58 = -4157491294891960LL;

	t58 = ((x237<(x238==x239))/x240);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = 2383LL;
	static uint64_t x242 = 3193951LLU;
	static uint16_t x243 = 179U;
	uint8_t x244 = 101U;
	static int32_t t59 = -447;

	t59 = ((x241<(x242==x243))/x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	volatile int64_t x247 = 2928406991LL;
	int32_t t60 = 4;

	t60 = ((x245<(x246==x247))/x248);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x250 = 16;
	static int64_t x251 = INT64_MIN;

	t61 = ((x249<(x250==x251))/x252);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x253 = -1;
	volatile uint16_t x254 = 5U;
	int32_t x255 = INT32_MAX;
	static int32_t t62 = -735902;

	t62 = ((x253<(x254==x255))/x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x257 = 11U;
	static int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	volatile int32_t t63 = -15945;

	t63 = ((x257<(x258==x259))/x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MIN;
	static volatile int8_t x262 = -4;
	int16_t x263 = -1;
	int64_t x264 = INT64_MIN;
	volatile int64_t t64 = 23LL;

	t64 = ((x261<(x262==x263))/x264);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MIN;
	volatile int64_t x266 = 123LL;
	uint64_t x268 = 52648495425LLU;
	uint64_t t65 = 7705148310LLU;

	t65 = ((x265<(x266==x267))/x268);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = -13;
	volatile int16_t x270 = 52;
	volatile int8_t x271 = -1;
	int16_t x272 = 97;
	volatile int32_t t66 = 7868;

	t66 = ((x269<(x270==x271))/x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = -1;
	uint16_t x274 = 29U;
	int16_t x276 = -1;
	int32_t t67 = -124018698;

	t67 = ((x273<(x274==x275))/x276);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x277 = INT32_MIN;
	volatile uint16_t x278 = 792U;
	static volatile int8_t x280 = INT8_MAX;
	int32_t t68 = 1428;

	t68 = ((x277<(x278==x279))/x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = -1;
	volatile uint64_t x282 = UINT64_MAX;
	int8_t x283 = INT8_MIN;
	int8_t x284 = 10;

	t69 = ((x281<(x282==x283))/x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x285 = UINT8_MAX;
	int64_t x286 = -1LL;
	static volatile uint64_t x288 = UINT64_MAX;
	uint64_t t70 = 25845164383585314LLU;

	t70 = ((x285<(x286==x287))/x288);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = -68;
	uint8_t x291 = UINT8_MAX;
	int32_t x292 = INT32_MIN;

	t71 = ((x289<(x290==x291))/x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x293 = UINT16_MAX;
	int8_t x294 = -17;
	static int16_t x295 = -41;
	volatile uint32_t t72 = 2007U;

	t72 = ((x293<(x294==x295))/x296);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = -239582120882090311LL;
	uint8_t x298 = 70U;
	static volatile int32_t x299 = -1;

	t73 = ((x297<(x298==x299))/x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x301 = 13U;
	static int64_t x302 = INT64_MIN;
	uint8_t x304 = 11U;
	static volatile int32_t t74 = 497233;

	t74 = ((x301<(x302==x303))/x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = 387969621596755598LL;
	static int8_t x308 = 3;
	volatile int32_t t75 = -21691167;

	t75 = ((x305<(x306==x307))/x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x309 = INT64_MIN;
	int16_t x310 = INT16_MIN;
	static volatile int64_t x311 = -1LL;
	volatile uint16_t x312 = UINT16_MAX;
	int32_t t76 = 186289;

	t76 = ((x309<(x310==x311))/x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x314 = -765504752;
	int32_t x315 = INT32_MAX;
	volatile uint32_t x316 = UINT32_MAX;
	volatile uint32_t t77 = 487U;

	t77 = ((x313<(x314==x315))/x316);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x318 = INT16_MAX;
	volatile uint8_t x319 = UINT8_MAX;
	uint64_t x320 = 684854LLU;

	t78 = ((x317<(x318==x319))/x320);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = -779;
	int8_t x322 = INT8_MIN;
	uint8_t x323 = 11U;

	t79 = ((x321<(x322==x323))/x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x326 = INT64_MIN;
	volatile uint16_t x327 = UINT16_MAX;
	int64_t x328 = INT64_MAX;
	int64_t t80 = -1614799LL;

	t80 = ((x325<(x326==x327))/x328);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x329 = UINT16_MAX;
	int8_t x330 = -1;
	volatile int32_t x332 = 7;
	volatile int32_t t81 = 127638;

	t81 = ((x329<(x330==x331))/x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x333 = 1LLU;
	uint64_t x334 = 14622LLU;
	int32_t x335 = 122185;
	static volatile int8_t x336 = 18;
	static int32_t t82 = 22966134;

	t82 = ((x333<(x334==x335))/x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x337 = 28U;
	static volatile uint32_t x338 = UINT32_MAX;
	volatile int64_t x339 = INT64_MIN;
	volatile int32_t x340 = -1;
	static int32_t t83 = 310;

	t83 = ((x337<(x338==x339))/x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x344 = -1;
	volatile int32_t t84 = -96;

	t84 = ((x341<(x342==x343))/x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x345 = 78U;
	volatile int32_t x346 = INT32_MAX;
	int16_t x347 = -175;
	int32_t t85 = -311;

	t85 = ((x345<(x346==x347))/x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = INT32_MIN;
	int64_t x355 = INT64_MIN;
	uint64_t x356 = UINT64_MAX;

	t86 = ((x353<(x354==x355))/x356);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = 0;
	int8_t x358 = -1;
	static int64_t x359 = INT64_MAX;
	uint16_t x360 = UINT16_MAX;
	volatile int32_t t87 = 462319888;

	t87 = ((x357<(x358==x359))/x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x361 = 27;
	int16_t x362 = -3;
	int64_t x363 = INT64_MIN;
	int8_t x364 = INT8_MIN;
	volatile int32_t t88 = -83309;

	t88 = ((x361<(x362==x363))/x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = 21;
	int32_t x366 = -1;
	int32_t x367 = INT32_MIN;
	int32_t x368 = INT32_MIN;
	volatile int32_t t89 = 1;

	t89 = ((x365<(x366==x367))/x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x369 = 7U;
	int32_t x370 = INT32_MAX;

	t90 = ((x369<(x370==x371))/x372);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x374 = 1337;
	static volatile uint16_t x375 = 2U;
	int64_t x376 = -1LL;
	static volatile int64_t t91 = -59LL;

	t91 = ((x373<(x374==x375))/x376);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x377 = INT32_MIN;
	int64_t x379 = -1LL;
	static volatile int32_t t92 = 127;

	t92 = ((x377<(x378==x379))/x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x382 = 7749329231LL;
	int8_t x383 = INT8_MIN;
	int16_t x384 = -1;
	volatile int32_t t93 = -6331356;

	t93 = ((x381<(x382==x383))/x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x386 = -953;
	uint32_t x387 = 17874132U;
	int8_t x388 = -1;
	volatile int32_t t94 = 47988312;

	t94 = ((x385<(x386==x387))/x388);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x389 = INT16_MAX;
	volatile int16_t x390 = INT16_MIN;
	volatile int16_t x391 = 1845;
	static volatile uint64_t x392 = UINT64_MAX;
	static volatile uint64_t t95 = 48LLU;

	t95 = ((x389<(x390==x391))/x392);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x393 = 25U;
	int8_t x394 = -1;
	int16_t x396 = -1641;
	volatile int32_t t96 = -641283707;

	t96 = ((x393<(x394==x395))/x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = -1;
	volatile uint32_t x399 = 12791U;
	volatile int32_t x400 = 3890;
	static volatile int32_t t97 = 5335;

	t97 = ((x397<(x398==x399))/x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x401 = INT8_MIN;
	static int64_t x403 = INT64_MIN;
	int32_t x404 = -17924;
	static int32_t t98 = 15674;

	t98 = ((x401<(x402==x403))/x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x405 = 10U;
	int32_t x406 = INT32_MIN;
	static int16_t x407 = INT16_MIN;
	static volatile int8_t x408 = 6;
	volatile int32_t t99 = -70706286;

	t99 = ((x405<(x406==x407))/x408);

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

