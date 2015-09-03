#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x1 = 28754U;
static volatile uint32_t t0 = 1960U;
int64_t x10 = INT64_MIN;
int8_t x12 = INT8_MIN;
static int8_t x20 = -1;
volatile int32_t t3 = 1;
volatile uint8_t x28 = UINT8_MAX;
int64_t x30 = -5975298826LL;
int64_t x31 = INT64_MIN;
int64_t x42 = INT64_MAX;
volatile uint64_t t10 = 6653275988LLU;
int32_t x51 = INT32_MIN;
uint64_t t13 = 54767059371500LLU;
int8_t x74 = INT8_MIN;
volatile int64_t x78 = INT64_MIN;
static int64_t x79 = -16602868597LL;
volatile int64_t t17 = 337863209010292LL;
int64_t x84 = -1LL;
static int8_t x92 = -40;
int8_t x99 = -1;
static int32_t x100 = -1;
volatile uint8_t x101 = 4U;
static uint64_t t24 = 550484228188172721LLU;
int8_t x110 = INT8_MIN;
static volatile uint32_t x120 = UINT32_MAX;
static uint16_t x124 = 861U;
int64_t x125 = INT64_MAX;
int64_t t29 = 2LL;
int64_t x133 = INT64_MIN;
uint32_t x145 = UINT32_MAX;
uint8_t x150 = UINT8_MAX;
static int64_t t36 = 1338512192263773233LL;
uint32_t x160 = UINT32_MAX;
volatile int64_t t37 = 310979680760LL;
static volatile int32_t x163 = INT32_MIN;
volatile int64_t t38 = -99464502740LL;
volatile uint32_t t42 = 1778U;
uint64_t x192 = UINT64_MAX;
volatile uint64_t t45 = 25722926285LLU;
volatile int64_t t46 = 240806441LL;
uint32_t x197 = 51955918U;
uint64_t x198 = 307693342LLU;
int32_t x207 = -1;
static int8_t x210 = INT8_MIN;
int8_t x212 = INT8_MIN;
static volatile int32_t t50 = -24322542;
int16_t x215 = INT16_MIN;
int16_t x218 = INT16_MIN;
volatile int64_t x226 = INT64_MIN;
volatile int64_t t54 = 193842LL;
uint64_t x231 = UINT64_MAX;
uint64_t x233 = 12001296353461LLU;
int16_t x240 = -885;
uint32_t x251 = UINT32_MAX;
volatile int16_t x259 = -1;
volatile uint16_t x272 = 2U;
static int32_t t65 = 18614;
static uint64_t x273 = UINT64_MAX;
int16_t x276 = -575;
static volatile int32_t x283 = -1855553;
uint32_t t68 = 3U;
static volatile uint64_t t69 = 145LLU;
int16_t x296 = INT16_MAX;
volatile uint16_t x298 = UINT16_MAX;
uint16_t x299 = 26929U;
uint16_t x305 = UINT16_MAX;
uint16_t x306 = UINT16_MAX;
int16_t x308 = INT16_MIN;
static int64_t x311 = INT64_MIN;
static int64_t t75 = 1395046258LL;
volatile int32_t x314 = INT32_MAX;
static volatile uint32_t x319 = UINT32_MAX;
uint8_t x320 = 90U;
static int32_t x321 = INT32_MAX;
static uint64_t x324 = UINT64_MAX;
int32_t x326 = INT32_MIN;
volatile uint32_t t79 = 1041092666U;
int32_t x329 = -11049600;
int32_t x361 = INT32_MIN;
int16_t x367 = 239;
int64_t t91 = -541889053517LL;
int64_t t92 = 189273070LL;
uint64_t x391 = UINT64_MAX;
volatile int8_t x394 = INT8_MIN;
static volatile int64_t t95 = 11LL;
uint8_t x409 = 8U;
int8_t x416 = INT8_MIN;


