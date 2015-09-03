#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = 7LLU;
static uint16_t x8 = 3U;
int32_t x15 = 389;
volatile int32_t t3 = -29;
int16_t x17 = INT16_MIN;
int32_t x19 = -2036217;
static int16_t x20 = -1;
static uint64_t x27 = 254132213125LLU;
int8_t x28 = 0;
int64_t x33 = INT64_MIN;
int32_t t7 = -13227169;
uint32_t x38 = 28607U;
static uint64_t x39 = UINT64_MAX;
volatile int32_t x45 = -61028;
uint64_t x46 = 1LLU;
int16_t x48 = -26;
static uint8_t x49 = UINT8_MAX;
static int64_t x50 = INT64_MIN;
static int32_t x55 = INT32_MIN;
uint8_t x57 = 0U;
uint16_t x61 = 7242U;
static volatile int32_t t14 = -55126979;
int64_t x69 = 1911723744665549590LL;
static int8_t x78 = -6;
int32_t x81 = INT32_MIN;
uint32_t x82 = 2073040648U;
volatile int32_t t20 = -18851;
volatile int32_t x96 = -1;
int16_t x97 = INT16_MIN;
static int64_t x103 = 717563335312LL;
int32_t x106 = INT32_MIN;
uint32_t x107 = 23399123U;
int64_t x109 = INT64_MIN;
int64_t x110 = INT64_MIN;
uint64_t x119 = 891749922311LLU;
uint32_t x120 = 9994U;
uint32_t t27 = 1U;
static int8_t x133 = INT8_MIN;
uint64_t x140 = UINT64_MAX;
uint64_t t31 = 505066LLU;
static int64_t x144 = -116641583LL;
uint16_t x145 = UINT16_MAX;
uint16_t x146 = UINT16_MAX;
static volatile int32_t x165 = -266495906;
int8_t x168 = INT8_MAX;
volatile int8_t x170 = -1;
int32_t t38 = -8849;
int64_t x175 = -2091221LL;
static volatile uint64_t x184 = 366158901735115970LLU;
uint16_t x185 = 4204U;
uint32_t x192 = 1778920375U;
uint32_t t43 = 6499779U;
int32_t x193 = -49909191;
int32_t t47 = -2;
uint8_t x220 = 1U;
uint32_t x226 = 29U;
uint8_t x233 = 2U;
int8_t x239 = INT8_MIN;
int8_t x240 = INT8_MAX;
int64_t x241 = -4844427LL;
static uint16_t x251 = 175U;
uint64_t x257 = 11066554815LLU;
int8_t x258 = INT8_MAX;
int32_t x261 = -25807;
int64_t x266 = 2744857121009708LL;
volatile int64_t x276 = INT64_MAX;
static int8_t x286 = 1;
int64_t x287 = INT64_MAX;
int8_t x288 = INT8_MIN;
int32_t x293 = INT32_MIN;
uint8_t x294 = UINT8_MAX;
int16_t x297 = 1;
volatile int8_t x307 = -1;
int64_t x309 = 134924902977LL;
int16_t x317 = 13;
volatile uint32_t x323 = 18U;
static int64_t x325 = INT64_MIN;
int8_t x332 = INT8_MIN;
volatile int32_t t74 = -191684;
static uint32_t x336 = UINT32_MAX;
uint64_t x341 = 36131767LLU;
uint32_t x345 = 1047588U;
int32_t x350 = INT32_MAX;
int64_t t80 = 38723007294699608LL;
int16_t x360 = INT16_MIN;
uint8_t x376 = UINT8_MAX;
int64_t x387 = -1055LL;
int64_t x400 = INT64_MAX;
static int32_t x410 = INT32_MAX;
static int8_t x413 = INT8_MAX;
uint64_t t93 = 5371309068362LLU;
static int16_t x430 = 0;
int64_t x431 = INT64_MIN;
int8_t x434 = -1;
static volatile uint32_t x437 = 6413U;
int16_t x439 = 5741;
uint16_t x455 = UINT16_MAX;


