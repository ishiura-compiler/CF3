#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
int16_t x12 = INT16_MIN;
volatile uint64_t x15 = 204839366958102966LLU;
int64_t x16 = 4301580382801LL;
volatile uint64_t t3 = 121959LLU;
int16_t x18 = -397;
int16_t x19 = -1;
static volatile uint8_t x24 = 52U;
int16_t x43 = INT16_MAX;
int8_t x46 = INT8_MIN;
volatile int64_t t10 = -206342LL;
uint16_t x53 = 1977U;
volatile int16_t x58 = INT16_MIN;
int64_t x60 = 40LL;
int16_t x71 = INT16_MIN;
volatile uint64_t x73 = UINT64_MAX;
static int8_t x74 = -1;
int32_t x77 = INT32_MIN;
int16_t x82 = 696;
static uint16_t x84 = 3U;
int64_t x87 = INT64_MIN;
int16_t x88 = 1;
static int16_t x90 = INT16_MIN;
int8_t x103 = -1;
uint8_t x105 = 22U;
static volatile uint32_t x106 = 36U;
static int8_t x109 = 3;
static volatile int64_t t25 = 82413309LL;
static volatile int64_t x114 = 296LL;
uint32_t x115 = UINT32_MAX;
int64_t x116 = 145914912234470LL;
int64_t t27 = INT64_MAX;
int8_t x124 = INT8_MAX;
uint64_t x125 = 4237519354876249LLU;
static int8_t x127 = INT8_MIN;
int8_t x131 = INT8_MAX;
uint32_t x137 = UINT32_MAX;
int8_t x140 = INT8_MAX;
int8_t x141 = -6;
uint32_t x165 = 578U;
uint16_t x174 = 41U;
int32_t x182 = -1;
volatile uint8_t x183 = UINT8_MAX;
int32_t x184 = INT32_MIN;
int16_t x193 = 11;
int64_t x198 = -17950LL;
uint64_t t40 = 25926962551LLU;
int8_t x203 = 2;
static int32_t x209 = INT32_MIN;
int8_t x217 = 9;
volatile uint8_t x218 = 57U;
int64_t x220 = 4551414440277373550LL;
uint64_t x227 = 28LLU;
volatile uint64_t t47 = 343199696248805LLU;
int32_t x236 = INT32_MIN;
int16_t x244 = INT16_MIN;
volatile int64_t t51 = 5929LL;
uint16_t x250 = 3U;
static volatile int32_t x251 = INT32_MIN;
volatile int32_t t52 = 13;
int64_t x260 = -122LL;
int32_t t54 = -796889070;
int64_t x271 = INT64_MIN;
uint64_t x272 = 3483925LLU;
static volatile uint64_t t55 = 6LLU;
int32_t x278 = -1;
volatile int64_t t57 = 7090319664224497LL;
volatile int64_t t58 = INT64_MIN;
int8_t x287 = 1;
static int8_t x288 = -10;
int8_t x297 = INT8_MIN;
static volatile int16_t x300 = -234;
uint16_t x302 = UINT16_MAX;
int64_t x303 = INT64_MAX;
static uint8_t x307 = UINT8_MAX;
static int16_t x322 = -1;
uint8_t x332 = UINT8_MAX;
int8_t x339 = 23;
volatile int64_t t69 = -2007350LL;
static int64_t x342 = -1LL;
int64_t t71 = 390LL;
int32_t x349 = -1;
uint64_t x367 = UINT64_MAX;
volatile int64_t t77 = -16002427LL;
volatile int16_t x378 = -12596;
int64_t t78 = 67949706315LL;
volatile uint16_t x381 = 10995U;
static uint8_t x388 = 92U;
static volatile int32_t x405 = INT32_MIN;
static int8_t x409 = INT8_MIN;
volatile uint8_t x414 = 96U;
uint64_t x417 = UINT64_MAX;
int16_t x419 = INT16_MIN;
volatile uint16_t x428 = UINT16_MAX;
static uint64_t x442 = 349393543LLU;
int8_t x443 = 20;
int32_t x444 = -1;
int16_t x449 = -2080;
static volatile int64_t x451 = INT64_MIN;
uint64_t x457 = 15845937425483LLU;
int16_t x459 = -1;
volatile uint32_t t97 = 172336941U;
static volatile int16_t x467 = -1;


