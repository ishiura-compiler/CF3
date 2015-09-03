#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = -1;
int64_t x12 = -236646552029LL;
int32_t t3 = -5970046;
int32_t x17 = INT32_MIN;
static int64_t x18 = INT64_MAX;
static int64_t x21 = INT64_MAX;
uint8_t x26 = 18U;
int64_t x27 = INT64_MIN;
uint8_t x28 = 2U;
int16_t x31 = -1;
int16_t x35 = 6760;
uint32_t x46 = 1517U;
int32_t t12 = -6;
static volatile int32_t t13 = 204494617;
int32_t x57 = -1;
static volatile int16_t x65 = INT16_MIN;
static int64_t x66 = -12470LL;
int16_t x69 = 0;
uint8_t x74 = 1U;
volatile int32_t x80 = -1;
static int64_t x84 = -2227088773852LL;
static int32_t x87 = INT32_MAX;
uint64_t x90 = 23203LLU;
static volatile int32_t t22 = 27016;
volatile int32_t x93 = -1;
int64_t x99 = -1LL;
int8_t x106 = INT8_MIN;
volatile uint32_t x107 = 160015877U;
int64_t x112 = INT64_MIN;
int32_t t28 = -7721;
static int16_t x117 = INT16_MIN;
int32_t x123 = -1;
static volatile int32_t t30 = 709549;
int16_t x133 = 342;
int16_t x134 = INT16_MIN;
volatile int8_t x136 = 29;
static int32_t t34 = 170;
static int32_t x152 = -345818;
int64_t x156 = INT64_MAX;
volatile int32_t t38 = -705660;
static volatile int32_t x161 = INT32_MIN;
int16_t x165 = INT16_MIN;
uint32_t x181 = 5083226U;
volatile int16_t x182 = INT16_MIN;
int32_t t45 = 18222598;
int64_t x189 = INT64_MIN;
int16_t x191 = -1;
int64_t x193 = INT64_MIN;
volatile int32_t t49 = -66;
static volatile int64_t x201 = -4266434097LL;
uint64_t x207 = 8141428390392591LLU;
int8_t x212 = -15;
static int32_t x216 = -146565166;
uint16_t x218 = UINT16_MAX;
static int16_t x232 = 4;
volatile int32_t t57 = 6;
volatile int32_t t60 = 27434980;
uint8_t x248 = 0U;
int8_t x249 = INT8_MIN;
volatile uint8_t x255 = 95U;
uint8_t x256 = UINT8_MAX;
volatile int32_t x260 = INT32_MIN;
int16_t x261 = INT16_MIN;
int32_t x264 = 30969;
int8_t x268 = -1;
volatile int32_t t66 = 1903;
static uint32_t x271 = 11458U;
int32_t x272 = INT32_MIN;
volatile int32_t t67 = 3781;
volatile int32_t t68 = -16695;
int32_t x278 = -3;
volatile uint64_t x283 = 1878LLU;
static uint64_t x298 = 86804423015LLU;
uint8_t x300 = 1U;
static int64_t x303 = INT64_MIN;
uint8_t x310 = 90U;
volatile int32_t x312 = -1;
uint8_t x313 = UINT8_MAX;
int8_t x326 = 26;
uint64_t x330 = UINT64_MAX;
volatile int32_t t82 = -79002520;
uint32_t x333 = 41222U;
int16_t x334 = INT16_MAX;
int32_t t83 = 64689;
int64_t x338 = -1LL;
int64_t x342 = INT64_MIN;
volatile int16_t x350 = INT16_MIN;
int32_t x351 = INT32_MAX;
static int32_t x352 = -1;
int32_t t87 = -12772200;
uint64_t x353 = 104LLU;
volatile int32_t t88 = 2983;
uint32_t x367 = 13911581U;
uint32_t x376 = 281U;
int8_t x385 = INT8_MAX;
uint32_t x387 = UINT32_MAX;
volatile int8_t x388 = -2;
static uint8_t x390 = 53U;
uint16_t x394 = 13U;
int16_t x396 = -230;
static volatile int32_t t98 = -201784;


