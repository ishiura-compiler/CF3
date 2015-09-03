#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x7 = UINT32_MAX;
uint32_t t1 = 46154097U;
uint16_t x20 = UINT16_MAX;
uint64_t t4 = 7540560903LLU;
uint16_t x21 = UINT16_MAX;
uint64_t x24 = UINT64_MAX;
static volatile uint32_t x25 = 1U;
volatile int64_t t6 = 244231468LL;
volatile uint8_t x30 = 11U;
static volatile int64_t t7 = 27002LL;
int64_t x33 = INT64_MIN;
int64_t x42 = INT64_MAX;
int64_t x46 = 1LL;
uint32_t t11 = 230902U;
int64_t x63 = 53821537193531LL;
int64_t x67 = 126811980693227533LL;
int32_t x72 = INT32_MAX;
static uint32_t x77 = 26U;
static uint32_t x78 = 147003620U;
int16_t x81 = INT16_MIN;
uint32_t x84 = 7U;
uint32_t x88 = 8829U;
int32_t x92 = -1;
int64_t t21 = -5498213190147LL;
int32_t x101 = -1;
volatile int64_t x102 = -1LL;
int16_t x103 = -1;
static volatile int64_t t23 = 0LL;
volatile uint32_t t25 = 15968U;
int64_t x115 = INT64_MIN;
int64_t x116 = INT64_MAX;
uint64_t t26 = 571804397LLU;
volatile uint64_t x117 = 636443871LLU;
int8_t x124 = -12;
int64_t x126 = INT64_MAX;
int64_t t29 = -153006LL;
int32_t x130 = -1;
int64_t x132 = -1LL;
uint64_t x139 = 6063692793267763079LLU;
uint64_t t32 = 7715953613LLU;
int64_t x143 = 25066432LL;
uint64_t t34 = 28695427364264LLU;
static int32_t x150 = -62613603;
static volatile uint32_t t36 = 49U;
int8_t x159 = INT8_MAX;
uint16_t x167 = 116U;
uint64_t x174 = 31567LLU;
int16_t x175 = 2657;
static int16_t x177 = INT16_MAX;
uint16_t x181 = 14673U;
int64_t x194 = 59534984LL;
int32_t x197 = 62502114;
uint16_t x205 = 8009U;
uint16_t x212 = 1361U;
int64_t x214 = 3412222758847893LL;
uint32_t x224 = UINT32_MAX;
volatile int64_t t55 = -2018925399LL;
uint32_t x242 = 114321133U;
volatile int64_t t56 = 51928893291520LL;
static uint64_t x246 = 1056997LLU;
int32_t x247 = -1399321;
static int8_t x263 = INT8_MIN;
volatile int8_t x264 = -24;
volatile int8_t x274 = -5;
static uint16_t x287 = 487U;
uint16_t x292 = UINT16_MAX;
static volatile uint8_t x293 = UINT8_MAX;
int32_t x295 = INT32_MIN;
uint16_t x297 = UINT16_MAX;
int8_t x298 = INT8_MIN;
int8_t x300 = 40;
volatile uint8_t x308 = UINT8_MAX;
int32_t x313 = INT32_MIN;
volatile uint64_t x325 = UINT64_MAX;
int8_t x328 = INT8_MIN;
int64_t t74 = 596858LL;
int64_t x337 = INT64_MAX;
uint16_t x338 = 0U;
int8_t x342 = 5;
int32_t x349 = INT32_MIN;
uint16_t x352 = UINT16_MAX;
static uint32_t x353 = UINT32_MAX;
int32_t x364 = -181513663;
int8_t x377 = -1;
int16_t x383 = 11;
static volatile int8_t x388 = INT8_MAX;
int16_t x397 = INT16_MIN;
volatile uint32_t x411 = 342633U;
static int16_t x421 = 10557;
volatile int32_t x424 = INT32_MAX;
int16_t x438 = INT16_MIN;
int32_t x440 = INT32_MIN;
uint8_t x443 = UINT8_MAX;
int8_t x444 = -1;


