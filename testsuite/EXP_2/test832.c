#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 109676535165841136LLU;
int8_t x5 = INT8_MAX;
int16_t x10 = 0;
static volatile int64_t t3 = INT64_MIN;
volatile uint64_t x17 = UINT64_MAX;
volatile uint8_t x18 = UINT8_MAX;
static int8_t x20 = INT8_MIN;
volatile int8_t x24 = -15;
static uint64_t x27 = 9917LLU;
int16_t x35 = INT16_MIN;
int32_t x44 = INT32_MAX;
static int16_t x45 = INT16_MIN;
uint32_t x51 = UINT32_MAX;
static int8_t x53 = -7;
int32_t x55 = 70;
int32_t x59 = INT32_MAX;
uint64_t t16 = 4LLU;
uint64_t x71 = UINT64_MAX;
volatile uint64_t t17 = 4668444849LLU;
static uint64_t x73 = UINT64_MAX;
int16_t x78 = INT16_MIN;
int8_t x79 = INT8_MIN;
uint16_t x81 = 807U;
static int64_t x91 = INT64_MIN;
uint64_t x92 = 208534498589626LLU;
int64_t x100 = INT64_MIN;
int64_t t24 = -23220038725LL;
volatile uint32_t x104 = 39981810U;
static int64_t x106 = -467880LL;
static int32_t x109 = INT32_MIN;
int16_t x110 = INT16_MAX;
volatile int32_t t27 = 37;
volatile int8_t x113 = 0;
int64_t x117 = INT64_MAX;
volatile uint64_t x120 = 481178932634LLU;
volatile uint64_t t29 = 1LLU;
static uint64_t x121 = 102432LLU;
volatile int8_t x138 = INT8_MIN;
int16_t x140 = 598;
int64_t t34 = 4284079724LL;
int32_t x152 = INT32_MAX;
static volatile uint64_t t37 = 852228401361LLU;
int64_t t40 = 3615669762194759LL;
uint8_t x169 = 0U;
int16_t x171 = INT16_MIN;
int8_t x177 = INT8_MIN;
uint8_t x179 = UINT8_MAX;
int32_t x181 = 23030562;
int32_t x187 = INT32_MIN;
static volatile uint32_t t46 = 747U;
volatile int8_t x193 = -1;
int16_t x195 = INT16_MIN;
int16_t x200 = INT16_MIN;
static volatile uint32_t t49 = 1U;
volatile uint64_t x208 = UINT64_MAX;
uint8_t x209 = 119U;
uint32_t x211 = UINT32_MAX;
int16_t x215 = -230;
uint16_t x221 = UINT16_MAX;
volatile uint64_t t59 = 275710323351317LLU;
volatile int32_t t60 = -326843;
int8_t x246 = -1;
uint8_t x249 = 118U;
volatile uint16_t x252 = 1189U;
uint64_t x258 = UINT64_MAX;
int32_t x260 = INT32_MAX;
static int32_t x266 = INT32_MAX;
int32_t x268 = 47;
uint8_t x273 = 46U;
volatile int32_t t67 = -966;
uint64_t x278 = 256465227870LLU;
volatile uint8_t x282 = 1U;
uint64_t x294 = 731519409087696LLU;
int8_t x296 = INT8_MIN;
int8_t x298 = INT8_MIN;
uint8_t x300 = UINT8_MAX;
int8_t x309 = -1;
int64_t t76 = 2LL;
int8_t x316 = INT8_MAX;
uint64_t t79 = 3LLU;
static uint32_t x325 = 16088U;
int64_t x326 = -1LL;
uint8_t x336 = UINT8_MAX;
int8_t x342 = INT8_MIN;
volatile uint16_t x344 = 165U;
static int8_t x348 = -1;
static int32_t x350 = INT32_MIN;
int8_t x355 = 42;
volatile int32_t t87 = -4287;
static int8_t x358 = INT8_MIN;
volatile uint64_t t88 = 4239763897662234507LLU;
uint64_t x362 = 2058343835LLU;
int16_t x363 = INT16_MAX;
uint32_t x364 = UINT32_MAX;
uint64_t t89 = 160975193LLU;
int32_t x366 = INT32_MIN;
uint64_t x367 = UINT64_MAX;
volatile uint64_t x368 = 282852993965650996LLU;
uint64_t x372 = 6LLU;
uint64_t t91 = 486763715173LLU;
volatile int32_t x374 = INT32_MIN;
volatile uint8_t x376 = 1U;
int64_t x379 = -1LL;
volatile int8_t x381 = INT8_MIN;
int8_t x384 = 2;
static volatile int32_t t96 = -8127056;
static int64_t x393 = INT64_MIN;
uint8_t x395 = UINT8_MAX;
int32_t x400 = 41;
uint16_t x403 = UINT16_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile uint64_t x2 = 14142419579950LLU;
	int8_t x3 = INT8_MAX;
	int8_t x4 = INT8_MIN;

	t0 = ((x1|(x2%x3))^x4);

	if (t0 != 2147483621LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 78638LLU;
	volatile int8_t x7 = INT8_MAX;
	static uint16_t x8 = 454U;
	volatile uint64_t t1 = 11LLU;

	t1 = ((x5|(x6%x7))^x8);

	if (t1 != 441LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int64_t x11 = INT64_MIN;
	int64_t x12 = INT64_MAX;
	int64_t t2 = -963302190389736LL;

	t2 = ((x9|(x10%x11))^x12);

	if (t2 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	static volatile uint16_t x14 = UINT16_MAX;
	static int32_t x15 = -863831;
	int32_t x16 = -1;

	t3 = ((x13|(x14%x15))^x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x19 = UINT32_MAX;
	uint64_t t4 = 8657605LLU;

	t4 = ((x17|(x18%x19))^x20);

	if (t4 != 127LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -240591632191LL;
	volatile int64_t x22 = -30254243322507398LL;
	uint64_t x23 = UINT64_MAX;
	static uint64_t t5 = 573LLU;

	t5 = ((x21|(x22%x23))^x24);

	if (t5 != 68721618954LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -33198;
	int16_t x26 = INT16_MIN;
	static volatile int16_t x28 = 14529;
	volatile uint64_t t6 = 15314LLU;

	t6 = ((x25|(x26%x27))^x28);

	if (t6 != 18446744073709504150LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 27U;
	uint64_t x30 = UINT64_MAX;
	int16_t x31 = INT16_MIN;
	static volatile uint16_t x32 = 1275U;
	volatile uint64_t t7 = 260450LLU;

	t7 = ((x29|(x30%x31))^x32);

	if (t7 != 31492LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 41701413860938252LL;
	uint64_t x34 = UINT64_MAX;
	static int16_t x36 = INT16_MAX;
	static volatile uint64_t t8 = 17188485612644LLU;

	t8 = ((x33|(x34%x35))^x36);

	if (t8 != 41701413860933632LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 215504177U;
	static int64_t x38 = INT64_MIN;
	static uint16_t x39 = UINT16_MAX;
	int8_t x40 = INT8_MAX;
	volatile int64_t t9 = -161969885525686955LL;

	t9 = ((x37|(x38%x39))^x40);

	if (t9 != -10930LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	int32_t x42 = INT32_MIN;
	int16_t x43 = INT16_MIN;
	uint64_t t10 = 47028533LLU;

	t10 = ((x41|(x42%x43))^x44);

	if (t10 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = UINT8_MAX;
	volatile uint32_t x47 = 233841814U;
	volatile uint32_t x48 = UINT32_MAX;
	volatile uint32_t t11 = 7U;

	t11 = ((x45|(x46%x47))^x48);

	if (t11 != 32512U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	int64_t x50 = INT64_MAX;
	volatile int32_t x52 = INT32_MIN;
	volatile int64_t t12 = -12616LL;

	t12 = ((x49|(x50%x51))^x52);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x54 = -1LL;
	int64_t x56 = INT64_MAX;
	volatile int64_t t13 = INT64_MIN;

	t13 = ((x53|(x54%x55))^x56);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 1;
	int64_t x58 = INT64_MIN;
	int64_t x60 = 4548LL;
	int64_t t14 = 1178LL;

	t14 = ((x57|(x58%x59))^x60);

	if (t14 != -4549LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 3U;
	int16_t x62 = -1;
	int64_t x63 = 4LL;
	int16_t x64 = -210;
	static int64_t t15 = -123614924789361333LL;

	t15 = ((x61|(x62%x63))^x64);

	if (t15 != 209LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	uint64_t x66 = UINT64_MAX;
	static int8_t x67 = INT8_MIN;
	static int64_t x68 = -1LL;

	t16 = ((x65|(x66%x67))^x68);

	if (t16 != 2147483520LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -7013554989LL;
	int8_t x70 = INT8_MIN;
	static uint16_t x72 = UINT16_MAX;

	t17 = ((x69|(x70%x71))^x72);

	if (t17 != 18446744073709486124LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = 752U;
	int64_t x75 = INT64_MIN;
	uint64_t x76 = 14LLU;
	static volatile uint64_t t18 = 37500LLU;

	t18 = ((x73|(x74%x75))^x76);

	if (t18 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = -1LL;
	int16_t x80 = INT16_MIN;
	volatile int64_t t19 = -34521048842108LL;

	t19 = ((x77|(x78%x79))^x80);

	if (t19 != 32767LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = UINT32_MAX;
	static int16_t x83 = INT16_MIN;
	volatile int16_t x84 = INT16_MIN;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = ((x81|(x82%x83))^x84);

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int32_t x86 = INT32_MIN;
	static int32_t x87 = INT32_MIN;
	int64_t x88 = 7647488859469672LL;
	static int64_t t21 = 104703228685LL;

	t21 = ((x85|(x86%x87))^x88);

	if (t21 != -7647488829524120LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MIN;
	uint8_t x90 = UINT8_MAX;
	volatile uint64_t t22 = 66722002LLU;

	t22 = ((x89|(x90%x91))^x92);

	if (t22 != 18446535539210959685LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 1;
	volatile uint32_t x94 = 781229U;
	static int16_t x95 = -1;
	int8_t x96 = -46;
	static volatile uint32_t t23 = 866U;

	t23 = ((x93|(x94%x95))^x96);

	if (t23 != 4294186111U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -47;
	uint32_t x98 = 102U;
	static int32_t x99 = INT32_MAX;

	t24 = ((x97|(x98%x99))^x100);

	if (t24 != -9223372032559808521LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 7271U;
	int32_t x102 = INT32_MIN;
	int32_t x103 = -1;
	volatile uint32_t t25 = 8259U;

	t25 = ((x101|(x102%x103))^x104);

	if (t25 != 39980693U) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MIN;
	volatile int8_t x107 = INT8_MIN;
	uint64_t x108 = UINT64_MAX;
	uint64_t t26 = 5LLU;

	t26 = ((x105|(x106%x107))^x108);

	if (t26 != 39LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x111 = 10U;
	int16_t x112 = INT16_MIN;

	t27 = ((x109|(x110%x111))^x112);

	if (t27 != 2147450887) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = INT32_MAX;
	uint64_t x115 = 20710632141LLU;
	volatile uint16_t x116 = UINT16_MAX;
	uint64_t t28 = 220212862790255LLU;

	t28 = ((x113|(x114%x115))^x116);

	if (t28 != 2147418112LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x118 = INT16_MIN;
	int64_t x119 = -1LL;

	t29 = ((x117|(x118%x119))^x120);

	if (t29 != 9223371555675843173LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MAX;
	uint16_t x123 = 65U;
	int32_t x124 = INT32_MIN;
	uint64_t t30 = 270230629LLU;

	t30 = ((x121|(x122%x123))^x124);

	if (t30 != 18446744071562170407LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int64_t x126 = INT64_MIN;
	int32_t x127 = -250012483;
	int32_t x128 = -1;
	int64_t t31 = 295232292LL;

	t31 = ((x125|(x126%x127))^x128);

	if (t31 != 84LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 46U;
	int16_t x130 = INT16_MIN;
	int32_t x131 = INT32_MIN;
	volatile int64_t x132 = -1LL;
	int64_t t32 = 621238226289923151LL;

	t32 = ((x129|(x130%x131))^x132);

	if (t32 != 32721LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x133 = -1;
	int64_t x134 = 379448506415453657LL;
	static uint64_t x135 = UINT64_MAX;
	uint32_t x136 = 15U;
	uint64_t t33 = 1345692LLU;

	t33 = ((x133|(x134%x135))^x136);

	if (t33 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 66298U;
	static int64_t x139 = INT64_MIN;

	t34 = ((x137|(x138%x139))^x140);

	if (t34 != -596LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int32_t x142 = 14292531;
	int64_t x143 = -2380661389603429897LL;
	volatile int8_t x144 = INT8_MIN;
	int64_t t35 = -11367674159837LL;

	t35 = ((x141|(x142%x143))^x144);

	if (t35 != 127LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 243949430U;
	uint8_t x146 = UINT8_MAX;
	int16_t x147 = INT16_MAX;
	int16_t x148 = 700;
	volatile uint32_t t36 = 88U;

	t36 = ((x145|(x146%x147))^x148);

	if (t36 != 243948867U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	uint64_t x150 = UINT64_MAX;
	int64_t x151 = INT64_MIN;

	t37 = ((x149|(x150%x151))^x152);

	if (t37 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x153 = 39844943195082LLU;
	int64_t x154 = -11207082LL;
	int32_t x155 = 1;
	static volatile uint16_t x156 = UINT16_MAX;
	uint64_t t38 = 12390443LLU;

	t38 = ((x153|(x154%x155))^x156);

	if (t38 != 39844943205429LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 96266458156032381LLU;
	int16_t x158 = 209;
	volatile int16_t x159 = 1;
	static int16_t x160 = 731;
	static uint64_t t39 = 80073107999844725LLU;

	t39 = ((x157|(x158%x159))^x160);

	if (t39 != 96266458156032934LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	int32_t x162 = -1;
	static volatile int64_t x163 = -1LL;
	static uint32_t x164 = 13U;

	t40 = ((x161|(x162%x163))^x164);

	if (t40 != 65522LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 4U;
	volatile int32_t x166 = -1;
	int8_t x167 = 5;
	static uint16_t x168 = 143U;
	static int32_t t41 = -14;

	t41 = ((x165|(x166%x167))^x168);

	if (t41 != -144) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = INT16_MIN;
	uint64_t x172 = 3773245LLU;
	uint64_t t42 = 9309585363LLU;

	t42 = ((x169|(x170%x171))^x172);

	if (t42 != 3773245LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x173 = 3402468U;
	int32_t x174 = -1;
	static int16_t x175 = 1;
	int16_t x176 = 1;
	uint32_t t43 = 9356U;

	t43 = ((x173|(x174%x175))^x176);

	if (t43 != 3402469U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x178 = -1LL;
	int16_t x180 = INT16_MIN;
	volatile int64_t t44 = -44700236LL;

	t44 = ((x177|(x178%x179))^x180);

	if (t44 != 32767LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = -1;
	static int64_t x183 = INT64_MAX;
	uint32_t x184 = 75853247U;
	static int64_t t45 = -38276354909841LL;

	t45 = ((x181|(x182%x183))^x184);

	if (t45 != -75853248LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	int32_t x186 = 101758024;
	uint32_t x188 = UINT32_MAX;

	t46 = ((x185|(x186%x187))^x188);

	if (t46 != 4193189888U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 124U;
	static uint8_t x190 = 5U;
	int64_t x191 = INT64_MAX;
	uint64_t x192 = 63724771LLU;
	volatile uint64_t t47 = 13656786330239LLU;

	t47 = ((x189|(x190%x191))^x192);

	if (t47 != 63724702LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = 1;
	uint32_t x196 = 44962532U;
	uint32_t t48 = 65342U;

	t48 = ((x193|(x194%x195))^x196);

	if (t48 != 4250004763U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x197 = -3;
	static uint32_t x198 = 997U;
	static int32_t x199 = INT32_MIN;

	t49 = ((x197|(x198%x199))^x200);

	if (t49 != 32765U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = 16U;
	uint64_t x202 = UINT64_MAX;
	int64_t x203 = INT64_MIN;
	uint16_t x204 = 2U;
	uint64_t t50 = 11340562443353536LLU;

	t50 = ((x201|(x202%x203))^x204);

	if (t50 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 0;
	int8_t x206 = -1;
	volatile uint64_t x207 = 283LLU;
	volatile uint64_t t51 = 7417079546LLU;

	t51 = ((x205|(x206%x207))^x208);

	if (t51 != 18446744073709551376LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = -1;
	uint64_t x212 = 61091559617311LLU;
	static uint64_t t52 = 30287LLU;

	t52 = ((x209|(x210%x211))^x212);

	if (t52 != 61091559617384LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	int64_t x214 = -1LL;
	uint16_t x216 = 19U;
	int64_t t53 = -37179221464996018LL;

	t53 = ((x213|(x214%x215))^x216);

	if (t53 != -20LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	uint64_t x218 = 49LLU;
	volatile uint32_t x219 = UINT32_MAX;
	static uint64_t x220 = 0LLU;
	uint64_t t54 = 36832529540512078LLU;

	t54 = ((x217|(x218%x219))^x220);

	if (t54 != 9223372036854775857LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = INT8_MIN;
	int64_t x223 = INT64_MIN;
	volatile uint8_t x224 = 26U;
	volatile int64_t t55 = 10089630504LL;

	t55 = ((x221|(x222%x223))^x224);

	if (t55 != -27LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x225 = 4073U;
	volatile uint8_t x226 = 103U;
	volatile uint32_t x227 = UINT32_MAX;
	int32_t x228 = INT32_MAX;
	static volatile uint32_t t56 = 19733400U;

	t56 = ((x225|(x226%x227))^x228);

	if (t56 != 2147479568U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -2;
	volatile uint32_t x230 = 5U;
	int64_t x231 = -152LL;
	volatile int32_t x232 = -1;
	int64_t t57 = 13LL;

	t57 = ((x229|(x230%x231))^x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	static volatile int32_t x234 = INT32_MIN;
	volatile int32_t x235 = INT32_MIN;
	uint16_t x236 = UINT16_MAX;
	int32_t t58 = 13199424;

	t58 = ((x233|(x234%x235))^x236);

	if (t58 != 65408) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	volatile uint16_t x238 = 3U;
	uint64_t x239 = UINT64_MAX;
	uint64_t x240 = 1983002023381142016LLU;

	t59 = ((x237|(x238%x239))^x240);

	if (t59 != 16463742050328409599LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MAX;
	int32_t x242 = INT32_MAX;
	volatile int16_t x243 = INT16_MIN;
	int8_t x244 = 1;

	t60 = ((x241|(x242%x243))^x244);

	if (t60 != 32766) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 0;
	int64_t x247 = INT64_MAX;
	volatile int16_t x248 = -1;
	static int64_t t61 = 15872662LL;

	t61 = ((x245|(x246%x247))^x248);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x250 = INT8_MAX;
	volatile int64_t x251 = INT64_MAX;
	volatile int64_t t62 = 1LL;

	t62 = ((x249|(x250%x251))^x252);

	if (t62 != 1242LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	int8_t x254 = 21;
	uint64_t x255 = 1897008159LLU;
	static int16_t x256 = -850;
	uint64_t t63 = 34431873487844243LLU;

	t63 = ((x253|(x254%x255))^x256);

	if (t63 != 18446744069414585169LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 14U;
	uint8_t x259 = 84U;
	volatile uint64_t t64 = 88LLU;

	t64 = ((x257|(x258%x259))^x260);

	if (t64 != 2147483632LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = -1;
	int64_t x267 = INT64_MAX;
	int64_t t65 = 1LL;

	t65 = ((x265|(x266%x267))^x268);

	if (t65 != -48LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MIN;
	uint32_t x270 = 2513U;
	uint32_t x271 = 477142U;
	volatile int32_t x272 = -496145529;
	uint32_t t66 = 8054U;

	t66 = ((x269|(x270%x271))^x272);

	if (t66 != 496145494U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x274 = 14U;
	static int16_t x275 = INT16_MIN;
	int8_t x276 = -1;

	t67 = ((x273|(x274%x275))^x276);

	if (t67 != -47) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = -1;
	int8_t x279 = INT8_MIN;
	volatile int16_t x280 = INT16_MIN;
	uint64_t t68 = 176602701LLU;

	t68 = ((x277|(x278%x279))^x280);

	if (t68 != 32767LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = INT32_MIN;
	uint32_t x283 = 300U;
	uint32_t x284 = 3563329U;
	volatile uint32_t t69 = 4908U;

	t69 = ((x281|(x282%x283))^x284);

	if (t69 != 2151046976U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = 3446264LL;
	int16_t x286 = -1;
	int8_t x287 = INT8_MIN;
	int64_t x288 = 7355076390783LL;
	volatile int64_t t70 = 933594586318881365LL;

	t70 = ((x285|(x286%x287))^x288);

	if (t70 != -7355076390784LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = INT32_MAX;
	int8_t x290 = INT8_MIN;
	int16_t x291 = 1;
	uint64_t x292 = UINT64_MAX;
	uint64_t t71 = 160LLU;

	t71 = ((x289|(x290%x291))^x292);

	if (t71 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x293 = INT8_MIN;
	uint32_t x295 = 200U;
	volatile uint64_t t72 = 129810LLU;

	t72 = ((x293|(x294%x295))^x296);

	if (t72 != 96LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x297 = 0U;
	volatile uint16_t x299 = 12515U;
	volatile int32_t t73 = -429;

	t73 = ((x297|(x298%x299))^x300);

	if (t73 != -129) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x301 = 464051150201LLU;
	uint8_t x302 = 0U;
	static int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MIN;
	volatile uint64_t t74 = 170938LLU;

	t74 = ((x301|(x302%x303))^x304);

	if (t74 != 18446743609658401529LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = -1;
	static uint16_t x306 = UINT16_MAX;
	int32_t x307 = 231319528;
	uint8_t x308 = 1U;
	int32_t t75 = -55246;

	t75 = ((x305|(x306%x307))^x308);

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x310 = INT32_MIN;
	int64_t x311 = INT64_MIN;
	static volatile int8_t x312 = INT8_MIN;

	t76 = ((x309|(x310%x311))^x312);

	if (t76 != 127LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = INT8_MIN;
	static uint8_t x314 = UINT8_MAX;
	uint64_t x315 = UINT64_MAX;
	uint64_t t77 = 573768766LLU;

	t77 = ((x313|(x314%x315))^x316);

	if (t77 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = -1LL;
	int16_t x318 = -1;
	volatile uint32_t x319 = 98736U;
	int16_t x320 = 3390;
	int64_t t78 = -149748462063640721LL;

	t78 = ((x317|(x318%x319))^x320);

	if (t78 != -3391LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x321 = UINT64_MAX;
	volatile uint16_t x322 = 0U;
	int16_t x323 = -2655;
	volatile int64_t x324 = INT64_MIN;

	t79 = ((x321|(x322%x323))^x324);

	if (t79 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x327 = 2U;
	static uint32_t x328 = 47U;
	volatile int64_t t80 = 1395284LL;

	t80 = ((x325|(x326%x327))^x328);

	if (t80 != -48LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x329 = 4;
	int8_t x330 = -1;
	int64_t x331 = INT64_MIN;
	static int16_t x332 = -7284;
	volatile int64_t t81 = 27788161LL;

	t81 = ((x329|(x330%x331))^x332);

	if (t81 != 7283LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = -117238882142265LL;
	uint64_t x334 = 0LLU;
	static int16_t x335 = INT16_MAX;
	volatile uint64_t t82 = 147720488959178LLU;

	t82 = ((x333|(x334%x335))^x336);

	if (t82 != 18446626834827409208LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = INT64_MAX;
	int32_t x338 = INT32_MAX;
	int32_t x339 = 1;
	static int32_t x340 = -245;
	static int64_t t83 = -5100477649LL;

	t83 = ((x337|(x338%x339))^x340);

	if (t83 != -9223372036854775564LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x341 = -1;
	uint16_t x343 = 1683U;
	int32_t t84 = -185840;

	t84 = ((x341|(x342%x343))^x344);

	if (t84 != -166) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x345 = UINT32_MAX;
	int8_t x346 = -2;
	uint16_t x347 = 1424U;
	volatile uint32_t t85 = 2104461U;

	t85 = ((x345|(x346%x347))^x348);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x349 = 31615U;
	static int8_t x351 = INT8_MIN;
	int16_t x352 = -1;
	int32_t t86 = 18274704;

	t86 = ((x349|(x350%x351))^x352);

	if (t86 != -31616) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = -475;
	int8_t x354 = -1;
	uint16_t x356 = 6369U;

	t87 = ((x353|(x354%x355))^x356);

	if (t87 != -6370) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x357 = -78;
	uint64_t x359 = 159964LLU;
	uint16_t x360 = UINT16_MAX;

	t88 = ((x357|(x358%x359))^x360);

	if (t88 != 18446744073709486153LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x361 = UINT8_MAX;

	t89 = ((x361|(x362%x363))^x364);

	if (t89 != 4294948096LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x365 = INT64_MIN;
	uint64_t t90 = 45LLU;

	t90 = ((x365|(x366%x367))^x368);

	if (t90 != 18163891078837204020LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x369 = 0;
	volatile uint16_t x370 = 58U;
	int64_t x371 = INT64_MIN;

	t91 = ((x369|(x370%x371))^x372);

	if (t91 != 60LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x373 = INT64_MIN;
	int8_t x375 = -1;
	int64_t t92 = -1LL;

	t92 = ((x373|(x374%x375))^x376);

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = -1;
	int32_t x378 = INT32_MAX;
	static int16_t x380 = -10532;
	volatile int64_t t93 = -121853587747LL;

	t93 = ((x377|(x378%x379))^x380);

	if (t93 != 10531LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x382 = INT8_MAX;
	uint8_t x383 = 115U;
	volatile int32_t t94 = 190919543;

	t94 = ((x381|(x382%x383))^x384);

	if (t94 != -114) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x385 = INT8_MIN;
	uint32_t x386 = UINT32_MAX;
	uint32_t x387 = UINT32_MAX;
	volatile int8_t x388 = INT8_MIN;
	uint32_t t95 = 2U;

	t95 = ((x385|(x386%x387))^x388);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x389 = INT16_MIN;
	int8_t x390 = INT8_MIN;
	int32_t x391 = -1;
	uint8_t x392 = UINT8_MAX;

	t96 = ((x389|(x390%x391))^x392);

	if (t96 != -32513) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x394 = 16;
	int8_t x396 = INT8_MIN;
	volatile int64_t t97 = 3840795963607573254LL;

	t97 = ((x393|(x394%x395))^x396);

	if (t97 != 9223372036854775696LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x397 = UINT16_MAX;
	static volatile uint32_t x398 = 0U;
	int8_t x399 = INT8_MAX;
	uint32_t t98 = 10417U;

	t98 = ((x397|(x398%x399))^x400);

	if (t98 != 65494U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x401 = -1786588721083LL;
	volatile int16_t x402 = INT16_MAX;
	int32_t x404 = INT32_MIN;
	volatile int64_t t99 = -3064875049LL;

	t99 = ((x401|(x402%x403))^x404);

	if (t99 != 1784676614143LL) { NG(); } else { ; }
	
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

