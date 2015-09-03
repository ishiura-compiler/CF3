#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x21 = -1LL;
uint8_t x26 = UINT8_MAX;
int64_t x27 = -1LL;
int16_t x30 = INT16_MIN;
static int32_t x33 = -245;
uint8_t x46 = UINT8_MAX;
uint32_t t11 = 714200332U;
volatile uint64_t x58 = UINT64_MAX;
int8_t x64 = INT8_MAX;
uint64_t x70 = UINT64_MAX;
int8_t x80 = -9;
int64_t t18 = 15795859461023638LL;
volatile int32_t x81 = 43;
int32_t x83 = -1;
uint16_t x84 = UINT16_MAX;
static uint64_t t21 = 33169424740540LLU;
volatile int16_t x93 = INT16_MIN;
int32_t x96 = INT32_MIN;
static uint64_t x99 = 299LLU;
static int8_t x104 = INT8_MAX;
int8_t x105 = INT8_MAX;
int16_t x122 = -1;
volatile uint16_t x123 = 59U;
static volatile int64_t t29 = -45LL;
uint64_t x136 = 31694278366886562LLU;
uint64_t x139 = 2190523187848692LLU;
int16_t x140 = INT16_MIN;
uint32_t x151 = 227085U;
uint32_t x152 = 534413U;
uint16_t x156 = 6016U;
static volatile int64_t x164 = -1LL;
static int8_t x167 = INT8_MIN;
uint64_t x169 = 55691750960241LLU;
int16_t x171 = -1;
uint32_t x173 = UINT32_MAX;
int32_t x176 = INT32_MIN;
int64_t t41 = -4155603411399LL;
static volatile uint32_t x179 = UINT32_MAX;
int32_t x183 = INT32_MAX;
int8_t x192 = INT8_MIN;
int64_t t45 = 224005114397280200LL;
uint8_t x193 = UINT8_MAX;
uint16_t x195 = UINT16_MAX;
int16_t x197 = -1;
uint64_t t47 = 12274354LLU;
volatile int64_t x209 = -1LL;
static uint8_t x211 = 3U;
static uint32_t x223 = UINT32_MAX;
int8_t x224 = INT8_MIN;
static int16_t x229 = -28;
static int16_t x234 = INT16_MAX;
int16_t x236 = 6;
static uint8_t x242 = 0U;
volatile int8_t x243 = INT8_MIN;
uint64_t t57 = 6299LLU;
uint32_t x249 = UINT32_MAX;
int16_t x254 = -1625;
volatile uint32_t x256 = 101264U;
uint16_t x265 = UINT16_MAX;
volatile int32_t x275 = -374265;
volatile int64_t t66 = -219104116642963LL;
uint8_t x285 = UINT8_MAX;
static uint16_t x288 = 0U;
volatile uint16_t x292 = UINT16_MAX;
static int16_t x295 = INT16_MAX;
int32_t x296 = INT32_MAX;
uint8_t x299 = UINT8_MAX;
static volatile uint8_t x301 = 1U;
int8_t x302 = -33;
uint32_t x308 = UINT32_MAX;
volatile uint64_t x312 = 15726254737081344LLU;
static uint64_t t74 = 10437935503064LLU;
static uint8_t x315 = 5U;
int16_t x322 = INT16_MAX;
int32_t t77 = 98394554;
int32_t x327 = INT32_MIN;
volatile int16_t x340 = -5;
volatile int64_t t81 = -14610329762656887LL;
static int32_t x345 = INT32_MIN;
int64_t x350 = 27269LL;
uint16_t x351 = 46U;
int32_t x357 = -1;
int16_t x364 = INT16_MIN;
static volatile int8_t x365 = INT8_MIN;
static int64_t t89 = 78035273553966LL;
static volatile int16_t x377 = -430;
int64_t x378 = -130568LL;
int16_t x380 = 127;
static uint64_t x385 = 862092LLU;
uint64_t t92 = 4578964632890428728LLU;
int32_t x391 = 1;
volatile uint8_t x396 = 1U;
uint8_t x399 = UINT8_MAX;
static volatile uint8_t x402 = 89U;
static int16_t x410 = -1;
static uint16_t x413 = 2069U;
uint8_t x416 = UINT8_MAX;


