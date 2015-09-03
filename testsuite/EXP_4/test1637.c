#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x16 = -1;
static volatile int32_t t3 = -168627778;
uint8_t x23 = 2U;
int64_t x28 = -1LL;
volatile uint32_t t6 = 15325594U;
static uint64_t x30 = UINT64_MAX;
int32_t t7 = -98584323;
int32_t x35 = INT32_MAX;
volatile int64_t x36 = INT64_MIN;
uint16_t x37 = 5281U;
uint8_t x44 = 108U;
int64_t t11 = 24322LL;
int8_t x56 = 1;
int32_t x67 = -1;
int32_t x68 = 3420726;
int8_t x70 = 0;
int32_t t18 = 47;
static uint32_t x77 = 8U;
int16_t x79 = INT16_MAX;
int64_t x80 = -1369688559374LL;
volatile uint32_t t19 = 495492U;
int8_t x86 = -1;
static uint32_t x89 = 180U;
uint32_t x90 = 0U;
int8_t x96 = 61;
uint64_t x99 = 407044LLU;
static int16_t x101 = -1;
volatile int16_t x104 = -1;
int32_t t25 = -280723;
volatile int32_t t26 = 999298;
int64_t x114 = -1LL;
static int8_t x118 = INT8_MIN;
int32_t x124 = 117;
volatile int16_t x126 = -1436;
volatile uint32_t x130 = 57839U;
int64_t x135 = INT64_MIN;
int64_t x137 = -1LL;
int32_t x144 = 0;
static volatile uint16_t x154 = 19486U;
int32_t t38 = INT32_MIN;
volatile int16_t x159 = -1;
uint32_t x165 = 98461608U;
uint16_t x167 = 27448U;
int16_t x168 = INT16_MIN;
uint32_t t41 = 9608995U;
volatile int16_t x174 = INT16_MIN;
volatile uint32_t t43 = 570426979U;
uint32_t t44 = 933278990U;
volatile int16_t x185 = 36;
int32_t t46 = 709441;
volatile int64_t x190 = -58782211401763607LL;
volatile int64_t t49 = INT64_MAX;
int64_t x205 = 3648LL;
static volatile int64_t t51 = -12423219168LL;
static int32_t x210 = INT32_MIN;
volatile uint16_t x213 = 2U;
uint64_t x222 = 2980532078LLU;
uint64_t x223 = UINT64_MAX;
static int64_t x227 = -1LL;
uint32_t x228 = 1U;
static int32_t t56 = -235508;
int8_t x243 = INT8_MIN;
static int32_t t60 = 19707;
int64_t x251 = 1417134821206LL;
static int32_t x257 = 1251119;
static int64_t x259 = INT64_MIN;
int64_t x266 = INT64_MIN;
uint16_t x275 = UINT16_MAX;
int16_t x281 = INT16_MIN;
volatile int64_t x282 = -10277535719608863LL;
static volatile int64_t x284 = 1330LL;
volatile int32_t t70 = 3;
int32_t x290 = -1;
static volatile uint32_t x292 = 195436U;
static int16_t x297 = INT16_MIN;
int16_t x305 = INT16_MAX;
int32_t t76 = -304993067;
int8_t x310 = -5;
static int32_t x317 = -1;
int64_t x322 = -401004LL;
int32_t x337 = INT32_MIN;
int32_t t84 = -5;
volatile int32_t x341 = INT32_MAX;
volatile uint8_t x346 = 6U;
uint8_t x349 = UINT8_MAX;
uint16_t x355 = UINT16_MAX;
static uint64_t x357 = UINT64_MAX;
static uint64_t x359 = UINT64_MAX;
int64_t x360 = -1137590LL;
uint64_t t89 = UINT64_MAX;
volatile uint16_t x369 = 23U;
int8_t x373 = INT8_MIN;
int16_t x374 = INT16_MIN;
static int32_t t95 = 213998026;
static uint64_t x385 = 408261LLU;
static uint32_t t97 = 7554473U;
volatile uint16_t x395 = 530U;
volatile int32_t t98 = 1075197;


