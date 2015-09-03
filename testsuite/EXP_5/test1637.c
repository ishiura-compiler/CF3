#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -1LL;
static int16_t x7 = INT16_MAX;
int32_t t2 = -580314850;
volatile uint16_t x14 = UINT16_MAX;
int32_t x17 = -1;
int32_t x19 = 33;
int8_t x23 = 0;
volatile uint8_t x24 = UINT8_MAX;
static int32_t x30 = 25118002;
volatile int32_t t9 = -53638755;
volatile int64_t x44 = INT64_MIN;
int8_t x46 = INT8_MIN;
int64_t x51 = 28619768LL;
static int16_t x59 = -1;
static volatile int32_t x61 = -708721;
uint8_t x66 = 5U;
int8_t x68 = INT8_MAX;
int64_t x69 = INT64_MIN;
uint16_t x71 = UINT16_MAX;
static uint32_t x81 = 993398U;
int64_t x83 = INT64_MIN;
static uint32_t t20 = 1U;
int8_t x90 = INT8_MIN;
volatile int32_t x92 = INT32_MIN;
int64_t x94 = 347157030797187LL;
static uint32_t x96 = 1439975193U;
uint32_t x99 = 36350786U;
int32_t t24 = INT32_MAX;
volatile int32_t t25 = INT32_MAX;
int16_t x105 = INT16_MIN;
int32_t x107 = INT32_MAX;
int32_t t26 = 4;
int16_t x137 = INT16_MIN;
uint64_t x149 = 16020385606LLU;
int8_t x152 = INT8_MAX;
int64_t x155 = INT64_MIN;
static int32_t t38 = 955;
static volatile int32_t t44 = 537;
static volatile int32_t x183 = INT32_MIN;
int32_t t45 = 1;
static uint16_t x187 = UINT16_MAX;
uint32_t x195 = 2578U;
volatile uint16_t x198 = UINT16_MAX;
static volatile int64_t x199 = INT64_MAX;
static int16_t x203 = INT16_MAX;
uint32_t x204 = 8U;
uint64_t x205 = 2086310005LLU;
uint32_t x209 = UINT32_MAX;
volatile int8_t x223 = INT8_MIN;
static int16_t x227 = 599;
int8_t x229 = -1;
static int8_t x240 = INT8_MIN;
int8_t x246 = -1;
int32_t x251 = INT32_MIN;
int32_t t62 = 42285230;
int32_t x253 = INT32_MAX;
volatile int32_t t63 = INT32_MAX;
volatile int8_t x264 = 0;
uint64_t t66 = UINT64_MAX;
static int16_t x270 = INT16_MAX;
uint32_t x278 = UINT32_MAX;
uint8_t x283 = UINT8_MAX;
static int64_t x292 = INT64_MAX;
int32_t t74 = 7559;
volatile int8_t x304 = -1;
volatile uint8_t x305 = UINT8_MAX;
static int32_t x309 = -52486552;
static int8_t x315 = -1;
volatile int64_t x317 = -1LL;
static int64_t t79 = 49130442880LL;
int64_t x324 = INT64_MIN;
int32_t x333 = 0;
static uint16_t x335 = 3U;
int16_t x343 = 0;
int16_t x344 = INT16_MIN;
int8_t x347 = 1;
volatile int32_t t86 = -35;
volatile int32_t x358 = INT32_MAX;
int16_t x368 = INT16_MIN;
volatile int64_t t91 = 457LL;
static int64_t x370 = -336585007535LL;
static int32_t x376 = -104365;
int16_t x379 = -294;
uint64_t t96 = UINT64_MAX;
volatile uint64_t t97 = 5269518613728362LLU;
volatile int32_t t98 = 16864552;
static uint64_t x398 = 1596263LLU;