void f0(void) {
	int8_t x1 = -62;
	volatile uint32_t x2 = UINT32_MAX;
	int64_t x3 = INT64_MAX;
	int64_t x4 = -1LL;
	int64_t t0 = -7365719140LL;

	t0 = ((x1|(x2/x3))+x4);

	if (t0 != -63LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 2648;
	static int8_t x6 = 25;
	int8_t x8 = INT8_MIN;

	t1 = ((x5|(x6/x7))+x8);

	if (t1 != 2520U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	int64_t x10 = INT64_MIN;
	int64_t x11 = 9569301116824174LL;
	volatile uint16_t x12 = UINT16_MAX;
	volatile int64_t t2 = -726935582LL;

	t2 = ((x9|(x10/x11))+x12);

	if (t2 != 64572LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int16_t x14 = INT16_MIN;
	static int32_t x15 = INT32_MIN;
	int16_t x16 = INT16_MIN;
	volatile int64_t t3 = 31056LL;

	t3 = ((x13|(x14/x15))+x16);

	if (t3 != -32769LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint64_t x17 = 3889LLU;
	static int32_t x18 = INT32_MIN;
	int64_t x19 = -22702LL;

	t4 = ((x17|(x18/x19))+x20);

	if (t4 != 163762LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = 7;
	static uint16_t x23 = 44U;
	volatile uint64_t t5 = 11821LLU;

	t5 = ((x21|(x22/x23))+x24);

	if (t5 != 65534LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 195U;
	uint8_t x27 = UINT8_MAX;
	volatile int64_t x28 = INT64_MIN;

	t6 = ((x25|(x26/x27))+x28);

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MAX;
	uint32_t x31 = 14177311U;
	int8_t x32 = -22;

	t7 = ((x29|(x30/x31))+x32);

	if (t7 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	int16_t x35 = 66;
	static uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = 177729658484172LLU;

	t8 = ((x33|(x34/x35))+x36);

	if (t8 != 18446744073677013984LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	int8_t x43 = INT8_MIN;
	volatile int8_t x44 = INT8_MAX;
	int64_t t9 = 402LL;

	t9 = ((x41|(x42/x43))+x44);

	if (t9 != -32640LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	int8_t x47 = INT8_MIN;
	int32_t x48 = 117;
	static volatile int64_t t10 = -12926380540950505LL;

	t10 = ((x45|(x46/x47))+x48);

	if (t10 != -9223372036854775691LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	int16_t x50 = INT16_MIN;
	volatile int16_t x51 = -1022;
	uint32_t x52 = UINT32_MAX;

	t11 = ((x49|(x50/x51))+x52);

	if (t11 != 2147483679U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x57 = INT16_MIN;
	int8_t x58 = -1;
	int32_t x59 = INT32_MIN;
	int16_t x60 = INT16_MIN;
	volatile int32_t t12 = 108182;

	t12 = ((x57|(x58/x59))+x60);

	if (t12 != -65536) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x61 = 45831990165711131LLU;
	int64_t x62 = INT64_MAX;
	static int8_t x64 = INT8_MAX;
	volatile uint64_t t13 = 259873428988934LLU;

	t13 = ((x61|(x62/x63))+x64);

	if (t13 != 45831990165880314LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -1LL;
	int64_t x66 = -143604258738210766LL;
	static uint16_t x68 = 102U;
	int64_t t14 = -1637858LL;

	t14 = ((x65|(x66/x67))+x68);

	if (t14 != 101LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = 2;
	int64_t x70 = INT64_MIN;
	uint16_t x71 = 1423U;
	int64_t t15 = 203893631102850LL;

	t15 = ((x69|(x70/x71))+x72);

	if (t15 != -6481636669701718LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x73 = -1;
	uint16_t x74 = 1U;
	static int16_t x75 = INT16_MIN;
	int16_t x76 = -757;
	int32_t t16 = 9;

	t16 = ((x73|(x74/x75))+x76);

	if (t16 != -758) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x79 = 15;
	uint8_t x80 = UINT8_MAX;
	uint32_t t17 = 11549U;

	t17 = ((x77|(x78/x79))+x80);

	if (t17 != 9800506U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x82 = 144909LLU;
	int16_t x83 = INT16_MIN;
	static volatile uint64_t t18 = 14118948426LLU;

	t18 = ((x81|(x82/x83))+x84);

	if (t18 != 18446744073709518855LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = UINT32_MAX;
	uint8_t x86 = 1U;
	int64_t x87 = INT64_MAX;
	volatile int64_t t19 = -25395LL;

	t19 = ((x85|(x86/x87))+x88);

	if (t19 != 4294976124LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = 1579U;
	volatile int16_t x90 = INT16_MAX;
	uint8_t x91 = UINT8_MAX;
	uint32_t t20 = 60557994U;

	t20 = ((x89|(x90/x91))+x92);

	if (t20 != 1706U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 9U;
	static volatile int64_t x94 = 760480840466LL;
	uint32_t x95 = UINT32_MAX;
	int8_t x96 = 17;

	t21 = ((x93|(x94/x95))+x96);

	if (t21 != 202LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x97 = INT8_MIN;
	volatile int16_t x98 = -1;
	volatile int64_t x99 = INT64_MIN;
	uint8_t x100 = UINT8_MAX;
	int64_t t22 = -5884472LL;

	t22 = ((x97|(x98/x99))+x100);

	if (t22 != 127LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x104 = 11;

	t23 = ((x101|(x102/x103))+x104);

	if (t23 != 10LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x105 = INT32_MIN;
	int8_t x106 = -25;
	static uint64_t x107 = 254062LLU;
	int64_t x108 = -136046342937183LL;
	volatile uint64_t t24 = 228067415243924LLU;

	t24 = ((x105|(x106/x107))+x108);

	if (t24 != 18446608026050629637LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x109 = 92U;
	int16_t x110 = -1;
	int8_t x111 = -7;
	uint32_t x112 = 3486578U;

	t25 = ((x109|(x110/x111))+x112);

	if (t25 != 3486670U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = 7932499LLU;
	volatile int32_t x114 = INT32_MIN;

	t26 = ((x113|(x114/x115))+x116);

	if (t26 != 9223372036862708306LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x118 = INT32_MIN;
	int32_t x119 = INT32_MIN;
	volatile int8_t x120 = 59;
	volatile uint64_t t27 = 34565LLU;

	t27 = ((x117|(x118/x119))+x120);

	if (t27 != 636443930LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x121 = UINT32_MAX;
	static int64_t x122 = -1LL;
	int32_t x123 = -1953;
	int64_t t28 = 1LL;

	t28 = ((x121|(x122/x123))+x124);

	if (t28 != 4294967283LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	uint8_t x127 = UINT8_MAX;
	int64_t x128 = 108925060278927164LL;

	t29 = ((x125|(x126/x127))+x128);

	if (t29 != 108925060278927036LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = UINT16_MAX;
	static int32_t x131 = INT32_MIN;
	volatile int64_t t30 = 13905596305582882LL;

	t30 = ((x129|(x130/x131))+x132);

	if (t30 != 65534LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = -4;
	int8_t x134 = 5;
	uint8_t x135 = 4U;
	int16_t x136 = -1;
	int32_t t31 = -28;

	t31 = ((x133|(x134/x135))+x136);

	if (t31 != -4) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = 7814;
	int64_t x138 = -39992786842LL;
	int8_t x140 = 0;

	t32 = ((x137|(x138/x139))+x140);

	if (t32 != 7815LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = -894739972LL;
	int32_t x142 = 0;
	volatile int64_t x144 = -741091LL;
	int64_t t33 = 133022810367LL;

	t33 = ((x141|(x142/x143))+x144);

	if (t33 != -895481063LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = -1;
	int8_t x146 = -1;
	volatile int8_t x147 = 1;
	volatile uint64_t x148 = UINT64_MAX;

	t34 = ((x145|(x146/x147))+x148);

	if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = -1;
	static int64_t x151 = INT64_MAX;
	int32_t x152 = -1;
	volatile int64_t t35 = -1704619LL;

	t35 = ((x149|(x150/x151))+x152);

	if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x153 = INT32_MAX;
	uint32_t x154 = UINT32_MAX;
	volatile int32_t x155 = INT32_MIN;
	uint16_t x156 = 94U;

	t36 = ((x153|(x154/x155))+x156);

	if (t36 != 2147483741U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x157 = 20U;
	volatile int32_t x158 = INT32_MIN;
	static int16_t x160 = 1;
	int32_t t37 = -1521829;

	t37 = ((x157|(x158/x159))+x160);

	if (t37 != -16909315) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MAX;
	static uint64_t x163 = 4379817851LLU;
	volatile int32_t x164 = -31;
	uint64_t t38 = 2067150686LLU;

	t38 = ((x161|(x162/x163))+x164);

	if (t38 != 9223372036854775777LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = 529226219486750LLU;
	volatile int32_t x166 = -115407855;
	uint64_t x168 = 2LLU;
	uint64_t t39 = 59588575222LLU;

	t39 = ((x165|(x166/x167))+x168);

	if (t39 != 18446744073708634049LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x173 = 234965U;
	static int8_t x176 = 1;
	uint64_t t40 = 636129LLU;

	t40 = ((x173|(x174/x175))+x176);

	if (t40 != 234976LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x178 = -16;
	static int16_t x179 = -841;
	uint8_t x180 = UINT8_MAX;
	int32_t t41 = 23;

	t41 = ((x177|(x178/x179))+x180);

	if (t41 != 33022) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x182 = INT32_MIN;
	uint16_t x183 = 47U;
	int64_t x184 = -125932985LL;
	int64_t t42 = 2852234523724938492LL;

	t42 = ((x181|(x182/x183))+x184);

	if (t42 != -171611582LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = 1;
	static int8_t x186 = 0;
	static volatile int64_t x187 = INT64_MIN;
	static volatile uint64_t x188 = UINT64_MAX;
	static uint64_t t43 = 995LLU;

	t43 = ((x185|(x186/x187))+x188);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = -21467535LL;
	static volatile uint32_t x190 = 311U;
	int64_t x191 = INT64_MIN;
	int16_t x192 = INT16_MIN;
	volatile int64_t t44 = -2191731LL;

	t44 = ((x189|(x190/x191))+x192);

	if (t44 != -21500303LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x193 = 0;
	uint16_t x195 = UINT16_MAX;
	uint32_t x196 = UINT32_MAX;
	int64_t t45 = 25LL;

	t45 = ((x193|(x194/x195))+x196);

	if (t45 != 4294968203LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x198 = INT8_MIN;
	uint16_t x199 = UINT16_MAX;
	volatile int16_t x200 = INT16_MAX;
	static int32_t t46 = -1;

	t46 = ((x197|(x198/x199))+x200);

	if (t46 != 62534881) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = INT8_MIN;
	static uint32_t x202 = UINT32_MAX;
	int64_t x203 = INT64_MIN;
	uint16_t x204 = UINT16_MAX;
	int64_t t47 = 110789779036290LL;

	t47 = ((x201|(x202/x203))+x204);

	if (t47 != 65407LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x206 = -1;
	static int64_t x207 = 1258LL;
	int32_t x208 = INT32_MAX;
	int64_t t48 = 84LL;

	t48 = ((x205|(x206/x207))+x208);

	if (t48 != 2147491656LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = -1;
	int16_t x210 = -15;
	int32_t x211 = INT32_MAX;
	static int32_t t49 = -3;

	t49 = ((x209|(x210/x211))+x212);

	if (t49 != 1360) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = -61;
	uint8_t x215 = 25U;
	volatile int32_t x216 = INT32_MAX;
	volatile int64_t t50 = -1472407281LL;

	t50 = ((x213|(x214/x215))+x216);

	if (t50 != 2147483642LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x217 = 25643U;
	static int64_t x218 = INT64_MIN;
	int16_t x219 = 12497;
	volatile int16_t x220 = -20;
	static volatile int64_t t51 = 7202569LL;

	t51 = ((x217|(x218/x219))+x220);

	if (t51 != -738046894178393LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x221 = -8;
	int64_t x222 = 46034192318LL;
	static volatile int32_t x223 = -15;
	int64_t t52 = -1LL;

	t52 = ((x221|(x222/x223))+x224);

	if (t52 != 4294967293LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = -1;
	uint64_t x231 = UINT64_MAX;
	int8_t x232 = -1;
	uint64_t t53 = 106574LLU;

	t53 = ((x229|(x230/x231))+x232);

	if (t53 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x233 = INT64_MIN;
	static int64_t x234 = -1LL;
	int32_t x235 = -4830;
	volatile uint16_t x236 = 15793U;
	int64_t t54 = 1516LL;

	t54 = ((x233|(x234/x235))+x236);

	if (t54 != -9223372036854760015LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x237 = INT64_MIN;
	int32_t x238 = -33486015;
	int8_t x239 = INT8_MIN;
	int16_t x240 = 122;

	t55 = ((x237|(x238/x239))+x240);

	if (t55 != -9223372036854514077LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = INT64_MIN;
	int64_t x243 = -3577LL;
	static volatile int32_t x244 = -1;

	t56 = ((x241|(x242/x243))+x244);

	if (t56 != -31961LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = 0;
	static uint32_t x248 = UINT32_MAX;
	volatile uint64_t t57 = 196455506LLU;

	t57 = ((x245|(x246/x247))+x248);

	if (t57 != 4294967295LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = -1;
	int16_t x250 = 19;
	static uint16_t x251 = UINT16_MAX;
	int16_t x252 = INT16_MAX;
	volatile int32_t t58 = 632734390;

	t58 = ((x249|(x250/x251))+x252);

	if (t58 != 32766) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = INT32_MIN;
	int32_t x254 = 0;
	int8_t x255 = INT8_MIN;
	static volatile int64_t x256 = 846947043974831732LL;
	volatile int64_t t59 = -28954689057478601LL;

	t59 = ((x253|(x254/x255))+x256);

	if (t59 != 846947041827348084LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x261 = 7U;
	int16_t x262 = INT16_MIN;
	int32_t t60 = 15;

	t60 = ((x261|(x262/x263))+x264);

	if (t60 != 239) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x265 = 111574886LLU;
	int64_t x266 = INT64_MIN;
	uint8_t x267 = 119U;
	int8_t x268 = INT8_MIN;
	static volatile uint64_t t61 = 204923515LLU;

	t61 = ((x265|(x266/x267))+x268);

	if (t61 != 18369236745702571887LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x273 = 344747856U;
	uint32_t x275 = 1039037455U;
	uint8_t x276 = UINT8_MAX;
	static volatile uint32_t t62 = 4092U;

	t62 = ((x273|(x274/x275))+x276);

	if (t62 != 344748115U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x281 = INT16_MIN;
	uint16_t x282 = 5U;
	int8_t x283 = -1;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t63 = 830LLU;

	t63 = ((x281|(x282/x283))+x284);

	if (t63 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x285 = 259964387762LLU;
	volatile int64_t x286 = INT64_MIN;
	volatile int8_t x288 = INT8_MAX;
	uint64_t t64 = 5190025706LLU;

	t64 = ((x285|(x286/x287))+x288);

	if (t64 != 18427804980137019450LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = INT32_MIN;
	static int8_t x290 = INT8_MIN;
	uint8_t x291 = 124U;
	volatile int32_t t65 = -3215;

	t65 = ((x289|(x290/x291))+x292);

	if (t65 != 65534) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x294 = INT32_MIN;
	static int64_t x296 = INT64_MIN;
	int64_t t66 = 245887155137LL;

	t66 = ((x293|(x294/x295))+x296);

	if (t66 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x299 = -1;
	int32_t t67 = 390040407;

	t67 = ((x297|(x298/x299))+x300);

	if (t67 != 65575) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x305 = -1;
	volatile int64_t x306 = -941646499274409757LL;
	int8_t x307 = INT8_MIN;
	volatile int64_t t68 = 0LL;

	t68 = ((x305|(x306/x307))+x308);

	if (t68 != 254LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = 23;
	uint16_t x316 = 23327U;
	volatile uint64_t t69 = 227LLU;

	t69 = ((x313|(x314/x315))+x316);

	if (t69 != 18446744071655460149LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x317 = 512050679U;
	uint8_t x318 = 61U;
	volatile int16_t x319 = -17;
	volatile int16_t x320 = INT16_MAX;
	uint32_t t70 = 320U;

	t70 = ((x317|(x318/x319))+x320);

	if (t70 != 32766U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x321 = INT8_MIN;
	int32_t x322 = INT32_MIN;
	int64_t x323 = INT64_MIN;
	uint32_t x324 = 2347126U;
	int64_t t71 = -47218688828677LL;

	t71 = ((x321|(x322/x323))+x324);

	if (t71 != 2346998LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x326 = UINT8_MAX;
	int32_t x327 = -1;
	uint64_t t72 = 14617LLU;

	t72 = ((x325|(x326/x327))+x328);

	if (t72 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x329 = 11071194LLU;
	uint8_t x330 = 14U;
	int16_t x331 = INT16_MIN;
	int8_t x332 = -1;
	uint64_t t73 = 50890049652310LLU;

	t73 = ((x329|(x330/x331))+x332);

	if (t73 != 11071193LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = 51206LL;
	static volatile int32_t x334 = 63;
	volatile int8_t x335 = 7;
	volatile int8_t x336 = -1;

	t74 = ((x333|(x334/x335))+x336);

	if (t74 != 51214LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x339 = INT16_MIN;
	static uint64_t x340 = 536385763856100LLU;
	static uint64_t t75 = 26663338138446LLU;

	t75 = ((x337|(x338/x339))+x340);

	if (t75 != 9223908422618631907LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x341 = INT64_MIN;
	uint16_t x343 = UINT16_MAX;
	static int16_t x344 = 110;
	int64_t t76 = -32963LL;

	t76 = ((x341|(x342/x343))+x344);

	if (t76 != -9223372036854775698LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x350 = INT8_MIN;
	int64_t x351 = 406050933961944LL;
	volatile int64_t t77 = 12267187LL;

	t77 = ((x349|(x350/x351))+x352);

	if (t77 != -2147418113LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x354 = 33;
	int32_t x355 = -1;
	volatile int32_t x356 = INT32_MAX;
	volatile uint32_t t78 = 13166478U;

	t78 = ((x353|(x354/x355))+x356);

	if (t78 != 2147483646U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x357 = INT8_MIN;
	uint64_t x358 = UINT64_MAX;
	int32_t x359 = INT32_MAX;
	uint8_t x360 = 25U;
	uint64_t t79 = 1895545731585010LLU;

	t79 = ((x357|(x358/x359))+x360);

	if (t79 != 18446744073709551517LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = -1LL;
	uint32_t x362 = UINT32_MAX;
	int64_t x363 = INT64_MAX;
	static volatile int64_t t80 = -157943424904357519LL;

	t80 = ((x361|(x362/x363))+x364);

	if (t80 != -181513664LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x369 = INT16_MIN;
	uint64_t x370 = UINT64_MAX;
	int16_t x371 = INT16_MIN;
	uint8_t x372 = UINT8_MAX;
	uint64_t t81 = 705555LLU;

	t81 = ((x369|(x370/x371))+x372);

	if (t81 != 18446744073709519104LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x373 = UINT16_MAX;
	int8_t x374 = INT8_MIN;
	int32_t x375 = -1869;
	uint8_t x376 = 0U;
	int32_t t82 = -31389753;

	t82 = ((x373|(x374/x375))+x376);

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x378 = UINT16_MAX;
	volatile uint32_t x379 = 33616U;
	int8_t x380 = -1;
	volatile uint32_t t83 = 207U;

	t83 = ((x377|(x378/x379))+x380);

	if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x381 = -1;
	uint16_t x382 = UINT16_MAX;
	int16_t x384 = 6;
	int32_t t84 = 162528;

	t84 = ((x381|(x382/x383))+x384);

	if (t84 != 5) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x385 = 3;
	int32_t x386 = -104;
	int64_t x387 = -1LL;
	volatile int64_t t85 = 3043LL;

	t85 = ((x385|(x386/x387))+x388);

	if (t85 != 234LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x389 = INT16_MIN;
	static int8_t x390 = -1;
	static volatile int32_t x391 = INT32_MAX;
	int64_t x392 = -1LL;
	int64_t t86 = -3665592971943LL;

	t86 = ((x389|(x390/x391))+x392);

	if (t86 != -32769LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x393 = INT64_MIN;
	uint8_t x394 = 27U;
	static volatile uint8_t x395 = UINT8_MAX;
	volatile uint8_t x396 = 1U;
	static volatile int64_t t87 = 1128938806418597856LL;

	t87 = ((x393|(x394/x395))+x396);

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x398 = -1;
	int64_t x399 = -237522LL;
	int32_t x400 = INT32_MAX;
	volatile int64_t t88 = 15070688LL;

	t88 = ((x397|(x398/x399))+x400);

	if (t88 != 2147450879LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x401 = -1;
	int64_t x402 = INT64_MAX;
	int32_t x403 = 3483113;
	static int32_t x404 = INT32_MIN;
	volatile int64_t t89 = 43984315426144155LL;

	t89 = ((x401|(x402/x403))+x404);

	if (t89 != -2147483649LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x405 = -3;
	int64_t x406 = INT64_MAX;
	int16_t x407 = -372;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t90 = 26LLU;

	t90 = ((x405|(x406/x407))+x408);

	if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x409 = 428U;
	volatile int16_t x410 = 1513;
	uint32_t x412 = UINT32_MAX;
	volatile uint32_t t91 = 1497898242U;

	t91 = ((x409|(x410/x411))+x412);

	if (t91 != 427U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x413 = INT64_MIN;
	uint16_t x414 = 23U;
	int32_t x415 = -10596380;
	uint32_t x416 = 4529794U;
	volatile int64_t t92 = -5961LL;

	t92 = ((x413|(x414/x415))+x416);

	if (t92 != -9223372036850246014LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x417 = UINT8_MAX;
	uint8_t x418 = UINT8_MAX;
	int64_t x419 = -1LL;
	volatile int8_t x420 = -1;
	int64_t t93 = -445191456162342499LL;

	t93 = ((x417|(x418/x419))+x420);

	if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x422 = 5508225735LL;
	int32_t x423 = 2;
	int64_t t94 = -4287961267841LL;

	t94 = ((x421|(x422/x423))+x424);

	if (t94 != 4901596542LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x425 = INT16_MIN;
	volatile uint8_t x426 = 13U;
	int32_t x427 = INT32_MIN;
	int16_t x428 = 90;
	volatile int32_t t95 = 44924409;

	t95 = ((x425|(x426/x427))+x428);

	if (t95 != -32678) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x429 = 14933349LLU;
	int8_t x430 = -1;
	uint16_t x431 = UINT16_MAX;
	int32_t x432 = -1;
	volatile uint64_t t96 = 13992144LLU;

	t96 = ((x429|(x430/x431))+x432);

	if (t96 != 14933348LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x433 = INT16_MIN;
	volatile uint16_t x434 = 0U;
	int32_t x435 = INT32_MIN;
	uint32_t x436 = UINT32_MAX;
	uint32_t t97 = 83989U;

	t97 = ((x433|(x434/x435))+x436);

	if (t97 != 4294934527U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x437 = -1;
	volatile int64_t x439 = -1LL;
	static volatile int64_t t98 = -13LL;

	t98 = ((x437|(x438/x439))+x440);

	if (t98 != -2147483649LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x441 = 2U;
	int64_t x442 = INT64_MAX;
	int64_t t99 = 651LL;

	t99 = ((x441|(x442/x443))+x444);

	if (t99 != 36170086419038337LL) { NG(); } else { ; }
	
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

