#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x8 = 3676695LLU;
static int32_t t1 = -568438;
int8_t x12 = -1;
static uint32_t x21 = 1834593934U;
volatile int32_t t5 = 18661;
volatile int64_t x27 = 678668085891918379LL;
static uint8_t x29 = UINT8_MAX;
uint64_t x31 = UINT64_MAX;
static int32_t t7 = -15725;
int32_t t8 = 204324;
static volatile int32_t t9 = -3;
static int64_t x47 = INT64_MAX;
static int32_t x54 = INT32_MAX;
static int16_t x58 = -1;
uint8_t x70 = 106U;
int32_t x75 = -1;
int8_t x78 = -1;
static uint64_t x84 = 600LLU;
volatile int16_t x93 = -1;
static volatile int8_t x98 = INT8_MAX;
volatile int64_t x106 = -2169627656LL;
static volatile int32_t t27 = 7367260;
int16_t x115 = 0;
static int64_t x117 = 1854203967LL;
int16_t x118 = -1;
int16_t x119 = 1;
uint8_t x123 = 7U;
uint32_t x124 = 144755U;
int32_t x126 = INT32_MIN;
int16_t x130 = INT16_MIN;
int64_t x131 = -689688990837543511LL;
static uint32_t x135 = 3519U;
volatile int32_t t33 = -6420;
static uint32_t x138 = 150185U;
volatile int32_t t34 = -694322;
volatile int8_t x145 = -1;
int32_t t36 = -72;
uint32_t x150 = 879047901U;
volatile uint8_t x152 = UINT8_MAX;
int8_t x158 = -1;
uint8_t x169 = UINT8_MAX;
int32_t x180 = 1;
static int64_t x184 = -546650570LL;
int32_t t45 = 6748;
volatile int32_t x196 = -253122;
int32_t x201 = -19154404;
static int64_t x203 = INT64_MIN;
static int64_t x207 = INT64_MIN;
int32_t t51 = -607781849;
int32_t x214 = INT32_MIN;
uint8_t x215 = 1U;
int32_t x217 = 258408167;
int64_t x237 = INT64_MIN;
static uint16_t x241 = UINT16_MAX;
int32_t x242 = INT32_MIN;
int64_t x247 = INT64_MAX;
uint8_t x258 = 0U;
int64_t x262 = INT64_MIN;
uint32_t x264 = UINT32_MAX;
uint16_t x266 = UINT16_MAX;
uint8_t x281 = UINT8_MAX;
int32_t x282 = -1;
volatile uint16_t x291 = 23U;
uint8_t x303 = 3U;
int32_t x305 = INT32_MIN;
volatile int32_t t76 = 0;
int32_t t79 = 1;
uint8_t x325 = UINT8_MAX;
int16_t x327 = INT16_MAX;
volatile int32_t t82 = -396096;
static int64_t x337 = INT64_MIN;
static uint64_t x338 = 2LLU;
uint64_t x348 = 140193796LLU;
int32_t t86 = 655576;
int64_t x363 = INT64_MIN;
int32_t t90 = 108;
volatile int8_t x366 = -1;
volatile int32_t t92 = 37733921;
int64_t x377 = 18225953580LL;
static int16_t x388 = -1;
static int64_t x389 = INT64_MIN;
uint16_t x390 = UINT16_MAX;


