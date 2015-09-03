#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
static int16_t x7 = 0;
uint16_t x8 = UINT16_MAX;
int32_t t1 = -51460;
int32_t x17 = INT32_MAX;
int8_t x26 = INT8_MAX;
uint32_t x27 = UINT32_MAX;
int64_t x30 = 442884109441LL;
volatile int32_t t6 = 2;
volatile int32_t x36 = INT32_MAX;
volatile uint64_t t8 = 57363547144LLU;
volatile int32_t x41 = -410;
int64_t x44 = 295414393LL;
static int8_t x45 = INT8_MIN;
int32_t t10 = -60411923;
int64_t x51 = 105464633218816LL;
static volatile int16_t x56 = INT16_MIN;
int8_t x59 = -12;
volatile int32_t x61 = -33453614;
static uint8_t x63 = 0U;
int32_t t14 = -31776350;
volatile int64_t t15 = 1LL;
static int64_t x71 = -16251293091619LL;
static volatile int32_t t16 = 3;
uint32_t x81 = UINT32_MAX;
uint8_t x82 = 23U;
uint32_t x84 = 797518472U;
int16_t x89 = 5325;
uint32_t x107 = 23272867U;
static int64_t x110 = INT64_MIN;
int32_t x113 = 4665458;
int16_t x114 = INT16_MAX;
uint16_t x121 = 4U;
volatile int8_t x123 = -1;
volatile int16_t x128 = -1;
volatile int32_t t27 = -3812523;
static int16_t x137 = -1;
volatile int32_t x139 = 1870;
volatile uint32_t t30 = 12662U;
static volatile int64_t x142 = INT64_MIN;
volatile uint32_t t31 = 3U;
volatile uint64_t x149 = 297826346535121LLU;
int8_t x153 = -22;
int32_t x154 = -1;
static int64_t x159 = -1LL;
static volatile int64_t t35 = 85658203LL;
volatile int8_t x161 = INT8_MIN;
uint64_t x162 = 10240444LLU;
static int16_t x163 = INT16_MAX;
volatile uint32_t x166 = 286U;
int16_t x168 = -1;
int32_t x169 = 165;
static int32_t t38 = -401;
int64_t x194 = -11969LL;
uint16_t x199 = 4U;
static int16_t x200 = -783;
volatile int32_t x201 = -1;
int16_t x208 = -1;
int32_t t47 = -1;
int32_t x210 = INT32_MAX;
int8_t x213 = -1;
int16_t x215 = INT16_MIN;
volatile int32_t x216 = 7286;
volatile int32_t t49 = 225771363;
int32_t x220 = -4871;
int32_t x221 = 8290172;
static uint8_t x222 = UINT8_MAX;
int16_t x231 = INT16_MIN;
int16_t x238 = -1;
int64_t x239 = INT64_MIN;
static int64_t t55 = -230427LL;
int16_t x241 = -1;
int64_t x243 = 208LL;
static volatile uint64_t t56 = 124800970037LLU;
int16_t x265 = INT16_MIN;
volatile int32_t t65 = -105965;
volatile int64_t x287 = INT64_MAX;
uint16_t x294 = 35U;
int8_t x297 = -1;
int8_t x301 = -6;
int8_t x302 = 1;
int8_t x303 = -1;
uint64_t x308 = 355LLU;
uint32_t x309 = 59377U;
int64_t x310 = -24237892507913LL;
static int32_t x317 = INT32_MIN;
int32_t t75 = 158579;
int32_t t76 = -819578466;
static int8_t x328 = -1;
static int32_t t80 = -112;
int32_t x347 = INT32_MIN;
int32_t x359 = INT32_MAX;
int64_t t87 = 250847724LL;
volatile int8_t x379 = -1;
uint8_t x387 = UINT8_MAX;
int8_t x390 = INT8_MIN;
int32_t x392 = INT32_MIN;
uint64_t x394 = UINT64_MAX;
uint64_t x397 = UINT64_MAX;
uint64_t x399 = 39413928808LLU;
static volatile int16_t x410 = INT16_MIN;
volatile uint64_t x411 = 324183433790LLU;
volatile int16_t x414 = INT16_MAX;
int8_t x417 = INT8_MIN;


