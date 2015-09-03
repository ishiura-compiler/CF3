#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x8 = 8883653836406842LLU;
int16_t x10 = INT16_MAX;
int64_t x12 = -1LL;
static uint64_t x13 = 1LLU;
static uint32_t t4 = 6811U;
uint8_t x22 = 75U;
volatile int32_t t7 = 304388148;
volatile uint64_t t8 = 18329784LLU;
volatile uint16_t x38 = 173U;
int32_t x40 = -1;
uint8_t x51 = 6U;
uint16_t x53 = UINT16_MAX;
int64_t x59 = -1LL;
static volatile int32_t t15 = -21082149;
static uint16_t x70 = 215U;
static int64_t x73 = INT64_MIN;
volatile uint8_t x84 = 88U;
uint64_t t21 = 292LLU;
uint32_t x90 = UINT32_MAX;
volatile int32_t t22 = -208884;
uint32_t x98 = 5008859U;
int8_t x101 = 0;
uint8_t x102 = 0U;
int8_t x104 = INT8_MIN;
uint64_t x105 = UINT64_MAX;
volatile int64_t t27 = 638978LL;
int32_t x118 = -563481;
volatile int16_t x120 = 154;
int8_t x126 = 1;
volatile int64_t x128 = INT64_MAX;
int32_t x129 = 204668432;
volatile uint16_t x131 = 1U;
int32_t x139 = INT32_MAX;
int64_t x146 = INT64_MAX;
int32_t x152 = -1;
volatile uint32_t t37 = 2182U;
static volatile int16_t x155 = -1;
volatile int32_t x157 = INT32_MIN;
volatile int32_t x158 = 9;
static uint64_t x166 = 281826LLU;
uint16_t x170 = UINT16_MAX;
volatile uint64_t t42 = 9626431LLU;
int64_t x175 = 92117LL;
static int16_t x178 = INT16_MIN;
int32_t t45 = 6150;
uint16_t x187 = 4U;
int16_t x191 = 14;
int32_t t47 = -3615;
int32_t x193 = INT32_MIN;
int16_t x194 = -225;
int32_t x195 = INT32_MIN;
volatile int32_t x196 = INT32_MIN;
int32_t x203 = INT32_MIN;
int64_t x211 = INT64_MIN;
uint64_t x212 = 50366128143389398LLU;
uint64_t t52 = 2601416894058362901LLU;
uint8_t x215 = 0U;
uint8_t x223 = 2U;
volatile uint32_t t58 = 2151U;
int16_t x238 = -532;
uint64_t t59 = 1841274364LLU;
volatile int64_t t62 = 2679903861LL;
static int16_t x266 = 127;
uint32_t x272 = 1479921648U;
int32_t x275 = -401023;
int32_t x277 = 2;
volatile uint8_t x282 = 2U;
volatile int16_t x284 = -1;
volatile uint64_t x285 = UINT64_MAX;
volatile int16_t x298 = INT16_MIN;
uint32_t x303 = 229376U;
static int8_t x310 = 1;
static uint32_t x320 = UINT32_MAX;
uint16_t x321 = 9352U;
static volatile int16_t x323 = INT16_MAX;
int16_t x327 = 5635;
int64_t x329 = -98LL;
int64_t x331 = -133684127746LL;
uint64_t x332 = UINT64_MAX;
volatile int16_t x336 = INT16_MIN;
int32_t t83 = 8;
static volatile uint16_t x339 = UINT16_MAX;
volatile int32_t x340 = INT32_MIN;
volatile int32_t t84 = -1505239;
static volatile uint32_t t85 = 3116499U;
int64_t t86 = -62524401994155390LL;
int64_t x359 = INT64_MAX;
int32_t x365 = 93692828;
int8_t x368 = INT8_MAX;
uint8_t x369 = UINT8_MAX;
uint32_t x371 = UINT32_MAX;
uint32_t x377 = 1U;
int32_t x384 = INT32_MIN;
static uint32_t x385 = 117U;
static volatile int64_t x386 = INT64_MAX;
static int32_t x392 = -1;
uint8_t x396 = 80U;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint64_t x2 = 1586404030542503LLU;
	volatile uint8_t x3 = 0U;
	static volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 46564;

	t0 = (((x1<=x2)^x3)^x4);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 2U;
	uint64_t x6 = 3711022010LLU;
	int16_t x7 = INT16_MAX;
	volatile uint64_t t1 = 975910LLU;

	t1 = (((x5<=x6)^x7)^x8);

	if (t1 != 8883653836439492LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint32_t x11 = 30U;
	int64_t t2 = -12592LL;

	t2 = (((x9<=x10)^x11)^x12);

	if (t2 != -32LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MAX;
	static int8_t x15 = -1;
	int64_t x16 = -118LL;
	volatile int64_t t3 = -9970865568383816LL;

	t3 = (((x13<=x14)^x15)^x16);

	if (t3 != 116LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 9688740U;
	int16_t x18 = 23;
	uint32_t x19 = 59729657U;
	static volatile uint16_t x20 = 0U;

	t4 = (((x17<=x18)^x19)^x20);

	if (t4 != 59729657U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MAX;
	int16_t x23 = INT16_MAX;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -15839;

	t5 = (((x21<=x22)^x23)^x24);

	if (t5 != -2147450881) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 63;
	uint32_t x26 = 34U;
	int32_t x27 = 12;
	int32_t x28 = -1;
	volatile int32_t t6 = 540072257;

	t6 = (((x25<=x26)^x27)^x28);

	if (t6 != -13) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -144760018LL;
	int8_t x30 = 1;
	int8_t x31 = INT8_MIN;
	static volatile int8_t x32 = -1;

	t7 = (((x29<=x30)^x31)^x32);

	if (t7 != 126) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 2647U;
	int64_t x34 = -8204712240644226LL;
	static int64_t x35 = 21LL;
	uint64_t x36 = UINT64_MAX;

	t8 = (((x33<=x34)^x35)^x36);

	if (t8 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile uint16_t x39 = UINT16_MAX;
	static volatile int32_t t9 = 13747;

	t9 = (((x37<=x38)^x39)^x40);

	if (t9 != -65535) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = 2686;
	static int64_t x42 = -72539313159LL;
	int64_t x43 = INT64_MIN;
	uint8_t x44 = 3U;
	volatile int64_t t10 = 379907880121136410LL;

	t10 = (((x41<=x42)^x43)^x44);

	if (t10 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	int32_t x46 = -121427590;
	static int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MIN;
	volatile int64_t t11 = 556080309295722LL;

	t11 = (((x45<=x46)^x47)^x48);

	if (t11 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 12490U;
	uint64_t x50 = UINT64_MAX;
	int64_t x52 = 62LL;
	volatile int64_t t12 = -30379350583063353LL;

	t12 = (((x49<=x50)^x51)^x52);

	if (t12 != 57LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	volatile int8_t x55 = INT8_MIN;
	static uint16_t x56 = UINT16_MAX;
	volatile int32_t t13 = -13325;

	t13 = (((x53<=x54)^x55)^x56);

	if (t13 != -65409) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 21U;
	int8_t x58 = INT8_MIN;
	uint64_t x60 = UINT64_MAX;
	static uint64_t t14 = 216406817LLU;

	t14 = (((x57<=x58)^x59)^x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -9;
	uint32_t x62 = 227123U;
	int8_t x63 = INT8_MIN;
	int32_t x64 = 183565263;

	t15 = (((x61<=x62)^x63)^x64);

	if (t15 != -183565233) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	uint16_t x66 = 15802U;
	int64_t x67 = INT64_MIN;
	int16_t x68 = -1;
	int64_t t16 = 457014289007295LL;

	t16 = (((x65<=x66)^x67)^x68);

	if (t16 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 3110159714LLU;
	int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MAX;
	volatile int64_t t17 = -837583154683202LL;

	t17 = (((x69<=x70)^x71)^x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x74 = -1;
	int32_t x75 = -1;
	int16_t x76 = -1;
	volatile int32_t t18 = -3;

	t18 = (((x73<=x74)^x75)^x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 5358064177LLU;
	volatile int64_t x78 = -1LL;
	static int16_t x79 = -1;
	static int8_t x80 = INT8_MIN;
	int32_t t19 = -1367677;

	t19 = (((x77<=x78)^x79)^x80);

	if (t19 != 126) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	int32_t x82 = -174402;
	int8_t x83 = INT8_MAX;
	int32_t t20 = -14761;

	t20 = (((x81<=x82)^x83)^x84);

	if (t20 != 39) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 24163U;
	int16_t x86 = INT16_MAX;
	uint64_t x87 = 630840836907LLU;
	volatile int8_t x88 = INT8_MIN;

	t21 = (((x85<=x86)^x87)^x88);

	if (t21 != 18446743442868714666LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -6;
	volatile int16_t x91 = INT16_MIN;
	int16_t x92 = INT16_MAX;

	t22 = (((x89<=x90)^x91)^x92);

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	volatile uint8_t x94 = 11U;
	uint8_t x95 = 5U;
	static uint16_t x96 = 1U;
	volatile int32_t t23 = -4146;

	t23 = (((x93<=x94)^x95)^x96);

	if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x97 = UINT32_MAX;
	int32_t x99 = INT32_MAX;
	static volatile uint64_t x100 = 1590LLU;
	uint64_t t24 = 760312137448944LLU;

	t24 = (((x97<=x98)^x99)^x100);

	if (t24 != 2147482057LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x103 = INT32_MIN;
	int32_t t25 = 1287;

	t25 = (((x101<=x102)^x103)^x104);

	if (t25 != 2147483521) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x106 = 0;
	static int8_t x107 = INT8_MAX;
	static int32_t x108 = -1;
	volatile int32_t t26 = 126;

	t26 = (((x105<=x106)^x107)^x108);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = UINT32_MAX;
	int32_t x110 = INT32_MAX;
	volatile int64_t x111 = INT64_MIN;
	int64_t x112 = INT64_MIN;

	t27 = (((x109<=x110)^x111)^x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 8453097U;
	int32_t x114 = INT32_MIN;
	volatile int16_t x115 = 177;
	int64_t x116 = INT64_MIN;
	volatile int64_t t28 = -95LL;

	t28 = (((x113<=x114)^x115)^x116);

	if (t28 != -9223372036854775632LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = -236950;
	int8_t x119 = INT8_MAX;
	volatile int32_t t29 = 30575000;

	t29 = (((x117<=x118)^x119)^x120);

	if (t29 != 229) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	uint32_t x122 = 398U;
	volatile int16_t x123 = INT16_MIN;
	static uint64_t x124 = UINT64_MAX;
	volatile uint64_t t30 = 23418235127LLU;

	t30 = (((x121<=x122)^x123)^x124);

	if (t30 != 32766LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	static int64_t x127 = INT64_MIN;
	static int64_t t31 = 2102664166LL;

	t31 = (((x125<=x126)^x127)^x128);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x130 = 18U;
	static uint32_t x132 = 29663370U;
	uint32_t t32 = 170313U;

	t32 = (((x129<=x130)^x131)^x132);

	if (t32 != 29663371U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = 111495377568944LLU;
	uint64_t x134 = 3211593735201LLU;
	static volatile int32_t x135 = -26;
	int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 19582832;

	t33 = (((x133<=x134)^x135)^x136);

	if (t33 != 32742) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 108U;
	int8_t x138 = INT8_MAX;
	static int32_t x140 = INT32_MIN;
	int32_t t34 = 856235949;

	t34 = (((x137<=x138)^x139)^x140);

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 179735125085LL;
	static int8_t x142 = -1;
	static int32_t x143 = 41201053;
	volatile int64_t x144 = 3774556842899LL;
	volatile int64_t t35 = 75123263555LL;

	t35 = (((x141<=x142)^x143)^x144);

	if (t35 != 3774595335694LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = UINT16_MAX;
	uint8_t x147 = 21U;
	int64_t x148 = INT64_MIN;
	static int64_t t36 = 60086757244LL;

	t36 = (((x145<=x146)^x147)^x148);

	if (t36 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = -1;
	uint8_t x150 = UINT8_MAX;
	volatile uint32_t x151 = 117U;

	t37 = (((x149<=x150)^x151)^x152);

	if (t37 != 4294967179U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	static volatile uint32_t x154 = 432911847U;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = -12003028;

	t38 = (((x153<=x154)^x155)^x156);

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x159 = INT16_MIN;
	static uint64_t x160 = 95572886LLU;
	volatile uint64_t t39 = 472565596LLU;

	t39 = (((x157<=x158)^x159)^x160);

	if (t39 != 18446744073613988759LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 146496271LLU;
	int8_t x162 = -1;
	volatile int64_t x163 = INT64_MIN;
	uint32_t x164 = 2458303U;
	volatile int64_t t40 = -391457249207LL;

	t40 = (((x161<=x162)^x163)^x164);

	if (t40 != -9223372036852317506LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = -1;
	uint32_t x167 = UINT32_MAX;
	volatile int8_t x168 = INT8_MAX;
	uint32_t t41 = 117876429U;

	t41 = (((x165<=x166)^x167)^x168);

	if (t41 != 4294967168U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -9282;
	volatile int16_t x171 = INT16_MIN;
	static uint64_t x172 = 93465854213906LLU;

	t42 = (((x169<=x170)^x171)^x172);

	if (t42 != 18446650607855370003LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 44100079U;
	static int16_t x174 = -3832;
	static uint32_t x176 = UINT32_MAX;
	int64_t t43 = 19248584LL;

	t43 = (((x173<=x174)^x175)^x176);

	if (t43 != 4294875179LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	int32_t x179 = INT32_MIN;
	int64_t x180 = INT64_MIN;
	volatile int64_t t44 = 26832948978486LL;

	t44 = (((x177<=x178)^x179)^x180);

	if (t44 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int32_t x182 = -1;
	int16_t x183 = INT16_MIN;
	int16_t x184 = INT16_MAX;

	t45 = (((x181<=x182)^x183)^x184);

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	int16_t x186 = INT16_MAX;
	int32_t x188 = 5395677;
	static int32_t t46 = 0;

	t46 = (((x185<=x186)^x187)^x188);

	if (t46 != 5395672) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 7009300571861519635LLU;
	int64_t x190 = -77902805LL;
	volatile int8_t x192 = INT8_MAX;

	t47 = (((x189<=x190)^x191)^x192);

	if (t47 != 112) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t t48 = -20056026;

	t48 = (((x193<=x194)^x195)^x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = 56U;
	static volatile int64_t x198 = INT64_MIN;
	uint32_t x199 = UINT32_MAX;
	int64_t x200 = INT64_MIN;
	volatile int64_t t49 = 17365LL;

	t49 = (((x197<=x198)^x199)^x200);

	if (t49 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 46990411;
	int64_t x202 = 81054912809LL;
	int16_t x204 = -1;
	int32_t t50 = 1577146;

	t50 = (((x201<=x202)^x203)^x204);

	if (t50 != 2147483646) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = INT64_MIN;
	static int32_t x206 = -1;
	volatile int32_t x207 = 21790;
	int8_t x208 = INT8_MAX;
	volatile int32_t t51 = -5646130;

	t51 = (((x205<=x206)^x207)^x208);

	if (t51 != 21856) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -6;
	volatile int32_t x210 = 149047;

	t52 = (((x209<=x210)^x211)^x212);

	if (t52 != 9273738164998165207LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static int8_t x214 = INT8_MIN;
	int8_t x216 = 5;
	static volatile int32_t t53 = -1;

	t53 = (((x213<=x214)^x215)^x216);

	if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	uint16_t x218 = UINT16_MAX;
	static int16_t x219 = INT16_MIN;
	int16_t x220 = -31;
	volatile int32_t t54 = 2;

	t54 = (((x217<=x218)^x219)^x220);

	if (t54 != 32737) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int32_t x222 = INT32_MAX;
	uint64_t x224 = 938529600456LLU;
	uint64_t t55 = 4011822579182536972LLU;

	t55 = (((x221<=x222)^x223)^x224);

	if (t55 != 938529600459LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 2639U;
	uint16_t x226 = UINT16_MAX;
	static volatile uint32_t x227 = 222U;
	static volatile uint8_t x228 = 6U;
	uint32_t t56 = 1542882U;

	t56 = (((x225<=x226)^x227)^x228);

	if (t56 != 217U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	uint32_t x230 = 425076950U;
	int16_t x231 = -1;
	int8_t x232 = INT8_MIN;
	static volatile int32_t t57 = 0;

	t57 = (((x229<=x230)^x231)^x232);

	if (t57 != 126) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -31;
	int16_t x234 = INT16_MIN;
	uint32_t x235 = 130068U;
	static int16_t x236 = -1;

	t58 = (((x233<=x234)^x235)^x236);

	if (t58 != 4294837227U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	volatile uint64_t x239 = 2507558LLU;
	int32_t x240 = INT32_MAX;

	t59 = (((x237<=x238)^x239)^x240);

	if (t59 != 2144976089LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	static uint64_t x242 = UINT64_MAX;
	uint8_t x243 = 2U;
	uint16_t x244 = UINT16_MAX;
	int32_t t60 = 31304030;

	t60 = (((x241<=x242)^x243)^x244);

	if (t60 != 65532) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x245 = 0U;
	volatile int8_t x246 = 0;
	int8_t x247 = INT8_MIN;
	volatile int64_t x248 = INT64_MIN;
	volatile int64_t t61 = -7613926777LL;

	t61 = (((x245<=x246)^x247)^x248);

	if (t61 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	volatile uint8_t x250 = 43U;
	volatile uint16_t x251 = UINT16_MAX;
	int64_t x252 = -455258040474056558LL;

	t62 = (((x249<=x250)^x251)^x252);

	if (t62 != -455258040474028180LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 177309036;
	static int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MAX;
	volatile int32_t x256 = INT32_MIN;
	int64_t t63 = 23402547834910980LL;

	t63 = (((x253<=x254)^x255)^x256);

	if (t63 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = UINT8_MAX;
	volatile uint64_t x258 = UINT64_MAX;
	volatile int64_t x259 = -1LL;
	static volatile int64_t x260 = INT64_MAX;
	volatile int64_t t64 = 482900185LL;

	t64 = (((x257<=x258)^x259)^x260);

	if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MAX;
	int64_t x262 = INT64_MIN;
	int16_t x263 = -258;
	uint8_t x264 = 10U;
	volatile int32_t t65 = -858;

	t65 = (((x261<=x262)^x263)^x264);

	if (t65 != -268) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 524988054139LLU;
	volatile uint8_t x267 = 0U;
	int16_t x268 = INT16_MIN;
	int32_t t66 = 402303;

	t66 = (((x265<=x266)^x267)^x268);

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -2822;
	static uint16_t x270 = 11037U;
	uint16_t x271 = UINT16_MAX;
	static uint32_t t67 = 413654313U;

	t67 = (((x269<=x270)^x271)^x272);

	if (t67 != 1479880718U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 245U;
	uint8_t x274 = UINT8_MAX;
	static uint16_t x276 = UINT16_MAX;
	int32_t t68 = 177168221;

	t68 = (((x273<=x274)^x275)^x276);

	if (t68 != -450945) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = INT16_MIN;
	int16_t x279 = INT16_MIN;
	int32_t x280 = -1;
	int32_t t69 = 4989514;

	t69 = (((x277<=x278)^x279)^x280);

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = -29;
	static volatile uint8_t x283 = UINT8_MAX;
	int32_t t70 = -1418;

	t70 = (((x281<=x282)^x283)^x284);

	if (t70 != -255) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x286 = UINT16_MAX;
	int32_t x287 = -108848;
	int8_t x288 = -1;
	int32_t t71 = -9972;

	t71 = (((x285<=x286)^x287)^x288);

	if (t71 != 108847) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MIN;
	volatile int8_t x290 = 0;
	uint8_t x291 = 0U;
	int16_t x292 = -1;
	int32_t t72 = 649;

	t72 = (((x289<=x290)^x291)^x292);

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 37171U;
	int64_t x294 = INT64_MIN;
	volatile int32_t x295 = -224126541;
	int16_t x296 = -6;
	volatile int32_t t73 = 23610;

	t73 = (((x293<=x294)^x295)^x296);

	if (t73 != 224126537) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = INT16_MIN;
	int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MAX;
	int64_t t74 = -136048584048727LL;

	t74 = (((x297<=x298)^x299)^x300);

	if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = 1014U;
	uint64_t x302 = UINT64_MAX;
	uint16_t x304 = UINT16_MAX;
	uint32_t t75 = 175U;

	t75 = (((x301<=x302)^x303)^x304);

	if (t75 != 229374U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	static int16_t x306 = INT16_MAX;
	int8_t x307 = -5;
	static int8_t x308 = 2;
	int32_t t76 = 29454;

	t76 = (((x305<=x306)^x307)^x308);

	if (t76 != -8) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = INT8_MIN;
	int64_t x311 = INT64_MIN;
	int32_t x312 = INT32_MIN;
	volatile int64_t t77 = -4LL;

	t77 = (((x309<=x310)^x311)^x312);

	if (t77 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	int64_t x314 = INT64_MAX;
	volatile uint16_t x315 = 626U;
	volatile int64_t x316 = INT64_MIN;
	volatile int64_t t78 = 30549827173LL;

	t78 = (((x313<=x314)^x315)^x316);

	if (t78 != -9223372036854775181LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = -1;
	uint32_t x318 = 60237U;
	static int8_t x319 = INT8_MIN;
	volatile uint32_t t79 = 62169U;

	t79 = (((x317<=x318)^x319)^x320);

	if (t79 != 127U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x322 = 7330593LLU;
	static uint16_t x324 = 112U;
	static volatile int32_t t80 = -10803;

	t80 = (((x321<=x322)^x323)^x324);

	if (t80 != 32654) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	volatile uint64_t x326 = 9140826LLU;
	int64_t x328 = -1LL;
	static int64_t t81 = 3151LL;

	t81 = (((x325<=x326)^x327)^x328);

	if (t81 != -5635LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x330 = -1;
	volatile uint64_t t82 = 40083544272115346LLU;

	t82 = (((x329<=x330)^x331)^x332);

	if (t82 != 133684127744LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	static int32_t x334 = INT32_MIN;
	uint16_t x335 = 0U;

	t83 = (((x333<=x334)^x335)^x336);

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MIN;

	t84 = (((x337<=x338)^x339)^x340);

	if (t84 != -2147418113) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	volatile int8_t x342 = -1;
	static uint32_t x343 = 125915U;
	static int8_t x344 = INT8_MAX;

	t85 = (((x341<=x342)^x343)^x344);

	if (t85 != 125860U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 8LL;
	uint16_t x346 = UINT16_MAX;
	volatile int8_t x347 = -1;
	static int64_t x348 = -1LL;

	t86 = (((x345<=x346)^x347)^x348);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = UINT16_MAX;
	uint8_t x350 = 8U;
	int16_t x351 = INT16_MIN;
	uint16_t x352 = 99U;
	volatile int32_t t87 = -576561606;

	t87 = (((x349<=x350)^x351)^x352);

	if (t87 != -32669) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	static int16_t x354 = -6;
	int32_t x355 = INT32_MAX;
	int64_t x356 = INT64_MAX;
	static int64_t t88 = -898251942LL;

	t88 = (((x353<=x354)^x355)^x356);

	if (t88 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	volatile uint32_t x358 = 2469662U;
	int64_t x360 = INT64_MAX;
	volatile int64_t t89 = 3LL;

	t89 = (((x357<=x358)^x359)^x360);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = 54;
	int8_t x362 = INT8_MIN;
	int32_t x363 = 1;
	int64_t x364 = 1LL;
	volatile int64_t t90 = -86342470LL;

	t90 = (((x361<=x362)^x363)^x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x366 = 6399LLU;
	int16_t x367 = 57;
	static int32_t t91 = 18984;

	t91 = (((x365<=x366)^x367)^x368);

	if (t91 != 70) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = INT16_MIN;
	int8_t x372 = -27;
	volatile uint32_t t92 = 542092U;

	t92 = (((x369<=x370)^x371)^x372);

	if (t92 != 26U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	uint16_t x374 = 334U;
	int16_t x375 = INT16_MIN;
	int8_t x376 = 31;
	static volatile int32_t t93 = -4553;

	t93 = (((x373<=x374)^x375)^x376);

	if (t93 != -32738) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = INT8_MIN;
	static uint64_t x379 = UINT64_MAX;
	int8_t x380 = INT8_MIN;
	uint64_t t94 = 4592623LLU;

	t94 = (((x377<=x378)^x379)^x380);

	if (t94 != 126LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MAX;
	int64_t x382 = -821639849911LL;
	int32_t x383 = -79;
	static volatile int32_t t95 = -646498086;

	t95 = (((x381<=x382)^x383)^x384);

	if (t95 != 2147483569) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x387 = 65117532LLU;
	static int16_t x388 = INT16_MAX;
	volatile uint64_t t96 = 238152LLU;

	t96 = (((x385<=x386)^x387)^x388);

	if (t96 != 65135266LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MAX;
	int32_t x390 = INT32_MIN;
	int8_t x391 = INT8_MIN;
	volatile int32_t t97 = -122722020;

	t97 = (((x389<=x390)^x391)^x392);

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = UINT32_MAX;
	int16_t x394 = -1;
	volatile int64_t x395 = INT64_MIN;
	volatile int64_t t98 = -1LL;

	t98 = (((x393<=x394)^x395)^x396);

	if (t98 != -9223372036854775727LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 379U;
	static uint16_t x398 = UINT16_MAX;
	static uint64_t x399 = 4295861005135LLU;
	int64_t x400 = 116850903937349782LL;
	uint64_t t99 = 46202546LLU;

	t99 = (((x397<=x398)^x399)^x400);

	if (t99 != 116848051755848664LLU) { NG(); } else { ; }
	
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