void f0(void) {
	int32_t x1 = 4460;
	uint64_t x2 = 95075268LLU;
	static int8_t x3 = -46;
	static int16_t x4 = INT16_MIN;
	int32_t t0 = -730;

	t0 = (((x1<=x2)<x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 777255U;
	volatile uint8_t x6 = UINT8_MAX;
	int8_t x7 = -1;

	t1 = (((x5<=x6)<x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = UINT16_MAX;
	static volatile int32_t x10 = INT32_MIN;
	int16_t x11 = INT16_MIN;
	volatile int32_t t2 = -19994;

	t2 = (((x9<=x10)<x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 3261568LLU;
	int16_t x14 = INT16_MIN;
	static volatile int8_t x15 = 0;
	volatile int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -41;

	t3 = (((x13<=x14)<x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 231U;
	static volatile int8_t x18 = INT8_MIN;
	int8_t x19 = -1;
	uint16_t x20 = 398U;
	int32_t t4 = -21717738;

	t4 = (((x17<=x18)<x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x22 = INT16_MAX;
	volatile int16_t x23 = INT16_MAX;
	uint8_t x24 = 20U;

	t5 = (((x21<=x22)<x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MAX;
	static int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -282646743;

	t6 = (((x25<=x26)<x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = -1;
	uint16_t x32 = UINT16_MAX;

	t7 = (((x29<=x30)<x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint16_t x34 = 76U;
	int8_t x35 = 0;
	int32_t x36 = INT32_MIN;

	t8 = (((x33<=x34)<x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -14;
	uint64_t x38 = UINT64_MAX;
	volatile int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MIN;

	t9 = (((x37<=x38)<x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 3U;
	int16_t x42 = INT16_MAX;
	static int8_t x43 = 0;
	uint16_t x44 = 55U;
	int32_t t10 = -5;

	t10 = (((x41<=x42)<x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	uint64_t x46 = 182217LLU;
	uint32_t x48 = 40466914U;
	int32_t t11 = 30219601;

	t11 = (((x45<=x46)<x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MAX;
	static uint8_t x50 = 5U;
	volatile int16_t x51 = INT16_MIN;
	volatile int64_t x52 = INT64_MIN;
	volatile int32_t t12 = -437912822;

	t12 = (((x49<=x50)<x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int16_t x55 = -1;
	int16_t x56 = -13293;
	int32_t t13 = 2921630;

	t13 = (((x53<=x54)<x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 1927;
	int64_t x59 = INT64_MIN;
	static int16_t x60 = INT16_MAX;
	static volatile int32_t t14 = 7408553;

	t14 = (((x57<=x58)<x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	uint8_t x62 = UINT8_MAX;
	int64_t x63 = 17022456472LL;
	static volatile int16_t x64 = INT16_MAX;
	volatile int32_t t15 = 98734362;

	t15 = (((x61<=x62)<x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int64_t x66 = 34053267LL;
	static int8_t x67 = -1;
	static int32_t x68 = INT32_MIN;
	volatile int32_t t16 = -281281039;

	t16 = (((x65<=x66)<x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	int16_t x71 = INT16_MIN;
	uint64_t x72 = 499138295801458395LLU;
	volatile int32_t t17 = -461234181;

	t17 = (((x69<=x70)<x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 1030843U;
	uint64_t x74 = UINT64_MAX;
	int64_t x76 = 773437LL;
	volatile int32_t t18 = 0;

	t18 = (((x73<=x74)<x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	uint16_t x79 = UINT16_MAX;
	uint32_t x80 = 53296856U;
	int32_t t19 = -109771;

	t19 = (((x77<=x78)<x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 426U;
	volatile uint64_t x82 = UINT64_MAX;
	int64_t x83 = INT64_MIN;
	static volatile int32_t t20 = -11;

	t20 = (((x81<=x82)<x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MAX;
	int8_t x86 = INT8_MIN;
	int16_t x87 = -12524;
	static int8_t x88 = -11;
	static volatile int32_t t21 = -100;

	t21 = (((x85<=x86)<x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	volatile int16_t x90 = INT16_MIN;
	volatile int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MIN;
	int32_t t22 = -7;

	t22 = (((x89<=x90)<x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = 160;
	static uint8_t x95 = UINT8_MAX;
	int8_t x96 = INT8_MIN;
	int32_t t23 = 896589;

	t23 = (((x93<=x94)<x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x97 = 3330U;
	uint32_t x99 = UINT32_MAX;
	uint16_t x100 = 3419U;
	int32_t t24 = 202013440;

	t24 = (((x97<=x98)<x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 1310576LLU;
	int8_t x102 = INT8_MIN;
	static int16_t x103 = -1288;
	uint16_t x104 = UINT16_MAX;
	int32_t t25 = 193477545;

	t25 = (((x101<=x102)<x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MAX;
	int16_t x107 = INT16_MIN;
	static int64_t x108 = -1LL;
	int32_t t26 = -80;

	t26 = (((x105<=x106)<x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MIN;
	static int8_t x110 = 2;
	int64_t x111 = INT64_MIN;
	int16_t x112 = INT16_MIN;

	t27 = (((x109<=x110)<x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 23933935740LLU;
	static volatile int32_t x114 = INT32_MIN;
	int64_t x116 = -1LL;
	int32_t t28 = 4897265;

	t28 = (((x113<=x114)<x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x120 = 404912706U;
	volatile int32_t t29 = -263972061;

	t29 = (((x117<=x118)<x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	int64_t x122 = 1953740LL;
	volatile int32_t t30 = 10387;

	t30 = (((x121<=x122)<x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	volatile int16_t x127 = INT16_MIN;
	static uint32_t x128 = 6064096U;
	static int32_t t31 = -350953364;

	t31 = (((x125<=x126)<x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -10;
	uint8_t x132 = UINT8_MAX;
	int32_t t32 = -170;

	t32 = (((x129<=x130)<x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	static int16_t x134 = -1;
	int64_t x136 = 44716LL;

	t33 = (((x133<=x134)<x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MAX;
	uint16_t x139 = 51U;
	volatile int16_t x140 = 1;

	t34 = (((x137<=x138)<x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 14U;
	int32_t x142 = INT32_MIN;
	static int8_t x143 = 18;
	int32_t x144 = 421416;
	volatile int32_t t35 = 72594237;

	t35 = (((x141<=x142)<x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x146 = 272591432U;
	uint16_t x147 = 2080U;
	int16_t x148 = -1;

	t36 = (((x145<=x146)<x147)<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = 14U;
	uint32_t x151 = 1237587U;
	int32_t t37 = -1;

	t37 = (((x149<=x150)<x151)<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = 0;
	int64_t x154 = INT64_MIN;
	static volatile int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MIN;
	int32_t t38 = -1;

	t38 = (((x153<=x154)<x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = 28894804LL;
	uint32_t x159 = 7963U;
	static volatile int32_t x160 = 65058654;
	static volatile int32_t t39 = 0;

	t39 = (((x157<=x158)<x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MAX;
	int64_t x162 = 15173LL;
	static int32_t x163 = INT32_MAX;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t40 = 2523;

	t40 = (((x161<=x162)<x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int8_t x166 = INT8_MIN;
	int32_t x167 = -1;
	uint64_t x168 = 572782060668LLU;
	static volatile int32_t t41 = -442;

	t41 = (((x165<=x166)<x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = -1;
	int32_t x171 = INT32_MIN;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t42 = 391;

	t42 = (((x169<=x170)<x171)<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x173 = INT64_MIN;
	int16_t x174 = INT16_MIN;
	volatile int8_t x175 = -22;
	uint8_t x176 = UINT8_MAX;
	static int32_t t43 = 357794;

	t43 = (((x173<=x174)<x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	int64_t x178 = -4226541481062334LL;
	static int8_t x179 = INT8_MAX;
	volatile int32_t t44 = -3;

	t44 = (((x177<=x178)<x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	volatile uint16_t x182 = UINT16_MAX;
	uint16_t x183 = 3U;

	t45 = (((x181<=x182)<x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = 3603248;
	int16_t x187 = INT16_MIN;
	volatile int8_t x188 = 0;
	volatile int32_t t46 = -1;

	t46 = (((x185<=x186)<x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 3850833460502LLU;
	int8_t x190 = INT8_MIN;
	int64_t x191 = -1LL;
	uint64_t x192 = 118779LLU;
	volatile int32_t t47 = -464965;

	t47 = (((x189<=x190)<x191)<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -786912896627413734LL;
	int64_t x194 = INT64_MAX;
	uint64_t x195 = UINT64_MAX;
	volatile int32_t t48 = 30552069;

	t48 = (((x193<=x194)<x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 25651U;
	static int8_t x198 = INT8_MIN;
	static int64_t x199 = -1LL;
	volatile int16_t x200 = -44;
	static int32_t t49 = -85450702;

	t49 = (((x197<=x198)<x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = -1;
	static uint8_t x204 = 14U;
	static volatile int32_t t50 = -2;

	t50 = (((x201<=x202)<x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int16_t x206 = INT16_MIN;
	static volatile int16_t x208 = INT16_MAX;

	t51 = (((x205<=x206)<x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 323LLU;
	static uint64_t x210 = UINT64_MAX;
	uint32_t x211 = 3U;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = -83;

	t52 = (((x209<=x210)<x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	static int32_t x216 = 419526;
	volatile int32_t t53 = 133121;

	t53 = (((x213<=x214)<x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = 217;
	int16_t x219 = -1;
	static uint32_t x220 = 30U;
	int32_t t54 = 160205439;

	t54 = (((x217<=x218)<x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int16_t x222 = -1;
	static uint16_t x223 = UINT16_MAX;
	int64_t x224 = INT64_MIN;
	static volatile int32_t t55 = 4368999;

	t55 = (((x221<=x222)<x223)<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 0;
	int16_t x226 = -1130;
	uint8_t x227 = UINT8_MAX;
	int16_t x228 = INT16_MIN;
	volatile int32_t t56 = 385;

	t56 = (((x225<=x226)<x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = -8952LL;
	uint64_t x230 = UINT64_MAX;
	int16_t x231 = -1;
	static int32_t x232 = INT32_MAX;
	volatile int32_t t57 = 6182;

	t57 = (((x229<=x230)<x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MAX;
	volatile int64_t x234 = INT64_MIN;
	uint16_t x235 = 0U;
	static volatile uint16_t x236 = UINT16_MAX;
	volatile int32_t t58 = -303300;

	t58 = (((x233<=x234)<x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = -1;
	uint16_t x239 = 23U;
	int32_t x240 = 112;
	volatile int32_t t59 = 65;

	t59 = (((x237<=x238)<x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x243 = -1;
	static volatile int64_t x244 = INT64_MIN;
	volatile int32_t t60 = 3315;

	t60 = (((x241<=x242)<x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 5623;
	int64_t x246 = -1LL;
	int16_t x248 = 10010;
	volatile int32_t t61 = -1809;

	t61 = (((x245<=x246)<x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x249 = 716U;
	int8_t x250 = -1;
	int32_t x251 = INT32_MIN;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = -19132;

	t62 = (((x249<=x250)<x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x253 = 7202722;
	static uint32_t x254 = 186100U;
	static uint64_t x255 = 210LLU;
	int16_t x256 = -1;
	volatile int32_t t63 = 2220;

	t63 = (((x253<=x254)<x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 1;
	int8_t x259 = INT8_MIN;
	int32_t x260 = -862117532;
	int32_t t64 = 722;

	t64 = (((x257<=x258)<x259)<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x261 = UINT8_MAX;
	uint32_t x263 = 1022273U;
	static int32_t t65 = 17236318;

	t65 = (((x261<=x262)<x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = -1;
	static int32_t x267 = 989489;
	uint64_t x268 = 97673LLU;
	int32_t t66 = -32525948;

	t66 = (((x265<=x266)<x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	uint16_t x270 = UINT16_MAX;
	volatile int8_t x271 = INT8_MIN;
	volatile int16_t x272 = -1;
	int32_t t67 = -47771;

	t67 = (((x269<=x270)<x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 83;
	int32_t x274 = 8124702;
	int8_t x275 = -1;
	static int16_t x276 = 18;
	volatile int32_t t68 = 0;

	t68 = (((x273<=x274)<x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	uint16_t x278 = UINT16_MAX;
	static int16_t x279 = 3326;
	uint8_t x280 = 5U;
	int32_t t69 = 5;

	t69 = (((x277<=x278)<x279)<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x283 = INT32_MIN;
	uint32_t x284 = 12898915U;
	int32_t t70 = 3007;

	t70 = (((x281<=x282)<x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	uint16_t x286 = UINT16_MAX;
	uint16_t x287 = 2796U;
	volatile uint8_t x288 = 90U;
	int32_t t71 = -135;

	t71 = (((x285<=x286)<x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	volatile uint32_t x290 = 10U;
	static volatile int16_t x292 = -1;
	static volatile int32_t t72 = 171972461;

	t72 = (((x289<=x290)<x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = -1LL;
	int16_t x294 = INT16_MIN;
	uint16_t x295 = UINT16_MAX;
	int64_t x296 = INT64_MIN;
	int32_t t73 = 972241;

	t73 = (((x293<=x294)<x295)<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = UINT8_MAX;
	uint32_t x298 = 25878282U;
	uint64_t x299 = UINT64_MAX;
	static int64_t x300 = INT64_MAX;
	int32_t t74 = 0;

	t74 = (((x297<=x298)<x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 89U;
	int16_t x302 = -1;
	int32_t x304 = -1073;
	int32_t t75 = -9;

	t75 = (((x301<=x302)<x303)<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -19;
	volatile int32_t x307 = 25;
	static int16_t x308 = INT16_MAX;

	t76 = (((x305<=x306)<x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	static int16_t x310 = -1;
	int64_t x311 = -1LL;
	int64_t x312 = -73LL;
	static int32_t t77 = -33250;

	t77 = (((x309<=x310)<x311)<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	uint16_t x314 = 14U;
	int64_t x315 = 146902612483LL;
	static int64_t x316 = INT64_MIN;
	volatile int32_t t78 = 20418;

	t78 = (((x313<=x314)<x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	volatile int16_t x318 = -1380;
	uint8_t x319 = 91U;
	static int64_t x320 = INT64_MIN;

	t79 = (((x317<=x318)<x319)<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = INT8_MAX;
	uint16_t x322 = 2914U;
	uint64_t x323 = 10283219LLU;
	int32_t x324 = INT32_MIN;
	static int32_t t80 = 698;

	t80 = (((x321<=x322)<x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x326 = INT8_MAX;
	int8_t x328 = INT8_MAX;
	volatile int32_t t81 = 1035649100;

	t81 = (((x325<=x326)<x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	int32_t x330 = INT32_MIN;
	uint8_t x331 = UINT8_MAX;
	int8_t x332 = INT8_MIN;

	t82 = (((x329<=x330)<x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MIN;
	uint16_t x335 = 33U;
	static int32_t x336 = 291824267;
	int32_t t83 = -916;

	t83 = (((x333<=x334)<x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x339 = -1;
	int32_t x340 = 419;
	volatile int32_t t84 = -1574001;

	t84 = (((x337<=x338)<x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MAX;
	volatile int8_t x342 = 14;
	static volatile int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MIN;
	int32_t t85 = -2846681;

	t85 = (((x341<=x342)<x343)<=x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	int8_t x346 = -2;
	int8_t x347 = -1;

	t86 = (((x345<=x346)<x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	static int64_t x350 = -81811LL;
	static int16_t x351 = -1220;
	uint8_t x352 = 3U;
	int32_t t87 = 2044;

	t87 = (((x349<=x350)<x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	uint16_t x354 = UINT16_MAX;
	uint8_t x355 = UINT8_MAX;
	volatile int8_t x356 = INT8_MIN;
	static int32_t t88 = -143647;

	t88 = (((x353<=x354)<x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 859;
	int64_t x358 = -1LL;
	int16_t x359 = INT16_MIN;
	static uint32_t x360 = 908662U;
	volatile int32_t t89 = -744827438;

	t89 = (((x357<=x358)<x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x361 = 229081795U;
	uint32_t x362 = 409291U;
	volatile int64_t x364 = INT64_MIN;

	t90 = (((x361<=x362)<x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	volatile uint16_t x367 = UINT16_MAX;
	uint16_t x368 = 0U;
	volatile int32_t t91 = -773015125;

	t91 = (((x365<=x366)<x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = 4100957351740953LL;
	volatile int32_t x370 = -289723372;
	volatile uint16_t x371 = UINT16_MAX;
	int64_t x372 = 119102989616LL;

	t92 = (((x369<=x370)<x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MIN;
	static uint16_t x374 = 402U;
	uint16_t x375 = UINT16_MAX;
	int64_t x376 = 39LL;
	int32_t t93 = 118004;

	t93 = (((x373<=x374)<x375)<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x378 = UINT64_MAX;
	int64_t x379 = -1LL;
	volatile uint32_t x380 = UINT32_MAX;
	int32_t t94 = -560955;

	t94 = (((x377<=x378)<x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = 59451597;
	volatile uint64_t x382 = 12086545215901LLU;
	uint16_t x383 = UINT16_MAX;
	int64_t x384 = INT64_MIN;
	int32_t t95 = -337791;

	t95 = (((x381<=x382)<x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 732136LLU;
	int64_t x386 = INT64_MIN;
	static int32_t x387 = 55396;
	static volatile int32_t t96 = 511958;

	t96 = (((x385<=x386)<x387)<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x391 = INT8_MAX;
	int8_t x392 = INT8_MAX;
	volatile int32_t t97 = 104;

	t97 = (((x389<=x390)<x391)<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = 1;
	int8_t x394 = 3;
	static uint32_t x395 = UINT32_MAX;
	int32_t x396 = INT32_MIN;
	volatile int32_t t98 = 130493;

	t98 = (((x393<=x394)<x395)<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = INT16_MIN;
	int32_t x398 = -1;
	int16_t x399 = INT16_MIN;
	volatile uint32_t x400 = UINT32_MAX;
	volatile int32_t t99 = 46092797;

	t99 = (((x397<=x398)<x399)<=x400);

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
