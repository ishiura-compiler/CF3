#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x10 = INT16_MIN;
int8_t x12 = -1;
int32_t x21 = INT32_MIN;
int32_t t5 = 0;
int16_t x30 = 12;
volatile uint16_t x41 = 1854U;
int64_t x46 = INT64_MIN;
int32_t x48 = INT32_MAX;
int8_t x49 = -1;
uint16_t x51 = 3767U;
int16_t x59 = INT16_MIN;
int8_t x64 = -1;
volatile int8_t x67 = 6;
uint64_t t16 = 2851220240814245LLU;
uint32_t x83 = 821U;
static uint64_t t19 = UINT64_MAX;
int32_t x87 = INT32_MAX;
uint32_t x88 = 6655U;
uint64_t x94 = 496554755273LLU;
static volatile int32_t x97 = -27;
int16_t x109 = 1861;
uint32_t x110 = 56U;
volatile uint32_t t26 = 513953U;
int32_t x119 = 2405;
volatile int8_t x124 = -1;
uint32_t x126 = UINT32_MAX;
volatile uint64_t x128 = 33387345058309LLU;
int8_t x130 = 1;
static int64_t x132 = 73275861LL;
volatile uint64_t t32 = 2699LLU;
volatile int16_t x148 = 193;
uint32_t t34 = 7U;
volatile int8_t x150 = 4;
volatile int64_t t35 = -58LL;
int32_t x153 = INT32_MAX;
volatile uint8_t x159 = 5U;
static volatile uint64_t t38 = 281411055583804LLU;
volatile uint32_t x172 = 418157693U;
static int64_t x183 = INT64_MIN;
static int64_t x186 = -1LL;
int8_t x189 = INT8_MAX;
volatile int32_t x191 = INT32_MAX;
int16_t x196 = -1;
uint8_t x197 = UINT8_MAX;
int64_t x199 = INT64_MIN;
static uint64_t x204 = 467743226LLU;
static volatile int8_t x206 = INT8_MAX;
static int32_t x214 = INT32_MAX;
int32_t x227 = INT32_MAX;
int8_t x230 = -5;
uint16_t x231 = 19543U;
static int32_t t55 = -2966711;
static int32_t x235 = -1;
static int64_t x237 = INT64_MIN;
int16_t x245 = INT16_MAX;
int16_t x247 = 856;
int8_t x249 = 1;
volatile uint32_t t60 = 183023686U;
static int16_t x261 = INT16_MIN;
int32_t x262 = 331;
volatile uint8_t x269 = UINT8_MAX;
volatile int8_t x272 = INT8_MIN;
int16_t x273 = -1;
int16_t x283 = 1526;
int64_t t68 = INT64_MAX;
int16_t x295 = INT16_MAX;
int32_t t71 = 326145518;
int8_t x302 = INT8_MIN;
volatile int8_t x303 = INT8_MIN;
static volatile int32_t x305 = 15;
int32_t x315 = INT32_MIN;
int64_t t76 = -4283417627705626749LL;
static int16_t x319 = INT16_MIN;
static int16_t x322 = INT16_MIN;
static volatile int32_t x329 = INT32_MAX;
uint64_t x339 = 328919191374999142LLU;
uint16_t x340 = UINT16_MAX;
static volatile uint16_t x350 = UINT16_MAX;
volatile int8_t x354 = 44;
uint32_t t86 = 220158U;
uint8_t x357 = 4U;
volatile int8_t x370 = -1;
static int32_t x374 = 132482;
static volatile uint32_t t91 = 769820U;
int16_t x387 = INT16_MAX;
static volatile int32_t t94 = -14367;
int16_t x391 = -638;
int8_t x394 = INT8_MAX;
int32_t x396 = -34;
uint16_t x398 = UINT16_MAX;
volatile int8_t x400 = INT8_MAX;
volatile uint8_t x406 = 3U;
volatile uint32_t t98 = 14467089U;
volatile uint64_t t99 = 519038590LLU;


