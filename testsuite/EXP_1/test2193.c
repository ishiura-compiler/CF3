#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x7 = 60123LL;
int32_t t1 = 39899;
int32_t t4 = 384;
int64_t x22 = 4074856LL;
int32_t t5 = 4087;
int64_t x28 = 143LL;
static int32_t t6 = 3;
uint64_t x35 = UINT64_MAX;
uint16_t x38 = 45U;
int16_t x42 = -1;
volatile uint8_t x46 = 1U;
int32_t t11 = 7;
int8_t x50 = INT8_MIN;
int32_t x51 = -1;
volatile int32_t t12 = 53;
uint64_t x54 = 4946623549222LLU;
int32_t t14 = 144595;
volatile int16_t x75 = 1;
static volatile int8_t x76 = INT8_MIN;
int32_t t18 = 4192245;
int32_t x83 = INT32_MAX;
static volatile int32_t t20 = -746617929;
volatile int16_t x85 = 0;
static uint64_t x95 = UINT64_MAX;
int64_t x96 = INT64_MIN;
volatile int32_t t24 = -32674745;
int64_t x105 = INT64_MIN;
static int32_t x106 = INT32_MIN;
int16_t x108 = 1;
int16_t x110 = 1;
volatile uint32_t x112 = 359111749U;
int8_t x114 = INT8_MIN;
int16_t x123 = INT16_MIN;
int32_t x124 = INT32_MAX;
static int32_t t30 = 7135008;
uint8_t x128 = UINT8_MAX;
uint8_t x131 = UINT8_MAX;
int32_t t32 = 1;
int8_t x133 = 0;
int8_t x140 = INT8_MIN;
int64_t x144 = -1908250555921747566LL;
int8_t x145 = INT8_MAX;
uint8_t x147 = 120U;
int32_t t36 = -830;
uint8_t x150 = UINT8_MAX;
int64_t x158 = INT64_MIN;
volatile int8_t x167 = INT8_MAX;
static int32_t t41 = -1;
volatile uint8_t x176 = UINT8_MAX;
volatile int32_t t43 = 1;
volatile int8_t x180 = INT8_MIN;
uint64_t x182 = 0LLU;
volatile uint64_t x184 = 102949748LLU;
volatile int32_t t45 = -10;
static uint64_t x189 = UINT64_MAX;
uint8_t x197 = 29U;
int64_t x204 = INT64_MIN;
int16_t x205 = -1;
int8_t x209 = INT8_MIN;
int64_t x217 = INT64_MAX;
uint32_t x234 = 517U;
volatile int32_t t58 = 1;
int8_t x239 = INT8_MIN;
int64_t x240 = -1LL;
int32_t t59 = -62721;
int64_t x242 = -1LL;
static int8_t x245 = INT8_MAX;
uint32_t x253 = 983791U;
int64_t x254 = INT64_MIN;
static volatile int32_t t65 = -321;
volatile int32_t x268 = INT32_MIN;
int16_t x276 = INT16_MIN;
int64_t x280 = -1LL;
uint64_t x281 = UINT64_MAX;
int32_t x282 = INT32_MIN;
int8_t x290 = -1;
uint8_t x300 = UINT8_MAX;
int32_t x312 = INT32_MAX;
int16_t x313 = INT16_MIN;
int32_t x314 = INT32_MIN;
int64_t x322 = -7057620183LL;
volatile int8_t x324 = -8;
int8_t x326 = 0;
uint32_t x329 = UINT32_MAX;
volatile uint16_t x332 = UINT16_MAX;
static int32_t x334 = -1;
static uint64_t x337 = UINT64_MAX;
volatile int32_t x340 = INT32_MAX;
volatile int32_t x342 = -1;
static int32_t x346 = INT32_MAX;
volatile int32_t t86 = -310721688;
int8_t x349 = -1;
int16_t x355 = -60;
int32_t t89 = 763;
int8_t x362 = -1;
int16_t x363 = -1;
int16_t x368 = INT16_MAX;
int8_t x370 = -1;
int8_t x379 = -1;
int64_t x385 = INT64_MIN;
int8_t x390 = INT8_MIN;
uint16_t x398 = 25U;
volatile int32_t t99 = 1;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint16_t x2 = UINT16_MAX;
	int64_t x3 = INT64_MIN;
	uint32_t x4 = 1550736U;
	volatile int32_t t0 = -30;

	t0 = (((x1^x2)^x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 2U;
	static int8_t x6 = -1;
	int32_t x8 = -1;

	t1 = (((x5^x6)^x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 365;
	volatile uint32_t x10 = 17392U;
	int32_t x11 = INT32_MAX;
	uint64_t x12 = 3921924576869777722LLU;
	static volatile int32_t t2 = 45697947;

	t2 = (((x9^x10)^x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -58;
	int8_t x14 = INT8_MAX;
	static uint64_t x15 = 1152814241LLU;
	static uint64_t x16 = UINT64_MAX;
	volatile int32_t t3 = -47746847;

	t3 = (((x13^x14)^x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int16_t x18 = INT16_MAX;
	int16_t x19 = 0;
	volatile int16_t x20 = INT16_MIN;

	t4 = (((x17^x18)^x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = UINT32_MAX;
	int64_t x23 = 60929480824828LL;
	int32_t x24 = INT32_MAX;

	t5 = (((x21^x22)^x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MAX;
	volatile int32_t x26 = INT32_MIN;
	volatile int16_t x27 = INT16_MIN;

	t6 = (((x25^x26)^x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -8664861577822LL;
	volatile int8_t x30 = -1;
	int8_t x31 = INT8_MAX;
	static int8_t x32 = -1;
	volatile int32_t t7 = -477;

	t7 = (((x29^x30)^x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -1LL;
	int64_t x34 = INT64_MIN;
	int32_t x36 = 903673;
	int32_t t8 = 0;

	t8 = (((x33^x34)^x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	int8_t x39 = -1;
	static uint8_t x40 = 2U;
	volatile int32_t t9 = -12;

	t9 = (((x37^x38)^x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -82009;
	int8_t x43 = -1;
	uint64_t x44 = 1LLU;
	int32_t t10 = -221;

	t10 = (((x41^x42)^x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x45 = INT8_MIN;
	int64_t x47 = INT64_MAX;
	volatile int16_t x48 = INT16_MIN;

	t11 = (((x45^x46)^x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 319841116U;
	static int8_t x52 = INT8_MIN;

	t12 = (((x49^x50)^x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int32_t x55 = INT32_MAX;
	static int16_t x56 = -1;
	volatile int32_t t13 = -32301228;

	t13 = (((x53^x54)^x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 202697399U;
	int32_t x58 = INT32_MIN;
	volatile int8_t x59 = INT8_MIN;
	static int64_t x60 = INT64_MAX;

	t14 = (((x57^x58)^x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = UINT16_MAX;
	static int64_t x62 = 2271680500900591228LL;
	int16_t x63 = INT16_MIN;
	int64_t x64 = 429104777LL;
	volatile int32_t t15 = 0;

	t15 = (((x61^x62)^x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 106923U;
	int8_t x66 = 24;
	uint32_t x67 = 857554U;
	uint8_t x68 = 44U;
	volatile int32_t t16 = -391;

	t16 = (((x65^x66)^x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	uint64_t x70 = UINT64_MAX;
	int16_t x71 = 552;
	volatile int16_t x72 = -7;
	volatile int32_t t17 = 89081184;

	t17 = (((x69^x70)^x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x73 = -1;
	int16_t x74 = -1;

	t18 = (((x73^x74)^x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 66998672U;
	uint64_t x78 = 610LLU;
	volatile int8_t x79 = 15;
	int64_t x80 = -276077049211929LL;
	int32_t t19 = -51876;

	t19 = (((x77^x78)^x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 2377U;
	int32_t x82 = INT32_MIN;
	volatile int16_t x84 = INT16_MAX;

	t20 = (((x81^x82)^x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x86 = 22602237;
	uint16_t x87 = UINT16_MAX;
	int32_t x88 = 14151420;
	int32_t t21 = -38;

	t21 = (((x85^x86)^x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = INT32_MAX;
	volatile uint16_t x90 = UINT16_MAX;
	static uint16_t x91 = 2U;
	int16_t x92 = -12;
	int32_t t22 = 1006320012;

	t22 = (((x89^x90)^x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 99LLU;
	int64_t x94 = -14694205399LL;
	volatile int32_t t23 = 94415488;

	t23 = (((x93^x94)^x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -32144950LL;
	uint32_t x98 = 288837U;
	int32_t x99 = INT32_MIN;
	int16_t x100 = INT16_MIN;

	t24 = (((x97^x98)^x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	int64_t x102 = INT64_MIN;
	volatile int64_t x103 = INT64_MIN;
	int8_t x104 = -1;
	static int32_t t25 = -40466712;

	t25 = (((x101^x102)^x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x107 = INT32_MAX;
	static int32_t t26 = 11017637;

	t26 = (((x105^x106)^x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 0;
	int32_t x111 = 20;
	int32_t t27 = -20163;

	t27 = (((x109^x110)^x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 7U;
	volatile int16_t x115 = -1;
	volatile int64_t x116 = -3051809544803026LL;
	volatile int32_t t28 = -1537;

	t28 = (((x113^x114)^x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	int8_t x118 = 22;
	static volatile int64_t x119 = -1LL;
	int16_t x120 = -2047;
	int32_t t29 = 0;

	t29 = (((x117^x118)^x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -28;
	uint8_t x122 = 13U;

	t30 = (((x121^x122)^x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 46342881235LLU;
	volatile uint32_t x126 = UINT32_MAX;
	uint32_t x127 = UINT32_MAX;
	volatile int32_t t31 = -13749;

	t31 = (((x125^x126)^x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = INT16_MIN;
	int32_t x130 = -1;
	uint16_t x132 = 30U;

	t32 = (((x129^x130)^x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x134 = INT64_MIN;
	volatile int64_t x135 = -1LL;
	int8_t x136 = -1;
	volatile int32_t t33 = -6334774;

	t33 = (((x133^x134)^x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = UINT32_MAX;
	volatile uint8_t x138 = 13U;
	volatile int32_t x139 = INT32_MIN;
	int32_t t34 = -131212;

	t34 = (((x137^x138)^x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = -1;
	int64_t x142 = 988706969403063LL;
	int8_t x143 = INT8_MIN;
	volatile int32_t t35 = 14;

	t35 = (((x141^x142)^x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MIN;
	static int8_t x148 = INT8_MAX;

	t36 = (((x145^x146)^x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x149 = 11U;
	static volatile int64_t x151 = INT64_MIN;
	uint8_t x152 = 76U;
	int32_t t37 = 55;

	t37 = (((x149^x150)^x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 1;
	int8_t x154 = INT8_MAX;
	uint8_t x155 = UINT8_MAX;
	volatile uint64_t x156 = UINT64_MAX;
	int32_t t38 = -18758736;

	t38 = (((x153^x154)^x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	int16_t x159 = -1;
	uint8_t x160 = 51U;
	static int32_t t39 = -6;

	t39 = (((x157^x158)^x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = -1;
	int32_t x162 = INT32_MIN;
	static int8_t x163 = INT8_MIN;
	static int16_t x164 = INT16_MIN;
	static int32_t t40 = -333623;

	t40 = (((x161^x162)^x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int8_t x166 = -4;
	int64_t x168 = 1765159615071953LL;

	t41 = (((x165^x166)^x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	uint32_t x170 = UINT32_MAX;
	volatile uint32_t x171 = 117416472U;
	volatile uint32_t x172 = UINT32_MAX;
	int32_t t42 = 2446827;

	t42 = (((x169^x170)^x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	volatile uint32_t x174 = 365813U;
	int16_t x175 = INT16_MAX;

	t43 = (((x173^x174)^x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = UINT8_MAX;
	volatile int8_t x178 = 17;
	int16_t x179 = INT16_MIN;
	volatile int32_t t44 = 966;

	t44 = (((x177^x178)^x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t x183 = INT64_MIN;

	t45 = (((x181^x182)^x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x185 = 99U;
	volatile int32_t x186 = 31548723;
	volatile uint16_t x187 = 4296U;
	int8_t x188 = -1;
	volatile int32_t t46 = 177698987;

	t46 = (((x185^x186)^x187)<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x190 = 7U;
	int8_t x191 = INT8_MIN;
	uint8_t x192 = 0U;
	volatile int32_t t47 = 12277;

	t47 = (((x189^x190)^x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	static int32_t x194 = INT32_MIN;
	static volatile int64_t x195 = -1LL;
	int32_t x196 = 1513531;
	static int32_t t48 = -7489;

	t48 = (((x193^x194)^x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = INT32_MAX;
	int32_t x199 = INT32_MIN;
	volatile uint8_t x200 = 5U;
	volatile int32_t t49 = -55;

	t49 = (((x197^x198)^x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = INT64_MIN;
	int32_t x202 = -1;
	uint16_t x203 = 2342U;
	static volatile int32_t t50 = -937523;

	t50 = (((x201^x202)^x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = -369153LL;
	static int32_t x207 = INT32_MIN;
	volatile uint64_t x208 = 617LLU;
	static int32_t t51 = -15407;

	t51 = (((x205^x206)^x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x210 = 656U;
	int16_t x211 = 5;
	int64_t x212 = -1LL;
	volatile int32_t t52 = -1178;

	t52 = (((x209^x210)^x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = 14793U;
	int8_t x214 = -1;
	int16_t x215 = 94;
	uint16_t x216 = 14662U;
	volatile int32_t t53 = -15685124;

	t53 = (((x213^x214)^x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = INT8_MIN;
	int16_t x219 = INT16_MAX;
	int8_t x220 = 7;
	volatile int32_t t54 = 10;

	t54 = (((x217^x218)^x219)<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	static int16_t x222 = -3808;
	volatile uint64_t x223 = 229125247LLU;
	volatile int32_t x224 = INT32_MIN;
	volatile int32_t t55 = 0;

	t55 = (((x221^x222)^x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	int32_t x226 = 38360111;
	int32_t x227 = -1;
	static int32_t x228 = 126;
	static volatile int32_t t56 = -1;

	t56 = (((x225^x226)^x227)<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 29U;
	int32_t x230 = INT32_MIN;
	int32_t x231 = INT32_MAX;
	uint64_t x232 = 9758535137LLU;
	static volatile int32_t t57 = 230;

	t57 = (((x229^x230)^x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	uint32_t x235 = UINT32_MAX;
	int16_t x236 = INT16_MAX;

	t58 = (((x233^x234)^x235)<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 8004U;
	int8_t x238 = INT8_MIN;

	t59 = (((x237^x238)^x239)<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 17129457151924LLU;
	static uint32_t x243 = 0U;
	volatile uint16_t x244 = 3U;
	volatile int32_t t60 = 159;

	t60 = (((x241^x242)^x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = INT32_MIN;
	static int16_t x247 = INT16_MIN;
	static volatile int8_t x248 = -2;
	int32_t t61 = -3;

	t61 = (((x245^x246)^x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = 21464812027838795LLU;
	volatile uint8_t x250 = 29U;
	volatile int64_t x251 = INT64_MIN;
	static int64_t x252 = INT64_MAX;
	int32_t t62 = 24734237;

	t62 = (((x249^x250)^x251)<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x255 = INT64_MAX;
	uint32_t x256 = 1U;
	volatile int32_t t63 = -7275655;

	t63 = (((x253^x254)^x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 61;
	static int64_t x258 = INT64_MIN;
	int8_t x259 = -1;
	static uint64_t x260 = UINT64_MAX;
	static volatile int32_t t64 = 1039726;

	t64 = (((x257^x258)^x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	volatile int16_t x262 = 0;
	volatile int64_t x263 = -1617765248LL;
	uint8_t x264 = UINT8_MAX;

	t65 = (((x261^x262)^x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = -5754LL;
	volatile int8_t x266 = INT8_MIN;
	uint16_t x267 = UINT16_MAX;
	volatile int32_t t66 = 122313;

	t66 = (((x265^x266)^x267)<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	uint32_t x270 = 7805U;
	volatile int8_t x271 = INT8_MIN;
	static uint16_t x272 = 47U;
	volatile int32_t t67 = 222;

	t67 = (((x269^x270)^x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	uint8_t x274 = 1U;
	volatile int8_t x275 = -3;
	static int32_t t68 = 94;

	t68 = (((x273^x274)^x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 307LL;
	int8_t x278 = 1;
	int64_t x279 = INT64_MIN;
	int32_t t69 = 55;

	t69 = (((x277^x278)^x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x283 = UINT16_MAX;
	int64_t x284 = INT64_MIN;
	volatile int32_t t70 = -1;

	t70 = (((x281^x282)^x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = -60;
	uint64_t x286 = 24LLU;
	int64_t x287 = INT64_MIN;
	volatile int16_t x288 = -1;
	static volatile int32_t t71 = 25546442;

	t71 = (((x285^x286)^x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int64_t x291 = -4LL;
	uint64_t x292 = 264561717081812350LLU;
	volatile int32_t t72 = -41;

	t72 = (((x289^x290)^x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = INT16_MIN;
	static int8_t x294 = -1;
	uint8_t x295 = 0U;
	int8_t x296 = -1;
	volatile int32_t t73 = 205;

	t73 = (((x293^x294)^x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = INT8_MIN;
	volatile int64_t x298 = -12352515504047LL;
	static uint32_t x299 = 39929U;
	volatile int32_t t74 = 48;

	t74 = (((x297^x298)^x299)<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x301 = 665594916U;
	int64_t x302 = -1LL;
	uint8_t x303 = 39U;
	uint32_t x304 = 3550492U;
	int32_t t75 = -5;

	t75 = (((x301^x302)^x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -2133883;
	volatile int16_t x306 = INT16_MAX;
	static int8_t x307 = -1;
	static int32_t x308 = INT32_MIN;
	volatile int32_t t76 = -18;

	t76 = (((x305^x306)^x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = INT64_MIN;
	uint16_t x311 = 8U;
	volatile int32_t t77 = -216579551;

	t77 = (((x309^x310)^x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x315 = -6924;
	int32_t x316 = 735;
	static int32_t t78 = 71357983;

	t78 = (((x313^x314)^x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MAX;
	uint8_t x318 = 12U;
	volatile int16_t x319 = -1;
	uint64_t x320 = UINT64_MAX;
	int32_t t79 = -1581;

	t79 = (((x317^x318)^x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = INT64_MAX;
	int32_t x323 = INT32_MIN;
	volatile int32_t t80 = -1;

	t80 = (((x321^x322)^x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = -27;
	static uint8_t x327 = UINT8_MAX;
	int8_t x328 = INT8_MIN;
	volatile int32_t t81 = -2484;

	t81 = (((x325^x326)^x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = 68;
	int64_t x331 = -995878LL;
	volatile int32_t t82 = -2744253;

	t82 = (((x329^x330)^x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 134;
	int32_t x335 = INT32_MAX;
	int8_t x336 = -1;
	int32_t t83 = -379053;

	t83 = (((x333^x334)^x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x338 = -1;
	uint16_t x339 = 1U;
	volatile int32_t t84 = -110;

	t84 = (((x337^x338)^x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 25U;
	static int16_t x343 = INT16_MAX;
	static int8_t x344 = INT8_MIN;
	int32_t t85 = 198681;

	t85 = (((x341^x342)^x343)<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x345 = 9680548LLU;
	volatile int8_t x347 = -7;
	static int8_t x348 = INT8_MIN;

	t86 = (((x345^x346)^x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x350 = INT32_MAX;
	static int16_t x351 = -1;
	volatile uint64_t x352 = 2048658LLU;
	static volatile int32_t t87 = 1559781;

	t87 = (((x349^x350)^x351)<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	int16_t x354 = -2;
	uint8_t x356 = UINT8_MAX;
	int32_t t88 = 2980;

	t88 = (((x353^x354)^x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 0;
	int64_t x358 = INT64_MAX;
	uint64_t x359 = 1052LLU;
	int16_t x360 = -2;

	t89 = (((x357^x358)^x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	uint32_t x364 = UINT32_MAX;
	static volatile int32_t t90 = -336909;

	t90 = (((x361^x362)^x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = 30471056548LL;
	int32_t x366 = INT32_MIN;
	static int32_t x367 = INT32_MIN;
	volatile int32_t t91 = 6;

	t91 = (((x365^x366)^x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	volatile int64_t x371 = -59173LL;
	int64_t x372 = 133592332LL;
	int32_t t92 = 41145432;

	t92 = (((x369^x370)^x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int64_t x374 = -11900823LL;
	static int64_t x375 = INT64_MIN;
	int64_t x376 = -1LL;
	int32_t t93 = 12;

	t93 = (((x373^x374)^x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	static int8_t x378 = 1;
	volatile int32_t x380 = INT32_MAX;
	int32_t t94 = -7519282;

	t94 = (((x377^x378)^x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	static volatile uint16_t x382 = UINT16_MAX;
	int32_t x383 = -22448784;
	int8_t x384 = INT8_MAX;
	static int32_t t95 = -891195083;

	t95 = (((x381^x382)^x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x386 = 534999148LL;
	int16_t x387 = INT16_MIN;
	int64_t x388 = -1LL;
	int32_t t96 = 1;

	t96 = (((x385^x386)^x387)<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -5;
	int16_t x391 = INT16_MAX;
	int16_t x392 = INT16_MAX;
	static volatile int32_t t97 = -48004;

	t97 = (((x389^x390)^x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	uint8_t x394 = 4U;
	int64_t x395 = INT64_MIN;
	int32_t x396 = -1;
	volatile int32_t t98 = 13645939;

	t98 = (((x393^x394)^x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 1139U;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = UINT8_MAX;

	t99 = (((x397^x398)^x399)<x400);

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