void f0(void) {
	static int8_t x1 = -1;
	int8_t x2 = 5;
	int32_t x3 = INT32_MIN;
	uint8_t x4 = UINT8_MAX;
	static volatile int32_t t0 = 1027569;

	t0 = ((x1*(x2/x3))^x4);

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1U;
	uint64_t x6 = 151829883432558724LLU;
	int8_t x7 = -1;
	uint64_t t1 = 6546635518361009LLU;

	t1 = ((x5*(x6/x7))^x8);

	if (t1 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MAX;
	int8_t x10 = -1;
	volatile int8_t x11 = -1;
	volatile int32_t t2 = 2;

	t2 = ((x9*(x10/x11))^x12);

	if (t2 != -32641) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MAX;
	uint16_t x14 = UINT16_MAX;

	t3 = ((x13*(x14/x15))^x16);

	if (t3 != 4301580382801LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int64_t x20 = -241155LL;
	volatile int64_t t4 = 960709792996LL;

	t4 = ((x17*(x18/x19))^x20);

	if (t4 != -12963954LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -3;
	int16_t x22 = 6606;
	static volatile uint32_t x23 = UINT32_MAX;
	uint32_t t5 = 19101U;

	t5 = ((x21*(x22/x23))^x24);

	if (t5 != 52U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 14409U;
	uint64_t x26 = 488936030185LLU;
	volatile uint16_t x27 = 109U;
	uint8_t x28 = UINT8_MAX;
	volatile uint64_t t6 = 10024742429LLU;

	t6 = ((x25*(x26/x27))^x28);

	if (t6 != 64633754668242LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 398540U;
	uint64_t x34 = UINT64_MAX;
	volatile int16_t x35 = 1341;
	static volatile int16_t x36 = INT16_MIN;
	uint64_t t7 = 571009LLU;

	t7 = ((x33*(x34/x35))^x36);

	if (t7 != 14828926257613300152LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MIN;
	uint16_t x44 = 231U;
	volatile int32_t t8 = 53673;

	t8 = ((x41*(x42/x43))^x44);

	if (t8 != 103) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x45 = INT16_MAX;
	static uint32_t x47 = 6719U;
	volatile int8_t x48 = INT8_MAX;
	volatile uint32_t t9 = 8U;

	t9 = ((x45*(x46/x47))^x48);

	if (t9 != 3765682042U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	uint32_t x50 = 1U;
	int8_t x51 = INT8_MAX;
	static uint16_t x52 = 18U;

	t10 = ((x49*(x50/x51))^x52);

	if (t10 != 18LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x54 = 435LLU;
	int8_t x55 = INT8_MAX;
	int32_t x56 = -1;
	uint64_t t11 = 547611729763LLU;

	t11 = ((x53*(x54/x55))^x56);

	if (t11 != 18446744073709545684LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = INT16_MIN;
	uint16_t x59 = 355U;
	int64_t t12 = 10LL;

	t12 = ((x57*(x58/x59))^x60);

	if (t12 != 3014696LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = 14060;
	int8_t x62 = INT8_MIN;
	int16_t x63 = -1;
	int32_t x64 = 787065;
	volatile int32_t t13 = 0;

	t13 = ((x61*(x62/x63))^x64);

	if (t13 != 1537145) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x65 = UINT32_MAX;
	int32_t x66 = 36046;
	static int8_t x67 = 44;
	static volatile uint8_t x68 = 12U;
	volatile uint32_t t14 = 4134899U;

	t14 = ((x65*(x66/x67))^x68);

	if (t14 != 4294966465U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x69 = INT32_MAX;
	volatile uint64_t x70 = 230LLU;
	uint32_t x72 = 10276U;
	static volatile uint64_t t15 = 19442860017LLU;

	t15 = ((x69*(x70/x71))^x72);

	if (t15 != 10276LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x75 = 672220LLU;
	int8_t x76 = 1;
	volatile uint64_t t16 = 1925LLU;

	t16 = ((x73*(x74/x75))^x76);

	if (t16 != 18446716632181370799LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x78 = -12;
	uint16_t x79 = 20U;
	static volatile uint16_t x80 = 21896U;
	int32_t t17 = 1;

	t17 = ((x77*(x78/x79))^x80);

	if (t17 != 21896) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x81 = 61U;
	int32_t x83 = 67126;
	static volatile int32_t t18 = -15185;

	t18 = ((x81*(x82/x83))^x84);

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MIN;
	volatile int64_t t19 = -5551LL;

	t19 = ((x85*(x86/x87))^x88);

	if (t19 != -127LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x89 = 70LLU;
	int64_t x91 = -69157371758753LL;
	uint8_t x92 = 1U;
	volatile uint64_t t20 = 68512685LLU;

	t20 = ((x89*(x90/x91))^x92);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x93 = -1;
	static uint8_t x94 = 3U;
	volatile uint32_t x95 = 5U;
	int64_t x96 = 12600379756435LL;
	volatile int64_t t21 = -510842758489005LL;

	t21 = ((x93*(x94/x95))^x96);

	if (t21 != 12600379756435LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = UINT64_MAX;
	int64_t x98 = INT64_MIN;
	uint8_t x99 = 3U;
	uint8_t x100 = UINT8_MAX;
	volatile uint64_t t22 = 1015LLU;

	t22 = ((x97*(x98/x99))^x100);

	if (t22 != 3074457345618258517LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x101 = INT16_MIN;
	static uint16_t x102 = UINT16_MAX;
	volatile int64_t x104 = -1LL;
	int64_t t23 = -956094548442LL;

	t23 = ((x101*(x102/x103))^x104);

	if (t23 != -2147450881LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x107 = INT64_MAX;
	int64_t x108 = INT64_MAX;
	int64_t t24 = INT64_MAX;

	t24 = ((x105*(x106/x107))^x108);

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x110 = INT64_MIN;
	int32_t x111 = INT32_MIN;
	uint16_t x112 = 1749U;

	t25 = ((x109*(x110/x111))^x112);

	if (t25 != 12884903637LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = 11;
	volatile int64_t t26 = 26323786325181LL;

	t26 = ((x113*(x114/x115))^x116);

	if (t26 != 145914912234470LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x117 = 3U;
	uint8_t x118 = UINT8_MAX;
	int32_t x119 = -346234;
	int64_t x120 = INT64_MAX;

	t27 = ((x117*(x118/x119))^x120);

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -629;
	volatile int8_t x122 = INT8_MAX;
	uint8_t x123 = 27U;
	volatile int32_t t28 = 1048;

	t28 = ((x121*(x122/x123))^x124);

	if (t28 != -2477) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x126 = 29966U;
	int16_t x128 = INT16_MAX;
	volatile uint64_t t29 = 135951689575604744LLU;

	t29 = ((x125*(x126/x127))^x128);

	if (t29 != 17455164544668523353LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 24LLU;
	int16_t x130 = INT16_MIN;
	int16_t x132 = INT16_MIN;
	volatile uint64_t t30 = 1109524835293525LLU;

	t30 = ((x129*(x130/x131))^x132);

	if (t30 != 26576LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x133 = 238391U;
	volatile int64_t x134 = 1473516135LL;
	int16_t x135 = INT16_MAX;
	volatile int8_t x136 = INT8_MAX;
	static int64_t t31 = 7952243218LL;

	t31 = ((x133*(x134/x135))^x136);

	if (t31 != 10720204848LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x138 = UINT8_MAX;
	static int8_t x139 = -1;
	uint32_t t32 = 1349187216U;

	t32 = ((x137*(x138/x139))^x140);

	if (t32 != 128U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x142 = INT64_MIN;
	int16_t x143 = INT16_MIN;
	uint32_t x144 = 858785U;
	static volatile int64_t t33 = -1705019633268504LL;

	t33 = ((x141*(x142/x143))^x144);

	if (t33 != -1688849859405151LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x157 = -1;
	static uint64_t x158 = 14242547450659LLU;
	int8_t x159 = INT8_MIN;
	static volatile int16_t x160 = INT16_MIN;
	volatile uint64_t t34 = 10876537237059207LLU;

	t34 = ((x157*(x158/x159))^x160);

	if (t34 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = 66705306321LLU;
	volatile uint32_t x162 = 360733338U;
	volatile int32_t x163 = INT32_MAX;
	int64_t x164 = 8374740609138193LL;
	static uint64_t t35 = 153487135496897130LLU;

	t35 = ((x161*(x162/x163))^x164);

	if (t35 != 8374740609138193LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x166 = 3;
	int64_t x167 = INT64_MAX;
	int16_t x168 = INT16_MAX;
	volatile int64_t t36 = 32043287631791LL;

	t36 = ((x165*(x166/x167))^x168);

	if (t36 != 32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = INT32_MAX;
	uint32_t x175 = UINT32_MAX;
	int8_t x176 = INT8_MIN;
	static volatile uint32_t t37 = 445U;

	t37 = ((x173*(x174/x175))^x176);

	if (t37 != 4294967168U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = INT32_MIN;
	volatile int32_t t38 = INT32_MIN;

	t38 = ((x181*(x182/x183))^x184);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x194 = INT16_MAX;
	volatile uint32_t x195 = 2U;
	uint32_t x196 = 453711859U;
	volatile uint32_t t39 = 5624148U;

	t39 = ((x193*(x194/x195))^x196);

	if (t39 != 453617670U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x197 = 2935884LLU;
	int16_t x199 = -1;
	static volatile uint64_t x200 = UINT64_MAX;

	t40 = ((x197*(x198/x199))^x200);

	if (t40 != 18446744021010433815LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x201 = INT16_MIN;
	int32_t x202 = -1;
	volatile int16_t x204 = -9717;
	int32_t t41 = -416237;

	t41 = ((x201*(x202/x203))^x204);

	if (t41 != -9717) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x205 = INT8_MAX;
	int16_t x206 = INT16_MAX;
	uint8_t x207 = 8U;
	static volatile int32_t x208 = -482;
	volatile int32_t t42 = 1;

	t42 = ((x205*(x206/x207))^x208);

	if (t42 != -519777) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x210 = UINT64_MAX;
	uint8_t x211 = UINT8_MAX;
	volatile int32_t x212 = INT32_MIN;
	static volatile uint64_t t43 = 3187LLU;

	t43 = ((x209*(x210/x211))^x212);

	if (t43 != 9259542121117908992LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x213 = -29LL;
	uint64_t x214 = 21LLU;
	static int64_t x215 = 6055091725453LL;
	uint64_t x216 = 797LLU;
	uint64_t t44 = 8520460LLU;

	t44 = ((x213*(x214/x215))^x216);

	if (t44 != 797LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x219 = UINT16_MAX;
	static int64_t t45 = -73LL;

	t45 = ((x217*(x218/x219))^x220);

	if (t45 != 4551414440277373550LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x221 = 180156382LLU;
	static int8_t x222 = INT8_MAX;
	uint32_t x223 = 138358716U;
	volatile uint8_t x224 = 25U;
	volatile uint64_t t46 = 32766876LLU;

	t46 = ((x221*(x222/x223))^x224);

	if (t46 != 25LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x225 = 3U;
	volatile int16_t x226 = -1;
	volatile int16_t x228 = INT16_MIN;

	t47 = ((x225*(x226/x227))^x228);

	if (t47 != 16470307208669256556LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x229 = 695U;
	int16_t x230 = -1;
	volatile int32_t x231 = INT32_MIN;
	int64_t x232 = INT64_MAX;
	int64_t t48 = INT64_MAX;

	t48 = ((x229*(x230/x231))^x232);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x233 = -1;
	uint32_t x234 = UINT32_MAX;
	int8_t x235 = INT8_MIN;
	volatile uint32_t t49 = 14U;

	t49 = ((x233*(x234/x235))^x236);

	if (t49 != 2147483647U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x241 = -71943851040LL;
	uint8_t x242 = 1U;
	static int16_t x243 = -1;
	volatile int64_t t50 = 3337444460976816862LL;

	t50 = ((x241*(x242/x243))^x244);

	if (t50 != -71943877600LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = -1;
	volatile int8_t x246 = INT8_MAX;
	uint8_t x247 = 76U;
	int64_t x248 = -1LL;

	t51 = ((x245*(x246/x247))^x248);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x249 = 1;
	int16_t x252 = INT16_MIN;

	t52 = ((x249*(x250/x251))^x252);

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x257 = -1;
	volatile int32_t x258 = 27196;
	int32_t x259 = INT32_MAX;
	int64_t t53 = 486159624696LL;

	t53 = ((x257*(x258/x259))^x260);

	if (t53 != -122LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x261 = -1;
	int8_t x262 = INT8_MIN;
	int16_t x263 = 54;
	static int32_t x264 = INT32_MIN;

	t54 = ((x261*(x262/x263))^x264);

	if (t54 != -2147483646) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x269 = -1LL;
	volatile uint64_t x270 = 5504881040393LLU;

	t55 = ((x269*(x270/x271))^x272);

	if (t55 != 3483925LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x273 = INT32_MAX;
	int8_t x274 = -49;
	static uint64_t x275 = 496LLU;
	int32_t x276 = INT32_MAX;
	volatile uint64_t t56 = 3LLU;

	t56 = ((x273*(x274/x275))^x276);

	if (t56 != 2343034023343850527LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x277 = -397195292LL;
	uint8_t x279 = 2U;
	int8_t x280 = INT8_MIN;

	t57 = ((x277*(x278/x279))^x280);

	if (t57 != -128LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x281 = 2356042U;
	volatile int16_t x282 = -11;
	uint32_t x283 = UINT32_MAX;
	int64_t x284 = INT64_MIN;

	t58 = ((x281*(x282/x283))^x284);

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x285 = -4;
	int64_t x286 = -30863308090277LL;
	volatile int64_t t59 = -529LL;

	t59 = ((x285*(x286/x287))^x288);

	if (t59 != -123453232361118LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x289 = 11;
	static int32_t x290 = 763689518;
	int8_t x291 = INT8_MAX;
	int64_t x292 = INT64_MIN;
	volatile int64_t t60 = 5LL;

	t60 = ((x289*(x290/x291))^x292);

	if (t60 != -9223372036788629475LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x293 = UINT64_MAX;
	uint32_t x294 = 3053U;
	static int16_t x295 = 5;
	volatile int32_t x296 = 1797433;
	uint64_t t61 = 37441LLU;

	t61 = ((x293*(x294/x295))^x296);

	if (t61 != 18446744073707753639LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x298 = 15U;
	int8_t x299 = INT8_MIN;
	volatile int32_t t62 = 151;

	t62 = ((x297*(x298/x299))^x300);

	if (t62 != -234) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x301 = 24451U;
	int32_t x304 = 6969656;
	volatile int64_t t63 = -31870141116490755LL;

	t63 = ((x301*(x302/x303))^x304);

	if (t63 != 6969656LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x305 = -1LL;
	static int32_t x306 = -1;
	uint8_t x308 = 0U;
	int64_t t64 = 3026761LL;

	t64 = ((x305*(x306/x307))^x308);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x313 = INT32_MIN;
	uint16_t x314 = UINT16_MAX;
	int64_t x315 = INT64_MAX;
	static int8_t x316 = -1;
	static int64_t t65 = -272770640188LL;

	t65 = ((x313*(x314/x315))^x316);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x317 = INT64_MIN;
	uint32_t x318 = 2072158U;
	uint32_t x319 = UINT32_MAX;
	uint32_t x320 = 401094684U;
	volatile int64_t t66 = -995427LL;

	t66 = ((x317*(x318/x319))^x320);

	if (t66 != 401094684LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x321 = 4LLU;
	static int8_t x323 = -1;
	int64_t x324 = INT64_MAX;
	volatile uint64_t t67 = 99619106286933067LLU;

	t67 = ((x321*(x322/x323))^x324);

	if (t67 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x329 = 1LLU;
	static uint32_t x330 = 715505U;
	static int8_t x331 = 33;
	uint64_t t68 = 37871976590LLU;

	t68 = ((x329*(x330/x331))^x332);

	if (t68 != 21582LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x337 = INT64_MIN;
	int64_t x338 = -1LL;
	int8_t x340 = -1;

	t69 = ((x337*(x338/x339))^x340);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x341 = 7U;
	static int8_t x343 = INT8_MIN;
	int32_t x344 = INT32_MIN;
	int64_t t70 = -3428126031LL;

	t70 = ((x341*(x342/x343))^x344);

	if (t70 != -2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x345 = 14616U;
	int64_t x346 = -134590135519LL;
	int16_t x347 = INT16_MIN;
	int64_t x348 = 523413LL;

	t71 = ((x345*(x346/x347))^x348);

	if (t71 != 60033438197LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x350 = -13;
	int16_t x351 = 962;
	static volatile int16_t x352 = 516;
	int32_t t72 = 7;

	t72 = ((x349*(x350/x351))^x352);

	if (t72 != 516) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x353 = UINT8_MAX;
	int32_t x354 = -191289;
	static uint8_t x355 = 4U;
	static int8_t x356 = 1;
	int32_t t73 = -34422;

	t73 = ((x353*(x354/x355))^x356);

	if (t73 != -12194609) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x357 = INT64_MIN;
	static uint16_t x358 = 1274U;
	uint32_t x359 = UINT32_MAX;
	volatile uint8_t x360 = UINT8_MAX;
	int64_t t74 = 57741042186424LL;

	t74 = ((x357*(x358/x359))^x360);

	if (t74 != 255LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x361 = INT8_MIN;
	uint8_t x362 = 25U;
	uint16_t x363 = 1U;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t75 = 0;

	t75 = ((x361*(x362/x363))^x364);

	if (t75 != -3201) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x365 = 1;
	static volatile int16_t x366 = INT16_MIN;
	int32_t x368 = -1;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = ((x365*(x366/x367))^x368);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x369 = 8254937257523547LL;
	static volatile int8_t x370 = INT8_MIN;
	int16_t x371 = INT16_MIN;
	static int64_t x372 = -1LL;

	t77 = ((x369*(x370/x371))^x372);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x377 = -1LL;
	static int32_t x379 = -1;
	int32_t x380 = -1;

	t78 = ((x377*(x378/x379))^x380);

	if (t78 != 12595LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x382 = INT32_MIN;
	int64_t x383 = INT64_MAX;
	static uint8_t x384 = 0U;
	int64_t t79 = 1862822841LL;

	t79 = ((x381*(x382/x383))^x384);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x385 = INT32_MIN;
	static volatile uint16_t x386 = 4548U;
	int32_t x387 = -872382;
	int32_t t80 = 38;

	t80 = ((x385*(x386/x387))^x388);

	if (t80 != 92) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = 21;
	volatile int16_t x391 = -988;
	volatile uint64_t x392 = 1467500LLU;
	uint64_t t81 = 17LLU;

	t81 = ((x389*(x390/x391))^x392);

	if (t81 != 1467500LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x393 = INT32_MIN;
	uint64_t x394 = 1798633102952193239LLU;
	static uint16_t x395 = 1948U;
	volatile int64_t x396 = -92LL;
	static volatile uint64_t t82 = 3757326LLU;

	t82 = ((x393*(x394/x395))^x396);

	if (t82 != 17305931870764007332LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x397 = INT8_MIN;
	static uint64_t x398 = UINT64_MAX;
	uint64_t x399 = UINT64_MAX;
	static uint16_t x400 = 2617U;
	uint64_t t83 = 13LLU;

	t83 = ((x397*(x398/x399))^x400);

	if (t83 != 18446744073709548985LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x401 = 1U;
	int8_t x402 = INT8_MIN;
	static int32_t x403 = INT32_MIN;
	static uint64_t x404 = 838624894791LLU;
	static uint64_t t84 = 16098LLU;

	t84 = ((x401*(x402/x403))^x404);

	if (t84 != 838624894791LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x406 = 16U;
	int64_t x407 = 115073532LL;
	uint64_t x408 = UINT64_MAX;
	uint64_t t85 = UINT64_MAX;

	t85 = ((x405*(x406/x407))^x408);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x410 = UINT8_MAX;
	uint8_t x411 = 1U;
	int32_t x412 = 6;
	static int32_t t86 = -1;

	t86 = ((x409*(x410/x411))^x412);

	if (t86 != -32634) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x413 = UINT64_MAX;
	uint8_t x415 = 53U;
	int32_t x416 = INT32_MIN;
	static volatile uint64_t t87 = 2099771343864887LLU;

	t87 = ((x413*(x414/x415))^x416);

	if (t87 != 2147483647LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x418 = 9341U;
	volatile int64_t x420 = -21237485639237588LL;
	volatile uint64_t t88 = 6223LLU;

	t88 = ((x417*(x418/x419))^x420);

	if (t88 != 18425506588070314028LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x421 = INT64_MIN;
	int64_t x422 = -1LL;
	static volatile int32_t x423 = -259583023;
	int32_t x424 = INT32_MAX;
	volatile int64_t t89 = -575324686759019719LL;

	t89 = ((x421*(x422/x423))^x424);

	if (t89 != 2147483647LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x425 = UINT64_MAX;
	int32_t x426 = -2;
	uint64_t x427 = 205058043517LLU;
	static volatile uint64_t t90 = 455LLU;

	t90 = ((x425*(x426/x427))^x428);

	if (t90 != 18446744073619613941LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x429 = -1;
	int32_t x430 = -51381;
	int64_t x431 = INT64_MAX;
	uint16_t x432 = 95U;
	volatile int64_t t91 = 3037035605318949218LL;

	t91 = ((x429*(x430/x431))^x432);

	if (t91 != 95LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x433 = -1LL;
	uint16_t x434 = UINT16_MAX;
	uint16_t x435 = 4714U;
	int16_t x436 = -50;
	volatile int64_t t92 = 0LL;

	t92 = ((x433*(x434/x435))^x436);

	if (t92 != 61LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x441 = INT32_MIN;
	static uint64_t t93 = 430759970LLU;

	t93 = ((x441*(x442/x443))^x444);

	if (t93 != 37515845693341695LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x450 = 59389727545451017LLU;
	static int64_t x452 = -1LL;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = ((x449*(x450/x451))^x452);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x453 = INT32_MAX;
	volatile uint8_t x454 = 1U;
	volatile int64_t x455 = INT64_MAX;
	int32_t x456 = INT32_MIN;
	volatile int64_t t95 = -278882117616384833LL;

	t95 = ((x453*(x454/x455))^x456);

	if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x458 = INT16_MAX;
	uint64_t x460 = 273529LLU;
	static volatile uint64_t t96 = 7705339684593LLU;

	t96 = ((x457*(x458/x459))^x460);

	if (t96 != 17927520242089001010LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x461 = 12;
	uint8_t x462 = 7U;
	uint32_t x463 = UINT32_MAX;
	static uint8_t x464 = 51U;

	t97 = ((x461*(x462/x463))^x464);

	if (t97 != 51U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x465 = -337210280412LL;
	uint16_t x466 = UINT16_MAX;
	volatile int8_t x468 = INT8_MIN;
	int64_t t98 = -425LL;

	t98 = ((x465*(x466/x467))^x468);

	if (t98 != -22099075726800476LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x469 = INT8_MAX;
	int16_t x470 = 4;
	int16_t x471 = 31;
	uint8_t x472 = 0U;
	int32_t t99 = -10548227;

	t99 = ((x469*(x470/x471))^x472);

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