void f0(void) {
	volatile uint16_t x1 = 118U;
	static uint8_t x2 = 1U;
	volatile int16_t x3 = INT16_MIN;
	static int16_t x4 = INT16_MAX;
	int32_t t0 = 495253;

	t0 = (((x1<=x2)*x3)+x4);

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	uint64_t x6 = 71304LLU;
	uint64_t x7 = 249780LLU;
	int16_t x8 = INT16_MAX;
	volatile uint64_t t1 = 101815912570013LLU;

	t1 = (((x5<=x6)*x7)+x8);

	if (t1 != 32767LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -3579335LL;
	static int64_t x11 = -3742238916LL;
	volatile int64_t t2 = 468528525995054LL;

	t2 = (((x9<=x10)*x11)+x12);

	if (t2 != -3742238917LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = INT64_MIN;
	static uint16_t x14 = 988U;
	int8_t x15 = 1;
	uint32_t x16 = 527090628U;
	volatile uint32_t t3 = 551144U;

	t3 = (((x13<=x14)*x15)+x16);

	if (t3 != 527090629U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = -7034181623777LL;
	int64_t x23 = INT64_MIN;
	int64_t x24 = -1366828248334540LL;
	volatile int64_t t4 = -1031716600LL;

	t4 = (((x21<=x22)*x23)+x24);

	if (t4 != -1366828248334540LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	uint8_t x26 = 63U;
	int16_t x27 = 1;
	int32_t x28 = INT32_MIN;

	t5 = (((x25<=x26)*x27)+x28);

	if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = -3;
	static int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MAX;
	volatile int32_t t6 = -9921;

	t6 = (((x29<=x30)*x31)+x32);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 13U;
	int32_t x34 = 82060853;
	int32_t x35 = INT32_MAX;
	int32_t x36 = INT32_MIN;
	int32_t t7 = 116082;

	t7 = (((x33<=x34)*x35)+x36);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 1177410747158424592LL;
	uint8_t x38 = 56U;
	int64_t x39 = 340196LL;
	volatile uint8_t x40 = UINT8_MAX;
	int64_t t8 = 1LL;

	t8 = (((x37<=x38)*x39)+x40);

	if (t8 != 255LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x42 = UINT64_MAX;
	volatile int8_t x43 = INT8_MAX;
	int32_t x44 = -1;
	static volatile int32_t t9 = -452;

	t9 = (((x41<=x42)*x43)+x44);

	if (t9 != 126) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = INT64_MAX;
	int8_t x47 = 7;
	static int32_t t10 = INT32_MAX;

	t10 = (((x45<=x46)*x47)+x48);

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = INT8_MAX;
	volatile int32_t x52 = 17197;
	static volatile int32_t t11 = 436821601;

	t11 = (((x49<=x50)*x51)+x52);

	if (t11 != 20964) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = 1;
	int8_t x54 = -1;
	int32_t x55 = -1;
	static int8_t x56 = -1;
	static volatile int32_t t12 = 36553;

	t12 = (((x53<=x54)*x55)+x56);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = INT64_MIN;
	int8_t x58 = INT8_MAX;
	static volatile int8_t x60 = 3;
	volatile int32_t t13 = 0;

	t13 = (((x57<=x58)*x59)+x60);

	if (t13 != -32765) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = 6LL;
	volatile uint8_t x62 = 1U;
	static volatile int16_t x63 = 3;
	volatile int32_t t14 = 1714437;

	t14 = (((x61<=x62)*x63)+x64);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MAX;
	volatile int32_t x66 = -1;
	static uint64_t x68 = 130583LLU;
	volatile uint64_t t15 = 66882055670LLU;

	t15 = (((x65<=x66)*x67)+x68);

	if (t15 != 130583LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -1;
	int8_t x70 = -60;
	int64_t x71 = -1LL;
	uint64_t x72 = 322572226780619226LLU;

	t16 = (((x69<=x70)*x71)+x72);

	if (t16 != 322572226780619226LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x73 = INT32_MIN;
	uint64_t x74 = 1068LLU;
	uint64_t x75 = UINT64_MAX;
	static uint32_t x76 = 17668U;
	volatile uint64_t t17 = 1673539658310199LLU;

	t17 = (((x73<=x74)*x75)+x76);

	if (t17 != 17668LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 32U;
	static uint8_t x78 = 0U;
	int64_t x79 = INT64_MIN;
	uint16_t x80 = 920U;
	int64_t t18 = -23LL;

	t18 = (((x77<=x78)*x79)+x80);

	if (t18 != 920LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = INT16_MAX;
	volatile int64_t x82 = INT64_MIN;
	static uint64_t x84 = UINT64_MAX;

	t19 = (((x81<=x82)*x83)+x84);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x85 = -1LL;
	int16_t x86 = -1;
	volatile uint32_t t20 = 1141697U;

	t20 = (((x85<=x86)*x87)+x88);

	if (t20 != 2147490302U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -1;
	uint32_t x90 = 15U;
	volatile int64_t x91 = -1LL;
	static uint16_t x92 = 2473U;
	volatile int64_t t21 = -26738927LL;

	t21 = (((x89<=x90)*x91)+x92);

	if (t21 != 2473LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x93 = 170U;
	int16_t x95 = INT16_MAX;
	uint32_t x96 = 107577509U;
	volatile uint32_t t22 = 29U;

	t22 = (((x93<=x94)*x95)+x96);

	if (t22 != 107610276U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x98 = -468733783LL;
	int64_t x99 = -6519023LL;
	volatile uint64_t x100 = UINT64_MAX;
	uint64_t t23 = UINT64_MAX;

	t23 = (((x97<=x98)*x99)+x100);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = INT16_MIN;
	int8_t x102 = 4;
	int64_t x103 = INT64_MAX;
	static int8_t x104 = 0;
	volatile int64_t t24 = INT64_MAX;

	t24 = (((x101<=x102)*x103)+x104);

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -1;
	static volatile int64_t x106 = -180352595091LL;
	uint64_t x107 = 1LLU;
	int64_t x108 = INT64_MIN;
	volatile uint64_t t25 = 3742628818368LLU;

	t25 = (((x105<=x106)*x107)+x108);

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x111 = 119793870U;
	static int16_t x112 = INT16_MAX;

	t26 = (((x109<=x110)*x111)+x112);

	if (t26 != 32767U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -1227044775230132158LL;
	int8_t x114 = INT8_MIN;
	int64_t x115 = -116334859LL;
	int8_t x116 = -23;
	volatile int64_t t27 = 121LL;

	t27 = (((x113<=x114)*x115)+x116);

	if (t27 != -116334882LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = -1;
	uint32_t x118 = 307021U;
	volatile uint16_t x120 = 132U;
	volatile int32_t t28 = -190296;

	t28 = (((x117<=x118)*x119)+x120);

	if (t28 != 132) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -1;
	int32_t x122 = INT32_MIN;
	int64_t x123 = INT64_MIN;
	int64_t t29 = -5893887568809LL;

	t29 = (((x121<=x122)*x123)+x124);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x125 = 2;
	uint8_t x127 = 10U;
	static uint64_t t30 = 49883852LLU;

	t30 = (((x125<=x126)*x127)+x128);

	if (t30 != 33387345058319LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x129 = -90;
	static int16_t x131 = -1;
	int64_t t31 = -3547025378072711LL;

	t31 = (((x129<=x130)*x131)+x132);

	if (t31 != 73275860LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x133 = -845359240005026287LL;
	static volatile int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	static uint64_t x136 = 834LLU;

	t32 = (((x133<=x134)*x135)+x136);

	if (t32 != 706LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -1;
	uint8_t x142 = 34U;
	static int64_t x143 = 166362430653252LL;
	static int8_t x144 = 55;
	int64_t t33 = -1003596819LL;

	t33 = (((x141<=x142)*x143)+x144);

	if (t33 != 166362430653307LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x145 = 15325LLU;
	int8_t x146 = 0;
	uint32_t x147 = 67221204U;

	t34 = (((x145<=x146)*x147)+x148);

	if (t34 != 193U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = 0U;
	volatile uint32_t x151 = 430445U;
	int64_t x152 = -1LL;

	t35 = (((x149<=x150)*x151)+x152);

	if (t35 != 430444LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x154 = 1;
	volatile uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MIN;
	static uint64_t t36 = 20LLU;

	t36 = (((x153<=x154)*x155)+x156);

	if (t36 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = 6U;
	uint16_t x158 = UINT16_MAX;
	uint8_t x160 = 1U;
	static int32_t t37 = 94;

	t37 = (((x157<=x158)*x159)+x160);

	if (t37 != 6) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x161 = INT16_MIN;
	static int8_t x162 = -1;
	int8_t x163 = 13;
	volatile uint64_t x164 = 834LLU;

	t38 = (((x161<=x162)*x163)+x164);

	if (t38 != 847LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x165 = -1;
	int64_t x166 = 124754226689437005LL;
	int64_t x167 = -1LL;
	uint64_t x168 = UINT64_MAX;
	static volatile uint64_t t39 = 1956893626155857LLU;

	t39 = (((x165<=x166)*x167)+x168);

	if (t39 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x169 = INT8_MIN;
	uint32_t x170 = UINT32_MAX;
	volatile int8_t x171 = INT8_MIN;
	uint32_t t40 = 0U;

	t40 = (((x169<=x170)*x171)+x172);

	if (t40 != 418157565U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = 1424U;
	int64_t x174 = INT64_MAX;
	int32_t x175 = 727;
	int16_t x176 = -13036;
	volatile int32_t t41 = 37830;

	t41 = (((x173<=x174)*x175)+x176);

	if (t41 != -12309) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x177 = INT64_MAX;
	int16_t x178 = -15;
	static volatile int64_t x179 = -1LL;
	int64_t x180 = -1LL;
	static int64_t t42 = -4171236LL;

	t42 = (((x177<=x178)*x179)+x180);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	volatile uint32_t x182 = 165979373U;
	static volatile int8_t x184 = INT8_MIN;
	int64_t t43 = -515734688LL;

	t43 = (((x181<=x182)*x183)+x184);

	if (t43 != -128LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x185 = -1;
	int32_t x187 = INT32_MIN;
	int32_t x188 = INT32_MAX;
	volatile int32_t t44 = -2271470;

	t44 = (((x185<=x186)*x187)+x188);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x190 = 32U;
	uint8_t x192 = 107U;
	int32_t t45 = -145426;

	t45 = (((x189<=x190)*x191)+x192);

	if (t45 != 107) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = UINT8_MAX;
	int8_t x194 = INT8_MIN;
	int64_t x195 = -1LL;
	static volatile int64_t t46 = -5528LL;

	t46 = (((x193<=x194)*x195)+x196);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x198 = -1;
	static int16_t x200 = -1;
	volatile int64_t t47 = 92289258679LL;

	t47 = (((x197<=x198)*x199)+x200);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x201 = 486922U;
	uint64_t x202 = 16902950LLU;
	int8_t x203 = INT8_MAX;
	uint64_t t48 = 16123LLU;

	t48 = (((x201<=x202)*x203)+x204);

	if (t48 != 467743353LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = -50;
	int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MAX;
	int64_t t49 = -3404653291LL;

	t49 = (((x205<=x206)*x207)+x208);

	if (t49 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x209 = -1LL;
	int32_t x210 = INT32_MAX;
	uint32_t x211 = UINT32_MAX;
	volatile int16_t x212 = -91;
	uint32_t t50 = 32674U;

	t50 = (((x209<=x210)*x211)+x212);

	if (t50 != 4294967204U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x213 = -3792297196230LL;
	uint32_t x215 = 3447943U;
	int32_t x216 = INT32_MAX;
	uint32_t t51 = 4375U;

	t51 = (((x213<=x214)*x215)+x216);

	if (t51 != 2150931590U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = -3610267269794349LL;
	volatile int16_t x218 = INT16_MIN;
	uint8_t x219 = 52U;
	uint8_t x220 = UINT8_MAX;
	static volatile int32_t t52 = -5157109;

	t52 = (((x217<=x218)*x219)+x220);

	if (t52 != 307) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = 16295;
	int8_t x222 = 2;
	int8_t x223 = -28;
	uint8_t x224 = 19U;
	static int32_t t53 = -11367023;

	t53 = (((x221<=x222)*x223)+x224);

	if (t53 != 19) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x225 = UINT64_MAX;
	int8_t x226 = INT8_MAX;
	volatile uint64_t x228 = 13424075555079LLU;
	static uint64_t t54 = 65774688237345141LLU;

	t54 = (((x225<=x226)*x227)+x228);

	if (t54 != 13424075555079LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x229 = INT8_MIN;
	static int32_t x232 = INT32_MIN;

	t55 = (((x229<=x230)*x231)+x232);

	if (t55 != -2147464105) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 5582689LLU;
	static uint16_t x234 = 0U;
	static int64_t x236 = INT64_MIN;
	volatile int64_t t56 = INT64_MIN;

	t56 = (((x233<=x234)*x235)+x236);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x238 = INT16_MAX;
	volatile int16_t x239 = INT16_MIN;
	static int16_t x240 = INT16_MAX;
	volatile int32_t t57 = -88754914;

	t57 = (((x237<=x238)*x239)+x240);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = -3;
	uint8_t x242 = 0U;
	uint32_t x243 = UINT32_MAX;
	volatile uint64_t x244 = 647868932LLU;
	static volatile uint64_t t58 = 5LLU;

	t58 = (((x241<=x242)*x243)+x244);

	if (t58 != 4942836227LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x246 = 133U;
	static int8_t x248 = 4;
	volatile int32_t t59 = -391471;

	t59 = (((x245<=x246)*x247)+x248);

	if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x250 = 2744U;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = -1;

	t60 = (((x249<=x250)*x251)+x252);

	if (t60 != 4294967294U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = 0U;
	volatile int16_t x254 = -780;
	int16_t x255 = 14;
	uint16_t x256 = UINT16_MAX;
	int32_t t61 = 154683049;

	t61 = (((x253<=x254)*x255)+x256);

	if (t61 != 65549) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = 3U;
	volatile uint16_t x258 = UINT16_MAX;
	volatile int16_t x259 = INT16_MIN;
	uint64_t x260 = 1151345062067763023LLU;
	volatile uint64_t t62 = 10417365252536LLU;

	t62 = (((x257<=x258)*x259)+x260);

	if (t62 != 1151345062067730255LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x263 = UINT32_MAX;
	volatile uint16_t x264 = 410U;
	uint32_t t63 = 27056U;

	t63 = (((x261<=x262)*x263)+x264);

	if (t63 != 409U) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x265 = -1LL;
	int16_t x266 = INT16_MIN;
	uint64_t x267 = UINT64_MAX;
	static uint64_t x268 = UINT64_MAX;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (((x265<=x266)*x267)+x268);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x270 = INT16_MIN;
	uint8_t x271 = 6U;
	volatile int32_t t65 = 1205;

	t65 = (((x269<=x270)*x271)+x272);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x274 = -24;
	static int32_t x275 = -1;
	volatile int8_t x276 = INT8_MIN;
	int32_t t66 = -3;

	t66 = (((x273<=x274)*x275)+x276);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x277 = INT32_MIN;
	volatile int32_t x278 = INT32_MAX;
	volatile uint64_t x279 = UINT64_MAX;
	int64_t x280 = -1LL;
	uint64_t t67 = 694867LLU;

	t67 = (((x277<=x278)*x279)+x280);

	if (t67 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x281 = INT8_MAX;
	volatile int64_t x282 = INT64_MIN;
	int64_t x284 = INT64_MAX;

	t68 = (((x281<=x282)*x283)+x284);

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MIN;
	uint32_t x286 = UINT32_MAX;
	volatile uint32_t x287 = 961974006U;
	static int16_t x288 = 26;
	static volatile uint32_t t69 = 1U;

	t69 = (((x285<=x286)*x287)+x288);

	if (t69 != 961974032U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x289 = 15U;
	volatile uint16_t x290 = 6U;
	static uint16_t x291 = 284U;
	volatile int16_t x292 = INT16_MAX;
	int32_t t70 = 747958;

	t70 = (((x289<=x290)*x291)+x292);

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x293 = 1460;
	int16_t x294 = 0;
	int32_t x296 = -1;

	t71 = (((x293<=x294)*x295)+x296);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = -32793;
	int64_t x298 = -24LL;
	volatile int8_t x299 = INT8_MIN;
	static int8_t x300 = INT8_MIN;
	int32_t t72 = 4338881;

	t72 = (((x297<=x298)*x299)+x300);

	if (t72 != -256) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = -1;
	int16_t x304 = INT16_MIN;
	static volatile int32_t t73 = 19;

	t73 = (((x301<=x302)*x303)+x304);

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x306 = INT32_MAX;
	int64_t x307 = INT64_MIN;
	int16_t x308 = 1;
	volatile int64_t t74 = 187442914816LL;

	t74 = (((x305<=x306)*x307)+x308);

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = INT16_MIN;
	int64_t x310 = -1LL;
	static int64_t x311 = 193709282999838LL;
	int16_t x312 = 950;
	static volatile int64_t t75 = -25254966LL;

	t75 = (((x309<=x310)*x311)+x312);

	if (t75 != 193709283000788LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x313 = 83496U;
	int32_t x314 = INT32_MAX;
	int64_t x316 = -1LL;

	t76 = (((x313<=x314)*x315)+x316);

	if (t76 != -2147483649LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x317 = UINT64_MAX;
	uint16_t x318 = 11111U;
	volatile uint32_t x320 = UINT32_MAX;
	volatile uint32_t t77 = UINT32_MAX;

	t77 = (((x317<=x318)*x319)+x320);

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = -23;
	uint16_t x323 = UINT16_MAX;
	uint64_t x324 = 3517093382668LLU;
	volatile uint64_t t78 = 1LLU;

	t78 = (((x321<=x322)*x323)+x324);

	if (t78 != 3517093382668LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = 126;
	int16_t x326 = -2;
	volatile int32_t x327 = -42;
	int32_t x328 = -1496644;
	int32_t t79 = 3271;

	t79 = (((x325<=x326)*x327)+x328);

	if (t79 != -1496644) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x330 = 2876;
	int64_t x331 = INT64_MAX;
	static int8_t x332 = INT8_MAX;
	volatile int64_t t80 = -44211883312LL;

	t80 = (((x329<=x330)*x331)+x332);

	if (t80 != 127LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = INT8_MIN;
	static volatile int32_t x334 = -205843;
	static volatile int32_t x335 = -86;
	int64_t x336 = -1LL;
	int64_t t81 = -11905506919565667LL;

	t81 = (((x333<=x334)*x335)+x336);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = INT32_MIN;
	int16_t x338 = -1;
	volatile uint64_t t82 = 140LLU;

	t82 = (((x337<=x338)*x339)+x340);

	if (t82 != 328919191375064677LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x341 = -1;
	uint8_t x342 = 5U;
	uint64_t x343 = UINT64_MAX;
	uint16_t x344 = 102U;
	volatile uint64_t t83 = 10830LLU;

	t83 = (((x341<=x342)*x343)+x344);

	if (t83 != 101LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x345 = 1112U;
	uint8_t x346 = 11U;
	uint64_t x347 = 3987LLU;
	uint64_t x348 = 782LLU;
	volatile uint64_t t84 = 337096096416LLU;

	t84 = (((x345<=x346)*x347)+x348);

	if (t84 != 782LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x349 = INT16_MIN;
	int64_t x351 = 97233LL;
	int32_t x352 = INT32_MIN;
	static int64_t t85 = 576678528LL;

	t85 = (((x349<=x350)*x351)+x352);

	if (t85 != -2147386415LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x353 = INT64_MIN;
	uint32_t x355 = UINT32_MAX;
	uint16_t x356 = 7719U;

	t86 = (((x353<=x354)*x355)+x356);

	if (t86 != 7718U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x358 = -61584462;
	int16_t x359 = -9;
	uint16_t x360 = 7371U;
	volatile int32_t t87 = 1;

	t87 = (((x357<=x358)*x359)+x360);

	if (t87 != 7371) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = -1107495;
	uint32_t x362 = UINT32_MAX;
	uint16_t x363 = 0U;
	int64_t x364 = -1LL;
	volatile int64_t t88 = 20828LL;

	t88 = (((x361<=x362)*x363)+x364);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = 8;
	uint32_t x366 = UINT32_MAX;
	uint32_t x367 = 712567U;
	volatile int8_t x368 = INT8_MAX;
	volatile uint32_t t89 = 30U;

	t89 = (((x365<=x366)*x367)+x368);

	if (t89 != 712694U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x369 = -1;
	int8_t x371 = -46;
	int32_t x372 = 414315142;
	volatile int32_t t90 = -135;

	t90 = (((x369<=x370)*x371)+x372);

	if (t90 != 414315096) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x373 = -1LL;
	uint32_t x375 = 10679U;
	static int32_t x376 = INT32_MIN;

	t91 = (((x373<=x374)*x375)+x376);

	if (t91 != 2147494327U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x377 = 0;
	volatile int32_t x378 = -15;
	int64_t x379 = INT64_MIN;
	static int8_t x380 = -1;
	volatile int64_t t92 = -4682299099735LL;

	t92 = (((x377<=x378)*x379)+x380);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x381 = 27U;
	uint16_t x382 = 2586U;
	volatile uint8_t x383 = 17U;
	static volatile int32_t x384 = -270117316;
	int32_t t93 = 7281;

	t93 = (((x381<=x382)*x383)+x384);

	if (t93 != -270117299) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x385 = INT32_MAX;
	volatile int32_t x386 = -1;
	int32_t x388 = -328;

	t94 = (((x385<=x386)*x387)+x388);

	if (t94 != -328) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x389 = 2U;
	int32_t x390 = -43;
	uint64_t x392 = 2147355161887586LLU;
	uint64_t t95 = 126LLU;

	t95 = (((x389<=x390)*x391)+x392);

	if (t95 != 2147355161887586LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x393 = 1946107LLU;
	volatile int8_t x395 = INT8_MIN;
	volatile int32_t t96 = -16420;

	t96 = (((x393<=x394)*x395)+x396);

	if (t96 != -34) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x397 = INT64_MIN;
	static int64_t x399 = -1LL;
	int64_t t97 = 42LL;

	t97 = (((x397<=x398)*x399)+x400);

	if (t97 != 126LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x405 = INT16_MIN;
	uint32_t x407 = 89129U;
	static int32_t x408 = 27;

	t98 = (((x405<=x406)*x407)+x408);

	if (t98 != 89156U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x409 = UINT16_MAX;
	static volatile int16_t x410 = INT16_MIN;
	volatile uint64_t x411 = 630900394815715LLU;
	uint8_t x412 = UINT8_MAX;

	t99 = (((x409<=x410)*x411)+x412);

	if (t99 != 255LLU) { NG(); } else { ; }
	
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