void f0(void) {
	static uint32_t x5 = UINT32_MAX;
	int8_t x6 = 0;
	int8_t x7 = -15;
	int32_t x8 = 154542842;
	static uint32_t t0 = 7U;

	t0 = (((x5&x6)+x7)&x8);

	if (t0 != 154542832U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 4775224;
	int64_t x10 = INT64_MAX;
	static int32_t x11 = 49079112;
	int16_t x12 = INT16_MAX;
	int64_t t1 = 25LL;

	t1 = (((x9&x10)+x11)&x12);

	if (t1 != 16512LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	volatile int8_t x14 = 6;
	int64_t x15 = INT64_MAX;
	volatile uint16_t x16 = 7U;
	static volatile int64_t t2 = 510464481LL;

	t2 = (((x13&x14)+x15)&x16);

	if (t2 != 7LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = -341;
	int8_t x18 = 1;
	volatile int64_t x19 = INT64_MIN;
	int64_t x20 = -21409LL;
	volatile int64_t t3 = 312236838898821LL;

	t3 = (((x17&x18)+x19)&x20);

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = INT8_MAX;
	int8_t x23 = INT8_MIN;
	int32_t x24 = 282890219;
	static volatile int64_t t4 = -980794825LL;

	t4 = (((x21&x22)+x23)&x24);

	if (t4 != 282890219LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	int64_t t5 = -7703521852254213LL;

	t5 = (((x25&x26)+x27)&x28);

	if (t5 != -2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 0;
	static uint8_t x31 = 10U;
	int8_t x32 = INT8_MIN;
	volatile int32_t t6 = -22064;

	t6 = (((x29&x30)+x31)&x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = -1;
	int32_t x35 = 2508918;
	int64_t x36 = INT64_MIN;
	static int64_t t7 = 51784LL;

	t7 = (((x33&x34)+x35)&x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x37 = INT32_MIN;
	static uint64_t x38 = 82236887586638LLU;
	int8_t x39 = INT8_MIN;
	int16_t x40 = 7;
	volatile uint64_t t8 = 210860681648LLU;

	t8 = (((x37&x38)+x39)&x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MAX;
	static volatile int8_t x42 = -1;
	volatile int8_t x43 = INT8_MIN;
	uint16_t x44 = UINT16_MAX;
	static int64_t t9 = 13158360533LL;

	t9 = (((x41&x42)+x43)&x44);

	if (t9 != 65407LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = INT32_MIN;
	volatile int32_t x47 = -15;
	int8_t x48 = INT8_MIN;
	volatile int32_t t10 = -119441;

	t10 = (((x45&x46)+x47)&x48);

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 18U;
	uint32_t x50 = UINT32_MAX;
	int16_t x51 = -2617;
	volatile uint8_t x52 = 39U;

	t11 = (((x49&x50)+x51)&x52);

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -2230802902942291LL;
	static int64_t x54 = -2393309336LL;
	static uint8_t x55 = 56U;
	static volatile int64_t x56 = -1LL;
	volatile int64_t t12 = -8139LL;

	t12 = (((x53&x54)+x55)&x56);

	if (t12 != -2230805187199648LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MAX;
	uint64_t x59 = UINT64_MAX;
	static int8_t x60 = INT8_MIN;
	volatile uint64_t t13 = 1384690449091LLU;

	t13 = (((x57&x58)+x59)&x60);

	if (t13 != 32640LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	uint8_t x62 = 81U;
	volatile int32_t x63 = INT32_MIN;
	volatile int32_t t14 = 7064;

	t14 = (((x61&x62)+x63)&x64);

	if (t14 != 81) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = 851LL;
	uint64_t x66 = 827046286883LLU;
	volatile int16_t x67 = INT16_MAX;
	volatile int64_t x68 = -1LL;
	volatile uint64_t t15 = 133374399455361382LLU;

	t15 = (((x65&x66)+x67)&x68);

	if (t15 != 33282LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 18U;
	static uint64_t x71 = UINT64_MAX;
	uint32_t x72 = 0U;
	uint64_t t16 = 49552LLU;

	t16 = (((x69&x70)+x71)&x72);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MIN;
	uint32_t x74 = 3672U;
	int8_t x75 = INT8_MAX;
	uint16_t x76 = 13615U;
	uint32_t t17 = 637U;

	t17 = (((x73&x74)+x75)&x76);

	if (t17 != 47U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -1;
	int64_t x78 = -7129615961181LL;
	int16_t x79 = INT16_MIN;

	t18 = (((x77&x78)+x79)&x80);

	if (t18 != -7129615993949LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x82 = -1;
	int32_t t19 = 205641;

	t19 = (((x81&x82)+x83)&x84);

	if (t19 != 42) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x85 = -14;
	int64_t x86 = 10LL;
	static int8_t x87 = -1;
	static uint32_t x88 = UINT32_MAX;
	volatile int64_t t20 = 49LL;

	t20 = (((x85&x86)+x87)&x88);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x89 = 0LL;
	volatile uint64_t x90 = UINT64_MAX;
	static uint32_t x91 = 1146639787U;
	int64_t x92 = 85512453LL;

	t21 = (((x89&x90)+x91)&x92);

	if (t21 != 68702465LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x94 = UINT32_MAX;
	uint8_t x95 = 0U;
	volatile uint32_t t22 = 79U;

	t22 = (((x93&x94)+x95)&x96);

	if (t22 != 2147483648U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x97 = 64421806512LLU;
	volatile uint32_t x98 = 4990216U;
	static uint8_t x100 = 0U;
	volatile uint64_t t23 = 0LLU;

	t23 = (((x97&x98)+x99)&x100);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 450484U;
	int64_t x102 = INT64_MIN;
	volatile uint16_t x103 = 1U;
	static volatile int64_t t24 = 65641476983713LL;

	t24 = (((x101&x102)+x103)&x104);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x106 = 8;
	int16_t x107 = 6;
	volatile uint16_t x108 = UINT16_MAX;
	int32_t t25 = -55667446;

	t25 = (((x105&x106)+x107)&x108);

	if (t25 != 14) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -1LL;
	volatile uint32_t x110 = 20345U;
	static uint16_t x111 = 434U;
	uint16_t x112 = UINT16_MAX;
	volatile int64_t t26 = -15LL;

	t26 = (((x109&x110)+x111)&x112);

	if (t26 != 20779LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x113 = 740;
	int16_t x114 = INT16_MAX;
	int16_t x115 = INT16_MIN;
	int32_t x116 = INT32_MAX;
	volatile int32_t t27 = -6850;

	t27 = (((x113&x114)+x115)&x116);

	if (t27 != 2147451620) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = -1;
	uint64_t x124 = 58678LLU;
	static uint64_t t28 = 427727917353106924LLU;

	t28 = (((x121&x122)+x123)&x124);

	if (t28 != 50LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MIN;
	volatile int16_t x126 = -1;
	int64_t x127 = 648013LL;
	int8_t x128 = INT8_MIN;

	t29 = (((x125&x126)+x127)&x128);

	if (t29 != -9223372036854127872LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MIN;
	int32_t x130 = 17164;
	uint64_t x131 = UINT64_MAX;
	static uint8_t x132 = UINT8_MAX;
	uint64_t t30 = 216670564LLU;

	t30 = (((x129&x130)+x131)&x132);

	if (t30 != 255LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MIN;
	int32_t x134 = INT32_MIN;
	uint8_t x135 = 6U;
	volatile uint64_t t31 = 436505LLU;

	t31 = (((x133&x134)+x135)&x136);

	if (t31 != 2LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -1;
	int16_t x138 = -1;
	volatile uint64_t t32 = 1025550230184798LLU;

	t32 = (((x137&x138)+x139)&x140);

	if (t32 != 2190523187822592LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = 316027000U;
	int32_t x142 = 1;
	uint32_t x143 = 60082226U;
	static int8_t x144 = -3;
	static volatile uint32_t t33 = 1U;

	t33 = (((x141&x142)+x143)&x144);

	if (t33 != 60082224U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x145 = -2;
	uint64_t x146 = 303516671LLU;
	int8_t x147 = INT8_MAX;
	static volatile uint16_t x148 = 20U;
	uint64_t t34 = 1830LLU;

	t34 = (((x145&x146)+x147)&x148);

	if (t34 != 20LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 484408U;
	static volatile int64_t x150 = -71458167764824LL;
	int64_t t35 = -13566286061909089LL;

	t35 = (((x149&x150)+x151)&x152);

	if (t35 != 9989LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x153 = -20;
	volatile int16_t x154 = -1399;
	static int32_t x155 = -1;
	int32_t t36 = -42960433;

	t36 = (((x153&x154)+x155)&x156);

	if (t36 != 4736) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x157 = 6052;
	int16_t x158 = INT16_MIN;
	int16_t x159 = -1;
	int64_t x160 = -560LL;
	static volatile int64_t t37 = 534389902586652947LL;

	t37 = (((x157&x158)+x159)&x160);

	if (t37 != -560LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MAX;
	volatile int16_t x162 = INT16_MIN;
	int16_t x163 = -1;
	volatile int64_t t38 = 737651LL;

	t38 = (((x161&x162)+x163)&x164);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x165 = INT32_MAX;
	int8_t x166 = -55;
	int32_t x168 = -52158;
	volatile int32_t t39 = 6;

	t39 = (((x165&x166)+x167)&x168);

	if (t39 != 2147431488) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x170 = INT16_MIN;
	static uint8_t x172 = 0U;
	volatile uint64_t t40 = 41914705304LLU;

	t40 = (((x169&x170)+x171)&x172);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x174 = -18572;
	int64_t x175 = -90854746717624041LL;

	t41 = (((x173&x174)+x175)&x176);

	if (t41 != -90854743894654976LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = 24536LLU;
	int16_t x178 = INT16_MIN;
	volatile int64_t x180 = INT64_MAX;
	uint64_t t42 = 2LLU;

	t42 = (((x177&x178)+x179)&x180);

	if (t42 != 4294967295LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x181 = -28LL;
	volatile int16_t x182 = INT16_MIN;
	static int16_t x184 = -10;
	int64_t t43 = 1LL;

	t43 = (((x181&x182)+x183)&x184);

	if (t43 != 2147450870LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = 6503;
	int64_t x186 = INT64_MAX;
	uint8_t x187 = 1U;
	int32_t x188 = -1;
	volatile int64_t t44 = -245LL;

	t44 = (((x185&x186)+x187)&x188);

	if (t44 != 6504LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = 2591298LL;
	uint8_t x190 = 82U;
	int8_t x191 = -14;

	t45 = (((x189&x190)+x191)&x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x194 = INT8_MAX;
	int64_t x196 = INT64_MIN;
	int64_t t46 = -26405750LL;

	t46 = (((x193&x194)+x195)&x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x198 = UINT64_MAX;
	static uint64_t x199 = UINT64_MAX;
	uint32_t x200 = UINT32_MAX;

	t47 = (((x197&x198)+x199)&x200);

	if (t47 != 4294967294LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x205 = -1;
	int32_t x206 = INT32_MAX;
	volatile int16_t x207 = -1005;
	int32_t x208 = INT32_MIN;
	int32_t t48 = 1595;

	t48 = (((x205&x206)+x207)&x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x210 = -1;
	int8_t x212 = -1;
	int64_t t49 = 31072007453745LL;

	t49 = (((x209&x210)+x211)&x212);

	if (t49 != 2LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x213 = 0U;
	int32_t x214 = INT32_MAX;
	static int64_t x215 = -2673696LL;
	uint8_t x216 = 3U;
	volatile int64_t t50 = 291LL;

	t50 = (((x213&x214)+x215)&x216);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x217 = UINT8_MAX;
	int16_t x218 = -24;
	int64_t x219 = -23156702LL;
	volatile int32_t x220 = INT32_MIN;
	int64_t t51 = 0LL;

	t51 = (((x217&x218)+x219)&x220);

	if (t51 != -2147483648LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x221 = INT64_MIN;
	volatile uint8_t x222 = UINT8_MAX;
	int64_t t52 = -4002548LL;

	t52 = (((x221&x222)+x223)&x224);

	if (t52 != 4294967168LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = INT32_MIN;
	uint64_t x226 = 1074366559923LLU;
	uint16_t x227 = 14U;
	int8_t x228 = -28;
	volatile uint64_t t53 = 802378072359105343LLU;

	t53 = (((x225&x226)+x227)&x228);

	if (t53 != 1073741824004LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x230 = UINT8_MAX;
	int32_t x231 = INT32_MIN;
	int32_t x232 = -3972587;
	volatile int32_t t54 = -4559907;

	t54 = (((x229&x230)+x231)&x232);

	if (t54 != -2147483644) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = INT8_MIN;
	int64_t x235 = INT64_MIN;
	static int64_t t55 = -3298963230649246191LL;

	t55 = (((x233&x234)+x235)&x236);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = 1;
	static uint8_t x238 = 70U;
	volatile int32_t x239 = -1;
	static int32_t x240 = 229;
	volatile int32_t t56 = 1;

	t56 = (((x237&x238)+x239)&x240);

	if (t56 != 229) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MIN;
	uint64_t x244 = 979002225367LLU;

	t57 = (((x241&x242)+x243)&x244);

	if (t57 != 979002225280LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x245 = 64523LLU;
	static int16_t x246 = INT16_MAX;
	static uint16_t x247 = 31U;
	volatile int32_t x248 = INT32_MIN;
	uint64_t t58 = 15603014378LLU;

	t58 = (((x245&x246)+x247)&x248);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x250 = INT32_MAX;
	int8_t x251 = 1;
	volatile int16_t x252 = -1;
	uint32_t t59 = 169294508U;

	t59 = (((x249&x250)+x251)&x252);

	if (t59 != 2147483648U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x253 = UINT8_MAX;
	int16_t x255 = 1;
	uint32_t t60 = 5903U;

	t60 = (((x253&x254)+x255)&x256);

	if (t60 != 128U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x257 = INT16_MIN;
	int64_t x258 = INT64_MAX;
	int8_t x259 = 10;
	static volatile int64_t x260 = INT64_MIN;
	int64_t t61 = -733393086774086LL;

	t61 = (((x257&x258)+x259)&x260);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x261 = UINT64_MAX;
	int32_t x262 = 163;
	volatile uint32_t x263 = 27016562U;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t62 = 3584602458344LLU;

	t62 = (((x261&x262)+x263)&x264);

	if (t62 != 27016725LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x266 = UINT16_MAX;
	static uint8_t x267 = UINT8_MAX;
	volatile uint32_t x268 = 1059720U;
	volatile uint32_t t63 = 11938U;

	t63 = (((x265&x266)+x267)&x268);

	if (t63 != 136U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = INT16_MAX;
	volatile uint32_t x270 = 146558921U;
	int8_t x271 = INT8_MAX;
	int64_t x272 = -5454072878273113LL;
	int64_t t64 = 1613LL;

	t64 = (((x269&x270)+x271)&x272);

	if (t64 != 16384LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x273 = -1LL;
	uint64_t x274 = 1111263923836142893LLU;
	volatile int16_t x276 = INT16_MAX;
	volatile uint64_t t65 = 37085110233898LLU;

	t65 = (((x273&x274)+x275)&x276);

	if (t65 != 3892LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = INT64_MIN;
	static uint32_t x278 = 437398750U;
	uint32_t x279 = 17696U;
	volatile int16_t x280 = INT16_MAX;

	t66 = (((x277&x278)+x279)&x280);

	if (t66 != 17696LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x281 = INT8_MIN;
	int16_t x282 = INT16_MIN;
	uint16_t x283 = 1630U;
	volatile int64_t x284 = INT64_MIN;
	int64_t t67 = INT64_MIN;

	t67 = (((x281&x282)+x283)&x284);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x286 = INT32_MIN;
	int16_t x287 = INT16_MAX;
	int32_t t68 = -1677;

	t68 = (((x285&x286)+x287)&x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = INT64_MIN;
	volatile int32_t x290 = 1;
	uint64_t x291 = 15LLU;
	uint64_t t69 = 725724764749640LLU;

	t69 = (((x289&x290)+x291)&x292);

	if (t69 != 15LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x293 = 65794817294LLU;
	static int32_t x294 = 755;
	uint64_t t70 = 5862051230LLU;

	t70 = (((x293&x294)+x295)&x296);

	if (t70 != 32769LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = INT16_MIN;
	volatile int8_t x298 = INT8_MIN;
	uint8_t x300 = 49U;
	static int32_t t71 = -568983842;

	t71 = (((x297&x298)+x299)&x300);

	if (t71 != 49) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x303 = 536021658618500974LL;
	static int16_t x304 = 32;
	volatile int64_t t72 = 2954076930116044015LL;

	t72 = (((x301&x302)+x303)&x304);

	if (t72 != 32LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x305 = 2870304LLU;
	int8_t x306 = INT8_MAX;
	int8_t x307 = 0;
	static volatile uint64_t t73 = 82570670726338LLU;

	t73 = (((x305&x306)+x307)&x308);

	if (t73 != 32LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x309 = -1;
	volatile uint16_t x310 = 77U;
	int64_t x311 = -89LL;

	t74 = (((x309&x310)+x311)&x312);

	if (t74 != 15726254737081344LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MIN;
	uint8_t x314 = 15U;
	static volatile int16_t x316 = INT16_MAX;
	int32_t t75 = 30518390;

	t75 = (((x313&x314)+x315)&x316);

	if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = 127140233300591LL;
	int16_t x318 = INT16_MIN;
	uint16_t x319 = 1U;
	int8_t x320 = INT8_MAX;
	volatile int64_t t76 = 49194LL;

	t76 = (((x317&x318)+x319)&x320);

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x321 = -127791303;
	static int16_t x323 = INT16_MIN;
	static int16_t x324 = -1;

	t77 = (((x321&x322)+x323)&x324);

	if (t77 != -28871) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = 2978346361431673475LL;
	int16_t x326 = INT16_MAX;
	int64_t x328 = INT64_MIN;
	int64_t t78 = INT64_MIN;

	t78 = (((x325&x326)+x327)&x328);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = -1;
	uint64_t x330 = UINT64_MAX;
	static int64_t x331 = -1LL;
	static volatile int64_t x332 = -631989787LL;
	static uint64_t t79 = 22611LLU;

	t79 = (((x329&x330)+x331)&x332);

	if (t79 != 18446744073077561828LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x333 = INT32_MAX;
	uint16_t x334 = 19U;
	volatile int32_t x335 = -1;
	static int32_t x336 = -1;
	static volatile int32_t t80 = -27423;

	t80 = (((x333&x334)+x335)&x336);

	if (t80 != 18) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = -1;
	uint32_t x338 = 6906547U;
	volatile int64_t x339 = INT64_MIN;

	t81 = (((x337&x338)+x339)&x340);

	if (t81 != -9223372036847869261LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x341 = UINT16_MAX;
	int16_t x342 = -3;
	int8_t x343 = INT8_MIN;
	uint64_t x344 = 2386934502849LLU;
	volatile uint64_t t82 = 2607427141034LLU;

	t82 = (((x341&x342)+x343)&x344);

	if (t82 != 5441LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x346 = 4U;
	int32_t x347 = INT32_MIN;
	uint32_t x348 = 13035U;
	static volatile uint32_t t83 = 125566U;

	t83 = (((x345&x346)+x347)&x348);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x349 = UINT16_MAX;
	int64_t x352 = -90326552169873LL;
	int64_t t84 = 20771419985LL;

	t84 = (((x349&x350)+x351)&x352);

	if (t84 != 8739LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x358 = INT32_MIN;
	int64_t x359 = INT64_MAX;
	int64_t x360 = INT64_MAX;
	int64_t t85 = 36794638495885LL;

	t85 = (((x357&x358)+x359)&x360);

	if (t85 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x361 = INT64_MAX;
	uint16_t x362 = UINT16_MAX;
	int16_t x363 = -1;
	int64_t t86 = -810LL;

	t86 = (((x361&x362)+x363)&x364);

	if (t86 != 32768LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x366 = 1LLU;
	static uint32_t x367 = 26864U;
	volatile uint8_t x368 = UINT8_MAX;
	uint64_t t87 = 435034638505393LLU;

	t87 = (((x365&x366)+x367)&x368);

	if (t87 != 240LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = INT64_MAX;
	int32_t x370 = INT32_MAX;
	volatile uint32_t x371 = UINT32_MAX;
	static int64_t x372 = INT64_MIN;
	int64_t t88 = -451946229884798899LL;

	t88 = (((x369&x370)+x371)&x372);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = -1;
	int32_t x374 = 1221;
	int32_t x375 = 9;
	int64_t x376 = INT64_MIN;

	t89 = (((x373&x374)+x375)&x376);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x379 = UINT16_MAX;
	static int64_t t90 = -3135998543990859LL;

	t90 = (((x377&x378)+x379)&x380);

	if (t90 != 79LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = -1;
	static int16_t x382 = INT16_MAX;
	static int32_t x383 = -1;
	int32_t x384 = INT32_MIN;
	int32_t t91 = 0;

	t91 = (((x381&x382)+x383)&x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x386 = -51880602003390858LL;
	uint8_t x387 = 9U;
	volatile int16_t x388 = INT16_MIN;

	t92 = (((x385&x386)+x387)&x388);

	if (t92 != 524288LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = INT64_MAX;
	volatile int16_t x390 = INT16_MIN;
	int8_t x392 = -1;
	int64_t t93 = 215672792849741LL;

	t93 = (((x389&x390)+x391)&x392);

	if (t93 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x393 = INT32_MAX;
	int32_t x394 = INT32_MIN;
	int8_t x395 = -1;
	int32_t t94 = 51188;

	t94 = (((x393&x394)+x395)&x396);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x397 = UINT32_MAX;
	uint64_t x398 = 17918908670800632LLU;
	static uint8_t x400 = 7U;
	uint64_t t95 = 438697901156410LLU;

	t95 = (((x397&x398)+x399)&x400);

	if (t95 != 7LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x401 = UINT8_MAX;
	static volatile int8_t x403 = 1;
	static int16_t x404 = INT16_MAX;
	int32_t t96 = 5925;

	t96 = (((x401&x402)+x403)&x404);

	if (t96 != 90) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = INT16_MAX;
	uint8_t x406 = UINT8_MAX;
	static int64_t x407 = -1078526652LL;
	int16_t x408 = INT16_MIN;
	int64_t t97 = 1LL;

	t97 = (((x405&x406)+x407)&x408);

	if (t97 != -1078558720LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x409 = 24343028350993369LLU;
	int64_t x411 = INT64_MIN;
	int64_t x412 = INT64_MAX;
	uint64_t t98 = 4051LLU;

	t98 = (((x409&x410)+x411)&x412);

	if (t98 != 24343028350993369LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x414 = 1352U;
	static int32_t x415 = INT32_MIN;
	volatile int32_t t99 = 15;

	t99 = (((x413&x414)+x415)&x416);

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

