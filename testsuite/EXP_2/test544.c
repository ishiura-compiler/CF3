#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = -1LL;
static int16_t x11 = INT16_MIN;
int32_t x12 = INT32_MIN;
static int8_t x24 = -2;
volatile int64_t x26 = INT64_MAX;
int32_t x28 = 52;
int16_t x29 = INT16_MAX;
int64_t x34 = INT64_MAX;
static int64_t x39 = INT64_MIN;
volatile uint32_t x46 = UINT32_MAX;
uint32_t x48 = 39U;
int32_t x52 = -180308;
uint16_t x62 = UINT16_MAX;
int16_t x66 = -1;
int8_t x70 = INT8_MIN;
uint64_t x72 = 1783708302LLU;
int8_t x89 = INT8_MAX;
int64_t x90 = 2945653742466514LL;
uint16_t x99 = 2U;
volatile uint32_t t22 = 0U;
int8_t x102 = 2;
int16_t x106 = -1;
int64_t t27 = -103766565LL;
uint8_t x121 = 2U;
uint32_t x124 = UINT32_MAX;
int64_t t29 = 25145LL;
uint64_t t32 = 12242760LLU;
static int64_t x148 = INT64_MIN;
volatile int8_t x152 = INT8_MIN;
static int32_t x154 = 1798;
uint32_t x157 = 221516U;
uint64_t x166 = UINT64_MAX;
int16_t x167 = INT16_MIN;
volatile int8_t x168 = -1;
static int64_t x176 = 3959LL;
volatile int32_t t41 = -84440;
uint8_t x185 = UINT8_MAX;
uint8_t x186 = UINT8_MAX;
int16_t x189 = -1698;
uint64_t t44 = 1573592452418249248LLU;
int8_t x201 = -23;
int32_t x202 = -1;
int16_t x205 = 15;
static int16_t x212 = -29;
volatile int64_t t50 = -23482557LL;
int32_t t51 = -379858622;
static volatile int8_t x231 = INT8_MIN;
int32_t x234 = 357241254;
volatile int32_t x235 = INT32_MIN;
int32_t t53 = 6;
volatile int32_t t54 = -14410616;
int16_t x248 = -7866;
static int8_t x250 = 0;
volatile int32_t x254 = 45144105;
uint64_t x263 = 1056219758LLU;
int32_t x273 = 47886897;
int64_t x276 = INT64_MIN;
int64_t x297 = 2529594184LL;
int64_t x299 = -1LL;
static uint16_t x312 = 1U;
uint8_t x313 = 11U;
volatile uint64_t t73 = 832439598991180973LLU;
static uint8_t x317 = 42U;
static int32_t x319 = 59611454;
volatile int8_t x321 = INT8_MIN;
int8_t x323 = INT8_MIN;
uint64_t t75 = 129LLU;
uint64_t x330 = 7438120LLU;
int32_t x335 = INT32_MIN;
uint64_t t78 = 7120121174974459060LLU;
uint8_t x347 = 115U;
static int16_t x349 = INT16_MIN;
static volatile int64_t t82 = -12276093066984LL;
int8_t x355 = INT8_MIN;
static volatile uint32_t x359 = 4063502U;
static uint32_t t84 = 107604247U;
static int8_t x363 = INT8_MIN;
static int64_t t85 = INT64_MIN;
static uint8_t x370 = 41U;
volatile int32_t t86 = 7081;
static uint64_t x373 = 103179905LLU;
int64_t x377 = 1247461LL;
int16_t x379 = -1;
volatile uint32_t x388 = 3455892U;
volatile uint16_t x389 = UINT16_MAX;
int64_t x390 = -1LL;
int8_t x394 = -1;
int32_t x398 = INT32_MIN;
static int64_t x419 = INT64_MAX;


