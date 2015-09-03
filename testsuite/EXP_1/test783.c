#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -324;
uint64_t x6 = UINT64_MAX;
volatile int8_t x10 = INT8_MAX;
static int8_t x14 = INT8_MIN;
uint8_t x19 = 4U;
int64_t x23 = INT64_MIN;
int16_t x24 = -1;
volatile int32_t x30 = INT32_MAX;
int64_t x32 = INT64_MIN;
int64_t x38 = INT64_MIN;
volatile int32_t x40 = -1;
static volatile int32_t t11 = -10;
int16_t x54 = 8689;
int64_t x63 = INT64_MIN;
int16_t x66 = -1;
int16_t x76 = -1;
volatile int32_t t18 = -37;
int64_t x82 = -1LL;
int8_t x85 = 0;
int64_t x88 = -1LL;
uint16_t x91 = 49U;
int32_t t21 = -36;
volatile int32_t t23 = 0;
int32_t x104 = -204073412;
int32_t t24 = -884;
int16_t x111 = -1;
uint16_t x112 = 0U;
uint8_t x117 = 7U;
volatile int32_t x121 = -1;
static int16_t x122 = -323;
static uint8_t x123 = 1U;
volatile int8_t x126 = -1;
volatile int32_t t30 = -7;
int32_t x138 = -18006;
volatile int16_t x141 = INT16_MIN;
int16_t x144 = 679;
int32_t x145 = INT32_MAX;
static int16_t x148 = -1;
static volatile int32_t t35 = -21712;
volatile int32_t t36 = -492086619;
uint32_t t39 = 865979U;
uint64_t x173 = 5800282LLU;
int32_t x176 = INT32_MIN;
int32_t x177 = INT32_MIN;
int64_t x184 = INT64_MAX;
volatile int8_t x187 = 1;
volatile int32_t t45 = INT32_MIN;
uint32_t x193 = UINT32_MAX;
uint16_t x197 = 36U;
static int16_t x198 = INT16_MIN;
static uint64_t x202 = 766248762LLU;
uint32_t x205 = 2U;
volatile int64_t t50 = -2049224676837LL;
volatile int64_t t51 = INT64_MIN;
int8_t x225 = -43;
int32_t x226 = INT32_MIN;
int16_t x228 = INT16_MIN;
int32_t x232 = -1;
int64_t x233 = -1LL;
static volatile int8_t x236 = -1;
volatile int32_t t56 = 230316;
static uint16_t x239 = UINT16_MAX;
static uint32_t x248 = UINT32_MAX;
int32_t x249 = -1;
int8_t x257 = INT8_MIN;
volatile int16_t x258 = -1;
volatile int8_t x259 = INT8_MIN;
static uint64_t t62 = 922998857972475LLU;
int32_t x263 = INT32_MIN;
volatile uint32_t x270 = 4028408U;
static volatile int32_t x273 = -1;
int8_t x277 = INT8_MAX;
int64_t x278 = -1LL;
int16_t x280 = -237;
int64_t x291 = INT64_MAX;
int16_t x293 = INT16_MIN;
int32_t t70 = INT32_MAX;
static int64_t x308 = INT64_MIN;
static int64_t t72 = INT64_MIN;
volatile int32_t t74 = -3418197;
int8_t x318 = 30;
uint8_t x321 = 1U;
int64_t x323 = 2LL;
static volatile int8_t x324 = INT8_MAX;
volatile int64_t x325 = -1LL;
volatile uint8_t x328 = 0U;
volatile uint64_t x330 = 8096310171249282LLU;
volatile int16_t x341 = 15590;
static int32_t x342 = 33252;
uint16_t x343 = 11U;
int32_t x348 = INT32_MIN;
int64_t x349 = INT64_MAX;
volatile uint64_t x356 = 1105802255176LLU;
volatile uint32_t x360 = 352532U;
int16_t x361 = -1;
int32_t x368 = INT32_MAX;
static volatile int32_t t87 = -217300;
int8_t x373 = 2;
int64_t x374 = -1LL;
uint32_t t89 = 1618696U;
volatile uint32_t x378 = 1U;
volatile int8_t x388 = -1;
uint16_t x390 = 12U;
int32_t x392 = INT32_MIN;
int8_t x411 = -1;
uint32_t x412 = 178783U;
int32_t x413 = -1406003;