void f0(void) {
	int64_t x2 = 2262679LL;
	int64_t x3 = 5243LL;
	int8_t x4 = -1;
	volatile int32_t t0 = 1610;

	t0 = ((x1==(x2|x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	volatile int64_t x6 = INT64_MIN;
	volatile int8_t x7 = -1;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -47421;

	t1 = ((x5==(x6|x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 58U;
	static uint16_t x10 = UINT16_MAX;
	static volatile int16_t x11 = INT16_MIN;
	int32_t t2 = 8;

	t2 = ((x9==(x10|x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -1LL;
	uint32_t x14 = 57223U;
	static int8_t x15 = 24;
	int16_t x16 = INT16_MAX;

	t3 = ((x13==(x14|x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x19 = INT32_MIN;
	int64_t x20 = INT64_MIN;
	static volatile int32_t t4 = 1;

	t4 = ((x17==(x18|x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MAX;
	uint64_t x23 = 28032885709LLU;
	int8_t x24 = INT8_MIN;
	int32_t t5 = -1640868;

	t5 = ((x21==(x22|x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	volatile int32_t t6 = -951316;

	t6 = ((x25==(x26|x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 71U;
	volatile uint32_t x30 = 172U;
	static uint64_t x32 = 4138604285LLU;
	static int32_t t7 = -101981;

	t7 = ((x29==(x30|x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int64_t x34 = INT64_MAX;
	static int16_t x36 = INT16_MIN;
	volatile int32_t t8 = -332215263;

	t8 = ((x33==(x34|x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int8_t x38 = INT8_MIN;
	static int64_t x39 = INT64_MIN;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = -1016;

	t9 = ((x37==(x38|x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -13882969;
	int64_t x42 = 0LL;
	int64_t x43 = -1LL;
	volatile int32_t x44 = INT32_MIN;
	static volatile int32_t t10 = 23224;

	t10 = ((x41==(x42|x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 8U;
	uint8_t x47 = 1U;
	static int64_t x48 = -25052LL;
	volatile int32_t t11 = 31;

	t11 = ((x45==(x46|x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = INT32_MIN;
	uint32_t x51 = 323709907U;
	int64_t x52 = INT64_MIN;

	t12 = ((x49==(x50|x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1LL;
	volatile uint16_t x54 = UINT16_MAX;
	int16_t x55 = -293;
	volatile uint8_t x56 = 21U;

	t13 = ((x53==(x54|x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = 6259U;
	int8_t x59 = INT8_MIN;
	volatile uint8_t x60 = 5U;
	static int32_t t14 = -1;

	t14 = ((x57==(x58|x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	volatile int16_t x62 = INT16_MAX;
	uint64_t x63 = UINT64_MAX;
	int32_t x64 = INT32_MIN;
	int32_t t15 = 72217;

	t15 = ((x61==(x62|x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x67 = INT32_MAX;
	uint64_t x68 = 5856906832701018333LLU;
	static int32_t t16 = -26979;

	t16 = ((x65==(x66|x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = -1;
	static volatile int32_t x71 = -130560;
	int64_t x72 = INT64_MIN;
	int32_t t17 = -1802211;

	t17 = ((x69==(x70|x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	volatile uint64_t x75 = UINT64_MAX;
	volatile uint8_t x76 = 1U;
	volatile int32_t t18 = 43;

	t18 = ((x73==(x74|x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 9U;
	int64_t x78 = 20938741131903936LL;
	uint8_t x79 = 1U;
	volatile int32_t t19 = -4534;

	t19 = ((x77==(x78|x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 0;
	static uint8_t x82 = 2U;
	int64_t x83 = INT64_MIN;
	static volatile int32_t t20 = -1789;

	t20 = ((x81==(x82|x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MAX;
	static int8_t x88 = 7;
	int32_t t21 = 3;

	t21 = ((x85==(x86|x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 1U;
	int8_t x91 = INT8_MIN;
	int32_t x92 = -703602329;

	t22 = ((x89==(x90|x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MAX;
	static volatile int16_t x96 = 199;
	int32_t t23 = 94339947;

	t23 = ((x93==(x94|x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	static uint64_t x98 = 3763885LLU;
	uint64_t x100 = UINT64_MAX;
	volatile int32_t t24 = 0;

	t24 = ((x97==(x98|x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	int32_t x104 = -1;
	static int32_t t25 = -231436772;

	t25 = ((x101==(x102|x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = INT32_MAX;
	int8_t x108 = 0;
	int32_t t26 = 0;

	t26 = ((x105==(x106|x107))<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = -38;
	int32_t x110 = INT32_MAX;
	volatile int8_t x111 = INT8_MIN;
	int32_t t27 = -15;

	t27 = ((x109==(x110|x111))<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MAX;
	int8_t x114 = -1;
	uint8_t x115 = 11U;
	int64_t x116 = -168687009325057LL;

	t28 = ((x113==(x114|x115))<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x118 = 6874738760665904LLU;
	int16_t x119 = 0;
	int64_t x120 = 3432813025981LL;
	int32_t t29 = -4187027;

	t29 = ((x117==(x118|x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	uint64_t x122 = 3802645553861LLU;
	static int32_t x124 = 105;

	t30 = ((x121==(x122|x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	volatile uint64_t x126 = 24LLU;
	int8_t x127 = -1;
	static int8_t x128 = INT8_MAX;
	static volatile int32_t t31 = 16;

	t31 = ((x125==(x126|x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	int32_t x130 = -8834426;
	int64_t x131 = -2114553159LL;
	static int8_t x132 = -1;
	volatile int32_t t32 = 1240;

	t32 = ((x129==(x130|x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x135 = 1753U;
	int32_t t33 = 2;

	t33 = ((x133==(x134|x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	int64_t x138 = -1LL;
	int16_t x139 = -1;
	int8_t x140 = INT8_MIN;

	t34 = ((x137==(x138|x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	uint8_t x142 = UINT8_MAX;
	int16_t x143 = INT16_MIN;
	int16_t x144 = -1;
	int32_t t35 = -1249837;

	t35 = ((x141==(x142|x143))<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 11;
	static volatile int64_t x146 = INT64_MIN;
	static int16_t x147 = 41;
	static int64_t x148 = -1548042116630LL;
	volatile int32_t t36 = 2909;

	t36 = ((x145==(x146|x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = 32;
	int8_t x150 = -1;
	int16_t x151 = INT16_MAX;
	int32_t t37 = 14516692;

	t37 = ((x149==(x150|x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MIN;
	uint8_t x155 = 18U;

	t38 = ((x153==(x154|x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -6;
	int32_t x158 = -1;
	static int32_t x159 = -1056009;
	int64_t x160 = INT64_MIN;
	static volatile int32_t t39 = 528201;

	t39 = ((x157==(x158|x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = INT8_MIN;
	static volatile uint64_t x163 = 491418620242LLU;
	volatile uint64_t x164 = 7546178LLU;
	volatile int32_t t40 = -158668;

	t40 = ((x161==(x162|x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = 13U;
	static int64_t x167 = 70441354329560LL;
	int8_t x168 = INT8_MAX;
	int32_t t41 = 904357;

	t41 = ((x165==(x166|x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	int32_t x170 = INT32_MAX;
	uint8_t x171 = UINT8_MAX;
	static uint64_t x172 = UINT64_MAX;
	volatile int32_t t42 = -120571552;

	t42 = ((x169==(x170|x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	static volatile int8_t x174 = -1;
	static uint64_t x175 = UINT64_MAX;
	static int32_t x176 = 1;
	static int32_t t43 = -490304686;

	t43 = ((x173==(x174|x175))<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 813;
	uint32_t x178 = 94U;
	int8_t x179 = -4;
	static volatile int8_t x180 = -21;
	static volatile int32_t t44 = -607;

	t44 = ((x177==(x178|x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MAX;

	t45 = ((x181==(x182|x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	volatile int32_t x186 = INT32_MAX;
	static int8_t x187 = -1;
	static uint64_t x188 = UINT64_MAX;
	volatile int32_t t46 = -500221;

	t46 = ((x185==(x186|x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = INT8_MIN;
	int8_t x192 = -5;
	static int32_t t47 = 4293;

	t47 = ((x189==(x190|x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x194 = 81U;
	int8_t x195 = INT8_MAX;
	volatile int64_t x196 = INT64_MAX;
	static volatile int32_t t48 = 122;

	t48 = ((x193==(x194|x195))<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = INT32_MIN;
	static uint64_t x198 = 54482504378889LLU;
	int32_t x199 = INT32_MIN;
	int32_t x200 = INT32_MAX;

	t49 = ((x197==(x198|x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x202 = 42U;
	static int8_t x203 = 9;
	int32_t x204 = INT32_MAX;
	int32_t t50 = -35933;

	t50 = ((x201==(x202|x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = -2LL;
	int32_t x206 = -1;
	static int16_t x208 = INT16_MIN;
	int32_t t51 = -3802963;

	t51 = ((x205==(x206|x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 1;
	int16_t x210 = -1;
	static uint8_t x211 = 62U;
	volatile int32_t t52 = 1;

	t52 = ((x209==(x210|x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = 25860964521706LLU;
	static int32_t x214 = INT32_MIN;
	volatile int64_t x215 = -108137560LL;
	int32_t t53 = -19652452;

	t53 = ((x213==(x214|x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 7012LL;
	static int16_t x219 = INT16_MAX;
	int64_t x220 = -32009LL;
	int32_t t54 = -501556;

	t54 = ((x217==(x218|x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MIN;
	volatile int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	int32_t t55 = 3991;

	t55 = ((x221==(x222|x223))<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -511714506765LL;
	uint64_t x226 = 492834189260894668LLU;
	int64_t x227 = INT64_MAX;
	int64_t x228 = INT64_MIN;
	static volatile int32_t t56 = -27398269;

	t56 = ((x225==(x226|x227))<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = UINT32_MAX;
	volatile uint32_t x230 = 1174790U;
	int64_t x231 = -18524210LL;

	t57 = ((x229==(x230|x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = -1102;
	uint16_t x234 = UINT16_MAX;
	uint64_t x235 = 970729667520LLU;
	uint16_t x236 = 206U;
	int32_t t58 = -3092;

	t58 = ((x233==(x234|x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	uint32_t x238 = 244990U;
	int64_t x239 = 3283LL;
	static int8_t x240 = INT8_MIN;
	static volatile int32_t t59 = -1;

	t59 = ((x237==(x238|x239))<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 14908138906715753LLU;
	int32_t x242 = INT32_MIN;
	static int64_t x243 = -1LL;
	int64_t x244 = -106106337663642056LL;

	t60 = ((x241==(x242|x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	uint8_t x246 = 1U;
	int32_t x247 = INT32_MIN;
	static volatile int32_t t61 = -724;

	t61 = ((x245==(x246|x247))<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = -1;
	int32_t x251 = INT32_MIN;
	int32_t x252 = INT32_MIN;
	int32_t t62 = -5744082;

	t62 = ((x249==(x250|x251))<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -9;
	int64_t x254 = -5098558342LL;
	volatile int32_t t63 = -66970730;

	t63 = ((x253==(x254|x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = 19359LL;
	uint8_t x258 = 1U;
	volatile int64_t x259 = INT64_MIN;
	int32_t t64 = 55;

	t64 = ((x257==(x258|x259))<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x262 = 104604727108068LLU;
	int64_t x263 = INT64_MIN;
	volatile int32_t t65 = -166;

	t65 = ((x261==(x262|x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 21;
	int16_t x266 = -6;
	static volatile int8_t x267 = INT8_MAX;

	t66 = ((x265==(x266|x267))<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	int16_t x270 = INT16_MAX;

	t67 = ((x269==(x270|x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	uint32_t x274 = 596662425U;
	static volatile uint64_t x275 = UINT64_MAX;
	int16_t x276 = INT16_MIN;

	t68 = ((x273==(x274|x275))<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = -6;
	uint32_t x279 = 11U;
	static int16_t x280 = INT16_MIN;
	volatile int32_t t69 = 60;

	t69 = ((x277==(x278|x279))<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -22;
	int16_t x282 = -687;
	int8_t x284 = 0;
	static volatile int32_t t70 = 826371;

	t70 = ((x281==(x282|x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 1;
	static volatile uint8_t x286 = UINT8_MAX;
	static volatile int8_t x287 = 22;
	static int16_t x288 = -1;
	int32_t t71 = 2256;

	t71 = ((x285==(x286|x287))<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = 68643269;
	volatile int64_t x290 = -581157288291002676LL;
	volatile int16_t x291 = INT16_MAX;
	int32_t x292 = -133;
	int32_t t72 = 13690;

	t72 = ((x289==(x290|x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = 11745485LL;
	int8_t x294 = 1;
	uint32_t x295 = UINT32_MAX;
	static int32_t x296 = -1;
	volatile int32_t t73 = 1151755;

	t73 = ((x293==(x294|x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	static int16_t x299 = INT16_MIN;
	volatile int32_t t74 = 71859308;

	t74 = ((x297==(x298|x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x301 = UINT16_MAX;
	volatile uint8_t x302 = 13U;
	int32_t x304 = 27533378;
	volatile int32_t t75 = 3670;

	t75 = ((x301==(x302|x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -1;
	static int16_t x306 = INT16_MAX;
	int16_t x307 = INT16_MIN;
	int64_t x308 = 8734835993599LL;
	int32_t t76 = 4;

	t76 = ((x305==(x306|x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -45417633;
	volatile uint8_t x311 = 5U;
	volatile int32_t t77 = 541388;

	t77 = ((x309==(x310|x311))<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x314 = 6448504762LLU;
	int16_t x315 = 3132;
	uint16_t x316 = 3283U;
	volatile int32_t t78 = -99733514;

	t78 = ((x313==(x314|x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = INT64_MIN;
	int8_t x318 = INT8_MIN;
	volatile uint32_t x319 = UINT32_MAX;
	static volatile int64_t x320 = INT64_MAX;
	int32_t t79 = -4;

	t79 = ((x317==(x318|x319))<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = 142654241133LLU;
	int16_t x322 = -1;
	volatile int64_t x323 = -4LL;
	int16_t x324 = 2387;
	volatile int32_t t80 = -44;

	t80 = ((x321==(x322|x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	uint64_t x327 = UINT64_MAX;
	static uint8_t x328 = 29U;
	volatile int32_t t81 = 84057;

	t81 = ((x325==(x326|x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = 5733;
	int64_t x331 = INT64_MIN;
	int16_t x332 = 199;

	t82 = ((x329==(x330|x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x335 = INT16_MIN;
	volatile uint64_t x336 = 181213072577984LLU;

	t83 = ((x333==(x334|x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 5339;
	uint8_t x339 = 94U;
	static volatile int32_t x340 = 27275;
	volatile int32_t t84 = -889075;

	t84 = ((x337==(x338|x339))<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = -1;
	int64_t x343 = INT64_MIN;
	uint64_t x344 = 138021750082885LLU;
	int32_t t85 = 206019;

	t85 = ((x341==(x342|x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 0U;
	volatile int8_t x346 = -1;
	uint8_t x347 = 38U;
	static int32_t x348 = INT32_MIN;
	volatile int32_t t86 = 212899;

	t86 = ((x345==(x346|x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;

	t87 = ((x349==(x350|x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = -1LL;
	int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MAX;

	t88 = ((x353==(x354|x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MAX;
	int32_t x358 = -20;
	uint16_t x359 = UINT16_MAX;
	static int8_t x360 = INT8_MIN;
	volatile int32_t t89 = -214;

	t89 = ((x357==(x358|x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	uint16_t x362 = UINT16_MAX;
	uint64_t x363 = 152998621732316670LLU;
	int16_t x364 = -204;
	static int32_t t90 = 502;

	t90 = ((x361==(x362|x363))<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = -1LL;
	int64_t x366 = -1LL;
	int8_t x368 = -9;
	volatile int32_t t91 = 512343;

	t91 = ((x365==(x366|x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	volatile int8_t x370 = INT8_MIN;
	int16_t x371 = -1;
	volatile uint32_t x372 = 126990418U;
	volatile int32_t t92 = -22;

	t92 = ((x369==(x370|x371))<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MAX;
	volatile uint8_t x374 = 19U;
	int16_t x375 = INT16_MIN;
	volatile int32_t t93 = -5741;

	t93 = ((x373==(x374|x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 3198U;
	static int16_t x378 = INT16_MIN;
	uint32_t x379 = 1U;
	volatile int16_t x380 = -1;
	int32_t t94 = -639847;

	t94 = ((x377==(x378|x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MAX;
	uint32_t x383 = UINT32_MAX;
	int16_t x384 = 0;
	int32_t t95 = -58136;

	t95 = ((x381==(x382|x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x386 = INT32_MAX;
	volatile int32_t t96 = 3941;

	t96 = ((x385==(x386|x387))<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	static uint32_t x391 = 71590024U;
	int64_t x392 = -1LL;
	int32_t t97 = 16514334;

	t97 = ((x389==(x390|x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	volatile uint16_t x395 = 1U;

	t98 = ((x393==(x394|x395))<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 722U;
	int64_t x398 = INT64_MAX;
	uint32_t x399 = 33958U;
	int16_t x400 = -116;
	int32_t t99 = 1746;

	t99 = ((x397==(x398|x399))<=x400);

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

