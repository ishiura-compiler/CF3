#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MAX;
uint64_t t1 = 38232001410581LLU;
uint16_t x10 = 3000U;
int16_t x12 = 1974;
static volatile uint32_t t3 = 126879U;
static int64_t x31 = 54240608LL;
static int64_t t5 = -7847LL;
int8_t x39 = 4;
int64_t x43 = 2157334741784LL;
int32_t x47 = -26643033;
static uint32_t t9 = 165798424U;
volatile uint8_t x49 = 1U;
uint16_t x50 = UINT16_MAX;
uint64_t t11 = 7773374829907LLU;
static int8_t x65 = INT8_MIN;
int64_t x72 = INT64_MAX;
volatile int64_t t17 = -247950815307LL;
int8_t x86 = -1;
uint64_t t18 = 10LLU;
uint8_t x100 = 8U;
int64_t x106 = INT64_MIN;
static int32_t x112 = INT32_MIN;
volatile int64_t x113 = 4LL;
uint16_t x115 = 2U;
static int32_t x118 = -1;
static int64_t x122 = -1LL;
int32_t x128 = -1;
volatile int16_t x130 = INT16_MIN;
volatile int32_t x135 = -1;
volatile int32_t x142 = 704729321;
int64_t x148 = -1LL;
volatile int64_t t32 = 48997LL;
static uint8_t x149 = 0U;
int64_t x151 = -656898441696LL;
uint8_t x169 = 77U;
uint32_t x174 = UINT32_MAX;
uint64_t t41 = 81463LLU;
volatile int64_t x186 = -229271LL;
static uint32_t t43 = 502U;
int16_t x196 = INT16_MIN;
uint64_t t44 = 26LLU;
int16_t x201 = -10;
int64_t x202 = 35035LL;
static uint64_t x203 = 8234673652629302964LLU;
volatile uint64_t t48 = 0LLU;
volatile uint32_t x218 = 77316564U;
static int64_t x219 = -35162343LL;
int16_t x221 = -1;
volatile int8_t x222 = INT8_MIN;
int16_t x223 = INT16_MIN;
uint16_t x233 = UINT16_MAX;
int8_t x258 = INT8_MIN;
int64_t x259 = -1LL;
int64_t x263 = INT64_MIN;
volatile uint8_t x264 = UINT8_MAX;
int16_t x265 = INT16_MAX;
int16_t x269 = -1;
static uint64_t x279 = 23565636808LLU;
int64_t x283 = -1LL;
int16_t x293 = INT16_MAX;
volatile int16_t x302 = 1;
uint16_t x305 = 0U;
volatile int32_t x309 = 28127;
int16_t x313 = -1;
volatile uint32_t t69 = 1U;
volatile uint64_t t70 = 4371640452610LLU;
volatile int8_t x324 = -1;
uint8_t x325 = UINT8_MAX;
int64_t t72 = -2631LL;
volatile uint64_t t75 = 5482LLU;
volatile int32_t t76 = -1;
static volatile int32_t x349 = 8128;
uint16_t x353 = 2767U;
uint16_t x354 = UINT16_MAX;
int64_t x356 = INT64_MIN;
uint32_t x357 = UINT32_MAX;
int8_t x359 = INT8_MIN;
uint64_t t81 = 0LLU;
uint8_t x372 = UINT8_MAX;
int32_t x374 = INT32_MIN;
uint16_t x376 = 23U;
volatile uint64_t t83 = 7435507997LLU;
uint32_t x381 = 130762843U;
static uint16_t x382 = 255U;
uint32_t x385 = 4U;
static uint64_t x388 = 1112333070218542LLU;
int16_t x395 = -1;
static volatile uint64_t t87 = 154734779490789797LLU;
static int8_t x398 = INT8_MIN;
int8_t x403 = INT8_MIN;
volatile uint32_t x405 = 24U;
static int16_t x407 = INT16_MIN;
int32_t x408 = -1644;
volatile int8_t x414 = 5;
static int64_t x425 = 771LL;
uint32_t x431 = 0U;
volatile uint32_t t94 = 83091U;
volatile int16_t x437 = INT16_MAX;
static volatile int8_t x438 = INT8_MAX;
int32_t t96 = 1;
volatile uint64_t t97 = 2537641723LLU;
int16_t x454 = -2;
int64_t x457 = INT64_MAX;
volatile int16_t x458 = INT16_MIN;
int64_t t99 = 15LL;


