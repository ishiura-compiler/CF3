#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = -292LL;
static int64_t t0 = 21157120010480LL;
int64_t x8 = INT64_MAX;
volatile uint64_t t2 = UINT64_MAX;
volatile uint32_t x13 = 0U;
int64_t x17 = INT64_MAX;
int16_t x19 = 186;
int64_t x21 = INT64_MIN;
volatile int64_t t6 = -1792001LL;
uint64_t t7 = 60LLU;
uint32_t x34 = 339558U;
volatile int32_t x37 = INT32_MIN;
int64_t t9 = 40455384026746LL;
volatile uint64_t x42 = 660128636805997062LLU;
static int32_t x43 = -9;
volatile int16_t x48 = INT16_MIN;
int64_t x55 = -1LL;
int8_t x59 = INT8_MIN;
int32_t x60 = -15443;
volatile int32_t t15 = -3864505;
int8_t x66 = 0;
int64_t x70 = -180855541617LL;
int16_t x74 = -1;
int16_t x76 = INT16_MIN;
int8_t x83 = 6;
static int32_t x90 = -1;
int16_t x91 = INT16_MIN;
uint64_t x94 = 465547724LLU;
volatile uint32_t x109 = UINT32_MAX;
volatile int32_t x110 = -19;
int32_t x111 = 1;
int32_t t27 = 0;
int32_t x113 = 0;
uint64_t x115 = 365LLU;
volatile int64_t t28 = 23833321LL;
static int8_t x119 = -1;
static int16_t x122 = INT16_MAX;
volatile int16_t x126 = -1;
volatile int16_t x127 = -2577;
volatile int32_t t31 = 197424235;
static uint64_t x131 = 4351319996017219LLU;
volatile int16_t x134 = INT16_MAX;
static volatile uint64_t t33 = 13054LLU;
int64_t x142 = -68512082471923324LL;
int32_t x144 = INT32_MIN;
volatile int32_t t35 = 61965502;
int8_t x157 = 0;
int32_t x159 = INT32_MAX;
int16_t x160 = -3181;
volatile int32_t t40 = 1207;
int8_t x167 = -1;
int64_t x175 = -1LL;
static int8_t x177 = INT8_MIN;
int32_t x186 = INT32_MAX;
int32_t x190 = -1;
static int8_t x199 = 43;
int32_t x204 = -888866733;
int32_t t51 = -1230846;
int32_t x211 = INT32_MIN;
int8_t x213 = 50;
uint32_t x222 = 69636032U;
uint64_t x223 = 5663626611341340670LLU;
volatile int16_t x226 = -2;
int32_t x234 = INT32_MAX;
int16_t x235 = INT16_MAX;
int64_t x238 = -1LL;
int16_t x241 = INT16_MAX;
volatile uint64_t x246 = 380260346194LLU;
volatile int32_t t64 = -97;
int16_t x261 = -1;
uint16_t x262 = UINT16_MAX;
volatile int64_t t65 = INT64_MIN;
uint8_t x272 = 26U;
volatile int32_t x275 = INT32_MIN;
int16_t x278 = -1;
uint16_t x279 = 965U;
int32_t x280 = 4;
static volatile int32_t x288 = 904001;
int64_t x299 = -1LL;
volatile int64_t t78 = -109718315074496643LL;
int32_t t79 = 86973;
int16_t x329 = INT16_MIN;
static int32_t x331 = -1;
static int8_t x335 = -1;
volatile int32_t t83 = 3588476;
uint16_t x337 = 4U;
volatile int64_t t84 = 29974LL;
int32_t t85 = -18433869;
int64_t x347 = INT64_MAX;
int8_t x348 = 5;
static int32_t t88 = 27996507;
static volatile int32_t x357 = INT32_MIN;
volatile uint32_t x359 = 6105432U;
int32_t x362 = INT32_MIN;
static int16_t x363 = INT16_MIN;
static int64_t t93 = INT64_MIN;
int16_t x377 = INT16_MAX;
static int64_t x381 = INT64_MAX;
volatile int32_t t95 = 8;
int32_t x386 = 5882;
uint32_t x393 = 3175U;
uint8_t x395 = 20U;
int8_t x398 = -5;


