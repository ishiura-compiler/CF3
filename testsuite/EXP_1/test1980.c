#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x7 = INT8_MAX;
volatile int16_t x8 = INT16_MIN;
uint8_t x10 = 15U;
int8_t x16 = 1;
static int64_t x18 = INT64_MIN;
int16_t x20 = INT16_MIN;
uint8_t x27 = UINT8_MAX;
static volatile uint16_t x30 = UINT16_MAX;
volatile int32_t t7 = -171117787;
static int8_t x39 = -1;
static volatile int64_t t9 = -3957646919745125026LL;
int32_t x46 = -36648;
uint16_t x48 = UINT16_MAX;
int32_t x50 = INT32_MAX;
int8_t x59 = -1;
int8_t x60 = -35;
volatile int32_t x66 = 105012;
uint16_t x71 = UINT16_MAX;
volatile uint16_t x72 = 1520U;
uint64_t x74 = UINT64_MAX;
int16_t x80 = INT16_MIN;
volatile int32_t t17 = 41412943;
int32_t x82 = INT32_MAX;
int32_t t20 = -4446;
static volatile uint64_t t21 = 32436553571910LLU;
static uint16_t x106 = 181U;
volatile int16_t x107 = INT16_MIN;
volatile int8_t x112 = -1;
uint32_t x119 = 11U;
volatile int32_t t28 = 130127;
int32_t x129 = -9;
uint8_t x130 = 14U;
int16_t x138 = 173;
int32_t x140 = INT32_MIN;
int32_t t32 = -11816;
volatile int64_t t33 = -82622796645LL;
int8_t x145 = INT8_MAX;
int32_t x149 = -12797278;
int32_t x150 = 0;
int32_t t35 = -18;
int16_t x156 = 6;
uint16_t x157 = UINT16_MAX;
static int8_t x160 = 1;
int16_t x163 = INT16_MIN;
int32_t x167 = INT32_MIN;
static int16_t x172 = INT16_MIN;
static int8_t x173 = -1;
volatile uint32_t x177 = UINT32_MAX;
static volatile int64_t x181 = 2659699009LL;
int32_t x184 = INT32_MAX;
volatile int16_t x195 = -1;
int16_t x199 = INT16_MAX;
uint32_t x218 = 467105U;
uint32_t x222 = 1959996U;
uint32_t t53 = 117608480U;
uint64_t x227 = UINT64_MAX;
int16_t x229 = INT16_MIN;
static uint64_t x237 = UINT64_MAX;
uint64_t x238 = 13011118645LLU;
static int16_t x240 = INT16_MIN;
uint8_t x241 = 30U;
int64_t x244 = 132486188435LL;
int16_t x249 = 3;
int32_t t60 = 51;
static int16_t x264 = -1;
int64_t x276 = 3283784831LL;
static volatile int64_t t66 = -482421914227456LL;
volatile int32_t t67 = 4840462;
uint64_t x288 = UINT64_MAX;
volatile uint64_t t69 = 951832821LLU;
volatile uint64_t x291 = 623489218LLU;
static int64_t x311 = 35777030303208332LL;
int8_t x313 = -1;
uint8_t x315 = 5U;
volatile uint8_t x322 = UINT8_MAX;
static uint8_t x323 = 14U;
int32_t x332 = 3150;
int32_t x342 = INT32_MIN;
volatile int32_t t82 = -11;
volatile int16_t x347 = INT16_MIN;
volatile int32_t t85 = 3692601;
int16_t x361 = -1;
uint16_t x362 = UINT16_MAX;
int32_t x364 = -11;
int8_t x365 = 33;
static volatile int8_t x383 = INT8_MIN;
volatile int32_t t93 = -38360;
int8_t x390 = -21;
int64_t x396 = -1LL;
int16_t x397 = -7;
volatile int32_t t98 = 30;
static int32_t x409 = INT32_MIN;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int64_t x2 = INT64_MIN;
	int8_t x3 = INT8_MAX;
	int64_t x4 = -1LL;
	int64_t t0 = -5543225LL;

	t0 = (((x1|x2)<=x3)/x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 9986208;
	uint16_t x6 = 7704U;
	static volatile int32_t t1 = -3254;

	t1 = (((x5|x6)<=x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	volatile int16_t x11 = -1;
	volatile uint64_t x12 = UINT64_MAX;
	static volatile uint64_t t2 = 19934568LLU;

	t2 = (((x9|x10)<=x11)/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	volatile uint32_t x14 = UINT32_MAX;
	static int32_t x15 = -279508015;
	volatile int32_t t3 = -1038382552;

	t3 = (((x13|x14)<=x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	volatile int32_t x19 = INT32_MIN;
	static int32_t t4 = -213634216;

	t4 = (((x17|x18)<=x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 54U;
	int32_t x26 = 1;
	int32_t x28 = -2;
	int32_t t5 = -2319457;

	t5 = (((x25|x26)<=x27)/x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = INT8_MIN;
	int32_t x31 = INT32_MIN;
	int16_t x32 = -1;
	volatile int32_t t6 = 34932806;

	t6 = (((x29|x30)<=x31)/x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	int16_t x34 = INT16_MIN;
	static uint8_t x35 = UINT8_MAX;
	int16_t x36 = 2;

	t7 = (((x33|x34)<=x35)/x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x37 = UINT64_MAX;
	int32_t x38 = INT32_MAX;
	int64_t x40 = INT64_MIN;
	volatile int64_t t8 = 50409237LL;

	t8 = (((x37|x38)<=x39)/x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 256880520086LLU;
	uint64_t x42 = UINT64_MAX;
	int8_t x43 = INT8_MIN;
	static volatile int64_t x44 = -1LL;

	t9 = (((x41|x42)<=x43)/x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	uint16_t x47 = UINT16_MAX;
	volatile int32_t t10 = 10;

	t10 = (((x45|x46)<=x47)/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	volatile int16_t x51 = 1794;
	static uint16_t x52 = 1U;
	int32_t t11 = -169372;

	t11 = (((x49|x50)<=x51)/x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -157875184592670965LL;
	int16_t x54 = INT16_MIN;
	uint8_t x55 = UINT8_MAX;
	volatile uint64_t x56 = 86053218341LLU;
	static volatile uint64_t t12 = 1LLU;

	t12 = (((x53|x54)<=x55)/x56);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MAX;
	int16_t x58 = -2932;
	volatile int32_t t13 = 698;

	t13 = (((x57|x58)<=x59)/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 0U;
	int8_t x67 = INT8_MAX;
	static uint64_t x68 = 126014846744LLU;
	uint64_t t14 = 9294626323878LLU;

	t14 = (((x65|x66)<=x67)/x68);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MAX;
	static int64_t x70 = INT64_MAX;
	static volatile int32_t t15 = -361;

	t15 = (((x69|x70)<=x71)/x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = 1631467U;
	volatile int32_t x75 = INT32_MIN;
	int16_t x76 = -1;
	int32_t t16 = -62721126;

	t16 = (((x73|x74)<=x75)/x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MIN;
	static int32_t x78 = -1;
	uint64_t x79 = UINT64_MAX;

	t17 = (((x77|x78)<=x79)/x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = UINT32_MAX;
	uint8_t x83 = 100U;
	uint64_t x84 = 6513364814LLU;
	volatile uint64_t t18 = 5678269868LLU;

	t18 = (((x81|x82)<=x83)/x84);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = 0;
	int16_t x86 = -1;
	int64_t x87 = -9620LL;
	uint16_t x88 = 636U;
	volatile int32_t t19 = 229;

	t19 = (((x85|x86)<=x87)/x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	int32_t x90 = 730;
	static int32_t x91 = INT32_MAX;
	static volatile int16_t x92 = -1;

	t20 = (((x89|x90)<=x91)/x92);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MAX;
	volatile int32_t x94 = INT32_MIN;
	int8_t x95 = INT8_MIN;
	static uint64_t x96 = 3952722013LLU;

	t21 = (((x93|x94)<=x95)/x96);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = INT8_MIN;
	volatile int64_t x98 = INT64_MIN;
	uint16_t x99 = UINT16_MAX;
	uint8_t x100 = 31U;
	int32_t t22 = 51791547;

	t22 = (((x97|x98)<=x99)/x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = 1;
	volatile int32_t x102 = 4546;
	volatile uint32_t x103 = 2868U;
	int16_t x104 = -17;
	int32_t t23 = -10746;

	t23 = (((x101|x102)<=x103)/x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MIN;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t24 = -247889354;

	t24 = (((x105|x106)<=x107)/x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = 475097072453824LLU;
	static volatile uint8_t x110 = 115U;
	volatile uint16_t x111 = 3047U;
	static int32_t t25 = -72306;

	t25 = (((x109|x110)<=x111)/x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MAX;
	volatile int32_t x114 = -2;
	volatile int8_t x115 = -1;
	static volatile uint64_t x116 = 43LLU;
	uint64_t t26 = 45967LLU;

	t26 = (((x113|x114)<=x115)/x116);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x117 = INT64_MAX;
	static int8_t x118 = INT8_MIN;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t27 = 11019260U;

	t27 = (((x117|x118)<=x119)/x120);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MIN;
	int64_t x122 = INT64_MAX;
	static volatile int16_t x123 = -1768;
	uint8_t x124 = 2U;

	t28 = (((x121|x122)<=x123)/x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = 5;
	volatile uint32_t x126 = 3689051U;
	int8_t x127 = -1;
	static int16_t x128 = INT16_MAX;
	volatile int32_t t29 = 0;

	t29 = (((x125|x126)<=x127)/x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x131 = INT32_MIN;
	uint64_t x132 = UINT64_MAX;
	uint64_t t30 = 4382055179284810092LLU;

	t30 = (((x129|x130)<=x131)/x132);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = -2;
	volatile int64_t x134 = -1LL;
	int64_t x135 = -116708LL;
	int16_t x136 = -1;
	volatile int32_t t31 = -529;

	t31 = (((x133|x134)<=x135)/x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MIN;
	static int16_t x139 = INT16_MAX;

	t32 = (((x137|x138)<=x139)/x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 36039324LLU;
	int64_t x142 = INT64_MIN;
	int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MIN;

	t33 = (((x141|x142)<=x143)/x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x146 = 7U;
	uint32_t x147 = 36476U;
	static volatile int16_t x148 = INT16_MAX;
	int32_t t34 = 331914;

	t34 = (((x145|x146)<=x147)/x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x151 = 35;
	int16_t x152 = INT16_MIN;

	t35 = (((x149|x150)<=x151)/x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = 1295LL;
	static int32_t x154 = INT32_MAX;
	volatile uint64_t x155 = 2LLU;
	volatile int32_t t36 = 2880;

	t36 = (((x153|x154)<=x155)/x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x158 = UINT8_MAX;
	int16_t x159 = -1;
	int32_t t37 = -1264798;

	t37 = (((x157|x158)<=x159)/x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x161 = 150;
	static int32_t x162 = INT32_MIN;
	int64_t x164 = -1LL;
	int64_t t38 = -493685721LL;

	t38 = (((x161|x162)<=x163)/x164);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = 157312U;
	volatile int64_t x166 = -77690108LL;
	static volatile int8_t x168 = -18;
	volatile int32_t t39 = 28;

	t39 = (((x165|x166)<=x167)/x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = 27;
	volatile int32_t x170 = INT32_MIN;
	int32_t x171 = INT32_MIN;
	int32_t t40 = 2;

	t40 = (((x169|x170)<=x171)/x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x174 = INT32_MIN;
	uint8_t x175 = 2U;
	uint64_t x176 = 61677990806615LLU;
	uint64_t t41 = 48685LLU;

	t41 = (((x173|x174)<=x175)/x176);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x178 = -1716;
	static int8_t x179 = -1;
	uint8_t x180 = UINT8_MAX;
	static int32_t t42 = -705519;

	t42 = (((x177|x178)<=x179)/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x182 = INT32_MAX;
	uint32_t x183 = UINT32_MAX;
	volatile int32_t t43 = 0;

	t43 = (((x181|x182)<=x183)/x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = -1LL;
	static int8_t x186 = INT8_MIN;
	uint8_t x187 = UINT8_MAX;
	uint16_t x188 = UINT16_MAX;
	int32_t t44 = 7;

	t44 = (((x185|x186)<=x187)/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = -1;
	static int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MAX;
	static volatile int16_t x192 = INT16_MIN;
	int32_t t45 = 3341;

	t45 = (((x189|x190)<=x191)/x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x193 = -113;
	static int64_t x194 = INT64_MIN;
	volatile uint32_t x196 = UINT32_MAX;
	uint32_t t46 = 215U;

	t46 = (((x193|x194)<=x195)/x196);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MIN;
	volatile int8_t x198 = -1;
	volatile int64_t x200 = -1677554298LL;
	int64_t t47 = 585058509281619249LL;

	t47 = (((x197|x198)<=x199)/x200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = UINT8_MAX;
	volatile uint64_t x202 = 763678LLU;
	int64_t x203 = INT64_MIN;
	int16_t x204 = 12;
	int32_t t48 = -210309038;

	t48 = (((x201|x202)<=x203)/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x205 = -1;
	int8_t x206 = INT8_MIN;
	int16_t x207 = 14;
	int64_t x208 = INT64_MIN;
	int64_t t49 = 20278LL;

	t49 = (((x205|x206)<=x207)/x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x209 = -111756931LL;
	static int64_t x210 = INT64_MIN;
	int64_t x211 = INT64_MAX;
	static int8_t x212 = 23;
	volatile int32_t t50 = 9;

	t50 = (((x209|x210)<=x211)/x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x213 = INT32_MAX;
	static volatile int8_t x214 = INT8_MAX;
	static int8_t x215 = INT8_MIN;
	static uint16_t x216 = 14205U;
	static volatile int32_t t51 = -36;

	t51 = (((x213|x214)<=x215)/x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x217 = INT32_MAX;
	int8_t x219 = INT8_MIN;
	int8_t x220 = -1;
	int32_t t52 = -11880;

	t52 = (((x217|x218)<=x219)/x220);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MIN;
	int32_t x223 = INT32_MAX;
	uint32_t x224 = 2397U;

	t53 = (((x221|x222)<=x223)/x224);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = 510503047U;
	uint32_t x226 = 104U;
	static int64_t x228 = INT64_MIN;
	static volatile int64_t t54 = 2887530101597092LL;

	t54 = (((x225|x226)<=x227)/x228);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x230 = INT64_MIN;
	volatile int64_t x231 = INT64_MIN;
	static int8_t x232 = INT8_MAX;
	volatile int32_t t55 = 247;

	t55 = (((x229|x230)<=x231)/x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MAX;
	int16_t x234 = 115;
	int8_t x235 = 3;
	static int16_t x236 = 9962;
	volatile int32_t t56 = 1423914;

	t56 = (((x233|x234)<=x235)/x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x239 = INT16_MAX;
	volatile int32_t t57 = 287687;

	t57 = (((x237|x238)<=x239)/x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x242 = INT32_MIN;
	int64_t x243 = INT64_MAX;
	int64_t t58 = 8222376LL;

	t58 = (((x241|x242)<=x243)/x244);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x245 = 4214U;
	volatile int64_t x246 = 37LL;
	uint32_t x247 = 63574761U;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t59 = -10269802;

	t59 = (((x245|x246)<=x247)/x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x250 = 0U;
	uint64_t x251 = 56480543714732081LLU;
	static int16_t x252 = INT16_MIN;

	t60 = (((x249|x250)<=x251)/x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 11U;
	static int8_t x254 = 4;
	int16_t x255 = INT16_MIN;
	uint64_t x256 = UINT64_MAX;
	uint64_t t61 = 62932732903082LLU;

	t61 = (((x253|x254)<=x255)/x256);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x257 = 5273794U;
	uint8_t x258 = 1U;
	volatile int16_t x259 = 9;
	static volatile int64_t x260 = INT64_MIN;
	int64_t t62 = 1469LL;

	t62 = (((x257|x258)<=x259)/x260);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x261 = -34LL;
	int32_t x262 = 171802;
	volatile int8_t x263 = INT8_MAX;
	volatile int32_t t63 = -1;

	t63 = (((x261|x262)<=x263)/x264);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = INT64_MAX;
	int32_t x266 = INT32_MAX;
	int8_t x267 = INT8_MAX;
	int16_t x268 = -1;
	volatile int32_t t64 = 246;

	t64 = (((x265|x266)<=x267)/x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = 146U;
	int32_t x270 = INT32_MIN;
	volatile uint8_t x271 = 116U;
	volatile uint32_t x272 = UINT32_MAX;
	volatile uint32_t t65 = 1051680075U;

	t65 = (((x269|x270)<=x271)/x272);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x273 = 15U;
	int16_t x274 = INT16_MAX;
	int32_t x275 = 1;

	t66 = (((x273|x274)<=x275)/x276);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x277 = 600699LL;
	int8_t x278 = INT8_MIN;
	int8_t x279 = INT8_MAX;
	volatile int32_t x280 = INT32_MIN;

	t67 = (((x277|x278)<=x279)/x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = INT32_MIN;
	int64_t x282 = -1LL;
	int8_t x283 = -1;
	int8_t x284 = INT8_MAX;
	volatile int32_t t68 = -1825;

	t68 = (((x281|x282)<=x283)/x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x285 = INT32_MIN;
	volatile uint8_t x286 = 7U;
	static int16_t x287 = INT16_MAX;

	t69 = (((x285|x286)<=x287)/x288);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x289 = -3371279500911876642LL;
	volatile uint64_t x290 = UINT64_MAX;
	int32_t x292 = INT32_MIN;
	static volatile int32_t t70 = 509;

	t70 = (((x289|x290)<=x291)/x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x293 = 915369172475308LLU;
	int8_t x294 = INT8_MAX;
	int32_t x295 = INT32_MIN;
	int8_t x296 = -1;
	int32_t t71 = 0;

	t71 = (((x293|x294)<=x295)/x296);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x297 = 1757826U;
	int8_t x298 = -1;
	static volatile int16_t x299 = INT16_MIN;
	volatile int64_t x300 = -46544851LL;
	volatile int64_t t72 = 831861475385LL;

	t72 = (((x297|x298)<=x299)/x300);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = 4602LL;
	uint32_t x302 = UINT32_MAX;
	volatile int16_t x303 = 387;
	int8_t x304 = 56;
	volatile int32_t t73 = 332887474;

	t73 = (((x301|x302)<=x303)/x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x305 = 104U;
	uint8_t x306 = UINT8_MAX;
	int16_t x307 = INT16_MIN;
	volatile int8_t x308 = 1;
	volatile int32_t t74 = 2;

	t74 = (((x305|x306)<=x307)/x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x309 = 60U;
	volatile int16_t x310 = -1;
	uint32_t x312 = 555U;
	static uint32_t t75 = 4123611U;

	t75 = (((x309|x310)<=x311)/x312);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x314 = 24007339U;
	int8_t x316 = INT8_MIN;
	int32_t t76 = 491;

	t76 = (((x313|x314)<=x315)/x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x317 = 9U;
	volatile uint64_t x318 = UINT64_MAX;
	uint8_t x319 = 0U;
	static int64_t x320 = INT64_MIN;
	int64_t t77 = 2371910055080LL;

	t77 = (((x317|x318)<=x319)/x320);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x321 = -1;
	int8_t x324 = INT8_MAX;
	static volatile int32_t t78 = 1856;

	t78 = (((x321|x322)<=x323)/x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x329 = 17281U;
	uint32_t x330 = 978497U;
	int8_t x331 = -7;
	int32_t t79 = 23958;

	t79 = (((x329|x330)<=x331)/x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x333 = UINT16_MAX;
	int64_t x334 = -1581437766LL;
	volatile int64_t x335 = INT64_MAX;
	volatile int32_t x336 = 2543487;
	int32_t t80 = 927;

	t80 = (((x333|x334)<=x335)/x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = -3;
	static int64_t x338 = -1LL;
	static int32_t x339 = INT32_MAX;
	int32_t x340 = INT32_MIN;
	int32_t t81 = 13531;

	t81 = (((x337|x338)<=x339)/x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x341 = 18929U;
	uint32_t x343 = 191990U;
	int32_t x344 = 1;

	t82 = (((x341|x342)<=x343)/x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = 1393;
	static int16_t x346 = INT16_MIN;
	volatile uint64_t x348 = 119062282290LLU;
	volatile uint64_t t83 = 1095435887LLU;

	t83 = (((x345|x346)<=x347)/x348);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x349 = UINT64_MAX;
	int8_t x350 = INT8_MAX;
	volatile uint64_t x351 = UINT64_MAX;
	uint8_t x352 = UINT8_MAX;
	int32_t t84 = 1;

	t84 = (((x349|x350)<=x351)/x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x353 = INT16_MIN;
	uint32_t x354 = 13U;
	int32_t x355 = -158;
	int8_t x356 = 9;

	t85 = (((x353|x354)<=x355)/x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x357 = INT8_MIN;
	static int32_t x358 = -1;
	int16_t x359 = -1;
	int32_t x360 = -70525652;
	int32_t t86 = 385;

	t86 = (((x357|x358)<=x359)/x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x363 = INT32_MIN;
	int32_t t87 = 2459;

	t87 = (((x361|x362)<=x363)/x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x366 = INT8_MAX;
	volatile int32_t x367 = INT32_MIN;
	uint64_t x368 = UINT64_MAX;
	static volatile uint64_t t88 = 5611LLU;

	t88 = (((x365|x366)<=x367)/x368);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = INT16_MIN;
	int64_t x370 = -1LL;
	static int64_t x371 = 40951417607497600LL;
	static int32_t x372 = INT32_MAX;
	int32_t t89 = 0;

	t89 = (((x369|x370)<=x371)/x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = INT64_MIN;
	static volatile int8_t x374 = INT8_MAX;
	static int16_t x375 = INT16_MIN;
	uint16_t x376 = 501U;
	int32_t t90 = 122846;

	t90 = (((x373|x374)<=x375)/x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x377 = -54;
	int64_t x378 = -1LL;
	int8_t x379 = INT8_MAX;
	int16_t x380 = 490;
	static int32_t t91 = 2795;

	t91 = (((x377|x378)<=x379)/x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x381 = UINT16_MAX;
	volatile int64_t x382 = INT64_MIN;
	uint32_t x384 = 1091577920U;
	uint32_t t92 = 1241725339U;

	t92 = (((x381|x382)<=x383)/x384);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x385 = 4049567U;
	int8_t x386 = INT8_MIN;
	volatile uint16_t x387 = 0U;
	static int16_t x388 = INT16_MAX;

	t93 = (((x385|x386)<=x387)/x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = INT32_MIN;
	int16_t x391 = INT16_MAX;
	uint32_t x392 = UINT32_MAX;
	uint32_t t94 = 23U;

	t94 = (((x389|x390)<=x391)/x392);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = 313;
	static volatile int8_t x394 = -2;
	uint32_t x395 = 903U;
	volatile int64_t t95 = -8615845580963525LL;

	t95 = (((x393|x394)<=x395)/x396);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x398 = INT8_MAX;
	int32_t x399 = INT32_MIN;
	static int32_t x400 = -18;
	int32_t t96 = 1;

	t96 = (((x397|x398)<=x399)/x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x401 = UINT64_MAX;
	static uint32_t x402 = UINT32_MAX;
	uint16_t x403 = 21U;
	volatile uint64_t x404 = 787607LLU;
	volatile uint64_t t97 = 215LLU;

	t97 = (((x401|x402)<=x403)/x404);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x405 = 46LL;
	volatile int64_t x406 = 4367159953176101LL;
	static uint8_t x407 = 54U;
	int32_t x408 = 64987;

	t98 = (((x405|x406)<=x407)/x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x410 = 3740U;
	int16_t x411 = INT16_MIN;
	int8_t x412 = 1;
	int32_t t99 = -55;

	t99 = (((x409|x410)<=x411)/x412);

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