void f0(void) {
	volatile int64_t x1 = -38992502LL;
	volatile int64_t x2 = -1274344LL;
	int32_t x3 = 3194052;
	static int16_t x4 = INT16_MAX;
	volatile int64_t t0 = 1373024225LL;

	t0 = (x1|(x2<(x3<=x4)));

	if (t0 != -38992501LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	static int16_t x6 = -4058;
	static uint64_t x7 = 73159726804323641LLU;
	int64_t x8 = 730022LL;
	int32_t t1 = -3336883;

	t1 = (x5|(x6<(x7<=x8)));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	static int8_t x10 = 1;
	int8_t x11 = 5;
	int64_t x12 = -1LL;
	int32_t t2 = 910713443;

	t2 = (x9|(x10<(x11<=x12)));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 3613U;
	int32_t x14 = -72184195;
	static uint64_t x15 = 679033LLU;

	t3 = (x13|(x14<(x15<=x16)));

	if (t3 != 3613) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 741267072312LL;
	static int64_t x18 = INT64_MIN;
	volatile uint64_t x19 = 355330837LLU;
	int8_t x20 = -5;
	int64_t t4 = 55LL;

	t4 = (x17|(x18<(x19<=x20)));

	if (t4 != 741267072313LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int32_t x22 = -3328636;
	uint32_t x24 = 85164035U;
	volatile int64_t t5 = 26LL;

	t5 = (x21|(x22<(x23<=x24)));

	if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 2840U;
	volatile int64_t x26 = -1LL;
	int64_t x27 = INT64_MIN;

	t6 = (x25|(x26<(x27<=x28)));

	if (t6 != 2841U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int64_t x31 = -99312703227027LL;
	volatile int8_t x32 = -1;

	t7 = (x29|(x30<(x31<=x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	volatile int16_t x34 = INT16_MIN;
	int32_t t8 = -44456132;

	t8 = (x33|(x34<(x35<=x36)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = UINT8_MAX;
	static int64_t x39 = INT64_MIN;
	int32_t x40 = -2920;
	int32_t t9 = 410;

	t9 = (x37|(x38<(x39<=x40)));

	if (t9 != 5281) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x41 = INT64_MIN;
	int16_t x42 = INT16_MIN;
	uint64_t x43 = UINT64_MAX;
	volatile int64_t t10 = -125299931026223LL;

	t10 = (x41|(x42<(x43<=x44)));

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 153822704209817LL;
	uint8_t x46 = UINT8_MAX;
	volatile int64_t x47 = -1LL;
	int8_t x48 = 7;

	t11 = (x45|(x46<(x47<=x48)));

	if (t11 != 153822704209817LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	static int64_t x50 = INT64_MAX;
	static volatile int8_t x51 = 0;
	int32_t x52 = -9;
	int32_t t12 = INT32_MIN;

	t12 = (x49|(x50<(x51<=x52)));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	int32_t x54 = -34165804;
	volatile int64_t x55 = INT64_MIN;
	int32_t t13 = -2;

	t13 = (x53|(x54<(x55<=x56)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 6U;
	int16_t x58 = 10625;
	int16_t x59 = INT16_MAX;
	int8_t x60 = -1;
	int32_t t14 = -9308;

	t14 = (x57|(x58<(x59<=x60)));

	if (t14 != 6) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -114676977486986395LL;
	uint32_t x62 = 506733316U;
	uint64_t x63 = 3089205218LLU;
	static volatile int64_t x64 = INT64_MAX;
	volatile int64_t t15 = -67673353LL;

	t15 = (x61|(x62<(x63<=x64)));

	if (t15 != -114676977486986395LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int8_t x66 = INT8_MAX;
	volatile int32_t t16 = INT32_MIN;

	t16 = (x65|(x66<(x67<=x68)));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	static volatile uint16_t x71 = 2056U;
	volatile int64_t x72 = INT64_MIN;
	static int64_t t17 = 16778280717086LL;

	t17 = (x69|(x70<(x71<=x72)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	static int64_t x74 = INT64_MIN;
	int32_t x75 = INT32_MIN;
	uint16_t x76 = 26781U;

	t18 = (x73|(x74<(x75<=x76)));

	if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x78 = UINT32_MAX;

	t19 = (x77|(x78<(x79<=x80)));

	if (t19 != 8U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -27;
	int16_t x82 = INT16_MAX;
	static int64_t x83 = INT64_MIN;
	static int8_t x84 = 6;
	volatile int32_t t20 = 74;

	t20 = (x81|(x82<(x83<=x84)));

	if (t20 != -27) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	uint8_t x87 = UINT8_MAX;
	volatile int16_t x88 = INT16_MIN;
	int32_t t21 = 1149;

	t21 = (x85|(x86<(x87<=x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x91 = INT32_MAX;
	static volatile uint8_t x92 = UINT8_MAX;
	uint32_t t22 = 460U;

	t22 = (x89|(x90<(x91<=x92)));

	if (t22 != 180U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x93 = -4;
	volatile int32_t x94 = INT32_MAX;
	volatile int32_t x95 = INT32_MAX;
	volatile int32_t t23 = 4030;

	t23 = (x93|(x94<(x95<=x96)));

	if (t23 != -4) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	uint32_t x98 = 11U;
	static uint32_t x100 = 13U;
	volatile int64_t t24 = INT64_MIN;

	t24 = (x97|(x98<(x99<=x100)));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = 2U;
	volatile uint16_t x103 = 8U;

	t25 = (x101|(x102<(x103<=x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 19U;
	int32_t x106 = 13565;
	volatile uint8_t x107 = 5U;
	static int16_t x108 = -1;

	t26 = (x105|(x106<(x107<=x108)));

	if (t26 != 19) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = UINT8_MAX;
	static volatile int64_t x110 = 84650685875412LL;
	int32_t x111 = 6280;
	static uint64_t x112 = 2044807LLU;
	int32_t t27 = 487;

	t27 = (x109|(x110<(x111<=x112)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = -1;
	int32_t x115 = 6890768;
	static uint32_t x116 = 643184U;
	static volatile int32_t t28 = 258906;

	t28 = (x113|(x114<(x115<=x116)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int8_t x119 = INT8_MIN;
	int16_t x120 = INT16_MIN;
	uint32_t t29 = UINT32_MAX;

	t29 = (x117|(x118<(x119<=x120)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 29U;
	int64_t x122 = INT64_MIN;
	static int64_t x123 = 513671703579LL;
	int32_t t30 = -582070;

	t30 = (x121|(x122<(x123<=x124)));

	if (t30 != 29) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	volatile uint16_t x127 = 62U;
	int8_t x128 = 14;
	int32_t t31 = 502;

	t31 = (x125|(x126<(x127<=x128)));

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	uint32_t x131 = 67U;
	int32_t x132 = 5158;
	volatile int64_t t32 = INT64_MIN;

	t32 = (x129|(x130<(x131<=x132)));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	volatile uint16_t x134 = 31263U;
	int32_t x136 = INT32_MAX;
	int32_t t33 = -1063128620;

	t33 = (x133|(x134<(x135<=x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x138 = -42326945;
	uint16_t x139 = 750U;
	int16_t x140 = 0;
	volatile int64_t t34 = -418LL;

	t34 = (x137|(x138<(x139<=x140)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 238346258404032LLU;
	int64_t x142 = INT64_MIN;
	static uint8_t x143 = 18U;
	volatile uint64_t t35 = 32647270010LLU;

	t35 = (x141|(x142<(x143<=x144)));

	if (t35 != 238346258404033LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	uint16_t x146 = UINT16_MAX;
	volatile int16_t x147 = INT16_MIN;
	static volatile uint64_t x148 = 86172191LLU;
	int64_t t36 = INT64_MAX;

	t36 = (x145|(x146<(x147<=x148)));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MIN;
	uint64_t x150 = UINT64_MAX;
	static uint64_t x151 = 3204688178280349946LLU;
	static volatile int32_t x152 = -76;
	int32_t t37 = -360389258;

	t37 = (x149|(x150<(x151<=x152)));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int8_t x155 = INT8_MAX;
	int32_t x156 = INT32_MAX;

	t38 = (x153|(x154<(x155<=x156)));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MAX;
	int32_t x160 = INT32_MIN;
	static int32_t t39 = INT32_MIN;

	t39 = (x157|(x158<(x159<=x160)));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	uint8_t x162 = UINT8_MAX;
	int32_t x163 = INT32_MIN;
	int16_t x164 = -1;
	int32_t t40 = -897073;

	t40 = (x161|(x162<(x163<=x164)));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x166 = 3U;

	t41 = (x165|(x166<(x167<=x168)));

	if (t41 != 98461608U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = 0;
	uint64_t x171 = UINT64_MAX;
	int8_t x172 = INT8_MAX;
	volatile int32_t t42 = 5108;

	t42 = (x169|(x170<(x171<=x172)));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x173 = 0U;
	uint32_t x175 = 1U;
	uint64_t x176 = 1789LLU;

	t43 = (x173|(x174<(x175<=x176)));

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x177 = 1682U;
	uint16_t x178 = 7462U;
	int64_t x179 = 4257675211827562LL;
	int32_t x180 = INT32_MIN;

	t44 = (x177|(x178<(x179<=x180)));

	if (t44 != 1682U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -2;
	static uint16_t x182 = UINT16_MAX;
	uint16_t x183 = 43U;
	int16_t x184 = -463;
	int32_t t45 = 2968;

	t45 = (x181|(x182<(x183<=x184)));

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x186 = UINT8_MAX;
	static uint32_t x187 = 14476169U;
	uint8_t x188 = UINT8_MAX;

	t46 = (x185|(x186<(x187<=x188)));

	if (t46 != 36) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -8333424401299LL;
	static int64_t x191 = INT64_MIN;
	uint8_t x192 = 3U;
	volatile int64_t t47 = 5LL;

	t47 = (x189|(x190<(x191<=x192)));

	if (t47 != -8333424401299LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	uint32_t x194 = 31U;
	uint32_t x195 = 5846U;
	int16_t x196 = INT16_MAX;
	uint32_t t48 = UINT32_MAX;

	t48 = (x193|(x194<(x195<=x196)));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MAX;
	static int8_t x198 = 59;
	volatile int16_t x199 = INT16_MIN;
	int64_t x200 = INT64_MIN;

	t49 = (x197|(x198<(x199<=x200)));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = UINT8_MAX;
	int16_t x202 = INT16_MIN;
	volatile int16_t x203 = -194;
	int16_t x204 = 1;
	static int32_t t50 = 1;

	t50 = (x201|(x202<(x203<=x204)));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x206 = UINT64_MAX;
	volatile uint64_t x207 = 403082878938LLU;
	static int64_t x208 = -1047629141653LL;

	t51 = (x205|(x206<(x207<=x208)));

	if (t51 != 3648LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 435239025738LLU;
	uint16_t x211 = UINT16_MAX;
	static volatile int32_t x212 = INT32_MAX;
	volatile uint64_t t52 = 1647LLU;

	t52 = (x209|(x210<(x211<=x212)));

	if (t52 != 435239025739LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = -1;
	uint32_t x215 = 17U;
	volatile int8_t x216 = -1;
	volatile int32_t t53 = -256760963;

	t53 = (x213|(x214<(x215<=x216)));

	if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;
	int32_t x218 = -28;
	int64_t x219 = INT64_MIN;
	volatile int32_t x220 = INT32_MIN;
	int32_t t54 = 30457;

	t54 = (x217|(x218<(x219<=x220)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = INT64_MIN;
	static uint64_t x224 = 5964171263587402796LLU;
	static int64_t t55 = INT64_MIN;

	t55 = (x221|(x222<(x223<=x224)));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1985;
	int16_t x226 = -1;

	t56 = (x225|(x226<(x227<=x228)));

	if (t56 != -1985) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -62;
	static volatile int8_t x230 = INT8_MIN;
	int16_t x231 = -1;
	static int32_t x232 = INT32_MIN;
	volatile int32_t t57 = 8496;

	t57 = (x229|(x230<(x231<=x232)));

	if (t57 != -61) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MIN;
	static int32_t x236 = INT32_MAX;
	volatile int32_t t58 = 24167;

	t58 = (x233|(x234<(x235<=x236)));

	if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = -13;
	int8_t x238 = 13;
	int8_t x239 = -1;
	uint16_t x240 = 1U;
	volatile int32_t t59 = -424;

	t59 = (x237|(x238<(x239<=x240)));

	if (t59 != -13) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MIN;
	int8_t x242 = -1;
	int8_t x244 = -1;

	t60 = (x241|(x242<(x243<=x244)));

	if (t60 != -2147483647) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 0LLU;
	int64_t x246 = INT64_MIN;
	int32_t x247 = 21721;
	uint8_t x248 = UINT8_MAX;
	volatile uint64_t t61 = 402824124410112923LLU;

	t61 = (x245|(x246<(x247<=x248)));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MIN;
	uint8_t x252 = 16U;
	volatile int32_t t62 = -18646;

	t62 = (x249|(x250<(x251<=x252)));

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -296;
	uint16_t x254 = 1U;
	uint16_t x255 = UINT16_MAX;
	int8_t x256 = 7;
	volatile int32_t t63 = 128510737;

	t63 = (x253|(x254<(x255<=x256)));

	if (t63 != -296) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = -5;
	uint32_t x260 = 48235432U;
	int32_t t64 = -6606083;

	t64 = (x257|(x258<(x259<=x260)));

	if (t64 != 1251119) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = 14855;
	int64_t x263 = INT64_MIN;
	volatile int64_t x264 = -107105380824911LL;
	volatile int32_t t65 = 204907057;

	t65 = (x261|(x262<(x263<=x264)));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	uint8_t x267 = 1U;
	static uint16_t x268 = UINT16_MAX;
	int32_t t66 = 1;

	t66 = (x265|(x266<(x267<=x268)));

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 7969U;
	int8_t x270 = INT8_MIN;
	static int16_t x271 = INT16_MIN;
	uint8_t x272 = UINT8_MAX;
	static int32_t t67 = 198953;

	t67 = (x269|(x270<(x271<=x272)));

	if (t67 != 7969) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int64_t x274 = -1LL;
	volatile uint16_t x276 = 6U;
	static volatile int64_t t68 = 2265599LL;

	t68 = (x273|(x274<(x275<=x276)));

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = INT16_MIN;
	int8_t x278 = INT8_MIN;
	uint32_t x279 = UINT32_MAX;
	volatile int16_t x280 = INT16_MAX;
	static volatile int32_t t69 = 508669;

	t69 = (x277|(x278<(x279<=x280)));

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x283 = 728361LLU;

	t70 = (x281|(x282<(x283<=x284)));

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = -15;
	volatile uint32_t x287 = 59847U;
	volatile int8_t x288 = INT8_MAX;
	volatile int32_t t71 = -228200012;

	t71 = (x285|(x286<(x287<=x288)));

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = INT16_MIN;
	int64_t x291 = -1LL;
	int32_t t72 = 968;

	t72 = (x289|(x290<(x291<=x292)));

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	volatile int16_t x294 = 138;
	static int64_t x295 = INT64_MIN;
	volatile uint64_t x296 = 392LLU;
	volatile int64_t t73 = INT64_MAX;

	t73 = (x293|(x294<(x295<=x296)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x298 = INT8_MAX;
	static volatile int8_t x299 = 2;
	uint32_t x300 = UINT32_MAX;
	volatile int32_t t74 = -14;

	t74 = (x297|(x298<(x299<=x300)));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	static int64_t x302 = INT64_MAX;
	volatile int32_t x303 = 1085;
	volatile int64_t x304 = INT64_MIN;
	volatile int32_t t75 = 25;

	t75 = (x301|(x302<(x303<=x304)));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = -1716LL;
	static volatile uint64_t x307 = UINT64_MAX;
	int32_t x308 = 103774;

	t76 = (x305|(x306<(x307<=x308)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	static int16_t x311 = INT16_MIN;
	static int16_t x312 = -56;
	static int32_t t77 = 5888027;

	t77 = (x309|(x310<(x311<=x312)));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = INT8_MIN;
	volatile int32_t x314 = INT32_MIN;
	volatile int8_t x315 = INT8_MIN;
	volatile int64_t x316 = -920538489LL;
	int32_t t78 = -4029823;

	t78 = (x313|(x314<(x315<=x316)));

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x318 = 944789896867896LL;
	static uint16_t x319 = 525U;
	static uint8_t x320 = 0U;
	int32_t t79 = 1035121131;

	t79 = (x317|(x318<(x319<=x320)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MIN;
	uint16_t x323 = 6065U;
	static int64_t x324 = 35464804842LL;
	int32_t t80 = 1;

	t80 = (x321|(x322<(x323<=x324)));

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MAX;
	static uint32_t x326 = 11U;
	uint64_t x327 = 373230269694218674LLU;
	uint16_t x328 = 14U;
	int64_t t81 = INT64_MAX;

	t81 = (x325|(x326<(x327<=x328)));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	static int64_t x330 = -1LL;
	uint64_t x331 = UINT64_MAX;
	uint16_t x332 = 11343U;
	static int32_t t82 = 18245;

	t82 = (x329|(x330<(x331<=x332)));

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -8;
	int16_t x334 = -1;
	uint64_t x335 = 744005520670LLU;
	static int16_t x336 = 1;
	int32_t t83 = 965757;

	t83 = (x333|(x334<(x335<=x336)));

	if (t83 != -7) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = INT16_MIN;
	static volatile int8_t x339 = INT8_MIN;
	static int8_t x340 = INT8_MIN;

	t84 = (x337|(x338<(x339<=x340)));

	if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x342 = -49;
	static int8_t x343 = INT8_MIN;
	static int32_t x344 = INT32_MIN;
	volatile int32_t t85 = INT32_MAX;

	t85 = (x341|(x342<(x343<=x344)));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = 65U;
	int8_t x347 = -1;
	uint32_t x348 = 198721U;
	uint32_t t86 = 1U;

	t86 = (x345|(x346<(x347<=x348)));

	if (t86 != 65U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = INT64_MIN;
	uint32_t x351 = 74692U;
	int8_t x352 = -1;
	volatile int32_t t87 = -18201;

	t87 = (x349|(x350<(x351<=x352)));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = UINT64_MAX;
	static uint64_t x354 = UINT64_MAX;
	int16_t x356 = INT16_MIN;
	uint64_t t88 = UINT64_MAX;

	t88 = (x353|(x354<(x355<=x356)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x358 = INT32_MAX;

	t89 = (x357|(x358<(x359<=x360)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 10534U;
	volatile int64_t x362 = -1LL;
	static int64_t x363 = -1LL;
	static int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -58359;

	t90 = (x361|(x362<(x363<=x364)));

	if (t90 != 10535) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	int64_t x366 = -91336767520972LL;
	int64_t x367 = -16427146249LL;
	volatile int16_t x368 = -1;
	int64_t t91 = INT64_MAX;

	t91 = (x365|(x366<(x367<=x368)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = -1;
	static int16_t x371 = INT16_MIN;
	int16_t x372 = 104;
	int32_t t92 = 1568;

	t92 = (x369|(x370<(x371<=x372)));

	if (t92 != 23) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x375 = 9646U;
	int8_t x376 = INT8_MIN;
	static volatile int32_t t93 = -1;

	t93 = (x373|(x374<(x375<=x376)));

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	static int8_t x378 = -1;
	int8_t x379 = -1;
	int32_t x380 = INT32_MIN;
	static volatile int32_t t94 = 6;

	t94 = (x377|(x378<(x379<=x380)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	uint8_t x382 = 2U;
	static volatile uint32_t x383 = UINT32_MAX;
	static uint16_t x384 = 66U;

	t95 = (x381|(x382<(x383<=x384)));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	uint64_t x388 = 121314243LLU;
	uint64_t t96 = 109833966141375LLU;

	t96 = (x385|(x386<(x387<=x388)));

	if (t96 != 408261LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 46470U;
	int32_t x390 = -24068854;
	volatile uint16_t x391 = 19438U;
	uint64_t x392 = 3039388666223334670LLU;

	t97 = (x389|(x390<(x391<=x392)));

	if (t97 != 46471U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 22U;
	static uint64_t x394 = 69289307LLU;
	int32_t x396 = 7191847;

	t98 = (x393|(x394<(x395<=x396)));

	if (t98 != 22) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	static uint64_t x398 = 32110031787780LLU;
	uint64_t x399 = 4851479267599139LLU;
	uint64_t x400 = 124LLU;
	volatile int32_t t99 = -4809038;

	t99 = (x397|(x398<(x399<=x400)));

	if (t99 != -128) { NG(); } else { ; }
	
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