void f0(void) {
	volatile int8_t x1 = 0;
	uint32_t x2 = 6234U;
	static int8_t x3 = INT8_MIN;

	t0 = (((x1<=x2)<x3)^x4);

	if (t0 != -292LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	uint64_t x6 = UINT64_MAX;
	static int16_t x7 = INT16_MIN;
	int64_t t1 = INT64_MAX;

	t1 = (((x5<=x6)<x7)^x8);

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	uint32_t x10 = 4U;
	volatile int8_t x11 = -1;
	uint64_t x12 = UINT64_MAX;

	t2 = (((x9<=x10)<x11)^x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = 6549966;
	int32_t x15 = 1908;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 10;

	t3 = (((x13<=x14)<x15)^x16);

	if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = 3LL;
	volatile uint64_t x20 = 3LLU;
	volatile uint64_t t4 = 7090183990713853LLU;

	t4 = (((x17<=x18)<x19)^x20);

	if (t4 != 2LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	volatile uint32_t x23 = 62680896U;
	static uint16_t x24 = UINT16_MAX;
	int32_t t5 = 5494;

	t5 = (((x21<=x22)<x23)^x24);

	if (t5 != 65534) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 6;
	int8_t x26 = INT8_MIN;
	static uint32_t x27 = 56038349U;
	static int64_t x28 = 200142033385LL;

	t6 = (((x25<=x26)<x27)^x28);

	if (t6 != 200142033384LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 2U;
	static volatile int16_t x30 = INT16_MIN;
	int8_t x31 = -1;
	uint64_t x32 = 19439LLU;

	t7 = (((x29<=x30)<x31)^x32);

	if (t7 != 19439LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	volatile int16_t x35 = -1;
	uint32_t x36 = 1U;
	uint32_t t8 = 287271532U;

	t8 = (((x33<=x34)<x35)^x36);

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = -1;
	int64_t x39 = INT64_MIN;
	static int64_t x40 = -11169375985542LL;

	t9 = (((x37<=x38)<x39)^x40);

	if (t9 != -11169375985542LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -14;
	uint32_t x44 = 2656622U;
	static uint32_t t10 = 93294U;

	t10 = (((x41<=x42)<x43)^x44);

	if (t10 != 2656622U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	uint64_t x46 = 2566197311215021365LLU;
	static volatile uint64_t x47 = UINT64_MAX;
	volatile int32_t t11 = -62;

	t11 = (((x45<=x46)<x47)^x48);

	if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -213;
	int8_t x50 = -1;
	int8_t x51 = -48;
	uint64_t x52 = 3561321428LLU;
	static uint64_t t12 = 4063176245LLU;

	t12 = (((x49<=x50)<x51)^x52);

	if (t12 != 3561321428LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1LL;
	volatile int16_t x54 = INT16_MIN;
	uint16_t x56 = 3U;
	volatile int32_t t13 = -914668610;

	t13 = (((x53<=x54)<x55)^x56);

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -432846LL;
	uint16_t x58 = 17137U;
	int32_t t14 = 1;

	t14 = (((x57<=x58)<x59)^x60);

	if (t14 != -15443) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 1036767293U;
	uint64_t x62 = 5361835LLU;
	uint32_t x63 = UINT32_MAX;
	int8_t x64 = INT8_MIN;

	t15 = (((x61<=x62)<x63)^x64);

	if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = UINT64_MAX;
	uint32_t x67 = 7U;
	int64_t x68 = INT64_MIN;
	static int64_t t16 = -141140LL;

	t16 = (((x65<=x66)<x67)^x68);

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 112208;
	int64_t x71 = INT64_MAX;
	int64_t x72 = INT64_MIN;
	static int64_t t17 = 937274LL;

	t17 = (((x69<=x70)<x71)^x72);

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 59U;
	uint64_t x75 = 2073LLU;
	int32_t t18 = 21931922;

	t18 = (((x73<=x74)<x75)^x76);

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x77 = -1LL;
	volatile int16_t x78 = INT16_MIN;
	int32_t x79 = 270353;
	volatile uint8_t x80 = UINT8_MAX;
	volatile int32_t t19 = 7;

	t19 = (((x77<=x78)<x79)^x80);

	if (t19 != 254) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MAX;
	volatile uint8_t x82 = 8U;
	static volatile int16_t x84 = 100;
	int32_t t20 = 47;

	t20 = (((x81<=x82)<x83)^x84);

	if (t20 != 101) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x85 = -1LL;
	static volatile int8_t x86 = INT8_MIN;
	int64_t x87 = INT64_MAX;
	uint32_t x88 = UINT32_MAX;
	uint32_t t21 = 1U;

	t21 = (((x85<=x86)<x87)^x88);

	if (t21 != 4294967294U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 2674U;
	int16_t x92 = -1;
	volatile int32_t t22 = 3;

	t22 = (((x89<=x90)<x91)^x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	int8_t x95 = -1;
	static uint64_t x96 = 338361876096LLU;
	static uint64_t t23 = 111058665330LLU;

	t23 = (((x93<=x94)<x95)^x96);

	if (t23 != 338361876096LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = INT64_MIN;
	volatile uint8_t x98 = UINT8_MAX;
	volatile int8_t x99 = -27;
	int32_t x100 = INT32_MIN;
	int32_t t24 = INT32_MIN;

	t24 = (((x97<=x98)<x99)^x100);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x101 = 2U;
	uint8_t x102 = 0U;
	uint32_t x103 = UINT32_MAX;
	int16_t x104 = -144;
	static volatile int32_t t25 = 1;

	t25 = (((x101<=x102)<x103)^x104);

	if (t25 != -143) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 886LL;
	volatile uint32_t x106 = UINT32_MAX;
	uint32_t x107 = 740814U;
	int8_t x108 = -8;
	static volatile int32_t t26 = -1116516;

	t26 = (((x105<=x106)<x107)^x108);

	if (t26 != -7) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x112 = 29U;

	t27 = (((x109<=x110)<x111)^x112);

	if (t27 != 28) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = INT32_MIN;
	int64_t x116 = INT64_MIN;

	t28 = (((x113<=x114)<x115)^x116);

	if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x117 = UINT8_MAX;
	int16_t x118 = INT16_MIN;
	static uint32_t x120 = UINT32_MAX;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (((x117<=x118)<x119)^x120);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	volatile int16_t x123 = -1;
	int32_t x124 = -1;
	volatile int32_t t30 = 199256407;

	t30 = (((x121<=x122)<x123)^x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	int16_t x128 = 23;

	t31 = (((x125<=x126)<x127)^x128);

	if (t31 != 23) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -51384699LL;
	int8_t x130 = 1;
	uint64_t x132 = 3LLU;
	volatile uint64_t t32 = 228505640LLU;

	t32 = (((x129<=x130)<x131)^x132);

	if (t32 != 2LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = 4U;
	int32_t x135 = INT32_MAX;
	uint64_t x136 = UINT64_MAX;

	t33 = (((x133<=x134)<x135)^x136);

	if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 13U;
	static uint64_t x138 = UINT64_MAX;
	static int8_t x139 = 3;
	int8_t x140 = INT8_MAX;
	volatile int32_t t34 = 288496;

	t34 = (((x137<=x138)<x139)^x140);

	if (t34 != 126) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	uint16_t x143 = 3U;

	t35 = (((x141<=x142)<x143)^x144);

	if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 32U;
	int16_t x146 = -1;
	uint16_t x147 = 215U;
	static int32_t x148 = 123568762;
	static volatile int32_t t36 = -250997257;

	t36 = (((x145<=x146)<x147)^x148);

	if (t36 != 123568763) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -89375557883494LL;
	volatile int64_t x150 = -1LL;
	static int16_t x151 = 764;
	int64_t x152 = 2123662214LL;
	int64_t t37 = -13411722210670LL;

	t37 = (((x149<=x150)<x151)^x152);

	if (t37 != 2123662215LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int8_t x154 = INT8_MIN;
	int64_t x155 = -1LL;
	int64_t x156 = INT64_MIN;
	int64_t t38 = INT64_MIN;

	t38 = (((x153<=x154)<x155)^x156);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = 1U;
	volatile int32_t t39 = -1;

	t39 = (((x157<=x158)<x159)^x160);

	if (t39 != -3182) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 49U;
	uint64_t x162 = 1185681181LLU;
	int16_t x163 = INT16_MIN;
	volatile int16_t x164 = INT16_MAX;

	t40 = (((x161<=x162)<x163)^x164);

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	int64_t x166 = -1LL;
	uint64_t x168 = 28964484LLU;
	static uint64_t t41 = 492859398013LLU;

	t41 = (((x165<=x166)<x167)^x168);

	if (t41 != 28964484LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	static volatile int64_t x170 = INT64_MIN;
	uint8_t x171 = 1U;
	int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 6325;

	t42 = (((x169<=x170)<x171)^x172);

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = -7;
	int8_t x174 = INT8_MIN;
	uint8_t x176 = 104U;
	volatile int32_t t43 = 25404175;

	t43 = (((x173<=x174)<x175)^x176);

	if (t43 != 104) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = UINT8_MAX;
	int64_t x179 = -1LL;
	int64_t x180 = INT64_MIN;
	static volatile int64_t t44 = INT64_MIN;

	t44 = (((x177<=x178)<x179)^x180);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -7648;
	int16_t x182 = INT16_MIN;
	volatile uint32_t x183 = 3424U;
	int64_t x184 = -238135435614LL;
	volatile int64_t t45 = -13815460030776LL;

	t45 = (((x181<=x182)<x183)^x184);

	if (t45 != -238135435613LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x185 = UINT16_MAX;
	static volatile uint8_t x187 = 0U;
	uint16_t x188 = 2U;
	static volatile int32_t t46 = -5285;

	t46 = (((x185<=x186)<x187)^x188);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	uint64_t x191 = 695992LLU;
	int16_t x192 = INT16_MIN;
	int32_t t47 = -146;

	t47 = (((x189<=x190)<x191)^x192);

	if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x193 = 52U;
	static uint8_t x194 = UINT8_MAX;
	static int16_t x195 = INT16_MIN;
	static uint64_t x196 = UINT64_MAX;
	static volatile uint64_t t48 = UINT64_MAX;

	t48 = (((x193<=x194)<x195)^x196);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x197 = 5U;
	static volatile uint8_t x198 = UINT8_MAX;
	int8_t x200 = INT8_MIN;
	volatile int32_t t49 = 231485012;

	t49 = (((x197<=x198)<x199)^x200);

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	static volatile int8_t x202 = INT8_MAX;
	int32_t x203 = -1;
	int32_t t50 = -95483;

	t50 = (((x201<=x202)<x203)^x204);

	if (t50 != -888866733) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MIN;
	volatile uint32_t x206 = 5849767U;
	int16_t x207 = INT16_MAX;
	int8_t x208 = INT8_MAX;

	t51 = (((x205<=x206)<x207)^x208);

	if (t51 != 126) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	int16_t x210 = 12;
	uint64_t x212 = 74796798186LLU;
	volatile uint64_t t52 = 82210LLU;

	t52 = (((x209<=x210)<x211)^x212);

	if (t52 != 74796798186LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = -15;
	int16_t x215 = -1;
	uint8_t x216 = 28U;
	volatile int32_t t53 = 181;

	t53 = (((x213<=x214)<x215)^x216);

	if (t53 != 28) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = -1;
	static uint64_t x218 = 32653997625265LLU;
	int64_t x219 = -1LL;
	uint32_t x220 = 3013954U;
	static uint32_t t54 = 230358350U;

	t54 = (((x217<=x218)<x219)^x220);

	if (t54 != 3013954U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int16_t x224 = INT16_MIN;
	volatile int32_t t55 = -72656;

	t55 = (((x221<=x222)<x223)^x224);

	if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = 1;
	static int16_t x227 = INT16_MAX;
	volatile int16_t x228 = INT16_MIN;
	volatile int32_t t56 = -8725511;

	t56 = (((x225<=x226)<x227)^x228);

	if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = -12175015LL;
	static volatile int64_t x230 = INT64_MIN;
	int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MAX;
	static volatile int32_t t57 = -315;

	t57 = (((x229<=x230)<x231)^x232);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -12198471586LL;
	int32_t x236 = INT32_MAX;
	volatile int32_t t58 = -191804711;

	t58 = (((x233<=x234)<x235)^x236);

	if (t58 != 2147483646) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 1775;
	volatile uint8_t x239 = 31U;
	uint32_t x240 = 12807905U;
	volatile uint32_t t59 = 13167U;

	t59 = (((x237<=x238)<x239)^x240);

	if (t59 != 12807904U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = 0;
	static int64_t x243 = INT64_MAX;
	uint16_t x244 = 5U;
	volatile int32_t t60 = -27;

	t60 = (((x241<=x242)<x243)^x244);

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int16_t x247 = -3729;
	int8_t x248 = INT8_MIN;
	int32_t t61 = -396814;

	t61 = (((x245<=x246)<x247)^x248);

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x249 = 463137U;
	uint64_t x250 = 546841567214447LLU;
	volatile uint16_t x251 = 8U;
	int32_t x252 = -1;
	volatile int32_t t62 = -317;

	t62 = (((x249<=x250)<x251)^x252);

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = 2579U;
	uint16_t x254 = UINT16_MAX;
	static int8_t x255 = 0;
	int32_t x256 = INT32_MAX;
	int32_t t63 = INT32_MAX;

	t63 = (((x253<=x254)<x255)^x256);

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = 48439952;
	int8_t x258 = 0;
	int64_t x259 = INT64_MIN;
	int8_t x260 = INT8_MAX;

	t64 = (((x257<=x258)<x259)^x260);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x263 = INT16_MIN;
	static int64_t x264 = INT64_MIN;

	t65 = (((x261<=x262)<x263)^x264);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	int64_t x266 = INT64_MIN;
	static int64_t x267 = INT64_MIN;
	static int64_t x268 = -1LL;
	int64_t t66 = 86473319096340LL;

	t66 = (((x265<=x266)<x267)^x268);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x269 = INT8_MAX;
	int64_t x270 = INT64_MAX;
	int8_t x271 = INT8_MAX;
	volatile int32_t t67 = -215300;

	t67 = (((x269<=x270)<x271)^x272);

	if (t67 != 27) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	int32_t x274 = INT32_MAX;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = 168;

	t68 = (((x273<=x274)<x275)^x276);

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = 4;
	int32_t t69 = 1;

	t69 = (((x277<=x278)<x279)^x280);

	if (t69 != 5) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 7157U;
	int64_t x282 = 821026081641LL;
	static int16_t x283 = 1;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (((x281<=x282)<x283)^x284);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 1;
	static uint32_t x286 = 11333448U;
	int32_t x287 = 29;
	volatile int32_t t71 = -48728347;

	t71 = (((x285<=x286)<x287)^x288);

	if (t71 != 904000) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MAX;
	uint16_t x290 = UINT16_MAX;
	static uint8_t x291 = UINT8_MAX;
	static int8_t x292 = INT8_MIN;
	static int32_t t72 = -493677;

	t72 = (((x289<=x290)<x291)^x292);

	if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 4;
	int16_t x294 = INT16_MIN;
	volatile int64_t x295 = INT64_MIN;
	volatile int16_t x296 = -11;
	int32_t t73 = -1971034;

	t73 = (((x293<=x294)<x295)^x296);

	if (t73 != -11) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 0;
	static int64_t x298 = INT64_MAX;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = 395;

	t74 = (((x297<=x298)<x299)^x300);

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = INT16_MIN;
	uint32_t x302 = 13439189U;
	int16_t x303 = INT16_MIN;
	int8_t x304 = 3;
	int32_t t75 = -59533210;

	t75 = (((x301<=x302)<x303)^x304);

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -35572;
	uint64_t x306 = UINT64_MAX;
	static volatile uint64_t x307 = UINT64_MAX;
	int32_t x308 = INT32_MAX;
	static volatile int32_t t76 = -29076;

	t76 = (((x305<=x306)<x307)^x308);

	if (t76 != 2147483646) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -1;
	static int64_t x310 = -251064LL;
	volatile int32_t x311 = INT32_MAX;
	uint16_t x312 = 5U;
	int32_t t77 = 63639;

	t77 = (((x309<=x310)<x311)^x312);

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 9;
	int16_t x314 = -8;
	static int8_t x315 = -1;
	int64_t x316 = -1LL;

	t78 = (((x313<=x314)<x315)^x316);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = INT16_MIN;
	static uint8_t x318 = 41U;
	int32_t x319 = -1;
	int16_t x320 = INT16_MIN;

	t79 = (((x317<=x318)<x319)^x320);

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	static uint32_t x322 = 2611U;
	int64_t x323 = INT64_MAX;
	uint32_t x324 = UINT32_MAX;
	uint32_t t80 = 25599U;

	t80 = (((x321<=x322)<x323)^x324);

	if (t80 != 4294967294U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x325 = 127540LLU;
	volatile int8_t x326 = INT8_MIN;
	uint32_t x327 = 215U;
	int32_t x328 = INT32_MIN;
	int32_t t81 = 132065108;

	t81 = (((x325<=x326)<x327)^x328);

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x330 = UINT64_MAX;
	int16_t x332 = INT16_MAX;
	int32_t t82 = -1;

	t82 = (((x329<=x330)<x331)^x332);

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	int32_t x334 = 9;
	int32_t x336 = 366092;

	t83 = (((x333<=x334)<x335)^x336);

	if (t83 != 366092) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x338 = 2157574U;
	static uint32_t x339 = 100685006U;
	int64_t x340 = -1LL;

	t84 = (((x337<=x338)<x339)^x340);

	if (t84 != -2LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	volatile int64_t x342 = -1LL;
	int64_t x343 = -1LL;
	int8_t x344 = 2;

	t85 = (((x341<=x342)<x343)^x344);

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 9261LL;
	int32_t x346 = -3;
	volatile int32_t t86 = -243373820;

	t86 = (((x345<=x346)<x347)^x348);

	if (t86 != 4) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = -40783199592LL;
	int16_t x350 = INT16_MIN;
	int8_t x351 = 4;
	volatile int8_t x352 = -1;
	volatile int32_t t87 = 23983;

	t87 = (((x349<=x350)<x351)^x352);

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	int8_t x354 = 1;
	static volatile int8_t x355 = 0;
	int8_t x356 = INT8_MIN;

	t88 = (((x353<=x354)<x355)^x356);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x358 = -2923236220064530320LL;
	volatile int8_t x360 = -1;
	volatile int32_t t89 = -2;

	t89 = (((x357<=x358)<x359)^x360);

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	static int64_t x364 = 7080LL;
	int64_t t90 = 3441300LL;

	t90 = (((x361<=x362)<x363)^x364);

	if (t90 != 7080LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	static uint32_t x366 = 27154142U;
	uint16_t x367 = 15U;
	uint16_t x368 = 1689U;
	int32_t t91 = -196717142;

	t91 = (((x365<=x366)<x367)^x368);

	if (t91 != 1688) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	static uint8_t x370 = 24U;
	volatile int16_t x371 = INT16_MIN;
	volatile int32_t x372 = 749815;
	static volatile int32_t t92 = -5587;

	t92 = (((x369<=x370)<x371)^x372);

	if (t92 != 749815) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 7LLU;
	static int8_t x374 = INT8_MIN;
	static int16_t x375 = -820;
	static int64_t x376 = INT64_MIN;

	t93 = (((x373<=x374)<x375)^x376);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = -1;
	int8_t x379 = INT8_MAX;
	int8_t x380 = INT8_MAX;
	volatile int32_t t94 = 237637442;

	t94 = (((x377<=x378)<x379)^x380);

	if (t94 != 126) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x382 = UINT32_MAX;
	volatile int64_t x383 = INT64_MAX;
	uint16_t x384 = 40U;

	t95 = (((x381<=x382)<x383)^x384);

	if (t95 != 41) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	uint16_t x387 = 249U;
	static uint32_t x388 = 17674U;
	static volatile uint32_t t96 = 10U;

	t96 = (((x385<=x386)<x387)^x388);

	if (t96 != 17675U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -125;
	int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MAX;
	volatile uint32_t x392 = 0U;
	static uint32_t t97 = 1811778U;

	t97 = (((x389<=x390)<x391)^x392);

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = 189898551;
	uint8_t x396 = 2U;
	volatile int32_t t98 = 562;

	t98 = (((x393<=x394)<x395)^x396);

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = 48;
	static int8_t x399 = INT8_MAX;
	volatile int8_t x400 = -1;
	volatile int32_t t99 = 3743022;

	t99 = (((x397<=x398)<x399)^x400);

	if (t99 != -2) { NG(); } else { ; }
	
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

