#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
int64_t x2 = 264376821427LL;
volatile uint32_t t1 = 234408U;
int64_t x9 = INT64_MAX;
int32_t x11 = -529;
int64_t t2 = 325093507352968638LL;
int8_t x36 = 0;
uint8_t x37 = 14U;
uint16_t x43 = 12947U;
int64_t x66 = INT64_MIN;
uint16_t x79 = 231U;
int32_t x84 = -43751779;
uint16_t x91 = 11276U;
volatile int32_t t16 = -120;
int32_t t17 = 1717314;
static int64_t t18 = 3311712720006056076LL;
int16_t x106 = 20;
static int32_t x112 = INT32_MIN;
uint64_t x114 = 2829836467LLU;
volatile int64_t x118 = INT64_MAX;
static int16_t x125 = -1;
static int8_t x127 = INT8_MIN;
int16_t x129 = INT16_MIN;
int64_t x130 = -1LL;
int32_t x133 = -30961012;
volatile uint16_t x134 = UINT16_MAX;
volatile int8_t x142 = INT8_MIN;
int32_t x147 = INT32_MAX;
int32_t x172 = -1;
volatile int32_t t34 = 12906801;
static int8_t x174 = -1;
int8_t x175 = -3;
static int64_t t35 = 6970810990992LL;
uint32_t x183 = 78061607U;
static volatile uint32_t t36 = 2753212U;
int16_t x189 = -4840;
uint32_t x193 = 82159745U;
uint64_t x199 = UINT64_MAX;
volatile uint64_t t40 = 7567828634LLU;
volatile uint64_t x201 = 30719438768LLU;
uint64_t t41 = 85900320LLU;
volatile int16_t x205 = INT16_MIN;
int64_t x206 = -1556LL;
int32_t x207 = -1;
static uint8_t x220 = UINT8_MAX;
volatile int32_t t46 = 43;
int32_t x230 = INT32_MIN;
uint64_t x232 = 7573726507488LLU;
int8_t x245 = INT8_MIN;
int8_t x256 = INT8_MIN;
volatile uint32_t t53 = 9985634U;
uint64_t x272 = UINT64_MAX;
static int64_t x278 = -3LL;
volatile int64_t t58 = 111096417LL;
volatile uint64_t t59 = 901203990353902328LLU;
static volatile int8_t x286 = INT8_MIN;
volatile int32_t x294 = INT32_MIN;
volatile int16_t x298 = INT16_MIN;
uint32_t x303 = UINT32_MAX;
volatile int64_t t64 = -101LL;
static volatile int8_t x321 = -1;
int16_t x333 = INT16_MIN;
int64_t x336 = -174601LL;
uint32_t x362 = 3U;
int8_t x363 = INT8_MIN;
static volatile int64_t x364 = INT64_MIN;
uint8_t x369 = UINT8_MAX;
volatile uint32_t x370 = 7237858U;
uint8_t x372 = 9U;
int32_t t74 = 48183492;
static int32_t x386 = -128301;
static int32_t x387 = -99851;
uint32_t x392 = 398312U;
uint64_t t77 = 5698657413367LLU;
volatile int64_t x407 = -582LL;
volatile int32_t x409 = -51;
uint16_t x411 = 1U;
uint16_t x412 = 9U;
static int32_t t82 = -10387;
uint32_t t85 = 104155U;
static int8_t x430 = -1;
static volatile int64_t t86 = -23854695959LL;
int64_t x435 = 1961368262369LL;
uint32_t x436 = UINT32_MAX;
int8_t x437 = INT8_MIN;
static int16_t x440 = 6;
volatile int64_t x441 = -1LL;
uint8_t x442 = 27U;
int64_t x443 = -1LL;
static uint32_t x447 = 392U;
uint64_t x448 = 379835430LLU;
uint64_t x449 = 490138LLU;
int32_t x454 = INT32_MIN;
uint64_t t92 = 459313349392388LLU;
int64_t x457 = 24LL;
int64_t x468 = INT64_MIN;
int16_t x480 = -1;
int32_t x483 = 57;
volatile int16_t x488 = INT16_MAX;
int32_t x493 = INT32_MAX;