void f0(void) {
	uint64_t x1 = 661769611LLU;
	volatile int64_t x2 = INT64_MIN;
	volatile int8_t x3 = 0;
	uint8_t x4 = 13U;

	t0 = (((x1%x2)<x3)*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 27332277LL;
	uint8_t x7 = UINT8_MAX;
	int64_t x8 = -10644LL;
	volatile int64_t t1 = 1617680141574080901LL;

	t1 = (((x5%x6)<x7)*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	int8_t x12 = -6;
	volatile int32_t t2 = -357393;

	t2 = (((x9%x10)<x11)*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	uint16_t x15 = 21U;
	int32_t x16 = -1;
	int32_t t3 = -6768;

	t3 = (((x13%x14)<x15)*x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -912;
	volatile uint8_t x18 = 30U;
	uint16_t x20 = 20U;
	int32_t t4 = 91734;

	t4 = (((x17%x18)<x19)*x20);

	if (t4 != 20) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	int32_t t5 = 0;

	t5 = (((x21%x22)<x23)*x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 162U;
	int32_t x26 = -1;
	int32_t x27 = 3;
	int16_t x28 = 50;
	volatile int32_t t6 = 5684;

	t6 = (((x25%x26)<x27)*x28);

	if (t6 != 50) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int16_t x31 = -1;
	int64_t t7 = INT64_MIN;

	t7 = (((x29%x30)<x31)*x32);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 57421085125LLU;
	int64_t x34 = -907296818971LL;
	int8_t x35 = 19;
	int16_t x36 = -1;
	volatile int32_t t8 = -67213338;

	t8 = (((x33%x34)<x35)*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -30404238625128895LL;
	static uint16_t x39 = UINT16_MAX;
	static int32_t t9 = -112921434;

	t9 = (((x37%x38)<x39)*x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = 9829475818636LL;
	int16_t x42 = INT16_MIN;
	static int16_t x43 = 147;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -6;

	t10 = (((x41%x42)<x43)*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -28;
	int32_t x46 = INT32_MIN;
	static uint16_t x47 = 4U;
	int16_t x48 = -22;

	t11 = (((x45%x46)<x47)*x48);

	if (t11 != -22) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x49 = 40U;
	int16_t x50 = -1;
	static uint64_t x51 = 7856LLU;
	int8_t x52 = INT8_MIN;
	static volatile int32_t t12 = -6;

	t12 = (((x49%x50)<x51)*x52);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	volatile int64_t x55 = -1307139LL;
	int16_t x56 = -1;
	int32_t t13 = 13;

	t13 = (((x53%x54)<x55)*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 129LLU;
	int16_t x62 = -1;
	int64_t x64 = 867631453978LL;
	volatile int64_t t14 = -312890974225655LL;

	t14 = (((x61%x62)<x63)*x64);

	if (t14 != 867631453978LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	int32_t x67 = 789327;
	volatile int16_t x68 = INT16_MAX;
	static volatile int32_t t15 = -16359490;

	t15 = (((x65%x66)<x67)*x68);

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MAX;
	uint8_t x70 = UINT8_MAX;
	int32_t x71 = INT32_MAX;
	uint64_t x72 = 250488872218577LLU;
	volatile uint64_t t16 = 5LLU;

	t16 = (((x69%x70)<x71)*x72);

	if (t16 != 250488872218577LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = INT16_MAX;
	int64_t x74 = INT64_MIN;
	uint64_t x75 = 1163871935239033LLU;
	static int32_t t17 = -22971;

	t17 = (((x73%x74)<x75)*x76);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 7012LLU;
	uint16_t x78 = 107U;
	uint64_t x79 = UINT64_MAX;
	int8_t x80 = -1;

	t18 = (((x77%x78)<x79)*x80);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x81 = INT16_MAX;
	uint8_t x83 = 5U;
	int8_t x84 = 10;
	static int32_t t19 = -170978;

	t19 = (((x81%x82)<x83)*x84);

	if (t19 != 10) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x86 = -1;
	volatile int64_t x87 = INT64_MIN;
	volatile int64_t t20 = 768657770LL;

	t20 = (((x85%x86)<x87)*x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = INT32_MIN;
	static uint16_t x90 = 3U;
	int8_t x92 = INT8_MIN;

	t21 = (((x89%x90)<x91)*x92);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 3862;
	static int64_t x94 = -129386119937592174LL;
	volatile uint8_t x95 = 80U;
	static uint32_t x96 = 107186U;
	uint32_t t22 = 3726869U;

	t22 = (((x93%x94)<x95)*x96);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = UINT16_MAX;
	volatile int32_t x98 = INT32_MIN;
	uint16_t x99 = UINT16_MAX;
	int16_t x100 = INT16_MIN;

	t23 = (((x97%x98)<x99)*x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 286479491U;
	uint16_t x102 = 487U;
	static uint16_t x103 = 1392U;

	t24 = (((x101%x102)<x103)*x104);

	if (t24 != -204073412) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x105 = 1;
	int64_t x106 = 2925458574460LL;
	int8_t x107 = INT8_MIN;
	uint16_t x108 = 50U;
	int32_t t25 = -2;

	t25 = (((x105%x106)<x107)*x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x109 = -1;
	int64_t x110 = -1LL;
	volatile int32_t t26 = -54477242;

	t26 = (((x109%x110)<x111)*x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MAX;
	volatile int64_t x114 = -1LL;
	int16_t x115 = INT16_MIN;
	static volatile int16_t x116 = -1;
	int32_t t27 = -5;

	t27 = (((x113%x114)<x115)*x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x118 = -7404;
	volatile uint8_t x119 = UINT8_MAX;
	int32_t x120 = -1;
	int32_t t28 = -27634946;

	t28 = (((x117%x118)<x119)*x120);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x124 = INT8_MAX;
	volatile int32_t t29 = -11;

	t29 = (((x121%x122)<x123)*x124);

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MAX;
	int16_t x127 = INT16_MIN;
	volatile int8_t x128 = -1;

	t30 = (((x125%x126)<x127)*x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = UINT64_MAX;
	int8_t x130 = INT8_MAX;
	static volatile int32_t x131 = INT32_MIN;
	int8_t x132 = INT8_MIN;
	volatile int32_t t31 = -4015;

	t31 = (((x129%x130)<x131)*x132);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = 252455441LL;
	int16_t x134 = INT16_MAX;
	uint32_t x135 = 551062828U;
	int32_t x136 = 5468;
	int32_t t32 = -122009;

	t32 = (((x133%x134)<x135)*x136);

	if (t32 != 5468) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x137 = 7;
	static volatile uint16_t x139 = 16U;
	int32_t x140 = INT32_MIN;
	volatile int32_t t33 = INT32_MIN;

	t33 = (((x137%x138)<x139)*x140);

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x142 = INT32_MIN;
	uint64_t x143 = UINT64_MAX;
	static volatile int32_t t34 = -7118;

	t34 = (((x141%x142)<x143)*x144);

	if (t34 != 679) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x146 = 8466;
	uint64_t x147 = 43286LLU;

	t35 = (((x145%x146)<x147)*x148);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MAX;
	uint64_t x150 = 1904644835674752LLU;
	static int8_t x151 = INT8_MAX;
	uint16_t x152 = UINT16_MAX;

	t36 = (((x149%x150)<x151)*x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = 2U;
	uint8_t x154 = 30U;
	static volatile int8_t x155 = 2;
	uint64_t x156 = 165902130131119106LLU;
	uint64_t t37 = 4300838LLU;

	t37 = (((x153%x154)<x155)*x156);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x157 = INT32_MIN;
	static uint8_t x158 = 12U;
	volatile uint64_t x159 = UINT64_MAX;
	int64_t x160 = 958927LL;
	int64_t t38 = 1808699941550089LL;

	t38 = (((x157%x158)<x159)*x160);

	if (t38 != 958927LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = 162861554;
	int32_t x162 = INT32_MIN;
	int32_t x163 = INT32_MIN;
	uint32_t x164 = 62965U;

	t39 = (((x161%x162)<x163)*x164);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = 0;
	static uint32_t x170 = 13U;
	volatile uint64_t x171 = 49265697LLU;
	volatile int64_t x172 = -1LL;
	int64_t t40 = 979687LL;

	t40 = (((x169%x170)<x171)*x172);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x174 = INT16_MIN;
	int32_t x175 = -25888;
	static volatile int32_t t41 = INT32_MIN;

	t41 = (((x173%x174)<x175)*x176);

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x178 = -90376116650380960LL;
	int16_t x179 = -1;
	int64_t x180 = 35953077601830301LL;
	int64_t t42 = -1649522870LL;

	t42 = (((x177%x178)<x179)*x180);

	if (t42 != 35953077601830301LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = UINT16_MAX;
	int16_t x182 = 2;
	uint32_t x183 = 169954642U;
	volatile int64_t t43 = INT64_MAX;

	t43 = (((x181%x182)<x183)*x184);

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = 41U;
	volatile int32_t x186 = -113;
	static int16_t x188 = INT16_MAX;
	volatile int32_t t44 = -9285813;

	t44 = (((x185%x186)<x187)*x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = 464238601LLU;
	uint8_t x190 = 17U;
	int64_t x191 = -1LL;
	static int32_t x192 = INT32_MIN;

	t45 = (((x189%x190)<x191)*x192);

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x194 = UINT8_MAX;
	int32_t x195 = INT32_MAX;
	int16_t x196 = 0;
	static int32_t t46 = 25;

	t46 = (((x193%x194)<x195)*x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x199 = INT32_MAX;
	static int16_t x200 = INT16_MIN;
	static int32_t t47 = 6507;

	t47 = (((x197%x198)<x199)*x200);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x201 = UINT64_MAX;
	int16_t x203 = -1;
	int32_t x204 = -3;
	volatile int32_t t48 = -21;

	t48 = (((x201%x202)<x203)*x204);

	if (t48 != -3) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x206 = 77952;
	volatile int32_t x207 = -11199;
	uint32_t x208 = UINT32_MAX;
	static volatile uint32_t t49 = UINT32_MAX;

	t49 = (((x205%x206)<x207)*x208);

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x209 = 110U;
	volatile uint8_t x210 = 37U;
	uint32_t x211 = 102U;
	volatile int64_t x212 = 16353LL;

	t50 = (((x209%x210)<x211)*x212);

	if (t50 != 16353LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x213 = UINT64_MAX;
	int8_t x214 = INT8_MAX;
	uint64_t x215 = 68208LLU;
	volatile int64_t x216 = INT64_MIN;

	t51 = (((x213%x214)<x215)*x216);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = INT64_MIN;
	int16_t x218 = 860;
	static int8_t x219 = -58;
	int64_t x220 = INT64_MIN;
	static volatile int64_t t52 = INT64_MIN;

	t52 = (((x217%x218)<x219)*x220);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = 191486;
	static int64_t x222 = -1LL;
	volatile int8_t x223 = 0;
	uint64_t x224 = UINT64_MAX;
	uint64_t t53 = 5899152734LLU;

	t53 = (((x221%x222)<x223)*x224);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x227 = -37324;
	volatile int32_t t54 = 46;

	t54 = (((x225%x226)<x227)*x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x229 = 171326866694529LLU;
	int64_t x230 = INT64_MIN;
	int64_t x231 = INT64_MIN;
	volatile int32_t t55 = -690267673;

	t55 = (((x229%x230)<x231)*x232);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x234 = 1057700829745147LL;
	int64_t x235 = INT64_MIN;

	t56 = (((x233%x234)<x235)*x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = -7;
	static int8_t x238 = -1;
	int8_t x240 = INT8_MIN;
	int32_t t57 = -96420;

	t57 = (((x237%x238)<x239)*x240);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x241 = 447948;
	static int32_t x242 = INT32_MAX;
	int32_t x243 = INT32_MAX;
	uint16_t x244 = 9632U;
	static int32_t t58 = -6;

	t58 = (((x241%x242)<x243)*x244);

	if (t58 != 9632) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = -1;
	uint8_t x246 = 12U;
	static uint8_t x247 = UINT8_MAX;
	uint32_t t59 = UINT32_MAX;

	t59 = (((x245%x246)<x247)*x248);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x250 = 17687LL;
	int64_t x251 = -1LL;
	int32_t x252 = INT32_MIN;
	int32_t t60 = 4031;

	t60 = (((x249%x250)<x251)*x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = INT16_MIN;
	volatile int32_t x254 = -839083288;
	int32_t x255 = -150143;
	int64_t x256 = INT64_MIN;
	volatile int64_t t61 = -3406217352LL;

	t61 = (((x253%x254)<x255)*x256);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x260 = 1858015373235LLU;

	t62 = (((x257%x258)<x259)*x260);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = UINT64_MAX;
	volatile uint64_t x262 = 545499275143180LLU;
	uint8_t x264 = UINT8_MAX;
	int32_t t63 = -18704;

	t63 = (((x261%x262)<x263)*x264);

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = 86949531240886LL;
	uint16_t x266 = 1790U;
	int64_t x267 = INT64_MAX;
	volatile int64_t x268 = 231312955660681011LL;
	int64_t t64 = 205667619207599514LL;

	t64 = (((x265%x266)<x267)*x268);

	if (t64 != 231312955660681011LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x269 = 0U;
	static uint16_t x271 = 405U;
	volatile int32_t x272 = -14430;
	volatile int32_t t65 = -802707;

	t65 = (((x269%x270)<x271)*x272);

	if (t65 != -14430) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x274 = INT64_MIN;
	int32_t x275 = -1;
	static uint64_t x276 = 48632LLU;
	volatile uint64_t t66 = 1971017073631325622LLU;

	t66 = (((x273%x274)<x275)*x276);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x279 = -371334;
	int32_t t67 = 31409264;

	t67 = (((x277%x278)<x279)*x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x285 = 601463260645LL;
	uint32_t x286 = 36902595U;
	int16_t x287 = INT16_MAX;
	volatile int64_t x288 = -362298724953284002LL;
	int64_t t68 = 132959948942604932LL;

	t68 = (((x285%x286)<x287)*x288);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = -849904LL;
	volatile int16_t x290 = INT16_MAX;
	uint8_t x292 = UINT8_MAX;
	int32_t t69 = 114965108;

	t69 = (((x289%x290)<x291)*x292);

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x294 = -29480;
	uint16_t x295 = UINT16_MAX;
	static int32_t x296 = INT32_MAX;

	t70 = (((x293%x294)<x295)*x296);

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x301 = 10568U;
	volatile int32_t x302 = INT32_MIN;
	int32_t x303 = 9870416;
	uint8_t x304 = 43U;
	volatile int32_t t71 = 0;

	t71 = (((x301%x302)<x303)*x304);

	if (t71 != 43) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = -3264;
	int32_t x306 = INT32_MIN;
	static uint32_t x307 = UINT32_MAX;

	t72 = (((x305%x306)<x307)*x308);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x309 = INT64_MAX;
	int16_t x310 = INT16_MIN;
	uint64_t x311 = UINT64_MAX;
	volatile uint32_t x312 = 387U;
	volatile uint32_t t73 = 2U;

	t73 = (((x309%x310)<x311)*x312);

	if (t73 != 387U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x313 = -2737;
	int64_t x314 = INT64_MIN;
	uint64_t x315 = 54205057583410LLU;
	int16_t x316 = 33;

	t74 = (((x313%x314)<x315)*x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x317 = 52LLU;
	int64_t x319 = -1061269469938464434LL;
	uint64_t x320 = 14211536027LLU;
	volatile uint64_t t75 = 146146LLU;

	t75 = (((x317%x318)<x319)*x320);

	if (t75 != 14211536027LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x322 = INT32_MIN;
	int32_t t76 = 1022;

	t76 = (((x321%x322)<x323)*x324);

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x326 = INT32_MIN;
	int64_t x327 = -20452337LL;
	static volatile int32_t t77 = -880;

	t77 = (((x325%x326)<x327)*x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x329 = 2849U;
	static volatile uint64_t x331 = 2499LLU;
	int32_t x332 = INT32_MAX;
	int32_t t78 = -3367088;

	t78 = (((x329%x330)<x331)*x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x333 = 17U;
	int32_t x334 = -1;
	volatile int16_t x335 = 31;
	static uint8_t x336 = 1U;
	volatile int32_t t79 = 628708629;

	t79 = (((x333%x334)<x335)*x336);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x337 = -1;
	static volatile int8_t x338 = -41;
	volatile int16_t x339 = -111;
	static uint16_t x340 = UINT16_MAX;
	volatile int32_t t80 = 8105989;

	t80 = (((x337%x338)<x339)*x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x344 = -1;
	int32_t t81 = 26641459;

	t81 = (((x341%x342)<x343)*x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = -13257;
	int32_t x346 = -13309919;
	int32_t x347 = -1;
	int32_t t82 = INT32_MIN;

	t82 = (((x345%x346)<x347)*x348);

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x350 = INT8_MIN;
	volatile int16_t x351 = 8;
	int16_t x352 = 0;
	int32_t t83 = 809;

	t83 = (((x349%x350)<x351)*x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x353 = UINT64_MAX;
	int8_t x354 = 3;
	int8_t x355 = INT8_MAX;
	static volatile uint64_t t84 = 7231088107LLU;

	t84 = (((x353%x354)<x355)*x356);

	if (t84 != 1105802255176LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x357 = 80U;
	int8_t x358 = INT8_MIN;
	int32_t x359 = INT32_MIN;
	uint32_t t85 = 5244038U;

	t85 = (((x357%x358)<x359)*x360);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x362 = 62;
	int32_t x363 = -1;
	volatile uint16_t x364 = 207U;
	int32_t t86 = -358537425;

	t86 = (((x361%x362)<x363)*x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = -262772;
	int8_t x366 = INT8_MIN;
	volatile int8_t x367 = INT8_MIN;

	t87 = (((x365%x366)<x367)*x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	volatile int32_t x370 = 670165305;
	volatile int64_t x371 = -1LL;
	int32_t x372 = -127682;
	int32_t t88 = 7904;

	t88 = (((x369%x370)<x371)*x372);

	if (t88 != -127682) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x375 = INT8_MIN;
	static uint32_t x376 = 89912980U;

	t89 = (((x373%x374)<x375)*x376);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = INT32_MAX;
	static uint64_t x379 = 4723981294LLU;
	static int16_t x380 = INT16_MAX;
	static int32_t t90 = 132475837;

	t90 = (((x377%x378)<x379)*x380);

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x385 = UINT64_MAX;
	volatile int16_t x386 = 2;
	int16_t x387 = 7;
	int32_t t91 = 59;

	t91 = (((x385%x386)<x387)*x388);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = INT32_MIN;
	int64_t x391 = -1LL;
	int32_t t92 = INT32_MIN;

	t92 = (((x389%x390)<x391)*x392);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x393 = UINT64_MAX;
	volatile uint32_t x394 = UINT32_MAX;
	static uint8_t x395 = UINT8_MAX;
	int8_t x396 = INT8_MAX;
	volatile int32_t t93 = -7;

	t93 = (((x393%x394)<x395)*x396);

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x401 = -1LL;
	static uint64_t x402 = 12LLU;
	volatile int16_t x403 = 1;
	uint16_t x404 = UINT16_MAX;
	static volatile int32_t t94 = 8;

	t94 = (((x401%x402)<x403)*x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x405 = INT32_MAX;
	int8_t x406 = 14;
	int32_t x407 = INT32_MAX;
	int16_t x408 = -1;
	volatile int32_t t95 = 2;

	t95 = (((x405%x406)<x407)*x408);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = -1;
	int64_t x410 = INT64_MIN;
	volatile uint32_t t96 = 36869208U;

	t96 = (((x409%x410)<x411)*x412);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x414 = -10LL;
	static int32_t x415 = INT32_MAX;
	uint64_t x416 = UINT64_MAX;
	uint64_t t97 = UINT64_MAX;

	t97 = (((x413%x414)<x415)*x416);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x417 = UINT64_MAX;
	int16_t x418 = INT16_MAX;
	uint64_t x419 = 0LLU;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t98 = -7015;

	t98 = (((x417%x418)<x419)*x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x421 = -1066;
	static int8_t x422 = INT8_MIN;
	static uint32_t x423 = 515U;
	int16_t x424 = INT16_MAX;
	volatile int32_t t99 = -508566627;

	t99 = (((x421%x422)<x423)*x424);

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

