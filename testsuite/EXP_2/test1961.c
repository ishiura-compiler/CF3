#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1842496;
uint16_t x3 = 20U;
int64_t x10 = -1LL;
uint64_t x15 = 56552LLU;
uint32_t x23 = UINT32_MAX;
volatile int64_t t5 = 8582863576LL;
uint16_t x25 = UINT16_MAX;
volatile int32_t t6 = -1;
static uint64_t x34 = UINT64_MAX;
int8_t x36 = INT8_MIN;
int32_t x37 = INT32_MIN;
volatile int16_t x39 = INT16_MIN;
int8_t x40 = -1;
static volatile uint16_t x46 = 18U;
int32_t t11 = 29;
static uint16_t x53 = 1U;
volatile int8_t x64 = INT8_MIN;
static int32_t t15 = 42647;
int64_t x70 = INT64_MAX;
int64_t x74 = -6LL;
volatile int8_t x81 = 0;
int32_t x86 = INT32_MAX;
volatile int8_t x92 = INT8_MIN;
static int32_t t25 = -2142542;
static volatile int32_t t26 = -274470942;
int32_t x112 = INT32_MAX;
int64_t x113 = 4682135787946LL;
uint16_t x116 = 26U;
static uint8_t x123 = 81U;
int64_t x133 = 61LL;
static int32_t x136 = 2888;
int8_t x142 = -1;
uint32_t x143 = 67402856U;
volatile int64_t x152 = INT64_MIN;
int64_t t37 = -917152425439212LL;
volatile uint64_t t38 = 223623799LLU;
static int8_t x157 = 0;
volatile uint64_t t39 = 1035LLU;
static int64_t x162 = -1LL;
static int8_t x164 = 0;
volatile int32_t x170 = -7153;
int32_t x174 = -26316;
volatile uint32_t x178 = UINT32_MAX;
int8_t x184 = INT8_MIN;
static int64_t x190 = -6355821LL;
static volatile uint32_t x198 = 1U;
static int64_t x205 = -1006LL;
int16_t x206 = 1;
volatile int8_t x210 = -1;
int64_t t54 = 151862LL;
static int32_t x225 = -13735;
int64_t t56 = 199140959500LL;
uint16_t x231 = 5037U;
volatile uint64_t x233 = 26LLU;
static volatile int16_t x236 = -1;
uint16_t x240 = 956U;
int32_t t59 = 350;
int64_t x241 = -3845496905029LL;
static volatile int32_t t60 = -41;
volatile int32_t x247 = INT32_MAX;
volatile int32_t t62 = 678;
volatile uint16_t x257 = 1U;
int32_t x260 = -1;
int32_t t64 = -112;
volatile int32_t x261 = 11;
int32_t x266 = -5;
volatile uint8_t x267 = 2U;
static int8_t x268 = INT8_MIN;
int16_t x271 = INT16_MIN;
uint16_t x273 = 4U;
int64_t x282 = 21015290450766LL;
int64_t x292 = INT64_MAX;
static int64_t t72 = 48563LL;
int8_t x298 = INT8_MIN;
volatile int32_t t74 = -39;
uint8_t x304 = UINT8_MAX;
volatile int32_t t78 = 75574;
int8_t x321 = 0;
int32_t x335 = INT32_MIN;
volatile int32_t x338 = INT32_MAX;
static int32_t x349 = INT32_MIN;
static volatile int8_t x362 = 0;
volatile uint64_t x364 = 1LLU;
static int8_t x366 = -1;
static int16_t x368 = -2;
int16_t x370 = INT16_MIN;
int16_t x378 = 336;
volatile uint64_t t98 = 89791591LLU;
int32_t x397 = INT32_MIN;
int16_t x399 = 1;