void f0(void) {
	uint32_t x1 = 7281U;
	int16_t x2 = 14;
	int8_t x4 = INT8_MIN;
	uint32_t t0 = 1U;

	t0 = (x1|((x2<=x3)<x4));

	if (t0 != 7281U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 25U;
	int64_t x6 = -1LL;
	static volatile uint16_t x8 = 2U;
	int32_t t1 = -18509;

	t1 = (x5|((x6<=x7)<x8));

	if (t1 != 25) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -29;
	volatile int16_t x10 = INT16_MAX;
	uint64_t x11 = UINT64_MAX;
	int8_t x12 = -1;

	t2 = (x9|((x10<=x11)<x12));

	if (t2 != -29) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int8_t x15 = INT8_MIN;
	uint64_t x16 = 6182192503LLU;
	volatile int32_t t3 = INT32_MAX;

	t3 = (x13|((x14<=x15)<x16));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 7U;
	volatile int8_t x20 = INT8_MIN;
	int32_t t4 = 206287;

	t4 = (x17|((x18<=x19)<x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int64_t x22 = INT64_MIN;
	int32_t t5 = -502;

	t5 = (x21|((x22<=x23)<x24));

	if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	uint32_t x26 = 88U;
	int16_t x27 = 1;
	volatile uint16_t x28 = 275U;
	int32_t t6 = 9030271;

	t6 = (x25|((x26<=x27)<x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = 340U;
	static int16_t x31 = INT16_MAX;
	int8_t x32 = INT8_MAX;
	uint32_t t7 = 906U;

	t7 = (x29|((x30<=x31)<x32));

	if (t7 != 341U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = 175;
	int8_t x34 = 14;
	uint64_t x35 = 3LLU;
	uint16_t x36 = UINT16_MAX;
	static volatile int32_t t8 = -22;

	t8 = (x33|((x34<=x35)<x36));

	if (t8 != 175) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 0U;
	int64_t x38 = 1574416553024021770LL;
	int8_t x39 = INT8_MIN;
	uint8_t x40 = UINT8_MAX;

	t9 = (x37|((x38<=x39)<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	int8_t x42 = -2;
	uint8_t x43 = UINT8_MAX;
	int32_t t10 = -7729;

	t10 = (x41|((x42<=x43)<x44));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 98036898612977708LL;
	int64_t x47 = INT64_MAX;
	int32_t x48 = INT32_MIN;
	volatile int64_t t11 = 8742956352629942LL;

	t11 = (x45|((x46<=x47)<x48));

	if (t11 != 98036898612977708LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 82;
	volatile int8_t x50 = INT8_MIN;
	int32_t x52 = -1;
	volatile int32_t t12 = -575;

	t12 = (x49|((x50<=x51)<x52));

	if (t12 != 82) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -72;
	volatile int64_t x54 = -1LL;
	int64_t x55 = -122LL;
	int16_t x56 = 225;
	static volatile int32_t t13 = -545011;

	t13 = (x53|((x54<=x55)<x56));

	if (t13 != -71) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 1;
	int64_t x58 = 4383813014855LL;
	int64_t x60 = -4LL;
	int32_t t14 = 173642193;

	t14 = (x57|((x58<=x59)<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = -1LL;
	static volatile int8_t x63 = -10;
	int64_t x64 = INT64_MIN;
	int32_t t15 = -424037;

	t15 = (x61|((x62<=x63)<x64));

	if (t15 != -708721) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	int8_t x67 = INT8_MIN;
	int32_t t16 = -1859839;

	t16 = (x65|((x66<=x67)<x68));

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = 84U;
	int64_t x72 = INT64_MAX;
	static volatile int64_t t17 = 120482850147868968LL;

	t17 = (x69|((x70<=x71)<x72));

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = UINT8_MAX;
	uint64_t x74 = 7282575LLU;
	uint64_t x75 = 179417550460975LLU;
	uint8_t x76 = 15U;
	int32_t t18 = 1;

	t18 = (x73|((x74<=x75)<x76));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = INT64_MIN;
	volatile int8_t x78 = INT8_MIN;
	volatile uint16_t x79 = 220U;
	int16_t x80 = INT16_MAX;
	volatile int64_t t19 = -767121715672LL;

	t19 = (x77|((x78<=x79)<x80));

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = INT8_MIN;
	static uint64_t x84 = 4228059820377LLU;

	t20 = (x81|((x82<=x83)<x84));

	if (t20 != 993399U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = 4693558401204707402LLU;
	int32_t x86 = INT32_MIN;
	int32_t x87 = INT32_MIN;
	volatile int16_t x88 = -1;
	static uint64_t t21 = 84444792209LLU;

	t21 = (x85|((x86<=x87)<x88));

	if (t21 != 4693558401204707402LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 20057812;
	volatile uint8_t x91 = 0U;
	volatile int32_t t22 = -55303;

	t22 = (x89|((x90<=x91)<x92));

	if (t22 != 20057812) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -7;
	int8_t x95 = 16;
	int32_t t23 = -611;

	t23 = (x93|((x94<=x95)<x96));

	if (t23 != -7) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	static volatile uint64_t x98 = 3187702425LLU;
	volatile int64_t x100 = INT64_MIN;

	t24 = (x97|((x98<=x99)<x100));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	volatile uint8_t x102 = 93U;
	int64_t x103 = -17007528173LL;
	int32_t x104 = INT32_MIN;

	t25 = (x101|((x102<=x103)<x104));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x106 = INT64_MAX;
	int8_t x108 = INT8_MAX;

	t26 = (x105|((x106<=x107)<x108));

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -129715284;
	uint16_t x110 = 18U;
	int8_t x111 = INT8_MIN;
	int32_t x112 = INT32_MIN;
	volatile int32_t t27 = 56806909;

	t27 = (x109|((x110<=x111)<x112));

	if (t27 != -129715284) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -312;
	int32_t x114 = 0;
	int32_t x115 = INT32_MIN;
	int32_t x116 = -929;
	volatile int32_t t28 = -303831368;

	t28 = (x113|((x114<=x115)<x116));

	if (t28 != -312) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	int8_t x118 = -38;
	int16_t x119 = 1;
	uint16_t x120 = 232U;
	volatile int32_t t29 = -100259797;

	t29 = (x117|((x118<=x119)<x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	static int64_t x122 = 10557319084LL;
	static int32_t x123 = INT32_MIN;
	int64_t x124 = INT64_MIN;
	volatile int32_t t30 = 45425433;

	t30 = (x121|((x122<=x123)<x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = INT8_MIN;
	volatile int64_t x126 = INT64_MIN;
	volatile int8_t x127 = INT8_MIN;
	int64_t x128 = INT64_MIN;
	int32_t t31 = 61669;

	t31 = (x125|((x126<=x127)<x128));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 24056U;
	volatile uint64_t x130 = 5966508LLU;
	uint16_t x131 = 2963U;
	int32_t x132 = INT32_MAX;
	static volatile int32_t t32 = -24;

	t32 = (x129|((x130<=x131)<x132));

	if (t32 != 24057) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	int64_t x134 = INT64_MIN;
	int8_t x135 = 10;
	uint32_t x136 = 1099766760U;
	int32_t t33 = 947;

	t33 = (x133|((x134<=x135)<x136));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MAX;
	int16_t x139 = 85;
	uint32_t x140 = 1623039U;
	volatile int32_t t34 = 115904788;

	t34 = (x137|((x138<=x139)<x140));

	if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = INT32_MAX;
	uint8_t x142 = UINT8_MAX;
	volatile int16_t x143 = INT16_MAX;
	volatile int32_t x144 = -96041717;
	static int32_t t35 = INT32_MAX;

	t35 = (x141|((x142<=x143)<x144));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	volatile int64_t x146 = INT64_MIN;
	int16_t x147 = 759;
	int32_t x148 = INT32_MIN;
	volatile int64_t t36 = 32187LL;

	t36 = (x145|((x146<=x147)<x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = -29;
	volatile int16_t x151 = INT16_MIN;
	uint64_t t37 = 77602LLU;

	t37 = (x149|((x150<=x151)<x152));

	if (t37 != 16020385607LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 41;
	volatile int64_t x154 = INT64_MIN;
	volatile int16_t x156 = INT16_MIN;

	t38 = (x153|((x154<=x155)<x156));

	if (t38 != 41) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x157 = -1;
	volatile int16_t x158 = -1198;
	int16_t x159 = -15;
	volatile uint64_t x160 = 780001577137560LLU;
	volatile int32_t t39 = 82;

	t39 = (x157|((x158<=x159)<x160));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x161 = UINT64_MAX;
	volatile uint32_t x162 = 216U;
	int64_t x163 = -1LL;
	volatile int8_t x164 = INT8_MIN;
	uint64_t t40 = UINT64_MAX;

	t40 = (x161|((x162<=x163)<x164));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x165 = UINT16_MAX;
	volatile uint16_t x166 = 1U;
	volatile int32_t x167 = INT32_MAX;
	volatile uint32_t x168 = UINT32_MAX;
	volatile int32_t t41 = -2;

	t41 = (x165|((x166<=x167)<x168));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	volatile uint8_t x170 = 10U;
	int8_t x171 = 17;
	uint16_t x172 = 2U;
	int64_t t42 = INT64_MAX;

	t42 = (x169|((x170<=x171)<x172));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MIN;
	int32_t x175 = INT32_MIN;
	static int64_t x176 = -127402436LL;
	volatile int32_t t43 = INT32_MIN;

	t43 = (x173|((x174<=x175)<x176));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = -1;
	static int16_t x178 = INT16_MIN;
	int8_t x179 = -1;
	static uint16_t x180 = UINT16_MAX;

	t44 = (x177|((x178<=x179)<x180));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 3U;
	int8_t x182 = -55;
	uint64_t x184 = 33236374524009LLU;

	t45 = (x181|((x182<=x183)<x184));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = 1634475033627175077LLU;
	int16_t x186 = 7;
	uint16_t x188 = UINT16_MAX;
	uint64_t t46 = 2974799LLU;

	t46 = (x185|((x186<=x187)<x188));

	if (t46 != 1634475033627175077LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = 13218361LL;
	uint16_t x190 = UINT16_MAX;
	int16_t x191 = -12;
	volatile int32_t x192 = INT32_MIN;
	static volatile int64_t t47 = 8606941LL;

	t47 = (x189|((x190<=x191)<x192));

	if (t47 != 13218361LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 23U;
	int16_t x194 = INT16_MAX;
	volatile int64_t x196 = INT64_MAX;
	volatile int32_t t48 = 4;

	t48 = (x193|((x194<=x195)<x196));

	if (t48 != 23) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	static int16_t x200 = INT16_MIN;
	volatile int32_t t49 = INT32_MIN;

	t49 = (x197|((x198<=x199)<x200));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 26;
	uint32_t x202 = 515239U;
	int32_t t50 = -467816;

	t50 = (x201|((x202<=x203)<x204));

	if (t50 != 27) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x206 = 535259667671LLU;
	int16_t x207 = -1;
	volatile uint32_t x208 = 1024467U;
	uint64_t t51 = 48315704LLU;

	t51 = (x205|((x206<=x207)<x208));

	if (t51 != 2086310005LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x210 = 5U;
	int16_t x211 = 1;
	int8_t x212 = INT8_MIN;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = (x209|((x210<=x211)<x212));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 3688660065922LLU;
	uint32_t x214 = UINT32_MAX;
	uint8_t x215 = 2U;
	int32_t x216 = 23;
	volatile uint64_t t53 = 92147567LLU;

	t53 = (x213|((x214<=x215)<x216));

	if (t53 != 3688660065923LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x217 = 152U;
	uint32_t x218 = 15286U;
	volatile uint16_t x219 = 9U;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t54 = -178066270;

	t54 = (x217|((x218<=x219)<x220));

	if (t54 != 153) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MIN;
	int64_t x222 = INT64_MAX;
	static volatile int8_t x224 = -1;
	int32_t t55 = 172592;

	t55 = (x221|((x222<=x223)<x224));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	int64_t x226 = -1LL;
	int16_t x228 = -1;
	int32_t t56 = INT32_MIN;

	t56 = (x225|((x226<=x227)<x228));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x230 = INT64_MIN;
	static int16_t x231 = -1;
	int8_t x232 = -1;
	volatile int32_t t57 = 4547333;

	t57 = (x229|((x230<=x231)<x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -14143;
	static int64_t x234 = INT64_MAX;
	static int64_t x235 = INT64_MIN;
	static volatile uint8_t x236 = 12U;
	volatile int32_t t58 = -489;

	t58 = (x233|((x234<=x235)<x236));

	if (t58 != -14143) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = 1;
	int16_t x238 = INT16_MAX;
	int64_t x239 = -28LL;
	static volatile int32_t t59 = -505005;

	t59 = (x237|((x238<=x239)<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	volatile int8_t x242 = 0;
	int32_t x243 = INT32_MIN;
	int16_t x244 = INT16_MIN;
	int32_t t60 = -6;

	t60 = (x241|((x242<=x243)<x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 2U;
	int16_t x247 = INT16_MIN;
	volatile uint16_t x248 = 360U;
	int32_t t61 = -1;

	t61 = (x245|((x246<=x247)<x248));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = 21;
	static volatile uint32_t x250 = UINT32_MAX;
	int32_t x252 = -5346413;

	t62 = (x249|((x250<=x251)<x252));

	if (t62 != 21) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x254 = INT16_MAX;
	int8_t x255 = -14;
	volatile int16_t x256 = -1;

	t63 = (x253|((x254<=x255)<x256));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -340;
	int64_t x258 = 2376987697858LL;
	int8_t x259 = INT8_MIN;
	static uint64_t x260 = UINT64_MAX;
	int32_t t64 = -19134989;

	t64 = (x257|((x258<=x259)<x260));

	if (t64 != -339) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	int16_t x262 = INT16_MIN;
	int32_t x263 = -1;
	int32_t t65 = -6877;

	t65 = (x261|((x262<=x263)<x264));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	int8_t x266 = 0;
	uint8_t x267 = 10U;
	int8_t x268 = INT8_MIN;

	t66 = (x265|((x266<=x267)<x268));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int64_t x271 = INT64_MIN;
	int64_t x272 = INT64_MAX;
	volatile int64_t t67 = -1381666LL;

	t67 = (x269|((x270<=x271)<x272));

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	int8_t x274 = 8;
	volatile int16_t x275 = 53;
	static int8_t x276 = -1;
	int32_t t68 = 322063;

	t68 = (x273|((x274<=x275)<x276));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x277 = UINT32_MAX;
	uint16_t x279 = UINT16_MAX;
	int32_t x280 = 9;
	volatile uint32_t t69 = UINT32_MAX;

	t69 = (x277|((x278<=x279)<x280));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x281 = INT32_MIN;
	static int8_t x282 = 1;
	volatile int64_t x284 = -1LL;
	int32_t t70 = INT32_MIN;

	t70 = (x281|((x282<=x283)<x284));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 9608584497838329LLU;
	static uint8_t x286 = UINT8_MAX;
	volatile uint8_t x287 = UINT8_MAX;
	volatile int32_t x288 = INT32_MAX;
	uint64_t t71 = 9955LLU;

	t71 = (x285|((x286<=x287)<x288));

	if (t71 != 9608584497838329LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -44;
	volatile uint64_t x290 = 6028765455913LLU;
	int8_t x291 = INT8_MAX;
	static int32_t t72 = 2016;

	t72 = (x289|((x290<=x291)<x292));

	if (t72 != -43) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	int16_t x295 = -1;
	uint32_t x296 = UINT32_MAX;
	int32_t t73 = 68409062;

	t73 = (x293|((x294<=x295)<x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = -1;
	int16_t x298 = -1;
	volatile uint64_t x299 = 2085087335LLU;
	static int16_t x300 = -1;

	t74 = (x297|((x298<=x299)<x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 69U;
	int8_t x302 = -1;
	int64_t x303 = INT64_MIN;
	static int32_t t75 = 245898;

	t75 = (x301|((x302<=x303)<x304));

	if (t75 != 69) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x306 = 63850013605LLU;
	int8_t x307 = -29;
	static int32_t x308 = -396626172;
	static int32_t t76 = -217;

	t76 = (x305|((x306<=x307)<x308));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = -1LL;
	int64_t x311 = INT64_MAX;
	uint64_t x312 = 10LLU;
	volatile int32_t t77 = 3393660;

	t77 = (x309|((x310<=x311)<x312));

	if (t77 != -52486551) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x313 = 13U;
	int16_t x314 = -1;
	volatile int16_t x316 = INT16_MIN;
	volatile int32_t t78 = 1;

	t78 = (x313|((x314<=x315)<x316));

	if (t78 != 13) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x318 = UINT32_MAX;
	int16_t x319 = 0;
	int64_t x320 = INT64_MIN;

	t79 = (x317|((x318<=x319)<x320));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	int16_t x322 = INT16_MIN;
	volatile uint64_t x323 = 415893665596630LLU;
	volatile uint32_t t80 = UINT32_MAX;

	t80 = (x321|((x322<=x323)<x324));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -3;
	volatile uint8_t x326 = UINT8_MAX;
	int8_t x327 = INT8_MIN;
	int64_t x328 = INT64_MIN;
	static int32_t t81 = 1;

	t81 = (x325|((x326<=x327)<x328));

	if (t81 != -3) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 87266733712744LLU;
	int64_t x330 = INT64_MIN;
	static uint8_t x331 = UINT8_MAX;
	int8_t x332 = INT8_MIN;
	uint64_t t82 = 10130469581371LLU;

	t82 = (x329|((x330<=x331)<x332));

	if (t82 != 87266733712744LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x334 = 46U;
	static int16_t x336 = INT16_MAX;
	volatile int32_t t83 = 8491040;

	t83 = (x333|((x334<=x335)<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	int16_t x338 = -1;
	int8_t x339 = INT8_MAX;
	int32_t x340 = INT32_MAX;
	int64_t t84 = 653852589599LL;

	t84 = (x337|((x338<=x339)<x340));

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = 23;
	int8_t x342 = -11;
	int32_t t85 = 803847816;

	t85 = (x341|((x342<=x343)<x344));

	if (t85 != 23) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 0U;
	static uint32_t x346 = 150U;
	int64_t x348 = INT64_MIN;

	t86 = (x345|((x346<=x347)<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x349 = UINT32_MAX;
	static volatile int64_t x350 = INT64_MIN;
	uint64_t x351 = 50280673451LLU;
	int16_t x352 = INT16_MIN;
	uint32_t t87 = UINT32_MAX;

	t87 = (x349|((x350<=x351)<x352));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -519418LL;
	int16_t x354 = -3780;
	int16_t x355 = INT16_MAX;
	int32_t x356 = 2605124;
	volatile int64_t t88 = 1495LL;

	t88 = (x353|((x354<=x355)<x356));

	if (t88 != -519417LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	int8_t x359 = -6;
	int64_t x360 = INT64_MIN;
	static volatile int32_t t89 = -36107;

	t89 = (x357|((x358<=x359)<x360));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	volatile int8_t x362 = INT8_MIN;
	uint8_t x363 = 23U;
	volatile uint32_t x364 = UINT32_MAX;
	volatile int32_t t90 = 917;

	t90 = (x361|((x362<=x363)<x364));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = -3431353411170009549LL;
	volatile int8_t x366 = -1;
	uint32_t x367 = 2U;

	t91 = (x365|((x366<=x367)<x368));

	if (t91 != -3431353411170009549LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 12867524U;
	static volatile int16_t x371 = -380;
	uint32_t x372 = 55U;
	volatile uint32_t t92 = 187U;

	t92 = (x369|((x370<=x371)<x372));

	if (t92 != 12867525U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 1U;
	volatile int8_t x374 = -60;
	static uint8_t x375 = 5U;
	int32_t t93 = -1;

	t93 = (x373|((x374<=x375)<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	volatile uint32_t x378 = 27U;
	int16_t x380 = INT16_MIN;
	volatile int32_t t94 = 18814138;

	t94 = (x377|((x378<=x379)<x380));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	volatile int64_t x382 = INT64_MIN;
	int32_t x383 = -6;
	uint64_t x384 = 56071781116LLU;
	static int32_t t95 = -119190;

	t95 = (x381|((x382<=x383)<x384));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = UINT64_MAX;
	int16_t x386 = -2046;
	volatile uint8_t x387 = 45U;
	int8_t x388 = -8;

	t96 = (x385|((x386<=x387)<x388));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x389 = 32310989LLU;
	volatile int8_t x390 = 28;
	int32_t x391 = -1;
	volatile uint64_t x392 = 24261LLU;

	t97 = (x389|((x390<=x391)<x392));

	if (t97 != 32310989LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int8_t x394 = -33;
	int16_t x395 = -1;
	volatile int16_t x396 = INT16_MAX;

	t98 = (x393|((x394<=x395)<x396));

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = 29U;
	volatile uint8_t x399 = 0U;
	volatile int16_t x400 = -1;
	int32_t t99 = -714965;

	t99 = (x397|((x398<=x399)<x400));

	if (t99 != 29) { NG(); } else { ; }
	
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