void f0(void) {
	static int32_t x2 = 5369689;
	int8_t x3 = INT8_MIN;
	uint32_t x4 = 85507798U;

	t0 = ((x1|(x2%x3))/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 0U;
	volatile int16_t x6 = 1;
	volatile int64_t x7 = -2146818148LL;
	int8_t x8 = INT8_MIN;
	volatile int64_t t1 = -3700273812LL;

	t1 = ((x5|(x6%x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 18;
	volatile int32_t x11 = -1;
	volatile int64_t t2 = 0LL;

	t2 = ((x9|(x10%x11))/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MAX;
	uint16_t x18 = UINT16_MAX;
	volatile int32_t x19 = INT32_MIN;

	t3 = ((x17|(x18%x19))/x20);

	if (t3 != -65535) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x21 = UINT16_MAX;
	int64_t x22 = INT64_MIN;
	uint64_t x23 = 3LLU;
	uint32_t x24 = 914189862U;
	static volatile uint64_t t4 = 27499531996191LLU;

	t4 = ((x21|(x22%x23))/x24);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = 76;
	volatile int32_t x26 = -1;
	int64_t x27 = INT64_MIN;
	volatile int64_t t5 = -4062949469764956LL;

	t5 = ((x25|(x26%x27))/x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 1U;
	int32_t x32 = INT32_MIN;
	int64_t t6 = 2258555640612532369LL;

	t6 = ((x29|(x30%x31))/x32);

	if (t6 != 2LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	int32_t x34 = INT32_MIN;
	uint8_t x35 = UINT8_MAX;
	int64_t x36 = INT64_MIN;
	static int64_t t7 = 9273715324749666LL;

	t7 = ((x33|(x34%x35))/x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	uint8_t x38 = 23U;
	int16_t x39 = INT16_MIN;
	volatile uint8_t x40 = UINT8_MAX;
	volatile uint64_t t8 = 98673445380LLU;

	t8 = ((x37|(x38%x39))/x40);

	if (t8 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int32_t x43 = INT32_MAX;
	int8_t x44 = -1;
	int64_t t9 = INT64_MAX;

	t9 = ((x41|(x42%x43))/x44);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MAX;
	uint16_t x46 = 0U;
	volatile uint64_t x47 = UINT64_MAX;
	uint16_t x48 = 10U;

	t10 = ((x45|(x46%x47))/x48);

	if (t10 != 922337203685477580LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MAX;
	int8_t x50 = INT8_MAX;
	int64_t x52 = -8275597660823710LL;
	volatile int64_t t11 = 205500301036LL;

	t11 = ((x49|(x50%x51))/x52);

	if (t11 != -1114LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 376381;
	int16_t x54 = 0;
	static int32_t x55 = INT32_MIN;
	volatile int64_t x56 = -1LL;
	static int64_t t12 = 1212591673171804561LL;

	t12 = ((x53|(x54%x55))/x56);

	if (t12 != -376381LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x57 = UINT64_MAX;
	static int32_t x58 = INT32_MIN;
	int32_t x59 = 4516484;
	int32_t x60 = INT32_MIN;

	t13 = ((x57|(x58%x59))/x60);

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 2100685U;
	volatile uint32_t x66 = UINT32_MAX;
	int16_t x67 = INT16_MIN;
	volatile uint64_t x68 = 10237LLU;
	static uint64_t t14 = 1LLU;

	t14 = ((x65|(x66%x67))/x68);

	if (t14 != 208LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = -1;
	uint64_t x70 = 55880963974394020LLU;
	uint16_t x71 = 42U;
	static volatile int32_t x72 = 6;
	uint64_t t15 = 4897422441091523LLU;

	t15 = ((x69|(x70%x71))/x72);

	if (t15 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -1;
	volatile int16_t x75 = INT16_MIN;
	int8_t x76 = INT8_MAX;
	int32_t t16 = -397557;

	t16 = ((x73|(x74%x75))/x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MIN;
	int8_t x80 = INT8_MIN;

	t17 = ((x77|(x78%x79))/x80);

	if (t17 != 26113852LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = 1U;
	static volatile int16_t x82 = -1965;
	int64_t x83 = INT64_MIN;
	int64_t t18 = -100758LL;

	t18 = ((x81|(x82%x83))/x84);

	if (t18 != 1965LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = 232471382173LLU;
	static uint64_t x86 = 163LLU;
	int32_t x87 = 28;
	int32_t x88 = -1;
	volatile uint64_t t19 = 645150652267901LLU;

	t19 = ((x85|(x86%x87))/x88);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = INT16_MIN;
	static uint16_t x90 = UINT16_MAX;
	static uint64_t x91 = UINT64_MAX;
	static uint64_t t20 = 0LLU;

	t20 = ((x89|(x90%x91))/x92);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MAX;
	int16_t x95 = 208;
	int32_t x96 = -577240;
	volatile int32_t t21 = 618;

	t21 = ((x93|(x94%x95))/x96);

	if (t21 != 3720) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = -1;
	static volatile uint16_t x98 = 1665U;
	volatile int32_t t22 = 390122523;

	t22 = ((x97|(x98%x99))/x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x102 = 11324992303905LLU;
	volatile int32_t x103 = -42;
	int8_t x104 = INT8_MIN;
	uint64_t t23 = 25542884616LLU;

	t23 = ((x101|(x102%x103))/x104);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -1;
	int64_t x106 = INT64_MIN;
	uint64_t x107 = UINT64_MAX;
	uint8_t x108 = UINT8_MAX;

	t24 = ((x105|(x106%x107))/x108);

	if (t24 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MIN;
	static int64_t x111 = -1LL;
	uint64_t x112 = 7268LLU;
	uint64_t t25 = 151314067456425149LLU;

	t25 = ((x109|(x110%x111))/x112);

	if (t25 != 2538077060224209LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MAX;
	static uint32_t x114 = 3663616U;
	static int32_t x115 = -237074690;
	volatile uint64_t x116 = 177318129LLU;
	volatile uint64_t t26 = 850883581129030LLU;

	t26 = ((x113|(x114%x115))/x116);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	int16_t x118 = -80;
	int16_t x119 = INT16_MIN;
	static uint32_t t27 = 3571U;

	t27 = ((x117|(x118%x119))/x120);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MIN;
	int16_t x122 = 0;
	int32_t x123 = INT32_MAX;
	static int64_t t28 = 31LL;

	t28 = ((x121|(x122%x123))/x124);

	if (t28 != -10712394932467800LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x126 = INT8_MIN;
	static uint16_t x127 = 3053U;
	int8_t x128 = INT8_MIN;

	t29 = ((x125|(x126%x127))/x128);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = UINT64_MAX;
	int16_t x130 = -1;
	volatile int16_t x131 = INT16_MIN;
	static uint8_t x132 = 1U;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = ((x129|(x130%x131))/x132);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x134 = INT8_MIN;
	static uint8_t x135 = UINT8_MAX;
	int16_t x136 = INT16_MIN;
	int64_t t31 = -454769LL;

	t31 = ((x133|(x134%x135))/x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -1;
	volatile uint64_t x138 = 3198803250209770350LLU;
	volatile int32_t x139 = 99963;
	int16_t x140 = INT16_MIN;
	uint64_t t32 = 3655897821919956060LLU;

	t32 = ((x137|(x138%x139))/x140);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = 4LL;
	volatile int8_t x142 = INT8_MAX;
	uint64_t x143 = UINT64_MAX;
	int8_t x144 = INT8_MAX;
	static volatile uint64_t t33 = 11LLU;

	t33 = ((x141|(x142%x143))/x144);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x146 = 3307586592LLU;
	uint16_t x147 = 219U;
	uint16_t x148 = 286U;
	uint64_t t34 = 71LLU;

	t34 = ((x145|(x146%x147))/x148);

	if (t34 != 15017368LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -1LL;
	uint64_t x151 = 270776904387202993LLU;
	int8_t x152 = 1;
	static uint64_t t35 = UINT64_MAX;

	t35 = ((x149|(x150%x151))/x152);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = -46;
	int64_t x154 = 230213448213LL;
	uint32_t x155 = UINT32_MAX;
	static int32_t x156 = 1;

	t36 = ((x153|(x154%x155))/x156);

	if (t36 != -38LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = INT64_MAX;
	static uint16_t x158 = 10818U;
	uint32_t x159 = UINT32_MAX;

	t37 = ((x157|(x158%x159))/x160);

	if (t37 != 2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x161 = -1LL;
	int16_t x162 = INT16_MIN;
	int64_t x164 = -1LL;

	t38 = ((x161|(x162%x163))/x164);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	volatile int8_t x166 = INT8_MAX;
	static uint16_t x167 = 10U;
	static volatile uint16_t x168 = 5419U;
	static int32_t t39 = -26561;

	t39 = ((x165|(x166%x167))/x168);

	if (t39 != -396287) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x170 = 2U;
	int16_t x171 = -1;
	static int8_t x172 = INT8_MAX;
	uint32_t t40 = 5065U;

	t40 = ((x169|(x170%x171))/x172);

	if (t40 != 33818382U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x173 = 30749650045687949LL;
	uint32_t x174 = 1861304U;
	uint16_t x175 = 11751U;
	int32_t x176 = 248142;
	static volatile int64_t t41 = 204096120436566LL;

	t41 = ((x173|(x174%x175))/x176);

	if (t41 != 123919570430LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x177 = INT8_MIN;
	uint16_t x178 = 12258U;
	uint32_t x179 = UINT32_MAX;
	static volatile int32_t x180 = INT32_MAX;

	t42 = ((x177|(x178%x179))/x180);

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x181 = 2550LL;
	static int16_t x182 = 1836;
	uint16_t x183 = UINT16_MAX;
	uint64_t x184 = 441688334LLU;
	static uint64_t t43 = 272025153222LLU;

	t43 = ((x181|(x182%x183))/x184);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x185 = UINT64_MAX;
	static int8_t x186 = INT8_MAX;
	int32_t x187 = -927023933;
	uint8_t x188 = 29U;
	uint64_t t44 = 262569493729LLU;

	t44 = ((x185|(x186%x187))/x188);

	if (t44 != 636094623231363848LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x189 = 4U;
	int32_t x190 = INT32_MIN;
	int8_t x191 = -3;

	t45 = ((x189|(x190%x191))/x192);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x193 = -1LL;
	int8_t x194 = -1;
	volatile int64_t x195 = INT64_MAX;
	volatile uint32_t x196 = UINT32_MAX;

	t46 = ((x193|(x194%x195))/x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x199 = -1;
	uint16_t x200 = 1784U;
	uint64_t t47 = 17189369671821LLU;

	t47 = ((x197|(x198%x199))/x200);

	if (t47 != 182200LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x201 = 154U;
	static uint8_t x202 = 106U;
	uint16_t x203 = UINT16_MAX;
	static uint64_t x204 = 4251650189LLU;
	uint64_t t48 = 447206517LLU;

	t48 = ((x201|(x202%x203))/x204);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x205 = 3559U;
	int64_t x206 = INT64_MAX;
	static volatile int64_t x208 = INT64_MIN;
	int64_t t49 = -7LL;

	t49 = ((x205|(x206%x207))/x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = 77862;
	static int16_t x211 = INT16_MAX;

	t50 = ((x209|(x210%x211))/x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x213 = INT8_MIN;
	volatile int64_t x214 = INT64_MIN;
	int32_t x216 = -1;
	int64_t t51 = 1192547744492LL;

	t51 = ((x213|(x214%x215))/x216);

	if (t51 != 128LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x217 = UINT8_MAX;
	uint32_t x219 = UINT32_MAX;
	int16_t x220 = INT16_MIN;
	static volatile uint32_t t52 = 73480U;

	t52 = ((x217|(x218%x219))/x220);

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = 259791382;
	volatile uint32_t x222 = UINT32_MAX;
	int16_t x223 = -4;
	static uint8_t x224 = 43U;
	volatile uint32_t t53 = 11U;

	t53 = ((x221|(x222%x223))/x224);

	if (t53 != 6041660U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = INT16_MIN;
	uint8_t x227 = UINT8_MAX;
	static int8_t x228 = -4;

	t54 = ((x225|(x226%x227))/x228);

	if (t54 != 32LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = INT64_MIN;
	int64_t x230 = INT64_MIN;
	int8_t x232 = -11;
	uint64_t t55 = 1LLU;

	t55 = ((x229|(x230%x231))/x232);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x234 = INT8_MAX;
	volatile int8_t x235 = INT8_MAX;
	int8_t x236 = INT8_MAX;
	static volatile uint64_t t56 = 10730363389403949LLU;

	t56 = ((x233|(x234%x235))/x236);

	if (t56 != 94498396483LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = -1LL;
	uint8_t x238 = UINT8_MAX;
	volatile int16_t x239 = -1;
	int64_t t57 = 680464863717565LL;

	t57 = ((x237|(x238%x239))/x240);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x241 = INT32_MAX;
	int16_t x242 = INT16_MIN;
	uint32_t x243 = 11U;
	int16_t x244 = INT16_MAX;
	uint32_t t58 = 4201627U;

	t58 = ((x241|(x242%x243))/x244);

	if (t58 != 65538U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x245 = 60786LLU;
	uint8_t x246 = UINT8_MAX;
	uint8_t x247 = 1U;
	volatile int64_t x248 = -1LL;
	uint64_t t59 = 404569416629LLU;

	t59 = ((x245|(x246%x247))/x248);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = -461057217LL;
	int64_t x250 = INT64_MAX;
	volatile int64_t x252 = INT64_MAX;
	static int64_t t60 = -55824515577381356LL;

	t60 = ((x249|(x250%x251))/x252);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x253 = 5263620611239LLU;
	volatile uint64_t x254 = UINT64_MAX;
	int64_t x255 = INT64_MIN;
	uint32_t x256 = 4064454U;
	uint64_t t61 = 156LLU;

	t61 = ((x253|(x254%x255))/x256);

	if (t61 != 2269277014047LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = 233U;
	uint16_t x258 = UINT16_MAX;
	int32_t x260 = -133582;
	static volatile uint32_t t62 = 33U;

	t62 = ((x257|(x258%x259))/x260);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = 2782U;
	int16_t x262 = 10154;
	volatile int32_t x263 = INT32_MAX;
	int64_t x264 = INT64_MIN;
	int64_t t63 = 9528679057486855LL;

	t63 = ((x261|(x262%x263))/x264);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	volatile uint8_t x266 = 24U;
	uint8_t x267 = UINT8_MAX;
	uint16_t x268 = 4U;
	static int32_t t64 = -3587;

	t64 = ((x265|(x266%x267))/x268);

	if (t64 != -536870906) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = INT16_MIN;
	static int32_t x270 = INT32_MIN;
	volatile int8_t x271 = INT8_MAX;

	t65 = ((x269|(x270%x271))/x272);

	if (t65 != -4) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x274 = UINT8_MAX;
	static volatile int32_t x275 = 20209612;
	volatile uint64_t t66 = 2327080LLU;

	t66 = ((x273|(x274%x275))/x276);

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x277 = -1;
	uint16_t x278 = 62U;
	int32_t x279 = INT32_MIN;
	int8_t x280 = INT8_MAX;
	volatile int32_t t67 = -608604582;

	t67 = ((x277|(x278%x279))/x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = INT32_MIN;
	uint32_t x282 = 3738638U;
	int32_t x284 = 4066;

	t68 = ((x281|(x282%x283))/x284);

	if (t68 != 529075U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = INT16_MIN;
	uint64_t x286 = 2280371796350330748LLU;
	int8_t x287 = -41;
	static volatile int64_t x288 = -211439427LL;

	t69 = ((x285|(x286%x287))/x288);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x289 = 20U;
	int8_t x290 = 0;
	volatile uint32_t x291 = 679U;
	int64_t x292 = -1LL;
	int64_t t70 = -92416552512669LL;

	t70 = ((x289|(x290%x291))/x292);

	if (t70 != -20LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = 1;
	int8_t x294 = INT8_MIN;
	static int64_t x295 = -1LL;
	volatile int64_t t71 = 12576603569037326LL;

	t71 = ((x293|(x294%x295))/x296);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x297 = -864820363877465LL;
	int64_t x300 = -1LL;
	static volatile int64_t t72 = 23409945360545LL;

	t72 = ((x297|(x298%x299))/x300);

	if (t72 != 864820363874369LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x301 = 7U;
	int64_t x302 = INT64_MIN;
	static volatile uint64_t x303 = UINT64_MAX;
	static int32_t x304 = 457527;
	volatile uint64_t t73 = 32561LLU;

	t73 = ((x301|(x302%x303))/x304);

	if (t73 != 20159186314370LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x307 = 1900564454LLU;
	uint64_t t74 = 220353322974439LLU;

	t74 = ((x305|(x306%x307))/x308);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x309 = 1759582U;
	volatile int8_t x310 = -19;
	uint32_t x312 = 2791626U;

	t75 = ((x309|(x310%x311))/x312);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x313 = 16969065316LLU;
	static volatile int8_t x315 = INT8_MIN;
	int64_t x316 = 19257LL;
	uint64_t t76 = 64147005LLU;

	t76 = ((x313|(x314%x315))/x316);

	if (t76 != 881189LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = -49;
	int32_t x318 = -1;
	static volatile uint32_t t77 = 40790U;

	t77 = ((x317|(x318%x319))/x320);

	if (t77 != 47721858U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x322 = 7;
	int8_t x323 = INT8_MIN;
	volatile uint64_t t78 = 91979136129LLU;

	t78 = ((x321|(x322%x323))/x324);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = INT8_MIN;
	static int16_t x327 = -2935;
	uint32_t x328 = 17169766U;

	t79 = ((x325|(x326%x327))/x328);

	if (t79 != 250U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x330 = INT8_MIN;
	int8_t x331 = -1;
	volatile int64_t x332 = INT64_MAX;
	volatile int64_t t80 = 25625112718740374LL;

	t80 = ((x329|(x330%x331))/x332);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x333 = UINT64_MAX;
	int16_t x334 = -567;
	int8_t x335 = 2;
	volatile int8_t x336 = INT8_MAX;
	volatile uint64_t t81 = 947727242634096LLU;

	t81 = ((x333|(x334%x335))/x336);

	if (t81 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x337 = UINT64_MAX;
	volatile uint16_t x338 = UINT16_MAX;
	static int64_t x339 = -1LL;
	uint16_t x340 = 1335U;
	uint64_t t82 = 0LLU;

	t82 = ((x337|(x338%x339))/x340);

	if (t82 != 13817785823003409LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x341 = 2U;
	int8_t x342 = INT8_MAX;
	static int64_t x343 = INT64_MIN;
	uint32_t x344 = 6U;
	volatile int64_t t83 = -8LL;

	t83 = ((x341|(x342%x343))/x344);

	if (t83 != 21LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = -151;
	int8_t x347 = -1;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t84 = 14382569882800211LLU;

	t84 = ((x345|(x346%x347))/x348);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = INT32_MIN;
	volatile uint8_t x350 = 9U;
	int16_t x351 = -72;
	uint16_t x352 = UINT16_MAX;
	int32_t t85 = 1709662;

	t85 = ((x349|(x350%x351))/x352);

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x353 = 422LLU;
	int64_t x354 = -1LL;
	uint8_t x355 = 7U;
	int64_t x356 = INT64_MAX;
	uint64_t t86 = 8847459084351LLU;

	t86 = ((x353|(x354%x355))/x356);

	if (t86 != 2LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x362 = 26U;
	uint16_t x363 = 59U;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t87 = 1875;

	t87 = ((x361|(x362%x363))/x364);

	if (t87 != -8421504) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = -425;
	volatile int64_t x366 = -1LL;
	int16_t x368 = -31;
	int64_t t88 = -248120786190LL;

	t88 = ((x365|(x366%x367))/x368);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MIN;
	static int64_t x374 = INT64_MIN;
	volatile int32_t x375 = INT32_MAX;
	int8_t x376 = -1;
	static int64_t t89 = -1017694820605LL;

	t89 = ((x373|(x374%x375))/x376);

	if (t89 != 2LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x377 = UINT16_MAX;
	int64_t x378 = INT64_MIN;
	int16_t x379 = INT16_MIN;
	uint8_t x380 = UINT8_MAX;
	static int64_t t90 = -232702300LL;

	t90 = ((x377|(x378%x379))/x380);

	if (t90 != 257LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = INT64_MAX;
	uint8_t x382 = 1U;
	int64_t x383 = -1751997796575418LL;
	int16_t x384 = INT16_MAX;

	t91 = ((x381|(x382%x383))/x384);

	if (t91 != 281483566907400LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x385 = -324177295;
	int64_t x386 = -1LL;
	uint16_t x387 = UINT16_MAX;
	static uint32_t x388 = 860363202U;

	t92 = ((x385|(x386%x387))/x388);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = 0;
	static int8_t x390 = INT8_MAX;
	static int64_t x392 = INT64_MIN;
	uint64_t t93 = 126750818754LLU;

	t93 = ((x389|(x390%x391))/x392);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x393 = UINT8_MAX;
	uint64_t x395 = 19203181LLU;
	volatile uint8_t x396 = UINT8_MAX;
	volatile uint64_t t94 = 211390935027071LLU;

	t94 = ((x393|(x394%x395))/x396);

	if (t94 != 39637LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = INT16_MIN;
	volatile int64_t x398 = INT64_MAX;
	volatile int8_t x399 = INT8_MIN;
	uint32_t x400 = 587U;

	t95 = ((x397|(x398%x399))/x400);

	if (t95 != -55LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x401 = 1U;
	int16_t x402 = 1;
	uint64_t x403 = 1394469053001651218LLU;
	static int8_t x404 = INT8_MIN;
	volatile uint64_t t96 = 4121478125LLU;

	t96 = ((x401|(x402%x403))/x404);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x405 = INT64_MIN;
	volatile int8_t x406 = INT8_MAX;
	int8_t x407 = INT8_MIN;
	int32_t x408 = -1;
	int64_t t97 = -52474971824522944LL;

	t97 = ((x405|(x406%x407))/x408);

	if (t97 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x410 = INT16_MIN;
	uint32_t x411 = UINT32_MAX;
	int8_t x412 = 8;
	uint32_t t98 = 90358612U;

	t98 = ((x409|(x410%x411))/x412);

	if (t98 != 536866817U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = INT16_MIN;
	uint16_t x414 = UINT16_MAX;
	uint32_t x415 = UINT32_MAX;
	volatile uint32_t t99 = 7886829U;

	t99 = ((x413|(x414%x415))/x416);

	if (t99 != 1U) { NG(); } else { ; }
	
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