void f0(void) {
	int16_t x2 = INT16_MIN;
	static int64_t x4 = -966LL;
	volatile int64_t t0 = -658663LL;

	t0 = ((x1==(x2|x3))&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 17;
	volatile uint32_t x6 = 4425004U;
	int64_t x7 = INT64_MAX;
	int64_t x8 = -1LL;
	volatile int64_t t1 = -3LL;

	t1 = ((x5==(x6|x7))&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = 0;
	volatile int16_t x11 = -1;
	int8_t x12 = -17;
	volatile int32_t t2 = 2;

	t2 = ((x9==(x10|x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MAX;
	int64_t x16 = INT64_MIN;
	int64_t t3 = -95260360515475LL;

	t3 = ((x13==(x14|x15))&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 0U;
	int32_t x18 = -1;
	static int16_t x19 = -319;
	volatile int32_t x20 = -57907830;
	volatile int32_t t4 = 27212;

	t4 = ((x17==(x18|x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MAX;
	uint32_t x22 = 559048U;
	volatile int64_t x24 = INT64_MAX;

	t5 = ((x21==(x22|x23))&x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = -6;
	uint16_t x27 = 1394U;
	uint8_t x28 = UINT8_MAX;

	t6 = ((x25==(x26|x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = UINT8_MAX;
	int32_t x30 = INT32_MAX;
	static volatile int16_t x31 = INT16_MAX;
	int16_t x32 = -1;
	static volatile int32_t t7 = 3324003;

	t7 = ((x29==(x30|x31))&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -6;
	static int16_t x35 = 5218;
	static volatile int32_t t8 = 1;

	t8 = ((x33==(x34|x35))&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	volatile int32_t t9 = 0;

	t9 = ((x37==(x38|x39))&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = UINT8_MAX;
	int64_t x42 = 17435487118LL;
	uint32_t x43 = 279U;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = -14LL;

	t10 = ((x41==(x42|x43))&x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	volatile uint32_t x47 = UINT32_MAX;
	int32_t x48 = -1;

	t11 = ((x45==(x46|x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 6U;
	volatile int16_t x50 = 337;
	int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MIN;
	int32_t t12 = 9173;

	t12 = ((x49==(x50|x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	uint16_t x55 = 16332U;
	volatile uint32_t x56 = 1163U;
	volatile uint32_t t13 = 7956U;

	t13 = ((x53==(x54|x55))&x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	int8_t x58 = -12;
	uint16_t x59 = UINT16_MAX;
	volatile uint16_t x60 = 18U;
	volatile int32_t t14 = -929;

	t14 = ((x57==(x58|x59))&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	static int32_t x62 = -7010889;
	uint8_t x63 = 0U;

	t15 = ((x61==(x62|x63))&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int8_t x66 = INT8_MIN;
	int8_t x67 = 1;
	int16_t x68 = INT16_MIN;
	int32_t t16 = 2;

	t16 = ((x65==(x66|x67))&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MIN;
	int64_t x71 = -583975048510211944LL;
	int32_t x72 = -19;
	volatile int32_t t17 = -1;

	t17 = ((x69==(x70|x71))&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = 104562138U;
	int64_t x75 = 480364164892693496LL;
	uint64_t x76 = 4LLU;
	volatile uint64_t t18 = 114617345LLU;

	t18 = ((x73==(x74|x75))&x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 0;
	int64_t x78 = -9275508937LL;
	uint16_t x79 = 137U;
	static volatile uint8_t x80 = 4U;
	volatile int32_t t19 = -2;

	t19 = ((x77==(x78|x79))&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = INT64_MIN;
	static int32_t x83 = 11;
	volatile uint64_t x84 = 1068133410091231603LLU;
	volatile uint64_t t20 = 69LLU;

	t20 = ((x81==(x82|x83))&x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	uint16_t x87 = 115U;
	uint8_t x88 = 89U;
	static int32_t t21 = -798382;

	t21 = ((x85==(x86|x87))&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 1;
	static uint16_t x90 = 0U;
	int32_t x91 = -13203;
	volatile int32_t t22 = -24667;

	t22 = ((x89==(x90|x91))&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	int16_t x94 = INT16_MIN;
	int32_t x95 = INT32_MIN;
	volatile int16_t x96 = 272;
	volatile int32_t t23 = 1;

	t23 = ((x93==(x94|x95))&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 72U;
	volatile int16_t x98 = -1;
	volatile int8_t x99 = 1;
	int16_t x100 = -1016;
	volatile int32_t t24 = -45;

	t24 = ((x97==(x98|x99))&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	volatile int8_t x102 = -23;
	uint16_t x103 = UINT16_MAX;
	static int32_t x104 = -1;

	t25 = ((x101==(x102|x103))&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int64_t x106 = 9939891421LL;
	static int16_t x107 = 208;
	static volatile int8_t x108 = INT8_MIN;

	t26 = ((x105==(x106|x107))&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int16_t x110 = -1;
	uint64_t x111 = 20130988461974LLU;
	volatile int32_t t27 = -753504;

	t27 = ((x109==(x110|x111))&x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = INT16_MIN;
	int32_t x115 = 87027484;
	volatile int32_t t28 = 23892800;

	t28 = ((x113==(x114|x115))&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	static uint64_t x118 = 936743976121LLU;
	volatile uint16_t x119 = 813U;
	int64_t x120 = INT64_MAX;
	int64_t t29 = -3360585265218716485LL;

	t29 = ((x117==(x118|x119))&x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = 51LL;
	int8_t x122 = 1;
	volatile int32_t x124 = INT32_MAX;
	int32_t t30 = -70540825;

	t30 = ((x121==(x122|x123))&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = 6;
	uint8_t x126 = 33U;
	static volatile uint64_t x127 = 1508063628829LLU;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t31 = -98;

	t31 = ((x125==(x126|x127))&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 15258U;
	uint16_t x130 = UINT16_MAX;
	int16_t x131 = 3;
	uint16_t x132 = 13U;
	int32_t t32 = -14462;

	t32 = ((x129==(x130|x131))&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x134 = INT64_MAX;
	int64_t x135 = 3290607815LL;
	volatile int32_t t33 = 86485;

	t33 = ((x133==(x134|x135))&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	static int32_t x138 = 10431;
	volatile int32_t x139 = INT32_MIN;
	static int16_t x140 = 7228;
	static volatile int32_t t34 = 0;

	t34 = ((x137==(x138|x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 357U;
	int64_t x144 = INT64_MIN;
	volatile int64_t t35 = 1668763429LL;

	t35 = ((x141==(x142|x143))&x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -5;
	static int16_t x146 = INT16_MAX;
	uint32_t x147 = 12585U;
	uint8_t x148 = 33U;
	volatile int32_t t36 = 1225588;

	t36 = ((x145==(x146|x147))&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 56U;
	volatile int8_t x150 = -1;
	int8_t x151 = INT8_MAX;

	t37 = ((x149==(x150|x151))&x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 20;
	uint64_t x154 = 186311040273LLU;
	int16_t x155 = INT16_MAX;
	uint64_t x156 = 51LLU;

	t38 = ((x153==(x154|x155))&x156);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x158 = 3926U;
	volatile int64_t x159 = INT64_MIN;
	uint64_t x160 = 2671LLU;

	t39 = ((x157==(x158|x159))&x160);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = 27;
	int64_t x163 = 1752253414LL;
	volatile int32_t t40 = 18561181;

	t40 = ((x161==(x162|x163))&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = -12637;
	int16_t x166 = INT16_MIN;
	volatile int8_t x167 = 21;
	uint32_t x168 = UINT32_MAX;
	volatile uint32_t t41 = 44930U;

	t41 = ((x165==(x166|x167))&x168);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	int64_t x171 = -1LL;
	uint64_t x172 = 38983LLU;
	volatile uint64_t t42 = 373617206611165768LLU;

	t42 = ((x169==(x170|x171))&x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = -1;
	volatile int8_t x175 = INT8_MIN;
	uint16_t x176 = 26502U;
	int32_t t43 = 24150;

	t43 = ((x173==(x174|x175))&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 7U;
	uint32_t x179 = UINT32_MAX;
	static int8_t x180 = 0;
	int32_t t44 = 218173360;

	t44 = ((x177==(x178|x179))&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	uint16_t x182 = 7U;
	uint8_t x183 = UINT8_MAX;
	int32_t t45 = -15553;

	t45 = ((x181==(x182|x183))&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	uint16_t x186 = 20750U;
	static int32_t x187 = INT32_MIN;
	uint8_t x188 = UINT8_MAX;
	int32_t t46 = 19358;

	t46 = ((x185==(x186|x187))&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MAX;
	uint32_t x191 = 0U;
	int16_t x192 = 9;
	static int32_t t47 = -1018;

	t47 = ((x189==(x190|x191))&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	uint16_t x194 = UINT16_MAX;
	int16_t x195 = INT16_MAX;
	uint16_t x196 = UINT16_MAX;
	int32_t t48 = -400;

	t48 = ((x193==(x194|x195))&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 1821657LL;
	int16_t x199 = 44;
	int32_t x200 = INT32_MIN;
	int32_t t49 = 11;

	t49 = ((x197==(x198|x199))&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 11;
	int32_t x202 = INT32_MIN;
	uint32_t x203 = 456732U;
	int64_t x204 = INT64_MIN;
	int64_t t50 = -4035359241LL;

	t50 = ((x201==(x202|x203))&x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x207 = INT32_MAX;
	volatile int32_t x208 = -582;
	static volatile int32_t t51 = -441273;

	t51 = ((x205==(x206|x207))&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	volatile int8_t x211 = INT8_MAX;
	static uint8_t x212 = UINT8_MAX;
	int32_t t52 = 424;

	t52 = ((x209==(x210|x211))&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MIN;
	int64_t x214 = INT64_MAX;
	uint64_t x215 = 2857553816LLU;
	int16_t x216 = -1;
	int32_t t53 = -7399;

	t53 = ((x213==(x214|x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -3;
	int64_t x218 = -5013806678223LL;
	int16_t x219 = INT16_MAX;
	int64_t x220 = INT64_MAX;

	t54 = ((x217==(x218|x219))&x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MIN;
	volatile int16_t x224 = INT16_MIN;
	static volatile int32_t t55 = -8147;

	t55 = ((x221==(x222|x223))&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = 2445360;
	volatile uint32_t x227 = 231U;
	volatile int64_t x228 = INT64_MAX;

	t56 = ((x225==(x226|x227))&x228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x229 = 4331U;
	static uint32_t x230 = 64823462U;
	static uint16_t x232 = 2732U;
	int32_t t57 = -158643;

	t57 = ((x229==(x230|x231))&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x234 = UINT32_MAX;
	int64_t x235 = -1LL;
	int32_t t58 = -1158;

	t58 = ((x233==(x234|x235))&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	int16_t x238 = INT16_MAX;
	static uint16_t x239 = UINT16_MAX;

	t59 = ((x237==(x238|x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x242 = INT64_MAX;
	volatile uint8_t x243 = 30U;
	static volatile int32_t x244 = INT32_MIN;

	t60 = ((x241==(x242|x243))&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 30U;
	static uint16_t x246 = 71U;
	static int8_t x248 = -1;
	static volatile int32_t t61 = 169555;

	t61 = ((x245==(x246|x247))&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = INT8_MAX;
	volatile uint64_t x250 = 9020049607515784435LLU;
	static volatile uint64_t x251 = UINT64_MAX;
	uint8_t x252 = 3U;

	t62 = ((x249==(x250|x251))&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 44;
	static uint32_t x254 = 2253U;
	volatile int8_t x255 = -3;
	volatile uint64_t x256 = 485200113LLU;
	volatile uint64_t t63 = 55566LLU;

	t63 = ((x253==(x254|x255))&x256);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x258 = 0LLU;
	int32_t x259 = INT32_MIN;

	t64 = ((x257==(x258|x259))&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = INT16_MIN;
	int32_t x263 = INT32_MAX;
	static int64_t x264 = INT64_MIN;
	static int64_t t65 = 115573086692LL;

	t65 = ((x261==(x262|x263))&x264);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = -12370LL;
	volatile int32_t t66 = -1944431;

	t66 = ((x265==(x266|x267))&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	static int16_t x270 = INT16_MAX;
	int16_t x272 = -1;
	int32_t t67 = -254190;

	t67 = ((x269==(x270|x271))&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x274 = INT64_MIN;
	uint32_t x275 = 15511U;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = -356981;

	t68 = ((x273==(x274|x275))&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 3193;
	uint8_t x278 = UINT8_MAX;
	static volatile uint32_t x279 = 234U;
	volatile int64_t x280 = -1LL;
	volatile int64_t t69 = 30LL;

	t69 = ((x277==(x278|x279))&x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 339231U;
	volatile int16_t x283 = INT16_MAX;
	volatile int32_t x284 = INT32_MAX;
	int32_t t70 = 1971;

	t70 = ((x281==(x282|x283))&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	int64_t x286 = INT64_MAX;
	uint16_t x287 = UINT16_MAX;
	int64_t x288 = INT64_MIN;
	int64_t t71 = 1498772795LL;

	t71 = ((x285==(x286|x287))&x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 10692076U;
	int32_t x290 = INT32_MIN;
	uint16_t x291 = 110U;

	t72 = ((x289==(x290|x291))&x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = INT8_MAX;
	int16_t x294 = -1;
	volatile int32_t x295 = -1;
	static int32_t x296 = 12;
	static volatile int32_t t73 = -406;

	t73 = ((x293==(x294|x295))&x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	int8_t x299 = INT8_MAX;
	volatile int32_t x300 = INT32_MAX;

	t74 = ((x297==(x298|x299))&x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 123292U;
	volatile int8_t x302 = -55;
	static volatile uint16_t x303 = UINT16_MAX;
	int32_t t75 = 8247;

	t75 = ((x301==(x302|x303))&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	volatile int8_t x306 = -15;
	int64_t x307 = INT64_MIN;
	volatile uint64_t x308 = 29956641LLU;
	static uint64_t t76 = 2597601LLU;

	t76 = ((x305==(x306|x307))&x308);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 7915U;
	volatile int32_t x310 = INT32_MIN;
	int64_t x311 = 5532008LL;
	static uint8_t x312 = 1U;
	int32_t t77 = 16809;

	t77 = ((x309==(x310|x311))&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	static int16_t x314 = INT16_MIN;
	static volatile uint16_t x315 = 24U;
	int32_t x316 = 454;

	t78 = ((x313==(x314|x315))&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = 1;
	int32_t x318 = -1;
	int16_t x319 = INT16_MIN;
	static int16_t x320 = INT16_MAX;
	volatile int32_t t79 = 22522;

	t79 = ((x317==(x318|x319))&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x322 = UINT64_MAX;
	int32_t x323 = INT32_MIN;
	static int64_t x324 = INT64_MIN;
	static volatile int64_t t80 = -11956750371607339LL;

	t80 = ((x321==(x322|x323))&x324);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int32_t x326 = INT32_MIN;
	uint64_t x327 = 729105LLU;
	uint16_t x328 = 11U;
	int32_t t81 = 9142;

	t81 = ((x325==(x326|x327))&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = 1;
	int16_t x330 = INT16_MAX;
	uint64_t x331 = 64544LLU;
	uint16_t x332 = 90U;
	volatile int32_t t82 = -7406;

	t82 = ((x329==(x330|x331))&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MIN;
	int16_t x334 = INT16_MIN;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t83 = 1493147034437413479LLU;

	t83 = ((x333==(x334|x335))&x336);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 2U;
	uint64_t x339 = UINT64_MAX;
	int32_t x340 = 69046;
	volatile int32_t t84 = 2845;

	t84 = ((x337==(x338|x339))&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 125LLU;
	int16_t x342 = 7382;
	int64_t x343 = INT64_MAX;
	uint64_t x344 = 173882473163914240LLU;
	static uint64_t t85 = 84242251454246705LLU;

	t85 = ((x341==(x342|x343))&x344);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	int16_t x346 = INT16_MIN;
	static int16_t x347 = INT16_MIN;
	uint32_t x348 = UINT32_MAX;
	volatile uint32_t t86 = 1608484U;

	t86 = ((x345==(x346|x347))&x348);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x350 = -1;
	static int16_t x351 = -206;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = 21128335;

	t87 = ((x349==(x350|x351))&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	volatile int64_t x354 = INT64_MIN;
	int16_t x355 = INT16_MIN;
	static int16_t x356 = INT16_MAX;
	int32_t t88 = -11309;

	t88 = ((x353==(x354|x355))&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MIN;
	int8_t x358 = INT8_MAX;
	int16_t x359 = -1;
	int8_t x360 = -38;
	int32_t t89 = -10856;

	t89 = ((x357==(x358|x359))&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = 6;
	int16_t x363 = -1;
	static volatile uint64_t t90 = 7LLU;

	t90 = ((x361==(x362|x363))&x364);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = -16;
	volatile int32_t x367 = 677698;
	int32_t t91 = -35;

	t91 = ((x365==(x366|x367))&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	int16_t x371 = INT16_MAX;
	int64_t x372 = 823087848536LL;
	int64_t t92 = -10501776LL;

	t92 = ((x369==(x370|x371))&x372);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = -1;
	volatile int64_t x374 = INT64_MIN;
	uint32_t x375 = 487576U;
	uint32_t x376 = 46152107U;
	static uint32_t t93 = 114267612U;

	t93 = ((x373==(x374|x375))&x376);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -14;
	int8_t x379 = INT8_MIN;
	int8_t x380 = -59;
	static int32_t t94 = 0;

	t94 = ((x377==(x378|x379))&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x381 = UINT8_MAX;
	volatile uint8_t x382 = 1U;
	int16_t x383 = -1;
	int16_t x384 = -1;
	volatile int32_t t95 = 11;

	t95 = ((x381==(x382|x383))&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 16U;
	static int16_t x386 = -1;
	volatile uint64_t x387 = 906298012175LLU;
	uint32_t x388 = 5U;
	uint32_t t96 = 451U;

	t96 = ((x385==(x386|x387))&x388);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -139438;
	int8_t x390 = INT8_MIN;
	int32_t x391 = INT32_MIN;
	static int8_t x392 = -1;
	int32_t t97 = 11357929;

	t97 = ((x389==(x390|x391))&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = 361U;
	volatile uint64_t x394 = 6550LLU;
	int16_t x395 = 69;
	static uint64_t x396 = UINT64_MAX;

	t98 = ((x393==(x394|x395))&x396);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = 9323;
	static int64_t x400 = 97343255LL;
	int64_t t99 = -3257227654LL;

	t99 = ((x397==(x398|x399))&x400);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

