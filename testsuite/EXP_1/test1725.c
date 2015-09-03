#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 286U;
static volatile int32_t x9 = -1;
volatile uint64_t x21 = 1267449764484452LLU;
uint8_t x28 = 89U;
uint8_t x29 = 38U;
uint16_t x38 = UINT16_MAX;
int64_t x42 = INT64_MIN;
static int8_t x45 = INT8_MIN;
int32_t x46 = INT32_MIN;
int8_t x48 = INT8_MIN;
volatile int16_t x51 = INT16_MIN;
int8_t x57 = INT8_MIN;
uint16_t x65 = 18U;
volatile int64_t x68 = -1LL;
static int16_t x72 = -1;
int32_t t16 = -103980713;
int16_t x75 = -1;
static uint16_t x77 = 95U;
int8_t x78 = 0;
int32_t x80 = -376846722;
uint32_t x87 = 702563U;
uint16_t x93 = 2U;
volatile uint16_t x95 = 48U;
static volatile int32_t t21 = -194381;
static int8_t x105 = INT8_MIN;
volatile uint8_t x107 = 57U;
int32_t x108 = 1;
int8_t x116 = 47;
int32_t t24 = 1995;
int64_t x118 = INT64_MIN;
volatile int32_t t25 = 0;
int8_t x124 = INT8_MAX;
int32_t x125 = -7423341;
int8_t x128 = 30;
int32_t x134 = 98;
volatile int32_t t30 = -4978;
static volatile int32_t t31 = -182092;
static int32_t x145 = INT32_MAX;
int32_t x147 = INT32_MAX;
uint8_t x152 = 2U;
int64_t x156 = INT64_MIN;
static int32_t x161 = INT32_MIN;
int32_t t35 = 1453;
uint16_t x165 = UINT16_MAX;
static volatile int32_t t36 = -1288;
int32_t x175 = INT32_MIN;
int32_t t37 = 4;
uint8_t x182 = UINT8_MAX;
static int64_t x184 = -1684934062497728735LL;
int32_t x187 = -68479782;
uint32_t x189 = UINT32_MAX;
volatile uint8_t x194 = 20U;
static int8_t x195 = INT8_MIN;
int32_t x200 = -27;
int8_t x203 = INT8_MAX;
int32_t t44 = 27662153;
int64_t x205 = -1LL;
int16_t x215 = INT16_MIN;
volatile int32_t t46 = 2970162;
uint8_t x222 = UINT8_MAX;
static int8_t x223 = 6;
int16_t x224 = INT16_MIN;
static uint8_t x225 = UINT8_MAX;
int32_t x230 = INT32_MAX;
uint16_t x234 = UINT16_MAX;
int64_t x235 = 11851997060LL;
volatile uint16_t x236 = 66U;
volatile int32_t t51 = -80;
static uint16_t x251 = 828U;
volatile int32_t t54 = -23;
static volatile int16_t x256 = -1;
volatile int32_t t55 = -14738249;
static int16_t x257 = INT16_MIN;
volatile int32_t t56 = 3739;
int8_t x265 = INT8_MAX;
static volatile int16_t x268 = 1;
uint16_t x271 = UINT16_MAX;
uint16_t x274 = 49U;
int64_t x282 = -60980933862926881LL;
volatile int32_t t61 = 22396;
static int32_t x294 = -1;
static int32_t t62 = -88050110;
volatile uint32_t x297 = 1955977U;
uint32_t x301 = 23U;
uint64_t x305 = UINT64_MAX;
int64_t x306 = INT64_MAX;
static uint32_t x309 = UINT32_MAX;
uint16_t x311 = 3U;
uint16_t x312 = 30U;
int16_t x315 = 89;
static int32_t t67 = -233;
volatile uint32_t x322 = 752U;
uint64_t x323 = 7518853953LLU;
static int64_t x324 = 11408212856271806LL;
static uint8_t x330 = 1U;
volatile int16_t x337 = -7;
int64_t x362 = INT64_MIN;
int16_t x364 = INT16_MIN;
volatile int16_t x369 = INT16_MIN;
int32_t t81 = -47;
uint32_t x379 = 182819714U;
volatile uint16_t x386 = 8U;
static volatile uint8_t x391 = UINT8_MAX;
volatile int64_t x396 = -7939162142643650LL;
uint8_t x400 = UINT8_MAX;
int64_t x410 = INT64_MIN;
int32_t t89 = -463623;
int16_t x417 = INT16_MIN;
int16_t x427 = -1;
static int16_t x430 = INT16_MIN;
volatile int32_t t95 = -3697;
static int64_t x443 = 73852LL;
int8_t x447 = -11;
static int8_t x449 = INT8_MAX;
uint32_t x450 = 242881U;
volatile int32_t t99 = 1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = 1014;
	int32_t x4 = -1;
	volatile int32_t t0 = 675;

	t0 = (((x1&x2)*x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = 339;
	int64_t x6 = INT64_MIN;
	static int8_t x7 = -1;
	int16_t x8 = -45;
	int32_t t1 = -3253114;

	t1 = (((x5&x6)*x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 14U;
	int8_t x11 = -1;
	static uint32_t x12 = 27114821U;
	int32_t t2 = -10;

	t2 = (((x9&x10)*x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int16_t x14 = -75;
	uint8_t x15 = 29U;
	uint8_t x16 = UINT8_MAX;
	static volatile int32_t t3 = 0;

	t3 = (((x13&x14)*x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = -1;
	int64_t x23 = INT64_MIN;
	int16_t x24 = -235;
	int32_t t4 = -25392;

	t4 = (((x21&x22)*x23)<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = -51;
	uint64_t x26 = 845359LLU;
	static int32_t x27 = INT32_MIN;
	volatile int32_t t5 = 14;

	t5 = (((x25&x26)*x27)<x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x30 = 27U;
	static int8_t x31 = 5;
	static int16_t x32 = INT16_MIN;
	int32_t t6 = -412;

	t6 = (((x29&x30)*x31)<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = 636503U;
	volatile int64_t x34 = INT64_MAX;
	int8_t x35 = -52;
	int16_t x36 = 33;
	static volatile int32_t t7 = 3246471;

	t7 = (((x33&x34)*x35)<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -1;
	int16_t x39 = -1;
	volatile int8_t x40 = INT8_MAX;
	static int32_t t8 = -3926228;

	t8 = (((x37&x38)*x39)<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 3775LLU;
	int64_t x43 = INT64_MIN;
	volatile uint64_t x44 = 3LLU;
	static int32_t t9 = -1034569;

	t9 = (((x41&x42)*x43)<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x47 = 1;
	volatile int32_t t10 = -1927;

	t10 = (((x45&x46)*x47)<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = -1LL;
	static int32_t x50 = INT32_MIN;
	volatile int16_t x52 = INT16_MAX;
	static volatile int32_t t11 = -3602;

	t11 = (((x49&x50)*x51)<x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 1U;
	int16_t x54 = INT16_MIN;
	int16_t x55 = 1;
	int32_t x56 = INT32_MIN;
	volatile int32_t t12 = -66;

	t12 = (((x53&x54)*x55)<x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x58 = UINT64_MAX;
	uint8_t x59 = UINT8_MAX;
	uint64_t x60 = 3012382767LLU;
	static volatile int32_t t13 = 235105734;

	t13 = (((x57&x58)*x59)<x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = 37;
	volatile int8_t x62 = INT8_MIN;
	int32_t x63 = 24795;
	static int8_t x64 = INT8_MAX;
	int32_t t14 = 16690637;

	t14 = (((x61&x62)*x63)<x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x66 = 1U;
	int32_t x67 = INT32_MIN;
	volatile int32_t t15 = 4;

	t15 = (((x65&x66)*x67)<x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = 52499;
	static int8_t x70 = INT8_MIN;
	volatile uint64_t x71 = 668536013LLU;

	t16 = (((x69&x70)*x71)<x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x73 = INT8_MAX;
	int64_t x74 = 7458950593LL;
	static volatile int32_t x76 = -1;
	int32_t t17 = 5874217;

	t17 = (((x73&x74)*x75)<x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x79 = INT8_MIN;
	int32_t t18 = 7;

	t18 = (((x77&x78)*x79)<x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = -1;
	volatile int8_t x86 = INT8_MIN;
	uint16_t x88 = 52U;
	volatile int32_t t19 = -13;

	t19 = (((x85&x86)*x87)<x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x94 = 101U;
	int32_t x96 = INT32_MIN;
	volatile int32_t t20 = -239;

	t20 = (((x93&x94)*x95)<x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = 27U;
	static volatile int8_t x98 = INT8_MAX;
	uint16_t x99 = 248U;
	int16_t x100 = -1;

	t21 = (((x97&x98)*x99)<x100);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = 920197105;
	int32_t x102 = INT32_MIN;
	int64_t x103 = -2LL;
	int32_t x104 = 0;
	int32_t t22 = -238675747;

	t22 = (((x101&x102)*x103)<x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x106 = INT16_MIN;
	volatile int32_t t23 = -31074875;

	t23 = (((x105&x106)*x107)<x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x113 = 9U;
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = INT8_MAX;

	t24 = (((x113&x114)*x115)<x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = 1U;
	static uint8_t x119 = UINT8_MAX;
	static uint16_t x120 = UINT16_MAX;

	t25 = (((x117&x118)*x119)<x120);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x121 = 525208795LLU;
	uint32_t x122 = 73U;
	uint64_t x123 = UINT64_MAX;
	volatile int32_t t26 = 51;

	t26 = (((x121&x122)*x123)<x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x126 = -20;
	static uint64_t x127 = UINT64_MAX;
	int32_t t27 = -1889789;

	t27 = (((x125&x126)*x127)<x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	uint64_t x130 = UINT64_MAX;
	uint32_t x131 = 56027225U;
	uint64_t x132 = 6630708LLU;
	static int32_t t28 = -4584171;

	t28 = (((x129&x130)*x131)<x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x133 = 872351417U;
	int8_t x135 = -1;
	uint32_t x136 = UINT32_MAX;
	int32_t t29 = 195498951;

	t29 = (((x133&x134)*x135)<x136);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x137 = INT16_MAX;
	int32_t x138 = -1;
	int16_t x139 = INT16_MAX;
	uint16_t x140 = 2594U;

	t30 = (((x137&x138)*x139)<x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x141 = 5U;
	int64_t x142 = 67258889LL;
	int16_t x143 = -81;
	volatile uint64_t x144 = UINT64_MAX;

	t31 = (((x141&x142)*x143)<x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x146 = 0U;
	uint32_t x148 = 56915022U;
	volatile int32_t t32 = 744042;

	t32 = (((x145&x146)*x147)<x148);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x149 = 17478728383802LLU;
	volatile int8_t x150 = INT8_MIN;
	uint8_t x151 = 8U;
	volatile int32_t t33 = 987249;

	t33 = (((x149&x150)*x151)<x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MIN;
	volatile uint16_t x154 = UINT16_MAX;
	static volatile int32_t x155 = INT32_MIN;
	int32_t t34 = -7596846;

	t34 = (((x153&x154)*x155)<x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x162 = -1;
	uint64_t x163 = 597319839LLU;
	int32_t x164 = INT32_MIN;

	t35 = (((x161&x162)*x163)<x164);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x166 = -191688299099LL;
	int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MIN;

	t36 = (((x165&x166)*x167)<x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x173 = INT16_MAX;
	int16_t x174 = INT16_MIN;
	uint64_t x176 = 14304812LLU;

	t37 = (((x173&x174)*x175)<x176);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x177 = 5U;
	volatile uint32_t x178 = 31377490U;
	uint64_t x179 = UINT64_MAX;
	static volatile int8_t x180 = 3;
	int32_t t38 = 6357949;

	t38 = (((x177&x178)*x179)<x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x181 = 1;
	int16_t x183 = -1;
	int32_t t39 = -149952;

	t39 = (((x181&x182)*x183)<x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x185 = UINT8_MAX;
	int64_t x186 = 32LL;
	static int16_t x188 = INT16_MIN;
	volatile int32_t t40 = 58;

	t40 = (((x185&x186)*x187)<x188);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x190 = INT32_MIN;
	int64_t x191 = 36211LL;
	volatile int8_t x192 = INT8_MIN;
	static int32_t t41 = -240506;

	t41 = (((x189&x190)*x191)<x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = -1;
	int8_t x196 = 3;
	int32_t t42 = 256830915;

	t42 = (((x193&x194)*x195)<x196);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x197 = 2U;
	uint32_t x198 = 1U;
	uint64_t x199 = UINT64_MAX;
	static volatile int32_t t43 = -28193;

	t43 = (((x197&x198)*x199)<x200);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = INT8_MIN;
	volatile uint8_t x202 = UINT8_MAX;
	int32_t x204 = -11100699;

	t44 = (((x201&x202)*x203)<x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x206 = 2652U;
	int32_t x207 = 202;
	int8_t x208 = INT8_MIN;
	int32_t t45 = -1;

	t45 = (((x205&x206)*x207)<x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x213 = 1916U;
	static int8_t x214 = INT8_MIN;
	volatile int8_t x216 = INT8_MIN;

	t46 = (((x213&x214)*x215)<x216);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x217 = 3895U;
	int64_t x218 = INT64_MIN;
	uint8_t x219 = 4U;
	int64_t x220 = INT64_MIN;
	static volatile int32_t t47 = -141204033;

	t47 = (((x217&x218)*x219)<x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x221 = 29385875U;
	volatile int32_t t48 = 2784170;

	t48 = (((x221&x222)*x223)<x224);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x226 = UINT64_MAX;
	uint8_t x227 = 1U;
	uint8_t x228 = UINT8_MAX;
	int32_t t49 = 1;

	t49 = (((x225&x226)*x227)<x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = 0;
	static volatile int8_t x231 = -1;
	volatile int16_t x232 = INT16_MAX;
	static volatile int32_t t50 = 66978068;

	t50 = (((x229&x230)*x231)<x232);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = -119076LL;

	t51 = (((x233&x234)*x235)<x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = -1;
	volatile uint16_t x242 = UINT16_MAX;
	static uint64_t x243 = 240670583692459LLU;
	int8_t x244 = -1;
	volatile int32_t t52 = 697292;

	t52 = (((x241&x242)*x243)<x244);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x245 = UINT64_MAX;
	int32_t x246 = INT32_MIN;
	volatile int16_t x247 = -1;
	static volatile int8_t x248 = 40;
	volatile int32_t t53 = 44;

	t53 = (((x245&x246)*x247)<x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = INT8_MIN;
	static int8_t x250 = -1;
	int64_t x252 = 1660101506LL;

	t54 = (((x249&x250)*x251)<x252);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x253 = UINT64_MAX;
	int8_t x254 = -1;
	int16_t x255 = INT16_MIN;

	t55 = (((x253&x254)*x255)<x256);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x258 = UINT64_MAX;
	uint32_t x259 = 146757U;
	int16_t x260 = INT16_MIN;

	t56 = (((x257&x258)*x259)<x260);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x266 = 1;
	uint16_t x267 = UINT16_MAX;
	static int32_t t57 = 25;

	t57 = (((x265&x266)*x267)<x268);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x269 = -1;
	uint8_t x270 = 0U;
	static uint16_t x272 = 4029U;
	int32_t t58 = -119;

	t58 = (((x269&x270)*x271)<x272);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x273 = 223U;
	volatile uint16_t x275 = UINT16_MAX;
	uint16_t x276 = UINT16_MAX;
	int32_t t59 = 14248;

	t59 = (((x273&x274)*x275)<x276);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x281 = 32U;
	static volatile int16_t x283 = -183;
	int8_t x284 = -1;
	volatile int32_t t60 = 50201;

	t60 = (((x281&x282)*x283)<x284);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = 7;
	int16_t x286 = -41;
	volatile uint64_t x287 = 24LLU;
	uint64_t x288 = 20150LLU;

	t61 = (((x285&x286)*x287)<x288);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x293 = INT32_MAX;
	int32_t x295 = -1;
	uint64_t x296 = 1082450093605637136LLU;

	t62 = (((x293&x294)*x295)<x296);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x298 = INT16_MIN;
	volatile int32_t x299 = INT32_MIN;
	static int16_t x300 = -1;
	static int32_t t63 = -2;

	t63 = (((x297&x298)*x299)<x300);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x302 = 7471852534LLU;
	int32_t x303 = -54472336;
	int16_t x304 = INT16_MIN;
	static volatile int32_t t64 = -2588201;

	t64 = (((x301&x302)*x303)<x304);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x307 = -1;
	static int8_t x308 = -1;
	int32_t t65 = -125398624;

	t65 = (((x305&x306)*x307)<x308);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x310 = -1;
	static volatile int32_t t66 = 36;

	t66 = (((x309&x310)*x311)<x312);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x313 = -19900;
	uint32_t x314 = 59486U;
	static int8_t x316 = 1;

	t67 = (((x313&x314)*x315)<x316);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x317 = 100U;
	static int16_t x318 = INT16_MIN;
	uint64_t x319 = 1316122863852866717LLU;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t68 = -105471659;

	t68 = (((x317&x318)*x319)<x320);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x321 = INT16_MIN;
	static int32_t t69 = 636;

	t69 = (((x321&x322)*x323)<x324);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = INT16_MIN;
	uint16_t x326 = 2U;
	uint64_t x327 = 1LLU;
	int32_t x328 = -57864;
	volatile int32_t t70 = -8;

	t70 = (((x325&x326)*x327)<x328);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x329 = 63U;
	int16_t x331 = -1;
	int32_t x332 = -1;
	volatile int32_t t71 = 1;

	t71 = (((x329&x330)*x331)<x332);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x333 = 8;
	int16_t x334 = -1;
	int8_t x335 = 7;
	int16_t x336 = INT16_MIN;
	static int32_t t72 = -15;

	t72 = (((x333&x334)*x335)<x336);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x338 = INT16_MAX;
	int64_t x339 = -45591648LL;
	uint8_t x340 = UINT8_MAX;
	static volatile int32_t t73 = 307928497;

	t73 = (((x337&x338)*x339)<x340);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x341 = UINT8_MAX;
	volatile uint8_t x342 = 3U;
	uint16_t x343 = UINT16_MAX;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t74 = -34939136;

	t74 = (((x341&x342)*x343)<x344);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x345 = 2U;
	volatile int64_t x346 = 475413114692LL;
	volatile int32_t x347 = INT32_MIN;
	uint32_t x348 = 11499U;
	int32_t t75 = 7543;

	t75 = (((x345&x346)*x347)<x348);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = INT16_MAX;
	uint32_t x354 = 4648631U;
	int16_t x355 = INT16_MIN;
	uint64_t x356 = UINT64_MAX;
	int32_t t76 = 230;

	t76 = (((x353&x354)*x355)<x356);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x357 = INT8_MAX;
	int32_t x358 = -228873778;
	int64_t x359 = -1LL;
	int64_t x360 = INT64_MAX;
	int32_t t77 = 0;

	t77 = (((x357&x358)*x359)<x360);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x361 = 11LLU;
	uint64_t x363 = 114387683742519266LLU;
	int32_t t78 = 113328;

	t78 = (((x361&x362)*x363)<x364);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x365 = 24200391451LLU;
	static uint32_t x366 = 90094U;
	int32_t x367 = INT32_MIN;
	uint8_t x368 = 7U;
	int32_t t79 = -662;

	t79 = (((x365&x366)*x367)<x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x370 = 463U;
	int64_t x371 = INT64_MIN;
	int16_t x372 = -111;
	int32_t t80 = 89495348;

	t80 = (((x369&x370)*x371)<x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = INT8_MIN;
	int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MIN;
	static int32_t x376 = 1;

	t81 = (((x373&x374)*x375)<x376);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x377 = 11832;
	int8_t x378 = INT8_MAX;
	static uint16_t x380 = 29288U;
	volatile int32_t t82 = 177;

	t82 = (((x377&x378)*x379)<x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = 46;
	volatile uint64_t x382 = 3294337745LLU;
	uint64_t x383 = 2LLU;
	volatile uint16_t x384 = UINT16_MAX;
	volatile int32_t t83 = 185626402;

	t83 = (((x381&x382)*x383)<x384);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x385 = 2466708U;
	int32_t x387 = INT32_MIN;
	volatile int16_t x388 = -460;
	int32_t t84 = 63038776;

	t84 = (((x385&x386)*x387)<x388);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x389 = 15;
	volatile int32_t x390 = -1;
	uint32_t x392 = UINT32_MAX;
	int32_t t85 = 23753;

	t85 = (((x389&x390)*x391)<x392);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x393 = 1091143047036813168LLU;
	uint64_t x394 = UINT64_MAX;
	int8_t x395 = 0;
	volatile int32_t t86 = 28;

	t86 = (((x393&x394)*x395)<x396);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x397 = -1;
	static int64_t x398 = INT64_MAX;
	int64_t x399 = -1LL;
	volatile int32_t t87 = 180;

	t87 = (((x397&x398)*x399)<x400);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x401 = 3U;
	int32_t x402 = 4;
	uint16_t x403 = UINT16_MAX;
	uint64_t x404 = 9078123604338559073LLU;
	int32_t t88 = 13760;

	t88 = (((x401&x402)*x403)<x404);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x409 = UINT64_MAX;
	volatile int8_t x411 = -1;
	int64_t x412 = INT64_MIN;

	t89 = (((x409&x410)*x411)<x412);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x413 = UINT32_MAX;
	int16_t x414 = -1;
	volatile int64_t x415 = -1492052LL;
	int32_t x416 = -3221333;
	static volatile int32_t t90 = 1794;

	t90 = (((x413&x414)*x415)<x416);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x418 = -45244917;
	int64_t x419 = -1LL;
	static uint8_t x420 = 0U;
	volatile int32_t t91 = 0;

	t91 = (((x417&x418)*x419)<x420);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x421 = UINT16_MAX;
	int8_t x422 = -1;
	static volatile uint64_t x423 = UINT64_MAX;
	int16_t x424 = INT16_MIN;
	int32_t t92 = 15240969;

	t92 = (((x421&x422)*x423)<x424);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = -48;
	volatile int8_t x426 = INT8_MAX;
	uint32_t x428 = 680052U;
	volatile int32_t t93 = -3249732;

	t93 = (((x425&x426)*x427)<x428);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = 60;
	volatile int16_t x431 = -1;
	uint32_t x432 = 2602709U;
	int32_t t94 = -23;

	t94 = (((x429&x430)*x431)<x432);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x437 = UINT32_MAX;
	static int64_t x438 = INT64_MIN;
	int16_t x439 = INT16_MAX;
	int32_t x440 = INT32_MIN;

	t95 = (((x437&x438)*x439)<x440);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x441 = -1LL;
	int8_t x442 = INT8_MIN;
	int64_t x444 = -10LL;
	volatile int32_t t96 = -48851;

	t96 = (((x441&x442)*x443)<x444);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x445 = INT64_MIN;
	uint32_t x446 = 762143U;
	volatile uint64_t x448 = UINT64_MAX;
	int32_t t97 = -15119;

	t97 = (((x445&x446)*x447)<x448);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x451 = 0U;
	volatile int8_t x452 = INT8_MIN;
	volatile int32_t t98 = -1521;

	t98 = (((x449&x450)*x451)<x452);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x453 = 1644;
	volatile int8_t x454 = -1;
	uint32_t x455 = 21U;
	int32_t x456 = INT32_MIN;

	t99 = (((x453&x454)*x455)<x456);

	if (t99 != 1) { NG(); } else { ; }
	
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