void f0(void) {
	static int32_t x1 = -1;
	static volatile uint64_t x2 = UINT64_MAX;
	int32_t x3 = INT32_MIN;
	static int16_t x4 = INT16_MAX;
	volatile int32_t t0 = 85;

	t0 = (((x1&x2)==x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;

	t1 = (((x5&x6)==x7)%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 1979612679287771LLU;
	uint8_t x14 = UINT8_MAX;
	uint64_t x15 = 1358949782672124LLU;
	uint32_t x16 = UINT32_MAX;
	volatile uint32_t t2 = 5U;

	t2 = (((x13&x14)==x15)%x16);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x18 = 37U;
	int8_t x19 = 23;
	volatile int8_t x20 = -1;
	volatile int32_t t3 = 2690515;

	t3 = (((x17&x18)==x19)%x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = UINT64_MAX;
	int8_t x22 = -1;
	uint64_t x23 = 35438LLU;
	static int16_t x24 = -1;
	int32_t t4 = -1;

	t4 = (((x21&x22)==x23)%x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = 1;
	uint8_t x28 = 13U;
	int32_t t5 = -3;

	t5 = (((x25&x26)==x27)%x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = INT16_MAX;
	volatile int32_t x31 = INT32_MIN;
	volatile int32_t x32 = INT32_MAX;

	t6 = (((x29&x30)==x31)%x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MAX;
	int16_t x34 = INT16_MIN;
	volatile int8_t x35 = INT8_MIN;
	volatile int32_t t7 = 1506;

	t7 = (((x33&x34)==x35)%x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 2U;
	uint32_t x38 = UINT32_MAX;
	int8_t x39 = -1;
	volatile uint64_t x40 = 10380307817511LLU;

	t8 = (((x37&x38)==x39)%x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x42 = INT16_MIN;
	static uint16_t x43 = 6782U;
	volatile int64_t t9 = -72366311774951LL;

	t9 = (((x41&x42)==x43)%x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = 55;
	static int32_t x47 = INT32_MIN;
	volatile int32_t x48 = 2718;

	t10 = (((x45&x46)==x47)%x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = -1;
	static int16_t x50 = INT16_MAX;
	int16_t x52 = INT16_MIN;
	int32_t t11 = -3382180;

	t11 = (((x49&x50)==x51)%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	static int64_t x54 = INT64_MIN;
	static volatile int16_t x55 = -24;
	volatile int32_t t12 = 6;

	t12 = (((x53&x54)==x55)%x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x57 = 0U;
	int32_t x58 = -216705;
	int16_t x60 = -1;
	volatile int32_t t13 = -7;

	t13 = (((x57&x58)==x59)%x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x62 = 21U;
	int16_t x64 = -1;

	t14 = (((x61&x62)==x63)%x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 598;
	uint8_t x66 = 70U;
	volatile int32_t x67 = -1;
	int64_t x68 = 2259492952326084509LL;

	t15 = (((x65&x66)==x67)%x68);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x69 = UINT8_MAX;
	int8_t x70 = -12;
	static int16_t x72 = INT16_MAX;

	t16 = (((x69&x70)==x71)%x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 23517U;
	static volatile uint32_t x74 = 259U;
	uint16_t x75 = UINT16_MAX;
	int64_t x76 = 85LL;
	volatile int64_t t17 = -63991LL;

	t17 = (((x73&x74)==x75)%x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = 4;
	int16_t x78 = 6;
	static int16_t x79 = INT16_MIN;
	static int64_t x80 = INT64_MIN;
	volatile int64_t t18 = -88830984758930LL;

	t18 = (((x77&x78)==x79)%x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x83 = INT64_MAX;
	volatile uint32_t t19 = 1247214381U;

	t19 = (((x81&x82)==x83)%x84);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x90 = -1113;
	uint64_t x91 = 1572191117428623LLU;
	int64_t x92 = INT64_MIN;
	int64_t t20 = -24302091LL;

	t20 = (((x89&x90)==x91)%x92);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = UINT32_MAX;
	int32_t x102 = INT32_MAX;
	uint64_t x103 = 562203LLU;
	int16_t x104 = -1;
	int32_t t21 = -107;

	t21 = (((x101&x102)==x103)%x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MIN;
	static int8_t x106 = -41;
	int8_t x108 = 4;
	int32_t t22 = 20678974;

	t22 = (((x105&x106)==x107)%x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x109 = INT16_MIN;
	uint32_t x111 = 0U;
	uint8_t x112 = 21U;
	volatile int32_t t23 = -1339198;

	t23 = (((x109&x110)==x111)%x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x115 = 1873LL;
	int8_t x116 = 2;
	int32_t t24 = -67;

	t24 = (((x113&x114)==x115)%x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = INT64_MIN;
	int16_t x118 = INT16_MAX;
	int16_t x119 = INT16_MIN;
	int8_t x120 = -35;
	volatile int32_t t25 = -160;

	t25 = (((x117&x118)==x119)%x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x122 = 761LL;
	int64_t x124 = INT64_MIN;
	volatile int64_t t26 = -543391381345069385LL;

	t26 = (((x121&x122)==x123)%x124);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -1;
	volatile uint8_t x126 = 0U;
	static uint16_t x127 = 0U;

	t27 = (((x125&x126)==x127)%x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = 10U;
	int16_t x130 = -1;
	int16_t x131 = 0;
	static int64_t x132 = -1LL;
	int64_t t28 = 160642711223507201LL;

	t28 = (((x129&x130)==x131)%x132);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x133 = INT16_MAX;
	int64_t x134 = 19386966807756713LL;
	uint64_t x135 = 5314835184323589LLU;
	int16_t x136 = 1010;
	int32_t t29 = -9448;

	t29 = (((x133&x134)==x135)%x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x138 = 3U;
	static uint32_t x140 = UINT32_MAX;

	t30 = (((x137&x138)==x139)%x140);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x141 = 0;
	int16_t x143 = -1;
	static uint32_t x144 = 154U;

	t31 = (((x141&x142)==x143)%x144);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = -2;
	uint32_t x146 = UINT32_MAX;
	int16_t x147 = INT16_MIN;
	int32_t x148 = -1;
	int32_t t32 = -976835;

	t32 = (((x145&x146)==x147)%x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x150 = 8226638585LL;
	int16_t x151 = INT16_MIN;
	volatile int16_t x152 = 1;
	int32_t t33 = -1679;

	t33 = (((x149&x150)==x151)%x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x155 = INT32_MIN;
	volatile int8_t x156 = -1;
	int32_t t34 = 40143;

	t34 = (((x153&x154)==x155)%x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = 28U;
	int64_t x158 = INT64_MAX;
	int64_t x160 = INT64_MAX;

	t35 = (((x157&x158)==x159)%x160);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x164 = UINT32_MAX;
	uint32_t t36 = 1991500U;

	t36 = (((x161&x162)==x163)%x164);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x165 = INT8_MIN;
	static uint8_t x167 = 96U;
	static volatile int32_t t37 = -12;

	t37 = (((x165&x166)==x167)%x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x170 = INT32_MIN;
	volatile uint64_t x171 = 3769403358102021LLU;
	int8_t x172 = INT8_MIN;

	t38 = (((x169&x170)==x171)%x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x173 = 664322U;
	uint64_t x174 = UINT64_MAX;
	static int64_t x175 = INT64_MAX;
	int16_t x176 = -1;
	int32_t t39 = 1;

	t39 = (((x173&x174)==x175)%x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = INT64_MAX;
	static int32_t x178 = INT32_MAX;
	static uint16_t x179 = 1220U;
	static int16_t x180 = -25;
	int32_t t40 = 26;

	t40 = (((x177&x178)==x179)%x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = 1731U;
	int64_t x182 = INT64_MAX;
	static int16_t x183 = INT16_MAX;
	static int8_t x184 = INT8_MAX;
	int32_t t41 = -86;

	t41 = (((x181&x182)==x183)%x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x185 = 12U;
	int8_t x186 = -4;
	uint64_t x187 = 425823551833LLU;
	int64_t x188 = 12387546313LL;
	int64_t t42 = 8043301294567428LL;

	t42 = (((x185&x186)==x187)%x188);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x189 = INT32_MIN;
	uint8_t x190 = 10U;
	int32_t x191 = INT32_MIN;
	uint16_t x192 = 3547U;
	int32_t t43 = -59607926;

	t43 = (((x189&x190)==x191)%x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = -1;
	uint64_t x195 = 904939285LLU;
	static int16_t x196 = INT16_MAX;
	int32_t t44 = 4475006;

	t44 = (((x193&x194)==x195)%x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x197 = 0;
	int8_t x198 = INT8_MIN;
	volatile int32_t t45 = 0;

	t45 = (((x197&x198)==x199)%x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x202 = INT16_MIN;
	int16_t x203 = INT16_MIN;
	static uint32_t x204 = UINT32_MAX;
	static uint32_t t46 = 2793976U;

	t46 = (((x201&x202)==x203)%x204);

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x205 = -1;
	int8_t x206 = 1;
	int32_t x207 = -10543;

	t47 = (((x205&x206)==x207)%x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x209 = 0U;
	uint64_t x211 = UINT64_MAX;
	static volatile uint32_t x212 = 8506U;
	uint32_t t48 = 5U;

	t48 = (((x209&x210)==x211)%x212);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x214 = UINT8_MAX;

	t49 = (((x213&x214)==x215)%x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x217 = 1806108334505LLU;
	int16_t x218 = INT16_MIN;
	uint8_t x219 = 2U;
	volatile int32_t t50 = 126;

	t50 = (((x217&x218)==x219)%x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x223 = -745LL;
	volatile int32_t x224 = INT32_MIN;
	int32_t t51 = -12;

	t51 = (((x221&x222)==x223)%x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x225 = 759LLU;
	static uint16_t x226 = 23150U;
	int8_t x227 = -1;
	static int16_t x228 = INT16_MIN;
	int32_t t52 = 1094785;

	t52 = (((x225&x226)==x227)%x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x229 = UINT32_MAX;
	static uint32_t x230 = UINT32_MAX;
	static int64_t x232 = INT64_MIN;
	volatile int64_t t53 = 1801276865LL;

	t53 = (((x229&x230)==x231)%x232);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x233 = 599286U;
	int64_t x234 = INT64_MIN;
	int64_t x235 = INT64_MIN;
	int64_t x236 = 22296LL;
	int64_t t54 = -8955969388LL;

	t54 = (((x233&x234)==x235)%x236);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x237 = 16317321728LLU;
	static int64_t x240 = -3771432LL;

	t55 = (((x237&x238)==x239)%x240);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x242 = INT16_MIN;
	uint64_t x244 = UINT64_MAX;

	t56 = (((x241&x242)==x243)%x244);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = 0U;
	static uint16_t x246 = UINT16_MAX;
	volatile int64_t x247 = -1LL;
	int16_t x248 = -1;
	static volatile int32_t t57 = 505367;

	t57 = (((x245&x246)==x247)%x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x249 = 2U;
	static volatile int16_t x250 = -1;
	static int64_t x251 = -1LL;
	volatile uint32_t x252 = 1694674437U;
	uint32_t t58 = 10803389U;

	t58 = (((x249&x250)==x251)%x252);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x253 = -3343;
	uint16_t x254 = 97U;
	uint32_t x255 = 1U;
	int64_t x256 = -1LL;
	volatile int64_t t59 = 478988772486230967LL;

	t59 = (((x253&x254)==x255)%x256);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = INT64_MAX;
	int64_t x258 = INT64_MIN;
	uint16_t x259 = 16182U;
	static int8_t x260 = INT8_MIN;
	int32_t t60 = 528096811;

	t60 = (((x257&x258)==x259)%x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x261 = INT16_MIN;
	int64_t x262 = -1LL;
	int32_t x263 = -97;
	static int16_t x264 = -217;
	volatile int32_t t61 = 11;

	t61 = (((x261&x262)==x263)%x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x266 = UINT64_MAX;
	int8_t x267 = 3;
	static int8_t x268 = INT8_MIN;
	static volatile int32_t t62 = 210334;

	t62 = (((x265&x266)==x267)%x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = INT32_MIN;
	int16_t x270 = 378;
	static uint8_t x271 = UINT8_MAX;
	static uint32_t x272 = UINT32_MAX;
	uint32_t t63 = 7U;

	t63 = (((x269&x270)==x271)%x272);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x273 = INT64_MIN;
	static volatile int64_t x274 = INT64_MIN;
	static int16_t x275 = INT16_MIN;
	volatile int8_t x276 = INT8_MAX;
	volatile int32_t t64 = 26599;

	t64 = (((x273&x274)==x275)%x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = INT16_MAX;
	int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MAX;
	uint16_t x280 = UINT16_MAX;

	t65 = (((x277&x278)==x279)%x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x281 = INT8_MAX;
	static int16_t x282 = 5;
	int16_t x283 = -1;
	int16_t x284 = INT16_MIN;
	int32_t t66 = 3287;

	t66 = (((x281&x282)==x283)%x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x285 = 19U;
	int16_t x286 = INT16_MIN;
	int8_t x288 = INT8_MAX;
	volatile int32_t t67 = -249590831;

	t67 = (((x285&x286)==x287)%x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = -1;
	static volatile int16_t x290 = INT16_MIN;
	int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;
	static int32_t t68 = 818;

	t68 = (((x289&x290)==x291)%x292);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x293 = -93394553;
	int64_t x295 = INT64_MAX;
	int16_t x296 = -1;
	static int32_t t69 = -8743208;

	t69 = (((x293&x294)==x295)%x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x298 = INT16_MIN;
	int16_t x299 = INT16_MIN;
	uint64_t x300 = 220283266LLU;
	volatile uint64_t t70 = 889385824LLU;

	t70 = (((x297&x298)==x299)%x300);

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x304 = -6369133LL;
	static volatile int64_t t71 = -61357378LL;

	t71 = (((x301&x302)==x303)%x304);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x305 = INT32_MIN;
	uint8_t x306 = 0U;
	volatile int32_t x307 = -1;
	uint64_t t72 = 1LLU;

	t72 = (((x305&x306)==x307)%x308);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x311 = 31U;
	uint8_t x312 = 81U;
	static int32_t t73 = 4027;

	t73 = (((x309&x310)==x311)%x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x313 = INT8_MAX;
	int16_t x314 = -1;
	volatile int8_t x315 = INT8_MAX;
	int8_t x316 = 3;
	volatile int32_t t74 = 0;

	t74 = (((x313&x314)==x315)%x316);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x318 = 1170303249938LLU;
	int32_t x319 = -1;
	int16_t x320 = INT16_MIN;

	t75 = (((x317&x318)==x319)%x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x321 = 2542LLU;
	uint32_t x322 = 362U;
	volatile int8_t x323 = -1;
	int16_t x324 = INT16_MIN;

	t76 = (((x321&x322)==x323)%x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x325 = 30106U;
	int8_t x326 = -1;
	static volatile int32_t x327 = INT32_MAX;
	volatile int32_t t77 = 262283731;

	t77 = (((x325&x326)==x327)%x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x329 = INT64_MIN;
	uint64_t x330 = 266217807314427LLU;
	static int64_t x331 = INT64_MIN;
	volatile uint8_t x332 = 78U;
	volatile int32_t t78 = -373058186;

	t78 = (((x329&x330)==x331)%x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = INT16_MIN;
	int8_t x334 = -1;
	uint32_t x335 = 20450U;
	int8_t x336 = INT8_MIN;
	int32_t t79 = -246164887;

	t79 = (((x333&x334)==x335)%x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x337 = -1;
	static int32_t x338 = INT32_MIN;
	int32_t x339 = INT32_MAX;
	int16_t x340 = INT16_MIN;

	t80 = (((x337&x338)==x339)%x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x345 = 15LLU;
	int64_t x346 = 2289517719247711LL;
	int32_t x348 = 151;
	int32_t t81 = 244;

	t81 = (((x345&x346)==x347)%x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x349 = INT8_MIN;
	uint32_t x350 = 24768U;
	int64_t x351 = INT64_MIN;
	int64_t x352 = INT64_MIN;
	static int64_t t82 = 1491981103779244LL;

	t82 = (((x349&x350)==x351)%x352);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = INT16_MIN;
	int32_t x354 = -1;
	int64_t x355 = INT64_MIN;
	int64_t x356 = 2424555LL;
	int64_t t83 = -434438285963601850LL;

	t83 = (((x353&x354)==x355)%x356);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x357 = UINT64_MAX;
	uint16_t x358 = UINT16_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t84 = -124;

	t84 = (((x357&x358)==x359)%x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x361 = -1LL;
	static volatile int64_t x362 = INT64_MAX;
	uint8_t x363 = UINT8_MAX;
	uint16_t x364 = UINT16_MAX;
	int32_t t85 = 103040296;

	t85 = (((x361&x362)==x363)%x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x365 = -3834394LL;
	static volatile int64_t x366 = INT64_MAX;
	int16_t x367 = INT16_MIN;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t86 = -25695160;

	t86 = (((x365&x366)==x367)%x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x369 = -1;
	static int8_t x370 = INT8_MIN;
	volatile int32_t x371 = INT32_MIN;
	int64_t x372 = INT64_MIN;

	t87 = (((x369&x370)==x371)%x372);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x373 = INT8_MAX;
	int8_t x374 = -3;
	static uint16_t x375 = 7U;
	uint32_t x376 = UINT32_MAX;
	uint32_t t88 = 319460908U;

	t88 = (((x373&x374)==x375)%x376);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = INT16_MIN;
	static uint16_t x378 = 1U;
	static int32_t x380 = INT32_MIN;
	int32_t t89 = 46468;

	t89 = (((x377&x378)==x379)%x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x381 = UINT64_MAX;
	uint16_t x382 = UINT16_MAX;
	int8_t x383 = INT8_MIN;
	int16_t x384 = -1;
	volatile int32_t t90 = -1012101;

	t90 = (((x381&x382)==x383)%x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x385 = INT64_MAX;
	static int32_t x386 = -1;
	volatile int32_t x388 = INT32_MIN;
	volatile int32_t t91 = 156;

	t91 = (((x385&x386)==x387)%x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x389 = 18001674289657LLU;
	int16_t x391 = INT16_MIN;
	volatile int32_t t92 = -45399019;

	t92 = (((x389&x390)==x391)%x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x393 = 4;
	int16_t x395 = INT16_MAX;
	static int32_t x396 = INT32_MIN;
	static volatile int32_t t93 = -8;

	t93 = (((x393&x394)==x395)%x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x398 = -1;
	int16_t x400 = INT16_MAX;
	volatile int32_t t94 = -61393;

	t94 = (((x397&x398)==x399)%x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = INT32_MAX;
	uint16_t x406 = UINT16_MAX;
	int8_t x407 = 12;
	int64_t x408 = INT64_MAX;
	int64_t t95 = -5689244295046303LL;

	t95 = (((x405&x406)==x407)%x408);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = -15;
	int64_t x412 = -55LL;
	static int64_t t96 = 6564LL;

	t96 = (((x409&x410)==x411)%x412);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x413 = -140220LL;
	static uint16_t x415 = 18U;
	int32_t x416 = -1;
	static int32_t t97 = -2023529;

	t97 = (((x413&x414)==x415)%x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x418 = -2757;
	static volatile int16_t x419 = 13264;
	static uint16_t x420 = 14367U;
	int32_t t98 = -92631534;

	t98 = (((x417&x418)==x419)%x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x421 = -1;
	int8_t x422 = -50;
	uint32_t x423 = 1127300U;
	int8_t x424 = INT8_MAX;
	volatile int32_t t99 = 948146;

	t99 = (((x421&x422)==x423)%x424);

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