void f0(void) {
	static int8_t x1 = -1;
	static int64_t x3 = INT64_MIN;
	uint32_t x4 = 420837696U;
	volatile int64_t t0 = 509616LL;

	t0 = ((x1*(x2/x3))&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 16;
	volatile int32_t x6 = INT32_MIN;
	int32_t x7 = INT32_MIN;
	uint32_t x8 = 1U;
	static volatile uint32_t t1 = 1490196451U;

	t1 = ((x5*(x6/x7))&x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -2;
	volatile int32_t x10 = INT32_MIN;
	volatile int32_t t2 = INT32_MIN;

	t2 = ((x9*(x10/x11))&x12);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	static int8_t x14 = -1;
	static int32_t x15 = INT32_MIN;
	static uint16_t x16 = UINT16_MAX;
	int32_t t3 = 3;

	t3 = ((x13*(x14/x15))&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	uint32_t x18 = 55U;
	uint16_t x19 = 1U;
	int16_t x20 = 69;
	volatile uint32_t t4 = 914854U;

	t4 = ((x17*(x18/x19))&x20);

	if (t4 != 65U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 342133434970609LLU;
	static uint32_t x22 = 15287U;
	volatile int64_t x23 = INT64_MAX;
	static uint64_t t5 = 29LLU;

	t5 = ((x21*(x22/x23))&x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 32783447U;
	static uint32_t x27 = UINT32_MAX;
	int64_t t6 = -2159LL;

	t6 = ((x25*(x26/x27))&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = 9513;
	uint64_t x31 = 21319287879525514LLU;
	static int32_t x32 = INT32_MAX;
	uint64_t t7 = 28622598165LLU;

	t7 = ((x29*(x30/x31))&x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -2387335;
	uint32_t x35 = UINT32_MAX;
	static int8_t x36 = INT8_MIN;
	int64_t t8 = 541857734233432852LL;

	t8 = ((x33*(x34/x35))&x36);

	if (t8 != -5126762874798080LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -2881814638817661LL;
	int64_t x38 = INT64_MAX;
	int16_t x40 = -2;
	volatile int64_t t9 = 284687219344689293LL;

	t9 = ((x37*(x38/x39))&x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -48;
	int32_t x42 = INT32_MIN;
	static int64_t x43 = INT64_MIN;
	int8_t x44 = INT8_MIN;
	volatile int64_t t10 = 0LL;

	t10 = ((x41*(x42/x43))&x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	uint64_t x47 = 2847869077396805249LLU;
	uint64_t t11 = 416060190699909LLU;

	t11 = ((x45*(x46/x47))&x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	static uint32_t x50 = UINT32_MAX;
	uint32_t x51 = 6063056U;
	uint32_t t12 = 240U;

	t12 = ((x49*(x50/x51))&x52);

	if (t12 != 4294712832U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = -1;
	uint16_t x59 = 27U;
	int32_t x60 = -755536126;
	volatile int32_t t13 = -3576566;

	t13 = ((x57*(x58/x59))&x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 3179;
	uint32_t x63 = UINT32_MAX;
	static int64_t x64 = INT64_MAX;
	static int64_t t14 = -66541331LL;

	t14 = ((x61*(x62/x63))&x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = INT32_MIN;
	uint64_t x67 = UINT64_MAX;
	uint64_t x68 = UINT64_MAX;
	volatile uint64_t t15 = 13396LLU;

	t15 = ((x65*(x66/x67))&x68);

	if (t15 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -7;
	int16_t x71 = -1;
	static volatile uint64_t t16 = 1LLU;

	t16 = ((x69*(x70/x71))&x72);

	if (t16 != 1783707776LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 0U;
	volatile uint8_t x74 = UINT8_MAX;
	int32_t x75 = -1;
	int8_t x76 = 1;
	int32_t t17 = 7;

	t17 = ((x73*(x74/x75))&x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 2;
	uint16_t x78 = 4U;
	uint32_t x79 = 200844380U;
	uint8_t x80 = 2U;
	static uint32_t t18 = 6U;

	t18 = ((x77*(x78/x79))&x80);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 3739544686LLU;
	volatile uint16_t x82 = 4510U;
	uint16_t x83 = UINT16_MAX;
	volatile int64_t x84 = INT64_MIN;
	volatile uint64_t t19 = 698867LLU;

	t19 = ((x81*(x82/x83))&x84);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x91 = 68879U;
	static int8_t x92 = -1;
	volatile int64_t t20 = -2188LL;

	t20 = ((x89*(x90/x91))&x92);

	if (t20 != 5431234850869LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MIN;
	int32_t x94 = -791935944;
	int32_t x95 = INT32_MAX;
	int32_t x96 = INT32_MAX;
	volatile int32_t t21 = 6885447;

	t21 = ((x93*(x94/x95))&x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x97 = UINT16_MAX;
	uint8_t x98 = UINT8_MAX;
	uint32_t x100 = 102270U;

	t22 = ((x97*(x98/x99))&x100);

	if (t22 != 36608U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x101 = UINT32_MAX;
	static uint16_t x103 = 1U;
	int16_t x104 = INT16_MIN;
	static volatile uint32_t t23 = 230785U;

	t23 = ((x101*(x102/x103))&x104);

	if (t23 != 4294934528U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	int32_t x107 = INT32_MAX;
	uint32_t x108 = 1687078U;
	static volatile int64_t t24 = -37703532171LL;

	t24 = ((x105*(x106/x107))&x108);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x109 = -1LL;
	int64_t x110 = -1LL;
	uint8_t x111 = UINT8_MAX;
	int64_t x112 = -1LL;
	static int64_t t25 = -2017141464327580LL;

	t25 = ((x109*(x110/x111))&x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x113 = UINT64_MAX;
	static uint8_t x114 = 4U;
	int32_t x115 = -24038540;
	int16_t x116 = INT16_MIN;
	static volatile uint64_t t26 = 25244107LLU;

	t26 = ((x113*(x114/x115))&x116);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -17212760;
	int16_t x118 = -4;
	volatile int64_t x119 = INT64_MIN;
	int8_t x120 = -1;

	t27 = ((x117*(x118/x119))&x120);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x122 = 33LL;
	int32_t x123 = INT32_MAX;
	static volatile int64_t t28 = -5327191709LL;

	t28 = ((x121*(x122/x123))&x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x125 = INT64_MIN;
	int16_t x126 = INT16_MAX;
	int64_t x127 = INT64_MIN;
	static volatile uint8_t x128 = 31U;

	t29 = ((x125*(x126/x127))&x128);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x129 = INT32_MIN;
	int8_t x130 = -1;
	static volatile uint64_t x131 = 81225312478LLU;
	int32_t x132 = 40;
	uint64_t t30 = 8607724LLU;

	t30 = ((x129*(x130/x131))&x132);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x133 = INT16_MAX;
	volatile int32_t x134 = -176326;
	int64_t x135 = -2LL;
	volatile uint32_t x136 = 463300U;
	int64_t t31 = 1LL;

	t31 = ((x133*(x134/x135))&x136);

	if (t31 != 388LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = 1317LLU;
	volatile int16_t x138 = -13;
	static int64_t x139 = -1LL;
	uint16_t x140 = UINT16_MAX;

	t32 = ((x137*(x138/x139))&x140);

	if (t32 != 17121LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MAX;
	int64_t x143 = INT64_MAX;
	static int8_t x144 = -1;
	volatile int64_t t33 = -1382074208711526LL;

	t33 = ((x141*(x142/x143))&x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MIN;
	int8_t x146 = INT8_MIN;
	int16_t x147 = INT16_MIN;
	volatile int64_t t34 = -655LL;

	t34 = ((x145*(x146/x147))&x148);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x149 = 469388U;
	int8_t x150 = INT8_MIN;
	static int64_t x151 = INT64_MAX;
	int64_t t35 = 230647819LL;

	t35 = ((x149*(x150/x151))&x152);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = -1;
	static uint64_t x155 = UINT64_MAX;
	int8_t x156 = 2;
	uint64_t t36 = 685828723226551LLU;

	t36 = ((x153*(x154/x155))&x156);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x158 = INT8_MIN;
	static int8_t x159 = -1;
	static int8_t x160 = INT8_MIN;
	uint32_t t37 = 1533501U;

	t37 = ((x157*(x158/x159))&x160);

	if (t37 != 28354048U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = INT64_MIN;
	uint16_t x162 = 0U;
	uint64_t x163 = 8046846LLU;
	int8_t x164 = 0;
	uint64_t t38 = 2321290756993606LLU;

	t38 = ((x161*(x162/x163))&x164);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	uint64_t t39 = 6931979845188LLU;

	t39 = ((x165*(x166/x167))&x168);

	if (t39 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = INT8_MAX;
	int64_t x174 = INT64_MAX;
	volatile int64_t x175 = 2402038826248LL;
	volatile int64_t t40 = 5375LL;

	t40 = ((x173*(x174/x175))&x176);

	if (t40 != 2359LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x181 = 28U;
	uint8_t x182 = UINT8_MAX;
	uint8_t x183 = 1U;
	int16_t x184 = -1;

	t41 = ((x181*(x182/x183))&x184);

	if (t41 != 7140) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x187 = -1;
	int64_t x188 = -26236LL;
	int64_t t42 = -6LL;

	t42 = ((x185*(x186/x187))&x188);

	if (t42 != -65148LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x190 = -1;
	int64_t x191 = INT64_MAX;
	volatile int16_t x192 = -1;
	static volatile int64_t t43 = 714654LL;

	t43 = ((x189*(x190/x191))&x192);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x193 = UINT64_MAX;
	static int32_t x194 = INT32_MIN;
	volatile int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MIN;

	t44 = ((x193*(x194/x195))&x196);

	if (t44 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x197 = UINT64_MAX;
	int32_t x198 = INT32_MIN;
	volatile int32_t x199 = INT32_MIN;
	int8_t x200 = INT8_MIN;
	volatile uint64_t t45 = 383912910735LLU;

	t45 = ((x197*(x198/x199))&x200);

	if (t45 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x203 = -319207196992199LL;
	volatile int8_t x204 = -1;
	static int64_t t46 = -193118813LL;

	t46 = ((x201*(x202/x203))&x204);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x206 = 77496U;
	static uint64_t x207 = 336LLU;
	int16_t x208 = 48;
	uint64_t t47 = 0LLU;

	t47 = ((x205*(x206/x207))&x208);

	if (t47 != 48LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = -11546;
	uint8_t x210 = 65U;
	int64_t x211 = -1LL;
	volatile int64_t t48 = 63101261235524440LL;

	t48 = ((x209*(x210/x211))&x212);

	if (t48 != 750466LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = 16U;
	int64_t x214 = 77044747263864LL;
	uint8_t x215 = 7U;
	int64_t x216 = -22541514705110750LL;
	volatile int64_t t49 = 8331635902857075LL;

	t49 = ((x213*(x214/x215))&x216);

	if (t49 != 175956242018592LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = -1;
	static int64_t x218 = -49378286LL;
	static int16_t x219 = INT16_MIN;
	static int32_t x220 = 427603043;

	t50 = ((x217*(x218/x219))&x220);

	if (t50 != 427601922LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x225 = 31U;
	uint8_t x226 = 1U;
	int8_t x227 = -1;
	uint16_t x228 = 809U;

	t51 = ((x225*(x226/x227))&x228);

	if (t51 != 801) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = INT8_MIN;
	uint32_t x230 = UINT32_MAX;
	int16_t x232 = INT16_MIN;
	static volatile uint32_t t52 = 694437U;

	t52 = ((x229*(x230/x231))&x232);

	if (t52 != 4294934528U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x233 = 29U;
	int16_t x236 = -232;

	t53 = ((x233*(x234/x235))&x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x237 = 34U;
	int8_t x238 = INT8_MIN;
	int8_t x239 = -33;
	int16_t x240 = INT16_MAX;

	t54 = ((x237*(x238/x239))&x240);

	if (t54 != 102) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x241 = UINT32_MAX;
	int32_t x242 = -1;
	int64_t x243 = INT64_MAX;
	int8_t x244 = INT8_MIN;
	volatile int64_t t55 = 11665LL;

	t55 = ((x241*(x242/x243))&x244);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = 29;
	int16_t x246 = -1;
	volatile uint16_t x247 = UINT16_MAX;
	int32_t t56 = 40557;

	t56 = ((x245*(x246/x247))&x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x249 = -33823;
	volatile int16_t x251 = -7;
	uint64_t x252 = 58LLU;
	static uint64_t t57 = 111022LLU;

	t57 = ((x249*(x250/x251))&x252);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x253 = UINT64_MAX;
	volatile int64_t x255 = -1LL;
	int16_t x256 = 447;
	volatile uint64_t t58 = 1059651500LLU;

	t58 = ((x253*(x254/x255))&x256);

	if (t58 != 41LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x257 = 199LLU;
	static int16_t x258 = INT16_MIN;
	uint64_t x259 = 98806197LLU;
	volatile int8_t x260 = INT8_MIN;
	uint64_t t59 = 47314071LLU;

	t59 = ((x257*(x258/x259))&x260);

	if (t59 != 37152548950400LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = 8362;
	static int64_t x262 = INT64_MIN;
	int32_t x264 = 0;
	uint64_t t60 = 52LLU;

	t60 = ((x261*(x262/x263))&x264);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MAX;
	static int8_t x267 = 13;
	static int8_t x268 = INT8_MAX;
	static int32_t t61 = 15;

	t61 = ((x265*(x266/x267))&x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x269 = 0U;
	int32_t x270 = -1;
	int32_t x271 = -1;
	int8_t x272 = INT8_MIN;
	volatile int32_t t62 = -250;

	t62 = ((x269*(x270/x271))&x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x274 = UINT32_MAX;
	int32_t x275 = INT32_MIN;
	volatile int64_t t63 = 868790818456LL;

	t63 = ((x273*(x274/x275))&x276);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x277 = 494879899U;
	int8_t x278 = INT8_MAX;
	static uint32_t x279 = 1U;
	int64_t x280 = -1LL;
	int64_t t64 = -1026777074681567LL;

	t64 = ((x277*(x278/x279))&x280);

	if (t64 != 2720205029LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x281 = 4;
	volatile int16_t x282 = INT16_MAX;
	volatile uint32_t x283 = 15U;
	uint16_t x284 = 0U;
	uint32_t t65 = 4244U;

	t65 = ((x281*(x282/x283))&x284);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x285 = 77U;
	int64_t x286 = -1LL;
	int8_t x287 = 13;
	int8_t x288 = INT8_MIN;
	int64_t t66 = -58966893LL;

	t66 = ((x285*(x286/x287))&x288);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x289 = 12371U;
	int64_t x290 = -756331806401833318LL;
	int64_t x291 = 18063120297LL;
	volatile uint8_t x292 = 0U;
	volatile int64_t t67 = -97093582003070LL;

	t67 = ((x289*(x290/x291))&x292);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x293 = INT8_MAX;
	int16_t x294 = INT16_MIN;
	static int32_t x295 = INT32_MAX;
	int32_t x296 = -1;
	int32_t t68 = 309032135;

	t68 = ((x293*(x294/x295))&x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x298 = 39LLU;
	int64_t x300 = -88691267476LL;
	uint64_t t69 = 70LLU;

	t69 = ((x297*(x298/x299))&x300);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x301 = INT32_MIN;
	static int16_t x302 = -54;
	volatile uint64_t x303 = 2212555181768LLU;
	static uint32_t x304 = UINT32_MAX;
	uint64_t t70 = 1790602LLU;

	t70 = ((x301*(x302/x303))&x304);

	if (t70 != 2147483648LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x305 = 95U;
	static int16_t x306 = INT16_MIN;
	int64_t x307 = -1705122780679729608LL;
	int8_t x308 = -1;
	static int64_t t71 = -1133271LL;

	t71 = ((x305*(x306/x307))&x308);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x309 = 261397545562751LLU;
	int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MIN;
	static volatile uint64_t t72 = 11609541273LLU;

	t72 = ((x309*(x310/x311))&x312);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x314 = -26136;
	uint8_t x315 = UINT8_MAX;
	uint64_t x316 = 1676546339079LLU;

	t73 = ((x313*(x314/x315))&x316);

	if (t73 != 1676546339078LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x318 = INT32_MAX;
	static int64_t x320 = INT64_MIN;
	int64_t t74 = 3519132706946693545LL;

	t74 = ((x317*(x318/x319))&x320);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x322 = 6825432822373831LLU;
	static int64_t x324 = INT64_MIN;

	t75 = ((x321*(x322/x323))&x324);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x325 = 10U;
	static volatile int16_t x326 = INT16_MAX;
	uint8_t x327 = 48U;
	volatile uint16_t x328 = UINT16_MAX;
	volatile uint32_t t76 = 2468881U;

	t76 = ((x325*(x326/x327))&x328);

	if (t76 != 6820U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x329 = UINT16_MAX;
	uint8_t x331 = 22U;
	int16_t x332 = -1;
	uint64_t t77 = 34618596049434LLU;

	t77 = ((x329*(x330/x331))&x332);

	if (t77 != 22157121360LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = UINT64_MAX;
	int32_t x334 = -225;
	int32_t x336 = -23296;

	t78 = ((x333*(x334/x335))&x336);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x337 = UINT64_MAX;
	int32_t x338 = 297453;
	uint64_t x339 = 46939135675549781LLU;
	int32_t x340 = -7469055;
	volatile uint64_t t79 = 73067LLU;

	t79 = ((x337*(x338/x339))&x340);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x341 = -1LL;
	static uint16_t x342 = UINT16_MAX;
	int32_t x343 = INT32_MIN;
	volatile uint64_t x344 = 4006LLU;
	volatile uint64_t t80 = 99339301355LLU;

	t80 = ((x341*(x342/x343))&x344);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x345 = 174352047LLU;
	int8_t x346 = INT8_MIN;
	static volatile int8_t x348 = INT8_MIN;
	uint64_t t81 = 26729467372LLU;

	t81 = ((x345*(x346/x347))&x348);

	if (t81 != 18446744073535199488LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x350 = UINT32_MAX;
	int64_t x351 = INT64_MAX;
	int32_t x352 = INT32_MIN;

	t82 = ((x349*(x350/x351))&x352);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x353 = 1326688567115LLU;
	int16_t x354 = INT16_MAX;
	volatile int8_t x356 = -1;
	uint64_t t83 = 223203LLU;

	t83 = ((x353*(x354/x355))&x356);

	if (t83 != 18446405768124937291LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x357 = 209U;
	volatile int32_t x358 = INT32_MIN;
	int8_t x360 = INT8_MAX;

	t84 = ((x357*(x358/x359))&x360);

	if (t84 != 16U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MIN;
	int64_t x364 = INT64_MIN;

	t85 = ((x361*(x362/x363))&x364);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x369 = -1;
	int32_t x371 = INT32_MAX;
	static int16_t x372 = -45;

	t86 = ((x369*(x370/x371))&x372);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x374 = 12U;
	int8_t x375 = -1;
	int32_t x376 = INT32_MIN;
	uint64_t t87 = 32720LLU;

	t87 = ((x373*(x374/x375))&x376);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x378 = INT16_MIN;
	static int16_t x380 = INT16_MIN;
	static volatile int64_t t88 = 7889LL;

	t88 = ((x377*(x378/x379))&x380);

	if (t88 != 40876802048LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x381 = INT32_MIN;
	int16_t x382 = INT16_MIN;
	uint32_t x383 = 57353U;
	int64_t x384 = INT64_MAX;
	int64_t t89 = -3634484LL;

	t89 = ((x381*(x382/x383))&x384);

	if (t89 != 2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x385 = 1507924507LLU;
	int8_t x386 = 23;
	uint16_t x387 = 10U;
	volatile uint64_t t90 = 82878618195008LLU;

	t90 = ((x385*(x386/x387))&x388);

	if (t90 != 12308LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x391 = 390874158707401LLU;
	static int64_t x392 = -1LL;
	uint64_t t91 = 12677876530009LLU;

	t91 = ((x389*(x390/x391))&x392);

	if (t91 != 3092793255LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x393 = 32267;
	int32_t x395 = -1159;
	uint32_t x396 = UINT32_MAX;
	static volatile uint32_t t92 = 54880U;

	t92 = ((x393*(x394/x395))&x396);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x397 = 3598345332325167LLU;
	static volatile int16_t x399 = INT16_MIN;
	volatile uint32_t x400 = UINT32_MAX;
	volatile uint64_t t93 = 109336764LLU;

	t93 = ((x397*(x398/x399))&x400);

	if (t93 != 4214161408LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x401 = 3U;
	static uint16_t x402 = UINT16_MAX;
	static int16_t x403 = 125;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t94 = 73291122LLU;

	t94 = ((x401*(x402/x403))&x404);

	if (t94 != 1572LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x405 = INT64_MIN;
	int16_t x406 = INT16_MAX;
	int32_t x407 = INT32_MIN;
	int32_t x408 = INT32_MIN;
	volatile int64_t t95 = -272480960095560LL;

	t95 = ((x405*(x406/x407))&x408);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x409 = INT32_MIN;
	volatile int64_t x410 = INT64_MIN;
	int64_t x411 = INT64_MAX;
	int16_t x412 = -50;
	int64_t t96 = 25251LL;

	t96 = ((x409*(x410/x411))&x412);

	if (t96 != 2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x413 = -1;
	volatile uint16_t x414 = 30U;
	static int32_t x415 = INT32_MIN;
	int16_t x416 = -10136;
	int32_t t97 = 19;

	t97 = ((x413*(x414/x415))&x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = -1LL;
	int32_t x418 = -16;
	volatile uint32_t x420 = UINT32_MAX;
	static volatile int64_t t98 = -31981454LL;

	t98 = ((x417*(x418/x419))&x420);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x421 = 7U;
	uint8_t x422 = UINT8_MAX;
	volatile int64_t x423 = INT64_MIN;
	uint64_t x424 = 533783LLU;
	volatile uint64_t t99 = 117LLU;

	t99 = ((x421*(x422/x423))&x424);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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