void f0(void) {
	int8_t x1 = 7;
	static uint16_t x2 = UINT16_MAX;
	int64_t x3 = INT64_MAX;
	volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -1;

	t0 = ((x1<(x2|x3))-x4);

	if (t0 != 129) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x6 = 682820314U;
	volatile int64_t x7 = 2975LL;
	int32_t t1 = 66;

	t1 = ((x5<(x6|x7))-x8);

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int32_t x10 = 24451;
	volatile int64_t x11 = INT64_MIN;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 14676117;

	t2 = ((x9<(x10|x11))-x12);

	if (t2 != 32768) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int32_t x14 = 3931024;
	int8_t x16 = -2;

	t3 = ((x13<(x14|x15))-x16);

	if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	int32_t t4 = 63831;

	t4 = ((x17<(x18|x19))-x20);

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 5U;
	volatile uint32_t x22 = 53327233U;
	int32_t x23 = INT32_MIN;
	int64_t x24 = 649127056241454LL;
	int64_t t5 = -16LL;

	t5 = ((x21<(x22|x23))-x24);

	if (t5 != -649127056241453LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -1;
	uint32_t x26 = 4657U;
	int32_t t6 = 453016187;

	t6 = ((x25<(x26|x27))-x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = 13;
	uint8_t x35 = 0U;
	volatile int32_t x36 = INT32_MAX;

	t7 = ((x33<(x34|x35))-x36);

	if (t7 != -2147483646) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -4922;
	int32_t x40 = -152665400;
	int32_t t8 = -3921112;

	t8 = ((x37<(x38|x39))-x40);

	if (t8 != 152665401) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x41 = UINT32_MAX;
	int8_t x42 = -1;
	int64_t x43 = INT64_MIN;
	int64_t x44 = 1297550LL;
	volatile int64_t t9 = 35201LL;

	t9 = ((x41<(x42|x43))-x44);

	if (t9 != -1297550LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x47 = -1LL;
	volatile int32_t t10 = 877910;

	t10 = ((x45<(x46|x47))-x48);

	if (t10 != 27) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x51 = INT16_MIN;
	int16_t x52 = 10380;
	int32_t t11 = 8880870;

	t11 = ((x49<(x50|x51))-x52);

	if (t11 != -10380) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 2971U;
	static uint16_t x54 = 6U;
	static uint16_t x56 = 45U;
	volatile int32_t t12 = 3827;

	t12 = ((x53<(x54|x55))-x56);

	if (t12 != -45) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x58 = INT8_MIN;
	static int64_t x59 = -135598970942167LL;
	volatile int64_t x60 = 74699632494691LL;
	int64_t t13 = 693419815LL;

	t13 = ((x57<(x58|x59))-x60);

	if (t13 != -74699632494691LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x62 = -1;
	uint8_t x63 = UINT8_MAX;
	uint16_t x64 = 234U;

	t14 = ((x61<(x62|x63))-x64);

	if (t14 != -234) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	uint8_t x66 = UINT8_MAX;
	uint16_t x67 = UINT16_MAX;
	static int16_t x68 = INT16_MIN;
	volatile int32_t t15 = -3764;

	t15 = ((x65<(x66|x67))-x68);

	if (t15 != 32769) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x70 = 0U;
	uint16_t x71 = 4821U;
	volatile uint32_t x72 = 2127U;
	volatile uint32_t t16 = 43666U;

	t16 = ((x69<(x70|x71))-x72);

	if (t16 != 4294965169U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x73 = 324825311;
	int64_t x74 = INT64_MIN;
	static uint32_t x75 = 190647U;
	static int16_t x76 = 22;
	static int32_t t17 = 3;

	t17 = ((x73<(x74|x75))-x76);

	if (t17 != -22) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x77 = 31U;
	volatile int16_t x79 = INT16_MIN;
	volatile int32_t x80 = -1;
	volatile int32_t t18 = 48;

	t18 = ((x77<(x78|x79))-x80);

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x83 = INT32_MAX;
	uint16_t x84 = 5122U;
	volatile int32_t t19 = -164782735;

	t19 = ((x81<(x82|x83))-x84);

	if (t19 != -5122) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 1914759006371LLU;
	static int64_t x90 = 189651368851LL;
	volatile int32_t x91 = -1;
	static volatile int16_t x92 = -1;

	t20 = ((x89<(x90|x91))-x92);

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = UINT64_MAX;
	int32_t x94 = INT32_MAX;
	int16_t x95 = INT16_MAX;
	volatile int32_t t21 = 2;

	t21 = ((x93<(x94|x95))-x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x98 = 6U;
	int8_t x99 = 0;
	uint8_t x100 = 1U;
	int32_t t22 = -7413;

	t22 = ((x97<(x98|x99))-x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MAX;
	uint32_t x102 = 128526U;
	uint32_t x104 = 2555U;
	uint32_t t23 = 237564U;

	t23 = ((x101<(x102|x103))-x104);

	if (t23 != 4294964741U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 11U;
	int32_t x108 = INT32_MAX;
	int32_t t24 = -920;

	t24 = ((x105<(x106|x107))-x108);

	if (t24 != -2147483646) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x111 = UINT16_MAX;
	int8_t x112 = INT8_MIN;
	volatile int32_t t25 = -1941;

	t25 = ((x109<(x110|x111))-x112);

	if (t25 != 129) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x113 = UINT64_MAX;
	volatile uint16_t x114 = 351U;
	uint8_t x115 = 0U;
	int16_t x116 = INT16_MAX;
	int32_t t26 = 7276772;

	t26 = ((x113<(x114|x115))-x116);

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	int32_t x118 = 390;

	t27 = ((x117<(x118|x119))-x120);

	if (t27 != 4294957302U) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = -6;
	int8_t x122 = INT8_MAX;
	int32_t x123 = INT32_MIN;
	int32_t x124 = INT32_MAX;
	int32_t t28 = 14903062;

	t28 = ((x121<(x122|x123))-x124);

	if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x129 = UINT8_MAX;
	static uint64_t x130 = 1073270700LLU;
	int8_t x131 = -1;
	volatile uint32_t x132 = UINT32_MAX;
	volatile uint32_t t29 = 1772107847U;

	t29 = ((x129<(x130|x131))-x132);

	if (t29 != 2U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x134 = INT32_MAX;
	volatile int32_t x135 = 15962;
	volatile uint32_t x136 = UINT32_MAX;
	uint32_t t30 = 499126150U;

	t30 = ((x133<(x134|x135))-x136);

	if (t30 != 2U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x137 = UINT64_MAX;
	static volatile uint32_t x138 = UINT32_MAX;
	volatile int8_t x139 = -1;

	t31 = ((x137<(x138|x139))-x140);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = 3757875U;
	static int8_t x142 = INT8_MAX;
	volatile int16_t x143 = INT16_MAX;
	int64_t t32 = 3LL;

	t32 = ((x141<(x142|x143))-x144);

	if (t32 != 116641583LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x147 = INT32_MIN;
	int8_t x148 = -3;
	volatile int32_t t33 = -14887840;

	t33 = ((x145<(x146|x147))-x148);

	if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = INT8_MIN;
	int64_t x150 = INT64_MIN;
	volatile int64_t x151 = 15893970207LL;
	volatile uint16_t x152 = 367U;
	static int32_t t34 = 0;

	t34 = ((x149<(x150|x151))-x152);

	if (t34 != -367) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x153 = INT32_MIN;
	int16_t x154 = -18;
	int64_t x155 = -1LL;
	int8_t x156 = INT8_MAX;
	volatile int32_t t35 = 860009712;

	t35 = ((x153<(x154|x155))-x156);

	if (t35 != -126) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x157 = 253702212792379LLU;
	int32_t x158 = INT32_MIN;
	int8_t x159 = -11;
	static int8_t x160 = 0;
	static int32_t t36 = 7;

	t36 = ((x157<(x158|x159))-x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x166 = -940;
	int8_t x167 = 0;
	static volatile int32_t t37 = -1027886;

	t37 = ((x165<(x166|x167))-x168);

	if (t37 != -126) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x169 = INT16_MIN;
	int32_t x171 = INT32_MIN;
	int32_t x172 = -1;

	t38 = ((x169<(x170|x171))-x172);

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	static int32_t x174 = -409431192;
	uint32_t x176 = 1U;
	uint32_t t39 = UINT32_MAX;

	t39 = ((x173<(x174|x175))-x176);

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x177 = 3512573;
	volatile int8_t x178 = INT8_MAX;
	uint32_t x179 = 10784U;
	int32_t x180 = INT32_MAX;
	static volatile int32_t t40 = -11969741;

	t40 = ((x177<(x178|x179))-x180);

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x181 = -1;
	static int32_t x182 = -524179753;
	int32_t x183 = INT32_MAX;
	uint64_t t41 = 917076145114019920LLU;

	t41 = ((x181<(x182|x183))-x184);

	if (t41 != 18080585171974435646LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x186 = -1;
	int8_t x187 = -1;
	uint64_t x188 = UINT64_MAX;
	uint64_t t42 = 135501726381LLU;

	t42 = ((x185<(x186|x187))-x188);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = -3721807903001930LL;
	int64_t x190 = INT64_MIN;
	int8_t x191 = -12;

	t43 = ((x189<(x190|x191))-x192);

	if (t43 != 2516046922U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x194 = INT16_MAX;
	int64_t x195 = INT64_MAX;
	int8_t x196 = INT8_MAX;
	volatile int32_t t44 = -15491018;

	t44 = ((x193<(x194|x195))-x196);

	if (t44 != -126) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = -7045313;
	static uint32_t x198 = UINT32_MAX;
	volatile int16_t x199 = INT16_MIN;
	uint16_t x200 = 11U;
	int32_t t45 = 60310;

	t45 = ((x197<(x198|x199))-x200);

	if (t45 != -10) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = -1LL;
	uint64_t x202 = UINT64_MAX;
	volatile uint64_t x203 = 1LLU;
	volatile int16_t x204 = -146;
	int32_t t46 = 8765851;

	t46 = ((x201<(x202|x203))-x204);

	if (t46 != 146) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MAX;
	uint8_t x206 = UINT8_MAX;
	uint64_t x207 = UINT64_MAX;
	int8_t x208 = INT8_MIN;

	t47 = ((x205<(x206|x207))-x208);

	if (t47 != 129) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = INT8_MIN;
	int32_t x210 = INT32_MAX;
	int16_t x211 = INT16_MAX;
	int16_t x212 = -1;
	static int32_t t48 = 79883585;

	t48 = ((x209<(x210|x211))-x212);

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x213 = INT64_MIN;
	int64_t x214 = INT64_MIN;
	uint8_t x215 = UINT8_MAX;
	int16_t x216 = INT16_MIN;
	int32_t t49 = 3760;

	t49 = ((x213<(x214|x215))-x216);

	if (t49 != 32769) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MIN;
	int16_t x218 = -135;
	volatile int64_t x219 = INT64_MIN;
	static int32_t t50 = -4109047;

	t50 = ((x217<(x218|x219))-x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = INT64_MIN;
	int16_t x222 = INT16_MAX;
	int32_t x223 = -65028547;
	int16_t x224 = -72;
	int32_t t51 = 2;

	t51 = ((x221<(x222|x223))-x224);

	if (t51 != 73) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = -27;
	static volatile uint16_t x227 = 22591U;
	uint32_t x228 = 7242527U;
	uint32_t t52 = 15U;

	t52 = ((x225<(x226|x227))-x228);

	if (t52 != 4287724769U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x234 = INT8_MAX;
	volatile int8_t x235 = INT8_MAX;
	int16_t x236 = -405;
	volatile int32_t t53 = 55146;

	t53 = ((x233<(x234|x235))-x236);

	if (t53 != 406) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x237 = -7270;
	uint32_t x238 = 3U;
	volatile int32_t t54 = 59467925;

	t54 = ((x237<(x238|x239))-x240);

	if (t54 != -126) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x242 = 0;
	uint8_t x243 = 13U;
	static int64_t x244 = 25024359LL;
	volatile int64_t t55 = -16669561677330813LL;

	t55 = ((x241<(x242|x243))-x244);

	if (t55 != -25024358LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x249 = 97U;
	int8_t x250 = INT8_MIN;
	uint16_t x252 = UINT16_MAX;
	int32_t t56 = -313553;

	t56 = ((x249<(x250|x251))-x252);

	if (t56 != -65535) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = INT16_MAX;
	volatile int32_t x254 = INT32_MAX;
	volatile uint32_t x255 = 3U;
	int64_t x256 = INT64_MAX;
	volatile int64_t t57 = 35493666036861LL;

	t57 = ((x253<(x254|x255))-x256);

	if (t57 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x259 = 82905544473780917LLU;
	int8_t x260 = 14;
	volatile int32_t t58 = -2754203;

	t58 = ((x257<(x258|x259))-x260);

	if (t58 != -13) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x262 = -1150;
	int32_t x263 = INT32_MIN;
	uint64_t x264 = 4905LLU;
	volatile uint64_t t59 = 486463340941760LLU;

	t59 = ((x261<(x262|x263))-x264);

	if (t59 != 18446744073709546712LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x265 = INT8_MIN;
	int64_t x267 = INT64_MIN;
	static int32_t x268 = -10361216;
	int32_t t60 = 195804649;

	t60 = ((x265<(x266|x267))-x268);

	if (t60 != 10361216) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x273 = 1;
	volatile uint16_t x274 = 523U;
	static int8_t x275 = -49;
	int64_t t61 = 554713734620686168LL;

	t61 = ((x273<(x274|x275))-x276);

	if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x281 = INT64_MIN;
	static int32_t x282 = -1;
	uint32_t x283 = 1266U;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t62 = -714751791;

	t62 = ((x281<(x282|x283))-x284);

	if (t62 != 32769) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x285 = -54;
	int32_t t63 = -1934699;

	t63 = ((x285<(x286|x287))-x288);

	if (t63 != 129) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x289 = INT64_MIN;
	int8_t x290 = 51;
	volatile int32_t x291 = -53939;
	int8_t x292 = INT8_MAX;
	volatile int32_t t64 = 2;

	t64 = ((x289<(x290|x291))-x292);

	if (t64 != -126) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x295 = UINT8_MAX;
	int8_t x296 = INT8_MIN;
	static volatile int32_t t65 = -1;

	t65 = ((x293<(x294|x295))-x296);

	if (t65 != 129) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x298 = -2LL;
	int32_t x299 = 384;
	int8_t x300 = INT8_MAX;
	static volatile int32_t t66 = -391046;

	t66 = ((x297<(x298|x299))-x300);

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = INT32_MIN;
	int16_t x302 = -6576;
	static uint32_t x303 = 499679U;
	static int32_t x304 = -3918258;
	int32_t t67 = -6791;

	t67 = ((x301<(x302|x303))-x304);

	if (t67 != 3918259) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x305 = 16U;
	int16_t x306 = INT16_MIN;
	int8_t x308 = 38;
	volatile int32_t t68 = 18234;

	t68 = ((x305<(x306|x307))-x308);

	if (t68 != -38) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x310 = INT64_MIN;
	static volatile int8_t x311 = 1;
	int16_t x312 = -14;
	static int32_t t69 = -24516396;

	t69 = ((x309<(x310|x311))-x312);

	if (t69 != 14) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x313 = -230073155212LL;
	volatile uint32_t x314 = UINT32_MAX;
	static int8_t x315 = -1;
	static uint8_t x316 = 9U;
	volatile int32_t t70 = 1697227;

	t70 = ((x313<(x314|x315))-x316);

	if (t70 != -8) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x318 = -192302462LL;
	volatile int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MAX;
	int64_t t71 = 20589306959741395LL;

	t71 = ((x317<(x318|x319))-x320);

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x321 = 8612024LLU;
	uint32_t x322 = UINT32_MAX;
	static uint64_t x324 = 33972080316LLU;
	uint64_t t72 = 865430284LLU;

	t72 = ((x321<(x322|x323))-x324);

	if (t72 != 18446744039737471301LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x326 = INT64_MIN;
	volatile int32_t x327 = INT32_MIN;
	uint32_t x328 = UINT32_MAX;
	static volatile uint32_t t73 = 48U;

	t73 = ((x325<(x326|x327))-x328);

	if (t73 != 2U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x329 = -25;
	int32_t x330 = INT32_MIN;
	int16_t x331 = INT16_MIN;

	t74 = ((x329<(x330|x331))-x332);

	if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x333 = INT8_MIN;
	static uint16_t x334 = 6268U;
	int32_t x335 = 136;
	uint32_t t75 = 5U;

	t75 = ((x333<(x334|x335))-x336);

	if (t75 != 2U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x337 = INT8_MIN;
	static int32_t x338 = INT32_MAX;
	uint64_t x339 = 25289767LLU;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t76 = 1274148642992158977LLU;

	t76 = ((x337<(x338|x339))-x340);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x342 = -409975958LL;
	int64_t x343 = INT64_MAX;
	uint16_t x344 = UINT16_MAX;
	static int32_t t77 = -7467;

	t77 = ((x341<(x342|x343))-x344);

	if (t77 != -65534) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x346 = 4LLU;
	int8_t x347 = 10;
	uint64_t x348 = 6440372045LLU;
	volatile uint64_t t78 = 37194202636211690LLU;

	t78 = ((x345<(x346|x347))-x348);

	if (t78 != 18446744067269179571LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x349 = UINT8_MAX;
	volatile uint8_t x351 = 123U;
	int64_t x352 = -1LL;
	int64_t t79 = 613745LL;

	t79 = ((x349<(x350|x351))-x352);

	if (t79 != 2LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x353 = UINT8_MAX;
	volatile uint8_t x354 = 31U;
	int64_t x355 = INT64_MIN;
	int64_t x356 = -214120LL;

	t80 = ((x353<(x354|x355))-x356);

	if (t80 != 214120LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x357 = 34266105LLU;
	int8_t x358 = INT8_MIN;
	int32_t x359 = INT32_MAX;
	int32_t t81 = 161800657;

	t81 = ((x357<(x358|x359))-x360);

	if (t81 != 32769) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x361 = INT64_MAX;
	static int16_t x362 = INT16_MIN;
	uint64_t x363 = 4520081949269574359LLU;
	volatile uint64_t x364 = 10943192533978054LLU;
	uint64_t t82 = 7876086LLU;

	t82 = ((x361<(x362|x363))-x364);

	if (t82 != 18435800881175573563LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = -1;
	volatile uint32_t x366 = 328357U;
	int64_t x367 = INT64_MIN;
	uint64_t x368 = UINT64_MAX;
	uint64_t t83 = 14LLU;

	t83 = ((x365<(x366|x367))-x368);

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x373 = 13844U;
	uint32_t x374 = 78971288U;
	int32_t x375 = -1055776114;
	int32_t t84 = -2;

	t84 = ((x373<(x374|x375))-x376);

	if (t84 != -254) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x381 = -27;
	int64_t x382 = INT64_MAX;
	static int64_t x383 = 0LL;
	int16_t x384 = -6;
	volatile int32_t t85 = -3736;

	t85 = ((x381<(x382|x383))-x384);

	if (t85 != 7) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x385 = 1250;
	int16_t x386 = INT16_MIN;
	int8_t x388 = INT8_MAX;
	int32_t t86 = -44122925;

	t86 = ((x385<(x386|x387))-x388);

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x389 = 35;
	int16_t x390 = -1;
	volatile uint32_t x391 = UINT32_MAX;
	int64_t x392 = 678975LL;
	int64_t t87 = 181781LL;

	t87 = ((x389<(x390|x391))-x392);

	if (t87 != -678974LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x397 = 40;
	static int16_t x398 = -2705;
	int8_t x399 = INT8_MIN;
	int64_t t88 = -75510841194240LL;

	t88 = ((x397<(x398|x399))-x400);

	if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x401 = UINT64_MAX;
	uint16_t x402 = 2U;
	int64_t x403 = INT64_MIN;
	int8_t x404 = INT8_MAX;
	volatile int32_t t89 = -15;

	t89 = ((x401<(x402|x403))-x404);

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x409 = -5709245328146LL;
	int8_t x411 = 5;
	volatile uint16_t x412 = 0U;
	volatile int32_t t90 = -583970157;

	t90 = ((x409<(x410|x411))-x412);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x414 = INT32_MIN;
	static volatile int32_t x415 = INT32_MIN;
	uint32_t x416 = 2920U;
	uint32_t t91 = 48763U;

	t91 = ((x413<(x414|x415))-x416);

	if (t91 != 4294964376U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x417 = 4U;
	volatile int64_t x418 = -1LL;
	static int16_t x419 = 1995;
	uint32_t x420 = 2U;
	volatile uint32_t t92 = 208531U;

	t92 = ((x417<(x418|x419))-x420);

	if (t92 != 4294967294U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x421 = 8891379813724838638LLU;
	volatile int64_t x422 = 359934315LL;
	static int64_t x423 = INT64_MIN;
	uint64_t x424 = 658675849898LLU;

	t93 = ((x421<(x422|x423))-x424);

	if (t93 != 18446743415033701719LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x425 = INT16_MAX;
	int32_t x426 = INT32_MIN;
	volatile int32_t x427 = INT32_MAX;
	int16_t x428 = -57;
	volatile int32_t t94 = 253;

	t94 = ((x425<(x426|x427))-x428);

	if (t94 != 57) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x429 = INT16_MAX;
	int8_t x432 = INT8_MIN;
	volatile int32_t t95 = -6;

	t95 = ((x429<(x430|x431))-x432);

	if (t95 != 128) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x433 = 0LLU;
	uint8_t x435 = UINT8_MAX;
	uint32_t x436 = 1311U;
	static volatile uint32_t t96 = 214922732U;

	t96 = ((x433<(x434|x435))-x436);

	if (t96 != 4294965986U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x438 = 41508LLU;
	static int8_t x440 = 1;
	int32_t t97 = 11;

	t97 = ((x437<(x438|x439))-x440);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x449 = -1;
	uint32_t x450 = 12560U;
	static int16_t x451 = -1;
	uint64_t x452 = 942671LLU;
	uint64_t t98 = 439087525861552556LLU;

	t98 = ((x449<(x450|x451))-x452);

	if (t98 != 18446744073708608945LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x453 = INT8_MIN;
	int8_t x454 = -3;
	volatile uint8_t x456 = UINT8_MAX;
	int32_t t99 = -1;

	t99 = ((x453<(x454|x455))-x456);

	if (t99 != -254) { NG(); } else { ; }
	
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