void f0(void) {
	static int16_t x2 = INT16_MIN;
	static uint64_t x3 = 1065573LLU;
	uint32_t x4 = 388959794U;
	uint64_t t0 = 1798269LLU;

	t0 = (((x1+x2)^x3)/x4);

	if (t0 != 23712918864LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint64_t x6 = UINT64_MAX;
	uint8_t x7 = 103U;
	volatile uint32_t x8 = 184512337U;

	t1 = (((x5+x6)^x7)/x8);

	if (t1 != 23LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static uint32_t x11 = UINT32_MAX;
	uint32_t t2 = 65U;

	t2 = (((x9+x10)^x11)/x12);

	if (t2 != 2175767U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 1362676U;
	volatile uint8_t x18 = UINT8_MAX;
	static int8_t x19 = INT8_MIN;
	uint16_t x20 = 12U;

	t3 = (((x17+x18)^x19)/x20);

	if (t3 != 357800372U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MIN;
	static uint8_t x26 = 6U;
	static int64_t x27 = INT64_MIN;
	int64_t x28 = INT64_MAX;
	static int64_t t4 = -1LL;

	t4 = (((x25+x26)^x27)/x28);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = 1209247;
	int8_t x30 = INT8_MIN;
	static int64_t x32 = 227716677260411742LL;

	t5 = (((x29+x30)^x31)/x32);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -5;
	static volatile uint16_t x34 = UINT16_MAX;
	int16_t x35 = 2458;
	uint16_t x36 = 455U;
	static int32_t t6 = -1898;

	t6 = (((x33+x34)^x35)/x36);

	if (t6 != 138) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 114U;
	int8_t x38 = 1;
	static int64_t x40 = INT64_MIN;
	int64_t t7 = -2650141252807LL;

	t7 = (((x37+x38)^x39)/x40);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = 284;
	int8_t x42 = -1;
	int64_t x44 = -22023LL;
	int64_t t8 = -27097950LL;

	t8 = (((x41+x42)^x43)/x44);

	if (t8 != -97958259LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = UINT32_MAX;
	int8_t x46 = INT8_MIN;
	int16_t x48 = INT16_MAX;

	t9 = (((x45+x46)^x47)/x48);

	if (t9 != 813U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x51 = UINT64_MAX;
	int32_t x52 = INT32_MAX;
	static volatile uint64_t t10 = 1058669LLU;

	t10 = (((x49+x50)^x51)/x52);

	if (t10 != 8589934595LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	uint16_t x54 = 165U;
	uint64_t x55 = UINT64_MAX;
	static int8_t x56 = -59;

	t11 = (((x53+x54)^x55)/x56);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1;
	uint64_t x58 = 973764LLU;
	static int32_t x59 = INT32_MIN;
	static int64_t x60 = -1LL;
	volatile uint64_t t12 = 2254722770171939350LLU;

	t12 = (((x57+x58)^x59)/x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x61 = 31442U;
	int8_t x62 = INT8_MIN;
	static int64_t x63 = -1LL;
	int8_t x64 = INT8_MIN;
	volatile int64_t t13 = 3660844992413764661LL;

	t13 = (((x61+x62)^x63)/x64);

	if (t13 != 244LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x66 = INT64_MAX;
	static int64_t x67 = -1LL;
	int16_t x68 = -10;
	int64_t t14 = 520821655418827603LL;

	t14 = (((x65+x66)^x67)/x68);

	if (t14 != 922337203685477568LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 48727U;
	int8_t x70 = 1;
	volatile int16_t x71 = 0;
	volatile int64_t t15 = 1456934720552698LL;

	t15 = (((x69+x70)^x71)/x72);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x73 = INT8_MIN;
	volatile int16_t x74 = INT16_MAX;
	volatile int8_t x75 = INT8_MAX;
	volatile int64_t x76 = INT64_MIN;
	int64_t t16 = 7315764153LL;

	t16 = (((x73+x74)^x75)/x76);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = UINT16_MAX;
	int64_t x82 = -96271LL;
	int32_t x83 = INT32_MIN;
	uint8_t x84 = 6U;

	t17 = (((x81+x82)^x83)/x84);

	if (t17 != 357908818LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x85 = -124166297LL;
	uint64_t x87 = UINT64_MAX;
	static int32_t x88 = INT32_MIN;

	t18 = (((x85+x86)^x87)/x88);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = -1;
	static volatile int32_t x90 = 13515;
	volatile int64_t x91 = INT64_MIN;
	uint16_t x92 = 2U;
	volatile int64_t t19 = -5293LL;

	t19 = (((x89+x90)^x91)/x92);

	if (t19 != -4611686018427381147LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = UINT32_MAX;
	int32_t x94 = 391845671;
	volatile int16_t x95 = 243;
	uint16_t x96 = 7U;
	volatile uint32_t t20 = 4006U;

	t20 = (((x93+x94)^x95)/x96);

	if (t20 != 55977977U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x97 = 2;
	uint32_t x98 = UINT32_MAX;
	volatile int16_t x99 = -1;
	static volatile uint32_t t21 = 276737769U;

	t21 = (((x97+x98)^x99)/x100);

	if (t21 != 536870911U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x101 = INT16_MIN;
	static volatile int8_t x102 = 6;
	int8_t x103 = -1;
	uint16_t x104 = UINT16_MAX;
	int32_t t22 = 0;

	t22 = (((x101+x102)^x103)/x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = 1441722190711412LL;
	static int32_t x107 = 184018;
	int64_t x108 = INT64_MAX;
	int64_t t23 = 685228773703LL;

	t23 = (((x105+x106)^x107)/x108);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = 95;
	uint16_t x110 = UINT16_MAX;
	int32_t x111 = INT32_MAX;
	volatile int32_t t24 = -2081446;

	t24 = (((x109+x110)^x111)/x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x114 = 181394845U;
	uint8_t x116 = UINT8_MAX;
	static volatile int64_t t25 = 3600LL;

	t25 = (((x113+x114)^x115)/x116);

	if (t25 != 711352LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = 8;
	volatile uint16_t x119 = UINT16_MAX;
	int16_t x120 = 1;
	int32_t t26 = 584;

	t26 = (((x117+x118)^x119)/x120);

	if (t26 != 65528) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = 3;
	volatile int16_t x123 = -303;
	int32_t x124 = INT32_MIN;
	static volatile int64_t t27 = 1605061151453410994LL;

	t27 = (((x121+x122)^x123)/x124);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MIN;
	static uint32_t x126 = 17024336U;
	int8_t x127 = 34;
	volatile uint32_t t28 = 352422844U;

	t28 = (((x125+x126)^x127)/x128);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = -849;
	static int8_t x131 = -26;
	int8_t x132 = INT8_MIN;
	static int32_t t29 = 29329129;

	t29 = (((x129+x130)^x131)/x132);

	if (t29 != -262) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = 10U;
	uint8_t x134 = UINT8_MAX;
	uint32_t x136 = 124153U;
	static uint32_t t30 = 10U;

	t30 = (((x133+x134)^x135)/x136);

	if (t30 != 34594U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x141 = 3093851437LLU;
	int8_t x143 = -1;
	int8_t x144 = INT8_MIN;
	uint64_t t31 = 24766695424527LLU;

	t31 = (((x141+x142)^x143)/x144);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x145 = -32041889;
	volatile int8_t x146 = -1;
	static int64_t x147 = -5LL;

	t32 = (((x145+x146)^x147)/x148);

	if (t32 != -32041893LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x150 = 22U;
	static int64_t x152 = -1LL;
	int64_t t33 = 441404LL;

	t33 = (((x149+x150)^x151)/x152);

	if (t33 != 656898441674LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x153 = 80551169U;
	uint8_t x154 = 40U;
	int64_t x155 = -1LL;
	int8_t x156 = -1;
	int64_t t34 = -2571LL;

	t34 = (((x153+x154)^x155)/x156);

	if (t34 != 80551210LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = UINT8_MAX;
	int8_t x158 = -1;
	uint16_t x159 = UINT16_MAX;
	int64_t x160 = -2873580801360LL;
	int64_t t35 = -819LL;

	t35 = (((x157+x158)^x159)/x160);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = UINT16_MAX;
	volatile int64_t x162 = 9307LL;
	static int64_t x163 = INT64_MAX;
	int16_t x164 = -2;
	int64_t t36 = -958835508858474467LL;

	t36 = (((x161+x162)^x163)/x164);

	if (t36 != -4611686018427350482LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x165 = 3U;
	int8_t x166 = 0;
	uint32_t x167 = 479091U;
	uint32_t x168 = 639U;
	volatile uint32_t t37 = 1U;

	t37 = (((x165+x166)^x167)/x168);

	if (t37 != 749U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x170 = 22U;
	volatile int64_t x171 = INT64_MIN;
	int16_t x172 = INT16_MIN;
	int64_t t38 = 822690136LL;

	t38 = (((x169+x170)^x171)/x172);

	if (t38 != 281474976710655LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x173 = -1;
	uint32_t x175 = 49U;
	volatile int64_t x176 = -36995991178845111LL;
	volatile int64_t t39 = -457LL;

	t39 = (((x173+x174)^x175)/x176);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x177 = 129409248U;
	int8_t x178 = INT8_MAX;
	uint16_t x179 = 57U;
	uint32_t x180 = 5U;
	uint32_t t40 = 506887U;

	t40 = (((x177+x178)^x179)/x180);

	if (t40 != 25881876U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x181 = 6841233137641165979LLU;
	int8_t x182 = 49;
	uint16_t x183 = 2329U;
	volatile int64_t x184 = 38269332LL;

	t41 = (((x181+x182)^x183)/x184);

	if (t41 != 178765418158LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = INT64_MAX;
	uint32_t x187 = UINT32_MAX;
	int64_t x188 = INT64_MIN;
	int64_t t42 = 156822433701LL;

	t42 = (((x185+x186)^x187)/x188);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MAX;
	int16_t x191 = 2201;
	uint32_t x192 = 284020U;

	t43 = (((x189+x190)^x191)/x192);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x193 = 62112943603LLU;
	int64_t x194 = -1LL;
	volatile int8_t x195 = -1;

	t44 = (((x193+x194)^x195)/x196);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x197 = UINT64_MAX;
	volatile uint64_t x198 = 1394074LLU;
	static int32_t x199 = INT32_MIN;
	int64_t x200 = INT64_MIN;
	static volatile uint64_t t45 = 913989224017494LLU;

	t45 = (((x197+x198)^x199)/x200);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x204 = UINT64_MAX;
	uint64_t t46 = 28454063550512798LLU;

	t46 = (((x201+x202)^x203)/x204);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x209 = 5U;
	uint64_t x210 = UINT64_MAX;
	uint16_t x211 = UINT16_MAX;
	int32_t x212 = -1;
	static uint64_t t47 = 437806037394LLU;

	t47 = (((x209+x210)^x211)/x212);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x213 = 1050585298114072LLU;
	int16_t x214 = -1;
	int64_t x215 = 4LL;
	uint8_t x216 = UINT8_MAX;

	t48 = (((x213+x214)^x215)/x216);

	if (t48 != 4119942345545LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = INT8_MIN;
	static int16_t x220 = 5;
	int64_t t49 = -2542949778123LL;

	t49 = (((x217+x218)^x219)/x220);

	if (t49 != -21853475LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x224 = INT8_MIN;
	volatile int32_t t50 = 32016147;

	t50 = (((x221+x222)^x223)/x224);

	if (t50 != -254) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x229 = INT64_MAX;
	int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MAX;
	int64_t x232 = 1584529LL;
	int64_t t51 = -470LL;

	t51 = (((x229+x230)^x231)/x232);

	if (t51 != 1355LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x234 = 570113712U;
	int8_t x235 = INT8_MIN;
	int32_t x236 = 1;
	volatile uint32_t t52 = 512546257U;

	t52 = (((x233+x234)^x235)/x236);

	if (t52 != 3724788015U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = INT8_MIN;
	static uint16_t x246 = 26U;
	static int16_t x247 = 116;
	int32_t x248 = -125;
	volatile int32_t t53 = 41;

	t53 = (((x245+x246)^x247)/x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x249 = INT8_MIN;
	volatile int64_t x250 = 3039LL;
	int64_t x251 = INT64_MAX;
	int32_t x252 = INT32_MIN;
	static int64_t t54 = -235891821LL;

	t54 = (((x249+x250)^x251)/x252);

	if (t54 != -4294967295LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = INT16_MAX;
	volatile int64_t x260 = INT64_MIN;
	int64_t t55 = 959281311LL;

	t55 = (((x257+x258)^x259)/x260);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = INT32_MAX;
	uint32_t x262 = UINT32_MAX;
	volatile int64_t t56 = 273LL;

	t56 = (((x261+x262)^x263)/x264);

	if (t56 != -36170086410616832LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x266 = -1;
	volatile int64_t x267 = INT64_MAX;
	volatile int64_t x268 = -1LL;
	int64_t t57 = 2366LL;

	t57 = (((x265+x266)^x267)/x268);

	if (t57 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x270 = INT8_MIN;
	volatile int32_t x271 = 3445311;
	uint32_t x272 = UINT32_MAX;
	volatile uint32_t t58 = 28U;

	t58 = (((x269+x270)^x271)/x272);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x273 = INT32_MIN;
	int16_t x274 = 3991;
	int16_t x275 = -3712;
	int8_t x276 = INT8_MAX;
	int32_t t59 = -269820;

	t59 = (((x273+x274)^x275)/x276);

	if (t59 != 16909316) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x277 = 672623705U;
	uint16_t x278 = 14U;
	static int32_t x280 = -149914;
	volatile uint64_t t60 = 53119223252836332LLU;

	t60 = (((x277+x278)^x279)/x280);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x281 = 3U;
	int64_t x282 = -1LL;
	uint64_t x284 = UINT64_MAX;
	static uint64_t t61 = 1082446006378384LLU;

	t61 = (((x281+x282)^x283)/x284);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x285 = 1806971LLU;
	int32_t x286 = -576;
	uint8_t x287 = UINT8_MAX;
	int32_t x288 = INT32_MIN;
	uint64_t t62 = 13811472950LLU;

	t62 = (((x285+x286)^x287)/x288);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x289 = 81U;
	uint8_t x290 = 3U;
	static int64_t x291 = INT64_MIN;
	static uint32_t x292 = 47U;
	volatile int64_t t63 = 1128285547LL;

	t63 = (((x289+x290)^x291)/x292);

	if (t63 != -196241958230952674LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x294 = 1U;
	int32_t x295 = 292;
	static int16_t x296 = INT16_MAX;
	volatile int32_t t64 = 351775;

	t64 = (((x293+x294)^x295)/x296);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x297 = UINT8_MAX;
	uint64_t x298 = 49475711LLU;
	static uint16_t x299 = UINT16_MAX;
	static uint8_t x300 = 37U;
	uint64_t t65 = 2697245470327LLU;

	t65 = (((x297+x298)^x299)/x300);

	if (t65 != 1335617LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x301 = 0U;
	int64_t x303 = -1LL;
	int16_t x304 = INT16_MAX;
	volatile int64_t t66 = -7148024489LL;

	t66 = (((x301+x302)^x303)/x304);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x306 = 272U;
	int16_t x307 = INT16_MAX;
	int16_t x308 = INT16_MAX;
	int32_t t67 = -7276655;

	t67 = (((x305+x306)^x307)/x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x310 = -45;
	uint8_t x311 = UINT8_MAX;
	int16_t x312 = 6;
	int32_t t68 = 594447;

	t68 = (((x309+x310)^x311)/x312);

	if (t68 != 4663) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x314 = INT16_MAX;
	uint32_t x315 = 40299U;
	static int32_t x316 = INT32_MIN;

	t69 = (((x313+x314)^x315)/x316);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x317 = 138308918U;
	uint64_t x318 = 1442155LLU;
	uint8_t x319 = 0U;
	static uint32_t x320 = 4946U;

	t70 = (((x317+x318)^x319)/x320);

	if (t70 != 28255LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x321 = 45014854U;
	uint32_t x322 = 0U;
	int8_t x323 = -1;
	volatile uint32_t t71 = 21U;

	t71 = (((x321+x322)^x323)/x324);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x326 = UINT32_MAX;
	int8_t x327 = 1;
	int64_t x328 = -1LL;

	t72 = (((x325+x326)^x327)/x328);

	if (t72 != -255LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x333 = 26699934703LLU;
	static int32_t x334 = INT32_MAX;
	static volatile int64_t x335 = INT64_MIN;
	uint64_t x336 = 7LLU;
	uint64_t t73 = 1392979LLU;

	t73 = (((x333+x334)^x335)/x336);

	if (t73 != 1317624580814599165LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x337 = 0;
	int64_t x338 = -1LL;
	volatile uint16_t x339 = 14U;
	static uint8_t x340 = 36U;
	int64_t t74 = 113063717744954288LL;

	t74 = (((x337+x338)^x339)/x340);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x341 = -1LL;
	uint64_t x342 = 387794107243042437LLU;
	int16_t x343 = -1;
	int8_t x344 = INT8_MAX;

	t75 = (((x341+x342)^x343)/x344);

	if (t75 != 142196456428870151LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x345 = INT8_MIN;
	uint16_t x346 = 1755U;
	int16_t x347 = -13388;
	static int16_t x348 = INT16_MAX;

	t76 = (((x345+x346)^x347)/x348);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x350 = -3;
	int16_t x351 = INT16_MIN;
	static int32_t x352 = INT32_MAX;
	int32_t t77 = 15285174;

	t77 = (((x349+x350)^x351)/x352);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x355 = INT64_MIN;
	int64_t t78 = 55066269LL;

	t78 = (((x353+x354)^x355)/x356);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x358 = -528101665;
	int16_t x360 = INT16_MIN;
	uint32_t t79 = 11893U;

	t79 = (((x357+x358)^x359)/x360);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x361 = 0;
	static int8_t x362 = INT8_MIN;
	static uint64_t x363 = UINT64_MAX;
	int64_t x364 = -382923916361090LL;
	uint64_t t80 = 40139087LLU;

	t80 = (((x361+x362)^x363)/x364);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x365 = -1;
	uint64_t x366 = UINT64_MAX;
	volatile int64_t x367 = 91963905LL;
	uint16_t x368 = 72U;

	t81 = (((x365+x366)^x367)/x368);

	if (t81 != 256204778800244273LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x369 = UINT64_MAX;
	volatile int32_t x370 = -1;
	int64_t x371 = INT64_MIN;
	volatile uint64_t t82 = 11249119175749LLU;

	t82 = (((x369+x370)^x371)/x372);

	if (t82 != 36170086419038336LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x373 = INT16_MAX;
	uint64_t x375 = 20670233846882911LLU;

	t83 = (((x373+x374)^x375)/x376);

	if (t83 != 801133645249159141LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x377 = 8U;
	int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	int16_t x380 = INT16_MIN;
	int32_t t84 = -117897;

	t84 = (((x377+x378)^x379)/x380);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x383 = -1;
	volatile int64_t x384 = INT64_MIN;
	volatile int64_t t85 = 69829180LL;

	t85 = (((x381+x382)^x383)/x384);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x386 = INT32_MIN;
	static int32_t x387 = -487123;
	volatile uint64_t t86 = 888536692379LLU;

	t86 = (((x385+x386)^x387)/x388);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x393 = UINT64_MAX;
	int64_t x394 = INT64_MIN;
	int64_t x396 = INT64_MIN;

	t87 = (((x393+x394)^x395)/x396);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x397 = UINT8_MAX;
	int64_t x399 = 9573990819869LL;
	static int8_t x400 = 1;
	volatile int64_t t88 = 6079411LL;

	t88 = (((x397+x398)^x399)/x400);

	if (t88 != 9573990819938LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x401 = 190;
	int16_t x402 = 50;
	uint16_t x404 = 2383U;
	static volatile int32_t t89 = -1538;

	t89 = (((x401+x402)^x403)/x404);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x406 = 100U;
	uint32_t t90 = 130U;

	t90 = (((x405+x406)^x407)/x408);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x413 = UINT32_MAX;
	int32_t x415 = INT32_MIN;
	uint32_t x416 = 268643401U;
	volatile uint32_t t91 = 92593983U;

	t91 = (((x413+x414)^x415)/x416);

	if (t91 != 7U) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x417 = INT64_MIN;
	static uint64_t x418 = UINT64_MAX;
	int32_t x419 = 58735486;
	uint64_t x420 = 1879413286935944218LLU;
	volatile uint64_t t92 = 340248221LLU;

	t92 = (((x417+x418)^x419)/x420);

	if (t92 != 4LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x426 = -1;
	static volatile uint16_t x427 = UINT16_MAX;
	static int8_t x428 = -8;
	int64_t t93 = 16733620626LL;

	t93 = (((x425+x426)^x427)/x428);

	if (t93 != -8095LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = INT8_MIN;
	volatile int16_t x430 = INT16_MIN;
	static uint16_t x432 = 30U;

	t94 = (((x429+x430)^x431)/x432);

	if (t94 != 143164480U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x433 = INT8_MAX;
	int8_t x434 = INT8_MAX;
	int8_t x435 = INT8_MAX;
	int64_t x436 = INT64_MIN;
	static volatile int64_t t95 = -126654859LL;

	t95 = (((x433+x434)^x435)/x436);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x439 = 74;
	uint8_t x440 = UINT8_MAX;

	t96 = (((x437+x438)^x439)/x440);

	if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = 216498;
	uint32_t x442 = 353405119U;
	uint64_t x443 = UINT64_MAX;
	static int8_t x444 = INT8_MIN;

	t97 = (((x441+x442)^x443)/x444);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x453 = -13775;
	static int64_t x455 = INT64_MAX;
	volatile int16_t x456 = INT16_MAX;
	static int64_t t98 = 827542680276LL;

	t98 = (((x453+x454)^x455)/x456);

	if (t98 != -281483566907399LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x459 = 834;
	static int16_t x460 = INT16_MAX;

	t99 = (((x457+x458)^x459)/x460);

	if (t99 != 281483566907398LL) { NG(); } else { ; }
	
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

