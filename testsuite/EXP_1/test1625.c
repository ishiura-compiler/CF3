#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MIN;
int32_t x11 = -1;
static uint32_t x12 = 8303727U;
int32_t x23 = INT32_MIN;
volatile uint8_t x32 = UINT8_MAX;
int8_t x40 = INT8_MIN;
int32_t x52 = 3;
volatile int64_t x54 = INT64_MIN;
volatile uint32_t x56 = 29601899U;
uint32_t x62 = 1U;
volatile uint32_t x64 = 1084003055U;
volatile uint32_t t15 = 1U;
int8_t x70 = 8;
static int32_t t18 = 5;
int32_t x77 = -108;
int16_t x78 = 0;
static int64_t x82 = -1LL;
int8_t x87 = INT8_MAX;
static uint32_t x92 = 3273U;
volatile uint32_t t22 = 809163000U;
volatile int64_t t23 = INT64_MIN;
static volatile int64_t x97 = 133LL;
volatile int16_t x99 = INT16_MAX;
int16_t x102 = 8017;
volatile uint64_t x109 = 5292317286951029LLU;
int64_t x115 = 56627LL;
static int16_t x117 = INT16_MIN;
int32_t x123 = INT32_MIN;
static int32_t t32 = -44831;
int32_t t33 = -4;
static int16_t x138 = -1;
int64_t x143 = INT64_MIN;
volatile int64_t x144 = -1059948130286311912LL;
int64_t t35 = -202862546128808243LL;
volatile int32_t t37 = -6;
static int64_t x155 = -64335183045356LL;
int64_t x159 = INT64_MIN;
uint16_t x160 = 21U;
int16_t x161 = 0;
uint64_t x162 = 227743881886LLU;
int32_t x165 = -46547415;
uint16_t x168 = 37U;
static volatile int64_t t43 = 7821313LL;
int8_t x183 = INT8_MIN;
int64_t t49 = 1LL;
uint64_t x202 = UINT64_MAX;
uint8_t x204 = UINT8_MAX;
volatile int64_t x205 = -1LL;
uint32_t x208 = 0U;
int8_t x211 = 48;
int64_t x216 = -1LL;
static int64_t t53 = 1073954737922290LL;
static int32_t x224 = INT32_MIN;
int32_t x228 = INT32_MIN;
volatile uint64_t t59 = 12488292805LLU;
static int32_t t60 = -402474;
int16_t x252 = INT16_MIN;
uint32_t x253 = 559254U;
int16_t x255 = INT16_MAX;
int64_t x256 = -1LL;
volatile int32_t x261 = -1;
int64_t x268 = 250138389635LL;
volatile uint64_t t69 = UINT64_MAX;
static volatile int16_t x286 = -1;
int8_t x287 = INT8_MAX;
uint32_t x294 = 3706356U;
static uint16_t x298 = 514U;
static uint32_t t74 = 6U;
int16_t x305 = INT16_MIN;
int8_t x307 = INT8_MAX;
static volatile int8_t x310 = -7;
uint8_t x316 = 6U;
volatile int32_t t78 = 347;
volatile int32_t t79 = -4096057;
int8_t x321 = 1;
int8_t x324 = -1;
uint32_t x326 = 313786728U;
int16_t x327 = -1;
int64_t x336 = INT64_MAX;
int64_t x337 = -497331313LL;
uint64_t x338 = UINT64_MAX;
static volatile int64_t x343 = INT64_MAX;
static int32_t x345 = INT32_MAX;
static int16_t x347 = -116;
int64_t x348 = INT64_MIN;
volatile uint16_t x351 = 174U;
uint32_t x354 = UINT32_MAX;
static volatile int32_t t88 = -490;
uint8_t x357 = 0U;
uint64_t x365 = UINT64_MAX;
static int64_t x369 = -1LL;
static int16_t x375 = -20;
volatile int32_t x378 = INT32_MIN;
volatile int32_t t96 = -468405239;