void f0(void) {
	volatile int8_t x3 = 9;
	int8_t x4 = INT8_MAX;
	volatile int64_t t0 = 242558434006942525LL;

	t0 = ((x1%(x2-x3))+x4);

	if (t0 != 32894LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	int16_t x6 = INT16_MIN;
	volatile uint32_t x7 = 6396848U;
	uint16_t x8 = UINT16_MAX;

	t1 = ((x5%(x6-x7))+x8);

	if (t1 != 6462383U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	uint8_t x12 = UINT8_MAX;

	t2 = ((x9%(x10-x11))+x12);

	if (t2 != 486LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int16_t x14 = INT16_MIN;
	int16_t x15 = -1;
	volatile int64_t x16 = INT64_MAX;
	int64_t t3 = 622LL;

	t3 = ((x13%(x14-x15))+x16);

	if (t3 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	static int32_t x18 = 2307;
	uint32_t x19 = 14797U;
	int32_t x20 = -1;
	uint32_t t4 = 1890800571U;

	t4 = ((x17%(x18-x19))+x20);

	if (t4 != 12488U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	uint16_t x22 = UINT16_MAX;
	static int8_t x23 = INT8_MIN;
	volatile int16_t x24 = INT16_MIN;
	int32_t t5 = -227673800;

	t5 = ((x21%(x22-x23))+x24);

	if (t5 != -32896) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MAX;
	int8_t x34 = INT8_MIN;
	uint64_t x35 = UINT64_MAX;
	volatile uint64_t t6 = 2425914854798950LLU;

	t6 = ((x33%(x34-x35))+x36);

	if (t6 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x38 = INT64_MIN;
	volatile int8_t x39 = INT8_MIN;
	static uint16_t x40 = 46U;
	int64_t t7 = 17710066LL;

	t7 = ((x37%(x38-x39))+x40);

	if (t7 != 60LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = 27LL;
	int64_t x42 = 13264657922LL;
	int16_t x44 = INT16_MIN;
	static volatile int64_t t8 = 1047651LL;

	t8 = ((x41%(x42-x43))+x44);

	if (t8 != -32741LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = UINT32_MAX;
	int64_t x54 = INT64_MIN;
	static uint64_t x55 = UINT64_MAX;
	uint32_t x56 = 5U;
	uint64_t t9 = 449982672270LLU;

	t9 = ((x53%(x54-x55))+x56);

	if (t9 != 4294967300LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = -1;
	int64_t x62 = 100215129817846LL;
	int64_t x63 = -1LL;
	int32_t x64 = -479354;
	static int64_t t10 = 17297691315644569LL;

	t10 = ((x61%(x62-x63))+x64);

	if (t10 != -479355LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = INT8_MIN;
	int64_t x67 = -18654LL;
	volatile uint32_t x68 = UINT32_MAX;
	int64_t t11 = 20207741LL;

	t11 = ((x65%(x66-x67))+x68);

	if (t11 != 4294967167LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = INT32_MAX;
	int32_t x70 = -14454;
	int8_t x71 = 1;
	uint8_t x72 = 23U;
	int32_t t12 = -7194383;

	t12 = ((x69%(x70-x71))+x72);

	if (t12 != 5505) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = -7;
	static int16_t x74 = INT16_MIN;
	uint64_t x75 = UINT64_MAX;
	volatile int16_t x76 = 153;
	uint64_t t13 = 716700LLU;

	t13 = ((x73%(x74-x75))+x76);

	if (t13 != 32913LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = UINT32_MAX;
	static int8_t x78 = INT8_MAX;
	uint32_t x80 = 446824U;
	static volatile uint32_t t14 = 42836U;

	t14 = ((x77%(x78-x79))+x80);

	if (t14 != 446927U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x81 = INT8_MAX;
	volatile int64_t x82 = INT64_MIN;
	uint64_t x83 = 373LLU;
	volatile uint64_t t15 = 404LLU;

	t15 = ((x81%(x82-x83))+x84);

	if (t15 != 18446744073665799964LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x89 = 15U;
	int8_t x90 = INT8_MIN;
	int16_t x92 = INT16_MIN;

	t16 = ((x89%(x90-x91))+x92);

	if (t16 != -32753) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x93 = INT16_MAX;
	volatile int16_t x94 = INT16_MIN;
	int32_t x95 = INT32_MIN;
	int8_t x96 = -4;

	t17 = ((x93%(x94-x95))+x96);

	if (t17 != 32763) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = -1;
	static int64_t x102 = 11817407376957LL;
	uint16_t x103 = 5609U;
	int16_t x104 = -1;

	t18 = ((x101%(x102-x103))+x104);

	if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x105 = -1;
	static uint64_t x107 = 1224256543LLU;
	int8_t x108 = INT8_MAX;
	volatile uint64_t t19 = 2089LLU;

	t19 = ((x105%(x106-x107))+x108);

	if (t19 != 1224256649LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x109 = INT64_MIN;
	int16_t x110 = INT16_MIN;
	int16_t x111 = 2;
	volatile int64_t t20 = 4024650LL;

	t20 = ((x109%(x110-x111))+x112);

	if (t20 != -2147483776LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x113 = INT64_MIN;
	int64_t x115 = -259LL;
	uint8_t x116 = 1U;
	volatile uint64_t t21 = 125185332LLU;

	t21 = ((x113%(x114-x115))+x116);

	if (t21 != 738502853LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x117 = 0U;
	int8_t x119 = INT8_MAX;
	int64_t x120 = -1LL;
	int64_t t22 = 771339033629748LL;

	t22 = ((x117%(x118-x119))+x120);

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = INT64_MIN;
	int16_t x122 = -1;
	int16_t x123 = INT16_MIN;
	volatile int8_t x124 = INT8_MIN;
	volatile int64_t t23 = -8146LL;

	t23 = ((x121%(x122-x123))+x124);

	if (t23 != -136LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x126 = 3U;
	int32_t x128 = -83140;
	static int32_t t24 = -17320024;

	t24 = ((x125%(x126-x127))+x128);

	if (t24 != -83141) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x131 = 8503079934124855LLU;
	int32_t x132 = INT32_MAX;
	uint64_t t25 = 415850463654LLU;

	t25 = ((x129%(x130-x131))+x132);

	if (t25 != 8503082081575735LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x135 = 47U;
	int8_t x136 = -1;
	volatile int32_t t26 = -13275101;

	t26 = ((x133%(x134-x135))+x136);

	if (t26 != -50677) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x137 = INT32_MIN;
	int64_t x138 = INT64_MIN;
	int64_t x139 = 0LL;
	int16_t x140 = INT16_MAX;
	volatile int64_t t27 = -3598917219354226LL;

	t27 = ((x137%(x138-x139))+x140);

	if (t27 != -2147450881LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x141 = UINT16_MAX;
	int32_t x143 = INT32_MIN;
	static uint8_t x144 = UINT8_MAX;
	static volatile int32_t t28 = -232728;

	t28 = ((x141%(x142-x143))+x144);

	if (t28 != 65790) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x145 = INT8_MAX;
	volatile uint32_t x146 = UINT32_MAX;
	volatile int8_t x148 = 0;
	volatile uint32_t t29 = 1454218U;

	t29 = ((x145%(x146-x147))+x148);

	if (t29 != 127U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x149 = INT8_MAX;
	int64_t x150 = -1LL;
	int32_t x151 = -13058824;
	int16_t x152 = INT16_MIN;
	volatile int64_t t30 = 1816344322843290LL;

	t30 = ((x149%(x150-x151))+x152);

	if (t30 != -32641LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x157 = INT8_MAX;
	uint64_t x158 = 6142162LLU;
	int16_t x159 = INT16_MIN;
	int16_t x160 = INT16_MAX;
	static volatile uint64_t t31 = 207LLU;

	t31 = ((x157%(x158-x159))+x160);

	if (t31 != 32894LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x161 = 33U;
	int32_t x162 = -10299436;
	int16_t x163 = INT16_MIN;
	volatile int8_t x164 = INT8_MIN;
	volatile int32_t t32 = 31877576;

	t32 = ((x161%(x162-x163))+x164);

	if (t32 != -95) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x165 = 7943434629747952LL;
	int16_t x166 = -11090;
	uint8_t x167 = 12U;
	static volatile int16_t x168 = INT16_MAX;
	int64_t t33 = 88867890849LL;

	t33 = ((x165%(x166-x167))+x168);

	if (t33 != 37015LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x169 = INT8_MAX;
	volatile uint16_t x170 = 9U;
	uint16_t x171 = 7U;

	t34 = ((x169%(x170-x171))+x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x173 = INT64_MAX;
	uint16_t x176 = 60U;

	t35 = ((x173%(x174-x175))+x176);

	if (t35 != 61LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x181 = -1;
	static int16_t x182 = 6659;
	static uint8_t x184 = 1U;

	t36 = ((x181%(x182-x183))+x184);

	if (t36 != 78054948U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x185 = INT8_MIN;
	int32_t x186 = -1;
	int8_t x187 = INT8_MAX;
	static int32_t x188 = 493;
	volatile int32_t t37 = -1640;

	t37 = ((x185%(x186-x187))+x188);

	if (t37 != 493) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x190 = INT16_MIN;
	volatile int32_t x191 = INT32_MIN;
	uint64_t x192 = 3458120LLU;
	uint64_t t38 = 99478LLU;

	t38 = ((x189%(x190-x191))+x192);

	if (t38 != 3453280LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x194 = INT32_MIN;
	volatile int32_t x195 = -29441;
	int8_t x196 = INT8_MIN;
	volatile uint32_t t39 = 36298U;

	t39 = ((x193%(x194-x195))+x196);

	if (t39 != 82159617U) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x197 = 36;
	uint32_t x198 = 2599420U;
	uint8_t x200 = 2U;

	t40 = ((x197%(x198-x199))+x200);

	if (t40 != 38LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x202 = UINT32_MAX;
	static volatile uint32_t x203 = 2723U;
	int32_t x204 = -1;

	t41 = ((x201%(x202-x203))+x204);

	if (t41 != 654686763LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x208 = 219U;
	int64_t t42 = -49257920LL;

	t42 = ((x205%(x206-x207))+x208);

	if (t42 != 106LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x209 = -365796695LL;
	volatile int32_t x210 = 45210;
	uint32_t x211 = UINT32_MAX;
	static int8_t x212 = -1;
	int64_t t43 = -3845708120LL;

	t43 = ((x209%(x210-x211))+x212);

	if (t43 != -39706LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = INT32_MIN;
	static uint64_t x214 = 320LLU;
	volatile int64_t x215 = -946117980997107LL;
	int16_t x216 = INT16_MIN;
	uint64_t t44 = 44866824LLU;

	t44 = ((x213%(x214-x215))+x216);

	if (t44 != 281796055200981LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x217 = INT64_MIN;
	uint32_t x218 = 225908U;
	static int8_t x219 = -29;
	int64_t t45 = 1LL;

	t45 = ((x217%(x218-x219))+x220);

	if (t45 != -114672LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x221 = -3;
	int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	int8_t x224 = -1;

	t46 = ((x221%(x222-x223))+x224);

	if (t46 != -4) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = INT32_MIN;
	volatile int8_t x231 = INT8_MIN;
	volatile uint64_t t47 = 90989650680129141LLU;

	t47 = ((x229%(x230-x231))+x232);

	if (t47 != 7573726507360LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x233 = 334648079U;
	uint8_t x234 = 67U;
	int8_t x235 = -5;
	volatile int8_t x236 = INT8_MAX;
	uint32_t t48 = 318U;

	t48 = ((x233%(x234-x235))+x236);

	if (t48 != 198U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x237 = 0U;
	int16_t x238 = 0;
	int16_t x239 = INT16_MAX;
	int64_t x240 = -1397885933LL;
	int64_t t49 = 823LL;

	t49 = ((x237%(x238-x239))+x240);

	if (t49 != -1397885933LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x241 = 0U;
	volatile uint8_t x242 = 47U;
	static volatile int16_t x243 = -1;
	int8_t x244 = -1;
	int32_t t50 = 1;

	t50 = ((x241%(x242-x243))+x244);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x246 = INT64_MIN;
	static uint64_t x247 = UINT64_MAX;
	uint64_t x248 = UINT64_MAX;
	static uint64_t t51 = 3LLU;

	t51 = ((x245%(x246-x247))+x248);

	if (t51 != 9223372036854775678LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x253 = INT8_MIN;
	int8_t x254 = 1;
	volatile int8_t x255 = INT8_MIN;
	volatile int32_t t52 = 19100;

	t52 = ((x253%(x254-x255))+x256);

	if (t52 != -256) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x257 = INT16_MIN;
	uint32_t x258 = 323726U;
	int16_t x259 = INT16_MIN;
	int16_t x260 = INT16_MAX;

	t53 = ((x257%(x258-x259))+x260);

	if (t53 != 284077U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x261 = UINT64_MAX;
	int8_t x262 = -1;
	int16_t x263 = INT16_MIN;
	int64_t x264 = -1LL;
	volatile uint64_t t54 = 118LLU;

	t54 = ((x261%(x262-x263))+x264);

	if (t54 != 14LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x265 = INT32_MIN;
	volatile uint64_t x266 = 205218357894588055LLU;
	uint32_t x267 = UINT32_MAX;
	int8_t x268 = INT8_MIN;
	volatile uint64_t t55 = 33170159300670LLU;

	t55 = ((x265%(x266-x267))+x268);

	if (t55 != 182310601195820200LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x269 = UINT8_MAX;
	int64_t x270 = -14858078324561LL;
	int16_t x271 = 7;
	static uint64_t t56 = 1087783777LLU;

	t56 = ((x269%(x270-x271))+x272);

	if (t56 != 254LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x273 = 362U;
	static int16_t x274 = INT16_MIN;
	static volatile int16_t x275 = -5705;
	uint16_t x276 = UINT16_MAX;
	uint32_t t57 = 192U;

	t57 = ((x273%(x274-x275))+x276);

	if (t57 != 65897U) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x277 = -1;
	static volatile int8_t x279 = INT8_MAX;
	uint16_t x280 = 2U;

	t58 = ((x277%(x278-x279))+x280);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x281 = 2017LLU;
	int16_t x282 = -3739;
	uint64_t x283 = 287896512818LLU;
	int8_t x284 = -1;

	t59 = ((x281%(x282-x283))+x284);

	if (t59 != 2016LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x285 = 269U;
	int16_t x287 = INT16_MIN;
	uint8_t x288 = 10U;
	volatile int32_t t60 = 0;

	t60 = ((x285%(x286-x287))+x288);

	if (t60 != 279) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x293 = UINT64_MAX;
	uint8_t x295 = 0U;
	static volatile uint32_t x296 = 3789580U;
	uint64_t t61 = 77261340LLU;

	t61 = ((x293%(x294-x295))+x296);

	if (t61 != 2151273227LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x297 = INT64_MAX;
	static uint64_t x299 = 311LLU;
	uint64_t x300 = UINT64_MAX;
	uint64_t t62 = 70926718662709241LLU;

	t62 = ((x297%(x298-x299))+x300);

	if (t62 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = INT16_MAX;
	volatile uint32_t x302 = 1256585664U;
	volatile uint8_t x304 = 3U;
	volatile uint32_t t63 = 4112229U;

	t63 = ((x301%(x302-x303))+x304);

	if (t63 != 32770U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x309 = UINT16_MAX;
	int64_t x310 = -58080088448063LL;
	int8_t x311 = -4;
	int64_t x312 = INT64_MIN;

	t64 = ((x309%(x310-x311))+x312);

	if (t64 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x322 = -3245LL;
	int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	int64_t t65 = -96393177LL;

	t65 = ((x321%(x322-x323))+x324);

	if (t65 != -32769LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x325 = -1;
	volatile uint32_t x326 = 5140U;
	int8_t x327 = INT8_MAX;
	int16_t x328 = INT16_MIN;
	volatile uint32_t t66 = 371U;

	t66 = ((x325%(x326-x327))+x328);

	if (t66 != 4294938878U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x329 = -16307;
	int64_t x330 = -1LL;
	uint8_t x331 = UINT8_MAX;
	int64_t x332 = -1LL;
	volatile int64_t t67 = -745062583120524108LL;

	t67 = ((x329%(x330-x331))+x332);

	if (t67 != -180LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x334 = 119U;
	int8_t x335 = -1;
	static int64_t t68 = -60077789958LL;

	t68 = ((x333%(x334-x335))+x336);

	if (t68 != -174609LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x337 = 863381U;
	int8_t x338 = -1;
	uint8_t x339 = 6U;
	int8_t x340 = 0;
	volatile uint32_t t69 = 3946902U;

	t69 = ((x337%(x338-x339))+x340);

	if (t69 != 863381U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x345 = -65;
	int64_t x346 = 4643102452661871LL;
	volatile int32_t x347 = INT32_MAX;
	int64_t x348 = -1LL;
	volatile int64_t t70 = -3688089626LL;

	t70 = ((x345%(x346-x347))+x348);

	if (t70 != -66LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x353 = 0;
	uint16_t x354 = 972U;
	int16_t x355 = -1;
	int16_t x356 = -48;
	int32_t t71 = -136;

	t71 = ((x353%(x354-x355))+x356);

	if (t71 != -48) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x361 = INT16_MIN;
	volatile int64_t t72 = 2889597292785963732LL;

	t72 = ((x361%(x362-x363))+x364);

	if (t72 != -9223372036854775709LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x371 = 4U;
	static volatile uint32_t t73 = 13U;

	t73 = ((x369%(x370-x371))+x372);

	if (t73 != 264U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x373 = 2;
	static int16_t x374 = -274;
	static int32_t x375 = 17;
	int32_t x376 = -1;

	t74 = ((x373%(x374-x375))+x376);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x377 = -1;
	static uint16_t x378 = 0U;
	static int8_t x379 = -3;
	int8_t x380 = INT8_MIN;
	int32_t t75 = 59608;

	t75 = ((x377%(x378-x379))+x380);

	if (t75 != -129) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x385 = 813648U;
	uint32_t x388 = 22346138U;
	static uint32_t t76 = 6778U;

	t76 = ((x385%(x386-x387))+x388);

	if (t76 != 23159786U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x389 = INT32_MIN;
	volatile uint32_t x390 = UINT32_MAX;
	uint64_t x391 = 6621916LLU;

	t77 = ((x389%(x390-x391))+x392);

	if (t77 != 3594514657LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x393 = UINT64_MAX;
	int8_t x394 = -1;
	int32_t x395 = INT32_MIN;
	volatile int16_t x396 = INT16_MIN;
	uint64_t t78 = 3453796753LLU;

	t78 = ((x393%(x394-x395))+x396);

	if (t78 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x401 = INT64_MAX;
	uint8_t x402 = 106U;
	static volatile uint8_t x403 = 3U;
	int16_t x404 = -152;
	static int64_t t79 = -34624837935039203LL;

	t79 = ((x401%(x402-x403))+x404);

	if (t79 != -74LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x405 = 7122;
	volatile uint16_t x406 = 4467U;
	volatile uint16_t x408 = 2U;
	volatile int64_t t80 = -184675LL;

	t80 = ((x405%(x406-x407))+x408);

	if (t80 != 2075LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x410 = UINT64_MAX;
	uint64_t t81 = 17607606624055LLU;

	t81 = ((x409%(x410-x411))+x412);

	if (t81 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x413 = INT16_MIN;
	int32_t x414 = 235859871;
	static int16_t x415 = -2;
	uint16_t x416 = 8U;

	t82 = ((x413%(x414-x415))+x416);

	if (t82 != -32760) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x417 = UINT32_MAX;
	int8_t x418 = -1;
	int16_t x419 = INT16_MIN;
	int64_t x420 = 953LL;
	static int64_t t83 = 1292169400567321945LL;

	t83 = ((x417%(x418-x419))+x420);

	if (t83 != 956LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x421 = INT8_MAX;
	uint32_t x422 = 704472214U;
	volatile int16_t x423 = INT16_MIN;
	static volatile uint8_t x424 = 1U;
	volatile uint32_t t84 = 310834338U;

	t84 = ((x421%(x422-x423))+x424);

	if (t84 != 128U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x425 = INT16_MIN;
	uint8_t x426 = 5U;
	uint32_t x427 = UINT32_MAX;
	uint32_t x428 = UINT32_MAX;

	t85 = ((x425%(x426-x427))+x428);

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x429 = INT64_MAX;
	int8_t x431 = INT8_MAX;
	static int64_t x432 = INT64_MIN;

	t86 = ((x429%(x430-x431))+x432);

	if (t86 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x433 = INT32_MIN;
	volatile int32_t x434 = -7;
	volatile int64_t t87 = 1000290LL;

	t87 = ((x433%(x434-x435))+x436);

	if (t87 != 2147483647LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x438 = INT16_MIN;
	static int64_t x439 = 51195405067089LL;
	static int64_t t88 = -243LL;

	t88 = ((x437%(x438-x439))+x440);

	if (t88 != -122LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x444 = -11492406;
	volatile int64_t t89 = 43810352025718LL;

	t89 = ((x441%(x442-x443))+x444);

	if (t89 != -11492407LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x445 = 52;
	static int32_t x446 = INT32_MAX;
	uint64_t t90 = 1281719063089LLU;

	t90 = ((x445%(x446-x447))+x448);

	if (t90 != 379835482LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x450 = 25LLU;
	uint16_t x451 = 52U;
	static uint16_t x452 = 50U;
	uint64_t t91 = 9248252LLU;

	t91 = ((x449%(x450-x451))+x452);

	if (t91 != 490188LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x453 = 34U;
	uint64_t x455 = UINT64_MAX;
	static uint16_t x456 = UINT16_MAX;

	t92 = ((x453%(x454-x455))+x456);

	if (t92 != 65569LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x458 = INT32_MIN;
	volatile int16_t x459 = -1;
	int32_t x460 = -77975365;
	int64_t t93 = -2LL;

	t93 = ((x457%(x458-x459))+x460);

	if (t93 != -77975341LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x465 = 82U;
	static volatile int8_t x466 = 0;
	int64_t x467 = 3LL;
	int64_t t94 = -3545425044LL;

	t94 = ((x465%(x466-x467))+x468);

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x473 = 5;
	uint64_t x474 = UINT64_MAX;
	uint32_t x475 = 407572U;
	static int16_t x476 = 5;
	volatile uint64_t t95 = 101176811460630LLU;

	t95 = ((x473%(x474-x475))+x476);

	if (t95 != 10LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x477 = INT32_MAX;
	int64_t x478 = -1LL;
	int16_t x479 = INT16_MIN;
	int64_t t96 = 452977941320465343LL;

	t96 = ((x477%(x478-x479))+x480);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x481 = INT32_MIN;
	uint16_t x482 = UINT16_MAX;
	uint16_t x484 = UINT16_MAX;
	volatile int32_t t97 = -99;

	t97 = ((x481%(x482-x483))+x484);

	if (t97 != 63853) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x485 = -1LL;
	uint16_t x486 = UINT16_MAX;
	uint64_t x487 = 4486978376947736038LLU;
	uint64_t t98 = 631655850574LLU;

	t98 = ((x485%(x486-x487))+x488);

	if (t98 != 4486978376947703269LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x494 = INT32_MAX;
	int64_t x495 = 57471576360553889LL;
	volatile int32_t x496 = INT32_MAX;
	static volatile int64_t t99 = 16714LL;

	t99 = ((x493%(x494-x495))+x496);

	if (t99 != 4294967294LL) { NG(); } else { ; }
	
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