void f0(void) {
	uint64_t x1 = 105368278673LLU;
	int16_t x2 = INT16_MIN;
	static volatile uint8_t x3 = 0U;
	volatile int64_t x4 = 68LL;
	volatile int64_t t0 = 209337100LL;

	t0 = (((x1<=x2)==x3)^x4);

	if (t0 != 68LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	static int16_t x6 = INT16_MIN;
	uint64_t x7 = UINT64_MAX;
	int64_t x8 = 0LL;
	int64_t t1 = 3664212267251258078LL;

	t1 = (((x5<=x6)==x7)^x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 16U;
	volatile uint32_t t2 = 2832U;

	t2 = (((x9<=x10)==x11)^x12);

	if (t2 != 8303727U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int8_t x14 = INT8_MIN;
	int8_t x15 = INT8_MIN;
	uint8_t x16 = 14U;
	volatile int32_t t3 = 148912788;

	t3 = (((x13<=x14)==x15)^x16);

	if (t3 != 14) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 18U;
	int32_t x18 = INT32_MAX;
	volatile int8_t x19 = 34;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = INT32_MIN;

	t4 = (((x17<=x18)==x19)^x20);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	volatile uint64_t x22 = 2331457530LLU;
	static int8_t x24 = INT8_MIN;
	int32_t t5 = 386;

	t5 = (((x21<=x22)==x23)^x24);

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 65U;
	int64_t x26 = INT64_MIN;
	int8_t x27 = -1;
	int64_t x28 = -1LL;
	volatile int64_t t6 = 8349175LL;

	t6 = (((x25<=x26)==x27)^x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = 1122U;
	int16_t x30 = 175;
	static volatile uint8_t x31 = 7U;
	int32_t t7 = 31345;

	t7 = (((x29<=x30)==x31)^x32);

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 3842465118675040LLU;
	static int16_t x34 = 13589;
	int64_t x35 = INT64_MAX;
	static volatile uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 688;

	t8 = (((x33<=x34)==x35)^x36);

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x37 = 146U;
	int8_t x38 = INT8_MIN;
	uint64_t x39 = UINT64_MAX;
	int32_t t9 = -7201000;

	t9 = (((x37<=x38)==x39)^x40);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -309605436;
	int32_t x42 = INT32_MIN;
	int32_t x43 = INT32_MAX;
	static uint16_t x44 = 1U;
	int32_t t10 = -434572942;

	t10 = (((x41<=x42)==x43)^x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int8_t x46 = INT8_MIN;
	int8_t x47 = -1;
	uint64_t x48 = 7964576260LLU;
	volatile uint64_t t11 = 24220603837LLU;

	t11 = (((x45<=x46)==x47)^x48);

	if (t11 != 7964576260LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1207417900072289588LL;
	static uint16_t x50 = UINT16_MAX;
	int8_t x51 = INT8_MIN;
	volatile int32_t t12 = -7107;

	t12 = (((x49<=x50)==x51)^x52);

	if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	static uint64_t x55 = 68925846411921LLU;
	uint32_t t13 = 127134058U;

	t13 = (((x53<=x54)==x55)^x56);

	if (t13 != 29601899U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	int32_t x58 = 63;
	int64_t x59 = 43024110633LL;
	int8_t x60 = INT8_MIN;
	static volatile int32_t t14 = 7363;

	t14 = (((x57<=x58)==x59)^x60);

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	static volatile int16_t x63 = -1;

	t15 = (((x61<=x62)==x63)^x64);

	if (t15 != 1084003055U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	static volatile int16_t x66 = INT16_MAX;
	int8_t x67 = 10;
	int16_t x68 = -1;
	static volatile int32_t t16 = -23708091;

	t16 = (((x65<=x66)==x67)^x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 9U;
	uint8_t x71 = UINT8_MAX;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = -825579270;

	t17 = (((x69<=x70)==x71)^x72);

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	static int16_t x74 = INT16_MAX;
	uint16_t x75 = 1U;
	int32_t x76 = INT32_MIN;

	t18 = (((x73<=x74)==x75)^x76);

	if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x79 = 645152249753700190LLU;
	int64_t x80 = 357215LL;
	static volatile int64_t t19 = -181475914LL;

	t19 = (((x77<=x78)==x79)^x80);

	if (t19 != 357215LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = UINT8_MAX;
	volatile uint8_t x83 = UINT8_MAX;
	volatile uint32_t x84 = UINT32_MAX;
	static volatile uint32_t t20 = UINT32_MAX;

	t20 = (((x81<=x82)==x83)^x84);

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 3062497346987695972LLU;
	uint64_t x86 = 65253278662LLU;
	int8_t x88 = INT8_MIN;
	int32_t t21 = -1;

	t21 = (((x85<=x86)==x87)^x88);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = -2;
	int32_t x90 = -1;
	static int16_t x91 = -2;

	t22 = (((x89<=x90)==x91)^x92);

	if (t22 != 3273U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = 0U;
	int32_t x94 = INT32_MIN;
	volatile int64_t x95 = 14914476091LL;
	int64_t x96 = INT64_MIN;

	t23 = (((x93<=x94)==x95)^x96);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x98 = 7507;
	volatile uint32_t x100 = UINT32_MAX;
	volatile uint32_t t24 = UINT32_MAX;

	t24 = (((x97<=x98)==x99)^x100);

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	int32_t x103 = INT32_MIN;
	static volatile uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = -1498;

	t25 = (((x101<=x102)==x103)^x104);

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = 4613U;
	static int64_t x106 = -3843952747655LL;
	int16_t x107 = -1;
	static uint32_t x108 = UINT32_MAX;
	volatile uint32_t t26 = UINT32_MAX;

	t26 = (((x105<=x106)==x107)^x108);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x110 = -1951517585905LL;
	uint8_t x111 = UINT8_MAX;
	static int32_t x112 = -13;
	volatile int32_t t27 = 810697749;

	t27 = (((x109<=x110)==x111)^x112);

	if (t27 != -13) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int16_t x114 = 30;
	static volatile uint8_t x116 = 3U;
	volatile int32_t t28 = 236;

	t28 = (((x113<=x114)==x115)^x116);

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x118 = INT8_MIN;
	int8_t x119 = -7;
	uint8_t x120 = 36U;
	int32_t t29 = -112;

	t29 = (((x117<=x118)==x119)^x120);

	if (t29 != 36) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MIN;
	int16_t x122 = 7484;
	int16_t x124 = -1;
	int32_t t30 = 80124302;

	t30 = (((x121<=x122)==x123)^x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	volatile uint16_t x126 = 4U;
	static uint32_t x127 = UINT32_MAX;
	static uint8_t x128 = 10U;
	volatile int32_t t31 = 399169137;

	t31 = (((x125<=x126)==x127)^x128);

	if (t31 != 10) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int64_t x130 = INT64_MAX;
	int64_t x131 = -14552418110893723LL;
	static int32_t x132 = -1;

	t32 = (((x129<=x130)==x131)^x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = INT16_MAX;
	uint8_t x134 = 59U;
	int32_t x135 = -1;
	uint8_t x136 = UINT8_MAX;

	t33 = (((x133<=x134)==x135)^x136);

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = 1682;
	int64_t x139 = INT64_MIN;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = INT32_MIN;

	t34 = (((x137<=x138)==x139)^x140);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x141 = UINT8_MAX;
	int64_t x142 = INT64_MAX;

	t35 = (((x141<=x142)==x143)^x144);

	if (t35 != -1059948130286311912LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = 212586657LL;
	static int8_t x146 = -1;
	volatile int64_t x147 = -17623905067458LL;
	int64_t x148 = -1LL;
	volatile int64_t t36 = -182361068LL;

	t36 = (((x145<=x146)==x147)^x148);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	static int8_t x150 = -1;
	int8_t x151 = 28;
	static int32_t x152 = -2648846;

	t37 = (((x149<=x150)==x151)^x152);

	if (t37 != -2648846) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	int32_t x154 = INT32_MIN;
	int16_t x156 = 0;
	int32_t t38 = -1;

	t38 = (((x153<=x154)==x155)^x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 1U;
	static volatile int64_t x158 = INT64_MAX;
	int32_t t39 = -9;

	t39 = (((x157<=x158)==x159)^x160);

	if (t39 != 21) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x163 = INT8_MAX;
	int8_t x164 = 9;
	static volatile int32_t t40 = 95642816;

	t40 = (((x161<=x162)==x163)^x164);

	if (t40 != 9) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x166 = 13U;
	int64_t x167 = INT64_MIN;
	volatile int32_t t41 = 14043;

	t41 = (((x165<=x166)==x167)^x168);

	if (t41 != 37) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	static int32_t x170 = INT32_MAX;
	int32_t x171 = -1;
	static int64_t x172 = INT64_MIN;
	int64_t t42 = INT64_MIN;

	t42 = (((x169<=x170)==x171)^x172);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MIN;
	static int8_t x174 = INT8_MIN;
	int8_t x175 = -27;
	int64_t x176 = 338LL;

	t43 = (((x173<=x174)==x175)^x176);

	if (t43 != 338LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -15;
	uint64_t x178 = 1207129382880LLU;
	uint16_t x179 = 1789U;
	int32_t x180 = -1;
	int32_t t44 = -1;

	t44 = (((x177<=x178)==x179)^x180);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = UINT8_MAX;
	int64_t x182 = -1LL;
	int64_t x184 = -1LL;
	int64_t t45 = 1LL;

	t45 = (((x181<=x182)==x183)^x184);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = 90LL;
	int8_t x186 = 1;
	static uint16_t x187 = 23304U;
	uint16_t x188 = 2503U;
	int32_t t46 = -240;

	t46 = (((x185<=x186)==x187)^x188);

	if (t46 != 2503) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	int64_t x190 = INT64_MIN;
	int8_t x191 = -1;
	static int8_t x192 = INT8_MIN;
	int32_t t47 = -6024;

	t47 = (((x189<=x190)==x191)^x192);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	static int64_t x194 = 3968385201LL;
	int32_t x195 = 13827168;
	volatile uint64_t x196 = 1320746738598053LLU;
	volatile uint64_t t48 = 456071077556333272LLU;

	t48 = (((x193<=x194)==x195)^x196);

	if (t48 != 1320746738598053LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	uint16_t x198 = 150U;
	static int64_t x199 = 5218508579LL;
	volatile int64_t x200 = -3693020755244515LL;

	t49 = (((x197<=x198)==x199)^x200);

	if (t49 != -3693020755244515LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = UINT8_MAX;
	uint16_t x203 = 170U;
	volatile int32_t t50 = 30708851;

	t50 = (((x201<=x202)==x203)^x204);

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x206 = 1U;
	int32_t x207 = INT32_MAX;
	volatile uint32_t t51 = 106762045U;

	t51 = (((x205<=x206)==x207)^x208);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	uint16_t x210 = UINT16_MAX;
	static int16_t x212 = INT16_MIN;
	int32_t t52 = 683628;

	t52 = (((x209<=x210)==x211)^x212);

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	static int64_t x214 = INT64_MIN;
	static int16_t x215 = 4077;

	t53 = (((x213<=x214)==x215)^x216);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = INT64_MAX;
	int64_t x218 = INT64_MIN;
	int64_t x219 = 14576637LL;
	static volatile int16_t x220 = -6;
	volatile int32_t t54 = -5643111;

	t54 = (((x217<=x218)==x219)^x220);

	if (t54 != -6) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -3;
	int32_t x222 = -5824990;
	int64_t x223 = INT64_MAX;
	volatile int32_t t55 = INT32_MIN;

	t55 = (((x221<=x222)==x223)^x224);

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	uint32_t x226 = UINT32_MAX;
	volatile uint32_t x227 = UINT32_MAX;
	int32_t t56 = INT32_MIN;

	t56 = (((x225<=x226)==x227)^x228);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 3057;
	uint8_t x230 = 5U;
	uint32_t x231 = UINT32_MAX;
	uint16_t x232 = 446U;
	static int32_t t57 = 0;

	t57 = (((x229<=x230)==x231)^x232);

	if (t57 != 446) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = 3214539496LLU;
	int16_t x234 = -247;
	static volatile uint16_t x235 = UINT16_MAX;
	static int16_t x236 = -5;
	volatile int32_t t58 = 13792;

	t58 = (((x233<=x234)==x235)^x236);

	if (t58 != -5) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	static int64_t x238 = -18LL;
	static uint16_t x239 = UINT16_MAX;
	uint64_t x240 = 7LLU;

	t59 = (((x237<=x238)==x239)^x240);

	if (t59 != 7LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = INT8_MIN;
	static volatile int32_t x242 = -523321546;
	uint32_t x243 = UINT32_MAX;
	int32_t x244 = -1;

	t60 = (((x241<=x242)==x243)^x244);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	int32_t x246 = INT32_MIN;
	int8_t x247 = INT8_MAX;
	volatile int64_t x248 = INT64_MIN;
	int64_t t61 = INT64_MIN;

	t61 = (((x245<=x246)==x247)^x248);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = 134243171LLU;
	int16_t x250 = INT16_MAX;
	volatile uint16_t x251 = 268U;
	int32_t t62 = 864782607;

	t62 = (((x249<=x250)==x251)^x252);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x254 = -560297;
	volatile int64_t t63 = 199LL;

	t63 = (((x253<=x254)==x255)^x256);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = -1;
	int16_t x258 = -1;
	uint8_t x259 = 3U;
	int8_t x260 = INT8_MIN;
	volatile int32_t t64 = -20525;

	t64 = (((x257<=x258)==x259)^x260);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x262 = UINT64_MAX;
	uint8_t x263 = 38U;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = 40159563;

	t65 = (((x261<=x262)==x263)^x264);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 11870367529634LLU;
	volatile int8_t x266 = INT8_MIN;
	uint64_t x267 = 196134LLU;
	int64_t t66 = 15661512LL;

	t66 = (((x265<=x266)==x267)^x268);

	if (t66 != 250138389635LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MIN;
	int8_t x271 = INT8_MIN;
	uint64_t x272 = UINT64_MAX;
	uint64_t t67 = UINT64_MAX;

	t67 = (((x269<=x270)==x271)^x272);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	volatile int32_t x274 = INT32_MIN;
	uint8_t x275 = 9U;
	int64_t x276 = INT64_MAX;
	static int64_t t68 = INT64_MAX;

	t68 = (((x273<=x274)==x275)^x276);

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = 0;
	int64_t x278 = 5LL;
	uint16_t x279 = 20U;
	uint64_t x280 = UINT64_MAX;

	t69 = (((x277<=x278)==x279)^x280);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = 0U;
	static volatile int64_t x282 = -1LL;
	static volatile int32_t x283 = -1;
	int8_t x284 = -3;
	volatile int32_t t70 = 115450745;

	t70 = (((x281<=x282)==x283)^x284);

	if (t70 != -3) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = INT64_MAX;
	int8_t x288 = INT8_MIN;
	static volatile int32_t t71 = 17742219;

	t71 = (((x285<=x286)==x287)^x288);

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	uint16_t x290 = 323U;
	int32_t x291 = INT32_MIN;
	uint32_t x292 = 258269478U;
	static volatile uint32_t t72 = 35618225U;

	t72 = (((x289<=x290)==x291)^x292);

	if (t72 != 258269478U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MIN;
	int64_t x295 = -14024289LL;
	static int16_t x296 = INT16_MAX;
	static int32_t t73 = 6156;

	t73 = (((x293<=x294)==x295)^x296);

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 145U;
	static uint8_t x299 = 1U;
	static uint32_t x300 = 511U;

	t74 = (((x297<=x298)==x299)^x300);

	if (t74 != 510U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -24;
	int16_t x302 = INT16_MIN;
	int32_t x303 = INT32_MAX;
	static int64_t x304 = INT64_MAX;
	volatile int64_t t75 = INT64_MAX;

	t75 = (((x301<=x302)==x303)^x304);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x306 = -12;
	int8_t x308 = -8;
	volatile int32_t t76 = -1521;

	t76 = (((x305<=x306)==x307)^x308);

	if (t76 != -8) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	uint8_t x311 = UINT8_MAX;
	int32_t x312 = INT32_MIN;
	int32_t t77 = INT32_MIN;

	t77 = (((x309<=x310)==x311)^x312);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 27U;
	uint64_t x314 = 95465686993409250LLU;
	int64_t x315 = INT64_MIN;

	t78 = (((x313<=x314)==x315)^x316);

	if (t78 != 6) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MAX;
	uint32_t x318 = 6U;
	int64_t x319 = -1LL;
	static uint16_t x320 = UINT16_MAX;

	t79 = (((x317<=x318)==x319)^x320);

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x322 = INT64_MIN;
	static volatile int8_t x323 = -3;
	int32_t t80 = 7669;

	t80 = (((x321<=x322)==x323)^x324);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 1U;
	int32_t x328 = -1;
	static volatile int32_t t81 = 21964984;

	t81 = (((x325<=x326)==x327)^x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = UINT8_MAX;
	int16_t x330 = -5432;
	uint32_t x331 = 221U;
	int8_t x332 = 20;
	volatile int32_t t82 = 218;

	t82 = (((x329<=x330)==x331)^x332);

	if (t82 != 20) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	static int32_t x334 = INT32_MIN;
	uint64_t x335 = 389101514520923477LLU;
	volatile int64_t t83 = INT64_MAX;

	t83 = (((x333<=x334)==x335)^x336);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x339 = 64441044719LL;
	static uint32_t x340 = 11677970U;
	volatile uint32_t t84 = 3180U;

	t84 = (((x337<=x338)==x339)^x340);

	if (t84 != 11677970U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 101U;
	uint16_t x342 = 4881U;
	static int8_t x344 = 56;
	volatile int32_t t85 = -48;

	t85 = (((x341<=x342)==x343)^x344);

	if (t85 != 56) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x346 = -1;
	int64_t t86 = INT64_MIN;

	t86 = (((x345<=x346)==x347)^x348);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 4583632U;
	int64_t x350 = -802536LL;
	static int64_t x352 = 119LL;
	volatile int64_t t87 = -50624LL;

	t87 = (((x349<=x350)==x351)^x352);

	if (t87 != 119LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	volatile int16_t x355 = 4;
	uint8_t x356 = 40U;

	t88 = (((x353<=x354)==x355)^x356);

	if (t88 != 40) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x358 = UINT16_MAX;
	static int8_t x359 = -1;
	int8_t x360 = -1;
	static volatile int32_t t89 = 1455;

	t89 = (((x357<=x358)==x359)^x360);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	uint64_t x362 = 2116934571004675571LLU;
	static int8_t x363 = -11;
	uint16_t x364 = 13407U;
	int32_t t90 = -7;

	t90 = (((x361<=x362)==x363)^x364);

	if (t90 != 13407) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = INT8_MIN;
	int32_t x367 = 135259206;
	static int8_t x368 = -1;
	int32_t t91 = -506555;

	t91 = (((x365<=x366)==x367)^x368);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = INT16_MIN;
	static int16_t x371 = INT16_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t92 = INT32_MIN;

	t92 = (((x369<=x370)==x371)^x372);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -1LL;
	uint64_t x374 = UINT64_MAX;
	int32_t x376 = INT32_MAX;
	static volatile int32_t t93 = INT32_MAX;

	t93 = (((x373<=x374)==x375)^x376);

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -2;
	int16_t x379 = -1;
	int32_t x380 = -20766;
	static int32_t t94 = -92968602;

	t94 = (((x377<=x378)==x379)^x380);

	if (t94 != -20766) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	uint16_t x382 = 21U;
	int64_t x383 = 99013641026LL;
	uint32_t x384 = UINT32_MAX;
	static uint32_t t95 = UINT32_MAX;

	t95 = (((x381<=x382)==x383)^x384);

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 40479491LL;
	int32_t x386 = -1;
	volatile int8_t x387 = -1;
	int8_t x388 = -1;

	t96 = (((x385<=x386)==x387)^x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = -1;
	int8_t x390 = INT8_MIN;
	volatile int16_t x391 = -1;
	int8_t x392 = INT8_MIN;
	static volatile int32_t t97 = -14181;

	t97 = (((x389<=x390)==x391)^x392);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 47;
	uint8_t x394 = UINT8_MAX;
	volatile int32_t x395 = INT32_MIN;
	int64_t x396 = INT64_MAX;
	static volatile int64_t t98 = INT64_MAX;

	t98 = (((x393<=x394)==x395)^x396);

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = 13850949LL;
	uint16_t x398 = 12810U;
	static volatile int32_t x399 = -66031402;
	volatile int32_t x400 = -1;
	volatile int32_t t99 = -59613112;

	t99 = (((x397<=x398)==x399)^x400);

	if (t99 != -1) { NG(); } else { ; }
	
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

